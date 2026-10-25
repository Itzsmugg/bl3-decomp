// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c1b280 FUN_140c1b280 body=881 status=ok
// SIG undefined FUN_140c1b280(void)

void FUN_140c1b280(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *local_108;
  ulonglong local_100;
  longlong local_f8;
  code *local_e8;
  longlong **pplStack_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  longlong **pplStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  plVar7 = (longlong *)0x0;
  FUN_140c136e0(&local_d8,0);
  if (local_d8 == 0) goto LAB_140c1b5a6;
  local_f8 = param_1 + -0x28;
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))();
  if (lVar4 == 0) goto LAB_140c1b5a6;
  lVar4 = FUN_142f6c9f0(lVar4);
  if (lVar4 == 0) goto LAB_140c1b5a6;
  uVar5 = AEQSTestingPawn::GetNavAgentPropertiesRef(lVar4);
  local_e8 = (code *)FUN_140bf9cb0(uVar5,param_2);
  if ((local_e8 == (code *)0x0) || (lVar4 = *(longlong *)local_e8, lVar4 == 0)) goto LAB_140c1b5a6;
  plVar9 = *(longlong **)(lVar4 + 0x230);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  plVar13 = (longlong *)((longlong)*(int *)(lVar4 + 0x238) & 0x1fffffffffffffff);
  if (plVar9 + *(int *)(lVar4 + 0x238) < plVar9) {
    plVar13 = plVar7;
  }
  plVar12 = plVar7;
  plVar14 = plVar7;
  plVar15 = plVar7;
  if (plVar13 == (longlong *)0x0) goto LAB_140c1b5a6;
  do {
    lVar4 = *plVar9;
    lVar6 = CAkSrcBaseEx::StopStream(param_2);
    plVar8 = *(longlong **)(lVar4 + 0x28);
    plVar2 = plVar8 + *(int *)(lVar4 + 0x30);
    for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar6) {
        iVar10 = (int)plVar7;
        uVar11 = iVar10 + 1;
        local_100 = CONCAT44(local_100._4_4_,uVar11);
        if ((int)plVar12 < (int)uVar11) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,plVar7);
          plVar12 = (longlong *)(local_100 >> 0x20);
          plVar15 = local_108;
          uVar11 = (uint)local_100;
        }
        plVar7 = (longlong *)(ulonglong)uVar11;
        plVar15[iVar10] = *plVar9;
        break;
      }
    }
    pcVar3 = local_e8;
    plVar9 = plVar9 + 1;
    plVar14 = (longlong *)((longlong)plVar14 + 1);
  } while (plVar14 != plVar13);
  if (0 < (int)plVar7) {
    lVar4 = *plVar15;
    FUN_142f59bd0(lVar4,local_48,*(longlong *)local_e8);
    if (param_3 == '\x03') {
      plVar7 = *(longlong **)(lVar4 + 0x28);
      lVar6 = CAkSrcBaseEx::StopStream(param_2);
      if (*plVar7 == lVar6) {
        plVar7 = (longlong *)FUN_142f59bd0(lVar4,local_58,*(longlong *)pcVar3);
        local_b0 = &local_d8;
        local_a8 = *plVar7;
        *plVar7 = 0;
        local_a0 = (undefined4)plVar7[1];
        local_9c = *(undefined4 *)((longlong)plVar7 + 0xc);
        plVar7[1] = 0;
        pplStack_90 = &local_b0;
        local_98 = FUN_140c08020;
        local_68 = 0x40c08020;
        uStack_64 = 1;
        uStack_60 = pplStack_90;
        FUN_140c10c60(local_f8,&local_68);
        if (local_a8 != 0) {
          FMemory::Free();
        }
        local_78[0] = local_58[0];
        goto LAB_140c1b561;
      }
    }
    else if ((byte)(param_3 - 5U) < 2) {
      lVar6 = CAkSrcBaseEx::StopStream(param_2);
      plVar9 = *(longlong **)(lVar4 + 0x28);
      plVar7 = plVar9 + *(int *)(lVar4 + 0x30);
      if (plVar9 != plVar7) {
        do {
          if (*plVar9 == *(longlong *)(lVar6 + 0x70)) goto LAB_140c1b56b;
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar7);
      }
      plVar7 = (longlong *)FUN_142f59bd0(lVar4,local_78,*(longlong *)pcVar3);
      local_c8 = &local_d8;
      local_c0 = *plVar7;
      *plVar7 = 0;
      local_b8 = (undefined4)plVar7[1];
      local_b4 = *(undefined4 *)((longlong)plVar7 + 0xc);
      plVar7[1] = 0;
      pplStack_e0 = &local_c8;
      local_e8 = FUN_140c08090;
      local_88 = 0x40c08090;
      uStack_84 = 1;
      uStack_80 = pplStack_e0;
      FUN_140c10c60(local_f8,&local_88);
      if (local_c0 != 0) {
        FMemory::Free();
      }
LAB_140c1b561:
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
LAB_140c1b56b:
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (plVar15 != (longlong *)0x0) {
    FMemory::Free(plVar15);
  }
LAB_140c1b5a6:
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d0 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140c1b600 FUN_140c1b600 body=50 status=ok
// SIG undefined FUN_140c1b600(void)

void FUN_140c1b600(longlong *param_1,longlong param_2,longlong param_3)

{
  if (((param_1[0xd6] != 0) && (param_1[0xd6] == param_3)) && (param_2 == param_1[0xd7])) {
    param_1[0xd6] = 0;
                    /* WARNING: Could not recover jumptable at 0x000140c1b62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x738))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140c1b640 FUN_140c1b640 body=897 status=ok
// SIG undefined FUN_140c1b640(void)

void FUN_140c1b640(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    return;
  }
  plVar12 = (longlong *)0x0;
  plVar13 = plVar12;
  if (*(longlong *)(param_2 + 0x2b0) != 0) {
    plVar13 = *(longlong **)(*(longlong *)(param_2 + 0x2b0) + 0x118);
  }
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  uVar3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
  lVar4 = AGameStateBase::OnRep_GameModeClass(plVar13,uVar3);
  if (lVar4 != 0) {
    lVar5 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
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
      if (((*(char *)(lVar4 + 0x188) == '\0') &&
          (lVar5 = thunk_FUN_142f5c680(param_1,*(undefined8 *)(lVar4 + 0x178)), lVar5 != 0)) &&
         (*(char *)(lVar5 + 0x10) == '\x01')) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FUN_142f59550(lVar5,&local_38,1);
        if (local_38 != local_38 + (int)local_30) {
          plVar10 = local_38;
          do {
            if (*plVar10 == *(longlong *)(lVar4 + 0x180)) {
              uVar2 = FUN_142f5cdc0(*(longlong *)(lVar4 + 0x180),plVar13);
              FUN_142f6e820(param_1,*(undefined8 *)(lVar4 + 0x178),*(undefined8 *)(lVar4 + 0x180),
                            uVar2,1,plVar13);
              break;
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != local_38 + (int)local_30);
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free(local_38);
        }
      }
      goto LAB_140c1b799;
    }
  }
  lVar4 = 0;
LAB_140c1b799:
  lVar5 = *(longlong *)(param_2 + 0x38);
  if (lVar5 != 0) {
    uVar3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    lVar5 = AGameStateBase::OnRep_GameModeClass(lVar5,uVar3);
    if (lVar5 != 0) {
      lVar6 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) &&
          (lVar6 = thunk_FUN_142f5c680(param_1,*(undefined8 *)(lVar5 + 0x178)), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x10) == '\x01')) {
        plVar10 = plVar12;
        if (*(longlong *)(lVar6 + 8) != 0) {
          plVar7 = (longlong *)FUN_142f71d80();
          for (plVar11 = *(longlong **)(lVar6 + 8);
              (plVar10 = plVar12, plVar11 != (longlong *)0x0 &&
              (plVar10 = *(longlong **)(lVar6 + 8), plVar11 != plVar7));
              plVar11 = (longlong *)plVar11[6]) {
          }
        }
        lVar14 = plVar10[0x1f];
        if (lVar14 == 0) {
          (**(code **)(*plVar10 + 0x368))(plVar10);
          lVar14 = plVar10[0x1f];
          if (lVar14 == 0) {
            return;
          }
        }
        lVar8 = FUN_141437870();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_38 = (longlong *)0x0;
          local_30 = 0;
          FUN_142f59550(lVar6,&local_38,CONCAT71((int7)((ulonglong)(lVar8 + 0x88) >> 8),1));
          plVar10 = *(longlong **)(lVar5 + 0x180);
          plVar11 = (longlong *)((longlong)*(int *)(lVar5 + 0x188) & 0x1fffffffffffffff);
          if (plVar10 + *(int *)(lVar5 + 0x188) < plVar10) {
            plVar11 = plVar12;
          }
          plVar7 = local_38;
          if (plVar11 != (longlong *)0x0) {
            do {
              lVar6 = *plVar10;
              for (plVar9 = plVar7; plVar9 != plVar7 + (int)local_30; plVar9 = plVar9 + 1) {
                if (*plVar9 == lVar6) {
                  if ((*(char *)(lVar14 + 0x4e0) == '\0') ||
                     ((lVar4 != 0 && (*(longlong *)(lVar4 + 0x180) == lVar6)))) {
                    uVar2 = FUN_142f5cdc0(lVar6,plVar13);
                    FUN_142f6e820(param_1,*(undefined8 *)(lVar5 + 0x178),lVar6,uVar2,1,plVar13);
                    plVar7 = local_38;
                  }
                  break;
                }
              }
              plVar10 = plVar10 + 1;
              plVar12 = (longlong *)((longlong)plVar12 + 1);
            } while (plVar12 != plVar11);
          }
          if (plVar7 != (longlong *)0x0) {
            FMemory::Free(plVar7);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c1b9d0 FUN_140c1b9d0 body=74 status=ok
// SIG undefined FUN_140c1b9d0(void)

void FUN_140c1b9d0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  thunk_FUN_1428e0030();
  if (param_2 != (longlong *)0x0) {
    uVar1 = UCheckBoxWidgetStyle::StaticClass();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      FUN_140a68d90(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 140c1ba20 FUN_140c1ba20 body=74 status=ok
// SIG undefined FUN_140c1ba20(void)

void FUN_140c1ba20(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  thunk_FUN_1428e00b0();
  if (param_2 != (longlong *)0x0) {
    uVar1 = UCheckBoxWidgetStyle::StaticClass();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      FUN_140a69020(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 140c1ba70 FUN_140c1ba70 body=119 status=ok
// SIG undefined FUN_140c1ba70(void)

void FUN_140c1ba70(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    uVar2 = *param_1;
    local_res10 = param_2;
    local_res18[0] = param_3;
    cVar1 = FUN_14218fd10(uVar2,param_1 + 5);
    if (cVar1 != '\0') {
      uVar2 = FUN_140bf9f90(uVar2,&local_res10,local_res18);
      cVar1 = FUN_1407ce070(uVar2);
      if (cVar1 != '\0') {
        FUN_142182fa0(uVar2,param_1 + 5);
      }
    }
  }
  return;
}



// FUNCTION 140c1baf0 FUN_140c1baf0 body=860 status=ok
// SIG undefined FUN_140c1baf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c1baf0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  char local_64;
  longlong *local_58;
  longlong local_50;
  undefined8 local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar5 = (longlong *)0x0;
  lVar2 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
  local_d8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    lVar3 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
    lVar7 = lVar2;
    do {
      if (lVar7 == lVar3) goto LAB_140c1bb60;
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  lVar2 = 0;
LAB_140c1bb60:
  local_88[0] = 5;
  local_30 = '\0';
  local_e8 = lVar2;
  FUN_14044bc80(&local_80,&local_d8,&local_e8);
  FUN_14045a130(local_88);
  if (local_64 == '\0') {
    uVar4 = AArchVisCharacter::StaticClass();
    plVar5 = (longlong *)(**(code **)(*local_58 + 0x628))(local_58,uVar4);
    uVar4 = UUGHitTextureButton::GetPrivateStaticClass();
    (**(code **)(*local_58 + 0x628))(local_58,uVar4);
  }
  if (local_30 != '\0') {
    local_30 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_80,local_38);
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar4,&local_c8);
    while( true ) {
      if ((local_c0 < 0) || (*(int *)(local_c8 + 8) <= local_c0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar6 = (longlong *)FWeakObjectPtr::Get();
      if (plVar6 != (longlong *)0x0) {
        lVar2 = FUN_14145f370();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
            lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar2 = plVar6[0x109], lVar2 != 0)) {
          lVar7 = FUN_1413ffe00();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            bVar1 = false;
            if ((longlong *)plVar6[0x91] != (longlong *)0x0) {
              lVar7 = (**(code **)(*(longlong *)plVar6[0x91] + 0x690))();
              bVar1 = lVar7 != 0;
            }
            local_108 = bVar1;
            (**(code **)(*plVar5 + 0x8f8))(plVar5,&local_f8,plVar6,0);
            if ((local_f8 == 0) || (local_f0 == (longlong *)0x0)) {
              plVar8 = (longlong *)(**(code **)(*plVar5 + 0x900))(plVar5,local_98);
              local_f8 = *plVar8;
              local_f0 = (longlong *)plVar8[1];
            }
            if ((local_f8 != 0) && (local_f0 != (longlong *)0x0)) {
              (**(code **)(*local_f0 + 0x20))(local_f0,&local_e8);
              plVar8 = (longlong *)0x0;
              if (local_f8 != 0) {
                plVar8 = local_f0;
              }
              (**(code **)(*plVar8 + 0x28))(plVar8,&local_d8);
              *(longlong *)(lVar2 + 0x1128) = local_f8;
              *(longlong **)(lVar2 + 0x1130) = local_f0;
              UUGButton::GetPrivateStaticClass();
              lVar2 = (**(code **)(*plVar6 + 0x678))();
              if (lVar2 != 0) {
                lVar7 = FUN_1413f82e0();
                if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  local_b8 = local_d8;
                  local_b0 = local_d0;
                  local_a8 = local_e8;
                  local_a0 = local_e0;
                  local_108 = 0;
                  FUN_1413f8c70(lVar2,&local_a8,&local_b8);
                }
              }
            }
          }
        }
      }
      local_c0 = local_c0 + 1;
    }
  }
  return;
}



// FUNCTION 140c1be50 FUN_140c1be50 body=616 status=ok
// SIG undefined FUN_140c1be50(void)

void FUN_140c1be50(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    bVar2 = true;
    lVar5 = 0;
    if (*(char *)((longlong)param_1 + 0x4f4) == '\x01') {
      if ((longlong *)param_1[0x9d] != (longlong *)0x0) {
        lVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x2a0))();
      }
      if ((((char)param_1[0x25] != '\x03') && (lVar5 != 0)) &&
         (*(longlong **)(lVar5 + 0xb8) != (longlong *)0x0)) {
        cVar3 = (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x288))();
        bVar2 = true;
        if (cVar3 == '\0') {
          bVar2 = false;
        }
      }
    }
    UWorld::GetPlayerControllerIterator(lVar4,&local_58);
    while( true ) {
      if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar6 = (longlong *)FWeakObjectPtr::Get();
      if (plVar6 != (longlong *)0x0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar3 = (**(code **)(*plVar6 + 0x768))(), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (!bVar2) {
              FUN_1414602d0(plVar6,5);
            }
            local_68 = param_1[0x9d];
            local_60 = CONCAT35(local_60._5_3_,(int5)param_1[0x9e]);
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (plVar6 + 0x173,&local_68);
          }
        }
      }
      local_50 = local_50 + 1;
    }
    if (param_1[0x9d] == 0) {
      local_68 = 0;
      local_60 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"Travel Cancelled",0x22);
      local_48 = 0;
      uStack_44 = 0x3e4ccccd;
      uStack_40 = 0x3f800000;
      uStack_3c = 0x3f800000;
    }
    else {
      local_48 = 0;
      uStack_44 = 0x3e4ccccd;
      uStack_40 = 0x3f800000;
      uStack_3c = 0x3f800000;
      puVar7 = (undefined8 *)FText::ToString(param_1[0x9d] + 0x98);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_68,L"Travel Countdown To %s - %d",puVar9,(int)param_1[0x9e]);
    }
    uVar8 = FText::FromString(local_38,&local_68);
    FTurnBasedMatchmakerDelegate::OnMatchFound(lVar4,uVar8,1,0,&local_48,0x3f800000);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c1c0c0 FUN_140c1c0c0 body=476 status=ok
// SIG undefined FUN_140c1c0c0(void)

void FUN_140c1c0c0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar5 = (longlong *)(**(code **)(*(longlong *)(param_2 + 0x8c0) + 0x30))();
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      lVar4 = param_1[0xdf];
      local_res10 = 0;
      if (lVar4 == 0) {
        return;
      }
      plVar8 = (longlong *)*plVar5;
      plVar7 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
        if (*plVar8 == lVar4) goto LAB_140c1c19e;
      }
      plVar7 = (longlong *)plVar5[2];
      plVar5 = plVar7 + (int)plVar5[3];
      if (plVar7 == plVar5) {
        return;
      }
      while (*plVar7 != lVar4) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar5) {
          return;
        }
      }
LAB_140c1c19e:
      FWeakObjectPtr::operator=(&local_res10,param_2);
      iVar2 = (int)param_1[0xe5];
      *(int *)(param_1 + 0xe5) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x72c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe4,iVar2);
      }
      puVar1 = (undefined4 *)(param_1[0xe4] + (longlong)iVar2 * 8);
      *puVar1 = (undefined4)local_res10;
      puVar1[1] = local_res10._4_4_;
      return;
    }
  }
  if (((param_1[0xd6] == 0) && (param_1[0xd7] != 0)) && (param_3 == param_1[0xd7])) {
    if (param_2 != 0) {
      lVar6 = FUN_14148cad0();
      lVar4 = *(longlong *)(param_2 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        param_1[0xd6] = param_2;
        (**(code **)(*param_1 + 0x738))(param_1,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
      }
    }
    local_res10 = param_1[0xd6];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1[0xd7] + 0x810,&local_res10);
  }
  return;
}



// FUNCTION 140c1c2a0 FUN_140c1c2a0 body=250 status=ok
// SIG undefined FUN_140c1c2a0(void)

void FUN_140c1c2a0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong local_res10;
  undefined8 local_res18;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x128) != '\x03') {
    return;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_6 == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar1 == 0) {
      return;
    }
    if (param_5 == *(longlong *)(lVar1 + 0x2c8)) {
      puVar4 = param_1 + 0xb;
    }
    else {
      if (param_5 != *(longlong *)(lVar1 + 0x2c0)) {
        return;
      }
      puVar4 = param_1 + 10;
    }
    uVar3 = *param_1;
  }
  else {
    if (param_6 != '\x01') {
      if (param_6 == '\x02') {
        uVar3 = *param_1;
        puVar4 = param_1 + 0xc;
        goto LAB_140c1c348;
      }
      if (param_6 != '\x03') {
        return;
      }
    }
    uVar3 = *param_1;
    puVar4 = param_1 + 9;
  }
LAB_140c1c348:
  cVar2 = FUN_14218fd10(uVar3,puVar4);
  if (cVar2 != '\0') {
    uVar3 = FUN_140bf9f90(uVar3,&local_res10,&local_res18);
    cVar2 = FUN_1407ce070(uVar3);
    if (cVar2 != '\0') {
      FUN_142183130(uVar3,puVar4);
    }
  }
  return;
}



// FUNCTION 140c1c3a0 FUN_140c1c3a0 body=124 status=ok
// SIG undefined FUN_140c1c3a0(void)

void FUN_140c1c3a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_141437c50();
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
      FUN_140c216d0(lVar1,param_2);
    }
  }
  FUN_1430054e0(param_1,param_2);
  return;
}



// FUNCTION 140c1c440 FUN_140c1c440 body=1521 status=ok
// SIG undefined FUN_140c1c440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c1c440(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  byte bVar17;
  double local_res10;
  longlong local_res18 [2];
  double local_88;
  double dStack_80;
  longlong *local_68;
  byte local_60 [56];
  
  pdVar13 = (double *)*param_2;
  if (0 < *(int *)(pdVar13 + 0x11)) {
    pdVar12 = (double *)pdVar13[0x10];
    if ((double *)pdVar13[0x10] == (double *)0x0) {
      pdVar12 = pdVar13;
    }
    if (pdVar12 != (double *)0x0) {
      if (*(short *)(pdVar12 + 3) == 0x28) {
        lVar7 = FUN_1407ba9a0();
      }
      else {
        if (*(short *)(pdVar12 + 3) != 0x27) {
          return;
        }
        local_88 = *pdVar12;
        dStack_80 = pdVar12[1];
        lVar7 = FHardwareCursor::GetHandle(&local_88);
      }
      if (lVar7 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686bb20) &&
           (_Init_thread_header(&DAT_14686bb20), DAT_14686bb20 == -1)) {
          puVar11 = (undefined8 *)FUN_140bffca0(&DAT_14686af60);
          _DAT_14686bac0 = *puVar11;
          _DAT_14686bac8 = puVar11[1];
          _DAT_14686bad0 = puVar11[2];
          _DAT_14686bad8 = puVar11[3];
          _DAT_14686bae0 = puVar11[4];
          DAT_14686bae8 = (longlong *)puVar11[5];
          _DAT_14686baf0 = puVar11[6];
          _DAT_14686baf8 = puVar11[7];
          _DAT_14686bb00 = *(undefined4 *)(puVar11 + 8);
          uRam000000014686bb04 = *(undefined4 *)((longlong)puVar11 + 0x44);
          _DAT_14686bb08 = *(undefined4 *)(puVar11 + 9);
          uRam000000014686bb0c = *(undefined4 *)((longlong)puVar11 + 0x4c);
          _DAT_14686bb10 = *(undefined4 *)(puVar11 + 10);
          uRam000000014686bb14 = *(undefined4 *)((longlong)puVar11 + 0x54);
          DAT_14686bb18._0_4_ = *(undefined4 *)(puVar11 + 0xb);
          DAT_14686bb18._4_4_ = *(undefined4 *)((longlong)puVar11 + 0x5c);
          _Init_thread_footer(&DAT_14686bb20);
        }
        lVar8 = FUN_140c15a40(param_2[2],*(undefined8 *)(*param_2 + 0x90));
        if (*(int *)(lVar8 + 0x20) == 0) {
          plVar16 = (longlong *)FUN_140aa2bd0(lVar8);
        }
        else {
          lVar14 = *(longlong *)(lVar8 + 0x18);
          if (*(longlong *)(lVar8 + 0x18) == 0) {
            lVar14 = lVar8 + 8;
          }
          plVar16 = (longlong *)(lVar14 + (longlong)(*(int *)(lVar8 + 0x20) + -1) * 0x10);
        }
        FUN_140bfab30(plVar16,&DAT_14686bac8,lVar7 + 0x1c4);
        dVar4 = 0.0;
        if (*(int *)(lVar7 + 0x1d0) < 2) {
          local_res10 = 0.0;
        }
        else {
          local_res10 = (double)*(float *)(*(longlong *)(lVar7 + 0x1c8) + 4);
        }
        FUN_140bfaf50(plVar16,&DAT_14686bad0,&local_res10);
        FUN_140bfab30(plVar16,&DAT_14686bad8,lVar7 + 0x1d8);
        if (1 < *(int *)(lVar7 + 0x1e8)) {
          dVar4 = (double)*(float *)(*(longlong *)(lVar7 + 0x1e0) + 4);
        }
        local_res10 = dVar4;
        FUN_140bfaf50(plVar16,&DAT_14686bae0,&local_res10);
        bVar1 = *(byte *)(lVar7 + 0x214);
        bVar17 = bVar1 & 1;
        local_res10 = 0.0;
        if ((*DAT_14686bae8 != 0) && (cVar5 = FUN_1407ce010(DAT_14686bae8 + 1), cVar5 != '\0')) {
          plVar15 = (longlong *)*plVar16;
          plVar3 = plVar15 + (longlong)(int)plVar16[1] * 5;
          if (plVar15 != plVar3) {
            do {
              if ((*(longlong *)*plVar15 == *DAT_14686bae8) &&
                 (*(longlong *)(((longlong *)*plVar15)[1] + 0x28) ==
                  *(longlong *)(DAT_14686bae8[1] + 0x28))) {
                FUN_14217e740(&local_88);
                FUN_142194380(&local_88,0x1d,0,1,0);
                local_88 = (double)(CONCAT71(local_88._1_7_,bVar1) & 0xffffffffffffff01);
                FUN_14217f450(plVar15 + 1,&local_88);
                pdVar13 = &local_88;
                goto LAB_140c1c6c5;
              }
              plVar15 = plVar15 + 5;
            } while (plVar15 != plVar3);
          }
          local_68 = DAT_14686bae8;
          FUN_14217e740(local_60);
          FUN_142194380(local_60,0x1d,0,1,0);
          iVar2 = (int)plVar16[1];
          *(int *)(plVar16 + 1) = iVar2 + 1;
          local_60[0] = bVar17;
          if (*(int *)((longlong)plVar16 + 0xc) < iVar2 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar16,iVar2);
          }
          lVar8 = *plVar16;
          *(longlong **)(lVar8 + (longlong)iVar2 * 0x28) = local_68;
          FUN_14217e5b0(lVar8 + (longlong)iVar2 * 0x28 + 8,local_60);
          pdVar13 = (double *)local_60;
LAB_140c1c6c5:
          FUN_14217f430(pdVar13);
        }
        if (((*(byte *)(lVar7 + 0x100) & 4) == 0) && (1 < (byte)(*(char *)(lVar7 + 0x2f0) - 1U))) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        local_res10 = (double)CONCAT71(local_res10._1_7_,uVar6);
        FUN_140bfac90(plVar16,&DAT_14686baf0,&local_res10);
        local_res10 = (double)CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar7 + 0x32c));
        FUN_140bfa9d0(plVar16,&DAT_14686baf8,&local_res10);
        plVar3 = *(longlong **)(lVar7 + 0x58);
        if (plVar3 == (longlong *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar8 = plVar3[0x1f];
          if (lVar8 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar8 = plVar3[0x1f];
          }
        }
        uVar9 = FUN_140c12c50(&local_88,lVar8);
        FUN_140bfb1d0(plVar16,&DAT_14686bb00,uVar9);
        if (local_88 != 0.0) {
          FMemory::Free();
        }
        lVar8 = *(longlong *)(lVar7 + 0x50);
        if (lVar8 != 0) {
          lVar10 = FUN_142e0d0b0();
          lVar14 = lVar8;
          do {
            if (lVar14 == lVar10) {
              local_res10 = *(double *)(lVar8 + 0x18);
              FName::ToString(&local_res10,&local_88);
              goto LAB_140c1c7ff;
            }
            lVar14 = *(longlong *)(lVar14 + 0x30);
          } while (lVar14 != 0);
        }
        local_88 = 0.0;
        dStack_80 = 2.47032822920623e-323;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
LAB_140c1c7ff:
        FUN_140bfb1d0(plVar16,&DAT_14686bb08,&local_88);
        if (local_88 != 0.0) {
          FMemory::Free();
        }
        local_res10 = *(double *)(lVar7 + 0x38);
        FUN_14217e740(&local_88);
        FUN_142194380(&local_88,0x28,0,0,0);
        local_88 = local_res10;
        FUN_1421923f0(&local_68,DAT_14686adc8,&local_88);
        FUN_140bfb300(plVar16,&DAT_14686bb10,&local_68);
        FUN_14217f430(&local_68);
        FUN_14217f430(&local_88);
        local_res10 = 0.0;
        if ((*(longlong *)CONCAT44(DAT_14686bb18._4_4_,(undefined4)DAT_14686bb18) != 0) &&
           (local_res18[0] = lVar7,
           cVar5 = FUN_1407ce010((longlong *)CONCAT44(DAT_14686bb18._4_4_,(undefined4)DAT_14686bb18)
                                 + 1), cVar5 != '\0')) {
          plVar15 = (longlong *)*plVar16;
          plVar3 = plVar15 + (longlong)(int)plVar16[1] * 5;
          if (plVar15 != plVar3) {
            do {
              if ((*(longlong *)*plVar15 ==
                   *(longlong *)CONCAT44(DAT_14686bb18._4_4_,(undefined4)DAT_14686bb18)) &&
                 (*(longlong *)(((longlong *)*plVar15)[1] + 0x28) ==
                  *(longlong *)
                   (((longlong *)CONCAT44(DAT_14686bb18._4_4_,(undefined4)DAT_14686bb18))[1] + 0x28)
                 )) {
                return;
              }
              plVar15 = plVar15 + 5;
            } while (plVar15 != plVar3);
          }
          uVar9 = FUN_140c02f50(local_res18,&local_88);
          local_68 = (longlong *)CONCAT44(DAT_14686bb18._4_4_,(undefined4)DAT_14686bb18);
          FUN_14217e740(local_60);
          FUN_140643170(local_60,uVar9);
          iVar2 = (int)plVar16[1];
          *(int *)(plVar16 + 1) = iVar2 + 1;
          if (*(int *)((longlong)plVar16 + 0xc) < iVar2 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar16,iVar2);
          }
          lVar7 = *plVar16;
          *(longlong **)(lVar7 + (longlong)iVar2 * 0x28) = local_68;
          FUN_14217e5b0(lVar7 + (longlong)iVar2 * 0x28 + 8,local_60);
          FUN_14217f430(local_60);
          if (local_88 != 0.0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c1ca40 FUN_140c1ca40 body=1638 status=ok
// SIG undefined FUN_140c1ca40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c1ca40(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  undefined8 local_res10;
  char local_res18;
  char local_res19;
  undefined4 local_res20 [2];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170 [2];
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 *local_150;
  longlong *local_148;
  longlong local_140 [2];
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8 [4];
  longlong *local_d8;
  undefined1 local_d0 [32];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  
  puVar3 = (undefined4 *)*param_2;
  if (0 < (int)puVar3[0x22]) {
    puVar9 = *(undefined4 **)(puVar3 + 0x20);
    if (*(undefined4 **)(puVar3 + 0x20) == (undefined4 *)0x0) {
      puVar9 = puVar3;
    }
    if (puVar9 != (undefined4 *)0x0) {
      if (*(short *)(puVar9 + 6) == 0x28) {
        plVar5 = (longlong *)FUN_1407ba9a0();
      }
      else {
        if (*(short *)(puVar9 + 6) != 0x27) {
          return;
        }
        local_b0 = *puVar9;
        uStack_ac = puVar9[1];
        uStack_a8 = puVar9[2];
        uStack_a4 = puVar9[3];
        plVar5 = (longlong *)FHardwareCursor::GetHandle(&local_b0);
      }
      if (plVar5 != (longlong *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686bb78) &&
           (_Init_thread_header(&DAT_14686bb78), DAT_14686bb78 == -1)) {
          if ((DAT_14686af58 == '\0') &&
             (puVar8 = (undefined8 *)FUN_140c12190(), puVar8 != &DAT_14686af10)) {
            DAT_14686af10._0_4_ = *(undefined4 *)puVar8;
            DAT_14686af10._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
            uRam000000014686af18 = *(undefined4 *)(puVar8 + 1);
            uRam000000014686af1c = *(undefined4 *)((longlong)puVar8 + 0xc);
            _DAT_14686af20 = *(undefined4 *)(puVar8 + 2);
            uRam000000014686af24 = *(undefined4 *)((longlong)puVar8 + 0x14);
            uRam000000014686af28 = *(undefined4 *)(puVar8 + 3);
            uRam000000014686af2c = *(undefined4 *)((longlong)puVar8 + 0x1c);
            _DAT_14686af30 = *(undefined4 *)(puVar8 + 4);
            uRam000000014686af34 = *(undefined4 *)((longlong)puVar8 + 0x24);
            uRam000000014686af38 = *(undefined4 *)(puVar8 + 5);
            uRam000000014686af3c = *(undefined4 *)((longlong)puVar8 + 0x2c);
            _DAT_14686af40 = *(undefined4 *)(puVar8 + 6);
            uRam000000014686af44 = *(undefined4 *)((longlong)puVar8 + 0x34);
            uRam000000014686af48 = *(undefined4 *)(puVar8 + 7);
            uRam000000014686af4c = *(undefined4 *)((longlong)puVar8 + 0x3c);
            DAT_14686af50 = (longlong *)puVar8[8];
            DAT_14686af58 = '\x01';
          }
          _DAT_14686bb30 = (undefined4)DAT_14686af10;
          uRam000000014686bb34 = DAT_14686af10._4_4_;
          _DAT_14686bb38 = uRam000000014686af18;
          uRam000000014686bb3c = uRam000000014686af1c;
          _DAT_14686bb40 = _DAT_14686af20;
          uRam000000014686bb44 = uRam000000014686af24;
          _DAT_14686bb48 = uRam000000014686af28;
          uRam000000014686bb4c = uRam000000014686af2c;
          _DAT_14686bb50 = _DAT_14686af30;
          uRam000000014686bb54 = uRam000000014686af34;
          _DAT_14686bb58 = uRam000000014686af38;
          uRam000000014686bb5c = uRam000000014686af3c;
          _DAT_14686bb60 = _DAT_14686af40;
          uRam000000014686bb64 = uRam000000014686af44;
          _DAT_14686bb68 = uRam000000014686af48;
          uRam000000014686bb6c = uRam000000014686af4c;
          DAT_14686bb70 = DAT_14686af50;
          _Init_thread_footer(&DAT_14686bb78);
        }
        lVar6 = FUN_140c15a40(param_2[2],*(undefined8 *)(*param_2 + 0x90));
        if (*(int *)(lVar6 + 0x20) == 0) {
          plVar13 = (longlong *)FUN_140aa2bd0(lVar6);
        }
        else {
          lVar12 = *(longlong *)(lVar6 + 0x18);
          if (*(longlong *)(lVar6 + 0x18) == 0) {
            lVar12 = lVar6 + 8;
          }
          plVar13 = (longlong *)(lVar12 + (longlong)(*(int *)(lVar6 + 0x20) + -1) * 0x10);
        }
        FUN_140dbc5d0(plVar5 + 0xbe,&local_res18);
        pwVar14 = L"";
        if (local_res19 == '\0') {
          pwVar15 = L"Public";
        }
        else if (local_res19 == '\x01') {
          pwVar15 = L"InviteOnly";
        }
        else if (local_res19 == '\x02') {
          pwVar15 = L"FriendsOnly";
        }
        else {
          pwVar15 = L"";
        }
        if (local_res18 == '\0') {
          pwVar14 = L"Offline";
        }
        else if (local_res18 == '\x01') {
          pwVar14 = L"Lan";
        }
        else if (local_res18 == '\x02') {
          pwVar14 = L"Online";
        }
        FString::PrintfImpl(local_140,L"%s %s",pwVar14,pwVar15);
        FUN_140bfb1d0(plVar13,&DAT_14686bb48,local_140);
        if (local_140[0] != 0) {
          FMemory::Free();
        }
        local_158 = FUN_140c01060(&local_res10);
        FUN_140bfb0b0(plVar13,&DAT_14686bb50,&local_158);
        lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
        if ((lVar6 != 0) && (lVar6 = UWorld::GetGameState<APVPGameState>(lVar6), lVar6 != 0)) {
          lVar12 = *(longlong *)(lVar6 + 0x558);
          local_168 = lVar12;
          local_160 = lVar12;
          FUN_140bba620(plVar5,&local_150,0);
          if (local_150 != (undefined8 *)0x0) {
            plVar11 = *(longlong **)(lVar6 + 0x470);
            plVar5 = plVar11 + *(int *)(lVar6 + 0x478);
            for (; lVar16 = lVar12, plVar11 != plVar5; plVar11 = plVar11 + 1) {
              cVar4 = (**(code **)*local_150)(local_150,*(undefined8 *)(*plVar11 + 0x4b8));
              if (cVar4 != '\0') {
                lVar16 = *plVar11;
                local_160 = lVar16;
                break;
              }
            }
            local_168 = lVar12;
            if (lVar12 == 0) {
              local_168 = lVar16;
            }
          }
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = local_168;
          FUN_1421923f0(local_80,DAT_14686add8,local_118);
          FUN_140bfb300(plVar13,&DAT_14686bb38,local_80);
          FUN_14217f430(local_80);
          FUN_14217f430(local_118);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = local_160;
          FUN_1421923f0(local_60,DAT_14686add8,local_f8);
          FUN_140bfb300(plVar13,&DAT_14686bb40,local_60);
          FUN_14217f430(local_60);
          FUN_14217f430(local_f8);
          local_res20[0] = FUN_140cb6340(lVar6);
          FUN_140bfa9d0(plVar13,&DAT_14686bb58,local_res20);
          local_170[0] = FUN_140cb6860(lVar6);
          FUN_140bfa9d0(plVar13,&DAT_14686bb60,local_170);
          local_178 = 1;
          local_174 = 2;
          FText::FText(local_130);
          FUN_140cb6940(lVar6,&local_178);
          FUN_140c13190(&local_178,local_130);
          FUN_140bfa9d0(plVar13,&DAT_14686bb68,&local_178);
          uVar7 = FText::ToString(local_130);
          local_res10 = 0;
          if ((*DAT_14686bb70 != 0) && (cVar4 = FUN_1407ce010(DAT_14686bb70 + 1), cVar4 != '\0')) {
            plVar11 = (longlong *)*plVar13;
            plVar5 = plVar11 + (longlong)(int)plVar13[1] * 5;
            if (plVar11 != plVar5) {
              do {
                if ((*(longlong *)*plVar11 == *DAT_14686bb70) &&
                   (*(longlong *)(((longlong *)*plVar11)[1] + 0x28) ==
                    *(longlong *)(DAT_14686bb70[1] + 0x28))) {
                  FUN_14217e740(local_a0);
                  FUN_140643170(local_a0,uVar7);
                  FUN_14217f450(plVar11 + 1,local_a0);
                  puVar10 = local_a0;
                  goto LAB_140c1cf0c;
                }
                plVar11 = plVar11 + 5;
              } while (plVar11 != plVar5);
            }
            local_d8 = DAT_14686bb70;
            FUN_14217e740(local_d0);
            FUN_140643170(local_d0,uVar7);
            iVar2 = (int)plVar13[1];
            *(int *)(plVar13 + 1) = iVar2 + 1;
            if (*(int *)((longlong)plVar13 + 0xc) < iVar2 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar13,iVar2);
            }
            puVar8 = (undefined8 *)(*plVar13 + (longlong)iVar2 * 0x28);
            *puVar8 = local_d8;
            FUN_14217e5b0(puVar8 + 1,local_d0);
            puVar10 = local_d0;
LAB_140c1cf0c:
            FUN_14217f430(puVar10);
          }
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_128 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar1 = (int *)((longlong)local_128 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_128 + 8))(local_128,1);
              }
            }
          }
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_148 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
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
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c1d0b0 FUN_140c1d0b0 body=2613 status=ok
// SIG undefined FUN_140c1d0b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c1d0b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong **pplVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 local_res10;
  uint local_res18 [2];
  longlong *local_res20;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong *local_b8;
  undefined1 local_b0 [32];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  longlong *local_70 [3];
  short local_58;
  
  puVar15 = (undefined4 *)*param_2;
  plVar19 = (longlong *)0x0;
  local_res10 = plVar19;
  if (0 < (int)puVar15[0x22]) {
    puVar16 = *(undefined4 **)(puVar15 + 0x20);
    if (*(undefined4 **)(puVar15 + 0x20) == (undefined4 *)0x0) {
      puVar16 = puVar15;
    }
    if (puVar16 != (undefined4 *)0x0) {
      if (*(short *)(puVar16 + 6) == 0x28) {
        local_res10 = (longlong *)FUN_1407ba9a0();
      }
      else if (*(short *)(puVar16 + 6) == 0x27) {
        local_90 = *puVar16;
        uStack_8c = puVar16[1];
        uStack_88 = puVar16[2];
        uStack_84 = puVar16[3];
        local_res10 = (longlong *)FHardwareCursor::GetHandle(&local_90);
      }
    }
  }
  if (local_res10 == (longlong *)0x0) {
    return;
  }
  FUN_14217e740(&local_d8);
  FUN_142194380(&local_d8,0x28,0,0,0);
  local_d8 = local_res10;
  FUN_1421923f0(local_70,DAT_14686adf0,&local_d8);
  FUN_14217f430(&local_d8);
  if ((local_58 != 0x28) || (local_res10 = local_70[0], local_70[0] == (longlong *)0x0))
  goto LAB_140c1d920;
  lVar7 = FUN_1429d7ab0();
  if ((*(int *)(local_70[0][2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(local_70[0][2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140c1d920;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar7 + 0x38) < DAT_14686ba80) &&
     (_Init_thread_header(&DAT_14686ba80), DAT_14686ba80 == -1)) {
    if ((DAT_14686aed8 == '\0') &&
       (puVar14 = (undefined8 *)FUN_140c122c0(), puVar14 != &DAT_14686ae68)) {
      DAT_14686ae68._0_4_ = *(undefined4 *)puVar14;
      DAT_14686ae68._4_4_ = *(undefined4 *)((longlong)puVar14 + 4);
      uRam000000014686ae70 = *(undefined4 *)(puVar14 + 1);
      uRam000000014686ae74 = *(undefined4 *)((longlong)puVar14 + 0xc);
      _DAT_14686ae78 = *(undefined4 *)(puVar14 + 2);
      uRam000000014686ae7c = *(undefined4 *)((longlong)puVar14 + 0x14);
      uRam000000014686ae80 = *(undefined4 *)(puVar14 + 3);
      uRam000000014686ae84 = *(undefined4 *)((longlong)puVar14 + 0x1c);
      _DAT_14686ae88 = *(undefined4 *)(puVar14 + 4);
      uRam000000014686ae8c = *(undefined4 *)((longlong)puVar14 + 0x24);
      uRam000000014686ae90 = *(undefined4 *)(puVar14 + 5);
      uRam000000014686ae94 = *(undefined4 *)((longlong)puVar14 + 0x2c);
      _DAT_14686ae98 = *(undefined4 *)(puVar14 + 6);
      uRam000000014686ae9c = *(undefined4 *)((longlong)puVar14 + 0x34);
      uRam000000014686aea0 = *(undefined4 *)(puVar14 + 7);
      uRam000000014686aea4 = *(undefined4 *)((longlong)puVar14 + 0x3c);
      _DAT_14686aea8 = *(undefined4 *)(puVar14 + 8);
      uRam000000014686aeac = *(undefined4 *)((longlong)puVar14 + 0x44);
      uRam000000014686aeb0 = *(undefined4 *)(puVar14 + 9);
      uRam000000014686aeb4 = *(undefined4 *)((longlong)puVar14 + 0x4c);
      _DAT_14686aeb8 = *(undefined4 *)(puVar14 + 10);
      uRam000000014686aebc = *(undefined4 *)((longlong)puVar14 + 0x54);
      uRam000000014686aec0 = *(undefined4 *)(puVar14 + 0xb);
      uRam000000014686aec4 = *(undefined4 *)((longlong)puVar14 + 0x5c);
      _DAT_14686aec8 = *(undefined4 *)(puVar14 + 0xc);
      uRam000000014686aecc = *(undefined4 *)((longlong)puVar14 + 100);
      uRam000000014686aed0 = *(undefined4 *)(puVar14 + 0xd);
      uRam000000014686aed4 = *(undefined4 *)((longlong)puVar14 + 0x6c);
      DAT_14686aed8 = '\x01';
    }
    DAT_14686ba10._0_4_ = (undefined4)DAT_14686ae68;
    DAT_14686ba10._4_4_ = DAT_14686ae68._4_4_;
    uRam000000014686ba18 = uRam000000014686ae70;
    uRam000000014686ba1c = uRam000000014686ae74;
    _DAT_14686ba20 = _DAT_14686ae78;
    uRam000000014686ba24 = uRam000000014686ae7c;
    uRam000000014686ba28 = uRam000000014686ae80;
    uRam000000014686ba2c = uRam000000014686ae84;
    _DAT_14686ba30 = _DAT_14686ae88;
    uRam000000014686ba34 = uRam000000014686ae8c;
    uRam000000014686ba38 = uRam000000014686ae90;
    uRam000000014686ba3c = uRam000000014686ae94;
    _DAT_14686ba40 = _DAT_14686ae98;
    uRam000000014686ba44 = uRam000000014686ae9c;
    _DAT_14686ba48 = uRam000000014686aea0;
    uRam000000014686ba4c = uRam000000014686aea4;
    _DAT_14686ba50 = _DAT_14686aea8;
    uRam000000014686ba54 = uRam000000014686aeac;
    _DAT_14686ba58 = uRam000000014686aeb0;
    uRam000000014686ba5c = uRam000000014686aeb4;
    _DAT_14686ba60 = _DAT_14686aeb8;
    uRam000000014686ba64 = uRam000000014686aebc;
    _DAT_14686ba68 = uRam000000014686aec0;
    uRam000000014686ba6c = uRam000000014686aec4;
    DAT_14686ba70._0_4_ = _DAT_14686aec8;
    DAT_14686ba70._4_4_ = uRam000000014686aecc;
    _DAT_14686ba78 = uRam000000014686aed0;
    uRam000000014686ba7c = uRam000000014686aed4;
    _Init_thread_footer(&DAT_14686ba80);
  }
  if ((*(int *)(lVar7 + 0x38) < DAT_14686bab0) &&
     (_Init_thread_header(&DAT_14686bab0), DAT_14686bab0 == -1)) {
    if ((DAT_14686af08 == '\0') &&
       (puVar15 = (undefined4 *)FUN_140c12200(), puVar15 != (undefined4 *)&DAT_14686aee0)) {
      _DAT_14686aee0 = *puVar15;
      uRam000000014686aee4 = puVar15[1];
      uRam000000014686aee8 = puVar15[2];
      uRam000000014686aeec = puVar15[3];
      _DAT_14686aef0 = puVar15[4];
      uRam000000014686aef4 = puVar15[5];
      uRam000000014686aef8 = puVar15[6];
      uRam000000014686aefc = puVar15[7];
      DAT_14686af00 = *(undefined8 *)(puVar15 + 8);
      uVar22 = (undefined4)DAT_14686af00;
      uVar21 = (undefined4)((ulonglong)DAT_14686af00 >> 0x20);
      DAT_14686af08 = '\x01';
    }
    else {
      uVar22 = (undefined4)DAT_14686af00;
      uVar21 = (undefined4)((ulonglong)DAT_14686af00 >> 0x20);
    }
    _DAT_14686baa8 = CONCAT44(uVar21,uVar22);
    _DAT_14686ba88 = _DAT_14686aee0;
    uRam000000014686ba8c = uRam000000014686aee4;
    uRam000000014686ba90 = uRam000000014686aee8;
    uRam000000014686ba94 = uRam000000014686aeec;
    _DAT_14686ba98 = _DAT_14686aef0;
    uRam000000014686ba9c = uRam000000014686aef4;
    uRam000000014686baa0 = uRam000000014686aef8;
    uRam000000014686baa4 = uRam000000014686aefc;
    _Init_thread_footer(&DAT_14686bab0);
  }
  plVar8 = (longlong *)FUN_140c15790(param_2);
  plVar11 = (longlong *)local_70[0][0x92];
  if (plVar11 == (longlong *)0x0) {
LAB_140c1d27b:
    plVar11 = plVar19;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140c1d27b;
  }
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(local_70[0][2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(local_70[0][2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  plVar12 = plVar19;
  if (bVar2) {
    plVar12 = local_70[0];
  }
  local_res20 = plVar12;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (plVar12 == (longlong *)0x0) {
    uVar9 = UScrollBox::GetPrivateStaticClass();
    lVar7 = (**(code **)(*local_70[0] + 0x628))(local_70[0],uVar9);
  }
  else {
    lVar7 = plVar12[0x122];
  }
  uVar22 = 0;
  if (lVar7 != 0) {
    uVar21 = FUN_142d19870(lVar7);
    local_res10._0_4_ = uVar21;
    FUN_140bfab30(plVar8,&DAT_14686ba40,&local_res10);
    local_res10._0_4_ = FUN_142d1b990(lVar7);
    FUN_140bfab30(plVar8,&DAT_14686ba48,&local_res10);
    local_res10 = (longlong *)((ulonglong)local_res10._4_4_ << 0x20);
    local_res18[0] = 0;
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,0xff);
    local_d0 = 0;
    local_c8 = 0;
    cVar3 = FUN_142d1bf20(lVar7,&local_d8);
    if ((cVar3 != '\0') && (cVar3 = FUN_142d52a00(&local_d8), cVar3 != '\0')) {
      uVar9 = FUN_142d52a20(&local_d8);
      uVar9 = FArchive::operator<<(uVar9);
      uVar21 = FUN_142d5fed0(uVar9);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar21);
      uVar9 = FUN_142d52a20(&local_d8);
      lVar7 = FArchive::operator<<(uVar9);
      local_res18[0] = *(uint *)(lVar7 + 0x20);
    }
    FUN_140bfab30(plVar8,&DAT_14686ba50,&local_res10);
    FUN_140bfab30(plVar8,&DAT_14686ba58,local_res18);
  }
  if (plVar12 == (longlong *)0x0) {
    uVar9 = FUN_142dfdf30();
    plVar12 = (longlong *)(**(code **)(*local_70[0] + 0x628))(local_70[0],uVar9);
  }
  else {
    plVar12 = (longlong *)plVar12[0x21b];
  }
  if (plVar12 != (longlong *)0x0) {
    uVar21 = (**(code **)(*plVar12 + 0x400))(plVar12);
    local_res10._0_4_ = uVar21;
    FUN_140bfa9d0(plVar8,&DAT_14686ba60,&local_res10);
    uVar21 = (**(code **)(*plVar12 + 0x408))(plVar12);
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar21);
    FUN_140bfa9d0(plVar8,&DAT_14686ba68,&local_res10);
  }
  uVar5 = 0;
  uVar9 = UCircularThrobber::GetPrivateStaticClass();
  lVar7 = (**(code **)(*local_70[0] + 0x628))(local_70[0],uVar9);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x180) != 0)) {
    uVar5 = *(undefined1 *)(*(longlong *)(lVar7 + 0x180) + 0x6a);
  }
  plVar12 = (longlong *)CONCAT44(DAT_14686ba70._4_4_,(undefined4)DAT_14686ba70);
  local_res10 = (longlong *)0x0;
  if (*plVar12 == 0) {
LAB_140c1d495:
    bVar2 = false;
  }
  else {
    cVar3 = FUN_1407ce010();
    plVar12 = (longlong *)CONCAT44(DAT_14686ba70._4_4_,(undefined4)DAT_14686ba70);
    if (cVar3 == '\0') goto LAB_140c1d495;
    bVar2 = true;
  }
  if (bVar2) {
    plVar18 = (longlong *)*plVar8;
    plVar1 = plVar18 + (longlong)(int)plVar8[1] * 5;
    if (plVar18 != plVar1) {
      do {
        if ((*(longlong *)*plVar18 == *plVar12) &&
           (*(longlong *)(((longlong *)*plVar18)[1] + 0x28) == *(longlong *)(plVar12[1] + 0x28))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_14217e740(&local_d8);
          FUN_142194380(&local_d8,0x1d,0,1,0);
          local_d8 = (longlong *)CONCAT71(local_d8._1_7_,uVar5);
          FUN_14217f450(plVar18 + 1,&local_d8);
          pplVar17 = &local_d8;
          goto LAB_140c1d54f;
        }
        plVar18 = plVar18 + 5;
      } while (plVar18 != plVar1);
    }
    local_b8 = plVar12;
    FUN_14217e740(local_b0);
    FUN_142194380(local_b0,0x1d,0,1,0);
    iVar6 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar6 + 1;
    local_b0[0] = uVar5;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar6);
    }
    lVar10 = *plVar8;
    lVar7 = (longlong)iVar6 * 5 + 1;
    *(longlong **)(lVar10 + -8 + lVar7 * 8) = local_b8;
    FUN_14217e5b0(lVar10 + lVar7 * 8,local_b0);
    pplVar17 = (longlong **)local_b0;
LAB_140c1d54f:
    FUN_14217f430(pplVar17);
  }
  FUN_14217e740(&local_d8);
  FUN_142194380(&local_d8,0x28,0,0,0);
  local_d8 = local_res20;
  FUN_1421923f0(&local_b8,DAT_14686adc0,&local_d8);
  FUN_140bfb300(plVar8,&DAT_14686ba78,&local_b8);
  FUN_14217f430(&local_b8);
  FUN_14217f430(&local_d8);
  if (plVar11 != (longlong *)0x0) {
    if (((*(uint *)((longlong)plVar11 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar3 = (**(code **)(*plVar11 + 0x768))(plVar11), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = plVar11[0x8c];
      if (lVar7 != 0) {
        lVar10 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar22 = *(undefined4 *)(lVar7 + 0x5d0);
        }
      }
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar22);
      FUN_140bfab30(plVar8,&DAT_14686baa8,&local_res10);
    }
  }
  uVar9 = FUN_1430a8880();
  plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(local_70[0],uVar9);
  if (plVar11 != (longlong *)0x0) {
    lVar7 = *param_2;
    if (1 < *(int *)(lVar7 + 0x88)) {
      lVar10 = *(longlong *)(lVar7 + 0x80);
      if (*(longlong *)(lVar7 + 0x80) == 0) {
        lVar10 = lVar7;
      }
      if (lVar10 != -0x20) {
        bVar4 = FUN_142194a40();
        plVar19 = (longlong *)(ulonglong)bVar4;
      }
    }
    uVar20 = 0;
    iVar6 = (**(code **)(*plVar11 + 0xe8))(plVar11);
    if (0 < iVar6) {
      do {
        plVar12 = (longlong *)(**(code **)(*plVar11 + 0xf0))(plVar11,uVar20 & 0xff);
        if (plVar12 != (longlong *)0x0) {
          local_res18[0] = uVar20;
          uVar9 = FUN_140c16200(&local_d8,plVar12);
          uVar13 = FUN_140c000b0(local_res18,local_80,L"desc");
          FUN_140bfb1d0(plVar8,uVar13,uVar9);
          if (local_d8 != (longlong *)0x0) {
            FMemory::Free();
          }
          if ((char)plVar19 != '\0') {
            uVar5 = FUN_14307ee20(plVar12,1);
            local_res10 = (longlong *)CONCAT71(local_res10._1_7_,uVar5);
            uVar9 = FUN_140c000b0(local_res18,local_78,L"is_ads");
            FUN_140bfac90(plVar8,uVar9,&local_res10);
            uVar5 = (**(code **)(*plVar12 + 0x858))(plVar12);
            plVar12 = (longlong *)FUN_140c000b0(local_res18,&local_90,L"use_mode");
            local_res20 = (longlong *)0x0;
            if ((*(longlong *)*plVar12 == 0) || (cVar3 = FUN_1407ce010(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              plVar18 = (longlong *)*plVar8;
              plVar1 = plVar18 + (longlong)(int)plVar8[1] * 5;
              if (plVar18 != plVar1) {
                do {
                  if ((*(longlong *)*plVar18 == *(longlong *)*plVar12) &&
                     (*(longlong *)(((longlong *)*plVar18)[1] + 0x28) ==
                      *(longlong *)(((longlong *)*plVar12)[1] + 0x28))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) goto LAB_140c1d833;
                  plVar18 = plVar18 + 5;
                } while (plVar18 != plVar1);
              }
              plVar18 = (longlong *)0x0;
LAB_140c1d833:
              if (plVar18 == (longlong *)0x0) {
                local_b8 = (longlong *)*plVar12;
                FUN_14217e740(local_b0);
                FUN_142194380(local_b0,0x1d,0,1,0);
                iVar6 = (int)plVar8[1];
                *(int *)(plVar8 + 1) = iVar6 + 1;
                local_b0[0] = uVar5;
                if (*(int *)((longlong)plVar8 + 0xc) < iVar6 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar6);
                }
                lVar7 = *plVar8;
                *(longlong **)(lVar7 + (longlong)iVar6 * 0x28) = local_b8;
                FUN_14217e5b0(lVar7 + (longlong)iVar6 * 0x28 + 8,local_b0);
                pplVar17 = (longlong **)local_b0;
              }
              else {
                FUN_14217e740(&local_b8);
                FUN_142194380(&local_b8,0x1d,0,1,0);
                local_b8 = (longlong *)CONCAT71(local_b8._1_7_,uVar5);
                FUN_14217f450(plVar18 + 1,&local_b8);
                pplVar17 = &local_b8;
              }
              FUN_14217f430(pplVar17);
            }
          }
        }
        uVar20 = uVar20 + 1;
        iVar6 = (**(code **)(*plVar11 + 0xe8))(plVar11);
      } while ((int)uVar20 < iVar6);
    }
  }
LAB_140c1d920:
  FUN_14217f430(local_70);
  return;
}



// FUNCTION 140c1daf0 FUN_140c1daf0 body=1362 status=ok
// SIG undefined FUN_140c1daf0(void)

void FUN_140c1daf0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 local_res10 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  
  FUN_142d86f10();
  lVar4 = AActor::GetWorldSettings(param_1);
  uVar6 = 0;
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x658), lVar4 != 0)) {
    lVar5 = FUN_141437aa0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar4 + 0x44) != '\0')) goto LAB_140c1dbf5;
  }
  if (((param_2[0x56] == 0) ||
      (((lVar4 = *(longlong *)(param_2[0x56] + 0x118), lVar4 == 0 || (param_2[5] == 0)) ||
       (*(longlong *)(lVar4 + 0x150) != *(longlong *)(param_2[5] + 0x150))))) &&
     (lVar4 = FUN_142d19640(param_2), lVar4 != 0)) {
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
    if (bVar1) {
      if (param_2[0x56] != 0) {
        uVar6 = *(undefined8 *)(param_2[0x56] + 0x118);
      }
      FUN_140a2d370(lVar4,uVar6);
    }
  }
LAB_140c1dbf5:
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_14686b448) && (_Init_thread_header(&DAT_14686b448), DAT_14686b448 == -1)) {
    puVar10 = (undefined8 *)FName::FName(local_res10,L"Population.Badass",1);
    FGameplayTag::RequestGameplayTag(&DAT_14686b440,*puVar10,1);
    _Init_thread_footer(&DAT_14686b448);
  }
  if ((*piVar11 < DAT_14686b458) && (_Init_thread_header(&DAT_14686b458), DAT_14686b458 == -1)) {
    puVar10 = (undefined8 *)FName::FName(local_res10,L"Population.Boss",1);
    FGameplayTag::RequestGameplayTag(&DAT_14686b450,*puVar10,1);
    _Init_thread_footer(&DAT_14686b458);
  }
  if ((param_2[0x56] != 0) && (lVar4 = *(longlong *)(param_2[0x56] + 0x118), lVar4 != 0)) {
    lVar5 = FUN_1413f82e0();
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
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar6,&local_48);
      iVar3 = (int)local_40;
      while( true ) {
        if ((iVar3 < 0) || ((int)local_48[1] <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar5 = FWeakObjectPtr::Get();
        if (lVar5 != 0) {
          lVar7 = FUN_14145f370();
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
            cVar2 = (**(code **)(*(longlong *)(lVar4 + 0x8c0) + 0x18))(lVar4 + 0x8c0,DAT_14686b440);
            if (cVar2 != '\0') {
              FUN_140d02ec0(lVar5);
            }
            cVar2 = (**(code **)(*(longlong *)(lVar4 + 0x8c0) + 0x18))(lVar4 + 0x8c0,DAT_14686b450);
            if (cVar2 != '\0') {
              FUN_140d02ed0();
            }
          }
        }
        iVar3 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar3);
      }
    }
  }
  uVar8 = FUN_142d19640(param_2);
  if ((uVar8 != 0) && (lVar4 = *(longlong *)(uVar8 + 0x488), lVar4 != 0)) {
    lVar5 = AGTutorialStepVideo::GetPrivateStaticClass();
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
      lVar4 = *(longlong *)(lVar4 + 0x538);
    }
    else {
      lVar4 = *(longlong *)(uVar8 + 0x488);
    }
    if (lVar4 != 0) {
      lVar5 = FUN_14148cad0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar4 != 0)) {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        (**(code **)(*param_2 + 0x28))(param_2,&local_48);
        lVar5 = FUN_142d84360(param_1);
        if (lVar5 != 0) {
          FUN_141223c50(lVar4,&local_38,0);
          puVar10 = local_38 + local_30;
          for (puVar15 = local_38; puVar15 != puVar10; puVar15 = puVar15 + 1) {
            uVar14 = 0;
            uVar9 = (**(code **)(*(longlong *)*puVar15 + 0x670))();
            if (uVar9 == 0) {
LAB_140c1ded6:
              uVar9 = uVar14;
            }
            else {
              lVar4 = FUN_1429e18b0();
              if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_140c1ded6;
            }
            if (uVar9 != uVar8) {
              uVar13 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48))
                       >> 3;
              if (local_48 + (int)local_40 < local_48) {
                uVar13 = 0;
              }
              plVar12 = local_48;
              if (uVar13 != 0) {
                do {
                  lVar4 = *plVar12;
                  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x61) == '\0')) {
                    FUN_142dd18b0(lVar5,uVar9,lVar4,1);
                  }
                  uVar14 = uVar14 + 1;
                  plVar12 = plVar12 + 1;
                } while (uVar14 != uVar13);
              }
            }
          }
          if (local_38 != (undefined8 *)0x0) {
            FMemory::Free(local_38);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c1e050 FUN_140c1e050 body=1136 status=ok
// SIG undefined FUN_140c1e050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c1e050(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  longlong local_res18;
  longlong local_res20;
  undefined8 *local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188 [3];
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined1 local_158 [4];
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_f8 [88];
  undefined1 local_a0 [104];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2[0x56] == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_2[0x56] + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_1429d7ab0();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  cVar4 = (**(code **)(*plVar1 + 0x780))(plVar1);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = plVar1[0x92];
  plVar11 = (longlong *)0x0;
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar9 = *(longlong **)(lVar6 + 0x848), plVar9 != (longlong *)0x0)) {
      local_208 = plVar9;
      lVar6 = FUN_1413f82e0();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_140c1e18a;
    }
  }
  local_208 = (longlong *)0x0;
  plVar9 = plVar11;
LAB_140c1e18a:
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  FUN_140b80ed0(param_1,0,&local_218);
  if (1 < (int)local_210) {
    uVar13 = (**(code **)(*param_2 + 0x18))(param_2,0);
    plVar10 = (longlong *)param_2[0xb];
    local_1f8 = param_2[0x52];
    if (plVar10 == (longlong *)0x0) {
      local_res18 = 0;
    }
    else {
      local_res18 = plVar10[0x1f];
      if (local_res18 == 0) {
        (**(code **)(*plVar10 + 0x368))(plVar10);
        local_res18 = plVar10[0x1f];
      }
    }
    plVar10 = (longlong *)param_2[10];
    if (plVar10 == (longlong *)0x0) {
      local_res20 = 0;
    }
    else {
      local_res20 = plVar10[0x1f];
      if (local_res20 == 0) {
        (**(code **)(*plVar10 + 0x368))(plVar10);
        local_res20 = plVar10[0x1f];
      }
    }
    local_200 = param_2[9];
    local_14c = DAT_1468b5d98;
    local_140 = DAT_1468b5d98;
    local_110 = DAT_1468b5d98;
    local_158[0] = 0;
    local_154 = _DAT_1468b5d90;
    local_148 = _DAT_1468b5d90;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = _DAT_1468b5d90;
    local_10c = 0;
    FUN_142d1f140(local_158,param_2);
    plVar10 = (longlong *)
              ((ulonglong)((longlong)(local_218 + (int)local_210) + (7 - (longlong)local_218)) >> 3)
    ;
    if (local_218 + (int)local_210 < local_218) {
      plVar10 = plVar11;
    }
    puVar12 = local_218;
    if (plVar10 != (longlong *)0x0) {
      do {
        plVar2 = (longlong *)*puVar12;
        if ((((plVar2 != (longlong *)0x0) && (plVar1 != plVar2)) && (plVar9 != plVar2)) &&
           ((plVar2[0x121] != 0 && (iVar5 = FUN_142dec940(plVar2[0x121],plVar1), iVar5 == 0)))) {
          lVar6 = param_2[0x56];
          local_1f0 = FUN_140a7add0(local_f8,local_158);
          puVar8 = (undefined1 *)FUN_140a7add0(local_a0,local_1f0);
          local_188[0] = 0;
          local_188[1] = 0;
          local_16c = 0;
          local_1d8 = local_res18;
          local_1d0 = local_res20;
          local_1c8 = local_200;
          local_1c0 = local_1f8;
          local_1b8 = *puVar8;
          local_1ac = *(undefined4 *)(puVar8 + 0xc);
          local_1a0 = *(undefined4 *)(puVar8 + 0x18);
          local_198 = *(undefined8 *)(puVar8 + 0x20);
          local_188[2] = _DAT_1468b5d90;
          local_1b4 = *(undefined8 *)(puVar8 + 4);
          local_190 = *(undefined8 *)(puVar8 + 0x28);
          local_1a8 = *(undefined8 *)(puVar8 + 0x10);
          local_170 = DAT_1468b5d98;
          local_1e8 = lVar6;
          local_1e0 = uVar13;
          FUN_1408e22e0(local_188,puVar8 + 0x30);
          local_188[2] = *(longlong *)(puVar8 + 0x40);
          local_170 = *(undefined4 *)(puVar8 + 0x48);
          local_16c = *(undefined4 *)(puVar8 + 0x4c);
          local_168 = puVar8[0x50];
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (plVar2 + 0x4a4,&local_1e8);
          if (local_188[0] != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(puVar8 + 0x30) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(local_1f0 + 0x30) != 0) {
            FMemory::Free();
          }
        }
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        plVar9 = local_208;
        puVar12 = puVar12 + 1;
      } while (plVar11 != plVar10);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
  }
  if (local_218 != (undefined8 *)0x0) {
    FMemory::Free(local_218);
  }
  return;
}



// FUNCTION 140c1e4c0 FUN_140c1e4c0 body=2605 status=ok
// SIG undefined FUN_140c1e4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c1e4c0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_298 [32];
  longlong **local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  longlong *local_258;
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined2 *local_228;
  int local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  longlong *local_1d0 [2];
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  longlong local_150 [3];
  longlong local_138;
  undefined8 local_130;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  int local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_1c0 = 0;
  local_1e0 = param_2;
  FUN_140c136e0(&local_198,0);
  plVar7 = local_198;
  if (local_198 != (longlong *)0x0) {
    local_188 = 0;
    local_180 = 0;
    (**(code **)(*local_198 + 0x20))(local_198,*param_2,&local_188);
    local_258 = (longlong *)0x0;
    local_250 = 0;
    local_238 = (longlong *)0x0;
    local_230 = 0;
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    if (param_3 != 0) {
      puVar5 = (undefined8 *)FUN_140d3b5c0(param_3,*(undefined4 *)(param_3 + 0x140));
      local_1a8 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        local_248 = (longlong *)0x0;
        local_240 = (longlong *)0x1a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
        FGenericPlatformString::Memcpy(local_248,L"Base_P_ChildrenoftheVault",0x34);
        lVar15 = (**(code **)(*param_1 + 0x148))(param_1);
        if (((lVar15 != 0) && (lVar15 = FUN_142f6c9f0(lVar15), lVar15 != 0)) &&
           (lVar15 = FUN_142f5a790(lVar15), lVar15 != 0)) {
          pplVar10 = (longlong **)FUN_142f59860(lVar15,local_1d0);
          if (&local_248 != pplVar10) {
            if (local_248 != (longlong *)0x0) {
              FMemory::Free();
            }
            local_248 = *pplVar10;
            *pplVar10 = (longlong *)0x0;
            local_240 = pplVar10[1];
            pplVar10[1] = (longlong *)0x0;
          }
          if (local_1d0[0] != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        local_278 = &local_1a8;
        local_1a8 = (undefined8 *)0x0;
        local_1a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        (**(code **)(*plVar7 + 8))(plVar7,*param_2,&local_248,&local_98);
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_98);
        uVar3 = local_250;
        lVar15 = (longlong)(int)local_250;
        iVar4 = (int)local_250 + 1;
        local_250 = CONCAT44(local_250._4_4_,iVar4);
        if (local_250._4_4_ < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_258,uVar3 & 0xffffffff);
        }
        plVar9 = local_248;
        plVar16 = local_258 + lVar15 * 2;
        *plVar16 = 0;
        lVar15 = (longlong)(int)local_240;
        *(int *)(plVar16 + 1) = (int)local_240;
        if ((int)local_240 == 0) {
          *(undefined4 *)((longlong)plVar16 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (plVar16,(ulonglong)local_240 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar16,plVar9,lVar15 * 2);
        }
        if (local_248 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      else {
        plVar9 = (longlong *)*puVar5;
        plVar16 = plVar9 + (longlong)*(int *)(puVar5 + 1) * 0xf;
        param_2 = local_1e0;
        local_1d0[0] = plVar9;
        local_1b8 = plVar16;
        if (plVar9 != plVar16) {
          do {
            if ((char)*plVar9 == '\x01') {
              local_1d0[0] = plVar9;
              plVar6 = (longlong *)FUN_140d3b5a0(plVar9,local_168);
              plVar6 = (longlong *)*plVar6;
              if (plVar6 != (longlong *)0x0) {
                local_1e8 = plVar6[0x1f];
                if (local_1e8 == 0) {
                  (**(code **)(*plVar6 + 0x368))(plVar6);
                  local_1e8 = plVar6[0x1f];
                  if (local_1e8 == 0) goto LAB_140c1ebb3;
                }
                FUN_142f59860(local_1e8,&local_1f8);
                plVar14 = local_258 + (longlong)(int)local_250 * 2;
                plVar6 = local_258;
                iVar4 = (int)local_250;
                if (local_258 != plVar14) {
                  do {
                    puVar13 = &DAT_143f3eda8;
                    if (local_1f0 != 0) {
                      puVar13 = local_1f8;
                    }
                    if ((int)plVar6[1] == 0) {
                      puVar11 = &DAT_143f3eda8;
                    }
                    else {
                      puVar11 = (undefined2 *)*plVar6;
                    }
                    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar13);
                    if (iVar4 == 0) {
                      if (local_1f8 != (undefined2 *)0x0) {
                        FMemory::Free();
                      }
                      goto LAB_140c1ebb3;
                    }
                    plVar6 = plVar6 + 2;
                  } while (plVar6 != plVar14);
                  iVar4 = (int)local_250;
                }
                local_250 = CONCAT44(local_250._4_4_,iVar4 + 1);
                if (local_250._4_4_ < iVar4 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_258,iVar4);
                }
                puVar13 = local_1f8;
                plVar7 = local_258 + (longlong)iVar4 * 2;
                *plVar7 = 0;
                lVar15 = (longlong)local_1f0;
                *(int *)(plVar7 + 1) = local_1f0;
                if (local_1f0 == 0) {
                  *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar7,local_1f0,0);
                  _guard_xfg_dispatch_icall_nop((void *)*plVar7,puVar13,lVar15 * 2);
                }
                plVar16 = (longlong *)0x0;
                plVar7 = (longlong *)FUN_140d3bd80(puVar5,local_160);
                if (*plVar7 != 0) {
                  lVar8 = FUN_142f71d80();
                  for (lVar15 = *plVar7; (lVar15 != 0 && (lVar15 != lVar8));
                      lVar15 = *(longlong *)(lVar15 + 0x30)) {
                  }
                }
                plVar7 = (longlong *)FUN_140d3b5a0(plVar9,local_158);
                if (*plVar7 != 0) {
                  lVar8 = FUN_142f71d80();
                  for (lVar15 = *plVar7; (lVar15 != 0 && (lVar15 != lVar8));
                      lVar15 = *(longlong *)(lVar15 + 0x30)) {
                  }
                }
                lVar15 = local_1e8;
                TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                ::Emplace<FString_const_&,int_const_&>(&local_138,&local_1f8,local_1e8 + 0x294);
                lVar8 = FUN_140d3a5b0(plVar9);
                plVar9 = *(longlong **)(lVar15 + 0x230);
                plVar7 = plVar9 + *(int *)(lVar15 + 0x238);
                for (; plVar6 = plVar16, plVar9 != plVar7; plVar9 = plVar9 + 1) {
                  lVar2 = *plVar9;
                  if (lVar2 != 0) {
                    plVar12 = *(longlong **)(lVar2 + 0x28);
                    plVar14 = plVar12 + *(int *)(lVar2 + 0x30);
                    for (; plVar12 != plVar14; plVar12 = plVar12 + 1) {
                      plVar6 = plVar9;
                      if (*plVar12 == lVar8) goto LAB_140c1e7ca;
                    }
                  }
                }
LAB_140c1e7ca:
                bVar17 = plVar6 == (longlong *)0x0;
                local_208 = (longlong *)0x0;
                local_200 = 0;
                local_218 = (longlong *)0x0;
                local_210 = 0;
                plVar7 = *(longlong **)(lVar15 + 0x230);
                local_248 = (longlong *)((longlong)*(int *)(lVar15 + 0x238) & 0x1fffffffffffffff);
                if (plVar7 + *(int *)(lVar15 + 0x238) < plVar7) {
                  local_248 = plVar16;
                }
                if (local_248 != (longlong *)0x0) {
                  do {
                    lVar8 = *plVar7;
                    FUN_142f59bd0(lVar8,&local_228,lVar15);
                    uVar3 = local_200;
                    if ((plVar6 == (longlong *)0x0) || (lVar8 != *plVar6)) {
                      if (!bVar17) {
                        plVar9 = (longlong *)FUN_142f59bd0(lVar8,local_150,lVar15);
                        uVar3 = local_210;
                        lVar15 = (longlong)(int)local_210;
                        iVar4 = (int)local_210 + 1;
                        local_210 = CONCAT44(local_210._4_4_,iVar4);
                        if (local_210._4_4_ < iVar4) {
                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                    (&local_218,uVar3 & 0xffffffff);
                        }
                        plVar14 = local_218 + lVar15 * 2;
                        *plVar14 = 0;
                        *plVar14 = *plVar9;
                        *plVar9 = 0;
                        *(int *)(plVar14 + 1) = (int)plVar9[1];
                        *(undefined4 *)((longlong)plVar14 + 0xc) =
                             *(undefined4 *)((longlong)plVar9 + 0xc);
                        plVar9[1] = 0;
                        if (local_150[0] != 0) {
                          FMemory::Free();
                        }
                      }
                      plVar14 = local_238;
                      plVar12 = local_238 + (longlong)(int)local_230 * 2;
                      for (plVar9 = local_238; plVar9 != plVar12; plVar9 = plVar9 + 2) {
                        puVar13 = &DAT_143f3eda8;
                        if (local_220 != 0) {
                          puVar13 = local_228;
                        }
                        if ((int)plVar9[1] == 0) {
                          puVar11 = &DAT_143f3eda8;
                        }
                        else {
                          puVar11 = (undefined2 *)*plVar9;
                        }
                        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar13);
                        if (iVar4 == 0) {
                          if ((int)((longlong)plVar9 - (longlong)plVar14 >> 4) != -1)
                          goto LAB_140c1ea68;
                          break;
                        }
                      }
                      uVar3 = local_230;
                      lVar15 = (longlong)(int)local_230;
                      iVar4 = (int)local_230 + 1;
                      local_230 = CONCAT44(local_230._4_4_,iVar4);
                      if (local_230._4_4_ < iVar4) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                  (&local_238,uVar3 & 0xffffffff);
                      }
                      plVar9 = local_238 + lVar15 * 2;
                    }
                    else {
                      lVar15 = (longlong)(int)local_200;
                      bVar17 = true;
                      iVar4 = (int)local_200 + 1;
                      local_200 = CONCAT44(local_200._4_4_,iVar4);
                      if (local_200._4_4_ < iVar4) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                  (&local_208,uVar3 & 0xffffffff);
                      }
                      puVar13 = local_228;
                      plVar9 = local_208 + lVar15 * 2;
                      *plVar9 = 0;
                      lVar15 = (longlong)local_220;
                      *(int *)(plVar9 + 1) = local_220;
                      if (local_220 == 0) {
                        *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
                      }
                      else {
                        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9,local_220,0);
                        _guard_xfg_dispatch_icall_nop((void *)*plVar9,puVar13,lVar15 * 2);
                      }
                      plVar14 = local_258;
                      plVar12 = local_258 + (longlong)(int)local_250 * 2;
                      for (plVar9 = local_258; plVar9 != plVar12; plVar9 = plVar9 + 2) {
                        puVar13 = &DAT_143f3eda8;
                        if (local_220 != 0) {
                          puVar13 = local_228;
                        }
                        if ((int)plVar9[1] == 0) {
                          puVar11 = &DAT_143f3eda8;
                        }
                        else {
                          puVar11 = (undefined2 *)*plVar9;
                        }
                        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar13);
                        if (iVar4 == 0) {
                          if ((int)((longlong)plVar9 - (longlong)plVar14 >> 4) != -1)
                          goto LAB_140c1ea68;
                          break;
                        }
                      }
                      uVar3 = local_250;
                      lVar15 = (longlong)(int)local_250;
                      iVar4 = (int)local_250 + 1;
                      local_250 = CONCAT44(local_250._4_4_,iVar4);
                      if (local_250._4_4_ < iVar4) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                  (&local_258,uVar3 & 0xffffffff);
                      }
                      plVar9 = local_258 + lVar15 * 2;
                    }
                    puVar13 = local_228;
                    *plVar9 = 0;
                    lVar15 = (longlong)local_220;
                    *(int *)(plVar9 + 1) = local_220;
                    if (local_220 == 0) {
                      *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9,local_220,0);
                      _guard_xfg_dispatch_icall_nop((void *)*plVar9,puVar13,lVar15 * 2);
                    }
LAB_140c1ea68:
                    if (local_228 != (undefined2 *)0x0) {
                      FMemory::Free();
                    }
                    plVar7 = plVar7 + 1;
                    plVar16 = (longlong *)((longlong)plVar16 + 1);
                    lVar15 = local_1e8;
                  } while (plVar16 != local_248);
                }
                plVar7 = local_198;
                local_268 = &local_178;
                local_270 = &local_e8;
                local_178 = 0;
                local_278 = &local_218;
                local_170 = 0;
                local_e8 = 0;
                local_e0 = 0;
                local_c8 = 0;
                local_c0 = 0;
                local_b8 = 0xffffffff;
                local_b4 = 0;
                local_a8 = 0;
                local_a0 = 0;
                (**(code **)(*local_198 + 0x18))(local_198,*local_1e0,&local_1f8,&local_208);
                local_a0 = 0;
                if (local_a8 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (&local_e8);
                plVar9 = local_218;
                for (iVar4 = (int)local_210; iVar4 != 0; iVar4 = iVar4 + -1) {
                  if (*plVar9 != 0) {
                    FMemory::Free();
                  }
                  plVar9 = plVar9 + 2;
                }
                if (local_218 != (longlong *)0x0) {
                  FMemory::Free(local_218);
                }
                plVar9 = local_208;
                for (iVar4 = (int)local_200; iVar4 != 0; iVar4 = iVar4 + -1) {
                  if (*plVar9 != 0) {
                    FMemory::Free();
                  }
                  plVar9 = plVar9 + 2;
                }
                if (local_208 != (longlong *)0x0) {
                  FMemory::Free(local_208);
                }
                plVar16 = local_1b8;
                puVar5 = local_1a8;
                plVar9 = local_1d0[0];
                if (local_1f8 != (undefined2 *)0x0) {
                  FMemory::Free();
                  plVar16 = local_1b8;
                  puVar5 = local_1a8;
                  plVar9 = local_1d0[0];
                }
              }
            }
LAB_140c1ebb3:
            plVar9 = plVar9 + 0xf;
            param_2 = local_1e0;
            local_1d0[0] = plVar9;
          } while (plVar9 != plVar16);
        }
      }
    }
    local_278 = &local_1b8;
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    (**(code **)(*plVar7 + 0x30))(plVar7,*param_2,&local_258,&local_238);
    if ((int)local_130 != local_104) {
      local_1e0 = (undefined8 *)0x0;
      local_1d8 = 0;
      (**(code **)(*plVar7 + 0x38))(plVar7,*param_2,&local_138,&local_1e0);
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_138,0);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    plVar7 = local_238;
    for (iVar4 = (int)local_230; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
    plVar7 = local_258;
    for (iVar4 = (int)local_250; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_258 != (longlong *)0x0) {
      FMemory::Free(local_258);
    }
  }
  plVar7 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_190 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  return;
}



// FUNCTION 140c1eef0 FUN_140c1eef0 body=230 status=ok
// SIG undefined FUN_140c1eef0(void)

void FUN_140c1eef0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (((*(byte *)(lVar1 + 0x30) & 4) != 0) && (*(longlong *)(lVar1 + 0x88) != 0)) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x88);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x458);
        if (*(longlong *)(lVar1 + 0x88) != 0) {
          plVar3 = (longlong *)UProgressBar::GetPrivateStaticClass();
          plVar6 = *(longlong **)(lVar1 + 0x88);
          for (plVar5 = plVar6; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[6]) {
            if (plVar5 == plVar3) goto LAB_140c1ef98;
          }
        }
        plVar6 = (longlong *)0x0;
LAB_140c1ef98:
        plVar5 = (longlong *)plVar6[0x1f];
        if (plVar5 == (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          plVar5 = (longlong *)plVar6[0x1f];
        }
        (**(code **)(*plVar5 + 0x278))(plVar5,param_3,0);
      }
    }
  }
  return;
}



// FUNCTION 140c1f000 FUN_140c1f000 body=555 status=ok
// SIG undefined FUN_140c1f000(void)

void FUN_140c1f000(undefined8 *param_1)

{
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_28 = param_1[3];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[3];
  FName::FName(local_20,&DAT_144326420,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[4];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[4];
  FName::FName(local_20,&DAT_1443264b0,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[5];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[5];
  FName::FName(local_20,&DAT_1443264c8,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[6];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[7];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[8];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[9];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[10];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  return;
}



// FUNCTION 140c1f230 FUN_140c1f230 body=411 status=ok
// SIG undefined FUN_140c1f230(void)

void FUN_140c1f230(undefined8 *param_1)

{
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_28 = param_1[5];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[6];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[7];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[8];
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[9];
  FName::FName(local_20,&DAT_144327150,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[10];
  FName::FName(local_20,&DAT_144327158,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[0xb];
  FName::FName(local_20,&DAT_144327160,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  local_28 = param_1[0xc];
  FName::FName(local_20,&DAT_144327168,1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  return;
}



// FUNCTION 140c1f3d0 FUN_140c1f3d0 body=475 status=ok
// SIG undefined FUN_140c1f3d0(void)

undefined8 FUN_140c1f3d0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48 [4];
  undefined1 local_28 [32];
  
  lVar3 = *(longlong *)(param_2 + 0x88);
  if (*(longlong *)(param_2 + 0x88) == 0) {
    lVar3 = param_2 + 8;
  }
  if ((*(int *)(param_2 + 0x90) == 1) && (*(short *)(lVar3 + 0x18) == 0x28)) {
    if ((**(longlong **)(param_1 + 8) == 0) ||
       (cVar1 = FUN_1407ce010(*(longlong **)(param_1 + 8) + 1), cVar1 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = FUN_1407ba9a0(lVar3);
      if (lVar3 != 0) {
        lVar4 = FUN_1429e18b0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_14217e740(local_48);
          FUN_142194380(local_48,0x28,0,0,0);
          local_48[0] = lVar3;
          FUN_1421923f0(local_28,DAT_14686add8,local_48);
          FUN_140bfa350(param_2,param_1 + 8,local_28);
          FUN_14217f430(local_28);
          FUN_14217f430(local_48);
          FUN_14217e740(local_48);
          FUN_142194380(local_48,0x28,0,0,0);
          local_48[0] = lVar3;
          FUN_1421923f0(local_28,DAT_14686ade0,local_48);
          FUN_140bfa350(param_2,param_1 + 0x10,local_28);
          FUN_14217f430(local_28);
          FUN_14217f430(local_48);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c1f5b0 FUN_140c1f5b0 body=572 status=ok
// SIG undefined FUN_140c1f5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140c1f5b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined2 *local_res10;
  longlong local_res18 [2];
  ulonglong in_stack_ffffffffffffff78;
  undefined2 *local_78;
  float local_70;
  undefined1 local_58 [48];
  
  local_res10 = (undefined2 *)0x0;
  local_res18[0] = 0;
  cVar3 = FUN_140c158c0(param_1,param_2 + 8,&local_res10,local_res18);
  if (cVar3 != '\0') {
    FUN_14217e740(&local_78);
    in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
    FUN_142194380(&local_78,0x28,0,0,in_stack_ffffffffffffff78);
    puVar2 = local_res10;
    local_78 = local_res10;
    FUN_1421923f0(local_58,DAT_14686add8,&local_78);
    FUN_140bfa350(param_2,param_1 + 8,local_58);
    FUN_14217f430(local_58);
    FUN_14217f430(&local_78);
    FUN_14217e740(&local_78);
    FUN_142194380(&local_78,0x28,0,0,in_stack_ffffffffffffff78 & 0xffffffffffffff00);
    local_78 = puVar2;
    FUN_1421923f0(local_58,DAT_14686ade0,&local_78);
    FUN_140bfa350(param_2,param_1 + 0x10,local_58);
    FUN_14217f430(local_58);
    FUN_14217f430(&local_78);
    lVar1 = local_res18[0];
    puVar4 = (undefined8 *)UObjectBaseUtility::GetPathName(local_res18[0],&local_78,0);
    if (*(int *)(puVar4 + 1) == 0) {
      local_res10 = &DAT_143f3eda8;
    }
    else {
      local_res10 = (undefined2 *)*puVar4;
    }
    FUN_140bfa240(param_2,param_1 + 0x18,&local_res10);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
      local_78 = _DAT_1468b5d90;
      local_70 = DAT_1468b5d98;
    }
    else {
      local_78 = *(undefined2 **)(lVar1 + 0x220);
      local_70 = *(float *)(lVar1 + 0x228);
    }
    FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)SUB84(local_78,0),
                        (double)(float)((ulonglong)local_78 >> 0x20),(double)local_70);
    local_res10 = &DAT_143f3eda8;
    if (local_70 != 0.0) {
      local_res10 = local_78;
    }
    FUN_140bfa240(param_2,param_1 + 0x20,&local_res10);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return cVar3;
}



// FUNCTION 140c1f7f0 FUN_140c1f7f0 body=12 status=ok
// SIG undefined FUN_140c1f7f0(void)

void FUN_140c1f7f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140c1f7f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x750))(param_1,1);
  return;
}



// FUNCTION 140c1f820 FUN_140c1f820 body=343 status=ok
// SIG undefined FUN_140c1f820(void)

void FUN_140c1f820(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  longlong local_28;
  longlong *local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    lVar5 = FUN_142f6c9f0(lVar5);
    if (lVar5 != 0) {
      FUN_140c27a30(param_1,lVar5,param_3);
      return;
    }
  }
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,&local_28);
  local_10 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_10;
  pvVar6 = (void *)0x0;
  _Src = (void *)*param_3;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    pvVar6 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
  }
  if ((char)param_1[0x10] != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    UE4Tuple_Private::
    TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>::
    ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>
              (param_1 + 0xc);
  }
  plVar4 = local_20;
  param_1[0xc] = local_28;
  param_1[0xd] = (longlong)local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    pvVar6 = local_18;
  }
  param_1[0xe] = (longlong)pvVar6;
  *(int *)(param_1 + 0xf) = local_10;
  *(undefined4 *)((longlong)param_1 + 0x7c) = local_c;
  *(undefined1 *)(param_1 + 0x10) = 1;
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



// FUNCTION 140c1f980 FUN_140c1f980 body=409 status=ok
// SIG undefined FUN_140c1f980(void)

void FUN_140c1f980(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong local_10;
  
  AOCWorldTile::EndInstancedStaticMeshOverride();
  local_10 = 0;
  local_18 = param_1;
  if (param_1 != (longlong *)0x0) {
    uVar4 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
  }
  FUN_142f690f0(param_1,&local_18,1);
  FUN_140c2b7d0(param_1);
  FUN_140c0b660(param_1);
  (**(code **)(*param_1 + 0x738))(param_1,1);
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    plVar6 = (longlong *)FName::FName(local_res8,L"OnTravelIDsChanged",1);
    FWeakObjectPtr::operator=(&local_18,param_1);
    local_10 = *plVar6;
    plVar6 = (longlong *)(lVar5 + 0xa28);
    piVar2 = (int *)*plVar6;
    iVar1 = *(int *)(lVar5 + 0xa30);
    for (piVar8 = piVar2; piVar8 != piVar2 + (longlong)iVar1 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == (int)local_18) &&
           (local_18._4_4_ = (int)((ulonglong)local_18 >> 0x20), bVar9 = piVar8[1] == local_18._4_4_
           , bVar9)) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar8), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(&local_18), cVar3 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_10)) {
        if ((int)((longlong)piVar8 - (longlong)piVar2 >> 4) != -1) goto LAB_140c1fafc;
        break;
      }
    }
    iVar1 = *(int *)(lVar5 + 0xa30);
    *(int *)(lVar5 + 0xa30) = iVar1 + 1;
    if (*(int *)(lVar5 + 0xa34) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar7 = (int)local_18;
    puVar7[1] = local_18._4_4_;
    *(longlong *)(puVar7 + 2) = local_10;
LAB_140c1fafc:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
  }
  return;
}



// FUNCTION 140c1fb30 FUN_140c1fb30 body=3155 status=ok
// SIG undefined FUN_140c1fb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c1fb30(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  void *_Src;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  void **ppvVar14;
  uint uVar15;
  longlong lVar16;
  void *pvVar17;
  longlong *plVar18;
  longlong lVar19;
  uint *puVar20;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  void *local_488;
  undefined8 local_480;
  void **local_478;
  longlong *plStack_470;
  void **local_468;
  longlong *plStack_460;
  void **local_458;
  longlong *plStack_450;
  void *local_448;
  int local_440;
  undefined4 local_43c;
  int local_438;
  uint uStack_434;
  uint *puStack_430;
  undefined4 local_428;
  uint uStack_424;
  int iStack_420;
  undefined4 uStack_41c;
  void **local_418;
  longlong *plStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  longlong *local_3f8;
  undefined8 uStack_3f0;
  uint *puStack_3e8;
  uint uStack_3e0;
  uint uStack_3dc;
  undefined8 uStack_3d8;
  int local_3d0;
  uint local_3c0;
  uint uStack_3bc;
  uint local_3b8;
  int local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  int local_398;
  undefined8 local_394;
  undefined4 local_38c;
  longlong *local_388;
  undefined8 uStack_380;
  uint *local_378;
  uint uStack_370;
  uint uStack_36c;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_340;
  undefined4 local_338;
  longlong *local_330 [4];
  longlong *local_310 [4];
  longlong local_2f0 [4];
  undefined8 local_2d0;
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [56];
  
  if (param_2 == 0) {
    return;
  }
  lVar13 = *param_1;
  plVar1 = (longlong *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x18) == *(int *)(lVar13 + 0x44)) {
    return;
  }
  puVar2 = (uint *)(lVar13 + 0x20);
  lVar19 = *(longlong *)(param_2 + 0x10);
  uVar4 = *(uint *)(lVar13 + 0x38);
  local_438 = 0;
  uStack_434 = 1;
  uStack_424 = 0;
  iStack_420 = 0;
  if (uVar4 != 0) {
    puVar20 = *(uint **)(lVar13 + 0x30);
    if (*(uint **)(lVar13 + 0x30) == (uint *)0x0) {
      puVar20 = puVar2;
    }
    uVar15 = *puVar20;
    iStack_420 = 0;
    local_438 = 0;
    while (uVar15 == 0) {
      lVar16 = (longlong)local_438;
      iStack_420 = iStack_420 + 0x20;
      iVar12 = local_438 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_438;
      local_438 = iVar12;
      if (bVar6) goto LAB_140c1fc30;
      uVar15 = puVar20[lVar16 + 1];
    }
    uStack_434 = uVar15 - 1 & uVar15 ^ uVar15;
    local_398 = 0x1f;
    if (uStack_434 != 0) {
      for (; uStack_434 >> local_398 == 0; local_398 = local_398 + -1) {
      }
    }
    if (uStack_434 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - local_398;
    }
    uStack_424 = (iStack_420 - iVar12) + 0x1f;
    if ((int)uVar4 < (int)uStack_424) {
LAB_140c1fc30:
      uStack_424 = uVar4;
    }
  }
  local_428 = 0xffffffff;
  uStack_3bc = *(uint *)(lVar13 + 0x38);
  uStack_3f0 = CONCAT44(uStack_434,local_438);
  uStack_370 = 0xffffffff;
  uStack_36c = uStack_424;
  uStack_3d8 = CONCAT44(uStack_41c,iStack_420);
  local_3c0 = -1 << ((byte)uStack_3bc & 0x1f);
  local_3d0 = (int)uStack_3bc >> 5;
  local_3b8 = uStack_3bc & 0xffffffe0;
  puStack_430 = puVar2;
  local_3f8 = plVar1;
  puStack_3e8 = puVar2;
  local_3a0 = lVar19;
  local_388 = plVar1;
  uStack_380 = uStack_3f0;
  local_378 = puVar2;
  local_368 = uStack_3d8;
  uStack_3e0 = uStack_370;
  uStack_3dc = uStack_36c;
  uVar15 = uStack_3bc;
  if (uStack_3bc != uVar4) {
    puVar20 = *(uint **)(lVar13 + 0x30);
    if (*(uint **)(lVar13 + 0x30) == (uint *)0x0) {
      puVar20 = puVar2;
    }
    uVar15 = puVar20[local_3d0] & local_3c0;
    while (uVar15 == 0) {
      lVar13 = (longlong)local_3d0;
      local_3b8 = local_3b8 + 0x20;
      iVar12 = local_3d0 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_3d0;
      local_3d0 = iVar12;
      if (bVar6) goto LAB_140c1fd21;
      uVar15 = puVar20[lVar13 + 1];
      local_3c0 = 0xffffffff;
    }
    uVar15 = uVar15 - 1 & uVar15 ^ uVar15;
    local_3b0 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> local_3b0 == 0; local_3b0 = local_3b0 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - local_3b0;
    }
    uStack_3bc = (local_3b8 - iVar12) + 0x1f;
    uVar15 = uStack_3bc;
    if ((int)uVar4 < (int)uStack_3bc) {
LAB_140c1fd21:
      uStack_3bc = uVar4;
      uVar15 = uVar4;
    }
  }
  do {
    if ((uStack_36c == uVar15) && (local_378 == puVar2)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((bVar6) && (local_388 == plVar1)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) {
      return;
    }
    lVar16 = FUN_141796280((longlong)(int)uStack_36c * 0x20 + *local_388);
    lVar13 = lVar19;
    if (lVar16 != 0) {
      for (; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
        if (lVar13 == lVar16) {
          pvVar17 = (void *)0x0;
          local_480 = 0;
          local_488 = (void *)0x0;
          if ((*(char *)(param_1[1] + 0x10) != '\0') &&
             (lVar13 = *(longlong *)(param_2 + 0x740), lVar13 != 0)) {
            local_440 = *(int *)(lVar13 + 0x1f8);
            lVar19 = (longlong)local_440;
            _Src = *(void **)(lVar13 + 0x1f0);
            local_448 = (void *)0x0;
            if (local_440 == 0) {
              local_43c = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (&local_448,local_440,0);
              pvVar17 = local_448;
              _guard_xfg_dispatch_icall_nop(local_448,_Src,lVar19 << 3);
              if (local_488 != (void *)0x0) {
                FMemory::Free();
              }
            }
            local_480 = CONCAT44(local_43c,local_440);
            local_488 = pvVar17;
          }
          plVar1 = *(longlong **)(param_2 + 0x6f8);
          local_478 = &local_488;
          plStack_470 = plVar1;
          local_468 = local_478;
          plStack_460 = plVar1;
          local_458 = local_478;
          plStack_450 = plVar1;
          if (plVar1 == (longlong *)0x0) goto LAB_140c2070b;
          lVar13 = FUN_14145f370();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
              != lVar13 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (((!bVar6) ||
              (local_3a8 = plVar1, cVar7 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar7 == '\0'))
             || (lVar13 = plVar1[0x109], lVar13 == 0)) goto LAB_140c2070b;
          lVar19 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((!bVar6) || (plVar18 = *(longlong **)(lVar13 + 0x10d8), plVar18 == (longlong *)0x0))
          goto LAB_140c2070b;
          local_res10[0] = 0;
          local_2d0 = FUN_1414b0d60();
          plVar8 = (longlong *)(**(code **)(*plVar1 + 0x628))(plVar1,local_2d0);
          if (plVar8 != (longlong *)0x0) {
            local_res10[0] = (**(code **)(*plVar8 + 0x468))(plVar8);
          }
          if (DAT_14686b260 == '\0') {
            uVar9 = FUN_140c12040();
            FUN_140bffb10(&DAT_14686b1a0,uVar9);
          }
          cVar7 = FUN_142190080(DAT_14686b1a0);
          if ((cVar7 == '\0') || (cVar7 = FUN_142194620(DAT_14686b1a0), cVar7 == '\0'))
          goto LAB_140c2070b;
          FUN_142190c70(&local_458,DAT_14686b1a0,L"looted");
          ppvVar14 = local_458[0x18];
          if (local_458[0x18] == (void **)0x0) {
            ppvVar14 = local_458 + 4;
          }
          plVar10 = (longlong *)FUN_140aa2bd0(ppvVar14);
          FUN_14217e740(local_330);
          FUN_142194380(local_330,0x28,0,0,0);
          plVar8 = local_3a8;
          local_330[0] = local_3a8;
          FUN_1421923f0(local_288,DAT_14686add8,local_330);
          FUN_140bfb300(plVar10,&DAT_14686b1a8,local_288);
          FUN_14217f430(local_288);
          FUN_14217f430(local_330);
          FUN_14217e740(local_310);
          FUN_142194380(local_310,0x28,0,0,0);
          local_310[0] = plVar8;
          FUN_1421923f0(local_2c8,DAT_14686ade0,local_310);
          FUN_140bfb300(plVar10,&DAT_14686b1b0,local_2c8);
          FUN_14217f430(local_2c8);
          FUN_14217f430(local_310);
          local_res18[0] = (**(code **)(*plVar18 + 0x408))(plVar18);
          FUN_140bfa9d0(plVar10,&DAT_14686b1b8,local_res18);
          FUN_140bfa9d0(plVar10,&DAT_14686b1c0,local_res10);
          local_res20[0] = FUN_140d00180(plVar1);
          FUN_140bfadf0(plVar10,&DAT_14686b1c8,local_res20);
          FUN_14217e740(local_2f0);
          FUN_142194380(local_2f0,0x28,0,0,0);
          local_2f0[0] = local_3a0;
          FUN_1421923f0(local_2a8,DAT_14686adb8,local_2f0);
          FUN_140bfb300(plVar10,&DAT_14686b1d0,local_2a8);
          FUN_14217f430(local_2a8);
          FUN_14217f430(local_2f0);
          lVar13 = *(longlong *)(param_2 + 0x168);
          if (lVar13 == 0) {
            local_38c = DAT_1468b5d98;
            puVar11 = &local_394;
            local_394 = _DAT_1468b5d90;
          }
          else {
            puVar11 = (undefined8 *)&local_408;
            local_408 = *(undefined4 *)(lVar13 + 0x220);
            local_1a8 = *(undefined4 *)(lVar13 + 0x220);
            uStack_1a4 = *(undefined4 *)(lVar13 + 0x224);
            uStack_1a0 = *(undefined4 *)(lVar13 + 0x228);
            uStack_19c = *(undefined4 *)(lVar13 + 0x22c);
            local_400 = *(undefined4 *)(lVar13 + 0x228);
            uStack_404 = *(undefined4 *)(lVar13 + 0x224);
          }
          uVar9 = *puVar11;
          uVar5 = *(undefined4 *)(puVar11 + 1);
          local_418 = (void **)0x0;
          local_340 = uVar9;
          local_338 = uVar5;
          if ((*DAT_14686b1d8 == 0) || (cVar7 = FUN_1407ce010(DAT_14686b1d8 + 1), cVar7 == '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_140c20309;
          plVar18 = (longlong *)*plVar10;
          plVar1 = plVar18 + (longlong)(int)plVar10[1] * 5;
          if (plVar18 == plVar1) goto LAB_140c20299;
          goto LAB_140c20268;
        }
      }
    }
    uStack_370 = uStack_370 & ~uStack_380._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_380);
  } while( true );
LAB_140c20268:
  if ((*(longlong *)*plVar18 == *DAT_14686b1d8) &&
     (*(longlong *)(((longlong *)*plVar18)[1] + 0x28) == *(longlong *)(DAT_14686b1d8[1] + 0x28))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_14217e740(&local_360);
    FUN_142194380(&local_360,0x21,0,0,0);
    local_360 = uVar9;
    local_358 = uVar5;
    FUN_14217f450(plVar18 + 1,&local_360);
    puVar11 = &local_360;
    goto LAB_140c20304;
  }
  plVar18 = plVar18 + 5;
  if (plVar18 == plVar1) {
LAB_140c20299:
    local_3f8 = DAT_14686b1d8;
    FUN_14217e740(&uStack_3f0);
    FUN_142194380(&uStack_3f0,0x21,0,0,0);
    iVar12 = (int)plVar10[1];
    puStack_3e8 = (uint *)CONCAT44(puStack_3e8._4_4_,uVar5);
    *(int *)(plVar10 + 1) = iVar12 + 1;
    uStack_3f0 = uVar9;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar10,iVar12);
    }
    lVar13 = *plVar10;
    *(longlong **)(lVar13 + (longlong)iVar12 * 0x28) = local_3f8;
    FUN_14217e5b0(lVar13 + (longlong)iVar12 * 0x28 + 8,&uStack_3f0);
    puVar11 = &uStack_3f0;
LAB_140c20304:
    FUN_14217f430(puVar11);
LAB_140c20309:
    uVar9 = FUN_140bfffc0(&local_478,local_98,1);
    FUN_140bfb300(plVar10,&DAT_14686b1e0,uVar9);
    FUN_14217f430(local_98);
    uVar9 = FUN_140c00de0(&local_468,local_268,1);
    FUN_140bfb300(plVar10,&DAT_14686b220,uVar9);
    FUN_14217f430(local_268);
    uVar9 = FUN_140bfffc0(&local_478,local_248,2);
    FUN_140bfb300(plVar10,&DAT_14686b1e8,uVar9);
    FUN_14217f430(local_248);
    uVar9 = FUN_140c00de0(&local_468,local_228,2);
    FUN_140bfb300(plVar10,&DAT_14686b228,uVar9);
    FUN_14217f430(local_228);
    uVar9 = FUN_140bfffc0(&local_478,local_208,3);
    FUN_140bfb300(plVar10,&DAT_14686b1f0,uVar9);
    FUN_14217f430(local_208);
    uVar9 = FUN_140c00de0(&local_468,local_1e8,3);
    FUN_140bfb300(plVar10,&DAT_14686b230,uVar9);
    FUN_14217f430(local_1e8);
    uVar9 = FUN_140bfffc0(&local_478,local_1c8,4);
    FUN_140bfb300(plVar10,&DAT_14686b1f8,uVar9);
    FUN_14217f430(local_1c8);
    uVar9 = FUN_140c00de0(&local_468,local_118,4);
    FUN_140bfb300(plVar10,&DAT_14686b238,uVar9);
    FUN_14217f430(local_118);
    uVar9 = FUN_140bfffc0(&local_478,local_198,5);
    FUN_140bfb300(plVar10,&DAT_14686b200,uVar9);
    FUN_14217f430(local_198);
    uVar9 = FUN_140c00de0(&local_468,local_178,5);
    FUN_140bfb300(plVar10,&DAT_14686b240,uVar9);
    FUN_14217f430(local_178);
    uVar9 = FUN_140bfffc0(&local_478,local_158,6);
    FUN_140bfb300(plVar10,&DAT_14686b208,uVar9);
    FUN_14217f430(local_158);
    uVar9 = FUN_140c00de0(&local_468,local_138,6);
    FUN_140bfb300(plVar10,&DAT_14686b248,uVar9);
    FUN_14217f430(local_138);
    uVar9 = FUN_140bfffc0(&local_478,local_78,7);
    FUN_140bfb300(plVar10,&DAT_14686b210,uVar9);
    FUN_14217f430(local_78);
    uVar9 = FUN_140c00de0(&local_468,local_f8,7);
    FUN_140bfb300(plVar10,&DAT_14686b250,uVar9);
    FUN_14217f430(local_f8);
    uVar9 = FUN_140bfffc0(&local_478,local_d8,8);
    FUN_140bfb300(plVar10,&DAT_14686b218,uVar9);
    FUN_14217f430(local_d8);
    uVar9 = FUN_140c00de0(&local_468,local_b8,8);
    FUN_140bfb300(plVar10,&DAT_14686b258,uVar9);
    FUN_14217f430(local_b8);
    cVar7 = FUN_14218a740(&local_458,1);
    if (cVar7 != '\0') {
      local_418 = local_458;
      plStack_410 = plStack_450;
      if (plStack_450 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_450 + 1) = (int)plStack_450[1] + 1;
        UNLOCK();
      }
      FUN_142194040(&local_418);
      plVar1 = plStack_410;
      if (plStack_410 != (longlong *)0x0) {
        LOCK();
        plVar18 = plStack_410 + 1;
        lVar13 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_410)(plStack_410);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
    }
    plVar1 = plStack_450;
    if (plStack_450 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_450 + 1;
      lVar13 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_450)(plStack_450);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
LAB_140c2070b:
    if (local_488 != (void *)0x0) {
      FMemory::Free(local_488);
    }
    return;
  }
  goto LAB_140c20268;
}



// FUNCTION 140c20790 FUN_140c20790 body=143 status=ok
// SIG undefined FUN_140c20790(void)

void FUN_140c20790(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = FUN_142f6c9f0(uVar3);
  if ((lVar4 != 0) && (cVar1 = FUN_142f635c0(lVar4,param_1 + 0xd3,param_1), cVar1 != '\0')) {
    uVar3 = FUN_142f5f490(param_1 + 0xd3);
    uVar2 = FUN_142f5cdc0(uVar3,param_3);
    FUN_142f6e6e0(lVar4,param_1 + 0xd3,uVar2,1,param_1);
  }
  return;
}



// FUNCTION 140c20820 FUN_140c20820 body=445 status=ok
// SIG undefined FUN_140c20820(void)

void FUN_140c20820(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_res18;
  
  if (param_3 != (longlong *)0x0) {
    uVar2 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
    if (lVar3 == 0) {
      FUN_1417846f0(param_3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res18 = 0;
      uVar2 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      lVar3 = FUN_1417985e0(uVar2,param_3,0,0,0,0,0,0,0);
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)(param_1 + 0x698) + 0x18))(param_1 + 0x698,&local_res18);
      *(undefined8 *)(lVar3 + 0x178) = *puVar4;
      uVar2 = FUN_142f5f490(param_1 + 0x698);
      *(undefined8 *)(lVar3 + 0x180) = uVar2;
      plVar9 = (longlong *)0x0;
      if (*(longlong *)(lVar3 + 0x178) != 0) {
        plVar5 = (longlong *)FUN_142f71d80();
        for (plVar7 = *(longlong **)(lVar3 + 0x178);
            (plVar9 = (longlong *)0x0, plVar7 != (longlong *)0x0 &&
            (plVar9 = *(longlong **)(lVar3 + 0x178), plVar7 != plVar5));
            plVar7 = (longlong *)plVar7[6]) {
        }
      }
      lVar8 = plVar9[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
        lVar8 = plVar9[0x1f];
        if (lVar8 == 0) {
          return;
        }
      }
      lVar6 = FUN_141437870();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (lVar6 = FUN_140c14790(lVar8), lVar6 != 0)) &&
         (*(char *)(lVar8 + 0x4e0) != '\0')) {
        plVar7 = *(longlong **)(lVar8 + 0x4d0);
        plVar9 = plVar7 + *(int *)(lVar8 + 0x4d8);
        if (plVar7 != plVar9) {
          while (*plVar7 != *(longlong *)(lVar3 + 0x180)) {
            plVar7 = plVar7 + 1;
            if (plVar7 == plVar9) {
              return;
            }
          }
          *(undefined1 *)(lVar3 + 0x188) = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c209e0 FUN_140c209e0 body=330 status=ok
// SIG undefined FUN_140c209e0(void)

void FUN_140c209e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar4 = UBlindWidget::GetPrivateStaticClass();
  lVar5 = AGameStateBase::OnRep_GameModeClass(param_1,uVar4);
  if (lVar5 != 0) {
    lVar6 = UBlindWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(char *)(lVar5 + 0x1a0) != '\0')) &&
       (uVar2 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0x50))(lVar5 + 0x178), 1 < uVar2)) {
      uVar10 = (ulonglong)*(int *)(param_3 + 0x10);
      iVar3 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0x50))(lVar5 + 0x178);
      lVar6 = UCableComponent::GetAttachedActor(param_1);
      if (lVar6 != 0) {
        uVar9 = 0;
        uVar2 = 1;
        uVar12 = uVar9;
        do {
          iVar11 = (int)uVar12;
          if (iVar11 == iVar3) {
            return;
          }
          if ((*(uint *)(lVar5 + 0x198) & uVar2) != 0) {
            if ((uVar10 == 0xffffffffffffffff) || (uVar9 == uVar10)) {
              lVar7 = FUN_1407cb160(lVar6);
              if (((longlong)uVar9 < 0) || (*(int *)(lVar7 + 8) <= iVar11)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((bVar1) &&
                 (plVar8 = (longlong *)FUN_1407cb160(lVar6), *(longlong *)(*plVar8 + uVar9 * 8) != 0
                 )) {
                Z_Construct_UClass_AUGCharacter_Statics::NewProp_bCanFlinch_SetBit();
              }
              if (uVar10 != 0xffffffffffffffff) {
                return;
              }
            }
            uVar12 = (ulonglong)(iVar11 + 1);
            uVar9 = uVar9 + 1;
          }
          uVar2 = uVar2 * 2;
        } while (uVar2 != 0);
      }
    }
  }
  return;
}



// FUNCTION 140c20b30 FUN_140c20b30 body=213 status=ok
// SIG undefined FUN_140c20b30(void)

void FUN_140c20b30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x7a0) + -1;
  if (-1 < iVar7) {
    lVar1 = *(longlong *)(param_1 + 0x798);
    lVar6 = (longlong)iVar7;
    plVar3 = (longlong *)(lVar6 * 0x10 + lVar1);
    while (param_3 != *plVar3) {
      iVar7 = iVar7 + -1;
      plVar3 = plVar3 + -2;
      lVar6 = lVar6 + -1;
      if (lVar6 < 0) {
        return;
      }
    }
    iVar5 = *(int *)(param_1 + 0x7a0);
    iVar2 = (iVar5 - iVar7) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0x10 + lVar1),
                 (void *)((longlong)(iVar7 + 1) * 0x10 + lVar1),(longlong)iVar2 << 4);
      iVar5 = *(int *)(param_1 + 0x7a0);
    }
    *(int *)(param_1 + 0x7a0) = iVar5 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x798);
    if (*(int *)(param_1 + 0x7a0) == 0) {
      uVar4 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar4,param_1 + 0x7e8);
      *(undefined8 *)(param_1 + 0x7e8) = 0;
    }
  }
  return;
}



// FUNCTION 140c20c10 FUN_140c20c10 body=378 status=ok
// SIG undefined FUN_140c20c10(void)

void FUN_140c20c10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    plVar3 = (longlong *)FName::FName(local_res10,L"ActiveLeagueMissionGraph",1);
    lVar6 = *plVar3;
    uVar4 = GetTransientPackage();
    if (lVar6 == 0) {
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar5 = FUN_142f791f0();
    lVar6 = FUN_1417985e0(uVar5,uVar4,lVar6,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x6e0) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x28) = 0x7fffffff;
      local_48[0] = 0;
      local_48[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"ActiveLeague",0x1a);
      uVar4 = FText::FromString(local_38,local_48);
      FText::operator=(*(longlong *)(param_1 + 0x6e0) + 0x30,uVar4);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      FUN_142f514f0(*(undefined8 *)(param_1 + 0x498),*(undefined8 *)(param_1 + 0x6e0));
    }
  }
  return;
}



// FUNCTION 140c20d90 FUN_140c20d90 body=261 status=ok
// SIG undefined FUN_140c20d90(void)

void FUN_140c20d90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res18 [16];
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_140c136e0(&local_38,0);
  if (local_38 != 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar6 != 0) {
      lVar6 = FUN_142f6c9f0(lVar6);
      if (lVar6 != 0) {
        if (param_1[9] != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar6 + 0x510,param_1[9]);
        }
        lVar4 = param_1[5];
        puVar7 = (undefined8 *)FUN_142f5ed60(lVar6,local_res18);
        (**(code **)(lVar4 + 0x40))(param_1 + 5,*puVar7);
        local_20 = 0;
        local_28 = param_1;
        uVar8 = FUN_142f768a0();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
        FUN_142f690f0(lVar6,&local_28,1);
      }
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 140c20ea0 FUN_140c20ea0 body=102 status=ok
// SIG undefined FUN_140c20ea0(void)

void FUN_140c20ea0(longlong param_1,char *param_2)

{
  longlong local_28;
  longlong local_20;
  code *local_18;
  longlong *plStack_10;
  
  if ((*param_2 == '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
    *(undefined1 *)(param_1 + 0x88) = 0;
    local_20 = FUN_140c104a0();
    if (local_20 != 0) {
      plStack_10 = &local_28;
      local_18 = FUN_140c07ed0;
      local_28 = param_1;
      FUN_140c10c60(param_1,&local_18);
    }
  }
  return;
}



// FUNCTION 140c20f10 FUN_140c20f10 body=12 status=ok
// SIG undefined FUN_140c20f10(void)

void FUN_140c20f10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140c20f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x748))(param_1,1);
  return;
}



// FUNCTION 140c20f20 thunk_FUN_140c0a740 body=5 status=ok
// SIG undefined thunk_FUN_140c0a740(void)

void thunk_FUN_140c0a740(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140b85640();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_140b75d20();
    FUN_140b55eb0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    TUniformBuffer<FLpvWriteUniformBufferParameters>::ReleaseDynamicRHI();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_142d29800();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140b55e90();
    return;
  }
  return;
}



// FUNCTION 140c20f30 FUN_140c20f30 body=53 status=ok
// SIG undefined FUN_140c20f30(void)

void FUN_140c20f30(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x580) != 0) && (*(longlong *)(param_1 + 0x598) != 0)) {
    FUN_140c289b0();
    FUN_140c26690(param_1);
    return;
  }
  return;
}



// FUNCTION 140c20f90 FUN_140c20f90 body=88 status=ok
// SIG undefined FUN_140c20f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c20f90(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x560) != 0) && (*(longlong **)(param_1 + 0x558) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x558) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x560) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c20fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x558) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140c20fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140c20ff0 FUN_140c20ff0 body=481 status=ok
// SIG undefined FUN_140c20ff0(void)

void FUN_140c20ff0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  int local_10;
  
  FUN_142f43df0();
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar4 = FUN_140bf9690(0,param_1 + 0x97);
  if (cVar4 == '\0') {
    lVar9 = 0;
  }
  else {
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x97);
    uVar8 = UUGButton::GetPrivateStaticClass();
    lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
  }
  if (((lVar6 != 0) && (lVar9 != 0)) && (*(longlong *)(lVar9 + 0x710) != 0)) {
    UWorld::GetPlayerControllerIterator(lVar6,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      if (plVar7 != (longlong *)0x0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if ((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) == 0) {
LAB_140c2111c:
            bVar3 = false;
          }
          else {
            cVar4 = (**(code **)(*plVar7 + 0x768))();
            if (cVar4 == '\0') goto LAB_140c2111c;
            bVar3 = true;
          }
          if (bVar3) {
            plVar12 = plVar7 + 0x353;
            plVar10 = (longlong *)*plVar12;
            plVar11 = plVar10 + (longlong)(int)plVar7[0x354] * 2;
            if (plVar10 != plVar11) {
              do {
                if (*plVar10 == *(longlong *)(lVar9 + 0x710)) goto LAB_140c211ac;
                plVar10 = plVar10 + 2;
              } while (plVar10 != plVar11);
            }
            uVar5 = FUN_142f42f30(param_1,*(undefined8 *)(lVar9 + 0x710));
            iVar2 = (int)plVar7[0x354];
            uVar8 = *(undefined8 *)(lVar9 + 0x710);
            uStack_20 = CONCAT13(uVar5,0x100);
            *(int *)(plVar7 + 0x354) = iVar2 + 1;
            if (*(int *)((longlong)plVar7 + 0x1aa4) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar2);
            }
            local_28 = (undefined4)uVar8;
            uStack_24 = (undefined4)((ulonglong)uVar8 >> 0x20);
            puVar1 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar12);
            *puVar1 = local_28;
            puVar1[1] = uStack_24;
            puVar1[2] = uStack_20;
            puVar1[3] = uStack_1c;
          }
        }
      }
LAB_140c211ac:
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140c211e0 FUN_140c211e0 body=130 status=ok
// SIG undefined FUN_140c211e0(void)

void FUN_140c211e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = AGExplodingRockProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c21231;
  }
  lVar3 = 0;
LAB_140c21231:
  *(longlong *)(param_1 + 0x598) = lVar3;
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x580) != 0)) {
    FUN_140c289b0(param_1);
    FUN_140c26690(param_1);
  }
  return;
}



// FUNCTION 140c21270 FUN_140c21270 body=1017 status=ok
// SIG undefined FUN_140c21270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c21270(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  uint local_170;
  undefined4 local_168;
  longlong local_158 [8];
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  cVar6 = FWeakObjectPtr::IsValid(&DAT_146298ae0);
  if (cVar6 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&DAT_146298ae0);
    lVar7 = *(longlong *)(lVar7 + 0x1428);
    if (lVar7 != 0) {
      local_158[4] = 0;
      local_158[5] = 0;
      local_158[2] = 0;
      local_158[3] = 0;
      local_158[0] = 0;
      local_158[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
      lVar8 = local_158[0];
      FGenericPlatformString::Memcpy(local_158[0],&DAT_14431c0a4,4);
      local_170 = 1;
      local_178 = 1;
      FUN_1404e14f0(&DAT_14686b3d8,local_158,local_158 + 4,local_158 + 2);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
      lVar8 = FText::FromString(local_68,local_158 + 2);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,&DAT_1443284c0,L"ScreenshotUtil",L"PhotoSavedDesc");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar9);
      local_50[0] = 4;
      FText::FText(local_40,lVar8);
      local_108 = *puVar10;
      local_118 = local_50;
      puStack_110 = &local_20;
      local_100 = puVar10[1];
      local_28 = '\x01';
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      local_f8 = local_118;
      uStack_f0 = puStack_110;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
      uVar9 = FText::Format(local_c0,&local_108,uVar9);
      FText::FText(local_d8,uVar9);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8);
      if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = (longlong *)puVar10[1];
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
      plVar4 = *(longlong **)(lVar8 + 8);
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
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"Photo Saved",L"ScreenshotUtil",L"PhotoSavedTitle");
      local_168 = 2;
      local_170 = local_170 & 0xffffff00;
      local_178 = 0x40a00000;
      FUN_1411db4f0(lVar7,&local_118,uVar9,local_d8);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      if (local_158[2] != 0) {
        FMemory::Free();
      }
      if (local_158[4] != 0) {
        FMemory::Free();
      }
    }
  }
  FWeakObjectPtr::operator=(local_158 + 6,0);
  _DAT_146298ae0 = local_158[6];
  return;
}



// FUNCTION 140c21670 FUN_140c21670 body=20 status=ok
// SIG undefined FUN_140c21670(void)

void FUN_140c21670(longlong *param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == param_1[0x101]) {
                    /* WARNING: Could not recover jumptable at 0x000140c2167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x718))();
    return;
  }
  return;
}



// FUNCTION 140c216d0 FUN_140c216d0 body=295 status=ok
// SIG undefined FUN_140c216d0(void)

void FUN_140c216d0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1[0xad]) {
    uVar6 = *(undefined8 *)param_1[0xac];
    if (1 < (int)param_1[0xad]) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar5 = FUN_142f6c9f0(uVar4);
      if (lVar5 != 0) {
        iVar2 = FUN_142f5cf70(lVar5,param_1 + 0x8c,param_1);
        if ((iVar2 < 0) || ((int)param_1[0xad] <= iVar2)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar6 = *(undefined8 *)(param_1[0xac] + (longlong)iVar2 * 8);
        }
      }
    }
    if (param_2 != 0) {
      lVar5 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140e2a100(param_2,uVar6);
      }
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = FUN_142f6c9f0(uVar6);
  if (lVar5 != 0) {
    uVar6 = FUN_142f5f490(param_1 + 0x8c);
    uVar3 = FUN_142f5cdc0(uVar6,param_1[0xb3]);
    FUN_142f6e6e0(lVar5,param_1 + 0x8c,uVar3,1,param_1);
  }
  return;
}



// FUNCTION 140c21800 FUN_140c21800 body=117 status=ok
// SIG undefined FUN_140c21800(void)

void FUN_140c21800(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  uVar1 = AActor::GetWorldTimerManager();
  local_res8 = *(undefined8 *)(param_1 + 0x5a8);
  lVar2 = FTimerManager::FindTimer(uVar1,&local_res8,0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 1) != '\x02')) {
    FUN_142880530(uVar1,param_1 + 0x5a8);
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    FUN_140c216d0(param_1,0);
  }
  return;
}



// FUNCTION 140c21880 FUN_140c21880 body=598 status=ok
// SIG undefined FUN_140c21880(void)

void FUN_140c21880(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x568) == 0) {
    return;
  }
  lVar7 = FUN_142e20fc0();
  lVar9 = *(longlong *)(param_2 + 0x568);
  lVar8 = lVar9;
  if (lVar9 == 0) {
    return;
  }
  while (lVar8 != lVar7) {
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 == 0) {
      return;
    }
  }
  if (lVar9 == 0) {
    return;
  }
  FUN_142dcf3a0(param_1,&local_28);
  if (local_28 == (longlong *)0x0) goto LAB_140c21a88;
  if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((bVar4) && (local_28 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*local_28 + 0x20))(local_28), cVar6 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar5) &&
      ((local_28 == (longlong *)0x0 ||
       (cVar6 = (**(code **)(*local_28 + 0x20))(local_28), cVar6 == '\0')))) ||
     ((bVar4 && (cVar6 = (**(code **)**(undefined8 **)(param_3 + 8))
                                   (*(undefined8 **)(param_3 + 8),local_28), cVar6 != '\0')))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) goto LAB_140c21a88;
  lVar9 = *(longlong *)(param_1 + 0x848);
  if (lVar9 == 0) {
LAB_140c21a26:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140c21a26;
    lVar9 = *(longlong *)(lVar9 + 0x920);
  }
  if (((lVar9 != 0) && (cVar6 = FUN_142c73310(lVar9), cVar6 == '\0')) &&
     (FUN_142c7bc00(lVar9,local_18,*(undefined8 *)(param_2 + 0x568),2), local_10 != (longlong *)0x0)
     ) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
LAB_140c21a88:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return;
}



// FUNCTION 140c21ae0 FUN_140c21ae0 body=273 status=ok
// SIG undefined FUN_140c21ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c21ae0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  longlong local_98 [2];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  if (((param_3 != 0) && (local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8, param_2 != 0)) &&
     (*(char *)(param_2 + 0x128) == '\x03')) {
    local_b0 = *(undefined8 *)(param_3 + 0x18);
    local_a8 = param_2;
    FUN_14217bd20(local_b8);
    puVar1 = (undefined8 *)FName::ToString(&local_b0,local_98);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    puVar1 = (undefined8 *)FName::FName(local_a0,L"Count",1);
    uVar2 = FUN_142186cb0(*param_1,local_88,local_b8,puVar3);
    FUN_1421837f0(uVar2,*puVar1,0);
    FUN_14217f320(local_88);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    FUN_140bf96a0(*param_1,local_b8,&local_a8);
  }
  return;
}



// FUNCTION 140c21c00 FUN_140c21c00 body=463 status=ok
// SIG undefined FUN_140c21c00(void)

void FUN_140c21c00(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  int local_20;
  
  uVar6 = (**(code **)(*param_1 + 0x148))();
  plVar7 = (longlong *)FUN_142f41d90(param_1,0);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = UUGButton::GetPrivateStaticClass();
    lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
    if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x710) != 0)) {
      UWorld::GetPlayerControllerIterator(uVar6,&local_28);
      while( true ) {
        if ((local_20 < 0) || ((int)local_28[1] <= local_20)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        lVar10 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
        if (lVar10 != 0) {
          lVar11 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar1 = (longlong *)(lVar10 + 0x1a98);
            plVar12 = (longlong *)*plVar1;
            plVar13 = plVar12 + (longlong)*(int *)(lVar10 + 0x1aa0) * 2;
            if (plVar12 != plVar13) {
              do {
                if (*plVar12 == *(longlong *)(lVar9 + 0x710)) goto LAB_140c21da7;
                plVar12 = plVar12 + 2;
              } while (plVar12 != plVar13);
            }
            uVar5 = FUN_142f42f30(param_1,*(undefined8 *)(lVar9 + 0x710));
            iVar3 = *(int *)(lVar10 + 0x1aa0);
            uVar6 = *(undefined8 *)(lVar9 + 0x710);
            uStack_30 = CONCAT13(uVar5,0x100);
            *(int *)(lVar10 + 0x1aa0) = iVar3 + 1;
            if (*(int *)(lVar10 + 0x1aa4) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
            }
            local_38 = (undefined4)uVar6;
            uStack_34 = (undefined4)((ulonglong)uVar6 >> 0x20);
            puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 0x10);
            *puVar2 = local_38;
            puVar2[1] = uStack_34;
            puVar2[2] = uStack_30;
            puVar2[3] = uStack_2c;
            if ((char)param_1[0x25] == '\x03') {
              uVar6 = AArchVisCharacter::StaticClass();
              lVar11 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
              if (lVar11 != 0) {
                FUN_142f451e0(lVar11,lVar10);
              }
            }
          }
        }
LAB_140c21da7:
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140c21dd0 FUN_140c21dd0 body=951 status=ok
// SIG undefined FUN_140c21dd0(void)

void FUN_140c21dd0(int param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 uVar15;
  int iVar16;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_140c0a7b0();
  iVar16 = 0;
  if (DAT_14686b3c8 < 1) {
    return;
  }
  while( true ) {
    lVar13 = (longlong)iVar16 * 0x78 + DAT_14686b3c0;
    lVar6 = FWeakObjectPtr::Get(lVar13);
    if (lVar6 == param_2) break;
    iVar16 = iVar16 + 1;
    if (DAT_14686b3c8 <= iVar16) {
      return;
    }
  }
  piVar10 = *(int **)(lVar13 + 0x60);
  if (piVar10 != (int *)0x0) {
LAB_140c21e55:
    if (*piVar10 != param_1) goto code_r0x000140c21e59;
    piVar3 = *(int **)(lVar13 + 0x60);
    if (*(int *)(lVar13 + 0x70) == 1) {
      while (piVar3 != (int *)0x0) {
        piVar3 = *(int **)(*(longlong *)(lVar13 + 0x60) + 0x20);
        FMemory::operator_delete(*(longlong *)(lVar13 + 0x60),0x30);
        *(int **)(lVar13 + 0x60) = piVar3;
      }
      *(undefined8 *)(lVar13 + 0x68) = 0;
      iVar11 = 0;
      *(undefined8 *)(lVar13 + 0x60) = 0;
    }
    else {
      if (piVar10 == piVar3) {
        lVar6 = *(longlong *)(piVar3 + 8);
        *(longlong *)(lVar13 + 0x60) = lVar6;
        *(undefined8 *)(lVar6 + 0x28) = 0;
      }
      else if (piVar10 == *(int **)(lVar13 + 0x68)) {
        lVar6 = *(longlong *)(*(int **)(lVar13 + 0x68) + 10);
        *(longlong *)(lVar13 + 0x68) = lVar6;
        *(undefined8 *)(lVar6 + 0x20) = 0;
      }
      else {
        *(undefined8 *)(*(longlong *)(piVar10 + 8) + 0x28) = *(undefined8 *)(piVar10 + 10);
        *(undefined8 *)(*(longlong *)(piVar10 + 10) + 0x20) = *(undefined8 *)(piVar10 + 8);
      }
      FMemory::operator_delete(piVar10,0x30);
      iVar11 = *(int *)(lVar13 + 0x70) + -1;
    }
    (**(code **)(*(longlong *)(lVar13 + 0x58) + 8))(lVar13 + 0x58,iVar11);
  }
LAB_140c21f03:
  uVar7 = FUN_1429bed90();
  AActor::GetComponentsByClass(param_2,&local_48,uVar7);
  lVar6 = *(longlong *)(lVar13 + 0x68);
  bVar4 = true;
  if (lVar6 != 0) {
    do {
      if (*(int *)(lVar6 + 4) == param_3) {
        bVar4 = false;
        plVar1 = local_48 + local_40;
        for (plVar14 = local_48; plVar14 != plVar1; plVar14 = plVar14 + 1) {
          lVar9 = *plVar14;
          if (lVar9 != 0) {
            lVar8 = FUN_1429bed90();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              FUN_142397420(lVar9,*(undefined4 *)(lVar6 + 8));
              local_38 = *(undefined4 *)(lVar6 + 0xc);
              uStack_34 = *(undefined4 *)(lVar6 + 0x10);
              uStack_30 = *(undefined4 *)(lVar6 + 0x14);
              uStack_2c = *(undefined4 *)(lVar6 + 0x18);
              FUN_1423972b0(lVar9,param_3,&local_38);
            }
          }
        }
      }
      lVar6 = *(longlong *)(lVar6 + 0x28);
    } while (lVar6 != 0);
    if (!bVar4) goto LAB_140c22159;
  }
  iVar11 = *(int *)(lVar13 + 0x70);
  plVar1 = local_48 + local_40;
  for (plVar14 = local_48; plVar14 != plVar1; plVar14 = plVar14 + 1) {
    lVar6 = *plVar14;
    if (lVar6 != 0) {
      lVar9 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (iVar11 == 0) {
          FUN_142398820(lVar6,*(undefined1 *)(lVar13 + 8));
          FUN_142397420(lVar6,*(undefined4 *)(lVar13 + 0x10));
          local_38 = *(undefined4 *)(lVar13 + 0x14);
          uStack_34 = *(undefined4 *)(lVar13 + 0x18);
          uStack_30 = *(undefined4 *)(lVar13 + 0x1c);
          uStack_2c = *(undefined4 *)(lVar13 + 0x20);
          FUN_1423972b0(lVar6,0,&local_38);
          FUN_142397350(lVar6,0,*(undefined1 *)(lVar13 + 9));
          local_38 = *(undefined4 *)(lVar13 + 0x24);
          uStack_34 = *(undefined4 *)(lVar13 + 0x28);
          uStack_30 = *(undefined4 *)(lVar13 + 0x2c);
          uStack_2c = *(undefined4 *)(lVar13 + 0x30);
          FUN_1423972b0(lVar6,1,&local_38);
          FUN_142397350(lVar6,1,*(undefined1 *)(lVar13 + 10));
          local_38 = *(undefined4 *)(lVar13 + 0x34);
          uStack_34 = *(undefined4 *)(lVar13 + 0x38);
          uStack_30 = *(undefined4 *)(lVar13 + 0x3c);
          uStack_2c = *(undefined4 *)(lVar13 + 0x40);
          FUN_1423972b0(lVar6,2,&local_38);
          FUN_142397350(lVar6,2,*(undefined1 *)(lVar13 + 0xb));
          local_38 = *(undefined4 *)(lVar13 + 0x44);
          uStack_34 = *(undefined4 *)(lVar13 + 0x48);
          uStack_30 = *(undefined4 *)(lVar13 + 0x4c);
          uStack_2c = *(undefined4 *)(lVar13 + 0x50);
          FUN_1423972b0(lVar6,3,&local_38);
          uVar15 = *(undefined1 *)(lVar13 + 0xc);
          iVar12 = 3;
        }
        else {
          puVar2 = (undefined4 *)(lVar13 + 0x14 + (longlong)param_3 * 0x10);
          local_38 = *puVar2;
          uStack_34 = puVar2[1];
          uStack_30 = puVar2[2];
          uStack_2c = puVar2[3];
          FUN_1423972b0(lVar6,param_3,&local_38);
          iVar12 = param_3;
          if (*(char *)(lVar13 + 8) == '\0') {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined1 *)((longlong)param_3 + 9 + lVar13);
          }
        }
        FUN_142397350(lVar6,iVar12,uVar15);
      }
    }
  }
  if (iVar11 == 0) {
    FUN_140c24970(&DAT_14686b3c0,iVar16,1,1);
  }
LAB_140c22159:
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
code_r0x000140c21e59:
  piVar10 = *(int **)(piVar10 + 8);
  if (piVar10 == (int *)0x0) goto LAB_140c21f03;
  goto LAB_140c21e55;
}



// FUNCTION 140c22190 FUN_140c22190 body=398 status=ok
// SIG undefined FUN_140c22190(void)

void FUN_140c22190(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142238430();
  if (param_1[0xaa] != 0) {
    uVar7 = 0;
    local_18 = 0;
    local_10 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_143013ad0(&local_18,param_1[0xaa],1,(int)param_1[0xab],param_1,0,0);
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_143018ff0(&local_18,uVar2,&local_28,0);
    if ((int)local_20 != 0) {
      plVar4 = (longlong *)*local_28;
      if (plVar4 != (longlong *)0x0) {
        uVar2 = FUN_14301f8f0();
        lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar2);
        if (lVar3 != 0) {
          FUN_142fea810(lVar3,param_1,0,1);
        }
      }
      uVar5 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
      if (local_28 + (int)local_20 < local_28) {
        uVar5 = uVar7;
      }
      plVar4 = local_28;
      if (uVar5 != 0) {
        do {
          plVar1 = (longlong *)*plVar4;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
          }
          plVar4 = plVar4 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if ((int)local_10 != 0) {
      plVar4 = (longlong *)(local_18 + 0x38);
      iVar6 = (int)local_10;
      do {
        if (plVar4[2] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar4 + -3);
        plVar4 = plVar4 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c22320 FUN_140c22320 body=64 status=ok
// SIG undefined FUN_140c22320(void)

void FUN_140c22320(longlong param_1)

{
  char cVar1;
  
  FUN_1422384a0();
  cVar1 = FText::IsEmpty(param_1 + 0x4e0);
  if (cVar1 != '\0') {
    FText::operator=(param_1 + 0x4e0,param_1 + 0x4b0);
  }
  return;
}



// FUNCTION 140c22360 FUN_140c22360 body=280 status=ok
// SIG undefined FUN_140c22360(void)

void FUN_140c22360(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142d88b90();
  lVar4 = param_1[0x97];
  if (lVar4 != 0) {
    lVar3 = FUN_141424d10();
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
      FUN_140cc7e60(lVar4);
    }
  }
  if (param_2 != 0) {
    lVar4 = FUN_14145f370();
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
      cVar2 = (**(code **)(*param_1 + 0x900))(param_1);
      if (cVar2 != '\0') {
        FUN_14145e750(param_2);
      }
      goto LAB_140c2241b;
    }
  }
  param_2 = 0;
LAB_140c2241b:
  lVar4 = param_1[0x97];
  if (lVar4 != 0) {
    lVar3 = FUN_141424d10();
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
      FUN_140cc0ea0(lVar4,param_2);
    }
  }
  return;
}



// FUNCTION 140c22480 FUN_140c22480 body=595 status=ok
// SIG undefined FUN_140c22480(void)

void FUN_140c22480(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 in_EAX;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    fVar10 = (float)DAT_1468b5da0;
    fVar12 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
    fVar7 = DAT_1468b5da8;
  }
  else {
    fVar10 = *(float *)(lVar1 + 0x210);
    local_68 = *(undefined8 *)(lVar1 + 0x210);
    fStack_60 = *(float *)(lVar1 + 0x218);
    fStack_5c = *(float *)(lVar1 + 0x21c);
    auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
    auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar10);
    auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_60);
    auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_5c);
    iVar6 = movmskps(in_EAX,auVar3);
    if (iVar6 != 0) {
      *(float *)(lVar1 + 0x250) = fVar10;
      *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
      *(float *)(lVar1 + 600) = fStack_60;
      *(float *)(lVar1 + 0x25c) = fStack_5c;
      puVar9 = (undefined8 *)FQuat::Rotator(&local_68,&local_58);
      *(undefined8 *)(lVar1 + 0x260) = *puVar9;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar9 + 1);
    }
    fVar10 = (float)*(undefined8 *)(lVar1 + 0x260);
    fVar12 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    fVar7 = *(float *)(lVar1 + 0x268);
  }
  fStack_60 = fVar7;
  local_50 = fVar7;
  local_58 = fVar10;
  fStack_54 = fVar12;
  FUN_142238930(param_1);
  lVar1 = *(longlong *)(param_1 + 0x468);
  if (ABS(*(float *)(lVar1 + 0x1c4) + *(float *)(lVar1 + 0x1c4)) <
      ABS(*(float *)(param_1 + 0xbc) - fVar10)) {
    fVar10 = *(float *)(param_1 + 0xbc);
  }
  local_68._4_4_ = fVar12;
  if (ABS(*(float *)(lVar1 + 0x1c8) + *(float *)(lVar1 + 0x1c8)) <
      ABS(*(float *)(param_1 + 0xc0) - fVar12)) {
    local_68._4_4_ = *(float *)(param_1 + 0xc0);
  }
  fVar5 = local_68._4_4_;
  fVar12 = *(float *)(param_1 + 0xc4);
  if (ABS(*(float *)(lVar1 + 0x1cc) + *(float *)(lVar1 + 0x1cc)) < ABS(fVar12 - fStack_60)) {
    fVar7 = fVar12;
    fStack_60 = fVar12;
  }
  fVar12 = fStack_60;
  lVar2 = *(longlong *)(param_1 + 0x168);
  local_68._0_4_ = fVar10;
  if (lVar2 == 0) {
    fVar11 = (float)DAT_1468b5da0;
    fVar13 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
    fVar8 = DAT_1468b5da8;
  }
  else {
    local_48 = *(float *)(lVar2 + 0x210);
    fStack_44 = *(float *)(lVar2 + 0x214);
    fStack_40 = *(float *)(lVar2 + 0x218);
    fStack_3c = *(float *)(lVar2 + 0x21c);
    auVar4._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_44);
    auVar4._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_48);
    auVar4._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_40);
    auVar4._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_3c);
    iVar6 = movmskps((int)lVar1,auVar4);
    if (iVar6 != 0) {
      *(float *)(lVar2 + 0x250) = local_48;
      *(float *)(lVar2 + 0x254) = fStack_44;
      *(float *)(lVar2 + 600) = fStack_40;
      *(float *)(lVar2 + 0x25c) = fStack_3c;
      puVar9 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
      *(undefined8 *)(lVar2 + 0x260) = *puVar9;
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar9 + 1);
    }
    fVar11 = (float)*(undefined8 *)(lVar2 + 0x260);
    fVar13 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
    fVar8 = *(float *)(lVar2 + 0x268);
  }
  if (((fVar11 != fVar10) || (fVar13 != fVar5)) || (fVar8 != fVar12)) {
    local_58 = (float)local_68;
    fStack_54 = local_68._4_4_;
    local_50 = fVar7;
    AActor::SetActorRotation(param_1,&local_58,0);
  }
  return;
}



// FUNCTION 140c226e0 FUN_140c226e0 body=340 status=ok
// SIG undefined FUN_140c226e0(void)

void FUN_140c226e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  FUN_142458ed0();
  lVar3 = param_1[0x97];
  if (lVar3 != 0) {
    lVar2 = FUN_141424d10();
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
      FUN_140cc7e60(lVar3);
    }
  }
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 != 0) {
    lVar2 = FUN_14141f270();
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
      plVar4 = *(longlong **)(lVar3 + 0x10c0);
      uVar6 = 0;
      uVar7 = (longlong)*(int *)(lVar3 + 0x10c8) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(lVar3 + 0x10c8) < plVar4) {
        uVar7 = uVar6;
      }
      if (uVar7 != 0) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x278))();
          }
          plVar4 = plVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar7);
      }
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar3 != 0) && (plVar4 = (longlong *)FUN_140c12480(lVar3), plVar4 != (longlong *)0x0)) &&
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b8))(plVar4), plVar4 != (longlong *)0x0)) {
    lVar3 = *plVar4;
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    (**(code **)(lVar3 + 0x68))(plVar4,uVar5);
  }
  return;
}



// FUNCTION 140c22840 FUN_140c22840 body=200 status=ok
// SIG undefined FUN_140c22840(void)

void FUN_140c22840(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142239650();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b468) {
    _Init_thread_header(&DAT_14686b468);
    if (DAT_14686b468 == -1) {
      FName::FName(&DAT_14686b460,L"Sanctuary3_P",1);
      _Init_thread_footer(&DAT_14686b468);
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 0x18) == DAT_14686b460) {
      uVar2 = UUGHitTextureButton::GetPrivateStaticClass();
      lVar1 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 0x710) = param_1[0xba];
      }
    }
  }
  return;
}



// FUNCTION 140c22910 FUN_140c22910 body=200 status=ok
// SIG undefined FUN_140c22910(void)

void FUN_140c22910(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142239650();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b4a8) {
    _Init_thread_header(&DAT_14686b4a8);
    if (DAT_14686b4a8 == -1) {
      FName::FName(&DAT_14686b4a0,L"Sanctuary3_P",1);
      _Init_thread_footer(&DAT_14686b4a8);
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 0x18) == DAT_14686b4a0) {
      uVar2 = UUGHitTextureButton::GetPrivateStaticClass();
      lVar1 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 0x710) = param_1[0xba];
      }
    }
  }
  return;
}



// FUNCTION 140c229e0 FUN_140c229e0 body=201 status=ok
// SIG undefined FUN_140c229e0(void)

void FUN_140c229e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((param_2 != 0) && (lVar2 = GetTransientPackage(), param_2 != lVar2)) &&
     (iVar5 = 0, 0 < *(int *)(param_1 + 0x4d8))) {
    lVar2 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x4d0));
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x20) != param_2)) {
        uVar1 = *(undefined8 *)(lVar4 + 0x18);
        uVar3 = UForceFeedbackAttenuation::StaticClass();
        lVar4 = FUN_141799680(uVar3,param_2,uVar1,0,0,0,0);
        if (lVar4 != 0) {
          *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x4d0)) = lVar4;
        }
      }
      iVar5 = iVar5 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x4d8));
  }
  return;
}



// FUNCTION 140c22ab0 FUN_140c22ab0 body=36 status=ok
// SIG undefined FUN_140c22ab0(void)

void FUN_140c22ab0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 140c22ae0 FUN_140c22ae0 body=100 status=ok
// SIG undefined FUN_140c22ae0(void)

void FUN_140c22ae0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x48,0);
  }
  return;
}



// FUNCTION 140c22b50 FUN_140c22b50 body=250 status=ok
// SIG undefined FUN_140c22b50(void)

void FUN_140c22b50(longlong *param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_2 + 0x2a8))(param_2);
    if (cVar2 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = FUN_14126dac0(uVar3);
      if (lVar4 != 0) {
        if (param_3 == 0) {
          FUN_14126a0a0(lVar4,1,0);
        }
        else {
          lVar5 = FUN_1413f82e0();
          lVar4 = *(longlong *)(param_3 + 0x10);
          if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_140c40820(param_3,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
          }
        }
      }
    }
  }
  lVar4 = param_1[0x97];
  if (lVar4 != 0) {
    lVar5 = FUN_141424d10();
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
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_140b56030(lVar4 + 0x670,uVar3);
    }
  }
  return;
}



// FUNCTION 140c22c50 FUN_140c22c50 body=753 status=ok
// SIG undefined FUN_140c22c50(void)

void FUN_140c22c50(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  void *_Dst;
  void *pvVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  int local_20;
  
  local_30 = *(int *)(param_2 + 1);
  lVar9 = (longlong)local_30;
  pvVar1 = (void *)*param_2;
  local_38 = (void *)0x0;
  iVar8 = 0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar9 * 2);
  }
  lVar9 = FUN_1422312c0(param_1);
  if (lVar9 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (DAT_14675dce0 < 0) {
        FUN_1411fbe40(lVar9 + 0x7a0,param_2);
      }
      else {
        FString::PrintfImpl(&local_28,L"?movieToLoad=%d");
        pvVar1 = local_28;
        iVar4 = local_30;
        if (local_20 != 0) {
          iVar8 = local_20 + -1;
        }
        if (iVar8 != 0) {
          lVar9 = (longlong)local_30;
          local_30 = (uint)(local_30 == 0) + local_30 + iVar8;
          if (local_2c < local_30) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar4);
          }
          _Dst = (void *)((longlong)local_38 + (lVar9 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar8 * 2);
          *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Dst) = 0;
        }
        if (local_28 != (void *)0x0) {
          FMemory::Free(local_28);
        }
        DAT_14675dce0 = -1;
      }
    }
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar9 != 0) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar7,&local_28);
    while( true ) {
      if ((local_20 < 0) || (*(int *)((longlong)local_28 + 8) <= local_20)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      lVar9 = FWeakObjectPtr::Get();
      if (lVar9 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (cVar5 = FUN_140cfdb70(), cVar5 != '\0')) {
          FUN_140cf9a30();
          plVar2 = *(longlong **)(lVar9 + 0x488);
          if (plVar2 != (longlong *)0x0) {
            if (*(longlong *)(lVar9 + 0x840) != 0) {
              FUN_142cbcba0();
            }
            (**(code **)(*plVar2 + 0x708))();
            lVar9 = FUN_1413f82e0();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((bVar3) && (plVar2[0x21c] != 0)) && (*(char *)(plVar2[0x21c] + 0x10e5) == '\x03'))
            {
              FUN_140ae2490();
              FUN_140ad0a50();
            }
          }
        }
      }
      local_20 = local_20 + 1;
    }
  }
  FUN_14245b690(param_1,&local_38,param_3);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c22f50 FUN_140c22f50 body=1099 status=ok
// SIG undefined FUN_140c22f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c22f50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined4 local_138 [4];
  longlong local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong local_108;
  longlong *plStack_100;
  longlong *local_f8 [4];
  longlong *local_d8 [4];
  undefined8 local_b8 [4];
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if ((param_2 != 0) &&
     (local_res18 = param_3, plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c),
     plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_118 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res10[0] = 0;
        local_98 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_98);
        if (plVar9 != (longlong *)0x0) {
          local_res10[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        if ((DAT_14686b150 == '\0') &&
           (puVar10 = (undefined8 *)FUN_140c123a0(), puVar10 != &DAT_14686b100)) {
          DAT_14686b100 = *puVar10;
          _DAT_14686b108 = puVar10[1];
          _DAT_14686b110 = puVar10[2];
          _DAT_14686b118 = puVar10[3];
          _DAT_14686b120 = puVar10[4];
          _DAT_14686b128 = puVar10[5];
          _DAT_14686b130 = puVar10[6];
          _DAT_14686b138 = puVar10[7];
          _DAT_14686b140 = puVar10[8];
          _DAT_14686b148 = puVar10[9];
          DAT_14686b150 = '\x01';
        }
        cVar5 = FUN_142190080(DAT_14686b100);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686b100), cVar5 != '\0')) {
          FUN_142190c70(&local_128,DAT_14686b100,L"PurchasedSDU");
          lVar7 = *(longlong *)(local_128 + 0xc0);
          if (*(longlong *)(local_128 + 0xc0) == 0) {
            lVar7 = local_128 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          plVar9 = local_118;
          local_f8[0] = local_118;
          FUN_1421923f0(local_90,DAT_14686add8,local_f8);
          FUN_140bfb300(uVar11,&DAT_14686b108,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = plVar9;
          FUN_1421923f0(local_70,DAT_14686ade0,local_d8);
          FUN_140bfb300(uVar11,&DAT_14686b110,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_d8);
          local_res20[0] = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,&DAT_14686b118,local_res20);
          FUN_140bfa9d0(uVar11,&DAT_14686b120,local_res10);
          local_138[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,&DAT_14686b128,local_138);
          FUN_14217e740(local_b8);
          FUN_142194380(local_b8,0x28,0,0,0);
          local_b8[0] = local_res18;
          FUN_1421923f0(local_50,DAT_14686adb8,local_b8);
          FUN_140bfb300(uVar11,&DAT_14686b140,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_b8);
          cVar5 = FUN_14218a740(&local_128,1);
          if (cVar5 != '\0') {
            local_108 = local_128;
            plStack_100 = plStack_120;
            if (plStack_120 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_108);
            plVar6 = plStack_100;
            if (plStack_100 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_100 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_100)(plStack_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_120 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar1 = (int *)((longlong)plStack_120 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_120 + 8))(plStack_120,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c233a0 FUN_140c233a0 body=36 status=ok
// SIG undefined FUN_140c233a0(void)

void FUN_140c233a0(void)

{
  FUN_140c0ea80(&DAT_14686ae28,0);
  FUN_140c0ea80(&DAT_14686ae38,0);
  return;
}



// FUNCTION 140c233d0 FUN_140c233d0 body=790 status=ok
// SIG undefined FUN_140c233d0(void)

int FUN_140c233d0(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  
  FUN_140c0a7b0();
  lVar17 = (longlong)DAT_14686b3c8 * 0x78 + DAT_14686b3c0;
  lVar15 = DAT_14686b3c0;
  do {
    if (lVar15 == lVar17) {
LAB_140c2345f:
      iVar2 = DAT_14686b3c8;
      lVar15 = (longlong)DAT_14686b3c8;
      DAT_14686b3c8 = DAT_14686b3c8 + 1;
      if (DAT_14686b3cc < DAT_14686b3c8) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (&DAT_14686b3c0,iVar2);
      }
      lVar17 = DAT_14686b3c0;
      lVar15 = lVar15 * 0x78;
      *(undefined4 *)(lVar15 + DAT_14686b3c0) = 0xffffffff;
      *(undefined4 *)(lVar15 + 4 + lVar17) = 0;
      *(undefined4 *)(lVar15 + 8 + lVar17) = 0x1010100;
      *(undefined1 *)(lVar15 + 0xc + lVar17) = 1;
      *(undefined4 *)(lVar15 + 0x10 + lVar17) = 0;
      *(undefined ***)(lVar15 + 0x58 + lVar17) = &PTR_FUN_144336f68;
      *(undefined8 *)(lVar15 + 0x60 + lVar17) = 0;
      *(undefined8 *)(lVar15 + 0x68 + lVar17) = 0;
      *(undefined4 *)(lVar15 + 0x70 + lVar17) = 0;
      lVar15 = DAT_14686b3c0 + lVar15;
      FWeakObjectPtr::operator=(lVar15,param_1);
LAB_140c234e0:
      iVar9 = DAT_14686a900;
      bVar18 = *(int *)(lVar15 + 0x70) == 0;
      local_58 = DAT_14686a900;
      DAT_14686a900 = DAT_14686a900 + 1;
      uVar6 = *(undefined8 *)(param_3 + 0x50);
      uVar7 = *(undefined8 *)(param_3 + 0x58);
      iVar2 = *(int *)(param_3 + 0x60);
      iStack_4c = (int)uVar6;
      uStack_48 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_44 = (undefined4)uVar7;
      iStack_40 = (int)((ulonglong)uVar7 >> 0x20);
      iStack_54 = param_2;
      iStack_50 = iVar2;
      uVar12 = FUN_1429bed90();
      AActor::GetComponentsByClass(param_1,&local_78,uVar12);
      plVar1 = local_78 + local_70;
      for (plVar16 = local_78; plVar16 != plVar1; plVar16 = plVar16 + 1) {
        lVar17 = *plVar16;
        if (lVar17 != 0) {
          lVar13 = FUN_1429bed90();
          lVar11 = *(longlong *)(lVar17 + 0x10);
          if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
              lVar13 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            if (bVar18) {
              bVar18 = false;
              *(byte *)(lVar15 + 8) = *(byte *)(lVar17 + 0x2f8) >> 7;
              *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)(lVar17 + 0x308);
              uVar12 = *(undefined8 *)(lVar17 + 0x314);
              *(undefined8 *)(lVar15 + 0x14) = *(undefined8 *)(lVar17 + 0x30c);
              *(undefined8 *)(lVar15 + 0x1c) = uVar12;
              *(byte *)(lVar15 + 9) = *(byte *)(lVar17 + 0x2fc) & 1;
              uVar12 = *(undefined8 *)(lVar17 + 0x324);
              *(undefined8 *)(lVar15 + 0x24) = *(undefined8 *)(lVar17 + 0x31c);
              *(undefined8 *)(lVar15 + 0x2c) = uVar12;
              *(byte *)(lVar15 + 10) = (byte)(*(uint *)(lVar17 + 0x2fc) >> 1) & 1;
              uVar12 = *(undefined8 *)(lVar17 + 0x334);
              *(undefined8 *)(lVar15 + 0x34) = *(undefined8 *)(lVar17 + 0x32c);
              *(undefined8 *)(lVar15 + 0x3c) = uVar12;
              *(byte *)(lVar15 + 0xb) = (byte)(*(uint *)(lVar17 + 0x2fc) >> 2) & 1;
              uVar3 = *(undefined4 *)(lVar17 + 0x340);
              uVar4 = *(undefined4 *)(lVar17 + 0x344);
              uVar5 = *(undefined4 *)(lVar17 + 0x348);
              *(undefined4 *)(lVar15 + 0x44) = *(undefined4 *)(lVar17 + 0x33c);
              *(undefined4 *)(lVar15 + 0x48) = uVar3;
              *(undefined4 *)(lVar15 + 0x4c) = uVar4;
              *(undefined4 *)(lVar15 + 0x50) = uVar5;
              *(byte *)(lVar15 + 0xc) = (byte)(*(uint *)(lVar17 + 0x2fc) >> 3) & 1;
            }
            FUN_142398820(lVar17,CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
            FUN_142397420(lVar17,iVar2);
            local_68 = uVar6;
            uStack_60 = uVar7;
            FUN_1423972b0(lVar17,param_2,&local_68);
            FUN_142397350(lVar17,param_2,1);
          }
        }
      }
      piVar14 = (int *)operator_new(0x30);
      if (piVar14 != (int *)0x0) {
        *piVar14 = local_58;
        piVar14[1] = iStack_54;
        piVar14[2] = iStack_50;
        piVar14[3] = iStack_4c;
        *(ulonglong *)(piVar14 + 4) = CONCAT44(uStack_44,uStack_48);
        piVar14[6] = iStack_40;
        piVar14[8] = 0;
        piVar14[9] = 0;
        piVar14[10] = 0;
        piVar14[0xb] = 0;
        if (*(longlong *)(lVar15 + 0x68) == 0) {
          *(int **)(lVar15 + 0x60) = piVar14;
        }
        else {
          *(int **)(*(longlong *)(lVar15 + 0x68) + 0x20) = piVar14;
          *(undefined8 *)(piVar14 + 10) = *(undefined8 *)(lVar15 + 0x68);
        }
        *(int **)(lVar15 + 0x68) = piVar14;
        (**(code **)(*(longlong *)(lVar15 + 0x58) + 8))(lVar15 + 0x58,*(int *)(lVar15 + 0x70) + 1);
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      return iVar9;
    }
    cVar10 = FWeakObjectPtr::IsValid(lVar15);
    if ((cVar10 == '\0') || (lVar11 = FWeakObjectPtr::Get(lVar15), lVar11 != param_1)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) {
      if (lVar15 != 0) goto LAB_140c234e0;
      goto LAB_140c2345f;
    }
    lVar15 = lVar15 + 0x78;
  } while( true );
}



// FUNCTION 140c236f0 FUN_140c236f0 body=129 status=ok
// SIG undefined FUN_140c236f0(void)

ulonglong FUN_140c236f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_140c23cd0(param_1,param_2,&local_18);
  plVar4 = (longlong *)param_3[1];
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
      uVar6 = uVar6 & 0xffffffff;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140c23780 FUN_140c23780 body=102 status=ok
// SIG undefined FUN_140c23780(void)

void FUN_140c23780(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  uVar1 = *param_5;
  param_5._4_4_ = param_5[1];
  local_res18 = *param_4;
  local_res1c = param_4[1];
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = *(undefined8 *)(param_3 + 2);
  param_5._0_4_ = uVar1;
  FUN_140c23860(param_1,param_2,&local_18,&local_res18,&param_5,param_6);
  return;
}



// FUNCTION 140c237f0 FUN_140c237f0 body=102 status=ok
// SIG undefined FUN_140c237f0(void)

void FUN_140c237f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  uVar1 = *param_5;
  param_5._4_4_ = param_5[1];
  local_res18 = *param_4;
  local_res1c = param_4[1];
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = *(undefined8 *)(param_3 + 2);
  param_5._0_4_ = uVar1;
  FUN_140c23ab0(param_1,param_2,&local_18,&local_res18,&param_5,param_6);
  return;
}



// FUNCTION 140c23860 FUN_140c23860 body=583 status=ok
// SIG undefined FUN_140c23860(void)

int FUN_140c23860(char param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5,
                 undefined1 param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  int local_98;
  undefined2 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  int local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined1 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24;
  
  if (((DAT_14686a909 == '\0') || (param_1 != '\x01')) &&
     (cVar2 = FUN_140bcae40(param_2), cVar2 != '\0')) {
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_88 = 0;
    FText::FText(local_80);
    FText::FText(local_68);
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    local_38 = 0;
    FWeakObjectPtr::operator=(&local_34,0);
    FWeakObjectPtr::operator=(&local_2c,0);
    local_98 = DAT_14686a904;
    DAT_14686a904 = DAT_14686a904 + 1;
    local_24 = 0;
    local_94 = CONCAT11(0xf,param_1);
    uVar4 = UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>
            ::GetAddress(param_2);
    FText::operator=(local_80,uVar4);
    uVar4 = FAvfMediaFactoryModule::GetSupportedPlatforms(param_2);
    FText::operator=(local_68,uVar4);
    local_48 = *param_3;
    local_44 = param_3[1];
    local_40 = *(undefined8 *)(param_3 + 2);
    local_34 = *param_4;
    local_30 = param_4[1];
    local_2c = *param_5;
    local_28 = param_5[1];
    local_38 = param_6;
    iVar3 = FUN_140c103a0(&local_98,&DAT_14686ae28);
    if ((iVar3 == -1) &&
       (iVar3 = FUN_140c103a0(&local_98,&DAT_14686ae38), iVar1 = DAT_14686ae30, iVar3 == -1)) {
      lVar5 = (longlong)DAT_14686ae30;
      DAT_14686ae30 = DAT_14686ae30 + 1;
      if (DAT_14686ae34 < DAT_14686ae30) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (&DAT_14686ae28,iVar1);
      }
      piVar6 = (int *)(lVar5 * 0x78 + DAT_14686ae28);
      *piVar6 = local_98;
      *(undefined1 *)(piVar6 + 1) = (undefined1)local_94;
      *(undefined1 *)((longlong)piVar6 + 5) = local_94._1_1_;
      *(undefined8 *)(piVar6 + 2) = local_90;
      *(longlong *)(piVar6 + 4) = local_88;
      if (local_88 != 0) {
        LOCK();
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
        UNLOCK();
      }
      FText::FText(piVar6 + 6,local_80);
      FText::FText(piVar6 + 0xc,local_68);
      piVar6[0x12] = local_50;
      piVar6[0x14] = local_48;
      piVar6[0x15] = local_44;
      *(undefined8 *)(piVar6 + 0x16) = local_40;
      *(undefined1 *)(piVar6 + 0x18) = local_38;
      piVar6[0x19] = local_34;
      piVar6[0x1a] = local_30;
      piVar6[0x1b] = local_2c;
      piVar6[0x1c] = local_28;
      *(undefined1 *)(piVar6 + 0x1d) = local_24;
      iVar3 = local_98;
    }
    FUN_140bff450(&local_98);
    return iVar3;
  }
  return -1;
}



// FUNCTION 140c23ab0 FUN_140c23ab0 body=529 status=ok
// SIG undefined FUN_140c23ab0(void)

int FUN_140c23ab0(char param_1,undefined1 param_2,int *param_3,int *param_4,int *param_5,
                 undefined1 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int local_98;
  undefined2 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  int local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined1 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24;
  
  if ((DAT_14686a909 == '\0') || (param_1 != '\x01')) {
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_88 = 0;
    FText::FText(local_80);
    FText::FText(local_68);
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    local_38 = 0;
    FWeakObjectPtr::operator=(&local_34,0);
    FWeakObjectPtr::operator=(&local_2c,0);
    local_98 = DAT_14686a904;
    DAT_14686a904 = DAT_14686a904 + 1;
    local_48 = *param_3;
    local_44 = param_3[1];
    local_40 = *(undefined8 *)(param_3 + 2);
    local_34 = *param_4;
    local_30 = param_4[1];
    local_2c = *param_5;
    local_28 = param_5[1];
    local_38 = param_6;
    local_24 = 0;
    local_94 = CONCAT11(param_2,param_1);
    iVar2 = FUN_140c103a0(&local_98,&DAT_14686ae28);
    if (iVar2 == -1) {
      iVar2 = FUN_140c103a0(&local_98,&DAT_14686ae38);
      iVar1 = DAT_14686ae30;
      if (iVar2 == -1) {
        lVar3 = (longlong)DAT_14686ae30;
        DAT_14686ae30 = DAT_14686ae30 + 1;
        if (DAT_14686ae34 < DAT_14686ae30) {
          TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                    (&DAT_14686ae28,iVar1);
        }
        piVar4 = (int *)(lVar3 * 0x78 + DAT_14686ae28);
        *piVar4 = local_98;
        *(undefined1 *)(piVar4 + 1) = (undefined1)local_94;
        *(undefined1 *)((longlong)piVar4 + 5) = local_94._1_1_;
        *(undefined8 *)(piVar4 + 2) = local_90;
        *(longlong *)(piVar4 + 4) = local_88;
        if (local_88 != 0) {
          LOCK();
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
          UNLOCK();
        }
        FText::FText(piVar4 + 6,local_80);
        FText::FText(piVar4 + 0xc,local_68);
        piVar4[0x12] = local_50;
        piVar4[0x14] = local_48;
        piVar4[0x15] = local_44;
        *(undefined8 *)(piVar4 + 0x16) = local_40;
        *(undefined1 *)(piVar4 + 0x18) = local_38;
        piVar4[0x19] = local_34;
        piVar4[0x1a] = local_30;
        piVar4[0x1b] = local_2c;
        piVar4[0x1c] = local_28;
        *(undefined1 *)(piVar4 + 0x1d) = local_24;
        iVar2 = local_98;
      }
    }
    FUN_140bff450(&local_98);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 140c23cd0 FUN_140c23cd0 body=668 status=ok
// SIG undefined FUN_140c23cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140c23cd0(char param_1,undefined1 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  int local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined1 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined1 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((DAT_14686a909 == '\0') || (param_1 != '\x01')) {
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    plStack_b8 = (longlong *)0x0;
    FText::FText(local_b0);
    FText::FText(local_98);
    local_80 = 0;
    FWeakObjectPtr::operator=(&local_78,0);
    local_70 = 0;
    local_68 = 0;
    FWeakObjectPtr::operator=(&local_64,0);
    FWeakObjectPtr::operator=(&local_5c,0);
    plVar2 = plStack_b8;
    local_c8 = DAT_14686a904;
    DAT_14686a904 = DAT_14686a904 + 1;
    uVar4 = *param_3;
    plVar5 = (longlong *)param_3[1];
    local_54 = 0;
    local_c4 = CONCAT11(param_2,param_1);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 8) = *(int *)((longlong)plVar5 + 8) + 1;
      UNLOCK();
    }
    local_d8._0_4_ = (undefined4)uVar4;
    local_48 = (undefined4)local_d8;
    local_d8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_44 = local_d8._4_4_;
    uStack_d0._0_4_ = SUB84(plVar5,0);
    uStack_40 = (undefined4)uStack_d0;
    uStack_d0._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
    uStack_3c = uStack_d0._4_4_;
    local_d8 = local_c0;
    uStack_d0 = plStack_b8;
    local_c0 = uVar4;
    if (plStack_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b8 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        puVar6 = (undefined8 *)*plStack_b8;
        plStack_b8 = plVar5;
        (*(code *)*puVar6)(plVar2);
        LOCK();
        piVar9 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        plVar5 = plStack_b8;
        if (iVar7 == 1) {
          (**(code **)(*uStack_d0 + 8))(uStack_d0,1);
          plVar5 = plStack_b8;
        }
      }
    }
    plStack_b8 = plVar5;
    iVar7 = FUN_140c103a0(&local_c8,&DAT_14686ae28);
    if (iVar7 == -1) {
      iVar7 = FUN_140c103a0(&local_c8,&DAT_14686ae38);
      iVar3 = DAT_14686ae30;
      if (iVar7 == -1) {
        lVar8 = (longlong)DAT_14686ae30;
        DAT_14686ae30 = DAT_14686ae30 + 1;
        if (DAT_14686ae34 < DAT_14686ae30) {
          TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                    (&DAT_14686ae28,iVar3);
        }
        piVar9 = (int *)(lVar8 * 0x78 + DAT_14686ae28);
        *piVar9 = local_c8;
        *(undefined1 *)(piVar9 + 1) = (undefined1)local_c4;
        *(undefined1 *)((longlong)piVar9 + 5) = local_c4._1_1_;
        *(undefined8 *)(piVar9 + 2) = local_c0;
        *(longlong **)(piVar9 + 4) = plStack_b8;
        if (plStack_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_b8 + 8) = *(int *)((longlong)plStack_b8 + 8) + 1;
          UNLOCK();
        }
        FText::FText(piVar9 + 6,local_b0);
        FText::FText(piVar9 + 0xc,local_98);
        piVar9[0x12] = local_80;
        piVar9[0x14] = local_78;
        piVar9[0x15] = local_74;
        *(undefined8 *)(piVar9 + 0x16) = local_70;
        *(undefined1 *)(piVar9 + 0x18) = local_68;
        piVar9[0x19] = local_64;
        piVar9[0x1a] = local_60;
        piVar9[0x1b] = local_5c;
        piVar9[0x1c] = local_58;
        *(undefined1 *)(piVar9 + 0x1d) = local_54;
        iVar7 = local_c8;
      }
      FUN_140bff450(&local_c8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    }
    else {
      FUN_140bff450();
      plVar5 = (longlong *)param_3[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar9 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  else {
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    iVar7 = -1;
  }
  return iVar7;
}



// FUNCTION 140c23f70 FUN_140c23f70 body=75 status=ok
// SIG undefined FUN_140c23f70(void)

undefined8 FUN_140c23f70(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14245bed0();
  if ((cVar1 == '\0') &&
     ((((*(byte *)(param_1 + 0x508) & 1) != 0 || (*(longlong *)(param_1 + 0x500) != DAT_146af3980))
      || (*(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x510) < 1)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140c23fc0 FUN_140c23fc0 body=401 status=ok
// SIG undefined FUN_140c23fc0(void)

longlong FUN_140c23fc0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_res10 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686bc98) && (_Init_thread_header(&DAT_14686bc98), DAT_14686bc98 == -1))
  {
    FName::FName(&DAT_14686bc90,L"Mission_RaidOnMaliwan_C",1);
    _Init_thread_footer(&DAT_14686bc98);
  }
  if (param_2 != 0) {
    lVar4 = FUN_142f71d80();
    lVar5 = param_2;
    do {
      if (lVar5 == lVar4) {
        lVar4 = FUN_142f71d80();
        lVar5 = param_2;
        goto LAB_140c24060;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  goto LAB_140c24010;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0) {
LAB_140c24060:
    lVar6 = param_2;
    if (lVar5 == lVar4) goto LAB_140c24075;
  }
  lVar6 = 0;
LAB_140c24075:
  if (*(longlong *)(lVar6 + 0x18) == DAT_14686bc90) {
    return 0;
  }
LAB_140c24010:
  lVar5 = FUN_142f686a0(param_1,param_2);
  if (lVar5 != 0) {
    lVar4 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (cVar1 = *(char *)(lVar5 + 0x4a8), cVar1 != '\0')) {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      pcVar8 = (char *)FUN_140cb6000(local_res10,uVar7);
      if ((*pcVar8 == cVar1) && (lVar4 = param_1[0xdc], lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x58);
        *(int *)(lVar4 + 0x58) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x5c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x50,iVar2);
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar2 * 8) = param_2;
      }
    }
  }
  return lVar5;
}



// FUNCTION 140c24160 FUN_140c24160 body=64 status=ok
// SIG undefined FUN_140c24160(void)

void FUN_140c24160(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140aab610(uVar1);
  if (lVar2 != 0) {
    FUN_140ab8b20(lVar2,param_1,param_2);
  }
  return;
}



// FUNCTION 140c241a0 FUN_140c241a0 body=490 status=ok
// SIG undefined FUN_140c241a0(void)

void FUN_140c241a0(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  
  lVar8 = 0;
  FUN_140c136e0(&local_68,0);
  if (local_68 == 0) goto LAB_140c24344;
  local_res18 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((local_res18 == 0) || (iVar4 = FUN_1428cf800(local_res18), iVar4 != 3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_58 = &local_res18;
  param_1[0xb] = 0;
  local_50 = param_1;
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 == 0) || (plVar6 = (longlong *)FUN_142f6c9f0(lVar5), plVar6 == (longlong *)0x0)) {
    if (!bVar2) goto LAB_140c24344;
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x700))(plVar6);
    if (cVar3 != '\0') {
      FUN_140c20d90(param_1);
      goto LAB_140c24344;
    }
    if (!bVar2) {
      uStack_40 = 0;
      local_48 = FUN_140c20d90;
      plVar11 = plVar6 + 0xa2;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_3c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
        iVar4 = (int)plVar6[0xa3];
        lVar8 = *plVar9;
        *(int *)(plVar6 + 0xa3) = iVar4 + 1;
        if (*(int *)((longlong)plVar6 + 0x51c) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar4);
        }
        puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar11);
        *puVar10 = plVar7;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      param_1[9] = lVar8;
      goto LAB_140c24344;
    }
  }
  FUN_140c00ea0(&local_58);
LAB_140c24344:
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140c24390 Remove body=419 status=ok
// SIG undefined Remove(void)

int TArray<TSubclassOf<UUGGearCampaignKey>,FDefaultAllocator>::Remove
              (longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_res8;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  plVar2 = (longlong *)*param_1;
  iVar8 = 0;
  local_res8 = 0;
  if (*plVar2 != 0) {
    lVar3 = FUN_142f71d80();
    lVar7 = *plVar2;
    for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar3) goto LAB_140c24400;
    }
  }
  lVar7 = 0;
LAB_140c24400:
  if (*param_2 != 0) {
    lVar4 = FUN_142f71d80();
    lVar6 = *param_2;
    for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_140c24425;
    }
  }
  lVar6 = 0;
LAB_140c24425:
  bVar11 = lVar7 != lVar6;
  lVar7 = 0;
  iVar10 = 0;
  iVar9 = iVar8;
joined_r0x000140c2443f:
  do {
    lVar7 = lVar7 + 1;
    iVar8 = iVar8 + 1;
    if (lVar7 < iVar1) {
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + lVar7 * 8) != 0) {
        lVar4 = FUN_142f71d80();
        lVar6 = *(longlong *)(lVar6 + lVar7 * 8);
        for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == lVar4) goto LAB_140c24480;
        }
      }
      lVar6 = 0;
LAB_140c24480:
      if (*param_2 != 0) {
        lVar5 = FUN_142f71d80();
        lVar3 = *param_2;
        for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar5) goto LAB_140c244a6;
        }
      }
      lVar3 = 0;
LAB_140c244a6:
      iVar10 = local_res8;
      if (bVar11 == (lVar6 != lVar3)) goto joined_r0x000140c2443f;
    }
    if (bVar11 != false) {
      if (iVar10 != iVar9) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 8),
                   (void *)(*param_1 + (longlong)iVar9 * 8),(longlong)(iVar8 - iVar9) << 3);
      }
      iVar10 = iVar10 + (iVar8 - iVar9);
      local_res8 = iVar10;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar9 = iVar8;
    if (iVar1 <= lVar7) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}



// FUNCTION 140c24540 thunk_FUN_140c24550 body=5 status=ok
// SIG undefined thunk_FUN_140c24550(void)

void thunk_FUN_140c24550(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)*param_1;
    uVar10 = (ulonglong)(int)param_1[1];
    if (plVar7 != plVar7 + uVar10 * 8) {
      plVar8 = plVar7 + 2;
      do {
        plVar6 = (longlong *)*param_2;
        plVar1 = plVar6 + (int)param_2[1];
        for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
          if ((*plVar6 != 0) && (lVar4 = UPlayer::GetPlayerController(*plVar6,param_3), lVar4 != 0))
          {
            lVar5 = FUN_14145f370();
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
              FUN_140c24f10(plVar8 + -2,lVar4);
              if (((longlong *)*plVar8 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*(longlong *)*plVar8 + 0x20))(), cVar3 == '\0')) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (lVar4 = FUN_140cff1b0(lVar4), lVar4 != 0)) {
                FUN_140cca1d0(lVar4,plVar8 + -1);
              }
            }
          }
        }
        plVar1 = plVar8 + 6;
        plVar8 = plVar8 + 8;
      } while (plVar1 != plVar7 + uVar10 * 8);
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      plVar7 = (longlong *)*param_1;
    }
    if ((int)uVar10 != 0) {
      plVar7 = plVar7 + 1;
      do {
        FUN_1404bf980(plVar7);
        plVar7 = plVar7 + 8;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
    }
  }
  return;
}



// FUNCTION 140c24550 FUN_140c24550 body=399 status=ok
// SIG undefined FUN_140c24550(void)

void FUN_140c24550(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)*param_1;
    uVar10 = (ulonglong)(int)param_1[1];
    if (plVar7 != plVar7 + uVar10 * 8) {
      plVar8 = plVar7 + 2;
      do {
        plVar6 = (longlong *)*param_2;
        plVar1 = plVar6 + (int)param_2[1];
        for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
          if ((*plVar6 != 0) && (lVar4 = UPlayer::GetPlayerController(*plVar6,param_3), lVar4 != 0))
          {
            lVar5 = FUN_14145f370();
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
              FUN_140c24f10(plVar8 + -2,lVar4);
              if (((longlong *)*plVar8 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*(longlong *)*plVar8 + 0x20))(), cVar3 == '\0')) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (lVar4 = FUN_140cff1b0(lVar4), lVar4 != 0)) {
                FUN_140cca1d0(lVar4,plVar8 + -1);
              }
            }
          }
        }
        plVar1 = plVar8 + 6;
        plVar8 = plVar8 + 8;
      } while (plVar1 != plVar7 + uVar10 * 8);
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      plVar7 = (longlong *)*param_1;
    }
    if ((int)uVar10 != 0) {
      plVar7 = plVar7 + 1;
      do {
        FUN_1404bf980(plVar7);
        plVar7 = plVar7 + 8;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
    }
  }
  return;
}



// FUNCTION 140c246e0 FUN_140c246e0 body=366 status=ok
// SIG undefined FUN_140c246e0(void)

void FUN_140c246e0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x78);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)plVar7[3];
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
      plVar3 = (longlong *)*plVar7;
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
      plVar3 = (longlong *)plVar7[-2];
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
      plVar7 = plVar7 + 0xf;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x78),
                 (void *)((longlong)(param_2 + param_3) * 0x78 + *param_1),(longlong)iVar5 * 0x78);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      FUN_14089e470(param_1);
    }
  }
  return;
}



// FUNCTION 140c24850 FUN_140c24850 body=277 status=ok
// SIG undefined FUN_140c24850(void)

void FUN_140c24850(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar1 = param_1;
    }
    plVar3 = (longlong *)(lVar1 + (longlong)param_2 * 0x10);
    iVar2 = param_3;
    do {
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          FUN_14217f430(lVar1);
          lVar1 = lVar1 + 0x28;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = *(int *)(param_1 + 0x18);
    iVar4 = (iVar2 - param_2) - param_3;
    if (iVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar1 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_3 + param_2) * 0x10 + lVar1),(longlong)iVar4 << 4);
      iVar2 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar2 - param_3;
    if (param_4 != '\0') {
      FUN_140c25130(param_1);
    }
  }
  return;
}



// FUNCTION 140c24970 FUN_140c24970 body=274 status=ok
// SIG undefined FUN_140c24970(void)

void FUN_140c24970(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x58 + (longlong)param_2 * 0x78);
    iVar3 = param_3;
    do {
      lVar1 = plVar2[1];
      *plVar2 = (longlong)&PTR_FUN_144336f68;
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(plVar2[1] + 0x20);
        FMemory::operator_delete(plVar2[1],0x30);
        plVar2[1] = lVar1;
      }
      plVar2[2] = 0;
      plVar2[1] = 0;
      (**(code **)(*plVar2 + 8))(plVar2,0);
      plVar2 = plVar2 + 0xf;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar4 = (iVar3 - param_2) - param_3;
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x78),
                 (void *)((longlong)(iVar3 - iVar4) * 0x78 + *param_1),(longlong)iVar4 * 0x78);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_140c25090(param_1);
    }
  }
  return;
}



// FUNCTION 140c24a90 FUN_140c24a90 body=477 status=ok
// SIG undefined FUN_140c24a90(void)

void FUN_140c24a90(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (((param_1 != 0) && (*(longlong **)(param_2 + 8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x1978);
    lVar5 = (longlong)*(int *)(param_1 + 0x1980) * 0x40 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
      if (((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
          (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar2 == '\0')) ||
         ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
          (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
           (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar2 == '\0')) &&
          ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
           (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')))) ||
         (((((bVar1 && (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                                          (*(undefined8 **)(param_2 + 8),
                                           *(undefined8 *)(lVar4 + 0x10)), cVar2 != '\0')) ||
            (*(float *)(lVar4 + 4) <= 0.0 && *(float *)(lVar4 + 4) != 0.0)) ||
           ((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0 ||
            (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar2 == '\0')))) ||
          ((cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x38), cVar2 == '\0' &&
           (*(char *)(lVar4 + 0x34) == '\0')))))) {
        FUN_140c24f10(lVar4,param_1);
        if (((*(longlong **)(lVar4 + 0x10) != (longlong *)0x0) &&
            (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar2 != '\0')) &&
           (lVar3 = FUN_140cff1b0(param_1), lVar3 != 0)) {
          FUN_140cca1d0(lVar3,lVar4 + 8);
        }
      }
    }
    local_50 = *(undefined8 *)(param_2 + 8);
    local_48 = *(longlong *)(param_2 + 0x10);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_58 = &PTR_FUN_143f740c8;
    local_40 = 0;
    local_38 = 0;
    local_30 = param_3;
    FUN_140bfa610(param_1 + 0x1978,&local_58);
    FUN_1404bf980(&local_58);
  }
  return;
}



// FUNCTION 140c24c70 FUN_140c24c70 body=127 status=ok
// SIG undefined FUN_140c24c70(void)

void FUN_140c24c70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
    if ((lVar3 != 0) && (lVar3 = FUN_1422312c0(param_2), lVar3 != 0)) {
      lVar4 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140be8160(lVar3,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140c24cf0 thunk_FUN_140c24d00 body=5 status=ok
// SIG undefined thunk_FUN_140c24d00(void)

void thunk_FUN_140c24d00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *aplStackX_18 [2];
  
  if (param_3 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_3 + 0x148))(param_3);
    uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar7 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar6);
    if ((lVar5 != 0) && (lVar7 != 0)) {
      plVar2 = (longlong *)*param_1;
      lVar7 = param_1[1];
      if (plVar2 != plVar2 + (longlong)(int)lVar7 * 8) {
        plVar11 = plVar2 + 2;
        do {
          aplStackX_18[0] = (longlong *)plVar11[5];
          cVar4 = FUN_14058c1e0(aplStackX_18,param_3);
          if ((cVar4 != '\0') ||
             (*(float *)((longlong)plVar11 + -0xc) <= 0.0 &&
              *(float *)((longlong)plVar11 + -0xc) != 0.0)) {
LAB_140c24df4:
            plVar10 = (longlong *)*param_2;
            plVar1 = plVar10 + (int)param_2[1];
            for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
              if ((*plVar10 != 0) &&
                 (lVar8 = UPlayer::GetPlayerController(*plVar10,lVar5), lVar8 != 0)) {
                lVar9 = FUN_14145f370();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  FUN_140c24f10(plVar11 + -2,lVar8);
                  if (((longlong *)*plVar11 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x20))(), cVar4 == '\0')) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if ((bVar3) && (lVar8 = FUN_140cff1b0(lVar8), lVar8 != 0)) {
                    FUN_140cca1d0(lVar8,plVar11 + -1);
                  }
                }
              }
            }
          }
          else {
            if (((longlong *)*plVar11 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x20))(), cVar4 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) ||
               ((cVar4 = FWeakObjectPtr::IsValid(plVar11 + 5), cVar4 == '\0' &&
                (*(char *)((longlong)plVar11 + 0x24) == '\0')))) goto LAB_140c24df4;
          }
          plVar1 = plVar11 + 6;
          plVar11 = plVar11 + 8;
        } while (plVar1 != plVar2 + (longlong)(int)lVar7 * 8);
      }
      aplStackX_18[0] = param_3;
      FUN_140bfa800(param_1,aplStackX_18);
    }
  }
  return;
}



// FUNCTION 140c24d00 FUN_140c24d00 body=514 status=ok
// SIG undefined FUN_140c24d00(void)

void FUN_140c24d00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res18 [2];
  
  if (param_3 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_3 + 0x148))(param_3);
    uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar7 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar6);
    if ((lVar5 != 0) && (lVar7 != 0)) {
      plVar2 = (longlong *)*param_1;
      lVar7 = param_1[1];
      if (plVar2 != plVar2 + (longlong)(int)lVar7 * 8) {
        plVar11 = plVar2 + 2;
        do {
          local_res18[0] = (longlong *)plVar11[5];
          cVar4 = FUN_14058c1e0(local_res18,param_3);
          if ((cVar4 != '\0') ||
             (*(float *)((longlong)plVar11 + -0xc) <= 0.0 &&
              *(float *)((longlong)plVar11 + -0xc) != 0.0)) {
LAB_140c24df4:
            plVar10 = (longlong *)*param_2;
            plVar1 = plVar10 + (int)param_2[1];
            for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
              if ((*plVar10 != 0) &&
                 (lVar8 = UPlayer::GetPlayerController(*plVar10,lVar5), lVar8 != 0)) {
                lVar9 = FUN_14145f370();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  FUN_140c24f10(plVar11 + -2,lVar8);
                  if (((longlong *)*plVar11 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x20))(), cVar4 == '\0')) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if ((bVar3) && (lVar8 = FUN_140cff1b0(lVar8), lVar8 != 0)) {
                    FUN_140cca1d0(lVar8,plVar11 + -1);
                  }
                }
              }
            }
          }
          else {
            if (((longlong *)*plVar11 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x20))(), cVar4 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) ||
               ((cVar4 = FWeakObjectPtr::IsValid(plVar11 + 5), cVar4 == '\0' &&
                (*(char *)((longlong)plVar11 + 0x24) == '\0')))) goto LAB_140c24df4;
          }
          plVar1 = plVar11 + 6;
          plVar11 = plVar11 + 8;
        } while (plVar1 != plVar2 + (longlong)(int)lVar7 * 8);
      }
      local_res18[0] = param_3;
      FUN_140bfa800(param_1,local_res18);
    }
  }
  return;
}



// FUNCTION 140c24f10 FUN_140c24f10 body=237 status=ok
// SIG undefined FUN_140c24f10(void)

void FUN_140c24f10(undefined4 *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_1[0xe];
  local_resc = param_1[0xf];
  lVar2 = FWeakObjectPtr::Get(&local_res8);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar3 = ALandscapeStreamingProxy::StaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(char *)(lVar2 + 0x658) != '\0')) {
    lVar2 = FUN_140ad6100(lVar2,param_2);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
  }
  if (lVar2 != 0) {
    FUN_140c21dd0(param_1[0xc],lVar2,*param_1);
  }
  return;
}



// FUNCTION 140c25000 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x78,0);
  iVar4 = (int)(uVar3 / 0x78);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x78,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140c25090 FUN_140c25090 body=156 status=ok
// SIG undefined FUN_140c25090(void)

ulonglong FUN_140c25090(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x78) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x78,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x8888888888888889) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x78);
      }
      goto LAB_140c250fe;
    }
    if (iVar4 == 0) goto LAB_140c250fe;
  }
  iVar4 = iVar5;
LAB_140c250fe:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x78,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140c25130 FUN_140c25130 body=144 status=ok
// SIG undefined FUN_140c25130(void)

void FUN_140c25130(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar2 < 2) {
    uVar2 = 1;
    goto LAB_140c25199;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 4)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 4,0);
        uVar3 = *(uint *)(param_1 + 0x1c);
        uVar2 = (uint)(uVar1 >> 4);
      }
      goto LAB_140c25199;
    }
    if (uVar2 == 0) goto LAB_140c25199;
  }
  uVar2 = uVar3;
LAB_140c25199:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x1c) = uVar2;
    TInlineAllocator<1,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FGameplayAbilityTargetData,0>_>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x18),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 140c251c0 FUN_140c251c0 body=1264 status=ok
// SIG undefined FUN_140c251c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140c251c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong *local_res8;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  float fStack_50;
  float fStack_4c;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if ((lVar9 == 0) || (cVar6 = UWorld::IsInSeamlessTravel(lVar9), cVar6 != '\0')) {
LAB_140c2568d:
    uVar10 = 0;
  }
  else {
    plVar16 = (longlong *)0x0;
    local_78 = CONCAT44(DAT_1468b5da0._4_4_,(undefined4)local_78);
    local_70 = DAT_1468b5da8;
    plVar15 = plVar16;
    if (param_1[0x97] != 0) {
      plVar15 = *(longlong **)(param_1[0x97] + 0x5a0);
    }
    lVar9 = *(longlong *)(param_2[0x91] + 0x168);
    if (lVar9 == 0) {
      local_58 = _DAT_1468b5d90;
      fStack_50 = (float)DAT_1468b5d98;
    }
    else {
      local_58 = *(longlong *)(lVar9 + 0x220);
      fStack_50 = *(float *)(lVar9 + 0x228);
    }
    local_68 = local_58;
    local_60 = fStack_50;
    if (plVar15 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      plVar12 = (longlong *)0x0;
      plVar15 = (longlong *)0x0;
LAB_140c25372:
      local_48 = 0;
      local_40 = 0;
      lVar9 = FUN_14293bcd0(param_1,param_2,&local_48);
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (lVar9 == 0) {
        cVar6 = FUN_14044af00(param_2 + 0x8d,0);
        if (cVar6 == '\0') goto LAB_140c2568d;
        lVar9 = FWeakObjectPtr::Get(param_2 + 0x8d);
      }
      lVar1 = *(longlong *)(lVar9 + 0x168);
      if (lVar1 == 0) {
        local_58 = _DAT_1468b5d90;
        fStack_50 = (float)DAT_1468b5d98;
      }
      else {
        local_58 = *(longlong *)(lVar1 + 0x220);
        fStack_50 = *(float *)(lVar1 + 0x228);
      }
      local_68 = local_58;
      local_60 = fStack_50;
      lVar9 = *(longlong *)(lVar9 + 0x168);
      uVar17 = (undefined4)DAT_1468b5da0;
      uVar18 = DAT_1468b5da0._4_4_;
      uVar7 = DAT_1468b5da8;
      if (lVar9 != 0) {
        fVar3 = *(float *)(lVar9 + 0x210);
        local_58 = *(longlong *)(lVar9 + 0x210);
        fVar4 = *(float *)(lVar9 + 0x218);
        fStack_4c = *(float *)(lVar9 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar9 + 0x214) != *(float *)(lVar9 + 0x254));
        auVar2._0_4_ = -(uint)(fVar3 != *(float *)(lVar9 + 0x250));
        auVar2._8_4_ = -(uint)(fVar4 != *(float *)(lVar9 + 600));
        auVar2._12_4_ = -(uint)(fStack_4c != *(float *)(lVar9 + 0x25c));
        iVar8 = movmskps(fStack_50,auVar2);
        if (iVar8 != 0) {
          *(float *)(lVar9 + 0x250) = fVar3;
          *(float *)(lVar9 + 0x254) = *(float *)(lVar9 + 0x214);
          *(float *)(lVar9 + 600) = fVar4;
          *(float *)(lVar9 + 0x25c) = fStack_4c;
          fStack_50 = fVar4;
          puVar13 = (undefined8 *)FQuat::Rotator(&local_58,&local_48);
          *(undefined8 *)(lVar9 + 0x260) = *puVar13;
          *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar13 + 1);
        }
        uVar17 = (int)*(undefined8 *)(lVar9 + 0x260);
        uVar18 = (uint)((ulonglong)*(undefined8 *)(lVar9 + 0x260) >> 0x20);
        uVar7 = *(undefined4 *)(lVar9 + 0x268);
      }
      local_48 = CONCAT44(uVar18,uVar17);
      uVar17 = 0;
      local_40 = CONCAT44(local_40._4_4_,uVar7);
      local_78 = (ulonglong)uVar18 << 0x20;
      local_70 = 0;
    }
    else {
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar11 = (longlong *)FUN_142f3fe10(plVar15,uVar10,&local_68,0);
      plVar12 = plVar16;
      plVar15 = plVar16;
      if ((plVar11 == (longlong *)0x0) ||
         (plVar12 = (longlong *)0x0, plVar15 = (longlong *)0x0, param_2[0x91] == 0))
      goto LAB_140c25372;
      plVar12 = (longlong *)
                (**(code **)(*plVar11 + 0x8f8))
                          (plVar11,&local_58,param_2,0,
                           in_stack_ffffffffffffff78 & 0xffffffffffffff00);
      plVar15 = (longlong *)*plVar12;
      plVar12 = (longlong *)plVar12[1];
      if ((plVar15 == (longlong *)0x0) || (plVar12 == (longlong *)0x0)) {
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x900))(plVar11,local_38);
        plVar15 = (longlong *)*puVar13;
        plVar12 = (longlong *)puVar13[1];
      }
      if ((plVar15 == (longlong *)0x0) || (plVar12 == (longlong *)0x0)) goto LAB_140c25372;
      plVar14 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,&local_48);
      local_68 = *plVar14;
      local_60 = (undefined4)plVar14[1];
      plVar14 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12,&local_48);
      local_78 = *plVar14;
      uVar17 = (undefined4)local_78;
      uVar18 = (uint)((ulonglong)local_78 >> 0x20);
      local_70 = (undefined4)plVar14[1];
    }
    local_58 = CONCAT44(uVar18,uVar17);
    fStack_50 = (float)local_70;
    FUN_142920470(param_2,&local_58,1);
    plVar14 = (longlong *)param_2[0x91];
    if (plVar14 != (longlong *)0x0) {
      lVar9 = param_2[0x132];
      if (lVar9 != 0) {
        *(longlong **)(lVar9 + 0x1128) = plVar15;
        *(longlong **)(lVar9 + 0x1130) = plVar12;
      }
      if (plVar11 != (longlong *)0x0) {
        local_res8 = plVar14;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar11 + 0xeb,&local_res8);
      }
      uVar10 = FUN_141312e30();
      lVar9 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar10);
      if (lVar9 != 0) {
        local_res8 = plVar11;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar9 + 0x1310,&local_res8);
      }
      plVar15 = (longlong *)(**(code **)(*plVar14 + 0x6e8))(plVar14);
      if (plVar15 != (longlong *)0x0) {
        lVar9 = FUN_141403c70();
        if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          (**(code **)(*plVar15 + 0x5a0))(plVar15,1);
        }
      }
      local_58 = local_78;
      fStack_50 = (float)local_70;
      local_48 = local_68;
      local_40 = CONCAT44(local_40._4_4_,local_60);
      FUN_14223ca30(plVar14,&local_48,&local_58,0,0,0);
      local_70 = 0;
      (**(code **)(*param_2 + 0x728))(param_2,&local_78,1);
      if (param_2[0x108] != 0) {
        FUN_142cbcba0();
      }
      (**(code **)(*plVar14 + 0x708))(plVar14);
    }
    FUN_142d7f490(param_2,L"player_respawn");
    lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar9 != 0) {
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar9 = UWorld::GetGameState<APVPGameState>(uVar10);
      if (lVar9 != 0) {
        iVar8 = FHTTPChunkInstall::GetInstallSpeed(lVar9);
        plVar16 = (longlong *)(ulonglong)(iVar8 == 1);
      }
    }
    if ((char)plVar16 != '\0') {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xaa);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0xb0,param_2);
    uVar10 = 1;
  }
  return uVar10;
}



// FUNCTION 140c256b0 FUN_140c256b0 body=982 status=ok
// SIG undefined FUN_140c256b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c256b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong local_c8;
  longlong *plStack_c0;
  longlong *local_b8 [4];
  longlong *local_98 [4];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if ((param_2 != 0) &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_d8 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res10[0] = 0;
        local_78 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_78);
        if (plVar9 != (longlong *)0x0) {
          local_res10[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        if ((DAT_14686b150 == '\0') &&
           (puVar10 = (undefined8 *)FUN_140c123a0(), puVar10 != &DAT_14686b100)) {
          DAT_14686b100 = *puVar10;
          _DAT_14686b108 = puVar10[1];
          _DAT_14686b110 = puVar10[2];
          _DAT_14686b118 = puVar10[3];
          _DAT_14686b120 = puVar10[4];
          _DAT_14686b128 = puVar10[5];
          _DAT_14686b130 = puVar10[6];
          _DAT_14686b138 = puVar10[7];
          _DAT_14686b140 = puVar10[8];
          _DAT_14686b148 = puVar10[9];
          DAT_14686b150 = '\x01';
        }
        cVar5 = FUN_142190080(DAT_14686b100);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686b100), cVar5 != '\0')) {
          FUN_142190c70(&local_e8,DAT_14686b100,L"Respec");
          lVar7 = *(longlong *)(local_e8 + 0xc0);
          if (*(longlong *)(local_e8 + 0xc0) == 0) {
            lVar7 = local_e8 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_b8);
          FUN_142194380(local_b8,0x28,0,0,0);
          plVar9 = local_d8;
          local_b8[0] = local_d8;
          FUN_1421923f0(local_70,DAT_14686add8,local_b8);
          FUN_140bfb300(uVar11,&DAT_14686b108,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_b8);
          FUN_14217e740(local_98);
          FUN_142194380(local_98,0x28,0,0,0);
          local_98[0] = plVar9;
          FUN_1421923f0(local_50,DAT_14686ade0,local_98);
          FUN_140bfb300(uVar11,&DAT_14686b110,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_98);
          local_res18[0] = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,&DAT_14686b118,local_res18);
          FUN_140bfa9d0(uVar11,&DAT_14686b120,local_res10);
          local_res20[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,&DAT_14686b128,local_res20);
          cVar5 = FUN_14218a740(&local_e8,1);
          if (cVar5 != '\0') {
            local_c8 = local_e8;
            plStack_c0 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_c8);
            plVar6 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_c0 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_c0)(plStack_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_e0 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar1 = (int *)((longlong)plStack_e0 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c25a90 FUN_140c25a90 body=396 status=ok
// SIG undefined FUN_140c25a90(void)

void FUN_140c25a90(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_18;
  longlong *local_10;
  
  FUN_142d8fb30();
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x8d);
  if (param_2 == (longlong *)0x0) {
LAB_140c25afb:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar7 = param_2;
    if (!bVar1) goto LAB_140c25afb;
  }
  if (lVar3 != 0) {
    uVar5 = FUN_142f46fc0();
    plVar6 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar3,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar4 = FUN_142f46fc0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && ((**(code **)(*plVar6 + 0x8f8))(plVar6,&local_18,param_2,0,0), local_18 != 0))
         && (local_10 != (longlong *)0x0)) {
        (**(code **)(*local_10 + 0x18))(local_10,param_2[0x91]);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      if (((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) || (cVar2 = APlayerController::IsPrimaryPlayer(plVar7), cVar2 == '\0'))
      goto LAB_140c25bda;
    }
    FUN_140c04950(param_1,param_2,lVar3);
  }
LAB_140c25bda:
  if ((plVar7 != (longlong *)0x0) && (plVar7[0x14b] != 0)) {
    FUN_142d7f490(param_2,L"player_spawn");
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x568,param_2);
  return;
}



// FUNCTION 140c25c20 FUN_140c25c20 body=38 status=ok
// SIG undefined FUN_140c25c20(void)

void FUN_140c25c20(longlong param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x738);
  uStack_14 = *(undefined4 *)(param_1 + 0x73c);
  uStack_10 = *(undefined4 *)(param_1 + 0x740);
  uStack_c = *(undefined4 *)(param_1 + 0x744);
  FUN_142f6b950(local_18,&local_18,*(undefined8 *)(param_1 + 0x748));
  return;
}



// FUNCTION 140c25c50 FUN_140c25c50 body=1669 status=ok
// SIG undefined FUN_140c25c50(void)

void FUN_140c25c50(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *local_res8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong local_90 [2];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  plVar14 = (longlong *)0x0;
  if (param_1[0xb2] == 0) {
    uVar6 = GetTransientPackage();
    local_res8 = (longlong *)0x0;
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar7 = UUGStartScreenUW::GetPrivateStaticClass();
    lVar8 = FUN_1417985e0(uVar7,uVar6,0,1,0,0,0,0,0);
    param_1[0xb2] = lVar8;
    uVar6 = FUN_142dea370(param_1 + 0x9c,local_68);
    FUN_1430159f0(param_1[0xb2],uVar6,1);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_60 + 1;
      lVar8 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    local_98 = param_1[2];
    FUN_140486980(param_1[0xb2]);
    uVar6 = (**(code **)(*param_1 + 0x6f0))(param_1,param_2);
    *(undefined8 *)(param_1[0xb2] + 0x1d8) = uVar6;
    lVar8 = param_1[0xb2];
    plVar16 = plVar14;
    if (param_3 != (longlong *)0x0) {
      plVar9 = (longlong *)AGExplodingRockProjectile::GetPrivateStaticClass();
      plVar11 = param_3;
      do {
        plVar16 = param_3;
        if (plVar11 == plVar9) break;
        plVar11 = (longlong *)plVar11[6];
        plVar16 = plVar14;
      } while (plVar11 != (longlong *)0x0);
    }
    *(longlong **)(lVar8 + 0x160) = plVar16;
    FName::FName(&local_b0,L"MissionTracker",1);
    *(undefined8 *)(param_1[0xb2] + 0x170) = local_b0;
    *(undefined1 *)(param_1[0xb2] + 0xd8) = 1;
    *(undefined1 *)(param_1[0xb2] + 0x1b8) = 1;
    lVar8 = param_1[0xb2];
    *(longlong *)(lVar8 + 0x1bc) = param_1[0xae];
    *(int *)(lVar8 + 0x1c4) = (int)param_1[0xaf];
  }
  if (param_1[0xb2] == 0) goto LAB_140c261e3;
  *(undefined4 *)(param_1[0xb2] + 0x224) = 0;
  *(undefined4 *)(param_1[0xb2] + 0x1e8) = 0;
  *(undefined4 *)(param_1[0xb2] + 0x218) = 0;
  plVar16 = (longlong *)param_1[0x9b];
  if (plVar16 == (longlong *)0x0) {
LAB_140c25e9b:
    plVar16 = plVar14;
  }
  else {
    lVar8 = FUN_142e7dd60();
    if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140c25e9b;
  }
  (**(code **)(param_1[0x8c] + 0x18))(param_1 + 0x8c,&local_res8);
  if (local_res8 != (longlong *)0x0) {
    plVar9 = (longlong *)FUN_142f71d80();
    plVar11 = local_res8;
joined_r0x000140c25ec5:
    if (plVar11 == (longlong *)0x0) goto LAB_140c260fb;
    if (plVar11 != plVar9) goto code_r0x000140c25ed5;
    plVar9 = (longlong *)FUN_142f71d80();
    for (plVar11 = local_res8;
        (plVar12 = plVar14, plVar11 != (longlong *)0x0 && (plVar12 = local_res8, plVar11 != plVar9))
        ; plVar11 = (longlong *)plVar11[6]) {
    }
    lVar8 = plVar12[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar12 + 0x368))(plVar12);
      lVar8 = plVar12[0x1f];
      if (lVar8 != 0) goto LAB_140c25f2d;
    }
    else {
LAB_140c25f2d:
      lVar10 = FUN_142f71d80();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar16 != (longlong *)0x0)) {
        uVar6 = FUN_142f5bb60(&local_res8);
        FUN_142dea370(uVar6,local_80);
        uVar6 = FText::ToString(plVar16 + 0xd);
        iVar5 = FUN_141592950(uVar6,L"$VALUE$",1,0,0xffffffff);
        if (iVar5 != -1) {
          puVar15 = (undefined8 *)FText::ToString(local_80);
          if (*(int *)(puVar15 + 1) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = (undefined2 *)*puVar15;
          }
          uVar6 = FText::ToString(plVar16 + 0xd);
          uVar6 = FString::Replace(uVar6,local_90,L"$VALUE$",puVar13,1);
          uVar6 = FText::FromString(local_50,uVar6);
          FText::operator=(plVar16 + 0x10,uVar6);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_48 + 1;
            lVar8 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          if (local_90[0] != 0) {
            FMemory::Free();
          }
        }
        local_a8 = param_1[0x9b];
        plVar14 = param_1 + 0x99;
        plVar16 = (longlong *)*plVar14;
        iVar5 = (int)param_1[0x9a];
        uStack_a0 = 0;
        plVar11 = plVar16;
        do {
          if (plVar11 == plVar16 + (longlong)iVar5 * 2) {
LAB_140c260a3:
            *(int *)(param_1 + 0x9a) = iVar5 + 1;
            if (*(int *)((longlong)param_1 + 0x4d4) < iVar5 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar5);
            }
            puVar2 = (undefined4 *)(*plVar14 + (longlong)iVar5 * 0x10);
            *puVar2 = (undefined4)local_a8;
            puVar2[1] = local_a8._4_4_;
            puVar2[2] = uStack_a0;
            puVar2[3] = uStack_9c;
LAB_140c260c9:
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_78 + 1;
              lVar8 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
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
            break;
          }
          if (local_a8 == *plVar11) {
            if ((int)((longlong)plVar11 - (longlong)plVar16 >> 4) == -1) goto LAB_140c260a3;
            goto LAB_140c260c9;
          }
          plVar11 = plVar11 + 2;
        } while( true );
      }
    }
  }
LAB_140c260fb:
  lVar8 = param_1[0xb2];
  plVar14 = (longlong *)(lVar8 + 0x108);
  if (plVar14 != param_1 + 0x99) {
    iVar5 = (int)param_1[0x9a];
    pvVar3 = (void *)param_1[0x99];
    *(int *)(lVar8 + 0x110) = iVar5;
    if ((iVar5 == 0) && (*(int *)(lVar8 + 0x114) == 0)) {
      *(undefined4 *)(lVar8 + 0x114) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar14,iVar5);
      _guard_xfg_dispatch_icall_nop((void *)*plVar14,pvVar3,(longlong)iVar5 << 4);
    }
  }
  *(undefined1 *)(param_1[0xb2] + 0xd9) = 1;
  lVar8 = param_1[0xb2];
  *(undefined4 *)(lVar8 + 0x180) = 0;
  if (0x7fffffff < *(uint *)(lVar8 + 0x184)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x178,0);
  }
  if ((param_1[0xaa] != 0) && (lVar8 = FUN_14057ade0(), lVar8 != 0)) {
    lVar10 = param_1[0xb2];
    puVar15 = (undefined8 *)(lVar10 + 0x178);
    if (puVar15 != (undefined8 *)(lVar8 + 0x178)) {
      iVar5 = *(int *)(lVar8 + 0x180);
      pvVar3 = *(void **)(lVar8 + 0x178);
      *(int *)(lVar10 + 0x180) = iVar5;
      if ((iVar5 == 0) && (*(int *)(lVar10 + 0x184) == 0)) {
        *(undefined4 *)(lVar10 + 0x184) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar15,iVar5);
        _guard_xfg_dispatch_icall_nop((void *)*puVar15,pvVar3,(longlong)iVar5 << 3);
      }
    }
  }
LAB_140c261e3:
  if (param_1[0xb1] == 0) {
    uVar6 = GetTransientPackage();
    local_res8 = (longlong *)0x0;
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar7 = FUN_14301f840();
    lVar8 = FUN_1417985e0(uVar7,uVar6,0,1,0,0,0,0,0);
    param_1[0xb1] = lVar8;
    FUN_142a4c7e0(lVar8,param_1[0xb2]);
    FUN_1430160d0(param_1[0xb1],*(undefined8 *)(param_2 + 0x460));
    FUN_142fe41e0(param_1[0xb1],*(undefined8 *)(param_2 + 0x458));
    FUN_142d85250(param_1[0xb1],1);
    uVar6 = FUN_141437b90();
    FUN_141721e10(param_1[0xb1],uVar6);
  }
  return;
code_r0x000140c25ed5:
  plVar11 = (longlong *)plVar11[6];
  goto joined_r0x000140c25ec5;
}



// FUNCTION 140c262e0 FUN_140c262e0 body=100 status=ok
// SIG undefined FUN_140c262e0(void)

void FUN_140c262e0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x580) != 0) {
    uVar1 = AActor::GetWorldTimerManager();
    FUN_142880530(uVar1,param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
  }
  *(undefined1 *)(param_1 + 0x578) = param_2;
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x548,param_2);
  return;
}



// FUNCTION 140c26350 FUN_140c26350 body=237 status=ok
// SIG undefined FUN_140c26350(void)

void FUN_140c26350(undefined8 *param_1,undefined8 param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_38 [48];
  
  cVar1 = FUN_1407ce070(param_2);
  if (cVar1 != '\0') {
    uVar2 = 0x3f800000;
    if (param_3 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x3f800000;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_38,param_2);
    FUN_142183020(*param_1,local_38,param_1 + 3,uVar3);
    if (param_4 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x3f800000;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_38,param_2);
    FUN_142183020(*param_1,local_38,param_1 + 4,uVar3);
    if (param_5 == '\0') {
      uVar2 = 0;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_38,param_2);
    FUN_142183020(*param_1,local_38,param_1 + 5,uVar2);
  }
  return;
}



// FUNCTION 140c26440 FUN_140c26440 body=132 status=ok
// SIG undefined FUN_140c26440(void)

void FUN_140c26440(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uStack_c;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xf8))(param_2);
  if (plVar2 != (longlong *)0x0) {
    puVar3 = cohtml::IEventHandler::operator_new(0x20);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_14433a7d0;
      *(undefined4 *)(puVar3 + 2) = 0x40be2cb0;
      *(undefined4 *)((longlong)puVar3 + 0x14) = 1;
      *(undefined4 *)(puVar3 + 3) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_c;
    }
    puVar3[1] = uVar1;
    (**(code **)(*plVar2 + 0x150))(plVar2,"PlayUISound");
  }
  return;
}



// FUNCTION 140c264d0 FUN_140c264d0 body=418 status=ok
// SIG undefined FUN_140c264d0(void)

void FUN_140c264d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *local_18;
  undefined8 local_10;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x90);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x718) != 0) {
    *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(lVar1 + 0x360);
    return;
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x40))((longlong *)(param_1 + 0x700),&local_18);
  if ((0 < (int)local_10) && (lVar2 = *local_18, lVar2 != 0)) {
    lVar4 = FUN_142f71d80();
    lVar5 = lVar2;
    do {
      if (lVar5 == lVar4) {
        lVar4 = FUN_142f71d80();
        lVar5 = lVar2;
        goto LAB_140c26592;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  goto LAB_140c26653;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar7 = 0, lVar5 != 0) {
LAB_140c26592:
    lVar7 = lVar2;
    if (lVar5 == lVar4) break;
  }
  lVar2 = *(longlong *)(lVar7 + 0xf8);
  if (lVar2 != 0) {
    lVar5 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      switch(*(undefined1 *)(lVar2 + 0x4c0)) {
      default:
        uVar6 = *(undefined8 *)(lVar1 + 0x328);
        break;
      case 1:
        uVar6 = *(undefined8 *)(lVar1 + 0x330);
        break;
      case 2:
        uVar6 = *(undefined8 *)(lVar1 + 0x338);
        break;
      case 3:
        uVar6 = *(undefined8 *)(lVar1 + 0x340);
        break;
      case 4:
        uVar6 = *(undefined8 *)(lVar1 + 0x348);
        break;
      case 5:
        uVar6 = *(undefined8 *)(lVar1 + 0x350);
        break;
      case 6:
        uVar6 = *(undefined8 *)(lVar1 + 0x358);
      }
      *(undefined8 *)(param_1 + 0x7a8) = uVar6;
    }
  }
LAB_140c26653:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c26690 FUN_140c26690 body=220 status=ok
// SIG undefined FUN_140c26690(void)

void FUN_140c26690(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x590) != 0) {
    uVar5 = FUN_142e80f20();
    lVar6 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x598),uVar5);
    if (lVar6 != 0) {
      lVar7 = FUN_142e80f20();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FText::FText(local_28,*(longlong *)(param_1 + 0x590) + 0x40);
        FText::operator=(lVar6 + 0x260,local_28);
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
    }
  }
  return;
}



// FUNCTION 140c26770 FUN_140c26770 body=110 status=ok
// SIG undefined FUN_140c26770(void)

void FUN_140c26770(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  FWeakObjectPtr::operator=(param_1 + 0x558);
  cVar3 = FUN_14044af00(param_1 + 0x558,0);
  if (cVar3 != '\0') {
    cVar3 = FUN_14044af00(param_1 + 0x550,0);
    if (cVar3 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x558);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x550);
      FUN_141173430(uVar2,uVar1);
    }
  }
  return;
}



// FUNCTION 140c267e0 FUN_140c267e0 body=130 status=ok
// SIG undefined FUN_140c267e0(void)

void FUN_140c267e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = param_1 + 0x548;
  FWeakObjectPtr::operator=(lVar1);
  cVar4 = FUN_14044af00(lVar1,0);
  if (cVar4 != '\0') {
    param_1 = param_1 + 0x550;
    cVar4 = FUN_14044af00(param_1,0);
    if (cVar4 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1);
      uVar3 = FWeakObjectPtr::Get(lVar1);
      FUN_141132370(uVar3,uVar2);
      uVar2 = FWeakObjectPtr::Get(param_1);
      thunk_FUN_141156190(uVar2);
    }
  }
  return;
}



// FUNCTION 140c26870 FUN_140c26870 body=210 status=ok
// SIG undefined FUN_140c26870(void)

void FUN_140c26870(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  FWeakObjectPtr::operator=(param_1 + 0x550);
  cVar3 = FUN_14044af00(param_1 + 0x550,0);
  if (cVar3 != '\0') {
    cVar3 = FUN_14044af00(param_1 + 0x548,0);
    if (cVar3 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x550);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x548);
      FUN_141132370(uVar2,uVar1);
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x550);
      thunk_FUN_141156190(uVar1);
    }
    cVar3 = FUN_14044af00(param_1 + 0x558,0);
    if (cVar3 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x558);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x550);
      FUN_141173430(uVar2,uVar1);
    }
  }
  return;
}



// FUNCTION 140c26950 FUN_140c26950 body=13 status=ok
// SIG undefined FUN_140c26950(void)

void FUN_140c26950(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x6b8) = param_2;
  }
  return;
}



// FUNCTION 140c26960 FUN_140c26960 body=1137 status=ok
// SIG undefined FUN_140c26960(void)

void FUN_140c26960(longlong *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *local_68;
  uint local_60;
  int local_5c;
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  
  if ((int)param_1[0x9f] != 0) {
    puVar12 = (undefined8 *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar4 = (**(code **)(*param_1 + 0x148))();
    UWorld::GetPlayerControllerIterator(uVar4,&local_58);
    while( true ) {
      if (((int)local_50 < 0) || (*(int *)(local_58 + 1) <= (int)local_50)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      lVar5 = FWeakObjectPtr::Get();
      if (lVar5 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (lVar5 = *(longlong *)(lVar5 + 0x848), lVar5 != 0)) {
          lVar6 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_140c46d30(lVar5,&local_48);
          }
        }
      }
      local_50 = local_50 + 1;
    }
    iVar13 = 0;
    local_68 = (undefined8 *)0x0;
    local_5c = 0;
    iVar16 = 0;
    local_58 = (undefined8 *)0x0;
    local_4c = 0;
    plVar14 = (longlong *)param_1[0x9e];
    plVar7 = plVar14 + (longlong)(int)param_1[0x9f] * 2;
    puVar17 = puVar12;
    puVar18 = puVar12;
    puVar19 = puVar12;
    for (; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      if (*plVar14 != 0) {
        plVar8 = (longlong *)FUN_142f71d80();
        plVar11 = (longlong *)*plVar14;
        for (plVar15 = plVar11; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[6]) {
          if (plVar15 == plVar8) goto LAB_140c26ae6;
        }
      }
      plVar11 = (longlong *)0x0;
LAB_140c26ae6:
      lVar5 = plVar11[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar11 + 0x368))(plVar11);
        lVar5 = plVar11[0x1f];
        if (lVar5 != 0) goto LAB_140c26b0e;
      }
      else {
LAB_140c26b0e:
        lVar6 = FUN_141437870();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (lVar5 = FUN_1405ec200(lVar5 + 0x480), lVar5 != 0)) {
          lVar6 = FUN_14301f840();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            bVar3 = false;
            plVar11 = local_48 + (int)local_40;
            for (plVar15 = local_48; plVar15 != plVar11; plVar15 = plVar15 + 1) {
              plVar8 = (longlong *)*plVar15;
              if (plVar8 != (longlong *)0x0) {
                UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
                lVar5 = (**(code **)(*plVar8 + 0x628))(plVar8);
                if (lVar5 != 0) {
                  if (*(longlong *)(lVar5 + 0x178) != 0) {
                    lVar9 = FUN_142f71d80();
                    lVar5 = *(longlong *)(lVar5 + 0x178);
                    for (lVar6 = lVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                      if (lVar6 == lVar9) goto LAB_140c26c05;
                    }
                  }
                  lVar5 = 0;
LAB_140c26c05:
                  if (*plVar14 != 0) {
                    lVar10 = FUN_142f71d80();
                    lVar6 = *plVar14;
                    for (lVar9 = lVar6; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
                      if (lVar9 == lVar10) goto LAB_140c26c30;
                    }
                  }
                  lVar6 = 0;
LAB_140c26c30:
                  if (lVar5 == lVar6) {
                    bVar3 = true;
                    break;
                  }
                }
              }
            }
            if (*(char *)(plVar14[1] + 0xb2) == '\0') {
              puVar18 = local_58;
              puVar19 = local_68;
              if (*(char *)(plVar14[1] + 0xb3) != '\0') {
                if (bVar3) goto LAB_140c26c9b;
                goto LAB_140c26c59;
              }
            }
            else if (bVar3) {
LAB_140c26c59:
              iVar13 = (int)puVar17;
              local_50 = iVar13 + 1;
              if (local_4c < (int)local_50) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,puVar17);
              }
              puVar17 = (undefined8 *)(ulonglong)local_50;
              uVar1 = *(undefined4 *)((longlong)plVar14 + 4);
              lVar5 = plVar14[1];
              uVar2 = *(undefined4 *)((longlong)plVar14 + 0xc);
              puVar18 = local_58 + (longlong)iVar13 * 2;
              *(int *)puVar18 = (int)*plVar14;
              *(undefined4 *)((longlong)puVar18 + 4) = uVar1;
              *(int *)(puVar18 + 1) = (int)lVar5;
              *(undefined4 *)((longlong)puVar18 + 0xc) = uVar2;
              puVar18 = local_58;
              puVar19 = local_68;
            }
            else {
LAB_140c26c9b:
              iVar13 = (int)puVar12;
              local_60 = iVar13 + 1;
              if (local_5c < (int)local_60) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,puVar12);
              }
              puVar12 = (undefined8 *)(ulonglong)local_60;
              uVar1 = *(undefined4 *)((longlong)plVar14 + 4);
              lVar5 = plVar14[1];
              uVar2 = *(undefined4 *)((longlong)plVar14 + 0xc);
              puVar18 = local_68 + (longlong)iVar13 * 2;
              *(int *)puVar18 = (int)*plVar14;
              *(undefined4 *)((longlong)puVar18 + 4) = uVar1;
              *(int *)(puVar18 + 1) = (int)lVar5;
              *(undefined4 *)((longlong)puVar18 + 0xc) = uVar2;
              puVar18 = local_58;
              puVar19 = local_68;
            }
          }
        }
      }
      iVar16 = (int)puVar17;
      iVar13 = (int)puVar12;
    }
    if (puVar19 != puVar19 + (longlong)iVar13 * 2) {
      puVar12 = puVar19;
      do {
        uVar4 = thunk_FUN_142f5c680(param_1,*puVar12);
        FUN_142f51850(param_1,puVar12[1],uVar4,param_2 ^ 1);
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar19 + (longlong)iVar13 * 2);
    }
    for (puVar12 = puVar18; puVar12 != puVar18 + (longlong)iVar16 * 2; puVar12 = puVar12 + 2) {
      uVar4 = thunk_FUN_142f5c680(param_1,*puVar12);
      FUN_142f6a260(param_1,puVar12[1],uVar4,param_2);
      puVar19 = local_68;
    }
    if (puVar18 != (undefined8 *)0x0) {
      FMemory::Free(puVar18);
    }
    if (puVar19 != (undefined8 *)0x0) {
      FMemory::Free(puVar19);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c26de0 FUN_140c26de0 body=106 status=ok
// SIG undefined FUN_140c26de0(void)

void FUN_140c26de0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_14223edf0();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = AGExplodingRockProjectile::GetPrivateStaticClass();
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
      FUN_140c27070(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 140c26e50 FUN_140c26e50 body=529 status=ok
// SIG undefined FUN_140c26e50(void)

char FUN_140c26e50(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar9 = 0;
  local_38 = 0;
  local_30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_38,param_3);
  cVar3 = FUN_14245eac0(param_1,param_2,&local_38);
  if (cVar3 != '\0') {
    lVar5 = FUN_140a08d00();
    if (lVar5 != 0) {
      cVar4 = '\0';
      if (param_2 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          cVar4 = *(char *)(param_2 + 0x1060);
        }
      }
      if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
        if (cVar4 == '\0') {
          uVar7 = *(undefined8 *)(lVar5 + 0x30);
        }
        else {
          uVar7 = *(undefined8 *)(lVar5 + 0x1e8);
        }
        FUN_1405a2690(DAT_1468536c8,uVar7);
      }
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar5 = FUN_1405e8ff0(uVar7);
        if (lVar5 != 0) {
          FUN_1405e5100(lVar5,1);
        }
      }
    }
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar7 = FUN_1428cc4e0(uVar7);
    FUN_142d88190(uVar7);
    lVar5 = FUN_1422312c0(param_1);
    if (lVar5 != 0) {
      lVar6 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar8 = *(undefined4 **)(lVar5 + 0xd60);
        puVar1 = puVar8 + (longlong)*(int *)(lVar5 + 0xd68) * 2;
        for (; puVar8 != puVar1; puVar8 = puVar8 + 2) {
          local_res20 = *puVar8;
          local_res24 = puVar8[1];
          cVar4 = FWeakObjectPtr::IsValid(&local_res20);
          if (cVar4 != '\0') {
            uVar7 = FWeakObjectPtr::Get(&local_res20);
            FUN_140be2300(uVar7);
          }
        }
      }
    }
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_140c12480(uVar7);
    if (lVar5 != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x60);
    }
    if (lVar9 != 0) {
      FUN_1411f9ba0(lVar9,1);
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xb6);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return cVar3;
}



// FUNCTION 140c27070 FUN_140c27070 body=1217 status=ok
// SIG undefined FUN_140c27070(void)

void FUN_140c27070(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 local_res8;
  longlong *local_38;
  undefined8 local_30;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  if (param_1[0xb3] == param_2) {
    return;
  }
  if (param_1[0xb3] != 0) {
    return;
  }
  param_1[0xb3] = param_2;
  if (param_2 == 0) {
    return;
  }
  cVar3 = FUN_142f63b20(param_1 + 0x8c,param_1);
  if (cVar3 == '\0') {
    plVar13 = (longlong *)param_1[0xb3];
    plVar12 = (longlong *)plVar13[0xad];
    (**(code **)(*plVar13 + 0x6d0))(plVar13,0);
    if (plVar12 == param_1) {
      return;
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,0);
    return;
  }
  iVar4 = FUN_142235230(param_1);
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar13 = (longlong *)0x0;
  if (iVar4 == 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_142f6c9f0(lVar5);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x140), lVar5 != 0)) {
      lVar7 = APVPGameMode::GetPrivateStaticClass();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_140c2734c;
    }
    if (lVar6 == 0) goto LAB_140c2734c;
    if (*(char *)((longlong)param_1 + 0x549) != '\0') {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      puVar8 = (undefined8 *)(**(code **)(param_1[0x8c] + 0x18))(param_1 + 0x8c,&local_res8);
      FUN_142f5c5a0(lVar6,*puVar8,&local_38);
      plVar10 = local_38 + (longlong)(int)local_30 * 2;
      for (plVar12 = local_38; plVar12 != plVar10; plVar12 = plVar12 + 2) {
        lVar5 = FWeakObjectPtr::Get(plVar12);
        if (lVar5 != 0) {
          lVar7 = FUN_141437c50();
          lVar5 = *(longlong *)(lVar5 + 0x10);
          if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 == param_1[2])) {
            (**(code **)(*(longlong *)param_1[0xb3] + 0x310))
                      ((longlong *)param_1[0xb3],CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
            plVar13 = (longlong *)param_1[0xb3];
            plVar12 = (longlong *)plVar13[0xad];
            (**(code **)(*plVar13 + 0x6d0))(plVar13,0);
            if (plVar12 != param_1) {
              (**(code **)(*param_1 + 0x6d0))(param_1,0);
            }
            if (local_38 == (longlong *)0x0) {
              return;
            }
            FMemory::Free();
            return;
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  uVar9 = FUN_141437b90();
  lVar5 = (**(code **)(*param_1 + 0x628))(param_1,uVar9);
  param_1[0xb0] = lVar5;
  if (lVar5 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res8 = 0;
    uVar9 = FUN_141437b90();
    lVar5 = FUN_1417985e0(uVar9,param_1,0,0,0,0,0,0,0);
    param_1[0xb0] = lVar5;
    if ((lVar5 == 0) || (cVar3 = FUN_140c289b0(param_1), cVar3 == '\0')) {
LAB_140c2734c:
      plVar13 = (longlong *)param_1[0xb3];
      plVar12 = (longlong *)plVar13[0xad];
      (**(code **)(*plVar13 + 0x6d0))(plVar13,0);
      if (plVar12 == param_1) {
        return;
      }
      (**(code **)(*param_1 + 0x6d0))(param_1,0);
      return;
    }
    (**(code **)(*param_1 + 0x600))(param_1);
    lVar5 = param_1[0xb0];
    if (lVar5 != 0) goto LAB_140c27399;
  }
  else {
LAB_140c27399:
    FUN_143002580(lVar5);
    (**(code **)(*(longlong *)param_1[0xb0] + 0x508))((longlong *)param_1[0xb0],1);
  }
  FUN_140c26690(param_1);
  if (((char)param_1[0xa9] != '\0') && (*(char *)(param_1[0xb3] + 0x128) == '\x03')) {
    FUN_140b40080(param_1[0xb3],1);
  }
  if (iVar4 == 3) {
    return;
  }
  local_30 = 0;
  local_38 = param_1;
  uVar9 = FUN_142f768a0();
  local_30 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar9);
  FUN_142f690f0(lVar6,&local_38,0);
  plVar10 = (longlong *)(**(code **)(param_1[0x8c] + 0x18))(param_1 + 0x8c,&local_res8);
  plVar12 = plVar13;
  if (*plVar10 != 0) {
    plVar11 = (longlong *)FUN_142f71d80();
    for (plVar1 = (longlong *)*plVar10;
        (plVar12 = plVar13, plVar1 != (longlong *)0x0 &&
        (plVar12 = (longlong *)*plVar10, plVar1 != plVar11)); plVar1 = (longlong *)plVar1[6]) {
    }
  }
  plVar10 = (longlong *)plVar12[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    plVar10 = (longlong *)plVar12[0x1f];
    if (plVar10 != (longlong *)0x0) goto LAB_140c27479;
  }
  else {
LAB_140c27479:
    lVar5 = FUN_142f71d80();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140c274b2;
  }
  plVar10 = plVar13;
LAB_140c274b2:
  if (*(char *)((longlong)plVar10 + 0x177) != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      *(float *)(param_1 + 0xb4) = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4b8) * 60.0;
      FUN_140c09b70(param_1);
    }
  }
  return;
}



// FUNCTION 140c27540 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_LiquidSphere_C__pf961831033::bpf__StartSelectBuild__pf(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x458) = param_2;
  return;
}



// FUNCTION 140c27550 FUN_140c27550 body=577 status=ok
// SIG undefined FUN_140c27550(void)

void FUN_140c27550(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  *(undefined1 *)(param_1 + 0x94) = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  cVar1 = (char)param_1[0x94];
  uVar2 = *(undefined4 *)(lVar4 + 0x790);
  *(undefined4 *)((longlong)param_1 + 0x4a4) = uVar2;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      lVar4 = param_1[0x8b];
      *(float *)(param_1 + 0x95) =
           *(float *)(lVar4 + 0x78) - (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x34));
      FUN_140c2b5c0(param_1,*(undefined4 *)(lVar4 + 0x7c),*(undefined4 *)(lVar4 + 0x80),1,1);
      plVar3 = (longlong *)param_1[0x90];
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c276f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x290))(plVar3,1,0);
        return;
      }
    }
    else {
      if (cVar1 == '\x02') {
        *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)(param_1[0x8b] + 0xd8);
        if (*(longlong *)(param_1[0x8b] + 0xe8) != 0) {
          lVar4 = param_1[0x93];
          if (lVar4 == 0) {
            lVar4 = FUN_14059b7e0(param_1,CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1));
            param_1[0x93] = lVar4;
            if (lVar4 == 0) goto LAB_140c2766e;
          }
          FUN_1405a3150(lVar4,local_28,*(undefined8 *)(param_1[0x8b] + 0xe8),0);
          FUN_140591060(local_28);
        }
LAB_140c2766e:
        plVar3 = (longlong *)param_1[0x90];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x290))(plVar3,0,0);
        }
        FUN_140c0ec30(param_1,0);
        return;
      }
      if (cVar1 == '\x03') {
        lVar4 = param_1[0x8b];
        *(float *)(param_1 + 0x95) = *(float *)(lVar4 + 0xf0) - *(float *)(lVar4 + 0xd8);
        FUN_140c2b5c0(param_1,*(undefined4 *)(lVar4 + 0xdc),*(undefined4 *)(lVar4 + 0xe0),1,
                      ~(*(byte *)(lVar4 + 0x30) >> 5) & 1);
        return;
      }
      if (cVar1 == '\x04') {
        *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)(param_1[0x8b] + 0xd8);
        return;
      }
    }
    return;
  }
  lVar4 = param_1[0x8b];
  *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)(lVar4 + 0x34);
  FUN_140c2b5c0(param_1,*(undefined4 *)(lVar4 + 0x38),*(undefined4 *)(lVar4 + 0x3c),1,1);
  if (*(longlong *)(param_1[0x8b] + 0x48) != 0) {
    lVar4 = param_1[0x93];
    if (lVar4 == 0) {
      lVar4 = FUN_14059b7e0(param_1,1);
      param_1[0x93] = lVar4;
      if (lVar4 == 0) goto LAB_140c2777c;
    }
    FUN_1405a3150(lVar4,local_28,*(undefined8 *)(param_1[0x8b] + 0x48),0);
    FUN_140591060(local_28);
  }
LAB_140c2777c:
  FUN_140c0ec30(param_1,1);
  return;
}



// FUNCTION 140c277a0 FUN_140c277a0 body=631 status=ok
// SIG undefined FUN_140c277a0(void)

void FUN_140c277a0(longlong *param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined8 *local_58;
  uint local_50;
  uint local_4c;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  
  if ((int)param_1[0xa1] != 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))();
    lVar6 = *(longlong *)(lVar6 + 0x148);
    if (lVar6 != 0) {
      lVar7 = FUN_14131fc50();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if ((bVar19) && (iVar5 = ASBZPlayerState::IsLoadoutLoaded(lVar6), (int)param_1[0xa1] != 0)) {
        puVar15 = (undefined4 *)param_1[0xa0];
        puVar16 = puVar15 + (longlong)(int)param_1[0xa1] * 4;
        puVar9 = (undefined8 *)0x0;
        local_58 = (undefined8 *)0x0;
        local_4c = 0;
        local_3c = 0;
        iVar11 = 0;
        local_48 = (undefined8 *)0x0;
        puVar10 = puVar9;
        puVar12 = puVar9;
        puVar14 = puVar9;
        puVar17 = puVar9;
        puVar18 = puVar9;
        iVar13 = iVar11;
        for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
          if (*(char *)(*(longlong *)(puVar15 + 2) + 0xb4) == '\0') {
            if (*(char *)(*(longlong *)(puVar15 + 2) + 0xb5) != '\0') {
              bVar19 = iVar5 == 2;
              goto LAB_140c278c4;
            }
          }
          else {
            bVar19 = iVar5 == 1;
LAB_140c278c4:
            if (bVar19) {
              iVar11 = (int)puVar14;
              local_40 = iVar11 + 1;
              if ((int)puVar10 < (int)local_40) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,puVar14);
                puVar10 = (undefined8 *)(ulonglong)local_3c;
                puVar9 = (undefined8 *)(ulonglong)local_4c;
                puVar17 = local_48;
              }
              puVar14 = (undefined8 *)(ulonglong)local_40;
              uVar2 = puVar15[1];
              uVar3 = puVar15[2];
              uVar4 = puVar15[3];
              puVar1 = puVar17 + (longlong)iVar11 * 2;
              *(undefined4 *)puVar1 = *puVar15;
              *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
              *(undefined4 *)(puVar1 + 1) = uVar3;
              *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
            }
            else {
              iVar11 = (int)puVar12;
              local_50 = iVar11 + 1;
              if ((int)puVar9 < (int)local_50) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,puVar12);
                puVar10 = (undefined8 *)(ulonglong)local_3c;
                puVar9 = (undefined8 *)(ulonglong)local_4c;
                puVar18 = local_58;
              }
              puVar12 = (undefined8 *)(ulonglong)local_50;
              uVar2 = puVar15[1];
              uVar3 = puVar15[2];
              uVar4 = puVar15[3];
              puVar1 = puVar18 + (longlong)iVar11 * 2;
              *(undefined4 *)puVar1 = *puVar15;
              *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
              *(undefined4 *)(puVar1 + 1) = uVar3;
              *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
            }
          }
          iVar13 = (int)puVar14;
          iVar11 = (int)puVar12;
        }
        if (puVar18 != puVar18 + (longlong)iVar11 * 2) {
          puVar9 = puVar18;
          do {
            uVar8 = thunk_FUN_142f5c680(param_1,*puVar9);
            FUN_142f51850(param_1,puVar9[1],uVar8,param_2 ^ 1);
            puVar9 = puVar9 + 2;
          } while (puVar9 != puVar18 + (longlong)iVar11 * 2);
        }
        for (puVar9 = puVar17; puVar9 != puVar17 + (longlong)iVar13 * 2; puVar9 = puVar9 + 2) {
          uVar8 = thunk_FUN_142f5c680(param_1,*puVar9);
          FUN_142f6a260(param_1,puVar9[1],uVar8,param_2);
        }
        if (puVar17 != (undefined8 *)0x0) {
          FMemory::Free(puVar17);
        }
        if (puVar18 != (undefined8 *)0x0) {
          FMemory::Free(puVar18);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c27a20 FUN_140c27a20 body=7 status=ok
// SIG undefined FUN_140c27a20(void)

void FUN_140c27a20(undefined1 param_1)

{
  DAT_14686a909 = param_1;
  return;
}



// FUNCTION 140c27a30 FUN_140c27a30 body=341 status=ok
// SIG undefined FUN_140c27a30(void)

void FUN_140c27a30(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  bVar11 = false;
  plVar3 = (longlong *)AEQSTestingPawn::GetNavAgentPropertiesRef(param_2);
  plVar10 = (longlong *)*plVar3;
  plVar3 = plVar10 + (longlong)(int)plVar3[1] * 0x10;
  do {
    if (plVar10 == plVar3) {
      return;
    }
    if (*plVar10 == 0) {
LAB_140c27abc:
      bVar1 = false;
    }
    else {
      bVar11 = true;
      puVar4 = (undefined8 *)FUN_142f59860(*plVar10,local_38);
      if (*(int *)(param_3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      if (*(int *)(puVar4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar4;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      if (iVar2 != 0) goto LAB_140c27abc;
      bVar1 = true;
    }
    if ((bVar11) && (bVar11 = false, local_38[0] != 0)) {
      FMemory::Free();
    }
    if (bVar1) {
      if ((char)plVar10[2] != '\x01') {
        return;
      }
      plVar3 = (longlong *)FUN_142f5ed60(param_2);
      if (*plVar3 == 0) goto LAB_140c27b24;
      lVar5 = FUN_142f71d80();
      lVar12 = *plVar3;
      lVar9 = lVar12;
      break;
    }
    plVar10 = plVar10 + 0x10;
  } while( true );
joined_r0x000140c27b14:
  if (lVar9 == 0) goto LAB_140c27b24;
  if (lVar9 == lVar5) goto LAB_140c27b26;
  lVar9 = *(longlong *)(lVar9 + 0x30);
  goto joined_r0x000140c27b14;
LAB_140c27b24:
  lVar12 = 0;
LAB_140c27b26:
  if (plVar10[1] != 0) {
    lVar6 = FUN_142f71d80();
    lVar9 = plVar10[1];
    for (lVar5 = lVar9; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar6) goto LAB_140c27b50;
    }
  }
  lVar9 = 0;
LAB_140c27b50:
  if (lVar12 == lVar9) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x40))(param_1 + 0x28,plVar10[1]);
  }
  else {
    FUN_142f6c3d0(param_2);
  }
  return;
}



// FUNCTION 140c27b90 FUN_140c27b90 body=706 status=ok
// SIG undefined FUN_140c27b90(void)

void FUN_140c27b90(longlong *param_1,byte param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  bool bVar20;
  char cStackX_19;
  undefined8 *local_68;
  uint local_60;
  uint local_5c;
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  
  if (((0 < (int)param_1[0x9d]) && (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) &&
     (lVar5 = UWorld::GetGameState<APVPGameState>(), lVar5 != 0)) {
    puVar12 = (undefined8 *)0x0;
    iVar11 = 0;
    local_68 = (undefined8 *)0x0;
    local_5c = 0;
    local_58 = (undefined8 *)0x0;
    local_4c = 0;
    iVar18 = 0;
    puVar6 = (undefined2 *)FUN_140cb7100(lVar5);
    plVar13 = (longlong *)param_1[0x9c];
    uVar1 = *puVar6;
    plVar7 = plVar13 + (longlong)(int)param_1[0x9d] * 2;
    puVar16 = puVar12;
    puVar17 = puVar12;
    puVar19 = puVar12;
    puVar14 = puVar12;
    for (; plVar13 != plVar7; plVar13 = plVar13 + 2) {
      if (*plVar13 != 0) {
        plVar8 = (longlong *)FUN_142f71d80();
        plVar15 = (longlong *)*plVar13;
        for (plVar2 = plVar15; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
          if (plVar2 == plVar8) goto LAB_140c27c70;
        }
      }
      plVar15 = (longlong *)0x0;
LAB_140c27c70:
      lVar5 = plVar15[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar15 + 0x368))(plVar15);
        lVar5 = plVar15[0x1f];
        if (lVar5 != 0) goto LAB_140c27c98;
      }
      else {
LAB_140c27c98:
        lVar9 = FUN_141437870();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        if (bVar20) {
          cStackX_19 = (char)((ushort)uVar1 >> 8);
          bVar20 = *(char *)(lVar5 + 0x4aa) == cStackX_19;
          if (*(char *)(plVar13[1] + 0xb0) == '\0') {
            if (*(char *)(plVar13[1] + 0xb1) != '\0') {
              if (!bVar20) goto LAB_140c27cf4;
              goto LAB_140c27e19;
            }
          }
          else if (bVar20) {
LAB_140c27cf4:
            iVar11 = (int)puVar19;
            local_50 = iVar11 + 1;
            if (local_4c < (int)local_50) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,puVar19);
              puVar16 = local_58;
            }
            puVar19 = (undefined8 *)(ulonglong)local_50;
            uVar3 = *(undefined4 *)((longlong)plVar13 + 4);
            lVar5 = plVar13[1];
            uVar4 = *(undefined4 *)((longlong)plVar13 + 0xc);
            puVar14 = puVar16 + (longlong)iVar11 * 2;
            *(int *)puVar14 = (int)*plVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(int *)(puVar14 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
          }
          else {
LAB_140c27e19:
            iVar11 = (int)puVar17;
            local_60 = iVar11 + 1;
            if ((int)puVar12 < (int)local_60) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,puVar17);
              puVar12 = (undefined8 *)(ulonglong)local_5c;
            }
            puVar17 = (undefined8 *)(ulonglong)local_60;
            uVar3 = *(undefined4 *)((longlong)plVar13 + 4);
            lVar5 = plVar13[1];
            uVar4 = *(undefined4 *)((longlong)plVar13 + 0xc);
            puVar14 = local_68 + (longlong)iVar11 * 2;
            *(int *)puVar14 = (int)*plVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(int *)(puVar14 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
          }
        }
      }
      iVar18 = (int)puVar19;
      iVar11 = (int)puVar17;
      puVar14 = local_68;
    }
    puVar17 = puVar14 + (longlong)iVar11 * 2;
    puVar12 = puVar14;
    if (puVar14 != puVar17) {
      do {
        uVar10 = thunk_FUN_142f5c680(param_1,*puVar14);
        FUN_142f51850(param_1,puVar14[1],uVar10,param_2 ^ 1);
        puVar14 = puVar14 + 2;
        puVar12 = local_68;
      } while (puVar14 != puVar17);
    }
    for (puVar17 = puVar16; puVar17 != puVar16 + (longlong)iVar18 * 2; puVar17 = puVar17 + 2) {
      uVar10 = thunk_FUN_142f5c680(param_1,*puVar17);
      FUN_142f6a260(param_1,puVar17[1],uVar10,param_2);
    }
    if (puVar16 != (undefined8 *)0x0) {
      FMemory::Free(puVar16);
    }
    if (puVar12 != (undefined8 *)0x0) {
      FMemory::Free(puVar12);
    }
  }
  return;
}



// FUNCTION 140c27e60 FUN_140c27e60 body=2874 status=ok
// SIG undefined FUN_140c27e60(void)

void FUN_140c27e60(longlong *param_1,byte param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined1 local_res18 [16];
  uint local_1b8;
  uint local_1b4;
  longlong *local_1b0;
  uint local_1a8;
  uint local_1a4;
  longlong *local_1a0;
  uint local_198;
  int local_194;
  uint local_190;
  int local_18c;
  longlong *local_188;
  uint local_180;
  uint local_17c;
  int local_178;
  longlong *local_170;
  uint local_168;
  uint local_164;
  undefined8 *local_160;
  uint local_158;
  uint local_154;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  int local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  if ((((int)param_1[0x9b] != 0) && (lVar10 = (**(code **)(*param_1 + 0x148))(), lVar10 != 0)) &&
     (local_e0 = FMistWorldUtils::GetDebugEntityDrawSystem(lVar10), local_e0 != 0)) {
    local_res18[0] = 0;
    local_d8 = FUN_142f416d0(local_e0,lVar10,local_res18);
    plVar18 = (longlong *)0x0;
    local_170 = (longlong *)0x0;
    local_178 = 0;
    local_164 = 0;
    local_160 = (undefined8 *)0x0;
    local_190 = 0;
    local_154 = 0;
    uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar11,&local_188);
    plVar19 = plVar18;
    plVar16 = plVar18;
    plVar20 = plVar18;
    plVar23 = plVar18;
    while( true ) {
      uVar21 = (uint)plVar18;
      if (((int)local_180 < 0) || ((int)local_188[1] <= (int)local_180)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      iVar22 = (int)plVar16;
      if (!bVar6) break;
      plVar12 = (longlong *)FWeakObjectPtr::Get();
      if (plVar12 != (longlong *)0x0) {
        lVar10 = FUN_14145f370();
        if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (lVar10 = (**(code **)(*plVar12 + 0x690))(), lVar10 != 0)) {
          lVar13 = FUN_14148cad0();
          lVar14 = *(longlong *)(lVar10 + 0x10);
          if ((*(int *)(lVar14 + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
              lVar13 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            for (plVar18 = plVar19; plVar18 != plVar19 + iVar22; plVar18 = plVar18 + 1) {
              if (*plVar18 == lVar14) {
                if ((int)((longlong)plVar18 - (longlong)plVar19 >> 3) != -1) goto LAB_140c28060;
                break;
              }
            }
            local_168 = iVar22 + 1;
            if ((int)plVar23 < (int)local_168) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_170,plVar16);
              plVar23 = (longlong *)(ulonglong)local_164;
              plVar19 = local_170;
            }
            plVar16 = (longlong *)(ulonglong)local_168;
            plVar19[iVar22] = lVar14;
            uVar21 = local_190;
LAB_140c28060:
            local_190 = uVar21 + 1;
            local_158 = local_190;
            if ((int)plVar20 < (int)local_190) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_160,uVar21);
              plVar20 = (longlong *)(ulonglong)local_154;
            }
            plVar18 = (longlong *)(ulonglong)local_158;
            local_160[(int)uVar21] = lVar10;
            local_190 = local_158;
          }
        }
      }
      local_180 = local_180 + 1;
    }
    plVar20 = (longlong *)0x0;
    local_188 = (longlong *)0x0;
    local_18c = 0;
    plVar19 = (longlong *)param_1[0x9a];
    iVar9 = (int)param_1[0x9b];
    local_17c = 0;
    plVar12 = plVar19 + (longlong)iVar9 * 2;
    plVar16 = plVar20;
    plVar23 = plVar20;
    plVar18 = plVar20;
    local_178 = iVar22;
    if (plVar19 != plVar12) {
      do {
        if (*(char *)(plVar19[1] + 0xaf) != '\0') {
          iVar22 = (int)plVar23;
          local_180 = iVar22 + 1;
          if ((int)plVar16 < (int)local_180) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_188,plVar23);
            plVar16 = (longlong *)(ulonglong)local_17c;
            plVar18 = local_188;
          }
          plVar23 = (longlong *)(ulonglong)local_180;
          plVar18[iVar22] = *plVar19;
        }
        plVar19 = plVar19 + 2;
      } while (plVar19 != plVar12);
      iVar9 = (int)param_1[0x9b];
      local_18c = (int)plVar23;
    }
    iVar24 = 0;
    local_1b0 = (longlong *)0x0;
    local_1b8 = 0;
    local_1a4 = 0;
    local_1a0 = (longlong *)0x0;
    local_1b4 = 0;
    local_194 = 0;
    plVar19 = (longlong *)param_1[0x9a];
    local_c8 = plVar19 + (longlong)iVar9 * 2;
    plVar16 = plVar20;
    plVar23 = plVar20;
    plVar18 = plVar20;
    plVar12 = plVar20;
    iVar22 = iVar24;
    local_140 = plVar19;
    if (plVar19 != local_c8) {
      do {
        local_140 = plVar19;
        lVar14 = FUN_142f5ef60(param_1);
        lVar10 = 0;
        if (lVar14 != 0) {
          lVar10 = FUN_142f406a0(local_e0);
        }
        if ((local_d8 == 0) || (local_d8 != lVar10)) {
          lVar10 = plVar19[1];
          iVar22 = (int)plVar12;
          if (*(char *)(lVar10 + 0xad) == '\0') {
            iVar9 = (int)plVar18;
            if (*(char *)(lVar10 + 0xae) == '\0') {
              if (*(char *)(lVar10 + 0xaf) != '\0') {
                local_198 = iVar9 + 1;
                if (local_194 < (int)local_198) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1a0,plVar18);
                  plVar23 = local_1a0;
                }
                plVar18 = (longlong *)(ulonglong)local_198;
                uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
                lVar10 = plVar19[1];
                uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
                plVar16 = plVar23 + (longlong)iVar9 * 2;
                *(int *)plVar16 = (int)*plVar19;
                *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
                *(int *)(plVar16 + 1) = (int)lVar10;
                *(undefined4 *)((longlong)plVar16 + 0xc) = uVar5;
                local_1b4 = local_198;
              }
            }
            else {
              plVar16 = local_188 + local_18c;
              for (plVar20 = local_188; plVar20 != plVar16; plVar20 = plVar20 + 1) {
                if (*plVar20 != 0) {
                  lVar13 = FUN_142f71d80();
                  lVar10 = *plVar20;
                  for (lVar14 = lVar10; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                    if (lVar14 == lVar13) goto LAB_140c28736;
                  }
                }
                lVar10 = 0;
LAB_140c28736:
                if (*plVar19 != 0) {
                  lVar17 = FUN_142f71d80();
                  lVar14 = *plVar19;
                  for (lVar13 = lVar14; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
                    if (lVar13 == lVar17) goto LAB_140c28760;
                  }
                }
                lVar14 = 0;
LAB_140c28760:
                if (lVar10 == lVar14) {
                  local_1a8 = iVar22 + 1;
                  if ((int)local_1a4 < (int)local_1a8) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b0,plVar12);
                  }
                  plVar12 = (longlong *)(ulonglong)local_1a8;
                  uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
                  lVar10 = plVar19[1];
                  uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
                  plVar16 = local_1b0 + (longlong)iVar22 * 2;
                  *(int *)plVar16 = (int)*plVar19;
                  *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
                  *(int *)(plVar16 + 1) = (int)lVar10;
                  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar5;
                  plVar20 = local_1b0;
                  local_1b8 = local_1a8;
                  goto LAB_140c28854;
                }
              }
              local_198 = iVar9 + 1;
              if (local_194 < (int)local_198) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1a0,plVar18);
                plVar23 = local_1a0;
              }
              uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
              lVar10 = plVar19[1];
              uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
              plVar16 = plVar23 + (longlong)iVar9 * 2;
              *(int *)plVar16 = (int)*plVar19;
              *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
              *(int *)(plVar16 + 1) = (int)lVar10;
              *(undefined4 *)((longlong)plVar16 + 0xc) = uVar5;
              local_1b4 = local_198;
LAB_140c2884f:
              plVar18 = (longlong *)(ulonglong)local_1b4;
              plVar20 = local_1b0;
            }
          }
          else {
            local_1a8 = iVar22 + 1;
            if ((int)plVar16 < (int)local_1a8) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b0,plVar12);
              plVar20 = local_1b0;
            }
            plVar12 = (longlong *)(ulonglong)local_1a8;
            uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
            lVar10 = plVar19[1];
            uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
            plVar16 = plVar20 + (longlong)iVar22 * 2;
            *(int *)plVar16 = (int)*plVar19;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
            *(int *)(plVar16 + 1) = (int)lVar10;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar5;
            local_1b8 = local_1a8;
          }
        }
        else {
          if (*plVar19 != 0) {
            plVar15 = (longlong *)FUN_142f71d80();
            plVar16 = (longlong *)*plVar19;
            for (plVar2 = plVar16; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
              if (plVar2 == plVar15) goto LAB_140c281f6;
            }
          }
          plVar16 = (longlong *)0x0;
LAB_140c281f6:
          lVar10 = plVar16[0x1f];
          if (lVar10 == 0) {
            (**(code **)(*plVar16 + 0x368))(plVar16);
            lVar10 = plVar16[0x1f];
            if (lVar10 == 0) goto LAB_140c28854;
          }
          lVar14 = FUN_141437870();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            local_150 = 0;
            FUN_140c124f0(lVar10 + 0x418,&local_80);
            lVar14 = local_80;
            if ((local_78 != 0) && (0 < local_78 + -1)) {
              plVar16 = (longlong *)FName::FName(local_60,local_80,1);
              local_150 = *plVar16;
            }
            lVar13 = local_150;
            if (lVar14 != 0) {
              FMemory::Free(lVar14);
            }
            local_148 = 0;
            FUN_140c124f0(lVar10 + 0x440);
            lVar14 = local_70;
            if ((local_68 != 0) && (0 < local_68 + -1)) {
              plVar16 = (longlong *)FName::FName(local_58,local_70,1);
              local_148 = *plVar16;
            }
            lVar17 = local_148;
            if (lVar14 != 0) {
              FMemory::Free(lVar14);
            }
            local_d0 = FUN_140c16060(lVar10);
            local_138 = 0;
            bVar6 = true;
            bVar7 = true;
            if (lVar13 != 0) {
              bVar6 = false;
              for (plVar16 = local_170; plVar16 != local_170 + local_178; plVar16 = plVar16 + 1) {
                if (*(longlong *)(*plVar16 + 0x18) == lVar13) {
                  bVar6 = true;
                  break;
                }
              }
            }
            local_130 = 0;
            if (lVar17 != 0) {
              local_f0 = 0;
              local_f8 = 0;
              local_108 = *(undefined4 *)(lVar10 + 0x430);
              local_104 = *(undefined4 *)(lVar10 + 0x434);
              local_100 = *(undefined4 *)(lVar10 + 0x438);
              local_c0 = *(undefined8 *)(lVar10 + 0x440);
              local_e8 = 0;
              local_128 = 0;
              FString::FString(local_b8,lVar10 + 0x448);
              FSoftObjectPath::operator=(&local_f8);
              bVar7 = false;
              puVar1 = local_160 + (int)local_190;
              if (local_160 != puVar1) {
                local_120 = 0;
                puVar25 = local_160;
                do {
                  uVar11 = *puVar25;
                  local_90 = 0;
                  local_a8 = local_108;
                  local_a4 = local_104;
                  local_a0 = local_100;
                  local_c0 = local_f8;
                  local_88 = 0;
                  local_98 = 0;
                  FString::FString(local_b8,&local_f0);
                  FSoftObjectPath::operator=(&local_98,&local_c0);
                  cVar8 = FUN_14122ec70(uVar11);
                  if (cVar8 != '\0') {
                    bVar7 = true;
                    goto LAB_140c2843e;
                  }
                  puVar25 = puVar25 + 1;
                } while (puVar25 != puVar1);
                bVar7 = false;
              }
LAB_140c2843e:
              plVar23 = local_1a0;
              plVar19 = local_140;
              if (local_f0 != 0) {
                FMemory::Free();
                plVar23 = local_1a0;
                plVar19 = local_140;
              }
            }
            if (local_d0 != 0) {
              uVar11 = UCableComponent::GetAttachedActor(local_d0);
              FUN_1407c9b90(uVar11);
            }
            bVar3 = false;
            local_118 = 0;
            if ((lVar13 == 0) && (local_110 = 0, lVar17 == 0)) {
              bVar3 = 0 < (int)local_190;
            }
            else if ((bVar6) && (bVar7)) {
              bVar3 = true;
            }
            lVar10 = plVar19[1];
            if (*(char *)(lVar10 + 0xad) == '\0') {
              if (*(char *)(lVar10 + 0xae) == '\0') {
                if (*(char *)(lVar10 + 0xaf) == '\0') goto LAB_140c2884a;
                if (param_1[0xd6] == 0) goto LAB_140c28542;
              }
              else if (!bVar3) {
                if (param_1[0xd6] == 0) {
                  plVar16 = local_188 + local_18c;
                  for (plVar20 = local_188; plVar20 != plVar16; plVar20 = plVar20 + 1) {
                    if (*plVar20 != 0) {
                      lVar13 = FUN_142f71d80();
                      lVar10 = *plVar20;
                      for (lVar14 = lVar10; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                        if (lVar14 == lVar13) goto LAB_140c285f0;
                      }
                    }
                    lVar10 = 0;
LAB_140c285f0:
                    if (*plVar19 != 0) {
                      lVar17 = FUN_142f71d80();
                      lVar14 = *plVar19;
                      for (lVar13 = lVar14; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
                        if (lVar13 == lVar17) goto LAB_140c28616;
                      }
                    }
                    lVar14 = 0;
LAB_140c28616:
                    if (lVar10 == lVar14) goto LAB_140c2864b;
                  }
                }
                goto LAB_140c28542;
              }
            }
            else if (bVar3) {
              if (param_1[0xd6] == 0) {
                plVar16 = local_188 + local_18c;
                for (plVar20 = local_188; plVar20 != plVar16; plVar20 = plVar20 + 1) {
                  if (*plVar20 != 0) {
                    lVar13 = FUN_142f71d80();
                    lVar10 = *plVar20;
                    for (lVar14 = lVar10; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                      if (lVar14 == lVar13) goto LAB_140c28506;
                    }
                  }
                  lVar10 = 0;
LAB_140c28506:
                  if (*plVar19 != 0) {
                    lVar17 = FUN_142f71d80();
                    lVar14 = *plVar19;
                    for (lVar13 = lVar14; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
                      if (lVar13 == lVar17) goto LAB_140c28530;
                    }
                  }
                  lVar14 = 0;
LAB_140c28530:
                  if (lVar10 == lVar14) goto LAB_140c2864b;
                }
              }
LAB_140c28542:
              local_198 = local_1b4 + 1;
              if (local_194 < (int)local_198) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1a0,local_1b4);
                plVar23 = local_1a0;
              }
              uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
              lVar10 = plVar19[1];
              uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
              plVar16 = plVar23 + (longlong)(int)local_1b4 * 2;
              *(int *)plVar16 = (int)*plVar19;
              *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
              *(int *)(plVar16 + 1) = (int)lVar10;
              *(undefined4 *)((longlong)plVar16 + 0xc) = uVar5;
              local_1b4 = local_198;
LAB_140c2884a:
              plVar12 = (longlong *)(ulonglong)local_1b8;
              goto LAB_140c2884f;
            }
LAB_140c2864b:
            local_1a8 = local_1b8 + 1;
            if ((int)local_1a4 < (int)local_1a8) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b0,local_1b8);
            }
            plVar12 = (longlong *)(ulonglong)local_1a8;
            uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
            lVar10 = plVar19[1];
            uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
            plVar18 = (longlong *)(ulonglong)local_1b4;
            plVar16 = local_1b0 + (longlong)(int)local_1b8 * 2;
            *(int *)plVar16 = (int)*plVar19;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
            *(int *)(plVar16 + 1) = (int)lVar10;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar5;
            plVar20 = local_1b0;
            local_1b8 = local_1a8;
          }
        }
LAB_140c28854:
        iVar22 = (int)plVar18;
        iVar24 = (int)plVar12;
        plVar19 = plVar19 + 2;
        plVar16 = (longlong *)(ulonglong)local_1a4;
        local_140 = plVar19;
      } while (plVar19 != local_c8);
    }
    plVar16 = plVar20 + (longlong)iVar24 * 2;
    plVar19 = plVar20;
    if (plVar20 != plVar16) {
      do {
        uVar11 = thunk_FUN_142f5c680(param_1,*plVar20);
        FUN_142f51850(param_1,plVar20[1],uVar11,param_2 ^ 1);
        plVar20 = plVar20 + 2;
        plVar19 = local_1b0;
      } while (plVar20 != plVar16);
    }
    for (plVar16 = plVar23; plVar16 != plVar23 + (longlong)iVar22 * 2; plVar16 = plVar16 + 2) {
      uVar11 = thunk_FUN_142f5c680(param_1,*plVar16);
      FUN_142f6a260(param_1,plVar16[1],uVar11,param_2);
    }
    if (plVar23 != (longlong *)0x0) {
      FMemory::Free(plVar23);
    }
    if (plVar19 != (longlong *)0x0) {
      FMemory::Free(plVar19);
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_160 != (undefined8 *)0x0) {
      FMemory::Free(local_160);
    }
    if (local_170 != (longlong *)0x0) {
      FMemory::Free(local_170);
    }
  }
  return;
}



// FUNCTION 140c289a0 FUN_140c289a0 body=7 status=ok
// SIG undefined FUN_140c289a0(void)

void FUN_140c289a0(undefined1 param_1)

{
  DAT_14686a908 = param_1;
  return;
}



// FUNCTION 140c289b0 FUN_140c289b0 body=465 status=ok
// SIG undefined FUN_140c289b0(void)

undefined8 FUN_140c289b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 != 0) {
    local_60 = *(longlong *)(lVar1 + 0x458);
    plVar2 = *(longlong **)(param_1 + 0x10);
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x368))();
      lVar5 = plVar2[0x1f];
    }
    if (lVar5 != 0) {
      if (*(longlong *)(param_1 + 0x598) != 0) {
        FUN_140c25c50(lVar5,lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x10));
      }
      lVar1 = *(longlong *)(lVar5 + 0x590);
      *(longlong *)(param_1 + 0x590) = lVar1;
      lVar3 = 0;
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x224) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0x1e8) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0x218) = 0;
        lVar3 = *(longlong *)(param_1 + 0x590);
      }
      lVar1 = *(longlong *)(lVar5 + 0x588);
      *(longlong *)(param_1 + 0x588) = lVar1;
      if (((lVar3 != 0) && (lVar1 != 0)) && (local_60 != 0)) {
        local_78[0] = 1;
        local_70 = lVar3;
        local_68 = lVar1;
        if (*(char *)(param_1 + 0x128) == '\x03') {
          if (*(longlong *)(param_1 + 0x598) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x580) + 0x468))
                      (*(longlong **)(param_1 + 0x580),local_78,0,1);
            uVar4 = 1;
            goto LAB_140c28b29;
          }
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x580);
          *(longlong *)(lVar5 + 0x208) = lVar3;
          *(longlong *)(lVar5 + 0x210) = lVar1;
          FUN_143002580();
        }
        uVar4 = 1;
        goto LAB_140c28b29;
      }
    }
  }
  uVar4 = 0;
LAB_140c28b29:
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 140c28b90 FUN_140c28b90 body=145 status=ok
// SIG undefined FUN_140c28b90(void)

bool FUN_140c28b90(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)thunk_FUN_142f5c680();
  bVar2 = true;
  if ((plVar3 == (longlong *)0x0) || (*(char *)((longlong)plVar3 + 0x69) == '\0')) {
    return true;
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    lVar4 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    if (bVar2) {
      return *(char *)(lVar1 + 0x4f0) == '\0';
    }
  }
  return true;
}



// FUNCTION 140c28c40 FUN_140c28c40 body=1185 status=ok
// SIG undefined FUN_140c28c40(void)

void FUN_140c28c40(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  lVar7 = 0;
  if (param_1[7] != 0) {
    iVar1 = *(int *)(param_1[7] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[10] != 0) {
    iVar1 = *(int *)(param_1[10] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0xb] != 0) {
    iVar1 = *(int *)(param_1[0xb] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0xc] != 0) {
    iVar1 = *(int *)(param_1[0xc] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0xe] != 0) {
    iVar1 = *(int *)(param_1[0xe] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0x10] != 0) {
    iVar1 = *(int *)(param_1[0x10] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0x12] != 0) {
    iVar1 = *(int *)(param_1[0x12] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0x11] != 0) {
    iVar1 = *(int *)(param_1[0x11] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[9] != 0) {
    iVar1 = *(int *)(param_1[9] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0x13] != 0) {
    iVar1 = *(int *)(param_1[0x13] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if (param_1[0x16] != 0) {
    iVar1 = *(int *)(param_1[0x16] + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x278))();
    if (param_1[8] != 0) {
      iVar1 = *(int *)(param_1[8] + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x20000000;
    }
  }
  if ((param_1[0xd] != 0) && (lVar5 != 0)) {
    FUN_142543860(lVar5,param_1[0xd],0,1);
  }
  if ((param_1[0xf] != 0) && (lVar5 != 0)) {
    FUN_142543860(lVar5,param_1[0xf],0,1);
  }
  puVar2 = (undefined8 *)param_1[0x14];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x38))();
    plVar3 = (longlong *)param_1[0x15];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
  lVar7 = param_1[0x17];
  if (lVar7 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
    FMemory::operator_delete(lVar7,0x20);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 140c290f0 FUN_140c290f0 body=158 status=ok
// SIG undefined FUN_140c290f0(void)

void FUN_140c290f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_142462260();
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar1 != 0) && (plVar2 = (longlong *)FUN_140c12480(lVar1), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
    lVar4 = *plVar2;
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    (**(code **)(lVar4 + 0x60))(plVar2,uVar3);
  }
  lVar4 = FUN_14126dac0(lVar1);
  if (lVar4 == 0) {
    return;
  }
  FUN_14126a0a0(lVar4,0,lVar1);
  return;
}



// FUNCTION 140c29190 FUN_140c29190 body=45 status=ok
// SIG undefined FUN_140c29190(void)

void FUN_140c29190(undefined8 *param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    local_res10[0] = param_2;
    FUN_140bf96a0(*param_1,param_1 + 9,local_res10);
  }
  return;
}



// FUNCTION 140c291c0 FUN_140c291c0 body=45 status=ok
// SIG undefined FUN_140c291c0(void)

void FUN_140c291c0(undefined8 *param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    local_res10[0] = param_2;
    FUN_140bf96a0(*param_1,param_1 + 7,local_res10);
  }
  return;
}



// FUNCTION 140c291f0 FUN_140c291f0 body=45 status=ok
// SIG undefined FUN_140c291f0(void)

void FUN_140c291f0(undefined8 *param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    local_res10[0] = param_2;
    FUN_140bf96a0(*param_1,param_1 + 10,local_res10);
  }
  return;
}



// FUNCTION 140c29220 FUN_140c29220 body=45 status=ok
// SIG undefined FUN_140c29220(void)

void FUN_140c29220(undefined8 *param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    local_res10[0] = param_2;
    FUN_140bf96a0(*param_1,param_1 + 8,local_res10);
  }
  return;
}



// FUNCTION 140c29250 FUN_140c29250 body=45 status=ok
// SIG undefined FUN_140c29250(void)

void FUN_140c29250(undefined8 *param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    local_res10[0] = param_2;
    FUN_140bf96a0(*param_1,param_1 + 6,local_res10);
  }
  return;
}



// FUNCTION 140c29280 FUN_140c29280 body=1277 status=ok
// SIG undefined FUN_140c29280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c29280(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void **ppvVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined8 local_res20;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8 [3];
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_a0 [2];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_48;
  
  plVar6 = (longlong *)0x0;
  local_res20 = 0;
  plVar5 = (longlong *)FUN_1404b0000(&local_res20);
  bVar18 = plVar5 != (longlong *)0x0;
  if (bVar18) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_b0);
    plVar6 = (longlong *)*plVar5;
  }
  else {
    plVar5 = local_d8 + 2;
    local_d8[2] = 0;
    plStack_c0 = (longlong *)0x0;
  }
  plVar3 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  if ((bVar18) && (local_a8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_a8 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  plVar5 = plStack_c0;
  if ((!bVar18) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_c0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  if (plVar6 == (longlong *)0x0) {
    if ((param_1 != 0) && (cVar4 = FWeakObjectPtr::IsValid(&DAT_146298ae0), cVar4 == '\0')) {
      FWeakObjectPtr::operator=(&DAT_146298ae0,param_1);
      iVar16 = 2;
      lVar7 = DAT_14686b3e8;
      if (DAT_14686b3e8 == 0) {
        plVar6 = (longlong *)FMemory::Realloc(0,0x20,0);
        local_48 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_GetPoolName_143f3f048;
          plVar6[1] = (longlong)FUN_140c21270;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[3] = lVar7;
          *plVar6 = (longlong)&PTR_GetPoolName_143f3f090;
        }
        lVar7 = 0;
        if (plVar6 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535190,1);
          plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_b8);
          iVar13 = DAT_146535198;
          lVar17 = (longlong)DAT_146535198;
          lVar7 = *plVar5;
          DAT_146535198 = DAT_146535198 + 1;
          if (DAT_14653519c < DAT_146535198) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535190,iVar13);
          }
          puVar8 = (undefined8 *)(lVar17 * 0x10 + _DAT_146535190);
          *puVar8 = plVar6;
          *(undefined4 *)(puVar8 + 1) = 2;
        }
      }
      DAT_14686b3e8 = lVar7;
      pwVar15 = L"ScreenshotFilenamePrefix";
      pwVar14 = L"ScreenshotUtil";
      pwVar12 = L"Screenshot";
      puVar11 = local_60;
      if (param_2 != '\0') {
        pwVar15 = L"PhotoFilenamePrefix";
        pwVar14 = L"ScreenshotUtil";
        pwVar12 = L"Photo";
        puVar11 = local_78;
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (puVar11,pwVar12,pwVar14,pwVar15);
      FText::FText(local_90,uVar9);
      if ((((param_2 != '\0') + 1U & 2) != 0) && (local_70 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if ((param_2 == '\0') && (local_58 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_58 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      plVar6 = (longlong *)FUN_14292cb70();
      lVar7 = plVar6[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar7 = plVar6[0x1f];
      }
      puVar8 = (undefined8 *)FText::ToString(local_90);
      iVar13 = *(int *)(puVar8 + 1) + -1;
      if (*(int *)(puVar8 + 1) == 0) {
        iVar13 = 0;
      }
      if ((*(int *)(lVar7 + 0x890) != 0) || (iVar13 == -1)) {
        iVar16 = 1;
      }
      local_e8 = (void *)0x0;
      local_e0 = *(int *)(lVar7 + 0x890);
      lVar17 = (longlong)local_e0;
      _Src = *(void **)(lVar7 + 0x888);
      if ((local_e0 == 0) && (iVar13 + iVar16 == 0)) {
        local_dc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0 + iVar13 + iVar16,0);
        _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar17 * 2);
      }
      FString::PathAppend(&local_e8,*puVar8,iVar13);
      ppvVar10 = (void **)FUN_141671940(local_a0,&local_e8,0);
      if (&local_e8 != ppvVar10) {
        if (local_e8 != (void *)0x0) {
          FMemory::Free();
        }
        local_e8 = *ppvVar10;
        *ppvVar10 = (void *)0x0;
        local_e0 = *(int *)(ppvVar10 + 1);
        local_dc = *(undefined4 *)((longlong)ppvVar10 + 0xc);
        ppvVar10[1] = (void *)0x0;
      }
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
      local_d8[0] = 0;
      local_d8[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      FGenericPlatformString::Memcpy(local_d8[0],&DAT_144328478,8);
      uVar9 = FUN_1415c3d50();
      cVar4 = FFileHelper::GenerateNextBitmapFilename(&local_e8,local_d8,&DAT_14686b3d8,uVar9);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      if (cVar4 != '\0') {
        FScreenshotRequest::RequestScreenshot(&DAT_14686b3d8,0,0);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_88 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140c29780 FUN_140c29780 body=130 status=ok
// SIG undefined FUN_140c29780(void)

ulonglong FUN_140c29780(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413ffe00();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar3 = FUN_140e3a0c0(param_2,param_3,param_4);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c29810 FUN_140c29810 body=806 status=ok
// SIG undefined FUN_140c29810(void)

void FUN_140c29810(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 uStack_7c;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar13 = 0;
  if ((param_1[10] == 0) && (lVar4 = (**(code **)(*param_1 + 0x148))(), lVar4 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar6 = (longlong *)FUN_142d5ecc0(uVar5);
    if ((plVar6 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar6 + 0x2c0))(plVar6), lVar4 != 0))
    {
      plVar6 = (longlong *)(lVar4 + 0xf8);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      lVar8 = lVar13;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = 0x40c1e4c0;
        *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
        *(undefined4 *)(plVar7 + 3) = 0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_7c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_144012f78;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
        plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
        iVar3 = *(int *)(lVar4 + 0x100);
        lVar8 = *plVar9;
        *(int *)(lVar4 + 0x100) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x104) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
        }
        puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar6);
        *puVar10 = plVar7;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      param_1[10] = lVar8;
    }
  }
  if (((char)param_1[0x10] != '\0') &&
     (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar6 = (longlong *)FUN_142d5ecc0(uVar5);
    if ((plVar6 != (longlong *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6), plVar6 != (longlong *)0x0)) {
      plVar7 = param_1 + 0xc;
      cVar2 = FUN_142d868e0(plVar6,plVar7);
      if (cVar2 == '\0') {
        plVar9 = (longlong *)param_1[0xd];
        lVar4 = *plVar7;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        FString::FString(&local_50,param_1 + 0xe);
        plVar11 = (longlong *)FMemory::Realloc(0,0x40);
        lVar8 = local_50;
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = (longlong)&PTR_GetPoolName_14433a950;
          plVar11[1] = (longlong)param_1;
          plVar11[2] = lVar4;
          plVar11[3] = (longlong)plVar9;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          plVar11[4] = local_50;
          *(undefined4 *)(plVar11 + 5) = local_48;
          *(undefined4 *)((longlong)plVar11 + 0x2c) = local_44;
          local_50 = 0;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar11[7] = lVar4;
          *plVar11 = (longlong)&PTR_GetPoolName_14433a998;
          lVar8 = lVar13;
        }
        if (plVar11 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6 + 7,1);
          plVar12 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_res18);
          lVar4 = plVar6[8];
          lVar13 = *plVar12;
          iVar3 = (int)lVar4 + 1;
          *(int *)(plVar6 + 8) = iVar3;
          if (*(int *)((longlong)plVar6 + 0x44) < iVar3) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
          }
          puVar10 = (undefined8 *)((longlong)(int)lVar4 * 0x10 + plVar6[7]);
          *puVar10 = plVar11;
          *(undefined4 *)(puVar10 + 1) = 4;
        }
        param_1[8] = lVar13;
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          lVar13 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
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
        (**(code **)(*plVar6 + 0x48))(plVar6,plVar7);
      }
      else {
        FUN_140c1a2e0(param_1,plVar7);
      }
      if ((char)param_1[0x10] != '\0') {
        *(undefined1 *)(param_1 + 0x10) = 0;
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>
        ::
        ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>
                  (plVar7);
      }
    }
  }
  return;
}



// FUNCTION 140c29b40 FUN_140c29b40 body=110 status=ok
// SIG undefined FUN_140c29b40(void)

void FUN_140c29b40(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x40))();
  }
  if (param_1[0x16] != 0) {
    FUN_140c29810();
  }
  if (param_1[0x17] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b61420(param_1[0x17],param_2,uVar1,param_1[0x14]);
  }
  return;
}



// FUNCTION 140c29bb0 thunk_FUN_140c29bc0 body=5 status=ok
// SIG undefined thunk_FUN_140c29bc0(void)

void thunk_FUN_140c29bc0(longlong *param_1,longlong *param_2,longlong param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStackX_18 [8];
  
  if (param_3 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar4 = param_1[1];
    if (plVar2 != plVar2 + (longlong)(int)lVar4 * 8) {
      plVar9 = plVar2 + 2;
      do {
        fVar10 = *(float *)((longlong)plVar9 + -0xc) - param_4;
        *(float *)((longlong)plVar9 + -0xc) = fVar10;
        if (fVar10 < 0.0) {
LAB_140c29c69:
          plVar8 = (longlong *)*param_2;
          plVar1 = plVar8 + (int)param_2[1];
          for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
            if ((*plVar8 != 0) &&
               (lVar6 = UPlayer::GetPlayerController(*plVar8,param_3), lVar6 != 0)) {
              lVar7 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_140c24f10(plVar9 + -2,lVar6);
                if (((longlong *)*plVar9 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x20))(), cVar5 == '\0')) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) && (lVar6 = FUN_140cff1b0(lVar6), lVar6 != 0)) {
                  FUN_140cca1d0(lVar6,plVar9 + -1);
                }
              }
            }
          }
        }
        else {
          if (((longlong *)*plVar9 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x20))(), cVar5 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((!bVar3) ||
             ((cVar5 = FWeakObjectPtr::IsValid(plVar9 + 5), cVar5 == '\0' &&
              (*(char *)((longlong)plVar9 + 0x24) == '\0')))) goto LAB_140c29c69;
        }
        plVar1 = plVar9 + 6;
        plVar9 = plVar9 + 8;
      } while (plVar1 != plVar2 + (longlong)(int)lVar4 * 8);
    }
    FUN_140bfa460(param_1,auStackX_18);
  }
  return;
}



// FUNCTION 140c29bc0 FUN_140c29bc0 body=430 status=ok
// SIG undefined FUN_140c29bc0(void)

void FUN_140c29bc0(longlong *param_1,longlong *param_2,longlong param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar4 = param_1[1];
    if (plVar2 != plVar2 + (longlong)(int)lVar4 * 8) {
      plVar9 = plVar2 + 2;
      do {
        fVar10 = *(float *)((longlong)plVar9 + -0xc) - param_4;
        *(float *)((longlong)plVar9 + -0xc) = fVar10;
        if (fVar10 < 0.0) {
LAB_140c29c69:
          plVar8 = (longlong *)*param_2;
          plVar1 = plVar8 + (int)param_2[1];
          for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
            if ((*plVar8 != 0) &&
               (lVar6 = UPlayer::GetPlayerController(*plVar8,param_3), lVar6 != 0)) {
              lVar7 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_140c24f10(plVar9 + -2,lVar6);
                if (((longlong *)*plVar9 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x20))(), cVar5 == '\0')) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) && (lVar6 = FUN_140cff1b0(lVar6), lVar6 != 0)) {
                  FUN_140cca1d0(lVar6,plVar9 + -1);
                }
              }
            }
          }
        }
        else {
          if (((longlong *)*plVar9 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x20))(), cVar5 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((!bVar3) ||
             ((cVar5 = FWeakObjectPtr::IsValid(plVar9 + 5), cVar5 == '\0' &&
              (*(char *)((longlong)plVar9 + 0x24) == '\0')))) goto LAB_140c29c69;
        }
        plVar1 = plVar9 + 6;
        plVar9 = plVar9 + 8;
      } while (plVar1 != plVar2 + (longlong)(int)lVar4 * 8);
    }
    FUN_140bfa460(param_1,local_res18);
  }
  return;
}



// FUNCTION 140c29d70 FUN_140c29d70 body=1400 status=ok
// SIG undefined FUN_140c29d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c29d70(float param_1,longlong param_2,char param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_res10;
  undefined4 local_c8;
  char local_c4;
  undefined1 local_c3;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  float local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_48 [8];
  undefined1 local_40 [40];
  
  lVar11 = DAT_14686ae60;
  if (param_2 == 0) {
    return;
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 1;
  }
  else {
    lVar8 = 0;
  }
  if ((param_3 == '\0') && (param_4 == '\0')) {
LAB_140c29ec4:
    plVar10 = (longlong *)FDateTime::Now(local_48);
    if (DAT_14686b4e0 == '\0') {
LAB_140c29eff:
      bVar4 = false;
    }
    else {
      if ((DAT_14686b4f8 == 0) || (*plVar10 - _DAT_14686b4e8 <= DAT_14686b4f8)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140c29eff;
      bVar4 = true;
    }
    if (bVar4) {
      return;
    }
  }
  else {
    dVar3 = (double)*(float *)(lVar11 + lVar8 * 4) * 10000000.0 + 0.5;
    lVar11 = (longlong)dVar3;
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (0.0 <= dVar3) {
      if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar3)) {
        auVar2._8_4_ = SUB84(dVar3,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = uVar16;
        uVar7 = movmskpd(0,auVar2);
        uVar9 = -(ulonglong)(uVar7 & 1);
        goto LAB_140c29e66;
      }
    }
    else if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = uVar16;
      uVar7 = movmskpd(0,auVar1);
      uVar9 = (ulonglong)(uVar7 & 1 ^ 1);
LAB_140c29e66:
      dVar3 = (double)(longlong)(lVar11 + uVar9);
    }
    plVar10 = (longlong *)FDateTime::Now(&local_res10);
    cVar5 = DAT_14686b4e0;
    DAT_14686b4e0 = '\x01';
    if (cVar5 == '\0') {
      _DAT_14686b4e1 = 1;
      _DAT_14686b4e8 = *plVar10;
      _DAT_14686b4f0 = local_res10;
    }
    else {
      _DAT_14686b4e8 = *plVar10;
    }
    DAT_14686b4f8 = (longlong)dVar3;
    if (param_3 == '\0') goto LAB_140c29ec4;
  }
  lVar12 = (longlong)DAT_14686ae40 * 0x78 + DAT_14686ae38;
  lVar8 = DAT_14686ae38;
  for (lVar11 = DAT_14686ae38; DAT_14686ae38 = lVar8, lVar11 != lVar12; lVar11 = lVar11 + 0x78) {
    fVar15 = *(float *)(lVar11 + 0x48) - param_1;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar11 + 0x48) = fVar15;
    lVar8 = DAT_14686ae38;
  }
  iVar13 = DAT_14686ae40 + -1;
  if (-1 < iVar13) {
    lVar11 = (longlong)iVar13 * 0x78;
    do {
      if ((*(float *)(lVar11 + 0x48 + lVar8) <= 0.0001) && (*(char *)(lVar11 + 4 + lVar8) == '\x01')
         ) {
        FUN_140c246e0(&DAT_14686ae38,iVar13,1,1);
        lVar8 = DAT_14686ae38;
      }
      lVar11 = lVar11 + -0x78;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  if (DAT_14686ae30 < 1) {
    return;
  }
  plVar10 = (longlong *)FDateTime::Now(local_40);
  if (DAT_14686b4e0 == '\0') {
LAB_140c29fed:
    bVar4 = false;
  }
  else {
    if ((DAT_14686b4f8 == 0) || (*plVar10 - _DAT_14686b4e8 <= DAT_14686b4f8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140c29fed;
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
  FUN_140bfdff0(&local_c8,DAT_14686ae28);
  FUN_140c246e0(&DAT_14686ae28,0,1,1);
  if (local_c4 == '\x01') {
    local_80 = 5.0;
  }
  if (0 < DAT_14686ae40) {
    for (lVar11 = DAT_14686ae38; lVar11 != (longlong)DAT_14686ae40 * 0x78 + DAT_14686ae38;
        lVar11 = lVar11 + 0x78) {
      if (*(char *)(lVar11 + 4) == local_c4) goto switchD_140c2a099_default;
    }
  }
  if ((local_c4 != '\x01') && (cVar5 = FUN_140bc9df0(param_2), cVar5 != '\0'))
  goto switchD_140c2a099_default;
  switch(local_c3) {
  case 1:
  case 2:
  case 3:
    cVar5 = FUN_140c0cc90(&local_c8,param_2);
    if (cVar5 != '\0') {
      local_80 = 4.0;
      break;
    }
  default:
switchD_140c2a099_default:
    iVar13 = DAT_14686ae30;
    lVar11 = (longlong)DAT_14686ae30;
    DAT_14686ae30 = DAT_14686ae30 + 1;
    if (DAT_14686ae34 < DAT_14686ae30) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (&DAT_14686ae28,iVar13);
    }
    puVar14 = (undefined4 *)(lVar11 * 0x78 + DAT_14686ae28);
    goto LAB_140c2a225;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_140c0c970(&local_c8);
    break;
  case 10:
  case 0xb:
    FUN_140c0c110(&local_c8);
    break;
  case 0xc:
    FUN_140c0ba50(&local_c8,param_2);
    DAT_14686a908 = 1;
    break;
  case 0xd:
    FUN_140c0bda0(&local_c8,param_2);
    break;
  case 0xe:
    cVar5 = FText::IsEmpty(local_b0);
    if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(local_98), cVar5 != '\0')) {
      FText::operator=(local_b0,&DAT_14686f600);
      FText::operator=(local_98,&DAT_14686f618);
    }
    break;
  case 0xf:
    cVar5 = FText::IsEmpty(local_b0);
    if ((cVar5 != '\0') || (cVar5 = FText::IsEmpty(local_98), cVar5 != '\0')) goto LAB_140c2a2b3;
  }
  lVar11 = FUN_14244f490(param_2,0);
  if (lVar11 == 0) {
LAB_140c2a1a5:
    lVar11 = 0;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140c2a1a5;
  }
  FUN_140c0e080(&local_c8,lVar11);
  iVar13 = DAT_14686ae40;
  if (0.0 < local_80) {
    lVar11 = (longlong)DAT_14686ae40;
    DAT_14686ae40 = DAT_14686ae40 + 1;
    if (DAT_14686ae44 < DAT_14686ae40) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (&DAT_14686ae38,iVar13);
    }
    puVar14 = (undefined4 *)(lVar11 * 0x78 + DAT_14686ae38);
LAB_140c2a225:
    *puVar14 = local_c8;
    *(char *)(puVar14 + 1) = local_c4;
    *(undefined1 *)((longlong)puVar14 + 5) = local_c3;
    *(undefined8 *)(puVar14 + 2) = local_c0;
    *(longlong *)(puVar14 + 4) = local_b8;
    if (local_b8 != 0) {
      LOCK();
      *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
      UNLOCK();
    }
    FText::FText(puVar14 + 6,local_b0);
    FText::FText(puVar14 + 0xc,local_98);
    puVar14[0x12] = local_80;
    puVar14[0x14] = local_78;
    puVar14[0x15] = local_74;
    *(undefined8 *)(puVar14 + 0x16) = local_70;
    *(undefined1 *)(puVar14 + 0x18) = local_68;
    puVar14[0x19] = local_64;
    puVar14[0x1a] = local_60;
    puVar14[0x1b] = local_5c;
    puVar14[0x1c] = local_58;
    *(undefined1 *)(puVar14 + 0x1d) = local_54;
  }
LAB_140c2a2b3:
  FUN_140bff450(&local_c8);
  return;
}



// FUNCTION 140c2a330 thunk_FUN_140c29d70 body=5 status=ok
// SIG undefined thunk_FUN_140c29d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140c29d70(float param_1,longlong param_2,char param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uStackX_10;
  undefined4 uStack_c8;
  char cStack_c4;
  undefined1 uStack_c3;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  float fStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [40];
  
  lVar11 = DAT_14686ae60;
  if (param_2 == 0) {
    return;
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 1;
  }
  else {
    lVar8 = 0;
  }
  if ((param_3 == '\0') && (param_4 == '\0')) {
LAB_140c29ec4:
    plVar10 = (longlong *)FDateTime::Now(auStack_48);
    if (DAT_14686b4e0 == '\0') {
LAB_140c29eff:
      bVar4 = false;
    }
    else {
      if ((DAT_14686b4f8 == 0) || (*plVar10 - _DAT_14686b4e8 <= DAT_14686b4f8)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140c29eff;
      bVar4 = true;
    }
    if (bVar4) {
      return;
    }
  }
  else {
    dVar3 = (double)*(float *)(lVar11 + lVar8 * 4) * 10000000.0 + 0.5;
    lVar11 = (longlong)dVar3;
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (0.0 <= dVar3) {
      if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar3)) {
        auVar2._8_4_ = SUB84(dVar3,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = uVar16;
        uVar7 = movmskpd(0,auVar2);
        uVar9 = -(ulonglong)(uVar7 & 1);
        goto LAB_140c29e66;
      }
    }
    else if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = uVar16;
      uVar7 = movmskpd(0,auVar1);
      uVar9 = (ulonglong)(uVar7 & 1 ^ 1);
LAB_140c29e66:
      dVar3 = (double)(longlong)(lVar11 + uVar9);
    }
    plVar10 = (longlong *)FDateTime::Now(&uStackX_10);
    cVar5 = DAT_14686b4e0;
    DAT_14686b4e0 = '\x01';
    if (cVar5 == '\0') {
      _DAT_14686b4e1 = 1;
      _DAT_14686b4e8 = *plVar10;
      _DAT_14686b4f0 = uStackX_10;
    }
    else {
      _DAT_14686b4e8 = *plVar10;
    }
    DAT_14686b4f8 = (longlong)dVar3;
    if (param_3 == '\0') goto LAB_140c29ec4;
  }
  lVar12 = (longlong)DAT_14686ae40 * 0x78 + DAT_14686ae38;
  lVar8 = DAT_14686ae38;
  for (lVar11 = DAT_14686ae38; DAT_14686ae38 = lVar8, lVar11 != lVar12; lVar11 = lVar11 + 0x78) {
    fVar15 = *(float *)(lVar11 + 0x48) - param_1;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar11 + 0x48) = fVar15;
    lVar8 = DAT_14686ae38;
  }
  iVar13 = DAT_14686ae40 + -1;
  if (-1 < iVar13) {
    lVar11 = (longlong)iVar13 * 0x78;
    do {
      if ((*(float *)(lVar11 + 0x48 + lVar8) <= 0.0001) && (*(char *)(lVar11 + 4 + lVar8) == '\x01')
         ) {
        FUN_140c246e0(&DAT_14686ae38,iVar13,1,1);
        lVar8 = DAT_14686ae38;
      }
      lVar11 = lVar11 + -0x78;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  if (DAT_14686ae30 < 1) {
    return;
  }
  plVar10 = (longlong *)FDateTime::Now(auStack_40);
  if (DAT_14686b4e0 == '\0') {
LAB_140c29fed:
    bVar4 = false;
  }
  else {
    if ((DAT_14686b4f8 == 0) || (*plVar10 - _DAT_14686b4e8 <= DAT_14686b4f8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140c29fed;
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
  FUN_140bfdff0(&uStack_c8,DAT_14686ae28);
  FUN_140c246e0(&DAT_14686ae28,0,1,1);
  if (cStack_c4 == '\x01') {
    fStack_80 = 5.0;
  }
  if (0 < DAT_14686ae40) {
    for (lVar11 = DAT_14686ae38; lVar11 != (longlong)DAT_14686ae40 * 0x78 + DAT_14686ae38;
        lVar11 = lVar11 + 0x78) {
      if (*(char *)(lVar11 + 4) == cStack_c4) goto switchD_140c2a099_default;
    }
  }
  if ((cStack_c4 != '\x01') && (cVar5 = FUN_140bc9df0(param_2), cVar5 != '\0'))
  goto switchD_140c2a099_default;
  switch(uStack_c3) {
  case 1:
  case 2:
  case 3:
    cVar5 = FUN_140c0cc90(&uStack_c8,param_2);
    if (cVar5 != '\0') {
      fStack_80 = 4.0;
      break;
    }
  default:
switchD_140c2a099_default:
    iVar13 = DAT_14686ae30;
    lVar11 = (longlong)DAT_14686ae30;
    DAT_14686ae30 = DAT_14686ae30 + 1;
    if (DAT_14686ae34 < DAT_14686ae30) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (&DAT_14686ae28,iVar13);
    }
    puVar14 = (undefined4 *)(lVar11 * 0x78 + DAT_14686ae28);
    goto LAB_140c2a225;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_140c0c970(&uStack_c8);
    break;
  case 10:
  case 0xb:
    FUN_140c0c110(&uStack_c8);
    break;
  case 0xc:
    FUN_140c0ba50(&uStack_c8,param_2);
    DAT_14686a908 = 1;
    break;
  case 0xd:
    FUN_140c0bda0(&uStack_c8,param_2);
    break;
  case 0xe:
    cVar5 = FText::IsEmpty(auStack_b0);
    if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(auStack_98), cVar5 != '\0')) {
      FText::operator=(auStack_b0,&DAT_14686f600);
      FText::operator=(auStack_98,&DAT_14686f618);
    }
    break;
  case 0xf:
    cVar5 = FText::IsEmpty(auStack_b0);
    if ((cVar5 != '\0') || (cVar5 = FText::IsEmpty(auStack_98), cVar5 != '\0')) goto LAB_140c2a2b3;
  }
  lVar11 = FUN_14244f490(param_2,0);
  if (lVar11 == 0) {
LAB_140c2a1a5:
    lVar11 = 0;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140c2a1a5;
  }
  FUN_140c0e080(&uStack_c8,lVar11);
  iVar13 = DAT_14686ae40;
  if (0.0 < fStack_80) {
    lVar11 = (longlong)DAT_14686ae40;
    DAT_14686ae40 = DAT_14686ae40 + 1;
    if (DAT_14686ae44 < DAT_14686ae40) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (&DAT_14686ae38,iVar13);
    }
    puVar14 = (undefined4 *)(lVar11 * 0x78 + DAT_14686ae38);
LAB_140c2a225:
    *puVar14 = uStack_c8;
    *(char *)(puVar14 + 1) = cStack_c4;
    *(undefined1 *)((longlong)puVar14 + 5) = uStack_c3;
    *(undefined8 *)(puVar14 + 2) = uStack_c0;
    *(longlong *)(puVar14 + 4) = lStack_b8;
    if (lStack_b8 != 0) {
      LOCK();
      *(int *)(lStack_b8 + 8) = *(int *)(lStack_b8 + 8) + 1;
      UNLOCK();
    }
    FText::FText(puVar14 + 6,auStack_b0);
    FText::FText(puVar14 + 0xc,auStack_98);
    puVar14[0x12] = fStack_80;
    puVar14[0x14] = uStack_78;
    puVar14[0x15] = uStack_74;
    *(undefined8 *)(puVar14 + 0x16) = uStack_70;
    *(undefined1 *)(puVar14 + 0x18) = uStack_68;
    puVar14[0x19] = uStack_64;
    puVar14[0x1a] = uStack_60;
    puVar14[0x1b] = uStack_5c;
    puVar14[0x1c] = uStack_58;
    *(undefined1 *)(puVar14 + 0x1d) = uStack_54;
  }
LAB_140c2a2b3:
  FUN_140bff450(&uStack_c8);
  return;
}



// FUNCTION 140c2a340 FUN_140c2a340 body=1516 status=ok
// SIG undefined FUN_140c2a340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c2a340(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  byte local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(float *)(param_1 + 0x95) <= 0.0) {
    fVar5 = 1.0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    fVar5 = (*(float *)(lVar2 + 0x790) - *(float *)((longlong)param_1 + 0x4a4)) /
            *(float *)(param_1 + 0x95);
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  cVar1 = (char)param_1[0x94];
  if (cVar1 == '\0') {
    if (fVar5 < 1.0) {
      lVar2 = param_1[0x8b];
      local_d8 = 1;
      FUN_140c2b5c0(param_1,(*(float *)(lVar2 + 0x7c) - *(float *)(lVar2 + 0x38)) * fVar5 +
                            *(float *)(lVar2 + 0x38),
                    (*(float *)(lVar2 + 0x80) - *(float *)(lVar2 + 0x3c)) * fVar5 +
                    *(float *)(lVar2 + 0x3c),1);
      return;
    }
    FUN_140c27550(param_1,1);
    if (*(float *)(param_1 + 0x95) <= 0.0) {
      uVar4 = 2;
LAB_140c2a8e6:
      FUN_140c27550(param_1,uVar4);
      return;
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    FWeakObjectPtr::operator=(&local_b8,param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar3 == (longlong *)0x0) {
      if (((local_c0 != 0) && (local_c8 != (longlong *)0x0)) &&
         ((**(code **)(*local_c8 + 0x28))(local_c8,0), local_c8 != (longlong *)0x0)) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
    }
    else {
      *plVar3 = (longlong)&PTR_GetPoolName_14433a830;
      *(undefined4 *)(plVar3 + 1) = local_b8;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_b4;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[3] = lVar2;
      *plVar3 = (longlong)&PTR_GetPoolName_14433a878;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar3,&local_c8);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_b0 = 0;
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar2 = param_1[0x95];
    local_a8 = 0;
    local_a0 = 0;
    if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
      (**(code **)(*local_c8 + 0x30))(local_c8,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,&local_b0,&local_a8,(int)lVar2);
    if (local_48 != 0) {
      plVar3 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar3 = local_58;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = FUN_140aab610(uVar4);
    if (lVar2 != 0) {
      FUN_140ab8b20(lVar2,param_1,0);
    }
LAB_140c2a89c:
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (fVar5 < 1.0) {
        lVar2 = param_1[0x8b];
        local_d8 = ~(*(byte *)(lVar2 + 0x30) >> 5) & 1;
        FUN_140c2b5c0(param_1,(*(float *)(lVar2 + 0xdc) - *(float *)(lVar2 + 0x7c)) * fVar5 +
                              *(float *)(lVar2 + 0x7c),
                      (*(float *)(lVar2 + 0xe0) - *(float *)(lVar2 + 0x80)) * fVar5 +
                      *(float *)(lVar2 + 0x80),1);
        return;
      }
      FUN_140c27550(param_1,3);
      if ((*(byte *)(param_1[0x8b] + 0x30) & 0x20) != 0) {
        if (*(float *)(param_1 + 0x95) <= 0.0) {
          uVar4 = 4;
          goto LAB_140c2a8e6;
        }
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        FWeakObjectPtr::operator=(&local_b8,param_1);
        plVar3 = (longlong *)FMemory::Realloc(0,0x20,0);
        if (plVar3 == (longlong *)0x0) {
          if (((local_c0 != 0) && (local_c8 != (longlong *)0x0)) &&
             ((**(code **)(*local_c8 + 0x28))(local_c8,0), local_c8 != (longlong *)0x0)) {
            local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
          }
        }
        else {
          *plVar3 = (longlong)&PTR_GetPoolName_14433a8c0;
          *(undefined4 *)(plVar3 + 1) = local_b8;
          *(undefined4 *)((longlong)plVar3 + 0xc) = local_b4;
          lVar2 = FDelegateHandle::GenerateNewID();
          plVar3[3] = lVar2;
          *plVar3 = (longlong)&PTR_GetPoolName_14433a908;
          TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
          ::CreateCopy(plVar3,&local_c8);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar2 = FMemory::Realloc(plVar3,0,0);
          if (lVar2 != 0) {
            FMemory::Free(lVar2);
          }
        }
        local_b0 = 0;
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar2 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
        }
        lVar2 = param_1[0x95];
        local_a8 = 0;
        local_a0 = 0;
        if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
          (**(code **)(*local_c8 + 0x30))(local_c8,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_d0 = 0xbf800000;
        local_d8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,&local_b0,&local_a8,(int)lVar2);
        if (local_48 != 0) {
          plVar3 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        FUN_140c24160(param_1,0);
        goto LAB_140c2a89c;
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (fVar5 < 1.0) {
        lVar2 = param_1[0x8b];
        local_d8 = 1;
        FUN_140c2b5c0(param_1,(*(float *)(lVar2 + 0xdc) - *(float *)(lVar2 + 0x7c)) * fVar5 +
                              *(float *)(lVar2 + 0x7c),
                      (*(float *)(lVar2 + 0xe0) - *(float *)(lVar2 + 0x80)) * fVar5 +
                      *(float *)(lVar2 + 0x80),0);
        return;
      }
    }
    FUN_140c24160(param_1,0);
    (**(code **)(*param_1 + 0x6d0))(param_1,0);
  }
  return;
}



// FUNCTION 140c2a930 FUN_140c2a930 body=613 status=ok
// SIG undefined FUN_140c2a930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c2a930(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined1 local_108 [8];
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  code *local_c8;
  longlong **pplStack_c0;
  undefined1 local_b8 [8];
  longlong local_b0 [3];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar8 = (longlong *)0x0;
  local_110 = 0;
  FUN_140c136e0(&local_100,0);
  uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
  if (local_100 != 0) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
    if (lVar3 != 0) {
      lVar3 = FUN_142f6c9f0(lVar3);
      uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      if ((lVar3 != 0) &&
         (uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90),
         param_2 != (longlong *)0x0)) {
        lVar7 = param_2[0x1f];
        if (lVar7 == 0) {
          (**(code **)(*param_2 + 0x368))(param_2);
          lVar7 = param_2[0x1f];
          if (lVar7 == 0) goto LAB_140c2ab3b;
        }
        plVar4 = (longlong *)FUN_142f5ed60(lVar3,local_b8);
        plVar9 = plVar8;
        if (*plVar4 != 0) {
          plVar5 = (longlong *)FUN_142f71d80();
          for (plVar6 = (longlong *)*plVar4;
              (plVar9 = plVar8, plVar6 != (longlong *)0x0 &&
              (plVar9 = (longlong *)*plVar4, plVar6 != plVar5)); plVar6 = (longlong *)plVar6[6]) {
          }
        }
        plVar6 = (longlong *)FUN_142f71d80();
        plVar4 = param_2;
        do {
          plVar5 = param_2;
          if (plVar4 == plVar6) break;
          plVar4 = (longlong *)plVar4[6];
          plVar5 = plVar8;
        } while (plVar4 != (longlong *)0x0);
        local_118[0] = 0x80;
        if (plVar9 != plVar5) {
          local_118[0] = *(undefined4 *)(lVar7 + 0x294);
        }
        local_88[0] = 0;
        local_88[1] = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = 0;
        local_40 = 0;
        local_f0 = FUN_142f59860(lVar7,local_b0);
        local_e8 = local_118;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FString_&&,int_&&>_>(local_88,local_108,&local_f0,0);
        if (local_b0[0] != 0) {
          FMemory::Free();
        }
        local_e0 = &local_100;
        local_d8 = local_88;
        pplStack_c0 = &local_e0;
        local_c8 = FUN_140c080c0;
        local_98 = 0x40c080c0;
        uStack_94 = 1;
        uStack_90 = pplStack_c0;
        FUN_140c10c60(param_1 + -0x28,&local_98);
        local_40 = 0;
        if (local_48 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_88,0);
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_88[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
LAB_140c2ab3b:
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_f8 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  return;
}



// FUNCTION 140c2aba0 FUN_140c2aba0 body=450 status=ok
// SIG undefined FUN_140c2aba0(void)

void FUN_140c2aba0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  int local_10;
  
  FUN_142f45830();
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (param_2 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    uVar7 = UUGButton::GetPrivateStaticClass();
    lVar8 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
  }
  if (((lVar6 != 0) && (lVar8 != 0)) && (*(longlong *)(lVar8 + 0x710) != 0)) {
    UWorld::GetPlayerControllerIterator(lVar6,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      plVar9 = (longlong *)FWeakObjectPtr::Get();
      if (plVar9 != (longlong *)0x0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if ((*(uint *)((longlong)plVar9 + 0x4cc) >> 1 & 1) == 0) {
LAB_140c2acad:
            bVar3 = false;
          }
          else {
            cVar4 = (**(code **)(*plVar9 + 0x768))();
            if (cVar4 == '\0') goto LAB_140c2acad;
            bVar3 = true;
          }
          if (bVar3) {
            plVar12 = plVar9 + 0x353;
            plVar10 = (longlong *)*plVar12;
            plVar11 = plVar10 + (longlong)(int)plVar9[0x354] * 2;
            if (plVar10 != plVar11) {
              do {
                if (*plVar10 == *(longlong *)(lVar8 + 0x710)) goto LAB_140c2ad3d;
                plVar10 = plVar10 + 2;
              } while (plVar10 != plVar11);
            }
            uVar5 = FUN_142f42f30(param_1,*(undefined8 *)(lVar8 + 0x710));
            iVar2 = (int)plVar9[0x354];
            uVar7 = *(undefined8 *)(lVar8 + 0x710);
            uStack_20 = CONCAT13(uVar5,0x100);
            *(int *)(plVar9 + 0x354) = iVar2 + 1;
            if (*(int *)((longlong)plVar9 + 0x1aa4) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar2);
            }
            local_28 = (undefined4)uVar7;
            uStack_24 = (undefined4)((ulonglong)uVar7 >> 0x20);
            puVar1 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar12);
            *puVar1 = local_28;
            puVar1[1] = uStack_24;
            puVar1[2] = uStack_20;
            puVar1[3] = uStack_1c;
          }
        }
      }
LAB_140c2ad3d:
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140c2ad70 FUN_140c2ad70 body=117 status=ok
// SIG undefined FUN_140c2ad70(void)

void FUN_140c2ad70(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[0x97];
  if (lVar1 != 0) {
    lVar3 = FUN_141424d10();
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
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      FRankInfo::SetDefault(lVar1 + 0x670,uVar4);
    }
  }
  return;
}



// FUNCTION 140c2adf0 FUN_140c2adf0 body=863 status=ok
// SIG undefined FUN_140c2adf0(void)

void FUN_140c2adf0(longlong param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *local_res8;
  longlong local_res10;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  *param_3 = '\0';
  lVar6 = *(longlong *)(param_1 + 0x120);
  local_res10 = param_2;
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  plVar7 = (longlong *)FUN_142f6c9f0(lVar6);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2f8) == '\0') {
    return;
  }
  local_48 = *(undefined8 *)(param_1 + 0x118);
  lVar13 = *(longlong *)(param_1 + 0x300);
  local_58 = 0;
  local_50 = 0;
  lVar6 = lVar13 + (longlong)*(int *)(param_1 + 0x308) * 0x48;
  if (lVar13 != lVar6) {
LAB_140c2ae94:
    cVar4 = FUN_142f638e0(lVar13,param_1);
    if (cVar4 != '\0') {
      FUN_142f5af50(lVar13,&local_res8);
      cVar4 = (**(code **)(*plVar7 + 0x728))(plVar7,local_res8);
      if ((cVar4 != '\0') && (local_res8 != (longlong *)0x0)) {
        plVar8 = (longlong *)FUN_142f71d80();
        for (plVar1 = local_res8; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
          if (plVar1 == plVar8) {
            plVar8 = (longlong *)FUN_142f71d80();
            plVar1 = local_res8;
            goto joined_r0x000140c2af12;
          }
        }
      }
    }
    goto LAB_140c2af83;
  }
LAB_140c2af90:
  if (*param_3 == '\0') {
    lVar13 = *(longlong *)(param_1 + 0x2e8);
    lVar6 = lVar13 + (longlong)*(int *)(param_1 + 0x2f0) * 0x28;
    cVar4 = '\0';
    for (; lVar13 != lVar6; lVar13 = lVar13 + 0x28) {
      lVar9 = FUN_1405ec200(lVar13);
      if (lVar9 != 0) {
        lVar10 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar11 = FUN_142f71d80();
          lVar10 = lVar9;
          do {
            if (lVar10 == lVar11) goto LAB_140c2b020;
            lVar10 = *(longlong *)(lVar10 + 0x30);
          } while (lVar10 != 0);
        }
      }
      lVar9 = 0;
LAB_140c2b020:
      cVar4 = (**(code **)(*plVar7 + 0x728))(plVar7,lVar9);
      uVar3 = local_50;
      if (cVar4 == '\0') {
        cVar4 = *param_3;
      }
      else {
        lVar10 = (longlong)(int)local_50;
        iVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar5);
        if (local_50._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_58,uVar3 & 0xffffffff);
        }
        cVar4 = '\x01';
        *(longlong *)(local_58 + lVar10 * 8) = lVar9;
        *param_3 = '\x01';
      }
    }
    if (cVar4 == '\0') {
      lVar13 = *(longlong *)(param_1 + 0x300);
      lVar6 = lVar13 + (longlong)*(int *)(param_1 + 0x308) * 0x48;
      cVar4 = '\0';
      if (lVar13 != lVar6) {
        do {
          cVar4 = FUN_142f638e0(lVar13,param_1);
          if (cVar4 != '\0') {
            FUN_142f5af50(lVar13,&local_res8);
            cVar4 = (**(code **)(*plVar7 + 0x728))(plVar7,local_res8);
            uVar3 = local_50;
            if (cVar4 != '\0') {
              lVar9 = (longlong)(int)local_50;
              iVar5 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar5);
              if (local_50._4_4_ < iVar5) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_58,uVar3 & 0xffffffff);
              }
              *(longlong **)(local_58 + lVar9 * 8) = local_res8;
              *param_3 = '\x01';
            }
          }
          lVar13 = lVar13 + 0x48;
        } while (lVar13 != lVar6);
        cVar4 = *param_3;
      }
      if (cVar4 == '\0') goto LAB_140c2b127;
    }
  }
  if (*(longlong *)(local_res10 + 0xc60) != 0) {
    FUN_14146ce40(*(longlong *)(local_res10 + 0xc60),&local_58);
  }
LAB_140c2b127:
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
joined_r0x000140c2af12:
  if (plVar1 == (longlong *)0x0) goto LAB_140c2af22;
  plVar12 = local_res8;
  if (plVar1 == plVar8) goto LAB_140c2af24;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000140c2af12;
LAB_140c2af22:
  plVar12 = (longlong *)0x0;
LAB_140c2af24:
  lVar9 = plVar12[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar9 = plVar12[0x1f];
    if (lVar9 == 0) goto LAB_140c2af83;
  }
  lVar9 = FUN_142f5c080(lVar9,lVar13 + 0x30);
  uVar3 = local_50;
  if (lVar9 != 0) {
    lVar9 = (longlong)(int)local_50;
    iVar5 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    if (local_50._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_58,uVar3 & 0xffffffff);
    }
    *(longlong **)(local_58 + lVar9 * 8) = local_res8;
    *param_3 = '\x01';
  }
LAB_140c2af83:
  lVar13 = lVar13 + 0x48;
  if (lVar13 == lVar6) goto LAB_140c2af90;
  goto LAB_140c2ae94;
}



// FUNCTION 140c2b150 FUN_140c2b150 body=687 status=ok
// SIG undefined FUN_140c2b150(void)

void FUN_140c2b150(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  int local_10;
  
  if (((((param_1 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) &&
       (lVar7 = FUN_142f429c0(lVar6), lVar7 != 0)) &&
      ((param_3 != 0 && (*(char *)(param_3 + 0xd8) != '\x01')))) &&
     (cVar3 = FUN_142f3e730(param_3,param_2), cVar3 != '\0')) {
    if ((param_4 == '\0') && (cVar3 = FUN_142f43380(param_3,lVar6,0), cVar3 == '\0')) {
      return;
    }
    FUN_142f3e130(lVar7,param_3,1);
    local_28 = (undefined4)param_3;
    uStack_24 = (undefined4)((ulonglong)param_3 >> 0x20);
    if (param_2 == (longlong *)0x0) {
      iVar5 = FUN_1428cf800(lVar6);
      if (iVar5 != 3) {
        UWorld::GetPlayerControllerIterator(lVar6,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) break;
          plVar8 = (longlong *)FWeakObjectPtr::Get();
          if (plVar8 != (longlong *)0x0) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (cVar3 = APlayerController::IsPrimaryPlayer(), cVar3 != '\0')) {
              plVar11 = plVar8 + 0x353;
              plVar9 = (longlong *)*plVar11;
              plVar12 = plVar9 + (longlong)(int)plVar8[0x354] * 2;
              for (; plVar9 != plVar12; plVar9 = plVar9 + 2) {
                if (*plVar9 == param_3) goto LAB_140c2b311;
              }
              uVar4 = FUN_142f42f30(lVar7,param_3);
              iVar5 = (int)plVar8[0x354];
              uStack_20 = CONCAT13(uVar4,0x100);
              *(int *)(plVar8 + 0x354) = iVar5 + 1;
              if (*(int *)((longlong)plVar8 + 0x1aa4) < iVar5 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar5);
              }
              puVar1 = (undefined4 *)(*plVar11 + (longlong)iVar5 * 0x10);
              *puVar1 = local_28;
              puVar1[1] = uStack_24;
              puVar1[2] = uStack_20;
              puVar1[3] = uStack_1c;
LAB_140c2b311:
              uVar10 = UEnvQueryTest_Random::StaticClass();
              lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar10);
              if (lVar6 != 0) {
                FUN_140e1c770(lVar6,*(undefined8 *)(param_3 + 0x30),0);
              }
            }
          }
          local_10 = local_10 + 1;
        }
      }
    }
    else {
      plVar8 = param_2 + 0x353;
      plVar11 = (longlong *)*plVar8;
      plVar9 = plVar11 + (longlong)(int)param_2[0x354] * 2;
      for (; plVar11 != plVar9; plVar11 = plVar11 + 2) {
        if (*plVar11 == param_3) goto LAB_140c2b3bc;
      }
      uVar4 = FUN_142f42f30(lVar7,param_3);
      iVar5 = (int)param_2[0x354];
      uStack_20 = CONCAT13(uVar4,0x100);
      *(int *)(param_2 + 0x354) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0x1aa4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar5);
      }
      puVar1 = (undefined4 *)(*plVar8 + (longlong)iVar5 * 0x10);
      *puVar1 = local_28;
      puVar1[1] = uStack_24;
      puVar1[2] = uStack_20;
      puVar1[3] = uStack_1c;
LAB_140c2b3bc:
      uVar10 = UEnvQueryTest_Random::StaticClass();
      lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar10);
      if (lVar6 != 0) {
        FUN_140e1c770(lVar6,*(undefined8 *)(param_3 + 0x30),0);
      }
    }
  }
  return;
}



// FUNCTION 140c2b400 FUN_140c2b400 body=395 status=ok
// SIG undefined FUN_140c2b400(void)

void FUN_140c2b400(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x458);
  plVar1 = plVar5 + *(int *)(param_1 + 0x460);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (lVar2 = *(longlong *)(*plVar5 + 0x118), lVar2 != 0)) {
      lVar4 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140af4350(lVar2);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x468);
  plVar1 = plVar5 + *(int *)(param_1 + 0x470);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (lVar2 = *(longlong *)(*plVar5 + 0x118), lVar2 != 0)) {
      lVar4 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140af4350(lVar2);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x478);
  plVar1 = plVar5 + *(int *)(param_1 + 0x480);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (lVar2 = *(longlong *)(*plVar5 + 0x118), lVar2 != 0)) {
      lVar4 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140af4350(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140c2b590 FUN_140c2b590 body=45 status=ok
// SIG undefined FUN_140c2b590(void)

void FUN_140c2b590(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = UCableComponent::GetAttachedActor();
  if (lVar1 != 0) {
    FUN_1407c6a60(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c2b5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x718))(param_1);
  return;
}



// FUNCTION 140c2b5c0 FUN_140c2b5c0 body=526 status=ok
// SIG undefined FUN_140c2b5c0(void)

void FUN_140c2b5c0(longlong param_1,undefined4 param_2,float param_3,char param_4,char param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_14686bc28) {
    _Init_thread_header(&DAT_14686bc28);
    if (DAT_14686bc28 == -1) {
      FName::FName(&DAT_14686bc20,L"Opacity",1);
      _Init_thread_footer(&DAT_14686bc28);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_14686bc38) {
    _Init_thread_header(&DAT_14686bc38);
    if (DAT_14686bc38 == -1) {
      FName::FName(&DAT_14686bc30,L"PuddleSize",1);
      _Init_thread_footer(&DAT_14686bc38);
    }
  }
  fVar2 = param_3 * 0.5;
  if (100.0 <= fVar2) {
    fVar2 = 100.0;
  }
  fVar3 = (*(float *)(*(longlong *)(param_1 + 0x458) + 0x84) + 1.0) * param_3;
  if (param_4 != '\0') {
    local_48 = CONCAT44(fVar3,fVar2);
    local_40 = fVar3;
    FUN_142399c30(*(undefined8 *)(param_1 + 0x460),&local_48);
    if (*(longlong *)(param_1 + 0x468) != 0) {
      FUN_1425a2750(*(longlong *)(param_1 + 0x468),DAT_14686bc20,param_2);
    }
    if (*(longlong *)(param_1 + 0x480) != 0) {
      FUN_14260f0c0(*(longlong *)(param_1 + 0x480),DAT_14686bc30,param_3);
    }
  }
  if ((param_5 != '\0') && (*(longlong *)(param_1 + 0x470) != 0)) {
    local_48 = CONCAT44(fVar3,fVar2);
    local_40 = fVar3;
    FUN_142399c30(*(longlong *)(param_1 + 0x470),&local_48);
    if (*(longlong *)(param_1 + 0x478) != 0) {
      FUN_1425a2750(*(longlong *)(param_1 + 0x478),DAT_14686bc20,param_2);
    }
  }
  return;
}



// FUNCTION 140c2b7d0 FUN_140c2b7d0 body=2569 status=ok
// SIG undefined FUN_140c2b7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c2b7d0(longlong *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  code *pcVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined4 local_190;
  char local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  int local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  int local_128;
  undefined8 local_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  puVar1 = (ulonglong *)(param_1 + 0xe1);
  uVar15 = 0;
  plVar12 = (longlong *)*puVar1;
  uVar18 = (longlong)(int)param_1[0xe2] & 0x1fffffffffffffff;
  if (plVar12 + (int)param_1[0xe2] < plVar12) {
    uVar18 = uVar15;
  }
  if (uVar18 != 0) {
    do {
      if (*plVar12 != 0) {
        FUN_140c3c4d0();
      }
      plVar12 = plVar12 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar18);
  }
  plVar12 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  if (*(int *)((longlong)param_1 + 0x714) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  FUN_142f5ed60(param_1,&local_148);
  if (local_148 == 0) {
    return;
  }
  lVar6 = FUN_142f71d80();
  lVar7 = local_148;
  if (local_148 == 0) {
    return;
  }
  while (lVar7 != lVar6) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    if (lVar7 == 0) {
      return;
    }
  }
  lVar7 = FUN_142f594f0(param_1);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x7a) == '\0')) {
    return;
  }
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FMistWorldUtils::GetDebugEntityDrawSystem(uVar8);
  if (lVar7 == 0) {
    return;
  }
  local_d8 = lVar7;
  lVar6 = FUN_142f429c0();
  local_150 = lVar6;
  if (lVar6 != 0) {
    if ((*(char *)(lVar6 + 0x540) == '\0') || (*(char *)(lVar6 + 0x541) == '\0')) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if (bVar19) {
      local_188 = '\0';
      local_158 = FUN_142f416d0(lVar7,uVar8);
      if (local_188 != '\0') {
        return;
      }
      if (local_158 == 0) {
        return;
      }
      plVar9 = (longlong *)FUN_142f5ef60(param_1,local_148);
      if (plVar9 == (longlong *)0x0) {
        local_110 = 0;
        local_e0 = plVar12;
      }
      else {
        local_e0 = (longlong *)plVar9[6];
      }
      local_160 = FUN_142f406a0(lVar7,&local_e0);
      if (local_160 == 0) {
        return;
      }
      local_180 = (longlong *)0x0;
      local_178 = 0;
      plVar14 = plVar12;
      if (plVar9 != (longlong *)0x0) {
        lVar7 = FUN_142f478b0();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (bVar19) {
          plVar14 = plVar9;
        }
      }
      lVar7 = FUN_142f41de0(lVar6);
      if (lVar7 == 0) {
LAB_140c2ba8d:
        if ((plVar14 == (longlong *)0x0) || (*(char *)((longlong)plVar14 + 0x119) == '\0')) {
LAB_140c2baf2:
          if (local_158 == local_160) {
            return;
          }
LAB_140c2bafb:
          FUN_142f3fd10(lVar6,&local_120);
          uVar15 = 0;
          uVar18 = (ulonglong)(local_120 + (longlong)iStack_118 * 8 + (7 - (longlong)local_120)) >>
                   3;
          if (local_120 + (longlong)iStack_118 * 8 < local_120) {
            uVar18 = uVar15;
          }
          pcVar17 = local_120;
          if (uVar18 != 0) {
            do {
              plVar9 = *(longlong **)pcVar17;
              if ((plVar9 != (longlong *)0x0) &&
                 (cVar4 = (**(code **)(*plVar9 + 0x908))(plVar9), uVar3 = local_178, cVar4 != '\0'))
              {
                lVar7 = (longlong)(int)local_178;
                iVar5 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,iVar5);
                if (local_178._4_4_ < iVar5) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_180,uVar3 & 0xffffffff);
                  plVar12 = local_180;
                }
                plVar12[lVar7] = (longlong)plVar9;
              }
              pcVar17 = pcVar17 + 8;
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar18);
          }
          lVar7 = local_150;
          FUN_142f40110(local_150,&local_170);
          uVar18 = 0;
          if (0 < local_168) {
            uVar15 = uVar18;
            iVar5 = local_168;
            do {
              if ((*(longlong **)(uVar15 + (longlong)local_170) == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(**(longlong **)(uVar15 + (longlong)local_170) + 0x908))(),
                 iVar5 = local_168, cVar4 == '\0')) {
                bVar19 = true;
              }
              else {
                bVar19 = false;
              }
              iVar13 = (int)uVar18;
              if (bVar19) {
                iVar16 = (iVar5 - iVar13) + -1;
                if (0 < iVar16) {
                  iVar16 = 1;
                }
                if (iVar16 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (local_170 + iVar13,local_170 + (iVar5 - iVar16),(longlong)iVar16 << 3);
                  iVar5 = local_168;
                }
                local_168 = iVar5 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_170);
                iVar5 = local_168;
              }
              else {
                uVar18 = (ulonglong)(iVar13 + 1);
                uVar15 = uVar15 + 8;
              }
              lVar7 = local_150;
            } while ((int)uVar18 < iVar5);
          }
          lVar11 = local_160;
          local_140 = (longlong *)0x0;
          local_138 = 0;
          lVar10 = *(longlong *)(local_158 + 0x80);
          lVar6 = lVar10 + (longlong)*(int *)(local_158 + 0x88) * 0x28;
          if (lVar10 != lVar6) {
            local_130 = (longlong *)0x0;
            do {
              local_f0 = 0;
              local_e8 = 0;
              local_108 = 0xffffffff;
              local_104 = 0;
              local_f8 = 0;
              uVar8 = FSoftObjectPath::FSoftObjectPath(local_c8,lVar11);
              FSoftObjectPath::operator=(&local_f8,uVar8);
              FWeakObjectPtr::operator=(&local_108,lVar11);
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_104 = CONCAT44(DAT_1464b56f4,(undefined4)local_104);
              cVar4 = FSoftObjectPath::operator==(lVar10 + 0x10,&local_f8);
              if (local_f0 != 0) {
                FMemory::Free();
              }
              plVar12 = local_180;
              if (cVar4 != '\0') {
                bVar19 = true;
                goto LAB_140c2bd44;
              }
              lVar10 = lVar10 + 0x28;
            } while (lVar10 != lVar6);
          }
          bVar19 = false;
          local_198 = 0;
          FUN_142f40aa0(local_d8,local_158 + 0x78,lVar11 + 0x78,&local_140);
LAB_140c2bd44:
          uVar18 = 0;
          if ((((int)local_178 < 1) && (local_168 < 1)) || (bVar19)) {
LAB_140c2bd98:
LAB_140c2bd9b:
            if (0 < (int)local_138) {
              lVar11 = *local_140;
            }
            FUN_142f40210(lVar7,&local_130,lVar11);
            uVar15 = (ulonglong)((longlong)(local_130 + local_128) + (7 - (longlong)local_130)) >> 3
            ;
            if (local_130 + local_128 < local_130) {
              uVar15 = uVar18;
            }
            plVar9 = local_130;
            if (uVar15 != 0) {
              do {
                plVar14 = (longlong *)*plVar9;
                if (((plVar14 != (longlong *)0x0) && (plVar14[0xe2] != 0)) &&
                   ((*(char *)(plVar14[0xe2] + 0x11a) == '\0' &&
                    (cVar4 = (**(code **)(*plVar14 + 0x908))(plVar14), uVar3 = local_178,
                    cVar4 != '\0')))) {
                  lVar7 = (longlong)(int)local_178;
                  iVar5 = (int)local_178 + 1;
                  local_178 = CONCAT44(local_178._4_4_,iVar5);
                  if (local_178._4_4_ < iVar5) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_180,uVar3 & 0xffffffff);
                    plVar12 = local_180;
                  }
                  plVar12[lVar7] = (longlong)plVar14;
                }
                plVar9 = plVar9 + 1;
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar15);
            }
            bVar19 = (int)local_178 == 0;
            if (local_130 != (longlong *)0x0) {
              FMemory::Free(local_130);
            }
            if (bVar19) goto LAB_140c2be6a;
          }
          else {
            if ((int)local_138 != 0) {
              lVar6 = (longlong)((int)local_138 + -1);
              if (-1 < (int)local_138 + -1) {
                do {
                  if ((local_140[lVar6] != 0) &&
                     (cVar4 = FUN_142f43100(lVar7,*(undefined8 *)(local_140[lVar6] + 0x78)),
                     cVar4 != '\0')) goto LAB_140c2be6a;
                  lVar6 = lVar6 + -1;
                } while (-1 < lVar6);
                goto LAB_140c2bd98;
              }
              goto LAB_140c2bd9b;
            }
LAB_140c2be6a:
            uVar18 = 0;
            uVar15 = (ulonglong)((longlong)(local_170 + local_168) + (7 - (longlong)local_170)) >> 3
            ;
            if (local_170 + local_168 < local_170) {
              uVar15 = 0;
            }
            plVar9 = local_170;
            if (uVar15 != 0) {
              do {
                uVar3 = local_178;
                lVar6 = (longlong)(int)local_178;
                lVar7 = *plVar9;
                iVar5 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,iVar5);
                if (local_178._4_4_ < iVar5) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_180,uVar3 & 0xffffffff);
                  plVar12 = local_180;
                }
                plVar12[lVar6] = lVar7;
                uVar18 = uVar18 + 1;
                plVar9 = plVar9 + 1;
              } while (uVar18 != uVar15);
            }
          }
          if (local_140 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (local_170 != (longlong *)0x0) {
            FMemory::Free(local_170);
          }
          lVar6 = local_150;
          if (local_120 != (code *)0x0) {
            FMemory::Free();
            lVar6 = local_150;
          }
          goto LAB_140c2bf0f;
        }
        if (local_158 != local_160) goto LAB_140c2bafb;
        if (*(char *)((longlong)plVar14 + 0x11a) != '\0') goto LAB_140c2baf2;
        lVar7 = FUN_142f40750(lVar6,uVar8,plVar14 + 0x1c);
        if (lVar7 != 0) {
          local_178 = CONCAT44(local_178._4_4_,1);
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_180,0);
          *local_180 = lVar7;
          plVar12 = local_180;
          goto LAB_140c2bf0f;
        }
LAB_140c2bf1a:
        lVar7 = FUN_142f41df0(lVar6);
        plVar9 = plVar12;
        if (lVar7 != 0) {
          uVar8 = FUN_142f46fc0();
          lVar7 = AGameStateBase::OnRep_GameModeClass(lVar7,uVar8);
          if (lVar7 != 0) {
            lVar6 = FUN_142f46fc0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if (bVar19) {
              local_178 = CONCAT44(local_178._4_4_,1);
              if (local_178._4_4_ < 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_180,0);
                plVar12 = local_180;
              }
              *plVar12 = lVar7;
              goto LAB_140c2bfb2;
            }
          }
        }
      }
      else {
        local_d0 = UUGHitTextureButton::GetPrivateStaticClass();
        lVar7 = AGameStateBase::OnRep_GameModeClass(lVar7,local_d0);
        if (lVar7 == 0) goto LAB_140c2ba8d;
        lVar10 = UUGHitTextureButton::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if ((((!bVar19) || (plVar2 = *(longlong **)(lVar7 + 0x710), plVar2 == (longlong *)0x0)) ||
            (*(char *)((longlong)plVar2 + 0x119) == '\0')) ||
           (*(char *)((longlong)plVar2 + 0x11a) != '\0')) goto LAB_140c2ba8d;
        if (plVar2 == plVar9) {
          return;
        }
        local_178 = CONCAT44(local_178._4_4_,1);
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_180,0);
        *local_180 = lVar7;
        plVar12 = local_180;
LAB_140c2bf0f:
        if ((int)local_178 == 0) goto LAB_140c2bf1a;
LAB_140c2bfb2:
        plVar14 = plVar12 + (int)local_178;
        plVar9 = plVar12;
        if (plVar12 != plVar14) {
          lVar7 = 0;
          do {
            lVar6 = lVar7;
            if ((*plVar12 != 0) && (lVar10 = *(longlong *)(*plVar12 + 0x118), lVar10 != 0)) {
              lVar11 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (bVar19) {
                lVar6 = *(longlong *)(lVar10 + 0x5a8);
              }
            }
            if (lVar6 != 0) {
              iVar5 = (int)param_1[0xe2];
              *(int *)(param_1 + 0xe2) = iVar5 + 1;
              if (*(int *)((longlong)param_1 + 0x714) < iVar5 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar5);
              }
              *(longlong *)(*puVar1 + (longlong)iVar5 * 8) = lVar6;
              FUN_140c328f0(lVar6,local_148);
            }
            plVar12 = plVar12 + 1;
            plVar9 = local_180;
          } while (plVar12 != plVar14);
        }
      }
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      goto LAB_140c2c1a8;
    }
  }
  iStack_118 = 0;
  local_120 = FUN_140c2b7d0;
  uVar8 = AActor::GetWorldTimerManager(param_1);
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    *(undefined4 *)(plVar12 + 2) = (undefined4)local_120;
    *(undefined4 *)((longlong)plVar12 + 0x14) = local_120._4_4_;
    *(int *)(plVar12 + 3) = iStack_118;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_114;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar12[5] = lVar7;
    *plVar12 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x30))(plVar12,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_190 = 0xbf800000;
  local_198 = local_198 & 0xffffffffffffff00;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar8,param_1 + 0xe3,&local_a8,0x3dcccccd);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,0);
    plVar9 = (longlong *)FMemory::Realloc(plVar12,0,0);
    if (plVar9 != (longlong *)0x0) {
LAB_140c2c1a8:
      FMemory::Free(plVar9);
      return;
    }
  }
  return;
}



// FUNCTION 140c2c200 FUN_140c2c200 body=66 status=ok
// SIG undefined FUN_140c2c200(void)

void FUN_140c2c200(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443533b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144353400;
  }
  return;
}



// FUNCTION 140c2c250 FUN_140c2c250 body=78 status=ok
// SIG undefined FUN_140c2c250(void)

void FUN_140c2c250(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 7) == '\0') {
    puVar3 = (undefined8 *)FUN_140c41340();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 7) != '\0') {
        *(undefined1 *)(puVar1 + 7) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      puVar1[6] = puVar3[6];
      *(undefined1 *)(puVar1 + 7) = 1;
    }
  }
  return;
}



// FUNCTION 140c2c2a0 FUN_140c2c2a0 body=80 status=ok
// SIG undefined FUN_140c2c2a0(void)

undefined1 FUN_140c2c2a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 7) == '\0') {
    puVar3 = (undefined8 *)FUN_140c41340();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 7) != '\0') {
        *(undefined1 *)(puVar1 + 7) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      puVar1[6] = puVar3[6];
      *(undefined1 *)(puVar1 + 7) = 1;
    }
  }
  return 1;
}



// FUNCTION 140c2c2f0 FUN_140c2c2f0 body=447 status=ok
// SIG undefined FUN_140c2c2f0(void)

void FUN_140c2c2f0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int local_res10;
  undefined8 local_60;
  undefined1 local_58 [24];
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar2) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo();
      iVar3 = (int)param_1[1];
    }
    puVar4 = (undefined1 *)*param_2;
    piVar5 = (int *)(puVar4 + 0x10);
    puVar7 = (undefined1 *)((longlong)iVar3 * 0x78 + *param_1);
    puVar6 = (undefined8 *)(puVar7 + 0x68);
    local_res10 = iVar2;
    do {
      *puVar7 = *puVar4;
      *(undefined1 *)((longlong)puVar6 + -0x67) = *(undefined1 *)((longlong)piVar5 + -0xf);
      *(undefined1 *)((longlong)puVar6 + -0x66) = *(undefined1 *)((longlong)piVar5 + -0xe);
      puVar6[-0xc] = 0;
      iVar3 = *piVar5;
      _Src = *(void **)(piVar5 + -2);
      *(int *)(puVar6 + -0xb) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)puVar6 + -0x54) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6 + -0xc,iVar3,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar6[-0xc],_Src,(longlong)iVar3 << 2);
      }
      *(char *)(puVar6 + -10) = (char)piVar5[2];
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar6 + -9,piVar5 + 4);
      puVar6[-1] = 0;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + -4) = 0xffffffff;
      *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
      puVar6[-2] = 0;
      *(undefined4 *)puVar6 = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar6 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6 + -1,0);
      }
      if ((undefined2 *)puVar6[-1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar6[-1] = 0;
      }
      *(undefined4 *)(puVar6 + -3) = 0;
      *(int *)(puVar6 + -4) = piVar5[0xe];
      *(int *)((longlong)puVar6 + -0x1c) = piVar5[0xf];
      *(int *)(puVar6 + -3) = piVar5[0x10];
      local_60 = *(undefined8 *)(piVar5 + 0x12);
      FString::FString(local_58,piVar5 + 0x14);
      FSoftObjectPath::operator=(puVar6 + -2,&local_60);
      puVar7 = puVar7 + 0x78;
      *(int *)(puVar6 + 1) = piVar5[0x18];
      puVar4 = puVar4 + 0x78;
      piVar1 = piVar5 + 0x19;
      piVar5 = piVar5 + 0x1e;
      *(char *)((longlong)puVar6 + 0xc) = (char)*piVar1;
      puVar6 = puVar6 + 0xf;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar2;
  }
  return;
}



// FUNCTION 140c2c4b0 FUN_140c2c4b0 body=490 status=ok
// SIG undefined FUN_140c2c4b0(void)

void FUN_140c2c4b0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4)
  ;
  puVar8 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar7 = (int *)(param_2 + 200);
    puVar6 = (undefined4 *)((longlong)puVar8 + 0xbc);
    do {
      uVar5 = *(undefined8 *)(piVar7 + -0x30);
      *puVar8 = *(undefined8 *)(piVar7 + -0x32);
      puVar8[1] = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x2c);
      puVar8[2] = *(undefined8 *)(piVar7 + -0x2e);
      puVar8[3] = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x28);
      puVar8[4] = *(undefined8 *)(piVar7 + -0x2a);
      puVar8[5] = uVar5;
      puVar8[6] = *(undefined8 *)(piVar7 + -0x26);
      uVar5 = *(undefined8 *)(piVar7 + -0x22);
      *(undefined8 *)(puVar6 + -0x21) = *(undefined8 *)(piVar7 + -0x24);
      *(undefined8 *)(puVar6 + -0x1f) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x1e);
      *(undefined8 *)(puVar6 + -0x1d) = *(undefined8 *)(piVar7 + -0x20);
      *(undefined8 *)(puVar6 + -0x1b) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x1a);
      *(undefined8 *)(puVar6 + -0x19) = *(undefined8 *)(piVar7 + -0x1c);
      *(undefined8 *)(puVar6 + -0x17) = uVar5;
      *(undefined8 *)(puVar6 + -0x15) = *(undefined8 *)(piVar7 + -0x18);
      uVar5 = *(undefined8 *)(piVar7 + -0x14);
      *(undefined8 *)(puVar6 + -0x13) = *(undefined8 *)(piVar7 + -0x16);
      *(undefined8 *)(puVar6 + -0x11) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + -0x10);
      *(undefined8 *)(puVar6 + -0xf) = *(undefined8 *)(piVar7 + -0x12);
      *(undefined8 *)(puVar6 + -0xd) = uVar5;
      iVar1 = piVar7[-0xd];
      iVar3 = piVar7[-0xc];
      iVar4 = piVar7[-0xb];
      puVar6[-0xb] = piVar7[-0xe];
      puVar6[-10] = iVar1;
      puVar6[-9] = iVar3;
      puVar6[-8] = iVar4;
      *(undefined8 *)(puVar6 + -7) = *(undefined8 *)(piVar7 + -10);
      *(undefined8 *)(puVar6 + -5) = *(undefined8 *)(piVar7 + -8);
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar1 = piVar7[-4];
      pvVar2 = *(void **)(piVar7 + -6);
      puVar6[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + -3,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -3),pvVar2,(longlong)iVar1 << 3);
      }
      *(undefined8 *)(puVar6 + 1) = 0;
      iVar1 = *piVar7;
      pvVar2 = *(void **)(piVar7 + -2);
      puVar6[3] = iVar1;
      if (iVar1 == 0) {
        puVar6[4] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + 1,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 1),pvVar2,(longlong)iVar1 << 3);
      }
      *(undefined8 *)(puVar6 + 5) = 0;
      iVar1 = piVar7[4];
      pvVar2 = *(void **)(piVar7 + 2);
      puVar6[7] = iVar1;
      if (iVar1 == 0) {
        puVar6[8] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + 5,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 5),pvVar2,(longlong)iVar1 << 3);
      }
      puVar8 = puVar8 + 0x1c;
      puVar6 = puVar6 + 0x38;
      piVar7 = piVar7 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c2c6a0 FUN_140c2c6a0 body=405 status=ok
// SIG undefined FUN_140c2c6a0(void)

int * FUN_140c2c6a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  byte *local_30;
  
  TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  uVar1 = *param_3;
  *param_2 = local_38[0];
  *(undefined8 *)local_30 = uVar1;
  *(undefined4 *)(local_30 + 8) = *(undefined4 *)(param_3 + 1);
  local_30[0xc] = 0xff;
  local_30[0xd] = 0xff;
  local_30[0xe] = 0xff;
  local_30[0xf] = 0xff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (ulonglong)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(byte *)(*param_1 + (longlong)iVar4 * 0x14) == *local_30) goto LAB_140c2c76b;
          iVar4 = *(int *)(*param_1 + 0xc + (longlong)iVar4 * 0x14);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140c2c76b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x14),local_30,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140c2c80d;
    }
  }
  cVar2 = TSet<TTuple<enum_EGPlatformType,UMediaSource_*>,TDefaultMapHashableKeyFuncs<enum_EGPlatformType,UMediaSource_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & (uint)*local_30;
    *(uint *)(local_30 + 0x10) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xc) =
         *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar5) * 4)
    ;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar5) * 4) = *param_2;
  }
LAB_140c2c80d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140c2c840 FUN_140c2c840 body=707 status=ok
// SIG undefined FUN_140c2c840(void)

int * FUN_140c2c840(longlong *param_1,int *param_2,byte *param_3,longlong param_4)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  byte *_Src;
  void *_Dst;
  bool local_res8;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)iVar12 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (byte *)((longlong)iVar12 * 0x70 + *param_1);
  *_Src = *param_3;
  pbVar2 = _Src + 0x18;
  *(undefined4 *)(_Src + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(_Src + 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(_Src + 0x10) = *(undefined4 *)(param_3 + 0x10);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  _Src[0x20] = 0;
  _Src[0x21] = 0;
  _Src[0x22] = 0;
  _Src[0x23] = 0;
  _Src[0x24] = 0;
  _Src[0x25] = 0;
  _Src[0x26] = 0;
  _Src[0x27] = 0;
  _Src[0x38] = 0;
  _Src[0x39] = 0;
  _Src[0x3a] = 0;
  _Src[0x3b] = 0;
  _Src[0x3c] = 0;
  _Src[0x3d] = 0;
  _Src[0x3e] = 0;
  _Src[0x3f] = 0;
  _Src[0x40] = 0;
  _Src[0x41] = 0;
  _Src[0x42] = 0;
  _Src[0x43] = 0;
  _Src[0x44] = 0;
  _Src[0x45] = 0;
  _Src[0x46] = 0;
  _Src[0x47] = 0;
  _Src[0x48] = 0xff;
  _Src[0x49] = 0xff;
  _Src[0x4a] = 0xff;
  _Src[0x4b] = 0xff;
  _Src[0x4c] = 0;
  _Src[0x4d] = 0;
  _Src[0x4e] = 0;
  _Src[0x4f] = 0;
  _Src[0x58] = 0;
  _Src[0x59] = 0;
  _Src[0x5a] = 0;
  _Src[0x5b] = 0;
  _Src[0x5c] = 0;
  _Src[0x5d] = 0;
  _Src[0x5e] = 0;
  _Src[0x5f] = 0;
  _Src[0x60] = 0;
  _Src[0x61] = 0;
  _Src[0x62] = 0;
  _Src[99] = 0;
  FUN_140c310a0(pbVar2,param_3 + 0x18);
  _Src[0x68] = 0xff;
  _Src[0x69] = 0xff;
  _Src[0x6a] = 0xff;
  _Src[0x6b] = 0xff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar12 != 1) {
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar5 != -1) {
        do {
          iVar8 = iVar5;
          if (*(byte *)((longlong)iVar5 * 0x70 + *param_1) == *_Src) break;
          iVar5 = *(int *)((longlong)iVar5 * 0x70 + 0x68 + *param_1);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x70 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x60) = 0;
      if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x18);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x68);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x70 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140c2cae1;
    }
  }
  cVar4 = TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x6c) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x68) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar11) * 4) = *param_2
    ;
  }
LAB_140c2cae1:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140c2cb10 FUN_140c2cb10 body=766 status=ok
// SIG undefined FUN_140c2cb10(void)

int * FUN_140c2cb10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  byte *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar6 + lVar4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  lVar5 = (longlong)iVar10 * 0x30;
  _Src = (byte *)(*param_1 + lVar5);
  bVar1 = *(byte *)*param_3;
  _Src[8] = 0;
  _Src[9] = 0;
  _Src[10] = 0;
  _Src[0xb] = 0;
  _Src[0xc] = 0;
  _Src[0xd] = 0;
  _Src[0xe] = 0;
  _Src[0xf] = 0;
  _Src[0x10] = 0;
  _Src[0x11] = 0;
  _Src[0x12] = 0;
  _Src[0x13] = 0;
  _Src[0x14] = 0;
  _Src[0x15] = 0;
  _Src[0x16] = 0;
  _Src[0x17] = 0;
  *_Src = bVar1;
  _Src[0x18] = 0;
  _Src[0x19] = 0;
  _Src[0x1a] = 0;
  _Src[0x1b] = 0;
  _Src[0x1c] = 0;
  _Src[0x1d] = 0;
  _Src[0x1e] = 0;
  _Src[0x1f] = 0;
  _Src[0x20] = 0;
  _Src[0x21] = 0;
  _Src[0x22] = 0;
  _Src[0x23] = 0;
  _Src[0x24] = 0;
  _Src[0x25] = 0;
  _Src[0x26] = 0;
  _Src[0x27] = 0;
  _Src[0x28] = 0xff;
  _Src[0x29] = 0xff;
  _Src[0x2a] = 0xff;
  _Src[0x2b] = 0xff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar1) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(byte *)(*param_1 + (longlong)iVar8 * 0x30) == bVar1) break;
          iVar8 = *(int *)(*param_1 + 0x28 + (longlong)iVar8 * 0x30);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x30 + *param_1),_Src,0x28);
      bVar1 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar5 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar5 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar4);
      *puVar13 = *puVar13 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_140c2cde3;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar3 != 0) {
      iVar7 = 0x1f - iVar14;
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
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x2c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x28) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4) = iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<enum_EGRumbleActionBarContextAction,FGRumbleActionBarContextActionData>,TDefaultMapHashableKeyFuncs<enum_EGRumbleActionBarContextAction,FGRumbleActionBarContextActionData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140c2cde3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 140c2ce10 FUN_140c2ce10 body=696 status=ok
// SIG undefined FUN_140c2ce10(void)

int * FUN_140c2ce10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  byte *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (byte *)(*param_1 + lVar1);
  bVar2 = *(byte *)*param_3;
  *_Src = bVar2;
  _Src[8] = 0;
  _Src[9] = 0;
  _Src[10] = 0;
  _Src[0xb] = 0;
  _Src[0xc] = 0;
  _Src[0xd] = 0;
  _Src[0xe] = 0;
  _Src[0xf] = 0;
  _Src[0x10] = 0xff;
  _Src[0x11] = 0xff;
  _Src[0x12] = 0xff;
  _Src[0x13] = 0xff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar2) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(byte *)(*param_1 + (longlong)iVar8 * 0x18) == bVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),_Src,0x10);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140c2d0a3;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x10) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4) = iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140c2d0a3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 140c2d0d0 FUN_140c2d0d0 body=716 status=ok
// SIG undefined FUN_140c2d0d0(void)

int * FUN_140c2d0d0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool local_res8;
  
  uVar12 = 0xffffffff;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x48);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x48) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x48);
  FUN_140b4bd40(_Src,*param_3);
  *(undefined4 *)(_Src + 7) = *puVar2;
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = iVar11;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = FCrc::MemCrc32(*_Src,*(int *)(_Src + 1) * 0x30,0);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar9 = *param_1;
        do {
          cVar4 = FUN_140c315a0(lVar9 + (longlong)iVar6 * 0x48,_Src);
          iVar10 = iVar6;
          if (cVar4 != '\0') break;
          lVar9 = *param_1;
          iVar6 = *(int *)(lVar9 + 0x40 + (longlong)iVar6 * 0x48);
          iVar10 = iVar11;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar10 * 0x48);
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar10 * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      FUN_140b4e2b0(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      iVar11 = *param_2;
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar11;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)iVar11 * 0x48) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)iVar11 * 0x48) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140c2d373;
    }
  }
  cVar4 = FUN_140c3ba80(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar11 = *param_2;
    uVar7 = FCrc::MemCrc32(*_Src,*(int *)(_Src + 1) * 0x30,0);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x44) = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar11;
  }
LAB_140c2d373:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140c2d3a0 FUN_140c2d3a0 body=566 status=ok
// SIG undefined FUN_140c2d3a0(void)

int * FUN_140c2d3a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
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
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar8 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar2 = (undefined1 *)param_3[1];
  lVar3 = *(longlong *)*param_3;
  *plVar8 = lVar3;
  *(undefined1 *)(plVar8 + 1) = *puVar2;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    if (iVar10 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x18) == lVar3) goto LAB_140c2d4fc;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_140c2d4fc:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),plVar8,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar5;
      goto LAB_140c2d5ad;
    }
  }
  cVar4 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    uVar9 = (int)((ulonglong)*plVar8 >> 0x20) + (int)*plVar8 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar8 + 0x14) = uVar9;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_140c2d5ad:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140c2d5e0 FUN_140c2d5e0 body=139 status=ok
// SIG undefined FUN_140c2d5e0(void)

longlong FUN_140c2d5e0(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140c49360(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140c49360(&local_28);
    }
  }
  return 0;
}



// FUNCTION 140c2d670 FUN_140c2d670 body=478 status=ok
// SIG undefined FUN_140c2d670(void)

/* WARNING: Removing unreachable block (ram,0x000140c2d845) */
/* WARNING: Removing unreachable block (ram,0x000140c2d7ce) */

longlong FUN_140c2d670(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = AMobActorKuroko::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AMobActorKuroko::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = AMobActorKuroko::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AMobActorKuroko::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140c2d850 FUN_140c2d850 body=208 status=ok
// SIG undefined FUN_140c2d850(void)

undefined8 FUN_140c2d850(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = FUN_141440690();
  lVar3 = *(longlong *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar3 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_140c2d903;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_140c2d903:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar4;
}



// FUNCTION 140c2d920 FUN_140c2d920 body=208 status=ok
// SIG undefined FUN_140c2d920(void)

undefined8 FUN_140c2d920(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = FUN_1414406f0();
  lVar3 = *(longlong *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar3 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_140c2d9d3;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_140c2d9d3:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar4;
}



// FUNCTION 140c2d9f0 FUN_140c2d9f0 body=51 status=ok
// SIG undefined FUN_140c2d9f0(void)

longlong FUN_140c2d9f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 140c2da30 FUN_140c2da30 body=69 status=ok
// SIG undefined FUN_140c2da30(void)

ulonglong FUN_140c2da30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_141403c70();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c2da80 FUN_140c2da80 body=69 status=ok
// SIG undefined FUN_140c2da80(void)

ulonglong FUN_140c2da80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14141f270();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c2dad0 FUN_140c2dad0 body=708 status=ok
// SIG undefined FUN_140c2dad0(void)

int FUN_140c2dad0(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  int local_res18;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  iVar9 = 0;
  if (iVar1 != 0) {
    local_res18 = 0;
    cVar3 = FUN_140c31620(param_2,*param_1);
    bVar18 = cVar3 == '\0';
    lVar16 = 0;
    iVar9 = 0;
    do {
      lVar16 = lVar16 + 1;
      iVar15 = iVar9 + 1;
      if (lVar16 < lVar13) {
        lVar17 = lVar16 * 0x30;
LAB_140c2db62:
        plVar11 = (longlong *)(lVar17 + *param_1);
        if (*(longlong *)(lVar17 + *param_1) != 0) {
          lVar5 = FUN_142f71d80();
          for (lVar10 = *plVar11; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
            if (lVar10 == lVar5) {
              if (*plVar11 != 0) {
                plVar6 = (longlong *)FUN_142f71d80();
                plVar14 = (longlong *)*plVar11;
                plVar2 = plVar14;
                goto joined_r0x000140c2dc31;
              }
              break;
            }
          }
        }
        goto LAB_140c2db92;
      }
LAB_140c2dbbe:
      iVar12 = iVar15 - iVar9;
      if (bVar18 == false) {
        if (iVar12 != 0) {
          plVar11 = (longlong *)((longlong)iVar9 * 0x30 + 0x10 + *param_1);
          do {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 6;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      else {
        if (local_res18 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)local_res18 * 0x30 + *param_1),
                     (void *)((longlong)iVar9 * 0x30 + *param_1),(longlong)iVar12 * 0x30);
        }
        local_res18 = local_res18 + iVar12;
      }
      bVar18 = (bool)(bVar18 ^ 1);
      iVar9 = iVar15;
    } while (lVar16 < lVar13);
    iVar9 = iVar1 - local_res18;
    *(int *)(param_1 + 1) = local_res18;
  }
  return iVar9;
joined_r0x000140c2dc31:
  if (plVar2 == (longlong *)0x0) goto LAB_140c2dc41;
  if (plVar2 == plVar6) goto LAB_140c2dc43;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000140c2dc31;
LAB_140c2dc41:
  plVar14 = (longlong *)0x0;
LAB_140c2dc43:
  lVar10 = plVar14[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar10 = plVar14[0x1f];
    if (lVar10 != 0) goto LAB_140c2dc6b;
  }
  else {
LAB_140c2dc6b:
    lVar5 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && ((uint)*(byte *)(lVar10 + 0x4a8) == *param_2)) &&
       ((char)param_2[1] != *(char *)((longlong)plVar11 + 0x2a))) {
      plVar14 = *(longlong **)(param_2 + 2);
      if (*plVar14 != 0) {
        lVar7 = FUN_142f71d80();
        lVar10 = *plVar14;
        for (lVar5 = lVar10; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar7) goto LAB_140c2dcf0;
        }
      }
      lVar10 = 0;
LAB_140c2dcf0:
      if (*plVar11 != 0) {
        lVar8 = FUN_142f71d80();
        lVar5 = *plVar11;
        for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar8) goto LAB_140c2dd16;
        }
      }
      lVar5 = 0;
LAB_140c2dd16:
      if (lVar10 == lVar5) {
        **(undefined8 **)(param_2 + 2) = 0;
      }
      bVar4 = false;
      goto LAB_140c2db94;
    }
  }
LAB_140c2db92:
  bVar4 = true;
LAB_140c2db94:
  if (bVar18 != bVar4) goto LAB_140c2dbbe;
  iVar15 = iVar15 + 1;
  lVar16 = lVar16 + 1;
  lVar17 = lVar17 + 0x30;
  if (lVar13 <= lVar16) goto LAB_140c2dbbe;
  goto LAB_140c2db62;
}



// FUNCTION 140c2dda0 FUN_140c2dda0 body=887 status=ok
// SIG undefined FUN_140c2dda0(void)

void FUN_140c2dda0(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined8 local_res20;
  
  if (param_3 != '\0') {
    if (param_2 == 0) {
      return;
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
      return;
    }
    lVar2 = FUN_140c498b0(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4d0);
    lVar3 = FUN_142f5a790(param_2);
    if (lVar3 == 0) {
      return;
    }
    FUN_140d4b430();
    local_res20 = 0;
    do {
      iVar15 = (int)param_1[1];
      lVar8 = *(longlong *)(lVar3 + 0x10);
      *(int *)(param_1 + 1) = iVar15 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (param_1,iVar15);
      }
      puVar17 = (undefined2 *)((longlong)iVar15 * 0x78 + *param_1);
      *puVar17 = 4;
      *(undefined1 *)(puVar17 + 1) = 0;
      *(undefined8 *)(puVar17 + 4) = 0;
      *(undefined8 *)(puVar17 + 8) = 0;
      *(undefined1 *)(puVar17 + 0xc) = 0;
      *(undefined8 *)(puVar17 + 0x1c) = 0;
      *(undefined8 *)(puVar17 + 0x20) = 0;
      *(undefined4 *)(puVar17 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar17 + 0x12) = 0;
      *(undefined8 *)(puVar17 + 0x18) = 0;
      if (0x7fffffff < *(uint *)(puVar17 + 0x22)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar17 + 0x1c,0);
      }
      if (*(undefined2 **)(puVar17 + 0x1c) != (undefined2 *)0x0) {
        **(undefined2 **)(puVar17 + 0x1c) = 0;
      }
      *(undefined4 *)(puVar17 + 0x14) = 0;
      *(undefined8 *)(puVar17 + 0x30) = 0;
      *(undefined8 *)(puVar17 + 0x34) = 0;
      *(undefined4 *)(puVar17 + 0x24) = 0xffffffff;
      *(undefined4 *)(puVar17 + 0x26) = 0;
      *(undefined8 *)(puVar17 + 0x2c) = 0;
      *(undefined4 *)(puVar17 + 0x34) = 0;
      if (0x7fffffff < *(uint *)(puVar17 + 0x36)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar17 + 0x30,0);
      }
      if (*(undefined2 **)(puVar17 + 0x30) != (undefined2 *)0x0) {
        **(undefined2 **)(puVar17 + 0x30) = 0;
      }
      *(undefined4 *)(puVar17 + 0x28) = 0;
      *(undefined4 *)(puVar17 + 0x38) = 0;
      *(undefined1 *)(puVar17 + 0x3a) = 0;
      FUN_140d4cf30(puVar17,lVar8);
      if (lVar8 != 0) {
        lVar4 = FUN_142f71d80();
        lVar10 = lVar8;
        do {
          lVar16 = lVar8;
          if (lVar10 == lVar4) goto LAB_140c2df45;
          lVar10 = *(longlong *)(lVar10 + 0x30);
        } while (lVar10 != 0);
      }
      lVar16 = 0;
LAB_140c2df45:
      if (lVar2 != 0) {
        lVar4 = FUN_142f71d80();
        lVar10 = lVar2;
        do {
          lVar5 = lVar2;
          if (lVar10 == lVar4) goto LAB_140c2df66;
          lVar10 = *(longlong *)(lVar10 + 0x30);
        } while (lVar10 != 0);
      }
      lVar5 = 0;
LAB_140c2df66:
      if (lVar16 == lVar5) {
        *(undefined1 *)puVar17 = 1;
        uVar9 = FUN_142f5a990(lVar3);
        FUN_140d4c330(puVar17,uVar9);
        TArray<int,FDefaultAllocator>::SetNum(puVar17 + 4,*(undefined4 *)(lVar3 + 0x218));
        uVar12 = 0;
        uVar14 = uVar12;
        if (0 < *(int *)(puVar17 + 8)) {
          do {
            uVar13 = (int)uVar14 + 1;
            *(undefined4 *)(uVar12 + *(longlong *)(puVar17 + 4)) = 0;
            uVar12 = uVar12 + 4;
            uVar14 = (ulonglong)uVar13;
          } while ((int)uVar13 < *(int *)(puVar17 + 8));
        }
        FUN_140d4d540(param_1,lVar8);
        return;
      }
      *puVar17 = 0x102;
      TArray<int,FDefaultAllocator>::SetNum(puVar17 + 4,*(undefined4 *)(lVar3 + 0x218),1);
      iVar15 = 0;
      if (0 < *(int *)(puVar17 + 8)) {
        lVar8 = 0;
        lVar10 = 0;
        do {
          iVar15 = iVar15 + 1;
          *(uint *)(lVar8 + *(longlong *)(puVar17 + 4)) =
               (uint)*(byte *)(*(longlong *)(lVar10 + *(longlong *)(lVar3 + 0x210)) + 0x28);
          lVar8 = lVar8 + 4;
          lVar10 = lVar10 + 8;
        } while (iVar15 < *(int *)(puVar17 + 8));
      }
      plVar6 = (longlong *)FUN_142f5cd00(lVar3,&local_res20);
      plVar6 = (longlong *)*plVar6;
      if (plVar6 == (longlong *)0x0) break;
      plVar7 = (longlong *)FUN_142f71d80();
      plVar11 = plVar6;
      while (plVar11 != plVar7) {
        plVar11 = (longlong *)plVar11[6];
        if (plVar11 == (longlong *)0x0) goto LAB_140c2e003;
      }
      plVar7 = (longlong *)FUN_142f71d80();
      plVar11 = plVar6;
      do {
        if (plVar11 == plVar7) goto LAB_140c2e048;
        plVar11 = (longlong *)plVar11[6];
      } while (plVar11 != (longlong *)0x0);
      plVar6 = (longlong *)0x0;
LAB_140c2e048:
      lVar3 = plVar6[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar6 + 0x368))();
        lVar3 = plVar6[0x1f];
        if (lVar3 == 0) break;
      }
      lVar8 = FUN_142f71d80();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    } while (bVar1);
  }
LAB_140c2e003:
  FUN_140d4b430(param_1);
  return;
}



// FUNCTION 140c2e120 FUN_140c2e120 body=275 status=ok
// SIG undefined FUN_140c2e120(void)

undefined8 * FUN_140c2e120(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1409c1ba0();
  *(undefined4 *)(param_1 + 0xb7) = 0x43480000;
  *param_1 = &PTR__scalar_deleting_destructor__144357430;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 10;
  param_1[0x8b] = &PTR_LAB_144357bb0;
  param_1[0x8c] = &PTR_LAB_144357c10;
  param_1[0x8d] = &PTR_LAB_144357c38;
  param_1[0x8e] = &PTR_LAB_144357c50;
  param_1[0x8f] = &PTR_LAB_144357c78;
  param_1[0x90] = &PTR_LAB_144357c88;
  param_1[0x92] = &PTR_LAB_144357cc8;
  param_1[0x93] = &PTR_LAB_144357ce0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MovableDamageableHISM",1);
  uVar3 = *puVar1;
  uVar2 = AUGCompanionAIController::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb8] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 140c2e240 FUN_140c2e240 body=3747 status=ok
// SIG undefined FUN_140c2e240(void)

undefined8 * FUN_140c2e240(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 **local_40;
  
  local_res8 = DAT_146aefaf8;
  lVar3 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar3 == 0) {
    local_68 = (undefined2 *)0x0;
    local_60 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar3,&local_68);
  }
  puVar6 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar6 = local_68;
  }
  FUN_141784790(param_2,puVar6);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar4 = FUN_141403c70();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar4,param_2);
  local_res10 = DAT_146b31370;
  lVar3 = FName::GetComparisonNameEntry(&local_res10);
  if (lVar3 == 0) {
    local_58 = (undefined2 *)0x0;
    local_50 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar3,&local_58);
  }
  puVar6 = &DAT_143f3eda8;
  if ((int)local_50 != 0) {
    puVar6 = local_58;
  }
  FUN_141784790(param_2,puVar6);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res10,uVar4,param_2);
  local_res18 = DAT_146b31378;
  lVar3 = FName::GetComparisonNameEntry(&local_res18);
  if (lVar3 == 0) {
    local_48 = (undefined8 *)0x0;
    local_40 = (undefined8 **)0xa;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar3,&local_48);
  }
  puVar7 = (undefined8 *)&DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar7 = local_48;
  }
  FUN_141784790(param_2,puVar7);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  uVar4 = AUGWallBladeTrap::GetPrivateStaticClass();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res18,uVar4,param_2);
  FUN_142cb18c0(param_1,param_2);
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe04) = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0;
  *param_1 = &PTR_FUN_144354758;
  param_1[0x8b] = &PTR_LAB_1443553f8;
  param_1[0x116] = &PTR_LAB_144355450;
  param_1[0x117] = &PTR_LAB_144355478;
  param_1[0x118] = &PTR_LAB_1443554d0;
  param_1[0x119] = &PTR_LAB_144355508;
  param_1[0x11a] = &PTR_LAB_144355520;
  param_1[0x11b] = &PTR_LAB_144355568;
  param_1[0x11c] = &PTR_LAB_144355590;
  param_1[0x11d] = &PTR_LAB_1443555b8;
  param_1[0x11e] = &PTR_LAB_144355600;
  param_1[0x11f] = &PTR_LAB_144355618;
  param_1[0x1af] = &PTR_LAB_144355630;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_144355650;
  param_1[0x1b1] = &PTR_LAB_144355680;
  param_1[0x1b2] = &PTR_LAB_144355850;
  param_1[0x1b3] = &PTR_LAB_144355878;
  param_1[0x1b4] = &PTR_FUN_144355948;
  param_1[0x1b5] = &PTR_LAB_144355960;
  param_1[0x1b6] = &PTR_LAB_1443559b0;
  param_1[0x1b7] = &PTR_LAB_1443559c8;
  param_1[0x1b8] = &PTR_LAB_1443559e0;
  param_1[0x1b9] = &PTR_LAB_144355a00;
  param_1[0x1c4] = &PTR_LAB_144355a38;
  param_1[0x1c5] = &PTR_LAB_144355a78;
  param_1[0x1c6] = &PTR_LAB_144355aa0;
  param_1[0x1c7] = &PTR_LAB_144355ab8;
  param_1[0x1c8] = &PTR_LAB_144355ae0;
  param_1[0x1c9] = &PTR_LAB_144355b10;
  param_1[0x1ca] = &PTR_LAB_144355b38;
  *(undefined2 *)((longlong)param_1 + 0xec2) = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 2;
  FUN_140a4ede0(param_1 + 0x1e9);
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1101) = 0;
  param_1[0x222] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1125) = 1;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  *(undefined1 *)(param_1 + 0x227) = 0;
  *(undefined4 *)((longlong)param_1 + 0x113c) = 0x3f800000;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  *(undefined1 *)(param_1 + 0x22b) = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  *(undefined1 *)(param_1 + 0x245) = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12c4) = 0;
  *(undefined1 *)(param_1 + 0x25a) = 0xff;
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 2;
  *(undefined1 *)(param_1 + 0x260) = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 2;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c3) = 0;
  param_1[0x279] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x280] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1464) = 0;
  param_1[0x28e] = 0;
  *(undefined4 *)(param_1 + 0x28f) = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  *(undefined4 *)(param_1 + 0x297) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14bc) = 0;
  param_1[0x299] = 0;
  *(undefined4 *)(param_1 + 0x29a) = 0;
  param_1[0x29b] = 0xffffffffffffffff;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  *(undefined1 *)(param_1 + 0x2fa) = 0;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  *(undefined1 *)(param_1 + 0x30d) = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  *(undefined1 *)(param_1 + 0x333) = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  *(undefined1 *)(param_1 + 0x346) = 0;
  param_1[0x357] = 0;
  param_1[0x358] = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  *(undefined1 *)(param_1 + 0x35d) = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  *(undefined1 *)(param_1 + 899) = 0;
  param_1[0x394] = 0;
  param_1[0x395] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x398);
  param_1[0x39d] = 0;
  param_1[0x39e] = 0;
  *(undefined4 *)(param_1 + 0x39f) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x1cfc) = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ad] = 0;
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d84) = 0x3f800000;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b3] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3be] = 0;
  param_1[0x3bf] = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3c2] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  param_1[0x3c7] = 0;
  param_1[0x3c8] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3cb] = 0;
  *(undefined2 *)(param_1 + 0x3cc) = 0;
  param_1[0x3cd] = 0;
  param_1[0x3ce] = 0;
  *(undefined1 *)(param_1 + 0x3cf) = 0;
  param_1[0x3d4] = 0;
  param_1[0x3d5] = 0;
  param_1[0x3d6] = 0;
  param_1[0x3d7] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3de] = 0;
  param_1[0x3df] = 0;
  param_1[0x3e0] = 0;
  *(undefined4 *)(param_1 + 0x3e2) = 0xffffffff;
  param_1[999] = 0;
  param_1[1000] = 0;
  param_1[0x3e9] = 0;
  param_1[0x3ea] = 0;
  param_1[0x3eb] = 0;
  param_1[0x3ec] = 0;
  param_1[0x3ed] = 0;
  param_1[0x3ee] = 0;
  param_1[0x3ef] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f1] = 0;
  param_1[0x3f2] = 0;
  param_1[0x3f3] = 0;
  *(undefined4 *)(param_1 + 0x3f5) = 0xffffffff;
  param_1[0x3f6] = 0;
  param_1[0x3f7] = 0;
  param_1[0x3fe] = 0;
  param_1[0x3ff] = 0;
  FUN_140a4f6b0((longlong)param_1 + 0x2004);
  FUN_140a4f6b0(param_1 + 0x406);
  param_1[0x40c] = 0;
  param_1[0x40d] = 0;
  ATTLGameSession::GetLdnLastError(param_1 + 0x40f);
  param_1[0x413] = 0;
  param_1[0x414] = 0;
  FUN_140a4f4e0((longlong)param_1 + 0x20ac);
  FUN_140a4f660(param_1 + 0x427);
  FUN_140a4f610(param_1 + 0x431);
  *(undefined1 *)((longlong)param_1 + 0x21fd) = 0;
  param_1[0x441] = 0;
  param_1[0x442] = 0;
  *(undefined2 *)(param_1 + 0x443) = 0x100;
  param_1[0x444] = 0;
  param_1[0x446] = 0;
  param_1[0x448] = 0;
  param_1[0x449] = 0;
  *(undefined1 *)(param_1 + 0x44a) = 0xff;
  param_1[0x44d] = 0;
  param_1[0x44e] = 0;
  *(undefined1 *)(param_1 + 0x44f) = 0xff;
  param_1[0x1cd] = param_1[0x99];
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x41200000;
  puVar1 = (uint *)(param_1[0x99] + 0x1c0);
  *puVar1 = *puVar1 | 1;
  param_1[0x1cf] = param_1[0x122];
  param_1[0x1d0] = param_1[0x123];
  uVar4 = DAT_14686c2a8;
  uVar5 = FUN_142e1a5a0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar5,uVar5,0,0,0);
  param_1[0x1ce] = uVar4;
  uVar4 = DAT_14686c2b0;
  uVar5 = FUN_141477fa0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar5,uVar5,0,0,0);
  param_1[0x1d2] = uVar4;
  uVar4 = DAT_14686c2b8;
  uVar5 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar5,uVar5,0,0,0);
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 4;
  *(byte *)((longlong)param_1 + 0x13fc) = *(byte *)((longlong)param_1 + 0x13fc) | 0x10;
  plVar2 = (longlong *)param_1[0x9a];
  param_1[0x1d5] = uVar4;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x3af] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e79) = 2;
  *(undefined4 *)(param_1 + 0x43f) = 0xffffffff;
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686c370) {
      _Init_thread_header(&DAT_14686c370);
      if (DAT_14686c370 == -1) {
        FName::FName(&DAT_14686c368,L"CharacterCapsule",1);
        _Init_thread_footer(&DAT_14686c370);
      }
    }
    (**(code **)(*plVar2 + 0x640))(plVar2,DAT_14686c368);
  }
  if (param_1[0x98] != 0) {
    *(undefined1 *)(param_1[0x98] + 0x2ed) = 1;
  }
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xfe;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1124) = 0;
  param_1[0x284] = 0;
  FUN_140e84320(param_1 + 0x2a3,4);
  *(undefined4 *)(param_1 + 0x27f) = 0x3f800000;
  FUN_14246fd50(param_1 + 0x398,0x3f800000);
  *(byte *)((longlong)param_1 + 0x13fc) = *(byte *)((longlong)param_1 + 0x13fc) | 2;
  puVar7 = param_1 + 0x1ba;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb;
  *(undefined1 *)((longlong)param_1 + 0x1123) = 1;
  param_1[0x280] = DAT_14686c2a0;
  local_48 = &DAT_146871290;
  local_40 = &local_res10;
  local_res10 = param_1 + 0x241;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (puVar7,&local_res8,&local_48,0);
  local_48 = &DAT_146871298;
  local_40 = &local_res10;
  local_res10 = param_1 + 0x243;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (puVar7,&local_res8,&local_48,0);
  if (param_1[0x1cf] != 0) {
    local_res10 = (undefined8 *)(param_1[0x1cf] + 0x898);
    local_48 = &DAT_1468712a0;
    local_40 = &local_res10;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar7,&local_res8,&local_48,0);
    local_res10 = (undefined8 *)(param_1[0x1cf] + 0x8a8);
    local_48 = &DAT_1468712a8;
    local_40 = &local_res10;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar7,&local_res8,&local_48,0);
    local_res10 = (undefined8 *)(param_1[0x1cf] + 0x8b8);
    local_48 = &DAT_1468712b0;
    local_40 = &local_res10;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar7,&local_res8,&local_48,0);
    local_res10 = (undefined8 *)(param_1[0x1cf] + 0x8d8);
    local_48 = &DAT_1468712b8;
    local_40 = &local_res10;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar7,&local_res8,&local_48,0);
    local_res10 = (undefined8 *)(param_1[0x1cf] + 0x888);
    local_48 = &DAT_1468712c0;
    local_40 = &local_res10;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar7,&local_res8,&local_48,0);
  }
  param_1[0x3c9] = 0;
  return param_1;
}



// FUNCTION 140c2f0f0 FUN_140c2f0f0 body=162 status=ok
// SIG undefined FUN_140c2f0f0(void)

undefined8 * FUN_140c2f0f0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140bfb770();
  *param_1 = &PTR_FUN_144353448;
  param_1[0x8b] = &PTR_LAB_144353b68;
  param_1[0xbd] = &PTR_LAB_144353b88;
  param_1[0xbe] = &PTR_LAB_144353bb0;
  param_1[0xbf] = &PTR_LAB_144353bf8;
  param_1[0xc6] = &PTR_LAB_144353c68;
  param_1[0xcb] = &PTR_LAB_144353c88;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  lVar1 = UCableComponent::GetAttachedActor(param_1);
  *(undefined1 *)(lVar1 + 0x868) = 0;
  return param_1;
}



// FUNCTION 140c2f1a0 FUN_140c2f1a0 body=215 status=ok
// SIG undefined FUN_140c2f1a0(void)

undefined8 * FUN_140c2f1a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_140e998f0();
  *param_1 = &PTR_FUN_144355b50;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"MissionIconComponent",1);
  uVar3 = *puVar1;
  uVar2 = AArchVisCharacter::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x91] = uVar3;
  if (param_1[0x8c] != 0) {
    *(undefined1 *)(param_1[0x8c] + 0x1d8) = 0;
  }
  if (param_1[0x91] != 0) {
    local_res8 = 0;
    FUN_142399e30(param_1[0x91],param_1[0x2d],0);
  }
  return param_1;
}



// FUNCTION 140c2f280 FUN_140c2f280 body=215 status=ok
// SIG undefined FUN_140c2f280(void)

undefined8 * FUN_140c2f280(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_140e997d0();
  *param_1 = &PTR_FUN_144356238;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"MissionIconComponent",1);
  uVar3 = *puVar1;
  uVar2 = AArchVisCharacter::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x91] = uVar3;
  if (param_1[0x8c] != 0) {
    *(undefined1 *)(param_1[0x8c] + 0x1d8) = 0;
  }
  if (param_1[0x91] != 0) {
    local_res8 = 0;
    FUN_142399e30(param_1[0x91],param_1[0x2d],0);
  }
  return param_1;
}



// FUNCTION 140c2f360 FUN_140c2f360 body=396 status=ok
// SIG undefined FUN_140c2f360(void)

undefined8 * FUN_140c2f360(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144356d48;
  FUN_14246d990(param_1 + 0x8d,0x3f800000);
  FUN_14246d990((longlong)param_1 + 0x474,0x3f800000);
  FUN_14246d990(param_1 + 0x90,0x3f800000);
  FUN_14246d990((longlong)param_1 + 0x48c,0x3f800000);
  FUN_14246d990(param_1 + 0x93,0x3f800000);
  FUN_14246d990((longlong)param_1 + 0x4a4,0x3f800000);
  FUN_14246d990(param_1 + 0x96,0x3f800000);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x4bc);
  FUN_14246d990(param_1 + 0x99,0x3f800000);
  FUN_14246d990((longlong)param_1 + 0x4d4,0x3f800000);
  FUN_14246d990(param_1 + 0x9c,0x3f800000);
  FUN_14246d990((longlong)param_1 + 0x4ec,0x3f800000);
  FUN_14246d990(param_1 + 0x9f,0x3f800000);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ManagerComponent",1);
  uVar3 = *puVar1;
  uVar2 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"StatusEffectManagerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141477fa0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  return param_1;
}



// FUNCTION 140c2f4f0 FUN_140c2f4f0 body=203 status=ok
// SIG undefined FUN_140c2f4f0(void)

undefined8 * FUN_140c2f4f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144358030;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  FUN_140590080(param_1 + 0x96);
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(undefined1 *)(param_1 + 6) = 2;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf7;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  puVar2 = (undefined8 *)FName::FName(local_res8,"MusicWwiseComponent",1);
  uVar1 = *puVar2;
  uVar3 = AUGDoor::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x310) = 1;
  }
  return param_1;
}



// FUNCTION 140c2f5c0 FUN_140c2f5c0 body=577 status=ok
// SIG undefined FUN_140c2f5c0(void)

undefined8 * FUN_140c2f5c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MissionStatusChanged",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"MissionStatusChanged",&DAT_14433b26c);
  FUN_14217c110(param_1,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  uVar2 = *param_1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"player_character_guid",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[2] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"player_time_played",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[3] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"mission_class",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[4] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"plot_mission",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[5] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"mission_status",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  param_1[6] = *puVar1;
  return param_1;
}



// FUNCTION 140c2f810 FResearchTreeMessageData body=110 status=ok
// SIG undefined FResearchTreeMessageData(void)

undefined8 * FResearchTreeMessageData::FResearchTreeMessageData(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 140c2f880 FUN_140c2f880 body=75 status=ok
// SIG undefined FUN_140c2f880(void)

undefined8 * FUN_140c2f880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144354740;
  FWeakObjectPtr::operator=(param_1 + 1);
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_140c54800(param_1);
  return param_1;
}



// FUNCTION 140c2f8d0 FUN_140c2f8d0 body=430 status=ok
// SIG undefined FUN_140c2f8d0(void)

undefined8 * FUN_140c2f8d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = param_2[6];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar6;
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar6;
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar6;
  param_1[0xd] = param_2[0xd];
  uVar6 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  uVar6 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x13);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0x17);
  pvVar2 = (void *)param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x16,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x16],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  pvVar2 = (void *)param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x18,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x18],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar2 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x1a,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x1a],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140c2fa80 FUN_140c2fa80 body=74 status=ok
// SIG undefined FUN_140c2fa80(void)

undefined8 * FUN_140c2fa80(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144356920;
  param_1[5] = &PTR_LAB_144356d18;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 140c2fad0 FUN_140c2fad0 body=3540 status=ok
// SIG undefined FUN_140c2fad0(void)

undefined8 * FUN_140c2fad0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 local_res8 [8];
  int local_res18 [2];
  undefined1 *local_res20;
  
  UFontFaceInterface::UFontFaceInterface();
  plVar1 = param_1 + 0x10;
  plVar2 = param_1 + 0x1c;
  *param_1 = &PTR_FUN_144357db0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *plVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *plVar2 = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x28);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x27) = 0x45bb8000;
  *(undefined4 *)(param_1 + 0x37) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x42f00000;
  *(undefined4 *)(param_1 + 0x38) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f000000;
  local_res8[0] = 0;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    piVar6 = (int *)param_1[0xe];
    if ((int *)param_1[0xe] == (int *)0x0) {
      piVar6 = (int *)(param_1 + 0xd);
    }
    iVar4 = *piVar6;
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\0') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2fc72;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2fc72:
  local_res8[0] = 1;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0xf) - 1U & 1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\x01') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2fcf2;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2fcf2:
  local_res8[0] = 2;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0xf) - 1U & 2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\x02') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2fd72;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2fd72:
  local_res8[0] = 3;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0xf) - 1U & 3) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\x03') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2fdf2;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2fdf2:
  local_res8[0] = 4;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0xf) - 1U & 4) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\x04') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2fe72;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2fe72:
  local_res8[0] = 5;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0xf) - 1U & 5) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\x05') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2fef2;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2fef2:
  local_res8[0] = 6;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0xf) - 1U & 6) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = param_1[6] + (longlong)iVar4 * 0x18;
        if (*(char *)(param_1[6] + (longlong)iVar4 * 0x18) == '\x06') {
          if ((iVar4 != -1) && (lVar3 != 0)) goto LAB_140c2ff72;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
LAB_140c2ff72:
  local_res8[0] = 7;
  FUN_140b5b1d0(param_1 + 6,local_res18,7);
  if ((local_res18[0] == -1) || (param_1[6] + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
  }
  local_res8[0] = 8;
  FUN_140b5b1d0(param_1 + 6,local_res18,8);
  if ((local_res18[0] == -1) || (param_1[6] + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
  }
  local_res8[0] = 9;
  FUN_140b5b1d0(param_1 + 6,local_res18,9);
  if ((local_res18[0] == -1) || (param_1[6] + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
  }
  local_res8[0] = 10;
  FUN_140b5b1d0(param_1 + 6,local_res18,10);
  if ((local_res18[0] == -1) || (param_1[6] + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(param_1 + 6,local_res18,&local_res20,0);
  }
  local_res8[0] = 0;
  FUN_140b5b1d0(plVar1,local_res18,0);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 1;
  FUN_140b5b1d0(plVar1,local_res18,1);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 2;
  FUN_140b5b1d0(plVar1,local_res18,2);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 3;
  FUN_140b5b1d0(plVar1,local_res18,3);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 4;
  FUN_140b5b1d0(plVar1,local_res18,4);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 5;
  FUN_140b5b1d0(plVar1,local_res18,5);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 6;
  FUN_140b5b1d0(plVar1,local_res18,6);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 7;
  FUN_140b5b1d0(plVar1,local_res18,7);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 8;
  FUN_140b5b1d0(plVar1,local_res18,8);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 9;
  FUN_140b5b1d0(plVar1,local_res18,9);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 10;
  FUN_140b5b1d0(plVar1,local_res18,10);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0xb;
  FUN_140b5b1d0(plVar1,local_res18,0xb);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0xc;
  FUN_140b5b1d0(plVar1,local_res18,0xc);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0xd;
  FUN_140b5b1d0(plVar1,local_res18,0xd);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0xe;
  FUN_140b5b1d0(plVar1,local_res18,0xe);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0xf;
  FUN_140b5b1d0(plVar1,local_res18,0xf);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0x10;
  FUN_140b5b1d0(plVar1,local_res18,0x10);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0x11;
  FUN_140b5b1d0(plVar1,local_res18,0x11);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0x12;
  FUN_140b5b1d0(plVar1,local_res18,0x12);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0x13;
  FUN_140b5b1d0(plVar1,local_res18,0x13);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0x14;
  FUN_140b5b1d0(plVar1,local_res18,0x14);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0x15;
  FUN_140b5b1d0(plVar1,local_res18,0x15);
  if ((local_res18[0] == -1) || (*plVar1 + (longlong)local_res18[0] * 0x18 == 0)) {
    local_res20 = local_res8;
    FUN_140c2ce10(plVar1,local_res18,&local_res20,0);
  }
  local_res8[0] = 0;
  FUN_140c40ec0(plVar2,local_res18,0);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  local_res8[0] = 1;
  FUN_140c40ec0(plVar2,local_res18,1);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  local_res8[0] = 2;
  FUN_140c40ec0(plVar2,local_res18,2);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  local_res8[0] = 3;
  FUN_140c40ec0(plVar2,local_res18,3);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  local_res8[0] = 4;
  FUN_140c40ec0(plVar2,local_res18,4);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  local_res8[0] = 5;
  FUN_140c40ec0(plVar2,local_res18,5);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  local_res8[0] = 6;
  FUN_140c40ec0(plVar2,local_res18,6);
  if ((local_res18[0] == -1) || ((longlong)local_res18[0] * 0x30 + *plVar2 == 0)) {
    local_res20 = local_res8;
    FUN_140c2cb10(plVar2,local_res18,&local_res20,0);
  }
  return param_1;
}



// FUNCTION 140c308b0 FUN_140c308b0 body=186 status=ok
// SIG undefined FUN_140c308b0(void)

undefined8 * FUN_140c308b0(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *param_1 = &PTR_FUN_1443541a8;
  param_1[5] = &PTR_LAB_1443546a0;
  param_1[0x34] = &PTR_LAB_1443546d0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  return param_1;
}



// FUNCTION 140c30970 ~TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>(void)

void TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>::
     ~TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 140c309d0 FUN_140c309d0 body=101 status=ok
// SIG undefined FUN_140c309d0(void)

void FUN_140c309d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 200);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x1f;
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



// FUNCTION 140c30a40 FUN_140c30a40 body=104 status=ok
// SIG undefined FUN_140c30a40(void)

void FUN_140c30a40(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        FMemory::Free();
      }
      FUN_140c30d40(lVar1);
      lVar1 = lVar1 + 0x68;
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



// FUNCTION 140c30ab0 ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 140c30b20 FUN_140c30b20 body=426 status=ok
// SIG undefined FUN_140c30b20(void)

void FUN_140c30b20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x4d0);
  lVar1 = *(longlong *)(param_1 + 0x4c8);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x4c8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x4c0);
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 8);
    do {
      if (plVar3[6] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x4b8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    if (*(longlong *)(param_1 + 0x4a0) == 0) {
      **(longlong **)(param_1 + 0x4a8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x4a8) = *(longlong *)(param_1 + 0x4a0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + 8) = *(undefined8 *)(param_1 + 0x4a8);
      *(undefined8 *)(param_1 + 0x4a0) = 0;
    }
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  *(undefined ***)(param_1 + 0x498) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x480) = &PTR_FUN_1441b39f8;
  *(undefined ***)(param_1 + 0x478) = &PTR_FUN_143fddd00;
  *(undefined ***)(param_1 + 0x470) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x468) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_1441b39d0;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b3948;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140c30cd0 FUN_140c30cd0 body=110 status=ok
// SIG undefined FUN_140c30cd0(void)

void FUN_140c30cd0(longlong *param_1)

{
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>(param_1 + 0x1d);
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140c30d40 FUN_140c30d40 body=156 status=ok
// SIG undefined FUN_140c30d40(void)

void FUN_140c30d40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  return;
}



// FUNCTION 140c30de0 FUN_140c30de0 body=158 status=ok
// SIG undefined FUN_140c30de0(void)

void FUN_140c30de0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  FUN_14099aac0(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  FUN_140c309d0(param_1);
  return;
}



// FUNCTION 140c30e80 FUN_140c30e80 body=112 status=ok
// SIG undefined FUN_140c30e80(void)

void FUN_140c30e80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 400);
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (iVar2 != 0) {
    do {
      TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
      ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x188);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140c30ef0 FUN_140c30ef0 body=429 status=ok
// SIG undefined FUN_140c30ef0(void)

longlong * FUN_140c30ef0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    for (iVar5 = (int)param_1[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        FMemory::Free();
      }
      FUN_140b4e2b0(lVar3);
      lVar3 = lVar3 + 0x38;
    }
    iVar5 = (int)param_2[1];
    lVar3 = *param_2;
    *(int *)(param_1 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
      puVar7 = (undefined8 *)*param_1;
      if (iVar5 != 0) {
        piVar6 = (int *)(lVar3 + 0x30);
        puVar4 = (undefined4 *)((longlong)puVar7 + 0x24);
        do {
          *puVar7 = 0;
          TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
          CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
                    (puVar7,*(undefined8 *)(piVar6 + -0xc),piVar6[-10],0,0);
          puVar4[-5] = piVar6[-8];
          *(undefined8 *)(puVar4 + -3) = 0;
          iVar1 = piVar6[-4];
          pvVar2 = *(void **)(piVar6 + -6);
          puVar4[-1] = iVar1;
          if (iVar1 == 0) {
            *puVar4 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar4 + -3,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -3),pvVar2,(longlong)iVar1 << 3);
          }
          *(undefined8 *)(puVar4 + 1) = 0;
          iVar1 = *piVar6;
          pvVar2 = *(void **)(piVar6 + -2);
          puVar4[3] = iVar1;
          if (iVar1 == 0) {
            puVar4[4] = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar4 + 1,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 1),pvVar2,(longlong)iVar1 << 3);
          }
          puVar7 = puVar7 + 7;
          puVar4 = puVar4 + 0xe;
          piVar6 = piVar6 + 0xe;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140c310a0 FUN_140c310a0 body=506 status=ok
// SIG undefined FUN_140c310a0(void)

longlong * FUN_140c310a0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<enum_EGPlatformType,UMediaSource_*>,TDefaultMapHashableKeyFuncs<enum_EGPlatformType,UMediaSource_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140c311fb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_140c311fb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_140c2c6a0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x14,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 140c312a0 operator= body=479 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140c313dd;
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
LAB_140c313dd:
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
        FUN_140c2c840(param_1,local_res8,(longlong)iStack_3c * 0x70 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140c31480 FUN_140c31480 body=277 status=ok
// SIG undefined FUN_140c31480(void)

longlong * FUN_140c31480(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = (int)param_1[1];
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
    CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
              (param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  plVar2 = param_1 + 3;
  *(int *)(param_1 + 2) = (int)param_2[2];
  if (plVar2 != param_2 + 3) {
    iVar3 = (int)param_2[4];
    pvVar1 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar2,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,pvVar1,(longlong)iVar3 << 3);
    }
  }
  plVar2 = param_1 + 5;
  if (plVar2 != param_2 + 5) {
    iVar3 = (int)param_2[6];
    pvVar1 = (void *)param_2[5];
    *(int *)(param_1 + 6) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar2,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,pvVar1,(longlong)iVar3 << 3);
    }
  }
  return param_1;
}



// FUNCTION 140c315a0 FUN_140c315a0 body=122 status=ok
// SIG undefined FUN_140c315a0(void)

undefined8 FUN_140c315a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = (int)param_2[1];
  if (iVar3 != (int)param_1[1]) {
    return 0;
  }
  if (iVar3 != 0) {
    plVar4 = (longlong *)(*param_1 + 0x28);
    plVar2 = (longlong *)(*param_2 + 0x28);
    do {
      cVar1 = FSoftObjectPath::operator==(plVar4 + -3,plVar2 + -3);
      if (cVar1 == '\0') {
        return 0;
      }
      if (*plVar4 != *plVar2) {
        return 0;
      }
      plVar2 = plVar2 + 6;
      plVar4 = plVar4 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 1;
}



// FUNCTION 140c31620 FUN_140c31620 body=359 status=ok
// SIG undefined FUN_140c31620(void)

undefined8 FUN_140c31620(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (*param_2 == 0) {
    return 0;
  }
  lVar3 = FUN_142f71d80();
  lVar8 = *param_2;
  while( true ) {
    if (lVar8 == 0) {
      return 0;
    }
    if (lVar8 == lVar3) break;
    lVar8 = *(longlong *)(lVar8 + 0x30);
  }
  if (*param_2 == 0) {
    return 0;
  }
  plVar4 = (longlong *)FUN_142f71d80();
  plVar7 = (longlong *)*param_2;
  for (plVar1 = plVar7; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
    if (plVar1 == plVar4) goto LAB_140c316a0;
  }
  plVar7 = (longlong *)0x0;
LAB_140c316a0:
  lVar8 = plVar7[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar8 = plVar7[0x1f];
    if (lVar8 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((!bVar2) || ((uint)*(byte *)(lVar8 + 0x4a8) != *param_1)) ||
     ((char)param_1[1] == *(char *)((longlong)param_2 + 0x2a))) {
    return 0;
  }
  plVar7 = *(longlong **)(param_1 + 2);
  if (*plVar7 != 0) {
    lVar5 = FUN_142f71d80();
    lVar8 = *plVar7;
    for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar5) goto LAB_140c31745;
    }
  }
  lVar8 = 0;
LAB_140c31745:
  if (*param_2 != 0) {
    lVar6 = FUN_142f71d80();
    lVar3 = *param_2;
    for (lVar5 = lVar3; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar6) goto LAB_140c31770;
    }
  }
  lVar3 = 0;
LAB_140c31770:
  if (lVar8 == lVar3) {
    **(undefined8 **)(param_1 + 2) = 0;
  }
  return 1;
}



// FUNCTION 140c31790 FUN_140c31790 body=195 status=ok
// SIG undefined FUN_140c31790(void)

void FUN_140c31790(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  uVar3 = IStreamingManager::Get();
  IStreamingManager::AddViewSlaveLocation(uVar3,lVar1 + 0x678,0x3f800000,0,0);
  uVar7 = 0;
  plVar5 = *(longlong **)(*param_1 + 0x688);
  uVar4 = (ulonglong)*(int *)(*param_1 + 0x690);
  uVar6 = uVar4 & 0x1fffffffffffffff;
  if (plVar5 + uVar4 < plVar5) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      plVar2 = (longlong *)*plVar5;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x4d0))(plVar2,0,0,0x3f800000,0);
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  return;
}



// FUNCTION 140c31860 FUN_140c31860 body=1378 status=ok
// SIG undefined FUN_140c31860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c31860(undefined8 *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  uint local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined1 local_98;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  char local_4c;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    local_60 = param_2;
    lVar4 = FUN_1413ea0d0();
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
      if (param_3 == '\0') {
        piVar12 = (int *)param_1[1];
      }
      else {
        piVar12 = (int *)*param_1;
      }
      local_b8 = local_78;
      local_78[0] = 0x3f800000;
      iVar3 = FUN_140c07da0(param_2,*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],
                            *(undefined4 *)param_1[4]);
      piVar12[1] = piVar12[1] + iVar3;
      iVar3 = FUN_140c07cb0(param_2,*(undefined8 *)param_1[2],local_78[0]);
      *piVar12 = *piVar12 + iVar3;
      if (*(longlong *)(piVar12 + 2) == 0) {
        uVar5 = FUN_140c49980(param_2 + 0x30);
        *(undefined8 *)(piVar12 + 2) = uVar5;
      }
      lVar4 = FUN_1405ec200(param_2 + 0xd0);
      if (lVar4 != 0) {
        lVar6 = FUN_14302b3d0();
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
          uVar14 = 0;
          local_88 = (longlong *)0x0;
          local_80 = 0;
          DAT_1468703d0 = *(undefined8 *)(*(longlong *)param_1[5] + 0xa58);
          FUN_142ff7db0(&local_50,lVar4,*(undefined8 *)param_1[5],*(undefined4 *)param_1[4]);
          if (local_4c == '\0') {
            FUN_1409f5880();
            return;
          }
          local_a0 = local_a0 & 0xffffff00;
          local_a8 = 0;
          local_b0 = local_b0 & 0xffffff00;
          local_b8 = (undefined4 *)0x0;
          FUN_143013fe0(&local_88,lVar4,local_50,*(undefined8 *)param_1[7]);
          iVar3 = (int)local_80;
          uVar10 = (ulonglong)(int)local_80;
          DAT_1468703d0 = 0;
          if ((0 < (int)local_80) && (*local_88 != 0)) {
            if ((int)local_80 < 1) {
              iVar13 = 1 - (int)local_80;
              iVar3 = (int)local_80 + iVar13;
              local_80 = CONCAT44(local_80._4_4_,iVar3);
              if (local_80._4_4_ < iVar3) {
                TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_88);
              }
              plVar7 = local_88 + uVar10 * 0xc;
              if (iVar13 != 0) {
                lVar4 = (longlong)plVar7 + 0x44;
                do {
                  *(undefined8 *)(lVar4 + -0x24) = 0;
                  *(undefined8 *)(lVar4 + -0x1c) = 0;
                  *(undefined1 *)(lVar4 + -0x14) = 0;
                  *(undefined8 *)(lVar4 + -0xc) = 0;
                  *(undefined8 *)(lVar4 + -4) = 0;
                  *(undefined8 *)(lVar4 + 4) = 0;
                  *(undefined8 *)(lVar4 + 0xc) = 0;
                  _guard_xfg_dispatch_icall_nop(plVar7,0,0x60);
                  plVar7 = plVar7 + 0xc;
                  *(undefined2 *)(lVar4 + 0x14) = 1;
                  lVar4 = lVar4 + 0x60;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
            }
            else if ((1 < (int)local_80) && (iVar13 = (int)local_80 + -1, iVar13 != 0)) {
              plVar7 = local_88 + 0x13;
              iVar8 = iVar13;
              do {
                if (plVar7[2] != 0) {
                  FMemory::Free();
                }
                if (*plVar7 != 0) {
                  FMemory::Free();
                }
                TArray<FNamedInterfaceDef,FDefaultAllocator>::
                ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar7 + -3);
                plVar7 = plVar7 + 0xc;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
              iVar8 = ((int)local_80 - iVar13) + -1;
              if (iVar8 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (local_88 + 0xc,local_88 + (longlong)iVar3 * 0xc,(longlong)iVar8 * 0x60);
              }
              local_80 = CONCAT44(local_80._4_4_,(int)local_80 - iVar13);
              TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_88);
            }
            local_70 = (undefined8 *)0x0;
            local_68 = 0;
            FUN_143018ff0(&local_88,*(undefined8 *)param_1[8],&local_70,0);
            uVar10 = (ulonglong)((longlong)(local_70 + (int)local_68) + (7 - (longlong)local_70)) >>
                     3;
            if (local_70 + (int)local_68 < local_70) {
              uVar10 = uVar14;
            }
            if (uVar10 != 0) {
              puVar11 = local_70;
              do {
                uVar5 = *puVar11;
                local_58 = uVar5;
                FUN_140c38b80(*(undefined8 *)param_1[5],uVar5);
                local_98 = 0;
                local_a0 = 0;
                local_a8 = CONCAT71(local_a8._1_7_,1);
                local_b0 = 8;
                local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,1);
                FUN_142fe3dd0(*(undefined8 *)param_1[9],&local_50,*(undefined8 *)(*local_88 + 0x1d8)
                              ,uVar5);
                iVar3 = piVar12[6];
                piVar12[6] = iVar3 + 1;
                if (piVar12[7] < iVar3 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (piVar12 + 4,iVar3);
                }
                puVar11 = puVar11 + 1;
                uVar14 = uVar14 + 1;
                *(undefined8 *)(*(longlong *)(piVar12 + 4) + (longlong)iVar3 * 8) = local_58;
              } while (uVar14 != uVar10);
            }
            if (local_70 != (undefined8 *)0x0) {
              FMemory::Free(local_70);
            }
            uVar10 = local_80 & 0xffffffff;
            param_2 = local_60;
          }
          if ((int)uVar10 != 0) {
            plVar7 = local_88 + 7;
            do {
              if (plVar7[2] != 0) {
                FMemory::Free();
              }
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              TArray<FNamedInterfaceDef,FDefaultAllocator>::
              ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar7 + -3);
              plVar7 = plVar7 + 0xc;
              uVar9 = (int)uVar10 - 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 != 0);
          }
          if (local_88 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      lVar4 = FUN_14143d920();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((*(longlong *)param_1[10] != 0) && (lVar4 = FUN_1405ec200(param_2 + 0x120), lVar4 != 0))
        {
          lVar6 = FUN_1413c0f50();
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
            uVar5 = FUN_140c428a0(*(undefined8 *)param_1[10]);
            cVar2 = FUN_140e85cd0(uVar5,lVar4);
            if (cVar2 == '\0') {
              uVar5 = FUN_140c428a0(*(undefined8 *)param_1[10]);
              FUN_140e7ac10(uVar5,lVar4,1);
            }
          }
        }
        if (0 < *(int *)(param_2 + 0x148)) {
          FUN_14146d180(*(undefined8 *)param_1[0xb],*(undefined8 *)param_1[5]);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c31dd0 FUN_140c31dd0 body=196 status=ok
// SIG undefined FUN_140c31dd0(void)

uint FUN_140c31dd0(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar3 = 0;
  uVar4 = 0;
  pauVar2 = *(undefined1 (**) [16])*param_1;
  uVar5 = (ulonglong)*(int *)((undefined8 *)*param_1 + 1);
  if ((undefined1 (*) [16])(*pauVar2 + uVar5) < pauVar2) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    if (0x1f < uVar5) {
      auVar6 = ZEXT816(0);
      auVar7 = ZEXT816(0);
      do {
        uVar3 = uVar3 + 0x20;
        auVar6 = *pauVar2 | auVar6;
        pauVar1 = pauVar2 + 1;
        pauVar2 = pauVar2 + 2;
        auVar7 = *pauVar1 | auVar7;
      } while (uVar3 != (uVar5 & 0xffffffffffffffe0));
      auVar6 = auVar7 | auVar6 | (auVar7 | auVar6) >> 0x40;
      auVar6 = auVar6 | auVar6 >> 0x20;
      auVar6 = auVar6 | auVar6 >> 0x10;
      uVar4 = auVar6._0_4_ | auVar6._1_4_;
    }
    for (; uVar3 != uVar5; uVar3 = uVar3 + 1) {
      uVar4 = (uint)(byte)((byte)uVar4 | (*pauVar2)[0]);
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
    }
  }
  return uVar4 & 0xff;
}



// FUNCTION 140c320e0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AMagicLeapSharedWorldPlayerController::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FMemory::Free();
  }
  FUN_140c30b20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5e0);
  }
  return param_1;
}



// FUNCTION 140c32130 FUN_140c32130 body=52 status=ok
// SIG undefined FUN_140c32130(void)

undefined8 FUN_140c32130(undefined8 param_1,ulonglong param_2)

{
  FUN_1409c4bb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x22a0);
  }
  return param_1;
}



// FUNCTION 140c32170 FUN_140c32170 body=85 status=ok
// SIG undefined FUN_140c32170(void)

longlong FUN_140c32170(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x810) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x800);
  FUN_140bff2c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x820);
  }
  return param_1;
}



// FUNCTION 140c321d0 FUN_140c321d0 body=107 status=ok
// SIG undefined FUN_140c321d0(void)

longlong FUN_140c321d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
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
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 140c32240 FUN_140c32240 body=211 status=ok
// SIG undefined FUN_140c32240(void)

longlong FUN_140c32240(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x4f8);
  thunk_FUN_142478640(param_1 + 0x4ec);
  thunk_FUN_142478640(param_1 + 0x4e0);
  thunk_FUN_142478640(param_1 + 0x4d4);
  thunk_FUN_142478640(param_1 + 0x4c8);
  thunk_FUN_142478640(param_1 + 0x4bc);
  thunk_FUN_142478640(param_1 + 0x4b0);
  thunk_FUN_142478640(param_1 + 0x4a4);
  thunk_FUN_142478640(param_1 + 0x498);
  thunk_FUN_142478640(param_1 + 0x48c);
  thunk_FUN_142478640(param_1 + 0x480);
  thunk_FUN_142478640(param_1 + 0x474);
  thunk_FUN_142478640(param_1 + 0x468);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 140c32320 FUN_140c32320 body=119 status=ok
// SIG undefined FUN_140c32320(void)

longlong FUN_140c32320(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x4b0);
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 140c323a0 FUN_140c323a0 body=100 status=ok
// SIG undefined FUN_140c323a0(void)

undefined8 * FUN_140c323a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144354740;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140c32410 FUN_140c32410 body=73 status=ok
// SIG undefined FUN_140c32410(void)

longlong FUN_140c32410(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 140c32460 FUN_140c32460 body=221 status=ok
// SIG undefined FUN_140c32460(void)

longlong FUN_140c32460(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1c8);
  FRichCurve::~FRichCurve(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 140c32540 FUN_140c32540 body=121 status=ok
// SIG undefined FUN_140c32540(void)

longlong FUN_140c32540(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x1a0) = &PTR_FUN_1441b3948;
  FUN_140c30e80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 140c325c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FComponentPropertyWriter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140c30e80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 140c32600 FUN_140c32600 body=26 status=ok
// SIG undefined FUN_140c32600(void)

void FUN_140c32600(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c44470();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 140c32620 FUN_140c32620 body=639 status=ok
// SIG undefined FUN_140c32620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c32620(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  iVar3 = FUN_142235230();
  if ((iVar3 < 3) && (param_1[0xc5] != 0)) {
    lVar4 = FUN_142f71d80();
    for (lVar7 = param_1[0xc5]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar4) {
        if (param_1[0xc5] == 0) {
          return;
        }
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar6 = (longlong *)FUN_142f6c9f0(uVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        cVar2 = (**(code **)(*plVar6 + 0x700))(plVar6);
        if (cVar2 != '\0') {
          FUN_142f50b00(plVar6,param_1[0xc5],0,0);
          lVar7 = FUN_1422312c0(param_1);
          if (lVar7 == 0) {
            return;
          }
          lVar4 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return;
          }
          FUN_140ba81c0(lVar7);
          return;
        }
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar7 == 0) {
          return;
        }
        if (*(longlong *)(lVar7 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar7 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
        }
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          plVar6[2] = (longlong)FUN_140c32620;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar7;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_70 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        FUN_142880af0(uVar5,&local_88);
        if (local_28 != 0) {
          plVar8 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar8 = local_38;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0,0);
        if (lVar7 == 0) {
          return;
        }
        FMemory::Free(lVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c328a0 FUN_140c328a0 body=72 status=ok
// SIG undefined FUN_140c328a0(void)

void FUN_140c328a0(undefined8 param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,param_3);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140c328cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x280))(plVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c328db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x288))(plVar1);
  return;
}



// FUNCTION 140c328f0 FUN_140c328f0 body=145 status=ok
// SIG undefined FUN_140c328f0(void)

void FUN_140c328f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong local_18;
  undefined8 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  lVar4 = FUN_142f6c9f0(lVar4);
  *(undefined8 *)(param_1 + 0x7b8) = param_2;
  puVar5 = (undefined4 *)FGuid::NewGuid(&local_18);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)(param_1 + 0x7c0) = *puVar5;
  *(undefined4 *)(param_1 + 0x7c4) = uVar1;
  *(undefined4 *)(param_1 + 0x7c8) = uVar2;
  *(undefined4 *)(param_1 + 0x7cc) = uVar3;
  if (lVar4 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar6);
    FUN_142f64d20(lVar4,&local_18);
  }
  return;
}



// FUNCTION 140c32990 FUN_140c32990 body=246 status=ok
// SIG undefined FUN_140c32990(void)

void FUN_140c32990(longlong param_1,longlong param_2)

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
    FWeakObjectPtr::operator=(&local_48,param_1 + -0xd88);
    local_40 = *puVar1;
    local_28 = local_48;
    local_24 = local_44;
    local_20 = local_40;
    FUN_1430886e0(param_2,&local_28,0);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadEnded",1);
    FWeakObjectPtr::operator=(&local_38,param_1 + -0xd88);
    local_30 = *puVar1;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_1430886e0(param_2,&local_28,1);
  }
  return;
}



// FUNCTION 140c32a90 FUN_140c32a90 body=79 status=ok
// SIG undefined FUN_140c32a90(void)

void FUN_140c32a90(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    lVar1 = FUN_140e7e760(param_1 + 0x1518,param_3);
    if (lVar1 != 0) {
      uVar2 = FUN_142d52a20(lVar1);
      uVar2 = FArchive::operator<<(uVar2);
      FUN_142d55510(uVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140c32ae0 FUN_140c32ae0 body=1023 status=ok
// SIG undefined FUN_140c32ae0(void)

void FUN_140c32ae0(longlong *param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  ulonglong uVar18;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar6 = (**(code **)(param_1[0x1b0] + 0x18))(param_1 + 0x1b0);
    if (param_3 != '\0') {
      FUN_140c54860(param_1);
    }
    if ((param_4 != '\0') || (lVar6 != 0)) {
      uVar5 = 1;
      if ((longlong *)param_1[0x21b] != (longlong *)0x0) {
        uVar5 = (**(code **)(*(longlong *)param_1[0x21b] + 0x400))();
      }
      plVar12 = (longlong *)0x0;
      uVar18 = 0;
      local_50 = 0;
      local_48 = 0;
      cVar4 = FUN_143014080(&local_50,param_2,uVar5,param_1,0,0,0);
      if (cVar4 != '\0') {
        if (*(char *)((longlong)param_1 + 0x13c1) == '\0') {
          lVar11 = (longlong)(int)local_48 * 0x60 + local_50;
          if (local_50 != lVar11) {
            lVar8 = local_50 + 0x59;
            do {
              *(undefined2 *)(lVar8 + -1) = 0x100;
              lVar1 = lVar8 + 7;
              lVar8 = lVar8 + 0x60;
            } while (lVar1 != lVar11);
          }
        }
        local_40 = (longlong *)0x0;
        local_38 = 0;
        uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        FUN_143018ff0(&local_50,uVar7,&local_40,0);
        plVar2 = local_40 + (int)local_38;
        for (plVar17 = local_40; plVar17 != plVar2; plVar17 = plVar17 + 1) {
          plVar10 = (longlong *)*plVar17;
          plVar16 = plVar12;
          if (plVar10 == (longlong *)0x0) {
LAB_140c32c74:
            uVar7 = FUN_14301f8f0();
            lVar11 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar7);
            if ((lVar11 == 0) ||
               (((*(longlong *)(lVar11 + 0x208) == 0 ||
                 (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x208) + 0x1d8), lVar11 == 0)) ||
                (*(char *)(lVar11 + 0x38) != '\0')))) {
              if (lVar6 != 0) {
                (**(code **)(param_1[0x1b0] + 0x28))(param_1 + 0x1b0,plVar10,1,1);
              }
              goto LAB_140c32e38;
            }
            uVar13 = 0;
            if (lVar6 == 0) {
              lVar8 = FUN_140e80e00(param_1 + 0x286,lVar11);
              if (lVar8 != 0) {
                uVar18 = uVar18 & 0xffffffffffffff00;
                FUN_140e7b7b0(param_1 + 0x286,lVar8,plVar10,1,uVar18);
              }
            }
            else {
              uVar18 = CONCAT44((int)(uVar18 >> 0x20),1);
              FUN_142fe3d60(lVar6,local_res8,lVar11,plVar10,uVar18,0,0,1,0,0);
            }
            lVar8 = FUN_140c46b40(param_1);
            if (lVar11 == lVar8) {
              plVar14 = (longlong *)param_1[0x3a3];
              if ((plVar14 == (longlong *)0x0) ||
                 (plVar9 = plVar14, (longlong *)plVar14[0x39a] != param_1)) {
                plVar9 = param_1;
              }
              if (plVar9 != (longlong *)0x0) {
                if ((plVar14 == (longlong *)0x0) || ((longlong *)plVar14[0x39a] != param_1)) {
                  plVar14 = param_1;
                }
                lVar11 = FUN_140e7ef10(plVar14 + 0x2a3,plVar10);
                if (lVar11 == 0) {
                  plVar10 = plVar12;
                  plVar14 = plVar12;
                  if (0 < (int)param_1[0x27e]) {
                    do {
                      uVar13 = (uint)plVar10;
                      if (*(longlong *)(param_1[0x27d] + (longlong)plVar14 * 8) != 0) {
                        plVar10 = (longlong *)param_1[0x3a3];
                        if ((plVar10 == (longlong *)0x0) || ((longlong *)plVar10[0x39a] != param_1))
                        {
                          plVar10 = param_1;
                        }
                        lVar11 = FUN_140e83520(plVar10 + 0x2a3);
                        if (lVar11 == 0) break;
                      }
                      uVar13 = uVar13 + 1;
                      plVar14 = (longlong *)((longlong)plVar14 + 1);
                      plVar10 = (longlong *)(ulonglong)uVar13;
                    } while ((int)uVar13 < (int)param_1[0x27e]);
                    if ((longlong)plVar14 < 0) goto LAB_140c32e45;
                  }
                  if ((int)uVar13 < (int)param_1[0x27e]) {
                    uVar18 = uVar18 & 0xffffffffffffff00;
                    FUN_140c57820(param_1,plVar16,
                                  *(undefined8 *)(param_1[0x27d] + (longlong)plVar14 * 8),0,uVar18);
                  }
                }
              }
            }
          }
          else {
            lVar11 = FUN_1430b3b80();
            if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                lVar11 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) || (plVar16 = plVar10, (char)param_1[0x443] == '\0')) goto LAB_140c32c74;
LAB_140c32e38:
            FUN_142227350(plVar10,0,1);
          }
LAB_140c32e45:
        }
        if (local_40 != (longlong *)0x0) {
          FMemory::Free(local_40);
        }
      }
      if ((int)local_48 != 0) {
        plVar12 = (longlong *)(local_50 + 0x38);
        iVar15 = (int)local_48;
        do {
          if (plVar12[2] != 0) {
            FMemory::Free();
          }
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar12 + -3);
          plVar12 = plVar12 + 0xc;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140c32ee0 FUN_140c32ee0 body=105 status=ok
// SIG undefined FUN_140c32ee0(void)

void FUN_140c32ee0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 local_98 [120];
  longlong local_20;
  
  uVar1 = FUN_142fde910(local_98,param_2,0x3f800000);
  FUN_140c32ae0(param_1,uVar1,param_3,param_4);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c32f50 FUN_140c32f50 body=235 status=ok
// SIG undefined FUN_140c32f50(void)

void FUN_140c32f50(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  undefined1 **ppuStack_30;
  undefined1 *local_28;
  longlong local_20;
  undefined1 local_18;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_2 != (longlong *)0x0)) {
    local_48 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x280))(param_2,&local_48);
    local_28 = local_res8;
    ppuStack_30 = &local_28;
    local_38 = FUN_140c39460;
    local_res8[0] = param_3;
    local_20 = param_1;
    local_18 = param_4;
    FUN_142ff36a0(&local_48,param_1,&local_38);
    if ((int)local_40 != 0) {
      plVar1 = (longlong *)(local_48 + 0x78);
      iVar2 = (int)local_40;
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 0x11;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c33040 FUN_140c33040 body=126 status=ok
// SIG undefined FUN_140c33040(void)

void FUN_140c33040(undefined8 param_1,undefined8 param_2,char param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 local_res20 [8];
  code *local_38;
  undefined1 **ppuStack_30;
  undefined1 *local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_28 = local_res20;
  local_18 = param_5;
  ppuStack_30 = &local_28;
  local_res20[0] = param_4;
  local_20 = param_1;
  if (param_3 != '\0') {
    local_38 = (code *)&LAB_140c39490;
    FUN_142ff3860();
    return;
  }
  local_38 = FUN_140c39460;
  FUN_142ff36a0(param_2,param_1,&local_38);
  return;
}



// FUNCTION 140c330c0 FUN_140c330c0 body=120 status=ok
// SIG undefined FUN_140c330c0(void)

int FUN_140c330c0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_1);
  if (param_2 != 0) {
    lVar2 = (longlong)puVar3 + 0x1c;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 6;
      *(undefined1 *)(lVar2 + -0x14) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined2 *)(lVar2 + 0xc) = 0;
      *(undefined1 *)(lVar2 + 0xe) = 0;
      lVar2 = lVar2 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 140c33140 FUN_140c33140 body=64 status=ok
// SIG undefined FUN_140c33140(void)

void FUN_140c33140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0xe78) != 0) {
    *param_4 = 1;
    if (*(longlong *)(param_1 + 0xe78) != 0) {
      cVar1 = FUN_140a7f0c0();
      if (cVar1 != '\0') {
        *param_4 = 0;
      }
    }
  }
  return;
}



// FUNCTION 140c33180 FUN_140c33180 body=44 status=ok
// SIG undefined FUN_140c33180(void)

void FUN_140c33180(longlong param_1)

{
  char cVar1;
  undefined1 *in_stack_00000028;
  
  *in_stack_00000028 = 1;
  if (*(longlong *)(param_1 + 0xe78) != 0) {
    cVar1 = FUN_140a7f0c0();
    if (cVar1 != '\0') {
      *in_stack_00000028 = 0;
    }
  }
  return;
}



// FUNCTION 140c331b0 FUN_140c331b0 body=83 status=ok
// SIG undefined FUN_140c331b0(void)

void FUN_140c331b0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  local_48 = param_2[4];
  uStack_40 = param_2[5];
  local_38 = param_2[6];
  uStack_30 = param_2[7];
  local_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_20 = *(undefined4 *)(param_2 + 9);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_18 = param_2[10];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1d40,&local_68);
  return;
}



// FUNCTION 140c33210 FUN_140c33210 body=410 status=ok
// SIG undefined FUN_140c33210(void)

void FUN_140c33210(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  undefined8 local_10;
  
  lVar3 = DAT_146b17150;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (DAT_146b17150 == 0) {
    return;
  }
  uVar2 = AArchVisCharacter::StaticClass();
  lVar3 = FUN_1424723e0(lVar3 + 0xcf8,param_2,uVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = AArchVisCharacter::StaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if (*(longlong *)(lVar3 + 400) == 0) {
    FUN_142382f60(lVar3,param_2[0x2d],&DAT_146532184,0);
  }
  uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  FUN_14234b270(lVar3,uVar2);
  *(undefined8 *)(lVar3 + 0x7a8) = *(undefined8 *)(param_1 + 0x7a8);
  lVar4 = *(longlong *)(param_1 + 0x710);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (lVar4 == 0) goto LAB_140c3334b;
    lVar5 = USoCharacterMovementComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar4 = *(longlong *)(lVar4 + 0x660), lVar4 == 0)) goto LAB_140c3334b;
  }
  *(longlong *)(lVar3 + 0x710) = lVar4;
LAB_140c3334b:
  uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  lVar4 = FUN_142f6c9f0(uVar2);
  if (lVar4 != 0) {
    local_10 = 0;
    local_18 = lVar3;
    uVar2 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    FUN_142f690f0(lVar4,&local_18,0);
  }
  return;
}



// FUNCTION 140c333b0 FUN_140c333b0 body=253 status=ok
// SIG undefined FUN_140c333b0(void)

void FUN_140c333b0(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,char param_5
                  )

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [12];
  undefined1 local_2c [36];
  
  plVar1 = (longlong *)(param_1 + -0xd88);
  (**(code **)(*plVar1 + 0x820))(plVar1,param_2,param_5);
  if ((param_5 == '\0') && (*(longlong *)(param_1 + -0x440) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x778))(plVar1);
    if (cVar2 != '\0') {
      uVar3 = FRotator::Vector(param_3,local_38);
      uVar4 = (**(code **)(*plVar1 + 0x798))(plVar1,local_2c);
      FRotator::UnrotateVector(uVar4,local_48,uVar3);
      FVector::Rotation(local_48,&local_58);
      local_58 = local_58 * param_4;
      local_54 = local_54 * param_4;
      local_50 = 0;
      FUN_142cd0ed0(*(undefined8 *)(param_1 + -0x440),&local_58);
    }
  }
  return;
}



// FUNCTION 140c334b0 FUN_140c334b0 body=317 status=ok
// SIG undefined FUN_140c334b0(void)

void FUN_140c334b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  void *pvVar4;
  void **ppvVar5;
  longlong lVar6;
  int iVar7;
  void *local_28;
  int local_20;
  int local_1c;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar2);
  }
  ppvVar5 = (void **)((longlong)iVar2 * 0x20 + *param_1);
  if (ppvVar5 != (void **)0x0) {
    FString::FString(ppvVar5,param_2);
    FString::FString(ppvVar5 + 2,param_3);
    local_20 = *(int *)(ppvVar5 + 1);
    lVar6 = (longlong)local_20;
    _Src = *ppvVar5;
    local_28 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_28,(3 - (uint)(local_20 != 0)) + local_20,0);
    pvVar4 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar6 * 2);
    iVar2 = local_20;
    lVar6 = (longlong)local_20;
    local_20 = (3 - (uint)(local_20 != 0)) + local_20;
    iVar7 = local_1c;
    if (local_1c < local_20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar2);
      pvVar4 = local_28;
      iVar7 = local_1c;
    }
    iVar3 = local_20;
    puVar1 = (undefined4 *)((longlong)pvVar4 + (lVar6 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x20003a;
    *(undefined2 *)(puVar1 + 1) = 0;
    if (ppvVar5 == &local_28) {
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
    }
    else {
      if (*ppvVar5 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar5 = pvVar4;
      *(int *)(ppvVar5 + 1) = iVar3;
      *(int *)((longlong)ppvVar5 + 0xc) = iVar7;
    }
  }
  return;
}



// FUNCTION 140c335f0 AddUninitialized body=214 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + (longlong)iVar4 * 0x14;
  return param_2;
}



// FUNCTION 140c336d0 FUN_140c336d0 body=1052 status=ok
// SIG undefined FUN_140c336d0(void)

void FUN_140c336d0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,uint param_6,uint param_7)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 local_res20;
  undefined1 uVar11;
  
  if (param_4 != (longlong *)0x0) {
    uVar4 = FUN_14142bde0();
    lVar5 = (**(code **)(*param_4 + 0x628))(param_4,uVar4);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x348) != '\0')) {
      FUN_140b3fc60(lVar5);
    }
  }
  uVar3 = param_6 >> 2;
  bVar10 = (byte)(param_6 >> 1) & 1;
  if (param_4 == (longlong *)0x0) {
LAB_140c33793:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    plVar8 = param_4;
    if (!bVar7) goto LAB_140c33793;
  }
  lVar5 = *(longlong *)(param_1 + 0x1420);
  if (lVar5 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
      lVar5 = *(longlong *)(param_1 + 0x1420);
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (lVar6 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2a8), lVar6 != 0)) {
      *(longlong *)(param_1 + 0x1420) = lVar6;
      lVar5 = lVar6;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_140c475f0(param_1,plVar8,bVar10);
  }
  if (*(char *)(param_1 + 0x128) == '\x03') {
    cVar2 = FUN_1404724a0(lVar5,param_3);
    if (cVar2 != '\0') {
      cVar2 = FUN_140c39630(param_1,param_4);
      if (cVar2 == '\0') {
        return;
      }
      lVar5 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
      if (param_2 != lVar5) {
        return;
      }
      local_res20 = 0;
      cVar2 = FUN_140e96340(param_1 + 0x1518);
      if ((cVar2 != '\0') && (lVar5 = FUN_140e7eef0(param_1 + 0x1518,0), lVar5 != 0)) {
        local_res20 = FUN_140e83520(param_1 + 0x1518,lVar5);
      }
      bVar7 = false;
      if ((*(char *)(param_1 + 0x1123) != '\0') && (param_4 != (longlong *)0x0)) {
        uVar9 = (ulonglong)(int)param_7;
        plVar8 = (longlong *)(param_1 + 0xd88);
        lVar5 = (**(code **)(*plVar8 + 0xf0))(plVar8,uVar9 & 0xff);
        if (lVar5 != 0) {
          lVar5 = FUN_140e810a0(param_1 + 0x1518,param_7 & 0xff);
          if (lVar5 == 0) {
            uVar4 = (**(code **)(*plVar8 + 0xf0))(plVar8,uVar9 & 0xff);
            cVar2 = FUN_14307eb90(uVar4);
            if (cVar2 != '\0') goto LAB_140c33929;
          }
          if ((param_6 & 1) == 0) goto LAB_140c338fc;
        }
LAB_140c33929:
        lVar5 = FUN_1430b3b80();
        if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if ((param_6 & 1) == 0) {
LAB_140c339ac:
            if ((uVar3 & 1) == 0) {
              uVar4 = FUN_140c428a0(param_1);
              FUN_140e7b630(uVar4,param_3,param_4,1,(byte)uVar3 & 1);
            }
          }
          else {
            uVar4 = FUN_140c428a0(param_1);
            lVar5 = FUN_140e80e00(uVar4,param_3);
            if (lVar5 != 0) goto LAB_140c339ac;
            uVar4 = FUN_140c428a0(param_1);
            FUN_140e949c0(uVar4,local_res20,1,param_4);
          }
          if (((int)param_7 < 0) || (*(int *)(param_1 + 0x1520) <= (int)param_7)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            uVar4 = *(undefined8 *)(uVar9 * 0xf8 + *(longlong *)(param_1 + 0x1518));
          }
          else {
            uVar4 = 0;
          }
          FUN_140c57820(param_1,param_4,uVar4,bVar10 == 1,bVar10 * '\x02');
          bVar7 = true;
        }
      }
LAB_140c338fc:
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (bVar7) {
        return;
      }
      uVar4 = FUN_140c428a0(param_1);
      uVar11 = 0;
      goto LAB_140c33ac6;
    }
  }
  else if (((plVar8 != (longlong *)0x0) &&
           (cVar2 = FUN_140e7ef80(param_1 + 0x1518,plVar8), cVar2 == '\0')) &&
          (lVar6 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))(), lVar6 != 0)) {
    FUN_1430160e0(lVar6,lVar5,plVar8);
  }
  if (param_4 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  uVar4 = FUN_140c41f70(param_1);
  cVar2 = FUN_1404724a0(uVar4,param_3);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = FUN_140c39630(param_1,param_4);
  if (cVar2 == '\0') {
    return;
  }
  uVar4 = FUN_140c428a0(param_1);
  lVar5 = FUN_140e80e00(uVar4,param_3);
  if ((param_6 & 1) == 0) {
    if (lVar5 == 0) {
      return;
    }
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((param_6 >> 3 & 1) != 0) {
      return;
    }
  }
  uVar4 = FUN_140c428a0(param_1);
  uVar11 = 1;
LAB_140c33ac6:
  FUN_140e7b630(uVar4,param_3,param_4,1,uVar11);
  return;
}



// FUNCTION 140c33af0 FUN_140c33af0 body=89 status=ok
// SIG undefined FUN_140c33af0(void)

ulonglong FUN_140c33af0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140e96340(param_1 + 0x790);
  if ((char)uVar2 != '\0') {
    lVar3 = FUN_140e7eef0(param_1 + 0x790,0);
    uVar2 = 0;
    if ((lVar3 != 0) && (uVar2 = 0, *(longlong *)(lVar3 + 0x40) != 0)) {
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 0x30);
      *param_2 = uVar1;
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140c33b50 FUN_140c33b50 body=647 status=ok
// SIG undefined FUN_140c33b50(void)

void FUN_140c33b50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar6 = FUN_1422312c0();
  if (lVar6 == 0) {
LAB_140c33bb5:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140c33bb5;
  }
  if (param_2 != 0) {
    lVar7 = FUN_142f83290();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140c33bf6;
  }
  param_2 = 0;
LAB_140c33bf6:
  if ((lVar6 != 0) && (param_2 != 0)) {
    param_2 = param_2 + 0x48;
    cVar4 = FText::IsEmpty(param_2);
    if (cVar4 == '\0') {
      puVar8 = (undefined8 *)FText::ToString(param_2);
      local_68 = (undefined2 *)0x0;
      local_60 = *(int *)(puVar8 + 1);
      lVar7 = (longlong)local_60;
      _Src = (void *)*puVar8;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
        _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar7 * 2);
      }
      iVar5 = FUN_141592950(&local_68,&DAT_144340784,1,0,0xffffffff);
      if ((iVar5 == -1) || (*(longlong *)(param_1 + 0x908) == 0)) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar6 + 0x9d8,param_2);
      }
      else {
        puVar10 = &DAT_143f3eda8;
        puVar11 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar11 = local_68;
        }
        uVar9 = FUN_142dd0500(*(longlong *)(param_1 + 0x908),local_48);
        puVar8 = (undefined8 *)FText::ToString(uVar9);
        if (*(int *)(puVar8 + 1) != 0) {
          puVar10 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(&local_58,puVar11,puVar10);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_68 = local_58;
        local_60 = (int)local_50;
        local_5c = local_50._4_4_;
        local_50 = 0;
        local_58 = (undefined2 *)0x0;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        uVar9 = FText::FromString(local_30,&local_68);
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar6 + 0x9d8,uVar9);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar2 = (int *)((longlong)local_28 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_28 + 8))(local_28,1);
            }
          }
        }
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140c33de0 FUN_140c33de0 body=129 status=ok
// SIG undefined FUN_140c33de0(void)

void FUN_140c33de0(longlong param_1,undefined4 param_2,float param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x498);
  *(int *)(param_1 + 0x498) = iVar2 + 1;
  if (*(int *)(param_1 + 0x49c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x490),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x490);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x14);
  *puVar1 = CONCAT44(param_3 * 0.1,param_2);
  puVar1[1] = CONCAT44(param_3 * 0.1,param_3 * 0.8);
  *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14) = 0;
  return;
}



// FUNCTION 140c33e70 FUN_140c33e70 body=253 status=ok
// SIG undefined FUN_140c33e70(void)

void FUN_140c33e70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x2220) == 0) {
    return;
  }
  lVar3 = USafeZone::GetPrivateStaticClass();
  lVar1 = *(longlong *)(param_1 + 0x2220);
  lVar4 = lVar1;
  if (lVar1 == 0) {
    return;
  }
  while (lVar4 != lVar3) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return;
    }
  }
  if (lVar1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0xe60);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe58) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x2220);
  *(undefined8 *)(lVar1 + 0x220) = uVar2;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14071ba40(lVar1,0,uVar2,&local_18,0);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140c33f56;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140c33f56:
  FUN_1407705f0(*(undefined8 *)(param_1 + 0xe58));
  return;
}



// FUNCTION 140c33f70 FUN_140c33f70 body=1064 status=ok
// SIG undefined FUN_140c33f70(void)

void FUN_140c33f70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  byte *pbVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong local_res10;
  longlong *local_res18;
  uint local_48;
  char local_44;
  longlong local_40;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1e9) != '\0') {
    return;
  }
  plVar17 = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0x1e9) = 1;
  iVar7 = *(int *)(param_2 + 0x158);
  plVar21 = (longlong *)(param_1 + 0x188);
  iVar3 = *(int *)(param_1 + 400);
  if (iVar3 < iVar7) {
    *(int *)(param_1 + 400) = iVar7;
    iVar14 = iVar7 - iVar3;
    if (*(int *)(param_1 + 0x194) < iVar7) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar21,iVar3);
    }
    puVar1 = (undefined8 *)(*plVar21 + (longlong)iVar3 * 0x18);
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
    }
  }
  else if (iVar7 < iVar3) {
    TArray<FGQuestDatumList,FDefaultAllocator>::RemoveAtImpl(plVar21,iVar7,iVar3 - iVar7,1);
  }
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x144);
  *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_2 + 0x148);
  plVar15 = plVar17;
  if (0 < *(int *)(param_1 + 400)) {
    do {
      iVar7 = (int)plVar15;
      FUN_140c598a0((longlong)iVar7 * 0x38 + *(longlong *)(param_2 + 0x150),
                    *plVar21 + (longlong)iVar7 * 0x18);
      plVar15 = (longlong *)(ulonglong)(iVar7 + 1U);
    } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 400));
  }
  plVar15 = *(longlong **)(param_1 + 0x118);
  if (plVar15 == (longlong *)0x0) goto LAB_140c342e2;
  lVar8 = FUN_14145f370();
  if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140c342e2;
  if (((*(uint *)((longlong)plVar15 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar6 = (**(code **)(*plVar15 + 0x768))(plVar15), cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140c342e2;
  lVar8 = FUN_1422312c0(plVar15);
  if (lVar8 == 0) {
LAB_140c34136:
    local_res10 = 0;
  }
  else {
    local_res10 = lVar8;
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140c34136;
    *(undefined1 *)(lVar8 + 0x9b8) = 1;
  }
  plVar21 = (longlong *)*plVar21;
  local_res18 = plVar21 + (longlong)*(int *)(param_1 + 400) * 3;
  if (plVar21 != local_res18) {
    do {
      plVar18 = (longlong *)*plVar21;
      plVar20 = plVar18 + (longlong)(int)plVar21[1] * 6;
      for (; plVar18 != plVar20; plVar18 = plVar18 + 6) {
        if (((char)plVar18[1] == '\x02') && (*plVar18 != 0)) {
          lVar10 = FUN_142f71d80();
          lVar8 = *plVar18;
          lVar9 = lVar8;
          if (lVar8 != 0) {
LAB_140c341a7:
            if (lVar9 != lVar10) goto code_r0x000140c341ac;
            if (lVar8 != 0) {
              plVar11 = (longlong *)FUN_142f71d80();
              for (plVar4 = (longlong *)*plVar18;
                  (plVar19 = plVar17, plVar4 != (longlong *)0x0 &&
                  (plVar19 = (longlong *)*plVar18, plVar4 != plVar11));
                  plVar4 = (longlong *)plVar4[6]) {
              }
              lVar8 = plVar19[0x1f];
              if (lVar8 == 0) {
                (**(code **)(*plVar19 + 0x368))();
                lVar8 = plVar19[0x1f];
                if (lVar8 != 0) goto LAB_140c3420c;
              }
              else {
LAB_140c3420c:
                lVar9 = FUN_142f71d80();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if ((bVar5) && (plVar4 = *(longlong **)(lVar8 + 0x188), plVar4 != (longlong *)0x0))
                {
                  lVar8 = FUN_14143d920();
                  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                      lVar8 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  plVar11 = plVar17;
                  if (bVar5) {
                    plVar11 = plVar4;
                  }
                  lVar8 = plVar11[0x29];
                  if (0 < (int)lVar8) {
                    uVar12 = FUN_142d80d40();
                    FUN_142d94090(uVar12,plVar15,(int)lVar8);
                  }
                }
              }
            }
          }
        }
LAB_140c342a6:
      }
      plVar21 = plVar21 + 3;
    } while (plVar21 != local_res18);
  }
  if (local_res10 != 0) {
    *(undefined1 *)(local_res10 + 0x9b8) = 0;
  }
LAB_140c342e2:
  iVar7 = FUN_14233f450(param_1);
  if (iVar7 == 3) {
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    pbVar13 = (byte *)FUN_140cb6000(&local_res10,lVar8);
    bVar2 = *pbVar13;
    if (((bVar2 != 0) && (cVar6 = FUN_140596bf0(lVar8), cVar6 != '\0')) &&
       (0 < *(int *)(param_1 + 400))) {
      do {
        local_48 = (uint)bVar2;
        lVar8 = *(longlong *)(param_1 + 0x188) + (longlong)(int)plVar17 * 0x18;
        local_40 = lVar8 + 0x10;
        local_44 = cVar6;
        FUN_140c2dad0(lVar8,&local_48);
        uVar16 = (int)plVar17 + 1;
        plVar17 = (longlong *)(ulonglong)uVar16;
      } while ((int)uVar16 < *(int *)(param_1 + 400));
    }
  }
  FUN_140c48500(param_1);
  return;
code_r0x000140c341ac:
  lVar9 = *(longlong *)(lVar9 + 0x30);
  if (lVar9 == 0) goto LAB_140c342a6;
  goto LAB_140c341a7;
}



// FUNCTION 140c343c0 FUN_140c343c0 body=8 status=ok
// SIG undefined FUN_140c343c0(void)

undefined1 FUN_140c343c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1ccd);
}



// FUNCTION 140c343d0 FUN_140c343d0 body=19 status=ok
// SIG undefined FUN_140c343d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140c343d0(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulonglong in_RAX;
  float fVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_238 [32];
  undefined4 *puStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  undefined1 *apuStack_1b8 [2];
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  undefined4 uStack_178;
  undefined1 auStack_168 [12];
  float fStack_15c;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  
  plVar2 = *(longlong **)(param_1 + 0xe68);
  if (plVar2 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar5 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((((*(int *)((longlong)plVar2 + 0x2ac4) != -1) ||
       (uStack_58 = uVar5, uVar5 = FUN_140a5abf0(), (char)uVar5 == '\0')) ||
      (uVar5 = FUN_142cf3980(plVar2), (char)uVar5 == '\0')) || (plVar2[0x56f] == 0)) {
LAB_140a68840:
    return uVar5 & 0xffffffffffffff00;
  }
  if (plVar2[0x24] == 0) {
    lVar6 = FUN_1423407b0(plVar2);
    uVar5 = 0;
    if (lVar6 == 0) goto LAB_140a68840;
  }
  lVar6 = plVar2[0x52f];
  uVar5 = 0;
  if (lVar6 == 0) goto LAB_140a68840;
  pfVar10 = *(float **)(lVar6 + 0x30);
  pfVar7 = pfVar10 + (longlong)*(int *)(lVar6 + 0x38) * 10;
  fVar11 = 0.0;
  while (fVar14 = fVar11, pfVar10 != pfVar7) {
    fVar11 = *pfVar10;
    pfVar10 = pfVar10 + 10;
    if (fVar11 <= fVar14) {
      fVar11 = fVar14;
    }
  }
  lVar6 = plVar2[0x2f];
  fVar14 = fVar14 + 1.0;
  if (lVar6 == 0) {
    uStack_1e8._0_4_ = 0x7f7fffff;
    uStack_1e8._4_4_ = 0x7f7fffff;
    fStack_1e0 = 3.4028235e+38;
  }
  else {
    uStack_1e8._0_4_ = *(undefined4 *)(lVar6 + 0x220);
    uStack_1e8._4_4_ = *(undefined4 *)(lVar6 + 0x224);
    fStack_1e0 = *(float *)(lVar6 + 0x228);
  }
  fVar9 = 0.0;
  fStack_1c0 = fStack_1e0;
  uStack_1d4 = uStack_1e8._4_4_;
  fStack_1d0 = fStack_1e0 - fVar14;
  uStack_1d8 = (undefined4)uStack_1e8;
  uStack_1c8 = (undefined4)uStack_1e8;
  uStack_1c4 = uStack_1e8._4_4_;
  uStack_d0 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_c8 = 0x10000;
  uStack_c0 = 0;
  uStack_1e8 = (longlong *)0x0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_b4 = 0x101;
  uStack_bc = 0;
  uStack_c2 = 0;
  uStack_b8 = 0;
  FCollisionQueryParams::AddIgnoredActor(&uStack_d8);
  _guard_xfg_dispatch_icall_nop(auStack_168,0,0x90);
  lVar6 = plVar2[0x24];
  fVar11 = *(float *)((longlong)plVar2 + 0x2984);
  fStack_15c = 1.0;
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(plVar2);
  }
  uStack_208 = FUN_14233f510(plVar2,&uStack_1e8,0,0);
  fVar12 = 2.8026e-45;
  puStack_1f8 = &DAT_146aefe68;
  puStack_200 = &uStack_d8;
  uStack_210 = 2;
  puStack_218 = &DAT_1464aa810;
  cVar3 = UWorld::SweepSingleByChannel(lVar6,auStack_168,&uStack_1c8,&uStack_1d8);
  if (cVar3 == '\0') {
LAB_140a68692:
    if (0.0001 < fVar11) {
      fVar14 = fVar14 / fVar11;
    }
    lVar6 = plVar2[0x52f];
    fVar11 = -NAN;
    fVar13 = -1.0;
    iVar4 = *(int *)(lVar6 + 0x38);
    if (3 < iVar4) {
      pfVar7 = (float *)(*(longlong *)(lVar6 + 0x30) + 0x50);
      do {
        fVar1 = pfVar7[-0x14];
        if ((fVar1 <= fVar14) && (fVar13 < fVar1)) {
          fVar13 = fVar1;
          fVar11 = fVar9;
        }
        fVar1 = pfVar7[-10];
        if ((fVar1 <= fVar14) && (fVar13 < fVar1)) {
          fVar11 = (float)((int)fVar12 + -1);
          fVar13 = fVar1;
        }
        fVar1 = *pfVar7;
        if ((fVar1 <= fVar14) && (fVar13 < fVar1)) {
          fVar13 = fVar1;
          fVar11 = fVar12;
        }
        fVar1 = pfVar7[10];
        if ((fVar1 <= fVar14) && (fVar13 < fVar1)) {
          fVar11 = (float)((int)fVar12 + 1);
          fVar13 = fVar1;
        }
        pfVar7 = pfVar7 + 0x28;
        fVar9 = (float)((int)fVar9 + 4);
        fVar12 = (float)((int)fVar12 + 4);
      } while ((int)fVar9 < iVar4 + -3);
    }
    if ((int)fVar9 < iVar4) {
      pfVar7 = (float *)(*(longlong *)(lVar6 + 0x30) + (longlong)(int)fVar9 * 0x28);
      do {
        fVar12 = *pfVar7;
        if ((fVar12 <= fVar14) && (fVar13 < fVar12)) {
          fVar13 = fVar12;
          fVar11 = fVar9;
        }
        pfVar7 = pfVar7 + 10;
        fVar9 = (float)((int)fVar9 + 1);
      } while ((int)fVar9 < iVar4);
    }
    if (((-1 < (int)fVar11) && ((int)fVar11 < iVar4)) &&
       (cVar3 = FUN_140a580c0(plVar2,fVar11), cVar3 != '\0')) {
      iVar4 = FUN_14233f450(plVar2);
      if (iVar4 < 3) {
        (**(code **)(*plVar2 + 0xa98))(plVar2);
        uStack_188 = 0;
        uStack_178 = 0;
        uStack_1e8 = plVar2;
        fStack_1e0 = fVar11;
        puVar8 = (undefined8 *)FUN_140438ef0(0x18,auStack_1a8);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_1e8;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_1e8._4_4_;
          *(float *)(puVar8 + 2) = fStack_1e0;
          *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_1dc;
        }
        apuStack_1b8[0] = &LAB_140a5a460;
        FUN_14234b4d0(plVar2,apuStack_1b8);
      }
      uVar5 = 1;
      goto LAB_140a687e8;
    }
  }
  else {
    fVar14 = fStack_15c * fVar14;
    pfVar10 = *(float **)(plVar2[0x52f] + 0x30);
    pfVar7 = pfVar10 + (longlong)*(int *)(plVar2[0x52f] + 0x38) * 10;
    fVar13 = 3.4028235e+38;
    while (fVar1 = fVar13, pfVar10 != pfVar7) {
      fVar13 = *pfVar10;
      pfVar10 = pfVar10 + 10;
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
    }
    if (fVar1 * fVar11 <= fVar14) goto LAB_140a68692;
  }
  uVar5 = 0;
LAB_140a687e8:
  if (lStack_70 != 0) {
    FMemory::Free();
  }
  if (lStack_90 == 0) {
    return uVar5;
  }
  FMemory::Free();
  return uVar5;
}



// FUNCTION 140c343f0 FUN_140c343f0 body=3137 status=ok
// SIG undefined FUN_140c343f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c343f0(longlong *param_1)

{
  char *pcVar1;
  float *pfVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  char *pcVar18;
  longlong lVar19;
  longlong **pplVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_218 [32];
  int local_1f8 [2];
  longlong *local_1f0;
  longlong *local_1e8;
  longlong **local_1e0;
  longlong *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  int local_1a0 [2];
  longlong **local_198;
  undefined8 local_190;
  float local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  longlong **local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  float local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_100;
  uint local_f8 [4];
  uint *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if (((param_1[0x8d] != 0) && (*(longlong *)(param_1[0x8d] + 0x30) != 0)) &&
     (local_1f0 = param_1, lVar10 = (**(code **)(*param_1 + 0x148))(), lVar10 != 0)) {
    fVar28 = *(float *)(lVar10 + 0x790);
    local_108 = 0;
    local_100 = 0;
    local_e8 = (uint *)0x0;
    local_e0 = 0;
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    UWorld::GetPlayerControllerIterator(lVar10,&local_1d8);
    while( true ) {
      uVar22 = 0;
      if ((local_1d0 < 0) || ((int)local_1d8[1] <= local_1d0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      local_1e8 = (longlong *)FWeakObjectPtr::Get();
      if (local_1e8 != (longlong *)0x0) {
        local_1e0 = &local_1e8;
        FUN_140747840(&local_108,local_1f8,&local_1e0,0);
        *(undefined4 *)(local_108 + 8 + (longlong)local_1f8[0] * 0x18) = 0;
        lVar10 = local_1e8[0x91];
        if (lVar10 != 0) {
          lVar11 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar11 = FUN_142dddd00(), lVar11 != 0)) {
            plVar12 = (longlong *)FUN_142dd0650();
            local_1e0 = (longlong **)*plVar12;
            pplVar20 = local_1e0 + (int)plVar12[1];
            local_198 = pplVar20;
            if (local_1e0 != pplVar20) {
              do {
                plVar12 = *local_1e0;
                if (((plVar12 != (longlong *)0x0) && ((longlong *)plVar12[0x23] != (longlong *)0x0))
                   && (lVar11 = (**(code **)(*(longlong *)plVar12[0x23] + 0x678))(), lVar11 != 0)) {
                  lVar13 = FUN_1413f82e0();
                  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (bVar5) {
                    uVar22 = (ulonglong)(plVar12[0xea7] != 0) - 1 & (ulonglong)(plVar12 + 0x67) |
                             plVar12[0xea7];
                    uVar25 = (longlong)(int)plVar12[0xea8] * 0x390 + uVar22;
                    for (; uVar22 != uVar25; uVar22 = uVar22 + 0x390) {
                      cVar8 = FUN_142dd3e20(uVar22,lVar10);
                      plVar12 = param_1;
                      if ((cVar8 != '\0') && (*(char *)(uVar22 + 0x380) == '\x02')) {
                        plVar14 = param_1 + 0x90;
                        lVar13 = *plVar14;
                        lVar19 = (longlong)(int)param_1[0x91] * 0x1c + lVar13;
                        for (; lVar13 != lVar19; lVar13 = lVar13 + 0x1c) {
                          cVar8 = FUN_14058c1e0(lVar13,lVar11);
                          if (cVar8 != '\0') {
                            cVar8 = FUN_142dd38f0(uVar22);
                            if (cVar8 != '\0') {
                              *(float *)(lVar13 + 0x14) = fVar28;
                              *(undefined1 *)(lVar13 + 0x18) = 1;
                            }
                            FWeakObjectPtr::operator=(lVar13 + 8,lVar10);
                            plVar12 = local_1f0;
                            goto LAB_140c347b1;
                          }
                        }
                        cVar8 = FUN_142dd38f0();
                        plVar12 = local_1f0;
                        if (cVar8 != '\0') {
                          fVar29 = *(float *)(lVar11 + 0x113c);
                          lVar13 = FRuntimeFloatCurve::GetRichCurve
                                             (*(longlong *)(local_1f0[0x8d] + 0x30) + 0x140);
                          if (((lVar13 != 0) && (*(longlong **)(lVar10 + 0x10d8) != (longlong *)0x0)
                              ) && (*(longlong *)(lVar11 + 0x10d8) != 0)) {
                            (**(code **)(**(longlong **)(lVar10 + 0x10d8) + 0x408))();
                            (**(code **)(**(longlong **)(lVar11 + 0x10d8) + 0x408))();
                            fVar27 = (float)FRichCurve::Eval(lVar13);
                            fVar29 = fVar29 * fVar27;
                          }
                          iVar9 = (int)param_1[0x91];
                          *(int *)(param_1 + 0x91) = iVar9 + 1;
                          if (*(int *)((longlong)param_1 + 0x48c) < iVar9 + 1) {
                            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>
                            ::ResizeGrow(plVar14,iVar9);
                          }
                          lVar13 = (longlong)iVar9 * 0x1c;
                          FWeakObjectPtr::operator=(*plVar14 + lVar13,lVar11);
                          FWeakObjectPtr::operator=(*plVar14 + 8 + lVar13,lVar10);
                          *(float *)(*plVar14 + 0x10 + lVar13) = fVar29;
                          *(float *)(*plVar14 + 0x14 + lVar13) = fVar28;
                          *(undefined1 *)(*plVar14 + 0x18 + lVar13) = 1;
                          plVar12 = local_1f0;
                        }
                      }
LAB_140c347b1:
                      pplVar20 = local_198;
                      param_1 = plVar12;
                    }
                  }
                }
                local_1e0 = local_1e0 + 1;
              } while (local_1e0 != pplVar20);
            }
          }
        }
      }
      local_1d0 = local_1d0 + 1;
    }
    plVar12 = param_1 + 0x90;
    iVar9 = (int)param_1[0x91];
    plVar14 = param_1;
    uVar25 = uVar22;
    if (0 < iVar9) {
      do {
        lVar10 = *plVar12 + uVar25;
        cVar8 = FWeakObjectPtr::IsStale(lVar10,0,0);
        iVar9 = (int)uVar22;
        if (((cVar8 == '\0') && (cVar8 = FWeakObjectPtr::IsValid(lVar10), cVar8 != '\0')) &&
           ((cVar8 = FWeakObjectPtr::IsStale(lVar10 + 8,0,0), plVar14 = local_1f0, cVar8 == '\0' &&
            (cVar8 = FWeakObjectPtr::IsValid(lVar10 + 8), plVar14 = local_1f0, cVar8 != '\0')))) {
          plVar14 = (longlong *)FWeakObjectPtr::Get(lVar10);
          cVar8 = (**(code **)(*plVar14 + 0x950))(plVar14);
          plVar14 = local_1f0;
          if (cVar8 != '\0') goto LAB_140c348df;
          plVar14 = (longlong *)FWeakObjectPtr::Get(lVar10 + 8);
          cVar8 = (**(code **)(*plVar14 + 0x950))(plVar14);
          plVar14 = local_1f0;
          if ((cVar8 != '\0') ||
             ((fVar29 = fVar28 - *(float *)(lVar10 + 0x14), *(char *)(lVar10 + 0x18) == '\0' &&
              (pfVar2 = (float *)(*(longlong *)(local_1f0[0x8d] + 0x30) + 0x1bc),
              *pfVar2 <= fVar29 && fVar29 != *pfVar2)))) goto LAB_140c348df;
          uVar22 = (ulonglong)(iVar9 + 1);
          uVar25 = uVar25 + 0x1c;
        }
        else {
LAB_140c348df:
          iVar23 = (int)param_1[0x91];
          iVar16 = (iVar23 - iVar9) + -1;
          if (0 < iVar16) {
            iVar16 = 1;
          }
          if (iVar16 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x1c + *plVar12),
                       (void *)((longlong)(iVar23 - iVar16) * 0x1c + *plVar12),
                       (longlong)iVar16 * 0x1c);
            iVar23 = (int)param_1[0x91];
          }
          *(int *)(param_1 + 0x91) = iVar23 + -1;
          TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(plVar12);
        }
        iVar9 = (int)param_1[0x91];
      } while ((int)uVar22 < iVar9);
    }
    pcVar4 = (char *)*plVar12;
    if (pcVar4 != pcVar4 + (longlong)iVar9 * 0x1c) {
      pcVar18 = pcVar4 + 0x18;
      do {
        pfVar2 = (float *)(*(longlong *)(plVar14[0x8d] + 0x30) + 0x1b8);
        if (*pfVar2 <= fVar28 - *(float *)(pcVar18 + -4) &&
            fVar28 - *(float *)(pcVar18 + -4) != *pfVar2) {
          *pcVar18 = '\0';
        }
        plVar12 = (longlong *)FWeakObjectPtr::Get();
        if (plVar12 != (longlong *)0x0) {
          lVar10 = FUN_1413f82e0();
          if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
              lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar10 = (**(code **)(*plVar12 + 0x670))(plVar12), lVar10 != 0)) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(&local_108,local_1f8,lVar10);
            if (local_1f8[0] == -1) {
              lVar10 = 0;
            }
            else {
              lVar10 = local_108 + (longlong)local_1f8[0] * 0x18;
            }
            if (*pcVar18 == '\0') {
              lVar11 = 0x3fe00000;
            }
            else {
              lVar11 = 0x3ff00000;
            }
            *(float *)(lVar10 + 8) =
                 (float)((double)*(float *)(pcVar18 + -8) * (double)(lVar11 << 0x20)) +
                 *(float *)(lVar10 + 8);
          }
        }
        pcVar1 = pcVar18 + 4;
        pcVar18 = pcVar18 + 0x1c;
      } while (pcVar1 != pcVar4 + (longlong)iVar9 * 0x1c);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_1d8 = (longlong *)0x0;
    local_1cc = 0;
    local_1d0 = 0;
    if ((int)local_100 != local_d4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1d8);
    }
    auVar7 = local_1b8;
    puStack_120 = local_f8;
    iVar9 = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_1b8._8_8_;
    local_1b8 = auVar6 << 0x40;
    local_1c8._0_4_ = 0;
    iVar23 = 0;
    local_1c8._4_4_ = 1;
    local_1b8._0_4_ = 0xffffffff;
    auVar6 = local_1b8;
    local_1b8._12_4_ = auVar7._12_4_;
    local_1b8._0_8_ = auVar6._0_8_;
    local_1b8._8_4_ = 0;
    if ((int)local_e0 != 0) {
      puVar24 = local_f8;
      if (local_e8 != (uint *)0x0) {
        puVar24 = local_e8;
      }
      uVar3 = *puVar24;
      iVar16 = 0;
      while (uVar3 == 0) {
        iVar23 = iVar23 + 0x20;
        local_1c8._0_4_ = iVar16 + 1;
        local_1b8._8_4_ = iVar23;
        iVar9 = (int)local_e0;
        if ((int)((int)local_e0 + -1 + ((int)local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16)
        goto LAB_140c34b78;
        uVar3 = puVar24[(longlong)iVar16 + 1];
        local_1b8._0_4_ = 0xffffffff;
        iVar16 = (int)local_1c8;
      }
      local_1c8._4_4_ = uVar3 - 1 & uVar3 ^ uVar3;
      iVar9 = 0x1f;
      if (local_1c8._4_4_ != 0) {
        for (; local_1c8._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (local_1c8._4_4_ == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iVar9 = (iVar23 - iVar9) + 0x1f;
      local_1c8._0_4_ = iVar16;
      if ((int)local_e0 < iVar9) {
        iVar9 = (int)local_e0;
      }
LAB_140c34b78:
      local_1b8._4_4_ = iVar9;
    }
    local_130 = &local_108;
    uStack_128 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
    uStack_118 = local_1b8._0_8_;
    uStack_110 = local_1b8._8_8_;
    local_1a8 = local_1b8._8_8_;
    auVar7._8_8_ = local_1b8._0_8_;
    auVar7._0_8_ = puStack_120;
    uStack_1c0 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
    plVar12 = local_1d8;
    iVar23 = local_1d0;
    local_1c8 = local_130;
    if (iVar9 < (int)local_e0) {
      local_1b8._12_4_ = local_1b8._4_4_;
      iVar9 = local_1b8._12_4_;
      local_1b8 = auVar7;
      do {
        lVar10 = (longlong)iVar23;
        local_1d0 = iVar23 + 1;
        if (local_1cc < local_1d0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d8,iVar23);
          plVar12 = local_1d8;
        }
        iVar23 = local_1d0;
        if (plVar12 + lVar10 != (longlong *)0x0) {
          plVar12[lVar10] = *(longlong *)(*local_1c8 + (longlong)iVar9 * 0x18);
        }
        local_1b8._8_4_ = local_1b8._8_4_ & ~uStack_1c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c0);
        iVar9 = local_1b8._12_4_;
        auVar7 = local_1b8;
      } while ((int)local_1b8._12_4_ < *(int *)(local_1b8._0_8_ + 0x18));
    }
    local_1b8 = auVar7;
    fVar28 = *(float *)(*(longlong *)(plVar14[0x8d] + 0x30) + 0x138);
    local_160 = plVar12 + iVar23;
    plVar14 = plVar12;
    if (plVar12 != local_160) {
      local_168 = &local_1e8;
      uVar22 = (ulonglong)((longlong)local_160 + (7 - (longlong)plVar12)) >> 3;
      plVar21 = plVar12;
      if (local_160 < plVar12) {
        uVar22 = 0;
      }
      do {
        uVar26 = 0;
        local_1e8 = (longlong *)*plVar12;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_108,local_1f8);
        uVar25 = uVar26;
        if (local_1f8[0] != -1) {
          uVar25 = local_108 + (longlong)local_1f8[0] * 0x18;
        }
        FUN_140747840(&local_b8,local_1a0,&local_168,0);
        *(undefined4 *)(local_b8 + 8 + (longlong)local_1a0[0] * 0x18) = *(undefined4 *)(uVar25 + 8);
        plVar14 = plVar21;
        if (uVar22 != 0) {
          plVar17 = local_1e8;
          do {
            plVar14 = (longlong *)*plVar21;
            if ((plVar14 != plVar17) && (plVar14 != (longlong *)0x0)) {
              lVar10 = (**(code **)(*plVar14 + 0x688))(plVar14);
              plVar17 = local_1e8;
              if ((lVar10 != 0) && (local_1e8 != (longlong *)0x0)) {
                lVar10 = (**(code **)(*local_1e8 + 0x688))();
                plVar17 = local_1e8;
                if (lVar10 != 0) {
                  lVar10 = (**(code **)(*local_1e8 + 0x688))();
                  lVar10 = *(longlong *)(lVar10 + 0x168);
                  if (lVar10 == 0) {
                    local_150 = DAT_1468b5d98;
                    puVar15 = &local_158;
                    local_158 = _DAT_1468b5d90;
                  }
                  else {
                    puVar15 = (undefined8 *)&local_184;
                    local_184 = *(undefined4 *)(lVar10 + 0x220);
                    local_17c = *(undefined4 *)(lVar10 + 0x228);
                    uStack_180 = *(undefined4 *)(lVar10 + 0x224);
                  }
                  local_190 = *puVar15;
                  local_188 = *(float *)(puVar15 + 1);
                  lVar10 = (**(code **)(*plVar14 + 0x688))(plVar14);
                  lVar10 = *(longlong *)(lVar10 + 0x168);
                  if (lVar10 == 0) {
                    local_144 = DAT_1468b5d98;
                    puVar15 = &local_14c;
                    local_14c = _DAT_1468b5d90;
                  }
                  else {
                    puVar15 = (undefined8 *)&local_178;
                    local_178 = *(undefined4 *)(lVar10 + 0x220);
                    local_170 = *(undefined4 *)(lVar10 + 0x228);
                    uStack_174 = *(undefined4 *)(lVar10 + 0x224);
                  }
                  local_138 = *(float *)(puVar15 + 1);
                  fVar27 = (float)*puVar15 - (float)local_190;
                  fVar29 = (float)((ulonglong)*puVar15 >> 0x20) - local_190._4_4_;
                  plVar17 = local_1e8;
                  if (fVar27 * fVar27 + fVar29 * fVar29 +
                      (local_138 - local_188) * (local_138 - local_188) < fVar28 * fVar28) {
                    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(&local_b8,&local_198,local_1e8);
                    lVar10 = 0;
                    if ((int)local_198 != -1) {
                      lVar10 = local_b8 + (longlong)(int)local_198 * 0x18;
                    }
                    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(&local_108,&local_1e0,plVar14);
                    lVar11 = 0;
                    if ((int)local_1e0 != -1) {
                      lVar11 = local_108 + (longlong)(int)local_1e0 * 0x18;
                    }
                    *(float *)(lVar10 + 8) = *(float *)(lVar11 + 8) + *(float *)(lVar10 + 8);
                    plVar17 = local_1e8;
                  }
                }
              }
            }
            plVar21 = plVar21 + 1;
            uVar26 = uVar26 + 1;
            plVar14 = local_1d8;
          } while (uVar26 != uVar22);
        }
        plVar12 = plVar12 + 1;
        plVar21 = plVar14;
      } while (plVar12 != local_160);
    }
    plVar17 = local_160;
    plVar21 = local_1f0;
    plVar12 = plVar14;
    for (; plVar14 != plVar17; plVar14 = plVar14 + 1) {
      plVar12 = (longlong *)*plVar14;
      if (plVar12 != (longlong *)0x0) {
        lVar10 = (**(code **)(*plVar12 + 0x680))(plVar12);
        if (lVar10 != 0) {
          lVar11 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(&local_b8,&local_1e0,plVar12);
            lVar11 = 0;
            if ((int)local_1e0 != -1) {
              lVar11 = local_b8 + (longlong)(int)local_1e0 * 0x18;
            }
            fVar28 = *(float *)((longlong)plVar21 + 0x47c);
            if (*(float *)((longlong)plVar21 + 0x47c) <= *(float *)(lVar11 + 8)) {
              fVar28 = *(float *)(lVar11 + 8);
            }
            *(float *)(lVar10 + 0x5d0) = fVar28;
          }
        }
      }
      plVar12 = local_1d8;
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_70 = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
    local_c0 = 0;
    if (local_c8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_108);
  }
  return;
}



// FUNCTION 140c35040 FUN_140c35040 body=499 status=ok
// SIG undefined FUN_140c35040(void)

void FUN_140c35040(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8;
  
  iVar1 = DAT_1464aaa8c;
  if (((*(int *)((longlong)param_1 + 0x1e4c) == DAT_1464aaa8c) &&
      (lVar4 = param_1[0x3cd], lVar4 == param_2)) && ((char)param_1[0x3cf] == (char)param_1[0x160]))
  {
    if (lVar4 == 0) {
      return;
    }
    if (*(longlong *)(lVar4 + 0x118) == 0) {
      return;
    }
    if (((*(byte *)(lVar4 + 200) & 0x20) != 0) && (cVar2 = FUN_1407cd900(), cVar2 == '\0')) {
      return;
    }
  }
  lVar4 = param_1[0x3cd];
  *(int *)((longlong)param_1 + 0x1e4c) = iVar1;
  param_1[0x3ce] = param_2;
  if (param_2 == lVar4) {
    if (param_2 != 0) {
      cVar2 = (char)param_1[0x160];
      cVar3 = (char)param_1[0x3cf];
      if (cVar3 != cVar2) {
        if (cVar3 == '\x01') {
          if (cVar2 != '\x02') goto LAB_140c35216;
          local_res8 = param_2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x3bf,&local_res8);
          cVar3 = (char)param_1[0x3cf];
        }
        if ((cVar3 == '\x02') && (cVar2 == '\x03')) {
          (**(code **)(*param_1 + 0xc88))(param_1,param_1[0x3ce]);
          local_res8 = param_1[0x3ce];
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x3c1,&local_res8);
        }
      }
    }
    goto LAB_140c35216;
  }
  if (param_2 == 0) {
    if (lVar4 != 0) {
      if (((char)param_1[0x3cf] == '\x01') || ((char)param_1[0x3cf] == '\x02')) {
        (**(code **)(*param_1 + 0xc88))(param_1,0);
        local_res8 = param_1[0x3cd];
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x3c1,&local_res8);
        lVar4 = param_1[0x3cd];
      }
      plVar5 = param_1 + 0x3c3;
      goto LAB_140c3517e;
    }
  }
  else if (lVar4 == 0) {
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3bd,&local_res8);
    if ((char)param_1[0x160] == '\x02') {
      lVar4 = param_1[0x3ce];
      plVar5 = param_1 + 0x3bf;
      goto LAB_140c3517e;
    }
  }
  else if ((char)param_1[0x160] == '\x03') {
    (**(code **)(*param_1 + 0xc88))(param_1,param_2);
    lVar4 = param_1[0x3ce];
    plVar5 = param_1 + 0x3c1;
LAB_140c3517e:
    local_res8 = lVar4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar5,&local_res8);
  }
  param_1[0x3cd] = param_1[0x3ce];
LAB_140c35216:
  *(char *)(param_1 + 0x3cf) = (char)param_1[0x160];
  return;
}



// FUNCTION 140c35240 FUN_140c35240 body=473 status=ok
// SIG undefined FUN_140c35240(void)

void FUN_140c35240(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && (plVar4 = (longlong *)FUN_1422312c0(param_1), plVar4 != (longlong *)0x0)) {
    lVar3 = FUN_142e4e4a0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar4 + 0x398))(plVar4,param_1);
    }
  }
  lVar3 = (**(code **)(param_1[0x1b0] + 0x18))();
  param_1[0x1d3] = lVar3;
  if (lVar3 != 0) {
    pwVar7 = (wchar_t *)0x0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::AddedToInventory",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0x1d3] + 0x338,param_1,local_res8);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::PreAddToFullInventory",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0x1d3] + 0x348,param_1,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::RemovingFromInventory",L"::");
    while (pwVar5 = pwVar6, pwVar5 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar7 = pwVar5;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0x1d3] + 0x358,param_1,local_res8);
  }
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 140c35420 FUN_140c35420 body=958 status=ok
// SIG undefined FUN_140c35420(void)

void FUN_140c35420(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  float fVar18;
  uint local_98;
  uint uStack_94;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (((*(longlong *)(param_1 + 0x458) != 0) && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x38), lVar8 != 0)) {
    lVar8 = FUN_1405a3150(*(longlong *)(param_1 + 0x458),&local_98,lVar8,8);
    FUN_1405913a0(param_1 + 0x4b0,lVar8);
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(lVar8 + 0x10);
    FUN_140591060(&local_98);
    iVar7 = rand();
    lVar8 = *(longlong *)(param_1 + 0x468);
    *(float *)(param_1 + 0x4a4) = (float)iVar7 * 3.051851e-05;
    fVar18 = *(float *)(*(longlong *)(lVar8 + 0x30) + 0x1c0);
    if (fVar18 <= 1.0) {
      fVar18 = 0.1;
    }
    else {
      fVar18 = 1.0 / fVar18;
    }
    uVar12 = 0;
    *(float *)(param_1 + 0x4a8) = fVar18;
    if (*(longlong *)(lVar8 + 0xa0) != 0) {
      lVar9 = FUN_14143c1f0();
      for (lVar4 = *(longlong *)(lVar8 + 0xa0); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar9) {
          if (*(longlong *)(lVar8 + 0xa0) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x468);
            uVar15 = uVar12;
            if (*(longlong *)(lVar8 + 0xa0) != 0) {
              uVar10 = FUN_14143c1f0();
              uVar5 = *(ulonglong *)(lVar8 + 0xa0);
              for (uVar6 = uVar5; (uVar15 = uVar12, uVar6 != 0 && (uVar15 = uVar5, uVar6 != uVar10))
                  ; uVar6 = *(ulonglong *)(uVar6 + 0x30)) {
              }
            }
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar11 = FUN_1417985e0(uVar15,param_1,0,0,0,0,0,0,0);
            *(undefined8 *)(param_1 + 0x470) = uVar11;
          }
          break;
        }
      }
    }
    local_98 = 0;
    uStack_94 = 1;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30);
    plVar17 = (longlong *)(lVar8 + 0xe0);
    uStack_84 = 0;
    uStack_80 = 0;
    uVar2 = *(uint *)(lVar8 + 0x108);
    puVar1 = (uint *)(lVar8 + 0xf0);
    if (uVar2 != 0) {
      puVar14 = *(uint **)(lVar8 + 0x100);
      if (*(uint **)(lVar8 + 0x100) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar3 = *puVar14;
      uVar15 = uVar12;
      while (uVar3 == 0) {
        iVar7 = (int)uVar12;
        uStack_80 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_80;
        local_98 = iVar7 + 1;
        uVar12 = (ulonglong)local_98;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140c3567c;
        uVar3 = puVar14[(longlong)iVar7 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar7 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uStack_80 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_140c3567c:
        uStack_84 = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar8 + 0x108);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_70 = CONCAT44(uStack_94,local_98);
    local_88 = -1 << ((byte)uVar3 & 0x1f);
    uVar16 = uVar3 & 0xffffffe0;
    puStack_90 = puVar1;
    uStack_84 = uVar3;
    local_78 = plVar17;
    local_68 = puVar1;
    local_50 = plVar17;
    uStack_48 = uStack_70;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar3 != uVar2) {
      puVar14 = *(uint **)(lVar8 + 0x100);
      if (*(uint **)(lVar8 + 0x100) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = puVar14[(int)uVar3 >> 5] & local_88;
      iVar7 = (int)uVar3 >> 5;
      while (uVar13 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140c35741;
        uVar13 = puVar14[(longlong)iVar7 + 1];
        local_88 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar13 = -uVar13 & uVar13;
      iVar7 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar16 - iVar7) + 0x1f;
      uVar3 = uStack_84;
      if ((int)uVar2 < (int)uStack_84) {
LAB_140c35741:
        uStack_84 = uVar2;
        uVar3 = uVar2;
      }
    }
    while (((uStack_5c != uVar3 || (local_68 != puVar1)) || (local_78 != plVar17))) {
      if (*(longlong *)(*local_78 + (longlong)(int)uStack_5c * 0x30 + 8) != 0) {
        FUN_1405aa0a0();
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
    FUN_140c5ce20(param_1);
    FUN_140c5c3c0(param_1);
  }
  return;
}



// FUNCTION 140c357e0 FUN_140c357e0 body=2314 status=ok
// SIG undefined FUN_140c357e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c357e0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  code *local_138;
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  cVar2 = FUN_140beccc0();
  if (cVar2 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) &&
        (*(int *)(lVar5 + 0x618) == 2)) && (iVar3 = FUN_142235230(param_1), iVar3 == 3)) {
      FUN_140c494b0(param_1);
      return;
    }
    FUN_140c32620(param_1);
    return;
  }
  lVar5 = FUN_1422312c0();
  if (lVar5 == 0) {
LAB_140c3587a:
    iVar3 = FUN_142235230(param_1);
    if (iVar3 != 3) {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar5 == 0) {
        return;
      }
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)FUN_140c357e0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar5;
        *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_158 = 0;
      local_150 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_158);
      }
      FWeakObjectPtr::operator=(local_148,0);
      local_140 = 0;
      local_138 = AK::MemoryMgr::StartProfileThreadUsage;
      local_108 = (longlong *)0x0;
      local_f8 = 0;
      FUN_142880af0(uVar8,&local_158);
      if (local_f8 != 0) {
        plVar10 = local_128;
        if (local_108 != (longlong *)0x0) {
          plVar10 = local_108;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_158);
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      goto joined_r0x000140c36091;
    }
  }
  else {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar5 = FUN_140bba1e0(lVar5), lVar5 == 0)) goto LAB_140c3587a;
  }
  iVar3 = *DAT_14686c1e8;
  plVar7 = (longlong *)GetMoviePlayer();
  cVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
  if (cVar2 == '\0') {
    if (iVar3 != 0) goto LAB_140c35b54;
    local_178 = 0;
    if (param_1[0x95] == 0) goto LAB_140c35f5a;
    plVar7 = param_1 + 0x93;
    lVar5 = FUN_140c49a40(plVar7);
    if (lVar5 == 0) goto LAB_140c35f5a;
    lVar5 = FWeakObjectPtr::Get(plVar7);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != (int)param_1[0x94]) && (local_178 = 0, param_1[0x95] != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(plVar7,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x94) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(plVar7);
        if (lVar5 != 0) goto LAB_140c35ee0;
      }
LAB_140c35f4c:
      lVar5 = 0;
    }
    else {
LAB_140c35ee0:
      lVar6 = FUN_141410f00();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140c35f4c;
      lVar6 = FUN_141410f00();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140c35f4c;
    }
    FUN_142dd6bd0(param_1,lVar5);
LAB_140c35f5a:
    FUN_140c38480(param_1);
    return;
  }
  iVar4 = FUN_142235230(param_1);
  if (iVar4 < 3) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar7 = (longlong *)FUN_142d5ecc0(uVar8);
    if ((plVar7 != (longlong *)0x0) &&
       (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b8))(plVar7), plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7,(int)param_1[0xce],1);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  iVar4 = FUN_142235230(param_1);
  if (((iVar4 != 3) || (lVar5 = FUN_140cb5ff0(), lVar5 == 0)) ||
     (lVar5 = FUN_140cb5ff0(), *(longlong *)(lVar5 + 0x68) == 0)) {
    if (iVar3 != 0) {
      plVar7 = (longlong *)GetMoviePlayer();
      uVar8 = (**(code **)(*plVar7 + 0x90))(plVar7);
      plVar7 = (longlong *)FUN_140ac3b30(uVar8,local_170,param_1,FUN_140c494b0);
      param_1[0x8b] = *plVar7;
      return;
    }
    local_178 = 0;
    if (param_1[0x95] != 0) {
      plVar7 = param_1 + 0x93;
      lVar5 = FUN_140c49a40(plVar7);
      if (lVar5 != 0) {
        lVar5 = FWeakObjectPtr::Get(plVar7);
        if (lVar5 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)param_1[0x94]) && (local_178 = 0, param_1[0x95] != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar7,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x94) = DAT_1464b56f4;
            }
            lVar5 = FWeakObjectPtr::Get(plVar7);
            if (lVar5 != 0) goto LAB_140c35c3f;
          }
LAB_140c35cab:
          lVar5 = 0;
        }
        else {
LAB_140c35c3f:
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140c35cab;
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140c35cab;
        }
        FUN_142dd6bd0(param_1,lVar5);
      }
    }
    plVar7 = (longlong *)GetMoviePlayer();
    uVar8 = (**(code **)(*plVar7 + 0x90))(plVar7);
    plVar7 = (longlong *)FUN_140ac3b30(uVar8,local_168,param_1,FUN_140c38480);
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    param_1[0x8b] = *plVar7;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_e8[0] = &LAB_140c39500;
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar8 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    local_98 = 0;
    local_90 = 0;
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
    local_180 = 0xbf800000;
    local_188 = 1;
    FUN_142880850(uVar8,param_1 + 0xd4,&local_98,0x3d4ccccd);
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
    plVar7 = local_b8;
    if (local_a8 != 0) {
      plVar10 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar10 = local_b8;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
        plVar7 = local_b8;
      }
    }
joined_r0x000140c36091:
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    FMemory::Free(plVar7);
    return;
  }
  plVar7 = param_1 + 0x8e;
  lVar5 = FWeakObjectPtr::Get(plVar7);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x8f]) || (local_178 = 0, param_1[0x90] == 0))
    goto LAB_140c35b54;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar7,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar7);
    if (lVar5 == 0) goto LAB_140c35b54;
  }
  lVar6 = UScrollBar::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c35b54;
  lVar5 = FWeakObjectPtr::Get(plVar7);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (local_178 = 0, param_1[0x90] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar7);
      if (lVar5 != 0) goto LAB_140c35a5e;
    }
LAB_140c35a94:
    lVar5 = 0;
  }
  else {
LAB_140c35a5e:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c35a94;
  }
  SVirtualWindow::SetIsFocusable(lVar5,1);
  lVar5 = FWeakObjectPtr::Get(plVar7);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (local_178 = 0, param_1[0x90] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar7);
      if (lVar5 != 0) goto LAB_140c35b13;
    }
LAB_140c35b49:
    lVar5 = 0;
  }
  else {
LAB_140c35b13:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c35b49;
  }
  FUN_1407ef1b0(lVar5);
LAB_140c35b54:
  FUN_140c494b0(param_1);
  return;
}



// FUNCTION 140c360f0 FUN_140c360f0 body=27 status=ok
// SIG undefined FUN_140c360f0(void)

void FUN_140c360f0(undefined8 param_1)

{
  FUN_142223710();
  FUN_140c357e0(param_1);
  return;
}



// FUNCTION 140c36110 FUN_140c36110 body=4474 status=ok
// SIG undefined FUN_140c36110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c36110(code *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  int *piVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  code *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8 [6];
  undefined8 local_78;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_142cb71e0();
  pwVar22 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
    local_108 = FUN_140c4ed40;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnStartSprinting",L"::");
    pwVar16 = pwVar22;
    while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar16 = pwVar5;
    }
    FName::FName(&local_f8,pwVar16 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xe68) + 0x2ae0,param_1,&local_108,local_f8);
    uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
    local_108 = FUN_140c4d020;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnEndSprinting",L"::");
    pwVar16 = pwVar22;
    while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar16 = pwVar5;
    }
    FName::FName(&local_f8,pwVar16 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xe68) + 0x2af0,param_1,&local_108,local_f8);
  }
  if (param_1[0x128] == (code)0x3) {
    lVar13 = *(longlong *)(param_1 + 0xe78);
    if (lVar13 != 0) {
      if (*(longlong *)(param_1 + 0xe70) != 0) {
        FUN_142350b20(*(longlong *)(param_1 + 0xe70),1);
        lVar13 = *(longlong *)(param_1 + 0xe78);
      }
      uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_108 = (code *)&LAB_140c31ea0;
      plVar21 = (longlong *)(lVar13 + 0x240);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(int *)(plVar10 + 2) = (int)local_108;
        *(int *)((longlong)plVar10 + 0x14) = local_108._4_4_;
        *(int *)(plVar10 + 3) = (int)uStack_100;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_100._4_4_;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar21,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_f0);
        iVar8 = *(int *)(lVar13 + 0x248);
        *(int *)(lVar13 + 0x248) = iVar8 + 1;
        if (*(int *)(lVar13 + 0x24c) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar8);
        }
        puVar12 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar21);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
    }
    if (*(longlong *)(param_1 + 0xe70) != 0) {
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar13 + 0x38) < DAT_146866ca8) &&
         (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)) {
        DAT_146866c90 = 0xff;
        _DAT_146866c98 = 0;
        DAT_146866ca0._0_4_ = 0;
        _Init_thread_footer(&DAT_146866ca8);
      }
      lVar11 = *(longlong *)(param_1 + 0x910);
      puVar19 = (undefined4 *)&DAT_146866c70;
      if (lVar11 == 0) {
        puVar18 = &DAT_146866c90;
      }
      else {
        if ((*(int *)(lVar13 + 0x38) < DAT_146866c88) &&
           (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
          DAT_146866c70 = 0xff;
          _DAT_146866c78 = 0;
          DAT_146866c80._0_4_ = 0;
          _Init_thread_footer(&DAT_146866c88);
        }
        if (*(int *)(lVar11 + 0x680) < 1) {
          puVar18 = &DAT_146866c70;
        }
        else {
          puVar18 = (undefined *)(*(longlong *)(lVar11 + 0x678) + 0x60);
        }
      }
      cVar7 = FUN_142d52a00(puVar18);
      if (cVar7 != '\0') {
        if ((*(int *)(lVar13 + 0x38) < DAT_146866ca8) &&
           (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)) {
          DAT_146866c90 = 0xff;
          _DAT_146866c98 = 0;
          DAT_146866ca0._0_4_ = 0;
          _Init_thread_footer(&DAT_146866ca8);
        }
        lVar11 = *(longlong *)(param_1 + 0x910);
        if (lVar11 == 0) {
          puVar19 = (undefined4 *)&DAT_146866c90;
        }
        else {
          if ((*(int *)(lVar13 + 0x38) < DAT_146866c88) &&
             (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
            DAT_146866c70 = 0xff;
            _DAT_146866c78 = 0;
            DAT_146866c80._0_4_ = 0;
            _Init_thread_footer(&DAT_146866c88);
          }
          if (0 < *(int *)(lVar11 + 0x680)) {
            puVar19 = (undefined4 *)(*(longlong *)(lVar11 + 0x678) + 0x60);
          }
        }
        local_e0 = *puVar19;
        uStack_dc = puVar19[1];
        uStack_d8 = puVar19[2];
        uStack_d4 = puVar19[3];
        local_d0 = *(undefined8 *)(puVar19 + 4);
        lVar13 = FUN_142d52a20(&local_e0);
        if ((*(longlong *)(lVar13 + 8) != 0) &&
           (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 8) + 0x30), lVar13 != 0)) {
          local_108 = (code *)&LAB_140c4d320;
          uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
          plVar10 = (longlong *)FUN_142d62250(*(longlong *)(param_1 + 0xe70),lVar13);
          plVar21 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar21 != (longlong *)0x0) {
            *plVar21 = (longlong)&PTR_FUN_144213d80;
            FWeakObjectPtr::operator=(plVar21 + 1,param_1);
            *(int *)(plVar21 + 2) = (int)local_108;
            *(int *)((longlong)plVar21 + 0x14) = local_108._4_4_;
            *(int *)(plVar21 + 3) = (int)uStack_100;
            *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_100._4_4_;
            lVar11 = FDelegateHandle::GenerateNewID();
            plVar21[5] = lVar11;
            *plVar21 = (longlong)&PTR_FUN_144213dc8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
            (**(code **)(*plVar21 + 0x20))(plVar21,&local_f0);
            iVar8 = (int)plVar10[1];
            *(int *)(plVar10 + 1) = iVar8 + 1;
            if (*(int *)((longlong)plVar10 + 0xc) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar8);
            }
            puVar12 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar10);
            *puVar12 = plVar21;
            *(undefined4 *)(puVar12 + 1) = 3;
          }
          local_108 = (code *)&LAB_140c4d320;
          uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
          plVar10 = (longlong *)FUN_142d623c0(*(longlong *)(param_1 + 0xe70),lVar13);
          plVar21 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar21 != (longlong *)0x0) {
            *plVar21 = (longlong)&PTR_FUN_144213e10;
            FWeakObjectPtr::operator=(plVar21 + 1,param_1);
            *(int *)(plVar21 + 2) = (int)local_108;
            *(int *)((longlong)plVar21 + 0x14) = local_108._4_4_;
            *(int *)(plVar21 + 3) = (int)uStack_100;
            *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_100._4_4_;
            lVar13 = FDelegateHandle::GenerateNewID();
            plVar21[5] = lVar13;
            *plVar21 = (longlong)&PTR_FUN_144213e58;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
            (**(code **)(*plVar21 + 0x20))(plVar21,&local_f0);
            iVar8 = (int)plVar10[1];
            *(int *)(plVar10 + 1) = iVar8 + 1;
            if (*(int *)((longlong)plVar10 + 0xc) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar8);
            }
            puVar12 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar10);
            *puVar12 = plVar21;
            *(undefined4 *)(puVar12 + 1) = 3;
          }
        }
      }
    }
    lVar13 = *(longlong *)(param_1 + 0xe80);
    if (lVar13 != 0) {
      uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_108 = (code *)&LAB_140c4ea70;
      plVar21 = (longlong *)(lVar13 + 0x2f0);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(int *)(plVar10 + 2) = (int)local_108;
        *(int *)((longlong)plVar10 + 0x14) = local_108._4_4_;
        *(int *)(plVar10 + 3) = (int)uStack_100;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_100._4_4_;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar21,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_f0);
        iVar8 = *(int *)(lVar13 + 0x2f8);
        *(int *)(lVar13 + 0x2f8) = iVar8 + 1;
        if (*(int *)(lVar13 + 0x2fc) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar8);
        }
        puVar12 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar21);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x13d8);
    pwVar16 = (wchar_t *)((longlong)*(int *)(param_1 + 0x13e0) & 0x1fffffffffffffff);
    if (puVar12 + *(int *)(param_1 + 0x13e0) < puVar12) {
      pwVar16 = pwVar22;
    }
    pwVar9 = pwVar22;
    if (pwVar16 != (wchar_t *)0x0) {
      do {
        FUN_140e6fa10(param_1 + 0x1430,*puVar12);
        pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
        puVar12 = puVar12 + 1;
      } while (pwVar9 != pwVar16);
    }
  }
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnWeaponResumeUse",L"::");
  pwVar16 = pwVar22;
  while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar16 = pwVar5;
  }
  FName::FName(&local_f0,pwVar16 + 2,1);
  pcVar6 = local_f0;
  pcVar1 = param_1 + 0x1550;
  FWeakObjectPtr::operator=(&local_108,0);
  uStack_100 = (code *)0x0;
  FWeakObjectPtr::operator=(&local_108,param_1);
  uStack_100 = pcVar6;
  local_f8 = 0;
  if ((pcVar6 != (code *)0x0) && (lVar13 = FWeakObjectPtr::Get(&local_108), lVar13 != 0)) {
    UObject::FindFunction(lVar13,uStack_100);
  }
  piVar4 = *(int **)pcVar1;
  iVar8 = *(int *)(param_1 + 0x1558);
  piVar20 = piVar4;
  do {
    if (piVar20 == piVar4 + (longlong)iVar8 * 4) {
LAB_140c367e4:
      iVar8 = *(int *)(param_1 + 0x1558);
      *(int *)(param_1 + 0x1558) = iVar8 + 1;
      if (*(int *)(param_1 + 0x155c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar1,iVar8);
      }
      puVar19 = (undefined4 *)((longlong)iVar8 * 0x10 + *(longlong *)pcVar1);
      *puVar19 = (int)local_108;
      puVar19[1] = local_108._4_4_;
      *(code **)(puVar19 + 2) = uStack_100;
LAB_140c3681f:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pcVar1);
      puVar12 = *(undefined8 **)(param_1 + 0x13e8);
      pwVar16 = (wchar_t *)((longlong)*(int *)(param_1 + 0x13f0) & 0x1fffffffffffffff);
      if (puVar12 + *(int *)(param_1 + 0x13f0) < puVar12) {
        pwVar16 = pwVar22;
      }
      pwVar9 = pwVar22;
      if (pwVar16 != (wchar_t *)0x0) {
        do {
          FUN_140e6fb20(param_1 + 0x1518,*puVar12);
          pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
          puVar12 = puVar12 + 1;
        } while (pwVar9 != pwVar16);
      }
      uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_108 = FUN_140c4d420;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnInventoryEquippedOnSlot",L"::");
      pwVar16 = pwVar22;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_f0,pwVar16 + 2,1);
      FUN_1407260e0(param_1 + 0x1308,param_1,&local_108,local_f0);
      uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_108 = FUN_140c4d740;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnInventoryUnequippedFromSlot",L"::")
      ;
      pwVar16 = pwVar22;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_f0,pwVar16 + 2,1);
      FUN_1407260e0(param_1 + 0x1318,param_1,&local_108,local_f0);
      uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_108 = FUN_140c4ee30;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnTrinketEquippedOnSlot",L"::");
      pwVar16 = pwVar22;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_f0,pwVar16 + 2,1);
      FUN_1407260e0(param_1 + 0x1338,param_1,&local_108,local_f0);
      uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_108 = FUN_140c4eed0;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnTrinketUnequippedFromSlot",L"::");
      pwVar16 = pwVar22;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_f0,pwVar16 + 2,1);
      FUN_1407260e0(param_1 + 0x1348,param_1,&local_108,local_f0);
      local_118 = param_1 + 0x1348;
      FUN_140e8e480(param_1 + 0x1430,param_1 + 0x1308,param_1 + 0x1318,param_1 + 0x1338);
      lVar13 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
      if (lVar13 != 0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnInventoryItemReplaced",L"::");
        pwVar16 = pwVar22;
        while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar16 = pwVar5;
        }
        FName::FName(&local_f0,pwVar16 + 2,1);
        pcVar1 = local_f0;
        plVar10 = (longlong *)(lVar13 + 0x308);
        FWeakObjectPtr::operator=(&local_108,0);
        uStack_100 = (code *)0x0;
        FWeakObjectPtr::operator=(&local_108,param_1);
        uStack_100 = pcVar1;
        local_f8 = 0;
        if ((pcVar1 != (code *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_108), lVar11 != 0)) {
          UObject::FindFunction(lVar11,uStack_100);
        }
        iVar8 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar10,&local_108);
        if (iVar8 == -1) {
          iVar8 = *(int *)(lVar13 + 0x310);
          *(int *)(lVar13 + 0x310) = iVar8 + 1;
          if (*(int *)(lVar13 + 0x314) < iVar8 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar8);
          }
          puVar19 = (undefined4 *)((longlong)iVar8 * 0x10 + *plVar10);
          *puVar19 = (int)local_108;
          puVar19[1] = local_108._4_4_;
          *(code **)(puVar19 + 2) = uStack_100;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      }
      if (param_1[0x128] == (code)0x3) {
        FUN_140c3be40(param_1);
        if ((((byte)param_1[0x13fc] & 4) != 0) && (*(longlong *)(param_1 + 0x10d8) != 0)) {
          FWeakObjectPtr::operator=(&local_108,0);
          uStack_100 = (code *)0x0;
          puVar14 = (ulonglong *)FName::FName(&local_f0,L"RebuildInventory",1);
          FWeakObjectPtr::operator=(&local_108,param_1);
          uStack_100 = (code *)*puVar14;
          lVar13 = *(longlong *)(param_1 + 0x10d8);
          plVar10 = (longlong *)(lVar13 + 0x1b0);
          iVar8 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find
                            (plVar10,&local_108);
          if (iVar8 == -1) {
            iVar8 = *(int *)(lVar13 + 0x1b8);
            *(int *)(lVar13 + 0x1b8) = iVar8 + 1;
            if (*(int *)(lVar13 + 0x1bc) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar8);
            }
            puVar19 = (undefined4 *)((longlong)iVar8 * 0x10 + *plVar10);
            *puVar19 = (int)local_108;
            puVar19[1] = local_108._4_4_;
            *(code **)(puVar19 + 2) = uStack_100;
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
        }
        if (((byte)param_1[0x1408] & 1) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x78))
                    (param_1 + 0xd88,*(longlong *)(param_1 + 0x1400),1);
        }
        if (param_1[0x1140] != (code)0x0) {
          uVar15 = FUN_142e43690();
          uVar15 = (**(code **)(*(longlong *)param_1 + 0x628))(param_1,uVar15);
          FUN_142d2ad60(uVar15);
        }
      }
      lVar13 = FUN_1405c6c00();
      if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x1c0), lVar13 != 0)) {
        fVar2 = *(float *)(lVar13 + 0x34);
        fVar3 = *(float *)(lVar13 + 0x30);
        iVar8 = rand();
        *(float *)(param_1 + 0x1d30) = (float)iVar8 * 3.051851e-05 * (fVar2 - fVar3) + fVar3;
      }
      if (*(longlong *)(param_1 + 0x10e0) != 0) {
        uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
        local_108 = (code *)&LAB_140c31e94;
        pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnCharacterTransported",L"::");
        pwVar16 = pwVar22;
        while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar16 = pwVar5;
        }
        FName::FName(&local_f0,pwVar16 + 2,1);
        FUN_1407260e0(*(longlong *)(param_1 + 0x10e0) + 0x12f8,param_1,&local_108,local_f0);
      }
      lVar13 = *(longlong *)(param_1 + 0x4c8);
      if ((lVar13 != 0) && (cVar7 = FUN_140c2da30(lVar13), cVar7 != '\0')) {
        uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
        local_108 = (code *)&LAB_140c4e2f0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&AOakCharacter::OnRecentlyEquippedWeaponInSprintTimerEnd",L"::");
        pwVar16 = pwVar22;
        while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar16 = pwVar5;
        }
        FName::FName(&local_f0,pwVar16 + 2,1);
        FUN_1407260e0(lVar13 + 0x2af0,param_1,&local_108,local_f0);
      }
      uVar15 = ULevelSequencePlayer::GetPrivateStaticClass();
      lVar13 = (**(code **)(*(longlong *)param_1 + 0x628))(param_1,uVar15);
      if (lVar13 != 0) {
        pwVar16 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnDodged",L"::");
        while (pwVar9 = pwVar16, pwVar9 != (wchar_t *)0x0) {
          pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar22 = pwVar9;
        }
        FName::FName(&local_f0,pwVar22 + 2,1);
        pcVar1 = local_f0;
        FWeakObjectPtr::operator=(&local_108,0);
        uStack_100 = (code *)0x0;
        FWeakObjectPtr::operator=(&local_108,param_1);
        uStack_100 = pcVar1;
        local_f8 = 0;
        if ((pcVar1 != (code *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_108), lVar11 != 0)) {
          UObject::FindFunction(lVar11,uStack_100);
        }
        FUN_1406a5aa0(lVar13 + 0x858,&local_108);
      }
      if (param_1[0x13c2] == (code)0x0) {
        uVar15 = (**(code **)(*(longlong *)param_1 + 0x148))(param_1);
        lVar13 = FUN_140e4ba40(uVar15);
        if (lVar13 != 0) {
          FUN_140e5a340(lVar13,param_1);
        }
        if ((((param_1[0x1120] != (code)0x0) && (iVar8 = FUN_142235230(param_1), iVar8 != 3)) &&
            (iVar8 = FUN_142235230(param_1), iVar8 != 3)) &&
           (((param_1[0x13c2] == (code)0x0 && (param_1[0x1120] != (code)0x0)) &&
            ((lVar13 = FUN_1422312c0(param_1), lVar13 != 0 &&
             ((cVar7 = FUN_140c2da80(lVar13), cVar7 != '\0' && (*(longlong *)(param_1 + 0x908) != 0)
              ))))))) {
          FUN_142df2730(*(longlong *)(param_1 + 0x908),*(undefined1 *)(lVar13 + 0xb98));
        }
        lVar13 = FUN_1422312c0(param_1);
        if ((lVar13 != 0) && (cVar7 = FUN_140c2da80(lVar13), cVar7 != '\0')) {
          uStack_100 = (code *)0x0;
          local_108 = param_1;
          uVar15 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          uStack_100 = (code *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar15);
          FUN_140be6c80(lVar13,&local_108);
        }
      }
      if (((param_1[0x128] != (code)0x3) && (cVar7 = FUN_140a67ee0(param_1), cVar7 != '\0')) &&
         (lVar13 = (**(code **)(*(longlong *)param_1 + 0x148))(param_1), lVar13 != 0)) {
        uStack_e8 = 0;
        local_f0 = FUN_140a57650;
        lVar13 = (**(code **)(*(longlong *)param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar13 + 400) == 0) {
          uVar15 = *(undefined8 *)(lVar13 + 0x3f8);
        }
        else {
          uVar15 = *(undefined8 *)(*(longlong *)(lVar13 + 400) + 0x90);
        }
        local_108 = (code *)0x0;
        uStack_100 = (code *)((ulonglong)uStack_100 & 0xffffffff00000000);
        puVar12 = (undefined8 *)operator_new(0x30,&local_108);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(puVar12 + 1,param_1);
          *(undefined4 *)(puVar12 + 2) = (undefined4)local_f0;
          *(undefined4 *)((longlong)puVar12 + 0x14) = local_f0._4_4_;
          *(undefined4 *)(puVar12 + 3) = uStack_e8;
          *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_e4;
          uVar17 = FDelegateHandle::GenerateNewID();
          puVar12[5] = uVar17;
          *puVar12 = &PTR_FUN_143f77bd0;
        }
        local_c8 = 0;
        local_c0 = 0;
        if (((int)uStack_100 != 0) && (local_108 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_108 + 0x30))(local_108,&local_c8);
        }
        FWeakObjectPtr::operator=(local_b8,0);
        local_b0 = 0;
        local_a8[0] = AK::MemoryMgr::StartProfileThreadUsage;
        local_78 = 0;
        local_68 = 0;
        FUN_142880af0(uVar15,&local_c8);
        TFunction<void___cdecl(void)>::~TFunction<void___cdecl(void)>(local_a8);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
      }
      FUN_140a66ed0(param_1 + 0x2228,param_1);
      FUN_140c480c0(param_1);
      param_1[0x2289] = param_1[0x2288];
      return;
    }
    if ((((*piVar20 == (int)local_108) &&
         (local_108._4_4_ = (int)((ulonglong)local_108 >> 0x20),
         bVar23 = piVar20[1] == local_108._4_4_, bVar23)) ||
        ((cVar7 = FWeakObjectPtr::IsValid(piVar20), cVar7 == '\0' &&
         (cVar7 = FWeakObjectPtr::IsValid(&local_108), cVar7 == '\0')))) &&
       (*(code **)(piVar20 + 2) == uStack_100)) {
      if ((int)((longlong)piVar20 - (longlong)piVar4 >> 4) != -1) goto LAB_140c3681f;
      goto LAB_140c367e4;
    }
    piVar20 = piVar20 + 4;
  } while( true );
}



// FUNCTION 140c37290 FUN_140c37290 body=299 status=ok
// SIG undefined FUN_140c37290(void)

void FUN_140c37290(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  FUN_140c06bc0();
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = FUN_140c4b9e0;
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionVehicleSpawner::OnActorDiedEvent",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  FUN_1407260e0(param_1 + 0x548,param_1,&local_18,local_res8);
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = FUN_140c4b9e0;
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionVehicleSpawner::OnActorDiedEvent",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  FUN_1407260e0(param_1 + 0x558,param_1,&local_18,local_res8);
  return;
}



// FUNCTION 140c373c0 FUN_140c373c0 body=477 status=ok
// SIG undefined FUN_140c373c0(void)

void FUN_140c373c0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_140ea1b50();
  if (param_1[0x8c] != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    lVar10 = 0;
    local_20 = 0;
    FName::FName(&local_res8,L"WaypointTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar6 = param_1[0x8c];
    plVar11 = (longlong *)(lVar6 + 0x180);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    iVar2 = *(int *)(lVar6 + 0x188);
    *(int *)(lVar6 + 0x188) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x18c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
    }
    puVar9 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar11);
    *puVar9 = local_28;
    puVar9[1] = local_24;
    *(undefined8 *)(puVar9 + 2) = local_20;
    if ((*(char *)(param_1[0x8c] + 0x1d8) == '\0') && (*(longlong *)(param_1[0x8c] + 0x1c0) == 0)) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar11 = (longlong *)FUN_142f6c9f0(uVar4);
      if (plVar11 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar11 + 0x700))(plVar11);
        if (cVar3 == '\0') {
          plVar1 = plVar11 + 0xa2;
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)FUN_140c4dd20;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar6;
            *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
            plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
            iVar2 = (int)plVar11[0xa3];
            lVar10 = *plVar7;
            *(int *)(plVar11 + 0xa3) = iVar2 + 1;
            if (*(int *)((longlong)plVar11 + 0x51c) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
            }
            puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
            *puVar8 = plVar5;
            *(undefined4 *)(puVar8 + 1) = 3;
          }
          param_1[0x97] = lVar10;
        }
        else {
          FUN_140c4dd20(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c375a0 FUN_140c375a0 body=477 status=ok
// SIG undefined FUN_140c375a0(void)

void FUN_140c375a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_140ea1890();
  if (param_1[0x8c] != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    lVar10 = 0;
    local_20 = 0;
    FName::FName(&local_res8,L"WaypointTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar6 = param_1[0x8c];
    plVar11 = (longlong *)(lVar6 + 0x180);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    iVar2 = *(int *)(lVar6 + 0x188);
    *(int *)(lVar6 + 0x188) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x18c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
    }
    puVar9 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar11);
    *puVar9 = local_28;
    puVar9[1] = local_24;
    *(undefined8 *)(puVar9 + 2) = local_20;
    if ((*(char *)(param_1[0x8c] + 0x1d8) == '\0') && (*(longlong *)(param_1[0x8c] + 0x1c0) == 0)) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar11 = (longlong *)FUN_142f6c9f0(uVar4);
      if (plVar11 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar11 + 0x700))(plVar11);
        if (cVar3 == '\0') {
          plVar1 = plVar11 + 0xa2;
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)FUN_140c4dd20;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar6;
            *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
            plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
            iVar2 = (int)plVar11[0xa3];
            lVar10 = *plVar7;
            *(int *)(plVar11 + 0xa3) = iVar2 + 1;
            if (*(int *)((longlong)plVar11 + 0x51c) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
            }
            puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
            *puVar8 = plVar5;
            *(undefined4 *)(puVar8 + 1) = 3;
          }
          param_1[0x97] = lVar10;
        }
        else {
          FUN_140c4dd20(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c37780 FUN_140c37780 body=364 status=ok
// SIG undefined FUN_140c37780(void)

void FUN_140c37780(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong *plVar7;
  longlong local_res8;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142223710();
  if (param_1[0x8b] != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,"OnMusicBeat",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar3 = param_1[0x8b];
    plVar7 = (longlong *)(lVar3 + 0x338);
    piVar5 = (int *)*plVar7;
    iVar1 = *(int *)(lVar3 + 0x340);
    local_20 = local_res8;
    for (piVar6 = piVar5; piVar6 != piVar5 + (longlong)iVar1 * 4; piVar6 = piVar6 + 4) {
      if ((((*piVar6 == local_28) && (piVar6[1] == local_24)) ||
          ((cVar2 = FWeakObjectPtr::IsValid(piVar6), cVar2 == '\0' &&
           (cVar2 = FWeakObjectPtr::IsValid(&local_28), cVar2 == '\0')))) &&
         (*(longlong *)(piVar6 + 2) == local_20)) {
        if ((int)((longlong)piVar6 - (longlong)piVar5 >> 4) != -1) goto LAB_140c37899;
        break;
      }
    }
    iVar1 = *(int *)(lVar3 + 0x340);
    *(int *)(lVar3 + 0x340) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x344) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    piVar5 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
    *piVar5 = local_28;
    piVar5[1] = local_24;
    *(longlong *)(piVar5 + 2) = local_20;
LAB_140c37899:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetGameState<APVPGameState>(uVar4);
    if (lVar3 != 0) {
      *(longlong **)(lVar3 + 0x608) = param_1;
    }
  }
  return;
}



// FUNCTION 140c378f0 FUN_140c378f0 body=1065 status=ok
// SIG undefined FUN_140c378f0(void)

void FUN_140c378f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  int *piVar11;
  bool bVar12;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_142f53a10();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && ((char)plVar1[0x25] == '\x03')) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UOakPlayerMissionComponent::OnPawnChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      plVar10 = plVar1 + 0x167;
      FWeakObjectPtr::operator=(&local_48,0);
      uStack_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      uStack_40 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,uStack_40);
      }
      piVar2 = (int *)*plVar10;
      lVar9 = plVar1[0x168];
      lVar7 = (longlong)local_48;
      for (piVar11 = piVar2; local_48 = (code *)lVar7, piVar11 != piVar2 + (longlong)(int)lVar9 * 4;
          piVar11 = piVar11 + 4) {
        local_48._0_4_ = (int)lVar7;
        if (((*piVar11 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)lVar7 >> 0x20), bVar12 = piVar11[1] == local_48._4_4_
            , bVar12)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((bVar12) && (*(ulonglong *)(piVar11 + 2) == uStack_40)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          if ((int)((longlong)piVar11 - (longlong)piVar2 >> 4) != -1) goto LAB_140c37ac7;
          break;
        }
        lVar7 = (longlong)local_48;
      }
      iVar6 = (int)plVar1[0x168];
      lVar7 = (longlong)iVar6;
      *(int *)(plVar1 + 0x168) = iVar6 + 1;
      if (*(int *)((longlong)plVar1 + 0xb44) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar6);
      }
      lVar9 = *plVar10;
      *(int *)(lVar9 + lVar7 * 0x10) = (int)local_48;
      *(int *)(lVar9 + 4 + lVar7 * 0x10) = local_48._4_4_;
      *(ulonglong *)(lVar9 + 8 + lVar7 * 0x10) = uStack_40;
LAB_140c37ac7:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      cVar5 = APlayerController::IsPrimaryPlayer(plVar1);
      if (cVar5 != '\0') {
        lVar7 = *(longlong *)(param_1 + 0x120);
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0(param_1);
        }
        UWorld::GetPlayerControllerIterator(lVar7,&local_48);
        iVar6 = (int)uStack_40;
        do {
          if ((iVar6 < 0) || (*(int *)((longlong)local_48 + 8) <= iVar6)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (!bVar12) goto LAB_140c37bed;
          lVar7 = FWeakObjectPtr::Get();
          if (lVar7 != 0) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if ((bVar12) && (lVar7 = *(longlong *)(lVar7 + 0xc70), lVar7 != 0)) {
              local_res8 = *(undefined8 *)(lVar7 + 0x2d8);
              cVar5 = FWeakObjectPtr::IsValid();
              if (cVar5 != '\0') {
                local_res8 = *(undefined8 *)(lVar7 + 0x2d8);
                lVar7 = FWeakObjectPtr::Get(&local_res8);
                if (lVar7 != 0) {
                  lVar9 = *(longlong *)(param_1 + 0x120);
                  if (lVar9 == 0) {
                    lVar9 = FUN_1423407b0(param_1);
                  }
                  FUN_140e913c0(lVar9,lVar7);
                }
LAB_140c37bed:
                if (((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0) ||
                   (cVar5 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar5 == '\0')) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (!bVar12) {
                  return;
                }
                lVar7 = FUN_142f5cb40(param_1);
                if (lVar7 == 0) {
                  return;
                }
                uStack_40 = uStack_40 & 0xffffffff00000000;
                local_48 = FUN_140c4db00;
                plVar1 = (longlong *)(lVar7 + 0x528);
                plVar10 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar10 != (longlong *)0x0) {
                  *plVar10 = (longlong)&PTR_FUN_143f77b88;
                  FWeakObjectPtr::operator=(plVar10 + 1,param_1);
                  *(int *)(plVar10 + 2) = (int)local_48;
                  *(int *)((longlong)plVar10 + 0x14) = local_48._4_4_;
                  *(int *)(plVar10 + 3) = (int)uStack_40;
                  *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_40._4_4_;
                  lVar9 = FDelegateHandle::GenerateNewID();
                  plVar10[5] = lVar9;
                  *plVar10 = (longlong)&PTR_FUN_143f77bd0;
                }
                if (&local_48 != plVar1) {
                  if (plVar10 == (longlong *)0x0) {
                    if (*(int *)(lVar7 + 0x530) == 0) {
                      return;
                    }
                    plVar10 = (longlong *)*plVar1;
                    if (plVar10 == (longlong *)0x0) {
                      return;
                    }
                    (**(code **)(*plVar10 + 0x28))(plVar10,0);
                    if (*plVar1 != 0) {
                      lVar9 = FMemory::Realloc(*plVar1,0,0);
                      *plVar1 = lVar9;
                    }
                    *(undefined4 *)(lVar7 + 0x530) = 0;
                    return;
                  }
                  (**(code **)(*plVar10 + 0x30))(plVar10,plVar1);
                }
                if (plVar10 == (longlong *)0x0) {
                  return;
                }
                (**(code **)(*plVar10 + 0x28))(plVar10,0);
                lVar7 = FMemory::Realloc(plVar10,0,0);
                if (lVar7 == 0) {
                  return;
                }
                FMemory::Free(lVar7);
                return;
              }
            }
          }
          iVar6 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,iVar6);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 140c37d20 FUN_140c37d20 body=934 status=ok
// SIG undefined FUN_140c37d20(void)

void FUN_140c37d20(longlong param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  int *piVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_38;
  ulonglong uStack_30;
  
  FUN_142f53620();
  lVar6 = *(longlong *)(param_1 + 0x118);
  pwVar12 = (wchar_t *)0x0;
  if (lVar6 != 0) {
    lVar5 = FUN_1407e2730();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((bVar13) && (lVar6 = UCableComponent::GetAttachedActor(lVar6), lVar6 != 0)) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = FUN_140c4baa0;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakSpawnerIconComponent::OnActorSpawnedOrUnsuspend",L"::");
      pwVar8 = pwVar12;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(lVar6 + 0x788,param_1,&local_38,local_res8);
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = FUN_140c4ea80;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakSpawnerIconComponent::OnSpawnedActorDiedOrSuspend",L"::");
      pwVar8 = pwVar12;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(lVar6 + 0x798,param_1,&local_38,local_res8);
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = FUN_140c4ea80;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakSpawnerIconComponent::OnSpawnedActorDiedOrSuspend",L"::");
      pwVar8 = pwVar12;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(lVar6 + 0x7a8,param_1,&local_38,local_res8);
    }
  }
  if ((*(char *)(param_1 + 0x7c0) != '\0') && (lVar6 = *(longlong *)(param_1 + 0x118), lVar6 != 0))
  {
    lVar5 = FUN_14143cfe0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakSpawnerIconComponent::OnVehicleActorSpawnedEvent",L"::");
      while (pwVar7 = pwVar8, pwVar7 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar12 = pwVar7;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      plVar11 = (longlong *)(lVar6 + 0x538);
      FWeakObjectPtr::operator=(&local_38,0);
      uStack_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      uStack_30 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_38), lVar5 != 0)) {
        UObject::FindFunction(lVar5,uStack_30);
      }
      piVar2 = (int *)*plVar11;
      iVar1 = *(int *)(lVar6 + 0x540);
      for (piVar10 = piVar2; piVar10 != piVar2 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == (int)local_38) &&
            (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
            bVar13 = piVar10[1] == local_38._4_4_, bVar13)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if ((bVar13) && (*(longlong *)(piVar10 + 2) == uStack_30)) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if (bVar13) {
          if ((int)((longlong)piVar10 - (longlong)piVar2 >> 4) != -1) goto LAB_140c380b3;
          break;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x540);
      *(int *)(lVar6 + 0x540) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x544) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      puVar9 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
      *puVar9 = (int)local_38;
      puVar9[1] = local_38._4_4_;
      *(ulonglong *)(puVar9 + 2) = uStack_30;
LAB_140c380b3:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
  return;
}



// FUNCTION 140c380d0 FUN_140c380d0 body=934 status=ok
// SIG undefined FUN_140c380d0(void)

void FUN_140c380d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined8 local_res8;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    lVar6 = USoCharacterMovementComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = UCableComponent::GetAttachedActor(lVar2);
      pwVar12 = (wchar_t *)0x0;
      if (lVar6 != 0) {
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = FUN_140c4bae0;
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakSpawnerMissionDirectorComponent::OnActorSpawnedOrUnsuspend",L"::"
                           );
        pwVar13 = pwVar12;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        FUN_1407260e0(lVar6 + 0x788,param_1,&local_38,local_res8);
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = thunk_FUN_140c3bc90;
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakSpawnerMissionDirectorComponent::OnSpawnedActorDiedOrSuspend",
                            L"::");
        pwVar13 = pwVar12;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        FUN_1407260e0(lVar6 + 0x798,param_1,&local_38,local_res8);
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = thunk_FUN_140c3bc90;
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakSpawnerMissionDirectorComponent::OnSpawnedActorDiedOrSuspend",
                            L"::");
        pwVar13 = pwVar12;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res8,pwVar13 + 2,1);
        FUN_1407260e0(lVar6 + 0x7a8,param_1,&local_38,local_res8);
      }
      cVar5 = FUN_1407cde20(lVar2);
      if (*(char *)(param_1 + 0x3b8) != cVar5) {
        *(char *)(param_1 + 0x3b8) = cVar5;
        FUN_142f545a0(param_1);
      }
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = FUN_140c4eaa0;
      plVar11 = (longlong *)(lVar2 + 0x7b0);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      pwVar13 = pwVar12;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_30._4_4_;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar6;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
        iVar1 = *(int *)(lVar2 + 0x7b8);
        pwVar13 = (wchar_t *)*plVar9;
        *(int *)(lVar2 + 0x7b8) = iVar1 + 1;
        if (*(int *)(lVar2 + 0x7bc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
        *puVar10 = plVar8;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      *(wchar_t **)(param_1 + 0x3c0) = pwVar13;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = FUN_140c4bae0;
      plVar8 = (longlong *)(lVar2 + 0x7c8);
      plVar11 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar11 + 1,param_1);
        *(undefined4 *)(plVar11 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar11 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_30._4_4_;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar11[5] = lVar6;
        *plVar11 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        plVar9 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
        iVar1 = *(int *)(lVar2 + 2000);
        pwVar12 = (wchar_t *)*plVar9;
        *(int *)(lVar2 + 2000) = iVar1 + 1;
        if (*(int *)(lVar2 + 0x7d4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar10 = plVar11;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      *(wchar_t **)(param_1 + 0x3c8) = pwVar12;
      FUN_142f534c0(param_1);
    }
  }
  return;
}



// FUNCTION 140c38480 FUN_140c38480 body=1788 status=ok
// SIG undefined FUN_140c38480(void)

void FUN_140c38480(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_140c49830();
  pwVar12 = (wchar_t *)0x0;
  if (param_1[0x95] != 0) {
    plVar1 = param_1 + 0x93;
    lVar6 = FUN_1405ec200(plVar1);
    if (lVar6 != 0) {
      lVar7 = FUN_141410f00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
        if (pwVar8 == (wchar_t *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)param_1[0x94]) && (param_1[0x95] != 0)) {
            lVar6 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar1,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x94) = DAT_1464b56f4;
            }
            pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
            if (pwVar8 != (wchar_t *)0x0) goto LAB_140c38577;
          }
LAB_140c385e3:
          pwVar8 = pwVar12;
        }
        else {
LAB_140c38577:
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140c385e3;
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140c385e3;
        }
        FUN_142dd6360(param_1,pwVar8);
        pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
        if (pwVar8 == (wchar_t *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)param_1[0x94]) && (param_1[0x95] != 0)) {
            lVar6 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar1,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x94) = DAT_1464b56f4;
            }
            pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
            if (pwVar8 != (wchar_t *)0x0) goto LAB_140c38665;
          }
LAB_140c386d1:
          pwVar8 = pwVar12;
        }
        else {
LAB_140c38665:
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140c386d1;
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140c386d1;
        }
        FUN_142dd6bd0(param_1,pwVar8);
      }
    }
  }
  iVar5 = FUN_142235230(param_1);
  if ((((iVar5 == 3) && (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) &&
      (lVar6 = UWorld::GetGameState<APVPGameState>(lVar6), lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x701) != '\0')) {
    FUN_140c494b0(param_1);
    goto LAB_140c38b28;
  }
  if (param_1[0x90] != 0) {
    plVar1 = param_1 + 0x8e;
    lVar6 = FUN_140c49920(plVar1);
    if (lVar6 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnRockNRollStarted",L"::");
      pwVar8 = pwVar12;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c3880c;
        }
LAB_140c38842:
        pwVar8 = pwVar12;
      }
      else {
LAB_140c3880c:
        lVar6 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
             ) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c38842;
      }
      FUN_14074ba20(pwVar8 + 0x2a8,param_1,FUN_140c4c1b0,local_res10);
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnRockNRollFinished",L"::");
      pwVar8 = pwVar12;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c3891f;
        }
LAB_140c38955:
        pwVar8 = pwVar12;
      }
      else {
LAB_140c3891f:
        lVar6 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
             ) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c38955;
      }
      FUN_14074ba20(pwVar8 + 0x2c0,param_1,FUN_140c4e440,local_res18);
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar10,&local_48);
      while( true ) {
        if ((local_40 < 0) || (*(int *)(local_48 + 8) <= local_40)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        plVar11 = (longlong *)FWeakObjectPtr::Get();
        if (plVar11 != (longlong *)0x0) {
          lVar6 = FUN_14145f370();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (cVar4 = (**(code **)(*plVar11 + 0x768))(), cVar4 != '\0')) &&
             (plVar11 = (longlong *)plVar11[0xa5], plVar11 != (longlong *)0x0)) {
            local_38 = (undefined4)param_1[0xc6];
            uStack_34 = *(undefined4 *)((longlong)param_1 + 0x634);
            uStack_30 = (undefined4)param_1[199];
            uStack_2c = *(undefined4 *)((longlong)param_1 + 0x63c);
            (**(code **)(*plVar11 + 0x860))(plVar11,0x3f800000,&local_38,0);
            FUN_140d01000();
          }
        }
        local_40 = local_40 + 1;
      }
      iVar5 = FUN_142235230(param_1);
      if (2 < iVar5) goto LAB_140c38b28;
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c38add;
        }
LAB_140c38b13:
        pwVar8 = pwVar12;
      }
      else {
LAB_140c38add:
        lVar6 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
             ) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c38b13;
      }
      FUN_1407ed900(pwVar8);
      goto LAB_140c38b28;
    }
  }
  FUN_140c4e440(param_1);
LAB_140c38b28:
  if (param_1[0xd4] != 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar10 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar10,param_1 + 0xd4);
    param_1[0xd4] = 0;
  }
  return;
}



// FUNCTION 140c38b80 FUN_140c38b80 body=812 status=ok
// SIG undefined FUN_140c38b80(void)

void FUN_140c38b80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_c8 [3];
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*param_1 + 0x768))();
  if (cVar6 == '\0') {
    return;
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 400), lVar7 == 0)) {
LAB_140c38c1d:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140c38c1d;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = *(longlong *)(DAT_146b33f38 + 0x58);
  uVar9 = FUN_14301f8f0();
  lVar10 = (**(code **)(*param_2 + 0x628))(param_2,uVar9);
  if (lVar10 == 0) {
LAB_140c38cab:
    lVar10 = 0;
  }
  else {
    lVar11 = FUN_14142bde0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140c38cab;
    if (*(longlong *)(lVar10 + 0x210) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x210) + 0xb8);
      goto LAB_140c38cb0;
    }
  }
  lVar11 = 0;
LAB_140c38cb0:
  if (lVar8 == 0) {
    lVar12 = 0;
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar8 + 0x358);
    lVar8 = *(longlong *)(lVar8 + 0x360);
  }
  if ((((lVar10 != 0) && (lVar7 != 0)) && (lVar11 != 0)) && ((lVar12 != 0 && (lVar8 != 0)))) {
    FUN_142dcf3a0(param_1);
    if ((local_c8[2] != 0) && ((lVar11 == lVar12 || (lVar11 == lVar8)))) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
      FUN_142ff3000(lVar10,local_98);
      local_c8[0] = 0;
      local_c8[1] = 0;
      cVar6 = FUN_142ff5c90(local_98,local_c8,1);
      if (cVar6 != '\0') {
        local_a8 = local_c8[2];
        plStack_a0 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
        }
        uVar9 = FUN_140bb7220(lVar7);
        FUN_140d6b2d0(uVar9,&local_a8,local_c8,2);
        plVar3 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_a0 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
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
      }
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_b0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plStack_b0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c38eb0 FUN_140c38eb0 body=449 status=ok
// SIG undefined FUN_140c38eb0(void)

void FUN_140c38eb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  plVar5 = (longlong *)0x0;
  iVar3 = 0;
  plVar4 = plVar5;
  if (*(longlong *)(param_1 + 0x928) != 0) {
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x178) + 0x30))();
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 0x60);
  if (lVar2 != 0) {
    plVar6 = (longlong *)*plVar4;
    plVar7 = plVar6 + (int)plVar4[1];
    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar2) goto LAB_140c39011;
    }
    plVar6 = (longlong *)plVar4[2];
    plVar7 = plVar6 + (int)plVar4[3];
    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar2) goto LAB_140c39011;
    }
  }
  lVar2 = *(longlong *)(lVar1 + 0x58);
  if (lVar2 != 0) {
    plVar6 = (longlong *)*plVar4;
    plVar7 = plVar6 + (int)plVar4[1];
    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar2) goto LAB_140c39016;
    }
    plVar6 = (longlong *)plVar4[2];
    plVar7 = plVar6 + (int)plVar4[3];
    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar2) goto LAB_140c39016;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x50);
  if (lVar1 == 0) {
    return;
  }
  plVar6 = (longlong *)*plVar4;
  plVar7 = plVar6 + (int)plVar4[1];
  for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
    if (*plVar6 == lVar1) goto LAB_140c3901b;
  }
  plVar7 = (longlong *)plVar4[2];
  plVar4 = plVar7 + (int)plVar4[3];
  while( true ) {
    if (plVar7 == plVar4) {
      return;
    }
    if (*plVar7 == lVar1) break;
    plVar7 = plVar7 + 1;
  }
LAB_140c3901b:
  uVar8 = 1;
LAB_140c3901e:
  if (param_2 != 0) {
    plVar5 = (longlong *)UWorld::GetGameState<APVPGameState>(param_2);
  }
  if (*(longlong *)(param_1 + 0x908) != 0) {
    iVar3 = FUN_142dd0630();
  }
  if ((plVar5 != (longlong *)0x0) && (iVar3 != 0)) {
    FUN_141425fb0(plVar5,uVar8,iVar3);
  }
  return;
LAB_140c39011:
  uVar8 = 3;
  goto LAB_140c3901e;
LAB_140c39016:
  uVar8 = 2;
  goto LAB_140c3901e;
}



// FUNCTION 140c39080 FUN_140c39080 body=140 status=ok
// SIG undefined FUN_140c39080(void)

undefined8 FUN_140c39080(longlong *param_1)

{
  longlong lVar1;
  
  if (((((char)param_1[0x9a] == '\0') && (0.5 < *(float *)(param_1 + 0x9c))) &&
      (0.5 < *(float *)((longlong)param_1 + 0x4dc))) && (0.0001 < *(float *)(param_1 + 0x9b))) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(float *)(lVar1 + 0x79c) - *(float *)(param_1 + 0x9d) <
          *(float *)((longlong)param_1 + 0x4dc) * *(float *)(param_1 + 0x9b)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140c39110 FUN_140c39110 body=181 status=ok
// SIG undefined FUN_140c39110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140c39110(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_142caac20(param_2,local_38,param_1);
    fVar4 = (float)FUN_142cc4350(uVar3,0);
    uVar3 = FUN_142caac20(lVar1 + 0xdb0,local_38,param_1);
    fVar5 = (float)FUN_142cc4350(uVar3,0);
    iVar2 = (int)(fVar5 * fVar4);
  }
  return iVar2;
}



// FUNCTION 140c391d0 FUN_140c391d0 body=181 status=ok
// SIG undefined FUN_140c391d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140c391d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_142caac20(param_2,local_38,param_1);
    fVar4 = (float)FUN_142cc4350(uVar3,0);
    uVar3 = FUN_142caac20(lVar1 + 0xde8,local_38,param_1);
    fVar5 = (float)FUN_142cc4350(uVar3,0);
    iVar2 = (int)(fVar5 * fVar4);
  }
  return iVar2;
}



// FUNCTION 140c39290 FUN_140c39290 body=460 status=ok
// SIG undefined FUN_140c39290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140c39290(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 uVar10;
  float fVar11;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 200);
  if (lVar1 == 0) {
    return 0;
  }
  iVar4 = 0;
  lVar6 = FUN_1405ec200(param_1 + 0x23);
  if (lVar6 != 0) {
    lVar7 = FUN_1414ba190();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_140e7e6f0(uVar8);
      if (lVar7 != 0) {
        uVar10 = 0;
        if ((param_1[0x1b] != 0) &&
           ((lVar2 = *(longlong *)(param_1[0x1b] + 0x18), lVar2 == DAT_14686c1f8 ||
            (lVar2 == DAT_14686c200)))) {
          uVar10 = 1;
        }
        iVar4 = FUN_140e818f0(lVar7,lVar6,1,uVar10);
        if (iVar4 != 0) goto LAB_140c393eb;
      }
    }
  }
  if ((param_1[5] != 0) && (lVar6 = *(longlong *)(param_1[5] + 0x118), lVar6 != 0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar9 = (longlong *)FUN_140cffa10(lVar6), plVar9 != (longlong *)0x0)) {
      iVar4 = (**(code **)(*plVar9 + 0x408))(plVar9);
    }
  }
LAB_140c393eb:
  iVar5 = 1;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = FUN_140a32ac0(lVar1,iVar5 + 1);
  iVar5 = FUN_140a32ac0(lVar1,iVar5);
  uVar8 = FUN_142caac20(param_2,local_38,param_1);
  fVar11 = (float)FUN_142cc4350(uVar8);
  return (int)((float)(iVar4 - iVar5) * fVar11);
}



// FUNCTION 140c39460 FUN_140c39460 body=42 status=ok
// SIG undefined FUN_140c39460(void)

void FUN_140c39460(undefined8 *param_1,undefined8 param_2)

{
  FUN_140c32ae0(param_1[1],param_2,*(undefined1 *)*param_1,*(undefined1 *)(param_1 + 2));
  *(undefined1 *)*param_1 = 0;
  return;
}


