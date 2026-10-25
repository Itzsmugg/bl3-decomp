// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a926d0 FUN_140a926d0 body=3580 status=ok
// SIG undefined FUN_140a926d0(void)

ulonglong FUN_140a926d0(longlong *param_1,undefined1 param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_res8 [2];
  longlong local_1a8;
  longlong *plStack_1a0;
  longlong local_198;
  int *local_190;
  int local_188;
  undefined4 local_184;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  int local_168;
  int local_164;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined1 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0;
  undefined1 local_a0 [104];
  
  bVar19 = false;
  local_res8[0] = 0;
  plVar13 = (longlong *)param_1[0x23];
  if (plVar13 == (longlong *)0x0) {
LAB_140a9276e:
    local_180 = (longlong *)0x0;
LAB_140a92773:
    plVar13 = local_170;
    if ((param_1[0x5f] == 0) || (param_1[0x60] == 0)) {
LAB_140a92807:
      bVar20 = true;
    }
    else {
      in_RAX = 0;
      puVar1 = (uint *)(param_1[0x60] + 8);
      LOCK();
      uVar3 = *puVar1;
      if (uVar3 == 0) {
        *puVar1 = 0;
      }
      else {
        in_RAX = (ulonglong)uVar3;
      }
      UNLOCK();
      if ((int)in_RAX < 1) goto LAB_140a92807;
      local_170 = (longlong *)param_1[0x60];
      local_178 = (longlong *)0x0;
      bVar19 = true;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)local_170[1];
        bVar20 = iVar4 == 0;
        if (bVar20) {
          *(int *)(local_170 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar20) {
          LOCK();
          bVar20 = iVar4 == (int)local_170[1];
          if (bVar20) {
            *(int *)(local_170 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar20) {
            local_178 = (longlong *)param_1[0x5f];
            goto LAB_140a927e0;
          }
          LOCK();
          iVar4 = (int)local_170[1];
          bVar20 = iVar4 == 0;
          if (bVar20) {
            *(int *)(local_170 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        local_170 = (longlong *)0x0;
      }
LAB_140a927e0:
      plVar13 = local_170;
      in_RAX = (**(code **)(*local_178 + 0x38))();
      if ((char)in_RAX != '\0') goto LAB_140a92807;
      bVar20 = false;
    }
    plVar10 = local_170;
    if ((bVar19) && (plVar13 != (longlong *)0x0)) {
      LOCK();
      plVar13 = plVar13 + 1;
      lVar5 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      uVar3 = (int)lVar5 - 1;
      in_RAX = (ulonglong)uVar3;
      if (uVar3 == 0) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar15 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        in_RAX = (ulonglong)(iVar4 - 1U);
        if (iVar4 - 1U == 0) {
          in_RAX = (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    if (bVar20) goto LAB_140a92d5e;
  }
  else {
    local_180 = plVar13;
    lVar5 = FUN_1413f82e0();
    iVar4 = *(int *)(lVar5 + 0x90);
    uVar6 = (longlong)iVar4;
    if ((*(int *)(plVar13[2] + 0x90) < iVar4) ||
       (uVar6 = *(ulonglong *)(plVar13[2] + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar4 * 8) != lVar5 + 0x88)) {
      in_RAX = uVar6 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)in_RAX == '\0') goto LAB_140a9276e;
    in_RAX = (**(code **)(*plVar13 + 0xc50))(plVar13);
    if ((char)in_RAX == '\0') goto LAB_140a92773;
  }
  plVar13 = (longlong *)param_1[0x23];
  if (plVar13 == (longlong *)0x0) goto LAB_140a92d5e;
  local_f8 = FUN_142e27720();
  local_198 = (**(code **)(*plVar13 + 0x628))(plVar13,local_f8);
  in_RAX = 0;
  if ((local_198 == 0) || (in_RAX = FUN_1407c3030(param_1 + 0x2f), (char)in_RAX != '\0'))
  goto LAB_140a92d5e;
  in_RAX = param_1[0x24];
  if (in_RAX == 0) {
    in_RAX = FUN_1423407b0(param_1);
  }
  if (*(float *)(in_RAX + 0x790) < *(float *)(param_1 + 0x5e)) goto LAB_140a92d5e;
  lVar5 = FUN_140a8cf10(param_1,local_res8,param_1 + 0x61,param_2);
  param_1[0x59] = lVar5;
  in_RAX = 0;
  if (lVar5 == 0) goto LAB_140a92d5e;
  iVar4 = (int)param_1[0x78];
  lVar12 = param_1[0x77];
  bVar19 = false;
  bVar20 = false;
  local_190 = (int *)0x0;
  local_188 = iVar4;
  if (iVar4 == 0) {
    local_184 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_190,iVar4,0);
    lVar12 = lVar12 - (longlong)local_190;
    piVar15 = local_190 + 2;
    do {
      piVar15[-2] = *(int *)(lVar12 + -8 + (longlong)piVar15);
      piVar15[-1] = *(int *)(lVar12 + -4 + (longlong)piVar15);
      *(undefined8 *)piVar15 = *(undefined8 *)(lVar12 + (longlong)piVar15);
      piVar15 = piVar15 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = param_1[0x59];
  }
  iVar4 = local_188;
  piVar15 = local_190;
  if (*(longlong *)(lVar5 + 0x18) == DAT_146867410) {
    if (param_3 != 0) {
      param_1[0x61] = param_3;
    }
    plVar13 = (longlong *)param_1[0x23];
    local_f0 = AGFireballProjectile::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar13 + 0x628))(plVar13,local_f0);
    if (lVar5 == 0) {
LAB_140a92d8c:
      bVar19 = false;
      lVar5 = FUN_140a8cf10(param_1,local_res8,param_1 + 0x61,0);
      param_1[0x59] = lVar5;
      if (lVar5 == 0) {
        in_RAX = 0;
        if (piVar15 != (int *)0x0) {
          in_RAX = FMemory::Free(piVar15);
        }
        goto LAB_140a92d5e;
      }
    }
    else {
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar12 + 0x38) < DAT_146867480) &&
         (_Init_thread_header(&DAT_146867480), DAT_146867480 == -1)) {
        FWeakObjectPtr::operator=(&DAT_146867478,0);
        _Init_thread_footer(&DAT_146867480);
      }
      cVar2 = FWeakObjectPtr::IsValid(&DAT_146867478);
      if (cVar2 == '\0') {
        uVar7 = FUN_14171bfe0();
        uVar7 = FUN_141799410(uVar7,0xffffffffffffffff,
                              L"/Game/PlayerCharacters/SirenBrawler/_Shared/_Design/Passives/BrawlTree/Overrun/PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C"
                             );
        FWeakObjectPtr::operator=(&DAT_146867478,uVar7);
      }
      plVar13 = local_180;
      local_148 = CONCAT31(local_148._1_3_,0xff);
      uStack_140 = 0;
      local_138 = (ulonglong)local_138._4_4_ << 0x20;
      if (local_180 != (longlong *)0x0) {
        if ((*(int *)(lVar12 + 0x38) < DAT_146867460) &&
           (_Init_thread_header(&DAT_146867460), DAT_146867460 == -1)) {
          FWeakObjectPtr::operator=(&DAT_146867458,0);
          _Init_thread_footer(&DAT_146867460);
        }
        cVar2 = FWeakObjectPtr::IsValid(&DAT_146867458);
        if (cVar2 == '\0') {
          uVar7 = FUN_142e19540();
          uVar7 = FUN_141799410(uVar7,0xffffffffffffffff,
                                L"/Game/PlayerCharacters/SirenBrawler/_Shared/_Design/Passives/BrawlTree/Overrun/Resource_Siren_Overrun_Cooldown.Resource_Siren_Overrun_Cooldown"
                               );
          FWeakObjectPtr::operator=(&DAT_146867458,uVar7);
        }
        local_e8 = FUN_142e1a5a0();
        lVar8 = (**(code **)(*plVar13 + 0x628))(plVar13,local_e8);
        if (lVar8 != 0) {
          uVar7 = FWeakObjectPtr::Get(&DAT_146867458);
          puVar9 = (undefined4 *)FUN_142d62190(lVar8,local_a0,uVar7);
          local_148 = *puVar9;
          uStack_144 = puVar9[1];
          uStack_140 = *(undefined8 *)(puVar9 + 2);
          local_138 = *(longlong *)(puVar9 + 4);
        }
      }
      uVar7 = FWeakObjectPtr::Get(&DAT_146867478);
      lVar5 = FUN_1430ec580(lVar5,uVar7);
      if (lVar5 != 0) {
        FWeakObjectPtr::operator=(&local_168,0);
        local_160 = 0;
        FName::FName(&local_128,L"BlitzOnPerformMelee",1);
        FWeakObjectPtr::operator=(&local_168,lVar5);
        local_160 = local_128;
        for (piVar18 = piVar15; piVar18 != piVar15 + (longlong)iVar4 * 4; piVar18 = piVar18 + 4) {
          if (((*piVar18 == local_168) && (piVar18[1] == local_164)) ||
             ((cVar2 = FWeakObjectPtr::IsValid(piVar18), cVar2 == '\0' &&
              (cVar2 = FWeakObjectPtr::IsValid(&local_168), cVar2 == '\0')))) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          if ((bVar19) && (*(longlong *)(piVar18 + 2) == local_160)) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          if (bVar19) {
            iVar17 = (int)((longlong)piVar18 - (longlong)piVar15 >> 4);
            if (iVar17 != -1) {
              iVar14 = (iVar4 - iVar17) + -1;
              if (0 < iVar14) {
                iVar14 = 1;
              }
              if (iVar14 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (piVar15 + (longlong)iVar17 * 4,piVar15 + (longlong)(iVar4 - iVar14) * 4,
                           (longlong)iVar14 << 4);
              }
              local_188 = iVar4 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_190);
            }
            break;
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(&local_190);
        piVar15 = local_190;
      }
      plVar13 = local_180;
      if ((param_1[0x61] == 0) ||
         (((lVar5 != 0 && (*(char *)(lVar5 + 0xa1) != '\x03')) ||
          (lVar5 = local_180[0x120], lVar5 == 0)))) goto LAB_140a92d8c;
      if ((*(int *)(lVar12 + 0x38) < DAT_146867490) &&
         (_Init_thread_header(&DAT_146867490), DAT_146867490 == -1)) {
        FWeakObjectPtr::operator=(&DAT_146867488,0);
        _Init_thread_footer(&DAT_146867490);
      }
      cVar2 = FWeakObjectPtr::IsValid(&DAT_146867488);
      if (cVar2 == '\0') {
        uVar7 = FUN_14171bfe0();
        uVar7 = FUN_141799410(uVar7,0xffffffffffffffff,
                              L"/Game/PlayerCharacters/SirenBrawler/_Shared/_Design/Passives/BrawlTree/Overrun/ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C"
                             );
        FWeakObjectPtr::operator=(&DAT_146867488,uVar7);
      }
      uVar7 = FWeakObjectPtr::Get(&DAT_146867488);
      cVar2 = FUN_142d00590(lVar5,uVar7,param_1[0x61]);
      if (cVar2 == '\0') goto LAB_140a92d8c;
      bVar19 = true;
      bVar20 = true;
      if (((char)plVar13[0x25] == '\x03') && (cVar2 = FUN_142d52a00(&local_148), cVar2 != '\0')) {
        uVar7 = FUN_142d52a20(&local_148);
        uVar7 = FArchive::operator<<(uVar7);
        FUN_142d6f560(uVar7,0,1);
      }
    }
    local_100 = param_1[0x61];
    local_108 = (byte)local_res8[0] != '\0';
    local_110 = param_1[0x59];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(&local_190);
  }
  if (local_190 != (int *)0x0) {
    FMemory::Free(local_190);
  }
  in_RAX = param_1[0x59];
  lVar5 = 0xb0;
  if ((byte)local_res8[0] != '\0') {
    lVar5 = 0xa8;
  }
  uVar6 = *(ulonglong *)(lVar5 + in_RAX);
  if (uVar6 != 0) {
    in_RAX = FUN_142e20fc0();
    uVar16 = uVar6;
    do {
      if (uVar16 == in_RAX) {
        iVar4 = FUN_14233f450(param_1);
        if ((iVar4 == 3) && (!bVar19)) {
          *(int *)(param_1 + 0x5a) = (int)param_1[0x5a] + 1;
          param_1[0x5c] = param_1[0x59];
          param_1[0x5b] = uVar6;
          (**(code **)(*param_1 + 0x260))(param_1);
        }
        lVar5 = local_198;
        plVar13 = param_1 + 0x5f;
        if ((*plVar13 == 0) || (param_1[0x60] == 0)) goto LAB_140a92ee2;
        piVar15 = (int *)(param_1[0x60] + 8);
        LOCK();
        iVar4 = *piVar15;
        if (iVar4 == 0) {
          *piVar15 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (iVar4 < 1) goto LAB_140a92ee2;
        local_150 = param_1[0x60];
        local_158 = 0;
        if (local_150 == 0) goto LAB_140a92e79;
        LOCK();
        iVar4 = *(int *)(local_150 + 8);
        bVar21 = iVar4 == 0;
        if (bVar21) {
          *(int *)(local_150 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        goto joined_r0x000140a92e5e;
      }
      uVar16 = *(ulonglong *)(uVar16 + 0x30);
    } while (uVar16 != 0);
  }
LAB_140a92d5e:
  return in_RAX & 0xffffffffffffff00;
joined_r0x000140a92e5e:
  if (bVar21) goto LAB_140a92e74;
  LOCK();
  bVar21 = iVar4 == *(int *)(local_150 + 8);
  if (bVar21) {
    *(int *)(local_150 + 8) = iVar4 + 1;
  }
  UNLOCK();
  if (bVar21) {
    if (local_150 != 0) {
      local_158 = *plVar13;
    }
    goto LAB_140a92e79;
  }
  LOCK();
  iVar4 = *(int *)(local_150 + 8);
  bVar21 = iVar4 == 0;
  if (bVar21) {
    *(int *)(local_150 + 8) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  goto joined_r0x000140a92e5e;
LAB_140a92e74:
  local_150 = 0;
LAB_140a92e79:
  FUN_142c84750(local_198);
  if (plVar13 != local_c0) {
    *plVar13 = 0;
    plVar10 = (longlong *)param_1[0x60];
    param_1[0x60] = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar15 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
LAB_140a92ee2:
  local_1a8 = 0;
  plStack_1a0 = (longlong *)0x0;
  if (!bVar19) {
    plVar10 = (longlong *)FUN_140a947f0(param_1,local_d0,lVar5,uVar6);
    if (&local_1a8 != plVar10) {
      local_1a8 = *plVar10;
      *plVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1a0);
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_c8 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar15 = (int *)((longlong)local_c8 + 0xc);
        iVar4 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8);
        }
      }
    }
  }
  fVar25 = 0.0;
  fVar23 = 0.0;
  lVar5 = local_1a8;
  plVar10 = plStack_1a0;
  if (local_1a8 != 0) {
    *plVar13 = local_1a8;
    plVar13 = (longlong *)param_1[0x60];
    if (plStack_1a0 != plVar13) {
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_1a0 + 0xc) = *(int *)((longlong)plStack_1a0 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)param_1[0x60];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar15 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (plVar13 != (longlong *)0x0)) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      param_1[0x60] = (longlong)plStack_1a0;
    }
    plVar10 = plStack_1a0;
    lVar5 = local_1a8;
    lVar12 = *(longlong *)(local_1a8 + 0x10);
    if (lVar12 != 0) {
      lVar8 = UThrobber::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (bVar21) {
        fVar24 = *(float *)(lVar12 + 0x150);
        if (fVar24 <= 0.0) {
          fVar24 = 1.0;
        }
        uVar7 = FUN_142c6f640(lVar5,1);
        uVar11 = FUN_1412ea910();
        lVar12 = FUN_142c9e5b0(uVar7,uVar11);
        if (lVar12 == 0) {
          uVar7 = FUN_142c6f640(lVar5,2);
          uVar11 = FUN_1412ea910();
          lVar12 = FUN_142c9e5b0(uVar7,uVar11);
          if (lVar12 != 0) goto LAB_140a93081;
        }
        else {
LAB_140a93081:
          fVar23 = (float)FAnimNotifyEvent::GetTriggerTime(lVar12);
          fVar23 = fVar23 / fVar24;
        }
        uVar7 = FUN_142c6f640(lVar5,1);
        uVar11 = FUN_1412eab40();
        lVar12 = FUN_142c9e5b0(uVar7,uVar11);
        if (lVar12 == 0) {
          uVar7 = FUN_142c6f640(lVar5,2);
          uVar11 = FUN_1412eab40();
          lVar12 = FUN_142c9e5b0(uVar7,uVar11);
          if (lVar12 != 0) goto LAB_140a930d5;
        }
        else {
LAB_140a930d5:
          fVar25 = (float)FAnimNotifyEvent::GetTriggerTime();
          fVar25 = fVar25 / fVar24;
        }
        lVar12 = param_1[0x24];
        if ((byte)local_res8[0] == '\0') {
          if (lVar12 == 0) {
            lVar12 = FUN_1423407b0();
          }
          fVar24 = *(float *)(lVar12 + 0x790) + fVar23 + *(float *)(param_1[0x59] + 0xcc);
        }
        else {
          if (lVar12 == 0) {
            lVar12 = FUN_1423407b0();
          }
          fVar24 = *(float *)(lVar12 + 0x790) + fVar23 + *(float *)(param_1[0x59] + 200);
        }
        *(float *)(param_1 + 0x5e) = fVar24;
      }
    }
    local_120 = FUN_140a91c50;
    uStack_118 = 0;
    plVar13 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_b0 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      *(undefined4 *)(plVar13 + 2) = (undefined4)local_120;
      *(undefined4 *)((longlong)plVar13 + 0x14) = local_120._4_4_;
      *(undefined4 *)(plVar13 + 3) = uStack_118;
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_114;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar12;
      *plVar13 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x58,1);
      (**(code **)(*plVar13 + 0x20))(plVar13);
      iVar4 = *(int *)(lVar5 + 0x60);
      *(int *)(lVar5 + 0x60) = iVar4 + 1;
      if (*(int *)(lVar5 + 100) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x58);
      }
      lVar12 = *(longlong *)(lVar5 + 0x58);
      *(longlong **)(lVar12 + (longlong)iVar4 * 0x10) = plVar13;
      *(undefined4 *)(lVar12 + 8 + (longlong)iVar4 * 0x10) = 3;
      bVar19 = bVar20;
    }
  }
  if ((byte)local_res8[0] == '\0') {
    param_1[0x62] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
    param_1[0x61] = 0;
    goto LAB_140a93398;
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if ((lVar5 != 0) && (lVar12 = *(longlong *)(lVar5 + 0x10), lVar12 != 0)) {
    lVar8 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (bVar20) {
      *(longlong *)(lVar5 + 0x18) = local_198;
      uVar7 = FUN_142c6f8e0(lVar5,1);
      uVar11 = FUN_1412ea840();
      lVar8 = FUN_142c9e5b0(uVar7,uVar11);
      if (lVar8 == 0) {
        uVar7 = FUN_142c6f8e0(lVar5,2);
        uVar11 = FUN_1412ea840();
        lVar8 = FUN_142c9e5b0(uVar7,uVar11);
        if (lVar8 == 0) goto LAB_140a932d7;
      }
      fVar24 = *(float *)(lVar12 + 0x150);
      if (fVar24 <= 0.0) {
        fVar24 = 1.0;
      }
      fVar22 = (float)FAnimNotifyEvent::GetTriggerTime(lVar8);
      *(float *)(param_1 + 0x5d) = fVar22 / fVar24;
    }
  }
LAB_140a932d7:
  plVar13 = (longlong *)FUN_140a8d4b0(param_1,local_d8,param_1[0x61]);
  param_1[0x62] = *plVar13;
  if (fVar25 == 0.0) {
    FUN_140a84ba0(param_1,*(float *)(param_1 + 0x5d),param_1[0x61]);
    fVar25 = *(float *)(param_1 + 0x5d);
  }
  else {
    fVar25 = *(float *)(param_1 + 0x5d) - fVar25;
    *(float *)(param_1 + 0x5d) = fVar25;
  }
  plVar13 = local_180;
  if (fVar23 <= fVar25) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = fVar23 - fVar25;
  }
  *(float *)((longlong)param_1 + 0x2ec) = fVar23;
  if (((*(byte *)((longlong)local_180 + 0x56c) & 1) != 0) &&
     (cVar2 = (**(code **)(*local_180 + 0x980))(local_180), cVar2 != '\0')) {
    (**(code **)(*plVar13 + 0x8e0))(plVar13,0);
  }
LAB_140a93398:
  iVar4 = FUN_14233f450(param_1);
  if (iVar4 < 3) {
    if (bVar19) {
      FUN_1414b2240(param_1,param_1[0x61]);
    }
    else {
      FUN_1414b2200(param_1);
    }
  }
  plVar13 = plStack_1a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar10 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_1a0)(plStack_1a0);
      LOCK();
      piVar15 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
      }
    }
  }
  return (ulonglong)(byte)local_res8[0];
}



// FUNCTION 140a934d0 FUN_140a934d0 body=1073 status=ok
// SIG undefined FUN_140a934d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a934d0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  longlong lStack_290;
  uint local_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  longlong *local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint uStack_25c;
  longlong *local_258;
  longlong lStack_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  uVar13 = 0;
  if (param_1[0xa2] != 0) {
    lVar6 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    for (lVar9 = param_1[0xa2]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar6) {
        if (param_1[0xa2] != 0) {
          if (param_1[0x8b] == 0) {
            local_2a8 = 0xbf800000bf800000;
            uStack_2a0 = 0xbf800000;
            local_298 = (longlong *)0x3f8000003f800000;
            lStack_290 = CONCAT44(lStack_290._4_4_,0x3f800000);
            uVar12 = uVar13;
            if (param_1[0xa2] != 0) {
              uVar8 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
              for (uVar4 = param_1[0xa2];
                  (uVar12 = uVar13, uVar4 != 0 && (uVar12 = param_1[0xa2], uVar4 != uVar8));
                  uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
              }
            }
            uVar10 = FUN_142d0a300(local_238);
            local_2b8 = 0;
            local_2c8 = &local_2a8;
            local_2c0 = 0;
            FUN_140a86fb0(param_1,uVar12,0,uVar10);
            FUN_1409c53c0(local_238);
          }
          else {
            local_278 = (longlong *)0x0;
            local_270 = 0;
            cVar5 = FUN_142d472a0(param_1,param_1 + 0x8b,&local_278);
            if (cVar5 != '\0') {
              uVar12 = (ulonglong)
                       ((longlong)(local_278 + (int)local_270) + (7 - (longlong)local_278)) >> 3;
              if (local_278 + (int)local_270 < local_278) {
                uVar12 = uVar13;
              }
              plVar14 = local_278;
              if (uVar12 != 0) {
                do {
                  lVar9 = *plVar14;
                  if (lVar9 != 0) {
                    if ((char)param_1[0xe7] != '\0') {
                      plVar2 = (longlong *)param_1[0xe9];
                      for (plVar11 = plVar2; plVar11 != plVar2 + (int)param_1[0xea];
                          plVar11 = plVar11 + 1) {
                        if (*plVar11 == lVar9) {
                          if ((int)((longlong)plVar11 - (longlong)plVar2 >> 3) != -1)
                          goto LAB_140a936f7;
                          break;
                        }
                      }
                    }
                    local_2a8 = 0xbf800000bf800000;
                    uStack_2a0 = 0xbf800000;
                    local_298 = (longlong *)0x3f8000003f800000;
                    lStack_290 = CONCAT44(lStack_290._4_4_,0x3f800000);
                    lVar6 = 0;
                    if (param_1[0xa2] != 0) {
                      lVar7 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
                      for (lVar3 = param_1[0xa2];
                          (lVar6 = 0, lVar3 != 0 && (lVar6 = param_1[0xa2], lVar3 != lVar7));
                          lVar3 = *(longlong *)(lVar3 + 0x30)) {
                      }
                    }
                    uVar10 = FUN_142d0a300(local_238);
                    local_2b8 = 0;
                    local_2c8 = &local_2a8;
                    local_2c0 = 0;
                    FUN_140a86fb0(param_1,lVar6,lVar9,uVar10);
                    FUN_1409c53c0(local_238);
                    if ((char)param_1[0xe7] != '\0') {
                      iVar1 = (int)param_1[0xea];
                      *(int *)(param_1 + 0xea) = iVar1 + 1;
                      if (*(int *)((longlong)param_1 + 0x754) < iVar1 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (param_1 + 0xe9,iVar1);
                      }
                      *(longlong *)(param_1[0xe9] + (longlong)iVar1 * 8) = lVar9;
                    }
                  }
LAB_140a936f7:
                  uVar13 = uVar13 + 1;
                  plVar14 = plVar14 + 1;
                } while (uVar13 != uVar12);
              }
            }
            if (local_278 != (longlong *)0x0) {
              FMemory::Free(local_278);
            }
          }
        }
        break;
      }
    }
  }
  local_248 = _DAT_146867000 & _DAT_146867010;
  uStack_244 = uRam0000000146867004 & uRam0000000146867014;
  uStack_240 = uRam0000000146867008 & uRam0000000146867018;
  uStack_23c = uRam000000014686700c & uRam000000014686701c;
  local_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25c = uRam000000014686700c;
  local_258 = (longlong *)0x0;
  lStack_250 = 0;
  cVar5 = FUN_140a8c2f0(param_1,&local_268);
  if (cVar5 != '\0') {
    if (param_1[0xe3] != 0) {
      local_2a8 = CONCAT44(uStack_264,local_268);
      uStack_2a0 = CONCAT44(uStack_25c,uStack_260);
      local_288 = local_248;
      uStack_284 = uStack_244;
      uStack_280 = uStack_240;
      uStack_27c = uStack_23c;
      local_298 = local_258;
      lStack_290 = lStack_250;
      local_2c8 = (undefined8 *)0x0;
      FUN_140abd410(param_1,param_1[0xe3],&local_2a8,param_1);
    }
    if ((param_1[0xe4] != 0) && (lVar9 = (**(code **)(*param_1 + 0x148))(param_1), lVar9 != 0)) {
      FActorSpawnParameters::FActorSpawnParameters(&local_2a8);
      lStack_290 = param_1[0x2a];
      uStack_280 = uStack_280 | 0x60000;
      local_298 = param_1;
      uVar10 = AGShockOrb::GetPrivateStaticClass();
      uVar10 = FUN_142550d00(lVar9,uVar10,&local_268,&local_2a8);
      ABP_LiquidSphere_C__pf961831033::bpf__StartSelectBuild__pf(uVar10,param_1[0xe4]);
      FUN_14222b9f0(uVar10,&local_268,0,0);
    }
  }
  FUN_141474360(param_1);
  return;
}



// FUNCTION 140a93910 FUN_140a93910 body=51 status=ok
// SIG undefined FUN_140a93910(void)

void FUN_140a93910(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x750);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x738,local_res8);
  FUN_140b3b5f0(param_1);
  return;
}



// FUNCTION 140a93950 FUN_140a93950 body=3738 status=ok
// SIG undefined FUN_140a93950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a93950(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float *in_stack_fffffffffffffe48;
  undefined4 uVar33;
  undefined8 local_198;
  float local_190;
  float local_188;
  float fStack_184;
  float local_180;
  undefined8 local_178;
  float local_170;
  char local_168;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined1 local_138 [8];
  undefined4 local_130;
  int local_12c;
  int local_128;
  int local_124 [3];
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_d8 [176];
  
  uVar17 = 0;
  lVar2 = *(longlong *)(param_1 + 0x178);
  if (lVar2 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar2 + 0x488);
  if (*(longlong *)(param_1 + 0x370) == 0) {
    return;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FUN_142dcfa90(lVar2,&local_128,local_124);
  lVar2 = *(longlong *)(param_1 + 0x370);
  (**(code **)(**(longlong **)(param_1 + 0x178) + 0x610))
            (*(longlong **)(param_1 + 0x178),&local_108,local_d8);
  local_158 = FWeakObjectPtr::Get(param_4 + 4);
  fVar18 = (float)*(undefined8 *)(param_4 + 0x10);
  fVar19 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
  fVar21 = *(float *)(param_4 + 0x18);
  if (*(char *)(param_4 + 0xc) == '\0') {
    fVar18 = local_108 - *(float *)(param_4 + 0x1c);
    fVar21 = local_100 - *(float *)(param_4 + 0x24);
    fVar19 = local_104 - *(float *)(param_4 + 0x20);
  }
  local_180 = *(float *)(param_4 + 0x24);
  local_188 = (float)*(undefined8 *)(param_4 + 0x1c);
  fStack_184 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x1c) >> 0x20);
  if (*(char *)(param_4 + 0xc) != '\0') {
    local_178._4_4_ = local_104 - *(float *)(param_4 + 0x14);
    local_108 = local_108 - *(float *)(param_4 + 0x10);
    local_170 = local_100 - *(float *)(param_4 + 0x18);
    fVar22 = local_108 * local_108 + local_178._4_4_ * local_178._4_4_ + local_170 * local_170;
    if (fVar22 == 1.0) {
LAB_140a93bda:
      local_178 = (longlong *)CONCAT44(local_178._4_4_,local_108);
    }
    else {
      if (1e-08 <= fVar22) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = CONCAT44(0,fVar22);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = CONCAT44(0,fVar22);
        auVar30 = rsqrtss(auVar27,auVar30);
        fVar25 = auVar30._0_4_;
        fVar25 = fVar25 + fVar25 * (0.5 - fVar22 * 0.5 * fVar25 * fVar25);
        fVar25 = fVar25 + fVar25 * (0.5 - fVar22 * 0.5 * fVar25 * fVar25);
        local_170 = fVar25 * local_170;
        local_178._4_4_ = fVar25 * local_178._4_4_;
        local_108 = local_108 * fVar25;
        goto LAB_140a93bda;
      }
      local_178 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_170 = DAT_1468b5d98;
    }
    local_188 = SUB84(local_178,0);
    fStack_184 = (float)((ulonglong)local_178 >> 0x20);
    local_180 = local_170;
  }
  fVar22 = fStack_184 * fStack_184 + local_188 * local_188;
  if (fVar22 == 1.0) {
    fVar22 = fStack_184;
    fVar25 = local_188;
    if (local_180 == 0.0) {
      local_190 = local_180;
    }
    else {
LAB_140a93cb2:
      local_190 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar22) {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = CONCAT44(0,fVar22);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,fVar22);
      auVar30 = rsqrtss(auVar28,auVar5);
      fVar25 = auVar30._0_4_;
      fVar25 = fVar25 + fVar25 * (0.5 - fVar22 * 0.5 * fVar25 * fVar25);
      fVar25 = fVar25 + fVar25 * (0.5 - fVar22 * 0.5 * fVar25 * fVar25);
      fVar22 = fStack_184 * fVar25;
      fVar25 = local_188 * fVar25;
      goto LAB_140a93cb2;
    }
    local_190 = DAT_1468b5d98;
    fVar22 = DAT_1468b5d94;
    fVar25 = DAT_1468b5d90;
  }
  pfVar9 = (float *)FRotator::Vector(local_d8,local_138);
  fVar31 = pfVar9[1];
  fVar32 = *pfVar9;
  fVar20 = fVar32 * fVar32 + fVar31 * fVar31;
  if (fVar20 == 1.0) {
    if (pfVar9[2] == 0.0) {
      local_148 = *(undefined8 *)pfVar9;
      local_140 = pfVar9[2];
    }
    else {
LAB_140a93d9b:
      local_148 = CONCAT44(fVar31,fVar32);
      local_140 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar20) {
      auVar29._8_8_ = 0;
      auVar29._0_8_ = CONCAT44(0,fVar20);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = CONCAT44(0,fVar20);
      auVar30 = rsqrtss(auVar29,auVar4);
      fVar26 = auVar30._0_4_;
      fVar26 = fVar26 + fVar26 * (0.5 - fVar20 * 0.5 * fVar26 * fVar26);
      fVar26 = fVar26 + fVar26 * (0.5 - fVar20 * 0.5 * fVar26 * fVar26);
      fVar31 = fVar31 * fVar26;
      fVar32 = fVar32 * fVar26;
      goto LAB_140a93d9b;
    }
    local_140 = DAT_1468b5d98;
    local_148 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  local_180 = fVar21;
  local_188 = fVar18;
  fStack_184 = fVar19;
  if (((*(char *)(param_4 + 0xc) == '\0') && (local_158 != 0)) &&
     (lVar10 = *(longlong *)(local_158 + 0x168), local_180 = DAT_1468b5d98,
     local_188 = DAT_1468b5d90, fStack_184 = DAT_1468b5d94, lVar10 != 0)) {
    local_188 = *(float *)(lVar10 + 0x220);
    fStack_184 = *(float *)(lVar10 + 0x224);
    local_180 = *(float *)(lVar10 + 0x228);
  }
  local_168 = FUN_140b837b0(*(undefined8 *)(param_1 + 0x178),&local_188);
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    local_188 = (float)((uint)local_188 & 0xffffff00);
    local_178 = (longlong *)(ulonglong)(uint)local_188;
    local_170 = 0.0;
    in_stack_fffffffffffffe48 = (float *)((ulonglong)in_stack_fffffffffffffe48 & 0xffffffffffffff00)
    ;
    local_188 = fVar18;
    fStack_184 = fVar19;
    local_180 = fVar21;
    FUN_142d40a00(*(longlong *)(param_2 + 0xa8),*(undefined8 *)(param_1 + 0x178),&local_188,
                  &local_178,in_stack_fffffffffffffe48,0,0,0);
  }
  if (0.0 < *(float *)(param_2 + 0xcc)) {
    lVar10 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (lVar10 = FUN_142cc1670(plVar3), lVar10 != 0)) {
      fVar21 = *(float *)(lVar2 + 0x81c);
      local_170 = local_190;
      local_178 = (longlong *)CONCAT44(fVar22,fVar25);
      if (0.0 < fVar21) {
        iVar8 = rand();
        puVar11 = (undefined8 *)
                  FVector::RotateAngleAxis
                            (&local_178,local_138,
                             (float)iVar8 * 3.051851e-05 * (fVar21 - -fVar21) + -fVar21,
                             &DAT_1464aa798);
        local_178 = (longlong *)*puVar11;
        local_170 = *(float *)(puVar11 + 1);
      }
      if (0.0 < *(float *)(lVar2 + 0x818)) {
        rand();
      }
      FVector::Rotation(&local_148,&local_198);
      puVar12 = (ulonglong *)FRotator::UnrotateVector(&local_198,local_138,&local_178);
      local_178 = (longlong *)*puVar12;
      local_170 = *(float *)(puVar12 + 1);
      uVar13 = FUN_142cc1670(plVar3);
      FUN_142cb64e0(uVar13,&local_178);
    }
  }
  local_12c = 0;
  cVar7 = FUN_142710360(*(undefined8 *)(param_1 + 0x178),&local_12c);
  if ((*(char *)(param_1 + 0x3a0) != cVar7) ||
     ((cVar7 != '\0' && (local_12c != *(int *)(param_1 + 0x3a4))))) {
    *(char *)(param_1 + 0x3a0) = cVar7;
    iVar8 = 0;
    if (cVar7 != '\0') {
      iVar8 = local_12c;
    }
    *(int *)(param_1 + 0x3a4) = iVar8;
    FUN_140a88900(param_1);
  }
  cVar7 = FUN_142710360(*(undefined8 *)(param_1 + 0x178),0);
  if (local_124[0] < local_128) {
    if ((float)local_124[0] <= 0.0) {
      fVar21 = 1.0;
    }
    else {
      fVar21 = (float)(local_128 / local_124[0]);
    }
    if (*(float *)(lVar2 + 0x814) <= fVar21) {
      cVar7 = '\x01';
    }
  }
  if (*(char *)(param_1 + 0x3a8) != cVar7) {
    *(char *)(param_1 + 0x3a8) = cVar7;
    FUN_140a88900(param_1);
  }
  FUN_140a890b0(param_1);
  bVar1 = *(byte *)(param_4 + 2);
  if ((bVar1 & 4) == 0) {
    if (*(longlong *)(param_1 + 0x390) != 0) {
      FUN_142608f20();
    }
    if ((bVar1 & 8) == 0) {
      plVar16 = *(longlong **)(param_1 + 0x388);
    }
    else {
      plVar16 = *(longlong **)(param_1 + 0x398);
    }
  }
  else {
    plVar16 = *(longlong **)(param_1 + 0x390);
  }
  if (plVar16 != (longlong *)0x0) {
    fVar21 = (float)FGenericPlatformMath::Atan2();
    if (fVar21 < 0.0) {
      fVar21 = fVar21 + 6.2831855;
    }
    fVar18 = *(float *)(lVar2 + 0x810);
    fVar21 = fVar21 * 0.15915494;
    if (0.0 < fVar18) {
      if (fVar18 != 0.0) {
        fVar21 = (fVar18 * 0.5 + fVar21) / fVar18;
        fVar21 = (float)((int)ROUND((fVar21 + fVar21) - 0.5) >> 1) * fVar18;
      }
      pfVar9 = (float *)&DAT_14422a560;
      do {
        if (ABS(*pfVar9 - fVar21) <= 1e-08) {
          FGenericPlatformMath::Atan2
                    ((longlong)(int)uVar17 * 3,
                     (float)local_124[0] * *(float *)(&DAT_146295bd4 + (longlong)(int)uVar17 * 0xc))
          ;
          break;
        }
        uVar17 = uVar17 + 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar17 < 4);
    }
    uVar33 = *(undefined4 *)(param_2 + 200);
    FUN_14260f0c0(plVar16,*(undefined8 *)(lVar2 + 0x800));
    local_198 = CONCAT44(uVar33,uVar33);
    local_190 = (float)uVar33;
    local_180 = (float)uVar33;
    FUN_142610200(plVar16,*(undefined8 *)(lVar2 + 0x800),&local_198);
    FUN_14260f0c0(plVar16,*(undefined8 *)(lVar2 + 0x808));
    local_178 = plVar16;
    if (local_168 == '\0') {
      FUN_140a7e0c0(&local_178,lVar2 + 0x7e0,*(undefined4 *)(lVar2 + 0x7e8));
      uVar13 = *(undefined8 *)(lVar2 + 0x7d8);
    }
    else {
      FUN_140a7e0c0(&local_178,lVar2 + 0x7f8,1);
      uVar13 = *(undefined8 *)(lVar2 + 0x7f0);
    }
    local_190 = 0.0;
    local_180 = 0.0;
    local_130 = 0;
    local_f8 = _DAT_1464aa6c0;
    uStack_f0 = _DAT_1464aa6c8;
    local_170 = 0.0;
    local_198 = 0;
    local_188 = 0.0;
    fStack_184 = 0.0;
    in_stack_fffffffffffffe48 = &local_188;
    local_178 = (longlong *)0x0;
    local_10c = 0;
    local_114 = 0;
    local_118 = uVar33;
    FUN_142604400(plVar16,uVar13);
    (**(code **)(*plVar16 + 0x280))(plVar16,0);
  }
  uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  lVar10 = *(longlong *)(param_2 + 0xb0);
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) != 0) {
      lVar10 = *(longlong *)(param_2 + 0xc0);
    }
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0xb8);
  }
  if (lVar10 == 0) goto LAB_140a94708;
  if ((local_158 == 0) || (lVar14 = *(longlong *)(local_158 + 0x168), lVar14 == 0)) {
    if (plVar3[0x2d] == 0) {
      local_190 = (float)DAT_1464aa7b0;
      puVar12 = &local_198;
      local_198 = DAT_1464aa7a8;
    }
    else {
      puVar12 = (ulonglong *)FUN_142369f10(plVar3[0x2d],local_138);
    }
    uVar24 = *puVar12;
    fVar21 = *(float *)(puVar12 + 1);
    lVar15 = plVar3[0x2d];
    fVar18 = (float)(uVar24 >> 0x20);
  }
  else {
    lVar15 = plVar3[0x2d];
    local_198._0_4_ = DAT_1468b5d90;
    local_198._4_4_ = DAT_1468b5d94;
    if (lVar15 == 0) {
      local_190 = DAT_1468b5d98;
    }
    else {
      local_198._0_4_ = *(float *)(lVar15 + 0x220);
      local_198._4_4_ = *(float *)(lVar15 + 0x224);
      local_190 = *(float *)(lVar15 + 0x228);
    }
    local_198._4_4_ = *(float *)(lVar14 + 0x224) - local_198._4_4_;
    local_198._0_4_ = *(float *)(lVar14 + 0x220) - (float)local_198;
    local_150 = *(float *)(lVar14 + 0x228) - local_190;
    fVar21 = local_198._4_4_ * local_198._4_4_ + (float)local_198 * (float)local_198 +
             local_150 * local_150;
    if (fVar21 == 1.0) {
LAB_140a94566:
      local_158 = CONCAT44(local_198._4_4_,(float)local_198);
    }
    else {
      if (1e-08 <= fVar21) {
        auVar30 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
        fVar18 = auVar30._0_4_;
        fVar18 = fVar18 + fVar18 * (0.5 - fVar21 * 0.5 * fVar18 * fVar18);
        fVar18 = fVar18 + fVar18 * (0.5 - fVar21 * 0.5 * fVar18 * fVar18);
        local_198._0_4_ = (float)local_198 * fVar18;
        local_198._4_4_ = local_198._4_4_ * fVar18;
        local_150 = local_150 * fVar18;
        goto LAB_140a94566;
      }
      local_150 = DAT_1468b5d98;
      local_158 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    fVar18 = (float)(local_158 >> 0x20);
    uVar24 = local_158 & 0xffffffff;
    fVar21 = local_150;
  }
  if (lVar15 == 0) {
    local_198._0_4_ = DAT_1468b5d90;
    local_198._4_4_ = DAT_1468b5d94;
    local_190 = DAT_1468b5d98;
  }
  else {
    local_198._0_4_ = *(float *)(lVar15 + 0x220);
    local_198._4_4_ = *(float *)(lVar15 + 0x224);
    local_190 = *(float *)(lVar15 + 0x228);
  }
  local_180 = local_190;
  local_188 = (float)local_198;
  fStack_184 = local_198._4_4_;
  local_190 = local_190 + fVar21 * 100.0;
  local_198 = CONCAT44(local_198._4_4_ + fVar18 * 100.0,(float)local_198 + (float)uVar24 * 100.0);
  uVar13 = UScrollBox::GetPrivateStaticClass();
  lVar14 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar13);
  if (lVar14 != 0) {
    FUN_142d199e0(lVar14);
  }
  local_180 = (float)DAT_1468b5da8;
  local_150 = local_190;
  local_188 = (float)DAT_1468b5da0;
  fStack_184 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
  uVar24 = (ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000;
  local_158 = local_198;
  FUN_1405a1e30(&local_f8,plVar3,lVar10,&local_158,uVar24,&local_188);
  uVar33 = (undefined4)(uVar24 >> 0x20);
  FUN_140591060(&local_f8);
LAB_140a94708:
  if (*(char *)(param_2 + 0xd0) != '\0') {
    if (*(char *)(param_4 + 0xc) == '\0') {
      uVar23 = 0xbf800000;
    }
    else {
      uVar23 = *(undefined4 *)(lVar2 + 0x820);
    }
    local_180 = *(float *)(param_4 + 0x18);
    local_190 = *(float *)(param_2 + 0xdc);
    local_188 = (float)*(undefined8 *)(param_4 + 0x10);
    fStack_184 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
    local_198 = CONCAT44(*(undefined4 *)(param_2 + 0xd8),(float)local_198);
    local_198 = CONCAT71(local_198._1_7_,*(undefined1 *)(param_2 + 0xd4));
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x850))
              (*(longlong **)(param_1 + 0x178),&local_198,*(char *)(param_4 + 0xc),&local_188,
               CONCAT44(uVar33,uVar23));
  }
  return;
}



// FUNCTION 140a947f0 FUN_140a947f0 body=409 status=ok
// SIG undefined FUN_140a947f0(void)

undefined8
FUN_140a947f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined1 local_187;
  undefined4 local_184;
  byte local_180;
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  int local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  byte local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  FUN_142c62180(local_e8);
  local_1b8 = &PTR_FUN_143ff6170;
  local_1b0 = local_e0;
  local_1a8 = local_d8;
  local_1a0 = local_d0;
  local_b7 = 2;
  local_198 = (void *)0x0;
  local_190 = local_c0;
  if (local_c0 == 0) {
    local_18c = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_198,local_c0,0);
    _guard_xfg_dispatch_icall_nop(local_198,local_c8,(longlong)local_c0 * 0x38);
  }
  local_188 = local_b8;
  local_184 = local_b4;
  local_180 = local_180 ^ (local_180 ^ local_b0) & 7;
  local_187 = local_b7;
  FUN_1405e0d90(local_178,local_a8);
  FUN_1405e0d90(local_160,local_90);
  FUN_1405e0d90(local_148,local_78);
  FUN_1405e0d90(local_130,local_60);
  local_118 = local_48;
  local_114 = local_44;
  local_110 = local_40;
  local_108 = local_38;
  local_100 = local_30;
  local_10c = local_3c;
  local_f8 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  FUN_142c7bb40(param_3,param_2,param_4,&local_1b8,0);
  FUN_142c63c50(local_e8);
  return param_2;
}



// FUNCTION 140a94990 FUN_140a94990 body=75 status=ok
// SIG undefined FUN_140a94990(void)

void FUN_140a94990(longlong param_1)

{
  char cVar1;
  
  FUN_142d22e10();
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    cVar1 = FUN_142d1f620();
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x550);
    }
  }
  if (*(char *)(param_1 + 0x330) != '\0') {
    AActor::GetLevel(param_1);
    return;
  }
  return;
}



// FUNCTION 140a949e0 FUN_140a949e0 body=60 status=ok
// SIG undefined FUN_140a949e0(void)

void FUN_140a949e0(longlong param_1)

{
  UObject::PostLoad();
  if ((*(char *)(param_1 + 0x43) != '\0') && (*(char *)(param_1 + 0x41) != '\0')) {
    *(undefined1 *)(param_1 + 0x44) = 2;
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  if ((*(char *)(param_1 + 0x45) != '\0') && (*(char *)(param_1 + 0x42) != '\0')) {
    *(undefined1 *)(param_1 + 0x46) = 2;
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  return;
}



// FUNCTION 140a94a20 FUN_140a94a20 body=117 status=ok
// SIG undefined FUN_140a94a20(void)

void FUN_140a94a20(longlong param_1)

{
  int iVar1;
  
  FUN_142349c80();
  if (*(longlong *)(param_1 + 0x220) != 0) {
    iVar1 = *(int *)(param_1 + 0x230);
    *(int *)(param_1 + 0x230) = iVar1 + 1;
    if (*(int *)(param_1 + 0x234) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x228,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar1 * 8) =
         *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  return;
}



// FUNCTION 140a94aa0 FUN_140a94aa0 body=347 status=ok
// SIG undefined FUN_140a94aa0(void)

void FUN_140a94aa0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  FUN_142d23310();
  if (*(char *)(param_1 + 0x134) == '\x02') {
    return;
  }
  FUN_140a7fd40(param_1);
  if (((*(longlong *)(param_1 + 0x2b0) == 0) ||
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x118), plVar2 == (longlong *)0x0))
     || (lVar5 = (**(code **)(*plVar2 + 0x670))(), lVar5 == 0)) {
LAB_140a94b34:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a94b34;
  }
  lVar6 = *(longlong *)(param_1 + 800);
  if (lVar6 != 0) {
    lVar7 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140a94b7c;
  }
  lVar6 = 0;
LAB_140a94b7c:
  if (((*(char *)(param_1 + 0x568) != '\x01') && (lVar5 != 0)) && (lVar6 != 0)) {
    bVar1 = *(byte *)(lVar5 + 0xaa9);
    uVar9 = (ulonglong)bVar1;
    lVar5 = FUN_140b825a0(lVar5);
    if (lVar5 != 0) {
      cVar4 = FUN_140cbb920(lVar5);
      uVar9 = (ulonglong)bVar1;
      if (cVar4 != '\0') {
        uVar9 = 0;
      }
    }
    uVar8 = 1;
    if ((int)uVar9 == 0) {
      uVar8 = uVar9;
    }
    *(float *)(param_1 + 0x1d8) =
         *(float *)(lVar6 + 0x318 + uVar8 * 4) * *(float *)(param_1 + 0x1d8);
  }
  return;
}



// FUNCTION 140a94c00 FUN_140a94c00 body=467 status=ok
// SIG undefined FUN_140a94c00(void)

void FUN_140a94c00(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_60;
  uint local_58;
  uint local_54;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar6 = *(longlong *)(param_1 + 0x530);
  puVar8 = (undefined8 *)0x0;
  lVar2 = (longlong)*(int *)(param_1 + 0x538) * 0x10 + lVar6;
  local_60 = (undefined8 *)0x0;
  local_54 = 0;
  puVar9 = puVar8;
  puVar10 = puVar8;
  if (lVar6 != lVar2) {
    do {
      lVar3 = FWeakObjectPtr::Get(lVar6);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x178), lVar3 != 0)) {
        lVar4 = FUN_142e02530();
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
          uVar5 = FWeakObjectPtr::Get(lVar6 + 8);
          iVar7 = (int)puVar8;
          local_58 = iVar7 + 1;
          if ((int)puVar9 < (int)local_58) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_60,puVar8);
            puVar9 = (undefined8 *)(ulonglong)local_54;
            puVar10 = local_60;
          }
          puVar8 = (undefined8 *)(ulonglong)local_58;
          puVar10[(longlong)iVar7 * 2] = lVar3;
          puVar10[(longlong)iVar7 * 2 + 1] = uVar5;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != lVar2);
    if (0 < (int)puVar8) {
      puVar8 = puVar10 + (longlong)(int)puVar8 * 2;
      puVar9 = puVar10;
      for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
        lVar6 = puVar9[1];
        if (lVar6 == 0) {
          lVar6 = FUN_142d19790(param_1);
        }
        FUN_142d23450(param_1,*puVar9,0,lVar6,param_2,param_3,param_4,param_5);
        puVar10 = local_60;
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  return;
}



// FUNCTION 140a94de0 FUN_140a94de0 body=399 status=ok
// SIG undefined FUN_140a94de0(void)

void FUN_140a94de0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  
  FUN_142d23990();
  lVar6 = *(longlong *)(param_1 + 0x530);
  puVar8 = (undefined8 *)0x0;
  lVar2 = (longlong)*(int *)(param_1 + 0x538) * 0x10 + lVar6;
  local_48 = (undefined8 *)0x0;
  local_3c = 0;
  puVar9 = puVar8;
  puVar10 = puVar8;
  if (lVar6 != lVar2) {
    do {
      lVar3 = FWeakObjectPtr::Get(lVar6);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x178), lVar3 != 0)) {
        lVar4 = FUN_142e05930();
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
          uVar5 = FWeakObjectPtr::Get(lVar6 + 8);
          iVar7 = (int)puVar8;
          local_40 = iVar7 + 1;
          if ((int)puVar9 < (int)local_40) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,puVar8);
            puVar9 = (undefined8 *)(ulonglong)local_3c;
            puVar10 = local_48;
          }
          puVar8 = (undefined8 *)(ulonglong)local_40;
          puVar10[(longlong)iVar7 * 2] = lVar3;
          puVar10[(longlong)iVar7 * 2 + 1] = uVar5;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != lVar2);
    if (0 < (int)puVar8) {
      for (puVar9 = puVar10; puVar9 != puVar10 + (longlong)(int)puVar8 * 2; puVar9 = puVar9 + 2) {
        lVar6 = puVar9[1];
        if (lVar6 == 0) {
          lVar6 = FUN_142d19790(param_1);
        }
        FUN_142d234e0(param_1,*puVar9,0,lVar6,param_2);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  return;
}



// FUNCTION 140a94f70 FUN_140a94f70 body=1832 status=ok
// SIG undefined FUN_140a94f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a94f70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_2a8;
  longlong lStack_2a0;
  uint local_298;
  undefined4 uStack_294;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  longlong lStack_270;
  undefined8 local_268;
  ulonglong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  ulonglong local_210;
  float local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  uint local_1e8;
  undefined8 local_1e4;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  longlong local_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  uint local_180;
  undefined4 local_17c;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong local_150;
  undefined1 local_148 [88];
  undefined1 local_f0 [176];
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_2 + 0x58);
    uVar4 = *(ulonglong *)(param_2 + 0x290);
    local_168 = uVar4;
    if (plVar3 == (longlong *)0x0) {
      lVar20 = 0;
    }
    else {
      lVar20 = plVar3[0x1f];
      if (lVar20 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar20 = plVar3[0x1f];
      }
    }
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = plVar3[0x1f];
      if (lVar21 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar21 = plVar3[0x1f];
      }
    }
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    lVar16 = FWeakObjectPtr::Get(param_1 + 0x96c);
    if (lVar16 != 0) {
      fVar26 = *(float *)(param_2 + 0x550);
      fVar24 = *(float *)(param_2 + 0x55c);
      fVar25 = fVar26 - fVar24;
      if (0.0001 < fVar25) {
        FUN_1412acc50(lVar16,param_1,fVar25,lVar20,lVar21,uVar5,uVar4);
      }
      iVar2 = *(int *)(lVar16 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar19 = iVar2 >> 0x1f & 0xffff;
        uVar15 = iVar2 + uVar19;
        lVar23 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                 (longlong)(int)((uVar15 & 0xffff) - uVar19) * 0x18;
      }
      else {
        lVar23 = 0;
      }
      if ((((*(uint *)(lVar23 + 8) >> 0x1d & 1) == 0) && (0.0001 < fVar26)) && (fVar24 <= 0.0001)) {
        FUN_1412ab5e0(lVar16,param_2);
      }
    }
    uVar13 = uStack_1c4;
    uVar15 = local_1c8;
    lVar16 = local_2a8;
    local_2a8._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
    uVar10 = local_2a8._4_4_;
    local_1c8 = (uint)lVar21;
    uVar19 = local_1c8;
    uStack_1c4 = (undefined4)((ulonglong)lVar21 >> 0x20);
    uVar11 = uStack_1c4;
    local_2a8 = lVar16;
    local_1c8 = uVar15;
    uStack_1c4 = uVar13;
    if ((*(int *)(param_1 + 0x670) == 0) &&
       (uVar15 = *(int *)(param_1 + 0x680) - 1, -1 < (int)uVar15)) {
      lVar22 = (longlong)(int)uVar15 * 0x78;
      lVar16 = (longlong)(int)uVar15 * 4;
      lVar23 = lVar22;
      do {
        if (((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_1 + 0x680))) &&
           ((int)uVar15 < *(int *)(param_2 + 0x1d0))) {
          lVar6 = *(longlong *)(lVar23 + *(longlong *)(param_1 + 0x678));
          fVar26 = *(float *)(*(longlong *)(param_2 + 0x1c8) + lVar16);
          cVar14 = FUN_142d52a00(*(longlong *)(param_1 + 0x678) + 0x60 + lVar22);
          if (cVar14 == '\0') {
            fVar24 = 0.0;
          }
          else {
            uVar17 = FUN_142d52a20(*(longlong *)(param_1 + 0x678) + 0x60 + lVar22);
            uVar17 = FArchive::operator<<(uVar17);
            fVar24 = (float)FUN_142d5fed0(uVar17);
          }
          uVar13 = uStack_1c0;
          uStack_1c0 = (undefined4)lVar20;
          uVar12 = uStack_1c0;
          if (((0 < *(int *)(param_1 + 0x890)) && (fVar26 != fVar24)) && (0 < (int)uVar15)) {
            uVar17 = *(undefined8 *)(param_2 + 0x11c);
            local_1b8 = *(undefined8 *)(param_2 + 0x28);
            uStack_1ac = (undefined4)*(undefined8 *)(param_2 + 0x110);
            uStack_1a8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
            uStack_1b0 = CONCAT31(uStack_1b0._1_3_,*(undefined1 *)(param_2 + 0x214)) & 0xffffff01;
            uStack_1a4 = *(undefined4 *)(param_2 + 0x118);
            local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)(param_2 + 0x124));
            local_280 = 0;
            local_268 = 0;
            lVar7 = *(longlong *)(param_1 + 0x678);
            local_260 = local_260 & 0xfffffffffffffffd | 1;
            local_278 = 0;
            lStack_270 = 0;
            local_1c8 = uVar19;
            uStack_1c4 = uVar11;
            uStack_1bc = uVar10;
            FUN_142c8c260(&local_258,0x3f800000);
            local_220 = CONCAT71(local_220._1_7_,0xff);
            uStack_218 = 0;
            local_210 = local_210 & 0xffffffff00000000;
            local_200 = 0;
            local_1e8 = local_1e8 & 0xffffff00;
            uStack_1dc = DAT_1468b5d98;
            local_1d0 = CONCAT44(local_1d0._4_4_,DAT_1468b5d98);
            local_280 = *(undefined8 *)(lVar23 + lVar7);
            local_278 = *(longlong *)(lVar23 + 8 + lVar7);
            uStack_1f8 = 0;
            uStack_1f0 = 0;
            local_1e4 = _DAT_1468b5d90;
            uStack_1d8 = _DAT_1468b5d90;
            local_288 = CONCAT44(local_288._4_4_,uVar15);
            TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
                      (&lStack_270,lVar7 + 0x10 + lVar23);
            puVar1 = (undefined8 *)(lVar23 + 0x28 + lVar7);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            puVar1 = (undefined8 *)(lVar23 + 0x38 + lVar7);
            local_248 = *puVar1;
            uStack_240 = puVar1[1];
            local_258 = (undefined4)uVar8;
            uStack_254 = (undefined4)((ulonglong)uVar8 >> 0x20);
            uStack_250 = (undefined4)uVar9;
            uStack_24c = (undefined4)((ulonglong)uVar9 >> 0x20);
            puVar1 = (undefined8 *)(lVar23 + 0x48 + lVar7);
            local_238 = *puVar1;
            uStack_230 = puVar1[1];
            local_228 = *(longlong *)(lVar23 + 0x58 + lVar7);
            puVar1 = (undefined8 *)(lVar23 + 0x60 + lVar7);
            local_220 = *puVar1;
            uStack_218 = puVar1[1];
            local_260 = CONCAT71(local_260._1_7_,
                                 (byte)local_260 ^
                                 (*(byte *)(lVar23 + 0x20 + lVar7) ^ (byte)local_260) & 3);
            local_210 = *(ulonglong *)(lVar23 + 0x70 + lVar7);
            local_208 = fVar26 - fVar24;
            uStack_1f0 = local_1b8;
            local_1e8 = uStack_1b0;
            local_200 = CONCAT44(uStack_1c4,local_1c8);
            uStack_1f8 = CONCAT44(uStack_1bc,uStack_1c0);
            local_1e4 = CONCAT44(uStack_1a8,uStack_1ac);
            uStack_1dc = uStack_1a4;
            local_1d0 = local_198;
            uStack_1d8 = uVar17;
            uStack_1a0 = uVar17;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x888,&local_288);
            uVar13 = uStack_1c0;
            if (lStack_270 != 0) {
              FMemory::Free();
              uVar13 = uStack_1c0;
            }
          }
          uStack_1c0 = uVar13;
          if (((0 < *(int *)(param_1 + 0x8e0)) && (0.0001 < fVar26)) && (fVar24 <= 0.0001)) {
            local_2a8._0_4_ = (undefined4)lVar6;
            local_2a8._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
            uStack_294 = 0;
            local_150 = (ulonglong)uVar15;
            local_160 = (undefined4)local_2a8;
            uStack_15c = local_2a8._4_4_;
            uStack_158 = uVar12;
            uStack_154 = uVar10;
            local_2a8 = lVar6;
            lStack_2a0 = lVar20;
            local_298 = uVar15;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x8d8,&local_160);
          }
        }
        lVar22 = lVar22 + -0x78;
        lVar16 = lVar16 + -4;
        lVar23 = lVar23 + -0x78;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    if (*(char *)(param_2 + 0x564) != '\0') {
      local_2a8 = lVar21;
      lStack_2a0 = lVar20;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x8f8,&local_2a8);
    }
    if ((*(longlong *)(param_1 + 0x920) != 0) && (*(char *)(param_2 + 0x565) != '\0')) {
      local_2a8 = lVar20;
      lStack_2a0 = lVar21;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x928,&local_2a8);
    }
    fVar26 = *(float *)(param_2 + 0x1dc) + *(float *)(param_2 + 0x1d8);
    if (0.0001 < fVar26) {
      local_180 = DAT_1468b5d98;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      local_188 = _DAT_1468b5d90;
      local_1c8 = CONCAT31(local_1c8._1_3_,*(undefined1 *)(param_2 + 0x214)) & 0xffffff01;
      uStack_1bc = *(undefined4 *)(param_2 + 0x118);
      uStack_1c4 = (undefined4)*(undefined8 *)(param_2 + 0x110);
      uStack_1c0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
      local_1b8 = *(undefined8 *)(param_2 + 0x11c);
      uStack_1b0 = *(uint *)(param_2 + 0x124);
      local_198 = 0;
      local_190 = 0;
      local_17c = 0;
      lVar16 = FUN_140a7add0(local_148,&local_1c8);
      puVar18 = (undefined1 *)FUN_140a7add0(local_f0,lVar16);
      local_260 = local_168;
      local_258 = CONCAT31(local_258._1_3_,*puVar18);
      uStack_24c = *(undefined4 *)(puVar18 + 0xc);
      uStack_240 = CONCAT44(uStack_240._4_4_,*(undefined4 *)(puVar18 + 0x18));
      local_238 = *(undefined8 *)(puVar18 + 0x20);
      uStack_218 = _DAT_1468b5d90;
      uStack_230 = *(undefined8 *)(puVar18 + 0x28);
      uStack_254 = (undefined4)*(undefined8 *)(puVar18 + 4);
      uStack_250 = (undefined4)((ulonglong)*(undefined8 *)(puVar18 + 4) >> 0x20);
      local_248 = *(undefined8 *)(puVar18 + 0x10);
      local_280 = CONCAT44(local_280._4_4_,fVar26);
      local_228 = 0;
      local_220 = 0;
      local_210 = (ulonglong)DAT_1468b5d98;
      local_288 = param_1;
      local_278 = lVar20;
      lStack_270 = lVar21;
      local_268 = uVar5;
      FUN_1408e22e0(&local_228,puVar18 + 0x30);
      uStack_218 = *(undefined8 *)(puVar18 + 0x40);
      local_210 = *(ulonglong *)(puVar18 + 0x48);
      local_208 = (float)CONCAT31(local_208._1_3_,puVar18[0x50]);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x908,&local_288);
      if (local_228 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(puVar18 + 0x30) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar16 + 0x30) != 0) {
        FMemory::Free();
      }
      if (local_198 != 0) {
        FMemory::Free();
      }
    }
  }
  uVar15 = *(uint *)(param_1 + 0x840);
  FUN_142d241d0(param_1,param_2);
  if ((((byte)(uVar15 >> 3) & 1) == ((byte)(*(uint *)(param_1 + 0x840) >> 3) & 1)) && (param_2 != 0)
     ) {
    FUN_140a83930(param_1,param_2);
  }
  return;
}



// FUNCTION 140a956a0 FUN_140a956a0 body=384 status=ok
// SIG undefined FUN_140a956a0(void)

void FUN_140a956a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_142d24f00();
  if (param_2 == 0) {
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x96c);
  if ((lVar2 != 0) && (*(float *)(param_2 + 0x55c) != *(float *)(param_2 + 0x550))) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x96c);
    FUN_1412ab010(uVar3,*(undefined4 *)(param_2 + 0x55c));
  }
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = *(longlong *)(lVar2 + 0x6a0);
      goto LAB_140a95750;
    }
  }
  lVar4 = 0;
  lVar2 = lVar4;
LAB_140a95750:
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xcb0) == '\0')) {
    fVar5 = (float)(**(code **)(*(longlong *)(lVar4 + 0x5b8) + 0x10))();
    local_18 = *(undefined8 *)(param_2 + 0x128);
    fVar5 = 1.0 / fVar5;
    fVar6 = (float)local_18 * fVar5;
    fVar7 = fVar5 * *(float *)(param_2 + 0x130);
    fVar5 = fVar5 * (float)((ulonglong)local_18 >> 0x20);
    fVar5 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
    if (*(float *)(param_1 + 0x730) <= fVar5 && fVar5 != *(float *)(param_1 + 0x730)) {
      local_20 = *(undefined4 *)(param_2 + 0x118);
      local_28 = *(undefined8 *)(param_2 + 0x110);
      local_10 = *(undefined4 *)(param_2 + 0x130);
      FUN_1430ccbb0(lVar2,&local_18,&local_28);
    }
  }
  return;
}



// FUNCTION 140a95820 FUN_140a95820 body=221 status=ok
// SIG undefined FUN_140a95820(void)

void FUN_140a95820(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_1407c3030(param_1 + 0x318);
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_142397540(*(longlong *)(param_1 + 0x270),cVar3 == '\0',1);
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_142397540(*(longlong *)(param_1 + 0x2b0),cVar3 == '\0',1);
  }
  if ((*(longlong *)(param_1 + 0x2b8) != 0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0))
  {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0xa18) != 0)) {
      FUN_142cabfd0(*(longlong *)(lVar1 + 0xa18),*(undefined8 *)(param_1 + 0x2b8),
                    CONCAT71((int7)((ulonglong)(lVar4 + 0x88) >> 8),cVar3 == '\0'),
                    *(undefined4 *)(param_1 + 0x2c0));
    }
  }
  return;
}



// FUNCTION 140a95900 FUN_140a95900 body=251 status=ok
// SIG undefined FUN_140a95900(void)

void FUN_140a95900(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  longlong local_res10;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    local_38 = &local_res10;
    plVar1 = (longlong *)(param_1 + 0x338);
    uStack_30 = &local_res20;
    local_res10 = param_2;
    local_res20 = param_4;
    lVar4 = FUN_140a791b0(plVar1,&local_38);
    if (lVar4 == 0) {
      iStack_20 = 0;
      local_38 = (longlong *)param_2;
      uStack_30 = (undefined8 *)param_4;
      local_28 = param_3;
      if (*(char *)(param_2 + 0x30) != '\0') {
        if (param_3 == 0) {
          param_3 = *(longlong *)(param_1 + 0x118);
        }
        fVar5 = (float)FUN_142c98860(param_2 + 0x38,param_3);
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        iStack_20 = (int)fVar5;
      }
      iVar3 = *(int *)(param_1 + 0x340);
      *(int *)(param_1 + 0x340) = iVar3 + 1;
      if (*(int *)(param_1 + 0x344) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar1,iVar3);
      }
      lVar4 = *plVar1;
      puVar2 = (undefined4 *)((longlong)iVar3 * 0x20 + lVar4);
      *puVar2 = (undefined4)local_38;
      puVar2[1] = local_38._4_4_;
      puVar2[2] = (undefined4)uStack_30;
      puVar2[3] = uStack_30._4_4_;
      puVar2 = (undefined4 *)((longlong)iVar3 * 0x20 + 0x10 + lVar4);
      *puVar2 = (undefined4)local_28;
      puVar2[1] = local_28._4_4_;
      puVar2[2] = iStack_20;
      puVar2[3] = uStack_1c;
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2f0);
    }
  }
  return;
}



// FUNCTION 140a95a00 FUN_140a95a00 body=235 status=ok
// SIG undefined FUN_140a95a00(void)

void FUN_140a95a00(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[0xce] == 0) {
    iVar2 = FUN_14233f450();
    if (((iVar2 == 3) && (0 < param_2)) && (param_2 < (int)param_1[0xd0])) {
      plVar1 = param_1 + 0xcf;
      lVar4 = (longlong)param_2 * 0x78;
      FUN_140a7d5a0(param_3,*plVar1 + lVar4);
      if (*(longlong *)(lVar4 + 0x10 + *plVar1) != 0) {
        FMemory::Free();
      }
      iVar2 = (int)param_1[0xd0];
      iVar3 = (iVar2 - param_2) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar4),(void *)((longlong)(param_2 + 1) * 0x78 + *plVar1),
                   (longlong)iVar3 * 0x78);
        iVar2 = (int)param_1[0xd0];
      }
      *(int *)(param_1 + 0xd0) = iVar2 + -1;
      FUN_14089e470(plVar1);
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 299);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  return;
}



// FUNCTION 140a95af0 FUN_140a95af0 body=357 status=ok
// SIG undefined FUN_140a95af0(void)

void FUN_140a95af0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (((int)param_1[0xce] == 0) && (iVar3 = FUN_14233f450(), iVar3 == 3)) {
    plVar1 = param_1 + 0xcf;
    plVar2 = (longlong *)*plVar1;
    for (plVar6 = plVar2; plVar6 != plVar2 + (longlong)(int)param_1[0xd0] * 0xf;
        plVar6 = plVar6 + 0xf) {
      if ((*plVar6 == param_2) && (plVar6[1] == param_3)) {
        lVar7 = ((longlong)plVar6 - (longlong)plVar2) +
                SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)plVar6 - (longlong)plVar2),8
                      );
        iVar3 = (int)(lVar7 >> 6) - (int)(lVar7 >> 0x3f);
        goto LAB_140a95b63;
      }
    }
    iVar3 = -1;
LAB_140a95b63:
    if (((((int)param_1[0xce] == 0) && (iVar4 = FUN_14233f450(param_1), iVar4 == 3)) && (0 < iVar3))
       && (iVar3 < (int)param_1[0xd0])) {
      lVar7 = (longlong)iVar3 * 0x78;
      FUN_140a7d5a0(param_4,*plVar1 + lVar7);
      if (*(longlong *)(lVar7 + 0x10 + *plVar1) != 0) {
        FMemory::Free();
      }
      iVar4 = (int)param_1[0xd0];
      iVar5 = (iVar4 - iVar3) + -1;
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar7),(void *)((longlong)(iVar3 + 1) * 0x78 + *plVar1),
                   (longlong)iVar5 * 0x78);
        iVar4 = (int)param_1[0xd0];
      }
      *(int *)(param_1 + 0xd0) = iVar4 + -1;
      FUN_14089e470(plVar1);
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 299);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  return;
}



// FUNCTION 140a95c60 FUN_140a95c60 body=338 status=ok
// SIG undefined FUN_140a95c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a95c60(undefined8 param_1)

{
  undefined1 auStack_5b8 [32];
  undefined **local_598 [106];
  undefined1 local_248 [436];
  undefined1 local_94;
  undefined1 local_8c;
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  FUN_142d0a5f0(local_598);
  local_598[0] = &PTR__scalar_deleting_destructor__14422e358;
  FUN_142d0ab00(local_248);
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  local_70 = 0;
  local_58 = 0;
  local_34 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_94 = 0;
  local_8c = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0x3f800000;
  local_74 = 0x3f800000;
  local_38 = 0x3f800000;
  FUN_140a7d630(param_1,local_598);
  local_598[0] = &PTR__scalar_deleting_destructor__14422e358;
  local_28 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_80 = 0;
  local_8c = 0;
  local_94 = 0;
  FUN_140a7c7a0(local_248);
  FUN_142d0c310(local_598);
  return;
}



// FUNCTION 140a95dc0 FUN_140a95dc0 body=127 status=ok
// SIG undefined FUN_140a95dc0(void)

void FUN_140a95dc0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2,0);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_140a95e2c;
      lVar4 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_140a95e2c;
      lVar4 = (longlong)(int)uVar2;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar4,0);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
LAB_140a95e2c:
  *(uint *)(param_1 + 0x14) = uVar2;
  return;
}



// FUNCTION 140a95e40 FUN_140a95e40 body=112 status=ok
// SIG undefined FUN_140a95e40(void)

void FUN_140a95e40(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    FUN_140717c90(param_1,0,iVar1,8);
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}



// FUNCTION 140a95eb0 FUN_140a95eb0 body=148 status=ok
// SIG undefined FUN_140a95eb0(void)

void FUN_140a95eb0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      uVar2 = (uint)(uVar3 >> 5);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_140a95f2e;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_140a95f2e;
      lVar5 = (longlong)(int)uVar2 << 5;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
  }
LAB_140a95f2e:
  *(uint *)(param_1 + 0x10c) = uVar2;
  return;
}



// FUNCTION 140a95f50 FUN_140a95f50 body=240 status=ok
// SIG undefined FUN_140a95f50(void)

void FUN_140a95f50(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x28);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x2c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x20);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x20);
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
        *(void **)((longlong)param_1 + 0x20) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 140a96040 FUN_140a96040 body=146 status=ok
// SIG undefined FUN_140a96040(void)

longlong FUN_140a96040(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(param_1 + 0x670);
    }
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 140a960e0 FUN_140a960e0 body=91 status=ok
// SIG undefined FUN_140a960e0(void)

void FUN_140a960e0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1414b0910();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      local_res8 = param_2;
      FUN_142dafbc0(lVar2 + 0x318,&local_res8);
      FUN_140a95820(lVar2);
    }
  }
  return;
}



// FUNCTION 140a96140 FUN_140a96140 body=91 status=ok
// SIG undefined FUN_140a96140(void)

void FUN_140a96140(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1414b0910();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      local_res8 = param_2;
      FUN_142dbb5d0(lVar2 + 0x318,&local_res8);
      FUN_140a95820(lVar2);
    }
  }
  return;
}



// FUNCTION 140a961a0 FUN_140a961a0 body=449 status=ok
// SIG undefined FUN_140a961a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140a961a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 extraout_var;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_2 + 0x40);
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar3 = UEnvQueryTest_Cover::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a96220;
  }
  lVar5 = lVar4;
LAB_140a96220:
  if (*(char *)(param_2 + 0x504) == '\0') {
    if ((lVar5 == 0) || (fVar7 = *(float *)(lVar5 + 0x1bc), fVar7 < 0.0)) {
      if (param_3 == 0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = *(float *)(param_3 + 0x10);
      }
    }
  }
  else {
    fVar7 = *(float *)(param_2 + 0x500);
  }
  fVar8 = 1.0;
  fVar7 = fVar7 * *(float *)(param_2 + 0x51c) * *(float *)(param_1 + 0x6fc);
  if (param_4 != 0) {
    fVar6 = *(float *)(param_4 + 0xc);
    if ((*(char *)(param_2 + 0x345) != '\0') && (fVar6 <= 1.0)) {
      fVar6 = 1.0;
    }
    fVar7 = fVar7 * fVar6;
  }
  if (*(longlong *)(param_2 + 0x2a8) != 0) {
    fVar7 = fVar7 * *(float *)(*(longlong *)(param_2 + 0x2a8) + 0x250);
  }
  if (param_5 != 0) {
    fVar7 = fVar7 * *(float *)(param_5 + 0xc);
  }
  lVar5 = *(longlong *)(param_2 + 0x2d0);
  if (lVar5 != 0) {
    lVar3 = UFocusWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_2 + 0x2b0) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
      }
      if (*(char *)(lVar5 + 0x260) != '\0') {
        fVar8 = (float)FUN_142c98860(lVar5 + 0x268,lVar4);
      }
      fVar7 = fVar7 * fVar8;
    }
  }
  iVar2 = rand();
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),(float)iVar2 * 3.051851e-05 < fVar7);
}



// FUNCTION 140a96370 FUN_140a96370 body=343 status=ok
// SIG undefined FUN_140a96370(void)

void FUN_140a96370(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  FUN_142d280b0();
  if ((((param_2[0x56] != 0) && ((*(byte *)((longlong)param_2 + 0x214) & 2) == 0)) &&
      (*(longlong *)(param_1 + 0x2a0) != 0)) &&
     (fVar4 = (float)(**(code **)(*param_2 + 0x18))(param_2,0), 0.0 < fVar4)) {
    if (param_2[0x56] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2[0x56] + 0x118);
    }
    lVar1 = param_2[7];
    if (((*(char *)(param_1 + 0x2b0) == '\0') || ((int)param_2[0x65] == 2)) &&
       (cVar2 = FUN_142c48f90(*(undefined8 *)(param_1 + 0x2a8),lVar1,uVar3), cVar2 != '\0')) {
      local_38 = 0xffffffff;
      uStack_30 = 0xffffffff;
      local_40 = 0;
      local_28 = 1;
      local_24 = 0;
      local_20 = 0;
      local_10 = 0;
      local_18 = lVar1;
      FWeakObjectPtr::operator=(&local_38,param_2[5]);
      local_20 = param_2[9];
      local_28 = 0;
      local_24 = FUN_142c98860(param_1 + 0x2b8,lVar1);
      local_40 = *(undefined8 *)(param_1 + 0x2a0);
      FUN_142dc4b70(local_58,uVar3,&local_40);
    }
  }
  return;
}



// FUNCTION 140a964d0 FUN_140a964d0 body=1082 status=ok
// SIG undefined FUN_140a964d0(void)

void FUN_140a964d0(longlong param_1,ulonglong param_2,float *param_3,float param_4,char param_5,
                  longlong param_6)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong local_res10;
  float *local_res18;
  float local_c8;
  float local_c4;
  float local_c0;
  longlong local_b8;
  undefined8 local_b0;
  
  uVar13 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  if (0 < *(int *)(param_2 + 0x30)) {
    FUN_140485d90(&local_b8);
    uVar13 = local_b0 & 0xffffffff;
  }
  lVar10 = local_b8;
  iVar5 = (int)uVar13;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0(param_1);
  }
  fVar18 = *(float *)(param_2 + 0x34);
  plVar6 = (longlong *)0x0;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x998)) {
    lVar14 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x990);
      uVar12 = *(uint *)(lVar7 + 8 + lVar14);
      if (((((uVar12 & 0x10) == 0) && (lVar2 = *(longlong *)(lVar7 + lVar14), lVar2 != 0)) &&
          (*(char *)(lVar2 + 0x3a) != '\0')) &&
         ((*(char *)(lVar2 + 0x39) == '\0' || (param_5 != '\0')))) {
        if (((uVar12 & 2) == 0) && (lVar2 != 0)) {
          plVar8 = (longlong *)(lVar2 + 0x30);
        }
        else {
          plVar8 = (longlong *)(lVar7 + 0x28 + lVar14);
        }
        lVar7 = *plVar8;
        if (lVar7 != 0) {
          if ((plVar6 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar6 + 0x440))(), cVar4 == '\0')) {
            plVar6 = (longlong *)FUN_14222b250(*(undefined8 *)(param_1 + 0x118),lVar7);
            if (plVar6 != (longlong *)0x0) {
              lVar7 = FUN_142a0cc80();
              if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                  lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) goto LAB_140a96684;
            }
            plVar6 = (longlong *)0x0;
          }
          else {
LAB_140a96684:
            if (plVar6 != (longlong *)0x0) {
              fVar16 = fVar18;
              if (param_4 <= 0.0) {
                iVar5 = rand();
                fVar17 = (float)iVar5 * 3.051851e-05;
                uVar9 = local_res10;
              }
              else {
                (**(code **)(*plVar6 + 0x428))(plVar6);
                uVar9 = local_res10;
                fVar17 = (*local_res18 - local_c8) * (*local_res18 - local_c8) +
                         (local_res18[1] - local_c4) * (local_res18[1] - local_c4) +
                         (local_res18[2] - local_c0) * (local_res18[2] - local_c0);
                if (param_4 * param_4 < fVar17) goto LAB_140a967fa;
                fVar17 = 1.0 - SQRT(fVar17) * (1.0 / param_4);
                if (*(longlong *)(local_res10 + 0x40) != 0) {
                  fVar16 = (float)UCurveFloat::GetFloatValue();
                  fVar16 = fVar16 * fVar18;
                }
              }
              if ((1.0 <= fVar16) || (iVar5 = rand(), (float)iVar5 * 3.051851e-05 <= fVar16)) {
                fVar18 = *(float *)(uVar9 + 0x34);
                iVar5 = 0;
                lVar7 = 0;
                iVar11 = (int)uVar13;
                if (0 < iVar11) {
                  do {
                    if (*(int *)(*(longlong *)(param_1 + 0x990) + 0x54 + lVar14) ==
                        *(int *)(lVar10 + lVar7 * 8)) {
                      if (lVar7 != -1) {
                        pfVar1 = (float *)(lVar10 + 4 + lVar7 * 8);
                        if (*pfVar1 <= fVar17 && fVar17 != *pfVar1) {
                          *(ulonglong *)(lVar10 + lVar7 * 8) = CONCAT44(fVar17,iVar15);
                        }
                        goto LAB_140a967fa;
                      }
                      break;
                    }
                    iVar5 = iVar5 + 1;
                    lVar7 = lVar7 + 1;
                  } while (iVar5 < iVar11);
                }
                uVar12 = iVar11 + 1;
                local_b0 = CONCAT44(local_b0._4_4_,uVar12);
                if (local_b0._4_4_ < (int)uVar12) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_b8,uVar13);
                  lVar10 = local_b8;
                  uVar12 = (uint)local_b0;
                }
                uVar13 = (ulonglong)uVar12;
                *(ulonglong *)(lVar10 + (longlong)iVar11 * 8) = CONCAT44(fVar17,iVar15);
              }
              else {
                fVar18 = fVar18 * (*(float *)(uVar9 + 0x38) + 1.0);
              }
            }
          }
        }
      }
LAB_140a967fa:
      iVar5 = (int)uVar13;
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 0x60;
      param_2 = local_res10;
    } while (iVar15 < *(int *)(param_1 + 0x998));
  }
  if (0 < iVar5) {
    iVar15 = *(int *)(param_2 + 0x30);
    iVar11 = iVar5;
    if ((iVar15 != 0) && (iVar15 <= iVar5)) {
      iVar11 = iVar15;
    }
    if (iVar11 < iVar5) {
      local_res10 = local_res10 & 0xffffffffffffff00;
      FUN_140a795d0(lVar10,(longlong)iVar5,0,&local_res10);
    }
    lVar14 = 0;
    if (0 < iVar11) {
      do {
        iVar5 = *(int *)(param_6 + 0x28);
        *(int *)(param_6 + 0x28) = iVar5 + 1;
        if (*(int *)(param_6 + 0x2c) < iVar5 + 1) {
          FUN_140a95f50(param_6,iVar5);
        }
        lVar7 = *(longlong *)(param_6 + 0x20);
        if (*(longlong *)(param_6 + 0x20) == 0) {
          lVar7 = param_6;
        }
        lVar2 = lVar14 * 8;
        lVar14 = lVar14 + 1;
        *(undefined4 *)(lVar7 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar10 + lVar2);
      } while (lVar14 < iVar11);
    }
  }
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  return;
}



// FUNCTION 140a96930 SetIsInputAllowed body=7 status=ok
// SIG undefined SetIsInputAllowed(void)

void AShipCharacter::SetIsInputAllowed(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x918) = param_2;
  return;
}



// FUNCTION 140a96940 FUN_140a96940 body=54 status=ok
// SIG undefined FUN_140a96940(void)

void FUN_140a96940(longlong param_1)

{
  FUN_142d28c90();
  *(uint *)(param_1 + 0x78c) = *(int *)(param_1 + 0x9b4) << 8 | (uint)*(byte *)(param_1 + 0x974);
  return;
}



// FUNCTION 140a96980 FUN_140a96980 body=40 status=ok
// SIG undefined FUN_140a96980(void)

void FUN_140a96980(longlong param_1,byte param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    *(byte *)(*(longlong *)(param_1 + 0x270) + 0x714) = param_2 ^ 1;
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    *(byte *)(*(longlong *)(param_1 + 0x2b0) + 0x714) = param_2 ^ 1;
  }
  return;
}



// FUNCTION 140a969b0 FUN_140a969b0 body=7 status=ok
// SIG undefined FUN_140a969b0(void)

void FUN_140a969b0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x9b0) = param_2;
  return;
}



// FUNCTION 140a969e0 FUN_140a969e0 body=92 status=ok
// SIG undefined FUN_140a969e0(void)

void FUN_140a969e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = param_2[0x1f];
    if (lVar1 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar1 = param_2[0x1f];
    }
    *(longlong *)(param_1 + 0x3b0) = lVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  return;
}



// FUNCTION 140a96a40 FUN_140a96a40 body=67 status=ok
// SIG undefined FUN_140a96a40(void)

void FUN_140a96a40(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    FUN_140a95820(param_1);
    return;
  }
  FUN_142dbb5d0(param_1 + 0x318,local_res18);
  FUN_140a95820(param_1);
  return;
}



// FUNCTION 140a96a90 FUN_140a96a90 body=505 status=ok
// SIG undefined FUN_140a96a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a96a90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  if ((*(longlong *)(param_1 + 0x9a8) == 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x120), lVar1 != 0 || (lVar1 = FUN_1423407b0(), lVar1 != 0)))
     ) {
    local_a8 = FUN_140a9ba90;
    uStack_a0 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x9a8,&local_98,0x800000);
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



// FUNCTION 140a96c90 FUN_140a96c90 body=393 status=ok
// SIG undefined FUN_140a96c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a96c90(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68 [2];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_140b40310();
  lVar3 = FUN_142ffcb50(param_1);
  if ((lVar3 == 0) || (plVar1 = *(longlong **)(param_1 + 0x568), plVar1 == (longlong *)0x0))
  goto LAB_140a96de5;
  uVar4 = ACharacter::GetPrivateStaticClass();
  lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
  if (lVar5 != 0) {
    local_68[0] = 0;
    lVar6 = FUN_142227070(param_1,lVar5,0);
    if (lVar6 == 0) {
LAB_140a96d5e:
      lVar6 = 0;
    }
    else {
      lVar7 = ACharacter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140a96d5e;
    }
    *(longlong *)(param_1 + 0x770) = lVar6;
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0xca) = 0;
      FUN_14234b150(*(undefined8 *)(param_1 + 0x770));
      local_68[0] = 0;
      FUN_142382f60(*(undefined8 *)(param_1 + 0x770),lVar3,&DAT_146532184,0);
      uVar4 = FUN_14238d0c0(lVar5,local_58);
      local_78 = 0;
      FUN_142398770(*(undefined8 *)(param_1 + 0x770),uVar4,0,0);
    }
  }
  FUN_140a9b9f0(param_1);
LAB_140a96de5:
  local_68[0] = *(undefined8 *)(param_1 + 0x750);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x728,local_68);
  return;
}



// FUNCTION 140a96e20 FUN_140a96e20 body=83 status=ok
// SIG undefined FUN_140a96e20(void)

void FUN_140a96e20(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 == '\0') {
    FUN_142dbb5d0(param_1 + 0x348,local_res18);
  }
  else {
    FUN_142dafbc0();
  }
  cVar1 = FUN_1407c3030(param_1 + 0x348);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x3e0) = 0;
  }
  return;
}



// FUNCTION 140a96e80 FUN_140a96e80 body=12 status=ok
// SIG undefined FUN_140a96e80(void)

void FUN_140a96e80(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x96c);
  return;
}



// FUNCTION 140a96e90 FUN_140a96e90 body=801 status=ok
// SIG undefined FUN_140a96e90(void)

undefined8 FUN_140a96e90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 local_88;
  float local_80;
  
  if (*(longlong *)(param_2 + 0x2b0) == 0) {
    return 0;
  }
  lVar6 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    plVar8 = *(longlong **)(param_1 + 0xa0);
    lVar2 = *(longlong *)(param_2 + 0x50);
    plVar1 = plVar8 + *(int *)(param_1 + 0xa8);
    do {
      if (plVar8 == plVar1) {
        return 0;
      }
      lVar7 = lVar6;
      if (*plVar8 != 0) {
        lVar3 = FUN_142e0d0b0();
        for (lVar5 = *plVar8; (lVar7 = lVar6, lVar5 != 0 && (lVar7 = *plVar8, lVar5 != lVar3));
            lVar5 = *(longlong *)(lVar5 + 0x30)) {
        }
      }
      lVar5 = lVar6;
      if (lVar2 != 0) {
        lVar4 = FUN_142e0d0b0();
        lVar3 = lVar2;
        do {
          lVar5 = lVar2;
          if (lVar3 == lVar4) break;
          lVar3 = *(longlong *)(lVar3 + 0x30);
          lVar5 = lVar6;
        } while (lVar3 != 0);
      }
      if (lVar7 == lVar5) break;
      plVar8 = plVar8 + 1;
    } while( true );
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    plVar8 = *(longlong **)(param_1 + 0xb0);
    lVar2 = *(longlong *)(param_2 + 0x58);
    plVar1 = plVar8 + *(int *)(param_1 + 0xb8);
    do {
      if (plVar8 == plVar1) {
        return 0;
      }
      lVar7 = lVar6;
      if (*plVar8 != 0) {
        lVar3 = FUN_142e49950();
        for (lVar5 = *plVar8; (lVar7 = lVar6, lVar5 != 0 && (lVar7 = *plVar8, lVar5 != lVar3));
            lVar5 = *(longlong *)(lVar5 + 0x30)) {
        }
      }
      lVar5 = lVar6;
      if (lVar2 != 0) {
        lVar4 = FUN_142e49950();
        lVar3 = lVar2;
        do {
          lVar5 = lVar2;
          if (lVar3 == lVar4) break;
          lVar3 = *(longlong *)(lVar3 + 0x30);
          lVar5 = lVar6;
        } while (lVar3 != 0);
      }
      if (lVar7 == lVar5) break;
      plVar8 = plVar8 + 1;
    } while( true );
  }
  local_88 = *(undefined8 *)(param_2 + 0x11c);
  fVar12 = *(float *)(param_2 + 0x124);
  fVar14 = (float)((ulonglong)local_88 >> 0x20);
  fVar11 = (float)local_88;
  if ((((float)local_88 == 0.0) && (fVar14 == 0.0)) && (fVar12 == 0.0)) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x2b0) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
  }
  local_80 = fVar12;
  fVar9 = (float)FUN_142c98860(param_1 + 0x68,lVar6);
  if (fVar9 <= 0.0) {
    return 0;
  }
  if (360.0 <= fVar9) {
    return 1;
  }
  FUN_142d1a360(*(undefined8 *)(param_2 + 0x2b0),&local_88);
  fVar13 = fVar14 * fVar14 + fVar11 * fVar11;
  if (fVar13 == 1.0) {
    fVar10 = fVar14;
    fVar16 = fVar11;
    if (fVar12 == 0.0) goto LAB_140a97160;
  }
  else {
    fVar10 = DAT_1468b5d94;
    fVar16 = DAT_1468b5d90;
    fVar12 = DAT_1468b5d98;
    if (fVar13 < 1e-08) goto LAB_140a97160;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar12 = auVar15._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
    fVar14 = fVar12 * fVar14;
    fVar11 = fVar12 * fVar11;
  }
  fVar10 = fVar14;
  fVar16 = fVar11;
  fVar12 = 0.0;
LAB_140a97160:
  fVar16 = (float)local_88 * fVar16;
  fVar10 = local_88._4_4_ * fVar10;
  fVar12 = local_80 * fVar12;
  fVar11 = _guard_xfg_dispatch_icall_nop(fVar9 * 0.008726646);
  if (-(fVar16 + fVar10 + fVar12) < fVar11) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a971c0 FUN_140a971c0 body=110 status=ok
// SIG undefined FUN_140a971c0(void)

bool FUN_140a971c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = (**(code **)(*plVar1 + 0xfa8))(plVar1);
      if (lVar3 != 0) {
        return 0 < *(int *)(lVar3 + 0x48);
      }
    }
  }
  return false;
}



// FUNCTION 140a97230 FUN_140a97230 body=126 status=ok
// SIG undefined FUN_140a97230(void)

undefined8 FUN_140a97230(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = BuildSettings::IsPromotedBuild();
  if ((cVar2 == '\0') || (lVar1 = *(longlong *)(param_2 + 0x2b0), lVar1 == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x308) != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
        (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30) != 0)) &&
       (cVar2 = FUN_142d1f4a0(lVar1), cVar2 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a972b0 FUN_140a972b0 body=449 status=ok
// SIG undefined FUN_140a972b0(void)

undefined8 FUN_140a972b0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x178);
  lVar7 = 0;
  if (lVar5 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a97309;
  }
  lVar5 = lVar7;
LAB_140a97309:
  if (((*(byte *)(*(longlong *)(lVar5 + 0x520) + 0x460) & 2) != 0) &&
     (lVar5 = FUN_140a8ceb0(param_1), *(longlong *)(lVar5 + 0x528) != 0)) {
    plVar6 = (longlong *)FUN_140a8ceb0(param_1);
    cVar1 = (**(code **)(*plVar6 + 4000))(plVar6);
    lVar5 = DAT_146867400;
    if (cVar1 == '\0') {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar7 = 1;
      }
      if (*(int *)(lVar5 + lVar7 * 4) != 0) {
        if (*(longlong *)(param_1 + 0x370) != 0) {
          lVar5 = FUN_140a8ceb0(param_1);
          fVar8 = (float)(**(code **)(**(longlong **)(lVar5 + 0x528) + 0x8b8))();
          if (fVar8 < *(float *)(*(longlong *)(param_1 + 0x370) + 0x440)) {
            return 0;
          }
        }
        lVar5 = FUN_140a8ceb0(param_1);
        if (((*(longlong *)(lVar5 + 0x990) != 0) &&
            (plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x990) + 0xd88),
            lVar5 = (**(code **)(*plVar6 + 0xf0))(plVar6,0), lVar5 != 0)) &&
           ((cVar1 = FUN_14307ede0(lVar5), cVar1 != '\0' &&
            (lVar5 = FUN_14307d8d0(lVar5,*(undefined1 *)(lVar5 + 0x690)), lVar5 != 0)))) {
          lVar7 = FUN_1414ebea0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a97480 FUN_140a97480 body=806 status=ok
// SIG undefined FUN_140a97480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a97480(longlong param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined8 *local_1b0;
  undefined1 *local_1a8;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [12];
  undefined4 local_13c;
  float local_12c;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (((lVar4 != 0) || (lVar4 = FUN_1423407b0(), lVar4 != 0)) &&
     (lVar7 = *(longlong *)(param_1 + 0x1c8), lVar7 != 0)) {
    lVar2 = *(longlong *)(lVar7 + 0x168);
    if (lVar2 == 0) {
      local_198 = _DAT_1468b5d90;
      local_190 = DAT_1468b5d98;
    }
    else {
      local_198 = *(undefined8 *)(lVar2 + 0x220);
      local_190 = *(float *)(lVar2 + 0x228);
    }
    local_178 = (undefined4)local_198;
    local_174 = (undefined4)((ulonglong)local_198 >> 0x20);
    if (param_2 == '\0') {
      fVar1 = *(float *)(lVar7 + 0x730);
    }
    else {
      fVar1 = *(float *)(lVar7 + 0x734);
    }
    local_a8 = 0x10000;
    local_b0 = 0;
    local_70 = 0;
    local_68 = 0;
    local_170 = local_190 - (fVar1 + *(float *)(lVar7 + 0x6e8));
    local_50 = 0;
    local_48 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_188 = 0;
    local_b8 = 0;
    local_a4 = 0;
    local_94 = 0x101;
    local_9c = 0;
    local_a2 = 0;
    local_190 = local_190 + *(float *)(lVar7 + 0x72c);
    FUN_1426d3dd0(local_168);
    FUN_1426ea8d0(local_168);
    lVar7 = *(longlong *)(param_1 + 0x1c8);
    if (*(char *)(lVar7 + 0x6ed) != '\0') {
      local_a0 = 1;
    }
    puVar5 = *(undefined1 **)(lVar7 + 0x6f0);
    puVar6 = puVar5 + *(int *)(lVar7 + 0x6f8);
    if (puVar5 != puVar6) {
      do {
        FCollisionResponseContainer::SetResponse(local_168,*puVar5,0);
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar6);
      lVar7 = *(longlong *)(param_1 + 0x1c8);
    }
    _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
    local_1a8 = local_168;
    local_1b0 = &local_b8;
    local_13c = 0x3f800000;
    local_1b8 = (uint)*(byte *)(lVar7 + 0x6ec);
    cVar3 = UWorld::LineTraceSingleByChannel(lVar4,local_148,&local_198,&local_178);
    lVar4 = *(longlong *)(param_1 + 0x1c8);
    if (cVar3 != '\0') {
      local_180 = local_12c + *(float *)(lVar4 + 0x6e8);
      local_1b8 = local_1b8 & 0xffffff00;
      FUN_14223c850(lVar4,&local_188,0,0);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      return 1;
    }
    FUN_141474420(lVar4,param_2);
    FUN_142227350(*(undefined8 *)(param_1 + 0x1c8),1);
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 140a977b0 FUN_140a977b0 body=1236 status=ok
// SIG undefined FUN_140a977b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a977b0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 *in_stack_ffffffffffffff48;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar1[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar10 = plVar1[0x1f];
    }
  }
  plVar1 = *(longlong **)(param_3 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar10 != 0)) && (lVar7 = FUN_140a8bdf0(param_3), lVar7 != 0)) {
      fVar11 = *(float *)(param_2 + 3);
      lVar2 = param_2[7];
      local_98 = param_2[2];
      fVar12 = (float)local_98;
      fVar14 = (float)((ulonglong)local_98 >> 0x20);
      local_90 = fVar11;
      lVar8 = FUN_14148cad0();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        fVar11 = local_90 + *(float *)(param_1 + 0x410);
        fVar12 = (float)local_98 + *(float *)(param_1 + 0x408);
        fVar14 = local_98._4_4_ + *(float *)(param_1 + 0x40c);
        local_98 = CONCAT44(fVar14,fVar12);
        local_90 = fVar11;
      }
      cVar4 = FUN_142d33cc0(param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),0x40));
      if (cVar4 == '\0') {
        fVar13 = *(float *)((longlong)param_2 + 0x1c);
        if (0.0001 < fVar13) {
          if (fVar13 <= 1.0) {
            fVar13 = 1.0;
          }
          bVar5 = FUN_142d33cc0(param_2,2);
          local_70 = 0.0;
          local_80 = 0.0;
          local_68 = CONCAT44((float)bVar5,(float)((int)ROUND(fVar13 + fVar13 + 0.5) >> 1));
          local_58 = *(undefined8 *)(lVar10 + 0x90);
          uStack_50 = *(undefined8 *)(lVar10 + 0x98);
          in_stack_ffffffffffffff48 = &local_88;
          uStack_60 = 0;
          local_78 = 0;
          local_88 = 0;
          local_98 = CONCAT44(fVar14,fVar12);
          local_90 = fVar11;
          FUN_142604400(lVar7,*(undefined8 *)(param_1 + 1000),0,&local_98,in_stack_ffffffffffffff48,
                        &local_78,&local_58,&local_68);
          cVar4 = FUN_142d33cc0(param_2,1);
          if (cVar4 != '\0') {
            local_70 = 0.0;
            local_58 = _DAT_1464aa6c0;
            uStack_50 = _DAT_1464aa6c8;
            local_68 = _DAT_1464aa6c0;
            uStack_60 = _DAT_1464aa6c8;
            local_80 = 0.0;
            local_78 = 0;
            in_stack_ffffffffffffff48 = &local_88;
            local_88 = 0;
            local_98 = CONCAT44(fVar14,fVar12);
            local_90 = fVar11;
            FUN_142604400(lVar7,*(undefined8 *)(param_1 + 0x3f0),0,&local_98,
                          in_stack_ffffffffffffff48,&local_78,&local_68,&local_58);
          }
          cVar4 = FUN_142d33cc0(param_2,0x20);
          if (cVar4 != '\0') {
            local_68 = *(undefined8 *)(lVar10 + 0x90);
            uStack_60 = *(undefined8 *)(lVar10 + 0x98);
            local_58 = _DAT_1464aa6c0;
            uStack_50 = _DAT_1464aa6c8;
            local_70 = 0.0;
            local_80 = 0.0;
            local_78 = 0;
            in_stack_ffffffffffffff48 = &local_88;
            local_88 = 0;
            local_98 = CONCAT44(fVar14,fVar12);
            local_90 = fVar11;
            FUN_142604400(lVar7,*(undefined8 *)(param_1 + 0x3f8),0,&local_98,
                          in_stack_ffffffffffffff48,&local_78,&local_68,&local_58);
          }
        }
      }
      else {
        local_58 = *(undefined8 *)(lVar10 + 0x90);
        uStack_50 = *(undefined8 *)(lVar10 + 0x98);
        local_68 = _DAT_1464aa6c0;
        uStack_60 = _DAT_1464aa6c8;
        local_90 = 0.0;
        local_80 = 0.0;
        local_98 = 0;
        in_stack_ffffffffffffff48 = &local_88;
        local_88 = 0;
        local_78 = CONCAT44(fVar14,fVar12);
        local_70 = fVar11;
        FUN_142604400(lVar7,*(undefined8 *)(param_1 + 0x400),0,&local_78,in_stack_ffffffffffffff48,
                      &local_98,&local_58,&local_68);
      }
      if ((param_2[5] != 0) && (lVar10 = *(longlong *)(param_2[5] + 0x240), lVar10 != 0)) {
        local_70 = (float)DAT_1468b5da8;
        local_78 = DAT_1468b5da0;
        local_88 = CONCAT44(fVar14,fVar12);
        local_80 = fVar11;
        uVar9 = (**(code **)(*plVar1 + 0x148))(plVar1);
        lVar10 = FUN_14245fbc0(uVar9,lVar10,&local_88,&local_78,
                               (ulonglong)in_stack_ffffffffffffff48 & 0xffffffffffffff00,1,0);
        if (lVar10 != 0) {
          uVar6 = FUN_140d000a0(plVar1);
          FUN_142398e60(lVar10,uVar6,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a97c90 FUN_140a97c90 body=454 status=ok
// SIG undefined FUN_140a97c90(void)

void FUN_140a97c90(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 local_38 [48];
  
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 == 0) goto LAB_140a97dab;
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (lVar4 = FUN_140c41820(lVar6), lVar4 == 0)) goto LAB_140a97dab;
  fVar7 = *(float *)(param_4 + 0xc);
  if (*(longlong *)(lVar6 + 0x4d0) != 0) {
    fVar7 = (float)FUN_1427098d0(*(longlong *)(lVar6 + 0x4d0),param_4,local_38,0);
  }
  fVar8 = *(float *)(param_1 + 0x9bc);
  if (fVar8 == -1.0) {
    plVar5 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x9bc) = 0;
        fVar8 = 0.0;
        goto LAB_140a97d9d;
      }
    }
    fVar8 = *(float *)(lVar6 + 0x38);
    *(float *)(param_1 + 0x9bc) = fVar8;
  }
LAB_140a97d9d:
  if (fVar8 < fVar7) {
    return;
  }
LAB_140a97dab:
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (lVar6 = *(longlong *)(param_3 + 0x268), lVar6 != 0)) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (*(longlong *)(lVar6 + 0x698) != 0)) &&
        ((cVar2 = FUN_14122f110(lVar6), cVar2 != '\0' || (*(int *)(lVar6 + 0xec8) < 1)))) &&
       (iVar3 = FUN_140b81310(*(undefined8 *)(param_1 + 0x118)), iVar3 == 0)) {
      return;
    }
  }
  FUN_142d2a320(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a97e60 FUN_140a97e60 body=377 status=ok
// SIG undefined FUN_140a97e60(void)

bool FUN_140a97e60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res8;
  longlong *local_res20;
  
  local_res8 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  cVar2 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if (cVar2 == '\0') {
    return (bool)2;
  }
  cVar2 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x38),&local_res20,0);
  plVar8 = local_res8;
  if (cVar2 == '\0') {
    return (bool)2;
  }
  if (local_res8 == (longlong *)0x0) {
LAB_140a97f42:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (lVar5 = (**(code **)(*plVar8 + 0x678))(plVar8), lVar5 == 0))
    goto LAB_140a97f42;
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a97f42;
  }
  plVar8 = local_res20;
  if (local_res20 != (longlong *)0x0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140a97f86;
  }
  plVar8 = (longlong *)0x0;
LAB_140a97f86:
  if ((lVar5 != 0) && (plVar8 != (longlong *)0x0)) {
    plVar7 = (longlong *)(**(code **)(*plVar8 + 0x678))(plVar8);
    bVar1 = *(byte *)(param_1 + 0x40);
    if (plVar7 != (longlong *)0x0) {
      plVar8 = plVar7;
    }
    uVar4 = (**(code **)(*(longlong *)(lVar5 + 0x8b0) + 0x20))((longlong *)(lVar5 + 0x8b0),plVar8);
    return uVar4 != bVar1;
  }
  return (bool)2;
}



// FUNCTION 140a97fe0 FUN_140a97fe0 body=327 status=ok
// SIG undefined FUN_140a97fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140a97fe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8 [2];
  undefined1 local_3a8 [896];
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_3b8[0] = (longlong *)0x0;
  cVar2 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),local_3b8,0);
  plVar1 = local_3b8[0];
  if ((cVar2 != '\0') && (local_3b8[0] != (longlong *)0x0)) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = (**(code **)(*plVar1 + 0x670))(plVar1);
      if (lVar4 == 0) {
        uVar5 = FUN_142e79600();
        lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
        FUN_142dc1ad0(local_3a8);
        if (((lVar4 != 0) && (cVar2 = FUN_142dcd6e0(lVar4,local_3a8,0), cVar2 != '\0')) &&
           (local_28 == '\x02')) goto LAB_140a980fa;
      }
      else {
        uVar5 = FUN_142e79d90();
        lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
        if ((lVar4 != 0) && (lVar4 = FUN_142dd0650(lVar4), *(int *)(lVar4 + 8) != 0)) {
LAB_140a980fa:
          return *(char *)(param_1 + 0x38) != '\x01';
        }
      }
      return *(char *)(param_1 + 0x38) != '\0';
    }
  }
  return 2;
}



// FUNCTION 140a98130 FUN_140a98130 body=224 status=ok
// SIG undefined FUN_140a98130(void)

undefined8 FUN_140a98130(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_res8;
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if ((cVar1 != '\0') && (local_res8 != (longlong *)0x0)) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(local_res8[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_res8[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar5 = (longlong *)(**(code **)(*local_res8 + 0x678))(local_res8);
      if (plVar5 != (longlong *)0x0) {
        local_res8 = plVar5;
      }
      uVar6 = FUN_142dfdf30();
      plVar5 = (longlong *)(**(code **)(*local_res8 + 0x628))(local_res8,uVar6);
      if (plVar5 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar5 + 0x408))(plVar5);
        if ((*(int *)(param_1 + 0x38) <= iVar3) &&
           ((*(int *)(param_1 + 0x3c) == 0 || (iVar3 <= *(int *)(param_1 + 0x3c))))) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 140a98210 FUN_140a98210 body=321 status=ok
// SIG undefined FUN_140a98210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140a98210(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  cVar2 = FUN_1405e99e0(param_3,param_1[6],local_88);
  if (cVar2 != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_142f6c9f0(uVar4);
    uVar4 = local_88[0];
    if ((lVar5 != 0) && (lVar1 != 0)) {
      local_48 = (longlong *)0x0;
      local_38 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = uVar4;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_78[0] = FUN_140a86410;
      uVar3 = FUN_142f5ca80(lVar5,local_78);
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
      return *(byte *)(param_1 + 7) != uVar3;
    }
  }
  return 2;
}



// FUNCTION 140a98360 FUN_140a98360 body=440 status=ok
// SIG undefined FUN_140a98360(void)

undefined1 FUN_140a98360(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_res20;
  
  cVar3 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if (cVar3 == '\0') {
    return 2;
  }
  cVar3 = FUN_1405e99e0(param_3,*(undefined8 *)(param_1 + 0x38),&local_res20);
  if (cVar3 == '\0') {
    return 2;
  }
  lVar5 = FUN_14291fb80();
  if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
       (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    local_res8 = *(longlong *)(local_res8 + 0x488);
  }
  lVar5 = local_res8;
  if (local_res8 == 0) {
    return 2;
  }
  uVar6 = FUN_1430a8880();
  plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
  if (plVar7 == (longlong *)0x0) {
    return 2;
  }
  lVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7,0);
  if (lVar5 == 0) {
    return 2;
  }
  lVar10 = *(longlong *)(lVar5 + 0x470);
  if (lVar10 == 0) {
    return 2;
  }
  if (*(longlong *)(lVar10 + 0x3f0) == 0) {
    return 2;
  }
  lVar8 = FUN_142e49950();
  lVar1 = *(longlong *)(lVar10 + 0x3f0);
  while( true ) {
    if (lVar1 == 0) {
      return 2;
    }
    if (lVar1 == lVar8) break;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  if (*(longlong *)(lVar10 + 0x3f0) == 0) {
    return 2;
  }
  lVar5 = *(longlong *)(lVar5 + 0x470);
  if (*(longlong *)(lVar5 + 0x3f0) != 0) {
    plVar9 = (longlong *)FUN_142e49950();
    plVar7 = *(longlong **)(lVar5 + 0x3f0);
    for (plVar2 = plVar7; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
      if (plVar2 == plVar9) goto LAB_140a984a0;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_140a984a0:
  lVar5 = plVar7[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar5 = plVar7[0x1f];
    if (lVar5 == 0) {
      return 2;
    }
  }
  lVar10 = FUN_1414193b0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 2;
  }
  return *(longlong *)(lVar5 + 0x138) != local_res20;
}



// FUNCTION 140a98520 FUN_140a98520 body=376 status=ok
// SIG undefined FUN_140a98520(void)

bool FUN_140a98520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res8;
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  plVar8 = local_res8;
  if (cVar1 == '\0') {
    return (bool)2;
  }
  if (local_res8 != (longlong *)0x0) {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a98593;
  }
  plVar8 = (longlong *)0x0;
LAB_140a98593:
  lVar5 = FUN_14291fb80();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    plVar8 = (longlong *)plVar8[0x91];
    local_res8 = plVar8;
  }
  plVar7 = local_res8;
  if (local_res8 != (longlong *)0x0) {
    uVar6 = FUN_1430a8880();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar6);
    if (((plVar7 != (longlong *)0x0) &&
        (plVar7 = (longlong *)(**(code **)(*plVar7 + 0xf0))(plVar7,0), plVar7 != (longlong *)0x0))
       && (plVar8 != (longlong *)0x0)) {
      uVar6 = FUN_142dfdf30();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
      uVar6 = FUN_142dfdf30();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar6);
      if ((plVar7 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
        iVar3 = (**(code **)(*plVar8 + 0x408))(plVar8);
        iVar4 = (**(code **)(*plVar7 + 0x408))(plVar7);
        return iVar3 - iVar4 < *(int *)(param_1 + 0x38);
      }
    }
  }
  return (bool)2;
}



// FUNCTION 140a986a0 FUN_140a986a0 body=266 status=ok
// SIG undefined FUN_140a986a0(void)

bool FUN_140a986a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res8;
  longlong local_res20;
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_1405e99e0(param_3,*(undefined8 *)(param_1 + 0x38),&local_res20);
    if (cVar1 != '\0') {
      lVar3 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res8 = *(longlong *)(local_res8 + 0x488);
      }
      lVar3 = local_res8;
      if (local_res8 != 0) {
        uVar4 = FUN_1430a8880();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        if (plVar5 != (longlong *)0x0) {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0xf0))(plVar5,0);
          if (plVar5 != (longlong *)0x0) {
            uVar4 = FUN_14301f8f0();
            lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x218) != 0)) {
              return *(longlong *)(*(longlong *)(lVar3 + 0x218) + 0x108) != local_res20;
            }
          }
        }
      }
    }
  }
  return (bool)2;
}



// FUNCTION 140a987b0 FUN_140a987b0 body=258 status=ok
// SIG undefined FUN_140a987b0(void)

bool FUN_140a987b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res8;
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if (cVar1 != '\0') {
    lVar3 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res8 = *(longlong *)(local_res8 + 0x488);
    }
    lVar3 = local_res8;
    if (local_res8 != 0) {
      uVar4 = FUN_1430a8880();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0xf0))(plVar5,0);
        if (plVar5 != (longlong *)0x0) {
          uVar4 = FUN_14301f8f0();
          lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
          if (lVar3 != 0) {
            if (*(longlong *)(lVar3 + 0x210) != 0) {
              return *(longlong *)(*(longlong *)(lVar3 + 0x210) + 0xb8) !=
                     *(longlong *)(param_1 + 0x38);
            }
            return *(longlong *)(param_1 + 0x38) != 0;
          }
        }
      }
    }
  }
  return (bool)2;
}



// FUNCTION 140a988c0 FUN_140a988c0 body=829 status=ok
// SIG undefined FUN_140a988c0(void)

undefined8 FUN_140a988c0(longlong param_1,longlong param_2,longlong *param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [16];
  float *local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 == 0) {
    return 0;
  }
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar7 = FUN_140a8a1a0(param_2,lVar2);
  if (*param_3 == 0) {
    if (lVar7 == 0) {
      plVar3 = *(longlong **)(lVar2 + 0x490);
      if (plVar3 == (longlong *)0x0) goto LAB_140a98bab;
      lVar8 = FUN_14145f370();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140a98bab;
      (**(code **)(*plVar3 + 0x830))(plVar3,&local_78,local_68);
      plVar3 = *(longlong **)(param_2 + 0xb8);
      if (plVar3 == (longlong *)0x0) goto LAB_140a98bab;
      lVar8 = plVar3[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar8 = plVar3[0x1f];
        if (lVar8 == 0) goto LAB_140a98bab;
      }
      lVar10 = *(longlong *)(lVar8 + 0x98);
      if (lVar10 == 0) goto LAB_140a98bab;
      lVar9 = *(longlong *)(param_1 + 0x120);
      local_58 = (float *)0x0;
      local_50 = 0;
      local_48 = lVar2;
      local_40 = lVar2;
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
        lVar10 = *(longlong *)(lVar8 + 0x98);
      }
      FUN_142d19e60(lVar10,&local_58,0,&local_78,local_68,&local_48,0,lVar9,0,0,0);
      uVar14 = (ulonglong)(int)local_50;
      fVar16 = 9999999.0;
      pfVar12 = local_58 + uVar14 * 100;
      if (local_58 != pfVar12) {
        pfVar11 = local_58 + 0x47;
        do {
          lVar8 = FWeakObjectPtr::Get(pfVar11 + 0x14);
          if (((lVar8 != 0) &&
              (iVar6 = (**(code **)(*(longlong *)(lVar2 + 0x8b0) + 0x20))
                                 ((longlong *)(lVar2 + 0x8b0),lVar8), iVar6 != 0)) &&
             (fVar15 = (pfVar11[-2] - local_78) * (pfVar11[-2] - local_78) +
                       (pfVar11[-1] - local_74) * (pfVar11[-1] - local_74) +
                       (*pfVar11 - local_70) * (*pfVar11 - local_70), fVar15 < fVar16)) {
            lVar7 = lVar8;
            fVar16 = fVar15;
          }
          pfVar1 = pfVar11 + 0x1d;
          pfVar11 = pfVar11 + 100;
        } while (pfVar1 != pfVar12);
        uVar14 = local_50 & 0xffffffff;
      }
      if ((int)uVar14 != 0) {
        pfVar12 = local_58 + 0x3a;
        do {
          if (*(longlong *)pfVar12 != 0) {
            FMemory::Free();
          }
          pfVar12 = pfVar12 + 100;
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 != 0);
      }
      if (local_58 != (float *)0x0) {
        FMemory::Free();
      }
      goto LAB_140a98ba2;
    }
  }
  else {
LAB_140a98ba2:
    if (lVar7 == 0) goto LAB_140a98bab;
  }
  *param_3 = lVar7;
LAB_140a98bab:
  if ((*param_3 != 0) && (cVar5 = FUN_140a86480(param_1,param_2), cVar5 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140a98c00 FUN_140a98c00 body=195 status=ok
// SIG undefined FUN_140a98c00(void)

void FUN_140a98c00(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_142d2a7a0();
  iVar3 = *(int *)(param_1 + 0x28) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 << 5;
    lVar5 = lVar4;
    do {
      if (*(int *)(lVar4 + *(longlong *)(param_1 + 0x20)) == -1) {
        if (*(longlong *)(lVar5 + 0x10 + *(longlong *)(param_1 + 0x20)) != 0) {
          FMemory::Free();
        }
        iVar1 = *(int *)(param_1 + 0x28);
        iVar2 = (iVar1 - iVar3) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + *(longlong *)(param_1 + 0x20)),
                     (void *)((longlong)(iVar1 - iVar2) * 0x20 + *(longlong *)(param_1 + 0x20)),
                     (longlong)iVar2 << 5);
          iVar1 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar1 + -1;
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
      }
      lVar5 = lVar5 + -0x20;
      lVar4 = lVar4 + -0x20;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}



// FUNCTION 140a98cd0 FUN_140a98cd0 body=398 status=ok
// SIG undefined FUN_140a98cd0(void)

void FUN_140a98cd0(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  FUN_14237ac80();
  lVar1 = param_1[0x39];
  if (lVar1 != 0) {
    local_e8 = param_2 * *(float *)((longlong)param_1 + 0x18c);
    local_e4 = param_2 * *(float *)(param_1 + 0x32);
    local_e0 = param_2 * *(float *)((longlong)param_1 + 0x194);
    pvVar5 = _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
    local_9c = 0x3f800000;
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_f0 = DAT_1468b5da8;
    }
    else {
      local_c8 = *(float *)(lVar1 + 0x210);
      fStack_c4 = *(float *)(lVar1 + 0x214);
      fStack_c0 = *(float *)(lVar1 + 0x218);
      fStack_bc = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_c4);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_c8);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_c0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_bc);
      iVar4 = movmskps((int)pvVar5,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_c8;
        *(float *)(lVar1 + 0x254) = fStack_c4;
        *(float *)(lVar1 + 600) = fStack_c0;
        *(float *)(lVar1 + 0x25c) = fStack_bc;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_c8,local_b8);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_f0 = *(undefined4 *)(lVar1 + 0x268);
    }
    local_f8 = CONCAT44(uVar9,uVar8);
    local_d8 = local_f8;
    local_d0 = local_f0;
    uVar7 = FUN_14247f500();
    FUN_14247ea90(uVar7);
    lVar1 = *param_1;
    uVar7 = FRotator::Quaternion(&local_d8,&local_f8);
    cVar3 = (**(code **)(lVar1 + 0x488))(param_1,&local_e8,uVar7,1,local_a8,0);
    if ((cVar3 != '\0') && ((char)param_1[0x38] != '\0')) {
      FUN_140a97480(param_1,0);
    }
  }
  return;
}



// FUNCTION 140a98e60 FUN_140a98e60 body=934 status=ok
// SIG undefined FUN_140a98e60(void)

void FUN_140a98e60(longlong *param_1,undefined4 param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  FUN_142d4d260();
  if (param_1[0x6f] != 0) {
    plVar6 = (longlong *)FUN_140a8ceb0(param_1);
    if ((plVar6 == (longlong *)0x0) ||
       ((cVar3 = (**(code **)(*plVar6 + 4000))(plVar6), cVar3 == '\0' &&
        (cVar3 = FUN_140ce9480(plVar6), cVar3 == '\0')))) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    FUN_142397540(param_1[0x6f],uVar9,1);
  }
  plVar6 = (longlong *)param_1[0x2f];
  if (plVar6 == (longlong *)0x0) {
LAB_140a98f22:
    bVar12 = false;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((!bVar12) || (lVar7 = (**(code **)(*plVar6 + 0xfa8))(plVar6), lVar7 == 0))
    goto LAB_140a98f22;
    bVar12 = 0 < *(int *)(lVar7 + 0x48);
  }
  if (param_1[0x71] != 0) {
    FUN_142397540(param_1[0x71],bVar12,1);
  }
  if (param_1[0x72] != 0) {
    FUN_142397540(param_1[0x72],bVar12,1);
  }
  if (param_1[0x73] != 0) {
    FUN_142397540(param_1[0x73],bVar12,1);
  }
  FUN_140a99210(param_1,param_2);
  if ((char)param_1[0xa8] == '\0') goto LAB_140a99054;
  local_68 = (undefined1)param_1[0xa3];
  local_58 = param_1[0xa5];
  plVar6 = (longlong *)param_1[0x2f];
  local_67 = *(undefined1 *)((longlong)param_1 + 0x519);
  local_66 = *(undefined1 *)((longlong)param_1 + 0x51a);
  local_64 = *(undefined4 *)((longlong)param_1 + 0x51c);
  local_60 = (undefined4)param_1[0xa4];
  local_5c = *(undefined1 *)((longlong)param_1 + 0x524);
  local_50 = (undefined4)param_1[0xa6];
  local_4c = *(undefined8 *)((longlong)param_1 + 0x534);
  local_44 = *(undefined4 *)((longlong)param_1 + 0x53c);
  if (plVar6 == (longlong *)0x0) {
LAB_140a99037:
    FUN_1414725b0(param_1,&local_68);
  }
  else {
    if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar3 = (**(code **)(*plVar6 + 0x768))(), cVar3 == '\0')) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_140a99037;
    (**(code **)(*param_1 + 0x418))(param_1,&local_68);
  }
  if ((char)param_1[0xa8] != '\0') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
LAB_140a99054:
  if ((param_1[0x24] != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) {
    lVar7 = param_1[0x24];
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    fVar1 = *(float *)(lVar7 + 0x790);
    if ((param_1[0x6e] != 0) &&
       (bVar4 = *(byte *)((longlong)param_1 + 0x3aa), bVar4 != *(byte *)((longlong)param_1 + 0x3a9))
       ) {
      do {
        fVar15 = fVar1 - *(float *)((longlong)param_1 + ((ulonglong)bVar4 + 0x3b) * 0x10 + 0xc);
        if (fVar15 < *(float *)(param_1[0x6e] + 0x68c) ||
            fVar15 == *(float *)(param_1[0x6e] + 0x68c)) break;
        param_1[((ulonglong)bVar4 + 0x3b) * 2] = 0;
        (param_1 + ((ulonglong)bVar4 + 0x3b) * 2)[1] = 0;
        bVar4 = *(char *)((longlong)param_1 + 0x3aa) + 1U & 0xf;
        *(byte *)((longlong)param_1 + 0x3aa) = bVar4;
      } while (bVar4 != *(byte *)((longlong)param_1 + 0x3a9));
    }
    if (param_1[0x6e] == 0) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = *(float *)(param_1[0x6e] + 0x794);
    }
    plVar6 = (longlong *)param_1[0xa1];
    plVar11 = plVar6 + (longlong)(int)param_1[0xa2] * 2;
    for (; plVar6 != plVar11; plVar6 = plVar6 + 2) {
      iVar10 = (int)plVar6[1] + -1;
      if (-1 < iVar10) {
        lVar7 = (longlong)iVar10 * 8;
        lVar13 = (longlong)(int)plVar6[1] << 3;
        lVar14 = lVar7;
        do {
          lVar2 = *plVar6;
          if (fVar15 + *(float *)(lVar7 + lVar2) < fVar1) {
            iVar8 = (int)plVar6[1];
            iVar5 = (iVar8 - iVar10) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar2 + lVar14),(void *)(lVar13 + lVar2),(longlong)iVar5 << 3);
              iVar8 = (int)plVar6[1];
            }
            *(int *)(plVar6 + 1) = iVar8 + -1;
          }
          lVar13 = lVar13 + -8;
          lVar14 = lVar14 + -8;
          lVar7 = lVar7 + -8;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
    }
  }
  return;
}



// FUNCTION 140a99210 FUN_140a99210 body=3897 status=ok
// SIG undefined FUN_140a99210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a99210(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [12];
  undefined8 uVar19;
  float *pfVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
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
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  int local_res18;
  ulonglong uVar44;
  uint in_stack_fffffffffffffd60;
  undefined8 local_298;
  float local_290;
  float local_288;
  float fStack_284;
  float local_280;
  longlong local_278;
  float local_270;
  float local_268;
  float local_260;
  float local_25c;
  undefined4 local_258;
  int local_250;
  int local_24c;
  longlong local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  float local_210;
  longlong *local_208;
  longlong *local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  float local_1c8;
  longlong local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [8];
  float local_180;
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 local_e8 [176];
  
  if (param_1[0x6e] == 0) {
    return;
  }
  lVar15 = FUN_140a8ceb0();
  if (lVar15 == 0) {
    return;
  }
  lVar15 = FUN_140a8ceb0(param_1);
  lVar15 = *(longlong *)(lVar15 + 0x488);
  if (lVar15 == 0) {
    return;
  }
  local_248 = lVar15;
  plVar16 = (longlong *)FUN_140a8ceb0(param_1);
  cVar9 = (**(code **)(*plVar16 + 0x768))(plVar16);
  iVar11 = FUN_14233f450(param_1);
  lVar4 = param_1[0x6e];
  iVar12 = FUN_14233f450(param_1);
  lVar25 = 0x4c8;
  if (iVar12 == 3) {
    lVar25 = 0x4b8;
  }
  plVar16 = (longlong *)(lVar25 + (longlong)param_1);
  iVar12 = (int)plVar16[1] + -1;
  local_1d8 = plVar16;
  if (-1 < iVar12) {
    lVar26 = (longlong)iVar12 * 0x48;
    lVar25 = lVar26;
    do {
      plVar23 = (longlong *)(*plVar16 + lVar25);
      fVar27 = *(float *)(plVar23 + 8);
      *(float *)(plVar23 + 8) = fVar27 - param_2;
      if (iVar11 == 3) {
        if ((0.0 < fVar27 - param_2) && (*plVar23 != 0)) {
          iVar14 = *(int *)(*plVar23 + 0xc);
          if (iVar14 < (int)DAT_1469e91c4) {
            uVar22 = iVar14 >> 0x1f & 0xffff;
            uVar13 = iVar14 + uVar22;
            lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar13 >> 0x10) * 8) +
                     (longlong)(int)((uVar13 & 0xffff) - uVar22) * 0x18;
          }
          else {
            lVar15 = 0;
          }
          if (((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) &&
             ((plVar23[3] == 0 || ((*(uint *)(plVar23[3] + 0x840) >> 3 & 1) == 0)))) {
            (**(code **)(*param_1 + 0x260))(param_1);
            lVar15 = *(longlong *)(*plVar23 + 0x168);
            if (lVar15 == 0) {
              local_270 = DAT_1468b5d98;
              pfVar20 = (float *)&local_278;
              local_278 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            }
            else {
              pfVar20 = &local_288;
              local_288 = *(float *)(lVar15 + 0x220);
              local_280 = *(float *)(lVar15 + 0x228);
              fStack_284 = *(float *)(lVar15 + 0x224);
            }
LAB_140a99560:
            fVar27 = pfVar20[2];
            plVar23[4] = *(longlong *)pfVar20;
            *(float *)(plVar23 + 5) = fVar27;
            goto LAB_140a9956f;
          }
        }
        iVar14 = (int)plVar16[1];
        iVar24 = (iVar14 - iVar12) + -1;
        if (0 < iVar24) {
          iVar24 = 1;
        }
        if (iVar24 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar16 + lVar26),
                     (void *)(*plVar16 + (longlong)(iVar14 - iVar24) * 0x48),(longlong)iVar24 * 0x48
                    );
          iVar14 = (int)plVar16[1];
        }
        *(int *)(plVar16 + 1) = iVar14 + -1;
        TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(plVar16);
      }
      else {
        lVar15 = *plVar23;
        if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0x94) & 0x18) == 0x10)) {
          iVar14 = *(int *)(lVar15 + 0xc);
          if (iVar14 < (int)DAT_1469e91c4) {
            uVar22 = iVar14 >> 0x1f & 0xffff;
            uVar13 = iVar14 + uVar22;
            lVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar13 >> 0x10) * 8) +
                     (longlong)(int)((uVar13 & 0xffff) - uVar22) * 0x18;
          }
          else {
            lVar17 = 0;
          }
          if ((*(uint *)(lVar17 + 8) >> 0x1d & 1) == 0) {
            lVar15 = *(longlong *)(lVar15 + 0x168);
            if (lVar15 == 0) {
              local_290 = DAT_1468b5d98;
              pfVar20 = (float *)&local_298;
              local_298 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            }
            else {
              pfVar20 = &local_260;
              local_260 = *(float *)(lVar15 + 0x220);
              local_258 = *(undefined4 *)(lVar15 + 0x228);
              local_25c = *(float *)(lVar15 + 0x224);
            }
            goto LAB_140a99560;
          }
        }
LAB_140a9956f:
        if (cVar9 != '\0') {
          FUN_140a9bd60(param_1,plVar23);
          *(float *)((longlong)plVar23 + 0xc) = param_2 + *(float *)((longlong)plVar23 + 0xc);
          in_stack_fffffffffffffd60 = *(uint *)(lVar4 + 0x680);
          fVar27 = (float)UKismetMathLibrary::Ease();
          *(longlong *)((longlong)plVar23 + 0x2c) = plVar23[4];
          *(int *)((longlong)plVar23 + 0x34) = (int)plVar23[5];
          *(float *)((longlong)plVar23 + 0x34) =
               (*(float *)(plVar23 + 5) - *(float *)(plVar23 + 2)) * fVar27 +
               *(float *)(plVar23 + 2);
        }
      }
      lVar26 = lVar26 + -0x48;
      lVar25 = lVar25 + -0x48;
      iVar12 = iVar12 + -1;
      lVar15 = local_248;
    } while (-1 < iVar12);
  }
  lVar25 = param_1[0x2f];
  if (lVar25 != 0) {
    lVar26 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x90) < *(int *)(lVar26 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x88) + (longlong)*(int *)(lVar26 + 0x90) * 8
         ) != lVar26 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140a9967c;
  }
  lVar25 = 0;
LAB_140a9967c:
  if ((*(longlong *)(lVar25 + 0x520) != 0) && (cVar9 != '\0')) {
    lVar25 = FUN_140a8ceb0(param_1);
    local_158 = ZEXT816(0);
    lVar25 = *(longlong *)(lVar25 + 0x528);
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = uRam000000014686700c;
    local_148._4_4_ = uRam0000000146867004 & uRam0000000146867014;
    local_148._0_4_ = _DAT_146867000 & _DAT_146867010;
    local_148._8_4_ = uRam0000000146867008 & uRam0000000146867018;
    local_148._12_4_ = uRam000000014686700c & uRam000000014686701c;
    if (lVar25 != 0) {
      pauVar18 = (undefined1 (*) [12])FUN_1426e1ca0(0,local_178);
      uVar19 = FUN_1426e1d20(lVar25,local_188);
      FRotator::Quaternion(uVar19,local_228);
      local_168 = local_228._0_4_;
      uStack_164 = local_228._4_4_;
      uStack_160 = fStack_220;
      local_158._12_4_ = 0;
      local_158._0_12_ = *pauVar18;
      local_148._4_4_ = DAT_1464aa788._4_4_;
      local_148._0_4_ = (float)DAT_1464aa788;
      local_148._8_4_ = DAT_1464aa790;
      local_148._12_4_ = 0;
      uStack_15c = (uint)fStack_21c;
    }
    lVar15 = *(longlong *)(lVar15 + 0x168);
    if (lVar15 == 0) {
      local_270 = DAT_1468b5d98;
      pfVar20 = (float *)&local_278;
      local_278 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      pfVar20 = &local_288;
      local_288 = *(float *)(lVar15 + 0x220);
      local_280 = *(float *)(lVar15 + 0x228);
      fStack_284 = *(float *)(lVar15 + 0x224);
    }
    lVar15 = *(longlong *)pfVar20;
    local_270 = pfVar20[2];
    local_228._4_4_ = uStack_164;
    local_228._0_4_ = local_168;
    fStack_220 = (float)uStack_160;
    fStack_21c = (float)uStack_15c;
    FQuat::Rotator(local_228,&local_218);
    FRotator::Quaternion(&local_218,&local_138);
    fVar29 = local_270;
    fVar8 = DAT_1464aa790;
    fVar7 = DAT_1464aa788._4_4_;
    fVar6 = (float)DAT_1464aa788;
    fVar30 = (float)lVar15;
    fVar31 = (float)((ulonglong)lVar15 >> 0x20);
    fVar42 = 0.0;
    fStack_220 = local_270;
    local_228 = (undefined1  [8])lVar15;
    fStack_21c = 0.0;
    local_278 = lVar15;
    FUN_140a881a0(&local_118,&local_168,lVar4 + 0x418,1);
    cVar9 = FUN_140a972b0(param_1);
    fVar27 = *(float *)(lVar4 + 0x43c);
    local_238 = fVar27 * *(float *)(lVar4 + 0x438);
    fVar28 = fVar27 * *(float *)(lVar4 + 0x434);
    fVar27 = fVar27 * *(float *)(lVar4 + 0x430);
    local_1e8 = FRuntimeFloatCurve::GetRichCurve(lVar4 + 0x508);
    local_1f0 = FRuntimeFloatCurve::GetRichCurve(lVar4 + 0x580);
    local_1e0 = FRuntimeFloatCurve::GetRichCurve(lVar4 + 0x600);
    uVar19 = FUN_140a8ceb0(param_1);
    FUN_142dcfa90(uVar19,&local_24c,&local_250);
    fVar1 = *(float *)(lVar4 + 0x4f8);
    fVar2 = *(float *)(lVar4 + 0x4fc);
    local_230 = (float)local_250 * 0.5;
    fVar43 = (fVar2 + fVar1) * 0.5;
    local_234 = (float)local_24c * 0.5;
    if (param_1[0x6e] != 0) {
      local_208 = plVar16;
      local_200 = param_1;
      FUN_140a7df40(&local_208,param_1 + 0x9b,*(undefined8 *)(param_1[0x6e] + 0x418));
      FUN_140a7df40(&local_208,param_1 + 0x9d,*(undefined8 *)(param_1[0x6e] + 0x420));
      FUN_140a7df40(&local_208,param_1 + 0x9f,*(undefined8 *)(param_1[0x6e] + 0x428));
    }
    local_res18 = 0;
    if (0 < (int)plVar16[1]) {
      lVar15 = 0;
      local_248 = 0;
      do {
        lVar25 = local_248;
        if (cVar9 != '\0') {
          bVar3 = *(byte *)(*plVar16 + 0x45 + local_248);
          if ((bVar3 & 8) == 0) {
LAB_140a999f9:
            if ((bVar3 & 4) != 0) {
              if ((lVar15 < 0) || ((int)param_1[0x9e] <= local_res18)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                lVar26 = param_1[0x9d];
                goto LAB_140a99a42;
              }
            }
            if ((lVar15 < 0) || ((int)param_1[0x9c] <= local_res18)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_140a9a098;
            lVar26 = param_1[0x9b];
          }
          else {
            if ((lVar15 < 0) || ((int)param_1[0xa0] <= local_res18)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_140a999f9;
            lVar26 = param_1[0x9f];
          }
LAB_140a99a42:
          plVar23 = *(longlong **)(lVar26 + lVar15 * 8);
          if (plVar23 != (longlong *)0x0) {
            FUN_142397540(plVar23,0,1);
            fVar32 = local_138 * _DAT_146867330;
            fVar33 = fStack_134 * fRam0000000146867334;
            fVar34 = fStack_130 * fRam0000000146867338;
            fVar35 = fStack_12c * fRam000000014686733c;
            uVar19 = *(undefined8 *)(*plVar16 + 0x2c + lVar25);
            local_268 = *(float *)(*plVar16 + 0x34 + lVar25);
            fVar36 = (float)((uint)((float)uVar19 - fVar30) & _DAT_146867010);
            fVar39 = (float)((uint)((float)((ulonglong)uVar19 >> 0x20) - fVar31) &
                            uRam0000000146867014);
            fVar40 = (float)((uint)(local_268 - fVar29) & uRam0000000146867018);
            fVar41 = (float)((uint)(0.0 - fVar42) & uRam000000014686701c);
            fVar29 = fVar40 * fVar33 - fVar39 * fVar34;
            fVar30 = fVar36 * fVar34 - fVar40 * fVar32;
            fVar31 = fVar39 * fVar32 - fVar36 * fVar33;
            fVar42 = fVar41 * fVar35 - fVar41 * fVar35;
            fVar29 = fVar29 + fVar29;
            fVar30 = fVar30 + fVar30;
            fVar31 = fVar31 + fVar31;
            auVar37._0_4_ = fVar36 + fVar29 * fVar35;
            auVar37._4_4_ = fVar39 + fVar30 * fVar35;
            auVar37._8_4_ = fVar40 + fVar31 * fVar35;
            auVar37._12_4_ = fVar41 + (fVar42 + fVar42) * fVar35;
            auVar38._4_4_ = fVar7;
            auVar38._0_4_ = fVar6;
            auVar38._8_4_ = fVar8;
            auVar38._12_4_ = 0;
            auVar38 = rcpps(auVar37,auVar38);
            fVar42 = auVar38._0_4_;
            fVar35 = auVar38._4_4_;
            fVar36 = auVar38._8_4_;
            fVar42 = (fVar42 + fVar42) - fVar6 * fVar42 * fVar42;
            fVar35 = (fVar35 + fVar35) - fVar7 * fVar35 * fVar35;
            fVar36 = (fVar36 + fVar36) - fVar8 * fVar36 * fVar36;
            fVar42 = (fVar42 + fVar42) - fVar6 * fVar42 * fVar42;
            fVar35 = (fVar35 + fVar35) - fVar7 * fVar35 * fVar35;
            fVar36 = (fVar36 + fVar36) - fVar8 * fVar36 * fVar36;
            fVar42 = (float)((uint)fVar42 ^
                            -(uint)((float)((uint)fVar6 & _DAT_146867090) <= _DAT_146867320) &
                            (uint)fVar42) * ((fVar31 * fVar33 - fVar30 * fVar34) + auVar37._0_4_);
            fVar31 = (float)((uint)fVar35 ^
                            -(uint)((float)((uint)fVar7 & uRam0000000146867094) <=
                                   fRam0000000146867324) & (uint)fVar35) *
                     ((fVar29 * fVar34 - fVar31 * fVar32) + auVar37._4_4_);
            local_290 = (float)((uint)fVar36 ^
                               -(uint)((float)((uint)fVar8 & uRam0000000146867098) <=
                                      fRam0000000146867328) & (uint)fVar36) *
                        ((fVar30 * fVar32 - fVar29 * fVar33) + auVar37._8_4_);
            fVar29 = fVar31 * fVar31 + fVar42 * fVar42 + local_290 * local_290;
            if (fVar29 == 1.0) {
              local_298 = CONCAT44(fVar31,fVar42);
            }
            else if (1e-08 <= fVar29) {
              auVar38 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
              fVar30 = auVar38._0_4_;
              fVar30 = fVar30 + fVar30 * (0.5 - fVar29 * 0.5 * fVar30 * fVar30);
              fVar30 = fVar30 + fVar30 * (0.5 - fVar29 * 0.5 * fVar30 * fVar30);
              local_290 = fVar30 * local_290;
              local_298 = CONCAT44(fVar30 * fVar31,fVar30 * fVar42);
            }
            else {
              local_290 = DAT_1468b5d98;
              local_298 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            }
            local_1c8 = local_268;
            FVector::Rotation(&local_298,&local_260);
            fVar29 = local_260;
            fVar31 = (float)FRichCurve::Eval(local_1f0,local_260,local_260);
            fVar30 = local_25c;
            fVar42 = (float)FRichCurve::Eval(local_1e8,local_25c,local_25c);
            if (ABS(fVar29) <= *(float *)(lVar4 + 0x5f8)) {
              fVar29 = ABS(fVar29) / *(float *)(lVar4 + 0x5f8);
              if (0.0 <= fVar29) {
                if (1.0 <= fVar29) {
                  fVar29 = 1.0;
                }
              }
              else {
                fVar29 = 0.0;
              }
              fVar30 = (fVar30 - fVar42) * fVar29 + fVar42;
            }
            lVar26 = *plVar16;
            local_280 = local_238;
            local_288 = fVar27;
            fStack_284 = fVar28;
            local_260 = fVar31;
            local_25c = fVar30;
            if (*(char *)(lVar26 + 0x44 + lVar25) != '\0') {
              fVar29 = *(float *)(lVar26 + 0x38 + lVar25) - *(float *)(lVar26 + 0x40 + lVar25);
              if (fVar29 <= 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FRichCurve::Eval(local_1e0,fVar29,0);
              local_288 = local_288 + fVar29;
            }
            pfVar20 = (float *)FRotator::Quaternion(&local_260,local_e8);
            fVar35 = fStack_10c;
            fVar34 = fStack_110;
            fVar33 = fStack_114;
            fVar32 = local_118;
            fVar29 = *pfVar20;
            fVar30 = pfVar20[1];
            fVar31 = pfVar20[2];
            fVar42 = pfVar20[3];
            local_128 = fStack_110 * fVar30 * _DAT_146867020 +
                        fStack_10c * fVar29 + local_118 * fVar42 * _DAT_146867040 +
                        fStack_114 * fVar31 * _DAT_146867030;
            fStack_124 = fStack_110 * fVar29 * fRam0000000146867024 +
                         fStack_10c * fVar30 + local_118 * fVar31 * fRam0000000146867044 +
                         fStack_114 * fVar42 * fRam0000000146867034;
            fStack_120 = fStack_110 * fVar42 * fRam0000000146867028 +
                         fStack_10c * fVar31 + local_118 * fVar30 * fRam0000000146867048 +
                         fStack_114 * fVar29 * fRam0000000146867038;
            fStack_11c = fStack_110 * fVar31 * fRam000000014686702c +
                         fStack_10c * fVar42 + local_118 * fVar29 * fRam000000014686704c +
                         fStack_114 * fVar30 * fRam000000014686703c;
            FQuat::Rotator(&local_128,&local_278);
            fVar42 = local_f8 * (float)local_298;
            fVar36 = fStack_f4 * local_298._4_4_;
            fVar39 = fStack_f0 * local_290;
            fVar29 = fVar39 * fVar33 - fVar36 * fVar34;
            fVar30 = fVar42 * fVar34 - fVar39 * fVar32;
            fVar31 = fVar36 * fVar32 - fVar42 * fVar33;
            fVar29 = fVar29 + fVar29;
            fVar30 = fVar30 + fVar30;
            fVar31 = fVar31 + fVar31;
            fVar42 = local_108 + (fVar31 * fVar33 - fVar30 * fVar34) + fVar42 + fVar29 * fVar35;
            fVar34 = fStack_104 + (fVar29 * fVar34 - fVar31 * fVar32) + fVar36 + fVar30 * fVar35;
            fVar29 = fStack_100 + (fVar30 * fVar32 - fVar29 * fVar33) + fVar39 + fVar31 * fVar35;
            pfVar20 = (float *)FRotator::RotateVector(&local_278,&local_208,&local_288);
            local_1a0 = fVar29 + pfVar20[2];
            local_1b8 = local_278;
            local_1b0 = local_270;
            local_1a8 = CONCAT44(fVar34 + pfVar20[1],fVar42 + *pfVar20);
            in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffff00;
            uVar44 = 0;
            local_180 = local_1a0;
            FUN_1423982b0(plVar23,&local_1a8,&local_1b8,0,0,in_stack_fffffffffffffd60);
            local_190 = *(undefined4 *)(lVar4 + 0x43c);
            local_198 = CONCAT44(local_190,local_190);
            local_170 = local_190;
            (**(code **)(*plVar23 + 0x3f8))(plVar23,&local_198);
            lVar26 = *plVar16;
            uVar21 = FRuntimeFloatCurve::GetRichCurve(lVar4 + 0x450);
            fVar30 = (float)FRichCurve::Eval(uVar21,*(undefined4 *)(lVar26 + 0x3c + lVar25),
                                             0x3f800000);
            fVar31 = fVar30 * *(float *)(lVar4 + 0x448);
            fVar29 = *(float *)(*plVar16 + 0x40 + lVar25);
            if (fVar31 <= fVar29) {
              fVar31 = 1.0;
            }
            else {
              fVar31 = fVar29 / fVar31;
            }
            fVar29 = fVar29 / (fVar30 * *(float *)(lVar4 + 0x444));
            if (0.0 <= fVar29) {
              if (1.0 <= fVar29) {
                fVar29 = 1.0;
              }
            }
            else {
              fVar29 = 0.0;
            }
            local_210 = local_268;
            local_218 = uVar19;
            uVar19 = FUN_140a8ceb0(param_1);
            cVar10 = USceneComponent::K2_AttachTo
                               (uVar19,&local_218,&local_240,1,uVar44 & 0xffffffffffffff00);
            fVar30 = 1.0;
            if (cVar10 != '\0') {
              local_240 = local_240 - local_234;
              local_23c = local_23c - local_230;
              fVar42 = SQRT((local_240 / (float)local_24c) * (local_240 / (float)local_24c) +
                            (local_23c / (float)local_250) * (local_23c / (float)local_250));
              fVar30 = 1.0;
              if (fVar42 < fVar43) {
                fVar30 = (fVar43 - fVar42) / (fVar43 - (fVar1 - fVar2) * 0.5);
                if (1.0 <= fVar30) {
                  fVar30 = 1.0;
                }
                fVar30 = 1.0 - fVar30;
              }
            }
            iVar11 = (**(code **)(*plVar23 + 0x6c8))(plVar23);
            iVar12 = 0;
            if (0 < iVar11) {
              do {
                lVar25 = (**(code **)(*plVar23 + 0x560))(plVar23,iVar12);
                if (lVar25 != 0) {
                  lVar26 = FUN_1429ba110();
                  if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x90) < *(int *)(lVar26 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar26 + 0x90) * 8) != lVar26 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (bVar5) {
                    FUN_1425a2750(lVar25,*(undefined8 *)(lVar4 + 0x4e8),fVar31);
                    FUN_1425a2750(lVar25,*(undefined8 *)(lVar4 + 0x4f0),1.0 - fVar29);
                    FUN_1425a2750(lVar25,*(undefined8 *)(lVar4 + 0x500),fVar30);
                  }
                }
                iVar12 = iVar12 + 1;
                plVar16 = local_1d8;
              } while (iVar12 < iVar11);
            }
            fVar30 = (float)local_228._0_4_;
            fVar31 = (float)local_228._4_4_;
            fVar29 = fStack_220;
            fVar42 = fStack_21c;
          }
        }
LAB_140a9a098:
        local_res18 = local_res18 + 1;
        local_248 = local_248 + 0x48;
        lVar15 = lVar15 + 1;
      } while (local_res18 < (int)plVar16[1]);
    }
  }
  return;
}



// FUNCTION 140a9a150 FUN_140a9a150 body=747 status=ok
// SIG undefined FUN_140a9a150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a9a150(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  float local_78;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined4 local_68;
  
  if (((*(longlong *)(param_1 + 0x370) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (iVar6 = FUN_14233f450(), iVar6 == 3)) {
    lVar2 = *(longlong *)(param_1 + 0x370);
    fVar14 = *(float *)(lVar2 + 0x444);
    uVar7 = FRuntimeFloatCurve::GetRichCurve(lVar2 + 0x450);
    fVar13 = (float)FRichCurve::Eval(uVar7,param_3);
    iVar6 = *(int *)(param_1 + 0x4c0);
    iVar11 = 0;
    iVar12 = *(int *)(lVar2 + 0x4c8);
    if (0 < iVar6) {
      plVar8 = *(longlong **)(param_1 + 0x4b8);
      do {
        if ((longlong *)*plVar8 == param_2) {
          if ((-1 < iVar11) && (iVar11 < iVar6)) goto LAB_140a9a25c;
          break;
        }
        iVar11 = iVar11 + 1;
        plVar8 = plVar8 + 9;
      } while (iVar11 < iVar6);
    }
    iVar11 = *(int *)(param_1 + 0x4c0);
    *(int *)(param_1 + 0x4c0) = iVar11 + 1;
    if (*(int *)(param_1 + 0x4c4) < iVar11 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x4b8),iVar11);
    }
    FUN_140a7aea0(*(longlong *)(param_1 + 0x4b8) + (longlong)iVar11 * 0x48,param_2);
LAB_140a9a25c:
    plVar8 = (longlong *)(param_1 + 0x4b8);
    lVar9 = (longlong)iVar11;
    fVar13 = fVar13 * fVar14;
    lVar3 = *plVar8;
    *(float *)(lVar3 + 0x40 + lVar9 * 0x48) = fVar13;
    *(float *)(lVar3 + 0x38 + lVar9 * 0x48) = fVar13;
    *(undefined4 *)(lVar3 + 0x3c + lVar9 * 0x48) = param_3;
    lVar3 = lVar3 + lVar9 * 0x48;
    *(undefined1 *)(lVar3 + 0x44) = 0;
    *(undefined1 *)(lVar3 + 0x45) = param_4;
    *(char *)(param_1 + 0x4b4) = *(char *)(param_1 + 0x4b4) + '\x01';
    *(undefined1 *)(lVar3 + 0x46) = *(undefined1 *)(param_1 + 0x4b4);
    if (*(longlong *)(param_1 + 0x370) != 0) {
      FUN_140a9bd60(param_1,lVar3);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x370) + 0x684);
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar3 + 0x34);
      *(undefined4 *)(lVar3 + 0xc) = uVar1;
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x488);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = plVar4[0x2d];
      if (lVar9 == 0) {
        local_70 = _DAT_1468b5d90;
        local_68 = DAT_1468b5d98;
      }
      else {
        local_70 = *(undefined8 *)(lVar9 + 0x220);
        local_68 = *(undefined4 *)(lVar9 + 0x228);
      }
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      fVar13 = (float)local_70;
      uVar5 = (ulonglong)local_70 >> 0x20;
      (**(code **)(*plVar4 + 0x578))(plVar4,&local_78,local_res8);
      (**(code **)(*param_2 + 0x578))(param_2,local_res8,local_74);
      fVar13 = fVar13 - (float)uVar7;
      fVar14 = (float)uVar5 - (float)((ulonglong)uVar7 >> 0x20);
      fVar14 = SQRT(fVar14 * fVar14 + fVar13 * fVar13) - (local_res8[0] + local_78);
      if (fVar14 < *(float *)(lVar2 + 0x5fc) || fVar14 == *(float *)(lVar2 + 0x5fc)) {
        *(undefined1 *)(lVar3 + 0x44) = 1;
      }
    }
    iVar6 = *(int *)(param_1 + 0x4c0);
    if (iVar12 < iVar6) {
      fVar14 = 3.4028235e+38;
      iVar11 = 0;
      iVar12 = -1;
      if (0 < iVar6) {
        pfVar10 = (float *)(*plVar8 + 0x40);
        do {
          fVar13 = *pfVar10;
          if ((0.0 < fVar13) && (fVar13 < fVar14)) {
            fVar14 = fVar13;
            iVar12 = iVar11;
          }
          iVar11 = iVar11 + 1;
          pfVar10 = pfVar10 + 0x12;
        } while (iVar11 < iVar6);
      }
      *(undefined4 *)(*plVar8 + 0x40 + (longlong)iVar12 * 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 140a9a440 FUN_140a9a440 body=55 status=ok
// SIG undefined FUN_140a9a440(void)

void FUN_140a9a440(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142340f30();
  if (iVar1 == 3) {
    FUN_140a9a5c0(param_1,param_2,1);
  }
  return;
}



// FUNCTION 140a9a480 FUN_140a9a480 body=239 status=ok
// SIG undefined FUN_140a9a480(void)

void FUN_140a9a480(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  *(undefined1 *)(param_1 + 0x9b1) = 1;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x9b4) = 0;
  cVar1 = FUN_142d5a800(param_1 + 0x3d0);
  if ((cVar1 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x118) + 0x80) & 1) == 0)) {
    local_18 = 0;
    local_30 = *(undefined4 *)(param_1 + 0x788);
    local_20 = 0;
    local_38 = *(undefined8 *)(param_1 + 0x780);
    local_2c = *(undefined8 *)(param_1 + 0x76c);
    uVar2 = *(uint *)(param_1 + 0x78c) >> 8;
    local_24 = *(undefined4 *)(param_1 + 0x774);
    local_14 = 0;
    if (*(uint *)(param_1 + 0x78c) >> 8 != 0) {
      do {
        if ((uVar2 & 1) != 0) {
          local_10 = iVar3;
          FUN_140a9a5c0(param_1,&local_38,1,0);
        }
        iVar3 = iVar3 + 1;
        bVar4 = 1 < uVar2;
        uVar2 = uVar2 >> 1;
      } while (bVar4);
    }
  }
  return;
}



// FUNCTION 140a9a570 FUN_140a9a570 body=68 status=ok
// SIG undefined FUN_140a9a570(void)

void FUN_140a9a570(longlong param_1)

{
  char cVar1;
  undefined1 local_res8 [32];
  
  if (*(char *)(param_1 + 0x974) != '\0') {
    cVar1 = FUN_142d5a800(param_1 + 0x3d0);
    if (cVar1 == '\0') {
      local_res8[0] = *(undefined1 *)(param_1 + 0x974);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x938,local_res8);
    }
  }
  return;
}



// FUNCTION 140a9a5c0 FUN_140a9a5c0 body=1738 status=ok
// SIG undefined FUN_140a9a5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a9a5c0(longlong *param_1,undefined8 *param_2,char param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_4c8 [32];
  ulonglong local_4a8;
  undefined4 *local_4a0;
  undefined8 local_498;
  undefined8 local_488;
  longlong local_480;
  longlong local_478;
  undefined4 local_470;
  undefined2 local_46c;
  undefined1 local_46a;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 *local_448;
  undefined1 *puStack_440;
  undefined8 local_438;
  longlong local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3f0;
  undefined1 local_3ef;
  undefined1 local_3ee;
  undefined1 local_3ed;
  undefined1 local_3ec;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc;
  float local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  longlong local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined1 local_380 [8];
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4;
  undefined8 local_2d0;
  float local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_258 [520];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  iVar4 = *(int *)(param_2 + 5);
  if ((iVar4 < 0) || ((int)param_1[0x133] <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar2) &&
      (plVar7 = (longlong *)((longlong)iVar4 * 0x60 + param_1[0x132]),
      (*(byte *)(plVar7 + 1) & 0x10) == 0)) && (*plVar7 != 0)) {
    cVar3 = FUN_142d5a800(param_1 + 0x7a);
    lVar5 = *plVar7;
    if (((*(char *)(lVar5 + 0x39) == '\0') || (param_4 != '\0')) ||
       (*(char *)((longlong)param_1 + 0x9b1) != '\0')) {
      if ((param_3 == '\0') && (iVar4 = FUN_142340f30(param_1), iVar4 == 1 || iVar4 == 2)) {
        if ((*(byte *)(param_1[0x23] + 0x90) & 0x20) == 0) {
          FUN_1414132f0(param_1,param_2);
        }
        else {
          *(uint *)((longlong)param_1 + 0x78c) =
               *(uint *)((longlong)param_1 + 0x78c) |
               1 << ((char)*(undefined4 *)(param_2 + 5) + 8U & 0x1f);
        }
      }
      if (cVar3 == '\0') {
        *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) | 0x10;
        uVar8 = 0;
        local_438 = 0;
        local_3e8 = 0;
        local_3d0 = 0;
        *(uint *)(param_1 + 0x137) =
             *(uint *)(param_1 + 0x137) | 1 << (*(byte *)(*plVar7 + 0x40) & 0x1f);
        local_3b0 = (undefined4)param_1[0x130];
        if ((*(uint *)(plVar7 + 1) & 8) == 0) {
          local_488 = 0;
          local_4a8 = uVar8;
        }
        else {
          local_4a8 = plVar7[6];
        }
        if ((*(uint *)(plVar7 + 1) & 1) == 0) {
          local_488 = 0;
        }
        else {
          uVar8 = plVar7[2];
        }
        FUN_140a8b6b0(*plVar7,param_1[0x23],&local_438,uVar8);
        if ((*(byte *)(plVar7 + 1) & 4) == 0) {
          uVar10 = (undefined4)local_430;
          uVar11 = (undefined4)((ulonglong)local_430 >> 0x20);
        }
        else {
          local_430 = plVar7[3];
          uVar10 = (undefined4)local_430;
          uVar11 = (undefined4)((ulonglong)local_430 >> 0x20);
          local_428 = (undefined4)plVar7[4];
        }
        local_378 = local_438;
        local_3b8 = local_3b8 * *(float *)(plVar7 + 7) * *(float *)((longlong)param_1 + 0x97c);
        local_360 = local_418;
        local_358 = local_410;
        local_350 = local_408;
        local_348 = local_400;
        local_338 = local_41c;
        local_334 = local_3f0;
        local_330 = local_3f8;
        local_2d0 = local_3e8;
        local_2f8 = local_3e0;
        local_2f0 = local_3d8;
        local_2e0 = local_3c8;
        local_2e8 = local_3d0;
        local_2d8 = local_3ef;
        local_370 = CONCAT44(uVar11,uVar10);
        local_2d7 = local_3ee;
        local_340 = local_424;
        local_2d6 = local_3ed;
        local_328 = _DAT_1468b5b70;
        uStack_320 = uRam00000001468b5b78;
        local_2d5 = local_3ec;
        local_308 = _DAT_1468b5b90;
        uStack_300 = uRam00000001468b5b98;
        local_2d4 = local_3bc;
        local_2c4 = local_3b4;
        local_458 = *(undefined8 *)((longlong)param_2 + 0xc);
        local_2c0 = local_3b0;
        local_450 = *(undefined4 *)((longlong)param_2 + 0x14);
        local_318 = _DAT_1468b5b80;
        uStack_314 = uRam00000001468b5b84;
        uStack_310 = uRam00000001468b5b88;
        uStack_30c = uRam00000001468b5b8c;
        local_368 = local_428;
        local_2c8 = local_3b8;
        FUN_140a80a60(param_1[0x23],&local_378,&local_458,local_3c0);
        FUN_140a88980(param_1,(int)plVar7[10]);
        lVar5 = plVar7[8];
        local_488 = 0;
        if (((lVar5 != 0) && (local_488 = 0, lVar5 != 0)) &&
           (((lVar5 = UObject::FindFunction(param_1,lVar5), plVar9 = param_1, lVar5 != 0 ||
             ((plVar9 = (longlong *)param_1[0x23], plVar9 != (longlong *)0x0 &&
              (lVar5 = UObject::FindFunction(plVar9,plVar7[8]), lVar5 != 0)))) &&
            (*(char *)(lVar5 + 0x8c) == '\x01')))) {
          local_478 = *(longlong *)(lVar5 + 0x38);
          local_470 = 0xffffffff;
          local_46c = 0x101;
          local_46a = 0;
          local_480 = lVar5;
          FUN_140472e10(&local_480);
          if (local_478 != 0) {
            lVar6 = UStructProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(local_478 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_478 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((((bVar2) && (*(longlong *)(local_478 + 0x70) != 0)) &&
                (lVar6 = FUN_141412f90(), *(longlong *)(local_478 + 0x70) == lVar6)) &&
               (plVar9 != (longlong *)0x0)) {
              local_288 = *param_2;
              uStack_280 = param_2[1];
              local_260 = *(undefined4 *)(param_2 + 5);
              local_278 = *(undefined4 *)(param_2 + 2);
              uStack_274 = *(undefined4 *)((longlong)param_2 + 0x14);
              uStack_270 = *(undefined4 *)(param_2 + 3);
              uStack_26c = *(undefined4 *)((longlong)param_2 + 0x1c);
              local_268 = param_2[4];
              (**(code **)(*plVar9 + 0x208))(plVar9,lVar5,&local_288);
            }
          }
        }
        if (*(char *)(*plVar7 + 0x134) == '\0') {
          if (*(longlong *)(*plVar7 + 0x138) != 0) {
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            if (*(longlong *)(DAT_146b33f38 + 0xd8) != 0) {
              local_398 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x100);
              local_390 = param_1[0x23];
              local_448 = &local_398;
              puStack_440 = local_380;
              local_468 = 0;
              local_298 = local_448;
              uStack_290 = puStack_440;
              FUN_1405e1200(local_258,&local_298);
              lVar5 = param_1[0x24];
              local_464 = 0xffffffff;
              local_460 = 0;
              if (lVar5 == 0) {
                lVar5 = FUN_1423407b0(param_1);
              }
              local_4a0 = &local_468;
              local_498 = 0;
              local_4a8 = local_4a8 & 0xffffffff00000000;
              FUN_1405f8040(&local_448,lVar5,*(undefined8 *)(*plVar7 + 0x138),local_258);
              if (local_50 != 0) {
                FMemory::Free();
              }
            }
          }
        }
        else {
          FUN_1405f45e0(param_1[0x23],1);
          iVar4 = FUN_142340f30(param_1);
          if (iVar4 == 3) {
            plVar9 = (longlong *)param_1[0x23];
            local_488 = FUN_140604cc0();
            lVar5 = (**(code **)(*plVar9 + 0x628))(plVar9,local_488);
            if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1b8) != 0)) {
              FUN_1405f4800(lVar5,0);
            }
            plVar9 = (longlong *)param_1[0x23];
            local_2b8 = AInteractiveFoliageActor::GetPrivateStaticClass();
            lVar5 = (**(code **)(*plVar9 + 0x628))(plVar9,local_2b8);
            if (lVar5 != 0) {
              FUN_140a0ac70(lVar5);
            }
          }
          *(undefined1 *)(param_1 + 0x12a) = 1;
        }
        plVar9 = (longlong *)param_1[0x23];
        local_2b0 = FUN_142e27720();
        lVar5 = (**(code **)(*plVar9 + 0x628))(plVar9,local_2b0);
        if (lVar5 != 0) {
          local_2a8 = UAnimMontage::GetPrivateStaticClass();
          FUN_142c6e2c0(lVar5,&local_3a8,local_2a8);
          if (local_3a8 != 0) {
            FUN_1409d7eb0(local_3a8,*(undefined1 *)(*plVar7 + 0x40));
          }
          if (local_3a0 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_3a0 + 1;
            lVar5 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_3a0)(local_3a0);
              LOCK();
              piVar1 = (int *)((longlong)local_3a0 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_3a0 + 8))(local_3a0,1);
              }
            }
          }
        }
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x90) != 0) {
        param_1[0x134] = *(longlong *)(lVar5 + 0x90);
        lVar5 = *plVar7;
      }
      *(uint *)(param_1 + 0x137) =
           *(uint *)(param_1 + 0x137) | 1 << (*(byte *)(lVar5 + 0x40) & 0x1f);
      *(uint *)((longlong)param_1 + 0x9b4) =
           *(uint *)((longlong)param_1 + 0x9b4) | 1 << ((byte)*(undefined4 *)(param_2 + 5) & 0x1f);
    }
  }
  return;
}



// FUNCTION 140a9ac90 FUN_140a9ac90 body=793 status=ok
// SIG undefined FUN_140a9ac90(void)

void FUN_140a9ac90(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  plVar7 = *(longlong **)(param_1 + 0x118);
  uVar3 = FUN_142a07000();
  lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar3);
  if (lVar4 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x990);
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x998) * 0xc;
    for (; plVar7 != plVar6; plVar7 = plVar7 + 0xc) {
      if (((*(uint *)(plVar7 + 1) & 0x10) == 0) && (lVar1 = *plVar7, lVar1 != 0)) {
        plVar8 = (longlong *)(lVar1 + 0x30);
        if ((*(uint *)(plVar7 + 1) & 2) != 0) {
          plVar8 = plVar7 + 5;
        }
        if ((param_2 == *plVar8) ||
           ((*(char *)(lVar1 + 0x38) != '\0' &&
            (cVar2 = FUN_1423a5360(lVar4,param_2), cVar2 != '\0')))) {
          local_a0 = 0.0;
          local_78 = 0;
          local_70 = (undefined4)plVar7[10];
          local_80 = 0;
          local_74 = 0;
          puVar5 = (undefined8 *)FUN_1423acae0(lVar4,&local_a8,param_2,0);
          uVar3 = *param_3;
          local_8c = (float)uVar3;
          local_98 = (float)*puVar5;
          local_90 = *(float *)(puVar5 + 1);
          local_a0 = *(float *)(param_3 + 1);
          local_a8._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
          local_94 = local_a8._4_4_;
          local_a8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          local_88 = local_a8._4_4_;
          local_84 = local_a0;
          if ((local_8c == 0.0) &&
             ((local_84 = local_a0, local_a8._4_4_ == 0.0 && (local_84 = local_a0, local_a0 == 0.0))
             )) {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
            if (lVar4 == 0) {
              local_a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              local_a0 = DAT_1468b5d98;
            }
            else {
              local_a8 = *(undefined8 *)(lVar4 + 0x220);
              local_a0 = *(float *)(lVar4 + 0x228);
            }
            fVar11 = local_98 - (float)local_a8;
            fVar13 = local_90 - local_a0;
            fVar12 = local_94 - (float)((ulonglong)local_a8 >> 0x20);
            fVar9 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
            uVar3 = local_a8;
            local_8c = fVar11;
            local_88 = fVar12;
            local_84 = fVar13;
            if ((fVar9 != 1.0) &&
               (local_8c = DAT_1468b5d90, local_88 = DAT_1468b5d94, local_84 = DAT_1468b5d98,
               1e-08 <= fVar9)) {
              auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
              local_84 = auVar10._0_4_;
              local_84 = local_84 + local_84 * (0.5 - fVar9 * 0.5 * local_84 * local_84);
              local_84 = local_84 + local_84 * (0.5 - fVar9 * 0.5 * local_84 * local_84);
              local_8c = fVar11 * local_84;
              local_88 = fVar12 * local_84;
              local_84 = fVar13 * local_84;
            }
          }
          local_a8 = uVar3;
          FUN_140a9a5c0(param_1,&local_98,0,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140a9afb0 FUN_140a9afb0 body=496 status=ok
// SIG undefined FUN_140a9afb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a9afb0(longlong param_1,longlong param_2,float *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  byte local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88 [8];
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((param_2 != 0) || (param_2 = *(longlong *)(param_1 + 0x988), param_2 != 0)) {
    if ((*param_3 == 0.0) && ((param_3[1] == 0.0 && (param_3[2] == 0.0)))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar1 == 0) {
        local_c8 = _DAT_1468b5d90;
        local_c0 = DAT_1468b5d98;
      }
      else {
        local_c8 = *(undefined8 *)(lVar1 + 0x220);
        local_c0 = *(float *)(lVar1 + 0x228);
      }
      *(undefined8 *)param_3 = local_c8;
      param_3[2] = local_c0;
    }
    local_c0 = param_3[2];
    local_d0 = local_88;
    local_c8 = *(undefined8 *)param_3;
    uVar3 = 0;
    local_d8 = (byte)(*(uint *)(param_1 + 0x840) >> 3) & 1;
    local_68 = (undefined4 *)0x0;
    local_60 = 0;
    FUN_140a964d0(param_1,param_2,&local_c8);
    local_a4 = 0;
    local_b0 = param_3[2];
    local_ac = 0;
    local_b8 = *(undefined8 *)param_3;
    puVar2 = local_88;
    if (local_68 != (undefined4 *)0x0) {
      puVar2 = local_68;
    }
    local_c0 = 0.0;
    local_90 = 0xffffffff;
    uVar4 = (longlong)(int)local_60 & 0x3fffffffffffffff;
    if (puVar2 + (int)local_60 < puVar2) {
      uVar4 = uVar3;
    }
    local_a0 = local_b8;
    local_98 = local_b0;
    local_94 = param_4;
    if (uVar4 != 0) {
      do {
        local_90 = *puVar2;
        FUN_140a9a5c0(param_1,&local_b8,0,0);
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != uVar4);
    }
    if (local_68 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a9b1a0 FUN_140a9b1a0 body=4 status=ok
// SIG undefined FUN_140a9b1a0(void)

undefined4 FUN_140a9b1a0(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 140a9b1c0 FUN_140a9b1c0 body=28 status=ok
// SIG undefined FUN_140a9b1c0(void)

float FUN_140a9b1c0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_140a9b1a0();
  return fVar1 / *(float *)(param_1 + 0x560);
}



// FUNCTION 140a9b1e0 FUN_140a9b1e0 body=513 status=ok
// SIG undefined FUN_140a9b1e0(void)

void FUN_140a9b1e0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  iVar1 = *(int *)(param_1 + 0x340);
  if (iVar1 == 0) {
    return;
  }
  iVar13 = 0;
  if (**(longlong **)(param_1 + 0x338) == param_2) {
    lVar7 = (*(longlong **)(param_1 + 0x338))[1];
    if (lVar7 != 0) {
      iVar12 = *(int *)(lVar7 + 0xc);
      if (iVar12 < (int)DAT_1469e91c4) {
        uVar5 = iVar12 >> 0x1f & 0xffff;
        uVar4 = iVar12 + uVar5;
        lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar14 = 0;
      }
      if (((*(uint *)(lVar14 + 8) >> 0x1d & 1) == 0) && (param_3 != lVar7)) goto LAB_140a9b296;
    }
    bVar8 = 0;
  }
  else {
LAB_140a9b296:
    bVar8 = 1;
  }
  lVar14 = (longlong)iVar1;
  lVar7 = 0;
  iVar12 = (int)DAT_1469e91c4;
  iVar9 = 0;
  do {
    iVar10 = iVar9 + 1;
    lVar7 = lVar7 + 1;
    if (lVar7 < lVar14) {
      plVar11 = (longlong *)(lVar7 * 0x20 + *(longlong *)(param_1 + 0x338));
      do {
        if (*plVar11 == param_2) {
          lVar2 = plVar11[1];
          if (lVar2 != 0) {
            uVar4 = *(uint *)(lVar2 + 0xc);
            if ((int)uVar4 < iVar12) {
              uVar5 = uVar4 & 0xffff;
              if ((int)uVar4 < 0) {
                uVar4 = uVar4 + 0xffff;
                uVar5 = uVar5 - 0x10000;
              }
              lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar5 * 0x18;
            }
            else {
              lVar6 = 0;
            }
            if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) && (param_3 != lVar2)) goto LAB_140a9b325;
          }
          bVar3 = 0;
        }
        else {
LAB_140a9b325:
          bVar3 = 1;
        }
        if (bVar8 != bVar3) break;
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        plVar11 = plVar11 + 4;
      } while (lVar7 < lVar14);
    }
    if (bVar8 != 0) {
      if (iVar13 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x20 + *(longlong *)(param_1 + 0x338)),
                   (void *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x338)),
                   (longlong)(iVar10 - iVar9) << 5);
        iVar12 = (int)DAT_1469e91c4;
      }
      iVar13 = iVar13 + (iVar10 - iVar9);
    }
    bVar8 = bVar8 ^ 1;
    iVar9 = iVar10;
    if (lVar14 <= lVar7) {
      *(int *)(param_1 + 0x340) = iVar13;
      if (0 < iVar1 - iVar13) {
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2f0);
      }
      return;
    }
  } while( true );
}



// FUNCTION 140a9b3f0 FUN_140a9b3f0 body=1536 status=ok
// SIG undefined FUN_140a9b3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a9b3f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_98;
  byte local_97;
  byte local_96;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x370) == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x790);
  fVar14 = (float)FUN_142d13ae0(param_2);
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (lVar4 != 0) {
    lVar5 = FUN_142e0d0b0();
    lVar7 = lVar4;
    do {
      if (lVar7 == lVar5) goto LAB_140a9b486;
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  lVar4 = 0;
LAB_140a9b486:
  lVar7 = *(longlong *)(param_1 + 0x370);
  iVar12 = 0;
  if (*(int *)(lVar7 + 0x7a0) < 1) {
    return;
  }
  while( true ) {
    plVar13 = (longlong *)((longlong)iVar12 * 0x390 + *(longlong *)(lVar7 + 0x798));
    if ((int)plVar13[1] < 1) break;
    plVar9 = (longlong *)*plVar13;
    plVar11 = plVar9 + (int)plVar13[1];
    for (; plVar9 != plVar11; plVar9 = plVar9 + 1) {
      if (*plVar9 != 0) {
        lVar6 = FUN_142e0d0b0();
        lVar7 = *plVar9;
        for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar6) {
            lVar5 = lVar4;
            if (lVar7 != 0) goto joined_r0x000140a9b518;
            break;
          }
        }
      }
LAB_140a9b52e:
    }
    lVar7 = *(longlong *)(param_1 + 0x370);
    iVar12 = iVar12 + 1;
    if (*(int *)(lVar7 + 0x7a0) <= iVar12) {
      return;
    }
  }
LAB_140a9b553:
  if ((iVar12 < 0) || (*(int *)(param_1 + 0x510) <= iVar12)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  plVar11 = (longlong *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0x508));
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  iVar10 = 3;
  iVar8 = 3;
  fVar17 = 0.0;
  fVar16 = 0.0;
  do {
    fVar15 = (float)FUN_142c98860(plVar13 + (longlong)iVar8 * 0x1c + 2,0);
    if (fVar15 <= fVar14) {
      fVar17 = (float)FUN_142c98860(plVar13 + (longlong)iVar8 * 0x1c + 9,0);
      break;
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  lVar7 = *plVar11;
  lVar5 = (longlong)(int)plVar11[1];
  lVar4 = lVar7 + lVar5 * 8;
  for (; lVar7 != lVar4; lVar7 = lVar7 + 8) {
    fVar16 = fVar16 + *(float *)(lVar7 + 4);
  }
  iVar8 = (int)plVar11[1] + 1;
  *(int *)(plVar11 + 1) = iVar8;
  if (*(int *)((longlong)plVar11 + 0xc) < iVar8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
  }
  lVar4 = *plVar11;
  *(float *)(lVar4 + 4 + lVar5 * 8) = fVar17;
  *(undefined4 *)(lVar4 + lVar5 * 8) = uVar1;
  do {
    fVar14 = (float)FUN_142c98860(plVar13 + (longlong)iVar10 * 0x1c + 0x10,0);
    iVar8 = iVar10;
    if (fVar14 <= fVar16 + fVar17) break;
    iVar10 = iVar10 + -1;
    iVar8 = -1;
  } while (-1 < iVar10);
  cVar2 = *(char *)(param_2 + 0x529);
  iVar10 = iVar8;
  if (cVar2 == '\0') {
LAB_140a9b6a4:
    if (iVar10 == -1) {
      return;
    }
  }
  else {
    if (cVar2 == '\x01') {
      iVar8 = iVar8 + 1;
    }
    else if (cVar2 == '\x02') {
      iVar8 = iVar8 + -1;
    }
    if (-1 < iVar8) {
      iVar10 = 3;
      if (iVar8 < 3) {
        iVar10 = iVar8;
      }
      goto LAB_140a9b6a4;
    }
    iVar10 = 0;
  }
  local_88 = _DAT_1468b5d90;
  local_7c = _DAT_1468b5d90;
  local_96 = 0;
  local_94 = 0xffffffff;
  local_90 = 0;
  local_8c = 0;
  local_80 = DAT_1468b5d98;
  local_74 = DAT_1468b5d98;
  local_98 = (undefined1)iVar12;
  local_97 = (byte)iVar10;
  FWeakObjectPtr::operator=(&local_94,*(undefined8 *)(param_2 + 0x28));
  bVar3 = *(float *)(param_2 + 0x55c) == *(float *)(param_2 + 0x550);
  plVar13 = (longlong *)FUN_142d1b8d0(param_2,bVar3);
  if ((plVar13 == (longlong *)0x0) || (lVar4 = *plVar13, lVar4 == 0)) {
    if (!bVar3) {
      local_96 = local_96 | 4;
    }
    goto LAB_140a9b8db;
  }
  lVar7 = *(longlong *)(param_1 + 0x370);
  lVar6 = lVar7 + 0x858;
  lVar5 = FWeakObjectPtr::Get(lVar6);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x860)) && (*(longlong *)(lVar7 + 0x868) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x860) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar6);
      if (lVar5 != 0) goto LAB_140a9b7b8;
    }
  }
  else {
LAB_140a9b7b8:
    lVar7 = FUN_142e5f7c0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar5 == lVar4)) {
      local_96 = local_96 | 4;
      goto LAB_140a9b8db;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x370);
  lVar6 = lVar7 + 0x830;
  lVar5 = FWeakObjectPtr::Get(lVar6);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar7 + 0x838)) || (*(longlong *)(lVar7 + 0x840) == 0))
    goto LAB_140a9b8db;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0x838) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar6);
    if (lVar5 == 0) goto LAB_140a9b8db;
  }
  lVar7 = FUN_142e5f7c0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (lVar5 == lVar4)) {
    local_96 = local_96 | 8;
  }
LAB_140a9b8db:
  if (((*(byte *)(param_2 + 0x100) & 4) != 0) ||
     (bVar3 = false, (byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2)) {
    bVar3 = true;
  }
  if (bVar3) {
    local_8c = 1;
    lVar4 = 0x2f8;
    if (1 < (byte)(*(char *)(param_2 + 0x2f0) - 1U)) {
      lVar4 = 0x104;
    }
    local_88 = *(undefined8 *)(lVar4 + param_2);
    local_80 = *(undefined4 *)(lVar4 + 8 + param_2);
  }
  else {
    local_7c = *(undefined8 *)(param_2 + 0x11c);
    local_74 = *(undefined4 *)(param_2 + 0x124);
  }
  if (((*(char *)(param_1 + 0x540) == '\0') || (*(byte *)(param_1 + 0x519) <= local_97)) &&
     (&local_98 != (undefined1 *)(param_1 + 0x518))) {
    *(undefined1 *)(param_1 + 0x518) = local_98;
    *(byte *)(param_1 + 0x519) = local_97;
    *(byte *)(param_1 + 0x51a) = local_96;
    *(undefined4 *)(param_1 + 0x51c) = local_94;
    *(undefined4 *)(param_1 + 0x520) = local_90;
    *(undefined8 *)(param_1 + 0x528) = local_88;
    *(undefined8 *)(param_1 + 0x534) = local_7c;
    *(undefined4 *)(param_1 + 0x530) = local_80;
    *(undefined4 *)(param_1 + 0x53c) = local_74;
    *(undefined1 *)(param_1 + 0x524) = local_8c;
    *(undefined1 *)(param_1 + 0x540) = 1;
  }
  return;
joined_r0x000140a9b518:
  if (lVar5 == 0) goto LAB_140a9b52e;
  if (lVar5 == lVar7) goto LAB_140a9b553;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x000140a9b518;
}



// FUNCTION 140a9b9f0 FUN_140a9b9f0 body=160 status=ok
// SIG undefined FUN_140a9b9f0(void)

void FUN_140a9b9f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = AGBattleRoyaleGameState::GetPrivateStaticClass();
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
      lVar3 = FUN_142ff9ea0(param_1);
      if (lVar3 != 0) {
        uVar4 = FUN_142ffa3c0(param_1,local_18);
        FUN_140a71960(lVar1,*(undefined1 *)(param_1 + 0x748),uVar4);
        return;
      }
      FUN_140a6fca0(lVar1,*(undefined1 *)(param_1 + 0x748));
    }
  }
  return;
}



// FUNCTION 140a9ba90 FUN_140a9ba90 body=615 status=ok
// SIG undefined FUN_140a9ba90(void)

void FUN_140a9ba90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar10 = 0;
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  if (*(int *)(param_1 + 0x670) == 0) {
    iVar9 = *(int *)(param_1 + 0x680);
    if (*(int *)(param_1 + 0x880) != iVar9) {
      plVar1 = (longlong *)(param_1 + 0x878);
      iVar3 = *(int *)(param_1 + 0x880);
      if (iVar3 < iVar9) {
        *(int *)(param_1 + 0x880) = iVar9;
        if (*(int *)(param_1 + 0x884) < iVar9) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 + *plVar1),0,(longlong)(iVar9 - iVar3));
      }
      else if ((iVar9 < iVar3) && (iVar3 != iVar9)) {
        *(int *)(param_1 + 0x880) = iVar9;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
    uVar12 = uVar10;
    if (0 < *(int *)(param_1 + 0x680)) {
      do {
        iVar9 = (int)uVar10;
        lVar11 = *(longlong *)(param_1 + 0x678) + 0x60 + (longlong)iVar9 * 0x78;
        cVar2 = *(char *)(uVar12 + *(longlong *)(param_1 + 0x878));
        cVar4 = FUN_142d52a00(lVar11);
        if (cVar4 != '\0') {
          cVar8 = '\0';
          uVar5 = FUN_142d52a20(lVar11);
          uVar5 = FArchive::operator<<(uVar5);
          cVar4 = FUN_142d639f0(uVar5,0);
          if (cVar4 == '\0') {
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
            if (lVar7 != 0) {
              uVar5 = FUN_142d52a20(lVar11);
              lVar6 = FArchive::operator<<(uVar5);
              if (1e-08 < *(float *)(lVar6 + 0x20)) {
                uVar5 = FUN_142d52a20(lVar11);
                uVar5 = FArchive::operator<<(uVar5);
                fVar13 = (float)FUN_142d5fea0(uVar5);
                if ((fVar13 < *(float *)(lVar7 + 0x228)) ||
                   (ABS(fVar13 - *(float *)(lVar7 + 0x228)) <= 1e-08)) {
                  cVar8 = '\x02';
                }
                else if ((fVar13 < *(float *)(lVar7 + 0x224)) ||
                        (ABS(fVar13 - *(float *)(lVar7 + 0x224)) <= 1e-08)) {
                  cVar8 = '\x01';
                }
              }
            }
          }
          else {
            cVar8 = '\x03';
          }
          if ((((cVar8 != cVar2) && (*(int *)(param_1 + 0x670) == 0)) && (-1 < iVar9)) &&
             ((iVar9 < *(int *)(param_1 + 0x680) && (iVar9 < *(int *)(param_1 + 0x880))))) {
            lVar11 = *(longlong *)(param_1 + 0x678);
            *(char *)(uVar12 + *(longlong *)(param_1 + 0x878)) = cVar8;
            if (cVar8 == '\0') {
              lVar7 = param_1 + 0x898;
            }
            else if (cVar8 == '\x01') {
              lVar7 = param_1 + 0x8a8;
            }
            else {
              if (cVar8 != '\x02') goto LAB_140a9bcb1;
              lVar7 = param_1 + 0x8b8;
            }
            FUN_140a86300(lVar7,lVar11 + (longlong)iVar9 * 0x78,uVar10);
          }
        }
LAB_140a9bcb1:
        uVar10 = (ulonglong)(iVar9 + 1U);
        uVar12 = uVar12 + 1;
      } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x680));
    }
  }
  return;
}



// FUNCTION 140a9bd00 FUN_140a9bd00 body=92 status=ok
// SIG undefined FUN_140a9bd00(void)

void FUN_140a9bd00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142d2bb60();
  if (*(longlong *)(param_1 + 0x758) != 0) {
    lVar2 = FUN_142e20fc0();
    lVar1 = *(longlong *)(param_1 + 0x758);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        FUN_140a9a480(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a9bd60 FUN_140a9bd60 body=119 status=ok
// SIG undefined FUN_140a9bd60(void)

void FUN_140a9bd60(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar5 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (bVar1 = *(byte *)(param_2 + 1), bVar4 = *(byte *)(lVar2 + 0x56c) & 1,
       *(byte *)(param_2 + 1) = bVar4, bVar1 != bVar4)) {
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)((longlong)param_2 + 0x34);
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
  }
  return;
}



// FUNCTION 140a9bde0 FUN_140a9bde0 body=682 status=ok
// SIG undefined FUN_140a9bde0(void)

void FUN_140a9bde0(longlong param_1,char param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar12;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  int local_40;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (lVar5 != 0) {
    uVar6 = FUN_143036a00();
    uVar7 = FWeakObjectPtr::Get(param_1 + 0xbc);
    AActor::GetComponentsByClass(uVar7,&local_48,uVar6);
    plVar1 = local_48 + local_40;
    for (plVar9 = local_48; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      plVar2 = (longlong *)*plVar9;
      if (plVar2 != (longlong *)0x0) {
        lVar5 = FUN_143036a00();
        uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if ((param_2 != '\0') && ((char)plVar2[0x172] == '\0')) {
            iVar4 = FUN_14233f450(plVar2);
            uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
            if ((iVar4 != 3) && (((char)plVar2[0x16d] == '\0' && (param_2 != '\0'))))
            goto LAB_140a9c032;
          }
          fVar11 = *(float *)(param_1 + 0x118) * *(float *)(param_1 + 0x118);
          fVar10 = *(float *)(param_1 + 0x120) * *(float *)(param_1 + 0x120);
          if (param_4 == 0) {
            local_68 = *(undefined8 *)(param_1 + 0x10c);
            local_60 = *(undefined4 *)(param_1 + 0x114);
            local_58 = *(undefined8 *)(param_1 + 0x70);
            local_50 = *(undefined4 *)(param_1 + 0x78);
            in_stack_ffffffffffffff78 =
                 CONCAT44(uVar12,SQRT(fVar11 + *(float *)(param_1 + 0x11c) *
                                               *(float *)(param_1 + 0x11c) + fVar10));
            (**(code **)(*plVar2 + 0xa58))
                      (plVar2,param_3,&local_58,&local_68,in_stack_ffffffffffffff78,
                       *(byte *)(param_1 + 0xf0) & 1);
            if ((*(longlong *)(param_1 + 0x18) != 0) &&
               (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x490), lVar5 != 0)) {
              lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                in_stack_ffffffffffffff78 = 0;
                FUN_142d408e0(*(undefined8 *)(param_1 + 0xe8),lVar5,0x3f800000,0,0);
              }
            }
          }
          else {
            in_stack_ffffffffffffff78 =
                 CONCAT44(uVar12,SQRT(fVar11 + *(float *)(param_1 + 0x11c) *
                                               *(float *)(param_1 + 0x11c) + fVar10));
            (**(code **)(*plVar2 + 0xa60))
                      (plVar2,param_3,param_4,*(undefined4 *)(param_4 + 0xc),
                       in_stack_ffffffffffffff78,*(undefined1 *)(param_4 + 0x10),
                       *(byte *)(param_1 + 0xf0) & 1);
          }
        }
      }
LAB_140a9c032:
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 140a9c0c0 FUN_140a9c0c0 body=66 status=ok
// SIG undefined FUN_140a9c0c0(void)

void FUN_140a9c0c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144248398;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442483e0;
  }
  return;
}



// FUNCTION 140a9c110 FUN_140a9c110 body=62 status=ok
// SIG undefined FUN_140a9c110(void)

void FUN_140a9c110(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140aab6c0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 140a9c150 FUN_140a9c150 body=64 status=ok
// SIG undefined FUN_140a9c150(void)

undefined1 FUN_140a9c150(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140aab6c0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 140a9c190 FUN_140a9c190 body=185 status=ok
// SIG undefined FUN_140a9c190(void)

undefined8 * FUN_140a9c190(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  FUN_140aa0770(param_2 + 1,lVar1);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 8,(void *)(lVar1 + 0x38),4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar1 + 0x48);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(lVar1 + 0x50);
  return param_2;
}



// FUNCTION 140a9c250 FUN_140a9c250 body=130 status=ok
// SIG undefined FUN_140a9c250(void)

undefined8 * FUN_140a9c250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FWeakObjectPtr::operator=(&local_18,0);
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_18._4_4_;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 140a9c2e0 FUN_140a9c2e0 body=159 status=ok
// SIG undefined FUN_140a9c2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140a9c2e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[5] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 1,local_58,0x20);
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (param_2[5] != 0) {
    FMemory::Free();
    uVar3 = local_38;
    uVar2 = (undefined4)local_30;
    uVar1 = local_30._4_4_;
  }
  param_2[5] = uVar3;
  *(undefined4 *)(param_2 + 6) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar1;
  return param_2;
}



// FUNCTION 140a9c380 FUN_140a9c380 body=261 status=ok
// SIG undefined FUN_140a9c380(void)

undefined8 * FUN_140a9c380(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,lVar1);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 8,(void *)(lVar1 + 0x38),4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar1 + 0x48);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x58);
  param_2[0xb] = *(undefined8 *)(lVar1 + 0x50);
  param_2[0xc] = uVar2;
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(lVar1 + 0x60);
  *(undefined4 *)((longlong)param_2 + 0x6c) = *(undefined4 *)(lVar1 + 100);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar1 + 0x68);
  *(undefined4 *)((longlong)param_2 + 0x74) = *(undefined4 *)(lVar1 + 0x6c);
  *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(lVar1 + 0x70);
  param_2[0x10] = *(undefined8 *)(lVar1 + 0x78);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar1 + 0x80);
  *(undefined1 *)((longlong)param_2 + 0x89) = *(undefined1 *)(lVar1 + 0x81);
  return param_2;
}



// FUNCTION 140a9c490 FUN_140a9c490 body=217 status=ok
// SIG undefined FUN_140a9c490(void)

void FUN_140a9c490(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar2 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      *puVar2 = *(undefined1 *)(puVar3 + -1);
      *(undefined8 *)(puVar2 + 8) = 0;
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(puVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(puVar2 + 0x14) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2 + 8,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 8),_Src,(longlong)iVar1 << 3);
      }
      puVar2 = puVar2 + 0x18;
      puVar3 = puVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140a9c570 Emplace<wchar_t_const_(&)[9],FText> body=436 status=ok
// SIG undefined Emplace<wchar_t_const_(&)[9],FText>(void)

longlong TMapBase<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
         ::Emplace<wchar_t_const_(&)[9],FText>(longlong *param_1,short *param_2,undefined8 param_3)

{
  void *_Dst;
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *local_30 = 0;
  local_30[1] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    *(int *)(local_30 + 1) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_30,0);
    }
    FGenericPlatformString::Memcpy(*local_30,param_2,(longlong)iVar5 * 2);
  }
  *(undefined4 *)(local_30 + 2) = 4;
  FText::FText(local_30 + 4,param_3);
  *(undefined1 *)(local_30 + 7) = 1;
  *(undefined4 *)(local_30 + 8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    if (local_res8[0] != -1) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      goto LAB_140a9c6fb;
    }
  }
  cVar1 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_38[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_30 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_30;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar4,0);
    uVar2 = uVar2 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x44) = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 8) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_38[0];
  }
LAB_140a9c6fb:
  return *param_1 + (longlong)local_res8[0] * 0x48 + 0x10;
}



// FUNCTION 140a9c730 FUN_140a9c730 body=427 status=ok
// SIG undefined FUN_140a9c730(void)

longlong FUN_140a9c730(longlong *param_1,short *param_2,int *param_3)

{
  void *_Dst;
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *local_30 = 0;
  local_30[1] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    *(int *)(local_30 + 1) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_30,0);
    }
    FGenericPlatformString::Memcpy(*local_30,param_2,(longlong)iVar5 * 2);
  }
  iVar5 = *param_3;
  *(undefined4 *)(local_30 + 2) = 0;
  *(undefined1 *)(local_30 + 7) = 0;
  local_30[3] = (longlong)iVar5;
  *(undefined4 *)(local_30 + 8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    if (local_res8[0] != -1) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      goto LAB_140a9c8b7;
    }
  }
  cVar1 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_38[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_30 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_30;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar4,0);
    uVar2 = uVar2 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x44) = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 8) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_38[0];
  }
LAB_140a9c8b7:
  return *param_1 + (longlong)local_res8[0] * 0x48 + 0x10;
}



// FUNCTION 140a9c8e0 FUN_140a9c8e0 body=766 status=ok
// SIG undefined FUN_140a9c8e0(void)

uint * FUN_140a9c8e0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  void *_Dst;
  int iVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *_Src;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar9 * 0x30 + *param_1);
  FUN_140a9c250(param_3,_Src);
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar9 != 1) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar4 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar8 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      uVar9 = *param_2;
      bVar2 = (byte)uVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = uVar9;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar9 * 0x30 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar9;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140a9cbb5;
    }
  }
  if (3 < uVar9) {
    uVar4 = (uVar9 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = (uVar9 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar4) ^ uVar4 >> 0xd;
    uVar9 = (iVar10 - uVar4) - uVar12 ^ uVar12 >> 0xc;
    uVar4 = (uVar4 - uVar9) - uVar12 ^ uVar9 << 0x10;
    uVar12 = (uVar12 - uVar4) - uVar9 ^ uVar4 >> 5;
    uVar9 = (uVar9 - uVar4) - uVar12 ^ uVar12 >> 3;
    uVar4 = (uVar4 - uVar9) - uVar12 ^ uVar9 << 10;
    uVar9 = ((uVar12 - uVar4) - uVar9 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar9;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<TSharedPtr<SWidget,0>,FText>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,0>,FText,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140a9cbb5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140a9cbe0 FUN_140a9cbe0 body=677 status=ok
// SIG undefined FUN_140a9cbe0(void)

uint * FUN_140a9cbe0(longlong param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  void *_Dst;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_res8 [2];
  uint local_38 [2];
  ulonglong *local_30;
  
  FUN_140aa2c70(param_1,local_38);
  *param_2 = local_38[0];
  FUN_140a9c2e0(param_3,local_30);
  uVar10 = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  iVar7 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c);
  if (iVar7 != 1) {
    FUN_140aa9d20(param_1,local_res8,*local_30);
    uVar4 = local_res8[0];
    lVar6 = (longlong)(int)local_res8[0];
    bVar11 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar11);
    if (bVar11) {
      lVar8 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar8 = param_1;
      }
      _Dst = (void *)(lVar8 + lVar6 * 0x40);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x38);
      uVar5 = *param_2;
      bVar2 = (byte)uVar5 & 0x1f;
      if (*(int *)(param_1 + 0x22c) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar6 = param_1;
        }
        *(uint *)(lVar6 + (longlong)*(int *)(param_1 + 0x228) * 0x40) = uVar5;
      }
      lVar6 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + (longlong)(int)uVar5 * 0x40) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x22c)) {
        uVar10 = *(undefined4 *)(param_1 + 0x228);
      }
      *(undefined4 *)(lVar6 + 4 + (longlong)(int)uVar5 * 0x40) = uVar10;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      *(uint *)(param_1 + 0x228) = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x218);
      *param_2 = uVar4;
      if (lVar6 == 0) {
        lVar6 = param_1 + 0x210;
      }
      puVar1 = (uint *)(lVar6 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140a9ce4d;
    }
  }
  cVar3 = FUN_140aa6ca0(param_1,iVar7,0);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar5 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar9 = -(uVar5 + iVar7) ^ uVar5 >> 0xd;
    uVar4 = (iVar7 - uVar5) - uVar9 ^ uVar9 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar9 ^ uVar4 << 0x10;
    uVar9 = (uVar9 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar9 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar9 ^ uVar4 << 10;
    uVar4 = ((uVar9 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *(int *)(param_1 + 0x248) - 1U;
    *(uint *)((longlong)local_30 + 0x3c) = uVar4;
    lVar6 = *(longlong *)(param_1 + 0x240);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar6 = param_1 + 0x230;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x248) - 1U & (longlong)(int)uVar4) * 4);
    lVar6 = *(longlong *)(param_1 + 0x240);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar6 = param_1 + 0x230;
    }
    *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x248) - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140a9ce4d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140a9ce90 FUN_140a9ce90 body=660 status=ok
// SIG undefined FUN_140a9ce90(void)

uint * FUN_140a9ce90(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  ulonglong *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar5 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar5 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar5 * 0x68 + *param_1);
  FUN_140a9c190(param_3,_Src);
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (iVar8 != 1) {
    TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar7 * 0x68 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      FUN_140aa83f0((longlong)_Dst + 8,0);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar5;
      goto LAB_140a9d0f1;
    }
  }
  cVar2 = TSet<TTuple<UFlareSimulatedSector_*,SectorVariation>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,SectorVariation,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar2 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar9 = -(uVar6 + iVar8) ^ uVar6 >> 0xd;
    uVar5 = (iVar8 - uVar6) - uVar9 ^ uVar9 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar9 ^ uVar9 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
    uVar5 = ((uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 100) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140a9d0f1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140a9d130 FUN_140a9d130 body=583 status=ok
// SIG undefined FUN_140a9d130(void)

int * FUN_140a9d130(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
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
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar2 = (ulonglong *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = local_res8[0];
      goto LAB_140a9d34e;
    }
  }
  cVar4 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    iVar7 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar11 = -(uVar9 + iVar7) ^ uVar9 >> 0xd;
    uVar8 = (iVar7 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140a9d34e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140a9d380 FUN_140a9d380 body=582 status=ok
// SIG undefined FUN_140a9d380(void)

int * FUN_140a9d380(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  undefined4 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
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
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = local_res8[0];
      goto LAB_140a9d59d;
    }
  }
  cVar4 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    iVar7 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar11 = -(uVar9 + iVar7) ^ uVar9 >> 0xd;
    uVar8 = (iVar7 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140a9d59d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140a9d5d0 FUN_140a9d5d0 body=588 status=ok
// SIG undefined FUN_140a9d5d0(void)

int * FUN_140a9d5d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar15 = false;
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar10 * 0x28);
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar4;
  *(undefined4 *)(_Src + 2) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar6;
  *(undefined4 *)(_Src + 3) = puVar2[4];
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar10,1);
      *param_2 = local_res8[0];
      goto LAB_140a9d7f3;
    }
  }
  cVar7 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar7 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar14 = -(uVar12 + iVar10) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 10;
    uVar11 = ((uVar14 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_140a9d7f3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 140a9d820 FUN_140a9d820 body=777 status=ok
// SIG undefined FUN_140a9d820(void)

int * FUN_140a9d820(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *_Src;
  bool bVar15;
  
  iVar10 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar12 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar8 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  bVar15 = false;
  _Src = (undefined4 *)((longlong)iVar12 * 0x1c + *param_1);
  *_Src = *puVar8;
  _Src[1] = puVar8[1];
  _Src[2] = puVar8[2];
  _Src[3] = *puVar3;
  _Src[4] = puVar3[1];
  _Src[5] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar9 = (longlong *)param_1[8];
      iVar6 = FUN_140aae940(_Src);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        lVar11 = *param_1;
        do {
          lVar11 = (longlong)iVar6 * 0x1c + lVar11;
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar11,_Src);
          if ((cVar5 == '\0') || (*(int *)(lVar11 + 8) != _Src[2])) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          iVar12 = iVar6;
          if (bVar15) break;
          lVar11 = *param_1;
          iVar6 = *(int *)(lVar11 + 0x14 + (longlong)iVar6 * 0x1c);
          iVar12 = iVar14;
        } while (iVar6 != -1);
      }
    }
    bVar15 = iVar12 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar12 * 0x1c + *param_1),_Src,0x14);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar10;
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x1c + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140a9db04;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar7 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar5 = '\0';
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar14;
    }
    uVar7 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar5 = '\x1f' - (char)iVar14;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar13 = FUN_140aae940(_Src);
    uVar13 = uVar13 & (int)param_1[9] - 1U;
    _Src[6] = uVar13;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[5] = *(undefined4 *)
               ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_140ab9470(param_1);
  }
LAB_140a9db04:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 140a9db30 FUN_140a9db30 body=646 status=ok
// SIG undefined FUN_140a9db30(void)

uint * FUN_140a9db30(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  void *_Dst;
  uint uVar9;
  ulonglong *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar6 + 1)) {
      FUN_1404a2c10(param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)(int)uVar6 * 0x98 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x98 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar6 * 0x98 + *param_1);
  FUN_140a9c380(param_3,_Src);
  *(undefined4 *)(_Src + 0x12) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140aa9f10(param_1,local_res8,_Src);
    uVar6 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar8 * 0x98 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x90);
      TSparseArray<TSetElement<TTuple<FRHIVertexDeclaration_*,TArray<FVertexElement,TFixedAllocator<16>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar6;
      goto LAB_140a9dd84;
    }
  }
  cVar2 = FUN_140aa6d40(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    iVar5 = (int)(*_Src >> 4);
    uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar9 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
    uVar6 = (iVar5 - uVar7) - uVar9 ^ uVar9 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 0x10;
    uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar9 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 10;
    uVar6 = ((uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x94) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x12) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_140a9dd84:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140a9ddc0 FUN_140a9ddc0 body=559 status=ok
// SIG undefined FUN_140a9ddc0(void)

void FUN_140a9ddc0(undefined8 param_1,undefined4 param_2,undefined8 **param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *local_68;
  longlong *local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 local_44;
  void *local_40;
  ulonglong local_38;
  void *local_30;
  ulonglong local_28;
  
  plVar7 = (longlong *)0x0;
  local_50 = 0;
  local_58 = &PTR__scalar_deleting_destructor__144248848;
  local_48 = 0;
  local_44 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  cVar4 = FUN_140ab3520(&local_58,param_1,param_2);
  if ((cVar4 != '\0') && (cVar4 = (*(code *)local_58[5])(&local_58), cVar4 != '\0')) {
    puVar5 = (undefined8 *)operator_new(0x38);
    pvVar3 = local_40;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_1442486f8;
      *(undefined4 *)(puVar5 + 1) = local_50;
      *puVar5 = &PTR__scalar_deleting_destructor__144248848;
      *(undefined1 *)(puVar5 + 2) = local_48;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_44;
      puVar5[3] = 0;
      lVar8 = (longlong)(int)local_38;
      *(int *)(puVar5 + 4) = (int)local_38;
      if ((int)local_38 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (puVar5 + 3,local_38 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar5[3],pvVar3,lVar8 << 3);
      }
      pvVar3 = local_30;
      puVar5[5] = 0;
      lVar8 = (longlong)(int)local_28;
      *(int *)(puVar5 + 6) = (int)local_28;
      if ((int)local_28 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (puVar5 + 5,local_28 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar5[5],pvVar3,lVar8 << 3);
      }
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      plVar6[2] = (longlong)puVar5;
      plVar7 = plVar6;
    }
    local_68 = puVar5;
    local_60 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_68,puVar5,puVar5);
    if (param_3 != &local_68) {
      *param_3 = puVar5;
      local_68 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 1,&local_60);
      plVar7 = local_60;
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
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a9dff0 IntroSortInternal<void_*,FIdentityFunctor,TLess<void>_> body=819 status=ok
// SIG undefined IntroSortInternal<void_*,FIdentityFunctor,TLess<void>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::IntroSortInternal<void_*,FIdentityFunctor,TLess<void>_>
               (longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar9 = &local_328;
    do {
      puVar7 = (ulonglong *)*plVar9;
      puVar14 = (ulonglong *)plVar9[1];
      local_338 = (int)plVar9[2];
      lVar11 = ((longlong)puVar14 - (longlong)puVar7 >> 3) + 1;
      puVar10 = puVar7;
      if (local_338 != 0) {
LAB_140a9e0b0:
        if (8 < lVar11) {
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          uVar1 = puVar10[lVar11 >> 1];
          puVar10[lVar11 >> 1] = *puVar10;
          puVar12 = puVar14 + 1;
          *puVar10 = uVar1;
          puVar7 = puVar10;
LAB_140a9e0e0:
          puVar7 = puVar7 + 1;
          if (puVar7 <= puVar14) goto code_r0x000140a9e0e9;
          goto LAB_140a9e0f1;
        }
        for (; puVar12 = puVar10, puVar7 = puVar10, puVar10 < puVar14; puVar14 = puVar14 + -1) {
          while (puVar13 = puVar12, puVar7 = puVar7 + 1, puVar7 <= puVar14) {
            puVar12 = puVar7;
            if (*puVar7 <= *puVar13) {
              puVar12 = puVar13;
            }
          }
          uVar1 = *puVar13;
          *puVar13 = *puVar14;
          *puVar14 = uVar1;
        }
        goto LAB_140a9e29a;
      }
LAB_140a9e1a1:
      iVar15 = (int)lVar11;
      iVar4 = (iVar15 + -2) / 2;
      if (-1 < iVar4) {
        iVar5 = iVar4 * 2 + 1;
        iVar3 = iVar5;
        iVar8 = iVar4;
joined_r0x000140a9e1bb:
        do {
          if (iVar5 < iVar15) {
            iVar5 = iVar4 * 2;
            iVar6 = iVar5 + 1;
            if (iVar5 + 2 < iVar15) {
              if (puVar7[(longlong)iVar5 + 2] < puVar7[iVar6]) {
                iVar6 = iVar5;
              }
              iVar6 = iVar6 + 1;
            }
            uVar1 = puVar7[iVar4];
            if (uVar1 < puVar7[iVar6]) {
              puVar7[iVar4] = puVar7[iVar6];
              puVar7[iVar6] = uVar1;
              iVar5 = iVar6 * 2 + 1;
              iVar4 = iVar6;
              goto joined_r0x000140a9e1bb;
            }
          }
          iVar5 = iVar3 + -2;
          iVar4 = iVar8 + -1;
          iVar3 = iVar5;
          iVar8 = iVar4;
        } while (-1 < iVar4);
      }
      iVar15 = iVar15 + -1;
      lVar11 = (longlong)iVar15;
      if (0 < iVar15) {
        do {
          iVar4 = 0;
          uVar1 = *puVar7;
          *puVar7 = puVar7[lVar11];
          puVar7[lVar11] = uVar1;
          if (1 < iVar15) {
            do {
              iVar3 = iVar4 * 2;
              iVar5 = iVar3 + 1;
              if (iVar3 + 2 < iVar15) {
                if (puVar7[(longlong)iVar3 + 2] < puVar7[iVar5]) {
                  iVar5 = iVar3;
                }
                iVar5 = iVar5 + 1;
              }
              uVar1 = puVar7[iVar4];
              if (puVar7[iVar5] <= uVar1) break;
              puVar7[iVar4] = puVar7[iVar5];
              puVar7[iVar5] = uVar1;
              iVar4 = iVar5;
            } while (iVar5 * 2 + 1 < iVar15);
          }
          iVar15 = iVar15 + -1;
          lVar11 = lVar11 + -1;
        } while (0 < lVar11);
      }
LAB_140a9e29a:
      plVar9 = plVar9 + -3;
    } while (&local_328 <= plVar9);
  }
  return;
code_r0x000140a9e0e9:
  if (*puVar7 <= *puVar10) goto LAB_140a9e0e0;
LAB_140a9e0f1:
  do {
    puVar13 = puVar12;
    uVar1 = puVar13[-1];
    puVar12 = puVar13 + -1;
    if (puVar12 <= puVar10) break;
  } while (*puVar10 <= uVar1);
  if (puVar7 <= puVar12) {
    uVar2 = *puVar7;
    *puVar7 = uVar1;
    *puVar12 = uVar2;
    goto LAB_140a9e0e0;
  }
  uVar2 = *puVar10;
  local_338 = local_338 + -1;
  *puVar10 = uVar1;
  *puVar12 = uVar2;
  if ((longlong)((longlong)puVar12 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar14 - (longlong)puVar7 & 0xfffffffffffffff8U)) {
    if (puVar7 < puVar14) {
      *plVar9 = (longlong)puVar7;
      plVar9[1] = (longlong)puVar14;
      *(int *)(plVar9 + 2) = local_338;
      plVar9 = plVar9 + 3;
    }
    if (puVar12 <= puVar10 + 1) goto LAB_140a9e29a;
    puVar14 = puVar13 + -2;
    puVar7 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar12) {
      *plVar9 = (longlong)puVar10;
      plVar9[1] = (longlong)(puVar13 + -2);
      *(int *)(plVar9 + 2) = local_338;
      plVar9 = plVar9 + 3;
    }
    if (puVar14 <= puVar7) goto LAB_140a9e29a;
  }
  lVar11 = ((longlong)puVar14 - (longlong)puVar7 >> 3) + 1;
  puVar10 = puVar7;
  if (local_338 == 0) goto LAB_140a9e1a1;
  goto LAB_140a9e0b0;
}



// FUNCTION 140a9e330 FUN_140a9e330 body=69 status=ok
// SIG undefined FUN_140a9e330(void)

ulonglong FUN_140a9e330(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1429f11d0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a9e380 FUN_140a9e380 body=128 status=ok
// SIG undefined FUN_140a9e380(void)

undefined8 * FUN_140a9e380(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144248a28;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x91) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8b) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x40400000;
  return param_1;
}



// FUNCTION 140a9e400 FUN_140a9e400 body=248 status=ok
// SIG undefined FUN_140a9e400(void)

undefined8 * FUN_140a9e400(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144249110;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x129) = 2;
  return param_1;
}



// FUNCTION 140a9e500 FUN_140a9e500 body=185 status=ok
// SIG undefined FUN_140a9e500(void)

undefined8 * FUN_140a9e500(undefined8 *param_1)

{
  FUN_140aeb790();
  *(undefined4 *)(param_1 + 0xaa) = 0x40a00000;
  *param_1 = &PTR_FUN_144249ac8;
  param_1[0x8b] = &PTR_LAB_14424a238;
  param_1[0x8c] = &PTR_LAB_14424a298;
  param_1[0x8d] = &PTR_LAB_14424a2c0;
  param_1[0x8e] = &PTR_LAB_14424a2d8;
  param_1[0x8f] = &PTR_LAB_14424a300;
  param_1[0x90] = &PTR_LAB_14424a310;
  param_1[0x92] = &PTR_LAB_14424a350;
  param_1[0x93] = &PTR_LAB_14424a368;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb1] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  return param_1;
}



// FUNCTION 140a9e5c0 FUN_140a9e5c0 body=301 status=ok
// SIG undefined FUN_140a9e5c0(void)

undefined8 * FUN_140a9e5c0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14424be88;
  param_1[0x8b] = &PTR_LAB_14424c570;
  param_1[0x8c] = &PTR_LAB_14424c588;
  FTickFunction::FTickFunction(param_1 + 0x8d);
  param_1[0x8d] = &PTR__scalar_deleting_destructor__14424be70;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  *(undefined1 *)(param_1 + 6) = 2;
  *(byte *)((longlong)param_1 + 0x474) = *(byte *)((longlong)param_1 + 0x474) & 0xfb | 2;
  *(undefined2 *)(param_1 + 0x8e) = 0x404;
  return param_1;
}



// FUNCTION 140a9e6f0 FUN_140a9e6f0 body=1159 status=ok
// SIG undefined FUN_140a9e6f0(void)

undefined8 * FUN_140a9e6f0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__14424b748;
  param_1[0x8b] = &PTR_LAB_14424be48;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x43800000;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x482) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0xc2800000;
  *(undefined4 *)(param_1 + 0x91) = 0x42800000;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x92) = 1;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined2 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 1;
  *(undefined4 *)(param_1 + 0xa2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xaf) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  FUN_140590080(param_1 + 0xbb);
  FUN_140590080(param_1 + 0xbe);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  pvVar2 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  *(undefined1 *)((longlong)param_1 + 0x482) = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x8f) = 0x10;
  lVar4 = *(longlong *)((longlong)pvVar2 + uVar6 * 8);
  *(undefined4 *)((longlong)param_1 + 0x47c) = 4;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x40a00000;
  if (*(int *)(lVar4 + 0x38) < DAT_146867b20) {
    _Init_thread_header(&DAT_146867b20);
    if (DAT_146867b20 == -1) {
      FName::FName(&DAT_146867b18,L"ElementalPuddle",1);
      _Init_thread_footer(&DAT_146867b20);
    }
  }
  uVar5 = DAT_146867968;
  uVar3 = UCheckBox::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar5,uVar3,uVar3,1,0,0);
  param_1[0x96] = lVar4;
  *(byte *)(lVar4 + 0x2f1) = *(byte *)(lVar4 + 0x2f1) & 0xef;
  FUN_1423974f0(param_1[0x96],1);
  *(byte *)(param_1[0x96] + 0x24c) = *(byte *)(param_1[0x96] + 0x24c) | 0x40;
  *(undefined1 *)(param_1[0x96] + 0x24e) = 2;
  *(byte *)(param_1[0x96] + 0x3c) = *(byte *)(param_1[0x96] + 0x3c) & 0xfd;
  (**(code **)(*(longlong *)param_1[0x96] + 0x640))((longlong *)param_1[0x96],DAT_146867b18);
  param_1[0x2d] = param_1[0x96];
  *(undefined4 *)(param_1 + 0x99) = 0x40000000;
  uVar5 = DAT_146867970;
  uVar3 = FUN_14130d400();
  uVar5 = FUN_141752410(param_1,uVar5,uVar3,uVar3,1,0,0);
  param_1[0x9a] = uVar5;
  FUN_142397000(uVar5,0,0,1);
  FUN_142399e30(param_1[0x9a],param_1[0x2d],0);
  *(undefined1 *)(param_1[0x9a] + 0x24e) = 2;
  uVar5 = DAT_146867980;
  uVar3 = UInputKeySelector::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar5,uVar3,uVar3,1,0,0);
  param_1[0x9b] = lVar4;
  *(undefined1 *)(lVar4 + 0x268) = 1;
  lVar4 = param_1[0x9b];
  *(undefined4 *)(lVar4 + 0x278) = 0;
  if (*(int *)(lVar4 + 0x27c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar4 + 0x270,0);
  }
  lVar4 = param_1[0x9b];
  iVar1 = *(int *)(lVar4 + 0x278);
  *(int *)(lVar4 + 0x278) = iVar1 + 1;
  if (*(int *)(lVar4 + 0x27c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x270,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar4 + 0x270) + (longlong)iVar1 * 8) = DAT_146867968;
  *(undefined1 *)(param_1[0x9b] + 0x290) = 1;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[0x9b] + 0x298,&DAT_146867968);
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[0x9b] + 0x298,&DAT_146867970);
  *(undefined1 *)(param_1[0x9b] + 0x604) = 1;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[0x9b] + 0x630,&DAT_146867968);
  bVar7 = DAT_1468674c4 == '\0';
  *(undefined4 *)(param_1 + 0xa9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x44160000;
  *(undefined4 *)(param_1 + 0xaa) = 0x3d4ccccd;
  if (bVar7) {
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"ElementalPuddle",L"MaxPuddleScale",&DAT_146295c24,&DAT_1468e2410);
    DAT_1468674c4 = '\x01';
  }
  *(undefined1 *)((longlong)param_1 + 0x129) = 2;
  return param_1;
}



// FUNCTION 140a9eb80 FUN_140a9eb80 body=432 status=ok
// SIG undefined FUN_140a9eb80(void)

undefined8 * FUN_140a9eb80(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined4 uStack_c;
  
  FUN_140a9e6f0();
  *param_1 = &PTR__scalar_deleting_destructor__14424c5b0;
  param_1[0x8b] = &PTR_LAB_14424ccb0;
  uVar2 = DAT_146867990;
  uVar3 = FUN_142923000();
  lVar4 = FUN_141752410(param_1,uVar2,uVar3,uVar3,1,0,0);
  param_1[0xc3] = lVar4;
  *(undefined1 *)(lVar4 + 0x24e) = 2;
  *(undefined4 *)(param_1[0xc3] + 0x1f8) = 0xc2b40000;
  *(undefined4 *)(param_1[0xc3] + 0x6f8) = 1;
  FUN_142397000(param_1[0xc3],0,0,1);
  local_res8 = 0;
  FUN_142399e30(param_1[0xc3],param_1[0x2d],0);
  param_1[0x9d] = param_1[0xc3];
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[0x9b] + 0x608,&DAT_146867990);
  lVar4 = param_1[0x9b];
  plVar8 = (longlong *)(lVar4 + 0x208);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = 0x40ab5dc0;
    *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
    iVar1 = *(int *)(lVar4 + 0x210);
    *(int *)(lVar4 + 0x210) = iVar1 + 1;
    if (*(int *)(lVar4 + 0x214) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 140a9ed30 FUN_140a9ed30 body=451 status=ok
// SIG undefined FUN_140a9ed30(void)

/* WARNING: Removing unreachable block (ram,0x000140a9ede3) */

char * FUN_140a9ed30(char *param_1,longlong param_2,char param_3,char param_4)

{
  void **ppvVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  void *local_38;
  undefined8 local_30;
  
  pvVar4 = (void *)0x0;
  ppvVar1 = (void **)(param_1 + 8);
  *param_1 = (param_3 + '\x01') * '\x02';
  *ppvVar1 = (void *)0x0;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = param_3;
  if (param_4 == '\0') {
    local_38 = (void *)0x0;
    local_30 = 0;
    FBase64::Decode(param_2,&local_38);
    if (ppvVar1 != &local_38) {
      if (*ppvVar1 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar1 = local_38;
      *(uint *)(param_1 + 0x10) = (uint)local_30;
      *(uint *)(param_1 + 0x14) = local_30._4_4_;
      return param_1;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
      return param_1;
    }
  }
  else if (param_4 == '\x01') {
    local_38 = (void *)0x0;
    uVar6 = *(int *)(param_2 + 8) - 1;
    if (*(int *)(param_2 + 8) == 0) {
      uVar6 = 0;
    }
    local_30 = (ulonglong)(uint)local_30;
    if ((int)uVar6 < 1) {
      pvVar3 = pvVar4;
      if (((int)uVar6 < 0) && (pvVar3 = local_38, uVar6 != 0)) {
        local_30 = (ulonglong)uVar6;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_38);
        pvVar4 = (void *)(local_30 & 0xffffffff);
        pvVar3 = local_38;
      }
    }
    else {
      local_30 = (ulonglong)uVar6;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38);
      pvVar3 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,0,(longlong)(int)uVar6);
      pvVar4 = (void *)(local_30 & 0xffffffff);
    }
    cVar2 = FString::ToHexBlob(param_2,pvVar3,pvVar4);
    uVar5 = (int)pvVar4;
    if (cVar2 == '\0') {
      bVar7 = local_30._4_4_ != 0;
      local_30 = (ulonglong)local_30._4_4_ << 0x20;
      uVar5 = 0;
      if (bVar7) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_38,0);
        pvVar3 = local_38;
        uVar5 = (uint)local_30;
      }
    }
    if (ppvVar1 == &local_38) {
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
    }
    else {
      if (*ppvVar1 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar1 = pvVar3;
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(uint *)(param_1 + 0x14) = local_30._4_4_;
    }
  }
  return param_1;
}



// FUNCTION 140a9ef00 FUN_140a9ef00 body=180 status=ok
// SIG undefined FUN_140a9ef00(void)

undefined4 * FUN_140a9ef00(undefined4 *param_1)

{
  longlong *plVar1;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20 [3];
  
  plVar1 = (longlong *)FString::FString(local_38);
  local_28 = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_48 = *plVar1;
  *plVar1 = 0;
  local_40 = (undefined4)plVar1[1];
  local_3c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = local_28;
  FString::FString(param_1 + 6,local_20);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 140a9efc0 FUN_140a9efc0 body=245 status=ok
// SIG undefined FUN_140a9efc0(void)

undefined4 * FUN_140a9efc0(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  if (param_2 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 4,uVar1);
    FWeakObjectPtr::operator=(param_1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 140a9f0c0 FUN_140a9f0c0 body=186 status=ok
// SIG undefined FUN_140a9f0c0(void)

undefined4 * FUN_140a9f0c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  FUN_14058f8f0(param_1 + 8,param_2 + 8);
  param_1[0xc] = param_2[0xc];
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  return param_1;
}



// FUNCTION 140a9f180 FUN_140a9f180 body=128 status=ok
// SIG undefined FUN_140a9f180(void)

undefined1 * FUN_140a9f180(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 140a9f200 FUN_140a9f200 body=281 status=ok
// SIG undefined FUN_140a9f200(void)

longlong FUN_140a9f200(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)(param_1 + 0x54) < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  if (*(undefined2 **)(param_1 + 0x48) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)(param_1 + 0x7c) < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  if (*(undefined2 **)(param_1 + 0x70) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return param_1;
}



// FUNCTION 140a9f320 FUN_140a9f320 body=199 status=ok
// SIG undefined FUN_140a9f320(void)

undefined8 *
FUN_140a9f320(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & 0xf0;
  *(undefined4 *)(param_1 + 2) = param_5;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a9f3f0 FUN_140a9f3f0 body=822 status=ok
// SIG undefined FUN_140a9f3f0(void)

undefined8 * FUN_140a9f3f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar5 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar5);
  *param_1 = &PTR_FUN_143f7a448;
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  *param_1 = &PTR_FUN_144248428;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xcc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  if ((undefined2 *)param_1[0x18] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x18] = 0;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  FText::FText(param_1 + 0x1a);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
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
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_140a9f200(param_1 + 0x44);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if ((*(int *)((longlong)param_1 + 0x37c) < 0) && (*(int *)((longlong)param_1 + 0x37c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x6e,0);
  }
  if ((undefined2 *)param_1[0x6e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x6e] = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  local_48[0] = 0;
  local_48[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"Designer FIXME",0x1e);
  uVar5 = FText::FromString(local_38,local_48);
  FText::operator=(param_1 + 0x1a,uVar5);
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
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140a9f730 FUN_140a9f730 body=994 status=ok
// SIG undefined FUN_140a9f730(void)

undefined8 * FUN_140a9f730(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144249848;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  if ((undefined2 *)param_1[9] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((*(int *)((longlong)param_1 + 0x7c) < 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  if ((undefined2 *)param_1[0xe] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xe] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  plVar2 = param_1 + 0x14;
  param_1[0x10] = 0;
  plVar3 = param_1 + 0x1a;
  param_1[0x11] = 0;
  *plVar2 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x43480000;
  *(undefined4 *)(param_1 + 0x17) = 0x42480000;
  *plVar3 = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x43480000;
  *(undefined4 *)(param_1 + 0x1d) = 0x42480000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FText::FText(param_1 + 0x21);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)((longlong)param_1 + 0x144) < 0) && (*(int *)((longlong)param_1 + 0x144) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x27,0);
  }
  if ((undefined2 *)param_1[0x27] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x27] = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x40a00000;
  iVar4 = *(int *)(param_1 + 0x15);
  lVar7 = (longlong)iVar4;
  *(int *)(param_1 + 0x15) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xac) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  lVar5 = *plVar2;
  *(undefined4 *)(lVar5 + lVar7 * 0xc) = 2;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = 0x451c4000;
  *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = 0x43340000;
  iVar4 = *(int *)(param_1 + 0x15);
  lVar7 = (longlong)iVar4;
  *(int *)(param_1 + 0x15) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xac) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  lVar5 = *plVar2;
  *(undefined4 *)(lVar5 + lVar7 * 0xc) = 3;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = 0x459c4000;
  *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = 0x43340000;
  iVar4 = *(int *)(param_1 + 0x15);
  lVar7 = (longlong)iVar4;
  *(int *)(param_1 + 0x15) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xac) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  lVar5 = *plVar2;
  *(undefined4 *)(lVar5 + lVar7 * 0xc) = 4;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = 0x459c4000;
  *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = 0x43340000;
  *(undefined4 *)(param_1 + 0x18) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x40a00000;
  iVar4 = *(int *)(param_1 + 0x1b);
  lVar7 = (longlong)iVar4;
  *(int *)(param_1 + 0x1b) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xdc) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
  }
  lVar5 = *plVar3;
  *(undefined4 *)(lVar5 + lVar7 * 0xc) = 2;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = 0x46c35000;
  *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = 0x43340000;
  iVar4 = *(int *)(param_1 + 0x1b);
  lVar7 = (longlong)iVar4;
  *(int *)(param_1 + 0x1b) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xdc) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
  }
  lVar5 = *plVar3;
  *(undefined4 *)(lVar5 + lVar7 * 0xc) = 3;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = 0x47435000;
  *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = 0x43340000;
  iVar4 = *(int *)(param_1 + 0x1b);
  lVar7 = (longlong)iVar4;
  *(int *)(param_1 + 0x1b) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xdc) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
  }
  lVar5 = *plVar3;
  local_58[0] = 0;
  local_58[1] = 0x16;
  *(undefined4 *)(lVar5 + lVar7 * 0xc) = 4;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = 0x47435000;
  *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = 0x43340000;
  *(undefined4 *)(param_1 + 0x1e) = 0x40400000;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"Restricted by Dueling",0x2c);
  uVar6 = FText::FromString(local_48,local_58);
  FText::operator=(param_1 + 0x21,uVar6);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140a9fb20 FUN_140a9fb20 body=271 status=ok
// SIG undefined FUN_140a9fb20(void)

undefined8 * FUN_140a9fb20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  param_1[5] = &PTR_FUN_143fce298;
  puVar1 = param_1 + 6;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_14424a438;
  param_1[5] = &PTR_LAB_14424a6b0;
  *puVar1 = &PTR_LAB_14424a6d0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 140a9fc30 FUN_140a9fc30 body=587 status=ok
// SIG undefined FUN_140a9fc30(void)

undefined8 * FUN_140a9fc30(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__14424a998;
  param_1[5] = &PTR_LAB_14424ad90;
  param_1[0x2f] = &PTR_LAB_14424adc0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 2;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 2;
  *(undefined4 *)(param_1 + 0x46) = 0xbf800000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) & 0xfffffffb | 3;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0xb7] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x7fffffff;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(undefined2 *)((longlong)param_1 + 0x605) = 0;
  return param_1;
}



// FUNCTION 140a9fe80 FUN_140a9fe80 body=269 status=ok
// SIG undefined FUN_140a9fe80(void)

undefined8 * FUN_140a9fe80(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14424a718;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1b) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x22) = 0xbf800000;
  return param_1;
}



// FUNCTION 140a9ff90 FUN_140a9ff90 body=256 status=ok
// SIG undefined FUN_140a9ff90(void)

undefined8 * FUN_140a9ff90(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  FUN_14237eb90();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__14424add8;
  param_1[5] = &PTR_LAB_14424b6c0;
  param_1[0x5a] = &PTR_LAB_14424b6f0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  pvVar1 = ThreadLocalStoragePointer;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 2;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_146867b10) {
    _Init_thread_header(&DAT_146867b10);
    if (DAT_146867b10 == -1) {
      FName::FName(&DAT_146867b08,L"ElementalOverlap",1);
      _Init_thread_footer(&DAT_146867b10);
    }
  }
  FUN_142717130(param_1,DAT_146867b08);
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xef;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  FUN_1423974f0(param_1,1);
  *(undefined4 *)(param_1 + 0xde) = 0xff00ff00;
  return param_1;
}



// FUNCTION 140aa0090 FUN_140aa0090 body=118 status=ok
// SIG undefined FUN_140aa0090(void)

void FUN_140aa0090(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_140591060(plVar2 + -3);
      plVar2 = plVar2 + 0xc;
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



// FUNCTION 140aa0110 FUN_140aa0110 body=122 status=ok
// SIG undefined FUN_140aa0110(void)

void FUN_140aa0110(longlong param_1)

{
  FUN_140591060(param_1 + 0x5f0);
  FUN_140591060(param_1 + 0x5d8);
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x598);
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    *(undefined1 *)(param_1 + 0x4c0) = 0;
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39d0;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140aa0190 FUN_140aa0190 body=259 status=ok
// SIG undefined FUN_140aa0190(void)

void FUN_140aa0190(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined4 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  
  if (*(char *)(param_1 + 1) != '\0') {
    pbVar5 = (byte *)*param_1;
    if ((((*pbVar5 & 0xfb) != 0) && (pbVar5[0x1c] != 0)) && (*pbVar5 == 2)) {
      lVar6 = *(longlong *)(pbVar5 + 8);
      pbVar12 = (byte *)(lVar6 + 5);
      uVar7 = FCrc::MemCrc32(lVar6,*(undefined4 *)(pbVar5 + 0x10),0);
      uVar8 = (ushort)((uint)uVar7 >> 0x10) ^ (ushort)uVar7;
      *(char *)(lVar6 + 6) = (char)uVar8;
      *pbVar12 = (byte)(uVar8 >> 8);
      lVar6 = *(longlong *)(pbVar5 + 8);
      uVar11 = *(int *)(pbVar5 + 0x10) - 5;
      uVar1 = *(undefined1 *)(lVar6 + 2);
      uVar2 = *(undefined1 *)(lVar6 + 1);
      uVar3 = *(undefined1 *)(lVar6 + 3);
      bVar4 = *(byte *)(lVar6 + 4);
      FUN_140abad80(bVar4 & 0x1f,pbVar12,uVar11);
      uVar10 = (ulonglong)(uint)(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),bVar4) >> 5);
      if (uVar11 != 0) {
        uVar9 = (ulonglong)uVar11;
        do {
          uVar10 = (uVar10 * 0x10a860c1) % 0xfffffffb;
          *pbVar12 = *pbVar12 ^ (byte)uVar10;
          uVar9 = uVar9 - 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar9 != 0);
      }
      *pbVar5 = 4;
    }
  }
  return;
}



// FUNCTION 140aa02a0 FUN_140aa02a0 body=149 status=ok
// SIG undefined FUN_140aa02a0(void)

void FUN_140aa02a0(longlong param_1)

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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140aa0340 FUN_140aa0340 body=618 status=ok
// SIG undefined FUN_140aa0340(void)

void FUN_140aa0340(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x340);
  FUN_1409f57b0(param_1 + 0x330);
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x2c8);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(param_1 + 0x1f0);
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(param_1 + 0x1e0);
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
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x148);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x130);
  plVar5 = *(longlong **)(param_1 + 0x128);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x128);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_140aa02a0(param_1);
  return;
}



// FUNCTION 140aa05b0 FUN_140aa05b0 body=433 status=ok
// SIG undefined FUN_140aa05b0(void)

void FUN_140aa05b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    FMemory::Free();
  }
  FUN_140aa8230(param_1 + 0x3b0,0);
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x380) = 0;
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x338);
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2d0);
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x208);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1e0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1c8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140aa0770 FUN_140aa0770 body=685 status=ok
// SIG undefined FUN_140aa0770(void)

longlong * FUN_140aa0770(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140aa084c;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140aa084c:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140aa0901;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140aa0901:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      lVar6 = (longlong)(int)uStack_3c * 0x98 + *param_1;
      *(undefined4 *)(lVar6 + 0x50) = 0;
      if (*(longlong *)(lVar6 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar6 + 8);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
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



// FUNCTION 140aa0a20 FUN_140aa0a20 body=117 status=ok
// SIG undefined FUN_140aa0a20(void)

undefined1 * FUN_140aa0a20(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  *param_1 = *param_2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 140aa0aa0 FUN_140aa0aa0 body=324 status=ok
// SIG undefined FUN_140aa0aa0(void)

undefined8 * FUN_140aa0aa0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar1 = param_1 + 4;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  if (plVar1 != param_2 + 4) {
    iVar5 = *(int *)(param_1 + 5);
    if (iVar5 != 0) {
      plVar4 = (longlong *)(*plVar1 + 8);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_140a9c490(plVar1,param_2[4],*(undefined4 *)(param_2 + 5),
                  *(undefined4 *)((longlong)param_1 + 0x2c),0);
  }
  puVar2 = param_1 + 7;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  if (puVar2 != param_2 + 7) {
    iVar5 = *(int *)(param_2 + 8);
    pvVar3 = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar5);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar5 << 3);
    }
  }
  puVar2 = param_1 + 9;
  if (puVar2 != param_2 + 9) {
    iVar5 = *(int *)(param_2 + 10);
    pvVar3 = (void *)param_2[9];
    *(int *)(param_1 + 10) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x54) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar5);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar5 << 3);
    }
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  return param_1;
}



// FUNCTION 140aa0bf0 FUN_140aa0bf0 body=139 status=ok
// SIG undefined FUN_140aa0bf0(void)

ulonglong FUN_140aa0bf0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [24];
  
  if (param_2 != 0) {
    lVar3 = FUN_141437870();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = (longlong *)(uVar4 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (((char)in_RAX != '\0') &&
       (in_RAX = (longlong *)*param_1, *(longlong *)(param_2 + 0x4e8) == *in_RAX)) {
      puVar5 = (undefined8 *)FUN_142f5cd00(param_2,local_res10);
      uVar2 = *puVar5;
      *(undefined8 *)param_1[1] = uVar2;
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140aa0c80 FUN_140aa0c80 body=542 status=ok
// SIG undefined FUN_140aa0c80(void)

undefined1 * FUN_140aa0c80(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int local_res8 [2];
  longlong local_res10 [2];
  longlong *local_res20;
  
  if (*(int *)(*param_1 + 0x48) == 8) {
    puVar5 = (undefined1 *)param_1[1];
    *puVar5 = 1;
    return puVar5;
  }
  local_res10[0] = param_2;
  if ((*(char *)(param_2 + 0x150) != '\0') && (lVar6 = *(longlong *)(param_2 + 0x38), lVar6 != 0)) {
    lVar4 = FUN_142e49950();
    do {
      if (lVar6 == lVar4) {
        plVar3 = *(longlong **)(local_res10[0] + 0x38);
        if (plVar3 == (longlong *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = plVar3[0x1f];
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar6 = plVar3[0x1f];
          }
        }
        local_res10[0] = FUN_140aabd10(param_1[2],lVar6);
        if (local_res10[0] == 0) {
          return (undefined1 *)0x0;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  lVar6 = param_1[2];
  lVar4 = lVar6 + 0x3b0;
  FUN_140aa9d20(lVar4,local_res8,local_res10[0]);
  puVar5 = (undefined1 *)(longlong)local_res8[0];
  uVar7 = 0;
  if (local_res8[0] != -1) {
    lVar6 = *(longlong *)(lVar6 + 0x5b0);
    if (lVar6 == 0) {
      lVar6 = lVar4;
    }
    uVar7 = lVar6 + (longlong)puVar5 * 0x40;
  }
  uVar8 = uVar7 + 8;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  if (uVar8 == 0) {
    lVar6 = *param_1;
    iVar2 = *(int *)(lVar6 + 0x48);
    *(int *)(lVar6 + 0x48) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x4c) < iVar2 + 1) {
      TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar6,iVar2);
    }
    lVar4 = *(longlong *)(lVar6 + 0x40);
    if (*(longlong *)(lVar6 + 0x40) == 0) {
      lVar4 = lVar6;
    }
    *(longlong *)(lVar4 + (longlong)iVar2 * 8) = local_res10[0];
    local_res20 = local_res10;
    lVar6 = param_1[2];
    lVar4 = lVar6 + 0x3b0;
    FUN_140a9cbe0(lVar4,local_res8,&local_res20,0);
    lVar6 = *(longlong *)(lVar6 + 0x5b0);
    if (lVar6 == 0) {
      lVar6 = lVar4;
    }
    puVar9 = (undefined1 *)((longlong)local_res8[0] * 0x40 + 8 + lVar6);
    iVar2 = *(int *)(puVar9 + 0x28);
    *(int *)(puVar9 + 0x28) = iVar2 + 1;
    if (*(int *)(puVar9 + 0x2c) < iVar2 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (puVar9,iVar2);
    }
    puVar5 = *(undefined1 **)(puVar9 + 0x20);
    puVar10 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      puVar10 = puVar9;
    }
    *(undefined8 *)(puVar10 + (longlong)iVar2 * 8) = param_3;
  }
  else {
    uVar1 = *(uint *)(uVar8 + 0x28);
    if (uVar1 < 4) {
      *(uint *)(uVar8 + 0x28) = uVar1 + 1;
      if (*(int *)(uVar8 + 0x2c) < (int)(uVar1 + 1)) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (uVar8,uVar1);
      }
      lVar6 = *(longlong *)(uVar8 + 0x20);
      *(undefined8 *)
       (((ulonglong)(lVar6 != 0) - 1 & uVar8 | *(ulonglong *)(uVar8 + 0x20)) +
       (longlong)(int)uVar1 * 8) = param_3;
      return (undefined1 *)-lVar6;
    }
  }
  return puVar5;
}



// FUNCTION 140aa0ea0 FUN_140aa0ea0 body=338 status=ok
// SIG undefined FUN_140aa0ea0(void)

void FUN_140aa0ea0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  cVar5 = FWeakObjectPtr::IsValid();
  if (cVar5 == '\0') {
    return;
  }
  if (param_4 != 1) {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x10)) {
      return;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1 + 8,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x10) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar7 = FUN_1413f21d0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    lVar7 = FWeakObjectPtr::Get(param_1);
    plVar1 = (longlong *)(lVar7 + 0x138);
    plVar3 = (longlong *)*plVar1;
    iVar2 = *(int *)(lVar7 + 0x140);
    for (plVar8 = plVar3; plVar8 != plVar3 + iVar2; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar6) {
        if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(lVar7 + 0x140) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x144) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar6;
  }
  return;
}



// FUNCTION 140aa1000 FUN_140aa1000 body=472 status=ok
// SIG undefined FUN_140aa1000(void)

void FUN_140aa1000(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  longlong local_48;
  ulonglong local_40;
  void *local_38;
  ulonglong local_30;
  
  psVar5 = &DAT_143f3eda8;
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
  }
  else {
    psVar8 = (short *)*param_3;
  }
  local_40 = 0;
  local_48 = 0;
  lVar3 = -1;
  if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar8[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar8,(longlong)(int)uVar6 * 2);
  }
  cVar2 = FUN_1416b40a0(*(undefined8 *)*param_1,&local_48,&local_38);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    if (*(int *)(param_4 + 1) != 0) {
      psVar5 = (short *)*param_4;
    }
    local_48 = 0;
    local_40 = 0;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
      do {
        lVar3 = lVar3 + 1;
      } while (psVar5[lVar3] != 0);
      uVar6 = (int)lVar3 + 1;
      local_40 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)(int)uVar6 * 2);
    }
    FUN_1416b3f10(*(undefined8 *)*param_1,&local_48,param_2);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  else {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Src = local_38;
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
    *puVar4 = 0;
    lVar3 = (longlong)(int)local_30;
    *(int *)(puVar4 + 1) = (int)local_30;
    if ((int)local_30 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,local_30 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,lVar3 * 2);
    }
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140aa11e0 FUN_140aa11e0 body=372 status=ok
// SIG undefined FUN_140aa11e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_140aa11e0(undefined8 param_1,void *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong _Size;
  undefined1 *_Dst;
  byte *pbVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar8 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Size = (ulonglong)param_3;
  uVar7 = param_3 - 5;
  if (1 < (int)uVar7) {
    if (param_3 == 0) {
      _Dst = (undefined1 *)0x0;
      puVar8 = auStack_58;
    }
    else {
      uVar6 = (ulonglong)(param_3 + 0xf) + 0xf;
      if (uVar6 <= param_3 + 0xf) {
        uVar6 = 0xffffffffffffff0;
      }
      puVar8 = auStack_58 + -(uVar6 & 0xfffffffffffffff0);
      _Dst = auStack_30 + -(uVar6 & 0xfffffffffffffff0);
    }
    *(undefined8 *)(puVar8 + -8) = 0x140aa1264;
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size);
    bVar1 = *(byte *)((longlong)param_2 + 4);
    uVar6 = (ulonglong)
            (uint)(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((longlong)param_2 + 1),
                                              *(undefined1 *)((longlong)param_2 + 2)),
                                     *(undefined1 *)((longlong)param_2 + 3)),bVar1) >> 5);
    if (uVar7 != 0) {
      uVar10 = (ulonglong)uVar7;
      pbVar9 = _Dst + 5;
      do {
        uVar6 = (uVar6 * 0x10a860c1) % 0xfffffffb;
        *pbVar9 = *pbVar9 ^ (byte)uVar6;
        uVar10 = uVar10 - 1;
        pbVar9 = pbVar9 + 1;
      } while (uVar10 != 0);
    }
    *(undefined8 *)(puVar8 + -8) = 0x140aa12eb;
    FUN_140abacb0(bVar1 & 0x1f,_Dst + 5,uVar7);
    uVar2 = _Dst[5];
    uVar3 = _Dst[6];
    *(undefined2 *)(_Dst + 5) = 0xffff;
    *(undefined8 *)(puVar8 + -8) = 0x140aa130d;
    uVar4 = FCrc::MemCrc32(_Dst,_Size,0);
    if (CONCAT11(uVar2,uVar3) == (ushort)((ushort)((uint)uVar4 >> 0x10) ^ (ushort)uVar4)) {
      *(undefined8 *)(puVar8 + -8) = 0x140aa1328;
      _guard_xfg_dispatch_icall_nop(param_2,_Dst,_Size);
      uVar5 = 1;
      goto LAB_140aa132e;
    }
  }
  uVar5 = 0;
LAB_140aa132e:
  *(undefined8 *)(puVar8 + -8) = 0x140aa133a;
  return uVar5;
}



// FUNCTION 140aa1360 FUN_140aa1360 body=235 status=ok
// SIG undefined FUN_140aa1360(void)

void FUN_140aa1360(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (((cVar2 != '\0') && (lVar1 != 0)) && (*(int *)(lVar1 + 0x198) != *(int *)(lVar1 + 0x1c4))) {
    lVar5 = *(longlong *)(lVar1 + 0x1d0);
    if (*(longlong *)(lVar1 + 0x1d0) == 0) {
      lVar5 = lVar1 + 0x1c8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(lVar1 + 0x1d8) - 1U &
                             (longlong)*(int *)(param_1 + 8)) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(lVar1 + 400);
      while (lVar5 = (longlong)iVar3, *(int *)(lVar1 + lVar5 * 0x18) != *(int *)(param_1 + 8)) {
        iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
        if (iVar3 == -1) {
          return;
        }
      }
      if (((iVar3 != -1) && (lVar1 = lVar1 + lVar5 * 0x18, lVar1 != 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        uVar4 = FWeakObjectPtr::Get(param_1);
        FUN_14145e090(uVar4,lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140aa1450 FUN_140aa1450 body=659 status=ok
// SIG undefined FUN_140aa1450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aa1450(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [32];
  
  lVar7 = FUN_14178ca30(param_2);
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 0x4c0) != '\0') && ((*(byte *)(lVar7 + 0x24c) & 0x40) == 0)) {
    pfVar1 = (float *)(param_2 + 0x280);
    fVar14 = *(float *)(lVar2 + 0x4bc);
    local_30 = (*(float *)(lVar2 + 0x4b8) - *(float *)(lVar2 + 0x48c)) / *(float *)(param_1 + 1);
    local_38 = *(undefined8 *)(lVar7 + 0x1ec);
    if (((*(float *)(param_2 + 0x1f8) != *pfVar1) ||
        (*(float *)(param_2 + 0x1fc) != *(float *)(param_2 + 0x284))) ||
       (*(float *)(param_2 + 0x200) != *(float *)(param_2 + 0x288))) {
      local_48 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x1f8);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = *(undefined1 (*) [12])(param_2 + 0x1f8);
      fVar3 = (float)DAT_1468674e0;
      fVar4 = DAT_1468674e0._4_4_;
      fVar5 = DAT_1468674e0._8_4_;
      auVar9 = divps(auVar9,_DAT_1468674e0);
      fVar11 = (float)local_48 - (float)(int)auVar9._0_4_ * fVar3;
      fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar9._4_4_ * fVar4;
      fVar13 = *(float *)(param_2 + 0x200) - (float)(int)auVar9._8_4_ * fVar5;
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam00000001468674d8 < fVar13) ^
               (uint)fVar13;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam00000001468674d4 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_1468674d0 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(param_2 + 0x288) = uVar10;
      puVar8 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
      uVar6 = puVar8[1];
      *(undefined8 *)(param_2 + 0x270) = *puVar8;
      *(undefined8 *)(param_2 + 0x278) = uVar6;
    }
    local_48 = *(undefined8 *)(param_2 + 0x270);
    uStack_40 = *(undefined8 *)(param_2 + 0x278);
    uVar15 = 0;
    FUN_142397be0(param_2,&local_38,&local_48,0,0,0);
    local_38 = *(undefined8 *)(lVar7 + 0x1f8);
    local_30 = *(float *)(lVar7 + 0x200);
    FUN_142398470(param_2,&local_38,0,0,uVar15 & 0xffffffffffffff00);
    fVar14 = ABS(fVar14 * *(float *)(param_1 + 1));
    if (fVar14 <= 1.0) {
      fVar14 = 1.0;
    }
    *(float *)(param_2 + 0x70c) = fVar14 * 1.3333334 + 6.6666665;
    *(float *)(param_2 + 0x710) =
         *(float *)(*param_1 + 0x51c) * *(float *)(*param_1 + 0x514) * *(float *)(lVar7 + 0x710);
    *(float *)(param_2 + 0x714) =
         *(float *)(*param_1 + 0x518) * *(float *)(*param_1 + 0x514) * *(float *)(lVar7 + 0x714);
    FUN_142397540(param_2,0,1);
    FUN_1423424e0(param_2);
    return;
  }
  FUN_142397540(param_2,1);
  return;
}



// FUNCTION 140aa16f0 FUN_140aa16f0 body=1407 status=ok
// SIG undefined FUN_140aa16f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140aa16f0(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  lVar2 = *param_1;
  uVar9 = 0;
  plVar8 = (longlong *)0x0;
  lVar5 = *(longlong *)(lVar2 + 0x248);
  fVar12 = 1.0;
  if (lVar5 != 0) {
    plVar7 = *(longlong **)(lVar5 + 0x90);
    plVar4 = plVar7 + (longlong)*(int *)(lVar5 + 0x98) * 3;
    for (; plVar7 != plVar4; plVar7 = plVar7 + 3) {
      if (*plVar7 == param_2) {
        lVar5 = *(longlong *)(lVar2 + 0x188);
        if (plVar7[1] != 0) {
          lVar5 = plVar7[1];
        }
        if (param_4 == '\0') {
          fVar11 = *(float *)(plVar7 + 2);
        }
        else {
          fVar11 = *(float *)((longlong)plVar7 + 0x14);
        }
        if ((lVar5 != 0) && (*(longlong *)(param_1[1] + 8) == lVar5)) {
          plVar4 = *(longlong **)(lVar2 + 400);
          plVar7 = plVar4 + (longlong)*(int *)(lVar2 + 0x198) * 0x1f;
          goto joined_r0x000140aa17d1;
        }
        break;
      }
    }
  }
LAB_140aa1864:
  lVar2 = *(longlong *)(param_1[1] + 8);
  if (lVar2 == 0) {
    return uVar9;
  }
  plVar7 = *(longlong **)(lVar2 + 0x90);
  lVar5 = *param_1;
  plVar4 = plVar7 + (longlong)*(int *)(lVar2 + 0x98) * 3;
  while( true ) {
    if (plVar7 == plVar4) {
      return uVar9;
    }
    if (*plVar7 == param_2) break;
    plVar7 = plVar7 + 3;
  }
  lVar6 = *(longlong *)(lVar5 + 0x188);
  if (plVar7[1] != 0) {
    lVar6 = plVar7[1];
  }
  if (param_4 == '\0') {
    fVar11 = *(float *)(plVar7 + 2);
  }
  else {
    fVar11 = *(float *)((longlong)plVar7 + 0x14);
  }
  if (lVar6 == 0) {
    return uVar9;
  }
  if (lVar2 == lVar6) {
    return uVar9;
  }
  plVar4 = *(longlong **)(lVar5 + 400);
  plVar7 = plVar4 + (longlong)*(int *)(lVar5 + 0x198) * 0x1f;
  while( true ) {
    if (plVar4 == plVar7) {
      return uVar9;
    }
    if (*plVar4 == lVar6) break;
    plVar4 = plVar4 + 0x1f;
  }
  if (plVar4 == (longlong *)0x0) {
    return uVar9;
  }
  if (*(longlong *)(lVar5 + 0x248) == 0) {
    *(longlong *)(lVar5 + 0x248) = lVar6;
    *(undefined4 *)(*param_1 + 0x264) = 0;
    lVar5 = *param_1;
  }
  if (*(longlong *)(lVar5 + 0x248) != lVar6) {
    return uVar9;
  }
  if (param_4 == '\0') {
    fVar10 = *(float *)(plVar4 + 1);
  }
  else {
    fVar10 = *(float *)((longlong)plVar4 + 0xc);
  }
  if (fVar10 * fVar11 <= 0.0) {
    fVar12 = 1.0;
  }
  else {
    fVar12 = (fVar12 * *(float *)param_1[2]) / (fVar10 * fVar11);
  }
  if ((*(longlong *)(lVar5 + 0x250) == 0) && (param_3 != (longlong *)0x0)) {
    uVar3 = param_3[4];
    plVar4 = plVar8;
    if (uVar3 == 0) {
      plVar4 = param_3;
    }
    if ((undefined8 *)(uVar3 | (ulonglong)plVar4) !=
        (undefined8 *)(((ulonglong)plVar4 | uVar3) + (longlong)(int)param_3[5] * 8)) {
      *(undefined8 *)(lVar5 + 0x250) = *(undefined8 *)(uVar3 | (ulonglong)plVar4);
      lVar2 = *param_1;
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x118) + 0x168);
      if (lVar5 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar5 + 0x220);
        local_40 = *(float *)(lVar5 + 0x228);
      }
      fVar11 = local_40;
      uVar9 = local_48;
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x250) + 0x118) + 0x168);
      if (lVar5 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar5 + 0x220);
        local_40 = *(float *)(lVar5 + 0x228);
      }
      local_58 = (float)uVar9;
      fStack_54 = (float)((ulonglong)uVar9 >> 0x20);
      *(ulonglong *)(lVar2 + 600) =
           CONCAT44(((float)((ulonglong)local_48 >> 0x20) - fStack_54) * 0.5 + fStack_54,
                    ((float)local_48 - local_58) * 0.5 + local_58);
      *(float *)(lVar2 + 0x260) = (local_40 - fVar11) * 0.5 + fVar11;
      lVar5 = *param_1;
    }
  }
  *(float *)(lVar5 + 0x264) = fVar12 + *(float *)(lVar5 + 0x264);
  pfVar1 = (float *)(*param_1 + 0x264);
  if (1.0 < *pfVar1 || *pfVar1 == 1.0) {
    *(undefined8 *)(*param_1 + 0x248) = 0;
    *(undefined8 *)(*param_1 + 0x250) = 0;
    *(undefined4 *)(*param_1 + 0x264) = 0;
    *(longlong *)(param_1[1] + 8) = lVar6;
    if (param_4 == '\0') {
      *(undefined4 *)(param_1[1] + 0x10) = 0xbf800000;
      *(undefined8 *)(param_1[1] + 0x18) = 0;
      *(undefined4 *)(param_1[1] + 0x20) = 0;
      if (param_3 != (longlong *)0x0) {
        plVar4 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar4 = param_3;
        }
        plVar7 = (longlong *)((longlong)(int)param_3[5] & 0x1fffffffffffffff);
        if (plVar4 + (int)param_3[5] < plVar4) {
          plVar7 = plVar8;
        }
        if (plVar7 != (longlong *)0x0) {
          do {
            lVar2 = *plVar4;
            if ((*(longlong *)(lVar2 + 0x228) != 0) &&
               ((lVar5 = param_1[1], *(longlong *)(lVar5 + 0x18) == 0 ||
                (*(float *)(lVar5 + 0x20) < *(float *)(lVar2 + 0x230))))) {
              *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar2 + 0x228);
              *(undefined4 *)(param_1[1] + 0x20) = *(undefined4 *)(lVar2 + 0x230);
            }
            plVar4 = plVar4 + 1;
            plVar8 = (longlong *)((longlong)plVar8 + 1);
          } while (plVar8 != plVar7);
        }
      }
    }
    else {
      if (*(char *)(lVar6 + 0x30) != '\x02') {
        plVar8 = *(longlong **)(*param_1 + 400);
        plVar4 = plVar8 + (longlong)*(int *)(*param_1 + 0x198) * 0x1f;
        for (; plVar8 != plVar4; plVar8 = plVar8 + 0x1f) {
          if (*plVar8 == lVar6) {
            if (plVar8 != (longlong *)0x0) {
              fVar12 = *(float *)(plVar8 + 2);
              if (fVar12 < 0.0) {
                fVar12 = *(float *)(lVar6 + 0x8c);
              }
              goto LAB_140aa1b61;
            }
            break;
          }
        }
      }
      fVar12 = -1.0;
LAB_140aa1b61:
      *(float *)(param_1[1] + 0x10) = fVar12;
      *(undefined8 *)(param_1[1] + 0x18) = *(undefined8 *)(*param_1 + 0x3a0);
      *(undefined4 *)(param_1[1] + 0x20) = *(undefined4 *)(*param_1 + 0x3a8);
    }
  }
  return 1;
joined_r0x000140aa17d1:
  if (plVar4 == plVar7) goto LAB_140aa1864;
  if (*plVar4 == lVar5) {
    if (plVar4 != (longlong *)0x0) {
      if (param_4 == '\0') {
        fVar10 = *(float *)(plVar4 + 1);
      }
      else {
        fVar10 = *(float *)((longlong)plVar4 + 0xc);
      }
      if (fVar10 * fVar11 <= 0.0) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = *(float *)param_1[2] / (fVar10 * fVar11);
      }
      *(float *)(lVar2 + 0x264) = *(float *)(lVar2 + 0x264) - fVar11;
      if (*(float *)(*param_1 + 0x264) <= 0.0) {
        *(undefined8 *)(*param_1 + 0x248) = 0;
        fVar12 = 0.0;
        *(undefined8 *)(*param_1 + 0x250) = 0;
        *(undefined4 *)(*param_1 + 0x264) = 0;
      }
      uVar9 = 1;
      if (fVar12 <= 0.0) {
        return 1;
      }
    }
    goto LAB_140aa1864;
  }
  plVar4 = plVar4 + 0x1f;
  goto joined_r0x000140aa17d1;
}



// FUNCTION 140aa1d50 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieScenePropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140aa1da0 FUN_140aa1da0 body=73 status=ok
// SIG undefined FUN_140aa1da0(void)

longlong FUN_140aa1da0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 140aa1df0 FUN_140aa1df0 body=166 status=ok
// SIG undefined FUN_140aa1df0(void)

longlong FUN_140aa1df0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(param_1 + 0x508);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = 2;
  do {
    plVar1 = plVar2 + -4;
    plVar2 = plVar2 + -10;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (plVar2);
  } while (lVar3 != 0);
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x520);
  }
  return param_1;
}



// FUNCTION 140aa1ea0 FUN_140aa1ea0 body=73 status=ok
// SIG undefined FUN_140aa1ea0(void)

longlong FUN_140aa1ea0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5a0);
  }
  return param_1;
}



// FUNCTION 140aa1ef0 FUN_140aa1ef0 body=300 status=ok
// SIG undefined FUN_140aa1ef0(void)

longlong FUN_140aa1ef0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x510) = 0;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  FUN_140aa8050(param_1 + 0x4c8,0);
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x468);
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fe0658;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x590);
  }
  return param_1;
}



// FUNCTION 140aa2020 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRenderAssetStreamingManager::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aa0110();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x618);
  }
  return param_1;
}



// FUNCTION 140aa2060 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 APlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aa0110();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x628);
  }
  return param_1;
}



// FUNCTION 140aa20a0 FUN_140aa20a0 body=43 status=ok
// SIG undefined FUN_140aa20a0(void)

undefined8 * FUN_140aa20a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1442486f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140aa20d0 FUN_140aa20d0 body=43 status=ok
// SIG undefined FUN_140aa20d0(void)

undefined8 * FUN_140aa20d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1442486f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140aa2100 FUN_140aa2100 body=72 status=ok
// SIG undefined FUN_140aa2100(void)

undefined8 * FUN_140aa2100(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1442486f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140aa2150 FUN_140aa2150 body=72 status=ok
// SIG undefined FUN_140aa2150(void)

undefined8 * FUN_140aa2150(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1442486f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140aa21a0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_7c94852c1dd1aa4ea49f18059fc21906>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1442486f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140aa2200 FUN_140aa2200 body=43 status=ok
// SIG undefined FUN_140aa2200(void)

undefined8 * FUN_140aa2200(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1442486c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140aa2230 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEvaluationTemplateGenerator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR_FUN_1442486c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140aa22a0 FUN_140aa22a0 body=148 status=ok
// SIG undefined FUN_140aa22a0(void)

undefined8 * FUN_140aa22a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_1442486c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140aa2340 FUN_140aa2340 body=52 status=ok
// SIG undefined FUN_140aa2340(void)

undefined8 FUN_140aa2340(undefined8 param_1,ulonglong param_2)

{
  FUN_140aa0340();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 140aa2380 FUN_140aa2380 body=272 status=ok
// SIG undefined FUN_140aa2380(void)

longlong FUN_140aa2380(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  iVar5 = *(int *)(param_1 + 0x100);
  plVar4 = *(longlong **)(param_1 + 0xf8);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0xf8);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 140aa2490 FUN_140aa2490 body=126 status=ok
// SIG undefined FUN_140aa2490(void)

longlong FUN_140aa2490(longlong param_1,ulonglong param_2)

{
  FUN_140aa0090(param_1 + 0xa8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x80);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x68);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_1404bf750(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fce298;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140aa2510 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aa05b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 140aa2550 FUN_140aa2550 body=73 status=ok
// SIG undefined FUN_140aa2550(void)

longlong FUN_140aa2550(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140aa25a0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVehicleAnimationInstanceProxy::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 140aa2600 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FUN_140ac2e30();
  return cVar1 != '\0';
}



// FUNCTION 140aa2620 FUN_140aa2620 body=202 status=ok
// SIG undefined FUN_140aa2620(void)

void FUN_140aa2620(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 0x518);
  plVar5 = (longlong *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x520);
  plVar2 = plVar5 + iVar3;
  while( true ) {
    if (plVar5 == plVar2) {
      *(int *)(param_1 + 0x520) = iVar3 + 1;
      if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong *)((longlong)iVar3 * 8 + *plVar1) = param_2;
      if ((((*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x4fc)) &&
           (*(int *)(param_1 + 0x520) == 0)) && (*(int *)(param_1 + 0x530) == 0)) &&
         ((*(int *)(param_1 + 0x550) == 0 && (*(int *)(param_1 + 0x570) == 0)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4 != (*(char *)(param_1 + 0x37) != '\0')) {
        FUN_14288e3d0(param_1 + 0x28);
      }
      return;
    }
    if (*plVar5 == param_2) break;
    plVar5 = plVar5 + 1;
  }
  return;
}



// FUNCTION 140aa26f0 FUN_140aa26f0 body=202 status=ok
// SIG undefined FUN_140aa26f0(void)

void FUN_140aa26f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 0x528);
  plVar5 = (longlong *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x530);
  plVar2 = plVar5 + iVar3;
  while( true ) {
    if (plVar5 == plVar2) {
      *(int *)(param_1 + 0x530) = iVar3 + 1;
      if (*(int *)(param_1 + 0x534) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong *)((longlong)iVar3 * 8 + *plVar1) = param_2;
      if ((((*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x4fc)) &&
           (*(int *)(param_1 + 0x520) == 0)) && (*(int *)(param_1 + 0x530) == 0)) &&
         ((*(int *)(param_1 + 0x550) == 0 && (*(int *)(param_1 + 0x570) == 0)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4 != (*(char *)(param_1 + 0x37) != '\0')) {
        FUN_14288e3d0(param_1 + 0x28);
      }
      return;
    }
    if (*plVar5 == param_2) break;
    plVar5 = plVar5 + 1;
  }
  return;
}



// FUNCTION 140aa27c0 FUN_140aa27c0 body=172 status=ok
// SIG undefined FUN_140aa27c0(void)

void FUN_140aa27c0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x30) != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
        (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2d8) == param_2)) && (param_3 < 0)) {
      FUN_140aa7c70(param_1,-param_3);
    }
    lVar2 = FUN_140aae0c0(param_1,param_2);
    iVar1 = *(int *)(lVar2 + 8);
    param_3 = iVar1 + param_3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    *(int *)(lVar2 + 8) = param_3;
    if (((param_3 != iVar1) && (*(longlong *)(param_1 + 0x10) != 0)) &&
       (*(char *)(param_1 + 0x18) == '\0')) {
      FUN_140d032e0(*(longlong *)(param_1 + 0x10),param_1,lVar2);
    }
  }
  return;
}



// FUNCTION 140aa2870 FUN_140aa2870 body=284 status=ok
// SIG undefined FUN_140aa2870(void)

void FUN_140aa2870(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10 [2];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FWeakObjectPtr::operator=(&local_28,param_3);
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2a08,local_res20,local_res10[0]);
    if ((local_res20[0] == -1) ||
       (lVar5 = (longlong)local_res20[0] * 0x30 + *(longlong *)(param_1 + 0x2a08), lVar5 == 0)) {
      local_20 = local_res10;
      FUN_140a9c8e0(param_1 + 0x2a08,local_res20,&local_20,0);
      lVar5 = (longlong)local_res20[0] * 0x30 + *(longlong *)(param_1 + 0x2a08);
    }
    lVar3 = *(longlong *)(lVar5 + 8);
    iVar2 = *(int *)(lVar5 + 0x10);
    for (lVar6 = lVar3; lVar6 != lVar3 + (longlong)iVar2 * 8; lVar6 = lVar6 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_28);
      if (cVar4 != '\0') {
        if ((int)(lVar6 - lVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x10) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x14) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar5 + 8),iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 8) + (longlong)iVar2 * 8);
    *puVar1 = local_28;
    puVar1[1] = local_24;
  }
  return;
}



// FUNCTION 140aa2990 FUN_140aa2990 body=576 status=ok
// SIG undefined FUN_140aa2990(void)

ulonglong FUN_140aa2990(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined1 local_res18 [16];
  undefined1 local_48 [16];
  
  uVar8 = FUN_140aac4b0();
  if (uVar8 != 0) {
    return uVar8 & 0xffffffffffffff00;
  }
  lVar9 = FWeakObjectPtr::Get(param_2);
  if (lVar9 != 0) {
    lVar10 = *(longlong *)(lVar9 + 0x50);
    while (lVar6 = lVar10, lVar6 != 0) {
      lVar9 = lVar6;
      lVar10 = *(longlong *)(lVar6 + 0x50);
    }
  }
  plVar14 = *(longlong **)(param_1 + 8);
  plVar15 = plVar14 + (longlong)*(int *)(param_1 + 0x10) * 2;
  do {
    if (plVar14 == plVar15) {
      plVar14 = (longlong *)0x0;
LAB_140aa2a32:
      uVar8 = 0;
LAB_140aa2a35:
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        lVar9 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      return uVar8;
    }
    lVar10 = FWeakObjectPtr::Get(*plVar14 + 8);
    if (lVar10 == lVar9) {
      lVar9 = *plVar14;
      plVar14 = (longlong *)plVar14[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if (lVar9 == 0) goto LAB_140aa2a32;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      iVar2 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar2 + 1;
      if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar2);
      }
      puVar16 = (undefined4 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x18));
      *puVar16 = *param_2;
      puVar16[1] = param_2[1];
      puVar16[2] = param_2[2];
      *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(param_2 + 4);
      lVar10 = *(longlong *)(param_2 + 6);
      *(longlong *)(puVar16 + 6) = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      puVar16[8] = param_2[8];
      *(undefined1 *)(puVar16 + 9) = 0;
      *(longlong *)(puVar16 + 10) = lVar9;
      *(longlong **)(puVar16 + 0xc) = plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      *(undefined8 *)(puVar16 + 0xe) = 0;
      *(undefined8 *)(puVar16 + 0x10) = 0;
      puVar11 = (undefined4 *)FGuid::NewGuid(local_48);
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      puVar16[0xe] = *puVar11;
      puVar16[0xf] = uVar3;
      puVar16[0x10] = uVar4;
      puVar16[0x11] = uVar5;
      puVar12 = (undefined8 *)FDateTime::Now(local_res18);
      *(undefined8 *)(puVar16 + 0x12) = *puVar12;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        lVar9 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      cVar7 = (**(code **)(**(longlong **)(puVar16 + 4) + 0x10))();
      if ((((cVar7 == '\x02') &&
           (uVar13 = FWeakObjectPtr::Get(param_1), *(char *)(puVar16 + 9) == '\0')) &&
          (cVar7 = (**(code **)(**(longlong **)(puVar16 + 4) + 0x10))(), cVar7 == '\x02')) &&
         (cVar7 = (**(code **)(**(longlong **)(puVar16 + 4) + 0x48))
                            (*(longlong **)(puVar16 + 4),uVar13), cVar7 != '\0')) {
        *(undefined1 *)(puVar16 + 9) = 1;
      }
      uVar8 = 1;
      goto LAB_140aa2a35;
    }
    plVar14 = plVar14 + 2;
  } while( true );
}



// FUNCTION 140aa2bd0 FUN_140aa2bd0 body=156 status=ok
// SIG undefined FUN_140aa2bd0(void)

longlong FUN_140aa2bd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 8;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar3 = lVar1;
    }
    if (*(int *)(lVar3 + -8 + (longlong)*(int *)(param_1 + 0x20) * 0x10) < 1) goto LAB_140aa2c45;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
    TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
              (lVar1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = lVar1;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = 0;
  *(undefined8 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 0;
LAB_140aa2c45:
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = lVar1;
  }
  return (longlong)(*(int *)(param_1 + 0x20) + -1) * 0x10 + lVar3;
}



// FUNCTION 140aa2c70 FUN_140aa2c70 body=518 status=ok
// SIG undefined FUN_140aa2c70(void)

int * FUN_140aa2c70(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar8 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar8 + 1;
    if (*(int *)(param_1 + 0x20c) < iVar8 + 1) {
      FUN_1405f0aa0(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x220);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x220) = iVar4;
    if (*(int *)(param_1 + 0x224) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      iVar5 = 1;
      if (1 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x224) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x220);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x224) = iVar5 << 5;
      TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x210,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar7 = param_1 + 0x210;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x228);
    lVar7 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x40);
    iVar4 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x228) = iVar2;
    *(int *)(param_1 + 0x22c) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x40) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    lVar7 = param_1 + 0x210;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x40;
  return param_2;
}



// FUNCTION 140aa2e80 AddUninitialized body=214 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + (longlong)iVar4 * 0x48;
  return param_2;
}



// FUNCTION 140aa2f60 FUN_140aa2f60 body=1388 status=ok
// SIG undefined FUN_140aa2f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aa2f60(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined1 *local_4a0;
  undefined8 *local_498;
  undefined8 *local_490;
  undefined8 *local_488;
  undefined8 *local_480;
  undefined4 local_478;
  undefined4 local_470;
  undefined4 local_468;
  undefined4 local_460;
  undefined4 local_458;
  uint local_448 [2];
  longlong *local_440;
  int local_438 [2];
  longlong *local_430;
  longlong local_428;
  uint local_420;
  uint uStack_41c;
  uint *puStack_418;
  undefined4 local_410;
  int iStack_40c;
  uint uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  longlong *local_3e8;
  undefined8 uStack_3e0;
  uint *local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  longlong *local_3b8;
  undefined2 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong *local_368;
  undefined8 uStack_360;
  uint *puStack_358;
  undefined1 auStack_350 [16];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [12];
  undefined4 local_2dc;
  undefined1 local_258 [56];
  longlong local_220;
  uint local_130;
  undefined1 local_12c;
  undefined2 local_128;
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  longlong local_b8;
  undefined1 local_a4;
  undefined1 local_9c;
  undefined1 local_90;
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  plVar17 = (longlong *)param_2[0xe0];
  if ((longlong *)param_2[0xe0] == (longlong *)0x0) {
    plVar17 = param_2;
  }
  plVar18 = plVar17 + (longlong)(int)param_2[0xe1] * 7;
  uVar11 = local_448[0];
  local_430 = plVar18;
  local_428 = param_1;
  if (plVar17 != plVar18) {
    do {
      if (((*(byte *)(*plVar17 + 0x94) & 0x18) == 0x10) && ((*(byte *)(*plVar17 + 0x94) & 2) == 0))
      {
        local_440 = plVar17;
        puVar6 = (undefined8 *)FUN_142d979c0(&local_420);
        lVar9 = *plVar17;
        local_338 = *puVar6;
        uStack_330 = puVar6[1];
        lVar12 = *(longlong *)(lVar9 + 0x168);
        local_328 = puVar6[2];
        uStack_320 = puVar6[3];
        local_398 = _DAT_1468b5d90;
        local_388 = _DAT_1468b5d90;
        local_390 = DAT_1468b5d98;
        local_380 = DAT_1468b5d98;
        if (lVar12 == 0) {
          local_3a0 = DAT_1468b5d98;
          puVar6 = &local_3a8;
          local_3a8 = _DAT_1468b5d90;
        }
        else {
          puVar6 = (undefined8 *)&local_400;
          local_400 = *(undefined4 *)(lVar12 + 0x220);
          local_3f8 = *(undefined4 *)(lVar12 + 0x228);
          uStack_3fc = *(undefined4 *)(lVar12 + 0x224);
        }
        local_378 = *puVar6;
        local_370 = *(undefined4 *)(puVar6 + 1);
        _guard_xfg_dispatch_icall_nop(local_2e8,0,0x90);
        local_468 = (undefined4)plVar17[4];
        local_480 = &local_338;
        local_470 = *(undefined4 *)((longlong)plVar17 + 0x1c);
        local_458 = 0x3f800000;
        local_460 = 0x3f800000;
        local_478 = (undefined4)plVar17[3];
        local_488 = &local_398;
        local_490 = &local_388;
        local_498 = &local_378;
        local_4a0 = local_2e8;
        local_4a8 = *(undefined8 *)(param_1 + 0x4c0);
        local_2dc = 0x3f800000;
        FUN_140a8f5e0(local_258,param_1,lVar9,plVar17[1]);
        local_220 = plVar17[5];
        local_128 = 0x101;
        if ((char)plVar17[6] != '\0') {
          uVar11 = uVar11 | 7;
          local_12c = 1;
          local_130 = uVar11;
        }
        uVar7 = thunk_FUN_142d54de0();
        FUN_140a82f00(local_258,*(undefined4 *)((longlong)plVar17 + 0x14),1,uVar7);
        TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x4c8,local_438,*plVar17);
        if (local_438[0] == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)local_438[0] * 0x68 + *(longlong *)(param_1 + 0x4c8);
        }
        plVar10 = (longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
          plVar10 = (longlong *)0x0;
        }
        if (plVar10 != (longlong *)0x0) {
          FUN_140aa9f10(plVar10,local_448,plVar17 + 1);
          if (local_448[0] == 0xffffffff) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)(int)local_448[0] * 0x98 + *plVar10;
          }
          plVar10 = (longlong *)0x0;
          plVar16 = (longlong *)(lVar9 + 8);
          if (lVar9 == 0) {
            plVar16 = plVar10;
          }
          if (plVar16 != (longlong *)0x0) {
            iVar8 = (int)plVar16[5];
            puStack_418 = (uint *)(plVar16 + 2);
            uStack_41c = 1;
            local_420 = 0;
            iStack_40c = 0;
            uStack_408 = 0;
            if (iVar8 != 0) {
              puVar15 = (uint *)plVar16[4];
              if ((uint *)plVar16[4] == (uint *)0x0) {
                puVar15 = puStack_418;
              }
              uVar1 = *puVar15;
              plVar14 = plVar10;
              while (uVar1 == 0) {
                iVar5 = (int)plVar10;
                uStack_408 = (int)plVar14 + 0x20;
                plVar14 = (longlong *)(ulonglong)uStack_408;
                local_420 = iVar5 + 1;
                plVar10 = (longlong *)(ulonglong)local_420;
                if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5)
                goto LAB_140aa32ae;
                uVar1 = puVar15[(longlong)iVar5 + 1];
              }
              uStack_41c = -uVar1 & uVar1;
              iVar5 = 0x1f;
              if (uStack_41c != 0) {
                for (; uStack_41c >> iVar5 == 0; iVar5 = iVar5 + -1) {
                }
              }
              if (uStack_41c == 0) {
                iVar5 = 0x20;
              }
              else {
                iVar5 = 0x1f - iVar5;
              }
              iStack_40c = ((int)plVar14 - iVar5) + 0x1f;
              if (iVar8 < iStack_40c) {
LAB_140aa32ae:
                iStack_40c = iVar8;
              }
            }
            local_410 = 0xffffffff;
            uStack_3d0 = CONCAT44(iStack_40c,0xffffffff);
            auStack_350._8_4_ = uStack_408;
            auStack_350._0_8_ = uStack_3d0;
            auStack_350._12_4_ = uStack_404;
            uStack_3e0 = CONCAT44(uStack_41c,local_420);
            local_3b0 = 0;
            local_2f8._8_4_ = SUB84(plVar16,0);
            local_2f8._12_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
            local_3c8._8_4_ = local_2f8._8_4_;
            local_3c8._0_8_ = auStack_350._8_8_;
            local_3c8._12_4_ = local_2f8._12_4_;
            local_2f8._0_8_ = auStack_350._8_8_;
            iVar5 = iStack_40c;
            local_3e8 = plVar16;
            local_3d8 = puStack_418;
            local_3b8 = plVar16;
            local_368 = plVar16;
            uStack_360 = uStack_3e0;
            puStack_358 = puStack_418;
            if (iStack_40c < iVar8) {
              do {
                if (*(char *)(*local_3e8 + 8 + (longlong)iVar5 * 0x28) != '\0') {
                  lVar9 = *(longlong *)(*local_3e8 + (longlong)iVar5 * 0x28);
                  bVar3 = false;
                  *(int *)(lVar9 + 500) = *(int *)(lVar9 + 500) + 1;
                  iVar8 = *(int *)(lVar9 + 500);
                  iVar5 = *(int *)(lVar9 + 0x1e8) + -1;
                  lVar12 = (longlong)iVar5;
                  if (-1 < iVar5) {
                    lVar13 = lVar12 << 4;
                    do {
                      lVar2 = *(longlong *)(lVar9 + 0x1e0);
                      if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
                          (plVar17 = *(longlong **)(lVar13 + lVar2), plVar17 == (longlong *)0x0)) ||
                         (cVar4 = (**(code **)(*plVar17 + 0x40))(plVar17,lVar9,uVar7), cVar4 == '\0'
                         )) {
                        bVar3 = true;
                      }
                      lVar13 = lVar13 + -0x10;
                      lVar12 = lVar12 + -1;
                    } while (-1 < lVar12);
                    iVar8 = *(int *)(lVar9 + 500);
                  }
                  *(int *)(lVar9 + 500) = iVar8 + -1;
                  if (bVar3) {
                    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                              ((longlong *)(lVar9 + 0x1e0));
                  }
                }
                uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0 & ~uStack_3e0._4_4_);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3e0);
                iVar5 = uStack_3d0._4_4_;
              } while (uStack_3d0._4_4_ < (int)local_3d8[6]);
              param_1 = local_428;
              plVar17 = local_440;
              plVar18 = local_430;
              if (((char)local_3b0 != '\0') && (local_3b0._1_1_ != '\0')) {
                TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
                ::ConditionalRehash(local_3b8,
                                    (int)local_3b8[1] - *(int *)((longlong)local_3b8 + 0x34),1);
                param_1 = local_428;
                plVar17 = local_440;
                plVar18 = local_430;
              }
            }
          }
        }
        FUN_142d266f0(uVar7);
        if (local_78 != 0) {
          FMemory::Free();
        }
        local_90 = 0;
        local_9c = 0;
        local_a4 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        if (local_d8 != 0) {
          plVar10 = local_108;
          if (local_e8 != (longlong *)0x0) {
            plVar10 = local_e8;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      plVar17 = plVar17 + 7;
    } while (plVar17 != plVar18);
  }
  return;
}



// FUNCTION 140aa34d0 FUN_140aa34d0 body=321 status=ok
// SIG undefined FUN_140aa34d0(void)

undefined8 FUN_140aa34d0(longlong param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1a58);
    lVar7 = (longlong)*(int *)(param_1 + 0x1a60) * 0x50 + lVar6;
    if (lVar6 != lVar7) {
      piVar5 = (int *)(lVar6 + 0x40);
      do {
        if (((piVar5[-2] == *param_2 && piVar5[-1] == param_2[1]) && piVar5[1] == param_2[3]) &&
            param_2[2] == *piVar5) {
          if (lVar6 == 0) {
            return 0;
          }
          cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
          if (cVar2 != '\x01') {
            cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
            if (cVar2 != '\x02') {
              return 0;
            }
            cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
            if (cVar2 != '\x02') {
              return 0;
            }
            cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x18))
                              (*(longlong **)(lVar6 + 0x28),lVar6);
            if (cVar2 == '\0') {
              return 0;
            }
            FUN_140d0cdf0(param_1,lVar6);
            return 1;
          }
          cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
          if (cVar2 != '\x01') {
            return 0;
          }
          if (*(int *)(lVar6 + 0x20) < param_3) {
            return 0;
          }
          plVar1 = *(longlong **)(lVar6 + 0x10);
          cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
          if (cVar2 != '\x01') {
            return 0;
          }
          cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_3);
          if (cVar2 == '\0') {
            return 0;
          }
          iVar3 = *(int *)(lVar6 + 0x20) - param_3;
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          *(int *)(lVar6 + 0x20) = iVar3;
          uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x10))
                            (*(longlong **)(lVar6 + 0x28),lVar6,param_3);
          return uVar4;
        }
        lVar6 = lVar6 + 0x50;
        piVar5 = piVar5 + 0x14;
      } while (lVar6 != lVar7);
    }
  }
  return 0;
}



// FUNCTION 140aa3620 FUN_140aa3620 body=73 status=ok
// SIG undefined FUN_140aa3620(void)

float FUN_140aa3620(float param_1)

{
  float fVar1;
  
  param_1 = 1.0 - param_1;
  fVar1 = (float)FUN_140a37090(param_1 * param_1 * param_1);
  return (fVar1 * 0.5 - fVar1) * param_1 + fVar1;
}



// FUNCTION 140aa3670 FUN_140aa3670 body=1163 status=ok
// SIG undefined FUN_140aa3670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aa3670(longlong param_1,longlong param_2,float param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  uint uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar8 = *(longlong *)(param_1 + 0x238);
  uVar1 = *(undefined1 *)(param_1 + 0x240);
  *(longlong *)(param_1 + 0x238) = param_2;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    param_3 = 0.0;
  }
  plVar9 = *(longlong **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(bool *)(param_1 + 0x240) = 0.0 <= param_3;
  uVar6 = UNewbieHelperWidget::GetPrivateStaticClass();
  lVar7 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar6);
  if (lVar7 != 0) {
    FUN_142fb3d10(lVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x148));
  }
  local_118 = (uint *)CONCAT44(local_118._4_4_,(undefined4)local_118);
  if (lVar8 != *(longlong *)(param_1 + 0x238)) {
    local_100 = (longlong *)(param_1 + 0x2d0);
    iVar2 = *(int *)(param_1 + 0x2f8);
    puStack_f0 = (uint *)(param_1 + 0x2e0);
    local_128 = (code *)0x100000000;
    local_118._4_4_ = 0;
    uStack_110 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)(param_1 + 0x2f0);
      if (*(uint **)(param_1 + 0x2f0) == (uint *)0x0) {
        puVar11 = puStack_f0;
      }
      uVar4 = *puVar11;
      uStack_110 = 0;
      iVar5 = 0;
      while (uVar4 == 0) {
        uStack_110 = uStack_110 + 0x20;
        local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
        local_128 = (code *)CONCAT44(local_128._4_4_,iVar5 + 1);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140aa37e4;
        uVar4 = puVar11[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_128 = (code *)CONCAT44(uVar4,(undefined4)local_128);
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_118._4_4_ = (uStack_110 - iVar5) + 0x1f;
      if (iVar2 < local_118._4_4_) {
LAB_140aa37e4:
        local_118._4_4_ = iVar2;
      }
    }
    uStack_e8 = 0xffffffff;
    iStack_e4 = local_118._4_4_;
    iStack_e0 = uStack_110;
    iStack_dc = iStack_10c;
    uStack_f8 = local_128;
    uStack_120 = (ulonglong)local_128;
    local_108 = uStack_110;
    iStack_104 = iStack_10c;
    uStack_110 = 0xffffffff;
    iStack_10c = local_118._4_4_;
    bVar3 = local_118._4_4_ < iVar2;
    local_128 = (code *)local_100;
    local_118 = puStack_f0;
    if (bVar3) {
      do {
        local_138 = *(ulonglong *)(param_1 + 0x238);
        FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),
                      *(undefined8 *)(*(longlong *)local_128 + (longlong)iStack_10c * 0x18),param_1,
                      lVar8);
        uStack_110 = uStack_110 & ~uStack_120._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
      } while (iStack_10c < (int)local_118[6]);
    }
  }
  FUN_140abba60(param_1,param_5,param_6);
  FUN_140ab60f0(param_1,lVar8,uVar1);
  local_128 = *(code **)(param_1 + 0x238);
  uStack_120 = CONCAT71(uStack_120._1_7_,param_4);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1f8,&local_128);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x208);
  if (*(char *)(param_1 + 0x604) != '\0') {
    FUN_140ac1c00(param_1);
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar8 = FUN_1423407b0(param_1);
    if (lVar8 == 0) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x240) == '\0') || (param_3 <= 0.0)) {
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x120);
      if (lVar8 == 0) {
        lVar8 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar8 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
      }
      FUN_142880530(uVar6,param_1 + 800);
      *(undefined8 *)(param_1 + 800) = 0;
    }
  }
  else {
    uStack_120 = uStack_120 & 0xffffffff00000000;
    local_128 = FUN_140ab5350;
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar8 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
    }
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_128;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_128._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_120;
      *(uint *)((longlong)plVar9 + 0x1c) = uStack_120._4_4_;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar8;
      *plVar9 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_d8 = 0;
    local_d0 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
    local_130 = 0xbf800000;
    local_138 = local_138 & 0xffffffffffffff00;
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 800,&local_d8,param_3);
    if (local_78 != 0) {
      plVar10 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar10 = local_88;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar8 = FMemory::Realloc(plVar9,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 140aa3b00 FUN_140aa3b00 body=89 status=ok
// SIG undefined FUN_140aa3b00(void)

void FUN_140aa3b00(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142223710();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  uVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x508);
  }
  *(undefined8 *)(param_1 + 0x470) = uVar1;
  if (*(char *)(param_1 + 0x128) != '\x03') {
    FUN_141306370(param_1);
    return;
  }
  return;
}



// FUNCTION 140aa3b60 FUN_140aa3b60 body=84 status=ok
// SIG undefined FUN_140aa3b60(void)

void FUN_140aa3b60(longlong param_1)

{
  FUN_142223710();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x508);
    return;
  }
  *(undefined8 *)(param_1 + 0x518) = 0;
  return;
}



// FUNCTION 140aa3bc0 FUN_140aa3bc0 body=155 status=ok
// SIG undefined FUN_140aa3bc0(void)

void FUN_140aa3bc0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_140af1d80();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x508);
  }
  param_1[0xb3] = lVar1;
  if ((char)param_1[0x25] == '\x03') {
    iVar2 = (int)param_1[0xaf] + 1;
    if ((int)param_1[0xad] == iVar2) {
      return;
    }
    (**(code **)(*param_1 + 0x600))(param_1);
    *(int *)(param_1 + 0xad) = iVar2;
    FUN_14130a1b0(param_1,iVar2);
    if ((char)param_1[0x25] == '\x03') {
      return;
    }
  }
  FUN_14130a070(param_1);
  return;
}



// FUNCTION 140aa3c60 FUN_140aa3c60 body=1466 status=ok
// SIG undefined FUN_140aa3c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aa3c60(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  float fVar25;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  int local_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  int local_98;
  char local_94;
  int local_90;
  longlong *local_88;
  longlong local_80;
  int local_78;
  undefined8 local_68;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c0 = param_1;
  FUN_142223710();
  iVar8 = FUN_142235230(param_1);
  if (iVar8 == 3) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar11 = DAT_146b33f38;
  lVar22 = DAT_146b33f38 + 0x30;
  lVar10 = FWeakObjectPtr::Get(lVar22);
  plVar20 = (longlong *)0x0;
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar11 + 0x38)) ||
       (local_e8 = 0, *(longlong *)(lVar11 + 0x40) == 0)) goto LAB_140aa3ddb;
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar22,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar11 + 0x38) = DAT_1464b56f4;
    }
    lVar10 = FWeakObjectPtr::Get(lVar22);
    if (lVar10 == 0) goto LAB_140aa3ddb;
  }
  lVar11 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar11 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      param_1[0x98] = *(longlong *)(lVar10 + 0x750);
    }
  }
LAB_140aa3ddb:
  local_e0 = (longlong *)0x0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_d4 = 0;
  uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
  local_d0 = FUN_1428dfc70();
  local_b8[0] = 5;
  local_60 = '\0';
  local_c8 = uVar12;
  FUN_14044bc80(&local_b0,&local_c8,&local_d0);
  FUN_14045a130(local_b8);
  plVar23 = plVar20;
  plVar17 = plVar20;
  iVar8 = 0;
  if (local_94 != '\0') {
LAB_140aa40a5:
    uVar19 = 0;
    if (local_60 != '\0') {
      local_60 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_b0,local_68);
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        FMemory::Free();
      }
    }
    plVar20 = plVar23 + iVar8;
    uVar21 = (ulonglong)((longlong)plVar20 + (7 - (longlong)plVar23)) >> 3;
    if (plVar20 < plVar23) {
      uVar21 = uVar19;
    }
    uVar18 = uVar19;
    plVar17 = plVar23;
    if (uVar21 != 0) {
      do {
        FUN_140ab0740(*plVar17);
        uVar18 = uVar18 + 1;
        plVar17 = plVar17 + 1;
      } while (uVar18 != uVar21);
    }
    uVar21 = (ulonglong)((longlong)plVar20 + (7 - (longlong)plVar23)) >> 3;
    if (plVar20 < plVar23) {
      uVar21 = uVar19;
    }
    plVar20 = plVar23;
    if (uVar21 != 0) {
      do {
        lVar11 = *plVar20;
        lVar10 = *(longlong *)(lVar11 + 0x1a0);
        *(undefined1 *)(lVar11 + 0x182) = 1;
        if ((lVar10 != 0) || (lVar10 = *(longlong *)(lVar11 + 0x188), lVar10 != 0)) {
          if (*(char *)(lVar11 + 0x1a8) == '\0') {
            fVar25 = -1.0;
          }
          else {
            fVar25 = *(float *)(lVar11 + 0x1ac);
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
          }
          local_f0 = 0;
          local_f8 = 0;
          FUN_140aa3670(lVar11,lVar10,fVar25,1);
        }
        uVar19 = uVar19 + 1;
        plVar20 = plVar20 + 1;
      } while (uVar19 != uVar21);
    }
    if (plVar23 != (longlong *)0x0) {
      FMemory::Free(plVar23);
    }
    return;
  }
LAB_140aa3e50:
  plVar6 = local_88;
  uVar12 = UInputKeySelector::GetPrivateStaticClass();
  lVar11 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar12);
  if (lVar11 != 0) {
    *(longlong **)(lVar11 + 0x220) = param_1;
    FUN_140aafbd0(lVar11);
    local_d8 = (int)plVar20 + 1;
    local_e8 = CONCAT44(local_e8._4_4_,local_d8);
    if ((int)plVar17 < local_d8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0,plVar20);
      local_e8 = CONCAT44(local_e8._4_4_,local_d8);
      plVar23 = local_e0;
    }
    plVar23[(int)plVar20] = lVar11;
  }
  lVar11 = local_b0;
  iVar24 = local_98 + 1;
  if (iVar24 < local_78 + local_a0) {
    lVar10 = (longlong)iVar24 * 8;
    iVar8 = local_78;
    iVar15 = local_a0;
    do {
      if (iVar24 < iVar15) {
        plVar17 = *(longlong **)(lVar10 + local_a8);
      }
      else {
        plVar17 = *(longlong **)(local_80 + (longlong)(iVar24 - iVar15) * 8);
      }
      local_90 = local_90 + 1;
      if ((plVar17 != (longlong *)0x0) &&
         (lVar22 = AActor::GetLevel(plVar17), iVar8 = local_78, iVar15 = local_a0, lVar22 != 0)) {
        if ((local_b8[0] & 1) != 0) {
          iVar1 = *(int *)((longlong)plVar17 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar16 = iVar1 >> 0x1f & 0xffff;
            uVar9 = iVar1 + uVar16;
            lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                     (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
          }
          else {
            lVar13 = 0;
          }
          if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) != 0) goto LAB_140aa4052;
        }
        if (((local_b8[0] >> 1 & 1) == 0) ||
           (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar17), iVar8 = local_78,
           iVar15 = local_a0, cVar7 != '\0')) {
          if ((local_b8[0] >> 2 & 1) != 0) {
            if (((*(byte *)(lVar22 + 0x204) & 0x10) == 0) &&
               ((*(byte *)(lVar22 + 0x205) & 0x10) == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            piVar2 = *(int **)(lVar22 + 600);
            if (((*(longlong *)(lVar22 + 0xc0) == 0) ||
                (piVar14 = (int *)UWorld::GetActiveLevelCollection(), piVar14 == (int *)0x0)) ||
               (piVar2 == piVar14)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar4) || (bVar4 = false, bVar5)) {
              bVar4 = true;
            }
            iVar8 = local_78;
            iVar15 = local_a0;
            if ((!bVar3) || (!bVar4)) goto LAB_140aa4052;
          }
          lVar22 = ULevel::GetWorld(lVar22);
          iVar8 = local_78;
          iVar15 = local_a0;
          if (lVar22 == lVar11) {
            lVar22 = AActor::GetLevel(plVar17);
            if (lVar22 == *(longlong *)(lVar11 + 0x30)) goto LAB_140aa407c;
            lVar22 = UVoipListenerSynthComponent::GetPrivateStaticClass();
            if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar22 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar22 + 0x90) * 8) !=
                lVar22 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            iVar8 = local_78;
            iVar15 = local_a0;
            if (!bVar3) goto LAB_140aa407c;
          }
        }
      }
LAB_140aa4052:
      iVar24 = iVar24 + 1;
      lVar10 = lVar10 + 8;
      if (iVar8 + iVar15 <= iVar24) break;
    } while( true );
  }
  local_88 = (longlong *)0x0;
  local_94 = '\x01';
  plVar23 = local_e0;
  iVar8 = (int)local_e8;
  goto LAB_140aa40a5;
LAB_140aa407c:
  plVar20 = (longlong *)(local_e8 & 0xffffffff);
  plVar23 = local_e0;
  iVar8 = (int)local_e8;
  local_98 = iVar24;
  local_88 = plVar17;
  if (local_94 != '\0') goto LAB_140aa40a5;
  plVar17 = (longlong *)(ulonglong)local_d4;
  param_1 = local_c0;
  goto LAB_140aa3e50;
}



// FUNCTION 140aa4220 FUN_140aa4220 body=117 status=ok
// SIG undefined FUN_140aa4220(void)

void FUN_140aa4220(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142223710();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_140aab610(uVar1);
  param_1[0x8c] = lVar2;
  (**(code **)(*param_1 + 0x6e8))(param_1);
  if (param_1[0x9e] != 0) {
    lVar2 = param_1[0x9b];
    lVar3 = *(longlong *)(lVar2 + 0x238);
    if (lVar3 == *(longlong *)(lVar2 + 0x188)) {
      lVar3 = *(longlong *)(lVar2 + 0x248);
    }
    FUN_140ad9870(param_1[0x9e],param_1,lVar3,1);
    return;
  }
  return;
}



// FUNCTION 140aa42a0 FUN_140aa42a0 body=1230 status=ok
// SIG undefined FUN_140aa42a0(void)

void FUN_140aa42a0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  uint uStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    if ((*(uint *)(lVar6 + 0x830) & 0x400) == 0) {
      uVar11 = 0;
      lVar6 = *(longlong *)(param_1 + 0x118);
      if (lVar6 != 0) {
        plVar17 = (longlong *)(lVar6 + 0x420);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
        uVar14 = uVar11;
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          *(undefined4 *)(plVar7 + 2) = 0x40ab6980;
          *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
          *(undefined4 *)(plVar7 + 3) = 0;
          *(int *)((longlong)plVar7 + 0x1c) = (int)((ulonglong)uStack_90 >> 0x20);
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143f77bd0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar17,1);
          puVar9 = (ulonglong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
          iVar5 = *(int *)(lVar6 + 0x428);
          uVar14 = *puVar9;
          *(int *)(lVar6 + 0x428) = iVar5 + 1;
          if (*(int *)(lVar6 + 0x42c) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar5);
          }
          lVar6 = *plVar17;
          *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar7;
          *(undefined4 *)(lVar6 + 8 + (longlong)iVar5 * 0x10) = 3;
        }
        *(ulonglong *)(param_1 + 0x678) = uVar14;
      }
      if (*(longlong *)(param_1 + 0x220) == 0) {
        lVar6 = *(longlong *)(param_1 + 0x120);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_1);
        }
        uVar10 = FUN_140aab610(lVar6);
        *(undefined8 *)(param_1 + 0x220) = uVar10;
      }
      iVar5 = FUN_142235230(*(undefined8 *)(param_1 + 0x220));
      if (iVar5 == 3) {
        if (0 < *(int *)(param_1 + 0x610)) {
          lVar6 = *(longlong *)(param_1 + 0x118);
          plVar7 = (longlong *)(lVar6 + 0x2b0);
          uVar2 = *(uint *)(lVar6 + 0x2d8);
          puVar1 = (uint *)(lVar6 + 0x2c0);
          local_98 = 0;
          uStack_94 = 1;
          uStack_84 = 0;
          uStack_80 = 0;
          if (uVar2 != 0) {
            puVar16 = *(uint **)(lVar6 + 0x2d0);
            if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
              puVar16 = puVar1;
            }
            uVar3 = *puVar16;
            uVar14 = uVar11;
            while (uVar3 == 0) {
              iVar5 = (int)uVar11;
              uStack_80 = (int)uVar14 + 0x20;
              uVar14 = (ulonglong)uStack_80;
              local_98 = iVar5 + 1;
              uVar11 = (ulonglong)local_98;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_140aa44fe;
              uVar3 = puVar16[(longlong)iVar5 + 1];
            }
            uStack_94 = uVar3 - 1 & uVar3 ^ uVar3;
            iVar5 = 0x1f;
            if (uStack_94 != 0) {
              for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            if (uStack_94 == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - iVar5;
            }
            uStack_84 = (uStack_80 - iVar5) + 0x1f;
            if ((int)uVar2 < (int)uStack_84) {
LAB_140aa44fe:
              uStack_84 = uVar2;
            }
          }
          uVar3 = *(uint *)(lVar6 + 0x2d8);
          uStack_60 = 0xffffffff;
          uStack_5c = uStack_84;
          local_58 = CONCAT44(uStack_7c,uStack_80);
          uStack_48 = local_98;
          uStack_44 = uStack_94;
          uVar15 = uVar3 & 0xffffffe0;
          uStack_70 = local_98;
          uStack_6c = uStack_94;
          local_68 = puVar1;
          local_50 = plVar7;
          puStack_40 = puVar1;
          uStack_30 = local_58;
          uStack_38 = uStack_60;
          uStack_34 = uStack_5c;
          uStack_84 = uVar3;
          if (uVar3 != uVar2) {
            puVar16 = *(uint **)(lVar6 + 0x2d0);
            if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
              puVar16 = puVar1;
            }
            uVar13 = puVar16[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
            iVar5 = (int)uVar3 >> 5;
            while (uVar13 == 0) {
              uVar15 = uVar15 + 0x20;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_140aa45d7;
              uVar13 = puVar16[(longlong)iVar5 + 1];
              iVar5 = iVar5 + 1;
            }
            uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
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
            uStack_84 = (uVar15 - iVar5) + 0x1f;
            if ((int)uVar2 < (int)uStack_84) {
LAB_140aa45d7:
              uStack_84 = uVar2;
            }
          }
          while( true ) {
            if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) break;
            lVar6 = *(longlong *)(*plVar7 + (longlong)(int)uStack_5c * 0x10);
            plVar12 = *(longlong **)(param_1 + 0x608);
            plVar17 = plVar12 + *(int *)(param_1 + 0x610);
            for (; plVar12 != plVar17; plVar12 = plVar12 + 1) {
              if (*plVar12 == *(longlong *)(lVar6 + 0x18)) {
                lVar8 = FUN_1429f11d0();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  iVar5 = *(int *)(param_1 + 0x620);
                  *(int *)(param_1 + 0x620) = iVar5 + 1;
                  if (*(int *)(param_1 + 0x624) < iVar5 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_1 + 0x618,iVar5);
                  }
                  *(longlong *)(*(longlong *)(param_1 + 0x618) + (longlong)iVar5 * 8) = lVar6;
                }
                break;
              }
            }
            uStack_60 = uStack_60 & ~uStack_6c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x2b8) != '\0') {
          uVar10 = FUN_142df3580(*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x2c0) = uVar10;
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0x220) + 0x94) & 0x18) == 0x10) {
          if (*(char *)(param_1 + 0x180) == '\0') {
            FUN_140aafbd0(param_1);
          }
          if (*(char *)(param_1 + 0x181) == '\0') {
            FUN_140ab0740(param_1);
          }
          if (*(char *)(param_1 + 0x182) == '\0') {
            FUN_140abb9f0(param_1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140aa4770 FUN_140aa4770 body=116 status=ok
// SIG undefined FUN_140aa4770(void)

void FUN_140aa4770(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142330a70();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = FUN_142f6c9f0(lVar1);
  if (lVar1 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar2 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f690f0(lVar1,&local_18,0);
  }
  return;
}



// FUNCTION 140aa47f0 FUN_140aa47f0 body=150 status=ok
// SIG undefined FUN_140aa47f0(void)

void FUN_140aa47f0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res10 [2];
  int local_res20 [2];
  longlong *local_18 [2];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2a08);
    local_res10[0] = param_2;
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res20,param_2);
    if ((local_res20[0] == -1) || (lVar2 = (longlong)local_res20[0] * 0x30 + *plVar1, lVar2 == 0)) {
      local_18[0] = local_res10;
      FUN_140a9c8e0(plVar1,local_res20,local_18,0);
      lVar2 = (longlong)local_res20[0] * 0x30 + *plVar1;
    }
    *(undefined4 *)(lVar2 + 0x18) = *param_3;
    *(undefined4 *)(lVar2 + 0x1c) = param_3[1];
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_3 + 2);
  }
  return;
}



// FUNCTION 140aa4890 FUN_140aa4890 body=261 status=ok
// SIG undefined FUN_140aa4890(void)

void FUN_140aa4890(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140aa492f:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))
                          (plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
        if (cVar3 == '\0') goto LAB_140aa492f;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140aa49a0 FUN_140aa49a0 body=1112 status=ok
// SIG undefined FUN_140aa49a0(void)

undefined8 FUN_140aa49a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  float local_b8;
  
  uVar13 = *(uint *)(param_1 + 0x700);
  uVar20 = (ulonglong)uVar13;
  pfVar16 = *(float **)(param_1 + 0x6f8);
  bVar14 = false;
  fVar23 = DAT_1468b5d90;
  local_c4._4_4_ = DAT_1468b5d94;
  local_c8 = DAT_1468b5d98;
  fVar24 = DAT_1468b5d98;
  fVar25 = DAT_1468b5d94;
  fVar26 = DAT_1468b5d90;
  if (uVar13 != 0) {
    uVar18 = (ulonglong)uVar13;
    pfVar17 = pfVar16;
    do {
      if (bVar14) {
        fVar21 = *pfVar17;
        if (fVar21 < fVar23) {
          fVar23 = fVar21;
        }
        fVar22 = pfVar17[1];
        if (fVar22 < local_c4._4_4_) {
          local_c4._4_4_ = fVar22;
        }
        fVar12 = pfVar17[2];
        if (fVar12 < local_c8) {
          local_c8 = fVar12;
        }
        if (fVar26 < fVar21) {
          fVar26 = fVar21;
        }
        if (fVar25 < fVar22) {
          fVar25 = fVar22;
        }
        if (fVar24 < fVar12) {
          fVar24 = fVar12;
        }
      }
      else {
        local_c8 = pfVar17[2];
        fVar23 = (float)*(undefined8 *)pfVar17;
        bVar14 = true;
        local_c4._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
        fVar24 = local_c8;
        fVar25 = local_c4._4_4_;
        fVar26 = fVar23;
      }
      pfVar17 = pfVar17 + 3;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  uVar18 = 0;
  local_b8 = 0.0;
  fVar26 = (fVar26 - fVar23) * 0.5;
  fVar25 = (fVar25 - local_c4._4_4_) * 0.5;
  fVar24 = (fVar24 - local_c8) * 0.5;
  fVar23 = fVar26 + fVar23;
  local_c4._4_4_ = fVar25 + local_c4._4_4_;
  local_c8 = fVar24 + local_c8;
  if (3 < uVar13) {
    pfVar17 = pfVar16 + 5;
    uVar15 = (uVar13 - 4 >> 2) + 1;
    uVar19 = (ulonglong)uVar15;
    uVar18 = (ulonglong)(uVar15 * 4);
    do {
      pfVar1 = pfVar17 + -5;
      pfVar2 = pfVar17 + -3;
      pfVar3 = pfVar17 + -4;
      pfVar4 = pfVar17 + -2;
      pfVar5 = pfVar17 + -1;
      fVar21 = *pfVar17;
      pfVar6 = pfVar17 + 1;
      pfVar7 = pfVar17 + 2;
      pfVar8 = pfVar17 + 3;
      pfVar9 = pfVar17 + 4;
      pfVar10 = pfVar17 + 5;
      pfVar11 = pfVar17 + 6;
      pfVar17 = pfVar17 + 0xc;
      fVar22 = SQRT((*pfVar3 - local_c4._4_4_) * (*pfVar3 - local_c4._4_4_) +
                    (*pfVar1 - fVar23) * (*pfVar1 - fVar23) +
                    (*pfVar2 - local_c8) * (*pfVar2 - local_c8));
      fVar21 = SQRT((*pfVar5 - local_c4._4_4_) * (*pfVar5 - local_c4._4_4_) +
                    (*pfVar4 - fVar23) * (*pfVar4 - fVar23) +
                    (fVar21 - local_c8) * (fVar21 - local_c8));
      if (fVar22 <= local_b8) {
        fVar22 = local_b8;
      }
      if (fVar22 <= fVar21) {
        fVar22 = fVar21;
      }
      fVar21 = SQRT((*pfVar7 - local_c4._4_4_) * (*pfVar7 - local_c4._4_4_) +
                    (*pfVar6 - fVar23) * (*pfVar6 - fVar23) +
                    (*pfVar8 - local_c8) * (*pfVar8 - local_c8));
      if (fVar22 <= fVar21) {
        fVar22 = fVar21;
      }
      fVar21 = SQRT((*pfVar10 - local_c4._4_4_) * (*pfVar10 - local_c4._4_4_) +
                    (*pfVar9 - fVar23) * (*pfVar9 - fVar23) +
                    (*pfVar11 - local_c8) * (*pfVar11 - local_c8));
      local_b8 = fVar22;
      if (fVar22 <= fVar21) {
        local_b8 = fVar21;
      }
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if ((uint)uVar18 < uVar13) {
    uVar20 = (ulonglong)(uVar13 - (uint)uVar18);
    pfVar16 = pfVar16 + uVar18 * 3 + 2;
    uVar18 = uVar20;
    do {
      fVar21 = *pfVar16;
      pfVar17 = pfVar16 + -2;
      pfVar1 = pfVar16 + -1;
      pfVar16 = pfVar16 + 3;
      fVar21 = SQRT((*pfVar1 - local_c4._4_4_) * (*pfVar1 - local_c4._4_4_) +
                    (*pfVar17 - fVar23) * (*pfVar17 - fVar23) +
                    (fVar21 - local_c8) * (fVar21 - local_c8));
      if (fVar21 <= local_b8) {
        fVar21 = local_b8;
      }
      local_b8 = fVar21;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  fVar21 = *(float *)(param_1 + 0x708);
  local_d0 = CONCAT44(local_c4._4_4_,fVar23);
  local_bc = fVar24 + fVar21;
  local_b8 = local_b8 + fVar21;
  local_c4 = CONCAT44(fVar25 + fVar21,fVar26 + fVar21);
  FBoxSphereBounds::TransformBy(&local_d0,param_2,param_3,uVar20,fVar24,fVar26);
  return param_2;
}



// FUNCTION 140aa4e10 GetWorldSettings body=36 status=ok
// SIG undefined GetWorldSettings(void)

void AActor::GetWorldSettings(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_142227350(lVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 140aa4e50 FUN_140aa4e50 body=195 status=ok
// SIG undefined FUN_140aa4e50(void)

undefined8 FUN_140aa4e50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((*(longlong *)(param_1 + 0x518) != 0) && (param_2 != 0)) {
    iVar3 = FUN_142235230();
    if (iVar3 == 3) {
      lVar4 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2);
    }
    else {
      lVar4 = FUN_140aab960(param_1,param_2);
    }
    if (lVar4 == 0) {
      plVar5 = *(longlong **)(param_1 + 0x508);
      plVar1 = plVar5 + *(int *)(param_1 + 0x510);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if ((*plVar5 != 0) && (*(longlong *)(*plVar5 + 0x560) == param_2)) {
          return 0;
        }
      }
      cVar2 = FUN_140e1ace0(param_2);
      if ((cVar2 != '\0') &&
         ((lVar4 = FUN_140c41820(param_2), lVar4 == 0 ||
          (lVar4 = FUN_141227a00(lVar4,0), lVar4 == param_2)))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140aa4f20 FUN_140aa4f20 body=63 status=ok
// SIG undefined FUN_140aa4f20(void)

undefined1 FUN_140aa4f20(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x591) != '\x03') && (param_2 != 0)) {
    cVar1 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_140e1ace0(param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140aa4f60 FUN_140aa4f60 body=397 status=ok
// SIG undefined FUN_140aa4f60(void)

ulonglong FUN_140aa4f60(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar7;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar8;
  undefined8 local_28;
  undefined4 local_20;
  longlong *local_18;
  int local_10;
  
  if (param_1 != 0) {
    lVar1 = FUN_1405e8e00();
    in_RAX = 0;
    if (lVar1 != 0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
      in_RAX = DAT_146b33f38;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x128) != 0)) {
        lVar2 = FUN_1405e8ff0(param_1);
        in_RAX = 0;
        if (lVar2 != 0) {
          lVar8 = 0;
          lVar3 = UWorld::GetPlayerControllerIterator(param_1,&local_18);
          while( true ) {
            uVar7 = (uint7)((ulonglong)lVar3 >> 8);
            if ((local_10 < 0) || ((int)local_18[1] <= local_10)) {
              in_RAX = (ulonglong)uVar7 << 8;
            }
            else {
              in_RAX = CONCAT71(uVar7,1);
            }
            if ((char)in_RAX == '\0') break;
            plVar4 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
            lVar3 = 0;
            if (plVar4 != (longlong *)0x0) {
              lVar3 = FUN_14145f370();
              uVar7 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
              if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                  lVar3 + 0x88)) {
                lVar3 = (ulonglong)uVar7 << 8;
              }
              else {
                lVar3 = CONCAT71(uVar7,1);
              }
              if (((char)lVar3 != '\0') && (lVar8 == 0)) {
                plVar4 = (longlong *)(**(code **)(*plVar4 + 0x678))(plVar4);
                lVar3 = 0;
                if (plVar4 != (longlong *)0x0) {
                  uVar5 = FUN_140604cc0();
                  lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
                  lVar8 = lVar3;
                }
              }
            }
            local_10 = local_10 + 1;
          }
          if (lVar8 != 0) {
            local_20 = 0;
            local_28 = 0xffffffff00000000;
            uVar6 = FUN_1405ebd40(lVar2,lVar8,*(undefined8 *)(lVar1 + 0x128),1,&local_28);
            return uVar6;
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140aa50f0 FUN_140aa50f0 body=74 status=ok
// SIG undefined FUN_140aa50f0(void)

undefined8 FUN_140aa50f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x288))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x280))(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140aa5140 FUN_140aa5140 body=544 status=ok
// SIG undefined FUN_140aa5140(void)

void FUN_140aa5140(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong local_38;
  undefined8 local_30;
  
  uVar6 = 0;
  do {
    if ((((-1 < (int)uVar6) && (uVar6 < 2)) &&
        (plVar5 = (longlong *)(param_1 + 0x468 + (longlong)(int)uVar6 * 0x50),
        plVar5 != (longlong *)0x0)) &&
       (((plVar2 = (longlong *)plVar5[2], plVar2 == (longlong *)0x0 ||
         (*(char *)((longlong)plVar2 + 0x484) != '\x02')) && ((int)plVar5[9] != -1)))) {
      plVar5[5] = 0;
      local_38 = 0;
      local_30 = 0;
      if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x25] == '\x03')) {
        *(undefined1 *)((longlong)plVar2 + 0x484) = 2;
        (**(code **)(*plVar2 + 0x600))();
      }
      lVar3 = *plVar5;
      lVar1 = lVar3 + (longlong)(int)plVar5[1] * 0x18;
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
        plVar2 = *(longlong **)(lVar3 + 8);
        plVar4 = plVar2 + (longlong)*(int *)(lVar3 + 0x10) * 4;
        for (; plVar2 != plVar4; plVar2 = plVar2 + 4) {
          if (((*plVar2 != 0) && (plVar2[3] != 0)) && (*(longlong *)(*plVar2 + 0x908) != 0)) {
            FUN_142df2ca0();
          }
        }
      }
      if (plVar5[8] != 0) {
        FUN_140e78fa0();
      }
      if ((int)local_30 == 0) {
        lVar3 = *plVar5;
        lVar1 = lVar3 + (longlong)(int)plVar5[1] * 0x18;
        for (; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
          plVar2 = *(longlong **)(lVar3 + 8);
          plVar4 = plVar2 + (longlong)*(int *)(lVar3 + 0x10) * 4;
          for (; plVar2 != plVar4; plVar2 = plVar2 + 4) {
            if (*plVar2 != 0) {
              FUN_140e2bbf0();
            }
          }
        }
      }
      else {
        FUN_141309e90(param_1,&local_38,*(undefined1 *)((longlong)plVar5 + 0x4c));
      }
      if (plVar5[2] != 0) {
        FUN_142227350(plVar5[2],0,1);
        plVar5[2] = 0;
      }
      FUN_140aa58c0(plVar5);
      if (plVar5[3] != 0) {
        FUN_140ab4430(plVar5[3],3);
        plVar5[3] = 0;
      }
      for (lVar1 = param_1 + 0x468; lVar1 != param_1 + 0x508; lVar1 = lVar1 + 0x50) {
        if ((*(longlong *)(lVar1 + 0x10) != 0) &&
           (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x484) != '\x02')) goto LAB_140aa5328;
      }
      FUN_14223e980(param_1);
LAB_140aa5328:
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return;
    }
  } while( true );
}



// FUNCTION 140aa5360 FUN_140aa5360 body=484 status=ok
// SIG undefined FUN_140aa5360(void)

void FUN_140aa5360(longlong param_1,ulonglong param_2)

{
  void *_Src;
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar1 = FUN_140aab960();
  if ((param_2 == 0) || (lVar1 == 0)) {
    puVar10 = (ulonglong *)0x0;
    puVar5 = puVar10;
    puVar11 = puVar10;
    if (*(int *)(param_1 + 0x510) < 1) {
      return;
    }
    do {
      lVar1 = *(longlong *)((longlong)puVar11 + *(longlong *)(param_1 + 0x508));
      if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x560) == param_2)) {
        FUN_140ab4430(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + (longlong)(int)puVar5 * 8),2)
        ;
        return;
      }
      local_30 = *(int *)(lVar1 + 0x578);
      lVar6 = (longlong)local_30;
      _Src = *(void **)(lVar1 + 0x570);
      local_38 = (ulonglong *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
        puVar7 = puVar10;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
        puVar7 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar6 << 3);
      }
      puVar2 = puVar7;
      puVar4 = puVar10;
      if (0 < local_30) {
        do {
          if (*puVar2 == param_2) {
            FUN_140ab65c0(*(undefined8 *)((longlong)puVar11 + *(longlong *)(param_1 + 0x508)),
                          param_2);
            break;
          }
          uVar3 = (int)puVar4 + 1;
          puVar2 = puVar2 + 1;
          puVar4 = (ulonglong *)(ulonglong)uVar3;
        } while ((int)uVar3 < local_30);
      }
      if (puVar7 != (ulonglong *)0x0) {
        FMemory::Free(puVar7);
      }
      uVar3 = (int)puVar5 + 1;
      puVar5 = (ulonglong *)(ulonglong)uVar3;
      puVar11 = puVar11 + 1;
      if (*(int *)(param_1 + 0x510) <= (int)uVar3) {
        return;
      }
    } while( true );
  }
  FUN_140aaba00(lVar1,&local_38);
  uVar9 = 0;
  uVar8 = (ulonglong)((longlong)(local_38 + local_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + local_30 < local_38) {
    uVar8 = uVar9;
  }
  puVar5 = local_38;
  if (uVar8 != 0) {
    do {
      FUN_141309c30(param_1,*puVar5);
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 != uVar8);
  }
  lVar6 = *(longlong *)(lVar1 + 0x10);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x484) != '\0') goto LAB_140aa541b;
    FUN_142227350(lVar6,0,1);
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_140ab4430(*(longlong *)(lVar1 + 0x18),2);
  }
  FUN_140aa58c0(lVar1);
LAB_140aa541b:
  if (local_38 == (ulonglong *)0x0) {
    return;
  }
  FMemory::Free(local_38);
  return;
}



// FUNCTION 140aa5550 FUN_140aa5550 body=440 status=ok
// SIG undefined FUN_140aa5550(void)

void FUN_140aa5550(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  if ((param_2[2] == 0) || (*(char *)(param_2[2] + 0x484) != '\x02')) {
    iVar8 = 0;
    uVar9 = 0;
    puVar10 = (undefined8 *)*param_2;
    puVar1 = puVar10 + (longlong)(int)param_2[1] * 3;
    puVar13 = puVar10;
    if (puVar10 != puVar1) {
      do {
        plVar11 = (longlong *)puVar13[1];
        plVar12 = plVar11 + (longlong)*(int *)(puVar13 + 2) * 4;
        for (; plVar11 != plVar12; plVar11 = plVar11 + 4) {
          if (*plVar11 != 0) {
            plVar3 = (longlong *)param_2[6];
            plVar6 = plVar3 + (longlong)(int)param_2[7] * 4;
            if (plVar3 != plVar6) {
              while (*plVar3 != *plVar11) {
                plVar3 = plVar3 + 4;
                if (plVar3 == plVar6) goto LAB_140aa55f6;
              }
              if ((char)plVar3[1] != '\0') goto LAB_140aa5692;
            }
LAB_140aa55f6:
            iVar8 = iVar8 + 1;
            break;
          }
LAB_140aa5692:
        }
        puVar13 = puVar13 + 3;
      } while (puVar13 != puVar1);
      if (1 < iVar8) {
        return;
      }
      for (; puVar10 != puVar1; puVar10 = puVar10 + 3) {
        plVar11 = (longlong *)puVar10[1];
        plVar12 = plVar11 + (longlong)*(int *)(puVar10 + 2) * 4;
        iVar8 = 0;
        if (plVar11 != plVar12) {
          do {
            if (*plVar11 != 0) {
              plVar3 = (longlong *)param_2[6];
              plVar6 = plVar3 + (longlong)(int)param_2[7] * 4;
              for (; plVar3 != plVar6; plVar3 = plVar3 + 4) {
                if (*plVar3 == *plVar11) {
                  cVar5 = (char)plVar3[1];
                  goto LAB_140aa5663;
                }
              }
            }
            cVar5 = '\0';
LAB_140aa5663:
            iVar2 = iVar8 + 1;
            if (cVar5 != '\0') {
              iVar2 = iVar8;
            }
            plVar11 = plVar11 + 4;
            iVar8 = iVar2;
          } while (plVar11 != plVar12);
          if (0 < iVar2) {
            uVar9 = *puVar10;
            break;
          }
        }
      }
    }
    if (param_2[8] != 0) {
      lVar4 = param_2[6];
      lVar7 = (longlong)(int)param_2[7] * 0x20 + lVar4;
      for (; lVar4 != lVar7; lVar4 = lVar4 + 0x20) {
        if (*(char *)(lVar4 + 8) == '\x02') {
          uVar9 = 0;
          break;
        }
      }
    }
    FUN_140aa85e0(param_1,(int)param_2[9],uVar9,0);
  }
  return;
}



// FUNCTION 140aa5710 FUN_140aa5710 body=419 status=ok
// SIG undefined FUN_140aa5710(void)

void FUN_140aa5710(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_1[0xb2] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      FUN_142880530(uVar3,param_1 + 0xb2);
    }
    param_1[0xb2] = 0;
    if (((int)param_1[0xb4] != 0) && (plVar1 = (longlong *)param_1[0xb3], plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (param_1[0xb3] != 0) {
        lVar2 = FMemory::Realloc(param_1[0xb3],0,0);
        param_1[0xb3] = lVar2;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)((longlong)param_1 + 0x57c);
  }
  else {
    *(float *)((longlong)param_1 + 0x57c) = param_2;
  }
  if (param_2 <= 0.0) {
    if ((char)param_1[0x25] == '\x03') {
      (**(code **)(*param_1 + 0x6d0))(param_1,1);
    }
  }
  else {
    *(float *)(param_1 + 0xb1) = param_2;
    FUN_140abc5c0(param_1,2);
    lVar2 = param_1[0x8c];
    if (lVar2 != 0) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x548);
      if ((((*(int *)(lVar2 + 0x4d0) == *(int *)(lVar2 + 0x4fc)) && (*(int *)(lVar2 + 0x520) == 0))
          && (*(int *)(lVar2 + 0x530) == 0)) &&
         ((*(int *)(lVar2 + 0x550) == 0 && (*(int *)(lVar2 + 0x570) == 0)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4 != (*(char *)(lVar2 + 0x37) != '\0')) {
        FUN_14288e3d0(lVar2 + 0x28);
      }
    }
    if ((char)param_1[0x25] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140aa5885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x600))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140aa58c0 FUN_140aa58c0 body=242 status=ok
// SIG undefined FUN_140aa58c0(void)

void FUN_140aa58c0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_58 [9];
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = 0xffffffff;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[6] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_c = 0;
  if (param_1 != local_58) {
    lVar1 = *param_1;
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar3 = (longlong *)(lVar1 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      lVar1 = *param_1;
    }
    if (lVar1 != 0) {
      FMemory::Free();
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  plVar3 = param_1 + 6;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (plVar3 != local_58 + 6) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = 0;
    param_1[7] = 0;
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_58);
  return;
}



// FUNCTION 140aa59c0 FUN_140aa59c0 body=369 status=ok
// SIG undefined FUN_140aa59c0(void)

void FUN_140aa59c0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    puVar5 = *(ulonglong **)(param_1 + 0x508);
    uVar6 = 0;
    puVar1 = puVar5 + *(int *)(param_1 + 0x510);
    uVar9 = uVar6;
    if (puVar5 != puVar1) {
      do {
        uVar11 = *puVar5;
        if (uVar11 != 0) {
          if (*(longlong *)(uVar11 + 0x560) == param_2) {
            cVar2 = *(char *)(uVar11 + 0x591);
            *puVar5 = 0;
            if (cVar2 != '\x03') {
              uVar9 = uVar11;
            }
          }
          else if (*(char *)(uVar11 + 0x591) != '\x03') {
            FUN_140ab65c0(uVar11,param_2);
          }
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar1);
      if (uVar9 != 0) {
        FUN_140ab4430(uVar9,2);
      }
    }
    lVar3 = (longlong)*(int *)(param_1 + 0x510);
    if (*(int *)(param_1 + 0x510) != 0) {
      bVar12 = **(longlong **)(param_1 + 0x508) != 0;
      uVar9 = uVar6;
      uVar11 = uVar6;
      do {
        iVar8 = (int)uVar9;
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)(iVar8 + 1);
        if ((longlong)uVar6 < lVar3) {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0x508) + uVar6 * 8);
          do {
            if (bVar12 != (*plVar4 != 0)) break;
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar6 = uVar6 + 1;
            plVar4 = plVar4 + 1;
          } while ((longlong)uVar6 < lVar3);
        }
        iVar7 = (int)uVar9 - iVar8;
        if (bVar12 != false) {
          iVar10 = (int)uVar11;
          if (iVar10 != iVar8) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x508) + (longlong)iVar10 * 8),
                       (void *)(*(longlong *)(param_1 + 0x508) + (longlong)iVar8 * 8),
                       (longlong)iVar7 << 3);
          }
          uVar11 = (ulonglong)(uint)(iVar10 + iVar7);
        }
        bVar12 = (bool)(bVar12 ^ 1);
      } while ((longlong)uVar6 < lVar3);
      *(int *)(param_1 + 0x510) = (int)uVar11;
    }
  }
  return;
}



// FUNCTION 140aa5b40 FUN_140aa5b40 body=1819 status=ok
// SIG undefined FUN_140aa5b40(void)

void FUN_140aa5b40(longlong param_1,char param_2,float param_3)

{
  uint *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res8;
  float local_res20;
  float local_198;
  int local_190;
  uint uStack_18c;
  uint uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  int iStack_138;
  uint uStack_134;
  uint *local_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 local_120;
  longlong *local_118;
  undefined8 uStack_110;
  uint *puStack_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  
  lVar18 = 0x630;
  if (*(int *)(param_1 + 0x638) == 0) {
    lVar18 = 0x608;
  }
  if (*(int *)(lVar18 + 8 + param_1) != 0) {
    fVar3 = *(float *)(param_1 + 0x644);
    lVar8 = *(longlong *)(param_1 + 0x118);
    bVar10 = true;
    puVar1 = (uint *)(lVar8 + 0x2c0);
    local_158 = 0.0;
    fVar24 = 0.0;
    fVar27 = 0.0;
    uVar6 = *(uint *)(lVar8 + 0x2d8);
    local_res8 = 0.0;
    local_190 = 0;
    uStack_18c = 1;
    uStack_17c = 0;
    iStack_178 = 0;
    if (uVar6 != 0) {
      puVar17 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar7 = *puVar17;
      iStack_178 = 0;
      local_190 = 0;
      while (uVar7 == 0) {
        lVar14 = (longlong)local_190;
        iStack_178 = iStack_178 + 0x20;
        iVar12 = local_190 + 1;
        bVar9 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_190;
        local_190 = iVar12;
        if (bVar9) goto LAB_140aa5cc2;
        uVar7 = puVar17[lVar14 + 1];
      }
      uStack_18c = uVar7 - 1 & uVar7 ^ uVar7;
      iVar12 = 0x1f;
      if (uStack_18c != 0) {
        for (; uStack_18c >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_18c == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_17c = (iStack_178 - iVar12) + 0x1f;
      if ((int)uVar6 < (int)uStack_17c) {
LAB_140aa5cc2:
        uStack_17c = uVar6;
      }
    }
    uVar7 = *(uint *)(lVar8 + 0x2d8);
    uStack_128 = 0xffffffff;
    uStack_124 = uStack_17c;
    local_120 = CONCAT44(uStack_174,iStack_178);
    uStack_110 = CONCAT44(uStack_18c,local_190);
    uVar16 = uVar7 & 0xffffffe0;
    iStack_138 = local_190;
    uStack_134 = uStack_18c;
    uStack_17c = uVar7;
    if (uVar7 != uVar6) {
      puVar17 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar13 = puVar17[(int)uVar7 >> 5] & -1 << ((byte)uVar7 & 0x1f);
      iVar12 = (int)uVar7 >> 5;
      while (uVar13 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_140aa5d97;
        uVar13 = puVar17[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar12 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_17c = (uVar16 - iVar12) + 0x1f;
      if ((int)uVar6 < (int)uStack_17c) {
LAB_140aa5d97:
        uStack_17c = uVar6;
      }
    }
    fStack_160 = 0.0;
    fStack_164 = 0.0;
    fStack_15c = 0.0;
    local_168 = 0.0;
    local_198 = 0.0;
    local_res20 = 0.0;
    local_130 = puVar1;
    local_118 = (longlong *)(lVar8 + 0x2b0);
    puStack_108 = puVar1;
    uStack_f8 = local_120;
    uStack_100 = uStack_128;
    uStack_fc = uStack_124;
    while( true ) {
      if ((uStack_124 == uStack_17c) && (local_130 == puVar1)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) break;
      plVar15 = *(longlong **)(lVar18 + param_1);
      lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x2b0) + (longlong)(int)uStack_124 * 0x10);
      plVar2 = plVar15 + *(int *)(lVar18 + 8 + param_1);
      for (; fVar26 = local_168, plVar15 != plVar2; plVar15 = plVar15 + 1) {
        if (*plVar15 == *(longlong *)(lVar14 + 0x18)) {
          lVar11 = FUN_1429f11d0();
          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            if (bVar10) {
              fVar24 = (float)((ulonglong)*(undefined8 *)(lVar14 + 0x1e0) >> 0x20);
              bVar10 = false;
              fVar26 = *(float *)(lVar14 + 0x1d0);
              fStack_164 = *(float *)(lVar14 + 0x1d4);
              fStack_160 = *(float *)(lVar14 + 0x1d8);
              fStack_15c = *(float *)(lVar14 + 0x1dc);
              local_158 = (float)*(undefined8 *)(lVar14 + 0x1e0);
              fVar27 = *(float *)(lVar14 + 0x1e8);
              local_res8 = *(float *)(lVar14 + 0x1e8);
              local_res20 = fStack_164;
              local_198 = fStack_160;
            }
            else {
              fVar19 = local_168 + fStack_15c;
              fStack_15c = local_168 - fStack_15c;
              fVar27 = fStack_164 + local_158;
              fStack_164 = fStack_164 - local_158;
              fVar21 = fStack_160 - fVar24;
              fStack_160 = fStack_160 + fVar24;
              fVar26 = fVar19;
              if (fStack_15c <= fVar19) {
                fVar26 = fStack_15c;
              }
              fVar25 = fVar27;
              if (fStack_164 <= fVar27) {
                fVar25 = fStack_164;
              }
              fVar23 = fStack_160;
              if (fVar21 <= fStack_160) {
                fVar23 = fVar21;
              }
              if (fVar19 <= fStack_15c) {
                fVar19 = fStack_15c;
              }
              if (fVar27 <= fStack_164) {
                fVar27 = fStack_164;
              }
              if (fStack_160 <= fVar21) {
                fStack_160 = fVar21;
              }
              fVar21 = *(float *)(lVar14 + 0x1d0);
              fVar4 = *(float *)(lVar14 + 0x1d4);
              fVar20 = fVar21 - *(float *)(lVar14 + 0x1dc);
              fVar5 = *(float *)(lVar14 + 0x1d8);
              fVar24 = fVar4 - *(float *)(lVar14 + 0x1e0);
              fVar22 = fVar5 - *(float *)(lVar14 + 0x1e4);
              if (fVar20 < fVar26) {
                fVar26 = fVar20;
              }
              if (fVar24 < fVar25) {
                fVar25 = fVar24;
              }
              if (fVar22 < fVar23) {
                fVar23 = fVar22;
              }
              if (fVar19 < fVar20) {
                fVar19 = fVar20;
              }
              if (fVar27 < fVar24) {
                fVar27 = fVar24;
              }
              if (fStack_160 < fVar22) {
                fStack_160 = fVar22;
              }
              fVar20 = *(float *)(lVar14 + 0x1dc) + fVar21;
              fVar24 = *(float *)(lVar14 + 0x1e0) + fVar4;
              fVar22 = fVar5 + *(float *)(lVar14 + 0x1e4);
              if (fVar20 < fVar26) {
                fVar26 = fVar20;
              }
              if (fVar24 < fVar25) {
                fVar25 = fVar24;
              }
              if (fVar22 < fVar23) {
                fVar23 = fVar22;
              }
              if (fVar19 < fVar20) {
                fVar19 = fVar20;
              }
              if (fVar27 < fVar24) {
                fVar27 = fVar24;
              }
              if (fStack_160 < fVar22) {
                fStack_160 = fVar22;
              }
              fVar19 = fVar19 - fVar26;
              fVar27 = fVar27 - fVar25;
              fVar20 = fStack_160 - fVar23;
              fStack_15c = fVar19 * 0.5;
              fVar26 = fVar26 + fStack_15c;
              local_158 = fVar27 * 0.5;
              fVar24 = fVar20 * 0.5;
              fStack_164 = fVar25 + local_158;
              fStack_160 = fVar23 + fVar24;
              fVar19 = SQRT((fVar19 * fVar19 + fVar27 * fVar27 + fVar20 * fVar20) * 0.25);
              local_res8 = SQRT((local_168 - fVar26) * (local_168 - fVar26) +
                                (local_res20 - fStack_164) * (local_res20 - fStack_164) +
                                (local_198 - fStack_160) * (local_198 - fStack_160)) + local_res8;
              fVar27 = SQRT((fVar4 - fStack_164) * (fVar4 - fStack_164) +
                            (fVar21 - fVar26) * (fVar21 - fVar26) +
                            (fVar5 - fStack_160) * (fVar5 - fStack_160)) +
                       *(float *)(lVar14 + 0x1e8);
              if (fVar27 <= local_res8) {
                fVar27 = local_res8;
              }
              local_res8 = fVar27;
              local_res20 = fStack_164;
              local_198 = fStack_160;
              if (fVar19 <= fVar27) {
                fVar27 = fVar19;
                local_res8 = fVar19;
              }
            }
          }
          break;
        }
      }
      uStack_128 = uStack_128 & ~uStack_134;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_138);
      local_168 = fVar26;
    }
    if (param_2 == '\0') {
      *(float *)(param_1 + 0x644) = fVar27;
    }
    else if (param_2 == '\x01') {
      if (local_158 <= fVar24) {
        local_158 = fVar24;
      }
      if (local_158 <= fStack_15c) {
        local_158 = fStack_15c;
      }
      *(float *)(param_1 + 0x644) = local_158;
    }
    param_3 = param_3 * *(float *)(param_1 + 0x644);
    *(float *)(param_1 + 0x644) = param_3;
    if ((*(char *)(param_1 + 0x604) != '\0') && (param_3 != fVar3)) {
      FUN_140ac1c00(param_1);
    }
  }
  return;
}



// FUNCTION 140aa6260 FUN_140aa6260 body=2271 status=ok
// SIG undefined FUN_140aa6260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140aa6260(longlong *param_1,longlong *param_2,undefined8 param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  float *pfVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined8 local_220;
  undefined4 local_218;
  float local_208;
  undefined8 uStack_204;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  int *local_188;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [28];
  float local_13c;
  float local_138;
  undefined4 local_134;
  longlong local_128;
  undefined1 local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  uVar7 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (param_1 != (longlong *)0x0) {
    local_d8 = uVar7;
    lVar8 = (**(code **)(*param_1 + 0x148))();
    uVar7 = 0;
    if (lVar8 != 0) {
      lVar8 = FUN_140aab610(lVar8);
      uVar7 = 0;
      if (lVar8 != 0) {
        plVar14 = (longlong *)0x0;
        plVar15 = plVar14;
        if (param_2 != (longlong *)0x0) {
          plVar9 = (longlong *)FUN_14130c760();
          plVar11 = param_2;
          do {
            plVar15 = param_2;
            if (plVar11 == plVar9) break;
            plVar11 = (longlong *)plVar11[6];
            plVar15 = plVar14;
          } while (plVar11 != (longlong *)0x0);
        }
        plVar11 = (longlong *)plVar15[0x1f];
        if (plVar11 == (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x368))(plVar15);
          plVar11 = (longlong *)plVar15[0x1f];
        }
        (**(code **)(*plVar11 + 0x6f0))(plVar11,local_158);
        fVar4 = DAT_1464aa790;
        fVar3 = DAT_1464aa788._4_4_;
        fVar46 = (float)DAT_1464aa788;
        fVar47 = param_4[4];
        fVar48 = param_4[5];
        fVar49 = param_4[6];
        fVar19 = *param_4;
        fVar37 = param_4[1];
        fVar21 = param_4[2];
        fVar22 = param_4[3];
        uStack_204 = 0;
        local_208 = -90.0;
        uVar5 = FRotator::Quaternion(&local_208,&local_178);
        fVar42 = fRam0000000146867578;
        fVar41 = fRam0000000146867574;
        fVar29 = _DAT_146867570;
        fVar28 = fRam0000000146867518;
        fVar27 = fRam0000000146867514;
        fVar36 = _DAT_146867510;
        local_e8 = (float)((uint)_DAT_146867510 & _DAT_146867520);
        fStack_e4 = (float)((uint)fRam0000000146867514 & uRam0000000146867524);
        fStack_e0 = (float)((uint)fRam0000000146867518 & uRam0000000146867528);
        fStack_dc = (float)((uint)fRam000000014686751c & uRam000000014686752c);
        auVar16._4_4_ = fStack_e4;
        auVar16._0_4_ = local_e8;
        auVar16._8_4_ = fStack_e0;
        auVar16._12_4_ = fStack_dc;
        auVar17._4_4_ = fVar3;
        auVar17._0_4_ = fVar46;
        auVar17._8_4_ = fVar4;
        auVar17._12_4_ = 0;
        auVar17 = minps(auVar16,auVar17);
        auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146867574);
        auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146867570);
        auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146867578);
        auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam000000014686757c);
        iVar6 = movmskps(uVar5,auVar18);
        if (iVar6 == 0) {
          fVar41 = fVar46 * 0.0;
          fVar42 = fVar3 * 0.0;
          fVar23 = fVar4 * 0.0;
          local_108 = fStack_16c * fVar19 * _DAT_146867550 + local_178 * fVar22 +
                      fStack_170 * fVar37 * _DAT_146867540 + fStack_174 * fVar21 * _DAT_146867530;
          fStack_104 = fStack_170 * fVar19 * fRam0000000146867554 + fStack_174 * fVar22 +
                       fStack_16c * fVar37 * fRam0000000146867544 +
                       local_178 * fVar21 * fRam0000000146867534;
          fStack_100 = fStack_174 * fVar19 * fRam0000000146867558 + fStack_170 * fVar22 +
                       local_178 * fVar37 * fRam0000000146867548 +
                       fStack_16c * fVar21 * fRam0000000146867538;
          fStack_fc = local_178 * fVar19 * fRam000000014686755c + fStack_16c * fVar22 +
                      fStack_174 * fVar37 * fRam000000014686754c +
                      fStack_170 * fVar21 * fRam000000014686753c;
          fVar36 = fVar23 * fVar37 - fVar42 * fVar21;
          fVar27 = fVar41 * fVar21 - fVar23 * fVar19;
          fVar28 = fVar42 * fVar19 - fVar41 * fVar37;
          fVar29 = fVar22 * 0.0 - fVar22 * 0.0;
          fVar36 = fVar36 + fVar36;
          fVar27 = fVar27 + fVar27;
          fVar28 = fVar28 + fVar28;
          fVar29 = fVar29 + fVar29;
          local_f8._4_4_ = (fVar36 * fVar21 - fVar28 * fVar19) + fVar27 * fVar22 + fVar42 + fVar48;
          local_f8._0_4_ = (fVar28 * fVar37 - fVar27 * fVar21) + fVar36 * fVar22 + fVar41 + fVar47;
          fStack_f0 = (fVar27 * fVar19 - fVar36 * fVar37) + fVar28 * fVar22 + fVar23 + fVar49;
          fStack_ec = (fVar29 * fVar22 - fVar29 * fVar22) + fVar29 * fVar22 + 0.0 + 0.0;
        }
        else {
          fVar23 = fVar37 + fVar37;
          fVar25 = fVar21 + fVar21;
          fVar26 = (fVar19 + fVar19) * fVar19;
          fVar24 = (fVar19 + fVar19) * fVar22;
          fVar43 = (fVar25 * fVar22 + fVar23 * fVar19) * fVar46;
          fVar44 = (fVar24 + fVar25 * fVar37) * fVar3;
          fVar45 = (fVar23 * fVar22 + fVar25 * fVar19) * fVar4;
          fVar30 = fVar3 * (fVar23 * fVar19 - fVar25 * fVar22);
          fVar32 = fVar4 * (fVar25 * fVar37 - fVar24);
          fVar34 = fVar46 * (fVar25 * fVar19 - fVar23 * fVar22);
          fVar19 = (float)((uint)((_DAT_146867510 - (fVar25 * fVar21 + fVar23 * fVar37)) * fVar46) &
                          _DAT_146867520);
          fVar21 = (float)((uint)((fRam0000000146867514 - (fVar25 * fVar21 + fVar26)) * fVar3) &
                          uRam0000000146867524);
          fVar24 = (float)((uint)((fRam0000000146867518 - (fVar23 * fVar37 + fVar26)) * fVar4) &
                          uRam0000000146867528);
          fVar25 = (float)((uint)((fRam000000014686751c - (fVar26 + fVar26)) * 0.0) &
                          uRam000000014686752c);
          fVar22 = fStack_174 + fStack_174;
          fVar23 = fStack_170 + fStack_170;
          fVar26 = (local_178 + local_178) * local_178;
          fVar37 = fStack_16c * (local_178 + local_178);
          fVar38 = (fStack_16c * fVar23 + local_178 * fVar22) * local_e8;
          fVar39 = (fVar37 + fStack_174 * fVar23) * fStack_e4;
          fVar40 = (fStack_16c * fVar22 + local_178 * fVar23) * fStack_e0;
          fVar31 = fStack_e4 * (local_178 * fVar22 - fStack_16c * fVar23);
          fVar33 = fStack_e0 * (fStack_174 * fVar23 - fVar37);
          fVar35 = local_e8 * (local_178 * fVar23 - fStack_16c * fVar22);
          fVar37 = (float)((uint)((_DAT_146867510 - (fVar23 * fStack_170 + fVar22 * fStack_174)) *
                                 local_e8) & _DAT_146867520);
          fVar23 = (float)((uint)((fRam0000000146867514 - (fVar23 * fStack_170 + fVar26)) *
                                 fStack_e4) & uRam0000000146867524);
          fVar22 = (float)((uint)((fRam0000000146867518 - (fVar22 * fStack_174 + fVar26)) *
                                 fStack_e0) & uRam0000000146867528);
          fVar26 = (float)((uint)((fRam000000014686751c - (fVar26 + fVar26)) * fStack_dc) &
                          uRam000000014686752c);
          local_1f8 = fVar38 * fVar30 + fVar37 * fVar19 + fVar35 * fVar45 + fVar26 * fVar47;
          fStack_1f4 = fVar38 * fVar21 + fVar37 * fVar43 + fVar35 * fVar32 + fVar26 * fVar48;
          fStack_1f0 = fVar38 * fVar44 + fVar37 * fVar34 + fVar35 * fVar24 + fVar26 * fVar49;
          fStack_1ec = fVar38 * fVar25 + fVar37 * fVar25 + fVar35 * fVar25 +
                       fVar26 * fRam000000014686751c;
          local_1e8 = fVar23 * fVar30 + fVar31 * fVar19 + fVar39 * fVar45 + fVar26 * fVar47;
          fStack_1e4 = fVar23 * fVar21 + fVar31 * fVar43 + fVar39 * fVar32 + fVar26 * fVar48;
          fStack_1e0 = fVar23 * fVar44 + fVar31 * fVar34 + fVar39 * fVar24 + fVar26 * fVar49;
          fStack_1dc = fVar23 * fVar25 + fVar31 * fVar25 + fVar39 * fVar25 +
                       fVar26 * fRam000000014686751c;
          local_1d8 = fVar33 * fVar30 + fVar40 * fVar19 + fVar22 * fVar45 + fVar26 * fVar47;
          fStack_1d4 = fVar33 * fVar21 + fVar40 * fVar43 + fVar22 * fVar32 + fVar26 * fVar48;
          fStack_1d0 = fVar33 * fVar44 + fVar40 * fVar34 + fVar22 * fVar24 + fVar26 * fVar49;
          fStack_1cc = fVar33 * fVar25 + fVar40 * fVar25 + fVar22 * fVar25 +
                       fVar26 * fRam000000014686751c;
          local_1c8 = fVar30 * 0.0 + fVar19 * 0.0 + fVar45 * 0.0 + fRam000000014686751c * fVar47;
          fStack_1c4 = fVar21 * 0.0 + fVar43 * 0.0 + fVar32 * 0.0 + fRam000000014686751c * fVar48;
          fStack_1c0 = fVar44 * 0.0 + fVar34 * 0.0 + fVar24 * 0.0 + fRam000000014686751c * fVar49;
          fStack_1bc = fVar25 * 0.0 + fVar25 * 0.0 + fVar25 * 0.0 +
                       fRam000000014686751c * fRam000000014686751c;
          FMatrix::RemoveScaling(&local_1f8);
          fVar47 = (float)(-(uint)(fVar29 <= local_e8 * fVar46) & (_DAT_146867560 ^ (uint)fVar36) ^
                          _DAT_146867560);
          fVar48 = (float)(-(uint)(fVar41 <= fStack_e4 * fVar3) &
                           (uRam0000000146867564 ^ (uint)fVar27) ^ uRam0000000146867564);
          fVar49 = (float)(-(uint)(fVar42 <= fStack_e0 * fVar4) &
                           (uRam0000000146867568 ^ (uint)fVar28) ^ uRam0000000146867568);
          local_1f8 = local_1f8 * fVar47;
          fStack_1f4 = fStack_1f4 * fVar47;
          fStack_1f0 = fStack_1f0 * fVar47;
          fStack_1e4 = fStack_1e4 * fVar48;
          fStack_1e0 = fStack_1e0 * fVar48;
          local_1e8 = local_1e8 * fVar48;
          fStack_1d4 = fStack_1d4 * fVar49;
          fStack_1d0 = fStack_1d0 * fVar49;
          local_1d8 = local_1d8 * fVar49;
          FQuat::FQuat(&local_168,&local_1f8);
          local_218 = 0x322bcc77;
          auVar20._0_4_ = local_168 * local_168 + fStack_160 * fStack_160;
          auVar20._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
          auVar20._8_4_ = fStack_160 * fStack_160 + local_168 * local_168;
          auVar20._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
          fVar37 = auVar20._4_4_ + auVar20._0_4_;
          fVar21 = auVar20._8_4_ + auVar20._4_4_;
          fVar22 = auVar20._12_4_ + auVar20._8_4_;
          fVar36 = auVar20._0_4_ + auVar20._12_4_;
          auVar2._4_4_ = fVar21;
          auVar2._0_4_ = fVar37;
          auVar2._8_4_ = fVar22;
          auVar2._12_4_ = fVar36;
          auVar17 = rsqrtps(auVar20,auVar2);
          fVar47 = auVar17._0_4_;
          fVar48 = auVar17._4_4_;
          fVar49 = auVar17._8_4_;
          fVar19 = auVar17._12_4_;
          fVar47 = (_DAT_146867500 - fVar47 * fVar47 * fVar37 * _DAT_146867500) * fVar47 + fVar47;
          fVar48 = (fRam0000000146867504 - fVar48 * fVar48 * fVar21 * fRam0000000146867504) * fVar48
                   + fVar48;
          fVar49 = (fRam0000000146867508 - fVar49 * fVar49 * fVar22 * fRam0000000146867508) * fVar49
                   + fVar49;
          fVar19 = (fRam000000014686750c - fVar19 * fVar19 * fVar36 * fRam000000014686750c) * fVar19
                   + fVar19;
          local_f8._4_4_ = fStack_1c4;
          local_f8._0_4_ = local_1c8;
          fStack_f0 = fStack_1c0;
          local_108 = (float)(((uint)(((_DAT_146867500 - fVar47 * fVar47 * fVar37 * _DAT_146867500)
                                       * fVar47 + fVar47) * local_168) ^ _DAT_1468674f0) &
                              -(uint)(1e-08 <= fVar37) ^ _DAT_1468674f0);
          fStack_104 = (float)(((uint)(((fRam0000000146867504 -
                                        fVar48 * fVar48 * fVar21 * fRam0000000146867504) * fVar48 +
                                       fVar48) * fStack_164) ^ uRam00000001468674f4) &
                               -(uint)(1e-08 <= fVar21) ^ uRam00000001468674f4);
          fStack_100 = (float)(((uint)(((fRam0000000146867508 -
                                        fVar49 * fVar49 * fVar22 * fRam0000000146867508) * fVar49 +
                                       fVar49) * fStack_160) ^ uRam00000001468674f8) &
                               -(uint)(1e-08 <= fVar22) ^ uRam00000001468674f8);
          fStack_fc = (float)(((uint)(((fRam000000014686750c -
                                       fVar19 * fVar19 * fVar36 * fRam000000014686750c) * fVar19 +
                                      fVar19) * fStack_15c) ^ uRam00000001468674fc) &
                              -(uint)(1e-08 <= fVar36) ^ uRam00000001468674fc);
          fStack_ec = 0.0;
        }
        fStack_dc = fStack_dc * 0.0;
        fStack_e0 = fStack_e0 * fVar4;
        fStack_e4 = fStack_e4 * fVar3;
        local_e8 = local_e8 * fVar46;
        local_13c = *param_5;
        local_228 = &local_1b8;
        local_220 = 0;
        local_138 = local_13c + local_13c;
        local_134 = 0;
        local_13c = -local_13c;
        local_118 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = (int *)0x0;
        local_180 = 0;
        FUN_140c10df0(lVar8,&local_108,&DAT_1468b5b70,local_158);
        if ((int)local_1a0 != 0) {
          fVar47 = param_4[1];
          local_208 = param_4[4];
          fVar48 = param_4[5];
          uStack_204 = *(undefined8 *)(param_4 + 5);
          fStack_1fc = param_4[7];
          fVar21 = -*param_4;
          fVar21 = fVar21 + fVar21;
          fVar19 = 3.4028235e+38;
          fVar49 = 1.1754944e-38;
          fVar37 = fVar47 + fVar47;
          fVar22 = fVar37 * param_4[3] - fVar21 * param_4[2];
          fVar46 = fVar21 * param_4[3] + fVar37 * param_4[2];
          fVar47 = (fVar21 * *param_4 - fVar37 * fVar47) + 1.0;
          if (0 < (int)local_1b0) {
            pfVar12 = (float *)(local_1b8 + 8);
            fVar37 = fVar49;
            fVar21 = fVar19;
            do {
              for (piVar10 = local_188; piVar10 != local_188 + (int)local_180; piVar10 = piVar10 + 1
                  ) {
                fVar49 = fVar37;
                fVar19 = fVar21;
                if (*piVar10 == (int)plVar14) goto LAB_140aa6a26;
              }
              fVar19 = -((pfVar12[-2] - local_208) * fVar22 + (pfVar12[-1] - fVar48) * fVar46 +
                        (*pfVar12 - param_4[6]) * fVar47);
              fVar49 = fVar19;
              if (fVar19 <= fVar37) {
                fVar49 = fVar37;
              }
              if (fVar21 <= fVar19) {
                fVar19 = fVar21;
              }
LAB_140aa6a26:
              uVar13 = (int)plVar14 + 1;
              plVar14 = (longlong *)(ulonglong)uVar13;
              pfVar12 = pfVar12 + 3;
              fVar37 = fVar49;
              fVar21 = fVar19;
            } while ((int)uVar13 < (int)local_1b0);
          }
          fVar19 = fVar19 + -0.5;
          plVar14 = (longlong *)0x1;
          fVar49 = (fVar49 + 0.5) - fVar19;
          if (fVar49 <= 1.0) {
            fVar49 = 1.0;
          }
          auVar1._4_4_ = fVar48 - fVar46 * fVar19;
          auVar1._0_4_ = local_208 - fVar22 * fVar19;
          auVar1._8_4_ = param_4[6] - fVar47 * fVar19;
          auVar1._12_4_ = 0;
          *(undefined1 (*) [16])(param_4 + 4) = auVar1;
          *param_5 = fVar49;
        }
        if (local_188 != (int *)0x0) {
          FMemory::Free(local_188);
        }
        if (local_198 != 0) {
          FMemory::Free();
        }
        if (local_1a8 != 0) {
          FMemory::Free();
        }
        if (local_1b8 != 0) {
          FMemory::Free();
        }
        if (local_128 == 0) {
          return plVar14;
        }
        FMemory::Free();
        return plVar14;
      }
    }
  }
  return (longlong *)(uVar7 & 0xffffffffffffff00);
}



// FUNCTION 140aa6b40 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<UFlareSimulatedSector_*,SectorVariation>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,SectorVariation,0>,FDefaultSetAllocator>
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
      TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140aa6bf0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
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
      TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140aa6ca0 FUN_140aa6ca0 body=152 status=ok
// SIG undefined FUN_140aa6ca0(void)

undefined8 FUN_140aa6ca0(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = param_2 >> 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  cVar5 = '\0';
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    cVar5 = '\x1f' - (char)iVar1;
  }
  uVar3 = 1 << (0x20U - cVar5 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
  uVar2 = 4;
  if ((3 < uVar3) && (uVar2 = uVar3, param_2 < 4)) {
    uVar2 = 4;
  }
  if ((0 < (int)param_2) &&
     (((iVar1 = *(int *)(param_1 + 0x248), iVar1 == 0 || (iVar1 < (int)uVar2)) ||
      (((int)uVar2 < iVar1 && (param_3 != '\0')))))) {
    *(uint *)(param_1 + 0x248) = uVar2;
    FUN_140ab91d0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140aa6d40 FUN_140aa6d40 body=161 status=ok
// SIG undefined FUN_140aa6d40(void)

undefined8 FUN_140aa6d40(longlong param_1,uint param_2,char param_3)

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
      FUN_140ab9680(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140aa6df0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
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



// FUNCTION 140aa6ea0 FUN_140aa6ea0 body=103 status=ok
// SIG undefined FUN_140aa6ea0(void)

undefined1 FUN_140aa6ea0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FWeakObjectPtr::Get(param_2);
  lVar2 = FUN_140aaa210(param_1,uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_140aaa190(lVar2,*(undefined4 *)(param_2 + 8));
    if (lVar2 != 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + param_3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140aa6f10 FUN_140aa6f10 body=101 status=ok
// SIG undefined FUN_140aa6f10(void)

undefined1 FUN_140aa6f10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140ac2e30();
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar2 != 0) {
      cVar1 = FUN_140cf6d80(lVar2,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140aa6f80 FUN_140aa6f80 body=324 status=ok
// SIG undefined FUN_140aa6f80(void)

undefined8 FUN_140aa6f80(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = FUN_140ac2e30();
  if ((char)uVar6 == '\0') {
    return uVar6;
  }
  FUN_142b47930(*(undefined8 *)(param_1 + 0x10),&local_18,*(undefined4 *)(param_2 + 8));
  if (local_18 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_142b57fb0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(local_18 + 8),param_3);
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))();
    if (cVar5 == '\0') {
      FUN_142b42170(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(local_18 + 8),param_3);
    }
    else {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x20);
      if (lVar7 != 0) {
        lVar7 = FUN_140cff230(lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x520);
          uVar4 = *(undefined4 *)(param_2 + 8);
          iVar3 = *(int *)(param_1 + 0x30);
          *(int *)(param_1 + 0x30) = iVar3 + 1;
          if (*(int *)(param_1 + 0x34) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar3);
          }
          puVar8 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x28));
          *puVar8 = uVar4;
          *(longlong *)(puVar8 + 2) = lVar7 + 1;
          puVar8[1] = param_3;
        }
      }
    }
    uVar6 = 1;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return uVar6;
}



// FUNCTION 140aa70d0 FUN_140aa70d0 body=95 status=ok
// SIG undefined FUN_140aa70d0(void)

void FUN_140aa70d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14424ccd8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar1 + 2,param_1 + 0x10);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *puVar1 = &PTR_GetPoolName_14424cd20;
  }
  return;
}



// FUNCTION 140aa7130 FUN_140aa7130 body=89 status=ok
// SIG undefined FUN_140aa7130(void)

void FUN_140aa7130(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14424cd68;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_14424cdb0;
  }
  return;
}



// FUNCTION 140aa7190 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14424cdf8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14424ce40;
  }
  return;
}



// FUNCTION 140aa71e0 FUN_140aa71e0 body=549 status=ok
// SIG undefined FUN_140aa71e0(void)

undefined8 FUN_140aa71e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_38 [40];
  undefined1 local_10;
  ushort local_e;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = param_1[0xa3];
  if (lVar2 == 0) {
    return 0;
  }
  lVar6 = lVar2 + 0x30;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  lVar5 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar2 + 0x38)) {
      return 0;
    }
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      return 0;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 0x38) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = AItem::GetPrivateStaticClass();
    do {
      if (lVar3 == lVar2) {
        FActorSpawnParameters::FActorSpawnParameters(local_38);
        lVar2 = param_1[0xa3];
        local_e = local_e | 2;
        lVar7 = lVar2 + 0x30;
        local_10 = 1;
        lVar6 = FWeakObjectPtr::Get(lVar7);
        lVar3 = lVar5;
        if (lVar6 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(lVar2 + 0x38)) || (*(longlong *)(lVar2 + 0x40) == 0))
          goto LAB_140aa73d9;
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar7,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar2 + 0x38) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar7);
          if (lVar6 == 0) goto LAB_140aa73d9;
        }
        lVar2 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140aa73d9;
        lVar7 = AItem::GetPrivateStaticClass();
        lVar2 = lVar6;
        goto LAB_140aa73c8;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar3 = lVar5, lVar2 != 0) {
LAB_140aa73c8:
    lVar3 = lVar6;
    if (lVar2 == lVar7) break;
  }
LAB_140aa73d9:
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar4 = UWorld::SpawnActor(uVar4,lVar3,0,0,local_38);
  return uVar4;
}



// FUNCTION 140aa7410 FUN_140aa7410 body=549 status=ok
// SIG undefined FUN_140aa7410(void)

undefined8 FUN_140aa7410(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_38 [40];
  undefined1 local_10;
  ushort local_e;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = param_1[0xa3];
  if (lVar2 == 0) {
    return 0;
  }
  lVar6 = lVar2 + 0x58;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  lVar5 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar2 + 0x60)) {
      return 0;
    }
    if (*(longlong *)(lVar2 + 0x68) == 0) {
      return 0;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 0x60) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = UNukerSkills001Widget::GetPrivateStaticClass();
    do {
      if (lVar3 == lVar2) {
        FActorSpawnParameters::FActorSpawnParameters(local_38);
        lVar2 = param_1[0xa3];
        local_e = local_e | 2;
        lVar7 = lVar2 + 0x58;
        local_10 = 1;
        lVar6 = FWeakObjectPtr::Get(lVar7);
        lVar3 = lVar5;
        if (lVar6 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(lVar2 + 0x60)) || (*(longlong *)(lVar2 + 0x68) == 0))
          goto LAB_140aa7609;
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar7,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar2 + 0x60) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar7);
          if (lVar6 == 0) goto LAB_140aa7609;
        }
        lVar2 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140aa7609;
        lVar7 = UNukerSkills001Widget::GetPrivateStaticClass();
        lVar2 = lVar6;
        goto LAB_140aa75f8;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar3 = lVar5, lVar2 != 0) {
LAB_140aa75f8:
    lVar3 = lVar6;
    if (lVar2 == lVar7) break;
  }
LAB_140aa7609:
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar4 = UWorld::SpawnActor(uVar4,lVar3,0,0,local_38);
  return uVar4;
}



// FUNCTION 140aa7660 FUN_140aa7660 body=133 status=ok
// SIG undefined FUN_140aa7660(void)

bool FUN_140aa7660(char *param_1)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  if (*param_1 != '\x04') {
    return *param_1 == '\x02';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_1 = '\0';
    return false;
  }
  cVar1 = FUN_140aa11e0(local_res8,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    *param_1 = '\x02';
    return true;
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  *param_1 = '\0';
  return false;
}



// FUNCTION 140aa76f0 FUN_140aa76f0 body=30 status=ok
// SIG undefined FUN_140aa76f0(void)

void FUN_140aa76f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140aa770a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 140aa7710 FUN_140aa7710 body=38 status=ok
// SIG undefined FUN_140aa7710(void)

void FUN_140aa7710(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x10))(param_1);
  FWeakObjectPtr::Get(param_1 + 2);
  return;
}



// FUNCTION 140aa7740 FUN_140aa7740 body=255 status=ok
// SIG undefined FUN_140aa7740(void)

longlong * FUN_140aa7740(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0x12 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0x12 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"[TickPos",8);
  lVar2 = local_28 + lVar2 * 2;
  ((wchar_t *)(lVar2 + 0x10))[0] = L't';
  ((wchar_t *)(lVar2 + 0x10))[1] = L'P';
  ((wchar_t *)(lVar2 + 0x14))[0] = L'h';
  ((wchar_t *)(lVar2 + 0x14))[1] = L'y';
  ((wchar_t *)(lVar2 + 0x18))[0] = L's';
  ((wchar_t *)(lVar2 + 0x18))[1] = L'i';
  ((wchar_t *)(lVar2 + 0x1c))[0] = L'c';
  ((wchar_t *)(lVar2 + 0x1c))[1] = L's';
  *(undefined2 *)(lVar2 + 0x20) = 0x5d;
  *(undefined2 *)(lVar2 + 0x22) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140aa7850 FUN_140aa7850 body=232 status=ok
// SIG undefined FUN_140aa7850(void)

undefined8 FUN_140aa7850(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0x18) * 8;
  do {
    if (lVar6 == lVar1) {
      return 1;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x230), lVar3 == 0)) {
LAB_140aa78e6:
      uVar5 = FWeakObjectPtr::Get(lVar6);
      lVar3 = FUN_140aabc10(param_1,uVar5);
      if ((lVar3 != 0) && (param_2 != 0)) {
        thunk_FUN_14145e8d0(param_2,lVar3);
      }
    }
    else {
      lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) || (param_2 == 0)) goto LAB_140aa78e6;
      thunk_FUN_14145e850(param_2,lVar3);
    }
    lVar6 = lVar6 + 8;
  } while( true );
}



// FUNCTION 140aa7940 FUN_140aa7940 body=84 status=ok
// SIG undefined FUN_140aa7940(void)

undefined8 FUN_140aa7940(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x48);
  }
  if (lVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x1030))(param_2,param_3);
  return 1;
}



// FUNCTION 140aa79a0 FUN_140aa79a0 body=73 status=ok
// SIG undefined FUN_140aa79a0(void)

undefined1 FUN_140aa79a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x10) != '\x04') {
    return 0;
  }
  uVar1 = FUN_14301bb40((char *)(param_1 + 0x10),local_18);
  FUN_14145fce0(param_2,uVar1,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140aa79f0 FUN_140aa79f0 body=618 status=ok
// SIG undefined FUN_140aa79f0(void)

undefined8 FUN_140aa79f0(longlong param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_d0;
  longlong local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  void *local_a0;
  int local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [24];
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  _guard_xfg_dispatch_icall_nop(&local_e8,0,0x60);
  local_90 = 1;
  if (*(int *)(param_1 + 0x20) < 1) {
    if (0 < *(int *)(param_1 + 0x30)) {
LAB_140aa7a94:
      cVar1 = FUN_140abb100(param_1,param_2,&local_e8);
      goto LAB_140aa7a99;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) < 1) {
      cVar1 = FUN_140abb290(param_1,param_2,&local_e8);
    }
    else {
      iVar2 = rand();
      iVar3 = (int)((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05);
      iVar2 = 1;
      if (iVar3 < 2) {
        iVar2 = iVar3;
      }
      if (iVar2 != 1) goto LAB_140aa7a94;
      cVar1 = FUN_140abb290();
    }
LAB_140aa7a99:
    if (cVar1 != '\0') {
      if ((*(char *)(param_1 + 0x10) == '\x03') &&
         (iVar2 = FUN_140aac530(param_1,param_2), iVar2 <= local_d0)) {
        local_d0 = iVar2;
      }
      local_88 = local_e8;
      local_80 = local_e0;
      local_78 = local_d8;
      local_68 = 0;
      local_60 = local_c0;
      local_70 = local_d0;
      if (local_c0 == 0) {
        local_5c = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_68,local_c0,0);
        puVar4 = (undefined8 *)(local_68 + 8);
        puVar5 = (undefined8 *)(local_c8 + 8);
        do {
          *(undefined1 *)(puVar4 + -1) = *(undefined1 *)(puVar5 + -1);
          *puVar4 = 0;
          iVar2 = *(int *)(puVar5 + 1);
          _Src = (void *)*puVar5;
          *(int *)(puVar4 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar2,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar2 << 3);
          }
          puVar4 = puVar4 + 3;
          puVar5 = puVar5 + 3;
          local_c0 = local_c0 + -1;
        } while (local_c0 != 0);
      }
      FUN_1409f3920(local_58,local_b8);
      local_40 = (void *)0x0;
      local_38 = local_98;
      if (local_98 == 0) {
        local_34 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_40,local_98,0);
        _guard_xfg_dispatch_icall_nop(local_40,local_a0,(longlong)local_98 << 3);
      }
      local_30 = (undefined1)local_90;
      local_2f = local_90._1_1_;
      FUN_14145fda0(param_2,&local_88);
      uVar6 = 1;
      goto LAB_140aa7c18;
    }
  }
  uVar6 = 0;
LAB_140aa7c18:
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_c8);
  return uVar6;
}



// FUNCTION 140aa7c70 FUN_140aa7c70 body=992 status=ok
// SIG undefined FUN_140aa7c70(void)

void FUN_140aa7c70(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  undefined4 local_e0 [8];
  undefined8 local_c0 [4];
  undefined4 local_a0 [8];
  undefined1 local_80 [32];
  longlong *local_60;
  undefined4 local_58 [8];
  undefined4 local_38 [8];
  
  puVar9 = local_38;
  if ((DAT_146867960 == '\0') && (puVar5 = (undefined8 *)FUN_140aab6c0(), puVar5 != &DAT_146867948))
  {
    DAT_146867948 = *puVar5;
    DAT_146867950 = (longlong *)puVar5[1];
    DAT_146867958 = (longlong *)puVar5[2];
    DAT_146867960 = '\x01';
  }
  cVar4 = FUN_142190080(DAT_146867948);
  if ((cVar4 != '\0') && (cVar4 = FUN_142194620(DAT_146867948), cVar4 != '\0')) {
    FUN_142190c10(&local_108,DAT_146867948);
    lVar8 = *(longlong *)(local_108 + 0xc0);
    if (*(longlong *)(local_108 + 0xc0) == 0) {
      lVar8 = local_108 + 0x20;
    }
    plVar6 = (longlong *)FUN_140aa2bd0(lVar8);
    FUN_14217e740(local_c0);
    FUN_142194380(local_c0,0x28,0,0,0);
    local_c0[0] = *(undefined8 *)(param_1 + 0x10);
    FUN_1421923f0(local_80,DAT_146867918,local_c0);
    if ((*DAT_146867950 != 0) && (cVar4 = FUN_1407ce010(DAT_146867950 + 1), cVar4 != '\0')) {
      plVar10 = (longlong *)*plVar6;
      plVar2 = plVar10 + (longlong)(int)plVar6[1] * 5;
      if (plVar10 != plVar2) {
        do {
          if ((*(longlong *)*plVar10 == *DAT_146867950) &&
             (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
              *(longlong *)(DAT_146867950[1] + 0x28))) {
            uVar7 = FUN_14217e5b0(puVar9,local_80);
            FUN_14217f450(plVar10 + 1,uVar7);
            goto LAB_140aa7e34;
          }
          plVar10 = plVar10 + 5;
        } while (plVar10 != plVar2);
      }
      local_60 = DAT_146867950;
      FUN_14217e5b0(local_58,local_80);
      iVar3 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
      }
      puVar5 = (undefined8 *)(*plVar6 + (longlong)iVar3 * 0x28);
      *puVar5 = local_60;
      FUN_14217e5b0(puVar5 + 1,local_58);
      puVar9 = local_58;
LAB_140aa7e34:
      FUN_14217f430(puVar9);
    }
    FUN_14217f430(local_80);
    FUN_14217f430(local_c0);
    if ((*DAT_146867958 != 0) && (cVar4 = FUN_1407ce010(DAT_146867958 + 1), cVar4 != '\0')) {
      plVar10 = (longlong *)*plVar6;
      plVar2 = plVar10 + (longlong)(int)plVar6[1] * 5;
      if (plVar10 != plVar2) {
        do {
          if ((*(longlong *)*plVar10 == *DAT_146867958) &&
             (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
              *(longlong *)(DAT_146867958[1] + 0x28))) {
            FUN_14217e740(local_a0);
            FUN_142194380(local_a0,0xe,0,1,0);
            local_a0[0] = param_2;
            FUN_14217f450(plVar10 + 1,local_a0);
            puVar9 = local_a0;
            goto LAB_140aa7f33;
          }
          plVar10 = plVar10 + 5;
        } while (plVar10 != plVar2);
      }
      local_e8 = DAT_146867958;
      FUN_14217e740(local_e0);
      FUN_142194380(local_e0,0xe,0,1,0);
      iVar3 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar3 + 1;
      local_e0[0] = param_2;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
      }
      puVar5 = (undefined8 *)(*plVar6 + (longlong)iVar3 * 0x28);
      *puVar5 = local_e8;
      FUN_14217e5b0(puVar5 + 1,local_e0);
      puVar9 = local_e0;
LAB_140aa7f33:
      FUN_14217f430(puVar9);
    }
    cVar4 = FUN_14218a740(&local_108,1);
    if (cVar4 != '\0') {
      local_f8 = local_108;
      plStack_f0 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      FUN_142194040(&local_f8);
      plVar6 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
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
    }
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_100 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar1 = (int *)((longlong)plStack_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_100 + 8))(plStack_100,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140aa8050 FUN_140aa8050 body=477 status=ok
// SIG undefined FUN_140aa8050(void)

void FUN_140aa8050(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140aa8121;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140aa8121:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x68 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      FUN_140aa83f0(lVar5 + 8,0);
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140aa8230 FUN_140aa8230 body=435 status=ok
// SIG undefined FUN_140aa8230(void)

void FUN_140aa8230(longlong param_1,int param_2)

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
  
  uStack_54 = 1;
  puVar1 = (uint *)(param_1 + 0x210);
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0x220);
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x218);
    if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
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
      if (bVar3) goto LAB_140aa8301;
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
LAB_140aa8301:
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
      lVar5 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar5 = param_1;
      }
      if (*(longlong *)(lVar5 + 0x28 + (longlong)iStack_1c * 0x40) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      FUN_1406e9690(&local_30);
    } while (iStack_1c < (int)puStack_28[4]);
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != param_2) {
    FUN_1405f0df0(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x224) != uVar4) {
    *(uint *)(param_1 + 0x224) = uVar4;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140aa83f0 FUN_140aa83f0 body=450 status=ok
// SIG undefined FUN_140aa83f0(void)

void FUN_140aa83f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140aa84c1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140aa84c1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x98 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140aa85c0 FUN_140aa85c0 body=20 status=ok
// SIG undefined FUN_140aa85c0(void)

void FUN_140aa85c0(longlong *param_1)

{
  if ((char)param_1[0x25] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140aa85cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x600))();
    return;
  }
  return;
}



// FUNCTION 140aa85e0 FUN_140aa85e0 body=1095 status=ok
// SIG undefined FUN_140aa85e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aa85e0(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  if ((((-1 < (int)param_2) && (local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108, param_2 < 2)) &&
      (plVar9 = (longlong *)(param_1 + 0x468 + (longlong)(int)param_2 * 0x50),
      plVar9 != (longlong *)0x0)) &&
     (((plVar9[2] == 0 || (*(char *)(plVar9[2] + 0x484) != '\x02')) && ((int)plVar9[9] != -1)))) {
    uVar8 = 0;
    plVar9[5] = param_3;
    local_d8 = 0;
    local_d0 = 0;
    if (param_3 != 0) {
      plVar6 = (longlong *)*plVar9;
      plVar4 = plVar6 + (longlong)(int)plVar9[1] * 3;
      if (plVar6 != plVar4) {
LAB_140aa86a8:
        if (*plVar6 != param_3) goto code_r0x000140aa86ad;
        plVar4 = (longlong *)plVar6[1];
        plVar6 = plVar4 + (longlong)(int)plVar6[2] * 4;
        uVar2 = local_d0;
        for (; local_d0 = uVar2, plVar4 != plVar6; plVar4 = plVar4 + 4) {
          if (*plVar4 != 0) {
            local_d0._0_4_ = (int)uVar2;
            lVar5 = (longlong)(int)local_d0;
            local_d0._0_4_ = (int)local_d0 + 1;
            local_d0._4_4_ = (undefined4)(uVar2 >> 0x20);
            if ((int)uVar8 < (int)local_d0) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_d8,uVar2 & 0xffffffff);
            }
            *(longlong *)(local_d8 + lVar5 * 8) = *plVar4;
            uVar8 = local_d0 >> 0x20;
          }
          uVar2 = local_d0;
        }
      }
    }
LAB_140aa8708:
    plVar4 = (longlong *)plVar9[2];
    if ((plVar4 != (longlong *)0x0) && ((char)plVar4[0x25] == '\x03')) {
      *(undefined1 *)((longlong)plVar4 + 0x484) = 2;
      (**(code **)(*plVar4 + 0x600))();
    }
    lVar7 = *plVar9;
    lVar5 = lVar7 + (longlong)(int)plVar9[1] * 0x18;
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
      plVar4 = *(longlong **)(lVar7 + 8);
      plVar6 = plVar4 + (longlong)*(int *)(lVar7 + 0x10) * 4;
      for (; plVar4 != plVar6; plVar4 = plVar4 + 4) {
        if (((*plVar4 != 0) && (plVar4[3] != 0)) && (*(longlong *)(*plVar4 + 0x908) != 0)) {
          FUN_142df2ca0();
        }
      }
    }
    if (plVar9[8] != 0) {
      FUN_140e78fa0();
    }
    if ((int)local_d0 == 0) {
      lVar7 = *plVar9;
      lVar5 = lVar7 + (longlong)(int)plVar9[1] * 0x18;
      for (; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
        plVar4 = *(longlong **)(lVar7 + 8);
        plVar6 = plVar4 + (longlong)*(int *)(lVar7 + 0x10) * 4;
        for (; plVar4 != plVar6; plVar4 = plVar4 + 4) {
          if (*plVar4 != 0) {
            FUN_140e2bbf0();
          }
        }
      }
    }
    else {
      FUN_141309e90(param_1,&local_d8,*(undefined1 *)((longlong)plVar9 + 0x4c));
    }
    lVar5 = plVar9[2];
    if (param_4 == '\0') {
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x45c);
        *(undefined4 *)(lVar5 + 0x480) = 0xffffffff;
        uVar3 = AActor::GetWorldTimerManager(lVar5);
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar4 + 1,lVar5);
          plVar4[2] = (longlong)FUN_140ab57c0;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar7;
          *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_c8 = 0;
        local_c0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_c8);
        }
        FWeakObjectPtr::operator=(local_b8,0);
        local_e0 = 0xbf800000;
        local_e8 = 0;
        local_b0 = 0;
        local_78 = (longlong *)0x0;
        local_68 = 0;
        local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar3,lVar5 + 0x4a8,&local_c8,uVar1);
        if (local_68 != 0) {
          plVar6 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar6 = local_78;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
    else if (lVar5 == 0) {
      FUN_140aa58c0(plVar9);
    }
    else {
      FUN_142227350(lVar5,0,1);
      plVar9[2] = 0;
      FUN_140aa58c0(plVar9);
    }
    if (plVar9[3] != 0) {
      FUN_140ab4430(plVar9[3],3);
      plVar9[3] = 0;
    }
    for (lVar5 = param_1 + 0x468; lVar5 != param_1 + 0x508; lVar5 = lVar5 + 0x50) {
      if ((*(longlong *)(lVar5 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x484) != '\x02')) goto LAB_140aa89f8;
    }
    FUN_14223e980(param_1,2);
LAB_140aa89f8:
    if (local_d8 != 0) {
      FMemory::Free();
    }
  }
  return;
code_r0x000140aa86ad:
  plVar6 = plVar6 + 3;
  if (plVar6 == plVar4) goto LAB_140aa8708;
  goto LAB_140aa86a8;
}



// FUNCTION 140aa8a30 FUN_140aa8a30 body=292 status=ok
// SIG undefined FUN_140aa8a30(void)

void FUN_140aa8a30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  FUN_14222a250();
  if ((*(char *)(param_1 + 0x128) == '\x03') &&
     (plVar1 = *(longlong **)(param_1 + 0x478), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x600))(plVar1);
    lVar2 = (longlong)(int)plVar1[0x8c];
    if ((int)plVar1[0x8c] != 0) {
      iVar7 = 0;
      bVar8 = *(longlong *)plVar1[0x8b] != param_1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(plVar1[0x8b] + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != param_1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(plVar1[0x8b] + (longlong)iVar7 * 8),
                       (void *)(plVar1[0x8b] + (longlong)iVar5 * 8),(longlong)(iVar6 - iVar5) << 3);
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(plVar1 + 0x8c) = iVar7;
    }
  }
  return;
}



// FUNCTION 140aa8b60 FUN_140aa8b60 body=42 status=ok
// SIG undefined FUN_140aa8b60(void)

void FUN_140aa8b60(longlong param_1)

{
  FUN_14222a250();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140aa5140(param_1);
    return;
  }
  return;
}



// FUNCTION 140aa8b90 FUN_140aa8b90 body=91 status=ok
// SIG undefined FUN_140aa8b90(void)

void FUN_140aa8b90(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x5a8) != 0)) {
        FUN_140ab4ee0(*(longlong *)(lVar1 + 0x5a8),param_1);
      }
    }
  }
  FUN_140af8460(param_1,param_2);
  return;
}



// FUNCTION 140aa8bf0 FUN_140aa8bf0 body=99 status=ok
// SIG undefined FUN_140aa8bf0(void)

void FUN_140aa8bf0(longlong param_1)

{
  FUN_14222a250();
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FUN_142f97a90();
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_142600fa0();
    (**(code **)(**(longlong **)(param_1 + 0x610) + 0x418))
              (*(longlong **)(param_1 + 0x610),&DAT_146532190);
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  return;
}



// FUNCTION 140aa8c60 FUN_140aa8c60 body=421 status=ok
// SIG undefined FUN_140aa8c60(void)

void FUN_140aa8c60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res8;
  
  FUN_14233a670();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x678), lVar4 != 0)) {
    iVar6 = 0;
    if (0 < *(int *)(lVar1 + 0x428)) {
      lVar8 = 0;
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x420) + lVar8);
        if ((((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)) &&
           (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_res8), *plVar3 == lVar4
           )) {
          if (((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar7 != 0) {
              lVar4 = FMemory::Realloc(*plVar7,0,0);
              *plVar7 = lVar4;
            }
            *(undefined4 *)(plVar7 + 1) = 0;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar6 < *(int *)(lVar1 + 0x428));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x420,0);
  }
  if ((*(longlong *)(param_1 + 0x220) != 0) && (iVar6 = FUN_142235230(), iVar6 != 3)) {
    lVar1 = *(longlong *)(param_1 + 0x220);
    uVar2 = *(undefined8 *)(lVar1 + 0x578);
    *(longlong *)(lVar1 + 0x578) = param_1;
    local_res8 = param_1;
    TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              (lVar1 + 0x518,&local_res8);
    TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap(lVar1 + 0x528);
    FUN_140abcbc0(param_1);
    if (((*(int *)(lVar1 + 0x4d0) == *(int *)(lVar1 + 0x4fc)) &&
        (((*(int *)(lVar1 + 0x520) == 0 && (*(int *)(lVar1 + 0x530) == 0)) &&
         (*(int *)(lVar1 + 0x550) == 0)))) && (*(int *)(lVar1 + 0x570) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5 != (*(char *)(lVar1 + 0x37) != '\0')) {
      FUN_14288e3d0(lVar1 + 0x28);
    }
    *(undefined8 *)(lVar1 + 0x578) = uVar2;
  }
  return;
}



// FUNCTION 140aa8e10 FUN_140aa8e10 body=126 status=ok
// SIG undefined FUN_140aa8e10(void)

void FUN_140aa8e10(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142f6c9f0(lVar1);
  if (lVar1 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar2 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f6e000(lVar1,&local_18);
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140aa8e90 FUN_140aa8e90 body=85 status=ok
// SIG undefined FUN_140aa8e90(void)

void FUN_140aa8e90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x10) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,param_1);
  }
  return;
}



// FUNCTION 140aa8ef0 FUN_140aa8ef0 body=1002 status=ok
// SIG undefined FUN_140aa8ef0(void)

undefined8 FUN_140aa8ef0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint local_res8;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a4 [12];
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined8 local_80;
  longlong *local_78;
  int local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [8];
  longlong local_50;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar7 == 0) || (local_res20 = lVar7, lVar8 = FUN_140aabc80(), lVar8 == 0)) {
    return 0;
  }
  plVar12 = *(longlong **)(lVar8 + 0x48);
  plVar11 = plVar12 + *(int *)(lVar8 + 0x50);
  local_98 = plVar11;
  if (plVar12 != plVar11) {
    do {
      plVar3 = (longlong *)*plVar12;
      if (plVar3 != (longlong *)0x0) {
        local_b8 = plVar12;
        lVar8 = FUN_141418960();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) &&
           (cVar6 = (**(code **)(*plVar3 + 0x280))(plVar3,lVar7), lVar8 = local_res20, cVar6 != '\0'
           )) {
          puVar13 = (undefined4 *)plVar3[0x10];
          puVar15 = puVar13 + (longlong)(int)plVar3[0x11] * 0xc;
          for (; puVar13 != puVar15; puVar13 = puVar13 + 0xc) {
            local_res8 = (uint)param_1;
            local_d0 = local_res8;
            local_d8 = 0xffffffff;
            uVar10 = 1 << ((char)*puVar13 - 1U & 0x1f) |
                     0x10000 << ((char)(int)plVar3[8] - 1U & 0x1f);
            local_d4 = 0;
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            if (*(longlong *)(DAT_146b33f38 + 0x108) != 0) {
              FWeakObjectPtr::operator=(&local_b0,plVar3[0xf]);
              local_d8 = local_b0;
              local_d4 = local_ac;
              local_d0 = uVar10;
              local_a8 = uVar10;
            }
            lVar7 = FWeakObjectPtr::Get(&local_d8);
            if (lVar7 != 0) {
              lVar7 = *(longlong *)(param_2 + 0x18);
              lVar14 = (longlong)*(int *)(param_2 + 0x20) * 0x50 + lVar7;
              for (; lVar7 != lVar14; lVar7 = lVar7 + 0x50) {
                cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_d8);
                if ((cVar6 == '\0') || (*(uint *)(lVar7 + 8) != local_d0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  if (lVar7 != 0) goto LAB_140aa926c;
                  break;
                }
              }
              local_c8 = 0;
              plStack_c0 = (longlong *)0x0;
              uVar9 = FUN_140a9ed30(local_58,puVar13 + 8,1,0);
              cVar6 = FUN_140aaae50(uVar9,&local_c8);
              if (local_50 != 0) {
                FMemory::Free();
              }
              plVar11 = plStack_c0;
              plVar12 = plStack_c0;
              if (cVar6 != '\0') {
                iVar2 = puVar13[1];
                if (plStack_c0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                  UNLOCK();
                }
                local_70 = FUN_140cfcf50(lVar8,&local_d8);
                plVar4 = plStack_c0;
                local_70 = iVar2 - local_70;
                local_78 = plVar11;
                local_90 = local_d8;
                local_8c = local_d4;
                local_88 = local_d0;
                local_80 = local_c8;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                  plVar11 = plStack_c0;
                }
                plVar12 = (longlong *)0x0;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = plVar11 + 1;
                  lVar7 = *plVar11;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  plVar12 = plStack_c0;
                  if ((int)lVar7 == 1) {
                    (**(code **)*plStack_c0)(plStack_c0);
                    plVar12 = plStack_c0;
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    iVar2 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar2 == 1) {
                      (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
                    }
                  }
                }
                FUN_140aa2990(param_2,&local_90);
                FWeakObjectPtr::operator=(local_a4,plVar3);
                local_68 = &local_d8;
                local_60 = local_a4;
                FUN_140a9d820(param_1 + 0x18,local_res18,&local_68);
                plVar11 = local_78;
                if (local_78 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = local_78 + 1;
                  lVar7 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  plVar12 = plStack_c0;
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_78)(local_78);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    iVar2 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar12 = plStack_c0;
                    if (iVar2 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11,1);
                      plVar12 = plStack_c0;
                    }
                  }
                }
              }
              plVar11 = plStack_c0;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar12 = plVar12 + 1;
                lVar7 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plStack_c0)(plStack_c0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
                  }
                }
              }
            }
LAB_140aa926c:
            lVar7 = local_res20;
            plVar11 = local_98;
            plVar12 = local_b8;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar11);
  }
  return 1;
}



// FUNCTION 140aa92e0 FUN_140aa92e0 body=802 status=ok
// SIG undefined FUN_140aa92e0(void)

undefined8 FUN_140aa92e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int local_res8;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  
  local_88 = (longlong *)0x0;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x2c8);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2c0);
  local_80 = iVar8;
  if (iVar8 == 0) {
    local_7c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_88,iVar8,0);
    lVar6 = lVar6 - (longlong)local_88;
    plVar7 = local_88;
    do {
      *plVar7 = *(longlong *)(lVar6 + (longlong)plVar7);
      lVar11 = *(longlong *)(lVar6 + 8 + (longlong)plVar7);
      plVar7[1] = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      plVar7 = plVar7 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  plVar12 = local_88 + (longlong)local_80 * 2;
  plVar7 = local_88;
  do {
    if (plVar7 == plVar12) {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
      return 1;
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_a0 = local_res8;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x108) != 0) {
      iVar8 = *(int *)(*plVar7 + 8);
      FWeakObjectPtr::operator=
                (&local_78,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x108) + 0x40));
      local_a8 = local_78;
      local_a4 = local_74;
      local_a0 = iVar8;
      local_70 = iVar8;
    }
    lVar6 = FWeakObjectPtr::Get(&local_a8);
    if (lVar6 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x18);
      lVar11 = (longlong)*(int *)(param_2 + 0x20) * 0x50 + lVar6;
      for (; lVar6 != lVar11; lVar6 = lVar6 + 0x50) {
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_a8);
        if ((cVar4 != '\0') && (*(int *)(lVar6 + 8) == local_a0)) goto LAB_140aa9436;
      }
      lVar6 = 0;
LAB_140aa9436:
      lVar11 = *plVar7;
      if (lVar6 == 0) {
        local_68[0] = 0;
        local_60 = 0;
        local_58 = 0;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        cVar4 = FUN_140aaac20(lVar11 + 0x18,&local_98,local_68);
        plVar9 = plStack_90;
        plVar10 = plStack_90;
        if (cVar4 != '\0') {
          lVar6 = *plVar7;
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
            UNLOCK();
          }
          local_30 = FUN_142b42710(uVar2,*(undefined4 *)(lVar6 + 8),1);
          plVar3 = plStack_90;
          local_50 = local_a8;
          local_4c = local_a4;
          local_48 = local_a0;
          local_40 = local_98;
          local_38 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            plVar9 = plStack_90;
          }
          plVar10 = (longlong *)0x0;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar9 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            plVar10 = plStack_90;
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_90)(plStack_90);
              plVar10 = plStack_90;
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_90 + 8))(plStack_90,1);
              }
            }
          }
          FUN_140aa2990(param_2,&local_50);
          plVar9 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_38 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            plVar10 = plStack_90;
            if ((int)lVar6 == 1) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar10 = plStack_90;
              if (iVar8 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
                plVar10 = plStack_90;
              }
            }
          }
        }
        plVar9 = plStack_90;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar10 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_90 + 8))(plStack_90,1);
            }
          }
        }
        if (local_60 != 0) {
          FMemory::Free();
        }
      }
      else if (*(char *)(lVar11 + 0x14) != '\0') {
        uVar5 = FUN_142b42710(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar11 + 8),0);
        *(undefined4 *)(lVar6 + 0x20) = uVar5;
      }
    }
    plVar7 = plVar7 + 2;
  } while( true );
}



// FUNCTION 140aa9620 FUN_140aa9620 body=66 status=ok
// SIG undefined FUN_140aa9620(void)

void FUN_140aa9620(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_140ababd0(lVar1,lVar2);
  }
  return;
}



// FUNCTION 140aa9670 FUN_140aa9670 body=58 status=ok
// SIG undefined FUN_140aa9670(void)

void FUN_140aa9670(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140aa5710(uVar2,0xbf800000);
    return;
  }
  return;
}



// FUNCTION 140aa96b0 FUN_140aa96b0 body=20 status=ok
// SIG undefined FUN_140aa96b0(void)

undefined1 FUN_140aa96b0(longlong param_1)

{
  FUN_140aa0ea0(param_1 + 8);
  return 1;
}



// FUNCTION 140aa96d0 FUN_140aa96d0 body=68 status=ok
// SIG undefined FUN_140aa96d0(void)

undefined1 FUN_140aa96d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_140ababd0(lVar1,lVar2);
  }
  return 1;
}



// FUNCTION 140aa9720 FUN_140aa9720 body=55 status=ok
// SIG undefined FUN_140aa9720(void)

undefined1 FUN_140aa9720(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140aa5710(uVar2,0xbf800000);
  }
  return 1;
}



// FUNCTION 140aa9760 FUN_140aa9760 body=314 status=ok
// SIG undefined FUN_140aa9760(void)

void FUN_140aa9760(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    iVar5 = *(int *)((longlong)plVar1 + 0xc);
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar7 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       ((param_3 != 1 || (cVar3 = (**(code **)(*plVar1 + 0x460))(plVar1), cVar3 != '\0')))) {
      lVar6 = *(longlong *)(param_1 + 0x50);
      iVar5 = *(int *)(lVar6 + 0x560);
      while (0 < iVar5) {
        iVar5 = *(int *)(lVar6 + 0x560);
        plVar1 = *(longlong **)(lVar6 + 0x558);
        plVar2 = (longlong *)*plVar1;
        if (iVar5 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop(plVar1,plVar1 + 1,(longlong)(iVar5 + -1) << 3);
          iVar5 = *(int *)(lVar6 + 0x560);
        }
        *(int *)(lVar6 + 0x560) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 0x558);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x6f8))(plVar2,1);
          iVar5 = *(int *)(lVar6 + 0x560);
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x560);
      }
      if ((iVar5 != 0) != (*(char *)(lVar6 + 0x477) != '\0')) {
        FUN_14288e3d0(lVar6 + 0x468);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140aa98a0 FUN_140aa98a0 body=53 status=ok
// SIG undefined FUN_140aa98a0(void)

ulonglong FUN_140aa98a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  if (lVar1 == 0) {
    lVar1 = FUN_1404b03b0();
  }
  else {
    lVar1 = lVar1 + 0x30;
  }
  uVar2 = FText::operator=(param_3 + 8,lVar1);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140aa98e0 FUN_140aa98e0 body=374 status=ok
// SIG undefined FUN_140aa98e0(void)

undefined8 FUN_140aa98e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int local_res8 [2];
  uint local_res10;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_140aa9e50(param_1 + 0x18,local_res8,param_2);
  uVar9 = 0;
  uVar5 = uVar9;
  if (local_res8[0] != -1) {
    uVar5 = (longlong)local_res8[0] * 0x1c + *(longlong *)(param_1 + 0x18);
  }
  uVar8 = uVar5 + 0xc;
  if (uVar5 == 0) {
    uVar8 = uVar9;
  }
  if ((uVar8 != 0) && (lVar6 = FWeakObjectPtr::Get(), lVar6 != 0)) {
    do {
      uVar11 = (uint)uVar9 + 1;
      local_res10 = uVar11;
      if ((*(uint *)(param_2 + 8) >> ((uint)uVar9 & 0x1f) & 1) != 0) break;
      uVar9 = (ulonglong)uVar11;
      local_res10 = 0;
    } while ((int)uVar11 < 0x10);
    puVar12 = *(uint **)(lVar6 + 0x80);
    puVar10 = puVar12 + (longlong)*(int *)(lVar6 + 0x88) * 0xc;
    for (; puVar12 != puVar10; puVar12 = puVar12 + 0xc) {
      if (*puVar12 == local_res10) {
        if (puVar12 == (uint *)0x0) {
          return 0;
        }
        FText::operator=(param_3 + 8,lVar6 + 0x48);
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_48,L"New Content Available!",L"DownloadableEntitlementUtils",
                           L"EntitlementSubject");
        FText::operator=(param_3 + 0x20,uVar7);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        FUN_140ab7420(param_1,param_2,lVar6,puVar12,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140aa9a60 FUN_140aa9a60 body=209 status=ok
// SIG undefined FUN_140aa9a60(void)

undefined8 FUN_140aa9a60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_142b47930(*(undefined8 *)(param_1 + 0x10),&local_18,*(undefined4 *)(param_2 + 8));
  if (local_18 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_2);
    if (lVar4 == 0) {
      lVar4 = FUN_1404b03b0();
    }
    else {
      lVar4 = lVar4 + 0x30;
    }
    FText::operator=(param_3 + 8,lVar4);
    FUN_140ab79d0(param_1,param_2,&local_18,param_3);
    FUN_140ab7700(param_1,param_2,&local_18,param_3);
    uVar5 = 1;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return uVar5;
}



// FUNCTION 140aa9b40 Find body=201 status=ok
// SIG undefined Find(void)

ulonglong TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                    (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + (int)lVar2) {
      return 0xffffffff;
    }
    if (*plVar6 != 0) {
      lVar3 = FUN_142f71d80();
      lVar7 = *plVar6;
      for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_140aa9ba0;
      }
    }
    lVar7 = 0;
LAB_140aa9ba0:
    if (*param_2 != 0) {
      lVar4 = FUN_142f71d80();
      lVar5 = *param_2;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_140aa9bd0;
      }
    }
    lVar5 = 0;
LAB_140aa9bd0:
    if (lVar7 == lVar5) {
      return (longlong)plVar6 - (longlong)plVar1 >> 3 & 0xffffffff;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 140aa9c10 FindId body=269 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x68 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x68 + 0x60 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140aa9d20 FUN_140aa9d20 body=301 status=ok
// SIG undefined FUN_140aa9d20(void)

int * FUN_140aa9d20(longlong param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x208) != *(int *)(param_1 + 0x22c)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    lVar1 = *(longlong *)(param_1 + 0x240);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar1 = param_1 + 0x230;
    }
    iVar4 = *(int *)(lVar1 + (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf))
                             & (longlong)*(int *)(param_1 + 0x248) - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar1 = param_1;
      }
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x40 + lVar1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140aa9e50 FUN_140aa9e50 body=182 status=ok
// SIG undefined FUN_140aa9e50(void)

int * FUN_140aa9e50(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    iVar2 = FUN_140aae940(param_3);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x1c + lVar4;
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar4,param_3);
        if ((cVar1 != '\0') && (*(int *)(lVar4 + 8) == *(int *)(param_3 + 8))) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x1c + 0x14 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140aa9f10 FUN_140aa9f10 body=380 status=ok
// SIG undefined FUN_140aa9f10(void)

int * FUN_140aa9f10(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar10 = (int)(*param_3 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar4 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar11 = (iVar10 - uVar9) - uVar4 ^ uVar4 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar4 ^ uVar11 << 0x10;
    uVar4 = (uVar4 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar9) - uVar4 ^ uVar4 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar4 ^ uVar11 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar1 +
                     (((longlong)(int)((uVar4 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar5 = *param_1;
      do {
        lVar7 = (longlong)iVar10 * 0x98;
        if (*(longlong *)(lVar7 + lVar5) != 0) {
          uVar2 = FUN_142e49950();
          uVar8 = *(ulonglong *)(lVar7 + lVar5);
          for (uVar6 = uVar8; uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x30)) {
            if (uVar6 == uVar2) goto LAB_140aaa025;
          }
        }
        uVar8 = 0;
LAB_140aaa025:
        if (*param_3 != 0) {
          uVar3 = FUN_142e49950();
          uVar6 = *param_3;
          for (uVar2 = uVar6; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
            if (uVar2 == uVar3) goto LAB_140aaa050;
          }
        }
        uVar6 = 0;
LAB_140aaa050:
        if (uVar8 == uVar6) {
          *param_2 = iVar10;
          return param_2;
        }
        lVar5 = *param_1;
        iVar10 = *(int *)(lVar7 + 0x90 + lVar5);
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140aaa090 FindId body=250 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = *(int *)(param_3 + 1);
    if (iVar4 == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar5 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    plVar6 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)(((ulonglong)plVar6 | param_1[8]) +
                    ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x48);
        if (iVar4 == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_3;
        }
        if (*(int *)(puVar1 + 1) == 0) {
          psVar7 = &DAT_143f3eda8;
        }
        else {
          psVar7 = (short *)*puVar1;
        }
        lVar9 = (longlong)puVar8 - (longlong)psVar7;
        do {
          sVar2 = *psVar7;
          sVar3 = *(short *)((longlong)psVar7 + lVar9);
          if (sVar2 != sVar3) break;
          psVar7 = psVar7 + 1;
        } while (sVar3 != 0);
        if (sVar2 == sVar3) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(puVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140aaa190 FUN_140aaa190 body=122 status=ok
// SIG undefined FUN_140aaa190(void)

void FUN_140aaa190(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  piVar3 = piVar2 + (longlong)iVar1 * 4;
  while( true ) {
    if (piVar2 == piVar3) {
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x28),iVar1);
      }
      piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x10);
      *piVar3 = param_2;
      *(undefined1 *)(piVar3 + 1) = 0;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
      return;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 4;
  }
  return;
}



// FUNCTION 140aaa210 FUN_140aaa210 body=146 status=ok
// SIG undefined FUN_140aaa210(void)

longlong FUN_140aaa210(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x38 + lVar3;
  do {
    if (lVar3 == lVar4) {
LAB_140aaa262:
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar1);
      }
      lVar3 = (longlong)iVar1 * 0x38 + *param_1;
      FUN_140a9efc0(lVar3,param_2);
      return lVar3;
    }
    lVar2 = UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(lVar3);
    if (lVar2 == param_2) {
      if (lVar3 != 0) {
        return lVar3;
      }
      goto LAB_140aaa262;
    }
    lVar3 = lVar3 + 0x38;
  } while( true );
}



// FUNCTION 140aaa2b0 FUN_140aaa2b0 body=1825 status=ok
// SIG undefined FUN_140aaa2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140aaa2b0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auStack_278 [32];
  undefined4 *local_258;
  undefined4 local_250;
  undefined4 *local_248;
  undefined8 *local_240;
  undefined1 *local_238;
  float local_228;
  float fStack_224;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0 [2];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
  byte local_178 [12];
  undefined4 local_16c;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  longlong local_a0;
  undefined8 local_98;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  lVar4 = param_1[0xb3];
  lVar8 = 0;
  if (lVar4 != 0) {
    if (*(char *)((longlong)param_1 + 0x592) == '\0') {
      lVar8 = lVar4 + 0x90;
    }
    else if (*(char *)((longlong)param_1 + 0x592) == '\x01') {
      lVar8 = lVar4 + 0xc0;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar4 == 0) || (param_1[0xac] == 0)) || (lVar8 == 0)) {
    lVar4 = param_1[0x2d];
    if (lVar4 == 0) {
      local_218 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_210 = DAT_1468b5d98;
    }
    else {
      local_218 = *(undefined8 *)(lVar4 + 0x220);
      local_210 = *(float *)(lVar4 + 0x228);
    }
    *param_2 = local_218;
    *(float *)(param_2 + 1) = local_210;
    return param_2;
  }
  (**(code **)(*param_1 + 0x578))(param_1,&local_1d8,&local_1d4);
  uStack_1b4 = local_1d8;
  uStack_1b0 = local_1d4;
  local_e8 = 0;
  local_1b8 = 3;
  local_e0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_d8 = 0x10000;
  local_d0 = 0;
  local_208 = 0;
  local_d4 = 0;
  local_c4 = 0x101;
  local_cc = 0;
  local_d2 = 0;
  local_c8 = 0;
  FCollisionQueryParams::AddIgnoredActor(&local_e8,param_1[0xac]);
  FCollisionQueryParams::AddIgnoredActor(&local_e8,param_1);
  FUN_1426d3dd0(local_198);
  FUN_1426ea8d0(local_198,2);
  FUN_1426ea8d0(local_198,0,0);
  FCollisionResponseContainer::SetResponse(local_198,0,2);
  FCollisionResponseContainer::SetResponse(local_198,1,2);
  plVar3 = (longlong *)param_1[0xac];
  lVar4 = plVar3[0x2d];
  if (lVar4 == 0) {
    local_210 = DAT_1468b5d98;
    puVar7 = &local_218;
    local_218 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    puVar7 = &local_208;
    local_200 = *(float *)(lVar4 + 0x228);
    local_208 = *(undefined8 *)(lVar4 + 0x220);
  }
  local_1f8 = *puVar7;
  local_1f0 = *(float *)(puVar7 + 1);
  uVar5 = (**(code **)(*plVar3 + 0x798))(plVar3,&local_218);
  pfVar6 = (float *)FRotator::Vector(uVar5);
  fVar1 = pfVar6[1];
  fVar2 = *pfVar6;
  fVar9 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar9 == 1.0) {
    fVar10 = fVar1;
    fVar11 = fVar2;
    fVar13 = 0.0;
    if (pfVar6[2] == 0.0) {
      local_208 = *(undefined8 *)pfVar6;
      local_200 = pfVar6[2];
      uVar5 = local_208;
      fVar10 = (float)((ulonglong)local_208 >> 0x20);
      fVar11 = (float)local_208;
      fVar13 = pfVar6[2];
      local_208 = uVar5;
    }
  }
  else {
    fVar10 = DAT_1468b5d94;
    fVar11 = DAT_1468b5d90;
    fVar13 = DAT_1468b5d98;
    if (1e-08 <= fVar9) {
      auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar11 = auVar12._0_4_;
      fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
      fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
      local_208 = CONCAT44(local_208._4_4_,fVar11);
      fVar10 = fVar11 * fVar1;
      fVar11 = fVar11 * fVar2;
      fVar13 = 0.0;
    }
  }
  fVar1 = *(float *)(lVar8 + 0x24);
  local_220 = local_1f0;
  local_1e8 = fVar11 * fVar1 + (float)local_1f8;
  local_228 = (float)local_1f8;
  fStack_224 = local_1f8._4_4_;
  local_1e4 = fVar10 * fVar1 + local_1f8._4_4_;
  local_1e0 = local_1f0 + *(float *)(lVar8 + 0x20) + fVar13 * fVar1;
  if (param_3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x168);
    if (lVar4 == 0) {
      local_210 = DAT_1468b5d98;
      puVar7 = &local_218;
      local_218 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar7 = &local_208;
      local_200 = *(float *)(lVar4 + 0x228);
      local_208 = *(undefined8 *)(lVar4 + 0x220);
    }
    local_218 = *puVar7;
    local_210 = *(float *)(puVar7 + 1);
    local_1e8 = ((float)local_1f8 + (float)local_218) * 0.5;
    local_1e4 = (local_1f8._4_4_ + (float)((ulonglong)local_218 >> 0x20)) * 0.5;
  }
  _guard_xfg_dispatch_icall_nop(local_178,0,0x90);
  local_16c = 0x3f800000;
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  local_238 = local_198;
  local_240 = &local_e8;
  local_248 = &local_1b8;
  local_250 = 3;
  local_258 = &DAT_1464aa810;
  UWorld::SweepSingleByChannel(uVar5,local_178,&local_1f8,&local_1e8);
  if ((local_178[0] & 2) == 0) {
    local_228 = local_1e8;
    fStack_224 = local_1e4;
    local_220 = local_1e0;
    if ((local_178[0] & 1) != 0) {
      local_228 = local_164;
      fStack_224 = local_160;
      local_220 = local_15c;
    }
  }
  else {
    local_228 = (float)local_1f8;
    fStack_224 = local_1f8._4_4_;
    local_220 = local_1f0;
  }
  local_1a0 = local_220 - (*(float *)(lVar8 + 0x24) + *(float *)(lVar8 + 0x20));
  local_1a8 = local_228;
  local_1a4 = fStack_224;
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  local_238 = local_198;
  local_240 = &local_e8;
  local_248 = &local_1b8;
  local_250 = 3;
  local_258 = &DAT_1464aa810;
  UWorld::SweepSingleByChannel(uVar5,local_178,&local_228,&local_1a8);
  if (((local_178[0] & 1) == 0) || ((local_178[0] & 2) != 0)) {
    local_1c8 = local_1b8;
    uStack_1c4 = uStack_1b4;
    uStack_1c0 = uStack_1b0;
    uStack_1bc = uStack_1ac;
    if ((local_178[0] & 2) != 0) {
      (**(code **)(*(longlong *)param_1[0xac] + 0x578))
                ((longlong *)param_1[0xac],local_1d0,&local_208);
      uStack_1c4 = local_1d0[0];
      uStack_1c0 = (float)local_208;
      local_1c8 = 3;
    }
    fVar1 = *(float *)(lVar8 + 0x28);
    local_210 = local_1f0 - fVar1;
    local_218 = CONCAT44(local_1f8._4_4_ - fVar1,(float)local_1f8 - fVar1);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    local_238 = local_198;
    local_240 = &local_e8;
    local_248 = &local_1c8;
    local_250 = 3;
    local_258 = &DAT_1464aa810;
    UWorld::SweepSingleByChannel(uVar5,local_178,&local_1f8,&local_218);
    if ((local_178[0] & 1) == 0) {
      local_228 = (float)local_1f8;
      local_150 = local_1f0;
      local_154 = local_1f8._4_4_;
      goto LAB_140aaa90a;
    }
  }
  local_228 = local_158;
LAB_140aaa90a:
  *param_2 = CONCAT44(local_154,local_228);
  *(float *)(param_2 + 1) = local_150;
  fStack_224 = (float)local_154;
  local_220 = local_150;
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140aaa9e0 FUN_140aaa9e0 body=69 status=ok
// SIG undefined FUN_140aaa9e0(void)

longlong FUN_140aaa9e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = UGameplayStatics::FinishSpawningActor();
    uVar2 = FUN_142231800(lVar1);
    FUN_140abba60(*(undefined8 *)(lVar1 + 0x4d8),uVar2,0);
    return lVar1;
  }
  return 0;
}



// FUNCTION 140aaaa30 FUN_140aaaa30 body=495 status=ok
// SIG undefined FUN_140aaaa30(void)

void FUN_140aaaa30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int *local_58;
  int local_50;
  int local_4c;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 != 0) {
    iVar5 = 0;
    iVar8 = 0;
    piVar13 = (int *)0x0;
    iVar7 = iVar3 + -1;
    local_58 = (int *)0x0;
    local_4c = 0;
    if (-1 < iVar7) {
      plVar1 = (longlong *)(param_1 + 0x28);
      lVar11 = (longlong)iVar7 << 4;
      lVar10 = (longlong)iVar3 << 4;
      lVar12 = lVar11;
      do {
        piVar9 = (int *)(*plVar1 + lVar12);
        if (*(longlong *)(piVar9 + 2) <= param_2) {
          if (piVar13 != piVar13 + (longlong)iVar8 * 2) {
            piVar4 = piVar13;
            do {
              if (*piVar4 == *piVar9) goto LAB_140aaaae1;
              piVar4 = piVar4 + 2;
            } while (piVar4 != piVar13 + (longlong)iVar8 * 2);
          }
          piVar4 = (int *)0x0;
LAB_140aaaae1:
          if (piVar4 == (int *)0x0) {
            iVar3 = piVar9[1];
            iVar2 = *piVar9;
            lVar6 = (longlong)iVar8;
            local_50 = iVar8 + 1;
            if (iVar5 < local_50) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
              piVar13 = local_58;
            }
            iVar8 = local_50;
            piVar13[lVar6 * 2] = iVar2;
            piVar13[lVar6 * 2 + 1] = iVar3;
            iVar3 = *(int *)(param_1 + 0x30);
            iVar5 = (iVar3 - iVar7) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar11 + *plVar1),(void *)(lVar10 + *plVar1),(longlong)iVar5 << 4)
              ;
              iVar3 = *(int *)(param_1 + 0x30);
            }
            *(int *)(param_1 + 0x30) = iVar3 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
            iVar5 = local_4c;
          }
          else {
            piVar4[1] = piVar4[1] + piVar9[1];
          }
        }
        lVar10 = lVar10 + -0x10;
        lVar11 = lVar11 + -0x10;
        lVar12 = lVar12 + -0x10;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    piVar9 = piVar13 + (longlong)iVar8 * 2;
    piVar4 = piVar13;
    for (; piVar13 != piVar9; piVar13 = piVar13 + 2) {
      FUN_142b42170(*(undefined8 *)(param_1 + 0x10),*piVar13,piVar13[1]);
      piVar4 = local_58;
    }
    if (piVar4 != (int *)0x0) {
      FMemory::Free(piVar4);
    }
  }
  return;
}



// FUNCTION 140aaac20 FUN_140aaac20 body=551 status=ok
// SIG undefined FUN_140aaac20(void)

undefined1 FUN_140aaac20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong local_30;
  
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  TJsonReaderFactory<wchar_t>::Create(local_58,param_1);
  cVar5 = FUN_1404a7f60(local_58,&local_88);
  plVar8 = plStack_80;
  lVar3 = local_88;
  if ((cVar5 != '\0') && (local_88 != 0)) {
    local_48 = local_88;
    plStack_40 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    local_78[1] = 6;
    local_78[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"Count",0xc);
    cVar5 = FUN_1416b3b00(lVar3,local_78,param_3);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (cVar5 == '\0') {
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_48);
    }
    else {
      local_78[2] = 0;
      local_78[3] = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
      FGenericPlatformString::Memcpy(local_78[2],L"GearboxSerialNumber",0x28);
      cVar5 = FUN_1416b40a0(lVar3,local_78 + 2,param_3 + 8);
      if (local_78[2] != 0) {
        FMemory::Free();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_48);
      if (cVar5 != '\0') {
        uVar7 = FUN_140a9ed30(local_38,param_3 + 8,1,0);
        uVar6 = FUN_140aaae50(uVar7,param_2);
        if (local_30 != 0) {
          FMemory::Free();
        }
        goto LAB_140aaada0;
      }
    }
  }
  uVar6 = 0;
LAB_140aaada0:
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = plStack_80;
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = plStack_80;
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
        plVar8 = plStack_80;
      }
    }
  }
  plVar4 = plStack_80;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140aaae50 FUN_140aaae50 body=1159 status=ok
// SIG undefined FUN_140aaae50(void)

bool FUN_140aaae50(char *param_1,longlong **param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_d8;
  char local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined4 local_78;
  void *local_70;
  ulonglong local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  
  local_d8 = 0xffffffffffffffff;
  local_d0 = '\0';
  local_cc = 0xffffffff;
  cVar3 = FUN_140abda90(param_1,&local_d8);
  if (cVar3 != '\0') {
    if (local_d0 == '\x01') {
      plVar6 = (longlong *)0x0;
      local_98 = &PTR_FUN_1442487d0;
      local_90 = 0;
      local_84 = 0;
      local_88 = 0xffffffff;
      cVar3 = FUN_140ab2f00(&local_98,param_1,local_d8._4_4_);
      if ((cVar3 != '\0') && (cVar3 = (*(code *)local_98[5])(&local_98), cVar3 != '\0')) {
        plVar5 = (longlong *)operator_new(0x18);
        plVar4 = plVar6;
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_1442486f8;
          *(undefined4 *)(plVar5 + 1) = local_90;
          *plVar5 = (longlong)&PTR_FUN_1442487d0;
          *(undefined4 *)(plVar5 + 2) = local_88;
          *(undefined4 *)((longlong)plVar5 + 0x14) = local_84;
          plVar4 = plVar5;
        }
        plVar5 = (longlong *)operator_new(0x18);
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
          plVar5[2] = (longlong)plVar4;
          plVar6 = plVar5;
        }
        local_a8 = plVar4;
        local_a0 = plVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar4,plVar4);
        if (param_2 != &local_a8) {
          *param_2 = plVar4;
          local_a8 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_a0);
          plVar6 = local_a0;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar6 + 1;
          lVar7 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
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
    }
    else if (local_d0 == '\x02') {
      FUN_140a9ddc0(param_1,local_d8._4_4_,param_2);
    }
    else if (local_d0 == '\x03') {
      plVar6 = (longlong *)0x0;
      local_58 = 0;
      local_60 = &PTR_FUN_1442488c0;
      FUN_142d979c0(local_50);
      cVar3 = (*(code *)local_60[0xb])(&local_60,param_1,local_d8._4_4_);
      if ((cVar3 != '\0') && (cVar3 = (*(code *)local_60[5])(&local_60), cVar3 != '\0')) {
        plVar5 = (longlong *)operator_new(0x30);
        plVar4 = plVar6;
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_1442486f8;
          *(undefined4 *)(plVar5 + 1) = local_58;
          *plVar5 = (longlong)&PTR_FUN_1442488c0;
          FUN_140a9f180(plVar5 + 2,local_50);
          plVar4 = plVar5;
        }
        plVar5 = (longlong *)operator_new(0x18);
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
          plVar5[2] = (longlong)plVar4;
          plVar6 = plVar5;
        }
        local_b8 = plVar4;
        local_b0 = plVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar4,plVar4);
        if (param_2 != &local_b8) {
          *param_2 = plVar4;
          local_b8 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_b0);
          plVar6 = local_b0;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar6 + 1;
          lVar7 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
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
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    else if (local_d0 == '\x04') {
      plVar6 = (longlong *)0x0;
      local_80 = &PTR_FUN_144248938;
      local_78 = 0;
      local_70 = (void *)0x0;
      local_68 = 0;
      cVar3 = FUN_140ab3000(&local_80,param_1,local_d8._4_4_);
      if ((cVar3 != '\0') && (cVar3 = (*(code *)local_80[5])(&local_80), cVar3 != '\0')) {
        plVar4 = (longlong *)operator_new(0x20);
        _Src = local_70;
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          *plVar4 = (longlong)&PTR_FUN_1442486f8;
          *(undefined4 *)(plVar4 + 1) = local_78;
          *plVar4 = (longlong)&PTR_FUN_144248938;
          plVar4[2] = 0;
          lVar7 = (longlong)(int)local_68;
          *(int *)(plVar4 + 3) = (int)local_68;
          if ((int)local_68 == 0) {
            *(undefined4 *)((longlong)plVar4 + 0x1c) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (plVar4 + 2,local_68 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop((void *)plVar4[2],_Src,lVar7 << 3);
          }
        }
        plVar5 = (longlong *)operator_new(0x18);
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
          plVar5[2] = (longlong)plVar4;
          plVar6 = plVar5;
        }
        local_c8 = plVar4;
        local_c0 = plVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar4,plVar4);
        if (param_2 != &local_c8) {
          *param_2 = plVar4;
          local_c8 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_c0);
          plVar6 = local_c0;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar6 + 1;
          lVar7 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
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
      if (local_70 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (*param_1 == '\x03') {
      *param_1 = '\x02';
    }
    return *param_2 != (longlong *)0x0;
  }
  return false;
}



// FUNCTION 140aab2e0 FUN_140aab2e0 body=665 status=ok
// SIG undefined FUN_140aab2e0(void)

ulonglong FUN_140aab2e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if ((((char)uVar4 == '\x01') && (*(int *)(param_1 + 0x20) < 1)) ||
     ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), cVar3 == '\x02' &&
      (uVar4 = FUN_140d00e20(param_2,param_1), (char)uVar4 != '\0')))) {
    return uVar4 & 0xffffffffffffff00;
  }
  iVar2 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
              (param_3,iVar2);
  }
  puVar14 = (undefined1 *)((longlong)iVar2 * 0xb8 + *param_3);
  *puVar14 = 0;
  FText::FText(puVar14 + 8);
  FText::FText(puVar14 + 0x20);
  FText::FText(puVar14 + 0x38);
  plVar6 = (longlong *)(puVar14 + 0x50);
  *plVar6 = 0;
  plVar1 = (longlong *)(puVar14 + 0x68);
  *(undefined8 *)(puVar14 + 0x58) = 0;
  *(undefined4 *)(puVar14 + 0x60) = 0;
  *plVar1 = 0;
  *(undefined8 *)(puVar14 + 0x70) = 0;
  *(undefined8 *)(puVar14 + 0x78) = 0;
  *(undefined8 *)(puVar14 + 0x80) = 0;
  *(undefined8 *)(puVar14 + 0x90) = 0;
  *(undefined8 *)(puVar14 + 0x98) = 0;
  *(undefined ***)(puVar14 + 0x88) = &PTR_FUN_143f740c8;
  *(undefined8 *)(puVar14 + 0xa0) = 0;
  *(undefined8 *)(puVar14 + 0xa8) = 0;
  *(undefined2 *)(puVar14 + 0xb0) = 0;
  *puVar14 = 5;
  plVar5 = (longlong *)FUN_141682af0(param_1 + 0x38,&local_48,0);
  if (plVar6 != plVar5) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = *plVar5;
    *plVar5 = 0;
    *(int *)(puVar14 + 0x58) = (int)plVar5[1];
    *(undefined4 *)(puVar14 + 0x5c) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(puVar14 + 0x78) = *(undefined8 *)(param_1 + 0x48);
  FUN_141682af0(param_1 + 0x38,&local_48,0);
  if (plVar1 == &local_48) {
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_48;
    *(undefined4 *)(puVar14 + 0x70) = local_40;
    *(undefined4 *)(puVar14 + 0x74) = local_3c;
  }
  plVar6 = (longlong *)FUN_140aae6a0(param_2,param_1);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FWeakObjectPtr::Get();
    lVar12 = *plVar6;
    lVar13 = (longlong)(int)plVar6[1] * 0x38 + lVar12;
    for (; lVar12 != lVar13; lVar12 = lVar12 + 0x38) {
      lVar8 = UKismetSystemLibrary::Conv_SoftObjectReferenceToObject();
      if (lVar8 == lVar7) {
        if (lVar12 != 0) {
          piVar9 = *(int **)(lVar12 + 0x28);
          piVar11 = piVar9 + (longlong)*(int *)(lVar12 + 0x30) * 4;
          goto joined_r0x000140aab532;
        }
        break;
      }
    }
  }
LAB_140aab4ec:
  uVar10 = 0;
LAB_140aab4ee:
  puVar14[0xb0] = uVar10;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (cVar3 == '\x01') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  else {
    cVar3 = '\0';
  }
  puVar14[0xb1] = cVar3 == '\0';
                    /* WARNING: Could not recover jumptable at 0x000140aab575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                    (*(longlong **)(param_1 + 0x28),param_1,puVar14);
  return uVar4;
joined_r0x000140aab532:
  if (piVar9 == piVar11) goto LAB_140aab4ec;
  if (*piVar9 == *(int *)(param_1 + 8)) {
    if (piVar9 != (int *)0x0) {
      uVar10 = (undefined1)piVar9[3];
      goto LAB_140aab4ee;
    }
    goto LAB_140aab4ec;
  }
  piVar9 = piVar9 + 4;
  goto joined_r0x000140aab532;
}



// FUNCTION 140aab580 FUN_140aab580 body=94 status=ok
// SIG undefined FUN_140aab580(void)

void FUN_140aab580(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    FUN_140aab2e0(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140aab5e0 FUN_140aab5e0 body=38 status=ok
// SIG undefined FUN_140aab5e0(void)

undefined8 FUN_140aab5e0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>();
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x5a8);
    }
  }
  return 0;
}



// FUNCTION 140aab610 FUN_140aab610 body=170 status=ok
// SIG undefined FUN_140aab610(void)

longlong FUN_140aab610(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    cVar1 = UWorld::IsGameWorld();
    if ((cVar1 != '\0') && ((*(uint *)(param_1 + 0x830) & 0x400) == 0)) {
      lVar2 = UWorld::GetGameState<APVPGameState>(param_1);
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x610);
        if (lVar4 == 0) {
          uVar3 = FUN_14130ca70();
          uVar3 = FUN_142443830(param_1,uVar3,&DAT_1468b5b70,1,0);
          *(undefined8 *)(lVar2 + 0x610) = uVar3;
          UGameplayStatics::FinishSpawningActor(uVar3,&DAT_1468b5b70);
          lVar4 = *(longlong *)(lVar2 + 0x610);
        }
        return lVar4;
      }
      return 0;
    }
  }
  return 0;
}


