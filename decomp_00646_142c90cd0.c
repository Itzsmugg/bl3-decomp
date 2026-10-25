// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c90cd0 FUN_142c90cd0 body=457 status=ok
// SIG undefined FUN_142c90cd0(void)

void FUN_142c90cd0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uStack_40;
  undefined8 local_38;
  
  uVar6 = 0;
  plVar2 = *(longlong **)(param_1 + 0xf40);
  iVar7 = -1;
  uStack_40 = 0;
  local_38 = 0;
  uVar8 = (longlong)*(int *)(param_1 + 0xf48) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0xf48) < plVar2) {
    uVar8 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar8 != 0) {
    do {
      lVar4 = *plVar2;
      if ((*(longlong *)(lVar4 + 0x70) != 0) && (iVar7 < *(int *)(lVar4 + 0x68))) {
        iVar7 = *(int *)(lVar4 + 0x68);
        uStack_40 = *(ulonglong *)(lVar4 + 0x70);
        local_38 = *(undefined8 *)(lVar4 + 0x78);
      }
      plVar2 = plVar2 + 1;
      uVar6 = uVar6 + 1;
      uVar5 = uStack_40;
    } while (uVar6 != uVar8);
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    uVar1 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar1);
    if ((plVar2 != (longlong *)0x0) &&
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2), plVar2 != (longlong *)0x0)) {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x288))();
        *(undefined8 *)(*plVar2 + 0x2d0) = 0;
      }
      if (uVar5 != 0) {
        if (*plVar2 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x118);
          FUN_1417846f0(uVar1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar3 = UGCombatTextWidget::GetPrivateStaticClass();
          lVar4 = FUN_1417985e0(uVar3,uVar1,0,0x40,0,0,0,0,0);
          *plVar2 = lVar4;
          lVar4 = *(longlong *)(param_1 + 0x120);
          if (lVar4 == 0) {
            lVar4 = FUN_1423407b0(param_1);
          }
          FUN_14234b270(*plVar2,lVar4);
        }
        *(ulonglong *)(*plVar2 + 0x2d0) = uVar5;
        FUN_142382f60(*plVar2,param_1,&DAT_146af29ec,local_38);
        (**(code **)(*(longlong *)*plVar2 + 0x280))((longlong *)*plVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 142c90ea0 FUN_142c90ea0 body=731 status=ok
// SIG undefined FUN_142c90ea0(void)

void FUN_142c90ea0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  void *pvVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x348) != 0)) {
    plVar6 = (longlong *)0x0;
    plVar13 = *(longlong **)(param_1 + 0xf40);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    plVar1 = plVar13 + *(int *)(param_1 + 0xf48);
    plVar12 = plVar6;
    plVar14 = plVar6;
    if (plVar13 != plVar1) {
      do {
        lVar8 = *plVar13;
        if ((int)plVar12 < *(int *)(lVar8 + 0x50) + 1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68);
          plVar12 = (longlong *)(local_60 >> 0x20);
          plVar14 = (longlong *)(local_60 & 0xffffffff);
          plVar6 = local_68;
        }
        if (*(longlong *)(lVar8 + 0x40) != 0) {
          iVar3 = (int)plVar14 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar3);
          if ((int)plVar12 < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,plVar14);
            plVar6 = local_68;
          }
          plVar6[(int)plVar14] = *(longlong *)(lVar8 + 0x40);
          plVar12 = (longlong *)(local_60 >> 0x20);
          plVar14 = (longlong *)(local_60 & 0xffffffff);
          plVar6 = local_68;
        }
        plVar9 = *(longlong **)(lVar8 + 0x48);
        plVar2 = plVar9 + *(int *)(lVar8 + 0x50);
        for (; iVar3 = (int)plVar14, plVar9 != plVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 != 0) {
            for (plVar4 = plVar6; plVar4 != plVar6 + iVar3; plVar4 = plVar4 + 1) {
              if (*plVar4 == *plVar9) {
                if ((int)((longlong)plVar4 - (longlong)plVar6 >> 3) != -1) goto LAB_142c9100e;
                break;
              }
            }
            local_60._4_4_ = (undefined4)(local_60 >> 0x20);
            local_60 = CONCAT44(local_60._4_4_,iVar3 + 1);
            if ((int)plVar12 < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,plVar14);
              plVar6 = local_68;
            }
            plVar6[iVar3] = *plVar9;
            plVar12 = (longlong *)(local_60 >> 0x20);
            plVar14 = (longlong *)(local_60 & 0xffffffff);
            plVar6 = local_68;
          }
LAB_142c9100e:
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar1);
      if (0 < iVar3) {
        local_50 = *(int *)(param_1 + 0x938);
        lVar8 = (longlong)local_50;
        _Src = *(void **)(param_1 + 0x930);
        local_58 = (void *)0x0;
        if (local_50 == 0) {
          pvVar10 = (void *)0x0;
          iVar3 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
          pvVar10 = local_58;
          _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 << 4);
          iVar3 = local_50;
        }
        FUN_1424a3300(*(undefined8 *)(*(longlong *)(param_1 + 0x718) + 0x348),param_1,&local_68);
        FUN_1423424e0(param_1);
        if (iVar3 == *(int *)(param_1 + 0x938)) {
          piVar7 = *(int **)(param_1 + 0x930);
          if (iVar3 != 0) {
            piVar11 = (int *)((longlong)pvVar10 + 8);
            do {
              if (((piVar11[1] != piVar7[3] || piVar11[-1] != piVar7[1]) || piVar7[2] != *piVar11)
                  || piVar11[-2] != *piVar7) goto LAB_142c91101;
              piVar7 = piVar7 + 4;
              piVar11 = piVar11 + 4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else {
LAB_142c91101:
          FUN_1427e3320(param_1);
        }
        if (param_2 != '\0') {
          iVar3 = FUN_14233f450(param_1);
          cVar5 = *(char *)(param_1 + 0xf52);
          if (iVar3 == 3) {
            cVar5 = cVar5 + '\x01';
            *(char *)(param_1 + 0xf52) = cVar5;
          }
          *(char *)(param_1 + 0xf53) = cVar5;
          FUN_14234b040(param_1);
        }
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
      }
    }
    FUN_142c90cd0(param_1);
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142c91180 FUN_142c91180 body=1540 status=ok
// SIG undefined FUN_142c91180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c91180(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (0.0 < *(float *)(param_1 + 0x4c)) {
    uVar5 = FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_e8,0);
    fVar23 = fRam0000000146b2ff78;
    fVar21 = fRam0000000146b2ff74;
    fVar19 = _DAT_146b2ff70;
    fVar25 = *(float *)(param_1 + 0xb4);
    auVar11 = *(undefined1 (*) [16])(param_1 + 0xf0);
    fVar27 = auVar11._0_4_;
    fVar18 = auVar11._4_4_;
    fVar29 = auVar11._8_4_;
    fVar9 = *(float *)(param_1 + 0xd0);
    fVar20 = *(float *)(param_1 + 0xd4);
    fVar13 = *(float *)(param_1 + 0xd8);
    fVar22 = *(float *)(param_1 + 0xdc);
    fVar16 = (float)local_d8._0_4_ * fVar25;
    fVar15 = (float)local_d8._4_4_ * fVar25;
    fStack_d0 = fStack_d0 * fVar25;
    auVar7._4_4_ = fStack_c4;
    auVar7._0_4_ = local_c8;
    auVar7._8_4_ = fStack_c0;
    auVar7._12_4_ = fStack_bc;
    auVar7 = minps(auVar7,auVar11);
    auVar8._4_4_ = -(uint)(auVar7._4_4_ < fRam0000000146b2ffd4);
    auVar8._0_4_ = -(uint)(auVar7._0_4_ < _DAT_146b2ffd0);
    auVar8._8_4_ = -(uint)(auVar7._8_4_ < fRam0000000146b2ffd8);
    auVar8._12_4_ = -(uint)(auVar7._12_4_ < fRam0000000146b2ffdc);
    iVar6 = movmskps(uVar5,auVar8);
    local_d8._4_4_ = fVar15;
    local_d8._0_4_ = fVar16;
    unique0x100002a5 = 0;
    if (iVar6 == 0) {
      fVar27 = fVar27 * fVar16;
      fVar18 = fVar18 * fVar15;
      fVar29 = fVar29 * fStack_d0;
      fVar19 = fVar29 * fVar20 - fVar18 * fVar13;
      fVar21 = fVar27 * fVar13 - fVar29 * fVar9;
      fVar23 = fVar18 * fVar9 - fVar27 * fVar20;
      fVar19 = fVar19 + fVar19;
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar25 = (fVar23 * fVar20 - fVar21 * fVar13) + fVar22 * fVar19 + fVar27 +
               *(float *)(param_1 + 0xe0);
      fVar27 = (fVar19 * fVar13 - fVar23 * fVar9) + fVar22 * fVar21 + fVar18 +
               *(float *)(param_1 + 0xe4);
      fVar18 = (fVar21 * fVar9 - fVar19 * fVar20) + fVar22 * fVar23 + fVar29 +
               *(float *)(param_1 + 0xe8);
    }
    else {
      fVar12 = fVar20 + fVar20;
      fVar14 = fVar13 + fVar13;
      fVar25 = *(float *)(param_1 + 0xe0);
      fVar1 = *(float *)(param_1 + 0xe4);
      fVar2 = *(float *)(param_1 + 0xe8);
      fVar17 = (fVar9 + fVar9) * fVar9;
      fVar31 = fVar22 * (fVar9 + fVar9);
      fVar24 = fVar18 * (fVar12 * fVar9 - fVar22 * fVar14);
      fVar26 = fVar29 * (fVar14 * fVar20 - fVar31);
      fVar28 = fVar27 * (fVar14 * fVar9 - fVar22 * fVar12);
      fVar37 = (fVar22 * fVar14 + fVar12 * fVar9) * fVar27;
      fVar38 = (fVar31 + fVar14 * fVar20) * fVar18;
      fVar39 = (fVar22 * fVar12 + fVar14 * fVar9) * fVar29;
      fVar9 = (float)((uint)((_DAT_146b2ff70 - (fVar14 * fVar13 + fVar12 * fVar20)) * fVar27) &
                     _DAT_146b2ff80);
      fVar13 = (float)((uint)((fRam0000000146b2ff74 - (fVar14 * fVar13 + fVar17)) * fVar18) &
                      uRam0000000146b2ff84);
      fVar12 = (float)((uint)((fRam0000000146b2ff78 - (fVar12 * fVar20 + fVar17)) * fVar29) &
                      uRam0000000146b2ff88);
      fVar17 = (float)((uint)((fRam0000000146b2ff7c - (fVar17 + fVar17)) * auVar11._12_4_) &
                      uRam0000000146b2ff8c);
      fVar14 = fStack_e4 + fStack_e4;
      fVar22 = fStack_e0 + fStack_e0;
      fVar31 = local_e8 * (local_e8 + local_e8);
      fVar20 = (local_e8 + local_e8) * fStack_dc;
      fVar34 = (fVar22 * fStack_dc + fVar14 * local_e8) * local_c8;
      fVar35 = (fVar20 + fVar22 * fStack_e4) * fStack_c4;
      fVar36 = (fVar14 * fStack_dc + fVar22 * local_e8) * fStack_c0;
      fVar30 = fStack_c4 * (fVar14 * local_e8 - fVar22 * fStack_dc);
      fVar32 = fStack_c0 * (fVar22 * fStack_e4 - fVar20);
      fVar33 = local_c8 * (fVar22 * local_e8 - fVar14 * fStack_dc);
      fVar20 = (float)((uint)((_DAT_146b2ff70 - (fStack_e0 * fVar22 + fStack_e4 * fVar14)) *
                             local_c8) & _DAT_146b2ff80);
      fVar22 = (float)((uint)((fRam0000000146b2ff74 - (fStack_e0 * fVar22 + fVar31)) * fStack_c4) &
                      uRam0000000146b2ff84);
      fVar14 = (float)((uint)((fRam0000000146b2ff78 - (fStack_e4 * fVar14 + fVar31)) * fStack_c0) &
                      uRam0000000146b2ff88);
      fVar31 = (float)((uint)((fRam0000000146b2ff7c - (fVar31 + fVar31)) * fStack_bc) &
                      uRam0000000146b2ff8c);
      local_138._0_4_ = fVar34 * fVar24 + fVar20 * fVar9 + fVar33 * fVar39 + fVar31 * fVar25;
      local_138._4_4_ = fVar34 * fVar13 + fVar20 * fVar37 + fVar33 * fVar26 + fVar31 * fVar1;
      uStack_130._0_4_ = fVar34 * fVar38 + fVar20 * fVar28 + fVar33 * fVar12 + fVar31 * fVar2;
      uStack_130._4_4_ =
           fVar34 * fVar17 + fVar20 * fVar17 + fVar33 * fVar17 + fVar31 * fRam0000000146b2ff7c;
      local_128._4_4_ = fVar22 * fVar13 + fVar30 * fVar37 + fVar35 * fVar26 + fVar31 * fVar1;
      local_128._0_4_ = fVar22 * fVar24 + fVar30 * fVar9 + fVar35 * fVar39 + fVar31 * fVar25;
      uStack_120._0_4_ = fVar22 * fVar38 + fVar30 * fVar28 + fVar35 * fVar12 + fVar31 * fVar2;
      uStack_120._4_4_ =
           fVar22 * fVar17 + fVar30 * fVar17 + fVar35 * fVar17 + fVar31 * fRam0000000146b2ff7c;
      local_118._4_4_ = fVar32 * fVar13 + fVar36 * fVar37 + fVar14 * fVar26 + fVar31 * fVar1;
      local_118._0_4_ = fVar32 * fVar24 + fVar36 * fVar9 + fVar14 * fVar39 + fVar31 * fVar25;
      uStack_110._0_4_ = fVar32 * fVar38 + fVar36 * fVar28 + fVar14 * fVar12 + fVar31 * fVar2;
      uStack_110._4_4_ =
           fVar32 * fVar17 + fVar36 * fVar17 + fVar14 * fVar17 + fVar31 * fRam0000000146b2ff7c;
      local_108 = fVar15 * fVar24 + fVar16 * fVar9 + fStack_d0 * fVar39 +
                  fRam0000000146b2ff7c * fVar25;
      fStack_104 = fVar15 * fVar13 + fVar16 * fVar37 + fStack_d0 * fVar26 +
                   fRam0000000146b2ff7c * fVar1;
      fStack_100 = fVar15 * fVar38 + fVar16 * fVar28 + fStack_d0 * fVar12 +
                   fRam0000000146b2ff7c * fVar2;
      fStack_fc = fVar15 * fVar17 + fVar16 * fVar17 + fStack_d0 * fVar17 +
                  fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      FMatrix::RemoveScaling(&local_138);
      auVar7 = _local_118;
      auVar11 = _local_128;
      fVar25 = (float)(-(uint)(_DAT_146b2ffd0 <= local_c8 * fVar27) &
                       (_DAT_146b2ffc0 ^ (uint)fVar19) ^ _DAT_146b2ffc0);
      fVar27 = (float)(-(uint)(fRam0000000146b2ffd4 <= fStack_c4 * fVar18) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar21) ^ uRam0000000146b2ffc4);
      fVar29 = (float)(-(uint)(fRam0000000146b2ffd8 <= fStack_c0 * fVar29) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar23) ^ uRam0000000146b2ffc8);
      local_138 = CONCAT44(local_138._4_4_ * fVar25,(float)local_138 * fVar25);
      uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar25);
      fVar25 = (float)uStack_120 * fVar27;
      fVar18 = (float)local_128._0_4_ * fVar27;
      auVar3._4_8_ = uStack_120;
      auVar3._0_4_ = (float)local_128._4_4_ * fVar27;
      local_128 = (undefined1  [8])(auVar3._0_8_ << 0x20);
      uStack_120._4_4_ = auVar11._12_4_;
      uStack_120._0_4_ = fVar25;
      fVar25 = (float)uStack_110 * fVar29;
      fVar27 = (float)local_118._0_4_ * fVar29;
      auVar4._4_8_ = uStack_110;
      auVar4._0_4_ = (float)local_118._4_4_ * fVar29;
      local_118 = (undefined1  [8])(auVar4._0_8_ << 0x20);
      uStack_110._4_4_ = auVar7._12_4_;
      uStack_110._0_4_ = fVar25;
      local_128._0_4_ = fVar18;
      local_118._0_4_ = fVar27;
      FQuat::FQuat(&local_f8,&local_138);
      local_148 = 0x322bcc77;
      auVar10._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
      auVar10._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
      auVar10._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
      auVar10._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
      fVar9 = auVar10._4_4_ + auVar10._0_4_;
      fVar20 = auVar10._8_4_ + auVar10._4_4_;
      fVar13 = auVar10._12_4_ + auVar10._8_4_;
      fVar22 = auVar10._0_4_ + auVar10._12_4_;
      auVar11._4_4_ = fVar20;
      auVar11._0_4_ = fVar9;
      auVar11._8_4_ = fVar13;
      auVar11._12_4_ = fVar22;
      auVar11 = rsqrtps(auVar10,auVar11);
      fVar25 = auVar11._0_4_;
      fVar27 = auVar11._4_4_;
      fVar18 = auVar11._8_4_;
      fVar29 = auVar11._12_4_;
      fVar25 = (_DAT_146b2ff60 - fVar25 * fVar25 * fVar9 * _DAT_146b2ff60) * fVar25 + fVar25;
      fVar27 = (fRam0000000146b2ff64 - fVar27 * fVar27 * fVar20 * fRam0000000146b2ff64) * fVar27 +
               fVar27;
      fVar18 = (fRam0000000146b2ff68 - fVar18 * fVar18 * fVar13 * fRam0000000146b2ff68) * fVar18 +
               fVar18;
      fVar29 = (fRam0000000146b2ff6c - fVar29 * fVar29 * fVar22 * fRam0000000146b2ff6c) * fVar29 +
               fVar29;
      local_f8 = (float)(((uint)(((_DAT_146b2ff60 - fVar25 * fVar25 * fVar9 * _DAT_146b2ff60) *
                                  fVar25 + fVar25) * local_f8) ^ _DAT_146b2ff50) &
                         -(uint)(1e-08 <= fVar9) ^ _DAT_146b2ff50);
      fStack_f4 = (float)(((uint)(((fRam0000000146b2ff64 -
                                   fVar27 * fVar27 * fVar20 * fRam0000000146b2ff64) * fVar27 +
                                  fVar27) * fStack_f4) ^ uRam0000000146b2ff54) &
                          -(uint)(1e-08 <= fVar20) ^ uRam0000000146b2ff54);
      fStack_f0 = (float)(((uint)(((fRam0000000146b2ff68 -
                                   fVar18 * fVar18 * fVar13 * fRam0000000146b2ff68) * fVar18 +
                                  fVar18) * fStack_f0) ^ uRam0000000146b2ff58) &
                          -(uint)(1e-08 <= fVar13) ^ uRam0000000146b2ff58);
      fStack_ec = (float)(((uint)(((fRam0000000146b2ff6c -
                                   fVar29 * fVar29 * fVar22 * fRam0000000146b2ff6c) * fVar29 +
                                  fVar29) * fStack_ec) ^ uRam0000000146b2ff5c) &
                          -(uint)(1e-08 <= fVar22) ^ uRam0000000146b2ff5c);
      fVar25 = local_108;
      fVar27 = fStack_104;
      fVar18 = fStack_100;
    }
    FRotator::Quaternion(param_1 + 0x50,&local_f8);
    local_138 = CONCAT44(fStack_f4,local_f8);
    uStack_130 = CONCAT44(fStack_ec,fStack_f0);
    local_128._4_4_ = fVar27;
    local_128._0_4_ = fVar25;
    uStack_120._0_4_ = fVar18;
    uStack_120._4_4_ = 0;
    local_118._4_4_ = DAT_1464aa788._4_4_;
    local_118._0_4_ = (undefined4)DAT_1464aa788;
    uStack_110._0_4_ = (float)DAT_1464aa790;
    uStack_110._4_4_ = 0;
    FUN_142c8f930(param_1);
  }
  return;
}



// FUNCTION 142c91790 FUN_142c91790 body=2257 status=ok
// SIG undefined FUN_142c91790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c91790(longlong param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
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
  undefined1 auStack_1b8 [32];
  float local_198;
  undefined4 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
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
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar2 = FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_128,*(undefined4 *)(param_1 + 0xb0),
                        *(undefined4 *)(param_1 + 0xb8));
  fVar17 = fRam0000000146b2ff78;
  fVar15 = fRam0000000146b2ff74;
  fVar36 = _DAT_146b2ff70;
  fVar40 = 0.0;
  fVar23 = *(float *)(param_1 + 0xb4);
  auVar11 = *(undefined1 (*) [16])(param_1 + 0xf0);
  fVar25 = auVar11._0_4_;
  fVar27 = auVar11._4_4_;
  fVar18 = auVar11._8_4_;
  fVar9 = *(float *)(param_1 + 0xd0);
  fVar20 = *(float *)(param_1 + 0xd4);
  fVar12 = *(float *)(param_1 + 0xd8);
  fVar21 = *(float *)(param_1 + 0xdc);
  fStack_114 = fVar23 * fStack_114;
  auVar7._4_4_ = fStack_104;
  auVar7._0_4_ = fStack_108;
  auVar7._8_4_ = fStack_100;
  auVar7._12_4_ = fStack_fc;
  local_118 = fVar23 * local_118;
  fStack_110 = fVar23 * fStack_110;
  auVar7 = minps(auVar7,auVar11);
  auVar8._4_4_ = -(uint)(auVar7._4_4_ < fRam0000000146b2ffd4);
  auVar8._0_4_ = -(uint)(auVar7._0_4_ < _DAT_146b2ffd0);
  auVar8._8_4_ = -(uint)(auVar7._8_4_ < fRam0000000146b2ffd8);
  auVar8._12_4_ = -(uint)(auVar7._12_4_ < fRam0000000146b2ffdc);
  iVar3 = movmskps(uVar2,auVar8);
  uStack_10c = 0;
  if (iVar3 == 0) {
    fVar25 = fVar25 * local_118;
    fVar27 = fVar27 * fStack_114;
    fVar18 = fVar18 * fStack_110;
    fVar34 = fVar9 * fStack_11c * _DAT_146b2ffb0 + fVar21 * local_128 +
             fVar20 * fStack_120 * _DAT_146b2ffa0 + fVar12 * fStack_124 * _DAT_146b2ff90;
    fVar35 = fVar9 * fStack_120 * fRam0000000146b2ffb4 + fVar21 * fStack_124 +
             fVar20 * fStack_11c * fRam0000000146b2ffa4 + fVar12 * local_128 * fRam0000000146b2ff94;
    fVar36 = fVar9 * fStack_124 * fRam0000000146b2ffb8 + fVar21 * fStack_120 +
             fVar20 * local_128 * fRam0000000146b2ffa8 + fVar12 * fStack_11c * fRam0000000146b2ff98;
    fVar13 = fVar9 * local_128 * fRam0000000146b2ffbc + fVar21 * fStack_11c +
             fVar20 * fStack_124 * fRam0000000146b2ffac + fVar12 * fStack_120 * fRam0000000146b2ff9c
    ;
    fVar23 = fVar18 * fVar20 - fVar27 * fVar12;
    fVar15 = fVar25 * fVar12 - fVar18 * fVar9;
    fVar17 = fVar27 * fVar9 - fVar25 * fVar20;
    fVar23 = fVar23 + fVar23;
    fVar15 = fVar15 + fVar15;
    fVar17 = fVar17 + fVar17;
    local_118 = (fVar17 * fVar20 - fVar15 * fVar12) + fVar23 * fVar21 + fVar25 +
                *(float *)(param_1 + 0xe0);
    fStack_114 = (fVar23 * fVar12 - fVar17 * fVar9) + fVar15 * fVar21 + fVar27 +
                 *(float *)(param_1 + 0xe4);
    fStack_110 = (fVar15 * fVar9 - fVar23 * fVar20) + fVar17 * fVar21 + fVar18 +
                 *(float *)(param_1 + 0xe8);
  }
  else {
    fVar23 = *(float *)(param_1 + 0xe0);
    fVar34 = *(float *)(param_1 + 0xe4);
    fVar35 = *(float *)(param_1 + 0xe8);
    fVar13 = fVar20 + fVar20;
    fVar16 = fVar12 + fVar12;
    fVar19 = fVar9 * (fVar9 + fVar9);
    fVar14 = (fVar9 + fVar9) * fVar21;
    fVar37 = (fVar16 * fVar21 + fVar13 * fVar9) * fVar25;
    fVar38 = (fVar14 + fVar16 * fVar20) * fVar27;
    fVar39 = (fVar13 * fVar21 + fVar16 * fVar9) * fVar18;
    fVar22 = fVar27 * (fVar13 * fVar9 - fVar16 * fVar21);
    fVar24 = fVar18 * (fVar16 * fVar20 - fVar14);
    fVar26 = fVar25 * (fVar16 * fVar9 - fVar13 * fVar21);
    fVar9 = (float)((uint)((_DAT_146b2ff70 - (fVar12 * fVar16 + fVar20 * fVar13)) * fVar25) &
                   _DAT_146b2ff80);
    fVar12 = (float)((uint)((fRam0000000146b2ff74 - (fVar12 * fVar16 + fVar19)) * fVar27) &
                    uRam0000000146b2ff84);
    fVar13 = (float)((uint)((fRam0000000146b2ff78 - (fVar20 * fVar13 + fVar19)) * fVar18) &
                    uRam0000000146b2ff88);
    fVar16 = (float)((uint)((fRam0000000146b2ff7c - (fVar19 + fVar19)) * auVar11._12_4_) &
                    uRam0000000146b2ff8c);
    fVar14 = fStack_124 + fStack_124;
    fVar21 = fStack_120 + fStack_120;
    fVar19 = (local_128 + local_128) * local_128;
    fVar20 = (local_128 + local_128) * fStack_11c;
    fVar31 = (fVar21 * fStack_11c + fVar14 * local_128) * fStack_108;
    fVar32 = (fVar20 + fVar21 * fStack_124) * fStack_104;
    fVar33 = (fVar14 * fStack_11c + fVar21 * local_128) * fStack_100;
    fVar28 = fStack_104 * (fVar14 * local_128 - fVar21 * fStack_11c);
    fVar29 = fStack_100 * (fVar21 * fStack_124 - fVar20);
    fVar30 = fStack_108 * (fVar21 * local_128 - fVar14 * fStack_11c);
    fVar20 = (float)((uint)((_DAT_146b2ff70 - (fVar21 * fStack_120 + fVar14 * fStack_124)) *
                           fStack_108) & _DAT_146b2ff80);
    fVar21 = (float)((uint)((fRam0000000146b2ff74 - (fVar21 * fStack_120 + fVar19)) * fStack_104) &
                    uRam0000000146b2ff84);
    fVar14 = (float)((uint)((fRam0000000146b2ff78 - (fVar14 * fStack_124 + fVar19)) * fStack_100) &
                    uRam0000000146b2ff88);
    fVar19 = (float)((uint)((fRam0000000146b2ff7c - (fVar19 + fVar19)) * fStack_fc) &
                    uRam0000000146b2ff8c);
    local_168 = fVar31 * fVar22 + fVar20 * fVar9 + fVar30 * fVar39 + fVar19 * fVar23;
    fStack_164 = fVar31 * fVar12 + fVar20 * fVar37 + fVar30 * fVar24 + fVar19 * fVar34;
    fStack_160 = fVar31 * fVar38 + fVar20 * fVar26 + fVar30 * fVar13 + fVar19 * fVar35;
    fStack_15c = fVar31 * fVar16 + fVar20 * fVar16 + fVar30 * fVar16 + fVar19 * fRam0000000146b2ff7c
    ;
    local_158 = fVar21 * fVar22 + fVar28 * fVar9 + fVar32 * fVar39 + fVar19 * fVar23;
    fStack_154 = fVar21 * fVar12 + fVar28 * fVar37 + fVar32 * fVar24 + fVar19 * fVar34;
    fStack_150 = fVar21 * fVar38 + fVar28 * fVar26 + fVar32 * fVar13 + fVar19 * fVar35;
    fStack_14c = fVar21 * fVar16 + fVar28 * fVar16 + fVar32 * fVar16 + fVar19 * fRam0000000146b2ff7c
    ;
    local_148 = fVar29 * fVar22 + fVar33 * fVar9 + fVar14 * fVar39 + fVar19 * fVar23;
    fStack_144 = fVar29 * fVar12 + fVar33 * fVar37 + fVar14 * fVar24 + fVar19 * fVar34;
    fStack_140 = fVar29 * fVar38 + fVar33 * fVar26 + fVar14 * fVar13 + fVar19 * fVar35;
    fStack_13c = fVar29 * fVar16 + fVar33 * fVar16 + fVar14 * fVar16 + fVar19 * fRam0000000146b2ff7c
    ;
    local_138 = fStack_114 * fVar22 + local_118 * fVar9 + fStack_110 * fVar39 +
                fRam0000000146b2ff7c * fVar23;
    fStack_134 = fStack_114 * fVar12 + local_118 * fVar37 + fStack_110 * fVar24 +
                 fRam0000000146b2ff7c * fVar34;
    fStack_130 = fStack_114 * fVar38 + local_118 * fVar26 + fStack_110 * fVar13 +
                 fRam0000000146b2ff7c * fVar35;
    fStack_12c = fStack_114 * fVar16 + local_118 * fVar16 + fStack_110 * fVar16 +
                 fRam0000000146b2ff7c * fRam0000000146b2ff7c;
    FMatrix::RemoveScaling(&local_168);
    fVar23 = (float)(-(uint)(_DAT_146b2ffd0 <= fVar25 * fStack_108) &
                     (_DAT_146b2ffc0 ^ (uint)fVar36) ^ _DAT_146b2ffc0);
    fVar25 = (float)(-(uint)(fRam0000000146b2ffd4 <= fVar27 * fStack_104) &
                     (uRam0000000146b2ffc4 ^ (uint)fVar15) ^ uRam0000000146b2ffc4);
    fVar27 = (float)(-(uint)(fRam0000000146b2ffd8 <= fVar18 * fStack_100) &
                     (uRam0000000146b2ffc8 ^ (uint)fVar17) ^ uRam0000000146b2ffc8);
    local_168 = local_168 * fVar23;
    fStack_164 = fStack_164 * fVar23;
    fStack_160 = fStack_160 * fVar23;
    fStack_154 = fStack_154 * fVar25;
    fStack_150 = fStack_150 * fVar25;
    local_158 = local_158 * fVar25;
    fStack_144 = fStack_144 * fVar27;
    fStack_140 = fStack_140 * fVar27;
    local_148 = local_148 * fVar27;
    FQuat::FQuat(&local_178,&local_168);
    local_188 = 0x322bcc77;
    auVar10._0_4_ = (float)local_178 * (float)local_178 + (float)uStack_170 * (float)uStack_170;
    auVar10._4_4_ = local_178._4_4_ * local_178._4_4_ + uStack_170._4_4_ * uStack_170._4_4_;
    auVar10._8_4_ = (float)uStack_170 * (float)uStack_170 + (float)local_178 * (float)local_178;
    auVar10._12_4_ = uStack_170._4_4_ * uStack_170._4_4_ + local_178._4_4_ * local_178._4_4_;
    fVar9 = auVar10._4_4_ + auVar10._0_4_;
    fVar20 = auVar10._8_4_ + auVar10._4_4_;
    fVar12 = auVar10._12_4_ + auVar10._8_4_;
    fVar21 = auVar10._0_4_ + auVar10._12_4_;
    auVar11._4_4_ = fVar20;
    auVar11._0_4_ = fVar9;
    auVar11._8_4_ = fVar12;
    auVar11._12_4_ = fVar21;
    auVar11 = rsqrtps(auVar10,auVar11);
    fVar23 = auVar11._0_4_;
    fVar25 = auVar11._4_4_;
    fVar27 = auVar11._8_4_;
    fVar18 = auVar11._12_4_;
    fVar23 = (_DAT_146b2ff60 - fVar23 * fVar23 * fVar9 * _DAT_146b2ff60) * fVar23 + fVar23;
    fVar25 = (fRam0000000146b2ff64 - fVar25 * fVar25 * fVar20 * fRam0000000146b2ff64) * fVar25 +
             fVar25;
    fVar27 = (fRam0000000146b2ff68 - fVar27 * fVar27 * fVar12 * fRam0000000146b2ff68) * fVar27 +
             fVar27;
    fVar18 = (fRam0000000146b2ff6c - fVar18 * fVar18 * fVar21 * fRam0000000146b2ff6c) * fVar18 +
             fVar18;
    fVar34 = (float)(((uint)(((_DAT_146b2ff60 - fVar23 * fVar23 * fVar9 * _DAT_146b2ff60) * fVar23 +
                             fVar23) * (float)local_178) ^ _DAT_146b2ff50) & -(uint)(1e-08 <= fVar9)
                    ^ _DAT_146b2ff50);
    fVar35 = (float)(((uint)(((fRam0000000146b2ff64 -
                              fVar25 * fVar25 * fVar20 * fRam0000000146b2ff64) * fVar25 + fVar25) *
                            local_178._4_4_) ^ uRam0000000146b2ff54) & -(uint)(1e-08 <= fVar20) ^
                    uRam0000000146b2ff54);
    fVar36 = (float)(((uint)(((fRam0000000146b2ff68 -
                              fVar27 * fVar27 * fVar12 * fRam0000000146b2ff68) * fVar27 + fVar27) *
                            (float)uStack_170) ^ uRam0000000146b2ff58) & -(uint)(1e-08 <= fVar12) ^
                    uRam0000000146b2ff58);
    fVar13 = (float)(((uint)(((fRam0000000146b2ff6c -
                              fVar18 * fVar18 * fVar21 * fRam0000000146b2ff6c) * fVar18 + fVar18) *
                            uStack_170._4_4_) ^ uRam0000000146b2ff5c) & -(uint)(1e-08 <= fVar21) ^
                    uRam0000000146b2ff5c);
    local_118 = local_138;
    fStack_114 = fStack_134;
    fStack_110 = fStack_130;
  }
  lVar5 = *(longlong *)(param_2 + 0x580);
  iVar3 = *(int *)(param_2 + 0x588);
  local_118 = param_3[4] - local_118;
  fStack_114 = param_3[5] - fStack_114;
  fStack_110 = param_3[6] - fStack_110;
  fVar23 = *param_3;
  fVar25 = param_3[1];
  fVar27 = param_3[2];
  fVar18 = param_3[3];
  fVar20 = -fVar34;
  fVar9 = -fVar35;
  fVar36 = -fVar36;
  lVar4 = lVar5;
  if (lVar5 == 0) {
    lVar4 = param_2;
  }
  fVar12 = 0.0;
  local_178 = CONCAT44(fVar35,fVar34) ^ 0x8000000080000000;
  uStack_170 = CONCAT44(fVar13,fVar36);
  lVar6 = (longlong)iVar3 * 0xb0 + lVar4;
  local_128 = fVar18 * fVar20 * _DAT_146b2ffb0 + fVar13 * fVar23 + fVar27 * fVar9 * _DAT_146b2ffa0 +
              fVar25 * fVar36 * _DAT_146b2ff90;
  fStack_124 = fVar27 * fVar20 * fRam0000000146b2ffb4 + fVar13 * fVar25 +
               fVar18 * fVar9 * fRam0000000146b2ffa4 + fVar23 * fVar36 * fRam0000000146b2ff94;
  fStack_120 = fVar25 * fVar20 * fRam0000000146b2ffb8 + fVar13 * fVar27 +
               fVar23 * fVar9 * fRam0000000146b2ffa8 + fVar18 * fVar36 * fRam0000000146b2ff98;
  fStack_11c = fVar23 * fVar20 * fRam0000000146b2ffbc + fVar13 * fVar18 +
               fVar25 * fVar9 * fRam0000000146b2ffac + fVar27 * fVar36 * fRam0000000146b2ff9c;
  fStack_108 = (float)(undefined4)DAT_1464aa788;
  fStack_104 = (float)DAT_1464aa788._4_4_;
  fStack_100 = (float)DAT_1464aa790;
  fStack_fc = 0.0;
  uStack_10c = 0;
  if (lVar4 != lVar6) {
    do {
      lVar5 = *(longlong *)(lVar4 + 0xa8);
      if (*(char *)(lVar5 + 0x31) != '\0') {
        fVar23 = (float)FAnimNotifyEvent::GetDuration(lVar4);
        lVar5 = *(longlong *)(lVar4 + 0xa8);
        fVar40 = fVar40 + fVar23;
      }
      if (*(char *)(lVar5 + 0x30) != '\0') {
        fVar23 = (float)FAnimNotifyEvent::GetDuration(lVar4);
        fVar12 = fVar12 + fVar23;
      }
      lVar4 = lVar4 + 0xb0;
    } while (lVar4 != lVar6);
    lVar5 = *(longlong *)(param_2 + 0x580);
    iVar3 = *(int *)(param_2 + 0x588);
  }
  if (lVar5 == 0) {
    lVar5 = param_2;
  }
  lVar4 = (longlong)iVar3 * 0xb0 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0xb0) {
    local_198 = fVar12;
    FUN_142c8ef20(param_1,lVar5,&local_128,fVar40);
  }
  FUN_142c8f930(param_1);
  fStack_124 = param_3[4];
  fStack_120 = param_3[5];
  fStack_11c = param_3[6];
  local_128 = *(float *)(param_1 + 0xb8);
  local_178 = *(ulonglong *)param_3;
  uStack_170 = *(undefined8 *)(param_3 + 2);
  FQuat::Rotator(&local_178,&local_118);
  iVar3 = *(int *)(param_1 + 0x2a8);
  fStack_104 = (float)DAT_1468b5d98;
  local_f8 = DAT_1468b5da8;
  uStack_10c = (undefined4)_DAT_1468b5d90;
  fStack_108 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
  fStack_100 = (float)DAT_1468b5da0;
  fStack_fc = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
  *(int *)(param_1 + 0x2a8) = iVar3 + 1;
  if (*(int *)(param_1 + 0x2ac) < iVar3 + 1) {
    FUN_142caa0b0(param_1 + 0x100,iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    lVar5 = param_1 + 0x100;
  }
  lVar4 = (longlong)iVar3 * 0x34;
  *(undefined8 *)(lVar5 + lVar4) = CONCAT44(fStack_124,local_128);
  ((undefined8 *)(lVar5 + lVar4))[1] = CONCAT44(fStack_11c,fStack_120);
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = CONCAT44(fStack_114,local_118);
  puVar1[1] = CONCAT44(uStack_10c,fStack_110);
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(fStack_104,fStack_108);
  puVar1[1] = CONCAT44(fStack_fc,fStack_100);
  *(undefined4 *)(lVar5 + 0x30 + lVar4) = local_f8;
  return;
}



// FUNCTION 142c92070 FUN_142c92070 body=299 status=ok
// SIG undefined FUN_142c92070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c92070(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)(int)param_1[1] * 8;
  if (plVar2 != plVar3) {
    do {
      if (*plVar2 != 0) {
        uVar1 = FUN_142caac20(plVar2 + 1,local_48,param_3);
        uVar4 = FUN_142cc4350(uVar1,0);
        switch(local_40) {
        case '\0':
          if (local_40 == '\0') {
            local_40 = -1;
          }
          break;
        case '\x01':
          if (local_40 == '\x01') {
            local_40 = -1;
          }
          break;
        case '\x02':
          if (local_40 == '\x02') {
            local_40 = -1;
          }
          break;
        case '\x03':
        case '\x04':
          if (local_40 == '\x03') {
            local_40 = -1;
          }
          break;
        case '\x05':
          if (local_40 == '\x03') {
            local_40 = -1;
          }
        }
        uStack_60 = 0;
        local_68._0_4_ = (undefined4)param_2;
        local_68._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
        local_58 = (undefined4)local_68;
        uStack_54 = local_68._4_4_;
        uStack_50 = 0;
        uStack_4c = 0;
        local_68 = param_2;
        FUN_142cab8f0(*plVar2,&local_58,uVar4);
      }
      plVar2 = plVar2 + 8;
    } while (plVar2 != plVar3);
  }
  return;
}



// FUNCTION 142c921c0 FUN_142c921c0 body=82 status=ok
// SIG undefined FUN_142c921c0(void)

undefined8 *
FUN_142c921c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uStack_10 = 0;
  local_18 = param_4;
  FUN_142c90ad0(param_2,param_1,param_3,&local_18,0,local_res8);
  return param_1;
}



// FUNCTION 142c92220 FUN_142c92220 body=5234 status=ok
// SIG undefined FUN_142c92220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c92220(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar24 [16];
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  float fVar49;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStack_2b8 [32];
  float local_298;
  float local_294;
  float local_290;
  float local_288;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined1 local_268 [4];
  undefined1 auStack_264 [4];
  undefined8 uStack_260;
  undefined1 local_258 [8];
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
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
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(int *)(param_2 + 0x588) < 2) {
    if (*(int *)(param_2 + 0x588) == 0) {
      fVar44 = *(float *)(param_1 + 0xb8);
      fVar22 = 0.0;
      local_238 = 0.0;
    }
    else {
      lVar17 = *(longlong *)(param_2 + 0x580);
      if (*(longlong *)(param_2 + 0x580) == 0) {
        lVar17 = param_2;
      }
      fVar22 = (float)FAnimLinkableElement::GetTime(lVar17,0);
      lVar17 = *(longlong *)(param_2 + 0x580);
      if (*(longlong *)(param_2 + 0x580) == 0) {
        lVar17 = param_2;
      }
      local_238 = fVar22;
      fVar44 = (float)FAnimNotifyEvent::GetDuration(lVar17);
      fVar44 = fVar44 + fVar22;
    }
    FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_158,*(undefined4 *)(param_1 + 0xb0),fVar22);
    fVar34 = *(float *)(param_1 + 0xb4);
    local_148._4_4_ = (float)local_148._4_4_ * fVar34;
    local_148._0_4_ = (float)local_148._0_4_ * fVar34;
    fStack_140 = fStack_140 * fVar34;
    fStack_13c = 0.0;
    FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_128,fVar22,fVar44);
    fVar22 = *(float *)(param_1 + 0xb4);
    local_118._4_4_ = (float)local_118._4_4_ * fVar22;
    local_118._0_4_ = (float)local_118._0_4_ * fVar22;
    fStack_110 = fStack_110 * fVar22;
    unique0x10000255 = 0;
    uVar13 = FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_f8,fVar44,0x7f7fffff);
    fVar30 = fRam0000000146b2ffd8;
    fVar33 = fRam0000000146b2ffd4;
    fVar31 = _DAT_146b2ffd0;
    fVar43 = fRam0000000146b2ff78;
    fVar42 = fRam0000000146b2ff74;
    fVar40 = _DAT_146b2ff70;
    fVar22 = *(float *)(param_1 + 0xb4);
    auVar8._4_4_ = fStack_134;
    auVar8._0_4_ = local_138;
    auVar8._8_4_ = fStack_130;
    auVar8._12_4_ = fStack_12c;
    auVar47 = *(undefined1 (*) [16])(param_1 + 0xf0);
    fVar44 = auVar47._0_4_;
    fVar34 = auVar47._4_4_;
    fVar59 = auVar47._8_4_;
    fStack_19c = auVar47._12_4_;
    fVar23 = *(float *)(param_1 + 0xd0);
    fVar35 = *(float *)(param_1 + 0xd4);
    fVar28 = *(float *)(param_1 + 0xd8);
    fVar37 = *(float *)(param_1 + 0xdc);
    auVar47 = minps(auVar8,auVar47);
    auVar19._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
    auVar19._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
    auVar19._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
    auVar19._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
    iVar14 = movmskps(uVar13,auVar19);
    local_e8._4_4_ = (float)local_e8._4_4_ * fVar22;
    local_e8._0_4_ = (float)local_e8._0_4_ * fVar22;
    fStack_e0 = fStack_e0 * fVar22;
    fStack_dc = 0.0;
    if (iVar14 == 0) {
      fVar31 = (float)local_148._0_4_ * fVar44;
      fVar33 = (float)local_148._4_4_ * fVar34;
      fVar30 = fStack_140 * fVar59;
      fVar36 = fStack_13c * fStack_19c;
      fVar53 = fStack_14c * fVar23 * _DAT_146b2ffb0 + fVar37 * local_158 +
               fStack_150 * fVar35 * _DAT_146b2ffa0 + fVar28 * fStack_154 * _DAT_146b2ff90;
      fVar27 = fStack_150 * fVar23 * fRam0000000146b2ffb4 + fVar37 * fStack_154 +
               fStack_14c * fVar35 * fRam0000000146b2ffa4 +
               fVar28 * local_158 * fRam0000000146b2ff94;
      fVar29 = fStack_154 * fVar23 * fRam0000000146b2ffb8 + fVar37 * fStack_150 +
               local_158 * fVar35 * fRam0000000146b2ffa8 +
               fVar28 * fStack_14c * fRam0000000146b2ff98;
      fVar32 = local_158 * fVar23 * fRam0000000146b2ffbc + fVar37 * fStack_14c +
               fStack_154 * fVar35 * fRam0000000146b2ffac +
               fVar28 * fStack_150 * fRam0000000146b2ff9c;
      fVar22 = fVar30 * fVar35 - fVar33 * fVar28;
      fVar40 = fVar31 * fVar28 - fVar30 * fVar23;
      fVar42 = fVar33 * fVar23 - fVar31 * fVar35;
      fVar43 = fVar36 * fVar37 - fVar36 * fVar37;
      fVar22 = fVar22 + fVar22;
      fVar40 = fVar40 + fVar40;
      fVar42 = fVar42 + fVar42;
      fVar43 = fVar43 + fVar43;
      local_1b8._0_4_ =
           (fVar42 * fVar35 - fVar40 * fVar28) + fVar22 * fVar37 + fVar31 +
           *(float *)(param_1 + 0xe0);
      local_1b8._4_4_ =
           (fVar22 * fVar28 - fVar42 * fVar23) + fVar40 * fVar37 + fVar33 +
           *(float *)(param_1 + 0xe4);
      fStack_1b0 = (fVar40 * fVar23 - fVar22 * fVar35) + fVar42 * fVar37 + fVar30 +
                   *(float *)(param_1 + 0xe8);
      fStack_1ac = (fVar43 * fVar37 - fVar43 * fVar37) + fVar43 * fVar37 + fVar36 +
                   *(float *)(param_1 + 0xec);
      uVar13 = 0;
    }
    else {
      fVar27 = fVar35 + fVar35;
      fVar29 = fVar28 + fVar28;
      fVar22 = *(float *)(param_1 + 0xe0);
      fVar36 = *(float *)(param_1 + 0xe4);
      fVar53 = *(float *)(param_1 + 0xe8);
      fVar32 = (fVar23 + fVar23) * fVar23;
      fVar49 = fVar37 * (fVar23 + fVar23);
      fVar56 = (fVar37 * fVar29 + fVar23 * fVar27) * fVar44;
      fVar57 = (fVar49 + fVar35 * fVar29) * fVar34;
      fVar58 = (fVar37 * fVar27 + fVar23 * fVar29) * fVar59;
      fVar38 = fVar34 * (fVar23 * fVar27 - fVar37 * fVar29);
      fVar39 = fVar59 * (fVar35 * fVar29 - fVar49);
      fVar41 = fVar44 * (fVar23 * fVar29 - fVar37 * fVar27);
      fVar23 = (float)((uint)((_DAT_146b2ff70 - (fVar29 * fVar28 + fVar27 * fVar35)) * fVar44) &
                      _DAT_146b2ff80);
      fVar28 = (float)((uint)((fRam0000000146b2ff74 - (fVar29 * fVar28 + fVar32)) * fVar34) &
                      uRam0000000146b2ff84);
      fVar27 = (float)((uint)((fRam0000000146b2ff78 - (fVar27 * fVar35 + fVar32)) * fVar59) &
                      uRam0000000146b2ff88);
      fVar32 = (float)((uint)((fRam0000000146b2ff7c - (fVar32 + fVar32)) * fStack_19c) &
                      uRam0000000146b2ff8c);
      fVar29 = fStack_154 + fStack_154;
      fVar37 = fStack_150 + fStack_150;
      fVar49 = local_158 * (local_158 + local_158);
      fVar35 = (local_158 + local_158) * fStack_14c;
      fVar52 = (fVar37 * fStack_14c + local_158 * fVar29) * local_138;
      fVar54 = (fVar35 + fStack_154 * fVar37) * fStack_134;
      fVar55 = (fVar29 * fStack_14c + local_158 * fVar37) * fStack_130;
      fVar45 = fStack_134 * (local_158 * fVar29 - fVar37 * fStack_14c);
      fVar50 = fStack_130 * (fStack_154 * fVar37 - fVar35);
      fVar51 = local_138 * (local_158 * fVar37 - fVar29 * fStack_14c);
      fVar35 = (float)((uint)((_DAT_146b2ff70 - (fStack_150 * fVar37 + fStack_154 * fVar29)) *
                             local_138) & _DAT_146b2ff80);
      fVar37 = (float)((uint)((fRam0000000146b2ff74 - (fStack_150 * fVar37 + fVar49)) * fStack_134)
                      & uRam0000000146b2ff84);
      fVar29 = (float)((uint)((fRam0000000146b2ff78 - (fStack_154 * fVar29 + fVar49)) * fStack_130)
                      & uRam0000000146b2ff88);
      fVar49 = (float)((uint)((fRam0000000146b2ff7c - (fVar49 + fVar49)) * fStack_12c) &
                      uRam0000000146b2ff8c);
      local_278 = fVar52 * fVar38 + fVar35 * fVar23 + fVar51 * fVar58 + fVar49 * fVar22;
      fStack_274 = fVar52 * fVar28 + fVar35 * fVar56 + fVar51 * fVar39 + fVar49 * fVar36;
      fStack_270 = fVar52 * fVar57 + fVar35 * fVar41 + fVar51 * fVar27 + fVar49 * fVar53;
      fStack_26c = fVar52 * fVar32 + fVar35 * fVar32 + fVar51 * fVar32 +
                   fVar49 * fRam0000000146b2ff7c;
      auStack_264 = (undefined1  [4])
                    (fVar37 * fVar28 + fVar45 * fVar56 + fVar54 * fVar39 + fVar49 * fVar36);
      local_268 = (undefined1  [4])
                  (fVar37 * fVar38 + fVar45 * fVar23 + fVar54 * fVar58 + fVar49 * fVar22);
      uStack_260._0_4_ = fVar37 * fVar57 + fVar45 * fVar41 + fVar54 * fVar27 + fVar49 * fVar53;
      uStack_260._4_4_ =
           fVar37 * fVar32 + fVar45 * fVar32 + fVar54 * fVar32 + fVar49 * fRam0000000146b2ff7c;
      local_258._4_4_ = fVar50 * fVar28 + fVar55 * fVar56 + fVar29 * fVar39 + fVar49 * fVar36;
      local_258._0_4_ = fVar50 * fVar38 + fVar55 * fVar23 + fVar29 * fVar58 + fVar49 * fVar22;
      uStack_250._0_4_ = fVar50 * fVar57 + fVar55 * fVar41 + fVar29 * fVar27 + fVar49 * fVar53;
      uStack_250._4_4_ =
           fVar50 * fVar32 + fVar55 * fVar32 + fVar29 * fVar32 + fVar49 * fRam0000000146b2ff7c;
      local_248 = (float)local_148._4_4_ * fVar38 + (float)local_148._0_4_ * fVar23 +
                  fStack_140 * fVar58 + fRam0000000146b2ff7c * fVar22;
      fStack_244 = (float)local_148._4_4_ * fVar28 + (float)local_148._0_4_ * fVar56 +
                   fStack_140 * fVar39 + fRam0000000146b2ff7c * fVar36;
      fStack_240 = (float)local_148._4_4_ * fVar57 + (float)local_148._0_4_ * fVar41 +
                   fStack_140 * fVar27 + fRam0000000146b2ff7c * fVar53;
      fStack_23c = (float)local_148._4_4_ * fVar32 + (float)local_148._0_4_ * fVar32 +
                   fStack_140 * fVar32 + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      FMatrix::RemoveScaling(&local_278);
      fVar22 = (float)(-(uint)(fVar31 <= fVar44 * local_138) & (_DAT_146b2ffc0 ^ (uint)fVar40) ^
                      _DAT_146b2ffc0);
      fVar23 = (float)(-(uint)(fVar33 <= fVar34 * fStack_134) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar42) ^ uRam0000000146b2ffc4);
      fVar28 = (float)(-(uint)(fVar30 <= fVar59 * fStack_130) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar43) ^ uRam0000000146b2ffc8);
      local_278 = local_278 * fVar22;
      fStack_270 = fStack_270 * fVar22;
      fStack_274 = fStack_274 * fVar22;
      fVar22 = (float)auStack_264 * fVar23;
      fVar35 = (float)local_268 * fVar23;
      uStack_260._0_4_ = (float)uStack_260 * fVar23;
      auStack_264 = (undefined1  [4])fVar22;
      fVar23 = (float)local_258._0_4_ * fVar28;
      fVar22 = (float)local_258._4_4_ * fVar28;
      uStack_250._0_4_ = (float)uStack_250 * fVar28;
      local_268 = (undefined1  [4])fVar35;
      local_258._4_4_ = fVar22;
      local_258._0_4_ = fVar23;
      uVar13 = FQuat::FQuat(&local_1d8,&local_278);
      local_288 = 1e-08;
      auVar24._0_4_ = local_1d8 * local_1d8 + fStack_1d0 * fStack_1d0;
      auVar24._4_4_ = fStack_1d4 * fStack_1d4 + fStack_1cc * fStack_1cc;
      auVar24._8_4_ = fStack_1d0 * fStack_1d0 + local_1d8 * local_1d8;
      auVar24._12_4_ = fStack_1cc * fStack_1cc + fStack_1d4 * fStack_1d4;
      fVar37 = auVar24._4_4_ + auVar24._0_4_;
      fVar40 = auVar24._8_4_ + auVar24._4_4_;
      fVar42 = auVar24._12_4_ + auVar24._8_4_;
      fVar43 = auVar24._0_4_ + auVar24._12_4_;
      auVar47._4_4_ = fVar40;
      auVar47._0_4_ = fVar37;
      auVar47._8_4_ = fVar42;
      auVar47._12_4_ = fVar43;
      auVar47 = rsqrtps(auVar24,auVar47);
      fVar22 = auVar47._0_4_;
      fVar23 = auVar47._4_4_;
      fVar35 = auVar47._8_4_;
      fVar28 = auVar47._12_4_;
      fVar22 = (_DAT_146b2ff60 - fVar22 * fVar22 * fVar37 * _DAT_146b2ff60) * fVar22 + fVar22;
      fVar23 = (fRam0000000146b2ff64 - fVar23 * fVar23 * fVar40 * fRam0000000146b2ff64) * fVar23 +
               fVar23;
      fVar35 = (fRam0000000146b2ff68 - fVar35 * fVar35 * fVar42 * fRam0000000146b2ff68) * fVar35 +
               fVar35;
      fVar28 = (fRam0000000146b2ff6c - fVar28 * fVar28 * fVar43 * fRam0000000146b2ff6c) * fVar28 +
               fVar28;
      fStack_1ac = 0.0;
      fVar53 = (float)(((uint)(((_DAT_146b2ff60 - fVar22 * fVar22 * fVar37 * _DAT_146b2ff60) *
                                fVar22 + fVar22) * local_1d8) ^ _DAT_146b2ff50) &
                       -(uint)(1e-08 <= fVar37) ^ _DAT_146b2ff50);
      fVar27 = (float)(((uint)(((fRam0000000146b2ff64 -
                                fVar23 * fVar23 * fVar40 * fRam0000000146b2ff64) * fVar23 + fVar23)
                              * fStack_1d4) ^ uRam0000000146b2ff54) & -(uint)(1e-08 <= fVar40) ^
                      uRam0000000146b2ff54);
      fVar29 = (float)(((uint)(((fRam0000000146b2ff68 -
                                fVar35 * fVar35 * fVar42 * fRam0000000146b2ff68) * fVar35 + fVar35)
                              * fStack_1d0) ^ uRam0000000146b2ff58) & -(uint)(1e-08 <= fVar42) ^
                      uRam0000000146b2ff58);
      fVar32 = (float)(((uint)(((fRam0000000146b2ff6c -
                                fVar28 * fVar28 * fVar43 * fRam0000000146b2ff6c) * fVar28 + fVar28)
                              * fStack_1cc) ^ uRam0000000146b2ff5c) & -(uint)(1e-08 <= fVar43) ^
                      uRam0000000146b2ff5c);
      local_1b8._0_4_ = local_248;
      local_1b8._4_4_ = fStack_244;
      fStack_1b0 = fStack_240;
    }
    fVar40 = fRam0000000146b2ffd8;
    fVar37 = fRam0000000146b2ffd4;
    fVar28 = _DAT_146b2ffd0;
    fVar35 = fRam0000000146b2ff78;
    fVar23 = fRam0000000146b2ff74;
    fVar22 = _DAT_146b2ff70;
    fStack_19c = fStack_19c * fStack_12c;
    fVar59 = fVar59 * fStack_130;
    fVar34 = fVar34 * fStack_134;
    fVar44 = fVar44 * local_138;
    auVar9._4_4_ = fStack_104;
    auVar9._0_4_ = local_108;
    auVar9._8_4_ = fStack_100;
    auVar9._12_4_ = fStack_fc;
    local_1a8._4_4_ = fVar34;
    local_1a8._0_4_ = fVar44;
    fStack_1a0 = fVar59;
    auVar7._4_4_ = fVar34;
    auVar7._0_4_ = fVar44;
    auVar7._8_4_ = fVar59;
    auVar7._12_4_ = fStack_19c;
    auVar47 = minps(auVar9,auVar7);
    auVar20._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
    auVar20._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
    auVar20._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
    auVar20._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
    iVar14 = movmskps(uVar13,auVar20);
    _local_1c8 = CONCAT44(fVar27,fVar53);
    _fStack_1c0 = CONCAT44(fVar32,fVar29);
    if (iVar14 == 0) {
      fVar44 = fVar44 * (float)local_118._0_4_;
      fVar34 = fVar34 * (float)local_118._4_4_;
      fVar59 = fVar59 * fStack_110;
      fVar23 = fVar59 * fVar27 - fVar34 * fVar29;
      fVar35 = fVar44 * fVar29 - fVar59 * fVar53;
      fVar28 = fVar34 * fVar53 - fVar44 * fVar27;
      fVar23 = fVar23 + fVar23;
      fVar35 = fVar35 + fVar35;
      fVar28 = fVar28 + fVar28;
      fVar22 = (fVar28 * fVar27 - fVar35 * fVar29) + fVar32 * fVar23 + fVar44 +
               (float)local_1b8._0_4_;
      fVar44 = (fVar23 * fVar29 - fVar28 * fVar53) + fVar32 * fVar35 + fVar34 +
               (float)local_1b8._4_4_;
      fVar34 = (fVar35 * fVar53 - fVar23 * fVar27) + fVar32 * fVar28 + fVar59 + fStack_1b0;
    }
    else {
      fVar43 = fVar27 + fVar27;
      fVar31 = fVar29 + fVar29;
      fVar33 = fVar53 * (fVar53 + fVar53);
      fVar42 = (fVar53 + fVar53) * fVar32;
      fVar52 = (fVar31 * fVar32 + fVar53 * fVar43) * fVar44;
      fVar54 = (fVar42 + fVar27 * fVar31) * fVar34;
      fVar55 = (fVar43 * fVar32 + fVar53 * fVar31) * fVar59;
      fVar49 = fVar34 * (fVar53 * fVar43 - fVar31 * fVar32);
      fVar38 = fVar59 * (fVar27 * fVar31 - fVar42);
      fVar32 = fVar44 * (fVar53 * fVar31 - fVar43 * fVar32);
      fVar42 = (float)((uint)((_DAT_146b2ff70 - (fVar29 * fVar31 + fVar27 * fVar43)) * fVar44) &
                      _DAT_146b2ff80);
      fVar31 = (float)((uint)((fRam0000000146b2ff74 - (fVar29 * fVar31 + fVar33)) * fVar34) &
                      uRam0000000146b2ff84);
      fVar30 = (float)((uint)((fRam0000000146b2ff78 - (fVar27 * fVar43 + fVar33)) * fVar59) &
                      uRam0000000146b2ff88);
      fVar53 = (float)((uint)((fRam0000000146b2ff7c - (fVar33 + fVar33)) * fStack_19c) &
                      uRam0000000146b2ff8c);
      fVar36 = fStack_124 + fStack_124;
      fVar33 = fStack_120 + fStack_120;
      fVar27 = local_128 * (local_128 + local_128);
      fVar43 = (local_128 + local_128) * fStack_11c;
      fVar45 = (fVar33 * fStack_11c + fVar36 * local_128) * local_108;
      fVar50 = (fVar43 + fVar33 * fStack_124) * fStack_104;
      fVar51 = (fVar36 * fStack_11c + fVar33 * local_128) * fStack_100;
      fVar29 = fStack_104 * (fVar36 * local_128 - fVar33 * fStack_11c);
      fVar39 = fStack_100 * (fVar33 * fStack_124 - fVar43);
      fVar41 = local_108 * (fVar33 * local_128 - fVar36 * fStack_11c);
      fVar43 = (float)((uint)((_DAT_146b2ff70 - (fStack_120 * fVar33 + fStack_124 * fVar36)) *
                             local_108) & _DAT_146b2ff80);
      fVar33 = (float)((uint)((fRam0000000146b2ff74 - (fStack_120 * fVar33 + fVar27)) * fStack_104)
                      & uRam0000000146b2ff84);
      fVar36 = (float)((uint)((fRam0000000146b2ff78 - (fStack_124 * fVar36 + fVar27)) * fStack_100)
                      & uRam0000000146b2ff88);
      fVar27 = (float)((uint)((fRam0000000146b2ff7c - (fVar27 + fVar27)) * fStack_fc) &
                      uRam0000000146b2ff8c);
      local_278 = fVar45 * fVar49 + fVar43 * fVar42 + fVar41 * fVar55 +
                  fVar27 * (float)local_1b8._0_4_;
      fStack_274 = fVar45 * fVar31 + fVar43 * fVar52 + fVar41 * fVar38 +
                   fVar27 * (float)local_1b8._4_4_;
      fStack_270 = fVar45 * fVar54 + fVar43 * fVar32 + fVar41 * fVar30 + fVar27 * fStack_1b0;
      fStack_26c = fVar45 * fVar53 + fVar43 * fVar53 + fVar41 * fVar53 +
                   fVar27 * fRam0000000146b2ff7c;
      auStack_264 = (undefined1  [4])
                    (fVar33 * fVar31 + fVar29 * fVar52 + fVar50 * fVar38 +
                    fVar27 * (float)local_1b8._4_4_);
      local_268 = (undefined1  [4])
                  (fVar33 * fVar49 + fVar29 * fVar42 + fVar50 * fVar55 +
                  fVar27 * (float)local_1b8._0_4_);
      uStack_260._0_4_ = fVar33 * fVar54 + fVar29 * fVar32 + fVar50 * fVar30 + fVar27 * fStack_1b0;
      uStack_260._4_4_ =
           fVar33 * fVar53 + fVar29 * fVar53 + fVar50 * fVar53 + fVar27 * fRam0000000146b2ff7c;
      local_258._4_4_ =
           fVar39 * fVar31 + fVar51 * fVar52 + fVar36 * fVar38 + fVar27 * (float)local_1b8._4_4_;
      local_258._0_4_ =
           fVar39 * fVar49 + fVar51 * fVar42 + fVar36 * fVar55 + fVar27 * (float)local_1b8._0_4_;
      uStack_250._0_4_ = fVar39 * fVar54 + fVar51 * fVar32 + fVar36 * fVar30 + fVar27 * fStack_1b0;
      uStack_250._4_4_ =
           fVar39 * fVar53 + fVar51 * fVar53 + fVar36 * fVar53 + fVar27 * fRam0000000146b2ff7c;
      local_248 = (float)local_118._4_4_ * fVar49 + (float)local_118._0_4_ * fVar42 +
                  fStack_110 * fVar55 + fRam0000000146b2ff7c * (float)local_1b8._0_4_;
      fStack_244 = (float)local_118._4_4_ * fVar31 + (float)local_118._0_4_ * fVar52 +
                   fStack_110 * fVar38 + fRam0000000146b2ff7c * (float)local_1b8._4_4_;
      fStack_240 = (float)local_118._4_4_ * fVar54 + (float)local_118._0_4_ * fVar32 +
                   fStack_110 * fVar30 + fRam0000000146b2ff7c * fStack_1b0;
      fStack_23c = (float)local_118._4_4_ * fVar53 + (float)local_118._0_4_ * fVar53 +
                   fStack_110 * fVar53 + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      FMatrix::RemoveScaling(&local_278);
      auVar8 = _local_258;
      auVar47 = _local_268;
      fVar22 = (float)(-(uint)(fVar28 <= local_108 * fVar44) & (_DAT_146b2ffc0 ^ (uint)fVar22) ^
                      _DAT_146b2ffc0);
      fVar44 = (float)(-(uint)(fVar37 <= fStack_104 * fVar34) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar23) ^ uRam0000000146b2ffc4);
      fVar59 = (float)(-(uint)(fVar40 <= fStack_100 * fVar59) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar35) ^ uRam0000000146b2ffc8);
      local_278 = local_278 * fVar22;
      fStack_274 = fStack_274 * fVar22;
      fStack_270 = fStack_270 * fVar22;
      fVar22 = (float)uStack_260 * fVar44;
      fVar34 = (float)local_268 * fVar44;
      auVar11._4_8_ = uStack_260;
      auVar11._0_4_ = (float)auStack_264 * fVar44;
      _local_268 = auVar11._0_8_ << 0x20;
      uStack_260._4_4_ = auVar47._12_4_;
      uStack_260._0_4_ = fVar22;
      fVar22 = (float)uStack_250 * fVar59;
      fVar44 = (float)local_258._0_4_ * fVar59;
      auVar12._4_8_ = uStack_250;
      auVar12._0_4_ = (float)local_258._4_4_ * fVar59;
      local_258 = (undefined1  [8])(auVar12._0_8_ << 0x20);
      uStack_250._4_4_ = auVar8._12_4_;
      uStack_250._0_4_ = fVar22;
      local_268 = (undefined1  [4])fVar34;
      local_258._0_4_ = fVar44;
      FQuat::FQuat(&local_228,&local_278);
      local_288 = 1e-08;
      auVar25._0_4_ = local_228 * local_228 + fStack_220 * fStack_220;
      auVar25._4_4_ = fStack_224 * fStack_224 + fStack_21c * fStack_21c;
      auVar25._8_4_ = fStack_220 * fStack_220 + local_228 * local_228;
      auVar25._12_4_ = fStack_21c * fStack_21c + fStack_224 * fStack_224;
      fVar23 = auVar25._4_4_ + auVar25._0_4_;
      fVar35 = auVar25._8_4_ + auVar25._4_4_;
      fVar28 = auVar25._12_4_ + auVar25._8_4_;
      fVar37 = auVar25._0_4_ + auVar25._12_4_;
      auVar4._4_4_ = fVar35;
      auVar4._0_4_ = fVar23;
      auVar4._8_4_ = fVar28;
      auVar4._12_4_ = fVar37;
      auVar47 = rsqrtps(auVar25,auVar4);
      fVar22 = auVar47._0_4_;
      fVar44 = auVar47._4_4_;
      fVar34 = auVar47._8_4_;
      fVar59 = auVar47._12_4_;
      fVar22 = (_DAT_146b2ff60 - fVar22 * fVar22 * fVar23 * _DAT_146b2ff60) * fVar22 + fVar22;
      fVar44 = (fRam0000000146b2ff64 - fVar44 * fVar44 * fVar35 * fRam0000000146b2ff64) * fVar44 +
               fVar44;
      fVar34 = (fRam0000000146b2ff68 - fVar34 * fVar34 * fVar28 * fRam0000000146b2ff68) * fVar34 +
               fVar34;
      fVar59 = (fRam0000000146b2ff6c - fVar59 * fVar59 * fVar37 * fRam0000000146b2ff6c) * fVar59 +
               fVar59;
      local_228 = (float)(((uint)(((_DAT_146b2ff60 - fVar22 * fVar22 * fVar23 * _DAT_146b2ff60) *
                                   fVar22 + fVar22) * local_228) ^ _DAT_146b2ff50) &
                          -(uint)(1e-08 <= fVar23) ^ _DAT_146b2ff50);
      fStack_224 = (float)(((uint)(((fRam0000000146b2ff64 -
                                    fVar44 * fVar44 * fVar35 * fRam0000000146b2ff64) * fVar44 +
                                   fVar44) * fStack_224) ^ uRam0000000146b2ff54) &
                           -(uint)(1e-08 <= fVar35) ^ uRam0000000146b2ff54);
      fStack_220 = (float)(((uint)(((fRam0000000146b2ff68 -
                                    fVar34 * fVar34 * fVar28 * fRam0000000146b2ff68) * fVar34 +
                                   fVar34) * fStack_220) ^ uRam0000000146b2ff58) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146b2ff58);
      fStack_21c = (float)(((uint)(((fRam0000000146b2ff6c -
                                    fVar59 * fVar59 * fVar37 * fRam0000000146b2ff6c) * fVar59 +
                                   fVar59) * fStack_21c) ^ uRam0000000146b2ff5c) &
                           -(uint)(1e-08 <= fVar37) ^ uRam0000000146b2ff5c);
      fVar22 = local_248;
      fVar44 = fStack_244;
      fVar34 = fStack_240;
    }
    local_298 = *(float *)(param_1 + 0x94) - fVar22;
    local_294 = *(float *)(param_1 + 0x98) - fVar44;
    local_290 = *(float *)(param_1 + 0x9c) - fVar34;
    fVar59 = local_294 * local_294 + local_298 * local_298;
    if (fVar59 == 1.0) {
      if (local_290 == 0.0) goto LAB_142c92fd2;
    }
    else {
      if (fVar59 < 1e-08) {
        local_298 = DAT_1468b5d90;
        local_290 = DAT_1468b5d98;
        local_294 = DAT_1468b5d94;
        goto LAB_142c92fd2;
      }
      auVar48._8_8_ = 0;
      auVar48._0_8_ = CONCAT44(0,fVar59);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,fVar59);
      auVar47 = rsqrtss(auVar48,auVar3);
      local_288 = auVar47._0_4_;
      local_288 = local_288 + local_288 * (0.5 - fVar59 * 0.5 * local_288 * local_288);
      local_288 = local_288 + local_288 * (0.5 - fVar59 * 0.5 * local_288 * local_288);
      local_298 = local_288 * local_298;
      local_294 = local_288 * local_294;
    }
    local_290 = 0.0;
LAB_142c92fd2:
    uVar15 = FVector::Rotation(&local_298,&local_228);
    uVar13 = FRotator::Quaternion(uVar15,&local_168);
    fVar35 = fRam0000000146b2ff78;
    fVar23 = fRam0000000146b2ff74;
    fVar59 = _DAT_146b2ff70;
    fStack_170 = DAT_1464aa790;
    fStack_174 = DAT_1464aa788._4_4_;
    local_178 = (float)DAT_1464aa788;
    fVar40 = -local_f8;
    auVar10._4_4_ = fStack_d4;
    auVar10._0_4_ = local_d8;
    auVar10._8_4_ = fStack_d0;
    auVar10._12_4_ = fStack_cc;
    fVar37 = -fStack_f0;
    fVar28 = -fStack_f4;
    local_278 = fStack_ec * local_168 * _DAT_146b2ffb0 + fStack_15c * fVar40 +
                fVar37 * fStack_164 * _DAT_146b2ffa0 + fVar28 * fStack_160 * _DAT_146b2ff90;
    fStack_274 = fVar37 * local_168 * fRam0000000146b2ffb4 + fStack_15c * fVar28 +
                 fStack_ec * fStack_164 * fRam0000000146b2ffa4 +
                 fVar40 * fStack_160 * fRam0000000146b2ff94;
    fStack_270 = fVar28 * local_168 * fRam0000000146b2ffb8 + fStack_15c * fVar37 +
                 fVar40 * fStack_164 * fRam0000000146b2ffa8 +
                 fStack_ec * fStack_160 * fRam0000000146b2ff98;
    fStack_26c = fVar40 * local_168 * fRam0000000146b2ffbc + fStack_15c * fStack_ec +
                 fVar28 * fStack_164 * fRam0000000146b2ffac +
                 fVar37 * fStack_160 * fRam0000000146b2ff9c;
    auVar6._4_4_ = DAT_1464aa788._4_4_;
    auVar6._0_4_ = (float)DAT_1464aa788;
    auVar6._8_4_ = DAT_1464aa790;
    auVar6._12_4_ = 0;
    auVar47 = minps(auVar10,auVar6);
    auStack_264 = (undefined1  [4])fVar44;
    local_268 = (undefined1  [4])fVar22;
    uStack_260._0_4_ = fVar34;
    uStack_260._4_4_ = 0;
    auVar21._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
    auVar21._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
    auVar21._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
    auVar21._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
    iVar14 = movmskps(uVar13,auVar21);
    local_258._4_4_ = DAT_1464aa788._4_4_;
    local_258._0_4_ = (float)DAT_1464aa788;
    uStack_250._0_4_ = DAT_1464aa790;
    uStack_250._4_4_ = 0;
    if (iVar14 == 0) {
      fVar37 = (float)DAT_1464aa788 * (float)local_e8._0_4_;
      fVar40 = DAT_1464aa788._4_4_ * (float)local_e8._4_4_;
      fVar42 = DAT_1464aa790 * fStack_e0;
      fVar43 = fStack_dc * 0.0;
      local_198 = local_278 * fStack_ec * _DAT_146b2ffb0 + local_f8 * fStack_26c +
                  fStack_274 * fStack_f0 * _DAT_146b2ffa0 + fStack_270 * fStack_f4 * _DAT_146b2ff90;
      fStack_194 = local_278 * fStack_f0 * fRam0000000146b2ffb4 + fStack_f4 * fStack_26c +
                   fStack_274 * fStack_ec * fRam0000000146b2ffa4 +
                   fStack_270 * local_f8 * fRam0000000146b2ff94;
      fStack_190 = local_278 * fStack_f4 * fRam0000000146b2ffb8 + fStack_f0 * fStack_26c +
                   fStack_274 * local_f8 * fRam0000000146b2ffa8 +
                   fStack_270 * fStack_ec * fRam0000000146b2ff98;
      fStack_18c = local_278 * local_f8 * fRam0000000146b2ffbc + fStack_ec * fStack_26c +
                   fStack_274 * fStack_f4 * fRam0000000146b2ffac +
                   fStack_270 * fStack_f0 * fRam0000000146b2ff9c;
      fVar59 = fVar42 * fStack_274 - fVar40 * fStack_270;
      fVar23 = fVar37 * fStack_270 - fVar42 * local_278;
      fVar35 = fVar40 * local_278 - fVar37 * fStack_274;
      fVar28 = fVar43 * fStack_26c - fVar43 * fStack_26c;
      fVar59 = fVar59 + fVar59;
      fVar23 = fVar23 + fVar23;
      fVar35 = fVar35 + fVar35;
      fVar28 = fVar28 + fVar28;
      local_188._4_4_ =
           (fVar59 * fStack_270 - fVar35 * local_278) + fStack_26c * fVar23 + fVar40 + fVar44;
      local_188._0_4_ =
           (fVar35 * fStack_274 - fVar23 * fStack_270) + fStack_26c * fVar59 + fVar37 + fVar22;
      fStack_180 = (fVar23 * local_278 - fVar59 * fStack_274) + fStack_26c * fVar35 + fVar42 +
                   fVar34;
      fStack_17c = (fVar28 * fStack_26c - fVar28 * fStack_26c) + fStack_26c * fVar28 + fVar43 + 0.0;
    }
    else {
      fVar37 = fStack_274 + fStack_274;
      fVar40 = fStack_270 + fStack_270;
      fVar52 = local_d8 * (float)DAT_1464aa788;
      fVar54 = fStack_d4 * DAT_1464aa788._4_4_;
      fVar55 = fStack_d0 * DAT_1464aa790;
      fVar33 = (local_278 + local_278) * local_278;
      fVar28 = (local_278 + local_278) * fStack_26c;
      fVar31 = fStack_f4 + fStack_f4;
      fVar42 = fStack_f0 + fStack_f0;
      fVar45 = (fVar40 * fStack_26c + fVar37 * local_278) * (float)DAT_1464aa788;
      fVar50 = (fVar28 + fVar40 * fStack_274) * DAT_1464aa788._4_4_;
      fVar51 = (fVar37 * fStack_26c + fVar40 * local_278) * DAT_1464aa790;
      fVar36 = DAT_1464aa788._4_4_ * (fVar37 * local_278 - fVar40 * fStack_26c);
      fVar27 = DAT_1464aa790 * (fVar40 * fStack_274 - fVar28);
      fVar32 = (float)DAT_1464aa788 * (fVar40 * local_278 - fVar37 * fStack_26c);
      fVar30 = local_f8 * (local_f8 + local_f8);
      fVar28 = (float)((uint)((_DAT_146b2ff70 - (fVar40 * fStack_270 + fVar37 * fStack_274)) *
                             (float)DAT_1464aa788) & _DAT_146b2ff80);
      fVar40 = (float)((uint)((fRam0000000146b2ff74 - (fVar40 * fStack_270 + fVar33)) *
                             DAT_1464aa788._4_4_) & uRam0000000146b2ff84);
      fVar43 = (float)((uint)((fRam0000000146b2ff78 - (fVar37 * fStack_274 + fVar33)) *
                             DAT_1464aa790) & uRam0000000146b2ff88);
      fVar33 = (float)((uint)((fRam0000000146b2ff7c - (fVar33 + fVar33)) * 0.0) &
                      uRam0000000146b2ff8c);
      fVar37 = (local_f8 + local_f8) * fStack_ec;
      fVar38 = (fVar42 * fStack_ec + fVar31 * local_f8) * local_d8;
      fVar39 = (fVar37 + fVar42 * fStack_f4) * fStack_d4;
      fVar41 = (fVar31 * fStack_ec + fVar42 * local_f8) * fStack_d0;
      fVar53 = fStack_d4 * (fVar31 * local_f8 - fVar42 * fStack_ec);
      fVar29 = fStack_d0 * (fVar42 * fStack_f4 - fVar37);
      fVar49 = local_d8 * (fVar42 * local_f8 - fVar31 * fStack_ec);
      fVar37 = (float)((uint)((_DAT_146b2ff70 - (fStack_f0 * fVar42 + fStack_f4 * fVar31)) *
                             local_d8) & _DAT_146b2ff80);
      fVar42 = (float)((uint)((fRam0000000146b2ff74 - (fStack_f0 * fVar42 + fVar30)) * fStack_d4) &
                      uRam0000000146b2ff84);
      fVar31 = (float)((uint)((fRam0000000146b2ff78 - (fStack_f4 * fVar31 + fVar30)) * fStack_d0) &
                      uRam0000000146b2ff88);
      fVar30 = (float)((uint)((fRam0000000146b2ff7c - (fVar30 + fVar30)) * fStack_cc) &
                      uRam0000000146b2ff8c);
      local_218 = fVar38 * fVar36 + fVar37 * fVar28 + fVar49 * fVar51 + fVar30 * fVar22;
      fStack_214 = fVar38 * fVar40 + fVar37 * fVar45 + fVar49 * fVar27 + fVar30 * fVar44;
      fStack_210 = fVar38 * fVar50 + fVar37 * fVar32 + fVar49 * fVar43 + fVar30 * fVar34;
      fStack_20c = fVar38 * fVar33 + fVar37 * fVar33 + fVar49 * fVar33 +
                   fVar30 * fRam0000000146b2ff7c;
      local_208 = fVar42 * fVar36 + fVar53 * fVar28 + fVar39 * fVar51 + fVar30 * fVar22;
      fStack_204 = fVar42 * fVar40 + fVar53 * fVar45 + fVar39 * fVar27 + fVar30 * fVar44;
      fStack_200 = fVar42 * fVar50 + fVar53 * fVar32 + fVar39 * fVar43 + fVar30 * fVar34;
      fStack_1fc = fVar42 * fVar33 + fVar53 * fVar33 + fVar39 * fVar33 +
                   fVar30 * fRam0000000146b2ff7c;
      local_1f8 = fVar29 * fVar36 + fVar41 * fVar28 + fVar31 * fVar51 + fVar30 * fVar22;
      fStack_1f4 = fVar29 * fVar40 + fVar41 * fVar45 + fVar31 * fVar27 + fVar30 * fVar44;
      fStack_1f0 = fVar29 * fVar50 + fVar41 * fVar32 + fVar31 * fVar43 + fVar30 * fVar34;
      fStack_1ec = fVar29 * fVar33 + fVar41 * fVar33 + fVar31 * fVar33 +
                   fVar30 * fRam0000000146b2ff7c;
      local_1e8 = (float)local_e8._4_4_ * fVar36 + (float)local_e8._0_4_ * fVar28 +
                  fStack_e0 * fVar51 + fRam0000000146b2ff7c * fVar22;
      fStack_1e4 = (float)local_e8._4_4_ * fVar40 + (float)local_e8._0_4_ * fVar45 +
                   fStack_e0 * fVar27 + fRam0000000146b2ff7c * fVar44;
      fStack_1e0 = (float)local_e8._4_4_ * fVar50 + (float)local_e8._0_4_ * fVar32 +
                   fStack_e0 * fVar43 + fRam0000000146b2ff7c * fVar34;
      fStack_1dc = (float)local_e8._4_4_ * fVar33 + (float)local_e8._0_4_ * fVar33 +
                   fStack_e0 * fVar33 + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      FMatrix::RemoveScaling(&local_218);
      fVar22 = (float)(-(uint)(_DAT_146b2ffd0 <= fVar52) & (_DAT_146b2ffc0 ^ (uint)fVar59) ^
                      _DAT_146b2ffc0);
      fVar44 = (float)(-(uint)(fRam0000000146b2ffd4 <= fVar54) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar23) ^ uRam0000000146b2ffc4);
      fVar34 = (float)(-(uint)(fRam0000000146b2ffd8 <= fVar55) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar35) ^ uRam0000000146b2ffc8);
      local_218 = local_218 * fVar22;
      fStack_214 = fStack_214 * fVar22;
      fStack_210 = fStack_210 * fVar22;
      fStack_204 = fStack_204 * fVar44;
      fStack_200 = fStack_200 * fVar44;
      local_208 = local_208 * fVar44;
      fStack_1f4 = fStack_1f4 * fVar34;
      fStack_1f0 = fStack_1f0 * fVar34;
      local_1f8 = local_1f8 * fVar34;
      FQuat::FQuat(&local_1d8,&local_218);
      local_288 = 1e-08;
      auVar26._0_4_ = local_1d8 * local_1d8 + fStack_1d0 * fStack_1d0;
      auVar26._4_4_ = fStack_1d4 * fStack_1d4 + fStack_1cc * fStack_1cc;
      auVar26._8_4_ = fStack_1d0 * fStack_1d0 + local_1d8 * local_1d8;
      auVar26._12_4_ = fStack_1cc * fStack_1cc + fStack_1d4 * fStack_1d4;
      fVar23 = auVar26._4_4_ + auVar26._0_4_;
      fVar35 = auVar26._8_4_ + auVar26._4_4_;
      fVar28 = auVar26._12_4_ + auVar26._8_4_;
      fVar37 = auVar26._0_4_ + auVar26._12_4_;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar23;
      auVar5._8_4_ = fVar28;
      auVar5._12_4_ = fVar37;
      auVar47 = rsqrtps(auVar26,auVar5);
      fVar22 = auVar47._0_4_;
      fVar44 = auVar47._4_4_;
      fVar34 = auVar47._8_4_;
      fVar59 = auVar47._12_4_;
      fVar22 = (_DAT_146b2ff60 - fVar22 * fVar22 * fVar23 * _DAT_146b2ff60) * fVar22 + fVar22;
      fVar44 = (fRam0000000146b2ff64 - fVar44 * fVar44 * fVar35 * fRam0000000146b2ff64) * fVar44 +
               fVar44;
      fVar34 = (fRam0000000146b2ff68 - fVar34 * fVar34 * fVar28 * fRam0000000146b2ff68) * fVar34 +
               fVar34;
      fVar59 = (fRam0000000146b2ff6c - fVar59 * fVar59 * fVar37 * fRam0000000146b2ff6c) * fVar59 +
               fVar59;
      local_188._4_4_ = fStack_1e4;
      local_188._0_4_ = local_1e8;
      fStack_180 = fStack_1e0;
      local_198 = (float)(((uint)(((_DAT_146b2ff60 - fVar22 * fVar22 * fVar23 * _DAT_146b2ff60) *
                                   fVar22 + fVar22) * local_1d8) ^ _DAT_146b2ff50) &
                          -(uint)(1e-08 <= fVar23) ^ _DAT_146b2ff50);
      fStack_194 = (float)(((uint)(((fRam0000000146b2ff64 -
                                    fVar44 * fVar44 * fVar35 * fRam0000000146b2ff64) * fVar44 +
                                   fVar44) * fStack_1d4) ^ uRam0000000146b2ff54) &
                           -(uint)(1e-08 <= fVar35) ^ uRam0000000146b2ff54);
      fStack_190 = (float)(((uint)(((fRam0000000146b2ff68 -
                                    fVar34 * fVar34 * fVar28 * fRam0000000146b2ff68) * fVar34 +
                                   fVar34) * fStack_1d0) ^ uRam0000000146b2ff58) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146b2ff58);
      fStack_18c = (float)(((uint)(((fRam0000000146b2ff6c -
                                    fVar59 * fVar59 * fVar37 * fRam0000000146b2ff6c) * fVar59 +
                                   fVar59) * fStack_1cc) ^ uRam0000000146b2ff5c) &
                           -(uint)(1e-08 <= fVar37) ^ uRam0000000146b2ff5c);
      fStack_17c = 0.0;
    }
    fStack_16c = fStack_cc * 0.0;
    fStack_170 = fStack_d0 * fStack_170;
    fStack_174 = fStack_d4 * fStack_174;
    local_178 = local_d8 * local_178;
    FUN_142c8f930(param_1);
    FUN_142c8f930(param_1);
    FUN_142c8f930(param_1);
    puVar16 = (undefined8 *)FUN_142c8c910(&local_278);
    iVar14 = *(int *)(param_1 + 0x2a8);
    *(int *)(param_1 + 0x2a8) = iVar14 + 1;
    if (*(int *)(param_1 + 0x2ac) < iVar14 + 1) {
      FUN_142caa0b0(param_1 + 0x100,iVar14);
    }
    uVar15 = puVar16[1];
    lVar17 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar17 = param_1 + 0x100;
    }
    lVar18 = (longlong)iVar14 * 0x34;
    *(undefined8 *)(lVar17 + lVar18) = *puVar16;
    ((undefined8 *)(lVar17 + lVar18))[1] = uVar15;
    uVar15 = puVar16[3];
    puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar18);
    *puVar1 = puVar16[2];
    puVar1[1] = uVar15;
    uVar15 = puVar16[5];
    puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar18);
    *puVar1 = puVar16[4];
    puVar1[1] = uVar15;
    *(undefined4 *)(lVar17 + 0x30 + lVar18) = *(undefined4 *)(puVar16 + 6);
    return;
  }
  local_298 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0xe0);
  local_294 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0xe4);
  local_290 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0xe8);
  fVar22 = local_294 * local_294 + local_298 * local_298;
  if (fVar22 == 1.0) {
    if (local_290 == 0.0) goto LAB_142c92384;
  }
  else {
    if (fVar22 < 1e-08) {
      local_298 = DAT_1468b5d90;
      local_290 = DAT_1468b5d98;
      local_294 = DAT_1468b5d94;
      goto LAB_142c92384;
    }
    auVar46._8_8_ = 0;
    auVar46._0_8_ = CONCAT44(0,fVar22);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,fVar22);
    auVar47 = rsqrtss(auVar46,auVar2);
    fVar44 = auVar47._0_4_;
    fVar44 = fVar44 + fVar44 * (0.5 - fVar22 * 0.5 * fVar44 * fVar44);
    fVar44 = fVar44 + fVar44 * (0.5 - fVar22 * 0.5 * fVar44 * fVar44);
    local_298 = local_298 * fVar44;
    local_294 = local_294 * fVar44;
  }
  local_290 = 0.0;
LAB_142c92384:
  uVar15 = FVector::Rotation(&local_298,&local_228);
  FRotator::Quaternion(uVar15,&local_1d8);
  fStack_1ac = 0.0;
  _local_1b8 = SUB1612(*(undefined1 (*) [16])(param_1 + 0xe0),0);
  local_1a8._4_4_ = DAT_1464aa788._4_4_;
  local_1a8._0_4_ = (float)DAT_1464aa788;
  fStack_1a0 = DAT_1464aa790;
  fStack_19c = 0.0;
  FUN_142c91790(param_1,param_2,&local_1c8);
  return;
}



// FUNCTION 142c936a0 FUN_142c936a0 body=3214 status=ok
// SIG undefined FUN_142c936a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c936a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar21;
  float fVar23;
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar20 [16];
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined8 uStack_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
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
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  fVar11 = (float)FAnimLinkableElement::GetTime(param_2,0);
  local_1b8 = fVar11;
  fVar12 = (float)FAnimNotifyEvent::GetDuration(param_2);
  FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_128,*(undefined4 *)(param_1 + 0xb0),fVar11);
  fVar30 = *(float *)(param_1 + 0xb4);
  local_118._4_4_ = (float)local_118._4_4_ * fVar30;
  local_118._0_4_ = (float)local_118._0_4_ * fVar30;
  fStack_110 = fStack_110 * fVar30;
  fStack_10c = 0.0;
  uVar5 = FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_f8,fVar12 + fVar11,0x7f7fffff);
  fVar22 = fRam0000000146b2ffd8;
  fVar18 = fRam0000000146b2ffd4;
  fVar51 = _DAT_146b2ffd0;
  fVar44 = fRam0000000146b2ff78;
  fVar43 = fRam0000000146b2ff74;
  fVar41 = _DAT_146b2ff70;
  fVar30 = *(float *)(param_1 + 0xb4);
  fVar11 = local_108._0_4_;
  fVar12 = local_108._4_4_;
  fVar35 = local_108._8_4_;
  auVar13 = *(undefined1 (*) [16])(param_1 + 0xf0);
  local_138 = auVar13._0_4_;
  fStack_134 = auVar13._4_4_;
  fStack_130 = auVar13._8_4_;
  fStack_12c = auVar13._12_4_;
  fVar28 = *(float *)(param_1 + 0xd0);
  fVar29 = *(float *)(param_1 + 0xd4);
  fVar21 = *(float *)(param_1 + 0xd8);
  fVar39 = *(float *)(param_1 + 0xdc);
  fVar26 = (float)local_e8._0_4_ * fVar30;
  fVar24 = (float)local_e8._4_4_ * fVar30;
  fVar30 = fStack_e0 * fVar30;
  auVar13 = minps(local_108,auVar13);
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146b2ffd4);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146b2ffd0);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146b2ffd8);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146b2ffdc);
  iVar6 = movmskps(uVar5,auVar14);
  fVar25 = 0.0;
  local_e8._4_4_ = fVar24;
  local_e8._0_4_ = fVar26;
  fStack_e0 = fVar30;
  fStack_dc = 0.0;
  local_1a8 = _DAT_146b2ffd0;
  fStack_1a4 = fRam0000000146b2ffd4;
  fStack_1a0 = fRam0000000146b2ffd8;
  fStack_19c = fRam0000000146b2ffdc;
  if (iVar6 == 0) {
    fVar18 = (float)local_118._0_4_ * local_138;
    fVar22 = (float)local_118._4_4_ * fStack_134;
    fVar27 = fStack_110 * fStack_130;
    fVar23 = fStack_10c * fStack_12c;
    local_158 = fVar28 * fStack_11c * _DAT_146b2ffb0 + fVar39 * local_128 +
                fVar29 * fStack_120 * _DAT_146b2ffa0 + fVar21 * fStack_124 * _DAT_146b2ff90;
    fStack_154 = fVar28 * fStack_120 * fRam0000000146b2ffb4 + fVar39 * fStack_124 +
                 fVar29 * fStack_11c * fRam0000000146b2ffa4 +
                 fVar21 * local_128 * fRam0000000146b2ff94;
    fStack_150 = fVar28 * fStack_124 * fRam0000000146b2ffb8 + fVar39 * fStack_120 +
                 fVar29 * local_128 * fRam0000000146b2ffa8 +
                 fVar21 * fStack_11c * fRam0000000146b2ff98;
    fStack_14c = fVar28 * local_128 * fRam0000000146b2ffbc + fVar39 * fStack_11c +
                 fVar29 * fStack_124 * fRam0000000146b2ffac +
                 fVar21 * fStack_120 * fRam0000000146b2ff9c;
    fVar41 = fVar27 * fVar29 - fVar22 * fVar21;
    fVar43 = fVar18 * fVar21 - fVar27 * fVar28;
    fVar44 = fVar22 * fVar28 - fVar18 * fVar29;
    fVar51 = fVar23 * fVar39 - fVar23 * fVar39;
    fVar41 = fVar41 + fVar41;
    fVar43 = fVar43 + fVar43;
    fVar44 = fVar44 + fVar44;
    fVar51 = fVar51 + fVar51;
    auVar13._0_4_ =
         (fVar44 * fVar29 - fVar43 * fVar21) + fVar39 * fVar41 + fVar18 + *(float *)(param_1 + 0xe0)
    ;
    auVar13._4_4_ =
         (fVar41 * fVar21 - fVar44 * fVar28) + fVar39 * fVar43 + fVar22 + *(float *)(param_1 + 0xe4)
    ;
    auVar13._8_4_ =
         (fVar43 * fVar28 - fVar41 * fVar29) + fVar39 * fVar44 + fVar27 + *(float *)(param_1 + 0xe8)
    ;
    auVar13._12_4_ =
         (fVar51 * fVar39 - fVar51 * fVar39) + fVar39 * fVar51 + fVar23 + *(float *)(param_1 + 0xec)
    ;
    uVar5 = 0;
    local_148 = auVar13;
  }
  else {
    fVar24 = fVar29 + fVar29;
    fVar25 = fVar21 + fVar21;
    fVar27 = (fVar28 + fVar28) * fVar28;
    fVar30 = (fVar28 + fVar28) * fVar39;
    fVar52 = (fVar25 * fVar39 + fVar24 * fVar28) * local_138;
    fVar54 = (fVar30 + fVar25 * fVar29) * fStack_134;
    fVar56 = (fVar24 * fVar39 + fVar25 * fVar28) * fStack_130;
    fVar31 = fStack_134 * (fVar24 * fVar28 - fVar25 * fVar39);
    fVar33 = fStack_130 * (fVar25 * fVar29 - fVar30);
    fVar34 = local_138 * (fVar25 * fVar28 - fVar24 * fVar39);
    fVar30 = *(float *)(param_1 + 0xe0);
    fVar28 = *(float *)(param_1 + 0xe4);
    fVar39 = *(float *)(param_1 + 0xe8);
    fVar26 = (float)((uint)((_DAT_146b2ff70 - (fVar25 * fVar21 + fVar24 * fVar29)) * local_138) &
                    _DAT_146b2ff80);
    fVar21 = (float)((uint)((fRam0000000146b2ff74 - (fVar25 * fVar21 + fVar27)) * fStack_134) &
                    uRam0000000146b2ff84);
    fVar25 = (float)((uint)((fRam0000000146b2ff78 - (fVar24 * fVar29 + fVar27)) * fStack_130) &
                    uRam0000000146b2ff88);
    fVar23 = (float)((uint)((fRam0000000146b2ff7c - (fVar27 + fVar27)) * fStack_12c) &
                    uRam0000000146b2ff8c);
    fVar27 = fStack_124 + fStack_124;
    fVar24 = fStack_120 + fStack_120;
    fVar32 = local_128 * (local_128 + local_128);
    fVar29 = (local_128 + local_128) * fStack_11c;
    fVar45 = (fVar24 * fStack_11c + fVar27 * local_128) * fVar11;
    fVar47 = (fVar29 + fVar24 * fStack_124) * fVar12;
    fVar49 = (fVar27 * fStack_11c + fVar24 * local_128) * fVar35;
    fVar38 = fVar12 * (fVar27 * local_128 - fVar24 * fStack_11c);
    fVar40 = fVar35 * (fVar24 * fStack_124 - fVar29);
    fVar42 = fVar11 * (fVar24 * local_128 - fVar27 * fStack_11c);
    fVar29 = (float)((uint)((_DAT_146b2ff70 - (fStack_120 * fVar24 + fStack_124 * fVar27)) * fVar11)
                    & _DAT_146b2ff80);
    fVar24 = (float)((uint)((fRam0000000146b2ff74 - (fStack_120 * fVar24 + fVar32)) * fVar12) &
                    uRam0000000146b2ff84);
    fVar27 = (float)((uint)((fRam0000000146b2ff78 - (fStack_124 * fVar27 + fVar32)) * fVar35) &
                    uRam0000000146b2ff88);
    fVar32 = (float)((uint)((fRam0000000146b2ff7c - (fVar32 + fVar32)) * local_108._12_4_) &
                    uRam0000000146b2ff8c);
    local_1f8 = fVar45 * fVar31 + fVar29 * fVar26 + fVar42 * fVar56 + fVar32 * fVar30;
    fStack_1f4 = fVar45 * fVar21 + fVar29 * fVar52 + fVar42 * fVar33 + fVar32 * fVar28;
    fStack_1f0 = fVar45 * fVar54 + fVar29 * fVar34 + fVar42 * fVar25 + fVar32 * fVar39;
    fStack_1ec = fVar45 * fVar23 + fVar29 * fVar23 + fVar42 * fVar23 + fVar32 * fRam0000000146b2ff7c
    ;
    auStack_1e4 = (undefined1  [4])
                  (fVar24 * fVar21 + fVar38 * fVar52 + fVar47 * fVar33 + fVar32 * fVar28);
    local_1e8 = (undefined1  [4])
                (fVar24 * fVar31 + fVar38 * fVar26 + fVar47 * fVar56 + fVar32 * fVar30);
    uStack_1e0._0_4_ = fVar24 * fVar54 + fVar38 * fVar34 + fVar47 * fVar25 + fVar32 * fVar39;
    uStack_1e0._4_4_ =
         fVar24 * fVar23 + fVar38 * fVar23 + fVar47 * fVar23 + fVar32 * fRam0000000146b2ff7c;
    local_1d8 = fVar40 * fVar31 + fVar49 * fVar26 + fVar27 * fVar56 + fVar32 * fVar30;
    fStack_1d4 = fVar40 * fVar21 + fVar49 * fVar52 + fVar27 * fVar33 + fVar32 * fVar28;
    fStack_1d0 = fVar40 * fVar54 + fVar49 * fVar34 + fVar27 * fVar25 + fVar32 * fVar39;
    fStack_1cc = fVar40 * fVar23 + fVar49 * fVar23 + fVar27 * fVar23 + fVar32 * fRam0000000146b2ff7c
    ;
    local_1c8 = (float)local_118._4_4_ * fVar31 + (float)local_118._0_4_ * fVar26 +
                fStack_110 * fVar56 + fRam0000000146b2ff7c * fVar30;
    fStack_1c4 = (float)local_118._4_4_ * fVar21 + (float)local_118._0_4_ * fVar52 +
                 fStack_110 * fVar33 + fRam0000000146b2ff7c * fVar28;
    fStack_1c0 = (float)local_118._4_4_ * fVar54 + (float)local_118._0_4_ * fVar34 +
                 fStack_110 * fVar25 + fRam0000000146b2ff7c * fVar39;
    fStack_1bc = (float)local_118._4_4_ * fVar23 + (float)local_118._0_4_ * fVar23 +
                 fStack_110 * fVar23 + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
    FMatrix::RemoveScaling(&local_1f8);
    fVar30 = (float)(-(uint)(fVar51 <= local_138 * fVar11) & (_DAT_146b2ffc0 ^ (uint)fVar41) ^
                    _DAT_146b2ffc0);
    fVar29 = (float)(-(uint)(fVar18 <= fStack_134 * fVar12) & (uRam0000000146b2ffc4 ^ (uint)fVar43)
                    ^ uRam0000000146b2ffc4);
    fVar21 = (float)(-(uint)(fVar22 <= fStack_130 * fVar35) & (uRam0000000146b2ffc8 ^ (uint)fVar44)
                    ^ uRam0000000146b2ffc8);
    local_1f8 = local_1f8 * fVar30;
    fStack_1f4 = fStack_1f4 * fVar30;
    fStack_1f0 = fStack_1f0 * fVar30;
    fVar30 = (float)auStack_1e4 * fVar29;
    fVar28 = (float)local_1e8 * fVar29;
    uStack_1e0._0_4_ = (float)uStack_1e0 * fVar29;
    auStack_1e4 = (undefined1  [4])fVar30;
    fStack_1d0 = fStack_1d0 * fVar21;
    local_1d8 = local_1d8 * fVar21;
    fStack_1d4 = fStack_1d4 * fVar21;
    local_1e8 = (undefined1  [4])fVar28;
    uVar5 = FQuat::FQuat(&local_1a8);
    local_208 = 0x322bcc77;
    auVar19._0_4_ = local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0;
    auVar19._4_4_ = fStack_1a4 * fStack_1a4 + fStack_19c * fStack_19c;
    auVar19._8_4_ = fStack_1a0 * fStack_1a0 + local_1a8 * local_1a8;
    auVar19._12_4_ = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4;
    fVar39 = auVar19._4_4_ + auVar19._0_4_;
    fVar41 = auVar19._8_4_ + auVar19._4_4_;
    fVar43 = auVar19._12_4_ + auVar19._8_4_;
    fVar44 = auVar19._0_4_ + auVar19._12_4_;
    auVar3._4_4_ = fVar41;
    auVar3._0_4_ = fVar39;
    auVar3._8_4_ = fVar43;
    auVar3._12_4_ = fVar44;
    auVar13 = rsqrtps(auVar19,auVar3);
    fVar30 = auVar13._0_4_;
    fVar28 = auVar13._4_4_;
    fVar29 = auVar13._8_4_;
    fVar21 = auVar13._12_4_;
    fVar30 = (_DAT_146b2ff60 - fVar30 * fVar30 * fVar39 * _DAT_146b2ff60) * fVar30 + fVar30;
    fVar28 = (fRam0000000146b2ff64 - fVar28 * fVar28 * fVar41 * fRam0000000146b2ff64) * fVar28 +
             fVar28;
    fVar29 = (fRam0000000146b2ff68 - fVar29 * fVar29 * fVar43 * fRam0000000146b2ff68) * fVar29 +
             fVar29;
    fVar21 = (fRam0000000146b2ff6c - fVar21 * fVar21 * fVar44 * fRam0000000146b2ff6c) * fVar21 +
             fVar21;
    auVar13 = ZEXT816(0);
    local_148._4_4_ = fStack_1c4;
    local_148._0_4_ = local_1c8;
    local_148._8_4_ = fStack_1c0;
    local_158 = (float)(((uint)(((_DAT_146b2ff60 - fVar30 * fVar30 * fVar39 * _DAT_146b2ff60) *
                                 fVar30 + fVar30) * local_1a8) ^ _DAT_146b2ff50) &
                        -(uint)(1e-08 <= fVar39) ^ _DAT_146b2ff50);
    fStack_154 = (float)(((uint)(((fRam0000000146b2ff64 -
                                  fVar28 * fVar28 * fVar41 * fRam0000000146b2ff64) * fVar28 + fVar28
                                 ) * fStack_1a4) ^ uRam0000000146b2ff54) & -(uint)(1e-08 <= fVar41)
                        ^ uRam0000000146b2ff54);
    fStack_150 = (float)(((uint)(((fRam0000000146b2ff68 -
                                  fVar29 * fVar29 * fVar43 * fRam0000000146b2ff68) * fVar29 + fVar29
                                 ) * fStack_1a0) ^ uRam0000000146b2ff58) & -(uint)(1e-08 <= fVar43)
                        ^ uRam0000000146b2ff58);
    fStack_14c = (float)(((uint)(((fRam0000000146b2ff6c -
                                  fVar21 * fVar21 * fVar44 * fRam0000000146b2ff6c) * fVar21 + fVar21
                                 ) * fStack_19c) ^ uRam0000000146b2ff5c) & -(uint)(1e-08 <= fVar44)
                        ^ uRam0000000146b2ff5c);
    local_148._12_4_ = 0;
    fVar26 = (float)local_e8._0_4_;
    fVar24 = (float)local_e8._4_4_;
    fVar30 = fStack_e0;
    fVar25 = fStack_dc;
  }
  fVar39 = fRam0000000146b2ff78;
  fVar21 = fRam0000000146b2ff74;
  fVar29 = _DAT_146b2ff70;
  fStack_12c = fStack_12c * local_108._12_4_;
  fStack_130 = fStack_130 * fVar35;
  fStack_134 = fStack_134 * fVar12;
  local_138 = local_138 * fVar11;
  fVar11 = local_d8._0_4_;
  fVar12 = local_d8._4_4_;
  fVar35 = local_d8._8_4_;
  fVar28 = local_d8._12_4_;
  auVar15._4_4_ = -(uint)(fRam0000000146b30054 < (float)((uint)fVar12 & uRam0000000146b30014));
  auVar15._0_4_ = -(uint)(_DAT_146b30050 < (float)((uint)fVar11 & _DAT_146b30010));
  auVar15._8_4_ = -(uint)(fRam0000000146b30058 < (float)((uint)fVar35 & uRam0000000146b30018));
  auVar15._12_4_ = -(uint)(fRam0000000146b3005c < (float)((uint)fVar28 & uRam0000000146b3001c));
  iVar6 = movmskps(uVar5,auVar15);
  fVar41 = _DAT_1468b5b70;
  fVar43 = fRam00000001468b5b74;
  fVar44 = fRam00000001468b5b78;
  fVar51 = fRam00000001468b5b7c;
  fVar18 = _DAT_1468b5b90;
  fVar22 = fRam00000001468b5b94;
  fVar27 = fRam00000001468b5b98;
  fVar23 = fRam00000001468b5b9c;
  fVar32 = _DAT_1468b5b80;
  fVar31 = fRam00000001468b5b84;
  fVar33 = fRam00000001468b5b88;
  fVar34 = fRam00000001468b5b8c;
  if (iVar6 != 0) {
    fVar41 = local_f8 * _DAT_146b30060;
    fVar43 = fStack_f4 * fRam0000000146b30064;
    fVar44 = fStack_f0 * fRam0000000146b30068;
    fVar51 = fStack_ec * fRam0000000146b3006c;
    auVar13 = rcpps(auVar13,local_d8);
    fVar18 = auVar13._0_4_;
    fVar22 = auVar13._4_4_;
    fVar27 = auVar13._8_4_;
    fVar23 = auVar13._12_4_;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar11;
    fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar12;
    fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar35;
    fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar28;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar11;
    fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar12;
    fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar35;
    fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar28;
    fVar18 = (float)((-(uint)((float)((uint)fVar11 & _DAT_146b30010) <= _DAT_146b30050) &
                      (uint)fVar18 ^ (uint)fVar18) & _DAT_146b2ff80);
    fVar22 = (float)((-(uint)((float)((uint)fVar12 & uRam0000000146b30014) <= fRam0000000146b30054)
                      & (uint)fVar22 ^ (uint)fVar22) & uRam0000000146b2ff84);
    fVar27 = (float)((-(uint)((float)((uint)fVar35 & uRam0000000146b30018) <= fRam0000000146b30058)
                      & (uint)fVar27 ^ (uint)fVar27) & uRam0000000146b2ff88);
    fVar23 = (float)((-(uint)((float)((uint)fVar28 & uRam0000000146b3001c) <= fRam0000000146b3005c)
                      & (uint)fVar23 ^ (uint)fVar23) & uRam0000000146b2ff8c);
    fVar26 = fVar18 * fVar26;
    fVar24 = fVar22 * fVar24;
    fVar30 = fVar27 * fVar30;
    fVar25 = fVar23 * fVar25;
    fVar11 = fVar30 * fVar43 - fVar24 * fVar44;
    fVar12 = fVar26 * fVar44 - fVar30 * fVar41;
    fVar35 = fVar24 * fVar41 - fVar26 * fVar43;
    fVar28 = fVar25 * fVar51 - fVar25 * fVar51;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar35 = fVar35 + fVar35;
    fVar28 = fVar28 + fVar28;
    fVar32 = (float)((uint)(0.0 - ((fVar35 * fVar43 - fVar12 * fVar44) + fVar51 * fVar11 + fVar26))
                    & _DAT_146b2ff80);
    fVar31 = (float)((uint)(0.0 - ((fVar11 * fVar44 - fVar35 * fVar41) + fVar51 * fVar12 + fVar24))
                    & uRam0000000146b2ff84);
    fVar33 = (float)((uint)(0.0 - ((fVar12 * fVar41 - fVar11 * fVar43) + fVar51 * fVar35 + fVar30))
                    & uRam0000000146b2ff88);
    fVar34 = (float)((uint)(0.0 - ((fVar28 * fVar51 - fVar28 * fVar51) + fVar51 * fVar28 + fVar25))
                    & uRam0000000146b2ff8c);
  }
  auVar13 = *(undefined1 (*) [16])(param_1 + 0x30);
  fVar30 = auVar13._0_4_;
  fVar11 = auVar13._4_4_;
  fVar12 = auVar13._8_4_;
  fVar35 = auVar13._12_4_;
  auVar16._4_4_ = fVar22;
  auVar16._0_4_ = fVar18;
  auVar16._8_4_ = fVar27;
  auVar16._12_4_ = fVar23;
  fVar28 = *(float *)(param_1 + 0x10);
  fVar26 = *(float *)(param_1 + 0x14);
  fVar24 = *(float *)(param_1 + 0x18);
  fVar25 = *(float *)(param_1 + 0x1c);
  auVar13 = minps(auVar16,auVar13);
  auVar17._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146b2ffd4);
  auVar17._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146b2ffd0);
  auVar17._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146b2ffd8);
  auVar17._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146b2ffdc);
  iVar6 = movmskps(iVar6,auVar17);
  local_1a8 = _DAT_146b2ffd0;
  fStack_1a4 = fRam0000000146b2ffd4;
  fStack_1a0 = fRam0000000146b2ffd8;
  fStack_19c = fRam0000000146b2ffdc;
  if (iVar6 == 0) {
    fVar32 = fVar30 * fVar32;
    fVar31 = fVar11 * fVar31;
    fVar33 = fVar12 * fVar33;
    fVar34 = fVar35 * fVar34;
    local_1f8 = fVar28 * fVar51 * _DAT_146b2ffb0 + fVar41 * fVar25 +
                fVar26 * fVar44 * _DAT_146b2ffa0 + fVar24 * fVar43 * _DAT_146b2ff90;
    fStack_1f4 = fVar28 * fVar44 * fRam0000000146b2ffb4 + fVar43 * fVar25 +
                 fVar26 * fVar51 * fRam0000000146b2ffa4 + fVar24 * fVar41 * fRam0000000146b2ff94;
    fStack_1f0 = fVar28 * fVar43 * fRam0000000146b2ffb8 + fVar44 * fVar25 +
                 fVar26 * fVar41 * fRam0000000146b2ffa8 + fVar24 * fVar51 * fRam0000000146b2ff98;
    fStack_1ec = fVar28 * fVar41 * fRam0000000146b2ffbc + fVar51 * fVar25 +
                 fVar26 * fVar43 * fRam0000000146b2ffac + fVar24 * fVar44 * fRam0000000146b2ff9c;
    fVar29 = fVar33 * fVar26 - fVar31 * fVar24;
    fVar21 = fVar32 * fVar24 - fVar33 * fVar28;
    fVar39 = fVar31 * fVar28 - fVar32 * fVar26;
    fVar41 = fVar34 * fVar25 - fVar34 * fVar25;
    fVar29 = fVar29 + fVar29;
    fVar21 = fVar21 + fVar21;
    fVar39 = fVar39 + fVar39;
    fVar41 = fVar41 + fVar41;
    auStack_1e4 = (undefined1  [4])
                  ((fVar29 * fVar24 - fVar39 * fVar28) + fVar21 * fVar25 + fVar31 +
                  *(float *)(param_1 + 0x24));
    local_1e8 = (undefined1  [4])
                ((fVar39 * fVar26 - fVar21 * fVar24) + fVar29 * fVar25 + fVar32 +
                *(float *)(param_1 + 0x20));
    uStack_1e0._0_4_ =
         (fVar21 * fVar28 - fVar29 * fVar26) + fVar39 * fVar25 + fVar33 + *(float *)(param_1 + 0x28)
    ;
    uStack_1e0._4_4_ =
         (fVar41 * fVar25 - fVar41 * fVar25) + fVar41 * fVar25 + fVar34 + *(float *)(param_1 + 0x2c)
    ;
  }
  else {
    fVar40 = fVar26 + fVar26;
    fVar42 = fVar24 + fVar24;
    fVar49 = fVar28 * (fVar28 + fVar28);
    fVar34 = fVar25 * (fVar28 + fVar28);
    fVar53 = (fVar25 * fVar42 + fVar28 * fVar40) * fVar30;
    fVar55 = (fVar34 + fVar26 * fVar42) * fVar11;
    fVar57 = (fVar25 * fVar40 + fVar28 * fVar42) * fVar12;
    fVar52 = fVar11 * (fVar28 * fVar40 - fVar25 * fVar42);
    fVar56 = fVar12 * (fVar26 * fVar42 - fVar34);
    fVar36 = fVar30 * (fVar28 * fVar42 - fVar25 * fVar40);
    fVar45 = fVar43 + fVar43;
    fVar47 = fVar44 + fVar44;
    fVar28 = *(float *)(param_1 + 0x20);
    fVar25 = *(float *)(param_1 + 0x24);
    fVar34 = *(float *)(param_1 + 0x28);
    fVar38 = (float)((uint)((_DAT_146b2ff70 - (fVar24 * fVar42 + fVar26 * fVar40)) * fVar30) &
                    _DAT_146b2ff80);
    fVar24 = (float)((uint)((fRam0000000146b2ff74 - (fVar24 * fVar42 + fVar49)) * fVar11) &
                    uRam0000000146b2ff84);
    fVar26 = (float)((uint)((fRam0000000146b2ff78 - (fVar26 * fVar40 + fVar49)) * fVar12) &
                    uRam0000000146b2ff88);
    fVar40 = (float)((uint)((fRam0000000146b2ff7c - (fVar49 + fVar49)) * fVar35) &
                    uRam0000000146b2ff8c);
    fVar49 = fVar41 * (fVar41 + fVar41);
    fVar42 = (fVar41 + fVar41) * fVar51;
    fVar46 = (fVar47 * fVar51 + fVar45 * fVar41) * fVar18;
    fVar48 = (fVar42 + fVar47 * fVar43) * fVar22;
    fVar50 = (fVar45 * fVar51 + fVar47 * fVar41) * fVar27;
    fVar54 = fVar22 * (fVar45 * fVar41 - fVar47 * fVar51);
    fVar42 = fVar27 * (fVar47 * fVar43 - fVar42);
    fVar37 = fVar18 * (fVar47 * fVar41 - fVar45 * fVar51);
    fVar41 = (float)((uint)((_DAT_146b2ff70 - (fVar44 * fVar47 + fVar43 * fVar45)) * fVar18) &
                    _DAT_146b2ff80);
    fVar44 = (float)((uint)((fRam0000000146b2ff74 - (fVar44 * fVar47 + fVar49)) * fVar22) &
                    uRam0000000146b2ff84);
    fVar43 = (float)((uint)((fRam0000000146b2ff78 - (fVar43 * fVar45 + fVar49)) * fVar27) &
                    uRam0000000146b2ff88);
    fVar51 = (float)((uint)((fRam0000000146b2ff7c - (fVar49 + fVar49)) * fVar23) &
                    uRam0000000146b2ff8c);
    local_198 = fVar46 * fVar52 + fVar41 * fVar38 + fVar37 * fVar57 + fVar51 * fVar28;
    fStack_194 = fVar46 * fVar24 + fVar41 * fVar53 + fVar37 * fVar56 + fVar51 * fVar25;
    fStack_190 = fVar46 * fVar55 + fVar41 * fVar36 + fVar37 * fVar26 + fVar51 * fVar34;
    fStack_18c = fVar46 * fVar40 + fVar41 * fVar40 + fVar37 * fVar40 + fVar51 * fRam0000000146b2ff7c
    ;
    local_188 = fVar44 * fVar52 + fVar54 * fVar38 + fVar48 * fVar57 + fVar51 * fVar28;
    fStack_184 = fVar44 * fVar24 + fVar54 * fVar53 + fVar48 * fVar56 + fVar51 * fVar25;
    fStack_180 = fVar44 * fVar55 + fVar54 * fVar36 + fVar48 * fVar26 + fVar51 * fVar34;
    fStack_17c = fVar44 * fVar40 + fVar54 * fVar40 + fVar48 * fVar40 + fVar51 * fRam0000000146b2ff7c
    ;
    local_178 = fVar42 * fVar52 + fVar50 * fVar38 + fVar43 * fVar57 + fVar51 * fVar28;
    fStack_174 = fVar42 * fVar24 + fVar50 * fVar53 + fVar43 * fVar56 + fVar51 * fVar25;
    fStack_170 = fVar42 * fVar55 + fVar50 * fVar36 + fVar43 * fVar26 + fVar51 * fVar34;
    fStack_16c = fVar42 * fVar40 + fVar50 * fVar40 + fVar43 * fVar40 + fVar51 * fRam0000000146b2ff7c
    ;
    local_168 = fVar31 * fVar52 + fVar32 * fVar38 + fVar33 * fVar57 + fRam0000000146b2ff7c * fVar28;
    fStack_164 = fVar31 * fVar24 + fVar32 * fVar53 + fVar33 * fVar56 + fRam0000000146b2ff7c * fVar25
    ;
    fStack_160 = fVar31 * fVar55 + fVar32 * fVar36 + fVar33 * fVar26 + fRam0000000146b2ff7c * fVar34
    ;
    fStack_15c = fVar31 * fVar40 + fVar32 * fVar40 + fVar33 * fVar40 +
                 fRam0000000146b2ff7c * fRam0000000146b2ff7c;
    FMatrix::RemoveScaling(&local_198);
    fVar28 = (float)((_DAT_146b2ffc0 ^ (uint)fVar29) & -(uint)(local_1a8 <= fVar30 * fVar18) ^
                    _DAT_146b2ffc0);
    fVar29 = (float)((uRam0000000146b2ffc4 ^ (uint)fVar21) & -(uint)(fStack_1a4 <= fVar11 * fVar22)
                    ^ uRam0000000146b2ffc4);
    fVar21 = (float)((uRam0000000146b2ffc8 ^ (uint)fVar39) & -(uint)(fStack_1a0 <= fVar12 * fVar27)
                    ^ uRam0000000146b2ffc8);
    local_198 = local_198 * fVar28;
    fStack_194 = fStack_194 * fVar28;
    fStack_190 = fStack_190 * fVar28;
    fStack_184 = fStack_184 * fVar29;
    fStack_180 = fStack_180 * fVar29;
    local_188 = local_188 * fVar29;
    fStack_174 = fStack_174 * fVar21;
    fStack_170 = fStack_170 * fVar21;
    local_178 = local_178 * fVar21;
    FQuat::FQuat(&local_1a8);
    local_208 = 0x322bcc77;
    auVar20._0_4_ = local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0;
    auVar20._4_4_ = fStack_1a4 * fStack_1a4 + fStack_19c * fStack_19c;
    auVar20._8_4_ = fStack_1a0 * fStack_1a0 + local_1a8 * local_1a8;
    auVar20._12_4_ = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4;
    fVar41 = auVar20._4_4_ + auVar20._0_4_;
    fVar43 = auVar20._8_4_ + auVar20._4_4_;
    fVar44 = auVar20._12_4_ + auVar20._8_4_;
    fVar51 = auVar20._0_4_ + auVar20._12_4_;
    auVar2._4_4_ = fVar43;
    auVar2._0_4_ = fVar41;
    auVar2._8_4_ = fVar44;
    auVar2._12_4_ = fVar51;
    auVar13 = rsqrtps(auVar20,auVar2);
    fVar28 = auVar13._0_4_;
    fVar29 = auVar13._4_4_;
    fVar21 = auVar13._8_4_;
    fVar39 = auVar13._12_4_;
    fVar28 = (_DAT_146b2ff60 - fVar28 * fVar28 * fVar41 * _DAT_146b2ff60) * fVar28 + fVar28;
    fVar29 = (fRam0000000146b2ff64 - fVar29 * fVar29 * fVar43 * fRam0000000146b2ff64) * fVar29 +
             fVar29;
    fVar21 = (fRam0000000146b2ff68 - fVar21 * fVar21 * fVar44 * fRam0000000146b2ff68) * fVar21 +
             fVar21;
    fVar39 = (fRam0000000146b2ff6c - fVar39 * fVar39 * fVar51 * fRam0000000146b2ff6c) * fVar39 +
             fVar39;
    auStack_1e4 = (undefined1  [4])fStack_164;
    local_1e8 = (undefined1  [4])local_168;
    uStack_1e0._0_4_ = fStack_160;
    local_1f8 = (float)(((uint)(((_DAT_146b2ff60 - fVar28 * fVar28 * fVar41 * _DAT_146b2ff60) *
                                 fVar28 + fVar28) * local_1a8) ^ _DAT_146b2ff50) &
                        -(uint)(1e-08 <= fVar41) ^ _DAT_146b2ff50);
    fStack_1f4 = (float)(((uint)(((fRam0000000146b2ff64 -
                                  fVar29 * fVar29 * fVar43 * fRam0000000146b2ff64) * fVar29 + fVar29
                                 ) * fStack_1a4) ^ uRam0000000146b2ff54) & -(uint)(1e-08 <= fVar43)
                        ^ uRam0000000146b2ff54);
    fStack_1f0 = (float)(((uint)(((fRam0000000146b2ff68 -
                                  fVar21 * fVar21 * fVar44 * fRam0000000146b2ff68) * fVar21 + fVar21
                                 ) * fStack_1a0) ^ uRam0000000146b2ff58) & -(uint)(1e-08 <= fVar44)
                        ^ uRam0000000146b2ff58);
    fStack_1ec = (float)(((uint)(((fRam0000000146b2ff6c -
                                  fVar39 * fVar39 * fVar51 * fRam0000000146b2ff6c) * fVar39 + fVar39
                                 ) * fStack_19c) ^ uRam0000000146b2ff5c) & -(uint)(1e-08 <= fVar51)
                        ^ uRam0000000146b2ff5c);
    uStack_1e0._4_4_ = 0;
  }
  fStack_1cc = fVar35 * fVar23;
  fStack_1d0 = fVar12 * fVar27;
  fStack_1d4 = fVar11 * fVar22;
  local_1d8 = fVar30 * fVar18;
  FUN_142c8f930(param_1);
  FUN_142c8f930(param_1);
  FUN_142c8f930(param_1);
  puVar7 = (undefined8 *)FUN_142c8c910(&local_1f8);
  iVar6 = *(int *)(param_1 + 0x2a8);
  iVar8 = iVar6 + 1;
  *(int *)(param_1 + 0x2a8) = iVar8;
  if (*(int *)(param_1 + 0x2ac) < iVar8) {
    FUN_142caa0b0(param_1 + 0x100);
  }
  uVar4 = puVar7[1];
  lVar10 = *(longlong *)(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    lVar10 = param_1 + 0x100;
  }
  lVar9 = (longlong)iVar6 * 0x34;
  *(undefined8 *)(lVar10 + lVar9) = *puVar7;
  ((undefined8 *)(lVar10 + lVar9))[1] = uVar4;
  uVar4 = puVar7[3];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar9);
  *puVar1 = puVar7[2];
  puVar1[1] = uVar4;
  uVar4 = puVar7[5];
  puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar9);
  *puVar1 = puVar7[4];
  puVar1[1] = uVar4;
  *(undefined4 *)(lVar10 + 0x30 + lVar9) = *(undefined4 *)(puVar7 + 6);
  return;
}



// FUNCTION 142c94330 FUN_142c94330 body=348 status=ok
// SIG undefined FUN_142c94330(void)

void FUN_142c94330(longlong *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *local_18;
  undefined8 local_10;
  
  if (param_1[7] != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b30da4) &&
       (_Init_thread_header(&DAT_146b30da4), DAT_146b30da4 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad020,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (DAT_1466ad020,0x18,"UGbxAnimTable::Autofill",0x18,0x3f);
      atexit((_func_5014 *)&LAB_143ebfe20);
      _Init_thread_footer(&DAT_146b30da4);
    }
    uVar3 = 0;
    local_18 = (undefined8 *)0x0;
    puVar2 = &DAT_143f3eda8;
    if (DAT_1466ad028 != 0) {
      puVar2 = DAT_1466ad020;
    }
    local_10 = 0;
    FUN_142c8a6d0(param_1[7],puVar2,&local_18);
    puVar1 = local_18;
    uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar4 = uVar3;
    }
    puVar5 = local_18;
    if (uVar4 != 0) {
      do {
        (**(code **)(*param_1 + 0x2a0))(param_1,*puVar5);
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != uVar4);
    }
    if (puVar1 != (undefined8 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  return;
}



// FUNCTION 142c94490 FUN_142c94490 body=108 status=ok
// SIG undefined FUN_142c94490(void)

void FUN_142c94490(longlong param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [4];
  
  FUN_1423a4fd0();
  if (*(int *)(param_1 + 0xff0) != 0) {
    lVar1 = UInputDeviceManager::GetInstance();
    if (lVar1 != 0) {
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                (lVar1 + 0x28,0);
      lVar1 = UInputDeviceManager::GetInstance();
      QueryPerformanceCounter(local_res8);
      *(double *)(lVar1 + 0x78) =
           ((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
    }
  }
  return;
}



// FUNCTION 142c94500 FUN_142c94500 body=197 status=ok
// SIG undefined FUN_142c94500(void)

void FUN_142c94500(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1423a51c0();
  iVar2 = FUN_14233f450(param_1);
  if (((iVar2 == 3) && (param_1[0x1e7] != 0)) && (0 < (int)param_1[0x1e9])) {
    FUN_142d57d90(param_1[0x1e7],param_1 + 0x1ea,param_1 + 0x1e8);
  }
  cVar1 = (**(code **)(*param_1 + 0x318))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x308))(param_1);
  }
  FUN_1427e3320(param_1);
  if (param_1[0x149] != 0) {
    FUN_142c97660(param_1);
    (**(code **)(*(longlong *)param_1[0x149] + 0x328))((longlong *)param_1[0x149],0);
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x1e5);
  if (lVar3 != 0) {
    FUN_1423be6d0(param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x000142c945b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x960))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142c945d0 FUN_142c945d0 body=1210 status=ok
// SIG undefined FUN_142c945d0(void)

void FUN_142c945d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10;
  int local_res18 [2];
  int local_res20 [2];
  int *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (lVar10 == 0) {
LAB_142c94622:
    lVar10 = 0;
  }
  else {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142c94622;
  }
  lVar2 = *(longlong *)(param_1 + 0xa48);
  if (lVar2 != 0) {
    local_a0 = lVar2;
    lVar3 = AGGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c94674;
  }
  lVar2 = 0;
  local_a0 = 0;
LAB_142c94674:
  if ((lVar10 != 0) &&
     (plVar4 = (longlong *)FUN_142268ae0(*(undefined8 *)(lVar2 + 0x10)), plVar4 != (longlong *)0x0))
  {
    local_90 = plVar4;
    local_88 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
    local_res10 = 0;
    if (0 < (int)local_88[1]) {
      local_98 = 0;
      do {
        iVar9 = local_res10;
        lVar3 = *(longlong *)(local_98 + *local_88);
        if ((((lVar3 != 0) && (lVar5 = FUN_1428f58f0(), *(longlong *)(lVar3 + 0x70) == lVar5)) &&
            (lVar3 = *(int *)(lVar3 + 0x44) + lVar2, lVar3 != 0)) &&
           ((lVar5 = FUN_1422699d0(lVar2,plVar4,lVar3), lVar5 != 0 &&
            (local_res8[0] = 0, 0 < *(int *)(lVar5 + 0x18))))) {
          do {
            lVar2 = (longlong)local_res8[0] * 0x58 + *(longlong *)(lVar5 + 0x10);
            if (*(longlong *)(lVar2 + 0x50) != 0) {
              plVar4 = (longlong *)(lVar3 + 0xe8);
              if (*(int *)(lVar3 + 0xf0) != *(int *)(lVar3 + 0x11c)) {
                lVar8 = *(longlong *)(lVar3 + 0x128);
                if (*(longlong *)(lVar3 + 0x128) == 0) {
                  lVar8 = lVar3 + 0x120;
                }
                iVar9 = *(int *)(lVar8 + ((longlong)*(int *)(lVar3 + 0x130) - 1U &
                                         (longlong)local_res8[0]) * 4);
                if (iVar9 != -1) {
                  do {
                    lVar8 = *plVar4 + (longlong)iVar9 * 0x28;
                    if (*(int *)(*plVar4 + (longlong)iVar9 * 0x28) == local_res8[0]) {
                      if ((iVar9 != -1) && (lVar8 != 0)) goto LAB_142c9480d;
                      break;
                    }
                    iVar9 = *(int *)(lVar8 + 0x20);
                  } while (iVar9 != -1);
                }
              }
              local_a8 = local_res8;
              FUN_142c88c90(plVar4,local_res18,&local_a8,0);
              lVar8 = *plVar4 + (longlong)local_res18[0] * 0x28;
LAB_142c9480d:
              lVar2 = *(longlong *)(lVar2 + 0x50);
              plVar4 = (longlong *)(lVar8 + 8);
              local_80 = FUN_142cc86a0;
              uStack_78 = 0;
              plVar6 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar6 != (longlong *)0x0) {
                *plVar6 = (longlong)&PTR_FUN_145848cc8;
                FWeakObjectPtr::operator=(plVar6 + 1,lVar10);
                *(undefined4 *)(plVar6 + 2) = (undefined4)local_80;
                *(undefined4 *)((longlong)plVar6 + 0x14) = local_80._4_4_;
                *(undefined4 *)(plVar6 + 3) = uStack_78;
                *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_74;
                plVar6[4] = lVar2;
                lVar2 = FDelegateHandle::GenerateNewID();
                plVar6[5] = lVar2;
                *plVar6 = (longlong)&PTR_FUN_145848d10;
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
                (**(code **)(*plVar6 + 0x20))(plVar6,local_60);
                iVar9 = *(int *)(lVar8 + 0x10);
                *(int *)(lVar8 + 0x10) = iVar9 + 1;
                if (*(int *)(lVar8 + 0x14) < iVar9 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar9);
                }
                puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar4);
                *puVar7 = plVar6;
                *(undefined4 *)(puVar7 + 1) = 3;
              }
              plVar4 = (longlong *)(lVar3 + 0x138);
              if (*(int *)(lVar3 + 0x140) != *(int *)(lVar3 + 0x16c)) {
                lVar2 = *(longlong *)(lVar3 + 0x178);
                if (*(longlong *)(lVar3 + 0x178) == 0) {
                  lVar2 = lVar3 + 0x170;
                }
                iVar9 = *(int *)(lVar2 + ((longlong)*(int *)(lVar3 + 0x180) - 1U &
                                         (longlong)local_res8[0]) * 4);
                if (iVar9 != -1) {
                  do {
                    lVar2 = *plVar4 + (longlong)iVar9 * 0x28;
                    if (*(int *)(*plVar4 + (longlong)iVar9 * 0x28) == local_res8[0]) {
                      if ((iVar9 != -1) && (lVar2 != 0)) goto LAB_142c9495d;
                      break;
                    }
                    iVar9 = *(int *)(lVar2 + 0x20);
                  } while (iVar9 != -1);
                }
              }
              local_a8 = local_res8;
              FUN_142c88c90(plVar4,local_res20,&local_a8,0);
              lVar2 = *plVar4 + (longlong)local_res20[0] * 0x28;
LAB_142c9495d:
              local_70 = FUN_142cc8670;
              plVar4 = (longlong *)(lVar2 + 8);
              uStack_68 = 0;
              plVar6 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar6 != (longlong *)0x0) {
                *plVar6 = (longlong)&PTR_FUN_144318830;
                FWeakObjectPtr::operator=(plVar6 + 1,lVar10);
                *(undefined4 *)(plVar6 + 2) = (undefined4)local_70;
                *(undefined4 *)((longlong)plVar6 + 0x14) = local_70._4_4_;
                *(undefined4 *)(plVar6 + 3) = uStack_68;
                *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_64;
                lVar8 = FDelegateHandle::GenerateNewID();
                plVar6[5] = lVar8;
                *plVar6 = (longlong)&PTR_FUN_144318878;
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
                (**(code **)(*plVar6 + 0x20))(plVar6,local_58);
                iVar9 = *(int *)(lVar2 + 0x10);
                *(int *)(lVar2 + 0x10) = iVar9 + 1;
                if (*(int *)(lVar2 + 0x14) < iVar9 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar9);
                }
                puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar4);
                *puVar7 = plVar6;
                *(undefined4 *)(puVar7 + 1) = 3;
              }
            }
            local_res8[0] = local_res8[0] + 1;
            plVar4 = local_90;
            lVar2 = local_a0;
            iVar9 = local_res10;
          } while (local_res8[0] < *(int *)(lVar5 + 0x18));
        }
        local_res10 = iVar9 + 1;
        local_98 = local_98 + 8;
      } while (local_res10 < (int)local_88[1]);
    }
  }
  return;
}



// FUNCTION 142c94a90 FUN_142c94a90 body=53 status=ok
// SIG undefined FUN_142c94a90(void)

undefined8 FUN_142c94a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (undefined4)param_3;
  uStack_10 = 0;
  uVar1 = (undefined4)local_18;
  local_18 = param_3;
  FUN_142c94ae0(uVar1,param_2,&local_18);
  return param_1;
}



// FUNCTION 142c94ad0 thunk_FUN_142475720 body=5 status=ok
// SIG undefined thunk_FUN_142475720(void)

void thunk_FUN_142475720(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_1424811e0();
  plVar1 = (longlong *)(lVar3 + 0x10);
  iVar2 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1,param_2);
  if (iVar2 == -1) {
    iVar2 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x1c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_2 + 2);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  return;
}



// FUNCTION 142c94ae0 FUN_142c94ae0 body=589 status=ok
// SIG undefined FUN_142c94ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_142c94ae0(undefined4 *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = param_4;
  local_a0 = param_1;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    FWeakObjectPtr::operator=(param_1 + 2,0);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
  }
  else {
    FWeakObjectPtr::operator=(&local_98);
    local_90 = *param_4;
    local_b8 = *param_3;
    uStack_b4 = param_3[1];
    uStack_b0 = param_3[2];
    uStack_ac = param_3[3];
    local_8c = param_4[1];
    local_88 = *(undefined8 *)(param_4 + 2);
    uVar9 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    FUN_142caa8e0(&local_68,param_2,&local_b8);
    puVar1 = local_a8;
    plVar8 = &local_68;
    if (local_60 != (longlong *)0x0) {
      plVar8 = local_60;
    }
    uVar5 = (longlong)local_58 & 0x1fffffffffffffff;
    if (plVar8 + local_58 < plVar8) {
      uVar5 = uVar9;
    }
    if (uVar5 != 0) {
      do {
        lVar7 = *plVar8;
        cVar3 = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x2d0))
                          (*(longlong **)(param_2 + 0x38),lVar7,puVar1);
        if ((cVar3 != '\0') && (lVar7 != 0)) {
          FWeakObjectPtr::operator=(&local_b8,lVar7);
          uVar2 = local_70;
          lVar7 = (longlong)(int)local_70;
          iVar4 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar4);
          if (local_70._4_4_ < iVar4) {
            TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
            ::ResizeGrow(local_80,uVar2 & 0xffffffff);
          }
          puVar6 = local_80;
          if (local_78 != (undefined1 *)0x0) {
            puVar6 = local_78;
          }
          *(undefined4 *)(puVar6 + lVar7 * 8) = local_b8;
          *(undefined4 *)((longlong)(puVar6 + lVar7 * 8) + 4) = uStack_b4;
        }
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 + 1;
        param_1 = local_a0;
      } while (uVar9 != uVar5);
    }
    plVar8 = local_60;
    puVar6 = local_78;
    *param_1 = local_98;
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    *(undefined8 *)(param_1 + 4) = local_88;
    *(undefined8 *)(param_1 + 8) = 0;
    if (local_78 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 6,local_80,8);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FMemory::Free();
      plVar8 = local_60;
      puVar6 = local_78;
    }
    *(undefined1 **)(param_1 + 8) = puVar6;
    param_1[10] = (int)local_70;
    param_1[0xb] = local_70._4_4_;
    local_70 = 0;
    local_78 = (undefined1 *)0x0;
    if ((plVar8 != (longlong *)0x0) && (FMemory::Free(plVar8), local_78 != (undefined1 *)0x0)) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142c94d30 FUN_142c94d30 body=373 status=ok
// SIG undefined FUN_142c94d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142c94d30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *_Src;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*param_1 + 0x290))();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  FUN_142caaab0(param_1,local_40,param_2);
  if (local_28 != '\0') {
    lVar4 = FUN_142c8a970(local_40);
    if (lVar4 != 0) {
      FUN_142475720(lVar4,param_3);
      bVar2 = 1;
      goto LAB_142c94e8d;
    }
    lVar4 = FUN_142c8a890(local_40);
    if (lVar4 != 0) {
      FUN_142cb2580(local_58,param_2);
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        _Src = (undefined1 *)FUN_142ca0820(*(longlong *)(lVar4 + 0x30),local_40,lVar4,param_2);
        if (local_58 != _Src) {
          if (*(longlong *)(_Src + 8) == 0) {
            _guard_xfg_dispatch_icall_nop(local_58,_Src,8);
          }
          if (local_50 != 0) {
            FMemory::Free();
          }
          local_50 = *(longlong *)(_Src + 8);
          *(undefined8 *)(_Src + 8) = 0;
          local_48 = *(undefined4 *)(_Src + 0x10);
          local_44 = *(undefined4 *)(_Src + 0x14);
          *(undefined8 *)(_Src + 0x10) = 0;
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
        lVar1 = **(longlong **)(lVar4 + 0x38);
        uVar5 = FUN_142cc1650(local_58);
        bVar2 = (**(code **)(lVar1 + 0x2d0))(*(undefined8 *)(lVar4 + 0x38),uVar5,param_3);
        if (local_50 != 0) {
          FMemory::Free();
        }
        goto LAB_142c94e8d;
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  bVar2 = 0;
LAB_142c94e8d:
  return (ulonglong)bVar2;
}



// FUNCTION 142c94eb0 FUN_142c94eb0 body=29 status=ok
// SIG undefined FUN_142c94eb0(void)

void FUN_142c94eb0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_14247f5a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c94ed0 FUN_142c94ed0 body=27 status=ok
// SIG undefined FUN_142c94ed0(void)

void FUN_142c94ed0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 4);
  uVar1 = IStreamingManager::GetNumWantingResources();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c94ef0 FUN_142c94ef0 body=724 status=ok
// SIG undefined FUN_142c94ef0(void)

void FUN_142c94ef0(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  longlong lVar8;
  short *psVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  short sVar14;
  int iVar15;
  short *psVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined8 local_res18;
  ulonglong local_res20;
  
  if (((int)param_1[3] == 0) && (param_2 != 0)) {
    plVar17 = (longlong *)*param_1;
    uVar18 = 0;
    local_res20 = 0;
    uVar10 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
    if (plVar17 + (int)param_1[1] < plVar17) {
      uVar10 = uVar18;
    }
    if (uVar10 != 0) {
      local_res18 = 0;
      do {
        lVar8 = *plVar17;
        if (lVar8 != 0) {
          do {
            uVar2 = FUN_1423ac950(param_2,lVar8);
            iVar12 = (int)param_1[3];
            *(int *)(param_1 + 3) = iVar12 + 1;
            if (*(int *)((longlong)param_1 + 0x1c) < iVar12 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar12);
            }
            *(undefined2 *)(param_1[2] + (longlong)iVar12 * 2) = uVar2;
            plVar4 = (longlong *)FUN_1423af540(param_2,&local_res18,lVar8);
            lVar8 = *plVar4;
          } while (lVar8 != 0);
        }
        local_res20 = local_res20 + 1;
        plVar17 = plVar17 + 1;
      } while (local_res20 != uVar10);
    }
    lVar8 = (longlong)(int)param_1[3];
    puVar1 = param_1 + 2;
    iVar12 = 0;
    if ((int)param_1[3] != 0) {
      bVar20 = *(short *)*puVar1 != 0;
      uVar10 = uVar18;
      uVar13 = uVar18;
      uVar19 = uVar18;
      do {
        iVar12 = (int)uVar13;
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)(iVar12 + 1);
        if ((longlong)uVar10 < lVar8) {
          psVar6 = (short *)(*puVar1 + uVar10 * 2);
          do {
            if (bVar20 != (*psVar6 != 0)) break;
            uVar13 = (ulonglong)((int)uVar13 + 1);
            uVar10 = uVar10 + 1;
            psVar6 = psVar6 + 1;
          } while ((longlong)uVar10 < lVar8);
        }
        iVar11 = (int)uVar13 - iVar12;
        if (bVar20 != false) {
          iVar3 = (int)uVar19;
          if (iVar3 != iVar12) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*puVar1 + (longlong)iVar3 * 2),
                       (void *)(*puVar1 + (longlong)iVar12 * 2),(longlong)iVar11 * 2);
          }
          uVar19 = (ulonglong)(uint)(iVar3 + iVar11);
        }
        bVar20 = (bool)(bVar20 ^ 1);
      } while ((longlong)uVar10 < lVar8);
      iVar12 = (int)uVar19;
      *(int *)(param_1 + 3) = iVar12;
    }
    FUN_142c8bd20(*puVar1,*puVar1 + (longlong)iVar12 * 2,(longlong)iVar12,(ulonglong)param_1 & 0xff)
    ;
    psVar7 = (short *)*puVar1;
    psVar6 = psVar7 + (int)param_1[3];
    psVar16 = psVar6;
    if ((psVar7 != psVar6) && (psVar7 + 1 != psVar6)) {
      psVar9 = psVar7 + 1;
      sVar14 = *psVar7;
LAB_142c950f0:
      psVar5 = psVar9;
      psVar9 = psVar5 + 1;
      if (sVar14 != *psVar5) goto code_r0x000142c95102;
      uVar10 = (ulonglong)((longlong)psVar6 + (1 - (longlong)psVar9)) >> 1;
      if (psVar6 < psVar9) {
        uVar10 = uVar18;
      }
      if (uVar10 != 0) {
        do {
          if (*psVar7 != *psVar9) {
            psVar7 = psVar7 + 1;
            *psVar7 = *psVar9;
          }
          psVar9 = psVar9 + 1;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar10);
      }
      psVar16 = psVar7 + 1;
    }
LAB_142c95114:
    iVar12 = (int)param_1[3];
    uVar10 = *puVar1;
    if ((psVar16 != (short *)(uVar10 + (longlong)iVar12 * 2)) &&
       (iVar11 = (int)((longlong)psVar6 - (longlong)psVar16 >> 1), 0 < iVar11)) {
      iVar15 = (int)((longlong)((longlong)psVar16 - uVar10) >> 1);
      iVar3 = (iVar12 - iVar15) - iVar11;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(uVar10 + (longlong)iVar15 * 2),
                   (void *)(uVar10 + (longlong)(iVar15 + iVar11) * 2),(longlong)iVar3 * 2);
        iVar12 = (int)param_1[3];
      }
      *(int *)(param_1 + 3) = iVar12 - iVar11;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(puVar1);
    }
  }
  return;
code_r0x000142c95102:
  psVar7 = psVar5;
  sVar14 = *psVar5;
  if (psVar9 == psVar6) goto LAB_142c95114;
  goto LAB_142c950f0;
}



// FUNCTION 142c951d0 FUN_142c951d0 body=1024 status=ok
// SIG undefined FUN_142c951d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c951d0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [48];
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 == 0) {
LAB_142c95240:
    lVar7 = 0;
  }
  else {
    lVar5 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142c95240;
  }
  uVar11 = 0;
  uVar12 = 0;
  if (lVar7 != 0) {
    local_128 = FUN_142df81c0();
    lVar5 = FUN_142c8a400(lVar7,&local_128);
    if (lVar5 != 0) {
      uVar11 = FAnimNotifyEvent::GetTriggerTime(lVar5);
      uVar12 = FAnimNotifyEvent::GetEndTriggerTime(lVar5);
      bVar4 = true;
      goto LAB_142c95292;
    }
  }
  bVar4 = false;
LAB_142c95292:
  if ((lVar7 != 0) && (bVar4)) {
    FUN_14224ffa0(&local_118,*(undefined8 *)(param_1 + 0x38),lVar7,uVar11);
    FUN_14224ffa0(&local_e8,*(undefined8 *)(param_1 + 0x40),lVar7,uVar11);
    FUN_14162bcf0(&local_e8,local_88,&local_118);
    *(float *)(param_1 + 0x48) =
         SQRT(fStack_74 * fStack_74 + local_78 * local_78 + fStack_70 * fStack_70);
    local_120 = fStack_70;
    *(float *)(param_1 + 0x4c) = local_78;
    *(float *)(param_1 + 0x50) = fStack_74;
    *(float *)(param_1 + 0x54) = fStack_70;
    fVar1 = *(float *)(param_1 + 0x50);
    fVar2 = *(float *)(param_1 + 0x4c);
    fVar3 = *(float *)(param_1 + 0x54);
    fVar8 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    if (1e-08 < fVar8) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      *(float *)(param_1 + 0x4c) = fVar2 * fVar9;
      *(float *)(param_1 + 0x50) = fVar1 * fVar9;
      *(float *)(param_1 + 0x54) = fVar3 * fVar9;
    }
    lVar5 = FUN_14224ffa0(local_b8,*(undefined8 *)(param_1 + 0x38),lVar7,0);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar5 + 0x20);
    puVar6 = (undefined8 *)FUN_14224ffa0(local_b8,*(undefined8 *)(param_1 + 0x38),lVar7,uVar12);
    local_118 = *puVar6;
    uStack_110 = puVar6[1];
    local_108 = *(undefined4 *)(puVar6 + 2);
    uStack_104 = *(undefined4 *)((longlong)puVar6 + 0x14);
    uStack_100 = *(undefined4 *)(puVar6 + 3);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0x1c);
    local_f8 = *(undefined4 *)(puVar6 + 4);
    uStack_f4 = *(undefined4 *)((longlong)puVar6 + 0x24);
    uStack_f0 = *(undefined4 *)(puVar6 + 5);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0x2c);
    puVar6 = (undefined8 *)FUN_14224ffa0(local_b8,*(undefined8 *)(param_1 + 0x40),lVar7,uVar12);
    local_e8 = *puVar6;
    uStack_e0 = puVar6[1];
    local_d8 = *(undefined4 *)(puVar6 + 2);
    uStack_d4 = *(undefined4 *)((longlong)puVar6 + 0x14);
    uStack_d0 = *(undefined4 *)(puVar6 + 3);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0x1c);
    local_c8 = *(undefined4 *)(puVar6 + 4);
    uStack_c4 = *(undefined4 *)((longlong)puVar6 + 0x24);
    uStack_c0 = *(undefined4 *)(puVar6 + 5);
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0x2c);
    lVar7 = FUN_14162bcf0(&local_e8,local_b8,&local_118);
    fVar1 = *(float *)(lVar7 + 0x10);
    fVar2 = *(float *)(lVar7 + 0x14);
    fVar3 = *(float *)(lVar7 + 0x18);
    *(float *)(param_1 + 0x58) = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    *(float *)(param_1 + 0x5c) = fVar1;
    *(float *)(param_1 + 0x60) = fVar2;
    *(float *)(param_1 + 100) = fVar3;
    fVar1 = *(float *)(param_1 + 0x60);
    fVar2 = *(float *)(param_1 + 0x5c);
    fVar3 = *(float *)(param_1 + 100);
    fVar8 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    if (1e-08 < fVar8) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      *(float *)(param_1 + 0x5c) = fVar2 * fVar9;
      *(float *)(param_1 + 0x60) = fVar1 * fVar9;
      *(float *)(param_1 + 100) = fVar3 * fVar9;
    }
  }
  return;
}



// FUNCTION 142c955d0 FUN_142c955d0 body=613 status=ok
// SIG undefined FUN_142c955d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c955d0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [48];
  undefined1 local_d8 [48];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
LAB_142c95639:
    lVar6 = 0;
  }
  else {
    lVar5 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142c95639;
  }
  uVar10 = 0;
  if (lVar6 != 0) {
    local_118 = FUN_142df9720();
    lVar5 = FUN_142c8a130(lVar6,&local_118);
    if (lVar5 != 0) {
      uVar10 = FAnimNotifyEvent::GetTriggerTime(lVar5);
      bVar4 = true;
      goto LAB_142c95670;
    }
  }
  bVar4 = false;
LAB_142c95670:
  if ((lVar6 != 0) && (bVar4)) {
    FUN_14224ffa0(local_108,*(undefined8 *)(param_1 + 0x40),lVar6,uVar10);
    FUN_14224ffa0(local_d8,*(undefined8 *)(param_1 + 0x48),lVar6,uVar10);
    FUN_14162bcf0(local_d8,local_a8,local_108);
    *(float *)(param_1 + 0x50) =
         SQRT(fStack_94 * fStack_94 + local_98 * local_98 + fStack_90 * fStack_90);
    local_110 = fStack_90;
    *(float *)(param_1 + 0x54) = local_98;
    *(float *)(param_1 + 0x58) = fStack_94;
    *(float *)(param_1 + 0x5c) = fStack_90;
    fVar1 = *(float *)(param_1 + 0x58);
    fVar2 = *(float *)(param_1 + 0x54);
    fVar3 = *(float *)(param_1 + 0x5c);
    fVar7 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      *(float *)(param_1 + 0x54) = fVar2 * fVar8;
      *(float *)(param_1 + 0x58) = fVar1 * fVar8;
      *(float *)(param_1 + 0x5c) = fVar3 * fVar8;
    }
    lVar6 = FUN_14224ffa0(local_78,*(undefined8 *)(param_1 + 0x40),lVar6,0);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar6 + 0x20);
  }
  return;
}



// FUNCTION 142c95840 FUN_142c95840 body=121 status=ok
// SIG undefined FUN_142c95840(void)

undefined8 FUN_142c95840(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x879) & 1) != 0) {
    plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xf28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2,param_3);
      return param_2;
    }
  }
  FUN_1423a5a10(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 142c958c0 FUN_142c958c0 body=380 status=ok
// SIG undefined FUN_142c958c0(void)

undefined8 FUN_142c958c0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_28;
  undefined8 local_20;
  
  if ((param_1[7] == 0) || (param_2 == 0)) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b30da0) && (_Init_thread_header(&DAT_146b30da0), DAT_146b30da0 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad010,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (DAT_1466ad010,0x1c,"UGbxAnimTable::CalcSequence",0x1c,0x3f);
    atexit((_func_5014 *)&LAB_143ebfe40);
    _Init_thread_footer(&DAT_146b30da0);
  }
  local_28 = (undefined8 *)0x0;
  puVar3 = &DAT_143f3eda8;
  if (DAT_1466ad018 != 0) {
    puVar3 = DAT_1466ad010;
  }
  local_20 = 0;
  FUN_142c8a6d0(param_1[7],puVar3,&local_28);
  puVar1 = local_28 + (int)local_20;
  for (puVar4 = local_28; uVar5 = 0, puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = *puVar4;
    cVar2 = (**(code **)(*param_1 + 0x290))(param_1,uVar5,param_2);
    if (cVar2 != '\0') break;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar5;
}



// FUNCTION 142c95a40 FUN_142c95a40 body=99 status=ok
// SIG undefined FUN_142c95a40(void)

void FUN_142c95a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *param_2;
  cVar2 = FUN_142cbd8b0(*param_1,uVar1);
  if (cVar2 != '\0') {
    FUN_142c8e3c0(param_1[1]);
    FUN_142cccb70(*param_1,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142c95a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)param_1[2] + 0x38) + 0x2d8))
            (*(longlong **)(*(longlong *)param_1[2] + 0x38),uVar1,param_1[3]);
  return;
}



// FUNCTION 142c95ab0 FUN_142c95ab0 body=30 status=ok
// SIG undefined FUN_142c95ab0(void)

void FUN_142c95ab0(undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142c95ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)*param_1 + 0x38) + 0x2d8))
            (*(longlong **)(*(longlong *)*param_1 + 0x38),*param_2,param_1[1]);
  return;
}



// FUNCTION 142c95ad0 FUN_142c95ad0 body=39 status=ok
// SIG undefined FUN_142c95ad0(void)

void FUN_142c95ad0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_3[4];
  FUN_142c8d9e0(local_28,*param_2,&local_28);
  return;
}



// FUNCTION 142c95b00 FUN_142c95b00 body=58 status=ok
// SIG undefined FUN_142c95b00(void)

void FUN_142c95b00(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000142c95b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x2c0))(*(longlong **)(lVar2 + 0x38),uVar1,param_3);
  return;
}



// FUNCTION 142c95b40 FUN_142c95b40 body=23 status=ok
// SIG undefined FUN_142c95b40(void)

void FUN_142c95b40(undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142c95b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)*param_1 + 0x38) + 0x2c8))
            (*(longlong **)(*(longlong *)*param_1 + 0x38),*param_2);
  return;
}



// FUNCTION 142c95b60 FUN_142c95b60 body=40 status=ok
// SIG undefined FUN_142c95b60(void)

undefined8 FUN_142c95b60(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c95b90 FUN_142c95b90 body=40 status=ok
// SIG undefined FUN_142c95b90(void)

undefined8 FUN_142c95b90(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x280))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c95bc0 FUN_142c95bc0 body=40 status=ok
// SIG undefined FUN_142c95bc0(void)

undefined8 FUN_142c95bc0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x290))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c95c20 FUN_142c95c20 body=40 status=ok
// SIG undefined FUN_142c95c20(void)

undefined8 FUN_142c95c20(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x278))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c95c50 FUN_142c95c50 body=374 status=ok
// SIG undefined FUN_142c95c50(void)

ulonglong FUN_142c95c50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  ulonglong in_RAX;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong *local_res10;
  int local_res18 [2];
  longlong **local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
    }
    plVar1 = local_res10;
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x468,local_res18);
    pcVar3 = (char *)0x0;
    if (local_res18[0] != -1) {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x468) + (longlong)local_res18[0] * 0x28);
    }
    pcVar4 = pcVar3 + 8;
    if (pcVar3 == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    if ((pcVar4 == (char *)0x0) || (*(longlong *)(pcVar4 + 8) != DAT_1468c21b0)) {
      local_28 = (**(code **)(*plVar1 + 0x280))(plVar1,param_1);
      local_38[0] = local_28 != 0;
      local_30 = DAT_1468c21b0;
      if ((local_28 == 0) && (pcVar4 != (char *)0x0)) {
        local_28 = *(longlong *)(pcVar4 + 0x10);
      }
      local_48 = &local_res10;
      local_40 = local_38;
      FUN_142c88fa0(param_1 + 0x468,local_res18,&local_48,0);
      pcVar4 = (char *)(*(longlong *)(param_1 + 0x468) + ((longlong)local_res18[0] * 5 + 1) * 8);
    }
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
    return uVar5;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142c95dd0 FUN_142c95dd0 body=67 status=ok
// SIG undefined FUN_142c95dd0(void)

bool FUN_142c95dd0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = USignificanceManager::GetWorld(param_3);
  }
  local_res10[0] = 0;
  FUN_142c81650(param_2 + 8,local_res10,uVar1);
  return local_res10[0] != 0;
}



// FUNCTION 142c95e20 FUN_142c95e20 body=356 status=ok
// SIG undefined FUN_142c95e20(void)

void FUN_142c95e20(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  byte bVar3;
  
  if ((param_2 != (undefined1 *)0x0) && (*(char *)(param_1 + 0x13e0) != '\0')) {
    *param_2 = *(undefined1 *)(param_1 + 0x1358);
    param_2[1] = *(undefined1 *)(param_1 + 0x1359);
    param_2[2] = param_2[2] ^ (param_2[2] ^ *(byte *)(param_1 + 0x135a)) & 1;
    puVar1 = (undefined8 *)(param_2 + 0x20);
    bVar3 = (*(byte *)(param_1 + 0x135a) ^ param_2[2]) & 2 ^ param_2[2];
    param_2[2] = bVar3;
    bVar3 = (*(byte *)(param_1 + 0x135a) ^ bVar3) & 4 ^ bVar3;
    param_2[2] = bVar3;
    bVar3 = (*(byte *)(param_1 + 0x135a) ^ bVar3) & 8 ^ bVar3;
    param_2[2] = bVar3;
    param_2[2] = (*(byte *)(param_1 + 0x135a) ^ bVar3) & 0x10 ^ bVar3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x135c);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x1360);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x1364);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x1368);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x136c);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x1370);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1374);
    if (puVar1 != (undefined8 *)(param_1 + 0x1378)) {
      iVar2 = *(int *)(param_1 + 0x1380);
      _Src = *(void **)(param_1 + 0x1378);
      *(int *)(param_2 + 0x28) = iVar2;
      if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
      }
    }
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
              (param_2 + 0x30,param_1 + 5000);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x13d8);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x13dc);
  }
  return;
}



// FUNCTION 142c95f90 FUN_142c95f90 body=165 status=ok
// SIG undefined FUN_142c95f90(void)

void FUN_142c95f90(longlong param_1)

{
  int iVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined4 *)(param_1 + 0xf48) = 0;
  if (*(int *)(param_1 + 0xf4c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf40,0);
  }
  if (*(int *)(param_1 + 0xf68) == -1) {
    iVar1 = rand();
    *(int *)(param_1 + 0xf68) = iVar1;
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    local_res8 = *(undefined4 *)(param_1 + 0xf68);
    local_resc = local_res8;
    FUN_142d6f020(*(longlong *)(param_1 + 0xf38),param_1 + 0xf40,&local_res8);
    if ((*(byte *)(param_1 + 200) & 0x20) != 0) {
      FUN_142d57d90(*(undefined8 *)(param_1 + 0xf38),param_1 + 0xf50,param_1 + 0xf40);
    }
  }
  FUN_142c90ea0(param_1,1);
  return;
}



// FUNCTION 142c96040 FUN_142c96040 body=148 status=ok
// SIG undefined FUN_142c96040(void)

void FUN_142c96040(longlong param_1,longlong *param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  }
  if ((((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) ||
      (((int)*param_2 == 0 && (*(int *)((longlong)param_2 + 4) == 0)))) ||
     (*(longlong *)(param_1 + 0x10) == *param_2)) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x1dc)) {
      FUN_142caa3b0(param_1 + 0x30,0);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142c960cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  return;
}



// FUNCTION 142c96100 FUN_142c96100 body=191 status=ok
// SIG undefined FUN_142c96100(void)

void FUN_142c96100(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  
  plVar4 = (longlong *)*param_1;
  plVar2 = plVar4 + (longlong)(int)param_1[1] * 2;
  for (; plVar4 != plVar2; plVar4 = plVar4 + 2) {
    lVar3 = *plVar4;
    if (((lVar3 != 0) && (local_res8 = FWeakObjectPtr::Get(lVar3 + 0x18), local_res8 != 0)) &&
       (*(longlong *)(local_res8 + 0x38) != 0)) {
      local_res18 = &local_res8;
      lVar1 = *(longlong *)(lVar3 + 0x50);
      if (*(longlong *)(lVar3 + 0x50) == 0) {
        lVar1 = lVar3 + 0x30;
      }
      lVar3 = (longlong)*(int *)(lVar3 + 0x58) * 0x1c + lVar1;
      for (; lVar1 != lVar3; lVar1 = lVar1 + 0x1c) {
        local_res10 = FWeakObjectPtr::Get(lVar1);
        FUN_142c95b40(&local_res18,&local_res10,lVar1 + 8);
      }
    }
  }
  return;
}



// FUNCTION 142c961c0 FUN_142c961c0 body=251 status=ok
// SIG undefined FUN_142c961c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c961c0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0x278))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x288))(param_1);
    if (cVar2 != '\0') {
      FUN_142caaab0(param_1,&local_38,param_2);
      if (local_20 != '\0') {
        if ((*(byte *)(local_38 + 0x38) & 0x20) != 0) {
          (**(code **)(*param_1 + 0x2e8))(param_1,local_28);
        }
        lVar3 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_38 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_38 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (local_30 != 0)) {
          lVar3 = FUN_14294e020();
          if (*(longlong *)(local_38 + 0x70) == lVar3) {
            FUN_142477310(local_30);
          }
          else {
            lVar3 = FUN_14294e080();
            if (*(longlong *)(local_38 + 0x70) == lVar3) {
              FUN_142477390(local_30);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c962c0 FUN_142c962c0 body=32 status=ok
// SIG undefined FUN_142c962c0(void)

undefined8 FUN_142c962c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1424917d0(param_2,param_1);
  return param_1;
}



// FUNCTION 142c962e0 FUN_142c962e0 body=32 status=ok
// SIG undefined FUN_142c962e0(void)

undefined8 FUN_142c962e0(undefined8 param_1,undefined8 param_2)

{
  FUN_142491830(param_2,param_1);
  return param_1;
}



// FUNCTION 142c96300 FUN_142c96300 body=88 status=ok
// SIG undefined FUN_142c96300(void)

undefined8 * FUN_142c96300(undefined8 *param_1,longlong *param_2)

{
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Memcpy(*param_1,L"Invalid handle",0x1e);
  return param_1;
}



// FUNCTION 142c96360 FUN_142c96360 body=4636 status=ok
// SIG undefined FUN_142c96360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142c96360(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
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
  undefined1 auStack_458 [32];
  undefined4 local_438;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
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
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  if ((*(byte *)(param_1 + 0x24c) & 1) == 0) {
    FUN_140942fb0(param_1,0,0);
  }
  fVar39 = fRam0000000146b2ff78;
  fVar37 = fRam0000000146b2ff74;
  fVar33 = _DAT_146b2ff70;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    puVar14 = (undefined8 *)&DAT_1468b5b70;
  }
  else {
    puVar14 = (undefined8 *)(lVar1 + 0x210);
  }
  local_108 = *puVar14;
  uStack_100 = puVar14[1];
  local_f8 = puVar14[2];
  uStack_f0 = puVar14[3];
  local_e8 = puVar14[4];
  uStack_e0 = puVar14[5];
  if ((*(longlong *)(param_1 + 0x10d0) == 0) || (*(int *)(param_1 + 0x12a0) < 2)) {
    local_168 = *(float *)(param_1 + 0x210);
    fStack_164 = *(float *)(param_1 + 0x214);
    fStack_160 = *(float *)(param_1 + 0x218);
    fStack_15c = *(float *)(param_1 + 0x21c);
    local_418 = *(float *)(param_1 + 0x220);
    fStack_414 = *(float *)(param_1 + 0x224);
    fStack_410 = *(float *)(param_1 + 0x228);
    fStack_14c = *(float *)(param_1 + 0x22c);
    _local_148 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar23 = local_148._0_4_;
    fVar36 = local_148._4_4_;
    fVar38 = local_148._8_4_;
    fVar40 = local_148._12_4_;
    fStack_40c = fStack_14c;
    local_158 = local_418;
    fStack_154 = fStack_414;
    fStack_150 = fStack_410;
    if (*(char *)(param_1 + 0xf30) == '\0') {
      fVar26 = *(float *)(param_1 + 0x230);
      fVar27 = *(float *)(param_1 + 0x234);
      fVar28 = *(float *)(param_1 + 0x238);
      fVar30 = *(float *)(param_1 + 0x23c);
      local_438 = 0x38d1b717;
      auVar15._4_4_ =
           -(uint)(0.0001 < (float)((uint)(fVar27 - fRam00000001468b5b94) & uRam0000000146b30014));
      auVar15._0_4_ = -(uint)(0.0001 < (float)((uint)(fVar26 - _DAT_1468b5b90) & _DAT_146b30010));
      auVar15._8_4_ =
           -(uint)(0.0001 < (float)((uint)(fVar28 - fRam00000001468b5b98) & uRam0000000146b30018));
      auVar15._12_4_ =
           -(uint)(0.0001 < (float)((uint)(fVar30 - fRam00000001468b5b9c) & uRam0000000146b3001c));
      iVar12 = movmskps((int)puVar14,auVar15);
      if (iVar12 != 0) {
        if (1e-08 < ABS(fVar26)) {
          fVar43 = 1.0 / fVar26;
        }
        else {
          fVar43 = 0.0;
        }
        if (1e-08 < ABS(fVar27)) {
          fVar42 = 1.0 / fVar27;
        }
        else {
          fVar42 = 0.0;
        }
        if (1e-08 < ABS(fVar28)) {
          fVar29 = 1.0 / fVar28;
        }
        else {
          fVar29 = 0.0;
        }
        auVar17._4_4_ = fVar42;
        auVar17._0_4_ = fVar43;
        auVar17._8_4_ = fVar29;
        auVar17._12_4_ = 0;
        local_318 = DAT_1464aa810;
        fStack_314 = DAT_1464aa814;
        fStack_310 = DAT_1464aa818;
        fStack_30c = DAT_1464aa81c;
        auVar15 = minps(auVar17,_local_148);
        local_308._4_4_ = DAT_1468b5d94;
        local_308._0_4_ = DAT_1468b5d90;
        local_308._8_4_ = DAT_1468b5d98;
        local_308._12_4_ = 0;
        auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146b2ffd4);
        auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146b2ffd0);
        auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146b2ffd8);
        auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146b2ffdc);
        iVar12 = movmskps(iVar12,auVar16);
        local_2f8._4_4_ = fVar42;
        local_2f8._0_4_ = fVar43;
        local_2f8._8_4_ = fVar29;
        local_2f8._12_4_ = 0;
        local_428 = fVar26;
        fStack_424 = fVar27;
        fStack_420 = fVar28;
        fStack_41c = fVar30;
        if (iVar12 == 0) {
          fVar24 = DAT_1468b5d90 * fVar23;
          fVar31 = DAT_1468b5d94 * fVar36;
          fVar34 = DAT_1468b5d98 * fVar38;
          fVar44 = fVar40 * 0.0;
          fVar27 = DAT_1464aa81c * local_168 * _DAT_146b2ffb0 + fStack_15c * DAT_1464aa810 +
                   DAT_1464aa818 * fStack_164 * _DAT_146b2ffa0 +
                   DAT_1464aa814 * fStack_160 * _DAT_146b2ff90;
          fVar28 = DAT_1464aa818 * local_168 * fRam0000000146b2ffb4 + fStack_15c * DAT_1464aa814 +
                   DAT_1464aa81c * fStack_164 * fRam0000000146b2ffa4 +
                   DAT_1464aa810 * fStack_160 * fRam0000000146b2ff94;
          fVar30 = DAT_1464aa814 * local_168 * fRam0000000146b2ffb8 + fStack_15c * DAT_1464aa818 +
                   DAT_1464aa810 * fStack_164 * fRam0000000146b2ffa8 +
                   DAT_1464aa81c * fStack_160 * fRam0000000146b2ff98;
          fVar41 = DAT_1464aa810 * local_168 * fRam0000000146b2ffbc + fStack_15c * DAT_1464aa81c +
                   DAT_1464aa814 * fStack_164 * fRam0000000146b2ffac +
                   DAT_1464aa818 * fStack_160 * fRam0000000146b2ff9c;
          fVar33 = fVar34 * fStack_164 - fVar31 * fStack_160;
          fVar37 = fVar24 * fStack_160 - fVar34 * local_168;
          fVar39 = fVar31 * local_168 - fVar24 * fStack_164;
          fVar26 = fVar44 * fStack_15c - fVar44 * fStack_15c;
          fVar33 = fVar33 + fVar33;
          fVar37 = fVar37 + fVar37;
          fVar39 = fVar39 + fVar39;
          fVar26 = fVar26 + fVar26;
          local_158 = (fVar39 * fStack_164 - fVar37 * fStack_160) + fStack_15c * fVar33 + fVar24 +
                      local_418;
          fStack_154 = (fVar33 * fStack_160 - fVar39 * local_168) + fStack_15c * fVar37 + fVar31 +
                       fStack_414;
          fStack_150 = (fVar37 * local_168 - fVar33 * fStack_164) + fStack_15c * fVar39 + fVar34 +
                       fStack_410;
          fStack_14c = (fVar26 * fStack_15c - fVar26 * fStack_15c) + fStack_15c * fVar26 + fVar44 +
                       fStack_14c;
        }
        else {
          fVar26 = fStack_164 + fStack_164;
          fVar28 = fStack_160 + fStack_160;
          fVar30 = (local_168 + local_168) * local_168;
          fVar27 = (local_168 + local_168) * fStack_15c;
          fStack_2e4 = (fVar28 * fStack_15c + fVar26 * local_168) * fVar23;
          fStack_2d0 = (fVar27 + fVar28 * fStack_164) * fVar36;
          local_2c8 = (fVar26 * fStack_15c + fVar28 * local_168) * fVar38;
          local_2d8 = fVar36 * (fVar26 * local_168 - fVar28 * fStack_15c);
          fStack_2c4 = fVar38 * (fVar28 * fStack_164 - fVar27);
          fStack_2e0 = fVar23 * (fVar28 * local_168 - fVar26 * fStack_15c);
          local_2e8 = (float)((uint)((_DAT_146b2ff70 - (fVar28 * fStack_160 + fVar26 * fStack_164))
                                    * fVar23) & _DAT_146b2ff80);
          fStack_2d4 = (float)((uint)((fRam0000000146b2ff74 - (fVar28 * fStack_160 + fVar30)) *
                                     fVar36) & uRam0000000146b2ff84);
          fStack_2c0 = (float)((uint)((fRam0000000146b2ff78 - (fVar26 * fStack_164 + fVar30)) *
                                     fVar38) & uRam0000000146b2ff88);
          fStack_2dc = (float)((uint)((fRam0000000146b2ff7c - (fVar30 + fVar30)) * fVar40) &
                              uRam0000000146b2ff8c);
          fStack_40c = fRam0000000146b2ff7c;
          fStack_2ac = fRam0000000146b2ff7c;
          fVar26 = DAT_1464aa814 + DAT_1464aa814;
          fVar27 = DAT_1464aa818 + DAT_1464aa818;
          fVar28 = (DAT_1464aa810 + DAT_1464aa810) * DAT_1464aa810;
          fVar30 = DAT_1464aa81c * (DAT_1464aa810 + DAT_1464aa810);
          fStack_2a4 = (DAT_1464aa81c * fVar27 + DAT_1464aa810 * fVar26) * fVar43;
          fStack_290 = (fVar30 + DAT_1464aa814 * fVar27) * fVar42;
          local_288 = (DAT_1464aa81c * fVar26 + DAT_1464aa810 * fVar27) * fVar29;
          local_298 = fVar42 * (DAT_1464aa810 * fVar26 - DAT_1464aa81c * fVar27);
          fStack_284 = fVar29 * (DAT_1464aa814 * fVar27 - fVar30);
          fStack_2a0 = fVar43 * (DAT_1464aa810 * fVar27 - DAT_1464aa81c * fVar26);
          local_2a8 = (float)((uint)((_DAT_146b2ff70 -
                                     (fVar27 * DAT_1464aa818 + fVar26 * DAT_1464aa814)) * fVar43) &
                             _DAT_146b2ff80);
          fStack_294 = (float)((uint)((fRam0000000146b2ff74 - (fVar27 * DAT_1464aa818 + fVar28)) *
                                     fVar42) & uRam0000000146b2ff84);
          fStack_280 = (float)((uint)((fRam0000000146b2ff78 - (fVar26 * DAT_1464aa814 + fVar28)) *
                                     fVar29) & uRam0000000146b2ff88);
          fStack_29c = (float)((uint)((fRam0000000146b2ff7c - (fVar28 + fVar28)) * 0.0) &
                              uRam0000000146b2ff8c);
          local_408 = fStack_2a4 * local_2d8 + local_2a8 * local_2e8 + fStack_2a0 * local_2c8 +
                      fStack_29c * local_418;
          fStack_404 = fStack_2a4 * fStack_2d4 + local_2a8 * fStack_2e4 + fStack_2a0 * fStack_2c4 +
                       fStack_29c * fStack_414;
          fStack_400 = fStack_2a4 * fStack_2d0 + local_2a8 * fStack_2e0 + fStack_2a0 * fStack_2c0 +
                       fStack_29c * fStack_410;
          fStack_3fc = fStack_2a4 * fStack_2dc + local_2a8 * fStack_2dc + fStack_2a0 * fStack_2dc +
                       fStack_29c * fRam0000000146b2ff7c;
          local_278 = DAT_1468b5d90;
          fStack_274 = DAT_1468b5d94;
          fStack_270 = DAT_1468b5d98;
          fStack_26c = fRam0000000146b2ff7c;
          local_3f8 = fStack_294 * local_2d8 + local_298 * local_2e8 + fStack_290 * local_2c8 +
                      fStack_29c * local_418;
          fStack_3f4 = fStack_294 * fStack_2d4 + local_298 * fStack_2e4 + fStack_290 * fStack_2c4 +
                       fStack_29c * fStack_414;
          fStack_3f0 = fStack_294 * fStack_2d0 + local_298 * fStack_2e0 + fStack_290 * fStack_2c0 +
                       fStack_29c * fStack_410;
          fStack_3ec = fStack_294 * fStack_2dc + local_298 * fStack_2dc + fStack_290 * fStack_2dc +
                       fStack_29c * fRam0000000146b2ff7c;
          local_3e8 = fStack_284 * local_2d8 + local_288 * local_2e8 + fStack_280 * local_2c8 +
                      fStack_29c * local_418;
          fStack_3e4 = fStack_284 * fStack_2d4 + local_288 * fStack_2e4 + fStack_280 * fStack_2c4 +
                       fStack_29c * fStack_414;
          fStack_3e0 = fStack_284 * fStack_2d0 + local_288 * fStack_2e0 + fStack_280 * fStack_2c0 +
                       fStack_29c * fStack_410;
          fStack_3dc = fStack_284 * fStack_2dc + local_288 * fStack_2dc + fStack_280 * fStack_2dc +
                       fStack_29c * fRam0000000146b2ff7c;
          local_3d8 = DAT_1468b5d94 * local_2d8 + DAT_1468b5d90 * local_2e8 +
                      DAT_1468b5d98 * local_2c8 + fRam0000000146b2ff7c * local_418;
          fStack_3d4 = DAT_1468b5d94 * fStack_2d4 + DAT_1468b5d90 * fStack_2e4 +
                       DAT_1468b5d98 * fStack_2c4 + fRam0000000146b2ff7c * fStack_414;
          fStack_3d0 = DAT_1468b5d94 * fStack_2d0 + DAT_1468b5d90 * fStack_2e0 +
                       DAT_1468b5d98 * fStack_2c0 + fRam0000000146b2ff7c * fStack_410;
          fStack_3cc = DAT_1468b5d94 * fStack_2dc + DAT_1468b5d90 * fStack_2dc +
                       DAT_1468b5d98 * fStack_2dc + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
          fStack_2cc = fStack_2dc;
          fStack_2bc = fStack_2dc;
          local_2b8 = local_418;
          fStack_2b4 = fStack_414;
          fStack_2b0 = fStack_410;
          fStack_28c = fStack_29c;
          fStack_27c = fStack_29c;
          FMatrix::RemoveScaling(&local_408);
          fVar33 = (float)(-(uint)(_DAT_146b2ffd0 <= fVar43 * fVar23) &
                           (_DAT_146b2ffc0 ^ (uint)fVar33) ^ _DAT_146b2ffc0);
          fVar37 = (float)(-(uint)(fRam0000000146b2ffd4 <= fVar42 * fVar36) &
                           (uRam0000000146b2ffc4 ^ (uint)fVar37) ^ uRam0000000146b2ffc4);
          fVar39 = (float)(-(uint)(fRam0000000146b2ffd8 <= fVar29 * fVar38) &
                           (uRam0000000146b2ffc8 ^ (uint)fVar39) ^ uRam0000000146b2ffc8);
          local_408 = local_408 * fVar33;
          fStack_404 = fStack_404 * fVar33;
          fStack_400 = fStack_400 * fVar33;
          fStack_3f4 = fStack_3f4 * fVar37;
          fStack_3f0 = fStack_3f0 * fVar37;
          local_3f8 = local_3f8 * fVar37;
          fStack_3e4 = fStack_3e4 * fVar39;
          fStack_3e0 = fStack_3e0 * fVar39;
          local_3e8 = local_3e8 * fVar39;
          FQuat::FQuat(&local_428,&local_408);
          local_438 = 0x322bcc77;
          auVar20._0_4_ = local_428 * local_428 + fStack_420 * fStack_420;
          auVar20._4_4_ = fStack_424 * fStack_424 + fStack_41c * fStack_41c;
          auVar20._8_4_ = fStack_420 * fStack_420 + local_428 * local_428;
          auVar20._12_4_ = fStack_41c * fStack_41c + fStack_424 * fStack_424;
          fVar27 = auVar20._4_4_ + auVar20._0_4_;
          fVar28 = auVar20._8_4_ + auVar20._4_4_;
          fVar30 = auVar20._12_4_ + auVar20._8_4_;
          fVar41 = auVar20._0_4_ + auVar20._12_4_;
          auVar3._4_4_ = fVar28;
          auVar3._0_4_ = fVar27;
          auVar3._8_4_ = fVar30;
          auVar3._12_4_ = fVar41;
          auVar15 = rsqrtps(auVar20,auVar3);
          fVar33 = auVar15._0_4_;
          fVar37 = auVar15._4_4_;
          fVar39 = auVar15._8_4_;
          fVar26 = auVar15._12_4_;
          fVar33 = (_DAT_146b2ff60 - fVar33 * fVar33 * fVar27 * _DAT_146b2ff60) * fVar33 + fVar33;
          fVar37 = (fRam0000000146b2ff64 - fVar37 * fVar37 * fVar28 * fRam0000000146b2ff64) * fVar37
                   + fVar37;
          fVar39 = (fRam0000000146b2ff68 - fVar39 * fVar39 * fVar30 * fRam0000000146b2ff68) * fVar39
                   + fVar39;
          fVar26 = (fRam0000000146b2ff6c - fVar26 * fVar26 * fVar41 * fRam0000000146b2ff6c) * fVar26
                   + fVar26;
          fStack_14c = 0.0;
          fVar27 = (float)(((uint)(((_DAT_146b2ff60 - fVar33 * fVar33 * fVar27 * _DAT_146b2ff60) *
                                    fVar33 + fVar33) * local_428) ^ _DAT_146b2ff50) &
                           -(uint)(1e-08 <= fVar27) ^ _DAT_146b2ff50);
          fVar28 = (float)(((uint)(((fRam0000000146b2ff64 -
                                    fVar37 * fVar37 * fVar28 * fRam0000000146b2ff64) * fVar37 +
                                   fVar37) * fStack_424) ^ uRam0000000146b2ff54) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146b2ff54);
          fVar30 = (float)(((uint)(((fRam0000000146b2ff68 -
                                    fVar39 * fVar39 * fVar30 * fRam0000000146b2ff68) * fVar39 +
                                   fVar39) * fStack_420) ^ uRam0000000146b2ff58) &
                           -(uint)(1e-08 <= fVar30) ^ uRam0000000146b2ff58);
          fVar41 = (float)(((uint)(((fRam0000000146b2ff6c -
                                    fVar26 * fVar26 * fVar41 * fRam0000000146b2ff6c) * fVar26 +
                                   fVar26) * fStack_41c) ^ uRam0000000146b2ff5c) &
                           -(uint)(1e-08 <= fVar41) ^ uRam0000000146b2ff5c);
          local_158 = local_3d8;
          fStack_154 = fStack_3d4;
          fStack_150 = fStack_3d0;
        }
        local_148._4_4_ = fVar42 * fVar36;
        local_148._0_4_ = fVar43 * fVar23;
        fStack_140 = fVar29 * fVar38;
        fStack_13c = fVar40 * 0.0;
        local_168 = fVar27;
        fStack_164 = fVar28;
        fStack_160 = fVar30;
        fStack_15c = fVar41;
      }
    }
    uVar13 = FUN_14162bcf0(&local_108,&local_138,&local_168);
    fVar29 = fRam0000000146b2ffd8;
    fVar42 = fRam0000000146b2ffd4;
    fVar43 = _DAT_146b2ffd0;
    fVar30 = fRam0000000146b2ffbc;
    fVar28 = fRam0000000146b2ffb8;
    fVar27 = fRam0000000146b2ffb4;
    fVar26 = _DAT_146b2ffb0;
    fVar40 = fRam0000000146b2ff78;
    fVar38 = fRam0000000146b2ff74;
    fVar36 = _DAT_146b2ff70;
    fVar33 = local_148._0_4_;
    fVar37 = local_148._4_4_;
    fVar39 = local_148._8_4_;
    fVar23 = local_148._12_4_;
    local_348 = 0.0;
    fStack_344 = 0.0;
    fStack_340 = 0.0;
    fStack_33c = fRam0000000146b2ff7c;
    local_328 = (float)((uint)_DAT_146b2ff70 & _DAT_146b2ff80);
    fStack_324 = (float)((uint)fRam0000000146b2ff74 & uRam0000000146b2ff84);
    fStack_320 = (float)((uint)fRam0000000146b2ff78 & uRam0000000146b2ff88);
    fStack_31c = (float)((uint)fRam0000000146b2ff7c & uRam0000000146b2ff8c);
    local_338 = 0;
    uStack_330 = 0;
    auVar15 = *(undefined1 (*) [16])(param_3 + 8);
    auVar17 = minps(auVar15,_local_148);
    auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146b2ffd4);
    auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146b2ffd0);
    auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146b2ffd8);
    auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146b2ffdc);
    iVar12 = movmskps(uVar13,auVar18);
    if (iVar12 == 0) {
      fVar36 = *param_3;
      fVar38 = param_3[1];
      fVar40 = param_3[2];
      fVar43 = param_3[3];
      fVar42 = param_3[4] * fVar33;
      fVar29 = param_3[5] * fVar37;
      fVar41 = param_3[6] * fVar39;
      fVar24 = param_3[7] * fVar23;
      local_348 = fVar43 * local_168 * _DAT_146b2ffb0 + fStack_15c * fVar36 +
                  fVar40 * fStack_164 * _DAT_146b2ffa0 + fVar38 * fStack_160 * _DAT_146b2ff90;
      fStack_344 = fVar40 * local_168 * fRam0000000146b2ffb4 + fStack_15c * fVar38 +
                   fVar43 * fStack_164 * fRam0000000146b2ffa4 +
                   fVar36 * fStack_160 * fRam0000000146b2ff94;
      fStack_340 = fVar38 * local_168 * fRam0000000146b2ffb8 + fStack_15c * fVar40 +
                   fVar36 * fStack_164 * fRam0000000146b2ffa8 +
                   fVar43 * fStack_160 * fRam0000000146b2ff98;
      fStack_33c = fVar36 * local_168 * fRam0000000146b2ffbc + fStack_15c * fVar43 +
                   fVar38 * fStack_164 * fRam0000000146b2ffac +
                   fVar40 * fStack_160 * fRam0000000146b2ff9c;
      fVar36 = fVar41 * fStack_164 - fVar29 * fStack_160;
      fVar38 = fVar42 * fStack_160 - fVar41 * local_168;
      fVar40 = fVar29 * local_168 - fVar42 * fStack_164;
      fVar43 = fVar24 * fStack_15c - fVar24 * fStack_15c;
      fVar36 = fVar36 + fVar36;
      fVar38 = fVar38 + fVar38;
      fVar40 = fVar40 + fVar40;
      fVar43 = fVar43 + fVar43;
      local_1b8 = (fVar40 * fStack_164 - fVar38 * fStack_160) + fStack_15c * fVar36 + fVar42 +
                  local_158;
      fStack_1b4 = (fVar36 * fStack_160 - fVar40 * local_168) + fStack_15c * fVar38 + fVar29 +
                   fStack_154;
      fStack_1b0 = (fVar38 * local_168 - fVar36 * fStack_164) + fStack_15c * fVar40 + fVar41 +
                   fStack_150;
      fVar36 = (fVar43 * fStack_15c - fVar43 * fStack_15c) + fStack_15c * fVar43 + fVar24 +
               fStack_14c;
      uVar13 = 0;
    }
    else {
      fVar41 = fStack_164 + fStack_164;
      fVar24 = fStack_160 + fStack_160;
      fVar34 = local_168 * (local_168 + local_168);
      fVar31 = fStack_15c * (local_168 + local_168);
      fStack_264 = (fStack_15c * fVar24 + local_168 * fVar41) * fVar33;
      fStack_250 = (fVar31 + fStack_164 * fVar24) * fVar37;
      local_248 = (fStack_15c * fVar41 + local_168 * fVar24) * fVar39;
      local_258 = fVar37 * (local_168 * fVar41 - fStack_15c * fVar24);
      fStack_244 = fVar39 * (fStack_164 * fVar24 - fVar31);
      fStack_260 = fVar33 * (local_168 * fVar24 - fStack_15c * fVar41);
      local_268 = (float)((uint)((_DAT_146b2ff70 - (fStack_160 * fVar24 + fStack_164 * fVar41)) *
                                fVar33) & _DAT_146b2ff80);
      fStack_254 = (float)((uint)((fRam0000000146b2ff74 - (fStack_160 * fVar24 + fVar34)) * fVar37)
                          & uRam0000000146b2ff84);
      fStack_240 = (float)((uint)((fRam0000000146b2ff78 - (fStack_164 * fVar41 + fVar34)) * fVar39)
                          & uRam0000000146b2ff88);
      fStack_25c = (float)((uint)((fRam0000000146b2ff7c - (fVar34 + fVar34)) * fVar23) &
                          uRam0000000146b2ff8c);
      local_238 = local_158;
      fStack_234 = fStack_154;
      fStack_230 = fStack_150;
      fStack_22c = fRam0000000146b2ff7c;
      fVar41 = *param_3;
      fVar24 = param_3[1];
      fVar31 = param_3[2];
      fVar34 = param_3[3];
      fVar22 = fVar24 + fVar24;
      fVar25 = fVar31 + fVar31;
      fVar35 = fVar41 * (fVar41 + fVar41);
      fVar32 = fVar34 * (fVar41 + fVar41);
      fVar44 = param_3[8];
      fVar7 = param_3[9];
      fVar8 = param_3[10];
      fStack_224 = (fVar34 * fVar25 + fVar41 * fVar22) * fVar44;
      fStack_210 = (fVar32 + fVar24 * fVar25) * fVar7;
      local_208 = (fVar34 * fVar22 + fVar41 * fVar25) * fVar8;
      local_218 = fVar7 * (fVar41 * fVar22 - fVar34 * fVar25);
      fStack_204 = fVar8 * (fVar24 * fVar25 - fVar32);
      fStack_220 = fVar44 * (fVar41 * fVar25 - fVar34 * fVar22);
      local_228 = (float)((uint)((_DAT_146b2ff70 - (fVar31 * fVar25 + fVar24 * fVar22)) * fVar44) &
                         _DAT_146b2ff80);
      fStack_214 = (float)((uint)((fRam0000000146b2ff74 - (fVar31 * fVar25 + fVar35)) * fVar7) &
                          uRam0000000146b2ff84);
      fStack_200 = (float)((uint)((fRam0000000146b2ff78 - (fVar24 * fVar22 + fVar35)) * fVar8) &
                          uRam0000000146b2ff88);
      fStack_21c = (float)((uint)((fRam0000000146b2ff7c - (fVar35 + fVar35)) * param_3[0xb]) &
                          uRam0000000146b2ff8c);
      local_1f8 = param_3[4];
      fStack_1f4 = param_3[5];
      fStack_1f0 = param_3[6];
      fStack_1ec = fRam0000000146b2ff7c;
      local_3c8 = fStack_224 * local_258 + local_228 * local_268 + fStack_220 * local_248 +
                  fStack_21c * local_158;
      fStack_3c4 = fStack_224 * fStack_254 + local_228 * fStack_264 + fStack_220 * fStack_244 +
                   fStack_21c * fStack_154;
      fStack_3c0 = fStack_224 * fStack_250 + local_228 * fStack_260 + fStack_220 * fStack_240 +
                   fStack_21c * fStack_150;
      fStack_3bc = fStack_224 * fStack_25c + local_228 * fStack_25c + fStack_220 * fStack_25c +
                   fStack_21c * fRam0000000146b2ff7c;
      local_3b8 = fStack_214 * local_258 + local_218 * local_268 + fStack_210 * local_248 +
                  fStack_21c * local_158;
      fStack_3b4 = fStack_214 * fStack_254 + local_218 * fStack_264 + fStack_210 * fStack_244 +
                   fStack_21c * fStack_154;
      fStack_3b0 = fStack_214 * fStack_250 + local_218 * fStack_260 + fStack_210 * fStack_240 +
                   fStack_21c * fStack_150;
      fStack_3ac = fStack_214 * fStack_25c + local_218 * fStack_25c + fStack_210 * fStack_25c +
                   fStack_21c * fRam0000000146b2ff7c;
      local_3a8 = fStack_204 * local_258 + local_208 * local_268 + fStack_200 * local_248 +
                  fStack_21c * local_158;
      fStack_3a4 = fStack_204 * fStack_254 + local_208 * fStack_264 + fStack_200 * fStack_244 +
                   fStack_21c * fStack_154;
      fStack_3a0 = fStack_204 * fStack_250 + local_208 * fStack_260 + fStack_200 * fStack_240 +
                   fStack_21c * fStack_150;
      fStack_39c = fStack_204 * fStack_25c + local_208 * fStack_25c + fStack_200 * fStack_25c +
                   fStack_21c * fRam0000000146b2ff7c;
      local_398 = fStack_1f4 * local_258 + local_1f8 * local_268 + fStack_1f0 * local_248 +
                  fRam0000000146b2ff7c * local_158;
      fStack_394 = fStack_1f4 * fStack_254 + local_1f8 * fStack_264 + fStack_1f0 * fStack_244 +
                   fRam0000000146b2ff7c * fStack_154;
      fStack_390 = fStack_1f4 * fStack_250 + local_1f8 * fStack_260 + fStack_1f0 * fStack_240 +
                   fRam0000000146b2ff7c * fStack_150;
      fStack_38c = fStack_1f4 * fStack_25c + local_1f8 * fStack_25c + fStack_1f0 * fStack_25c +
                   fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      fStack_24c = fStack_25c;
      fStack_23c = fStack_25c;
      fStack_20c = fStack_21c;
      fStack_1fc = fStack_21c;
      FMatrix::RemoveScaling(&local_3c8);
      fVar36 = (float)((_DAT_146b2ffc0 ^ (uint)fVar36) & -(uint)(fVar43 <= fVar33 * auVar15._0_4_) ^
                      _DAT_146b2ffc0);
      fVar38 = (float)((uRam0000000146b2ffc4 ^ (uint)fVar38) &
                       -(uint)(fVar42 <= fVar37 * auVar15._4_4_) ^ uRam0000000146b2ffc4);
      fVar40 = (float)((uRam0000000146b2ffc8 ^ (uint)fVar40) &
                       -(uint)(fVar29 <= fVar39 * auVar15._8_4_) ^ uRam0000000146b2ffc8);
      local_3c8 = local_3c8 * fVar36;
      fStack_3c4 = fStack_3c4 * fVar36;
      fStack_3c0 = fStack_3c0 * fVar36;
      fStack_3b4 = fStack_3b4 * fVar38;
      fStack_3b0 = fStack_3b0 * fVar38;
      local_3b8 = local_3b8 * fVar38;
      fStack_3a4 = fStack_3a4 * fVar40;
      fStack_3a0 = fStack_3a0 * fVar40;
      local_3a8 = local_3a8 * fVar40;
      uVar13 = FQuat::FQuat(&local_428,&local_3c8);
      local_438 = 0x322bcc77;
      auVar21._0_4_ = local_428 * local_428 + fStack_420 * fStack_420;
      auVar21._4_4_ = fStack_424 * fStack_424 + fStack_41c * fStack_41c;
      auVar21._8_4_ = fStack_420 * fStack_420 + local_428 * local_428;
      auVar21._12_4_ = fStack_41c * fStack_41c + fStack_424 * fStack_424;
      fVar29 = auVar21._4_4_ + auVar21._0_4_;
      fVar41 = auVar21._8_4_ + auVar21._4_4_;
      fVar24 = auVar21._12_4_ + auVar21._8_4_;
      fVar31 = auVar21._0_4_ + auVar21._12_4_;
      auVar4._4_4_ = fVar41;
      auVar4._0_4_ = fVar29;
      auVar4._8_4_ = fVar24;
      auVar4._12_4_ = fVar31;
      auVar17 = rsqrtps(auVar21,auVar4);
      fVar38 = auVar17._0_4_;
      fVar40 = auVar17._4_4_;
      fVar43 = auVar17._8_4_;
      fVar42 = auVar17._12_4_;
      fVar38 = (_DAT_146b2ff60 - fVar38 * fVar38 * fVar29 * _DAT_146b2ff60) * fVar38 + fVar38;
      fVar40 = (fRam0000000146b2ff64 - fVar40 * fVar40 * fVar41 * fRam0000000146b2ff64) * fVar40 +
               fVar40;
      fVar43 = (fRam0000000146b2ff68 - fVar43 * fVar43 * fVar24 * fRam0000000146b2ff68) * fVar43 +
               fVar43;
      fVar42 = (fRam0000000146b2ff6c - fVar42 * fVar42 * fVar31 * fRam0000000146b2ff6c) * fVar42 +
               fVar42;
      fVar36 = 0.0;
      local_348 = (float)(((uint)(((_DAT_146b2ff60 - fVar38 * fVar38 * fVar29 * _DAT_146b2ff60) *
                                   fVar38 + fVar38) * local_428) ^ _DAT_146b2ff50) &
                          -(uint)(1e-08 <= fVar29) ^ _DAT_146b2ff50);
      fStack_344 = (float)(((uint)(((fRam0000000146b2ff64 -
                                    fVar40 * fVar40 * fVar41 * fRam0000000146b2ff64) * fVar40 +
                                   fVar40) * fStack_424) ^ uRam0000000146b2ff54) &
                           -(uint)(1e-08 <= fVar41) ^ uRam0000000146b2ff54);
      fStack_340 = (float)(((uint)(((fRam0000000146b2ff68 -
                                    fVar43 * fVar43 * fVar24 * fRam0000000146b2ff68) * fVar43 +
                                   fVar43) * fStack_420) ^ uRam0000000146b2ff58) &
                           -(uint)(1e-08 <= fVar24) ^ uRam0000000146b2ff58);
      fStack_33c = (float)(((uint)(((fRam0000000146b2ff6c -
                                    fVar42 * fVar42 * fVar31 * fRam0000000146b2ff6c) * fVar42 +
                                   fVar42) * fStack_41c) ^ uRam0000000146b2ff5c) &
                           -(uint)(1e-08 <= fVar31) ^ uRam0000000146b2ff5c);
      local_1b8 = local_398;
      fStack_1b4 = fStack_394;
      fStack_1b0 = fStack_390;
    }
    fVar41 = fRam0000000146b2ffd8;
    fVar29 = fRam0000000146b2ffd4;
    fVar42 = _DAT_146b2ffd0;
    fVar43 = fRam0000000146b2ff78;
    fVar40 = fRam0000000146b2ff74;
    fVar38 = _DAT_146b2ff70;
    fStack_31c = fVar23 * auVar15._12_4_;
    fVar39 = fVar39 * auVar15._8_4_;
    fVar37 = fVar37 * auVar15._4_4_;
    fVar33 = fVar33 * auVar15._0_4_;
    auVar9._4_4_ = fStack_114;
    auVar9._0_4_ = local_118;
    auVar9._8_4_ = fStack_110;
    auVar9._12_4_ = fStack_10c;
    auVar6._4_4_ = fVar37;
    auVar6._0_4_ = fVar33;
    auVar6._8_4_ = fVar39;
    auVar6._12_4_ = fStack_31c;
    auVar15 = minps(auVar9,auVar6);
    local_338 = CONCAT44(fStack_1b4,local_1b8);
    uStack_330 = CONCAT44(fVar36,fStack_1b0);
    auVar19._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146b2ffd4);
    auVar19._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146b2ffd0);
    auVar19._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146b2ffd8);
    auVar19._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146b2ffdc);
    iVar12 = movmskps(uVar13,auVar19);
    if (iVar12 == 0) {
      local_128 = local_128 * fVar33;
      fStack_124 = fStack_124 * fVar37;
      fStack_120 = fStack_120 * fVar39;
      fVar33 = fStack_120 * fStack_344 - fStack_124 * fStack_340;
      fVar37 = local_128 * fStack_340 - fStack_120 * local_348;
      fVar39 = fStack_124 * local_348 - local_128 * fStack_344;
      fVar33 = fVar33 + fVar33;
      fVar37 = fVar37 + fVar37;
      fVar39 = fVar39 + fVar39;
      local_358 = (fVar39 * fStack_344 - fVar37 * fStack_340) + fStack_33c * fVar33 + local_128 +
                  local_1b8;
      fStack_354 = (fVar33 * fStack_340 - fVar39 * local_348) + fStack_33c * fVar37 + fStack_124 +
                   fStack_1b4;
      fStack_350 = (fVar37 * local_348 - fVar33 * fStack_344) + fStack_33c * fVar39 + fStack_120 +
                   fStack_1b0;
    }
    else {
      fVar23 = fStack_344 + fStack_344;
      fVar36 = fStack_340 + fStack_340;
      fVar24 = (local_348 + local_348) * local_348;
      fVar31 = fStack_33c * (local_348 + local_348);
      fStack_1e4 = (fStack_33c * fVar36 + local_348 * fVar23) * fVar33;
      fStack_1d0 = (fVar31 + fStack_344 * fVar36) * fVar37;
      local_1c8 = (fStack_33c * fVar23 + local_348 * fVar36) * fVar39;
      local_1d8 = fVar37 * (local_348 * fVar23 - fStack_33c * fVar36);
      fStack_1c4 = fVar39 * (fStack_344 * fVar36 - fVar31);
      fStack_1e0 = fVar33 * (local_348 * fVar36 - fStack_33c * fVar23);
      local_1e8 = (float)((uint)((_DAT_146b2ff70 - (fVar36 * fStack_340 + fVar23 * fStack_344)) *
                                fVar33) & _DAT_146b2ff80);
      fStack_1d4 = (float)((uint)((fRam0000000146b2ff74 - (fVar36 * fStack_340 + fVar24)) * fVar37)
                          & uRam0000000146b2ff84);
      fStack_1c0 = (float)((uint)((fRam0000000146b2ff78 - (fVar23 * fStack_344 + fVar24)) * fVar39)
                          & uRam0000000146b2ff88);
      fStack_1dc = (float)((uint)((fRam0000000146b2ff7c - (fVar24 + fVar24)) * fStack_31c) &
                          uRam0000000146b2ff8c);
      fVar23 = fStack_134 + fStack_134;
      fVar36 = fStack_130 + fStack_130;
      fStack_1ac = fRam0000000146b2ff7c;
      fVar31 = (local_138 + local_138) * local_138;
      fVar24 = fStack_12c * (local_138 + local_138);
      fStack_1a4 = (fStack_12c * fVar36 + local_138 * fVar23) * local_118;
      fStack_190 = (fVar24 + fStack_134 * fVar36) * fStack_114;
      local_188 = (fStack_12c * fVar23 + local_138 * fVar36) * fStack_110;
      local_198 = fStack_114 * (local_138 * fVar23 - fStack_12c * fVar36);
      fStack_184 = fStack_110 * (fStack_134 * fVar36 - fVar24);
      fStack_1a0 = local_118 * (local_138 * fVar36 - fStack_12c * fVar23);
      local_1a8 = (float)((uint)((_DAT_146b2ff70 - (fVar36 * fStack_130 + fVar23 * fStack_134)) *
                                local_118) & _DAT_146b2ff80);
      fStack_194 = (float)((uint)((fRam0000000146b2ff74 - (fVar36 * fStack_130 + fVar31)) *
                                 fStack_114) & uRam0000000146b2ff84);
      fStack_180 = (float)((uint)((fRam0000000146b2ff78 - (fVar23 * fStack_134 + fVar31)) *
                                 fStack_110) & uRam0000000146b2ff88);
      fStack_19c = (float)((uint)((fRam0000000146b2ff7c - (fVar31 + fVar31)) * fStack_10c) &
                          uRam0000000146b2ff8c);
      local_178 = local_128;
      fStack_174 = fStack_124;
      fStack_170 = fStack_120;
      fStack_16c = fRam0000000146b2ff7c;
      local_388 = fStack_1a4 * local_1d8 + local_1a8 * local_1e8 + fStack_1a0 * local_1c8 +
                  fStack_19c * local_1b8;
      fStack_384 = fStack_1a4 * fStack_1d4 + local_1a8 * fStack_1e4 + fStack_1a0 * fStack_1c4 +
                   fStack_19c * fStack_1b4;
      fStack_380 = fStack_1a4 * fStack_1d0 + local_1a8 * fStack_1e0 + fStack_1a0 * fStack_1c0 +
                   fStack_19c * fStack_1b0;
      fStack_37c = fStack_1a4 * fStack_1dc + local_1a8 * fStack_1dc + fStack_1a0 * fStack_1dc +
                   fStack_19c * fRam0000000146b2ff7c;
      local_378 = fStack_194 * local_1d8 + local_198 * local_1e8 + fStack_190 * local_1c8 +
                  fStack_19c * local_1b8;
      fStack_374 = fStack_194 * fStack_1d4 + local_198 * fStack_1e4 + fStack_190 * fStack_1c4 +
                   fStack_19c * fStack_1b4;
      fStack_370 = fStack_194 * fStack_1d0 + local_198 * fStack_1e0 + fStack_190 * fStack_1c0 +
                   fStack_19c * fStack_1b0;
      fStack_36c = fStack_194 * fStack_1dc + local_198 * fStack_1dc + fStack_190 * fStack_1dc +
                   fStack_19c * fRam0000000146b2ff7c;
      local_368 = fStack_184 * local_1d8 + local_188 * local_1e8 + fStack_180 * local_1c8 +
                  fStack_19c * local_1b8;
      fStack_364 = fStack_184 * fStack_1d4 + local_188 * fStack_1e4 + fStack_180 * fStack_1c4 +
                   fStack_19c * fStack_1b4;
      fStack_360 = fStack_184 * fStack_1d0 + local_188 * fStack_1e0 + fStack_180 * fStack_1c0 +
                   fStack_19c * fStack_1b0;
      fStack_35c = fStack_184 * fStack_1dc + local_188 * fStack_1dc + fStack_180 * fStack_1dc +
                   fStack_19c * fRam0000000146b2ff7c;
      local_358 = fStack_124 * local_1d8 + local_128 * local_1e8 + fStack_120 * local_1c8 +
                  fRam0000000146b2ff7c * local_1b8;
      fStack_354 = fStack_124 * fStack_1d4 + local_128 * fStack_1e4 + fStack_120 * fStack_1c4 +
                   fRam0000000146b2ff7c * fStack_1b4;
      fStack_350 = fStack_124 * fStack_1d0 + local_128 * fStack_1e0 + fStack_120 * fStack_1c0 +
                   fRam0000000146b2ff7c * fStack_1b0;
      fStack_34c = fStack_124 * fStack_1dc + local_128 * fStack_1dc + fStack_120 * fStack_1dc +
                   fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      local_328 = fVar33;
      fStack_324 = fVar37;
      fStack_320 = fVar39;
      fStack_1cc = fStack_1dc;
      fStack_1bc = fStack_1dc;
      fStack_18c = fStack_19c;
      fStack_17c = fStack_19c;
      FMatrix::RemoveScaling(&local_388);
      fVar33 = (float)(-(uint)(fVar42 <= local_118 * fVar33) & (_DAT_146b2ffc0 ^ (uint)fVar38) ^
                      _DAT_146b2ffc0);
      fVar37 = (float)(-(uint)(fVar29 <= fStack_114 * fVar37) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar40) ^ uRam0000000146b2ffc4);
      fVar39 = (float)(-(uint)(fVar41 <= fStack_110 * fVar39) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar43) ^ uRam0000000146b2ffc8);
      local_388 = local_388 * fVar33;
      fStack_384 = fStack_384 * fVar33;
      fStack_380 = fStack_380 * fVar33;
      fStack_374 = fStack_374 * fVar37;
      fStack_370 = fStack_370 * fVar37;
      local_378 = local_378 * fVar37;
      fStack_364 = fStack_364 * fVar39;
      fStack_360 = fStack_360 * fVar39;
      local_368 = local_368 * fVar39;
      FQuat::FQuat(&local_428,&local_388);
    }
    uVar11 = DAT_1464aa790;
    uVar10 = DAT_1464aa788._4_4_;
    uVar13 = (undefined4)DAT_1464aa788;
    fVar33 = *param_3;
    fVar37 = param_3[1];
    fVar39 = param_3[2];
    fVar23 = param_3[3];
    fVar38 = -local_168;
    fVar36 = -fStack_164;
    fVar42 = fVar23 * local_168 * fVar26 + fStack_15c * fVar33 +
             fVar39 * fStack_164 * _DAT_146b2ffa0 + fVar37 * fStack_160 * _DAT_146b2ff90;
    fVar29 = fVar39 * local_168 * fVar27 + fStack_15c * fVar37 +
             fVar23 * fStack_164 * fRam0000000146b2ffa4 + fVar33 * fStack_160 * fRam0000000146b2ff94
    ;
    fVar41 = fVar37 * local_168 * fVar28 + fStack_15c * fVar39 +
             fVar33 * fStack_164 * fRam0000000146b2ffa8 + fVar23 * fStack_160 * fRam0000000146b2ff98
    ;
    fVar24 = fVar33 * local_168 * fVar30 + fStack_15c * fVar23 +
             fVar37 * fStack_164 * fRam0000000146b2ffac + fVar39 * fStack_160 * fRam0000000146b2ff9c
    ;
    fStack_160 = -fStack_160;
    fVar23 = fVar38 * fVar41 * fRam0000000146b2ff94;
    fVar40 = fStack_15c * fVar41 * fRam0000000146b2ff98;
    fVar43 = fStack_160 * fVar41 * fRam0000000146b2ff9c;
    fVar33 = fStack_15c * fVar29 * fRam0000000146b2ffa4;
    fVar37 = fVar38 * fVar29 * fRam0000000146b2ffa8;
    fVar39 = fVar36 * fVar29 * fRam0000000146b2ffac;
    *param_2 = fStack_15c * fVar42 * fVar26 + fVar24 * fVar38 + fStack_160 * fVar29 * _DAT_146b2ffa0
               + fVar36 * fVar41 * _DAT_146b2ff90;
    param_2[1] = fStack_160 * fVar42 * fVar27 + fVar24 * fVar36 + fVar33 + fVar23;
    param_2[2] = fVar36 * fVar42 * fVar28 + fVar24 * fStack_160 + fVar37 + fVar40;
    param_2[3] = fVar38 * fVar42 * fVar30 + fVar24 * fStack_15c + fVar39 + fVar43;
    auVar5._4_4_ = fStack_354 - local_f8._4_4_;
    auVar5._0_4_ = local_358 - (float)local_f8;
    auVar5._8_4_ = fStack_350 - (float)uStack_f0;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar5;
    auVar2._4_4_ = uVar10;
    auVar2._0_4_ = uVar13;
    auVar2._8_4_ = uVar11;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 8) = auVar2;
  }
  else {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      FUN_1423407b0(param_1);
    }
    FUN_142ca0ad0(param_1 + 0x10c8,param_2,&local_108);
  }
  return param_2;
}



// FUNCTION 142c97580 FUN_142c97580 body=115 status=ok
// SIG undefined FUN_142c97580(void)

void FUN_142c97580(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_142e5c1e0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar3 != 0) {
      *(undefined4 *)(param_1 + 0xf68) = *(undefined4 *)(lVar3 + 0xf68);
      uVar1 = *(undefined8 *)(lVar3 + 0xf38);
      iVar2 = FUN_14233f450(param_1);
      if (iVar2 == 3) {
        FUN_142350b20(param_1,1);
        *(undefined8 *)(param_1 + 0xf38) = uVar1;
        FUN_142c95f90(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142c97600 FUN_142c97600 body=88 status=ok
// SIG undefined FUN_142c97600(void)

undefined8 * FUN_142c97600(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x6d0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14084bd40(puVar1);
    *(undefined1 *)(puVar1 + 0xd7) = 1;
    *puVar1 = &PTR__scalar_deleting_destructor__145845238;
    puVar1[0xd8] = param_1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142c97660 FUN_142c97660 body=455 status=ok
// SIG undefined FUN_142c97660(void)

void FUN_142c97660(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_128;
  uint local_120;
  uint local_11c;
  undefined1 local_118 [240];
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x1a0);
    puVar11 = (undefined8 *)0x0;
    iVar9 = 0;
    local_128 = (undefined8 *)0x0;
    local_11c = 0;
    plVar1 = plVar6 + *(int *)(param_1 + 0x1a8);
    puVar7 = puVar11;
    puVar8 = puVar11;
    puVar10 = puVar11;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        lVar4 = UGCombatTextWidget::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar9 = (int)puVar7;
          local_120 = iVar9 + 1;
          if ((int)puVar8 < (int)local_120) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,puVar7);
            puVar8 = (undefined8 *)(ulonglong)local_11c;
            puVar10 = local_128;
          }
          puVar7 = (undefined8 *)(ulonglong)local_120;
          puVar10[iVar9] = lVar2;
        }
      }
      iVar9 = (int)puVar7;
    }
    plVar1 = (longlong *)(param_1 + 0xf70);
    *(undefined4 *)(param_1 + 0xf78) = 0;
    if (*(int *)(param_1 + 0xf7c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
    puVar7 = (undefined8 *)((ulonglong)((longlong)(puVar10 + iVar9) + (7 - (longlong)puVar10)) >> 3)
    ;
    if (puVar10 + iVar9 < puVar10) {
      puVar7 = puVar11;
    }
    puVar8 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar5 = FUN_142ca5ee0(*puVar8,local_118);
        iVar9 = *(int *)(param_1 + 0xf78);
        *(int *)(param_1 + 0xf78) = iVar9 + 1;
        if (*(int *)(param_1 + 0xf7c) < iVar9 + 1) {
          FUN_140a131a0(plVar1,iVar9);
        }
        FUN_142c623c0((longlong)iVar9 * 0xe8 + *plVar1,uVar5);
        puVar8 = puVar8 + 1;
        puVar11 = (undefined8 *)((longlong)puVar11 + 1);
      } while (puVar11 != puVar7);
    }
    *(undefined1 *)(param_1 + 0xf6d) = 1;
    if (puVar10 != (undefined8 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  return;
}



// FUNCTION 142c97830 FUN_142c97830 body=92 status=ok
// SIG undefined FUN_142c97830(void)

void FUN_142c97830(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145848cc8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_145848d10;
  }
  return;
}



// FUNCTION 142c97890 FUN_142c97890 body=452 status=ok
// SIG undefined FUN_142c97890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c97890(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar6;
  
  plVar8 = (longlong *)0x0;
  puVar5 = DAT_146b30d28;
  if (DAT_146b30d28 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FMemory::Malloc(0x3800,0);
    plVar6 = plVar8;
    puVar10 = puVar5;
    do {
      iVar4 = (int)plVar6;
      uVar3 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)uVar3;
      puVar9 = (undefined8 *)((ulonglong)(uint)((iVar4 + 1) * 0x70) + (longlong)puVar5);
      *puVar10 = puVar9;
      puVar10 = puVar9;
    } while (uVar3 < 0x7f);
    *puVar9 = DAT_146b30d28;
    _DAT_146b30d30 = _DAT_146b30d30 + 0x80;
  }
  DAT_146b30d28 = (undefined8 *)*puVar5;
  _DAT_146b30d34 = _DAT_146b30d34 + 1;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_145848690;
  FWeakObjectPtr::operator=(puVar5 + 3,param_2);
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *puVar5 = &PTR_FUN_1458486c0;
  *(undefined4 *)(puVar5 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 100) = 0;
  *(undefined4 *)(puVar5 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x6c) = 0;
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)puVar5;
    plVar6 = plVar7;
  }
  *param_1 = puVar5;
  param_1[1] = plVar6;
  plVar7 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          return param_1;
        }
      }
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)puVar5;
    plVar8 = (longlong *)plVar7[1];
    if (plVar6 != plVar8) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142c97a60 FUN_142c97a60 body=494 status=ok
// SIG undefined FUN_142c97a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c97a60(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  plVar6 = (longlong *)0x0;
  puVar4 = DAT_146b30d38;
  if (DAT_146b30d38 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FMemory::Malloc(0x18000,0);
    plVar8 = plVar6;
    puVar10 = puVar4;
    do {
      iVar3 = (int)plVar8;
      plVar8 = (longlong *)(ulonglong)(iVar3 + 3U);
      puVar7 = (undefined8 *)((ulonglong)(uint)((iVar3 + 2) * 0x60) + (longlong)puVar4);
      puVar9 = (undefined8 *)((ulonglong)(iVar3 * 0x60 + 0x60) + (longlong)puVar4);
      *puVar10 = puVar9;
      puVar10 = (undefined8 *)((ulonglong)(iVar3 * 0x60 + 0x120) + (longlong)puVar4);
      *puVar9 = puVar7;
      *puVar7 = puVar10;
    } while (iVar3 + 3U < 0x3ff);
    *puVar10 = DAT_146b30d38;
    _DAT_146b30d40 = _DAT_146b30d40 + 0x400;
  }
  DAT_146b30d38 = (undefined8 *)*puVar4;
  _DAT_146b30d44 = _DAT_146b30d44 + 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_145848690;
  FWeakObjectPtr::operator=(puVar4 + 3,param_2);
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *puVar4 = &PTR_FUN_1458486f0;
  plVar5 = (longlong *)operator_new(0x18);
  plVar8 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)puVar4;
    plVar8 = plVar5;
  }
  *param_1 = puVar4;
  param_1[1] = plVar8;
  plVar5 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar8 = (longlong *)param_1[1];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)puVar4;
    plVar6 = (longlong *)plVar5[1];
    if (plVar8 != plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142c97c50 FUN_142c97c50 body=7 status=ok
// SIG undefined FUN_142c97c50(void)

void FUN_142c97c50(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf30) = param_2;
  return;
}



// FUNCTION 142c97c60 FUN_142c97c60 body=461 status=ok
// SIG undefined FUN_142c97c60(void)

void FUN_142c97c60(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  void *local_48;
  ulonglong local_40;
  longlong local_38 [4];
  
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"skipstartupassets");
  if (cVar1 == '\0') {
    local_48 = (void *)0x0;
    local_40 = 0;
    uVar2 = FUN_1422ca050();
    FUN_142c97e30(uVar2,&local_48);
    pvVar6 = (void *)((longlong)(int)local_40 * 0x58 + (longlong)local_48);
    for (pvVar7 = local_48; pvVar7 != pvVar6; pvVar7 = (void *)((longlong)pvVar7 + 0x58)) {
      puVar3 = (undefined8 *)FName::ToString((longlong)pvVar7 + 8,local_38 + 2);
      iVar5 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
      }
      puVar4 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_1);
      *puVar4 = 0;
      *puVar4 = *puVar3;
      *puVar3 = 0;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
      if (local_38[2] != 0) {
        FMemory::Free();
      }
    }
    FUN_1404be960(&local_48);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (DAT_1468b6148 != 0) {
    cVar1 = FConfigCacheIni::GetString
                      (DAT_1468b6148,L"GlobalsData",L"GlobalsDataObjectName",local_38,&DAT_1468e2360
                      );
    if (cVar1 != '\0') {
      FPackageName::ExportTextPathToObjectPath(&local_48,local_38);
      iVar5 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
      }
      pvVar7 = local_48;
      puVar3 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_1);
      *puVar3 = 0;
      iVar5 = (int)local_40;
      *(int *)(puVar3 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,local_40 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar7,(longlong)iVar5 * 2);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142c97e30 FUN_142c97e30 body=1038 status=ok
// SIG undefined FUN_142c97e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c97e30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *_Src;
  bool bVar5;
  undefined2 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  longlong local_188 [2];
  undefined2 *local_178;
  undefined8 local_170;
  longlong local_168 [4];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  void *local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b30e10) {
    _Init_thread_header(&DAT_146b30e10);
    if (DAT_146b30e10 == -1) {
      FName::FName(&DAT_146b30e08,L"Blueprint",1);
      _Init_thread_footer(&DAT_146b30e10);
    }
  }
  puVar8 = (undefined8 *)FName::FName(local_148,L"AssetRegistry",1);
  uVar4 = *puVar8;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FUN_141690010(uVar9,uVar4);
  if (DAT_1466ad030 == '\0') {
    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
    (**(code **)(*plVar11 + 0xf8))(plVar11,1);
    DAT_1466ad030 = '\x01';
  }
  local_168[0] = 0;
  local_168[1] = 0;
  cVar7 = FUN_142d82130(local_168);
  if (cVar7 != '\0') {
    local_178 = (undefined2 *)0x0;
    local_170 = 0;
    local_168[2] = 0;
    local_168[3] = 0;
    local_188[0] = 0;
    local_188[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
    lVar12 = local_188[0];
    FGenericPlatformString::Memcpy(local_188[0],&DAT_14584054c,4);
    local_190 = 0;
    local_198 = 1;
    FUN_1404e14f0(local_168,local_188,local_188 + 2,local_168 + 2);
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
    puVar6 = local_178;
    puVar14 = &DAT_143f3eda8;
    if ((int)local_170 != 0) {
      puVar14 = local_178;
    }
    lVar12 = *plVar11;
    puVar8 = (undefined8 *)FName::FName(local_188,puVar14,1);
    (**(code **)(lVar12 + 0x18))(plVar11,*puVar8,param_2,1);
    if (local_168[2] != 0) {
      FMemory::Free();
    }
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x3e0);
  iVar2 = *(int *)(param_1 + 1000);
  if (plVar11 != plVar11 + (longlong)iVar2 * 7) {
    plVar15 = plVar11 + 4;
    do {
      if (*plVar15 == 0) {
        lVar12 = FUN_141796df0(plVar15 + -3);
        if (lVar12 == 0) {
LAB_142c9805d:
          lVar12 = FSoftObjectPath::TryLoad(plVar15 + -3);
          if (lVar12 != 0) {
            lVar13 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) goto LAB_142c980a4;
          }
          lVar12 = *plVar15;
        }
        else {
          lVar13 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_142c9805d;
LAB_142c980a4:
          *plVar15 = lVar12;
        }
        if (lVar12 != 0) goto LAB_142c980b1;
      }
      else {
LAB_142c980b1:
        FUN_142c98240(param_1,plVar15 + -4,param_2);
      }
      plVar1 = plVar15 + 3;
      plVar15 = plVar15 + 7;
    } while (plVar1 != plVar11 + (longlong)iVar2 * 7);
  }
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_c8 = 0xffffffff;
  local_78 = 0xffffffff;
  if (&local_118 != (void **)(param_1 + 0x3f0)) {
    uVar3 = *(uint *)(param_1 + 0x3f8);
    _Src = *(void **)(param_1 + 0x3f0);
    local_110 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_118,uVar3,0);
      _guard_xfg_dispatch_icall_nop(local_118,_Src,(longlong)(int)uVar3 << 3);
    }
  }
  local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
  (**(code **)(*plVar10 + 0x40))(plVar10,&local_138,param_2);
  FARFilter::~FARFilter(&local_138);
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c98240 FUN_142c98240 body=1500 status=ok
// SIG undefined FUN_142c98240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c98240(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined2 *local_170;
  int local_168;
  undefined4 local_160 [2];
  undefined8 *local_158;
  undefined1 local_150 [8];
  longlong local_148 [2];
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_190 = param_2;
  local_178 = param_3;
  puVar6 = (undefined8 *)FName::FName(local_150,L"AssetRegistry",1);
  uVar9 = *puVar6;
  uVar7 = FUN_14168dc80();
  local_180 = (longlong *)FUN_141690010(uVar7,uVar9);
  uVar21 = 0;
  local_1a8 = (longlong *)0x0;
  local_1a0 = 1;
  lVar8 = FUN_142ca0740(param_2);
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  plVar20 = local_1a8;
  *local_1a8 = lVar8;
  if ((char)param_2[5] == '\0') {
    iVar5 = (int)local_1a0;
  }
  else {
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    uVar9 = FUN_142ca0740(param_2);
    FUN_1417a5100(uVar9,&local_1b8,1);
    uVar18 = (ulonglong)((longlong)(local_1b8 + (int)local_1b0) + (7 - (longlong)local_1b8)) >> 3;
    if (local_1b8 + (int)local_1b0 < local_1b8) {
      uVar18 = uVar21;
    }
    plVar19 = local_1b8;
    iVar5 = (int)local_1a0;
    if (uVar18 != 0) {
      do {
        lVar8 = *plVar19;
        if ((*(uint *)(lVar8 + 0xb4) >> 7 & 1) != 0) {
          for (plVar10 = plVar20; plVar10 != plVar20 + iVar5; plVar10 = plVar10 + 1) {
            if (*plVar10 == lVar8) {
              if ((int)((longlong)plVar10 - (longlong)plVar20 >> 3) != -1) goto LAB_142c983bc;
              break;
            }
          }
          lVar13 = (longlong)iVar5;
          iVar15 = iVar5 + 1;
          local_1a0 = CONCAT44(local_1a0._4_4_,iVar15);
          if (local_1a0._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar5);
            plVar20 = local_1a8;
            iVar15 = (int)local_1a0;
          }
          iVar5 = iVar15;
          plVar20[lVar13] = lVar8;
        }
LAB_142c983bc:
        uVar21 = uVar21 + 1;
        param_2 = local_190;
        plVar19 = plVar19 + 1;
      } while (uVar21 != uVar18);
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  plVar19 = plVar20 + iVar5;
  plVar10 = plVar20;
  local_188 = plVar19;
  if (plVar20 != plVar19) {
    local_198 = 0;
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar8 = *plVar20;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = (undefined8 *)0x0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (undefined1 *)0x0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0x10101;
      if ((char)param_2[5] == '\0') {
        uVar9 = *(undefined8 *)(lVar8 + 0x18);
        local_100 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,0);
        *local_108 = uVar9;
      }
      else {
        if ((*(int *)(*plVar1 + 0x38) < DAT_146b30e20) &&
           (_Init_thread_header(&DAT_146b30e20), DAT_146b30e20 == -1)) {
          FName::FName(&DAT_146b30e18,L"NativeParentClass",1);
          _Init_thread_footer(&DAT_146b30e20);
        }
        lVar13 = UBlueprint::GetPrivateStaticClass();
        uVar21 = local_100;
        lVar14 = (longlong)(int)local_100;
        uVar9 = *(undefined8 *)(lVar13 + 0x18);
        iVar5 = (int)local_100 + 1;
        local_100 = CONCAT44(local_100._4_4_,iVar5);
        if (local_100._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_108,uVar21 & 0xffffffff);
        }
        local_108[lVar14] = uVar9;
        puVar6 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar8,local_148,0);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar6;
        }
        lVar8 = FUN_14171bfe0();
        local_198 = *(undefined8 *)(lVar8 + 0x18);
        FName::ToString(&local_198,&local_170);
        puVar17 = &DAT_143f3eda8;
        if (local_168 != 0) {
          puVar17 = local_170;
        }
        FString::PrintfImpl(&local_1b8,L"%s\'%s\'",puVar17,puVar12);
        plVar19 = local_1b8;
        uVar2 = (int)local_1b0;
        uVar3 = local_1b0._4_4_;
        local_1b8 = (longlong *)0x0;
        local_1b0 = 0;
        TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::AddUninitialized(&local_f8,local_160);
        puVar6 = local_158;
        *local_158 = DAT_146b30e18;
        local_158[1] = plVar19;
        *(undefined4 *)(local_158 + 2) = uVar2;
        *(undefined4 *)((longlong)local_158 + 0x14) = uVar3;
        *(undefined1 *)(local_158 + 3) = 1;
        *(undefined4 *)(local_158 + 4) = 0xffffffff;
        cVar4 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
                ::ConditionalRehash(&local_f8,(int)local_f0 - local_c4,0);
        if (cVar4 == '\0') {
          uVar16 = (int)((ulonglong)*puVar6 >> 0x20) + (int)*puVar6 & local_b0 - 1U;
          *(uint *)((longlong)puVar6 + 0x24) = uVar16;
          puVar11 = local_c0;
          if (local_b8 != (undefined1 *)0x0) {
            puVar11 = local_b8;
          }
          *(undefined4 *)(puVar6 + 4) =
               *(undefined4 *)(puVar11 + (longlong)(int)(local_b0 - 1U & uVar16) * 4);
          puVar11 = local_c0;
          if (local_b8 != (undefined1 *)0x0) {
            puVar11 = local_b8;
          }
          *(undefined4 *)(puVar11 + (longlong)(int)(local_b0 - 1U & uVar16) * 4) = local_160[0];
        }
        if (local_1b8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_170 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        param_2 = local_190;
        plVar19 = local_188;
        if (local_148[0] != 0) {
          FMemory::Free();
          param_2 = local_190;
          plVar19 = local_188;
        }
      }
      uVar21 = local_120;
      lVar8 = *param_2;
      if (lVar8 != 0) {
        lVar13 = (longlong)(int)local_120;
        iVar5 = (int)local_120 + 1;
        local_120 = CONCAT44(local_120._4_4_,iVar5);
        if (local_120._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_128,uVar21 & 0xffffffff);
          lVar8 = *param_2;
        }
        *(longlong *)(local_128 + lVar13 * 8) = lVar8;
      }
      plVar10 = (longlong *)(**(code **)(*local_180 + 0x48))();
      (**(code **)(*plVar10 + 0x40))(plVar10);
      local_60 = 0;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_a8);
      local_b0 = 0;
      if (local_b8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_f8);
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if (local_108 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      plVar20 = plVar20 + 1;
      plVar10 = local_1a8;
    } while (plVar20 != plVar19);
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  return;
}



// FUNCTION 142c98820 FUN_142c98820 body=10 status=ok
// SIG undefined FUN_142c98820(void)

void FUN_142c98820(undefined8 param_1,longlong param_2)

{
  FUN_14247c3b0(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



// FUNCTION 142c98830 thunk_FUN_14247c3b0 body=5 status=ok
// SIG undefined thunk_FUN_14247c3b0(void)

bool thunk_FUN_14247c3b0(longlong param_1,float param_2)

{
  return ABS(*(float *)(param_1 + 4) - param_2) <= 1e-08;
}



// FUNCTION 142c98840 FUN_142c98840 body=8 status=ok
// SIG undefined FUN_142c98840(void)

void FUN_142c98840(undefined8 param_1,longlong param_2)

{
  FUN_14247c3d0(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



// FUNCTION 142c98850 thunk_FUN_14247c3d0 body=5 status=ok
// SIG undefined thunk_FUN_14247c3d0(void)

bool thunk_FUN_14247c3d0(longlong param_1,int param_2)

{
  return *(int *)(param_1 + 4) == param_2;
}



// FUNCTION 142c98860 FUN_142c98860 body=61 status=ok
// SIG undefined FUN_142c98860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c98860(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = FUN_142caac20(param_1,local_28,param_2);
  FUN_142cc4350(uVar1,0);
  return;
}



// FUNCTION 142c988a0 FUN_142c988a0 body=89 status=ok
// SIG undefined FUN_142c988a0(void)

undefined8 FUN_142c988a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = param_1[0x1f];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar1 = param_1[0x1f];
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_142dfa470(lVar1,param_2);
  return uVar2;
}



// FUNCTION 142c98900 FUN_142c98900 body=72 status=ok
// SIG undefined FUN_142c98900(void)

undefined8 FUN_142c98900(float param_1,undefined8 param_2,float param_3,float param_4)

{
  float _X;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  _X = (float)param_2;
  if (param_3 != 1.0) {
    _X = _guard_xfg_dispatch_icall_nop(_X,param_3);
    uVar1 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar1,(_X + param_4) * param_1);
}



// FUNCTION 142c98950 FUN_142c98950 body=451 status=ok
// SIG undefined FUN_142c98950(void)

void FUN_142c98950(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_res8 [2];
  int local_38 [8];
  
  if ((*(int *)(param_1 + 0x178) != 0) && (*(char *)(*param_2 + 0x6b8) != '\0')) {
    iVar11 = (int)param_2[2];
    plVar1 = param_2 + 1;
    do {
      iVar11 = iVar11 + -1;
      if (iVar11 == -1) break;
      local_res8[0] = iVar11;
      if ((iVar11 != 0) && (*(char *)((longlong)iVar11 + param_2[4]) == '\x01')) {
        FBoneContainer::GetParentBoneIndex(param_2[3],local_38,local_res8);
        FTransform::SetToRelativeTransform
                  ((longlong)local_res8[0] * 0x30 + *plVar1,(longlong)local_38[0] * 0x30 + *plVar1);
        *(undefined1 *)((longlong)local_res8[0] + param_2[4]) = 0;
      }
    } while (*(int *)(*(longlong *)(param_1 + 0x170) + 8) < iVar11);
    lVar12 = *(longlong *)(param_1 + 0x170);
    lVar13 = (longlong)*(int *)(param_1 + 0x178) * 0x20 + lVar12;
    for (; lVar12 != lVar13; lVar12 = lVar12 + 0x20) {
      cVar10 = FBoneReference::IsValidToEvaluate(lVar12,param_4);
      if (cVar10 != '\0') {
        if (*(char *)(lVar12 + 0xc) == '\0') {
          iVar11 = *(int *)(lVar12 + 0x10);
        }
        else if (*(int *)(lVar12 + 8) == -1) {
          iVar11 = -1;
        }
        else {
          iVar11 = *(int *)(*(longlong *)(param_4 + 0x80) + (longlong)*(int *)(lVar12 + 8) * 4);
        }
        lVar14 = (longlong)iVar11;
        if (*(char *)(lVar14 + param_2[4]) == '\0') {
          FUN_14060c680(plVar1);
        }
        lVar5 = *plVar1;
        fVar16 = *(float *)(lVar12 + 0x1c);
        puVar2 = (undefined8 *)(lVar5 + lVar14 * 0x30);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar14 * 0x30);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        pfVar4 = (float *)(lVar5 + 0x20 + lVar14 * 0x30);
        fVar17 = fVar16;
        fVar15 = fVar16;
        if (*(char *)(lVar12 + 0x18) != '\0') {
          fVar15 = pfVar4[2] * fVar16;
          fVar17 = *pfVar4 * fVar16;
          fVar16 = pfVar4[1] * fVar16;
        }
        puVar3 = (undefined8 *)(lVar5 + lVar14 * 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14 * 0x30);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        auVar6._4_4_ = fVar16;
        auVar6._0_4_ = fVar17;
        auVar6._8_4_ = fVar15;
        auVar6._12_4_ = 0;
        *(undefined1 (*) [16])(lVar5 + 0x20 + lVar14 * 0x30) = auVar6;
        *(undefined1 *)(lVar14 + param_2[4]) = 1;
      }
    }
  }
  return;
}



// FUNCTION 142c98b20 FUN_142c98b20 body=2515 status=ok
// SIG undefined FUN_142c98b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c98b20(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined1 auStack_298 [32];
  undefined4 local_278;
  char local_268;
  float local_260;
  longlong local_258;
  ulonglong local_250;
  ulonglong local_248;
  int local_240 [2];
  longlong local_238;
  undefined8 local_228;
  float fStack_220;
  float fStack_21c;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  float local_1f0;
  longlong local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar11 = *param_2;
  plVar1 = param_2 + 1;
  local_1d8 = param_2[3];
  bVar6 = false;
  local_f8 = *(undefined8 *)(lVar11 + 0x10);
  uStack_f0 = *(undefined8 *)(lVar11 + 0x18);
  uVar16 = 0;
  iVar14 = *(int *)(param_1 + 0x160);
  uVar15 = 0xffffffffffffffff;
  local_e8 = *(undefined8 *)(lVar11 + 0x20);
  uStack_e0 = *(undefined8 *)(lVar11 + 0x28);
  local_d8 = *(undefined8 *)(lVar11 + 0x30);
  uStack_d0 = *(undefined8 *)(lVar11 + 0x38);
  _local_158 = ZEXT812(0);
  uStack_150._4_4_ = (float)uRam0000000146b2ff7c;
  local_248 = 0xffffffffffffffff;
  _local_148 = ZEXT816(0);
  local_138._4_4_ = uRam0000000146b2ff74 & uRam0000000146b2ff84;
  local_138._0_4_ = _DAT_146b2ff70 & _DAT_146b2ff80;
  fStack_130 = (float)(uRam0000000146b2ff78 & uRam0000000146b2ff88);
  fStack_12c = (float)(uRam0000000146b2ff7c & uRam0000000146b2ff8c);
  local_268 = '\0';
  local_1d0 = param_3;
  local_1c8 = param_2;
  if (0 < iVar14) {
    local_238 = 0;
    local_258 = -1;
    local_250 = 0xffffffffffffffe0;
    uVar18 = uVar16;
    fVar32 = _DAT_146b2ff60;
    fVar24 = fRam0000000146b2ff64;
    fVar40 = fRam0000000146b2ff68;
    fVar41 = fRam0000000146b2ff6c;
    do {
      lVar11 = *(longlong *)(param_1 + 0x158);
      iVar3 = *(int *)(lVar11 + 0x18 + uVar16);
      iVar17 = (int)uVar18;
      if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x150))) &&
         (iVar3 < *(int *)(*(longlong *)(param_1 + 0x140) + 0x58))) {
        iVar13 = *(int *)(lVar11 + 0x1c + uVar16);
        if (-1 < iVar13) {
          local_1e8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x50);
          local_228 = (longlong)iVar3 * 0x58;
          if (iVar13 < *(int *)(local_228 + 0x50 + local_1e8)) {
            fVar25 = *(float *)((longlong)iVar3 * 0x38 + 0x20 + *(longlong *)(param_1 + 0x148));
            lVar12 = (longlong)iVar13 * 0x30 + *(longlong *)(local_228 + 0x48 + local_1e8);
            local_260 = fVar25;
            if ((fVar25 <= 0.0) || (*(char *)(lVar11 + 0xc + uVar16) != '\0')) {
LAB_142c99343:
              if (local_268 == '\0') goto LAB_142c99443;
            }
            else {
              iVar13 = *(int *)(lVar11 + 0x10 + uVar16);
              if (iVar13 == -1) goto LAB_142c99343;
              if (((iVar17 == 0) || (local_258 == -1)) ||
                 (*(int *)(lVar11 + 8 + local_250) != *(int *)(lVar11 + 8 + uVar16))) {
                local_248 = CONCAT44(local_248._4_4_,iVar13);
                if (((iVar17 == 0) || (local_258 == -1)) ||
                   (*(int *)(lVar11 + 0x18 + local_250) != iVar3)) {
                  iVar14 = (int)param_2[2];
                  do {
                    iVar14 = iVar14 + -1;
                    if (iVar14 == -1) break;
                    FUN_14060d730(plVar1,iVar14);
                    fVar32 = _DAT_146b2ff60;
                    fVar24 = fRam0000000146b2ff64;
                    fVar40 = fRam0000000146b2ff68;
                    fVar41 = fRam0000000146b2ff6c;
                  } while (iVar13 < iVar14);
                }
                local_258 = CONCAT44(local_258._4_4_,iVar13);
                if (*(char *)((longlong)iVar13 + param_2[4]) == '\0') {
LAB_142c98e42:
                  pauVar10 = (undefined1 (*) [16])((longlong)iVar13 * 0x30 + *plVar1);
                  local_128 = *pauVar10;
                  local_118 = *(undefined4 *)pauVar10[1];
                  uStack_114 = *(undefined4 *)(pauVar10[1] + 4);
                  uStack_110 = *(undefined4 *)(pauVar10[1] + 8);
                  uStack_10c = *(undefined4 *)(pauVar10[1] + 0xc);
                  local_138._0_4_ = *(undefined4 *)pauVar10[2];
                  local_138._4_4_ = *(undefined4 *)(pauVar10[2] + 4);
                  fStack_130 = *(float *)(pauVar10[2] + 8);
                  fStack_12c = *(float *)(pauVar10[2] + 0xc);
                }
                else {
                  FBoneContainer::GetParentBoneIndex(param_2[3],local_240,&local_258);
                  lVar11 = (longlong)local_240[0];
                  if (local_240[0] == -1) {
                    fVar32 = _DAT_146b2ff60;
                    fVar24 = fRam0000000146b2ff64;
                    fVar40 = fRam0000000146b2ff68;
                    fVar41 = fRam0000000146b2ff6c;
                    iVar13 = (int)local_258;
                    goto LAB_142c98e42;
                  }
                  if (*(char *)(lVar11 + param_2[4]) == '\0') {
                    FUN_14060c680(plVar1);
                  }
                  FUN_14162bcf0((longlong)(int)local_258 * 0x30 + *plVar1,local_128,
                                lVar11 * 0x30 + *plVar1);
                  local_138._0_4_ = local_108;
                  local_138._4_4_ = uStack_104;
                  fStack_130 = (float)uStack_100;
                  fStack_12c = (float)uStack_fc;
                  fVar32 = _DAT_146b2ff60;
                  fVar24 = fRam0000000146b2ff64;
                  fVar40 = fRam0000000146b2ff68;
                  fVar41 = fRam0000000146b2ff6c;
                }
                local_148._4_4_ = uStack_114;
                local_148._0_4_ = local_118;
                fStack_140 = (float)uStack_110;
                fStack_13c = (float)uStack_10c;
                _local_158 = local_128;
LAB_142c98e72:
                bVar6 = true;
              }
              else if (!bVar6) {
                local_278 = 2;
                FUN_14224c850(&local_f8,plVar1,local_158,uVar15 & 0xffffffff);
                fVar32 = _DAT_146b2ff60;
                fVar24 = fRam0000000146b2ff64;
                fVar40 = fRam0000000146b2ff68;
                fVar41 = fRam0000000146b2ff6c;
                goto LAB_142c98e72;
              }
              if (*(char *)(local_228 + 8 + local_1e8) == '\x01') {
                FRotator::Quaternion(lVar12 + 0x14,&local_1b8);
                fVar32 = local_260;
                fVar24 = *(float *)(lVar12 + 8);
                fVar40 = *(float *)(lVar12 + 0xc);
                fVar41 = *(float *)(lVar12 + 0x10);
                if (*(char *)(param_1 + 0x168) == '\0') {
                  fVar24 = DAT_1468b5d90;
                  fVar40 = DAT_1468b5d94;
                  fVar41 = DAT_1468b5d98;
                }
                fVar27 = local_1b8;
                fVar29 = fStack_1b4;
                fVar31 = fStack_1b0;
                fVar23 = fStack_1ac;
                if (*(char *)(param_1 + 0x169) == '\0') {
                  fVar27 = DAT_1464aa810;
                  fVar29 = DAT_1464aa814;
                  fVar31 = DAT_1464aa818;
                  fVar23 = DAT_1464aa81c;
                }
                fVar35 = DAT_1468b5d98;
                fVar37 = DAT_1468b5d94;
                fVar39 = DAT_1468b5d90;
                if (*(char *)(param_1 + 0x16a) != '\0') {
                  fVar35 = *(float *)(lVar12 + 0x28) - DAT_1464aa790;
                  fVar37 = *(float *)(lVar12 + 0x24) - DAT_1464aa788._4_4_;
                  fVar39 = *(float *)(lVar12 + 0x20) - (float)DAT_1464aa788;
                }
                local_1e8 = local_158;
                fStack_1e0 = (float)uStack_150;
                fStack_1dc = uStack_150._4_4_;
                fStack_220 = (float)local_158._4_4_ * fVar27 * fRam0000000146b2ffb8 +
                             fVar23 * (float)uStack_150 +
                             (float)local_158._0_4_ * fVar29 * fRam0000000146b2ffa8 +
                             uStack_150._4_4_ * fVar31 * fRam0000000146b2ff98;
                fStack_21c = (float)local_158._0_4_ * fVar27 * fRam0000000146b2ffbc +
                             fVar23 * uStack_150._4_4_ +
                             (float)local_158._4_4_ * fVar29 * fRam0000000146b2ffac +
                             (float)uStack_150 * fVar31 * fRam0000000146b2ff9c;
                local_228 = CONCAT44((float)uStack_150 * fVar27 * fRam0000000146b2ffb4 +
                                     fVar23 * (float)local_158._4_4_ +
                                     uStack_150._4_4_ * fVar29 * fRam0000000146b2ffa4 +
                                     (float)local_158._0_4_ * fVar31 * fRam0000000146b2ff94,
                                     uStack_150._4_4_ * fVar27 * _DAT_146b2ffb0 +
                                     fVar23 * (float)local_158._0_4_ +
                                     (float)uStack_150 * fVar29 * _DAT_146b2ffa0 +
                                     (float)local_158._4_4_ * fVar31 * _DAT_146b2ff90);
                pfVar7 = (float *)FQuat::Slerp_NotNormalized(local_188,&local_1e8,&local_228,fVar25)
                ;
                local_260 = 1e-08;
                fVar25 = *pfVar7;
                fVar27 = pfVar7[1];
                fVar29 = pfVar7[2];
                fVar31 = pfVar7[3];
                auVar19._0_4_ = fVar25 * fVar25 + fVar29 * fVar29;
                auVar19._4_4_ = fVar27 * fVar27 + fVar31 * fVar31;
                auVar19._8_4_ = fVar29 * fVar29 + fVar25 * fVar25;
                auVar19._12_4_ = fVar31 * fVar31 + fVar27 * fVar27;
                fVar33 = auVar19._4_4_ + auVar19._0_4_;
                fVar34 = auVar19._8_4_ + auVar19._4_4_;
                fVar36 = auVar19._12_4_ + auVar19._8_4_;
                fVar38 = auVar19._0_4_ + auVar19._12_4_;
                auVar4._4_4_ = fVar34;
                auVar4._0_4_ = fVar33;
                auVar4._8_4_ = fVar36;
                auVar4._12_4_ = fVar38;
                auVar20 = rsqrtps(auVar19,auVar4);
                fVar23 = auVar20._0_4_;
                fVar26 = auVar20._4_4_;
                fVar28 = auVar20._8_4_;
                fVar30 = auVar20._12_4_;
                fVar23 = (_DAT_146b2ff60 - fVar23 * fVar23 * fVar33 * _DAT_146b2ff60) * fVar23 +
                         fVar23;
                fVar26 = (fRam0000000146b2ff64 - fVar26 * fVar26 * fVar34 * fRam0000000146b2ff64) *
                         fVar26 + fVar26;
                fVar28 = (fRam0000000146b2ff68 - fVar28 * fVar28 * fVar36 * fRam0000000146b2ff68) *
                         fVar28 + fVar28;
                fVar30 = (fRam0000000146b2ff6c - fVar30 * fVar30 * fVar38 * fRam0000000146b2ff6c) *
                         fVar30 + fVar30;
                local_218 = ((uint)(((_DAT_146b2ff60 - fVar23 * fVar23 * fVar33 * _DAT_146b2ff60) *
                                     fVar23 + fVar23) * fVar25) ^ _DAT_146b2ff50) &
                            -(uint)(1e-08 <= fVar33) ^ _DAT_146b2ff50;
                uStack_214 = ((uint)(((fRam0000000146b2ff64 -
                                      fVar26 * fVar26 * fVar34 * fRam0000000146b2ff64) * fVar26 +
                                     fVar26) * fVar27) ^ uRam0000000146b2ff54) &
                             -(uint)(1e-08 <= fVar34) ^ uRam0000000146b2ff54;
                fStack_220 = (float)(((uint)(((fRam0000000146b2ff68 -
                                              fVar28 * fVar28 * fVar36 * fRam0000000146b2ff68) *
                                              fVar28 + fVar28) * fVar29) ^ uRam0000000146b2ff58) &
                                     -(uint)(1e-08 <= fVar36) ^ uRam0000000146b2ff58);
                fStack_21c = (float)(((uint)(((fRam0000000146b2ff6c -
                                              fVar30 * fVar30 * fVar38 * fRam0000000146b2ff6c) *
                                              fVar30 + fVar30) * fVar31) ^ uRam0000000146b2ff5c) &
                                     -(uint)(1e-08 <= fVar38) ^ uRam0000000146b2ff5c);
                local_228 = CONCAT44(uStack_214,local_218);
                local_138._0_4_ = (float)local_138._0_4_ * (fVar32 * fVar39 + 1.0);
                local_138._4_4_ = (float)local_138._4_4_ * (fVar32 * fVar37 + 1.0);
                fStack_130 = fStack_130 * (fVar32 * fVar35 + 1.0);
                local_158._4_4_ = uStack_214;
                local_158._0_4_ = local_218;
                uStack_150._0_4_ = fStack_220;
                uStack_150._4_4_ = fStack_21c;
                local_148._4_4_ = (float)local_148._4_4_ + fVar32 * fVar40;
                local_148._0_4_ = (float)local_148._0_4_ + fVar32 * fVar24;
                fStack_140 = fStack_140 + fVar32 * fVar41;
                fStack_13c = fStack_13c + fVar32 * 0.0;
                fStack_12c = fStack_12c * (fVar32 * 0.0 + 0.0);
                fVar32 = _DAT_146b2ff60;
                fVar24 = fRam0000000146b2ff64;
                fVar40 = fRam0000000146b2ff68;
                fVar41 = fRam0000000146b2ff6c;
                uStack_210 = (uint)fStack_220;
                uStack_20c = (uint)fStack_21c;
                if (*(char *)(param_1 + 0x16a) != '\0') {
                  if ((float)local_138._0_4_ < 1e-05) {
                    local_138._0_4_ = 1e-05;
                  }
                  if ((float)local_138._4_4_ < 1e-05) {
                    local_138._4_4_ = 1e-05;
                  }
                  if (fStack_130 < 1e-05) {
                    fStack_130 = 1e-05;
                  }
LAB_142c99313:
                  fStack_12c = 0.0;
                  fVar32 = _DAT_146b2ff60;
                  fVar24 = fRam0000000146b2ff64;
                  fVar40 = fRam0000000146b2ff68;
                  fVar41 = fRam0000000146b2ff6c;
                }
              }
              else {
                if (*(char *)(param_1 + 0x168) != '\0') {
                  local_148._4_4_ =
                       (*(float *)(lVar12 + 0xc) - (float)local_148._4_4_) * fVar25 +
                       (float)local_148._4_4_;
                  local_148._0_4_ =
                       (*(float *)(lVar12 + 8) - (float)local_148._0_4_) * fVar25 +
                       (float)local_148._0_4_;
                  fStack_140 = (*(float *)(lVar12 + 0x10) - fStack_140) * fVar25 + fStack_140;
                  fStack_13c = 0.0;
                }
                if (*(char *)(param_1 + 0x169) != '\0') {
                  puVar8 = (undefined4 *)FRotator::Quaternion(lVar12 + 0x14,local_178);
                  local_1a8 = *puVar8;
                  uStack_1a4 = puVar8[1];
                  uStack_1a0 = puVar8[2];
                  uStack_19c = puVar8[3];
                  local_198 = local_158;
                  uStack_190 = uStack_150;
                  pfVar7 = (float *)FQuat::Slerp_NotNormalized
                                              (local_168,&local_198,&local_1a8,fVar25);
                  local_260 = 1e-08;
                  fVar32 = *pfVar7;
                  fVar24 = pfVar7[1];
                  fVar40 = pfVar7[2];
                  fVar41 = pfVar7[3];
                  auVar21._0_4_ = fVar32 * fVar32 + fVar40 * fVar40;
                  auVar21._4_4_ = fVar24 * fVar24 + fVar41 * fVar41;
                  auVar21._8_4_ = fVar40 * fVar40 + fVar32 * fVar32;
                  auVar21._12_4_ = fVar41 * fVar41 + fVar24 * fVar24;
                  fVar35 = auVar21._4_4_ + auVar21._0_4_;
                  fVar37 = auVar21._8_4_ + auVar21._4_4_;
                  fVar39 = auVar21._12_4_ + auVar21._8_4_;
                  fVar26 = auVar21._0_4_ + auVar21._12_4_;
                  auVar20._4_4_ = fVar37;
                  auVar20._0_4_ = fVar35;
                  auVar20._8_4_ = fVar39;
                  auVar20._12_4_ = fVar26;
                  auVar20 = rsqrtps(auVar21,auVar20);
                  fVar27 = auVar20._0_4_;
                  fVar29 = auVar20._4_4_;
                  fVar31 = auVar20._8_4_;
                  fVar23 = auVar20._12_4_;
                  fVar27 = (_DAT_146b2ff60 - fVar27 * fVar27 * fVar35 * _DAT_146b2ff60) * fVar27 +
                           fVar27;
                  fVar29 = (fRam0000000146b2ff64 - fVar29 * fVar29 * fVar37 * fRam0000000146b2ff64)
                           * fVar29 + fVar29;
                  fVar31 = (fRam0000000146b2ff68 - fVar31 * fVar31 * fVar39 * fRam0000000146b2ff68)
                           * fVar31 + fVar31;
                  fVar23 = (fRam0000000146b2ff6c - fVar23 * fVar23 * fVar26 * fRam0000000146b2ff6c)
                           * fVar23 + fVar23;
                  local_208._0_4_ =
                       ((uint)(((_DAT_146b2ff60 - fVar27 * fVar27 * fVar35 * _DAT_146b2ff60) *
                                fVar27 + fVar27) * fVar32) ^ _DAT_146b2ff50) &
                       -(uint)(1e-08 <= fVar35) ^ _DAT_146b2ff50;
                  local_208._4_4_ =
                       ((uint)(((fRam0000000146b2ff64 -
                                fVar29 * fVar29 * fVar37 * fRam0000000146b2ff64) * fVar29 + fVar29)
                              * fVar24) ^ uRam0000000146b2ff54) & -(uint)(1e-08 <= fVar37) ^
                       uRam0000000146b2ff54;
                  local_208._8_4_ =
                       ((uint)(((fRam0000000146b2ff68 -
                                fVar31 * fVar31 * fVar39 * fRam0000000146b2ff68) * fVar31 + fVar31)
                              * fVar40) ^ uRam0000000146b2ff58) & -(uint)(1e-08 <= fVar39) ^
                       uRam0000000146b2ff58;
                  local_208._12_4_ =
                       ((uint)(((fRam0000000146b2ff6c -
                                fVar23 * fVar23 * fVar26 * fRam0000000146b2ff6c) * fVar23 + fVar23)
                              * fVar41) ^ uRam0000000146b2ff5c) & -(uint)(1e-08 <= fVar26) ^
                       uRam0000000146b2ff5c;
                  fVar32 = _DAT_146b2ff60;
                  fVar24 = fRam0000000146b2ff64;
                  fVar40 = fRam0000000146b2ff68;
                  fVar41 = fRam0000000146b2ff6c;
                  _local_158 = local_208;
                }
                if (*(char *)(param_1 + 0x16a) != '\0') {
                  local_278 = 2;
                  FUN_14224c080(&local_f8,plVar1,local_158,local_248 & 0xffffffff);
                  uVar2 = *(undefined8 *)(lVar12 + 0x20);
                  fVar32 = (float)uVar2;
                  bVar6 = false;
                  local_1f0 = *(float *)(lVar12 + 0x28);
                  if (ABS(fVar32) <= 1e-05) {
                    fVar32 = 1e-05;
                  }
                  local_1f8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  if (ABS(local_1f8._4_4_) <= 1e-05) {
                    local_1f8._4_4_ = 1e-05;
                  }
                  fVar24 = local_1f0;
                  if (ABS(local_1f0) <= 1e-05) {
                    fVar24 = 1e-05;
                  }
                  local_138._0_4_ =
                       (fVar32 - (float)local_138._0_4_) * fVar25 + (float)local_138._0_4_;
                  local_138._4_4_ =
                       (local_1f8._4_4_ - (float)local_138._4_4_) * fVar25 + (float)local_138._4_4_;
                  fStack_130 = (fVar24 - fStack_130) * fVar25 + fStack_130;
                  local_1f8 = uVar2;
                  goto LAB_142c99313;
                }
              }
              iVar14 = *(int *)(param_1 + 0x160);
              local_258 = local_238;
              local_268 = '\x01';
              uVar15 = local_248;
              local_250 = uVar16;
            }
            if ((iVar17 == iVar14 + -1) ||
               (*(int *)(*(longlong *)(param_1 + 0x158) + 8 + uVar16) !=
                *(int *)(*(longlong *)(param_1 + 0x158) + 0x28 + uVar16))) {
              if (bVar6) {
                local_278 = 2;
                FUN_14224c080(&local_f8,plVar1,local_158,uVar15 & 0xffffffff);
                uVar15 = local_248;
                fVar32 = _DAT_146b2ff60;
                fVar24 = fRam0000000146b2ff64;
                fVar40 = fRam0000000146b2ff68;
                fVar41 = fRam0000000146b2ff6c;
              }
              puVar9 = (uint *)((longlong)(int)uVar15 * 0x30 + *plVar1);
              auVar22._0_4_ =
                   (float)local_158._0_4_ * (float)local_158._0_4_ +
                   (float)uStack_150 * (float)uStack_150;
              auVar22._4_4_ =
                   (float)local_158._4_4_ * (float)local_158._4_4_ +
                   uStack_150._4_4_ * uStack_150._4_4_;
              auVar22._8_4_ =
                   (float)uStack_150 * (float)uStack_150 +
                   (float)local_158._0_4_ * (float)local_158._0_4_;
              auVar22._12_4_ =
                   uStack_150._4_4_ * uStack_150._4_4_ +
                   (float)local_158._4_4_ * (float)local_158._4_4_;
              fVar23 = auVar22._4_4_ + auVar22._0_4_;
              fVar35 = auVar22._8_4_ + auVar22._4_4_;
              fVar37 = auVar22._12_4_ + auVar22._8_4_;
              fVar39 = auVar22._0_4_ + auVar22._12_4_;
              auVar5._4_4_ = fVar35;
              auVar5._0_4_ = fVar23;
              auVar5._8_4_ = fVar37;
              auVar5._12_4_ = fVar39;
              auVar20 = rsqrtps(auVar22,auVar5);
              fVar25 = auVar20._0_4_;
              fVar27 = auVar20._4_4_;
              fVar29 = auVar20._8_4_;
              fVar31 = auVar20._12_4_;
              fVar25 = (fVar32 - fVar25 * fVar25 * fVar23 * fVar32) * fVar25 + fVar25;
              fVar27 = (fVar24 - fVar27 * fVar27 * fVar35 * fVar24) * fVar27 + fVar27;
              fVar29 = (fVar40 - fVar29 * fVar29 * fVar37 * fVar40) * fVar29 + fVar29;
              fVar31 = (fVar41 - fVar31 * fVar31 * fVar39 * fVar41) * fVar31 + fVar31;
              local_158._0_4_ =
                   ((uint)(((fVar32 - fVar25 * fVar25 * fVar23 * fVar32) * fVar25 + fVar25) *
                          (float)local_158._0_4_) ^ _DAT_146b2ff50) &
                   -(uint)(_DAT_146b2ffe0 <= fVar23) ^ _DAT_146b2ff50;
              local_158._4_4_ =
                   ((uint)(((fVar24 - fVar27 * fVar27 * fVar35 * fVar24) * fVar27 + fVar27) *
                          (float)local_158._4_4_) ^ uRam0000000146b2ff54) &
                   -(uint)(fRam0000000146b2ffe4 <= fVar35) ^ uRam0000000146b2ff54;
              uStack_150._0_4_ =
                   (float)(((uint)(((fVar40 - fVar29 * fVar29 * fVar37 * fVar40) * fVar29 + fVar29)
                                  * (float)uStack_150) ^ uRam0000000146b2ff58) &
                           -(uint)(fRam0000000146b2ffe8 <= fVar37) ^ uRam0000000146b2ff58);
              uStack_150._4_4_ =
                   (float)(((uint)(((fVar41 - fVar31 * fVar31 * fVar39 * fVar41) * fVar31 + fVar31)
                                  * uStack_150._4_4_) ^ uRam0000000146b2ff5c) &
                           -(uint)(fRam0000000146b2ffec <= fVar39) ^ uRam0000000146b2ff5c);
              *puVar9 = local_158._0_4_;
              puVar9[1] = local_158._4_4_;
              puVar9[2] = (uint)(float)uStack_150;
              puVar9[3] = (uint)uStack_150._4_4_;
              puVar9[4] = local_148._0_4_;
              puVar9[5] = local_148._4_4_;
              puVar9[6] = (uint)fStack_140;
              puVar9[7] = (uint)fStack_13c;
              *(undefined1 (*) [16])(puVar9 + 8) = _local_138;
              *(undefined1 *)((longlong)(int)uVar15 + param_2[4]) = 1;
              local_268 = '\0';
            }
          }
        }
      }
LAB_142c99443:
      local_238 = local_238 + 1;
      uVar18 = (ulonglong)(iVar17 + 1U);
      iVar14 = *(int *)(param_1 + 0x160);
      uVar16 = uVar16 + 0x20;
    } while ((int)(iVar17 + 1U) < iVar14);
  }
  FUN_142c98950(param_1,local_1c8,local_1d0,local_1d8);
  return;
}



// FUNCTION 142c99500 FUN_142c99500 body=1656 status=ok
// SIG undefined FUN_142c99500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c99500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined1 auStack_1b8 [32];
  float local_198;
  undefined8 local_188;
  float local_180 [2];
  longlong local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar14 = *param_2;
  if (lVar14 != 0) {
    lVar15 = param_2[3];
    lVar4 = *(longlong *)(lVar14 + 0xb8);
    local_178 = lVar15;
    if (*(char *)(param_1 + 0x154) != '\0') {
      lVar14 = *(longlong *)(lVar14 + 0xb0);
      iVar12 = FUN_1422ac1a0(lVar14,*(undefined8 *)(lVar4 + 0x718));
      lVar14 = *(longlong *)(lVar14 + 0x2e0);
      iVar18 = 0;
      if (0 < *(int *)(param_1 + 0x148)) {
        lVar17 = 0;
        do {
          iVar18 = iVar18 + 1;
          *(undefined4 *)(lVar17 + 0x30 + *(longlong *)(param_1 + 0x140)) =
               *(undefined4 *)
                (*(longlong *)((longlong)iVar12 * 0x20 + 0x10 + lVar14) +
                (longlong)*(int *)(lVar17 + 0x30 + *(longlong *)(param_1 + 0x140)) * 4);
          lVar17 = lVar17 + 0x40;
        } while (iVar18 < *(int *)(param_1 + 0x148));
      }
      *(undefined1 *)(param_1 + 0x154) = 0;
    }
    fVar22 = *(float *)(param_1 + 0x150);
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    pfVar16 = (float *)(lVar4 + 0x210);
    *(float *)(param_1 + 0x150) = fVar22;
    fVar25 = *pfVar16;
    fVar27 = *(float *)(lVar4 + 0x214);
    local_118 = *(undefined8 *)pfVar16;
    fVar24 = *(float *)(lVar4 + 0x218);
    fVar26 = *(float *)(lVar4 + 0x21c);
    uStack_110 = *(undefined8 *)(lVar4 + 0x218);
    fVar28 = *(float *)*(undefined1 (*) [16])(lVar4 + 0x220);
    _local_108 = *(undefined1 (*) [16])(lVar4 + 0x220);
    pfVar13 = (float *)(param_1 + 0x160);
    if (*(char *)(param_1 + 400) == '\0') {
      pfVar13 = pfVar16;
    }
    local_168 = *(float *)(lVar4 + 0x230);
    fStack_164 = *(float *)(lVar4 + 0x234);
    fStack_160 = *(float *)(lVar4 + 0x238);
    fStack_15c = *(float *)(lVar4 + 0x23c);
    local_f8 = local_168;
    fStack_f4 = fStack_164;
    fStack_f0 = fStack_160;
    fStack_ec = fStack_15c;
    if (1e-05 < ABS(fVar22)) {
      if (1e-05 < ABS(fVar22 - 1.0)) {
        local_108._4_4_ =
             (pfVar13[5] - *(float *)(lVar4 + 0x224)) * fVar22 + *(float *)(lVar4 + 0x224);
        local_108._0_4_ = (pfVar13[4] - fVar28) * fVar22 + fVar28;
        fStack_100 = (pfVar13[6] - *(float *)(lVar4 + 0x228)) * fVar22 + *(float *)(lVar4 + 0x228);
        fStack_fc = (pfVar13[7] - *(float *)(lVar4 + 0x22c)) * fVar22 + *(float *)(lVar4 + 0x22c);
        local_f8 = (pfVar13[8] - local_168) * fVar22 + local_168;
        fStack_f4 = (pfVar13[9] - fStack_164) * fVar22 + fStack_164;
        fStack_f0 = (pfVar13[10] - fStack_160) * fVar22 + fStack_160;
        fStack_ec = (pfVar13[0xb] - fStack_15c) * fVar22 + fStack_15c;
        fVar28 = *pfVar13 * fVar25;
        fVar30 = pfVar13[1] * fVar27;
        fVar31 = pfVar13[2] * fVar24;
        fVar32 = pfVar13[3] * fVar26;
        fVar29 = fVar28 + fVar31;
        fVar23 = fVar30 + fVar32;
        fVar31 = fVar31 + fVar28;
        fVar32 = fVar32 + fVar30;
        fVar33 = (float)(-(uint)(0.0 <= fVar23 + fVar29) & ((uint)fVar25 ^ (uint)(0.0 - fVar25)) ^
                        (uint)(0.0 - fVar25)) * (_DAT_146b2ff70 - fVar22) + *pfVar13 * fVar22;
        fVar23 = (float)(-(uint)(0.0 <= fVar31 + fVar23) & ((uint)fVar27 ^ (uint)(0.0 - fVar27)) ^
                        (uint)(0.0 - fVar27)) * (fRam0000000146b2ff74 - fVar22) +
                 pfVar13[1] * fVar22;
        fVar31 = (float)(-(uint)(0.0 <= fVar32 + fVar31) & ((uint)fVar24 ^ (uint)(0.0 - fVar24)) ^
                        (uint)(0.0 - fVar24)) * (fRam0000000146b2ff78 - fVar22) +
                 pfVar13[2] * fVar22;
        fVar32 = (float)(-(uint)(0.0 <= fVar29 + fVar32) & ((uint)fVar26 ^ (uint)(0.0 - fVar26)) ^
                        (uint)(0.0 - fVar26)) * (fRam0000000146b2ff7c - fVar22) +
                 pfVar13[3] * fVar22;
        auVar19._0_4_ = fVar33 * fVar33 + fVar31 * fVar31;
        auVar19._4_4_ = fVar23 * fVar23 + fVar32 * fVar32;
        auVar19._8_4_ = fVar31 * fVar31 + fVar33 * fVar33;
        auVar19._12_4_ = fVar32 * fVar32 + fVar23 * fVar23;
        fVar26 = auVar19._4_4_ + auVar19._0_4_;
        fVar28 = auVar19._8_4_ + auVar19._4_4_;
        fVar29 = auVar19._12_4_ + auVar19._8_4_;
        fVar30 = auVar19._0_4_ + auVar19._12_4_;
        auVar21._4_4_ = fVar28;
        auVar21._0_4_ = fVar26;
        auVar21._8_4_ = fVar29;
        auVar21._12_4_ = fVar30;
        auVar21 = rsqrtps(auVar19,auVar21);
        fVar22 = auVar21._0_4_;
        fVar25 = auVar21._4_4_;
        fVar27 = auVar21._8_4_;
        fVar24 = auVar21._12_4_;
        fVar22 = (_DAT_146b2ff60 - fVar22 * fVar22 * fVar26 * _DAT_146b2ff60) * fVar22 + fVar22;
        fVar25 = (fRam0000000146b2ff64 - fVar25 * fVar25 * fVar28 * fRam0000000146b2ff64) * fVar25 +
                 fVar25;
        fVar27 = (fRam0000000146b2ff68 - fVar27 * fVar27 * fVar29 * fRam0000000146b2ff68) * fVar27 +
                 fVar27;
        fVar24 = (fRam0000000146b2ff6c - fVar24 * fVar24 * fVar30 * fRam0000000146b2ff6c) * fVar24 +
                 fVar24;
        local_118 = CONCAT44(((uint)(((fRam0000000146b2ff64 -
                                      fVar25 * fVar25 * fVar28 * fRam0000000146b2ff64) * fVar25 +
                                     fVar25) * fVar23) ^ uRam0000000146b2ff54) &
                             -(uint)(fRam0000000146b2ffe4 <= fVar28) ^ uRam0000000146b2ff54,
                             ((uint)(((_DAT_146b2ff60 - fVar22 * fVar22 * fVar26 * _DAT_146b2ff60) *
                                      fVar22 + fVar22) * fVar33) ^ _DAT_146b2ff50) &
                             -(uint)(_DAT_146b2ffe0 <= fVar26) ^ _DAT_146b2ff50);
        uStack_110 = CONCAT44(((uint)(((fRam0000000146b2ff6c -
                                       fVar24 * fVar24 * fVar30 * fRam0000000146b2ff6c) * fVar24 +
                                      fVar24) * fVar32) ^ uRam0000000146b2ff5c) &
                              -(uint)(fRam0000000146b2ffec <= fVar30) ^ uRam0000000146b2ff5c,
                              ((uint)(((fRam0000000146b2ff68 -
                                       fVar27 * fVar27 * fVar29 * fRam0000000146b2ff68) * fVar27 +
                                      fVar27) * fVar31) ^ uRam0000000146b2ff58) &
                              -(uint)(fRam0000000146b2ffe8 <= fVar29) ^ uRam0000000146b2ff58);
      }
      else {
        local_118 = *(undefined8 *)pfVar13;
        uStack_110 = *(undefined8 *)(pfVar13 + 2);
        _local_108 = *(undefined1 (*) [16])(pfVar13 + 4);
        local_f8 = pfVar13[8];
        fStack_f4 = pfVar13[9];
        fStack_f0 = pfVar13[10];
        fStack_ec = pfVar13[0xb];
      }
    }
    iVar12 = (int)param_2[2];
    while (iVar12 = iVar12 + -1, iVar12 != -1) {
      if ((iVar12 != 0) && (*(char *)((longlong)iVar12 + param_2[4]) == '\x01')) {
        local_188._0_4_ = iVar12;
        FBoneContainer::GetParentBoneIndex(param_2[3],local_180,&local_188);
        FTransform::SetToRelativeTransform
                  ((longlong)(int)local_188 * 0x30 + param_2[1],
                   (longlong)(int)local_180[0] * 0x30 + param_2[1]);
        *(undefined1 *)((longlong)(int)local_188 + param_2[4]) = 0;
      }
    }
    pfVar16 = *(float **)(param_1 + 0x140);
    local_188 = pfVar16 + (longlong)*(int *)(param_1 + 0x148) * 0x10;
    if (pfVar16 != local_188) {
      do {
        iVar12 = *(int *)(*(longlong *)(lVar15 + 0x80) + (longlong)(int)pfVar16[0xc] * 4);
        lVar14 = (longlong)iVar12;
        if (iVar12 != -1) {
          if (*(char *)(lVar14 + param_2[4]) == '\0') {
            FUN_14060c680(param_2 + 1,iVar12);
          }
          lVar15 = param_2[1];
          pfVar13 = (float *)(lVar15 + lVar14 * 0x30);
          local_148 = *pfVar13;
          fStack_144 = pfVar13[1];
          fStack_140 = pfVar13[2];
          fStack_13c = pfVar13[3];
          puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar14 * 0x30);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          local_138 = (float)uVar8;
          fStack_134 = (float)((ulonglong)uVar8 >> 0x20);
          fStack_130 = (float)uVar9;
          fStack_12c = (float)((ulonglong)uVar9 >> 0x20);
          pauVar2 = (undefined1 (*) [16])(lVar15 + 0x20 + lVar14 * 0x30);
          fVar22 = *(float *)*pauVar2;
          fVar25 = *(float *)(*pauVar2 + 4);
          uVar8 = *(undefined8 *)*pauVar2;
          fVar27 = *(float *)(*pauVar2 + 8);
          auVar11 = *(undefined1 (*) [12])*pauVar2;
          uVar7 = *(undefined4 *)(*pauVar2 + 0xc);
          _local_128 = *pauVar2;
          local_198 = pfVar16[0xd];
          FUN_14224c850(&local_118,param_2 + 1,&local_148,iVar12);
          local_198 = pfVar16[0xd];
          fVar24 = *pfVar16;
          fVar26 = pfVar16[1];
          fVar28 = pfVar16[2];
          fVar29 = pfVar16[3];
          fVar30 = pfVar16[4];
          fVar23 = pfVar16[5];
          fVar31 = pfVar16[6];
          fVar32 = pfVar16[7];
          fVar33 = pfVar16[0xb];
          if (local_198 != 0.0) {
            fVar30 = fVar30 / (fVar22 * local_168);
            fVar23 = fVar23 / (fVar25 * fStack_164);
            fVar31 = fVar31 / (fVar27 * fStack_160);
            fVar33 = 0.0;
            fVar32 = 0.0;
          }
          local_180[0] = *(float *)(param_1 + 0x150);
          if (1e-05 < ABS(local_180[0])) {
            if (1e-05 < ABS(local_180[0] - 1.0)) {
              local_138 = local_138 + (fVar30 - local_138) * local_180[0];
              fStack_134 = fStack_134 + (fVar23 - fStack_134) * local_180[0];
              fStack_130 = fStack_130 + (fVar31 - fStack_130) * local_180[0];
              fStack_12c = fStack_12c + (fVar32 - fStack_12c) * local_180[0];
              local_128._4_4_ =
                   (float)local_128._4_4_ + (pfVar16[9] - (float)local_128._4_4_) * local_180[0];
              local_128._0_4_ =
                   (float)local_128._0_4_ +
                   (*(float *)*(undefined1 (*) [12])(pfVar16 + 8) - (float)local_128._0_4_) *
                   local_180[0];
              fStack_120 = fStack_120 + (pfVar16[10] - fStack_120) * local_180[0];
              fStack_11c = fStack_11c + (fVar33 - fStack_11c) * local_180[0];
              fVar30 = local_148 * fVar24 + fStack_140 * fVar28;
              fVar23 = fStack_144 * fVar26 + fStack_13c * fVar29;
              fVar31 = fStack_140 * fVar28 + local_148 * fVar24;
              fVar32 = fStack_13c * fVar29 + fStack_144 * fVar26;
              fVar33 = (float)(-(uint)(0.0 <= fVar23 + fVar30) &
                               ((uint)local_148 ^ (uint)(0.0 - local_148)) ^ (uint)(0.0 - local_148)
                              ) * (_DAT_146b2ff70 - local_180[0]) + local_180[0] * fVar24;
              fVar34 = (float)(-(uint)(0.0 <= fVar31 + fVar23) &
                               ((uint)fStack_144 ^ (uint)(0.0 - fStack_144)) ^
                              (uint)(0.0 - fStack_144)) * (fRam0000000146b2ff74 - local_180[0]) +
                       local_180[0] * fVar26;
              fVar35 = (float)(-(uint)(0.0 <= fVar32 + fVar31) &
                               ((uint)fStack_140 ^ (uint)(0.0 - fStack_140)) ^
                              (uint)(0.0 - fStack_140)) * (fRam0000000146b2ff78 - local_180[0]) +
                       local_180[0] * fVar28;
              fVar36 = (float)(-(uint)(0.0 <= fVar30 + fVar32) &
                               ((uint)fStack_13c ^ (uint)(0.0 - fStack_13c)) ^
                              (uint)(0.0 - fStack_13c)) * (fRam0000000146b2ff7c - local_180[0]) +
                       local_180[0] * fVar29;
              auVar20._0_4_ = fVar33 * fVar33 + fVar35 * fVar35;
              auVar20._4_4_ = fVar34 * fVar34 + fVar36 * fVar36;
              auVar20._8_4_ = fVar35 * fVar35 + fVar33 * fVar33;
              auVar20._12_4_ = fVar36 * fVar36 + fVar34 * fVar34;
              fVar30 = auVar20._4_4_ + auVar20._0_4_;
              fVar23 = auVar20._8_4_ + auVar20._4_4_;
              fVar31 = auVar20._12_4_ + auVar20._8_4_;
              fVar32 = auVar20._0_4_ + auVar20._12_4_;
              auVar6._4_4_ = fVar23;
              auVar6._0_4_ = fVar30;
              auVar6._8_4_ = fVar31;
              auVar6._12_4_ = fVar32;
              auVar21 = rsqrtps(auVar20,auVar6);
              fVar24 = auVar21._0_4_;
              fVar26 = auVar21._4_4_;
              fVar28 = auVar21._8_4_;
              fVar29 = auVar21._12_4_;
              fVar24 = (_DAT_146b2ff60 - fVar24 * fVar24 * fVar30 * _DAT_146b2ff60) * fVar24 +
                       fVar24;
              fVar26 = (fRam0000000146b2ff64 - fVar26 * fVar26 * fVar23 * fRam0000000146b2ff64) *
                       fVar26 + fVar26;
              fVar28 = (fRam0000000146b2ff68 - fVar28 * fVar28 * fVar31 * fRam0000000146b2ff68) *
                       fVar28 + fVar28;
              fVar29 = (fRam0000000146b2ff6c - fVar29 * fVar29 * fVar32 * fRam0000000146b2ff6c) *
                       fVar29 + fVar29;
              local_148 = (float)(((uint)(((_DAT_146b2ff60 -
                                           fVar24 * fVar24 * fVar30 * _DAT_146b2ff60) * fVar24 +
                                          fVar24) * fVar33) ^ _DAT_146b2ff50) &
                                  -(uint)(_DAT_146b2ffe0 <= fVar30) ^ _DAT_146b2ff50);
              fStack_144 = (float)(((uint)(((fRam0000000146b2ff64 -
                                            fVar26 * fVar26 * fVar23 * fRam0000000146b2ff64) *
                                            fVar26 + fVar26) * fVar34) ^ uRam0000000146b2ff54) &
                                   -(uint)(fRam0000000146b2ffe4 <= fVar23) ^ uRam0000000146b2ff54);
              fStack_140 = (float)(((uint)(((fRam0000000146b2ff68 -
                                            fVar28 * fVar28 * fVar31 * fRam0000000146b2ff68) *
                                            fVar28 + fVar28) * fVar35) ^ uRam0000000146b2ff58) &
                                   -(uint)(fRam0000000146b2ffe8 <= fVar31) ^ uRam0000000146b2ff58);
              fStack_13c = (float)(((uint)(((fRam0000000146b2ff6c -
                                            fVar29 * fVar29 * fVar32 * fRam0000000146b2ff6c) *
                                            fVar29 + fVar29) * fVar36) ^ uRam0000000146b2ff5c) &
                                   -(uint)(fRam0000000146b2ffec <= fVar32) ^ uRam0000000146b2ff5c);
            }
            else {
              fStack_11c = fVar33;
              _local_128 = *(undefined1 (*) [12])(pfVar16 + 8);
              local_148 = fVar24;
              fStack_144 = fVar26;
              fStack_140 = fVar28;
              fStack_13c = fVar29;
              local_138 = fVar30;
              fStack_134 = fVar23;
              fStack_130 = fVar31;
              fStack_12c = fVar32;
            }
          }
          local_158 = fVar22;
          fStack_154 = fVar25;
          fStack_150 = fVar27;
          uStack_14c = uVar7;
          FUN_14224c080(&local_118,param_2 + 1,&local_148,iVar12);
          lVar15 = param_2[1];
          auVar5._12_4_ = 0;
          auVar5._0_12_ = auVar11;
          puVar1 = (undefined8 *)(lVar15 + lVar14 * 0x30);
          *puVar1 = CONCAT44(fStack_144,local_148);
          puVar1[1] = CONCAT44(fStack_13c,fStack_140);
          auVar10._4_4_ = fStack_134;
          auVar10._0_4_ = local_138;
          auVar10._8_4_ = fStack_130;
          auVar10._12_4_ = fStack_12c;
          *(undefined1 (*) [16])(lVar15 + 0x10 + lVar14 * 0x30) = auVar10;
          local_128._0_4_ = (undefined4)uVar8;
          local_128._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + lVar14 * 0x30);
          *puVar3 = local_128._0_4_;
          puVar3[1] = local_128._4_4_;
          puVar3[2] = fVar27;
          puVar3[3] = 0;
          *(undefined1 *)(lVar14 + param_2[4]) = 1;
          lVar15 = local_178;
          _local_128 = auVar5;
        }
        pfVar16 = pfVar16 + 0x10;
      } while (pfVar16 != local_188);
    }
  }
  return;
}



// FUNCTION 142c99b80 FUN_142c99b80 body=2294 status=ok
// SIG undefined FUN_142c99b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c99b80(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int local_res18 [2];
  int local_res20 [2];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  ulonglong local_118;
  ulonglong local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (*(int *)((longlong)param_3 + 0xc) < *(int *)(param_1 + 0x158)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_3);
  }
  piVar15 = *(int **)(param_1 + 0x150);
  local_118 = 0;
  uVar16 = (longlong)*(int *)(param_1 + 0x158) & 0x3fffffffffffffff;
  if (piVar15 + *(int *)(param_1 + 0x158) < piVar15) {
    uVar16 = 0;
  }
  local_110 = uVar16;
  if (uVar16 != 0) {
    do {
      uVar13 = local_118;
      iVar8 = *piVar15;
      if ((((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x148))) &&
          (lVar14 = *(longlong *)(param_1 + 0x140) + (longlong)iVar8 * 0x20,
          1e-05 < *(float *)(lVar14 + 0x18))) &&
         (cVar7 = FBoneReference::IsValidToEvaluate(lVar14,lVar2), cVar7 != '\0')) {
        if (*(char *)(lVar14 + 0xc) == '\0') {
          iVar8 = *(int *)(lVar14 + 8);
          local_res18[0] = *(int *)(lVar14 + 0x10);
LAB_142c9a160:
          if (iVar8 == -1) goto LAB_142c99ce1;
          if (*(char *)(lVar14 + 0xc) != '\0') {
            iVar8 = *(int *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar8 * 4);
          }
        }
        else {
          iVar8 = *(int *)(lVar14 + 8);
          if (iVar8 != -1) {
            local_res18[0] = *(int *)(*(longlong *)(lVar2 + 0x80) + (longlong)iVar8 * 4);
            goto LAB_142c9a160;
          }
          local_res18[0] = -1;
LAB_142c99ce1:
          iVar8 = -1;
        }
        pfVar11 = (float *)((longlong)iVar8 * 0x30 +
                           *(longlong *)(*(longlong *)(lVar2 + 0x48) + 0x30));
        fVar21 = *pfVar11;
        fVar28 = pfVar11[1];
        fVar26 = pfVar11[2];
        fVar29 = pfVar11[3];
        fVar37 = pfVar11[4];
        fVar40 = pfVar11[5];
        fVar44 = pfVar11[6];
        fVar52 = pfVar11[7];
        auVar17 = *(undefined1 (*) [16])(pfVar11 + 8);
        fVar54 = auVar17._0_4_;
        fVar55 = auVar17._4_4_;
        fVar56 = auVar17._8_4_;
        fVar57 = auVar17._12_4_;
        FBoneContainer::GetParentBoneIndex(*(undefined8 *)(param_2 + 0x18),local_res20,local_res18);
        lVar12 = (longlong)local_res20[0];
        if (local_res20[0] != -1) {
          lVar9 = *(longlong *)(param_2 + 0x20);
          if (*(char *)(lVar12 + lVar9) == '\0') {
            lVar9 = FUN_14060c680(param_2 + 8);
          }
          fVar6 = fRam0000000146b2ff78;
          fVar34 = fRam0000000146b2ff74;
          fVar33 = _DAT_146b2ff70;
          pfVar11 = (float *)(lVar12 * 0x30 + *(longlong *)(param_2 + 8));
          local_f8 = _DAT_146b2ffd0;
          fStack_f4 = fRam0000000146b2ffd4;
          fStack_f0 = fRam0000000146b2ffd8;
          fStack_ec = fRam0000000146b2ffdc;
          auVar18 = *(undefined1 (*) [16])(pfVar11 + 8);
          fVar19 = auVar18._0_4_;
          fVar38 = auVar18._4_4_;
          fVar41 = auVar18._8_4_;
          fVar45 = auVar18._12_4_;
          fVar20 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar24 = pfVar11[2];
          fVar27 = pfVar11[3];
          auVar17 = minps(auVar17,auVar18);
          auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146b2ffd4);
          auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146b2ffd0);
          auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146b2ffd8);
          auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146b2ffdc);
          iVar8 = movmskps((int)lVar9,auVar18);
          if (iVar8 == 0) {
            fVar33 = fVar20 * fVar28;
            fVar34 = fVar20 * fVar21;
            fVar37 = fVar37 * fVar19;
            fVar40 = fVar40 * fVar38;
            fVar44 = fVar44 * fVar41;
            fVar52 = fVar52 * fVar45;
            fVar54 = fVar54 * fVar19;
            fVar55 = fVar55 * fVar38;
            fVar56 = fVar56 * fVar41;
            fVar57 = fVar57 * fVar45;
            fVar41 = fVar25 * fVar21;
            fVar45 = fVar25 * fVar28;
            fVar19 = fVar24 * fVar21;
            fVar38 = fVar24 * fVar26;
            fVar21 = fVar20 * fVar29 * _DAT_146b2ffb0 + fVar27 * fVar21 +
                     fVar25 * fVar26 * _DAT_146b2ffa0 + fVar24 * fVar28 * _DAT_146b2ff90;
            fVar28 = fVar20 * fVar26 * fRam0000000146b2ffb4 + fVar27 * fVar28 +
                     fVar25 * fVar29 * fRam0000000146b2ffa4 + fVar19 * fRam0000000146b2ff94;
            fVar26 = fVar33 * fRam0000000146b2ffb8 + fVar27 * fVar26 + fVar41 * fRam0000000146b2ffa8
                     + fVar24 * fVar29 * fRam0000000146b2ff98;
            fVar29 = fVar34 * fRam0000000146b2ffbc + fVar27 * fVar29 + fVar45 * fRam0000000146b2ffac
                     + fVar38 * fRam0000000146b2ff9c;
            fVar19 = fVar44 * fVar25 - fVar40 * fVar24;
            fVar38 = fVar37 * fVar24 - fVar44 * fVar20;
            fVar41 = fVar40 * fVar20 - fVar37 * fVar25;
            fVar45 = fVar52 * fVar27 - fVar52 * fVar27;
            fVar19 = fVar19 + fVar19;
            fVar38 = fVar38 + fVar38;
            fVar41 = fVar41 + fVar41;
            fVar45 = fVar45 + fVar45;
            fVar37 = (fVar41 * fVar25 - fVar38 * fVar24) + fVar19 * fVar27 + fVar37 + pfVar11[4];
            fVar40 = (fVar19 * fVar24 - fVar41 * fVar20) + fVar38 * fVar27 + fVar40 + pfVar11[5];
            fVar44 = (fVar38 * fVar20 - fVar19 * fVar25) + fVar41 * fVar27 + fVar44 + pfVar11[6];
            fVar52 = (fVar45 * fVar27 - fVar45 * fVar27) + fVar45 * fVar27 + fVar52 + pfVar11[7];
          }
          else {
            fVar30 = fVar25 + fVar25;
            fVar32 = fVar24 + fVar24;
            fVar52 = pfVar11[4];
            fVar4 = pfVar11[5];
            fVar5 = pfVar11[6];
            fVar35 = fVar20 * (fVar20 + fVar20);
            fVar31 = (fVar20 + fVar20) * fVar27;
            fVar49 = (fVar32 * fVar27 + fVar30 * fVar20) * fVar19;
            fVar50 = (fVar31 + fVar32 * fVar25) * fVar38;
            fVar51 = (fVar30 * fVar27 + fVar32 * fVar20) * fVar41;
            fVar36 = fVar38 * (fVar30 * fVar20 - fVar32 * fVar27);
            fVar39 = fVar41 * (fVar32 * fVar25 - fVar31);
            fVar42 = fVar19 * (fVar32 * fVar20 - fVar30 * fVar27);
            fVar20 = (float)((uint)((_DAT_146b2ff70 - (fVar24 * fVar32 + fVar25 * fVar30)) * fVar19)
                            & _DAT_146b2ff80);
            fVar24 = (float)((uint)((fRam0000000146b2ff74 - (fVar24 * fVar32 + fVar35)) * fVar38) &
                            uRam0000000146b2ff84);
            fVar27 = (float)((uint)((fRam0000000146b2ff78 - (fVar25 * fVar30 + fVar35)) * fVar41) &
                            uRam0000000146b2ff88);
            fVar31 = (float)((uint)((fRam0000000146b2ff7c - (fVar35 + fVar35)) * fVar45) &
                            uRam0000000146b2ff8c);
            fVar25 = fVar28 + fVar28;
            fVar30 = fVar26 + fVar26;
            fVar32 = fVar21 * (fVar21 + fVar21);
            fVar53 = fVar29 * (fVar21 + fVar21);
            fVar46 = (fVar29 * fVar30 + fVar21 * fVar25) * fVar54;
            fVar47 = (fVar53 + fVar28 * fVar30) * fVar55;
            fVar48 = (fVar29 * fVar25 + fVar21 * fVar30) * fVar56;
            fVar35 = fVar55 * (fVar21 * fVar25 - fVar29 * fVar30);
            fVar53 = fVar56 * (fVar28 * fVar30 - fVar53);
            fVar43 = fVar54 * (fVar21 * fVar30 - fVar29 * fVar25);
            fVar21 = (float)((uint)((_DAT_146b2ff70 - (fVar26 * fVar30 + fVar28 * fVar25)) * fVar54)
                            & _DAT_146b2ff80);
            fVar26 = (float)((uint)((fRam0000000146b2ff74 - (fVar26 * fVar30 + fVar32)) * fVar55) &
                            uRam0000000146b2ff84);
            fVar28 = (float)((uint)((fRam0000000146b2ff78 - (fVar28 * fVar25 + fVar32)) * fVar56) &
                            uRam0000000146b2ff88);
            fVar29 = (float)((uint)((fRam0000000146b2ff7c - (fVar32 + fVar32)) * fVar57) &
                            uRam0000000146b2ff8c);
            local_158 = fVar46 * fVar36 + fVar21 * fVar20 + fVar43 * fVar51 + fVar29 * fVar52;
            fStack_154 = fVar46 * fVar24 + fVar21 * fVar49 + fVar43 * fVar39 + fVar29 * fVar4;
            fStack_150 = fVar46 * fVar50 + fVar21 * fVar42 + fVar43 * fVar27 + fVar29 * fVar5;
            fStack_14c = fVar46 * fVar31 + fVar21 * fVar31 + fVar43 * fVar31 +
                         fVar29 * fRam0000000146b2ff7c;
            local_148 = fVar26 * fVar36 + fVar35 * fVar20 + fVar47 * fVar51 + fVar29 * fVar52;
            fStack_144 = fVar26 * fVar24 + fVar35 * fVar49 + fVar47 * fVar39 + fVar29 * fVar4;
            fStack_140 = fVar26 * fVar50 + fVar35 * fVar42 + fVar47 * fVar27 + fVar29 * fVar5;
            fStack_13c = fVar26 * fVar31 + fVar35 * fVar31 + fVar47 * fVar31 +
                         fVar29 * fRam0000000146b2ff7c;
            local_138 = fVar53 * fVar36 + fVar48 * fVar20 + fVar28 * fVar51 + fVar29 * fVar52;
            fStack_134 = fVar53 * fVar24 + fVar48 * fVar49 + fVar28 * fVar39 + fVar29 * fVar4;
            fStack_130 = fVar53 * fVar50 + fVar48 * fVar42 + fVar28 * fVar27 + fVar29 * fVar5;
            fStack_12c = fVar53 * fVar31 + fVar48 * fVar31 + fVar28 * fVar31 +
                         fVar29 * fRam0000000146b2ff7c;
            local_128 = fVar40 * fVar36 + fVar37 * fVar20 + fVar44 * fVar51 +
                        fRam0000000146b2ff7c * fVar52;
            fStack_124 = fVar40 * fVar24 + fVar37 * fVar49 + fVar44 * fVar39 +
                         fRam0000000146b2ff7c * fVar4;
            fStack_120 = fVar40 * fVar50 + fVar37 * fVar42 + fVar44 * fVar27 +
                         fRam0000000146b2ff7c * fVar5;
            fStack_11c = fVar40 * fVar31 + fVar37 * fVar31 + fVar44 * fVar31 +
                         fRam0000000146b2ff7c * fRam0000000146b2ff7c;
            FMatrix::RemoveScaling(&local_158);
            fVar21 = (float)(-(uint)(local_f8 <= fVar54 * fVar19) & (_DAT_146b2ffc0 ^ (uint)fVar33)
                            ^ _DAT_146b2ffc0);
            fVar28 = (float)(-(uint)(fStack_f4 <= fVar55 * fVar38) &
                             (uRam0000000146b2ffc4 ^ (uint)fVar34) ^ uRam0000000146b2ffc4);
            fVar26 = (float)(-(uint)(fStack_f0 <= fVar56 * fVar41) &
                             (uRam0000000146b2ffc8 ^ (uint)fVar6) ^ uRam0000000146b2ffc8);
            local_158 = local_158 * fVar21;
            fStack_154 = fStack_154 * fVar21;
            fStack_150 = fStack_150 * fVar21;
            fStack_144 = fStack_144 * fVar28;
            fStack_140 = fStack_140 * fVar28;
            local_148 = local_148 * fVar28;
            fStack_134 = fStack_134 * fVar26;
            fStack_130 = fStack_130 * fVar26;
            local_138 = local_138 * fVar26;
            FQuat::FQuat(&local_108,&local_158);
            auVar22._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
            auVar22._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
            auVar22._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
            auVar22._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
            fVar37 = auVar22._4_4_ + auVar22._0_4_;
            fVar40 = auVar22._8_4_ + auVar22._4_4_;
            fVar44 = auVar22._12_4_ + auVar22._8_4_;
            fVar20 = auVar22._0_4_ + auVar22._12_4_;
            auVar17._4_4_ = fVar40;
            auVar17._0_4_ = fVar37;
            auVar17._8_4_ = fVar44;
            auVar17._12_4_ = fVar20;
            auVar17 = rsqrtps(auVar22,auVar17);
            fVar21 = auVar17._0_4_;
            fVar28 = auVar17._4_4_;
            fVar26 = auVar17._8_4_;
            fVar29 = auVar17._12_4_;
            fVar21 = (_DAT_146b2ff60 - fVar21 * fVar21 * fVar37 * _DAT_146b2ff60) * fVar21 + fVar21;
            fVar28 = (fRam0000000146b2ff64 - fVar28 * fVar28 * fVar40 * fRam0000000146b2ff64) *
                     fVar28 + fVar28;
            fVar26 = (fRam0000000146b2ff68 - fVar26 * fVar26 * fVar44 * fRam0000000146b2ff68) *
                     fVar26 + fVar26;
            fVar29 = (fRam0000000146b2ff6c - fVar29 * fVar29 * fVar20 * fRam0000000146b2ff6c) *
                     fVar29 + fVar29;
            fVar52 = 0.0;
            fVar21 = (float)(((uint)(((_DAT_146b2ff60 - fVar21 * fVar21 * fVar37 * _DAT_146b2ff60) *
                                      fVar21 + fVar21) * local_108) ^ _DAT_146b2ff50) &
                             -(uint)(1e-08 <= fVar37) ^ _DAT_146b2ff50);
            fVar28 = (float)(((uint)(((fRam0000000146b2ff64 -
                                      fVar28 * fVar28 * fVar40 * fRam0000000146b2ff64) * fVar28 +
                                     fVar28) * fStack_104) ^ uRam0000000146b2ff54) &
                             -(uint)(1e-08 <= fVar40) ^ uRam0000000146b2ff54);
            fVar26 = (float)(((uint)(((fRam0000000146b2ff68 -
                                      fVar26 * fVar26 * fVar44 * fRam0000000146b2ff68) * fVar26 +
                                     fVar26) * fStack_100) ^ uRam0000000146b2ff58) &
                             -(uint)(1e-08 <= fVar44) ^ uRam0000000146b2ff58);
            fVar29 = (float)(((uint)(((fRam0000000146b2ff6c -
                                      fVar29 * fVar29 * fVar20 * fRam0000000146b2ff6c) * fVar29 +
                                     fVar29) * fStack_fc) ^ uRam0000000146b2ff5c) &
                             -(uint)(1e-08 <= fVar20) ^ uRam0000000146b2ff5c);
            fVar37 = local_128;
            fVar40 = fStack_124;
            fVar44 = fStack_120;
            fVar54 = fVar54 * fVar19;
            fVar55 = fVar55 * fVar38;
            fVar56 = fVar56 * fVar41;
            fVar57 = fVar57 * fVar45;
            local_108 = fVar21;
            fStack_104 = fVar28;
            fStack_100 = fVar26;
            fStack_fc = fVar29;
          }
        }
        lVar12 = (longlong)local_res18[0];
        if (*(char *)(lVar12 + *(longlong *)(param_2 + 0x20)) == '\0') {
          FUN_14060c680((longlong *)(param_2 + 8),local_res18[0]);
        }
        iVar8 = local_res18[0];
        fVar19 = *(float *)(lVar14 + 0x18);
        pfVar11 = (float *)(lVar12 * 0x30 + *(longlong *)(param_2 + 8));
        fVar38 = *pfVar11;
        fVar41 = pfVar11[1];
        fVar45 = pfVar11[2];
        fVar20 = pfVar11[3];
        fVar25 = pfVar11[4];
        fVar24 = pfVar11[5];
        fVar27 = pfVar11[6];
        fVar33 = pfVar11[7];
        fVar34 = pfVar11[8];
        fVar6 = pfVar11[9];
        fVar4 = pfVar11[10];
        fVar5 = pfVar11[0xb];
        fVar30 = fVar38;
        fVar31 = fVar41;
        fVar32 = fVar45;
        fVar35 = fVar20;
        fVar36 = fVar25;
        fVar39 = fVar24;
        fVar53 = fVar27;
        fVar42 = fVar33;
        fVar43 = fVar34;
        fVar46 = fVar6;
        fVar47 = fVar4;
        fVar48 = fVar5;
        if ((1e-05 < fVar19) &&
           (fVar30 = fVar21, fVar31 = fVar28, fVar32 = fVar26, fVar35 = fVar29, fVar36 = fVar37,
           fVar39 = fVar40, fVar53 = fVar44, fVar42 = fVar52, fVar43 = fVar54, fVar46 = fVar55,
           fVar47 = fVar56, fVar48 = fVar57, fVar19 < 0.99999)) {
          fVar30 = fVar38 * fVar21 + fVar45 * fVar26;
          fVar31 = fVar41 * fVar28 + fVar20 * fVar29;
          fVar32 = fVar45 * fVar26 + fVar38 * fVar21;
          fVar35 = fVar20 * fVar29 + fVar41 * fVar28;
          fVar36 = (float)(-(uint)(0.0 <= fVar31 + fVar30) & ((uint)(0.0 - fVar38) ^ (uint)fVar38) ^
                          (uint)(0.0 - fVar38)) * (_DAT_146b2ff70 - fVar19) + fVar19 * fVar21;
          fVar31 = (float)(-(uint)(0.0 <= fVar32 + fVar31) & ((uint)(0.0 - fVar41) ^ (uint)fVar41) ^
                          (uint)(0.0 - fVar41)) * (fRam0000000146b2ff74 - fVar19) + fVar19 * fVar28;
          fVar32 = (float)(-(uint)(0.0 <= fVar35 + fVar32) & ((uint)(0.0 - fVar45) ^ (uint)fVar45) ^
                          (uint)(0.0 - fVar45)) * (fRam0000000146b2ff78 - fVar19) + fVar19 * fVar26;
          fVar35 = (float)(-(uint)(0.0 <= fVar30 + fVar35) & ((uint)(0.0 - fVar20) ^ (uint)fVar20) ^
                          (uint)(0.0 - fVar20)) * (fRam0000000146b2ff7c - fVar19) + fVar19 * fVar29;
          auVar23._0_4_ = fVar36 * fVar36 + fVar32 * fVar32;
          auVar23._4_4_ = fVar31 * fVar31 + fVar35 * fVar35;
          auVar23._8_4_ = fVar32 * fVar32 + fVar36 * fVar36;
          auVar23._12_4_ = fVar35 * fVar35 + fVar31 * fVar31;
          fVar38 = auVar23._4_4_ + auVar23._0_4_;
          fVar41 = auVar23._8_4_ + auVar23._4_4_;
          fVar45 = auVar23._12_4_ + auVar23._8_4_;
          fVar20 = auVar23._0_4_ + auVar23._12_4_;
          auVar3._4_4_ = fVar41;
          auVar3._0_4_ = fVar38;
          auVar3._8_4_ = fVar45;
          auVar3._12_4_ = fVar20;
          auVar17 = rsqrtps(auVar23,auVar3);
          fVar21 = auVar17._0_4_;
          fVar28 = auVar17._4_4_;
          fVar26 = auVar17._8_4_;
          fVar29 = auVar17._12_4_;
          fVar21 = (_DAT_146b2ff60 - fVar21 * fVar21 * fVar38 * _DAT_146b2ff60) * fVar21 + fVar21;
          fVar28 = (fRam0000000146b2ff64 - fVar28 * fVar28 * fVar41 * fRam0000000146b2ff64) * fVar28
                   + fVar28;
          fVar26 = (fRam0000000146b2ff68 - fVar26 * fVar26 * fVar45 * fRam0000000146b2ff68) * fVar26
                   + fVar26;
          fVar29 = (fRam0000000146b2ff6c - fVar29 * fVar29 * fVar20 * fRam0000000146b2ff6c) * fVar29
                   + fVar29;
          fVar30 = (float)(((uint)(((_DAT_146b2ff60 - fVar21 * fVar21 * fVar38 * _DAT_146b2ff60) *
                                    fVar21 + fVar21) * fVar36) ^ _DAT_146b2ff50) &
                           -(uint)(_DAT_146b2ffe0 <= fVar38) ^ _DAT_146b2ff50);
          fVar31 = (float)(((uint)(((fRam0000000146b2ff64 -
                                    fVar28 * fVar28 * fVar41 * fRam0000000146b2ff64) * fVar28 +
                                   fVar28) * fVar31) ^ uRam0000000146b2ff54) &
                           -(uint)(fRam0000000146b2ffe4 <= fVar41) ^ uRam0000000146b2ff54);
          fVar32 = (float)(((uint)(((fRam0000000146b2ff68 -
                                    fVar26 * fVar26 * fVar45 * fRam0000000146b2ff68) * fVar26 +
                                   fVar26) * fVar32) ^ uRam0000000146b2ff58) &
                           -(uint)(fRam0000000146b2ffe8 <= fVar45) ^ uRam0000000146b2ff58);
          fVar35 = (float)(((uint)(((fRam0000000146b2ff6c -
                                    fVar29 * fVar29 * fVar20 * fRam0000000146b2ff6c) * fVar29 +
                                   fVar29) * fVar35) ^ uRam0000000146b2ff5c) &
                           -(uint)(fRam0000000146b2ffec <= fVar20) ^ uRam0000000146b2ff5c);
          fVar36 = fVar25 + (fVar37 - fVar25) * fVar19;
          fVar39 = fVar24 + (fVar40 - fVar24) * fVar19;
          fVar53 = fVar27 + (fVar44 - fVar27) * fVar19;
          fVar42 = fVar33 + (fVar52 - fVar33) * fVar19;
          fVar43 = fVar34 + (fVar54 - fVar34) * fVar19;
          fVar46 = fVar6 + (fVar55 - fVar6) * fVar19;
          fVar47 = fVar4 + (fVar56 - fVar4) * fVar19;
          fVar48 = fVar5 + (fVar57 - fVar5) * fVar19;
        }
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_3,iVar1);
        }
        piVar10 = (int *)((longlong)iVar1 * 0x40 + *param_3);
        *piVar10 = iVar8;
        piVar10[4] = (int)fVar30;
        piVar10[5] = (int)fVar31;
        piVar10[6] = (int)fVar32;
        piVar10[7] = (int)fVar35;
        piVar10[8] = (int)fVar36;
        piVar10[9] = (int)fVar39;
        piVar10[10] = (int)fVar53;
        piVar10[0xb] = (int)fVar42;
        piVar10[0xc] = (int)fVar43;
        piVar10[0xd] = (int)fVar46;
        piVar10[0xe] = (int)fVar47;
        piVar10[0xf] = (int)fVar48;
        uVar13 = local_118;
        uVar16 = local_110;
      }
      local_118 = uVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (local_118 != uVar16);
  }
  return;
}



// FUNCTION 142c9a480 FUN_142c9a480 body=877 status=ok
// SIG undefined FUN_142c9a480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c9a480(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [8];
  undefined8 uVar6;
  undefined1 auVar7 [8];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = param_2[3];
  if (*(char *)(param_1 + 0x154) == '\0') {
    iVar14 = *(int *)(param_1 + 0x158);
  }
  else if (*(int *)(param_1 + 0x150) == -1) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(*(longlong *)(lVar1 + 0x80) + (longlong)*(int *)(param_1 + 0x150) * 4);
  }
  if (*(char *)((longlong)iVar14 + param_2[4]) == '\0') {
    FUN_14060c680(param_2 + 1,iVar14);
  }
  puVar11 = (undefined8 *)((longlong)iVar14 * 0x30 + param_2[1]);
  local_d8 = *puVar11;
  uStack_d0 = puVar11[1];
  _local_c8 = *(undefined1 (*) [16])(puVar11 + 2);
  _local_b8 = *(undefined1 (*) [16])(puVar11 + 4);
  lVar2 = *param_2;
  local_a8 = *(undefined8 *)(lVar2 + 0x10);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x18);
  local_98 = *(undefined4 *)(lVar2 + 0x20);
  uStack_94 = *(undefined4 *)(lVar2 + 0x24);
  uStack_90 = *(undefined4 *)(lVar2 + 0x28);
  uStack_8c = *(undefined4 *)(lVar2 + 0x2c);
  local_88 = *(undefined4 *)(lVar2 + 0x30);
  uStack_84 = *(undefined4 *)(lVar2 + 0x34);
  uStack_80 = *(undefined4 *)(lVar2 + 0x38);
  uStack_7c = *(undefined4 *)(lVar2 + 0x3c);
  if (*(char *)(param_1 + 0x268) != '\0') {
    local_f8 = (uint)*(byte *)(param_1 + 0x269);
    FUN_14224c850(&local_a8,param_2 + 1,&local_d8,iVar14);
    if (*(char *)(param_1 + 0x268) == '\x02') {
      fVar19 = (float)local_b8._0_4_ * *(float *)(param_1 + 800);
      fVar18 = (float)local_b8._4_4_ * *(float *)(param_1 + 0x324);
      uStack_b0._0_4_ = (float)uStack_b0 * *(float *)(param_1 + 0x328);
    }
    else {
      uStack_b0._0_4_ = *(float *)(param_1 + 0x328);
      fVar18 = *(float *)(param_1 + 0x324);
      fVar19 = *(float *)(param_1 + 800);
    }
    local_b8._4_4_ = fVar18;
    local_b8._0_4_ = fVar19;
    unique0x10000159 = 0;
    local_f8 = (uint)*(byte *)(param_1 + 0x269);
    FUN_14224c080(&local_a8,param_2 + 1,&local_d8,iVar14);
  }
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    local_f8 = (uint)*(byte *)(param_1 + 0x1e9);
    FUN_14224c850(&local_a8,param_2 + 1,&local_d8,iVar14);
    pfVar12 = (float *)FRotator::Quaternion(param_1 + 0x314,local_e8);
    fVar18 = *pfVar12;
    fVar19 = pfVar12[1];
    fVar3 = pfVar12[2];
    fVar4 = pfVar12[3];
    uVar9 = *(undefined8 *)pfVar12;
    uVar10 = *(undefined8 *)(pfVar12 + 2);
    if (*(char *)(param_1 + 0x1e8) == '\x02') {
      fVar20 = local_d8._4_4_ * fVar18;
      fVar21 = (float)local_d8 * fVar18;
      fVar16 = (float)local_d8 * fVar19;
      fVar17 = local_d8._4_4_ * fVar19;
      local_d8 = CONCAT44((float)uStack_d0 * fVar18 * fRam0000000146b2ffb4 + fVar4 * local_d8._4_4_
                          + uStack_d0._4_4_ * fVar19 * fRam0000000146b2ffa4 +
                          (float)local_d8 * fVar3 * fRam0000000146b2ff94,
                          uStack_d0._4_4_ * fVar18 * _DAT_146b2ffb0 + fVar4 * (float)local_d8 +
                          (float)uStack_d0 * fVar19 * _DAT_146b2ffa0 +
                          local_d8._4_4_ * fVar3 * _DAT_146b2ff90);
      uStack_d0 = CONCAT44(fVar21 * fRam0000000146b2ffbc + fVar4 * uStack_d0._4_4_ +
                           fVar17 * fRam0000000146b2ffac +
                           (float)uStack_d0 * fVar3 * fRam0000000146b2ff9c,
                           fVar20 * fRam0000000146b2ffb8 + fVar4 * (float)uStack_d0 +
                           fVar16 * fRam0000000146b2ffa8 +
                           uStack_d0._4_4_ * fVar3 * fRam0000000146b2ff98);
      uVar9 = local_d8;
      uVar10 = uStack_d0;
    }
    uStack_d0 = uVar10;
    local_d8 = uVar9;
    local_f8 = (uint)*(byte *)(param_1 + 0x1e9);
    FUN_14224c080(&local_a8,param_2 + 1,&local_d8,iVar14);
  }
  if (*(char *)(param_1 + 0x16c) != '\0') {
    local_f8 = (uint)*(byte *)(param_1 + 0x16d);
    FUN_14224c850(&local_a8,param_2 + 1,&local_d8,iVar14);
    if (*(char *)(param_1 + 0x16c) == '\x02') {
      local_c8._4_4_ = (float)local_c8._4_4_ + *(float *)(param_1 + 0x30c);
      local_c8._0_4_ = (float)local_c8._0_4_ + *(float *)*(undefined1 (*) [12])(param_1 + 0x308);
      uStack_c0._0_4_ = (float)uStack_c0 + *(float *)(param_1 + 0x310);
      uStack_c0._4_4_ = uStack_c0._4_4_ + 0.0;
    }
    else {
      uStack_c0._4_4_ = 0.0;
      _local_c8 = *(undefined1 (*) [12])(param_1 + 0x308);
    }
    local_f8 = (uint)*(byte *)(param_1 + 0x16d);
    FUN_14224c080(&local_a8,param_2 + 1,&local_d8,iVar14);
  }
  uVar10 = uStack_d0;
  uVar9 = local_d8;
  if (*(char *)(param_1 + 0x154) == '\0') {
    uVar15 = *(undefined4 *)(param_1 + 0x158);
  }
  else if (*(int *)(param_1 + 0x150) == -1) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(undefined4 *)(*(longlong *)(lVar1 + 0x80) + (longlong)*(int *)(param_1 + 0x150) * 4);
  }
  iVar14 = (int)param_3[1];
  auVar5 = local_c8;
  uVar6 = uStack_c0;
  auVar7 = local_b8;
  uVar8 = uStack_b0;
  *(int *)(param_3 + 1) = iVar14 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar14 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_3,iVar14);
  }
  puVar13 = (undefined4 *)((longlong)iVar14 * 0x40 + *param_3);
  *puVar13 = uVar15;
  *(undefined8 *)(puVar13 + 4) = uVar9;
  *(undefined8 *)(puVar13 + 6) = uVar10;
  *(undefined1 (*) [8])(puVar13 + 8) = auVar5;
  *(undefined8 *)(puVar13 + 10) = uVar6;
  *(undefined1 (*) [8])(puVar13 + 0xc) = auVar7;
  *(undefined8 *)(puVar13 + 0xe) = uVar8;
  return;
}



// FUNCTION 142c9a7f0 FUN_142c9a7f0 body=14768 status=ok
// SIG undefined FUN_142c9a7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c9a7f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_c48 [32];
  undefined4 *local_c28;
  undefined8 *local_c20;
  undefined4 local_c18;
  float local_c08;
  int local_c00;
  int local_bfc;
  undefined8 local_bf8;
  float fStack_bf0;
  float fStack_bec;
  int local_be8;
  float local_be4;
  longlong local_be0;
  undefined8 local_bd8;
  int local_bd0 [2];
  int *local_bc8;
  undefined8 local_bc0;
  float local_bb8;
  float local_bb4;
  float local_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  longlong *local_b98;
  float *pfStack_b90;
  int local_b88;
  int local_b84;
  int local_b80;
  float local_b7c;
  float local_b78;
  longlong local_b70;
  undefined8 local_b68;
  undefined8 local_b58;
  float fStack_b50;
  float fStack_b4c;
  undefined8 local_b48;
  float fStack_b40;
  float fStack_b3c;
  undefined8 local_b38;
  float fStack_b30;
  float fStack_b2c;
  float local_b28;
  float fStack_b24;
  float fStack_b20;
  float fStack_b1c;
  undefined1 local_b18 [8];
  undefined8 uStack_b10;
  int *local_b08;
  undefined1 local_af8 [8];
  float fStack_af0;
  float fStack_aec;
  float local_ae8;
  float fStack_ae4;
  float fStack_ae0;
  float fStack_adc;
  float local_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  float local_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float local_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  float local_aa8;
  float fStack_aa4;
  float fStack_aa0;
  float fStack_a9c;
  float local_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float local_a88;
  float fStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float local_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float local_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  float local_a58;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float local_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float local_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float local_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  float local_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float local_9f8;
  float fStack_9f4;
  float fStack_9f0;
  float fStack_9ec;
  float local_9e8;
  float fStack_9e4;
  float fStack_9e0;
  float fStack_9dc;
  float local_9d8;
  float fStack_9d4;
  float fStack_9d0;
  float fStack_9cc;
  float local_9c8;
  float fStack_9c4;
  float fStack_9c0;
  float fStack_9bc;
  float local_9b8;
  float fStack_9b4;
  float fStack_9b0;
  float fStack_9ac;
  undefined4 local_9a8;
  undefined1 local_9a4;
  undefined4 local_9a0;
  undefined4 local_99c;
  float local_998;
  undefined8 local_990;
  float local_988;
  undefined1 local_984 [4];
  undefined1 local_980 [24];
  undefined8 local_968;
  undefined8 uStack_960;
  undefined1 local_958 [8];
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  longlong *local_938;
  longlong *plStack_930;
  int *local_928;
  float *pfStack_920;
  float *local_918;
  float local_908;
  float fStack_904;
  float fStack_900;
  float fStack_8fc;
  float local_8f8;
  float fStack_8f4;
  float fStack_8f0;
  float fStack_8ec;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  undefined8 local_8c8 [2];
  float local_8b8;
  float fStack_8b4;
  float fStack_8b0;
  float fStack_8ac;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  float fStack_89c;
  float local_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  longlong local_888 [2];
  int local_878;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  int local_838;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined **local_7f8;
  longlong *local_7f0;
  longlong *plStack_7e8;
  int *local_7e0;
  float *pfStack_7d8;
  float *local_7d0;
  undefined ***local_7c0;
  undefined **local_7b8;
  longlong *local_7b0;
  longlong *plStack_7a8;
  int *local_7a0;
  undefined ***local_780;
  undefined **local_778;
  longlong *local_770;
  longlong *plStack_768;
  int *local_760;
  float *pfStack_758;
  undefined ***local_740;
  undefined **local_738;
  undefined1 *local_730;
  undefined8 *puStack_728;
  longlong *local_720;
  undefined ***local_700;
  undefined **local_6f8;
  longlong local_6f0;
  undefined8 *puStack_6e8;
  longlong *local_6e0;
  undefined ***local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined1 local_658 [16];
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  undefined1 local_5e8 [16];
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined1 local_5a8 [16];
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined **local_558 [7];
  undefined ***local_520;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined1 local_318 [12];
  undefined4 local_30c;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [8];
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined4 local_247;
  undefined2 local_243;
  undefined4 local_240;
  undefined1 local_23c;
  undefined4 local_238;
  undefined2 local_234;
  longlong local_210;
  undefined8 local_208;
  longlong local_1f0;
  undefined8 local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_c48;
  if ((*(char *)(param_1 + 0x198) != '\0') && (0.0 < *(float *)(param_1 + 0x19c))) {
    puVar7 = (undefined8 *)(param_1 + 0x1e0);
    local_99c = *(undefined4 *)(param_1 + 0x1e4);
    local_998 = *(float *)(param_1 + 0x1e8) - *(float *)(param_1 + 0x19c);
    local_9a0 = *(undefined4 *)puVar7;
    lVar5 = (**(code **)(**(longlong **)(*param_2 + 0xa0) + 0x148))();
    if (lVar5 != 0) {
      _guard_xfg_dispatch_icall_nop(local_318,0,0x90);
      local_30c = 0x3f800000;
      local_258 = 0;
      local_250 = 0;
      local_210 = 0;
      local_208 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_247 = 0x100;
      local_240 = 0;
      local_bf8 = 0;
      local_234 = 0x101;
      local_23c = 0;
      local_243 = 0;
      local_238 = 0;
      local_248 = 1;
      lVar6 = FUN_140a05dc0();
      local_9a8 = *(undefined4 *)(lVar6 + 4);
      local_c20 = &local_258;
      local_c28 = &local_9a8;
      local_9a4 = 0;
      cVar3 = UWorld::LineTraceSingleByObjectType(lVar5,local_318,puVar7,&local_9a0);
      if (cVar3 != '\0') {
        *puVar7 = local_304;
        *(undefined4 *)(param_1 + 0x1e8) = local_2fc;
      }
      if (local_1f0 != 0) {
        FMemory::Free();
      }
      if (local_210 != 0) {
        FMemory::Free();
      }
    }
  }
  (**(code **)(**(longlong **)(*param_2 + 0xa0) + 0x148))();
  iVar9 = -1;
  lVar5 = param_2[3];
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    iVar12 = *(int *)(param_1 + 0x1b8);
  }
  else if (*(int *)(param_1 + 0x1b0) == -1) {
    iVar12 = -1;
  }
  else {
    iVar12 = *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)*(int *)(param_1 + 0x1b0) * 4);
  }
  plVar13 = param_2 + 1;
  local_b58 = lVar5;
  if (*(char *)((longlong)iVar12 + param_2[4]) == '\0') {
    FUN_14060c680(plVar13,iVar12);
  }
  puVar7 = (undefined8 *)((longlong)iVar12 * 0x30 + *plVar13);
  local_288 = *puVar7;
  uStack_280 = puVar7[1];
  _local_278 = *(undefined1 (*) [16])(puVar7 + 2);
  local_268 = puVar7[4];
  uStack_260 = puVar7[5];
  cVar3 = *(char *)(param_1 + 0x1a0);
  local_be4 = 100.0;
  if (cVar3 == '\0') {
LAB_142c9aa92:
    local_be4 = *(float *)(param_1 + 0x174);
  }
  else if (cVar3 == '\x01') {
    if (*(char *)(param_1 + 0x14c) == '\0') {
      local_b88 = *(int *)(param_1 + 0x150);
    }
    else if (*(int *)(param_1 + 0x148) == -1) {
      local_b88 = -1;
    }
    else {
      local_b88 = *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)*(int *)(param_1 + 0x148) * 4);
    }
    local_bf8 = (longlong)local_b88;
    if (*(char *)(local_bf8 + param_2[4]) == '\0') {
      FUN_14060c680(plVar13,local_b88);
    }
    puVar7 = (undefined8 *)(local_bf8 * 0x30 + *plVar13);
    local_148 = *puVar7;
    uStack_140 = puVar7[1];
    local_138 = puVar7[2];
    uStack_130 = puVar7[3];
    local_128 = puVar7[4];
    uStack_120 = puVar7[5];
    if (*(char *)(param_1 + 0x164) == '\0') {
      local_b84 = *(int *)(param_1 + 0x168);
    }
    else if (*(int *)(param_1 + 0x160) == -1) {
      local_b84 = -1;
    }
    else {
      local_b84 = *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)*(int *)(param_1 + 0x160) * 4);
    }
    local_bf8 = (longlong)local_b84;
    if (*(char *)(local_bf8 + param_2[4]) == '\0') {
      FUN_14060c680(plVar13);
    }
    puVar7 = (undefined8 *)(local_bf8 * 0x30 + *plVar13);
    local_178 = *puVar7;
    uStack_170 = puVar7[1];
    local_168 = puVar7[2];
    uStack_160 = puVar7[3];
    local_158 = puVar7[4];
    uStack_150 = puVar7[5];
    FUN_14162bcf0(&local_178,local_118,&local_148);
    local_be4 = SQRT(fStack_104 * fStack_104 + local_108 * local_108 + fStack_100 * fStack_100);
  }
  else if ((cVar3 == '\x02') && (local_be4 = *(float *)(param_1 + 0x178), local_be4 <= 0.0))
  goto LAB_142c9aa92;
  if ((DAT_146b30d98 != '\0') && (*(char *)(param_1 + 0x1a0) == '\x02')) {
    *(undefined1 *)(param_1 + 400) = 1;
  }
  if ((*(char *)(param_1 + 400) != '\0') ||
     ((DAT_1466acffc != '\0' && (*(char *)(param_1 + 0x1a0) == '\x02')))) {
    _local_af8 = ZEXT416((uint)local_c08);
    _local_b18 = ZEXT416((uint)local_c08);
    fVar33 = local_c08;
    fVar22 = local_c08;
    goto LAB_142c9c24d;
  }
  FAxis::FAxis(&local_b38,&DAT_1464aa7a8);
  lVar6 = *param_2;
  fVar56 = -(float)local_288;
  fVar33 = *(float *)(lVar6 + 0x10);
  fVar32 = -*(float *)(lVar6 + 0x14);
  fVar22 = -*(float *)(lVar6 + 0x14) + fVar32;
  fVar31 = fVar33 + fVar33;
  fVar57 = -*(float *)(lVar6 + 0x18) * fVar22 + *(float *)(lVar6 + 0x1c) * fVar31;
  fVar55 = *(float *)(lVar6 + 0x1c) * fVar22 - -*(float *)(lVar6 + 0x18) * fVar31;
  fVar32 = (-fVar33 * fVar31 - fVar32 * fVar22) + 1.0;
  fVar31 = -local_288._4_4_ * fVar32 - -(float)uStack_280 * fVar57;
  fVar22 = -(float)uStack_280 * fVar55 - fVar56 * fVar32;
  fVar31 = fVar31 + fVar31;
  fVar33 = fVar56 * fVar57 - -local_288._4_4_ * fVar55;
  fVar22 = fVar22 + fVar22;
  fVar33 = fVar33 + fVar33;
  local_958._4_4_ = fRam00000001468b5b84;
  local_958._0_4_ = _DAT_1468b5b80;
  uStack_950._4_4_ = fRam00000001468b5b8c;
  uStack_950._0_4_ = fRam00000001468b5b88;
  local_b38 = CONCAT44((-(float)uStack_280 * fVar31 - fVar56 * fVar33) +
                       uStack_280._4_4_ * fVar22 + fVar57,
                       (-local_288._4_4_ * fVar33 - -(float)uStack_280 * fVar22) +
                       uStack_280._4_4_ * fVar31 + fVar55);
  local_968 = CONCAT44(fRam00000001468b5b74,_DAT_1468b5b70);
  uStack_960 = CONCAT44(fRam00000001468b5b7c,fRam00000001468b5b78);
  fStack_b40 = (fVar56 * fVar22 - -local_288._4_4_ * fVar31) + uStack_280._4_4_ * fVar33 + fVar32;
  local_948 = CONCAT44(fRam00000001468b5b94,_DAT_1468b5b90);
  uStack_940 = CONCAT44(fRam00000001468b5b9c,fRam00000001468b5b98);
  fStack_b30 = fStack_b40;
  cVar3 = FBoneReference::IsValidToEvaluate(param_1 + 0x1c0,lVar5);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 600) == -1) {
      fVar22 = *(float *)(param_1 + 0x2a0);
      fVar55 = *(float *)(param_1 + 0x2a4);
      fVar56 = *(float *)(param_1 + 0x2a8);
      fVar33 = *(float *)(param_1 + 0x2ac);
      lVar6 = *param_2;
      fVar49 = *(float *)(lVar6 + 0x10) * _DAT_146b30060;
      fVar50 = *(float *)(lVar6 + 0x14) * fRam0000000146b30064;
      fVar29 = *(float *)(lVar6 + 0x18) * fRam0000000146b30068;
      fVar30 = *(float *)(lVar6 + 0x1c) * fRam0000000146b3006c;
      fVar32 = *(float *)(param_1 + 0x17c) * *(float *)(param_1 + 0x2c0);
      fVar35 = *(float *)(param_1 + 0x180) * *(float *)(param_1 + 0x2c4);
      fVar37 = *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x2c8);
      fVar48 = *(float *)(param_1 + 0x2cc) * 0.0;
      fVar57 = fVar37 * fVar55 - fVar35 * fVar56;
      fVar38 = fVar32 * fVar56 - fVar37 * fVar22;
      fVar34 = fVar35 * fVar22 - fVar32 * fVar55;
      fVar31 = fVar48 * fVar33 - fVar48 * fVar33;
      fVar57 = fVar57 + fVar57;
      fVar38 = fVar38 + fVar38;
      fVar34 = fVar34 + fVar34;
      auVar14._0_4_ = fVar33 * fVar57 + fVar32;
      auVar14._4_4_ = fVar33 * fVar38 + fVar35;
      auVar14._8_4_ = fVar33 * fVar34 + fVar37;
      auVar14._12_4_ = fVar33 * (fVar31 + fVar31) + fVar48;
      auVar47 = *(undefined1 (*) [16])(lVar6 + 0x30);
      fVar33 = auVar47._0_4_;
      fVar31 = auVar47._4_4_;
      fVar32 = auVar47._8_4_;
      auVar47 = rcpps(auVar14,auVar47);
      fVar35 = (float)((uint)((*(float *)*(undefined1 (*) [12])(param_1 + 0x1e0) +
                              (fVar34 * fVar55 - fVar38 * fVar56) + auVar14._0_4_) -
                             *(float *)(lVar6 + 0x20)) & _DAT_146b2ff80);
      fVar37 = (float)((uint)((*(float *)(param_1 + 0x1e4) +
                              (fVar57 * fVar56 - fVar34 * fVar22) + auVar14._4_4_) -
                             *(float *)(lVar6 + 0x24)) & uRam0000000146b2ff84);
      fVar48 = (float)((uint)((*(float *)(param_1 + 0x1e8) +
                              (fVar38 * fVar22 - fVar57 * fVar55) + auVar14._8_4_) -
                             *(float *)(lVar6 + 0x28)) & uRam0000000146b2ff88);
      fVar55 = fVar48 * fVar50 - fVar37 * fVar29;
      fVar56 = fVar35 * fVar29 - fVar48 * fVar49;
      fVar57 = fVar37 * fVar49 - fVar35 * fVar50;
      fVar22 = auVar47._0_4_;
      fVar38 = auVar47._4_4_;
      fVar34 = auVar47._8_4_;
      fVar55 = fVar55 + fVar55;
      fVar56 = fVar56 + fVar56;
      fVar57 = fVar57 + fVar57;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar33;
      fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * fVar31;
      fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar32;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar33;
      fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * fVar31;
      fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar32;
      fVar22 = ((fVar57 * fVar50 - fVar56 * fVar29) + fVar30 * fVar55 + fVar35) *
               (float)(-(uint)((float)((uint)fVar33 & _DAT_146b30010) <= _DAT_146b30050) &
                       (uint)fVar22 ^ (uint)fVar22);
      local_b18._4_4_ =
           ((fVar55 * fVar29 - fVar57 * fVar49) + fVar30 * fVar56 + fVar37) *
           (float)(-(uint)((float)((uint)fVar31 & uRam0000000146b30014) <= fRam0000000146b30054) &
                   (uint)fVar38 ^ (uint)fVar38);
      fVar33 = ((fVar56 * fVar49 - fVar55 * fVar50) + fVar30 * fVar57 + fVar48) *
               (float)(-(uint)((float)((uint)fVar32 & uRam0000000146b30018) <= fRam0000000146b30058)
                       & (uint)fVar34 ^ (uint)fVar34);
      local_af8._4_4_ = fVar33;
      local_af8._0_4_ = fVar33;
      fStack_af0 = fVar33;
      fStack_aec = fVar33;
      uStack_950._4_4_ = 0.0;
      _local_958 = *(undefined1 (*) [12])(param_1 + 0x1e0);
    }
    else {
      if (*(int *)(param_1 + 0x25c) == -1) {
        _local_af8 = ZEXT416((uint)local_c08);
        _local_b18 = ZEXT416((uint)local_c08);
        fVar31 = local_c08;
        fVar33 = local_c08;
        fVar22 = local_c08;
        goto LAB_142c9b8b5;
      }
      pfVar8 = (float *)FUN_140611730(plVar13,*(undefined4 *)(param_1 + 0x25c));
      fVar57 = fRam0000000146b2ff78;
      fVar56 = fRam0000000146b2ff74;
      fVar55 = _DAT_146b2ff70;
      local_608 = *pfVar8;
      fStack_604 = pfVar8[1];
      fStack_600 = pfVar8[2];
      fStack_5fc = pfVar8[3];
      local_5f8 = pfVar8[4];
      fStack_5f4 = pfVar8[5];
      fStack_5f0 = pfVar8[6];
      fStack_5ec = pfVar8[7];
      local_8d8 = (float)((uint)_DAT_146b2ff70 & _DAT_146b2ff80);
      fStack_8d4 = (float)((uint)fRam0000000146b2ff74 & uRam0000000146b2ff84);
      fStack_8d0 = (float)((uint)fRam0000000146b2ff78 & uRam0000000146b2ff88);
      fStack_8cc = (float)((uint)fRam0000000146b2ff7c & uRam0000000146b2ff8c);
      local_5e8 = *(undefined1 (*) [16])(pfVar8 + 8);
      fVar33 = local_5e8._0_4_;
      fVar22 = local_5e8._4_4_;
      fVar31 = local_5e8._8_4_;
      fVar32 = local_5e8._12_4_;
      local_8f8 = 0.0;
      fStack_8f4 = 0.0;
      fStack_8f0 = 0.0;
      fStack_8ec = fRam0000000146b2ff7c;
      local_8e8 = 0;
      uStack_8e0 = 0;
      auVar47 = *(undefined1 (*) [16])(param_1 + 0x280);
      auVar14 = minps(auVar47,local_5e8);
      auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146b2ffd4);
      auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146b2ffd0);
      auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146b2ffd8);
      auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146b2ffdc);
      iVar4 = movmskps((int)pfVar8,auVar15);
      if (iVar4 == 0) {
        fVar55 = *(float *)(param_1 + 0x260);
        fVar56 = *(float *)(param_1 + 0x264);
        fVar57 = *(float *)(param_1 + 0x268);
        fVar38 = *(float *)(param_1 + 0x26c);
        fVar34 = fVar33 * *(float *)(param_1 + 0x270);
        fVar35 = fVar22 * *(float *)(param_1 + 0x274);
        fVar37 = fVar31 * *(float *)(param_1 + 0x278);
        fVar48 = fVar32 * *(float *)(param_1 + 0x27c);
        local_8f8 = local_608 * fVar38 * _DAT_146b2ffb0 + fStack_5fc * fVar55 +
                    fStack_604 * fVar57 * _DAT_146b2ffa0 + fStack_600 * fVar56 * _DAT_146b2ff90;
        fStack_8f4 = local_608 * fVar57 * fRam0000000146b2ffb4 + fStack_5fc * fVar56 +
                     fStack_604 * fVar38 * fRam0000000146b2ffa4 +
                     fStack_600 * fVar55 * fRam0000000146b2ff94;
        fStack_8f0 = local_608 * fVar56 * fRam0000000146b2ffb8 + fStack_5fc * fVar57 +
                     fStack_604 * fVar55 * fRam0000000146b2ffa8 +
                     fStack_600 * fVar38 * fRam0000000146b2ff98;
        fStack_8ec = local_608 * fVar55 * fRam0000000146b2ffbc + fStack_5fc * fVar38 +
                     fStack_604 * fVar56 * fRam0000000146b2ffac +
                     fStack_600 * fVar57 * fRam0000000146b2ff9c;
        fVar55 = fVar37 * fStack_604 - fVar35 * fStack_600;
        fVar56 = fVar34 * fStack_600 - fVar37 * local_608;
        fVar57 = fVar35 * local_608 - fVar34 * fStack_604;
        fVar38 = fVar48 * fStack_5fc - fVar48 * fStack_5fc;
        fVar55 = fVar55 + fVar55;
        fVar56 = fVar56 + fVar56;
        fVar57 = fVar57 + fVar57;
        fVar38 = fVar38 + fVar38;
        local_958._0_4_ =
             (fVar57 * fStack_604 - fVar56 * fStack_600) + fVar55 * fStack_5fc + fVar34 + local_5f8;
        local_958._4_4_ =
             (fVar55 * fStack_600 - fVar57 * local_608) + fVar56 * fStack_5fc + fVar35 + fStack_5f4;
        uStack_950._0_4_ =
             (fVar56 * local_608 - fVar55 * fStack_604) + fVar57 * fStack_5fc + fVar37 + fStack_5f0;
        uStack_950._4_4_ =
             (fVar38 * fStack_5fc - fVar38 * fStack_5fc) + fVar38 * fStack_5fc + fVar48 + fStack_5ec
        ;
      }
      else {
        fVar38 = fStack_604 + fStack_604;
        fVar35 = fStack_600 + fStack_600;
        fVar37 = local_608 * (local_608 + local_608);
        fVar34 = (local_608 + local_608) * fStack_5fc;
        fStack_644 = (fVar35 * fStack_5fc + fVar38 * local_608) * fVar33;
        fStack_630 = (fVar34 + fVar35 * fStack_604) * fVar22;
        local_628 = (fVar38 * fStack_5fc + fVar35 * local_608) * fVar31;
        local_638 = fVar22 * (fVar38 * local_608 - fVar35 * fStack_5fc);
        fStack_624 = fVar31 * (fVar35 * fStack_604 - fVar34);
        fStack_640 = fVar33 * (fVar35 * local_608 - fVar38 * fStack_5fc);
        local_648 = (float)((uint)((_DAT_146b2ff70 - (fStack_600 * fVar35 + fStack_604 * fVar38)) *
                                  fVar33) & _DAT_146b2ff80);
        fStack_634 = (float)((uint)((fRam0000000146b2ff74 - (fStack_600 * fVar35 + fVar37)) * fVar22
                                   ) & uRam0000000146b2ff84);
        fStack_620 = (float)((uint)((fRam0000000146b2ff78 - (fStack_604 * fVar38 + fVar37)) * fVar31
                                   ) & uRam0000000146b2ff88);
        fStack_63c = (float)((uint)((fRam0000000146b2ff7c - (fVar37 + fVar37)) * fVar32) &
                            uRam0000000146b2ff8c);
        fStack_60c = fRam0000000146b2ff7c;
        fVar38 = *(float *)(param_1 + 0x260);
        fVar34 = *(float *)(param_1 + 0x264);
        fVar35 = *(float *)(param_1 + 0x268);
        fVar37 = *(float *)(param_1 + 0x26c);
        fVar29 = fVar34 + fVar34;
        fVar30 = fVar35 + fVar35;
        fVar51 = fVar38 * (fVar38 + fVar38);
        fVar36 = fVar37 * (fVar38 + fVar38);
        fVar48 = *(float *)(param_1 + 0x280);
        fVar49 = *(float *)(param_1 + 0x284);
        fVar50 = *(float *)(param_1 + 0x288);
        fStack_594 = (fVar37 * fVar30 + fVar38 * fVar29) * fVar48;
        fStack_580 = (fVar36 + fVar34 * fVar30) * fVar49;
        local_578 = (fVar37 * fVar29 + fVar38 * fVar30) * fVar50;
        local_588 = fVar49 * (fVar38 * fVar29 - fVar37 * fVar30);
        fStack_574 = fVar50 * (fVar34 * fVar30 - fVar36);
        fStack_590 = fVar48 * (fVar38 * fVar30 - fVar37 * fVar29);
        local_598 = (float)((uint)((_DAT_146b2ff70 - (fVar35 * fVar30 + fVar34 * fVar29)) * fVar48)
                           & _DAT_146b2ff80);
        fStack_584 = (float)((uint)((fRam0000000146b2ff74 - (fVar35 * fVar30 + fVar51)) * fVar49) &
                            uRam0000000146b2ff84);
        fStack_570 = (float)((uint)((fRam0000000146b2ff78 - (fVar34 * fVar29 + fVar51)) * fVar50) &
                            uRam0000000146b2ff88);
        fStack_58c = (float)((uint)((fRam0000000146b2ff7c - (fVar51 + fVar51)) *
                                   *(float *)(param_1 + 0x28c)) & uRam0000000146b2ff8c);
        local_568 = *(float *)(param_1 + 0x270);
        fStack_564 = *(float *)(param_1 + 0x274);
        fStack_560 = *(float *)(param_1 + 0x278);
        fStack_55c = fRam0000000146b2ff7c;
        local_ae8 = fStack_594 * local_638 + local_598 * local_648 + fStack_590 * local_628 +
                    fStack_58c * local_5f8;
        fStack_ae4 = fStack_594 * fStack_634 + local_598 * fStack_644 + fStack_590 * fStack_624 +
                     fStack_58c * fStack_5f4;
        fStack_ae0 = fStack_594 * fStack_630 + local_598 * fStack_640 + fStack_590 * fStack_620 +
                     fStack_58c * fStack_5f0;
        fStack_adc = fStack_594 * fStack_63c + local_598 * fStack_63c + fStack_590 * fStack_63c +
                     fStack_58c * fRam0000000146b2ff7c;
        local_ad8 = fStack_584 * local_638 + local_588 * local_648 + fStack_580 * local_628 +
                    fStack_58c * local_5f8;
        fStack_ad4 = fStack_584 * fStack_634 + local_588 * fStack_644 + fStack_580 * fStack_624 +
                     fStack_58c * fStack_5f4;
        fStack_ad0 = fStack_584 * fStack_630 + local_588 * fStack_640 + fStack_580 * fStack_620 +
                     fStack_58c * fStack_5f0;
        fStack_acc = fStack_584 * fStack_63c + local_588 * fStack_63c + fStack_580 * fStack_63c +
                     fStack_58c * fRam0000000146b2ff7c;
        local_ac8 = fStack_574 * local_638 + local_578 * local_648 + fStack_570 * local_628 +
                    fStack_58c * local_5f8;
        fStack_ac4 = fStack_574 * fStack_634 + local_578 * fStack_644 + fStack_570 * fStack_624 +
                     fStack_58c * fStack_5f4;
        fStack_ac0 = fStack_574 * fStack_630 + local_578 * fStack_640 + fStack_570 * fStack_620 +
                     fStack_58c * fStack_5f0;
        fStack_abc = fStack_574 * fStack_63c + local_578 * fStack_63c + fStack_570 * fStack_63c +
                     fStack_58c * fRam0000000146b2ff7c;
        local_ab8 = fStack_564 * local_638 + local_568 * local_648 + fStack_560 * local_628 +
                    fRam0000000146b2ff7c * local_5f8;
        fStack_ab4 = fStack_564 * fStack_634 + local_568 * fStack_644 + fStack_560 * fStack_624 +
                     fRam0000000146b2ff7c * fStack_5f4;
        fStack_ab0 = fStack_564 * fStack_630 + local_568 * fStack_640 + fStack_560 * fStack_620 +
                     fRam0000000146b2ff7c * fStack_5f0;
        fStack_aac = fStack_564 * fStack_63c + local_568 * fStack_63c + fStack_560 * fStack_63c +
                     fRam0000000146b2ff7c * fRam0000000146b2ff7c;
        fStack_62c = fStack_63c;
        fStack_61c = fStack_63c;
        local_618 = local_5f8;
        fStack_614 = fStack_5f4;
        fStack_610 = fStack_5f0;
        fStack_57c = fStack_58c;
        fStack_56c = fStack_58c;
        FMatrix::RemoveScaling(&local_ae8);
        fVar55 = (float)(-(uint)(_DAT_146b2ffd0 <= fVar33 * auVar47._0_4_) &
                         (_DAT_146b2ffc0 ^ (uint)fVar55) ^ _DAT_146b2ffc0);
        fVar56 = (float)(-(uint)(fRam0000000146b2ffd4 <= fVar22 * auVar47._4_4_) &
                         (uRam0000000146b2ffc4 ^ (uint)fVar56) ^ uRam0000000146b2ffc4);
        fVar57 = (float)(-(uint)(fRam0000000146b2ffd8 <= fVar31 * auVar47._8_4_) &
                         (uRam0000000146b2ffc8 ^ (uint)fVar57) ^ uRam0000000146b2ffc8);
        local_ae8 = local_ae8 * fVar55;
        fStack_ae4 = fStack_ae4 * fVar55;
        fStack_ae0 = fStack_ae0 * fVar55;
        fStack_ad4 = fStack_ad4 * fVar56;
        fStack_ad0 = fStack_ad0 * fVar56;
        local_ad8 = local_ad8 * fVar56;
        fStack_ac4 = fStack_ac4 * fVar57;
        fStack_ac0 = fStack_ac0 * fVar57;
        local_ac8 = local_ac8 * fVar57;
        FQuat::FQuat(&local_b28,&local_ae8);
        local_c08 = 1e-08;
        auVar23._0_4_ = local_b28 * local_b28 + fStack_b20 * fStack_b20;
        auVar23._4_4_ = fStack_b24 * fStack_b24 + fStack_b1c * fStack_b1c;
        auVar23._8_4_ = fStack_b20 * fStack_b20 + local_b28 * local_b28;
        auVar23._12_4_ = fStack_b1c * fStack_b1c + fStack_b24 * fStack_b24;
        auVar41._0_4_ = auVar23._4_4_ + auVar23._0_4_;
        auVar41._4_4_ = auVar23._8_4_ + auVar23._4_4_;
        auVar41._8_4_ = auVar23._12_4_ + auVar23._8_4_;
        auVar41._12_4_ = auVar23._0_4_ + auVar23._12_4_;
        auVar14 = rsqrtps(auVar23,auVar41);
        fVar55 = auVar14._0_4_;
        fVar56 = auVar14._4_4_;
        fVar57 = auVar14._8_4_;
        fVar38 = auVar14._12_4_;
        fVar55 = (_DAT_146b2ff60 - fVar55 * fVar55 * auVar41._0_4_ * _DAT_146b2ff60) * fVar55 +
                 fVar55;
        fVar56 = (fRam0000000146b2ff64 - fVar56 * fVar56 * auVar41._4_4_ * fRam0000000146b2ff64) *
                 fVar56 + fVar56;
        fVar57 = (fRam0000000146b2ff68 - fVar57 * fVar57 * auVar41._8_4_ * fRam0000000146b2ff68) *
                 fVar57 + fVar57;
        fVar38 = (fRam0000000146b2ff6c - fVar38 * fVar38 * auVar41._12_4_ * fRam0000000146b2ff6c) *
                 fVar38 + fVar38;
        uStack_950._4_4_ = 0.0;
        local_8f8 = (float)(((uint)(((_DAT_146b2ff60 -
                                     fVar55 * fVar55 * auVar41._0_4_ * _DAT_146b2ff60) * fVar55 +
                                    fVar55) * local_b28) ^ _DAT_146b2ff50) &
                            -(uint)(1e-08 <= auVar41._0_4_) ^ _DAT_146b2ff50);
        fStack_8f4 = (float)(((uint)(((fRam0000000146b2ff64 -
                                      fVar56 * fVar56 * auVar41._4_4_ * fRam0000000146b2ff64) *
                                      fVar56 + fVar56) * fStack_b24) ^ uRam0000000146b2ff54) &
                             -(uint)(1e-08 <= auVar41._4_4_) ^ uRam0000000146b2ff54);
        fStack_8f0 = (float)(((uint)(((fRam0000000146b2ff68 -
                                      fVar57 * fVar57 * auVar41._8_4_ * fRam0000000146b2ff68) *
                                      fVar57 + fVar57) * fStack_b20) ^ uRam0000000146b2ff58) &
                             -(uint)(1e-08 <= auVar41._8_4_) ^ uRam0000000146b2ff58);
        fStack_8ec = (float)(((uint)(((fRam0000000146b2ff6c -
                                      fVar38 * fVar38 * auVar41._12_4_ * fRam0000000146b2ff6c) *
                                      fVar38 + fVar38) * fStack_b1c) ^ uRam0000000146b2ff5c) &
                             -(uint)(1e-08 <= auVar41._12_4_) ^ uRam0000000146b2ff5c);
        local_958._0_4_ = local_ab8;
        local_958._4_4_ = fStack_ab4;
        uStack_950._0_4_ = fStack_ab0;
      }
      fStack_8cc = fVar32 * auVar47._12_4_;
      fStack_8d0 = fVar31 * auVar47._8_4_;
      fStack_8d4 = fVar22 * auVar47._4_4_;
      local_8d8 = fVar33 * auVar47._0_4_;
      local_8e8 = CONCAT44(local_958._4_4_,local_958._0_4_);
      uStack_8e0 = CONCAT44(uStack_950._4_4_,(float)uStack_950);
      fVar33 = *(float *)(param_1 + 0x2a0);
      fVar22 = *(float *)(param_1 + 0x2a4);
      fVar31 = *(float *)(param_1 + 0x2a8);
      fVar32 = *(float *)(param_1 + 0x2ac);
      fVar38 = *(float *)(param_1 + 0x17c) * *(float *)(param_1 + 0x2c0);
      fVar34 = *(float *)(param_1 + 0x180) * *(float *)(param_1 + 0x2c4);
      fVar35 = *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x2c8);
      fVar55 = fVar35 * fVar22 - fVar34 * fVar31;
      fVar56 = fVar38 * fVar31 - fVar35 * fVar33;
      fVar57 = fVar34 * fVar33 - fVar38 * fVar22;
      fVar55 = fVar55 + fVar55;
      fVar56 = fVar56 + fVar56;
      fVar57 = fVar57 + fVar57;
      local_968 = CONCAT44(fStack_8f4,local_8f8);
      uStack_960 = CONCAT44(fStack_8ec,fStack_8f0);
      fVar38 = ((fVar57 * fVar22 - fVar56 * fVar31) + fVar32 * fVar55 + fVar38 +
               *(float *)(param_1 + 0x1e0)) * local_8d8;
      fVar34 = ((fVar55 * fVar31 - fVar57 * fVar33) + fVar32 * fVar56 + fVar34 +
               *(float *)(param_1 + 0x1e4)) * fStack_8d4;
      fVar55 = ((fVar56 * fVar33 - fVar55 * fVar22) + fVar32 * fVar57 + fVar35 +
               *(float *)(param_1 + 0x1e8)) * fStack_8d0;
      fVar33 = fVar55 * fStack_8f4 - fVar34 * fStack_8f0;
      fVar31 = fVar38 * fStack_8f0 - fVar55 * local_8f8;
      fVar32 = fVar34 * local_8f8 - fVar38 * fStack_8f4;
      fVar33 = fVar33 + fVar33;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar22 = (fVar32 * fStack_8f4 - fVar31 * fStack_8f0) + fStack_8ec * fVar33 + fVar38 +
               (float)local_958._0_4_;
      local_b18._4_4_ =
           (fVar33 * fStack_8f0 - fVar32 * local_8f8) + fStack_8ec * fVar31 + fVar34 +
           (float)local_958._4_4_;
      fVar33 = (fVar31 * local_8f8 - fVar33 * fStack_8f4) + fStack_8ec * fVar32 + fVar55 +
               (float)uStack_950;
      local_af8._4_4_ = fVar33;
      local_af8._0_4_ = fVar33;
      fStack_af0 = fVar33;
      fStack_aec = fVar33;
      local_948 = CONCAT44(fStack_8d4,local_8d8);
      uStack_940 = CONCAT44(fStack_8cc,fStack_8d0);
    }
    local_b18._0_4_ = local_b18._4_4_;
    uStack_b10._0_4_ = local_b18._4_4_;
    uStack_b10._4_4_ = local_b18._4_4_;
    fVar31 = (float)local_b18._4_4_;
  }
  else {
    if (*(char *)(param_1 + 0x1cc) == '\0') {
      local_b80 = *(int *)(param_1 + 0x1d0);
    }
    else if (*(int *)(param_1 + 0x1c8) == -1) {
      local_b80 = -1;
    }
    else {
      local_b80 = *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)*(int *)(param_1 + 0x1c8) * 4);
    }
    local_bf8 = (longlong)local_b80;
    if (*(char *)(local_bf8 + param_2[4]) == '\0') {
      FUN_14060c680(plVar13,local_b80);
    }
    pfVar8 = (float *)(local_bf8 * 0x30 + *plVar13);
    fVar33 = *pfVar8;
    fVar22 = pfVar8[1];
    local_968 = *(undefined8 *)pfVar8;
    fVar32 = pfVar8[2];
    fVar55 = pfVar8[3];
    uStack_960 = *(undefined8 *)(pfVar8 + 2);
    _local_958 = *(undefined1 (*) [16])(pfVar8 + 4);
    local_948 = *(undefined8 *)(pfVar8 + 8);
    uStack_940 = *(undefined8 *)(pfVar8 + 10);
    fVar31 = *(float *)(param_1 + 0x2a0);
    fVar56 = *(float *)(param_1 + 0x2a4);
    fVar57 = *(float *)(param_1 + 0x2a8);
    fVar38 = *(float *)(param_1 + 0x2ac);
    fVar48 = *(float *)(param_1 + 0x17c) * *(float *)(param_1 + 0x2c0);
    fVar49 = *(float *)(param_1 + 0x180) * *(float *)(param_1 + 0x2c4);
    fVar50 = *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x2c8);
    fVar34 = fVar50 * fVar56 - fVar49 * fVar57;
    fVar35 = fVar48 * fVar57 - fVar50 * fVar31;
    fVar37 = fVar49 * fVar31 - fVar48 * fVar56;
    fVar34 = fVar34 + fVar34;
    fVar35 = fVar35 + fVar35;
    fVar37 = fVar37 + fVar37;
    fVar48 = ((fVar37 * fVar56 - fVar35 * fVar57) + fVar38 * fVar34 + fVar48 +
             *(float *)(param_1 + 0x1e0)) * pfVar8[8];
    fVar49 = ((fVar34 * fVar57 - fVar37 * fVar31) + fVar38 * fVar35 + fVar49 +
             *(float *)(param_1 + 0x1e4)) * pfVar8[9];
    fVar31 = ((fVar35 * fVar31 - fVar34 * fVar56) + fVar38 * fVar37 + fVar50 +
             *(float *)(param_1 + 0x1e8)) * pfVar8[10];
    fVar56 = fVar31 * fVar22 - fVar49 * fVar32;
    fVar57 = fVar48 * fVar32 - fVar31 * fVar33;
    fVar38 = fVar49 * fVar33 - fVar48 * fVar22;
    fVar56 = fVar56 + fVar56;
    fVar57 = fVar57 + fVar57;
    fVar38 = fVar38 + fVar38;
    local_b18._4_4_ = (fVar56 * fVar32 - fVar38 * fVar33) + fVar55 * fVar57 + fVar49 + pfVar8[5];
    local_af8._4_4_ = (fVar57 * fVar33 - fVar56 * fVar22) + fVar55 * fVar38 + fVar31 + pfVar8[6];
    local_b18._0_4_ = local_b18._4_4_;
    uStack_b10._0_4_ = local_b18._4_4_;
    uStack_b10._4_4_ = local_b18._4_4_;
    local_af8._0_4_ = local_af8._4_4_;
    fStack_af0 = (float)local_af8._4_4_;
    fStack_aec = (float)local_af8._4_4_;
    fVar31 = (float)local_b18._4_4_;
    fVar33 = (float)local_af8._4_4_;
    fVar22 = (fVar38 * fVar22 - fVar57 * fVar32) + fVar55 * fVar56 + fVar48 +
             *(float *)*(undefined1 (*) [16])(pfVar8 + 4);
  }
LAB_142c9b8b5:
  if (((*(float *)(param_1 + 0x17c) != 0.0) || (*(float *)(param_1 + 0x180) != 0.0)) ||
     (*(float *)(param_1 + 0x184) != 0.0)) {
    (**(code **)(**(longlong **)(*param_2 + 0xa0) + 0x148))();
  }
  local_b48 = *(undefined8 *)(param_1 + 0x23c);
  fVar32 = *(float *)(param_1 + 0x22c);
  fVar55 = fVar22 - (float)local_b48;
  fStack_b40 = *(float *)(param_1 + 0x244);
  fVar56 = fVar31 - (float)((ulonglong)local_b48 >> 0x20);
  local_bf8 = CONCAT44(fVar31,fVar22);
  if (fVar56 * fVar56 + fVar55 * fVar55 + (fVar33 - fStack_b40) * (fVar33 - fStack_b40) <=
      fVar32 * fVar32) {
    if (fVar32 == 0.0) goto LAB_142c9b98f;
  }
  else {
    if (*(float *)(param_1 + 0x228) < *(float *)(param_1 + 0x254) ||
        *(float *)(param_1 + 0x228) == *(float *)(param_1 + 0x254)) {
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    *(undefined8 *)(param_1 + 0x248) = local_b48;
    *(float *)(param_1 + 0x250) = fStack_b40;
LAB_142c9b98f:
    *(longlong *)(param_1 + 0x23c) = local_bf8;
    *(float *)(param_1 + 0x244) = fVar33;
  }
  fStack_bf0 = fVar33;
  if (*(float *)(param_1 + 0x228) <= 0.0) {
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x23c);
    fVar31 = *(float *)(param_1 + 0x244);
LAB_142c9ba7e:
    *(float *)(param_1 + 0x238) = fVar31;
  }
  else {
    fVar32 = *(float *)(param_1 + 0x254) / *(float *)(param_1 + 0x228);
    if (fVar32 < 1.0) {
      fVar33 = *(float *)(param_1 + 0x248);
      fVar55 = *(float *)(param_1 + 0x24c);
      fVar31 = *(float *)(param_1 + 0x250);
      fVar32 = (float)FUN_141f86520(fVar32,*(undefined1 *)(param_1 + 0x224));
      fVar31 = (*(float *)(param_1 + 0x244) - fVar31) * fVar32 + fVar31;
      *(ulonglong *)(param_1 + 0x230) =
           CONCAT44((*(float *)(param_1 + 0x240) - fVar55) * fVar32 + fVar55,
                    (*(float *)(param_1 + 0x23c) - fVar33) * fVar32 + fVar33);
      fVar33 = (float)local_af8._0_4_;
      fStack_b40 = fVar31;
      goto LAB_142c9ba7e;
    }
  }
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_1 + 0x244);
  local_6b8 = local_288;
  uStack_6b0 = uStack_280;
  local_698 = local_268;
  uStack_690 = uStack_260;
  local_6a8 = local_278;
  uStack_6a0 = uStack_270;
  FUN_142ca1830(param_1,local_980,&local_6b8,param_2);
  FAxis::GetTransformedAxis(param_1 + 0x210,local_8c8,&local_288);
  local_c18 = *(undefined4 *)(param_1 + 0x220);
  local_c20 = local_8c8;
  local_c28 = (undefined4 *)CONCAT71(local_c28._1_7_,*(undefined1 *)(param_1 + 0x20c));
  AnimationCore::SolveAim(&local_908,&local_288,param_1 + 0x230,local_980);
  uStack_ba0 = &local_288;
  local_6f8 = &PTR_LAB_145848b18;
  local_6c0 = &local_6f8;
  fVar57 = local_288._4_4_ * local_908;
  fVar38 = (float)local_288 * local_908;
  fVar31 = (float)local_288 * fStack_904;
  fVar32 = local_288._4_4_ * fStack_904;
  fVar55 = (float)local_288 * fStack_900;
  fVar56 = (float)uStack_280 * fStack_900;
  local_288._0_4_ =
       uStack_280._4_4_ * local_908 * _DAT_146b2ffb0 + fStack_8fc * (float)local_288 +
       (float)uStack_280 * fStack_904 * _DAT_146b2ffa0 +
       local_288._4_4_ * fStack_900 * _DAT_146b2ff90;
  local_288._4_4_ =
       (float)uStack_280 * local_908 * fRam0000000146b2ffb4 + fStack_8fc * local_288._4_4_ +
       uStack_280._4_4_ * fStack_904 * fRam0000000146b2ffa4 + fVar55 * fRam0000000146b2ff94;
  uStack_280._0_4_ =
       fVar57 * fRam0000000146b2ffb8 + fStack_8fc * (float)uStack_280 +
       fVar31 * fRam0000000146b2ffa8 + uStack_280._4_4_ * fStack_900 * fRam0000000146b2ff98;
  uStack_280._4_4_ =
       fVar38 * fRam0000000146b2ffbc + fStack_8fc * uStack_280._4_4_ + fVar32 * fRam0000000146b2ffac
       + fVar56 * fRam0000000146b2ff9c;
  local_ba8 = (longlong *)param_1;
  local_b98 = param_2;
  local_6f0 = param_1;
  puStack_6e8 = uStack_ba0;
  local_6e0 = param_2;
  FUN_1422a73c0(2,&local_6f8);
  lVar6 = *param_2;
  fVar31 = *(float *)(lVar6 + 0x10);
  fVar55 = -*(float *)(lVar6 + 0x14);
  fVar56 = fVar55 + fVar55;
  fVar57 = fVar31 + fVar31;
  fVar32 = *(float *)(lVar6 + 0x1c) * fVar57 + -*(float *)(lVar6 + 0x18) * fVar56;
  fVar38 = (-fVar31 * fVar57 - fVar55 * fVar56) + 1.0;
  local_b7c = *(float *)(param_1 + 0x234) - (float)local_278._4_4_;
  local_b78 = *(float *)(param_1 + 0x230) - (float)local_278._0_4_;
  local_c08 = *(float *)(param_1 + 0x238) - (float)uStack_270;
  fVar31 = *(float *)(lVar6 + 0x1c) * fVar56 - -*(float *)(lVar6 + 0x18) * fVar57;
  fVar55 = local_b7c * local_b7c + local_b78 * local_b78 + local_c08 * local_c08;
  if (1e-08 < fVar55) {
    auVar46._8_8_ = 0;
    auVar46._0_8_ = CONCAT44(0,fVar55);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = CONCAT44(0,fVar55);
    auVar47 = rsqrtss(auVar46,auVar47);
    fVar56 = auVar47._0_4_;
    fVar56 = fVar56 + fVar56 * (0.5 - fVar55 * 0.5 * fVar56 * fVar56);
    fVar56 = fVar56 + fVar56 * (0.5 - fVar55 * 0.5 * fVar56 * fVar56);
    local_b78 = fVar56 * local_b78;
    local_b7c = fVar56 * local_b7c;
    local_c08 = fVar56 * local_c08;
  }
  fVar55 = fVar31 * local_b78 + fVar32 * local_b7c + local_c08 * fVar38;
  fVar31 = fVar31 - fVar55 * local_b78;
  fVar32 = fVar32 - fVar55 * local_b7c;
  fVar38 = fVar38 - fVar55 * local_c08;
  fVar55 = fVar32 * fVar32 + fVar31 * fVar31 + fVar38 * fVar38;
  if (1e-08 < fVar55) {
    auVar47 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
    fVar56 = auVar47._0_4_;
    fVar56 = fVar56 + fVar56 * (0.5 - fVar55 * 0.5 * fVar56 * fVar56);
    fVar56 = fVar56 + fVar56 * (0.5 - fVar55 * 0.5 * fVar56 * fVar56);
    local_bf8 = CONCAT44(local_bf8._4_4_,fVar56);
    fVar32 = fVar56 * fVar32;
    fVar31 = fVar56 * fVar31;
    fVar38 = fVar56 * fVar38;
  }
  FAxis::GetTransformedAxis(&local_b38,&local_bf8,&local_288);
  fVar55 = (float)local_bf8;
  fVar34 = local_bf8._4_4_ * local_bf8._4_4_ + (float)local_bf8 * (float)local_bf8 +
           fStack_bf0 * fStack_bf0;
  fVar56 = local_bf8._4_4_;
  fVar57 = fStack_bf0;
  if (1e-08 < fVar34) {
    auVar47 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
    fVar57 = auVar47._0_4_;
    fVar57 = fVar57 + fVar57 * (0.5 - fVar34 * 0.5 * fVar57 * fVar57);
    fVar57 = fVar57 + fVar57 * (0.5 - fVar34 * 0.5 * fVar57 * fVar57);
    local_bf8 = CONCAT44(local_bf8._4_4_,fVar57);
    fVar55 = fVar55 * fVar57;
    fVar56 = local_bf8._4_4_ * fVar57;
    fVar57 = fStack_bf0 * fVar57;
  }
  fVar34 = fVar56 * local_b7c + fVar55 * local_b78 + fVar57 * local_c08;
  fVar55 = fVar55 - fVar34 * local_b78;
  fVar56 = fVar56 - fVar34 * local_b7c;
  fVar57 = fVar57 - fVar34 * local_c08;
  fVar34 = fVar56 * fVar56 + fVar55 * fVar55 + fVar57 * fVar57;
  if (1e-08 < fVar34) {
    auVar47 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
    fVar35 = auVar47._0_4_;
    fVar35 = fVar35 + fVar35 * (0.5 - fVar34 * 0.5 * fVar35 * fVar35);
    fVar35 = fVar35 + fVar35 * (0.5 - fVar34 * 0.5 * fVar35 * fVar35);
    local_bf8 = CONCAT44(local_bf8._4_4_,fVar35);
    fVar56 = fVar35 * fVar56;
    fVar55 = fVar35 * fVar55;
    fVar57 = fVar35 * fVar57;
  }
  local_558[0] = &PTR_LAB_145848b48;
  local_520 = local_558;
  FUN_1422a73c0(2,local_558);
  fVar32 = fVar31 * fVar55 + fVar32 * fVar56 + fVar38 * fVar57;
  fVar31 = -1.0;
  if ((-1.0 <= fVar32) && (fVar31 = fVar32, 1.0 <= fVar32)) {
    fVar31 = 1.0;
  }
  local_990 = 0;
  local_988 = _guard_xfg_dispatch_icall_nop(fVar31);
  pfVar8 = (float *)FRotator::Quaternion(&local_990,local_5a8);
  local_908 = *pfVar8;
  fStack_904 = pfVar8[1];
  fStack_900 = pfVar8[2];
  fStack_8fc = pfVar8[3];
  fVar55 = (float)local_288 * fStack_904;
  fVar56 = (float)local_288 * local_908;
  fVar31 = local_288._4_4_ * local_908;
  fVar32 = local_288._4_4_ * fStack_904;
  local_288 = CONCAT44((float)local_288 * fStack_900 * fRam0000000146b2ffb4 +
                       uStack_280._4_4_ * fStack_904 +
                       local_288._4_4_ * fStack_8fc * fRam0000000146b2ffa4 +
                       (float)uStack_280 * local_908 * fRam0000000146b2ff94,
                       (float)local_288 * fStack_8fc * _DAT_146b2ffb0 + uStack_280._4_4_ * local_908
                       + local_288._4_4_ * fStack_900 * _DAT_146b2ffa0 +
                       (float)uStack_280 * fStack_904 * _DAT_146b2ff90);
  uStack_280 = CONCAT44(fVar56 * fRam0000000146b2ffbc + uStack_280._4_4_ * fStack_8fc +
                        fVar32 * fRam0000000146b2ffac +
                        (float)uStack_280 * fStack_900 * fRam0000000146b2ff9c,
                        fVar55 * fRam0000000146b2ffb8 + uStack_280._4_4_ * fStack_900 +
                        fVar31 * fRam0000000146b2ffa8 +
                        (float)uStack_280 * fStack_8fc * fRam0000000146b2ff98);
  cVar3 = FUN_140618120(&local_288);
  if (cVar3 != '\0') {
    return;
  }
  cVar3 = FUN_140618120(local_278);
  if (cVar3 != '\0') {
    return;
  }
  cVar3 = FUN_140618120(&local_268);
  if (cVar3 != '\0') {
    return;
  }
  local_868 = local_288;
  uStack_860 = uStack_280;
  local_848 = local_268;
  uStack_840 = uStack_260;
  local_858 = local_278;
  uStack_850 = uStack_270;
  local_c08 = *(float *)(param_3 + 1);
  *(int *)(param_3 + 1) = (int)local_c08 + 1;
  local_878 = iVar12;
  if (*(int *)((longlong)param_3 + 0xc) < (int)local_c08 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_3,local_c08);
  }
  piVar10 = (int *)((longlong)(int)local_c08 * 0x40 + *param_3);
  *piVar10 = local_878;
  local_ba8 = (longlong *)local_980;
  *(undefined8 *)(piVar10 + 4) = local_868;
  *(undefined8 *)(piVar10 + 6) = uStack_860;
  *(undefined8 *)(piVar10 + 8) = local_858;
  *(undefined8 *)(piVar10 + 10) = uStack_850;
  *(undefined8 *)(piVar10 + 0xc) = local_848;
  *(undefined8 *)(piVar10 + 0xe) = uStack_840;
  uStack_ba0 = &local_288;
  local_738 = &PTR_LAB_145848b78;
  local_700 = &local_738;
  local_b98 = param_2;
  local_730 = (undefined1 *)local_ba8;
  puStack_728 = uStack_ba0;
  local_720 = param_2;
  FUN_1422a73c0(CONCAT71((int7)((ulonglong)piVar10 >> 8),2),&local_738);
LAB_142c9c24d:
  if (*(char *)(param_1 + 0x14c) == '\0') {
    iVar4 = *(int *)(param_1 + 0x150);
  }
  else if (*(int *)(param_1 + 0x148) == -1) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)*(int *)(param_1 + 0x148) * 4);
  }
  if (*(char *)(param_1 + 0x164) == '\0') {
    iVar9 = *(int *)(param_1 + 0x168);
  }
  else if (*(int *)(param_1 + 0x160) != -1) {
    iVar9 = *(int *)(*(longlong *)(local_b58 + 0x80) + (longlong)*(int *)(param_1 + 0x160) * 4);
  }
  local_bc8 = (int *)0x0;
  local_bc0 = 1;
  local_be8 = iVar9;
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_bc8,0);
  lVar5 = local_b58;
  *local_bc8 = iVar9;
  local_bd0[0] = 0;
  if (local_be8 == iVar12) {
  }
  else {
    do {
      piVar10 = (int *)FBoneContainer::GetParentBoneIndex(lVar5,local_984,&local_be8);
      uVar2 = local_bc0;
      lVar6 = (longlong)(int)local_bc0;
      local_be8 = *piVar10;
      iVar9 = (int)local_bc0 + 1;
      local_bc0 = CONCAT44(local_bc0._4_4_,iVar9);
      if (local_bc0._4_4_ < iVar9) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_bc8,uVar2 & 0xffffffff);
      }
      local_bc8[lVar6] = local_be8;
      if (local_be8 == iVar4) {
        local_bd0[0] = (int)local_bc0 + -1;
      }
    } while (local_be8 != iVar12);
  }
  plVar13 = param_2 + 1;
  local_be0 = 0;
  local_bd8 = 0;
  local_b70 = 0;
  local_b68 = 0;
  TArray<FTransform,FDefaultAllocator>::AddDefaulted(&local_be0,(int)local_bc0);
  TArray<FTransform,FDefaultAllocator>::AddDefaulted(&local_b70,(int)local_bc0 + -1);
  puVar7 = (undefined8 *)((longlong)((int)local_bd8 + -1) * 0x30 + local_be0);
  *puVar7 = local_288;
  puVar7[1] = uStack_280;
  puVar7[2] = local_278;
  puVar7[3] = uStack_270;
  puVar7[4] = local_268;
  puVar7[5] = uStack_260;
  local_bfc = (int)local_bc0 + -2;
  if (-1 < local_bfc) {
    do {
      iVar9 = local_bc8[local_bfc];
      if (*(char *)((longlong)iVar9 + param_2[4]) == '\0') {
        FUN_14060c680(plVar13);
      }
      pfVar8 = (float *)((longlong)iVar9 * 0x30 + *plVar13);
      local_1d8 = *pfVar8;
      fStack_1d4 = pfVar8[1];
      fStack_1d0 = pfVar8[2];
      fStack_1cc = pfVar8[3];
      local_1c8 = pfVar8[4];
      fStack_1c4 = pfVar8[5];
      local_b48 = *(undefined8 *)(pfVar8 + 4);
      fStack_b40 = pfVar8[6];
      fStack_b3c = pfVar8[7];
      local_1b8 = pfVar8[8];
      fStack_1b4 = pfVar8[9];
      local_b38 = *(undefined8 *)(pfVar8 + 8);
      fStack_b30 = pfVar8[10];
      fStack_b2c = pfVar8[0xb];
      iVar9 = local_bc8[local_bfc + 1];
      fStack_1c0 = fStack_b40;
      fStack_1bc = fStack_b3c;
      fStack_1b0 = fStack_b30;
      fStack_1ac = fStack_b2c;
      if (*(char *)((longlong)iVar9 + param_2[4]) == '\0') {
        FUN_14060c680(plVar13);
        local_b38 = CONCAT44(fStack_1b4,local_1b8);
        local_b48 = CONCAT44(fStack_1c4,local_1c8);
      }
      fVar48 = fRam0000000146b2ff78;
      fVar37 = fRam0000000146b2ff74;
      fVar35 = _DAT_146b2ff70;
      fVar34 = fRam0000000146b2ff6c;
      fVar38 = fRam0000000146b2ff68;
      fVar57 = fRam0000000146b2ff64;
      fVar56 = _DAT_146b2ff60;
      pfVar8 = (float *)((longlong)iVar9 * 0x30 + *plVar13);
      local_1a8 = *pfVar8;
      fStack_1a4 = pfVar8[1];
      fStack_1a0 = pfVar8[2];
      fStack_19c = pfVar8[3];
      local_198 = pfVar8[4];
      fStack_194 = pfVar8[5];
      fStack_190 = pfVar8[6];
      fStack_18c = pfVar8[7];
      local_188 = *(undefined1 (*) [16])(pfVar8 + 8);
      fVar33 = local_188._0_4_;
      fVar31 = local_188._4_4_;
      fVar32 = local_188._8_4_;
      fVar55 = local_188._12_4_;
      auVar24._0_4_ = (float)((uint)fVar33 & _DAT_146b30010);
      auVar24._4_4_ = (float)((uint)fVar31 & uRam0000000146b30014);
      auVar24._8_4_ = (float)((uint)fVar32 & uRam0000000146b30018);
      auVar24._12_4_ = (float)((uint)fVar55 & uRam0000000146b3001c);
      auVar16._4_4_ = -(uint)(fRam0000000146b30054 < auVar24._4_4_);
      auVar16._0_4_ = -(uint)(_DAT_146b30050 < auVar24._0_4_);
      auVar16._8_4_ = -(uint)(fRam0000000146b30058 < auVar24._8_4_);
      auVar16._12_4_ = -(uint)(fRam0000000146b3005c < auVar24._12_4_);
      iVar9 = movmskps((int)pfVar8,auVar16);
      local_898 = _DAT_1468b5b90;
      fStack_894 = fRam00000001468b5b94;
      fStack_890 = fRam00000001468b5b98;
      fStack_88c = fRam00000001468b5b9c;
      local_8a8 = _DAT_1468b5b80;
      fStack_8a4 = fRam00000001468b5b84;
      fStack_8a0 = fRam00000001468b5b88;
      fStack_89c = fRam00000001468b5b8c;
      local_8b8 = _DAT_1468b5b70;
      fStack_8b4 = fRam00000001468b5b74;
      fStack_8b0 = fRam00000001468b5b78;
      fStack_8ac = fRam00000001468b5b7c;
      if (iVar9 != 0) {
        local_8b8 = local_1a8 * _DAT_146b30060;
        fStack_8b4 = fStack_1a4 * fRam0000000146b30064;
        fStack_8b0 = fStack_1a0 * fRam0000000146b30068;
        fStack_8ac = fStack_19c * fRam0000000146b3006c;
        auVar47 = rcpps(auVar24,local_188);
        fVar49 = auVar47._0_4_;
        fVar50 = auVar47._4_4_;
        fVar29 = auVar47._8_4_;
        fVar30 = auVar47._12_4_;
        fVar49 = (fVar49 + fVar49) - fVar49 * fVar49 * fVar33;
        fVar50 = (fVar50 + fVar50) - fVar50 * fVar50 * fVar31;
        fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar32;
        fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar55;
        fVar49 = (fVar49 + fVar49) - fVar49 * fVar49 * fVar33;
        fVar50 = (fVar50 + fVar50) - fVar50 * fVar50 * fVar31;
        fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar32;
        fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar55;
        local_898 = (float)((-(uint)((float)((uint)fVar33 & _DAT_146b30010) <= _DAT_146b30050) &
                             (uint)fVar49 ^ (uint)fVar49) & _DAT_146b2ff80);
        fStack_894 = (float)((-(uint)((float)((uint)fVar31 & uRam0000000146b30014) <=
                                     fRam0000000146b30054) & (uint)fVar50 ^ (uint)fVar50) &
                            uRam0000000146b2ff84);
        fStack_890 = (float)((-(uint)((float)((uint)fVar32 & uRam0000000146b30018) <=
                                     fRam0000000146b30058) & (uint)fVar29 ^ (uint)fVar29) &
                            uRam0000000146b2ff88);
        fStack_88c = (float)((-(uint)((float)((uint)fVar55 & uRam0000000146b3001c) <=
                                     fRam0000000146b3005c) & (uint)fVar30 ^ (uint)fVar30) &
                            uRam0000000146b2ff8c);
        fVar49 = local_198 * local_898;
        fVar50 = fStack_194 * fStack_894;
        fVar29 = fStack_190 * fStack_890;
        fVar30 = fStack_18c * fStack_88c;
        fVar33 = fVar29 * fStack_8b4 - fVar50 * fStack_8b0;
        fVar31 = fVar49 * fStack_8b0 - fVar29 * local_8b8;
        fVar32 = fVar50 * local_8b8 - fVar49 * fStack_8b4;
        fVar55 = fVar30 * fStack_8ac - fVar30 * fStack_8ac;
        fVar33 = fVar33 + fVar33;
        fVar31 = fVar31 + fVar31;
        fVar32 = fVar32 + fVar32;
        fVar55 = fVar55 + fVar55;
        local_8a8 = (float)((uint)(0.0 - ((fVar32 * fStack_8b4 - fVar31 * fStack_8b0) +
                                         fStack_8ac * fVar33 + fVar49)) & _DAT_146b2ff80);
        fStack_8a4 = (float)((uint)(0.0 - ((fVar33 * fStack_8b0 - fVar32 * local_8b8) +
                                          fStack_8ac * fVar31 + fVar50)) & uRam0000000146b2ff84);
        fStack_8a0 = (float)((uint)(0.0 - ((fVar31 * local_8b8 - fVar33 * fStack_8b4) +
                                          fStack_8ac * fVar32 + fVar29)) & uRam0000000146b2ff88);
        fStack_89c = (float)((uint)(0.0 - ((fVar55 * fStack_8ac - fVar55 * fStack_8ac) +
                                          fStack_8ac * fVar55 + fVar30)) & uRam0000000146b2ff8c);
      }
      auVar17._4_4_ = fStack_1b4;
      auVar17._0_4_ = local_1b8;
      auVar17._8_4_ = fStack_1b0;
      auVar17._12_4_ = fStack_1ac;
      auVar1._4_4_ = fStack_894;
      auVar1._0_4_ = local_898;
      auVar1._8_4_ = fStack_890;
      auVar1._12_4_ = fStack_88c;
      auVar47 = minps(auVar17,auVar1);
      local_ba8._0_4_ = _DAT_146b2ffd0;
      local_ba8._4_4_ = fRam0000000146b2ffd4;
      uStack_ba0 = (longlong *)CONCAT44(fRam0000000146b2ffdc,fRam0000000146b2ffd8);
      auVar18._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
      auVar18._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
      auVar18._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
      auVar18._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
      iVar9 = movmskps(iVar9,auVar18);
      fStack_b40 = fStack_1c0;
      fStack_b3c = fStack_1bc;
      fStack_b30 = fStack_1b0;
      fStack_b2c = fStack_1ac;
      if (iVar9 == 0) {
        fVar33 = local_898 * local_1c8;
        fVar31 = fStack_894 * fStack_1c4;
        fVar30 = fStack_890 * fStack_1c0;
        fVar36 = fStack_88c * fStack_1bc;
        fVar51 = local_8b8 * fStack_1cc * _DAT_146b2ffb0 + local_1d8 * fStack_8ac +
                 fStack_8b4 * fStack_1d0 * _DAT_146b2ffa0 + fStack_8b0 * fStack_1d4 * _DAT_146b2ff90
        ;
        fVar52 = local_8b8 * fStack_1d0 * fRam0000000146b2ffb4 + fStack_1d4 * fStack_8ac +
                 fStack_8b4 * fStack_1cc * fRam0000000146b2ffa4 +
                 fStack_8b0 * local_1d8 * fRam0000000146b2ff94;
        fVar53 = local_8b8 * fStack_1d4 * fRam0000000146b2ffb8 + fStack_1d0 * fStack_8ac +
                 fStack_8b4 * local_1d8 * fRam0000000146b2ffa8 +
                 fStack_8b0 * fStack_1cc * fRam0000000146b2ff98;
        fVar54 = local_8b8 * local_1d8 * fRam0000000146b2ffbc + fStack_1cc * fStack_8ac +
                 fStack_8b4 * fStack_1d4 * fRam0000000146b2ffac +
                 fStack_8b0 * fStack_1d0 * fRam0000000146b2ff9c;
        fVar32 = fVar30 * fStack_8b4 - fVar31 * fStack_8b0;
        fVar49 = fVar33 * fStack_8b0 - fVar30 * local_8b8;
        fVar50 = fVar31 * local_8b8 - fVar33 * fStack_8b4;
        fVar29 = fVar36 * fStack_8ac - fVar36 * fStack_8ac;
        fVar32 = fVar32 + fVar32;
        fVar49 = fVar49 + fVar49;
        fVar50 = fVar50 + fVar50;
        fVar29 = fVar29 + fVar29;
        fVar55 = local_898 * local_1b8;
        fVar35 = fStack_894 * fStack_1b4;
        fVar37 = fStack_890 * fStack_1b0;
        fVar48 = fStack_88c * fStack_1ac;
        fVar33 = (fVar50 * fStack_8b4 - fVar49 * fStack_8b0) + fVar32 * fStack_8ac + fVar33 +
                 local_8a8;
        fVar31 = (fVar32 * fStack_8b0 - fVar50 * local_8b8) + fVar49 * fStack_8ac + fVar31 +
                 fStack_8a4;
        fVar32 = (fVar49 * local_8b8 - fVar32 * fStack_8b4) + fVar50 * fStack_8ac + fVar30 +
                 fStack_8a0;
        fVar49 = (fVar29 * fStack_8ac - fVar29 * fStack_8ac) + fVar29 * fStack_8ac + fVar36 +
                 fStack_89c;
      }
      else {
        fVar33 = fStack_8b4 + fStack_8b4;
        fVar31 = fStack_8b0 + fStack_8b0;
        fStack_bf0 = fStack_890 * fStack_1b0;
        fStack_bec = fStack_88c * fStack_1ac;
        fVar32 = local_8b8 * (local_8b8 + local_8b8);
        local_bf8 = CONCAT44(fStack_894 * fStack_1b4,local_898 * local_1b8);
        fVar55 = fStack_8ac * (local_8b8 + local_8b8);
        fStack_514 = (fStack_8ac * fVar31 + local_8b8 * fVar33) * local_898;
        fStack_500 = (fVar55 + fStack_8b4 * fVar31) * fStack_894;
        local_4f8 = (fStack_8ac * fVar33 + local_8b8 * fVar31) * fStack_890;
        local_508 = fStack_894 * (local_8b8 * fVar33 - fStack_8ac * fVar31);
        fStack_4f4 = fStack_890 * (fStack_8b4 * fVar31 - fVar55);
        fStack_510 = local_898 * (local_8b8 * fVar31 - fStack_8ac * fVar33);
        local_518 = (float)((uint)((_DAT_146b2ff70 - (fStack_8b0 * fVar31 + fStack_8b4 * fVar33)) *
                                  local_898) & _DAT_146b2ff80);
        fStack_504 = (float)((uint)((fRam0000000146b2ff74 - (fStack_8b0 * fVar31 + fVar32)) *
                                   fStack_894) & uRam0000000146b2ff84);
        fStack_4f0 = (float)((uint)((fRam0000000146b2ff78 - (fStack_8b4 * fVar33 + fVar32)) *
                                   fStack_890) & uRam0000000146b2ff88);
        fStack_50c = (float)((uint)((fRam0000000146b2ff7c - (fVar32 + fVar32)) * fStack_88c) &
                            uRam0000000146b2ff8c);
        fVar33 = fStack_1d4 + fStack_1d4;
        fVar32 = fStack_1d0 + fStack_1d0;
        fVar55 = local_1d8 * (local_1d8 + local_1d8);
        fVar31 = (local_1d8 + local_1d8) * fStack_1cc;
        fStack_4dc = fRam0000000146b2ff7c;
        fStack_4d4 = (fVar32 * fStack_1cc + fVar33 * local_1d8) * (float)local_b38;
        fStack_4c0 = (fVar31 + fVar32 * fStack_1d4) * local_b38._4_4_;
        local_4b8 = (fVar33 * fStack_1cc + fVar32 * local_1d8) * fStack_1b0;
        local_4c8 = local_b38._4_4_ * (fVar33 * local_1d8 - fVar32 * fStack_1cc);
        fStack_4b4 = fStack_1b0 * (fVar32 * fStack_1d4 - fVar31);
        fStack_4d0 = (float)local_b38 * (fVar32 * local_1d8 - fVar33 * fStack_1cc);
        local_4d8 = (float)((uint)((_DAT_146b2ff70 - (fStack_1d0 * fVar32 + fStack_1d4 * fVar33)) *
                                  (float)local_b38) & _DAT_146b2ff80);
        fStack_4c4 = (float)((uint)((fRam0000000146b2ff74 - (fStack_1d0 * fVar32 + fVar55)) *
                                   local_b38._4_4_) & uRam0000000146b2ff84);
        fStack_4b0 = (float)((uint)((fRam0000000146b2ff78 - (fStack_1d4 * fVar33 + fVar55)) *
                                   fStack_1b0) & uRam0000000146b2ff88);
        fStack_4cc = (float)((uint)((fRam0000000146b2ff7c - (fVar55 + fVar55)) * fStack_1ac) &
                            uRam0000000146b2ff8c);
        local_4a8 = (float)local_b48;
        fStack_4a4 = local_b48._4_4_;
        fStack_49c = fRam0000000146b2ff7c;
        local_a28 = fStack_4d4 * local_508 + local_4d8 * local_518 + fStack_4d0 * local_4f8 +
                    fStack_4cc * local_8a8;
        fStack_a24 = fStack_4d4 * fStack_504 + local_4d8 * fStack_514 + fStack_4d0 * fStack_4f4 +
                     fStack_4cc * fStack_8a4;
        fStack_a20 = fStack_4d4 * fStack_500 + local_4d8 * fStack_510 + fStack_4d0 * fStack_4f0 +
                     fStack_4cc * fStack_8a0;
        fStack_a1c = fStack_4d4 * fStack_50c + local_4d8 * fStack_50c + fStack_4d0 * fStack_50c +
                     fStack_4cc * fRam0000000146b2ff7c;
        local_a18 = fStack_4c4 * local_508 + local_4c8 * local_518 + fStack_4c0 * local_4f8 +
                    fStack_4cc * local_8a8;
        fStack_a14 = fStack_4c4 * fStack_504 + local_4c8 * fStack_514 + fStack_4c0 * fStack_4f4 +
                     fStack_4cc * fStack_8a4;
        fStack_a10 = fStack_4c4 * fStack_500 + local_4c8 * fStack_510 + fStack_4c0 * fStack_4f0 +
                     fStack_4cc * fStack_8a0;
        fStack_a0c = fStack_4c4 * fStack_50c + local_4c8 * fStack_50c + fStack_4c0 * fStack_50c +
                     fStack_4cc * fRam0000000146b2ff7c;
        local_a08 = fStack_4b4 * local_508 + local_4b8 * local_518 + fStack_4b0 * local_4f8 +
                    fStack_4cc * local_8a8;
        fStack_a04 = fStack_4b4 * fStack_504 + local_4b8 * fStack_514 + fStack_4b0 * fStack_4f4 +
                     fStack_4cc * fStack_8a4;
        fStack_a00 = fStack_4b4 * fStack_500 + local_4b8 * fStack_510 + fStack_4b0 * fStack_4f0 +
                     fStack_4cc * fStack_8a0;
        fStack_9fc = fStack_4b4 * fStack_50c + local_4b8 * fStack_50c + fStack_4b0 * fStack_50c +
                     fStack_4cc * fRam0000000146b2ff7c;
        local_9f8 = local_b48._4_4_ * local_508 + (float)local_b48 * local_518 +
                    fStack_1c0 * local_4f8 + fRam0000000146b2ff7c * local_8a8;
        fStack_9f4 = local_b48._4_4_ * fStack_504 + (float)local_b48 * fStack_514 +
                     fStack_1c0 * fStack_4f4 + fRam0000000146b2ff7c * fStack_8a4;
        fStack_9f0 = local_b48._4_4_ * fStack_500 + (float)local_b48 * fStack_510 +
                     fStack_1c0 * fStack_4f0 + fRam0000000146b2ff7c * fStack_8a0;
        fStack_9ec = local_b48._4_4_ * fStack_50c + (float)local_b48 * fStack_50c +
                     fStack_1c0 * fStack_50c + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
        fStack_4fc = fStack_50c;
        fStack_4ec = fStack_50c;
        local_4e8 = local_8a8;
        fStack_4e4 = fStack_8a4;
        fStack_4e0 = fStack_8a0;
        fStack_4bc = fStack_4cc;
        fStack_4ac = fStack_4cc;
        fStack_4a0 = fStack_1c0;
        FMatrix::RemoveScaling(&local_a28);
        fVar33 = (float)(-(uint)((float)local_ba8 <= (float)local_bf8) &
                         (_DAT_146b2ffc0 ^ (uint)fVar35) ^ _DAT_146b2ffc0);
        fVar31 = (float)(-(uint)(local_ba8._4_4_ <= local_bf8._4_4_) &
                         (uRam0000000146b2ffc4 ^ (uint)fVar37) ^ uRam0000000146b2ffc4);
        fVar32 = (float)(-(uint)((float)uStack_ba0 <= fStack_bf0) &
                         (uRam0000000146b2ffc8 ^ (uint)fVar48) ^ uRam0000000146b2ffc8);
        local_a28 = local_a28 * fVar33;
        fStack_a24 = fStack_a24 * fVar33;
        fStack_a20 = fStack_a20 * fVar33;
        fStack_a14 = fStack_a14 * fVar31;
        fStack_a10 = fStack_a10 * fVar31;
        local_a18 = local_a18 * fVar31;
        fStack_a04 = fStack_a04 * fVar32;
        fStack_a00 = fStack_a00 * fVar32;
        local_a08 = local_a08 * fVar32;
        FQuat::FQuat(&local_b58,&local_a28);
        local_c08 = 1e-08;
        auVar25._0_4_ = (float)local_b58 * (float)local_b58 + fStack_b50 * fStack_b50;
        auVar25._4_4_ = local_b58._4_4_ * local_b58._4_4_ + fStack_b4c * fStack_b4c;
        auVar25._8_4_ = fStack_b50 * fStack_b50 + (float)local_b58 * (float)local_b58;
        auVar25._12_4_ = fStack_b4c * fStack_b4c + local_b58._4_4_ * local_b58._4_4_;
        auVar42._0_4_ = auVar25._4_4_ + auVar25._0_4_;
        auVar42._4_4_ = auVar25._8_4_ + auVar25._4_4_;
        auVar42._8_4_ = auVar25._12_4_ + auVar25._8_4_;
        auVar42._12_4_ = auVar25._0_4_ + auVar25._12_4_;
        auVar47 = rsqrtps(auVar25,auVar42);
        fVar33 = auVar47._0_4_;
        fVar31 = auVar47._4_4_;
        fVar32 = auVar47._8_4_;
        fVar55 = auVar47._12_4_;
        fVar33 = (fVar56 - fVar33 * fVar33 * auVar42._0_4_ * fVar56) * fVar33 + fVar33;
        fVar31 = (fVar57 - fVar31 * fVar31 * auVar42._4_4_ * fVar57) * fVar31 + fVar31;
        fVar32 = (fVar38 - fVar32 * fVar32 * auVar42._8_4_ * fVar38) * fVar32 + fVar32;
        fVar55 = (fVar34 - fVar55 * fVar55 * auVar42._12_4_ * fVar34) * fVar55 + fVar55;
        fVar51 = (float)(((uint)(((fVar56 - fVar33 * fVar33 * auVar42._0_4_ * fVar56) * fVar33 +
                                 fVar33) * (float)local_b58) ^ _DAT_146b2ff50) &
                         -(uint)(1e-08 <= auVar42._0_4_) ^ _DAT_146b2ff50);
        fVar52 = (float)(((uint)(((fVar57 - fVar31 * fVar31 * auVar42._4_4_ * fVar57) * fVar31 +
                                 fVar31) * local_b58._4_4_) ^ uRam0000000146b2ff54) &
                         -(uint)(1e-08 <= auVar42._4_4_) ^ uRam0000000146b2ff54);
        fVar53 = (float)(((uint)(((fVar38 - fVar32 * fVar32 * auVar42._8_4_ * fVar38) * fVar32 +
                                 fVar32) * fStack_b50) ^ uRam0000000146b2ff58) &
                         -(uint)(1e-08 <= auVar42._8_4_) ^ uRam0000000146b2ff58);
        fVar54 = (float)(((uint)(((fVar34 - fVar55 * fVar55 * auVar42._12_4_ * fVar34) * fVar55 +
                                 fVar55) * fStack_b4c) ^ uRam0000000146b2ff5c) &
                         -(uint)(1e-08 <= auVar42._12_4_) ^ uRam0000000146b2ff5c);
        fVar49 = 0.0;
        local_b58 = CONCAT44(fVar52,fVar51);
        fVar33 = local_9f8;
        fVar31 = fStack_9f4;
        fVar32 = fStack_9f0;
        fVar55 = (float)local_bf8;
        fVar35 = local_bf8._4_4_;
        fVar37 = fStack_bf0;
        fVar48 = fStack_bec;
        fStack_b50 = fVar53;
        fStack_b4c = fVar54;
      }
      fVar36 = fRam0000000146b2ffbc;
      fVar30 = fRam0000000146b2ffb8;
      fVar29 = fRam0000000146b2ffb4;
      fVar50 = _DAT_146b2ffb0;
      pfVar8 = (float *)((longlong)local_bfc * 0x30 + local_b70);
      *pfVar8 = fVar51;
      pfVar8[1] = fVar52;
      pfVar8[2] = fVar53;
      pfVar8[3] = fVar54;
      pfVar8[4] = fVar33;
      pfVar8[5] = fVar31;
      pfVar8[6] = fVar32;
      pfVar8[7] = fVar49;
      pfVar8[8] = fVar55;
      pfVar8[9] = fVar35;
      pfVar8[10] = fVar37;
      pfVar8[0xb] = fVar48;
      fVar48 = fRam0000000146b2ff78;
      fVar37 = fRam0000000146b2ff74;
      fVar35 = _DAT_146b2ff70;
      local_ba8 = (longlong *)CONCAT44(fRam0000000146b2ffd4,_DAT_146b2ffd0);
      uStack_ba0 = (longlong *)CONCAT44(fRam0000000146b2ffdc,fRam0000000146b2ffd8);
      pfVar11 = (float *)((longlong)(local_bfc + 1) * 0x30 + local_be0);
      pfVar8 = (float *)((longlong)local_bfc * 0x30 + local_b70);
      auVar47 = *(undefined1 (*) [16])(pfVar11 + 8);
      fVar33 = auVar47._0_4_;
      fVar31 = auVar47._4_4_;
      fVar32 = auVar47._8_4_;
      fVar55 = auVar47._12_4_;
      auVar14 = *(undefined1 (*) [16])(pfVar8 + 8);
      auVar47 = minps(auVar14,auVar47);
      auVar19._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
      auVar19._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
      auVar19._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
      auVar19._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
      iVar9 = movmskps(local_bfc + 1,auVar19);
      if (iVar9 == 0) {
        fVar56 = *pfVar11;
        fVar57 = pfVar11[1];
        fVar38 = pfVar11[2];
        fVar34 = pfVar11[3];
        fVar35 = *pfVar8;
        fVar37 = pfVar8[1];
        fVar48 = pfVar8[2];
        fVar49 = pfVar8[3];
        fVar51 = pfVar8[4] * fVar33;
        fVar52 = pfVar8[5] * fVar31;
        fVar53 = pfVar8[6] * fVar32;
        fVar54 = pfVar8[7] * fVar55;
        fVar39 = fVar49 * fVar56 * fVar50 + fVar34 * fVar35 + fVar57 * fVar48 * _DAT_146b2ffa0 +
                 fVar38 * fVar37 * _DAT_146b2ff90;
        fVar29 = fVar48 * fVar56 * fVar29 + fVar34 * fVar37 + fVar57 * fVar49 * fRam0000000146b2ffa4
                 + fVar38 * fVar35 * fRam0000000146b2ff94;
        fVar30 = fVar37 * fVar56 * fVar30 + fVar34 * fVar48 + fVar57 * fVar35 * fRam0000000146b2ffa8
                 + fVar38 * fVar49 * fRam0000000146b2ff98;
        fVar36 = fVar35 * fVar56 * fVar36 + fVar34 * fVar49 + fVar57 * fVar37 * fRam0000000146b2ffac
                 + fVar38 * fVar48 * fRam0000000146b2ff9c;
        fVar37 = fVar53 * fVar57 - fVar52 * fVar38;
        fVar48 = fVar51 * fVar38 - fVar53 * fVar56;
        fVar49 = fVar52 * fVar56 - fVar51 * fVar57;
        fVar50 = fVar54 * fVar34 - fVar54 * fVar34;
        fVar37 = fVar37 + fVar37;
        fVar48 = fVar48 + fVar48;
        fVar49 = fVar49 + fVar49;
        fVar50 = fVar50 + fVar50;
        fVar35 = (fVar49 * fVar57 - fVar48 * fVar38) + fVar34 * fVar37 + fVar51 + pfVar11[4];
        fVar38 = (fVar37 * fVar38 - fVar49 * fVar56) + fVar34 * fVar48 + fVar52 + pfVar11[5];
        fVar56 = (fVar48 * fVar56 - fVar37 * fVar57) + fVar34 * fVar49 + fVar53 + pfVar11[6];
        fVar57 = (fVar50 * fVar34 - fVar50 * fVar34) + fVar34 * fVar50 + fVar54 + pfVar11[7];
      }
      else {
        fVar49 = *pfVar11;
        fVar50 = pfVar11[1];
        fVar29 = pfVar11[2];
        fVar30 = pfVar11[3];
        fVar36 = fVar50 + fVar50;
        fVar52 = fVar29 + fVar29;
        fVar53 = fVar49 * (fVar49 + fVar49);
        fVar51 = (fVar49 + fVar49) * fVar30;
        fStack_494 = (fVar52 * fVar30 + fVar36 * fVar49) * fVar33;
        fStack_480 = (fVar51 + fVar52 * fVar50) * fVar31;
        local_478 = (fVar36 * fVar30 + fVar52 * fVar49) * fVar32;
        local_488 = fVar31 * (fVar36 * fVar49 - fVar52 * fVar30);
        fStack_474 = fVar32 * (fVar52 * fVar50 - fVar51);
        fStack_490 = fVar33 * (fVar52 * fVar49 - fVar36 * fVar30);
        local_498 = (float)((uint)((_DAT_146b2ff70 - (fVar29 * fVar52 + fVar50 * fVar36)) * fVar33)
                           & _DAT_146b2ff80);
        fStack_484 = (float)((uint)((fRam0000000146b2ff74 - (fVar29 * fVar52 + fVar53)) * fVar31) &
                            uRam0000000146b2ff84);
        fStack_470 = (float)((uint)((fRam0000000146b2ff78 - (fVar50 * fVar36 + fVar53)) * fVar32) &
                            uRam0000000146b2ff88);
        fStack_48c = (float)((uint)((fRam0000000146b2ff7c - (fVar53 + fVar53)) * fVar55) &
                            uRam0000000146b2ff8c);
        local_468 = pfVar11[4];
        fStack_464 = pfVar11[5];
        fStack_460 = pfVar11[6];
        fStack_45c = fRam0000000146b2ff7c;
        fVar49 = *pfVar8;
        fVar50 = pfVar8[1];
        fVar29 = pfVar8[2];
        fVar30 = pfVar8[3];
        fVar53 = fVar50 + fVar50;
        fVar39 = fVar29 + fVar29;
        fVar40 = fVar49 * (fVar49 + fVar49);
        fVar54 = (fVar49 + fVar49) * fVar30;
        fVar36 = pfVar8[8];
        fVar51 = pfVar8[9];
        fVar52 = pfVar8[10];
        fStack_454 = (fVar39 * fVar30 + fVar53 * fVar49) * fVar36;
        fStack_440 = (fVar54 + fVar39 * fVar50) * fVar51;
        local_438 = (fVar53 * fVar30 + fVar39 * fVar49) * fVar52;
        local_448 = fVar51 * (fVar53 * fVar49 - fVar39 * fVar30);
        fStack_434 = fVar52 * (fVar39 * fVar50 - fVar54);
        fStack_450 = fVar36 * (fVar39 * fVar49 - fVar53 * fVar30);
        local_458 = (float)((uint)((_DAT_146b2ff70 - (fVar29 * fVar39 + fVar50 * fVar53)) * fVar36)
                           & _DAT_146b2ff80);
        fStack_444 = (float)((uint)((fRam0000000146b2ff74 - (fVar29 * fVar39 + fVar40)) * fVar51) &
                            uRam0000000146b2ff84);
        fStack_430 = (float)((uint)((fRam0000000146b2ff78 - (fVar50 * fVar53 + fVar40)) * fVar52) &
                            uRam0000000146b2ff88);
        fStack_44c = (float)((uint)((fRam0000000146b2ff7c - (fVar40 + fVar40)) * pfVar8[0xb]) &
                            uRam0000000146b2ff8c);
        local_428 = pfVar8[4];
        fStack_424 = pfVar8[5];
        fStack_420 = pfVar8[6];
        fStack_41c = fRam0000000146b2ff7c;
        local_a68 = fStack_454 * local_488 + local_458 * local_498 + fStack_450 * local_478 +
                    fStack_44c * local_468;
        fStack_a64 = fStack_454 * fStack_484 + local_458 * fStack_494 + fStack_450 * fStack_474 +
                     fStack_44c * fStack_464;
        fStack_a60 = fStack_454 * fStack_480 + local_458 * fStack_490 + fStack_450 * fStack_470 +
                     fStack_44c * fStack_460;
        fStack_a5c = fStack_454 * fStack_48c + local_458 * fStack_48c + fStack_450 * fStack_48c +
                     fStack_44c * fRam0000000146b2ff7c;
        local_a58 = fStack_444 * local_488 + local_448 * local_498 + fStack_440 * local_478 +
                    fStack_44c * local_468;
        fStack_a54 = fStack_444 * fStack_484 + local_448 * fStack_494 + fStack_440 * fStack_474 +
                     fStack_44c * fStack_464;
        fStack_a50 = fStack_444 * fStack_480 + local_448 * fStack_490 + fStack_440 * fStack_470 +
                     fStack_44c * fStack_460;
        fStack_a4c = fStack_444 * fStack_48c + local_448 * fStack_48c + fStack_440 * fStack_48c +
                     fStack_44c * fRam0000000146b2ff7c;
        local_a48 = fStack_434 * local_488 + local_438 * local_498 + fStack_430 * local_478 +
                    fStack_44c * local_468;
        fStack_a44 = fStack_434 * fStack_484 + local_438 * fStack_494 + fStack_430 * fStack_474 +
                     fStack_44c * fStack_464;
        fStack_a40 = fStack_434 * fStack_480 + local_438 * fStack_490 + fStack_430 * fStack_470 +
                     fStack_44c * fStack_460;
        fStack_a3c = fStack_434 * fStack_48c + local_438 * fStack_48c + fStack_430 * fStack_48c +
                     fStack_44c * fRam0000000146b2ff7c;
        local_a38 = fStack_424 * local_488 + local_428 * local_498 + fStack_420 * local_478 +
                    fRam0000000146b2ff7c * local_468;
        fStack_a34 = fStack_424 * fStack_484 + local_428 * fStack_494 + fStack_420 * fStack_474 +
                     fRam0000000146b2ff7c * fStack_464;
        fStack_a30 = fStack_424 * fStack_480 + local_428 * fStack_490 + fStack_420 * fStack_470 +
                     fRam0000000146b2ff7c * fStack_460;
        fStack_a2c = fStack_424 * fStack_48c + local_428 * fStack_48c + fStack_420 * fStack_48c +
                     fRam0000000146b2ff7c * fRam0000000146b2ff7c;
        fStack_47c = fStack_48c;
        fStack_46c = fStack_48c;
        fStack_43c = fStack_44c;
        fStack_42c = fStack_44c;
        FMatrix::RemoveScaling(&local_a68);
        fVar35 = (float)(-(uint)((float)local_ba8 <= fVar33 * auVar14._0_4_) &
                         (_DAT_146b2ffc0 ^ (uint)fVar35) ^ _DAT_146b2ffc0);
        fVar37 = (float)(-(uint)(local_ba8._4_4_ <= fVar31 * auVar14._4_4_) &
                         (uRam0000000146b2ffc4 ^ (uint)fVar37) ^ uRam0000000146b2ffc4);
        fVar48 = (float)(-(uint)((float)uStack_ba0 <= fVar32 * auVar14._8_4_) &
                         (uRam0000000146b2ffc8 ^ (uint)fVar48) ^ uRam0000000146b2ffc8);
        local_a68 = local_a68 * fVar35;
        fStack_a64 = fStack_a64 * fVar35;
        fStack_a60 = fStack_a60 * fVar35;
        fStack_a54 = fStack_a54 * fVar37;
        fStack_a50 = fStack_a50 * fVar37;
        local_a58 = local_a58 * fVar37;
        fStack_a44 = fStack_a44 * fVar48;
        fStack_a40 = fStack_a40 * fVar48;
        local_a48 = local_a48 * fVar48;
        FQuat::FQuat(&local_b28,&local_a68);
        local_c08 = 1e-08;
        auVar26._0_4_ = local_b28 * local_b28 + fStack_b20 * fStack_b20;
        auVar26._4_4_ = fStack_b24 * fStack_b24 + fStack_b1c * fStack_b1c;
        auVar26._8_4_ = fStack_b20 * fStack_b20 + local_b28 * local_b28;
        auVar26._12_4_ = fStack_b1c * fStack_b1c + fStack_b24 * fStack_b24;
        auVar43._0_4_ = auVar26._4_4_ + auVar26._0_4_;
        auVar43._4_4_ = auVar26._8_4_ + auVar26._4_4_;
        auVar43._8_4_ = auVar26._12_4_ + auVar26._8_4_;
        auVar43._12_4_ = auVar26._0_4_ + auVar26._12_4_;
        auVar47 = rsqrtps(auVar26,auVar43);
        fVar35 = auVar47._0_4_;
        fVar37 = auVar47._4_4_;
        fVar48 = auVar47._8_4_;
        fVar49 = auVar47._12_4_;
        fVar35 = (fVar56 - fVar35 * fVar35 * auVar43._0_4_ * fVar56) * fVar35 + fVar35;
        fVar37 = (fVar57 - fVar37 * fVar37 * auVar43._4_4_ * fVar57) * fVar37 + fVar37;
        fVar48 = (fVar38 - fVar48 * fVar48 * auVar43._8_4_ * fVar38) * fVar48 + fVar48;
        fVar49 = (fVar34 - fVar49 * fVar49 * auVar43._12_4_ * fVar34) * fVar49 + fVar49;
        fVar39 = (float)(((uint)(((fVar56 - fVar35 * fVar35 * auVar43._0_4_ * fVar56) * fVar35 +
                                 fVar35) * local_b28) ^ _DAT_146b2ff50) &
                         -(uint)(1e-08 <= auVar43._0_4_) ^ _DAT_146b2ff50);
        fVar29 = (float)(((uint)(((fVar57 - fVar37 * fVar37 * auVar43._4_4_ * fVar57) * fVar37 +
                                 fVar37) * fStack_b24) ^ uRam0000000146b2ff54) &
                         -(uint)(1e-08 <= auVar43._4_4_) ^ uRam0000000146b2ff54);
        fVar30 = (float)(((uint)(((fVar38 - fVar48 * fVar48 * auVar43._8_4_ * fVar38) * fVar48 +
                                 fVar48) * fStack_b20) ^ uRam0000000146b2ff58) &
                         -(uint)(1e-08 <= auVar43._8_4_) ^ uRam0000000146b2ff58);
        fVar36 = (float)(((uint)(((fVar34 - fVar49 * fVar49 * auVar43._12_4_ * fVar34) * fVar49 +
                                 fVar49) * fStack_b1c) ^ uRam0000000146b2ff5c) &
                         -(uint)(1e-08 <= auVar43._12_4_) ^ uRam0000000146b2ff5c);
        fVar57 = 0.0;
        fVar35 = local_a38;
        fVar38 = fStack_a34;
        fVar56 = fStack_a30;
        local_b28 = fVar39;
        fStack_b24 = fVar29;
        fStack_b20 = fVar30;
        fStack_b1c = fVar36;
      }
      lVar5 = (longlong)local_bfc;
      plStack_930 = &local_be0;
      local_928 = &local_bfc;
      pfStack_920 = &local_1a8;
      pfVar8 = (float *)(local_be0 + lVar5 * 0x30);
      *pfVar8 = fVar39;
      pfVar8[1] = fVar29;
      pfVar8[2] = fVar30;
      pfVar8[3] = fVar36;
      pfVar8 = (float *)(local_be0 + 0x10 + lVar5 * 0x30);
      *pfVar8 = fVar35;
      pfVar8[1] = fVar38;
      pfVar8[2] = fVar56;
      pfVar8[3] = fVar57;
      pfVar8 = (float *)(local_be0 + 0x20 + lVar5 * 0x30);
      *pfVar8 = fVar33 * auVar14._0_4_;
      pfVar8[1] = fVar31 * auVar14._4_4_;
      pfVar8[2] = fVar32 * auVar14._8_4_;
      pfVar8[3] = fVar55 * auVar14._12_4_;
      local_918 = &local_1d8;
      local_7c0 = &local_7f8;
      local_7f8 = &PTR_LAB_145848ba8;
      local_938 = param_2;
      local_7f0 = param_2;
      plStack_7e8 = plStack_930;
      local_7e0 = local_928;
      pfStack_7d8 = pfStack_920;
      local_7d0 = local_918;
      FUN_1422a73c0(CONCAT71((int7)((ulonglong)(lVar5 * 6) >> 8),2),&local_7f8);
      local_bfc = local_bfc + -1;
    } while (-1 < local_bfc);
    fVar33 = (float)local_af8._0_4_;
  }
  local_688 = local_288;
  uStack_680 = uStack_280;
  local_668 = local_268;
  uStack_660 = uStack_260;
  local_678 = local_278;
  uStack_670 = uStack_270;
  FUN_142ca1830(param_1,&local_b58,&local_688,param_2);
  if (*(char *)(param_1 + 400) == '\0') {
    pfVar8 = (float *)(local_be0 + 0x10 + (longlong)local_bd0[0] * 0x30);
    local_bb8 = fVar22 - *pfVar8;
    local_bb4 = (float)local_b18._0_4_ - pfVar8[1];
    local_bb0 = fVar33 - pfVar8[2];
  }
  else {
    local_bb0 = *(float *)(param_1 + 0x194);
    local_bb8 = local_bb0 * (float)local_b58;
    local_bb4 = local_bb0 * local_b58._4_4_;
    local_bb0 = local_bb0 * fStack_b50;
  }
  uStack_ba0 = &local_be0;
  local_b98 = (longlong *)local_bd0;
  fVar32 = local_bb8 * local_bb8;
  pfStack_b90 = &local_bb8;
  fVar22 = local_bb4 * local_bb4;
  local_778 = &PTR_LAB_145848bd8;
  local_740 = &local_778;
  fVar31 = local_bb0 * local_bb0;
  local_ba8 = param_2;
  local_770 = param_2;
  plStack_768 = uStack_ba0;
  local_760 = (int *)local_b98;
  pfStack_758 = pfStack_b90;
  FUN_1422a73c0(2,&local_778);
  fVar33 = *(float *)(param_1 + 0x18c);
  if (ABS(fVar33) <= 1e-08) {
    puVar7 = (undefined8 *)(local_be0 + 0x20 + (longlong)((int)local_bd8 + -1) * 0x30);
    local_ba8 = (longlong *)*puVar7;
    uStack_ba0 = (longlong *)puVar7[1];
    if ((ABS(*(float *)(param_1 + 0x188)) <= 1e-08) || (ABS((float)local_ba8) <= 1e-08)) {
      fVar33 = 1.0;
      *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
    }
    else {
      fVar33 = *(float *)(param_1 + 0x188) / (float)local_ba8;
      *(float *)(param_1 + 0x18c) = fVar33;
    }
  }
  iVar9 = local_bd0[0];
  if (local_be4 == 0.0) {
    fVar33 = 1.0;
  }
  else {
    fVar33 = (fVar33 * SQRT(fVar32 + fVar22 + fVar31)) / local_be4;
  }
  do {
    local_c00 = iVar9 + -1;
    if (local_c00 < 0) {
LAB_142c9e0f8:
      if (local_b70 != 0) {
        FMemory::Free();
      }
      if (local_be0 != 0) {
        FMemory::Free();
      }
      if (local_bc8 != (int *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar5 = (longlong)local_c00;
    if (*(char *)(param_1 + 0x170) == '\0') {
      fVar34 = fVar33 - 1.0;
      pfVar8 = (float *)(local_b70 + 0x10 + lVar5 * 0x30);
      fVar22 = pfVar8[1];
      fVar31 = pfVar8[2];
      fVar32 = pfVar8[3];
      fVar38 = local_bb8 * local_bb8 + local_bb4 * local_bb4 + local_bb0 * local_bb0;
      fVar55 = local_bb4;
      fVar56 = local_bb8;
      fVar57 = local_bb0;
      if (1e-08 < fVar38) {
        auVar47 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
        fVar57 = auVar47._0_4_;
        fVar57 = fVar57 + fVar57 * (0.5 - fVar38 * 0.5 * fVar57 * fVar57);
        fVar57 = fVar57 + fVar57 * (0.5 - fVar38 * 0.5 * fVar57 * fVar57);
        fVar56 = local_bb8 * fVar57;
        fVar55 = fVar57 * local_bb4;
        fVar57 = local_bb0 * fVar57;
      }
      pfVar11 = (float *)(local_be0 + (longlong)iVar9 * 0x30);
      fVar48 = *pfVar11 * _DAT_146b30060;
      fVar49 = pfVar11[1] * fRam0000000146b30064;
      fVar50 = pfVar11[2] * fRam0000000146b30068;
      fVar29 = pfVar11[3] * fRam0000000146b3006c;
      fVar38 = fVar57 * fVar49 - fVar55 * fVar50;
      fVar35 = fVar56 * fVar50 - fVar57 * fVar48;
      fVar37 = fVar55 * fVar48 - fVar56 * fVar49;
      fVar38 = fVar38 + fVar38;
      fVar35 = fVar35 + fVar35;
      fVar37 = fVar37 + fVar37;
      fVar56 = (fVar37 * fVar49 - fVar35 * fVar50) + fVar29 * fVar38 + fVar56;
      fVar55 = (fVar38 * fVar50 - fVar37 * fVar48) + fVar29 * fVar35 + fVar55;
      fVar57 = (fVar35 * fVar48 - fVar38 * fVar49) + fVar29 * fVar37 + fVar57;
      fVar38 = fVar22 * fVar34 * fVar55 + *pfVar8 * fVar34 * fVar56 + fVar34 * fVar31 * fVar57;
      pfVar11 = (float *)(local_b70 + 0x10 + lVar5 * 0x30);
      *pfVar11 = fVar38 * fVar56 + *pfVar8;
      pfVar11[1] = fVar38 * fVar55 + fVar22;
      pfVar11[2] = fVar38 * fVar57 + fVar31;
      pfVar11[3] = fVar32 + 0.0;
      fVar38 = fRam0000000146b2ff78;
      fVar57 = fRam0000000146b2ff74;
      fVar56 = _DAT_146b2ff70;
      local_ba8 = (longlong *)CONCAT44(fRam0000000146b2ffd4,_DAT_146b2ffd0);
      uStack_ba0 = (longlong *)CONCAT44(fRam0000000146b2ffdc,fRam0000000146b2ffd8);
      pfVar11 = (float *)((longlong)iVar9 * 0x30 + local_be0);
      pfVar8 = (float *)((longlong)local_c00 * 0x30 + local_b70);
      auVar47 = *(undefined1 (*) [16])(pfVar11 + 8);
      fVar22 = auVar47._0_4_;
      fVar31 = auVar47._4_4_;
      fVar32 = auVar47._8_4_;
      fVar55 = auVar47._12_4_;
      auVar14 = *(undefined1 (*) [16])(pfVar8 + 8);
      auVar47 = minps(auVar14,auVar47);
      auVar21._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
      auVar21._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
      auVar21._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
      auVar21._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
      iVar9 = movmskps(iVar9,auVar21);
      if (iVar9 == 0) {
        fVar56 = *pfVar11;
        fVar57 = pfVar11[1];
        fVar38 = pfVar11[2];
        fVar34 = pfVar11[3];
        fVar35 = *pfVar8;
        fVar37 = pfVar8[1];
        fVar48 = pfVar8[2];
        fVar49 = pfVar8[3];
        fVar29 = pfVar8[4] * fVar22;
        fVar30 = pfVar8[5] * fVar31;
        fVar36 = pfVar8[6] * fVar32;
        fVar51 = pfVar8[7] * fVar55;
        fVar52 = fVar49 * fVar56 * _DAT_146b2ffb0 + fVar35 * fVar34 +
                 fVar57 * fVar48 * _DAT_146b2ffa0 + fVar38 * fVar37 * _DAT_146b2ff90;
        fVar53 = fVar48 * fVar56 * fRam0000000146b2ffb4 + fVar37 * fVar34 +
                 fVar57 * fVar49 * fRam0000000146b2ffa4 + fVar38 * fVar35 * fRam0000000146b2ff94;
        fVar54 = fVar37 * fVar56 * fRam0000000146b2ffb8 + fVar48 * fVar34 +
                 fVar57 * fVar35 * fRam0000000146b2ffa8 + fVar38 * fVar49 * fRam0000000146b2ff98;
        fVar39 = fVar35 * fVar56 * fRam0000000146b2ffbc + fVar49 * fVar34 +
                 fVar57 * fVar37 * fRam0000000146b2ffac + fVar38 * fVar48 * fRam0000000146b2ff9c;
        fVar37 = fVar36 * fVar57 - fVar30 * fVar38;
        fVar48 = fVar29 * fVar38 - fVar36 * fVar56;
        fVar49 = fVar30 * fVar56 - fVar29 * fVar57;
        fVar50 = fVar51 * fVar34 - fVar51 * fVar34;
        fVar37 = fVar37 + fVar37;
        fVar48 = fVar48 + fVar48;
        fVar49 = fVar49 + fVar49;
        fVar50 = fVar50 + fVar50;
        fVar35 = (fVar49 * fVar57 - fVar48 * fVar38) + fVar37 * fVar34 + fVar29 + pfVar11[4];
        fVar38 = (fVar37 * fVar38 - fVar49 * fVar56) + fVar48 * fVar34 + fVar30 + pfVar11[5];
        fVar56 = (fVar48 * fVar56 - fVar37 * fVar57) + fVar49 * fVar34 + fVar36 + pfVar11[6];
        fVar57 = (fVar50 * fVar34 - fVar50 * fVar34) + fVar50 * fVar34 + fVar51 + pfVar11[7];
      }
      else {
        fVar34 = *pfVar11;
        fVar35 = pfVar11[1];
        fVar37 = pfVar11[2];
        fVar48 = pfVar11[3];
        fVar49 = fVar35 + fVar35;
        fVar50 = fVar37 + fVar37;
        fVar30 = (fVar34 + fVar34) * fVar34;
        fVar29 = fVar48 * (fVar34 + fVar34);
        fStack_394 = (fVar48 * fVar50 + fVar34 * fVar49) * fVar22;
        fStack_380 = (fVar29 + fVar35 * fVar50) * fVar31;
        local_378 = (fVar48 * fVar49 + fVar34 * fVar50) * fVar32;
        local_388 = fVar31 * (fVar34 * fVar49 - fVar48 * fVar50);
        fStack_374 = fVar32 * (fVar35 * fVar50 - fVar29);
        fStack_390 = fVar22 * (fVar34 * fVar50 - fVar48 * fVar49);
        local_398 = (float)((uint)((_DAT_146b2ff70 - (fVar50 * fVar37 + fVar49 * fVar35)) * fVar22)
                           & _DAT_146b2ff80);
        fStack_384 = (float)((uint)((fRam0000000146b2ff74 - (fVar50 * fVar37 + fVar30)) * fVar31) &
                            uRam0000000146b2ff84);
        fStack_370 = (float)((uint)((fRam0000000146b2ff78 - (fVar49 * fVar35 + fVar30)) * fVar32) &
                            uRam0000000146b2ff88);
        fStack_38c = (float)((uint)((fRam0000000146b2ff7c - (fVar30 + fVar30)) * fVar55) &
                            uRam0000000146b2ff8c);
        local_368 = pfVar11[4];
        fStack_364 = pfVar11[5];
        fStack_360 = pfVar11[6];
        fStack_35c = fRam0000000146b2ff7c;
        fVar34 = *pfVar8;
        fVar35 = pfVar8[1];
        fVar37 = pfVar8[2];
        fVar48 = pfVar8[3];
        fVar30 = fVar35 + fVar35;
        fVar51 = fVar37 + fVar37;
        fVar52 = (fVar34 + fVar34) * fVar34;
        fVar36 = (fVar34 + fVar34) * fVar48;
        fVar49 = pfVar8[8];
        fVar50 = pfVar8[9];
        fVar29 = pfVar8[10];
        fStack_354 = (fVar51 * fVar48 + fVar30 * fVar34) * fVar49;
        fStack_340 = (fVar36 + fVar51 * fVar35) * fVar50;
        local_338 = (fVar30 * fVar48 + fVar51 * fVar34) * fVar29;
        local_348 = fVar50 * (fVar30 * fVar34 - fVar51 * fVar48);
        fStack_334 = fVar29 * (fVar51 * fVar35 - fVar36);
        fStack_350 = fVar49 * (fVar51 * fVar34 - fVar30 * fVar48);
        local_358 = (float)((uint)((_DAT_146b2ff70 - (fVar51 * fVar37 + fVar30 * fVar35)) * fVar49)
                           & _DAT_146b2ff80);
        fStack_344 = (float)((uint)((fRam0000000146b2ff74 - (fVar51 * fVar37 + fVar52)) * fVar50) &
                            uRam0000000146b2ff84);
        fStack_330 = (float)((uint)((fRam0000000146b2ff78 - (fVar30 * fVar35 + fVar52)) * fVar29) &
                            uRam0000000146b2ff88);
        fStack_34c = (float)((uint)((fRam0000000146b2ff7c - (fVar52 + fVar52)) * pfVar8[0xb]) &
                            uRam0000000146b2ff8c);
        local_328 = pfVar8[4];
        fStack_324 = pfVar8[5];
        fStack_320 = pfVar8[6];
        fStack_31c = fRam0000000146b2ff7c;
        local_9e8 = fStack_354 * local_388 + local_358 * local_398 + fStack_350 * local_378 +
                    fStack_34c * local_368;
        fStack_9e4 = fStack_354 * fStack_384 + local_358 * fStack_394 + fStack_350 * fStack_374 +
                     fStack_34c * fStack_364;
        fStack_9e0 = fStack_354 * fStack_380 + local_358 * fStack_390 + fStack_350 * fStack_370 +
                     fStack_34c * fStack_360;
        fStack_9dc = fStack_354 * fStack_38c + local_358 * fStack_38c + fStack_350 * fStack_38c +
                     fStack_34c * fRam0000000146b2ff7c;
        local_9d8 = fStack_344 * local_388 + local_348 * local_398 + fStack_340 * local_378 +
                    fStack_34c * local_368;
        fStack_9d4 = fStack_344 * fStack_384 + local_348 * fStack_394 + fStack_340 * fStack_374 +
                     fStack_34c * fStack_364;
        fStack_9d0 = fStack_344 * fStack_380 + local_348 * fStack_390 + fStack_340 * fStack_370 +
                     fStack_34c * fStack_360;
        fStack_9cc = fStack_344 * fStack_38c + local_348 * fStack_38c + fStack_340 * fStack_38c +
                     fStack_34c * fRam0000000146b2ff7c;
        local_9c8 = fStack_334 * local_388 + local_338 * local_398 + fStack_330 * local_378 +
                    fStack_34c * local_368;
        fStack_9c4 = fStack_334 * fStack_384 + local_338 * fStack_394 + fStack_330 * fStack_374 +
                     fStack_34c * fStack_364;
        fStack_9c0 = fStack_334 * fStack_380 + local_338 * fStack_390 + fStack_330 * fStack_370 +
                     fStack_34c * fStack_360;
        fStack_9bc = fStack_334 * fStack_38c + local_338 * fStack_38c + fStack_330 * fStack_38c +
                     fStack_34c * fRam0000000146b2ff7c;
        local_9b8 = fStack_324 * local_388 + local_328 * local_398 + fStack_320 * local_378 +
                    fRam0000000146b2ff7c * local_368;
        fStack_9b4 = fStack_324 * fStack_384 + local_328 * fStack_394 + fStack_320 * fStack_374 +
                     fRam0000000146b2ff7c * fStack_364;
        fStack_9b0 = fStack_324 * fStack_380 + local_328 * fStack_390 + fStack_320 * fStack_370 +
                     fRam0000000146b2ff7c * fStack_360;
        fStack_9ac = fStack_324 * fStack_38c + local_328 * fStack_38c + fStack_320 * fStack_38c +
                     fRam0000000146b2ff7c * fRam0000000146b2ff7c;
        fStack_37c = fStack_38c;
        fStack_36c = fStack_38c;
        fStack_33c = fStack_34c;
        fStack_32c = fStack_34c;
        FMatrix::RemoveScaling(&local_9e8);
        fVar56 = (float)(-(uint)((float)local_ba8 <= fVar22 * auVar14._0_4_) &
                         (_DAT_146b2ffc0 ^ (uint)fVar56) ^ _DAT_146b2ffc0);
        fVar57 = (float)(-(uint)(local_ba8._4_4_ <= fVar31 * auVar14._4_4_) &
                         (uRam0000000146b2ffc4 ^ (uint)fVar57) ^ uRam0000000146b2ffc4);
        fVar38 = (float)(-(uint)((float)uStack_ba0 <= fVar32 * auVar14._8_4_) &
                         (uRam0000000146b2ffc8 ^ (uint)fVar38) ^ uRam0000000146b2ffc8);
        pfVar8 = (float *)FMatrix::GetScaledAxis(&local_9e8,local_658,1);
        local_9e8 = fVar56 * *pfVar8;
        fStack_9e4 = fVar56 * pfVar8[1];
        fStack_9e0 = fVar56 * pfVar8[2];
        fStack_9d4 = fStack_9d4 * fVar57;
        fStack_9d0 = fStack_9d0 * fVar57;
        local_9d8 = local_9d8 * fVar57;
        fStack_9c4 = fStack_9c4 * fVar38;
        fStack_9c0 = fStack_9c0 * fVar38;
        local_9c8 = local_9c8 * fVar38;
        FQuat::FQuat(&local_b38,&local_9e8);
        local_c08 = 1e-08;
        auVar28._0_4_ = (float)local_b38 * (float)local_b38 + fStack_b30 * fStack_b30;
        auVar28._4_4_ = local_b38._4_4_ * local_b38._4_4_ + fStack_b2c * fStack_b2c;
        auVar28._8_4_ = fStack_b30 * fStack_b30 + (float)local_b38 * (float)local_b38;
        auVar28._12_4_ = fStack_b2c * fStack_b2c + local_b38._4_4_ * local_b38._4_4_;
        auVar45._0_4_ = auVar28._4_4_ + auVar28._0_4_;
        auVar45._4_4_ = auVar28._8_4_ + auVar28._4_4_;
        auVar45._8_4_ = auVar28._12_4_ + auVar28._8_4_;
        auVar45._12_4_ = auVar28._0_4_ + auVar28._12_4_;
        auVar47 = rsqrtps(auVar28,auVar45);
        fVar56 = auVar47._0_4_;
        fVar57 = auVar47._4_4_;
        fVar38 = auVar47._8_4_;
        fVar34 = auVar47._12_4_;
        fVar56 = (_DAT_146b2ff60 - fVar56 * fVar56 * auVar45._0_4_ * _DAT_146b2ff60) * fVar56 +
                 fVar56;
        fVar57 = (fRam0000000146b2ff64 - fVar57 * fVar57 * auVar45._4_4_ * fRam0000000146b2ff64) *
                 fVar57 + fVar57;
        fVar38 = (fRam0000000146b2ff68 - fVar38 * fVar38 * auVar45._8_4_ * fRam0000000146b2ff68) *
                 fVar38 + fVar38;
        fVar34 = (fRam0000000146b2ff6c - fVar34 * fVar34 * auVar45._12_4_ * fRam0000000146b2ff6c) *
                 fVar34 + fVar34;
        fVar52 = (float)(((uint)(((_DAT_146b2ff60 - fVar56 * fVar56 * auVar45._0_4_ * _DAT_146b2ff60
                                  ) * fVar56 + fVar56) * (float)local_b38) ^ _DAT_146b2ff50) &
                         -(uint)(1e-08 <= auVar45._0_4_) ^ _DAT_146b2ff50);
        fVar53 = (float)(((uint)(((fRam0000000146b2ff64 -
                                  fVar57 * fVar57 * auVar45._4_4_ * fRam0000000146b2ff64) * fVar57 +
                                 fVar57) * local_b38._4_4_) ^ uRam0000000146b2ff54) &
                         -(uint)(1e-08 <= auVar45._4_4_) ^ uRam0000000146b2ff54);
        fVar54 = (float)(((uint)(((fRam0000000146b2ff68 -
                                  fVar38 * fVar38 * auVar45._8_4_ * fRam0000000146b2ff68) * fVar38 +
                                 fVar38) * fStack_b30) ^ uRam0000000146b2ff58) &
                         -(uint)(1e-08 <= auVar45._8_4_) ^ uRam0000000146b2ff58);
        fVar39 = (float)(((uint)(((fRam0000000146b2ff6c -
                                  fVar34 * fVar34 * auVar45._12_4_ * fRam0000000146b2ff6c) * fVar34
                                 + fVar34) * fStack_b2c) ^ uRam0000000146b2ff5c) &
                         -(uint)(1e-08 <= auVar45._12_4_) ^ uRam0000000146b2ff5c);
        local_b38 = CONCAT44(fVar53,fVar52);
        fVar57 = 0.0;
        fVar35 = local_9b8;
        fVar38 = fStack_9b4;
        fVar56 = fStack_9b0;
        fStack_b30 = fVar54;
        fStack_b2c = fVar39;
      }
      lVar5 = (longlong)local_c00;
      plStack_7a8 = &local_be0;
      uStack_b10 = plStack_7a8;
      local_b18 = (undefined1  [8])param_2;
      local_b08 = &local_c00;
      local_780 = &local_7b8;
      pfVar8 = (float *)(local_be0 + lVar5 * 0x30);
      *pfVar8 = fVar52;
      pfVar8[1] = fVar53;
      pfVar8[2] = fVar54;
      pfVar8[3] = fVar39;
      pfVar8 = (float *)(local_be0 + 0x10 + lVar5 * 0x30);
      *pfVar8 = fVar35;
      pfVar8[1] = fVar38;
      pfVar8[2] = fVar56;
      pfVar8[3] = fVar57;
      pfVar8 = (float *)(local_be0 + 0x20 + lVar5 * 0x30);
      *pfVar8 = fVar22 * auVar14._0_4_;
      pfVar8[1] = fVar31 * auVar14._4_4_;
      pfVar8[2] = fVar32 * auVar14._8_4_;
      pfVar8[3] = fVar55 * auVar14._12_4_;
      local_7b8 = &PTR_LAB_145848c08;
      local_7b0 = param_2;
      local_7a0 = local_b08;
      FUN_1422a73c0(CONCAT71((int7)((ulonglong)(lVar5 * 6) >> 8),2),&local_7b8);
    }
    else {
      pfVar8 = (float *)(local_b70 + 0x10 + lVar5 * 0x30);
      fVar22 = pfVar8[1];
      fVar31 = pfVar8[2];
      fVar32 = pfVar8[3];
      pfVar11 = (float *)(local_b70 + 0x10 + lVar5 * 0x30);
      *pfVar11 = fVar33 * *pfVar8;
      pfVar11[1] = fVar33 * fVar22;
      pfVar11[2] = fVar33 * fVar31;
      pfVar11[3] = fVar32 * 0.0;
      fVar38 = fRam0000000146b2ff78;
      fVar57 = fRam0000000146b2ff74;
      fVar56 = _DAT_146b2ff70;
      local_ba8 = (longlong *)CONCAT44(fRam0000000146b2ffd4,_DAT_146b2ffd0);
      uStack_ba0 = (longlong *)CONCAT44(fRam0000000146b2ffdc,fRam0000000146b2ffd8);
      pfVar11 = (float *)((longlong)iVar9 * 0x30 + local_be0);
      pfVar8 = (float *)((longlong)local_c00 * 0x30 + local_b70);
      auVar47 = *(undefined1 (*) [16])(pfVar11 + 8);
      fVar22 = auVar47._0_4_;
      fVar31 = auVar47._4_4_;
      fVar32 = auVar47._8_4_;
      fVar55 = auVar47._12_4_;
      auVar14 = *(undefined1 (*) [16])(pfVar8 + 8);
      auVar47 = minps(auVar14,auVar47);
      auVar20._4_4_ = -(uint)(auVar47._4_4_ < fRam0000000146b2ffd4);
      auVar20._0_4_ = -(uint)(auVar47._0_4_ < _DAT_146b2ffd0);
      auVar20._8_4_ = -(uint)(auVar47._8_4_ < fRam0000000146b2ffd8);
      auVar20._12_4_ = -(uint)(auVar47._12_4_ < fRam0000000146b2ffdc);
      iVar9 = movmskps(iVar9,auVar20);
      if (iVar9 == 0) {
        fVar56 = *pfVar11;
        fVar57 = pfVar11[1];
        fVar38 = pfVar11[2];
        fVar34 = pfVar11[3];
        fVar35 = *pfVar8;
        fVar37 = pfVar8[1];
        fVar48 = pfVar8[2];
        fVar49 = pfVar8[3];
        fVar29 = pfVar8[4] * fVar22;
        fVar30 = pfVar8[5] * fVar31;
        fVar36 = pfVar8[6] * fVar32;
        fVar51 = pfVar8[7] * fVar55;
        fVar52 = fVar49 * fVar56 * _DAT_146b2ffb0 + fVar35 * fVar34 +
                 fVar57 * fVar48 * _DAT_146b2ffa0 + fVar38 * fVar37 * _DAT_146b2ff90;
        fVar53 = fVar48 * fVar56 * fRam0000000146b2ffb4 + fVar37 * fVar34 +
                 fVar57 * fVar49 * fRam0000000146b2ffa4 + fVar38 * fVar35 * fRam0000000146b2ff94;
        fVar54 = fVar37 * fVar56 * fRam0000000146b2ffb8 + fVar48 * fVar34 +
                 fVar57 * fVar35 * fRam0000000146b2ffa8 + fVar38 * fVar49 * fRam0000000146b2ff98;
        fVar39 = fVar35 * fVar56 * fRam0000000146b2ffbc + fVar49 * fVar34 +
                 fVar57 * fVar37 * fRam0000000146b2ffac + fVar38 * fVar48 * fRam0000000146b2ff9c;
        fVar37 = fVar36 * fVar57 - fVar30 * fVar38;
        fVar48 = fVar29 * fVar38 - fVar36 * fVar56;
        fVar49 = fVar30 * fVar56 - fVar29 * fVar57;
        fVar50 = fVar51 * fVar34 - fVar51 * fVar34;
        fVar37 = fVar37 + fVar37;
        fVar48 = fVar48 + fVar48;
        fVar49 = fVar49 + fVar49;
        fVar50 = fVar50 + fVar50;
        fVar35 = (fVar49 * fVar57 - fVar48 * fVar38) + fVar37 * fVar34 + fVar29 + pfVar11[4];
        fVar38 = (fVar37 * fVar38 - fVar49 * fVar56) + fVar48 * fVar34 + fVar30 + pfVar11[5];
        fVar56 = (fVar48 * fVar56 - fVar37 * fVar57) + fVar49 * fVar34 + fVar36 + pfVar11[6];
        fVar57 = (fVar50 * fVar34 - fVar50 * fVar34) + fVar50 * fVar34 + fVar51 + pfVar11[7];
      }
      else {
        fVar34 = *pfVar11;
        fVar35 = pfVar11[1];
        fVar37 = pfVar11[2];
        fVar48 = pfVar11[3];
        fVar49 = fVar35 + fVar35;
        fVar50 = fVar37 + fVar37;
        fVar30 = fVar34 * (fVar34 + fVar34);
        fVar29 = fVar48 * (fVar34 + fVar34);
        fStack_414 = (fVar48 * fVar50 + fVar34 * fVar49) * fVar22;
        fStack_400 = (fVar29 + fVar35 * fVar50) * fVar31;
        local_3f8 = (fVar48 * fVar49 + fVar34 * fVar50) * fVar32;
        local_408 = fVar31 * (fVar34 * fVar49 - fVar48 * fVar50);
        fStack_3f4 = fVar32 * (fVar35 * fVar50 - fVar29);
        fStack_410 = fVar22 * (fVar34 * fVar50 - fVar48 * fVar49);
        local_418 = (float)((uint)((_DAT_146b2ff70 - (fVar37 * fVar50 + fVar35 * fVar49)) * fVar22)
                           & _DAT_146b2ff80);
        fStack_404 = (float)((uint)((fRam0000000146b2ff74 - (fVar37 * fVar50 + fVar30)) * fVar31) &
                            uRam0000000146b2ff84);
        fStack_3f0 = (float)((uint)((fRam0000000146b2ff78 - (fVar35 * fVar49 + fVar30)) * fVar32) &
                            uRam0000000146b2ff88);
        fStack_40c = (float)((uint)((fRam0000000146b2ff7c - (fVar30 + fVar30)) * fVar55) &
                            uRam0000000146b2ff8c);
        local_3e8 = pfVar11[4];
        fStack_3e4 = pfVar11[5];
        fStack_3e0 = pfVar11[6];
        fStack_3dc = fRam0000000146b2ff7c;
        fVar34 = *pfVar8;
        fVar35 = pfVar8[1];
        fVar37 = pfVar8[2];
        fVar48 = pfVar8[3];
        fVar30 = fVar35 + fVar35;
        fVar51 = fVar37 + fVar37;
        fVar52 = (fVar34 + fVar34) * fVar34;
        fVar36 = (fVar34 + fVar34) * fVar48;
        fVar49 = pfVar8[8];
        fVar50 = pfVar8[9];
        fVar29 = pfVar8[10];
        fStack_3d4 = (fVar51 * fVar48 + fVar30 * fVar34) * fVar49;
        fStack_3c0 = (fVar36 + fVar51 * fVar35) * fVar50;
        local_3b8 = (fVar30 * fVar48 + fVar51 * fVar34) * fVar29;
        local_3c8 = fVar50 * (fVar30 * fVar34 - fVar51 * fVar48);
        fStack_3b4 = fVar29 * (fVar51 * fVar35 - fVar36);
        fStack_3d0 = fVar49 * (fVar51 * fVar34 - fVar30 * fVar48);
        local_3d8 = (float)((uint)((_DAT_146b2ff70 - (fVar51 * fVar37 + fVar30 * fVar35)) * fVar49)
                           & _DAT_146b2ff80);
        fStack_3c4 = (float)((uint)((fRam0000000146b2ff74 - (fVar51 * fVar37 + fVar52)) * fVar50) &
                            uRam0000000146b2ff84);
        fStack_3b0 = (float)((uint)((fRam0000000146b2ff78 - (fVar30 * fVar35 + fVar52)) * fVar29) &
                            uRam0000000146b2ff88);
        fStack_3cc = (float)((uint)((fRam0000000146b2ff7c - (fVar52 + fVar52)) * pfVar8[0xb]) &
                            uRam0000000146b2ff8c);
        local_3a8 = pfVar8[4];
        fStack_3a4 = pfVar8[5];
        fStack_3a0 = pfVar8[6];
        fStack_39c = fRam0000000146b2ff7c;
        local_aa8 = fStack_3d4 * local_408 + local_3d8 * local_418 + fStack_3d0 * local_3f8 +
                    fStack_3cc * local_3e8;
        fStack_aa4 = fStack_3d4 * fStack_404 + local_3d8 * fStack_414 + fStack_3d0 * fStack_3f4 +
                     fStack_3cc * fStack_3e4;
        fStack_aa0 = fStack_3d4 * fStack_400 + local_3d8 * fStack_410 + fStack_3d0 * fStack_3f0 +
                     fStack_3cc * fStack_3e0;
        fStack_a9c = fStack_3d4 * fStack_40c + local_3d8 * fStack_40c + fStack_3d0 * fStack_40c +
                     fStack_3cc * fRam0000000146b2ff7c;
        local_a98 = fStack_3c4 * local_408 + local_3c8 * local_418 + fStack_3c0 * local_3f8 +
                    fStack_3cc * local_3e8;
        fStack_a94 = fStack_3c4 * fStack_404 + local_3c8 * fStack_414 + fStack_3c0 * fStack_3f4 +
                     fStack_3cc * fStack_3e4;
        fStack_a90 = fStack_3c4 * fStack_400 + local_3c8 * fStack_410 + fStack_3c0 * fStack_3f0 +
                     fStack_3cc * fStack_3e0;
        fStack_a8c = fStack_3c4 * fStack_40c + local_3c8 * fStack_40c + fStack_3c0 * fStack_40c +
                     fStack_3cc * fRam0000000146b2ff7c;
        local_a88 = fStack_3b4 * local_408 + local_3b8 * local_418 + fStack_3b0 * local_3f8 +
                    fStack_3cc * local_3e8;
        fStack_a84 = fStack_3b4 * fStack_404 + local_3b8 * fStack_414 + fStack_3b0 * fStack_3f4 +
                     fStack_3cc * fStack_3e4;
        fStack_a80 = fStack_3b4 * fStack_400 + local_3b8 * fStack_410 + fStack_3b0 * fStack_3f0 +
                     fStack_3cc * fStack_3e0;
        fStack_a7c = fStack_3b4 * fStack_40c + local_3b8 * fStack_40c + fStack_3b0 * fStack_40c +
                     fStack_3cc * fRam0000000146b2ff7c;
        local_a78 = fStack_3a4 * local_408 + local_3a8 * local_418 + fStack_3a0 * local_3f8 +
                    fRam0000000146b2ff7c * local_3e8;
        fStack_a74 = fStack_3a4 * fStack_404 + local_3a8 * fStack_414 + fStack_3a0 * fStack_3f4 +
                     fRam0000000146b2ff7c * fStack_3e4;
        fStack_a70 = fStack_3a4 * fStack_400 + local_3a8 * fStack_410 + fStack_3a0 * fStack_3f0 +
                     fRam0000000146b2ff7c * fStack_3e0;
        fStack_a6c = fStack_3a4 * fStack_40c + local_3a8 * fStack_40c + fStack_3a0 * fStack_40c +
                     fRam0000000146b2ff7c * fRam0000000146b2ff7c;
        fStack_3fc = fStack_40c;
        fStack_3ec = fStack_40c;
        fStack_3bc = fStack_3cc;
        fStack_3ac = fStack_3cc;
        FMatrix::RemoveScaling(&local_aa8);
        fVar56 = (float)(-(uint)((float)local_ba8 <= fVar22 * auVar14._0_4_) &
                         (_DAT_146b2ffc0 ^ (uint)fVar56) ^ _DAT_146b2ffc0);
        fVar57 = (float)(-(uint)(local_ba8._4_4_ <= fVar31 * auVar14._4_4_) &
                         (uRam0000000146b2ffc4 ^ (uint)fVar57) ^ uRam0000000146b2ffc4);
        fVar38 = (float)(-(uint)((float)uStack_ba0 <= fVar32 * auVar14._8_4_) &
                         (uRam0000000146b2ffc8 ^ (uint)fVar38) ^ uRam0000000146b2ffc8);
        local_aa8 = local_aa8 * fVar56;
        fStack_aa4 = fStack_aa4 * fVar56;
        fStack_aa0 = fStack_aa0 * fVar56;
        fStack_a94 = fStack_a94 * fVar57;
        fStack_a90 = fStack_a90 * fVar57;
        local_a98 = local_a98 * fVar57;
        fStack_a84 = fStack_a84 * fVar38;
        fStack_a80 = fStack_a80 * fVar38;
        local_a88 = local_a88 * fVar38;
        FQuat::FQuat(&local_b28,&local_aa8);
        local_c08 = 1e-08;
        auVar27._0_4_ = local_b28 * local_b28 + fStack_b20 * fStack_b20;
        auVar27._4_4_ = fStack_b24 * fStack_b24 + fStack_b1c * fStack_b1c;
        auVar27._8_4_ = fStack_b20 * fStack_b20 + local_b28 * local_b28;
        auVar27._12_4_ = fStack_b1c * fStack_b1c + fStack_b24 * fStack_b24;
        auVar44._0_4_ = auVar27._4_4_ + auVar27._0_4_;
        auVar44._4_4_ = auVar27._8_4_ + auVar27._4_4_;
        auVar44._8_4_ = auVar27._12_4_ + auVar27._8_4_;
        auVar44._12_4_ = auVar27._0_4_ + auVar27._12_4_;
        auVar47 = rsqrtps(auVar27,auVar44);
        fVar56 = auVar47._0_4_;
        fVar57 = auVar47._4_4_;
        fVar38 = auVar47._8_4_;
        fVar34 = auVar47._12_4_;
        fVar56 = (_DAT_146b2ff60 - fVar56 * fVar56 * auVar44._0_4_ * _DAT_146b2ff60) * fVar56 +
                 fVar56;
        fVar57 = (fRam0000000146b2ff64 - fVar57 * fVar57 * auVar44._4_4_ * fRam0000000146b2ff64) *
                 fVar57 + fVar57;
        fVar38 = (fRam0000000146b2ff68 - fVar38 * fVar38 * auVar44._8_4_ * fRam0000000146b2ff68) *
                 fVar38 + fVar38;
        fVar34 = (fRam0000000146b2ff6c - fVar34 * fVar34 * auVar44._12_4_ * fRam0000000146b2ff6c) *
                 fVar34 + fVar34;
        fVar52 = (float)(((uint)(((_DAT_146b2ff60 - fVar56 * fVar56 * auVar44._0_4_ * _DAT_146b2ff60
                                  ) * fVar56 + fVar56) * local_b28) ^ _DAT_146b2ff50) &
                         -(uint)(1e-08 <= auVar44._0_4_) ^ _DAT_146b2ff50);
        fVar53 = (float)(((uint)(((fRam0000000146b2ff64 -
                                  fVar57 * fVar57 * auVar44._4_4_ * fRam0000000146b2ff64) * fVar57 +
                                 fVar57) * fStack_b24) ^ uRam0000000146b2ff54) &
                         -(uint)(1e-08 <= auVar44._4_4_) ^ uRam0000000146b2ff54);
        fVar54 = (float)(((uint)(((fRam0000000146b2ff68 -
                                  fVar38 * fVar38 * auVar44._8_4_ * fRam0000000146b2ff68) * fVar38 +
                                 fVar38) * fStack_b20) ^ uRam0000000146b2ff58) &
                         -(uint)(1e-08 <= auVar44._8_4_) ^ uRam0000000146b2ff58);
        fVar39 = (float)(((uint)(((fRam0000000146b2ff6c -
                                  fVar34 * fVar34 * auVar44._12_4_ * fRam0000000146b2ff6c) * fVar34
                                 + fVar34) * fStack_b1c) ^ uRam0000000146b2ff5c) &
                         -(uint)(1e-08 <= auVar44._12_4_) ^ uRam0000000146b2ff5c);
        fVar57 = 0.0;
        fVar35 = local_a78;
        fVar38 = fStack_a74;
        fVar56 = fStack_a70;
        local_b28 = fVar52;
        fStack_b24 = fVar53;
        fStack_b20 = fVar54;
        fStack_b1c = fVar39;
      }
      lVar5 = (longlong)local_c00;
      pfVar8 = (float *)(local_be0 + lVar5 * 0x30);
      *pfVar8 = fVar52;
      pfVar8[1] = fVar53;
      pfVar8[2] = fVar54;
      pfVar8[3] = fVar39;
      pfVar8 = (float *)(local_be0 + 0x10 + lVar5 * 0x30);
      *pfVar8 = fVar35;
      pfVar8[1] = fVar38;
      pfVar8[2] = fVar56;
      pfVar8[3] = fVar57;
      pfVar8 = (float *)(local_be0 + 0x20 + lVar5 * 0x30);
      *pfVar8 = fVar22 * auVar14._0_4_;
      pfVar8[1] = fVar31 * auVar14._4_4_;
      pfVar8[2] = fVar32 * auVar14._8_4_;
      pfVar8[3] = fVar55 * auVar14._12_4_;
    }
    lVar5 = (longlong)local_c00 * 0x30 + local_be0;
    cVar3 = FUN_140618120(lVar5);
    if (((cVar3 != '\0') || (cVar3 = FUN_140618120(lVar5 + 0x10), cVar3 != '\0')) ||
       (cVar3 = FUN_140618120(lVar5 + 0x20), cVar3 != '\0')) {
      FString::PrintfImpl(local_888,L"%d index contains NaN",local_c00);
      puVar7 = (undefined8 *)((longlong)local_c00 * 0x30 + local_be0);
      local_5d8 = *puVar7;
      uStack_5d0 = puVar7[1];
      local_5c8 = puVar7[2];
      uStack_5c0 = puVar7[3];
      local_5b8 = puVar7[4];
      uStack_5b0 = puVar7[5];
      if (local_888[0] != 0) {
        FMemory::Free();
      }
      goto LAB_142c9e0f8;
    }
    local_838 = local_bc8[local_c00];
    puVar7 = (undefined8 *)((longlong)local_c00 * 0x30 + local_be0);
    local_828 = *puVar7;
    uStack_820 = puVar7[1];
    local_818 = puVar7[2];
    uStack_810 = puVar7[3];
    local_808 = puVar7[4];
    uStack_800 = puVar7[5];
    iVar9 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_3,iVar9);
    }
    piVar10 = (int *)((longlong)iVar9 * 0x40 + *param_3);
    *piVar10 = local_838;
    *(undefined8 *)(piVar10 + 4) = local_828;
    *(undefined8 *)(piVar10 + 6) = uStack_820;
    *(undefined8 *)(piVar10 + 8) = local_818;
    *(undefined8 *)(piVar10 + 10) = uStack_810;
    *(undefined8 *)(piVar10 + 0xc) = local_808;
    *(undefined8 *)(piVar10 + 0xe) = uStack_800;
    iVar9 = local_c00;
  } while( true );
}



// FUNCTION 142c9e1a0 FUN_142c9e1a0 body=111 status=ok
// SIG undefined FUN_142c9e1a0(void)

void FUN_142c9e1a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 142c9e210 FUN_142c9e210 body=138 status=ok
// SIG undefined FUN_142c9e210(void)

bool FUN_142c9e210(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,
               *(undefined8 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 142c9e2a0 FUN_142c9e2a0 body=297 status=ok
// SIG undefined FUN_142c9e2a0(void)

void FUN_142c9e2a0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142c9e33d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142c9e33d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142c9e327;
  }
  else {
LAB_142c9e327:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142c9e33d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  cVar2 = (**(code **)(*plVar6 + 0x138))(plVar6);
  if (cVar2 != '\0') {
    local_20 = (undefined4)plVar6[0xe];
    local_28 = plVar6[0xd];
    local_10 = local_20;
  }
  FUN_14225da00(lVar5,param_2,&local_28,param_3);
  return;
}



// FUNCTION 142c9e3d0 FUN_142c9e3d0 body=317 status=ok
// SIG undefined FUN_142c9e3d0(void)

void FUN_142c9e3d0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142c9e476;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142c9e476;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142c9e460;
  }
  else {
LAB_142c9e460:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142c9e476:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  cVar2 = (**(code **)(*plVar6 + 0x138))(plVar6);
  if (cVar2 != '\0') {
    local_20 = (undefined4)plVar6[0xe];
    local_28 = plVar6[0xd];
    local_10 = local_20;
  }
  FUN_14225ddb0(lVar5,param_2,&local_28,param_3,param_4);
  return;
}



// FUNCTION 142c9e510 FUN_142c9e510 body=149 status=ok
// SIG undefined FUN_142c9e510(void)

undefined8 FUN_142c9e510(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined8 local_res8;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = (int)param_2[1];
  lVar1 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  local_res8 = param_3;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 3);
  }
  FUN_142c89370(param_1,&local_18,&local_res8);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142c9e5b0 FUN_142c9e5b0 body=24 status=ok
// SIG undefined FUN_142c9e5b0(void)

void FUN_142c9e5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142c8a130(param_1,local_res10);
  return;
}



// FUNCTION 142c9e5d0 FUN_142c9e5d0 body=149 status=ok
// SIG undefined FUN_142c9e5d0(void)

undefined8 FUN_142c9e5d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined8 local_res8;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = (int)param_2[1];
  lVar1 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  local_res8 = param_3;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 3);
  }
  FUN_142c89a50(param_1,&local_18,&local_res8);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142c9e670 FindId body=436 status=ok
// SIG undefined FindId(void)

int * TSet<TSoftObjectPtr<UWorld>,DefaultKeyFuncs<TSoftObjectPtr<UWorld>,0>,FDefaultSetAllocator>::
      FindId(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            (int)*(undefined8 *)(param_3 + 0x10);
    uVar7 = uVar8 >> 0xd ^ -uVar8;
    uVar4 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar4) - uVar7 ^ uVar4 >> 0xd;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar8 >> 0xc;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar4) - uVar7 ^ uVar4 >> 5;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar8 >> 3;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar7 << 10;
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_3 + 0x18);
    }
    uVar2 = FUN_140438070(puVar5);
    uVar4 = ((uVar8 - uVar4) - uVar7 ^ uVar4 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
    uVar8 = (uVar2 - uVar7) - uVar4 ^ uVar7 >> 0xd;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar8 >> 0xc;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 5;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar9 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar8 - uVar7) - uVar4) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar9 != -1) {
      lVar6 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==(lVar6 + 0x10 + (longlong)iVar9 * 0x30,param_3 + 0x10);
        if (cVar1 != '\0') {
          *param_2 = iVar9;
          return param_2;
        }
        lVar6 = *param_1;
        iVar9 = *(int *)((longlong)iVar9 * 0x30 + 0x28 + lVar6);
      } while (iVar9 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142c9e830 FUN_142c9e830 body=440 status=ok
// SIG undefined FUN_142c9e830(void)

int * FUN_142c9e830(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            (int)*(undefined8 *)(param_3 + 0x10);
    uVar7 = uVar8 >> 0xd ^ -uVar8;
    uVar5 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 10;
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_3 + 0x18);
    }
    uVar2 = FUN_140438070(puVar6);
    uVar5 = ((uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar8 = (uVar2 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar8 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar9 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar8 - uVar7) - uVar5) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar9 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==(lVar4 + 0x10 + (longlong)iVar9 * 0x48,param_3 + 0x10);
        if (cVar1 != '\0') {
          *param_2 = iVar9;
          return param_2;
        }
        lVar4 = *param_1;
        iVar9 = *(int *)((longlong)iVar9 * 0x48 + 0x40 + lVar4);
      } while (iVar9 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142c9e9f0 FUN_142c9e9f0 body=98 status=ok
// SIG undefined FUN_142c9e9f0(void)

longlong * FUN_142c9e9f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x448);
  plVar1 = plVar2 + *(int *)(param_1 + 0x450);
  for (; (lVar3 = 0, plVar2 != plVar1 &&
         ((lVar3 = *plVar2, lVar3 == 0 || (*(longlong *)(lVar3 + 0x30) != param_2))));
      plVar2 = plVar2 + 1) {
  }
  if (lVar3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x458);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x460) * 3;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
      if (*plVar2 == lVar3) {
        return plVar2;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142c9ea60 FUN_142c9ea60 body=157 status=ok
// SIG undefined FUN_142c9ea60(void)

void FUN_142c9ea60(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    pcVar1 = (code *)*param_2;
    uVar2 = param_2[1];
    lVar3 = *(longlong *)(lVar4 + 0x50);
    if (*(longlong *)(lVar4 + 0x50) == 0) {
      lVar3 = lVar4 + 0x30;
    }
    lVar4 = (longlong)*(int *)(lVar4 + 0x58) * 0x1c + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x1c) {
      local_res8 = FWeakObjectPtr::Get(lVar3);
      (*pcVar1)(uVar2,&local_res8,lVar3 + 8);
    }
  }
  return;
}



// FUNCTION 142c9eb00 FUN_142c9eb00 body=309 status=ok
// SIG undefined FUN_142c9eb00(void)

void FUN_142c9eb00(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar8 = DAT_146b30d18;
  if (DAT_146b30d18 == (undefined *)0x0) {
    puVar8 = &DAT_146b30118;
  }
  puVar3 = puVar8 + (longlong)DAT_146b30d20 * 0x18;
  do {
    if (puVar8 == puVar3) {
      return;
    }
    plVar4 = *(longlong **)(puVar8 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar9) {
        LOCK();
        bVar9 = iVar6 == (int)plVar4[1];
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) {
          lVar5 = *(longlong *)(puVar8 + 8);
          if (lVar5 != 0) {
            uVar7 = FWeakObjectPtr::Get(lVar5 + 0x68);
            local_38 = FWeakObjectPtr::Get(lVar5 + 0x60);
            local_30 = uVar7;
            FUN_142ca8600(lVar5,&local_38,*(undefined1 *)(lVar5 + 0x24),
                          *(undefined4 *)(lVar5 + 0x28));
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
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    puVar8 = puVar8 + 0x18;
  } while( true );
}



// FUNCTION 142c9ec40 GatherDebugData body=295 status=ok
// SIG undefined GatherDebugData(void)

void FAnimNode_Root::GatherDebugData(longlong param_1,float *param_2)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  ulonglong local_20;
  
  if (param_2[8] == 0.0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 6);
  }
  lVar1 = FMaterialCachedParameters::StaticStruct();
  local_res8 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  FString::PrintfImpl(&local_28,L"%s<W:%.1f%%> %s",puVar4,(double)(*param_2 * 100.0),puVar3);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  _Src = local_28;
  local_38 = (undefined2 *)0x0;
  iVar2 = (int)local_20;
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar2 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c9ed70 FUN_142c9ed70 body=588 status=ok
// SIG undefined FUN_142c9ed70(void)

void FUN_142c9ed70(longlong param_1,float *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 local_res8;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  if (param_2[8] == 0.0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_2 + 6);
  }
  lVar3 = FAnimNode_PoseDriver::StaticStruct();
  local_res8 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res8,&local_48);
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FString::PrintfImpl(&local_68,L"%s<W:%.1f%%> %s",puVar5,(double)(*param_2 * 100.0),puVar6);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  pvVar1 = local_68;
  lVar3 = (longlong)local_60;
  local_58 = (void *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_60);
  if (local_60 == 0) {
    local_50 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_58,0);
  lVar3 = *(longlong *)(param_1 + 0x140);
  lVar7 = (longlong)*(int *)(param_1 + 0x148) * 0x20 + lVar3;
  for (; lVar3 != lVar7; lVar3 = lVar3 + 0x20) {
    puVar4 = (undefined8 *)FName::ToString(lVar3,local_38);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_58,L"  Bone : %s (%0.2f) ",puVar6,(double)*(float *)(lVar3 + 0x18));
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    local_68 = local_58;
    local_58 = (void *)0x0;
    local_60 = (int)local_50;
    local_5c = local_50._4_4_;
    local_50 = 0;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    iVar2 = local_60;
    pvVar1 = local_68;
    local_48 = (undefined2 *)0x0;
    local_40 = local_60;
    if (local_60 == 0) {
      local_3c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_60,0);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar2 * 2);
    }
    FNodeDebugData::AddDebugItem(param_2,&local_48,0);
  }
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c9efc0 FUN_142c9efc0 body=678 status=ok
// SIG undefined FUN_142c9efc0(void)

void FUN_142c9efc0(longlong param_1,float *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined8 local_res8;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  puVar5 = &DAT_143f3eda8;
  if (param_2[8] == 0.0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_2 + 6);
  }
  lVar2 = FHMUIState::StaticStruct();
  local_res8 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res8,&local_48);
  puVar7 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar7 = local_48;
  }
  FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s",puVar7,(double)(*param_2 * 100.0),puVar6);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar6 = local_48;
  FGenericPlatformString::Convert<char,wchar_t>(local_48,2,&DAT_1458406dc,2,0x3f);
  iVar4 = local_50;
  if (((int)local_40 != 0) && (iVar8 = (int)local_40 + -1, iVar8 != 0)) {
    lVar2 = (longlong)local_50;
    local_50 = (uint)(local_50 == 0) + local_50 + iVar8;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
    }
    pvVar1 = (void *)((longlong)local_58 + (lVar2 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar6,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
  }
  iVar4 = 0;
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  FUN_141f85ec0(param_1,&local_58);
  puVar3 = (undefined8 *)FName::ToString(param_1 + 0x148,local_38);
  if (*(int *)(puVar3 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(&local_48,L" Target: %s)",puVar5);
  puVar5 = local_48;
  iVar8 = local_50;
  if ((int)local_40 != 0) {
    iVar4 = (int)local_40 + -1;
  }
  if (iVar4 != 0) {
    lVar2 = (longlong)local_50;
    local_50 = (uint)(local_50 == 0) + local_50 + iVar4;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
    }
    pvVar1 = (void *)((longlong)local_58 + (lVar2 - (ulonglong)(iVar8 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar5,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  pvVar1 = local_58;
  lVar2 = (longlong)local_50;
  local_48 = (undefined2 *)0x0;
  local_40 = CONCAT44(local_40._4_4_,local_50);
  if (local_50 == 0) {
    local_40 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_48,0);
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c9f270 FUN_142c9f270 body=1610 status=ok
// SIG undefined FUN_142c9f270(void)

void FUN_142c9f270(longlong param_1,float *param_2)

{
  void *pvVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  undefined8 local_res8;
  void *local_88;
  int local_80;
  int local_7c;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  puVar8 = &DAT_143f3eda8;
  if (param_2[8] == 0.0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_2 + 6);
  }
  lVar4 = FUN_142e30e20();
  local_res8 = *(undefined8 *)(lVar4 + 0x18);
  FName::ToString(&local_res8,&local_78);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_70 != 0) {
    puVar10 = local_78;
  }
  FString::PrintfImpl(&local_88,L"%s<W:%.1f%%> %s",puVar10,(double)(*param_2 * 100.0),puVar9);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  local_78 = (undefined2 *)0x0;
  local_70 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  puVar9 = local_78;
  FGenericPlatformString::Convert<char,wchar_t>(local_78,2,&DAT_145840964,2,0x3f);
  iVar7 = local_80;
  if (((int)local_70 != 0) && (iVar11 = (int)local_70 + -1, iVar11 != 0)) {
    lVar4 = (longlong)local_80;
    local_80 = (uint)(local_80 == 0) + local_80 + iVar11;
    if (local_7c < local_80) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar7);
    }
    pvVar1 = (void *)((longlong)local_88 + (lVar4 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  FUN_141f85ec0(param_1,&local_88);
  dVar13 = (double)*(float *)(param_1 + 0x298);
  dVar3 = (double)*(float *)(param_1 + 0x294);
  dVar2 = (double)*(float *)(param_1 + 0x290);
  iVar7 = 0;
  if (*(int *)(param_1 + 0x1c8) == -1) {
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar2,dVar3,dVar13);
      puVar9 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar9 = local_78;
      }
      FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x1e0),
                          (double)*(float *)(param_1 + 0x1e4),(double)*(float *)(param_1 + 0x1e8));
      puVar10 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar10 = local_68;
      }
      puVar5 = (undefined8 *)FName::ToString(param_1 + 0x1a8,local_38);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_58,L" Bone: %s, Look At Location : %s, Target Location : %s)",
                          puVar8,puVar10,puVar9);
      puVar8 = local_58;
      iVar11 = local_80;
      if (local_50 != 0) {
        iVar7 = local_50 + -1;
      }
      if (iVar7 != 0) {
        lVar4 = (longlong)local_80;
        local_80 = (uint)(local_80 == 0) + local_80 + iVar7;
        if (local_7c < local_80) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar11);
        }
        pvVar1 = (void *)((longlong)local_88 + (lVar4 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar8,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free(local_58);
      }
    }
    else {
      FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar2,dVar3,dVar13);
      puVar9 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar9 = local_78;
      }
      FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x1e0),
                          (double)*(float *)(param_1 + 0x1e4),(double)*(float *)(param_1 + 0x1e8));
      puVar10 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar10 = local_68;
      }
      puVar5 = (undefined8 *)FName::ToString(param_1 + 0x1d8,local_48);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)FName::ToString(param_1 + 0x1a8,local_38);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_58,
                          L" Bone: %s, Look At Socket: %s, Look At Location: %s, , Target Location : %s)"
                          ,puVar8,puVar6,puVar10,puVar9);
      puVar8 = local_58;
      iVar11 = local_80;
      if (local_50 != 0) {
        iVar7 = local_50 + -1;
      }
      if (iVar7 != 0) {
        lVar4 = (longlong)local_80;
        local_80 = (uint)(local_80 == 0) + iVar7 + local_80;
        if (local_7c < local_80) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar11);
        }
        pvVar1 = (void *)((longlong)local_88 + (lVar4 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar8,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free(local_58);
      }
      bVar12 = local_38[0] != 0;
      local_38[0] = local_48[0];
      if (bVar12) {
        FMemory::Free();
        local_38[0] = local_48[0];
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_58 = local_78;
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
      local_58 = local_78;
    }
  }
  else {
    FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar2,dVar3,dVar13);
    puVar9 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x1e0),
                        (double)*(float *)(param_1 + 0x1e4),(double)*(float *)(param_1 + 0x1e8));
    puVar10 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar10 = local_68;
    }
    puVar5 = (undefined8 *)FName::ToString(param_1 + 0x1c0,local_38);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar5;
    }
    puVar5 = (undefined8 *)FName::ToString(param_1 + 0x1a8,local_48);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar8 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_78,
                        L" Bone: %s, Look At Bone: %s, Look At Location: %s, Target Location : %s)",
                        puVar8,puVar6,puVar10,puVar9);
    puVar8 = local_78;
    iVar11 = local_80;
    if ((int)local_70 != 0) {
      iVar7 = (int)local_70 + -1;
    }
    if (iVar7 != 0) {
      lVar4 = (longlong)local_80;
      local_80 = (uint)(local_80 == 0) + local_80 + iVar7;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar11);
      }
      pvVar1 = (void *)((longlong)local_88 + (lVar4 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar8,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  pvVar1 = local_88;
  lVar4 = (longlong)local_80;
  local_78 = (undefined2 *)0x0;
  local_70 = CONCAT44(local_70._4_4_,local_80);
  if (local_80 == 0) {
    local_70 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_80,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar1,lVar4 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_78,0);
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c9f8c0 FUN_142c9f8c0 body=607 status=ok
// SIG undefined FUN_142c9f8c0(void)

void FUN_142c9f8c0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined8 *local_res10;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_48 [8];
  longlong local_40;
  
  local_88 = 0;
  local_80 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  FUN_142c97e30(param_1,&local_58);
  puVar7 = local_58 + (longlong)(int)local_50 * 0xb;
  for (puVar4 = local_58; puVar4 != puVar7; puVar4 = puVar4 + 0xb) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x3d8))(param_1,local_48,puVar4);
    uVar1 = local_80;
    lVar6 = (longlong)(int)local_80;
    iVar3 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar3);
    if (local_80._4_4_ < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_88,uVar1 & 0xffffffff);
    }
    *(undefined8 *)(local_88 + lVar6 * 0x18) = *puVar2;
    *(undefined8 *)(local_88 + 8 + lVar6 * 0x18) = 0;
    *(undefined8 *)(local_88 + 8 + lVar6 * 0x18) = puVar2[1];
    puVar2[1] = 0;
    *(undefined4 *)(local_88 + 0x10 + lVar6 * 0x18) = *(undefined4 *)(puVar2 + 2);
    *(undefined4 *)(local_88 + 0x14 + lVar6 * 0x18) = *(undefined4 *)((longlong)puVar2 + 0x14);
    puVar2[2] = 0;
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  FUN_1404be960(&local_58);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FAssetBundleData::AddBundleAssets(&local_68,DAT_146b300f8,&local_88);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  (**(code **)(*param_1 + 0x300))(param_1,DAT_146b30100,&local_78);
  puVar4 = local_78;
  if (0 < (int)local_70) {
    TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x23,local_res8,local_78);
    if ((local_res8[0] == -1) ||
       (lVar6 = (longlong)local_res8[0] * 0x68 + param_1[0x23], lVar6 == 0)) {
      local_res10 = puVar4;
      FUN_1422b7f30(param_1 + 0x23,local_res8,&local_res10,0);
      lVar6 = (longlong)local_res8[0] * 0x68 + param_1[0x23];
      puVar4 = local_78;
    }
    local_50 = local_68;
    *local_68 = *puVar4;
    local_68[1] = puVar4[1];
    local_58 = local_68 + 2;
    TSet<TTuple<FName,FAssetBundleEntry>,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,FAssetBundleEntry_&>_>(lVar6 + 0x10,local_res8,&local_58,0);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if ((int)local_60 != 0) {
    puVar4 = local_68 + 3;
    iVar3 = (int)local_60;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (puVar4);
      puVar4 = puVar4 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_68 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if ((int)local_80 != 0) {
    plVar5 = (longlong *)(local_88 + 8);
    iVar3 = (int)local_80;
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c9fb20 FUN_142c9fb20 body=84 status=ok
// SIG undefined FUN_142c9fb20(void)

undefined8 * FUN_142c9fb20(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  *param_2 = 0;
  puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x50) * 3;
  do {
    if (puVar4 == puVar1) {
      return param_2;
    }
    plVar3 = (longlong *)puVar4[1];
    plVar2 = plVar3 + *(int *)(puVar4 + 2);
    for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_3) {
        *param_2 = *puVar4;
        break;
      }
    }
    puVar4 = puVar4 + 3;
  } while( true );
}



// FUNCTION 142c9fb80 FUN_142c9fb80 body=35 status=ok
// SIG undefined FUN_142c9fb80(void)

undefined4 FUN_142c9fb80(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142c9fbb0();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x90);
  }
  return 0;
}



// FUNCTION 142c9fbb0 FUN_142c9fbb0 body=113 status=ok
// SIG undefined FUN_142c9fbb0(void)

longlong FUN_142c9fbb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  FUN_142c81650(param_1 + 8,local_res8,param_2);
  lVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar4 = UAnimMontage::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 142c9fc30 FUN_142c9fc30 body=173 status=ok
// SIG undefined FUN_142c9fc30(void)

longlong FUN_142c9fc30(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res10 [2];
  
  if (param_2 != 0) {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
    }
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x468,local_res10,param_2);
    lVar4 = 0;
    lVar3 = lVar4;
    if (local_res10[0] != -1) {
      lVar3 = *(longlong *)(param_1 + 0x468) + (longlong)local_res10[0] * 0x28;
    }
    lVar2 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar2 = lVar4;
    }
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x10);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
    return lVar4;
  }
  return 0;
}



// FUNCTION 142c9fce0 FUN_142c9fce0 body=92 status=ok
// SIG undefined FUN_142c9fce0(void)

undefined8 * FUN_142c9fce0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_142c9fc30();
  lVar2 = 0;
  if (lVar1 != 0) {
    if (param_3 != 0) {
      lVar2 = *(longlong *)(param_3 + 0x38);
    }
    if (lVar2 != 0) {
      FUN_1423f0d30(lVar2,param_2,lVar1);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c9fd40 FUN_142c9fd40 body=66 status=ok
// SIG undefined FUN_142c9fd40(void)

void FUN_142c9fd40(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c9fc30();
  if (lVar1 != 0) {
    uVar2 = USignificanceManager::GetWorld(param_1);
    FUN_142c9fbb0(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 142c9fd90 FUN_142c9fd90 body=281 status=ok
// SIG undefined FUN_142c9fd90(void)

void FUN_142c9fd90(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142c9fe25;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142c9fe25;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142c9fe0f;
  }
  else {
LAB_142c9fe0f:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142c9fe25:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  cVar2 = (**(code **)(*plVar6 + 0x138))(plVar6);
  if (cVar2 != '\0') {
    local_20 = (undefined4)plVar6[0xe];
    local_28 = plVar6[0xd];
    local_10 = local_20;
  }
  FUN_14225e980(lVar5,param_2,&local_28);
  return;
}



// FUNCTION 142c9feb0 FUN_142c9feb0 body=20 status=ok
// SIG undefined FUN_142c9feb0(void)

undefined8 FUN_142c9feb0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FWeakObjectPtr::Get(*param_1 + 0x18);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142c9fed0 FUN_142c9fed0 body=335 status=ok
// SIG undefined FUN_142c9fed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c9fed0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 uStack_180;
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_158 [8];
  int local_150;
  undefined1 local_128 [24];
  longlong local_110;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((((param_2 != 0) && (param_1 != 0)) && (*(longlong *)(param_1 + 0x718) != 0)) &&
     (*(int *)(param_1 + 0xa90) != 0)) {
    FUN_142c94ef0(param_1 + 0x13f0,param_1);
    FBoneContainer::FBoneContainer(local_158);
    local_168 = *(undefined4 *)(param_1 + 0x83c);
    local_178[0] = 0;
    local_170 = 0;
    FBoneContainer::InitializeTo
              (local_158,param_1 + 0x1400,local_178,*(undefined8 *)(param_1 + 0x718));
    cVar1 = FWeakObjectPtr::IsValid(local_128);
    if (((cVar1 != '\0') && (local_110 != 0)) && (0 < local_150)) {
      local_188 = *(undefined8 *)(param_1 + 0xa88);
      uStack_180 = *(undefined4 *)(param_1 + 0xa90);
      uVar2 = FUN_142ca0020(param_2,&local_188,local_158);
      FBoneContainer::~FBoneContainer(local_158);
      return uVar2;
    }
    FBoneContainer::~FBoneContainer(local_158);
  }
  return 0;
}



// FUNCTION 142ca0020 FUN_142ca0020 body=1244 status=ok
// SIG undefined FUN_142ca0020(void)

float FUN_142ca0020(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  uint uVar7;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res20 [2];
  undefined *local_168;
  float *pfStack_160;
  float *local_158;
  uint local_150;
  int local_14c;
  longlong *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  longlong local_130;
  char local_128;
  undefined8 local_120;
  undefined1 local_118 [4];
  float local_114;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  ulonglong uVar8;
  
  if (param_1 == (longlong *)0x0) {
    return 0.0;
  }
  pfStack_160 = local_res20;
  local_168 = &DAT_14060d670;
  local_res20[0] = (float)((uint)local_res20[0] & 0xffffff00);
  lVar4 = FUN_1415d8310(&local_168,&DAT_146216a38);
  fVar14 = 3.4028235e+38;
  local_140 = (undefined8 *)(lVar4 + 0x18);
  lVar2 = param_2[1];
  fVar12 = 0.0;
  fVar11 = 0.0;
  local_138 = *local_140;
  local_130 = *(longlong *)(lVar4 + 0x28);
  local_128 = '\0';
  local_120 = *(undefined8 *)(lVar4 + 0x30);
  *(undefined8 ***)(lVar4 + 0x30) = &local_140;
  *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
  lVar4 = param_3[1];
  local_res20[0] = 0.0;
  if (0.0 < *(float *)(param_1 + 0x12) || *(float *)(param_1 + 0x12) == 0.0) {
    do {
      uVar8 = 0;
      local_158 = (float *)0x0;
      local_150 = 0;
      local_14c = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e6 = 0;
      iVar1 = (int)param_3[1];
      uVar6 = uVar8;
      local_148 = param_3;
      if (0 < iVar1) {
        FUN_140848c80(&local_158,iVar1);
        uVar6 = (ulonglong)local_150;
      }
      local_150 = iVar1 + (int)uVar6;
      if (local_14c < (int)local_150) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_158);
      }
      local_118[0] = 0;
      local_110 = 0;
      local_108 = 0;
      local_114 = fVar11;
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_158,&local_100,local_118);
      uVar3 = local_150;
      fVar13 = 0.0;
      fVar10 = 0.0;
      pfVar9 = local_158;
      uVar6 = uVar8;
      if (local_150 != 0) {
        do {
          uVar7 = (uint)uVar8;
          if ((int)lVar2 != (int)lVar4) {
            uVar7 = (uint)*(ushort *)(uVar6 + *param_3);
          }
          pfVar5 = (float *)((longlong)(int)uVar7 * 0x30 + *param_2);
          fVar12 = SQRT((pfVar9[5] - pfVar5[5]) * (pfVar9[5] - pfVar5[5]) +
                        (pfVar9[4] - pfVar5[4]) * (pfVar9[4] - pfVar5[4]) +
                        (pfVar9[6] - pfVar5[6]) * (pfVar9[6] - pfVar5[6])) * 0.02;
          if (0.0 <= fVar12) {
            if (1.0 <= fVar12) {
              fVar12 = 1.0;
            }
          }
          else {
            fVar12 = 0.0;
          }
          fVar13 = fVar13 + fVar12;
          fVar12 = -*pfVar5 * *pfVar9 * fRam0000000146b2ffbc + pfVar9[3] * pfVar5[3] +
                   -pfVar5[1] * pfVar9[1] * fRam0000000146b2ffac +
                   -pfVar5[2] * pfVar9[2] * fRam0000000146b2ff9c;
          if (-1.0 <= fVar12) {
            if (1.0 <= fVar12) {
              fVar12 = 1.0;
            }
          }
          else {
            fVar12 = -1.0;
          }
          fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
          fVar12 = ABS(fVar12 + fVar12) * 0.31830987;
          if (0.0 <= fVar12) {
            if (1.0 <= fVar12) {
              fVar12 = 1.0;
            }
          }
          else {
            fVar12 = 0.0;
          }
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          fVar10 = fVar10 + fVar12;
          pfVar9 = pfVar9 + 0xc;
          uVar6 = uVar6 + 2;
        } while (uVar7 != uVar3);
      }
      fVar12 = local_res20[0];
      if (fVar10 + fVar13 < fVar14) {
        fVar14 = fVar10 + fVar13;
        fVar12 = fVar11;
      }
      local_res20[0] = fVar12;
      if (local_110 != 0) {
        FMemory::Free();
      }
      fVar11 = fVar11 + 0.033333335;
    } while (fVar11 < *(float *)(param_1 + 0x12) || fVar11 == *(float *)(param_1 + 0x12));
  }
  if (local_128 == '\0') {
    local_128 = 1;
    *(int *)(local_140 + 4) = *(int *)(local_140 + 4) + -1;
    if (local_130 != local_140[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_140 = local_138;
    local_140[3] = local_120;
  }
  return fVar12;
}



// FUNCTION 142ca0500 FUN_142ca0500 body=276 status=ok
// SIG undefined FUN_142ca0500(void)

longlong * FUN_142ca0500(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142ca059d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142ca059d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142ca0587;
  }
  else {
LAB_142ca0587:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142ca059d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_3);
  cVar2 = (**(code **)(*plVar6 + 0x138))(plVar6);
  if (cVar2 != '\0') {
    lVar5 = plVar6[0xe];
    *param_2 = plVar6[0xd];
    *(int *)(param_2 + 1) = (int)lVar5;
  }
  return param_2;
}



// FUNCTION 142ca0620 FUN_142ca0620 body=288 status=ok
// SIG undefined FUN_142ca0620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142ca0620(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [56];
  longlong local_a0;
  undefined **local_98;
  undefined8 *local_90;
  undefined ***local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a0 = 0;
  local_58 = &PTR_FUN_145848c38;
  local_50 = &local_res10;
  local_20 = &local_58;
  local_98 = &PTR_FUN_145848c68;
  local_90 = &local_res10;
  local_60 = &local_98;
  local_res10 = param_2;
  local_a0 = FUN_142cb0440(&local_58,local_d8);
  lVar1 = FUN_142c892b0(param_1 + 0xf70,local_d8);
  if (lVar1 == 0) {
    local_a0 = 0;
    if (local_60 != (undefined ***)0x0) {
      local_a0 = lVar1;
      local_a0 = (*(code *)**local_60)(local_60,local_d8);
    }
    lVar1 = FUN_142c892b0(param_1 + 0xf70,local_d8);
  }
  if (local_60 != (undefined ***)0x0) {
    (*(code *)(*local_60)[4])(local_60,local_60 != &local_98);
    local_60 = (undefined ***)0x0;
  }
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])
              (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
  }
  return lVar1;
}



// FUNCTION 142ca0740 FUN_142ca0740 body=217 status=ok
// SIG undefined FUN_142ca0740(void)

longlong FUN_142ca0740(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = FUN_141796df0(param_1 + 8);
    if (lVar2 != 0) {
      lVar3 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142ca07ee;
    }
    lVar2 = FSoftObjectPath::TryLoad(param_1 + 8);
    if (lVar2 != 0) {
      lVar3 = FUN_14171bfe0();
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
LAB_142ca07ee:
        *(longlong *)(param_1 + 0x20) = lVar2;
        return lVar2;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  return lVar2;
}



// FUNCTION 142ca0820 FUN_142ca0820 body=607 status=ok
// SIG undefined FUN_142ca0820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ca0820(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x278))();
  cVar3 = FAdvTextRun::AreAllCharactersVisible(param_2);
  if ((cVar3 != '\0') && (param_4 != 0)) {
    lVar4 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_4 + 0x118) != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x278))(param_1,local_50,param_3);
      FUN_142c8d880(param_2,uVar5);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  cVar3 = FAdvTextRun::AreAllCharactersVisible(param_2);
  if (cVar3 != '\0') {
    return param_2;
  }
  plVar9 = param_1 + 5;
  lVar4 = FWeakObjectPtr::Get(plVar9);
  if (lVar4 == 0) {
    LOCK();
    iVar2 = 0;
    if (DAT_1464b56f4 != 0) {
      iVar2 = DAT_1464b56f4;
    }
    DAT_1464b56f4 = iVar2;
    UNLOCK();
    if (DAT_1464b56f4 == (int)param_1[6]) {
      return param_2;
    }
    if (param_1[7] == 0) {
      return param_2;
    }
    local_58 = lVar4;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar9,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 6) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(plVar9);
    if (lVar4 == 0) {
      return param_2;
    }
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar7 = FUN_1428e7a40();
    lVar6 = lVar4;
    do {
      if (lVar6 == lVar7) {
        plVar10 = (longlong *)
                  (param_2 & (ulonglong)(*(longlong *)(param_2 + 8) != 0) - 1 |
                  *(ulonglong *)(param_2 + 8));
        plVar9 = plVar10 + *(int *)(param_2 + 0x10);
        do {
          if (plVar10 == plVar9) {
            FUN_142cccc10(param_2);
            return param_2;
          }
          plVar8 = (longlong *)*plVar10;
          lVar7 = FUN_1428e7a40();
          lVar6 = lVar4;
          do {
            if (lVar6 == lVar7) {
              if (plVar8 != (longlong *)0x0) {
                lVar6 = FUN_1428dfc70();
                if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                    lVar6 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,lVar4);
                }
              }
              break;
            }
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
          *plVar10 = (longlong)plVar8;
          plVar10 = plVar10 + 1;
        } while( true );
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return param_2;
}



// FUNCTION 142ca0a90 FUN_142ca0a90 body=23 status=ok
// SIG undefined FUN_142ca0a90(void)

undefined8 FUN_142ca0a90(undefined8 param_1,undefined8 param_2)

{
  FUN_142e118b0();
  return param_2;
}



// FUNCTION 142ca0ad0 FUN_142ca0ad0 body=517 status=ok
// SIG undefined FUN_142ca0ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142ca0ad0(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  BOOL BVar6;
  float *pfVar7;
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
  undefined1 auStack_d8 [48];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  }
  FUN_142ca29d0(param_1,&local_a8,*(undefined4 *)(param_1 + 0x1c));
  if (*(char *)(param_1 + 0x28) == '\0') {
    fVar16 = *param_3;
    fVar8 = param_3[1];
    fVar12 = param_3[2];
    fVar20 = param_3[3];
    pfVar7 = &local_78;
    local_68 = *(undefined8 *)(param_3 + 4);
    uStack_60 = *(undefined8 *)(param_3 + 6);
    local_58 = *(undefined8 *)(param_3 + 8);
    uStack_50 = *(undefined8 *)(param_3 + 10);
    local_78 = fVar16;
    fStack_74 = fVar8;
    fStack_70 = fVar12;
    fStack_6c = fVar20;
  }
  else {
    pfVar7 = (float *)FUN_142ca29d0(param_1,&local_78,
                                    *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x20));
    fVar16 = *pfVar7;
    fVar8 = pfVar7[1];
    fVar12 = pfVar7[2];
    fVar20 = pfVar7[3];
  }
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  fVar12 = -fVar12;
  fVar16 = -fVar16;
  fVar8 = -fVar8;
  fVar13 = fVar12 * local_a8 * fRam0000000146b2ffb4;
  fVar14 = fVar8 * local_a8 * fRam0000000146b2ffb8;
  fVar15 = fVar16 * local_a8 * fRam0000000146b2ffbc;
  fVar17 = fVar16 * fStack_a0 * fRam0000000146b2ff94;
  fVar18 = fVar20 * fStack_a0 * fRam0000000146b2ff98;
  fVar19 = fVar12 * fStack_a0 * fRam0000000146b2ff9c;
  fVar9 = fVar20 * fStack_a4 * fRam0000000146b2ffa4;
  fVar10 = fVar16 * fStack_a4 * fRam0000000146b2ffa8;
  fVar11 = fVar8 * fStack_a4 * fRam0000000146b2ffac;
  *param_2 = fVar20 * local_a8 * _DAT_146b2ffb0 + fStack_9c * fVar16 +
             fVar12 * fStack_a4 * _DAT_146b2ffa0 + fVar8 * fStack_a0 * _DAT_146b2ff90;
  param_2[1] = fVar13 + fStack_9c * fVar8 + fVar9 + fVar17;
  param_2[2] = fVar14 + fStack_9c * fVar12 + fVar10 + fVar18;
  param_2[3] = fVar15 + fStack_9c * fVar20 + fVar11 + fVar19;
  auVar1._4_4_ = fStack_94 - fVar4;
  auVar1._0_4_ = local_98 - fVar3;
  auVar1._8_4_ = fStack_90 - fVar5;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar1;
  auVar2._4_4_ = DAT_1464aa788._4_4_;
  auVar2._0_4_ = (undefined4)DAT_1464aa788;
  auVar2._8_4_ = DAT_1464aa790;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 8) = auVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  return param_2;
}



// FUNCTION 142ca0ce0 FUN_142ca0ce0 body=7 status=ok
// SIG undefined FUN_142ca0ce0(void)

undefined4 FUN_142ca0ce0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xf68);
}



// FUNCTION 142ca0cf0 FUN_142ca0cf0 body=568 status=ok
// SIG undefined FUN_142ca0cf0(void)

longlong FUN_142ca0cf0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res10 [2];
  int local_res20 [2];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  lVar7 = 0;
  lVar6 = lVar7;
  if (*param_2 != 0) {
    lVar1 = APostProcessVolume::GetPrivateStaticClass();
    for (lVar2 = *param_2; (lVar6 = lVar7, lVar2 != 0 && (lVar6 = *param_2, lVar2 != lVar1));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  while( true ) {
    if ((lVar6 == 0) || (lVar2 = APostProcessVolume::GetPrivateStaticClass(), lVar6 == lVar2)) {
      local_78 = 0;
      local_70 = 0;
      local_90 = 0xffffffff;
      local_8c = 0;
      uVar3 = 0;
      local_80 = 0;
      if (param_3 == 0) {
        local_res10[0] = 0;
        local_80 = 0;
      }
      else {
        uVar5 = FSoftObjectPath::FSoftObjectPath(local_48,param_3);
        FSoftObjectPath::operator=(&local_80,uVar5);
        FWeakObjectPtr::operator=(&local_90,param_3);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_8c = CONCAT44(DAT_1464b56f4,(undefined4)local_8c);
      }
      FUN_142c9e830(param_1 + 0x48,local_res20,&local_90,param_4,uVar3);
      lVar6 = lVar7;
      if (local_res20[0] != -1) {
        lVar6 = *(longlong *)(param_1 + 0x48) + (longlong)local_res20[0] * 0x48;
      }
      lVar2 = lVar6 + 0x28;
      if (lVar6 == 0) {
        lVar2 = lVar7;
      }
      if ((lVar2 == 0) &&
         (piVar4 = (int *)TSet<TSoftObjectPtr<UWorld>,DefaultKeyFuncs<TSoftObjectPtr<UWorld>,0>,FDefaultSetAllocator>
                          ::FindId(param_1 + 0xe8,local_64,&local_90), lVar2 = lVar7, *piVar4 == -1)
         ) {
        lVar2 = param_1 + 0x30;
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      return lVar2;
    }
    local_a0 = 0;
    local_98 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    if (lVar6 == 0) {
      local_a8 = 0;
    }
    else {
      uVar3 = FSoftObjectPath::FSoftObjectPath(local_60,lVar6);
      FSoftObjectPath::operator=(&local_a8,uVar3);
      FWeakObjectPtr::operator=(&local_b8,lVar6);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_b4 = CONCAT44(DAT_1464b56f4,(undefined4)local_b4);
    }
    FUN_142c9e830(param_1 + 0x98,local_res10,&local_b8);
    lVar2 = lVar7;
    if ((int)local_res10[0] != -1) {
      lVar2 = *(longlong *)(param_1 + 0x98) + (longlong)(int)local_res10[0] * 0x48;
    }
    lVar1 = lVar2 + 0x28;
    if (lVar2 == 0) {
      lVar1 = lVar7;
    }
    if ((lVar1 != 0) ||
       (piVar4 = (int *)TSet<TSoftObjectPtr<UWorld>,DefaultKeyFuncs<TSoftObjectPtr<UWorld>,0>,FDefaultSetAllocator>
                        ::FindId(param_1 + 0x138,local_68,&local_b8), lVar1 = lVar7, *piVar4 != -1))
    break;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    lVar6 = *(longlong *)(lVar6 + 0x30);
  }
  if (local_a0 == 0) {
    return lVar1;
  }
  FMemory::Free();
  return lVar1;
}



// FUNCTION 142ca0f30 FUN_142ca0f30 body=606 status=ok
// SIG undefined FUN_142ca0f30(void)

longlong * FUN_142ca0f30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
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
  
  lVar6 = UInputDeviceManager::GetInstance();
  uStack_94 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (longlong *)(lVar6 + 0x28);
  local_98 = 0;
  uVar3 = *(uint *)(lVar6 + 0x50);
  puVar2 = (uint *)(lVar6 + 0x38);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(lVar6 + 0x48);
    if (*(uint **)(lVar6 + 0x48) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar5) goto LAB_142ca101b;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142ca101b:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar6 + 0x50);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(lVar6 + 0x48);
    if (*(uint **)(lVar6 + 0x48) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142ca10e0;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142ca10e0:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar6 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
    if ((lVar6 != 0) && (lVar6 = FUN_142ca0cf0(lVar6,param_2,param_3), lVar6 != 0)) {
      iVar7 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar7);
      }
      FUN_142c8c290(*param_1 + (longlong)iVar7 * 0x18,lVar6);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return param_1;
}



// FUNCTION 142ca1190 FUN_142ca1190 body=325 status=ok
// SIG undefined FUN_142ca1190(void)

undefined8 FUN_142ca1190(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == -1) {
    return 0;
  }
  puVar6 = (undefined8 *)0x0;
  lVar3 = *(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + -0x330));
  puVar4 = puVar6;
  if ((lVar3 != 0) && (cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0x140), cVar1 != '\0')) {
    lVar3 = FWeakObjectPtr::Get(*(longlong *)
                                 (*(longlong *)(param_1 + -0x330) + (longlong)param_2 * 8) + 0x140);
    puVar4 = *(undefined8 **)(lVar3 + 0x90);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x140);
  }
  else {
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
      lVar3 = *(longlong *)(param_1 + 0x188);
      if (*(longlong *)(param_1 + 0x188) == 0) {
        lVar3 = param_1 + 0x180;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)puVar4 >> 0x20) + (int)puVar4) &
                               (longlong)*(int *)(param_1 + 400) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 0x18);
          if (*(undefined8 **)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 0x18) == puVar4) {
            if (iVar2 == -1) goto LAB_142ca129e;
            goto LAB_142ca12a1;
          }
          iVar2 = *(int *)(puVar5 + 2);
        } while (iVar2 != -1);
        puVar4 = (undefined8 *)0x0;
        goto LAB_142ca12b5;
      }
    }
LAB_142ca129e:
    puVar5 = puVar6;
LAB_142ca12a1:
    puVar4 = puVar5 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = puVar6;
    }
  }
LAB_142ca12b5:
  if (puVar4 != (undefined8 *)0x0) {
    return *puVar4;
  }
  return *(undefined8 *)(param_1 + 0x140);
}



// FUNCTION 142ca12e0 GetInstance body=193 status=ok
// SIG undefined GetInstance(void)

longlong UInputDeviceManager::GetInstance(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (DAT_146b2ff20 == 0) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar6 = 0;
    uVar4 = FUN_142e5e850();
    DAT_146b2ff20 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    iVar1 = *(int *)(DAT_146b2ff20 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
  }
  return DAT_146b2ff20;
}



// FUNCTION 142ca13b0 FUN_142ca13b0 body=110 status=ok
// SIG undefined FUN_142ca13b0(void)

void FUN_142ca13b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x370))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142ca1420 FUN_142ca1420 body=232 status=ok
// SIG undefined FUN_142ca1420(void)

void FUN_142ca1420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b30e30) && (_Init_thread_header(&DAT_146b30e30), DAT_146b30e30 == -1))
  {
    uVar1 = FUN_142e34d30();
    FUN_142e34d30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttributeSets",1);
    DAT_146b30e28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b30e30);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b30e28 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b30e28 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b30e28 + 0x30));
  }
  return;
}



// FUNCTION 142ca1510 FUN_142ca1510 body=789 status=ok
// SIG undefined FUN_142ca1510(void)

void FUN_142ca1510(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b30dd0) && (_Init_thread_header(&DAT_146b30dd0), DAT_146b30dd0 == -1)) {
    uVar1 = FUN_142e5c1e0();
    FUN_142e5c1e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GestaltPartList",1);
    DAT_146b30dc8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b30dd0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b30dc8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b30dc8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b30dc8 + 0x30));
  }
  if ((*piVar5 < DAT_146b30de0) && (_Init_thread_header(&DAT_146b30de0), DAT_146b30de0 == -1)) {
    uVar1 = FUN_142e5c1e0();
    FUN_142e5c1e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedGestaltParts",1);
    DAT_146b30dd8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b30de0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b30dd8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b30dd8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b30dd8 + 0x30));
  }
  if ((*piVar5 < DAT_146b30df0) && (_Init_thread_header(&DAT_146b30df0), DAT_146b30df0 == -1)) {
    uVar1 = FUN_142e5c1e0();
    FUN_142e5c1e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BoneModifyProfileData",1);
    DAT_146b30de8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b30df0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b30de8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b30de8 + 0x40) + (short)iVar3;
      local_14 = 8;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b30de8 + 0x30));
  }
  if ((*piVar5 < DAT_146b30e00) && (_Init_thread_header(&DAT_146b30e00), DAT_146b30e00 == -1)) {
    uVar1 = FUN_142e5c1e0();
    FUN_142e5c1e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GlobalBMPRepArray",1);
    DAT_146b30df8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b30e00);
  }
  if (0 < *(int *)(DAT_146b30df8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b30df8 + 0x40) + (short)iVar4;
      local_14 = 8;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b30df8 + 0x30));
  }
  return;
}



// FUNCTION 142ca1830 FUN_142ca1830 body=1017 status=ok
// SIG undefined FUN_142ca1830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_142ca1830(longlong param_1,float *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_168 [32];
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  char local_12c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar11 = *(longlong *)(param_4 + 0x18);
  *(undefined8 *)param_2 = DAT_1466acfb0;
  param_2[2] = DAT_1466acfb8;
  cVar6 = *(char *)(param_1 + 0x1a0);
  if (cVar6 == '\0') {
    puVar7 = (undefined8 *)FAxis::GetTransformedAxis(param_1 + 0x1ec,&local_148);
    *(undefined8 *)param_2 = *puVar7;
    local_130 = *(float *)(puVar7 + 1);
  }
  else {
    if (cVar6 != '\x01') {
      if (cVar6 != '\x02') {
        return param_2;
      }
      puVar7 = (undefined8 *)FAxis::GetTransformedAxis(param_1 + 0x1fc,&local_148);
      *(undefined8 *)param_2 = *puVar7;
      param_2[2] = *(float *)(puVar7 + 1);
      return param_2;
    }
    iVar10 = -1;
    if (*(char *)(param_1 + 0x14c) == '\0') {
      iVar8 = *(int *)(param_1 + 0x150);
    }
    else if (*(int *)(param_1 + 0x148) == -1) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(*(longlong *)(lVar11 + 0x80) + (longlong)*(int *)(param_1 + 0x148) * 4);
    }
    lVar12 = *(longlong *)(param_4 + 0x20);
    plVar1 = (longlong *)(param_4 + 8);
    lVar13 = (longlong)iVar8;
    if (*(char *)(lVar13 + lVar12) == '\0') {
      FUN_14060c680(plVar1);
      lVar12 = *(longlong *)(param_4 + 0x20);
    }
    lVar9 = *plVar1;
    puVar7 = (undefined8 *)(lVar9 + lVar13 * 0x30);
    local_118 = *puVar7;
    uStack_110 = puVar7[1];
    puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar13 * 0x30);
    local_108 = *puVar2;
    uStack_104 = puVar2[1];
    uStack_100 = puVar2[2];
    uStack_fc = puVar2[3];
    puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar13 * 0x30);
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if (*(char *)(param_1 + 0x164) == '\0') {
      iVar10 = *(int *)(param_1 + 0x168);
    }
    else if (*(int *)(param_1 + 0x160) != -1) {
      iVar10 = *(int *)(*(longlong *)(lVar11 + 0x80) + (longlong)*(int *)(param_1 + 0x160) * 4);
    }
    lVar11 = (longlong)iVar10;
    if (*(char *)(lVar12 + lVar11) == '\0') {
      FUN_14060c680(plVar1,iVar10);
      lVar9 = *plVar1;
    }
    puVar7 = (undefined8 *)(lVar9 + lVar11 * 0x30);
    local_e8 = *puVar7;
    uStack_e0 = puVar7[1];
    puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar11 * 0x30);
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar11 * 0x30);
    local_c8 = *puVar2;
    uStack_c4 = puVar2[1];
    uStack_c0 = puVar2[2];
    uStack_bc = puVar2[3];
    FUN_14162bcf0(&local_e8,local_b8,&local_118);
    *param_2 = local_a8;
    param_2[1] = fStack_a4;
    param_2[2] = fStack_a0;
    fVar3 = param_2[1];
    fVar4 = *param_2;
    fVar5 = param_2[2];
    fVar14 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
    if (1e-08 < fVar14) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar17 = auVar18._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar14 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar14 * 0.5 * fVar17 * fVar17);
      *param_2 = fVar4 * fVar17;
      param_2[1] = fVar3 * fVar17;
      param_2[2] = fVar5 * fVar17;
    }
    local_148 = local_a8;
    local_140 = fStack_a0;
    fStack_144 = fStack_a4;
    FAxis::FAxis(&local_138,&local_148);
    FAxis::Initialize(&local_138);
    if (local_12c == '\0') {
      *(ulonglong *)param_2 = CONCAT44(fStack_134,local_138);
    }
    else {
      fVar3 = *param_3;
      fVar4 = param_3[1];
      fVar5 = param_3[2];
      fVar14 = param_3[3];
      fVar17 = local_130 * fVar4 - fStack_134 * fVar5;
      fVar15 = local_138 * fVar5 - local_130 * fVar3;
      fVar16 = fStack_134 * fVar3 - local_138 * fVar4;
      fVar17 = fVar17 + fVar17;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      local_130 = (fVar15 * fVar3 - fVar17 * fVar4) + fVar14 * fVar16 + local_130;
      *(ulonglong *)param_2 =
           CONCAT44((fVar17 * fVar5 - fVar16 * fVar3) + fVar14 * fVar15 + fStack_134,
                    (fVar16 * fVar4 - fVar15 * fVar5) + fVar14 * fVar17 + local_138);
    }
  }
  param_2[2] = local_130;
  return param_2;
}



// FUNCTION 142ca1c50 FUN_142ca1c50 body=101 status=ok
// SIG undefined FUN_142ca1c50(void)

longlong FUN_142ca1c50(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar1 == 0) {
    iVar2 = 0;
    if (0 < (int)param_1[1]) {
      do {
        lVar1 = FWeakObjectPtr::Get(*param_1 + (longlong)iVar2 * 8);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1300) == param_1[3])) {
          return lVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142ca1cc0 FUN_142ca1cc0 body=33 status=ok
// SIG undefined FUN_142ca1cc0(void)

undefined8 FUN_142ca1cc0(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Set Ragdoll Object Hold Transform Override");
  return param_2;
}



// FUNCTION 142ca1cf0 FUN_142ca1cf0 body=408 status=ok
// SIG undefined FUN_142ca1cf0(void)

undefined8 FUN_142ca1cf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  iVar3 = *(int *)(param_1 + 0x180);
  lVar10 = 0;
  plVar2 = (longlong *)*plVar1;
  for (plVar8 = plVar2; plVar8 != plVar2 + iVar3; plVar8 = plVar8 + 1) {
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      lVar7 = lVar10;
      if (param_2 != 0) {
        lVar4 = UAnimNotifyState::GetPrivateStaticClass();
        lVar5 = param_2;
        do {
          lVar7 = param_2;
          if (lVar5 == lVar4) break;
          lVar5 = *(longlong *)(lVar5 + 0x30);
          lVar7 = lVar10;
        } while (lVar5 != 0);
      }
      for (lVar9 = *(longlong *)(lVar9 + 0x10); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar7) {
          iVar3 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
          goto LAB_142ca1d7c;
        }
      }
    }
  }
  iVar3 = -1;
LAB_142ca1d7c:
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x180))) {
    return *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8);
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 != 3) {
    return 0;
  }
  lVar9 = lVar10;
  if (param_2 != 0) {
    lVar5 = UAnimNotifyState::GetPrivateStaticClass();
    lVar7 = param_2;
    do {
      lVar9 = param_2;
      if (lVar7 == lVar5) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar9 = lVar10;
    } while (lVar7 != 0);
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_1417985e0(lVar9,param_1,0,0,0,0,0,0,0);
  iVar3 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar3 + 1;
  if (*(int *)(param_1 + 0x184) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar6;
  return uVar6;
}



// FUNCTION 142ca1e90 FUN_142ca1e90 body=221 status=ok
// SIG undefined FUN_142ca1e90(void)

void FUN_142ca1e90(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142ca1f2d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142ca1f2d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142ca1f17;
  }
  else {
LAB_142ca1f17:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142ca1f2d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_142274230(lVar5,param_2,param_3);
  return;
}



// FUNCTION 142ca1f70 FUN_142ca1f70 body=264 status=ok
// SIG undefined FUN_142ca1f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ca1f70(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  uVar6 = uRam00000001468b5b78;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar6;
  uVar8 = uRam00000001468b5b8c;
  uVar7 = uRam00000001468b5b88;
  uVar5 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
  *(undefined4 *)(param_2 + 3) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
  uVar9 = uRam00000001468b5b9c;
  uVar8 = uRam00000001468b5b98;
  uVar7 = uRam00000001468b5b94;
  uVar5 = _DAT_1468b5b90;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
  *(undefined4 *)(param_2 + 5) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
  lVar10 = FUN_142c9fbb0(uVar5,param_3);
  if (lVar10 != 0) {
    local_58 = 0;
    puVar11 = (undefined8 *)FUN_142291830(lVar10,local_48,0,0x7f7fffff);
    uVar6 = puVar11[1];
    *param_2 = *puVar11;
    param_2[1] = uVar6;
    fVar2 = *(float *)(puVar11 + 2);
    fVar3 = *(float *)((longlong)puVar11 + 0x14);
    fVar4 = *(float *)(puVar11 + 3);
    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x1c);
    *(float *)(param_2 + 2) = fVar2;
    *(float *)((longlong)param_2 + 0x14) = fVar3;
    *(float *)(param_2 + 3) = fVar4;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
    uVar6 = puVar11[5];
    param_2[4] = puVar11[4];
    param_2[5] = uVar6;
    if (param_3 == 0) {
      fVar12 = 1.0;
    }
    else {
      fVar12 = ABS(*(float *)(param_3 + 0x234));
      if (ABS(*(float *)(param_3 + 0x234)) <= ABS(*(float *)(param_3 + 0x230))) {
        fVar12 = ABS(*(float *)(param_3 + 0x230));
      }
      if (fVar12 <= ABS(*(float *)(param_3 + 0x238))) {
        fVar12 = ABS(*(float *)(param_3 + 0x238));
      }
    }
    auVar1._4_4_ = fVar3 * fVar12;
    auVar1._0_4_ = fVar2 * fVar12;
    auVar1._8_4_ = fVar4 * fVar12;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 2) = auVar1;
  }
  return param_2;
}



// FUNCTION 142ca20b0 FUN_142ca20b0 body=227 status=ok
// SIG undefined FUN_142ca20b0(void)

bool FUN_142ca20b0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_142dfdf30();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
      *param_3 = uVar3;
      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x410))(param_2,local_18);
      lVar2 = FUN_142de9380(*puVar4,puVar4[1],uVar3);
      *param_4 = lVar2;
      if (lVar2 == 0) {
        uVar3 = *param_3;
        puVar4 = (undefined8 *)FUN_142cc1cb0(param_2,local_18);
        lVar2 = FUN_142de9380(*puVar4,puVar4[1],uVar3);
        *param_4 = lVar2;
      }
      *param_5 = param_2;
    }
  }
  return *param_4 != 0;
}



// FUNCTION 142ca21a0 FUN_142ca21a0 body=150 status=ok
// SIG undefined FUN_142ca21a0(void)

undefined8
FUN_142ca21a0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_18,param_2);
  if ((local_18 != 0) || (local_10 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1);
    *param_3 = uVar1;
    lVar2 = FUN_142de9380(local_18,local_10,uVar1);
    *param_4 = lVar2;
    *param_5 = param_2;
    if (*param_4 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ca2240 FUN_142ca2240 body=87 status=ok
// SIG undefined FUN_142ca2240(void)

undefined1 FUN_142ca2240(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  
  if (param_1 != 0) {
    local_res8 = FUN_142df9720();
    lVar1 = FUN_142c8a130(param_1,&local_res8);
    if (lVar1 != 0) {
      uVar2 = FAnimNotifyEvent::GetTriggerTime(lVar1);
      *param_2 = uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ca22a0 FUN_142ca22a0 body=633 status=ok
// SIG undefined FUN_142ca22a0(void)

longlong FUN_142ca22a0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  if (param_2 == 0) {
    return param_1;
  }
  lVar6 = *(longlong *)(param_2 + 0x80);
  lVar7 = (longlong)*(int *)(param_2 + 0x88) * 0xa8 + lVar6;
  if (lVar6 != lVar7) {
    lVar6 = lVar6 + 0x70;
    do {
      lVar5 = *(longlong *)(lVar6 + -0x20);
      if (lVar5 == 0) {
LAB_142ca235f:
        lVar5 = 0;
      }
      else {
        lVar4 = FUN_142df9b40();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_142ca235f;
      }
      if (lVar5 != 0) {
        iVar1 = *(int *)(param_1 + 0x588);
        iVar3 = iVar1 + 1;
        *(int *)(param_1 + 0x588) = iVar3;
        if (*(int *)(param_1 + 0x58c) < iVar3) {
          FUN_142caa150(param_1);
        }
        lVar4 = *(longlong *)(param_1 + 0x580);
        if (*(longlong *)(param_1 + 0x580) == 0) {
          lVar4 = param_1;
        }
        lVar4 = (longlong)iVar1 * 0xb0 + lVar4;
        FAnimNotifyEvent::FAnimNotifyEvent(lVar4);
        *(longlong *)(lVar4 + 0xa8) = lVar5;
      }
      lVar5 = lVar6 + 0x38;
      lVar6 = lVar6 + 0xa8;
    } while (lVar5 != lVar7);
  }
  return param_1;
}



// FUNCTION 142ca2530 FUN_142ca2530 body=164 status=ok
// SIG undefined FUN_142ca2530(void)

void FUN_142ca2530(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  plVar5 = *(longlong **)(param_1 + 0x178);
  uVar6 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x180) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      plVar2 = (longlong *)*plVar5;
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2), cVar3 != '\0')) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar2;
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 142ca25e0 FUN_142ca25e0 body=998 status=ok
// SIG undefined FUN_142ca25e0(void)

undefined2 ** FUN_142ca25e0(float *param_1,undefined2 **param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined2 **ppuVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 local_res8;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  lVar11 = 0;
  *param_2 = (undefined2 *)0x0;
  param_2[1] = (undefined2 *)0x0;
  if (*(longlong *)(param_1 + 8) == 0) {
    cVar3 = FUN_142deebe0(param_1 + 2);
    if (cVar3 != '\0') {
      FString::PrintfImpl(&local_38,&DAT_145841704,(double)*param_1);
      goto LAB_142ca2695;
    }
    ppuVar4 = (undefined2 **)FUN_142de98c0(param_1 + 2,&local_28);
    puVar10 = local_28;
    if (param_2 != ppuVar4) {
      if (*param_2 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_2 = *ppuVar4;
      *ppuVar4 = (undefined2 *)0x0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppuVar4 + 1);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppuVar4 + 0xc);
      ppuVar4[1] = (undefined2 *)0x0;
      puVar10 = local_28;
    }
LAB_142ca26c4:
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    FName::ToString(&local_res8,&local_38);
LAB_142ca2695:
    puVar10 = local_38;
    if (param_2 == &local_38) goto LAB_142ca26c4;
    if (*param_2 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
  }
  plVar1 = *(longlong **)(param_1 + 10);
  puVar10 = &DAT_143f3eda8;
  if (plVar1 != (longlong *)0x0) {
    lVar5 = plVar1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar5 = plVar1[0x1f];
      if (lVar5 == 0) goto LAB_142ca293f;
    }
    cVar3 = *(char *)(lVar5 + 0x28);
    if (cVar3 == '\0') {
      lVar5 = lVar11;
      if (*(longlong *)(param_1 + 10) != 0) {
        lVar6 = UAnimNotifyState::GetPrivateStaticClass();
        for (lVar2 = *(longlong *)(param_1 + 10);
            (lVar5 = lVar11, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 10), lVar2 != lVar6));
            lVar2 = *(longlong *)(lVar2 + 0x30)) {
        }
      }
      local_res8 = *(undefined8 *)(lVar5 + 0x18);
      FName::ToString(&local_res8,&local_38);
      local_28 = local_38;
      if (param_2 != &local_38) {
        if (*param_2 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *param_2 = local_38;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
        goto LAB_142ca293f;
      }
    }
    else {
      if (cVar3 == '\x01') {
        lVar5 = lVar11;
        if (*(longlong *)(param_1 + 10) != 0) {
          lVar6 = UAnimNotifyState::GetPrivateStaticClass();
          for (lVar2 = *(longlong *)(param_1 + 10);
              (lVar5 = lVar11, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 10), lVar2 != lVar6));
              lVar2 = *(longlong *)(lVar2 + 0x30)) {
          }
        }
        local_res8 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res8,&local_28);
        puVar8 = &DAT_143f3eda8;
        if (local_20 != 0) {
          puVar8 = local_28;
        }
        if (*(int *)(param_2 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
          pwVar7 = L"(%s + %s)";
        }
        else {
          puVar9 = *param_2;
          pwVar7 = L"(%s + %s)";
        }
      }
      else if (cVar3 == '\x02') {
        lVar5 = lVar11;
        if (*(longlong *)(param_1 + 10) != 0) {
          lVar6 = UAnimNotifyState::GetPrivateStaticClass();
          for (lVar2 = *(longlong *)(param_1 + 10);
              (lVar5 = lVar11, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 10), lVar2 != lVar6));
              lVar2 = *(longlong *)(lVar2 + 0x30)) {
          }
        }
        local_res8 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res8,&local_28);
        puVar8 = &DAT_143f3eda8;
        if (local_20 != 0) {
          puVar8 = local_28;
        }
        if (*(int *)(param_2 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
          pwVar7 = L"(%s * %s)";
        }
        else {
          puVar9 = *param_2;
          pwVar7 = L"(%s * %s)";
        }
      }
      else {
        if (cVar3 != '\x03') goto LAB_142ca293f;
        if (*(int *)(param_2 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *param_2;
        }
        lVar5 = lVar11;
        if (*(longlong *)(param_1 + 10) != 0) {
          lVar6 = UAnimNotifyState::GetPrivateStaticClass();
          for (lVar2 = *(longlong *)(param_1 + 10);
              (lVar5 = lVar11, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 10), lVar2 != lVar6));
              lVar2 = *(longlong *)(lVar2 + 0x30)) {
          }
        }
        local_res8 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res8,&local_28);
        pwVar7 = L"(%s - %s)";
        puVar9 = &DAT_143f3eda8;
        if (local_20 != 0) {
          puVar9 = local_28;
        }
      }
      FString::PrintfImpl(&local_38,pwVar7,puVar9,puVar8);
      if (param_2 == &local_38) {
        if (local_38 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_2 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *param_2 = local_38;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
        local_30 = 0;
        local_38 = (undefined2 *)0x0;
      }
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_142ca293f:
  if (param_1[0xc] != 1.0) {
    if (*(int *)(param_2 + 1) != 0) {
      puVar10 = *param_2;
    }
    FString::PrintfImpl(&local_38,L"(%g * %s)",(double)param_1[0xc],puVar10);
    if (param_2 == &local_38) {
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_38;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
    }
  }
  return param_2;
}



// FUNCTION 142ca29d0 FUN_142ca29d0 body=1116 status=ok
// SIG undefined FUN_142ca29d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ca29d0(longlong param_1,undefined8 *param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  ulonglong local_88;
  ulonglong uVar15;
  
  uVar4 = uRam00000001468b5b78;
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 8) == 0) || (iVar5 = *(int *)(param_1 + 0x1d8), iVar5 < 2)) {
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar4;
    uVar4 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar4;
    uVar4 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar4;
  }
  else {
    uVar10 = 0;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    uVar15 = uVar10;
    if (0.0 < param_3) {
      uVar1 = iVar5 - 1;
      pfVar13 = *(float **)(param_1 + 0x1d0);
      if (*(float **)(param_1 + 0x1d0) == (float *)0x0) {
        pfVar13 = (float *)(param_1 + 0x30);
      }
      uVar15 = (ulonglong)uVar1;
      if (param_3 < pfVar13[(longlong)*(int *)(param_1 + 0x1d8) * 0xd + -0xd]) {
        uVar11 = uVar10;
        uVar15 = 0xffffffff;
        if (0 < (int)uVar1) {
          do {
            if ((*pfVar13 <= param_3) && (uVar15 = uVar11, param_3 < pfVar13[0xd])) break;
            uVar10 = uVar10 + 1;
            pfVar13 = pfVar13 + 0xd;
            uVar11 = (ulonglong)((int)uVar11 + 1);
            uVar15 = 0xffffffff;
          } while ((longlong)uVar10 < (longlong)(int)uVar1);
        }
      }
    }
    iVar14 = (int)uVar15;
    lVar16 = (longlong)iVar14 * 0x34;
    lVar12 = *(longlong *)(param_1 + 0x1d0);
    if (iVar14 == iVar5 + -1) {
      if (lVar12 == 0) {
        lVar12 = param_1 + 0x30;
      }
      FRotator::Quaternion(lVar16 + 0x10 + lVar12,&local_118);
      *param_2 = local_118;
      param_2[1] = uStack_110;
      auVar6._4_4_ = *(undefined4 *)(lVar12 + 8 + lVar16);
      auVar6._0_4_ = *(undefined4 *)(lVar12 + 4 + lVar16);
      auVar6._8_4_ = *(undefined4 *)(lVar12 + 0xc + lVar16);
      auVar6._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 2) = auVar6;
      auVar7._4_4_ = DAT_1464aa788._4_4_;
      auVar7._0_4_ = (undefined4)DAT_1464aa788;
      auVar7._8_4_ = DAT_1464aa790;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar7;
    }
    else {
      if (lVar12 == 0) {
        lVar12 = param_1 + 0x30;
      }
      fVar21 = (param_3 - *(float *)(lVar12 + lVar16)) /
               (*(float *)(((longlong)iVar14 + 1) * 0x34 + lVar12) - *(float *)(lVar12 + lVar16));
      FUN_142291ab0(*(longlong *)(param_1 + 8),&local_b8);
      lVar12 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar12 = param_1 + 0x30;
      }
      local_108 = *(undefined8 *)(lVar12 + 0x10 + lVar16);
      local_100 = *(float *)(lVar12 + 0x18 + lVar16);
      fVar2 = *(float *)(lVar12 + 0x28 + lVar16);
      fVar3 = *(float *)(lVar12 + 0x2c + lVar16);
      fVar22 = *(float *)(lVar12 + 0x30 + lVar16);
      local_118 = local_b8;
      uStack_110 = uStack_b0;
      FQuat::Rotator(&local_118,&local_f8);
      local_f4 = fVar21 * fVar3 + local_108._4_4_ + local_f4;
      local_f0 = fVar21 * fVar22 + local_100 + local_f0;
      local_f8 = (float)local_108 + fVar21 * fVar2 + local_f8;
      fVar2 = (float)DAT_146b2ff40;
      fVar3 = DAT_146b2ff40._4_4_;
      fVar22 = DAT_146b2ff40._8_4_;
      auVar17._4_4_ = local_f4;
      auVar17._0_4_ = local_f8;
      auVar17._8_4_ = local_f0;
      auVar17._12_4_ = 0;
      auVar17 = divps(auVar17,_DAT_146b2ff40);
      local_f8 = local_f8 - (float)(int)auVar17._0_4_ * fVar2;
      local_f4 = local_f4 - (float)(int)auVar17._4_4_ * fVar3;
      local_f0 = local_f0 - (float)(int)auVar17._8_4_ * fVar22;
      fVar18 = (float)(((uint)(local_f8 + fVar2) ^ (uint)local_f8) & -(uint)(0.0 <= local_f8) ^
                      (uint)(local_f8 + fVar2));
      fVar19 = (float)(((uint)(local_f4 + fVar3) ^ (uint)local_f4) & -(uint)(0.0 <= local_f4) ^
                      (uint)(local_f4 + fVar3));
      fVar20 = (float)(((uint)(local_f0 + fVar22) ^ (uint)local_f0) & -(uint)(0.0 <= local_f0) ^
                      (uint)(local_f0 + fVar22));
      local_c8 = ((uint)(fVar18 - fVar2) ^ (uint)fVar18) & -(uint)(_DAT_146b2ff30 < fVar18) ^
                 (uint)fVar18;
      local_c4 = ((uint)(fVar19 - fVar3) ^ (uint)fVar19) & -(uint)(fRam0000000146b2ff34 < fVar19) ^
                 (uint)fVar19;
      local_c0 = ((uint)(fVar20 - fVar22) ^ (uint)fVar20) & -(uint)(fRam0000000146b2ff38 < fVar20) ^
                 (uint)fVar20;
      local_e4 = *(float *)(param_1 + 0x18);
      local_e0 = local_a8._8_4_ * local_e4;
      lVar12 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar12 = param_1 + 0x30;
      }
      local_e8 = local_a8._0_4_ * local_e4;
      local_e4 = local_a8._4_4_ * local_e4;
      uVar4 = *(undefined8 *)(lVar12 + 4 + lVar16);
      fVar2 = *(float *)(lVar12 + 0x1c + lVar16);
      uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(lVar12 + 0xc + lVar16));
      fVar3 = *(float *)(lVar12 + 0x20 + lVar16);
      fVar22 = *(float *)(lVar12 + 0x24 + lVar16);
      FRotator::RotateVector(&local_108,&local_d8,&local_e8);
      fVar22 = fVar21 * fVar22 + (float)uStack_110;
      local_118 = uVar4;
      FRotator::Quaternion(&local_c8,&local_118);
      *param_2 = local_118;
      param_2[1] = uStack_110;
      auVar8._4_4_ = fVar21 * fVar3 + (float)((ulonglong)uVar4 >> 0x20) + local_d4;
      auVar8._0_4_ = fVar21 * fVar2 + (float)uVar4 + local_d8;
      auVar8._8_4_ = fVar22 + local_d0;
      auVar8._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 2) = auVar8;
      auVar9._4_4_ = DAT_1464aa788._4_4_;
      auVar9._0_4_ = (undefined4)DAT_1464aa788;
      auVar9._8_4_ = DAT_1464aa790;
      auVar9._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar9;
    }
  }
  return param_2;
}



// FUNCTION 142ca2e30 FUN_142ca2e30 body=199 status=ok
// SIG undefined FUN_142ca2e30(void)

undefined8 * FUN_142ca2e30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  if (*(char *)(param_1 + 0x13e0) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x8f0);
    *param_2 = 0;
    if (lVar2 == 0) {
      param_2[1] = 0;
      return param_2;
    }
    iVar1 = *(int *)(lVar2 + 0x28);
    _Src = *(void **)(lVar2 + 0x20);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x1380);
    _Src = *(void **)(param_1 + 0x1378);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 2);
  return param_2;
}



// FUNCTION 142ca2f00 FUN_142ca2f00 body=136 status=ok
// SIG undefined FUN_142ca2f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca2f00(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_142caa8e0(local_38,param_1,&local_58);
  uVar1 = FUN_142cc1650(local_38);
  FUN_142caaed0(local_48,param_1,uVar1);
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_142cc4350(local_48,param_3);
  return;
}



// FUNCTION 142ca2f90 FUN_142ca2f90 body=95 status=ok
// SIG undefined FUN_142ca2f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142ca2f90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_2 + 8) = 0xff;
  FUN_142caaab0(param_1,local_38);
  if (local_20 != '\0') {
    FUN_142ccf820(param_2,local_38,param_3);
  }
  return param_2;
}



// FUNCTION 142ca2ff0 FUN_142ca2ff0 body=81 status=ok
// SIG undefined FUN_142ca2ff0(void)

undefined4 * FUN_142ca2ff0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  uVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  uVar2 = FUN_142dfe080(param_1,uVar1,param_3);
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 142ca3050 FUN_142ca3050 body=272 status=ok
// SIG undefined FUN_142ca3050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ca3050(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x148);
  lVar3 = (longlong)*(int *)(param_1 + 0x150) * 0x38 + lVar2;
  if (lVar2 != lVar3) {
    do {
      uVar1 = FUN_142caac20(lVar2,local_48,param_3);
      FUN_142cb5500(param_2,uVar1);
      switch(local_40) {
      case '\0':
        if (local_40 == '\0') {
          local_40 = -1;
        }
        break;
      case '\x01':
        if (local_40 == '\x01') {
          local_40 = -1;
        }
        break;
      case '\x02':
        if (local_40 == '\x02') {
          local_40 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_40 == '\x03') {
          local_40 = -1;
        }
        break;
      case '\x05':
        if (local_40 == '\x03') {
          local_40 = -1;
        }
      }
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar3);
  }
  return param_2;
}



// FUNCTION 142ca3180 FUN_142ca3180 body=223 status=ok
// SIG undefined FUN_142ca3180(void)

float * FUN_142ca3180(longlong param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_142dfdf30();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        iVar2 = (**(code **)(*param_3 + 0x400))(param_3);
        *param_2 = (float)iVar2;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      if (*(char *)(param_1 + 0x28) == '\x01') {
        iVar2 = (**(code **)(*param_3 + 0x408))(param_3);
        *param_2 = (float)iVar2;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  return param_2;
}



// FUNCTION 142ca3260 FUN_142ca3260 body=279 status=ok
// SIG undefined FUN_142ca3260(void)

float * FUN_142ca3260(longlong param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = UMediaSoundComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        *param_2 = SQRT(*(float *)(param_3 + 0x18c) * *(float *)(param_3 + 0x18c) +
                        *(float *)(param_3 + 400) * *(float *)(param_3 + 400) +
                        *(float *)(param_3 + 0x194) * *(float *)(param_3 + 0x194));
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      if (*(char *)(param_1 + 0x28) == '\x01') {
        *param_2 = SQRT(*(float *)(param_3 + 0x18c) * *(float *)(param_3 + 0x18c) +
                        *(float *)(param_3 + 400) * *(float *)(param_3 + 400));
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  return param_2;
}



// FUNCTION 142ca3380 FUN_142ca3380 body=354 status=ok
// SIG undefined FUN_142ca3380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142ca3380(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60;
  undefined1 local_58 [8];
  undefined1 local_50;
  undefined1 local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x98);
  local_50 = 0xff;
  lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0xa0) * 0x48;
  do {
    if (lVar6 == lVar1) {
LAB_142ca343c:
      cVar3 = FUN_142cc7750(local_58);
      if (cVar3 == '\0') {
        uVar4 = FUN_142caac20(param_1 + 0x28,local_68,param_3);
        FUN_140a2f480(local_58,uVar4);
      }
      local_60 = 0xff;
      FUN_140a2f480(local_68,local_58);
      uVar4 = FUN_142caac20(param_1 + 0x60,local_4c,param_3);
      FUN_142cb5500(local_68,uVar4);
      *(undefined1 *)(param_2 + 8) = 0xff;
      FUN_140a2f480(param_2,local_68);
      return param_2;
    }
    plVar5 = *(longlong **)(lVar6 + 0x38);
    plVar2 = plVar5 + *(int *)(lVar6 + 0x40);
    while( true ) {
      if (plVar5 == plVar2) {
        uVar4 = FUN_142caac20(lVar6,local_68,param_3);
        FUN_140a2f480(local_58,uVar4);
        goto LAB_142ca343c;
      }
      if ((*plVar5 != 0) && (cVar3 = FUN_142c48f60(*plVar5,param_3,0), cVar3 == '\0')) break;
      plVar5 = plVar5 + 1;
    }
    lVar6 = lVar6 + 0x48;
  } while( true );
}



// FUNCTION 142ca34f0 FUN_142ca34f0 body=363 status=ok
// SIG undefined FUN_142ca34f0(void)

undefined8 FUN_142ca34f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (param_3 == (longlong *)0x0) {
LAB_142ca354e:
    if (param_3 != (longlong *)0x0) {
      lVar3 = FUN_1428dfc70();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = UThrobber::GetPrivateStaticClass();
        plVar5 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar4);
        goto LAB_142ca35a6;
      }
    }
  }
  else {
    lVar3 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar5 = param_3;
    if (!bVar2) goto LAB_142ca354e;
LAB_142ca35a6:
    if ((plVar5 != (longlong *)0x0) &&
       (plVar5 = (longlong *)(**(code **)(plVar5[0x2f] + 0x30))(), plVar5 != (longlong *)0x0)) {
      plVar7 = *(longlong **)(param_1 + 0x28);
      plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x30) * 8;
      for (; plVar7 != plVar8; plVar7 = plVar7 + 8) {
        lVar3 = *plVar7;
        if (lVar3 != 0) {
          plVar6 = (longlong *)*plVar5;
          plVar1 = plVar6 + (int)plVar5[1];
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar3) goto LAB_142ca3655;
          }
          plVar6 = (longlong *)plVar5[2];
          plVar1 = plVar6 + (int)plVar5[3];
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar3) goto LAB_142ca3655;
          }
        }
      }
    }
  }
  plVar7 = (longlong *)(param_1 + 0x38);
LAB_142ca3632:
  FUN_142caac20(plVar7,param_2,param_3);
  return param_2;
LAB_142ca3655:
  plVar7 = plVar7 + 1;
  goto LAB_142ca3632;
}



// FUNCTION 142ca3660 FUN_142ca3660 body=64 status=ok
// SIG undefined FUN_142ca3660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca3660(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = FUN_142ccdf70(local_28,param_1,param_2);
  FUN_142cc4350(uVar1,0);
  return;
}



// FUNCTION 142ca36a0 FUN_142ca36a0 body=153 status=ok
// SIG undefined FUN_142ca36a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca36a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uStack_40 = 0;
  local_48._0_4_ = (undefined4)param_2;
  local_48._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = param_2;
  FUN_142caa8e0(local_38,param_1,&local_58);
  uVar1 = FUN_142cc1650(local_38);
  FUN_142caaed0(&local_48,param_1,uVar1);
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_142cc4350(&local_48,param_3);
  return;
}



// FUNCTION 142ca3740 FUN_142ca3740 body=49 status=ok
// SIG undefined FUN_142ca3740(void)

bool FUN_142ca3740(undefined4 param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_3 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f800000;
  }
  fVar1 = (float)FUN_142ca36a0(param_1,param_2,uVar2);
  return 1e-08 < ABS(fVar1);
}



// FUNCTION 142ca3780 FUN_142ca3780 body=26 status=ok
// SIG undefined FUN_142ca3780(void)

int FUN_142ca3780(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_142ca36a0();
  return (int)fVar1;
}



// FUNCTION 142ca37a0 FUN_142ca37a0 body=44 status=ok
// SIG undefined FUN_142ca37a0(void)

bool FUN_142ca37a0(longlong param_1,undefined8 param_2)

{
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  FUN_142c81650(param_1 + 8,local_res8,param_2);
  return local_res8[0] != 0;
}



// FUNCTION 142ca37d0 FUN_142ca37d0 body=44 status=ok
// SIG undefined FUN_142ca37d0(void)

bool FUN_142ca37d0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = FUN_142df9b40();
  lVar1 = FUN_142c8a400(param_1,local_res10);
  return lVar1 != 0;
}



// FUNCTION 142ca3800 FUN_142ca3800 body=254 status=ok
// SIG undefined FUN_142ca3800(void)

int FUN_142ca3800(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar9 = *(int *)(param_1 + 0xc08);
  lVar11 = (longlong)iVar9;
  *(int *)(param_1 + 0xc08) = iVar9 + 1;
  if (*(int *)(param_1 + 0xc0c) < iVar9 + 1) {
    FUN_142caa010(param_1,iVar9);
  }
  lVar10 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar10 = param_1;
  }
  *(undefined4 *)(lVar10 + lVar11 * 0x18) = *param_2;
  *(undefined8 *)(lVar10 + 8 + lVar11 * 0x18) = *(undefined8 *)(param_2 + 2);
  lVar4 = *(longlong *)(param_2 + 4);
  *(longlong *)(lVar10 + 0x10 + lVar11 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  iVar9 = *(int *)(param_1 + 0xc08) + -1;
  lVar11 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar11 = param_1;
  }
  while( true ) {
    if (iVar9 < 1) {
      return iVar9;
    }
    iVar8 = (iVar9 + -1) / 2;
    puVar1 = (uint *)(lVar11 + (longlong)iVar8 * 0x18);
    puVar2 = (uint *)(lVar11 + (longlong)iVar9 * 0x18);
    if (*puVar1 <= *(uint *)(lVar11 + (longlong)iVar9 * 0x18)) break;
    iVar9 = iVar8;
    if (puVar2 != puVar1) {
      uVar5 = *(undefined8 *)(puVar1 + 2);
      uVar6 = *(undefined8 *)puVar2;
      uVar7 = *(undefined8 *)(puVar2 + 2);
      uVar3 = *(undefined8 *)(puVar2 + 4);
      *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar2 + 2) = uVar5;
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 2) = uVar7;
      *(undefined8 *)(puVar1 + 4) = uVar3;
    }
  }
  return iVar9;
}



// FUNCTION 142ca3900 FUN_142ca3900 body=291 status=ok
// SIG undefined FUN_142ca3900(void)

void FUN_142ca3900(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  
  iVar8 = DAT_146b30d20;
  if (DAT_146b30114 != '\0') {
    puVar13 = DAT_146b30d18;
    if (DAT_146b30d18 == (undefined *)0x0) {
      puVar13 = &DAT_146b30118;
    }
    iVar9 = (DAT_146b30d20 + -2) / 2;
    if (-1 < iVar9) {
      iVar11 = iVar9 * 2 + 1;
      iVar4 = iVar11;
      iVar12 = iVar9;
joined_r0x000142ca3965:
      do {
        if (iVar11 < iVar8) {
          iVar11 = iVar9 * 2;
          iVar10 = iVar11 + 1;
          if (iVar11 + 2 < iVar8) {
            if (*(uint *)(puVar13 + (longlong)iVar10 * 0x18) <
                *(uint *)(puVar13 + ((longlong)iVar11 + 2) * 0x18)) {
              iVar10 = iVar11;
            }
            iVar10 = iVar10 + 1;
          }
          puVar1 = (uint *)(puVar13 + (longlong)iVar10 * 0x18);
          puVar2 = (uint *)(puVar13 + (longlong)iVar9 * 0x18);
          if (*puVar1 < *(uint *)(puVar13 + (longlong)iVar9 * 0x18)) {
            if (puVar2 != puVar1) {
              uVar5 = *(undefined8 *)(puVar1 + 2);
              uVar6 = *(undefined8 *)puVar2;
              uVar7 = *(undefined8 *)(puVar2 + 2);
              uVar3 = *(undefined8 *)(puVar2 + 4);
              *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
              *(undefined8 *)(puVar2 + 2) = uVar5;
              *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
              *(undefined8 *)puVar1 = uVar6;
              *(undefined8 *)(puVar1 + 2) = uVar7;
              *(undefined8 *)(puVar1 + 4) = uVar3;
            }
            iVar11 = iVar10 * 2 + 1;
            iVar9 = iVar10;
            goto joined_r0x000142ca3965;
          }
        }
        iVar11 = iVar4 + -2;
        iVar9 = iVar12 + -1;
        iVar4 = iVar11;
        iVar12 = iVar9;
      } while (-1 < iVar9);
    }
    DAT_146b30114 = '\0';
  }
  return;
}



// FUNCTION 142ca3a30 FUN_142ca3a30 body=587 status=ok
// SIG undefined FUN_142ca3a30(void)

void FUN_142ca3a30(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res10;
  longlong *local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_1 + 0xf40);
    plVar1 = plVar8 + *(int *)(param_1 + 0xf48);
    if (plVar8 != plVar1) {
      while (*plVar8 != param_2) {
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar1) {
          return;
        }
      }
      local_res10 = param_2;
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (param_1 + 0xf40,&local_res10);
      uVar6 = 0;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      if (0 < *(int *)(param_2 + 0x50) + 1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_38);
        uVar6 = local_30 & 0xffffffff;
      }
      local_res10 = 0;
      if (*(longlong *)(param_2 + 0x40) != 0) {
        iVar3 = (int)uVar6 + 1;
        local_30 = CONCAT44(local_30._4_4_,iVar3);
        if (local_30._4_4_ < iVar3) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar6);
        }
        local_38[(int)uVar6] = *(longlong *)(param_2 + 0x40);
        uVar6 = local_30 & 0xffffffff;
      }
      plVar8 = *(longlong **)(param_2 + 0x48);
      plVar1 = plVar8 + *(int *)(param_2 + 0x50);
      if (plVar8 != plVar1) {
        local_res10 = 0;
        plVar9 = local_38;
        do {
          if (*plVar8 != 0) {
            iVar3 = (int)uVar6;
            for (plVar4 = plVar9; plVar4 != plVar9 + iVar3; plVar4 = plVar4 + 1) {
              if (*plVar4 == *plVar8) {
                if ((int)((longlong)plVar4 - (longlong)plVar9 >> 3) != -1) goto LAB_142ca3ba4;
                break;
              }
            }
            local_30 = CONCAT44(local_30._4_4_,iVar3 + 1);
            if (local_30._4_4_ < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar6);
              plVar9 = local_38;
            }
            plVar9[iVar3] = *plVar8;
            uVar6 = local_30 & 0xffffffff;
            plVar9 = local_38;
          }
LAB_142ca3ba4:
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
      }
      plVar8 = *(longlong **)(param_1 + 0xbf0);
      uVar7 = 0;
      plVar1 = plVar8 + *(int *)(param_1 + 0xbf8);
      for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
        if (((*plVar8 != 0) && (lVar5 = FWeakObjectPtr::Get(*plVar8 + 0x140), lVar5 != 0)) &&
           (cVar2 = FUN_1426bc6e0(lVar5,&local_38), cVar2 != '\0')) {
          uVar7 = 1;
          break;
        }
      }
      if (((param_3 == '\0') && (*(longlong *)(param_1 + 0xf38) != 0)) &&
         ((iVar3 = FUN_14233f450(param_1), iVar3 == 3 && ((*(byte *)(param_1 + 200) & 0x20) != 0))))
      {
        FUN_142d57d90(*(undefined8 *)(param_1 + 0xf38),param_1 + 0xf50,param_1 + 0xf40);
      }
      FUN_142c90ea0(param_1,uVar7);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142ca3c80 FUN_142ca3c80 body=769 status=ok
// SIG undefined FUN_142ca3c80(void)

void FUN_142ca3c80(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *local_50;
  undefined8 local_48;
  
  plVar17 = (longlong *)*param_2;
  uVar13 = 0;
  local_50 = (longlong *)0x0;
  bVar4 = false;
  local_48 = 0;
  plVar2 = plVar17 + (int)param_2[1];
  if (plVar17 != plVar2) {
    do {
      uVar12 = 0;
      lVar8 = *plVar17;
      if (lVar8 != 0) {
        plVar1 = (longlong *)(param_1 + 0xf40);
        plVar9 = (longlong *)*plVar1;
        uVar11 = (ulonglong)*(int *)(param_1 + 0xf48);
        plVar16 = plVar9 + uVar11;
        if (plVar9 != plVar16) {
LAB_142ca3d00:
          if (*plVar9 != lVar8) goto code_r0x000142ca3d05;
          bVar4 = true;
          uVar15 = uVar12;
          if (0 < *(int *)(param_1 + 0xf48)) {
            do {
              iVar7 = (int)uVar12;
              lVar3 = *plVar1;
              uVar10 = (uint)uVar11;
              if (*(longlong *)(uVar15 + lVar3) == lVar8) {
                iVar6 = (uVar10 - iVar7) + -1;
                if (0 < iVar6) {
                  iVar6 = 1;
                }
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar3 + (longlong)iVar7 * 8),
                             (void *)(lVar3 + (longlong)(int)(uVar10 - iVar6) * 8),
                             (longlong)iVar6 << 3);
                  uVar10 = *(uint *)(param_1 + 0xf48);
                }
                *(uint *)(param_1 + 0xf48) = uVar10 - 1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
                uVar10 = *(uint *)(param_1 + 0xf48);
                iVar7 = iVar7 + -1;
                uVar15 = uVar15 - 8;
              }
              uVar12 = (ulonglong)(iVar7 + 1U);
              uVar11 = (ulonglong)uVar10;
              uVar15 = uVar15 + 8;
            } while ((int)(iVar7 + 1U) < (int)uVar10);
            uVar13 = local_48 & 0xffffffff;
          }
          if (local_48._4_4_ < *(int *)(lVar8 + 0x50) + 1) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_50);
            uVar13 = local_48 & 0xffffffff;
          }
          if (*(longlong *)(lVar8 + 0x40) != 0) {
            iVar7 = (int)uVar13 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar7);
            if (local_48._4_4_ < iVar7) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,uVar13);
            }
            local_50[(int)uVar13] = *(longlong *)(lVar8 + 0x40);
            uVar13 = local_48 & 0xffffffff;
          }
          plVar16 = *(longlong **)(lVar8 + 0x48);
          plVar1 = plVar16 + *(int *)(lVar8 + 0x50);
          for (; plVar16 != plVar1; plVar16 = plVar16 + 1) {
            if (*plVar16 != 0) {
              iVar7 = (int)uVar13;
              for (plVar9 = local_50; plVar9 != local_50 + iVar7; plVar9 = plVar9 + 1) {
                if (*plVar9 == *plVar16) {
                  if ((int)((longlong)plVar9 - (longlong)local_50 >> 3) != -1) goto LAB_142ca3e7a;
                  break;
                }
              }
              local_48._4_4_ = (int)(local_48 >> 0x20);
              local_48 = CONCAT44(local_48._4_4_,iVar7 + 1);
              if (local_48._4_4_ < iVar7 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,uVar13);
              }
              local_50[iVar7] = *plVar16;
              uVar13 = local_48 & 0xffffffff;
            }
LAB_142ca3e7a:
          }
        }
      }
LAB_142ca3e8c:
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar2);
    if (bVar4) {
      plVar17 = *(longlong **)(param_1 + 0xbf0);
      uVar14 = 0;
      plVar2 = plVar17 + *(int *)(param_1 + 0xbf8);
      for (; plVar17 != plVar2; plVar17 = plVar17 + 1) {
        if (((*plVar17 != 0) && (lVar8 = FWeakObjectPtr::Get(*plVar17 + 0x140), lVar8 != 0)) &&
           (cVar5 = FUN_1426bc6e0(lVar8,&local_50), cVar5 != '\0')) {
          uVar14 = 1;
          break;
        }
      }
      if (((param_3 == '\0') && (*(longlong *)(param_1 + 0xf38) != 0)) &&
         ((iVar7 = FUN_14233f450(param_1), iVar7 == 3 && ((*(byte *)(param_1 + 200) & 0x20) != 0))))
      {
        FUN_142d57d90(*(undefined8 *)(param_1 + 0xf38),param_1 + 0xf50,param_1 + 0xf40);
      }
      FUN_142c90ea0(param_1,uVar14);
    }
    if (local_50 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
code_r0x000142ca3d05:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar16) goto LAB_142ca3e8c;
  goto LAB_142ca3d00;
}



// FUNCTION 142ca3f90 FUN_142ca3f90 body=26 status=ok
// SIG undefined FUN_142ca3f90(void)

void FUN_142ca3f90(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x18) = DAT_1468c21b0;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 142ca3fb0 FUN_142ca3fb0 body=1266 status=ok
// SIG undefined FUN_142ca3fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca3fb0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *_Dst;
  longlong *plVar6;
  longlong *plVar7;
  void **ppvVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  void *pvVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  void *_Src;
  longlong lVar17;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined4 *local_f0;
  int local_e8;
  int local_e4;
  undefined4 *local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  uint local_c0;
  uint local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_40;
  
  if (param_2 != 0) {
    local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
    *param_1 = param_3;
    local_f0 = (undefined4 *)0x0;
    local_e4 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_b8 = param_1;
    local_b0 = param_2;
    local_90 = param_3;
    if (*(int *)(param_3 + 0x40) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo();
    }
    puVar9 = *(undefined8 **)(param_3 + 0x38);
    iVar16 = 0;
    puVar1 = puVar9 + *(int *)(param_3 + 0x40);
    puVar13 = local_f0;
    local_f8 = local_e8;
    iVar14 = local_e8;
    plVar7 = local_b8;
    for (; local_b8 = plVar7, puVar9 != puVar1; puVar9 = puVar9 + 1) {
      local_e0 = (undefined4 *)*puVar9;
      lVar5 = (longlong)iVar14;
      local_e8 = iVar14 + 1;
      if (local_e4 < local_e8) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_f0,iVar14);
        puVar13 = local_f0;
      }
      iVar14 = local_e8;
      _Dst = puVar13 + lVar5 * 8;
      *(undefined8 *)(_Dst + 4) = 0;
      *(undefined8 *)(_Dst + 6) = 0;
      puVar2 = (undefined4 *)FUN_142269aa0(param_2,local_60,&local_e0);
      if (_Dst != puVar2) {
        if (*(longlong *)(puVar2 + 4) == 0) {
          _guard_xfg_dispatch_icall_nop(_Dst,puVar2,0x10);
        }
        if (*(longlong *)(_Dst + 4) != 0) {
          FMemory::Free();
        }
        *(undefined8 *)(_Dst + 4) = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar2 + 4) = 0;
        _Dst[6] = puVar2[6];
        _Dst[7] = puVar2[7];
        *(undefined8 *)(puVar2 + 6) = 0;
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      iVar16 = iVar16 + _Dst[6];
      param_2 = local_b0;
      plVar7 = local_b8;
    }
    plVar10 = plVar7 + 1;
    iVar12 = (int)plVar7[2];
    local_f8 = iVar14;
    local_98 = plVar10;
    if (iVar12 != 0) {
      plVar6 = (longlong *)(*plVar10 + 0x10);
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 4;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    *(undefined4 *)(plVar7 + 2) = 0;
    if (*(int *)((longlong)plVar7 + 0x14) != iVar16) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar10,iVar16);
    }
    local_68 = puVar13 + (longlong)iVar14 * 8;
    local_e0 = puVar13;
    if (puVar13 != local_68) {
      do {
        puVar13 = *(undefined4 **)(local_e0 + 4);
        if (*(undefined4 **)(local_e0 + 4) == (undefined4 *)0x0) {
          puVar13 = local_e0;
        }
        puVar2 = puVar13 + (int)local_e0[6];
        local_a0 = puVar13;
        local_70 = puVar2;
        if (puVar13 != puVar2) {
          do {
            pvVar11 = (void *)0x0;
            iVar16 = (int)plVar10[1];
            *(int *)(plVar10 + 1) = iVar16 + 1;
            local_a0 = puVar13;
            if (*(int *)((longlong)plVar10 + 0xc) < iVar16 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar10,iVar16);
            }
            lVar5 = *plVar10;
            lVar4 = (longlong)iVar16 * 0x20;
            *(undefined8 *)(lVar4 + lVar5) = 0;
            *(undefined4 *)(lVar4 + 8 + lVar5) = 0xffffffff;
            *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
            *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0;
            plVar7 = (longlong *)(local_b8[1] + lVar4);
            local_88 = plVar7;
            lVar5 = FUN_1422698a0(local_b0,*puVar13);
            *plVar7 = lVar5;
            iVar16 = 0;
            *(undefined4 *)(plVar7 + 1) = *puVar13;
            local_c8 = (void *)0x0;
            local_bc = 0;
            local_a8 = *(longlong *)(local_90 + 0x48);
            local_78 = local_a8 + (longlong)*(int *)(local_90 + 0x50) * 0x18;
            pvVar15 = pvVar11;
            _Src = pvVar11;
            if (local_a8 != local_78) {
              do {
                lVar5 = *(longlong *)(local_a8 + 8);
                local_80 = (longlong)*(int *)(local_a8 + 0x10) * 8 + lVar5;
                if (lVar5 != local_80) {
                  do {
                    lVar4 = *(longlong *)(*plVar7 + 0x10);
                    lVar17 = (longlong)*(int *)(*plVar7 + 0x18) * 0x58 + lVar4;
                    for (; lVar4 != lVar17; lVar4 = lVar4 + 0x58) {
                      puVar3 = (undefined2 *)FName::GetComparisonNameEntry(lVar4);
                      if (puVar3 == (undefined2 *)0x0) {
                        local_d0 = 10;
                        local_d8 = puVar3;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
                        FGenericPlatformString::Memcpy(local_d8,L"*INVALID*",0x14);
                      }
                      else {
                        FNameEntry::GetPlainNameString(puVar3,&local_d8);
                      }
                      FName::ToString(lVar5,local_60);
                      puVar3 = &DAT_143f3eda8;
                      if ((int)local_d0 != 0) {
                        puVar3 = local_d8;
                      }
                      iVar16 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3);
                      if (local_d8 != (undefined2 *)0x0) {
                        FMemory::Free();
                      }
                      if (local_60[0] != 0) {
                        FMemory::Free();
                      }
                      if (iVar16 == 0) {
                        iVar16 = (int)pvVar11;
                        local_c0 = iVar16 + 1;
                        if ((int)pvVar15 < (int)local_c0) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                    (&local_c8);
                          pvVar15 = (void *)(ulonglong)local_bc;
                          _Src = local_c8;
                        }
                        pvVar11 = (void *)(ulonglong)local_c0;
                        *(longlong *)((longlong)_Src + (longlong)iVar16 * 8) = lVar4;
                      }
                      plVar7 = local_88;
                    }
                    lVar5 = lVar5 + 8;
                  } while (lVar5 != local_80);
                }
                iVar16 = (int)pvVar11;
                local_a8 = local_a8 + 0x18;
                puVar13 = local_a0;
                puVar2 = local_70;
              } while (local_a8 != local_78);
            }
            ppvVar8 = (void **)(plVar7 + 2);
            if (ppvVar8 != &local_c8) {
              *(int *)(plVar7 + 3) = iVar16;
              if ((iVar16 == 0) && (*(int *)((longlong)plVar7 + 0x1c) == 0)) {
                *(undefined4 *)((longlong)plVar7 + 0x1c) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (ppvVar8,iVar16);
                _guard_xfg_dispatch_icall_nop(*ppvVar8,_Src,(longlong)iVar16 << 3);
              }
            }
            if (_Src != (void *)0x0) {
              FMemory::Free(_Src);
            }
            puVar13 = puVar13 + 1;
            plVar10 = local_98;
            local_a0 = puVar13;
          } while (puVar13 != puVar2);
        }
        local_e0 = local_e0 + 8;
        puVar13 = local_f0;
        iVar14 = local_f8;
      } while (local_e0 != local_68);
    }
    if (iVar14 != 0) {
      plVar7 = (longlong *)(puVar13 + 4);
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (puVar13 != (undefined4 *)0x0) {
      FMemory::Free(puVar13);
    }
  }
  return;
}



// FUNCTION 142ca44b0 FUN_142ca44b0 body=979 status=ok
// SIG undefined FUN_142ca44b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ca44b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *_Src;
  longlong lVar6;
  undefined1 auStack_8f8 [32];
  undefined8 local_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  float local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined8 local_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined8 uStack_8a0;
  undefined4 local_898;
  undefined1 local_888 [8];
  longlong local_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  char local_7f8;
  undefined4 local_7d4;
  float local_7d0;
  undefined8 local_788 [52];
  undefined8 *local_5e8;
  int local_5e0;
  int local_5dc;
  undefined8 local_5d8 [176];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_8f8;
  FUN_142c8ca40(local_888);
  if (local_880 != 0) {
    if (0.0 < local_7d0) {
      FUN_142c91180(local_888);
      FUN_142ca22a0(local_5d8,local_880);
      if (local_7f8 == '\0') {
        if (local_50 == 0) {
          FUN_142c8f930(local_888,local_7d0,&local_878);
          local_8c8 = local_7d0;
          uStack_8c0 = uStack_864;
          uStack_8c4 = local_868;
          local_8d8 = CONCAT44(uStack_874,local_878);
          uStack_8d0 = uStack_870;
          uStack_8cc = uStack_86c;
          uStack_8bc = uStack_860;
          FQuat::Rotator(&local_8d8,&local_8b8);
          iVar2 = local_5e0;
          lVar6 = (longlong)local_5e0;
          uStack_8a4 = DAT_1468b5d98;
          local_898 = DAT_1468b5da8;
          local_5e0 = local_5e0 + 1;
          uStack_8ac = (undefined4)_DAT_1468b5d90;
          uStack_8a8 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
          uStack_8a0 = DAT_1468b5da0;
          if (local_5dc < local_5e0) {
            FUN_142caa0b0(local_788,iVar2);
          }
          puVar5 = local_788;
          if (local_5e8 != (undefined8 *)0x0) {
            puVar5 = local_5e8;
          }
          lVar6 = lVar6 * 0x34;
          *(undefined8 *)((longlong)puVar5 + lVar6) = CONCAT44(uStack_8c4,local_8c8);
          ((undefined8 *)((longlong)puVar5 + lVar6))[1] = CONCAT44(uStack_8bc,uStack_8c0);
          puVar4 = (undefined8 *)((longlong)puVar5 + lVar6 + 0x10);
          *puVar4 = local_8b8;
          puVar4[1] = CONCAT44(uStack_8ac,uStack_8b0);
          puVar1 = (undefined4 *)((longlong)puVar5 + lVar6 + 0x20);
          *puVar1 = uStack_8a8;
          puVar1[1] = uStack_8a4;
          puVar1[2] = (undefined4)uStack_8a0;
          puVar1[3] = uStack_8a0._4_4_;
          *(undefined4 *)((longlong)puVar5 + lVar6 + 0x30) = local_898;
        }
        else if (local_50 == 1) {
          puVar5 = local_5d8;
          if (local_58 != (undefined8 *)0x0) {
            puVar5 = local_58;
          }
          FUN_142c936a0(local_888,puVar5);
        }
        else {
          FUN_142c91790(local_888,local_5d8,&local_878);
        }
      }
      else {
        FUN_142c92220(local_888,local_5d8);
      }
      puVar5 = local_5d8;
      iVar2 = local_50;
      if (local_58 != (undefined8 *)0x0) {
        puVar5 = local_58;
      }
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar5[0xc] = &PTR_FUN_14410b0e0;
        *puVar5 = &PTR_FUN_14410b0e0;
        puVar5 = puVar5 + 0x16;
      }
      if (local_58 != (undefined8 *)0x0) {
        FMemory::Free(local_58);
      }
    }
    if (((local_880 != 0) && (0.0 < local_7d0)) && (1 < local_5e0)) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
      }
      puVar4 = local_5e8;
      puVar5 = param_1 + 6;
      param_1[1] = local_880;
      if (puVar5 != local_788) {
        lVar6 = (longlong)local_5e0;
        *(int *)(param_1 + 0x3b) = local_5e0;
        if ((local_5e0 == 0) && (*(int *)((longlong)param_1 + 0x1dc) == 0)) {
          *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
        }
        else {
          FUN_142ca9e70(puVar5,local_5e0);
          _Src = local_788;
          if (puVar4 != (undefined8 *)0x0) {
            _Src = puVar4;
          }
          puVar4 = (undefined8 *)param_1[0x3a];
          if ((undefined8 *)param_1[0x3a] == (undefined8 *)0x0) {
            puVar4 = puVar5;
          }
          _guard_xfg_dispatch_icall_nop(puVar4,_Src,lVar6 * 0x34);
        }
      }
      *(undefined4 *)(param_1 + 3) = local_7d4;
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 9);
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      *param_1 = *param_2;
      param_1[2] = param_2[8];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
      goto LAB_142ca4825;
    }
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  }
  param_1[1] = 0;
  local_8d8 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1dc)) {
    FUN_142caa3b0(param_1 + 6,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
LAB_142ca4825:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b300c8);
  if (local_5e8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ca4890 FUN_142ca4890 body=162 status=ok
// SIG undefined FUN_142ca4890(void)

void FUN_142ca4890(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar2 = UMonkeyAnim::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_2;
    if (bVar1) goto LAB_142ca48e2;
  }
  lVar2 = 0;
LAB_142ca48e2:
  *(longlong *)(param_1 + 0x38) = lVar2;
  if ((param_2 != 0) && (plVar3 = (longlong *)FUN_142269f40(param_2), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_142e39920();
    uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 142ca4940 FUN_142ca4940 body=89 status=ok
// SIG undefined FUN_142ca4940(void)

void FUN_142ca4940(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_142269f40(param_2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_142e39920();
      uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 142ca49a0 FUN_142ca49a0 body=444 status=ok
// SIG undefined FUN_142ca49a0(void)

void FUN_142ca49a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  lVar6 = param_1[0x149];
  if (lVar6 == 0) {
    return;
  }
  plVar8 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  plVar2 = (longlong *)FUN_142268ae0(*(undefined8 *)(lVar6 + 0x10));
  plVar11 = plVar8;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    iVar7 = (int)plVar3[1];
    plVar2 = plVar8;
    plVar10 = plVar8;
    plVar11 = (longlong *)0x0;
    plVar13 = plVar8;
    if (0 < iVar7) {
      do {
        lVar5 = *(longlong *)(*plVar3 + -8 + (longlong)(iVar7 - (int)plVar8) * 8);
        if (lVar5 != 0) {
          lVar4 = FSplineInstanceData::StaticStruct();
          for (lVar1 = *(longlong *)(lVar5 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30))
          {
            if (lVar1 == lVar4) {
              iVar7 = *(int *)(lVar5 + 0x44);
              iVar12 = (int)plVar13;
              local_40 = iVar12 + 1;
              if ((int)plVar2 < (int)local_40) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,plVar13)
                ;
                plVar2 = (longlong *)(ulonglong)local_3c;
                plVar10 = local_48;
              }
              plVar13 = (longlong *)(ulonglong)local_40;
              plVar10[iVar12] = iVar7 + lVar6;
              break;
            }
          }
        }
        iVar7 = (int)plVar3[1];
        uVar9 = (int)plVar8 + 1;
        plVar8 = (longlong *)(ulonglong)uVar9;
      } while ((int)uVar9 < iVar7);
      plVar11 = plVar10;
      if ((int)plVar13 != 0) {
        param_1[0x1f9] = *plVar10;
        goto LAB_142ca4b0f;
      }
    }
  }
  lVar6 = 0;
  if (param_1[0x1f6] != 0) {
    lVar5 = operator_new(0x180);
    if (lVar5 != 0) {
      lVar6 = FUN_142c8c380(lVar5);
    }
    param_1[0x1f9] = lVar6;
    *(longlong *)(lVar6 + 0x140) = param_1[0x1f6];
    FUN_14227c160(param_1[0x149],param_1[0x1f9],0);
  }
LAB_142ca4b0f:
  if (param_1[0x1f9] != 0) {
    (**(code **)(*param_1 + 0xa98))(param_1,0);
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 142ca4b60 FUN_142ca4b60 body=241 status=ok
// SIG undefined FUN_142ca4b60(void)

void FUN_142ca4b60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x158);
  iVar1 = *(int *)(param_1 + 0x160);
  lVar3 = (longlong)iVar1 * 0x20 + lVar2;
  if (lVar2 != lVar3) {
    do {
      FUN_1422f3ff0(lVar2,param_2,0);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar3);
    iVar1 = *(int *)(param_1 + 0x160);
  }
  local_res8[0] = 0;
  FUN_142c8b400(*(undefined8 *)(param_1 + 0x158),(longlong)iVar1,0,local_res8);
  lVar2 = *(longlong *)(param_1 + 0x170);
  iVar1 = *(int *)(param_1 + 0x178);
  lVar3 = (longlong)iVar1 * 0x20 + lVar2;
  if (lVar2 != lVar3) {
    do {
      FUN_1422f3ff0(lVar2,param_2,1);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar3);
    iVar1 = *(int *)(param_1 + 0x178);
  }
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>
            (*(undefined8 *)(param_1 + 0x170),(longlong)iVar1,0,local_res8);
  return;
}



// FUNCTION 142ca4c60 FUN_142ca4c60 body=229 status=ok
// SIG undefined FUN_142ca4c60(void)

void FUN_142ca4c60(ulonglong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong local_res8;
  ulonglong uVar6;
  
  iVar5 = *(int *)(param_1 + 0x148);
  lVar4 = (longlong)iVar5;
  plVar1 = (longlong *)(param_1 + 0x150);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x15c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*(int *)(param_1 + 0x15c) < *(int *)(param_1 + 0x148)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
  }
  uVar6 = uVar3;
  if (0 < iVar5) {
    do {
      iVar5 = (int)uVar6;
      FUN_1422f3ff0((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x140),param_2,0);
      if (*(int *)(*(longlong *)(param_1 + 0x140) + 8 + uVar3) != -1) {
        iVar2 = *(int *)(param_1 + 0x158);
        *(int *)(param_1 + 0x158) = iVar2 + 1;
        if (*(int *)(param_1 + 0x15c) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar5;
      }
      uVar3 = uVar3 + 0x20;
      lVar4 = lVar4 + -1;
      uVar6 = (ulonglong)(iVar5 + 1);
    } while (lVar4 != 0);
  }
  local_res8 = param_1;
  FUN_142c8b140(*plVar1,(longlong)*(int *)(param_1 + 0x158),param_1 & 0xff,&local_res8);
  return;
}



// FUNCTION 142ca4d60 FUN_142ca4d60 body=134 status=ok
// SIG undefined FUN_142ca4d60(void)

void FUN_142ca4d60(longlong param_1,longlong param_2)

{
  FUN_1422f3ff0(param_1 + 0x1a8,param_2,0);
  FUN_1422f3ff0(param_1 + 0x1c0,param_2,0);
  if (*(int *)(param_1 + 600) != -1) {
    *(undefined4 *)(param_1 + 0x25c) =
         *(undefined4 *)
          (*(longlong *)(param_2 + 0x80) +
          (longlong)*(int *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_1 + 600) * 4)
          * 4);
  }
  FUN_1422f3ff0(param_1 + 0x140,param_2,0);
  FUN_1422f3ff0(param_1 + 0x158,param_2,0);
  return;
}



// FUNCTION 142ca4df0 FUN_142ca4df0 body=40 status=ok
// SIG undefined FUN_142ca4df0(void)

void FUN_142ca4df0(longlong param_1)

{
  FUN_141faaaf0();
  FUN_142c90890(param_1,*(undefined8 *)(param_1 + 0x140),0,0);
  return;
}



// FUNCTION 142ca4e20 FUN_142ca4e20 body=393 status=ok
// SIG undefined FUN_142ca4e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca4e20(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_141faaaf0();
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  local_68 = 0;
  if ((*(longlong *)(param_1 + 0x1d8) != 0) &&
     (plVar2 = *(longlong **)(*param_2 + 0xb8), plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x440))(plVar2,*(undefined8 *)(param_1 + 0x1d8));
    if (cVar6 != '\0') {
      lVar8 = FUN_1423b0a60(plVar2,*(undefined8 *)(param_1 + 0x1d8));
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)USkeletalMeshSocket::GetSocketLocalTransform(lVar8,local_58);
        uVar5 = puVar9[1];
        *(undefined8 *)(param_1 + 0x260) = *puVar9;
        *(undefined8 *)(param_1 + 0x268) = uVar5;
        uVar7 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uVar3 = *(undefined4 *)(puVar9 + 3);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
        *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)(param_1 + 0x274) = uVar7;
        *(undefined4 *)(param_1 + 0x278) = uVar3;
        *(undefined4 *)(param_1 + 0x27c) = uVar4;
        uVar7 = *(undefined4 *)((longlong)puVar9 + 0x24);
        uVar3 = *(undefined4 *)(puVar9 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x2c);
        *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(puVar9 + 4);
        *(undefined4 *)(param_1 + 0x284) = uVar7;
        *(undefined4 *)(param_1 + 0x288) = uVar3;
        *(undefined4 *)(param_1 + 0x28c) = uVar4;
        uVar7 = FUN_1423ac950(plVar2,*(undefined8 *)(lVar8 + 0x30));
        *(undefined4 *)(param_1 + 600) = uVar7;
      }
    }
  }
  pfVar1 = (float *)(param_1 + 0x210);
  FAxis::Initialize(pfVar1);
  if (((*pfVar1 == 0.0) && (*(float *)(param_1 + 0x214) == 0.0)) &&
     (*(float *)(param_1 + 0x218) == 0.0)) {
    *(undefined8 *)pfVar1 = DAT_1466acfc0;
    *(undefined4 *)(param_1 + 0x218) = DAT_1466acfc8;
  }
  pfVar10 = (float *)(param_1 + 0x1ec);
  FAxis::Initialize(pfVar10);
  if (((*pfVar10 == 0.0) && (*(float *)(param_1 + 0x1f0) == 0.0)) &&
     (*(float *)(param_1 + 500) == 0.0)) {
    *(undefined8 *)pfVar10 = DAT_1466acfb0;
    *(undefined4 *)(param_1 + 500) = DAT_1466acfb8;
  }
  pfVar10 = (float *)(param_1 + 0x1fc);
  FAxis::Initialize(pfVar10);
  if (((*pfVar10 == 0.0) && (*(float *)(param_1 + 0x200) == 0.0)) &&
     (*(float *)(param_1 + 0x204) == 0.0)) {
    *(undefined8 *)pfVar10 = *(undefined8 *)pfVar1;
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x218);
  }
  return;
}



// FUNCTION 142ca4fb0 FUN_142ca4fb0 body=141 status=ok
// SIG undefined FUN_142ca4fb0(void)

void FUN_142ca4fb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
  }
  local_10 = (longlong *)0x0;
  if (param_1 != &local_18) {
    *param_1 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ca5040 FUN_142ca5040 body=163 status=ok
// SIG undefined FUN_142ca5040(void)

ulonglong FUN_142ca5040(longlong *param_1,ulonglong *param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x678))();
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = AHeoCon::GetPrivateStaticClass();
      uVar3 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        in_RAX = (ulonglong)uVar3 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar3,1);
      }
      if ((char)in_RAX != '\0') {
        lVar1 = *(longlong *)(lVar1 + 0xa18);
        goto LAB_142ca50a1;
      }
    }
  }
  lVar1 = 0;
LAB_142ca50a1:
  if (lVar1 != 0) {
    uVar3 = (uint7)(in_RAX >> 8);
    if ((*(int *)(lVar1 + 0x10d8) == 0) && (*(int *)(lVar1 + 0x10dc) == 0)) {
      in_RAX = CONCAT71(uVar3,1);
    }
    else {
      in_RAX = (ulonglong)uVar3 << 8;
    }
    if (((char)in_RAX == '\0') && (in_RAX = *param_2, *(ulonglong *)(lVar1 + 0x10d8) != in_RAX)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ca50f0 FUN_142ca50f0 body=192 status=ok
// SIG undefined FUN_142ca50f0(void)

undefined8 FUN_142ca50f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x178);
  plVar2 = plVar6 + *(int *)(param_1 + 0x180);
  do {
    if (plVar6 == plVar2) {
      return 1;
    }
    if (((*plVar6 != 0) && (lVar3 = *(longlong *)(*plVar6 + 0x10), param_2 != 0)) &&
       (lVar5 = lVar3, lVar3 != 0)) {
      do {
        if (lVar5 == param_2) {
          return 0;
        }
        plVar1 = (longlong *)(lVar5 + 0x30);
        lVar4 = param_2;
        lVar5 = *plVar1;
      } while (*plVar1 != 0);
      do {
        if (lVar4 == lVar3) {
          return 0;
        }
        plVar1 = (longlong *)(lVar4 + 0x30);
        lVar4 = *plVar1;
      } while (*plVar1 != 0);
      for (lVar3 = *(longlong *)(lVar3 + 0x30);
          (lVar3 != 0 &&
          (lVar4 = UAnimNotifyState::GetPrivateStaticClass(), lVar5 = param_2, lVar3 != lVar4));
          lVar3 = *(longlong *)(lVar3 + 0x30)) {
        do {
          if (lVar5 == lVar3) {
            return 0;
          }
          plVar1 = (longlong *)(lVar5 + 0x30);
          lVar5 = *plVar1;
        } while (*plVar1 != 0);
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 142ca51b0 FUN_142ca51b0 body=43 status=ok
// SIG undefined FUN_142ca51b0(void)

ulonglong FUN_142ca51b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10b8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x10c0);
  while( true ) {
    if (plVar2 == plVar1) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
}



// FUNCTION 142ca5220 FUN_142ca5220 body=52 status=ok
// SIG undefined FUN_142ca5220(void)

ulonglong FUN_142ca5220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0xf40);
    plVar1 = in_RAX + *(int *)(param_1 + 0xf48);
    for (; in_RAX != plVar1; in_RAX = in_RAX + 1) {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ca5260 FUN_142ca5260 body=289 status=ok
// SIG undefined FUN_142ca5260(void)

undefined8 FUN_142ca5260(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x688))();
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar4 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ca52f1;
  }
  lVar3 = 0;
LAB_142ca52f1:
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x688))();
  cVar2 = (**(code **)(*plVar5 + 0x780))(plVar5);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x688))();
    cVar2 = (**(code **)(*plVar5 + 0x778))(plVar5);
    if (cVar2 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      cVar2 = FUN_1428cfb70(lVar4);
      if (((cVar2 != '\0') && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x4c0) == param_1)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142ca5390 FUN_142ca5390 body=235 status=ok
// SIG undefined FUN_142ca5390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ca5390(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((param_1 == (longlong *)0x0) || (param_1[7] == 0)) {
    return local_10 & 0xffffffffffffff00;
  }
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_142caa8e0(&local_28,param_1,&local_38);
  puVar3 = &local_28;
  if (local_20 != (undefined8 *)0x0) {
    puVar3 = local_20;
  }
  puVar1 = puVar3 + local_18;
  do {
    if (puVar3 == puVar1) {
      uVar4 = 0;
LAB_142ca5433:
      if (local_20 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      return uVar4;
    }
    cVar2 = (**(code **)(*param_1 + 0x280))(param_1,*puVar3);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_142ca5433;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}



// FUNCTION 142ca54c0 FUN_142ca54c0 body=116 status=ok
// SIG undefined FUN_142ca54c0(void)

undefined1 FUN_142ca54c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = (longlong)*(int *)(param_2 + 0x10) * 0x20 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    cVar1 = FUN_142276f00(param_1,*(undefined4 *)(lVar2 + 8));
    if (cVar1 != '\0') break;
    lVar2 = lVar2 + 0x20;
  }
  return 1;
}



// FUNCTION 142ca5540 FUN_142ca5540 body=78 status=ok
// SIG undefined FUN_142ca5540(void)

undefined8 FUN_142ca5540(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1[7] != 0) && (*(longlong *)(param_1[7] + 0x28) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x288))();
    for (lVar1 = *(longlong *)(param_1[7] + 0x28); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30))
    {
      if (lVar1 == lVar2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142ca55e0 FUN_142ca55e0 body=121 status=ok
// SIG undefined FUN_142ca55e0(void)

undefined1 FUN_142ca55e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x148) == 0) {
LAB_142ca5642:
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x140);
    lVar4 = (longlong)*(int *)(param_1 + 0x148) * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      if ((0.0 < *(float *)(lVar3 + 0x18)) &&
         (cVar1 = FBoneReference::IsValidToEvaluate(lVar3,param_3), cVar1 == '\0'))
      goto LAB_142ca5642;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 142ca5670 FUN_142ca5670 body=386 status=ok
// SIG undefined FUN_142ca5670(void)

ulonglong FUN_142ca5670(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 local_28 [2];
  
  uVar1 = FBoneReference::IsValidToEvaluate(param_1 + 0x1a8,param_3);
  if ((((char)uVar1 != '\0') &&
      (uVar1 = FBoneReference::IsValidToEvaluate(param_1 + 0x140,param_3), (char)uVar1 != '\0')) &&
     (uVar1 = FBoneReference::IsValidToEvaluate(param_1 + 0x158,param_3), (char)uVar1 != '\0')) {
    uVar1 = 0;
    local_28[0] = 0;
    if ((*(longlong *)(param_1 + 0x1c0) == 0) || (*(int *)(param_1 + 0x1c8) != -1)) {
      uVar3 = 0xffffffff;
      if (*(char *)(param_1 + 0x14c) == '\0') {
        uVar4 = *(uint *)(param_1 + 0x150);
      }
      else if (*(int *)(param_1 + 0x148) == -1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(*(longlong *)(param_3 + 0x80) + (longlong)*(int *)(param_1 + 0x148) * 4);
      }
      if (*(char *)(param_1 + 0x164) == '\0') {
        local_res20[0] = *(undefined4 *)(param_1 + 0x168);
      }
      else if (*(int *)(param_1 + 0x160) == -1) {
        local_res20[0] = 0xffffffff;
      }
      else {
        local_res20[0] =
             *(undefined4 *)
              (*(longlong *)(param_3 + 0x80) + (longlong)*(int *)(param_1 + 0x160) * 4);
      }
      FBoneContainer::GetParentBoneIndex(param_3,local_res8,local_res20);
      while (uVar1 = (ulonglong)local_res8[0], local_res8[0] != uVar4) {
        if (local_res8[0] == 0) goto LAB_142ca57e3;
        puVar2 = (uint *)FBoneContainer::GetParentBoneIndex(param_3,local_28,local_res8);
        local_res8[0] = *puVar2;
      }
      if (*(char *)(param_1 + 0x1b4) == '\0') {
        uVar3 = *(uint *)(param_1 + 0x1b8);
      }
      else if (*(int *)(param_1 + 0x1b0) != -1) {
        uVar3 = *(uint *)(*(longlong *)(param_3 + 0x80) + (longlong)*(int *)(param_1 + 0x1b0) * 4);
      }
      while( true ) {
        if (local_res8[0] == uVar3) {
          return CONCAT71((int7)(uVar1 >> 8),1);
        }
        if ((int)uVar1 == 0) break;
        puVar2 = (uint *)FBoneContainer::GetParentBoneIndex(param_3,local_28,local_res8);
        local_res8[0] = *puVar2;
        uVar1 = (ulonglong)local_res8[0];
      }
    }
  }
LAB_142ca57e3:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ca5800 FUN_142ca5800 body=181 status=ok
// SIG undefined FUN_142ca5800(void)

void FUN_142ca5800(longlong param_1,char param_2)

{
  longlong lVar1;
  int *piVar2;
  LARGE_INTEGER local_res8;
  longlong local_res18;
  
  if (param_1 != 0) {
    local_res18 = param_1;
    lVar1 = UInputDeviceManager::GetInstance();
    lVar1 = lVar1 + 0x28;
    piVar2 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (lVar1,&local_res8,param_1);
    if ((*piVar2 != -1) != (bool)param_2) {
      if (param_2 == '\0') {
        TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar1,param_1);
      }
      else {
        FUN_1421a37c0(lVar1,&local_res8,&local_res18,0);
      }
      lVar1 = UInputDeviceManager::GetInstance();
      QueryPerformanceCounter(&local_res8);
      *(double *)(lVar1 + 0x78) =
           ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
    }
  }
  return;
}



// FUNCTION 142ca58c0 FUN_142ca58c0 body=1075 status=ok
// SIG undefined FUN_142ca58c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca58c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  longlong *plStack_68;
  longlong *local_60;
  longlong *plStack_58;
  longlong *local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  if ((param_2 != 0) &&
     (local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8,
     *(longlong *)(param_1 + 0x118) == *(longlong *)(param_2 + 0x118))) {
    local_78 = param_1;
    lVar6 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pplVar2 = (longlong **)(param_2 + 0x12f0);
      plVar9 = *pplVar2;
      pplVar3 = (longlong **)(param_1 + 0x12f0);
      plVar10 = *pplVar3;
      if (plVar10 == (longlong *)0x0) {
        if (plVar9 == (longlong *)0x0) {
          plVar7 = (longlong *)operator_new(0x20);
          plVar9 = (longlong *)0x0;
          plVar10 = plVar9;
          if (plVar7 != (longlong *)0x0) {
            *plVar7 = 0;
            plVar7[1] = 0;
            *(undefined4 *)(plVar7 + 2) = 0xffffffff;
            *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
            plVar7[3] = 1;
            plVar10 = plVar7;
          }
          plVar7 = (longlong *)operator_new(0x18);
          if (plVar7 != (longlong *)0x0) {
            *(undefined4 *)(plVar7 + 1) = 1;
            *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
            *plVar7 = (longlong)&PTR_FUN_144f96db8;
            plVar7[2] = (longlong)plVar10;
            plVar9 = plVar7;
          }
          local_a8 = plVar10;
          local_a0 = plVar9;
          SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar10,plVar10);
          if (pplVar3 != &local_a8) {
            *pplVar3 = plVar10;
            local_a8 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x12f8,&local_a0);
            plVar9 = local_a0;
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar9 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          FWeakObjectPtr::operator=(&local_90,local_78);
          plVar9 = *pplVar3;
          iVar4 = (int)plVar9[1];
          *(int *)(plVar9 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
          }
          puVar8 = (undefined4 *)(*plVar9 + (longlong)iVar4 * 8);
          *puVar8 = local_90;
          puVar8[1] = local_8c;
          plVar9 = *(longlong **)(param_1 + 0x12f8);
          plVar10 = *pplVar3;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_c8 = plVar10;
          plStack_c0 = plVar9;
          if (&local_c8 != pplVar2) {
            local_c8 = *pplVar2;
            plStack_c0 = *(longlong **)(param_2 + 0x12f8);
            *pplVar2 = plVar10;
            *(longlong **)(param_2 + 0x12f8) = plVar9;
            local_60 = plVar10;
            plStack_58 = plVar9;
          }
          plVar9 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_c0 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
          FWeakObjectPtr::operator=(&local_88,param_2);
          plVar9 = *pplVar3;
          iVar4 = (int)plVar9[1];
          *(int *)(plVar9 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
          }
          puVar8 = (undefined4 *)(*plVar9 + (longlong)iVar4 * 8);
          *puVar8 = local_88;
          local_94 = local_84;
        }
        else {
          plVar10 = *(longlong **)(param_2 + 0x12f8);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_b8 = plVar9;
          plStack_b0 = plVar10;
          if (&local_b8 != pplVar3) {
            local_b8 = *pplVar3;
            plStack_b0 = *(longlong **)(param_1 + 0x12f8);
            *pplVar3 = plVar9;
            *(longlong **)(param_1 + 0x12f8) = plVar10;
            local_50 = plVar9;
            plStack_48 = plVar10;
          }
          plVar9 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_b0 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_b0)(plStack_b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
              }
            }
          }
          FWeakObjectPtr::operator=(&local_80,param_1);
          plVar9 = *pplVar3;
          iVar4 = (int)plVar9[1];
          *(int *)(plVar9 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
          }
          puVar8 = (undefined4 *)(*plVar9 + (longlong)iVar4 * 8);
          *puVar8 = local_80;
          local_94 = local_7c;
        }
      }
      else {
        if (plVar9 != (longlong *)0x0) {
          return;
        }
        plVar9 = *(longlong **)(param_1 + 0x12f8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_d8 = plVar10;
        plStack_d0 = plVar9;
        if (&local_d8 != pplVar2) {
          local_d8 = *pplVar2;
          plStack_d0 = *(longlong **)(param_2 + 0x12f8);
          *pplVar2 = plVar10;
          *(longlong **)(param_2 + 0x12f8) = plVar9;
          local_70 = plVar10;
          plStack_68 = plVar9;
        }
        plVar9 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_d0 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_d0)(plStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
            }
          }
        }
        FWeakObjectPtr::operator=(&local_98,param_2);
        plVar9 = *pplVar3;
        iVar4 = (int)plVar9[1];
        *(int *)(plVar9 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
        }
        puVar8 = (undefined4 *)(*plVar9 + (longlong)iVar4 * 8);
        *puVar8 = local_98;
      }
      puVar8[1] = local_94;
    }
  }
  return;
}



// FUNCTION 142ca5d00 FUN_142ca5d00 body=108 status=ok
// SIG undefined FUN_142ca5d00(void)

void FUN_142ca5d00(undefined8 param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar1 + (int)param_2[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_142ca58c0(param_1,*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142ca5d70 FUN_142ca5d70 body=293 status=ok
// SIG undefined FUN_142ca5d70(void)

void FUN_142ca5d70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1415afb20(L"LoadAlwaysLoadedAssets");
  QueryPerformanceCounter(&local_res8);
  FUN_142c9f8c0(param_1);
  plVar2 = param_1 + 0x80;
  plVar4 = (longlong *)*plVar2;
  iVar3 = (int)param_1[0x81];
  plVar6 = plVar4;
  do {
    if (plVar6 == plVar4 + iVar3) {
LAB_142ca5de1:
      *(int *)(param_1 + 0x81) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x40c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
      }
      *(longlong *)(*plVar2 + (longlong)iVar3 * 8) = DAT_146b300f8;
LAB_142ca5e06:
      local_28 = 0;
      local_20 = 0;
      (**(code **)(*param_1 + 0x328))(param_1,local_18,DAT_146b30100,plVar2,&local_28,100);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)local_10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      FUN_1416f7d70(0xffffffff);
      return;
    }
    if (*plVar6 == DAT_146b300f8) {
      if ((int)((longlong)plVar6 - (longlong)plVar4 >> 3) != -1) goto LAB_142ca5e06;
      goto LAB_142ca5de1;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 142ca5ea0 FUN_142ca5ea0 body=23 status=ok
// SIG undefined FUN_142ca5ea0(void)

undefined8 FUN_142ca5ea0(undefined8 param_1)

{
  FUN_14246d990();
  return param_1;
}



// FUNCTION 142ca5ec0 FUN_142ca5ec0 body=23 status=ok
// SIG undefined FUN_142ca5ec0(void)

undefined8 FUN_142ca5ec0(undefined8 param_1)

{
  FUN_14246da20();
  return param_1;
}



// FUNCTION 142ca5ee0 FUN_142ca5ee0 body=265 status=ok
// SIG undefined FUN_142ca5ee0(void)

undefined8 FUN_142ca5ee0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = *(undefined8 *)(param_1 + 0x198);
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FUN_1422a1a10(param_2,&local_res10,&local_res8,param_1 + 0x1ec,param_1 + 0x1f8,param_1 + 0x204,
                param_1 + 0x2d8,param_1 + 0x2d0,param_1 + 0x2d3,param_1 + 0x2d6,param_1 + 0x2d2,
                param_1 + 0x2d5,param_1 + 0x2d7,param_1 + 0x310,param_1 + 0x2d1,param_1 + 0x2d4);
  FUN_1422ad910(param_2);
  return param_2;
}



// FUNCTION 142ca6010 FUN_142ca6010 body=420 status=ok
// SIG undefined FUN_142ca6010(void)

void FUN_142ca6010(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong local_38;
  int local_30;
  int local_2c;
  
  FUN_1422778e0();
  lVar11 = *(longlong *)(param_1 + 0x440);
  if (((lVar11 != 0) && (lVar1 = *(longlong *)(lVar11 + 0x12a8), lVar1 != 0)) &&
     (*(char *)(lVar11 + 0xf6c) != '\0')) {
    iVar9 = 0;
    iVar10 = 0;
    lVar11 = 0;
    local_38 = 0;
    local_2c = 0;
    plVar3 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
      iVar8 = 0;
      iVar7 = (int)plVar3[1];
      if (0 < iVar7) {
        do {
          lVar5 = *(longlong *)(*plVar3 + -8 + (longlong)(iVar7 - iVar8) * 8);
          if (lVar5 != 0) {
            lVar4 = FUITagsList::StaticStruct();
            for (lVar2 = *(longlong *)(lVar5 + 0x70); lVar2 != 0;
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == lVar4) {
                iVar7 = *(int *)(lVar5 + 0x44);
                local_30 = iVar9 + 1;
                if (iVar10 < local_30) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,iVar9)
                  ;
                  lVar11 = local_38;
                  iVar10 = local_2c;
                }
                *(longlong *)(lVar11 + (longlong)iVar9 * 8) = iVar7 + param_1;
                iVar9 = local_30;
                break;
              }
            }
          }
          iVar7 = (int)plVar3[1];
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7);
      }
    }
    if (iVar9 < *(int *)(lVar1 + 0x208)) {
      do {
        lVar5 = operator_new(0x730);
        if (lVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_142d979e0(lVar5);
        }
        FUN_142c90280((longlong)iVar9 * 0x78 + *(longlong *)(lVar1 + 0x200),uVar6);
        FUN_14227bd60(param_1,uVar6,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar1 + 0x208));
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  return;
}



// FUNCTION 142ca61c0 FUN_142ca61c0 body=3111 status=ok
// SIG undefined FUN_142ca61c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ca61c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong local_res8;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_68;
  uint local_60;
  uint local_5c;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  longlong *local_48;
  uint local_40;
  int local_3c;
  
  FUN_142279500();
  local_res8 = *(longlong *)(param_1 + 0x20);
  plVar13 = (longlong *)0x0;
  if (local_res8 != 0) {
    lVar6 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142ca6231;
  }
  local_res8 = 0;
LAB_142ca6231:
  *(longlong *)(param_1 + 0x440) = local_res8;
  if (local_res8 != 0) {
    lVar6 = *(longlong *)(local_res8 + 0xf70);
    lVar20 = (longlong)*(int *)(local_res8 + 0xf78) * 0xe8 + lVar6;
    for (; lVar6 != lVar20; lVar6 = lVar6 + 0xe8) {
      FUN_1422ad910(lVar6);
    }
    if (*(longlong *)(local_res8 + 0xfb0) != 0) {
      local_58 = (longlong *)0x0;
      local_4c = 0;
      plVar7 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
      if (plVar7 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
        iVar17 = (int)plVar8[1];
        plVar7 = plVar13;
        plVar10 = plVar13;
        if (0 < iVar17) {
          do {
            lVar6 = *(longlong *)(*plVar8 + -8 + (longlong)(iVar17 - (int)plVar7) * 8);
            if (lVar6 != 0) {
              lVar9 = FSplineInstanceData::StaticStruct();
              for (lVar20 = *(longlong *)(lVar6 + 0x70); lVar20 != 0;
                  lVar20 = *(longlong *)(lVar20 + 0x30)) {
                if (lVar20 == lVar9) {
                  iVar17 = *(int *)(lVar6 + 0x44);
                  iVar18 = (int)plVar13;
                  local_50 = iVar18 + 1;
                  if ((int)local_4c < (int)local_50) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_58,plVar13);
                    plVar10 = local_58;
                  }
                  plVar13 = (longlong *)(ulonglong)local_50;
                  plVar10[iVar18] = iVar17 + param_1;
                  break;
                }
              }
            }
            iVar17 = (int)plVar8[1];
            uVar19 = (int)plVar7 + 1;
            plVar7 = (longlong *)(ulonglong)uVar19;
          } while ((int)uVar19 < iVar17);
          if ((int)plVar13 != 0) {
            *(undefined8 *)(*plVar10 + 0x140) = *(undefined8 *)(local_res8 + 0xfb0);
          }
          if (plVar10 != (longlong *)0x0) {
            FMemory::Free(plVar10);
          }
        }
      }
    }
    plVar13 = (longlong *)0x0;
    lVar6 = *(longlong *)(local_res8 + 0x12a8);
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x210) != 0) {
        *(longlong *)(local_res8 + 0x828) = *(longlong *)(lVar6 + 0x210);
      }
      local_58 = (longlong *)0x0;
      iVar17 = 0;
      local_4c = 0;
      plVar10 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
      plVar7 = plVar13;
      if (plVar10 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
        iVar18 = (int)plVar11[1];
        plVar10 = plVar13;
        plVar8 = plVar13;
        if (0 < iVar18) {
          do {
            lVar20 = *(longlong *)(*plVar11 + -8 + (longlong)(iVar18 - (int)plVar8) * 8);
            if (lVar20 != 0) {
              lVar12 = FUN_142c5c8b0();
              for (lVar9 = *(longlong *)(lVar20 + 0x70); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 0x30)) {
                if (lVar9 == lVar12) {
                  iVar17 = *(int *)(lVar20 + 0x44);
                  iVar18 = (int)plVar10;
                  local_50 = iVar18 + 1;
                  if ((int)plVar13 < (int)local_50) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_58,plVar10);
                    plVar13 = (longlong *)(ulonglong)local_4c;
                  }
                  plVar10 = (longlong *)(ulonglong)local_50;
                  local_58[iVar18] = iVar17 + param_1;
                  break;
                }
              }
            }
            iVar17 = (int)plVar10;
            iVar18 = (int)plVar11[1];
            uVar19 = (int)plVar8 + 1;
            plVar7 = local_58;
            plVar8 = (longlong *)(ulonglong)uVar19;
          } while ((int)uVar19 < iVar18);
        }
      }
      plVar13 = plVar7 + iVar17;
      for (; plVar7 != plVar13; plVar7 = plVar7 + 1) {
        lVar20 = *plVar7;
        if ((lVar20 != 0) && (*(char *)(lVar6 + 0x30) != '\0')) {
          plVar10 = (longlong *)(lVar20 + 0x148);
          *(undefined4 *)(lVar20 + 0x170) = *(undefined4 *)(lVar6 + 0x34);
          *(undefined4 *)(lVar20 + 0x174) = *(undefined4 *)(lVar6 + 0x38);
          *(undefined4 *)(lVar20 + 0x178) = *(undefined4 *)(lVar6 + 0x3c);
          *(undefined8 *)(lVar20 + 0x17c) = *(undefined8 *)(lVar6 + 0x40);
          *(undefined4 *)(lVar20 + 0x184) = *(undefined4 *)(lVar6 + 0x48);
          *(undefined4 *)(lVar20 + 0x188) = *(undefined4 *)(lVar6 + 0x4c);
          *(undefined8 *)(lVar20 + 0x7d8) = *(undefined8 *)(lVar6 + 0x50);
          *(undefined4 *)(lVar20 + 0x7e0) = *(undefined4 *)(lVar6 + 0x58);
          *(undefined1 *)(lVar20 + 0x7e4) = *(undefined1 *)(lVar6 + 0x5c);
          *(undefined8 *)(lVar20 + 0x80c) = *(undefined8 *)(lVar6 + 0x60);
          *(undefined4 *)(lVar20 + 0x814) = *(undefined4 *)(lVar6 + 0x68);
          uVar14 = *(undefined8 *)(lVar6 + 0x78);
          *(undefined8 *)(lVar20 + 0x828) = *(undefined8 *)(lVar6 + 0x70);
          *(undefined8 *)(lVar20 + 0x830) = uVar14;
          *(undefined8 *)(lVar20 + 0x838) = *(undefined8 *)(lVar6 + 0x80);
          *(undefined4 *)(lVar20 + 0x840) = *(undefined4 *)(lVar6 + 0x88);
          *(undefined4 *)(lVar20 + 0x844) = *(undefined4 *)(lVar6 + 0x8c);
          *(undefined4 *)(lVar20 + 0x848) = *(undefined4 *)(lVar6 + 0x90);
          *(undefined8 *)(lVar20 + 0x84c) = *(undefined8 *)(lVar6 + 0x94);
          *(undefined4 *)(lVar20 + 0x48) = *(undefined4 *)(lVar6 + 0x9c);
          *(undefined4 *)(lVar20 + 0x104) = *(undefined4 *)(lVar6 + 0xa0);
          *(undefined4 *)(lVar20 + 0x140) = *(undefined4 *)(lVar6 + 0xe4);
          *(undefined4 *)(lVar20 + 0x144) = *(undefined4 *)(lVar6 + 0xe8);
          if (plVar10 != (longlong *)(lVar6 + 0xf0)) {
            iVar17 = *(int *)(lVar6 + 0xf8);
            lVar9 = *(longlong *)(lVar6 + 0xf0);
            *(int *)(lVar20 + 0x150) = iVar17;
            if ((iVar17 == 0) && (*(int *)(lVar20 + 0x154) == 0)) {
              *(undefined4 *)(lVar20 + 0x154) = 0;
            }
            else {
              TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                        (plVar10,iVar17);
              if (iVar17 != 0) {
                puVar15 = (undefined4 *)(lVar9 + 0x30);
                puVar16 = (undefined8 *)*plVar10;
                do {
                  uVar14 = *(undefined8 *)(puVar15 + -10);
                  *puVar16 = *(undefined8 *)(puVar15 + -0xc);
                  puVar16[1] = uVar14;
                  puVar16[2] = *(undefined8 *)(puVar15 + -8);
                  uVar14 = *(undefined8 *)(puVar15 + -4);
                  puVar16[3] = *(undefined8 *)(puVar15 + -6);
                  puVar16[4] = uVar14;
                  puVar16[5] = *(undefined8 *)(puVar15 + -2);
                  *(undefined4 *)(puVar16 + 6) = *puVar15;
                  *(undefined1 *)((longlong)puVar16 + 0x34) = *(undefined1 *)(puVar15 + 1);
                  *(undefined1 *)((longlong)puVar16 + 0x35) = *(undefined1 *)((longlong)puVar15 + 5)
                  ;
                  *(undefined1 *)((longlong)puVar16 + 0x36) = *(undefined1 *)((longlong)puVar15 + 6)
                  ;
                  *(undefined4 *)(puVar16 + 7) = puVar15[2];
                  *(undefined4 *)((longlong)puVar16 + 0x3c) = puVar15[3];
                  *(undefined1 *)(puVar16 + 8) = *(undefined1 *)(puVar15 + 4);
                  iVar17 = iVar17 + -1;
                  puVar15 = puVar15 + 0x12;
                  puVar16 = puVar16 + 9;
                } while (iVar17 != 0);
              }
            }
          }
          uVar14 = *(undefined8 *)(lVar6 + 0xb0);
          *(undefined8 *)(lVar20 + 0x120) = *(undefined8 *)(lVar6 + 0xa8);
          *(undefined8 *)(lVar20 + 0x128) = uVar14;
          *(undefined8 *)(lVar20 + 0x130) = *(undefined8 *)(lVar6 + 0xb8);
          *(undefined1 *)(lVar20 + 0x138) = *(undefined1 *)(lVar6 + 0xc0);
          uVar2 = *(undefined4 *)(lVar6 + 0xcc);
          uVar3 = *(undefined4 *)(lVar6 + 0xd0);
          uVar4 = *(undefined4 *)(lVar6 + 0xd4);
          *(undefined4 *)(lVar20 + 400) = *(undefined4 *)(lVar6 + 200);
          *(undefined4 *)(lVar20 + 0x194) = uVar2;
          *(undefined4 *)(lVar20 + 0x198) = uVar3;
          *(undefined4 *)(lVar20 + 0x19c) = uVar4;
          *(undefined8 *)(lVar20 + 0x1a0) = *(undefined8 *)(lVar6 + 0xd8);
          *(undefined1 *)(lVar20 + 0x1a8) = *(undefined1 *)(lVar6 + 0xe0);
        }
      }
      plVar10 = (longlong *)0x0;
      iVar17 = 0;
      local_78 = (longlong *)0x0;
      local_6c = 0;
      plVar7 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
      plVar13 = plVar10;
      if (plVar7 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
        iVar18 = (int)plVar11[1];
        plVar13 = (longlong *)0x0;
        plVar7 = plVar10;
        plVar8 = plVar10;
        if (0 < iVar18) {
          do {
            lVar20 = *(longlong *)(*plVar11 + -8 + (longlong)(iVar18 - (int)plVar8) * 8);
            if (lVar20 != 0) {
              lVar12 = FUN_142c5c930();
              for (lVar9 = *(longlong *)(lVar20 + 0x70); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 0x30)) {
                if (lVar9 == lVar12) {
                  iVar17 = *(int *)(lVar20 + 0x44);
                  iVar18 = (int)plVar7;
                  local_70 = iVar18 + 1;
                  if ((int)plVar10 < (int)local_70) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_78,plVar7);
                    plVar10 = (longlong *)(ulonglong)local_6c;
                  }
                  plVar7 = (longlong *)(ulonglong)local_70;
                  local_78[iVar18] = iVar17 + param_1;
                  break;
                }
              }
            }
            iVar17 = (int)plVar7;
            iVar18 = (int)plVar11[1];
            uVar19 = (int)plVar8 + 1;
            plVar13 = local_78;
            plVar8 = (longlong *)(ulonglong)uVar19;
          } while ((int)uVar19 < iVar18);
        }
      }
      uVar25 = 0;
      uVar23 = (ulonglong)((longlong)(plVar13 + iVar17) + (7 - (longlong)plVar13)) >> 3;
      if (plVar13 + iVar17 < plVar13) {
        uVar23 = 0;
      }
      if (uVar23 != 0) {
        do {
          lVar20 = *plVar13;
          if (lVar20 != 0) {
            uVar14 = *(undefined8 *)(lVar6 + 0x110);
            *(undefined8 *)(lVar20 + 0x140) = *(undefined8 *)(lVar6 + 0x108);
            *(undefined8 *)(lVar20 + 0x148) = uVar14;
            *(undefined8 *)(lVar20 + 0x150) = *(undefined8 *)(lVar6 + 0x118);
            uVar2 = *(undefined4 *)(lVar6 + 0x124);
            uVar3 = *(undefined4 *)(lVar6 + 0x128);
            uVar4 = *(undefined4 *)(lVar6 + 300);
            *(undefined4 *)(lVar20 + 0x158) = *(undefined4 *)(lVar6 + 0x120);
            *(undefined4 *)(lVar20 + 0x15c) = uVar2;
            *(undefined4 *)(lVar20 + 0x160) = uVar3;
            *(undefined4 *)(lVar20 + 0x164) = uVar4;
            *(undefined8 *)(lVar20 + 0x168) = *(undefined8 *)(lVar6 + 0x130);
            *(undefined1 *)(lVar20 + 0x170) = *(undefined1 *)(lVar6 + 0x138);
            FUN_142c5b7d0(lVar20 + 0x178,lVar6 + 0x140);
            FUN_142c5b7d0(lVar20 + 0x188,lVar6 + 0x150);
            *(undefined1 *)(lVar20 + 0x1b5) = *(undefined1 *)(lVar6 + 0x165);
            *(undefined8 *)(lVar20 + 0x1b8) = *(undefined8 *)(lVar6 + 0x168);
            *(undefined4 *)(lVar20 + 0x1c0) = *(undefined4 *)(lVar6 + 0x170);
            *(undefined8 *)(lVar20 + 0x1c4) = *(undefined8 *)(lVar6 + 0x174);
            *(undefined4 *)(lVar20 + 0x1cc) = *(undefined4 *)(lVar6 + 0x17c);
            *(undefined8 *)(lVar20 + 0x1d0) = *(undefined8 *)(lVar6 + 0x180);
            *(undefined4 *)(lVar20 + 0x1d8) = *(undefined4 *)(lVar6 + 0x188);
            *(undefined8 *)(lVar20 + 0x1dc) = *(undefined8 *)(lVar6 + 0x18c);
            *(undefined4 *)(lVar20 + 0x1e4) = *(undefined4 *)(lVar6 + 0x194);
            *(undefined4 *)(lVar20 + 0x1e8) = *(undefined4 *)(lVar6 + 0x198);
            *(undefined4 *)(lVar20 + 0x1ec) = *(undefined4 *)(lVar6 + 0x19c);
            *(undefined4 *)(lVar20 + 0x1f0) = *(undefined4 *)(lVar6 + 0x1a0);
            *(undefined4 *)(lVar20 + 500) = *(undefined4 *)(lVar6 + 0x1a4);
            *(undefined4 *)(lVar20 + 0x1f8) = *(undefined4 *)(lVar6 + 0x1a8);
            *(undefined4 *)(lVar20 + 0x1fc) = *(undefined4 *)(lVar6 + 0x1ac);
            *(undefined4 *)(lVar20 + 0x200) = *(undefined4 *)(lVar6 + 0x1b0);
            *(undefined4 *)(lVar20 + 0x48) = *(undefined4 *)(lVar6 + 0x1b4);
            *(undefined4 *)(lVar20 + 0x104) = *(undefined4 *)(lVar6 + 0x1b8);
            uVar14 = *(undefined8 *)(lVar6 + 0x1e8);
            *(undefined8 *)(lVar20 + 0x120) = *(undefined8 *)(lVar6 + 0x1e0);
            *(undefined8 *)(lVar20 + 0x128) = uVar14;
            *(undefined8 *)(lVar20 + 0x130) = *(undefined8 *)(lVar6 + 0x1f0);
            *(undefined1 *)(lVar20 + 0x138) = *(undefined1 *)(lVar6 + 0x1f8);
            uVar2 = *(undefined4 *)(lVar6 + 0x1c4);
            uVar3 = *(undefined4 *)(lVar6 + 0x1c8);
            uVar4 = *(undefined4 *)(lVar6 + 0x1cc);
            *(undefined4 *)(lVar20 + 0x208) = *(undefined4 *)(lVar6 + 0x1c0);
            *(undefined4 *)(lVar20 + 0x20c) = uVar2;
            *(undefined4 *)(lVar20 + 0x210) = uVar3;
            *(undefined4 *)(lVar20 + 0x214) = uVar4;
            *(undefined8 *)(lVar20 + 0x218) = *(undefined8 *)(lVar6 + 0x1d0);
            *(undefined1 *)(lVar20 + 0x220) = *(undefined1 *)(lVar6 + 0x1d8);
          }
          if (*(longlong *)(param_1 + 0x28) != 0) {
            FUN_142c58b90(lVar20,*(longlong *)(param_1 + 0x28) + 0x58);
          }
          plVar13 = plVar13 + 1;
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar23);
      }
      uVar25 = 0;
      local_68 = 0;
      local_5c = 0;
      plVar13 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
      uVar23 = uVar25;
      iVar17 = 0;
      if (plVar13 != (longlong *)0x0) {
        plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
        iVar18 = (int)plVar13[1];
        uVar21 = uVar25;
        uVar24 = uVar25;
        uVar23 = 0;
        iVar17 = 0;
        if (0 < iVar18) {
          do {
            lVar20 = *(longlong *)(*plVar13 + -8 + (longlong)(iVar18 - (int)uVar24) * 8);
            if (lVar20 != 0) {
              lVar12 = FUITagsList::StaticStruct();
              for (lVar9 = *(longlong *)(lVar20 + 0x70); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 0x30)) {
                if (lVar9 == lVar12) {
                  iVar17 = *(int *)(lVar20 + 0x44);
                  iVar18 = (int)uVar21;
                  local_60 = iVar18 + 1;
                  if ((int)uVar25 < (int)local_60) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_68,uVar21);
                    uVar25 = (ulonglong)local_5c;
                  }
                  uVar21 = (ulonglong)local_60;
                  *(longlong *)(local_68 + (longlong)iVar18 * 8) = iVar17 + param_1;
                  break;
                }
              }
            }
            iVar17 = (int)uVar21;
            iVar18 = (int)plVar13[1];
            uVar19 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar19;
            uVar23 = local_68;
          } while ((int)uVar19 < iVar18);
        }
      }
      plVar7 = (longlong *)0x0;
      iVar18 = 0;
      lVar20 = (longlong)(iVar17 + -1);
      plVar13 = plVar7;
      if (-1 < iVar17 + -1) {
        do {
          iVar17 = (int)plVar13;
          if (*(int *)(lVar6 + 0x208) <= iVar17) break;
          FUN_142c90280((longlong)iVar17 * 0x78 + *(longlong *)(lVar6 + 0x200),
                        *(undefined8 *)(uVar23 + lVar20 * 8));
          plVar13 = (longlong *)(ulonglong)(iVar17 + 1);
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
      if ((*(longlong *)(lVar6 + 0x298) == 0) || (lVar20 = FUN_1423ac7e0(local_res8), lVar20 == 0))
      {
        lVar20 = FUN_1423ac7e0(local_res8);
        if (lVar20 != 0) {
          uVar14 = FUN_1423ac7e0(local_res8);
          FUN_142281d40(uVar14,0,DAT_146b2ff28);
        }
      }
      else {
        uVar14 = FUN_1423ac7e0(local_res8);
        lVar20 = FUN_14227a0e0(uVar14,*(undefined8 *)(lVar6 + 0x298),DAT_146b2ff28,0,0,0x3f800000,1,
                               0xbf800000,0);
        if (lVar20 != 0) {
          uVar14 = FUN_1423ac7e0(local_res8);
          lVar20 = UAnimInstance::GetActiveInstanceForMontage(uVar14,lVar20);
          if (lVar20 != 0) {
            *(undefined1 *)(lVar20 + 0x1ad) = 1;
            FUN_14227cb60(lVar20);
          }
        }
      }
      local_48 = (longlong *)0x0;
      local_3c = 0;
      plVar10 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
      plVar13 = plVar7;
      if (plVar10 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
        iVar17 = (int)plVar8[1];
        plVar10 = plVar7;
        if (0 < iVar17) {
          do {
            lVar20 = *(longlong *)(*plVar8 + -8 + (longlong)(iVar17 - (int)plVar10) * 8);
            if (lVar20 != 0) {
              lVar12 = FVectorCurve::StaticStruct();
              for (lVar9 = *(longlong *)(lVar20 + 0x70); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 0x30)) {
                if (lVar9 == lVar12) {
                  iVar17 = *(int *)(lVar20 + 0x44);
                  iVar18 = (int)plVar7;
                  local_40 = iVar18 + 1;
                  if (local_3c < (int)local_40) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_48,plVar7);
                    plVar13 = local_48;
                  }
                  plVar7 = (longlong *)(ulonglong)local_40;
                  plVar13[iVar18] = iVar17 + param_1;
                  break;
                }
              }
            }
            iVar17 = (int)plVar8[1];
            uVar19 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar19;
          } while ((int)uVar19 < iVar17);
        }
        iVar18 = (int)plVar7;
      }
      uVar23 = 0;
      uVar25 = (ulonglong)((longlong)(plVar13 + iVar18) + (7 - (longlong)plVar13)) >> 3;
      if (plVar13 + iVar18 < plVar13) {
        uVar25 = 0;
      }
      plVar7 = plVar13;
      if (uVar25 != 0) {
LAB_142ca6bd0:
        lVar20 = *plVar7;
        if ((*(char *)(lVar20 + 400) != '\0') && (*(char *)(lVar6 + 0x290) != '\0')) {
          lVar9 = *(longlong *)(lVar20 + 0x188);
          if (*(int *)(lVar6 + 0x248) != *(int *)(lVar6 + 0x274)) {
            lVar12 = *(longlong *)(lVar6 + 0x280);
            if (*(longlong *)(lVar6 + 0x280) == 0) {
              lVar12 = lVar6 + 0x278;
            }
            iVar17 = *(int *)(lVar12 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                                       (longlong)*(int *)(lVar6 + 0x288) - 1U) * 4);
            if (iVar17 != -1) {
              lVar12 = *(longlong *)(lVar6 + 0x240);
              iVar18 = iVar17;
              do {
                if (*(longlong *)(lVar12 + (longlong)iVar18 * 0x18) == lVar9) {
                  if (iVar18 != -1) {
                    if ((*(int *)(lVar6 + 0x248) == *(int *)(lVar6 + 0x274)) || (iVar17 == -1))
                    goto LAB_142ca6db9;
                    goto LAB_142ca6da0;
                  }
                  break;
                }
                iVar18 = *(int *)(lVar12 + 0x10 + (longlong)iVar18 * 0x18);
              } while (iVar18 != -1);
            }
          }
        }
        goto LAB_142ca6c60;
      }
LAB_142ca6c70:
      if (plVar13 != (longlong *)0x0) {
        FMemory::Free(plVar13);
      }
      if (local_68 != 0) {
        FMemory::Free(local_68);
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  iVar17 = *(int *)(param_1 + 0x450);
  plVar13 = (longlong *)(param_1 + 0x458);
  iVar18 = *(int *)(param_1 + 0x460);
  if (iVar18 != 0) {
    lVar6 = *plVar13 + 8;
    do {
      FUN_140590de0(lVar6);
      lVar6 = lVar6 + 0x18;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) != iVar17) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar13,iVar17);
  }
  puVar22 = *(undefined8 **)(param_1 + 0x448);
  puVar16 = puVar22 + *(int *)(param_1 + 0x450);
  for (; puVar22 != puVar16; puVar22 = puVar22 + 1) {
    iVar17 = *(int *)(param_1 + 0x460);
    lVar6 = (longlong)iVar17;
    uVar14 = *puVar22;
    *(int *)(param_1 + 0x460) = iVar17 + 1;
    if (*(int *)(param_1 + 0x464) < iVar17 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar13,iVar17);
    }
    lVar20 = *plVar13;
    *(undefined8 *)(lVar20 + 8 + lVar6 * 0x18) = 0;
    *(undefined8 *)(lVar20 + 0x10 + lVar6 * 0x18) = 0;
    FUN_142ca3fb0(*plVar13 + lVar6 * 0x18,param_1,uVar14);
  }
  FUN_142258420(param_1);
  FUN_1422ad9c0(param_1 + 0x4e0,param_1);
  return;
  while (iVar17 = *(int *)(lVar1 + 0x10), iVar17 != -1) {
LAB_142ca6da0:
    lVar1 = lVar12 + (longlong)iVar17 * 0x18;
    if (*(longlong *)(lVar12 + (longlong)iVar17 * 0x18) == lVar9) {
      if (iVar17 != -1) {
        *(undefined8 *)(lVar20 + 0x140) = *(undefined8 *)(lVar1 + 8);
        goto LAB_142ca6c60;
      }
      break;
    }
  }
LAB_142ca6db9:
  *(undefined8 *)(lVar20 + 0x140) = _DAT_00000008;
LAB_142ca6c60:
  uVar23 = uVar23 + 1;
  plVar7 = plVar7 + 1;
  if (uVar23 == uVar25) goto LAB_142ca6c70;
  goto LAB_142ca6bd0;
}



// FUNCTION 142ca6df0 FUN_142ca6df0 body=34 status=ok
// SIG undefined FUN_142ca6df0(void)

void FUN_142ca6df0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1422a69f0(param_1 + 0x4e0,param_1);
  return;
}



// FUNCTION 142ca6e20 FUN_142ca6e20 body=164 status=ok
// SIG undefined FUN_142ca6e20(void)

void FUN_142ca6e20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    uVar3 = FUN_142e27720();
    lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
    if (lVar4 != 0) {
      FUN_142c6e640(lVar4,&local_18,param_3);
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x70))();
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
    }
  }
  return;
}



// FUNCTION 142ca6ed0 FUN_142ca6ed0 body=122 status=ok
// SIG undefined FUN_142ca6ed0(void)

void FUN_142ca6ed0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x118);
  }
  if (lVar4 != 0) {
    if ((*(char *)(param_1 + 0x44) != '\0') && (cVar1 = FUN_1405ca9b0(param_2), cVar1 == '\0')) {
      return;
    }
    uVar2 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if ((plVar3 == (longlong *)0x0) &&
       (plVar3 = (longlong *)FNavigationSystem::FindPathFollowingAgentForActor(lVar4),
       plVar3 == (longlong *)0x0)) {
      return;
    }
    (**(code **)(*plVar3 + 0x10))
              (plVar3,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 142ca6f50 FUN_142ca6f50 body=138 status=ok
// SIG undefined FUN_142ca6f50(void)

void FUN_142ca6f50(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x118);
  }
  if (lVar4 != 0) {
    if ((*(char *)(param_1 + 0x44) != '\0') && (cVar2 = FUN_1405ca9b0(param_2), cVar2 == '\0')) {
      return;
    }
    lVar3 = AHeoCon::GetPrivateStaticClass();
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
      ATTLFlareWeapon::ExtraActionOnDamaged_Implementation
                (lVar4,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined4 *)(param_1 + 0x40));
    }
  }
  return;
}



// FUNCTION 142ca6fe0 FUN_142ca6fe0 body=105 status=ok
// SIG undefined FUN_142ca6fe0(void)

void FUN_142ca6fe0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar3 != (longlong *)0x0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000142ca703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x9a0))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142ca7050 FUN_142ca7050 body=176 status=ok
// SIG undefined FUN_142ca7050(void)

void FUN_142ca7050(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (param_2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar3 != (longlong *)0x0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      (**(code **)(*plVar3 + 0x9a8))
                (plVar3,local_98,*(undefined4 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x3c),0);
    }
  }
  return;
}



// FUNCTION 142ca7100 FUN_142ca7100 body=169 status=ok
// SIG undefined FUN_142ca7100(void)

void FUN_142ca7100(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        if (*(char *)(param_2 + 0x1050) != '\0') {
          *(undefined1 *)(param_2 + 0x1050) = 0;
        }
      }
      else if ((undefined8 *)(param_1 + 0x40) != (undefined8 *)(param_2 + 0x1020)) {
        if (*(char *)(param_2 + 0x1050) != '\0') {
          *(undefined1 *)(param_2 + 0x1050) = 0;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(param_2 + 0x1020) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_2 + 0x1028) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_2 + 0x1030) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_2 + 0x1038) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_2 + 0x1040) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_2 + 0x1048) = uVar1;
        *(undefined1 *)(param_2 + 0x1050) = 1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 142ca71b0 FUN_142ca71b0 body=220 status=ok
// SIG undefined FUN_142ca71b0(void)

void FUN_142ca71b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_142e5c1e0();
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
      plVar3 = *(longlong **)(param_2 + 0xf88);
      plVar4 = plVar3 + (longlong)*(int *)(param_2 + 0xf90) * 0x14;
      if (plVar3 != plVar4) {
        do {
          if ((*plVar3 == *(longlong *)(param_1 + 0x40)) &&
             (plVar3[1] == *(longlong *)(param_1 + 0x48))) {
            if (*(char *)((longlong)plVar3 + 0x21) == '\0') {
              *(undefined1 *)((longlong)plVar3 + 0x21) = 1;
            }
            else if (*(char *)((longlong)plVar3 + 0x21) == '\x01') {
              *(undefined1 *)((longlong)plVar3 + 0x21) = 2;
            }
            if ((char)plVar3[4] == '\x03') {
              *(undefined2 *)((longlong)plVar3 + 0x21) = 0;
            }
            break;
          }
          plVar3 = plVar3 + 0x14;
        } while (plVar3 != plVar4);
      }
    }
  }
  FUN_142c7a1c0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142ca7290 FUN_142ca7290 body=107 status=ok
// SIG undefined FUN_142ca7290(void)

void FUN_142ca7290(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (param_2 != 0)) &&
     (plVar1 = *(longlong **)(param_2 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar2 = UScrollBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142d6f760(lVar3 + 0x3d0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 142ca7300 FUN_142ca7300 body=227 status=ok
// SIG undefined FUN_142ca7300(void)

void FUN_142ca7300(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  thunk_FUN_1428f9800();
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x118), lVar3 != 0)) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
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
      lVar3 = *(longlong *)(lVar3 + 0x900);
      goto LAB_142ca736c;
    }
  }
  lVar3 = 0;
LAB_142ca736c:
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x2582) = 1;
  }
  if (((*(char *)(param_1 + 0x34) != '\0') && (param_2 != 0)) &&
     (lVar3 = *(longlong *)(param_2 + 0xa48), lVar3 != 0)) {
    lVar2 = UMonkeyAnim::StaticClass();
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
      FUN_142cd0240(lVar3,*(undefined4 *)(param_1 + 0x30),0);
    }
  }
  return;
}



// FUNCTION 142ca73f0 FUN_142ca73f0 body=1018 status=ok
// SIG undefined FUN_142ca73f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ca73f0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8;
  longlong *local_d8;
  undefined1 local_d0 [20];
  undefined4 local_bc;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar11 = (longlong *)0x0;
  local_f8[0] = (longlong *)((ulonglong)local_f8[0] & 0xffffffff00000000);
  if ((*(byte *)(param_1 + 0x34) & 3) == 0) {
    return;
  }
  plVar8 = plVar11;
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  local_b0 = FUN_142e27720();
  lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,local_b0);
  if (lVar6 == 0) {
    return;
  }
  lVar6 = FUN_142c6edf0(lVar6,param_1 + 0x40);
  if (lVar6 == 0) {
    bVar4 = false;
    bVar3 = true;
    local_e8 = (longlong *)0x0;
    local_108 = plVar11;
    local_100 = plVar11;
  }
  else {
    local_108 = *(longlong **)(lVar6 + 8);
    bVar4 = true;
    bVar3 = false;
    local_100 = *(longlong **)(lVar6 + 0x10);
    local_d8 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
  }
  plVar8 = local_e8;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (local_e8 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_e8 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  plVar8 = local_d8;
  if ((bVar4) && (local_d8 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_d8 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  plVar8 = local_100;
  if (local_108 == (longlong *)0x0) goto LAB_142ca777a;
  plVar12 = plVar11;
  if (param_2 != 0) {
    plVar12 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar12 == (longlong *)0x0) goto LAB_142ca777a;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  local_f8[0] = (longlong *)0x0;
  FUN_142c71eb0(local_108,param_1 + 0x38,local_f8);
  plVar9 = local_f8[0];
  if (local_f8[0] == (longlong *)0x0) {
LAB_142ca760c:
    plVar9 = plVar11;
  }
  else {
    lVar7 = FUN_1428dfc70();
    lVar6 = plVar9[2];
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142ca760c;
  }
  plVar10 = local_100;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_100;
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      plVar8 = local_100;
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    plVar10 = plVar9;
    if (*(char *)(param_1 + 0x30) != '\x01') {
      plVar10 = plVar12;
      plVar12 = plVar9;
    }
    if (plVar10 != (longlong *)0x0) {
      lVar6 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar11 = (longlong *)plVar10[0x120];
      }
    }
    if (plVar11 != (longlong *)0x0) {
      uVar5 = *(uint *)(param_1 + 0x34);
      if ((uVar5 & 1) != 0) {
        FUN_142cdd100(local_d0);
        FWeakObjectPtr::operator=(local_d0,plVar12);
        local_bc = param_4;
        FUN_142d008a0(plVar11,local_d0);
        uVar5 = *(uint *)(param_1 + 0x34);
      }
      if ((uVar5 & 2) != 0) {
        local_98 = _DAT_1468b5d90;
        local_74 = 0x41200000;
        local_6c = 0;
        local_90 = DAT_1468b5d98;
        local_a0 = *(undefined8 *)(param_1 + 0x48);
        local_60 = 0x40000000;
        local_70 = 0xbf800000;
        local_80 = 0;
        local_78 = 0;
        local_68 = 0;
        local_64 = 0;
        local_5c = 2;
        local_a8 = plVar12;
        local_7c = param_4;
        FUN_142d00b40(plVar11,&local_a8);
      }
    }
  }
LAB_142ca777a:
  plVar11 = local_100;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return;
}



// FUNCTION 142ca77f0 FUN_142ca77f0 body=209 status=ok
// SIG undefined FUN_142ca77f0(void)

void FUN_142ca77f0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_142e5c1e0();
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
      plVar3 = *(longlong **)(param_2 + 0xf88);
      plVar4 = plVar3 + (longlong)*(int *)(param_2 + 0xf90) * 0x14;
      if (plVar3 != plVar4) {
        do {
          if ((*plVar3 == *(longlong *)(param_1 + 0x38)) &&
             (plVar3[1] == *(longlong *)(param_1 + 0x40))) {
            if ((char)plVar3[4] == '\x03') {
              *(undefined1 *)((longlong)plVar3 + 0x22) = 0;
            }
            *(undefined1 *)((longlong)plVar3 + 0x21) = 1;
            break;
          }
          plVar3 = plVar3 + 0x14;
        } while (plVar3 != plVar4);
      }
    }
  }
  FUN_142c7a380(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142ca78d0 FUN_142ca78d0 body=91 status=ok
// SIG undefined FUN_142ca78d0(void)

void FUN_142ca78d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (param_2 != 0)) &&
     (plVar1 = *(longlong **)(param_2 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar2 = UScrollBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142d5ac30(lVar3 + 0x3d0,*(undefined8 *)(param_3 + 0x18));
    }
  }
  return;
}



// FUNCTION 142ca7930 FUN_142ca7930 body=227 status=ok
// SIG undefined FUN_142ca7930(void)

void FUN_142ca7930(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  thunk_FUN_1428f9860();
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x118), lVar3 != 0)) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
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
      lVar3 = *(longlong *)(lVar3 + 0x900);
      goto LAB_142ca799c;
    }
  }
  lVar3 = 0;
LAB_142ca799c:
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x2582) = 0;
  }
  if (((*(char *)(param_1 + 0x34) != '\0') && (param_2 != 0)) &&
     (lVar3 = *(longlong *)(param_2 + 0xa48), lVar3 != 0)) {
    lVar2 = UMonkeyAnim::StaticClass();
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
      FUN_142cd0240(lVar3,*(undefined4 *)(param_1 + 0x30),
                    CONCAT71((int7)((ulonglong)(lVar2 + 0x88) >> 8),1));
    }
  }
  return;
}



// FUNCTION 142ca7a20 FUN_142ca7a20 body=146 status=ok
// SIG undefined FUN_142ca7a20(void)

void FUN_142ca7a20(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x118), lVar4 != 0)) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
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
      lVar4 = *(longlong *)(lVar4 + 0x900);
      goto LAB_142ca7a7f;
    }
  }
  lVar4 = 0;
LAB_142ca7a7f:
  if (lVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x34);
    if ((uVar2 & 1) != 0) {
      FUN_142d010e0(lVar4,0,1);
      uVar2 = *(uint *)(param_1 + 0x34);
    }
    if ((uVar2 & 2) != 0) {
      thunk_FUN_142cfe5a0(lVar4);
    }
  }
  return;
}



// FUNCTION 142ca7ac0 FUN_142ca7ac0 body=199 status=ok
// SIG undefined FUN_142ca7ac0(void)

void FUN_142ca7ac0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_142e5c1e0();
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
      plVar3 = *(longlong **)(param_2 + 0xf88);
      plVar4 = plVar3 + (longlong)*(int *)(param_2 + 0xf90) * 0x14;
      if (plVar3 != plVar4) {
        do {
          if ((*plVar3 == *(longlong *)(param_1 + 0x38)) &&
             (plVar3[1] == *(longlong *)(param_1 + 0x40))) {
            *(undefined1 *)((longlong)plVar3 + 0x21) = 2;
            break;
          }
          plVar3 = plVar3 + 0x14;
        } while (plVar3 != plVar4);
      }
    }
  }
  FUN_142c7a4e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142ca7b90 FUN_142ca7b90 body=71 status=ok
// SIG undefined FUN_142ca7b90(void)

void FUN_142ca7b90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_142dafbc0(*(longlong *)(param_1 + 0x40) + 0x8b0,&DAT_146b30080);
    FUN_142dafbc0(*(longlong *)(param_1 + 0x40) + 0x948,&DAT_146b30080);
    return;
  }
  return;
}



// FUNCTION 142ca7be0 FUN_142ca7be0 body=66 status=ok
// SIG undefined FUN_142ca7be0(void)

void FUN_142ca7be0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_142cf49e0(*(longlong *)(param_1 + 0x38) + 0x2580,*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x220);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x8ac) = 1;
    }
  }
  return;
}



// FUNCTION 142ca7c30 FUN_142ca7c30 body=71 status=ok
// SIG undefined FUN_142ca7c30(void)

void FUN_142ca7c30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x40) + 0x8b0,&DAT_146b30080);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x40) + 0x948,&DAT_146b30080);
    return;
  }
  return;
}



// FUNCTION 142ca7c80 FUN_142ca7c80 body=66 status=ok
// SIG undefined FUN_142ca7c80(void)

void FUN_142ca7c80(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_142cf4a80(*(longlong *)(param_1 + 0x38) + 0x2580,*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x220);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x8ac) = 0;
    }
  }
  return;
}



// FUNCTION 142ca7cd0 FUN_142ca7cd0 body=773 status=ok
// SIG undefined FUN_142ca7cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca7cd0(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  uint local_70 [2];
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (DAT_146b30d20 == 0) {
    return;
  }
  DAT_146b3000c = DAT_146b3000c + 1;
  FUN_142ca3900();
joined_r0x000142ca7d0b:
  if (DAT_146b30d20 < 1) {
    return;
  }
  puVar10 = DAT_146b30d18;
  if (DAT_146b30d18 == (uint *)0x0) {
    puVar10 = (uint *)&DAT_146b30118;
  }
  if (DAT_146b3000c < *puVar10) {
    return;
  }
  local_70[0] = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_142c8aa00(&DAT_146b30118,local_70,local_78,0);
  plVar12 = plStack_60;
  lVar11 = local_68;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plStack_60[1];
    bVar14 = iVar7 == 0;
    if (bVar14) {
      *(int *)(plStack_60 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar14) {
      LOCK();
      bVar14 = iVar7 == (int)plStack_60[1];
      if (bVar14) {
        *(int *)(plStack_60 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar14) {
        if (local_68 != 0) {
          uVar9 = FWeakObjectPtr::Get(local_68 + 0x68);
          local_50 = FWeakObjectPtr::Get(lVar11 + 0x60);
          local_48 = uVar9;
          FUN_142ca8600(lVar11,&local_50,*(undefined1 *)(lVar11 + 0x24),
                        *(undefined4 *)(lVar11 + 0x28));
        }
        plVar6 = plStack_60;
        LOCK();
        plVar12 = plVar12 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar12 = plStack_60;
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          plVar12 = plStack_60;
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plStack_60[1];
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(plStack_60 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if (local_68 != 0) goto code_r0x000142ca7dd6;
  goto LAB_142ca7eda;
code_r0x000142ca7dd6:
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar12[1];
    if (iVar7 == 0) {
      *(int *)(plVar12 + 1) = 0;
      iVar7 = 0;
    }
    iVar8 = DAT_146b30d20;
    UNLOCK();
    plVar12 = plStack_60;
    if (0 < iVar7) {
      lVar11 = (longlong)DAT_146b30d20;
      uVar13 = DAT_146b3000c + 5;
      DAT_146b30d20 = DAT_146b30d20 + 1;
      local_70[0] = uVar13;
      if (DAT_146b30d24 < DAT_146b30d20) {
        FUN_142caa010(&DAT_146b30118,iVar8);
      }
      puVar10 = DAT_146b30d18;
      if (DAT_146b30d18 == (uint *)0x0) {
        puVar10 = (uint *)&DAT_146b30118;
      }
      puVar10[lVar11 * 6] = uVar13;
      *(longlong *)(puVar10 + lVar11 * 6 + 2) = local_68;
      *(longlong **)(puVar10 + lVar11 * 6 + 4) = plStack_60;
      LOCK();
      *(int *)((longlong)plStack_60 + 0xc) = *(int *)((longlong)plStack_60 + 0xc) + 1;
      UNLOCK();
      iVar7 = DAT_146b30d20 + -1;
      puVar10 = DAT_146b30d18;
      if (DAT_146b30d18 == (uint *)0x0) {
        puVar10 = (uint *)&DAT_146b30118;
      }
      while (plVar12 = plStack_60, 0 < iVar7) {
        iVar8 = (iVar7 + -1) / 2;
        puVar2 = puVar10 + (longlong)iVar8 * 6;
        puVar3 = puVar10 + (longlong)iVar7 * 6;
        if (*puVar2 <= puVar10[(longlong)iVar7 * 6]) break;
        iVar7 = iVar8;
        if (puVar3 != puVar2) {
          local_40 = *(undefined8 *)puVar3;
          uStack_38 = *(undefined8 *)(puVar3 + 2);
          local_30 = *(undefined8 *)(puVar3 + 4);
          uVar13 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          *puVar3 = *puVar2;
          puVar3[1] = uVar13;
          puVar3[2] = uVar4;
          puVar3[3] = uVar5;
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *(undefined8 *)puVar2 = local_40;
          *(undefined8 *)(puVar2 + 2) = uStack_38;
          *(undefined8 *)(puVar2 + 4) = local_30;
        }
      }
    }
LAB_142ca7eda:
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  goto joined_r0x000142ca7d0b;
}



// FUNCTION 142ca7fe0 FUN_142ca7fe0 body=66 status=ok
// SIG undefined FUN_142ca7fe0(void)

void FUN_142ca7fe0(longlong param_1)

{
  int iVar1;
  
  FUN_1423b5140();
  iVar1 = FUN_14233f450(param_1);
  if ((iVar1 == 3) && (*(longlong *)(param_1 + 0xf38) != 0)) {
    FUN_142350b20(param_1,1);
    FUN_142c95f90(param_1);
    return;
  }
  return;
}



// FUNCTION 142ca8030 FUN_142ca8030 body=75 status=ok
// SIG undefined FUN_142ca8030(void)

void FUN_142ca8030(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    FUN_142d57c10(*(longlong *)(param_1 + 0xf38),param_1 + 0xf50,param_1 + 0xf40);
    FUN_142c90ea0(param_1,*(char *)(param_1 + 0xf52) != *(char *)(param_1 + 0xf53));
    return;
  }
  return;
}



// FUNCTION 142ca8080 FUN_142ca8080 body=385 status=ok
// SIG undefined FUN_142ca8080(void)

void FUN_142ca8080(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  lVar2 = UInputDeviceManager::GetInstance();
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(lVar2 + 0x28,0);
  uVar7 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0xfe8);
  uVar10 = (longlong)*(int *)(param_1 + 0xff0) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0xff0) < puVar9) {
    uVar10 = uVar7;
  }
  uVar8 = uVar7;
  if (uVar10 != 0) {
    do {
      local_res18[0] = *puVar9;
      if (DAT_146b2ff20 == 0) {
        uVar3 = GetTransientPackage();
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res10 = 0;
        uVar4 = FUN_142e5e850();
        DAT_146b2ff20 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
        uVar6 = *(uint *)(DAT_146b2ff20 + 0xc);
        uVar5 = uVar7;
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar1 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar1 = uVar1 - 0x10000;
          }
          uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar1 * 0x18;
        }
        *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x40000000;
      }
      FUN_1421a37c0(DAT_146b2ff20 + 0x28,&local_res8,local_res18);
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  lVar2 = UInputDeviceManager::GetInstance();
  QueryPerformanceCounter(&local_res8);
  *(double *)(lVar2 + 0x78) =
       ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
  return;
}



// FUNCTION 142ca8230 FUN_142ca8230 body=117 status=ok
// SIG undefined FUN_142ca8230(void)

void FUN_142ca8230(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  FUN_1417931d0();
  puVar1 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x38,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_142e62ff0();
  uVar2 = FUN_141799c90(uVar2,0,puVar3,0,0,0,1);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ca82b0 FUN_142ca82b0 body=244 status=ok
// SIG undefined FUN_142ca82b0(void)

void FUN_142ca82b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  FUN_1422d2aa0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar3 = FUN_14244d3d0();
    plVar1 = (longlong *)(lVar3 + 0xd8);
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar4[1] = (longlong)FUN_142c97c60;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9f0;
    }
    if (local_18 != plVar1) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(lVar3 + 0xe0) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar5 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar5;
          }
          *(undefined4 *)(lVar3 + 0xe0) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar3 = FMemory::Realloc(plVar4,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142ca83b0 FUN_142ca83b0 body=33 status=ok
// SIG undefined FUN_142ca83b0(void)

void FUN_142ca83b0(longlong param_1)

{
  UObject::PostLoad();
  if (0 < *(int *)(param_1 + 0xf8)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



// FUNCTION 142ca83e0 FUN_142ca83e0 body=50 status=ok
// SIG undefined FUN_142ca83e0(void)

void FUN_142ca83e0(longlong param_1)

{
  FUN_1423b6980();
  if (*(longlong *)(param_1 + 4000) != 0) {
    *(longlong *)(param_1 + 0xfb0) = *(longlong *)(param_1 + 4000);
    *(undefined8 *)(param_1 + 4000) = 0;
  }
  return;
}



// FUNCTION 142ca8420 FUN_142ca8420 body=437 status=ok
// SIG undefined FUN_142ca8420(void)

void FUN_142ca8420(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_res18 [16];
  
  FUN_14234a5b0();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar6 < DAT_146b30db0) {
    _Init_thread_header(&DAT_146b30db0);
    if (DAT_146b30db0 == -1) {
      uVar2 = FUN_142e5c1e0();
      FUN_142e5c1e0();
      puVar3 = (undefined8 *)FName::FName(local_res18,L"BoneModifyProfileData",1);
      DAT_146b30da8 = FUN_1405dfb00(uVar2,*puVar3);
      _Init_thread_footer(&DAT_146b30db0);
    }
  }
  iVar5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(DAT_146b30da8 + 0x30)) {
    do {
      if ((*(char *)(param_1 + 0xfa8) == '\0') || (*(int *)(param_1 + 0xfc0) < 1)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      (**(code **)*param_2)(param_2,*(short *)(DAT_146b30da8 + 0x40) + (short)iVar4,uVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b30da8 + 0x30));
  }
  if (*piVar6 < DAT_146b30dc0) {
    _Init_thread_header(&DAT_146b30dc0);
    if (DAT_146b30dc0 == -1) {
      uVar2 = FUN_142e5c1e0();
      FUN_142e5c1e0();
      puVar3 = (undefined8 *)FName::FName(local_res18,L"GlobalBMPRepArray",1);
      DAT_146b30db8 = FUN_1405dfb00(uVar2,*puVar3);
      _Init_thread_footer(&DAT_146b30dc0);
    }
  }
  if (0 < *(int *)(DAT_146b30db8 + 0x30)) {
    do {
      puVar3 = (undefined8 *)*param_2;
      uVar1 = FUN_142ca5260(param_1);
      (*(code *)*puVar3)(param_2,*(short *)(DAT_146b30db8 + 0x40) + (short)iVar5,uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(DAT_146b30db8 + 0x30));
  }
  return;
}



// FUNCTION 142ca8600 FUN_142ca8600 body=904 status=ok
// SIG undefined FUN_142ca8600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ca8600(longlong param_1,longlong *param_2,char param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  char local_b8;
  undefined1 local_b7 [15];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  longlong local_88;
  float *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_80 = (float *)(param_1 + 0x28);
  local_b8 = '\x01';
  if ((*(char *)(param_1 + 0x24) != param_3) || (1e-08 < ABS(*local_80 - param_4))) {
    *local_80 = param_4;
    *(char *)(param_1 + 0x24) = param_3;
  }
  else {
    local_b8 = '\0';
  }
  local_88 = FWeakObjectPtr::Get(param_1 + 0x18);
  if ((local_88 == 0) || (*(longlong *)(local_88 + 0x38) == 0)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x5c)) {
      FUN_142caa330(param_1 + 0x30,0);
    }
  }
  else {
    local_a8 = *param_2;
    uStack_a0 = (undefined4)param_2[1];
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_142caa8e0(&local_58,local_88,&local_a8);
    uVar17 = 0;
    iVar12 = *(int *)(param_1 + 0x58) + -1;
    if (-1 < iVar12) {
      lVar9 = param_1 + 0x30;
      lVar11 = (longlong)iVar12 * 0x1c;
      lVar16 = lVar11;
      do {
        lVar7 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar7 = lVar9;
        }
        local_a8 = lVar11;
        uVar5 = FWeakObjectPtr::Get(lVar7 + lVar16);
        cVar4 = FUN_142cbd8b0(&local_58,uVar5);
        if (cVar4 == '\0') {
          lVar7 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar7 = lVar9;
          }
          (**(code **)(**(longlong **)(local_88 + 0x38) + 0x2c0))
                    (*(longlong **)(local_88 + 0x38),uVar5,lVar7 + 8 + lVar16);
          iVar14 = *(int *)(param_1 + 0x58);
          iVar8 = (iVar14 - iVar12) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x50);
            if (*(longlong *)(param_1 + 0x50) == 0) {
              lVar7 = lVar9;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar7 + lVar16),(void *)((longlong)(iVar14 - iVar8) * 0x1c + lVar7),
                       (longlong)iVar8 * 0x1c);
            iVar14 = *(int *)(param_1 + 0x58);
          }
          *(int *)(param_1 + 0x58) = iVar14 + -1;
        }
        else {
          if (local_b8 != '\0') {
            lVar11 = *(longlong *)(param_1 + 0x50);
            if (*(longlong *)(param_1 + 0x50) == 0) {
              lVar11 = lVar9;
            }
            local_c8 = local_b7;
            local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,*local_80);
            local_d8 = (float)CONCAT31(local_d8._1_3_,*(undefined1 *)(param_1 + 0x24));
            puVar6 = (undefined4 *)
                     (**(code **)(**(longlong **)(local_88 + 0x38) + 0x2b8))
                               (*(longlong **)(local_88 + 0x38),&local_78,uVar5,lVar11 + 8 + lVar16)
            ;
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            puVar10 = (undefined4 *)(local_a8 + 8 + lVar11);
            *puVar10 = *puVar6;
            puVar10[1] = uVar1;
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            *(undefined4 *)(local_a8 + 0x18 + lVar11) = puVar6[4];
            lVar11 = local_a8;
          }
          FUN_142cccb70(&local_58,uVar5);
        }
        lVar11 = lVar11 + -0x1c;
        lVar16 = lVar16 + -0x1c;
        iVar12 = iVar12 + -1;
        local_a8 = lVar11;
      } while (-1 < iVar12);
    }
    puVar13 = &local_58;
    if (local_50 != (undefined8 *)0x0) {
      puVar13 = local_50;
    }
    uVar15 = (longlong)local_48 & 0x1fffffffffffffff;
    if (puVar13 + local_48 < puVar13) {
      uVar15 = uVar17;
    }
    if (uVar15 != 0) {
      do {
        local_d0 = local_b7;
        uVar5 = *puVar13;
        local_d8 = *local_80;
        (**(code **)(**(longlong **)(local_88 + 0x38) + 0x2b0))
                  (*(longlong **)(local_88 + 0x38),&local_a8,uVar5,*(undefined1 *)(param_1 + 0x24));
        FWeakObjectPtr::operator=(&local_78,uVar5);
        iVar12 = *(int *)(param_1 + 0x58);
        local_60 = local_98;
        local_70 = (undefined4)local_a8;
        uStack_6c = local_a8._4_4_;
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
        *(int *)(param_1 + 0x58) = iVar12 + 1;
        if (*(int *)(param_1 + 0x5c) < iVar12 + 1) {
          FUN_142ca9f70(param_1 + 0x30,iVar12);
        }
        lVar9 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar9 = param_1 + 0x30;
        }
        puVar10 = (undefined4 *)(lVar9 + (longlong)iVar12 * 0x1c);
        *puVar10 = local_78;
        puVar10[1] = local_74;
        puVar10[2] = local_70;
        puVar10[3] = uStack_6c;
        puVar10[4] = uStack_68;
        puVar10[5] = uStack_64;
        puVar10[6] = local_60;
        cVar4 = FUN_1407c3030(&local_a8);
        if (cVar4 != '\0') {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
        puVar13 = puVar13 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar15);
    }
    if (local_50 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ca8990 FUN_142ca8990 body=102 status=ok
// SIG undefined FUN_142ca8990(void)

void FUN_142ca8990(longlong param_1,undefined8 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FWeakObjectPtr::operator=(&local_18,*param_2);
  FWeakObjectPtr::operator=(&local_10,param_2[1]);
  *(undefined4 *)(param_1 + 0x60) = local_18;
  *(undefined4 *)(param_1 + 100) = local_14;
  *(undefined4 *)(param_1 + 0x68) = local_10;
  *(undefined4 *)(param_1 + 0x6c) = local_c;
  FUN_142ca8600(param_1,param_2,*(undefined1 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 142ca8a00 FUN_142ca8a00 body=126 status=ok
// SIG undefined FUN_142ca8a00(void)

void FUN_142ca8a00(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FWeakObjectPtr::operator=(&local_28,*param_2);
  FWeakObjectPtr::operator=(&local_20,param_2[1]);
  *(undefined4 *)(param_1 + 0x60) = local_28;
  *(undefined4 *)(param_1 + 100) = local_24;
  *(undefined4 *)(param_1 + 0x68) = local_20;
  *(undefined4 *)(param_1 + 0x6c) = local_1c;
  FUN_142ca8600(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142ca8a80 FUN_142ca8a80 body=53 status=ok
// SIG undefined FUN_142ca8a80(void)

undefined8 FUN_142ca8a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (undefined4)param_3;
  uStack_10 = 0;
  uVar1 = (undefined4)local_18;
  local_18 = param_3;
  FUN_142ca8ac0(uVar1,param_2,&local_18);
  return param_1;
}



// FUNCTION 142ca8ac0 FUN_142ca8ac0 body=736 status=ok
// SIG undefined FUN_142ca8ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142ca8ac0(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = FWeakObjectPtr::Get(param_2);
  puVar1 = (undefined4 *)(param_2 + 8);
  if (*(int *)(param_2 + 0x28) < 1) {
    local_c8 = *param_3;
    uStack_c0 = (undefined4)param_3[1];
    uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_142c94ae0(param_1,local_b8,&local_c8,puVar1);
  }
  else if ((local_b8 == 0) || (*(longlong *)(local_b8 + 0x38) == 0)) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    FWeakObjectPtr::operator=(param_1 + 2,0);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
  }
  else {
    FWeakObjectPtr::operator=(&local_90,local_b8);
    local_88 = *puVar1;
    local_c8 = *param_3;
    uStack_c0 = (undefined4)param_3[1];
    uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar11 = 0;
    local_84 = *(undefined4 *)(param_2 + 0xc);
    local_80 = *(undefined8 *)(param_2 + 0x10);
    local_70 = (undefined1 *)0x0;
    local_68 = 0;
    FUN_142caa8e0(&local_60,local_b8,&local_c8);
    local_b0 = &local_60;
    local_a8 = &local_90;
    local_a0 = &local_b8;
    lVar8 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar8 = param_2 + 0x18;
    }
    lVar2 = lVar8 + (longlong)*(int *)(param_2 + 0x28) * 8;
    local_98 = puVar1;
    for (; lVar8 != lVar2; lVar8 = lVar8 + 8) {
      lVar6 = FWeakObjectPtr::Get(lVar8);
      if (lVar6 != 0) {
        local_c8 = lVar6;
        FUN_142c95a40(&local_b0,&local_c8);
      }
    }
    plVar9 = &local_60;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    uVar10 = (longlong)local_50 & 0x1fffffffffffffff;
    if (plVar9 + local_50 < plVar9) {
      uVar10 = uVar11;
    }
    if (uVar10 != 0) {
      do {
        lVar8 = *plVar9;
        cVar4 = (**(code **)(**(longlong **)(local_b8 + 0x38) + 0x2d0))
                          (*(longlong **)(local_b8 + 0x38),lVar8,puVar1);
        if ((cVar4 != '\0') && (lVar8 != 0)) {
          FWeakObjectPtr::operator=(&local_c8,lVar8);
          uVar3 = local_68;
          lVar8 = (longlong)(int)local_68;
          iVar5 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar5);
          if (local_68._4_4_ < iVar5) {
            TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
            ::ResizeGrow(local_78,uVar3 & 0xffffffff);
          }
          puVar7 = local_78;
          if (local_70 != (undefined1 *)0x0) {
            puVar7 = local_70;
          }
          *(undefined4 *)(puVar7 + lVar8 * 8) = (undefined4)local_c8;
          *(undefined4 *)((longlong)(puVar7 + lVar8 * 8) + 4) = local_c8._4_4_;
        }
        plVar9 = plVar9 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    plVar9 = local_58;
    puVar7 = local_70;
    *param_1 = local_90;
    param_1[1] = local_8c;
    param_1[2] = local_88;
    param_1[3] = local_84;
    *(undefined8 *)(param_1 + 4) = local_80;
    *(undefined8 *)(param_1 + 8) = 0;
    if (local_70 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 6,local_78,8);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FMemory::Free();
      plVar9 = local_58;
      puVar7 = local_70;
    }
    *(undefined1 **)(param_1 + 8) = puVar7;
    param_1[10] = (int)local_68;
    param_1[0xb] = local_68._4_4_;
    local_68 = 0;
    local_70 = (undefined1 *)0x0;
    if ((plVar9 != (longlong *)0x0) && (FMemory::Free(plVar9), local_70 != (undefined1 *)0x0)) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142ca8da0 FUN_142ca8da0 body=350 status=ok
// SIG undefined FUN_142ca8da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ca8da0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  byte local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)uVar1;
  if ((uVar1 == *(uint *)(param_2 + 1)) && (iVar7 = 0, 0 < (int)uVar1)) {
    lVar8 = 0;
    lVar9 = 0;
    local_88 = param_3;
    do {
      lVar2 = *param_1;
      lVar3 = *param_2;
      uVar5 = FUN_142caac20(lVar2 + 0x10 + lVar9,local_68,local_88);
      uVar10 = FUN_142cc4350(uVar5,0);
      uVar6 = (ulonglong)local_60;
      switch(uVar6) {
      case 0:
        if (local_60 == 0) {
          local_60 = 0xff;
        }
        break;
      case 1:
        if (local_60 == 1) {
          local_60 = 0xff;
        }
        break;
      case 2:
        if (local_60 == 2) {
          local_60 = 0xff;
        }
        break;
      case 3:
      case 4:
        if (local_60 == 3) {
          local_60 = 0xff;
        }
        break;
      case 5:
        uVar6 = (ulonglong)local_60;
        if (local_60 == 3) {
          uVar6 = 0xff;
        }
        local_60 = (byte)uVar6;
      }
      local_78 = *param_4;
      uStack_74 = param_4[1];
      uStack_70 = param_4[2];
      uStack_6c = param_4[3];
      plVar4 = *(longlong **)(lVar8 + lVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar4 + 0x18))
                          (plVar4,&local_78,*(undefined1 *)(lVar9 + 8 + lVar2),uVar10);
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x48;
      lVar8 = lVar8 + 0x10;
    } while (iVar7 < (int)param_1[1]);
  }
  return uVar6;
}



// FUNCTION 142ca8f20 FUN_142ca8f20 body=23 status=ok
// SIG undefined FUN_142ca8f20(void)

void FUN_142ca8f20(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x18))();
  }
  return;
}



// FUNCTION 142ca8f40 FUN_142ca8f40 body=749 status=ok
// SIG undefined FUN_142ca8f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142ca8f40(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *_Src;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_1407c3030(param_4);
  if (cVar3 == '\0') {
    local_90 = param_7;
    local_98 = param_6;
    FUN_142c8e720(param_1,param_2,param_3,param_5);
  }
  else {
    cVar3 = FUN_1424869d0(param_4);
    if ((cVar3 == '\0') || (cVar3 = (**(code **)(*param_1 + 0x288))(param_1), cVar3 == '\0')) {
      uVar5 = param_4[1];
      *param_2 = *param_4;
      param_2[1] = uVar5;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_4 + 2);
    }
    else {
      FUN_142caaab0(param_1,&local_60,param_3);
      if (local_48 == '\0') {
        FUN_14246da50(param_2,0);
      }
      else {
        if ((*(byte *)(local_60 + 0x38) & 0x20) != 0) {
          (**(code **)(*param_1 + 0x2e8))(param_1,local_50);
        }
        lVar4 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_60 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_60 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (local_58 != 0)) {
          lVar4 = FUN_14294e020();
          if (*(longlong *)(local_60 + 0x70) == lVar4) {
            local_90 = param_7;
            local_98 = param_6;
            FUN_14248a390(local_58,param_2,param_4,param_5);
            return param_2;
          }
          lVar4 = FUN_14294e080();
          if (*(longlong *)(local_60 + 0x70) == lVar4) {
            local_90 = param_7;
            local_98 = param_6;
            FUN_14248a400(local_58,param_2,param_4,param_5);
            return param_2;
          }
        }
        else {
          lVar4 = FUN_142c8a890(&local_60);
          if (lVar4 != 0) {
            FUN_142cb2580(local_78,param_3);
            if (*(longlong *)(lVar4 + 0x30) != 0) {
              _Src = (undefined1 *)
                     FUN_142ca0820(*(longlong *)(lVar4 + 0x30),&local_60,lVar4,param_3);
              if (local_78 != _Src) {
                if (*(longlong *)(_Src + 8) == 0) {
                  _guard_xfg_dispatch_icall_nop(local_78,_Src,8);
                }
                if (local_70 != 0) {
                  FMemory::Free();
                }
                local_70 = *(longlong *)(_Src + 8);
                *(undefined8 *)(_Src + 8) = 0;
                local_68 = *(undefined4 *)(_Src + 0x10);
                local_64 = *(undefined4 *)(_Src + 0x14);
                *(undefined8 *)(_Src + 0x10) = 0;
              }
              if (local_58 != 0) {
                FMemory::Free();
              }
            }
            if (*(longlong **)(lVar4 + 0x38) == (longlong *)0x0) {
              FUN_14246da50(param_2,0);
            }
            else {
              lVar1 = **(longlong **)(lVar4 + 0x38);
              uVar5 = FUN_142cc1650(local_78);
              local_88 = param_7;
              local_90 = CONCAT44(local_90._4_4_,param_6);
              local_98 = CONCAT31(local_98._1_3_,param_5);
              (**(code **)(lVar1 + 0x2b8))(*(undefined8 *)(lVar4 + 0x38),param_2,uVar5,param_4);
            }
            if (local_70 == 0) {
              return param_2;
            }
            FMemory::Free();
            return param_2;
          }
        }
        FUN_14246da50(param_2,0);
      }
    }
  }
  return param_2;
}



// FUNCTION 142ca9230 FUN_142ca9230 body=169 status=ok
// SIG undefined FUN_142ca9230(void)

void FUN_142ca9230(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  longlong local_res10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar1 = param_1 + 0x30;
    }
    lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x1c + lVar1;
    local_res10 = param_1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x1c) {
      local_res8 = FWeakObjectPtr::Get(lVar1);
      FUN_142c95b00(&local_res10,&local_res8,lVar1 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_142caa330(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 142ca92e0 FUN_142ca92e0 body=176 status=ok
// SIG undefined FUN_142ca92e0(void)

void FUN_142ca92e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  longlong local_res10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar1 = param_1 + 0x30;
    }
    lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x1c + lVar1;
    local_res10 = param_1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x1c) {
      local_res8 = FWeakObjectPtr::Get(lVar1);
      FUN_142c95b00(&local_res10,&local_res8,lVar1 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_142caa330(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_142ca94c0(param_1);
  return;
}



// FUNCTION 142ca9390 FUN_142ca9390 body=275 status=ok
// SIG undefined FUN_142ca9390(void)

void FUN_142ca9390(longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xc00);
    if (*(longlong *)(param_1 + 0xc00) == 0) {
      lVar4 = param_1;
    }
    plVar5 = (longlong *)(lVar4 + 0x10 + (longlong)param_2 * 0x18);
    iVar6 = param_3;
    do {
      plVar2 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = *(int *)(param_1 + 0xc08);
    iVar3 = (iVar6 - param_2) - param_3;
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    if (iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar4 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + (longlong)param_2 * 0x18),
                 (void *)(lVar4 + (longlong)(iVar6 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
      iVar6 = *(int *)(param_1 + 0xc08);
    }
    *(int *)(param_1 + 0xc08) = iVar6 - param_3;
    if (param_4 != '\0') {
      FUN_142caa270(param_1);
    }
  }
  return;
}



// FUNCTION 142ca94b0 thunk_FUN_142ca96a0 body=5 status=ok
// SIG undefined thunk_FUN_142ca96a0(void)

undefined8 thunk_FUN_142ca96a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lStack_18;
  longlong *plStack_10;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x20))();
    }
  }
  plStack_10 = (longlong *)0x0;
  if (param_1 != &lStack_18) {
    *param_1 = 0;
    lStack_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&plStack_10);
    plVar5 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_10 + 8))(plStack_10,1);
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 142ca94c0 FUN_142ca94c0 body=476 status=ok
// SIG undefined FUN_142ca94c0(void)

void FUN_142ca94c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  
  puVar10 = DAT_146b30d18;
  if (DAT_146b30d18 == (undefined *)0x0) {
    puVar10 = &DAT_146b30118;
  }
  lVar5 = (longlong)DAT_146b30d20;
  puVar9 = puVar10;
  do {
    if (puVar9 == puVar10 + lVar5 * 0x18) {
      return;
    }
    plVar3 = *(longlong **)(puVar9 + 0x10);
    lVar8 = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (lVar8 = 0, !bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)plVar3[1];
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          lVar8 = *(longlong *)(puVar9 + 8);
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          break;
        }
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
    }
    if (lVar8 == param_1) {
      lVar5 = ((longlong)puVar9 - (longlong)puVar10) / 6 +
              ((longlong)puVar9 - (longlong)puVar10 >> 0x3f);
      iVar7 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
      if (iVar7 < 0) {
        return;
      }
      if (DAT_146b30d20 <= iVar7) {
        return;
      }
      puVar10 = DAT_146b30d18;
      if (DAT_146b30d18 == (undefined *)0x0) {
        puVar10 = &DAT_146b30118;
      }
      plVar3 = *(longlong **)(puVar10 + (longlong)iVar7 * 0x18 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar6 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      iVar6 = (DAT_146b30d20 - iVar7) + -1;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        puVar10 = DAT_146b30d18;
        if (DAT_146b30d18 == (undefined *)0x0) {
          puVar10 = &DAT_146b30118;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar10 + (longlong)iVar7 * 0x18,
                   puVar10 + (longlong)(DAT_146b30d20 - iVar6) * 0x18,(longlong)iVar6 * 0x18);
      }
      DAT_146b30114 = 1;
      DAT_146b30d20 = DAT_146b30d20 + -1;
      return;
    }
    puVar9 = puVar9 + 0x18;
  } while( true );
}



// FUNCTION 142ca96a0 FUN_142ca96a0 body=165 status=ok
// SIG undefined FUN_142ca96a0(void)

undefined8 FUN_142ca96a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x20))();
    }
  }
  local_10 = (longlong *)0x0;
  if (param_1 != &local_18) {
    *param_1 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 142ca9750 FUN_142ca9750 body=497 status=ok
// SIG undefined FUN_142ca9750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ca9750(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *_Src;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar4 = (**(code **)(*param_1 + 0x288))();
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  FUN_142caaab0(param_1,&local_40,param_2);
  if (local_28 != '\0') {
    if ((*(byte *)(local_40 + 0x38) & 0x20) != 0) {
      (**(code **)(*param_1 + 0x2e8))(param_1,local_30);
    }
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_40 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_40 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (local_38 != 0)) {
      lVar5 = FUN_14294e020();
      if (*(longlong *)(local_40 + 0x70) == lVar5) {
        bVar3 = FUN_14248ba60(local_38,param_3);
        return (ulonglong)bVar3;
      }
      lVar5 = FUN_14294e080();
      if (*(longlong *)(local_40 + 0x70) == lVar5) {
        bVar3 = FUN_14248bb70(local_38,param_3);
        return (ulonglong)bVar3;
      }
    }
    else {
      lVar5 = FUN_142c8a890(&local_40);
      if (lVar5 != 0) {
        FUN_142cb2580(local_58,param_2);
        if (*(longlong *)(lVar5 + 0x30) != 0) {
          _Src = (undefined1 *)FUN_142ca0820(*(longlong *)(lVar5 + 0x30),&local_40,lVar5,param_2);
          if (local_58 != _Src) {
            if (*(longlong *)(_Src + 8) == 0) {
              _guard_xfg_dispatch_icall_nop(local_58,_Src,8);
            }
            if (local_50 != 0) {
              FMemory::Free();
            }
            local_50 = *(longlong *)(_Src + 8);
            *(undefined8 *)(_Src + 8) = 0;
            local_48 = *(undefined4 *)(_Src + 0x10);
            local_44 = *(undefined4 *)(_Src + 0x14);
            *(undefined8 *)(_Src + 0x10) = 0;
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
        }
        uVar4 = 0;
        if (*(longlong **)(lVar5 + 0x38) != (longlong *)0x0) {
          lVar1 = **(longlong **)(lVar5 + 0x38);
          uVar6 = FUN_142cc1650(local_58);
          bVar3 = (**(code **)(lVar1 + 0x2c0))(*(undefined8 *)(lVar5 + 0x38),uVar6,param_3);
          uVar4 = (ulonglong)bVar3;
        }
        if (local_50 == 0) {
          return uVar4;
        }
        FMemory::Free();
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 142ca9950 FUN_142ca9950 body=30 status=ok
// SIG undefined FUN_142ca9950(void)

void FUN_142ca9950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_142ca96a0(param_3);
  *(bool *)param_4 = cVar1 == '\0';
  return;
}



// FUNCTION 142ca9970 FUN_142ca9970 body=207 status=ok
// SIG undefined FUN_142ca9970(void)

void FUN_142ca9970(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *param_1;
  lVar7 = (longlong)(int)param_1[1] * 0x10 + lVar5;
  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x10) {
    FUN_142ca96a0(lVar5);
  }
  if ((param_2 == '\0') && (-1 < *(int *)((longlong)param_1 + 0xc))) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar8 = (longlong *)(*param_1 + 8);
      do {
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
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar8 = plVar8 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1,0);
  }
  return;
}



// FUNCTION 142ca9a40 FUN_142ca9a40 body=79 status=ok
// SIG undefined FUN_142ca9a40(void)

void FUN_142ca9a40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0x10 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    FUN_142ca96a0(lVar1);
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1,0);
  return;
}



// FUNCTION 142ca9a90 FUN_142ca9a90 body=168 status=ok
// SIG undefined FUN_142ca9a90(void)

byte FUN_142ca9a90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  bVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  plVar3 = *(longlong **)(param_1 + 0x178);
  uVar4 = 0;
  uVar5 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x180) < plVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar3 != 0) {
        bVar2 = FUN_1423fb1a0(param_2,*plVar3,param_3,param_4);
        bVar1 = bVar1 | bVar2;
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  return bVar1;
}



// FUNCTION 142ca9b40 FUN_142ca9b40 body=11 status=ok
// SIG undefined FUN_142ca9b40(void)

void FUN_142ca9b40(undefined4 *param_1)

{
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  *param_1 = 0;
  return;
}



// FUNCTION 142ca9b50 FUN_142ca9b50 body=156 status=ok
// SIG undefined FUN_142ca9b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ca9b50(longlong param_1)

{
  if (*(char *)(param_1 + 0x145) != '\0') {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) & 0xfffffff8;
  *(undefined8 *)(param_1 + 0x2fc) = 0;
  *(undefined8 *)(param_1 + 0x308) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x310) = DAT_1468b5d98;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xf0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined8 *)(param_1 + 0x314) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x31c) = DAT_1468b5da8;
  *(byte *)(param_1 + 0x338) = *(byte *)(param_1 + 0x338) & 0xf0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 800) = DAT_1466acfa0;
  *(undefined4 *)(param_1 + 0x328) = DAT_1466acfa8;
  *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xf0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  return;
}



// FUNCTION 142ca9bf0 FUN_142ca9bf0 body=149 status=ok
// SIG undefined FUN_142ca9bf0(void)

void FUN_142ca9bf0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x40);
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
        *(void **)((longlong)param_1 + 0x40) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 142ca9c90 FUN_142ca9c90 body=143 status=ok
// SIG undefined FUN_142ca9c90(void)

void FUN_142ca9c90(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x1c);
    pvVar1 = *(void **)((longlong)param_1 + 0x20);
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
        *(void **)((longlong)param_1 + 0x20) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x1c);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
  return;
}



// FUNCTION 142ca9d20 ResizeAllocation body=166 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<128,TSizedDefaultAllocator<32>_>::
     ForElementType<UCompassWidget::FCompassEntry>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc00);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0xc00);
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
        *(void **)((longlong)param_1 + 0xc00) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc00) = uVar2;
  return;
}



// FUNCTION 142ca9dd0 FUN_142ca9dd0 body=155 status=ok
// SIG undefined FUN_142ca9dd0(void)

void FUN_142ca9dd0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x1a0);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x34);
    pvVar1 = *(void **)((longlong)param_1 + 0x1a0);
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
        *(void **)((longlong)param_1 + 0x1a0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x34);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x1a0) = uVar2;
  return;
}



// FUNCTION 142ca9e70 FUN_142ca9e70 body=128 status=ok
// SIG undefined FUN_142ca9e70(void)

void FUN_142ca9e70(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x34,0);
      iVar2 = (int)(uVar1 / 0x34);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    FUN_142ca9dd0(param_1,0,iVar2,0x34);
  }
  *(int *)(param_1 + 0x1ac) = iVar2;
  return;
}



// FUNCTION 142ca9ef0 ResizeGrow body=123 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x4c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 << 4,0);
    uVar2 = uVar3 >> 4 & 0xffffffff;
    if ((int)(uVar3 >> 4) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = (int)uVar2;
  FUN_142ca9bf0(param_1,param_2,uVar2,0x10);
  return;
}



// FUNCTION 142ca9f70 FUN_142ca9f70 body=154 status=ok
// SIG undefined FUN_142ca9f70(void)

void FUN_142ca9f70(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 < 2) {
    uVar5 = 1;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x2c) != 0) || (4 < uVar1)) {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar4 = FMemory::QuantizeSize(lVar3 * 0x1c,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar4 = (uVar4 - lVar3 >> 1) + lVar3 >> 4;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)uVar5;
  FUN_142ca9c90(param_1,param_2,uVar5,0x1c);
  return;
}



// FUNCTION 142caa010 FUN_142caa010 body=152 status=ok
// SIG undefined FUN_142caa010(void)

void FUN_142caa010(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  iVar4 = 0x80;
  if (0x80 < uVar1) {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xc0c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xc0c) = iVar4;
  TInlineAllocator<128,TSizedDefaultAllocator<32>_>::ForElementType<UCompassWidget::FCompassEntry>::
  ResizeAllocation(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 142caa0b0 FUN_142caa0b0 body=153 status=ok
// SIG undefined FUN_142caa0b0(void)

void FUN_142caa0b0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1a8);
  if (uVar1 < 9) {
    iVar4 = 8;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x1ac) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x34,0);
    iVar4 = (int)(uVar3 / 0x34);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1ac) = iVar4;
  FUN_142ca9dd0(param_1,param_2,iVar4,0x34);
  return;
}



// FUNCTION 142caa150 FUN_142caa150 body=282 status=ok
// SIG undefined FUN_142caa150(void)

void FUN_142caa150(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x588);
  if (uVar1 < 9) {
    uVar5 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x58c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0xb0,0);
    uVar5 = (uint)(uVar2 / 0xb0);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x58c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x580);
  if (uVar5 < 9) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0xb0);
    pvVar3 = *(void **)((longlong)param_1 + 0x580);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0xb0,0);
        *(void **)((longlong)param_1 + 0x580) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0xb0);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0xb0;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x580) = uVar4;
  return;
}



// FUNCTION 142caa270 FUN_142caa270 body=180 status=ok
// SIG undefined FUN_142caa270(void)

void FUN_142caa270(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  uVar4 = *(uint *)(param_1 + 0xc0c);
  uVar2 = 0x80;
  if ((((0x80 < uVar1) &&
       ((uVar2 = uVar4, 0x3fff < (ulonglong)((longlong)(int)(uVar4 - uVar1) * 0x18) ||
        ((int)(uVar1 * 3) < (int)(uVar4 * 2))))) && ((0x40 < uVar4 - uVar1 || (uVar1 == 0)))) &&
     (uVar2 = uVar1, 0 < (int)uVar1)) {
    uVar3 = FMemory::QuantizeSize((longlong)(int)uVar1 * 0x18,0);
    uVar4 = *(uint *)(param_1 + 0xc0c);
    uVar2 = (uint)(uVar3 / 0x18);
  }
  if (uVar2 == uVar4) {
    return;
  }
  *(uint *)(param_1 + 0xc0c) = uVar2;
  TInlineAllocator<128,TSizedDefaultAllocator<32>_>::ForElementType<UCompassWidget::FCompassEntry>::
  ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0xc08),uVar2,0x18);
  return;
}



// FUNCTION 142caa330 FUN_142caa330 body=123 status=ok
// SIG undefined FUN_142caa330(void)

void FUN_142caa330(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar3 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x1c,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar3;
    FUN_142ca9c90(param_1,*(undefined4 *)(param_1 + 0x28),iVar3,0x1c);
  }
  return;
}



// FUNCTION 142caa3b0 FUN_142caa3b0 body=123 status=ok
// SIG undefined FUN_142caa3b0(void)

void FUN_142caa3b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x34,0);
      iVar2 = (int)(uVar1 / 0x34);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x1ac)) {
    *(int *)(param_1 + 0x1ac) = iVar2;
    FUN_142ca9dd0(param_1,*(undefined4 *)(param_1 + 0x1a8),iVar2,0x34);
  }
  return;
}



// FUNCTION 142caa430 FUN_142caa430 body=191 status=ok
// SIG undefined FUN_142caa430(void)

undefined8 FUN_142caa430(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar2 = FUN_1428e7a40();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        param_4 = *(longlong *)(param_4 + 0x118);
      }
      else {
        uVar3 = FUN_1428dfc70();
        param_4 = UObjectBaseUtility::GetTypedOuter(param_4,uVar3);
      }
    }
  }
  FUN_142cb2580(param_2,param_4);
  return param_2;
}



// FUNCTION 142caa4f0 FUN_142caa4f0 body=148 status=ok
// SIG undefined FUN_142caa4f0(void)

longlong FUN_142caa4f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *local_18;
  int local_10;
  
  FUN_142dfac80(param_1,&local_18);
  uVar3 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = (ulonglong)((longlong)(local_18 + local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + local_10 < local_18) {
    uVar2 = uVar3;
  }
  puVar1 = local_18;
  if (uVar2 != 0) {
    do {
      FUN_142cb6180(param_2,*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return param_2;
}



// FUNCTION 142caa590 FUN_142caa590 body=167 status=ok
// SIG undefined FUN_142caa590(void)

undefined8 FUN_142caa590(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142caa621;
    lVar2 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_4 = *(longlong *)(param_4 + 0x498);
      goto LAB_142caa621;
    }
  }
  param_4 = 0;
LAB_142caa621:
  FUN_142cb2580(param_2,param_4);
  return param_2;
}



// FUNCTION 142caa640 FUN_142caa640 body=127 status=ok
// SIG undefined FUN_142caa640(void)

undefined8 FUN_142caa640(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_142ddddc0(param_4);
      if (lVar2 != 0) {
        uVar3 = FUN_142dcd660(lVar2,0);
        goto LAB_142caa6a9;
      }
    }
  }
  uVar3 = 0;
LAB_142caa6a9:
  FUN_142cb2580(param_2,uVar3);
  return param_2;
}



// FUNCTION 142caa6c0 FUN_142caa6c0 body=394 status=ok
// SIG undefined FUN_142caa6c0(void)

undefined8 FUN_142caa6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar2 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_4;
    if (bVar1) goto LAB_142caa82f;
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = *(longlong *)(param_4 + 0x490);
      if (*(longlong *)(param_4 + 0x490) != 0) goto LAB_142caa82f;
      lVar2 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = *(longlong *)(param_4 + 0x9c0);
        if (lVar2 != 0) {
          lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_142caa82f;
        }
        lVar2 = *(longlong *)(param_4 + 0x9c8);
        if (lVar2 != 0) {
          lVar3 = FUN_142c2de20();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_142caa82f;
        }
      }
    }
  }
  lVar2 = 0;
LAB_142caa82f:
  FUN_142cb2580(param_2,lVar2);
  return param_2;
}



// FUNCTION 142caa850 FUN_142caa850 body=130 status=ok
// SIG undefined FUN_142caa850(void)

undefined8 FUN_142caa850(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar2 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142caa8bc;
    lVar2 = (**(code **)(*param_4 + 0x148))(param_4);
    if (lVar2 != 0) {
      param_4 = *(longlong **)(lVar2 + 0x148);
      goto LAB_142caa8bc;
    }
  }
  param_4 = (longlong *)0x0;
LAB_142caa8bc:
  FUN_142cb2580(param_2,param_4);
  return param_2;
}



// FUNCTION 142caa8e0 FUN_142caa8e0 body=456 status=ok
// SIG undefined FUN_142caa8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_142caa8e0(void *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    FUN_142cb2580();
  }
  else {
    local_60 = 0;
    local_58 = 0;
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar3 = param_3[1];
      if (param_3[1] == 0) {
        lVar3 = *param_3;
      }
      FUN_142cb6180(local_68,lVar3);
    }
    else {
      if (param_3[1] != 0) {
        puVar2 = (undefined1 *)FUN_142ca0820(*(longlong *)(param_2 + 0x30),local_50,param_2);
        if (local_68 != puVar2) {
          if (*(longlong *)(puVar2 + 8) == 0) {
            _guard_xfg_dispatch_icall_nop(local_68,puVar2,8);
          }
          if (local_60 != 0) {
            FMemory::Free();
          }
          local_60 = *(longlong *)(puVar2 + 8);
          *(undefined8 *)(puVar2 + 8) = 0;
          local_58 = *(undefined8 *)(puVar2 + 0x10);
          *(undefined8 *)(puVar2 + 0x10) = 0;
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      cVar1 = FAdvTextRun::AreAllCharactersVisible(local_68);
      if (cVar1 != '\0') {
        puVar2 = (undefined1 *)
                 FUN_142ca0820(*(undefined8 *)(param_2 + 0x30),local_50,param_2,*param_3);
        if (local_68 != puVar2) {
          if (*(longlong *)(puVar2 + 8) == 0) {
            _guard_xfg_dispatch_icall_nop(local_68,puVar2,8);
          }
          if (local_60 != 0) {
            FMemory::Free();
          }
          local_60 = *(longlong *)(puVar2 + 8);
          *(undefined8 *)(puVar2 + 8) = 0;
          local_58 = *(undefined8 *)(puVar2 + 0x10);
          *(undefined8 *)(puVar2 + 0x10) = 0;
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    lVar3 = local_60;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    if (local_60 == 0) {
      _guard_xfg_dispatch_icall_nop(param_1,local_68,8);
    }
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      FMemory::Free();
      lVar3 = local_60;
    }
    *(longlong *)((longlong)param_1 + 8) = lVar3;
    *(undefined4 *)((longlong)param_1 + 0x10) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  }
  return param_1;
}



// FUNCTION 142caaab0 FUN_142caaab0 body=193 status=ok
// SIG undefined FUN_142caaab0(void)

undefined8 * FUN_142caaab0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 local_res8;
  char local_res9;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_res20 = 0;
  local_res18 = param_3;
  (**(code **)(*param_1 + 0x2e0))(param_1,param_3,&local_28,&local_res20,&local_res18);
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  FUN_1424ab500(param_1 + 6,&local_res8,&local_20,local_28,local_res20,local_res18);
  if (local_res9 != '\0') {
    *(undefined1 *)(param_2 + 3) = 0;
    return param_2;
  }
  *param_2 = local_20;
  param_2[1] = uStack_18;
  param_2[2] = local_10;
  *(undefined1 *)(param_2 + 3) = 1;
  return param_2;
}



// FUNCTION 142caab80 FUN_142caab80 body=145 status=ok
// SIG undefined FUN_142caab80(void)

longlong * FUN_142caab80(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428e7a40();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        if (param_1 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        lVar3 = FUN_1428dfc70();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return param_1;
        }
                    /* WARNING: Could not recover jumptable at 0x000142caac0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,param_2);
        return plVar4;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return param_1;
}



// FUNCTION 142caac20 FUN_142caac20 body=555 status=ok
// SIG undefined FUN_142caac20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142caac20(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong uStack_60;
  undefined4 local_58 [2];
  undefined1 local_50;
  undefined7 uStack_4f;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_2 + 2) = 0xff;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    uStack_60 = 0;
    local_68 = param_3;
    FUN_142caa8e0(local_58,lVar4,&local_68);
    uVar3 = FUN_142cc1650(local_58);
    FUN_142caaed0(&local_68,lVar4,uVar3);
    if (CONCAT71(uStack_4f,local_50) != 0) {
      FMemory::Free();
    }
    FUN_140a2f480(param_2,&local_68);
  }
  cVar2 = FUN_142cc7750(param_2);
  if (cVar2 == '\0') {
    uVar3 = FUN_142df1610(param_1 + 2,&local_68,param_3);
    FUN_140a2f480(param_2,uVar3);
    cVar2 = FUN_142cc7750(param_2);
    if (cVar2 == '\0') {
      *param_2 = *param_1;
      *(undefined1 *)(param_2 + 2) = 0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 10);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
      if (lVar4 == 0) goto LAB_142caae08;
    }
    uVar5 = FUN_142dfa470(lVar4,param_3);
    cVar2 = *(char *)(lVar4 + 0x28);
    if (cVar2 == '\0') {
      *param_2 = uVar5;
      *(undefined1 *)(param_2 + 2) = 0;
    }
    else if (cVar2 == '\x01') {
      local_68 = CONCAT44(local_68._4_4_,uVar5);
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      FUN_142cb5680(param_2,&local_68);
    }
    else if (cVar2 == '\x02') {
      local_50 = 0xff;
      FUN_140a393e0(local_58);
      local_50 = 0;
      local_58[0] = uVar5;
      FUN_142cb5500(param_2,local_58);
      FUN_140a393e0(local_58);
    }
    else if (cVar2 == '\x03') {
      local_50 = 0xff;
      FUN_140a393e0(local_58);
      local_50 = 0;
      local_58[0] = uVar5;
      FUN_142cb5800(local_58,param_2);
      uStack_60 = CONCAT71(uStack_60._1_7_,0xff);
      FUN_140a2f480(&local_68,local_58);
      FUN_140a393e0(local_58);
      FUN_140a2f480(param_2,&local_68);
      FUN_140a393e0(&local_68);
    }
  }
LAB_142caae08:
  local_50 = 0xff;
  FUN_140a393e0(local_58);
  local_58[0] = param_1[0xc];
  local_50 = 0;
  FUN_142cb5500(param_2,local_58);
  return param_2;
}



// FUNCTION 142caae50 FUN_142caae50 body=121 status=ok
// SIG undefined FUN_142caae50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142caae50(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_142caa8e0(local_28,param_2,&local_38);
  uVar1 = FUN_142cc1650(local_28);
  FUN_142caaed0(param_1,param_2,uVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142caaed0 FUN_142caaed0 body=355 status=ok
// SIG undefined FUN_142caaed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142caaed0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  iVar2 = DAT_146b30d90;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  else {
    lVar6 = (longlong)DAT_146b30d90;
    bVar1 = false;
    local_60 = 0xff;
    local_58 = param_2;
    uStack_50 = param_3;
    if (0 < DAT_146b30d90) {
      plVar3 = DAT_146b30d88;
      if (DAT_146b30d88 == (longlong *)0x0) {
        plVar3 = (longlong *)&DAT_146b30d48;
      }
      plVar5 = plVar3 + lVar6 * 2;
      for (; plVar3 != plVar5; plVar3 = plVar3 + 2) {
        if ((*plVar3 == param_2) && (plVar3[1] == param_3)) {
          bVar1 = true;
          goto LAB_142caafd8;
        }
      }
    }
    DAT_146b30d90 = DAT_146b30d90 + 1;
    if (DAT_146b30d94 < DAT_146b30d90) {
      TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (&DAT_146b30d48,iVar2);
    }
    plVar3 = DAT_146b30d88;
    if (DAT_146b30d88 == (longlong *)0x0) {
      plVar3 = (longlong *)&DAT_146b30d48;
    }
    plVar3 = plVar3 + lVar6 * 2;
    *(undefined4 *)plVar3 = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar3 + 4) = local_58._4_4_;
    *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_50._4_4_;
    uVar4 = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x2a0))
                      (*(longlong **)(param_2 + 0x38),&local_58,param_3);
    FUN_140a2f480(local_68,uVar4);
LAB_142caafd8:
    *(undefined1 *)(param_1 + 1) = 0xff;
    FUN_140a2f480(param_1,local_68);
    if (!bVar1) {
      DAT_146b30d90 = DAT_146b30d90 + -1;
    }
  }
  return param_1;
}



// FUNCTION 142cab040 FUN_142cab040 body=48 status=ok
// SIG undefined FUN_142cab040(void)

void FUN_142cab040(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
    FUN_142c951d0();
  }
  FUN_141763960(param_1,param_2);
  return;
}



// FUNCTION 142cab070 FUN_142cab070 body=48 status=ok
// SIG undefined FUN_142cab070(void)

void FUN_142cab070(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
    FUN_142c955d0();
  }
  FUN_141763960(param_1,param_2);
  return;
}



// FUNCTION 142cab0a0 FUN_142cab0a0 body=150 status=ok
// SIG undefined FUN_142cab0a0(void)

void FUN_142cab0a0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  FArchive::UsingCustomVersion(param_2,&DAT_1466acf90);
  FUN_141763960(param_1,param_2);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_1466acf90);
    if (iVar1 + 2U < 2) {
      puVar2 = (undefined8 *)FUN_142c48df0(local_res10,0,*(undefined4 *)(param_1 + 0x100));
      *(undefined8 *)(param_1 + 0x50) = *puVar2;
      puVar2 = (undefined8 *)
               FUN_142c48df0(local_res10,*(undefined4 *)(param_1 + 0x100),
                             *(undefined4 *)(param_1 + 0x104));
      *(undefined8 *)(param_1 + 0x94) = *puVar2;
    }
  }
  return;
}



// FUNCTION 142cab140 FUN_142cab140 body=1276 status=ok
// SIG undefined FUN_142cab140(void)

undefined8 FUN_142cab140(float *param_1,longlong *param_2,longlong *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  float fVar8;
  ulonglong local_res10;
  
  lVar5 = *param_2;
  local_res10 = 4;
  if (lVar5 == 4) {
    pfVar6 = *(float **)param_3[1];
    if (pfVar6 + 1 <= (float *)((undefined8 *)param_3[1])[1]) {
      *param_1 = *pfVar6;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      return 1;
    }
    (**(code **)(*param_3 + 0x50))(param_3,param_1,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,param_1,4);
    }
    return 1;
  }
  if (lVar5 == 0x17) {
    local_res10 = 0;
    plVar7 = (longlong *)param_3[1];
    if ((longlong *)*plVar7 + 1 <= (longlong *)plVar7[1]) {
      lVar5 = *(longlong *)*plVar7;
      *plVar7 = *plVar7 + 8;
      *param_1 = (float)lVar5;
      return 1;
    }
    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_res10,8);
    }
    *param_1 = (float)(longlong)local_res10;
    return 1;
  }
  if (lVar5 == DAT_1466ad038) {
    local_res10 = 0;
    plVar7 = (longlong *)param_3[1];
    if ((int *)*plVar7 + 1 <= (int *)plVar7[1]) {
      iVar3 = *(int *)*plVar7;
      *plVar7 = *plVar7 + 4;
      *param_1 = (float)iVar3;
      return 1;
    }
    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_res10,4);
    }
    *param_1 = (float)(int)local_res10;
    return 1;
  }
  if (lVar5 == 0x19) {
    local_res10 = 0;
    plVar7 = (longlong *)param_3[1];
    if ((short *)*plVar7 + 1 <= (short *)plVar7[1]) {
      sVar1 = *(short *)*plVar7;
      *plVar7 = *plVar7 + 2;
      *param_1 = (float)(int)sVar1;
      return 1;
    }
    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_res10,2);
    }
    *param_1 = (float)(int)(short)(ushort)local_res10;
    return 1;
  }
  if (lVar5 == 0x1a) {
    local_res10 = 0;
    plVar7 = (longlong *)param_3[1];
    if ((byte *)plVar7[1] < (byte *)*plVar7 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,1);
    }
    else {
      local_res10 = (ulonglong)*(byte *)*plVar7;
      *plVar7 = *plVar7 + 1;
    }
    *param_1 = (float)(int)(char)(byte)local_res10;
    return 1;
  }
  if (lVar5 == 0x14) {
    local_res10 = 0;
    plVar7 = (longlong *)param_3[1];
    if ((ulonglong *)plVar7[1] < (ulonglong *)*plVar7 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,8);
      }
    }
    else {
      local_res10 = *(ulonglong *)*plVar7;
      *plVar7 = *plVar7 + 8;
    }
    fVar8 = (float)(longlong)local_res10;
    if ((longlong)local_res10 < 0) {
      *param_1 = fVar8 + 1.8446744e+19;
      return 1;
    }
  }
  else {
    if (lVar5 == 0x15) {
      local_res10 = 0;
      plVar7 = (longlong *)param_3[1];
      if ((uint *)*plVar7 + 1 <= (uint *)plVar7[1]) {
        uVar4 = *(uint *)*plVar7;
        *plVar7 = *plVar7 + 4;
        *param_1 = (float)uVar4;
        return 1;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,4);
      }
      *param_1 = (float)(local_res10 & 0xffffffff);
      return 1;
    }
    if (lVar5 == 0x16) {
      local_res10 = 0;
      plVar7 = (longlong *)param_3[1];
      if ((ushort *)*plVar7 + 1 <= (ushort *)plVar7[1]) {
        uVar2 = *(ushort *)*plVar7;
        *plVar7 = *plVar7 + 2;
        *param_1 = (float)uVar2;
        return 1;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      *param_1 = (float)(ushort)local_res10;
      return 1;
    }
    if (lVar5 != DAT_1466ad040) {
      return 0;
    }
    local_res10 = 0;
    plVar7 = (longlong *)param_3[1];
    if ((byte *)plVar7[1] < (byte *)*plVar7 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,1);
    }
    else {
      local_res10 = (ulonglong)*(byte *)*plVar7;
      *plVar7 = *plVar7 + 1;
    }
    fVar8 = (float)(byte)local_res10;
  }
  *param_1 = fVar8;
  return 1;
}



// FUNCTION 142cab640 FUN_142cab640 body=537 status=ok
// SIG undefined FUN_142cab640(void)

void FUN_142cab640(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_res10 [2];
  undefined8 local_res20;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong local_28;
  
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (param_2 != 0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  if (plVar5 != (longlong *)0x0) {
    local_res10[0] = param_2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b30d9c) &&
       (_Init_thread_header(&DAT_146b30d9c), DAT_146b30d9c == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad000,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (DAT_1466ad000,0x26,"UGbxAnimInstance::SetAnimTableRowName",0x26,0x3f);
      atexit((_func_5014 *)&LAB_143ebfe60);
      _Init_thread_footer(&DAT_146b30d9c);
    }
    if (plVar5[5] != 0) {
      local_48 = param_3;
      lVar3 = FSubmixEffectConvolutionReverbSettings::StaticStruct();
      lVar6 = plVar5[5];
      if (lVar6 != 0) {
        while (lVar6 != lVar3) {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          if (lVar6 == 0) {
            return;
          }
        }
        local_res20 = 0;
        if (local_48 != (longlong *)0x0) {
          if ((int)plVar5[7] != *(int *)((longlong)plVar5 + 100)) {
            plVar4 = (longlong *)plVar5[0xe];
            if ((longlong *)plVar5[0xe] == (longlong *)0x0) {
              plVar4 = plVar5 + 0xd;
            }
            iVar1 = *(int *)((longlong)plVar4 +
                            ((longlong)((int)((ulonglong)local_48 >> 0x20) + (int)local_48) &
                            (longlong)(int)plVar5[0xf] - 1U) * 4);
            if (iVar1 != -1) {
              do {
                plVar4 = (longlong *)(plVar5[6] + (longlong)iVar1 * 0x18);
                if (*(longlong **)(plVar5[6] + (longlong)iVar1 * 0x18) == local_48) {
                  if (iVar1 != -1) goto LAB_142cab753;
                  break;
                }
                iVar1 = (int)plVar4[2];
              } while (iVar1 != -1);
            }
          }
          plVar4 = plVar7;
LAB_142cab753:
          plVar5 = plVar4 + 1;
          if (plVar4 == (longlong *)0x0) {
            plVar5 = plVar7;
          }
          if ((plVar5 != (longlong *)0x0) && (lVar6 = *plVar5, lVar6 != 0)) {
            BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
            if (BVar2 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
            }
            local_30 = DAT_1468c21b0;
            local_48 = local_res10;
            local_38[0] = 1;
            local_40 = local_38;
            local_28 = lVar6;
            FUN_142c88fa0(param_1 + 0x468,&local_res20,&local_48,0);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
          }
        }
      }
    }
  }
  return;
}


