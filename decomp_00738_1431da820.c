// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431da820 FUN_1431da820 body=12 status=ok
// SIG undefined FUN_1431da820(void)

void FUN_1431da820(longlong param_1)

{
  FUN_1431d61d0(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1431da830 FUN_1431da830 body=12 status=ok
// SIG undefined FUN_1431da830(void)

void FUN_1431da830(longlong param_1)

{
  FUN_1431d6540(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1431da850 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * AkMusicActionPlayClip::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ad07a0;
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_1431da89b;
    do {
      pvVar2 = *(void **)((longlong)pvVar1 + 0x18);
      if (pvVar2 == (void *)0x0) {
        param_1[7] = 0;
        pvVar2 = (void *)0x0;
      }
      else {
        param_1[7] = pvVar2;
      }
LAB_1431da89b:
      if (pvVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
        pvVar2 = (void *)param_1[7];
      }
      pvVar1 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  *param_1 = &PTR_FUN_144f1b048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1431da8f0 FUN_1431da8f0 body=43 status=ok
// SIG undefined FUN_1431da8f0(void)

undefined8 * FUN_1431da8f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1b048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1431da920 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkMusicClipSequencer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  CAkMusicActionSequencer::~CAkMusicActionSequencer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431da960 `scalar_deleting_destructor' body=137 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSubTrackCtx::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad07c8;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0830;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  FUN_1431aceb0(param_1 + 0x14);
  CAkMusicActionSequencer::~CAkMusicActionSequencer(param_1 + 0xd);
  CAkMusicCtx::~CAkMusicCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1431da9f0 FUN_1431da9f0 body=178 status=ok
// SIG undefined FUN_1431da9f0(void)

void FUN_1431da9f0(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0xd8);
  piVar1 = piVar3 + (ulonglong)*(uint *)(param_2 + 0xe0) * 6;
  for (; (piVar3 != piVar1 && ((*piVar3 != param_3 || (piVar3[1] != param_4)))); piVar3 = piVar3 + 6
      ) {
  }
  if (piVar3 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (((piVar3 != (int *)0x0) && (*(longlong *)(piVar3 + 2) != 0)) &&
     (puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20), puVar2 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar2 + 2) = param_5;
    *puVar2 = piVar3;
    puVar2[1] = 0;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      *(undefined8 **)(param_1 + 0x38) = puVar2;
      puVar2[3] = 0;
      return;
    }
    puVar2[3] = *(longlong *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar2;
  }
  return;
}



// FUNCTION 1431daab0 Create body=215 status=ok
// SIG undefined Create(void)

undefined8 * CAkSubTrackCtx::Create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    CAkMusicCtx::CAkMusicCtx(puVar1,param_1);
    *puVar1 = &PTR_StartProfileThreadUsage_145ad07c8;
    puVar1[3] = &PTR_StartProfileThreadUsage_145ad0830;
    puVar1[5] = &PTR_TransUpdateValue_145ad0210;
    CAkMusicActionSequencer::CAkMusicActionSequencer(puVar1 + 0xd);
    puVar1[0xd] = &PTR__scalar_deleting_destructor__145ad07c0;
    puVar1[0x11] = 0;
    puVar1[0x12] = param_2;
    *(undefined4 *)(puVar1 + 0x13) = param_3;
    FUN_141713660(puVar1 + 0x14);
    *(byte *)((longlong)puVar1 + 0xbc) = *(byte *)((longlong)puVar1 + 0xbc) & 0xfc;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    if ((longlong *)puVar1[0x12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[0x12] + 8))();
    }
  }
  return puVar1;
}



// FUNCTION 1431dab90 FUN_1431dab90 body=1292 status=ok
// SIG undefined FUN_1431dab90(void)

void FUN_1431dab90(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  long lVar6;
  longlong *plVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  
  lVar16 = param_1 + 0x68;
  local_60 = lVar16;
  iVar9 = CAkMusicActionSequencer::PopImminentAction(lVar16,param_2,param_3,&local_80);
  do {
    if (iVar9 != 0x2d) {
      return;
    }
    iVar18 = (int)local_80[2] - (int)param_2;
    iVar9 = (**(code **)(*local_80 + 8))();
    plVar7 = local_80;
    if (iVar9 == 0) {
      local_58 = 0;
      local_54 = 4;
      lVar10 = local_80[3];
      local_50 = 0;
      local_78 = CAkMusicTrack::GetSourcePtr
                           (*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(lVar10 + 4));
      if (local_78 != 0) {
        lVar16 = *(longlong *)(param_1 + 0x10);
        if (*(short *)(local_78 + 0x1a) == 0x10) {
          uVar20 = *(undefined4 *)((longlong)plVar7 + 0x24);
          lVar5 = plVar7[4];
          lVar4 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x68);
          uVar11 = CAkSegmentCtx::GetUserParams();
          uVar12 = CAkSegmentCtx::GameObjectPtr(lVar16);
          iVar9 = FUN_143de1340(lVar4 + 0x60,param_1,*(undefined8 *)(param_1 + 0x90),local_78,uVar12
                                ,&local_58,uVar11,lVar10,(int)lVar5,uVar20,iVar18,&local_68);
          if (local_68 == 0) goto LAB_1431dae55;
          puVar17 = (undefined8 *)(local_68 + 0x58);
        }
        else {
          lVar4 = plVar7[5];
          uVar20 = *(undefined4 *)((longlong)plVar7 + 0x24);
          uVar8 = CAkSegmentCtx::PlayDirectly();
          uVar11 = CAkSegmentCtx::GetUserParams(lVar16);
          uVar12 = CAkSegmentCtx::GameObjectPtr(lVar16);
          iVar9 = FUN_1431d53f0(param_1,*(undefined8 *)(param_1 + 0x90),local_78,uVar12,&local_58,
                                uVar11,uVar8,lVar10,uVar20,(int)lVar4 + iVar18,param_4,&local_70);
          if (local_70 == 0) {
LAB_1431dae55:
            puVar17 = (undefined8 *)0x0;
          }
          else {
            puVar17 = (undefined8 *)(local_70 + 0x2f0);
          }
        }
        puVar19 = (undefined8 *)0x0;
        if (iVar9 == 1) {
          if ((*(byte *)(param_1 + 0x62) & 2) == 0) {
            iVar9 = *(int *)(lVar10 + 0xc);
            iVar18 = *(int *)(lVar10 + 8);
            puVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
            if (puVar13 == (undefined8 *)0x0) {
              (**(code **)*puVar17)(puVar17,0);
              goto LAB_1431daf65;
            }
            *(int *)(puVar13 + 2) = iVar9 + iVar18;
            lVar16 = param_1 + 0x68;
            puVar13[3] = puVar17;
            *puVar13 = &PTR_FUN_145ad07b0;
            CAkMusicActionSequencer::ScheduleAction(lVar16,puVar13);
            while (plVar1 = (longlong *)plVar7[7], plVar1 != (longlong *)0x0) {
              puVar15 = puVar17 + -0x5e;
              plVar7[7] = plVar1[3];
              puVar14 = puVar17 + -0x5e;
              if (puVar17 == (undefined8 *)0x0) {
                puVar15 = (undefined8 *)0xfffffffffffffd10;
                puVar14 = puVar19;
              }
              plVar1[1] = (longlong)puVar14;
              *(undefined1 *)(puVar13 + 4) = 1;
              if (*(longlong *)(param_1 + 0x88) == 0) {
                *(longlong **)(param_1 + 0x88) = plVar1;
                plVar1[3] = 0;
              }
              else {
                plVar1[3] = *(longlong *)(param_1 + 0x88);
                *(longlong **)(param_1 + 0x88) = plVar1;
              }
              if (*(int *)(*plVar1 + 4) == 3) {
                if (puVar17 == (undefined8 *)0x0) {
                  puVar15 = puVar19;
                }
                CAkMusicPBI::FixStartTimeForFadeIn(puVar15);
              }
              else if (*(int *)(*plVar1 + 4) == 4) {
                if (puVar17 == (undefined8 *)0x0) {
                  puVar15 = puVar19;
                }
                *(uint *)(puVar15 + 0x62) = *(uint *)(puVar15 + 0x62) | 1;
              }
            }
          }
          else {
            (**(code **)*puVar17)(puVar17,*(undefined4 *)(param_1 + 0x5c));
            while (plVar1 = (longlong *)plVar7[7], lVar16 = local_60, plVar1 != (longlong *)0x0) {
              plVar7[7] = plVar1[3];
              lVar16 = *plVar1;
              plVar1[1] = (longlong)(puVar17 + -0x5e);
              uVar20 = FUN_143131860(lVar16 + 8);
              FUN_1431d6fa0(puVar17 + -0x5e,*(undefined4 *)(lVar16 + 4),uVar20);
              AK::MemoryMgr::Free(g_DefaultPoolId,plVar1);
            }
          }
        }
        else {
LAB_1431daf65:
          lVar16 = param_1 + 0x68;
        }
      }
    }
    else if ((iVar9 == 1) &&
            ((*(code *)**(undefined8 **)local_80[3])((undefined8 *)local_80[3],iVar18),
            (char)plVar7[4] != '\0')) {
      plVar1 = *(longlong **)(param_1 + 0x88);
      plVar3 = (longlong *)0x0;
      while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        lVar16 = plVar2[1];
        lVar10 = lVar16 + 0x2f0;
        if (lVar16 == 0) {
          lVar10 = 0;
        }
        if (lVar10 == plVar7[3]) {
          lVar10 = *plVar2;
          uVar20 = FUN_143131860(lVar10 + 8);
          FUN_1431d6fa0(lVar16,*(undefined4 *)(lVar10 + 4),uVar20);
          plVar1 = (longlong *)plVar2[3];
          if (plVar2 == *(longlong **)(param_1 + 0x88)) {
            *(longlong **)(param_1 + 0x88) = plVar1;
          }
          else {
            plVar3[3] = (longlong)plVar1;
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,plVar2);
        }
        else {
          plVar1 = (longlong *)plVar2[3];
          plVar3 = plVar2;
        }
      }
      goto LAB_1431daf65;
    }
    plVar7 = local_80;
    lVar6 = g_DefaultPoolId;
    if (local_80 != (longlong *)0x0) {
      (**(code **)*local_80)(local_80,0);
      AK::MemoryMgr::Free(lVar6,plVar7);
    }
    iVar9 = CAkMusicActionSequencer::PopImminentAction
                      (lVar16,param_2 & 0xffffffff,param_3 & 0xffffffff,&local_80);
  } while( true );
}



// FUNCTION 1431db0a0 FUN_1431db0a0 body=223 status=ok
// SIG undefined FUN_1431db0a0(void)

ulonglong FUN_1431db0a0(longlong param_1,longlong param_2,int *param_3,uint *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = 0;
  if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    if (((byte)*(undefined4 *)(*(longlong *)(param_2 + 0x220) + 0xc) & 0x7c) == 4) {
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x220) + 0x20);
      *param_3 = iVar4;
    }
    else {
      *param_3 = 0;
      iVar4 = 0;
    }
    uVar7 = (uint)DAT_1467bdcb8;
    lVar2 = *(longlong *)(param_2 + 0x308);
    uVar3 = iVar4 + -1 + uVar7;
    *param_3 = (uVar3 / uVar7) * uVar7;
    iVar4 = CAkSegmentCtx::GetTimeWindowSize(uVar1,(ulonglong)uVar3 % (ulonglong)uVar7);
    uVar5 = CAkSegmentCtx::GetClipPosition(uVar1);
    iVar4 = (int)uVar5 - iVar4;
    if (*param_3 + iVar4 < *(int *)(lVar2 + 0xc) + *(int *)(lVar2 + 8)) {
      uVar7 = (*(int *)(lVar2 + 0x14) - *(int *)(lVar2 + 8)) + *param_3 + iVar4;
      uVar3 = *(uint *)(lVar2 + 0x10);
      uVar6 = uVar7 % uVar3;
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      *param_4 = uVar6;
      return CONCAT71((int7)((ulonglong)uVar7 / (ulonglong)uVar3 >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1431db180 Init body=5 status=ok
// SIG undefined Init(void)

void CAkMusicCtx::Init(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1431d61d0(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1431db1a0 OnPlayed body=151 status=ok
// SIG undefined OnPlayed(void)

void CAkSubTrackCtx::OnPlayed(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  CAkMusicCtx::OnPlayed();
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_30 = 0xff00;
  local_14 = 1;
  local_38 = CAkSegmentCtx::GameObjectPtr(*(undefined8 *)(param_1 + 0x10));
  uVar1 = CAkSegmentCtx::PlayingID(*(undefined8 *)(param_1 + 0x10));
  local_20 = CONCAT44(uVar1,(undefined4)local_20);
  local_14 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x148))
            (*(longlong **)(param_1 + 0x90),&local_38,param_1 + 0xa0,1);
  if ((*(byte *)(param_1 + 0xbc) & 1) == 0) {
    FUN_1431db4e0(param_1);
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 1;
  }
  return;
}



// FUNCTION 1431db240 OnStopped body=173 status=ok
// SIG undefined OnStopped(void)

void CAkSubTrackCtx::OnStopped(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_1431db283;
    do {
      pvVar2 = *(void **)((longlong)pvVar1 + 0x18);
      if (pvVar2 == (void *)0x0) {
        *(undefined8 *)(param_1 + 0x88) = 0;
        pvVar2 = (void *)0x0;
      }
      else {
        *(void **)(param_1 + 0x88) = pvVar2;
      }
LAB_1431db283:
      if (pvVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
        pvVar2 = *(void **)(param_1 + 0x88);
      }
      pvVar1 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  CAkMusicActionSequencer::Flush(param_1 + 0x68);
  CAkMusicCtx::OnStopped(param_1);
  CAkSegmentCtx::RemoveReferences(*(undefined8 *)(param_1 + 0x10),param_1);
  if ((*(byte *)(param_1 + 0xbc) & 2) != 0) {
    return;
  }
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 2;
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431db2f0 OnTriggerModulators body=122 status=ok
// SIG undefined OnTriggerModulators(void)

void CAkSubTrackCtx::OnTriggerModulators(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = 0xff00;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 1;
  local_38 = CAkSegmentCtx::GameObjectPtr(*(undefined8 *)(param_1 + 0x10));
  uVar1 = CAkSegmentCtx::PlayingID(*(undefined8 *)(param_1 + 0x10));
  local_20 = CONCAT44(uVar1,(undefined4)local_20);
  local_14 = 2;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x148))
            (*(longlong **)(param_1 + 0x90),&local_38,param_1 + 0xa0,1);
  return;
}



// FUNCTION 1431db370 Process body=164 status=ok
// SIG undefined Process(void)

void CAkSubTrackCtx::Process(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (((*(byte *)(param_1 + 0x62) & 2) != 0) && (*(int *)(param_1 + 0x5c) != -1)) {
    param_3 = *(undefined4 *)(param_1 + 0x5c);
  }
  FUN_1431dab90(param_1,param_2,param_3);
  for (plVar1 = *(longlong **)(param_1 + 0x88); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[3]) {
    lVar2 = *plVar1;
    uVar3 = FUN_143131860(lVar2 + 8);
    FUN_1431d6fa0(plVar1[1],*(undefined4 *)(lVar2 + 4),uVar3);
  }
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431db420 FUN_1431db420 body=178 status=ok
// SIG undefined FUN_1431db420(void)

void FUN_1431db420(longlong param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  CAkMusicSubTrackSequencer::ClearSubTrackCtx(param_1 + 0x68);
  pvVar1 = *(void **)(param_1 + 0x88);
  pvVar4 = (void *)0x0;
  while (pvVar3 = pvVar4, pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
    pvVar5 = (void *)(*(longlong *)((longlong)pvVar2 + 8) + 0x2f0);
    if (*(longlong *)((longlong)pvVar2 + 8) == 0) {
      pvVar5 = (void *)0x0;
    }
    pvVar4 = pvVar2;
    if (pvVar5 == param_2) {
      if (pvVar2 == *(void **)(param_1 + 0x88)) {
        *(void **)(param_1 + 0x88) = pvVar1;
      }
      else {
        *(void **)((longlong)pvVar3 + 0x18) = pvVar1;
      }
      pvVar4 = pvVar3;
      if (pvVar2 != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
      }
    }
  }
  return;
}



// FUNCTION 1431db4e0 FUN_1431db4e0 body=592 status=ok
// SIG undefined FUN_1431db4e0(void)

void FUN_1431db4e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_res8;
  longlong local_res18;
  
  lVar4 = *(longlong *)(param_1 + 0x90);
  uVar10 = 0;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  if (uVar1 != 0) {
    local_res18 = 0;
    do {
      piVar7 = (int *)(local_res18 + *(longlong *)(lVar4 + 0xf0));
      if ((*(int *)(param_1 + 0x98) == *piVar7) &&
         (lVar5 = CAkMusicTrack::GetSourcePtr(*(undefined8 *)(param_1 + 0x90),piVar7[1]), lVar5 != 0
         )) {
        iVar9 = 0;
        if ((((byte)*(uint *)(lVar5 + 0xc) & 0x7c) == 4) &&
           ((((*(uint *)(lVar5 + 0xc) >> 1 & 1) == 0 || (piVar7[2] < *(int *)(param_1 + 0xb8))) ||
            (piVar7[5] != 0)))) {
          iVar9 = *(int *)(lVar5 + 0x20);
        }
        iVar8 = piVar7[3];
        iVar2 = piVar7[2];
        iVar3 = *(int *)(param_1 + 0xb8);
        if (iVar3 < iVar8 + iVar2) {
          if (iVar2 < iVar3) {
            iVar11 = iVar3 - iVar9;
            local_res8 = (uint)((iVar3 - iVar2) + piVar7[5]) % (uint)piVar7[4];
            iVar8 = (iVar8 - iVar3) + iVar2;
          }
          else {
            local_res8 = piVar7[5];
            iVar11 = iVar2 - iVar9;
          }
          puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
          if (puVar6 != (undefined8 *)0x0) {
            *(int *)(puVar6 + 2) = iVar11;
            puVar6[3] = piVar7;
            *puVar6 = &PTR__scalar_deleting_destructor__145ad07a0;
            *(uint *)((longlong)puVar6 + 0x24) = local_res8;
            *(int *)(puVar6 + 4) = iVar8;
            *(int *)(puVar6 + 5) = iVar9;
            puVar6[7] = 0;
            CAkMusicActionSequencer::ScheduleAction(param_1 + 0x68,puVar6);
            if (*(short *)(lVar5 + 0x1a) != 0x10) {
              FUN_1431da9f0(puVar6,*(undefined8 *)(param_1 + 0x90),uVar10,0,piVar7[2]);
              FUN_1431da9f0(puVar6,*(undefined8 *)(param_1 + 0x90),uVar10,1,piVar7[2]);
              FUN_1431da9f0(puVar6,*(undefined8 *)(param_1 + 0x90),uVar10,2,piVar7[2]);
              FUN_1431da9f0(puVar6,*(undefined8 *)(param_1 + 0x90),uVar10,3,piVar7[2]);
              FUN_1431da9f0(puVar6,*(undefined8 *)(param_1 + 0x90),uVar10,4,piVar7[2]);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      local_res18 = local_res18 + 0x18;
    } while (uVar10 < uVar1);
  }
  return;
}



// FUNCTION 1431db730 CAkChainCtx body=77 status=ok
// SIG undefined CAkChainCtx(void)

undefined8 * CAkChainCtx::CAkChainCtx(undefined8 *param_1)

{
  CAkMatrixAwareCtx::CAkMatrixAwareCtx();
  *param_1 = &PTR_StartProfileThreadUsage_145ad0840;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0948;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1431db780 ~CAkChainCtx body=159 status=ok
// SIG undefined ~CAkChainCtx(void)

void CAkChainCtx::~CAkChainCtx(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0x11];
  *param_1 = &PTR_StartProfileThreadUsage_145ad0840;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0948;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  while (lVar1 != 0) {
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      lVar2 = *(longlong *)param_1[0x11];
      if (lVar2 == 0) {
        param_1[0x11] = 0;
        param_1[0x10] = 0;
      }
      else {
        param_1[0x11] = lVar2;
      }
    }
    CAkScheduledItem::Destroy(lVar1);
    lVar1 = param_1[0x11];
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  CAkMatrixAwareCtx::~CAkMatrixAwareCtx(param_1);
  return;
}



// FUNCTION 1431db830 `scalar_deleting_destructor' body=189 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkChainCtx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0x11];
  *param_1 = &PTR_StartProfileThreadUsage_145ad0840;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0948;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  while (lVar1 != 0) {
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      lVar2 = *(longlong *)param_1[0x11];
      if (lVar2 == 0) {
        param_1[0x11] = 0;
        param_1[0x10] = 0;
      }
      else {
        param_1[0x11] = lVar2;
      }
    }
    CAkScheduledItem::Destroy(lVar1);
    lVar1 = param_1[0x11];
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  CAkMatrixAwareCtx::~CAkMatrixAwareCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1431db930 CancelPlayback body=122 status=ok
// SIG undefined CancelPlayback(void)

void CAkChainCtx::CancelPlayback(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) == 0) {
    (**(code **)(*param_1 + 0x60))();
    FUN_1431d64a0(param_1);
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x12);
    lVar3 = param_1[0xe];
    for (puVar2 = (undefined8 *)param_1[0x11]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      CAkScheduledItem::CancelPlayback(puVar2,((ulonglong)uVar1 - lVar3) + param_2);
    }
  }
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431db9b0 CtxTimeToSegmentPosition body=21 status=ok
// SIG undefined CtxTimeToSegmentPosition(void)

longlong AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                   (longlong *param_1,longlong param_2)

{
  return ((ulonglong)*(uint *)(param_1[1] + 0x90) - *(longlong *)(*param_1 + 8)) + param_2;
}



// FUNCTION 1431db9d0 EnqueueItem body=166 status=ok
// SIG undefined EnqueueItem(void)

undefined8 * CAkChainCtx::EnqueueItem(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x50);
  if (pvVar1 != (void *)0x0) {
    puVar2 = (undefined8 *)CAkScheduledItem::CAkScheduledItem(pvVar1,param_2,param_3);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      if (*(longlong *)(param_1 + 0x88) == 0) {
        *(undefined8 **)(param_1 + 0x88) = puVar2;
        *(undefined8 **)(param_1 + 0x80) = puVar2;
        return puVar2;
      }
      **(undefined8 **)(param_1 + 0x80) = puVar2;
      *(undefined8 **)(param_1 + 0x80) = puVar2;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431dba80 Flush body=134 status=ok
// SIG undefined Flush(void)

void CAkChainCtx::Flush(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0x11];
  while (lVar1 != 0) {
    (**(code **)(*param_1 + 0x100))(param_1,lVar1);
    CAkScheduledItem::OnStopped(lVar1);
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      lVar2 = *(longlong *)param_1[0x11];
      if (lVar2 == 0) {
        param_1[0x11] = 0;
        param_1[0x10] = 0;
      }
      else {
        param_1[0x11] = lVar2;
      }
    }
    CAkScheduledItem::Destroy(lVar1);
    lVar1 = param_1[0x11];
  }
  return;
}



// FUNCTION 1431dbb10 FUN_1431dbb10 body=384 status=ok
// SIG undefined FUN_1431dbb10(void)

void FUN_1431dbb10(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_2 + 0x108) == 0) {
    plVar5 = (longlong *)param_1[0x11];
    local_38._0_4_ = SUB84(plVar5,0);
    uVar2 = (undefined4)local_38;
    local_38._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
    uVar3 = local_38._4_4_;
    uStack_30 = SUB84(param_1,0);
    uVar10 = uStack_30;
    uStack_2c = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar11 = uStack_2c;
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    local_38 = plVar5;
    if (*(char *)(param_2 + 299) == '\0') {
      lVar8 = param_1[0xe];
      lVar9 = *(longlong *)(param_1[0xd] + 8);
      if (param_1[2] != 0) {
        lVar6 = CAkMatrixAwareCtx::GetAbsoluteTimeOffset();
        lVar8 = lVar8 + lVar6;
      }
      local_38._0_4_ = uVar2;
      local_38._4_4_ = uVar3;
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)*plVar5;
        do {
          if (lVar9 - lVar8 <= (longlong)(plVar5[1] - (ulonglong)*(uint *)(param_1 + 0x12))) break;
          plVar1 = (longlong *)*plVar5;
          local_38._0_4_ = SUB84(plVar5,0);
          local_38._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
          plVar5 = plVar1;
          uVar10 = uStack_30;
          uVar11 = uStack_2c;
        } while (plVar1 != (longlong *)0x0);
      }
      uStack_30 = uVar10;
      uStack_2c = uVar11;
    }
  }
  else {
    local_38 = (longlong *)**(longlong **)(param_2 + 0x108);
    uStack_30 = *(undefined4 *)(param_2 + 0x110);
    uStack_2c = *(undefined4 *)(param_2 + 0x114);
    if ((longlong *)**(longlong **)(param_2 + 0x108) == (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x108) = 0;
      return;
    }
  }
  lVar8 = *local_38;
  uVar7 = 0;
  lVar9 = 0;
  if (lVar8 == 0) {
    if ((param_3 != '\0') || (cVar4 = (**(code **)(*param_1 + 0xd8))(param_1), cVar4 == '\0')) {
      uVar7 = 1;
      goto LAB_1431dbc51;
    }
    lVar8 = *local_38;
  }
  lVar6 = *(longlong *)(lVar8 + 8) - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar8 = lVar9;
  if (-1 < lVar6) {
    lVar8 = lVar6;
  }
  lVar6 = local_38[1] - (ulonglong)*(uint *)(param_1 + 0x12);
  if (-1 < lVar6) {
    lVar9 = lVar6;
  }
  lVar9 = lVar8 - lVar9;
LAB_1431dbc51:
  CAkScheduleWindow::SetScheduledItem(param_2,&local_38);
  CAkScheduleWindow::SetDuration(param_2,lVar9,uVar7);
  return;
}



// FUNCTION 1431dbc90 GetScheduledItemTime body=30 status=ok
// SIG undefined GetScheduledItemTime(void)

longlong AkScheduledChain::SelfContainedIter::GetScheduledItemTime(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 8) - (ulonglong)*(uint *)(param_1[1] + 0x90);
  lVar1 = 0;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



// FUNCTION 1431dbcb0 GetSegmentPosition body=221 status=ok
// SIG undefined GetSegmentPosition(void)

int CAkChainCtx::GetSegmentPosition(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_138 [264];
  longlong local_30;
  longlong local_28;
  
  FUN_1431dc400(local_138,param_1,1);
  lVar2 = local_30;
  while (local_30 = lVar2, lVar2 != param_2) {
    (**(code **)(*param_1 + 0x80))(param_1,local_138,1);
    lVar2 = local_30;
  }
  iVar4 = (int)param_1[0xe];
  uVar1 = *(undefined8 *)(param_1[0xd] + 8);
  if (param_1[2] != 0) {
    iVar3 = CAkMatrixAwareCtx::GetAbsoluteTimeOffset();
    iVar4 = iVar4 + iVar3;
  }
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_138,0);
    iVar4 = (*(int *)(local_28 + 0x90) - *(int *)(local_30 + 8)) + (((int)uVar1 - iVar4) - iVar3);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_138);
  return iVar4;
}



// FUNCTION 1431dbd90 FUN_1431dbd90 body=165 status=ok
// SIG undefined FUN_1431dbd90(void)

void FUN_1431dbd90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  lVar1 = param_1[0x11];
  while (lVar1 != 0) {
    (**(code **)(*param_1 + 0x100))(param_1,lVar1);
    CAkScheduledItem::OnStopped(lVar1);
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      lVar2 = *(longlong *)param_1[0x11];
      if (lVar2 == 0) {
        param_1[0x11] = 0;
        param_1[0x10] = 0;
      }
      else {
        param_1[0x11] = lVar2;
      }
    }
    CAkScheduledItem::Destroy(lVar1);
    lVar1 = param_1[0x11];
  }
  CAkMatrixAwareCtx::OnStopped(param_1);
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431dbe40 FUN_1431dbe40 body=678 status=ok
// SIG undefined FUN_1431dbe40(void)

byte FUN_1431dbe40(longlong *param_1,int *param_2,float *param_3,int *param_4,undefined8 param_5,
                  undefined4 param_6,char param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8 [2];
  
  puVar1 = (undefined8 *)param_1[0x11];
  if (param_3[2] != 0.0) {
    *(int *)(param_1 + 10) = (int)param_1[10] + 1;
    iVar7 = (**(code **)(*param_1 + 0xf0))(param_1,param_3[2]);
    if (iVar7 != 1) {
      CAkMusicCtx::_Cancel();
      FUN_1431d64a0(param_1);
      return 0;
    }
    FUN_1431d64a0(param_1);
    param_3[2] = 0.0;
    return 2;
  }
  fVar9 = 0.0;
  local_res8[0] = 0.0;
  if (param_2 == (int *)0x0) {
    fVar8 = *param_3;
    *param_3 = 0.0;
    local_res8[0] = fVar9;
    if (0 < (int)fVar8) {
      local_res8[0] = fVar8;
    }
    *(undefined1 *)(param_3 + 1) = 0;
    fVar9 = fVar8;
  }
  else if (puVar1[4] == 0) {
    *param_3 = 0.0;
    *(undefined1 *)(param_3 + 1) = 0;
    fVar9 = 0.0;
  }
  else {
    uVar2 = *(undefined8 *)(puVar1[4] + 0x80);
    fVar8 = (float)CAkMusicSegment::ActiveDuration(uVar2,0,0);
    if (*(char *)(param_3 + 1) == '\0') {
      fVar10 = *param_3;
    }
    else {
      fVar10 = (float)(int)((float)(uint)fVar8 * *param_3);
    }
    fVar11 = fVar10;
    if ((param_7 != '\0') && (fVar11 = 0.0, fVar8 != 0.0)) {
      fVar11 = (float)((uint)fVar10 % (uint)fVar8);
    }
    CAkMusicSegment::GetEntrySyncPos(uVar2,param_2,fVar11,param_6,param_5,local_res8);
    *(undefined1 *)(param_3 + 1) = 0;
    if ((uint)fVar8 < (uint)local_res8[0]) {
      local_res8[0] = fVar8;
    }
    fVar10 = fVar11;
    if ((uint)local_res8[0] < (uint)fVar11) {
      fVar10 = local_res8[0];
    }
    *param_3 = (float)((int)fVar11 - (int)fVar10);
    if (((uint)fVar8 <= (uint)local_res8[0]) && ((fVar8 != 0.0 || (local_res8[0] != 0.0)))) {
      lVar3 = param_1[0x11];
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      CAkScheduledItem::OnStopped(lVar3);
      if ((longlong *)param_1[0x11] != (longlong *)0x0) {
        lVar4 = *(longlong *)param_1[0x11];
        if (lVar4 == 0) {
          param_1[0x11] = 0;
          param_1[0x10] = 0;
        }
        else {
          param_1[0x11] = lVar4;
        }
      }
      CAkScheduledItem::Destroy(lVar3);
      (**(code **)(*param_1 + 0xe0))(param_1,local_res8[0]);
      FUN_1431d64a0(param_1);
      return -(*(longlong *)(param_1[0x11] + 0x20) != 0) & 2;
    }
    if ((((*(ushort *)(param_2 + 5) & 8) == 0) || (local_res8[0] != 0.0)) ||
       (((byte)*(ushort *)(param_2 + 5) & 7) == 1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    iVar7 = CAkMusicSegment::PreEntryDuration(uVar2);
    if (*param_2 < 1) {
      fVar8 = local_res8[0];
      if (bVar5) {
        fVar8 = (float)((int)local_res8[0] - iVar7);
      }
    }
    else {
      fVar8 = (float)((int)local_res8[0] + param_2[2]);
      if (((int)fVar8 < 0) && (!bVar5)) goto LAB_1431dc077;
    }
    fVar9 = fVar8;
  }
LAB_1431dc077:
  iVar7 = CAkScheduledItem::Prepare(puVar1,local_res8[0],fVar9);
  local_res8[0] = (float)((int)local_res8[0] + *(int *)(puVar1 + 1));
  *(float *)(param_1 + 0x12) = local_res8[0];
  (**(code **)(*param_1 + 0xe0))(param_1,local_res8[0]);
  puVar1 = (undefined8 *)*puVar1;
  while (iVar6 = iVar7, puVar1 != (undefined8 *)0x0) {
    iVar7 = ((int)local_res8[0] - *(int *)((longlong)puVar1 + 0x2c)) - *(int *)(puVar1 + 1);
    puVar1 = (undefined8 *)*puVar1;
    if (iVar7 <= iVar6) {
      iVar7 = iVar6;
    }
  }
  *param_4 = iVar6;
  return 1;
}



// FUNCTION 1431dc0f0 Process body=386 status=ok
// SIG undefined Process(void)

void CAkChainCtx::Process(longlong *param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  undefined1 uVar10;
  
  lVar2 = param_1[0xe];
  *param_4 = *param_4 - lVar2;
  param_2 = param_2 - lVar2;
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  param_3 = param_3 & 0xffffffff;
  if (((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) && (*(int *)((longlong)param_1 + 0x5c) != -1)
     ) {
    param_3 = (ulonglong)*(uint *)((longlong)param_1 + 0x5c);
  }
  uVar1 = *(uint *)(param_1 + 0x12);
  lVar3 = *param_4;
  lVar2 = (ulonglong)uVar1 + param_2;
  (**(code **)(*param_1 + 0xe0))(param_1,lVar2);
  bVar6 = true;
  plVar5 = (longlong *)param_1[0x11];
  plVar8 = (longlong *)0x0;
joined_r0x0001431dc15f:
  do {
    plVar7 = plVar5;
    if (plVar7 == (longlong *)0x0) {
      CAkMatrixAwareCtx::ProcessEpilogue(param_1,param_2,param_3);
      return;
    }
    lVar4 = plVar7[1];
    if ((lVar2 <= lVar4) && (lVar4 < (longlong)(param_3 + param_2))) {
      (**(code **)(*param_1 + 0xf8))(param_1,plVar7);
    }
    if (((char)param_4[1] == '\0') || (lVar4 < (longlong)(lVar3 + (ulonglong)uVar1))) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    CAkScheduledItem::Process(plVar7,lVar2,param_3,*(undefined4 *)(param_1[0xd] + 0x54),uVar10);
    if (bVar6) {
      lVar4 = *plVar7;
      cVar9 = CAkScheduledItem::CanDestroy();
      if (((cVar9 != '\0') && (lVar4 != 0)) && (*(longlong *)(lVar4 + 8) < lVar2)) {
        plVar5 = (longlong *)*plVar7;
        if (plVar7 == (longlong *)param_1[0x11]) {
          param_1[0x11] = (longlong)plVar5;
        }
        else {
          *plVar8 = (longlong)plVar5;
        }
        if (plVar7 == (longlong *)param_1[0x10]) {
          param_1[0x10] = (longlong)plVar8;
        }
        CAkScheduledItem::Destroy();
        goto joined_r0x0001431dc15f;
      }
      bVar6 = false;
    }
    plVar5 = (longlong *)*plVar7;
    plVar8 = plVar7;
  } while( true );
}



// FUNCTION 1431dc280 QueryLookAheadInfo body=171 status=ok
// SIG undefined QueryLookAheadInfo(void)

void CAkChainCtx::QueryLookAheadInfo(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (puVar1[4] == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  puVar2 = (undefined8 *)*puVar1;
  lVar3 = (longlong)*(int *)((longlong)puVar1 + 0x2c) + puVar1[1];
  lVar6 = (longlong)*(int *)(puVar1[4] + 0xa0) + puVar1[1];
  while ((lVar4 = lVar6, puVar2 != (undefined8 *)0x0 && (puVar2[4] != 0))) {
    lVar5 = (longlong)*(int *)((longlong)puVar2 + 0x2c) + puVar2[1];
    lVar6 = (longlong)*(int *)(puVar2[4] + 0xa0) + puVar2[1];
    puVar2 = (undefined8 *)*puVar2;
    if (lVar3 <= lVar5) {
      lVar5 = lVar3;
    }
    lVar3 = lVar5;
    if (lVar4 <= lVar6) {
      lVar6 = lVar4;
    }
  }
  *param_2 = lVar3 - (ulonglong)*(uint *)(param_1 + 0x90);
  *param_3 = lVar4 - (ulonglong)*(uint *)(param_1 + 0x90);
  return;
}



// FUNCTION 1431dc330 RefreshWindow body=168 status=ok
// SIG undefined RefreshWindow(void)

void CAkChainCtx::RefreshWindow(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = *(longlong **)(param_2 + 0x108);
  uVar5 = 0;
  lVar6 = 0;
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    cVar2 = (**(code **)(*param_1 + 0xd8))();
    if (cVar2 == '\0') {
      uVar5 = 1;
      goto LAB_1431dc3af;
    }
    lVar3 = *plVar1;
  }
  lVar7 = plVar1[1] - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar4 = *(longlong *)(lVar3 + 8) - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar3 = lVar6;
  if (-1 < lVar4) {
    lVar3 = lVar4;
  }
  if (-1 < lVar7) {
    lVar6 = lVar7;
  }
  lVar6 = lVar3 - lVar6;
LAB_1431dc3af:
  CAkScheduleWindow::SetDuration(param_2,lVar6,uVar5);
  return;
}



// FUNCTION 1431dc3e0 SegmentPositionToCtxTime body=25 status=ok
// SIG undefined SegmentPositionToCtxTime(void)

longlong AkScheduledChain::SelfContainedIter::SegmentPositionToCtxTime
                   (longlong *param_1,longlong param_2)

{
  return (*(longlong *)(*param_1 + 8) - (ulonglong)*(uint *)(param_1[1] + 0x90)) + param_2;
}



// FUNCTION 1431dc400 FUN_1431dc400 body=120 status=ok
// SIG undefined FUN_1431dc400(void)

longlong FUN_1431dc400(longlong param_1,longlong *param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(byte *)(param_1 + 299) = param_3;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  (**(code **)(*param_2 + 0x80))(param_2,param_1,0);
  *(byte *)(param_1 + 0x12a) = param_3 ^ 1;
  return param_1;
}



// FUNCTION 1431dc480 CAkScheduleWindow body=60 status=ok
// SIG undefined CAkScheduleWindow(void)

longlong CAkScheduleWindow::CAkScheduleWindow(longlong param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined1 *)(param_1 + 299) = param_2;
  return param_1;
}



// FUNCTION 1431dc4c0 CancelActionsAfterTransitionSyncPoint body=111 status=ok
// SIG undefined CancelActionsAfterTransitionSyncPoint(void)

void CAkScheduleWindow::CancelActionsAfterTransitionSyncPoint
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x108);
  if (*plVar1 == 0) {
    lVar2 = 0x7fffffffffffffff;
    lVar4 = 0;
  }
  else {
    lVar2 = ChainCtxTimeRelativeToLevel(param_1,0);
    lVar3 = AkScheduledChain::SelfContainedIter::GetScheduledItemTime(plVar1);
    lVar4 = *plVar1;
    lVar2 = lVar2 + lVar3;
  }
  CAkScheduledItem::PopAssociatedActionsToRescheduleAfterTransitionSyncPoint
            (lVar4,param_2,param_3 - lVar2);
  return;
}



// FUNCTION 1431dc530 ChainCtxTimeRelativeToLevel body=159 status=ok
// SIG undefined ChainCtxTimeRelativeToLevel(void)

longlong CAkScheduleWindow::ChainCtxTimeRelativeToLevel(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  lVar6 = 0;
  uVar9 = (ulonglong)param_2;
  if (uVar2 <= param_2) {
    return 0;
  }
  lVar7 = lVar6;
  lVar8 = lVar6;
  if (1 < uVar2 - param_2) {
    lVar1 = uVar9 * 8;
    uVar3 = ((uVar2 - param_2) - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar3;
    uVar9 = (ulonglong)(param_2 + uVar3 * 2);
    plVar4 = (longlong *)(param_1 + lVar1);
    do {
      lVar7 = lVar7 + *(longlong *)(*(longlong *)(*plVar4 + 8) + 0x70);
      lVar8 = lVar8 + *(longlong *)(*(longlong *)(plVar4[1] + 8) + 0x70);
      uVar5 = uVar5 - 1;
      plVar4 = plVar4 + 2;
    } while (uVar5 != 0);
  }
  if ((uint)uVar9 < uVar2) {
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + uVar9 * 8) + 8) + 0x70);
  }
  return lVar8 + lVar7 + lVar6;
}



// FUNCTION 1431dc5d0 FindSyncPoint body=326 status=ok
// SIG undefined FindSyncPoint(void)

ulonglong CAkScheduleWindow::FindSyncPoint
                    (longlong param_1,longlong param_2,int param_3,undefined4 *param_4,
                    undefined1 param_5,char param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = ChainCtxTimeRelativeToLevel(param_1,0);
    lVar2 = AkScheduledChain::SelfContainedIter::GetScheduledItemTime(param_1 + 0x108);
    lVar1 = lVar1 + lVar2;
  }
  if (param_2 < lVar1) {
    param_2 = lVar1;
  }
  lVar2 = ChainCtxTimeRelativeToLevel(param_1,0);
  uVar3 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                    (param_1 + 0x108,param_2 - lVar2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20);
  if ((lVar2 == 0) || (*(char *)(param_1 + 0x129) != '\0')) {
    *param_4 = 0;
    if ((param_6 == '\0') && (param_3 != 0)) {
      return 2;
    }
    uVar6 = 1;
  }
  else {
    uVar4 = FUN_1431df4d0(*(undefined8 *)(lVar2 + 0x80),uVar3,param_3,param_4,param_5,local_res8);
    uVar3 = (ulonglong)local_res8[0];
    uVar6 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 1) {
      return uVar4;
    }
  }
  lVar2 = AkScheduledChain::SelfContainedIter::SegmentPositionToCtxTime(param_1 + 0x108,uVar3);
  lVar5 = ChainCtxTimeRelativeToLevel(param_1,0);
  *param_7 = lVar2 + lVar5;
  if ((*(char *)(param_1 + 0x128) == '\0') &&
     (*(longlong *)(param_1 + 0x120) + lVar1 < lVar2 + lVar5)) {
    uVar6 = 3;
  }
  return uVar6;
}



// FUNCTION 1431dc720 GetBranch body=38 status=ok
// SIG undefined GetBranch(void)

undefined8 * CAkScheduleWindow::GetBranch(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x118) - 1;
  if (uVar1 == *(uint *)(param_1 + 0x100)) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = *(undefined8 *)(param_1 + (ulonglong)uVar1 * 8);
  return param_2;
}



// FUNCTION 1431dc750 GetNode body=130 status=ok
// SIG undefined GetNode(void)

longlong CAkScheduleWindow::GetNode(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20);
  if (lVar1 == 0) {
    if (param_2 != (longlong *)0x0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x98))();
      *param_2 = lVar1;
      if (lVar1 == 0) {
        lVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x110) + 0x10) + 0x98))();
        *param_2 = lVar1;
      }
    }
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x80);
    if (param_2 != (longlong *)0x0) {
      *param_2 = *(longlong *)(lVar1 + 0x80);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 1431dc7e0 IsAtExitCue body=107 status=ok
// SIG undefined IsAtExitCue(void)

bool CAkScheduleWindow::IsAtExitCue(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x108);
  if (*(longlong *)(*plVar1 + 0x20) == 0) {
    return false;
  }
  lVar4 = ChainCtxTimeRelativeToLevel(param_1,0);
  iVar2 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition(plVar1,param_2 - lVar4);
  uVar5 = 0;
  if (*(longlong *)(*plVar1 + 0x20) != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(*plVar1 + 0x20) + 0x80);
  }
  iVar3 = CAkMusicSegment::ActiveDuration(uVar5);
  return iVar2 == iVar3;
}



// FUNCTION 1431dc850 NotifyMusicCallbacks body=124 status=ok
// SIG undefined NotifyMusicCallbacks(void)

void CAkScheduleWindow::NotifyMusicCallbacks
               (longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x108);
  if (*(longlong *)(*plVar1 + 0x20) != 0) {
    lVar3 = ChainCtxTimeRelativeToLevel(param_1,0);
    uVar2 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition(plVar1,param_2 - lVar3);
    CAkScheduledItem::NotifyMusicCallbacks(*plVar1,uVar2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 1431dc8d0 SetBranch body=135 status=ok
// SIG undefined SetBranch(void)

void CAkScheduleWindow::SetBranch(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x118) - 1;
  if (uVar3 == *(uint *)(param_1 + 0x100)) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(longlong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x100) * 8) = *param_2;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    return;
  }
  if (*(longlong *)(param_1 + (ulonglong)uVar3 * 8) != *param_2) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    uVar1 = *(uint *)(param_1 + 0x100);
    if ((int)uVar3 <= (int)(uVar1 - 1)) {
      uVar2 = (ulonglong)(((uVar1 - 1) - uVar3) + 1);
      do {
        uVar1 = uVar1 - 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(uint *)(param_1 + 0x100) = uVar1;
    }
    *(longlong *)(param_1 + (ulonglong)uVar1 * 8) = *param_2;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  return;
}



// FUNCTION 1431dc960 SetDuration body=15 status=ok
// SIG undefined SetDuration(void)

void CAkScheduleWindow::SetDuration(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_2;
  *(undefined1 *)(param_1 + 0x128) = param_3;
  return;
}



// FUNCTION 1431dc970 SetScheduledItem body=68 status=ok
// SIG undefined SetScheduledItem(void)

void CAkScheduleWindow::SetScheduledItem(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = (**(code **)(*(longlong *)param_2[1] + 0xd0))();
  *(bool *)(param_1 + 0x129) = cVar3 == '\0';
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return;
}



// FUNCTION 1431dc9c0 StartTime body=72 status=ok
// SIG undefined StartTime(void)

longlong CAkScheduleWindow::StartTime(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar1 = ChainCtxTimeRelativeToLevel(param_1,0);
    lVar2 = AkScheduledChain::SelfContainedIter::GetScheduledItemTime((longlong *)(param_1 + 0x108))
    ;
    return lVar2 + lVar1;
  }
  return 0x7fffffffffffffff;
}



// FUNCTION 1431dca10 StartTimeRelativeToCurrentLevel body=78 status=ok
// SIG undefined StartTimeRelativeToCurrentLevel(void)

longlong CAkScheduleWindow::StartTimeRelativeToCurrentLevel(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar1 = ChainCtxTimeRelativeToLevel(param_1,*(int *)(param_1 + 0x118) + -1);
    lVar2 = AkScheduledChain::SelfContainedIter::GetScheduledItemTime((longlong *)(param_1 + 0x108))
    ;
    return lVar2 + lVar1;
  }
  return 0x7fffffffffffffff;
}



// FUNCTION 1431dca60 CAkSegmentCtx body=153 status=ok
// SIG undefined CAkSegmentCtx(void)

undefined8 * CAkSegmentCtx::CAkSegmentCtx(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  CAkMusicCtx::CAkMusicCtx(param_1,param_3);
  *param_1 = &PTR_StartProfileThreadUsage_145ad0988;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad09f0;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  CAkMusicActionSequencer::CAkMusicActionSequencer(param_1 + 0xd);
  param_1[0xd] = &PTR__scalar_deleting_destructor__145ad07c0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 8))();
  }
  return param_1;
}



// FUNCTION 1431dcb10 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AkMusicActionPlaySubTrack::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0958;
  (**(code **)(*(longlong *)param_1[3] + 0x10))();
  *param_1 = &PTR_FUN_144f1b048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431dcb60 FUN_1431dcb60 body=43 status=ok
// SIG undefined FUN_1431dcb60(void)

undefined8 * FUN_1431dcb60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1b048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1431dcb90 `scalar_deleting_destructor' body=176 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSegmentCtx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_StartProfileThreadUsage_145ad0988;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad09f0;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  lVar1 = param_1[0x13];
  while (lVar1 != 0) {
    if (lVar1 != 0) {
      param_1[0x13] = *(undefined8 *)(lVar1 + 0x30);
    }
    CAkRandomInfo::Destroy();
    lVar1 = param_1[0x13];
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  CAkMusicActionSequencer::~CAkMusicActionSequencer(param_1 + 0xd);
  CAkMusicCtx::~CAkMusicCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1431dcc40 AddSwitchTrackNotif body=314 status=ok
// SIG undefined AddSwitchTrackNotif(void)

void CAkSegmentCtx::AddSwitchTrackNotif(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x98);
  if (lVar8 != 0) {
    while (*(longlong *)(lVar8 + 0x10) != param_3) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x78);
    plVar4 = (longlong *)0x0;
    while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
      iVar6 = (**(code **)(*plVar3 + 8))(plVar3);
      if (((iVar6 == 2) && (param_2 <= (int)plVar3[2])) && (plVar3[3] == lVar8)) {
        plVar2 = (longlong *)plVar3[1];
        if (plVar3 == *(longlong **)(param_1 + 0x78)) {
          *(longlong **)(param_1 + 0x78) = plVar2;
        }
        else {
          plVar4[1] = (longlong)plVar2;
        }
        if (plVar3 == *(longlong **)(param_1 + 0x70)) {
          *(longlong **)(param_1 + 0x70) = plVar4;
        }
        lVar5 = g_DefaultPoolId;
        (**(code **)*plVar3)(plVar3,0);
        AK::MemoryMgr::Free(lVar5,plVar3);
      }
      else {
        plVar2 = (longlong *)plVar3[1];
        plVar4 = plVar3;
      }
    }
    CAkChainCtx::GetSegmentPosition(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x88))
    ;
    puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
    if (puVar7 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(lVar8 + 0x28);
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(lVar8 + 0x2c);
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
      *(int *)(puVar7 + 2) = param_2;
      *puVar7 = &PTR_FUN_145ad0978;
      puVar7[3] = lVar8;
      CAkMusicActionSequencer::ScheduleAction(param_1 + 0x68,puVar7);
      return;
    }
  }
  return;
}



// FUNCTION 1431dcd80 FUN_1431dcd80 body=587 status=ok
// SIG undefined FUN_1431dcd80(void)

void FUN_1431dcd80(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  long lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *local_res8;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  iVar4 = CAkMusicActionSequencer::PopImminentAction(param_1 + 0x68,param_2,param_3,&local_res8);
  do {
    if (iVar4 != 0x2d) {
      return;
    }
    lVar5 = local_res8[2];
    iVar4 = (**(code **)(*local_res8 + 8))();
    plVar2 = local_res8;
    if (iVar4 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x38);
      iVar4 = (int)local_res8[4];
      lVar7 = local_res8[3];
      if (lVar5 != 0) {
        do {
          if ((((*(longlong *)(lVar5 + 0x90) == lVar7) && (*(int *)(lVar5 + 0x98) == iVar4)) &&
              ((*(byte *)(lVar5 + 0x62) & 0xf) < 2)) &&
             (cVar3 = CAkMusicCtx::HasStopTrans(lVar5), cVar3 == '\0')) goto LAB_1431dcf5b;
          lVar5 = *(longlong *)(lVar5 + 8);
        } while (lVar5 != 0);
        iVar4 = (int)plVar2[4];
        lVar7 = plVar2[3];
        for (lVar5 = *(longlong *)(param_1 + 0x38); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
          if (((*(longlong *)(lVar5 + 0x90) == lVar7) && (*(int *)(lVar5 + 0x98) == iVar4)) &&
             ((*(byte *)(lVar5 + 0x62) & 0xf) < 2)) goto LAB_1431dceea;
        }
      }
      lVar5 = CAkSubTrackCtx::Create(param_1,lVar7,iVar4);
      if (lVar5 != 0) {
        *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + 1;
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
        CAkMusicCtx::Init(lVar5,*(undefined8 *)(lVar7 + 0x30),lVar7 + 0x18,
                          *(undefined1 *)(lVar7 + 0x38));
      }
LAB_1431dceea:
      if (lVar5 != 0) {
        lVar7 = plVar2[6];
        iVar4 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x80));
        FUN_1409685c0(lVar5,(int)lVar7 + iVar4);
        local_40 = (int)plVar2[6] - (int)plVar2[2];
        local_48 = *(undefined8 *)((longlong)plVar2 + 0x24);
        CAkMusicCtx::_Play(lVar5,&local_48);
        if ((*(byte *)(param_1 + 0x62) & 2) != 0) {
          iVar4 = *(int *)(param_1 + 0x5c);
          puVar6 = &local_38;
          local_38 = 0;
          local_34 = 4;
          local_30 = 0;
          goto LAB_1431dcf56;
        }
      }
    }
    else if (iVar4 == 1) {
      iVar4 = (int)lVar5 - (int)param_2;
      lVar5 = local_res8[3];
      local_50 = 0;
      local_54 = *(undefined4 *)((longlong)local_res8 + 0x24);
      local_58 = (undefined4)local_res8[4];
      puVar6 = &local_58;
LAB_1431dcf56:
      FUN_1431d6a20(lVar5,puVar6,iVar4);
    }
LAB_1431dcf5b:
    plVar2 = local_res8;
    lVar1 = g_DefaultPoolId;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)*local_res8)(local_res8,0);
      AK::MemoryMgr::Free(lVar1,plVar2);
    }
    iVar4 = CAkMusicActionSequencer::PopImminentAction
                      (param_1 + 0x68,param_2 & 0xffffffff,param_3 & 0xffffffff,&local_res8);
  } while( true );
}



// FUNCTION 1431dcfd0 GameObjectPtr body=13 status=ok
// SIG undefined GameObjectPtr(void)

undefined8 CAkSegmentCtx::GameObjectPtr(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x30);
}



// FUNCTION 1431dcfe0 GetClipPosition body=56 status=ok
// SIG undefined GetClipPosition(void)

int CAkSegmentCtx::GetClipPosition(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CAkChainCtx::GetSegmentPosition
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x88));
  iVar2 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x80));
  return iVar2 + iVar1;
}



// FUNCTION 1431dd020 GetTimeWindowSize body=12 status=ok
// SIG undefined GetTimeWindowSize(void)

undefined4 CAkSegmentCtx::GetTimeWindowSize(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x50);
}



// FUNCTION 1431dd030 GetUserParams body=13 status=ok
// SIG undefined GetUserParams(void)

longlong CAkSegmentCtx::GetUserParams(longlong param_1)

{
  return *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x18;
}



// FUNCTION 1431dd040 Init body=240 status=ok
// SIG undefined Init(void)

undefined8 CAkSegmentCtx::Init(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  CAkMusicCtx::Init();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x250))();
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      lVar4 = CAkMusicSegment::Track(*(undefined8 *)(param_1 + 0x80),uVar5 & 0xffff);
      if ((*(int *)(lVar4 + 0x104) == 3) &&
         (lVar4 = CAkSwitchTrackInfo::Create(param_1,lVar4), lVar4 != 0)) {
        puVar1 = *(undefined4 **)(*(longlong *)(lVar4 + 0x10) + 0x110);
        if ((puVar1 != (undefined4 *)0x0) &&
           (iVar3 = CAkSwitchAware::SubscribeSwitch(lVar4,*puVar1,puVar1[2]), iVar3 == 1)) {
          CAkSwitchTrackInfo::InitSwitch(lVar4);
        }
        if (*(longlong *)(param_1 + 0x98) == 0) {
          *(longlong *)(param_1 + 0x98) = lVar4;
          *(undefined8 *)(lVar4 + 0x30) = 0;
        }
        else {
          *(longlong *)(lVar4 + 0x30) = *(longlong *)(param_1 + 0x98);
          *(longlong *)(param_1 + 0x98) = lVar4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 1;
}



// FUNCTION 1431dd130 OnPaused body=42 status=ok
// SIG undefined OnPaused(void)

void CAkSegmentCtx::OnPaused(longlong param_1)

{
  CAkMusicCtx::OnPaused();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    CAkScheduledItem::OnPaused();
    return;
  }
  return;
}



// FUNCTION 1431dd160 OnPlayed body=27 status=ok
// SIG undefined OnPlayed(void)

void CAkSegmentCtx::OnPlayed(undefined8 param_1)

{
  CAkMusicCtx::OnPlayed();
  ScheduleSequencerCmds(param_1);
  return;
}



// FUNCTION 1431dd180 OnStopped body=86 status=ok
// SIG undefined OnStopped(void)

void CAkSegmentCtx::OnStopped(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  CAkMusicActionSequencer::Flush(param_1 + 0x68);
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x88) = 0;
    lVar2 = *(longlong *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    if (lVar2 != 0) {
      FUN_1431d64a0();
    }
  }
  CAkMusicCtx::OnStopped(param_1);
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431dd1e0 PlayDirectly body=13 status=ok
// SIG undefined PlayDirectly(void)

undefined1 CAkSegmentCtx::PlayDirectly(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x38);
}



// FUNCTION 1431dd1f0 PlayingID body=12 status=ok
// SIG undefined PlayingID(void)

undefined4 CAkSegmentCtx::PlayingID(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x2c);
}



// FUNCTION 1431dd200 Prepare body=147 status=ok
// SIG undefined Prepare(void)

int CAkSegmentCtx::Prepare(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  *(int *)(param_1 + 0xa0) = param_2;
  iVar2 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x80));
  iVar5 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x250))();
  uVar7 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = CAkMusicSegment::Track(*(undefined8 *)(param_1 + 0x80),uVar7 & 0xffff);
      iVar3 = FUN_1431e2040(uVar4,param_2 + iVar2);
      iVar5 = iVar6;
      if (iVar6 < iVar3) {
        iVar5 = iVar3;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar5;
    } while (uVar7 < uVar1);
  }
  return iVar5;
}



// FUNCTION 1431dd2a0 Process body=168 status=ok
// SIG undefined Process(void)

void CAkSegmentCtx::Process
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (((*(byte *)(param_1 + 0x62) & 2) != 0) && (*(int *)(param_1 + 0x5c) != -1)) {
    param_3 = *(undefined4 *)(param_1 + 0x5c);
  }
  FUN_1431dcd80(param_1,param_2,param_3);
  iVar3 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x80));
  lVar1 = *(longlong *)(param_1 + 0x38);
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    if (((*(byte *)(lVar2 + 0x62) & 3) != 0) && ((*(byte *)(lVar2 + 0x62) & 0x10) == 0)) {
      CAkSubTrackCtx::Process(lVar2,(int)param_2 + iVar3,param_3,param_4);
    }
  }
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431dd350 RemoveReferences body=9 status=ok
// SIG undefined RemoveReferences(void)

void CAkSegmentCtx::RemoveReferences(longlong param_1)

{
  CAkMusicSubTrackSequencer::ClearSubTrackCtx(param_1 + 0x68);
  return;
}



// FUNCTION 1431dd360 RescheduleSwitchTrack body=1151 status=ok
// SIG undefined RescheduleSwitchTrack(void)

void CAkSegmentCtx::RescheduleSwitchTrack(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20;
  ulonglong in_stack_ffffffffffffff98;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    return;
  }
  iVar10 = CAkChainCtx::GetSegmentPosition(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 0x110);
  uVar17 = *(uint *)(lVar2 + 0x20) & 0x1f;
  if (uVar17 == 8) {
    return;
  }
  if ((*(byte *)(param_1 + 0x62) & 1) == 0) {
    CAkMusicActionSequencer::Flush(param_1 + 0x68);
    ScheduleSequencerCmds(param_1);
    return;
  }
  iVar13 = *(int *)(lVar2 + 0x3c);
  iVar16 = *(int *)(lVar2 + 0x30) -
           (int)((longlong)((ulonglong)DAT_1467bdcac * (longlong)*(int *)(lVar2 + 0x28)) / 1000);
  iVar11 = iVar10 - iVar16;
  if (iVar11 < iVar10) {
    iVar11 = iVar10;
  }
  local_res8[0] = iVar10 - iVar13;
  if (iVar10 - iVar13 < iVar11) {
    local_res8[0] = iVar11;
  }
  if (local_res8[0] < 0) {
    local_res8[0] = 0;
  }
  local_res18[0] = *(int *)(lVar2 + 0x24);
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
  iVar12 = FUN_1431df4d0(*(undefined8 *)(param_1 + 0x80),local_res8[0],uVar17,local_res18,
                         in_stack_ffffffffffffff98,local_res8);
  iVar11 = local_res8[0];
  while( true ) {
    if (iVar12 != 1) {
      return;
    }
    local_res8[0] = iVar11;
    iVar12 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x80));
    iVar12 = FUN_1431e2040(lVar1,iVar11 + iVar12);
    iVar15 = (iVar12 - iVar13) + iVar10;
    if (iVar15 <= iVar11) break;
    local_res18[0] = *(int *)(lVar2 + 0x24);
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
    local_res8[0] = iVar15;
    iVar12 = FUN_1431df4d0(*(undefined8 *)(param_1 + 0x80),iVar15,*(uint *)(lVar2 + 0x20) & 0x1f,
                           local_res18,in_stack_ffffffffffffff98,local_res8);
    iVar11 = local_res8[0];
  }
  local_res18[0] = iVar12;
  iVar10 = CAkMusicSegment::ActiveDuration(*(undefined8 *)(param_1 + 0x80));
  if (iVar10 <= iVar11) {
    return;
  }
  local_res8[0] = iVar11 + iVar16;
  local_res20 = (iVar11 - iVar12) + iVar13;
  iVar10 = local_res20;
  if (local_res8[0] < local_res20) {
    iVar10 = local_res8[0];
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  plVar7 = (longlong *)0x0;
joined_r0x0001431dd556:
  do {
    plVar6 = plVar4;
    if (plVar6 == (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      iVar10 = local_res8[0];
joined_r0x0001431dd5c0:
      do {
        do {
          lVar5 = lVar3;
          if (lVar5 == 0) {
            ScheduleSequencerPlayCmdsOnSwitch
                      (param_1,param_2,local_res20,local_res20 + iVar12,lVar2 + 0x34);
            AddSwitchTrackNotif(param_1,iVar11,lVar1);
            return;
          }
          lVar3 = *(longlong *)(lVar5 + 8);
          iVar12 = local_res18[0];
        } while (((1 < (*(byte *)(lVar5 + 0x62) & 0xf)) ||
                 (*(longlong *)(lVar5 + 0x90) != *(longlong *)(param_2 + 0x10))) ||
                (cVar9 = CAkSwitchTrackInfo::IsSubTrackActive(param_2,*(undefined2 *)(lVar5 + 0x98))
                , iVar12 = local_res18[0], cVar9 != '\0'));
        plVar4 = *(longlong **)(param_1 + 0x78);
        plVar7 = (longlong *)0x0;
        while (plVar6 = plVar4, plVar6 != (longlong *)0x0) {
          iVar13 = (**(code **)(*plVar6 + 8))(plVar6);
          iVar10 = local_res8[0];
          if ((iVar13 == 1) && (plVar6[3] == lVar5)) {
            iVar12 = local_res18[0];
            if ((int)plVar6[2] <= local_res8[0]) goto joined_r0x0001431dd5c0;
            plVar4 = (longlong *)plVar6[1];
            if (plVar6 == *(longlong **)(param_1 + 0x78)) {
              *(longlong **)(param_1 + 0x78) = plVar4;
            }
            else {
              plVar7[1] = (longlong)plVar4;
            }
            if (plVar6 == *(longlong **)(param_1 + 0x70)) {
              *(longlong **)(param_1 + 0x70) = plVar7;
            }
            lVar8 = g_DefaultPoolId;
            (**(code **)*plVar6)(plVar6,0);
            AK::MemoryMgr::Free(lVar8,plVar6);
            iVar10 = local_res8[0];
          }
          else {
            plVar4 = (longlong *)plVar6[1];
            plVar7 = plVar6;
          }
        }
        puVar14 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
        iVar12 = local_res18[0];
        if (puVar14 != (undefined8 *)0x0) {
          *(int *)(puVar14 + 2) = iVar10;
          *puVar14 = &PTR_FUN_145ad0968;
          puVar14[3] = lVar5;
          puVar14[4] = *(undefined8 *)(lVar2 + 0x28);
          *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(lVar2 + 0x30);
          CAkMusicActionSequencer::ScheduleAction(param_1 + 0x68,puVar14);
          iVar12 = local_res18[0];
        }
      } while( true );
    }
    iVar13 = (**(code **)(*plVar6 + 8))(plVar6);
    if (iVar13 == 0) {
      if (((iVar10 <= (int)plVar6[2]) && (plVar6[3] == *(longlong *)(param_2 + 0x10))) &&
         (cVar9 = CAkSwitchTrackInfo::IsSubTrackActive(param_2,(short)plVar6[4]), cVar9 == '\0'))
      goto LAB_1431dd693;
LAB_1431dd5a8:
      plVar4 = (longlong *)plVar6[1];
      plVar7 = plVar6;
      goto joined_r0x0001431dd556;
    }
    if (((iVar13 != 1) || ((int)plVar6[2] < iVar10)) ||
       ((*(longlong *)(plVar6[3] + 0x90) != *(longlong *)(param_2 + 0x10) ||
        (cVar9 = CAkSwitchTrackInfo::IsSubTrackActive(param_2,*(undefined2 *)(plVar6[3] + 0x98)),
        cVar9 == '\0')))) goto LAB_1431dd5a8;
LAB_1431dd693:
    plVar4 = (longlong *)plVar6[1];
    if (plVar6 == *(longlong **)(param_1 + 0x78)) {
      *(longlong **)(param_1 + 0x78) = plVar4;
    }
    else {
      plVar7[1] = (longlong)plVar4;
    }
    if (plVar6 == *(longlong **)(param_1 + 0x70)) {
      *(longlong **)(param_1 + 0x70) = plVar7;
    }
    lVar8 = g_DefaultPoolId;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*plVar6)(plVar6,0);
      AK::MemoryMgr::Free(lVar8,plVar6);
    }
  } while( true );
}



// FUNCTION 1431dd7e0 ScheduleSequencerCmds body=532 status=ok
// SIG undefined ScheduleSequencerCmds(void)

void CAkSegmentCtx::ScheduleSequencerCmds(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint local_res10;
  uint uStack_44;
  undefined4 local_40;
  
  *(undefined1 *)(param_1 + 0xa4) = 1;
  uVar6 = CAkChainCtx::GetSegmentPosition
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x250))();
    local_res10 = 0;
    if (uVar4 != 0) {
      do {
        plVar7 = (longlong *)
                 CAkMusicSegment::Track(*(undefined8 *)(param_1 + 0x80),local_res10 & 0xffff);
        if (*(int *)((longlong)plVar7 + 0x104) == 3) {
          for (lVar2 = *(longlong *)(param_1 + 0x98); lVar2 != 0;
              lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (*(longlong **)(lVar2 + 0x10) == plVar7) {
              uVar9 = 0;
              if ((int)plVar7[0x1d] != 0) {
                do {
                  cVar3 = CAkSwitchTrackInfo::IsSubTrackActive(lVar2,uVar9 & 0xffff);
                  if ((cVar3 != '\0') &&
                     (puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38),
                     puVar8 != (undefined8 *)0x0)) {
                    *(undefined4 *)(puVar8 + 2) = uVar6;
                    *(ulonglong *)((longlong)puVar8 + 0x24) = (ulonglong)uStack_44 << 0x20;
                    *puVar8 = &PTR__scalar_deleting_destructor__145ad0958;
                    *(undefined4 *)((longlong)puVar8 + 0x2c) = local_40;
                    puVar8[3] = plVar7;
                    *(uint *)(puVar8 + 4) = uVar9;
                    *(undefined4 *)(puVar8 + 6) = uVar1;
                    (**(code **)(*plVar7 + 8))(plVar7);
                    CAkMusicActionSequencer::ScheduleAction(param_1 + 0x68,puVar8);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(uint *)(plVar7 + 0x1d));
              }
              break;
            }
          }
          AddSwitchTrackNotif(param_1,uVar6,plVar7);
        }
        else {
          uVar5 = CAkMusicTrack::GetNextRS(plVar7);
          puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar8 + 2) = uVar6;
            *(ulonglong *)((longlong)puVar8 + 0x24) = (ulonglong)uStack_44 << 0x20;
            *puVar8 = &PTR__scalar_deleting_destructor__145ad0958;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = local_40;
            puVar8[3] = plVar7;
            *(uint *)(puVar8 + 4) = (uint)uVar5;
            *(undefined4 *)(puVar8 + 6) = uVar1;
            (**(code **)(*plVar7 + 8))(plVar7);
            CAkMusicActionSequencer::ScheduleAction(param_1 + 0x68,puVar8);
          }
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < uVar4);
    }
  }
  return;
}



// FUNCTION 1431dda00 ScheduleSequencerPlayCmdsOnSwitch body=452 status=ok
// SIG undefined ScheduleSequencerPlayCmdsOnSwitch(void)

void CAkSegmentCtx::ScheduleSequencerPlayCmdsOnSwitch
               (longlong param_1,longlong param_2,int param_3,undefined4 param_4,undefined8 *param_5
               )

{
  longlong *plVar1;
  longlong *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort *puVar9;
  uint uVar10;
  
  puVar9 = *(ushort **)(param_2 + 0x18);
  if (puVar9 != puVar9 + *(uint *)(param_2 + 0x20)) {
    do {
      uVar10 = (uint)*puVar9;
      plVar8 = *(longlong **)(param_1 + 0x78);
      plVar2 = (longlong *)0x0;
      while (plVar1 = plVar8, plVar1 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar1 + 8))(plVar1);
        if (((iVar5 == 0) && (plVar1[3] == *(longlong *)(param_2 + 0x10))) &&
           (*(uint *)(plVar1 + 4) == uVar10)) {
          if ((int)plVar1[2] <= param_3) goto LAB_1431ddb8a;
          plVar8 = (longlong *)plVar1[1];
          if (plVar1 == *(longlong **)(param_1 + 0x78)) {
            *(longlong **)(param_1 + 0x78) = plVar8;
          }
          else {
            plVar2[1] = (longlong)plVar8;
          }
          if (plVar1 == *(longlong **)(param_1 + 0x70)) {
            *(longlong **)(param_1 + 0x70) = plVar2;
          }
          lVar3 = g_DefaultPoolId;
          (**(code **)*plVar1)(plVar1,0);
          AK::MemoryMgr::Free(lVar3,plVar1);
        }
        else {
          plVar8 = (longlong *)plVar1[1];
          plVar2 = plVar1;
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x38);
      plVar8 = *(longlong **)(param_2 + 0x10);
      if (lVar7 != 0) {
        do {
          if (((*(longlong **)(lVar7 + 0x90) == plVar8) && (*(uint *)(lVar7 + 0x98) == uVar10)) &&
             (((*(byte *)(lVar7 + 0x62) & 0xf) < 2 &&
              (cVar4 = CAkMusicCtx::HasStopTrans(lVar7), cVar4 == '\0')))) goto LAB_1431ddb8a;
          lVar7 = *(longlong *)(lVar7 + 8);
        } while (lVar7 != 0);
        plVar8 = *(longlong **)(param_2 + 0x10);
      }
      puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
      if (puVar6 != (undefined8 *)0x0) {
        *(int *)(puVar6 + 2) = param_3;
        *puVar6 = &PTR__scalar_deleting_destructor__145ad0958;
        puVar6[3] = plVar8;
        *(uint *)(puVar6 + 4) = uVar10;
        *(undefined8 *)((longlong)puVar6 + 0x24) = *param_5;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)(param_5 + 1);
        *(undefined4 *)(puVar6 + 6) = param_4;
        (**(code **)(*plVar8 + 8))(plVar8);
        CAkMusicActionSequencer::ScheduleAction(param_1 + 0x68);
      }
LAB_1431ddb8a:
      puVar9 = puVar9 + 1;
    } while (puVar9 != (ushort *)
                       (*(longlong *)(param_2 + 0x18) + (ulonglong)*(uint *)(param_2 + 0x20) * 2));
  }
  return;
}



// FUNCTION 1431ddbd0 GetStateParamValue<AccumulateMult> body=176 status=ok
// SIG undefined GetStateParamValue<AccumulateMult>(void)

float CAkStateAware::GetStateParamValue<AccumulateMult>(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  
  fVar7 = 1.0;
  cVar2 = UseState();
  if (((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x20))(param_1), cVar2 != '\0')) &&
     (lVar3 = (**(code **)(*param_1 + 0x78))(param_1), lVar3 != 0)) {
    for (lVar3 = *(longlong *)(lVar3 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      puVar1 = *(ushort **)(lVar3 + 0x20);
      if (puVar1 != (ushort *)0x0) {
        uVar4 = 0;
        do {
          uVar5 = (int)uVar4 + 1;
          if (puVar1[uVar5] == param_2) {
            pfVar6 = (float *)((longlong)puVar1 +
                              uVar4 * 0x10 + ((ulonglong)((uint)*puVar1 * 2 + 5) & 0xfffffffc));
            if (pfVar6 != (float *)0x0) {
              fVar7 = fVar7 * *pfVar6;
            }
            break;
          }
          uVar4 = (ulonglong)uVar5;
        } while (uVar5 < *puVar1);
      }
    }
  }
  return fVar7;
}



// FUNCTION 1431ddc80 CAkMusicNode body=105 status=ok
// SIG undefined CAkMusicNode(void)

undefined8 * CAkMusicNode::CAkMusicNode(undefined8 *param_1)

{
  CAkParameterNode::CAkParameterNode();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145ad0a00;
  param_1[3] = &PTR_LAB_145ad0c80;
  param_1[6] = &PTR_LAB_145ad0730;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) & 0xf0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 1431ddcf0 ~CAkMusicNode body=91 status=ok
// SIG undefined ~CAkMusicNode(void)

void CAkMusicNode::~CAkMusicNode(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0a00;
  param_1[3] = &PTR_LAB_145ad0c80;
  param_1[6] = &PTR_LAB_145ad0730;
  FlushStingers();
  *param_1 = &PTR__scalar_deleting_destructor__145accd40;
  param_1[3] = &PTR_LAB_145accfa0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParentNode<CAkParameterNode>::~CAkParentNode<CAkParameterNode>(param_1);
  return;
}



// FUNCTION 1431ddd60 `scalar_deleting_destructor' body=124 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMusicNode::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0a00;
  param_1[3] = &PTR_LAB_145ad0c80;
  param_1[6] = &PTR_LAB_145ad0730;
  FlushStingers();
  *param_1 = &PTR__scalar_deleting_destructor__145accd40;
  param_1[3] = &PTR_LAB_145accfa0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParentNode<CAkParameterNode>::~CAkParentNode<CAkParameterNode>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1431ddde0 FUN_1431ddde0 body=161 status=ok
// SIG undefined FUN_1431ddde0(void)

void FUN_1431ddde0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 8))();
  CAkMusicNode::ExecuteActionInternal(param_1,param_2);
  lVar3 = param_1[0xf];
  if ((lVar3 != 0) &&
     (((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))) &&
      (uVar2 = *(uint *)(param_1 + 0x1a), uVar2 != 0)))) {
    lVar3 = (ulonglong)uVar2 << 3;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
      plVar1 = *(longlong **)(lVar3 + param_1[0x19]);
      if ((*(char *)(param_2 + 0x20) == '\0') || (plVar1[0x11] == 0)) {
        (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
      }
    } while (uVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dde7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 1431dde90 ExecuteActionExcept body=223 status=ok
// SIG undefined ExecuteActionExcept(void)

void CAkMusicNode::ExecuteActionExcept(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  (**(code **)(*param_1 + 8))();
  ExecuteActionInternal(param_1,param_2);
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_1431ddee2;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431dded7:
    uVar4 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1431ddee2;
      goto LAB_1431dded7;
    }
    uVar4 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 3,uVar4);
LAB_1431ddee2:
  uVar5 = *(uint *)(param_1 + 0x1a);
  if (uVar5 != 0) {
    lVar6 = (ulonglong)uVar5 << 3;
    do {
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
      plVar2 = *(longlong **)(lVar6 + param_1[0x19]);
      if ((((char)param_2[8] == '\0') || (plVar2[0x11] == 0)) &&
         (cVar3 = CAkParameterNodeBase::IsException(plVar2,*(undefined8 *)(param_2 + 0xc)),
         cVar3 == '\0')) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
      }
    } while (uVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ddf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 1431ddf70 ExecuteActionInternal body=137 status=ok
// SIG undefined ExecuteActionInternal(void)

void CAkMusicNode::ExecuteActionInternal(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_1431d5f30(DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else {
    if (iVar1 == 1) {
      CAkMusicRenderer::Pause
                (DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
      return;
    }
    if (iVar1 == 2) {
      CAkMusicRenderer::Resume
                (DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((longlong)param_2 + 0x22),param_2[4]);
      return;
    }
  }
  return;
}



// FUNCTION 1431de000 ExecuteActionNoPropagate body=96 status=ok
// SIG undefined ExecuteActionNoPropagate(void)

void CAkMusicNode::ExecuteActionNoPropagate(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 8))();
  ExecuteActionInternal(param_1,param_2);
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_1431de048;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431de03d:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1431de048;
      goto LAB_1431de03d;
    }
    uVar2 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 3,uVar2);
LAB_1431de048:
                    /* WARNING: Could not recover jumptable at 0x0001431de058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 1431de060 FlushStingers body=109 status=ok
// SIG undefined FlushStingers(void)

void CAkMusicNode::FlushStingers(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      puVar1 = *(undefined8 **)(param_1 + 0xf0);
    }
    if (puVar1 != (undefined8 *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1431de0d0 GetMidiTargetNode body=144 status=ok
// SIG undefined GetMidiTargetNode(void)

void CAkMusicNode::GetMidiTargetNode
               (longlong param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_res8 [8];
  
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0xec) >> 1 & 1;
  pbVar1 = *(byte **)(param_1 + 0x98);
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar4;
    do {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x38) {
        pbVar4 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar2 = (byte *)(ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  *param_3 = *(undefined4 *)pbVar1;
  *param_4 = *(byte *)(param_1 + 0xec) >> 3 & 1;
  return;
}



// FUNCTION 1431de160 GetMidiTargetTempo body=46 status=ok
// SIG undefined GetMidiTargetTempo(void)

void CAkMusicNode::GetMidiTargetTempo(longlong param_1,byte *param_2,undefined4 *param_3)

{
  *param_2 = *(byte *)(param_1 + 0xec) >> 2 & 1;
  if ((*(byte *)(param_1 + 0xec) & 4) != 0) {
    *param_3 = *(undefined4 *)(param_1 + 0xd8);
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1431de190 GetMidiTempoSource body=104 status=ok
// SIG undefined GetMidiTempoSource(void)

void CAkMusicNode::GetMidiTempoSource(longlong param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_res8 [32];
  
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0xec) & 1;
  pbVar1 = *(byte **)(param_1 + 0x98);
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar4;
    do {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x37) {
        pbVar4 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar2 = (byte *)(ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  *param_3 = *(undefined4 *)pbVar1;
  return;
}



// FUNCTION 1431de200 GetMusicGrid body=55 status=ok
// SIG undefined GetMusicGrid(void)

longlong CAkMusicNode::GetMusicGrid(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xec) & 4) == 0) {
    while (lVar1 = *(longlong *)(param_1 + 0x80), lVar1 != 0) {
      param_1 = lVar1;
      if ((*(byte *)(lVar1 + 0xec) & 4) != 0) {
        return lVar1 + 0xd8;
      }
    }
  }
  return param_1 + 0xd8;
}



// FUNCTION 1431de240 FUN_1431de240 body=287 status=ok
// SIG undefined FUN_1431de240(void)

void FUN_1431de240(longlong param_1,float *param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar7 = (float *)0x0;
  local_res8[0] = DAT_1467be1f8;
  if (pbVar1 != (byte *)0x0) {
    pfVar5 = pfVar7;
    do {
      uVar6 = (int)pfVar5 + 1;
      if (pbVar1[uVar6] == 0x36) {
        pfVar7 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar5 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar9 = 1.0;
  pfVar5 = local_res8;
  if (pfVar7 != (float *)0x0) {
    pfVar5 = pfVar7;
  }
  local_res8[0] = *pfVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *param_2 = local_res8[0] * *param_2;
  cVar4 = (**(code **)(lVar2 + 0x18))(param_1 + 0x18,0xd);
  if (cVar4 != '\0') {
    fVar9 = (float)CAkStateAware::GetStateParamValue<AccumulateMult>(param_1 + 0x18,0xd);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> 0xd & 1) != 0)) {
    fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0xd,param_3);
    fVar9 = fVar9 * fVar8;
  }
  *param_2 = fVar9 * *param_2;
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x268))(plVar3,param_2,param_3);
  }
  return;
}



// FUNCTION 1431de360 FUN_1431de360 body=433 status=ok
// SIG undefined FUN_1431de360(void)

void FUN_1431de360(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  void *pvVar7;
  int *piVar8;
  longlong lVar9;
  void *pvVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1431de360();
  }
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if ((plVar3 != (longlong *)0x0) &&
     (piVar11 = (int *)*plVar3, piVar11 != piVar11 + (ulonglong)*(uint *)(plVar3 + 1) * 6)) {
    do {
      piVar6 = (int *)*param_2;
      uVar12 = *(uint *)(param_2 + 1);
      uVar13 = (ulonglong)uVar12;
      piVar8 = piVar6;
      if (piVar6 != piVar6 + uVar13 * 6) {
        do {
          uVar12 = (uint)uVar13;
          if (*piVar6 == *piVar11) {
            if (1 < uVar12) {
              uVar5 = *(undefined8 *)(piVar8 + uVar13 * 6 + -6 + 2);
              *(undefined8 *)piVar6 = *(undefined8 *)(piVar8 + uVar13 * 6 + -6);
              *(undefined8 *)(piVar6 + 2) = uVar5;
              *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(piVar8 + uVar13 * 6 + -2);
              uVar12 = *(uint *)(param_2 + 1);
              piVar8 = (int *)*param_2;
            }
            uVar12 = uVar12 - 1;
            *(uint *)(param_2 + 1) = uVar12;
          }
          else {
            piVar6 = piVar6 + 6;
          }
          uVar13 = (ulonglong)uVar12;
        } while (piVar6 != piVar8 + (ulonglong)uVar12 * 6);
      }
      if (uVar12 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_1431de4ad:
        uVar12 = *(uint *)(param_2 + 1);
        *(uint *)(param_2 + 1) = uVar12 + 1;
        puVar2 = (undefined8 *)(*param_2 + (ulonglong)uVar12 * 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          uVar5 = *(undefined8 *)(piVar11 + 2);
          *puVar2 = *(undefined8 *)piVar11;
          puVar2[1] = uVar5;
          puVar2[2] = *(undefined8 *)(piVar11 + 4);
        }
      }
      else {
        uVar1 = *(uint *)((longlong)param_2 + 0xc) + 2;
        pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
        if (pvVar7 != (void *)0x0) {
          pvVar10 = (void *)*param_2;
          if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar7)) {
            uVar13 = (ulonglong)*(uint *)(param_2 + 1);
            if (uVar13 != 0) {
              lVar9 = 0;
              do {
                lVar4 = *param_2;
                puVar2 = (undefined8 *)(lVar9 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar9 + (longlong)pvVar7) = *puVar2;
                ((undefined8 *)(lVar9 + (longlong)pvVar7))[1] = uVar5;
                *(undefined8 *)(lVar9 + 0x10 + (longlong)pvVar7) =
                     *(undefined8 *)(lVar9 + 0x10 + lVar4);
                uVar13 = uVar13 - 1;
                lVar9 = lVar9 + 0x18;
              } while (uVar13 != 0);
              pvVar10 = (void *)*param_2;
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
          }
          *param_2 = (longlong)pvVar7;
          *(uint *)((longlong)param_2 + 0xc) = uVar1;
          if (uVar12 < uVar1) goto LAB_1431de4ad;
        }
      }
      piVar11 = piVar11 + 6;
    } while (piVar11 != (int *)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 0x18));
  }
  return;
}



// FUNCTION 1431de530 FUN_1431de530 body=174 status=ok
// SIG undefined FUN_1431de530(void)

void FUN_1431de530(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if (((*param_2 != 2) && (*(longlong *)(param_1 + 0x78) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 200), plVar3 != plVar3 + *(uint *)(param_1 + 0xd0))) {
    do {
      if (((char)param_2[0xe] == '\0') || (*(longlong *)(*plVar3 + 0x88) == 0)) {
        plVar1 = (longlong *)*plVar3;
        if ((plVar1[0xf] != 0) &&
           ((0 < *(short *)(plVar1[0xf] + 0x50) &&
            (cVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*param_2), cVar2 == '\0')))) {
          (**(code **)(*(longlong *)*plVar3 + 0xb8))((longlong *)*plVar3,param_2);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 1431de5e0 FUN_1431de5e0 body=271 status=ok
// SIG undefined FUN_1431de5e0(void)

ulonglong FUN_1431de5e0(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x270))();
  if ((int)uVar2 == 1) {
    puVar3 = (undefined8 *)param_1[0x19];
    uVar1 = 1;
    if (puVar3 != puVar3 + *(uint *)(param_1 + 0x1a)) {
      do {
        uVar1 = (**(code **)(*(longlong *)*puVar3 + 0x138))((longlong *)*puVar3,param_2);
        if (uVar1 != 1) {
          puVar4 = (undefined8 *)param_1[0x19];
          uVar5 = 0;
          uVar2 = (ulonglong)((longlong)puVar3 + (7 - (longlong)puVar4)) >> 3;
          if (puVar3 < puVar4) {
            uVar2 = uVar5;
          }
          if (uVar2 != 0) {
            do {
              (**(code **)(*(longlong *)*puVar4 + 0x140))((longlong *)*puVar4,param_2);
              uVar5 = uVar5 + 1;
              puVar4 = puVar4 + 1;
            } while (uVar5 != uVar2);
          }
          break;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined8 *)(param_1[0x19] + (ulonglong)*(uint *)(param_1 + 0x1a) * 8));
    }
    if (uVar1 != 1) {
      (**(code **)(*param_1 + 0x278))(param_1);
    }
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}



// FUNCTION 1431de6f0 FUN_1431de6f0 body=181 status=ok
// SIG undefined FUN_1431de6f0(void)

ulonglong FUN_1431de6f0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  lVar4 = *plVar1;
  if (lVar4 != lVar4 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18) {
    do {
      uVar2 = FUN_143176fa0(*(undefined4 *)(lVar4 + 4),0);
      if ((int)uVar2 != 1) {
        lVar3 = *plVar1;
        if (lVar3 == lVar4) {
          return uVar2;
        }
        do {
          FUN_143179790(*(undefined4 *)(lVar3 + 4),0);
          lVar3 = lVar3 + 0x18;
        } while (lVar3 != lVar4);
        return uVar2 & 0xffffffff;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != *plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18);
    return uVar2 & 0xffffffff;
  }
  return 1;
}



// FUNCTION 1431de7d0 FUN_1431de7d0 body=80 status=ok
// SIG undefined FUN_1431de7d0(void)

void FUN_1431de7d0(undefined8 param_1,undefined1 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  if ((uVar1 >> 0xd & 1) != 0) {
    FUN_1431d52d0(param_2);
    uVar1 = *param_3;
  }
  if ((uVar1 & 0xfffffffffffffff2) != 0) {
    FUN_14315dd90(param_1,param_2);
  }
  return;
}



// FUNCTION 1431de850 FUN_1431de850 body=507 status=ok
// SIG undefined FUN_1431de850(void)

void FUN_1431de850(longlong param_1,int param_2,float param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  uint uVar6;
  float *pfVar7;
  size_t _Size;
  float *pfVar8;
  float local_res10 [2];
  
  if (param_2 == 0x36) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    pfVar8 = (float *)0x0;
    local_res10[0] = 0.0;
    pfVar7 = pfVar8;
    if (pbVar2 != (byte *)0x0) {
      pfVar4 = pfVar8;
      do {
        uVar6 = (int)pfVar4 + 1;
        if (pbVar2[uVar6] == 0x36) {
          pfVar7 = (float *)(pbVar2 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar4 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar2);
    }
    pfVar4 = local_res10;
    if (pfVar7 != (float *)0x0) {
      pfVar4 = pfVar7;
    }
    local_res10[0] = *pfVar4;
    if (param_3 - local_res10[0] != 0.0) {
      local_res10[0] = param_3;
      if (pbVar2 == (byte *)0x0) {
        _Size = 0;
      }
      else {
        bVar1 = *pbVar2;
        _Size = (size_t)bVar1;
        do {
          uVar6 = (int)pfVar8 + 1;
          if (pbVar2[uVar6] == 0x36) {
            pfVar7 = (float *)(pbVar2 + ((ulonglong)(bVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 4
                              );
            if (pfVar7 != (float *)0x0) goto LAB_1431dea02;
            break;
          }
          pfVar8 = (float *)(ulonglong)uVar6;
        } while (uVar6 < bVar1);
      }
      iVar3 = (int)_Size;
      uVar6 = iVar3 + 5;
      pcVar5 = AK::MemoryMgr::Malloc
                         (g_DefaultPoolId,(ulonglong)((uVar6 & 0xfffffffc) + 4 + iVar3 * 4));
      if (pcVar5 != (char *)0x0) {
        if (*(longlong *)(param_1 + 0x98) != 0) {
          _guard_xfg_dispatch_icall_nop
                    (pcVar5 + 1,(void *)(*(longlong *)(param_1 + 0x98) + 1),_Size);
          _guard_xfg_dispatch_icall_nop
                    (pcVar5 + ((ulonglong)uVar6 & 0xfffffffc),
                     (void *)(((ulonglong)(iVar3 + 4) & 0xfffffffc) + *(longlong *)(param_1 + 0x98))
                     ,_Size * 4);
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x98));
        }
        pcVar5[iVar3 + 1] = '6';
        *pcVar5 = (char)_Size + '\x01';
        *(char **)(param_1 + 0x98) = pcVar5;
        pfVar7 = (float *)(pcVar5 + _Size * 4 + ((ulonglong)uVar6 & 0xfffffffc));
        if (pfVar7 != (float *)0x0) {
LAB_1431dea02:
          *pfVar7 = local_res10[0];
        }
      }
      FUN_1431d52d0(0);
    }
  }
  CAkParameterNode::SetAkProp(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1431dea50 SetMusicNodeParams body=809 status=ok
// SIG undefined SetMusicNodeParams(void)

ulonglong CAkMusicNode::SetMusicNodeParams(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  void *pvVar13;
  uint *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uStackX_c;
  
  lVar7 = *param_2;
  pbVar11 = (byte *)(lVar7 + 4);
  *param_2 = (longlong)pbVar11;
  bVar3 = *pbVar11;
  *param_2 = lVar7 + 5;
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) & 0xf4;
  *(byte *)((longlong)param_1 + 0xec) =
       *(byte *)((longlong)param_1 + 0xec) | bVar3 >> 1 & 3 | bVar3 & 8;
  uVar12 = FUN_143178ad0(param_1,param_2,param_3,0);
  if ((int)uVar12 == 1) {
    uVar10 = *(uint *)*param_2;
    *param_2 = (longlong)((uint *)*param_2 + 1);
    if (uVar10 != 0) {
      pvVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar10 << 3);
      param_1[0x19] = (longlong)pvVar13;
      if (pvVar13 == (void *)0x0) {
        return 0x34;
      }
      uVar17 = 0;
      *(uint *)((longlong)param_1 + 0xd4) = uVar10;
      if (uVar10 != 0) {
        do {
          uVar9 = uStackX_c;
          uStackX_c = uStackX_c & 0xffffff00;
          uVar6 = *(undefined4 *)*param_2;
          *param_2 = (longlong)((undefined4 *)*param_2 + 1);
          uVar12 = (**(code **)(*param_1 + 0x50))
                             (param_1,CONCAT44(uVar9,uVar6) & 0xffffff00ffffffff);
          iVar15 = (int)uVar12;
          if ((iVar15 != 1) && (iVar15 != 0xf)) break;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar10);
        if (iVar15 != 1) {
          return uVar12;
        }
      }
    }
    pdVar8 = (double *)*param_2;
    dVar20 = *pdVar8;
    *param_2 = (longlong)(pdVar8 + 1);
    dVar2 = pdVar8[1];
    *param_2 = (longlong)(pdVar8 + 2);
    fVar1 = *(float *)(pdVar8 + 2);
    *param_2 = (longlong)pdVar8 + 0x14;
    bVar3 = *(byte *)((longlong)pdVar8 + 0x14);
    *param_2 = (longlong)pdVar8 + 0x15;
    bVar4 = *(byte *)((longlong)pdVar8 + 0x15);
    *param_2 = (longlong)pdVar8 + 0x16;
    cVar5 = *(char *)((longlong)pdVar8 + 0x16);
    puVar14 = (uint *)((longlong)pdVar8 + 0x17);
    *param_2 = (longlong)puVar14;
    if (cVar5 != '\0') {
      *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) | 4;
      *(float *)(param_1 + 0x1b) = fVar1;
      dVar19 = (60.0 / (double)fVar1) * (4.0 / (double)bVar4) * (double)DAT_1467bdcac;
      dVar18 = 0.5;
      if (dVar19 <= 0.0) {
        lVar7 = 0xbfe00000;
      }
      else {
        lVar7 = 0x3fe00000;
      }
      iVar15 = (int)((double)(lVar7 << 0x20) + dVar19);
      *(int *)((longlong)param_1 + 0xdc) = iVar15;
      *(uint *)(param_1 + 0x1c) = (uint)bVar3 * iVar15;
      dVar20 = (double)DAT_1467bdcac * dVar20 * 0.001;
      if (dVar20 <= 0.0) {
        lVar7 = 0xbfe00000;
      }
      else {
        lVar7 = 0x3fe00000;
      }
      *(int *)((longlong)param_1 + 0xe4) = (int)((double)(lVar7 << 0x20) + dVar20);
      dVar20 = (double)DAT_1467bdcac * dVar2 * 0.001;
      if (dVar20 <= 0.0) {
        dVar18 = -0.5;
      }
      *(int *)(param_1 + 0x1d) = (int)(dVar18 + dVar20);
      puVar14 = (uint *)*param_2;
    }
    uVar10 = *puVar14;
    *param_2 = (longlong)(puVar14 + 1);
    if (uVar10 == 0) {
      FlushStingers(param_1);
      uVar12 = 1;
    }
    else {
      uVar12 = (ulonglong)uVar10;
      pvVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar10 * 0x18);
      if (pvVar13 == (void *)0x0) {
        uVar12 = 2;
      }
      else {
        if (uVar10 != 0) {
          puVar16 = (undefined4 *)((longlong)pvVar13 + 8);
          do {
            uVar6 = *(undefined4 *)*param_2;
            *param_2 = (longlong)((undefined4 *)*param_2 + 1);
            puVar16[-2] = uVar6;
            uVar6 = *(undefined4 *)*param_2;
            *param_2 = (longlong)((undefined4 *)*param_2 + 1);
            puVar16[-1] = uVar6;
            uVar6 = *(undefined4 *)*param_2;
            *param_2 = (longlong)((undefined4 *)*param_2 + 1);
            *puVar16 = uVar6;
            uVar6 = *(undefined4 *)*param_2;
            *param_2 = (longlong)((undefined4 *)*param_2 + 1);
            puVar16[1] = uVar6;
            uVar6 = *(undefined4 *)*param_2;
            *param_2 = (longlong)((undefined4 *)*param_2 + 1);
            puVar16[2] = uVar6;
            uVar6 = *(undefined4 *)*param_2;
            *param_2 = (longlong)((undefined4 *)*param_2 + 1);
            puVar16[3] = uVar6;
            uVar12 = uVar12 - 1;
            puVar16 = puVar16 + 6;
          } while (uVar12 != 0);
        }
        uVar10 = FUN_1431ded80(param_1,pvVar13,uVar10);
        uVar12 = (ulonglong)uVar10;
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar13);
      }
    }
  }
  return uVar12;
}



// FUNCTION 1431ded80 FUN_1431ded80 body=452 status=ok
// SIG undefined FUN_1431ded80(void)

undefined8 FUN_1431ded80(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if (param_3 == 0) {
    CAkMusicNode::FlushStingers();
  }
  else {
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      *(undefined8 **)(param_1 + 0xf0) = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        return 2;
      }
      pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_3 * 0x18);
      *puVar6 = pvVar7;
      if (pvVar7 == (void *)0x0) {
        return 2;
      }
      *(uint *)((longlong)puVar6 + 0xc) = param_3;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 0;
    }
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        plVar3 = *(longlong **)(param_1 + 0xf0);
        uVar2 = *(uint *)(plVar3 + 1);
        if (uVar2 < *(uint *)((longlong)plVar3 + 0xc)) {
LAB_1431deeed:
          uVar2 = *(uint *)(plVar3 + 1);
          *(uint *)(plVar3 + 1) = uVar2 + 1;
          puVar6 = (undefined8 *)(*plVar3 + (ulonglong)uVar2 * 0x18);
          if (puVar6 != (undefined8 *)0x0) {
            uVar5 = param_2[1];
            *puVar6 = *param_2;
            puVar6[1] = uVar5;
            puVar6[2] = param_2[2];
          }
        }
        else {
          uVar1 = *(uint *)((longlong)plVar3 + 0xc) + 2;
          pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
          if (pvVar7 != (void *)0x0) {
            pvVar9 = (void *)*plVar3;
            if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar7)) {
              uVar10 = (ulonglong)*(uint *)(plVar3 + 1);
              if (uVar10 != 0) {
                lVar8 = 0;
                do {
                  lVar4 = *plVar3;
                  puVar6 = (undefined8 *)(lVar8 + lVar4);
                  uVar5 = puVar6[1];
                  *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar6;
                  ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar5;
                  *(undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7) =
                       *(undefined8 *)(lVar8 + 0x10 + lVar4);
                  uVar10 = uVar10 - 1;
                  lVar8 = lVar8 + 0x18;
                } while (uVar10 != 0);
                pvVar9 = (void *)*plVar3;
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
            }
            *plVar3 = (longlong)pvVar7;
            *(uint *)((longlong)plVar3 + 0xc) = uVar1;
            if (uVar2 < uVar1) goto LAB_1431deeed;
          }
          puVar6 = (undefined8 *)0x0;
        }
        param_2 = param_2 + 3;
        if (puVar6 == (undefined8 *)0x0) {
          return 2;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
    }
  }
  return 1;
}



// FUNCTION 1431def50 FUN_1431def50 body=116 status=ok
// SIG undefined FUN_1431def50(void)

void FUN_1431def50(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x19];
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x1a)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x140))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)(param_1[0x19] + (ulonglong)*(uint *)(param_1 + 0x1a) * 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431defbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1);
  return;
}



// FUNCTION 1431defd0 FUN_1431defd0 body=92 status=ok
// SIG undefined FUN_1431defd0(void)

void FUN_1431defd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar2 = *plVar1, lVar2 != lVar2 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18)) {
    do {
      FUN_143179790(*(undefined4 *)(lVar2 + 4),0);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18);
  }
  return;
}



// FUNCTION 1431df040 `scalar_deleting_destructor' body=99 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMusicSegment::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0d00;
  param_1[3] = &PTR_LAB_145ad0f80;
  param_1[6] = &PTR_LAB_145ad0730;
  AkArray<AkMusicMarker,AkMusicMarker_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,0,AkAssignmentMovePolicy<AkMusicMarker>_>
  ::Term(param_1 + 0x1f);
  CAkMusicNode::~CAkMusicNode(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1431df0b0 ActiveDuration body=24 status=ok
// SIG undefined ActiveDuration(void)

int CAkMusicSegment::ActiveDuration(longlong param_1)

{
  return *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                 (ulonglong)*(uint *)(param_1 + 0x100) * 0x10) -
         *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
}



// FUNCTION 1431df0d0 CanAddChild body=165 status=ok
// SIG undefined CanAddChild(void)

undefined4 CAkMusicSegment::CanAddChild(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x80))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x250))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 == 6) {
    if (param_2[0x10] == 0) {
      lVar1 = param_2[2];
      lVar5 = FUN_143145200(param_1 + 0x19,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[2] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1431df180 FUN_1431df180 body=173 status=ok
// SIG undefined FUN_1431df180(void)

longlong * FUN_1431df180(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x110);
  if (plVar3 != (longlong *)0x0) {
    CAkMusicNode::CAkMusicNode(plVar3,param_1);
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__145ad0d00;
    plVar3[3] = (longlong)&PTR_LAB_145ad0f80;
    plVar3[6] = (longlong)&PTR_LAB_145ad0730;
    plVar3[0x1f] = 0;
    plVar3[0x20] = 0;
    *(undefined4 *)(plVar3 + 0x21) = 0;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(plVar3);
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 1431df240 CreateLowLevelSegmentCtxAndAddRef body=158 status=ok
// SIG undefined CreateLowLevelSegmentCtxAndAddRef(void)

longlong CAkMusicSegment::CreateLowLevelSegmentCtxAndAddRef
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    return 0;
  }
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xb0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = CAkSegmentCtx::CAkSegmentCtx(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = CAkSegmentCtx::Init(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      return lVar3;
    }
    CAkMusicCtx::_Cancel(lVar3);
    FUN_1431d64a0(lVar3);
  }
  return 0;
}



// FUNCTION 1431df2e0 CreateSegmentContext body=165 status=ok
// SIG undefined CreateSegmentContext(void)

longlong CAkMusicSegment::CreateSegmentContext
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    return 0;
  }
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xa0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = CAkSequencableSegmentCtx::CAkSequencableSegmentCtx(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = CAkSequencableSegmentCtx::Init(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      FUN_1431d64a0();
      return lVar3;
    }
    CAkMusicCtx::_Cancel(lVar3);
    FUN_1431d64a0(lVar3);
  }
  return 0;
}



// FUNCTION 1431df3b0 GetClosestCuePosition body=130 status=ok
// SIG undefined GetClosestCuePosition(void)

int CAkMusicSegment::GetClosestCuePosition(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  int local_res10;
  
  uVar4 = 0;
  piVar7 = (int *)(*(longlong *)(param_1 + 0xf8) + 4);
  iVar1 = *piVar7;
  uVar6 = uVar4;
  if (*(int *)(param_1 + 0x100) != 1) {
    do {
      uVar2 = *piVar7 - (iVar1 + param_2);
      uVar5 = (int)uVar2 >> 0x1f;
      iVar3 = (uVar2 ^ uVar5) - uVar5;
      if ((uVar6 == 0) || (iVar3 < local_res10)) {
        uVar6 = uVar4 * 0x10 + *(longlong *)(param_1 + 0xf8);
        local_res10 = iVar3;
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      piVar7 = piVar7 + 4;
    } while (uVar2 < *(int *)(param_1 + 0x100) - 1U);
  }
  return *(int *)(uVar6 + 4) - iVar1;
}



// FUNCTION 1431df440 GetEntrySyncPos body=131 status=ok
// SIG undefined GetEntrySyncPos(void)

void CAkMusicSegment::GetEntrySyncPos
               (longlong param_1,longlong param_2,int param_3,undefined4 param_4,undefined4 *param_5
               ,int *param_6)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  *param_6 = param_3;
  *param_5 = 0;
  uVar1 = *(ushort *)(param_2 + 0x14);
  uVar3 = uVar1 & 7;
  if (uVar3 == 0) {
    if (param_3 == 0) {
      *param_5 = **(undefined4 **)(param_1 + 0xf8);
      return;
    }
  }
  else {
    if (uVar3 == 2) {
      if ((uVar1 & 0x10) == 0) {
        param_4 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar4 = 0;
    }
    else {
      if (uVar3 != 3) {
        return;
      }
      if ((uVar1 & 0x10) == 0) {
        param_4 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar4 = 1;
    }
    iVar2 = GetRandomCue(param_1,*param_6,param_4,uVar4,param_5);
    *param_6 = iVar2;
  }
  return;
}



// FUNCTION 1431df4d0 FUN_1431df4d0 body=738 status=ok
// SIG undefined FUN_1431df4d0(void)

undefined8
FUN_1431df4d0(longlong param_1,uint param_2,undefined4 param_3,int *param_4,char param_5,
             uint *param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  
  piVar2 = *(int **)(param_1 + 0xf8);
  piVar9 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x100) * 4;
  uVar8 = 2;
  iVar1 = piVar2[1];
  if ((uint)(piVar9[-3] - iVar1) < param_2) {
    return 2;
  }
  switch(param_3) {
  case 0:
    *param_4 = 0;
    *param_6 = param_2;
    goto LAB_1431df796;
  case 1:
    lVar5 = CAkMusicNode::GetMusicGrid(param_1);
    iVar1 = *(int *)(lVar5 + 0xc);
    uVar4 = param_2 + 1;
    if (param_5 == '\0') {
      uVar4 = param_2;
    }
    uVar10 = *(uint *)(lVar5 + 0x10);
    uVar6 = *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                    (ulonglong)*(uint *)(param_1 + 0x100) * 0x10) -
            *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
    *param_6 = uVar10;
    if (iVar1 == 0) {
      uVar10 = uVar4 + 1;
      *param_6 = uVar10;
    }
    else {
      while (uVar10 < uVar4) {
        *param_6 = *param_6 + iVar1;
        uVar10 = *param_6;
      }
    }
    if (uVar6 < uVar10) {
      if (uVar4 < uVar6) {
        *param_6 = uVar6;
        goto LAB_1431df5af;
      }
    }
    else {
LAB_1431df5af:
      uVar8 = 1;
    }
    *param_4 = 0;
    break;
  case 2:
    lVar5 = CAkMusicNode::GetMusicGrid(param_1);
    iVar1 = *(int *)(lVar5 + 8);
    uVar4 = param_2 + 1;
    if (param_5 == '\0') {
      uVar4 = param_2;
    }
    uVar10 = *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                     (ulonglong)*(uint *)(param_1 + 0x100) * 0x10) -
             *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
    *param_6 = 0;
    if (iVar1 == 0) {
      uVar6 = uVar4 + 1;
      *param_6 = uVar6;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        do {
          *param_6 = *param_6 + iVar1;
          uVar6 = *param_6;
        } while (uVar6 < uVar4);
      }
    }
    if (uVar6 <= uVar10) {
      *param_4 = 0;
      return 1;
    }
LAB_1431df61b:
    if (uVar4 < uVar10) {
      *param_6 = uVar10;
      goto LAB_1431df623;
    }
    goto LAB_1431df628;
  case 3:
    lVar5 = CAkMusicNode::GetMusicGrid(param_1);
    iVar1 = *(int *)(lVar5 + 4);
    uVar4 = param_2 + 1;
    if (param_5 == '\0') {
      uVar4 = param_2;
    }
    uVar10 = *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                     (ulonglong)*(uint *)(param_1 + 0x100) * 0x10) -
             *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
    *param_6 = 0;
    if (iVar1 == 0) {
      uVar6 = uVar4 + 1;
      *param_6 = uVar6;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        do {
          *param_6 = *param_6 + iVar1;
          uVar6 = *param_6;
        } while (uVar6 < uVar4);
      }
    }
    if (uVar10 < uVar6) goto LAB_1431df61b;
LAB_1431df623:
    uVar8 = 1;
LAB_1431df628:
    *param_4 = 0;
    break;
  case 4:
    piVar3 = piVar2 + 4;
    if (param_5 == '\0') {
      piVar3 = piVar2;
    }
    for (; piVar3 != piVar9; piVar3 = piVar3 + 4) {
      if ((iVar1 + param_2 <= (uint)piVar3[1]) && ((*param_4 == 0 || (*piVar3 == *param_4)))) {
        *param_4 = *piVar3;
        uVar4 = piVar3[1] - *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
        goto LAB_1431df78f;
      }
    }
    *param_4 = piVar9[-4];
    uVar4 = *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                    (ulonglong)*(uint *)(param_1 + 0x100) * 0x10) -
            *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
    goto LAB_1431df78f;
  case 5:
    uVar4 = 1;
    if (*(int *)(param_1 + 0x100) != 2) {
      do {
        uVar7 = (ulonglong)uVar4;
        if ((iVar1 + param_2 < (uint)piVar2[uVar7 * 4 + 1]) &&
           ((*param_4 == 0 || (piVar2[uVar7 * 4] == *param_4)))) {
          *param_4 = piVar2[uVar7 * 4];
          *param_6 = *(int *)(*(longlong *)(param_1 + 0xf8) + 4 + uVar7 * 0x10) -
                     *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
          goto LAB_1431df796;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= *(int *)(param_1 + 0x100) - 2U);
    }
    break;
  case 6:
    if (param_2 != 0) {
      return 2;
    }
    if (param_5 != '\0') {
      return 2;
    }
    uVar4 = 0;
    *param_4 = *piVar2;
LAB_1431df78f:
    *param_6 = uVar4;
    goto LAB_1431df796;
  case 7:
    *param_6 = piVar9[-3] - iVar1;
    *param_4 = *(int *)(*(longlong *)(param_1 + 0xf8) + -0x10 +
                       (ulonglong)*(uint *)(param_1 + 0x100) * 0x10);
LAB_1431df796:
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1431df7e0 GetNumCuesWithFilter body=478 status=ok
// SIG undefined GetNumCuesWithFilter(void)

uint CAkMusicSegment::GetNumCuesWithFilter(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar6 = *(int *)(param_1 + 0x100) - 1;
  uVar4 = (uint)(param_2 == 0);
  uVar5 = 1;
  if (param_2 != 0) {
    uVar5 = (ulonglong)param_2;
  }
  uVar7 = (uint)uVar5;
  uVar2 = uVar6 - uVar7;
  if ((uVar7 < uVar6) && (7 < uVar2)) {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar4 = uVar7 + 2;
    do {
      uVar7 = (int)uVar5 + 8;
      uVar13 = uVar4 + 4;
      uVar11 = uVar4 + 3;
      uVar9 = uVar4 + 2;
      uVar15 = uVar4 + 5;
      uVar8 = -(uint)(*(int *)(lVar3 + uVar5 * 0x10) == param_3);
      uVar10 = -(uint)(*(int *)(lVar3 + (ulonglong)(uVar4 - 1) * 0x10) == param_3);
      uVar12 = -(uint)(*(int *)(lVar3 + (ulonglong)uVar4 * 0x10) == param_3);
      uVar14 = -(uint)(*(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x10) == param_3);
      uVar4 = uVar4 + 8;
      uVar20 = uVar20 + 1 & uVar8 | ~uVar8 & uVar20;
      uVar21 = uVar21 + 1 & uVar10 | ~uVar10 & uVar21;
      uVar22 = uVar22 + 1 & uVar12 | ~uVar12 & uVar22;
      uVar23 = uVar23 + 1 & uVar14 | ~uVar14 & uVar23;
      uVar9 = -(uint)(*(int *)(lVar3 + (ulonglong)uVar9 * 0x10) == param_3);
      uVar11 = -(uint)(*(int *)(lVar3 + (ulonglong)uVar11 * 0x10) == param_3);
      uVar13 = -(uint)(*(int *)(lVar3 + (ulonglong)uVar13 * 0x10) == param_3);
      uVar15 = -(uint)(*(int *)(lVar3 + (ulonglong)uVar15 * 0x10) == param_3);
      uVar16 = uVar16 + 1 & uVar9 | ~uVar9 & uVar16;
      uVar17 = uVar17 + 1 & uVar11 | ~uVar11 & uVar17;
      uVar18 = uVar18 + 1 & uVar13 | ~uVar13 & uVar18;
      uVar19 = uVar19 + 1 & uVar15 | ~uVar15 & uVar19;
      uVar5 = (ulonglong)uVar7;
    } while (uVar7 < uVar6 - (uVar2 & 7));
    uVar4 = uVar16 + uVar20 + uVar18 + uVar22 + uVar17 + uVar21 + uVar19 + uVar23 +
            (uint)(param_2 == 0);
  }
  if (uVar7 < uVar6) {
    lVar3 = (ulonglong)uVar7 << 4;
    uVar5 = (ulonglong)(uVar6 - uVar7);
    do {
      piVar1 = (int *)(lVar3 + *(longlong *)(param_1 + 0xf8));
      lVar3 = lVar3 + 0x10;
      uVar6 = uVar4 + 1;
      if (*piVar1 != param_3) {
        uVar6 = uVar4;
      }
      uVar4 = uVar6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar4;
}



// FUNCTION 1431df9c0 GetNumMusicGridInRange body=308 status=ok
// SIG undefined GetNumMusicGridInRange(void)

void CAkMusicSegment::GetNumMusicGridInRange
               (longlong param_1,uint param_2,uint param_3,int *param_4,int *param_5,uint *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  if ((int)param_2 < 0) {
    if (-param_2 < param_3) {
      param_3 = param_3 + param_2;
      param_2 = uVar3;
      goto LAB_1431dfa06;
    }
LAB_1431df9ec:
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0;
  }
  else {
LAB_1431dfa06:
    uVar4 = *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                    (ulonglong)*(uint *)(param_1 + 0x100) * 0x10) -
            *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
    if (uVar4 < param_2 + param_3) {
      if (uVar4 <= param_2) goto LAB_1431df9ec;
      param_3 = uVar4 - param_2;
    }
    lVar1 = CAkMusicNode::GetMusicGrid(param_1);
    uVar4 = *(uint *)(lVar1 + 8);
    iVar6 = 0;
    iVar5 = iVar6;
    if (uVar4 != 0) {
      uVar2 = (uVar4 - 1) + (uVar4 + param_2) % uVar4;
      iVar5 = (uVar2 + param_3) / uVar4 - uVar2 / uVar4;
    }
    *param_4 = iVar5;
    uVar4 = *(uint *)(lVar1 + 4);
    if (uVar4 != 0) {
      uVar2 = (uVar4 - 1) + (uVar4 + param_2) % uVar4;
      iVar6 = (uVar2 + param_3) / uVar4 - uVar2 / uVar4;
    }
    *param_5 = iVar6;
    uVar4 = *(uint *)(lVar1 + 0xc);
    if (uVar4 != 0) {
      uVar3 = (uVar4 - 1) + ((uVar4 - *(int *)(lVar1 + 0x10)) + param_2) % uVar4;
      uVar3 = (uVar3 + param_3) / uVar4 - uVar3 / uVar4;
    }
    *param_6 = uVar3;
  }
  return;
}



// FUNCTION 1431dfb00 GetRandomCue body=295 status=ok
// SIG undefined GetRandomCue(void)

int CAkMusicSegment::GetRandomCue
              (longlong param_1,int param_2,int param_3,byte param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  uVar6 = (ulonglong)param_4;
  uVar7 = *(int *)(param_1 + 0x100) - 1;
  uVar5 = (uint)param_4;
  while ((iVar4 = (int)uVar6, uVar5 < uVar7 &&
         ((uint)puVar1[uVar6 * 4 + 1] < (uint)(param_2 + puVar1[1])))) {
    uVar5 = iVar4 + 1;
    uVar6 = (ulonglong)uVar5;
  }
  if (param_3 == 0) {
    uVar7 = uVar7 - iVar4;
  }
  else {
    uVar7 = GetNumCuesWithFilter();
  }
  if (uVar7 == 0) {
    *param_5 = *puVar1;
    return 0;
  }
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  uVar3 = (DAT_146b50b60 >> 0x21) % (ulonglong)uVar7;
  iVar2 = (int)uVar3;
  if (param_3 == 0) {
    uVar6 = (ulonglong)(uint)(iVar2 + iVar4);
    goto LAB_1431dfbe1;
  }
  if (iVar4 == 0) {
    if (iVar2 != 0) {
      uVar3 = (ulonglong)(iVar2 - 1);
      uVar6 = 1;
      goto LAB_1431dfbaf;
    }
  }
  else {
LAB_1431dfbaf:
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xf8) + uVar6 * 0x10) == param_3) {
        if ((int)uVar3 == 0) goto LAB_1431dfbe1;
        uVar3 = (ulonglong)((int)uVar3 - 1);
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x100));
  }
  uVar6 = 0;
LAB_1431dfbe1:
  *param_5 = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + uVar6 * 0x10);
  return *(int *)(*(longlong *)(param_1 + 0xf8) + 4 + uVar6 * 0x10) -
         *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
}



// FUNCTION 1431dfc30 GetStateSyncTypes body=134 status=ok
// SIG undefined GetStateSyncTypes(void)

undefined8
CAkMusicSegment::GetStateSyncTypes(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 200);
  if (puVar3 != puVar3 + *(uint *)(param_1 + 0xd0)) {
    do {
      cVar1 = CAkMusicTrack::GetStateSyncTypes(*puVar3,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  uVar2 = CAkParameterNodeBase::GetStateSyncTypes(param_1,param_2,param_3,0);
  return uVar2;
}



// FUNCTION 1431dfcc0 NotifyUserCuesInRange body=181 status=ok
// SIG undefined NotifyUserCuesInRange(void)

void CAkMusicSegment::NotifyUserCuesInRange
               (longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = param_4 + *(int *)(*(longlong *)(param_1 + 0xf8) + 4);
  uVar1 = uVar5 + param_5;
  if ((int)uVar5 < 0) {
    if ((int)uVar1 < 1) {
      return;
    }
    uVar5 = 0;
  }
  uVar4 = 1;
  iVar2 = *(int *)(param_1 + 0x100);
  if (iVar2 != 2) {
    do {
      lVar6 = (ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0xf8);
      uVar3 = *(uint *)(lVar6 + 4);
      if (uVar5 <= uVar3) {
        if (uVar1 <= uVar3) {
          return;
        }
        CAkPlayingMgr::NotifyMusicUserCues(DAT_146b50b00,param_2,param_3,*(undefined8 *)(lVar6 + 8))
        ;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= iVar2 - 2U);
  }
  return;
}



// FUNCTION 1431dfd80 FUN_1431dfd80 body=126 status=ok
// SIG undefined FUN_1431dfd80(void)

undefined8 FUN_1431dfd80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = CAkMusicSegment::CreateSegmentContext
                    (param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                     *(byte *)(param_2 + 0x188) >> 2 & 1);
  if (lVar1 != 0) {
    local_18 = **(undefined4 **)(param_2 + 0x18);
    local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
    local_10 = FUN_1431d7360(lVar1);
    CAkMusicCtx::_Play(lVar1,&local_18);
    return 1;
  }
  return 2;
}



// FUNCTION 1431dfe00 PostExitDuration body=29 status=ok
// SIG undefined PostExitDuration(void)

int CAkMusicSegment::PostExitDuration(longlong param_1)

{
  return *(int *)(param_1 + 0x108) -
         *(int *)(*(longlong *)(param_1 + 0xf8) + -0xc +
                 (ulonglong)*(uint *)(param_1 + 0x100) * 0x10);
}



// FUNCTION 1431dfe20 PreEntryDuration body=11 status=ok
// SIG undefined PreEntryDuration(void)

undefined4 CAkMusicSegment::PreEntryDuration(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 4);
}



// FUNCTION 1431dfe30 Seek body=121 status=ok
// SIG undefined Seek(void)

void CAkMusicSegment::Seek(undefined8 param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  
  bVar2 = *(byte *)(param_2 + 0x3c);
  if ((bVar2 & 1) != 0) {
    fVar1 = *(float *)(param_2 + 0x38);
    fVar3 = 0.0;
    if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 <= fVar1)) {
      fVar3 = 1.0;
    }
    CAkMusicRenderer::SeekPercent
              (DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
               fVar3,bVar2 >> 1 & 1);
    return;
  }
  CAkMusicRenderer::SeekTimeAbsolute
            (DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
             *(undefined4 *)(param_2 + 0x38),bVar2 >> 1 & 1);
  return;
}



// FUNCTION 1431dfeb0 SetInitialValues body=643 status=ok
// SIG undefined SetInitialValues(void)

ulonglong CAkMusicSegment::SetInitialValues(longlong *param_1,double *param_2,undefined4 param_3)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *_Dst;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double *local_res10;
  undefined4 local_res18 [4];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar4 = (**(code **)(*param_1 + 0x80))();
  if (iVar4 != 7) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  uVar5 = CAkMusicNode::SetMusicNodeParams(param_1,&local_res10,local_res18,0);
  if ((int)uVar5 == 1) {
    pdVar1 = local_res10 + 1;
    dVar13 = (double)DAT_1467bdcac * *local_res10 * 0.001;
    if (dVar13 <= 0.0) {
      dVar12 = -0.5;
    }
    else {
      dVar12 = 0.5;
    }
    *(int *)(param_1 + 0x21) = (int)(dVar12 + dVar13);
    local_res10 = (double *)((longlong)local_res10 + 0xc);
    uVar2 = *(uint *)pdVar1;
    uVar8 = (ulonglong)uVar2;
    uVar5 = uVar5 & 0xffffffff;
    if (uVar2 != 0) {
      uVar10 = (ulonglong)uVar2;
      pvVar6 = AK::MemoryMgr::Malign(g_DefaultPoolId,uVar8 * 0x18,8);
      if (pvVar6 == (void *)0x0) {
        uVar5 = 0x34;
      }
      else {
        if (uVar2 != 0) {
          puVar7 = (undefined8 *)((longlong)pvVar6 + 0x10);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar11 = 0;
        if (uVar2 != 0) {
          plVar9 = (longlong *)((longlong)pvVar6 + 0x10);
          do {
            *(undefined4 *)(plVar9 + -2) = *(undefined4 *)local_res10;
            plVar9[-1] = *(longlong *)((longlong)local_res10 + 4);
            uVar3 = *(uint *)((longlong)local_res10 + 0xc);
            pdVar1 = local_res10 + 2;
            local_res10 = pdVar1;
            if ((uVar3 != 0) &&
               (local_res10 = (double *)((longlong)pdVar1 + (ulonglong)uVar3), uVar3 != 0)) {
              _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar3 + 1));
              *plVar9 = (longlong)_Dst;
              if (_Dst == (void *)0x0) {
                uVar5 = 2;
                goto LAB_1431e00cd;
              }
              ::_guard_xfg_dispatch_icall_nop(_Dst,pdVar1,(ulonglong)uVar3);
              *(undefined1 *)((ulonglong)uVar3 + *plVar9) = 0;
            }
            uVar11 = uVar11 + 1;
            plVar9 = plVar9 + 3;
          } while (uVar11 < uVar2);
        }
        uVar11 = SetMarkers(param_1,pvVar6,uVar2);
        uVar5 = (ulonglong)uVar11;
        if (uVar11 != 1) {
LAB_1431e00cd:
          if (uVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)pvVar6 + 0x10);
            do {
              if ((void *)*puVar7 != (void *)0x0) {
                AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar7);
              }
              puVar7 = puVar7 + 3;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1431e0140 SetMarkers body=717 status=ok
// SIG undefined SetMarkers(void)

undefined8 CAkMusicSegment::SetMarkers(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  
  plVar2 = (longlong *)(param_1 + 0xf8);
  AkArray<AkMusicMarker,AkMusicMarker_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,0,AkAssignmentMovePolicy<AkMusicMarker>_>
  ::Term(plVar2);
  if (param_3 != 0) {
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_3 << 4);
    *plVar2 = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) {
      return 2;
    }
    *(uint *)(param_1 + 0x104) = param_3;
  }
  puVar10 = (undefined8 *)0x0;
  uVar5 = 0;
  uVar12 = 0x3fe00000;
  uVar13 = 0xbfe00000;
  if (3 < param_3) {
    puVar8 = (undefined8 *)(param_2 + 0x10);
    uVar5 = (param_3 - 4 >> 2) + 1;
    uVar9 = (ulonglong)uVar5;
    uVar5 = uVar5 * 4;
    do {
      uVar3 = *(uint *)(param_1 + 0x100);
      puVar7 = puVar10;
      if (uVar3 < *(uint *)(param_1 + 0x104)) {
        *(uint *)(param_1 + 0x100) = uVar3 + 1;
        puVar7 = (undefined8 *)((ulonglong)uVar3 * 0x10 + *plVar2);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      *(undefined4 *)puVar7 = *(undefined4 *)(puVar8 + -2);
      dVar11 = (double)DAT_1467bdcac * (double)puVar8[-1] * 0.001;
      uVar3 = uVar13;
      if (0.0 < dVar11) {
        uVar3 = uVar12;
      }
      *(int *)((longlong)puVar7 + 4) = (int)((double)((ulonglong)uVar3 << 0x20) + dVar11);
      puVar7[1] = *puVar8;
      uVar3 = *(uint *)(param_1 + 0x100);
      puVar7 = puVar10;
      if (uVar3 < *(uint *)(param_1 + 0x104)) {
        *(uint *)(param_1 + 0x100) = uVar3 + 1;
        puVar7 = (undefined8 *)((ulonglong)uVar3 * 0x10 + *plVar2);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      *(undefined4 *)puVar7 = *(undefined4 *)(puVar8 + 1);
      dVar11 = (double)DAT_1467bdcac * (double)puVar8[2] * 0.001;
      uVar3 = uVar13;
      if (0.0 < dVar11) {
        uVar3 = uVar12;
      }
      *(int *)((longlong)puVar7 + 4) = (int)((double)((ulonglong)uVar3 << 0x20) + dVar11);
      puVar7[1] = puVar8[3];
      uVar3 = *(uint *)(param_1 + 0x100);
      puVar7 = puVar10;
      if (uVar3 < *(uint *)(param_1 + 0x104)) {
        *(uint *)(param_1 + 0x100) = uVar3 + 1;
        puVar7 = (undefined8 *)((ulonglong)uVar3 * 0x10 + *plVar2);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      *(undefined4 *)puVar7 = *(undefined4 *)(puVar8 + 4);
      dVar11 = (double)DAT_1467bdcac * (double)puVar8[5] * 0.001;
      uVar3 = uVar13;
      if (0.0 < dVar11) {
        uVar3 = uVar12;
      }
      *(int *)((longlong)puVar7 + 4) = (int)((double)((ulonglong)uVar3 << 0x20) + dVar11);
      puVar7[1] = puVar8[6];
      uVar3 = *(uint *)(param_1 + 0x100);
      puVar7 = puVar10;
      if (uVar3 < *(uint *)(param_1 + 0x104)) {
        *(uint *)(param_1 + 0x100) = uVar3 + 1;
        puVar7 = (undefined8 *)((ulonglong)uVar3 * 0x10 + *plVar2);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      *(undefined4 *)puVar7 = *(undefined4 *)(puVar8 + 7);
      dVar11 = (double)DAT_1467bdcac * (double)puVar8[8] * 0.001;
      uVar3 = uVar13;
      if (0.0 < dVar11) {
        uVar3 = uVar12;
      }
      *(int *)((longlong)puVar7 + 4) = (int)((double)((ulonglong)uVar3 << 0x20) + dVar11);
      puVar1 = puVar8 + 9;
      puVar8 = puVar8 + 0xc;
      puVar7[1] = *puVar1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (uVar5 < param_3) {
    uVar9 = (ulonglong)(param_3 - uVar5);
    puVar8 = (undefined8 *)(param_2 + (ulonglong)uVar5 * 0x18 + 0x10);
    do {
      uVar5 = *(uint *)(param_1 + 0x100);
      puVar7 = puVar10;
      if (uVar5 < *(uint *)(param_1 + 0x104)) {
        *(uint *)(param_1 + 0x100) = uVar5 + 1;
        puVar7 = (undefined8 *)((ulonglong)uVar5 * 0x10 + *plVar2);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      *(undefined4 *)puVar7 = *(undefined4 *)(puVar8 + -2);
      dVar11 = (double)DAT_1467bdcac * (double)puVar8[-1] * 0.001;
      uVar5 = uVar13;
      if (0.0 < dVar11) {
        uVar5 = uVar12;
      }
      *(int *)((longlong)puVar7 + 4) = (int)((double)((ulonglong)uVar5 << 0x20) + dVar11);
      uVar4 = *puVar8;
      puVar8 = puVar8 + 3;
      puVar7[1] = uVar4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return 1;
}



// FUNCTION 1431e0410 Term body=121 status=ok
// SIG undefined Term(void)

void AkArray<AkMusicMarker,AkMusicMarker_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,0,AkAssignmentMovePolicy<AkMusicMarker>_>
     ::Term(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + (longlong)pvVar2);
    if (pvVar2 != pvVar1) {
      do {
        if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 8));
        }
        pvVar2 = (void *)((longlong)pvVar2 + 0x10);
      } while (pvVar2 != pvVar1);
      pvVar2 = (void *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1431e0490 Track body=29 status=ok
// SIG undefined Track(void)

undefined8 CAkMusicSegment::Track(longlong param_1,ushort param_2)

{
  if ((uint)param_2 < *(uint *)(param_1 + 0xd0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 200) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1431e04c0 FUN_1431e04c0 body=104 status=ok
// SIG undefined FUN_1431e04c0(void)

undefined8 * FUN_1431e04c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ad1030;
  param_1[3] = &PTR_LAB_145ad12b0;
  param_1[6] = &PTR_LAB_145ad0730;
  FUN_1431e0ba0();
  FUN_1431e4830(param_1 + 0x21);
  CAkMusicTransAware::~CAkMusicTransAware(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1431e0530 FUN_1431e0530 body=43 status=ok
// SIG undefined FUN_1431e0530(void)

undefined8 * FUN_1431e0530(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ad1000;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1431e0560 FUN_1431e0560 body=43 status=ok
// SIG undefined FUN_1431e0560(void)

undefined8 * FUN_1431e0560(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ad1000;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1431e0590 FUN_1431e0590 body=52 status=ok
// SIG undefined FUN_1431e0590(void)

undefined8 FUN_1431e0590(undefined8 param_1,ulonglong param_2)

{
  FUN_1431e4830();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431e05d0 FUN_1431e05d0 body=837 status=ok
// SIG undefined FUN_1431e05d0(void)

undefined8 FUN_1431e05d0(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar14 = 0;
  if (param_4 != 0) {
    do {
      piVar5 = (int *)*param_3;
      *param_3 = (longlong)(piVar5 + 8);
      if (*piVar5 == 0) {
        puVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
        if (puVar9 == (undefined8 *)0x0) {
          return 2;
        }
        puVar9[1] = param_2;
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 1;
        *(undefined2 *)(puVar9 + 3) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = 50000;
        *puVar9 = &PTR_FUN_145ad1010;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined4 *)(puVar9 + 6) = 0;
        puVar9[7] = 0;
        *(undefined2 *)(puVar9 + 8) = 0x100;
        *(undefined1 *)((longlong)puVar9 + 0x42) = 0;
        *(undefined2 *)((longlong)puVar9 + 0x44) = 0;
        uVar3 = *(uint *)(param_2 + 0x28);
        if (*(uint *)(param_2 + 0x2c) <= uVar3) {
          uVar13 = *(uint *)(param_2 + 0x2c) + 8;
          pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar13 << 3);
          if (pvVar10 == (void *)0x0) goto LAB_1431e08d6;
          pvVar11 = *(void **)(param_2 + 0x20);
          if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar10)) {
            uVar4 = *(uint *)(param_2 + 0x28);
            uVar12 = 0;
            if ((ulonglong)uVar4 != 0) {
              do {
                *(undefined8 *)((longlong)pvVar10 + uVar12 * 8) =
                     *(undefined8 *)(*(longlong *)(param_2 + 0x20) + uVar12 * 8);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar4);
              pvVar11 = *(void **)(param_2 + 0x20);
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
          }
          *(void **)(param_2 + 0x20) = pvVar10;
          *(uint *)(param_2 + 0x2c) = uVar13;
          if (uVar13 <= uVar3) goto LAB_1431e08d6;
        }
        uVar3 = *(uint *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = uVar3 + 1;
        puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar3 * 8);
        if (puVar1 == (undefined8 *)0x0) goto LAB_1431e08d6;
        *puVar1 = puVar9;
        *(short *)((longlong)puVar9 + 0x44) = (short)piVar5[7];
        iVar8 = piVar5[5];
        uVar2 = *(undefined2 *)((longlong)piVar5 + 0x12);
        *(short *)((longlong)puVar9 + 0x14) = (short)piVar5[4];
        *(undefined2 *)((longlong)puVar9 + 0x16) = uVar2;
        *(short *)(puVar9 + 3) = (short)iVar8;
        *(int *)((longlong)puVar9 + 0x1c) = piVar5[6];
        *(int *)(puVar9 + 6) = piVar5[3];
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined1 *)((longlong)puVar9 + 0x41) = *(undefined1 *)((longlong)piVar5 + 0x1f);
        *(int *)(puVar9 + 2) = piVar5[1];
        if ((piVar5[2] != 0) && (iVar8 = FUN_1431e05d0(param_1,puVar9,param_3), iVar8 != 1)) {
          return 2;
        }
      }
      else {
        puVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
        if (puVar9 == (undefined8 *)0x0) {
          return 2;
        }
        puVar9[1] = param_2;
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 1;
        *(undefined2 *)(puVar9 + 3) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = 50000;
        *puVar9 = &PTR_FUN_145ad1020;
        uVar3 = *(uint *)(param_2 + 0x28);
        if (*(uint *)(param_2 + 0x2c) <= uVar3) {
          uVar13 = *(uint *)(param_2 + 0x2c) + 8;
          pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar13 << 3);
          if (pvVar10 == (void *)0x0) goto LAB_1431e08d6;
          pvVar11 = *(void **)(param_2 + 0x20);
          if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar10)) {
            uVar4 = *(uint *)(param_2 + 0x28);
            uVar12 = 0;
            if ((ulonglong)uVar4 != 0) {
              do {
                *(undefined8 *)((longlong)pvVar10 + uVar12 * 8) =
                     *(undefined8 *)(*(longlong *)(param_2 + 0x20) + uVar12 * 8);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar4);
              pvVar11 = *(void **)(param_2 + 0x20);
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
          }
          *(void **)(param_2 + 0x20) = pvVar10;
          *(uint *)(param_2 + 0x2c) = uVar13;
          if (uVar13 <= uVar3) goto LAB_1431e08d6;
        }
        uVar3 = *(uint *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = uVar3 + 1;
        puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar3 * 8);
        if (puVar1 == (undefined8 *)0x0) {
LAB_1431e08d6:
          lVar7 = g_DefaultPoolId;
          (**(code **)*puVar9)(puVar9,0);
          AK::MemoryMgr::Free(lVar7,puVar9);
          return 2;
        }
        *puVar1 = puVar9;
        iVar8 = piVar5[4];
        iVar6 = piVar5[5];
        *(undefined2 *)((longlong)puVar9 + 0x16) = *(undefined2 *)((longlong)piVar5 + 0x12);
        *(short *)((longlong)puVar9 + 0x14) = (short)iVar8;
        *(short *)(puVar9 + 3) = (short)iVar6;
        *(int *)((longlong)puVar9 + 0x1c) = piVar5[6];
        *(int *)(puVar9 + 4) = *piVar5;
        *(int *)(puVar9 + 2) = piVar5[1];
        CAkRSSub::WasSegmentLeafFound(param_2);
      }
      if (piVar5[6] != 50000) {
        *(undefined1 *)(param_2 + 0x40) = 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_4);
  }
  return 1;
}



// FUNCTION 1431e0920 CanAddChild body=165 status=ok
// SIG undefined CanAddChild(void)

undefined4 CAkMusicRanSeqCntr::CanAddChild(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x80))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x250))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 == 7) {
    if (param_2[0x10] == 0) {
      lVar1 = param_2[2];
      lVar5 = FUN_143145200(param_1 + 0x19,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[2] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1431e09d0 FUN_1431e09d0 body=260 status=ok
// SIG undefined FUN_1431e09d0(void)

longlong * FUN_1431e09d0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x150);
  if (plVar3 != (longlong *)0x0) {
    CAkMusicTransAware::CAkMusicTransAware(plVar3,param_1);
    *plVar3 = (longlong)&PTR_FUN_145ad1030;
    plVar3[3] = (longlong)&PTR_LAB_145ad12b0;
    plVar3[6] = (longlong)&PTR_LAB_145ad0730;
    plVar3[0x21] = (longlong)&PTR_FUN_145ad1010;
    plVar3[0x22] = 0;
    *(undefined4 *)(plVar3 + 0x23) = 0;
    *(undefined2 *)(plVar3 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x11c) = 1;
    *(undefined4 *)((longlong)plVar3 + 0x124) = 50000;
    plVar3[0x25] = 0;
    plVar3[0x26] = 0;
    *(undefined4 *)(plVar3 + 0x27) = 0;
    plVar3[0x28] = 0;
    *(undefined2 *)(plVar3 + 0x29) = 0x100;
    *(undefined1 *)((longlong)plVar3 + 0x14a) = 0;
    *(undefined2 *)((longlong)plVar3 + 0x14c) = 0;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(plVar3);
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 1431e0af0 CreateSequenceCtx body=152 status=ok
// SIG undefined CreateSequenceCtx(void)

longlong CAkMusicRanSeqCntr::CreateSequenceCtx
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xf0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_1431e5f70(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = CAkSequenceCtx::Init(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      FUN_1431d64a0();
      return lVar3;
    }
    CAkMusicCtx::_Cancel(lVar3);
    FUN_1431d64a0(lVar3);
  }
  return 0;
}



// FUNCTION 1431e0ba0 FUN_1431e0ba0 body=150 status=ok
// SIG undefined FUN_1431e0ba0(void)

void FUN_1431e0ba0(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x128);
  if (puVar3 != puVar3 + *(uint *)(param_1 + 0x130)) {
    do {
      lVar2 = g_DefaultPoolId;
      puVar1 = (undefined8 *)*puVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        AK::MemoryMgr::Free(lVar2,puVar1);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 8))
    ;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  CAkRSSub::Clear(param_1 + 0x108);
  return;
}



// FUNCTION 1431e0c40 FUN_1431e0c40 body=135 status=ok
// SIG undefined FUN_1431e0c40(void)

undefined8 FUN_1431e0c40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = (longlong *)
           CAkMusicRanSeqCntr::CreateSequenceCtx
                     (param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                      *(byte *)(param_2 + 0x188) >> 2 & 1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1);
    local_18 = **(undefined4 **)(param_2 + 0x18);
    local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
    local_10 = FUN_1431d7360(plVar1);
    CAkMusicCtx::_Play(plVar1,&local_18);
    return 1;
  }
  return 2;
}



// FUNCTION 1431e0cd0 SetInitialValues body=465 status=ok
// SIG undefined SetInitialValues(void)

undefined8 CAkMusicRanSeqCntr::SetInitialValues(longlong *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *local_res10;
  undefined4 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  if (iVar2 != 8) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  uVar3 = FUN_1431d9ce0(param_1,&local_res10,local_res18,0);
  if ((int)uVar3 == 1) {
    uVar1 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar1 != 0) {
      uVar7 = (ulonglong)uVar1;
      pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 5);
      if (pvVar4 == (void *)0x0) {
        return 2;
      }
      if (uVar1 != 0) {
        puVar6 = (uint *)((longlong)pvVar4 + 8);
        do {
          puVar6[-2] = *local_res10;
          puVar6[-1] = local_res10[1];
          *puVar6 = local_res10[2];
          puVar6[1] = local_res10[3];
          *(short *)(puVar6 + 2) = (short)local_res10[4];
          *(undefined2 *)((longlong)puVar6 + 10) = *(undefined2 *)((longlong)local_res10 + 0x12);
          *(short *)(puVar6 + 3) = (short)local_res10[5];
          puVar6[4] = *(uint *)((longlong)local_res10 + 0x16);
          *(undefined2 *)(puVar6 + 5) = *(undefined2 *)((longlong)local_res10 + 0x1a);
          pcVar5 = (char *)((longlong)local_res10 + 0x1d);
          *(bool *)((longlong)puVar6 + 0x16) = (char)local_res10[7] != '\0';
          local_res10 = (uint *)((longlong)local_res10 + 0x1e);
          *(bool *)((longlong)puVar6 + 0x17) = *pcVar5 != '\0';
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 8;
        } while (uVar7 != 0);
      }
      FUN_1431e0eb0(param_1,pvVar4);
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1431e0eb0 FUN_1431e0eb0 body=175 status=ok
// SIG undefined FUN_1431e0eb0(void)

undefined8 FUN_1431e0eb0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1431e0ba0();
  *(undefined2 *)(param_1 + 0x14c) = *(undefined2 *)(local_res10[0] + 0x1c);
  uVar1 = *(undefined2 *)(local_res10[0] + 0x14);
  uVar2 = *(undefined2 *)(local_res10[0] + 0x12);
  *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(local_res10[0] + 0x10);
  *(undefined2 *)(param_1 + 0x11e) = uVar2;
  *(undefined2 *)(param_1 + 0x120) = uVar1;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(local_res10[0] + 0x18);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(local_res10[0] + 0xc);
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(local_res10[0] + 0x1f);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(local_res10[0] + 4);
  if (*(int *)(local_res10[0] + 8) != 0) {
    local_res10[0] = local_res10[0] + 0x20;
    uVar3 = FUN_1431e05d0(param_1,param_1 + 0x108,local_res10);
    return uVar3;
  }
  return 1;
}



// FUNCTION 1431e0f70 `scalar_deleting_destructor' body=182 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMusicSwitchCntr::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad1330;
  param_1[3] = &PTR_LAB_145ad15b0;
  param_1[6] = &PTR_LAB_145ad0730;
  param_1[0x21] = &PTR_FUN_145ad1630;
  if ((void *)param_1[0x28] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x28]);
    param_1[0x28] = 0;
  }
  if ((void *)param_1[0x29] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x29]);
    param_1[0x29] = 0;
  }
  AkDecisionTree::~AkDecisionTree(param_1 + 0x24);
  CAkMusicTransAware::~CAkMusicTransAware(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1431e1030 CanAddChild body=168 status=ok
// SIG undefined CanAddChild(void)

undefined4 CAkMusicSwitchCntr::CanAddChild(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x80))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x250))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 - 7U < 3) {
    if (param_2[0x10] == 0) {
      lVar1 = param_2[2];
      lVar5 = FUN_143145200(param_1 + 0x19,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[2] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1431e10e0 Create body=238 status=ok
// SIG undefined Create(void)

longlong * CAkMusicSwitchCntr::Create(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x150);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    CAkMusicTransAware::CAkMusicTransAware(plVar3,param_1);
    plVar3[0x22] = 0;
    *(undefined4 *)(plVar3 + 0x23) = 0;
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__145ad1330;
    plVar3[3] = (longlong)&PTR_LAB_145ad15b0;
    plVar3[6] = (longlong)&PTR_LAB_145ad0730;
    plVar3[0x21] = (longlong)&PTR_FUN_145ad1630;
    AkDecisionTree::AkDecisionTree(plVar3 + 0x24);
    *(undefined1 *)(plVar3 + 0x27) = 1;
    plVar3[0x28] = 0;
    plVar3[0x29] = 0;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(plVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return plVar3;
}



// FUNCTION 1431e11d0 CreateContext body=152 status=ok
// SIG undefined CreateContext(void)

longlong CAkMusicSwitchCntr::CreateContext
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xd0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = CAkMusicSwitchCtx::CAkMusicSwitchCtx(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = FUN_1431e7120(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      FUN_1431d64a0();
      return lVar3;
    }
    CAkMusicCtx::_Cancel(lVar3);
    FUN_1431d64a0(lVar3);
  }
  return 0;
}



// FUNCTION 1431e1270 ExecuteAction body=107 status=ok
// SIG undefined ExecuteAction(void)

void CAkMusicSwitchCntr::ExecuteAction(undefined8 param_1,int *param_2)

{
  if (*param_2 != 4) {
    FUN_1431ddde0();
    return;
  }
  if ((*(byte *)(param_2 + 0xf) & 1) != 0) {
    CAkMusicRenderer::SeekPercent
              (DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 2),param_2[4],param_2[0xe]);
    return;
  }
  CAkMusicRenderer::SeekTimeAbsolute
            (DAT_146b520c8,param_1,*(undefined8 *)(param_2 + 2),param_2[4],param_2[0xe],
             *(byte *)(param_2 + 0xf) >> 1 & 1);
  return;
}



// FUNCTION 1431e12e0 FUN_1431e12e0 body=812 status=ok
// SIG undefined FUN_1431e12e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431e12e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  char param_5,undefined8 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  char acStack_b8 [8];
  undefined8 uStack_b0;
  int local_a8 [4];
  uint local_98 [2];
  uint local_90;
  int iStack_8c;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  lVar13 = 0;
  iVar7 = 0;
  puVar12 = auStack_d8;
  if (param_5 != '\0') {
    local_98[0] = *(uint *)(param_1 + 0x120);
    local_80 = (ulonglong)local_98[0];
    uVar11 = local_80 * 4 + 0xf;
    if (uVar11 <= local_80 * 4) {
      uVar11 = 0xffffffffffffff0;
    }
    uStack_e0 = 0x1431e1351;
    lVar5 = -(uVar11 & 0xfffffffffffffff0);
    puVar12 = auStack_d8 + lVar5;
    local_78 = (longlong)local_98 + lVar5;
    if (local_98[0] != 0) {
      local_88 = 0;
      do {
        local_90 = (uint)*(byte *)(local_88 + *(longlong *)(param_1 + 0x148));
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x140) + lVar13);
        local_70 = (ulonglong)*(uint *)(param_4 + 1);
        iStack_8c = iVar7;
        if (*(uint *)(param_4 + 1) < *(uint *)((longlong)param_4 + 0xc)) {
LAB_1431e1422:
          puVar8 = (undefined8 *)(*param_4 + (ulonglong)*(uint *)(param_4 + 1) * 8);
          *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + 1;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = CONCAT44(iStack_8c,local_90);
          }
        }
        else {
          uVar1 = *(uint *)((longlong)param_4 + 0xc) + 1;
          *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e13b9;
          puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
          if (puVar8 != (undefined8 *)0x0) {
            puVar9 = (undefined8 *)*param_4;
            if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
              uVar11 = (ulonglong)*(uint *)(param_4 + 1);
              if (uVar11 != 0) {
                puVar9 = puVar8;
                do {
                  if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = 1;
                  }
                  *puVar9 = *(undefined8 *)((*param_4 - (longlong)puVar8) + (longlong)puVar9);
                  puVar9 = puVar9 + 1;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                puVar9 = (undefined8 *)*param_4;
              }
              *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e1412;
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar9);
            }
            *param_4 = (longlong)puVar8;
            *(uint *)((longlong)param_4 + 0xc) = uVar1;
            if ((uint)local_70 < uVar1) goto LAB_1431e1422;
          }
        }
        uVar6 = param_8;
        if (iVar7 != param_7) {
          if (local_90 == 1) {
            *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e1462;
            uVar6 = CAkStateMgr::GetState(DAT_146b50ae8);
          }
          else {
            local_68 = param_6;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0xff;
            local_48 = 0xff;
            local_40 = 0;
            *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e1491;
            uVar6 = FUN_14314a760(g_pSwitchMgr,iVar7,&local_68);
          }
        }
        *(undefined4 *)(local_78 + lVar13) = uVar6;
        lVar13 = lVar13 + 4;
        local_88 = local_88 + 1;
        local_80 = local_80 - 1;
      } while (local_80 != 0);
      local_80 = 0;
    }
    lVar13 = local_78;
    uVar1 = local_98[0];
    *(undefined8 *)((longlong)local_a8 + lVar5) = 0;
    *(undefined8 *)((longlong)&uStack_b0 + lVar5) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    pcVar2 = acStack_b8 + lVar5;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e14de;
    iVar7 = AkDecisionTree::ResolvePath(param_1 + 0x120,uVar6,lVar13,uVar1);
    if (iVar7 != 0) {
      *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e14f9;
      plVar10 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar7,0);
      puVar12 = auStack_d8 + lVar5;
      if (plVar10 != (longlong *)0x0) {
        lVar13 = *plVar10;
        *(undefined4 *)((longlong)local_a8 + lVar5 + 8) = param_8;
        *(int *)((longlong)local_a8 + lVar5) = param_7;
        *(undefined8 *)((longlong)&uStack_b0 + lVar5) = param_6;
        acStack_b8[lVar5] = param_5;
        pcVar3 = *(code **)(lVar13 + 0x78);
        *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e154b;
        (*pcVar3)(plVar10,param_2,param_3,param_4);
        pcVar3 = *(code **)(*plVar10 + 0x10);
        *(undefined8 *)(auStack_d8 + lVar5 + -8) = 0x1431e1554;
        (*pcVar3)(plVar10);
        puVar12 = auStack_d8 + lVar5;
      }
    }
  }
  plVar10 = *(longlong **)(param_1 + 200);
  if (plVar10 != plVar10 + *(uint *)(param_1 + 0xd0)) {
    do {
      plVar4 = (longlong *)*plVar10;
      if ((int)plVar4[2] != iVar7) {
        lVar13 = *plVar4;
        *(undefined4 *)(puVar12 + 0x38) = param_8;
        *(int *)(puVar12 + 0x30) = param_7;
        *(undefined8 *)(puVar12 + 0x28) = param_6;
        puVar12[0x20] = 0;
        pcVar3 = *(code **)(lVar13 + 0x78);
        *(undefined8 *)(puVar12 + -8) = 0x1431e15cc;
        (*pcVar3)(plVar4,param_2,param_3,param_4);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 !=
             (longlong *)(*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 1431e1610 FUN_1431e1610 body=68 status=ok
// SIG undefined FUN_1431e1610(void)

undefined8 FUN_1431e1610(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x18) == 1)) {
    iVar1 = AkDecisionTree::GetAudioNodeForState();
    if (iVar1 != 0) {
      if (param_3 != '\0') {
        uVar2 = FUN_143176fa0();
        return uVar2;
      }
      FUN_143179790(iVar1,0);
    }
  }
  return 1;
}



// FUNCTION 1431e1660 FUN_1431e1660 body=140 status=ok
// SIG undefined FUN_1431e1660(void)

undefined8 FUN_1431e1660(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = (longlong *)
           (**(code **)(*param_1 + 0x260))
                     (param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                      *(byte *)(param_2 + 0x188) >> 2 & 1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1);
    local_18 = **(undefined4 **)(param_2 + 0x18);
    local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
    local_10 = FUN_1431d7360(plVar1);
    CAkMusicCtx::_Play(plVar1,&local_18);
    return 1;
  }
  return 2;
}



// FUNCTION 1431e16f0 FUN_1431e16f0 body=579 status=ok
// SIG undefined FUN_1431e16f0(void)

ulonglong FUN_1431e16f0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int *local_38;
  ulonglong local_30;
  
  if ((DAT_146b50bcc == '\0') || ((int)param_1[0x24] != 1)) {
    uVar6 = FUN_1431de5e0();
    return uVar6;
  }
  uVar6 = 1;
  if ((int)param_1[0x23] == 0) {
    uVar2 = (**(code **)(*param_1 + 0x270))();
    uVar6 = (ulonglong)uVar2;
    if (uVar2 == 1) {
      uVar9 = 0;
      uVar8 = 0;
      if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)param_1[0x28];
      }
      if ((undefined1 *)param_1[0x29] != (undefined1 *)0x0) {
        uVar9 = *(undefined1 *)param_1[0x29];
      }
      puVar3 = (undefined8 *)FUN_1431c52c0(param_1 + 0x21,uVar8,uVar9,0);
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0x34;
      }
      else {
        local_38 = (int *)0x0;
        local_30 = 0;
        FUN_14314ecc0(param_1 + 0x24,&local_38);
        piVar5 = local_38;
        piVar7 = local_38;
        if (local_38 != local_38 + (local_30 & 0xffffffff) * 2) {
          do {
            if (*piVar7 == 0) {
LAB_1431e1808:
              uVar2 = FUN_143176fa0(piVar7[1],0);
              uVar6 = (ulonglong)uVar2;
              piVar5 = local_38;
            }
            else {
              piVar4 = (int *)*puVar3;
              piVar1 = piVar4 + *(uint *)(puVar3 + 1);
              if (piVar4 != piVar1) {
                do {
                  if (*piVar4 == *piVar7) break;
                  piVar4 = piVar4 + 1;
                } while (piVar4 != piVar1);
                if (piVar4 != piVar1) goto LAB_1431e1808;
              }
            }
            piVar1 = piVar5;
            if ((int)uVar6 != 1) {
              for (; piVar1 != piVar7; piVar1 = piVar1 + 2) {
                piVar4 = (int *)*puVar3;
                piVar5 = piVar4 + *(uint *)(puVar3 + 1);
                if (piVar4 != piVar5) {
                  do {
                    if (*piVar4 == *piVar1) break;
                    piVar4 = piVar4 + 1;
                  } while (piVar4 != piVar5);
                  if (piVar4 != piVar5) {
                    FUN_143179790(piVar7[1],0);
                  }
                }
                piVar5 = local_38;
              }
            }
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar5 + (local_30 & 0xffffffff) * 2);
        }
        if (piVar5 != (int *)0x0) {
          local_30 = local_30 & 0xffffffff00000000;
          AK::MemoryMgr::Free(g_DefaultPoolId,piVar5);
          local_38 = (int *)0x0;
          local_30 = local_30 & 0xffffffff;
        }
        if ((int)uVar6 == 1) {
          *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
          uVar2 = FUN_1431c5300(param_1 + 0x21,uVar8,uVar9,0);
          if (uVar2 == 1) {
            return 1;
          }
          (**(code **)(*param_1 + 0x140))(param_1,param_2);
          (**(code **)(*param_1 + 0x278))(param_1);
          return (ulonglong)uVar2;
        }
      }
      (**(code **)(*param_1 + 0x278))(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
  }
  return uVar6;
}



// FUNCTION 1431e1970 SetInitialValues body=448 status=ok
// SIG undefined SetInitialValues(void)

ulonglong CAkMusicSwitchCntr::SetInitialValues(longlong *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *local_res10;
  undefined4 local_res18 [4];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  if (iVar2 != 9) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  uVar3 = FUN_1431d9ce0(param_1,&local_res10,local_res18,0);
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  pcVar5 = local_res10 + 5;
  *(bool *)(param_1 + 0x27) = *local_res10 != '\0';
  uVar6 = *(uint *)(local_res10 + 1);
  uVar7 = uVar6 * 4;
  local_res10 = pcVar5;
  if ((void *)param_1[0x28] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x28]);
    param_1[0x28] = 0;
  }
  if ((void *)param_1[0x29] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x29]);
    param_1[0x29] = 0;
  }
  pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7);
  param_1[0x28] = (longlong)pvVar4;
  if (pvVar4 == (void *)0x0) {
    if (uVar6 == 0) goto LAB_1431e1abc;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(pvVar4,pcVar5,(ulonglong)uVar7);
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6);
    param_1[0x29] = (longlong)pvVar4;
    if (pvVar4 != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(pvVar4,pcVar5 + uVar7,(ulonglong)uVar6);
LAB_1431e1abc:
      pcVar5 = local_res10 + uVar6 * 5;
      uVar1 = *(undefined4 *)pcVar5;
      local_res10 = pcVar5 + 5;
      *(char *)((longlong)param_1 + 0x132) = pcVar5[4];
      uVar7 = AkDecisionTree::SetTree(param_1 + 0x24,local_res10,uVar1,uVar6);
      uVar6 = 1;
      if (uVar7 != 1) {
        uVar6 = uVar7;
      }
      return (ulonglong)uVar6;
    }
  }
  return 0x34;
}



// FUNCTION 1431e1b30 FUN_1431e1b30 body=394 status=ok
// SIG undefined FUN_1431e1b30(void)

void FUN_1431e1b30(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  int *local_28;
  ulonglong local_20;
  
  if ((DAT_146b50bcc == '\0') || ((int)param_1[0x24] != 1)) {
    FUN_1431def50();
  }
  else if (((int)param_1[0x23] != 0) &&
          (iVar2 = (int)param_1[0x23] + -1, *(int *)(param_1 + 0x23) = iVar2, iVar2 == 0)) {
    uVar9 = 0;
    uVar6 = 0;
    if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)param_1[0x28];
    }
    if ((undefined1 *)param_1[0x29] != (undefined1 *)0x0) {
      uVar9 = *(undefined1 *)param_1[0x29];
    }
    puVar3 = (undefined8 *)FUN_1431c52c0(param_1 + 0x21,uVar6,uVar9,0);
    if (puVar3 != (undefined8 *)0x0) {
      local_28 = (int *)0x0;
      local_20 = 0;
      FUN_14314ecc0(param_1 + 0x24,&local_28);
      uVar8 = local_20 & 0xffffffff;
      piVar5 = local_28;
      piVar7 = local_28;
      if (local_28 != local_28 + uVar8 * 2) {
        do {
          if (*piVar5 == 0) {
LAB_1431e1c32:
            FUN_143179790(piVar5[1],0);
            uVar8 = local_20 & 0xffffffff;
            piVar7 = local_28;
          }
          else {
            piVar4 = (int *)*puVar3;
            piVar1 = piVar4 + *(uint *)(puVar3 + 1);
            if (piVar4 != piVar1) {
              do {
                if (*piVar4 == *piVar5) break;
                piVar4 = piVar4 + 1;
              } while (piVar4 != piVar1);
              if (piVar4 != piVar1) goto LAB_1431e1c32;
            }
          }
          piVar5 = piVar5 + 2;
        } while (piVar5 != piVar7 + uVar8 * 2);
      }
      if (piVar7 != (int *)0x0) {
        local_20 = local_20 & 0xffffffff00000000;
        AK::MemoryMgr::Free(g_DefaultPoolId,piVar7);
      }
    }
    FUN_1431c53b0(param_1 + 0x21,uVar6,uVar9,0);
                    /* WARNING: Could not recover jumptable at 0x0001431e1ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))(param_1);
    return;
  }
  return;
}



// FUNCTION 1431e1cd0 `scalar_deleting_destructor' body=294 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMusicTrack::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ad1638;
  param_1[3] = &PTR_LAB_145ad1888;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  param_1[0x25] = 0;
  RemoveAllSourcesNoCheck();
  if ((void *)param_1[0x19] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x19]);
    param_1[0x19] = 0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x1e]);
    param_1[0x1e] = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  FUN_1431e39e0(param_1 + 0x1b);
  lVar2 = g_DefaultPoolId;
  pvVar1 = (void *)param_1[0x22];
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar1 + 0x10));
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
    }
    AK::MemoryMgr::Free(lVar2,pvVar1);
  }
  CAkSoundBase::~CAkSoundBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1431e1e00 FUN_1431e1e00 body=575 status=ok
// SIG undefined FUN_1431e1e00(void)

undefined8 FUN_1431e1e00(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  ulonglong uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  
  dVar15 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 8)) - *(double *)(param_2 + 4);
  if (dVar15 <= 0.0) {
LAB_1431e2010:
    uVar7 = 1;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0xf8);
    if (uVar13 < *(uint *)(param_1 + 0xfc)) {
LAB_1431e1ef0:
      uVar13 = *(uint *)(param_1 + 0xf8);
      *(uint *)(param_1 + 0xf8) = uVar13 + 1;
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)uVar13 * 0x18);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        dVar14 = (*(double *)(param_2 + 2) + *(double *)(param_2 + 4)) * (double)DAT_1467bdcac *
                 0.001;
        if (dVar14 <= 0.0) {
          lVar9 = 0xbfe00000;
        }
        else {
          lVar9 = 0x3fe00000;
        }
        puVar3[2] = (int)((double)(lVar9 << 0x20) + dVar14);
        dVar15 = (double)DAT_1467bdcac * dVar15 * 0.001;
        if (dVar15 <= 0.0) {
          lVar9 = 0xbfe00000;
        }
        else {
          lVar9 = 0x3fe00000;
        }
        puVar3[3] = (int)((double)(lVar9 << 0x20) + dVar15);
        dVar15 = (double)DAT_1467bdcac * *(double *)(param_2 + 8) * 0.001;
        if (dVar15 <= 0.0) {
          lVar9 = 0xbfe00000;
        }
        else {
          lVar9 = 0x3fe00000;
        }
        iVar8 = (int)((double)(lVar9 << 0x20) + dVar15);
        puVar3[4] = iVar8;
        dVar15 = (double)DAT_1467bdcac * *(double *)(param_2 + 4) * 0.001;
        uVar13 = 0x3fe00000;
        if (dVar15 <= 0.0) {
          uVar13 = 0xbfe00000;
        }
        iVar10 = (int)((double)((ulonglong)uVar13 << 0x20) + dVar15) % iVar8;
        puVar3[5] = iVar10;
        if (iVar10 < 0) {
          puVar3[5] = iVar8 + iVar10;
        }
        goto LAB_1431e2010;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xfc) + 1;
      pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
      if (pvVar6 != (void *)0x0) {
        pvVar11 = *(void **)(param_1 + 0xf0);
        if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar6)) {
          uVar12 = (ulonglong)*(uint *)(param_1 + 0xf8);
          if (uVar12 != 0) {
            lVar9 = 0;
            do {
              lVar5 = *(longlong *)(param_1 + 0xf0);
              lVar2 = lVar9 + 0x18;
              puVar4 = (undefined8 *)(lVar5 + -0x18 + lVar2);
              uVar7 = puVar4[1];
              *(undefined8 *)(lVar9 + (longlong)pvVar6) = *puVar4;
              ((undefined8 *)(lVar9 + (longlong)pvVar6))[1] = uVar7;
              *(undefined8 *)(lVar9 + 0x10 + (longlong)pvVar6) = *(undefined8 *)(lVar5 + -8 + lVar2)
              ;
              uVar12 = uVar12 - 1;
              lVar9 = lVar2;
            } while (uVar12 != 0);
            pvVar11 = *(void **)(param_1 + 0xf0);
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
        }
        *(void **)(param_1 + 0xf0) = pvVar6;
        *(uint *)(param_1 + 0xfc) = uVar1;
        if (uVar13 < uVar1) goto LAB_1431e1ef0;
      }
    }
    uVar7 = 2;
  }
  return uVar7;
}



// FUNCTION 1431e2040 FUN_1431e2040 body=231 status=ok
// SIG undefined FUN_1431e2040(void)

longlong * FUN_1431e2040(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  
  lVar8 = *(longlong *)(param_1 + 0xf0);
  plVar11 = (longlong *)0x0;
  lVar1 = lVar8 + (ulonglong)*(uint *)(param_1 + 0xf8) * 0x18;
  plVar7 = plVar11;
  if (lVar8 != lVar1) {
    piVar4 = *(int **)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 4;
    do {
      for (piVar3 = *(int **)(param_1 + 200); (piVar3 != piVar4 && (*piVar3 != *(int *)(lVar8 + 4)))
          ; piVar3 = piVar3 + 4) {
      }
      plVar6 = (longlong *)(piVar3 + 2);
      if (piVar3 == piVar4) {
        plVar6 = plVar11;
      }
      if ((plVar6 != (longlong *)0x0) && (lVar2 = *plVar6, lVar2 != 0)) {
        iVar9 = *(int *)(lVar8 + 8) - param_2;
        iVar10 = 0;
        if ((((byte)*(uint *)(lVar2 + 0xc) & 0x7c) == 4) &&
           ((((*(uint *)(lVar2 + 0xc) >> 1 & 1) == 0 || (iVar9 < 0)) ||
            (iVar10 = 0, *(int *)(lVar8 + 0x14) != 0)))) {
          iVar10 = *(int *)(lVar2 + 0x20);
        }
        iVar5 = 0;
        if (-1 < iVar9) {
          iVar5 = iVar9;
        }
        if ((int)plVar7 < iVar10 - iVar5) {
          plVar7 = (longlong *)(ulonglong)(uint)(iVar10 - iVar5);
        }
      }
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != lVar1);
  }
  return plVar7;
}



// FUNCTION 1431e2130 Create body=245 status=ok
// SIG undefined Create(void)

longlong * CAkMusicTrack::Create(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x130);
  if (plVar3 != (longlong *)0x0) {
    CAkSoundBase::CAkSoundBase(plVar3,param_1);
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__145ad1638;
    plVar3[3] = (longlong)&PTR_LAB_145ad1888;
    plVar3[6] = (longlong)&PTR_PushParamUpdate_145ac7228;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    plVar3[0x1b] = 0;
    plVar3[0x1c] = 0;
    *(undefined4 *)(plVar3 + 0x1d) = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    *(byte *)(plVar3 + 0x23) = *(byte *)(plVar3 + 0x23) & 0xfc;
    *(undefined2 *)(plVar3 + 0x21) = 0xffff;
    plVar3[0x20] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(plVar3);
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 1431e2230 FUN_1431e2230 body=520 status=ok
// SIG undefined FUN_1431e2230(void)

void FUN_1431e2230(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 200);
  if (lVar9 != (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + lVar9) {
    do {
      lVar5 = *(longlong *)(lVar9 + 8);
      if (((byte)*(undefined4 *)(lVar5 + 0xc) & 0x7c) != 4) goto LAB_1431e23f9;
      if (param_5 == '\0') {
        uVar3 = *(uint *)(param_3 + 1);
        if (uVar3 < *(uint *)((longlong)param_3 + 0xc)) {
LAB_1431e23d5:
          uVar3 = *(uint *)(param_3 + 1);
          *(uint *)(param_3 + 1) = uVar3 + 1;
          plVar2 = (longlong *)(*param_3 + (ulonglong)uVar3 * 8);
          if (plVar2 != (longlong *)0x0) {
            *plVar2 = lVar5;
          }
        }
        else {
          uVar1 = *(uint *)((longlong)param_3 + 0xc) + 1;
          pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
          if (pvVar6 != (void *)0x0) {
            pvVar7 = (void *)*param_3;
            if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
              uVar4 = *(uint *)(param_3 + 1);
              uVar8 = 0;
              if ((ulonglong)uVar4 != 0) {
                do {
                  *(undefined8 *)((longlong)pvVar6 + uVar8 * 8) =
                       *(undefined8 *)(*param_3 + uVar8 * 8);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar4);
                pvVar7 = (void *)*param_3;
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
            }
            *param_3 = (longlong)pvVar6;
            *(uint *)((longlong)param_3 + 0xc) = uVar1;
            if (uVar3 < uVar1) goto LAB_1431e23d5;
          }
        }
      }
      else {
        uVar3 = *(uint *)(param_2 + 1);
        if (uVar3 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_1431e2329:
          uVar3 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar3 + 1;
          plVar2 = (longlong *)(*param_2 + (ulonglong)uVar3 * 8);
          if (plVar2 != (longlong *)0x0) {
            *plVar2 = lVar5;
          }
        }
        else {
          uVar1 = *(uint *)((longlong)param_2 + 0xc) + 1;
          pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
          if (pvVar6 != (void *)0x0) {
            pvVar7 = (void *)*param_2;
            if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
              uVar4 = *(uint *)(param_2 + 1);
              uVar8 = 0;
              if ((ulonglong)uVar4 != 0) {
                do {
                  *(undefined8 *)((longlong)pvVar6 + uVar8 * 8) =
                       *(undefined8 *)(*param_2 + uVar8 * 8);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar4);
                pvVar7 = (void *)*param_2;
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
            }
            *param_2 = (longlong)pvVar6;
            *(uint *)((longlong)param_2 + 0xc) = uVar1;
            if (uVar3 < uVar1) goto LAB_1431e2329;
          }
        }
      }
LAB_1431e23f9:
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + *(longlong *)(param_1 + 200));
  }
  return;
}



// FUNCTION 1431e2440 GetDefaultSwitch body=17 status=ok
// SIG undefined GetDefaultSwitch(void)

undefined4 CAkMusicTrack::GetDefaultSwitch(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 4);
  }
  return 0;
}



// FUNCTION 1431e2460 GetMidiTargetNode body=136 status=ok
// SIG undefined GetMidiTargetNode(void)

void CAkMusicTrack::GetMidiTargetNode
               (longlong param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_res8 [8];
  
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0x118) & 1;
  pbVar1 = *(byte **)(param_1 + 0x98);
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar4;
    do {
      uVar2 = (int)pbVar3 + 1;
      if (pbVar1[uVar2] == 0x38) {
        pbVar4 = pbVar1 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar3 = (byte *)(ulonglong)uVar2;
    } while (uVar2 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  *param_3 = *(undefined4 *)pbVar1;
  *param_4 = *(byte *)(param_1 + 0x118) >> 2 & 1;
  return;
}



// FUNCTION 1431e24f0 GetMidiTempoSource body=107 status=ok
// SIG undefined GetMidiTempoSource(void)

void CAkMusicTrack::GetMidiTempoSource(longlong param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_res8 [32];
  
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0x118) >> 1 & 1;
  pbVar2 = *(byte **)(param_1 + 0x98);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar4;
    do {
      uVar3 = (int)pbVar1 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar2] == 0x37) {
        pbVar4 = pbVar2 + (longlong)pbVar1 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar1 = (byte *)(ulonglong)uVar3;
    } while (uVar3 < *pbVar2);
  }
  pbVar2 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar2 = pbVar4;
  }
  *param_3 = *(undefined4 *)pbVar2;
  return;
}



// FUNCTION 1431e2560 GetNextRS body=113 status=ok
// SIG undefined GetNextRS(void)

ulonglong CAkMusicTrack::GetNextRS(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x104) == 1) {
    if (*(int *)(param_1 + 0xe8) != 0) {
      DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
      uVar1 = (DAT_146b50b60 >> 0x21) % (ulonglong)*(uint *)(param_1 + 0xe8);
    }
  }
  else if (*(int *)(param_1 + 0x104) == 2) {
    *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
    if (*(uint *)(param_1 + 0xe8) <= (uint)*(ushort *)(param_1 + 0x108)) {
      *(undefined2 *)(param_1 + 0x108) = 0;
      return 0;
    }
    return (ulonglong)*(ushort *)(param_1 + 0x108);
  }
  return uVar1 & 0xffff;
}



// FUNCTION 1431e25e0 GetSourcePtr body=69 status=ok
// SIG undefined GetSourcePtr(void)

undefined8 CAkMusicTrack::GetSourcePtr(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 200);
  piVar2 = piVar3 + (ulonglong)*(uint *)(param_1 + 0xd0) * 4;
  for (; (piVar3 != piVar2 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  piVar1 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined8 *)piVar1;
}



// FUNCTION 1431e2630 GetStateSyncTypes body=98 status=ok
// SIG undefined GetStateSyncTypes(void)

undefined1 CAkMusicTrack::GetStateSyncTypes(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143190a20(param_1 + 0x18);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) &&
     (cVar1 = CAkBus::GetStateSyncTypes(*(longlong *)(param_1 + 0x88),param_2,param_3),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1431e26a0 HasBankSource body=62 status=ok
// SIG undefined HasBankSource(void)

ulonglong CAkMusicTrack::HasBankSource(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 200);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + uVar1;
  while( true ) {
    if (uVar1 == uVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    if ((*(uint *)(*(longlong *)(uVar1 + 8) + 0xc) >> 7 & 1) != 0) break;
    uVar1 = uVar1 + 0x10;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1431e26e0 FUN_1431e26e0 body=136 status=ok
// SIG undefined FUN_1431e26e0(void)

void FUN_1431e26e0(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 == '\0') {
    for (lVar1 = *(longlong *)(param_1 + 0x128); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x188)) {
      FUN_143de2150(lVar1,param_2,param_3,0);
    }
  }
  FUN_1431b87e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1431e2770 FUN_1431e2770 body=153 status=ok
// SIG undefined FUN_1431e2770(void)

void FUN_1431e2770(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_1 + 0x128); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x188)) {
    if (*(longlong *)(lVar1 + 0x10) == param_3) {
      FUN_143de2150(lVar1,param_2,param_4,param_5);
    }
  }
  FUN_1431b8850(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1431e2810 FUN_1431e2810 body=180 status=ok
// SIG undefined FUN_1431e2810(void)

ulonglong FUN_1431e2810(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 == (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + lVar2) {
    return 1;
  }
  do {
    uVar1 = CAkSource::PrepareData(*(undefined8 *)(lVar2 + 8));
    if ((int)uVar1 != 1) {
      lVar3 = *(longlong *)(param_1 + 200);
      if (lVar3 == lVar2) {
        return uVar1;
      }
      do {
        CAkSource::UnPrepareData(*(undefined8 *)(lVar3 + 8));
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != lVar2);
      return uVar1 & 0xffffffff;
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + *(longlong *)(param_1 + 200));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1431e28d0 RemoveAllSourcesNoCheck body=197 status=ok
// SIG undefined RemoveAllSourcesNoCheck(void)

void CAkMusicTrack::RemoveAllSourcesNoCheck(longlong param_1)

{
  void *pvVar1;
  long lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  lVar3 = *(longlong *)(param_1 + 200);
  if (lVar3 == (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + lVar3) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    return;
  }
  do {
    lVar2 = g_DefaultPoolId;
    pvVar1 = *(void **)(lVar3 + 8);
    if (pvVar1 != (void *)0x0) {
      CAkSource::~CAkSource(pvVar1);
      AK::MemoryMgr::Free(lVar2,pvVar1);
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + *(longlong *)(param_1 + 200));
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}



// FUNCTION 1431e29a0 FUN_1431e29a0 body=298 status=ok
// SIG undefined FUN_1431e29a0(void)

int * FUN_1431e29a0(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  
  piVar6 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar10 = piVar6 + (ulonglong)uVar2 * 4;
  for (; (piVar6 != piVar10 && (*piVar6 != param_2)); piVar6 = piVar6 + 4) {
  }
  piVar5 = (int *)0x0;
  piVar9 = piVar6 + 2;
  if (piVar6 == piVar10) {
    piVar9 = piVar5;
  }
  if (piVar9 != (int *)0x0) {
    return piVar9;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (pvVar4 == (void *)0x0) {
      return (int *)0x0;
    }
    pvVar7 = (void *)*param_1;
    if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar4)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 1);
      piVar6 = piVar5;
      if (uVar8 != 0) {
        do {
          uVar3 = ((undefined8 *)((longlong)piVar6 + *param_1))[1];
          *(undefined8 *)((longlong)piVar6 + (longlong)pvVar4) =
               *(undefined8 *)((longlong)piVar6 + *param_1);
          ((undefined8 *)((longlong)piVar6 + (longlong)pvVar4))[1] = uVar3;
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar8 != 0);
        pvVar7 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    }
    *param_1 = (longlong)pvVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    piVar6 = piVar5;
    if (uVar1 <= uVar2) goto LAB_1431e2aa9;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  piVar6 = (int *)((ulonglong)uVar2 * 0x10 + *param_1);
LAB_1431e2aa9:
  if (piVar6 != (int *)0x0) {
    *piVar6 = param_2;
    piVar5 = piVar6 + 2;
  }
  return piVar5;
}



// FUNCTION 1431e2ad0 FUN_1431e2ad0 body=656 status=ok
// SIG undefined FUN_1431e2ad0(void)

undefined8
FUN_1431e2ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  
  uVar4 = 0;
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_5 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0x1f;
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 2));
      *(undefined8 *)(param_1 + 2) = 0;
    }
    *(undefined8 *)(param_1 + 4) = 0;
    if (param_4 != (void *)0x0) {
      _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_5 * 0xc);
      *(void **)(param_1 + 2) = _Dst;
      if (_Dst == (void *)0x0) {
        uVar8 = 0x34;
        param_1[4] = 0;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)(param_5 * 0xc));
        uVar8 = 1;
        param_1[4] = param_5;
        param_1[5] = 0;
        uVar6 = uVar4;
        if (3 < param_5) {
          uVar3 = (param_5 - 4 >> 2) + 1;
          uVar7 = (ulonglong)uVar3;
          uVar6 = (ulonglong)(uVar3 * 4);
          do {
            dVar9 = (double)*(float *)(uVar4 + *(longlong *)(param_1 + 2)) * (double)DAT_1467bdcac;
            if (dVar9 <= 0.0) {
              lVar5 = 0xbfe00000;
            }
            else {
              lVar5 = 0x3fe00000;
            }
            *(float *)(uVar4 + *(longlong *)(param_1 + 2)) =
                 (float)(int)((double)(lVar5 << 0x20) + dVar9);
            dVar9 = (double)*(float *)(uVar4 + 0xc + *(longlong *)(param_1 + 2)) *
                    (double)DAT_1467bdcac;
            if (dVar9 <= 0.0) {
              lVar5 = 0xbfe00000;
            }
            else {
              lVar5 = 0x3fe00000;
            }
            *(float *)(uVar4 + 0xc + *(longlong *)(param_1 + 2)) =
                 (float)(int)((double)(lVar5 << 0x20) + dVar9);
            dVar9 = (double)*(float *)(uVar4 + 0x18 + *(longlong *)(param_1 + 2)) *
                    (double)DAT_1467bdcac;
            if (dVar9 <= 0.0) {
              auVar1 = ZEXT416(0xbfe00000);
            }
            else {
              auVar1 = ZEXT416(0x3fe00000);
            }
            *(float *)(uVar4 + 0x18 + *(longlong *)(param_1 + 2)) =
                 (float)(int)(SUB168(auVar1 << 0x20,0) + dVar9);
            dVar9 = (double)*(float *)(uVar4 + 0x24 + *(longlong *)(param_1 + 2)) *
                    (double)DAT_1467bdcac;
            if (dVar9 <= 0.0) {
              auVar1 = ZEXT416(0xbfe00000);
            }
            else {
              auVar1 = ZEXT416(0x3fe00000);
            }
            *(float *)(uVar4 + 0x24 + *(longlong *)(param_1 + 2)) =
                 (float)(int)(SUB168(auVar1 << 0x20,0) + dVar9);
            uVar4 = uVar4 + 0x30;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if ((uint)uVar6 < param_5) {
          lVar5 = uVar6 * 0xc;
          uVar4 = (ulonglong)(param_5 - (uint)uVar6);
          do {
            dVar9 = (double)*(float *)(lVar5 + *(longlong *)(param_1 + 2)) * (double)DAT_1467bdcac;
            if (dVar9 <= 0.0) {
              lVar2 = 0xbfe00000;
            }
            else {
              lVar2 = 0x3fe00000;
            }
            *(float *)(lVar5 + *(longlong *)(param_1 + 2)) =
                 (float)(int)((double)(lVar2 << 0x20) + dVar9);
            lVar5 = lVar5 + 0xc;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          uVar8 = 1;
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 1431e2d60 FUN_1431e2d60 body=2754 status=ok
// SIG undefined FUN_1431e2d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1431e2d60(longlong *param_1,uint *param_2,undefined4 param_3,undefined8 param_4,
                       char param_5)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong *plVar16;
  void *pvVar17;
  uint *puVar18;
  void *pvVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  int *piVar24;
  int *piVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint *local_res10;
  undefined4 local_res18 [2];
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar13 = (**(code **)(*param_1 + 0x80))();
  if (iVar13 != 6) {
    (**(code **)(*param_1 + 0x80))(param_1);
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  bVar2 = (byte)local_res10[1];
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xf8;
  uVar28 = 0;
  *(byte *)(param_1 + 0x23) =
       *(byte *)(param_1 + 0x23) | (bVar2 >> 1 & 2 | bVar2 & 8) >> 1 | bVar2 & 2;
  uVar29 = *(uint *)((longlong)local_res10 + 5);
  local_res10 = (uint *)((longlong)local_res10 + 9);
  if (uVar29 != 0) {
    do {
      pvVar17 = (void *)0x0;
      uVar14 = CAkBankMgr::LoadSource(&local_res10,local_res18,local_78);
      uVar12 = uStack_64;
      uVar11 = uStack_68;
      uVar10 = uStack_6c;
      iVar13 = local_70;
      uVar9 = local_74;
      if ((int)uVar14 != 1) {
        return uVar14;
      }
      plVar1 = param_1 + 0x19;
      if (local_60 == 0) {
        piVar15 = (int *)*plVar1;
        piVar24 = piVar15 + (ulonglong)*(uint *)(param_1 + 0x1a) * 4;
        for (; (piVar15 != piVar24 && (*piVar15 != local_70)); piVar15 = piVar15 + 4) {
        }
        piVar25 = piVar15 + 2;
        if (piVar15 == piVar24) {
          piVar25 = (int *)0x0;
        }
        if (piVar25 == (int *)0x0) {
          plVar16 = (longlong *)FUN_1431e29a0(plVar1,local_70);
          if (plVar16 == (longlong *)0x0) {
            return 2;
          }
          pvVar17 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
          if (pvVar17 != (void *)0x0) {
            CAkSource::CAkSource(pvVar17);
            *(undefined4 *)((longlong)pvVar17 + 0x20) = 0;
          }
          *plVar16 = (longlong)pvVar17;
          if (pvVar17 == (void *)0x0) {
            FUN_1431e3ad0(plVar1,iVar13);
          }
          else {
            local_88 = iVar13;
            uStack_84 = uVar10;
            uStack_80 = uVar11;
            uStack_7c = uVar12;
            CAkSource::SetSource(pvVar17,uVar9,&local_88);
            if (*(short *)(*plVar16 + 0x1a) != 0x10) {
              *(int *)(*plVar16 + 0x20) = (int)param_1[0x20];
            }
          }
          lVar23 = *plVar16;
          goto joined_r0x0001431e3004;
        }
      }
      else {
        plVar16 = (longlong *)FUN_1431e29a0(plVar1,local_70);
        if (plVar16 == (longlong *)0x0) {
          return 2;
        }
        pvVar19 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
        if (pvVar19 != (void *)0x0) {
          CAkSource::CAkSource(pvVar19);
          *(undefined4 *)((longlong)pvVar19 + 0x20) = 0;
          pvVar17 = pvVar19;
        }
        *plVar16 = (longlong)pvVar17;
        if (pvVar17 == (void *)0x0) {
          FUN_1431e3ad0(plVar1,iVar13);
        }
        else {
          CAkSource::SetSource(pvVar17);
        }
        lVar23 = *plVar16;
joined_r0x0001431e3004:
        if (lVar23 == 0) {
          return 2;
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar29);
  }
  uVar29 = *local_res10;
  uVar28 = 1;
  local_res10 = local_res10 + 1;
  if (uVar29 != 0) {
    uVar14 = (ulonglong)uVar29;
    pvVar17 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar29 * 0x28,8);
    if (pvVar17 == (void *)0x0) {
      return 0x34;
    }
    uVar28 = 0;
    if (3 < uVar29) {
      uVar28 = (uVar29 - 4 >> 2) + 1;
      uVar27 = (ulonglong)uVar28;
      uVar28 = uVar28 * 4;
      puVar22 = (undefined8 *)((longlong)pvVar17 + 8);
      do {
        *(uint *)(puVar22 + -1) = *local_res10;
        *(uint *)((longlong)puVar22 + -4) = local_res10[1];
        *puVar22 = *(undefined8 *)(local_res10 + 2);
        puVar22[1] = *(undefined8 *)(local_res10 + 4);
        puVar22[2] = *(undefined8 *)(local_res10 + 6);
        puVar22[3] = *(undefined8 *)(local_res10 + 8);
        *(uint *)(puVar22 + 4) = local_res10[10];
        *(uint *)((longlong)puVar22 + 0x24) = local_res10[0xb];
        puVar22[5] = *(undefined8 *)(local_res10 + 0xc);
        puVar22[6] = *(undefined8 *)(local_res10 + 0xe);
        puVar22[7] = *(undefined8 *)(local_res10 + 0x10);
        puVar22[8] = *(undefined8 *)(local_res10 + 0x12);
        *(uint *)(puVar22 + 9) = local_res10[0x14];
        *(uint *)((longlong)puVar22 + 0x4c) = local_res10[0x15];
        puVar22[10] = *(undefined8 *)(local_res10 + 0x16);
        puVar22[0xb] = *(undefined8 *)(local_res10 + 0x18);
        puVar22[0xc] = *(undefined8 *)(local_res10 + 0x1a);
        puVar22[0xd] = *(undefined8 *)(local_res10 + 0x1c);
        *(uint *)(puVar22 + 0xe) = local_res10[0x1e];
        *(uint *)((longlong)puVar22 + 0x74) = local_res10[0x1f];
        puVar22[0xf] = *(undefined8 *)(local_res10 + 0x20);
        puVar22[0x10] = *(undefined8 *)(local_res10 + 0x22);
        puVar18 = local_res10 + 0x26;
        puVar22[0x11] = *(undefined8 *)(local_res10 + 0x24);
        local_res10 = local_res10 + 0x28;
        puVar22[0x12] = *(undefined8 *)puVar18;
        uVar27 = uVar27 - 1;
        puVar22 = puVar22 + 0x14;
      } while (uVar27 != 0);
    }
    if (uVar28 < uVar29) {
      uVar27 = (ulonglong)(uVar29 - uVar28);
      puVar22 = (undefined8 *)((longlong)pvVar17 + (ulonglong)uVar28 * 0x28 + 8);
      do {
        *(uint *)(puVar22 + -1) = *local_res10;
        *(uint *)((longlong)puVar22 + -4) = local_res10[1];
        *puVar22 = *(undefined8 *)(local_res10 + 2);
        puVar22[1] = *(undefined8 *)(local_res10 + 4);
        puVar18 = local_res10 + 8;
        puVar22[2] = *(undefined8 *)(local_res10 + 6);
        local_res10 = local_res10 + 10;
        puVar22[3] = *(undefined8 *)puVar18;
        uVar27 = uVar27 - 1;
        puVar22 = puVar22 + 5;
      } while (uVar27 != 0);
    }
    uVar28 = *local_res10;
    local_res10 = local_res10 + 1;
    if ((void *)param_1[0x1e] != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x1f) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x1e]);
      param_1[0x1e] = 0;
      *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    }
    *(uint *)(param_1 + 0x1d) = uVar28;
    pvVar19 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar29 * 0x18);
    param_1[0x1e] = (longlong)pvVar19;
    if (pvVar19 == (void *)0x0) {
      uVar28 = 2;
    }
    else {
      *(uint *)((longlong)param_1 + 0xfc) = uVar29;
      pvVar19 = pvVar17;
      if (uVar29 != 0) {
        do {
          FUN_1431e1e00(param_1,pvVar19);
          uVar14 = uVar14 - 1;
          pvVar19 = (void *)((longlong)pvVar19 + 0x28);
        } while (uVar14 != 0);
      }
      uVar28 = 1;
    }
    AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar17);
  }
  if (uVar28 == 1) {
    plVar1 = param_1 + 0x1b;
    FUN_1431e39e0(plVar1);
    uVar29 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar29 != 0) {
      pvVar17 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar29 * 0x18);
      *plVar1 = (longlong)pvVar17;
      if (pvVar17 == (void *)0x0) {
        return 2;
      }
      uVar28 = 0;
      *(uint *)((longlong)param_1 + 0xe4) = uVar29;
      if (uVar29 != 0) {
        do {
          uVar3 = *(uint *)(param_1 + 0x1c);
          if (uVar3 < *(uint *)((longlong)param_1 + 0xe4)) {
LAB_1431e3489:
            lVar23 = *plVar1 + (ulonglong)*(uint *)(param_1 + 0x1c) * 0x18;
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) + 1;
            if (lVar23 != 0) {
              *(undefined8 *)(lVar23 + 8) = 0;
              *(undefined8 *)(lVar23 + 0x10) = 0;
            }
          }
          else {
            uVar4 = *(uint *)((longlong)param_1 + 0xe4) + 1;
            pvVar17 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4 * 0x18);
            if (pvVar17 != (void *)0x0) {
              pvVar19 = (void *)*plVar1;
              if ((pvVar19 != (void *)0x0) && (pvVar19 != pvVar17)) {
                uVar14 = (ulonglong)*(uint *)(param_1 + 0x1c);
                if (uVar14 != 0) {
                  lVar23 = (longlong)pvVar17 + 0x14;
                  do {
                    if ((undefined8 *)(lVar23 + -0x14) != (undefined8 *)0x0) {
                      *(undefined8 *)(lVar23 + -0xc) = 0;
                      *(undefined8 *)(lVar23 + -4) = 0;
                    }
                    lVar20 = *plVar1 + (-0x14 - (longlong)pvVar17);
                    puVar22 = (undefined8 *)(lVar20 + lVar23);
                    uVar7 = puVar22[1];
                    *(undefined8 *)(lVar23 + -0x14) = *puVar22;
                    *(undefined8 *)(lVar23 + -0xc) = uVar7;
                    *(undefined8 *)(lVar23 + -4) = *(undefined8 *)(lVar20 + 0x10 + lVar23);
                    uVar14 = uVar14 - 1;
                    lVar23 = lVar23 + 0x18;
                  } while (uVar14 != 0);
                  pvVar19 = (void *)*plVar1;
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar19);
              }
              *(uint *)((longlong)param_1 + 0xe4) = uVar4;
              *plVar1 = (longlong)pvVar17;
              if (uVar3 < uVar4) goto LAB_1431e3489;
            }
            lVar23 = 0;
          }
          uVar3 = *local_res10;
          puVar26 = local_res10 + 1;
          puVar18 = local_res10 + 2;
          local_res10 = local_res10 + 3;
          uVar4 = *puVar18;
          if (uVar4 != 0) {
            iVar13 = FUN_1431e2ad0(lVar23,uVar3,*puVar26,local_res10,uVar4);
            if (iVar13 != 1) {
              return 2;
            }
            local_res10 = local_res10 + (ulonglong)uVar4 * 3;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar29);
      }
    }
    uVar14 = FUN_143178ad0(param_1,&local_res10,local_res18,param_5);
    lVar8 = g_DefaultPoolId;
    uVar28 = (uint)uVar14;
    if (param_5 != '\0') {
      return uVar14;
    }
    if (uVar28 == 1) {
      uVar29 = *(uint *)((longlong)param_1 + 0x104);
      bVar2 = (byte)*local_res10;
      local_res10 = (uint *)((longlong)local_res10 + 1);
      if (bVar2 != uVar29) {
        pvVar17 = (void *)param_1[0x22];
        if (pvVar17 != (void *)0x0) {
          if (*(void **)((longlong)pvVar17 + 0x10) != (void *)0x0) {
            *(undefined4 *)((longlong)pvVar17 + 0x18) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar17 + 0x10));
            *(undefined8 *)((longlong)pvVar17 + 0x10) = 0;
            *(undefined4 *)((longlong)pvVar17 + 0x1c) = 0;
          }
          AK::MemoryMgr::Free(lVar8,pvVar17);
          param_1[0x22] = 0;
        }
        puVar22 = (undefined8 *)0x0;
        if (bVar2 == 3) {
          puVar21 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(bVar2 + 0x3d));
          if (puVar21 != (undefined8 *)0x0) {
            *puVar21 = 0;
            *(undefined4 *)(puVar21 + 1) = 0;
            puVar21[2] = 0;
            puVar21[3] = 0;
            *(uint *)(puVar21 + 4) = *(uint *)(puVar21 + 4) & 0xffffffe8;
            *(uint *)(puVar21 + 4) = *(uint *)(puVar21 + 4) | 8;
            puVar22 = puVar21;
          }
          param_1[0x22] = (longlong)puVar22;
          if (puVar22 == (undefined8 *)0x0) {
            uVar28 = 0x34;
          }
        }
        uVar29 = (uint)bVar2;
        *(uint *)((longlong)param_1 + 0x104) = uVar29;
      }
      if (uVar28 == 1) {
        if (uVar29 == 3) {
          uVar28 = FUN_1431e3830(param_1[0x22],&local_res10,local_res18);
          if (uVar28 != 1) goto LAB_1431e37de;
          lVar23 = param_1[0x22];
          *(uint *)(lVar23 + 0x28) = *local_res10;
          *(uint *)(lVar23 + 0x2c) = local_res10[1];
          *(int *)(lVar23 + 0x30) =
               (int)((longlong)((longlong)(int)local_res10[2] * (ulonglong)DAT_1467bdcac) / 1000);
          uVar29 = local_res10[3];
          *(uint *)(lVar23 + 0x20) = *(uint *)(lVar23 + 0x20) & 0xffffffe0;
          *(uint *)(lVar23 + 0x20) = *(uint *)(lVar23 + 0x20) | uVar29 & 0x1f;
          *(uint *)(lVar23 + 0x24) = local_res10[4];
          *(uint *)(lVar23 + 0x34) = local_res10[5];
          puVar18 = local_res10 + 7;
          *(uint *)(lVar23 + 0x38) = local_res10[6];
          local_res10 = local_res10 + 8;
          *(int *)(lVar23 + 0x3c) =
               (int)((longlong)((longlong)(int)*puVar18 * (ulonglong)DAT_1467bdcac) / 1000);
        }
        fVar5 = (float)(int)*local_res10 * _DAT_146b520d0 * (float)DAT_1467bdcac * 0.001;
        if (fVar5 <= 0.0) {
          fVar6 = -0.5;
        }
        else {
          fVar6 = 0.5;
        }
        *(int *)(param_1 + 0x20) = (int)(fVar6 + fVar5);
        lVar23 = param_1[0x19];
        if (lVar23 != (ulonglong)*(uint *)(param_1 + 0x1a) * 0x10 + lVar23) {
          do {
            if (*(short *)(*(longlong *)(lVar23 + 8) + 0x1a) != 0x10) {
              *(int *)(*(longlong *)(lVar23 + 8) + 0x20) = (int)param_1[0x20];
            }
            lVar23 = lVar23 + 0x10;
          } while (lVar23 != (ulonglong)*(uint *)(param_1 + 0x1a) * 0x10 + param_1[0x19]);
        }
      }
    }
  }
LAB_1431e37de:
  return (ulonglong)uVar28;
}



// FUNCTION 1431e3830 FUN_1431e3830 body=422 status=ok
// SIG undefined FUN_1431e3830(void)

undefined8 FUN_1431e3830(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  bVar2 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_1[2] = (uint)bVar2;
  uVar3 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *param_1 = uVar3;
  uVar3 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  param_1[1] = uVar3;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    param_1[6] = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[7] = 0;
  }
  uVar4 = *(uint *)*param_2;
  *param_2 = (uint *)*param_2 + 1;
  uVar10 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4 * 4);
    *(void **)(param_1 + 4) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      return 2;
    }
    param_1[7] = uVar4;
    if (uVar4 != 0) {
      do {
        uVar4 = param_1[6];
        if (uVar4 < (uint)param_1[7]) {
LAB_1431e3970:
          uVar4 = param_1[6];
          param_1[6] = uVar4 + 1;
          puVar9 = (undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar4 * 4);
        }
        else {
          uVar1 = param_1[7] + 1;
          pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
          if (pvVar6 != (void *)0x0) {
            pvVar7 = *(void **)(param_1 + 4);
            if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
              uVar5 = param_1[6];
              uVar8 = 0;
              if ((ulonglong)uVar5 != 0) {
                do {
                  *(undefined4 *)((longlong)pvVar6 + uVar8 * 4) =
                       *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar8 * 4);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar5);
                pvVar7 = *(void **)(param_1 + 4);
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
            }
            *(void **)(param_1 + 4) = pvVar6;
            param_1[7] = uVar1;
            if (uVar4 < uVar1) goto LAB_1431e3970;
          }
          puVar9 = (undefined4 *)0x0;
        }
        uVar3 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *puVar9 = uVar3;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return 1;
}



// FUNCTION 1431e39e0 FUN_1431e39e0 body=131 status=ok
// SIG undefined FUN_1431e39e0(void)

void FUN_1431e39e0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = (void *)((longlong)pvVar2 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    if (pvVar2 != pvVar1) {
      do {
        if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 8));
          *(undefined8 *)((longlong)pvVar2 + 8) = 0;
        }
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
        pvVar2 = (void *)((longlong)pvVar2 + 0x18);
      } while (pvVar2 != pvVar1);
      pvVar2 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1431e3a70 UnPrepareData body=84 status=ok
// SIG undefined UnPrepareData(void)

void CAkMusicTrack::UnPrepareData(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + lVar1) {
    do {
      CAkSource::UnPrepareData(*(undefined8 *)(lVar1 + 8));
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0xd0) * 0x10 + *(longlong *)(param_1 + 200));
  }
  return;
}



// FUNCTION 1431e3ad0 FUN_1431e3ad0 body=120 status=ok
// SIG undefined FUN_1431e3ad0(void)

void FUN_1431e3ad0(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar3 = piVar4 + (ulonglong)uVar2 * 4;
  if (piVar4 != piVar3) {
    do {
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 4;
    } while (piVar4 != piVar3);
    if (piVar4 != piVar3) {
      if (piVar4 < piVar3 + -4) {
        uVar1 = ((ulonglong)((longlong)(piVar3 + -4) + (-1 - (longlong)piVar4)) >> 3 &
                0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
        piVar3 = piVar4 + 4;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
          piVar3 = piVar3 + 2;
          piVar4 = piVar4 + 2;
        }
        uVar2 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar2 - 1;
    }
  }
  return;
}



// FUNCTION 1431e3b50 CAkMusicActionSequencer body=24 status=ok
// SIG undefined CAkMusicActionSequencer(void)

undefined8 * CAkMusicActionSequencer::CAkMusicActionSequencer(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145ad1908;
  return param_1;
}



// FUNCTION 1431e3b70 ~CAkMusicActionSequencer body=21 status=ok
// SIG undefined ~CAkMusicActionSequencer(void)

void CAkMusicActionSequencer::~CAkMusicActionSequencer(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad1908;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1431e3b90 `scalar_deleting_destructor' body=51 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkMusicActionSequencer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad1908;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431e3bd0 ClearSubTrackCtx body=175 status=ok
// SIG undefined ClearSubTrackCtx(void)

void CAkMusicSubTrackSequencer::ClearSubTrackCtx(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  long lVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar3 = (longlong *)0x0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((iVar5 == 1) && (plVar2[3] == param_2)) {
      plVar1 = (longlong *)plVar2[1];
      if (plVar2 == *(longlong **)(param_1 + 0x10)) {
        *(longlong **)(param_1 + 0x10) = plVar1;
      }
      else {
        plVar3[1] = (longlong)plVar1;
      }
      if (plVar2 == *(longlong **)(param_1 + 8)) {
        *(longlong **)(param_1 + 8) = plVar3;
      }
      lVar4 = g_DefaultPoolId;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,0);
        AK::MemoryMgr::Free(lVar4,plVar2);
      }
    }
    else {
      plVar1 = (longlong *)plVar2[1];
      plVar3 = plVar2;
    }
  }
  return;
}



// FUNCTION 1431e3c80 Flush body=127 status=ok
// SIG undefined Flush(void)

void CAkMusicActionSequencer::Flush(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  while (puVar1 != (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        *(longlong *)(param_1 + 0x10) = lVar2;
      }
    }
    lVar3 = g_DefaultPoolId;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(lVar3,puVar1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1431e3d00 PopImminentAction body=65 status=ok
// SIG undefined PopImminentAction(void)

undefined8
CAkMusicActionSequencer::PopImminentAction
          (longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) < param_2 + param_3)) {
    *param_4 = lVar1;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      *(longlong *)(param_1 + 0x10) = lVar1;
    }
    return 0x2d;
  }
  *param_4 = 0;
  return 0x11;
}



// FUNCTION 1431e3d50 ScheduleAction body=90 status=ok
// SIG undefined ScheduleAction(void)

void CAkMusicActionSequencer::ScheduleAction(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    if (*(int *)(param_2 + 0x10) < *(int *)(lVar1 + 0x10)) {
      *(longlong *)(param_2 + 8) = lVar1;
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 8) = param_2;
        return;
      }
      *(longlong *)(param_1 + 0x10) = param_2;
      return;
    }
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = param_2;
    *(longlong *)(param_1 + 8) = param_2;
    return;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1431e3db0 `scalar_deleting_destructor' body=127 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSwitchTrackInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad1910;
  CAkSwitchAware::UnsubscribeSwitches();
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  (**(code **)(*(longlong *)param_1[2] + 0x10))();
  param_1[2] = 0;
  FUN_141868ed0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431e3e30 Create body=130 status=ok
// SIG undefined Create(void)

undefined8 * CAkSwitchTrackInfo::Create(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    CAkSwitchAware::CAkSwitchAware(puVar1);
    puVar1[2] = param_2;
    *puVar1 = &PTR__scalar_deleting_destructor__145ad1910;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (**(code **)(*(longlong *)puVar1[2] + 8))();
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431e3ec0 InitSwitch body=154 status=ok
// SIG undefined InitSwitch(void)

void CAkSwitchTrackInfo::InitSwitch(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x110);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar2 = CAkSegmentCtx::PlayingID();
      local_38 = CAkSegmentCtx::GameObjectPtr();
      local_28 = 0;
      local_10 = 0;
      local_20 = 0xff;
      local_18 = 0xff;
      local_30 = uVar2;
      iVar3 = CAkSwitchAware::GetSwitchToUse(param_1,&local_38,*puVar1,puVar1[2]);
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (iVar3 == 0) {
      uVar2 = CAkMusicTrack::GetDefaultSwitch(*(undefined8 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x28) = uVar2;
    }
    FUN_1431e4050(param_1);
  }
  return;
}



// FUNCTION 1431e3f60 IsSubTrackActive body=36 status=ok
// SIG undefined IsSubTrackActive(void)

ulonglong CAkSwitchTrackInfo::IsSubTrackActive(longlong param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 0x18);
  psVar1 = psVar2 + *(uint *)(param_1 + 0x20);
  while( true ) {
    if (psVar2 == psVar1) {
      return (ulonglong)psVar2 & 0xffffffffffffff00;
    }
    if (param_2 == *psVar2) break;
    psVar2 = psVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar2 >> 8),1);
}



// FUNCTION 1431e3f90 SetSwitch body=183 status=ok
// SIG undefined SetSwitch(void)

void CAkSwitchTrackInfo::SetSwitch
               (longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  lVar3 = CAkSegmentCtx::GameObjectPtr(*(undefined8 *)(param_1 + 8));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 0)) {
    if ((*param_3 != 0) && (*param_3 != lVar3)) {
      return;
    }
    if (param_4 != (undefined8 *)0x0) {
      local_30 = 0;
      local_28 = 0;
      local_10 = 0;
      local_20 = 0xff;
      local_18 = 0xff;
      local_38 = lVar3;
      cVar2 = (**(code **)*param_4)(param_4,&local_38);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = param_2;
    FUN_1431e4050(param_1);
    CAkSegmentCtx::RescheduleSwitchTrack(*(undefined8 *)(param_1 + 8),param_1);
  }
  return;
}



// FUNCTION 1431e4050 FUN_1431e4050 body=348 status=ok
// SIG undefined FUN_1431e4050(void)

void FUN_1431e4050(longlong param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  int *piVar9;
  short sVar10;
  
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
  if (lVar5 != 0) {
    piVar9 = *(int **)(lVar5 + 0x10);
    sVar10 = 0;
    if (piVar9 != piVar9 + *(uint *)(lVar5 + 0x18)) {
      do {
        if (*(int *)(param_1 + 0x28) == *piVar9) {
          uVar3 = *(uint *)(param_1 + 0x20);
          if (uVar3 < *(uint *)(param_1 + 0x24)) {
LAB_1431e4153:
            uVar3 = *(uint *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = uVar3 + 1;
            psVar2 = (short *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 2);
            if (psVar2 != (short *)0x0) {
              *psVar2 = sVar10;
            }
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x24) + 0x10;
            pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 2);
            if (pvVar6 != (void *)0x0) {
              pvVar7 = *(void **)(param_1 + 0x18);
              if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
                uVar4 = *(uint *)(param_1 + 0x20);
                uVar8 = 0;
                if ((ulonglong)uVar4 != 0) {
                  do {
                    *(undefined2 *)((longlong)pvVar6 + uVar8 * 2) =
                         *(undefined2 *)(*(longlong *)(param_1 + 0x18) + uVar8 * 2);
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar4);
                  pvVar7 = *(void **)(param_1 + 0x18);
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
              }
              *(void **)(param_1 + 0x18) = pvVar6;
              *(uint *)(param_1 + 0x24) = uVar1;
              if (uVar3 < uVar1) goto LAB_1431e4153;
            }
          }
        }
        piVar9 = piVar9 + 1;
        sVar10 = sVar10 + 1;
      } while (piVar9 != (int *)(*(longlong *)(lVar5 + 0x10) +
                                (ulonglong)*(uint *)(lVar5 + 0x18) * 4));
    }
  }
  return;
}



// FUNCTION 1431e41b0 CAkSequencableSegmentCtx body=91 status=ok
// SIG undefined CAkSequencableSegmentCtx(void)

undefined8 *
CAkSequencableSegmentCtx::CAkSequencableSegmentCtx
          (undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  CAkChainCtx::CAkChainCtx(param_1,param_3);
  param_1[0x13] = param_2;
  *param_1 = &PTR_StartProfileThreadUsage_145ad1920;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1a28;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return param_1;
}



// FUNCTION 1431e4220 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkSequencableSegmentCtx::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad1920;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1a28;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  CAkChainCtx::~CAkChainCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1431e4290 GetPlayingSegmentInfo body=241 status=ok
// SIG undefined GetPlayingSegmentInfo(void)

undefined4 CAkSequencableSegmentCtx::GetPlayingSegmentInfo(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 local_148 [264];
  longlong local_40 [7];
  
  FUN_1431dc400(local_148,param_1,1);
  if (local_40[0] == 0) {
    uVar4 = 2;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x54);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar3 = CAkMatrixAwareCtx::GetAbsoluteTimeOffset();
      lVar5 = lVar5 + lVar3;
    }
    if (*(longlong *)(local_40[0] + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_148,0);
      uVar2 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                        (local_40,(lVar1 - lVar5) - lVar3);
    }
    uVar4 = CAkScheduledItem::GetInfo(local_40[0],uVar2,param_2,uVar4);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_148);
  return uVar4;
}



// FUNCTION 1431e4390 Init body=119 status=ok
// SIG undefined Init(void)

void CAkSequencableSegmentCtx::Init
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  int local_18 [4];
  
  iVar1 = CAkMatrixAwareCtx::Init();
  if (iVar1 == 1) {
    iVar1 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x98));
    FUN_1431e46a0(param_1,param_2,param_3,-iVar1,local_18,param_4);
    *(longlong *)(param_1 + 0x70) = (longlong)local_18[0];
  }
  return;
}



// FUNCTION 1431e4410 Seek body=252 status=ok
// SIG undefined Seek(void)

int CAkSequencableSegmentCtx::Seek(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    lVar4 = *(longlong *)(param_1 + 0x38);
    while (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 8);
      CAkMusicCtx::_Cancel(lVar4);
      lVar4 = lVar1;
    }
    CAkChainCtx::Flush(param_1);
    lVar4 = *(longlong *)(param_1 + 0x68);
    iVar2 = FUN_1431e46a0(param_1,*(undefined8 *)(lVar4 + 0x30),lVar4 + 0x18,param_2,local_res8,
                          *(undefined1 *)(lVar4 + 0x38));
    if (iVar2 == 1) {
      lVar4 = *(longlong *)(param_1 + 0x70);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar3 = CAkMatrixAwareCtx::GetAbsoluteTimeOffset();
        lVar4 = lVar4 + lVar3;
      }
      *(longlong *)(param_1 + 0x70) = (local_res8[0] - lVar4) + lVar1;
    }
    else {
      local_10 = 0;
      local_14 = 4;
      local_18 = 0;
      FUN_1431d6a20(param_1,&local_18,0);
    }
    FUN_1431d64a0(param_1);
    return iVar2;
  }
  return 2;
}



// FUNCTION 1431e4510 SeekPercent body=159 status=ok
// SIG undefined SeekPercent(void)

void CAkSequencableSegmentCtx::SeekPercent(longlong param_1,float *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = CAkMusicSegment::ActiveDuration(*(undefined8 *)(param_1 + 0x98));
  iVar2 = (int)((float)uVar1 * *param_2);
  if (param_3 != '\0') {
    iVar2 = CAkMusicSegment::GetClosestCuePosition(*(undefined8 *)(param_1 + 0x98),iVar2);
    uVar1 = CAkMusicSegment::ActiveDuration(*(undefined8 *)(param_1 + 0x98));
    *param_2 = (float)iVar2 / (float)uVar1;
  }
  Seek(param_1,iVar2);
  return;
}



// FUNCTION 1431e45b0 SeekTimeAbsolute body=232 status=ok
// SIG undefined SeekTimeAbsolute(void)

void CAkSequencableSegmentCtx::SeekTimeAbsolute(longlong param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = (longlong)((longlong)*param_2 * (ulonglong)DAT_1467bdcac) / 1000;
  iVar1 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x98));
  if ((int)uVar3 < -iVar1) {
    iVar1 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(param_1 + 0x98));
    uVar3 = (ulonglong)(uint)-iVar1;
  }
  if (param_3 != '\0') {
    uVar2 = CAkMusicSegment::GetClosestCuePosition
                      (*(undefined8 *)(param_1 + 0x98),uVar3 & 0xffffffff);
    uVar3 = (ulonglong)uVar2;
    dVar5 = ((double)(int)uVar2 * 1000.0) / (double)DAT_1467bdcac;
    if (dVar5 <= 0.0) {
      dVar4 = -0.5;
    }
    else {
      dVar4 = 0.5;
    }
    *param_2 = (int)(dVar4 + dVar5);
  }
  Seek(param_1,uVar3 & 0xffffffff);
  return;
}



// FUNCTION 1431e46a0 FUN_1431e46a0 body=337 status=ok
// SIG undefined FUN_1431e46a0(void)

undefined8
FUN_1431e46a0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined4 *param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res20 [8];
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  
  *param_5 = 0;
  iVar1 = CAkMusicSegment::ActiveDuration(param_1[0x13]);
  iVar2 = CAkMusicSegment::PostExitDuration(param_1[0x13]);
  if ((param_4 < iVar1 + iVar2) &&
     (lVar4 = CAkMusicSegment::CreateLowLevelSegmentCtxAndAddRef
                        (param_1[0x13],param_1,param_2,param_3,param_6), lVar4 != 0)) {
    lVar5 = CAkChainCtx::EnqueueItem(param_1,0,lVar4);
    FUN_1431d64a0(lVar4);
    if (lVar5 != 0) {
      param_1[0xe] = 0;
      local_34 = 0;
      local_30 = 0;
      local_38 = param_4;
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,0,&local_38,param_5,local_res20,0,0);
      if (iVar1 != 0) {
        iVar1 = CAkMusicSegment::ActiveDuration(param_1[0x13]);
        iVar2 = CAkMusicSegment::PostExitDuration(param_1[0x13]);
        CAkScheduledItem::AttachStopCmd(lVar5,0,4,iVar2 + iVar1);
        uVar3 = CAkMusicSegment::ActiveDuration(param_1[0x13]);
        lVar4 = CAkChainCtx::EnqueueItem(param_1,uVar3,0);
        if (lVar4 != 0) {
          return 1;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 1431e4800 AkRSIterator body=41 status=ok
// SIG undefined AkRSIterator(void)

undefined8 * AkRSIterator::AkRSIterator(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 1;
  *(undefined2 *)((longlong)param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 1431e4830 FUN_1431e4830 body=214 status=ok
// SIG undefined FUN_1431e4830(void)

void FUN_1431e4830(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_145ad1010;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 8))();
    param_1[7] = 0;
  }
  puVar3 = (undefined8 *)param_1[4];
  puVar2 = puVar3;
  if (puVar3 != puVar3 + *(uint *)(param_1 + 5)) {
    do {
      lVar1 = g_DefaultPoolId;
      puVar3 = (undefined8 *)*puVar2;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        AK::MemoryMgr::Free(lVar1,puVar3);
      }
      puVar2 = puVar2 + 1;
      puVar3 = (undefined8 *)param_1[4];
    } while (puVar2 != puVar3 + *(uint *)(param_1 + 5));
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  *param_1 = &PTR_FUN_145ad1000;
  return;
}



// FUNCTION 1431e4910 CalculateTotalWeight body=48 status=ok
// SIG undefined CalculateTotalWeight(void)

int CAkRSSub::CalculateTotalWeight(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  iVar2 = 0;
  plVar1 = plVar3 + *(uint *)(param_1 + 0x28);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    iVar2 = iVar2 + *(int *)(*plVar3 + 0x1c);
  }
  return iVar2;
}



// FUNCTION 1431e4940 Clear body=38 status=ok
// SIG undefined Clear(void)

void CAkRSSub::Clear(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1431e4970 EndInit body=89 status=ok
// SIG undefined EndInit(void)

void AkRSIterator::EndInit(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + *(longlong *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfffe;
  return;
}



// FUNCTION 1431e49d0 FUN_1431e49d0 body=358 status=ok
// SIG undefined FUN_1431e49d0(void)

undefined8
FUN_1431e49d0(undefined8 param_1,longlong *param_2,int param_3,longlong *param_4,char *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar2 = *(uint *)(param_4 + 1);
  if (*(uint *)((longlong)param_4 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_4 + 0xc) + 8;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    pvVar7 = (void *)*param_4;
    if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar5)) {
      uVar3 = *(uint *)(param_4 + 1);
      uVar8 = 0;
      if ((ulonglong)uVar3 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar5 + uVar8 * 8) = *(undefined8 *)(*param_4 + uVar8 * 8);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
        pvVar7 = (void *)*param_4;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    }
    *param_4 = (longlong)pvVar5;
    *(uint *)((longlong)param_4 + 0xc) = uVar1;
    if (uVar1 <= uVar2) {
      return 2;
    }
  }
  uVar2 = *(uint *)(param_4 + 1);
  *(uint *)(param_4 + 1) = uVar2 + 1;
  puVar9 = (undefined8 *)(*param_4 + (ulonglong)uVar2 * 8);
  if (puVar9 == (undefined8 *)0x0) {
    return 2;
  }
  *puVar9 = param_2;
  if ((int)param_2[2] == param_3) {
    *param_5 = '\x01';
    return 1;
  }
  cVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar4 == '\0') {
    puVar9 = (undefined8 *)param_2[4];
    if (*param_5 != '\0') {
      return 1;
    }
    do {
      if (puVar9 == (undefined8 *)(param_2[4] + (ulonglong)*(uint *)(param_2 + 5) * 8)) break;
      uVar6 = FUN_1431e49d0(param_1,*puVar9,param_3,param_4,param_5);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      puVar9 = puVar9 + 1;
    } while (*param_5 == '\0');
  }
  if (*param_5 == '\0') {
    *(int *)(param_4 + 1) = (int)param_4[1] + -1;
  }
  return 1;
}



// FUNCTION 1431e4b40 FUN_1431e4b40 body=120 status=ok
// SIG undefined FUN_1431e4b40(void)

void FUN_1431e4b40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != plVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 3) {
    do {
      if (((*(uint *)(*plVar1 + 0x30) & 0xfffffffd) == 0) &&
         ((longlong *)plVar1[2] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)plVar1[2] + 8))();
      }
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18)
            );
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1431e4bc0 FUN_1431e4bc0 body=340 status=ok
// SIG undefined FUN_1431e4bc0(void)

void FUN_1431e4bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  
  lVar3 = *(longlong *)(param_2 + 8);
  sVar10 = 0;
  plVar4 = *(longlong **)(lVar3 + 0x20);
  plVar1 = plVar4 + *(uint *)(lVar3 + 0x28);
  for (; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 1) {
    sVar10 = sVar10 + 1;
  }
  lVar5 = FUN_1431e4db0(*(longlong *)(param_1 + 0x10) +
                        ((ulonglong)*(uint *)(param_1 + 0x18) * 3 + -3) * 8);
  if (lVar5 != 0) {
    CAkRandomInfo::FlagAsUnBlocked(lVar5,sVar10);
    psVar12 = *(short **)(lVar5 + 0x18);
    uVar8 = *(uint *)(lVar5 + 0x20);
    psVar13 = psVar12 + uVar8;
    if (psVar12 != psVar13) {
      do {
        if (*psVar12 == sVar10) break;
        psVar12 = psVar12 + 1;
      } while (psVar12 != psVar13);
      if (psVar12 != psVar13) {
        if (psVar12 < psVar13 + -1) {
          lVar7 = ((ulonglong)((longlong)(psVar13 + -1) + (-1 - (longlong)psVar12)) >> 1) + 1;
          psVar13 = psVar12;
          for (; psVar12 = psVar12 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
            *psVar13 = *psVar12;
            psVar13 = psVar13 + 1;
          }
          uVar8 = *(uint *)(lVar5 + 0x20);
        }
        *(uint *)(lVar5 + 0x20) = uVar8 - 1;
      }
    }
    *(undefined2 *)(lVar5 + 0x12) = *(undefined2 *)(lVar3 + 0x28);
    CAkRandomInfo::ResetFlagsPlayed(lVar5,*(undefined4 *)(lVar3 + 0x28));
    puVar6 = *(ushort **)(lVar5 + 0x18);
    iVar11 = *(int *)(lVar5 + 8);
    *(int *)(lVar5 + 0xc) = iVar11;
    uVar9 = (ulonglong)*(uint *)(lVar5 + 0x20);
    if (puVar6 != puVar6 + uVar9) {
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar11 = iVar11 - *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)uVar2 * 8)
                                  + 0x1c);
        *(int *)(lVar5 + 0xc) = iVar11;
      } while (puVar6 != (ushort *)
                         (*(longlong *)(lVar5 + 0x18) + (ulonglong)*(uint *)(lVar5 + 0x20) * 2));
      uVar9 = (ulonglong)*(ushort *)(lVar5 + 0x20);
    }
    *(short *)(lVar5 + 0x10) = *(short *)(lVar5 + 0x10) - (short)uVar9;
    FUN_1431e5d60(param_1,lVar3,sVar10,lVar3 + 0x20,lVar5);
  }
  return;
}



// FUNCTION 1431e4d20 GetInitialLoopCountLoop body=131 status=ok
// SIG undefined GetInitialLoopCountLoop(void)

uint CAkRSNode::GetInitialLoopCountLoop(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x14);
  if ((uVar1 != 0) &&
     ((sVar2 = *(short *)(param_1 + 0x16), sVar2 != 0 || (*(short *)(param_1 + 0x18) != 0)))) {
    uVar3 = sVar2 + uVar1;
    if ((int)sVar2 + (int)(short)uVar1 < 1) {
      uVar3 = 1;
    }
    uVar4 = *(short *)(param_1 + 0x18) + uVar1;
    if (uVar3 != uVar4) {
      DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
      return (uint)uVar3 +
             (int)(uint)((ulonglong)DAT_146b50b60 >> 0x21) %
             (((int)(short)uVar4 - (int)(short)uVar3) + 1);
    }
  }
  return (uint)uVar1;
}



// FUNCTION 1431e4db0 FUN_1431e4db0 body=267 status=ok
// SIG undefined FUN_1431e4db0(void)

longlong FUN_1431e4db0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x30);
  if ((iVar2 - 1U & 0xfffffffd) != 0) {
    return param_1[2];
  }
  lVar5 = *(longlong *)(lVar1 + 0x38);
  if ((lVar5 == 0) && (*(int *)(lVar1 + 0x28) != 0)) {
    if (iVar2 == 1) {
      pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
      if (pvVar4 != (void *)0x0) {
        lVar5 = CAkSequenceInfo::CAkSequenceInfo(pvVar4);
        *(longlong *)(lVar1 + 0x38) = lVar5;
        return lVar5;
      }
      lVar5 = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    else if (iVar2 == 3) {
      pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
      lVar5 = 0;
      if (pvVar4 != (void *)0x0) {
        lVar5 = CAkRandomInfo::CAkRandomInfo(pvVar4,*(undefined2 *)(lVar1 + 0x28));
      }
      *(longlong *)(lVar1 + 0x38) = lVar5;
      if (lVar5 != 0) {
        iVar2 = CAkRandomInfo::Init(lVar5,*(undefined2 *)(lVar1 + 0x44));
        if (iVar2 != 1) {
          (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
          *(undefined8 *)(lVar1 + 0x38) = 0;
        }
      }
      lVar5 = *(longlong *)(lVar1 + 0x38);
      if ((lVar5 != 0) && (*(char *)(lVar1 + 0x40) != '\0')) {
        uVar3 = CAkRSSub::CalculateTotalWeight(lVar1);
        *(undefined4 *)(lVar5 + 0xc) = uVar3;
        *(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 8) = uVar3;
        lVar5 = *(longlong *)(lVar1 + 0x38);
      }
      return lVar5;
    }
  }
  return lVar5;
}



// FUNCTION 1431e4ec0 FUN_1431e4ec0 body=321 status=ok
// SIG undefined FUN_1431e4ec0(void)

undefined8 FUN_1431e4ec0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong *plVar8;
  char local_res10 [8];
  
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 1;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  plVar8 = (longlong *)(*param_1 + 0x108);
  while( true ) {
    if (plVar8 == (longlong *)0x0) {
      return 2;
    }
    cVar4 = (**(code **)(*plVar8 + 8))(plVar8);
    if (cVar4 != '\0') break;
    if (((int)plVar8[5] == 0) || (*(char *)((longlong)plVar8 + 0x42) == '\0')) {
      plVar8 = (longlong *)plVar8[1];
      if (plVar8 == (longlong *)0x0) {
        return 2;
      }
    }
    else {
      iVar7 = FUN_1431e5a40(param_1,plVar8);
      if (iVar7 != 1) {
        FUN_1431e5cb0(param_1);
        return 2;
      }
    }
    local_res10[0] = '\0';
    while (uVar5 = FUN_1431e5690(param_1,param_1[2] +
                                         ((ulonglong)*(uint *)(param_1 + 3) * 3 + -3) * 8,
                                 local_res10), local_res10[0] != '\0') {
      lVar2 = plVar8[1];
      lVar1 = param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0x18;
      if (((*(uint *)(*(longlong *)(lVar1 + -0x18) + 0x30) & 0xfffffffd) == 0) &&
         (plVar3 = *(longlong **)(lVar1 + -8), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 8))();
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      if (lVar2 == 0) {
        return 2;
      }
    }
    plVar8 = *(longlong **)(plVar8[4] + (ulonglong)uVar5 * 8);
    local_res10[0] = '\0';
  }
  lVar1 = plVar8[4];
  *(int *)(param_1 + 4) = (int)lVar1;
  *(bool *)(param_1 + 5) = (int)lVar1 != 0;
  *(int *)((longlong)param_1 + 0x24) = (int)plVar8[2];
  uVar6 = CAkRSNode::GetInitialLoopCountLoop(plVar8);
  *(undefined2 *)((longlong)param_1 + 0x42) = uVar6;
  return 1;
}



// FUNCTION 1431e5010 JumpNext body=323 status=ok
// SIG undefined JumpNext(void)

void AkRSIterator::JumpNext(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  char local_res8 [8];
  
  sVar2 = *(short *)(param_1 + 0x42);
  if (1 < sVar2) {
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    return;
  }
  if (sVar2 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      local_res8[0] = '\x01';
      lVar7 = *(longlong *)
               (*(longlong *)(param_1 + 0x10) + -0x18 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18)
      ;
LAB_1431e5078:
      plVar6 = (longlong *)FUN_1431e5470(param_1,lVar7);
      do {
        plVar8 = (longlong *)0x0;
        if (plVar6 == (longlong *)0x0) {
LAB_1431e513d:
          SetCurrentSegmentToNode(param_1,plVar8);
          return;
        }
        uVar4 = FUN_1431e5690(param_1,*(longlong *)(param_1 + 0x10) +
                                      ((ulonglong)*(uint *)(param_1 + 0x18) * 3 + -3) * 8,local_res8
                             );
        if (local_res8[0] != '\0') goto LAB_1431e5103;
        plVar6 = *(longlong **)(plVar6[4] + (ulonglong)uVar4 * 8);
        cVar3 = (**(code **)(*plVar6 + 8))(plVar6);
        plVar8 = plVar6;
        if (cVar3 != '\0') goto LAB_1431e513d;
        if (((int)plVar6[5] == 0) || (*(char *)((longlong)plVar6 + 0x42) == '\0')) {
          plVar6 = (longlong *)plVar6[1];
        }
        else {
          iVar5 = FUN_1431e5a40(param_1,plVar6);
          if (iVar5 != 1) {
            FUN_1431e5cb0(param_1);
            return;
          }
        }
        local_res8[0] = '\x01';
      } while( true );
    }
  }
  return;
LAB_1431e5103:
  lVar7 = plVar6[1];
  lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18;
  if (((*(uint *)(*(longlong *)(lVar1 + -0x18) + 0x30) & 0xfffffffd) == 0) &&
     (plVar6 = *(longlong **)(lVar1 + -8), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 8))();
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  goto LAB_1431e5078;
}



// FUNCTION 1431e5160 FUN_1431e5160 body=776 status=ok
// SIG undefined FUN_1431e5160(void)

undefined4 FUN_1431e5160(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  short sVar12;
  char local_res8 [8];
  char local_res18 [16];
  longlong *local_38;
  ulonglong local_30;
  
  plVar10 = (longlong *)param_1[6];
  if (plVar10 != plVar10 + (ulonglong)*(uint *)(param_1 + 7) * 2) {
    do {
      lVar9 = *plVar10;
      lVar2 = plVar10[1];
      (**(code **)(**(longlong **)(lVar9 + 0x38) + 8))();
      *(longlong *)(lVar9 + 0x38) = lVar2;
      plVar10 = plVar10 + 2;
    } while (plVar10 != (longlong *)((ulonglong)*(uint *)(param_1 + 7) * 0x10 + param_1[6]));
  }
  plVar10 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_1431e4b40(param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_res18[0] = '\0';
  iVar6 = FUN_1431e49d0(param_1,*param_1 + 0x108,param_2,&local_38,local_res18);
  if ((local_res18[0] != '\0') && (iVar6 == 1)) {
    plVar11 = local_38;
    if (local_38 != local_38 + (local_30 & 0xffffffff)) {
      do {
        plVar10 = (longlong *)*plVar11;
        cVar3 = (**(code **)(*plVar10 + 8))(plVar10);
        if (cVar3 != '\0') break;
        iVar6 = FUN_1431e5a40(param_1,plVar10);
        if (iVar6 != 1) goto LAB_1431e53bf;
        plVar11 = plVar11 + 1;
        if (plVar11 == local_38 + (local_30 & 0xffffffff)) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined1 *)(param_1 + 5) = 1;
          if ((int)param_1[3] == 0) goto LAB_1431e53c7;
          plVar10 = *(longlong **)(param_1[2] + -0x18 + (ulonglong)*(uint *)(param_1 + 3) * 0x18);
          goto LAB_1431e5362;
        }
        lVar9 = *(longlong *)(*plVar11 + 8);
        iVar6 = *(int *)(lVar9 + 0x30);
        if (-1 < iVar6) {
          if (iVar6 < 2) {
            plVar8 = *(longlong **)(lVar9 + 0x20);
            sVar12 = 0;
            plVar1 = plVar8 + *(uint *)(lVar9 + 0x28);
            for (; (plVar8 != plVar1 && (*plVar8 != *plVar11)); plVar8 = plVar8 + 1) {
              sVar12 = sVar12 + 1;
            }
            lVar9 = FUN_1431e4db0(param_1[2] + ((ulonglong)*(uint *)(param_1 + 3) * 3 + -3) * 8);
            if (lVar9 != 0) {
              if (((*(byte *)(param_1 + 8) & 1) != 0) &&
                 (lVar2 = *(longlong *)
                           (param_1[2] + -0x18 + (ulonglong)*(uint *)(param_1 + 3) * 0x18),
                 lVar9 == *(longlong *)(lVar2 + 0x38))) {
                FUN_1431e5500(param_1,lVar2,lVar9);
              }
              *(short *)(lVar9 + 10) = sVar12;
            }
          }
          else if (iVar6 < 4) {
            FUN_1431e4bc0(param_1);
          }
        }
      } while (plVar11 != local_38 + (local_30 & 0xffffffff));
    }
    uVar7 = AkRSIterator::SetCurrentSegmentToNode(param_1,plVar10);
    goto LAB_1431e53cc;
  }
  goto LAB_1431e53c7;
  while (iVar6 = FUN_1431e5a40(param_1,plVar10), iVar6 == 1) {
LAB_1431e5362:
    local_res8[0] = '\x01';
    while( true ) {
      if (plVar10 == (longlong *)0x0) goto LAB_1431e53c7;
      uVar4 = FUN_1431e5690(param_1,param_1[2] + ((ulonglong)*(uint *)(param_1 + 3) * 3 + -3) * 8,
                            local_res8);
      if (local_res8[0] == '\0') break;
      lVar2 = plVar10[1];
      lVar9 = param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0x18;
      if (((*(uint *)(*(longlong *)(lVar9 + -0x18) + 0x30) & 0xfffffffd) == 0) &&
         (plVar10 = *(longlong **)(lVar9 + -8), plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 8))();
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      plVar10 = (longlong *)FUN_1431e5470(param_1,lVar2);
    }
    plVar10 = *(longlong **)(plVar10[4] + (ulonglong)uVar4 * 8);
    cVar3 = (**(code **)(*plVar10 + 8))(plVar10);
    if (cVar3 != '\0') {
      lVar9 = plVar10[4];
      *(int *)(param_1 + 4) = (int)lVar9;
      *(bool *)(param_1 + 5) = (int)lVar9 != 0;
      *(int *)((longlong)param_1 + 0x24) = (int)plVar10[2];
      uVar5 = CAkRSNode::GetInitialLoopCountLoop(plVar10);
      *(undefined2 *)((longlong)param_1 + 0x42) = uVar5;
      uVar7 = 1;
      goto LAB_1431e53cc;
    }
  }
LAB_1431e53bf:
  FUN_1431e5cb0(param_1);
LAB_1431e53c7:
  uVar7 = 2;
LAB_1431e53cc:
  if (local_38 != (longlong *)0x0) {
    local_30 = local_30 & 0xffffffff00000000;
    AK::MemoryMgr::Free(g_DefaultPoolId,local_38);
  }
  return uVar7;
}



// FUNCTION 1431e5470 FUN_1431e5470 body=144 status=ok
// SIG undefined FUN_1431e5470(void)

longlong FUN_1431e5470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    while ((*(uint *)(param_2 + 0x30) & 0xfffffffd) != 0) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x10);
      sVar2 = *(short *)(lVar3 + -0x10 + uVar5 * 0x18);
      lVar1 = lVar3 + uVar5 * 0x18;
      if (sVar2 == 0) {
        return param_2;
      }
      if (1 < sVar2) {
        *(short *)(lVar3 + -0x10 + uVar5 * 0x18) = sVar2 + -1;
        return param_2;
      }
      param_2 = *(longlong *)(param_2 + 8);
      if (((*(uint *)(*(longlong *)(lVar1 + -0x18) + 0x30) & 0xfffffffd) == 0) &&
         (plVar4 = *(longlong **)(lVar1 + -8), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))();
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      if (param_2 == 0) {
        return 0;
      }
    }
  }
  return param_2;
}



// FUNCTION 1431e5500 FUN_1431e5500 body=392 status=ok
// SIG undefined FUN_1431e5500(void)

void FUN_1431e5500(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  ulonglong uVar9;
  void *pvVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar6 = *(longlong **)(param_1 + 0x30);
  plVar13 = plVar6 + (ulonglong)*(uint *)(param_1 + 0x38) * 2;
  for (; (plVar6 != plVar13 && (*plVar6 != param_2)); plVar6 = plVar6 + 2) {
  }
  plVar12 = (longlong *)0x0;
  plVar8 = plVar6 + 1;
  if (plVar6 == plVar13) {
    plVar8 = plVar12;
  }
  if (plVar8 != (longlong *)0x0) {
    return;
  }
  plVar6 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3,*(undefined2 *)(param_2 + 0x28));
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  plVar13 = *(longlong **)(param_1 + 0x30);
  plVar8 = plVar13 + (ulonglong)uVar4 * 2;
  for (; (plVar13 != plVar8 && (*plVar13 != param_2)); plVar13 = plVar13 + 2) {
  }
  plVar11 = plVar13 + 1;
  if (plVar13 == plVar8) {
    plVar11 = plVar12;
  }
  if (plVar11 == (longlong *)0x0) {
    if (uVar4 < *(uint *)(param_1 + 0x3c)) {
LAB_1431e563a:
      uVar4 = *(uint *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = uVar4 + 1;
      plVar11 = (longlong *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0x30));
      if (plVar11 == (longlong *)0x0) goto LAB_1431e565e;
      *plVar11 = param_2;
      plVar11 = plVar11 + 1;
      goto LAB_1431e5656;
    }
    uVar1 = *(uint *)(param_1 + 0x3c) + 1;
    pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (pvVar7 != (void *)0x0) {
      pvVar10 = *(void **)(param_1 + 0x30);
      if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar7)) {
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x38);
        if (uVar9 != 0) {
          do {
            plVar12 = plVar12 + 2;
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + -0x10 + (longlong)plVar12);
            uVar5 = puVar2[1];
            puVar3 = (undefined8 *)((longlong)pvVar7 + -0x10 + (longlong)plVar12);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          pvVar10 = *(void **)(param_1 + 0x30);
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
      }
      *(void **)(param_1 + 0x30) = pvVar7;
      *(uint *)(param_1 + 0x3c) = uVar1;
      if (uVar1 <= uVar4) goto LAB_1431e565e;
      goto LAB_1431e563a;
    }
  }
  else {
LAB_1431e5656:
    *plVar11 = (longlong)plVar6;
  }
  if (plVar11 != (longlong *)0x0) {
    return;
  }
LAB_1431e565e:
  (**(code **)(*plVar6 + 8))(plVar6);
  return;
}



// FUNCTION 1431e5690 FUN_1431e5690 body=327 status=ok
// SIG undefined FUN_1431e5690(void)

ushort FUN_1431e5690(longlong param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  uint local_res10 [4];
  int local_res20 [2];
  
  lVar4 = *param_2;
  uVar6 = 0;
  iVar2 = *(int *)(lVar4 + 0x30);
  if (-1 < iVar2) {
    if (iVar2 < 2) {
      *param_3 = '\0';
      lVar7 = FUN_1431e4db0(param_2);
      if (lVar7 == 0) {
LAB_1431e56ed:
        *param_3 = '\x01';
        return 0;
      }
      lVar5 = *param_2;
      if (((*(byte *)(param_1 + 0x40) & 1) != 0) && (lVar7 == *(longlong *)(lVar5 + 0x38))) {
        FUN_1431e5500(param_1,lVar5,lVar7);
      }
      if (*(short *)(lVar7 + 10) + 1 == *(int *)(lVar5 + 0x28)) {
        plVar1 = param_2 + 1;
        *(undefined2 *)(lVar7 + 10) = 0;
        if ((plVar1 != (longlong *)0x0) &&
           (((*(byte *)((longlong)param_2 + 10) & 1) == 0 ||
            (((*(byte *)((longlong)param_2 + 10) & 2) == 0 &&
             (*(short *)plVar1 = (short)*plVar1 + -1, (short)*plVar1 == 0)))))) goto LAB_1431e56ed;
        uVar6 = *(ushort *)(lVar7 + 10);
      }
      else {
        uVar6 = *(short *)(lVar7 + 10) + 1;
        *(ushort *)(lVar7 + 10) = uVar6;
      }
    }
    else if (iVar2 < 4) {
      uVar6 = FUN_1431e57e0();
    }
  }
  if (*param_3 == '\0') {
    uVar3 = *(uint *)(lVar4 + 0x28);
    local_res10[0] = (uint)uVar6;
    local_res20[0] = 0;
    CAkPlayingMgr::MusicPlaylistCallback
              (DAT_146b50b00,*(undefined4 *)(param_1 + 8),*(undefined4 *)(lVar4 + 0x10),uVar3,
               local_res10,local_res20);
    if (local_res10[0] < uVar3) {
      uVar6 = (ushort)local_res10[0];
    }
    *param_3 = local_res20[0] != 0;
  }
  return uVar6;
}



// FUNCTION 1431e57e0 FUN_1431e57e0 body=519 status=ok
// SIG undefined FUN_1431e57e0(void)

short FUN_1431e57e0(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ushort *puVar6;
  ulonglong uVar7;
  short sVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  *param_3 = 0;
  lVar5 = FUN_1431e4db0(param_2);
  uVar9 = 0;
  if (lVar5 == 0) {
LAB_1431e59c3:
    *param_3 = 1;
    return 0;
  }
  iVar10 = -1;
  lVar3 = *param_2;
  if (*(short *)(lVar5 + 0x12) == 0) {
    plVar1 = param_2 + 1;
    if ((plVar1 != (longlong *)0x0) &&
       (((*(byte *)((longlong)param_2 + 10) & 1) == 0 ||
        (((*(byte *)((longlong)param_2 + 10) & 2) == 0 &&
         (*(short *)plVar1 = (short)*plVar1 + -1, (short)*plVar1 == 0)))))) goto LAB_1431e59c3;
    *(undefined2 *)(lVar5 + 0x12) = *(undefined2 *)(lVar3 + 0x28);
    CAkRandomInfo::ResetFlagsPlayed(lVar5,*(undefined4 *)(lVar3 + 0x28));
    puVar6 = *(ushort **)(lVar5 + 0x18);
    iVar11 = *(int *)(lVar5 + 8);
    *(int *)(lVar5 + 0xc) = iVar11;
    uVar7 = (ulonglong)*(uint *)(lVar5 + 0x20);
    if (puVar6 != puVar6 + uVar7) {
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar11 = iVar11 - *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)uVar2 * 8)
                                  + 0x1c);
        *(int *)(lVar5 + 0xc) = iVar11;
      } while (puVar6 != (ushort *)
                         (*(longlong *)(lVar5 + 0x18) + (ulonglong)*(uint *)(lVar5 + 0x20) * 2));
      uVar7 = (ulonglong)*(ushort *)(lVar5 + 0x20);
    }
    *(short *)(lVar5 + 0x10) = *(short *)(lVar5 + 0x10) - (short)uVar7;
  }
  if (*(char *)(lVar3 + 0x40) == '\0') {
    if (*(short *)(lVar5 + 0x10) == 0) goto LAB_1431e591a;
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    uVar2 = *(ushort *)(lVar5 + 0x10);
    uVar7 = DAT_146b50b60 >> 0x21;
    do {
      if (*(char *)(lVar3 + 0x41) == '\0') {
        if (*(short *)(lVar3 + 0x44) == 0) {
LAB_1431e598f:
          bVar12 = true;
        }
        else {
          cVar4 = CAkRandomInfo::IsFlagBlocked(lVar5,uVar9 & 0xffff);
          bVar12 = cVar4 == '\0';
        }
      }
      else {
        cVar4 = CAkRandomInfo::IsFlagSetPlayed(lVar5,uVar9 & 0xffff);
        if ((cVar4 == '\0') &&
           (cVar4 = CAkRandomInfo::IsFlagBlocked(lVar5,uVar9 & 0xffff), cVar4 == '\0'))
        goto LAB_1431e598f;
        bVar12 = false;
      }
      iVar11 = iVar10 + 1;
      if (!bVar12) {
        iVar11 = iVar10;
      }
      iVar10 = iVar11;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (iVar10 < (int)(uVar7 % (ulonglong)uVar2));
  }
  else {
    if (*(int *)(lVar5 + 0xc) == 0) {
LAB_1431e591a:
      *(undefined2 *)(lVar5 + 0x12) = 0;
      return 0;
    }
    iVar11 = CAkRandomInfo::GetRandomValue(lVar5);
    if (-1 < iVar11) {
      do {
        if (*(char *)(lVar3 + 0x41) == '\0') {
          if (*(short *)(lVar3 + 0x44) != 0) {
LAB_1431e58ee:
            cVar4 = CAkRandomInfo::IsFlagBlocked(lVar5,uVar9 & 0xffff);
            if (cVar4 != '\0') goto LAB_1431e5908;
          }
          iVar10 = iVar10 + *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar9 * 8) + 0x1c);
        }
        else {
          cVar4 = CAkRandomInfo::IsFlagSetPlayed(lVar5,uVar9 & 0xffff);
          if (cVar4 == '\0') goto LAB_1431e58ee;
        }
LAB_1431e5908:
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (iVar10 < iVar11);
    }
  }
  sVar8 = (short)uVar9 + -1;
  FUN_1431e5d60(param_1,lVar3,sVar8,lVar3 + 0x20,lVar5);
  return sVar8;
}



// FUNCTION 1431e59f0 SetCurrentSegmentToNode body=68 status=ok
// SIG undefined SetCurrentSegmentToNode(void)

undefined8 AkRSIterator::SetCurrentSegmentToNode(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1;
    *(bool *)(param_1 + 0x28) = iVar1 != 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = CAkRSNode::GetInitialLoopCountLoop(param_2);
    *(undefined2 *)(param_1 + 0x42) = uVar2;
    return 1;
  }
  return 2;
}



// FUNCTION 1431e5a40 FUN_1431e5a40 body=616 status=ok
// SIG undefined FUN_1431e5a40(void)

undefined8 FUN_1431e5a40(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  byte *pbVar10;
  void *pvVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  byte bStack_3e;
  undefined5 uStack_3d;
  longlong *local_38;
  
  plVar12 = (longlong *)0x0;
  bVar13 = 1;
  if (*(short *)(param_2 + 0x14) == 0) {
    bVar13 = 3;
  }
  local_38 = (longlong *)0x0;
  bStack_3e = bVar13 | bStack_3e & 0xfc;
  uVar6 = CAkRSNode::GetInitialLoopCountLoop(param_2);
  iVar7 = *(int *)(param_2 + 0x30);
  if (iVar7 == 0) {
    if (((*(int *)(param_2 + 0x28) == 0) ||
        (pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10), pvVar9 == (void *)0x0)) ||
       (plVar12 = (longlong *)CAkSequenceInfo::CAkSequenceInfo(pvVar9), local_38 = plVar12,
       plVar12 == (longlong *)0x0)) goto LAB_1431e5ac2;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        if (((*(int *)(param_2 + 0x28) == 0) ||
            (pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38), pvVar9 == (void *)0x0)) ||
           (plVar12 = (longlong *)
                      CAkRandomInfo::CAkRandomInfo(pvVar9,*(undefined2 *)(param_2 + 0x28)),
           plVar12 == (longlong *)0x0)) goto LAB_1431e5ac2;
        iVar7 = CAkRandomInfo::Init(plVar12,*(undefined2 *)(param_2 + 0x44));
        if (iVar7 != 1) {
          (**(code **)(*plVar12 + 8))(plVar12);
          plVar12 = (longlong *)0x0;
          goto LAB_1431e5ac2;
        }
        local_38 = plVar12;
        if (*(char *)(param_2 + 0x40) != '\0') {
          uVar8 = CAkRSSub::CalculateTotalWeight(param_2);
          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar8;
          *(undefined4 *)(plVar12 + 1) = uVar8;
        }
        goto LAB_1431e5baf;
      }
      plVar12 = (longlong *)0x0;
      if (iVar7 != 3) goto LAB_1431e5ac2;
    }
    bStack_3e = bStack_3e | 2;
  }
LAB_1431e5baf:
  uVar3 = *(uint *)(param_1 + 0x18);
  plVar12 = local_38;
  if (*(uint *)(param_1 + 0x1c) <= uVar3) {
    uVar1 = *(uint *)(param_1 + 0x1c) + 2;
    pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
    if (pvVar9 == (void *)0x0) goto LAB_1431e5ac2;
    pvVar11 = *(void **)(param_1 + 0x10);
    if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar9)) {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x18);
      if (uVar14 != 0) {
        pbVar10 = (byte *)((longlong)pvVar9 + 10);
        do {
          if (pbVar10 + -10 != (byte *)0x0) {
            *pbVar10 = *pbVar10 & 0xfc;
            pbVar10[-2] = 0;
            pbVar10[-1] = 0;
            pbVar10[6] = 0;
            pbVar10[7] = 0;
            pbVar10[8] = 0;
            pbVar10[9] = 0;
            pbVar10[10] = 0;
            pbVar10[0xb] = 0;
            pbVar10[0xc] = 0;
            pbVar10[0xd] = 0;
          }
          lVar4 = *(longlong *)(param_1 + 0x10);
          uVar5 = *(undefined8 *)(pbVar10 + lVar4 + -(longlong)pvVar9 + -10 + 8);
          *(undefined8 *)(pbVar10 + -10) =
               *(undefined8 *)(pbVar10 + lVar4 + -(longlong)pvVar9 + -10);
          *(undefined8 *)(pbVar10 + -2) = uVar5;
          *(undefined8 *)(pbVar10 + 6) = *(undefined8 *)(pbVar10 + lVar4 + -(longlong)pvVar9 + 6);
          uVar14 = uVar14 - 1;
          pbVar10 = pbVar10 + 0x18;
        } while (uVar14 != 0);
        pvVar11 = *(void **)(param_1 + 0x10);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
    }
    *(void **)(param_1 + 0x10) = pvVar9;
    *(uint *)(param_1 + 0x1c) = uVar1;
    if (uVar1 <= uVar3) goto LAB_1431e5ac2;
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18)
  ;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) + 1;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = CONCAT53(uStack_3d,CONCAT12(bStack_3e,uVar6));
    plVar2[2] = (longlong)local_38;
    return 1;
  }
LAB_1431e5ac2:
  if (((*(uint *)(param_2 + 0x30) & 0xfffffffd) == 0) && (plVar12 != (longlong *)0x0)) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  return 2;
}



// FUNCTION 1431e5cb0 FUN_1431e5cb0 body=176 status=ok
// SIG undefined FUN_1431e5cb0(void)

void FUN_1431e5cb0(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_1431e4b40();
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x30);
  pvVar1 = pvVar2;
  if (pvVar2 != (void *)((ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + (longlong)pvVar2)) {
    do {
      (**(code **)(**(longlong **)((longlong)pvVar1 + 8) + 8))();
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
      pvVar2 = *(void **)(param_1 + 0x30);
    } while (pvVar1 != (void *)((ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + (longlong)pvVar2));
  }
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 1431e5d60 FUN_1431e5d60 body=451 status=ok
// SIG undefined FUN_1431e5d60(void)

void FUN_1431e5d60(longlong param_1,longlong param_2,ushort param_3,longlong *param_4,
                  longlong param_5)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  
  if (((*(byte *)(param_1 + 0x40) & 1) != 0) && (param_5 == *(longlong *)(param_2 + 0x38))) {
    FUN_1431e5500(param_1,param_2,param_5);
  }
  if (*(char *)(param_2 + 0x41) == '\0') {
    cVar1 = CAkRandomInfo::IsFlagSetPlayed(param_5);
    if (cVar1 == '\0') {
      CAkRandomInfo::FlagSetPlayed(param_5,param_3);
      *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
    }
    if (*(short *)(param_2 + 0x44) == 0) {
      return;
    }
    *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
    lVar3 = FUN_14315be00(param_5 + 0x18,param_3);
    if (lVar3 != 0) {
      CAkRandomInfo::FlagAsBlocked(param_5,param_3);
      *(int *)(param_5 + 0xc) =
           *(int *)(param_5 + 0xc) -
           *(int *)(*(longlong *)(*param_4 + (ulonglong)param_3 * 8) + 0x1c);
      uVar4 = (short)param_4[1] - 1;
      uVar2 = *(ushort *)(param_2 + 0x44);
      if (uVar4 <= *(ushort *)(param_2 + 0x44)) {
        uVar2 = uVar4;
      }
      if (*(uint *)(param_5 + 0x20) <= (uint)uVar2) {
        return;
      }
      uVar2 = **(ushort **)(param_5 + 0x18);
      CAkRandomInfo::FlagAsUnBlocked(param_5,(ulonglong)uVar2);
      *(int *)(param_5 + 0xc) =
           *(int *)(param_5 + 0xc) + *(int *)(*(longlong *)(*param_4 + (ulonglong)uVar2 * 8) + 0x1c)
      ;
      *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
      AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned_short>_>
      ::Erase(param_5 + 0x18,0);
      return;
    }
  }
  else {
    uVar2 = 1;
    if (*(ushort *)(param_2 + 0x44) != 0) {
      uVar2 = *(ushort *)(param_2 + 0x44);
    }
    *(int *)(param_5 + 0xc) =
         *(int *)(param_5 + 0xc) - *(int *)(*(longlong *)(*param_4 + (ulonglong)param_3 * 8) + 0x1c)
    ;
    *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
    *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
    CAkRandomInfo::FlagSetPlayed(param_5,param_3);
    lVar3 = FUN_14315be00(param_5 + 0x18,param_3);
    if (lVar3 != 0) {
      CAkRandomInfo::FlagAsBlocked(param_5,param_3);
      uVar4 = (short)param_4[1] - 1;
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      if (*(uint *)(param_5 + 0x20) <= (uint)uVar4) {
        return;
      }
      uVar2 = **(ushort **)(param_5 + 0x18);
      AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned_short>_>
      ::Erase(param_5 + 0x18,0);
      CAkRandomInfo::FlagAsUnBlocked(param_5,uVar2);
      cVar1 = CAkRandomInfo::IsFlagSetPlayed(param_5,uVar2);
      if (cVar1 != '\0') {
        return;
      }
      *(int *)(param_5 + 0xc) =
           *(int *)(param_5 + 0xc) + *(int *)(*(longlong *)(*param_4 + (ulonglong)uVar2 * 8) + 0x1c)
      ;
      *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
      return;
    }
  }
  *(undefined2 *)(param_5 + 0x12) = 0;
  return;
}



// FUNCTION 1431e5f30 WasSegmentLeafFound body=49 status=ok
// SIG undefined WasSegmentLeafFound(void)

void CAkRSSub::WasSegmentLeafFound(longlong param_1)

{
  if (*(char *)(param_1 + 0x42) == '\0') {
    if (*(longlong *)(param_1 + 8) != 0) {
      WasSegmentLeafFound();
    }
    *(undefined1 *)(param_1 + 0x42) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}



// FUNCTION 1431e5f70 FUN_1431e5f70 body=117 status=ok
// SIG undefined FUN_1431e5f70(void)

undefined8 * FUN_1431e5f70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  CAkChainCtx::CAkChainCtx(param_1,param_3);
  param_1[0x13] = param_2;
  *param_1 = &PTR_StartProfileThreadUsage_145ad1a38;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1b40;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  AkRSIterator::AkRSIterator(param_1 + 0x14,param_2);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 8))();
  }
  return param_1;
}



// FUNCTION 1431e6000 FUN_1431e6000 body=140 status=ok
// SIG undefined FUN_1431e6000(void)

undefined8 * FUN_1431e6000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad1a38;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1b40;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  FUN_1431e5cb0(param_1 + 0x14);
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0xa0);
  CAkChainCtx::~CAkChainCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1431e6090 FUN_1431e6090 body=678 status=ok
// SIG undefined FUN_1431e6090(void)

longlong FUN_1431e6090(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                      undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined4 local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  int local_res20 [2];
  
  lVar5 = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    local_res18 = *(longlong *)(param_3 + 8);
    local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0x80);
    FUN_1431df4d0(uVar1,0,*(uint *)(param_2 + 0x30) & 0x1f,local_res8,1,local_res10);
    iVar8 = *(int *)(param_2 + 0x20);
    iVar7 = *(int *)(param_2 + 0x28) -
            (int)((longlong)((ulonglong)DAT_1467bdcac * (longlong)iVar8) / 1000);
    if (iVar7 < -local_res10[0]) {
      dVar10 = ((double)(*(int *)(param_2 + 0x28) + local_res10[0]) * 1000.0) /
               (double)DAT_1467bdcac;
      if (dVar10 <= 0.0) {
        dVar9 = -0.5;
      }
      else {
        dVar9 = 0.5;
      }
      iVar8 = (int)(dVar9 + dVar10);
      iVar7 = -local_res10[0];
    }
    if (((iVar7 == 0) && (iVar8 == 0)) && ((*(byte *)(param_2 + 0x30) & 0x20) != 0)) {
      iVar7 = CAkMusicSegment::PostExitDuration(uVar1);
    }
    iVar2 = CAkMusicSegment::ActiveDuration(uVar1);
    CAkScheduledItem::AttachStopCmd(param_3,iVar8,*(undefined4 *)(param_2 + 0x24),iVar2 + iVar7);
    lVar5 = local_res18;
    iVar8 = local_res10[0];
  }
  local_res20[0] = 0;
  lVar4 = 0;
  if (param_4 != 0) {
    plVar3 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_4,0);
    if (plVar3 == (longlong *)0x0) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      lVar4 = 0;
    }
    else {
      CAkMusicSegment::GetEntrySyncPos(plVar3,param_2 + 0x34,0,0,local_res8,local_res20);
      lVar4 = param_1[0xd];
      lVar4 = CAkMusicSegment::CreateLowLevelSegmentCtxAndAddRef
                        (plVar3,param_1,*(undefined8 *)(lVar4 + 0x30),lVar4 + 0x18,
                         *(undefined1 *)(lVar4 + 0x38));
      if (lVar4 == 0) {
        *(undefined1 *)(param_1 + 0x19) = 0;
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      else {
        *(undefined4 *)(lVar4 + 0xa8) = param_5;
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar5 = CAkChainCtx::EnqueueItem(param_1,iVar8 + lVar5,lVar4);
  if (lVar4 != 0) {
    FUN_1431d64a0(lVar4);
  }
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0xe8))(param_1);
    return lVar5;
  }
  if (lVar4 != 0) {
    iVar8 = CAkMusicSegment::PreEntryDuration(*(undefined8 *)(lVar4 + 0x80));
    bVar6 = *(byte *)(param_2 + 0x48) >> 3 & 1;
    if (*(int *)(param_2 + 0x34) < 1) {
      iVar7 = local_res20[0];
      if (bVar6 != 0) {
        iVar7 = local_res20[0] - iVar8;
      }
    }
    else {
      iVar7 = local_res20[0] + *(int *)(param_2 + 0x3c);
      if ((iVar7 < 0) && (bVar6 == 0)) {
        iVar7 = 0;
      }
    }
    iVar8 = CAkScheduledItem::Prepare(lVar5,local_res20[0],iVar7);
    CAkScheduledItem::SetFadeIn
              (lVar5,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
               *(int *)(param_2 + 0x3c) + iVar8);
  }
  return lVar5;
}



// FUNCTION 1431e6350 Grow body=66 status=ok
// SIG undefined Grow(void)

bool CAkSequenceCtx::Grow(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = 0;
  if ((*(char *)(param_1 + 200) != '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x80), lVar2 = FUN_1431e6530(param_1,local_res8),
     lVar2 == lVar1)) {
    lVar2 = 0;
  }
  return lVar2 != 0;
}



// FUNCTION 1431e63c0 Init body=197 status=ok
// SIG undefined Init(void)

ulonglong CAkSequenceCtx::Init(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  char local_28 [4];
  int local_24;
  undefined1 local_20 [8];
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  
  uVar2 = CAkMatrixAwareCtx::Init();
  if ((int)uVar2 == 1) {
    uVar2 = FUN_1431e4ec0(param_1 + 0x14,*(undefined4 *)(param_1[0xd] + 0x2c));
    if ((int)uVar2 == 1) {
      lVar3 = FUN_1431e6530(param_1,local_28);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) {
        if (local_28[0] == '\0') {
          local_18 = 0;
        }
        else {
          local_18 = CAkMusicSegment::PreEntryDuration
                               (*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x80));
          local_18 = -local_18;
        }
        local_14 = 0;
        local_10 = 0;
        iVar1 = (**(code **)(*param_1 + 0x78))(param_1,0,&local_18,&local_24,local_20,0,0);
        param_1[0xe] = (longlong)local_24;
        return (ulonglong)(2 - (iVar1 != 0));
      }
      uVar2 = 2;
    }
  }
  return uVar2;
}



// FUNCTION 1431e6490 FUN_1431e6490 body=151 status=ok
// SIG undefined FUN_1431e6490(void)

int FUN_1431e6490(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  if (param_2 == 0) {
    return 2 - (uint)(param_1[0x11] != 0);
  }
  CAkChainCtx::Flush();
  iVar1 = FUN_1431e5160(param_1 + 0x14,param_2);
  if (iVar1 != 1) {
    lVar2 = (**(code **)(*param_1 + 0xe8))();
    return 2 - (uint)(lVar2 != 0);
  }
  lVar2 = FUN_1431e6530(param_1,local_res10);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) == 0)) {
    CAkChainCtx::Flush(param_1);
    lVar2 = 0;
  }
  return 2 - (uint)(lVar2 != 0);
}



// FUNCTION 1431e6530 FUN_1431e6530 body=589 status=ok
// SIG undefined FUN_1431e6530(void)

longlong FUN_1431e6530(longlong *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  undefined4 uVar7;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  void *local_38;
  
  *param_2 = 0;
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) < 2) {
    uVar1 = (undefined4)param_1[0x18];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc4);
    if ((char)param_1[0x19] != '\0') {
      AkRSIterator::JumpNext(param_1 + 0x14);
      lVar5 = param_1[0x10];
      uVar7 = 0;
      if (lVar5 != 0) {
        uVar7 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x80) + 0x10);
      }
      lVar4 = CAkMusicTransAware::GetTransitionRule(param_1[0x13],uVar7,uVar1);
      lVar3 = *(longlong *)(lVar4 + 0x50);
      if (lVar3 == 0) {
        *param_2 = *(byte *)(lVar4 + 0x48) >> 3 & 1;
        lVar5 = FUN_1431e6090(param_1,lVar4,lVar5,uVar1,uVar2);
      }
      else {
        local_68 = *(undefined8 *)(lVar4 + 0x20);
        uStack_60 = *(undefined8 *)(lVar4 + 0x28);
        local_58 = *(uint *)(lVar4 + 0x30);
        local_88 = (void *)0x0;
        local_80 = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        local_38 = (void *)0x0;
        local_54 = *(undefined8 *)(lVar3 + 4);
        uStack_4c = *(undefined4 *)(lVar3 + 0xc);
        uStack_48 = 0;
        uVar6 = local_44._4_2_ & 0xffe0;
        local_44._0_6_ = CONCAT24((*(ushort *)(lVar3 + 0x1c) & 1) << 3 | uVar6,(undefined4)local_44)
        ;
        *param_2 = *(byte *)(lVar3 + 0x1c) & 1;
        lVar5 = FUN_1431e6090(param_1,&local_88,lVar5,**(undefined4 **)(lVar4 + 0x50),0);
        if (lVar5 != 0) {
          if (*(longlong *)(lVar5 + 0x20) == 0) {
            lVar5 = (**(code **)(*param_1 + 0xe8))(param_1);
          }
          else {
            lVar3 = *(longlong *)(lVar4 + 0x50);
            local_44 = *(undefined8 *)(lVar4 + 0x44);
            local_58 = local_58 & 0xffffffe7 | 7;
            local_68 = *(undefined8 *)(lVar3 + 0x10);
            local_54 = *(undefined8 *)(lVar4 + 0x34);
            uStack_4c = *(undefined4 *)(lVar4 + 0x3c);
            uStack_48 = *(undefined4 *)(lVar4 + 0x40);
            uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar3 + 0x18));
            local_58 = (*(int *)(lVar3 + 0x1c) << 4 ^ local_58) & 0x20 ^ local_58;
            FUN_1431e6090(param_1,&local_88,lVar5,uVar1,uVar2);
          }
        }
        if (local_38 != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,local_38);
        }
        if (local_88 != (void *)0x0) {
          local_80 = local_80 & 0xffffffff00000000;
          AK::MemoryMgr::Free(g_DefaultPoolId,local_88);
          local_88 = (void *)0x0;
          local_80 = local_80 & 0xffffffff;
        }
        if (local_78 != (void *)0x0) {
          local_70 = local_70 & 0xffffffff00000000;
          AK::MemoryMgr::Free(g_DefaultPoolId,local_78);
        }
      }
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1431e6780 UpdateChainLength body=275 status=ok
// SIG undefined UpdateChainLength(void)

void CAkSequenceCtx::UpdateChainLength(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  uVar5 = 0;
  puVar2 = (undefined8 *)param_1[0x11];
  puVar7 = (undefined8 *)param_1[0x11];
  while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
    if (param_2 <= (longlong)puVar4[1]) goto LAB_1431e6820;
    puVar7 = puVar4;
    puVar2 = (undefined8 *)*puVar4;
  }
  if (puVar7 != (undefined8 *)0x0) {
    lVar1 = puVar7[1];
    puVar2 = puVar7;
    while (puVar4 = puVar2, lVar1 < param_2) {
      if ((char)param_1[0x19] == '\0') {
        return;
      }
      lVar1 = param_1[0x10];
      lVar3 = FUN_1431e6530(param_1,local_res8);
      if (lVar3 == lVar1) {
        return;
      }
      if (lVar3 == 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      if (0x40 < uVar6) goto LAB_1431e686e;
      puVar2 = (undefined8 *)*puVar4;
      puVar7 = puVar4;
      lVar1 = ((undefined8 *)*puVar4)[1];
    }
LAB_1431e6820:
    do {
      uVar5 = uVar5 + 1;
      if (puVar4 == (undefined8 *)0x0) {
        if ((char)param_1[0x19] == '\0') {
          return;
        }
        lVar1 = param_1[0x10];
        lVar3 = FUN_1431e6530(param_1,local_res8);
        if (lVar3 == lVar1) {
          return;
        }
        if (lVar3 == 0) {
          return;
        }
        uVar6 = uVar6 + 1;
        if (0x40 < uVar6) {
LAB_1431e686e:
          (**(code **)(*param_1 + 0xe8))(param_1);
          return;
        }
        puVar7 = (undefined8 *)*puVar7;
        puVar2 = (undefined8 *)*puVar7;
      }
      else {
        puVar2 = (undefined8 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar2;
    } while (uVar5 < 3);
  }
  return;
}



// FUNCTION 1431e68a0 CAkMusicSwitchCtx body=160 status=ok
// SIG undefined CAkMusicSwitchCtx(void)

undefined8 *
CAkMusicSwitchCtx::CAkMusicSwitchCtx(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  CAkMatrixAwareCtx::CAkMatrixAwareCtx(param_1,param_3);
  param_1[0x10] = param_2;
  *param_1 = &PTR_StartProfileThreadUsage_145ad1c78;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1d48;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfc;
  param_1[0x15] = 0;
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 8))();
  }
  return param_1;
}



// FUNCTION 1431e6960 FUN_1431e6960 body=172 status=ok
// SIG undefined FUN_1431e6960(void)

undefined8 * FUN_1431e6960(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad1c78;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1d48;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  if ((void *)param_1[0x17] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x17]);
    param_1[0x17] = 0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  FUN_1431e94e0(param_1 + 0x11);
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  CAkMatrixAwareCtx::~CAkMatrixAwareCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1431e6a10 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145ad1c68;
  CAkSwitchAware::UnsubscribeSwitches();
  FUN_141868ed0(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x18);
  }
  return this;
}



// FUNCTION 1431e6a60 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkNothingCtx::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad1b50;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad1c58;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  CAkChainCtx::~CAkChainCtx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1431e6ac0 FUN_1431e6ac0 body=408 status=ok
// SIG undefined FUN_1431e6ac0(void)

undefined8 * FUN_1431e6ac0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar9 = (ulonglong)*(uint *)(param_1 + 1);
        if (uVar9 != 0) {
          puVar7 = (undefined4 *)((longlong)pvVar4 + 0xc);
          lVar8 = -0xc - (longlong)pvVar4;
          do {
            puVar5 = (undefined8 *)(puVar7 + -3);
            if (puVar5 != (undefined8 *)0x0) {
              CAkSwitchAware::CAkSwitchAware(puVar5);
              *puVar5 = &PTR__scalar_deleting_destructor__145ad1c68;
              *puVar7 = 0xffffffff;
              *(undefined8 *)(puVar7 + 1) = 0;
            }
            lVar3 = *param_1;
            puVar7[-1] = *(undefined4 *)((longlong)puVar7 + lVar3 + 8 + lVar8);
            *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar3 + 0xc + lVar8);
            *(undefined8 *)(puVar7 + 1) = *(undefined8 *)((longlong)puVar7 + lVar3 + 0x10 + lVar8);
            puVar5 = (undefined8 *)((longlong)puVar7 + *param_1 + lVar8);
            (**(code **)*puVar5)(puVar5,0);
            puVar7 = puVar7 + 6;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      *param_1 = (longlong)pvVar4;
      if (uVar2 < uVar1) goto LAB_1431e6bea;
    }
    return (undefined8 *)0x0;
  }
LAB_1431e6bea:
  puVar5 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar5 != (undefined8 *)0x0) {
    CAkSwitchAware::CAkSwitchAware(puVar5);
    *puVar5 = &PTR__scalar_deleting_destructor__145ad1c68;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0xffffffff;
    puVar5[2] = 0;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      puVar5[2] = *(undefined8 *)(param_2 + 0x10);
    }
  }
  return puVar5;
}



// FUNCTION 1431e6c90 Cancel body=96 status=ok
// SIG undefined Cancel(void)

void CAkMusicSwitchTransition::Cancel(void *param_1)

{
  longlong lVar1;
  long lVar2;
  
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfc;
  CAkMusicCtx::_Cancel(*(undefined8 *)((longlong)param_1 + 8));
  lVar2 = g_DefaultPoolId;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_1431d64a0();
  }
  if (*(longlong *)((longlong)param_1 + 8) != 0) {
    FUN_1431d64a0();
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  AK::MemoryMgr::Free(lVar2,param_1);
  return;
}



// FUNCTION 1431e6cf0 CancelPlayback body=102 status=ok
// SIG undefined CancelPlayback(void)

void CAkMusicSwitchCtx::CancelPlayback(longlong *param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) == 0) {
    (**(code **)(*param_1 + 0x60))();
    FUN_1431d64a0(param_1);
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
    local_18 = AkTimeConv::SamplesToMilliseconds((int)param_1[0xe] - param_2);
    local_14 = 4;
    local_10 = 0;
    FUN_1431d6a20(param_1,&local_18,0xffffffff);
  }
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431e6d60 Create body=86 status=ok
// SIG undefined Create(void)

undefined8 * CAkMusicSwitchTransition::Create(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_1;
    if (param_1 != 0) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    }
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 4;
    *(undefined1 *)(puVar1 + 9) = 0;
    *(byte *)(puVar1 + 10) = *(byte *)(puVar1 + 10) & 0xf8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431e6dc0 CreateDestinationContext body=224 status=ok
// SIG undefined CreateDestinationContext(void)

undefined8 * CAkMusicSwitchCtx::CreateDestinationContext(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (puVar2 = (undefined8 *)CreateMusicContext(), puVar2 != (undefined8 *)0x0))
  {
    return puVar2;
  }
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    CAkChainCtx::CAkChainCtx(puVar2,param_1);
    *(undefined1 *)(puVar2 + 0x13) = 0;
    *puVar2 = &PTR_StartProfileThreadUsage_145ad1b50;
    puVar2[3] = &PTR_StartProfileThreadUsage_145ad1c58;
    puVar2[5] = &PTR_TransUpdateValue_145ad0210;
    *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
    lVar3 = *(longlong *)(param_1 + 0x68);
    iVar1 = CAkMatrixAwareCtx::Init
                      (puVar2,*(undefined8 *)(lVar3 + 0x30),lVar3 + 0x18,
                       *(undefined1 *)(lVar3 + 0x38));
    if ((iVar1 == 1) && (lVar3 = CAkChainCtx::EnqueueItem(puVar2,0,0), lVar3 != 0)) {
      *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
      *(undefined1 *)(puVar2 + 0x13) = 1;
      FUN_1431d64a0(puVar2);
      return puVar2;
    }
    CAkMusicCtx::_Cancel(puVar2);
    FUN_1431d64a0(puVar2);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431e6ea0 CreateMusicContext body=110 status=ok
// SIG undefined CreateMusicContext(void)

undefined8 CAkMusicSwitchCtx::CreateMusicContext(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_2,0);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x68);
    uVar3 = (**(code **)(*plVar2 + 0x260))
                      (plVar2,param_1,*(undefined8 *)(lVar1 + 0x30),lVar1 + 0x18,
                       *(undefined1 *)(lVar1 + 0x38));
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1431e6f10 Dispose body=89 status=ok
// SIG undefined Dispose(void)

void CAkMusicSwitchTransition::Dispose(void *param_1)

{
  longlong lVar1;
  long lVar2;
  
  lVar2 = g_DefaultPoolId;
  if (param_1 != (void *)0x0) {
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    if (lVar1 != 0) {
      FUN_1431d64a0();
    }
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      FUN_1431d64a0();
      *(undefined8 *)((longlong)param_1 + 8) = 0;
    }
    AK::MemoryMgr::Free(lVar2,param_1);
  }
  return;
}



// FUNCTION 1431e6f70 EndInit body=47 status=ok
// SIG undefined EndInit(void)

void CAkMusicSwitchCtx::EndInit(longlong param_1)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if ((longlong *)puVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[1] + 0x68))();
    }
  }
  return;
}



// FUNCTION 1431e6fa0 FUN_1431e6fa0 body=328 status=ok
// SIG undefined FUN_1431e6fa0(void)

void FUN_1431e6fa0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_res10;
  longlong *local_res20;
  
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + 1;
  CAkScheduleWindow::GetBranch(param_2,&local_res10);
  if (local_res10 == (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x108) == 0) goto LAB_1431e70d2;
    }
    else {
      local_res10 = *(longlong **)(param_1 + 0xa8);
      CAkScheduleWindow::SetBranch(param_2,&local_res10);
    }
  }
  (**(code **)(*(longlong *)local_res10[1] + 0x80))((longlong *)local_res10[1],param_2,param_3);
  local_res10 = (longlong *)*local_res10;
  if (local_res10 != (longlong *)0x0) {
    lVar2 = *(longlong *)(local_res10[1] + 0x70);
    local_res20 = local_res10;
    lVar1 = CAkScheduleWindow::StartTimeRelativeToCurrentLevel(param_2);
    if (lVar2 <= lVar1) {
      do {
        CAkScheduleWindow::SetBranch(param_2,&local_res20);
        (**(code **)(*(longlong *)local_res20[1] + 0x80))
                  ((longlong *)local_res20[1],param_2,param_3);
        local_res20 = (longlong *)*local_res20;
        if (local_res20 == (longlong *)0x0) goto LAB_1431e70d2;
        lVar2 = *(longlong *)(local_res20[1] + 0x70);
        lVar1 = CAkScheduleWindow::StartTimeRelativeToCurrentLevel(param_2);
      } while (lVar2 <= lVar1);
    }
    if (local_res20 != (longlong *)0x0) {
      lVar1 = CAkScheduleWindow::StartTimeRelativeToCurrentLevel(param_2);
      if ((*(char *)(param_2 + 0x128) != '\0') ||
         ((ulonglong)(lVar2 - lVar1) < *(ulonglong *)(param_2 + 0x120))) {
        CAkScheduleWindow::SetDuration(param_2,lVar2 - lVar1,0);
      }
    }
  }
LAB_1431e70d2:
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + -1;
  return;
}



// FUNCTION 1431e70f0 HasOrAscendentHasPendingTransition body=44 status=ok
// SIG undefined HasOrAscendentHasPendingTransition(void)

ulonglong CAkMusicSwitchCtx::HasOrAscendentHasPendingTransition(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  lVar2 = *plVar1;
  while( true ) {
    if (lVar2 != 0) {
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
    param_1 = *(longlong *)(param_1 + 0x10);
    if (param_1 == 0) break;
    plVar1 = *(longlong **)(param_1 + 0xa8);
    lVar2 = *plVar1;
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 1431e7120 FUN_1431e7120 body=633 status=ok
// SIG undefined FUN_1431e7120(void)

/* WARNING: Removing unreachable block (ram,0x0001431e7390) */

int FUN_1431e7120(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *local_68;
  undefined **local_60;
  uint local_58;
  undefined4 local_54;
  ulonglong local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  iVar4 = CAkMatrixAwareCtx::Init();
  if (iVar4 == 1) {
    FUN_1431e94e0(param_1 + 0x88);
    uVar9 = 0;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x120);
    if (uVar2 == 0) {
LAB_1431e72de:
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 2;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        iVar4 = FUN_1431e90f0(param_1,1);
        if (iVar4 == 1) {
          *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
          local_60 = (undefined **)0x0;
          local_58 = local_58 & 0xffffff00;
          if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
            uVar6 = CAkMusicSwitchCtx::ResolveAudioNode(param_1);
            local_68 = (longlong *)CAkMusicSwitchCtx::CreateDestinationContext(param_1,uVar6);
            if ((local_68 != (longlong *)0x0) &&
               (FUN_1431e7c30(param_1,uVar6,&local_60,&local_68), local_68 != (longlong *)0x0)) {
              (**(code **)(*local_68 + 0x68))();
            }
          }
        }
      }
      else {
        iVar4 = FUN_1431e90f0(param_1,0);
      }
    }
    else {
      pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar2 * 0x18);
      *(void **)(param_1 + 0x88) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        iVar4 = 0x34;
      }
      else {
        *(uint *)(param_1 + 0x94) = uVar2;
        do {
          uVar8 = 0;
          uVar10 = (uint)uVar9;
          if (uVar2 <= uVar10) goto LAB_1431e72de;
          CAkSwitchAware::CAkSwitchAware(&local_60);
          local_60 = &PTR__scalar_deleting_destructor__145ad1c68;
          local_54 = 0xffffffff;
          local_50 = 0;
          FUN_1431e6ac0(param_1 + 0x88,&local_60);
          local_60 = &PTR__scalar_deleting_destructor__145ad1c68;
          CAkSwitchAware::UnsubscribeSwitches(&local_60);
          FUN_141868ed0(&local_60);
          lVar1 = *(longlong *)(param_1 + 0x88) + uVar9 * 0x18;
          uVar6 = 0;
          *(undefined4 *)(lVar1 + 8) = 0;
          *(uint *)(lVar1 + 0xc) = uVar10;
          *(longlong *)(lVar1 + 0x10) = param_1;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x140);
          if (lVar3 != 0) {
            uVar6 = *(undefined4 *)(lVar3 + uVar9 * 4);
          }
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x148);
          if (lVar3 != 0) {
            uVar8 = *(undefined1 *)(lVar3 + uVar9);
          }
          iVar4 = CAkSwitchAware::SubscribeSwitch(lVar1,uVar6,uVar8);
          if (iVar4 == 1) {
            local_60 = *(undefined ***)(*(longlong *)(param_1 + 0x68) + 0x30);
            local_58 = *(uint *)(*(longlong *)(param_1 + 0x68) + 0x2c);
            local_50 = local_50 & 0xffffffff00000000;
            local_48 = 0xff;
            local_40 = 0xff;
            local_38 = 0;
            iVar5 = CAkSwitchAware::GetSwitchToUse(lVar1,&local_60,uVar6,uVar8);
            if (iVar5 == 0) {
              iVar5 = 0x2ca33bdb;
            }
            *(int *)(lVar1 + 8) = iVar5;
          }
          uVar9 = (ulonglong)(uVar10 + 1);
        } while (iVar4 == 1);
      }
    }
  }
  return iVar4;
}



// FUNCTION 1431e73a0 OnPlayed body=79 status=ok
// SIG undefined OnPlayed(void)

void CAkMusicSwitchCtx::OnPlayed(longlong param_1)

{
  undefined4 local_18;
  undefined8 local_14;
  
  if ((*(byte *)(param_1 + 0x62) & 0xf) == 0) {
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 8) + 0x70) = 0;
    local_18 = 0;
    local_14 = 4;
    CAkMusicCtx::_Play(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),&local_18);
  }
  CAkMusicCtx::OnPlayed(param_1);
  return;
}



// FUNCTION 1431e73f0 OnStopped body=286 status=ok
// SIG undefined OnStopped(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkMusicSwitchCtx::OnStopped(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  long lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_1431e94e0(param_1 + 0x88);
  plVar5 = *(longlong **)(param_1 + 0xa0);
  uVar6 = 0;
  if (plVar5 != (longlong *)0x0) {
    do {
      plVar1 = (longlong *)*plVar5;
      plVar4 = plVar1;
      if (plVar5 == *(longlong **)(param_1 + 0xa0)) {
        *(longlong **)(param_1 + 0xa0) = plVar1;
        plVar4 = (longlong *)_DAT_00000000;
      }
      _DAT_00000000 = (longlong)plVar4;
      if (plVar5 == *(longlong **)(param_1 + 0x98)) {
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      lVar3 = g_DefaultPoolId;
      lVar2 = plVar5[1];
      plVar5[1] = 0;
      if (lVar2 != 0) {
        FUN_1431d64a0();
      }
      if (plVar5[1] != 0) {
        FUN_1431d64a0();
        plVar5[1] = 0;
      }
      AK::MemoryMgr::Free(lVar3,plVar5);
      plVar5 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 200) & 2) != 0) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfd;
    FUN_1431d64a0(param_1);
  }
  CAkMatrixAwareCtx::OnStopped(param_1);
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431e7510 OnStopped body=54 status=ok
// SIG undefined OnStopped(void)

void CAkNothingCtx::OnStopped(longlong param_1)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_1431d64a0();
  }
  FUN_1431dbd90(param_1);
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431e7550 FUN_1431e7550 body=224 status=ok
// SIG undefined FUN_1431e7550(void)

void FUN_1431e7550(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *local_res8;
  undefined8 local_18;
  undefined1 local_10;
  
  bVar4 = *(byte *)(param_1 + 0x62) & 0xf;
  if (((*(byte *)(param_1 + 0x62) & 1) != 0) || (bVar4 == 0)) {
    if ((*(byte *)(param_1 + 200) & 1) != 0) {
      local_18 = 0;
      local_10 = 0;
      *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
      if (bVar4 < 2) {
        uVar3 = CAkMusicSwitchCtx::ResolveAudioNode(param_1);
        local_res8 = (longlong *)CAkMusicSwitchCtx::CreateDestinationContext(param_1,uVar3);
        if ((local_res8 != (longlong *)0x0) &&
           (FUN_1431e7c30(param_1,uVar3,&local_18,&local_res8), local_res8 != (longlong *)0x0)) {
          (**(code **)(*local_res8 + 0x68))();
        }
      }
    }
    if ((**(longlong **)(param_1 + 0xa8) == 0) &&
       ((*(longlong *)(param_1 + 0x10) == 0 ||
        (cVar2 = CAkMusicSwitchCtx::HasOrAscendentHasPendingTransition(), cVar2 == '\0')))) {
      for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        if ((longlong *)puVar1[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar1[1] + 0xb0))();
        }
      }
    }
  }
  return;
}



// FUNCTION 1431e7650 FUN_1431e7650 body=902 status=ok
// SIG undefined FUN_1431e7650(void)

void FUN_1431e7650(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint local_res18;
  longlong local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [48];
  undefined1 local_178 [264];
  longlong local_70 [7];
  
  lVar16 = *(longlong *)(param_1 + 0x70);
  *param_4 = *param_4 - lVar16;
  param_2 = param_2 - lVar16;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  uVar14 = (ulonglong)param_3;
  local_res18 = param_3;
  if ((*(byte *)(param_1 + 0x62) & 2) != 0) {
    if (*(int *)(param_1 + 0x5c) != -1) {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x5c);
    }
    local_res18 = (uint)uVar14;
  }
  uVar13 = (undefined4)uVar14;
  lVar16 = uVar14 + param_2;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  puVar6 = (undefined8 *)0x0;
joined_r0x0001431e76b3:
  do {
    puVar5 = puVar2;
    if (puVar5 == (undefined8 *)0x0) {
      CAkMatrixAwareCtx::ProcessEpilogue(param_1,param_2,uVar13);
      return;
    }
    if ((param_2 <= *(longlong *)(puVar5[1] + 0x70)) && (*(longlong *)(puVar5[1] + 0x70) < lVar16))
    {
      *(undefined8 **)(param_1 + 0xa8) = puVar5;
      uVar10 = CAkMatrixSequencer::GetMusicSyncFlags(*(undefined8 *)(param_1 + 0x68));
      if ((uVar10 >> 0xe & 1) != 0) {
        FUN_1431dc400(local_178,param_1,0);
        lVar4 = local_70[0];
        if (local_70[0] != 0) {
          lVar15 = *(longlong *)(param_1 + 0x70);
          uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x54);
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
          if (*(longlong *)(param_1 + 0x10) != 0) {
            lVar12 = CAkMatrixAwareCtx::GetAbsoluteTimeOffset();
            lVar15 = lVar15 + lVar12;
          }
          if (*(longlong *)(lVar4 + 0x20) == 0) {
            uVar11 = 0;
          }
          else {
            lVar12 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_178,0);
            uVar11 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                               (local_70,(lVar1 - lVar15) - lVar12);
          }
          CAkScheduledItem::GetInfo(lVar4,uVar11,local_1a8,uVar13);
          CAkPlayingMgr::NotifyMusic
                    (DAT_146b50b00,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x2c),0x4000,
                     local_1a8);
          uVar14 = (ulonglong)local_res18;
        }
        AK::MemoryMgr::StartProfileThreadUsage((long)local_178);
      }
      if ((**(longlong **)(param_1 + 0xa8) == 0) &&
         ((*(longlong *)(param_1 + 0x10) == 0 ||
          (cVar8 = CAkMusicSwitchCtx::HasOrAscendentHasPendingTransition(), cVar8 == '\0')))) {
        for (puVar2 = *(undefined8 **)(param_1 + 0xa0); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          if ((longlong *)puVar2[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar2[1] + 0xb0))();
          }
        }
      }
    }
    uVar13 = (undefined4)uVar14;
    if (((*(byte *)(puVar5 + 10) & 2) == 0) &&
       ((((*(byte *)(puVar5[1] + 0x62) & 3) == 0 || ((*(byte *)(puVar5[1] + 0x62) & 0x10) != 0)) &&
        ((*(byte *)(puVar5 + 10) & 1) == 0)))) {
      if (puVar5 != *(undefined8 **)(param_1 + 0xa8)) {
        uVar3 = *puVar5;
        if (puVar5 == *(undefined8 **)(param_1 + 0xa0)) {
          *(undefined8 *)(param_1 + 0xa0) = uVar3;
        }
        else {
          *puVar6 = uVar3;
        }
        if (puVar5 == *(undefined8 **)(param_1 + 0x98)) {
          *(undefined8 **)(param_1 + 0x98) = puVar6;
        }
        lVar7 = g_DefaultPoolId;
        lVar4 = puVar5[1];
        local_1c8._0_4_ = (undefined4)uVar3;
        local_1c8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_1c0._0_4_ = SUB84(puVar6,0);
        uStack_1c0._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
        local_1b8 = (undefined4)local_1c8;
        uStack_1b4 = local_1c8._4_4_;
        uStack_1b0 = (undefined4)uStack_1c0;
        uStack_1ac = uStack_1c0._4_4_;
        puVar5[1] = 0;
        local_1c8 = uVar3;
        uStack_1c0 = puVar6;
        if (lVar4 != 0) {
          FUN_1431d64a0();
        }
        if (puVar5[1] != 0) {
          FUN_1431d64a0();
          puVar5[1] = 0;
        }
        AK::MemoryMgr::Free(lVar7,puVar5);
        puVar2 = (undefined8 *)CONCAT44(uStack_1b4,local_1b8);
        puVar6 = (undefined8 *)CONCAT44(uStack_1ac,uStack_1b0);
        goto joined_r0x0001431e76b3;
      }
    }
    else {
      local_1d8 = *param_4;
      uStack_1d0 = (undefined4)param_4[1];
      uStack_1cc = *(undefined4 *)((longlong)param_4 + 0xc);
      bVar9 = *(byte *)(puVar5 + 10);
      if ((((bVar9 & 1) != 0) && (param_2 <= (longlong)puVar5[4])) && ((longlong)puVar5[4] < lVar16)
         ) {
        CAkMusicCtx::_Play(puVar5[1],puVar5 + 5);
        *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xfe;
        bVar9 = *(byte *)(puVar5 + 10);
      }
      if ((((bVar9 & 2) != 0) && ((longlong)puVar5[7] < lVar16)) && (param_2 <= (longlong)puVar5[7])
         ) {
        FUN_1431d6a20(puVar5[1],puVar5 + 8);
        *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xfd;
      }
      if (((*(byte *)(puVar5[1] + 0x62) & 3) != 0) && ((*(byte *)(puVar5[1] + 0x62) & 0x10) == 0)) {
        if (*(char *)(puVar5 + 3) != '\0') {
          lVar4 = puVar5[2];
          if ((char)uStack_1d0 == '\0') {
            uStack_1d0 = CONCAT31(uStack_1d0._1_3_,1);
            local_1d8 = lVar4;
          }
          else if (lVar4 < local_1d8) {
            local_1d8 = lVar4;
          }
        }
        (**(code **)(*(longlong *)puVar5[1] + 0x70))
                  ((longlong *)puVar5[1],param_2,uVar14,&local_1d8);
      }
    }
    puVar2 = (undefined8 *)*puVar5;
    puVar6 = puVar5;
  } while( true );
}



// FUNCTION 1431e79e0 QueryLookAheadInfo body=243 status=ok
// SIG undefined QueryLookAheadInfo(void)

void CAkMusicSwitchCtx::QueryLookAheadInfo(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_res8;
  longlong local_res20;
  
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if (plVar2 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x10) == 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
      plVar2 = (longlong *)*plVar2;
    }
    (**(code **)(*(longlong *)plVar2[1] + 0x90))((longlong *)plVar2[1],&local_res8,&local_res20);
    *param_2 = *(longlong *)(plVar2[1] + 0x70) + local_res8;
    *param_3 = *(longlong *)(plVar2[1] + 0x70) + local_res20;
    for (puVar1 = (undefined8 *)*plVar2; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1
        ) {
      (**(code **)(*(longlong *)puVar1[1] + 0x90))((longlong *)puVar1[1],&local_res8,&local_res20);
      local_res8 = local_res8 + *(longlong *)(puVar1[1] + 0x70);
      if (local_res8 < *param_2) {
        *param_2 = local_res8;
      }
      local_res20 = local_res20 + *(longlong *)(puVar1[1] + 0x70);
      if (local_res20 < *param_3) {
        *param_3 = local_res20;
      }
    }
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}



// FUNCTION 1431e7ae0 FUN_1431e7ae0 body=152 status=ok
// SIG undefined FUN_1431e7ae0(void)

void FUN_1431e7ae0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *local_res10 [3];
  
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + 1;
  CAkScheduleWindow::GetBranch(param_2,local_res10);
  (**(code **)(*(longlong *)local_res10[0][1] + 0x88))((longlong *)local_res10[0][1],param_2);
  local_res10[0] = (longlong *)*local_res10[0];
  if (local_res10[0] != (longlong *)0x0) {
    lVar1 = *(longlong *)(local_res10[0][1] + 0x70);
    lVar2 = CAkScheduleWindow::StartTimeRelativeToCurrentLevel(param_2);
    uVar3 = lVar1 - lVar2;
    if ((*(char *)(param_2 + 0x128) != '\0') || (uVar3 < *(ulonglong *)(param_2 + 0x120))) {
      CAkScheduleWindow::SetDuration(param_2,uVar3,0);
    }
    *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + -1;
    return;
  }
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + -1;
  return;
}



// FUNCTION 1431e7b80 ResolveAudioNode body=175 status=ok
// SIG undefined ResolveAudioNode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkMusicSwitchCtx::ResolveAudioNode(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 auStack_50 [5];
  undefined4 auStack_28 [2];
  undefined8 auStack_20 [3];
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x90);
  uVar3 = uVar5 * 4 + 0xf;
  if (uVar3 <= uVar5 * 4) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x1431e7bc7;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  lVar4 = 0;
  puVar6 = (undefined4 *)(&stack0xfffffffffffffff8 + lVar2);
  if (*(uint *)(param_1 + 0x90) != 0) {
    do {
      lVar4 = lVar4 + 0x18;
      *puVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + -0x10 + lVar4);
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  *(undefined8 *)((longlong)auStack_20 + lVar2 + 8) = 0;
  *(undefined8 *)((longlong)auStack_20 + lVar2) = 0;
  *(undefined4 *)((longlong)auStack_28 + lVar2) = 0;
  uVar1 = *(undefined4 *)(lVar4 + 0x10);
  *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x1431e7c22;
  AkDecisionTree::ResolvePath(lVar4 + 0x120,uVar1);
  return;
}



// FUNCTION 1431e7c30 FUN_1431e7c30 body=4289 status=ok
// SIG undefined FUN_1431e7c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e7c30(longlong *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int *piVar17;
  void *pvVar18;
  void *pvVar19;
  byte bVar20;
  ushort uVar21;
  undefined4 uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  longlong lVar26;
  int *piVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  bool bVar33;
  bool bVar34;
  undefined8 *in_stack_fffffffffffffaa8;
  undefined4 uVar35;
  undefined1 *in_stack_fffffffffffffab0;
  undefined8 **in_stack_fffffffffffffab8;
  int local_528 [2];
  undefined8 *local_520;
  int local_518 [2];
  undefined8 *local_510;
  uint local_508;
  undefined8 *local_500;
  undefined8 local_4f8;
  int local_4f0;
  undefined4 local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  longlong *local_4c8;
  longlong local_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 local_490;
  ulonglong uStack_488;
  undefined8 local_480;
  undefined4 local_478;
  uint local_474;
  undefined8 local_470;
  ulonglong uStack_468;
  uint local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  uint local_448;
  undefined8 local_440;
  ulonglong uStack_438;
  undefined8 local_430;
  undefined4 local_428;
  uint uStack_424;
  longlong local_420;
  undefined8 *local_418;
  undefined8 local_410;
  undefined1 *local_408;
  undefined1 local_400 [8];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [264];
  longlong local_2d0 [2];
  int local_2c0;
  char local_2ae;
  undefined1 local_2a8 [256];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  int local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [312];
  
  lVar26 = param_1[0xe];
  lVar15 = *(longlong *)(param_1[0xd] + 8);
  if (param_1[2] != 0) {
    lVar13 = CAkMatrixAwareCtx::GetAbsoluteTimeOffset();
    lVar26 = lVar26 + lVar13;
  }
  local_4c0 = lVar15 - lVar26;
  puVar16 = (undefined8 *)0x0;
  local_520 = (undefined8 *)0x0;
  local_500 = (undefined8 *)0x0;
  FUN_1431dc400(local_3d8,param_1,0);
  if (local_2d0[0] == 0) {
    CAkMusicCtx::_Cancel(*param_4);
    *param_4 = 0;
    goto LAB_1431e8cd7;
  }
  local_4b0 = (undefined8 *)0x0;
  local_4b8 = (undefined8 *)0x0;
  puVar29 = puVar16;
  puVar30 = puVar16;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    for (puVar29 = (undefined8 *)param_1[0x14]; puVar29 != (undefined8 *)0x0;
        puVar29 = (undefined8 *)*puVar29) {
      if (puVar29 == (undefined8 *)param_1[0x16]) {
        if (puVar29 != (undefined8 *)0x0) {
          puVar30 = (undefined8 *)*puVar29;
          puVar31 = puVar16;
          puVar14 = puVar16;
          while (local_4b8 = puVar14, local_4b0 = puVar31, puVar31 = puVar30,
                puVar31 != (undefined8 *)0x0) {
            puVar30 = (undefined8 *)*puVar31;
            if (puVar31 == (undefined8 *)param_1[0x14]) {
              param_1[0x14] = (longlong)puVar30;
            }
            else {
              *puVar29 = puVar30;
            }
            if (puVar31 == (undefined8 *)param_1[0x13]) {
              param_1[0x13] = (longlong)puVar29;
            }
            *puVar31 = 0;
            puVar14 = puVar31;
            if (local_4b8 != (undefined8 *)0x0) {
              *local_4b0 = puVar31;
              puVar14 = local_4b8;
            }
          }
        }
        break;
      }
    }
    puVar30 = local_4b0;
    puVar29 = local_4b8;
    (**(code **)(*param_1 + 0x88))(param_1,local_3d8);
  }
  puVar31 = (undefined8 *)param_1[0x15];
  puVar14 = puVar31;
  for (puVar32 = (undefined8 *)*puVar31; puVar32 != (undefined8 *)0x0;
      puVar32 = (undefined8 *)*puVar32) {
    cVar8 = (**(code **)(*(longlong *)puVar14[1] + 0xa0))();
    if ((cVar8 == '\0') ||
       (((*(byte *)(puVar32[1] + 0x62) & 3) != 0 && ((*(byte *)(puVar32[1] + 0x62) & 0x10) == 0))))
    {
      puVar31 = puVar32;
    }
    puVar14 = puVar32;
  }
  if ((*(char *)(param_1[0x10] + 0x138) == '\0') || (*param_3 != 0)) {
LAB_1431e7e0a:
    cVar8 = (**(code **)(*(longlong *)puVar31[1] + 0xa0))();
    if (cVar8 == '\0') goto LAB_1431e8b2a;
    local_2c0 = local_2c0 + 1;
    bVar33 = true;
    for (local_510 = (undefined8 *)param_1[0x14];
        (local_510 != (undefined8 *)0x0 && (local_510 != puVar31));
        local_510 = (undefined8 *)*local_510) {
    }
    puVar14 = (undefined8 *)CAkScheduleWindow::GetBranch(local_3d8,&local_410);
    if ((undefined8 *)*puVar14 != local_510) {
      CAkScheduleWindow::SetBranch(local_3d8,&local_510);
      (**(code **)(*(longlong *)local_510[1] + 0x80))((longlong *)local_510[1],local_3d8,0);
    }
    local_2c0 = local_2c0 + -1;
    local_4a8._4_4_ = 0;
    local_3f8 = 0;
    local_4d8 = (ulonglong)local_4d8._5_3_ << 0x28;
    local_4d0 = 0;
    local_4c8 = (longlong *)0x0;
    local_4f0 = -1;
    local_508 = local_460;
    do {
      do {
        uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffaa8 >> 0x20);
        uVar25 = 0;
        lVar26 = *param_4;
        local_4a8._4_4_ = local_4a8._4_4_ + 1;
        local_408 = (undefined1 *)0x0;
        if (local_4a8._4_4_ < 0x41) {
          lVar15 = CAkScheduleWindow::GetNode(local_3d8,&local_410);
          if (lVar15 != 0) {
            uVar25 = *(undefined4 *)(lVar15 + 0x10);
          }
          FUN_1431dc400(local_178,lVar26,1);
          lVar26 = CAkScheduleWindow::GetNode(local_178);
          if (lVar26 == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = *(undefined4 *)(lVar26 + 0x10);
          }
          in_stack_fffffffffffffab8 = (undefined8 **)&local_4f8;
          in_stack_fffffffffffffab0 = local_408;
          lVar26 = FUN_1431d9a20(param_1[0x10],param_1[0x10],uVar25,local_410,
                                 CONCAT44(uVar35,uVar22),local_408,in_stack_fffffffffffffab8);
          AK::MemoryMgr::StartProfileThreadUsage((long)local_178);
        }
        else {
          lVar26 = FUN_1431d9840();
        }
        iVar10 = *(int *)(lVar26 + 0x58);
        if (iVar10 != local_4f0) {
          local_4c8 = (longlong *)0x0;
          local_4f0 = iVar10;
          if (local_520 != (undefined8 *)0x0) {
            if (puVar16 == (undefined8 *)0x0) {
              CAkMusicSwitchTransition::Dispose();
              local_520 = (undefined8 *)0x0;
            }
            else {
              CAkMusicSwitchTransition::Cancel(local_520);
              CAkMusicSwitchTransition::Dispose(puVar16);
              local_500 = (undefined8 *)0x0;
            }
          }
          puVar14 = local_520;
          if ((*(byte *)(local_2d0[0] + 0x4c) >> 2 & 1) != 0) goto LAB_1431e8a62;
          if ((*(undefined4 **)(lVar26 + 0x50) == (undefined4 *)0x0) ||
             (local_4c8 = (longlong *)
                          CAkMusicSwitchCtx::CreateMusicContext
                                    (param_1,**(undefined4 **)(lVar26 + 0x50)),
             local_4c8 == (longlong *)0x0)) {
            puVar16 = (undefined8 *)CAkMusicSwitchTransition::Create(*param_4);
            local_520 = puVar16;
          }
          else {
            puVar16 = (undefined8 *)CAkMusicSwitchTransition::Create(local_4c8);
            local_520 = puVar16;
            puVar14 = (undefined8 *)CAkMusicSwitchTransition::Create(*param_4);
            local_500 = puVar14;
            if (puVar16 == (undefined8 *)0x0) {
              CAkMusicCtx::_Cancel(local_4c8);
              if (puVar14 != (undefined8 *)0x0) {
                CAkMusicSwitchTransition::Dispose(puVar14);
                local_500 = (undefined8 *)0x0;
              }
            }
            else {
              if (puVar14 != (undefined8 *)0x0) goto LAB_1431e806d;
              CAkMusicSwitchTransition::Cancel(puVar16);
            }
            puVar16 = (undefined8 *)CAkMusicSwitchTransition::Create(*param_4);
            local_4c8 = (longlong *)0x0;
            local_520 = puVar16;
          }
LAB_1431e806d:
          puVar14 = (undefined8 *)0x0;
          if (puVar16 == (undefined8 *)0x0) goto LAB_1431e8a62;
          local_458 = *(undefined8 *)(lVar26 + 0x20);
          uStack_450 = *(ulonglong *)(lVar26 + 0x28);
          local_448 = *(uint *)(lVar26 + 0x30);
          local_490 = *(undefined8 *)(lVar26 + 0x34);
          uStack_488 = *(ulonglong *)(lVar26 + 0x3c);
          uVar24 = *(ulonglong *)(lVar26 + 0x44);
          lVar15 = *(longlong *)(lVar26 + 0x50);
          local_460 = local_448;
          local_470 = local_458;
          uStack_468 = uStack_450;
          local_440 = local_490;
          uStack_438 = uStack_488;
          uVar6 = uVar24;
          if (lVar15 != 0) {
            local_440 = *(undefined8 *)(lVar15 + 4);
            uStack_438 = (ulonglong)*(uint *)(lVar15 + 0xc);
            uVar21 = local_430._4_2_ & 0xffe0;
            local_430._0_6_ =
                 CONCAT24((*(ushort *)(*(longlong *)(lVar26 + 0x50) + 0x1c) & 1) << 3 | uVar21,
                          (undefined4)local_430);
            lVar15 = *(longlong *)(lVar26 + 0x50);
            uStack_468 = (ulonglong)*(uint *)(lVar15 + 0x18);
            local_460 = (*(uint *)(lVar15 + 0x1c) & 2) << 4 | local_508 & 0xffffffc7 | 7;
            local_470 = *(undefined8 *)(lVar15 + 0x10);
            uVar6 = local_430;
          }
          local_430 = uVar6;
          local_480 = uVar24;
          if ((char)param_3[1] != '\0') {
            uVar21 = (ushort)(uVar24 >> 0x20);
            local_480._6_2_ = (undefined2)(uVar24 >> 0x30);
            local_480._0_6_ =
                 CONCAT24((uVar21 ^ *(ushort *)((longlong)param_3 + 0xc)) & 7 ^ uVar21,(int)uVar24);
          }
          if ((ulonglong *)*param_3 == (ulonglong *)0x0) {
            local_4d8 = local_4d8 & 0xffffff0000000000;
          }
          else {
            local_4d8 = *(ulonglong *)*param_3;
          }
          local_4d0 = *(undefined4 *)(lVar26 + 0x44);
          puVar16 = local_500;
          local_508 = local_460;
        }
        in_stack_fffffffffffffaa8 = &local_4a8;
        in_stack_fffffffffffffab8 =
             (undefined8 **)((ulonglong)in_stack_fffffffffffffab8 & 0xffffffffffffff00);
        in_stack_fffffffffffffab0 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffab0 & 0xffffffff00000000);
        iVar10 = (**(code **)(*(longlong *)*param_4 + 0x78))
                           ((longlong *)*param_4,&local_490,&local_4d8,local_528,
                            in_stack_fffffffffffffaa8,in_stack_fffffffffffffab0,
                            in_stack_fffffffffffffab8);
        if (iVar10 == 0) {
          *param_4 = 0;
          puVar14 = local_520;
          goto LAB_1431e8a62;
        }
      } while (iVar10 == 2);
      local_418 = (undefined8 *)0x0;
      CAkScheduleWindow::CAkScheduleWindow(local_2a8,1);
      plVar4 = local_4c8;
      if (puVar16 == (undefined8 *)0x0) {
        local_518[0] = local_528[0];
        local_4a0 = (undefined8 *)0x0;
        iVar12 = (int)((longlong)((longlong)(int)local_458 * (ulonglong)DAT_1467bdcac) / 1000) -
                 (int)uStack_450;
        iVar10 = local_528[0];
        if (local_528[0] < iVar12) {
          iVar10 = iVar12;
        }
        lVar26 = (longlong)iVar10;
      }
      else {
        in_stack_fffffffffffffaa8 = &local_3f0;
        in_stack_fffffffffffffab0 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffab0 & 0xffffffff00000000);
        local_4e8 = 0;
        local_4e4 = local_4e4 & 0xffffff00;
        local_4e0 = 0;
        (**(code **)(*local_4c8 + 0x78))
                  (local_4c8,&local_440,&local_4e8,local_518,in_stack_fffffffffffffaa8,
                   in_stack_fffffffffffffab0,
                   (ulonglong)in_stack_fffffffffffffab8 & 0xffffffffffffff00);
        iVar10 = local_518[0];
        iVar12 = local_528[0];
        lVar26 = CAkMatrixAwareCtx::GetFirstSegmentNode(plVar4,0);
        if (lVar26 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = CAkMusicSegment::ActiveDuration(lVar26);
        }
        iVar23 = (int)((longlong)((longlong)(int)local_458 * (ulonglong)DAT_1467bdcac) / 1000) -
                 (int)uStack_450;
        if (iVar10 < iVar23) {
          iVar10 = iVar23;
        }
        iVar23 = (int)((longlong)((longlong)(int)local_470 * (ulonglong)DAT_1467bdcac) / 1000) -
                 (int)uStack_468;
        if (iVar12 < iVar23) {
          iVar12 = iVar23;
        }
        iVar2 = local_528[0];
        if (local_528[0] < iVar23) {
          iVar2 = iVar23;
        }
        local_4a0 = (undefined8 *)(iVar2 + local_4c0);
        lVar26 = (longlong)iVar12 - (longlong)iVar11;
        if (((longlong)iVar12 - (longlong)iVar11) + local_4c0 < iVar10 + local_4c0) {
          lVar26 = (longlong)iVar10;
        }
      }
      uVar28 = local_448 & 0x1f;
      local_478 = 0;
      lVar26 = lVar26 + local_4c0;
      local_474 = uVar28;
LAB_1431e8320:
      local_4f8._4_4_ = uStack_450._4_4_;
      if (((local_480._4_2_ & 7) == 1) ||
         (((local_480 & 0x1000000000) != 0 && ((ushort)((local_480._4_2_ & 7) - 2) < 2)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      in_stack_fffffffffffffab8 = &local_510;
      in_stack_fffffffffffffab0 =
           (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffab0 >> 8),1);
      in_stack_fffffffffffffaa8 =
           (undefined8 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffaa8 >> 8),uVar9);
      iVar10 = CAkScheduleWindow::FindSyncPoint
                         (local_3d8,lVar26,uVar28,(longlong)&local_4f8 + 4,in_stack_fffffffffffffaa8
                          ,in_stack_fffffffffffffab0,in_stack_fffffffffffffab8);
      if ((iVar10 == 3) && (local_2ae != '\0')) {
        for (puVar16 = (undefined8 *)param_1[0x14]; puVar16 != (undefined8 *)0x0;
            puVar16 = (undefined8 *)*puVar16) {
          if (puVar16 == puVar31) {
            if (puVar16 != (undefined8 *)0x0) {
              puVar14 = (undefined8 *)*puVar16;
              puVar7 = puVar29;
              puVar32 = puVar30;
              while (puVar30 = puVar32, puVar29 = puVar7, puVar32 = puVar14,
                    puVar32 != (undefined8 *)0x0) {
                puVar14 = (undefined8 *)*puVar32;
                if (puVar32 == (undefined8 *)param_1[0x14]) {
                  param_1[0x14] = (longlong)puVar14;
                }
                else {
                  *puVar16 = puVar14;
                }
                if (puVar32 == (undefined8 *)param_1[0x13]) {
                  param_1[0x13] = (longlong)puVar16;
                }
                *puVar32 = 0;
                puVar7 = puVar32;
                local_4b8 = puVar32;
                local_4b0 = puVar32;
                if (puVar29 != (undefined8 *)0x0) {
                  *puVar30 = puVar32;
                  puVar7 = puVar29;
                  local_4b8 = puVar29;
                }
              }
            }
            break;
          }
        }
        (**(code **)(*param_1 + 0x88))(param_1,local_3d8);
        if (((local_480._4_2_ & 7) == 1) ||
           (((local_480 & 0x1000000000) != 0 && ((ushort)((local_480._4_2_ & 7) - 2) < 2)))) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        in_stack_fffffffffffffab8 = &local_510;
        in_stack_fffffffffffffab0 =
             (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffab0 >> 8),1);
        in_stack_fffffffffffffaa8 =
             (undefined8 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffaa8 >> 8),uVar9);
        iVar10 = CAkScheduleWindow::FindSyncPoint
                           (local_3d8,lVar26,uVar28,(longlong)&local_4f8 + 4,
                            in_stack_fffffffffffffaa8,in_stack_fffffffffffffab0,
                            in_stack_fffffffffffffab8);
      }
      local_180 = 0x1000001;
      local_1a8 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_190 = 0;
      local_188 = 0;
      if ((local_500 != (undefined8 *)0x0) && (iVar10 == 1)) {
        *(undefined8 **)(local_520[1] + 0x70) = local_510;
        local_190 = 1;
        local_498 = local_520;
        CAkScheduleWindow::SetBranch(local_2a8,&local_498);
        (**(code **)(*(longlong *)local_498[1] + 0x80))((longlong *)local_498[1],local_2a8,0);
        in_stack_fffffffffffffab8 = &local_418;
        local_190 = local_190 + -1;
        in_stack_fffffffffffffab0 =
             (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffab0 >> 8),1);
        in_stack_fffffffffffffaa8 =
             (undefined8 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffaa8 >> 8),1);
        iVar10 = CAkScheduleWindow::FindSyncPoint
                           (local_2a8,local_4a0,local_508 & 0x1f,&local_478,
                            in_stack_fffffffffffffaa8,in_stack_fffffffffffffab0,
                            in_stack_fffffffffffffab8);
      }
      puVar16 = local_510;
      uVar21 = local_480._4_2_ & 7;
      if ((uVar21 == 1) || (((local_480 & 0x1000000000) != 0 && ((ushort)(uVar21 - 2) < 2)))) {
        if (iVar10 != 1) goto LAB_1431e8a2b;
        if ((*param_3 != 0) || (*(longlong *)(local_2d0[0] + 0x20) == 0)) goto LAB_1431e8694;
        if (uVar21 == 1) {
          lVar26 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_3d8,0);
          local_428 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                                (local_2d0,(longlong)puVar16 - lVar26);
          uVar5 = uStack_424;
          in_stack_fffffffffffffaa8 = &local_4a8;
          in_stack_fffffffffffffab8 =
               (undefined8 **)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffab8 >> 8),1);
          uStack_424 = uStack_424 & 0xffffff00;
          local_4d8 = CONCAT44(uVar5,local_428) & 0xffffff00ffffffff;
          in_stack_fffffffffffffab0 =
               (undefined1 *)((ulonglong)in_stack_fffffffffffffab0 & 0xffffffff00000000);
          (**(code **)(*(longlong *)*param_4 + 0x78))
                    ((longlong *)*param_4,&local_490,&local_4d8,local_528,in_stack_fffffffffffffaa8,
                     in_stack_fffffffffffffab0,in_stack_fffffffffffffab8);
        }
        else {
          in_stack_fffffffffffffab8 =
               (undefined8 **)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffab8 >> 8),1);
          in_stack_fffffffffffffab0 =
               (undefined1 *)
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffab0 >> 0x20),local_4f8._4_4_);
          in_stack_fffffffffffffaa8 = &local_4a8;
          (**(code **)(*(longlong *)*param_4 + 0x78))
                    ((longlong *)*param_4,&local_490,&local_4d8,local_528,in_stack_fffffffffffffaa8,
                     in_stack_fffffffffffffab0,in_stack_fffffffffffffab8);
        }
        iVar11 = local_518[0];
        iVar12 = local_528[0];
        if (local_500 == (undefined8 *)0x0) {
          local_518[0] = local_528[0];
          iVar11 = iVar12;
        }
        else {
          lVar26 = CAkMatrixAwareCtx::GetFirstSegmentNode(local_4c8,0);
          if (lVar26 == 0) {
            uVar28 = local_474;
            if (iVar11 <= iVar12) {
              iVar11 = iVar12;
            }
          }
          else {
            iVar23 = CAkMusicSegment::ActiveDuration(lVar26);
            uVar28 = local_474;
            if (iVar11 <= iVar12 - iVar23) {
              iVar11 = iVar12 - iVar23;
            }
          }
        }
        if ((longlong)iVar11 <= (longlong)local_510 - local_4c0) goto LAB_1431e8694;
        lVar26 = iVar11 + local_4c0;
        goto LAB_1431e8320;
      }
      if (iVar10 != 1) {
LAB_1431e8a2b:
        local_4f0 = -1;
        (**(code **)(*param_1 + 0x80))(param_1,local_3d8,0);
        goto LAB_1431e89f9;
      }
LAB_1431e8694:
      uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffab8 >> 0x20);
      local_2c0 = local_2c0 + 1;
      puVar16 = (undefined8 *)CAkScheduleWindow::GetBranch(local_3d8,local_3e8);
      puVar16 = (undefined8 *)*puVar16;
      local_2c0 = local_2c0 + -1;
      for (puVar31 = (undefined8 *)param_1[0x14]; puVar31 != (undefined8 *)0x0;
          puVar31 = (undefined8 *)*puVar31) {
        if (puVar31 == puVar16) {
          if (puVar31 != (undefined8 *)0x0) {
            puVar14 = (undefined8 *)*puVar31;
            while (puVar7 = puVar30, puVar32 = puVar29, puVar30 = puVar14,
                  puVar30 != (undefined8 *)0x0) {
              puVar14 = (undefined8 *)*puVar30;
              if (puVar30 == (undefined8 *)param_1[0x14]) {
                param_1[0x14] = (longlong)puVar14;
              }
              else {
                *puVar31 = puVar14;
              }
              if (puVar30 == (undefined8 *)param_1[0x13]) {
                param_1[0x13] = (longlong)puVar31;
              }
              *puVar30 = 0;
              puVar29 = puVar30;
              local_4b8 = puVar30;
              local_4b0 = puVar30;
              if (puVar32 != (undefined8 *)0x0) {
                *puVar7 = puVar30;
                puVar29 = puVar32;
                local_4b8 = puVar32;
              }
            }
          }
          break;
        }
      }
      local_4a0 = puVar16;
      (**(code **)(*param_1 + 0x88))(param_1,local_3d8);
      if ((*(char *)(param_1[0x10] + 0x138) != '\0') && (*param_3 == 0)) {
        lVar26 = (**(code **)(*(longlong *)puVar16[1] + 0x98))();
        if (lVar26 == 0) {
          bVar34 = param_2 == 0;
        }
        else {
          bVar34 = *(int *)(lVar26 + 0x10) == param_2;
        }
        if (bVar34) {
          AK::MemoryMgr::StartProfileThreadUsage((long)local_2a8);
          puVar14 = local_520;
          break;
        }
      }
      param_1[0x16] = (longlong)puVar16;
      bVar33 = false;
      local_420 = 0;
      CAkScheduleWindow::GetNode(local_3d8,&local_420);
      if (local_420 != 0) {
        local_498 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x18);
        iVar12 = *(int *)(local_420 + 0x10);
        piVar17 = (int *)param_1[0x17];
        piVar1 = piVar17 + (longlong)local_498 * 3;
        for (; (piVar17 != piVar1 && (*piVar17 != iVar12)); piVar17 = piVar17 + 3) {
        }
        piVar27 = piVar17 + 1;
        if (piVar17 == piVar1) {
          piVar27 = (int *)0x0;
        }
        if (piVar27 == (int *)0x0) {
          if (*(uint *)(param_1 + 0x18) < *(uint *)((longlong)param_1 + 0xc4)) {
LAB_1431e88c3:
            uVar28 = *(uint *)(param_1 + 0x18);
            *(uint *)(param_1 + 0x18) = uVar28 + 1;
            piVar27 = (int *)(param_1[0x17] + (ulonglong)uVar28 * 0xc);
LAB_1431e88e6:
            if (piVar27 == (int *)0x0) goto LAB_1431e8956;
            *piVar27 = iVar12;
            piVar27 = piVar27 + 1;
          }
          else {
            uVar28 = *(uint *)((longlong)param_1 + 0xc4) + 4;
            pvVar18 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar28 * 0xc);
            if (pvVar18 != (void *)0x0) {
              pvVar19 = (void *)param_1[0x17];
              if ((pvVar19 != (void *)0x0) && (pvVar19 != pvVar18)) {
                uVar24 = (ulonglong)*(uint *)(param_1 + 0x18);
                if (uVar24 != 0) {
                  lVar26 = 0;
                  do {
                    lVar13 = param_1[0x17];
                    lVar15 = lVar26 + 0xc;
                    *(undefined8 *)((longlong)pvVar18 + lVar26) =
                         *(undefined8 *)(lVar13 + -0xc + lVar15);
                    *(undefined4 *)((longlong)pvVar18 + lVar26 + 8) =
                         *(undefined4 *)(lVar13 + -4 + lVar15);
                    uVar24 = uVar24 - 1;
                    lVar26 = lVar15;
                  } while (uVar24 != 0);
                  pvVar19 = (void *)param_1[0x17];
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar19);
              }
              param_1[0x17] = (longlong)pvVar18;
              piVar27 = (int *)0x0;
              *(uint *)((longlong)param_1 + 0xc4) = uVar28;
              if ((uint)local_498 < uVar28) goto LAB_1431e88c3;
              goto LAB_1431e88e6;
            }
          }
          if (piVar27 == (int *)0x0) goto LAB_1431e8956;
        }
        puVar16 = local_510;
        if ((local_2d0[0] == 0) || (*(longlong *)(local_2d0[0] + 0x20) == 0)) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*(longlong *)(local_2d0[0] + 0x20) + 0xa8);
        }
        *piVar27 = iVar12;
        if (*(longlong *)(local_2d0[0] + 0x20) == 0) {
          iVar12 = 0;
        }
        else {
          lVar26 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_3d8,0);
          iVar12 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                             (local_2d0,(longlong)puVar16 - lVar26);
        }
        piVar27[1] = iVar12;
      }
LAB_1431e8956:
      lVar26 = local_4c0;
      in_stack_fffffffffffffab8 = (undefined8 **)CONCAT44(uVar25,local_518[0]);
      in_stack_fffffffffffffab0 = local_3d8;
      in_stack_fffffffffffffaa8 = &local_440;
      FUN_1431e8d00(param_1,local_4c0,local_520,&local_458,in_stack_fffffffffffffaa8,
                    in_stack_fffffffffffffab0,in_stack_fffffffffffffab8,local_510,0,local_400);
      puVar31 = local_4a0;
      if (local_500 != (undefined8 *)0x0) {
        in_stack_fffffffffffffab8 =
             (undefined8 **)
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffab8 >> 0x20),local_528[0]);
        in_stack_fffffffffffffab0 = local_2a8;
        in_stack_fffffffffffffaa8 = &local_490;
        FUN_1431e8d00(param_1,lVar26,local_500,&local_470,in_stack_fffffffffffffaa8,
                      in_stack_fffffffffffffab0,in_stack_fffffffffffffab8,local_418,1,local_400);
        puVar31 = local_4a0;
      }
LAB_1431e89f9:
      AK::MemoryMgr::StartProfileThreadUsage((long)local_2a8);
      puVar29 = local_4b8;
      puVar16 = local_500;
      puVar14 = local_520;
      puVar30 = local_4b0;
    } while (iVar10 != 1);
LAB_1431e8a62:
    puVar16 = local_500;
    if (bVar33) {
      if (puVar14 != (undefined8 *)0x0) {
        if (local_500 != (undefined8 *)0x0) {
          CAkMusicSwitchTransition::Cancel(puVar14);
          puVar14 = puVar16;
        }
        CAkMusicSwitchTransition::Dispose(puVar14);
      }
      if (*param_4 != 0) {
        CAkMusicCtx::_Cancel();
        *param_4 = 0;
      }
      cVar8 = (**(code **)(**(longlong **)(param_1[0x13] + 8) + 0xa0))();
      if (cVar8 != '\0') {
        lVar26 = param_1[0x13];
        if ((*(byte *)(lVar26 + 0x50) & 6) == 4) {
          local_4e8 = AkTimeConv::SamplesToMilliseconds((int)local_4c0 - *(int *)(lVar26 + 0x38));
          local_4e4 = *(uint *)(lVar26 + 0x44);
          local_4e0 = 0;
          CAkMusicCtx::_Play(*(undefined8 *)(lVar26 + 8),&local_4e8);
          bVar20 = *(byte *)(lVar26 + 0x50);
        }
        else {
          bVar20 = *(byte *)(lVar26 + 0x50) & 0xfd;
        }
        *(undefined1 *)(lVar26 + 0x18) = 0;
        *(byte *)(lVar26 + 0x50) = bVar20 & 0xfb;
      }
    }
    FUN_1431d8e00(param_1[0xd],local_400);
  }
  else {
    lVar26 = (**(code **)(*(longlong *)puVar31[1] + 0x98))();
    if (lVar26 == 0) {
      bVar33 = param_2 == 0;
    }
    else {
      bVar33 = *(int *)(lVar26 + 0x10) == param_2;
    }
    if (!bVar33) goto LAB_1431e7e0a;
LAB_1431e8b2a:
    for (puVar16 = (undefined8 *)param_1[0x14]; puVar16 != (undefined8 *)0x0;
        puVar16 = (undefined8 *)*puVar16) {
      if (puVar16 == puVar31) {
        if (puVar16 != (undefined8 *)0x0) {
          puVar31 = (undefined8 *)*puVar16;
          while (puVar32 = puVar30, puVar14 = puVar29, puVar30 = puVar31,
                puVar30 != (undefined8 *)0x0) {
            puVar31 = (undefined8 *)*puVar30;
            if (puVar30 == (undefined8 *)param_1[0x14]) {
              param_1[0x14] = (longlong)puVar31;
            }
            else {
              *puVar16 = puVar31;
            }
            if (puVar30 == (undefined8 *)param_1[0x13]) {
              param_1[0x13] = (longlong)puVar16;
            }
            *puVar30 = 0;
            puVar29 = puVar30;
            local_4b8 = puVar30;
            local_4b0 = puVar30;
            if (puVar14 != (undefined8 *)0x0) {
              *puVar32 = puVar30;
              puVar29 = puVar14;
              local_4b8 = puVar14;
            }
          }
        }
        break;
      }
    }
    (**(code **)(*param_1 + 0x88))(param_1,local_3d8);
    CAkMusicCtx::_Cancel(*param_4);
    *param_4 = 0;
    cVar8 = (**(code **)(**(longlong **)(param_1[0x13] + 8) + 0xa0))();
    if (cVar8 != '\0') {
      lVar26 = param_1[0x13];
      if ((*(byte *)(lVar26 + 0x50) & 6) == 4) {
        local_4e8 = AkTimeConv::SamplesToMilliseconds((int)local_4c0 - *(int *)(lVar26 + 0x38));
        local_4e4 = *(uint *)(lVar26 + 0x44);
        local_4e0 = 0;
        CAkMusicCtx::_Play(*(undefined8 *)(lVar26 + 8),&local_4e8);
        bVar20 = *(byte *)(lVar26 + 0x50);
      }
      else {
        bVar20 = *(byte *)(lVar26 + 0x50) & 0xfd;
      }
      *(undefined1 *)(lVar26 + 0x18) = 0;
      *(byte *)(lVar26 + 0x50) = bVar20 & 0xfb;
    }
  }
  puVar16 = _DAT_00000000;
  puVar29 = local_4b8;
  puVar30 = local_4b8;
  puVar31 = local_4b0;
  while (_DAT_00000000 = puVar16, puVar29 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*puVar29;
    _DAT_00000000 = puVar14;
    if (puVar29 == puVar30) {
      puVar30 = puVar14;
      _DAT_00000000 = puVar16;
    }
    puVar32 = (undefined8 *)0x0;
    if (puVar29 != puVar31) {
      puVar32 = puVar31;
    }
    *(byte *)(puVar29 + 10) = *(byte *)(puVar29 + 10) & 0xfc;
    CAkMusicCtx::_Cancel(puVar29[1]);
    lVar3 = g_DefaultPoolId;
    lVar26 = puVar29[1];
    puVar29[1] = 0;
    if (lVar26 != 0) {
      FUN_1431d64a0();
    }
    if (puVar29[1] != 0) {
      FUN_1431d64a0();
      puVar29[1] = 0;
    }
    AK::MemoryMgr::Free(lVar3,puVar29);
    puVar16 = _DAT_00000000;
    puVar29 = puVar14;
    puVar31 = puVar32;
  }
LAB_1431e8cd7:
  AK::MemoryMgr::StartProfileThreadUsage((long)local_3d8);
  return;
}



// FUNCTION 1431e8d00 FUN_1431e8d00 body=625 status=ok
// SIG undefined FUN_1431e8d00(void)

void FUN_1431e8d00(longlong *param_1,int param_2,undefined8 *param_3,int *param_4,int *param_5,
                  longlong param_6,int param_7,longlong param_8,char param_9,undefined8 param_10)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  lVar4 = CAkScheduleWindow::GetNode(param_6,0);
  lVar5 = param_1[0x13];
  uVar6 = (int)param_8 - param_2;
  if ((*(byte *)(lVar5 + 0x50) & 6) == 4) {
    uVar9 = param_2 - *(int *)(lVar5 + 0x38);
    if (uVar9 < uVar6) {
      uVar6 = uVar9;
    }
    local_38 = AkTimeConv::SamplesToMilliseconds(uVar6);
    local_34 = *(undefined4 *)(lVar5 + 0x44);
    local_30 = 0;
    CAkMusicCtx::_Play(*(undefined8 *)(lVar5 + 8),&local_38);
    bVar7 = *(byte *)(lVar5 + 0x50);
  }
  else {
    bVar7 = *(byte *)(lVar5 + 0x50) & 0xfd;
  }
  *(undefined1 *)(lVar5 + 0x18) = 0;
  *(byte *)(lVar5 + 0x50) = bVar7 & 0xfb;
  iVar1 = *param_4;
  iVar8 = 0;
  if ((iVar1 < 1) || (lVar4 == 0)) {
    lVar4 = param_8;
    if ((*(byte *)(param_4 + 4) & 0x20) != 0) {
      cVar3 = CAkScheduleWindow::IsAtExitCue(param_6,param_8);
      if (cVar3 != '\0') {
        uVar6 = CAkMusicSegment::PostExitDuration();
        lVar4 = (ulonglong)uVar6 + param_8;
      }
      iVar8 = 0;
    }
  }
  else {
    iVar8 = param_4[2];
    lVar4 = param_8 - ((int)((longlong)((ulonglong)DAT_1467bdcac * (longlong)iVar1) / 1000) - iVar8)
    ;
  }
  if ((param_9 == '\0') && (iVar8 < 1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar8 = param_4[1];
  *(byte *)(lVar5 + 0x50) = *(byte *)(lVar5 + 0x50) | 6;
  *(int *)(lVar5 + 0x40) = iVar1;
  *(int *)(lVar5 + 0x44) = iVar8;
  *(longlong *)(lVar5 + 0x38) = lVar4;
  if (bVar2) {
    if (*(char *)(lVar5 + 0x18) == '\0') {
      *(undefined1 *)(lVar5 + 0x18) = 1;
    }
    else if (*(longlong *)(lVar5 + 0x10) <= param_8) goto LAB_1431e8e72;
    *(longlong *)(lVar5 + 0x10) = param_8;
  }
LAB_1431e8e72:
  CAkScheduledItem::ForcePostExit
            (*(undefined8 *)(param_6 + 0x108),(uint)param_4[4] >> 5 & 0xffffff01);
  *(longlong *)(param_3[1] + 0x70) = param_8;
  param_3[4] = param_8 - param_7;
  param_3[5] = *(undefined8 *)param_5;
  *(int *)(param_3 + 6) = param_5[2];
  lVar5 = (**(code **)(*(longlong *)param_3[1] + 0x98))();
  if (lVar5 == 0) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  if (0 < *param_5) {
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  }
  *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 1;
  CAkScheduleWindow::CancelActionsAfterTransitionSyncPoint(param_6,param_10,param_8);
  cVar3 = *(char *)(param_6 + 0x128);
  while (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x80))(param_1,param_6,1);
    CAkScheduleWindow::CancelActionsAfterTransitionSyncPoint(param_6,param_10,param_8);
    cVar3 = *(char *)(param_6 + 0x128);
  }
  *param_3 = 0;
  if (param_1[0x14] == 0) {
    param_1[0x14] = (longlong)param_3;
  }
  else {
    *(undefined8 **)param_1[0x13] = param_3;
  }
  param_1[0x13] = (longlong)param_3;
  return;
}



// FUNCTION 1431e8f80 SeekPercent body=158 status=ok
// SIG undefined SeekPercent(void)

undefined8 CAkMusicSwitchCtx::SeekPercent(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_res8;
  undefined1 local_resc;
  longlong *local_res10;
  undefined4 *local_18;
  undefined1 local_10;
  
  local_res8 = *param_2;
  local_resc = 1;
  if (((*(byte *)(param_1 + 0x62) & 0xf) < 2) && (*(longlong *)(param_1 + 0x10) == 0)) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
    local_18 = &local_res8;
    local_10 = 0;
    uVar1 = ResolveAudioNode();
    local_res10 = (longlong *)CreateDestinationContext(param_1,uVar1);
    if (local_res10 != (longlong *)0x0) {
      FUN_1431e7c30(param_1,uVar1,&local_18,&local_res10);
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x68))();
      }
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1431e9020 SeekTimeAbsolute body=199 status=ok
// SIG undefined SeekTimeAbsolute(void)

undefined8 CAkMusicSwitchCtx::SeekTimeAbsolute(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_res8;
  undefined1 local_resc;
  longlong *local_res10;
  int *local_18;
  undefined1 local_10;
  
  local_resc = 0;
  iVar2 = (int)((longlong)((longlong)*param_2 * (ulonglong)DAT_1467bdcac) / 1000);
  local_res8 = 0;
  if (-1 < iVar2) {
    local_res8 = iVar2;
  }
  if (((*(byte *)(param_1 + 0x62) & 0xf) < 2) && (*(longlong *)(param_1 + 0x10) == 0)) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
    local_18 = &local_res8;
    local_10 = 0;
    uVar1 = ResolveAudioNode();
    local_res10 = (longlong *)CreateDestinationContext(param_1,uVar1);
    if (local_res10 != (longlong *)0x0) {
      FUN_1431e7c30(param_1,uVar1,&local_18,&local_res10);
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x68))();
      }
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1431e90f0 FUN_1431e90f0 body=642 status=ok
// SIG undefined FUN_1431e90f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1431e90f0(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  
  puVar11 = (undefined8 *)0x0;
  uVar4 = 0;
  puVar8 = (undefined8 *)param_1[0x14];
  puVar10 = puVar11;
  puVar7 = puVar11;
  while (puVar1 = puVar7, puVar2 = puVar10, puVar10 = puVar8, puVar10 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar10;
    puVar7 = puVar8;
    if (puVar10 == (undefined8 *)param_1[0x14]) {
      param_1[0x14] = (longlong)puVar8;
      puVar7 = _DAT_00000000;
    }
    _DAT_00000000 = puVar7;
    if (puVar10 == (undefined8 *)param_1[0x13]) {
      param_1[0x13] = 0;
    }
    *puVar10 = 0;
    puVar7 = puVar10;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar2 = puVar10;
      puVar7 = puVar1;
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  if (param_2 == '\0') {
    uVar4 = CAkMusicSwitchCtx::ResolveAudioNode(param_1);
  }
  lVar6 = CAkMusicSwitchCtx::CreateDestinationContext(param_1,uVar4);
  puVar8 = puVar1;
  puVar10 = _DAT_00000000;
  if ((lVar6 != 0) &&
     (puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58), puVar7 != (undefined8 *)0x0)) {
    *puVar7 = 0;
    puVar7[1] = lVar6;
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x44) = 4;
    *(undefined1 *)(puVar7 + 9) = 0;
    *(byte *)(puVar7 + 10) = *(byte *)(puVar7 + 10) & 0xf8;
    *puVar7 = 0;
    if (param_1[0x14] == 0) {
      param_1[0x14] = (longlong)puVar7;
    }
    else {
      *(undefined8 **)param_1[0x13] = puVar7;
    }
    param_1[0x13] = (longlong)puVar7;
    param_1[0x15] = param_1[0x14];
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar5 = (**(code **)(*param_1 + 0x78))(param_1,0,&local_38,local_res8,local_res10,0,0);
    puVar10 = _DAT_00000000;
    if (iVar5 != 0) {
      while (puVar1 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar1;
        _DAT_00000000 = puVar7;
        if (puVar1 == puVar8) {
          puVar8 = puVar7;
          _DAT_00000000 = puVar10;
        }
        puVar9 = puVar11;
        if (puVar1 != puVar2) {
          puVar9 = puVar2;
        }
        *(byte *)(puVar1 + 10) = *(byte *)(puVar1 + 10) & 0xfc;
        CAkMusicCtx::_Cancel(puVar1[1]);
        lVar3 = g_DefaultPoolId;
        lVar6 = puVar1[1];
        puVar1[1] = 0;
        if (lVar6 != 0) {
          FUN_1431d64a0();
        }
        if (puVar1[1] != 0) {
          FUN_1431d64a0();
          puVar1[1] = 0;
        }
        AK::MemoryMgr::Free(lVar3,puVar1);
        puVar10 = _DAT_00000000;
        puVar2 = puVar9;
        puVar1 = puVar7;
      }
      _DAT_00000000 = puVar10;
      return 1;
    }
  }
  while (puVar1 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar1;
    _DAT_00000000 = puVar7;
    if (puVar1 == puVar8) {
      puVar8 = puVar7;
      _DAT_00000000 = puVar10;
    }
    *puVar1 = 0;
    puVar10 = puVar11;
    if (puVar1 != puVar2) {
      puVar10 = puVar2;
    }
    if (param_1[0x14] == 0) {
      param_1[0x14] = (longlong)puVar1;
    }
    else {
      *(undefined8 **)param_1[0x13] = puVar1;
    }
    param_1[0x13] = (longlong)puVar1;
    puVar1 = puVar7;
    puVar2 = puVar10;
    puVar10 = _DAT_00000000;
  }
  _DAT_00000000 = puVar10;
  return 2;
}



// FUNCTION 1431e9380 SetSwitch body=349 status=ok
// SIG undefined SetSwitch(void)

void CAkMusicSwitchMonitor::SetSwitch
               (longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *local_res8;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x30);
  if (*param_3 == lVar1) goto LAB_1431e9409;
  if (*param_3 == 0) {
    if (param_4 == (undefined8 *)0x0) goto LAB_1431e9409;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0xff;
    local_18 = 0xff;
    local_10 = 0;
    local_38 = lVar1;
    cVar3 = (**(code **)*param_4)(param_4,&local_38);
    if (cVar3 == '\0') goto LAB_1431e9409;
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80) + 0x148);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)((ulonglong)*(uint *)(param_1 + 0xc) + lVar1) != '\x01') {
    return;
  }
LAB_1431e9409:
  iVar4 = 0x2ca33bdb;
  if (param_2 != 0) {
    iVar4 = param_2;
  }
  if (*(int *)(param_1 + 8) != iVar4) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(int *)(param_1 + 8) = iVar4;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((lVar2 != 0) &&
       ((**(longlong **)(lVar2 + 0xa8) != 0 ||
        ((*(longlong *)(lVar2 + 0x10) != 0 &&
         (cVar3 = CAkMusicSwitchCtx::HasOrAscendentHasPendingTransition(), cVar3 != '\0')))))) {
      *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) | 1;
      return;
    }
    *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) & 0xfe;
    local_48 = 0;
    local_40 = 0;
    if ((*(byte *)(lVar1 + 0x62) & 0xf) < 2) {
      uVar5 = CAkMusicSwitchCtx::ResolveAudioNode(lVar1);
      local_res8 = (longlong *)CAkMusicSwitchCtx::CreateDestinationContext(lVar1,uVar5);
      if ((local_res8 != (longlong *)0x0) &&
         (FUN_1431e7c30(lVar1,uVar5,&local_48,&local_res8), local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 0x68))();
      }
    }
    CAkMusicSwitchCtx::TryPropagateDelayedSwitchChange(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1431e94e0 FUN_1431e94e0 body=111 status=ok
// SIG undefined FUN_1431e94e0(void)

void FUN_1431e94e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 3;
    if (puVar2 != puVar1) {
      do {
        (**(code **)*puVar2)(puVar2,0);
        puVar2 = puVar2 + 3;
      } while (puVar2 != puVar1);
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1431e9550 TryPropagateDelayedSwitchChange body=84 status=ok
// SIG undefined TryPropagateDelayedSwitchChange(void)

void CAkMusicSwitchCtx::TryPropagateDelayedSwitchChange(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  if ((**(longlong **)(param_1 + 0xa8) == 0) &&
     ((*(longlong *)(param_1 + 0x10) == 0 ||
      (cVar2 = HasOrAscendentHasPendingTransition(), cVar2 == '\0')))) {
    for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if ((longlong *)puVar1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[1] + 0xb0))();
      }
    }
  }
  return;
}



// FUNCTION 1431e95b0 CreateVorbisBankPlugin body=52 status=ok
// SIG undefined CreateVorbisBankPlugin(void)

void CreateVorbisBankPlugin(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x120);
  if (pvVar1 != (void *)0x0) {
    FUN_1431ea850(pvVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1431e95f0 FUN_1431e95f0 body=52 status=ok
// SIG undefined FUN_1431e95f0(void)

void FUN_1431e95f0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x158);
  if (pvVar1 != (void *)0x0) {
    FUN_1431e9630(pvVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1431e9630 FUN_1431e9630 body=96 status=ok
// SIG undefined FUN_1431e9630(void)

undefined8 * FUN_1431e9630(undefined8 *param_1)

{
  CAkSrcFileBase::CAkSrcFileBase();
  *param_1 = &PTR__scalar_deleting_destructor__145ad1d58;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x11,0,0xa8);
  return param_1;
}



// FUNCTION 1431e9690 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSrcFileVorbis::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad1d58;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x16] != 0) {
    AkVorbisCodebookMgr::ReleaseCodebook(&DAT_146b521c0);
  }
  CAkSrcFileBase::~CAkSrcFileBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 1431e9700 FUN_1431e9700 body=226 status=ok
// SIG undefined FUN_1431e9700(void)

ulonglong FUN_1431e9700(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return 1;
  }
  uVar3 = CAkSrcFileBase::ChangeSourcePosition();
  if ((int)uVar3 == 1) {
    iVar4 = 0;
    if ((*(char *)(param_1 + 0x140) != '\0') && (*(void **)(param_1 + 0x130) != (void *)0x0)) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x130));
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined1 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar2 + 0x295) & 0x40) == 0) {
      iVar4 = *(int *)(lVar2 + 0x28c);
    }
    *(byte *)(lVar2 + 0x295) = *(byte *)(lVar2 + 0x295) & 0x3f;
    *(byte *)(lVar2 + 0x296) = *(byte *)(lVar2 + 0x296) & 0xfe;
    *(undefined4 *)(lVar2 + 0x28c) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar4;
    if (*(short *)(param_1 + 0x54) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0x106);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xfa);
    }
    vorbis_dsp_restart(param_1 + 0x98,iVar4,uVar1);
    *(undefined4 *)(param_1 + 0x90) = 3;
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 1431e97f0 FUN_1431e97f0 body=422 status=ok
// SIG undefined FUN_1431e97f0(void)

undefined8 FUN_1431e97f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  ushort *local_28;
  uint local_20;
  undefined1 local_18;
  
  iVar4 = *(int *)(param_1 + 0x90);
  while (iVar4 < 3) {
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar1 == 0) {
      return 0x3f;
    }
    if (iVar4 < 2) {
      uVar2 = *(uint *)(param_1 + 0x128);
      uVar3 = *(uint *)(param_1 + 0xfc);
      bVar8 = uVar2 == uVar3;
      if (uVar2 < uVar3) {
        if (uVar3 - uVar2 <= uVar1) {
          uVar1 = uVar3 - uVar2;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x120)),
                   *(void **)(param_1 + 0x60),(ulonglong)uVar1);
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + uVar1;
        *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar1;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar1;
        bVar8 = *(int *)(param_1 + 0x128) == *(int *)(param_1 + 0xfc);
      }
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x90) = 2;
      }
    }
    iVar4 = *(int *)(param_1 + 0x90);
    while (iVar4 == 2) {
      uVar5 = FUN_1431e9cd0(param_1);
      if ((uint)uVar5 == 0x2e) {
        return 0x3f;
      }
      if (((uint)uVar5 < 0x35) && ((0x10000000020004U >> (uVar5 & 0x3f) & 1) != 0))
      goto LAB_1431e996e;
      local_28 = *(ushort **)(param_1 + 0x130) + 1;
      local_20 = (uint)**(ushort **)(param_1 + 0x130);
      local_18 = 0;
      lVar6 = FUN_1431ebc30(&DAT_146b521c0,param_1 + 0x88,*(undefined8 *)(param_1 + 0x18),&local_28)
      ;
      *(longlong *)(param_1 + 0xb0) = lVar6;
      if (lVar6 == 0) goto LAB_1431e996e;
      iVar4 = 3;
      *(undefined4 *)(param_1 + 0x90) = 3;
      if ((*(char *)(param_1 + 0x140) != '\0') && (*(void **)(param_1 + 0x130) != (void *)0x0)) {
        AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x130));
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined1 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
        iVar4 = *(int *)(param_1 + 0x90);
      }
    }
  }
  iVar4 = vorbis_dsp_init(param_1 + 0x98,*(undefined1 *)(param_1 + 0xe0));
  if (iVar4 == 0) {
    uVar7 = 1;
  }
  else {
LAB_1431e996e:
    uVar7 = 2;
  }
  return uVar7;
}



// FUNCTION 1431e99a0 FUN_1431e99a0 body=242 status=ok
// SIG undefined FUN_1431e99a0(void)

undefined4 FUN_1431e99a0(longlong param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    *param_3 = 0;
    *param_4 = *(int *)(param_1 + 0x100);
    *param_4 = *param_4 + *(int *)(param_1 + 0x34);
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0xfc);
  lVar2 = *(longlong *)(param_1 + 0x120);
  if ((lVar2 == 0) || (uVar1 >> 2 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
    return 2;
  }
  iVar6 = 0;
  uVar4 = 0;
  uVar7 = 0;
  if (uVar1 >> 2 != 0) {
    do {
      uVar5 = *(ushort *)(lVar2 + uVar4 * 4) + uVar7;
      if (param_2 < uVar5) break;
      iVar6 = iVar6 + (uint)*(ushort *)(lVar2 + 2 + uVar4 * 4);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar7 = uVar5;
    } while (uVar3 < uVar1 >> 2);
    if ((int)uVar4 != 0) {
      iVar6 = uVar1 + iVar6;
      goto LAB_1431e9a44;
    }
  }
  iVar6 = *(int *)(param_1 + 0x100);
  uVar7 = 0;
LAB_1431e9a44:
  *param_4 = iVar6;
  *param_3 = uVar7;
  *param_4 = *param_4 + *(int *)(param_1 + 0x34);
  return 1;
}


