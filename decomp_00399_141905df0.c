// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141905df0 NewSplitter body=345 status=ok
// SIG undefined NewSplitter(void)

undefined8 * FTabManager::NewSplitter(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x38);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0x3f800000;
    *plVar4 = (longlong)&PTR_FUN_144d5f398;
    *(undefined4 *)(plVar4 + 4) = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
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
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
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
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 141905f50 OnArrangeChildren body=702 status=ok
// SIG undefined OnArrangeChildren(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SClippingHorizontalBox::OnArrangeChildren(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  float local_98;
  undefined1 local_94 [24];
  byte local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 0x264) = 0;
  SBoxPanel::OnArrangeChildren();
  iVar2 = *(int *)(param_3 + 0x130);
  iVar4 = iVar2 + -2;
  iVar5 = iVar2;
  if (-1 < iVar4) {
    lVar6 = (longlong)iVar4 * 0x48;
    do {
      lVar3 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar3 = param_3 + 8;
      }
      fVar1 = *(float *)(lVar3 + 8 + lVar6);
      if ((int)(fVar1 * *param_2 + param_2[3]) <
          (int)(fVar1 * *(float *)(lVar3 + lVar6) + *(float *)(lVar3 + 0xc + lVar6))) {
        *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
        FUN_141855cc0(param_3 + 8,iVar4,1,1);
        iVar5 = iVar4;
      }
      lVar6 = lVar6 + -0x48;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (iVar5 == iVar2) {
    FUN_141855cc0(param_3 + 8,*(int *)(param_3 + 0x130) + -1,1,1);
  }
  else {
    fVar1 = param_2[2];
    lVar6 = *(longlong *)(param_3 + 0x128);
    if (*(longlong *)(param_3 + 0x128) == 0) {
      lVar6 = param_3 + 8;
    }
    local_a4 = 0;
    local_b0 = *(float *)(lVar6 + -0x48 + (longlong)*(int *)(param_3 + 0x130) * 0x48);
    lVar6 = lVar6 + (longlong)*(int *)(param_3 + 0x130) * 0x48;
    local_ac = *(float *)(lVar6 + -0x44);
    fVar8 = *param_2 - local_b0;
    fVar7 = param_2[1] - local_ac;
    local_a8 = 1.0;
    local_c8 = 0x3f800000;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0x3f800000;
    local_b8 = fVar8;
    local_b4 = fVar7;
    Concatenate<FTransform2D>(local_94,&local_c8,param_2 + 7);
    local_7c = local_7c ^ (*(byte *)(param_2 + 0xd) ^ local_7c) & 1;
    local_a4 = CONCAT44(fVar1 * fVar7 + param_2[4],fVar1 * fVar8 + param_2[3]);
    local_a8 = fVar1;
    local_9c = fVar8;
    local_98 = fVar7;
    FGeometry::operator=(lVar6 + -0x48,&local_b0);
    fVar1 = *(float *)(lVar6 + -0x3c);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      lVar6 = (longlong)iVar5 * 0x48;
      do {
        lVar3 = *(longlong *)(param_3 + 0x128);
        if (*(longlong *)(param_3 + 0x128) == 0) {
          lVar3 = param_3 + 8;
        }
        if ((int)fVar1 <
            (int)(*(float *)(lVar3 + 8 + lVar6) * *(float *)(lVar3 + lVar6) +
                 *(float *)(lVar3 + 0xc + lVar6))) {
          *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
          FUN_141855cc0(param_3 + 8,iVar5,1,1);
        }
        lVar6 = lVar6 + -0x48;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}



// FUNCTION 141906210 FUN_141906210 body=1901 status=ok
// SIG undefined FUN_141906210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141906210(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined4 *local_2e0;
  longlong local_2d8;
  float local_2c8;
  undefined4 uStack_2c4;
  longlong local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  float local_260;
  undefined4 local_25c;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined8 local_240;
  float fStack_238;
  float fStack_234;
  undefined4 local_230;
  float fStack_22c;
  undefined4 uStack_228;
  uint auStack_224 [5];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  float fStack_200;
  float fStack_1fc;
  undefined4 local_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  uint auStack_1ec [5];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  longlong lStack_188;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar7 = *(longlong **)(param_1 + 0x248);
  lVar10 = *(longlong *)(param_1 + 0x240);
  plVar9 = plVar7 + 1;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
  }
  local_2b0 = plVar9;
  local_2a8 = param_2;
  local_298 = lVar10;
  local_290 = param_3;
  local_250 = plVar7;
  iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
  FUN_1418ebad0(param_1,&local_2c8,param_2);
  fVar15 = 0.0;
  fVar16 = local_2c8 * 0.5 + *(float *)(param_1 + 0x250);
  local_2b8 = (longlong)iVar4;
  if (0 < iVar4) {
    local_2c0 = 0;
    do {
      plVar9 = *(longlong **)(local_2c0 + 8 + *(longlong *)(param_1 + 0x218));
      lVar10 = *(longlong *)(local_2c0 + *(longlong *)(param_1 + 0x218));
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      fVar11 = (float)SDockTab::GetOverlapWidth(lVar10);
      fVar11 = local_2c8 - fVar11;
      if (((local_298 != 0) && (fVar15 <= fVar16)) && (fVar12 = fVar11 + fVar15, fVar16 < fVar12)) {
        fVar15 = fVar12;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_27c = 0x3f800000;
      local_274 = 0;
      local_278 = fVar15;
      lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(lVar10 + 0xd0);
      if (*(char *)(lVar5 + 0x18) == '\0') {
        local_240 = CONCAT44(uStack_2c4,local_2c8);
        fVar12 = *(float *)(param_2 + 8);
        local_1d0 = 0x3f800000;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0x3f800000;
        local_1bc = 0;
        local_1c0 = fVar15;
        Concatenate<FTransform2D>(auStack_224,&local_1d0,param_2 + 0x1c);
        local_230 = *(undefined4 *)(param_2 + 0x10);
        uStack_228 = 0;
        uStack_20c = CONCAT31(uStack_20c._1_3_,
                              (byte)uStack_20c ^ (*(byte *)(param_2 + 0x34) ^ (byte)uStack_20c) & 1)
        ;
        fStack_234 = fVar12 * fVar15 + *(float *)(param_2 + 0xc);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        uStack_120 = CONCAT44(fStack_234,fVar12);
        local_118 = CONCAT44(fVar15,local_230);
        lStack_110 = (ulonglong)auStack_224[0] << 0x20;
        local_128 = local_240;
        uVar13 = local_210;
        uVar14 = uStack_20c;
        fStack_238 = fVar12;
        fStack_22c = fVar15;
      }
      else {
        if (((*(int *)(lVar10 + 0x118) != 0) && (*(longlong **)(lVar10 + 0x110) != (longlong *)0x0))
           && (cVar3 = (**(code **)(**(longlong **)(lVar10 + 0x110) + 0x18))(), cVar3 != '\0')) {
          if (*(int *)(lVar10 + 0x118) == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = *(longlong **)(lVar10 + 0x110);
          }
          (**(code **)(*plVar7 + 0x38))(plVar7,&local_258);
          *(undefined8 *)(lVar10 + 0x100) = local_258;
        }
        uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(lVar10 + 0xd0);
        local_288 = *(undefined4 *)(param_2 + 8);
        local_2d8 = param_2 + 0x1c;
        local_284 = *(undefined4 *)(param_2 + 0xc);
        local_2e0 = &local_288;
        local_280 = *(undefined4 *)(param_2 + 0x10);
        local_2e8 = (undefined8 *)(lVar10 + 0x100);
        FGeometry::FGeometry(&local_1a0,&local_2c8,&local_27c,uVar6);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_128 = local_1a0;
        uStack_120 = uStack_198;
        local_118 = local_190;
        lStack_110 = lStack_188;
        uVar13 = (int)local_170;
        uVar14 = (int)((ulonglong)local_170 >> 0x20);
      }
      local_f8 = CONCAT44(uVar14,uVar13);
      local_f0 = lVar10;
      local_e8 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar9 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      FUN_141801ed0(local_290,&local_128);
      plVar7 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_e8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      fVar15 = fVar15 + fVar11;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      local_2c0 = local_2c0 + 0x10;
      local_2b8 = local_2b8 + -1;
    } while (local_2b8 != 0);
    local_2b8 = 0;
    plVar7 = local_250;
    plVar9 = local_2b0;
    lVar10 = local_298;
    param_2 = local_2a8;
  }
  if (lVar10 != 0) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    fVar15 = *(float *)(param_1 + 0x250);
    local_264 = 0x3f800000;
    local_25c = 0;
    local_260 = fVar15;
    lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(lVar10 + 0xd0);
    if (*(char *)(lVar5 + 0x18) == '\0') {
      local_208 = CONCAT44(uStack_2c4,local_2c8);
      fVar16 = *(float *)(param_2 + 8);
      local_1b8 = 0x3f800000;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0x3f800000;
      local_1a4 = 0;
      local_1a8 = fVar15;
      Concatenate<FTransform2D>(auStack_1ec,&local_1b8,param_2 + 0x1c);
      local_1f8 = *(undefined4 *)(param_2 + 0x10);
      uStack_1f0 = 0;
      uStack_1d4 = CONCAT31(uStack_1d4._1_3_,
                            (byte)uStack_1d4 ^ (*(byte *)(param_2 + 0x34) ^ (byte)uStack_1d4) & 1);
      fStack_1fc = fVar16 * fVar15 + *(float *)(param_2 + 0xc);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar9 = (int)*plVar9 + 1;
        UNLOCK();
      }
      uStack_d0 = CONCAT44(fStack_1fc,fVar16);
      local_c8 = CONCAT44(fVar15,local_1f8);
      lStack_c0 = (ulonglong)auStack_1ec[0] << 0x20;
      local_d8 = local_208;
      uVar13 = uStack_1d4;
      fStack_200 = fVar16;
      fStack_1f4 = fVar15;
    }
    else {
      if (((*(int *)(lVar10 + 0x118) != 0) && (*(longlong **)(lVar10 + 0x110) != (longlong *)0x0))
         && (cVar3 = (**(code **)(**(longlong **)(lVar10 + 0x110) + 0x18))(), cVar3 != '\0')) {
        if (*(int *)(lVar10 + 0x118) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(lVar10 + 0x110);
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,&local_248);
        *(undefined8 *)(lVar10 + 0x100) = local_248;
      }
      uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(lVar10 + 0xd0);
      local_270 = *(undefined4 *)(param_2 + 8);
      local_2d8 = param_2 + 0x1c;
      local_26c = *(undefined4 *)(param_2 + 0xc);
      local_2e0 = &local_270;
      local_268 = *(undefined4 *)(param_2 + 0x10);
      local_2e8 = (undefined8 *)(lVar10 + 0x100);
      FGeometry::FGeometry(&local_168,&local_2c8,&local_264,uVar6);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar9 = (int)*plVar9 + 1;
        UNLOCK();
      }
      local_d8 = local_168;
      uStack_d0 = uStack_160;
      local_c8 = local_158;
      lStack_c0 = lStack_150;
      local_1d8 = (undefined4)local_138;
      uVar13 = (int)((ulonglong)local_138 >> 0x20);
    }
    local_a8 = CONCAT44(uVar13,local_1d8);
    local_a0 = lVar10;
    local_98 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar9 = (int)*plVar9 + 1;
      UNLOCK();
      LOCK();
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FUN_141801ed0(local_290,&local_d8);
    plVar8 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_98 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    LOCK();
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    LOCK();
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 141906990 OnCheckStateChanged body=35 status=ok
// SIG undefined OnCheckStateChanged(void)

void SToolBarButtonBlock::OnCheckStateChanged(undefined8 param_1)

{
  undefined1 local_c8 [200];
  
  FUN_141907120(param_1,local_c8);
  FUN_140438c20(local_c8);
  return;
}



// FUNCTION 1419069c0 FUN_1419069c0 body=1879 status=ok
// SIG undefined FUN_1419069c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419069c0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_238 [32];
  char local_218;
  char local_217;
  undefined1 local_216 [6];
  longlong local_210;
  undefined4 local_204;
  longlong *local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_1a0 [16];
  undefined1 local_190 [8];
  undefined1 local_188 [320];
  longlong *local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar2 = *(longlong **)(param_1 + 0x310);
  plVar17 = (longlong *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x308);
  local_204 = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  local_217 = param_2;
  local_210 = param_1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar16 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  local_200 = *(longlong **)(*(longlong *)(param_1 + 0x308) + 0x70);
  local_1f8 = *(longlong **)(*(longlong *)(param_1 + 0x308) + 0x78);
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x300);
  plVar14 = plVar4;
  plVar11 = plVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar4[1];
    bVar18 = iVar9 == 0;
    if (bVar18) {
      *(int *)(plVar4 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (plVar14 = plVar17, !bVar18) {
      LOCK();
      bVar18 = iVar9 == (int)plVar4[1];
      if (bVar18) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar18) {
        plVar14 = plVar4;
        plVar11 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 0x2f8);
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(plVar4 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  lVar16 = plVar11[0x60];
  plVar4 = (longlong *)plVar11[0x61];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar4 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar14 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if ((*(char *)(lVar16 + 0x6c) == '\0') ||
     ((*(char *)(lVar3 + 0x150) != '\0' &&
      (((*(int *)(lVar3 + 0x20) == 0 || (*(longlong **)(lVar3 + 0x18) == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x18))(), cVar8 == '\0')))))) {
    local_218 = '\0';
  }
  else {
    local_218 = '\x01';
  }
  lVar16 = local_210;
  uVar7 = DAT_1469f4590;
  if ((local_217 == '\0') && (local_218 != '\0')) {
    if (*(char *)(lVar3 + 0x158) == '\0') {
      FSlateApplication::DismissAllMenus(DAT_1469f4590);
      lVar16 = local_210;
    }
    else {
      uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_210 + 0x10,local_1c0);
      FUN_141895790(uVar7,uVar10);
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_1b8 + 1;
        lVar6 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar1 = (int *)((longlong)local_1b8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
    }
  }
  plVar11 = plVar17;
  plVar14 = local_1f8;
  if (local_200 == (longlong *)0x0) {
LAB_141906c49:
    bVar18 = false;
  }
  else {
    plVar14 = *(longlong **)(*(longlong *)(lVar16 + 0x308) + 0x68);
    lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x308) + 0x60);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)0x1;
    if (lVar16 == 0) goto LAB_141906c49;
    bVar18 = true;
  }
  if ((plVar11 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar14 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (bVar18) {
    plVar14 = *(longlong **)(*(longlong *)(local_210 + 0x308) + 0x68);
    local_1f0 = *(undefined8 *)(*(longlong *)(local_210 + 0x308) + 0x60);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_1e8 = plVar14;
    (**(code **)(*local_200 + 0x10))(local_200,&local_1f0);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar14 + 1;
      lVar16 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  else {
    FUIAction::Execute(lVar3 + 0x18);
  }
  if ((local_218 == '\0') &&
     (((((*(int *)(lVar3 + 0x128) != 0 && (*(longlong **)(lVar3 + 0x120) != (longlong *)0x0)) &&
        (cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x120) + 0x18))(), cVar8 != '\0')) ||
       ((((*(int *)(lVar3 + 0x138) != 0 && (*(longlong **)(lVar3 + 0x130) != (longlong *)0x0)) &&
         (cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x130) + 0x18))(), cVar8 != '\0')) ||
        (*(longlong *)(lVar3 + 0x140) != 0)))) &&
      (plVar14 = *(longlong **)(local_210 + 0x348), plVar14 != (longlong *)0x0)))) {
    LOCK();
    iVar9 = (int)plVar14[1];
    bVar18 = iVar9 == 0;
    if (bVar18) {
      *(int *)(plVar14 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar9 == (int)plVar14[1];
      if (bVar18) {
        *(int *)(plVar14 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar18) {
        if (plVar14 != (longlong *)0x0) {
          plVar11 = *(longlong **)(local_210 + 0x340);
          if ((plVar11 == (longlong *)0x0) || (cVar8 = FUN_14195a7d0(plVar11), cVar8 == '\0'))
          goto LAB_14190700e;
          FWidgetPath::FWidgetPath(local_190);
          local_216[0] = DAT_1464b9ee8;
          puVar12 = (undefined8 *)
                    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar11 + 1,local_1b0);
          local_1e0 = *puVar12;
          local_1d8 = puVar12[1];
          if (local_1d8 != 0) {
            LOCK();
            *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
            UNLOCK();
          }
          FUN_14189ada0(DAT_1469f4590,&local_1e0,local_190,local_216);
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_1a8 + 1;
            lVar3 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_1a8)(local_1a8);
              LOCK();
              piVar1 = (int *)((longlong)local_1a8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_1a8 + 8))(local_1a8,1);
              }
            }
          }
          cVar8 = FWidgetPath::IsValid(local_190);
          uVar7 = DAT_1469f4590;
          if (cVar8 == '\0') goto LAB_141906fbf;
          uVar10 = FUN_141845450(local_190,local_1a0);
          cVar8 = FUN_1418a1c20(uVar7,uVar10);
          if (cVar8 != '\0') goto LAB_141906fbf;
          plVar5 = *(longlong **)(local_210 + 0x300);
          plVar13 = plVar17;
          plVar15 = plVar5;
          if (plVar5 == (longlong *)0x0) goto LAB_141906eda;
          LOCK();
          iVar9 = (int)plVar5[1];
          bVar18 = iVar9 == 0;
          if (bVar18) {
            *(int *)(plVar5 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
          goto joined_r0x000141906ea9;
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar14[1];
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(plVar14 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
LAB_14190703c:
  FUN_1418eabf0(local_210);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar4 + 1;
    lVar3 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar17 = local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f8 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar2 + 1;
    lVar3 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
joined_r0x000141906ea9:
  plVar15 = plVar17;
  if (bVar18) goto LAB_141906eda;
  LOCK();
  bVar18 = iVar9 == (int)plVar5[1];
  if (bVar18) {
    *(int *)(plVar5 + 1) = iVar9 + 1;
  }
  UNLOCK();
  if (bVar18) {
    plVar13 = (longlong *)0x0;
    plVar15 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = *(longlong **)(local_210 + 0x2f8);
    }
    goto LAB_141906eda;
  }
  LOCK();
  iVar9 = (int)plVar5[1];
  bVar18 = iVar9 == 0;
  if (bVar18) {
    *(int *)(plVar5 + 1) = 0;
    iVar9 = 0;
  }
  UNLOCK();
  goto joined_r0x000141906ea9;
LAB_141906eda:
  FUN_14196e970(plVar13);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar15 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  (**(code **)(*plVar11 + 0x210))(plVar11,1,1,0);
  LOCK();
  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  UNLOCK();
  plVar5 = *(longlong **)(local_210 + 0x300);
  plVar13 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar5[1];
    bVar18 = iVar9 == 0;
    if (bVar18) {
      *(int *)(plVar5 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar17, !bVar18) {
      LOCK();
      bVar18 = iVar9 == (int)plVar5[1];
      if (bVar18) {
        *(int *)(plVar5 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar18) {
        plVar13 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          plVar17 = *(longlong **)(local_210 + 0x2f8);
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar5[1];
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(plVar5 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  local_1d0 = plVar11;
  local_1c8 = plVar14;
  FUN_1418c26d0(plVar17,&local_1d0);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar13 + 1;
    lVar3 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_141906fbf:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_40);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_48 + 1;
    lVar3 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  FUN_140456b10(local_188);
LAB_14190700e:
  LOCK();
  plVar17 = plVar14 + 1;
  lVar3 = *plVar17;
  *(int *)plVar17 = (int)*plVar17 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar14 + 8))(plVar14,1);
    }
  }
  goto LAB_14190703c;
}



// FUNCTION 141907120 FUN_141907120 body=761 status=ok
// SIG undefined FUN_141907120(void)

undefined1 * FUN_141907120(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar11 = *(longlong *)(param_1 + 0x308);
  plVar2 = *(longlong **)(lVar11 + 0x78);
  plVar3 = *(longlong **)(lVar11 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    lVar11 = *(longlong *)(param_1 + 0x308);
  }
  lVar4 = *(longlong *)(lVar11 + 0x60);
  plVar5 = *(longlong **)(lVar11 + 0x68);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((plVar3 == (longlong *)0x0) || (lVar4 == 0)) {
    FUIAction::Execute(*(longlong *)(param_1 + 0x308) + 0x18);
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x300);
  plVar9 = plVar3;
  plVar10 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar9 = (longlong *)0x0, plVar10 = (longlong *)0x0, !bVar12) {
      LOCK();
      bVar12 = iVar7 == (int)plVar3[1];
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0x2f8);
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  lVar11 = plVar10[0x60];
  plVar3 = (longlong *)plVar10[0x61];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  uVar6 = DAT_1469f4590;
  if (*(char *)(lVar11 + 0x6c) != '\0') {
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_38);
    FUN_141895790(uVar6,uVar8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141907420 FUN_141907420 body=398 status=ok
// SIG undefined FUN_141907420(void)

void FUN_141907420(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  
  if (((*(longlong *)(param_1 + 0x340) == 0) || (*(longlong *)(param_1 + 0x340) != *param_2)) &&
     (cVar7 = FMultiBox::IsInEditMode(*(undefined8 *)(param_1 + 0x300)), cVar7 != '\0')) {
    plVar4 = *(longlong **)(param_4 + 0x78);
    uVar5 = *(undefined8 *)(param_4 + 0x70);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = *param_2;
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    local_48 = uVar5;
    local_40 = plVar4;
    FUN_14191cff0(param_1,&local_38,&local_48,param_3,param_4 + 0x18);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1419075b0 FUN_1419075b0 body=513 status=ok
// SIG undefined FUN_1419075b0(void)

void FUN_1419075b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  plVar3 = (longlong *)(param_1 + 0x330);
  local_48 = *plVar3;
  if (local_48 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x340) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x350) == -1) {
    return;
  }
  local_40 = *(longlong *)(param_1 + 0x338);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1418f8c40(*(undefined8 *)(param_1 + 0x300),&local_68,&local_48);
  if (local_68 == 0) {
    local_38 = *plVar3;
    local_30 = *(longlong *)(param_1 + 0x338);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)FUN_1419041f0(*(undefined8 *)(param_1 + 0x300),local_28,&local_38,1);
    local_50 = (longlong *)plVar6[1];
    local_68 = *plVar6;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_60,&local_50);
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar6 = plStack_60;
    if (local_68 == 0) goto LAB_141907749;
  }
  plVar6 = plStack_60;
  local_18 = local_68;
  plStack_10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  FUN_141901130(*(undefined8 *)(param_1 + 0x300),&local_18,*(undefined4 *)(param_1 + 0x350));
LAB_141907749:
  FUN_141914c70(plVar3);
  FUN_1418e5e50(param_1);
  plVar3 = plStack_60;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 1419077c0 FUN_1419077c0 body=672 status=ok
// SIG undefined FUN_1419077c0(void)

undefined1 * FUN_1419077c0(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  char local_res10 [8];
  undefined8 local_res18;
  longlong *local_48;
  longlong *local_40;
  
  if ((*param_3 != 0) && (param_3[1] != 0)) {
    piVar1 = (int *)(param_3[1] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = (longlong *)param_3[1];
      plVar5 = plVar2;
      plVar8 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
          LOCK();
          bVar9 = iVar4 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar8 = (longlong *)*param_3;
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x300);
      local_res10[0] = '\0';
      local_res18 = 0;
      if ((*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x10) != 0) &&
         (FConfigCacheIni::GetBool
                    (DAT_1468b6148,L"/Script/UnrealEd.EditorExperimentalSettings",
                     L"bToolbarCustomization",local_res10,&DAT_1468e23b0), local_res10[0] != '\0'))
      {
        plVar2 = *(longlong **)(lVar3 + 0x48);
        for (plVar6 = plVar2; plVar6 != plVar2 + (longlong)*(int *)(lVar3 + 0x50) * 2;
            plVar6 = plVar6 + 2) {
          if ((longlong *)*plVar6 == plVar8) {
            uVar7 = (longlong)plVar6 - (longlong)plVar2 >> 4;
            if ((int)uVar7 != -1) {
              TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (lVar3 + 0x48,uVar7 & 0xffffffff,1,1);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              local_48 = plVar8;
              local_40 = plVar5;
              FUN_1418dd170(*(undefined8 *)(lVar3 + 0x28),&local_48,uVar7 & 0xffffffff,lVar3 + 0x48)
              ;
            }
            break;
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
        LOCK();
        plVar2 = plVar5 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      FUN_1418e5e50(param_1);
    }
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  plVar2 = (longlong *)param_3[1];
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
  return param_2;
}



// FUNCTION 141907a60 FUN_141907a60 body=330 status=ok
// SIG undefined FUN_141907a60(void)

void FUN_141907a60(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x240))((longlong *)*param_2,local_28);
  plVar3 = (longlong *)plVar6[1];
  lVar4 = *plVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (lVar4 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar5 = *param_1;
    iVar2 = *(int *)(lVar5 + 0x90);
    *(int *)(lVar5 + 0x90) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x94) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x88,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x88));
    *plVar6 = lVar4;
    plVar6[1] = (longlong)plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 141907bb0 FUN_141907bb0 body=383 status=ok
// SIG undefined FUN_141907bb0(void)

void FUN_141907bb0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong local_38;
  undefined8 local_30;
  
  lVar3 = *param_1;
  uVar10 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar14 = uVar10;
  if (0 < *(int *)(lVar3 + 0x80)) {
    do {
      uVar7 = local_30;
      if ((*(longlong *)(uVar10 + *(longlong *)(lVar3 + 0x78)) != 0) &&
         (lVar4 = *(longlong *)(uVar10 + 8 + *(longlong *)(lVar3 + 0x78)), lVar4 != 0)) {
        piVar1 = (int *)(lVar4 + 8);
        LOCK();
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *piVar1 = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (0 < iVar8) {
          lVar12 = (longlong)(int)local_30;
          lVar4 = *(longlong *)(lVar3 + 0x78);
          iVar8 = (int)local_30 + 1;
          local_30 = CONCAT44(local_30._4_4_,iVar8);
          if (local_30._4_4_ < iVar8) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar7 & 0xffffffff);
          }
          puVar9 = (undefined8 *)(lVar12 * 0x10 + local_38);
          *puVar9 = *(undefined8 *)(lVar4 + uVar10);
          lVar4 = *(longlong *)(lVar4 + 8 + uVar10);
          puVar9[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
        }
      }
      uVar13 = (int)uVar14 + 1;
      uVar10 = uVar10 + 0x10;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < *(int *)(lVar3 + 0x80));
  }
  FUN_1418d3a90(lVar3 + 0x78,&local_38);
  if ((int)local_30 != 0) {
    plVar11 = (longlong *)(local_38 + 8);
    iVar8 = (int)local_30;
    do {
      plVar5 = (longlong *)*plVar11;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar11 = plVar11 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  lVar3 = param_2[1];
  uVar6 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  lVar4 = *param_1;
  iVar8 = *(int *)(lVar4 + 0x80);
  *(int *)(lVar4 + 0x80) = iVar8 + 1;
  if (*(int *)(lVar4 + 0x84) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x78,iVar8);
  }
  puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar4 + 0x78));
  *puVar9 = uVar6;
  puVar9[1] = lVar3;
  return;
}



// FUNCTION 141907d30 FUN_141907d30 body=1235 status=ok
// SIG undefined FUN_141907d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141907d30(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_140;
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar1 = *(longlong **)(param_1 + 0x308);
  plVar9 = *(longlong **)(param_1 + 0x2f0);
  local_180 = (longlong *)0x0;
  plVar7 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar1[1];
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(plVar1 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (local_180 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar4 == (int)plVar1[1];
      if (bVar10) {
        *(int *)(plVar1 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          local_180 = *(longlong **)(param_1 + 0x300);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar1[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar1 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x2f0);
  local_178 = plVar7;
  uVar3 = (**(code **)(*plVar9 + 0x20))(plVar9);
  local_1b8 = CONCAT71(local_1b8._1_7_,uVar3);
  puVar5 = (undefined8 *)FUN_141905390(uVar6,local_120,&local_180,0xffffffff);
  local_1a8 = *(float *)(param_3 + 0xc) - *(float *)(param_4 + 0x18);
  fStack_1a4 = *(float *)(param_3 + 0x10) - *(float *)(param_4 + 0x1c);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*puVar5 + 8))((longlong *)*puVar5,local_130);
  local_170 = *puVar5;
  local_168 = puVar5[1];
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
    UNLOCK();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2f0) + 0x68);
  local_160 = *(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x60);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  local_1b8 = CONCAT44(fStack_1a4,local_1a8);
  local_158 = plVar1;
  FUN_1418aa6a0(&local_190,&local_160,*(undefined8 *)(param_1 + 0x310));
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar1 + 1;
    lVar2 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar8 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar8 = (int *)((longlong)local_128 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_128 + 8))(local_128);
      }
    }
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar8 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  local_150 = SMultiBoxWidget::OnDropExternal;
  uStack_148 = 0;
  plVar7 = plVar1;
  plVar9 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar1[1];
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(plVar1 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar4 == (int)plVar1[1];
      if (bVar10) {
        *(int *)(plVar1 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x300);
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar1[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar1 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_1a0 = 0;
  local_198 = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x38,&local_1a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_143f4d350;
    puVar5[1] = plVar9;
    puVar5[2] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar5 + 3) = (undefined4)local_150;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = local_150._4_4_;
    *(undefined4 *)(puVar5 + 4) = uStack_148;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_144;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[6] = uVar6;
    *puVar5 = &PTR_GetPoolName_143f4d398;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  piVar8 = (int *)((longlong)plVar7 + 0xc);
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_190 + 0x70,&local_1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar1 = local_188;
  if (local_188 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_188 + 1) = (int)local_188[1] + 1;
    UNLOCK();
  }
  local_140 = local_190;
  local_138 = local_188;
  if (local_188 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_188 + 1) = (int)local_188[1] + 1;
    UNLOCK();
  }
  local_54 = local_54 & 0xffffff00;
  local_108[0] = 1;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x20702;
  uVar6 = FReply::BeginDragDrop(local_108,&local_140);
  FUN_140438260(param_2,uVar6);
  FUN_140438c20(local_108);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar1 + 1;
    lVar2 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar8 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_188 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar8 = (int *)((longlong)local_188 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141908210 FUN_141908210 body=435 status=ok
// SIG undefined FUN_141908210(void)

void FUN_141908210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_1418cb840(param_3,&local_48);
  if (local_48 != 0) {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
    plVar4 = (longlong *)puVar9[1];
    uVar5 = *puVar9;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_20 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar10 = plVar4 + 1;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar10 = (int)*plVar10 + 1;
      UNLOCK();
    }
    local_38 = uVar5;
    local_30 = plVar4;
    cVar8 = FUN_1418907c0(local_48,&local_38,1);
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (cVar8 != '\0') {
      *(undefined1 *)(param_1 + 0x358) = 1;
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_40 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 1419083d0 FUN_1419083d0 body=1010 status=ok
// SIG undefined FUN_1419083d0(void)

void FUN_1419083d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_1418cb840(param_3,&local_a0);
  if (local_a0 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x238);
    plVar10 = (longlong *)0x0;
    local_90 = plVar10;
    plVar9 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (local_90 = (longlong *)0x0, plVar9 = plVar10, !bVar11) {
        LOCK();
        bVar11 = iVar6 == (int)plVar3[1];
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar11) {
          plVar9 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            local_90 = *(longlong **)(param_1 + 0x230);
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_88 = plVar9;
    cVar5 = FUN_1418907c0(local_a0,&local_90,0);
    plVar3 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar3 = plVar9 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (cVar5 != '\0') {
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_70);
      local_80 = *puVar7;
      local_78 = (longlong *)puVar7[1];
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_68 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      FUN_1418aeac0(local_a0,&local_80);
      plVar3 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_78 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      puVar7 = (undefined8 *)FUN_14189f270(local_a0,local_60);
      if ((undefined8 *)(param_1 + 0x240) != puVar7) {
        *(undefined8 *)(param_1 + 0x240) = *puVar7;
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x248,puVar7 + 1);
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_58 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      puVar7 = (undefined8 *)FDockingDragOperation::GetTabGrabOffsetFraction(local_a0,local_a8);
      *(undefined8 *)(param_1 + 0x254) = *puVar7;
      puVar7 = (undefined8 *)FUN_14189f270(local_a0,local_40);
      plVar3 = *(longlong **)(param_1 + 0x238);
      uVar8 = *puVar7;
      plVar9 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar10, !bVar11) {
          LOCK();
          bVar11 = iVar6 == (int)plVar3[1];
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar9 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar10 = *(longlong **)(param_1 + 0x230);
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(plVar3 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      uVar8 = STableViewBase::GetHeaderRow(uVar8,local_50);
      FUN_1419187a0(plVar10,uVar8,&DAT_1469eb218,&DAT_1469eb218,&DAT_1469eb218);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
  }
  plVar3 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_98 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 1419087d0 FUN_1419087d0 body=466 status=ok
// SIG undefined FUN_1419087d0(void)

void FUN_1419087d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_78 [8];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_1418cb840(param_3,&local_70);
  if (local_70 != 0) {
    *(undefined1 *)(param_1 + 0x3ac) = 1;
    plVar3 = DAT_1469eb140;
    lVar2 = *DAT_1469eb140;
    puVar5 = (undefined8 *)FName::FName(local_78,L"Docking.Cross.HoveredTint",1);
    puVar6 = (undefined4 *)(**(code **)(lVar2 + 0x28))(plVar3,*puVar5,0);
    plVar8 = (longlong *)0x0;
    local_38 = 1;
    local_30 = 0;
    local_28 = 0;
    local_48 = *puVar6;
    uStack_44 = puVar6[1];
    uStack_40 = puVar6[2];
    uStack_3c = puVar6[3];
    *(undefined1 *)(param_1 + 0x298) = 1;
    *(undefined4 *)(param_1 + 0x288) = local_48;
    *(undefined4 *)(param_1 + 0x28c) = uStack_44;
    *(undefined4 *)(param_1 + 0x290) = uStack_40;
    *(undefined4 *)(param_1 + 0x294) = uStack_3c;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2a0,&local_30);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
    plVar3 = *(longlong **)(param_1 + 0x3a0);
    local_50 = *(undefined4 *)(param_1 + 0x3a8);
    plVar7 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar8, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar3[1];
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x398);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
    local_60 = plVar8;
    local_58 = plVar7;
    FUN_1418c1960(local_70,&local_60,param_3);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_58 != (longlong *)0x0)) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return;
}



// FUNCTION 1419089b0 FUN_1419089b0 body=334 status=ok
// SIG undefined FUN_1419089b0(void)

void FUN_1419089b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_28;
  longlong local_20;
  
  plVar2 = *(longlong **)(param_3 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    uVar7 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar3 + 0x50))(plVar2,uVar7);
    if (cVar5 != '\0') {
      plVar2 = *(longlong **)(param_3 + 0x78);
      lVar3 = *(longlong *)(param_3 + 0x70);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar9 = plVar2 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
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
      if (lVar3 != 0) {
        local_28 = *(undefined8 *)(param_1 + 0x300);
        local_20 = *(longlong *)(param_1 + 0x308);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(param_1 + 0x2f8);
        plVar9 = (longlong *)0x0;
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = plVar9, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar2[1];
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar8 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = *(longlong **)(param_1 + 0x2f0);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar2 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_141907420(plVar9,&local_28,param_2,param_3);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 141908b00 FUN_141908b00 body=334 status=ok
// SIG undefined FUN_141908b00(void)

void FUN_141908b00(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_28;
  longlong local_20;
  
  plVar2 = *(longlong **)(param_3 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    uVar7 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar3 + 0x50))(plVar2,uVar7);
    if (cVar5 != '\0') {
      plVar2 = *(longlong **)(param_3 + 0x78);
      lVar3 = *(longlong *)(param_3 + 0x70);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar9 = plVar2 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
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
      if (lVar3 != 0) {
        local_28 = *(undefined8 *)(param_1 + 0x2f0);
        local_20 = *(longlong *)(param_1 + 0x2f8);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(param_1 + 0x308);
        plVar9 = (longlong *)0x0;
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = plVar9, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar2[1];
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar8 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = *(longlong **)(param_1 + 0x300);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar2 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_141907420(plVar9,&local_28,param_2,param_3);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 141908c50 FUN_141908c50 body=132 status=ok
// SIG undefined FUN_141908c50(void)

void FUN_141908c50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FUN_1418cb840(param_2,local_18);
  lVar3 = *plVar5;
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
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  return;
}



// FUNCTION 141908ce0 FUN_141908ce0 body=176 status=ok
// SIG undefined FUN_141908ce0(void)

void FUN_141908ce0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  undefined4 local_18;
  
  FUN_1418cb840(param_2,&local_38);
  if (local_38 != 0) {
    local_18 = 0;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    FUN_1418c1960(local_38,&local_28,param_2);
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plStack_20 != (longlong *)0x0)) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141908d90 FUN_141908d90 body=153 status=ok
// SIG undefined FUN_141908d90(void)

void FUN_141908d90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FUN_1418cb840(param_2,local_18);
  lVar3 = *plVar5;
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
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x3b0) != '\0')) {
    SOverlay::RemoveSlot(*(undefined8 *)(param_1 + 0x3a0),0xffffffff);
    *(undefined1 *)(param_1 + 0x3b0) = 0;
  }
  return;
}



// FUNCTION 141908e30 FUN_141908e30 body=1225 status=ok
// SIG undefined FUN_141908e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141908e30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar11 = (longlong *)0x0;
  local_108 = 0;
  local_d8 = param_1;
  FUN_1418cb840(param_2,&local_e8);
  iVar9 = -1;
  if (local_e8 == 0) goto LAB_14190928c;
  plVar2 = *(longlong **)(param_1 + 0x238);
  local_100 = (longlong *)0x0;
  plVar10 = plVar2;
  plVar12 = plVar11;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar13 = iVar6 == 0;
    if (bVar13) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar10 = plVar11, plVar12 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar6 == (int)plVar2[1];
      if (bVar13) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = *(longlong **)(param_1 + 0x230);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar2 + 1;
          lVar3 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          plVar10 = plVar2;
          local_100 = plVar12;
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
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
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x240);
  plVar2 = *(longlong **)(param_1 + 0x248);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar8 = plVar11;
  if (lVar3 == 0) {
LAB_141908f6d:
    bVar13 = false;
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    local_d0 = plVar12;
    local_c8 = plVar10;
    cVar5 = FUN_1418907c0(local_e8,&local_d0,0);
    if (cVar5 == '\0') goto LAB_141908f6d;
    bVar13 = true;
  }
  plVar12 = local_c8;
  if ((plVar8 != (longlong *)0x0) && (local_c8 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_c8 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (bVar13) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    plVar12 = *(longlong **)(local_d8 + 0x218);
    for (plVar8 = plVar12; plVar8 != plVar12 + (longlong)*(int *)(local_d8 + 0x220) * 2;
        plVar8 = plVar8 + 2) {
      if (*plVar8 == lVar3) {
        iVar9 = (int)((longlong)plVar8 - (longlong)plVar12 >> 4);
        break;
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar2 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
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
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_141959560(lVar3,&local_b0);
    lVar3 = local_d8;
    local_f0 = (longlong *)0x0;
    if ((undefined8 *)(local_d8 + 0x240) != &local_f8) {
      *(undefined8 *)(local_d8 + 0x240) = 0;
      local_f8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_d8 + 0x248,&local_f0);
      plVar12 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_f0 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
    if (-1 < (int)(iVar9 - 1U)) {
      plVar11 = (longlong *)(ulonglong)(iVar9 - 1U);
    }
    FUN_1418dd2f0(lVar3,plVar11);
    iVar9 = (*(code *)**(undefined8 **)(lVar3 + 0x208))();
    plVar11 = local_100;
    if (iVar9 == 0) {
      FUN_14190bc20(local_100);
    }
    puVar7 = (undefined8 *)FUN_1418fdd60(lVar3,local_a0);
    FUN_1418eacf0(*puVar7,0);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_98 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_80 = plVar11[99];
    lStack_78 = plVar11[100];
    local_70 = plVar11[0x65];
    lStack_68 = plVar11[0x66];
    local_60 = (undefined4)plVar11[0x67];
    uStack_5c = *(undefined4 *)((longlong)plVar11 + 0x33c);
    uStack_58 = (undefined4)plVar11[0x68];
    uStack_54 = *(undefined4 *)((longlong)plVar11 + 0x344);
    local_50 = plVar11[0x69];
    puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar3 + 8,local_90);
    local_c0 = *puVar7;
    local_b8 = (longlong *)puVar7[1];
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_88 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    FUN_1418aeba0(local_e8,&local_c0,&local_80);
    plVar11 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_b8 + 1;
      lVar3 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_14190928c:
  plVar11 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e0 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return;
}



// FUNCTION 141909300 FUN_141909300 body=338 status=ok
// SIG undefined FUN_141909300(void)

void FUN_141909300(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 local_res18 [16];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FUN_1418cb840(param_2,&local_68);
  if (local_68 != 0) {
    *(undefined1 *)(param_1 + 0x3ac) = 0;
    plVar5 = DAT_1469eb140;
    lVar4 = *DAT_1469eb140;
    puVar6 = (undefined8 *)FName::FName(local_res18,L"Docking.Cross.Tint",1);
    puVar7 = (undefined4 *)(**(code **)(lVar4 + 0x28))(plVar5,*puVar6,0);
    local_30 = 1;
    local_28 = 0;
    local_20 = 0;
    local_40 = *puVar7;
    uStack_3c = puVar7[1];
    uStack_38 = puVar7[2];
    uStack_34 = puVar7[3];
    *(undefined1 *)(param_1 + 0x298) = 1;
    *(undefined4 *)(param_1 + 0x288) = local_40;
    *(undefined4 *)(param_1 + 0x28c) = uStack_3c;
    *(undefined4 *)(param_1 + 0x290) = uStack_38;
    *(undefined4 *)(param_1 + 0x294) = uStack_34;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2a0,&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    local_48 = 0;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    FUN_1418c1960(local_68,&local_58,param_2);
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plStack_50 != (longlong *)0x0)) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 141909460 FUN_141909460 body=642 status=ok
// SIG undefined FUN_141909460(void)

undefined1 *
FUN_141909460(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_1418cb840(param_4,&local_40);
  if (local_40 == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    plVar5 = local_38;
  }
  else {
    local_28 = *(longlong **)(param_1 + 0x210);
    local_30 = 0;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)local_28[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(local_28 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar4 == (int)local_28[1];
        if (bVar6) {
          *(int *)(local_28 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (local_28 != (longlong *)0x0) {
            local_30 = *(undefined8 *)(param_1 + 0x208);
          }
          goto LAB_1419094f5;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar6 = iVar4 == 0;
        if (bVar6) {
          *(int *)(local_28 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_28 = (longlong *)0x0;
    }
LAB_1419094f5:
    plVar5 = local_28;
    FUN_1418fdf10(local_20,&local_30,param_3,param_4);
    plVar2 = local_28;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    FUN_1418c1960(local_40,local_20,param_4);
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    plVar5 = local_38;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 8))(local_18,1);
        plVar5 = local_38;
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      local_38 = plVar5;
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1419096f0 FUN_1419096f0 body=1040 status=ok
// SIG undefined FUN_1419096f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419096f0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  float local_88;
  float local_84;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c8 = param_3;
  local_c0 = param_4;
  FUN_1418cb840(param_4,&local_f8);
  if (local_f8 != 0) {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_98);
    local_d0 = *puVar9;
    plVar5 = (longlong *)puVar9[1];
    plVar6 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar6 = (int)*plVar6 + 1;
      UNLOCK();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    local_b8 = local_d0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar6 = (int)*plVar6 + 1;
      UNLOCK();
    }
    local_b0 = plVar5;
    cVar8 = FUN_1418907c0(local_f8,&local_b8,1);
    plVar1 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (cVar8 != '\0') {
      plVar6 = *(longlong **)(param_1 + 0x3a8);
      local_a8 = *(undefined8 *)(param_1 + 0x3a0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_a0 = plVar6;
      FUN_14182e310(param_1,&local_88,local_c8,&local_a8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      local_d8 = local_64 * local_84;
      local_d4 = local_60 * local_84;
      local_e0 = local_6c * local_88;
      local_dc = local_68 * local_88;
      local_e8 = local_5c;
      local_e4 = local_58;
      cVar8 = FSlateRotatedRect::IsUnderLocation(&local_e8,local_c0 + 0x18);
      if (cVar8 == '\0') {
        if (*(char *)(param_1 + 0x3b0) != '\0') {
          SOverlay::RemoveSlot(*(undefined8 *)(param_1 + 0x3a0),0xffffffff);
          *(undefined1 *)(param_1 + 0x3b0) = 0;
        }
      }
      else {
        FUN_14191a180(param_1);
      }
      plVar6 = local_f0;
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      if (local_f0 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar5 = local_f0 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return param_2;
      }
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*local_f0 + 8))(local_f0,1);
      return param_2;
    }
  }
  plVar6 = local_f0;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f0 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141909b00 FUN_141909b00 body=703 status=ok
// SIG undefined FUN_141909b00(void)

undefined1 *
FUN_141909b00(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  FUN_1418cb840(param_4,&local_50);
  if (local_50 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x238);
    local_40 = (longlong *)0x0;
    plVar7 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (local_40 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
        LOCK();
        bVar8 = iVar6 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar8) {
          plVar7 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            local_40 = *(longlong **)(param_1 + 0x230);
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_38 = plVar7;
    cVar5 = FUN_1418907c0(local_50,&local_40);
    plVar3 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      LOCK();
      plVar3 = plVar7 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (cVar5 != '\0') {
      uVar9 = SDockingTabWell::ComputeDraggedTabOffset(param_1,param_3,param_4,param_1 + 0x254);
      *(undefined4 *)(param_1 + 0x250) = uVar9;
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      goto LAB_141909d59;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
LAB_141909d59:
  plVar3 = local_48;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141909dc0 FUN_141909dc0 body=465 status=ok
// SIG undefined FUN_141909dc0(void)

undefined1 * FUN_141909dc0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_38;
  longlong local_30;
  
  plVar2 = *(longlong **)(param_4 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    uVar7 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar3 + 0x50))(plVar2,uVar7);
    if (cVar5 != '\0') {
      plVar2 = *(longlong **)(param_4 + 0x78);
      lVar3 = *(longlong *)(param_4 + 0x70);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar2 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
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
      if (lVar3 != 0) {
        local_38 = *(undefined8 *)(param_1 + 0x300);
        local_30 = *(longlong *)(param_1 + 0x308);
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(param_1 + 0x2f8);
        plVar8 = plVar2;
        plVar9 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar2[1];
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar8 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = *(longlong **)(param_1 + 0x2f0);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar2 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_141907420(plVar9,&local_38,param_3,param_4);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        *param_2 = 1;
        goto LAB_141909f02;
      }
    }
  }
  *param_2 = 0;
LAB_141909f02:
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 141909fa0 FUN_141909fa0 body=465 status=ok
// SIG undefined FUN_141909fa0(void)

undefined1 * FUN_141909fa0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_38;
  longlong local_30;
  
  plVar2 = *(longlong **)(param_4 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    uVar7 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar3 + 0x50))(plVar2,uVar7);
    if (cVar5 != '\0') {
      plVar2 = *(longlong **)(param_4 + 0x78);
      lVar3 = *(longlong *)(param_4 + 0x70);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar2 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
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
      if (lVar3 != 0) {
        local_38 = *(undefined8 *)(param_1 + 0x2f0);
        local_30 = *(longlong *)(param_1 + 0x2f8);
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(param_1 + 0x308);
        plVar8 = plVar2;
        plVar9 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar2[1];
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar8 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = *(longlong **)(param_1 + 0x300);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar2 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_141907420(plVar9,&local_38,param_3,param_4);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        *param_2 = 1;
        goto LAB_14190a0e2;
      }
    }
  }
  *param_2 = 0;
LAB_14190a0e2:
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190a180 FUN_14190a180 body=330 status=ok
// SIG undefined FUN_14190a180(void)

undefined1 * FUN_14190a180(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_4 + 0x70);
  if (plVar8 == (longlong *)0x0) {
LAB_14190a1d5:
    lVar7 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = *plVar8;
    uVar6 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar7 + 0x50))(plVar8,uVar6);
    if (cVar5 == '\0') goto LAB_14190a1d5;
    plVar8 = *(longlong **)(param_4 + 0x78);
    lVar7 = *(longlong *)(param_4 + 0x70);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  if (lVar7 != 0) {
    cVar5 = FMultiBox::IsInEditMode(*(undefined8 *)(param_1 + 0x300));
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14190a1f8;
    }
  }
  bVar4 = false;
LAB_14190a1f8:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar4) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190a2d0 FUN_14190a2d0 body=266 status=ok
// SIG undefined FUN_14190a2d0(void)

undefined1 *
FUN_14190a2d0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FUN_1418cb840(param_4,local_18);
  lVar3 = *plVar5;
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
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190a3e0 FUN_14190a3e0 body=720 status=ok
// SIG undefined FUN_14190a3e0(void)

undefined1 *
FUN_14190a3e0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined4 local_30;
  
  plVar6 = (longlong *)FUN_1418cb840(param_4,local_50);
  lVar3 = *plVar6;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (lVar3 != 0) {
    local_58 = *(longlong **)(param_1 + 0x210);
    local_60 = 0;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)local_58[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(local_58 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar8) {
        LOCK();
        bVar8 = iVar5 == (int)local_58[1];
        if (bVar8) {
          *(int *)(local_58 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) {
          if (local_58 != (longlong *)0x0) {
            local_60 = *(undefined8 *)(param_1 + 0x208);
          }
          goto LAB_14190a4b5;
        }
        LOCK();
        iVar5 = (int)local_58[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(local_58 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      local_58 = (longlong *)0x0;
    }
LAB_14190a4b5:
    plVar6 = local_58;
    FUN_1418fdf10(&local_40,&local_60,param_3,param_4);
    plVar7 = local_58;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar6 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)local_38[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(local_38 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = local_38, !bVar8) {
        LOCK();
        bVar8 = iVar5 == (int)local_38[1];
        if (bVar8) {
          *(int *)(local_38 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) {
          if (local_40 != (longlong *)0x0) {
            (**(code **)(*local_40 + 0x230))(local_40,param_2,local_30,param_4);
            plVar7 = local_38;
            LOCK();
            plVar6 = plVar6 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plVar6 = local_38;
            if ((int)lVar3 == 1) {
              (**(code **)*local_38)(local_38);
              plVar6 = local_38;
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_38 + 8))(local_38,1);
              }
            }
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 != 1) {
              return param_2;
            }
            (**(code **)(*local_38 + 8))(local_38,1);
            return param_2;
          }
          LOCK();
          plVar2 = local_38 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_38)(local_38);
            plVar7 = local_38;
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
          break;
        }
        LOCK();
        iVar5 = (int)local_38[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(local_38 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190a6b0 FUN_14190a6b0 body=288 status=ok
// SIG undefined FUN_14190a6b0(void)

undefined1 *
FUN_14190a6b0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FUN_1418cb840(param_4,local_18);
  lVar3 = *plVar5;
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
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x3b0) != '\0')) {
    SOverlay::RemoveSlot(*(undefined8 *)(param_1 + 0x3a0),0xffffffff);
    *(undefined1 *)(param_1 + 0x3b0) = 0;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190a7d0 FUN_14190a7d0 body=1167 status=ok
// SIG undefined FUN_14190a7d0(void)

undefined1 *
FUN_14190a7d0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_1418cb840(param_4,&local_90);
  if (local_90 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x238);
    local_60 = (longlong *)0x0;
    plVar6 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (local_60 = (longlong *)0x0, plVar6 = (longlong *)0x0, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar6 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            local_60 = *(longlong **)(param_1 + 0x230);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_58 = plVar6;
    cVar3 = FUN_1418907c0(local_90,&local_60);
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_58 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (cVar3 != '\0') {
      plVar2 = (longlong *)(param_1 + 0x240);
      if (*plVar2 == 0) {
        plVar6 = (longlong *)FUN_14189f270(local_90,local_50);
        if (plVar2 != plVar6) {
          *plVar2 = *plVar6;
          *plVar6 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x248,plVar6 + 1);
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_48 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
      }
      lVar7 = *plVar2;
      if (lVar7 != 0) {
        local_68 = *(longlong **)(param_1 + 0x248);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        local_70 = lVar7;
        uVar5 = SDockingTabWell::ComputeChildDropIndex(param_1,param_3,&local_70);
        lVar7 = FUN_14189f270(local_90,local_40);
        plVar6 = *(longlong **)(lVar7 + 8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar6 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_38 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        plVar6 = *(longlong **)(param_1 + 0x238);
        plVar8 = plVar6;
        plVar9 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar6 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
            LOCK();
            bVar10 = iVar4 == (int)plVar6[1];
            if (bVar10) {
              *(int *)(plVar6 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar8 = plVar6;
              if (plVar6 != (longlong *)0x0) {
                plVar9 = *(longlong **)(param_1 + 0x230);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar6[1];
            bVar10 = iVar4 == 0;
            if (bVar10) {
              *(int *)(plVar6 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        FUN_141910330(plVar9,&local_70,uVar5);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar8 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        local_78 = (longlong *)0x0;
        if (plVar2 != &local_80) {
          *plVar2 = 0;
          local_80 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x248,&local_78);
          plVar2 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_78 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_78 + 8))(local_78,1);
              }
            }
          }
        }
        FReply::Handled(param_2);
        plVar2 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_68 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        goto LAB_14190ac04;
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
LAB_14190ac04:
  plVar2 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14190ac60 FUN_14190ac60 body=415 status=ok
// SIG undefined FUN_14190ac60(void)

undefined1 *
FUN_14190ac60(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_30 [8];
  longlong *local_28;
  
  plVar6 = (longlong *)FUN_1418cb840(param_4,local_30);
  lVar2 = *plVar6;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  plVar6 = (longlong *)0x0;
  if (lVar2 == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x3a0);
    plVar7 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar6, !bVar8) {
        LOCK();
        bVar8 = iVar5 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) {
          plVar7 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar6 = *(longlong **)(param_1 + 0x398);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    (**(code **)(*plVar6 + 0x230))(plVar6,param_2,*(undefined4 *)(param_1 + 0x3a8),param_4);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14190ae00 FUN_14190ae00 body=421 status=ok
// SIG undefined FUN_14190ae00(void)

undefined1 * FUN_14190ae00(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = *(longlong **)(param_4 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    uVar7 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar3 + 0x50))(plVar2,uVar7);
    if (cVar5 != '\0') {
      plVar2 = *(longlong **)(param_4 + 0x78);
      lVar3 = *(longlong *)(param_4 + 0x70);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar2 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
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
      if (lVar3 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x2f8);
        plVar8 = (longlong *)0x0;
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar2[1];
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar9 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar8 = *(longlong **)(param_1 + 0x2f0);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar2 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1419075b0(plVar8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        *param_2 = 1;
        goto LAB_14190af14;
      }
    }
  }
  *param_2 = 0;
LAB_14190af14:
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190afb0 FUN_14190afb0 body=421 status=ok
// SIG undefined FUN_14190afb0(void)

undefined1 * FUN_14190afb0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = *(longlong **)(param_4 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    uVar7 = FUN_1418ffe20();
    cVar5 = (**(code **)(lVar3 + 0x50))(plVar2,uVar7);
    if (cVar5 != '\0') {
      plVar2 = *(longlong **)(param_4 + 0x78);
      lVar3 = *(longlong *)(param_4 + 0x70);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar2 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
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
      if (lVar3 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x308);
        plVar8 = (longlong *)0x0;
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar2[1];
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar9 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar8 = *(longlong **)(param_1 + 0x300);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar2 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1419075b0(plVar8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        *param_2 = 1;
        goto LAB_14190b0c4;
      }
    }
  }
  *param_2 = 0;
LAB_14190b0c4:
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190b160 FUN_14190b160 body=317 status=ok
// SIG undefined FUN_14190b160(void)

undefined1 *
FUN_14190b160(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  plVar4 = *(longlong **)(param_4 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    lVar8 = *plVar4;
    uVar7 = FUN_1418ffe20();
    cVar6 = (**(code **)(lVar8 + 0x50))(plVar4,uVar7);
    if (cVar6 != '\0') {
      plVar4 = *(longlong **)(param_4 + 0x78);
      lVar8 = *(longlong *)(param_4 + 0x70);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      }
      goto LAB_14190b1f1;
    }
  }
  lVar8 = 0;
LAB_14190b1f1:
  if (lVar8 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1419075b0(param_1);
    *param_2 = 1;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190b2a0 OnDropExternal body=59 status=ok
// SIG undefined OnDropExternal(void)

void SMultiBoxWidget::OnDropExternal(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x340) != 0)) &&
     (*(int *)(param_1 + 0x350) != -1)) {
    FUN_141914c70();
    FUN_1418e5e50(param_1);
    return;
  }
  return;
}



// FUNCTION 14190b2e0 FUN_14190b2e0 body=384 status=ok
// SIG undefined FUN_14190b2e0(void)

void FUN_14190b2e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_1418fe220(*(undefined8 *)(param_1 + 0x350),&local_48);
  if (local_48 != 0) {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
    plVar5 = (longlong *)puVar9[1];
    uVar6 = *puVar9;
    plVar1 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar3 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    local_38 = uVar6;
    local_30 = plVar5;
    cVar8 = FUN_1418091e0(param_3,&local_38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (cVar8 != '\0') {
      puVar9 = (undefined8 *)FUN_1418fc990();
      FUN_141918400(*puVar9,&local_48);
      FUN_141926de0(local_48,1);
    }
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 14190b460 OnFocusReceived body=165 status=ok
// SIG undefined OnFocusReceived(void)

undefined1 *
SMultiBoxWidget::OnFocusReceived
          (undefined8 param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  if (*param_4 == '\x01') {
    FUN_1418f9c30(param_2,4);
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190b510 OnKeyChar body=334 status=ok
// SIG undefined OnKeyChar(void)

undefined1 *
SMultiBoxWidget::OnKeyChar(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  uint local_14;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (*(char *)(param_1 + 0x3e0) != '\0') {
    if (0x1f < *(ushort *)(param_4 + 0x18)) {
      FUN_14191dba0();
    }
    local_14 = local_14 & 0xffffff00;
    local_c8[0] = 1;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_48 = 0;
    local_40 = 0;
    local_18 = 0x20702;
    FUN_140439160(param_2,local_c8);
    FUN_140438c20(local_c8);
  }
  return param_2;
}



// FUNCTION 14190b660 FUN_14190b660 body=216 status=ok
// SIG undefined FUN_14190b660(void)

undefined1 *
FUN_14190b660(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_1418b2460(*(undefined8 *)(param_1 + 0x418),param_4);
  if (cVar1 == '\0') {
    FUN_1417c9760(param_1,param_2,param_3,param_4);
  }
  else {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 14190b740 FUN_14190b740 body=536 status=ok
// SIG undefined FUN_14190b740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14190b740(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = 0;
  FUN_1417c9760(param_1,local_108);
  FUN_140438c20(local_108);
  plVar4 = *(longlong **)(param_4 + 0x28);
  lVar5 = *(longlong *)(param_4 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar8 = false;
  if (lVar5 == DAT_1469e9a00) {
    plVar7 = (longlong *)CONCAT44(uStack_114,local_118);
  }
  else {
    plVar7 = *(longlong **)(param_4 + 0x28);
    lVar5 = *(longlong *)(param_4 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    if (lVar5 != DAT_1469e9a30) {
      bVar6 = false;
      goto LAB_14190b7de;
    }
  }
  bVar6 = true;
LAB_14190b7de:
  if ((bVar8) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (bVar6) {
    plVar4 = *(longlong **)(param_4 + 0x28);
    lVar5 = *(longlong *)(param_4 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    bVar8 = lVar5 == DAT_1469e9a00;
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
    FUN_1418f9c30(param_2,bVar8 + '\x04');
  }
  else {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 14190b960 FUN_14190b960 body=695 status=ok
// SIG undefined FUN_14190b960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14190b960(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  bVar7 = false;
  local_128 = 0;
  FUN_1417c9760(param_1,local_118);
  FUN_140438c20(local_118);
  if (*(char *)(param_1 + 0x3e0) == '\0') {
    plVar6 = (longlong *)CONCAT44(uStack_124,local_128);
LAB_14190b9e2:
    bVar5 = false;
  }
  else {
    plVar6 = *(longlong **)(param_4 + 0x28);
    lVar4 = *(longlong *)(param_4 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
    if (lVar4 != DAT_1469e98e0) goto LAB_14190b9e2;
    bVar5 = true;
  }
  if ((bVar7) && (plVar6 != (longlong *)0x0)) {
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
  bVar7 = false;
  if (bVar5) {
    FUN_141912700(param_1);
    goto LAB_14190ba35;
  }
  if (*(char *)(param_1 + 0x3e0) == '\0') {
    plVar6 = (longlong *)CONCAT44(uStack_124,local_128);
LAB_14190bb06:
    bVar5 = false;
  }
  else {
    plVar6 = *(longlong **)(param_4 + 0x28);
    bVar7 = true;
    lVar4 = *(longlong *)(param_4 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar4 != DAT_1469e9a60) goto LAB_14190bb06;
    bVar5 = true;
  }
  if ((bVar7) && (plVar6 != (longlong *)0x0)) {
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
  if (bVar5) {
    FUN_141914d80(param_1);
  }
  else {
    plVar6 = *(longlong **)(param_4 + 0x28);
    lVar4 = *(longlong *)(param_4 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar7 = lVar4 == DAT_1469e9a00;
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
    if (bVar7) {
      FUN_1418f9c30(param_2,5);
      return param_2;
    }
    plVar6 = *(longlong **)(param_4 + 0x28);
    lVar4 = *(longlong *)(param_4 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar7 = lVar4 == DAT_1469e9a30;
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
    if (bVar7) {
      FUN_1418f9c30(param_2,4);
      return param_2;
    }
  }
LAB_14190ba35:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190bc20 FUN_14190bc20 body=459 status=ok
// SIG undefined FUN_14190bc20(void)

void FUN_14190bc20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x3b8) != '\0') {
    puVar5 = (undefined8 *)FUN_141903cb0(local_18);
    plVar3 = *(longlong **)(param_1 + 0x390);
    local_78 = *puVar5;
    local_70 = puVar5[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x208))(plVar3,&local_78);
    local_38 = DAT_1469eb218;
    lStack_30 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    FUN_140692760(*(undefined8 *)(param_1 + 0x360),&local_38);
    local_28 = DAT_1469eb218;
    lStack_20 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    FUN_140692760(*(undefined8 *)(param_1 + 0x368),&local_28);
    FUN_140801a00(*(undefined8 *)(param_1 + 0x370),&DAT_1469eb218);
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
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x390);
  local_68 = DAT_1469eb218;
  lStack_60 = DAT_1469eb220;
  if (DAT_1469eb220 != 0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x208))(plVar3,&local_68);
  local_58 = DAT_1469eb218;
  lStack_50 = DAT_1469eb220;
  if (DAT_1469eb220 != 0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
    UNLOCK();
  }
  FUN_140692760(*(undefined8 *)(param_1 + 0x360),&local_58);
  local_48 = DAT_1469eb218;
  lStack_40 = DAT_1469eb220;
  if (DAT_1469eb220 != 0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
    UNLOCK();
  }
  FUN_140692760(*(undefined8 *)(param_1 + 0x368),&local_48);
  FUN_140801a00(*(undefined8 *)(param_1 + 0x370),&DAT_1469eb218);
  return;
}



// FUNCTION 14190bdf0 FUN_14190bdf0 body=317 status=ok
// SIG undefined FUN_14190bdf0(void)

void FUN_14190bdf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x359) = 0;
  uVar6 = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0xb0) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0xb1) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,&local_20,param_3,param_4,uVar6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  plVar3 = *(longlong **)(param_1 + 0x2f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar7 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          plVar4 = *(longlong **)(param_1 + 0x2f0);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x250))(plVar4);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar8 = iVar7 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  FUN_1418eacf0(param_1,2);
  return;
}



// FUNCTION 14190bf30 FUN_14190bf30 body=288 status=ok
// SIG undefined FUN_14190bf30(void)

void FUN_14190bf30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar6 = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0xb0) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0xb1) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,&local_20,param_3,param_4,uVar6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  plVar3 = *(longlong **)(param_1 + 0x2f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar7 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_1 + 0x2f0);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x250))(plVar4);
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 14190c050 FUN_14190c050 body=147 status=ok
// SIG undefined FUN_14190c050(void)

undefined1 * FUN_14190c050(undefined8 param_1,undefined1 *param_2)

{
  FUN_1419069c0(param_1,0);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190c0f0 FUN_14190c0f0 body=281 status=ok
// SIG undefined FUN_14190c0f0(void)

undefined1 * FUN_14190c0f0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong local_18;
  longlong *local_10;
  
  FUN_1418fe220(*(undefined8 *)(param_1 + 0x350),&local_18);
  if (local_18 != 0) {
    cVar6 = FUN_141944e10();
    if (cVar6 == '\0') {
      puVar7 = (undefined8 *)FUN_1418fc990();
      FUN_141918400(*puVar7,&local_18);
      *param_2 = 1;
      goto LAB_14190c140;
    }
  }
  *param_2 = 0;
LAB_14190c140:
  plVar5 = local_10;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
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
  return param_2;
}



// FUNCTION 14190c210 FUN_14190c210 body=832 status=ok
// SIG undefined FUN_14190c210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14190c210(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  local_148 = (longlong *)((ulonglong)local_148 & 0xffffffff00000000);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar6 = false;
  plVar10 = local_148;
  if (lVar5 == DAT_1469e9868) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x2f0) + 0x68);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x60);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    if (lVar5 != 0) {
      bVar7 = true;
      goto LAB_14190c29e;
    }
  }
  bVar7 = false;
LAB_14190c29e:
  if ((bVar6) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  if (bVar7) {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_118);
    local_148 = (longlong *)*puVar8;
    plVar4 = (longlong *)puVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_110 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar10 = plVar4 + 1;
    local_140 = local_148;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar10 = (int)*plVar10 + 1;
      UNLOCK();
    }
    local_130 = *(undefined8 *)(param_4 + 0x38);
    local_128 = *(undefined8 *)(param_4 + 0x40);
    local_120 = *(longlong *)(param_4 + 0x48);
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    local_54 = local_54 & 0xffffff00;
    local_108[0] = 1;
    local_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x20702;
    local_138 = plVar4;
    uVar9 = FUN_140466100(local_108,&local_140,&local_130);
    FUN_140438260(param_2,uVar9);
    FUN_140438c20(local_108);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
      LOCK();
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
  }
  else {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 14190c550 FUN_14190c550 body=644 status=ok
// SIG undefined FUN_14190c550(void)

undefined1 * FUN_14190c550(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  
  cVar4 = FUN_141846080();
  if (cVar4 != '\0') {
    plVar8 = (longlong *)(param_1 + 0x240);
    local_108 = *plVar8;
    if (local_108 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x248);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_f0 = (longlong *)0x0;
      uStack_100 = plVar7;
      if (plVar8 != &local_f8) {
        *plVar8 = 0;
        local_f8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((longlong *)(param_1 + 0x248),&local_f0);
        plVar8 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_f0 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = uStack_100;
          if ((int)lVar3 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = uStack_100;
            if (iVar2 == 1) {
              (**(code **)(*local_f0 + 8))(local_f0,1);
              plVar7 = uStack_100;
            }
          }
        }
      }
      uVar5 = SDockingTabWell::ComputeChildDropIndex(param_1,param_3,&local_108);
      FUN_141901000(param_1 + 0x208,&local_108,uVar5);
      local_e8 = (undefined4)local_108;
      uStack_e4 = local_108._4_4_;
      uStack_e0 = (undefined4)uStack_100;
      uStack_dc = uStack_100._4_4_;
      plVar8 = (longlong *)0x0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar8 = uStack_100;
      }
      FUN_1418dd780(param_1,&local_e8);
      local_24 = local_24 & 0xffffff00;
      local_d8[0] = 1;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_58 = 0;
      local_50 = 0;
      local_28 = 0x20702;
      uVar6 = FUN_1406a1ac0(local_d8);
      FUN_140438260(param_2,uVar6);
      FUN_140438c20(local_d8);
      plVar7 = uStack_100;
      if (plVar8 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar8 = plVar8 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_2;
      }
      (**(code **)*uStack_100)(uStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*uStack_100 + 8))(uStack_100,1);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190c7e0 OnMouseButtonUp body=55 status=ok
// SIG undefined OnMouseButtonUp(void)

undefined8 SMenuEntryButton::OnMouseButtonUp(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x488) == 1) {
    *(byte *)(param_1 + 0x483) = *(byte *)(param_1 + 0x483) | 2;
  }
  FUN_14194d5b0();
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return param_2;
}



// FUNCTION 14190c820 FUN_14190c820 body=992 status=ok
// SIG undefined FUN_14190c820(void)

void FUN_14190c820(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined8 local_80;
  float local_78 [2];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar13 = param_3;
  SWidget::OnMouseEnter();
  plVar3 = *(longlong **)(param_1 + 0x308);
  lVar4 = *(longlong *)(param_1 + 0x300);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x2f8);
  plVar14 = (longlong *)0x0;
  local_80 = 0;
  plVar12 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar9[1];
    bVar15 = iVar8 == 0;
    if (bVar15) {
      *(int *)(plVar9 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar12 = plVar14, !bVar15) {
      LOCK();
      bVar15 = iVar8 == (int)plVar9[1];
      if (bVar15) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar12 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          local_80 = *(undefined8 *)(param_1 + 0x2f0);
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar9[1];
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(plVar9 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  FUN_141984b00(local_80,&local_70);
  if ((local_70 == (longlong *)0x0) || (cVar7 = FUN_14192b710(), cVar7 == '\0')) {
    bVar15 = false;
    bVar5 = false;
    bVar10 = false;
  }
  else {
    bVar15 = true;
    bVar5 = true;
    FUN_141940d80(local_70,local_78);
    bVar10 = (*(float *)(param_3 + 0x18) <= local_78[0] && local_78[0] != *(float *)(param_3 + 0x18)
             ) != *(float *)(param_3 + 0x28) < 0.0;
  }
  if (((((*(int *)(lVar4 + 0x128) == 0) || (*(longlong **)(lVar4 + 0x120) == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x120) + 0x18))(), cVar7 == '\0')) &&
      (((*(int *)(lVar4 + 0x138) == 0 || (*(longlong **)(lVar4 + 0x130) == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x130) + 0x18))(), cVar7 == '\0')))) &&
     (*(longlong *)(lVar4 + 0x140) == 0)) {
    if (bVar15) {
      FUN_1419149e0(param_1 + -8,0,bVar10);
    }
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x340);
    plVar11 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar8 = (int)plVar9[1];
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(plVar9 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (plVar11 = plVar14, !bVar16) {
        LOCK();
        bVar16 = iVar8 == (int)plVar9[1];
        if (bVar16) {
          *(int *)(plVar9 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar16) {
          plVar11 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            plVar14 = *(longlong **)(param_1 + 0x338);
          }
          break;
        }
        LOCK();
        iVar8 = (int)plVar9[1];
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(plVar9 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
    }
    if (*(char *)(lVar4 + 0x150) == '\0') {
      if (((bVar15) && (local_70 != plVar14)) &&
         (FUN_14196e970(local_80), plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x210))(plVar14,1,1,0);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_60 = plVar14;
        local_58 = plVar11;
        FUN_1418c26d0(local_80,&local_60);
      }
    }
    else if (*(char *)(lVar4 + 0x151) == '\0') {
      plVar9 = (longlong *)FUN_141984b00(local_80,local_50);
      plVar9 = (longlong *)*plVar9;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      if (plVar9 != plVar14) {
        if ((bVar5) && (bVar10 != false)) {
          FUN_1419149e0(param_1 + -8,1);
        }
        else {
          FUN_1419149e0(param_1 + -8,1,uVar13 & 0xffffffffffffff00);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar12 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14190cc00 OnMouseLeave body=28 status=ok
// SIG undefined OnMouseLeave(void)

void SMenuEntryBlock::OnMouseLeave(longlong param_1)

{
  SWidget::OnMouseLeave();
  FUN_1418eabf0(param_1 + -8);
  return;
}



// FUNCTION 14190cc40 OnMouseMove body=221 status=ok
// SIG undefined OnMouseMove(void)

undefined1 *
SDockingTabWell::OnMouseMove
          (longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_141846080();
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    uVar2 = ComputeDraggedTabOffset(param_1,param_3,param_4,param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x250) = uVar2;
    *param_2 = 1;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14190cd20 FUN_14190cd20 body=416 status=ok
// SIG undefined FUN_14190cd20(void)

undefined8 FUN_14190cd20(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *plVar10;
  undefined4 uStackX_c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar3 = (longlong *)param_1[0xb7];
  bVar9 = false;
  if (((plVar3 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x632) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x631) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    iVar6 = (**(code **)(*param_1 + 0x230))();
    lVar4 = param_1[0xb3];
    if (lVar4 == 0) {
      plVar10 = (longlong *)CONCAT44(uStackX_c,iVar6);
      iVar7 = 0;
    }
    else {
      plVar10 = (longlong *)param_1[0xb4];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar3;
      for (plVar8 = plVar5; plVar8 != plVar5 + (longlong)(int)plVar3[1] * 2; plVar8 = plVar8 + 2) {
        if (*plVar8 == lVar4) {
          iVar7 = (int)((longlong)plVar8 - (longlong)plVar5 >> 4);
          goto LAB_14190cde1;
        }
      }
      iVar7 = -1;
LAB_14190cde1:
      bVar9 = true;
    }
    if ((bVar9) && (plVar10 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plVar10 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (*(char *)(param_4 + 0x18) == '\x02') {
      iVar6 = -iVar6;
    }
    else if (*(char *)(param_4 + 0x18) != '\x03') goto LAB_14190ce99;
    iVar7 = iVar7 + iVar6;
    if ((-1 < iVar7) && (iVar7 < (int)plVar3[1])) {
      (**(code **)(*param_1 + 0x278))(param_1,(longlong)iVar7 * 0x10 + *plVar3,param_4);
      local_48 = 0;
      uStack_40 = 0;
      FUN_1418f84e0(param_2,&local_48);
      return param_2;
    }
  }
LAB_14190ce99:
  FUN_1417ca320(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14190cec0 FUN_14190cec0 body=452 status=ok
// SIG undefined FUN_14190cec0(void)

undefined8 FUN_14190cec0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uStackX_c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar3 = (longlong *)param_1[0xb7];
  bVar6 = false;
  if (((plVar3 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x632) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x631) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    iVar7 = (**(code **)(*param_1 + 0x230))();
    lVar4 = param_1[0xb3];
    iVar8 = 1;
    if (lVar4 == 0) {
      plVar12 = (longlong *)CONCAT44(uStackX_c,iVar7);
      uVar11 = 0;
    }
    else {
      plVar12 = (longlong *)param_1[0xb4];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar3;
      for (plVar10 = plVar5; plVar10 != plVar5 + (longlong)(int)plVar3[1] * 2; plVar10 = plVar10 + 2
          ) {
        if (*plVar10 == lVar4) {
          uVar11 = (longlong)plVar10 - (longlong)plVar5 >> 4;
          goto LAB_14190cf87;
        }
      }
      uVar11 = 0xffffffff;
LAB_14190cf87:
      bVar6 = true;
    }
    if ((bVar6) && (plVar12 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plVar12 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    uVar9 = (int)uVar11 >> 0x1f;
    if (*(char *)(param_4 + 0x18) == '\0') {
      if (((char)param_1[199] == '\0') &&
         ((int)((longlong)((ulonglong)uVar9 << 0x20 | uVar11 & 0xffffffff) % (longlong)iVar7) < 1))
      goto LAB_14190cff5;
      iVar8 = -1;
    }
    else if ((*(char *)(param_4 + 0x18) != '\x01') ||
            (((char)param_1[199] == '\0' &&
             (iVar7 + -1 <=
              (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar11 & 0xffffffff) % (longlong)iVar7))))
            ) goto LAB_14190cff5;
    iVar8 = (int)uVar11 + iVar8;
    if ((-1 < iVar8) && (iVar8 < (int)plVar3[1])) {
      (**(code **)(*param_1 + 0x278))(param_1,(longlong)iVar8 * 0x10 + *plVar3,param_4);
      local_48 = 0;
      uStack_40 = 0;
      FUN_1418f84e0(param_2,&local_48);
      return param_2;
    }
  }
LAB_14190cff5:
  FUN_14190cd20(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14190d090 FUN_14190d090 body=132 status=ok
// SIG undefined FUN_14190d090(void)

void FUN_14190d090(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  (**(code **)(*param_1 + 0x228))(param_1,&local_18);
  iVar3 = 0;
  if (0 < local_10) {
    lVar4 = 0;
    do {
      cVar1 = FUN_141945110(*(undefined8 *)(lVar4 + local_18));
      if (cVar1 != '\0') {
        puVar2 = (undefined8 *)FUN_1418fc990();
        FUN_14191d8e0(*puVar2,(longlong)iVar3 * 0x10 + local_18,1);
        break;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < local_10);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 14190d120 FUN_14190d120 body=265 status=ok
// SIG undefined FUN_14190d120(void)

void FUN_14190d120(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_28;
  int local_20;
  undefined8 local_18;
  longlong local_10;
  
  (**(code **)(*param_1 + 0x228))(param_1,&local_28);
  uVar3 = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (0 < local_20) {
    do {
      FUN_1419547d0(*(undefined8 *)(uVar6 + local_28));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x10;
    } while ((int)uVar4 < local_20);
  }
  cVar2 = '\x01';
  uVar5 = uVar3;
  uVar6 = uVar3;
  do {
    if (local_20 <= (int)uVar6) {
      if (cVar2 != '\0') {
        uVar5 = uVar3;
        if (0 < local_20) {
          do {
            FUN_141955900(*(undefined8 *)(uVar5 + local_28));
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar4;
            uVar5 = uVar5 + 0x10;
          } while ((int)uVar4 < local_20);
        }
        plVar1 = DAT_1469f4590;
        local_18 = *param_2;
        local_10 = param_2[1];
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar1 + 0x108))(plVar1,&local_18);
      }
      break;
    }
    cVar2 = FUN_14192a150(*(undefined8 *)(uVar5 + local_28));
    uVar6 = (ulonglong)((int)uVar6 + 1);
    uVar5 = uVar5 + 0x10;
  } while (cVar2 != '\0');
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  return;
}



// FUNCTION 14190d230 FUN_14190d230 body=924 status=ok
// SIG undefined FUN_14190d230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014190d3da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14190d230(longlong *param_1,undefined8 param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,float *param_7,undefined1 param_8)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  float fVar9;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  float *local_380;
  float *local_378;
  undefined1 local_370;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  float fStack_330;
  float fStack_32c;
  undefined4 uStack_328;
  float local_324;
  float local_320;
  float local_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  undefined8 local_30c;
  byte local_304;
  undefined1 local_300 [8];
  undefined1 local_2f8 [288];
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [288];
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  local_1c0[0] = DAT_1464b9ee8;
  uVar6 = 0;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_348 = param_4;
  local_340 = param_2;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_1c0);
  local_300[0] = DAT_1464b9ee8;
  local_1d8 = (undefined1 *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  SBoxPanel::OnArrangeChildren(param_1,param_3,local_300);
  if (((int)local_90 != 0) && ((int)local_1d0 != 0)) {
    puVar7 = local_1b8;
    if (local_98 != (undefined1 *)0x0) {
      puVar7 = local_98;
    }
    fVar9 = *param_3;
    lVar1 = (longlong)((int)local_90 + -1) * 0x48;
    puVar8 = local_2f8;
    if (local_1d8 != (undefined1 *)0x0) {
      puVar8 = local_1d8;
    }
    lVar4 = (longlong)((int)local_1d0 + -1);
    if ((int)local_90 + -1 == (int)local_1d0 + -2) {
      if ((int)(param_3[2] * fVar9 + param_3[3]) <=
          (int)(*(float *)(puVar8 + lVar4 * 0x48 + 8) * *(float *)(puVar8 + lVar4 * 0x48) +
               *(float *)(puVar8 + lVar4 * 0x48 + 0xc))) {
        fVar9 = ((*(float *)(puVar7 + lVar1 + 8) * *(float *)(puVar7 + lVar1) +
                 *(float *)(puVar7 + lVar1 + 0xc)) - *(float *)(puVar8 + 0xc)) / param_3[2];
      }
    }
    else {
      fVar9 = ((*(float *)(puVar7 + lVar1 + 8) * *(float *)(puVar7 + lVar1) +
               *(float *)(puVar7 + lVar1 + 0xc)) - *(float *)(puVar8 + 0xc)) / param_3[2];
    }
    cVar2 = SWidget::ShouldBeEnabled(param_1,param_8);
    lVar1 = param_1[0x49];
    pfVar5 = (float *)(lVar1 + 0x20);
    if (cVar2 == '\0') {
      uVar6 = 0x20;
    }
    fStack_330 = (float)_DAT_1464aa6c8;
    fStack_32c = (float)((ulonglong)_DAT_1464aa6c8 >> 0x20);
    cVar2 = *(char *)(lVar1 + 0x30);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        pfVar5 = *(float **)(lVar1 + 0x38);
      }
      else if (cVar2 == '\x03') {
        pfVar5 = param_7 + 8;
      }
      else {
        pfVar5 = param_7 + 4;
      }
    }
    local_320 = param_3[1];
    local_304 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_304 & 0xfc;
    local_380 = &local_358;
    local_338._4_4_ = (float)((ulonglong)_DAT_1464aa6c0 >> 0x20);
    local_354 = pfVar5[1] * param_7[1] * local_338._4_4_;
    local_388 = CONCAT71(local_388._1_7_,uVar6);
    local_34c = pfVar5[3] * param_7[3] * fStack_32c;
    fStack_32c = 0.0;
    uStack_328 = 0;
    local_338._0_4_ = (float)_DAT_1464aa6c0;
    local_358 = *pfVar5 * *param_7 * (float)local_338;
    local_350 = pfVar5[2] * param_7[2] * fStack_330;
    local_368 = param_3[7];
    fStack_364 = param_3[8];
    fStack_360 = param_3[9];
    fStack_35c = param_3[10];
    local_338 = *(undefined8 *)(param_3 + 3);
    local_30c = *(undefined8 *)(param_3 + 0xb);
    fStack_330 = param_3[2];
    local_324 = fVar9;
    local_31c = local_368;
    fStack_318 = fStack_364;
    fStack_314 = fStack_360;
    fStack_310 = fStack_35c;
    FSlateDrawElement::MakeBox(param_5,param_6,local_368);
  }
  local_370 = param_8;
  local_378 = param_7;
  local_380 = (float *)CONCAT44(local_380._4_4_,param_6);
  local_388 = param_5;
  uVar3 = FUN_14184f2b0(param_1,local_340,param_3,local_348);
  FUN_140456b10(local_2f8);
  FUN_140456b10(local_1b8);
  return uVar3;
}



// FUNCTION 14190d5d0 OnPaint body=1922 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
SDockingCross::OnPaint
          (undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 *local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  float *local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  fVar1 = *param_3;
  fVar8 = fVar1 * 0.3;
  if (5.0 <= fVar8) {
    if (150.0 <= fVar8) {
      fVar8 = 150.0;
    }
  }
  else {
    fVar8 = 5.0;
  }
  fVar2 = param_3[1];
  fVar6 = fVar2 * 0.3;
  fVar7 = 5.0;
  if ((5.0 <= fVar6) && (fVar7 = fVar6, 150.0 <= fVar6)) {
    fVar7 = 150.0;
  }
  local_d0 = 1;
  fVar6 = fVar1 - fVar8;
  local_d8 = (float *)0x0;
  fVar9 = fVar2 - fVar7;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  *local_d8 = fVar8;
  local_d8[1] = fVar7;
  lVar5 = (longlong)(int)local_d0;
  iVar3 = (int)local_d0 + 1;
  if (local_d0._4_4_ < iVar3) {
    uVar4 = local_d0 & 0xffffffff;
    local_d0._0_4_ = iVar3;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4);
    iVar3 = (int)local_d0;
  }
  local_d0._0_4_ = iVar3;
  iVar3 = (int)local_d0;
  local_d8[lVar5 * 2] = fVar6;
  local_d8[lVar5 * 2 + 1] = fVar7;
  lVar5 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  iVar3 = (int)local_d0;
  local_d8[lVar5 * 2] = fVar6;
  local_d8[lVar5 * 2 + 1] = fVar9;
  lVar5 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  iVar3 = (int)local_d0;
  local_d8[lVar5 * 2] = fVar8;
  local_d8[lVar5 * 2 + 1] = fVar9;
  lVar5 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  local_e0 = 0x3f800000;
  local_d8[lVar5 * 2] = fVar8;
  local_d8[lVar5 * 2 + 1] = fVar7;
  local_c8 = param_3[3];
  local_c4 = param_3[4];
  local_c0 = param_3[2];
  local_94 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_94 & 0xfc;
  local_b4 = *(undefined8 *)param_3;
  local_ac = param_3[7];
  fStack_a8 = param_3[8];
  fStack_a4 = param_3[9];
  fStack_a0 = param_3[10];
  local_9c = *(undefined8 *)(param_3 + 0xb);
  local_e8 = 1;
  local_f0 = &DAT_1464aa6c0;
  local_bc = 0;
  local_f8 = 0;
  FSlateDrawElement::MakeLines(param_5,param_6,&local_c8,&local_d8);
  if (local_d8 != (float *)0x0) {
    FMemory::Free();
  }
  local_d8 = (float *)0x0;
  local_d0 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  local_d8[0] = 0.0;
  local_d8[1] = 0.0;
  lVar5 = (longlong)(int)local_d0;
  iVar3 = (int)local_d0 + 1;
  if (local_d0._4_4_ < iVar3) {
    uVar4 = local_d0 & 0xffffffff;
    local_d0._0_4_ = iVar3;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4);
    iVar3 = (int)local_d0;
  }
  local_d0._0_4_ = iVar3;
  iVar3 = (int)local_d0;
  local_d8[lVar5 * 2] = fVar1;
  local_d8[lVar5 * 2 + 1] = 0.0;
  lVar5 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  iVar3 = (int)local_d0;
  local_d8[lVar5 * 2] = fVar1;
  local_d8[lVar5 * 2 + 1] = fVar2;
  lVar5 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  iVar3 = (int)local_d0;
  local_d8[lVar5 * 2 + 1] = fVar2;
  local_d8[lVar5 * 2] = 0.0;
  lVar5 = (longlong)(int)local_d0;
  local_d0._0_4_ = (int)local_d0 + 1;
  if (local_d0._4_4_ < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  local_e0 = 0x3f800000;
  local_e8 = 1;
  local_f0 = &DAT_1464aa6c0;
  (local_d8 + lVar5 * 2)[0] = 0.0;
  (local_d8 + lVar5 * 2)[1] = 0.0;
  local_c8 = param_3[3];
  local_c4 = param_3[4];
  local_c0 = param_3[2];
  local_94 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_94 & 0xfc;
  local_b4 = *(undefined8 *)param_3;
  local_ac = param_3[7];
  fStack_a8 = param_3[8];
  fStack_a4 = param_3[9];
  fStack_a0 = param_3[10];
  local_9c = *(undefined8 *)(param_3 + 0xb);
  local_bc = 0;
  local_f8 = 0;
  FSlateDrawElement::MakeLines(param_5,param_6,&local_c8,&local_d8);
  if (local_d8 != (float *)0x0) {
    FMemory::Free();
  }
  local_d8 = (float *)0x0;
  local_d0 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  uVar4 = local_d0;
  local_d8[0] = 0.0;
  local_d8[1] = 0.0;
  lVar5 = (longlong)(int)local_d0;
  iVar3 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar3);
  if (local_d0._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4 & 0xffffffff);
  }
  local_e0 = 0x3f800000;
  local_e8 = 1;
  local_f0 = &DAT_1464aa6c0;
  local_d8[lVar5 * 2] = fVar8;
  local_d8[lVar5 * 2 + 1] = fVar7;
  local_c8 = param_3[3];
  local_c4 = param_3[4];
  local_c0 = param_3[2];
  local_94 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_94 & 0xfc;
  local_b4 = *(undefined8 *)param_3;
  local_ac = param_3[7];
  fStack_a8 = param_3[8];
  fStack_a4 = param_3[9];
  fStack_a0 = param_3[10];
  local_9c = *(undefined8 *)(param_3 + 0xb);
  local_bc = 0;
  local_f8 = 0;
  FSlateDrawElement::MakeLines(param_5,param_6,&local_c8,&local_d8);
  if (local_d8 != (float *)0x0) {
    FMemory::Free();
  }
  local_d8 = (float *)0x0;
  local_d0 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  uVar4 = local_d0;
  *local_d8 = fVar1;
  local_d8[1] = 0.0;
  lVar5 = (longlong)(int)local_d0;
  iVar3 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar3);
  if (local_d0._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4 & 0xffffffff);
  }
  local_e0 = 0x3f800000;
  local_e8 = 1;
  local_f0 = &DAT_1464aa6c0;
  local_d8[lVar5 * 2] = fVar6;
  local_d8[lVar5 * 2 + 1] = fVar7;
  local_c8 = param_3[3];
  local_c4 = param_3[4];
  local_c0 = param_3[2];
  local_94 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_94 & 0xfc;
  local_b4 = *(undefined8 *)param_3;
  local_ac = param_3[7];
  fStack_a8 = param_3[8];
  fStack_a4 = param_3[9];
  fStack_a0 = param_3[10];
  local_9c = *(undefined8 *)(param_3 + 0xb);
  local_bc = 0;
  local_f8 = 0;
  FSlateDrawElement::MakeLines(param_5,param_6,&local_c8,&local_d8);
  if (local_d8 != (float *)0x0) {
    FMemory::Free();
  }
  local_d8 = (float *)0x0;
  local_d0 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  uVar4 = local_d0;
  *local_d8 = fVar1;
  local_d8[1] = fVar2;
  lVar5 = (longlong)(int)local_d0;
  iVar3 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar3);
  if (local_d0._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4 & 0xffffffff);
  }
  local_e0 = 0x3f800000;
  local_e8 = 1;
  local_f0 = &DAT_1464aa6c0;
  local_d8[lVar5 * 2] = fVar6;
  local_d8[lVar5 * 2 + 1] = fVar9;
  local_c8 = param_3[3];
  local_c4 = param_3[4];
  local_c0 = param_3[2];
  local_94 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_94 & 0xfc;
  local_b4 = *(undefined8 *)param_3;
  local_ac = param_3[7];
  fStack_a8 = param_3[8];
  fStack_a4 = param_3[9];
  fStack_a0 = param_3[10];
  local_9c = *(undefined8 *)(param_3 + 0xb);
  local_bc = 0;
  local_f8 = 0;
  FSlateDrawElement::MakeLines(param_5,param_6,&local_c8,&local_d8);
  if (local_d8 != (float *)0x0) {
    FMemory::Free();
  }
  local_d8 = (float *)0x0;
  local_d0 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  uVar4 = local_d0;
  local_d8[1] = fVar2;
  *local_d8 = 0.0;
  lVar5 = (longlong)(int)local_d0;
  iVar3 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar3);
  if (local_d0._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4 & 0xffffffff);
  }
  local_e0 = 0x3f800000;
  local_e8 = 1;
  local_f0 = &DAT_1464aa6c0;
  local_d8[lVar5 * 2] = fVar8;
  local_d8[lVar5 * 2 + 1] = fVar9;
  local_c8 = param_3[3];
  local_c4 = param_3[4];
  local_c0 = param_3[2];
  local_94 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_94 & 0xfc;
  local_b4 = *(undefined8 *)param_3;
  local_ac = param_3[7];
  fStack_a8 = param_3[8];
  fStack_a4 = param_3[9];
  fStack_a0 = param_3[10];
  local_9c = *(undefined8 *)(param_3 + 0xb);
  local_bc = 0;
  local_f8 = 0;
  FSlateDrawElement::MakeLines(param_5,param_6,&local_c8,&local_d8);
  if (local_d8 != (float *)0x0) {
    FMemory::Free();
  }
  return param_6;
}



// FUNCTION 14190dd60 FUN_14190dd60 body=1469 status=ok
// SIG undefined FUN_14190dd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14190dd60(longlong *param_1,longlong param_2,undefined8 param_3,float *param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  int local_310;
  undefined8 local_308;
  undefined1 local_300;
  float *local_2f8;
  longlong local_2f0;
  float *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined8 local_254;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined8 local_23c;
  float local_234;
  undefined1 local_230 [16];
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_204;
  undefined1 local_203;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined1 local_1bc;
  undefined1 local_1bb;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_180 [8];
  undefined1 local_178 [288];
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2d8 = param_5;
  local_2e0 = param_7;
  local_180[0] = DAT_1464b9ee8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_2e8 = param_4;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_180);
  FUN_1418fe220(param_1,&local_2b0);
  lVar15 = (longlong)((int)local_50 + -1);
  local_2f8 = (float *)0x0;
  if (-1 < (int)local_50 + -1) {
    local_2f0 = lVar15 * 0x48;
    puVar12 = local_58;
    do {
      plVar11 = (longlong *)0x0;
      puVar13 = local_178;
      if (puVar12 != (undefined1 *)0x0) {
        puVar13 = puVar12;
      }
      pfVar14 = (float *)(puVar13 + local_2f0);
      if ((local_2b0 == 0) || (iVar10 = param_6, local_2b0 != *(longlong *)(pfVar14 + 0xe))) {
        local_260 = pfVar14[3];
        local_25c = pfVar14[4];
        local_24c = pfVar14[2] * pfVar14[1];
        local_254 = 0;
        local_258 = pfVar14[2] * *pfVar14;
        FSlateRotatedRect::ToBoundingRect(&local_260,&local_2a0);
        fVar17 = local_2e8[3];
        if (local_294 <= local_2e8[3]) {
          fVar17 = local_294;
        }
        fVar18 = local_2e8[1];
        if (local_2e8[1] <= local_29c) {
          fVar18 = local_29c;
        }
        fVar16 = local_2e8[2];
        if (local_298 <= local_2e8[2]) {
          fVar16 = local_298;
        }
        fVar3 = *local_2e8;
        if (*local_2e8 <= local_2a0) {
          fVar3 = local_2a0;
        }
        if ((fVar17 < fVar18) || (fVar16 < fVar3)) {
          local_2d0 = 0;
          uStack_2c8 = 0;
        }
        else {
          local_2d0 = CONCAT44(fVar18,fVar3);
          uStack_2c8 = CONCAT44(fVar17,fVar16);
        }
        if (param_8 == '\0') {
LAB_14190df6f:
          uVar9 = 0;
        }
        else {
          if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar8 != '\0')) {
            if ((int)param_1[0x15] != 0) {
              plVar11 = (longlong *)param_1[0x14];
            }
            uVar9 = (**(code **)(*plVar11 + 0x38))();
            *(undefined1 *)(param_1 + 0x13) = uVar9;
          }
          if ((char)param_1[0x13] == '\0') goto LAB_14190df6f;
          uVar9 = 1;
        }
        local_310 = *(undefined4 *)(param_2 + 0x28);
        local_318 = *(undefined8 *)(param_2 + 0x20);
        FPaintArgs::FPaintArgs
                  (local_230,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
        local_220 = *(undefined4 *)(param_2 + 0x10);
        local_21c = *(undefined1 *)(param_2 + 0x14);
        uVar6 = *(undefined8 *)(param_2 + 0x30);
        lVar5 = *(longlong *)(param_2 + 0x38);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
          UNLOCK();
        }
        uVar7 = CONCAT44(uStack_1fc,local_200);
        plVar11 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
        local_290._0_4_ = (undefined4)uVar6;
        local_290._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_288._0_4_ = (undefined4)lVar5;
        uStack_288._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
        local_1a0 = (undefined4)local_290;
        uStack_19c = local_290._4_4_;
        uStack_198 = (undefined4)uStack_288;
        uStack_194 = uStack_288._4_4_;
        local_200 = (undefined4)local_290;
        uStack_1fc = local_290._4_4_;
        uStack_1f8 = (undefined4)uStack_288;
        uStack_1f4 = uStack_288._4_4_;
        local_290 = uVar7;
        uStack_288 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        local_1f0 = *(undefined8 *)(param_2 + 0x40);
        local_204 = *(undefined1 *)(param_2 + 0x2c);
        local_203 = *(undefined1 *)(param_2 + 0x2d);
        local_308 = local_2e0;
        local_318 = local_2d8;
        local_310 = param_6;
        local_300 = uVar9;
        iVar10 = FUN_14184f6c0(*(undefined8 *)(pfVar14 + 0xe),local_230,pfVar14,&local_2d0);
        plVar11 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (plVar11 != (longlong *)0x0)) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        puVar12 = local_58;
        pfVar14 = local_2f8;
        if (iVar10 <= param_6) {
          iVar10 = param_6;
        }
      }
      local_2f8 = pfVar14;
      param_6 = iVar10;
      local_2f0 = local_2f0 + -0x48;
      lVar15 = lVar15 + -1;
      param_4 = local_2e8;
    } while (-1 < lVar15);
  }
  plVar11 = (longlong *)0x0;
  iVar10 = param_6;
  if (local_2b0 == 0) goto LAB_14190e2b6;
  local_248 = local_2f8[3];
  local_234 = local_2f8[2] * local_2f8[1];
  local_23c = 0;
  local_240 = local_2f8[2] * *local_2f8;
  local_244 = local_2f8[4];
  FSlateRotatedRect::ToBoundingRect(&local_248,&local_280);
  fVar17 = param_4[3];
  if (local_274 <= param_4[3]) {
    fVar17 = local_274;
  }
  fVar18 = param_4[1];
  if (param_4[1] <= local_27c) {
    fVar18 = local_27c;
  }
  fVar16 = param_4[2];
  if (local_278 <= param_4[2]) {
    fVar16 = local_278;
  }
  fVar3 = *param_4;
  if (*param_4 <= local_280) {
    fVar3 = local_280;
  }
  if ((fVar17 < fVar18) || (fVar16 < fVar3)) {
    local_2c0 = 0;
    uStack_2b8 = 0;
  }
  else {
    local_2c0 = CONCAT44(fVar18,fVar3);
    uStack_2b8 = CONCAT44(fVar17,fVar16);
  }
  if (param_8 == '\0') {
LAB_14190e19c:
    uVar9 = 0;
  }
  else {
    if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
       (cVar8 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar8 != '\0')) {
      if ((int)param_1[0x15] != 0) {
        plVar11 = (longlong *)param_1[0x14];
      }
      uVar9 = (**(code **)(*plVar11 + 0x38))(plVar11);
      *(undefined1 *)(param_1 + 0x13) = uVar9;
    }
    if ((char)param_1[0x13] == '\0') goto LAB_14190e19c;
    uVar9 = 1;
  }
  local_310 = *(undefined4 *)(param_2 + 0x28);
  local_318 = *(undefined8 *)(param_2 + 0x20);
  FPaintArgs::FPaintArgs
            (local_1e8,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  local_1d8 = *(undefined4 *)(param_2 + 0x10);
  local_1d4 = *(undefined1 *)(param_2 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  lVar15 = *(longlong *)(param_2 + 0x38);
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 0xc) = *(int *)(lVar15 + 0xc) + 1;
    UNLOCK();
  }
  plVar11 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
  local_270 = (undefined4)uVar6;
  uStack_26c = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_268 = (undefined4)lVar15;
  uStack_264 = (undefined4)((ulonglong)lVar15 >> 0x20);
  local_190 = local_270;
  uStack_18c = uStack_26c;
  uStack_188 = uStack_268;
  uStack_184 = uStack_264;
  local_1b8 = local_270;
  uStack_1b4 = uStack_26c;
  uStack_1b0 = uStack_268;
  uStack_1ac = uStack_264;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plVar11 + 8))(plVar11,1);
    }
  }
  local_1a8 = *(undefined8 *)(param_2 + 0x40);
  local_1bc = *(undefined1 *)(param_2 + 0x2c);
  local_1bb = *(undefined1 *)(param_2 + 0x2d);
  local_308 = local_2e0;
  local_318 = local_2d8;
  local_310 = param_6;
  local_300 = uVar9;
  iVar10 = FUN_14184f6c0(*(undefined8 *)(local_2f8 + 0xe),local_1e8,local_2f8,&local_2c0);
  plVar11 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if (iVar10 <= param_6) {
    iVar10 = param_6;
  }
LAB_14190e2b6:
  plVar11 = local_2a8;
  if (local_2a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2a8 + 1;
    lVar15 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_2a8)(local_2a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2a8 + 8))(local_2a8,1);
      }
    }
  }
  FUN_140456b10(local_178);
  return iVar10;
}



// FUNCTION 14190e330 FUN_14190e330 body=241 status=ok
// SIG undefined FUN_14190e330(void)

void FUN_14190e330(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  iVar3 = FUN_1418cbe60((longlong *)(param_1 + 0x130));
  if (iVar3 != -1) {
    plVar6 = (longlong *)0x0;
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x130);
    plVar2 = *(longlong **)(lVar4 + 0x18);
    plVar5 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar5 = plVar6, !bVar7) {
        LOCK();
        bVar7 = iVar3 == (int)plVar2[1];
        if (bVar7) {
          *(int *)(plVar2 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar7) {
          plVar5 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar6 = *(longlong **)(lVar4 + 0x10);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            plVar5 = plVar2 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            plVar5 = plVar2;
            if ((int)lVar4 == 1) {
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
          break;
        }
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    (**(code **)(**(longlong **)plVar6[0x19] + 0x40))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return;
}



// FUNCTION 14190e430 FUN_14190e430 body=1276 status=ok
// SIG undefined FUN_14190e430(void)

void FUN_14190e430(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  plVar9 = (longlong *)0x0;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    local_80 = (longlong *)param_2[1];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    local_88 = lVar7;
    iVar5 = FUN_1418cbe60((longlong *)(param_1 + 0x130),&local_88);
    plVar3 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x130);
      plVar3 = *(longlong **)(lVar7 + 0x18);
      plVar10 = plVar3;
      plVar11 = plVar9;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar16 = iVar5 == 0;
        if (bVar16) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar10 = plVar9, !bVar16) {
          LOCK();
          bVar16 = iVar5 == (int)plVar3[1];
          if (bVar16) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar16) {
            plVar10 = plVar3;
            plVar11 = (longlong *)0x0;
            if (plVar3 != (longlong *)0x0) {
              plVar11 = *(longlong **)(lVar7 + 0x10);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      plVar3 = (longlong *)plVar11[0x19];
      local_a8 = 0;
      local_a0 = 0;
      lVar7 = *plVar3;
      if (0 < *(int *)(lVar7 + 0x80)) {
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar8 + *(longlong *)(lVar7 + 0x78)) != 0) &&
             (lVar4 = *(longlong *)(lVar8 + 8 + *(longlong *)(lVar7 + 0x78)), lVar4 != 0)) {
            piVar1 = (int *)(lVar4 + 8);
            LOCK();
            iVar5 = *piVar1;
            if (iVar5 == 0) {
              *piVar1 = 0;
              iVar5 = 0;
            }
            UNLOCK();
            if (0 < iVar5) {
              lVar13 = (longlong)(int)local_a0;
              lVar4 = *(longlong *)(lVar7 + 0x78);
              iVar5 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar5);
              if (local_a0._4_4_ < iVar5) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a8);
              }
              puVar6 = (undefined8 *)(lVar13 * 0x10 + local_a8);
              *puVar6 = *(undefined8 *)(lVar4 + lVar8);
              lVar4 = *(longlong *)(lVar4 + 8 + lVar8);
              puVar6[1] = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
                UNLOCK();
              }
            }
          }
          uVar14 = (int)plVar9 + 1;
          plVar9 = (longlong *)(ulonglong)uVar14;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar14 < *(int *)(lVar7 + 0x80));
      }
      FUN_1418d3a90(lVar7 + 0x78,&local_a8);
      if ((int)local_a0 != 0) {
        plVar9 = (longlong *)(local_a8 + 8);
        iVar5 = (int)local_a0;
        do {
          plVar11 = (longlong *)*plVar9;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar2 == 1) && (plVar11 != (longlong *)0x0)) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
          plVar9 = plVar9 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_a8 != 0) {
        FMemory::Free();
      }
      FUN_141919e50(*plVar3 + 0x78,1);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
    FUN_14195c710(*param_2);
  }
  uVar15 = 0;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    local_70 = (longlong *)param_3[1];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_78 = lVar7;
    iVar5 = FUN_1418cbe60((longlong *)(param_1 + 0x130),&local_78);
    plVar9 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
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
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x130);
      plVar9 = *(longlong **)(lVar7 + 0x18);
      uVar12 = uVar15;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar16 = iVar5 == 0;
        if (bVar16) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (uVar12 = 0, !bVar16) {
          LOCK();
          bVar16 = iVar5 == (int)plVar9[1];
          if (bVar16) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (plVar9 != (longlong *)0x0) {
              uVar12 = *(ulonglong *)(lVar7 + 0x10);
            }
            goto LAB_14190e752;
          }
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(plVar9 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        plVar9 = (longlong *)0x0;
      }
LAB_14190e752:
      plVar3 = *(longlong **)(uVar12 + 200);
      local_98 = 0;
      local_90 = 0;
      lVar7 = *plVar3;
      if (0 < *(int *)(lVar7 + 0x80)) {
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar8 + *(longlong *)(lVar7 + 0x78)) != 0) &&
             (lVar4 = *(longlong *)(lVar8 + 8 + *(longlong *)(lVar7 + 0x78)), lVar4 != 0)) {
            piVar1 = (int *)(lVar4 + 8);
            LOCK();
            iVar5 = *piVar1;
            if (iVar5 == 0) {
              *piVar1 = 0;
              iVar5 = 0;
            }
            UNLOCK();
            if (0 < iVar5) {
              lVar13 = (longlong)(int)local_90;
              lVar4 = *(longlong *)(lVar7 + 0x78);
              iVar5 = (int)local_90 + 1;
              local_90 = CONCAT44(local_90._4_4_,iVar5);
              if (local_90._4_4_ < iVar5) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98);
              }
              puVar6 = (undefined8 *)(lVar13 * 0x10 + local_98);
              *puVar6 = *(undefined8 *)(lVar4 + lVar8);
              lVar4 = *(longlong *)(lVar4 + 8 + lVar8);
              puVar6[1] = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
                UNLOCK();
              }
            }
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar14 < *(int *)(lVar7 + 0x80));
      }
      FUN_1418d3a90(lVar7 + 0x78,&local_98);
      if ((int)local_90 != 0) {
        plVar10 = (longlong *)(local_98 + 8);
        iVar5 = (int)local_90;
        do {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar2 == 1) && (plVar11 != (longlong *)0x0)) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
          plVar10 = plVar10 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
      FUN_141919e50(*plVar3 + 0x78,0);
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
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  local_68 = *param_3;
  local_60 = param_3[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1418dd850(param_1 + 0x168,&local_58,&local_68);
  return;
}



// FUNCTION 14190e930 FUN_14190e930 body=210 status=ok
// SIG undefined FUN_14190e930(void)

void FUN_14190e930(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x130);
      plVar4 = *(longlong **)(lVar3 + 8 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar4 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar4[1];
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (plVar4 != (longlong *)0x0) {
              if (*(longlong *)(lVar3 + lVar6) != 0) {
                FUN_141955900();
              }
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
            break;
          }
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar4 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar7 < *(int *)(param_1 + 0x138));
  }
  return;
}



// FUNCTION 14190ea10 FUN_14190ea10 body=751 status=ok
// SIG undefined FUN_14190ea10(void)

void FUN_14190ea10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar15 = (longlong *)0x0;
  local_58 = 0;
  local_50 = 0;
  plVar9 = plVar15;
  plVar12 = plVar15;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      uVar5 = local_50;
      if ((*(longlong *)((longlong)plVar9 + *(longlong *)(param_1 + 0x78)) != 0) &&
         (lVar3 = *(longlong *)((longlong)plVar9 + *(longlong *)(param_1 + 0x78) + 8), lVar3 != 0))
      {
        piVar1 = (int *)(lVar3 + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) {
          lVar13 = (longlong)(int)local_50;
          lVar3 = *(longlong *)(param_1 + 0x78);
          iVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar7);
          if (local_50._4_4_ < iVar7) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar5 & 0xffffffff);
          }
          puVar8 = (undefined8 *)(lVar13 * 0x10 + local_58);
          *puVar8 = *(undefined8 *)(lVar3 + (longlong)plVar9);
          lVar3 = *(longlong *)(lVar3 + 8 + (longlong)plVar9);
          puVar8[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            UNLOCK();
          }
        }
      }
      uVar11 = (int)plVar12 + 1;
      plVar9 = plVar9 + 2;
      plVar12 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x80));
  }
  FUN_1418d3a90(param_1 + 0x78,&local_58);
  if ((int)local_50 != 0) {
    plVar9 = (longlong *)(local_58 + 8);
    iVar7 = (int)local_50;
    do {
      plVar12 = (longlong *)*plVar9;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      plVar9 = plVar9 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  FUN_141911460(param_1,local_38);
  if (((*(int *)(param_1 + 0xe8) != 0) && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x18))(), cVar6 != '\0')) {
    plVar9 = plVar15;
    if (*(int *)(param_1 + 0xe8) != 0) {
      plVar9 = *(longlong **)(param_1 + 0xe0);
    }
    (**(code **)(*plVar9 + 0x40))(plVar9,local_38);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_30 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar9 = plVar15;
  plVar12 = plVar15;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x78);
      plVar4 = *(longlong **)(lVar3 + 8 + (longlong)plVar12);
      plVar10 = plVar4;
      plVar14 = plVar15;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar16 = iVar7 == 0;
        if (bVar16) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar10 = plVar15, !bVar16) {
          LOCK();
          bVar16 = iVar7 == (int)plVar4[1];
          if (bVar16) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar16) {
            plVar10 = plVar4;
            plVar14 = (longlong *)0x0;
            if (plVar4 != (longlong *)0x0) {
              plVar14 = *(longlong **)(lVar3 + (longlong)plVar12);
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              plVar10 = plVar4 + 1;
              lVar3 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              plVar10 = plVar4;
              if ((int)lVar3 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar4[1];
          bVar16 = iVar7 == 0;
          if (bVar16) {
            *(int *)(plVar4 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      FUN_1418ff040(plVar14,&local_48);
      if (local_48 != 0) {
        FUN_141856430();
      }
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_40 + 1;
        lVar3 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar10 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      uVar11 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar11;
      plVar12 = plVar12 + 2;
    } while ((int)uVar11 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 14190ed00 FUN_14190ed00 body=1789 status=ok
// SIG undefined FUN_14190ed00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14190ed00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  undefined1 local_338;
  undefined1 local_330;
  longlong local_328;
  int local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  longlong local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *plStack_2c0;
  longlong local_2b0;
  undefined8 *local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined1 local_290 [8];
  undefined1 local_288 [16];
  longlong *local_278;
  longlong *plStack_270;
  undefined1 local_268 [8];
  longlong *local_260;
  longlong local_258;
  longlong *plStack_250;
  longlong *local_248;
  longlong *local_240;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 local_218 [464];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  local_2e0 = param_3;
  local_2b0 = param_1;
  local_2a8 = param_2;
  cVar7 = FUN_1419425c0(*param_2);
  if ((cVar7 == '\0') || (cVar7 = FUN_1419425c0(*param_2), cVar7 == '\x02')) {
    *(longlong *)(param_1 + 0x108) = *param_3;
    plVar13 = (longlong *)param_3[1];
    plVar14 = *(longlong **)(param_1 + 0x110);
    if (plVar13 != plVar14) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar14 = *(longlong **)(param_1 + 0x110);
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      *(longlong **)(param_1 + 0x110) = plVar13;
    }
  }
  if ((*param_3 != 0) && (iVar9 = FUN_1418cbe60(param_1 + 0x130,param_2), iVar9 != -1)) {
    lVar5 = *(longlong *)(param_1 + 0x130);
    plVar15 = (longlong *)0x0;
    plVar13 = *(longlong **)((longlong)iVar9 * 0x20 + 0x18 + lVar5);
    plVar14 = plVar15;
    local_2d0 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      iVar10 = (int)plVar13[1];
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(plVar13 + 1) = 0;
        iVar10 = 0;
      }
      UNLOCK();
      while (plVar14 = (longlong *)0x0, !bVar16) {
        LOCK();
        bVar16 = iVar10 == (int)plVar13[1];
        if (bVar16) {
          *(int *)(plVar13 + 1) = iVar10 + 1;
        }
        UNLOCK();
        if (bVar16) {
          if (plVar13 != (longlong *)0x0) {
            plVar14 = *(longlong **)((longlong)iVar9 * 0x20 + 0x10 + lVar5);
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar13 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          goto LAB_14190ee76;
        }
        LOCK();
        iVar10 = (int)plVar13[1];
        bVar16 = iVar10 == 0;
        if (bVar16) {
          *(int *)(plVar13 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
      }
      local_2d0 = (longlong *)0x0;
      plVar13 = plVar15;
    }
LAB_14190ee76:
    local_318 = 0;
    local_2d8 = (longlong *)(*(longlong *)plVar14[0x19] + 0x78);
    if (0 < *(int *)(*(longlong *)plVar14[0x19] + 0x80)) {
      do {
        lVar5 = *local_2d8;
        local_2e8 = 0;
        plVar13 = *(longlong **)((longlong)plVar15 + lVar5 + 8);
        plVar14 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          iVar9 = (int)plVar13[1];
          bVar16 = iVar9 == 0;
          if (bVar16) {
            *(int *)(plVar13 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
          while (plVar14 = (longlong *)0x0, !bVar16) {
            LOCK();
            bVar16 = iVar9 == (int)plVar13[1];
            if (bVar16) {
              *(int *)(plVar13 + 1) = iVar9 + 1;
            }
            UNLOCK();
            if (bVar16) {
              plVar14 = plVar13;
              if (plVar13 != (longlong *)0x0) {
                local_2e8 = *(undefined8 *)((longlong)plVar15 + lVar5);
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar14 = plVar13 + 1;
                lVar5 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                plVar14 = plVar13;
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar9 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar9 = (int)plVar13[1];
            bVar16 = iVar9 == 0;
            if (bVar16) {
              *(int *)(plVar13 + 1) = 0;
              iVar9 = 0;
            }
            UNLOCK();
          }
        }
        uVar6 = local_2e8;
        FUN_1418ff040(local_2e8,&local_2f8);
        lVar5 = local_2f8;
        plVar13 = plStack_2f0;
        param_3 = local_2e0;
        if (local_2f8 != 0) {
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          lVar11 = FUN_1417e8330(local_218);
          *(undefined1 *)(lVar11 + 0x149) = 0;
          puVar12 = (undefined4 *)FUN_14183b310(lVar5,local_290);
          uVar4 = puVar12[1];
          *(undefined4 *)(lVar11 + 0x14c) = *puVar12;
          *(undefined4 *)(lVar11 + 0x150) = uVar4;
          puVar12 = (undefined4 *)FUN_14183dbb0(lVar5,local_288);
          local_310 = uVar6;
          uVar4 = puVar12[1];
          puVar2 = (undefined8 *)(lVar11 + 0x1c0);
          *(undefined4 *)(lVar11 + 0x154) = *puVar12;
          *(undefined4 *)(lVar11 + 0x158) = uVar4;
          *(undefined2 *)(lVar11 + 0x176) = 0;
          *(undefined1 *)(lVar11 + 0x19c) = 0;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          uStack_308 = plVar14;
          if (&local_310 != puVar2) {
            local_310._0_4_ = (undefined4)uVar6;
            local_310._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_308._0_4_ = SUB84(plVar14,0);
            uStack_308._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
            uVar6 = *puVar2;
            plVar13 = *(longlong **)(lVar11 + 0x1c8);
            local_230 = (undefined4)local_310;
            uStack_22c = local_310._4_4_;
            uStack_228 = (undefined4)uStack_308;
            uStack_224 = uStack_308._4_4_;
            *(undefined4 *)puVar2 = (undefined4)local_310;
            *(undefined4 *)(lVar11 + 0x1c4) = local_310._4_4_;
            *(undefined4 *)(lVar11 + 0x1c8) = (undefined4)uStack_308;
            *(undefined4 *)(lVar11 + 0x1cc) = uStack_308._4_4_;
            local_310 = uVar6;
            uStack_308 = plVar13;
          }
          plVar13 = uStack_308;
          if (uStack_308 != (longlong *)0x0) {
            LOCK();
            plVar3 = uStack_308 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*uStack_308)(uStack_308);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*uStack_308 + 8))(uStack_308,1);
              }
            }
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar14 + 1;
            lVar5 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar13 = (longlong *)operator_new(0x600);
          if (plVar13 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            *(undefined4 *)(plVar13 + 1) = 1;
            *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
            *plVar13 = (longlong)&PTR_FUN_144d503d8;
            if (plVar13 != (longlong *)0xfffffffffffffff0) {
              FUN_1417f4890();
            }
          }
          plVar3 = plVar13 + 2;
          local_248 = plVar3;
          local_240 = plVar13;
          FUN_14044f790(&local_248,plVar3);
          local_368 = 0x5f0;
          SWidget::SetDebugInfo
                    (plVar3,"SWindow",
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                     ,0x811);
          local_358 = *(undefined4 *)(lVar11 + 0x90);
          local_328 = lVar11 + 0xf8;
          local_340 = lVar11 + 0xe8;
          local_330 = *(undefined1 *)(lVar11 + 0xf1);
          local_348 = lVar11 + 200;
          local_350 = lVar11 + 0x98;
          local_338 = *(undefined1 *)(lVar11 + 0xf0);
          local_360 = lVar11 + 0x78;
          local_368 = lVar11 + 0x60;
          SWidget::SWidgetConstruct(plVar3,lVar11,lVar11 + 0x30,lVar11 + 0x40);
          FUN_141806bd0(plVar3,lVar11);
          if (((char)plVar13[5] < '\0') ||
             (cVar7 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar7 != '\0')) {
            bVar8 = 1;
          }
          else {
            bVar8 = 0;
          }
          *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
          *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar8;
          local_2c8 = plVar3;
          plStack_2c0 = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar13 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FUN_1417f5da0(local_218);
          FUN_141918b30(local_2e8,&local_2c8);
          param_3 = local_2e0;
          local_2a0 = *local_2e0;
          local_298 = local_2e0[1];
          if (local_298 != 0) {
            LOCK();
            *(int *)(local_298 + 8) = *(int *)(local_298 + 8) + 1;
            UNLOCK();
          }
          local_278 = local_2c8;
          plStack_270 = plStack_2c0;
          if (plStack_2c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_2c0 + 1) = (int)plStack_2c0[1] + 1;
            UNLOCK();
          }
          local_368 = CONCAT71(local_368._1_7_,1);
          FUN_14188f890(DAT_1469f4590,local_268,&local_278,&local_2a0);
          plVar13 = local_260;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_260 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_260)(local_260);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = plStack_2f0;
          plVar3 = DAT_1469f4590;
          local_258 = local_2f8;
          plStack_250 = plStack_2f0;
          if (plStack_2f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_2f0 + 1) = (int)plStack_2f0[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar3 + 0x108))(plVar3,&local_258);
          plVar3 = plStack_2c0;
          if (plStack_2c0 != (longlong *)0x0) {
            LOCK();
            plVar13 = plStack_2c0 + 1;
            lVar5 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            plVar13 = plStack_2f0;
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_2c0)(plStack_2c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar13 = plStack_2f0;
              if (iVar9 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
                plVar13 = plStack_2f0;
              }
            }
          }
        }
        plVar3 = plStack_2f0;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar13 + 1;
          lVar5 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_2f0)(plStack_2f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_2f0 + 8))(plStack_2f0,1);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar14 + 1;
          lVar5 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar15 = plVar15 + 2;
        local_318 = local_318 + 1;
        param_2 = local_2a8;
        param_1 = local_2b0;
        plVar13 = local_2d0;
      } while (local_318 < (int)local_2d8[1]);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar13 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  FUN_14190f410(param_1,param_2,param_3);
  return;
}



// FUNCTION 14190f400 OnTabRelocated body=10 status=ok
// SIG undefined OnTabRelocated(void)

void FTabManager::FPrivateApi::OnTabRelocated(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014190f406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x28))();
  return;
}



// FUNCTION 14190f410 FUN_14190f410 body=868 status=ok
// SIG undefined FUN_14190f410(void)

void FUN_14190f410(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  
  plVar1 = param_1 + 0xf;
  uVar11 = 0;
  local_88 = 0;
  local_80 = 0;
  uVar15 = uVar11;
  if (0 < (int)param_1[0x10]) {
    do {
      if ((*(longlong *)(uVar11 + *plVar1) != 0) &&
         (lVar4 = *(longlong *)(uVar11 + 8 + *plVar1), lVar4 != 0)) {
        piVar2 = (int *)(lVar4 + 8);
        LOCK();
        iVar7 = *piVar2;
        if (iVar7 == 0) {
          *piVar2 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) {
          lVar16 = (longlong)(int)local_80;
          lVar4 = *plVar1;
          iVar7 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,iVar7);
          if (local_80._4_4_ < iVar7) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_88);
          }
          puVar9 = (undefined8 *)(lVar16 * 0x10 + local_88);
          *puVar9 = *(undefined8 *)(lVar4 + uVar11);
          lVar4 = *(longlong *)(lVar4 + 8 + uVar11);
          puVar9[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
        }
      }
      uVar14 = (int)uVar15 + 1;
      uVar11 = uVar11 + 0x10;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)param_1[0x10]);
  }
  FUN_1418d3a90(plVar1,&local_88);
  if ((int)local_80 != 0) {
    plVar12 = (longlong *)(local_88 + 8);
    iVar7 = (int)local_80;
    do {
      plVar5 = (longlong *)*plVar12;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar12 = plVar12 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  puVar8 = (undefined4 *)SDockTab::GetLayoutIdentifier(*param_2);
  local_68 = *puVar8;
  uStack_64 = puVar8[1];
  uStack_60 = puVar8[2];
  uStack_5c = puVar8[3];
  local_58 = 3;
  local_54 = 1;
  FUN_141913c90(param_1,&local_68);
  uVar11 = 0;
  uVar15 = uVar11;
  if (0 < (int)param_1[0x10]) {
    do {
      plVar18 = (longlong *)0x0;
      plVar12 = (longlong *)param_3[1];
      plVar5 = (longlong *)*param_3;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      lVar4 = *plVar1;
      plVar6 = *(longlong **)(lVar4 + uVar15 + 8);
      plVar10 = plVar18;
      plVar13 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar6[1];
        bVar19 = iVar7 == 0;
        if (bVar19) {
          *(int *)(plVar6 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar13 = plVar18, !bVar19) {
          LOCK();
          bVar19 = iVar7 == (int)plVar6[1];
          if (bVar19) {
            *(int *)(plVar6 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar19) {
            plVar10 = (longlong *)0x0;
            plVar13 = plVar6;
            if (plVar6 != (longlong *)0x0) {
              plVar10 = *(longlong **)(lVar4 + uVar15);
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar6[1];
          bVar19 = iVar7 == 0;
          if (bVar19) {
            *(int *)(plVar6 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      *(undefined1 *)(plVar10 + 0x6b) = 0;
      plVar6 = (longlong *)plVar10[0x66];
      plVar17 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar6[1];
        bVar19 = iVar7 == 0;
        if (bVar19) {
          *(int *)(plVar6 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar17 = plVar18, !bVar19) {
          LOCK();
          bVar19 = iVar7 == (int)plVar6[1];
          if (bVar19) {
            *(int *)(plVar6 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar19) {
            plVar17 = plVar6;
            plVar18 = (longlong *)0x0;
            if (plVar6 != (longlong *)0x0) {
              plVar18 = (longlong *)plVar10[0x65];
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar6[1];
          bVar19 = iVar7 == 0;
          if (bVar19) {
            *(int *)(plVar6 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      if ((((char)plVar10[0x68] != '\0') && (*(char *)((longlong)plVar10 + 0x35a) != '\0')) &&
         ((plVar18 == (longlong *)0x0 || (plVar18 != plVar5)))) {
        local_78 = (longlong *)0x0;
        local_70 = 0;
        FUN_14185b2c0(plVar18,&local_78);
        if (local_70 == 0) {
LAB_14190f665:
          if (local_78 != (longlong *)0x0) {
            FMemory::Free(local_78);
          }
        }
        else if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x28))(local_78,0);
          if (local_78 != (longlong *)0x0) {
            local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
          }
          local_70 = 0;
          goto LAB_14190f665;
        }
        FUN_141856430(plVar18);
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar17 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar13 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      uVar14 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar14;
      uVar15 = uVar15 + 0x10;
    } while ((int)uVar14 < (int)param_1[0x10]);
  }
  puVar9 = (undefined8 *)FUN_1418fc990();
  FUN_14191d8e0(*puVar9,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00014190f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 14190f780 FUN_14190f780 body=1277 status=ok
// SIG undefined FUN_14190f780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14190f780(undefined8 param_1,undefined1 *param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined1 local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  FUN_1418cb840(param_4,&local_1d8);
  plVar1 = local_1d0;
  if (local_1d8 != 0) {
    if (param_3 == 4) {
      local_1c8 = FUN_1418aaad0(local_1a0);
      plVar7 = (longlong *)
               SharedPointerInternals::NewIntrusiveReferenceController<SDockingTabStack>();
      plVar1 = plVar7 + 2;
      local_180 = plVar1;
      local_178 = plVar7;
      FUN_14044f790(&local_180,plVar1);
      local_228 = 0x428;
      SWidget::SetDebugInfo
                (plVar1,"SDockingTabStack",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                 ,0x91);
      lVar8 = SDockingTabStack::FArguments::FArguments(local_168);
      local_1e8 = lVar8 + 0xf8;
      local_1f0 = *(undefined1 *)(lVar8 + 0xf1);
      local_200 = lVar8 + 0xe8;
      local_218 = *(undefined4 *)(lVar8 + 0x90);
      local_208 = lVar8 + 200;
      local_210 = lVar8 + 0x98;
      local_1f8 = *(undefined1 *)(lVar8 + 0xf0);
      local_220 = lVar8 + 0x78;
      local_228 = lVar8 + 0x60;
      SWidget::SWidgetConstruct(plVar1,lVar8,lVar8 + 0x30,lVar8 + 0x40);
      FUN_1418ee400(plVar1,lVar8,local_1c8);
      if (((char)plVar7[5] < '\0') ||
         (cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar5 != '\0')) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar6;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_198 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar3 = (int *)((longlong)local_198 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
      FUN_140456c70(local_168);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_1b0 = plVar1;
      local_1a8 = plVar7;
      FUN_1418d7eb0(param_1,&local_1b0,0xffffffff);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      puVar9 = (undefined8 *)FUN_14189f270(local_1d8,local_190);
      local_1c0 = *puVar9;
      local_1b8 = (longlong *)puVar9[1];
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
        UNLOCK();
      }
      FUN_141910330(plVar1,&local_1c0,0xffffffff);
      plVar1 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1b8 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
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
          piVar3 = (int *)((longlong)local_188 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    else {
      FUN_1418f5f10(param_1,param_3,param_4);
    }
    plVar1 = local_1d0;
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1d0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (local_1d0 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar7 = local_1d0 + 1;
  lVar8 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar8 != 1) {
    return param_2;
  }
  (**(code **)*local_1d0)(local_1d0);
  LOCK();
  piVar3 = (int *)((longlong)plVar1 + 0xc);
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 != 1) {
    return param_2;
  }
  (**(code **)(*local_1d0 + 8))(local_1d0,1);
  return param_2;
}



// FUNCTION 14190fc80 FUN_14190fc80 body=678 status=ok
// SIG undefined FUN_14190fc80(void)

undefined1 *
FUN_14190fc80(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1418cb840(param_4,&local_48);
  if (local_48 == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    plVar1 = local_40;
  }
  else {
    puVar6 = (undefined8 *)FUN_14189f270(local_48,local_18);
    local_38 = *puVar6;
    local_30 = (longlong *)puVar6[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    puVar6 = (undefined8 *)FUN_1418f51a0(param_1,local_28,param_3);
    FUN_141910330(*puVar6,&local_38,0xffffffff);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    if (*(char *)(param_1 + 0x3b0) != '\0') {
      SOverlay::RemoveSlot(*(undefined8 *)(param_1 + 0x3a0),0xffffffff);
      *(undefined1 *)(param_1 + 0x3b0) = 0;
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    plVar1 = local_40;
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      local_40 = plVar1;
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14190ff30 FUN_14190ff30 body=435 status=ok
// SIG undefined FUN_14190ff30(void)

undefined8 * FUN_14190ff30(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [48];
  longlong *local_20;
  
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1418cfdf0(&local_78,1,&local_98,&local_a8,0,
                *(undefined8 *)(*(longlong *)(param_1 + 0x300) + 0x58));
  lVar3 = *(longlong *)(param_1 + 0x300);
  iVar2 = *(int *)(*(longlong *)(param_1 + 800) + 0x260);
  uVar8 = (ulonglong)iVar2;
  if (iVar2 < *(int *)(lVar3 + 0x50)) {
    lVar6 = uVar8 << 4;
    do {
      plVar4 = *(longlong **)(lVar6 + *(longlong *)(lVar3 + 0x48));
      (**(code **)(*plVar4 + 8))(plVar4,&local_78);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x50));
  }
  puVar5 = (undefined8 *)FUN_141905490(local_70,local_88,1,0);
  *param_2 = *puVar5;
  lVar3 = puVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_80 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  local_78 = &PTR__scalar_deleting_destructor__144d670d0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_50);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_60);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1419100f0 FUN_1419100f0 body=568 status=ok
// SIG undefined FUN_1419100f0(void)

ulonglong FUN_1419100f0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_20;
  
  lVar8 = *param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  local_48 = *param_2;
  iVar4 = (int)param_2[1];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  lStack_40 = param_2[1];
  plVar1 = (longlong *)(param_1 + 0x308);
  plVar5 = (longlong *)*plVar1;
  uVar11 = param_3 & 0xffffffff;
  iVar17 = *(int *)(param_1 + 0x310);
  lVar3 = (longlong)iVar17 * 0x18;
  for (plVar13 = plVar5; plVar13 != plVar5 + (longlong)iVar17 * 3; plVar13 = plVar13 + 3) {
    if ((((*(byte *)(plVar13 + 2) & 2) != 0) && (*plVar13 == *param_2)) &&
       ((iVar4 == -1 || (iVar4 == (int)plVar13[1])))) {
      lVar12 = ((longlong)plVar13 - (longlong)plVar5) / 6 +
               ((longlong)plVar13 - (longlong)plVar5 >> 0x3f);
      uVar15 = (lVar12 >> 2) - (lVar12 >> 0x3f);
      goto LAB_141910174;
    }
  }
  uVar15 = 0xffffffff;
LAB_141910174:
  iVar10 = -1;
  iVar14 = (int)uVar15;
  if ((int)param_3 == -1) {
    if (iVar14 == -1) {
      local_20 = CONCAT44(local_20._4_4_,1);
      *(int *)(param_1 + 0x310) = iVar17 + 1;
      if (*(int *)(param_1 + 0x314) < iVar17 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar17);
      }
      lVar12 = *plVar1;
      puVar2 = (undefined4 *)(lVar3 + lVar12);
      *puVar2 = (int)lVar8;
      puVar2[1] = uVar6;
      puVar2[2] = iVar4;
      puVar2[3] = uVar7;
      *(undefined8 *)(lVar3 + 0x10 + lVar12) = local_20;
      uVar11 = (ulonglong)(*(int *)(param_1 + 0x310) - 1);
    }
    else {
      uVar11 = uVar15 & 0xffffffff;
      *(undefined4 *)(plVar5 + (longlong)iVar14 * 3 + 2) = 1;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x310);
    iVar9 = 0;
    iVar16 = 0;
    if (0 < iVar4) {
      plVar13 = plVar5 + 2;
      do {
        bVar18 = iVar10 == -1;
        if (!bVar18) goto LAB_141910243;
        if ((int)*plVar13 == 1) {
          iVar10 = iVar9;
          if (iVar16 != (int)param_3) {
            iVar10 = -1;
          }
          iVar16 = iVar16 + 1;
        }
        iVar9 = iVar9 + 1;
        plVar13 = plVar13 + 3;
      } while (iVar9 < iVar4);
    }
    bVar18 = iVar10 == -1;
LAB_141910243:
    if (!bVar18) {
      iVar4 = iVar10;
    }
    if (iVar14 == -1) {
      TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized(plVar1,iVar4,1);
      iVar17 = iVar4;
    }
    else {
      local_48 = plVar5[(longlong)iVar14 * 3];
      lStack_40 = (plVar5 + (longlong)iVar14 * 3)[1];
      lVar3 = (plVar5 + (longlong)iVar14 * 3)[2];
      iVar10 = (iVar17 - iVar14) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (plVar5 + (longlong)iVar14 * 3,plVar5 + (longlong)(iVar14 + 1) * 3,
                   (longlong)iVar10 * 0x18);
        iVar17 = *(int *)(param_1 + 0x310);
      }
      *(int *)(param_1 + 0x310) = iVar17 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
      local_20._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      iVar17 = iVar4 + -1;
      if (iVar4 < iVar14) {
        iVar17 = iVar4;
      }
      TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized(plVar1,iVar17,1);
    }
    local_20 = CONCAT44(local_20._4_4_,1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)(lVar3 + (longlong)iVar17 * 0x18);
    *plVar1 = local_48;
    plVar1[1] = lStack_40;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar17 * 0x18) = local_20;
  }
  return uVar11;
}



// FUNCTION 141910330 FUN_141910330 body=359 status=ok
// SIG undefined FUN_141910330(void)

void FUN_141910330(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar7 = SDockTab::GetLayoutIdentifier(*param_2);
  uVar6 = FUN_1419100f0(param_1,uVar7,param_3);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x220))(param_1,local_18);
  puVar8 = (undefined8 *)FUN_1418ff8c0(*puVar8,local_28);
  local_38 = *puVar8;
  local_30 = (longlong *)puVar8[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_14195a120(*param_2,&local_38);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FUN_1418d9a90(param_1,param_2,uVar6);
  (**(code **)(*param_1 + 0x250))(param_1);
  FUN_141912b50(param_1[0x6a]);
  return;
}



// FUNCTION 1419104a0 OpenUnmanagedTab body=141 status=ok
// SIG undefined OpenUnmanagedTab(void)

void FGlobalTabmanager::OpenUnmanagedTab
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    puVar2 = (undefined4 *)SDockTab::GetLayoutIdentifier(*param_4);
    local_18 = *puVar2;
    uStack_14 = puVar2[1];
    uStack_10 = puVar2[2];
    uStack_c = puVar2[3];
    cVar1 = FUN_1419023d0(*(undefined8 *)(param_1 + 0x200),&local_18);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x18))
                (*(longlong **)(param_1 + 0x200),param_2,param_3,param_4);
      return;
    }
  }
  FUN_141910530(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141910530 FUN_141910530 body=766 status=ok
// SIG undefined FUN_141910530(void)

void FUN_141910530(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  (**(code **)*param_3)(param_3,&local_98,param_1,param_2,param_4);
  if (local_98 == 0) {
    local_70 = 0xffffffff;
    local_78 = param_2;
    FUN_1418f8d60(param_1,&local_88,&local_78);
    if (local_88 == 0) {
      local_60 = 0xffffffff;
      local_68 = param_2;
      plVar5 = (longlong *)FUN_141901660(param_1,local_38,&local_68);
      local_a0 = (longlong *)plVar5[1];
      local_98 = *plVar5;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_90,&local_a0);
      plVar5 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      puVar4 = (undefined8 *)FUN_1419410f0(local_98,local_18);
      puVar4 = (undefined8 *)FUN_1418fec60(*puVar4,local_28);
      FUN_141910330(*puVar4,param_4,0xffffffff);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_10 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
    else {
      FUN_141910330(local_88,param_4,0xffffffff);
    }
    plVar5 = local_80;
    if (local_80 == (longlong *)0x0) goto LAB_1419107df;
    LOCK();
    plVar2 = local_80 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) goto LAB_1419107df;
    (**(code **)*local_80)(local_80);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_1419107df;
    lVar6 = *local_80;
    local_40 = local_80;
  }
  else {
    puVar4 = (undefined8 *)FUN_1419410f0(local_98,local_48);
    puVar4 = (undefined8 *)FUN_1418fec60(*puVar4,local_58);
    FUN_141910330(*puVar4,param_4,0xffffffff);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_40 == (longlong *)0x0) goto LAB_1419107df;
    LOCK();
    plVar5 = local_40 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) goto LAB_1419107df;
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_1419107df;
    lVar6 = *local_40;
  }
  (**(code **)(lVar6 + 8))(local_40,1);
LAB_1419107df:
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 141910830 Padding body=65 status=ok
// SIG undefined Padding(void)

undefined4 *
TSupportsContentPaddingMixin<FSimpleSlot>::Padding(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 6,param_2 + 6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 6);
  return param_1 + -0xe;
}



// FUNCTION 141910880 Padding body=77 status=ok
// SIG undefined Padding(void)

longlong SHorizontalBox::FSlot::Padding
                   (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  local_20 = 0;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_2,&local_20,param_3,param_4,param_2,param_2,1)
  ;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 1419108d0 Padding body=65 status=ok
// SIG undefined Padding(void)

longlong SHorizontalBox::FSlot::Padding(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x60,param_2 + 6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 6);
  return param_1;
}



// FUNCTION 141910920 Padding body=111 status=ok
// SIG undefined Padding(void)

longlong SVerticalBox::FSlot::Padding
                   (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  local_20 = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x54) = param_5;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (param_1 + 0x60,&local_20,param_3,param_4,param_2,param_4,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 141910990 FUN_141910990 body=2767 status=ok
// SIG undefined FUN_141910990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141910990(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  undefined1 local_370 [8];
  longlong *local_368;
  int local_360;
  int local_35c;
  int local_358;
  wchar_t *local_350;
  int local_348;
  undefined4 local_344;
  undefined8 *local_340;
  undefined1 local_338 [8];
  longlong *local_330;
  int local_328;
  int local_324;
  wchar_t *local_320;
  uint local_318;
  undefined4 local_314;
  void *local_310;
  int local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  int local_2f8;
  int iStack_2f4;
  int local_2f0;
  int iStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  int iStack_2dc;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [8];
  longlong local_298;
  longlong *local_290;
  longlong *local_288;
  wchar_t **local_280;
  undefined4 *local_278;
  longlong local_268 [2];
  undefined8 local_258;
  undefined8 local_250;
  longlong local_248 [4];
  longlong local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  longlong local_1f8 [2];
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8 [4];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  longlong local_188 [4];
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  longlong local_138 [2];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  local_340 = param_2;
  local_298 = param_1;
  local_290 = param_4;
  local_288 = param_3;
  FUN_1415cd370(local_370,param_1 + 0x18,param_2);
  local_358 = 0;
  if (0 < (int)param_3[1]) {
    local_2d8 = 0;
    do {
      iVar7 = local_358;
      local_380 = 0;
      local_378 = 0;
      uVar15 = *(ulonglong *)(local_2d8 + *param_3);
      local_388._0_4_ = (int)uVar15;
      iVar13 = (int)local_388;
      local_388 = uVar15;
      FUN_1415e6460(local_370,uVar15 & 0xffffffff,uVar15 >> 0x20);
      cVar6 = FUN_1415d6d60(local_370);
      if (cVar6 != '\0') {
        local_35c = iVar13;
        do {
          iVar7 = FUN_1415dc140(local_370);
          local_328 = iVar7;
          local_324 = FUN_1415dc1f0(local_370);
          local_2f0 = iVar7;
          iStack_2ec = local_324;
          uVar8 = FUN_1415da160(local_370,1);
          uVar9 = FUN_1415da210(local_370,1);
          iVar13 = *(int *)(param_2 + 1);
          uVar16 = iVar13 - 1;
          if (iVar13 == 0) {
            uVar16 = 0;
          }
          if (uVar8 < uVar16) {
            uVar16 = uVar8;
          }
          uVar8 = iVar13 - 1;
          if (iVar13 == 0) {
            uVar8 = 0;
          }
          uVar19 = uVar16;
          if ((uVar16 <= uVar9) && (uVar19 = uVar8, uVar9 < uVar8)) {
            uVar19 = uVar9;
          }
          if (iVar13 == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*param_2;
          }
          iVar11 = uVar19 - uVar16;
          local_350 = (wchar_t *)0x0;
          local_344 = 0;
          iVar13 = iVar11 + 1;
          if (iVar11 == 0) {
            iVar13 = 0;
          }
          pwVar17 = local_350;
          local_360 = iVar13;
          local_348 = iVar13;
          if (0 < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350);
            iVar13 = local_348;
            pwVar17 = local_350;
            local_360 = local_348;
            if (0 < local_348) {
              wcsncpy(local_350,puVar18 + (int)uVar16,(longlong)iVar11);
              pwVar17[iVar11] = L'\0';
            }
          }
          iVar11 = FUN_1415da160(local_370,2);
          iVar10 = FUN_1415da210(local_370,2);
          local_2e8 = FUN_1415da160(local_370,3);
          uStack_2e4 = FUN_1415da210(local_370,3);
          local_188[0] = 0;
          local_188[1] = 0;
          local_168 = 0;
          local_160 = 0;
          local_158 = 0xffffffff;
          local_154 = 0;
          local_148 = 0;
          local_140 = 0;
          if ((iVar11 != -1) && (iVar10 != -1)) {
            FUN_1415cd370(local_338,local_298 + 0x28,local_340);
            FUN_1415e6460(local_338,iVar11,iVar10);
            cVar6 = FUN_1415d6d60(local_338);
            puVar5 = local_340;
            if (cVar6 != '\0') {
              local_280 = &local_320;
              local_278 = &local_300;
              do {
                uVar8 = FUN_1415da160(local_338,1);
                uVar9 = FUN_1415da210(local_338,1);
                local_300 = FUN_1415da160(local_338,2);
                local_2fc = FUN_1415da210(local_338,2);
                iVar13 = *(int *)(puVar5 + 1);
                uVar19 = 0;
                uVar16 = iVar13 - 1;
                if (iVar13 == 0) {
                  uVar16 = uVar19;
                }
                if (uVar8 < uVar16) {
                  uVar16 = uVar8;
                }
                uVar8 = iVar13 - 1;
                if (iVar13 == 0) {
                  uVar8 = uVar19;
                }
                uVar12 = uVar16;
                if ((uVar16 <= uVar9) && (uVar12 = uVar8, uVar9 < uVar8)) {
                  uVar12 = uVar9;
                }
                if (iVar13 == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = (undefined2 *)*puVar5;
                }
                iVar13 = uVar12 - uVar16;
                local_320 = (wchar_t *)0x0;
                local_314 = 0;
                local_318 = iVar13 + 1;
                if (iVar13 == 0) {
                  local_318 = uVar19;
                }
                if ((0 < (int)local_318) &&
                   (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,0), pwVar17 = local_320
                   , 0 < (int)local_318)) {
                  wcsncpy(local_320,puVar18 + (int)uVar16,(longlong)iVar13);
                  pwVar17[iVar13] = L'\0';
                }
                TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_&&,FTextRange_&&>_>
                          (local_188,local_2a0,&local_280,0);
                if (local_320 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                cVar6 = FUN_1415d6d60(local_338);
                pwVar17 = local_350;
                iVar7 = local_328;
                iVar13 = local_360;
              } while (cVar6 != '\0');
            }
            plVar3 = local_330;
            if (local_330 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_330 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              pwVar17 = local_350;
              iVar13 = local_348;
              if ((int)lVar14 == 1) {
                (**(code **)*local_330)(local_330);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                pwVar17 = local_350;
                iVar13 = local_348;
                if (iVar11 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                  pwVar17 = local_350;
                  iVar13 = local_348;
                }
              }
            }
          }
          local_2f8 = local_35c;
          iStack_2f4 = iVar7;
          if (0 < iVar7 - local_35c) {
            local_2d0 = 0;
            local_2c8 = 0;
            FString::FString(local_268);
            local_258 = CONCAT44(iStack_2f4,local_2f8);
            local_250 = 0xffffffffffffffff;
            _guard_xfg_dispatch_icall_nop(local_248,0,0x50);
            local_248[0] = 0;
            local_248[1] = 0;
            local_228 = 0;
            local_220 = 0;
            local_218 = 0xffffffff;
            local_214 = 0;
            local_208 = 0;
            local_200 = 0;
            if (local_2d0 != 0) {
              FMemory::Free();
            }
            uVar15 = local_378;
            lVar14 = (longlong)(int)local_378;
            iVar7 = (int)local_378 + 1;
            local_378 = CONCAT44(local_378._4_4_,iVar7);
            if (local_378._4_4_ < iVar7) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_380,uVar15 & 0xffffffff);
            }
            lVar14 = lVar14 * 0x70 + local_380;
            FString::FString(lVar14,local_268);
            *(undefined8 *)(lVar14 + 0x10) = local_258;
            *(undefined8 *)(lVar14 + 0x18) = local_250;
            *(undefined8 *)(lVar14 + 0x20) = 0;
            *(undefined8 *)(lVar14 + 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x40) = 0;
            *(undefined8 *)(lVar14 + 0x48) = 0;
            *(undefined4 *)(lVar14 + 0x50) = 0xffffffff;
            *(undefined4 *)(lVar14 + 0x54) = 0;
            *(undefined8 *)(lVar14 + 0x60) = 0;
            *(undefined4 *)(lVar14 + 0x68) = 0;
            TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
            ::operator=((undefined8 *)(lVar14 + 0x20),local_248);
            local_200 = 0;
            if (local_208 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::Empty(local_248,0);
            if (local_228 != 0) {
              FMemory::Free();
            }
            if (local_248[0] != 0) {
              FMemory::Free();
            }
            if (local_268[0] != 0) {
              FMemory::Free();
            }
          }
          local_310 = (void *)0x0;
          local_308 = iVar13;
          if (iVar13 == 0) {
            local_304 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_310,iVar13,0);
            _guard_xfg_dispatch_icall_nop(local_310,pwVar17,(longlong)iVar13 * 2);
          }
          FString::FString(local_1f8);
          local_1e8 = CONCAT44(iStack_2ec,local_2f0);
          local_1e0 = CONCAT44(uStack_2e4,local_2e8);
          _guard_xfg_dispatch_icall_nop(local_1d8,0,0x50);
          local_1d8[0] = 0;
          local_1d8[1] = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8 = 0xffffffff;
          local_1a4 = 0;
          local_198 = 0;
          local_190 = 0;
          if (local_310 != (void *)0x0) {
            FMemory::Free();
          }
          TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::operator=(local_1d8,local_188);
          uVar15 = local_378;
          lVar14 = (longlong)(int)local_378;
          iVar13 = (int)local_378 + 1;
          local_378 = CONCAT44(local_378._4_4_,iVar13);
          if (local_378._4_4_ < iVar13) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_380,uVar15 & 0xffffffff);
          }
          lVar14 = lVar14 * 0x70 + local_380;
          FString::FString(lVar14,local_1f8);
          *(undefined8 *)(lVar14 + 0x10) = local_1e8;
          *(undefined8 *)(lVar14 + 0x18) = local_1e0;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined8 *)(lVar14 + 0x40) = 0;
          *(undefined8 *)(lVar14 + 0x48) = 0;
          *(undefined4 *)(lVar14 + 0x50) = 0xffffffff;
          *(undefined4 *)(lVar14 + 0x54) = 0;
          *(undefined8 *)(lVar14 + 0x60) = 0;
          *(undefined4 *)(lVar14 + 0x68) = 0;
          TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::operator=((undefined8 *)(lVar14 + 0x20),local_1d8);
          iVar13 = local_324;
          local_35c = local_324;
          local_190 = 0;
          if (local_198 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(local_1d8,0);
          if (local_1b8 != 0) {
            FMemory::Free();
          }
          if (local_1d8[0] != 0) {
            FMemory::Free();
          }
          if (local_1f8[0] != 0) {
            FMemory::Free();
          }
          local_140 = 0;
          if (local_148 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(local_188,0);
          if (local_168 != 0) {
            FMemory::Free();
          }
          if (local_188[0] != 0) {
            FMemory::Free();
          }
          if (pwVar17 != (wchar_t *)0x0) {
            FMemory::Free(pwVar17);
          }
          cVar6 = FUN_1415d6d60(local_370);
          uVar15 = local_388;
          param_2 = local_340;
          param_4 = local_290;
          iVar7 = local_358;
        } while (cVar6 != '\0');
      }
      iStack_2dc = local_388._4_4_;
      local_2e0 = iVar13;
      if (0 < local_388._4_4_ - iVar13) {
        local_2c0 = 0;
        local_2b8 = 0;
        FString::FString(local_138);
        local_128 = CONCAT44(iStack_2dc,local_2e0);
        local_120 = 0xffffffffffffffff;
        _guard_xfg_dispatch_icall_nop(&local_118,0,0x50);
        local_118 = 0;
        local_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xffffffff;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        if (local_2c0 != 0) {
          FMemory::Free();
        }
        uVar4 = local_378;
        lVar14 = (longlong)(int)local_378;
        iVar13 = (int)local_378 + 1;
        local_378 = CONCAT44(local_378._4_4_,iVar13);
        if (local_378._4_4_ < iVar13) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_380,uVar4 & 0xffffffff);
          uVar15 = local_388;
        }
        lVar14 = lVar14 * 0x70 + local_380;
        FString::FString(lVar14,local_138);
        *(undefined8 *)(lVar14 + 0x10) = local_128;
        *(undefined8 *)(lVar14 + 0x18) = local_120;
        *(undefined8 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(undefined8 *)(lVar14 + 0x48) = 0;
        *(undefined4 *)(lVar14 + 0x50) = 0xffffffff;
        *(undefined4 *)(lVar14 + 0x54) = 0;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        *(undefined4 *)(lVar14 + 0x68) = 0;
        TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
        ::operator=((undefined8 *)(lVar14 + 0x20),&local_118);
        TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
        ::
        ~TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
                  (&local_118);
        if (local_138[0] != 0) {
          FMemory::Free();
        }
      }
      if ((int)local_378 == 0) {
        local_2b0 = 0;
        local_2a8 = 0;
        FString::FString(local_c8);
        local_b0 = 0xffffffffffffffff;
        local_b8 = uVar15;
        _guard_xfg_dispatch_icall_nop(&local_a8,0,0x50);
        local_a8 = 0;
        local_a0 = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_98,0,0);
        local_78 = 0xffffffff;
        local_74 = 0;
        local_68 = 0;
        local_60 = 0;
        if (local_2b0 != 0) {
          FMemory::Free();
        }
        local_378 = CONCAT44(local_378._4_4_,1);
        if (local_378._4_4_ < 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_380,0);
        }
        lVar14 = local_380;
        FString::FString(local_380,local_c8);
        *(ulonglong *)(lVar14 + 0x10) = local_b8;
        *(undefined8 *)(lVar14 + 0x18) = local_b0;
        *(undefined8 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                  (lVar14 + 0x30,0,0);
        *(undefined4 *)(lVar14 + 0x50) = 0xffffffff;
        *(undefined4 *)(lVar14 + 0x54) = 0;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        *(undefined4 *)(lVar14 + 0x68) = 0;
        TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
        ::operator=(lVar14 + 0x20,&local_a8);
        TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
        ::
        ~TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
                  (&local_a8);
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
      }
      iVar13 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar13 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar13 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_4,iVar13);
      }
      FTextLineParseResults::FTextLineParseResults(*param_4 + (longlong)iVar13 * 0x18,&local_388);
      TArray<FTextRunParseResults,FDefaultAllocator>::
      ~TArray<FTextRunParseResults,FDefaultAllocator>(&local_380);
      local_358 = iVar7 + 1;
      local_2d8 = local_2d8 + 8;
      param_3 = local_288;
    } while (local_358 < (int)local_288[1]);
  }
  if (local_368 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_368 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_368)(local_368);
      LOCK();
      piVar2 = (int *)((longlong)local_368 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_368 + 8))(local_368,1);
      }
    }
  }
  return;
}



// FUNCTION 141911460 FUN_141911460 body=1217 status=ok
// SIG undefined FUN_141911460(void)

longlong * FUN_141911460(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  longlong local_res18;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FTabManager::NewLayout(param_2,*(undefined8 *)(param_1 + 0xd8));
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    local_res18 = 0;
    uVar11 = uVar10;
    do {
      lVar8 = *(longlong *)(param_1 + 0x78);
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      plVar4 = *(longlong **)(lVar8 + 8 + local_res18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar13 = iVar6 == 0;
        if (bVar13) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar6 == (int)plVar4[1];
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (plVar4 != (longlong *)0x0) {
              plVar7 = *(longlong **)(lVar8 + local_res18);
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x240))(plVar7,&local_78);
                if (local_78 != (longlong *)0x0) {
                  plVar7 = (longlong *)(**(code **)(*local_78 + 0x18))(local_78,local_68);
                  if (&local_88 != plVar7) {
                    local_88 = *plVar7;
                    *plVar7 = 0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_80,plVar7 + 1);
                  }
                  plVar7 = local_60;
                  if (local_60 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_60 + 1;
                    lVar8 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar8 == 1) {
                      (**(code **)*local_60)(local_60);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar7 + 0xc);
                      iVar6 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar7 + 8))(plVar7,1);
                      }
                    }
                  }
                }
                plVar7 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_70 + 1;
                  lVar8 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*local_70)(local_70);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar7 + 0xc);
                    iVar6 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar7 + 8))(plVar7,1);
                    }
                  }
                }
                if (local_88 != 0) {
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  lVar8 = *param_2;
                  iVar6 = *(int *)(lVar8 + 0x28);
                  *(int *)(lVar8 + 0x28) = iVar6 + 1;
                  if (*(int *)(lVar8 + 0x2c) < iVar6 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 0x20,iVar6);
                  }
                  plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x20));
                  *plVar7 = local_88;
                  plVar7[1] = (longlong)plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  lVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar8,local_58);
                  plVar1 = local_50;
                  plVar7 = *(longlong **)(lVar8 + 8);
                  if (plVar7 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                    UNLOCK();
                  }
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_50 + 1;
                    lVar8 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar8 == 1) {
                      (**(code **)*local_50)(local_50);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar1 + 0xc);
                      iVar6 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar1 + 8))(plVar1,1);
                      }
                    }
                  }
                  if (plVar7 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar7 + 1;
                    lVar8 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar8 == 1) {
                      (**(code **)*plVar7)(plVar7);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar7 + 0xc);
                      iVar6 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar7 + 8))(plVar7,1);
                      }
                    }
                  }
                  plVar7 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_80 + 1;
                    lVar8 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar8 == 1) {
                      (**(code **)*plStack_80)(plStack_80);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar7 + 0xc);
                      iVar6 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plStack_80 + 8))(plStack_80,1);
                      }
                    }
                  }
                  if (*(int *)(local_88 + 0x38) == 0) {
                    lVar8 = *param_2;
                    if ((*(longlong *)(lVar8 + 0x10) != 0) && (*(longlong *)(lVar8 + 0x18) != 0)) {
                      piVar3 = (int *)(*(longlong *)(lVar8 + 0x18) + 8);
                      LOCK();
                      if (*piVar3 == 0) {
                        *piVar3 = 0;
                      }
                      UNLOCK();
                      lVar8 = *param_2;
                    }
                    *(longlong *)(lVar8 + 0x10) = local_88;
                    plVar7 = *(longlong **)(lVar8 + 0x18);
                    if (plStack_80 != plVar7) {
                      if (plStack_80 != (longlong *)0x0) {
                        LOCK();
                        *(int *)((longlong)plStack_80 + 0xc) =
                             *(int *)((longlong)plStack_80 + 0xc) + 1;
                        UNLOCK();
                        plVar7 = *(longlong **)(lVar8 + 0x18);
                      }
                      if (plVar7 != (longlong *)0x0) {
                        LOCK();
                        piVar3 = (int *)((longlong)plVar7 + 0xc);
                        iVar6 = *piVar3;
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (iVar6 == 1) {
                          (**(code **)(*plVar7 + 8))(plVar7,1);
                        }
                      }
                      *(longlong **)(lVar8 + 0x18) = plStack_80;
                    }
                  }
                }
              }
              LOCK();
              plVar7 = plVar4 + 1;
              lVar8 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar3 = (int *)((longlong)plVar4 + 0xc);
                iVar6 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
              plVar4 = plStack_80;
              if (plStack_80 != (longlong *)0x0) {
                LOCK();
                plVar7 = plStack_80 + 1;
                lVar8 = *plVar7;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plStack_80)(plStack_80);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar4 + 0xc);
                  iVar6 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plStack_80 + 8))(plStack_80,1);
                  }
                }
              }
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(plVar4 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      local_res18 = local_res18 + 0x10;
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0x80));
  }
  uVar11 = uVar10;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      lVar8 = *param_2;
      lVar5 = *(longlong *)(param_1 + 0x88);
      iVar6 = *(int *)(lVar8 + 0x28);
      *(int *)(lVar8 + 0x28) = iVar6 + 1;
      if (*(int *)(lVar8 + 0x2c) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 0x20,iVar6);
      }
      puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x20));
      *puVar9 = *(undefined8 *)(lVar5 + uVar10);
      lVar5 = *(longlong *)(lVar5 + 8 + uVar10);
      puVar9[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      lVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar8,local_48);
      plVar7 = local_40;
      plVar4 = *(longlong **)(lVar8 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      uVar12 = (int)uVar11 + 1;
      uVar10 = uVar10 + 0x10;
      uVar11 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0x90));
  }
  return param_2;
}



// FUNCTION 141911930 FUN_141911930 body=1045 status=ok
// SIG undefined FUN_141911930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141911930(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1c8 = param_2;
  iVar8 = FUN_141984ca0(*(undefined8 *)(param_1 + 0x308));
  if ((((param_3 & 0xfffffffd) == 0) && (iVar8 == 0)) ||
     (((param_3 - 1 & 0xfffffffd) == 0 && (iVar8 == 1)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  iVar8 = *(int *)(param_1 + 800);
  if (!bVar5) {
    iVar9 = FUN_141984ca0(*(undefined8 *)(param_1 + 0x308));
    if (iVar8 != 1) {
      puVar10 = (undefined8 *)FTabManager::NewSplitter(local_198);
      local_1b0 = FUN_141918860(*puVar10,local_1a8,iVar9 == 0);
      plVar11 = (longlong *)
                SharedPointerInternals::NewIntrusiveReferenceController<SDockingSplitter>();
      plVar4 = plVar11 + 2;
      local_188 = plVar4;
      local_180 = plVar11;
      FUN_14044f790(&local_188,plVar4);
      local_218 = 0x328;
      SWidget::SetDebugInfo
                (plVar4,"SDockingSplitter",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
                 ,0xe3);
      lVar12 = STSDRichInlineImage::FArguments::FArguments(local_168);
      local_208 = *(undefined4 *)(lVar12 + 0x90);
      local_1d8 = lVar12 + 0xf8;
      local_1f0 = lVar12 + 0xe8;
      local_1e0 = *(undefined1 *)(lVar12 + 0xf1);
      local_1f8 = lVar12 + 200;
      local_200 = lVar12 + 0x98;
      local_1e8 = *(undefined1 *)(lVar12 + 0xf0);
      local_210 = lVar12 + 0x78;
      local_218 = lVar12 + 0x60;
      SWidget::SWidgetConstruct(plVar4,lVar12,lVar12 + 0x30,lVar12 + 0x40);
      FUN_1418ee1d0(plVar4,lVar12,local_1b0);
      if (((char)plVar11[5] < '\0') ||
         (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0')) {
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
      *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar11 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a0 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_190 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      FUN_140456c70(local_168);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_1c0 = plVar4;
      local_1b8 = plVar11;
      FUN_1419145b0(param_1,param_4,&local_1c0);
      plVar1 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1b8 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
      FUN_1418d7eb0(plVar4,param_4,0xffffffff);
      FUN_141911930(plVar4,local_1c8,param_3,param_4);
      if (plVar11 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar4 = plVar11 + 1;
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 != 1) {
        return;
      }
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 != 1) {
        return;
      }
      (**(code **)(*plVar11 + 8))(plVar11,1);
      return;
    }
    SBackgroundBlur::SetHAlign(*(undefined8 *)(param_1 + 0x308),iVar9 == 0);
    param_2 = local_1c8;
  }
  plVar4 = *(longlong **)(param_1 + 0x318);
  if (plVar4 != plVar4 + (longlong)*(int *)(param_1 + 800) * 2) {
    plVar11 = plVar4;
    do {
      if (*plVar11 == *param_4) {
        iVar8 = (int)((longlong)plVar11 - (longlong)plVar4 >> 4);
        goto LAB_141911a07;
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar4 + (longlong)*(int *)(param_1 + 800) * 2);
  }
  iVar8 = -1;
LAB_141911a07:
  if (param_3 < 2) {
    FUN_1418d7eb0(param_1,param_2,iVar8);
  }
  else {
    FUN_1418d7eb0(param_1,param_2,iVar8 + 1);
  }
  return;
}



// FUNCTION 141911d50 PopCommandList body=137 status=ok
// SIG undefined PopCommandList(void)

void FMultiBoxBuilder::PopCommandList(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (1 < *(int *)(param_1 + 0x20)) {
    lVar6 = (longlong)*(int *)(param_1 + 0x20);
    lVar4 = *(longlong *)(param_1 + 0x18);
    plVar5 = *(longlong **)(lVar4 + -8 + lVar6 * 0x10);
    *(undefined8 *)(lVar4 + -8 + lVar6 * 0x10) = 0;
    *(undefined8 *)(lVar4 + -0x10 + lVar6 * 0x10) = 0;
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((longlong *)(param_1 + 0x18),*(int *)(param_1 + 0x20) + -1,1,1);
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
  }
  return;
}



// FUNCTION 141911de0 Private_ClearSelection body=36 status=ok
// SIG undefined Private_ClearSelection(void)

void SListView<TSharedPtr<SWidget,0>_>::Private_ClearSelection(longlong param_1)

{
  TSet<TSharedPtr<SWidget,0>,DefaultKeyFuncs<TSharedPtr<SWidget,0>,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0x128,0);
  *(undefined4 *)(param_1 + -0x30) = 0;
  return;
}



// FUNCTION 141911e10 FUN_141911e10 body=495 status=ok
// SIG undefined FUN_141911e10(void)

void FUN_141911e10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 local_res8 [8];
  
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + -0x58) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + -0x60);
    }
    uVar4 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar4;
  }
  if (*(int *)(param_1 + -0x68) == 0) {
    plVar7 = (longlong *)param_2[1];
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x188);
    plVar7 = *(longlong **)(param_1 + 0x198);
    iVar9 = 0;
    iVar13 = -1;
    if (lVar11 != 0) {
      plVar2 = *(longlong **)(param_1 + 400);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar7;
      for (plVar10 = plVar5; iVar9 = iVar13, plVar10 != plVar5 + (longlong)(int)plVar7[1] * 2;
          plVar10 = plVar10 + 2) {
        if (*plVar10 == lVar11) {
          iVar9 = (int)((longlong)plVar10 - (longlong)plVar5 >> 4);
          break;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar2 + 1;
        lVar11 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar2)(plVar2);
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
    }
    plVar2 = (longlong *)*plVar7;
    iVar6 = (int)plVar7[1];
    if (plVar2 != plVar2 + (longlong)iVar6 * 2) {
      plVar5 = plVar2;
      do {
        if (*plVar5 == *param_2) {
          iVar13 = (int)((longlong)plVar5 - (longlong)plVar2 >> 4);
          break;
        }
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar2 + (longlong)iVar6 * 2);
    }
    if (iVar9 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar6;
      if (iVar9 < iVar6) {
        iVar8 = iVar9;
      }
    }
    if (iVar13 < 0) {
      iVar6 = 0;
    }
    else if (iVar13 < iVar6) {
      iVar6 = iVar13;
    }
    iVar9 = iVar6;
    if (iVar8 <= iVar6) {
      iVar9 = iVar8;
      iVar8 = iVar6;
    }
    if (iVar9 <= iVar8) {
      lVar11 = (longlong)iVar9 << 4;
      uVar12 = (ulonglong)((iVar8 - iVar9) + 1);
      do {
        FUN_14068cfa0(param_1 + 0x128,local_res8,*plVar7 + lVar11,0);
        lVar11 = lVar11 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    *(undefined4 *)(param_1 + -0x30) = 0;
    plVar7 = (longlong *)param_2[1];
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 141912000 FUN_141912000 body=537 status=ok
// SIG undefined FUN_141912000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141912000(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + -0x58) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + -0x60);
    }
    uVar8 = (**(code **)(*plVar9 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar8;
  }
  if (*(int *)(param_1 + -0x68) == 0) {
    plVar9 = (longlong *)param_2[1];
  }
  else {
    if (param_3 == '\0') {
      FUN_1406a1eb0(param_1 + 0x128,param_2);
    }
    else {
      FUN_14068cfa0(param_1 + 0x128,local_48,param_2,0);
    }
    if (param_4 != '\0') {
      plVar9 = (longlong *)param_2[1];
      puVar3 = (undefined8 *)(param_1 + 0x178);
      uVar5 = *param_2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_68 = uVar5;
      plStack_60 = plVar9;
      if (&local_68 != puVar3) {
        local_68 = *puVar3;
        plStack_60 = *(longlong **)(param_1 + 0x180);
        *puVar3 = uVar5;
        *(longlong **)(param_1 + 0x180) = plVar9;
        local_40 = uVar5;
        plStack_38 = plVar9;
      }
      plVar9 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar9 = (longlong *)param_2[1];
      puVar3 = (undefined8 *)(param_1 + 0x188);
      uVar5 = *param_2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_58 = uVar5;
      plStack_50 = plVar9;
      if (&local_58 != puVar3) {
        local_58 = *puVar3;
        plStack_50 = *(longlong **)(param_1 + 400);
        *puVar3 = uVar5;
        *(longlong **)(param_1 + 400) = plVar9;
        local_30 = uVar5;
        plStack_28 = plVar9;
      }
      plVar9 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + -0x30) = 0;
    plVar9 = (longlong *)param_2[1];
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 141912220 Process body=129 status=ok
// SIG undefined Process(void)

void FDefaultRichTextMarkupParser::Process
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FTextRange::CalculateLineRangesFromString(param_3,local_18);
  FUN_141910990(param_1,param_3,local_18,param_2);
  FUN_1419002d0(param_1,param_3,param_2,param_4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419122b0 PushCommandList body=173 status=ok
// SIG undefined PushCommandList(void)

void FMultiBoxBuilder::PushCommandList(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar3 + 1;
  if (*(int *)(param_1 + 0x24) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x18),iVar3);
  }
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x18));
  *puVar7 = uVar5;
  puVar7[1] = lVar4;
  plVar6 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 141912360 FUN_141912360 body=925 status=ok
// SIG undefined FUN_141912360(void)

double * FUN_141912360(longlong *param_1,double *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  
  FUN_1419aad30();
  plVar4 = (longlong *)param_1[0xb7];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  else {
    fVar1 = *param_3;
    fVar11 = (float)STableViewBase::GetItemWidth(param_1);
    fVar12 = (float)STableViewBase::GetItemHeight(param_1);
    iVar9 = (**(code **)(*param_1 + 0x230))(param_1);
    iVar10 = (int)plVar4[1];
    if (iVar10 % iVar9 != 0) {
      iVar10 = (iVar10 - iVar10 % iVar9) + iVar9;
    }
    dVar5 = 0.0;
    dVar3 = (double)param_1[0x66];
    if (0.0 <= dVar3) {
      dVar19 = (double)iVar10 - (double)((1.0 / fVar12) * param_3[1]) * (double)iVar9;
      if (dVar3 <= dVar19) {
        dVar19 = dVar3;
      }
    }
    else {
      dVar19 = 0.0;
    }
    fVar2 = param_3[2];
    dVar13 = dVar19 / (double)iVar9;
    fVar16 = 0.0;
    fVar15 = 0.0;
    fVar18 = (float)dVar13;
    fVar17 = 0.0;
    iVar9 = ((int)ROUND((fVar18 + fVar18) - 0.5) >> 1) * iVar9;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
              (param_1 + 0x9d,param_1 + 0x9a);
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x9a,0);
    bVar8 = true;
    bVar6 = true;
    iVar10 = iVar9;
    bVar7 = bVar6;
    do {
      if ((int)plVar4[1] <= iVar10) break;
      if (bVar6) {
        bVar6 = false;
        fVar17 = fVar17 + fVar12;
        fVar14 = 1.0;
        if (bVar7) {
          bVar7 = false;
          fVar14 = fVar18 - (float)(int)dVar13;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar14 = 1.0 - fVar14;
        }
        fVar15 = fVar15 + fVar14 * fVar12;
        if ((param_3[1] < fVar15) &&
           (fVar14 = 1.0 - (fVar15 - param_3[1]) * (1.0 / fVar12), fVar14 <= 0.0)) {
          fVar14 = 0.0;
        }
        dVar5 = dVar5 + (double)fVar14;
      }
      FUN_14069b190(param_1,(longlong)iVar10 * 0x10 + *plVar4,iVar10,iVar9,fVar2);
      fVar16 = fVar16 + fVar11;
      if (fVar1 < fVar16 + fVar11) {
        bVar6 = true;
        fVar16 = 0.0;
        if (param_3[1] <= fVar15) {
          bVar8 = false;
        }
      }
      iVar10 = iVar10 + 1;
    } while (bVar8);
    FUN_1406a14a0(param_1 + 0x85);
    FUN_1406a35f0(param_1 + 0x85);
    *(bool *)(param_2 + 3) = dVar19 <= dVar3;
    *param_2 = dVar19;
    param_2[2] = dVar5;
    param_2[1] = (double)fVar17;
  }
  return param_2;
}



// FUNCTION 141912700 FUN_141912700 body=1104 status=ok
// SIG undefined FUN_141912700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141912700(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  wchar_t *_Source;
  int iVar10;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  wchar_t *local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
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
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar6 = FText::ToString(param_1 + 0x3c8);
  iVar10 = 0;
  iVar9 = *(int *)(lVar6 + 8) + -1;
  if (*(int *)(lVar6 + 8) == 0) {
    iVar9 = iVar10;
  }
  if (iVar9 < 2) {
    FUN_141914d80(param_1);
  }
  else {
    puVar7 = (undefined8 *)FText::ToString(param_1 + 0x3c8);
    if (*(int *)(puVar7 + 1) == 0) {
      _Source = L"";
      iVar9 = iVar10;
    }
    else {
      _Source = (wchar_t *)*puVar7;
      iVar9 = *(int *)(puVar7 + 1) + -1;
    }
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) {
      iVar9 = iVar10;
    }
    local_158 = (wchar_t *)0x0;
    local_150 = iVar9 + 1;
    if (iVar9 == 0) {
      local_150 = iVar10;
    }
    local_14c = 0;
    if ((0 < local_150) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0), pwVar5 = local_158,
       0 < local_150)) {
      wcsncpy(local_158,_Source,(longlong)iVar9);
      pwVar5[iVar9] = L'\0';
    }
    uVar8 = FText::FromString(local_d8,&local_158);
    FText::operator=(param_1 + 0x3c8,uVar8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d0 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_158 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if ((*(longlong *)(param_1 + 0x3a8) != 0) && (*(longlong *)(param_1 + 0x3b8) != 0)) {
      local_148[0] = 0;
      local_148[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
      local_168 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_148[0],0xf,"Searching: {0}");
      lVar6 = FText::FText(local_80,param_1 + 0x3c8);
      uVar8 = FText::FromString(local_a8,local_148);
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar8);
      local_68[0] = 4;
      FText::FText(local_58,lVar6);
      local_110 = *puVar7;
      local_138 = local_68;
      puStack_130 = local_38;
      local_108 = puVar7[1];
      local_40 = '\x01';
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
      uVar8 = FText::Format(local_c0,&local_110,uVar8);
      FText::FText(local_f0,uVar8);
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
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_100);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar3 = (longlong *)puVar7[1];
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
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = *(longlong **)(lVar6 + 8);
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
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      FUN_1419bcd30(*(undefined8 *)(param_1 + 0x3a8),local_f0);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e8 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      local_128 = DAT_1464b9ee8;
      local_127 = 1;
      local_120 = 0;
      local_118 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x1b8))
                (*(longlong **)(param_1 + 0x3b8),&local_128);
    }
    FUN_1418f8680(param_1);
  }
  return;
}



// FUNCTION 141912b50 FUN_141912b50 body=1233 status=ok
// SIG undefined FUN_141912b50(void)

void FUN_141912b50(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  uint uStackX_c;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  plVar12 = (longlong *)0x0;
  iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
  if ((iVar3 < 1) || (*(int *)(param_1 + 0x25c) == -1)) {
    plVar5 = *(longlong **)(param_1 + 0x238);
    plVar13 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar14 = iVar3 == 0;
      if (bVar14) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar13 = plVar12, !bVar14) {
        LOCK();
        bVar14 = iVar3 == (int)plVar5[1];
        if (bVar14) {
          *(int *)(plVar5 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar14) {
          plVar13 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            plVar12 = *(longlong **)(param_1 + 0x230);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(plVar5 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    plVar5 = (longlong *)plVar12[0x72];
    local_88 = DAT_1469eb218;
    lStack_80 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x208))(plVar5,&local_88);
    local_78 = DAT_1469eb218;
    lStack_70 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    FUN_140692760(plVar12[0x6c],&local_78);
    local_68 = DAT_1469eb218;
    lStack_60 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    FUN_140692760(plVar12[0x6d],&local_68);
    FUN_140801a00(plVar12[0x6e],&DAT_1469eb218);
    goto joined_r0x000141912fda;
  }
  puVar10 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x25c) * 0x10 + *(longlong *)(param_1 + 0x218));
  plVar13 = (longlong *)puVar10[1];
  local_d8 = *puVar10;
  plVar5 = plVar13 + 1;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
  }
  local_d0 = plVar13;
  puVar4 = (undefined8 *)FUN_1418fc990();
  FUN_141918400(*puVar4,&local_d8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_141941310(*puVar10,&local_e8);
  if (local_e8 == (longlong *)0x0) {
    plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar13 = plVar12;
LAB_141912c8e:
    bVar14 = false;
  }
  else {
    plVar5 = (longlong *)FUN_1418fc990();
    lVar2 = *plVar5;
    plVar13 = *(longlong **)(lVar2 + 0x1a0);
    plVar5 = plVar13;
    plVar11 = plVar12;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar13[1];
      bVar14 = iVar3 == 0;
      if (bVar14) {
        *(int *)(plVar13 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar5 = plVar12, !bVar14) {
        LOCK();
        bVar14 = iVar3 == (int)plVar13[1];
        if (bVar14) {
          *(int *)(plVar13 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar14) {
          plVar5 = plVar13;
          plVar11 = (longlong *)0x0;
          if (plVar13 != (longlong *)0x0) {
            plVar11 = *(longlong **)(lVar2 + 0x198);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar13[1];
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(plVar13 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    plVar13 = (longlong *)0x1;
    if (local_e8 == plVar11) goto LAB_141912c8e;
    bVar14 = true;
  }
  if ((plVar13 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar5 + 1;
    lVar2 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
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
  if (bVar14) {
    uVar6 = SDockTab::GetTabLabel(*puVar10,local_58);
    FUN_141919cb0(local_e8,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  plVar5 = *(longlong **)(param_1 + 0x238);
  uVar6 = *puVar10;
  plVar13 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar14 = iVar3 == 0;
    if (bVar14) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar12, !bVar14) {
      LOCK();
      bVar14 = iVar3 == (int)plVar5[1];
      if (bVar14) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar13 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = *(longlong **)(param_1 + 0x230);
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar14 = iVar3 == 0;
      if (bVar14) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar7 = FUN_14193eda0(uVar6,local_98);
  uVar8 = FUN_141941690(uVar6,local_a8);
  uVar9 = FOnlineSubsystemEOS::GetIdentityInterface(uVar6,local_b8);
  uVar6 = STableViewBase::GetHeaderRow(uVar6,local_c8);
  FUN_1419187a0(plVar12,uVar6,uVar9,uVar8,uVar7);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_c0 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_b0 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_a0 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  plVar13 = local_e0;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_90 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = local_e0;
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
        plVar13 = local_e0;
      }
    }
  }
joined_r0x000141912fda:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 141913030 FUN_141913030 body=748 status=ok
// SIG undefined FUN_141913030(void)

void FUN_141913030(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  uint local_10;
  
  lVar6 = param_1 + 8;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  local_68 = DAT_1469eae28;
  local_60 = DAT_1469eae30;
  local_58 = DAT_1469eae38;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  plVar5 = DAT_1469e9f98;
  local_80 = DAT_1469e9f90;
  local_88 = DAT_1469e9f88;
  local_50 = local_50 & 0xfffffff0;
  if (DAT_1469e9f98 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469e9f98 + 1) = (int)DAT_1469e9f98[1] + 1;
    UNLOCK();
  }
  local_78 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_70 = local_70 & 0xfffffff2 | 2;
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
  FUN_1418c6220(lVar6,param_1 + 0x48,L"TabCommands",L"CloseMajorTab",L"CloseMajorTab_ToolTip",
                ".CloseMajorTab",L"Close Major Tab",L"Closes the focused major tab",1,&local_88,
                &local_68);
  plVar5 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_78)(local_78);
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
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
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
  local_28 = DAT_1469eae28;
  local_20 = DAT_1469eae30;
  local_18 = DAT_1469eae38;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  local_10 = local_10 & 0xfffffff0;
  local_48 = DAT_1469eae28;
  local_40 = DAT_1469eae30;
  local_38 = DAT_1469eae38;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  local_30 = local_30 & 0xfffffff0;
  FUN_1418c6220(lVar6,param_1 + 0x58,L"TabCommands",L"CloseMinorTab",L"CloseMinorTab_ToolTip",
                ".CloseMinorTab",L"Close Minor Tab",L"Closes the current window\'s active minor tab"
                ,1,&local_48,&local_28);
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
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
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_18)(local_18);
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



// FUNCTION 141913320 Remove body=405 status=ok
// SIG undefined Remove(void)

int TSlotlessChildren<SDockTab>::Remove(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  if (*param_2 != DAT_1469eb218) {
    FUN_141806420(*param_2,*(undefined8 *)(param_1 + 8));
  }
  iVar3 = *(int *)(param_1 + 0x18);
  lVar7 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = **(longlong **)(param_1 + 0x10) != *param_2;
  lVar9 = 0;
  iVar11 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar12 = iVar11 + 1;
    if (lVar9 < lVar7) {
      plVar6 = (longlong *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0x10));
      do {
        if (bVar13 != (*plVar6 != *param_2)) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar9 < lVar7);
    }
    iVar8 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar8 != 0) {
        plVar6 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *(longlong *)(param_1 + 0x10));
        do {
          plVar4 = (longlong *)*plVar6;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x10)),
                   (void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x10)),
                   (longlong)iVar8 << 4);
      }
      iVar10 = iVar10 + iVar8;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar7 <= lVar9) {
      *(int *)(param_1 + 0x18) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 1419134c0 FUN_1419134c0 body=878 status=ok
// SIG undefined FUN_1419134c0(void)

void FUN_1419134c0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  plVar2 = *(longlong **)(param_1 + 0x218);
  if (plVar2 != plVar2 + (longlong)*(int *)(param_1 + 0x220) * 2) {
    plVar9 = plVar2;
    while (*plVar9 != *param_2) {
      plVar9 = plVar9 + 2;
      if (plVar9 == plVar2 + (longlong)*(int *)(param_1 + 0x220) * 2) {
        return;
      }
    }
    uVar10 = (longlong)plVar9 - (longlong)plVar2 >> 4;
    if ((int)uVar10 != -1) {
      plVar7 = (longlong *)0x0;
      plVar2 = *(longlong **)(param_1 + 0x238);
      plVar9 = plVar2;
      plVar11 = plVar7;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar12 = iVar6 == 0;
        if (bVar12) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar7, plVar11 = (longlong *)0x0, !bVar12) {
          LOCK();
          bVar12 = iVar6 == (int)plVar2[1];
          if (bVar12) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar12) {
            plVar9 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar11 = *(longlong **)(param_1 + 0x230);
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar12 = iVar6 == 0;
          if (bVar12) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      FUN_1418dd2f0(param_1,uVar10 & 0xffffffff);
      plVar2 = (longlong *)(param_1 + 0x208);
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_78,uVar10 & 0xffffffff);
      if (local_78 != DAT_1469eb218) {
        FUN_141806420(local_78,*(undefined8 *)(param_1 + 0x210));
      }
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_1 + 0x218,uVar10 & 0xffffffff,1,1);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      uVar5 = (int)uVar10 - 1;
      *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
      if (-1 < (int)uVar5) {
        plVar7 = (longlong *)(ulonglong)uVar5;
      }
      FUN_1418dd2f0(param_1,plVar7);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x220))(plVar11,&local_88);
        plVar7 = (longlong *)SDockTab::GetLayoutIdentifier(*param_2);
        if ((int)plVar7[1] == -1) {
          plVar3 = (longlong *)plVar11[0x61];
          local_58 = (undefined4)*plVar7;
          uStack_54 = *(undefined4 *)((longlong)plVar7 + 4);
          iStack_50 = (int)plVar7[1];
          uStack_4c = *(undefined4 *)((longlong)plVar7 + 0xc);
          for (plVar8 = plVar3; plVar8 != plVar3 + (longlong)(int)plVar11[0x62] * 3;
              plVar8 = plVar8 + 3) {
            if ((((*(byte *)(plVar8 + 2) & 1) != 0) && (*plVar8 == *plVar7)) &&
               ((iStack_50 == -1 || (iStack_50 == (int)plVar8[1])))) {
              iVar6 = (int)(((longlong)plVar8 - (longlong)plVar3) / 0x18);
              if (iVar6 != -1) {
                *(undefined4 *)(plVar3 + (longlong)iVar6 * 3 + 2) = 2;
              }
              break;
            }
          }
        }
        else {
          SDockingTabStack::RemovePersistentTab(plVar11,plVar7);
        }
        if ((param_3 == 1) && (local_88 != 0)) {
          plVar7 = (longlong *)FUN_1418ff8c0(local_88,local_68);
          (**(code **)(*(longlong *)**(undefined8 **)(*plVar7 + 200) + 0x38))
                    ((longlong *)**(undefined8 **)(*plVar7 + 200),param_2);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_60 + 1;
            lVar4 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
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
        }
        iVar6 = (**(code **)*plVar2)(plVar2);
        if (iVar6 == 0) {
          FUN_14190bc20(plVar11);
        }
        else {
          FUN_141912b50(param_1);
        }
        if (local_88 != 0) {
          FUN_1418eacf0(local_88,param_3);
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141913830 RemoveAtImpl body=229 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FNavPathRecalculationRequest,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
    iVar5 = param_3;
    do {
      plVar2 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar3 = (iVar5 - param_2) - param_3;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar3 * 0x18);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141913920 FUN_141913920 body=644 status=ok
// SIG undefined FUN_141913920(void)

undefined8 FUN_141913920(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  bool bVar17;
  int local_res18;
  
  local_res18 = (int)param_1[1];
  lVar12 = (longlong)local_res18;
  if (0 < local_res18) {
    lVar13 = *param_1;
    plVar5 = *(longlong **)(lVar13 + -0x10 + lVar12 * 0x18);
    plVar6 = *(longlong **)(lVar13 + -0x18 + lVar12 * 0x18);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      local_res18 = (int)param_1[1];
    }
    iVar16 = *(int *)(lVar13 + -8 + lVar12 * 0x18);
    iVar2 = *(int *)(lVar13 + -4 + lVar12 * 0x18);
    local_res18 = local_res18 + -2;
    lVar12 = (longlong)local_res18;
    if (-1 < local_res18) {
      lVar13 = lVar12 * 0x18;
      do {
        lVar7 = *param_1;
        plVar14 = (longlong *)0x0;
        plVar8 = *(longlong **)(lVar13 + 8 + lVar7);
        plVar9 = *(longlong **)(lVar13 + lVar7);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
        }
        iVar3 = *(int *)(lVar13 + 0x10 + lVar7);
        iVar4 = *(int *)(lVar13 + 0x14 + lVar7);
        plVar15 = plVar14;
        if (plVar8 == (longlong *)0x0) {
LAB_1419139ff:
          plVar11 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            plVar15 = plVar9;
          }
        }
        else {
          LOCK();
          iVar10 = (int)plVar8[1];
          bVar17 = iVar10 == 0;
          if (bVar17) {
            *(int *)(plVar8 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
          while (plVar11 = plVar14, !bVar17) {
            LOCK();
            bVar17 = iVar10 == (int)plVar8[1];
            if (bVar17) {
              *(int *)(plVar8 + 1) = iVar10 + 1;
            }
            UNLOCK();
            if (bVar17) goto LAB_1419139ff;
            LOCK();
            iVar10 = (int)plVar8[1];
            bVar17 = iVar10 == 0;
            if (bVar17) {
              *(int *)(plVar8 + 1) = 0;
              iVar10 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar10 = (int)plVar5[1];
          bVar17 = iVar10 == 0;
          if (bVar17) {
            *(int *)(plVar5 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
          while (plVar14 = (longlong *)0x0, !bVar17) {
            LOCK();
            bVar17 = iVar10 == (int)plVar5[1];
            if (bVar17) {
              *(int *)(plVar5 + 1) = iVar10 + 1;
            }
            UNLOCK();
            if (bVar17) {
              LOCK();
              plVar9 = plVar5 + 1;
              lVar7 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              plVar14 = plVar6;
              if ((int)lVar7 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
              break;
            }
            LOCK();
            iVar10 = (int)plVar5[1];
            bVar17 = iVar10 == 0;
            if (bVar17) {
              *(int *)(plVar5 + 1) = 0;
              iVar10 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar11 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        if (((plVar15 == plVar14) && (iVar16 == iVar3)) && (iVar4 != iVar2)) {
          FUN_141913f50(param_1,(int)param_1[1] + -1);
          FUN_141913f50(param_1,local_res18);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
          return 1;
        }
        if (iVar3 <= iVar16) {
          if (iVar4 == 1) {
            iVar16 = iVar16 + -1;
          }
          else {
            iVar16 = iVar16 + 1;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        local_res18 = local_res18 + -1;
        lVar13 = lVar13 + -0x18;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return 0;
}



// FUNCTION 141913bb0 RemovePersistentTab body=209 status=ok
// SIG undefined RemovePersistentTab(void)

void SDockingTabStack::RemovePersistentTab(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x308);
  iVar6 = *(int *)(param_1 + 0x310);
  plVar3 = plVar1;
  do {
    if (plVar3 == plVar1 + (longlong)iVar6 * 3) {
      iVar2 = -1;
LAB_141913c08:
      iVar4 = (iVar6 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (plVar1 + (longlong)iVar2 * 3,plVar1 + (longlong)(iVar6 - iVar4) * 3,
                   (longlong)iVar4 * 0x18);
        iVar6 = *(int *)(param_1 + 0x310);
      }
      *(int *)(param_1 + 0x310) = iVar6 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x308));
      return;
    }
    if ((((*(byte *)(plVar3 + 2) & 3) != 0) && (*plVar3 == *param_2)) &&
       (((int)param_2[1] == -1 || ((int)param_2[1] == (int)plVar3[1])))) {
      lVar5 = ((longlong)plVar3 - (longlong)plVar1) / 6 +
              ((longlong)plVar3 - (longlong)plVar1 >> 0x3f);
      iVar2 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
      goto LAB_141913c08;
    }
    plVar3 = plVar3 + 3;
  } while( true );
}



// FUNCTION 141913c90 FUN_141913c90 body=689 status=ok
// SIG undefined FUN_141913c90(void)

void FUN_141913c90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar12 = 0;
  uVar14 = uVar12;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x88);
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      lVar4 = local_38;
LAB_141913cf0:
      local_38 = lVar4;
      local_68 = *(undefined8 *)(lVar3 + uVar14);
      local_60 = *(longlong **)(lVar3 + 8 + uVar14);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)FUN_1418f97c0(local_58,param_2,&local_68);
      if (&local_78 != plVar7) {
        local_78 = *plVar7;
        *plVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_70,plVar7 + 1);
      }
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_60 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      plVar7 = plStack_70;
      lVar5 = local_78;
      if (local_78 != 0) {
        plVar7 = *(longlong **)(local_78 + 0x20);
        lVar2 = local_78 + 0x20;
        iVar11 = *(int *)(local_78 + 0x28);
        local_48 = (undefined4)*param_2;
        uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
        iStack_40 = (int)param_2[1];
        uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
        lVar4 = param_2[2];
        if (plVar7 != plVar7 + (longlong)iVar11 * 3) {
          local_38._4_1_ = (char)((ulonglong)lVar4 >> 0x20);
          local_38._0_4_ = (uint)lVar4;
          plVar8 = plVar7;
          do {
            if ((((*(uint *)(plVar8 + 2) & (uint)local_38) != 0) && (*plVar8 == *param_2)) &&
               (((local_38._4_1_ != '\0' && (iStack_40 == -1)) || (iStack_40 == (int)plVar8[1])))) {
              lVar9 = ((longlong)plVar8 - (longlong)plVar7) / 6 +
                      ((longlong)plVar8 - (longlong)plVar7 >> 0x3f);
              iVar10 = (int)(lVar9 >> 2) - (int)(lVar9 >> 0x3f);
              if (iVar10 != -1) {
                iVar6 = (iVar11 - iVar10) + -1;
                local_38 = lVar4;
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar7 + (longlong)iVar10 * 3,plVar7 + (longlong)(iVar10 + 1) * 3,
                             (longlong)iVar6 * 0x18);
                  iVar11 = *(int *)(lVar5 + 0x28);
                }
                *(int *)(lVar5 + 0x28) = iVar11 + -1;
                TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(lVar2);
                lVar4 = local_38;
              }
              break;
            }
            plVar8 = plVar8 + 3;
          } while (plVar8 != plVar7 + (longlong)iVar11 * 3);
        }
        goto LAB_141913cf0;
      }
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_70 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
      uVar14 = uVar14 + 0x10;
    } while ((int)uVar13 < *(int *)(param_1 + 0x90));
  }
  return;
}



// FUNCTION 141913f50 FUN_141913f50 body=194 status=ok
// SIG undefined FUN_141913f50(void)

void FUN_141913f50(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar4 = *param_1;
  uVar8 = (ulonglong)param_2;
  lVar9 = uVar8 * 0x18;
  plVar5 = *(longlong **)(lVar9 + 8 + lVar4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(lVar9 + 0x14 + lVar4);
  iVar3 = *(int *)(lVar9 + 0x10 + lVar4);
  TArray<FNavPathRecalculationRequest,FDefaultAllocator>::RemoveAtImpl(param_1,param_2,1,1);
  if (param_2 < (int)param_1[1]) {
    do {
      iVar6 = *(int *)(*param_1 + 0x10 + lVar9);
      if (iVar3 <= iVar6) {
        if (iVar2 == 1) {
          iVar6 = iVar6 + -1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        *(int *)(*param_1 + 0x10 + lVar9) = iVar6;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      lVar9 = lVar9 + 0x18;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 141914020 FUN_141914020 body=1422 status=ok
// SIG undefined FUN_141914020(void)

undefined8 FUN_141914020(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *_Src;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  undefined8 *local_60;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  
  if (0 < (int)param_1[1]) {
    uVar12 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar22 = uVar12;
    if (0 < (int)param_2[1]) {
      do {
        plVar16 = *(longlong **)(*(longlong *)(uVar22 + *param_2) + 0x68);
        uVar4 = *(undefined8 *)(*(longlong *)(uVar22 + *param_2) + 0x60);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
          UNLOCK();
        }
        lVar17 = (longlong)(int)local_48;
        iVar6 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar6);
        if (local_48._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_50);
        }
        puVar9 = (undefined8 *)(lVar17 * 0x10 + local_50);
        *puVar9 = uVar4;
        puVar9[1] = plVar16;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar16 + 1;
          lVar17 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar15;
        uVar22 = uVar22 + 0x10;
      } while ((int)uVar15 < (int)param_2[1]);
    }
    iVar6 = (int)local_48;
    local_60 = (undefined8 *)0x0;
    local_58 = (int)local_48;
    if ((int)local_48 == 0) {
      local_54 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_60,local_48 & 0xffffffff,0);
      puVar9 = local_60;
      do {
        *puVar9 = *(undefined8 *)((local_50 - (longlong)local_60) + (longlong)puVar9);
        lVar17 = *(longlong *)((local_50 - (longlong)local_60) + 8 + (longlong)puVar9);
        puVar9[1] = lVar17;
        if (lVar17 != 0) {
          LOCK();
          *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_1[1] + -1;
    if (-1 < iVar6) {
      lVar11 = (longlong)iVar6 * 0x18;
      lVar17 = (longlong)iVar6;
      do {
        iVar6 = local_58;
        puVar9 = (undefined8 *)(*param_1 + lVar11);
        if (*(int *)((longlong)puVar9 + 0x14) == 1) {
          iVar6 = *(int *)(puVar9 + 2);
          if ((-1 < iVar6) && (iVar6 < local_58)) {
            plVar16 = (longlong *)local_60[(longlong)iVar6 * 2 + 1];
            plVar18 = plVar16;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              iVar6 = (int)plVar16[1];
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(plVar16 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (plVar18 = (longlong *)0x0, !bVar24) {
                LOCK();
                bVar24 = iVar6 == (int)plVar16[1];
                if (bVar24) {
                  *(int *)(plVar16 + 1) = iVar6 + 1;
                }
                UNLOCK();
                plVar18 = plVar16;
                if (bVar24) break;
                LOCK();
                iVar6 = (int)plVar16[1];
                bVar24 = iVar6 == 0;
                if (bVar24) {
                  *(int *)(plVar16 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            plVar16 = (longlong *)puVar9[1];
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              iVar6 = (int)plVar16[1];
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(plVar16 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (!bVar24) {
                LOCK();
                bVar24 = iVar6 == (int)plVar16[1];
                if (bVar24) {
                  *(int *)(plVar16 + 1) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar24) {
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = plVar16 + 1;
                    lVar10 = *plVar13;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar16)(plVar16);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar16 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar16 + 8))(plVar16);
                      }
                    }
                  }
                  break;
                }
                LOCK();
                iVar6 = (int)plVar16[1];
                bVar24 = iVar6 == 0;
                if (bVar24) {
                  *(int *)(plVar16 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar18 + 1;
              lVar10 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar18 + 8))(plVar18);
                }
              }
            }
            iVar6 = *(int *)(puVar9 + 2);
            puVar9 = local_60 + (longlong)iVar6 * 2;
            plVar16 = (longlong *)puVar9[1];
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar7 == 1) && (plVar16 != (longlong *)0x0)) {
                (**(code **)(*plVar16 + 8))();
              }
            }
            iVar7 = (local_58 - iVar6) + -1;
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (puVar9,local_60 + (longlong)(iVar6 + 1) * 2,(longlong)iVar7 << 4);
            }
            local_58 = local_58 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_60);
          }
        }
        else if (*(int *)((longlong)puVar9 + 0x14) == 0) {
          iVar7 = *(int *)(puVar9 + 2);
          local_58 = local_58 + 1;
          if (local_54 < local_58) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_60,iVar6);
          }
          _Src = local_60 + (longlong)iVar7 * 2;
          _guard_xfg_dispatch_icall_nop(_Src + 2,_Src,(longlong)(iVar6 - iVar7) << 4);
          *_Src = *puVar9;
          lVar10 = puVar9[1];
          _Src[1] = lVar10;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
            UNLOCK();
          }
        }
        lVar10 = (longlong)local_58;
        if (local_58 == (int)local_48) {
          lVar23 = 0;
          if (lVar10 < 1) {
LAB_1419144a7:
            iVar6 = (int)param_1[1] + -1;
            lVar11 = (longlong)iVar6;
            if (lVar17 <= lVar11) {
              lVar10 = lVar11 * 0x18;
              lVar17 = (lVar11 - lVar17) + 1;
              do {
                lVar11 = *param_1;
                plVar16 = *(longlong **)(lVar10 + 8 + lVar11);
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
                  UNLOCK();
                }
                iVar7 = *(int *)(lVar10 + 0x14 + lVar11);
                iVar3 = *(int *)(lVar10 + 0x10 + lVar11);
                TArray<FNavPathRecalculationRequest,FDefaultAllocator>::RemoveAtImpl
                          (param_1,iVar6,1,1);
                lVar11 = lVar10;
                iVar19 = iVar6;
                if (iVar6 < (int)param_1[1]) {
                  do {
                    iVar8 = *(int *)(*param_1 + 0x10 + lVar11);
                    if (iVar3 <= iVar8) {
                      if (iVar7 == 1) {
                        iVar8 = iVar8 + -1;
                      }
                      else {
                        iVar8 = iVar8 + 1;
                      }
                      *(int *)(*param_1 + 0x10 + lVar11) = iVar8;
                    }
                    iVar19 = iVar19 + 1;
                    lVar11 = lVar11 + 0x18;
                  } while (iVar19 < (int)param_1[1]);
                }
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
                iVar6 = iVar6 + -1;
                lVar10 = lVar10 + -0x18;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
            ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(&local_60);
            TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
            ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(&local_50);
            return 1;
          }
          lVar21 = local_50 - (longlong)local_60;
          plVar16 = local_60 + 1;
          do {
            plVar13 = (longlong *)0x0;
            plVar18 = (longlong *)*plVar16;
            plVar14 = plVar18;
            plVar20 = plVar13;
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              iVar6 = (int)plVar18[1];
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(plVar18 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (plVar14 = plVar13, !bVar24) {
                LOCK();
                bVar24 = iVar6 == (int)plVar18[1];
                if (bVar24) {
                  *(int *)(plVar18 + 1) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar24) {
                  plVar14 = plVar18;
                  plVar20 = (longlong *)plVar16[-1];
                  break;
                }
                LOCK();
                iVar6 = (int)plVar18[1];
                bVar24 = iVar6 == 0;
                if (bVar24) {
                  *(int *)(plVar18 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            plVar18 = *(longlong **)((longlong)plVar16 + lVar21);
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              iVar6 = (int)plVar18[1];
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(plVar18 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (!bVar24) {
                LOCK();
                bVar24 = iVar6 == (int)plVar18[1];
                if (bVar24) {
                  *(int *)(plVar18 + 1) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar24) {
                  plVar13 = *(longlong **)((longlong)plVar16 + lVar21 + -8);
                  LOCK();
                  plVar2 = plVar18 + 1;
                  lVar5 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar18)(plVar18);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar18 + 0xc);
                    iVar6 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar18 + 8))(plVar18);
                    }
                  }
                  break;
                }
                LOCK();
                iVar6 = (int)plVar18[1];
                bVar24 = iVar6 == 0;
                if (bVar24) {
                  *(int *)(plVar18 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar14 + 1;
              lVar5 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14);
                }
              }
            }
            if (plVar20 != plVar13) break;
            lVar23 = lVar23 + 1;
            plVar16 = plVar16 + 2;
            if (lVar10 <= lVar23) goto LAB_1419144a7;
          } while( true );
        }
        lVar11 = lVar11 + -0x18;
        bVar24 = 0 < lVar17;
        lVar17 = lVar17 + -1;
      } while (bVar24);
    }
    TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
    ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(&local_60);
    TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
    ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(&local_50);
  }
  return 0;
}



// FUNCTION 1419145b0 FUN_1419145b0 body=1068 status=ok
// SIG undefined FUN_1419145b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419145b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128 [2];
  longlong local_118;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar10 = *(longlong **)(param_1 + 0x318);
  if (plVar10 != plVar10 + (longlong)*(int *)(param_1 + 800) * 2) {
    plVar7 = plVar10;
    do {
      if (*plVar7 == *param_2) {
        iVar11 = (int)((longlong)plVar7 - (longlong)plVar10 >> 4);
        goto LAB_141914625;
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar10 + (longlong)*(int *)(param_1 + 800) * 2);
  }
  iVar11 = -1;
LAB_141914625:
  uStack_130 = (longlong *)param_3[1];
  local_138 = *param_3;
  plVar10 = plVar10 + (longlong)iVar11 * 2;
  if (uStack_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_130 + 1) = (int)uStack_130[1] + 1;
    UNLOCK();
  }
  if (&local_138 != plVar10) {
    local_138._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    uStack_130._4_4_ = (undefined4)((ulonglong)uStack_130 >> 0x20);
    lVar5 = *plVar10;
    plVar7 = (longlong *)plVar10[1];
    local_58 = (undefined4)local_138;
    uStack_54 = local_138._4_4_;
    uStack_50 = (undefined4)uStack_130;
    uStack_4c = uStack_130._4_4_;
    *(undefined4 *)plVar10 = (undefined4)local_138;
    *(undefined4 *)((longlong)plVar10 + 4) = local_138._4_4_;
    *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_130._4_4_;
    local_138 = lVar5;
    uStack_130 = plVar7;
  }
  plVar10 = uStack_130;
  local_118 = param_1;
  if (uStack_130 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_130 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_130)(uStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_130 + 8))(uStack_130,1);
      }
    }
  }
  plVar10 = (longlong *)param_3[1];
  local_b8 = *param_3;
  *(undefined4 *)(local_b8 + 0x300) = *(undefined4 *)(*param_2 + 0x300);
  local_c0 = 0;
  local_c8 = local_b8;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    local_c8 = *param_3;
    local_c0 = param_3[1];
  }
  local_e8 = &LAB_141918f10;
  local_f8 = &LAB_1418ff520;
  uStack_f0 = 0;
  uStack_e0 = 0;
  local_108 = &LAB_1418d48f0;
  uStack_100 = 0;
  plVar7 = (longlong *)0x0;
  lVar5 = local_c8;
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
    plVar7 = (longlong *)param_3[1];
    lVar5 = *param_3;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  local_b0 = plVar10;
  plVar4 = (longlong *)FMemory::Realloc(0,0x40);
  local_128[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144d6a3f0;
    plVar4[1] = lVar5;
    plVar4[2] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar4 + 3) = (undefined4)local_e8;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = local_e8._4_4_;
    *(undefined4 *)(plVar4 + 4) = uStack_e0;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_dc;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[6] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144d6a438;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_128[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_128[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
        plVar4 = local_128[0];
      }
    }
  }
  local_d8 = *param_3;
  local_d0 = param_3[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
    plVar4 = local_128[0];
  }
  uVar8 = *(undefined8 *)(local_118 + 0x308);
  puVar6 = (undefined4 *)FUN_1418c87d0(local_88,&local_d8,&local_f8);
  lVar5 = UTTLHUDMember::GetItem(uVar8,iVar11);
  *(undefined4 *)(lVar5 + 0x38) = *puVar6;
  *(undefined1 *)(lVar5 + 0x3c) = *(undefined1 *)(puVar6 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x40,puVar6 + 2);
  pplVar2 = (longlong **)(lVar5 + 0x50);
  if (local_128 != pplVar2) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x58) != 0) && (plVar7 = *pplVar2, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar7;
        }
        *(undefined4 *)(lVar5 + 0x58) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
    }
  }
  uVar8 = FUN_1418c88f0(local_70,&local_c8,&local_108);
  uVar8 = SSplitter::FSlot::SizeRule(lVar5,uVar8);
  FUN_140801a00(uVar8,&local_b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    local_128[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
    if (local_128[0] != (longlong *)0x0) {
      FMemory::Free(local_128[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  param_3 = (longlong *)*param_3;
  puVar9 = (undefined8 *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_118 + 8,local_98);
  local_a8 = *puVar9;
  local_a0 = puVar9[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  (**(code **)(*param_3 + 0x210))(param_3,&local_a8);
  return;
}



// FUNCTION 1419149e0 FUN_1419149e0 body=306 status=ok
// SIG undefined FUN_1419149e0(void)

void FUN_1419149e0(longlong param_1,undefined1 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  code *local_48;
  undefined4 uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [32];
  
  if (param_3 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f000000;
  }
  if ((*(longlong *)(param_1 + 800) != 0) && (*(longlong *)(param_1 + 0x328) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x328) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      return;
    }
  }
  local_48 = FUN_14191e1e0;
  uStack_40 = 0;
  uVar5 = FUN_1418c9e60(local_28,param_1,&local_48,param_2);
  puVar6 = (undefined8 *)FUN_141853de0(param_1 + 8,local_38,uVar8,uVar5);
  *(undefined8 *)(param_1 + 800) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x328);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x328);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    *(longlong **)(param_1 + 0x328) = plVar2;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 141914b20 FUN_141914b20 body=330 status=ok
// SIG undefined FUN_141914b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141914b20(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  plVar5 = (longlong *)0x0;
  if (((*(int *)(lVar1 + 0x68) != 0) && (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(lVar1 + 0x68) != 0) {
      plVar5 = *(longlong **)(lVar1 + 0x60);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
    *(undefined8 *)(lVar1 + 0x48) = local_48;
    *(undefined8 *)(lVar1 + 0x50) = uStack_40;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  local_48._0_4_ = (float)uVar2;
  local_48._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  uStack_40._0_4_ = (float)uVar3;
  fStack_2c = DAT_1464bfe0c;
  fStack_34 = _DAT_1464bfe04;
  fStack_30 = _DAT_1464bfe08;
  local_38 = _DAT_1464bfe00;
  if ((param_2 == 0) ||
     (fStack_2c = DAT_1464bfdfc, fStack_34 = _DAT_1464bfdf4, fStack_30 = _DAT_1464bfdf8,
     local_38 = _DAT_1464bfdf0, param_2 == 1)) {
    local_38 = (float)local_48 + local_38;
    fStack_30 = (float)uStack_40 + fStack_30;
    fStack_34 = local_48._4_4_ + fStack_34;
    lVar1 = *(longlong *)(param_1 + 0x378);
    uStack_40._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    fStack_2c = fStack_2c + uStack_40._4_4_;
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    *(float *)(lVar1 + 0x48) = local_38;
    *(float *)(lVar1 + 0x4c) = fStack_34;
    *(float *)(lVar1 + 0x50) = fStack_30;
    *(float *)(lVar1 + 0x54) = fStack_2c;
    *(undefined1 *)(lVar1 + 0x58) = 1;
    local_48 = uVar2;
    uStack_40 = uVar3;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x60,&local_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 141914c70 FUN_141914c70 body=257 status=ok
// SIG undefined FUN_141914c70(void)

void FUN_141914c70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if (param_1 != &local_28) {
    *param_1 = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if (param_1 + 2 != &local_18) {
    param_1[2] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&local_10);
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
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}



// FUNCTION 141914d80 FUN_141914d80 body=651 status=ok
// SIG undefined FUN_141914d80(void)

void FUN_141914d80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  longlong local_c8 [2];
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  longlong *local_40;
  longlong *plStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  uVar7 = FUN_1404b03b0();
  FText::operator=(param_1 + 0x3c8,uVar7);
  uStack_b4 = 1;
  local_98 = (longlong *)(param_1 + 0x358);
  local_b8 = 0;
  iVar3 = *(int *)(param_1 + 0x380);
  puStack_b0 = (uint *)(param_1 + 0x368);
  iStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x378);
    if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
      puVar11 = puStack_b0;
    }
    uVar4 = *puVar11;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar10 = local_b8 + 1;
      bVar6 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar10;
      if (bVar6) goto LAB_141914e60;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_b4 = -uVar4 & uVar4;
    iVar10 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_a4 = (iStack_a0 - iVar10) + 0x1f;
    if (iVar3 < iStack_a4) {
LAB_141914e60:
      iStack_a4 = iVar3;
    }
  }
  local_a8 = 0xffffffff;
  uStack_90 = (longlong *)CONCAT44(uStack_b4,local_b8);
  uStack_28 = 0xffffffff;
  iStack_24 = iStack_a4;
  iStack_20 = iStack_a0;
  uStack_1c = uStack_9c;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_a4;
  local_78 = iStack_a0;
  uStack_74 = uStack_9c;
  local_88 = puStack_b0;
  local_40 = local_98;
  plStack_38 = uStack_90;
  puStack_30 = puStack_b0;
  if (iStack_a4 < iVar3) {
    do {
      local_70 = DAT_1464b9ee8;
      plVar5 = *(longlong **)(*local_98 + (longlong)iStack_7c * 0x30);
      local_6f = 1;
      local_68 = 0;
      local_60 = 0;
      (**(code **)(*plVar5 + 0x1b8))(plVar5,&local_70);
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  if ((*(longlong *)(param_1 + 0x3a8) != 0) && (*(longlong *)(param_1 + 0x3b8) != 0)) {
    local_c8[0] = 0;
    local_c8[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_c8[0],10,"No Search",10,0x3f);
    uVar7 = *(undefined8 *)(param_1 + 0x3a8);
    uVar8 = FText::FromString(&local_40,local_c8);
    FUN_1419bcd30(uVar7,uVar8);
    plVar5 = plStack_38;
    if (plStack_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_38 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_38)(plStack_38);
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
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    local_58 = DAT_1464b9ee9;
    local_57 = 1;
    local_50 = 0;
    local_48 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x1b8))
              (*(longlong **)(param_1 + 0x3b8),&local_58);
  }
  return;
}



// FUNCTION 141915010 FUN_141915010 body=253 status=ok
// SIG undefined FUN_141915010(void)

undefined8 *
FUN_141915010(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_28 = *param_3;
  local_20 = (longlong *)param_3[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_141915110(param_1,&local_18,&local_28,param_4,param_5);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar3 = local_10;
  *param_2 = local_18;
  param_2[1] = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  FUN_1418eacf0(*param_2,2);
  plVar1 = local_10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141915110 FUN_141915110 body=6576 status=ok
// SIG undefined FUN_141915110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141915110(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  longlong **pplVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  longlong *plVar26;
  bool bVar27;
  undefined1 auStack_f78 [32];
  longlong local_f58;
  longlong local_f50;
  undefined4 local_f48;
  longlong local_f40;
  longlong local_f38;
  longlong local_f30;
  undefined1 local_f28;
  undefined1 local_f20;
  longlong local_f18;
  char local_f08;
  longlong *local_ef8;
  longlong *plStack_ef0;
  undefined1 local_ee8;
  undefined1 local_ee7 [7];
  longlong *local_ee0;
  longlong local_ed8;
  longlong *plStack_ed0;
  longlong local_eb8;
  longlong *plStack_eb0;
  longlong local_ea8;
  longlong *plStack_ea0;
  longlong local_e98;
  longlong *local_e90;
  longlong local_e88;
  longlong *plStack_e80;
  undefined8 local_e78;
  longlong *plStack_e70;
  undefined8 local_e68;
  longlong *local_e60;
  longlong local_e58;
  longlong local_e50;
  longlong *local_e48;
  longlong *local_e40;
  longlong *local_e38;
  undefined1 *local_e30;
  longlong *local_e28;
  longlong *local_e20;
  undefined1 *local_e18;
  longlong *local_e10;
  longlong *local_e08;
  undefined8 **local_e00;
  longlong *local_df8;
  longlong *local_df0;
  undefined8 **local_de8;
  longlong *local_de0;
  longlong *local_dd8;
  undefined8 **local_dd0;
  longlong *local_dc8;
  longlong *local_dc0;
  longlong local_db8;
  longlong *plStack_db0;
  undefined8 local_da8;
  longlong *local_da0;
  undefined8 local_d98;
  longlong *local_d90;
  undefined8 local_d88;
  longlong *local_d80;
  undefined1 local_d78 [8];
  longlong *local_d70;
  undefined8 local_d68;
  longlong *local_d60;
  longlong *local_d58;
  longlong local_d50;
  longlong local_d48;
  longlong local_d40;
  longlong local_d38;
  longlong local_d30;
  longlong **local_d28;
  longlong local_d20;
  longlong local_d18;
  longlong **local_d10;
  undefined8 *local_d08;
  longlong *local_d00;
  undefined8 local_cf8;
  longlong *local_cf0;
  undefined8 local_ce8;
  longlong *local_ce0;
  undefined8 local_cd8;
  longlong local_cd0;
  longlong local_cc8;
  longlong *plStack_cc0;
  longlong local_cb8;
  longlong *local_cb0;
  longlong *local_ca8;
  longlong *local_ca0;
  undefined8 *local_c98;
  longlong *local_c90;
  longlong local_c88;
  longlong *plStack_c80;
  longlong *local_c78;
  undefined8 uStack_c70;
  longlong local_c68;
  longlong *local_c60;
  longlong local_c58;
  longlong *plStack_c50;
  longlong local_c48;
  longlong *plStack_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  longlong local_c28;
  longlong *plStack_c20;
  undefined8 *local_c18;
  longlong *local_c10;
  undefined8 local_c08;
  longlong *local_c00;
  longlong local_bf8;
  longlong local_bf0;
  undefined8 local_be8;
  longlong *local_be0;
  undefined8 local_bd8;
  longlong local_bd0;
  longlong local_bc8;
  longlong *plStack_bc0;
  undefined1 local_bb8 [8];
  longlong *local_bb0;
  longlong *local_ba8;
  longlong *plStack_ba0;
  undefined1 local_b98 [8];
  longlong *local_b90;
  longlong *local_b88;
  longlong *plStack_b80;
  undefined1 local_b78 [16];
  undefined1 local_b68 [16];
  undefined1 local_b58 [8];
  longlong *local_b50;
  undefined1 local_b48 [8];
  longlong *local_b40;
  undefined1 local_b38 [8];
  longlong *local_b30;
  undefined1 local_b28 [8];
  longlong *local_b20;
  undefined1 local_b18 [8];
  longlong *local_b10;
  undefined1 local_b08 [8];
  longlong *local_b00;
  undefined1 local_af8 [8];
  longlong *local_af0;
  longlong *local_ae8;
  longlong *local_ae0;
  undefined1 local_ad0 [8];
  longlong *local_ac8;
  undefined1 local_ab8 [272];
  undefined1 local_9a8 [272];
  undefined1 local_898 [272];
  undefined1 local_788 [304];
  undefined1 local_658 [304];
  undefined1 local_528 [304];
  undefined1 local_3f8 [464];
  undefined1 local_228 [464];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f78;
  plVar23 = (longlong *)0x0;
  bVar27 = false;
  local_e90 = (longlong *)((ulonglong)local_e90 & 0xffffffff00000000);
  local_ee0 = param_4;
  local_e98 = param_1;
  (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_eb8);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_e88);
  (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_ed8);
  lVar13 = local_ed8;
  if (local_eb8 == 0) {
    if (local_ed8 == 0) {
      if (local_e88 == 0) {
        local_e48 = (longlong *)FUN_1418aaad0(local_b78);
        local_d18 = SharedPointerInternals::NewIntrusiveReferenceController<SDockingTabStack>();
        lVar13 = local_d18 + 0x10;
        local_d20 = lVar13;
        FUN_14044f790(&local_d20,lVar13);
        local_d10 = &local_e48;
        local_f58 = 0x428;
        SWidget::SetDebugInfo
                  (lVar13,"SDockingTabStack",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x55e);
        uVar15 = SDockingTabStack::FArguments::FArguments(local_898);
        FUN_14188df80(&local_d20,&local_d48,uVar15);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d20);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b78);
        FUN_140456c70(local_898);
        local_c38 = 0;
        local_c30 = 0xffffffff;
        uVar15 = FUN_14191a4d0(param_1,local_b68,&local_c38,param_4);
        FUN_141910330(local_d48,uVar15,0xffffffff);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b68);
        *param_2 = local_d48;
        param_2[1] = local_d40;
        if (local_d40 != 0) {
          LOCK();
          *(int *)(local_d40 + 8) = *(int *)(local_d40 + 8) + 1;
          UNLOCK();
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d48);
      }
      else {
        local_c58 = local_e88;
        plStack_c50 = plStack_e80;
        if (plStack_e80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_e80 + 1) = (int)plStack_e80[1] + 1;
          UNLOCK();
        }
        local_dc0 = &local_c58;
        local_d30 = SharedPointerInternals::NewIntrusiveReferenceController<SDockingSplitter>();
        lVar13 = local_d30 + 0x10;
        local_d38 = lVar13;
        FUN_14044f790(&local_d38,lVar13);
        local_d28 = &local_dc0;
        local_f58 = 0x328;
        SWidget::SetDebugInfo
                  (lVar13,"SDockingSplitter",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x554);
        uVar15 = STSDRichInlineImage::FArguments::FArguments(local_ab8);
        FUN_1418d4370(&local_d38,&local_e58,uVar15);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d38);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c58);
        FUN_140456c70(local_ab8);
        *(undefined4 *)(local_e58 + 0x300) = *(undefined4 *)(*param_3 + 0x18);
        local_c48 = local_e88;
        plStack_c40 = plStack_e80;
        if (plStack_e80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_e80 + 1) = (int)plStack_e80[1] + 1;
          UNLOCK();
        }
        FUN_141916ac0(param_1,&local_c48,&local_e58,param_4);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c48);
        *param_2 = local_e58;
        param_2[1] = local_e50;
        if (local_e50 != 0) {
          LOCK();
          *(int *)(local_e50 + 8) = *(int *)(local_e50 + 8) + 1;
          UNLOCK();
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_e58);
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_ed8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_e88);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_eb8);
      return param_2;
    }
    if (*(int *)(local_ed8 + 0x38) == 0) {
      plStack_ef0 = (longlong *)0x0;
      if (param_5 == '\0') {
        pplVar22 = &local_c78;
        local_c78 = (longlong *)0x0;
        uStack_c70 = 0;
        bVar4 = false;
        bVar27 = true;
      }
      else {
        local_d50 = param_4[1];
        plVar23 = (longlong *)*param_4;
        if (local_d50 != 0) {
          LOCK();
          *(int *)(local_d50 + 8) = *(int *)(local_d50 + 8) + 1;
          UNLOCK();
        }
        pplVar22 = &local_d58;
        bVar4 = true;
        local_d58 = plVar23;
      }
      plVar20 = pplVar22[1];
      pplVar22[1] = (longlong *)0x0;
      *pplVar22 = (longlong *)0x0;
      local_ca8 = plVar23;
      local_ca0 = plVar20;
      uVar15 = SDockingArea::FArguments::FArguments(local_528);
      local_ee0 = (longlong *)FUN_14188d200(uVar15,&local_ca8);
      *(undefined1 *)((longlong)local_ee0 + 0x118) = 0;
      local_c88 = local_ed8;
      plStack_c80 = plStack_ed0;
      if (plStack_ed0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
        UNLOCK();
      }
      puVar17 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_e98 + 8,local_b98);
      local_d68 = *puVar17;
      local_d60 = (longlong *)puVar17[1];
      if (local_d60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d60 + 1) = (int)local_d60[1] + 1;
        UNLOCK();
      }
      if (local_b90 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_b90 + 1;
        lVar13 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_b90)(local_b90);
          LOCK();
          piVar1 = (int *)((longlong)local_b90 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_b90 + 8))(local_b90,1);
          }
        }
      }
      local_c98 = &local_d68;
      local_c90 = &local_c88;
      plVar20 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SDockingArea>();
      plVar23 = plVar20 + 2;
      local_e10 = plVar23;
      local_e08 = plVar20;
      FUN_14044f790(&local_e10,plVar23);
      local_e00 = &local_c98;
      local_f58 = 0x360;
      SWidget::SetDebugInfo
                (plVar23,"SDockingArea",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                 ,0x542);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      local_e68 = 0;
      local_ef8 = plVar23;
      local_e60 = plVar20;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_ef0,&local_e60);
      plVar23 = local_e60;
      if (local_e60 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_e60 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e60)(local_e60);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_e60 + 8))(local_e60,1);
          }
        }
      }
      FUN_1418d40d0(&local_e10,local_d78,local_ee0);
      plVar23 = local_d70;
      if (local_d70 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_d70 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_d70)(local_d70);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_d70 + 8))(local_d70,1);
          }
        }
      }
      plVar23 = local_e08;
      if (local_e08 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_e08 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e08)(local_e08);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_e08 + 8))(local_e08,1);
          }
        }
      }
      plVar23 = local_d60;
      if (local_d60 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_d60 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_d60)(local_d60);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      plVar23 = plStack_c80;
      if (plStack_c80 != (longlong *)0x0) {
        LOCK();
        plVar20 = plStack_c80 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_c80)(plStack_c80);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      FUN_1418d1f90(local_528);
      if (bVar27) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c78);
      }
      if (bVar4) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d58);
      }
      plVar23 = plStack_ed0;
      if (plStack_ef0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
        UNLOCK();
      }
      local_b88 = local_ef8;
      plStack_b80 = plStack_ef0;
      if (plStack_ef0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
        UNLOCK();
      }
      if (plStack_ed0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
        UNLOCK();
      }
      local_c68 = local_ed8;
      local_c60 = plStack_ed0;
      if (plStack_ed0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
        UNLOCK();
      }
      FUN_141916ac0(local_e98,&local_c68,&local_b88,param_4);
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar23 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
        LOCK();
        plVar20 = plVar23 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      plVar23 = plStack_ef0;
      if (plStack_ef0 == (longlong *)0x0) goto LAB_1419166e8;
      LOCK();
      plVar20 = plStack_ef0 + 1;
      lVar13 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_ef0)(plStack_ef0);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_ef0 + 8))(plStack_ef0,1);
        }
      }
      plVar20 = plStack_ef0;
      LOCK();
      plVar23 = plVar23 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_ef0)(plStack_ef0);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          lVar13 = *plStack_ef0;
          plVar23 = plStack_ef0;
          goto LAB_1419166d3;
        }
      }
    }
    else {
      local_ee0 = (longlong *)*param_4;
      local_ef8 = (longlong *)0x0;
      plStack_ef0 = (longlong *)0x0;
      if (*(int *)(local_ed8 + 0x38) == 1) {
        lVar16 = FUN_1417e8330(local_228);
        *(undefined1 *)(lVar16 + 0x149) = 2;
        uVar3 = *(undefined4 *)(lVar13 + 0x48);
        *(undefined4 *)(lVar16 + 0x154) = *(undefined4 *)(lVar13 + 0x44);
        *(undefined4 *)(lVar16 + 0x158) = uVar3;
        *(undefined1 *)(lVar16 + 0x19c) = 0;
        *(undefined1 *)(lVar16 + 0x168) = *(undefined1 *)(lVar13 + 0x4c);
        local_e20 = (longlong *)operator_new(0x600);
        if (local_e20 == (longlong *)0x0) {
          local_e20 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(local_e20 + 1) = 1;
          *(undefined4 *)((longlong)local_e20 + 0xc) = 1;
          *local_e20 = (longlong)&PTR_FUN_144d503d8;
          if (local_e20 != (longlong *)0xfffffffffffffff0) {
            FUN_1417f4890();
          }
        }
        plVar23 = local_e20 + 2;
        local_e28 = plVar23;
        FUN_14044f790(&local_e28,plVar23);
        local_e18 = &local_ee8;
        local_f58 = 0x5f0;
        SWidget::SetDebugInfo
                  (plVar23,"SWindow",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x521);
        puVar17 = (undefined8 *)FUN_1417fd440(&local_e28,local_b48,lVar16);
        bVar8 = true;
        bVar7 = true;
        bVar6 = true;
        bVar5 = false;
        bVar4 = false;
        bVar27 = false;
      }
      else {
        lVar16 = FUN_1417e8330(local_3f8);
        *(undefined1 *)(lVar16 + 0x149) = 0;
        uVar3 = *(undefined4 *)(lVar13 + 0x40);
        *(undefined4 *)(lVar16 + 0x14c) = *(undefined4 *)(lVar13 + 0x3c);
        *(undefined4 *)(lVar16 + 0x150) = uVar3;
        uVar3 = *(undefined4 *)(lVar13 + 0x48);
        *(undefined4 *)(lVar16 + 0x154) = *(undefined4 *)(lVar13 + 0x44);
        *(undefined4 *)(lVar16 + 0x158) = uVar3;
        *(undefined1 *)(lVar16 + 0x19c) = 0;
        *(undefined1 *)(lVar16 + 0x168) = *(undefined1 *)(lVar13 + 0x4c);
        local_e38 = (longlong *)operator_new(0x600);
        if (local_e38 == (longlong *)0x0) {
          local_e38 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(local_e38 + 1) = 1;
          *(undefined4 *)((longlong)local_e38 + 0xc) = 1;
          *local_e38 = (longlong)&PTR_FUN_144d503d8;
          if (local_e38 != (longlong *)0xfffffffffffffff0) {
            FUN_1417f4890();
          }
        }
        plVar23 = local_e38 + 2;
        local_e40 = plVar23;
        FUN_14044f790(&local_e40,plVar23);
        local_e30 = local_ee7;
        local_f58 = 0x5f0;
        SWidget::SetDebugInfo
                  (plVar23,"SWindow",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x526);
        puVar17 = (undefined8 *)FUN_1417fd440(&local_e40,local_b58,lVar16);
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = true;
        bVar4 = true;
        bVar27 = true;
      }
      plVar23 = (longlong *)puVar17[1];
      uVar15 = *puVar17;
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
      }
      if ((bVar27) && (local_b50 != (longlong *)0x0)) {
        LOCK();
        plVar20 = local_b50 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_b50)(local_b50);
          LOCK();
          piVar1 = (int *)((longlong)local_b50 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_b50 + 8))(local_b50,1);
          }
        }
      }
      plVar20 = local_e38;
      if ((bVar4) && (local_e38 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_e38 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e38)(local_e38);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_e38 + 8))(local_e38,1);
          }
        }
      }
      if (bVar5) {
        FUN_1417f5da0(local_3f8);
      }
      if ((bVar6) && (local_b40 != (longlong *)0x0)) {
        LOCK();
        plVar20 = local_b40 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_b40)(local_b40);
          LOCK();
          piVar1 = (int *)((longlong)local_b40 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_b40 + 8))(local_b40,1);
          }
        }
      }
      plVar20 = local_e20;
      if ((bVar7) && (local_e20 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_e20 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e20)(local_e20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_e20 + 8))(local_e20,1);
          }
        }
      }
      if (bVar8) {
        FUN_1417f5da0(local_228);
      }
      plVar20 = DAT_1469f4590;
      if (local_ee0 == (longlong *)0x0) {
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
        }
        local_cc8 = local_ed8;
        plStack_cc0 = plStack_ed0;
        if (plStack_ed0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
          UNLOCK();
        }
        local_cf8 = uVar15;
        local_cf0 = plVar23;
        puVar17 = (undefined8 *)
                  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_b08);
        local_d98 = *puVar17;
        local_d90 = (longlong *)puVar17[1];
        if (local_d90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d90 + 1) = (int)local_d90[1] + 1;
          UNLOCK();
        }
        if (local_b00 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_b00 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_b00)(local_b00);
            LOCK();
            piVar1 = (int *)((longlong)local_b00 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_b00 + 8))(local_b00,1);
            }
          }
        }
        local_d08 = &local_d98;
        local_d00 = &local_cc8;
        local_dd8 = (longlong *)
                    SharedPointerInternals::NewIntrusiveReferenceController<SDockingArea>();
        local_de0 = local_dd8 + 2;
        FUN_14044f790(&local_de0);
        local_dd0 = &local_d08;
        local_f58 = 0x360;
        SWidget::SetDebugInfo
                  (local_de0,"SDockingArea",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x537);
        uVar18 = SDockingArea::FArguments::FArguments(local_658);
        uVar18 = FUN_14188d200(uVar18,&local_cf8);
        uVar19 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
                 Expose<SListView<TSharedPtr<FString,1>_>_>(&local_de0,&local_ef8);
        puVar17 = (undefined8 *)FUN_1418d40d0(uVar19,local_bb8,uVar18);
        local_cd8 = *puVar17;
        local_cd0 = puVar17[1];
        if (local_cd0 != 0) {
          LOCK();
          *(int *)(local_cd0 + 8) = *(int *)(local_cd0 + 8) + 1;
          UNLOCK();
        }
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
        }
        local_ce8 = uVar15;
        local_ce0 = plVar23;
        puVar17 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,local_af8,&local_ce8,1);
        FUN_14185a760(*puVar17,&local_cd8);
        if (local_af0 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_af0 + 1;
          lVar13 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_af0)(local_af0);
            LOCK();
            piVar1 = (int *)((longlong)local_af0 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_af0 + 8))(local_af0,1);
            }
          }
        }
        if (local_bb0 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_bb0 + 1;
          lVar13 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_bb0)(local_bb0);
            LOCK();
            piVar1 = (int *)((longlong)local_bb0 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_bb0 + 8))(local_bb0,1);
            }
          }
        }
        plVar20 = local_dd8;
        if (local_dd8 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_dd8 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_dd8)(local_dd8);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar20 = local_d90;
        if (local_d90 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_d90 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_d90)(local_d90);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar20 = plStack_cc0;
        if (plStack_cc0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_cc0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_cc0)(plStack_cc0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        puVar21 = local_658;
      }
      else {
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
        }
        local_bc8 = local_ed8;
        plStack_bc0 = plStack_ed0;
        if (plStack_ed0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
          UNLOCK();
        }
        local_c08 = uVar15;
        local_c00 = plVar23;
        puVar17 = (undefined8 *)
                  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_b38);
        local_da8 = *puVar17;
        local_da0 = (longlong *)puVar17[1];
        if (local_da0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_da0 + 1) = (int)local_da0[1] + 1;
          UNLOCK();
        }
        if (local_b30 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_b30 + 1;
          lVar13 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_b30)(local_b30);
            LOCK();
            piVar1 = (int *)((longlong)local_b30 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_b30 + 8))(local_b30,1);
            }
          }
        }
        local_c18 = &local_da8;
        local_c10 = &local_bc8;
        local_df0 = (longlong *)
                    SharedPointerInternals::NewIntrusiveReferenceController<SDockingArea>();
        local_df8 = local_df0 + 2;
        FUN_14044f790(&local_df8);
        local_de8 = &local_c18;
        local_f58 = 0x360;
        SWidget::SetDebugInfo
                  (local_df8,"SDockingArea",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x531);
        uVar18 = SDockingArea::FArguments::FArguments(local_788);
        uVar18 = FUN_14188d200(uVar18,&local_c08);
        uVar19 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
                 Expose<SListView<TSharedPtr<FString,1>_>_>(&local_df8,&local_ef8);
        puVar17 = (undefined8 *)FUN_1418d40d0(uVar19,local_b18,uVar18);
        local_bd8 = *puVar17;
        local_bd0 = puVar17[1];
        if (local_bd0 != 0) {
          LOCK();
          *(int *)(local_bd0 + 8) = *(int *)(local_bd0 + 8) + 1;
          UNLOCK();
        }
        local_bf8 = *param_4;
        local_bf0 = param_4[1];
        if (local_bf0 != 0) {
          LOCK();
          *(int *)(local_bf0 + 8) = *(int *)(local_bf0 + 8) + 1;
          UNLOCK();
        }
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
        }
        local_f58 = CONCAT71(local_f58._1_7_,1);
        local_be8 = uVar15;
        local_be0 = plVar23;
        puVar17 = (undefined8 *)FUN_14188f890(DAT_1469f4590,local_b28,&local_be8,&local_bf8);
        FUN_14185a760(*puVar17,&local_bd8);
        if (local_b20 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_b20 + 1;
          lVar13 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_b20)(local_b20);
            LOCK();
            piVar1 = (int *)((longlong)local_b20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_b20 + 8))(local_b20,1);
            }
          }
        }
        if (local_b10 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_b10 + 1;
          lVar13 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_b10)(local_b10);
            LOCK();
            piVar1 = (int *)((longlong)local_b10 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_b10 + 8))(local_b10,1);
            }
          }
        }
        plVar20 = local_df0;
        if (local_df0 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_df0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_df0)(local_df0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar20 = local_da0;
        if (local_da0 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_da0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_da0)(local_da0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar20 = plStack_bc0;
        if (plStack_bc0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_bc0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_bc0)(plStack_bc0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        puVar21 = local_788;
      }
      FUN_1418d1f90(puVar21);
      plVar20 = (longlong *)FUN_1418fc990();
      FUN_141919cb0(uVar15,*plVar20 + 0x180);
      plVar20 = plStack_ed0;
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
      }
      if (plStack_ef0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
        UNLOCK();
      }
      local_ba8 = local_ef8;
      plStack_ba0 = plStack_ef0;
      if (plStack_ef0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
        UNLOCK();
      }
      if (plStack_ed0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
        UNLOCK();
      }
      local_cb8 = local_ed8;
      local_cb0 = plStack_ed0;
      if (plStack_ed0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
        UNLOCK();
      }
      local_d88 = uVar15;
      local_d80 = plVar23;
      FUN_141916ac0(param_1,&local_cb8,&local_ba8,&local_d88);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar20 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
        LOCK();
        plVar12 = plVar20 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      plVar20 = plStack_ef0;
      if (plStack_ef0 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_ef0 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_ef0)(plStack_ef0);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_ef0 + 8))(plStack_ef0,1);
          }
        }
        plVar12 = plStack_ef0;
        LOCK();
        plVar20 = plVar20 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_ef0)(plStack_ef0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_ef0 + 8))(plStack_ef0,1);
          }
        }
      }
      plVar20 = local_d80;
      if (local_d80 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_d80 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_d80)(local_d80);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar23 + 1;
        lVar13 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            lVar13 = *plVar23;
LAB_1419166d3:
            (**(code **)(lVar13 + 8))(plVar23,1);
          }
        }
      }
    }
    if (plStack_ef0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
      UNLOCK();
    }
LAB_1419166e8:
    plVar23 = plStack_ef0;
    *param_2 = (longlong)local_ef8;
    param_2[1] = (longlong)plStack_ef0;
    if (plStack_ef0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
      UNLOCK();
      LOCK();
      plVar20 = plStack_ef0 + 1;
      lVar13 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_ef0)(plStack_ef0);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_ef0 + 8))(plStack_ef0,1);
        }
      }
      plVar20 = plStack_ef0;
      LOCK();
      plVar23 = plVar23 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_ef0)(plStack_ef0);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_ef0 + 8))(plStack_ef0,1);
        }
      }
    }
    if (plStack_ed0 != (longlong *)0x0) {
      LOCK();
      plVar23 = plStack_ed0 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_ed0)(plStack_ed0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_ed0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_ed0 + 8))(plStack_ed0,1);
        }
      }
    }
    if (plStack_e80 != (longlong *)0x0) {
      LOCK();
      plVar23 = plStack_e80 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_e80)(plStack_e80);
        LOCK();
        piVar1 = (int *)((longlong)plStack_e80 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_e80 + 8))(plStack_e80,1);
        }
      }
    }
    if (plStack_eb0 != (longlong *)0x0) {
      LOCK();
      plVar23 = plStack_eb0 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_eb0)(plStack_eb0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_eb0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_eb0 + 8))(plStack_eb0,1);
        }
      }
    }
    return param_2;
  }
  local_c28 = local_eb8;
  plStack_c20 = plStack_eb0;
  local_ea8 = 0;
  plStack_ea0 = (longlong *)0x0;
  if (plStack_eb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_eb0 + 1) = (int)plStack_eb0[1] + 1;
    UNLOCK();
  }
  local_dc8 = &local_c28;
  plVar12 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SDockingTabStack>();
  plVar20 = plVar12 + 2;
  local_e90 = plVar12;
  local_ae8 = plVar20;
  local_ae0 = plVar12;
  FUN_14044f790(&local_ae8,plVar20);
  local_f58 = 0x428;
  SWidget::SetDebugInfo
            (plVar20,"SDockingTabStack",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
             ,0x4f1);
  lVar13 = SDockingTabStack::FArguments::FArguments(local_9a8);
  local_f18 = lVar13 + 0xf8;
  local_f20 = *(undefined1 *)(lVar13 + 0xf1);
  local_f30 = lVar13 + 0xe8;
  local_f48 = *(undefined4 *)(lVar13 + 0x90);
  local_f38 = lVar13 + 200;
  local_f40 = lVar13 + 0x98;
  local_f28 = *(undefined1 *)(lVar13 + 0xf0);
  local_f50 = lVar13 + 0x78;
  local_f58 = lVar13 + 0x60;
  SWidget::SWidgetConstruct(plVar20,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  FUN_1418ee400(plVar20,lVar13,local_dc8);
  if (((char)plVar12[5] < '\0') || (cVar9 = (**(code **)(*plVar20 + 0x1e8))(plVar20), cVar9 != '\0')
     ) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar10;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar26 = plVar12 + 1;
    lVar13 = *plVar26;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar26 = plStack_c20;
  if (plStack_c20 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_c20 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_c20)(plStack_c20);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar26 + 8))(plVar26,1);
      }
    }
  }
  FUN_140456c70(local_9a8);
  plVar26 = local_ee0;
  *(undefined4 *)(plVar12 + 0x62) = *(undefined4 *)(*param_3 + 0x18);
  lVar13 = local_eb8;
  plVar14 = plVar23;
  plVar24 = plVar23;
  if (*(int *)(local_eb8 + 0x28) < 1) goto LAB_1419155f7;
  do {
    plVar12 = (longlong *)(*(longlong *)(lVar13 + 0x20) + (longlong)plVar24);
    if (((int)plVar12[2] == 1) &&
       (cVar9 = FTabManager::IsValidTabForSpawning(local_e98,plVar12), lVar13 = local_eb8,
       cVar9 != '\0')) {
      FUN_14191a4d0(local_e98,&local_db8,plVar12,plVar26);
      if ((*plVar12 == *(longlong *)(local_eb8 + 0x38)) &&
         ((((int)plVar12[1] == -1 || (*(int *)(local_eb8 + 0x40) == -1)) ||
          ((int)plVar12[1] == *(int *)(local_eb8 + 0x40))))) {
        plStack_e70 = plStack_db0;
        if (plStack_db0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_db0 + 1) = (int)plStack_db0[1] + 1;
          UNLOCK();
        }
        local_ea8 = local_db8;
        local_e78 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_ea0,&plStack_e70);
        plVar12 = plStack_e70;
        if (plStack_e70 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_e70 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_e70)(plStack_e70);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_e70 + 8))(plStack_e70,1);
            }
          }
        }
      }
      FUN_1418d9a90(plVar20,&local_db8,0xffffffff);
      plVar12 = plStack_db0;
      lVar13 = local_eb8;
      if (plStack_db0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_db0 + 1;
        lVar16 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plStack_db0)(plStack_db0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar13 = local_eb8;
          if (iVar11 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            lVar13 = local_eb8;
          }
        }
      }
    }
    plVar12 = local_e90;
    lVar16 = local_ea8;
    uVar25 = (int)plVar14 + 1;
    plVar14 = (longlong *)(ulonglong)uVar25;
    plVar24 = plVar24 + 3;
  } while ((int)uVar25 < *(int *)(lVar13 + 0x28));
  if (local_ea8 == 0) goto LAB_1419155f7;
  FUN_141926de0(local_ea8,1);
  cVar9 = FUN_1419425c0(lVar16);
  if (((cVar9 == '\0') || (cVar9 = FUN_1419425c0(lVar16), plVar26 = local_ee0, cVar9 == '\x02')) &&
     (plVar26 = local_ee0, *local_ee0 != 0)) {
    plVar14 = (longlong *)FUN_1418fc990();
    lVar13 = *plVar14;
    plVar14 = *(longlong **)(lVar13 + 0x1a0);
    local_e48 = plVar14;
    plVar24 = plVar23;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      iVar11 = (int)plVar14[1];
      bVar27 = iVar11 == 0;
      if (bVar27) {
        *(int *)(plVar14 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (local_e48 = plVar23, lVar16 = local_ea8, !bVar27) {
        LOCK();
        bVar27 = iVar11 == (int)plVar14[1];
        if (bVar27) {
          *(int *)(plVar14 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar27) {
          local_e48 = plVar14;
          plVar24 = (longlong *)0x0;
          if (plVar14 != (longlong *)0x0) {
            plVar24 = *(longlong **)(lVar13 + 0x198);
          }
          break;
        }
        LOCK();
        iVar11 = (int)plVar14[1];
        bVar27 = iVar11 == 0;
        if (bVar27) {
          *(int *)(plVar14 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
    }
    plVar23 = (longlong *)0x1;
    if ((longlong *)*plVar26 == plVar24) goto LAB_141915556;
    local_f08 = '\x01';
    plVar14 = local_e48;
  }
  else {
LAB_141915556:
    local_f08 = '\0';
    plVar14 = local_e48;
  }
  if ((plVar23 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar23 = plVar14 + 1;
    lVar13 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    lVar16 = local_ea8;
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar16 = local_ea8;
      if (iVar11 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
        lVar16 = local_ea8;
      }
    }
  }
  if (local_f08 != '\0') {
    lVar13 = *plVar26;
    uVar15 = SDockTab::GetTabLabel(lVar16,local_ad0);
    FUN_141919cb0(lVar13,uVar15);
    if (local_ac8 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_ac8 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_ac8)(local_ac8);
        LOCK();
        piVar1 = (int *)((longlong)local_ac8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_ac8 + 8))(local_ac8,1);
        }
      }
    }
  }
LAB_1419155f7:
  *param_2 = (longlong)plVar20;
  param_2[1] = (longlong)plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar23 = plVar12 + 1;
    lVar13 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar23 = plStack_ea0;
  if (plStack_ea0 != (longlong *)0x0) {
    LOCK();
    plVar20 = plStack_ea0 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_ea0)(plStack_ea0);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_ea0 + 8))(plStack_ea0,1);
      }
    }
  }
  if (plStack_ed0 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_ed0 + 1;
    lVar13 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_ed0)(plStack_ed0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_ed0 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_ed0 + 8))(plStack_ed0,1);
      }
    }
  }
  if (plStack_e80 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_e80 + 1;
    lVar13 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_e80)(plStack_e80);
      LOCK();
      piVar1 = (int *)((longlong)plStack_e80 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_e80 + 8))(plStack_e80,1);
      }
    }
  }
  if (plStack_eb0 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar23 = plStack_eb0 + 1;
  lVar13 = *plVar23;
  *(int *)plVar23 = (int)*plVar23 + -1;
  UNLOCK();
  if ((int)lVar13 != 1) {
    return param_2;
  }
  (**(code **)*plStack_eb0)(plStack_eb0);
  LOCK();
  piVar1 = (int *)((longlong)plStack_eb0 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar11 != 1) {
    return param_2;
  }
  (**(code **)(*plStack_eb0 + 8))(plStack_eb0,1);
  return param_2;
}



// FUNCTION 141916ac0 FUN_141916ac0 body=316 status=ok
// SIG undefined FUN_141916ac0(void)

void FUN_141916ac0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = *param_2;
  iVar7 = 0;
  if (0 < *(int *)(lVar5 + 0x30)) {
    lVar6 = 0;
    do {
      local_38 = *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + lVar6);
      local_30 = *(longlong **)(*(longlong *)(lVar5 + 0x28) + 8 + lVar6);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_141915110(param_1,local_28,&local_38,param_4,0);
      FUN_1418d7eb0(*param_3,local_28,0xffffffff);
      plVar4 = local_20;
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
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
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
      lVar5 = *param_2;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar7 < *(int *)(lVar5 + 0x30));
  }
  return;
}



// FUNCTION 141916c00 FUN_141916c00 body=2992 status=ok
// SIG undefined FUN_141916c00(void)

void FUN_141916c00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  bool bVar20;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_258 [4];
  undefined2 local_250 [4];
  undefined2 local_248 [4];
  undefined2 local_240 [4];
  undefined2 local_238 [4];
  undefined2 local_230 [4];
  undefined2 local_228 [4];
  undefined2 local_220 [4];
  undefined2 local_218 [4];
  undefined2 local_210 [4];
  undefined2 local_208 [4];
  undefined2 local_200 [4];
  undefined2 local_1f8 [4];
  undefined2 local_1f0 [4];
  undefined2 local_1e8 [4];
  undefined2 local_1e0 [4];
  undefined2 local_1d8 [4];
  undefined2 local_1d0 [4];
  undefined2 local_1c8 [4];
  undefined2 local_1c0 [4];
  undefined2 local_1b8 [4];
  undefined2 local_1b0 [4];
  undefined2 local_1a8 [4];
  undefined2 local_1a0 [4];
  undefined2 local_198 [4];
  undefined2 local_190 [4];
  longlong *local_188;
  int local_180;
  longlong *local_178;
  uint *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158 [11];
  undefined2 *local_100;
  undefined8 local_f8;
  longlong local_f0 [3];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  
  local_f0[0] = 0;
  local_f0[1] = 0;
  FUN_1404ae740(&local_168,local_f0,0);
  plVar19 = local_168;
  FUN_1406d2fd0(local_168);
  local_158[0] = 0;
  local_158[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
  FGenericPlatformString::Memcpy(local_158[0],L"CustomBlocks",0x1a);
  plVar15 = plVar19 + 4;
  local_188 = plVar15;
  if ((((int)plVar19[4] - 2U & 0xfffffff5) != 0) || ((int)plVar19[4] == 10)) {
    local_res10[0] = 0x2c;
    (**(code **)(*(longlong *)plVar19[1] + 0x50))((longlong *)plVar19[1],local_res10,2);
  }
  plVar1 = plVar19 + 1;
  FUN_1404b7a80(plVar19[1]);
  puVar14 = (uint *)((longlong)plVar19 + 0x24);
  plVar8 = (longlong *)*plVar1;
  local_170 = puVar14;
  if (0 < (int)*(uint *)((longlong)plVar19 + 0x24)) {
    uVar13 = (ulonglong)*(uint *)((longlong)plVar19 + 0x24);
    do {
      local_res18[0] = 9;
      (**(code **)(*plVar8 + 0x50))(plVar8,local_res18,2);
      uVar13 = uVar13 - 1;
      plVar15 = local_188;
    } while (uVar13 != 0);
  }
  (**(code **)(*plVar19 + 0x18))(plVar19,local_158);
  local_res20[0] = 0x3a;
  (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_res20,2);
  local_258[0] = 0x20;
  (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_258,2);
  local_250[0] = 0x5b;
  (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_250);
  *puVar14 = *puVar14 + 1;
  plVar8 = plVar19 + 2;
  iVar11 = (int)plVar19[3];
  *(int *)(plVar19 + 3) = iVar11 + 1;
  local_178 = plVar8;
  if (*(int *)((longlong)plVar19 + 0x1c) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8,iVar11);
  }
  *(undefined4 *)(*plVar8 + (longlong)iVar11 * 4) = 5;
  *(int *)plVar15 = 4;
  if (local_158[0] != 0) {
    FMemory::Free();
  }
  local_180 = 0;
  do {
    while( true ) {
      if ((local_180 < 0) || ((int)param_1[1] <= local_180)) {
        iVar11 = (int)*plVar15;
        *puVar14 = *puVar14 - 1;
        if (((iVar11 - 3U & 0xfffffff9) == 0) && (iVar11 != 9)) {
          FUN_1404b7a80(*plVar1);
          plVar4 = (longlong *)*plVar1;
          if (0 < (int)*puVar14) {
            uVar13 = (ulonglong)*puVar14;
            do {
              local_1a0[0] = 9;
              (**(code **)(*plVar4 + 0x50))(plVar4,local_1a0,2);
              uVar13 = uVar13 - 1;
              plVar19 = local_168;
            } while (uVar13 != 0);
          }
        }
        else if (iVar11 != 4) {
          local_198[0] = 0x20;
          (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_198,2);
        }
        local_190[0] = 0x5d;
        (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_190,2);
        *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar8);
        *(int *)plVar15 = 5;
        FUN_1406d2cf0(plVar19);
        (**(code **)(*plVar19 + 8))(plVar19);
        uVar9 = FRemoteConfig::ReplaceIniCharWithSpecialChar(local_88,local_f0);
        puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar9,local_98,0);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar10;
        }
        puVar10 = (undefined8 *)FName::ToString(param_1 + 2,local_a8);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = (undefined2 *)*puVar10;
        }
        local_f8 = 0x14;
        local_100 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
        puVar6 = local_100;
        FGenericPlatformString::Memcpy(local_100,L"CustomMultiBoxes1_0",0x28);
        puVar18 = &DAT_143f3eda8;
        if ((int)local_f8 != 0) {
          puVar18 = puVar6;
        }
        FConfigCacheIni::SetString(DAT_1468b6148,puVar18,puVar16,puVar12,&DAT_1468e23b0);
        if (puVar6 != (undefined2 *)0x0) {
          FMemory::Free(puVar6);
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        plVar15 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_160 + 1;
          lVar7 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
        if (local_f0[0] != 0) {
          FMemory::Free();
        }
        return;
      }
      local_158[10] = *param_1;
      lVar7 = (longlong)local_180;
      if ((*(longlong *)(local_158[10] + lVar7 * 0x18) != 0) &&
         (lVar17 = *(longlong *)(local_158[10] + 8 + lVar7 * 0x18), lVar17 != 0)) break;
LAB_14191754c:
      local_180 = local_180 + 1;
      plVar8 = local_178;
    }
    piVar2 = (int *)(lVar17 + 8);
    LOCK();
    iVar11 = *piVar2;
    if (iVar11 == 0) {
      *piVar2 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    plVar19 = local_168;
    if (iVar11 < 1) goto LAB_14191754c;
    plVar15 = *(longlong **)(local_158[10] + 8 + lVar7 * 0x18);
    lVar17 = 0;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      iVar11 = (int)plVar15[1];
      bVar20 = iVar11 == 0;
      if (bVar20) {
        *(int *)(plVar15 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (!bVar20) {
        LOCK();
        bVar20 = iVar11 == (int)plVar15[1];
        if (bVar20) {
          *(int *)(plVar15 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar20) {
          lVar17 = 0;
          if (plVar15 != (longlong *)0x0) {
            lVar17 = *(longlong *)(local_158[10] + lVar7 * 0x18);
            LOCK();
            plVar19 = plVar15 + 1;
            lVar5 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar11 = (int)plVar15[1];
        bVar20 = iVar11 == 0;
        if (bVar20) {
          *(int *)(plVar15 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
    }
    plVar15 = local_188;
    iVar11 = (int)*local_188;
    if ((((iVar11 != 0) && (iVar11 != 2)) && (iVar11 != 4)) && (iVar11 != 0xc)) {
      local_248[0] = 0x2c;
      (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_248,2);
      iVar11 = (int)*plVar15;
    }
    if (iVar11 != 0) {
      FUN_1404b7a80(*plVar1);
      plVar19 = (longlong *)*plVar1;
      plVar15 = local_188;
      if (0 < (int)*puVar14) {
        uVar13 = (ulonglong)*puVar14;
        do {
          local_240[0] = 9;
          (**(code **)(*plVar19 + 0x50))(plVar19,local_240,2);
          uVar13 = uVar13 - 1;
          plVar15 = local_188;
        } while (uVar13 != 0);
      }
    }
    local_238[0] = 0x7b;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_238,2);
    plVar19 = local_178;
    *puVar14 = *puVar14 + 1;
    iVar11 = (int)local_178[1];
    *(int *)(local_178 + 1) = iVar11 + 1;
    if (*(int *)((longlong)local_178 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_178,iVar11);
    }
    local_158[3] = 0xc;
    *(undefined4 *)(*plVar19 + (longlong)iVar11 * 4) = 6;
    local_158[2] = 0;
    *(int *)plVar15 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 2,0);
    FGenericPlatformString::Memcpy(local_158[2],L"CommandName",0x18);
    local_d8 = *(undefined8 *)(lVar17 + 0x78);
    plVar8 = (longlong *)FName::ToString(&local_d8,local_78);
    if ((((int)*plVar15 - 2U & 0xfffffff5) != 0) || ((int)*plVar15 == 10)) {
      local_230[0] = 0x2c;
      (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_230,2);
    }
    FUN_1404b7a80(*plVar1);
    plVar15 = (longlong *)*plVar1;
    if (0 < (int)*local_170) {
      uVar13 = (ulonglong)*local_170;
      do {
        local_228[0] = 9;
        (**(code **)(*plVar15 + 0x50))(plVar15,local_228,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    plVar19 = local_168;
    puVar14 = local_170;
    (**(code **)(*local_168 + 0x18))(local_168,local_158 + 2);
    local_220[0] = 0x3a;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_220,2);
    local_218[0] = 0x20;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_218,2);
    (**(code **)(*plVar19 + 0x18))(plVar19,plVar8);
    *(int *)local_188 = 7;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    if (local_158[2] != 0) {
      FMemory::Free();
    }
    local_158[5] = 8;
    local_158[4] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 4,0);
    FGenericPlatformString::Memcpy(local_158[4],L"Context",0x10);
    local_d0 = *(undefined8 *)(lVar17 + 0x80);
    plVar8 = (longlong *)FName::ToString(&local_d0,local_68);
    plVar15 = local_188;
    if ((((int)*local_188 - 2U & 0xfffffff5) != 0) || ((int)*local_188 == 10)) {
      local_210[0] = 0x2c;
      (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_210,2);
    }
    FUN_1404b7a80(*plVar1);
    uVar3 = *puVar14;
    plVar4 = (longlong *)*plVar1;
    if (0 < (int)uVar3) {
      uVar13 = (ulonglong)uVar3;
      do {
        local_208[0] = 9;
        (**(code **)(*plVar4 + 0x50))(plVar4,local_208,2);
        uVar13 = uVar13 - 1;
        puVar14 = local_170;
        plVar19 = local_168;
      } while (uVar13 != 0);
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,local_158 + 4);
    local_200[0] = 0x3a;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_200,2);
    local_1f8[0] = 0x20;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1f8,2);
    (**(code **)(*plVar19 + 0x18))(plVar19,plVar8);
    *(int *)plVar15 = 7;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    if (local_158[4] != 0) {
      FMemory::Free();
    }
    local_158[7] = 6;
    local_158[6] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 6,0);
    FGenericPlatformString::Memcpy(local_158[6],L"Index",0xc);
    lVar17 = local_158[10];
    iVar11 = *(int *)(local_158[10] + 0x10 + lVar7 * 0x18);
    if ((((int)*plVar15 - 2U & 0xfffffff5) != 0) || ((int)*plVar15 == 10)) {
      local_1f0[0] = 0x2c;
      (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1f0,2);
    }
    FUN_1404b7a80(*plVar1);
    plVar8 = (longlong *)*plVar1;
    if (0 < (int)*puVar14) {
      uVar13 = (ulonglong)*puVar14;
      do {
        local_1e8[0] = 9;
        (**(code **)(*plVar8 + 0x50))(plVar8,local_1e8,2);
        uVar13 = uVar13 - 1;
        lVar17 = local_158[10];
      } while (uVar13 != 0);
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,local_158 + 6);
    local_1e0[0] = 0x3a;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1e0,2);
    local_1d8[0] = 0x20;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1d8,2);
    FString::PrintfImpl(&local_c8,&DAT_144050d74,(double)iVar11);
    if (local_c0 == 0) {
      puVar12 = &DAT_143f3eda8;
      iVar11 = 0;
    }
    else {
      iVar11 = local_c0 + -1;
      puVar12 = local_c8;
    }
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,puVar12,(longlong)iVar11 * 2);
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(int *)plVar15 = 8;
    if (local_158[6] != 0) {
      FMemory::Free();
    }
    local_158[8] = 0;
    local_158[9] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 8,0);
    FGenericPlatformString::Memcpy(local_158[8],L"TransactionType",0x20);
    iVar11 = *(int *)(lVar17 + 0x14 + lVar7 * 0x18);
    if ((((int)*plVar15 - 2U & 0xfffffff5) != 0) || ((int)*plVar15 == 10)) {
      local_1d0[0] = 0x2c;
      (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1d0,2);
    }
    FUN_1404b7a80(*plVar1);
    puVar14 = local_170;
    plVar8 = (longlong *)*plVar1;
    if (0 < (int)*local_170) {
      uVar13 = (ulonglong)*local_170;
      do {
        local_1c8[0] = 9;
        (**(code **)(*plVar8 + 0x50))(plVar8,local_1c8,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,local_158 + 8);
    local_1c0[0] = 0x3a;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1c0,2);
    local_1b8[0] = 0x20;
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,local_1b8,2);
    FString::PrintfImpl(&local_b8,&DAT_144050d74,(double)iVar11);
    if (local_b0 == 0) {
      iVar11 = 0;
      puVar12 = &DAT_143f3eda8;
    }
    else {
      iVar11 = local_b0 + -1;
      puVar12 = local_b8;
    }
    (**(code **)(*(longlong *)*plVar1 + 0x50))((longlong *)*plVar1,puVar12,(longlong)iVar11 * 2);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(int *)plVar15 = 8;
    if (local_158[8] != 0) {
      FMemory::Free();
    }
    FUN_1404b7a80(*plVar1);
    *puVar14 = *puVar14 - 1;
    plVar8 = (longlong *)*plVar1;
    if (0 < (int)*puVar14) {
      uVar13 = (ulonglong)*puVar14;
      do {
        local_1b0[0] = 9;
        (**(code **)(*plVar8 + 0x50))(plVar8,local_1b0,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      plVar8 = (longlong *)*plVar1;
    }
    local_1a8[0] = 0x7d;
    (**(code **)(*plVar8 + 0x50))(plVar8,local_1a8);
    plVar8 = local_178;
    *(int *)(local_178 + 1) = (int)local_178[1] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(local_178);
    local_180 = local_180 + 1;
    *(int *)plVar15 = 3;
  } while( true );
}



// FUNCTION 1419177b0 FUN_1419177b0 body=2012 status=ok
// SIG undefined FUN_1419177b0(void)

void FUN_1419177b0(longlong *param_1,longlong param_2,float param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  longlong *local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  undefined1 local_138 [4];
  float local_134;
  undefined1 local_130 [4];
  float local_12c;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  longlong *local_110;
  longlong *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  
  if (param_4 == '\x01') {
    if (((double)param_1[0x66] <= 9.999999747378752e-05 &&
         (double)param_1[0x66] != 9.999999747378752e-05) && (param_3 < 0.0)) {
      return;
    }
    if (((char)param_1[0x6d] != '\0') && (0.0 < param_3)) {
      return;
    }
  }
  dVar16 = (double)param_1[0x66];
  fVar14 = ABS(param_3);
  iVar11 = (int)dVar16;
  if ((dVar16 == 0.0) && ((char)param_1[0x6d] != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (param_4 != '\0') {
LAB_14191791f:
    if (bVar4) {
      return;
    }
    local_140 = (longlong *)param_1[0xb7];
    if (((local_140 != (longlong *)0x0) && (0 < (int)local_140[1])) &&
       (uVar2 = *(undefined4 *)(param_2 + 8), param_3 != 0.0)) {
      lVar9 = (longlong)iVar11 << 4;
      local_148 = lVar9;
      do {
        if (((int)local_140[1] <= iVar11) || (iVar11 < 0)) break;
        plVar3 = *(longlong **)(lVar9 + 8 + *local_140);
        local_168 = *(undefined8 *)(lVar9 + *local_140);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        plStack_160 = plVar3;
        FUN_14069bc50(param_1 + 0x85,&local_178,&local_168);
        plVar8 = plStack_170;
        plVar10 = local_178;
        if (local_178 == (longlong *)0x0) {
          local_128 = local_168;
          plStack_120 = plStack_160;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_118,&local_128);
          local_150 = (longlong *)puVar6[1];
          local_178 = (longlong *)*puVar6;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_150 + 1) = (int)local_150[1] + 1;
            UNLOCK();
          }
          local_158 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_150);
          plVar3 = local_150;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_150 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_150 + 8))(local_150,1);
              }
            }
          }
          plVar3 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_110 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_110)(local_110);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar10 = local_178;
          (**(code **)(*local_178 + 0x10))(local_178,iVar11);
          plVar8 = plStack_170;
          local_108 = local_178;
          plStack_100 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
            plVar10 = local_178;
          }
          local_f8 = local_168;
          plStack_f0 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
            UNLOCK();
            plVar10 = local_178;
          }
          FUN_14069d7a0(param_1 + 0x85,&local_f8,&local_108);
          puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10,local_e8);
          FUN_14185c5d0(*puVar6,uVar2);
          plVar3 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_e0 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            plVar8 = plStack_170;
            plVar10 = local_178;
            if ((int)lVar9 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar8 = plStack_170;
              plVar10 = local_178;
              if (iVar7 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
                plVar8 = plStack_170;
                plVar10 = local_178;
              }
            }
          }
        }
        if (param_3 <= 0.0) {
          puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10,local_c8);
          SWidget::GetDesiredSize(*puVar6,local_130);
          plVar3 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_c0 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            plVar8 = plStack_170;
            if ((int)lVar9 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar8 = plStack_170;
              if (iVar7 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
                plVar8 = plStack_170;
              }
            }
          }
          fVar13 = (float)dVar16 - (float)(int)dVar16;
          if (fVar13 == 0.0) {
            fVar13 = 1.0;
            dVar16 = dVar16 + -1.0;
          }
          fVar13 = local_12c * fVar13;
          if (fVar14 <= fVar13) {
            if (fVar14 == fVar13) {
              dVar16 = dVar16 + (double)-((float)dVar16 - (float)(int)dVar16);
            }
            else {
              dVar16 = (double)((fVar13 - fVar14) / local_12c + (float)(int)dVar16);
            }
          }
          else {
            if (iVar11 != 0) {
              iVar7 = -1;
              lVar9 = -0x10;
              dVar16 = dVar16 + (double)-((float)dVar16 - (float)(int)dVar16);
              goto LAB_141917d5a;
            }
            dVar16 = 0.0;
          }
LAB_141917e86:
          plVar3 = plStack_170;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar8 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
          plVar3 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_160 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
          break;
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10,local_d8);
        SWidget::GetDesiredSize(*puVar6,local_138);
        plVar3 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_d0 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          plVar8 = plStack_170;
          if ((int)lVar9 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar8 = plStack_170;
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
              plVar8 = plStack_170;
            }
          }
        }
        fVar13 = (1.0 - ((float)dVar16 - (float)(int)dVar16)) * local_134;
        if (fVar14 <= fVar13) {
          if (fVar14 == fVar13) {
            dVar16 = (double)((float)(int)dVar16 + 1.0);
          }
          else {
            dVar16 = (double)((1.0 - (fVar13 - fVar14) / local_134) + (float)(int)dVar16);
          }
          goto LAB_141917e86;
        }
        if (iVar11 == (int)local_140[1]) {
          dVar16 = (double)(int)local_140[1];
          goto LAB_141917e86;
        }
        lVar9 = 0x10;
        iVar7 = 1;
        dVar16 = (double)((float)(int)dVar16 + 1.0);
LAB_141917d5a:
        plVar3 = plStack_170;
        fVar14 = fVar14 - fVar13;
        iVar11 = iVar11 + iVar7;
        lVar9 = local_148 + lVar9;
        local_148 = lVar9;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar8 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plStack_170 + 8))(plStack_170,1);
            }
          }
        }
        plVar3 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_160 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plStack_160 + 8))(plStack_160,1);
            }
          }
        }
      } while (fVar14 != 0.0);
    }
    (**(code **)(*param_1 + 0x220))(param_1,(float)dVar16);
    return;
  }
  if ((dVar16 != 0.0) || (0.0 <= param_3)) {
    if (((char)param_1[0x6d] != '\0') && (0.0 < param_3)) goto LAB_1419178a2;
    if ((*(float *)((longlong)param_1 + 0x414) <= 0.0) || (0.0 <= param_3)) {
      if ((0.0 <= *(float *)((longlong)param_1 + 0x414)) || (param_3 <= 0.0)) goto LAB_14191791f;
      goto LAB_1419178a2;
    }
  }
  fVar14 = -fVar14;
LAB_1419178a2:
  fVar13 = *(float *)((longlong)param_1 + 0x414);
  fVar12 = 1.0;
  fVar15 = fVar14 / *(float *)(param_2 + 8) + fVar13;
  *(float *)((longlong)param_1 + 0x414) = fVar15;
  fVar14 = 1.0;
  if (fVar13 <= 0.0) {
    if (0.0 <= fVar13) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = -1.0;
    }
  }
  if (fVar15 <= 0.0) {
    if (0.0 <= fVar15) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = -1.0;
    }
  }
  if ((fVar14 != fVar12) && (fVar13 != 0.0)) {
    *(undefined4 *)((longlong)param_1 + 0x414) = 0;
    fVar15 = 0.0;
  }
  if (fVar13 - fVar15 != 0.0) {
    FUN_1419bb590();
  }
  return;
}



// FUNCTION 141917f90 FUN_141917f90 body=287 status=ok
// SIG undefined FUN_141917f90(void)

void FUN_141917f90(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  if (((double)param_1[0x66] == 0.0) && ((char)param_1[0x6d] != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_4 != '\0') ||
     ((((((double)param_1[0x66] != 0.0 || (0.0 <= param_3)) &&
        (((char)param_1[0x6d] == '\0' || (param_3 <= 0.0)))) &&
       ((*(float *)((longlong)param_1 + 0x414) <= 0.0 || (0.0 <= param_3)))) &&
      ((0.0 <= *(float *)((longlong)param_1 + 0x414) || (param_3 <= 0.0)))))) {
    if (!bVar1) {
      fVar3 = (float)STableViewBase::GetItemHeight();
      iVar2 = (**(code **)(*param_1 + 0x230))(param_1);
      (**(code **)(*param_1 + 0x220))
                (param_1,(float)((double)(((float)iVar2 * param_3) / fVar3) + (double)param_1[0x66])
                );
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x230))();
    fVar3 = (float)FOverscroll::ScrollBy((longlong)param_1 + 0x414,param_2,param_3 / (float)iVar2);
    if (fVar3 != 0.0) {
      (**(code **)(*param_1 + 0x208))(param_1);
    }
  }
  return;
}



// FUNCTION 1419180b0 ScrollBy body=98 status=ok
// SIG undefined ScrollBy(void)

float FOverscroll::ScrollBy(float *param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar3 = 1.0;
  fVar2 = param_3 / *(float *)(param_2 + 8) + fVar1;
  *param_1 = fVar2;
  if (fVar1 <= 0.0) {
    if (0.0 <= fVar1) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = -1.0;
    }
  }
  else {
    fVar4 = 1.0;
  }
  if (fVar2 <= 0.0) {
    if (0.0 <= fVar2) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = -1.0;
    }
  }
  if ((fVar4 != fVar3) && (fVar1 != 0.0)) {
    *param_1 = 0.0;
    fVar2 = 0.0;
  }
  return fVar1 - fVar2;
}



// FUNCTION 141918120 FUN_141918120 body=734 status=ok
// SIG undefined FUN_141918120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141918120(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar2 = param_1 + 0xb8;
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (plVar8 = (longlong *)param_1[0xb7], plVar8 != (longlong *)0x0)) {
    plVar11 = (longlong *)param_1[0xb9];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xb7];
    }
    plVar4 = (longlong *)*plVar8;
    for (plVar10 = plVar4; plVar10 != plVar4 + (longlong)(int)plVar8[1] * 2; plVar10 = plVar10 + 2)
    {
      if (*plVar10 == lVar3) {
        iVar7 = (int)((longlong)plVar10 - (longlong)plVar4 >> 4);
        goto LAB_1419181c4;
      }
    }
    iVar7 = -1;
LAB_1419181c4:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (iVar7 != -1) {
      fVar12 = (float)STableViewBase::GetItemHeight(param_1);
      fVar13 = (1.0 / fVar12) * *(float *)(param_2 + 4);
      fVar12 = (float)(**(code **)(*param_1 + 0x228))(param_1);
      if (((fVar12 == 0.0) && (cVar5 = FUN_1419b3db0(param_1), cVar5 != '\0')) &&
         ((float)(double)param_1[0x6b] == 0.0)) {
        return 1;
      }
      ARacingGameState::GetMeanAbsError(param_1);
      iVar6 = (**(code **)(*param_1 + 0x230))(param_1);
      iVar9 = (iVar7 / iVar6) * iVar6;
      fVar12 = (float)iVar6;
      if (((double)iVar9 < (double)param_1[0x66]) ||
         ((double)(fVar12 * fVar13) + (double)param_1[0x66] < (double)((iVar7 / iVar6 + 1) * iVar6))
         ) {
        fVar14 = (float)iVar9 - (fVar13 - 1.0) * fVar12 * 0.5;
        iVar7 = (**(code **)(*param_1 + 0x250))
                          (param_1,(longlong)iVar7 % (longlong)iVar6 & 0xffffffff);
        fVar13 = (float)iVar7 - fVar12 * fVar13;
        fVar12 = 0.0;
        if ((0.0 <= fVar14) && (fVar12 = fVar13, fVar14 <= fVar13)) {
          fVar12 = fVar14;
        }
        STableViewBase::SetScrollOffset(param_1,fVar12);
      }
      (**(code **)(*param_1 + 0x208))(param_1);
      plVar8 = (longlong *)param_1[0xb9];
      plVar11 = param_1 + 0xbb;
      lVar3 = *plVar2;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_98 = lVar3;
      plStack_90 = plVar8;
      if (&local_98 != plVar11) {
        local_98 = *plVar11;
        plStack_90 = (longlong *)param_1[0xbc];
        *plVar11 = lVar3;
        param_1[0xbc] = (longlong)plVar8;
        local_88 = lVar3;
        plStack_80 = plVar8;
      }
      plVar8 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_90 + 1;
        lVar3 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
    }
    FUN_1406a2190(plVar2);
  }
  return 0;
}



// FUNCTION 141918400 FUN_141918400 body=353 status=ok
// SIG undefined FUN_141918400(void)

void FUN_141918400(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  if ((*param_2 == 0) || (cVar5 = FUN_141943900(), cVar5 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  plVar2 = *(longlong **)(param_1 + 0x148);
  plVar7 = (longlong *)0x0;
  plVar8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar8 = plVar7, !bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x140);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if ((bVar3) && (plVar2 = (longlong *)*param_2, plVar7 != plVar2)) {
    local_38 = 0;
    if (plVar2 != (longlong *)0x0) {
      FUN_14195c710(plVar2);
      local_38 = *param_2;
    }
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_28 = plVar7;
    local_20 = plVar8;
    FUN_1418dd850(param_1 + 0x150,&local_28,&local_38);
    *(longlong *)(param_1 + 0x140) = *param_2;
    plVar2 = (longlong *)param_2[1];
    plVar7 = *(longlong **)(param_1 + 0x148);
    if (plVar2 != plVar7) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x148);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(longlong **)(param_1 + 0x148) = plVar2;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  return;
}



// FUNCTION 141918570 SetEnabled body=261 status=ok
// SIG undefined SetEnabled(void)

void SWidget::SetEnabled(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0xa8) == 0) || (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((*(int *)(param_2 + 0x10) == 0) || (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x99) != param_2[1]) goto LAB_14191863a;
      bVar6 = *(char *)(param_1 + 0x98) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)(param_2 + 0x10) != 0) &&
         (plVar3 = *(longlong **)(param_2 + 8), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0xa8) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0xa0), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_14191863a:
  *(char *)(param_1 + 0x98) = *param_2;
  *(char *)(param_1 + 0x99) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa0,param_2 + 8);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 141918680 SetIsPassword body=26 status=ok
// SIG undefined SetIsPassword(void)

void FPlainTextLayoutMarshaller::SetIsPassword(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x10) = *param_2;
  *(undefined1 *)(param_1 + 0x11) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,param_2 + 8);
  return;
}



// FUNCTION 1419186a0 FUN_1419186a0 body=226 status=ok
// SIG undefined FUN_1419186a0(void)

void FUN_1419186a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x308) != &local_18) {
    *(undefined8 *)(param_1 + 0x308) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x310,&local_10);
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1419187a0 FUN_1419187a0 body=192 status=ok
// SIG undefined FUN_1419187a0(void)

void FUN_1419187a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_38 = *param_2;
  plVar1 = *(longlong **)(param_1 + 0x390);
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x208))(plVar1,&local_38);
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_140692760(*(undefined8 *)(param_1 + 0x360),&local_28);
  local_18 = *param_4;
  local_10 = param_4[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140692760(*(undefined8 *)(param_1 + 0x368),&local_18);
  FUN_140801a00(*(undefined8 *)(param_1 + 0x370),param_5);
  return;
}



// FUNCTION 141918860 FUN_141918860 body=148 status=ok
// SIG undefined FUN_141918860(void)

undefined8 * FUN_141918860(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141918900 FUN_141918900 body=181 status=ok
// SIG undefined FUN_141918900(void)

void FUN_141918900(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x2f8) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x300);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x300);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x300) = plVar3;
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1419189c0 FUN_1419189c0 body=364 status=ok
// SIG undefined FUN_1419189c0(void)

void FUN_1419189c0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  param_1[0x5e] = lVar4;
  plVar5 = (longlong *)param_1[0x5f];
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[0x5f];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    param_1[0x5f] = (longlong)plVar3;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x220))(param_1,local_18);
  local_28 = param_1[0x70];
  local_20 = param_1[0x71];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1417f9c30(param_1[0x6f],&local_28);
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 141918b30 FUN_141918b30 body=979 status=ok
// SIG undefined FUN_141918b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141918b30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  code *local_a8;
  longlong *plStack_a0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x340) != '\0') {
    lVar3 = *param_2;
    local_a8 = FUN_14190d120;
    uStack_5c = (undefined4)((ulonglong)plStack_a0 >> 0x20);
    plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
    local_68 = 0x4190d120;
    uStack_64 = 1;
    uStack_60 = 0;
    uVar5 = FUN_1418c8b70(&local_c8,param_1,&local_68);
    FUN_14185b2c0(lVar3,uVar5);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_141918bec;
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
LAB_141918bec:
  local_a8 = DAT_1469eb218;
  plStack_a0 = DAT_1469eb220;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  if (DAT_1469eb220 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
    UNLOCK();
  }
  local_e0 = &local_88;
  local_e8 = 0;
  (**(code **)(*DAT_1469f4590 + 0x100))(DAT_1469f4590,&local_98,param_2,&local_a8);
  plVar7 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_a0 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
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
  FUN_140801a00(*(undefined8 *)(param_1 + 0x338),&local_98);
  plVar7 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  lVar3 = *param_2;
  puVar6 = (undefined8 *)(lVar3 + 0x5a8);
  local_d8 = local_88;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  plVar8 = plStack_80;
  if (&local_d8 != puVar6) {
    local_d8 = *puVar6;
    plVar8 = *(longlong **)(lVar3 + 0x5b0);
    local_48 = local_88;
    plStack_40 = plStack_80;
    *puVar6 = local_88;
    *(longlong **)(lVar3 + 0x5b0) = plStack_80;
  }
  plStack_d0 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar7 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar7 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_80 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  *(longlong *)(param_1 + 0x328) = *param_2;
  plVar7 = (longlong *)param_2[1];
  plVar8 = *(longlong **)(param_1 + 0x330);
  if (plVar7 != plVar8) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x330);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(param_1 + 0x330) = plVar7;
  }
  lVar3 = *param_2;
  local_98 = FUN_14190d090;
  uStack_90 = 0;
  local_58 = 0x4190d090;
  uStack_54 = 1;
  uStack_50 = 0;
  uStack_4c = uStack_8c;
  plVar8 = (longlong *)(lVar3 + 0x4c8);
  plVar7 = (longlong *)FUN_14044bb20(&local_b8,param_1,&local_58);
  if (((int)plVar7[1] != 0) && (*plVar7 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    if (((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x20))(plVar4,local_78);
    }
    iVar2 = *(int *)(lVar3 + 0x4d0);
    *(int *)(lVar3 + 0x4d0) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x4d4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
    }
    plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *plVar8);
    *plVar8 = 0;
    *plVar8 = *plVar7;
    *plVar7 = 0;
    *(int *)(plVar8 + 1) = (int)plVar7[1];
    *(undefined4 *)(plVar7 + 1) = 0;
  }
  if (local_b0 != 0) {
    if (local_b8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_b8 + 0x28))(local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
    local_b0 = 0;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}



// FUNCTION 141918f20 FUN_141918f20 body=2467 status=ok
// SIG undefined FUN_141918f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141918f20(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  wchar_t *_Dest;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 *local_270;
  char local_268;
  longlong local_260;
  longlong *plStack_258;
  undefined1 local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 local_238;
  ulonglong local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  longlong *plStack_1f0;
  undefined4 local_1e8;
  int iStack_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 *local_1a8;
  longlong *plStack_1a0;
  undefined8 *local_198;
  longlong *plStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 *local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_108;
  undefined4 local_100;
  undefined1 local_fc [4];
  longlong local_f8 [4];
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_9c [4];
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_248 = param_2;
  local_1c0 = param_3;
  lVar9 = FSlateTextLayout::GetDefaultTextStyle(param_3);
  iVar17 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1c8 = lVar9;
  FTextRange::CalculateLineRangesFromString(param_2,&local_208);
  local_228 = 0;
  local_220 = 0;
  if (0 < (int)local_200) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&local_228);
  }
  local_218 = 0;
  local_210 = 0;
  lVar18 = *(longlong *)(lVar9 + 0x1a8);
  local_230 = 0;
  local_260 = 0;
  plStack_258 = (longlong *)0x0;
  if ((lVar18 == 0) && (*(longlong *)(lVar9 + 0x1a0) != 0)) {
    lVar18 = *(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x18);
  }
  if (((int)lVar18 != 0) || ((int)((ulonglong)lVar18 >> 0x20) != 0)) {
    local_188 = *(undefined8 *)(lVar9 + 0x88);
    uStack_180 = *(undefined8 *)(lVar9 + 0x90);
    local_128 = *(undefined1 *)(lVar9 + 0x68);
    local_120 = *(undefined8 *)(lVar9 + 0x70);
    local_138 = *(undefined8 *)(lVar9 + 0x58);
    uStack_130 = *(undefined8 *)(lVar9 + 0x60);
    local_118 = *(longlong *)(lVar9 + 0x78);
    if (local_118 != 0) {
      LOCK();
      *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
      UNLOCK();
    }
    local_278 = *(undefined8 *)(lVar9 + 0x80);
    local_270 = &local_188;
    plVar10 = (longlong *)FUN_141938170(local_178,lVar9 + 0x158,lVar9 + 8,&local_138);
    local_1d0 = (longlong *)plVar10[1];
    local_260 = *plVar10;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
    }
    local_1d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_258,&local_1d0);
    plVar10 = local_1d0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1d0 + 1;
      lVar18 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar14 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    param_2 = local_248;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_170 + 1;
      lVar18 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar14 = (int *)((longlong)local_170 + 0xc);
        iVar8 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        param_2 = local_248;
        if (iVar8 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
          param_2 = local_248;
        }
      }
    }
  }
  local_250 = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_268 = '\0';
  }
  else {
    if (((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x20) != 0) {
        local_268 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
        *(char *)(param_1 + 0x10) = local_268;
        goto LAB_141919163;
      }
      uVar6 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined1 *)(param_1 + 0x10) = uVar6;
    }
    local_268 = *(char *)(param_1 + 0x10);
  }
LAB_141919163:
  local_230 = local_230 & 0xffffffff00000000;
  if (0 < (int)local_200) {
    local_1e0 = 0;
    do {
      puVar13 = (undefined8 *)0x0;
      puVar1 = (uint *)(local_208 + local_1e0 * 8);
      puVar11 = (undefined8 *)operator_new(0x10);
      if (puVar11 != (undefined8 *)0x0) {
        iVar17 = *(int *)(param_2 + 1);
        uVar7 = puVar1[1];
        uVar21 = iVar17 - 1;
        if (iVar17 == 0) {
          uVar21 = 0xffffffff;
        }
        uVar19 = 0;
        if (iVar17 == 0) {
          uVar21 = uVar19;
        }
        if (*puVar1 < uVar21) {
          uVar21 = *puVar1;
        }
        uVar15 = iVar17 - 1;
        if (iVar17 == 0) {
          uVar15 = uVar19;
        }
        uVar16 = uVar21;
        if ((uVar21 <= uVar7) && (uVar16 = uVar15, uVar7 < uVar15)) {
          uVar16 = uVar7;
        }
        if (iVar17 == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*local_248;
        }
        *puVar11 = 0;
        iVar17 = uVar16 - uVar21;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        uVar7 = iVar17 + 1;
        if (iVar17 == 0) {
          uVar7 = uVar19;
        }
        *(uint *)(puVar11 + 1) = uVar7;
        if (*(int *)((longlong)puVar11 + 0xc) < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar11,0);
          uVar7 = *(uint *)(puVar11 + 1);
        }
        if (0 < (int)uVar7) {
          _Dest = (wchar_t *)*puVar11;
          wcsncpy(_Dest,puVar20 + (int)uVar21,(longlong)iVar17);
          _Dest[iVar17] = L'\0';
        }
        lVar9 = local_1c8;
        puVar13 = puVar11;
        iVar17 = (int)local_230;
      }
      plVar10 = (longlong *)0x0;
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 != (longlong *)0x0) {
        *(undefined4 *)(plVar12 + 1) = 1;
        *plVar12 = (longlong)&PTR_DestroyObject_14413b698;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        plVar12[2] = (longlong)puVar13;
        plVar10 = plVar12;
      }
      local_1f8 = puVar13;
      plStack_1f0 = plVar10;
      SharedPointerInternals::EnableSharedFromThis(&local_1f8,puVar13,puVar13);
      local_240 = (undefined8 *)0x0;
      local_238 = local_238 & 0xffffffff;
      if (local_268 == '\0') {
        local_198 = local_1f8;
        plStack_190 = plStack_1f0;
        if (plStack_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
          UNLOCK();
        }
        local_a8 = 0;
        local_a0 = 0;
        _guard_xfg_dispatch_icall_nop(local_9c,0,0x54);
        local_98[0] = 0;
        local_98[1] = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        puVar13 = (undefined8 *)FUN_141937ec0(local_158,&local_a8,&local_198,lVar9);
        plVar10 = (longlong *)puVar13[1];
        uVar2 = *puVar13;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_238 = CONCAT44(local_238._4_4_,1);
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_240,0);
        *local_240 = uVar2;
        local_240[1] = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar10 + 1;
          lVar18 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar14 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if ((iVar8 == 1) && (plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar10 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_150 + 1;
          lVar18 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar14 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_98,0);
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_190;
        if (local_a8 != 0) {
          FMemory::Free();
          plVar10 = plStack_190;
        }
      }
      else {
        local_1a8 = local_1f8;
        plStack_1a0 = plStack_1f0;
        if (plStack_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
          UNLOCK();
        }
        local_108 = 0;
        local_100 = 0;
        _guard_xfg_dispatch_icall_nop(local_fc,0,0x54);
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        puVar13 = (undefined8 *)FUN_141937a10(local_168,&local_108,&local_1a8,lVar9);
        plVar10 = (longlong *)puVar13[1];
        uVar2 = *puVar13;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_238 = CONCAT44(local_238._4_4_,1);
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_240,0);
        *local_240 = uVar2;
        local_240[1] = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar10 + 1;
          lVar18 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar14 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if ((iVar8 == 1) && (plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar10 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_160 + 1;
          lVar18 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar14 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_f8,0);
        if (local_d8 != 0) {
          FMemory::Free();
        }
        if (local_f8[0] != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_1a0;
        if (local_108 != 0) {
          FMemory::Free();
          plVar10 = plStack_1a0;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar10 + 1;
        lVar18 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar14 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      uVar4 = local_210;
      if (local_260 != 0) {
        if (plStack_258 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_258 + 1) = (int)plStack_258[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plStack_258 + 1) = (int)plStack_258[1] + 1;
          UNLOCK();
        }
        iStack_1e4 = puVar1[1] - *puVar1;
        local_1e8 = 0;
        if (plStack_258 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_258 + 1) = (int)plStack_258[1] + 1;
          UNLOCK();
        }
        lVar18 = (longlong)(int)local_210;
        iVar8 = (int)local_210 + 1;
        local_210 = CONCAT44(local_210._4_4_,iVar8);
        if (local_210._4_4_ < iVar8) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_218,uVar4 & 0xffffffff);
        }
        plVar10 = plStack_258;
        piVar14 = (int *)(lVar18 * 0x20 + local_218);
        *(ulonglong *)(piVar14 + 1) = CONCAT44(iStack_1e4,local_1e8);
        *piVar14 = iVar17;
        piVar14[3] = 1;
        *(longlong *)(piVar14 + 4) = local_260;
        *(longlong **)(piVar14 + 6) = plStack_258;
        if (plStack_258 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_258 + 1) = (int)plStack_258[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plStack_258 + 1;
          lVar18 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plStack_258)(plStack_258);
            LOCK();
            piVar14 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_258 + 8))(plStack_258,1);
            }
          }
          plVar3 = plStack_258;
          LOCK();
          plVar12 = plVar10 + 1;
          lVar18 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plStack_258)(plStack_258);
            LOCK();
            piVar14 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_258 + 8))(plStack_258,1);
            }
          }
          plVar12 = plStack_258;
          LOCK();
          plVar10 = plVar10 + 1;
          lVar18 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plStack_258)(plStack_258);
            LOCK();
            piVar14 = (int *)((longlong)plVar12 + 0xc);
            iVar8 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_258 + 8))(plStack_258,1);
            }
          }
        }
      }
      uVar4 = local_220;
      lVar18 = (longlong)(int)local_220;
      iVar8 = (int)local_220 + 1;
      local_220 = CONCAT44(local_220._4_4_,iVar8);
      if (local_220._4_4_ < iVar8) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_228,uVar4 & 0xffffffff);
      }
      local_1b8 = local_240;
      local_1b0 = (undefined4)local_238;
      local_148 = local_1f8;
      plStack_140 = plStack_1f0;
      local_1ac = local_238._4_4_;
      local_240 = (undefined8 *)0x0;
      local_238 = 0;
      if (plStack_1f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
        UNLOCK();
      }
      FUN_1418d0570(lVar18 * 0x20 + local_228,&local_148,&local_1b8);
      plVar10 = plStack_1f0;
      if (plStack_1f0 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_1f0 + 1;
        lVar18 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plStack_1f0)(plStack_1f0);
          LOCK();
          piVar14 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      iVar17 = iVar17 + 1;
      local_1e0 = local_1e0 + 1;
      local_230 = CONCAT44(local_230._4_4_,iVar17);
      param_2 = local_248;
      param_3 = local_1c0;
    } while (iVar17 < (int)local_200);
  }
  FUN_1419275c0(param_3,&local_228);
  FUN_141958d40(param_3,&local_218);
  plVar10 = plStack_258;
  if (plStack_258 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_258 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_258)(plStack_258);
      LOCK();
      piVar14 = (int *)((longlong)plVar10 + 0xc);
      iVar17 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plStack_258 + 8))(plStack_258,1);
      }
    }
  }
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(&local_218);
  TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
  ::
  ~TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
            (&local_228);
  if (local_208 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419198d0 FUN_1419198d0 body=987 status=ok
// SIG undefined FUN_1419198d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419198d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 **local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 *local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar6 = FSlateTextLayout::GetDefaultTextStyle(param_3);
  uVar12 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = uVar6;
  (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],&local_108,param_2,&local_d8);
  local_118 = 0;
  local_110 = 0;
  if (0 < (int)local_100) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&local_118,local_100 & 0xffffffff);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar14 = uVar12;
  if (0 < (int)local_100) {
    do {
      lVar10 = local_108;
      puVar7 = (undefined8 *)operator_new(0x10);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
      }
      plStack_f0 = (longlong *)operator_new(0x18);
      if (plStack_f0 != (longlong *)0x0) {
        *(undefined4 *)(plStack_f0 + 1) = 1;
        *plStack_f0 = (longlong)&PTR_DestroyObject_14413b698;
        *(undefined4 *)((longlong)plStack_f0 + 0xc) = 1;
        plStack_f0[2] = (longlong)puVar7;
      }
      local_f8 = puVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_f8,puVar7,puVar7);
      local_128 = 0;
      local_120 = 0;
      lVar8 = *(longlong *)(lVar10 + 8 + uVar12);
      lVar10 = (longlong)*(int *)(lVar10 + 0x10 + uVar12) * 0x70 + lVar8;
      uVar5 = local_110;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x70) {
        local_130 = &local_98;
        local_138 = &local_e8;
        local_140 = &local_128;
        local_150 = &local_f8;
        local_158 = uVar6;
        local_148 = param_3;
        local_110 = uVar5;
        (**(code **)(*param_1 + 0x38))(param_1,uVar14,lVar8,&local_d8);
        uVar5 = local_110;
      }
      local_110._0_4_ = (int)uVar5;
      lVar10 = (longlong)(int)local_110;
      local_110._0_4_ = (int)local_110 + 1;
      local_110._4_4_ = (int)(uVar5 >> 0x20);
      if (local_110._4_4_ < (int)local_110) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_118,uVar5 & 0xffffffff);
      }
      local_c0 = local_128;
      local_b8 = (int)local_120;
      local_a8 = local_f8;
      plStack_a0 = plStack_f0;
      local_b4 = local_120._4_4_;
      local_128 = 0;
      local_120 = 0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
        UNLOCK();
      }
      FUN_1418d0570(lVar10 * 0x20 + local_118,&local_a8,&local_c0);
      if ((int)local_120 != 0) {
        plVar11 = (longlong *)(local_128 + 8);
        iVar9 = (int)local_120;
        do {
          plVar4 = (longlong *)*plVar11;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
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
          plVar11 = plVar11 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      plVar11 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_f0 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x18;
      uVar6 = local_c8;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)local_100);
  }
  FUN_1419275c0(param_3,&local_118);
  FUN_141958d40(param_3,&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(&local_e8);
  TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
  ::
  ~TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
            (&local_118);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if ((int)local_100 != 0) {
    lVar10 = local_108 + 8;
    iVar9 = (int)local_100;
    do {
      TArray<FTextRunParseResults,FDefaultAllocator>::
      ~TArray<FTextRunParseResults,FDefaultAllocator>(lVar10);
      lVar10 = lVar10 + 0x18;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141919cb0 FUN_141919cb0 body=243 status=ok
// SIG undefined FUN_141919cb0(void)

void FUN_141919cb0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FText::FText(local_38);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FText::operator=(param_1 + 0x310,local_38);
    *(undefined1 *)(param_1 + 0x328) = local_20;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x330,&local_18);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar3 = *(longlong **)(param_1 + 0x498);
    puVar5 = (undefined8 *)FText::ToString(param_2);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar5;
    }
    (**(code **)(*plVar3 + 0xd0))(plVar3,puVar6);
  }
  return;
}



// FUNCTION 141919db0 FUN_141919db0 body=159 status=ok
// SIG undefined FUN_141919db0(void)

undefined8 *
FUN_141919db0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x38) = 2;
  *(undefined8 *)(param_1 + 0x3c) = param_3;
  *(undefined1 *)(param_1 + 0x4c) = param_4;
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141919e50 FUN_141919e50 body=337 status=ok
// SIG undefined FUN_141919e50(void)

void FUN_141919e50(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_28;
  longlong *local_20;
  
  plVar10 = (longlong *)0x0;
  plVar6 = plVar10;
  plVar8 = plVar10;
  if (0 < (int)param_1[1]) {
    do {
      lVar2 = *param_1;
      plVar3 = *(longlong **)(lVar2 + 8 + (longlong)plVar6);
      plVar5 = plVar3;
      plVar9 = plVar10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar10, !bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)plVar3[1];
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar5 = plVar3;
            plVar9 = (longlong *)0x0;
            if (plVar3 != (longlong *)0x0) {
              plVar9 = *(longlong **)(lVar2 + (longlong)plVar6);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      FUN_1418ff040(plVar9,&local_28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      if (local_28 != 0) {
        if (param_2 == '\0') {
          SWindow::HideWindow();
        }
        else {
          FUN_14185c3e0();
        }
      }
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      uVar7 = (int)plVar8 + 1;
      plVar6 = plVar6 + 2;
      plVar8 = (longlong *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 141919fb0 ShouldApplyOverscroll body=52 status=ok
// SIG undefined ShouldApplyOverscroll(void)

undefined1
FOverscroll::ShouldApplyOverscroll(float *param_1,char param_2,char param_3,float param_4)

{
  if (((((param_2 == '\0') || (0.0 <= param_4)) && ((param_3 == '\0' || (param_4 <= 0.0)))) &&
      ((*param_1 <= 0.0 || (0.0 <= param_4)))) && ((0.0 <= *param_1 || (param_4 <= 0.0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 141919ff0 FUN_141919ff0 body=399 status=ok
// SIG undefined FUN_141919ff0(void)

undefined8 FUN_141919ff0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  
  plVar7 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x340) == 0) || (*(longlong *)(param_1 + 0x348) == 0)) {
LAB_14191a0de:
    plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar6 = plVar7;
LAB_14191a0e3:
    plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x348) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_14191a0de;
    plVar6 = *(longlong **)(param_1 + 0x348);
    plVar5 = plVar7;
    plVar9 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar5 = (longlong *)0x0, plVar9 = plVar7, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar6[1];
        if (bVar10) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar9 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x340);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    cVar3 = FUN_14192b710(plVar5);
    plVar6 = (longlong *)0x1;
    if (cVar3 == '\0') goto LAB_14191a0e3;
    plVar6 = *(longlong **)(param_1 + 0x300);
    plVar5 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar5 = plVar7, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar6[1];
        if (bVar10) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar5 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_1 + 0x2f8);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar6 = (longlong *)0x3;
    cVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7);
    if (cVar3 == '\0') {
      uVar8 = 1;
      goto LAB_14191a0eb;
    }
  }
  uVar8 = 0;
LAB_14191a0eb:
  if ((((ulonglong)plVar6 & 2) != 0) &&
     (plVar6 = (longlong *)(ulonglong)((uint)plVar6 & 0xfffffffd), plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar5 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if ((((ulonglong)plVar6 & 1) != 0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return uVar8;
}



// FUNCTION 14191a180 FUN_14191a180 body=703 status=ok
// SIG undefined FUN_14191a180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14191a180(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 **local_198;
  undefined8 *local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if ((char)param_1[0x76] == '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x220))(param_1,local_168);
    *(undefined1 *)(*plVar4 + 0x358) = 1;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_160 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x76) = 1;
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_158);
    local_188 = *puVar5;
    local_180 = (longlong *)puVar5[1];
    if (local_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_180 + 1) = (int)local_180[1] + 1;
      UNLOCK();
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_150 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    local_190 = &local_188;
    local_1a0 = (longlong *)FUN_1418cc5d0();
    plVar4 = local_1a0 + 2;
    local_1a8 = plVar4;
    FUN_14044f790(&local_1a8,plVar4);
    local_198 = &local_190;
    local_1b8 = 0x218;
    SWidget::SetDebugInfo
              (plVar4,"SDockingCross",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
               ,0x27e);
    uVar6 = STSDRichInlineImage::FArguments::FArguments(local_138);
    puVar5 = (undefined8 *)FUN_1418d41e0(&local_1a8,local_148,uVar6);
    plVar4 = (longlong *)puVar5[1];
    local_178 = *puVar5;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_170 = plVar4;
    lVar7 = FUN_141801800(param_1[0x74],0xffffffff);
    *(undefined2 *)(lVar7 + 0x24) = 0;
    FUN_140801a00(lVar7,&local_178);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_140 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    plVar4 = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1a0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    plVar4 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_180 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_180)(local_180);
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
    FUN_140456c70(local_138);
  }
  return;
}



// FUNCTION 14191a440 SizeRule body=139 status=ok
// SIG undefined SizeRule(void)

longlong SSplitter::FSlot::SizeRule(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 1);
  plVar1 = (longlong *)(param_1 + 0x28);
  if ((longlong *)(param_2 + 2) != plVar1) {
    if ((param_2[4] != 0) && (plVar2 = *(longlong **)(param_2 + 2), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((*(int *)(param_1 + 0x30) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return param_1;
}



// FUNCTION 14191a4d0 FUN_14191a4d0 body=3334 status=ok
// SIG undefined FUN_14191a4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14191a4d0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_a68 [32];
  longlong local_a48;
  longlong local_a40;
  undefined4 local_a38;
  longlong local_a30;
  longlong local_a28;
  longlong local_a20;
  undefined1 local_a18;
  undefined1 local_a10;
  longlong local_a08;
  longlong *local_9f8;
  longlong *local_9f0;
  longlong *local_9e8;
  longlong *plStack_9e0;
  longlong local_9d8;
  longlong *local_9d0;
  undefined8 local_9c8;
  longlong *plStack_9c0;
  undefined8 local_9b8;
  longlong *local_9b0;
  undefined4 local_9a8;
  undefined8 *local_9a0;
  longlong *local_998;
  longlong local_990;
  undefined8 local_988;
  longlong *local_980;
  longlong *local_978;
  longlong *plStack_970;
  longlong *local_968;
  longlong *local_960;
  undefined1 local_958 [8];
  longlong *local_950;
  undefined1 local_940;
  undefined8 local_938;
  undefined4 local_930;
  undefined1 local_928 [8];
  longlong *local_920;
  undefined1 local_910;
  undefined8 local_908;
  undefined4 local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  longlong *local_8e0;
  undefined1 local_8d8 [8];
  longlong *local_8d0;
  longlong *local_8c8;
  longlong *local_8c0;
  longlong *local_8b0;
  longlong *local_8a8;
  longlong *local_898;
  longlong *local_890;
  undefined1 local_880 [8];
  longlong *local_878;
  undefined1 local_868 [8];
  longlong *local_860;
  undefined1 local_850 [8];
  longlong *local_848;
  undefined1 local_838 [8];
  longlong *local_830;
  longlong *local_820;
  longlong *plStack_818;
  undefined1 local_808 [496];
  undefined1 local_618 [576];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a68;
  plVar11 = (longlong *)0x0;
  local_9a8 = 0;
  local_9f0 = (longlong *)0x0;
  local_9a0 = param_3;
  local_998 = param_2;
  local_990 = param_1;
  FUN_1418f93b0(param_1,&local_9d8,*param_3);
  if (local_9d8 != 0) {
    local_8e8 = *param_4;
    local_8f8 = *param_3;
    uStack_8f0 = param_3[1];
    local_8e0 = (longlong *)param_4[1];
    if (local_8e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_8e0 + 1) = (int)local_8e0[1] + 1;
      UNLOCK();
    }
    if (*(int *)(local_9d8 + 0xa0) != 0) {
      plVar11 = *(longlong **)(local_9d8 + 0x98);
    }
    (**(code **)(*plVar11 + 0x38))(plVar11,&local_978,&local_8f8);
    plStack_9c0 = plStack_970;
    if (plStack_970 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_970 + 1) = (int)plStack_970[1] + 1;
      UNLOCK();
    }
    local_9f8 = local_978;
    local_9c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_9f0,&plStack_9c0);
    plVar11 = plStack_9c0;
    if (plStack_9c0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_9c0 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_9c0)(plStack_9c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_9c0 + 8))(plStack_9c0,1);
        }
      }
    }
    if (plStack_970 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_970 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_970)(plStack_970);
        LOCK();
        piVar1 = (int *)((longlong)plStack_970 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_970 + 8))(plStack_970,1);
        }
      }
    }
    plVar11 = local_8e0;
    if (local_8e0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_8e0 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_8e0)(local_8e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    FUN_141958bd0(local_9f8,param_3);
    lVar10 = local_9d8;
    cVar7 = FText::IsEmpty(local_9d8 + 0x38);
    bVar15 = cVar7 == '\0';
    if (bVar15) {
      uVar9 = FText::FText(local_880,lVar10 + 0x38);
    }
    else {
      uVar9 = FText::FromName(local_868,lVar10 + 0x90);
    }
    FUN_141954c00(local_9f8,uVar9);
    if ((bVar15) && (local_878 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_878 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_878)(local_878);
        LOCK();
        piVar1 = (int *)((longlong)local_878 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_878 + 8))(local_878,1);
        }
      }
    }
    if ((!bVar15) && (local_860 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_860 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_860)(local_860);
        LOCK();
        piVar1 = (int *)((longlong)local_860 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_860 + 8))(local_860,1);
        }
      }
    }
    uVar9 = FSlateIcon::GetIcon(local_9d8 + 0x18);
    plVar11 = local_9f8;
    FUN_141954b20(local_9f8,uVar9);
    *(longlong **)(local_9d8 + 0xd8) = plVar11;
    plVar11 = *(longlong **)(local_9d8 + 0xe0);
    if (local_9f0 != plVar11) {
      if (local_9f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_9f0 + 0xc) = *(int *)((longlong)local_9f0 + 0xc) + 1;
        UNLOCK();
        plVar11 = *(longlong **)(local_9d8 + 0xe0);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      *(longlong **)(local_9d8 + 0xe0) = local_9f0;
    }
    if (local_9f8 != (longlong *)0x0) goto LAB_14191b022;
  }
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_838,L"unrecognized tab",L"TabManagement",L"Unrecognized");
  FText::FText(local_928,uVar9);
  local_910 = 1;
  local_908 = 0;
  local_900 = 0;
  uVar9 = FTabId::ToText(param_3,local_850);
  FText::FText(local_958,uVar9);
  local_940 = 1;
  local_938 = 0;
  local_930 = 0;
  lVar10 = STextBlock::FArguments::FArguments(local_3d8);
  FText::operator=(lVar10 + 0x108,local_928);
  *(undefined1 *)(lVar10 + 0x120) = local_910;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_908);
  plVar11 = (longlong *)operator_new(0x660);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_144043520;
    if (plVar11 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar12 = plVar11 + 2;
  local_8c8 = plVar12;
  local_8c0 = plVar11;
  FUN_14044f790(&local_8c8,plVar12);
  local_a48 = 0x650;
  SWidget::SetDebugInfo
            (plVar12,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
             ,0x59c);
  local_a38 = *(undefined4 *)(lVar10 + 0x90);
  local_a08 = lVar10 + 0xf8;
  local_a20 = lVar10 + 0xe8;
  local_a10 = *(undefined1 *)(lVar10 + 0xf1);
  local_a28 = lVar10 + 200;
  local_a30 = lVar10 + 0x98;
  local_a18 = *(undefined1 *)(lVar10 + 0xf0);
  local_a40 = lVar10 + 0x78;
  local_a48 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_1419b0120(plVar12,lVar10);
  if (((char)plVar11[5] < '\0') || (cVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_968 = plVar12;
  local_960 = plVar11;
  lVar10 = FUN_14068f180(local_808);
  *(undefined4 *)(lVar10 + 0x108) = 2;
  *(undefined4 *)(lVar10 + 0x10c) = 2;
  plVar12 = (longlong *)operator_new(800);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144044b78;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar13 = plVar12 + 2;
  local_8b0 = plVar13;
  local_8a8 = plVar12;
  FUN_14044f790(&local_8b0,plVar13);
  local_a48 = 0x310;
  SWidget::SetDebugInfo
            (plVar13,&DAT_144d65b24,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
             ,0x598);
  lVar10 = FUN_140692660(lVar10,&local_968);
  local_a38 = *(undefined4 *)(lVar10 + 0x90);
  local_a08 = lVar10 + 0xf8;
  local_a20 = lVar10 + 0xe8;
  local_a10 = *(undefined1 *)(lVar10 + 0xf1);
  local_a28 = lVar10 + 200;
  local_a30 = lVar10 + 0x98;
  local_a18 = *(undefined1 *)(lVar10 + 0xf0);
  local_a40 = lVar10 + 0x78;
  local_a48 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141972160(plVar13,lVar10);
  if (((char)plVar12[5] < '\0') || (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  lVar10 = FUN_1418ce3e0(local_618);
  FText::operator=(lVar10 + 0x178,local_958);
  *(undefined1 *)(lVar10 + 400) = local_940;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x198,&local_938);
  *(undefined1 *)(lVar10 + 0x1e8) = 0;
  pplVar4 = (longlong **)(lVar10 + 0x108);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_9e8 = plVar13;
  plStack_9e0 = plVar12;
  if (&local_9e8 != pplVar4) {
    local_9e8 = *pplVar4;
    plStack_9e0 = *(longlong **)(lVar10 + 0x110);
    *pplVar4 = plVar13;
    *(longlong **)(lVar10 + 0x110) = plVar12;
    local_820 = plVar13;
    plStack_818 = plVar12;
  }
  plVar13 = plStack_9e0;
  if (plStack_9e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_9e0 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_9e0)(plStack_9e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_9e0 + 8))(plStack_9e0,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
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
  plVar13 = (longlong *)operator_new(0x600);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144d6a730;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_141922ff0();
    }
  }
  plVar2 = plVar13 + 2;
  local_898 = plVar2;
  local_890 = plVar13;
  FUN_14044f790(&local_898,plVar2);
  local_a48 = 0x5f0;
  SWidget::SetDebugInfo
            (plVar2,"SDockTab",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
             ,0x594);
  local_a38 = *(undefined4 *)(lVar10 + 0x90);
  local_a08 = lVar10 + 0xf8;
  local_a20 = lVar10 + 0xe8;
  local_a10 = *(undefined1 *)(lVar10 + 0xf1);
  local_a28 = lVar10 + 200;
  local_a30 = lVar10 + 0x98;
  local_a18 = *(undefined1 *)(lVar10 + 0xf0);
  local_a40 = lVar10 + 0x78;
  local_a48 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar2,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_14192f0b0(plVar2,lVar10);
  if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar8;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_9b8 = 0;
  local_9f8 = plVar2;
  local_9b0 = plVar13;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_9f0,&local_9b0);
  plVar2 = local_9b0;
  if (local_9b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_9b0 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_9b0)(local_9b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_9b0 + 8))(local_9b0,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_1418d1de0(local_618);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
    LOCK();
    plVar13 = plVar12 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  FUN_140690ea0(local_808);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar12 = plVar11 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_938);
  if (local_950 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_950 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_950)(local_950);
      LOCK();
      piVar1 = (int *)((longlong)local_950 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_950 + 8))(local_950,1);
      }
    }
  }
  if (local_848 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_848 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_848)(local_848);
      LOCK();
      piVar1 = (int *)((longlong)local_848 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_848 + 8))(local_848,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_908);
  if (local_920 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_920 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_920)(local_920);
      LOCK();
      piVar1 = (int *)((longlong)local_920 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_920 + 8))(local_920,1);
      }
    }
  }
  if (local_830 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_830 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_830)(local_830);
      LOCK();
      piVar1 = (int *)((longlong)local_830 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_830 + 8))(local_830,1);
      }
    }
  }
  FUN_141958bd0(local_9f8,local_9a0);
  param_2 = local_998;
LAB_14191b022:
  puVar14 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_990 + 8,local_8d8);
  plVar11 = (longlong *)puVar14[1];
  uVar9 = *puVar14;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (local_8d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_8d0 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_8d0)(local_8d0);
      LOCK();
      piVar1 = (int *)((longlong)local_8d0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_8d0 + 8))(local_8d0,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_988 = uVar9;
  local_980 = plVar11;
  FUN_14195a120(local_9f8,&local_988);
  plVar12 = local_980;
  if (local_980 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_980 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_980)(local_980);
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
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = local_9d0;
  *param_2 = (longlong)local_9f8;
  param_2[1] = (longlong)local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9f0 + 1) = (int)local_9f0[1] + 1;
    UNLOCK();
  }
  if (local_9d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_9d0 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_9d0)(local_9d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_9d0 + 8))(local_9d0,1);
      }
    }
  }
  plVar11 = local_9f0;
  if (local_9f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_9f0 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_9f0)(local_9f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_9f0 + 8))(local_9f0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14191b1e0 FUN_14191b1e0 body=271 status=ok
// SIG undefined FUN_14191b1e0(void)

undefined8 * FUN_14191b1e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  iVar3 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar3 + 1;
  if (*(int *)(param_1 + 0x34) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x28));
  *puVar6 = *param_3;
  lVar4 = param_3[1];
  puVar6[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  *param_2 = *puVar6;
  lVar4 = puVar6[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 14191b2f0 FUN_14191b2f0 body=2016 status=ok
// SIG undefined FUN_14191b2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14191b2f0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_338 [32];
  longlong *local_318;
  char local_308;
  undefined4 local_304;
  longlong local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined8 local_268;
  longlong *plStack_260;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint local_d4;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined1 local_90 [56];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar2 = (longlong *)param_3[1];
  plVar11 = (longlong *)0x0;
  lVar3 = *param_3;
  local_2e0 = param_5;
  local_304 = 0;
  lVar8 = lVar3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    lVar8 = *param_3;
  }
  local_2f0 = param_4;
  local_2e8 = param_3;
  plVar5 = (longlong *)FUN_141942440(lVar8,local_298);
  lVar8 = **(longlong **)(*plVar5 + 200);
  plVar5 = local_2e0;
  if (*(char *)(lVar8 + 0x118) == '\0') {
LAB_14191b3d7:
    local_308 = '\0';
  }
  else {
    plVar9 = *(longlong **)(lVar8 + 0x100);
    plVar5 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar9 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar5 = plVar11, !bVar12) {
        LOCK();
        bVar12 = iVar4 == (int)plVar9[1];
        if (bVar12) {
          *(int *)(plVar9 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar5 = plVar9;
          if (((plVar9 != (longlong *)0x0) && (*(longlong *)(lVar8 + 0xf8) != 0)) &&
             (*(longlong *)(lVar8 + 0xf8) == lVar3)) {
            plVar11 = (longlong *)0x1;
            goto LAB_14191b3d7;
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(plVar9 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    local_308 = '\x01';
    plVar11 = (longlong *)0x1;
  }
  if ((plVar11 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_290 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)local_290 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_288)
  ;
  plVar2 = (longlong *)puVar6[1];
  uVar7 = *puVar6;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_280 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar1 = (int *)((longlong)local_280 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_280 + 8))(local_280,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_2d8 = uVar7;
  local_2d0 = plVar2;
  uVar7 = FUN_14182e4b0(local_2e0,local_90,&local_2d8);
  uVar13 = SDockingTabWell::ComputeDraggedTabOffset(param_1,uVar7,local_2e0,&local_2f0);
  plVar11 = local_2d0;
  *(undefined4 *)(param_1 + 0x250) = uVar13;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2d0 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar2 = local_2e8;
  local_2f8 = (longlong *)local_2e8[1];
  local_300 = *local_2e8;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
    UNLOCK();
  }
  plVar11 = (longlong *)0x0;
  if ((longlong *)(param_1 + 0x240) != &local_300) {
    *(longlong *)(param_1 + 0x240) = local_300;
    local_300 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x248,&local_2f8);
  }
  plVar5 = local_2f8;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2f8 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2f8 + 8))(local_2f8,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x254) = local_2f0;
  TSlotlessChildren<SDockTab>::Remove(param_1 + 0x208,plVar2);
  if (local_308 == '\0') {
    puVar6 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_258);
    plVar11 = (longlong *)puVar6[1];
    uVar7 = *puVar6;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_250 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)local_250 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    plVar5 = plVar11 + 1;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar5 = (int)*plVar5 + 1;
      UNLOCK();
    }
    local_d4 = local_d4 & 0xffffff00;
    local_188[0] = 1;
    local_180 = 0;
    local_178 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0x20702;
    local_2a8 = uVar7;
    local_2a0 = plVar11;
    uVar7 = FUN_140693ff0(local_188,&local_2a8);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_188);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar2 = (longlong *)plVar2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar2 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
    plVar5 = *(longlong **)(param_1 + 0x238);
    lVar3 = *plVar2;
    plVar9 = plVar5;
    plVar10 = plVar11;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar9 = plVar11, !bVar12) {
        LOCK();
        bVar12 = iVar4 == (int)plVar5[1];
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar9 = plVar5;
          plVar10 = (longlong *)0x0;
          if (plVar5 != (longlong *)0x0) {
            plVar10 = *(longlong **)(param_1 + 0x230);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    uVar7 = SDockTab::GetLayoutIdentifier(lVar3);
    SDockingTabStack::RemovePersistentTab(plVar10,uVar7);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar5 = *(longlong **)(param_1 + 0x238);
    plVar9 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar9 = plVar11, !bVar12) {
        LOCK();
        bVar12 = iVar4 == (int)plVar5[1];
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar11 = (longlong *)0x0;
          plVar9 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            plVar11 = *(longlong **)(param_1 + 0x230);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    local_c8 = plVar11[99];
    lStack_c0 = plVar11[100];
    local_b8 = plVar11[0x65];
    lStack_b0 = plVar11[0x66];
    local_a8 = plVar11[0x67];
    lStack_a0 = plVar11[0x68];
    local_98 = plVar11[0x69];
    puVar6 = (undefined8 *)FUN_1418fdd60(param_1,local_278);
    local_2c8 = *puVar6;
    local_2c0 = puVar6[1];
    if (local_2c0 != 0) {
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
    }
    local_318 = &local_c8;
    FUN_1418aa4d0(&local_2b8,plVar2,local_2f0,&local_2c8);
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_270 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar1 = (int *)((longlong)local_270 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    local_268 = local_2b8;
    plStack_260 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_2b0 + 1) = (int)plStack_2b0[1] + 1;
      UNLOCK();
    }
    local_194 = local_194 & 0xffffff00;
    local_248[0] = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_240 = 0;
    local_238 = 0;
    local_228 = 0;
    local_220 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_198 = 0x20702;
    uVar7 = FReply::BeginDragDrop(local_248,&local_268);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_248);
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_2b0 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_2b0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
        }
      }
    }
    plVar2 = (longlong *)plVar2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar2 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14191bad0 FUN_14191bad0 body=1725 status=ok
// SIG undefined FUN_14191bad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14191bad0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 *local_4d8;
  undefined1 local_4d0;
  undefined8 *local_4c8;
  undefined1 *local_4c0;
  undefined1 local_4b8;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined4 local_4a4;
  longlong local_4a0;
  undefined1 local_498 [8];
  undefined1 local_490 [8];
  longlong *local_488;
  undefined1 local_480 [8];
  longlong *local_478;
  undefined1 local_470 [8];
  longlong *local_468;
  undefined1 local_460 [8];
  undefined8 local_458 [36];
  undefined8 *local_338;
  int local_330;
  undefined4 uStack_32c;
  undefined1 local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 *local_310;
  int local_308;
  undefined4 uStack_304;
  undefined1 local_300 [8];
  undefined1 local_2f8 [288];
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [8];
  undefined1 local_198 [320];
  longlong *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar16 = lVar5 == DAT_1469e9880;
  local_4a0 = param_1;
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
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (bVar16) {
    puVar9 = *(undefined1 **)(param_4 + 0x10);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)FWidgetPath::FWidgetPath(local_1a0);
      iVar15 = 0;
      bVar16 = true;
    }
    else {
      local_460[0] = *puVar9;
      local_338 = (undefined8 *)0x0;
      iVar15 = *(int *)(puVar9 + 0x130);
      puVar13 = *(undefined8 **)(puVar9 + 0x128);
      local_330 = iVar15;
      bVar16 = false;
      if (iVar15 == 0) {
        uStack_32c = 0;
      }
      else {
        FUN_141857eb0(local_458,iVar15,0);
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)(puVar9 + 8);
        }
        puVar14 = local_458;
        if (local_338 != (undefined8 *)0x0) {
          puVar14 = local_338;
        }
        do {
          uVar10 = puVar13[1];
          *puVar14 = *puVar13;
          puVar14[1] = uVar10;
          uVar10 = puVar13[3];
          puVar14[2] = puVar13[2];
          puVar14[3] = uVar10;
          uVar6 = *(undefined4 *)((longlong)puVar13 + 0x24);
          uVar7 = *(undefined4 *)(puVar13 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar13 + 0x2c);
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar13 + 4);
          *(undefined4 *)((longlong)puVar14 + 0x24) = uVar6;
          *(undefined4 *)(puVar14 + 5) = uVar7;
          *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar8;
          puVar14[6] = puVar13[6];
          puVar14[7] = puVar13[7];
          lVar5 = puVar13[8];
          puVar14[8] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          puVar13 = puVar13 + 9;
          iVar15 = iVar15 + -1;
          puVar14 = puVar14 + 9;
        } while (iVar15 != 0);
      }
      local_328 = puVar9[0x138];
      local_320 = *(undefined8 *)(puVar9 + 0x140);
      local_318 = *(longlong **)(puVar9 + 0x148);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_318 + 1) = (int)local_318[1] + 1;
        UNLOCK();
      }
      local_310 = (undefined8 *)0x0;
      iVar3 = *(int *)(puVar9 + 0x158);
      puVar13 = *(undefined8 **)(puVar9 + 0x150);
      local_308 = iVar3;
      if (iVar3 == 0) {
        uStack_304 = 0;
        puVar9 = local_460;
        iVar15 = 1;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_310,iVar3,0);
        puVar14 = local_310;
        do {
          iVar15 = iVar3;
          *puVar14 = *puVar13;
          lVar5 = puVar13[1];
          puVar14[1] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          puVar14 = puVar14 + 2;
          puVar13 = puVar13 + 2;
          iVar3 = iVar15 + -1;
        } while (iVar15 + -1 != 0);
        puVar9 = local_460;
        bVar16 = false;
      }
    }
    local_300[0] = *puVar9;
    local_1d8 = 0;
    if (*(longlong *)(puVar9 + 0x128) == 0) {
      _guard_xfg_dispatch_icall_nop(local_2f8,puVar9 + 8,0x120);
    }
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    local_1d8 = *(undefined8 *)(puVar9 + 0x128);
    *(undefined8 *)(puVar9 + 0x128) = 0;
    local_1d0 = *(undefined4 *)(puVar9 + 0x130);
    local_1cc = *(undefined4 *)(puVar9 + 0x134);
    *(undefined8 *)(puVar9 + 0x130) = 0;
    local_1c8 = puVar9[0x138];
    local_1c0 = *(undefined8 *)(puVar9 + 0x140);
    local_1b8 = *(longlong **)(puVar9 + 0x148);
    *(undefined8 *)(puVar9 + 0x148) = 0;
    *(undefined8 *)(puVar9 + 0x140) = 0;
    local_1b0 = 0;
    local_1b0 = *(undefined8 *)(puVar9 + 0x150);
    *(undefined8 *)(puVar9 + 0x150) = 0;
    local_1a8 = *(undefined4 *)(puVar9 + 0x158);
    local_1a4 = *(undefined4 *)(puVar9 + 0x15c);
    *(undefined8 *)(puVar9 + 0x158) = 0;
    if (bVar16) {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_50);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_58 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      FUN_140456b10(local_198);
    }
    if (iVar15 != 0) {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_310);
      plVar4 = local_318;
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_318 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      FUN_140456b10(local_458);
    }
    plVar4 = DAT_1469f4590;
    local_4a4 = 5;
    local_4a7 = 0;
    uVar10 = (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,local_498);
    lVar5 = local_4a0;
    uVar11 = FUN_141902e30(local_4a0,local_470);
    uVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar5 + 8,local_480);
    local_4b8 = 1;
    local_4c0 = &local_4a8;
    local_4c8 = &DAT_1468b5d88;
    local_4d8 = &local_4a4;
    local_4d0 = 1;
    local_4e8 = uVar11;
    local_4e0 = uVar10;
    FUN_1418b8580(plVar4,local_490,uVar12,local_300);
    if (local_488 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_488 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_488)(local_488);
        LOCK();
        piVar2 = (int *)((longlong)local_488 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_488 + 8))(local_488,1);
        }
      }
    }
    if (local_478 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_478 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_478)(local_478);
        LOCK();
        piVar2 = (int *)((longlong)local_478 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_478 + 8))(local_478,1);
        }
      }
    }
    if (local_468 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_468 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_468)(local_468);
        LOCK();
        piVar2 = (int *)((longlong)local_468 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_468 + 8))(local_468,1);
        }
      }
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1b0);
    plVar4 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    FUN_140456b10(local_2f8);
  }
  else {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 14191c1f0 Text body=78 status=ok
// SIG undefined Text(void)

longlong STextBlock::FArguments::Text(longlong param_1,longlong param_2)

{
  FText::operator=(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x128,param_2 + 0x20);
  return param_1;
}



// FUNCTION 14191c240 TextStyle body=98 status=ok
// SIG undefined TextStyle(void)

longlong STextBlock::FArguments::TextStyle
                   (longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  puVar1 = (undefined8 *)ISlateStyle::Join(local_res8,*param_3,param_4);
  lVar2 = (**(code **)(lVar2 + 0x80))(param_2,DAT_1469eb158,*puVar1);
  if (lVar2 == 0) {
    lVar2 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x138) = lVar2;
  return param_1;
}



// FUNCTION 14191c2b0 FUN_14191c2b0 body=870 status=ok
// SIG undefined FUN_14191c2b0(void)

void FUN_14191c2b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  
  lVar20 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar17 = (longlong)*(int *)(param_1 + 0x18) * 0x20 + lVar20;
  if (lVar20 != lVar17) {
    puVar13 = (undefined4 *)(lVar20 + 0x10);
    do {
      puVar9 = (undefined4 *)FSlateApplication::GetWorkArea(DAT_1469f4590,local_48);
      lVar20 = lVar20 + 0x20;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar13 = *puVar9;
      puVar13[1] = uVar5;
      puVar13[2] = uVar6;
      puVar13[3] = uVar7;
      puVar13 = puVar13 + 8;
    } while (lVar20 != lVar17);
  }
  do {
    LOCK();
    uVar10 = *(ulonglong *)(param_1 + 0x28);
    if (uVar10 == 0) {
      *(ulonglong *)(param_1 + 0x28) = 0;
      uVar10 = 0;
    }
    UNLOCK();
    uVar16 = (uint)uVar10;
    while (uVar8 = uVar16 & 0x3ffffff, (uVar10 & 0x3ffffff) != 0) {
      uVar21 = (uVar10 & 0xfffffffffc000000) + 0x4000000;
      if (uVar21 < (uVar10 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      lVar20 = 0;
      if (uVar8 != 0) {
        lVar20 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar16 & 0x3fff) * 0x18;
      }
      LOCK();
      bVar23 = uVar10 == *(ulonglong *)(param_1 + 0x28);
      if (bVar23) {
        *(ulonglong *)(param_1 + 0x28) = *(uint *)(lVar20 + 0x10) | uVar21;
      }
      UNLOCK();
      if (bVar23) {
        *(undefined4 *)(lVar20 + 0x10) = 0;
        break;
      }
      LOCK();
      uVar10 = *(ulonglong *)(param_1 + 0x28);
      if (uVar10 == 0) {
        *(ulonglong *)(param_1 + 0x28) = 0;
        uVar10 = 0;
      }
      UNLOCK();
      uVar16 = (uint)uVar10;
    }
    if (uVar8 == 0) {
LAB_14191c469:
      iVar15 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar15) {
        lVar17 = (longlong)iVar15 << 5;
        lVar22 = (longlong)*(int *)(param_1 + 0x18) << 5;
        lVar20 = lVar17;
        do {
          lVar11 = *plVar1;
          iVar19 = *(int *)(lVar11 + 8 + lVar20) + -1;
          if (-1 < iVar19) {
            lVar18 = (longlong)iVar19 << 4;
            do {
              lVar3 = *(longlong *)(lVar18 + *(longlong *)(lVar11 + lVar20));
              if (*(char *)(lVar3 + 0x378) != '\0') {
                plVar4 = *(longlong **)(lVar3 + 0x308);
                plVar14 = plVar4;
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  iVar12 = (int)plVar4[1];
                  bVar23 = iVar12 == 0;
                  if (bVar23) {
                    *(int *)(plVar4 + 1) = 0;
                    iVar12 = 0;
                  }
                  UNLOCK();
                  while (plVar14 = (longlong *)0x0, !bVar23) {
                    LOCK();
                    bVar23 = iVar12 == (int)plVar4[1];
                    if (bVar23) {
                      *(int *)(plVar4 + 1) = iVar12 + 1;
                    }
                    UNLOCK();
                    if (bVar23) {
                      plVar14 = plVar4;
                      if ((plVar4 != (longlong *)0x0) && (*(longlong *)(lVar3 + 0x300) != 0)) {
                        FUN_141856430();
                      }
                      break;
                    }
                    LOCK();
                    iVar12 = (int)plVar4[1];
                    bVar23 = iVar12 == 0;
                    if (bVar23) {
                      *(int *)(plVar4 + 1) = 0;
                      iVar12 = 0;
                    }
                    UNLOCK();
                  }
                }
                TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::
                RemoveAtImpl((longlong *)(lVar11 + lVar20),iVar19,1,1);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = plVar14 + 1;
                  lVar3 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    iVar12 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar12 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
              }
              lVar18 = lVar18 + -0x10;
              iVar19 = iVar19 + -1;
            } while (-1 < iVar19);
            lVar11 = *plVar1;
          }
          if (*(int *)(lVar20 + 8 + lVar11) == 0) {
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>();
            iVar19 = *(int *)(param_1 + 0x18);
            iVar12 = (iVar19 - iVar15) + -1;
            if (iVar12 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + lVar17),(void *)(*plVar1 + lVar22),(longlong)iVar12 << 5
                        );
              iVar19 = *(int *)(param_1 + 0x18);
            }
            *(int *)(param_1 + 0x18) = iVar19 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
          }
          else {
            FUN_1418dc7d0(lVar17 + lVar11);
          }
          lVar22 = lVar22 + -0x20;
          lVar17 = lVar17 + -0x20;
          lVar20 = lVar20 + -0x20;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
      return;
    }
    lVar20 = *(longlong *)((&DAT_1468a81f8)[uVar8 >> 0xe] + 8 + (ulonglong)(uVar16 & 0x3fff) * 0x18)
    ;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
    if (lVar20 == 0) goto LAB_14191c469;
    FUN_1418d8b50(param_1,local_58);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_50 + 1;
      lVar17 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_1408bc4f0(lVar20);
    FMemory::operator_delete(lVar20,0xf8);
  } while( true );
}



// FUNCTION 14191c620 FUN_14191c620 body=187 status=ok
// SIG undefined FUN_14191c620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14191c620(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  undefined1 local_150 [288];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_158[0] = DAT_1464b9ee8;
  iVar1 = *(int *)((longlong)param_1 + 0x264);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_2,local_158);
  *(int *)(param_1 + 0x4c) = (int)local_28 + -1;
  if (*(int *)((longlong)param_1 + 0x264) != iVar1) {
    cVar2 = FUN_14192b710(param_1[0x47]);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x47] + 0x210))((longlong *)param_1[0x47],0,1,0);
    }
  }
  FUN_140456b10(local_150);
  return;
}



// FUNCTION 14191c6f0 FUN_14191c6f0 body=211 status=ok
// SIG undefined FUN_14191c6f0(void)

void FUN_14191c6f0(longlong param_1,float *param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  if (*(int *)(param_1 + 0x488) == 0) {
    (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,local_res8);
    local_48 = param_2[0xb];
    local_38 = param_2[1] * param_2[9];
    local_40 = *param_2 * param_2[7];
    local_34 = param_2[1] * param_2[10];
    local_3c = *param_2 * param_2[8];
    local_44 = param_2[0xc];
    cVar1 = FSlateRotatedRect::IsUnderLocation(&local_48,local_res8);
    *(uint *)(param_1 + 0x488) = (cVar1 != '\0') + 1;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 14191c7d0 FUN_14191c7d0 body=360 status=ok
// SIG undefined FUN_14191c7d0(void)

undefined8 * FUN_14191c7d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  cVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x1a8))(param_1 + 8);
  plVar6 = (longlong *)0x0;
  if (cVar4 == '\0') {
    *param_2 = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    *(undefined1 *)(param_2 + 2) = 2;
    param_2[3] = 0;
    param_2[4] = 0;
    return param_2;
  }
  plVar2 = *(longlong **)(param_1 + 0x300);
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 0x2f8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar6 = *(longlong **)(plVar6[0x60] + 0x58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469f46e8) && (_Init_thread_header(&DAT_1469f46e8), DAT_1469f46e8 == -1))
  {
    FName::FName(&DAT_1469f46e0,"SelectionColor",1);
    _Init_thread_footer(&DAT_1469f46e8);
  }
  (**(code **)(*plVar6 + 0x30))(plVar6,param_2,DAT_1469f46e0,0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14191c940 ToName body=101 status=ok
// SIG undefined ToName(void)

undefined8 * EMultiBlockLocation::ToName(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    ISlateStyle::Join(param_1,param_2,".Start");
    return param_1;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      *param_1 = param_2;
      return param_1;
    }
    ISlateStyle::Join(param_1,param_2,&DAT_144d66aa0);
    return param_1;
  }
  ISlateStyle::Join(param_1,param_2,".Middle");
  return param_1;
}



// FUNCTION 14191c9b0 ToText body=1066 status=ok
// SIG undefined ToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FTabId::ToText(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8 [2];
  longlong local_1d0 [4];
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  undefined4 *local_190;
  undefined8 local_188;
  longlong *plStack_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1d8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar6 = FText::FromName(local_178,param_1);
  local_98[0] = 4;
  FText::FText(local_88,uVar6);
  local_70 = '\x01';
  local_1d0[0] = 0;
  local_1d0[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0[0],L"TabType",0x10);
  local_1a8 = local_1d0;
  local_1a0 = local_98;
  FUN_1407484b0(&local_e8,local_1d8,&local_1a8,0);
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  if (local_70 != '\0') {
    local_70 = '\0';
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  local_188 = 0;
  plStack_180 = (longlong *)0x0;
  uVar6 = FText::AsNumber(local_160,*(undefined4 *)(param_1 + 8),0,&local_188);
  local_68[0] = 4;
  FText::FText(local_58,uVar6);
  local_40 = '\x01';
  local_1d0[2] = 0;
  local_1d0[3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 2,0);
  FGenericPlatformString::Memcpy(local_1d0[2],L"InstanceIdNumber",0x22);
  local_198 = local_1d0 + 2;
  local_190 = local_68;
  FUN_1407484b0(&local_e8,local_1b0,&local_198,0);
  if (local_1d0[2] != 0) {
    FMemory::Free();
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)local_158 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  plVar1 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_180 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  bVar7 = *(int *)(param_1 + 8) != -1;
  if (bVar7) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_130,L"{TabType} : {InstanceIdNumber}",L"TabManager",L"TabIdFormat");
    uVar6 = FTextFormat::FTextFormat(local_100,uVar6);
    uVar6 = FText::Format(local_148,uVar6,&local_e8);
  }
  else {
    uVar6 = FText::FromName(local_118,param_1);
  }
  FText::FText(param_2,uVar6);
  if (bVar7) {
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  if (bVar7) {
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
  }
  if ((!bVar7) && (local_110 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return param_2;
}



// FUNCTION 14191cdf0 FUN_14191cdf0 body=253 status=ok
// SIG undefined FUN_14191cdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14191cdf0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  uStack_40 = (longlong *)param_2[1];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar1) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 0x38);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x34) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x3c) = uStack_40._4_4_;
    local_48 = uVar6;
    uStack_40 = plVar5;
  }
  plVar5 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14191cef0 FUN_14191cef0 body=253 status=ok
// SIG undefined FUN_14191cef0(void)

undefined1 * FUN_14191cef0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  FUN_141852100(param_1 + 0x3c0,uVar5,0,0);
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
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14191cff0 FUN_14191cff0 body=2278 status=ok
// SIG undefined FUN_14191cff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14191cff0(longlong param_1,longlong *param_2,longlong *param_3,float *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  char local_1a8;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_188;
  longlong local_180;
  longlong *plStack_178;
  undefined8 local_170;
  undefined8 *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *plStack_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  longlong *plStack_98;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar13 = *param_3;
  plVar4 = *(longlong **)(lVar13 + 0x48);
  lVar5 = *(longlong *)(lVar13 + 0x40);
  plVar14 = plVar4 + 1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar14 = (int)*plVar14 + 1;
    UNLOCK();
    lVar13 = *param_3;
  }
  plVar16 = (longlong *)0x0;
  lVar13 = *(longlong *)(lVar13 + 0x50);
  local_170 = *param_5;
  fVar21 = (float)((ulonglong)local_170 >> 0x20);
  fVar19 = 1.0 / (param_4[7] * param_4[10] - param_4[8] * param_4[9]);
  fVar22 = param_4[10] * fVar19;
  fVar24 = param_4[7] * fVar19;
  fVar23 = -(param_4[8] * fVar19);
  fVar20 = -(param_4[9] * fVar19);
  fVar19 = param_4[2];
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar22 = fVar21 * fVar20 + (float)local_170 * fVar22 +
           -param_4[0xc] * fVar20 + -param_4[0xb] * fVar22;
  fVar20 = fVar21 * fVar24 + (float)local_170 * fVar23 +
           -param_4[0xc] * fVar24 + -param_4[0xb] * fVar23;
  local_188 = param_2;
  local_140 = plVar14;
  local_128 = param_3;
  if (*(longlong *)(param_1 + 0x330) != lVar5) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar14 = (int)*plVar14 + 1;
      UNLOCK();
    }
    local_120 = lVar5;
    local_118 = plVar4;
    FUN_1418f8c40(*(undefined8 *)(param_1 + 0x300),&local_158,&local_120);
    if ((local_158 == (longlong *)0x0) ||
       (lVar13 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x300) + 0x28) + 0x10))) {
      local_198 = local_158;
      plStack_190 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      if (local_158 == (longlong *)0x0) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar14 = (int)*plVar14 + 1;
          UNLOCK();
        }
        local_110 = lVar5;
        local_108 = plVar4;
        puVar9 = (undefined8 *)FUN_1419041f0(*(undefined8 *)(param_1 + 0x300),local_f0,&local_110,1)
        ;
        local_130 = (longlong *)puVar9[1];
        local_198 = (longlong *)*puVar9;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        local_138 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_190,&local_130);
        plVar11 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_130 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_e8 + 1;
          lVar13 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        if (local_198 != (longlong *)0x0) goto LAB_14191d2b5;
      }
      else {
LAB_14191d2b5:
        plVar11 = (longlong *)(param_1 + 0x330);
        FUN_141914c70(plVar11);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar14 = (int)*plVar14 + 1;
          UNLOCK();
        }
        local_180 = lVar5;
        plStack_178 = plVar4;
        if (&local_180 != plVar11) {
          local_180 = *plVar11;
          plStack_178 = *(longlong **)(param_1 + 0x338);
          *plVar11 = lVar5;
          *(longlong **)(param_1 + 0x338) = plVar4;
          local_a0 = lVar5;
          plStack_98 = plVar4;
        }
        plVar14 = plStack_178;
        if (plStack_178 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_178 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_178)(plStack_178);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plStack_178 + 8))(plStack_178,1);
            }
          }
        }
        puVar9 = (undefined8 *)operator_new(0xc0);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)
                    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_e0);
          local_100 = *puVar10;
          local_f8 = puVar10[1];
          if (local_f8 != 0) {
            LOCK();
            *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
            UNLOCK();
          }
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_d8 + 1;
            lVar5 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_d8)(local_d8);
              LOCK();
              piVar1 = (int *)((longlong)local_d8 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_d8 + 8))(local_d8,1);
              }
            }
          }
          plVar14 = local_198;
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
            UNLOCK();
          }
          uVar6 = (**(code **)(*local_198 + 0x20))(local_198);
          local_1b8 = CONCAT31(local_1b8._1_3_,uVar6);
          puVar10 = (undefined8 *)FUN_141905390(plVar14,local_b0,&local_100,0xffffffff);
          local_148 = 0;
          local_1b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          FUN_1418d0450(puVar9,&local_c0,&local_d0,0);
          plVar11 = plStack_190;
          *puVar9 = &PTR__scalar_deleting_destructor__144d68908;
          puVar9[0x14] = plVar14;
          puVar9[0x15] = plStack_190;
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
            UNLOCK();
          }
          puVar9[0x16] = *puVar10;
          lVar5 = puVar10[1];
          puVar9[0x17] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            plVar14 = plStack_190 + 1;
            lVar5 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_190)(plStack_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plStack_190 + 8))(plStack_190,1);
              }
            }
          }
          plVar14 = (longlong *)puVar10[1];
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar14 + 1;
            lVar5 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
        }
        plVar11 = (longlong *)operator_new(0x18);
        plVar14 = plVar16;
        if (plVar11 != (longlong *)0x0) {
          *(undefined4 *)(plVar11 + 1) = 1;
          *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
          plVar11[2] = (longlong)puVar9;
          plVar14 = plVar11;
        }
        plVar11 = puVar9 + 1;
        if (puVar9 == (undefined8 *)0x0) {
          plVar11 = plVar16;
        }
        local_168 = puVar9;
        local_160 = plVar14;
        if (plVar11 != (longlong *)0x0) {
          if ((*plVar11 != 0) && (plVar11[1] != 0)) {
            piVar1 = (int *)(plVar11[1] + 8);
            LOCK();
            iVar7 = *piVar1;
            if (iVar7 == 0) {
              *piVar1 = 0;
              iVar7 = 0;
            }
            UNLOCK();
            if (0 < iVar7) goto LAB_14191d5b2;
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          *plVar11 = (longlong)puVar9;
          plVar12 = (longlong *)plVar11[1];
          if (plVar14 != plVar12) {
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
              UNLOCK();
              plVar12 = (longlong *)plVar11[1];
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
            plVar11[1] = (longlong)plVar14;
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar14 + 1;
            lVar5 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
        }
LAB_14191d5b2:
        if ((undefined8 **)(param_1 + 0x340) != &local_168) {
          *(undefined8 **)(param_1 + 0x340) = puVar9;
          local_168 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x348,&local_160);
        }
        plVar14 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_160 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
      }
      plVar14 = plStack_190;
      if (plStack_190 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_190 + 1;
        lVar5 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_190)(plStack_190);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plStack_190 + 8))(plStack_190,1);
          }
        }
      }
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    plVar14 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_150 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_150 + 8))(plStack_150,1);
        }
      }
    }
    if (!bVar18) goto LAB_14191d7ed;
  }
  lVar5 = *(longlong *)(param_1 + 0x300);
  if (*(int *)(lVar5 + 0x68) == 1) {
    fVar19 = fVar19 * fVar2 * 0.5;
    *(undefined4 *)(param_1 + 0x354) = 0;
    bVar18 = fVar19 == fVar22;
    bVar17 = fVar19 < fVar22;
  }
  else {
    fVar19 = fVar19 * fVar3 * 0.5;
    *(undefined4 *)(param_1 + 0x354) = 1;
    bVar18 = fVar19 == fVar20;
    bVar17 = fVar19 < fVar20;
  }
  local_1a8 = !bVar17 && !bVar18;
  local_170 = CONCAT44(local_170._4_4_,*(undefined4 *)(param_1 + 0x350));
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  if ((*(longlong *)(param_1 + 0x340) != 0) &&
     (plVar14 = local_188, plVar11 = plVar16, 0 < *(int *)(lVar5 + 0x50))) {
    do {
      iVar7 = (int)plVar16;
      plVar16 = *(longlong **)((longlong)plVar11 + *(longlong *)(lVar5 + 0x48) + 8);
      lVar13 = *(longlong *)((longlong)plVar11 + *(longlong *)(lVar5 + 0x48));
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      if (lVar13 == *plVar14) {
        iVar15 = iVar7;
        if (local_1a8 == '\0') {
          iVar8 = *(int *)(lVar5 + 0x50) + -1;
          iVar15 = iVar7 + 1;
          if (iVar8 <= iVar7 + 1) {
            iVar15 = iVar8;
          }
        }
        *(int *)(param_1 + 0x350) = iVar15;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar16 + 1;
          lVar5 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        break;
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar16 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = local_188;
          if (iVar15 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
            plVar14 = local_188;
          }
        }
      }
      plVar16 = (longlong *)(ulonglong)(iVar7 + 1U);
      plVar11 = plVar11 + 2;
    } while ((int)(iVar7 + 1U) < *(int *)(lVar5 + 0x50));
  }
  if (((float)local_170 != (float)*(int *)(param_1 + 0x350)) && (*(int *)(param_1 + 0x350) != -1)) {
    FUN_1418e5e50(param_1);
  }
LAB_14191d7ed:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    lVar5 = *local_140;
    *(int *)local_140 = (int)*local_140 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar14 = (longlong *)local_188[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = (longlong *)local_128[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 14191d8e0 FUN_14191d8e0 body=500 status=ok
// SIG undefined FUN_14191d8e0(void)

void FUN_14191d8e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_50;
  ulonglong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar7 = (ulonglong *)FUN_141942440(*param_2,local_38);
  local_40 = (longlong *)puVar7[1];
  uVar5 = *puVar7;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_48 = uVar5;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  puVar7 = (ulonglong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  if ((uVar5 == 0) || (uVar5 != *puVar7)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((bVar9) && (iVar6 = FUN_1418cbe60(param_1 + 0x130,param_2), iVar6 != -1)) {
    local_48 = 0;
    lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x130);
    local_50 = *(longlong **)(lVar8 + 0x18);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      uVar4 = *(uint *)(local_50 + 1);
      bVar9 = uVar4 == 0;
      if (bVar9) {
        *(uint *)(local_50 + 1) = 0;
      }
      else {
        local_48 = (ulonglong)uVar4;
      }
      UNLOCK();
      while (!bVar9) {
        iVar6 = (int)local_48;
        LOCK();
        bVar9 = iVar6 == (int)local_50[1];
        if (bVar9) {
          *(int *)(local_50 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) {
          local_48 = *(ulonglong *)(lVar8 + 0x10);
          goto LAB_14191da24;
        }
        local_48 = 0;
        LOCK();
        uVar4 = *(uint *)(local_50 + 1);
        bVar9 = uVar4 == 0;
        if (bVar9) {
          *(uint *)(local_50 + 1) = 0;
        }
        else {
          local_48 = (ulonglong)uVar4;
        }
        UNLOCK();
      }
      local_48 = 0;
      local_50 = (longlong *)0x0;
    }
LAB_14191da24:
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_50,lVar8,0,0);
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 14191dae0 UpdateOverscroll body=88 status=ok
// SIG undefined UpdateOverscroll(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FOverscroll::UpdateOverscroll(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = (ABS(fVar1) + 1.0) / _DAT_1464bfd3c;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar2 = fVar2 * DAT_1464bfd40 * param_2;
  if (0.0 < fVar1) {
    fVar1 = fVar1 - fVar2;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *param_1 = fVar1;
    return;
  }
  fVar1 = fVar1 + fVar2;
  if (0.0 <= fVar1) {
    fVar1 = 0.0;
  }
  *param_1 = fVar1;
  return;
}



// FUNCTION 14191db40 UpdateScrollVelocity body=82 status=ok
// SIG undefined UpdateScrollVelocity(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FInertialScrollManager::UpdateScrollVelocity(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = DAT_1464bfd34;
  if (fVar1 <= 0.0) {
    fVar2 = -DAT_1464bfd34;
  }
  param_2 = (fVar1 * _DAT_1464bfd30 + fVar2) * param_2;
  if (0.0 < fVar1) {
    fVar1 = fVar1 - param_2;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0x10) = fVar1;
    return;
  }
  if (fVar1 < 0.0) {
    fVar1 = fVar1 - param_2;
    if (0.0 <= fVar1) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0x10) = fVar1;
  }
  return;
}



// FUNCTION 14191dba0 FUN_14191dba0 body=1031 status=ok
// SIG undefined FUN_14191dba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14191dba0(longlong param_1,short param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  void *local_158;
  int local_150;
  int local_14c;
  longlong local_148 [2];
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
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
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  puVar5 = (undefined8 *)FText::ToString(param_1 + 0x3c8);
  local_150 = *(int *)(puVar5 + 1);
  lVar8 = (longlong)local_150;
  _Src = (void *)*puVar5;
  local_158 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_158,(2 - (uint)(local_150 != 0)) + local_150,0);
  _guard_xfg_dispatch_icall_nop(local_158,_Src,lVar8 * 2);
  if (param_2 != 0) {
    iVar7 = local_150 + -1;
    if (local_150 < 1) {
      iVar7 = 0;
    }
    local_150 = (local_150 < 1) + 1 + local_150;
    if (local_14c < local_150) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158);
    }
    *(short *)((longlong)local_158 + (longlong)iVar7 * 2) = param_2;
    *(undefined2 *)((longlong)local_158 + (longlong)iVar7 * 2 + 2) = 0;
  }
  uVar6 = FText::FromString(local_d8,&local_158);
  FText::operator=(param_1 + 0x3c8,uVar6);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x3a8) != 0) && (*(longlong *)(param_1 + 0x3b8) != 0)) {
    local_148[0] = 0;
    local_148[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
    local_168 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_148[0],0xf,"Searching: {0}");
    lVar8 = FText::FText(local_80,param_1 + 0x3c8);
    uVar6 = FText::FromString(local_a8,local_148);
    puVar5 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar6);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_110 = *puVar5;
    local_138 = local_68;
    puStack_130 = local_38;
    local_108 = puVar5[1];
    local_40 = '\x01';
    if (local_108 != 0) {
      LOCK();
      *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
    uVar6 = FText::Format(local_c0,&local_110,uVar6);
    FText::FText(local_f0,uVar6);
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_100);
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
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar3 = (longlong *)puVar5[1];
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = *(longlong **)(lVar8 + 8);
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    FUN_1419bcd30(*(undefined8 *)(param_1 + 0x3a8),local_f0);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_e8 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_148[0] != 0) {
      FMemory::Free();
    }
    local_128 = DAT_1464b9ee8;
    local_127 = 1;
    local_120 = 0;
    local_118 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x1b8))
              (*(longlong **)(param_1 + 0x3b8),&local_128);
  }
  FUN_1418f8680(param_1);
  return;
}



// FUNCTION 14191dfb0 FUN_14191dfb0 body=437 status=ok
// SIG undefined FUN_14191dfb0(void)

void FUN_14191dfb0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  int local_res8 [2];
  int local_res10 [4];
  longlong local_28;
  undefined8 local_20;
  
  plVar7 = (longlong *)0x0;
  local_res8[0] = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_1418ff1d0(param_1,local_res8,&local_28);
  plVar8 = plVar7;
  do {
    iVar6 = (int)plVar8;
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x138) <= iVar6)) {
      iVar6 = local_res8[0];
      if (local_res8[0] <= *(int *)(param_1 + 0x1f8)) {
        iVar6 = *(int *)(param_1 + 0x1f8);
      }
      *(int *)(param_1 + 0x1f8) = iVar6;
      iVar6 = (int)local_20;
      if ((int)local_20 <= *(int *)(param_1 + 0x1fc)) {
        iVar6 = *(int *)(param_1 + 0x1fc);
      }
      *(int *)(param_1 + 0x1fc) = iVar6;
      if ((int)local_20 != 0) {
        plVar8 = (longlong *)(local_28 + 8);
        iVar6 = (int)local_20;
        do {
          plVar7 = (longlong *)*plVar8;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar7 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
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
          plVar8 = plVar8 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      return;
    }
    lVar4 = (longlong)iVar6 * 0x20;
    if ((*(longlong *)(lVar4 + 0x10 + *(longlong *)(param_1 + 0x130)) != 0) &&
       (lVar2 = *(longlong *)(lVar4 + 0x18 + *(longlong *)(param_1 + 0x130)), lVar2 != 0)) {
      piVar1 = (int *)(lVar2 + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        lVar4 = *(longlong *)(param_1 + 0x130) + lVar4;
        local_res10[0] = 0;
        plVar8 = *(longlong **)(lVar4 + 0x18);
        plVar5 = plVar8;
        plVar9 = plVar7;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(plVar8 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (plVar5 = plVar7, !bVar10) {
            LOCK();
            bVar10 = iVar3 == (int)plVar8[1];
            if (bVar10) {
              *(int *)(plVar8 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar5 = plVar8;
              plVar9 = (longlong *)0x0;
              if (plVar8 != (longlong *)0x0) {
                plVar9 = *(longlong **)(lVar4 + 0x10);
              }
              break;
            }
            LOCK();
            iVar3 = (int)plVar8[1];
            bVar10 = iVar3 == 0;
            if (bVar10) {
              *(int *)(plVar8 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1418ff1d0(plVar9,local_res10,&local_28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar5 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        local_res8[0] = local_res8[0] + local_res10[0];
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



// FUNCTION 14191e170 FUN_14191e170 body=109 status=ok
// SIG undefined FUN_14191e170(void)

void FUN_14191e170(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_1418fc990();
  plVar3 = (longlong *)puVar6[1];
  plVar4 = (longlong *)*puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar4 + 0x50))();
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14191e1e0 FUN_14191e1e0 body=642 status=ok
// SIG undefined FUN_14191e1e0(void)

ulonglong FUN_14191e1e0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_res8;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar2 = *(longlong **)(param_1 + 0x310);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  plVar7 = *(longlong **)(param_1 + 0x300);
  plVar10 = (longlong *)0x0;
  local_res8 = 0;
  plVar9 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar7[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar7 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar11) {
      LOCK();
      bVar11 = iVar5 == (int)plVar7[1];
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar9 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          local_res8 = *(undefined8 *)(param_1 + 0x2f8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (param_4 == '\0') {
    plVar7 = (longlong *)FUN_14196e970(local_res8);
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x348);
    plVar8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar10, !bVar11) {
        LOCK();
        bVar11 = iVar5 == (int)plVar7[1];
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar11) {
          plVar8 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            plVar10 = *(longlong **)(param_1 + 0x340);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar7[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar7 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar7 = (longlong *)FUN_141984b00(local_res8,local_48);
    plVar3 = (longlong *)*plVar7;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      uVar6 = (int)lVar4 - 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      if (uVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = (longlong *)(ulonglong)(iVar5 - 1U);
        if (iVar5 - 1U == 0) {
          plVar7 = (longlong *)(**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (plVar3 != plVar10) {
      FUN_14196e970(local_res8);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x210))(plVar10,1,1,0);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_58 = plVar10;
      local_50 = plVar8;
      plVar7 = (longlong *)FUN_1418c26d0(local_res8,&local_58);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      uVar6 = (int)lVar4 - 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      if (uVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = (longlong *)(ulonglong)(iVar5 - 1U);
        if (iVar5 - 1U == 0) {
          plVar7 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    uVar6 = (int)lVar4 - 1;
    plVar7 = (longlong *)(ulonglong)uVar6;
    if (uVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = (longlong *)(ulonglong)(iVar5 - 1U);
      if (iVar5 - 1U == 0) {
        plVar7 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    uVar6 = (int)lVar4 - 1;
    plVar7 = (longlong *)(ulonglong)uVar6;
    if (uVar6 == 0) {
      plVar7 = (longlong *)(**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        plVar7 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return (ulonglong)plVar7 & 0xffffffffffffff00;
}



// FUNCTION 14191e470 Write body=1936 status=ok
// SIG undefined Write(void)

void FDefaultRichTextMarkupWriter::Write(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int local_res20;
  int local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong local_e0;
  longlong local_d8;
  void *local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined8 *local_c0;
  uint *local_b8;
  void *local_b0;
  undefined8 local_a8;
  uint *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_res20 = 0;
  if (0 < (int)param_2[1]) {
    local_e0 = 0;
    local_d8 = 0;
    do {
      lVar12 = *param_2;
      if (0 < local_e0) {
        iVar9 = (int)param_3[1];
        iVar8 = (3 - (uint)(iVar9 != 0)) + iVar9;
        *(int *)(param_3 + 1) = iVar8;
        if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
        }
        puVar1 = (undefined4 *)(*param_3 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        *puVar1 = 0xa000d;
        *(undefined2 *)(puVar1 + 1) = 0;
      }
      puVar16 = *(undefined8 **)(lVar12 + local_d8);
      local_98 = puVar16 + (longlong)(int)((longlong *)(lVar12 + local_d8))[1] * 0xe;
      local_c0 = puVar16;
      if (puVar16 != local_98) {
        puVar15 = (uint *)(puVar16 + 4);
        do {
          uVar3 = puVar15[-6];
          local_c0 = puVar16;
          local_b8 = puVar15;
          if (1 < (int)uVar3) {
            iVar9 = (int)param_3[1];
            iVar8 = iVar9 + -1;
            if (iVar9 < 1) {
              iVar8 = 0;
            }
            iVar9 = (iVar9 < 1) + 1 + iVar9;
            *(int *)(param_3 + 1) = iVar9;
            if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
            }
            *(undefined2 *)(*param_3 + (longlong)iVar8 * 2) = 0x3c;
            *(undefined2 *)(*param_3 + 2 + (longlong)iVar8 * 2) = 0;
            pvVar6 = (void *)*puVar16;
            iVar9 = puVar15[-6] - 1;
            if (puVar15[-6] == 0) {
              iVar9 = 0;
            }
            if (iVar9 != 0) {
              iVar8 = (int)param_3[1];
              iVar10 = (uint)(iVar8 == 0) + iVar8 + iVar9;
              *(int *)(param_3 + 1) = iVar10;
              if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
              }
              pvVar2 = (void *)(*param_3 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
              ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar9 * 2);
              *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar2) = 0;
            }
            uVar4 = puVar15[6];
            local_108 = 0;
            uStack_104 = 1;
            uStack_f4 = 0;
            iStack_f0 = 0;
            if (uVar4 != 0) {
              puVar14 = *(uint **)(puVar15 + 4);
              if (*(uint **)(puVar15 + 4) == (uint *)0x0) {
                puVar14 = puVar15;
              }
              uVar5 = *puVar14;
              while (uVar5 == 0) {
                lVar12 = (longlong)local_108;
                iStack_f0 = iStack_f0 + 0x20;
                iVar9 = local_108 + 1;
                bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
                local_108 = iVar9;
                if (bVar7) goto LAB_14191e6b5;
                uVar5 = puVar14[lVar12 + 1];
              }
              uStack_104 = -uVar5 & uVar5;
              iVar9 = 0x1f;
              if (uStack_104 != 0) {
                for (; uStack_104 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uStack_104 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              uStack_f4 = (iStack_f0 - iVar9) + 0x1f;
              if ((int)uVar4 < (int)uStack_f4) {
LAB_14191e6b5:
                uStack_f4 = uVar4;
              }
            }
            uStack_78 = CONCAT44(uStack_f4,0xffffffff);
            local_70 = CONCAT44(uStack_ec,iStack_f0);
            local_68 = puVar15 + -4;
            uStack_60 = CONCAT44(uStack_104,local_108);
            uVar5 = puVar15[6];
            uVar13 = uVar4 & 0xffffffe0;
            iStack_88 = local_108;
            uStack_84 = uStack_104;
            local_a0 = puVar15;
            local_80 = puVar15;
            puStack_58 = puVar15;
            uStack_50 = uStack_78;
            uStack_48 = local_70;
            local_90 = local_68;
            uStack_f4 = uVar4;
            if (uVar4 != uVar5) {
              puVar14 = *(uint **)(puVar15 + 4);
              if (*(uint **)(puVar15 + 4) == (uint *)0x0) {
                puVar14 = puVar15;
              }
              uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
              iVar9 = (int)uVar4 >> 5;
              while (uVar11 == 0) {
                uVar13 = uVar13 + 0x20;
                if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                goto LAB_14191e797;
                uVar11 = puVar14[(longlong)iVar9 + 1];
                iVar9 = iVar9 + 1;
              }
              uVar11 = -uVar11 & uVar11;
              iVar9 = 0x1f;
              if (uVar11 != 0) {
                for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uVar11 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              uStack_f4 = (uVar13 - iVar9) + 0x1f;
              if ((int)uVar5 < (int)uStack_f4) {
LAB_14191e797:
                uStack_f4 = uVar5;
              }
            }
            while( true ) {
              if (((uStack_78._4_4_ == uStack_f4) && (local_80 == local_a0)) &&
                 (local_90 == local_68)) break;
              iVar9 = (int)param_3[1];
              puVar16 = (undefined8 *)
                        (*(longlong *)local_90 + (longlong)(int)uStack_78._4_4_ * 0x28);
              iVar8 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar8 = 0;
              }
              iVar9 = (iVar9 < 1) + 1 + iVar9;
              *(int *)(param_3 + 1) = iVar9;
              if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
              }
              *(undefined2 *)(*param_3 + (longlong)iVar8 * 2) = 0x20;
              *(undefined2 *)(*param_3 + 2 + (longlong)iVar8 * 2) = 0;
              pvVar6 = (void *)*puVar16;
              iVar9 = *(int *)(puVar16 + 1) + -1;
              if (*(int *)(puVar16 + 1) == 0) {
                iVar9 = 0;
              }
              if (iVar9 != 0) {
                iVar8 = (int)param_3[1];
                iVar10 = (uint)(iVar8 == 0) + iVar8 + iVar9;
                *(int *)(param_3 + 1) = iVar10;
                if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
                }
                pvVar2 = (void *)(*param_3 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
                ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar9 * 2);
                *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar2) = 0;
              }
              iVar9 = (int)param_3[1];
              iVar8 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar8 = 0;
              }
              iVar9 = (iVar9 < 1) + 1 + iVar9;
              *(int *)(param_3 + 1) = iVar9;
              if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
              }
              *(undefined2 *)(*param_3 + (longlong)iVar8 * 2) = 0x3d;
              *(undefined2 *)(*param_3 + 2 + (longlong)iVar8 * 2) = 0;
              iVar9 = (int)param_3[1];
              iVar8 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar8 = 0;
              }
              iVar9 = (iVar9 < 1) + 1 + iVar9;
              *(int *)(param_3 + 1) = iVar9;
              if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
              }
              *(undefined2 *)(*param_3 + (longlong)iVar8 * 2) = 0x22;
              *(undefined2 *)(*param_3 + 2 + (longlong)iVar8 * 2) = 0;
              pvVar6 = (void *)puVar16[2];
              iVar9 = *(int *)(puVar16 + 3) + -1;
              if (*(int *)(puVar16 + 3) == 0) {
                iVar9 = 0;
              }
              if (iVar9 != 0) {
                iVar8 = (int)param_3[1];
                iVar10 = (uint)(iVar8 == 0) + iVar8 + iVar9;
                *(int *)(param_3 + 1) = iVar10;
                if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
                }
                pvVar2 = (void *)(*param_3 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
                ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar9 * 2);
                *(undefined2 *)((longlong)pvVar2 + (longlong)iVar9 * 2) = 0;
              }
              iVar9 = (int)param_3[1];
              iVar8 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar8 = 0;
              }
              iVar9 = (iVar9 < 1) + 1 + iVar9;
              *(int *)(param_3 + 1) = iVar9;
              if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
              }
              *(undefined2 *)(*param_3 + (longlong)iVar8 * 2) = 0x22;
              *(undefined2 *)(*param_3 + 2 + (longlong)iVar8 * 2) = 0;
              uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
            }
            iVar9 = (int)param_3[1];
            iVar8 = iVar9 + -1;
            if (iVar9 < 1) {
              iVar8 = 0;
            }
            iVar9 = (iVar9 < 1) + 1 + iVar9;
            *(int *)(param_3 + 1) = iVar9;
            if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
            }
            *(undefined2 *)(*param_3 + (longlong)iVar8 * 2) = 0x3e;
            *(undefined2 *)(*param_3 + 2 + (longlong)iVar8 * 2) = 0;
          }
          puVar15 = local_b8;
          local_c8 = local_b8[0x12];
          lVar12 = (longlong)(int)local_c8;
          local_d0 = (void *)0x0;
          pvVar6 = *(void **)(local_b8 + 0x10);
          if (local_c8 == 0) {
            local_c4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,local_c8,0);
            ::_guard_xfg_dispatch_icall_nop(local_d0,pvVar6,lVar12 * 2);
          }
          FUN_1418f6cb0(&local_d0);
          pvVar6 = local_d0;
          if ((local_c8 != 0) && (iVar9 = local_c8 - 1, iVar9 != 0)) {
            iVar8 = (int)param_3[1];
            iVar10 = (uint)(iVar8 == 0) + iVar8 + iVar9;
            *(int *)(param_3 + 1) = iVar10;
            if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
            }
            pvVar2 = (void *)(*param_3 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)pvVar2 + (longlong)iVar9 * 2) = 0;
          }
          if (1 < (int)uVar3) {
            local_b0 = (void *)0x0;
            local_a8 = 4;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
            pvVar2 = local_b0;
            FGenericPlatformString::Memcpy(local_b0);
            if (((int)local_a8 != 0) && (iVar9 = (int)local_a8 + -1, iVar9 != 0)) {
              iVar8 = (int)param_3[1];
              iVar10 = (uint)(iVar8 == 0) + iVar8 + iVar9;
              *(int *)(param_3 + 1) = iVar10;
              if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
              }
              _Dst = (void *)(*param_3 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
              ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar9 * 2);
              *(undefined2 *)((longlong)_Dst + (longlong)iVar9 * 2) = 0;
            }
            if (pvVar2 != (void *)0x0) {
              FMemory::Free(pvVar2);
            }
          }
          if (pvVar6 != (void *)0x0) {
            FMemory::Free(pvVar6);
          }
          puVar15 = puVar15 + 0x1c;
          puVar16 = local_c0 + 0xe;
          local_c0 = puVar16;
          local_b8 = puVar15;
        } while (puVar16 != local_98);
      }
      local_res20 = local_res20 + 1;
      local_e0 = local_e0 + 1;
      local_d8 = local_d8 + 0x10;
    } while (local_res20 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14191ec00 FUN_14191ec00 body=139 status=ok
// SIG undefined FUN_14191ec00(void)

undefined8 * FUN_14191ec00(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)((longlong)puVar1 + 0xc);
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  uVar4 = puVar1[5];
  param_2[4] = puVar1[4];
  param_2[5] = uVar4;
  uVar4 = puVar1[7];
  param_2[6] = puVar1[6];
  param_2[7] = uVar4;
  param_2[8] = puVar1[8];
  lVar3 = puVar1[9];
  param_2[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_2[10] = puVar1[10];
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(puVar1 + 0xb);
  *(undefined1 *)((longlong)param_2 + 0x5c) = *(undefined1 *)((longlong)puVar1 + 0x5c);
  param_2[0xc] = *puVar2;
  param_2[0xd] = puVar2[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  return param_2;
}



// FUNCTION 14191ec90 FUN_14191ec90 body=439 status=ok
// SIG undefined FUN_14191ec90(void)

ulonglong *
FUN_14191ec90(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  plVar4 = (longlong *)FUN_14187cbd0(&local_48,param_3,&local_38);
  uVar9 = 0;
  *param_2 = 0;
  if (((int)plVar4[1] != 0) && (*plVar4 != 0)) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      iVar1 = (int)param_1[1];
      if ((int)param_1[2] <= iVar1) {
        uVar8 = uVar9;
        uVar10 = uVar9;
        iVar7 = iVar1;
        if (0 < iVar1) {
          do {
            if (((*(int *)(uVar10 + 8 + *param_1) == 0) ||
                (plVar6 = *(longlong **)(uVar10 + *param_1), plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x10))(), cVar2 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar8,1,1);
            }
            else {
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar10 = uVar10 + 0x10;
            }
            iVar7 = (int)param_1[1];
          } while ((int)uVar8 < iVar7);
        }
        iVar3 = iVar7 * 2;
        if (iVar3 < 3) {
          iVar3 = 2;
        }
        *(int *)(param_1 + 2) = iVar3;
        if ((iVar3 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar7)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
        }
      }
    }
    if (((int)plVar4[1] != 0) && (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) {
      puVar5 = (ulonglong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
      uVar9 = *puVar5;
    }
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar9;
    plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *param_1);
    *plVar6 = 0;
    *plVar6 = *plVar4;
    *plVar4 = 0;
    *(int *)(plVar6 + 1) = (int)plVar4[1];
    *(undefined4 *)(plVar4 + 1) = 0;
  }
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_2;
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
  return param_2;
}



// FUNCTION 14191ee50 FUN_14191ee50 body=328 status=ok
// SIG undefined FUN_14191ee50(void)

longlong FUN_14191ee50(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar6 = FUN_14187cd30(&local_68,param_2,&local_58);
  local_38 = 0;
  local_20 = 1;
  local_48 = 0x3f800000;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_18 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,uVar6);
  FUN_140692440(param_1 + 0x210,&local_48);
  *(undefined1 *)(param_1 + 0x238) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x240,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return param_1;
}



// FUNCTION 14191efa0 BorderImage<SFlareListItem> body=211 status=ok
// SIG undefined BorderImage<SFlareListItem>(void)

longlong SBorder::FArguments::BorderImage<SFlareListItem>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_1417dd6e0(&local_48,param_2,&local_38);
  local_20 = 1;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,uVar1);
  *(undefined8 *)(param_1 + 0x188) = local_28;
  *(undefined1 *)(param_1 + 400) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x198,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
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
  return param_1;
}



// FUNCTION 14191f080 CopyToEmpty<FTextLineHighlight,int> body=168 status=ok
// SIG undefined CopyToEmpty<FTextLineHighlight,int>(void)

void TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_>::CopyToEmpty<FTextLineHighlight,int>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar3 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 4);
    do {
      *puVar3 = *(undefined4 *)((longlong)puVar2 + -4);
      *(undefined8 *)(puVar3 + 1) = *puVar2;
      puVar3[3] = *(undefined4 *)(puVar2 + 1);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)((longlong)puVar2 + 0xc);
      lVar1 = *(longlong *)((longlong)puVar2 + 0x14);
      *(longlong *)(puVar3 + 6) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 8;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14191f130 CopyToEmpty<FTextRunRenderer,int> body=162 status=ok
// SIG undefined CopyToEmpty<FTextRunRenderer,int>(void)

void TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_>::CopyToEmpty<FTextRunRenderer,int>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar3 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 4);
    do {
      *puVar3 = *(undefined4 *)((longlong)puVar2 + -4);
      *(undefined8 *)(puVar3 + 1) = *puVar2;
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)((longlong)puVar2 + 0xc);
      lVar1 = *(longlong *)((longlong)puVar2 + 0x14);
      *(longlong *)(puVar3 + 6) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 8;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14191f1e0 CopyToEmpty<FTextLayout::FRunModel,int> body=301 status=ok
// SIG undefined CopyToEmpty<FTextLayout::FRunModel,int>(void)

void TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
     CopyToEmpty<FTextLayout::FRunModel,int>
               (longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar6 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar5 = (int *)(param_2 + 0x28);
    puVar4 = (undefined4 *)((longlong)puVar6 + 0x1c);
    do {
      *puVar6 = *(undefined8 *)(piVar5 + -10);
      lVar2 = *(longlong *)(piVar5 + -8);
      *(longlong *)(puVar4 + -5) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(puVar4 + -3) = 0;
      iVar1 = piVar5[-4];
      pvVar3 = *(void **)(piVar5 + -6);
      puVar4[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar4 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4 + -3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -3),pvVar3,(longlong)iVar1 << 3);
      }
      *(undefined8 *)(puVar4 + 1) = 0;
      iVar1 = *piVar5;
      pvVar3 = *(void **)(piVar5 + -2);
      puVar4[3] = iVar1;
      if (iVar1 == 0) {
        puVar4[4] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4 + 1,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 1),pvVar3,(longlong)iVar1 << 3);
      }
      puVar6 = puVar6 + 6;
      puVar4 = puVar4 + 0xc;
      piVar5 = piVar5 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14191f310 FUN_14191f310 body=348 status=ok
// SIG undefined FUN_14191f310(void)

undefined8 * FUN_14191f310(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_143f4d3e0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
    *puVar10 = &PTR_GetPoolName_143f4d428;
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_1;
}



// FUNCTION 14191f470 FUN_14191f470 body=338 status=ok
// SIG undefined FUN_14191f470(void)

undefined8 * FUN_14191f470(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d6e680;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_1;
}



// FUNCTION 14191f5d0 FUN_14191f5d0 body=338 status=ok
// SIG undefined FUN_14191f5d0(void)

undefined8 * FUN_14191f5d0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d6e058;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_1;
}



// FUNCTION 14191f730 FUN_14191f730 body=341 status=ok
// SIG undefined FUN_14191f730(void)

undefined8 *
FUN_14191f730(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_28)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d6da48;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    *(undefined4 *)(puVar10 + 5) = param_4;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_1;
}



// FUNCTION 14191f890 FUN_14191f890 body=341 status=ok
// SIG undefined FUN_14191f890(void)

undefined8 *
FUN_14191f890(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_28)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d6da08;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    *(undefined4 *)(puVar10 + 5) = param_4;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_1;
}



// FUNCTION 14191f9f0 FUN_14191f9f0 body=522 status=ok
// SIG undefined FUN_14191f9f0(void)

int * FUN_14191f9f0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0xc) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  lVar5 = (longlong)iVar7;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + lVar5 * 0xc) = *param_3;
  *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) = 0xffffffff;
  puVar1 = (uint *)(lVar2 + lVar5 * 0xc);
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0xc) == *puVar1) goto LAB_14191fb2b;
          iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14191fb2b:
    bVar10 = iVar4 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0xc),puVar1,4);
      TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar4;
      goto LAB_14191fbd1;
    }
  }
  cVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *puVar1;
    puVar1[2] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[1] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_14191fbd1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 14191fc00 FUN_14191fc00 body=634 status=ok
// SIG undefined FUN_14191fc00(void)

uint * FUN_14191fc00(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  void *_Dst;
  char cVar11;
  void *_Src;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar10 * 0x78 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x78 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (void *)((longlong)(int)uVar10 * 0x78 + *param_1);
  FUN_14191ec00(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x70) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar10 != 1) {
    TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar4 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar8 * 0x78 + *param_1);
      FUN_141923d10(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x70);
      uVar10 = *param_2;
      bVar2 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x78 + *param_1) = uVar10;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar10 * 0x78 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14191fe51;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = GetTypeHash(_Src);
    uVar10 = uVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x74) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x70) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14191fe51:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14191fe80 FUN_14191fe80 body=258 status=ok
// SIG undefined FUN_14191fe80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14191fe80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469eb2b8) &&
       (_Init_thread_header(&DAT_1469eb2b8), DAT_1469eb2b8 == -1)) {
      DAT_1469eb2a8 = 0;
      _DAT_1469eb2b0 = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469eb2a8,0);
      FGenericPlatformString::Memcpy(DAT_1469eb2a8,L"FExternalDragOperation",0x2e);
      atexit((_func_5014 *)&LAB_143e82fb0);
      _Init_thread_footer(&DAT_1469eb2b8);
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,&DAT_1469eb2a8);
    if (cVar3 != '\0') {
      *param_2 = *(undefined8 *)(param_1 + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x78);
      param_2[1] = lVar2;
      if (lVar2 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14191ff90 HeapSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_> body=444 status=ok
// SIG undefined HeapSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_>
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar7;
    iVar8 = iVar6;
joined_r0x00014191ffba:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar10 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + ((longlong)iVar7 + 2) * 0xc) <
              *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc)) {
            iVar10 = iVar7;
          }
          iVar10 = iVar10 + 1;
        }
        piVar1 = (int *)((longlong)param_1 + (longlong)iVar10 * 0xc);
        piVar2 = (int *)((longlong)param_1 + (longlong)iVar6 * 0xc);
        if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0xc) < *piVar1) {
          if (piVar2 != piVar1) {
            uVar3 = *(undefined8 *)piVar2;
            iVar6 = piVar2[2];
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            piVar2[2] = piVar1[2];
            *(undefined8 *)piVar1 = uVar3;
            piVar1[2] = iVar6;
          }
          iVar7 = iVar10 * 2 + 1;
          iVar6 = iVar10;
          goto joined_r0x00014191ffba;
        }
      }
      iVar7 = iVar5 + -2;
      iVar6 = iVar8 + -1;
      iVar5 = iVar7;
      iVar8 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0xc);
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        uVar4 = *(undefined4 *)(param_1 + 1);
        *param_1 = *puVar9;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar9 = uVar3;
        *(undefined4 *)(puVar9 + 1) = uVar4;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            if (*(int *)((longlong)param_1 + ((longlong)iVar5 + 2) * 0xc) <
                *(int *)((longlong)param_1 + (longlong)iVar7 * 0xc)) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          piVar1 = (int *)((longlong)param_1 + (longlong)iVar7 * 0xc);
          piVar2 = (int *)((longlong)param_1 + (longlong)iVar6 * 0xc);
          if (*piVar1 <= *(int *)((longlong)param_1 + (longlong)iVar6 * 0xc)) break;
          if (piVar2 != piVar1) {
            uVar3 = *(undefined8 *)piVar2;
            iVar6 = piVar2[2];
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            piVar2[2] = piVar1[2];
            *(undefined8 *)piVar1 = uVar3;
            piVar1[2] = iVar6;
          }
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = (undefined8 *)((longlong)puVar9 + -0xc);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141920150 IntroSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_> body=811 status=ok
// SIG undefined IntroSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0xc + -0xc;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    local_328 = (undefined4)(longlong)(fVar12 + fVar12);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar11 = &local_338;
    do {
      piVar10 = (int *)*plVar11;
      piVar5 = (int *)plVar11[1];
      lVar1 = plVar11[2];
      local_348._0_4_ = (int)lVar1;
      lVar4 = ((longlong)piVar5 - (longlong)piVar10) / 0xc + 1;
      piVar9 = piVar10;
      if ((int)local_348 != 0) {
LAB_141920240:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          piVar10 = piVar9 + (lVar4 >> 1) * 3;
          if (piVar10 != piVar9) {
            uVar2 = *(undefined8 *)piVar10;
            iVar3 = piVar10[2];
            *(undefined8 *)piVar10 = *(undefined8 *)piVar9;
            piVar10[2] = piVar9[2];
            *(undefined8 *)piVar9 = uVar2;
            piVar9[2] = iVar3;
          }
          piVar7 = piVar5 + 3;
          piVar10 = piVar9;
LAB_141920290:
          piVar6 = piVar10;
          piVar10 = piVar6 + 3;
          if (piVar10 <= piVar5) goto code_r0x000141920299;
          goto LAB_1419202a1;
        }
        for (; piVar7 = piVar9, piVar10 = piVar9, piVar9 < piVar5; piVar5 = piVar5 + -3) {
          while (piVar6 = piVar7, piVar10 = piVar10 + 3, piVar10 <= piVar5) {
            piVar7 = piVar10;
            if (*piVar10 <= *piVar6) {
              piVar7 = piVar6;
            }
          }
          if (piVar6 != piVar5) {
            uVar2 = *(undefined8 *)piVar6;
            iVar3 = piVar6[2];
            *(undefined8 *)piVar6 = *(undefined8 *)piVar5;
            piVar6[2] = piVar5[2];
            *(undefined8 *)piVar5 = uVar2;
            piVar5[2] = iVar3;
          }
        }
        goto LAB_1419203c2;
      }
LAB_1419203b3:
      local_348 = lVar1;
      HeapSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_>
                (piVar10,lVar4,param_3,param_4);
LAB_1419203c2:
      plVar11 = plVar11 + -3;
    } while (&local_338 <= plVar11);
  }
  return;
code_r0x000141920299:
  if (*piVar10 <= *piVar9) goto LAB_141920290;
LAB_1419202a1:
  do {
    piVar8 = piVar7;
    piVar7 = piVar8 + -3;
    if (piVar7 <= piVar9) break;
  } while (*piVar9 <= *piVar7);
  if (piVar10 <= piVar7) {
    if (piVar10 != piVar7) {
      uVar2 = *(undefined8 *)piVar10;
      iVar3 = piVar6[5];
      *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
      piVar6[5] = piVar8[-1];
      *(undefined8 *)piVar7 = uVar2;
      piVar8[-1] = iVar3;
    }
    goto LAB_141920290;
  }
  if (piVar9 != piVar7) {
    uVar2 = *(undefined8 *)piVar9;
    iVar3 = piVar9[2];
    *(undefined8 *)piVar9 = *(undefined8 *)piVar7;
    piVar9[2] = piVar8[-1];
    *(undefined8 *)piVar7 = uVar2;
    piVar8[-1] = iVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar4 = (longlong)piVar7 + (-0xc - (longlong)piVar9);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)piVar5 - (longlong)piVar10) / 0xc) {
    if (piVar10 < piVar5) {
      *plVar11 = (longlong)piVar10;
      plVar11[1] = (longlong)piVar5;
      *(int *)(plVar11 + 2) = (int)local_348;
      plVar11 = plVar11 + 3;
    }
    if (piVar7 <= piVar9 + 3) goto LAB_1419203c2;
    piVar5 = piVar8 + -6;
    piVar10 = piVar9;
  }
  else {
    if (piVar9 + 3 < piVar7) {
      *plVar11 = (longlong)piVar9;
      plVar11[1] = (longlong)(piVar8 + -6);
      *(int *)(plVar11 + 2) = (int)local_348;
      plVar11 = plVar11 + 3;
    }
    if (piVar5 <= piVar10) goto LAB_1419203c2;
  }
  lVar4 = ((longlong)piVar5 - (longlong)piVar10) / 0xc + 1;
  piVar9 = piVar10;
  if ((int)local_348 == 0) goto LAB_1419203b3;
  goto LAB_141920240;
}



// FUNCTION 141920480 FUN_141920480 body=229 status=ok
// SIG undefined FUN_141920480(void)

undefined8 * FUN_141920480(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2d8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6e670;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x2c8);
      FUN_1417f46d0(_Dst);
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
      *_Dst = &PTR_FUN_144d6d7e8;
      FCurveSequence::FCurveSequence(puVar1 + 0x43);
      FCurveHandle::FCurveHandle(puVar1 + 0x4e,0,0);
      puVar1[0x53] = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x54) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x2a4) = 0x3f800000;
      *(undefined1 *)(puVar1 + 0x55) = 0;
      puVar1[0x56] = 0;
      puVar1[0x57] = 0;
      *(undefined1 *)(puVar1 + 0x58) = 0;
      puVar1[0x59] = 0;
      *(undefined4 *)(puVar1 + 0x5a) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141920570 FUN_141920570 body=237 status=ok
// SIG undefined FUN_141920570(void)

undefined8 * FUN_141920570(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x390);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6e630;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x380);
      FUN_141923690(_Dst);
      puVar1[99] = 0;
      *(undefined4 *)(puVar1 + 100) = 0;
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6b] = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
      *_Dst = &PTR__scalar_deleting_destructor__144d6de10;
      puVar1[0x43] = &PTR_FUN_144d695d0;
      puVar1[0x6d] = &PTR_SetError_144d6e038;
      puVar1[0x6e] = 0;
      puVar1[0x6f] = 0;
      puVar1[0x70] = 0;
      puVar1[0x71] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141920660 FUN_141920660 body=216 status=ok
// SIG undefined FUN_141920660(void)

longlong FUN_141920660(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar1 = FUN_1418c8cd0(&local_58,param_2,&local_48);
  local_28 = 1;
  local_20 = 0;
  local_18 = 0;
  local_38 = 0;
  uStack_30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,uVar1);
  *(undefined1 *)(param_1 + 0x130) = local_28;
  *(undefined4 *)(param_1 + 0x120) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x124) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x128) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 300) = uStack_30._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x138,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return param_1;
}



// FUNCTION 141920740 FUN_141920740 body=216 status=ok
// SIG undefined FUN_141920740(void)

longlong FUN_141920740(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar1 = FUN_1418c8cd0(&local_58,param_2,&local_48);
  local_28 = 1;
  local_20 = 0;
  local_18 = 0;
  local_38 = 0;
  uStack_30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,uVar1);
  *(undefined1 *)(param_1 + 0x120) = local_28;
  *(undefined4 *)(param_1 + 0x110) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x114) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x118) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0x11c) = uStack_30._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x128,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return param_1;
}



// FUNCTION 141920820 FUN_141920820 body=470 status=ok
// SIG undefined FUN_141920820(void)

undefined8 * FUN_141920820(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__144d6e0a0;
  param_1[0x5e] = &PTR_LAB_144044268;
  param_1[0x84] = &PTR_IsPromotedBuild_144044288;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0xc3) = 0x101;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x633) = 0;
  return param_1;
}



// FUNCTION 141920a00 FUN_141920a00 body=470 status=ok
// SIG undefined FUN_141920a00(void)

undefined8 * FUN_141920a00(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR__scalar_deleting_destructor__144d6e3c0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  return param_1;
}



// FUNCTION 141920be0 FUN_141920be0 body=1098 status=ok
// SIG undefined FUN_141920be0(void)

longlong FUN_141920be0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_78 [56];
  longlong *local_40;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar1 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res8,"SpinBox",1);
  local_res10 = *puVar7;
  local_res18 = local_res10;
  lVar8 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb1d0);
  if (lVar8 == 0) {
    lVar8 = FUN_141835150();
  }
  *(longlong *)(param_1 + 0x108) = lVar8;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x114) = 1;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 300) = 1;
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0x41200000;
  *(undefined1 *)(param_1 + 0x14c) = 1;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined2 *)(param_1 + 0x1f0) = 0x100;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0x100;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x244) = 1;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  plVar1 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res20,L"NormalFont",1);
  puVar7 = (undefined8 *)(**(code **)(lVar8 + 0x78))(plVar1,local_78,*puVar7,0);
  *(undefined8 *)(param_1 + 0x270) = *puVar7;
  *(undefined8 *)(param_1 + 0x278) = puVar7[1];
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x14);
  uVar5 = *(undefined4 *)(puVar7 + 3);
  uVar6 = *(undefined4 *)((longlong)puVar7 + 0x1c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)(param_1 + 0x284) = uVar4;
  *(undefined4 *)(param_1 + 0x288) = uVar5;
  *(undefined4 *)(param_1 + 0x28c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)(param_1 + 0x294) = uVar4;
  *(undefined4 *)(param_1 + 0x298) = uVar5;
  *(undefined4 *)(param_1 + 0x29c) = uVar6;
  *(undefined8 *)(param_1 + 0x2a0) = puVar7[6];
  lVar8 = puVar7[7];
  *(longlong *)(param_1 + 0x2a8) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x2b0) = puVar7[8];
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(puVar7 + 9);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)((longlong)puVar7 + 0x4c);
  *(undefined1 *)(param_1 + 0x2c0) = 1;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  *(undefined8 *)(param_1 + 0x2d8) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x2e0) = 0x3f80000040000000;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0x100;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined2 *)(param_1 + 0x358) = 0x101;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x374) = 1;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined1 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  return param_1;
}



// FUNCTION 141921030 FArguments body=397 status=ok
// SIG undefined FArguments(void)

longlong SCircularThrobber::FArguments::FArguments(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar2 = DAT_1469eb140;
  lVar1 = *DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"Throbber.CircleChunk",1);
  uVar4 = (**(code **)(lVar1 + 0x40))(plVar2,*puVar3,0);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = 6;
  *(undefined4 *)(param_1 + 0x114) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x118) = 0x41800000;
  *(undefined8 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)(param_1 + 300) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  return param_1;
}



// FUNCTION 1419211c0 FArguments body=999 status=ok
// SIG undefined FArguments(void)

longlong SEditableText::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FText::FText(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  FText::FText(param_1 + 0x168);
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalEditableText",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb180);
  if (lVar3 == 0) {
    lVar3 = FUN_141834c80();
  }
  *(longlong *)(param_1 + 0x198) = lVar3;
  FUN_1417efd90(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined2 *)(param_1 + 0x2a8) = 0x100;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 0x2c0) = 0x100;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 0x101;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined2 *)(param_1 + 0x2f0) = 0x100;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined2 *)(param_1 + 0x308) = 0x100;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined2 *)(param_1 + 800) = 0x101;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x33c) = 1;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined2 *)(param_1 + 0x350) = 0x101;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined1 *)(param_1 + 0x3ac) = 1;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined2 *)(param_1 + 0x3c0) = 0x100;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x40c) = 1;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined1 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x42c) = 1;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined2 *)(param_1 + 0x440) = 0x100;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x459) = 0;
  *(undefined1 *)(param_1 + 0x45b) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  return param_1;
}



// FUNCTION 1419215b0 FUN_1419215b0 body=996 status=ok
// SIG undefined FUN_1419215b0(void)

longlong FUN_1419215b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FText::FText(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  FText::FText(param_1 + 0x168);
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined2 *)(param_1 + 0x1c0) = 0x100;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0x100;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalText",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb158);
  if (lVar3 == 0) {
    lVar3 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x1f0) = lVar3;
  FUN_1417efd90(param_1 + 0x1f8);
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x270) = 1;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x28c) = 1;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 1;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined2 *)(param_1 + 0x2b8) = 0x100;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined2 *)(param_1 + 800) = 0x101;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined2 *)(param_1 + 0x338) = 0x100;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined2 *)(param_1 + 0x350) = 0x101;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined2 *)(param_1 + 0x368) = 0x100;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined2 *)(param_1 + 0x380) = 0x101;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined2 *)(param_1 + 0x398) = 0x101;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined2 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x43c) = 1;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined2 *)(param_1 + 0x450) = 0x100;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x469) = 0;
  *(undefined1 *)(param_1 + 0x46b) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  return param_1;
}



// FUNCTION 1419219a0 FUN_1419219a0 body=1455 status=ok
// SIG undefined FUN_1419219a0(void)

longlong FUN_1419219a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalEditableTextBox",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb188);
  if (lVar3 == 0) {
    lVar3 = FUN_141834c00();
  }
  *(longlong *)(param_1 + 0x108) = lVar3;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalText",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb158);
  if (lVar3 == 0) {
    lVar3 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x110) = lVar3;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  FText::FText(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  FText::FText(param_1 + 0x158);
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  FText::FText(param_1 + 0x188);
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  FUN_1417efd90(param_1 + 0x1b8);
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x268) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 1;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0x3f800000;
  *(undefined1 *)(param_1 + 700) = 1;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined2 *)(param_1 + 0x2d0) = 0x100;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined2 *)(param_1 + 0x2e8) = 0x101;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined2 *)(param_1 + 0x300) = 0x101;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined2 *)(param_1 + 0x318) = 0x100;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined2 *)(param_1 + 0x330) = 0x101;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x348) = 0x100;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0x101;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x101;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined1 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined1 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined1 *)(param_1 + 0x4bc) = 1;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined2 *)(param_1 + 0x4d0) = 0x100;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined2 *)(param_1 + 0x4e8) = 0x100;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined2 *)(param_1 + 0x500) = 0x100;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x520) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x524) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined1 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined1 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined1 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined2 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined1 *)(param_1 + 0x5c4) = 1;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined2 *)(param_1 + 0x5d8) = 0x100;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  *(undefined1 *)(param_1 + 0x5f1) = 0;
  *(undefined1 *)(param_1 + 0x5f3) = 0;
  return param_1;
}



// FUNCTION 141921f50 FUN_141921f50 body=274 status=ok
// SIG undefined FUN_141921f50(void)

longlong FUN_141921f50(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  FUN_1417efd90(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return param_1;
}



// FUNCTION 141922070 FArguments body=374 status=ok
// SIG undefined FArguments(void)

longlong SScrollBar::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Scrollbar",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb1a0);
  if (lVar3 == 0) {
    lVar3 = FUN_141834fd0();
  }
  *(longlong *)(param_1 + 0x108) = lVar3;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0x41400000;
  *(undefined4 *)(param_1 + 0x134) = 0x41400000;
  *(undefined1 *)(param_1 + 0x138) = 1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return param_1;
}



// FUNCTION 1419221f0 FArguments body=305 status=ok
// SIG undefined FArguments(void)

longlong SWidgetSwitcher::FArguments::FArguments
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x11c) = 1;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar1 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 141922330 FImageDecorator body=79 status=ok
// SIG undefined FImageDecorator(void)

undefined8 *
FImageDecorator::FImageDecorator(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_144d6d5c0;
  FString::FString(param_1 + 1);
  param_1[3] = param_3;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141922380 FLineModel body=427 status=ok
// SIG undefined FLineModel(void)

undefined8 * FTextLayout::FLineModel::FLineModel(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<FTextLayout::FRunModel,int>(param_1 + 5,param_2[5],*(undefined4 *)(param_2 + 6),0,0);
  param_1[7] = 0;
  iVar4 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 7,iVar4,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[7],_Src,(longlong)iVar4 * 0x28);
  }
  param_1[9] = 0;
  iVar4 = *(int *)(param_2 + 10);
  lVar1 = param_2[9];
  *(int *)(param_1 + 10) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 9,iVar4,0);
    puVar2 = (undefined4 *)param_1[9];
    puVar3 = (undefined8 *)(lVar1 + 4);
    do {
      *puVar2 = *(undefined4 *)((longlong)puVar3 + -4);
      *(undefined8 *)(puVar2 + 1) = *puVar3;
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)puVar3 + 0xc);
      lVar1 = *(longlong *)((longlong)puVar3 + 0x14);
      *(longlong *)(puVar2 + 6) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0xb] = 0;
  iVar4 = *(int *)(param_2 + 0xc);
  lVar1 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 0xb,iVar4,0);
    puVar2 = (undefined4 *)param_1[0xb];
    puVar3 = (undefined8 *)(lVar1 + 4);
    do {
      *puVar2 = *(undefined4 *)((longlong)puVar3 + -4);
      *(undefined8 *)(puVar2 + 1) = *puVar3;
      puVar2[3] = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)puVar3 + 0xc);
      lVar1 = *(longlong *)((longlong)puVar3 + 0x14);
      *(longlong *)(puVar2 + 6) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 141922530 FUN_141922530 body=353 status=ok
// SIG undefined FUN_141922530(void)

undefined8 * FUN_141922530(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  FUN_1418375f0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_18);
  puVar5 = (undefined8 *)operator_new(0x58);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = local_18;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
  }
  puVar7 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_144d6e610;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar5;
    puVar7 = puVar6;
  }
  param_1[2] = puVar5;
  param_1[3] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 2,puVar5,puVar5);
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
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 7;
  return param_1;
}



// FUNCTION 1419226a0 FUN_1419226a0 body=407 status=ok
// SIG undefined FUN_1419226a0(void)

undefined8 * FUN_1419226a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  iVar5 = *(int *)(param_2 + 1);
  puVar6 = (undefined8 *)*param_2;
  *(int *)(param_1 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar5,0);
    puVar2 = (undefined8 *)*param_1;
    do {
      *puVar2 = *puVar6;
      lVar1 = puVar6[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[2] = 0;
  iVar5 = *(int *)(param_2 + 3);
  lVar1 = param_2[2];
  *(int *)(param_1 + 3) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar5,0);
    puVar3 = (undefined4 *)param_1[2];
    puVar4 = (undefined4 *)(lVar1 + 4);
    do {
      *puVar3 = puVar4[-1];
      puVar3[1] = *puVar4;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar4 + 1);
      lVar1 = *(longlong *)(puVar4 + 3);
      *(longlong *)(puVar3 + 4) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 6;
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[4] = 0;
  iVar5 = *(int *)(param_2 + 5);
  lVar1 = param_2[4];
  *(int *)(param_1 + 5) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar5,0);
    puVar3 = (undefined4 *)param_1[4];
    puVar4 = (undefined4 *)(lVar1 + 4);
    do {
      *puVar3 = puVar4[-1];
      puVar3[1] = *puVar4;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar4 + 1);
      lVar1 = *(longlong *)(puVar4 + 3);
      *(longlong *)(puVar3 + 4) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 6;
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  return param_1;
}



// FUNCTION 141922840 FUN_141922840 body=534 status=ok
// SIG undefined FUN_141922840(void)

undefined8 * FUN_141922840(undefined8 *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_res8;
  
  *(undefined4 *)(param_1 + 2) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1 + 3) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xbf800000;
  if (param_4 - 3U < 2) {
    fVar3 = *param_2;
    if (*param_2 <= *param_3) {
      fVar3 = *param_3;
    }
    local_res8 = CONCAT44(param_3[1],fVar3);
  }
  else {
    local_res8 = *(undefined8 *)param_3;
  }
  *param_1 = local_res8;
  fVar3 = (float)DAT_1468b5d88;
  fVar4 = DAT_1468b5d88._4_4_;
  switch(param_4) {
  case 0:
  case 3:
    fVar3 = 0.0;
    fVar4 = param_2[1];
    break;
  case 1:
    fVar3 = *param_2 * 0.5 - (float)local_res8 * 0.5;
    fVar4 = param_2[1];
    break;
  case 2:
  case 4:
    fVar3 = *param_2 - (float)local_res8;
    fVar4 = param_2[1];
    break;
  case 5:
    fVar3 = *param_2;
    fVar4 = 0.0;
    break;
  case 6:
    fVar3 = 0.0;
    fVar4 = -local_res8._4_4_;
    break;
  case 7:
    fVar3 = *param_2 * 0.5 - (float)local_res8 * 0.5;
    fVar4 = -local_res8._4_4_;
    break;
  case 8:
    fVar3 = -(float)local_res8 - *param_2;
    fVar4 = -local_res8._4_4_;
    break;
  case 9:
    fVar3 = -(float)local_res8;
    fVar4 = 0.0;
    break;
  case 10:
    fVar3 = *param_2 * 0.5 - (float)local_res8 * 0.5;
    fVar4 = param_2[1] * 0.5 - local_res8._4_4_ * 0.5;
    break;
  case 0xb:
    fVar3 = *param_2;
    fVar4 = param_2[1] * 0.5 - local_res8._4_4_ * 0.5;
    break;
  case 0xc:
    fVar3 = 0.0;
    fVar4 = param_2[1] - local_res8._4_4_;
  }
  *(float *)(param_1 + 1) = fVar3;
  *(float *)((longlong)param_1 + 0xc) = fVar4;
  fVar4 = DAT_1468b5d88._4_4_;
  fVar3 = (float)DAT_1468b5d88;
  fVar1 = (float)DAT_1468b5d88 + *param_2;
  fVar2 = DAT_1468b5d88._4_4_ + param_2[1];
  *(uint *)(param_1 + 4) = (uint)((param_4 - 5U & 0xfffffffb) != 0);
  *(float *)(param_1 + 2) = fVar3;
  *(float *)((longlong)param_1 + 0x14) = fVar4;
  *(float *)(param_1 + 3) = fVar1;
  *(float *)((longlong)param_1 + 0x1c) = fVar2;
  return param_1;
}



// FUNCTION 141922a90 FSimpleSlot body=112 status=ok
// SIG undefined FSimpleSlot(void)

undefined8 * FSimpleSlot::FSimpleSlot(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR__purecall_143f48980;
  FSlotBase::FSlotBase(param_1 + 2);
  param_1[3] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_SetMonitoring_144d4edf8;
  param_1[2] = &PTR_LAB_144d4ee20;
  return param_1;
}



// FUNCTION 141922b00 FUN_141922b00 body=431 status=ok
// SIG undefined FUN_141922b00(void)

undefined8 * FUN_141922b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d6cfb8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  uVar1 = GetDefaultTextShapingMethod();
  *(undefined1 *)((longlong)param_1 + 0x89) = uVar1;
  uVar2 = (**(code **)(*DAT_1469f4768 + 0x68))();
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  if (uVar2 < 3) {
    uVar3 = (undefined1)uVar2;
  }
  *(undefined1 *)((longlong)param_1 + 0x8a) = uVar3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1b] = 0;
  FUN_1415d4630(param_1 + 0x1c);
  FUN_141601d10(param_1 + 0x1e);
  TextBiDi::CreateTextBiDi(param_1 + 0x20);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *param_1 = &PTR_FUN_144d6d4b0;
  FTextBlockStyle::FTextBlockStyle(param_1 + 0x26,param_3);
  param_1[99] = param_2;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = &PTR_Count_144d6d488;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x67) = 0x100;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  FUN_140691580(param_3);
  return param_1;
}



// FUNCTION 141922cb0 FUN_141922cb0 body=213 status=ok
// SIG undefined FUN_141922cb0(void)

undefined8 *
FUN_141922cb0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d6d328;
  FString::FString(param_1 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 5,param_2 + 0x10);
  param_1[0xf] = *param_3;
  lVar2 = param_3[1];
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FTextBlockStyle::FTextBlockStyle(param_1 + 0x11,param_4);
  iVar1 = *(int *)(param_1[0xf] + 8);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  *(int *)((longlong)param_1 + 0x26c) = iVar3;
  return param_1;
}



// FUNCTION 141922d90 FUN_141922d90 body=198 status=ok
// SIG undefined FUN_141922d90(void)

undefined8 *
FUN_141922d90(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d6d328;
  FString::FString(param_1 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 5,param_2 + 0x10);
  param_1[0xf] = *param_3;
  lVar1 = param_3[1];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FTextBlockStyle::FTextBlockStyle(param_1 + 0x11,param_4);
  param_1[0x4d] = *param_5;
  return param_1;
}



// FUNCTION 141922e60 FUN_141922e60 body=397 status=ok
// SIG undefined FUN_141922e60(void)

undefined8 *
FUN_141922e60(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d6d518;
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 5,param_3);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 7,param_3 + 0x10);
  param_1[0x11] = *param_4;
  lVar3 = param_4[1];
  param_1[0x12] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = *param_6;
  param_1[0x14] = *param_5;
  lVar3 = param_5[1];
  param_1[0x15] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_5 + 2);
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  if (*(char *)((longlong)param_5 + 0x1c) != '\0') {
    *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_5 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  }
  plVar1 = param_1 + 0x18;
  *plVar1 = 0;
  param_1[0x19] = 0;
  SWidget::SlatePrepass(param_1[0x14]);
  puVar4 = (undefined8 *)SWidget::GetDesiredSize(param_1[0x14],local_res8);
  param_1[0x1a] = *puVar4;
  iVar2 = *(int *)(param_1 + 0x19);
  *(int *)(param_1 + 0x19) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xcc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar4 = param_1[0x14];
  lVar3 = param_1[0x15];
  puVar4[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141922ff0 FUN_141922ff0 body=1088 status=ok
// SIG undefined FUN_141922ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141922ff0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_158 [280];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  SBorder::SBorder();
  *param_1 = &PTR_FUN_144d6d5d8;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  plVar10 = (longlong *)FUN_141880f80();
  plVar1 = plVar10 + 2;
  local_190 = plVar1;
  local_188 = plVar10;
  FUN_14044f790(&local_190,plVar1);
  local_1e8 = 0x228;
  SWidget::SetDebugInfo
            (plVar1,"SSpacer",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x15d);
  lVar11 = SSpacer::FArguments::FArguments(local_158);
  local_1a8 = lVar11 + 0xf8;
  local_1b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_1c0 = lVar11 + 0xe8;
  local_1d8 = *(undefined4 *)(lVar11 + 0x90);
  local_1c8 = lVar11 + 200;
  local_1d0 = lVar11 + 0x98;
  local_1b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_1e0 = lVar11 + 0x78;
  local_1e8 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SSpacer::Construct(plVar1,lVar11);
  if (-1 < (char)plVar10[5]) {
    cVar8 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar8 == '\0') {
      bVar9 = 0;
      goto LAB_141923147;
    }
  }
  bVar9 = 1;
LAB_141923147:
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar9;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  param_1[0x75] = plVar1;
  param_1[0x76] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_40);
  FUN_140456c70(local_158);
  param_1[0x77] = DAT_1469eb218;
  lVar11 = DAT_1469eb220;
  param_1[0x78] = DAT_1469eb220;
  if (lVar11 != 0) {
    LOCK();
    piVar2 = (int *)(lVar11 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  param_1[0x79] = DAT_1469eb218;
  lVar11 = DAT_1469eb220;
  param_1[0x7a] = DAT_1469eb220;
  if (lVar11 != 0) {
    LOCK();
    piVar2 = (int *)(lVar11 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  param_1[0x7b] = DAT_1469eb218;
  lVar11 = DAT_1469eb220;
  param_1[0x7c] = DAT_1469eb220;
  if (lVar11 != 0) {
    LOCK();
    piVar2 = (int *)(lVar11 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  local_198 = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_178,L"UNNAMED",L"DockTab",L"DefaultTabTitle");
  FText::FText(param_1 + 0x82,uVar12);
  *(undefined1 *)(param_1 + 0x85) = 1;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x97) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x40000000;
  *(undefined1 *)(param_1 + 0x98) = 1;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  uVar7 = uRam00000001468b5d84;
  uVar6 = uRam00000001468b5d80;
  uVar5 = uRam00000001468b5d7c;
  uVar4 = _DAT_1468b5d78;
  *(undefined1 *)(param_1 + 0x9e) = 1;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = uVar5;
  *(undefined4 *)(param_1 + 0x9d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar7;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FCurveSequence::FCurveSequence(param_1 + 0xa1);
  FCurveSequence::FCurveSequence(param_1 + 0xac);
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  return param_1;
}



// FUNCTION 141923430 FUN_141923430 body=605 status=ok
// SIG undefined FUN_141923430(void)

undefined8 * FUN_141923430(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d6db10;
  param_1[0x41] = &PTR_FUN_144d6dd18;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  FUN_1417efd90(param_1 + 0x45);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined2 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return param_1;
}



// FUNCTION 141923690 FUN_141923690 body=330 status=ok
// SIG undefined FUN_141923690(void)

undefined8 * FUN_141923690(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1417f46d0();
  *param_1 = &PTR_FUN_144d6d028;
  param_1[0x41] = &PTR_FUN_144d695d0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  param_1[0x49] = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x4a] = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  param_1[0x4b] = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29b) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x57) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x59) = DAT_1468b5d88._4_4_;
  param_1[0x5c] = param_1;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = &PTR_Count_144d6d000;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  return param_1;
}



// FUNCTION 1419237e0 FUN_1419237e0 body=505 status=ok
// SIG undefined FUN_1419237e0(void)

void FUN_1419237e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x500);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x498);
  if (*(char *)(param_1 + 0x48c) != '\0') {
    *(undefined1 *)(param_1 + 0x48c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x478);
  if (*(char *)(param_1 + 0x46c) != '\0') {
    *(undefined1 *)(param_1 + 0x46c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x458);
  if (*(char *)(param_1 + 0x44c) != '\0') {
    *(undefined1 *)(param_1 + 0x44c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x438);
  if (*(char *)(param_1 + 0x42c) != '\0') {
    *(undefined1 *)(param_1 + 0x42c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x418);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1000);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b8);
  plVar4 = *(longlong **)(param_1 + 0x370);
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
  plVar4 = *(longlong **)(param_1 + 0x360);
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
  plVar4 = *(longlong **)(param_1 + 0x350);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x328);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x318);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1419239e0 ~TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_> body=265 status=ok
// SIG undefined ~TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>(void)

void TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::
     ~TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar7 = lVar7 + 0x48;
    do {
      TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
      ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(lVar7 + 0x10);
      TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
      ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(lVar7);
      if (*(longlong *)(lVar7 + -0x10) != 0) {
        FMemory::Free();
      }
      TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
      ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(lVar7 + -0x20);
      plVar4 = *(longlong **)(lVar7 + -0x30);
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
      plVar4 = *(longlong **)(lVar7 + -0x40);
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
      lVar7 = lVar7 + 0x70;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141923af0 ~TArray<FTextLayout::FLineView,FDefaultAllocator> body=99 status=ok
// SIG undefined ~TArray<FTextLayout::FLineView,FDefaultAllocator>(void)

void TArray<FTextLayout::FLineView,FDefaultAllocator>::
     ~TArray<FTextLayout::FLineView,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar1 + 0x20);
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar1 + 0x10);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar1);
      lVar1 = lVar1 + 0x58;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 141923b60 ~TIndirectArray<FSimpleSlot,FDefaultAllocator> body=160 status=ok
// SIG undefined ~TIndirectArray<FSimpleSlot,FDefaultAllocator>(void)

void TIndirectArray<FSimpleSlot,FDefaultAllocator>::~TIndirectArray<FSimpleSlot,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = (undefined8 *)*plVar1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar2 + 10);
    FSlotBase::~FSlotBase(puVar2 + 2);
    *puVar2 = &PTR__purecall_143f48980;
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141923c00 ~TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> body=78 status=ok
// SIG undefined ~TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>(void)

void TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
     ~TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141923c50 ~TSparseArray<TSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=192 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_141923d10((longlong)local_1c * 0x78 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo(param_1,0)
    ;
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



// FUNCTION 141923d10 FUN_141923d10 body=142 status=ok
// SIG undefined FUN_141923d10(void)

void FUN_141923d10(longlong param_1)

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
  plVar4 = *(longlong **)(param_1 + 0x48);
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



// FUNCTION 141923da0 FUN_141923da0 body=507 status=ok
// SIG undefined FUN_141923da0(void)

void FUN_141923da0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x3a8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x390);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x378);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x360);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x348);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x330);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c8);
  plVar4 = *(longlong **)(param_1 + 0x2a8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x260);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x248);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x230);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  if (*(char *)(param_1 + 0x18c) != '\0') {
    *(undefined1 *)(param_1 + 0x18c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  if (*(char *)(param_1 + 0x16c) != '\0') {
    *(undefined1 *)(param_1 + 0x16c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  if (*(char *)(param_1 + 0x14c) != '\0') {
    *(undefined1 *)(param_1 + 0x14c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  if (*(char *)(param_1 + 300) != '\0') {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x118);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 141923fa0 FUN_141923fa0 body=697 status=ok
// SIG undefined FUN_141923fa0(void)

void FUN_141923fa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x45b) != '\0') {
    *(undefined1 *)(param_1 + 0x45b) = 0;
  }
  if (*(char *)(param_1 + 0x459) != '\0') {
    *(undefined1 *)(param_1 + 0x459) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x448);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1000);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x398);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x388);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x378);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x358);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x340);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x328);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x298);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x278);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 600);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  plVar4 = *(longlong **)(param_1 + 0x228);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f8);
  plVar4 = *(longlong **)(param_1 + 0x1d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  plVar4 = *(longlong **)(param_1 + 0x170);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 141924260 FUN_141924260 body=837 status=ok
// SIG undefined FUN_141924260(void)

void FUN_141924260(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x46b) != '\0') {
    *(undefined1 *)(param_1 + 0x46b) = 0;
  }
  if (*(char *)(param_1 + 0x469) != '\0') {
    *(undefined1 *)(param_1 + 0x469) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x458);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x388);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x370);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x358);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x340);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x328);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f0);
  plVar4 = *(longlong **)(param_1 + 0x2e8);
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
  plVar4 = *(longlong **)(param_1 + 0x2d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x290);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x278);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  plVar4 = *(longlong **)(param_1 + 0x230);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b0);
  plVar4 = *(longlong **)(param_1 + 0x1a0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  plVar4 = *(longlong **)(param_1 + 0x170);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1419245b0 FUN_1419245b0 body=1165 status=ok
// SIG undefined FUN_1419245b0(void)

void FUN_1419245b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x5f3) != '\0') {
    *(undefined1 *)(param_1 + 0x5f3) = 0;
  }
  if (*(char *)(param_1 + 0x5f1) != '\0') {
    *(undefined1 *)(param_1 + 0x5f1) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5c8);
  plVar4 = *(longlong **)(param_1 + 0x5b0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x598);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x570);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x548);
  plVar4 = *(longlong **)(param_1 + 0x538);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x508);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x498);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x488);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x478);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x468);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x458);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x448);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x438);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x428);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x418);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x408);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d0);
  plVar4 = *(longlong **)(param_1 + 0x3b0);
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
  plVar4 = *(longlong **)(param_1 + 0x3a0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x380);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x350);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x290);
  plVar4 = *(longlong **)(param_1 + 0x280);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  plVar4 = *(longlong **)(param_1 + 0x240);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  plVar4 = *(longlong **)(param_1 + 0x1f0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a8);
  plVar4 = *(longlong **)(param_1 + 400);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  plVar4 = *(longlong **)(param_1 + 0x160);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  plVar4 = *(longlong **)(param_1 + 0x130);
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
  plVar4 = *(longlong **)(param_1 + 0x120);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 141924a40 ~FBasicMathExpressionEvaluator body=460 status=ok
// SIG undefined ~FBasicMathExpressionEvaluator(void)

void FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  FUN_141626440(param_1 + 0x1f8,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  FUN_141626440(param_1 + 0x1a8,0);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  FUN_141626440((longlong *)(param_1 + 0x158),0);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141924c10 ~FLineModel body=183 status=ok
// SIG undefined ~FLineModel(void)

void FTextLayout::FLineModel::~FLineModel(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
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



// FUNCTION 141924cd0 FUN_141924cd0 body=168 status=ok
// SIG undefined FUN_141924cd0(void)

void FUN_141924cd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d6d328;
  FUN_140691580(param_1 + 0x11);
  plVar4 = (longlong *)param_1[0x10];
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
  FRunInfo::~FRunInfo(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_144d4f688;
  return;
}



// FUNCTION 141924d80 FUN_141924d80 body=355 status=ok
// SIG undefined FUN_141924d80(void)

void FUN_141924d80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_144d6cfb8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x24);
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)param_1[0x20];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar5 = (longlong *)param_1[0x1f];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar5 = (longlong *)param_1[0x1d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar5 = (longlong *)param_1[0x1b];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 7);
  TArray<FTextLayout::FLineView,FDefaultAllocator>::
  ~TArray<FTextLayout::FLineView,FDefaultAllocator>(param_1 + 5);
  TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>(param_1 + 3);
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 141924ef0 FUN_141924ef0 body=123 status=ok
// SIG undefined FUN_141924ef0(void)

void FUN_141924ef0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b8);
  plVar4 = *(longlong **)(param_1 + 0x2a8);
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
  FUN_1417f61f0(param_1 + 0x208);
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 141924f70 FUN_141924f70 body=678 status=ok
// SIG undefined FUN_141924f70(void)

void FUN_141924f70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d6db10;
  param_1[0x41] = &PTR_FUN_144d6dd18;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x93);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x90);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x89);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x87);
  plVar4 = (longlong *)param_1[0x86];
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
  plVar4 = (longlong *)param_1[0x84];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[0x82];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x7f);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x7c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x7a);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x76);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x74);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x71);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6e);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6b);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x65);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x62);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5f);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  plVar4 = (longlong *)param_1[0x56];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  plVar4 = (longlong *)param_1[0x4c];
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
  lVar5 = param_1[0x44];
  if (lVar5 != 0) {
    FUN_141965990(lVar5);
    FMemory::operator_delete(lVar5,0x790);
  }
  plVar4 = (longlong *)param_1[0x43];
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
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 141925220 FUN_141925220 body=979 status=ok
// SIG undefined FUN_141925220(void)

void FUN_141925220(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined8 local_48 [2];
  undefined1 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined2 local_20;
  
  *param_1 = &PTR_FUN_144d6d028;
  plVar3 = param_1 + 0x44;
  param_1[0x41] = &PTR_FUN_144d695d0;
  if ((*plVar3 != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = (longlong *)param_1[0x45];
      plVar6 = (longlong *)0x0;
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = (longlong *)*plVar3;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar6 + 0x38))(plVar6);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  if (plVar3 != local_58) {
    *plVar3 = 0;
    plVar3 = (longlong *)param_1[0x45];
    param_1[0x45] = 0;
    if (plVar3 != (longlong *)0x0) {
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
  local_60 = (longlong *)0x0;
  if (param_1 + 0x46 != &local_68) {
    param_1[0x46] = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x47,&local_60);
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if (param_1 + 0x42 != local_48) {
    param_1[0x42] = 0;
    plVar3 = (longlong *)param_1[0x43];
    param_1[0x43] = 0;
    if (plVar3 != (longlong *)0x0) {
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
  local_20._0_1_ = 0;
  local_38 = 0;
  local_20 = 0x100;
  *(undefined1 *)(param_1 + 0x54) = 0;
  local_20._1_1_ = 1;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (param_1 + 0x55 != &local_30) {
    param_1[0x55] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x56,&plStack_28);
  }
  plVar3 = plStack_28;
  *(undefined1 *)((longlong)param_1 + 0x2b9) = local_20._1_1_;
  *(undefined1 *)(param_1 + 0x57) = (undefined1)local_20;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_28 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_28 + 8))(plStack_28,1);
      }
    }
  }
  TIndirectArray<FSimpleSlot,FDefaultAllocator>::~TIndirectArray<FSimpleSlot,FDefaultAllocator>
            (param_1 + 0x5d);
  param_1[0x5b] = &PTR__purecall_143f48980;
  plVar3 = (longlong *)param_1[0x56];
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x29b) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x29b) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x51);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c);
  plVar3 = (longlong *)param_1[0x4b];
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x49];
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x47];
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x45];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = (longlong *)param_1[0x43];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 141925600 FUN_141925600 body=155 status=ok
// SIG undefined FUN_141925600(void)

void FUN_141925600(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x378);
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
  plVar4 = *(longlong **)(param_1 + 0x368);
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
  FUN_1418d2ce0(param_1);
  return;
}



// FUNCTION 1419256a0 FUN_1419256a0 body=237 status=ok
// SIG undefined FUN_1419256a0(void)

void FUN_1419256a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d8);
  plVar4 = *(longlong **)(param_1 + 0x3d0);
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
  plVar4 = *(longlong **)(param_1 + 0x3b8);
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
  plVar4 = *(longlong **)(param_1 + 0x3a8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x390);
  FUN_140691710(param_1);
  return;
}



// FUNCTION 141925790 ~SWidgetSwitcher body=192 status=ok
// SIG undefined ~SWidgetSwitcher(void)

void SWidgetSwitcher::~SWidgetSwitcher(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x230);
  *(undefined ***)(param_1 + 0x248) = &PTR__purecall_143f48980;
  plVar2 = (longlong *)*plVar1;
  for (iVar4 = *(int *)(param_1 + 0x238); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar3 = *plVar2;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x40);
    FSlotBase::~FSlotBase(lVar3);
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x220) = &PTR__purecall_143f48980;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 141925850 operator= body=108 status=ok
// SIG undefined operator=(void)

longlong TAttribute<FInputChord>::operator=(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FKey::operator=();
  *(uint *)(param_1 + 0x18) =
       *(uint *)(param_1 + 0x18) ^ (*(uint *)(param_1 + 0x18) ^ *(uint *)(param_2 + 0x18)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x18) ^ *(uint *)(param_1 + 0x18)) & 2 ^ *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x18) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x18) = uVar1;
  *(uint *)(param_1 + 0x18) = (*(uint *)(param_2 + 0x18) ^ uVar1) & 8 ^ uVar1;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1419258c0 FUN_1419258c0 body=139 status=ok
// SIG undefined FUN_1419258c0(void)

undefined1 * FUN_1419258c0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)(param_1 + 8);
  if ((longlong *)(param_2 + 8) != plVar1) {
    if ((*(int *)(param_2 + 0x10) != 0) &&
       (plVar2 = *(longlong **)(param_2 + 8), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return param_1;
}



// FUNCTION 141925950 operator= body=872 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FTextLayout::FLineModel::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  void *_Src;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = *param_2;
  uStack_80 = (longlong *)param_2[1];
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
    UNLOCK();
  }
  if (&local_88 != param_1) {
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uVar6 = *param_1;
    plVar5 = (longlong *)param_1[1];
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = (undefined4)uStack_80;
    uStack_5c = uStack_80._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
    local_88 = uVar6;
    uStack_80 = plVar5;
  }
  plVar5 = uStack_80;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_80 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*uStack_80 + 8))(uStack_80,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[3];
  puVar2 = param_1 + 2;
  uVar6 = param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_78 = uVar6;
  plStack_70 = plVar5;
  if (&local_78 != puVar2) {
    local_78 = *puVar2;
    plStack_70 = (longlong *)param_1[3];
    *puVar2 = uVar6;
    param_1[3] = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_70 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar5 = param_1 + 5;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (plVar5 != param_2 + 5) {
    iVar9 = *(int *)(param_1 + 6);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar5 + 0x10);
      do {
        if (plVar10[2] != 0) {
          FMemory::Free();
        }
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar7 = (longlong *)plVar10[-1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar10 = plVar10 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    local_98 = 0;
    TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FTextLayout::FRunModel,int>
              (plVar5,param_2[5],*(undefined4 *)(param_2 + 6),
               *(undefined4 *)((longlong)param_1 + 0x34));
  }
  puVar2 = param_1 + 7;
  if (puVar2 != param_2 + 7) {
    iVar9 = *(int *)(param_2 + 8);
    _Src = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar2,iVar9);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar9 * 0x28);
    }
  }
  plVar5 = param_1 + 9;
  if (plVar5 != param_2 + 9) {
    iVar9 = *(int *)(param_1 + 10);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar5 + 0x18);
      do {
        plVar7 = (longlong *)*plVar10;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar10 = plVar10 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    local_98 = 0;
    TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_>::CopyToEmpty<FTextRunRenderer,int>
              (plVar5,param_2[9],*(undefined4 *)(param_2 + 10),
               *(undefined4 *)((longlong)param_1 + 0x54));
  }
  plVar5 = param_1 + 0xb;
  if (plVar5 != param_2 + 0xb) {
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar5 + 0x18);
      do {
        plVar7 = (longlong *)*plVar10;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar10 = plVar10 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    local_98 = 0;
    TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_>::CopyToEmpty<FTextLineHighlight,int>
              (plVar5,param_2[0xb],*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)((longlong)param_1 + 100));
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 141925cc0 operator= body=88 status=ok
// SIG undefined operator=(void)

undefined1 * FPopupMethodReply::operator=(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 8);
  if ((undefined8 *)(param_1 + 8) != puVar1) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,param_2 + 0x10);
  }
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  return param_1;
}



// FUNCTION 141925d20 FUN_141925d20 body=120 status=ok
// SIG undefined FUN_141925d20(void)

undefined8 * FUN_141925d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar4 = param_2 + 6;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  if (param_1 + 6 != puVar4) {
    param_1[6] = *puVar4;
    *puVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,param_2 + 7);
  }
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  return param_1;
}



// FUNCTION 141925da0 operator== body=71 status=ok
// SIG undefined operator==(void)

ulonglong FSlateColor::operator==(float *param_1,float *param_2)

{
  ulonglong in_RAX;
  
  if ((((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) &&
     (param_2[3] == param_1[3])) {
    in_RAX = 0;
    if ((*(char *)(param_1 + 4) == *(char *)(param_2 + 4)) &&
       ((*(char *)(param_1 + 4) != '\x01' ||
        (in_RAX = *(ulonglong *)(param_2 + 6), *(ulonglong *)(param_1 + 6) == in_RAX)))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141925df0 operator() body=191 status=ok
// SIG undefined operator()(void)

void <lambda_0a68dc0a405486ed1d07269622e39ccb>::operator()(longlong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((int *)param_1[3])[1] - *(int *)param_1[3] < 1) || (0.0 < *(float *)(param_1[2] + 4))) {
    lVar4 = param_1[1];
    puVar2 = (undefined4 *)param_1[2];
    if (*(int *)(*param_1 + 0xc) < 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(int *)(lVar4 + 0x18) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x1c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar4 + 0x10,iVar1);
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x28);
      *(int *)(lVar4 + 0x28) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x2c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar4 + 0x20,iVar1);
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    lVar5 = (longlong)iVar1;
    *(undefined4 *)(lVar4 + lVar5 * 0x18) = *puVar2;
    *(undefined4 *)(lVar4 + 4 + lVar5 * 0x18) = puVar2[1];
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x18) = *(undefined8 *)(puVar2 + 2);
    lVar3 = *(longlong *)(puVar2 + 4);
    *(longlong *)(lVar4 + 0x10 + lVar5 * 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141925eb0 FUN_141925eb0 body=943 status=ok
// SIG undefined FUN_141925eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141925eb0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  undefined4 local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  undefined1 local_418;
  undefined1 local_410;
  longlong local_408;
  undefined1 local_3f8;
  undefined1 local_3f7;
  char local_3f6;
  undefined1 local_3f4 [4];
  longlong *local_3f0;
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  if (*(longlong *)(param_3 + 0x108) == DAT_1469eb218) {
    if (((*(int *)(param_3 + 0x180) == 0) || (*(longlong **)(param_3 + 0x178) == (longlong *)0x0))
       || (cVar6 = (**(code **)(**(longlong **)(param_3 + 0x178) + 0x18))(), cVar6 == '\0')) {
      uVar8 = TAttribute<FText>::Get(param_3 + 0x158);
      cVar6 = FText::IsEmpty(uVar8);
      if (cVar6 != '\0') goto LAB_141926223;
    }
    bVar11 = *(char *)(param_3 + 0x2f3) != '\0';
    if (bVar11) {
      local_3f8 = *(undefined1 *)(param_3 + 0x2f2);
    }
    uVar4 = local_3f8;
    local_3f6 = *(char *)(param_3 + 0x2f1);
    if (local_3f6 != '\0') {
      local_3f4[0] = *(undefined1 *)(param_3 + 0x2f0);
    }
    uVar5 = local_3f4[0];
    local_3f7 = bVar11;
    lVar9 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar9 + 0x108,param_3 + 0x158);
    *(undefined1 *)(lVar9 + 0x120) = *(undefined1 *)(param_3 + 0x170);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,param_3 + 0x178);
    *(undefined8 *)(lVar9 + 0x138) = *(undefined8 *)(param_3 + 0x120);
    if (local_3f4 != (undefined1 *)(lVar9 + 0x360)) {
      if (*(char *)(lVar9 + 0x361) != '\0') {
        *(undefined1 *)(lVar9 + 0x361) = 0;
      }
      if (local_3f6 != '\0') {
        *(undefined1 *)(lVar9 + 0x360) = uVar5;
        *(undefined1 *)(lVar9 + 0x361) = 1;
      }
    }
    if (&local_3f8 != (undefined1 *)(lVar9 + 0x362)) {
      if (*(char *)(lVar9 + 0x363) != '\0') {
        *(undefined1 *)(lVar9 + 0x363) = 0;
      }
      if (bVar11) {
        *(undefined1 *)(lVar9 + 0x362) = uVar4;
        *(undefined1 *)(lVar9 + 0x363) = 1;
      }
    }
    plVar10 = (longlong *)operator_new(0x660);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144043520;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar1 = plVar10 + 2;
    local_3f0 = plVar1;
    local_3e8 = plVar10;
    FUN_14044f790(&local_3f0,plVar1);
    local_448 = 0x650;
    SWidget::SetDebugInfo
              (plVar1,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SButton.cpp"
               ,0x1c);
    local_438 = *(undefined4 *)(lVar9 + 0x90);
    local_408 = lVar9 + 0xf8;
    local_420 = lVar9 + 0xe8;
    local_410 = *(undefined1 *)(lVar9 + 0xf1);
    local_428 = lVar9 + 200;
    local_430 = lVar9 + 0x98;
    local_418 = *(undefined1 *)(lVar9 + 0xf0);
    local_440 = lVar9 + 0x78;
    local_448 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar1,lVar9);
    if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar6 != '\0')
       ) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar10 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
      LOCK();
      plVar1 = plVar10 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    FUN_140691150(local_3d8);
  }
  else {
LAB_141926223:
    *param_2 = *(longlong *)(param_3 + 0x108);
    lVar9 = *(longlong *)(param_3 + 0x110);
    param_2[1] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 141926260 FUN_141926260 body=255 status=ok
// SIG undefined FUN_141926260(void)

longlong * FUN_141926260(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141930f60(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_141926324;
    }
  }
  bVar4 = 1;
LAB_141926324:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141926360 FUN_141926360 body=259 status=ok
// SIG undefined FUN_141926360(void)

longlong * FUN_141926360(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  (**(code **)(*(longlong *)*param_1 + 0x220))((longlong *)*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_141926428;
    }
  }
  bVar4 = 1;
LAB_141926428:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141926470 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SEditableTextBox::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419237e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 1419264c0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDockingTarget>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x548);
  }
  return param_1;
}



// FUNCTION 1419264f0 FUN_1419264f0 body=43 status=ok
// SIG undefined FUN_1419264f0(void)

undefined8 * FUN_1419264f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d8);
  }
  return param_1;
}



// FUNCTION 141926520 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SThrobber>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b8);
  }
  return param_1;
}



// FUNCTION 141926550 FUN_141926550 body=43 status=ok
// SIG undefined FUN_141926550(void)

undefined8 * FUN_141926550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 141926580 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SWaapiPickerRow>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 1419265b0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDPIScaler>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 1419265e0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<FSimpleSlot>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TIndirectArray<FSimpleSlot,FDefaultAllocator>::~TIndirectArray<FSimpleSlot,FDefaultAllocator>
            (param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141926630 `scalar_deleting_destructor' body=251 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDefaultLayoutBlock::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d6d2e8;
  plVar4 = (longlong *)param_1[0xb];
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
  plVar4 = (longlong *)param_1[8];
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
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_14410aec8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141926730 FUN_141926730 body=82 status=ok
// SIG undefined FUN_141926730(void)

undefined8 * FUN_141926730(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d6d5c0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141926790 FUN_141926790 body=265 status=ok
// SIG undefined FUN_141926790(void)

undefined8 * FUN_141926790(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d6d240;
  if (param_1[0x14] != 0) {
    thunk_FUN_1418554e0();
  }
  plVar4 = (longlong *)param_1[0x15];
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
  plVar4 = (longlong *)param_1[0x10];
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
  FRunInfo::~FRunInfo(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_144d4f688;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1419268a0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FParticleAnimTrailEmitterInstance::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d6d3d0;
  FUN_141924cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 1419268e0 FUN_1419268e0 body=43 status=ok
// SIG undefined FUN_1419268e0(void)

undefined8 * FUN_1419268e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141926910 FUN_141926910 body=105 status=ok
// SIG undefined FUN_141926910(void)

longlong FUN_141926910(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x340);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 800);
  *(undefined ***)(param_1 + 0x310) = &PTR__purecall_143f48980;
  FUN_140691580(param_1 + 0x130);
  FUN_141924d80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 141926980 FUN_141926980 body=52 status=ok
// SIG undefined FUN_141926980(void)

undefined8 FUN_141926980(undefined8 param_1,ulonglong param_2)

{
  FUN_141924cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 1419269c0 FUN_1419269c0 body=201 status=ok
// SIG undefined FUN_1419269c0(void)

undefined8 * FUN_1419269c0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0x20];
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
  plVar4 = (longlong *)param_1[0x19];
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
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141926a90 FUN_141926a90 body=313 status=ok
// SIG undefined FUN_141926a90(void)

undefined8 * FUN_141926a90(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d6d518;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x18);
  if (*(char *)((longlong)param_1 + 0xbc) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  }
  plVar4 = (longlong *)param_1[0x15];
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
  plVar4 = (longlong *)param_1[0x12];
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
  FRunInfo::~FRunInfo(param_1 + 5);
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_144d4f688;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141926bd0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SOverlay::FOverlaySlot::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141926c10 FUN_141926c10 body=52 status=ok
// SIG undefined FUN_141926c10(void)

undefined8 FUN_141926c10(undefined8 param_1,ulonglong param_2)

{
  FUN_141924d80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141926c50 FUN_141926c50 body=78 status=ok
// SIG undefined FUN_141926c50(void)

undefined8 FUN_141926c50(undefined8 param_1,ulonglong param_2)

{
  FUN_141924ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2c8);
  }
  return param_1;
}



// FUNCTION 141926ca0 FUN_141926ca0 body=78 status=ok
// SIG undefined FUN_141926ca0(void)

undefined8 FUN_141926ca0(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d2dd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x5f0);
  }
  return param_1;
}


