// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14183ae40 FUN_14183ae40 body=9 status=ok
// SIG undefined FUN_14183ae40(void)

undefined4 FUN_14183ae40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x344);
}



// FUNCTION 14183ae50 FUN_14183ae50 body=520 status=ok
// SIG undefined FUN_14183ae50(void)

longlong * FUN_14183ae50(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res20;
  
  ISlateStyle::Join(&local_res20);
  plVar4 = (longlong *)0x0;
  iVar3 = (int)((ulonglong)local_res20 >> 0x20);
  plVar8 = plVar4;
  if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
    lVar5 = *(longlong *)(param_1 + 600);
    if (*(longlong *)(param_1 + 600) == 0) {
      lVar5 = param_1 + 0x250;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)(iVar3 + (int)local_res20) &
                             (longlong)*(int *)(param_1 + 0x260) - 1U) * 4);
    if (iVar2 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x218);
      do {
        lVar9 = (longlong)iVar2;
        if (*(longlong *)(lVar5 + lVar9 * 0x18) == local_res20) {
          if ((iVar2 != -1) && (lVar5 = lVar5 + lVar9 * 0x18, lVar5 != 0)) {
            plVar7 = *(longlong **)(lVar5 + 8);
            bVar10 = plVar7 == (longlong *)0x0;
            plVar8 = plVar7;
            if (!bVar10) goto LAB_14183b048;
          }
          break;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar9 * 0x18);
      } while (iVar2 != -1);
    }
  }
  plVar6 = plVar4;
  if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
    lVar5 = *(longlong *)(param_1 + 0x348);
    if (*(longlong *)(param_1 + 0x348) == 0) {
      lVar5 = param_1 + 0x340;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)(iVar3 + (int)local_res20) &
                             (longlong)*(int *)(param_1 + 0x350) - 1U) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x308);
      do {
        lVar9 = (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar9 + lVar5) == local_res20) {
          if ((iVar3 != -1) && (lVar5 = (longlong)iVar3 * 0x20 + lVar5, lVar5 != 0)) {
            plVar6 = *(longlong **)(lVar5 + 8);
            plVar4 = *(longlong **)(lVar5 + 0x10);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
              UNLOCK();
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar9 + 0x18 + lVar5);
      } while (iVar3 != -1);
    }
  }
  plVar7 = plVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar4[1];
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar3 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          plVar7 = plVar8;
        }
        LOCK();
        plVar8 = plVar4 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
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
        break;
      }
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
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
  bVar10 = plVar7 == (longlong *)0x0;
LAB_14183b048:
  if (!bVar10) {
    param_4 = plVar7;
  }
  return param_4;
}



// FUNCTION 14183b060 FUN_14183b060 body=88 status=ok
// SIG undefined FUN_14183b060(void)

undefined8 * FUN_14183b060(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x570);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_14183b09f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_14183b09f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x568);
    }
  }
  return param_2;
}



// FUNCTION 14183b0c0 FUN_14183b0c0 body=538 status=ok
// SIG undefined FUN_14183b0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14183b0c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [288];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_2c8[0] = DAT_1464b9ee8;
  uVar6 = 0;
  local_1a0 = 0;
  bVar8 = false;
  local_198 = 0;
  local_190 = 0;
  uVar7 = uVar6;
  do {
    iVar5 = (int)uVar6;
    if (*(int *)(param_1 + 0x130) <= iVar5) break;
    lVar4 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar4 = param_1 + 8;
    }
    FUN_141801ed0(local_2c8,lVar4 + (longlong)iVar5 * 0x48);
    lVar4 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar4 = param_1 + 8;
    }
    lVar4 = *(longlong *)(lVar4 + 0x38 + uVar7);
    bVar8 = lVar4 == *param_3;
    uVar6 = (ulonglong)(iVar5 + 1);
    uVar7 = uVar7 + 0x48;
  } while (lVar4 != *param_3);
  if (bVar8) {
    local_2e8 = *(undefined8 *)(param_1 + 0x140);
    local_2e0 = *(longlong *)(param_1 + 0x148);
    if (local_2e0 != 0) {
      LOCK();
      *(int *)(local_2e0 + 8) = *(int *)(local_2e0 + 8) + 1;
      UNLOCK();
    }
    FUN_1417f3b10(param_2,&local_2e8,local_2c8);
    FUN_140456b10(local_2c0);
    plVar3 = (longlong *)param_3[1];
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
  }
  else {
    local_188[0] = DAT_1464b9ee8;
    local_60 = 0;
    local_58 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_50 = 0;
    FUN_1417f3b10(param_2,&local_2d8,local_188);
    FUN_140456b10(local_180);
    FUN_140456b10(local_2c0);
    plVar3 = (longlong *)param_3[1];
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
  }
  return param_2;
}



// FUNCTION 14183b310 FUN_14183b310 body=16 status=ok
// SIG undefined FUN_14183b310(void)

undefined8 * FUN_14183b310(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x368);
  return param_2;
}



// FUNCTION 14183b320 GetRectInScreen body=97 status=ok
// SIG undefined GetRectInScreen(void)

float * SWindow::GetRectInScreen(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x351) & 2) != 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = *(float *)(param_1 + 0x378);
    param_2[3] = *(float *)(param_1 + 0x37c);
    return param_2;
  }
  fVar1 = *(float *)(param_1 + 0x368);
  fVar2 = *(float *)(param_1 + 0x36c);
  fVar3 = *(float *)(param_1 + 0x378);
  *param_2 = fVar1;
  fVar4 = *(float *)(param_1 + 0x37c);
  param_2[1] = fVar2;
  param_2[2] = fVar1 + fVar3;
  param_2[3] = fVar2 + fVar4;
  return param_2;
}



// FUNCTION 14183b390 FUN_14183b390 body=402 status=ok
// SIG undefined FUN_14183b390(void)

undefined1 FUN_14183b390(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 uVar11;
  bool bVar12;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  puVar6 = (undefined8 *)*param_2;
  local_58 = (undefined8 *)0x0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_60 = (longlong *)puVar6[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    uVar3 = *(uint *)(local_60 + 1);
    bVar12 = uVar3 == 0;
    if (bVar12) {
      *(uint *)(local_60 + 1) = 0;
    }
    else {
      local_58 = (undefined8 *)(ulonglong)uVar3;
    }
    UNLOCK();
    while (!bVar12) {
      iVar4 = (int)local_58;
      LOCK();
      bVar12 = iVar4 == (int)local_60[1];
      if (bVar12) {
        *(int *)(local_60 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        local_58 = (undefined8 *)0x0;
        if (local_60 != (longlong *)0x0) {
          local_58 = (undefined8 *)*puVar6;
        }
        goto LAB_14183b412;
      }
      local_58 = (undefined8 *)0x0;
      LOCK();
      uVar3 = *(uint *)(local_60 + 1);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(local_60 + 1) = 0;
      }
      else {
        local_58 = (undefined8 *)(ulonglong)uVar3;
      }
      UNLOCK();
    }
    local_58 = (undefined8 *)0x0;
    local_60 = (longlong *)0x0;
  }
LAB_14183b412:
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_60);
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  lVar8 = *param_2;
  lVar9 = param_2[2];
  uVar5 = *(undefined4 *)(lVar8 + 0x10);
  local_48 = CONCAT44(uVar5,(int)lVar9);
  if (local_58 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar7 = *local_58;
    FreeTypeUtils::ApplySizeAndScale
              (uVar7,*(undefined4 *)(lVar8 + 0x14),*(undefined4 *)(lVar8 + 0x18));
    FUN_143c216b0(uVar7,(int)lVar9,uVar5);
    *(undefined2 *)(param_4 + 0x22) = 0;
    uVar11 = FSlateFontRenderer::GetRenderDataInternal
                       (param_1,&local_58,*(undefined4 *)(*param_2 + 0x18),param_3,param_4);
  }
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 14183b530 GetRenderDataInternal body=2101 status=ok
// SIG undefined GetRenderDataInternal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FSlateFontRenderer::GetRenderDataInternal
          (undefined8 *param_1,longlong *param_2,float param_3,int *param_4,undefined2 *param_5)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  byte *pbVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a8;
  longlong local_1a0;
  int *local_198;
  undefined8 local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  char local_178;
  int *local_170;
  undefined8 local_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  char local_150;
  undefined2 *local_148;
  longlong *local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_118 [12];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_138 = *(longlong *)*param_2;
  lVar18 = *(longlong *)(local_138 + 0x78);
  local_148 = param_5;
  fVar26 = (float)((int)ROUND((float)*param_4 * param_3 + (float)*param_4 * param_3 + 0.5) >> 1);
  local_1a0 = lVar18;
  local_140 = param_2;
  if (((fVar26 <= 0.0) && (DAT_1469eaf10 != 1)) || (*(int *)(lVar18 + 0x60) != 0x6f75746c)) {
    uVar16 = 0;
    uVar14 = 2;
    if (DAT_1464b9ee0 != 0) {
      uVar14 = uVar16;
    }
    FUN_143c23d20(lVar18,uVar14);
    puVar19 = (uint *)(lVar18 + 0x68);
    if (*(char *)(lVar18 + 0x82) != '\x02') {
      FUN_143c29300(local_118);
      FUN_143c28bf0(*(undefined8 *)*param_1,puVar19,local_118,4);
      puVar19 = local_118;
    }
    *(undefined4 *)(param_5 + 0xc) = 0;
    if ((*(int *)(param_5 + 0xe) < 0) && (*(int *)(param_5 + 0xe) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_5 + 8,0);
    }
    iVar12 = puVar19[1] * *puVar19 + *(int *)(param_5 + 0xc);
    *(int *)(param_5 + 0xc) = iVar12;
    if (*(int *)(param_5 + 0xe) < iVar12) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5 + 8);
    }
    if (*(int *)(param_5 + 0xc) != 0) {
      uVar14 = uVar16;
      if (*puVar19 != 0) {
        do {
          iVar12 = (int)uVar14;
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(int)(puVar19[1] * iVar12) + *(longlong *)(param_5 + 8)),
                     (void *)((ulonglong)(puVar19[2] * iVar12) + *(longlong *)(puVar19 + 4)),
                     (ulonglong)puVar19[1]);
          uVar14 = (ulonglong)(iVar12 + 1U);
        } while (iVar12 + 1U < *puVar19);
      }
      uVar8 = puVar19[6];
      lVar18 = local_1a0;
      if ((ushort)uVar8 != 0x100) {
        pcVar15 = *(char **)(param_5 + 8);
        uVar14 = (longlong)*(int *)(param_5 + 0xc);
        if (pcVar15 + *(int *)(param_5 + 0xc) < pcVar15) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          do {
            uVar16 = uVar16 + 1;
            *pcVar15 = *pcVar15 * (char)(0xff / (longlong)(int)((ushort)uVar8 - 1));
            pcVar15 = pcVar15 + 1;
          } while (uVar16 != uVar14);
        }
      }
    }
    *param_5 = (short)puVar19[1];
    param_5[1] = (short)*puVar19;
    if (puVar19 == local_118) {
      FUN_143c29290(*(undefined8 *)*param_1,puVar19);
    }
    fVar26 = 0.0;
  }
  else {
    local_b0 = &local_170;
    iVar12 = 0;
    local_1c8 = DAT_1468b5d88;
    uVar9 = local_1c8;
    local_1c8._4_4_ = (float)((ulonglong)DAT_1468b5d88 >> 0x20);
    fStack_154 = local_1c8._4_4_;
    fStack_15c = local_1c8._4_4_;
    local_160 = (float)DAT_1468b5d88;
    local_170 = (int *)0x0;
    local_168 = 0;
    local_150 = '\0';
    local_c8 = 0;
    uStack_c0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 3;
    local_b8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_d0 = <lambda_e990b5f6f9db8e903fa9bb37b00ab89d>::<lambda_invoker_cdecl>;
    local_1c8 = uVar9;
    fStack_158 = local_160;
    FUN_143c233d0(*(undefined8 *)*param_1,lVar18 + 0x98,&local_e8);
    local_188 = (float)DAT_1468b5d88;
    local_198 = (int *)0x0;
    local_190 = 0;
    local_178 = '\0';
    local_1a8 = 0;
    local_1c8._4_4_ = (float)((ulonglong)DAT_1468b5d88 >> 0x20);
    fStack_17c = local_1c8._4_4_;
    fStack_184 = local_1c8._4_4_;
    local_1c8 = 0;
    fStack_180 = local_188;
    if (0.0 < fVar26) {
      FUN_143c2a4b0(*(undefined8 *)*param_1,&local_1a8);
      local_1d8 = 0;
      FUN_143c2a8b0(local_1a8,(int)(fVar26 * 64.0),1,0);
      FUN_143c28990(lVar18,&local_1c8);
      FUN_143c29330(&local_1c8,local_1a8,0,0);
      local_b0 = &local_198;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 3;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_d0 = <lambda_e990b5f6f9db8e903fa9bb37b00ab89d>::<lambda_invoker_cdecl>;
      FUN_143c233d0(*(undefined8 *)*param_1,local_1c8 + 0x20,&local_e8);
    }
    local_1c0 = CONCAT44(fStack_15c,local_160);
    uStack_1b8 = CONCAT44(fStack_154,fStack_158);
    if (local_150 == '\0') {
      if (local_178 != '\0') {
        local_1c0 = CONCAT44(fStack_184,local_188);
        uStack_1b8 = CONCAT44(fStack_17c,fStack_180);
      }
    }
    else if (local_178 != '\0') {
      fVar25 = local_188;
      if (local_160 <= local_188) {
        fVar25 = local_160;
      }
      fVar7 = fStack_15c;
      if (fStack_184 < fStack_15c) {
        fVar7 = fStack_184;
      }
      local_1c0 = CONCAT44(fVar7,fVar25);
      if (fStack_158 < fStack_180) {
        uStack_1b8 = CONCAT44(fStack_154,fStack_180);
      }
      if (uStack_1b8._4_4_ < fStack_17c) {
        uStack_1b8 = CONCAT44(fStack_17c,(float)uStack_1b8);
      }
    }
    plVar6 = (longlong *)(param_5 + 8);
    local_130 = local_1c0;
    uStack_128 = uStack_1b8;
    *(undefined4 *)(param_5 + 0xc) = 0;
    iVar23 = (int)(uStack_1b8._4_4_ - local_1c0._4_4_);
    iVar17 = (int)((float)uStack_1b8 - (float)local_1c0) + 1;
    if ((*(int *)(param_5 + 0xe) < 0) && (*(int *)(param_5 + 0xe) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar6);
    }
    *param_5 = (short)iVar17;
    param_5[1] = (short)(iVar23 + 1);
    iVar22 = *(int *)(param_5 + 0xc);
    iVar24 = (iVar23 + 1) * iVar17;
    iVar11 = iVar22 + iVar24;
    *(int *)(param_5 + 0xc) = iVar11;
    if (*(int *)(param_5 + 0xe) < iVar11) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar22 + *plVar6),0,(longlong)iVar24);
    iVar22 = (int)(float)local_130;
    iVar11 = (int)local_130._4_4_;
    if (local_198 != local_198 + (longlong)(int)local_190 * 4) {
      piVar21 = local_198 + 2;
      do {
        iVar24 = iVar12;
        if (0 < *piVar21) {
          do {
            iVar13 = (((iVar23 + (iVar11 - piVar21[-1])) * iVar17 + piVar21[-2]) - iVar22) + iVar24;
            iVar24 = iVar24 + 1;
            *(char *)((longlong)iVar13 + *plVar6) = (char)piVar21[1];
          } while (iVar24 < *piVar21);
        }
        piVar1 = piVar21 + 2;
        piVar21 = piVar21 + 4;
      } while (piVar1 != local_198 + (longlong)(int)local_190 * 4);
    }
    if (fVar26 <= 0.0) {
      if (local_170 != local_170 + (longlong)(int)local_168 * 4) {
        piVar21 = local_170 + 2;
        do {
          iVar24 = iVar12;
          if (0 < *piVar21) {
            do {
              iVar13 = iVar24 + 1;
              *(char *)((longlong)
                        ((((iVar23 + (iVar11 - piVar21[-1])) * iVar17 + piVar21[-2]) - iVar22) +
                        iVar24) + *plVar6) = (char)piVar21[1];
              iVar24 = iVar13;
            } while (iVar13 < *piVar21);
          }
          piVar1 = piVar21 + 2;
          piVar21 = piVar21 + 4;
        } while (piVar1 != local_170 + (longlong)(int)local_168 * 4);
      }
    }
    else if (local_170 != local_170 + (longlong)(int)local_168 * 4) {
      piVar21 = local_170 + 2;
      do {
        iVar24 = iVar12;
        if (0 < *piVar21) {
          do {
            bVar2 = *(byte *)(piVar21 + 1);
            pbVar20 = (byte *)((longlong)
                               ((((iVar23 + (iVar11 - piVar21[-1])) * iVar17 + piVar21[-2]) - iVar22
                                ) + iVar24) + *plVar6);
            if ((char)param_4[1] == '\0') {
              bVar10 = 0xff;
              if (bVar2 != 0xff) {
                bVar10 = *pbVar20;
              }
            }
            else {
              bVar10 = 0;
              if (bVar2 != 0) {
                bVar10 = (byte)((int)((uint)*pbVar20 - (uint)bVar2) >> 0x1f);
                bVar10 = ((byte)((uint)*pbVar20 - (uint)bVar2) ^ bVar10) - bVar10;
              }
            }
            iVar24 = iVar24 + 1;
            *pbVar20 = bVar10;
          } while (iVar24 < *piVar21);
        }
        piVar1 = piVar21 + 2;
        piVar21 = piVar21 + 4;
      } while (piVar1 != local_170 + (longlong)(int)local_168 * 4);
    }
    FUN_143c2a080(local_1a8);
    FUN_143c28950(local_1c8);
    lVar18 = local_1a0;
    iVar17 = 2;
    if (DAT_1464b9ee0 != 0) {
      iVar17 = iVar12;
    }
    FUN_143c23d20(local_1a0,iVar17);
    if (local_198 != (int *)0x0) {
      FMemory::Free();
    }
    param_5 = local_148;
    if (local_170 != (int *)0x0) {
      FMemory::Free();
      param_5 = local_148;
    }
  }
  plVar6 = local_140;
  *(int *)(param_5 + 0x12) = (int)local_140[2];
  *(byte *)(param_5 + 0x14) = (byte)(*(uint *)(local_138 + 8) >> 6) & 1;
  lVar3 = *(longlong *)*local_140;
  if ((char)((longlong *)*local_140)[0x20] == '\0') {
    iVar12 = *(int *)(*(longlong *)(lVar3 + 0x80) + 0x2c);
  }
  else {
    iVar12 = FUN_143c22100(*(int *)(lVar3 + 100) - *(int *)(lVar3 + 0x5c),
                           *(undefined4 *)(*(longlong *)(lVar3 + 0x80) + 0x20));
  }
  param_5[0x10] =
       (short)(int)((float)((int)ROUND((float)iVar12 * 0.015625 + (float)iVar12 * 0.015625 + 0.5) >>
                           1) * param_3);
  plVar4 = (longlong *)*plVar6;
  lVar3 = *plVar4;
  lVar5 = *(longlong *)(lVar3 + 0x80);
  if ((char)plVar4[0x20] == '\0') {
    iVar12 = *(int *)(lVar5 + 0x24);
  }
  else {
    iVar12 = FUN_143c22100(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar5 + 0x20));
  }
  param_5[3] = (short)(int)((float)((int)ROUND((float)iVar12 * 0.015625 + (float)iVar12 * 0.015625 +
                                               0.5) >> 1) * param_3);
  plVar6 = (longlong *)*plVar6;
  lVar3 = *plVar6;
  lVar5 = *(longlong *)(lVar3 + 0x80);
  if ((char)plVar6[0x20] == '\0') {
    iVar12 = *(int *)(lVar5 + 0x28);
  }
  else {
    iVar12 = FUN_143c22100(*(undefined4 *)(lVar3 + 0x5c),*(undefined4 *)(lVar5 + 0x20));
  }
  param_5[4] = (short)(int)((float)((int)ROUND((float)iVar12 * 0.015625 + (float)iVar12 * 0.015625 +
                                               0.5) >> 1) * param_3);
  fVar25 = (float)*(int *)(lVar18 + 0x58) * 0.015625;
  param_5[2] = (short)((int)ROUND(fVar25 + fVar25 + 0.5) >> 1);
  param_5[6] = *(undefined2 *)(lVar18 + 0x90);
  iVar12 = (int)((float)*(int *)(lVar18 + 0x94) + fVar26);
  param_5[5] = (short)iVar12;
  return CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1);
}



// FUNCTION 14183bd70 GetResourceHandle body=453 status=ok
// SIG undefined GetResourceHandle(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong **
FSlateShaderResourceManager::GetResourceHandle
          (longlong *param_1,longlong **param_2,undefined8 param_3)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar5 = (**(code **)(*param_1 + 8))(param_1,param_3);
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  if (lVar5 != 0) {
    pplVar1 = (longlong **)(lVar5 + 0x20);
    if (*(longlong *)(lVar5 + 0x20) == 0) {
      plVar6 = (longlong *)operator_new(8);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *plVar6 = lVar5;
      }
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)&PTR_FUN_144d50338;
        plVar7[2] = (longlong)plVar6;
      }
      local_58 = plVar6;
      local_50 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_58,plVar6,plVar6);
      if (pplVar1 != &local_58) {
        *pplVar1 = plVar6;
        local_58 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x28,&local_50);
        plVar7 = local_50;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    plVar6 = *(longlong **)(lVar5 + 0x28);
    plVar7 = *pplVar1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_68 = plVar7;
    plStack_60 = plVar6;
    if (&local_68 != param_2) {
      local_68 = *param_2;
      plStack_60 = param_2[1];
      *param_2 = plVar7;
      param_2[1] = plVar6;
      local_48 = plVar7;
      plStack_40 = plVar6;
    }
    plVar6 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_60 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14183bf40 FUN_14183bf40 body=339 status=ok
// SIG undefined FUN_14183bf40(void)

longlong FUN_14183bf40(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong local_38 [2];
  longlong local_28 [2];
  
  if (param_1[1] == 0) {
    return *param_1;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar3 == 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      return 0;
    }
    puVar4 = (undefined8 *)FName::ToString(param_1 + 1,local_38);
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    uVar5 = UObject::GetPrivateStaticClass();
    lVar3 = FUN_141799410(uVar5,0,puVar6,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (*param_1 == 0) {
      puVar4 = (undefined8 *)FName::ToString(param_1 + 1,local_28);
      if (*(int *)(puVar4 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar4;
      }
      uVar5 = UObject::GetPrivateStaticClass();
      lVar3 = FUN_141799c90(uVar5,0,puVar7,0,0,0,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    FWeakObjectPtr::operator=(param_1 + 2,lVar3);
  }
  return lVar3;
}



// FUNCTION 14183c0a0 GetResources body=200 status=ok
// SIG undefined GetResources(void)

void FButtonStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x118;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1a0;
  return;
}



// FUNCTION 14183c170 GetResources body=395 status=ok
// SIG undefined GetResources(void)

void FCheckBoxStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x98;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x120;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1a8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x230;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2b8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x340;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x3c8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x450;
  return;
}



// FUNCTION 14183c310 GetResources body=138 status=ok
// SIG undefined GetResources(void)

void FComboButtonStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x308;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x280;
                    /* WARNING: Could not recover jumptable at 0x00014183c396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 8))((longlong *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14183c3a0 GetResources body=370 status=ok
// SIG undefined GetResources(void)

void FDockTabStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x280;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x308;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x390;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x418;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x4a0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x528;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x5b0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x638;
  return;
}



// FUNCTION 14183c520 GetResources body=216 status=ok
// SIG undefined GetResources(void)

void FEditableTextBoxStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x118;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1a0;
                    /* WARNING: Could not recover jumptable at 0x00014183c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 800) + 8))((longlong *)(param_1 + 800),param_2);
  return;
}



// FUNCTION 14183c600 GetResources body=125 status=ok
// SIG undefined GetResources(void)

void FEditableTextStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x80;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 400;
  return;
}



// FUNCTION 14183c680 GetResources body=122 status=ok
// SIG undefined GetResources(void)

void FExpandableAreaStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  return;
}



// FUNCTION 14183c700 GetResources body=119 status=ok
// SIG undefined GetResources(void)

void FHeaderRowStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 8))((longlong *)(param_1 + 0x4d8),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x9a8) + 8))((longlong *)(param_1 + 0x9a8),param_2);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xac0;
  return;
}



// FUNCTION 14183c780 GetResources body=54 status=ok
// SIG undefined GetResources(void)

void FHyperlinkStyle::GetResources(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014183c7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x280) + 8))((longlong *)(param_1 + 0x280),param_2);
  return;
}



// FUNCTION 14183c7c0 GetResources body=54 status=ok
// SIG undefined GetResources(void)

void FInlineEditableTextBlockStyle::GetResources(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014183c7f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x7f8) + 8))((longlong *)(param_1 + 0x7f8),param_2);
  return;
}



// FUNCTION 14183c800 GetResources body=70 status=ok
// SIG undefined GetResources(void)

void FInlineTextImageStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  return;
}



// FUNCTION 14183c850 GetResources body=161 status=ok
// SIG undefined GetResources(void)

void FProgressBarStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x118;
  return;
}



// FUNCTION 14183c900 GetResources body=395 status=ok
// SIG undefined GetResources(void)

void FScrollBarStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x118;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1a0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x228;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2b0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x338;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x3c0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x448;
  return;
}



// FUNCTION 14183ca90 GetResources body=214 status=ok
// SIG undefined GetResources(void)

void FSearchBoxStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x848;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x8d0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x958;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x9e0;
  return;
}



// FUNCTION 14183cb70 GetResources body=848 status=ok
// SIG undefined GetResources(void)

void FSlateStyleSet::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar7 = 0;
  local_50 = (longlong *)(param_1 + 0x218);
  local_88 = (void *)0x0;
  puStack_40 = (uint *)(param_1 + 0x228);
  local_80 = 0;
  iVar1 = *(int *)(param_1 + 0x240);
  local_78._0_4_ = 0;
  local_78._4_4_ = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar10 = puStack_40;
    }
    uVar2 = *puVar10;
    while (uVar2 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar9 = (int)local_78 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78._0_4_ = iVar9;
      if (bVar4) goto LAB_14183cc5a;
      uVar2 = puVar10[lVar6 + 1];
    }
    local_78._4_4_ = -uVar2 & uVar2;
    iVar9 = 0x1f;
    if (local_78._4_4_ != 0) {
      for (; local_78._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_78._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_68._4_4_ = (uStack_60 - iVar9) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_14183cc5a:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  iStack_30 = uStack_60;
  iStack_48 = (int)local_78;
  uStack_44 = local_78._4_4_;
  iStack_70 = (int)local_78;
  uStack_6c = local_78._4_4_;
  local_58 = uStack_60;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar4 = local_68._4_4_ < iVar1;
  local_78 = local_50;
  local_68 = puStack_40;
  if (bVar4) {
    while( true ) {
      iVar1 = iStack_5c;
      uVar5 = local_80;
      lVar8 = (longlong)(int)local_80;
      lVar6 = *local_78;
      iVar9 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar9);
      if (iVar7 < iVar9) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_88,uVar5 & 0xffffffff);
      }
      *(undefined8 *)((longlong)local_88 + lVar8 * 8) =
           *(undefined8 *)(lVar6 + 8 + (longlong)iVar1 * 0x18);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      if ((int)local_68[6] <= iStack_5c) break;
      iVar7 = local_80._4_4_;
    }
  }
  local_50 = (longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x58);
  puStack_40 = (uint *)(param_1 + 0x40);
  local_78._0_4_ = 0;
  local_78._4_4_ = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar10 = puStack_40;
    }
    uVar2 = *puVar10;
    while (uVar2 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = (int)local_78 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78._0_4_ = iVar7;
      if (bVar4) goto LAB_14183cdc9;
      uVar2 = puVar10[lVar6 + 1];
    }
    local_78._4_4_ = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (local_78._4_4_ != 0) {
      for (; local_78._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_78._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_14183cdc9:
      local_68._4_4_ = iVar1;
    }
  }
  iStack_48 = (int)local_78;
  uStack_44 = local_78._4_4_;
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  iStack_30 = uStack_60;
  iStack_2c = iStack_5c;
  iStack_70 = (int)local_78;
  uStack_6c = local_78._4_4_;
  local_58 = uStack_60;
  iStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar4 = local_68._4_4_ < iVar1;
  local_78 = local_50;
  local_68 = puStack_40;
  if (bVar4) {
    do {
      plVar3 = *(longlong **)((longlong)iStack_5c * 0x20 + 8 + *local_78);
      (**(code **)(*plVar3 + 8))(plVar3,&local_88);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  iVar1 = (int)local_80;
  lVar6 = (longlong)(int)local_80;
  if ((int)local_80 != 0) {
    iVar7 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < (int)local_80 + iVar7) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar7 = (int)param_2[1];
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)iVar7 * 8),local_88,lVar6 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14183cec0 GetResources body=239 status=ok
// SIG undefined GetResources(void)

void FSpinBoxStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x118;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1a0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x228;
  return;
}



// FUNCTION 14183cfb0 GetResources body=512 status=ok
// SIG undefined GetResources(void)

void FTableRowStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x90;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x118;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1a0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x228;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2b0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x338;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x3c0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x448;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x520;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x5a8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x630;
  return;
}



// FUNCTION 14183d1b0 GetResources body=125 status=ok
// SIG undefined GetResources(void)

void FTextBlockStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xd0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x158;
  return;
}



// FUNCTION 14183d230 GetResources body=253 status=ok
// SIG undefined GetResources(void)

void FVolumeControlStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x238;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2c0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x348;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x3d0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x458;
  return;
}



// FUNCTION 14183d330 GetResources body=395 status=ok
// SIG undefined GetResources(void)

void FWindowStyle::GetResources(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 0x280) + 8))((longlong *)(param_1 + 0x280),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x4f8) + 8))((longlong *)(param_1 + 0x4f8),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x770) + 8))((longlong *)(param_1 + 0x770),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x9e8) + 8))((longlong *)(param_1 + 0x9e8),param_2);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xbc8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc50;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xcd8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xe38;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xd88;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xec0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xf48;
  return;
}



// FUNCTION 14183d4c0 FUN_14183d4c0 body=398 status=ok
// SIG undefined FUN_14183d4c0(void)

void FUN_14183d4c0(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  fVar6 = (float)DAT_1468b5d88;
  fVar5 = DAT_1468b5d88._4_4_;
  if (((float)DAT_1468b5d88 == 0.0) && (DAT_1468b5d88._4_4_ == 0.0)) {
    local_d0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_c8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FDisplayMetrics::RebuildDisplayMetrics(&local_d8);
    fVar6 = (float)local_d8;
    fVar5 = (float)local_d4;
    FUN_141189610(&local_d0);
  }
  local_d0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = 0;
  FDisplayMetrics::RebuildDisplayMetrics(&local_d8);
  fVar1 = (float)local_98;
  fVar2 = (float)uStack_90;
  fVar4 = (2.0 / (float)local_d4) * uStack_90._4_4_;
  fVar3 = (2.0 / (float)local_d4) * local_98._4_4_;
  FUN_141189610(&local_d0);
  *param_2 = fVar1 * (2.0 / (float)local_d8) * fVar6 * 0.5;
  param_2[2] = fVar2 * (2.0 / (float)local_d8) * fVar6 * 0.5;
  param_2[1] = fVar3 * fVar5 * 0.5;
  param_2[3] = fVar4 * fVar5 * 0.5;
  return;
}



// FUNCTION 14183d650 GetSequenceTime body=180 status=ok
// SIG undefined GetSequenceTime(void)

float FCurveSequence::GetSequenceTime(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x54);
  if ((bVar1 & 4) == 0) {
    plVar2 = DAT_1469eaf38;
    dVar3 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
    bVar1 = *(byte *)((longlong)param_1 + 0x54);
  }
  else {
    dVar3 = (double)param_1[9];
    plVar2 = param_1;
  }
  if ((bVar1 & 1) == 0) {
    dVar3 = dVar3 - (double)param_1[8];
  }
  else {
    dVar3 = (double)*(float *)(param_1 + 10) - (dVar3 - (double)param_1[8]);
  }
  fVar5 = (float)dVar3;
  if ((bVar1 & 2) != 0) {
    fVar4 = *(float *)(param_1 + 10);
    if (ABS(fVar4) <= 1e-08) {
      AK::MemoryMgr::StartProfileThreadUsage((long)plVar2);
      return 0.0;
    }
    fVar4 = (float)(int)(fVar5 / fVar4) * fVar4;
    if (ABS(fVar5) < ABS(fVar4)) {
      fVar4 = fVar5;
    }
    fVar5 = fVar5 - fVar4;
  }
  return fVar5;
}



// FUNCTION 14183d710 FUN_14183d710 body=1171 status=ok
// SIG undefined FUN_14183d710(void)

longlong * FUN_14183d710(longlong param_1,longlong *param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined2 uVar3;
  void *_Src;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  size_t _Size;
  bool bVar11;
  longlong *local_f8;
  longlong *local_f0;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined2 local_d6;
  undefined2 uStack_d4;
  void *local_d0;
  ulonglong local_c8;
  undefined2 local_c0;
  undefined2 local_be;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_7c [4];
  ulonglong local_78;
  undefined1 *local_70;
  longlong **local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  iVar6 = *param_4;
  local_e4 = iVar6;
  cVar4 = IsInActualRenderingThread();
  if (cVar4 == '\0') {
    bVar5 = 1;
  }
  else {
    cVar4 = IsInRenderingThread();
    bVar5 = -(cVar4 != '\0') & 2;
  }
  plVar8 = (longlong *)0x0;
  local_78 = (ulonglong)(bVar5 != 1);
  plVar7 = plVar8;
  if (0 < iVar6) {
    plVar7 = (longlong *)0x2;
  }
  lVar9 = (longlong)plVar7 + local_78;
  plVar7 = (longlong *)param_3[lVar9 * 2 + 6];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar7[1];
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(plVar7 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar6 == (int)plVar7[1];
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar7 != (longlong *)0x0) {
          plVar10 = (longlong *)param_3[lVar9 * 2 + 5];
          if (plVar10 != (longlong *)0x0) {
            lVar9 = plVar10[1];
            *param_2 = *plVar10;
            *(int *)(param_2 + 1) = (int)lVar9;
            *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)((longlong)plVar10 + 0xc);
            LOCK();
            plVar8 = plVar7 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 != 1) {
              return param_2;
            }
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 != 1) {
              return param_2;
            }
            lVar9 = *plVar7;
            goto LAB_14183db7d;
          }
          LOCK();
          plVar10 = plVar7 + 1;
          lVar2 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  FUN_1417ed740(local_60,*param_3,*(undefined4 *)(param_3 + 2),param_4);
  FUN_14182e8b0(param_1 + 0x90,&local_e8,local_60);
  plVar7 = plVar8;
  if (local_e8 != -1) {
    plVar7 = (longlong *)((longlong)local_e8 * 0x40 + *(longlong *)(param_1 + 0x90));
  }
  plVar10 = plVar7 + 5;
  if (plVar7 == (longlong *)0x0) {
    plVar10 = plVar8;
  }
  if (plVar10 != (longlong *)0x0) {
    param_3[lVar9 * 2 + 5] = *plVar10;
    plVar7 = (longlong *)plVar10[1];
    plVar8 = (longlong *)param_3[lVar9 * 2 + 6];
    if (plVar7 != plVar8) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)param_3[lVar9 * 2 + 6];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      param_3[lVar9 * 2 + 6] = plVar7;
    }
    plVar10 = (longlong *)*plVar10;
    lVar9 = plVar10[1];
    *param_2 = *plVar10;
    *(int *)(param_2 + 1) = (int)lVar9;
    *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)((longlong)plVar10 + 0xc);
    goto LAB_14183db62;
  }
  plVar7 = (longlong *)operator_new(0xe);
  local_f8 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    *(undefined4 *)(plVar7 + 1) = 0;
    *(undefined2 *)((longlong)plVar7 + 0xc) = 0;
    local_f8 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  local_f0 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_FUN_144d503a8;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)local_f8;
    local_f0 = plVar7;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
  plVar7 = local_f8;
  local_e0 = 0;
  uStack_dc = 0;
  local_d6 = 0;
  uStack_d4 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  cVar4 = FUN_14183b390(*(undefined8 *)(param_1 + 0x30),param_3,param_4,&local_e0);
  _Src = local_d0;
  uVar3 = uStack_d4;
  if (cVar4 == '\0') {
LAB_14183da54:
    cVar4 = '\0';
  }
  else {
    _Size = (size_t)(int)local_c8;
    local_b0 = CONCAT26(uStack_da,CONCAT24(uStack_dc,local_e0));
    local_a8 = CONCAT22(local_d6,uStack_d8);
    local_a4 = uStack_d4;
    local_a0 = (void *)0x0;
    local_98 = (int)local_c8;
    if ((int)local_c8 == 0) {
      local_94 = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_a0,local_c8 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_a0,_Src,_Size);
    }
    local_90 = local_c0;
    local_8e = local_be;
    local_8c = local_bc;
    local_88 = local_b8;
    cVar4 = FUN_141800790(param_1,&local_b0,(longlong)plVar7 + 0xc,(longlong)plVar7 + 4,
                          (longlong)plVar7 + 6,plVar7 + 1,(longlong)plVar7 + 10);
    if (cVar4 == '\0') goto LAB_14183da54;
    cVar4 = '\x01';
  }
  *(char *)((longlong)plVar7 + 0xd) = cVar4;
  if (cVar4 != '\0') {
    *(undefined2 *)plVar7 = local_d6;
    *(undefined2 *)((longlong)plVar7 + 2) = uVar3;
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  plVar7 = local_f0;
  if (*(char *)((longlong)local_f8 + 0xd) != '\0') {
    if (0 < local_e4) {
      plVar8 = (longlong *)0x2;
    }
    lVar9 = (longlong)plVar8 + local_78;
    param_3[lVar9 * 2 + 5] = local_f8;
    plVar8 = (longlong *)param_3[lVar9 * 2 + 6];
    if (local_f0 != plVar8) {
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_f0 + 0xc) = *(int *)((longlong)local_f0 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)param_3[lVar9 * 2 + 6];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      param_3[lVar9 * 2 + 6] = plVar7;
    }
    local_70 = local_60;
    local_68 = &local_f8;
    FUN_1417df520(param_1 + 0x90,local_7c,&local_70,0);
  }
  plVar7 = local_f0;
  lVar9 = local_f8[1];
  *param_2 = *local_f8;
  *(int *)(param_2 + 1) = (int)lVar9;
  *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)((longlong)local_f8 + 0xc);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_f0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
LAB_14183db62:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (local_58 != (longlong *)0x0)) {
      lVar9 = *local_58;
      plVar7 = local_58;
LAB_14183db7d:
      (**(code **)(lVar9 + 8))(plVar7,1);
    }
  }
  return param_2;
}



// FUNCTION 14183dbb0 FUN_14183dbb0 body=16 status=ok
// SIG undefined FUN_14183dbb0(void)

undefined8 * FUN_14183dbb0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x378);
  return param_2;
}



// FUNCTION 14183dbc0 GetSizeLimits body=107 status=ok
// SIG undefined GetSizeLimits(void)

undefined4 * SWindow::GetSizeLimits(longlong param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_1 + 0x47c) != '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x478);
    *(undefined1 *)(param_2 + 1) = 1;
  }
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(char *)(param_1 + 0x484) != '\0') {
    param_2[2] = *(undefined4 *)(param_1 + 0x480);
    *(undefined1 *)(param_2 + 3) = 1;
  }
  *(undefined1 *)(param_2 + 5) = 0;
  if (*(char *)(param_1 + 0x48c) != '\0') {
    param_2[4] = *(undefined4 *)(param_1 + 0x488);
    *(undefined1 *)(param_2 + 5) = 1;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  if (*(char *)(param_1 + 0x494) != '\0') {
    param_2[6] = *(undefined4 *)(param_1 + 0x490);
    *(undefined1 *)(param_2 + 7) = 1;
  }
  return param_2;
}



// FUNCTION 14183dc30 FUN_14183dc30 body=520 status=ok
// SIG undefined FUN_14183dc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14183dc30(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469ee710) && (_Init_thread_header(&DAT_1469ee710), DAT_1469ee710 == -1))
  {
    DAT_1469ee6f8 = 2;
    _DAT_1469ee6e8 = 0x3f800000;
    _DAT_1469ee6f0 = 0x3f8000003f800000;
    _DAT_1469ee700 = 0;
    DAT_1469ee708 = 0;
    atexit(FUN_143e83070);
    _Init_thread_footer(&DAT_1469ee710);
  }
  ISlateStyle::Join(&local_res8,param_3,param_4);
  plVar6 = (longlong *)0x0;
  iVar2 = (int)((ulonglong)local_res8 >> 0x20);
  if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar3 = param_1 + 0x1a8;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)(iVar2 + (int)local_res8) &
                             (longlong)*(int *)(param_1 + 0x1b8) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x170));
        if (*plVar4 == local_res8) {
          if (iVar1 != -1) goto LAB_14183dd01;
          break;
        }
        iVar1 = (int)plVar4[6];
      } while (iVar1 != -1);
    }
  }
  plVar4 = plVar6;
LAB_14183dd01:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
      lVar3 = *(longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar3 = param_1 + 0x158;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)(iVar2 + (int)local_res8) &
                               (longlong)*(int *)(param_1 + 0x168) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x120));
          if (*plVar4 == local_res8) {
            if (iVar2 != -1) goto LAB_14183dd92;
            break;
          }
          iVar2 = (int)plVar4[3];
        } while (iVar2 != -1);
      }
    }
    plVar4 = plVar6;
LAB_14183dd92:
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = plVar6;
    }
    if (plVar5 != (longlong *)0x0) {
      lVar3 = plVar5[1];
      *param_2 = *plVar5;
      param_2[1] = lVar3;
      *(undefined1 *)(param_2 + 2) = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      return param_2;
    }
    plVar5 = (longlong *)&DAT_1469ee6e8;
  }
  FUN_1417ee5f0(param_2,plVar5);
  return param_2;
}



// FUNCTION 14183de50 GetSmallIcon body=89 status=ok
// SIG undefined GetSmallIcon(void)

void FSlateIcon::GetSmallIcon(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)GetStyleSet();
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    uVar3 = FUN_14183ac90();
                    /* WARNING: Could not recover jumptable at 0x00014183de97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x48))(plVar2,*(undefined8 *)(param_1 + 0x10),0,uVar3);
    return;
  }
  FUN_14183ac90();
  return;
}



// FUNCTION 14183deb0 GetSound body=178 status=ok
// SIG undefined GetSound(void)

undefined * FSlateStyleSet::GetSound(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong local_res8 [4];
  
  ISlateStyle::Join(local_res8);
  if (*(int *)(param_1 + 0x270) != *(int *)(param_1 + 0x29c)) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar2 = param_1 + 0x2a0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)
                              ((int)((ulonglong)local_res8[0] >> 0x20) + (int)local_res8[0]) &
                             (longlong)*(int *)(param_1 + 0x2b0) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar3 = (undefined *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar1 * 0x28);
        if (*(longlong *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar1 * 0x28) == local_res8[0])
        {
          if (iVar1 != -1) goto LAB_14183df43;
          break;
        }
        iVar1 = *(int *)(puVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  puVar3 = (undefined *)0x0;
LAB_14183df43:
  puVar4 = puVar3 + 8;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  puVar3 = &DAT_1464b9f18;
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  return puVar3;
}



// FUNCTION 14183df70 GetStyleSet body=181 status=ok
// SIG undefined GetStyleSet(void)

undefined8 FSlateIcon::GetStyleSet(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (((int)*param_1 != 0) || (*(int *)((longlong)param_1 + 4) != 0)) {
    lVar3 = *param_1;
    if (DAT_1464b9f48 != DAT_1464b9f74) {
      puVar4 = DAT_1464b9f80;
      if (DAT_1464b9f80 == (undefined *)0x0) {
        puVar4 = &DAT_1464b9f78;
      }
      iVar2 = *(int *)(puVar4 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                (longlong)DAT_1464b9f88 - 1U) * 4);
      while (iVar2 != -1) {
        lVar1 = (longlong)iVar2 * 0x18;
        if (*(longlong *)(lVar1 + DAT_1464b9f40) == lVar3) {
          puVar6 = (undefined8 *)(lVar1 + DAT_1464b9f40);
          if (iVar2 != -1) goto LAB_14183e00d;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + DAT_1464b9f40);
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_14183e00d:
    puVar5 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      return *puVar5;
    }
  }
  return 0;
}



// FUNCTION 14183e030 GetSubSequence body=359 status=ok
// SIG undefined GetSubSequence(void)

undefined8 *
FShapedGlyphSequence::GetSubSequence(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int local_48;
  int local_44;
  code **local_40;
  code *local_38;
  undefined8 **local_30;
  code *local_28;
  undefined8 **local_20;
  
  puVar5 = (undefined8 *)0x0;
  iVar6 = param_4 - param_3;
  local_38 = (code *)0x0;
  local_30 = (code ***)0x0;
  if (0 < iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&local_38,iVar6);
  }
  local_40 = &local_38;
  local_20 = &local_40;
  local_28 = FUN_141804aa0;
  cVar1 = EnumerateVisualGlyphsInSourceRange(param_1,param_3,param_4,&local_28);
  if (cVar1 == '\x02') {
    lVar2 = operator_new(0x70);
    puVar3 = puVar5;
    if (lVar2 != 0) {
      local_28 = local_38;
      local_20 = local_30;
      local_38 = (code *)0x0;
      local_30 = (code ***)0x0;
      local_48 = param_3;
      local_44 = iVar6;
      puVar3 = (undefined8 *)
               FUN_1417edb00(lVar2,&local_28,*(undefined2 *)(param_1 + 0x10),
                             *(undefined2 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x18),
                             param_1 + 0x20,&local_48);
    }
    puVar4 = (undefined8 *)operator_new(0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_DestroyObject_144d503c8;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
      puVar4[2] = puVar3;
      puVar5 = puVar4;
    }
    *param_2 = puVar3;
    param_2[1] = puVar5;
    SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_1417f50c0(&local_38);
  return param_2;
}



// FUNCTION 14183e1a0 FUN_14183e1a0 body=748 status=ok
// SIG undefined FUN_14183e1a0(void)

longlong * FUN_14183e1a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined2 *local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pplVar2 = (longlong **)(param_1 + 0x80);
  if (*pplVar2 == (longlong *)0x0) {
    UCheatManagerGunfire::GetAllCheats(&local_68);
    if (0 < local_60) {
      puVar5 = (undefined8 *)FPaths::EngineIntermediateDir(local_48);
      plVar8 = (longlong *)0x0;
      iVar3 = *(int *)(puVar5 + 1);
      local_a8 = (undefined2 *)*puVar5;
      *puVar5 = 0;
      local_a0 = *(int *)(puVar5 + 1);
      local_9c = *(int *)((longlong)puVar5 + 0xc);
      puVar5[1] = 0;
      if (local_9c < (int)((0x17 - (uint)(iVar3 != 0)) + local_a0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
      }
      FString::PathAppend(&local_a8,L"DefaultSystemFont.ttf",0x15);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      local_58 = local_68;
      lVar10 = local_58;
      puVar9 = &DAT_143f3eda8;
      if (local_a0 != 0) {
        puVar9 = local_a8;
      }
      iStack_50 = local_60;
      local_58._0_4_ = (undefined4)local_68;
      local_58._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      local_38 = (undefined4)local_58;
      uStack_34 = local_58._4_4_;
      iStack_30 = local_60;
      uStack_2c = uStack_4c;
      local_58 = lVar10;
      uVar6 = FUN_1415c3d50();
      cVar4 = FUN_14167ef40(&local_38,puVar9,uVar6,0);
      if (cVar4 != '\0') {
        plVar7 = (longlong *)operator_new(0x58);
        puVar9 = local_a8;
        local_80 = plVar8;
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)(plVar7 + 1) = 1;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_DestroyObject_144d50218;
          lVar10 = (longlong)local_a0;
          local_res8 = 0;
          local_78 = (void *)0x0;
          local_70 = local_a0;
          if (local_a0 == 0) {
            local_6c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_a0,0);
            _guard_xfg_dispatch_icall_nop(local_78,puVar9,lVar10 * 2);
          }
          FStandaloneCompositeFont::FStandaloneCompositeFont(plVar7 + 2,&local_res8,&local_78,0,0);
          local_80 = plVar7;
        }
        local_88 = local_80 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        if (local_88 != (longlong *)0x0) {
          plVar8 = local_88 + 2;
        }
        local_90 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        local_98 = plVar8;
        if (pplVar2 != &local_98) {
          *pplVar2 = plVar8;
          local_98 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&local_90);
        }
        plVar8 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_90 + 1;
          lVar10 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        plVar8 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_80 + 1;
          lVar10 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_80)(local_80);
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
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *param_2 = (longlong)*pplVar2;
  lVar10 = *(longlong *)(param_1 + 0x88);
  param_2[1] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14183e490 FUN_14183e490 body=188 status=ok
// SIG undefined FUN_14183e490(void)

undefined8 FUN_14183e490(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x338) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x330);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,local_28);
    FText::operator=(param_1 + 0x310,local_28);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  FText::FText(param_2,param_1 + 0x310);
  return param_2;
}



// FUNCTION 14183e550 FUN_14183e550 body=144 status=ok
// SIG undefined FUN_14183e550(void)

char FUN_14183e550(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar5 = DAT_1469eaf50;
  plVar1 = DAT_1469eaf48;
  if (DAT_1469eaf50 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eaf50 + 1) = (int)DAT_1469eaf50[1] + 1;
    UNLOCK();
  }
  iVar6 = (**(code **)(*plVar1 + 0xb8))();
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
  if (iVar6 != 0) {
    return (iVar6 != 1) + '\x02';
  }
  return '\x01';
}



// FUNCTION 14183e5e0 FUN_14183e5e0 body=7 status=ok
// SIG undefined FUN_14183e5e0(void)

undefined4 FUN_14183e5e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34c);
}



// FUNCTION 14183e5f0 GetType body=14 status=ok
// SIG undefined GetType(void)

undefined8 * SWidget::GetType(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x120);
  return param_2;
}



// FUNCTION 14183e600 GetTypeHash body=810 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1[3] == 0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    uVar3 = FUN_140438070(puVar2);
    uVar5 = uVar3 >> 0xd ^ -uVar3;
    uVar4 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
    uVar6 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar3 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 0x10;
    uVar6 = (uVar6 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar6 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 10;
    uVar3 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf;
    iVar1 = uVar3 - *(byte *)(param_1 + 2);
    uVar4 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
    uVar5 = (*(byte *)(param_1 + 2) - uVar4) - iVar1 ^ uVar4 >> 0xd;
    uVar3 = (iVar1 - uVar4) - uVar5 ^ uVar5 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar6 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar5 = (uint)*(byte *)((longlong)param_1 + 0x11);
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf;
    iVar1 = uVar3 - uVar5;
    uVar4 = ((uVar5 - uVar3) - (uint)*(byte *)((longlong)param_1 + 0x11)) + 0x9e3779b9 ^
            iVar1 * 0x100;
    uVar5 = (uVar5 - uVar4) - iVar1 ^ uVar4 >> 0xd;
    uVar3 = (iVar1 - uVar4) - uVar5 ^ uVar5 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
    uVar3 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf;
  }
  else {
    iVar1 = (int)((ulonglong)param_1[3] >> 4);
    uVar3 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
    uVar4 = -(uVar3 + iVar1) ^ uVar3 >> 0xd;
    uVar5 = (iVar1 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
    uVar5 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
    uVar4 = uVar5 >> 0xd ^ -uVar5;
    uVar3 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar3 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  uVar5 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 0xd;
  uVar4 = (uVar5 - uVar6) - uVar3 ^ uVar3 >> 0xc;
  uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xf;
}



// FUNCTION 14183e930 GetTypeHash body=273 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar4 = uVar2 >> 0xd ^ -uVar2;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar2 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  iVar3 = uVar2 - (byte)param_1[1];
  uVar1 = 0x9e3779b9 - uVar2 ^ iVar3 * 0x100;
  uVar4 = ((byte)param_1[1] - uVar1) - iVar3 ^ uVar1 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}



// FUNCTION 14183ea50 GetTypeHash body=277 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar3 = uVar2 >> 0xd ^ -uVar2;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar5 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar3 = ((uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar2 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 0xc;
  uVar4 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 << 10;
  return (uVar2 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}



// FUNCTION 14183eb70 GetTypeHash body=271 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (int)((ulonglong)*param_1 >> 0x20) + (int)*param_1;
  uVar2 = uVar4 >> 0xd ^ -uVar4;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar1 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  iVar3 = uVar1 - *(byte *)(param_1 + 1);
  uVar2 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar4 = (*(byte *)(param_1 + 1) - uVar2) - iVar3 ^ uVar2 >> 0xd;
  uVar1 = (iVar3 - uVar2) - uVar4 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}



// FUNCTION 14183ec80 GetTypeHash body=1127 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (int)(*param_1 >> 4);
  uVar5 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar3 = -(uVar5 + iVar1) ^ uVar5 >> 0xd;
  uVar2 = (iVar1 - uVar5) - uVar3 ^ uVar3 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar2 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
  uVar5 = uVar2 >> 0xd ^ -uVar2;
  uVar3 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar4 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar7 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 3;
  uVar6 = (uVar3 - uVar7) - uVar4 ^ uVar7 << 10;
  iVar1 = (int)(param_1[1] >> 4);
  uVar3 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar5 = -(uVar3 + iVar1) ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar3 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar5 = ((uVar4 - uVar6) - uVar7 ^ uVar6 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar2 = GetTypeHash(param_1 + 2);
  uVar3 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  iVar1 = (int)(param_1[6] >> 4);
  uVar5 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xd;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar7 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar5 = (uVar2 - uVar3) - uVar7 ^ uVar7 >> 3;
  uVar4 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar3 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar6 = -(uVar3 + iVar1) ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar3) - uVar6 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 10;
  uVar3 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar5 = ((uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar5 = (int)(param_1[8] >> 0x20) + (int)param_1[8];
  uVar4 = ((uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar2 = (uint)param_1[9];
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar5 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
  return (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}



// FUNCTION 14183f0f0 FUN_14183f0f0 body=124 status=ok
// SIG undefined FUN_14183f0f0(void)

undefined * FUN_14183f0f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f3b60) {
    _Init_thread_header(&DAT_1469f3b60);
    if (DAT_1469f3b60 == -1) {
      FName::FName(&DAT_1469f3b58,L"FNavigationMetaData",1);
      _Init_thread_footer(&DAT_1469f3b60);
      return &DAT_1469f3b58;
    }
  }
  return &DAT_1469f3b58;
}



// FUNCTION 14183f2c0 FUN_14183f2c0 body=268 status=ok
// SIG undefined FUN_14183f2c0(void)

void FUN_14183f2c0(longlong param_1,longlong param_2,float param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar2 = FUN_141836ae0(*(undefined8 *)(lVar3 + 0x18));
  lVar3 = FUN_141838300(lVar3,uVar2);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 8) & 1) == 0)) {
    uVar4 = 0;
    *param_4 = 0;
  }
  else {
    FreeTypeUtils::ApplySizeAndScale(lVar3,*(undefined4 *)(param_2 + 0x48),param_3);
    iVar1 = FUN_143c22100((int)*(short *)(lVar3 + 0x74),
                          *(undefined4 *)(*(longlong *)(lVar3 + 0x80) + 0x20));
    *param_4 = (short)(int)((float)((int)ROUND((float)iVar1 * 0.015625 + (float)iVar1 * 0.015625 +
                                               0.5) >> 1) * param_3);
    iVar1 = FUN_143c22100((int)*(short *)(lVar3 + 0x76),
                          *(undefined4 *)(*(longlong *)(lVar3 + 0x80) + 0x20));
    uVar4 = (undefined2)
            (int)((float)((int)ROUND((float)iVar1 * 0.015625 + (float)iVar1 * 0.015625 + 0.5) >> 1)
                 * param_3);
  }
  *param_5 = uVar4;
  return;
}



// FUNCTION 14183f3d0 GetUnicodeBlockRange body=98 status=ok
// SIG undefined GetUnicodeBlockRange(void)

undefined2 * FUnicodeBlockRange::GetUnicodeBlockRange(undefined2 *param_1,ulonglong param_2)

{
  undefined2 *puVar1;
  longlong local_18 [2];
  
  FUN_14183f440(local_18);
  puVar1 = (undefined2 *)((param_2 & 0xffff) * 0x30 + local_18[0]);
  *param_1 = *puVar1;
  FText::FText(param_1 + 4,puVar1 + 4);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar1 + 0x12);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar1 + 0x16);
  return param_1;
}



// FUNCTION 14183f440 FUN_14183f440 body=21641 status=ok
// SIG undefined FUN_14183f440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14183f440(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469ee6e0) {
    _Init_thread_header(&DAT_1469ee6e0);
    if (DAT_1469ee6e0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb3e8,L"Control Character",L"UnicodeBlock",L"ControlCharacter");
      DAT_1469eb400 = 1;
      _DAT_1469eb410 = 1;
      _DAT_1469eb404 = 0;
      DAT_1469eb408 = 1;
      _DAT_1469eb40c = 0x1f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb418,L"Basic Latin",L"UnicodeBlock",L"BasicLatin");
      DAT_1469eb430 = 1;
      _DAT_1469eb440 = 2;
      _DAT_1469eb434 = 0x20;
      DAT_1469eb438 = 1;
      _DAT_1469eb43c = 0x7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb448,L"Latin - 1 Supplement",L"UnicodeBlock",L"Latin1Supplement");
      DAT_1469eb460 = 1;
      _DAT_1469eb470 = 3;
      _DAT_1469eb464 = 0x80;
      DAT_1469eb468 = 1;
      _DAT_1469eb46c = 0xff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb478,L"Latin Extended - A",L"UnicodeBlock",L"LatinExtendedA");
      DAT_1469eb490 = 1;
      _DAT_1469eb4a0 = 4;
      _DAT_1469eb494 = 0x100;
      DAT_1469eb498 = 1;
      _DAT_1469eb49c = 0x17f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb4a8,L"Latin Extended - B",L"UnicodeBlock",L"LatinExtendedB");
      DAT_1469eb4c0 = 1;
      _DAT_1469eb4d0 = 5;
      _DAT_1469eb4c4 = 0x180;
      DAT_1469eb4c8 = 1;
      _DAT_1469eb4cc = 0x24f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb4d8,L"IPA Extensions",L"UnicodeBlock",L"IPAExtensions");
      DAT_1469eb4f0 = 1;
      _DAT_1469eb500 = 6;
      _DAT_1469eb4f4 = 0x250;
      DAT_1469eb4f8 = 1;
      _DAT_1469eb4fc = 0x2af;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb508,L"Spacing Modifier Letters",L"UnicodeBlock",
                 L"SpacingModifierLetters");
      DAT_1469eb520 = 1;
      _DAT_1469eb530 = 7;
      _DAT_1469eb524 = 0x2b0;
      DAT_1469eb528 = 1;
      _DAT_1469eb52c = 0x2ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb538,L"Combining Diacritical Marks",L"UnicodeBlock",
                 L"CombiningDiacriticalMarks");
      DAT_1469eb550 = 1;
      _DAT_1469eb560 = 8;
      _DAT_1469eb554 = 0x300;
      DAT_1469eb558 = 1;
      _DAT_1469eb55c = 0x36f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb568,L"Greek and Coptic",L"UnicodeBlock",L"GreekAndCoptic");
      DAT_1469eb580 = 1;
      _DAT_1469eb590 = 9;
      _DAT_1469eb584 = 0x370;
      DAT_1469eb588 = 1;
      _DAT_1469eb58c = 0x3ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb598,L"Cyrillic",L"UnicodeBlock",L"Cyrillic");
      DAT_1469eb5b0 = 1;
      _DAT_1469eb5c0 = 10;
      _DAT_1469eb5b4 = 0x400;
      DAT_1469eb5b8 = 1;
      _DAT_1469eb5bc = 0x4ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb5c8,L"Cyrillic Supplementary",L"UnicodeBlock",L"CyrillicSupplementary");
      DAT_1469eb5e0 = 1;
      _DAT_1469eb5f0 = 0xb;
      _DAT_1469eb5e4 = 0x500;
      DAT_1469eb5e8 = 1;
      _DAT_1469eb5ec = 0x52f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb5f8,L"Armenian",L"UnicodeBlock",L"Armenian");
      DAT_1469eb610 = 1;
      _DAT_1469eb620 = 0xc;
      _DAT_1469eb614 = 0x530;
      DAT_1469eb618 = 1;
      _DAT_1469eb61c = 0x58f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb628,L"Hebrew",L"UnicodeBlock",L"Hebrew");
      DAT_1469eb640 = 1;
      _DAT_1469eb650 = 0xd;
      _DAT_1469eb644 = 0x590;
      DAT_1469eb648 = 1;
      _DAT_1469eb64c = 0x5ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb658,L"Arabic",L"UnicodeBlock",L"Arabic");
      DAT_1469eb670 = 1;
      _DAT_1469eb674 = 0x600;
      DAT_1469eb678 = 1;
      _DAT_1469eb680 = 0xe;
      _DAT_1469eb67c = 0x6ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb688,L"Syriac",L"UnicodeBlock",L"Syriac");
      DAT_1469eb6a0 = 1;
      _DAT_1469eb6b0 = 0xf;
      _DAT_1469eb6a4 = 0x700;
      DAT_1469eb6a8 = 1;
      _DAT_1469eb6ac = 0x74f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb6b8,L"Arabic Supplement",L"UnicodeBlock",L"ArabicSupplement");
      DAT_1469eb6d0 = 1;
      _DAT_1469eb6e0 = 0x10;
      _DAT_1469eb6d4 = 0x750;
      DAT_1469eb6d8 = 1;
      _DAT_1469eb6dc = 0x77f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb6e8,L"Thaana",L"UnicodeBlock",L"Thaana");
      DAT_1469eb700 = 1;
      _DAT_1469eb710 = 0x11;
      _DAT_1469eb704 = 0x780;
      DAT_1469eb708 = 1;
      _DAT_1469eb70c = 0x7bf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb718,&DAT_144d3f968,L"UnicodeBlock",&DAT_144d3f940);
      DAT_1469eb730 = 1;
      _DAT_1469eb740 = 0x12;
      _DAT_1469eb734 = 0x7c0;
      DAT_1469eb738 = 1;
      _DAT_1469eb73c = 0x7ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb748,L"Samaritan",L"UnicodeBlock",L"Samaritan");
      DAT_1469eb760 = 1;
      _DAT_1469eb770 = 0x13;
      _DAT_1469eb764 = 0x800;
      DAT_1469eb768 = 1;
      _DAT_1469eb76c = 0x83f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb778,L"Mandaic",L"UnicodeBlock",L"Mandaic");
      DAT_1469eb790 = 1;
      _DAT_1469eb7a0 = 0x14;
      _DAT_1469eb794 = 0x840;
      DAT_1469eb798 = 1;
      _DAT_1469eb79c = 0x85f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb7a8,L"Arabic Extended - A",L"UnicodeBlock",L"ArabicExtendedA");
      DAT_1469eb7c0 = 1;
      _DAT_1469eb7d0 = 0x15;
      _DAT_1469eb7c4 = 0x8a0;
      DAT_1469eb7c8 = 1;
      _DAT_1469eb7cc = 0x8ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb7d8,L"Devanagari",L"UnicodeBlock",L"Devanagari");
      DAT_1469eb7f0 = 1;
      _DAT_1469eb800 = 0x16;
      _DAT_1469eb7f4 = 0x900;
      DAT_1469eb7f8 = 1;
      _DAT_1469eb7fc = 0x97f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb808,L"Bengali",L"UnicodeBlock",L"Bengali");
      DAT_1469eb820 = 1;
      _DAT_1469eb830 = 0x17;
      _DAT_1469eb824 = 0x980;
      DAT_1469eb828 = 1;
      _DAT_1469eb82c = 0x9ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb838,L"Gurmukhi",L"UnicodeBlock",L"Gurmukhi");
      DAT_1469eb850 = 1;
      _DAT_1469eb860 = 0x18;
      _DAT_1469eb854 = 0xa00;
      DAT_1469eb858 = 1;
      _DAT_1469eb85c = 0xa7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb868,L"Gujarati",L"UnicodeBlock",L"Gujarati");
      DAT_1469eb880 = 1;
      _DAT_1469eb890 = 0x19;
      _DAT_1469eb884 = 0xa80;
      DAT_1469eb888 = 1;
      _DAT_1469eb88c = 0xaff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb898,L"Oriya",L"UnicodeBlock",L"Oriya");
      DAT_1469eb8b0 = 1;
      _DAT_1469eb8c0 = 0x1a;
      _DAT_1469eb8b4 = 0xb00;
      DAT_1469eb8b8 = 1;
      _DAT_1469eb8bc = 0xb7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb8c8,L"Tamil",L"UnicodeBlock",L"Tamil");
      DAT_1469eb8e0 = 1;
      _DAT_1469eb8f0 = 0x1b;
      _DAT_1469eb8e4 = 0xb80;
      DAT_1469eb8e8 = 1;
      _DAT_1469eb8ec = 0xbff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb8f8,L"Telugu",L"UnicodeBlock",L"Telugu");
      DAT_1469eb910 = 1;
      _DAT_1469eb920 = 0x1c;
      _DAT_1469eb914 = 0xc00;
      DAT_1469eb918 = 1;
      _DAT_1469eb91c = 0xc7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb928,L"Kannada",L"UnicodeBlock",L"Kannada");
      DAT_1469eb940 = 1;
      _DAT_1469eb950 = 0x1d;
      _DAT_1469eb944 = 0xc80;
      DAT_1469eb948 = 1;
      _DAT_1469eb94c = 0xcff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb958,L"Malayalam",L"UnicodeBlock",L"Malayalam");
      DAT_1469eb970 = 1;
      _DAT_1469eb980 = 0x1e;
      _DAT_1469eb974 = 0xd00;
      DAT_1469eb978 = 1;
      _DAT_1469eb97c = 0xd7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb988,L"Sinhala",L"UnicodeBlock",L"Sinhala");
      DAT_1469eb9a0 = 1;
      _DAT_1469eb9a4 = 0xd80;
      DAT_1469eb9a8 = 1;
      _DAT_1469eb9ac = 0xdff;
      _DAT_1469eb9b0 = 0x1f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb9b8,L"Thai",L"UnicodeBlock",L"Thai");
      DAT_1469eb9d0 = 1;
      _DAT_1469eb9d4 = 0xe00;
      DAT_1469eb9d8 = 1;
      _DAT_1469eb9dc = 0xe7f;
      _DAT_1469eb9e0 = 0x20;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eb9e8,&DAT_144d3fd90,L"UnicodeBlock",&DAT_144d3fd68);
      DAT_1469eba00 = 1;
      _DAT_1469eba10 = 0x21;
      _DAT_1469eba04 = 0xe80;
      DAT_1469eba08 = 1;
      _DAT_1469eba0c = 0xeff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eba18,L"Tibetan",L"UnicodeBlock",L"Tibetan");
      DAT_1469eba30 = 1;
      _DAT_1469eba40 = 0x22;
      _DAT_1469eba34 = 0xf00;
      DAT_1469eba38 = 1;
      _DAT_1469eba3c = 0xfff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eba48,L"Myanmar",L"UnicodeBlock",L"Myanmar");
      DAT_1469eba60 = 1;
      _DAT_1469eba70 = 0x23;
      _DAT_1469eba64 = 0x1000;
      DAT_1469eba68 = 1;
      _DAT_1469eba6c = 0x109f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eba78,L"Georgian",L"UnicodeBlock",L"Georgian");
      DAT_1469eba90 = 1;
      _DAT_1469eba94 = 0x10a0;
      DAT_1469eba98 = 1;
      _DAT_1469eba9c = 0x10ff;
      _DAT_1469ebaa0 = 0x24;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebaa8,L"Hangul Jamo",L"UnicodeBlock",L"HangulJamo");
      DAT_1469ebac0 = 1;
      _DAT_1469ebad0 = 0x25;
      _DAT_1469ebac4 = 0x1100;
      DAT_1469ebac8 = 1;
      _DAT_1469ebacc = 0x11ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebad8,L"Ethiopic",L"UnicodeBlock",L"Ethiopic");
      DAT_1469ebaf0 = 1;
      _DAT_1469ebb00 = 0x26;
      _DAT_1469ebaf4 = 0x1200;
      DAT_1469ebaf8 = 1;
      _DAT_1469ebafc = 0x137f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebb08,L"Ethiopic Supplement",L"UnicodeBlock",L"EthiopicSupplement");
      DAT_1469ebb20 = 1;
      _DAT_1469ebb30 = 0x27;
      _DAT_1469ebb24 = 0x1380;
      DAT_1469ebb28 = 1;
      _DAT_1469ebb2c = 0x139f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebb38,L"Cherokee",L"UnicodeBlock",L"Cherokee");
      DAT_1469ebb50 = 1;
      _DAT_1469ebb60 = 0x28;
      _DAT_1469ebb54 = 0x13a0;
      DAT_1469ebb58 = 1;
      _DAT_1469ebb5c = 0x13ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebb68,L"Unified Canadian Aboriginal Syllabics",L"UnicodeBlock",
                 L"UnifiedCanadianAboriginalSyllabics");
      DAT_1469ebb80 = 1;
      _DAT_1469ebb90 = 0x29;
      _DAT_1469ebb84 = 0x1400;
      DAT_1469ebb88 = 1;
      _DAT_1469ebb8c = 0x167f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebb98,L"Ogham",L"UnicodeBlock",L"Ogham");
      DAT_1469ebbb0 = 1;
      _DAT_1469ebbc0 = 0x2a;
      _DAT_1469ebbb4 = 0x1680;
      DAT_1469ebbb8 = 1;
      _DAT_1469ebbbc = 0x169f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebbc8,L"Runic",L"UnicodeBlock",L"Runic");
      DAT_1469ebbe0 = 1;
      _DAT_1469ebbf0 = 0x2b;
      _DAT_1469ebbe4 = 0x16a0;
      DAT_1469ebbe8 = 1;
      _DAT_1469ebbec = 0x16ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebbf8,L"Tagalog",L"UnicodeBlock",L"Tagalog");
      DAT_1469ebc10 = 1;
      _DAT_1469ebc20 = 0x2c;
      _DAT_1469ebc14 = 0x1700;
      DAT_1469ebc18 = 1;
      _DAT_1469ebc1c = 0x171f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebc28,L"Hanunoo",L"UnicodeBlock",L"Hanunoo");
      DAT_1469ebc40 = 1;
      _DAT_1469ebc50 = 0x2d;
      _DAT_1469ebc44 = 0x1720;
      DAT_1469ebc48 = 1;
      _DAT_1469ebc4c = 0x173f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebc58,L"Buhid",L"UnicodeBlock",L"Buhid");
      DAT_1469ebc70 = 1;
      _DAT_1469ebc80 = 0x2e;
      _DAT_1469ebc74 = 0x1740;
      DAT_1469ebc78 = 1;
      _DAT_1469ebc7c = 0x175f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebc88,L"Tagbanwa",L"UnicodeBlock",L"Tagbanwa");
      DAT_1469ebca0 = 1;
      _DAT_1469ebcb0 = 0x2f;
      _DAT_1469ebca4 = 0x1760;
      DAT_1469ebca8 = 1;
      _DAT_1469ebcac = 0x177f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebcb8,L"Khmer",L"UnicodeBlock",L"Khmer");
      DAT_1469ebcd0 = 1;
      _DAT_1469ebce0 = 0x30;
      _DAT_1469ebcd4 = 0x1780;
      DAT_1469ebcd8 = 1;
      _DAT_1469ebcdc = 0x17ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebce8,L"Mongolian",L"UnicodeBlock",L"Mongolian");
      DAT_1469ebd00 = 1;
      _DAT_1469ebd10 = 0x31;
      _DAT_1469ebd04 = 0x1800;
      DAT_1469ebd08 = 1;
      _DAT_1469ebd0c = 0x18af;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebd18,L"Unified Canadian Aboriginal Syllabics Extended",L"UnicodeBlock",
                 L"UnifiedCanadianAboriginalSyllabicsExtended");
      DAT_1469ebd30 = 1;
      _DAT_1469ebd40 = 0x32;
      _DAT_1469ebd34 = 0x18b0;
      DAT_1469ebd38 = 1;
      _DAT_1469ebd3c = 0x18ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebd48,L"Limbu",L"UnicodeBlock",L"Limbu");
      DAT_1469ebd60 = 1;
      _DAT_1469ebd64 = 0x1900;
      DAT_1469ebd68 = 1;
      _DAT_1469ebd70 = 0x33;
      _DAT_1469ebd6c = 0x194f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebd78,L"Tai Le",L"UnicodeBlock",L"TaiLe");
      DAT_1469ebd90 = 1;
      _DAT_1469ebda0 = 0x34;
      _DAT_1469ebd94 = 0x1950;
      DAT_1469ebd98 = 1;
      _DAT_1469ebd9c = 0x197f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebda8,L"New Tai Lue",L"UnicodeBlock",L"NewTaiLue");
      DAT_1469ebdc0 = 1;
      _DAT_1469ebdd0 = 0x35;
      _DAT_1469ebdc4 = 0x1980;
      DAT_1469ebdc8 = 1;
      _DAT_1469ebdcc = 0x19df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebdd8,L"Khmer Symbols",L"UnicodeBlock",L"KhmerSymbols");
      DAT_1469ebdf0 = 1;
      _DAT_1469ebe00 = 0x36;
      _DAT_1469ebdf4 = 0x19e0;
      DAT_1469ebdf8 = 1;
      _DAT_1469ebdfc = 0x19ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebe08,L"Buginese",L"UnicodeBlock",L"Buginese");
      DAT_1469ebe20 = 1;
      _DAT_1469ebe30 = 0x37;
      _DAT_1469ebe24 = 0x1a00;
      DAT_1469ebe28 = 1;
      _DAT_1469ebe2c = 0x1a1f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebe38,L"Tai Tham",L"UnicodeBlock",L"TaiTham");
      DAT_1469ebe50 = 1;
      _DAT_1469ebe60 = 0x38;
      _DAT_1469ebe54 = 0x1a20;
      DAT_1469ebe58 = 1;
      _DAT_1469ebe5c = 0x1aaf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebe68,L"Combining Diacritical Marks Extended",L"UnicodeBlock",
                 L"CombiningDiacriticalMarksExtended");
      DAT_1469ebe80 = 1;
      _DAT_1469ebe90 = 0x39;
      _DAT_1469ebe84 = 0x1ab0;
      DAT_1469ebe88 = 1;
      _DAT_1469ebe8c = 0x1aff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebe98,L"Balinese",L"UnicodeBlock",L"Balinese");
      DAT_1469ebeb0 = 1;
      _DAT_1469ebec0 = 0x3a;
      _DAT_1469ebeb4 = 0x1b00;
      DAT_1469ebeb8 = 1;
      _DAT_1469ebebc = 0x1b7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebec8,L"Sundanese",L"UnicodeBlock",L"Sundanese");
      DAT_1469ebee0 = 1;
      _DAT_1469ebef0 = 0x3b;
      _DAT_1469ebee4 = 0x1b80;
      DAT_1469ebee8 = 1;
      _DAT_1469ebeec = 0x1bbf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebef8,L"Batak",L"UnicodeBlock",L"Batak");
      DAT_1469ebf10 = 1;
      _DAT_1469ebf20 = 0x3c;
      _DAT_1469ebf14 = 0x1bc0;
      DAT_1469ebf18 = 1;
      _DAT_1469ebf1c = 0x1bff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebf28,L"Lepcha",L"UnicodeBlock",L"Lepcha");
      DAT_1469ebf40 = 1;
      _DAT_1469ebf50 = 0x3d;
      _DAT_1469ebf44 = 0x1c00;
      DAT_1469ebf48 = 1;
      _DAT_1469ebf4c = 0x1c4f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebf58,L"Ol Chiki",L"UnicodeBlock",L"OlChiki");
      DAT_1469ebf70 = 1;
      _DAT_1469ebf80 = 0x3e;
      _DAT_1469ebf74 = 0x1c50;
      DAT_1469ebf78 = 1;
      _DAT_1469ebf7c = 0x1c7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebf88,L"Cyrillic Extended C",L"UnicodeBlock",L"CyrillicExtendedC");
      DAT_1469ebfa0 = 1;
      _DAT_1469ebfb0 = 0x3f;
      _DAT_1469ebfa4 = 0x1c80;
      DAT_1469ebfa8 = 1;
      _DAT_1469ebfac = 0x1c87;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebfb8,L"Sundanese Supplement",L"UnicodeBlock",L"SundaneseSupplement");
      DAT_1469ebfd0 = 1;
      _DAT_1469ebfe0 = 0x40;
      _DAT_1469ebfd4 = 0x1cc0;
      DAT_1469ebfd8 = 1;
      _DAT_1469ebfdc = 0x1ccf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ebfe8,L"Vedic Extensions",L"UnicodeBlock",L"VedicExtensions");
      DAT_1469ec000 = 1;
      _DAT_1469ec010 = 0x41;
      _DAT_1469ec004 = 0x1cd0;
      DAT_1469ec008 = 1;
      _DAT_1469ec00c = 0x1cff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec018,L"Phonetic Extensions",L"UnicodeBlock",L"PhoneticExtensions");
      DAT_1469ec030 = 1;
      _DAT_1469ec040 = 0x42;
      _DAT_1469ec034 = 0x1d00;
      DAT_1469ec038 = 1;
      _DAT_1469ec03c = 0x1d7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec048,L"Phonetic Extensions Supplement",L"UnicodeBlock",
                 L"PhoneticExtensionsSupplement");
      DAT_1469ec060 = 1;
      _DAT_1469ec070 = 0x43;
      _DAT_1469ec064 = 0x1d80;
      DAT_1469ec068 = 1;
      _DAT_1469ec06c = 0x1dbf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec078,L"Combining Diacritical Marks Supplement",L"UnicodeBlock",
                 L"CombiningDiacriticalMarksSupplement");
      DAT_1469ec090 = 1;
      _DAT_1469ec0a0 = 0x44;
      _DAT_1469ec094 = 0x1dc0;
      DAT_1469ec098 = 1;
      _DAT_1469ec09c = 0x1dff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec0a8,L"Latin Extended Additional",L"UnicodeBlock",
                 L"LatinExtendedAdditional");
      DAT_1469ec0c0 = 1;
      _DAT_1469ec0d0 = 0x45;
      _DAT_1469ec0c4 = 0x1e00;
      DAT_1469ec0c8 = 1;
      _DAT_1469ec0cc = 0x1eff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec0d8,L"Greek Extended",L"UnicodeBlock",L"GreekExtended");
      DAT_1469ec0f0 = 1;
      _DAT_1469ec100 = 0x46;
      _DAT_1469ec0f4 = 0x1f00;
      DAT_1469ec0f8 = 1;
      _DAT_1469ec0fc = 0x1fff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec108,L"General Punctuation",L"UnicodeBlock",L"GeneralPunctuation");
      DAT_1469ec120 = 1;
      _DAT_1469ec130 = 0x47;
      _DAT_1469ec124 = 0x2000;
      DAT_1469ec128 = 1;
      _DAT_1469ec12c = 0x206f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec138,L"Superscripts and Subscripts",L"UnicodeBlock",
                 L"SuperscriptsAndSubscripts");
      DAT_1469ec150 = 1;
      _DAT_1469ec160 = 0x48;
      _DAT_1469ec154 = 0x2070;
      DAT_1469ec158 = 1;
      _DAT_1469ec15c = 0x209f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec168,L"Currency Symbols",L"UnicodeBlock",L"CurrencySymbols");
      DAT_1469ec180 = 1;
      _DAT_1469ec184 = 0x20a0;
      DAT_1469ec188 = 1;
      _DAT_1469ec18c = 0x20cf;
      _DAT_1469ec190 = 0x49;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec198,L"Combining Diacritical Marks for Symbols",L"UnicodeBlock",
                 L"CombiningDiacriticalMarksForSymbols");
      DAT_1469ec1b0 = 1;
      _DAT_1469ec1c0 = 0x4a;
      _DAT_1469ec1b4 = 0x20d0;
      DAT_1469ec1b8 = 1;
      _DAT_1469ec1bc = 0x20ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec1c8,L"Letterlike Symbols",L"UnicodeBlock",L"LetterlikeSymbols");
      DAT_1469ec1e0 = 1;
      _DAT_1469ec1f0 = 0x4b;
      _DAT_1469ec1e4 = 0x2100;
      DAT_1469ec1e8 = 1;
      _DAT_1469ec1ec = 0x214f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec1f8,L"Number Forms",L"UnicodeBlock",L"NumberForms");
      DAT_1469ec210 = 1;
      _DAT_1469ec220 = 0x4c;
      _DAT_1469ec214 = 0x2150;
      DAT_1469ec218 = 1;
      _DAT_1469ec21c = 0x218f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec228,L"Arrows",L"UnicodeBlock",L"Arrows");
      DAT_1469ec240 = 1;
      _DAT_1469ec250 = 0x4d;
      _DAT_1469ec244 = 0x2190;
      DAT_1469ec248 = 1;
      _DAT_1469ec24c = 0x21ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec258,L"Mathematical Operators",L"UnicodeBlock",L"MathematicalOperators");
      DAT_1469ec270 = 1;
      _DAT_1469ec280 = 0x4e;
      _DAT_1469ec274 = 0x2200;
      DAT_1469ec278 = 1;
      _DAT_1469ec27c = 0x22ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec288,L"Miscellaneous Technical",L"UnicodeBlock",L"MiscellaneousTechnical"
                );
      DAT_1469ec2a0 = 1;
      _DAT_1469ec2b0 = 0x4f;
      _DAT_1469ec2a4 = 0x2300;
      DAT_1469ec2a8 = 1;
      _DAT_1469ec2ac = 0x23ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec2b8,L"Control Pictures",L"UnicodeBlock",L"ControlPictures");
      DAT_1469ec2d0 = 1;
      _DAT_1469ec2e0 = 0x50;
      _DAT_1469ec2d4 = 0x2400;
      DAT_1469ec2d8 = 1;
      _DAT_1469ec2dc = 0x243f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec2e8,L"Optical Character Recognition",L"UnicodeBlock",
                 L"OpticalCharacterRecognition");
      DAT_1469ec300 = 1;
      _DAT_1469ec310 = 0x51;
      _DAT_1469ec304 = 0x2440;
      DAT_1469ec308 = 1;
      _DAT_1469ec30c = 0x245f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec318,L"Enclosed Alphanumerics",L"UnicodeBlock",L"EnclosedAlphanumerics");
      DAT_1469ec330 = 1;
      _DAT_1469ec340 = 0x52;
      _DAT_1469ec334 = 0x2460;
      DAT_1469ec338 = 1;
      _DAT_1469ec33c = 0x24ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec348,L"Box Drawing",L"UnicodeBlock",L"BoxDrawing");
      DAT_1469ec360 = 1;
      _DAT_1469ec370 = 0x53;
      _DAT_1469ec364 = 0x2500;
      DAT_1469ec368 = 1;
      _DAT_1469ec36c = 0x257f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec378,L"Block Elements",L"UnicodeBlock",L"BlockElements");
      DAT_1469ec390 = 1;
      _DAT_1469ec3a0 = 0x54;
      _DAT_1469ec394 = 0x2580;
      DAT_1469ec398 = 1;
      _DAT_1469ec39c = 0x259f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec3a8,L"Geometric Shapes",L"UnicodeBlock",L"GeometricShapes");
      DAT_1469ec3c0 = 1;
      _DAT_1469ec3d0 = 0x55;
      _DAT_1469ec3c4 = 0x25a0;
      DAT_1469ec3c8 = 1;
      _DAT_1469ec3cc = 0x25ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec3d8,L"Miscellaneous Symbols",L"UnicodeBlock",L"MiscellaneousSymbols");
      DAT_1469ec3f0 = 1;
      _DAT_1469ec400 = 0x56;
      _DAT_1469ec3f4 = 0x2600;
      DAT_1469ec3f8 = 1;
      _DAT_1469ec3fc = 0x26ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec408,L"Dingbats",L"UnicodeBlock",L"Dingbats");
      DAT_1469ec420 = 1;
      _DAT_1469ec430 = 0x57;
      _DAT_1469ec424 = 0x2700;
      DAT_1469ec428 = 1;
      _DAT_1469ec42c = 0x27bf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec438,L"Miscellaneous Mathematical Symbols - A",L"UnicodeBlock",
                 L"MiscellaneousMathematicalSymbolsA");
      DAT_1469ec450 = 1;
      _DAT_1469ec460 = 0x58;
      _DAT_1469ec454 = 0x27c0;
      DAT_1469ec458 = 1;
      _DAT_1469ec45c = 0x27ef;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec468,L"Supplemental Arrows - A",L"UnicodeBlock",L"SupplementalArrowsA");
      DAT_1469ec480 = 1;
      _DAT_1469ec490 = 0x59;
      _DAT_1469ec484 = 0x27f0;
      DAT_1469ec488 = 1;
      _DAT_1469ec48c = 0x27ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec498,L"Braille Patterns",L"UnicodeBlock",L"BraillePatterns");
      DAT_1469ec4b0 = 1;
      _DAT_1469ec4c0 = 0x5a;
      _DAT_1469ec4b4 = 0x2800;
      DAT_1469ec4b8 = 1;
      _DAT_1469ec4bc = 0x28ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec4c8,L"Supplemental Arrows - B",L"UnicodeBlock",L"SupplementalArrowsB");
      DAT_1469ec4e0 = 1;
      _DAT_1469ec4f0 = 0x5b;
      _DAT_1469ec4e4 = 0x2900;
      DAT_1469ec4e8 = 1;
      _DAT_1469ec4ec = 0x297f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec4f8,L"Miscellaneous Mathematical Symbols - B",L"UnicodeBlock",
                 L"MiscellaneousMathematicalSymbolsB");
      DAT_1469ec510 = 1;
      _DAT_1469ec520 = 0x5c;
      _DAT_1469ec514 = 0x2980;
      DAT_1469ec518 = 1;
      _DAT_1469ec51c = 0x29ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec528,L"Supplemental Mathematical Operators",L"UnicodeBlock",
                 L"SupplementalMathematicalOperators");
      DAT_1469ec540 = 1;
      _DAT_1469ec550 = 0x5d;
      _DAT_1469ec544 = 0x2a00;
      DAT_1469ec548 = 1;
      _DAT_1469ec54c = 0x2aff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec558,L"Miscellaneous Symbols and Arrows",L"UnicodeBlock",
                 L"MiscellaneousSymbolsAndArrows");
      DAT_1469ec570 = 1;
      _DAT_1469ec580 = 0x5e;
      _DAT_1469ec574 = 0x2b00;
      DAT_1469ec578 = 1;
      _DAT_1469ec57c = 0x2bff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec588,L"Glagolitic",L"UnicodeBlock",L"Glagolitic");
      DAT_1469ec5a0 = 1;
      _DAT_1469ec5a4 = 0x2c00;
      DAT_1469ec5a8 = 1;
      _DAT_1469ec5ac = 0x2c5f;
      _DAT_1469ec5b0 = 0x5f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec5b8,L"Latin Extended - C",L"UnicodeBlock",L"LatinExtendedC");
      DAT_1469ec5d0 = 1;
      _DAT_1469ec5e0 = 0x60;
      _DAT_1469ec5d4 = 0x2c60;
      DAT_1469ec5d8 = 1;
      _DAT_1469ec5dc = 0x2c7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec5e8,L"Coptic",L"UnicodeBlock",L"Coptic");
      DAT_1469ec600 = 1;
      _DAT_1469ec610 = 0x61;
      _DAT_1469ec604 = 0x2c80;
      DAT_1469ec608 = 1;
      _DAT_1469ec60c = 0x2cff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec618,L"Georgian Supplement",L"UnicodeBlock",L"GeorgianSupplement");
      DAT_1469ec630 = 1;
      _DAT_1469ec640 = 0x62;
      _DAT_1469ec634 = 0x2d00;
      DAT_1469ec638 = 1;
      _DAT_1469ec63c = 0x2d2f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec648,L"Tifinagh",L"UnicodeBlock",L"Tifinagh");
      DAT_1469ec660 = 1;
      _DAT_1469ec670 = 99;
      _DAT_1469ec664 = 0x2d30;
      DAT_1469ec668 = 1;
      _DAT_1469ec66c = 0x2d7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec678,L"Ethiopic Extended",L"UnicodeBlock",L"EthiopicExtended");
      DAT_1469ec690 = 1;
      _DAT_1469ec6a0 = 100;
      _DAT_1469ec694 = 0x2d80;
      DAT_1469ec698 = 1;
      _DAT_1469ec69c = 0x2ddf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec6a8,L"Cyrillic Extended - A",L"UnicodeBlock",L"CyrillicExtendedA");
      DAT_1469ec6c0 = 1;
      _DAT_1469ec6d0 = 0x65;
      _DAT_1469ec6c4 = 0x2de0;
      DAT_1469ec6c8 = 1;
      _DAT_1469ec6cc = 0x2dff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec6d8,L"Supplemental Punctuation",L"UnicodeBlock",
                 L"SupplementalPunctuation");
      DAT_1469ec6f0 = 1;
      _DAT_1469ec700 = 0x66;
      _DAT_1469ec6f4 = 0x2e00;
      DAT_1469ec6f8 = 1;
      _DAT_1469ec6fc = 0x2e7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec708,L"CJK Radicals Supplement",L"UnicodeBlock",L"CJKRadicalsSupplement")
      ;
      DAT_1469ec720 = 1;
      _DAT_1469ec730 = 0x67;
      _DAT_1469ec724 = 0x2e80;
      DAT_1469ec728 = 1;
      _DAT_1469ec72c = 0x2eff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec738,L"Kangxi Radicals",L"UnicodeBlock",L"KangxiRadicals");
      DAT_1469ec750 = 1;
      _DAT_1469ec760 = 0x68;
      _DAT_1469ec754 = 0x2f00;
      DAT_1469ec758 = 1;
      _DAT_1469ec75c = 0x2fdf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec768,L"Ideographic Description Characters",L"UnicodeBlock",
                 L"IdeographicDescriptionCharacters");
      DAT_1469ec780 = 1;
      _DAT_1469ec790 = 0x69;
      _DAT_1469ec784 = 0x2ff0;
      DAT_1469ec788 = 1;
      _DAT_1469ec78c = 0x2fff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec798,L"CJK Symbols and Punctuation",L"UnicodeBlock",
                 L"CJKSymbolsAndPunctuation");
      DAT_1469ec7b0 = 1;
      _DAT_1469ec7c0 = 0x6a;
      _DAT_1469ec7b4 = 0x3000;
      DAT_1469ec7b8 = 1;
      _DAT_1469ec7bc = 0x303f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec7c8,L"Hiragana",L"UnicodeBlock",L"Hiragana");
      DAT_1469ec7e0 = 1;
      _DAT_1469ec7f0 = 0x6b;
      _DAT_1469ec7e4 = 0x3040;
      DAT_1469ec7e8 = 1;
      _DAT_1469ec7ec = 0x309f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec7f8,L"Katakana",L"UnicodeBlock",L"Katakana");
      DAT_1469ec810 = 1;
      _DAT_1469ec820 = 0x6c;
      _DAT_1469ec814 = 0x30a0;
      DAT_1469ec818 = 1;
      _DAT_1469ec81c = 0x30ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec828,L"Bopomofo",L"UnicodeBlock",L"Bopomofo");
      DAT_1469ec840 = 1;
      _DAT_1469ec850 = 0x6d;
      _DAT_1469ec844 = 0x3100;
      DAT_1469ec848 = 1;
      _DAT_1469ec84c = 0x312f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec858,L"Hangul Compatibility Jamo",L"UnicodeBlock",
                 L"HangulCompatibilityJamo");
      DAT_1469ec870 = 1;
      _DAT_1469ec874 = 0x3130;
      _DAT_1469ec880 = 0x6e;
      DAT_1469ec878 = 1;
      _DAT_1469ec87c = 0x318f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec888,L"Kanbun",L"UnicodeBlock",L"Kanbun");
      DAT_1469ec8a0 = 1;
      _DAT_1469ec8b0 = 0x6f;
      _DAT_1469ec8a4 = 0x3190;
      DAT_1469ec8a8 = 1;
      _DAT_1469ec8ac = 0x319f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec8b8,L"Bopomofo Extended",L"UnicodeBlock",L"BopomofoExtended");
      DAT_1469ec8d0 = 1;
      _DAT_1469ec8e0 = 0x70;
      _DAT_1469ec8d4 = 0x31a0;
      DAT_1469ec8d8 = 1;
      _DAT_1469ec8dc = 0x31bf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec8e8,L"CJK Strokes",L"UnicodeBlock",L"CJKStrokes");
      DAT_1469ec900 = 1;
      _DAT_1469ec910 = 0x71;
      _DAT_1469ec904 = 0x31c0;
      DAT_1469ec908 = 1;
      _DAT_1469ec90c = 0x31ef;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec918,L"Katakana Phonetic Extensions",L"UnicodeBlock",
                 L"KatakanaPhoneticExtensions");
      DAT_1469ec930 = 1;
      _DAT_1469ec940 = 0x72;
      _DAT_1469ec934 = 0x31f0;
      DAT_1469ec938 = 1;
      _DAT_1469ec93c = 0x31ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec948,L"Enclosed CJK Letters and Months",L"UnicodeBlock",
                 L"EnclosedCJKLettersAndMonths");
      DAT_1469ec960 = 1;
      _DAT_1469ec970 = 0x73;
      _DAT_1469ec964 = 0x3200;
      DAT_1469ec968 = 1;
      _DAT_1469ec96c = 0x32ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec978,L"CJK Compatibility",L"UnicodeBlock",L"CJKCompatibility");
      DAT_1469ec990 = 1;
      _DAT_1469ec9a0 = 0x74;
      _DAT_1469ec994 = 0x3300;
      DAT_1469ec998 = 1;
      _DAT_1469ec99c = 0x33ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec9a8,L"CJK Unified Ideographs Extension A",L"UnicodeBlock",
                 L"CJKUnifiedIdeographsExtensionA");
      DAT_1469ec9c0 = 1;
      _DAT_1469ec9c4 = 0x3400;
      DAT_1469ec9c8 = 1;
      _DAT_1469ec9cc = 0x4dbf;
      _DAT_1469ec9d0 = 0x75;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ec9d8,L"Yijing Hexagram Symbols",L"UnicodeBlock",L"YijingHexagramSymbols")
      ;
      DAT_1469ec9f0 = 1;
      _DAT_1469eca00 = 0x76;
      _DAT_1469ec9f4 = 0x4dc0;
      DAT_1469ec9f8 = 1;
      _DAT_1469ec9fc = 0x4dff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eca08,L"CJK Unified Ideographs",L"UnicodeBlock",L"CJKUnifiedIdeographs");
      DAT_1469eca20 = 1;
      _DAT_1469eca30 = 0x77;
      _DAT_1469eca24 = 0x4e00;
      DAT_1469eca28 = 1;
      _DAT_1469eca2c = 0x9fff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eca38,L"Yi Syllables",L"UnicodeBlock",L"YiSyllables");
      DAT_1469eca50 = 1;
      _DAT_1469eca60 = 0x78;
      _DAT_1469eca54 = 0xa000;
      DAT_1469eca58 = 1;
      _DAT_1469eca5c = 0xa48f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eca68,L"Yi Radicals",L"UnicodeBlock",L"YiRadicals");
      DAT_1469eca80 = 1;
      _DAT_1469eca90 = 0x79;
      _DAT_1469eca84 = 0xa490;
      DAT_1469eca88 = 1;
      _DAT_1469eca8c = 0xa4cf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eca98,L"Lisu",L"UnicodeBlock",L"Lisu");
      DAT_1469ecab0 = 1;
      _DAT_1469ecac0 = 0x7a;
      _DAT_1469ecab4 = 0xa4d0;
      DAT_1469ecab8 = 1;
      _DAT_1469ecabc = 0xa4ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecac8,&DAT_144d42aa0,L"UnicodeBlock",&DAT_144d42a50);
      DAT_1469ecae0 = 1;
      _DAT_1469ecaf0 = 0x7b;
      _DAT_1469ecae4 = 0xa500;
      DAT_1469ecae8 = 1;
      _DAT_1469ecaec = 0xa63f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecaf8,L"Cyrillic Extended - B",L"UnicodeBlock",L"CyrillicExtendedB");
      DAT_1469ecb10 = 1;
      _DAT_1469ecb20 = 0x7c;
      _DAT_1469ecb14 = 0xa640;
      DAT_1469ecb18 = 1;
      _DAT_1469ecb1c = 0xa69f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecb28,L"Bamum",L"UnicodeBlock",L"Bamum");
      DAT_1469ecb40 = 1;
      _DAT_1469ecb50 = 0x7d;
      _DAT_1469ecb44 = 0xa6a0;
      DAT_1469ecb48 = 1;
      _DAT_1469ecb4c = 0xa6ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecb58,L"Modifier Tone Letters",L"UnicodeBlock",L"ModifierToneLetters");
      DAT_1469ecb70 = 1;
      _DAT_1469ecb80 = 0x7e;
      _DAT_1469ecb74 = 0xa700;
      DAT_1469ecb78 = 1;
      _DAT_1469ecb7c = 0xa71f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecb88,L"Latin Extended - D",L"UnicodeBlock",L"LatinExtendedD");
      DAT_1469ecba0 = 1;
      _DAT_1469ecba4 = 0xa720;
      DAT_1469ecba8 = 1;
      _DAT_1469ecbac = 0xa7ff;
      _DAT_1469ecbb0 = 0x7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecbb8,L"Syloti Nagri",L"UnicodeBlock",L"SylotiNagri");
      DAT_1469ecbd0 = 1;
      _DAT_1469ecbd4 = 0xa800;
      DAT_1469ecbd8 = 1;
      _DAT_1469ecbdc = 0xa82f;
      _DAT_1469ecbe0 = 0x80;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecbe8,L"Common Indic Number Forms",L"UnicodeBlock",
                 L"CommonIndicNumberForms");
      DAT_1469ecc00 = 1;
      _DAT_1469ecc10 = 0x81;
      _DAT_1469ecc04 = 0xa830;
      DAT_1469ecc08 = 1;
      _DAT_1469ecc0c = 0xa83f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecc18,L"Phags - pa",L"UnicodeBlock",L"PhagsPa");
      DAT_1469ecc30 = 1;
      _DAT_1469ecc40 = 0x82;
      _DAT_1469ecc34 = 0xa840;
      DAT_1469ecc38 = 1;
      _DAT_1469ecc3c = 0xa87f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecc48,L"Saurashtra",L"UnicodeBlock",L"Saurashtra");
      DAT_1469ecc60 = 1;
      _DAT_1469ecc70 = 0x83;
      _DAT_1469ecc64 = 0xa880;
      DAT_1469ecc68 = 1;
      _DAT_1469ecc6c = 0xa8df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecc78,L"Devanagari Extended",L"UnicodeBlock",L"DevanagariExtended");
      DAT_1469ecc90 = 1;
      _DAT_1469ecc94 = 0xa8e0;
      DAT_1469ecc98 = 1;
      _DAT_1469ecc9c = 0xa8ff;
      _DAT_1469ecca0 = 0x84;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecca8,L"Kayah Li",L"UnicodeBlock",L"KayahLi");
      DAT_1469eccc0 = 1;
      _DAT_1469eccd0 = 0x85;
      _DAT_1469eccc4 = 0xa900;
      DAT_1469eccc8 = 1;
      _DAT_1469ecccc = 0xa92f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eccd8,L"Rejang",L"UnicodeBlock",L"Rejang");
      DAT_1469eccf0 = 1;
      _DAT_1469ecd00 = 0x86;
      _DAT_1469eccf4 = 0xa930;
      DAT_1469eccf8 = 1;
      _DAT_1469eccfc = 0xa95f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecd08,L"Hangul Jamo Extended - A",L"UnicodeBlock",L"HangulJamoExtendedA");
      DAT_1469ecd20 = 1;
      _DAT_1469ecd30 = 0x87;
      _DAT_1469ecd24 = 0xa960;
      DAT_1469ecd28 = 1;
      _DAT_1469ecd2c = 0xa97f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecd38,L"Javanese",L"UnicodeBlock",L"Javanese");
      DAT_1469ecd50 = 1;
      _DAT_1469ecd60 = 0x88;
      _DAT_1469ecd54 = 0xa980;
      DAT_1469ecd58 = 1;
      _DAT_1469ecd5c = 0xa9df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecd68,L"Myanmar Extended - B",L"UnicodeBlock",L"MyanmarExtendedB");
      DAT_1469ecd80 = 1;
      _DAT_1469ecd90 = 0x89;
      _DAT_1469ecd84 = 0xa9e0;
      DAT_1469ecd88 = 1;
      _DAT_1469ecd8c = 0xa9ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecd98,L"Cham",L"UnicodeBlock",L"Cham");
      DAT_1469ecdb0 = 1;
      _DAT_1469ecdc0 = 0x8a;
      _DAT_1469ecdb4 = 0xaa00;
      DAT_1469ecdb8 = 1;
      _DAT_1469ecdbc = 0xaa5f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecdc8,L"Myanmar Extended - A",L"UnicodeBlock",L"MyanmarExtendedA");
      DAT_1469ecde0 = 1;
      _DAT_1469ecdf0 = 0x8b;
      _DAT_1469ecde4 = 0xaa60;
      DAT_1469ecde8 = 1;
      _DAT_1469ecdec = 0xaa7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecdf8,L"Tai Viet",L"UnicodeBlock",L"TaiViet");
      DAT_1469ece10 = 1;
      _DAT_1469ece20 = 0x8c;
      _DAT_1469ece14 = 0xaa80;
      DAT_1469ece18 = 1;
      _DAT_1469ece1c = 0xaadf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ece28,L"Meetei Mayek Extensions",L"UnicodeBlock",L"MeeteiMayekExtensions")
      ;
      DAT_1469ece40 = 1;
      _DAT_1469ece50 = 0x8d;
      _DAT_1469ece44 = 0xaae0;
      DAT_1469ece48 = 1;
      _DAT_1469ece4c = 0xaaff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ece58,L"Ethiopic Extended - A",L"UnicodeBlock",L"EthiopicExtendedA");
      DAT_1469ece70 = 1;
      _DAT_1469ece80 = 0x8e;
      _DAT_1469ece74 = 0xab00;
      DAT_1469ece78 = 1;
      _DAT_1469ece7c = 0xab2f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ece88,L"Latin Extended - E",L"UnicodeBlock",L"LatinExtendedE");
      DAT_1469ecea0 = 1;
      _DAT_1469eceb0 = 0x8f;
      _DAT_1469ecea4 = 0xab30;
      DAT_1469ecea8 = 1;
      _DAT_1469eceac = 0xab6f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eceb8,L"Cherokee Supplement",L"UnicodeBlock",L"CherokeeSupplement");
      DAT_1469eced0 = 1;
      _DAT_1469ecee0 = 0x90;
      _DAT_1469eced4 = 0xab70;
      DAT_1469eced8 = 1;
      _DAT_1469ecedc = 0xabbf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecee8,L"Meetei Mayek",L"UnicodeBlock",L"MeeteiMayek");
      DAT_1469ecf00 = 1;
      _DAT_1469ecf10 = 0x91;
      _DAT_1469ecf04 = 0xabc0;
      DAT_1469ecf08 = 1;
      _DAT_1469ecf0c = 0xabff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecf18,L"Hangul Syllables",L"UnicodeBlock",L"HangulSyllables");
      DAT_1469ecf30 = 1;
      _DAT_1469ecf40 = 0x92;
      _DAT_1469ecf34 = 0xac00;
      DAT_1469ecf38 = 1;
      _DAT_1469ecf3c = 0xd7af;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecf48,L"Hangul Jamo Extended - B",L"UnicodeBlock",L"HangulJamoExtendedB");
      DAT_1469ecf60 = 1;
      _DAT_1469ecf64 = 0xd7b0;
      _DAT_1469ecf70 = 0x93;
      DAT_1469ecf68 = 1;
      _DAT_1469ecf6c = 0xd7ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecf78,L"High Surrogates",L"UnicodeBlock",L"HighSurrogates");
      DAT_1469ecf90 = 1;
      _DAT_1469ecfa0 = 0x94;
      _DAT_1469ecf94 = 0xd800;
      DAT_1469ecf98 = 1;
      _DAT_1469ecf9c = 0xdb7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecfa8,L"High Private Use Surrogates",L"UnicodeBlock",
                 L"HighPrivateUseSurrogates");
      DAT_1469ecfc0 = 1;
      _DAT_1469ecfd0 = 0x95;
      _DAT_1469ecfc4 = 0xdb80;
      DAT_1469ecfc8 = 1;
      _DAT_1469ecfcc = 0xdbff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ecfd8,L"Low Surrogates",L"UnicodeBlock",L"LowSurrogates");
      DAT_1469ecff0 = 1;
      _DAT_1469ed000 = 0x96;
      _DAT_1469ecff4 = 0xdc00;
      DAT_1469ecff8 = 1;
      _DAT_1469ecffc = 0xdfff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed008,L"Private Use Area",L"UnicodeBlock",L"PrivateUseArea");
      DAT_1469ed020 = 1;
      _DAT_1469ed030 = 0x97;
      _DAT_1469ed024 = 0xe000;
      DAT_1469ed028 = 1;
      _DAT_1469ed02c = 0xf8ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed038,L"CJK Compatibility Ideographs",L"UnicodeBlock",
                 L"CJKCompatibilityIdeographs");
      DAT_1469ed050 = 1;
      _DAT_1469ed060 = 0x98;
      _DAT_1469ed054 = 0xf900;
      DAT_1469ed058 = 1;
      _DAT_1469ed05c = 0xfaff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed068,L"Alphabetic Presentation Forms",L"UnicodeBlock",
                 L"AlphabeticPresentationForms");
      DAT_1469ed080 = 1;
      _DAT_1469ed090 = 0x99;
      _DAT_1469ed084 = 0xfb00;
      DAT_1469ed088 = 1;
      _DAT_1469ed08c = 0xfb4f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed098,L"Arabic Presentation Forms - A",L"UnicodeBlock",
                 L"ArabicPresentationFormsA");
      DAT_1469ed0b0 = 1;
      _DAT_1469ed0b4 = 0xfb50;
      DAT_1469ed0b8 = 1;
      _DAT_1469ed0bc = 0xfdff;
      _DAT_1469ed0c0 = 0x9a;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed0c8,L"Variation Selectors",L"UnicodeBlock",L"VariationSelectors");
      DAT_1469ed0e0 = 1;
      _DAT_1469ed0f0 = 0x9b;
      _DAT_1469ed0e4 = 0xfe00;
      DAT_1469ed0e8 = 1;
      _DAT_1469ed0ec = 0xfe0f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed0f8,L"Vertical Forms",L"UnicodeBlock",L"VerticalForms");
      DAT_1469ed110 = 1;
      _DAT_1469ed120 = 0x9c;
      _DAT_1469ed114 = 0xfe10;
      DAT_1469ed118 = 1;
      _DAT_1469ed11c = 0xfe1f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed128,L"Combining Half Marks",L"UnicodeBlock",L"CombiningHalfMarks");
      DAT_1469ed140 = 1;
      _DAT_1469ed150 = 0x9d;
      _DAT_1469ed144 = 0xfe20;
      DAT_1469ed148 = 1;
      _DAT_1469ed14c = 0xfe2f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed158,L"CJK Compatibility Forms",L"UnicodeBlock",L"CJKCompatibilityForms")
      ;
      DAT_1469ed170 = 1;
      _DAT_1469ed180 = 0x9e;
      _DAT_1469ed174 = 0xfe30;
      DAT_1469ed178 = 1;
      _DAT_1469ed17c = 0xfe4f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed188,L"Small Form Variants",L"UnicodeBlock",L"SmallFormVariants");
      DAT_1469ed1a0 = 1;
      _DAT_1469ed1b0 = 0x9f;
      _DAT_1469ed1a4 = 0xfe50;
      DAT_1469ed1a8 = 1;
      _DAT_1469ed1ac = 0xfe6f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed1b8,L"Arabic Presentation Forms - B",L"UnicodeBlock",
                 L"ArabicPresentationFormsB");
      DAT_1469ed1d0 = 1;
      _DAT_1469ed1e0 = 0xa0;
      _DAT_1469ed1d4 = 0xfe70;
      DAT_1469ed1d8 = 1;
      _DAT_1469ed1dc = 0xfeff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed1e8,L"Halfwidth and Fullwidth Forms",L"UnicodeBlock",
                 L"HalfwidthAndFullwidthForms");
      DAT_1469ed200 = 1;
      _DAT_1469ed210 = 0xa1;
      _DAT_1469ed204 = 0xff00;
      DAT_1469ed208 = 1;
      _DAT_1469ed20c = 0xffef;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed218,L"Specials",L"UnicodeBlock",L"Specials");
      DAT_1469ed230 = 1;
      _DAT_1469ed240 = 0xa2;
      _DAT_1469ed234 = 0xfff0;
      DAT_1469ed238 = 1;
      _DAT_1469ed23c = 0xffff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed248,L"Linear B Syllabary",L"UnicodeBlock",L"LinearBSyllabary");
      DAT_1469ed260 = 1;
      _DAT_1469ed270 = 0xa3;
      _DAT_1469ed264 = 0x10000;
      DAT_1469ed268 = 1;
      _DAT_1469ed26c = 0x1007f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed278,L"Linear B Ideograms",L"UnicodeBlock",L"LinearBIdeograms");
      DAT_1469ed290 = 1;
      _DAT_1469ed2a0 = 0xa4;
      _DAT_1469ed294 = 0x10080;
      DAT_1469ed298 = 1;
      _DAT_1469ed29c = 0x100ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed2a8,L"Aegean Numbers",L"UnicodeBlock",L"AegeanNumbers");
      DAT_1469ed2c0 = 1;
      _DAT_1469ed2d0 = 0xa5;
      _DAT_1469ed2c4 = 0x10100;
      DAT_1469ed2c8 = 1;
      _DAT_1469ed2cc = 0x1013f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed2d8,L"Ancient Greek Numbers",L"UnicodeBlock",L"AncientGreekNumbers");
      DAT_1469ed2f0 = 1;
      _DAT_1469ed300 = 0xa6;
      _DAT_1469ed2f4 = 0x10140;
      DAT_1469ed2f8 = 1;
      _DAT_1469ed2fc = 0x1018f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed308,L"Ancient Symbols",L"UnicodeBlock",L"AncientSymbols");
      DAT_1469ed320 = 1;
      _DAT_1469ed330 = 0xa7;
      _DAT_1469ed324 = 0x10190;
      DAT_1469ed328 = 1;
      _DAT_1469ed32c = 65999;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed338,L"Phaistos Disc",L"UnicodeBlock",L"PhaistosDisc");
      DAT_1469ed350 = 1;
      _DAT_1469ed360 = 0xa8;
      _DAT_1469ed354 = 66000;
      DAT_1469ed358 = 1;
      _DAT_1469ed35c = 0x101ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed368,L"Lycian",L"UnicodeBlock",L"Lycian");
      DAT_1469ed380 = 1;
      _DAT_1469ed384 = 0x10280;
      DAT_1469ed388 = 1;
      _DAT_1469ed390 = 0xa9;
      _DAT_1469ed38c = 0x1029f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed398,L"Carian",L"UnicodeBlock",L"Carian");
      DAT_1469ed3b0 = 1;
      _DAT_1469ed3c0 = 0xaa;
      _DAT_1469ed3b4 = 0x102a0;
      DAT_1469ed3b8 = 1;
      _DAT_1469ed3bc = 0x102df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed3c8,L"Coptic Epact Numbers",L"UnicodeBlock",L"CopticEpactNumbers");
      DAT_1469ed3e0 = 1;
      _DAT_1469ed3f0 = 0xab;
      _DAT_1469ed3e4 = 0x102e0;
      DAT_1469ed3e8 = 1;
      _DAT_1469ed3ec = 0x102ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed3f8,L"Old Italic",L"UnicodeBlock",L"OldItalic");
      DAT_1469ed410 = 1;
      _DAT_1469ed420 = 0xac;
      _DAT_1469ed414 = 0x10300;
      DAT_1469ed418 = 1;
      _DAT_1469ed41c = 0x1032f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed428,L"Gothic",L"UnicodeBlock",L"Gothic");
      DAT_1469ed440 = 1;
      _DAT_1469ed450 = 0xad;
      _DAT_1469ed444 = 0x10330;
      DAT_1469ed448 = 1;
      _DAT_1469ed44c = 0x1034f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed458,L"Old Permic",L"UnicodeBlock",L"OldPermic");
      DAT_1469ed470 = 1;
      _DAT_1469ed480 = 0xae;
      _DAT_1469ed474 = 0x10350;
      DAT_1469ed478 = 1;
      _DAT_1469ed47c = 0x1037f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed488,L"Ugaritic",L"UnicodeBlock",L"Ugaritic");
      DAT_1469ed4a0 = 1;
      _DAT_1469ed4b0 = 0xaf;
      _DAT_1469ed4a4 = 0x10380;
      DAT_1469ed4a8 = 1;
      _DAT_1469ed4ac = 0x1039f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed4b8,L"Old Persian",L"UnicodeBlock",L"Old Persian");
      DAT_1469ed4d0 = 1;
      _DAT_1469ed4e0 = 0xb0;
      _DAT_1469ed4d4 = 0x103a0;
      DAT_1469ed4d8 = 1;
      _DAT_1469ed4dc = 0x103df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed4e8,L"Deseret",L"UnicodeBlock",L"Deseret");
      DAT_1469ed500 = 1;
      _DAT_1469ed510 = 0xb1;
      _DAT_1469ed504 = 0x10400;
      DAT_1469ed508 = 1;
      _DAT_1469ed50c = 0x1044f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed518,L"Shavian",L"UnicodeBlock",L"Shavian");
      DAT_1469ed530 = 1;
      _DAT_1469ed540 = 0xb2;
      _DAT_1469ed534 = 0x10450;
      DAT_1469ed538 = 1;
      _DAT_1469ed53c = 0x1047f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed548,L"Osmanya",L"UnicodeBlock",L"Osmanya");
      DAT_1469ed560 = 1;
      _DAT_1469ed570 = 0xb3;
      _DAT_1469ed564 = 0x10480;
      DAT_1469ed568 = 1;
      _DAT_1469ed56c = 0x104af;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed578,L"Osage",L"UnicodeBlock",L"Osage");
      DAT_1469ed590 = 1;
      _DAT_1469ed5a0 = 0xb4;
      _DAT_1469ed594 = 0x104b0;
      DAT_1469ed598 = 1;
      _DAT_1469ed59c = 0x104ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed5a8,L"Elbasan",L"UnicodeBlock",L"Elbasan");
      DAT_1469ed5c0 = 1;
      _DAT_1469ed5d0 = 0xb5;
      _DAT_1469ed5c4 = 0x10500;
      DAT_1469ed5c8 = 1;
      _DAT_1469ed5cc = 0x1052f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed5d8,L"Caucasian Albanian",L"UnicodeBlock",L"CaucasianAlbanian");
      DAT_1469ed5f0 = 1;
      _DAT_1469ed600 = 0xb6;
      _DAT_1469ed5f4 = 0x10530;
      DAT_1469ed5f8 = 1;
      _DAT_1469ed5fc = 0x1056f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed608,L"Linear A",L"UnicodeBlock",L"LinearA");
      DAT_1469ed620 = 1;
      _DAT_1469ed630 = 0xb7;
      _DAT_1469ed624 = 0x10600;
      DAT_1469ed628 = 1;
      _DAT_1469ed62c = 0x1077f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed638,L"Cypriot Syllabary",L"UnicodeBlock",L"CypriotSyllabary");
      DAT_1469ed650 = 1;
      _DAT_1469ed660 = 0xb8;
      _DAT_1469ed654 = 0x10800;
      DAT_1469ed658 = 1;
      _DAT_1469ed65c = 0x1083f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed668,L"Imperial Aramaic",L"UnicodeBlock",L"ImperialAramaic");
      DAT_1469ed680 = 1;
      _DAT_1469ed690 = 0xb9;
      _DAT_1469ed684 = 0x10840;
      DAT_1469ed688 = 1;
      _DAT_1469ed68c = 0x1085f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed698,L"Palmyrene",L"UnicodeBlock",L"Palmyrene");
      DAT_1469ed6b0 = 1;
      _DAT_1469ed6c0 = 0xba;
      _DAT_1469ed6b4 = 0x10860;
      DAT_1469ed6b8 = 1;
      _DAT_1469ed6bc = 0x1087f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed6c8,L"Nabataean",L"UnicodeBlock",L"Nabataean");
      DAT_1469ed6e0 = 1;
      _DAT_1469ed6f0 = 0xbb;
      _DAT_1469ed6e4 = 0x10880;
      DAT_1469ed6e8 = 1;
      _DAT_1469ed6ec = 0x108af;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed6f8,L"Hatran",L"UnicodeBlock",L"Hatran");
      DAT_1469ed710 = 1;
      _DAT_1469ed720 = 0xbc;
      _DAT_1469ed714 = 0x108e0;
      DAT_1469ed718 = 1;
      _DAT_1469ed71c = 0x108ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed728,L"Phoenician",L"UnicodeBlock",L"Phoenician");
      DAT_1469ed740 = 1;
      _DAT_1469ed750 = 0xbd;
      _DAT_1469ed744 = 0x10900;
      DAT_1469ed748 = 1;
      _DAT_1469ed74c = 0x1091f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed758,L"Lydian",L"UnicodeBlock",L"Lydian");
      DAT_1469ed770 = 1;
      _DAT_1469ed780 = 0xbe;
      _DAT_1469ed774 = 0x10920;
      DAT_1469ed778 = 1;
      _DAT_1469ed77c = 0x1093f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed788,L"Meroitic Hieroglyphs",L"UnicodeBlock",L"MeroiticHieroglyphs");
      DAT_1469ed7a0 = 1;
      _DAT_1469ed7a4 = 0x10980;
      DAT_1469ed7a8 = 1;
      _DAT_1469ed7ac = 67999;
      _DAT_1469ed7b0 = 0xbf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed7b8,L"Meroitic Cursive",L"UnicodeBlock",L"MeroiticCursive");
      DAT_1469ed7d0 = 1;
      _DAT_1469ed7e0 = 0xc0;
      _DAT_1469ed7d4 = 68000;
      DAT_1469ed7d8 = 1;
      _DAT_1469ed7dc = 0x109ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed7e8,L"Kharoshthi",L"UnicodeBlock",L"Kharoshthi");
      DAT_1469ed800 = 1;
      _DAT_1469ed810 = 0xc1;
      _DAT_1469ed804 = 0x10a00;
      DAT_1469ed808 = 1;
      _DAT_1469ed80c = 0x10a5f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed818,L"Old South Arabian",L"UnicodeBlock",L"OldSouthArabian");
      DAT_1469ed830 = 1;
      _DAT_1469ed840 = 0xc2;
      _DAT_1469ed834 = 0x10a60;
      DAT_1469ed838 = 1;
      _DAT_1469ed83c = 0x10a7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed848,L"Old North Arabian",L"UnicodeBlock",L"OldNorthArabian");
      DAT_1469ed860 = 1;
      _DAT_1469ed870 = 0xc3;
      _DAT_1469ed864 = 0x10a80;
      DAT_1469ed868 = 1;
      _DAT_1469ed86c = 0x10a9f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed878,L"Manichaean",L"UnicodeBlock",L"Manichaean");
      DAT_1469ed890 = 1;
      _DAT_1469ed8a0 = 0xc4;
      _DAT_1469ed894 = 0x10ac0;
      DAT_1469ed898 = 1;
      _DAT_1469ed89c = 0x10aff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed8a8,L"Avestan",L"UnicodeBlock",L"Avestan");
      DAT_1469ed8c0 = 1;
      _DAT_1469ed8d0 = 0xc5;
      _DAT_1469ed8c4 = 0x10b00;
      DAT_1469ed8c8 = 1;
      _DAT_1469ed8cc = 0x10b3f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed8d8,L"Inscriptional Parthian",L"UnicodeBlock",L"InscriptionalParthian");
      DAT_1469ed8f0 = 1;
      _DAT_1469ed900 = 0xc6;
      _DAT_1469ed8f4 = 0x10b40;
      DAT_1469ed8f8 = 1;
      _DAT_1469ed8fc = 0x10b5f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed908,L"Inscriptional Pahlavi",L"UnicodeBlock",L"InscriptionalPahlavi");
      DAT_1469ed920 = 1;
      _DAT_1469ed930 = 199;
      _DAT_1469ed924 = 0x10b60;
      DAT_1469ed928 = 1;
      _DAT_1469ed92c = 0x10b7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed938,L"Psalter Pahlavi",L"UnicodeBlock",L"PsalterPahlavi");
      DAT_1469ed950 = 1;
      _DAT_1469ed960 = 200;
      _DAT_1469ed954 = 0x10b80;
      DAT_1469ed958 = 1;
      _DAT_1469ed95c = 0x10baf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed968,L"Old Turkic",L"UnicodeBlock",L"OldTurkic");
      DAT_1469ed980 = 1;
      _DAT_1469ed990 = 0xc9;
      _DAT_1469ed984 = 0x10c00;
      DAT_1469ed988 = 1;
      _DAT_1469ed98c = 0x10c4f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed998,L"Old Hungarian",L"UnicodeBlock",L"OldHungarian");
      DAT_1469ed9b0 = 1;
      _DAT_1469ed9c0 = 0xca;
      _DAT_1469ed9b4 = 0x10c80;
      DAT_1469ed9b8 = 1;
      _DAT_1469ed9bc = 0x10cff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed9c8,L"Rumi Numeral Symbols",L"UnicodeBlock",L"RumiNumeralSymbols");
      DAT_1469ed9e0 = 1;
      _DAT_1469ed9f0 = 0xcb;
      _DAT_1469ed9e4 = 0x10e60;
      DAT_1469ed9e8 = 1;
      _DAT_1469ed9ec = 0x10e7f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ed9f8,L"Brahmi",L"UnicodeBlock",L"Brahmi");
      DAT_1469eda10 = 1;
      _DAT_1469eda20 = 0xcc;
      _DAT_1469eda14 = 0x11000;
      DAT_1469eda18 = 1;
      _DAT_1469eda1c = 0x1107f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eda28,L"Kaithi",L"UnicodeBlock",L"Kaithi");
      DAT_1469eda40 = 1;
      _DAT_1469eda50 = 0xcd;
      _DAT_1469eda44 = 0x11080;
      DAT_1469eda48 = 1;
      _DAT_1469eda4c = 0x110cf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eda58,L"Sora Sompeng",L"UnicodeBlock",L"SoraSompeng");
      DAT_1469eda70 = 1;
      _DAT_1469eda80 = 0xce;
      _DAT_1469eda74 = 0x110d0;
      DAT_1469eda78 = 1;
      _DAT_1469eda7c = 0x110ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eda88,L"Chakma",L"UnicodeBlock",L"Chakma");
      DAT_1469edaa0 = 1;
      _DAT_1469edab0 = 0xcf;
      _DAT_1469edaa4 = 0x11100;
      DAT_1469edaa8 = 1;
      _DAT_1469edaac = 0x1114f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edab8,L"Mahajani",L"UnicodeBlock",L"Mahajani");
      DAT_1469edad0 = 1;
      _DAT_1469edae0 = 0xd0;
      _DAT_1469edad4 = 0x11150;
      DAT_1469edad8 = 1;
      _DAT_1469edadc = 0x1117f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edae8,L"Sharada",L"UnicodeBlock",L"Sharada");
      DAT_1469edb00 = 1;
      _DAT_1469edb10 = 0xd1;
      _DAT_1469edb04 = 0x11180;
      DAT_1469edb08 = 1;
      _DAT_1469edb0c = 0x111df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edb18,L"Sinhala Archaic Numbers",L"UnicodeBlock",L"SinhalaArchaicNumbers")
      ;
      DAT_1469edb30 = 1;
      _DAT_1469edb40 = 0xd2;
      _DAT_1469edb34 = 0x111e0;
      DAT_1469edb38 = 1;
      _DAT_1469edb3c = 0x111ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edb48,L"Khojki",L"UnicodeBlock",L"Khojki");
      DAT_1469edb60 = 1;
      _DAT_1469edb70 = 0xd3;
      _DAT_1469edb64 = 0x11200;
      DAT_1469edb68 = 1;
      _DAT_1469edb6c = 0x1124f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edb78,L"Multani",L"UnicodeBlock",L"Multani");
      DAT_1469edb90 = 1;
      _DAT_1469edba0 = 0xd4;
      _DAT_1469edb94 = 0x11280;
      DAT_1469edb98 = 1;
      _DAT_1469edb9c = 0x112af;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edba8,L"Khudawadi",L"UnicodeBlock",L"Khudawadi");
      DAT_1469edbc0 = 1;
      _DAT_1469edbc4 = 0x112b0;
      DAT_1469edbc8 = 1;
      _DAT_1469edbcc = 0x112ff;
      _DAT_1469edbd0 = 0xd5;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edbd8,L"Grantha",L"UnicodeBlock",L"Grantha");
      DAT_1469edbf0 = 1;
      _DAT_1469edc00 = 0xd6;
      _DAT_1469edbf4 = 0x11300;
      DAT_1469edbf8 = 1;
      _DAT_1469edbfc = 0x1137f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edc08,L"Newa",L"UnicodeBlock",L"Newa");
      DAT_1469edc20 = 1;
      _DAT_1469edc30 = 0xd7;
      _DAT_1469edc24 = 0x11400;
      DAT_1469edc28 = 1;
      _DAT_1469edc2c = 0x1147f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edc38,L"Tirhuta",L"UnicodeBlock",L"Tirhuta");
      DAT_1469edc50 = 1;
      _DAT_1469edc60 = 0xd8;
      _DAT_1469edc54 = 0x11480;
      DAT_1469edc58 = 1;
      _DAT_1469edc5c = 0x114df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edc68,L"Siddham",L"UnicodeBlock",L"Siddham");
      DAT_1469edc80 = 1;
      _DAT_1469edc90 = 0xd9;
      _DAT_1469edc84 = 0x11580;
      DAT_1469edc88 = 1;
      _DAT_1469edc8c = 0x115ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edc98,L"Modi",L"UnicodeBlock",L"Modi");
      DAT_1469edcb0 = 1;
      _DAT_1469edcc0 = 0xda;
      _DAT_1469edcb4 = 0x11600;
      DAT_1469edcb8 = 1;
      _DAT_1469edcbc = 0x1165f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edcc8,L"Mongolian Supplement",L"UnicodeBlock",L"MongolianSupplement");
      DAT_1469edce0 = 1;
      _DAT_1469edcf0 = 0xdb;
      _DAT_1469edce4 = 0x11660;
      DAT_1469edce8 = 1;
      _DAT_1469edcec = 0x1167f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edcf8,L"Takri",L"UnicodeBlock",L"Takri");
      DAT_1469edd10 = 1;
      _DAT_1469edd20 = 0xdc;
      _DAT_1469edd14 = 0x11680;
      DAT_1469edd18 = 1;
      _DAT_1469edd1c = 0x116cf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edd28,L"Ahom",L"UnicodeBlock",L"Ahom");
      DAT_1469edd40 = 1;
      _DAT_1469edd50 = 0xdd;
      _DAT_1469edd44 = 0x11700;
      DAT_1469edd48 = 1;
      _DAT_1469edd4c = 0x1173f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edd58,L"Warang Citi",L"UnicodeBlock",L"WarangCiti");
      DAT_1469edd70 = 1;
      _DAT_1469edd80 = 0xde;
      _DAT_1469edd74 = 0x118a0;
      DAT_1469edd78 = 1;
      _DAT_1469edd7c = 0x118ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edd88,L"Pau Cin Hau",L"UnicodeBlock",L"PauCinHau");
      DAT_1469edda0 = 1;
      _DAT_1469eddb0 = 0xdf;
      _DAT_1469edda4 = 0x11ac0;
      DAT_1469edda8 = 1;
      _DAT_1469eddac = 0x11aff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eddb8,L"Bhaiksuki",L"UnicodeBlock",L"Bhaiksuki");
      DAT_1469eddd0 = 1;
      _DAT_1469edde0 = 0xe0;
      _DAT_1469eddd4 = 0x11c00;
      DAT_1469eddd8 = 1;
      _DAT_1469edddc = 0x11c6f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edde8,L"Marchen",L"UnicodeBlock",L"Marchen");
      DAT_1469ede00 = 1;
      _DAT_1469ede10 = 0xe1;
      _DAT_1469ede04 = 0x11c70;
      DAT_1469ede08 = 1;
      _DAT_1469ede0c = 0x11cbf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ede18,L"Cuneiform",L"UnicodeBlock",L"Cuneiform");
      DAT_1469ede30 = 1;
      _DAT_1469ede40 = 0xe2;
      _DAT_1469ede34 = 0x12000;
      DAT_1469ede38 = 1;
      _DAT_1469ede3c = 0x123ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ede48,L"Cuneiform Numbers and Punctuation",L"UnicodeBlock",
                 L"CuneiformNumbersAndPunctuation");
      DAT_1469ede60 = 1;
      _DAT_1469ede70 = 0xe3;
      _DAT_1469ede64 = 0x12400;
      DAT_1469ede68 = 1;
      _DAT_1469ede6c = 0x1247f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ede78,L"Early Dynastic Cuneiform",L"UnicodeBlock",
                 L"EarlyDynasticCuneiform");
      DAT_1469ede90 = 1;
      _DAT_1469ede94 = 0x12480;
      _DAT_1469edea0 = 0xe4;
      DAT_1469ede98 = 1;
      _DAT_1469ede9c = 0x1254f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edea8,L"Egyptian Hieroglyphs",L"UnicodeBlock",L"EgyptianHieroglyphs");
      DAT_1469edec0 = 1;
      _DAT_1469eded0 = 0xe5;
      _DAT_1469edec4 = 0x13000;
      DAT_1469edec8 = 1;
      _DAT_1469edecc = 0x1342f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469eded8,L"Anatolian Hieroglyphs",L"UnicodeBlock",L"AnatolianHieroglyphs");
      DAT_1469edef0 = 1;
      _DAT_1469edf00 = 0xe6;
      _DAT_1469edef4 = 0x14400;
      DAT_1469edef8 = 1;
      _DAT_1469edefc = 0x1467f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edf08,L"Bamum Supplement",L"UnicodeBlock",L"BamumSupplement");
      DAT_1469edf20 = 1;
      _DAT_1469edf30 = 0xe7;
      _DAT_1469edf24 = 0x16800;
      DAT_1469edf28 = 1;
      _DAT_1469edf2c = 0x16a3f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edf38,&DAT_144d46ff0,L"UnicodeBlock",&DAT_144d46f98);
      DAT_1469edf50 = 1;
      _DAT_1469edf60 = 0xe8;
      _DAT_1469edf54 = 0x16a40;
      DAT_1469edf58 = 1;
      _DAT_1469edf5c = 0x16a6f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edf68,L"Bassa Vah",L"UnicodeBlock",L"BassaVah");
      DAT_1469edf80 = 1;
      _DAT_1469edf90 = 0xe9;
      _DAT_1469edf84 = 0x16ad0;
      DAT_1469edf88 = 1;
      _DAT_1469edf8c = 0x16aff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edf98,L"Pahawh Hmong",L"UnicodeBlock",L"PahawhHmong");
      DAT_1469edfb0 = 1;
      _DAT_1469edfc0 = 0xea;
      _DAT_1469edfb4 = 0x16b00;
      DAT_1469edfb8 = 1;
      _DAT_1469edfbc = 0x16b8f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edfc8,L"Miao",L"UnicodeBlock",L"Miao");
      DAT_1469edfe0 = 1;
      _DAT_1469edfe4 = 0x16f00;
      DAT_1469edfe8 = 1;
      _DAT_1469edfec = 0x16f9f;
      _DAT_1469edff0 = 0xeb;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469edff8,L"Ideographic Symbols and Punctuation",L"UnicodeBlock",
                 L"IdeographicSymbolsAndPunctuation");
      DAT_1469ee010 = 1;
      _DAT_1469ee020 = 0xec;
      _DAT_1469ee014 = 0x16fe0;
      DAT_1469ee018 = 1;
      _DAT_1469ee01c = 0x16fff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee028,L"Tangut",L"UnicodeBlock",L"Tangut");
      DAT_1469ee040 = 1;
      _DAT_1469ee050 = 0xed;
      _DAT_1469ee044 = 0x17000;
      DAT_1469ee048 = 1;
      _DAT_1469ee04c = 0x187ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee058,L"Tangut Components",L"UnicodeBlock",L"TangutComponents");
      DAT_1469ee070 = 1;
      _DAT_1469ee080 = 0xee;
      _DAT_1469ee074 = 0x18800;
      DAT_1469ee078 = 1;
      _DAT_1469ee07c = 0x18aff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee088,L"Kana Supplement",L"UnicodeBlock",L"KanaSupplement");
      DAT_1469ee0a0 = 1;
      _DAT_1469ee0b0 = 0xef;
      _DAT_1469ee0a4 = 0x1b000;
      DAT_1469ee0a8 = 1;
      _DAT_1469ee0ac = 0x1b0ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee0b8,L"Duployan",L"UnicodeBlock",L"Duployan");
      DAT_1469ee0d0 = 1;
      _DAT_1469ee0e0 = 0xf0;
      _DAT_1469ee0d4 = 0x1bc00;
      DAT_1469ee0d8 = 1;
      _DAT_1469ee0dc = 0x1bc9f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee0e8,L"Shorthand Format Controls",L"UnicodeBlock",
                 L"ShorthandFormatControls");
      DAT_1469ee100 = 1;
      _DAT_1469ee110 = 0xf1;
      _DAT_1469ee104 = 0x1bca0;
      DAT_1469ee108 = 1;
      _DAT_1469ee10c = 0x1bcaf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee118,L"Byzantine Musical Symbols",L"UnicodeBlock",
                 L"ByzantineMusicalSymbols");
      DAT_1469ee130 = 1;
      _DAT_1469ee140 = 0xf2;
      _DAT_1469ee134 = 0x1d000;
      DAT_1469ee138 = 1;
      _DAT_1469ee13c = 0x1d0ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee148,L"Musical Symbols",L"UnicodeBlock",L"MusicalSymbols");
      DAT_1469ee160 = 1;
      _DAT_1469ee170 = 0xf3;
      _DAT_1469ee164 = 0x1d100;
      DAT_1469ee168 = 1;
      _DAT_1469ee16c = 0x1d1ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee178,L"Ancient Greek Musical Notation",L"UnicodeBlock",
                 L"AncientGreekMusicalNotation");
      DAT_1469ee190 = 1;
      _DAT_1469ee1a0 = 0xf4;
      _DAT_1469ee194 = 0x1d200;
      DAT_1469ee198 = 1;
      _DAT_1469ee19c = 0x1d24f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee1a8,L"Tai Xuan Jing Symbols",L"UnicodeBlock",L"TaiXuanJingSymbols");
      DAT_1469ee1c0 = 1;
      _DAT_1469ee1d0 = 0xf5;
      _DAT_1469ee1c4 = 0x1d300;
      DAT_1469ee1c8 = 1;
      _DAT_1469ee1cc = 0x1d35f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee1d8,L"Counting Rod Numerals",L"UnicodeBlock",L"CountingRodNumerals");
      DAT_1469ee1f0 = 1;
      _DAT_1469ee200 = 0xf6;
      _DAT_1469ee1f4 = 0x1d360;
      DAT_1469ee1f8 = 1;
      _DAT_1469ee1fc = 0x1d37f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee208,L"Mathematical Alphanumeric Symbols",L"UnicodeBlock",
                 L"MathematicalAlphanumericSymbols");
      DAT_1469ee220 = 1;
      _DAT_1469ee230 = 0xf7;
      _DAT_1469ee224 = 0x1d400;
      DAT_1469ee228 = 1;
      _DAT_1469ee22c = 0x1d7ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee238,L"Sutton SignWriting",L"UnicodeBlock",L"SuttonSignWriting");
      DAT_1469ee250 = 1;
      _DAT_1469ee260 = 0xf8;
      _DAT_1469ee254 = 0x1d800;
      DAT_1469ee258 = 1;
      _DAT_1469ee25c = 0x1daaf;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee268,L"Glagolitic Supplement",L"UnicodeBlock",L"GlagoliticSupplement");
      DAT_1469ee280 = 1;
      _DAT_1469ee290 = 0xf9;
      _DAT_1469ee284 = 0x1e000;
      DAT_1469ee288 = 1;
      _DAT_1469ee28c = 0x1e02f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee298,L"Mende Kikakui",L"UnicodeBlock",L"MendeKikakui");
      DAT_1469ee2b0 = 1;
      _DAT_1469ee2b4 = 0x1e800;
      DAT_1469ee2b8 = 1;
      _DAT_1469ee2c0 = 0xfa;
      _DAT_1469ee2bc = 0x1e8df;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee2c8,L"Adlam",L"UnicodeBlock",L"Adlam");
      DAT_1469ee2e0 = 1;
      _DAT_1469ee2f0 = 0xfb;
      _DAT_1469ee2e4 = 0x1e900;
      DAT_1469ee2e8 = 1;
      _DAT_1469ee2ec = 0x1e95f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee2f8,L"Arabic Mathematical Alphabetic Symbols",L"UnicodeBlock",
                 L"ArabicMathematicalAlphabeticSymbols");
      DAT_1469ee310 = 1;
      _DAT_1469ee320 = 0xfc;
      _DAT_1469ee314 = 0x1ee00;
      DAT_1469ee318 = 1;
      _DAT_1469ee31c = 0x1eeff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee328,L"Mahjong Tiles",L"UnicodeBlock",L"MahjongTiles");
      DAT_1469ee340 = 1;
      _DAT_1469ee350 = 0xfd;
      _DAT_1469ee344 = 0x1f000;
      DAT_1469ee348 = 1;
      _DAT_1469ee34c = 0x1f02f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee358,L"Domino Tiles",L"UnicodeBlock",L"DominoTiles");
      DAT_1469ee370 = 1;
      _DAT_1469ee380 = 0xfe;
      _DAT_1469ee374 = 0x1f030;
      DAT_1469ee378 = 1;
      _DAT_1469ee37c = 0x1f09f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee388,L"Playing Cards",L"UnicodeBlock",L"PlayingCards");
      DAT_1469ee3a0 = 1;
      _DAT_1469ee3a4 = 0x1f0a0;
      DAT_1469ee3a8 = 1;
      _DAT_1469ee3ac = 0x1f0ff;
      _DAT_1469ee3b0 = 0xff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee3b8,L"Enclosed Alphanumeric Supplement",L"UnicodeBlock",
                 L"EnclosedAlphanumericSupplement");
      DAT_1469ee3d0 = 1;
      _DAT_1469ee3d4 = 0x1f100;
      DAT_1469ee3d8 = 1;
      _DAT_1469ee3dc = 0x1f1ff;
      _DAT_1469ee3e0 = 0x100;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee3e8,L"Enclosed Ideographic Supplement",L"UnicodeBlock",
                 L"EnclosedIdeographicSupplement");
      DAT_1469ee400 = 1;
      _DAT_1469ee410 = 0x101;
      _DAT_1469ee404 = 0x1f200;
      DAT_1469ee408 = 1;
      _DAT_1469ee40c = 0x1f2ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee418,L"Miscellaneous Symbols and Pictographs",L"UnicodeBlock",
                 L"MiscellaneousSymbolsAndPictographs");
      DAT_1469ee430 = 1;
      _DAT_1469ee440 = 0x102;
      _DAT_1469ee434 = 0x1f300;
      DAT_1469ee438 = 1;
      _DAT_1469ee43c = 0x1f5ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee448,L"Emoticons (Emoji)",L"UnicodeBlock",L"EmoticonsEmoji");
      DAT_1469ee460 = 1;
      _DAT_1469ee470 = 0x103;
      _DAT_1469ee464 = 0x1f600;
      DAT_1469ee468 = 1;
      _DAT_1469ee46c = 0x1f64f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee478,L"Ornamental Dingbats",L"UnicodeBlock",L"OrnamentalDingbats");
      DAT_1469ee490 = 1;
      _DAT_1469ee4a0 = 0x104;
      _DAT_1469ee494 = 0x1f650;
      DAT_1469ee498 = 1;
      _DAT_1469ee49c = 0x1f67f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee4a8,L"Transport and Map Symbols",L"UnicodeBlock",
                 L"TransportAndMapSymbols");
      DAT_1469ee4c0 = 1;
      _DAT_1469ee4d0 = 0x105;
      _DAT_1469ee4c4 = 0x1f680;
      DAT_1469ee4c8 = 1;
      _DAT_1469ee4cc = 0x1f6ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee4d8,L"Alchemical Symbols",L"UnicodeBlock",L"AlchemicalSymbols");
      DAT_1469ee4f0 = 1;
      _DAT_1469ee500 = 0x106;
      _DAT_1469ee4f4 = 0x1f700;
      DAT_1469ee4f8 = 1;
      _DAT_1469ee4fc = 0x1f77f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee508,L"Geometric Shapes Extended",L"UnicodeBlock",
                 L"GeometricShapesExtended");
      DAT_1469ee520 = 1;
      _DAT_1469ee530 = 0x107;
      _DAT_1469ee524 = 0x1f780;
      DAT_1469ee528 = 1;
      _DAT_1469ee52c = 0x1f7ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee538,L"Supplemental Arrows - C",L"UnicodeBlock",L"SupplementalArrowsC");
      DAT_1469ee550 = 1;
      _DAT_1469ee560 = 0x108;
      _DAT_1469ee554 = 0x1f800;
      DAT_1469ee558 = 1;
      _DAT_1469ee55c = 0x1f8ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee568,L"Supplemental Symbols and Pictographs",L"UnicodeBlock",
                 L"SupplementalSymbolsAndPictographs");
      DAT_1469ee580 = 1;
      _DAT_1469ee584 = 0x1f900;
      _DAT_1469ee590 = 0x109;
      DAT_1469ee588 = 1;
      _DAT_1469ee58c = 0x1f9ff;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee598,L"CJK Unified Ideographs Extension B",L"UnicodeBlock",
                 L"CJKUnifiedIdeographsExtensionB");
      DAT_1469ee5b0 = 1;
      _DAT_1469ee5c0 = 0x10a;
      _DAT_1469ee5b4 = 0x20000;
      DAT_1469ee5b8 = 1;
      _DAT_1469ee5bc = 0x2a6d6;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee5c8,L"CJK Unified Ideographs Extension C",L"UnicodeBlock",
                 L"CJKUnifiedIdeographsExtensionC");
      DAT_1469ee5e0 = 1;
      _DAT_1469ee5f0 = 0x10b;
      _DAT_1469ee5e4 = 0x2a700;
      DAT_1469ee5e8 = 1;
      _DAT_1469ee5ec = 0x2b734;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee5f8,L"CJK Unified Ideographs Extension D",L"UnicodeBlock",
                 L"CJKUnifiedIdeographsExtensionD");
      DAT_1469ee610 = 1;
      _DAT_1469ee620 = 0x10c;
      _DAT_1469ee614 = 0x2b740;
      DAT_1469ee618 = 1;
      _DAT_1469ee61c = 0x2b81d;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee628,L"CJK Unified Ideographs Extension E",L"UnicodeBlock",
                 L"CJKUnifiedIdeographsExtensionE");
      DAT_1469ee640 = 1;
      _DAT_1469ee650 = 0x10d;
      _DAT_1469ee644 = 0x2b820;
      DAT_1469ee648 = 1;
      _DAT_1469ee64c = 0x2cea1;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee658,L"CJK Compatibility Ideographs Supplement",L"UnicodeBlock",
                 L"CJKCompatibilityIdeographsSupplement");
      DAT_1469ee670 = 1;
      _DAT_1469ee680 = 0x10e;
      _DAT_1469ee674 = 0x2f800;
      DAT_1469ee678 = 1;
      _DAT_1469ee67c = 0x2fa1f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee688,L"Tags",L"UnicodeBlock",L"Tags");
      DAT_1469ee6a0 = 1;
      _DAT_1469ee6b0 = 0x10f;
      _DAT_1469ee6a4 = 0xe0000;
      DAT_1469ee6a8 = 1;
      _DAT_1469ee6ac = 0xe007f;
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1469ee6b8,L"Variation Selectors Supplement",L"UnicodeBlock",
                 L"VariationSelectorsSupplement");
      DAT_1469ee6d0 = 1;
      _DAT_1469ee6d4 = 0xe0100;
      DAT_1469ee6d8 = 1;
      _DAT_1469ee6dc = 0xe01ef;
      atexit(`FUnicodeBlockRange::GetUnicodeBlockRanges'::`2'::
             _dynamic_atexit_destructor_for__UnicodeBlockRanges__);
      _Init_thread_footer(&DAT_1469ee6e0);
    }
  }
  *param_1 = &DAT_1469eb3e0;
  *(undefined4 *)(param_1 + 1) = 0x110;
  return param_1;
}



// FUNCTION 1418448d0 GetVector body=226 status=ok
// SIG undefined GetVector(void)

undefined8 *
FSlateStyleSet::GetVector
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)ISlateStyle::Join(local_res8,param_3,param_4);
  lVar1 = *plVar3;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x110) == 0) {
      lVar4 = param_1 + 0x108;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x118) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_141844973;
          break;
        }
        iVar2 = *(int *)(puVar6 + 2);
      } while (iVar2 != -1);
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_141844973:
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  uVar7 = DAT_1464b9ef0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar7 = *puVar5;
  }
  *param_2 = uVar7;
  return param_2;
}



// FUNCTION 1418449c0 FUN_1418449c0 body=644 status=ok
// SIG undefined FUN_1418449c0(void)

undefined8 *
FUN_1418449c0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  int local_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  longlong local_50;
  int local_48;
  int local_44;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  
  FUN_141838ef0(param_1,&local_60);
  if (local_60 == -1) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xbf800000;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    return param_2;
  }
  lVar9 = (longlong)local_60 * 0x88 + *param_1;
  if ((*(longlong *)(lVar9 + 0x10) != 0) && (*(longlong *)(lVar9 + 0x18) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_58 = *(float *)(param_1 + 4) + *(float *)(param_3 + 8);
      fStack_54 = *(float *)((longlong)param_1 + 0x24) + *(float *)(param_3 + 0xc);
      FUN_141832b70(param_1,&local_50,local_60,param_4);
      plVar5 = *(longlong **)(lVar9 + 0x18);
      plVar7 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar5[1];
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar6, !bVar10) {
          LOCK();
          bVar10 = iVar8 == (int)plVar5[1];
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar7 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar9 + 0x10);
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar5[1];
          bVar10 = iVar8 == 0;
          if (bVar10) {
            *(int *)(plVar5 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar6 + 8))(plVar6,&local_40,lVar9 + 0x20,CONCAT44(fStack_54,local_58),param_4)
      ;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (local_38 != 0) {
        if (local_44 < local_38 + local_48) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_50);
        }
        plVar7 = (longlong *)((longlong)local_48 * 0x58 + local_50);
        plVar5 = (longlong *)(local_40 + 0x50);
        plVar6 = plVar7 + 10;
        iVar8 = local_38;
        do {
          lVar4 = plVar5[-9];
          *plVar7 = plVar5[-10];
          plVar7[1] = lVar4;
          lVar4 = plVar5[-7];
          plVar7[2] = plVar5[-8];
          plVar7[3] = lVar4;
          uVar2 = *(undefined4 *)((longlong)plVar5 + -0x2c);
          lVar4 = plVar5[-5];
          uVar3 = *(undefined4 *)((longlong)plVar5 + -0x24);
          *(int *)(plVar7 + 4) = (int)plVar5[-6];
          *(undefined4 *)((longlong)plVar7 + 0x24) = uVar2;
          *(int *)(plVar7 + 5) = (int)lVar4;
          *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar3;
          plVar7[6] = plVar5[-4];
          plVar6[-3] = plVar5[-3];
          lVar4 = plVar5[-2];
          plVar6[-2] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar6[-1] = plVar5[-1];
          lVar4 = *plVar5;
          *plVar6 = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar7 = plVar7 + 0xb;
          plVar6 = plVar6 + 0xb;
          plVar5 = plVar5 + 0xb;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        local_48 = local_48 + local_38;
      }
      FUN_1417f3db0(param_2,&local_50,0,*(undefined4 *)(lVar9 + 0x84));
      TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
      ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(&local_40);
      plVar6 = &local_50;
      goto LAB_141844bbd;
    }
  }
  FUN_141832b70(param_1,&local_30,local_60,param_4);
  if (local_28 < 1) {
    uStack_5c = 0xbf800000;
  }
  FUN_1417f3db0(param_2,&local_30,uStack_5c,*(undefined4 *)(lVar9 + 0x84));
  plVar6 = &local_30;
LAB_141844bbd:
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
  ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(plVar6);
  return param_2;
}



// FUNCTION 141844c50 FUN_141844c50 body=1973 status=ok
// SIG undefined FUN_141844c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141844c50(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong local_res10;
  longlong local_res18;
  undefined1 auStack_338 [32];
  longlong local_318;
  undefined4 *local_308;
  ulonglong *puStack_300;
  undefined8 *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined4 *local_2d8;
  undefined4 *puStack_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [16];
  undefined4 *local_298;
  undefined4 *puStack_290;
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
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [32];
  undefined4 local_138 [4];
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [24];
  char local_b0 [8];
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar12 = (longlong *)0x0;
  if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
    plVar10 = (longlong *)param_1[0xe];
    if ((longlong *)param_1[0xe] == (longlong *)0x0) {
      plVar10 = param_1 + 0xd;
    }
    iVar4 = *(int *)((longlong)plVar10 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                    (longlong)(int)param_1[0xf] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar10 = (longlong *)((longlong)iVar4 * 0x20 + param_1[6]);
        if (*plVar10 == param_3) {
          if (iVar4 != -1) goto LAB_141844cf1;
          break;
        }
        iVar4 = (int)plVar10[3];
      } while (iVar4 != -1);
    }
  }
  plVar10 = plVar12;
LAB_141844cf1:
  plVar13 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar13 = plVar12;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (plVar13 == (longlong *)0x0) {
    lVar5 = FText::FromName(local_1b8,&local_res10);
    local_318 = lVar5;
    lVar6 = FText::FromName(local_1a0,&local_res18);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,
                       L"Unable to find Slate Widget Style \'{0}\'. Using {1} defaults instead.",
                       L"SlateStyleSet",L"UnknownWidgetStyle");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1d8,uVar7);
    local_138[0] = 4;
    FText::FText(local_128,lVar6);
    local_110 = 1;
    local_108 = 4;
    FText::FText(local_f8,lVar5);
    local_2d8 = local_138;
    local_e0 = 1;
    puStack_2d0 = local_d8;
    local_2c8 = *puVar8;
    local_2c0 = puVar8[1];
    if (local_2c0 != 0) {
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
    }
    local_298 = local_2d8;
    puStack_290 = puStack_2d0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
    uVar7 = FText::Format(local_238,&local_2c8,uVar7);
    FText::FText(local_268,uVar7);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_230 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_288);
    lVar5 = 2;
    pcVar11 = local_b0;
    do {
      lVar5 = lVar5 + -1;
      pcVar2 = pcVar11 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar12 = *(longlong **)(pcVar11 + -0x40);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar3 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      pcVar11 = pcVar2;
    } while (lVar5 != 0);
    plVar12 = (longlong *)puVar8[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(local_318 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    (**(code **)(*param_1 + 0x88))(param_1,3,local_268);
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_260 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar1 = (int *)((longlong)local_260 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_218 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)*plVar13;
    plVar13 = (longlong *)plVar13[1];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,local_2a8);
    if (*plVar9 != local_res10) {
      uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_2d8);
      local_318 = FText::FromName(local_188,uVar7);
      lVar5 = FText::FromName(local_170,&local_res10);
      local_2e8 = lVar5;
      lVar6 = FText::FromName(local_158,&local_res18);
      local_2f0 = lVar6;
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1f0,
                         L"The Slate Widget Style \'{0}\' is not of the desired type. Desired: \'{1}\', Actual: \'{2}\'"
                         ,L"SlateStyleSet",L"WrongWidgetStyleType");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1c8,uVar7);
      local_d8[0] = 4;
      local_2f8 = puVar8;
      FText::FText(local_c8,lVar6);
      local_b0[0] = '\x01';
      local_a8 = 4;
      FText::FText(local_98,lVar5);
      local_80 = 1;
      local_78 = 4;
      FText::FText(local_68,local_318);
      local_308 = local_d8;
      local_50 = 1;
      puStack_300 = local_48;
      local_2b8 = *puVar8;
      local_2b0 = puVar8[1];
      if (local_2b0 != 0) {
        LOCK();
        *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
        UNLOCK();
      }
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_278,&local_308);
      uVar7 = FText::Format(local_208,&local_2b8,uVar7);
      FText::FText(local_250,uVar7);
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_200 + 1;
        lVar5 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar1 = (int *)((longlong)local_200 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_200 + 8))(local_200,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_278);
      lVar5 = 3;
      pcVar11 = &stack0xffffffffffffffe0;
      do {
        lVar5 = lVar5 + -1;
        pcVar2 = pcVar11 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar10 = *(longlong **)(pcVar11 + -0x40);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar10 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
        pcVar11 = pcVar2;
      } while (lVar5 != 0);
      plVar10 = (longlong *)local_2f8[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar10 = *(longlong **)(local_2f0 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar10 = *(longlong **)(local_2e8 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar10 = *(longlong **)(local_318 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      (**(code **)(*param_1 + 0x88))(param_1,1,local_250);
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_248 + 1;
        lVar5 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar10 = plVar12;
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1e8 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
            plVar10 = (longlong *)0x0;
          }
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  return plVar10;
}



// FUNCTION 141845410 FUN_141845410 body=56 status=ok
// SIG undefined FUN_141845410(void)

undefined8 * FUN_141845410(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x128);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x10) + 8;
  }
  *param_2 = *(undefined8 *)(lVar1 + 0x38);
  lVar1 = *(longlong *)(lVar1 + 0x40);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141845450 FUN_141845450 body=52 status=ok
// SIG undefined FUN_141845450(void)

undefined8 * FUN_141845450(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar1 = param_1 + 8;
  }
  *param_2 = *(undefined8 *)(lVar1 + 0x38);
  lVar1 = *(longlong *)(lVar1 + 0x40);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418454a0 FUN_1418454a0 body=40 status=ok
// SIG undefined FUN_1418454a0(void)

undefined8 FUN_1418454a0(longlong param_1,undefined8 param_2)

{
  FUN_1417ee5f0(param_2,*(longlong *)(param_1 + 0x468) + 0xd60);
  return param_2;
}



// FUNCTION 1418454d0 FUN_1418454d0 body=250 status=ok
// SIG undefined FUN_1418454d0(void)

undefined8 * FUN_1418454d0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fStack_34;
  
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x70))();
    plVar1 = DAT_1469eaf38;
    if (cVar2 != '\0') {
      fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0x498) + 0xf0))();
      fVar5 = (float)(**(code **)(*plVar1 + 0x38))(plVar1);
      fVar5 = 1.0 / (fVar4 * fVar5);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0xb0))();
      fVar4 = (float)iVar3 * fVar5;
      fStack_34 = fVar4;
      if (param_3 != '\0') {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0xb8))();
        fStack_34 = (float)iVar3 * fVar5 + fVar4;
      }
      uVar6 = CONCAT44(fStack_34,fVar4);
      uVar7 = CONCAT44(fVar4,fVar4);
      goto LAB_1418455b4;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x5b8);
  uVar7 = *(undefined8 *)(param_1 + 0x5c0);
LAB_1418455b4:
  *param_2 = uVar6;
  param_2[1] = uVar7;
  return param_2;
}



// FUNCTION 141845600 GetWindowGeometryInScreen body=216 status=ok
// SIG undefined GetWindowGeometryInScreen(void)

undefined8 * SWindow::GetWindowGeometryInScreen(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x498);
  fVar4 = (float)(**(code **)(*DAT_1469eaf38 + 0x38))();
  fVar5 = (float)(**(code **)(*plVar3 + 0xf0))(plVar3);
  uVar1 = *(undefined4 *)(param_1 + 0x368);
  uVar2 = *(undefined4 *)(param_1 + 0x36c);
  fVar4 = fVar4 * fVar5;
  *param_2 = CONCAT44((1.0 / fVar4) * *(float *)(param_1 + 0x37c),
                      (1.0 / fVar4) * *(float *)(param_1 + 0x378));
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
  *(undefined4 *)(param_2 + 6) = uVar2;
  *(float *)((longlong)param_2 + 0x1c) = fVar4;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(float *)(param_2 + 5) = fVar4;
  *(byte *)((longlong)param_2 + 0x34) = *(byte *)((longlong)param_2 + 0x34) & 0xfe;
  *(float *)(param_2 + 1) = fVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 2) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  return param_2;
}



// FUNCTION 1418456e0 GetWindowGeometryInWindow body=207 status=ok
// SIG undefined GetWindowGeometryInWindow(void)

undefined8 * SWindow::GetWindowGeometryInWindow(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x498);
  fVar3 = (float)(**(code **)(*DAT_1469eaf38 + 0x38))();
  fVar4 = (float)(**(code **)(*plVar1 + 0xf0))(plVar1);
  fVar3 = fVar3 * fVar4;
  pfVar2 = (float *)(param_1 + 0x380);
  if (*pfVar2 == 0.0) {
    pfVar2 = (float *)(param_1 + 0x378);
  }
  *param_2 = CONCAT44(pfVar2[1] * (1.0 / fVar3),*pfVar2 * (1.0 / fVar3));
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(float *)((longlong)param_2 + 0x1c) = fVar3;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(float *)(param_2 + 5) = fVar3;
  *(byte *)((longlong)param_2 + 0x34) = *(byte *)((longlong)param_2 + 0x34) & 0xfe;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(float *)(param_2 + 1) = fVar3;
  return param_2;
}



// FUNCTION 1418457c0 FUN_1418457c0 body=40 status=ok
// SIG undefined FUN_1418457c0(void)

undefined8 FUN_1418457c0(longlong param_1,undefined8 param_2)

{
  FUN_1417ee5f0(param_2,*(longlong *)(param_1 + 0x468) + 0xe10);
  return param_2;
}



// FUNCTION 1418457f0 GetWindowSizeFromClientSize body=167 status=ok
// SIG undefined GetWindowSizeFromClientSize(void)

undefined8 *
SWindow::GetWindowSizeFromClientSize(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res8;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_res8 = param_3;
  if ((((*(byte *)(param_1 + 0x350) & 2) == 0) &&
      ((*(int *)(param_1 + 0x30c) - 2U & 0xfffffffd) != 0)) &&
     ((*(byte *)(param_1 + 0x351) & 1) == 0)) {
    FUN_1418454d0(param_1,&local_18,0);
    local_res8._0_4_ = (float)param_3;
    local_res8._0_4_ = (float)local_res8 + local_10 + local_18;
    local_res8._4_4_ = (float)((ulonglong)param_3 >> 0x20);
    local_res8._4_4_ = local_14 + local_c + local_res8._4_4_;
    if ((*(byte *)(param_1 + 0x350) & 1) != 0) {
      local_res8 = CONCAT44(local_res8._4_4_ + 24.0,(float)local_res8);
    }
  }
  *param_2 = local_res8;
  return param_2;
}



// FUNCTION 1418458a0 FUN_1418458a0 body=277 status=ok
// SIG undefined FUN_1418458a0(void)

undefined1 * FUN_1418458a0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = DAT_1469eaf38;
  bVar9 = false;
  if ((*(int *)(param_1 + 0x30c) - 2U & 0xfffffffd) == 0) {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
    local_28 = *puVar8;
    local_20 = (longlong *)puVar8[1];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
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
    }
    bVar9 = true;
    cVar6 = (**(code **)(*plVar5 + 0xe0))(plVar5,&local_28);
    uVar7 = DAT_1464b9eeb;
    if (cVar6 == '\0') goto LAB_141845968;
  }
  uVar7 = DAT_1464b9ee8;
LAB_141845968:
  plVar5 = local_20;
  *param_2 = uVar7;
  if ((bVar9) && (local_20 != (longlong *)0x0)) {
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1418459c0 HandleCultureChanged body=504 status=ok
// SIG undefined HandleCultureChanged(void)

void FCompositeFontCache::HandleCultureChanged(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
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
  
  uStack_84 = 1;
  plVar1 = (longlong *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_141845a8d;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141845a8d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141845b53;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141845b53:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    FUN_1418539c0(*(undefined8 *)((longlong)(int)uStack_4c * 0x20 + 8 + *plVar1));
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141845c00 HandleObjectReference body=80 status=ok
// SIG undefined HandleObjectReference(void)

void FSlateObjectReferenceCollector::HandleObjectReference(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 141845c50 FUN_141845c50 body=200 status=ok
// SIG undefined FUN_141845c50(void)

undefined1 FUN_141845c50(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x570);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar5 = (int)plVar7[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) && (lVar2 = *(longlong *)(param_1 + 0x568), lVar2 != 0)) {
          cVar3 = FUN_141847710(lVar2);
          if (cVar3 == '\0') {
            uVar4 = FUN_141845c50(lVar2);
          }
          else {
            uVar4 = 1;
          }
          goto LAB_141845c8d;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = 0;
  plVar7 = plVar6;
LAB_141845c8d:
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
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 141845d20 FUN_141845d20 body=266 status=ok
// SIG undefined FUN_141845d20(void)

undefined8 FUN_141845d20(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar6 = DAT_1469eaf38;
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
  plVar3 = (longlong *)puVar7[1];
  uVar4 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar8 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
  }
  local_48 = uVar4;
  local_40 = plVar3;
  (**(code **)(*plVar6 + 0x150))(plVar6,param_2,&local_48);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return param_2;
}



// FUNCTION 141845e30 HasCloseBox body=13 status=ok
// SIG undefined HasCloseBox(void)

byte SWindow::HasCloseBox(longlong param_1)

{
  return *(byte *)(param_1 + 0x351) >> 2 & 1;
}



// FUNCTION 141845e40 FUN_141845e40 body=216 status=ok
// SIG undefined FUN_141845e40(void)

undefined1 FUN_141845e40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = DAT_1469eaf38;
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar7;
  local_20 = (longlong *)puVar7[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
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
  }
  uVar6 = (**(code **)(*plVar5 + 200))(plVar5,&local_28);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 141845f20 HasFoundGlyphAtOffset body=320 status=ok
// SIG undefined HasFoundGlyphAtOffset(void)

undefined8
FShapedGlyphSequence::HasFoundGlyphAtOffset
          (longlong *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
          int *param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_48 [2];
  short local_46;
  
  if (*(char *)(param_4 + 0x21) == '\0') {
    return 0;
  }
  lVar3 = *param_1;
  iVar5 = 0;
  iVar6 = 0;
  lVar7 = (longlong)param_5 * 0x68;
  iVar4 = param_5;
  do {
    iVar4 = iVar4 + 1;
    lVar1 = lVar7 + lVar3;
    FUN_14183d710(param_2,local_48,lVar1,&DAT_1469eaf80);
    iVar6 = iVar6 + *(short *)(lVar1 + 0x18);
    iVar5 = iVar5 + (int)local_46 + (int)*(short *)(lVar1 + 0x18);
    if ((iVar4 < 0) || ((int)param_1[1] <= iVar4)) break;
    lVar3 = *param_1;
    lVar2 = lVar7 + 0x7c;
    lVar7 = lVar7 + 0x68;
  } while (*(int *)(lVar1 + 0x14) == *(int *)(lVar2 + lVar3));
  if (*(byte *)(param_4 + 0x22) < 2) {
    iVar5 = iVar5 / 2;
  }
  if (iVar5 + *param_6 <= param_3) {
    *param_6 = *param_6 + iVar6;
    return 0;
  }
  if (((*(char *)(param_4 + 0x23) != '\0') && (param_5 = param_5 + -1, -1 < param_5)) &&
     (param_5 < (int)param_1[1])) {
    param_4 = (longlong)param_5 * 0x68 + *param_1;
  }
  *param_7 = param_4;
  return 1;
}



// FUNCTION 141846060 HasMaximizeBox body=13 status=ok
// SIG undefined HasMaximizeBox(void)

byte SWindow::HasMaximizeBox(longlong param_1)

{
  return *(byte *)(param_1 + 0x351) >> 4 & 1;
}



// FUNCTION 141846070 HasMinimizeBox body=13 status=ok
// SIG undefined HasMinimizeBox(void)

byte SWindow::HasMinimizeBox(longlong param_1)

{
  return *(byte *)(param_1 + 0x351) >> 3 & 1;
}



// FUNCTION 141846080 FUN_141846080 body=256 status=ok
// SIG undefined FUN_141846080(void)

undefined1 FUN_141846080(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar8 = DAT_1469eaf38;
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28)
  ;
  plVar5 = (longlong *)puVar10[1];
  uVar6 = *puVar10;
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
  uVar9 = (**(code **)(*plVar8 + 0x138))(plVar8,&local_38);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 141846180 FUN_141846180 body=298 status=ok
// SIG undefined FUN_141846180(void)

undefined1 FUN_141846180(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar3 = DAT_1469eaf38;
  local_resc = *(char *)(param_3 + 1) != '\0';
  if ((bool)local_resc) {
    local_res8 = *param_3;
  }
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
  plVar5 = (longlong *)puVar9[1];
  uVar6 = *puVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = uVar6;
  local_40 = plVar5;
  uVar8 = (**(code **)(*plVar3 + 0x140))(plVar3,&local_48,param_2,&local_res8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  if (*(char *)(param_3 + 1) != '\0') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  return uVar8;
}



// FUNCTION 1418462b0 HasSizingFrame body=13 status=ok
// SIG undefined HasSizingFrame(void)

byte SWindow::HasSizingFrame(longlong param_1)

{
  return *(byte *)(param_1 + 0x351) >> 5 & 1;
}



// FUNCTION 1418462c0 FUN_1418462c0 body=279 status=ok
// SIG undefined FUN_1418462c0(void)

undefined8 FUN_1418462c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar6 = DAT_1469eaf38;
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
  plVar3 = (longlong *)puVar7[1];
  uVar4 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar8 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
  }
  local_48 = uVar4;
  local_40 = plVar3;
  (**(code **)(*plVar6 + 0x148))(plVar6,param_2,&local_48,param_3);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return param_2;
}



// FUNCTION 1418463e0 FUN_1418463e0 body=231 status=ok
// SIG undefined FUN_1418463e0(void)

undefined1 FUN_1418463e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = DAT_1469eaf38;
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar7;
  local_20 = (longlong *)puVar7[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
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
  }
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5,&local_28,param_2);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1418464d0 HasValidFont body=19 status=ok
// SIG undefined HasValidFont(void)

undefined1 FSlateFontInfo::HasValidFont(longlong *param_1)

{
  if ((param_1[6] == 0) && (*param_1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1418464f0 HideWindow body=20 status=ok
// SIG undefined HideWindow(void)

void SWindow::HideWindow(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418464ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x58))();
    return;
  }
  return;
}



// FUNCTION 141846510 FUN_141846510 body=451 status=ok
// SIG undefined FUN_141846510(void)

void FUN_141846510(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
                  byte param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(undefined8 *)((longlong)param_4 + 0x24);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)((longlong)param_4 + 0x1c);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)((longlong)param_4 + 0x2c);
  *(undefined8 *)(param_1 + 0x100) = *param_4;
  fVar5 = *(float *)(param_4 + 1);
  *(float *)(param_1 + 0x110) = fVar5;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)((longlong)param_4 + 0x14);
  if (*(int *)(param_2 + 0x990) < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)
             (*(longlong *)(param_2 + 0x988) + -4 + (longlong)*(int *)(param_2 + 0x990) * 4);
  }
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = param_3;
  *(byte *)(param_1 + 0x118) = param_5;
  fVar5 = 1.0 / fVar5;
  fVar4 = -(fVar5 * *(float *)(param_1 + 0x100));
  fVar3 = -(fVar5 * *(float *)(param_1 + 0x104));
  *(ulonglong *)(param_1 + 0xe8) =
       CONCAT44(*(float *)(param_1 + 0xd4) * fVar5,*(float *)(param_1 + 0xd0) * fVar5);
  *(ulonglong *)(param_1 + 0xf0) =
       CONCAT44(*(float *)(param_1 + 0xdc) * fVar5,*(float *)(param_1 + 0xd8) * fVar5);
  *(ulonglong *)(param_1 + 0xf8) =
       CONCAT44(*(float *)(param_1 + 0xd4) * fVar4 + *(float *)(param_1 + 0xdc) * fVar3 +
                *(float *)(param_1 + 0xe4),
                *(float *)(param_1 + 0xd0) * fVar4 + *(float *)(param_1 + 0xd8) * fVar3 +
                *(float *)(param_1 + 0xe0));
  uVar2 = (**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0x178))();
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  *(byte *)(param_1 + 0x5d) = param_5 & 0xf;
  if ((char)param_5 < '\0') {
    *(byte *)(param_1 + 0x5d) = param_5 & 0xf | 0x80;
  }
  return;
}



// FUNCTION 1418466e0 InitAtlasData body=262 status=ok
// SIG undefined InitAtlasData(void)

char FSlateTextureAtlas::InitAtlasData(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  puVar8 = (undefined8 *)operator_new(0x28);
  if (puVar8 != (undefined8 *)0x0) {
    iVar7 = *(int *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(bool *)(puVar8 + 4) = iVar7 != 0;
    *(undefined4 *)(puVar8 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8) = puVar8;
    uVar9 = *puVar1;
  }
  *puVar8 = uVar9;
  puVar8[1] = puVar1;
  *puVar1 = puVar8;
  iVar7 = *(int *)(param_1 + 0x30);
  iVar10 = *(int *)(param_1 + 0x28);
  iVar11 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x14) < iVar7 * iVar10 * iVar11) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0x30);
    iVar11 = *(int *)(param_1 + 0x2c);
    iVar10 = *(int *)(param_1 + 0x28);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar11 = iVar10 * iVar7 * iVar11;
  iVar7 = iVar4 + iVar11;
  *(int *)(param_1 + 0x10) = iVar7;
  if (*(int *)(param_1 + 0x14) < iVar7) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 8);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar4 + *(longlong *)(param_1 + 8)),0,(longlong)iVar11);
  cVar5 = IsInActualRenderingThread();
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0x39) = 1;
    cVar5 = '\0';
  }
  else {
    cVar6 = IsInRenderingThread();
    cVar5 = -cVar6;
    *(byte *)(param_1 + 0x39) = -(cVar6 != '\0') & 2;
  }
  return cVar5;
}



// FUNCTION 1418467f0 FUN_1418467f0 body=393 status=ok
// SIG undefined FUN_1418467f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418467f0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [8];
  
  *(longlong *)(param_1 + 0x30) = *param_3;
  plVar4 = (longlong *)param_3[1];
  plVar8 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != plVar8) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x38);
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
    *(longlong **)(param_1 + 0x38) = plVar4;
  }
  if ((undefined8 *)(param_1 + 0x40) != param_4) {
    uVar6 = param_4[1];
    *(undefined8 *)(param_1 + 0x40) = *param_4;
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    uVar6 = param_4[3];
    *(undefined8 *)(param_1 + 0x50) = param_4[2];
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    uVar6 = param_4[5];
    *(undefined8 *)(param_1 + 0x60) = param_4[4];
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    *(undefined8 *)(param_1 + 0x70) = param_4[6];
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x10);
  if ((*(byte *)(param_1 + 0x80) & 0x10) == 0) goto LAB_141846918;
  lVar5 = *param_3;
  puVar9 = (undefined1 *)(lVar5 + 0xb0);
  if ((*(int *)(lVar5 + 0xc0) == 0) || (*(longlong **)(lVar5 + 0xb8) == (longlong *)0x0)) {
LAB_14184690f:
    local_res8[0] = *puVar9;
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x18))();
    if (cVar7 == '\0') goto LAB_14184690f;
    if (*(int *)(lVar5 + 0xc0) == 0) {
      (**(code **)(_DAT_00000000 + 0x38))(0,local_res8);
      *puVar9 = local_res8[0];
    }
    else {
      (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x38))(*(longlong **)(lVar5 + 0xb8),local_res8);
      *puVar9 = local_res8[0];
    }
  }
  *(undefined1 *)(param_1 + 0x80) = local_res8[0];
LAB_141846918:
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1,0);
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 141846980 InitializeFromArbitraryPoints body=487 status=ok
// SIG undefined InitializeFromArbitraryPoints(void)

void FSlateClippingZone::InitializeFromArbitraryPoints
               (undefined8 *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((((((int)ROUND(*param_4 + *param_4 + 0.5) ^ (int)ROUND(*param_2 + *param_2 + 0.5)) &
         0xfffffffeU) == 0) &&
       ((((int)ROUND(*param_5 + *param_5 + 0.5) ^ (int)ROUND(*param_3 + *param_3 + 0.5)) &
        0xfffffffeU) == 0)) &&
      ((((int)ROUND(param_3[1] + param_3[1] + 0.5) ^ (int)ROUND(param_2[1] + param_2[1] + 0.5)) &
       0xfffffffeU) == 0)) &&
     ((((int)ROUND(param_5[1] + param_5[1] + 0.5) ^ (int)ROUND(param_4[1] + param_4[1] + 0.5)) &
      0xfffffffeU) == 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe | bVar1;
  if (bVar1 != 0) {
    fVar6 = (float)((int)ROUND(*param_2 + *param_2 + 0.5) >> 1);
    fVar3 = (float)((int)ROUND(param_2[1] + param_2[1] + 0.5) >> 1);
    fVar4 = (float)((int)ROUND(*param_5 + *param_5 + 0.5) >> 1);
    fVar5 = fVar4;
    if (fVar4 <= fVar6) {
      fVar5 = fVar6;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    fVar6 = (float)((int)ROUND(param_5[1] + param_5[1] + 0.5) >> 1);
    *(float *)(param_1 + 1) = fVar5;
    *(float *)(param_1 + 2) = fVar4;
    fVar2 = fVar6;
    if (fVar3 <= fVar6) {
      fVar2 = fVar3;
    }
    if (fVar6 <= fVar3) {
      fVar6 = fVar3;
    }
    *param_1 = CONCAT44(fVar2,fVar4);
    *(float *)((longlong)param_1 + 0xc) = fVar2;
    *(float *)((longlong)param_1 + 0x14) = fVar6;
    param_1[3] = CONCAT44(fVar6,fVar5);
    return;
  }
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)param_3;
  param_1[2] = *(undefined8 *)param_4;
  param_1[3] = *(undefined8 *)param_5;
  return;
}



// FUNCTION 141846b70 Insert body=144 status=ok
// SIG undefined Insert(void)

int TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
              (longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
             (longlong)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 141846c00 FUN_141846c00 body=385 status=ok
// SIG undefined FUN_141846c00(void)

undefined8 * FUN_141846c00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)param_3[1];
  uVar4 = *param_3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((-1 < param_4) && (param_4 < (int)((longlong *)param_1[1])[1])) {
    lVar5 = *(longlong *)param_1[1];
    lVar7 = (longlong)param_4 * 0x88;
    *(undefined8 *)(lVar5 + 0x10 + lVar7) = uVar4;
    plVar6 = *(longlong **)(lVar5 + 0x18 + lVar7);
    if (plVar3 != plVar6) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar5 + 0x18 + lVar7);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(lVar5 + 0x18 + lVar7) = plVar3;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)param_1 + 0x14);
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
  *(undefined1 *)((longlong)param_2 + 0x2c) = *(undefined1 *)((longlong)param_1 + 0x2c);
  *(undefined1 *)((longlong)param_2 + 0x2d) = *(undefined1 *)((longlong)param_1 + 0x2d);
  param_2[6] = param_1[6];
  lVar5 = param_1[7];
  param_2[7] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  param_2[8] = param_1[8];
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return param_2;
}



// FUNCTION 141846d90 FUN_141846d90 body=860 status=ok
// SIG undefined FUN_141846d90(void)

undefined8
FUN_141846d90(longlong param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
             longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  short sVar10;
  bool bVar11;
  float fVar12;
  undefined4 local_res10;
  int local_res18 [2];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48 [2];
  
  sVar10 = *(short *)(param_2 + (longlong)param_3 * 2);
  cVar6 = TextBiDi::IsControlCharacter(sVar10);
  if (cVar6 != '\0') {
    iVar7 = TArray<FShapedGlyphEntry,FDefaultAllocator>::AddDefaulted(param_7,1);
    local_58 = (longlong *)param_6[1];
    plVar9 = (longlong *)((longlong)iVar7 * 0x68 + *param_7);
    local_60 = *param_6;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    if (plVar9 != &local_60) {
      *plVar9 = local_60;
      local_60 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 1,&local_58);
    }
    plVar3 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    *(undefined4 *)(plVar9 + 2) = 0;
    *(int *)((longlong)plVar9 + 0x14) = param_3;
    plVar9[3] = 0;
    *(undefined4 *)(plVar9 + 4) = 0x10100;
    *(undefined1 *)((longlong)plVar9 + 0x24) = 0;
    return 1;
  }
  if (sVar10 != 9) {
    return 0;
  }
  sVar10 = 0;
  local_res10 = 0;
  plVar9 = (longlong *)*param_6;
  plVar3 = (longlong *)plVar9[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar11 = iVar7 == 0;
    if (bVar11) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar7 == (int)plVar3[1];
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar3 != (longlong *)0x0) {
          puVar4 = (undefined8 *)*plVar9;
          sVar10 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            local_res10 = FT_Get_Char_Index(*puVar4,0x20);
            lVar5 = *param_6;
            local_res18[0] = 0;
            cVar6 = FFreeTypeAdvanceCache::FindOrCache
                              (*(undefined8 *)(param_1 + 8),*puVar4,local_res10,
                               *(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                               *(undefined4 *)(lVar5 + 0x18),local_res18);
            if (cVar6 != '\0') {
              fVar12 = (float)(local_res18[0] + 0x200 >> 10) * 0.015625;
              sVar10 = (short)((int)ROUND(fVar12 + fVar12 + 0.5) >> 1);
            }
          }
          LOCK();
          plVar9 = plVar3 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
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
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  uVar8 = *(uint *)(param_7 + 1) & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if (0 < (int)(4 - uVar8)) {
    iVar7 = TArray<FShapedGlyphEntry,FDefaultAllocator>::AddDefaulted(param_7,1);
    local_50 = *param_6;
    local_48[0] = (longlong *)param_6[1];
    plVar9 = (longlong *)((longlong)iVar7 * 0x68 + *param_7);
    if (local_48[0] != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
      UNLOCK();
    }
    if (plVar9 != &local_50) {
      *plVar9 = local_50;
      local_50 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 1,local_48);
    }
    plVar3 = local_48[0];
    if (local_48[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48[0] + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48[0])(local_48[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_48[0] + 8))(local_48[0],1);
        }
      }
    }
    *(undefined4 *)(plVar9 + 2) = local_res10;
    *(int *)((longlong)plVar9 + 0x14) = param_3;
    *(undefined4 *)((longlong)plVar9 + 0x1a) = 0;
    *(undefined4 *)((longlong)plVar9 + 0x1e) = 0x1000000;
    *(undefined2 *)((longlong)plVar9 + 0x22) = 1;
    *(short *)(plVar9 + 3) = (short)(4 - uVar8) * sVar10;
    *(undefined1 *)((longlong)plVar9 + 0x24) = 0;
  }
  return 1;
}



// FUNCTION 1418470f0 FUN_1418470f0 body=1249 status=ok
// SIG undefined FUN_1418470f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1418470f0(longlong *param_1,int param_2,byte *param_3,undefined8 *param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  int local_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  longlong *local_158;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined4 local_c4;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (param_2 < (int)param_1[1]) {
    local_198 = *param_4;
    uVar3 = param_4[1];
    local_158 = (longlong *)param_4[8];
    local_148 = param_4[7];
    uVar4 = param_4[2];
    uStack_110 = param_4[3];
    uStack_180 = (undefined4)uStack_110;
    uStack_17c = (undefined4)((ulonglong)uStack_110 >> 0x20);
    local_178 = (undefined4)param_4[4];
    uStack_174 = (undefined4)((ulonglong)param_4[4] >> 0x20);
    uStack_170 = (undefined4)param_4[5];
    fStack_16c = (float)((ulonglong)param_4[5] >> 0x20);
    fStack_168 = (float)param_4[6];
    uStack_164 = (undefined4)((ulonglong)param_4[6] >> 0x20);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    local_1b8 = CONCAT44(local_178,uStack_17c);
    uStack_1b0 = CONCAT44(uStack_170,uStack_174);
    fVar21 = (float)param_5 + fStack_16c;
    fVar22 = param_5._4_4_ + fStack_168;
    uStack_190._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    local_188._0_4_ = (float)uVar4;
    uStack_190 = CONCAT44((float)param_5 + uStack_190._4_4_,(int)uVar3);
    local_188 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),param_5._4_4_ + (float)local_188);
    if ((int)param_1[7] < 1) {
      local_f0 = 0xffffffff;
    }
    else {
      local_f0 = *(undefined4 *)(param_1[6] + -4 + (longlong)(int)param_1[7] * 4);
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_158 + 0xc) = *(int *)((longlong)local_158 + 0xc) + 1;
      UNLOCK();
    }
    iVar7 = (int)param_1[1];
    local_138 = 0;
    plStack_130 = (longlong *)0x0;
    local_c4 = param_6;
    local_118 = local_188;
    local_f8 = CONCAT44(uStack_164,fVar22);
    uStack_120 = uStack_190;
    local_108 = local_178;
    uStack_104 = uStack_174;
    uStack_100 = uStack_170;
    local_d8 = 0;
    local_d0 = 0;
    *(int *)(param_1 + 1) = iVar7 + 1;
    fStack_16c = fVar21;
    fStack_168 = fVar22;
    local_140 = local_158;
    local_128 = local_198;
    fStack_fc = fVar21;
    local_c8 = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    FCachedWidget::FCachedWidget((longlong)iVar7 * 0x88 + *param_1,&local_148);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_130 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar13 == 1) && (plStack_130 != (longlong *)0x0)) {
        (**(code **)(*plStack_130 + 8))(plStack_130,1);
      }
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar13 == 1) && (local_140 != (longlong *)0x0)) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
    if (param_2 != -1) {
      lVar10 = *param_1 + 0x60 + (longlong)param_2 * 0x88;
      iVar13 = *(int *)(lVar10 + 0x18);
      *(int *)(lVar10 + 0x18) = iVar13 + 1;
      if (*(int *)(lVar10 + 0x1c) < iVar13 + 1) {
        TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar10,iVar13);
      }
      lVar9 = *(longlong *)(lVar10 + 0x10);
      if (*(longlong *)(lVar10 + 0x10) == 0) {
        lVar9 = lVar10;
      }
      *(int *)(lVar9 + (longlong)iVar13 * 4) = iVar7;
    }
    if ((*param_3 & 8) != 0) {
      fVar14 = (float)local_198 * local_1b8._4_4_ + fVar22;
      fVar18 = fVar21 + (float)local_198 * (float)local_1b8;
      fVar15 = fVar22 + local_198._4_4_ * uStack_1b0._4_4_;
      fVar17 = local_198._4_4_ * uStack_1b0._4_4_ + fVar14;
      fVar20 = local_198._4_4_ * (float)uStack_1b0 + fVar18;
      fVar19 = local_198._4_4_ * (float)uStack_1b0 + fVar21;
      fVar16 = fVar15;
      if (fVar15 <= fVar14) {
        fVar16 = fVar14;
      }
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar16 <= fVar22) {
        fVar16 = fVar22;
      }
      if (fVar22 <= fVar15) {
        fVar15 = fVar22;
      }
      fVar16 = (fVar16 - *(float *)((longlong)param_1 + 0x24)) * (1.0 / _DAT_1464b9f34);
      fVar15 = (fVar15 - *(float *)((longlong)param_1 + 0x24)) * (1.0 / _DAT_1464b9f34);
      fVar22 = fVar19;
      if (fVar19 <= fVar18) {
        fVar22 = fVar18;
      }
      if (fVar18 <= fVar19) {
        fVar19 = fVar18;
      }
      local_1a8 = (int)ROUND((fVar15 + fVar15) - 0.5) >> 1;
      if (fVar22 <= fVar20) {
        fVar22 = fVar20;
      }
      if (fVar20 <= fVar19) {
        fVar19 = fVar20;
      }
      if (fVar22 <= fVar21) {
        fVar22 = fVar21;
      }
      if (fVar21 <= fVar19) {
        fVar19 = fVar21;
      }
      fVar22 = (fVar22 - *(float *)(param_1 + 4)) * (1.0 / _DAT_1464b9f30);
      fVar21 = (fVar19 - *(float *)(param_1 + 4)) * (1.0 / _DAT_1464b9f30);
      iVar13 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
      if (iVar13 < 1) {
        iVar13 = 0;
      }
      if (local_1a8 < 1) {
        local_1a8 = 0;
      }
      iVar8 = *(int *)((longlong)param_1 + 0x2c) + -1;
      local_1a4 = (int)ROUND((fVar22 + fVar22) - 0.5) >> 1;
      iVar6 = (int)param_1[5] + -1;
      iVar12 = (int)ROUND((fVar16 + fVar16) - 0.5) >> 1;
      if (iVar6 <= local_1a4) {
        local_1a4 = iVar6;
      }
      if (iVar8 <= iVar12) {
        iVar12 = iVar8;
      }
      iVar6 = local_1a8;
      iVar8 = local_1a8;
      iVar5 = local_1a4;
      if (iVar13 <= local_1a4) {
        do {
          for (; iVar6 <= iVar12; iVar6 = iVar6 + 1) {
            plVar11 = (longlong *)((longlong)((int)param_1[5] * iVar6 + iVar13) * 0x10 + param_1[2])
            ;
            iVar8 = (int)plVar11[1];
            *(int *)(plVar11 + 1) = iVar8 + 1;
            if (*(int *)((longlong)plVar11 + 0xc) < iVar8 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar8);
            }
            *(int *)(*plVar11 + (longlong)iVar8 * 4) = iVar7;
            iVar8 = local_1a8;
            iVar5 = local_1a4;
          }
          iVar13 = iVar13 + 1;
          iVar6 = iVar8;
        } while (iVar13 <= iVar5);
      }
    }
    plVar11 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_158 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
  }
  else {
    iVar7 = -1;
  }
  return iVar7;
}



// FUNCTION 1418475e0 FUN_1418475e0 body=259 status=ok
// SIG undefined FUN_1418475e0(void)

void FUN_1418475e0(longlong *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x19);
  if ((param_2 & 4) == 0) {
    bVar7 = 0;
  }
  else if (((char)param_1[3] < '\0') || (cVar6 = (**(code **)(*param_1 + 0x1e8))(), cVar6 != '\0'))
  {
    bVar7 = *(byte *)((longlong)param_1 + 0x19) & 0xfe | 1;
    *(byte *)((longlong)param_1 + 0x19) = bVar7;
    bVar7 = (bVar7 ^ bVar2) & 1;
  }
  else {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) & 0xfe;
    bVar7 = bVar2 & 1;
  }
  if ((((bVar2 & 3) == 0) || (bVar7 != 0)) &&
     (plVar3 = (longlong *)param_1[0x2f], plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar9 = iVar8 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar8 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[0x2e];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4,param_1);
          }
          LOCK();
          plVar4 = plVar3 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        break;
      }
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar9 = iVar8 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  FUN_141848710(param_1,param_2);
  return;
}



// FUNCTION 1418476f0 FUN_1418476f0 body=9 status=ok
// SIG undefined FUN_1418476f0(void)

void FUN_1418476f0(longlong param_1)

{
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x30);
  return;
}



// FUNCTION 141847700 FUN_141847700 body=11 status=ok
// SIG undefined FUN_141847700(void)

void FUN_141847700(longlong param_1)

{
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
  FUN_141848710(param_1,5);
  return;
}



// FUNCTION 141847710 FUN_141847710 body=135 status=ok
// SIG undefined FUN_141847710(void)

bool FUN_141847710(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)(**(code **)(*DAT_1469eaf38 + 0x28))(DAT_1469eaf38,local_18);
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
    return lVar3 == param_1;
  }
  return lVar3 == param_1;
}



// FUNCTION 1418477a0 IsAllowingExpensiveTasks body=17 status=ok
// SIG undefined IsAllowingExpensiveTasks(void)

undefined1 FSlateThrottleManager::IsAllowingExpensiveTasks(int *param_1)

{
  if ((param_1[6] != 0) && (*param_1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1418477c0 FUN_1418477c0 body=11 status=ok
// SIG undefined FUN_1418477c0(void)

bool FUN_1418477c0(longlong param_1)

{
  return *(char *)(param_1 + 0x348) == '\x01';
}



// FUNCTION 1418477d0 IsBrushFromFile body=277 status=ok
// SIG undefined IsBrushFromFile(void)

undefined8 FSlateStyleSet::IsBrushFromFile(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong local_res10 [3];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  local_res10[0] = *(longlong *)(param_3 + 0x50);
  if ((local_res10[0] == 0) && (*(longlong *)(param_3 + 0x48) != 0)) {
    local_res10[0] = *(longlong *)(*(longlong *)(param_3 + 0x48) + 0x18);
  }
  FName::ToString(local_res10,&local_38);
  FUN_1416781b0(&local_38);
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    FPaths::ConvertRelativePathToFull(&local_18,param_2);
    FPaths::ConvertRelativePathToFull(&local_28,&local_38);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar4 = 1;
    }
    else {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar4 = 0;
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1418478f0 IsChildWidgetCulled body=499 status=ok
// SIG undefined IsChildWidgetCulled(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SWidget::IsChildWidgetCulled(undefined8 param_1,float *param_2,float *param_3)

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
  
  fVar3 = param_3[0xc];
  fVar6 = fVar3 + *param_3 * param_3[8];
  fVar1 = param_3[0xb];
  fVar12 = fVar1 + *param_3 * param_3[7];
  fVar7 = (param_2[3] - param_2[1]) * 0.5 * _DAT_1464b9ee4;
  fVar10 = param_2[1] - fVar7;
  fVar7 = fVar7 + param_2[3];
  fVar5 = param_3[1] * param_3[9] + fVar1;
  fVar8 = (param_2[2] - *param_2) * 0.5 * _DAT_1464b9ee4;
  fVar11 = param_3[1] * param_3[9] + fVar12;
  fVar13 = *param_2 - fVar8;
  fVar2 = fVar5;
  if (fVar5 <= fVar12) {
    fVar2 = fVar12;
  }
  fVar8 = fVar8 + param_2[2];
  if (fVar2 <= fVar11) {
    fVar2 = fVar11;
  }
  fVar4 = fVar3 + param_3[1] * param_3[10];
  fVar9 = fVar6 + param_3[1] * param_3[10];
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  if (fVar13 <= fVar2) {
    if (fVar12 <= fVar5) {
      fVar5 = fVar12;
    }
    if (fVar11 <= fVar5) {
      fVar5 = fVar11;
    }
    if (fVar1 <= fVar5) {
      fVar5 = fVar1;
    }
    if (fVar5 <= fVar8) {
      fVar1 = fVar4;
      if (fVar4 <= fVar6) {
        fVar1 = fVar6;
      }
      if (fVar1 <= fVar9) {
        fVar1 = fVar9;
      }
      if (fVar1 <= fVar3) {
        fVar1 = fVar3;
      }
      if (fVar10 <= fVar1) {
        if (fVar6 <= fVar4) {
          fVar4 = fVar6;
        }
        if (fVar9 <= fVar4) {
          fVar4 = fVar9;
        }
        if (fVar3 <= fVar4) {
          fVar4 = fVar3;
        }
        if (fVar4 <= fVar7) goto LAB_141847aa8;
      }
    }
  }
  fVar3 = param_3[3];
  fVar5 = param_3[2] * param_3[1];
  fVar1 = param_3[4];
  fVar6 = fVar5 + fVar1;
  fVar5 = fVar5 + fVar1;
  fVar11 = param_3[2] * *param_3 + fVar3;
  fVar2 = fVar3;
  if (fVar3 <= fVar11) {
    fVar2 = fVar11;
  }
  if (fVar13 <= fVar2) {
    if (fVar11 <= fVar3) {
      fVar3 = fVar11;
    }
    if (fVar3 <= fVar8) {
      fVar3 = fVar5;
      if (fVar5 <= fVar1) {
        fVar3 = fVar1;
      }
      if (fVar3 <= fVar6) {
        fVar3 = fVar6;
      }
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      if (fVar10 <= fVar3) {
        if (fVar1 <= fVar5) {
          fVar5 = fVar1;
        }
        if (fVar6 <= fVar5) {
          fVar5 = fVar6;
        }
        if (fVar1 <= fVar5) {
          fVar5 = fVar1;
        }
        if (fVar5 <= fVar7) goto LAB_141847aa8;
      }
    }
  }
  register0x00000020 = *(BADSPACEBASE **)(param_3 + 0xe);
  if (*(char *)((longlong)register0x00000020 + 0x1a) != '\x02') {
    return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
  }
LAB_141847aa8:
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}



// FUNCTION 141847af0 FUN_141847af0 body=573 status=ok
// SIG undefined FUN_141847af0(void)

undefined8 FUN_141847af0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar2 != (longlong *)0x0) {
          if ((*param_3 != 0) && (*param_3 != *param_2)) {
            iVar4 = (int)param_3[0x10];
            do {
              if (iVar4 == -1) {
                LOCK();
                plVar8 = plVar2 + 1;
                lVar3 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
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
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
                return 0;
              }
              plVar6 = (longlong *)((longlong)iVar4 * 0x88 + *param_1);
              plVar8 = (longlong *)plVar6[1];
              iVar4 = (int)plVar6[0x10];
              plVar7 = plVar8;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                iVar5 = (int)plVar8[1];
                bVar9 = iVar5 == 0;
                if (bVar9) {
                  *(int *)(plVar8 + 1) = 0;
                  iVar5 = 0;
                }
                UNLOCK();
                while (plVar7 = (longlong *)0x0, !bVar9) {
                  LOCK();
                  bVar9 = iVar5 == (int)plVar8[1];
                  if (bVar9) {
                    *(int *)(plVar8 + 1) = iVar5 + 1;
                  }
                  UNLOCK();
                  if (bVar9) {
                    plVar7 = plVar8;
                    if (((plVar8 != (longlong *)0x0) && (*plVar6 != 0)) && (*plVar6 == *param_2)) {
                      bVar9 = true;
                      goto LAB_141847bce;
                    }
                    break;
                  }
                  LOCK();
                  iVar5 = (int)plVar8[1];
                  bVar9 = iVar5 == 0;
                  if (bVar9) {
                    *(int *)(plVar8 + 1) = 0;
                    iVar5 = 0;
                  }
                  UNLOCK();
                }
              }
              bVar9 = false;
              plVar8 = plVar7;
LAB_141847bce:
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar8 + 1;
                lVar3 = *plVar7;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              if (bVar9) {
                LOCK();
                plVar8 = plVar2 + 1;
                lVar3 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
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
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
                return 1;
              }
            } while( true );
          }
          LOCK();
          plVar8 = plVar2 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
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
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return 0;
}



// FUNCTION 141847d30 FUN_141847d30 body=434 status=ok
// SIG undefined FUN_141847d30(void)

undefined8 FUN_141847d30(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = *(longlong **)(param_1 + 0x570);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)local_20[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(local_20 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)local_20[1];
      if (bVar10) {
        *(int *)(local_20 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if ((local_20 == (longlong *)0x0) ||
           (uVar9 = *(ulonglong *)(param_1 + 0x568), *(ulonglong *)(param_1 + 0x568) == 0))
        goto LAB_141847d8d;
        goto LAB_141847e00;
      }
      LOCK();
      iVar6 = (int)local_20[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(local_20 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
  }
  goto LAB_141847d8d;
LAB_141847e00:
  do {
    if (uVar9 == *param_2) {
      uVar8 = 1;
      goto LAB_141847d90;
    }
    local_10 = *(longlong **)(uVar9 + 0x570);
    uVar7 = 0;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      uVar3 = *(uint *)(local_10 + 1);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(local_10 + 1) = 0;
      }
      else {
        uVar7 = (ulonglong)uVar3;
      }
      UNLOCK();
      while (!bVar10) {
        iVar6 = (int)uVar7;
        LOCK();
        bVar10 = iVar6 == (int)local_10[1];
        if (bVar10) {
          *(int *)(local_10 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) {
          uVar7 = 0;
          if (local_10 != (longlong *)0x0) {
            uVar7 = *(ulonglong *)(uVar9 + 0x568);
          }
          goto LAB_141847e65;
        }
        uVar7 = 0;
        LOCK();
        uVar3 = *(uint *)(local_10 + 1);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(local_10 + 1) = 0;
        }
        else {
          uVar7 = (ulonglong)uVar3;
        }
        UNLOCK();
      }
      uVar7 = 0;
      local_10 = (longlong *)0x0;
    }
LAB_141847e65:
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_10);
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    uVar9 = uVar7;
  } while (uVar7 != 0);
LAB_141847d8d:
  uVar8 = 0;
LAB_141847d90:
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 141847ef0 IsDirty body=64 status=ok
// SIG undefined IsDirty(void)

undefined8 FShapedGlyphSequence::IsDirty(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x50) * 2;
  while( true ) {
    if (plVar3 == plVar4) {
      return 0;
    }
    if ((*plVar3 == 0) || (plVar3[1] == 0)) break;
    piVar1 = (int *)(plVar3[1] + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 < 1) {
      return 1;
    }
    plVar3 = plVar3 + 2;
  }
  return 1;
}



// FUNCTION 141847f30 FUN_141847f30 body=7 status=ok
// SIG undefined FUN_141847f30(void)

byte FUN_141847f30(longlong param_1)

{
  return *(byte *)(param_1 + 0x54) & 1;
}



// FUNCTION 141847f40 FUN_141847f40 body=96 status=ok
// SIG undefined FUN_141847f40(void)

undefined8 FUN_141847f40(longlong param_1)

{
  double extraout_XMM0_Qa;
  
  if (((*(byte *)(param_1 + 0x420) & 1) != 0) && ((*(byte *)(param_1 + 0x41c) & 4) == 0)) {
    if (((*(byte *)(param_1 + 0x41c) & 2) == 0) &&
       ((**(code **)(*DAT_1469eaf38 + 0x40))(),
       (double)*(float *)(param_1 + 0x418) < extraout_XMM0_Qa - *(double *)(param_1 + 0x408))) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x420) & 2) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141847fa0 FUN_141847fa0 body=205 status=ok
// SIG undefined FUN_141847fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_141847fa0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eb2b8) {
    _Init_thread_header(&DAT_1469eb2b8);
    if (DAT_1469eb2b8 == -1) {
      _DAT_1469eb2b0 = 0x17;
      DAT_1469eb2a8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469eb2a8,0);
      FGenericPlatformString::Memcpy(DAT_1469eb2a8,L"FExternalDragOperation",0x2e);
      atexit((_func_5014 *)&LAB_143e82fb0);
      _Init_thread_footer(&DAT_1469eb2b8);
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_1469eb2b0 != 0) {
    puVar2 = DAT_1469eb2a8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 == 0;
}



// FUNCTION 141848070 FUN_141848070 body=205 status=ok
// SIG undefined FUN_141848070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_141848070(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eb2d0) {
    _Init_thread_header(&DAT_1469eb2d0);
    if (DAT_1469eb2d0 == -1) {
      _DAT_1469eb2c8 = 0x17;
      DAT_1469eb2c0 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469eb2c0,0);
      FGenericPlatformString::Memcpy(DAT_1469eb2c0,L"FGameDragDropOperation",0x2e);
      atexit((_func_5014 *)&LAB_143e82fd0);
      _Init_thread_footer(&DAT_1469eb2d0);
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_1469eb2c8 != 0) {
    puVar2 = DAT_1469eb2c0;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 == 0;
}



// FUNCTION 141848140 IsPointInTriangle body=310 status=ok
// SIG undefined IsPointInTriangle(void)

undefined1 IsPointInTriangle(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_1;
  fVar5 = 1.0;
  fVar1 = *param_2;
  fVar2 = param_1[1];
  fVar3 = param_2[1];
  fVar7 = (fVar6 - fVar1) * (param_3[1] - fVar3) - (*param_3 - fVar1) * (fVar2 - fVar3);
  if (fVar7 <= 0.0) {
    if (0.0 <= fVar7) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = -1.0;
    }
  }
  else {
    fVar7 = 1.0;
  }
  fVar8 = (fVar6 - *param_3) * (param_4[1] - param_3[1]) -
          (*param_4 - *param_3) * (fVar2 - param_3[1]);
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
  fVar6 = (fVar6 - *param_4) * (fVar3 - param_4[1]) - (fVar1 - *param_4) * (fVar2 - param_4[1]);
  if (fVar6 <= 0.0) {
    if (0.0 <= fVar6) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = -1.0;
    }
  }
  if ((fVar7 == fVar8) && (fVar8 == fVar5)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 141848280 IsScreenspaceMouseWithin body=149 status=ok
// SIG undefined IsScreenspaceMouseWithin(void)

undefined8 SWindow::IsScreenspaceMouseWithin(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  float local_res8;
  float fStackX_c;
  
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  fStackX_c = fStackX_c - *(float *)(param_1 + 0x36c);
  local_res8 = (float)param_2;
  local_res8 = local_res8 - *(float *)(param_1 + 0x368);
  iVar2 = _finite((double)local_res8);
  if (iVar2 != 0) {
    iVar2 = _finite((double)fStackX_c);
    if (iVar2 != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0xa8))
                        (*(longlong **)(param_1 + 0x498),(int)local_res8,(int)fStackX_c);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141848320 IsStencilClippingRequired body=5 status=ok
// SIG undefined IsStencilClippingRequired(void)

undefined1 FSlateBatchData::IsStencilClippingRequired(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6c);
}



// FUNCTION 141848330 FUN_141848330 body=13 status=ok
// SIG undefined FUN_141848330(void)

byte FUN_141848330(longlong param_1)

{
  return *(byte *)(param_1 + 0x350) >> 2 & 1;
}



// FUNCTION 141848340 IsUnderLocation body=159 status=ok
// SIG undefined IsUnderLocation(void)

undefined1 FSlateRotatedRect::IsUnderLocation(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / (param_1[2] * param_1[5] - param_1[4] * param_1[3]);
  fVar1 = ((param_2[1] - param_1[1]) * param_1[2] - (*param_2 - *param_1) * param_1[3]) * fVar2;
  if ((((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
      (fVar2 = ((*param_2 - *param_1) * param_1[5] - (param_2[1] - param_1[1]) * param_1[4]) * fVar2
      , 0.0 <= fVar2)) && (fVar2 <= 1.0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1418483e0 IsValid body=11 status=ok
// SIG undefined IsValid(void)

bool FWidgetPath::IsValid(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x130);
}



// FUNCTION 1418483f0 IsViewportFullscreen body=27 status=ok
// SIG undefined IsViewportFullscreen(void)

bool FSlateRenderer::IsViewportFullscreen(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x498) + 0x68))();
  return iVar1 == 0;
}



// FUNCTION 141848410 IsVisible body=43 status=ok
// SIG undefined IsVisible(void)

undefined8 SWindow::IsVisible(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x80))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141848440 IsWindowMaximized body=22 status=ok
// SIG undefined IsWindowMaximized(void)

ulonglong SWindow::IsWindowMaximized(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014184844f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x70))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141848460 IsWindowMinimized body=22 status=ok
// SIG undefined IsWindowMinimized(void)

ulonglong SWindow::IsWindowMinimized(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014184846f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x78))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141848490 Join body=499 status=ok
// SIG undefined Join(void)

undefined8 * ISlateStyle::Join(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined2 *_Dst;
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 local_res10;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  
  if (param_3 != (char *)0x0) {
    puVar5 = (undefined2 *)0x0;
    iVar7 = 0;
    local_48 = (undefined2 *)0x0;
    local_3c = 0;
    puVar2 = puVar5;
    iVar6 = iVar7;
    local_res10 = param_2;
    if (*param_3 != '\0') {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_3[lVar4] != '\0');
      iVar3 = (int)lVar4 + 1;
      local_40 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar6 = local_40;
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar3,param_3,iVar3,0x3f);
    }
    puVar1 = (undefined8 *)FName::ToString(&local_res10,local_38);
    puVar8 = puVar2;
    if (1 < *(int *)(puVar1 + 1)) {
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = iVar7;
      }
      if ((*(int *)(puVar1 + 1) != 0) || (iVar6 = 1, iVar3 == 0)) {
        iVar6 = iVar7;
      }
      local_48 = (undefined2 *)*puVar1;
      *puVar1 = 0;
      local_40 = *(int *)(puVar1 + 1);
      local_3c = *(int *)((longlong)puVar1 + 0xc);
      puVar1[1] = 0;
      if (local_3c < local_40 + iVar6 + iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      }
      iVar7 = local_40;
      puVar5 = puVar2;
      puVar8 = local_48;
      iVar6 = local_40;
      if (iVar3 != 0) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + (uint)(local_40 == 0) + iVar3;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar7);
        }
        iVar6 = local_40;
        puVar8 = local_48;
        _Dst = local_48 + (lVar4 - (ulonglong)(iVar7 != 0));
        ::_guard_xfg_dispatch_icall_nop(_Dst,puVar2,(longlong)iVar3 * 2);
        _Dst[iVar3] = 0;
      }
    }
    puVar2 = &DAT_143f3eda8;
    if (iVar6 != 0) {
      puVar2 = puVar8;
    }
    FName::FName(param_1,puVar2,1);
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 141848690 JumpToEnd body=49 status=ok
// SIG undefined JumpToEnd(void)

void FCurveSequence::JumpToEnd(longlong param_1)

{
  double dVar1;
  
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf8;
  dVar1 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  *(double *)(param_1 + 0x40) = dVar1 - (double)*(float *)(param_1 + 0x50);
  return;
}



// FUNCTION 1418486d0 JumpToStart body=56 status=ok
// SIG undefined JumpToStart(void)

void FCurveSequence::JumpToStart(longlong param_1)

{
  double dVar1;
  
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf9 | 1;
  dVar1 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  *(double *)(param_1 + 0x40) = dVar1 - (double)*(float *)(param_1 + 0x50);
  return;
}



// FUNCTION 141848710 FUN_141848710 body=172 status=ok
// SIG undefined FUN_141848710(void)

void FUN_141848710(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_2 & 1) != 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 6;
    plVar3 = *(longlong **)(param_1 + 0x188);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (!bVar6) {
        while( true ) {
          LOCK();
          bVar6 = iVar5 == (int)plVar3[1];
          if (bVar6) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar6) break;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar6 = iVar5 == 0;
          if (bVar6) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar6) {
            return;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x180) + 0x140))();
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
      }
    }
  }
  return;
}



// FUNCTION 1418487c0 LeaveResponsiveMode body=15 status=ok
// SIG undefined LeaveResponsiveMode(void)

void FSlateThrottleManager::LeaveResponsiveMode(longlong param_1,int *param_2)

{
  if (*param_2 != -1) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *param_2 = -1;
  }
  return;
}



// FUNCTION 1418487d0 LineIntersect body=458 status=ok
// SIG undefined LineIntersect(void)

undefined8
LineIntersect(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
             float param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = 0;
  fVar1 = param_1[1];
  fVar6 = param_2[1] - fVar1;
  fVar2 = *param_1;
  fVar5 = *param_2 - fVar2;
  fVar8 = (*param_4 - *param_3) * (fVar1 - param_3[1]) -
          (fVar2 - *param_3) * (param_4[1] - param_3[1]);
  fVar7 = fVar5 * (fVar1 - param_3[1]) - fVar6 * (fVar2 - *param_3);
  fVar4 = fVar5 * (param_4[1] - param_3[1]) - fVar6 * (*param_4 - *param_3);
  if ((1e-08 < ABS(fVar8)) || (1e-08 < ABS(fVar7))) {
    if (1e-08 < ABS(fVar4)) {
      fVar4 = 1.0 / fVar4;
      fVar8 = fVar4 * fVar8;
      fVar4 = fVar4 * fVar7;
      if ((((-param_6 <= fVar8) && (fVar8 <= param_6 + 1.0)) && (-param_6 <= fVar4)) &&
         (fVar4 <= param_6 + 1.0)) {
        *param_5 = CONCAT44(fVar6 * fVar8 + fVar1,fVar5 * fVar8 + fVar2);
        uVar3 = 1;
      }
    }
  }
  else {
    *param_5 = CONCAT44((param_2[1] + fVar1) * 0.5,(*param_2 + fVar2) * 0.5);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1418489a0 Lock body=16 status=ok
// SIG undefined Lock(void)

undefined8 FSlateDrawBuffer::Lock(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x20) = 1;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),uVar1 == 0);
}



// FUNCTION 1418489b0 Log body=140 status=ok
// SIG undefined Log(void)

void FSlateStyleSet::Log(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (3 < param_2 - 1U) {
    puVar1 = (undefined8 *)FText::ToString(param_3);
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    LowLevelFatalErrorHandler("Unknown",0x17b,&DAT_144d3e808,puVar3);
    puVar1 = (undefined8 *)FText::ToString(param_3);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar2 = (undefined2 *)*puVar1;
    }
    FDebug::AssertFailed(&DAT_144d3da86,"Unknown",0x17b,&DAT_144d3e818,puVar2);
  }
  return;
}



// FUNCTION 141848a40 LogUnusedBrushResources body=1633 status=ok
// SIG undefined LogUnusedBrushResources(void)

void FSlateStyleSet::LogUnusedBrushResources(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint *puVar21;
  uint *puVar22;
  longlong *plVar23;
  undefined1 uVar24;
  longlong *local_188;
  ulonglong local_180;
  uint *local_178;
  longlong *local_170;
  longlong local_168;
  undefined8 local_160;
  int local_158;
  uint uStack_154;
  uint *puStack_150;
  undefined4 local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  uint uStack_134;
  uint *puStack_130;
  undefined4 local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined2 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined8 local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  local_188 = (longlong *)0x0;
  local_180 = 0;
  plVar8 = (longlong *)FUN_1415c3d50();
  local_118 = (undefined2 *)0x0;
  local_110 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  puVar6 = local_118;
  uVar24 = 0;
  FGenericPlatformString::Convert<char,wchar_t>(local_118,6,"*.png",6,0x3f);
  puVar18 = &DAT_143f3eda8;
  puVar20 = &DAT_143f3eda8;
  if ((int)local_110 != 0) {
    puVar20 = puVar6;
  }
  if ((int)param_1[3] != 0) {
    puVar18 = (undefined2 *)param_1[2];
  }
  (**(code **)(*plVar8 + 0x80))(plVar8,&local_188,puVar18,puVar20,CONCAT11(uVar24,1),0,0);
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar13 = (ulonglong)(int)local_180;
  plVar8 = local_188 + uVar13 * 2;
  local_170 = plVar8;
  if (local_188 != plVar8) {
    puVar22 = (uint *)(param_1 + 0x45);
    plVar15 = local_188;
    local_178 = puVar22;
LAB_141848b50:
    plVar23 = param_1 + 0x43;
    uVar12 = puVar22[6];
    bVar4 = false;
    local_158 = 0;
    uStack_154 = 1;
    uStack_144 = 0;
    iStack_140 = 0;
    if (uVar12 != 0) {
      puVar21 = (uint *)param_1[0x47];
      if ((uint *)param_1[0x47] == (uint *)0x0) {
        puVar21 = puVar22;
      }
      uVar10 = *puVar21;
      iStack_140 = 0;
      local_158 = 0;
      while (uVar10 == 0) {
        lVar11 = (longlong)local_158;
        iStack_140 = iStack_140 + 0x20;
        iVar9 = local_158 + 1;
        bVar3 = (int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_158;
        local_158 = iVar9;
        if (bVar3) goto LAB_141848c07;
        uVar10 = puVar21[lVar11 + 1];
      }
      uStack_154 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uStack_154 != 0) {
        for (; uStack_154 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_154 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_144 = (iStack_140 - iVar9) + 0x1f;
      if ((int)uVar12 < (int)uStack_144) {
LAB_141848c07:
        uStack_144 = uVar12;
      }
    }
    local_148 = 0xffffffff;
    uVar10 = *(uint *)(param_1 + 0x48);
    uStack_100 = CONCAT44(uStack_154,local_158);
    uStack_98 = CONCAT44(uStack_144,0xffffffff);
    uStack_e8 = CONCAT44(uStack_13c,iStack_140);
    iVar9 = (int)uVar10 >> 5;
    local_108._4_4_ = (undefined4)((ulonglong)plVar23 >> 0x20);
    uVar16 = -1 << ((byte)uVar10 & 0x1f);
    uVar19 = uVar10 & 0xffffffe0;
    local_108 = CONCAT44(local_108._4_4_,iVar9);
    uStack_f8 = CONCAT44(uVar10,uVar16);
    uStack_f0 = CONCAT44(uStack_144,uVar10) & 0xffffffffffffffe0;
    iStack_a8 = local_158;
    uStack_a4 = uStack_154;
    puStack_150 = puVar22;
    local_a0 = puVar22;
    local_90 = uStack_e8;
    local_b0 = plVar23;
    uVar5 = uStack_f8;
    if (uVar10 != uVar12) {
      puVar21 = (uint *)param_1[0x47];
      if ((uint *)param_1[0x47] == (uint *)0x0) {
        puVar21 = puVar22;
      }
      uVar16 = puVar21[iVar9] & uVar16;
      while (uVar16 == 0) {
        uVar19 = uVar19 + 0x20;
        uVar13 = uStack_f0 >> 0x20;
        uStack_f0 = CONCAT44((int)uVar13,uVar19);
        local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
        local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_141848cf4;
        uVar16 = puVar21[(longlong)iVar9 + 1];
        uStack_f8 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar16 = -uVar16 & uVar16;
      iVar9 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar16 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iVar9 = (uVar19 - iVar9) + 0x1f;
      uStack_f8 = CONCAT44(iVar9,(undefined4)uStack_f8);
      uVar5 = uStack_f8;
      if ((int)uVar12 < iVar9) {
LAB_141848cf4:
        uStack_f8 = CONCAT44(uVar12,(undefined4)uStack_f8);
        uVar5 = uStack_f8;
      }
    }
    while( true ) {
      if (((uStack_98._4_4_ == (int)((ulonglong)uVar5 >> 0x20)) && (local_a0 == puVar22)) &&
         (local_b0 == plVar23)) {
        iVar9 = 0;
        uStack_134 = 1;
        plVar23 = param_1 + 6;
        local_138 = 0;
        uVar12 = *(uint *)(param_1 + 0xb);
        puVar21 = (uint *)(param_1 + 8);
        uStack_124 = 0;
        iStack_120 = 0;
        if (uVar12 == 0) goto LAB_141848e09;
        puVar22 = (uint *)param_1[10];
        if ((uint *)param_1[10] == (uint *)0x0) {
          puVar22 = puVar21;
        }
        uVar10 = *puVar22;
        iVar17 = iVar9;
        if (uVar10 != 0) goto LAB_141848dd4;
        goto LAB_141848db0;
      }
      cVar7 = IsBrushFromFile(param_1,plVar15);
      if (cVar7 != '\0') break;
      uStack_98 = CONCAT44(uStack_98._4_4_,(uint)uStack_98 & ~uStack_a4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
    }
    bVar4 = true;
    goto LAB_141848fc4;
  }
LAB_14184904b:
  uVar12 = (uint)uVar13;
  plVar8 = local_188;
  while (uVar12 != 0) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
    uVar12 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar12;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  return;
  while (uVar10 = puVar22[(longlong)iVar9 + 1], iVar9 = local_138, iVar17 = iStack_120, uVar10 == 0)
  {
LAB_141848db0:
    iStack_120 = iVar17 + 0x20;
    local_138 = iVar9 + 1;
    if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141848e05;
  }
LAB_141848dd4:
  uStack_134 = -uVar10 & uVar10;
  iVar9 = 0x1f;
  if (uStack_134 != 0) {
    for (; uStack_134 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (uStack_134 == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x1f - iVar9;
  }
  uStack_124 = (iStack_120 - iVar9) + 0x1f;
  if ((int)uVar12 < (int)uStack_124) {
LAB_141848e05:
    uStack_124 = uVar12;
  }
LAB_141848e09:
  local_128 = 0xffffffff;
  uVar10 = *(uint *)(param_1 + 0xb);
  uStack_d8 = CONCAT44(uStack_134,local_138);
  uStack_70 = CONCAT44(uStack_124,0xffffffff);
  uStack_c0 = CONCAT44(uStack_11c,iStack_120);
  iVar9 = (int)uVar10 >> 5;
  local_e0._4_4_ = (undefined4)((ulonglong)plVar23 >> 0x20);
  uVar16 = -1 << ((byte)uVar10 & 0x1f);
  uVar19 = uVar10 & 0xffffffe0;
  local_e0 = CONCAT44(local_e0._4_4_,iVar9);
  uStack_d0 = CONCAT44(uVar10,uVar16);
  uStack_c8 = CONCAT44(uStack_124,uVar10) & 0xffffffffffffffe0;
  iStack_80 = local_138;
  uStack_7c = uStack_134;
  puStack_130 = puVar21;
  local_78 = puVar21;
  local_68 = uStack_c0;
  local_88 = plVar23;
  uVar5 = uStack_d0;
  if (uVar10 != uVar12) {
    puVar22 = (uint *)param_1[10];
    if ((uint *)param_1[10] == (uint *)0x0) {
      puVar22 = puVar21;
    }
    uVar16 = puVar22[iVar9] & uVar16;
    while (uVar16 == 0) {
      uVar19 = uVar19 + 0x20;
      uVar13 = uStack_c8 >> 0x20;
      uStack_c8 = CONCAT44((int)uVar13,uVar19);
      local_e0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
      local_e0 = CONCAT44(local_e0._4_4_,iVar9 + 1);
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_141848ee3;
      uVar16 = puVar22[(longlong)iVar9 + 1];
      uStack_d0 = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar16 = -uVar16 & uVar16;
    local_b8 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> local_b8 == 0; local_b8 = local_b8 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - local_b8;
    }
    iVar9 = (uVar19 - iVar9) + 0x1f;
    uStack_d0 = CONCAT44(iVar9,(undefined4)uStack_d0);
    uVar5 = uStack_d0;
    if ((int)uVar12 < iVar9) {
LAB_141848ee3:
      uStack_d0 = CONCAT44(uVar12,(undefined4)uStack_d0);
      uVar5 = uStack_d0;
    }
  }
  while( true ) {
    if (((uStack_70._4_4_ == (int)((ulonglong)uVar5 >> 0x20)) && (local_78 == puVar21)) &&
       (plVar8 = local_170, puVar22 = local_178, local_88 == plVar23)) break;
    local_168 = 0;
    local_160 = 0;
    plVar8 = *(longlong **)((longlong)uStack_70._4_4_ * 0x20 + 8 + *local_88);
    (**(code **)(*plVar8 + 8))(plVar8,&local_168);
    lVar11 = local_168 + (longlong)(int)local_160 * 8;
    for (lVar14 = local_168; lVar14 != lVar11; lVar14 = lVar14 + 8) {
      cVar7 = IsBrushFromFile(param_1,plVar15);
      if (cVar7 != '\0') {
        bVar4 = true;
        plVar8 = local_170;
        puVar22 = local_178;
        if (local_168 != 0) {
          FMemory::Free();
          plVar8 = local_170;
          puVar22 = local_178;
        }
        goto LAB_141848fc4;
      }
    }
    if (local_168 != 0) {
      FMemory::Free(local_168);
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
LAB_141848fc4:
  if (!bVar4) {
    lVar11 = *param_1;
    FText::FromString(local_60,plVar15);
    (**(code **)(lVar11 + 0x88))(param_1,3);
    plVar23 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_58)();
        LOCK();
        piVar2 = (int *)((longlong)plVar23 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar23 + 8))(plVar23,1);
        }
      }
    }
  }
  plVar15 = plVar15 + 2;
  if (plVar15 == plVar8) goto code_r0x000141849032;
  goto LAB_141848b50;
code_r0x000141849032:
  uVar13 = local_180 & 0xffffffff;
  goto LAB_14184904b;
}



// FUNCTION 1418490b0 MakeBox body=342 status=ok
// SIG undefined MakeBox(void)

void FSlateDrawElement::MakeBox
               (longlong *param_1,undefined2 param_2,undefined8 param_3,longlong param_4,
               undefined1 param_5,undefined4 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  if (((float)param_6[3] != 0.0) && (cVar5 = ShouldCull(param_1,param_3,param_4), cVar5 == '\0')) {
    lVar7 = *(longlong *)(param_1[0x141] + -8 + (longlong)(int)param_1[0x142] * 8);
    if (*(char *)(param_4 + 0x6c) == '\x02') {
      plVar8 = (longlong *)(lVar7 + 0x8a0);
    }
    else {
      plVar8 = (longlong *)(lVar7 + 0x890);
    }
    lVar7 = plVar8[1];
    iVar6 = (int)lVar7 + 1;
    *(int *)(plVar8 + 1) = iVar6;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar8);
    }
    lVar1 = *plVar8;
    lVar7 = (longlong)(int)lVar7 * 0x70;
    *(undefined8 *)(lVar7 + lVar1) = 0x3f800000;
    *(undefined4 *)(lVar7 + 8 + lVar1) = 0;
    *(undefined8 *)(lVar7 + 0xc + lVar1) = 0x3f800000;
    *(undefined4 *)(lVar7 + 0x14 + lVar1) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar1) = 0x3f800000;
    *(undefined4 *)(lVar7 + 0x20 + lVar1) = 0;
    *(undefined8 *)(lVar7 + 0x24 + lVar1) = 0x3f800000;
    *(undefined4 *)(lVar7 + 0x2c + lVar1) = 0;
    lVar7 = *plVar8 + lVar7;
    FUN_14185be40(lVar7,param_1,param_2,param_3,param_5);
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[3];
    *(undefined4 *)(lVar7 + 0x4c) = *param_6;
    *(undefined4 *)(lVar7 + 0x50) = uVar2;
    *(undefined4 *)(lVar7 + 0x54) = uVar3;
    *(undefined4 *)(lVar7 + 0x58) = uVar4;
    FUN_14185a2d0(lVar7 + 0x60,param_4);
    lVar7 = *(longlong *)(param_4 + 0x48);
    if (lVar7 != 0) {
      iVar6 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
      }
      *(longlong *)(*param_1 + (longlong)iVar6 * 8) = lVar7;
    }
  }
  return;
}



// FUNCTION 141849210 MakeCachedBuffer body=401 status=ok
// SIG undefined MakeCachedBuffer(void)

void FSlateDrawElement::MakeCachedBuffer
               (longlong param_1,undefined2 param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  byte local_24;
  
  cVar3 = ShouldCull();
  if ((cVar3 == '\0') && (*param_3 != 0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    plVar6 = (longlong *)(lVar2 + 0x8e0);
    iVar1 = *(int *)(lVar2 + 0x8e8);
    iVar4 = iVar1 + 1;
    *(int *)(lVar2 + 0x8e8) = iVar4;
    if (*(int *)(lVar2 + 0x8ec) < iVar4) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    lVar2 = *plVar6;
    lVar5 = (longlong)iVar1 * 0x60;
    local_58 = 0;
    uStack_50 = 0x3f800000;
    local_38 = 0;
    uStack_30 = 0x3f800000;
    *(undefined4 *)(lVar5 + 8 + lVar2) = 0;
    *(undefined8 *)(lVar5 + lVar2) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0xc + lVar2) = 0x3f800000;
    *(undefined4 *)(lVar5 + 0x14 + lVar2) = 0;
    *(undefined4 *)(lVar5 + 0x20 + lVar2) = 0;
    *(undefined8 *)(lVar5 + 0x18 + lVar2) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x24 + lVar2) = 0x3f800000;
    *(undefined4 *)(lVar5 + 0x2c + lVar2) = 0;
    lVar5 = *plVar6 + lVar5;
    local_28 = 0;
    local_24 = local_24 & 0xfd | 1;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    FUN_14185be40(lVar5,param_1,param_2,&local_58,0);
    *(longlong *)(lVar5 + 0x50) = *param_3;
    *(undefined8 *)(lVar5 + 0x58) = *param_4;
    LOCK();
    *(int *)(*param_3 + 0x38) = *(int *)(*param_3 + 0x38) + 1;
    UNLOCK();
    iVar1 = *(int *)(param_1 + 0xa20);
    *(int *)(param_1 + 0xa20) = iVar1 + 1;
    if (*(int *)(param_1 + 0xa24) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa18,iVar1);
    }
    plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xa18));
    *plVar6 = *param_3;
    lVar2 = param_3[1];
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1418493b0 MakeCap body=1353 status=ok
// SIG undefined MakeCap(void)

void FLineBuilder::MakeCap
               (longlong *param_1,longlong *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6,undefined4 *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  
  uVar15 = DAT_1468b5d88._4_4_;
  uVar14 = (undefined4)DAT_1468b5d88;
  fVar3 = param_4[1];
  fVar4 = *param_4;
  iVar11 = (int)param_1[1];
  lVar17 = (longlong)iVar11;
  fVar5 = *param_3;
  iVar18 = iVar11 + 1;
  fVar6 = param_3[1];
  uVar12 = *param_7;
  fVar7 = param_3[3];
  fVar19 = fVar3 * param_3[2];
  fVar8 = param_3[5];
  fVar20 = param_3[4];
  *(int *)(param_1 + 1) = iVar18;
  if (*(int *)((longlong)param_1 + 0xc) < iVar18) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(fVar19,iVar11);
  }
  lVar16 = *param_1;
  puVar1 = (undefined8 *)(lVar16 + lVar17 * 0x28);
  *puVar1 = 0x3f000000;
  puVar1[1] = CONCAT44(uVar15,uVar14);
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17 * 0x28);
  *puVar1 = CONCAT44(uStack_44,local_48);
  puVar1[1] = CONCAT44(fVar3 * fVar7 + fVar4 * fVar6 + fVar8,fVar4 * fVar5 + fVar19 + fVar20);
  *(ulonglong *)(lVar16 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_34,uVar12);
  uVar15 = DAT_1468b5d88._4_4_;
  uVar14 = (undefined4)DAT_1468b5d88;
  iVar13 = (int)param_1[1];
  fVar19 = *param_4 + *param_5 + *param_6;
  uVar12 = *param_7;
  fVar20 = param_5[1] + param_4[1] + param_6[1];
  fVar3 = param_3[1];
  fVar4 = *param_3;
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  *(int *)(param_1 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
  }
  lVar16 = (longlong)iVar13;
  lVar17 = *param_1;
  puVar1 = (undefined8 *)(lVar17 + lVar16 * 0x28);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uVar15,uVar14);
  puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar16 * 0x28);
  *puVar1 = CONCAT44(uStack_44,local_48);
  puVar1[1] = CONCAT44(fVar19 * fVar3 + fVar20 * fVar6 + fVar8,
                       fVar20 * fVar5 + fVar19 * fVar4 + fVar7);
  *(ulonglong *)(lVar17 + 0x20 + lVar16 * 0x28) = CONCAT44(uStack_34,uVar12);
  uVar15 = DAT_1468b5d88._4_4_;
  uVar14 = (undefined4)DAT_1468b5d88;
  uVar12 = *param_7;
  iVar13 = (int)param_1[1];
  lVar17 = (longlong)iVar13;
  fVar19 = (*param_4 + *param_5) - *param_6;
  fVar20 = (param_5[1] + param_4[1]) - param_6[1];
  fVar3 = param_3[1];
  fVar4 = *param_3;
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  *(int *)(param_1 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
  }
  lVar16 = *param_1;
  puVar1 = (undefined8 *)(lVar16 + lVar17 * 0x28);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uVar15,uVar14);
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17 * 0x28);
  *puVar1 = CONCAT44(uStack_44,local_48);
  puVar1[1] = CONCAT44(fVar19 * fVar3 + fVar20 * fVar6 + fVar8,
                       fVar20 * fVar5 + fVar19 * fVar4 + fVar7);
  *(ulonglong *)(lVar16 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_34,uVar12);
  uVar15 = DAT_1468b5d88._4_4_;
  uVar14 = (undefined4)DAT_1468b5d88;
  fVar3 = *param_4;
  fVar4 = param_6[1];
  fVar5 = param_4[1];
  fVar6 = *param_6;
  iVar13 = (int)param_1[1];
  lVar17 = (longlong)iVar13;
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  uVar12 = *param_7;
  fVar20 = *param_3;
  fVar19 = param_3[1];
  fVar9 = param_3[4];
  fVar10 = param_3[5];
  *(int *)(param_1 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
  }
  lVar16 = *param_1;
  puVar1 = (undefined8 *)(lVar16 + lVar17 * 0x28);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uVar15,uVar14);
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17 * 0x28);
  *puVar1 = CONCAT44(uStack_44,local_48);
  puVar1[1] = CONCAT44((fVar4 + fVar5) * fVar8 + (fVar3 + fVar6) * fVar19 + fVar10,
                       (fVar4 + fVar5) * fVar7 + (fVar3 + fVar6) * fVar20 + fVar9);
  *(ulonglong *)(lVar16 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_34,uVar12);
  uVar15 = DAT_1468b5d88._4_4_;
  uVar14 = (undefined4)DAT_1468b5d88;
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_6[1];
  fVar6 = *param_6;
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  uVar12 = *param_7;
  fVar20 = *param_3;
  fVar19 = param_3[1];
  fVar9 = param_3[4];
  fVar10 = param_3[5];
  iVar13 = (int)param_1[1];
  lVar17 = (longlong)iVar13;
  *(int *)(param_1 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
  }
  lVar16 = *param_1;
  puVar1 = (undefined8 *)(lVar16 + lVar17 * 0x28);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uVar15,uVar14);
  puVar2 = (undefined4 *)(lVar16 + 0x10 + lVar17 * 0x28);
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = (fVar4 - fVar5) * fVar7 + (fVar3 - fVar6) * fVar20 + fVar9;
  puVar2[3] = (fVar4 - fVar5) * fVar8 + (fVar3 - fVar6) * fVar19 + fVar10;
  *(ulonglong *)(lVar16 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_34,uVar12);
  iVar13 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
  }
  *(int *)(*param_2 + (longlong)iVar13 * 4) = iVar11;
  iVar13 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
  }
  *(int *)(*param_2 + (longlong)iVar13 * 4) = iVar11 + 3;
  iVar13 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
  }
  *(int *)(*param_2 + (longlong)iVar13 * 4) = iVar18;
  iVar13 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
  }
  *(int *)(*param_2 + (longlong)iVar13 * 4) = iVar11;
  iVar13 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
  }
  *(int *)(*param_2 + (longlong)iVar13 * 4) = iVar18;
  iVar18 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar18 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar18 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar18);
  }
  *(int *)(*param_2 + (longlong)iVar18 * 4) = iVar11 + 2;
  iVar18 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar18 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar18 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar18);
  }
  *(int *)(*param_2 + (longlong)iVar18 * 4) = iVar11;
  iVar18 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar18 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar18 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar18);
  }
  *(int *)(*param_2 + (longlong)iVar18 * 4) = iVar11 + 2;
  iVar18 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar18 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar18 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar18);
  }
  *(int *)(*param_2 + (longlong)iVar18 * 4) = iVar11 + 4;
  return;
}



// FUNCTION 141849900 FUN_141849900 body=391 status=ok
// SIG undefined FUN_141849900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141849900(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  longlong *local_210;
  longlong *local_208;
  undefined1 *local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [464];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar4 = FUN_1417e8330(local_1e8);
  *(undefined4 *)(lVar4 + 0x108) = 4;
  *(undefined2 *)(lVar4 + 0x16b) = 0x101;
  *(undefined1 *)(lVar4 + 0x16a) = 1;
  *(undefined4 *)(lVar4 + 0x160) = 1;
  *(undefined1 *)(lVar4 + 0x16d) = 0;
  *(undefined4 *)(lVar4 + 0x170) = 0;
  plVar5 = (longlong *)operator_new(0x600);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144d503d8;
    if (plVar5 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4890();
    }
  }
  local_210 = plVar5 + 2;
  local_208 = plVar5;
  FUN_14044f790(&local_210,local_210);
  local_200 = local_218;
  FName::FName(local_1f8,"SWindow",1);
  plVar5[0x26] = local_1f8[0];
  FUN_1417fd440(&local_210,param_1,lVar4);
  plVar5 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  FUN_1417f5da0(local_1e8);
  *(undefined4 *)(*param_1 + 0x344) = 0x3f800000;
  return param_1;
}



// FUNCTION 141849a90 FUN_141849a90 body=427 status=ok
// SIG undefined FUN_141849a90(void)

void FUN_141849a90(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  byte local_1c;
  
  cVar3 = FSlateDrawElement::ShouldCull();
  if (cVar3 == '\0') {
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    iVar4 = FUN_1417ffb80(lVar6 + 0x880,1);
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0x3f800000;
    local_20 = 0;
    lVar6 = (longlong)iVar4 * 0x130 + *(longlong *)(lVar6 + 0x880);
    local_1c = local_1c & 0xfd | 1;
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0x3f800000;
    uStack_24 = 0;
    FUN_141846510(lVar6,param_1,param_2,&local_50,0);
    *(undefined8 *)(lVar6 + 0xd0) = 0x3f800000;
    *(undefined8 *)(lVar6 + 0xd8) = 0x3f80000000000000;
    *(undefined4 *)(lVar6 + 0x11c) = 4;
    *(undefined8 *)(lVar6 + 0xe0) = 0;
    *(undefined8 *)(lVar6 + 0x60) = *param_3;
    plVar2 = (longlong *)param_3[1];
    plVar5 = *(longlong **)(lVar6 + 0x68);
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(lVar6 + 0x68);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(0,1);
        }
      }
      *(longlong **)(lVar6 + 0x68) = plVar2;
    }
    plVar2 = (longlong *)param_3[1];
  }
  else {
    plVar2 = (longlong *)param_3[1];
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 141849c40 MakeCustomVerts body=368 status=ok
// SIG undefined MakeCustomVerts(void)

void FSlateDrawElement::MakeCustomVerts
               (longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               undefined1 param_9)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  byte local_34;
  
  cVar1 = ShouldCull();
  if (cVar1 == '\0') {
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    iVar2 = FUN_1417ffb80(lVar4 + 0x880,1);
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0x3f800000;
    uStack_5c = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    local_38 = 0;
    lVar4 = (longlong)iVar2 * 0x130 + *(longlong *)(lVar4 + 0x880);
    local_34 = local_34 & 0xfd | 1;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0;
    FUN_141846510(lVar4,param_1,param_2,&local_68,param_9);
    *(undefined8 *)(lVar4 + 0xd0) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xd8) = 0x3f80000000000000;
    *(undefined4 *)(lVar4 + 0x11c) = 5;
    *(undefined8 *)(lVar4 + 0xe0) = 0;
    uVar3 = 0;
    if ((undefined8 *)*param_3 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)*param_3;
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    TArray<FSlateVertex,FDefaultAllocator>::operator=(lVar4 + 0x70,param_4);
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar4 + 0x80,param_5);
    *(undefined8 *)(lVar4 + 0x90) = param_6;
    *(undefined4 *)(lVar4 + 0x98) = param_7;
    *(undefined4 *)(lVar4 + 0x9c) = param_8;
  }
  return;
}



// FUNCTION 141849db0 MakeGradient body=229 status=ok
// SIG undefined MakeGradient(void)

void FSlateDrawElement::MakeGradient
               (longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
               undefined4 param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  if ((*(float *)(param_3 + 0x14) != 0.0) && (*(float *)(param_3 + 0x18) != 0.0)) {
    cVar1 = ShouldCull(param_1);
    if (cVar1 == '\0') {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
      iVar2 = FUN_1417ffb80(lVar3 + 0x880,1);
      lVar3 = (longlong)iVar2 * 0x130 + *(longlong *)(lVar3 + 0x880);
      FUN_141846510(lVar3,param_1,param_2,param_3,param_6);
      *(undefined4 *)(lVar3 + 0x11c) = 2;
      TArray<FBoneReference,FDefaultAllocator>::operator=(lVar3 + 0x48,param_4);
      *(undefined4 *)(lVar3 + 0x58) = param_5;
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141849ea0 MakeLines body=283 status=ok
// SIG undefined MakeLines(void)

void FSlateDrawElement::MakeLines
               (longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5,undefined4 *param_6,undefined1 param_7,undefined4 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  cVar7 = ShouldCull(param_1);
  if (cVar7 == '\0') {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    plVar9 = (longlong *)(lVar2 + 0x8d0);
    iVar1 = *(int *)(lVar2 + 0x8d8);
    *(int *)(lVar2 + 0x8d8) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x8dc) < iVar1 + 1) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (plVar9,iVar1);
    }
    lVar2 = *plVar9;
    lVar8 = (longlong)iVar1 * 0x78;
    *(undefined8 *)(lVar8 + lVar2) = 0x3f800000;
    *(undefined4 *)(lVar8 + 8 + lVar2) = 0;
    *(undefined8 *)(lVar8 + 0xc + lVar2) = 0x3f800000;
    *(undefined4 *)(lVar8 + 0x14 + lVar2) = 0;
    *(undefined8 *)(lVar8 + 0x18 + lVar2) = 0x3f800000;
    *(undefined4 *)(lVar8 + 0x20 + lVar2) = 0;
    *(undefined8 *)(lVar8 + 0x24 + lVar2) = 0x3f800000;
    *(undefined4 *)(lVar8 + 0x2c + lVar2) = 0;
    lVar8 = *plVar9 + lVar8;
    FUN_14185be40(lVar8,param_1,param_2,param_3,param_5);
    uVar3 = *param_6;
    uVar4 = param_6[1];
    uVar5 = param_6[2];
    uVar6 = param_6[3];
    *(undefined4 *)(lVar8 + 0x5c) = param_8;
    *(undefined4 *)(lVar8 + 0x4c) = uVar3;
    *(undefined4 *)(lVar8 + 0x50) = uVar4;
    *(undefined4 *)(lVar8 + 0x54) = uVar5;
    *(undefined4 *)(lVar8 + 0x58) = uVar6;
    FUN_14185ad20(lVar8,param_1,param_4,param_7,0);
  }
  return;
}



// FUNCTION 141849fc0 FUN_141849fc0 body=422 status=ok
// SIG undefined FUN_141849fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141849fc0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  longlong *local_210;
  longlong *local_208;
  undefined1 *local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [464];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar4 = FUN_1417e8330(local_1e8);
  *(undefined4 *)(lVar4 + 0x108) = 3;
  *(undefined2 *)(lVar4 + 0x176) = 0;
  *(undefined2 *)(lVar4 + 0x16a) = 0x101;
  *(undefined1 *)(lVar4 + 0x19c) = 0;
  *(undefined8 *)(lVar4 + 0x160) = 1;
  *(undefined1 *)(lVar4 + 0x16d) = 0;
  *(undefined4 *)(lVar4 + 0x170) = 0;
  plVar5 = (longlong *)operator_new(0x600);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144d503d8;
    if (plVar5 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4890();
    }
  }
  local_210 = plVar5 + 2;
  local_208 = plVar5;
  FUN_14044f790(&local_210,local_210);
  local_200 = local_218;
  FName::FName(local_1f8,"SWindow",1);
  plVar5[0x26] = local_1f8[0];
  FUN_1417fd440(&local_210,param_1,lVar4);
  plVar5 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  FUN_1417f5da0(local_1e8);
  *(byte *)(*param_1 + 0x350) = *(byte *)(*param_1 + 0x350) | 8;
  *(undefined4 *)(*param_1 + 0x59c) = 0x400;
  *(undefined4 *)(*param_1 + 0x5a0) = 0x100;
  return param_1;
}



// FUNCTION 14184a170 MakePostProcessPass body=187 status=ok
// SIG undefined MakePostProcessPass(void)

void FSlateDrawElement::MakePostProcessPass
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  cVar2 = ShouldCull(param_1);
  if (cVar2 == '\0') {
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    iVar3 = FUN_1417ffb80(lVar4 + 0x880,1);
    lVar4 = (longlong)iVar3 * 0x130 + *(longlong *)(lVar4 + 0x880);
    FUN_141846510(lVar4,param_1,param_2,param_3,0);
    *(undefined4 *)(lVar4 + 0xc0) = param_5;
    *(undefined4 *)(lVar4 + 0x11c) = 7;
    uVar1 = param_4[1];
    *(undefined8 *)(lVar4 + 0xb0) = *param_4;
    *(undefined8 *)(lVar4 + 0xb8) = uVar1;
  }
  return;
}



// FUNCTION 14184a230 FUN_14184a230 body=710 status=ok
// SIG undefined FUN_14184a230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14184a230(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5,undefined4 *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined **local_80 [3];
  longlong local_68;
  longlong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = param_2;
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  lVar6 = *param_4;
  if (((((*(int *)(lVar6 + 8) != 0) && (*(float *)(param_3 + 0x14) != 0.0)) &&
       (*(float *)(param_3 + 0x18) != 0.0)) &&
      (cVar12 = FSlateDrawElement::ShouldCull(param_1), cVar12 == '\0')) &&
     (((float)param_6[3] != 0.0 ||
      ((*(int *)(lVar6 + 0x20) != 0 && (*(float *)((longlong)param_7 + 0xc) != 0.0)))))) {
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    plVar15 = (longlong *)(lVar6 + 0x8c0);
    iVar5 = *(int *)(lVar6 + 0x8c8);
    iVar13 = iVar5 + 1;
    *(int *)(lVar6 + 0x8c8) = iVar13;
    if (*(int *)(lVar6 + 0x8cc) < iVar13) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(plVar15);
    }
    lVar6 = *plVar15;
    lVar14 = (longlong)iVar5 * 0x80;
    *(undefined4 *)(lVar14 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar14 + lVar6) = 0x3f800000;
    *(undefined8 *)(lVar14 + 0xc + lVar6) = 0x3f800000;
    *(undefined4 *)(lVar14 + 0x14 + lVar6) = 0;
    *(undefined4 *)(lVar14 + 0x20 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x18 + lVar6) = 0x3f800000;
    *(undefined8 *)(lVar14 + 0x24 + lVar6) = 0x3f800000;
    *(undefined4 *)(lVar14 + 0x2c + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x60 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x68 + lVar6) = 0;
    lVar14 = *plVar15 + lVar14;
    local_a8 = param_5;
    FUN_14185be40(lVar14,param_1,(undefined2)local_88,param_3);
    uVar7 = param_6[1];
    uVar8 = param_6[2];
    uVar9 = param_6[3];
    *(undefined4 *)(lVar14 + 0x4c) = *param_6;
    *(undefined4 *)(lVar14 + 0x50) = uVar7;
    *(undefined4 *)(lVar14 + 0x54) = uVar8;
    *(undefined4 *)(lVar14 + 0x58) = uVar9;
    plVar15 = (longlong *)param_4[1];
    lVar6 = *param_4;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    uVar10 = *param_7;
    uVar11 = param_7[1];
    plVar1 = (longlong *)(lVar14 + 0x60);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_98 = lVar6;
    plStack_90 = plVar15;
    if (&local_98 != plVar1) {
      local_98 = *plVar1;
      plStack_90 = *(longlong **)(lVar14 + 0x68);
      *plVar1 = lVar6;
      *(longlong **)(lVar14 + 0x68) = plVar15;
      local_60 = lVar6;
      plStack_58 = plVar15;
    }
    plVar4 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_90 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_90 + 8))(plStack_90,1);
        }
      }
    }
    *(undefined8 *)(lVar14 + 0x70) = uVar10;
    *(undefined8 *)(lVar14 + 0x78) = uVar11;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar15 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar3 = (int *)((longlong)plVar15 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    FReferenceCollector::FReferenceCollector(local_80);
    local_80[0] = &PTR__scalar_deleting_destructor__144d4fc80;
    lVar6 = *plVar1;
    local_68 = param_1;
    FSlateObjectReferenceCollector::HandleObjectReference(local_80,lVar6 + 0x18,0,0);
    (*(code *)local_80[0][7])(local_80,lVar6 + 0x28,0,0);
    FReferenceCollector::~FReferenceCollector(local_80);
  }
  return;
}



// FUNCTION 14184a500 FUN_14184a500 body=599 status=ok
// SIG undefined FUN_14184a500(void)

void FUN_14184a500(longlong param_1,undefined2 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined **local_48 [3];
  longlong local_30;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  iVar2 = *(int *)(param_4 + 8);
  iVar11 = iVar2 + -1;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar11 = -1;
    iVar8 = -1;
  }
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  if ((iVar8 != 0) && ((float)param_7[3] != 0.0)) {
    if (iVar2 == 0) {
      iVar11 = 0;
    }
    if ((((iVar11 != 0) && (*(float *)(param_3 + 0x14) != 0.0)) &&
        (*(float *)(param_3 + 0x18) != 0.0)) &&
       (cVar7 = FSlateDrawElement::ShouldCull(param_1), cVar7 == '\0')) {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
      plVar10 = (longlong *)(lVar3 + 0x8b0);
      iVar11 = *(int *)(lVar3 + 0x8b8);
      *(int *)(lVar3 + 0x8b8) = iVar11 + 1;
      if (*(int *)(lVar3 + 0x8bc) < iVar11 + 1) {
        FUN_1404852a0(plVar10,iVar11);
      }
      lVar3 = *plVar10;
      lVar9 = (longlong)iVar11 * 0xc0;
      *(undefined8 *)(lVar9 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar9 + 8 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0xc + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar9 + 0x14 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0x18 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar9 + 0x20 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0x24 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar9 + 0x2c + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0x60 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0x68 + lVar3) = 0;
      *(undefined4 *)(lVar9 + 0x70 + lVar3) = 0;
      *(undefined1 *)(lVar9 + 0x74 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0x78 + lVar3) = 0;
      uVar6 = DAT_1464aa6ec;
      uVar5 = DAT_1464aa6e8;
      uVar4 = DAT_1464aa6e4;
      puVar1 = (undefined4 *)(lVar9 + 0x80 + lVar3);
      *puVar1 = DAT_1464aa6e0;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined8 *)(lVar9 + 0x90 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0x98 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 0xa0 + lVar3) = 0;
      *(undefined4 *)(lVar9 + 0xa8 + lVar3) = 0;
      *(undefined1 *)(lVar9 + 0xac + lVar3) = 3;
      lVar9 = *plVar10 + lVar9;
      FUN_14185be40(lVar9,param_1,param_2,param_3,param_6);
      uVar4 = param_7[1];
      uVar5 = param_7[2];
      uVar6 = param_7[3];
      *(undefined4 *)(lVar9 + 0x4c) = *param_7;
      *(undefined4 *)(lVar9 + 0x50) = uVar4;
      *(undefined4 *)(lVar9 + 0x54) = uVar5;
      *(undefined4 *)(lVar9 + 0x58) = uVar6;
      FUN_14185b400(lVar9,param_1,param_4,param_5,0,0x7fffffff);
      FReferenceCollector::FReferenceCollector(local_48);
      local_48[0] = &PTR__scalar_deleting_destructor__144d4fc80;
      local_30 = param_1;
      FSlateObjectReferenceCollector::HandleObjectReference(local_48,lVar9 + 0x60,0,0);
      (*(code *)local_48[0][7])(local_48,lVar9 + 0x68,0,0);
      (*(code *)local_48[0][7])(local_48,lVar9 + 0x78,0,0);
      FReferenceCollector::~FReferenceCollector(local_48);
    }
  }
  return;
}



// FUNCTION 14184a760 FUN_14184a760 body=573 status=ok
// SIG undefined FUN_14184a760(void)

void FUN_14184a760(longlong param_1,undefined2 param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 *param_9)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined **local_48 [3];
  longlong local_30;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  if ((float)param_9[3] != 0.0) {
    iVar9 = *(int *)(param_4 + 8) + -1;
    if (*(int *)(param_4 + 8) == 0) {
      iVar9 = 0;
    }
    if ((((iVar9 != 0) && (*(float *)(param_3 + 0x14) != 0.0)) &&
        (*(float *)(param_3 + 0x18) != 0.0)) &&
       (cVar6 = FSlateDrawElement::ShouldCull(param_1), cVar6 == '\0')) {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
      plVar8 = (longlong *)(lVar2 + 0x8b0);
      iVar9 = *(int *)(lVar2 + 0x8b8);
      *(int *)(lVar2 + 0x8b8) = iVar9 + 1;
      if (*(int *)(lVar2 + 0x8bc) < iVar9 + 1) {
        FUN_1404852a0(plVar8,iVar9);
      }
      lVar2 = *plVar8;
      lVar7 = (longlong)iVar9 * 0xc0;
      *(undefined8 *)(lVar7 + lVar2) = 0x3f800000;
      *(undefined4 *)(lVar7 + 8 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0xc + lVar2) = 0x3f800000;
      *(undefined4 *)(lVar7 + 0x14 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0x18 + lVar2) = 0x3f800000;
      *(undefined4 *)(lVar7 + 0x20 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0x24 + lVar2) = 0x3f800000;
      *(undefined4 *)(lVar7 + 0x2c + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0x60 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0x68 + lVar2) = 0;
      *(undefined4 *)(lVar7 + 0x70 + lVar2) = 0;
      *(undefined1 *)(lVar7 + 0x74 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0x78 + lVar2) = 0;
      uVar5 = DAT_1464aa6ec;
      uVar4 = DAT_1464aa6e8;
      uVar3 = DAT_1464aa6e4;
      puVar1 = (undefined4 *)(lVar7 + 0x80 + lVar2);
      *puVar1 = DAT_1464aa6e0;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(lVar7 + 0x90 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0x98 + lVar2) = 0;
      *(undefined8 *)(lVar7 + 0xa0 + lVar2) = 0;
      *(undefined4 *)(lVar7 + 0xa8 + lVar2) = 0;
      *(undefined1 *)(lVar7 + 0xac + lVar2) = 3;
      lVar7 = *plVar8 + lVar7;
      FUN_14185be40(lVar7,param_1,param_2,param_3,param_8);
      uVar3 = param_9[1];
      uVar4 = param_9[2];
      uVar5 = param_9[3];
      *(undefined4 *)(lVar7 + 0x4c) = *param_9;
      *(undefined4 *)(lVar7 + 0x50) = uVar3;
      *(undefined4 *)(lVar7 + 0x54) = uVar4;
      *(undefined4 *)(lVar7 + 0x58) = uVar5;
      FUN_14185b400(lVar7,param_1,param_4,param_7,param_5,param_6);
      FReferenceCollector::FReferenceCollector(local_48);
      local_48[0] = &PTR__scalar_deleting_destructor__144d4fc80;
      local_30 = param_1;
      FSlateObjectReferenceCollector::HandleObjectReference(local_48,lVar7 + 0x60,0,0);
      (*(code *)local_48[0][7])(local_48,lVar7 + 0x68,0,0);
      (*(code *)local_48[0][7])(local_48,lVar7 + 0x78,0,0);
      FReferenceCollector::~FReferenceCollector(local_48);
    }
  }
  return;
}



// FUNCTION 14184a9a0 FUN_14184a9a0 body=434 status=ok
// SIG undefined FUN_14184a9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14184a9a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  longlong *local_210;
  longlong *local_208;
  undefined1 *local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [464];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar4 = FUN_1417e8330(local_1e8);
  *(undefined4 *)(lVar4 + 0x108) = 2;
  *(undefined2 *)(lVar4 + 0x16b) = 0x101;
  *(undefined1 *)(lVar4 + 0x15c) = 0;
  *(undefined1 *)(lVar4 + 0x16a) = 1;
  *(undefined4 *)(lVar4 + 0x160) = 1;
  *(undefined1 *)(lVar4 + 0x16d) = 0;
  *(undefined4 *)(lVar4 + 0x170) = 0;
  plVar5 = (longlong *)operator_new(0x600);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144d503d8;
    if (plVar5 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4890();
    }
  }
  local_210 = plVar5 + 2;
  local_208 = plVar5;
  FUN_14044f790(&local_210,local_210);
  local_200 = local_218;
  FName::FName(local_1f8,"SWindow",1);
  plVar5[0x26] = local_1f8[0];
  FUN_1417fd440(&local_210,param_1,lVar4);
  plVar5 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  FUN_1417f5da0(local_1e8);
  *(undefined4 *)(*param_1 + 0x344) = 0;
  *(byte *)(*param_1 + 0x350) = *(byte *)(*param_1 + 0x350) | 8;
  *(undefined4 *)(*param_1 + 0x59c) = 0x200;
  *(undefined4 *)(*param_1 + 0x5a0) = 0x100;
  return param_1;
}



// FUNCTION 14184ab60 FUN_14184ab60 body=312 status=ok
// SIG undefined FUN_14184ab60(void)

void FUN_14184ab60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  cVar8 = FSlateDrawElement::ShouldCull(param_1);
  if (cVar8 == '\0') {
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    iVar10 = FUN_1417ffb80(lVar3 + 0x880,1);
    puVar12 = (undefined4 *)((longlong)iVar10 * 0x130 + *(longlong *)(lVar3 + 0x880));
    FUN_141846510(puVar12,param_1,param_2,param_3,param_5);
    puVar12[0x47] = 3;
    uVar5 = param_6[1];
    uVar6 = param_6[2];
    uVar7 = param_6[3];
    *puVar12 = *param_6;
    puVar12[1] = uVar5;
    puVar12[2] = uVar6;
    puVar12[3] = uVar7;
    uVar11 = (**(code **)(*(longlong *)*param_4 + 0x18))();
    *(undefined8 *)(puVar12 + 0xe) = uVar11;
    bVar9 = (**(code **)(*(longlong *)*param_4 + 0x38))();
    *(byte *)(puVar12 + 0x17) = *(byte *)(puVar12 + 0x17) & 0xfe;
    *(byte *)(puVar12 + 0x17) = *(byte *)(puVar12 + 0x17) | bVar9 & 1;
    bVar9 = (**(code **)(*(longlong *)*param_4 + 0x20))();
    *(byte *)(puVar12 + 0x17) = *(byte *)(puVar12 + 0x17) & 0xfd;
    *(byte *)(puVar12 + 0x17) = *(byte *)(puVar12 + 0x17) | (bVar9 & 1) * '\x02';
    bVar9 = (**(code **)(*(longlong *)*param_4 + 0x30))();
    *(byte *)(puVar12 + 0x17) = *(byte *)(puVar12 + 0x17) & 0xfb;
    *(byte *)(puVar12 + 0x17) = *(byte *)(puVar12 + 0x17) | (bVar9 & 1) << 2;
  }
  plVar4 = (longlong *)param_4[1];
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
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14184aca0 FUN_14184aca0 body=161 status=ok
// SIG undefined FUN_14184aca0(void)

undefined8
FUN_14184aca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  (**(code **)(*DAT_1469eaf38 + 0x100))
            (DAT_1469eaf38,param_2,param_3,&local_18,param_5,param_1 + 0x5a8);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 14184ad50 Measure body=100 status=ok
// SIG undefined Measure(void)

undefined8
FSlateFontMeasure::Measure
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  iVar1 = *(int *)(param_3 + 8) + -1;
  if (*(int *)(param_3 + 8) == 0) {
    iVar1 = 0;
  }
  MeasureStringInternal(param_5,param_2,param_3,0,iVar1,param_4,0,param_5,0xffffffff,2,local_res10);
  return param_2;
}



// FUNCTION 14184adc0 Measure body=100 status=ok
// SIG undefined Measure(void)

undefined8 FSlateFontMeasure::Measure(undefined8 param_1,undefined8 param_2)

{
  MeasureStringInternal();
  return param_2;
}



// FUNCTION 14184ae30 Measure body=144 status=ok
// SIG undefined Measure(void)

undefined8
FSlateFontMeasure::Measure
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_res10 [8];
  
  lVar1 = FText::ToString();
  iVar2 = *(int *)(lVar1 + 8) + -1;
  if (*(int *)(lVar1 + 8) == 0) {
    iVar2 = 0;
  }
  MeasureStringInternal(param_1,param_2,lVar1,0,iVar2,param_4,0,param_5,0xffffffff,2,local_res10);
  return param_2;
}



// FUNCTION 14184aec0 MeasureStringInternal body=1003 status=ok
// SIG undefined MeasureStringInternal(void)

undefined8 *
FSlateFontMeasure::MeasureStringInternal
          (longlong param_1,undefined8 *param_2,longlong *param_3,int param_4,uint param_5,
          longlong param_6,char param_7,undefined4 param_8,int param_9,int param_10,int *param_11)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  float local_res8;
  float fStackX_c;
  undefined8 *local_res10;
  longlong *local_res18;
  int local_res20;
  uint local_b8;
  short local_b4;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0 [30];
  short local_82;
  short local_7e;
  undefined1 local_78 [56];
  
  lVar15 = (longlong)param_4;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_b0 = FUN_1418336f0(*(undefined8 *)(param_1 + 0x58),param_6,param_8,&DAT_1469eaf80);
  local_res8._0_2_ = FUN_14183a900(local_b0);
  iVar2 = (int)local_res18[1];
  if ((((iVar2 < 2) || ((int)(param_5 - param_4) < 1)) || ((int)param_5 < 1)) ||
     ((param_4 < 0 || ((int)param_5 <= param_4)))) {
    *(undefined4 *)param_2 = 0;
    *(float *)((longlong)param_2 + 4) = (float)local_res8._0_2_;
    return param_2;
  }
  plVar17 = (longlong *)0x0;
  uVar16 = 0;
  plVar14 = (longlong *)0x0;
  plVar6 = plVar17;
  if (param_4 == 0) {
    uVar8 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar8 = uVar16;
    }
    plVar6 = plVar14;
    if (((param_5 == uVar8) && (param_7 == '\0')) &&
       ((5 < (int)(param_5 - param_4) &&
        ((param_9 == -1 &&
         (plVar6 = (longlong *)FUN_14182f530(param_1,param_6,param_8), plVar6 != (longlong *)0x0))))
       )) {
      TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
      ::FindId(plVar6,&local_b8,local_res18);
      if ((local_b8 != 0xffffffff) &&
         (plVar14 = (longlong *)((longlong)(int)local_b8 * 0x10 + *plVar6),
         plVar14 != (longlong *)0x0)) {
        lVar3 = *plVar14;
        if ((lVar3 == plVar6[0xb]) && (lVar4 = *(longlong *)(plVar6[0xb] + 0x20), lVar4 != 0)) {
          plVar6[0xb] = lVar4;
        }
        if (lVar3 != plVar6[10]) {
          if (*(longlong *)(lVar3 + 0x20) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x18) = *(undefined8 *)(lVar3 + 0x18);
          }
          if (*(longlong *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
          }
          *(undefined8 *)(lVar3 + 0x18) = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          lVar4 = plVar6[10];
          *(longlong *)(lVar3 + 0x18) = lVar4;
          if (lVar4 != 0) {
            *(longlong *)(lVar4 + 0x20) = lVar3;
          }
          plVar6[10] = lVar3;
        }
        if ((undefined8 *)(*plVar14 + 0x10) != (undefined8 *)0x0) {
          uVar7 = *(undefined8 *)(*plVar14 + 0x10);
          goto LAB_14184b085;
        }
      }
    }
  }
  uVar8 = (uint)local_res8._0_2_;
  local_b8 = (uint)local_res8._0_2_;
  local_b4 = 0;
  uVar9 = 0;
  if ((param_4 != 0) && (param_7 != '\0')) {
    local_b4 = *(short *)(*local_res18 + -2 + lVar15 * 2);
  }
  local_a8 = (longlong)(int)param_5;
  plVar14 = plVar17;
  plVar12 = plVar17;
  plVar13 = local_res18;
  uVar11 = uVar16;
  if (lVar15 < local_a8) {
    do {
      uVar11 = (uint)plVar12;
      sVar1 = *(short *)(*plVar13 + lVar15 * 2);
      if (sVar1 == 10) {
        local_b8 = local_b8 + uVar8;
        plVar10 = plVar17;
        if ((int)uVar11 <= (int)plVar14) {
          plVar12 = plVar14;
        }
      }
      else {
        FCharacterList::GetCharacter(local_b0,local_a0,sVar1,*(undefined1 *)(param_6 + 0x4c));
        uVar8 = uVar16;
        if (local_b4 != 0) {
          uVar7 = FCharacterList::GetCharacter
                            (local_b0,local_78,local_b4,*(undefined1 *)(param_6 + 0x4c));
          cVar5 = FUN_141839520(local_b0,uVar7,local_a0);
          uVar8 = (uint)cVar5;
        }
        uVar9 = (int)plVar14 + (int)local_7e + uVar8;
        local_b4 = sVar1;
        if (param_9 != -1) {
          param_2 = local_res10;
          if (param_10 == 1) {
            if (param_9 < (int)(uVar9 - (int)((int)local_82 + (int)local_7e + uVar8) / 2)) break;
          }
          else if ((param_10 == 0) && (param_9 < (int)uVar9)) {
            param_4 = param_4 + -1;
            if (param_4 < local_res20) {
              param_4 = -1;
            }
            break;
          }
        }
        uVar8 = (uint)local_res8._0_2_;
        plVar10 = (longlong *)(ulonglong)uVar9;
        plVar13 = local_res18;
      }
      uVar11 = (uint)plVar12;
      uVar9 = (uint)plVar10;
      param_4 = param_4 + 1;
      lVar15 = lVar15 + 1;
      plVar14 = plVar10;
      param_2 = local_res10;
    } while (lVar15 < local_a8);
  }
  fStackX_c = (float)(int)local_b8;
  if ((int)uVar11 <= (int)uVar9) {
    uVar11 = uVar9;
  }
  local_res8 = (float)(int)uVar11;
  if ((param_10 == 0) && ((int)param_5 <= param_4)) {
    param_4 = param_5 - 1;
  }
  *param_11 = param_4;
  if ((param_9 == -1) && (plVar6 != (longlong *)0x0)) {
    FLRUStringCache::Add(plVar6,local_res18,&local_res8);
  }
  uVar7 = CONCAT44(fStackX_c,local_res8);
LAB_14184b085:
  *param_2 = uVar7;
  return param_2;
}



// FUNCTION 14184b2b0 Merge body=811 status=ok
// SIG undefined Merge(void)

void FSlateBatchData::Merge
               (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 **local_res20;
  int local_d8;
  uint uStack_d4;
  int iStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined2 local_a0;
  undefined1 ***local_98;
  longlong *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  plVar1 = param_2 + 0x104;
  local_res18 = local_res10;
  local_res20 = &local_res18;
  if (0 < *(int *)(param_2 + 0x105) - *(int *)((longlong)param_2 + 0x854)) {
    TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(plVar1);
    local_98 = &local_res20;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>_>
              (*plVar1,(longlong)(*(int *)(param_2 + 0x105) - *(int *)((longlong)param_2 + 0x854)),
               local_res8[0],&local_98);
  }
  TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
  ::Rehash(plVar1);
  local_res8[0] = *param_1 == 0;
  local_88 = local_res8;
  uVar8 = *(uint *)(param_2 + 0x10e);
  local_90 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  if (uVar8 < 0x100) {
    iVar6 = (int)uVar8 >> 5;
    uVar10 = 1 << ((byte)uVar8 & 0x1f);
    if ((int)uVar8 < *(int *)(param_2 + 3)) {
      do {
        puVar5 = (undefined8 *)param_2[2];
        if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
          puVar5 = param_2;
        }
        if ((*(uint *)((longlong)puVar5 + (longlong)iVar6 * 4) & uVar10) != 0) {
          if (0 < *(int *)(param_2[(ulonglong)uVar8 + 4] + 0x1d0)) {
            FUN_1417fba00(&local_90,uVar8);
          }
          if (*(uint *)((longlong)param_2 + 0x874) <= uVar8) break;
        }
        uVar3 = uVar10 * 2;
        uVar8 = uVar8 + 1;
        iVar4 = iVar6 + 1;
        uVar10 = 1;
        if (uVar3 != 0) {
          iVar4 = iVar6;
          uVar10 = uVar3;
        }
        iVar6 = iVar4;
      } while ((int)uVar8 < *(int *)(param_2 + 3));
    }
  }
  iVar6 = *(int *)(param_2 + 0x109);
  puStack_60 = (uint *)(param_2 + 0x106);
  local_d8 = 0;
  uStack_d4 = 1;
  local_c8._4_4_ = 0;
  uStack_c0 = 0;
  if (iVar6 != 0) {
    puVar9 = (uint *)param_2[0x108];
    if ((uint *)param_2[0x108] == (uint *)0x0) {
      puVar9 = puStack_60;
    }
    uVar8 = *puVar9;
    uStack_c0 = 0;
    local_d8 = 0;
    while (uVar8 == 0) {
      lVar7 = (longlong)local_d8;
      uStack_c0 = uStack_c0 + 0x20;
      iVar4 = local_d8 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar4;
      if (bVar2) goto LAB_14184b4af;
      uVar8 = puVar9[lVar7 + 1];
    }
    uStack_d4 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_c8._4_4_ = (uStack_c0 - iVar4) + 0x1f;
    if (iVar6 < local_c8._4_4_) {
LAB_14184b4af:
      local_c8._4_4_ = iVar6;
    }
  }
  auStack_58._4_4_ = local_c8._4_4_;
  auStack_58._0_4_ = 0xffffffff;
  auStack_58._8_4_ = uStack_c0;
  auStack_58._12_4_ = iStack_bc;
  iStack_68 = local_d8;
  uStack_64 = uStack_d4;
  local_a0 = 0;
  local_48._0_4_ = SUB84(plVar1,0);
  local_48._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_c0 = 0xffffffff;
  iStack_bc = local_c8._4_4_;
  iStack_d0 = local_d8;
  uStack_cc = uStack_d4;
  local_b8._8_4_ = (undefined4)local_48;
  local_b8._0_8_ = auStack_58._8_8_;
  local_b8._12_4_ = local_48._4_4_;
  bVar2 = local_c8._4_4_ < *(int *)(param_2 + 0x109);
  local_a8 = plVar1;
  local_70 = plVar1;
  local_48 = plVar1;
  local_c8 = puStack_60;
  if (bVar2) {
    do {
      if (0 < *(int *)(*(longlong *)(*plVar1 + 8 + (longlong)iStack_bc * 0x18) + 0x1d0)) {
        FUN_1417fba00(&local_90,*(undefined4 *)(*plVar1 + (longlong)iStack_bc * 0x18));
      }
      uStack_c0 = uStack_c0 & ~uStack_cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    } while (iStack_bc < (int)local_c8[6]);
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_a8,(int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34),1);
    }
  }
  *(undefined4 *)(param_2 + 0x10e) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x874) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  if (*(int *)((longlong)param_2 + 0x1c) != 0x100) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0x100;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_2,0);
  }
  *(undefined4 *)(param_2 + 3) = 0x100;
  puVar5 = (undefined8 *)param_2[2];
  if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
    puVar5 = param_2;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
  ::Reset(plVar1);
  return;
}



// FUNCTION 14184b5e0 MergeClippingStates body=314 status=ok
// SIG undefined MergeClippingStates(void)

undefined4 FSlateClippingManager::MergeClippingStates(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar10 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) < iVar10 + iVar1) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo();
      iVar10 = *(int *)(param_1 + 0x18);
    }
    puVar11 = (undefined1 *)*param_2;
    puVar8 = (undefined1 *)((longlong)iVar10 * 0x40 + *(longlong *)(param_1 + 0x10));
    piVar9 = (int *)(puVar11 + 0x38);
    puVar7 = puVar8 + 0x28;
    iVar10 = iVar1;
    do {
      *puVar8 = *puVar11;
      *puVar7 = 0;
      if ((char)piVar9[-4] != '\0') {
        iVar3 = piVar9[-0xc];
        iVar4 = piVar9[-0xb];
        iVar5 = piVar9[-10];
        *(int *)(puVar7 + -0x24) = piVar9[-0xd];
        *(int *)(puVar7 + -0x20) = iVar3;
        *(int *)(puVar7 + -0x1c) = iVar4;
        *(int *)(puVar7 + -0x18) = iVar5;
        uVar6 = *(undefined8 *)(piVar9 + -7);
        *(undefined8 *)(puVar7 + -0x14) = *(undefined8 *)(piVar9 + -9);
        *(undefined8 *)(puVar7 + -0xc) = uVar6;
        *(int *)(puVar7 + -4) = piVar9[-5];
        *puVar7 = 1;
      }
      *(undefined8 *)(puVar7 + 8) = 0;
      iVar3 = *piVar9;
      _Src = *(void **)(piVar9 + -2);
      *(int *)(puVar7 + 0x10) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(puVar7 + 0x14) = 0;
      }
      else {
        TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(puVar7 + 8,iVar3,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar7 + 8),_Src,(longlong)iVar3 * 0x24);
      }
      puVar8 = puVar8 + 0x40;
      puVar7 = puVar7 + 0x40;
      puVar11 = puVar11 + 0x40;
      piVar9 = piVar9 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
  }
  return uVar2;
}



// FUNCTION 14184b720 FUN_14184b720 body=1692 status=ok
// SIG undefined FUN_14184b720(void)

void FUN_14184b720(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_res20;
  undefined1 local_1f8 [208];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  
  local_res20._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar7 = local_res20._4_4_;
  local_res20._0_4_ = (float)param_3;
  fVar6 = (float)local_res20;
  local_res20 = param_3;
  if (((float)local_res20 == 0.0) && (local_res20._4_4_ == 0.0)) {
    FUN_1418026f0();
  }
  else {
    lVar14 = (longlong)*(int *)(param_2 + 0x920);
    if (0 < lVar14) {
      lVar13 = 0;
      do {
        lVar10 = *(longlong *)(param_2 + 0x918) + lVar13;
        FUN_1417eeb00(local_1f8,lVar10);
        local_128 = *(float *)(lVar10 + 0xd0);
        fStack_124 = *(float *)(lVar10 + 0xd4);
        fStack_120 = *(float *)(lVar10 + 0xd8);
        fStack_11c = *(float *)(lVar10 + 0xdc);
        local_e4 = *(undefined4 *)(lVar10 + 0x114);
        local_e8 = *(float *)(lVar10 + 0x110);
        local_ec = *(undefined4 *)(lVar10 + 0x10c);
        local_f0 = *(undefined4 *)(lVar10 + 0x108);
        fVar19 = (float)*(undefined8 *)(lVar10 + 0xe0) + fVar6;
        fVar17 = 1.0 / local_e8;
        local_e0 = *(undefined1 *)(lVar10 + 0x118);
        local_dc = *(undefined4 *)(lVar10 + 0x11c);
        local_d8 = *(undefined4 *)(lVar10 + 0x120);
        local_d4 = *(undefined4 *)(lVar10 + 0x124);
        local_f4 = fVar7 + *(float *)(lVar10 + 0x104);
        local_f8 = fVar6 + *(float *)(lVar10 + 0x100);
        fVar18 = (float)((ulonglong)*(undefined8 *)(lVar10 + 0xe0) >> 0x20) + fVar7;
        local_118 = CONCAT44(fVar18,fVar19);
        fVar16 = local_128 * -(fVar17 * local_f8) + fStack_120 * -(fVar17 * local_f4);
        local_110 = local_128 * fVar17;
        fStack_10c = fStack_124 * fVar17;
        fStack_108 = fStack_120 * fVar17;
        fStack_104 = fStack_11c * fVar17;
        local_100 = CONCAT44(fVar18 + fStack_124 * -(fVar17 * local_f8) +
                                      fStack_11c * -(fVar17 * local_f4),fVar19 + fVar16);
        lVar10 = *(longlong *)
                  (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
        iVar1 = *(int *)(lVar10 + 0x888);
        *(int *)(lVar10 + 0x888) = iVar1 + 1;
        if (*(int *)(lVar10 + 0x88c) < iVar1 + 1) {
          TArray<ATTLENBossSnak01Pawn::TTLENBossSnakJoint,FDefaultAllocator>::ResizeGrow
                    (lVar10 + 0x880,iVar1,CONCAT44(fStack_124,fVar16),fStack_104,local_110,
                     fStack_108);
        }
        FSlateDrawElement::FSlateDrawElement
                  ((longlong)iVar1 * 0x130 + *(longlong *)(lVar10 + 0x880),local_1f8);
        FUN_1417f7410(local_1f8);
        lVar13 = lVar13 + 0x130;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x928);
    lVar14 = *(longlong *)
              (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
    puVar15 = puVar12 + (longlong)*(int *)(param_2 + 0x930) * 0xe;
    for (; puVar12 != puVar15; puVar12 = puVar12 + 0xe) {
      iVar1 = *(int *)(lVar14 + 0x898);
      *(int *)(lVar14 + 0x898) = iVar1 + 1;
      if (*(int *)(lVar14 + 0x89c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar14 + 0x890,iVar1);
      }
      uVar5 = puVar12[1];
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x70 + *(longlong *)(lVar14 + 0x890));
      *puVar8 = *puVar12;
      puVar8[1] = uVar5;
      uVar5 = puVar12[3];
      puVar8[2] = puVar12[2];
      puVar8[3] = uVar5;
      uVar5 = puVar12[5];
      puVar8[4] = puVar12[4];
      puVar8[5] = uVar5;
      uVar5 = puVar12[7];
      puVar8[6] = puVar12[6];
      puVar8[7] = uVar5;
      uVar5 = puVar12[9];
      puVar8[8] = puVar12[8];
      puVar8[9] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar12 + 0x54);
      uVar3 = *(undefined4 *)(puVar12 + 0xb);
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0x5c);
      *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(puVar12 + 10);
      *(undefined4 *)((longlong)puVar8 + 0x54) = uVar2;
      *(undefined4 *)(puVar8 + 0xb) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar12 + 100);
      uVar3 = *(undefined4 *)(puVar12 + 0xd);
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0x6c);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 100) = uVar2;
      *(undefined4 *)(puVar8 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar4;
      FUN_141803170(puVar8,&local_res20);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x938);
    puVar15 = puVar12 + (longlong)*(int *)(param_2 + 0x940) * 0xe;
    for (; puVar12 != puVar15; puVar12 = puVar12 + 0xe) {
      iVar1 = *(int *)(lVar14 + 0x8a8);
      *(int *)(lVar14 + 0x8a8) = iVar1 + 1;
      if (*(int *)(lVar14 + 0x8ac) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar14 + 0x8a0,iVar1);
      }
      uVar5 = puVar12[1];
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x70 + *(longlong *)(lVar14 + 0x8a0));
      *puVar8 = *puVar12;
      puVar8[1] = uVar5;
      uVar5 = puVar12[3];
      puVar8[2] = puVar12[2];
      puVar8[3] = uVar5;
      uVar5 = puVar12[5];
      puVar8[4] = puVar12[4];
      puVar8[5] = uVar5;
      uVar5 = puVar12[7];
      puVar8[6] = puVar12[6];
      puVar8[7] = uVar5;
      uVar5 = puVar12[9];
      puVar8[8] = puVar12[8];
      puVar8[9] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar12 + 0x54);
      uVar3 = *(undefined4 *)(puVar12 + 0xb);
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0x5c);
      *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(puVar12 + 10);
      *(undefined4 *)((longlong)puVar8 + 0x54) = uVar2;
      *(undefined4 *)(puVar8 + 0xb) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar12 + 100);
      uVar3 = *(undefined4 *)(puVar12 + 0xd);
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0x6c);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 100) = uVar2;
      *(undefined4 *)(puVar8 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar4;
      FUN_141803170(puVar8,&local_res20);
    }
    lVar13 = *(longlong *)(param_2 + 0x948);
    lVar10 = (longlong)*(int *)(param_2 + 0x950) * 0xc0 + lVar13;
    for (; lVar13 != lVar10; lVar13 = lVar13 + 0xc0) {
      iVar1 = *(int *)(lVar14 + 0x8b8);
      *(int *)(lVar14 + 0x8b8) = iVar1 + 1;
      if (*(int *)(lVar14 + 0x8bc) < iVar1 + 1) {
        FUN_1404852a0(lVar14 + 0x8b0,iVar1);
      }
      lVar11 = (longlong)iVar1 * 0xc0 + *(longlong *)(lVar14 + 0x8b0);
      FUN_1417eef40(lVar11,lVar13);
      FUN_141803170(lVar11,&local_res20);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x958);
    puVar15 = puVar12 + (longlong)*(int *)(param_2 + 0x960) * 0x10;
    if (puVar12 != puVar15) {
      puVar8 = (undefined8 *)((longlong)puVar12 + 0x4c);
      do {
        iVar1 = *(int *)(lVar14 + 0x8c8);
        *(int *)(lVar14 + 0x8c8) = iVar1 + 1;
        if (*(int *)(lVar14 + 0x8cc) < iVar1 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                    (lVar14 + 0x8c0,iVar1);
        }
        uVar5 = puVar12[1];
        puVar9 = (undefined8 *)((longlong)iVar1 * 0x80 + *(longlong *)(lVar14 + 0x8c0));
        *puVar9 = *puVar12;
        puVar9[1] = uVar5;
        uVar5 = puVar12[3];
        puVar9[2] = puVar12[2];
        puVar9[3] = uVar5;
        uVar5 = puVar12[5];
        puVar9[4] = puVar12[4];
        puVar9[5] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar12 + 0x34);
        uVar3 = *(undefined4 *)(puVar12 + 7);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0x3c);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar12 + 6);
        *(undefined4 *)((longlong)puVar9 + 0x34) = uVar2;
        *(undefined4 *)(puVar9 + 7) = uVar3;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar4;
        puVar9[8] = puVar12[8];
        *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(puVar12 + 9);
        uVar5 = puVar8[1];
        *(undefined8 *)((longlong)puVar9 + 0x4c) = *puVar8;
        *(undefined8 *)((longlong)puVar9 + 0x54) = uVar5;
        puVar9[0xc] = *(undefined8 *)((longlong)puVar8 + 0x14);
        lVar13 = *(longlong *)((longlong)puVar8 + 0x1c);
        puVar9[0xd] = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        uVar2 = *(undefined4 *)(puVar8 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar8 + 0x2c);
        uVar4 = *(undefined4 *)(puVar8 + 6);
        *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((longlong)puVar8 + 0x24);
        *(undefined4 *)((longlong)puVar9 + 0x74) = uVar2;
        *(undefined4 *)(puVar9 + 0xf) = uVar3;
        *(undefined4 *)((longlong)puVar9 + 0x7c) = uVar4;
        FUN_141803170(puVar9,&local_res20);
        puVar12 = puVar12 + 0x10;
        puVar8 = puVar8 + 0x10;
      } while (puVar12 != puVar15);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x968);
    puVar15 = puVar12 + (longlong)*(int *)(param_2 + 0x970) * 0xf;
    for (; puVar12 != puVar15; puVar12 = puVar12 + 0xf) {
      iVar1 = *(int *)(lVar14 + 0x8d8);
      *(int *)(lVar14 + 0x8d8) = iVar1 + 1;
      if (*(int *)(lVar14 + 0x8dc) < iVar1 + 1) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (lVar14 + 0x8d0,iVar1);
      }
      uVar5 = puVar12[1];
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar14 + 0x8d0));
      *puVar8 = *puVar12;
      puVar8[1] = uVar5;
      uVar5 = puVar12[3];
      puVar8[2] = puVar12[2];
      puVar8[3] = uVar5;
      uVar5 = puVar12[5];
      puVar8[4] = puVar12[4];
      puVar8[5] = uVar5;
      uVar5 = puVar12[7];
      puVar8[6] = puVar12[6];
      puVar8[7] = uVar5;
      uVar5 = puVar12[9];
      puVar8[8] = puVar12[8];
      puVar8[9] = uVar5;
      uVar5 = puVar12[0xb];
      puVar8[10] = puVar12[10];
      puVar8[0xb] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar12 + 100);
      uVar3 = *(undefined4 *)(puVar12 + 0xd);
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0x6c);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 100) = uVar2;
      *(undefined4 *)(puVar8 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar4;
      puVar8[0xe] = puVar12[0xe];
      FUN_141803170(puVar8,&local_res20);
    }
  }
  return;
}



// FUNCTION 14184bdc0 MergeResources body=92 status=ok
// SIG undefined MergeResources(void)

void FSlateWindowElementList::MergeResources(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)iVar1 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 14184be20 Minimize body=20 status=ok
// SIG undefined Minimize(void)

void SWindow::Minimize(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014184be2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x38))();
    return;
  }
  return;
}



// FUNCTION 14184be40 MorphToPosition body=115 status=ok
// SIG undefined MorphToPosition(void)

void SWindow::MorphToPosition
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x420) = *(byte *)(param_1 + 0x420) & 0xfd;
  FUN_1417f8e00(param_1 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3a4) = param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 0x3c0) = uVar1;
  *(undefined4 *)(param_1 + 0x3b8) = uVar1;
  uVar1 = param_4[1];
  *(undefined4 *)(param_1 + 0x3c4) = uVar1;
  *(undefined4 *)(param_1 + 0x3bc) = uVar1;
  FUN_14185c860(param_1);
  return;
}



// FUNCTION 14184bec0 MorphToShape body=84 status=ok
// SIG undefined MorphToShape(void)

void SWindow::MorphToShape
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x420) = *(byte *)(param_1 + 0x420) | 2;
  FUN_1417f8e00(param_1 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3a4) = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x3b8) = *param_4;
  *(undefined4 *)(param_1 + 0x3bc) = uVar1;
  *(undefined4 *)(param_1 + 0x3c0) = uVar2;
  *(undefined4 *)(param_1 + 0x3c4) = uVar3;
  FUN_14185c860(param_1);
  return;
}



// FUNCTION 14184bf20 FUN_14184bf20 body=975 status=ok
// SIG undefined FUN_14184bf20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14184bf20(longlong param_1,int param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_2e8 [32];
  char local_2c8;
  char local_2c7;
  undefined1 local_2c6 [2];
  int local_2c4;
  char local_2c0 [8];
  undefined1 local_2b8 [288];
  undefined1 *local_198;
  undefined8 local_190;
  undefined1 local_188;
  char local_180 [8];
  undefined1 local_178 [288];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  iVar6 = -1;
  if (param_3 == '\x04') {
    iVar6 = 1;
  }
  local_2c4 = param_2;
  if (param_2 == *(int *)(param_1 + 0x130) + -1) {
    if (param_3 == '\x04') {
      local_2c0[0] = DAT_1464b9ee8;
      iVar6 = 0;
      local_2c8 = DAT_1464b9ee8;
      local_198 = (undefined1 *)0x0;
      local_190 = 0;
      lVar9 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(param_1 + 0x128) == 0) {
        lVar9 = param_1 + 8;
      }
      local_188 = 0;
      FUN_1417e60e0(local_2c6,lVar9 + (longlong)(*(int *)(param_1 + 0x130) + -1) * 0x48,local_2c0,
                    &local_2c8);
      FArrangedChildren::Reverse(local_2c0);
      iVar8 = (int)local_190;
      if (0 < (int)local_190) {
        do {
          puVar3 = local_2b8;
          if (local_198 != (undefined1 *)0x0) {
            puVar3 = local_198;
          }
          FUN_141801ed0(param_1,puVar3 + (longlong)iVar6 * 0x48);
          iVar6 = iVar6 + 1;
          iVar8 = (int)local_190;
        } while (iVar6 < (int)local_190);
      }
      FUN_140456b10(local_2b8);
      return 0 < iVar8;
    }
  }
  else if (1 < *(int *)(param_1 + 0x130)) {
    local_2c0[0] = DAT_1464b9ee8;
    lVar7 = (longlong)param_2;
    local_198 = (undefined1 *)0x0;
    lVar9 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar9 = param_1 + 8;
    }
    local_190 = 0;
    local_188 = 0;
    plVar2 = *(longlong **)(lVar9 + 0x38 + lVar7 * 0x48);
    local_2c8 = param_3;
    (**(code **)(*plVar2 + 0x200))(plVar2,lVar9 + lVar7 * 0x48,local_2c0);
    puVar3 = local_2b8;
    if (local_198 != (undefined1 *)0x0) {
      puVar3 = local_198;
    }
    if (puVar3 != puVar3 + (longlong)(int)local_190 * 0x48) {
      lVar9 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(param_1 + 0x128) == 0) {
        lVar9 = param_1 + 8;
      }
      puVar4 = puVar3;
      do {
        if (*(longlong *)(puVar4 + 0x38) == *(longlong *)(lVar9 + 0x80 + lVar7 * 0x48)) {
          uVar5 = ((longlong)puVar4 - (longlong)puVar3) / 0x48;
          goto LAB_14184c0f8;
        }
        puVar4 = puVar4 + 0x48;
      } while (puVar4 != puVar3 + (longlong)(int)local_190 * 0x48);
    }
    uVar5 = 0xffffffff;
LAB_14184c0f8:
    iVar8 = iVar6 + (int)((longlong)
                          ((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) %
                         (longlong)(int)local_190);
    if (iVar8 < (int)local_190) {
      lVar9 = (longlong)iVar8 * 0x48;
      puVar3 = local_198;
      do {
        if (iVar8 < 0) break;
        puVar4 = local_2b8;
        if (puVar3 != (undefined1 *)0x0) {
          puVar4 = puVar3;
        }
        lVar7 = *(longlong *)(puVar4 + lVar9 + 0x38);
        if (((*(int *)(lVar7 + 0xa8) != 0) && (*(longlong **)(lVar7 + 0xa0) != (longlong *)0x0)) &&
           (cVar1 = (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x18))(), puVar3 = local_198,
           cVar1 != '\0')) {
          plVar2 = (longlong *)0x0;
          if (*(int *)(lVar7 + 0xa8) != 0) {
            plVar2 = *(longlong **)(lVar7 + 0xa0);
          }
          cVar1 = (**(code **)(*plVar2 + 0x38))();
          *(char *)(lVar7 + 0x98) = cVar1;
          puVar3 = local_198;
        }
        if (*(char *)(lVar7 + 0x98) != '\0') {
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          local_180[0] = DAT_1464b9ee8;
          local_2c7 = DAT_1464b9ee8;
          puVar4 = local_2b8;
          if (puVar3 != (undefined1 *)0x0) {
            puVar4 = puVar3;
          }
          if (local_2c8 == '\x04') {
            FUN_1417e60e0();
          }
          else {
            FUN_1417e6410(local_2c6,puVar4 + (longlong)iVar8 * 0x48,local_180,&local_2c7);
          }
          FArrangedChildren::Reverse(local_180);
          if (0 < (int)local_50) {
LAB_14184c28b:
            FUN_141855cc0(param_1 + 8,local_2c4 + 1,(*(int *)(param_1 + 0x130) - local_2c4) + -1,1);
            puVar3 = local_2b8;
            if (local_198 != (undefined1 *)0x0) {
              puVar3 = local_198;
            }
            FUN_141801ed0(param_1,puVar3 + (longlong)iVar8 * 0x48);
            FUN_1417db5b0(param_1 + 8,local_178);
            FUN_140456b10(local_178);
            FUN_140456b10(local_2b8);
            return true;
          }
          puVar3 = local_2b8;
          if (local_198 != (undefined1 *)0x0) {
            puVar3 = local_198;
          }
          cVar1 = (**(code **)(**(longlong **)(puVar3 + lVar9 + 0x38) + 0x178))();
          if (cVar1 != '\0') goto LAB_14184c28b;
          FUN_140456b10(local_178);
          puVar3 = local_198;
        }
        iVar8 = iVar8 + iVar6;
        lVar9 = lVar9 + (longlong)iVar6 * 0x48;
      } while (iVar8 < (int)local_190);
    }
    FUN_140456b10(local_2b8);
  }
  return false;
}



// FUNCTION 14184c2f0 MoveWindowTo body=120 status=ok
// SIG undefined MoveWindowTo(void)

void SWindow::MoveWindowTo(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    uStack_14 = (float)((ulonglong)param_2 >> 0x20);
    local_18 = (float)param_2;
    FUN_14185a3f0(param_1,CONCAT44((float)(int)uStack_14,(float)(int)local_18));
                    /* WARNING: Could not recover jumptable at 0x00014184c357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x18))
              (*(longlong **)(param_1 + 0x498),(int)local_18,(int)uStack_14);
    return;
  }
  *(undefined8 *)(param_1 + 0x358) = param_2;
  return;
}



// FUNCTION 14184c370 FUN_14184c370 body=443 status=ok
// SIG undefined FUN_14184c370(void)

longlong * FUN_14184c370(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar3 = (longlong *)operator_new(0x68);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(undefined1 *)(plVar3 + 3) = 1;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined1 *)((longlong)plVar3 + 0x34) = 0;
    *(undefined1 *)((longlong)plVar3 + 0x3c) = 0;
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144d4e918;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar5 = plVar3;
  }
  plVar4 = (longlong *)operator_new(0x18);
  plVar3 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
    plVar4[2] = (longlong)plVar5;
    plVar3 = plVar4;
  }
  *param_1 = (longlong)plVar5;
  param_1[1] = (longlong)plVar3;
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar6;
  }
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      if (plVar4[1] != 0) {
        piVar1 = (int *)(plVar4[1] + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) goto LAB_14184c4be;
      }
      plVar3 = (longlong *)param_1[1];
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *plVar4 = (longlong)plVar5;
    plVar5 = (longlong *)plVar4[1];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar4[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar4[1] = (longlong)plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
LAB_14184c4be:
  *(undefined1 *)(*param_1 + 0x60) = 2;
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(*param_1 + 0x50,param_2);
  (**(code **)(*(longlong *)*param_1 + 0x48))();
  iVar7 = *(int *)(param_2 + 1);
  plVar5 = (longlong *)*param_2;
  if (iVar7 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar5 = (longlong *)*param_2;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return param_1;
}



// FUNCTION 14184c530 FUN_14184c530 body=553 status=ok
// SIG undefined FUN_14184c530(void)

longlong * FUN_14184c530(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar3 = (longlong *)operator_new(0x68);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(undefined1 *)(plVar3 + 3) = 1;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined1 *)((longlong)plVar3 + 0x34) = 0;
    *(undefined1 *)((longlong)plVar3 + 0x3c) = 0;
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144d4e918;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar5 = plVar3;
  }
  plVar4 = (longlong *)operator_new();
  plVar3 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
    plVar4[2] = (longlong)plVar5;
    plVar3 = plVar4;
  }
  *param_1 = (longlong)plVar5;
  param_1[1] = (longlong)plVar3;
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar6;
  }
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      if (plVar4[1] != 0) {
        piVar1 = (int *)(plVar4[1] + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) goto LAB_14184c687;
      }
      plVar3 = (longlong *)param_1[1];
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *plVar4 = (longlong)plVar5;
    plVar5 = (longlong *)plVar4[1];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar4[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar4[1] = (longlong)plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar3)();
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
  }
LAB_14184c687:
  *(byte *)(*param_1 + 0x60) = -(*(int *)(param_3 + 1) != 0) & 2U | 1 < (int)param_2[1];
  lVar2 = *param_1;
  plVar5 = (longlong *)(lVar2 + 0x40);
  if (plVar5 != param_2) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *param_2;
    *param_2 = 0;
    *(int *)(lVar2 + 0x48) = (int)param_2[1];
    *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(*param_1 + 0x50,param_3);
  (**(code **)(*(longlong *)*param_1 + 0x48))();
  if (*param_2 != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_3 + 1);
  plVar5 = (longlong *)*param_3;
  if (iVar7 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar5 = (longlong *)*param_3;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return param_1;
}



// FUNCTION 14184c760 FUN_14184c760 body=449 status=ok
// SIG undefined FUN_14184c760(void)

longlong * FUN_14184c760(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x68);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *(undefined1 *)(plVar4 + 3) = 1;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined1 *)((longlong)plVar4 + 0x34) = 0;
    *(undefined1 *)((longlong)plVar4 + 0x3c) = 0;
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144d4e918;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
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
  *param_1 = (longlong)plVar6;
  param_1[1] = (longlong)plVar4;
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
        if (0 < iVar3) goto LAB_14184c8b0;
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
LAB_14184c8b0:
  *(undefined1 *)(*param_1 + 0x60) = 1;
  lVar2 = *param_1;
  plVar6 = (longlong *)(lVar2 + 0x40);
  if (plVar6 != param_2) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = *param_2;
    *param_2 = 0;
    *(int *)(lVar2 + 0x48) = (int)param_2[1];
    *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  (**(code **)(*(longlong *)*param_1 + 0x48))();
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14184c930 FUN_14184c930 body=246 status=ok
// SIG undefined FUN_14184c930(void)

void FUN_14184c930(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar6;
  local_20 = (longlong *)puVar6[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if ((*(int *)(param_1 + 0x510) != 0) && (*(longlong **)(param_1 + 0x508) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x510) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x508);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_28);
    }
  }
  plVar7 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
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
  return;
}



// FUNCTION 14184ca30 OnArrangeChildren body=33 status=ok
// SIG undefined OnArrangeChildren(void)

void SBoxPanel::OnArrangeChildren(longlong param_1)

{
  if (*(int *)(param_1 + 0x230) == 0) {
    FUN_1417dbf30(param_1 + 0x208);
    return;
  }
  FUN_1417db6b0(param_1 + 0x208);
  return;
}



// FUNCTION 14184ca60 OnArrangeChildren body=31 status=ok
// SIG undefined OnArrangeChildren(void)

void SCompoundWidget::OnArrangeChildren(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1417dc7b0(param_2,param_3,param_1 + 0x208,param_1 + 0x268);
  return;
}



// FUNCTION 14184ca80 FUN_14184ca80 body=1394 status=ok
// SIG undefined FUN_14184ca80(void)

void FUN_14184ca80(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte local_res20 [8];
  float local_1e4;
  float fStack_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c4;
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  
  iVar13 = 0;
  iVar6 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
  if (0 < iVar6) {
    lVar14 = 0;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x218) + lVar14);
      lVar8 = *(longlong *)(lVar12 + 0x10);
      if (((*(int *)(lVar8 + 0xc0) != 0) && (*(longlong **)(lVar8 + 0xb8) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0xb8) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(lVar8 + 0xc0) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar8 + 0xb8);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,local_res20);
        *(byte *)(lVar8 + 0xb0) = local_res20[0];
      }
      bVar4 = *(byte *)(lVar8 + 0xb0);
      if ((*param_3 & bVar4) != 0) {
        if (((*(int *)(lVar12 + 0x48) != 0) && (*(longlong **)(lVar12 + 0x40) != (longlong *)0x0))
           && (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x18))(), cVar5 != '\0')) {
          if (*(int *)(lVar12 + 0x48) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(lVar12 + 0x40);
          }
          (**(code **)(*plVar10 + 0x38))(plVar10,&local_f8);
          *(undefined8 *)(lVar12 + 0x28) = local_f8;
          *(undefined8 *)(lVar12 + 0x30) = uStack_f0;
        }
        fVar20 = *(float *)(lVar12 + 0x28);
        fStack_17c = *(float *)(lVar12 + 0x2c);
        fVar22 = *(float *)(lVar12 + 0x30);
        fStack_174 = *(float *)(lVar12 + 0x34);
        cVar5 = *(char *)(lVar12 + 0x24);
        fVar19 = *param_2;
        fVar23 = fVar19 - (fVar20 + fVar22);
        fVar24 = fVar23;
        local_180 = fVar20;
        fStack_178 = fVar22;
        if (cVar5 != '\0') {
          pfVar7 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar12 + 0x10),local_108);
          fVar15 = *pfVar7;
          if (fVar23 <= *pfVar7) {
            fVar15 = fVar23;
          }
          fVar24 = fVar15;
          if (cVar5 != '\x01') {
            if (cVar5 == '\x02') {
              fVar19 = (fVar19 - fVar15) * 0.5 + fVar20;
            }
            else {
              fVar24 = fVar23;
              if (cVar5 != '\x03') goto LAB_14184cc32;
              fVar19 = fVar19 - fVar15;
            }
            fVar20 = fVar19 - fVar22;
            fVar24 = fVar15;
          }
        }
LAB_14184cc32:
        fVar23 = fStack_174;
        fVar22 = fStack_17c;
        fVar19 = param_2[1];
        cVar5 = *(char *)(lVar12 + 0x25);
        fVar21 = fVar19 - (fStack_17c + fStack_174);
        fVar15 = fVar21;
        if (cVar5 != '\0') {
          lVar8 = SWidget::GetDesiredSize(*(undefined8 *)(lVar12 + 0x10),local_100);
          fVar16 = *(float *)(lVar8 + 4);
          if (fVar21 <= *(float *)(lVar8 + 4)) {
            fVar16 = fVar21;
          }
          fVar15 = fVar16;
          if (cVar5 != '\x01') {
            if (cVar5 == '\x02') {
              fVar19 = (fVar19 - fVar16) * 0.5 + fVar22;
            }
            else {
              fVar15 = fVar21;
              if (cVar5 != '\x03') goto LAB_14184cca5;
              fVar19 = fVar19 - fVar16;
            }
            fVar22 = fVar19 - fVar23;
            fVar15 = fVar16;
          }
        }
LAB_14184cca5:
        local_1d0 = 0x3f800000;
        local_1e4 = fVar24;
        fStack_1e0 = fVar15;
        local_1cc = fVar20;
        local_1c8 = fVar22;
        lVar8 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar12 + 0x10) + 0xd0);
        if (*(char *)(lVar8 + 0x18) == '\0') {
          local_1b8 = CONCAT44(fStack_1e0,local_1e4);
          fVar19 = param_2[2];
          local_170 = 0x3f800000;
          uStack_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0x3f800000;
          local_160 = fVar20;
          local_15c = fVar22;
          Concatenate<FTransform2D>(&uStack_19c,&local_170,param_2 + 7);
          uVar9 = *(undefined8 *)(lVar12 + 0x10);
          plVar10 = *(longlong **)(lVar12 + 0x18);
          uStack_184 = CONCAT31(uStack_184._1_3_,
                                (byte)uStack_184 ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_184) & 1
                               );
          fStack_1ac = fVar19 * fVar20 + param_2[3];
          local_1a8 = fVar19 * fVar22 + param_2[4];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          uStack_150 = CONCAT44(fStack_1ac,fVar19);
          local_148 = CONCAT44(fVar20,local_1a8);
          uStack_140 = CONCAT44(uStack_19c,fVar22);
          local_158 = local_1b8;
          local_138 = local_198;
          uStack_134 = uStack_194;
          uStack_130 = uStack_190;
          uStack_12c = uStack_18c;
          uVar17 = local_188;
          uVar18 = uStack_184;
          fStack_1b0 = fVar19;
          fStack_1a4 = fVar20;
          fStack_1a0 = fVar22;
        }
        else {
          lVar8 = *(longlong *)(lVar12 + 0x10);
          if (((*(int *)(lVar8 + 0x118) != 0) && (*(longlong **)(lVar8 + 0x110) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x110) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar8 + 0x118) == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = *(longlong **)(lVar8 + 0x110);
            }
            (**(code **)(*plVar10 + 0x38))(plVar10,&local_1c4);
            *(undefined8 *)(lVar8 + 0x100) = local_1c4;
          }
          uVar9 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar12 + 0x10) + 0xd0);
          local_1dc = param_2[2];
          local_1d8 = param_2[3];
          local_1d4 = param_2[4];
          FGeometry::FGeometry
                    (&local_e8,&local_1e4,&local_1d0,uVar9,(undefined8 *)(lVar8 + 0x100),&local_1dc,
                     param_2 + 7);
          uVar9 = *(undefined8 *)(lVar12 + 0x10);
          plVar10 = *(longlong **)(lVar12 + 0x18);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_158 = local_e8;
          uStack_150 = uStack_e0;
          local_148 = local_d8;
          uStack_140 = uStack_d0;
          local_138 = local_c8;
          uStack_134 = uStack_c4;
          uStack_130 = uStack_c0;
          uStack_12c = uStack_bc;
          uVar17 = (int)local_b8;
          uVar18 = (int)((ulonglong)local_b8 >> 0x20);
        }
        local_128 = CONCAT44(uVar18,uVar17);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar10 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        if ((bVar4 & *param_3) != 0) {
          lVar12 = (longlong)*(int *)(param_3 + 0x130);
          iVar6 = *(int *)(param_3 + 0x130) + 1;
          *(int *)(param_3 + 0x130) = iVar6;
          if (*(int *)(param_3 + 0x134) < iVar6) {
            TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_3 + 8);
          }
          pbVar11 = *(byte **)(param_3 + 0x128);
          if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
            pbVar11 = param_3 + 8;
          }
          *(undefined8 *)(pbVar11 + lVar12 * 0x48) = local_158;
          *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 8) = uStack_150;
          *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x10) = local_148;
          *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x10 + 8) = uStack_140;
          pbVar3 = pbVar11 + lVar12 * 0x48 + 0x20;
          *(undefined4 *)pbVar3 = local_138;
          *(undefined4 *)(pbVar3 + 4) = uStack_134;
          *(undefined4 *)(pbVar3 + 8) = uStack_130;
          *(undefined4 *)(pbVar3 + 0xc) = uStack_12c;
          *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x30) = local_128;
          *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x38) = uVar9;
          *(longlong **)(pbVar11 + lVar12 * 0x48 + 0x40) = plVar10;
          if (plVar10 == (longlong *)0x0) goto LAB_14184cf64;
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
LAB_14184cf64:
      iVar13 = iVar13 + 1;
      lVar14 = lVar14 + 8;
      iVar6 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
    } while (iVar13 < iVar6);
  }
  return;
}



// FUNCTION 14184d000 FUN_14184d000 body=2293 status=ok
// SIG undefined FUN_14184d000(void)

void FUN_14184d000(longlong param_1,longlong param_2,byte *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  byte *local_res18;
  float local_258;
  float fStack_254;
  float local_248;
  float local_244;
  float local_240;
  float fStack_23c;
  float local_238;
  float local_234 [4];
  undefined4 local_224;
  undefined4 local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8 [4];
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 auStack_1a4 [5];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined8 local_150;
  longlong *local_148;
  float local_138 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined1 local_f0 [176];
  longlong *plVar16;
  
  plVar14 = (longlong *)0x0;
  local_res8 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  iVar7 = (*(code *)**(undefined8 **)(param_1 + 0x208))((undefined8 *)(param_1 + 0x208));
  if (iVar7 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x230) != 0) && (*(longlong *)(param_1 + 0x238) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x238) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      plVar16 = *(longlong **)(param_1 + 0x238);
      plVar11 = plVar14;
      plVar12 = plVar16;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar16[1];
        bVar17 = iVar7 == 0;
        if (bVar17) {
          *(int *)(plVar16 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar11 = (longlong *)0x0, plVar12 = plVar14, !bVar17) {
          LOCK();
          bVar17 = iVar7 == (int)plVar16[1];
          if (bVar17) {
            *(int *)(plVar16 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar17) {
            plVar12 = plVar16;
            if (plVar16 != (longlong *)0x0) {
              plVar11 = *(longlong **)(param_1 + 0x230);
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar16[1];
          bVar17 = iVar7 == 0;
          if (bVar17) {
            *(int *)(plVar16 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      plVar16 = DAT_1469eaf38;
      fVar19 = (float)(**(code **)(*(longlong *)plVar11[0x93] + 0xf0))();
      fVar20 = (float)(**(code **)(*plVar16 + 0x38))(plVar16);
      pfVar8 = &local_240;
      local_240 = 1.0 / (fVar19 * fVar20);
      fStack_23c = -(local_240 * *(float *)(plVar11 + 0x6d));
      local_238 = -(local_240 * *(float *)((longlong)plVar11 + 0x36c));
      plVar16 = (longlong *)0x1;
      goto LAB_14184d18e;
    }
  }
  pfVar8 = local_234;
  plVar12 = (longlong *)CONCAT44(uStackX_c,local_res8);
  local_234[0] = 1.0;
  local_234[1] = 0.0;
  local_234[2] = 0.0;
  plVar16 = plVar14;
LAB_14184d18e:
  uVar2 = *(undefined8 *)pfVar8;
  fVar19 = pfVar8[2];
  if ((plVar16 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar16 = plVar12 + 1;
    lVar4 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  bVar17 = false;
  iVar7 = (*(code *)**(undefined8 **)(param_1 + 0x208))((undefined8 *)(param_1 + 0x208));
  if (0 < iVar7) {
    plVar12 = (longlong *)CONCAT44(uStackX_c,local_res8);
    plVar16 = plVar14;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)plVar14 * 8);
      lVar3 = *(longlong *)(lVar4 + 0x10);
      if (((*(int *)(lVar3 + 0xc0) != 0) && (*(longlong **)(lVar3 + 0xb8) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(lVar3 + 0xc0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar3 + 0xb8);
        }
        (**(code **)(*plVar11 + 0x38))(plVar11,&local_res8);
        *(byte *)(lVar3 + 0xb0) = (byte)local_res8;
      }
      if ((*(byte *)(lVar3 + 0xb0) & *local_res18) != 0) {
        if (((*(int *)(lVar4 + 0x80) != 0) && (*(longlong **)(lVar4 + 0x78) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x18))(), cVar5 != '\0')) {
          if (*(int *)(lVar4 + 0x80) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar4 + 0x78);
          }
          uVar21 = (**(code **)(*plVar11 + 0x38))();
          *(undefined4 *)(lVar4 + 0x70) = uVar21;
        }
        fVar20 = *(float *)(lVar4 + 0x70);
        if (((*(int *)(lVar4 + 0x38) != 0) && (*(longlong **)(lVar4 + 0x30) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x18))(), cVar5 != '\0')) {
          if (*(int *)(lVar4 + 0x38) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar4 + 0x30);
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,&local_1e0);
          *(undefined8 *)(lVar4 + 0x20) = local_1e0;
        }
        fVar26 = *(float *)(lVar4 + 0x20);
        fVar25 = *(float *)(lVar4 + 0x24);
        SWidget::GetDesiredSize(*(undefined8 *)(lVar4 + 0x10),&local_248);
        fVar28 = local_248 * fVar20;
        fVar27 = local_244 * fVar20;
        if (*(char *)(lVar4 + 0x5c) != '\0') {
          if (((*(int *)(lVar4 + 0x68) != 0) && (*(longlong **)(lVar4 + 0x60) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar4 + 0x68) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(lVar4 + 0x60);
            }
            uVar21 = (**(code **)(*plVar11 + 0x38))();
            *(undefined4 *)(lVar4 + 0x58) = uVar21;
          }
          fVar27 = *(float *)(lVar4 + 0x58);
        }
        if (*(char *)(lVar4 + 0x44) != '\0') {
          if (((*(int *)(lVar4 + 0x50) != 0) && (*(longlong **)(lVar4 + 0x48) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar4 + 0x50) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(lVar4 + 0x48);
            }
            uVar21 = (**(code **)(*plVar11 + 0x38))();
            *(undefined4 *)(lVar4 + 0x40) = uVar21;
          }
          fVar28 = *(float *)(lVar4 + 0x40);
        }
        if (((*(int *)(lVar4 + 0x98) != 0) && (*(longlong **)(lVar4 + 0x90) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x18))(), cVar5 != '\0')) {
          if (*(int *)(lVar4 + 0x98) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar4 + 0x90);
          }
          uVar6 = (**(code **)(*plVar11 + 0x38))();
          *(undefined1 *)(lVar4 + 0x88) = uVar6;
        }
        fVar23 = fVar25;
        if (*(char *)(lVar4 + 0x88) != '\0') {
          plVar11 = (longlong *)0x0;
          if ((*(longlong *)(param_1 + 0x230) == 0) || (*(longlong *)(param_1 + 0x238) == 0)) {
LAB_14184d4b0:
            pfVar8 = local_138;
            local_138[0] = -1.0;
            local_138[1] = -1.0;
            local_138[2] = -1.0;
            local_138[3] = -1.0;
          }
          else {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x238) + 8);
            LOCK();
            iVar7 = *piVar1;
            if (iVar7 == 0) {
              *piVar1 = 0;
              iVar7 = 0;
            }
            UNLOCK();
            if (iVar7 < 1) goto LAB_14184d4b0;
            plVar12 = *(longlong **)(param_1 + 0x238);
            bVar17 = true;
            plVar13 = plVar11;
            if (plVar12 == (longlong *)0x0) {
LAB_14184d493:
              pfVar8 = (float *)SWindow::GetClientRectInScreen(plVar13,local_f0);
            }
            else {
              LOCK();
              iVar7 = (int)plVar12[1];
              bVar18 = iVar7 == 0;
              if (bVar18) {
                *(int *)(plVar12 + 1) = 0;
                iVar7 = 0;
              }
              UNLOCK();
              while (!bVar18) {
                LOCK();
                bVar18 = iVar7 == (int)plVar12[1];
                if (bVar18) {
                  *(int *)(plVar12 + 1) = iVar7 + 1;
                }
                UNLOCK();
                if (bVar18) {
                  plVar13 = (longlong *)0x0;
                  if (plVar12 != (longlong *)0x0) {
                    plVar13 = *(longlong **)(param_1 + 0x230);
                  }
                  goto LAB_14184d493;
                }
                LOCK();
                iVar7 = (int)plVar12[1];
                bVar18 = iVar7 == 0;
                if (bVar18) {
                  *(int *)(plVar12 + 1) = 0;
                  iVar7 = 0;
                }
                UNLOCK();
              }
              pfVar8 = (float *)SWindow::GetClientRectInScreen(0,local_f0);
              plVar12 = plVar11;
            }
          }
          local_208 = *pfVar8;
          fStack_204 = pfVar8[1];
          fStack_200 = pfVar8[2];
          fStack_1fc = pfVar8[3];
          if ((bVar17) && (bVar17 = false, plVar12 != (longlong *)0x0)) {
            LOCK();
            plVar13 = plVar12 + 1;
            lVar3 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          if (((*(int *)(lVar4 + 0xb8) != 0) && (*(longlong **)(lVar4 + 0xb0) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0xb0) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar4 + 0xb8) != 0) {
              plVar11 = *(longlong **)(lVar4 + 0xb0);
            }
            (**(code **)(*plVar11 + 0x38))(plVar11,&local_1d8);
            *(undefined8 *)(lVar4 + 0xa0) = local_1d8;
          }
          fVar23 = (fVar26 + fVar28) - (fStack_200 - *(float *)(lVar4 + 0xa0));
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar23 = fVar26 - fVar23;
          fVar26 = local_208;
          if (local_208 < fVar23) {
            fVar26 = fVar23;
          }
          fVar22 = (fVar25 + fVar27) - (fStack_1fc - *(float *)(lVar4 + 0xa4));
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          fVar23 = fStack_204;
          if (fStack_204 < fVar25 - fVar22) {
            fVar23 = fVar25 - fVar22;
          }
        }
        local_258 = (float)uVar2;
        fVar25 = local_258 * fVar20;
        fStack_254 = (float)((ulonglong)uVar2 >> 0x20);
        fStack_254 = local_258 * fVar26 + fStack_254;
        fVar28 = (1.0 / fVar20) * fVar28;
        fVar26 = local_258 * fVar23 + fVar19;
        fVar27 = (1.0 / fVar20) * fVar27;
        local_1c8 = CONCAT44(fVar27,fVar28);
        local_218 = fVar25;
        local_214 = fStack_254;
        local_210 = fVar26;
        lVar9 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar4 + 0x10) + 0xd0);
        lVar3 = local_res10;
        if (*(char *)(lVar9 + 0x18) == '\0') {
          fVar20 = *(float *)(local_res10 + 8);
          local_1c0 = CONCAT44(fVar27,fVar28);
          local_1f8[1] = 0.0;
          local_1f8[2] = 0.0;
          local_1f8[0] = fVar25;
          local_1f8[3] = fVar25;
          local_1e8 = fStack_254;
          local_1e4 = fVar26;
          Concatenate<FTransform2D>(auStack_1a4,local_1f8,local_res10 + 0x1c);
          uStack_18c = CONCAT31(uStack_18c._1_3_,
                                (byte)uStack_18c ^ (*(byte *)(lVar3 + 0x34) ^ (byte)uStack_18c) & 1)
          ;
          fStack_1b4 = fStack_254 * fVar20 + *(float *)(lVar3 + 0xc);
          local_150 = *(undefined8 *)(lVar4 + 0x10);
          local_1b0 = fVar26 * fVar20 + *(float *)(lVar3 + 0x10);
          plVar11 = *(longlong **)(lVar4 + 0x18);
          fStack_1b8 = fVar25 * fVar20;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          uStack_180 = CONCAT44(fStack_1b4,fStack_1b8);
          local_178 = CONCAT44(fStack_254,local_1b0);
          uStack_170 = CONCAT44(auStack_1a4[0],fVar26);
          local_188 = local_1c0;
          uVar21 = local_190;
          uVar24 = uStack_18c;
          fStack_1ac = fStack_254;
          fStack_1a8 = fVar26;
        }
        else {
          lVar3 = *(longlong *)(lVar4 + 0x10);
          if (((*(int *)(lVar3 + 0x118) != 0) && (*(longlong **)(lVar3 + 0x110) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0x110) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar3 + 0x118) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(lVar3 + 0x110);
            }
            (**(code **)(*plVar11 + 0x38))(plVar11,&local_1d0);
            *(undefined8 *)(lVar3 + 0x100) = local_1d0;
          }
          uVar10 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar4 + 0x10) + 0xd0);
          local_234[3] = *(float *)(local_res10 + 8);
          local_224 = *(undefined4 *)(local_res10 + 0xc);
          local_220 = *(undefined4 *)(local_res10 + 0x10);
          FGeometry::FGeometry
                    (&local_128,&local_1c8,&local_218,uVar10,(undefined8 *)(lVar3 + 0x100),
                     local_234 + 3,local_res10 + 0x1c);
          local_150 = *(undefined8 *)(lVar4 + 0x10);
          plVar11 = *(longlong **)(lVar4 + 0x18);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          local_188 = local_128;
          uStack_180 = uStack_120;
          local_178 = local_118;
          uStack_170 = uStack_110;
          uVar21 = (int)local_f8;
          uVar24 = (int)((ulonglong)local_f8 >> 0x20);
        }
        local_158 = CONCAT44(uVar24,uVar21);
        local_148 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar11 + 1;
          lVar4 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        FUN_141801ed0(local_res18,&local_188);
        plVar11 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_148 + 1;
          lVar4 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_148 + 8))(local_148,1);
            }
          }
        }
      }
      uVar15 = (int)plVar16 + 1;
      plVar16 = (longlong *)(ulonglong)uVar15;
      plVar14 = (longlong *)((longlong)plVar14 + 1);
      iVar7 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
    } while ((int)uVar15 < iVar7);
  }
  return;
}



// FUNCTION 14184d910 OnCursorQuery body=96 status=ok
// SIG undefined OnCursorQuery(void)

undefined1 * FDragDropOperation::OnCursorQuery(longlong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (*(char *)(param_1 + 0x34) == '\0') {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x38) = 1;
      return param_2;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  return param_2;
}



// FUNCTION 14184da90 OnDragged body=88 status=ok
// SIG undefined OnDragged(void)

void FDragDropOperation::OnDragged(longlong param_1,longlong param_2)

{
  float *pfVar1;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    pfVar1 = (float *)(**(code **)(*DAT_1469eaf38 + 0x58))(DAT_1469eaf38,local_res8);
    SWindow::MoveWindowTo
              (*(undefined8 *)(param_1 + 0x20),
               CONCAT44(pfVar1[1] + *(float *)(param_2 + 0x1c),*pfVar1 + *(float *)(param_2 + 0x18))
              );
  }
  return;
}



// FUNCTION 14184daf0 OnDrop body=5 status=ok
// SIG undefined OnDrop(void)

void FDragDropOperation::OnDrop(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uStack_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_141856430();
    plStack_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x20) != &uStack_18) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      uStack_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&plStack_10);
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
      }
    }
  }
  return;
}



// FUNCTION 14184db80 FUN_14184db80 body=2279 status=ok
// SIG undefined FUN_14184db80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14184db80(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_3c8 [32];
  uint local_3a8;
  undefined1 local_3a4;
  undefined1 local_3a3 [3];
  longlong *local_3a0;
  undefined8 *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  longlong *local_388;
  longlong *local_380;
  longlong local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_328 [8];
  longlong *local_320;
  longlong local_318 [2];
  longlong local_308 [2];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [288];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [296];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  plVar7 = (longlong *)0x0;
  local_3a8 = 0;
  if (*param_2 == 2) {
    if ((((int)param_1[0x9d] != 0) && ((longlong *)param_1[0x9c] != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(*(longlong *)param_1[0x9c] + 0x18))(), cVar5 != '\0')) {
      plVar11 = plVar7;
      if ((int)param_1[0x9d] != 0) {
        plVar11 = (longlong *)param_1[0x9c];
      }
      (**(code **)(*plVar11 + 0x40))();
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x9e);
    plVar11 = param_1 + 0x8b;
    if (plVar11 != local_318) {
      *plVar11 = 0;
      plVar13 = (longlong *)param_1[0x8c];
      param_1[0x8c] = 0;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    iVar6 = (**(code **)(*(longlong *)param_1[0x93] + 0x68))();
    if (((iVar6 != 0) && (param_1[0x89] != 0)) && (param_1[0x8a] != 0)) {
      piVar1 = (int *)(param_1[0x8a] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) {
        plVar13 = (longlong *)param_1[0x8a];
        plVar12 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar13[1];
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(plVar13 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar12 = plVar7, !bVar14) {
            LOCK();
            bVar14 = iVar6 == (int)plVar13[1];
            if (bVar14) {
              *(int *)(plVar13 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar14) {
              plVar7 = (longlong *)0x0;
              plVar12 = plVar13;
              if (plVar13 != (longlong *)0x0) {
                plVar7 = (longlong *)param_1[0x89];
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar13[1];
            bVar14 = iVar6 == 0;
            if (bVar14) {
              *(int *)(plVar13 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        plVar13 = (longlong *)0x1;
        cVar5 = FUN_141846080(plVar7);
        local_3a0 = plVar12;
        plVar7 = plVar13;
        if ((cVar5 != '\0') && (cVar5 = (**(code **)(*DAT_1469eaf38 + 0xd0))(), cVar5 == '\0')) {
          bVar14 = true;
          goto LAB_14184dd0a;
        }
      }
    }
    bVar14 = false;
    plVar12 = local_3a0;
LAB_14184dd0a:
    if ((plVar7 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
      LOCK();
      plVar7 = plVar12 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar12)(plVar12);
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
    if (bVar14) {
      if (param_1 + 0x89 != local_308) {
        param_1[0x89] = 0;
        plVar7 = (longlong *)param_1[0x8a];
        param_1[0x8a] = 0;
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
      }
    }
    else {
      cVar5 = (**(code **)(*param_1 + 0x178))(param_1);
      if (cVar5 != '\0') {
        plVar7 = (longlong *)(**(code **)(*DAT_1469eaf38 + 0x78))(DAT_1469eaf38,local_358);
        *plVar11 = *plVar7;
        plVar7 = (longlong *)plVar7[1];
        plVar13 = (longlong *)param_1[0x8c];
        if (plVar7 != plVar13) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            plVar13 = (longlong *)param_1[0x8c];
          }
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
          param_1[0x8c] = (longlong)plVar7;
        }
        if (local_350 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_350 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_350)(local_350);
            LOCK();
            piVar1 = (int *)((longlong)local_350 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_350 + 8))(local_350,1);
            }
          }
        }
        if ((*plVar11 != 0) && (param_1[0x8c] != 0)) {
          piVar1 = (int *)(param_1[0x8c] + 8);
          LOCK();
          iVar6 = *piVar1;
          if (iVar6 == 0) {
            *piVar1 = 0;
            iVar6 = 0;
          }
          UNLOCK();
          if (0 < iVar6) {
            return 1;
          }
        }
        plVar7 = (longlong *)(**(code **)(*DAT_1469eaf38 + 0x130))(DAT_1469eaf38,local_348,0);
        *plVar11 = *plVar7;
        plVar7 = (longlong *)plVar7[1];
        plVar11 = (longlong *)param_1[0x8c];
        if (plVar7 != plVar11) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            plVar11 = (longlong *)param_1[0x8c];
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
          param_1[0x8c] = (longlong)plVar7;
        }
        if (local_340 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_340 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_340)(local_340);
            LOCK();
            piVar1 = (int *)((longlong)local_340 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_340 + 8))(local_340,1);
            }
          }
        }
      }
    }
    return 1;
  }
  if (*param_2 != 0) goto LAB_14184e3ec;
  local_398 = (undefined8 *)0x0;
  local_38c = 0;
  puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_338)
  ;
  plVar11 = (longlong *)puVar8[1];
  local_3a0 = (longlong *)*puVar8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_330 + 1;
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar1 = (int *)((longlong)local_330 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  plVar13 = plVar11 + 1;
  local_390 = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_398,0);
  *local_398 = local_3a0;
  local_398[1] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar13 = (int)*plVar13 + 1;
    UNLOCK();
    LOCK();
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar11 = (longlong *)param_1[0x8a];
  plVar13 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar14 = iVar6 == 0;
    if (bVar14) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar7, !bVar14) {
      LOCK();
      bVar14 = iVar6 == (int)plVar11[1];
      if (bVar14) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar13 = plVar11;
        if ((plVar11 != (longlong *)0x0) && (lVar4 = param_1[0x89], lVar4 != 0)) {
          local_2f8[0] = DAT_1464b9ee8;
          local_1b8 = 0;
          plStack_1b0 = (longlong *)0x0;
          local_3a4 = DAT_1464b9ee8;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          local_378 = lVar4;
          local_370 = plVar11;
          cVar5 = FUN_14182fe50(&local_398,&local_378,local_2f8,&local_3a4);
          LOCK();
          plVar13 = plVar11 + 1;
          lVar4 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
          if (cVar5 != '\0') {
            (**(code **)(*DAT_1469eaf38 + 0x120))(DAT_1469eaf38,local_2f8,2);
          }
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1a8);
          plVar13 = plStack_1b0;
          if (plStack_1b0 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_1b0 + 1;
            lVar4 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_1b0)(plStack_1b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FUN_140456b10(local_2f0);
          goto LAB_14184e3b4;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x178))(param_1);
  plVar11 = plVar13;
  if (cVar5 != '\0') {
    local_198[0] = DAT_1464b9ee8;
    local_58 = 0;
    uStack_50 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    if ((param_1[0x8b] == 0) || (param_1[0x8c] == 0)) {
LAB_14184e216:
      pplVar9 = (longlong **)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_328);
      uVar10 = 8;
      plVar13 = *pplVar9;
      local_3a0 = plVar13;
    }
    else {
      piVar1 = (int *)(param_1[0x8c] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) goto LAB_14184e216;
      plVar12 = (longlong *)param_1[0x8c];
      local_3a0 = (longlong *)0x0;
      plVar13 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar12[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(plVar12 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar13 = plVar7, !bVar14) {
          LOCK();
          bVar14 = iVar6 == (int)plVar12[1];
          if (bVar14) {
            *(int *)(plVar12 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar14) {
            plVar13 = plVar12;
            if (plVar12 != (longlong *)0x0) {
              local_3a0 = (longlong *)param_1[0x8b];
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar12[1];
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(plVar12 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      local_380 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      pplVar9 = &local_388;
      uVar10 = 6;
      local_388 = local_3a0;
    }
    plVar12 = pplVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    if (((uVar10 & 8) != 0) &&
       (local_3a8 = uVar10 & 0xfffffff7, uVar10 = local_3a8, local_320 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_320 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar1 = (int *)((longlong)local_320 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar10 = local_3a8;
        if (iVar6 == 1) {
          (**(code **)(*local_320 + 8))(local_320,1);
          uVar10 = local_3a8;
        }
      }
    }
    plVar2 = local_380;
    if (((uVar10 & 4) != 0) &&
       (local_3a8 = uVar10 & 0xfffffffb, uVar10 = local_3a8, local_380 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_380 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_380)(local_380);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar10 = local_3a8;
        if (iVar6 == 1) {
          (**(code **)(*local_380 + 8))(local_380,1);
          uVar10 = local_3a8;
        }
      }
    }
    if (((uVar10 & 2) != 0) && (plVar13 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plVar13 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    local_3a3[0] = DAT_1464b9ee8;
    local_368 = local_3a0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_360 = plVar12;
    cVar5 = FUN_14182fe50(&local_398,&local_368,local_198,local_3a3);
    if (cVar5 != '\0') {
      (**(code **)(*DAT_1469eaf38 + 0x128))(DAT_1469eaf38,local_198,2);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar12 + 1;
      lVar4 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar12)(plVar12);
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
    FUN_140458830(local_198);
  }
LAB_14184e3b4:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_398);
LAB_14184e3ec:
  if ((((int)param_1[0x98] != 0) && ((longlong *)param_1[0x97] != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)param_1[0x97] + 0x18))(), cVar5 != '\0')) {
    if ((int)param_1[0x98] != 0) {
      plVar7 = (longlong *)param_1[0x97];
    }
    (**(code **)(*plVar7 + 0x40))(plVar7);
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x99);
  return 1;
}



// FUNCTION 14184e470 FUN_14184e470 body=823 status=ok
// SIG undefined FUN_14184e470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14184e470(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  bVar8 = false;
  local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
  plVar10 = local_128;
  if (*(char *)(param_1 + 0x340) != '\0') {
    plVar10 = *(longlong **)(param_4 + 0x48);
    lVar4 = *(longlong *)(param_4 + 0x38);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    if (lVar4 == DAT_1469e9868) {
      bVar6 = true;
      goto LAB_14184e4d6;
    }
  }
  bVar6 = false;
LAB_14184e4d6:
  if ((bVar8) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)();
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
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x428);
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_118);
    plVar10 = (longlong *)puVar9[1];
    uVar5 = *puVar9;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_110 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    plVar11 = plVar10 + 1;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar11 = (int)*plVar11 + 1;
      UNLOCK();
    }
    local_54 = local_54 & 0xffffff00;
    local_108[0] = 1;
    local_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
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
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar11 = (int)*plVar11 + 1;
      UNLOCK();
    }
    local_128 = (longlong *)0x0;
    local_120 = plVar10;
    local_d0 = uVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_c8,&local_120);
    plVar7 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_120 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
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
    FUN_140438260(param_2,local_108);
    FUN_140438c20(local_108);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
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



// FUNCTION 14184e7b0 FUN_14184e7b0 body=558 status=ok
// SIG undefined FUN_14184e7b0(void)

undefined1 * FUN_14184e7b0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  bool bVar8;
  uint uStackX_c;
  longlong *local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
  bVar8 = false;
  if (*(char *)(param_1 + 0x340) == '\0') {
LAB_14184e81f:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    cVar6 = FUN_141846080();
    if (cVar6 == '\0') goto LAB_14184e81f;
    lVar4 = *(longlong *)(param_4 + 0x38);
    plVar7 = *(longlong **)(param_4 + 0x48);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    if (lVar4 == DAT_1469e9868) {
      bVar5 = true;
      goto LAB_14184e826;
    }
  }
  bVar5 = false;
LAB_14184e826:
  if ((bVar8) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar5) {
    local_34 = local_34 & 0xffffff00;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_e8[0] = 1;
    local_e0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0x20702;
    local_f0 = (longlong *)0x0;
    local_b0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a8,&local_f0);
    plVar7 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    local_34 = local_34 & 0xffffffdf | 1;
    FUN_140438260(param_2,local_e8);
    FUN_140438c20(local_e8);
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



// FUNCTION 14184e9e0 FUN_14184e9e0 body=488 status=ok
// SIG undefined FUN_14184e9e0(void)

undefined1 * FUN_14184e9e0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((*(char *)(param_1 + 0x340) != '\0') &&
     (cVar5 = FUN_141846080(), plVar4 = DAT_1469e9878, lVar3 = DAT_1469e9868, cVar5 != '\0')) {
    if (DAT_1469e9878 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 1) = (int)DAT_1469e9878[1] + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(param_4 + 0x30);
    iVar9 = -1;
    iVar8 = iVar9;
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar6 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar6 = plVar2 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)plVar2[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *plVar2) == lVar3) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *plVar2);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    if ((iVar8 != -1) && (*(int *)(param_1 + 0x2f0) != 10)) {
      SWindow::MoveWindowTo
                (param_1,CONCAT44(*(float *)(param_4 + 0x2c) + *(float *)(param_1 + 0x36c),
                                  *(float *)(param_4 + 0x28) + *(float *)(param_1 + 0x368)));
      FReply::Handled(param_2);
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



// FUNCTION 14184ebd0 FUN_14184ebd0 body=1011 status=ok
// SIG undefined FUN_14184ebd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014184eeec) */
/* WARNING: Removing unreachable block (ram,0x00014184eef8) */

int FUN_14184ebd0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 *param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  int local_2e0;
  undefined4 *local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  float fStack_29c;
  undefined1 local_298 [16];
  longlong *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined1 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined2 local_25c;
  undefined1 local_258 [12];
  undefined4 uStack_24c;
  undefined8 local_248;
  longlong local_240;
  longlong lStack_238;
  undefined1 local_230 [32];
  longlong *local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1c4;
  undefined1 local_1c0 [32];
  longlong *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_188[0] = DAT_1464b9ee8;
  plVar7 = (longlong *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_188);
  if (0 < (int)local_58) {
    puVar8 = local_180;
    if (local_60 != (undefined1 *)0x0) {
      puVar8 = local_60;
    }
    uVar5 = (**(code **)(*param_1 + 0x1d8))(param_1,local_1c0);
    FUN_1417ee5f0(local_230,uVar5);
    local_2c8 = *param_7;
    uStack_2c0 = param_7[1];
    local_208 = 1;
    local_2b8 = param_7[2];
    uStack_2b0 = param_7[3];
    local_200 = 0;
    local_1f8 = 0;
    local_2a8 = *(undefined4 *)(param_7 + 4);
    uStack_2a4 = *(undefined4 *)((longlong)param_7 + 0x24);
    uStack_2a0 = *(undefined4 *)(param_7 + 5);
    fStack_29c = *(float *)((longlong)param_7 + 0x2c);
    if ((((int)param_1[0x55] != 0) && ((longlong *)param_1[0x54] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x54] + 0x18))(), cVar4 != '\0')) {
      if ((int)param_1[0x55] != 0) {
        plVar7 = (longlong *)param_1[0x54];
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_240);
      param_1[0x51] = local_240;
      param_1[0x52] = lStack_238;
    }
    local_2c8 = CONCAT44(local_2c8._4_4_ * *(float *)((longlong)param_1 + 0x28c),
                         (float)local_2c8 * *(float *)(param_1 + 0x51));
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_ * *(float *)((longlong)param_1 + 0x294),
                          (float)uStack_2c0 * *(float *)(param_1 + 0x52));
    puVar6 = (undefined8 *)FUN_141831530(local_230);
    cVar4 = *(char *)(puVar6 + 2);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        puVar6 = (undefined8 *)puVar6[3];
      }
      else if (cVar4 == '\x03') {
        puVar6 = (undefined8 *)&local_2a8;
      }
      else {
        puVar6 = &local_2b8;
      }
    }
    local_2a8 = *(undefined4 *)puVar6;
    uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
    local_2b8 = *puVar6;
    uStack_2a0 = *(undefined4 *)(puVar6 + 1);
    fStack_1d4 = *(float *)((longlong)puVar6 + 0xc);
    uStack_2b0 = puVar6[1];
    fStack_29c = fStack_1d4 * 0.6;
    local_1f0 = (float)local_2c8;
    uStack_1ec = local_2c8._4_4_;
    uStack_1e8 = (float)uStack_2c0;
    uStack_1e4 = uStack_2c0._4_4_;
    local_1e0 = local_2a8;
    uStack_1dc = uStack_2a4;
    uStack_1d8 = uStack_2a0;
    local_1d0 = local_2a8;
    uStack_1cc = uStack_2a4;
    uStack_1c8 = uStack_2a0;
    fStack_1c4 = fStack_29c;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_200);
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_210 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1a0 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    local_280 = *(undefined8 *)(param_2 + 8);
    local_26c = *(undefined4 *)(param_2 + 0x1c);
    local_270 = *(undefined4 *)(param_2 + 0x18);
    local_278 = *(undefined4 *)(param_2 + 0x10);
    local_274 = *(undefined1 *)(param_2 + 0x14);
    uVar5 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x30);
    local_260 = *(undefined4 *)(param_2 + 0x28);
    lVar3 = *(longlong *)(param_2 + 0x38);
    local_258 = *(undefined1 (*) [12])(param_2 + 0x30);
    local_268 = *(undefined8 *)(param_2 + 0x20);
    local_288 = param_1;
    local_25c = 0;
    local_248 = 0;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    local_298._0_4_ = (undefined4)uVar5;
    local_198 = local_298._0_4_;
    local_298._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_194 = local_298._4_4_;
    local_298._8_4_ = (undefined4)lVar3;
    uStack_190 = local_298._8_4_;
    local_298._12_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_18c = local_298._12_4_;
    local_298 = ZEXT416(0);
    uStack_24c = uStack_18c;
    local_248 = *(undefined8 *)(param_2 + 0x40);
    uVar5 = *(undefined8 *)(puVar8 + 0x38);
    local_25c = *(undefined2 *)(param_2 + 0x2c);
    local_2d0 = SWidget::ShouldBeEnabled(param_1,param_8);
    local_2e0 = param_6 + 1;
    local_2d8 = &local_1f0;
    local_2e8 = param_5;
    param_6 = FUN_14184f6c0(uVar5,&local_288,puVar8,param_4);
    if (stack0xfffffffffffffdb0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)stack0xfffffffffffffdb0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*stack0xfffffffffffffdb0 + 8))(stack0xfffffffffffffdb0,1);
      }
    }
  }
  FUN_140456b10(local_180);
  return param_6;
}



// FUNCTION 14184efd0 FUN_14184efd0 body=721 status=ok
// SIG undefined FUN_14184efd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014184f103) */
/* WARNING: Removing unreachable block (ram,0x00014184f10f) */

int FUN_14184efd0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_248 [32];
  undefined8 local_228;
  int local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined1 local_208 [16];
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1c8 [12];
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
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
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_198 = param_5;
  local_1a0 = param_7;
  local_180[0] = DAT_1464b9ee8;
  plVar9 = (longlong *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_1a8 = param_4;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_180);
  local_1f0 = *(undefined8 *)(param_2 + 8);
  local_1dc = *(undefined4 *)(param_2 + 0x1c);
  local_1e0 = *(undefined4 *)(param_2 + 0x18);
  local_1e8 = *(undefined4 *)(param_2 + 0x10);
  local_1e4 = *(undefined1 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x30);
  local_1d0 = *(undefined4 *)(param_2 + 0x28);
  lVar3 = *(longlong *)(param_2 + 0x38);
  local_1c8 = *(undefined1 (*) [12])(param_2 + 0x30);
  local_1d8 = *(undefined8 *)(param_2 + 0x20);
  auVar12 = ZEXT416(0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_208._0_4_ = (undefined4)uVar2;
  local_208._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_208._8_4_ = (undefined4)lVar3;
  local_208._12_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_1bc = local_208._12_4_;
  uStack_184 = local_208._12_4_;
  uStack_188 = local_208._8_4_;
  uStack_18c = local_208._4_4_;
  local_190 = local_208._0_4_;
  local_1b8 = *(undefined8 *)(param_2 + 0x40);
  local_1cc = *(undefined2 *)(param_2 + 0x2c);
  local_208 = auVar12;
  local_1f8 = param_1;
  if (param_8 != '\0') {
    if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar4 != '\0')) {
      plVar6 = plVar9;
      if ((int)param_1[0x15] != 0) {
        plVar6 = (longlong *)param_1[0x14];
      }
      uVar5 = (**(code **)(*plVar6 + 0x38))();
      *(undefined1 *)(param_1 + 0x13) = uVar5;
    }
    if ((char)param_1[0x13] != '\0') {
      uVar5 = 1;
      goto LAB_14184f199;
    }
  }
  uVar5 = 0;
LAB_14184f199:
  uVar2 = local_1a8;
  plVar6 = plVar9;
  plVar11 = plVar9;
  if (0 < (int)local_50) {
    do {
      iVar8 = param_6 + 1;
      if ((longlong)plVar11 < 1) {
        iVar8 = param_6;
      }
      puVar7 = local_178;
      if (local_58 != (undefined1 *)0x0) {
        puVar7 = local_58;
      }
      local_218 = local_1a0;
      local_228 = local_198;
      local_220 = iVar8;
      local_210 = uVar5;
      param_6 = FUN_14184f6c0(*(undefined8 *)(puVar7 + (longlong)plVar9 + 0x38),&local_1f8,
                              puVar7 + (longlong)plVar9,uVar2);
      if (param_6 <= iVar8) {
        param_6 = iVar8;
      }
      uVar10 = (int)plVar6 + 1;
      plVar9 = plVar9 + 9;
      plVar6 = (longlong *)(ulonglong)uVar10;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    } while ((int)uVar10 < (int)local_50);
  }
  if (stack0xfffffffffffffe40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)stack0xfffffffffffffe40 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*stack0xfffffffffffffe40 + 8))(stack0xfffffffffffffe40,1);
    }
  }
  FUN_140456b10(local_178);
  return param_6;
}



// FUNCTION 14184f2b0 FUN_14184f2b0 body=209 status=ok
// SIG undefined FUN_14184f2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14184f2b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_188[0] = DAT_1464b9ee8;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_188);
  local_198 = param_8;
  local_1a0 = param_7;
  local_1a8 = param_6;
  local_1b0 = param_5;
  local_1b8 = param_4;
  uVar1 = FUN_14184fbf0(param_1,param_2,local_188,param_3);
  FUN_140456b10(local_180);
  return uVar1;
}



// FUNCTION 14184f390 OnPaint body=201 status=ok
// SIG undefined OnPaint(void)

void SWindow::OnPaint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_5 + 0xa48);
  uVar2 = *(undefined4 *)(param_5 + 0xa30);
  *(int *)(param_5 + 0xa48) = iVar1 + 1;
  if (*(int *)(param_5 + 0xa4c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5 + 0xa40,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_5 + 0xa40) + (longlong)iVar1 * 4) = uVar2;
  FUN_14184ebd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_5 + 0xa38) = 1;
  return;
}



// FUNCTION 14184f460 FUN_14184f460 body=594 status=ok
// SIG undefined FUN_14184f460(void)

undefined8 * FUN_14184f460(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar8 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x538) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar4 = operator_new(0x58);
  plVar6 = plVar8;
  plVar10 = plVar8;
  if (lVar4 != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x538);
    local_40 = *(longlong *)(param_1 + 0x540);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
    local_58 = *puVar5;
    local_50 = (longlong *)puVar5[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar6 = (longlong *)FUN_1417ec460(lVar4,&local_58,param_3,&local_48);
    plVar10 = (longlong *)0x1;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar9 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar6;
    plVar9 = plVar7;
  }
  *param_2 = plVar6;
  param_2[1] = plVar9;
  plVar7 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) goto LAB_14184f63b;
      }
      plVar9 = (longlong *)param_2[1];
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar6;
    plVar8 = (longlong *)plVar7[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
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
      plVar7[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
LAB_14184f63b:
  plVar8 = local_50;
  if ((plVar10 != (longlong *)0x0) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14184f6c0 FUN_14184f6c0 body=1325 status=ok
// SIG undefined FUN_14184f6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14184f6c0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                 longlong param_5,int param_6,undefined4 *param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_3d8 [32];
  char *local_3b8;
  byte *local_3b0;
  byte *local_3a8;
  undefined4 *local_3a0;
  undefined1 local_398;
  undefined1 local_388;
  char local_387;
  byte local_386;
  byte local_385;
  int local_384;
  longlong local_380;
  longlong *plStack_378;
  undefined8 local_370;
  longlong local_368;
  longlong lStack_360;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [32];
  byte local_2f8;
  undefined1 local_2f0 [32];
  byte local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  float fStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  float fStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined1 local_228 [56];
  longlong *local_1f0;
  undefined1 local_1d8 [48];
  longlong local_1a8;
  char local_198;
  longlong local_190;
  longlong *plStack_188;
  undefined1 local_180 [304];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_388 = param_8;
  local_384 = param_6;
  local_370 = param_4;
  if (DAT_1469eaf30 != 0) {
    FUN_14185c5d0(param_1,*(undefined4 *)(param_3 + 1));
  }
  plVar5 = *(longlong **)(param_2 + 0x38);
  plVar7 = param_1 + 0x2e;
  lVar6 = *(longlong *)(param_2 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  local_380 = lVar6;
  plStack_378 = plVar5;
  if (&local_380 != plVar7) {
    local_380 = *plVar7;
    plStack_378 = (longlong *)param_1[0x2f];
    *plVar7 = lVar6;
    param_1[0x2f] = (longlong)plVar5;
    local_190 = lVar6;
    plStack_188 = plVar5;
  }
  if (plStack_378 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_378 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_378 + 8))(plStack_378,1);
    }
  }
  if ((*(char *)(param_2 + 0x2d) == '\0') || (*(char *)(param_2 + 0x2c) != '\0')) {
    bVar8 = 0;
  }
  else {
    bVar8 = 2;
  }
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) & 0xfd;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | bVar8;
  local_3a8 = &local_385;
  local_3b0 = &local_386;
  local_3b8 = &local_387;
  FUN_141804760(param_1,&local_348,param_3,local_370);
  local_2c8 = *param_7;
  uStack_2c4 = param_7[1];
  uStack_2c0 = param_7[2];
  local_2b8 = param_7[4];
  uStack_2b4 = param_7[5];
  uStack_2b0 = param_7[6];
  uStack_2ac = param_7[7];
  local_2a8 = param_7[8];
  uStack_2a4 = param_7[9];
  uStack_2a0 = param_7[10];
  uStack_29c = param_7[0xb];
  fStack_2bc = (float)param_7[3] * *(float *)(param_1 + 0x19);
  local_298 = local_2c8;
  uStack_294 = uStack_2c4;
  uStack_290 = uStack_2c0;
  fStack_28c = fStack_2bc;
  local_288 = local_2b8;
  uStack_284 = uStack_2b4;
  uStack_280 = uStack_2b0;
  uStack_27c = uStack_2ac;
  local_278 = local_2a8;
  uStack_274 = uStack_2a4;
  uStack_270 = uStack_2a0;
  uStack_26c = uStack_29c;
  if ((((*(byte *)((longlong)param_1 + 0x19) & 1) == 0) || (*(char *)(param_2 + 0x2c) == '\0')) ||
     (*(char *)(param_2 + 0x2d) != '\0')) {
    puVar9 = (undefined8 *)((longlong)param_1 + 0x4c);
    if (puVar9 != param_3) {
      uVar10 = param_3[1];
      *puVar9 = *param_3;
      *(undefined8 *)((longlong)param_1 + 0x54) = uVar10;
      uVar10 = param_3[3];
      *(undefined8 *)((longlong)param_1 + 0x5c) = param_3[2];
      *(undefined8 *)((longlong)param_1 + 100) = uVar10;
      uVar10 = param_3[5];
      *(undefined8 *)((longlong)param_1 + 0x6c) = param_3[4];
      *(undefined8 *)((longlong)param_1 + 0x74) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x7c) = param_3[6];
    }
    fVar3 = *(float *)(param_2 + 0x18);
    fVar4 = *(float *)(param_2 + 0x1c);
    local_368 = param_1[0xd];
    lStack_360 = param_1[0xe];
    param_1[0xd] = local_368;
    param_1[0xe] = lStack_360;
    *(float *)(param_1 + 0xb) = *(float *)(param_1 + 0xb) + fVar3;
    *(float *)((longlong)param_1 + 0x5c) = *(float *)((longlong)param_1 + 0x5c) + fVar4;
    param_1[0xf] = CONCAT44(fVar4 + *(float *)((longlong)param_1 + 0x7c),
                            fVar3 + *(float *)(param_1 + 0xf));
    SWidget::ExecuteActiveTimers
              (param_1,(int)*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
    if ((*(byte *)(param_1 + 3) & 2) != 0) {
      SWidget::ExecuteActiveTimers
                (param_1,(int)*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
      (**(code **)(*param_1 + 8))
                (param_1,puVar9,(int)*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28)
                );
    }
    local_3b8 = (char *)CONCAT44(local_3b8._4_4_,param_6);
    FUN_141853450(param_2,local_228,param_1,param_3);
    if (local_387 != '\0') {
      FSlateClippingZone::FSlateClippingZone(local_318,param_3);
      bVar8 = ((local_386 & 1) * '\x02' | local_385 & 1) * '\x02';
      local_2f8 = local_2f8 & 0xf9 | bVar8;
      FUN_141852770(param_5 + 0x988,local_318);
      FSlateClippingZone::FSlateClippingZone(local_2f0,puVar9);
      local_2d0 = local_2d0 & 0xf9 | bVar8;
      FUN_141852770(*(longlong *)(param_2 + 8) + 0x30,local_2f0);
      param_6 = local_384;
    }
    local_3a0 = (undefined4 *)CONCAT71(local_3a0._1_7_,local_388);
    local_3a8 = (byte *)&local_298;
    local_3b0 = (byte *)CONCAT44(local_3b0._4_4_,param_6);
    local_3b8 = (char *)param_5;
    param_6 = (**(code **)(*param_1 + 0x1f8))(param_1,local_228,param_3,&local_348);
    if (local_387 != '\0') {
      *(int *)(param_5 + 0x990) = *(int *)(param_5 + 0x990) + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
      piVar1 = (int *)(*(longlong *)(param_2 + 8) + 0x38);
      *piVar1 = *piVar1 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    }
    if (*(char *)(param_5 + 0xa38) != '\0') {
      param_6 = FUN_14184ff80(param_5,param_6,local_370);
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (local_1f0 != (longlong *)0x0)) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  else {
    param_6 = param_6 + 1;
    local_268 = *param_3;
    uStack_260 = param_3[1];
    local_328 = local_348;
    uStack_320 = uStack_340;
    local_258 = param_3[2];
    uStack_250 = param_3[3];
    local_248 = *(undefined4 *)(param_3 + 4);
    uStack_244 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_240 = *(undefined4 *)(param_3 + 5);
    uStack_23c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_238 = param_3[6];
    if ((*(int *)(param_5 + 0x990) < 1) ||
       (iVar2 = *(int *)(*(longlong *)(param_5 + 0x988) + -4 +
                        (longlong)*(int *)(param_5 + 0x990) * 4), iVar2 == -1)) {
      local_198 = '\0';
    }
    else {
      FSlateClippingState::FSlateClippingState
                (local_1d8,(longlong)iVar2 * 0x40 + *(longlong *)(param_5 + 0x998));
      local_198 = '\x01';
    }
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_338);
    plVar7 = (longlong *)puVar9[1];
    local_358 = *puVar9;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_350 = plVar7;
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_330 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar1 = (int *)((longlong)local_330 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    local_3a0 = &local_298;
    local_398 = local_388;
    local_3b0 = local_1d8;
    local_3a8 = (byte *)CONCAT44(local_3a8._4_4_,param_6);
    local_3b8 = (char *)&local_328;
    uVar10 = FUN_1417f30c0(local_180,&local_358,param_2,&local_268);
    FUN_141852dd0(param_5,uVar10);
    FUN_1417f81e0(local_180);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if ((local_198 != '\0') && (local_1a8 != 0)) {
      FMemory::Free();
    }
  }
  return param_6;
}



// FUNCTION 14184fbf0 FUN_14184fbf0 body=904 status=ok
// SIG undefined FUN_14184fbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014184fcf8) */
/* WARNING: Removing unreachable block (ram,0x00014184fd05) */

int FUN_14184fbf0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,char param_9)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_188 [32];
  undefined8 local_168;
  int local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_108 [12];
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_11c = *(float *)(param_2 + 0x1c);
  local_120 = *(float *)(param_2 + 0x18);
  local_130 = *(undefined8 *)(param_2 + 8);
  local_128 = *(undefined4 *)(param_2 + 0x10);
  local_124 = *(undefined1 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x30);
  local_110 = *(undefined4 *)(param_2 + 0x28);
  lVar12 = *(longlong *)(param_2 + 0x38);
  local_108 = *(undefined1 (*) [12])(param_2 + 0x30);
  local_118 = *(undefined8 *)(param_2 + 0x20);
  auVar13 = ZEXT416(0);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
    UNLOCK();
  }
  local_e8._0_4_ = (undefined4)uVar2;
  local_e8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_e8._8_4_ = (undefined4)lVar12;
  local_e8._12_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
  uStack_fc = local_e8._12_4_;
  uStack_6c = local_e8._12_4_;
  uStack_70 = local_e8._8_4_;
  uStack_74 = local_e8._4_4_;
  local_78 = local_e8._0_4_;
  local_d0 = param_6;
  local_d8 = param_8;
  local_f8 = *(undefined8 *)(param_2 + 0x40);
  local_10c = *(undefined2 *)(param_2 + 0x2c);
  local_138 = param_1;
  local_e8 = auVar13;
  local_c8 = param_3;
  if (param_9 != '\0') {
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0xa0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined1 *)(param_1 + 0x98) = uVar5;
    }
    local_148 = 1;
    if (*(char *)(param_1 + 0x98) != '\0') goto LAB_14184fd8a;
  }
  local_148 = 0;
LAB_14184fd8a:
  iVar10 = 0;
  iVar11 = param_7;
  if (0 < *(int *)(param_3 + 0x130)) {
    lVar12 = 0;
    do {
      lVar8 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar8 = param_3 + 8;
      }
      puVar9 = (undefined4 *)(lVar8 + lVar12);
      cVar4 = SWidget::IsChildWidgetCulled(param_1,param_5,puVar9);
      uVar3 = local_110;
      lVar8 = *(longlong *)(puVar9 + 0xe);
      iVar6 = iVar11;
      if (cVar4 == '\0') {
        local_150 = local_148;
        local_158 = local_d8;
        local_160 = param_7;
        local_168 = local_d0;
        iVar6 = FUN_14184f6c0(lVar8,&local_138,puVar9,param_5);
        if (iVar6 <= iVar11) {
          iVar6 = iVar11;
        }
      }
      else if (*(char *)(lVar8 + 0x200) != '\0') {
        uStack_bc = puVar9[8];
        uStack_b8 = puVar9[9];
        uStack_b4 = puVar9[10];
        uStack_9c = puVar9[5];
        uStack_98 = puVar9[6];
        local_c0 = puVar9[7];
        local_b0 = *puVar9;
        uStack_ac = puVar9[1];
        uStack_a8 = puVar9[2];
        local_a0 = (float)puVar9[4] + local_11c;
        fStack_80 = local_11c + (float)*(undefined8 *)(puVar9 + 0xc);
        uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(puVar9 + 0xc) >> 0x20);
        fStack_a4 = (float)puVar9[3] + local_120;
        fStack_84 = local_120 + (float)puVar9[0xb];
        uStack_94 = local_c0;
        local_90 = uStack_bc;
        uStack_8c = uStack_b8;
        uStack_88 = uStack_b4;
        SWidget::ExecuteActiveTimers(lVar8,local_118,local_110);
        (**(code **)(**(longlong **)(puVar9 + 0xe) + 8))
                  (*(longlong **)(puVar9 + 0xe),&local_b0,(int)local_118,uVar3);
      }
      iVar11 = iVar6;
      iVar10 = iVar10 + 1;
      lVar12 = lVar12 + 0x48;
    } while (iVar10 < *(int *)(local_c8 + 0x130));
  }
  if (stack0xffffffffffffff00 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)stack0xffffffffffffff00 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*stack0xffffffffffffff00 + 8))(stack0xffffffffffffff00,1);
    }
  }
  return iVar11;
}



// FUNCTION 14184ff80 FUN_14184ff80 body=395 status=ok
// SIG undefined FUN_14184ff80(void)

undefined4 FUN_14184ff80(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  *(undefined1 *)(param_1 + 0xa38) = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa40) + -4 + (longlong)*(int *)(param_1 + 0xa48) * 4);
  *(int *)(param_1 + 0xa48) = *(int *)(param_1 + 0xa48) + -1;
  iVar6 = *(int *)(param_1 + 0xa30);
  if (iVar2 < iVar6) {
    lVar8 = (longlong)iVar2 << 4;
    iVar7 = iVar2;
    do {
      plVar3 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0xa28));
      plVar4 = (longlong *)plVar3[1];
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
            if (plVar4 != (longlong *)0x0) {
              if (*plVar3 != 0) {
                param_2 = FUN_14184f6c0(*plVar3,plVar3 + 2,plVar3 + 0xb,param_3,param_1,param_2,
                                        plVar3 + 0x12,(char)plVar3[0x18]);
              }
              LOCK();
              plVar3 = plVar4 + 1;
              lVar5 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
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
      iVar6 = *(int *)(param_1 + 0xa30);
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar7 < iVar6);
  }
  while (iVar6 = iVar6 + -1, iVar2 <= iVar6) {
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0xa28,iVar6,1);
  }
  return param_2;
}



// FUNCTION 141850110 PaintVolatile body=215 status=ok
// SIG undefined PaintVolatile(void)

int FSlateWindowElementList::PaintVolatile
              (longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xa58)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xa50);
      FUN_141803660(param_2,*(undefined8 *)(lVar3 + lVar1));
      iVar2 = FUN_14182cf00(*(undefined8 *)(lVar3 + lVar1),param_2,param_3,param_4,param_5);
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      *(int *)(param_2 + 0xa10) = *(int *)(param_2 + 0xa10) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2 + 0xa08);
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0xa58));
  }
  return iVar4;
}



// FUNCTION 1418501f0 FUN_1418501f0 body=159 status=ok
// SIG undefined FUN_1418501f0(void)

int FUN_1418501f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xa58) < 1) {
    iVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      iVar1 = FUN_14182cf00(*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0xa50)),param_2,param_3,
                            param_4,param_5);
      lVar4 = lVar4 + 0x10;
      if (iVar1 <= iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xa58));
  }
  return iVar2;
}



// FUNCTION 141850290 K2_TwoBoneIK body=14 status=ok
// SIG undefined K2_TwoBoneIK(void)

void UKismetAnimationLibrary::K2_TwoBoneIK(void)

{
  FUN_14184f6c0();
  return;
}



// FUNCTION 1418502a0 ParseAttributes body=434 status=ok
// SIG undefined ParseAttributes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FFreeTypeFace::ParseAttributes(longlong *param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  longlong local_168;
  ulonglong local_160;
  longlong *local_158;
  ulonglong local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [256];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*param_1 != 0) {
    local_158 = (longlong *)0x0;
    local_150 = 0;
    lVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_138,*(undefined8 *)(*param_1 + 0x20));
    psVar1 = *(short **)(lVar2 + 0x108);
    local_168 = 0;
    local_160 = 0;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (psVar1[lVar2] != 0);
      uVar4 = (int)lVar2 + 1;
      local_160 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      }
      FGenericPlatformString::Memcpy(local_168,psVar1,(longlong)(int)uVar4 * 2);
    }
    FUN_141594550(&local_168,&local_158,&DAT_144d3ddbc,1);
    if (local_168 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    uVar7 = (ulonglong)(int)local_150;
    plVar6 = local_158 + uVar7 * 2;
    plVar5 = local_158;
    if (local_158 != plVar6) {
      do {
        if ((int)plVar5[1] == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = (undefined2 *)*plVar5;
        }
        FName::FName(&local_168,puVar3,1);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (param_1 + 0x16,local_148,&local_168,0);
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar6);
      uVar7 = local_150 & 0xffffffff;
    }
    uVar4 = (uint)uVar7;
    plVar5 = local_158;
    while (uVar4 != 0) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      uVar4 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar4;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
  }
  return;
}



// FUNCTION 141850460 FUN_141850460 body=4389 status=ok
// SIG undefined FUN_141850460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141850460(longlong param_1,short *param_2,int param_3,int param_4,longlong param_5,
                  float param_6,char param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  char cVar13;
  undefined2 uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int *piVar27;
  longlong lVar28;
  short sVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  undefined8 uVar34;
  longlong lVar35;
  longlong **pplVar36;
  int iVar37;
  ulonglong uVar38;
  int *piVar39;
  undefined4 *puVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong **local_310;
  longlong *local_308;
  char local_2f8;
  int *local_2f0;
  float local_2e8;
  int local_2e4;
  uint local_2e0 [2];
  int *local_2d8;
  int local_2d0;
  float local_2cc;
  uint local_2c8;
  int *local_2c0;
  undefined8 local_2b8;
  int local_2b0;
  short *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong local_290;
  int local_288;
  int local_284;
  longlong local_280;
  longlong local_278;
  longlong *plStack_270;
  int local_268;
  uint local_264;
  int local_260;
  int local_25c;
  undefined8 local_258;
  longlong *local_248;
  longlong *plStack_240;
  longlong local_238;
  ulonglong local_230;
  longlong *local_228;
  longlong *plStack_220;
  longlong local_218;
  longlong *local_210 [3];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong *plStack_1c8;
  int local_1c0 [2];
  undefined8 local_1b8;
  undefined4 *local_1b0;
  int *local_1a8;
  int local_1a0;
  longlong *local_198;
  int **local_190;
  int *local_188;
  int *local_180;
  longlong *local_178;
  float *local_170;
  longlong local_168;
  longlong *plStack_160;
  undefined1 local_158 [8];
  longlong *local_150;
  int local_138;
  undefined1 local_134;
  int local_130;
  undefined8 local_12c;
  int local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2f8 = param_7;
  local_2a0 = param_8;
  local_280 = param_5;
  local_2c0 = (int *)0x0;
  local_2b8 = 0;
  local_2b0 = param_3;
  local_2a8 = param_2;
  local_298 = param_1;
  local_284 = param_4;
  piVar19 = (int *)hb_unicode_funcs_get_default();
  local_198 = &local_290;
  local_190 = &local_2c0;
  local_188 = &local_2d0;
  local_180 = &local_2e4;
  local_178 = &local_278;
  local_170 = &local_2e8;
  local_290 = 0;
  local_278 = 0;
  plStack_270 = (longlong *)0x0;
  local_2e8 = 1.0;
  local_2d0 = param_3;
  for (local_2e4 = param_3; local_2f0 = piVar19, local_2e4 < param_4 + param_3;
      local_2e4 = local_2e4 + 1) {
    sVar29 = param_2[local_2e4];
    cVar13 = FText::IsWhitespace(sVar29);
    if (cVar13 != '\0') {
      sVar29 = 0x20;
    }
    local_2cc = 1.0;
    lVar20 = FUN_141837770(*(undefined8 *)(param_1 + 0x18),param_5,sVar29,&local_2cc);
    local_318 = (longlong *)CONCAT71(local_318._1_7_,*(undefined1 *)(param_5 + 0x4c));
    FUN_141838450(*(undefined8 *)(param_1 + 0x20),&local_218,lVar20,sVar29);
    if (local_218 == 0) {
      lVar20 = FUN_141837770(*(undefined8 *)(param_1 + 0x18),param_5,0xfffd,&local_2cc);
      local_318 = (longlong *)CONCAT71(local_318._1_7_,*(undefined1 *)(param_5 + 0x4c));
      plVar21 = (longlong *)FUN_141838450(*(undefined8 *)(param_1 + 0x20),local_158,lVar20,0xfffd);
      if (&local_218 != plVar21) {
        local_218 = *plVar21;
        *plVar21 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_210,plVar21 + 1);
      }
      plVar21 = local_150;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_150 + 1;
        lVar24 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar19 = (int *)((longlong)plVar21 + 0xc);
          iVar37 = *piVar19;
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (iVar37 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
    }
    uVar38 = local_2b8;
    if (local_290 == 0) {
LAB_141850792:
      plVar21 = plStack_270;
      local_2d0 = local_2e4;
      if (local_210[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(local_210[0] + 1) = (int)local_210[0][1] + 1;
        UNLOCK();
      }
      local_1d0 = local_278;
      plStack_1c8 = plStack_270;
      local_e8 = local_218;
      plStack_e0 = local_210[0];
      local_278 = local_218;
      plStack_270 = local_210[0];
      local_290 = lVar20;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar21 + 1;
        lVar20 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar19 = (int *)((longlong)plVar21 + 0xc);
          iVar37 = *piVar19;
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (iVar37 == 1) {
            (**(code **)(*plStack_1c8 + 8))(plStack_1c8,1);
          }
        }
      }
      local_2e8 = local_2cc;
    }
    else if (((local_290 != lVar20) || (local_278 != local_218)) || (local_2e8 != local_2cc)) {
      lVar24 = (longlong)(int)local_2b8;
      iVar30 = local_2e4 - local_2d0;
      iVar37 = (int)local_2b8 + 1;
      local_2b8 = CONCAT44(local_2b8._4_4_,iVar37);
      if (local_2b8._4_4_ < iVar37) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_2c0,uVar38 & 0xffffffff);
      }
      local_168 = local_278;
      plStack_160 = plStack_270;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
        UNLOCK();
      }
      local_318 = &local_168;
      local_310 = (longlong **)CONCAT44(local_310._4_4_,local_2e8);
      `anonymous_namespace'::FHarfBuzzTextSequenceEntry::FHarfBuzzTextSequenceEntry
                (local_2c0 + lVar24 * 0xe,local_2d0,iVar30,local_290);
      local_290 = 0;
      local_1d8 = (longlong *)0x0;
      local_278 = 0;
      local_1e0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_270,&local_1d8);
      plVar21 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1d8 + 1;
        lVar24 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar19 = (int *)((longlong)plVar21 + 0xc);
          iVar37 = *piVar19;
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (iVar37 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
      local_2e8 = 1.0;
      param_5 = local_280;
      goto LAB_141850792;
    }
    plVar21 = local_210[0];
    if (local_210[0] != (longlong *)0x0) {
      LOCK();
      plVar9 = local_210[0] + 1;
      lVar20 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_210[0])(local_210[0]);
        LOCK();
        piVar19 = (int *)((longlong)plVar21 + 0xc);
        iVar37 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar37 == 1) {
          (**(code **)(*local_210[0] + 8))(local_210[0],1);
        }
      }
    }
    piVar19 = local_2f0;
    param_8 = local_2a0;
  }
  FUN_1417f9eb0(&local_198);
  plVar21 = plStack_270;
  if (plStack_270 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_270 + 1;
    lVar20 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plStack_270)(plStack_270);
      LOCK();
      piVar27 = (int *)((longlong)plVar21 + 0xc);
      iVar37 = *piVar27;
      *piVar27 = *piVar27 + -1;
      UNLOCK();
      if (iVar37 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  piVar27 = local_2c0 + (longlong)(int)local_2b8 * 0xe;
  local_2d8 = piVar27;
  iVar37 = (int)local_2b8;
  if (local_2c0 != piVar27) {
    piVar39 = local_2c0 + 0xc;
    iVar37 = local_138;
    do {
      iVar30 = piVar39[-0xc];
      bVar10 = false;
      local_2c8 = piVar39[-0xb] + iVar30;
      local_134 = 0;
      iVar33 = iVar30;
      local_288 = iVar30;
      local_268 = iVar30;
      if (iVar30 < (int)local_2c8) {
        do {
          iVar17 = hb_unicode_script(piVar19,param_2[iVar33]);
          iVar41 = iVar33;
          iVar12 = iVar33;
          local_1a0 = iVar17;
          if (bVar10) {
            if (((iVar37 != iVar17) && (iVar17 != 0x5a797979)) &&
               ((iVar17 != 0x5a696e68 && (iVar17 != 0x5a7a7a7a)))) {
              iVar41 = iVar30;
              iVar12 = local_288;
              if (((iVar37 != 0x5a797979) && (iVar37 != 0x5a696e68)) && (iVar37 != 0x5a7a7a7a)) {
                iVar41 = *piVar39;
                lVar20 = (longlong)iVar41;
                *piVar39 = iVar41 + 1;
                if (piVar39[1] < iVar41 + 1) {
                  TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
                  ::ResizeGrow(piVar39 + -2,iVar41);
                }
                lVar24 = *(longlong *)(piVar39 + -2);
                *(int *)(lVar24 + 4 + lVar20 * 0xc) = iVar33 - iVar30;
                *(int *)(lVar24 + lVar20 * 0xc) = iVar30;
                *(int *)(lVar24 + 8 + lVar20 * 0xc) = iVar37;
                param_2 = local_2a8;
                iVar41 = iVar33;
                iVar12 = iVar33;
              }
              goto LAB_1418509c8;
            }
          }
          else {
LAB_1418509c8:
            local_288 = iVar12;
            bVar10 = true;
            local_134 = 1;
            iVar37 = iVar17;
            iVar30 = iVar41;
            local_138 = iVar17;
          }
          iVar33 = iVar33 + 1;
          piVar19 = local_2f0;
        } while (iVar33 < (int)local_2c8);
        piVar27 = local_2d8;
        local_268 = iVar33;
        if (bVar10) {
          iVar41 = *piVar39;
          lVar20 = (longlong)iVar41;
          *piVar39 = iVar41 + 1;
          if (piVar39[1] < iVar41 + 1) {
            TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
            ::ResizeGrow(piVar39 + -2,iVar41);
          }
          lVar24 = *(longlong *)(piVar39 + -2);
          *(int *)(lVar24 + lVar20 * 0xc) = iVar30;
          *(int *)(lVar24 + 4 + lVar20 * 0xc) = iVar33 - iVar30;
          *(int *)(lVar24 + 8 + lVar20 * 0xc) = iVar37;
          piVar27 = local_2d8;
        }
      }
      piVar2 = piVar39 + 2;
      piVar19 = local_2f0;
      piVar39 = piVar39 + 0xe;
    } while (piVar2 != piVar27);
    iVar37 = (int)local_2b8;
    param_8 = local_2a0;
  }
  if ((local_2f8 == '\x01') && (0 < iVar37 / 2)) {
    uVar38 = (ulonglong)(uint)(iVar37 / 2);
    piVar19 = local_2c0;
    do {
      iVar37 = iVar37 + -1;
      piVar27 = local_2c0 + (longlong)iVar37 * 0xe;
      if (piVar19 != piVar27) {
        uVar22 = *(undefined8 *)(piVar27 + 2);
        local_120 = *(undefined8 *)piVar19;
        uStack_118 = *(undefined8 *)(piVar19 + 2);
        local_110 = *(undefined8 *)(piVar19 + 4);
        uStack_108 = *(undefined8 *)(piVar19 + 6);
        local_100 = *(undefined8 *)(piVar19 + 8);
        uStack_f8 = *(undefined8 *)(piVar19 + 10);
        local_f0 = *(undefined8 *)(piVar19 + 0xc);
        *(undefined8 *)piVar19 = *(undefined8 *)piVar27;
        *(undefined8 *)(piVar19 + 2) = uVar22;
        uVar22 = *(undefined8 *)(piVar27 + 6);
        *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar27 + 4);
        *(undefined8 *)(piVar19 + 6) = uVar22;
        uVar22 = *(undefined8 *)(piVar27 + 10);
        *(undefined8 *)(piVar19 + 8) = *(undefined8 *)(piVar27 + 8);
        *(undefined8 *)(piVar19 + 10) = uVar22;
        *(undefined8 *)(piVar19 + 0xc) = *(undefined8 *)(piVar27 + 0xc);
        *(undefined8 *)piVar27 = local_120;
        *(undefined8 *)(piVar27 + 2) = uStack_118;
        *(undefined8 *)(piVar27 + 4) = local_110;
        *(undefined8 *)(piVar27 + 6) = uStack_108;
        *(undefined8 *)(piVar27 + 8) = local_100;
        *(undefined8 *)(piVar27 + 10) = uStack_f8;
        *(undefined8 *)(piVar27 + 0xc) = local_f0;
      }
      piVar19 = piVar19 + 0xe;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
  }
  lVar20 = param_8[1];
  local_25c = (int)lVar20;
  uVar22 = hb_buffer_create();
  local_1a8 = local_2c0 + (longlong)(int)local_2b8 * 0xe;
  iVar37 = (int)lVar20;
  local_1b8 = uVar22;
  if (local_2c0 != local_1a8) {
    local_2f0 = local_2c0 + 0xc;
    do {
      fVar43 = param_6 * (float)local_2f0[-4];
      uVar18 = 8;
      if (DAT_1464b9ee0 == 0) {
LAB_141850c15:
        uVar18 = 0x20028;
      }
      else {
        lVar20 = *(longlong *)(*(longlong *)(local_2f0 + -10) + 0x18);
        if (lVar20 == 0) {
          cVar13 = *(char *)(*(longlong *)(local_2f0 + -10) + 0x10);
        }
        else {
          uVar23 = UFontFaceInterface::GetPrivateStaticClass();
          plVar21 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar20,uVar23);
          cVar13 = (**(code **)(*plVar21 + 0x18))(plVar21);
        }
        if (cVar13 == '\x01') {
          uVar18 = 0x28;
        }
        else if (cVar13 == '\x02') {
          uVar18 = 0x10008;
        }
        else {
          if (cVar13 == '\x03') goto LAB_141850c15;
          if (cVar13 == '\x04') {
            uVar18 = 0x800a;
          }
        }
      }
      piVar19 = local_2f0;
      plStack_220 = (longlong *)operator_new(0x30);
      lVar20 = local_280;
      if (plStack_220 == (longlong *)0x0) {
        plStack_220 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plStack_220 + 1) = 1;
        *(undefined4 *)((longlong)plStack_220 + 0xc) = 1;
        *plStack_220 = (longlong)&PTR_FUN_144d501d8;
        lVar24 = *(longlong *)(piVar19 + -6);
        lVar32 = *(longlong *)(piVar19 + -8);
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 0xc) = *(int *)(lVar24 + 0xc) + 1;
          UNLOCK();
        }
        uVar5 = *(undefined4 *)(local_280 + 0x48);
        plStack_220[2] = lVar32;
        plStack_220[3] = lVar24;
        *(float *)(plStack_220 + 5) = fVar43;
        *(undefined4 *)(plStack_220 + 4) = uVar18;
        *(undefined4 *)((longlong)plStack_220 + 0x24) = uVar5;
      }
      piVar27 = (int *)0x0;
      local_228 = plStack_220 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_228,local_228,local_228);
      plVar21 = *(longlong **)(piVar19 + -8);
      if (plVar21 != (longlong *)0x0) {
        iVar37 = *(int *)(lVar20 + 0x48);
        local_318._0_4_ = 0x60;
        local_d4 = *(uint *)(*plVar21 + 8) >> 6;
        local_264 = local_d4 & 0xffffff01;
        local_d8 = 0x6b65726e;
        local_d4 = local_d4 & 1;
        local_d0 = 0;
        local_cc = 0xffffffff;
        lVar20 = *plVar21;
        FUN_143c24370(lVar20,0,iVar37 << 6,0x60);
        if (fVar43 != 1.0) {
          local_130 = (int)(fVar43 * 65536.0);
          local_12c = 0;
          piVar27 = &local_130;
          local_124 = local_130;
        }
        FUN_143c24580(lVar20,piVar27,0);
        lVar20 = hb_ft_font_create(lVar20,0);
        hb_ft_font_set_load_flags(lVar20,uVar18);
        iVar30 = (int)(fVar43 * 65536.0);
        uVar18 = FUN_143c22100(*(undefined4 *)(lVar20 + 0x88),iVar30);
        *(undefined4 *)(lVar20 + 0x88) = uVar18;
        uVar18 = FUN_143c22100(*(undefined4 *)(lVar20 + 0x8c),iVar30);
        *(undefined4 *)(lVar20 + 0x8c) = uVar18;
        uVar23 = hb_font_create_sub_font(lVar20);
        local_258 = uVar23;
        hb_font_destroy(lVar20);
        lVar20 = local_298;
        hb_font_set_funcs(uVar23,*(undefined8 *)(local_298 + 0x60),0,0);
        uVar23 = *(undefined8 *)(lVar20 + 0x58);
        uVar6 = *(undefined8 *)(lVar20 + 0x50);
        uVar7 = *(undefined8 *)(lVar20 + 0x48);
        piVar19 = (int *)operator_new(0x20);
        uVar34 = local_258;
        if (piVar19 != (int *)0x0) {
          piVar19[1] = (int)fVar43;
          *piVar19 = iVar37;
          *(undefined8 *)(piVar19 + 2) = uVar7;
          *(undefined8 *)(piVar19 + 4) = uVar6;
          *(undefined8 *)(piVar19 + 6) = uVar23;
        }
        local_318 = (longlong *)CONCAT44(local_318._4_4_,1);
        hb_font_set_user_data(local_258,&DAT_1469eaf20,piVar19,&LAB_14182af00);
        puVar40 = *(undefined4 **)(local_2f0 + -2);
        local_1b0 = puVar40 + (longlong)*local_2f0 * 3;
        local_1f0 = puVar40;
        if (puVar40 != local_1b0) {
          local_260 = (local_2f8 != '\0') + 4;
          do {
            iVar37 = local_260;
            local_1f0 = puVar40;
            hb_buffer_set_cluster_level(uVar22,0);
            hb_buffer_set_direction(uVar22,iVar37);
            hb_buffer_set_script(uVar22,puVar40[2]);
            local_238 = 0;
            uVar26 = 0;
            local_230 = 0;
            lVar24 = 0;
            if ((param_2 != (short *)0x0) && (lVar24 = 0, *param_2 != 0)) {
              lVar24 = -1;
              do {
                lVar32 = lVar24 + 1;
                lVar24 = lVar24 + 1;
              } while (param_2[lVar32] != 0);
              uVar31 = (int)lVar24 + 1;
              local_230 = (ulonglong)uVar31;
              uVar26 = uVar31;
              if (0 < (int)uVar31) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
                uVar26 = (uint)local_230;
              }
              lVar24 = local_238;
              FGenericPlatformString::Memcpy(local_238,param_2,(longlong)(int)uVar31 * 2);
              uVar34 = local_258;
            }
            iVar37 = uVar26 - 1;
            if (uVar26 == 0) {
              iVar37 = 0;
            }
            local_318 = (longlong *)CONCAT44(local_318._4_4_,puVar40[1]);
            hb_buffer_add_utf<hb_utf16_t>(uVar22,lVar24,iVar37,*puVar40);
            if (lVar24 != 0) {
              FMemory::Free(lVar24);
            }
            hb_shape(uVar34,uVar22,&local_d8,1);
            local_2e0[0] = 0;
            piVar19 = (int *)hb_buffer_get_glyph_infos(uVar22,local_2e0);
            local_2d8 = piVar19;
            local_1e8 = hb_buffer_get_glyph_positions(uVar22,local_2e0);
            plVar21 = local_2a0;
            if (*(int *)((longlong)local_2a0 + 0xc) < (int)((int)local_2a0[1] + local_2e0[0])) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeTo(local_2a0);
            }
            uVar38 = 0;
            local_2c8 = 0;
            if (local_2e0[0] != 0) {
              do {
                iVar37 = piVar19[uVar38 * 5 + 2];
                local_310 = &local_228;
                local_318 = (longlong *)CONCAT44(local_318._4_4_,param_6);
                sVar29 = param_2[iVar37];
                local_308 = plVar21;
                cVar13 = FUN_141846d90(lVar20,param_2,iVar37,local_280);
                if (cVar13 == '\0') {
                  if ((sVar29 == 0x200b) || (cVar13 = FText::IsWhitespace(sVar29), cVar13 != '\0'))
                  {
                    cVar13 = '\0';
                  }
                  else {
                    cVar13 = '\x01';
                  }
                  iVar30 = (int)plVar21[1];
                  *(int *)(plVar21 + 1) = iVar30 + 1;
                  if (*(int *)((longlong)plVar21 + 0xc) < iVar30 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar21);
                  }
                  lVar20 = *plVar21;
                  lVar24 = (longlong)iVar30 * 0x68;
                  *(undefined8 *)(lVar24 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 8 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x10 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x18 + lVar20) = 0;
                  *(undefined4 *)(lVar24 + 0x20 + lVar20) = 0;
                  *(undefined1 *)(lVar24 + 0x24 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x28 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x30 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x38 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x40 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x48 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x50 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x58 + lVar20) = 0;
                  *(undefined8 *)(lVar24 + 0x60 + lVar20) = 0;
                  local_248 = local_228;
                  plStack_240 = plStack_220;
                  pplVar36 = (longlong **)(*plVar21 + lVar24);
                  if (plStack_220 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
                    UNLOCK();
                  }
                  if (pplVar36 != &local_248) {
                    local_248 = (longlong *)0x0;
                    *pplVar36 = local_228;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(pplVar36 + 1);
                  }
                  plVar21 = plStack_240;
                  if (plStack_240 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = plStack_240 + 1;
                    lVar20 = *plVar9;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)lVar20 == 1) {
                      (**(code **)*plStack_240)(plStack_240);
                      LOCK();
                      piVar19 = (int *)((longlong)plVar21 + 0xc);
                      iVar33 = *piVar19;
                      *piVar19 = *piVar19 + -1;
                      UNLOCK();
                      if (iVar33 == 1) {
                        (**(code **)(*plStack_240 + 8))();
                      }
                    }
                  }
                  lVar20 = local_298;
                  *(int *)(pplVar36 + 2) = local_2d8[uVar38 * 5];
                  *(int *)((longlong)pplVar36 + 0x14) = iVar37;
                  if (sVar29 == 0x200b) {
                    uVar14 = 0;
                  }
                  else {
                    fVar42 = (float)*(int *)(local_1e8 + uVar38 * 0x14) * 0.015625;
                    uVar14 = (undefined2)((int)ROUND(fVar42 + fVar42 + 0.5) >> 1);
                  }
                  *(undefined2 *)(pplVar36 + 3) = uVar14;
                  sVar16 = 0;
                  sVar15 = sVar16;
                  if (sVar29 != 0x200b) {
                    fVar42 = (float)*(int *)(local_1e8 + 4 + uVar38 * 0x14) * 0.015625;
                    sVar15 = -(short)((int)ROUND(fVar42 + fVar42 + 0.5) >> 1);
                  }
                  *(short *)((longlong)pplVar36 + 0x1a) = sVar15;
                  sVar15 = sVar16;
                  if (sVar29 != 0x200b) {
                    fVar42 = (float)*(int *)(local_1e8 + 8 + uVar38 * 0x14) * 0.015625;
                    sVar15 = (short)((int)ROUND(fVar42 + fVar42 + 0.5) >> 1);
                  }
                  *(short *)((longlong)pplVar36 + 0x1c) = sVar15;
                  if (sVar29 != 0x200b) {
                    fVar42 = (float)*(int *)(local_1e8 + 0xc + uVar38 * 0x14) * 0.015625;
                    sVar16 = -(short)((int)ROUND(fVar42 + fVar42 + 0.5) >> 1);
                  }
                  *(short *)((longlong)pplVar36 + 0x1e) = sVar16;
                  *(char *)((longlong)pplVar36 + 0x23) = local_2f8;
                  *(undefined2 *)(pplVar36 + 4) = 0;
                  *(undefined1 *)((longlong)pplVar36 + 0x22) = 0;
                  *(char *)((longlong)pplVar36 + 0x24) = cVar13;
                  piVar19 = local_2d8;
                  param_2 = local_2a8;
                  if (((0 < iVar30) && ((char)local_264 != '\0')) && (cVar13 != '\0')) {
                    lVar32 = (longlong)iVar30 * 0x68;
                    lVar24 = *local_2a0;
                    local_1f8 = *(undefined4 *)(lVar32 + -0x58 + lVar24);
                    local_1f4 = *(undefined4 *)(pplVar36 + 2);
                    local_308 = (longlong *)local_1c0;
                    local_310 = (longlong **)CONCAT44(local_310._4_4_,fVar43);
                    local_318 = (longlong *)
                                CONCAT44(local_318._4_4_,*(undefined4 *)(local_280 + 0x48));
                    cVar13 = FFreeTypeKerningPairCache::FindOrCache
                                       (*(undefined8 *)(local_298 + 0x10),
                                        **(undefined8 **)(local_2f0 + -8),&local_1f8,0);
                    piVar19 = local_2d8;
                    param_2 = local_2a8;
                    if (cVar13 != '\0') {
                      *(char *)(lVar32 + -0x48 + lVar24) =
                           (char)((int)ROUND((float)local_1c0[0] * 0.015625 +
                                             (float)local_1c0[0] * 0.015625 + 0.5) >> 1);
                    }
                  }
                }
                local_2c8 = local_2c8 + 1;
                uVar38 = (ulonglong)local_2c8;
                plVar21 = local_2a0;
                uVar34 = local_258;
                uVar22 = local_1b8;
                puVar40 = local_1f0;
              } while (local_2c8 < local_2e0[0]);
            }
            hb_buffer_t::clear(uVar22);
            puVar40 = puVar40 + 3;
            local_1f0 = puVar40;
          } while (puVar40 != local_1b0);
        }
        piVar19 = local_2f0;
        hb_font_destroy(uVar34);
      }
      plVar21 = plStack_220;
      if (plStack_220 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_220 + 1;
        lVar20 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_220)(plStack_220);
          LOCK();
          piVar27 = (int *)((longlong)plVar21 + 0xc);
          iVar37 = *piVar27;
          *piVar27 = *piVar27 + -1;
          UNLOCK();
          if (iVar37 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
      local_2f0 = piVar19 + 0xe;
      param_8 = local_2a0;
      iVar37 = local_25c;
    } while (piVar19 + 2 != local_1a8);
  }
  hb_buffer_destroy(uVar22);
  lVar20 = local_298;
  lVar24 = (longlong)(int)param_8[1];
  if (0 < (int)param_8[1] - iVar37) {
    iVar30 = local_284;
    if (local_2f8 != '\0') {
      iVar30 = -1;
    }
    lVar35 = (longlong)iVar37;
    lVar32 = lVar35 * 0x68;
    iVar37 = -1;
    if (local_2f8 != '\0') {
      iVar37 = local_284;
    }
    iVar37 = (iVar37 - *(int *)(lVar32 + 0x14 + *param_8)) + local_2b0;
    bVar4 = (byte)(iVar37 >> 0x1f);
    *(byte *)(lVar32 + 0x21 + *param_8) = ((byte)iVar37 ^ bVar4) - bVar4;
    lVar28 = lVar35;
joined_r0x000141851390:
    lVar11 = lVar28;
    if (lVar11 < lVar24) {
      lVar8 = *param_8;
      lVar28 = lVar11 + 1;
      if (lVar28 < lVar24) {
        iVar37 = *(int *)(lVar11 * 0x68 + 0x14 + lVar8);
        piVar19 = (int *)(lVar8 + 0x14 + lVar28 * 0x68);
        do {
          if (iVar37 != *piVar19) {
            if (lVar28 < lVar24) {
              lVar25 = lVar28;
              if (local_2f8 == '\0') {
                lVar25 = lVar11;
              }
              if (*(char *)(lVar25 * 0x68 + 0x21 + lVar8) == '\0') {
                iVar37 = *(int *)(lVar28 * 0x68 + 0x14 + lVar8) - iVar37;
                bVar4 = (byte)(iVar37 >> 0x1f);
                *(byte *)(lVar25 * 0x68 + 0x21 + lVar8) = ((byte)iVar37 ^ bVar4) - bVar4;
              }
            }
            break;
          }
          lVar28 = lVar28 + 1;
          piVar19 = piVar19 + 0x1a;
        } while (lVar28 < lVar24);
      }
      goto joined_r0x000141851390;
    }
    if (local_2f8 == '\0') {
      iVar37 = (iVar30 + local_2b0) - *(int *)(lVar24 * 0x68 + -0x54 + *param_8);
      bVar4 = (byte)(iVar37 >> 0x1f);
      *(byte *)(lVar24 * 0x68 + -0x47 + *param_8) = ((byte)iVar37 ^ bVar4) - bVar4;
    }
    (**(code **)(**(longlong **)(local_298 + 0x38) + 8))
              (*(longlong **)(local_298 + 0x38),param_2 + local_2b0,local_284);
    if (lVar35 < (int)param_8[1]) {
      lVar35 = (int)param_8[1] - lVar35;
      do {
        lVar24 = *param_8;
        bVar4 = *(byte *)(lVar32 + 0x21 + lVar24);
        if ((bVar4 != 0) && (*(char *)(lVar32 + 0x22 + lVar24) == '\0')) {
          iVar37 = *(int *)(lVar32 + 0x14 + lVar24);
          iVar33 = (uint)bVar4 - local_2b0;
          iVar30 = (**(code **)(**(longlong **)(lVar20 + 0x38) + 0x58))
                             (*(longlong **)(lVar20 + 0x38),iVar37 - local_2b0);
          while ((iVar30 != -1 && (iVar30 <= iVar33 + iVar37))) {
            pcVar3 = (char *)(lVar32 + 0x22 + lVar24);
            *pcVar3 = *pcVar3 + '\x01';
            iVar30 = (**(code **)(**(longlong **)(lVar20 + 0x38) + 0x48))();
          }
        }
        lVar32 = lVar32 + 0x68;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
    (**(code **)(**(longlong **)(lVar20 + 0x38) + 0x20))();
  }
  if ((int)local_2b8 != 0) {
    plVar21 = (longlong *)(local_2c0 + 6);
    iVar37 = (int)local_2b8;
    do {
      if (plVar21[2] != 0) {
        FMemory::Free();
      }
      plVar9 = (longlong *)*plVar21;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar20 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar19 = (int *)((longlong)plVar9 + 0xc);
          iVar30 = *piVar19;
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (iVar30 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar21 = plVar21 + 7;
      iVar37 = iVar37 + -1;
    } while (iVar37 != 0);
  }
  if (local_2c0 != (int *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141851590 FUN_141851590 body=2527 status=ok
// SIG undefined FUN_141851590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141851590(longlong param_1,longlong param_2,int param_3,uint param_4,longlong param_5,
                  float param_6,longlong *param_7)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  char cVar14;
  undefined2 uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong **pplVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong **local_220;
  longlong *local_218;
  char local_208;
  undefined4 local_204;
  float local_200;
  int local_1fc;
  int local_1f8;
  float local_1f4;
  uint local_1f0;
  uint local_1ec;
  longlong *local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  int local_1c8 [2];
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1a8;
  longlong *plStack_1a0;
  int local_198;
  longlong *local_188;
  longlong *plStack_180;
  longlong *local_178;
  longlong *plStack_170;
  longlong local_168;
  longlong *local_160 [3];
  longlong local_148;
  undefined4 local_140;
  int local_13c;
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  int local_118 [2];
  longlong *local_110;
  longlong *local_108;
  longlong **local_100;
  int *local_f8;
  int *local_f0;
  longlong *local_e8;
  float *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong local_a8;
  longlong *plStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_108 = &local_1e0;
  local_100 = &local_1d8;
  local_f8 = &local_1f8;
  local_f0 = &local_1fc;
  local_e8 = &local_1a8;
  iVar20 = param_4 + param_3;
  local_e0 = &local_200;
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_1e0 = 0;
  local_1a8 = 0;
  plStack_1a0 = (longlong *)0x0;
  local_200 = 1.0;
  local_1b8 = param_1;
  local_148 = param_2;
  local_1c0 = param_5;
  local_1f8 = param_3;
  for (local_1fc = param_3; local_1f0 = param_4, local_1e8 = param_7, local_1fc < iVar20;
      local_1fc = local_1fc + 1) {
    uVar15 = *(undefined2 *)(param_2 + (longlong)local_1fc * 2);
    cVar5 = FText::IsWhitespace(uVar15);
    if (cVar5 != '\0') {
      uVar15 = 0x20;
    }
    local_1f4 = 1.0;
    lVar8 = FUN_141837770(*(undefined8 *)(param_1 + 0x18),param_5,uVar15,&local_1f4);
    local_228 = (longlong *)CONCAT71(local_228._1_7_,*(undefined1 *)(param_5 + 0x4c));
    FUN_141838450(*(undefined8 *)(param_1 + 0x20),&local_168,lVar8,uVar15);
    if (local_168 == 0) {
      lVar8 = FUN_141837770(*(undefined8 *)(param_1 + 0x18),param_5,0xfffd,&local_1f4);
      local_228 = (longlong *)CONCAT71(local_228._1_7_,*(undefined1 *)(param_5 + 0x4c));
      plVar9 = (longlong *)FUN_141838450(*(undefined8 *)(param_1 + 0x20),local_c8,lVar8,0xfffd);
      if (&local_168 != plVar9) {
        local_168 = *plVar9;
        *plVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_160,plVar9 + 1);
      }
      plVar9 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_c0 + 1;
        lVar12 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_c0)(local_c0);
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
    }
    uVar18 = local_1d0;
    if (local_1e0 == 0) {
LAB_141851887:
      plVar9 = plStack_1a0;
      local_1f8 = local_1fc;
      if (local_160[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(local_160[0] + 1) = (int)local_160[0][1] + 1;
        UNLOCK();
      }
      local_128 = local_1a8;
      plStack_120 = plStack_1a0;
      local_a8 = local_168;
      plStack_a0 = local_160[0];
      local_1a8 = local_168;
      plStack_1a0 = local_160[0];
      local_1e0 = lVar8;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar9 + 1;
        lVar8 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plStack_120 + 8))(plStack_120,1);
          }
        }
      }
      local_200 = local_1f4;
    }
    else if (((local_1e0 != lVar8) || (local_1a8 != local_168)) || (local_200 != local_1f4)) {
      lVar12 = (longlong)(int)local_1d0;
      iVar16 = local_1fc - local_1f8;
      iVar7 = (int)local_1d0 + 1;
      local_1d0 = CONCAT44(local_1d0._4_4_,iVar7);
      if (local_1d0._4_4_ < iVar7) {
        FUN_140d979d0(&local_1d8,uVar18 & 0xffffffff);
      }
      local_d8 = local_1a8;
      plStack_d0 = plStack_1a0;
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
        UNLOCK();
      }
      local_228 = &local_d8;
      local_220 = (longlong **)CONCAT44(local_220._4_4_,local_200);
      `anonymous_namespace'::FKerningOnlyTextSequenceEntry::FKerningOnlyTextSequenceEntry
                (local_1d8 + lVar12 * 5,local_1f8,iVar16,local_1e0);
      local_1e0 = 0;
      local_130 = (longlong *)0x0;
      local_1a8 = 0;
      local_138 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1a0,&local_130);
      plVar9 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_130 + 1;
        lVar12 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      local_200 = 1.0;
      goto LAB_141851887;
    }
    plVar9 = local_160[0];
    if (local_160[0] != (longlong *)0x0) {
      LOCK();
      plVar13 = local_160[0] + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_160[0])(local_160[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_160[0] + 8))(local_160[0],1);
        }
      }
    }
    param_4 = local_1f0;
    param_7 = local_1e8;
  }
  FUN_1417fc970(&local_108);
  plVar9 = plStack_1a0;
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_1a0 + 1;
    lVar8 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1a0)(plStack_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (*(int *)((longlong)param_7 + 0xc) < (int)((int)param_7[1] + param_4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_7);
  }
  uVar18 = (ulonglong)(int)local_1d0;
  local_110 = local_1d8 + uVar18 * 5;
  if (local_1d8 != local_110) {
    plVar9 = local_1d8 + 2;
    do {
      plVar13 = (longlong *)0x0;
      fVar23 = param_6 * *(float *)(plVar9 + 2);
      uVar21 = 8;
      local_204 = 8;
      if (DAT_1464b9ee0 == 0) {
LAB_141851ac0:
        uVar21 = 0x20028;
        local_204 = uVar21;
      }
      else {
        lVar8 = *(longlong *)(plVar9[-1] + 0x18);
        if (lVar8 == 0) {
          cVar5 = *(char *)(plVar9[-1] + 0x10);
        }
        else {
          uVar10 = UFontFaceInterface::GetPrivateStaticClass();
          plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar10);
          cVar5 = (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        if (cVar5 == '\x01') {
          uVar21 = 0x28;
          local_204 = uVar21;
        }
        else if (cVar5 == '\x02') {
          uVar21 = 0x10008;
          local_204 = uVar21;
        }
        else {
          if (cVar5 == '\x03') goto LAB_141851ac0;
          if (cVar5 == '\x04') {
            uVar21 = 0x800a;
            local_204 = uVar21;
          }
        }
      }
      plVar11 = (longlong *)operator_new(0x30);
      plStack_170 = plVar13;
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_144d501d8;
        lVar8 = plVar9[1];
        lVar12 = *plVar9;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
          UNLOCK();
        }
        uVar4 = *(undefined4 *)(param_5 + 0x48);
        plVar11[2] = lVar12;
        plVar11[3] = lVar8;
        *(float *)(plVar11 + 5) = fVar23;
        *(undefined4 *)(plVar11 + 4) = uVar21;
        *(undefined4 *)((longlong)plVar11 + 0x24) = uVar4;
        plStack_170 = plVar11;
      }
      local_178 = plStack_170 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_178,local_178,local_178);
      if ((longlong *)*plVar9 != (longlong *)0x0) {
        local_1f0 = 0;
        local_1ec = *(uint *)(*(longlong *)*plVar9 + 8) >> 6 & 0xffffff01;
        if (0 < *(int *)((longlong)plVar9 + -0xc)) {
          do {
            cVar14 = (char)local_1ec;
            local_198 = (int)plVar13 + (int)plVar9[-2];
            sVar3 = *(short *)(local_148 + (longlong)local_198 * 2);
            local_220 = &local_178;
            local_228 = (longlong *)CONCAT44(local_228._4_4_,param_6);
            local_218 = param_7;
            cVar5 = FUN_141846d90(param_1,local_148,local_198,param_5);
            if (cVar5 == '\0') {
              if (sVar3 == 0x200b) {
LAB_141851bb8:
                local_208 = '\0';
              }
              else {
                cVar5 = FText::IsWhitespace(sVar3);
                local_208 = '\x01';
                if (cVar5 != '\0') goto LAB_141851bb8;
              }
              iVar20 = FT_Get_Char_Index(*(undefined8 *)*plVar9);
              if ((sVar3 != 0) && (iVar20 == 0)) {
                iVar20 = FT_Get_Char_Index(*(undefined8 *)*plVar9);
              }
              uVar15 = 0;
              if (sVar3 != 0x200b) {
                local_1c8[0] = 0;
                local_218 = (longlong *)local_1c8;
                local_220 = (longlong **)CONCAT44(local_220._4_4_,fVar23);
                local_228 = (longlong *)CONCAT44(local_228._4_4_,*(undefined4 *)(local_1c0 + 0x48));
                cVar5 = FFreeTypeAdvanceCache::FindOrCache
                                  (*(undefined8 *)(local_1b8 + 8),*(undefined8 *)*plVar9,iVar20,
                                   uVar21);
                if (cVar5 != '\0') {
                  fVar22 = (float)(local_1c8[0] + 0x200 >> 10) * 0.015625;
                  uVar15 = (undefined2)((int)ROUND(fVar22 + fVar22 + 0.5) >> 1);
                }
              }
              iVar7 = (int)param_7[1];
              *(int *)(param_7 + 1) = iVar7 + 1;
              if (*(int *)((longlong)param_7 + 0xc) < iVar7 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
                ResizeGrow(param_7);
              }
              lVar8 = *param_7;
              lVar12 = (longlong)iVar7 * 0x68;
              *(undefined8 *)(lVar12 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 8 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x10 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x18 + lVar8) = 0;
              *(undefined4 *)(lVar12 + 0x20 + lVar8) = 0;
              *(undefined1 *)(lVar12 + 0x24 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x28 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x30 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x38 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x40 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x48 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x50 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x58 + lVar8) = 0;
              *(undefined8 *)(lVar12 + 0x60 + lVar8) = 0;
              local_188 = local_178;
              plStack_180 = plStack_170;
              pplVar19 = (longlong **)(*param_7 + lVar12);
              if (plStack_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
                UNLOCK();
              }
              if (pplVar19 != &local_188) {
                local_188 = (longlong *)0x0;
                *pplVar19 = local_178;
                SharedPointerInternals::FSharedReferencer<1>::operator=(pplVar19 + 1,&plStack_180);
              }
              plVar13 = plStack_180;
              if (plStack_180 != (longlong *)0x0) {
                LOCK();
                plVar11 = plStack_180 + 1;
                lVar8 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plStack_180)();
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar16 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar16 == 1) {
                    (**(code **)(*plStack_180 + 8))(plStack_180,1);
                  }
                  cVar14 = (char)local_1ec;
                }
              }
              param_1 = local_1b8;
              param_5 = local_1c0;
              *(int *)((longlong)pplVar19 + 0x14) = local_198;
              *(int *)(pplVar19 + 2) = iVar20;
              *(undefined4 *)((longlong)pplVar19 + 0x1a) = 0;
              uVar6 = 0;
              if (sVar3 != 0x200b) {
                uVar6 = uVar15;
              }
              *(undefined4 *)((longlong)pplVar19 + 0x1e) = 0x1000000;
              *(undefined2 *)(pplVar19 + 3) = uVar6;
              *(char *)((longlong)pplVar19 + 0x24) = local_208;
              *(undefined2 *)((longlong)pplVar19 + 0x22) = 1;
              param_7 = local_1e8;
              if (((0 < iVar7) && (cVar14 != '\0')) && (local_208 != '\0')) {
                lVar8 = *local_1e8;
                lVar12 = (longlong)iVar7 * 0x68;
                local_140 = *(undefined4 *)(lVar12 + -0x58 + lVar8);
                local_218 = (longlong *)local_118;
                local_220 = (longlong **)CONCAT44(local_220._4_4_,fVar23);
                local_228 = (longlong *)CONCAT44(local_228._4_4_,*(undefined4 *)(local_1c0 + 0x48));
                local_13c = iVar20;
                cVar5 = FFreeTypeKerningPairCache::FindOrCache
                                  (*(undefined8 *)(local_1b8 + 0x10),*(undefined8 *)*plVar9,
                                   &local_140,0);
                param_7 = local_1e8;
                if (cVar5 != '\0') {
                  cVar5 = (char)((int)ROUND((float)local_118[0] * 0.015625 +
                                            (float)local_118[0] * 0.015625 + 0.5) >> 1);
                  psVar2 = (short *)(lVar12 + -0x50 + lVar8);
                  *psVar2 = *psVar2 + (short)cVar5;
                  *(char *)(lVar12 + -0x48 + lVar8) = cVar5;
                }
              }
            }
            local_1f0 = local_1f0 + 1;
            plVar13 = (longlong *)(ulonglong)local_1f0;
            uVar21 = local_204;
          } while ((int)local_1f0 < *(int *)((longlong)plVar9 + -0xc));
        }
      }
      plVar13 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_170 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar13 = plVar9 + 3;
      plVar9 = plVar9 + 5;
    } while (plVar13 != local_110);
    uVar18 = local_1d0 & 0xffffffff;
  }
  if ((int)uVar18 != 0) {
    plVar9 = local_1d8 + 3;
    do {
      plVar13 = (longlong *)*plVar9;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar13 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar9 = plVar9 + 5;
      uVar17 = (int)uVar18 - 1;
      uVar18 = (ulonglong)uVar17;
    } while (uVar17 != 0);
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  return;
}



// FUNCTION 141851f70 FUN_141851f70 body=385 status=ok
// SIG undefined FUN_141851f70(void)

void FUN_141851f70(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,char param_7,char param_8,undefined8 param_9)

{
  ushort uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 < 1) {
    return;
  }
  lVar3 = (longlong)param_3;
  if (param_8 == '\x02') {
LAB_14185208a:
    FUN_141850460(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
  }
  else {
    if (param_8 == '\0') {
      if (param_7 == '\x01') goto LAB_14185208a;
      lVar4 = lVar3;
      for (; lVar3 < param_3 + param_4; lVar3 = lVar3 + 1) {
        lVar4 = lVar4 + 1;
        uVar1 = *(ushort *)(param_2 + lVar3 * 2);
        if (uVar1 < 0x80) break;
        ppuVar2 = (undefined **)&DAT_144d4fc30;
        do {
          if ((*(ushort *)ppuVar2 <= uVar1) && (uVar1 <= *(ushort *)((longlong)ppuVar2 + 2)))
          goto LAB_14185208a;
          ppuVar2 = (undefined **)((longlong)ppuVar2 + 4);
        } while (ppuVar2 != &PTR__scalar_deleting_destructor__144d4fc80);
        if (((lVar4 < param_3 + param_4) && ((ushort)(uVar1 + 0x2800) < 0x400)) &&
           ((ushort)(*(short *)(param_2 + 2 + lVar3 * 2) + 0x2400U) < 0x400)) goto LAB_14185208a;
      }
    }
    FUN_141851590(param_1,param_2,param_3,param_4,param_5,param_6,param_9);
  }
  return;
}



// FUNCTION 141852100 FUN_141852100 body=123 status=ok
// SIG undefined FUN_141852100(void)

void FUN_141852100(longlong param_1,undefined8 *param_2,char param_3,float param_4)

{
  double dVar1;
  undefined8 local_28;
  longlong local_20;
  
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_141853ff0(param_1,&local_28);
  *(byte *)(param_1 + 0x54) = (*(byte *)(param_1 + 0x54) & 0xfd | param_3 * '\x02') & 0xfa;
  dVar1 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  *(double *)(param_1 + 0x40) = dVar1 - (double)param_4;
  return;
}



// FUNCTION 141852180 FUN_141852180 body=124 status=ok
// SIG undefined FUN_141852180(void)

void FUN_141852180(longlong param_1,undefined8 *param_2,char param_3,float param_4)

{
  double dVar1;
  undefined8 local_28;
  longlong local_20;
  
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_141853ff0(param_1,&local_28);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfd;
  *(byte *)(param_1 + 0x54) = (param_3 * '\x02' | *(byte *)(param_1 + 0x54)) & 0xfb | 1;
  dVar1 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  *(double *)(param_1 + 0x40) = dVar1 - (double)param_4;
  return;
}



// FUNCTION 141852200 PopClip body=12 status=ok
// SIG undefined PopClip(void)

void FHittestGrid::PopClip(longlong param_1)

{
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  return;
}



// FUNCTION 141852210 PopClip body=8 status=ok
// SIG undefined PopClip(void)

void FSlateClippingManager::PopClip(longlong param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  return;
}



// FUNCTION 141852220 PopClip body=15 status=ok
// SIG undefined PopClip(void)

void FSlateWindowElementList::PopClip(longlong param_1)

{
  *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  return;
}



// FUNCTION 141852230 FUN_141852230 body=797 status=ok
// SIG undefined FUN_141852230(void)

void FUN_141852230(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  local_a8 = 0;
  uVar10 = *(uint *)(param_1 + 0x9d0);
  puVar1 = (uint *)(param_1 + 0x9b8);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar10 != 0) {
    puVar14 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = *puVar14;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar13 == 0) {
      lVar6 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar12 = local_a8 + 1;
      bVar4 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar12;
      if (bVar4) goto LAB_1418522fd;
      uVar13 = puVar14[lVar6 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    iVar12 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_94 = (iStack_90 - iVar12) + 0x1f;
    if ((int)uVar10 < (int)uStack_94) {
LAB_1418522fd:
      uStack_94 = uVar10;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x9d0);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar13 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar10) {
    puVar14 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar5 = puVar14[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar12 = (int)uStack_74 >> 5;
    while (uVar5 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_1418523dd;
      uVar5 = puVar14[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_74 = (uVar13 - iVar12) + 0x1f;
    if ((int)uVar10 < (int)uStack_74) {
LAB_1418523dd:
      uStack_74 = uVar10;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar1))) {
    uStack_48 = uStack_48 & ~uStack_54;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x9a8) + (longlong)(int)uStack_44 * 0x28) + 0x10) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  plVar8 = (longlong *)(param_1 + 0xa18);
  plVar9 = (longlong *)*plVar8;
  uVar11 = (ulonglong)*(int *)(param_1 + 0xa20);
  plVar7 = plVar9 + uVar11 * 2;
  if (plVar9 != plVar7) {
    do {
      lVar6 = *plVar9;
      plVar9 = plVar9 + 2;
      LOCK();
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + -1;
      UNLOCK();
    } while (plVar9 != plVar7);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xa20);
  }
  iVar12 = *(int *)(param_1 + 0xa24);
  if (iVar12 < 0) {
    if ((int)uVar11 != 0) {
      plVar9 = (longlong *)(*plVar8 + 8);
      do {
        plVar7 = (longlong *)*plVar9;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar9 = plVar9 + 2;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
      iVar12 = *(int *)(param_1 + 0xa24);
    }
    *(undefined4 *)(param_1 + 0xa20) = 0;
    if (iVar12 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8,0);
    }
  }
  else {
    if ((int)uVar11 != 0) {
      plVar8 = (longlong *)(*plVar8 + 8);
      do {
        plVar9 = (longlong *)*plVar8;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar9 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar9)(plVar9);
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
        plVar8 = plVar8 + 2;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
    }
    *(undefined4 *)(param_1 + 0xa20) = 0;
  }
  *(undefined1 *)(param_1 + 0xaa0) = 0;
  return;
}



// FUNCTION 141852550 PostDraw_ParallelThread body=5 status=ok
// SIG undefined PostDraw_ParallelThread(void)

void FSlateWindowElementList::PostDraw_ParallelThread(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iStack_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uStack_a4 = 1;
  iStack_a8 = 0;
  uVar10 = *(uint *)(param_1 + 0x9d0);
  puVar1 = (uint *)(param_1 + 0x9b8);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar10 != 0) {
    puVar14 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = *puVar14;
    iStack_90 = 0;
    iStack_a8 = 0;
    while (uVar13 == 0) {
      lVar6 = (longlong)iStack_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar12 = iStack_a8 + 1;
      bVar4 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iStack_a8;
      iStack_a8 = iVar12;
      if (bVar4) goto LAB_1418522fd;
      uVar13 = puVar14[lVar6 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    iVar12 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_94 = (iStack_90 - iVar12) + 0x1f;
    if ((int)uVar10 < (int)uStack_94) {
LAB_1418522fd:
      uStack_94 = uVar10;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x9d0);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_40 = CONCAT44(uStack_8c,iStack_90);
  uVar13 = uStack_74 & 0xffffffe0;
  iStack_58 = iStack_a8;
  uStack_54 = uStack_a4;
  puStack_50 = puVar1;
  if (uStack_74 != uVar10) {
    puVar14 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar5 = puVar14[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar12 = (int)uStack_74 >> 5;
    while (uVar5 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_1418523dd;
      uVar5 = puVar14[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_74 = (uVar13 - iVar12) + 0x1f;
    if ((int)uVar10 < (int)uStack_74) {
LAB_1418523dd:
      uStack_74 = uVar10;
    }
  }
  while ((uStack_44 != uStack_74 || (puStack_50 != puVar1))) {
    uStack_48 = uStack_48 & ~uStack_54;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x9a8) + (longlong)(int)uStack_44 * 0x28) + 0x10) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  plVar8 = (longlong *)(param_1 + 0xa18);
  plVar9 = (longlong *)*plVar8;
  uVar11 = (ulonglong)*(int *)(param_1 + 0xa20);
  plVar7 = plVar9 + uVar11 * 2;
  if (plVar9 != plVar7) {
    do {
      lVar6 = *plVar9;
      plVar9 = plVar9 + 2;
      LOCK();
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + -1;
      UNLOCK();
    } while (plVar9 != plVar7);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xa20);
  }
  iVar12 = *(int *)(param_1 + 0xa24);
  if (iVar12 < 0) {
    if ((int)uVar11 != 0) {
      plVar9 = (longlong *)(*plVar8 + 8);
      do {
        plVar7 = (longlong *)*plVar9;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar9 = plVar9 + 2;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
      iVar12 = *(int *)(param_1 + 0xa24);
    }
    *(undefined4 *)(param_1 + 0xa20) = 0;
    if (iVar12 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8,0);
    }
  }
  else {
    if ((int)uVar11 != 0) {
      plVar8 = (longlong *)(*plVar8 + 8);
      do {
        plVar9 = (longlong *)*plVar8;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar9 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar9)(plVar9);
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
        plVar8 = plVar8 + 2;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
    }
    *(undefined4 *)(param_1 + 0xa20) = 0;
  }
  *(undefined1 *)(param_1 + 0xaa0) = 0;
  return;
}



// FUNCTION 141852560 FUN_141852560 body=507 status=ok
// SIG undefined FUN_141852560(void)

void FUN_141852560(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x9a8);
  uVar3 = *(uint *)(param_1 + 0x9d0);
  puVar1 = (uint *)(param_1 + 0x9b8);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_14185262d;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14185262d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x9d0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
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
    puVar10 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1418526f3;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1418526f3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    *(undefined8 *)(*(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x28) + 0x10) =
         *(undefined8 *)(*plVar2 + 0x10 + (longlong)(int)uStack_4c * 0x28);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141852760 FUN_141852760 body=9 status=ok
// SIG undefined FUN_141852760(void)

void FUN_141852760(longlong param_1)

{
  FUN_141852770(param_1 + 0x30);
  return;
}



// FUNCTION 141852770 FUN_141852770 body=1050 status=ok
// SIG undefined FUN_141852770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141852770(longlong *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  byte local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  char local_50;
  undefined8 *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 *puVar9;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  bVar3 = *(byte *)(param_2 + 8);
  iVar11 = (int)param_1[1];
  if ((bVar3 & 2) == 0) {
    pbVar5 = (byte *)0x0;
    if (-1 < iVar11 + -1) {
      lVar6 = (longlong)(iVar11 + -1);
      piVar7 = (int *)(*param_1 + lVar6 * 4);
      do {
        pbVar5 = (byte *)((longlong)*piVar7 * 0x40 + param_1[2]);
        if ((*pbVar5 & 1) != 0) break;
        piVar7 = piVar7 + -1;
        lVar6 = lVar6 + -1;
        pbVar5 = (byte *)0x0;
      } while (-1 < lVar6);
    }
  }
  else {
    pbVar5 = (byte *)0x0;
    if (0 < iVar11) {
      pbVar5 = (byte *)((longlong)*(int *)(*param_1 + -4 + (longlong)iVar11 * 4) * 0x40 + param_1[2]
                       );
    }
  }
  local_50 = '\0';
  puVar9 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  local_78 = bVar3 >> 2 & 1;
  local_48 = (undefined8 *)0x0;
  local_3c = 0;
  if (pbVar5 == (byte *)0x0) {
    if ((bVar3 & 1) == 0) {
      local_40 = 1;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,0);
      uVar4 = *(undefined8 *)(param_2 + 2);
      *local_48 = *(undefined8 *)param_2;
      local_48[1] = uVar4;
      fVar2 = param_2[5];
      fVar14 = param_2[6];
      fVar15 = param_2[7];
      *(float *)(local_48 + 2) = param_2[4];
      *(float *)((longlong)local_48 + 0x14) = fVar2;
      *(float *)(local_48 + 3) = fVar14;
      *(float *)((longlong)local_48 + 0x1c) = fVar15;
      *(float *)(local_48 + 4) = param_2[8];
      puVar8 = local_48;
      iVar11 = local_40;
    }
    else {
      puVar8 = puVar9;
      iVar11 = 0;
      if (param_2 != (float *)&local_74) {
        local_74 = *(undefined8 *)param_2;
        uStack_6c = *(undefined8 *)(param_2 + 2);
        local_54 = param_2[8];
        local_64 = param_2[4];
        fStack_60 = param_2[5];
        fStack_5c = param_2[6];
        fStack_58 = param_2[7];
        local_50 = '\x01';
        iVar11 = 0;
      }
    }
  }
  else {
    if (pbVar5[0x28] == 0) {
      local_40 = 0;
      if (&local_48 != (undefined8 **)(pbVar5 + 0x30)) {
        local_40 = *(int *)(pbVar5 + 0x38);
        lVar6 = (longlong)local_40;
        puVar8 = *(undefined8 **)(pbVar5 + 0x30);
        if (local_40 != 0) {
          TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
          puVar9 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,puVar8,lVar6 * 0x24);
        }
      }
      iVar10 = local_40 + 1;
      bVar13 = SBORROW4(iVar10,local_3c);
      iVar11 = iVar10 - local_3c;
      bVar12 = iVar10 == local_3c;
    }
    else {
      if ((bVar3 & 1) != 0) {
        fVar2 = *(float *)(pbVar5 + 8);
        if (*(float *)(pbVar5 + 8) <= param_2[1]) {
          fVar2 = param_2[1];
        }
        fVar14 = *(float *)(pbVar5 + 0x1c);
        if (param_2[6] <= *(float *)(pbVar5 + 0x1c)) {
          fVar14 = param_2[6];
        }
        fVar15 = *param_2;
        if (*param_2 <= *(float *)(pbVar5 + 4)) {
          fVar15 = *(float *)(pbVar5 + 4);
        }
        fVar17 = *(float *)(pbVar5 + 0x20);
        if (param_2[7] <= *(float *)(pbVar5 + 0x20)) {
          fVar17 = param_2[7];
        }
        if ((fVar17 < fVar2) || (fVar14 < fVar15)) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          fVar16 = (float)((int)ROUND(fVar15 + fVar15 + 0.5) >> 1);
          fVar15 = (float)((int)ROUND(fVar2 + fVar2 + 0.5) >> 1);
          fVar14 = (float)((int)ROUND(fVar14 + fVar14 + 0.5) >> 1);
          fVar2 = fVar14;
          if (fVar14 <= fVar16) {
            fVar2 = fVar16;
          }
          if (fVar16 <= fVar14) {
            fVar14 = fVar16;
          }
          fVar16 = (float)((int)ROUND(fVar17 + fVar17 + 0.5) >> 1);
          fVar17 = fVar16;
          if (fVar15 <= fVar16) {
            fVar17 = fVar15;
          }
          if (fVar16 <= fVar15) {
            fVar16 = fVar15;
          }
          local_a8 = CONCAT44(fVar17,fVar14);
          uStack_a0 = CONCAT44(fVar17,fVar2);
          local_98 = CONCAT44(fVar16,fVar14);
          uStack_90 = CONCAT44(fVar16,fVar2);
        }
        local_88 = (float)((uint)local_88 & 0xfffffffb | 3);
        local_54 = local_88;
        local_74 = local_a8;
        uStack_6c = uStack_a0;
        local_50 = '\x01';
        local_64 = (float)local_98;
        fStack_60 = local_98._4_4_;
        fStack_5c = (float)uStack_90;
        fStack_58 = uStack_90._4_4_;
        iVar11 = 0;
        goto LAB_141852a98;
      }
      local_40 = 1;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,0);
      uVar4 = *(undefined8 *)(pbVar5 + 0xc);
      *local_48 = *(undefined8 *)(pbVar5 + 4);
      local_48[1] = uVar4;
      uVar4 = *(undefined8 *)(pbVar5 + 0x1c);
      local_48[2] = *(undefined8 *)(pbVar5 + 0x14);
      local_48[3] = uVar4;
      *(undefined4 *)(local_48 + 4) = *(undefined4 *)(pbVar5 + 0x24);
      iVar10 = local_40 + 1;
      bVar13 = SBORROW4(iVar10,local_3c);
      iVar11 = iVar10 - local_3c;
      bVar12 = iVar10 == local_3c;
      puVar9 = local_48;
    }
    lVar6 = (longlong)local_40;
    puVar8 = puVar9;
    if (!bVar12 && bVar13 == iVar11 < 0) {
      iVar11 = local_40;
      local_40 = iVar10;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,iVar11);
      puVar8 = local_48;
      iVar10 = local_40;
    }
    local_40 = iVar10;
    uVar4 = *(undefined8 *)(param_2 + 2);
    puVar9 = (undefined8 *)((longlong)puVar8 + lVar6 * 0x24);
    *puVar9 = *(undefined8 *)param_2;
    puVar9[1] = uVar4;
    fVar2 = param_2[5];
    fVar14 = param_2[6];
    fVar15 = param_2[7];
    pfVar1 = (float *)((longlong)puVar8 + lVar6 * 0x24 + 0x10);
    *pfVar1 = param_2[4];
    pfVar1[1] = fVar2;
    pfVar1[2] = fVar14;
    pfVar1[3] = fVar15;
    *(float *)((longlong)puVar8 + lVar6 * 0x24 + 0x20) = param_2[8];
    iVar11 = local_40;
  }
LAB_141852a98:
  iVar10 = (int)param_1[1];
  lVar6 = param_1[3];
  *(int *)(param_1 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
  }
  *(int *)(*param_1 + (longlong)iVar10 * 4) = (int)lVar6;
  iVar10 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 2,iVar10);
  }
  pbVar5 = (byte *)((longlong)iVar10 * 0x40 + param_1[2]);
  *pbVar5 = local_78;
  pbVar5[0x28] = 0;
  if (local_50 != '\0') {
    *(undefined8 *)(pbVar5 + 4) = local_74;
    *(undefined8 *)(pbVar5 + 0xc) = uStack_6c;
    *(ulonglong *)(pbVar5 + 0x14) = CONCAT44(fStack_60,local_64);
    *(ulonglong *)(pbVar5 + 0x1c) = CONCAT44(fStack_58,fStack_5c);
    *(float *)(pbVar5 + 0x24) = local_54;
    pbVar5[0x28] = 1;
  }
  pbVar5[0x30] = 0;
  pbVar5[0x31] = 0;
  pbVar5[0x32] = 0;
  pbVar5[0x33] = 0;
  pbVar5[0x34] = 0;
  pbVar5[0x35] = 0;
  pbVar5[0x36] = 0;
  pbVar5[0x37] = 0;
  *(int *)(pbVar5 + 0x38) = iVar11;
  if (iVar11 == 0) {
    pbVar5[0x3c] = 0;
    pbVar5[0x3d] = 0;
    pbVar5[0x3e] = 0;
    pbVar5[0x3f] = 0;
  }
  else {
    TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(pbVar5 + 0x30,iVar11,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(pbVar5 + 0x30),puVar8,(longlong)iVar11 * 0x24);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
  return (int)lVar6;
}



// FUNCTION 141852b90 PushClip body=12 status=ok
// SIG undefined PushClip(void)

void FSlateWindowElementList::PushClip(longlong param_1)

{
  FUN_141852770(param_1 + 0x988);
  return;
}



// FUNCTION 141852ba0 PushClippingState body=125 status=ok
// SIG undefined PushClippingState(void)

undefined4 FSlateClippingManager::PushClippingState(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  lVar2 = param_1[3];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(int *)(*param_1 + (longlong)iVar1 * 4) = (int)lVar2;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 2,iVar1);
  }
  FSlateClippingState::FSlateClippingState((longlong)iVar1 * 0x40 + param_1[2],param_2);
  return (int)lVar2;
}



// FUNCTION 141852c20 FUN_141852c20 body=419 status=ok
// SIG undefined FUN_141852c20(void)

void FUN_141852c20(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = (undefined8 *)operator_new(200);
  if (local_18 == (undefined8 *)0x0) {
    local_18 = (undefined8 *)0x0;
  }
  else {
    *local_18 = *param_2;
    lVar2 = param_2[1];
    local_18[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
    local_18[2] = param_2[2];
    local_18[3] = param_2[3];
    *(undefined4 *)(local_18 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)((longlong)local_18 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
    local_18[5] = param_2[5];
    local_18[6] = param_2[6];
    *(undefined4 *)(local_18 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined1 *)((longlong)local_18 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
    *(undefined1 *)((longlong)local_18 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
    local_18[8] = param_2[8];
    lVar2 = param_2[9];
    local_18[9] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
    local_18[10] = param_2[10];
    uVar6 = param_2[0xc];
    local_18[0xb] = param_2[0xb];
    local_18[0xc] = uVar6;
    uVar6 = param_2[0xe];
    local_18[0xd] = param_2[0xd];
    local_18[0xe] = uVar6;
    uVar6 = param_2[0x10];
    local_18[0xf] = param_2[0xf];
    local_18[0x10] = uVar6;
    local_18[0x11] = param_2[0x11];
    uVar6 = param_2[0x13];
    local_18[0x12] = param_2[0x12];
    local_18[0x13] = uVar6;
    uVar6 = param_2[0x15];
    local_18[0x14] = param_2[0x14];
    local_18[0x15] = uVar6;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
    uVar4 = *(undefined4 *)(param_2 + 0x17);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
    *(undefined4 *)(local_18 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    *(undefined4 *)((longlong)local_18 + 0xb4) = uVar3;
    *(undefined4 *)(local_18 + 0x17) = uVar4;
    *(undefined4 *)((longlong)local_18 + 0xbc) = uVar5;
    *(undefined1 *)(local_18 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  }
  local_10 = (undefined8 *)operator_new(0x18);
  if (local_10 != (undefined8 *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = &PTR_DestroyObject_144d50378;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  iVar1 = *(int *)(param_1 + 0xa30);
  *(int *)(param_1 + 0xa30) = iVar1 + 1;
  if (*(int *)(param_1 + 0xa34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa28,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xa28));
  *puVar7 = local_18;
  puVar7[1] = local_10;
  return;
}



// FUNCTION 141852dd0 FUN_141852dd0 body=1211 status=ok
// SIG undefined FUN_141852dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141852dd0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  byte local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c8 = param_1;
  plVar9 = (longlong *)operator_new(0x18);
  plVar11 = (longlong *)0x0;
  plVar13 = plVar11;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar13 = plVar9;
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144d50368;
    plVar9[2] = (longlong)plVar13;
    plVar11 = plVar9;
  }
  if (plVar13 != (longlong *)0x0) {
    if ((*plVar13 != 0) && (plVar13[1] != 0)) {
      piVar1 = (int *)(plVar13[1] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) goto LAB_141852f12;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    *plVar13 = (longlong)plVar13;
    plVar9 = (longlong *)plVar13[1];
    if (plVar11 != plVar9) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar13[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar13[1] = (longlong)plVar11;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
LAB_141852f12:
  uVar2 = *(undefined4 *)(param_2 + 0x1f);
  lVar12 = *(longlong *)
            (*(longlong *)(param_1 + 0xa08) + -8 + (longlong)*(int *)(param_1 + 0xa10) * 8);
  iVar8 = FUN_1417ffb80(lVar12 + 0x880,1);
  lVar3 = local_c8;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0x3f800000;
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0x3f800000;
  local_80 = 0;
  lVar12 = (longlong)iVar8 * 0x130 + *(longlong *)(lVar12 + 0x880);
  local_7c = local_7c & 0xfd | 1;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x3f800000;
  uStack_84 = 0;
  local_e8 = 0;
  FUN_141846510(lVar12,local_c8,uVar2,&local_b0);
  *(undefined8 *)(lVar12 + 0xd0) = 0x3f800000;
  *(undefined8 *)(lVar12 + 0xd8) = 0x3f80000000000000;
  *(undefined4 *)(lVar12 + 0x11c) = 6;
  local_78 = 0x3f800000;
  uStack_70 = 0x3f80000000000000;
  *(longlong **)(lVar12 + 0xa0) = plVar13;
  local_68 = 0;
  *(undefined8 *)(lVar12 + 0xe0) = 0;
  puVar10 = (undefined8 *)operator_new(0x130);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = *param_2;
    lVar12 = param_2[1];
    puVar10[1] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    puVar10[2] = param_2[2];
    lVar12 = param_2[3];
    puVar10[3] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
      UNLOCK();
    }
    puVar10[4] = param_2[4];
    puVar10[5] = param_2[5];
    *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined1 *)((longlong)puVar10 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
    puVar10[7] = param_2[7];
    puVar10[8] = param_2[8];
    *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined1 *)((longlong)puVar10 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
    *(undefined1 *)((longlong)puVar10 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
    puVar10[10] = param_2[10];
    lVar12 = param_2[0xb];
    puVar10[0xb] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
      UNLOCK();
    }
    puVar10[0xc] = param_2[0xc];
    uVar7 = param_2[0xe];
    puVar10[0xd] = param_2[0xd];
    puVar10[0xe] = uVar7;
    uVar7 = param_2[0x10];
    puVar10[0xf] = param_2[0xf];
    puVar10[0x10] = uVar7;
    uVar7 = param_2[0x12];
    puVar10[0x11] = param_2[0x11];
    puVar10[0x12] = uVar7;
    puVar10[0x13] = param_2[0x13];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xa4);
    uVar5 = *(undefined4 *)(param_2 + 0x15);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xac);
    *(undefined4 *)(puVar10 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)((longlong)puVar10 + 0xa4) = uVar2;
    *(undefined4 *)(puVar10 + 0x15) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0xac) = uVar6;
    *(undefined1 *)(puVar10 + 0x1e) = 0;
    if (*(char *)(param_2 + 0x1e) != '\0') {
      FSlateClippingState::FSlateClippingState(puVar10 + 0x16);
      *(undefined1 *)(puVar10 + 0x1e) = 1;
    }
    *(undefined4 *)(puVar10 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x104);
    *(undefined8 *)((longlong)puVar10 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
    *(undefined8 *)((longlong)puVar10 + 0x104) = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x114);
    *(undefined8 *)((longlong)puVar10 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
    *(undefined8 *)((longlong)puVar10 + 0x114) = uVar7;
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x124);
    uVar6 = *(undefined4 *)(param_2 + 0x25);
    *(undefined4 *)((longlong)puVar10 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
    *(undefined4 *)(puVar10 + 0x24) = uVar2;
    *(undefined4 *)((longlong)puVar10 + 0x124) = uVar5;
    *(undefined4 *)(puVar10 + 0x25) = uVar6;
    *(undefined1 *)((longlong)puVar10 + 300) = *(undefined1 *)((longlong)param_2 + 300);
  }
  local_b8 = (undefined8 *)operator_new(0x18);
  if (local_b8 != (undefined8 *)0x0) {
    *(undefined4 *)(local_b8 + 1) = 1;
    *local_b8 = &PTR_FUN_144d50358;
    *(undefined4 *)((longlong)local_b8 + 0xc) = 1;
    local_b8[2] = puVar10;
  }
  local_c0 = puVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_c0,puVar10,puVar10);
  plVar9 = (longlong *)(lVar3 + 0xa50);
  iVar8 = *(int *)(lVar3 + 0xa58);
  lVar12 = (longlong)iVar8;
  *(int *)(lVar3 + 0xa58) = iVar8 + 1;
  if (*(int *)(lVar3 + 0xa5c) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar8);
  }
  lVar3 = *plVar9;
  *(undefined8 **)(lVar3 + lVar12 * 0x10) = local_c0;
  *(undefined8 **)(lVar3 + 8 + lVar12 * 0x10) = local_b8;
  pplVar4 = *(longlong ***)(*plVar9 + lVar12 * 0x10);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_d8 = plVar13;
  plStack_d0 = plVar11;
  if (&local_d8 != pplVar4) {
    local_d8 = *pplVar4;
    plStack_d0 = pplVar4[1];
    *pplVar4 = plVar13;
    pplVar4[1] = plVar11;
    local_60 = plVar13;
    plStack_58 = plVar11;
  }
  plVar13 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_d0 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return;
}



// FUNCTION 141853290 ReadData body=109 status=ok
// SIG undefined ReadData(void)

int FFreeTypeFace::FFTStreamHandler::ReadData
              (longlong param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), cVar3 == '\0')) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3,param_4), cVar3 != '\0')) {
    return param_4;
  }
  return 0;
}



// FUNCTION 141853310 FUN_141853310 body=314 status=ok
// SIG undefined FUN_141853310(void)

void FUN_141853310(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(byte *)(param_1 + 0x80) & 0x10) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    lVar6 = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar7) {
        LOCK();
        bVar7 = iVar4 == (int)plVar3[1];
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar7) {
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x30) != 0) {
            iVar4 = *(int *)(param_1 + 0x28);
            *(undefined4 *)(param_1 + 0x84) = param_3;
            if (0 < (longlong)iVar4) {
              do {
                lVar5 = *(longlong *)(param_1 + 0x20);
                if (*(longlong *)(param_1 + 0x20) == 0) {
                  lVar5 = param_1;
                }
                FUN_1418537d0(*(undefined8 *)(lVar5 + lVar6 * 8),param_2,param_3,param_4,param_5);
                lVar6 = lVar6 + 1;
              } while (lVar6 < iVar4);
            }
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) {
            return;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 != 1) {
            return;
          }
          (**(code **)(*plVar3 + 8))(plVar3,1);
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 141853450 FUN_141853450 body=884 status=ok
// SIG undefined FUN_141853450(void)

undefined8 *
FUN_141853450(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88 [64];
  longlong *local_48;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)param_1 + 0x14);
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
  *(undefined1 *)((longlong)param_2 + 0x2c) = *(undefined1 *)((longlong)param_1 + 0x2c);
  *(undefined1 *)((longlong)param_2 + 0x2d) = *(undefined1 *)((longlong)param_1 + 0x2d);
  param_2[6] = param_1[6];
  lVar3 = param_1[7];
  param_2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_2[8] = param_1[8];
  if ((*(byte *)((longlong)param_1 + 0x14) & 0x10) == 0) {
    *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_1 + 0x14);
    return param_2;
  }
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_3 + 8,&local_c8);
  plVar10 = (longlong *)0x0;
  if ((*(char *)((longlong)param_1 + 0x2c) != '\0') &&
     (plVar4 = (longlong *)param_1[7], plVar4 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(plVar4 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar6 == (int)plVar4[1];
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar4 != (longlong *)0x0) {
          if ((longlong *)param_1[6] != (longlong *)0x0) {
            local_b8 = (**(code **)(*(longlong *)param_1[6] + 0x10))();
            local_a8 = local_c8;
            plStack_a0 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
              UNLOCK();
            }
            FUN_1418467f0(local_b8,param_1,&local_a8,param_4);
            lVar3 = param_2[8];
            iVar6 = *(int *)(lVar3 + 0x28);
            *(int *)(lVar3 + 0x28) = iVar6 + 1;
            if (*(int *)(lVar3 + 0x2c) < iVar6 + 1) {
              TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
              ResizeGrow(lVar3,iVar6);
            }
            lVar9 = *(longlong *)(lVar3 + 0x20);
            if (*(longlong *)(lVar3 + 0x20) == 0) {
              lVar9 = lVar3;
            }
            *(undefined8 *)(lVar9 + (longlong)iVar6 * 8) = local_b8;
            param_2[8] = local_b8;
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
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  uVar7 = *(undefined4 *)(param_1 + 2);
  if (((*(char *)((longlong)param_1 + 0x2d) != '\0') &&
      (*(char *)((longlong)param_1 + 0x2c) == '\0')) && (param_1[8] != 0)) {
    uVar7 = *(undefined4 *)(param_1[8] + 0x84);
    param_2[8] = 0;
  }
  if (((*(int *)(param_3 + 0xc0) == 0) || (*(longlong **)(param_3 + 0xb8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_3 + 0xb8) + 0x18))(), cVar5 == '\0')) {
    uVar11 = *(undefined1 *)(param_3 + 0xb0);
  }
  else {
    if (*(int *)(param_3 + 0xc0) != 0) {
      plVar10 = *(longlong **)(param_3 + 0xb8);
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,local_res8);
    *(undefined1 *)(param_3 + 0xb0) = local_res8[0];
    uVar11 = local_res8[0];
  }
  plVar10 = plStack_c0;
  local_98 = local_c8;
  plStack_90 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
    UNLOCK();
  }
  local_res10[0] = uVar11;
  uVar8 = FArrangedWidget::FArrangedWidget(local_88,&local_98,param_4);
  uVar7 = FUN_1418470f0(param_1[1],uVar7,local_res10,uVar8,param_1[3],param_5);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_48 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar10 = plStack_c0;
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar10 = plStack_c0;
      if (iVar6 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
        plVar10 = plStack_c0;
      }
    }
  }
  plVar4 = plStack_c0;
  *(undefined4 *)(param_2 + 2) = uVar7;
  *(undefined1 *)((longlong)param_2 + 0x14) = uVar11;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar10 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1418537d0 FUN_1418537d0 body=494 status=ok
// SIG undefined FUN_1418537d0(void)

void FUN_1418537d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_a8;
  longlong *local_a0;
  undefined1 local_98 [64];
  longlong *local_58;
  
  if ((*(byte *)(param_1 + 0x80) & 0x10) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    lVar10 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar5 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar6 == (int)plVar5[1];
        if (bVar11) {
          *(int *)(plVar5 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          lVar9 = *(longlong *)(param_1 + 0x30);
          if (lVar9 != 0) {
            fVar3 = *(float *)(param_1 + 0x7c);
            fVar4 = *(float *)(param_1 + 0x78);
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_a8 = lVar9;
            local_a0 = plVar5;
            uVar8 = FArrangedWidget::FArrangedWidget(local_98,&local_a8,param_1 + 0x40);
            uVar7 = FUN_1418470f0(param_2,param_3,param_1 + 0x80,uVar8,
                                  CONCAT44(param_5._4_4_ + fVar3,(float)param_5 + fVar4),param_4);
            *(undefined4 *)(param_1 + 0x84) = uVar7;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
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
            iVar6 = *(int *)(param_1 + 0x28);
            if (0 < (longlong)iVar6) {
              do {
                lVar9 = *(longlong *)(param_1 + 0x20);
                if (*(longlong *)(param_1 + 0x20) == 0) {
                  lVar9 = param_1;
                }
                FUN_1418537d0(*(undefined8 *)(lVar9 + lVar10 * 8),param_2,
                              *(undefined4 *)(param_1 + 0x84),param_4,param_5);
                lVar10 = lVar10 + 1;
              } while (lVar10 < iVar6);
            }
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 != 1) {
            return;
          }
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 != 1) {
            return;
          }
          (**(code **)(*plVar5 + 8))(plVar5,1);
          return;
        }
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(plVar5 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 1418539c0 FUN_1418539c0 body=1048 status=ok
// SIG undefined FUN_1418539c0(void)

void FUN_1418539c0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong *plVar14;
  char *pcVar15;
  undefined1 local_res10 [8];
  int local_res18;
  longlong *local_res20;
  longlong *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  
  lVar4 = FInternationalization::Get();
  plVar7 = *(longlong **)(lVar4 + 0x30);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  FCulture::GetName(uVar5);
  uVar5 = FInternationalization::Get();
  FInternationalization::GetPrioritizedCultureNames(uVar5,&local_78);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar7 + 1;
    lVar4 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
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
  plVar7 = param_1 + 7;
  local_res20 = plVar7;
  FUN_1418565d0(plVar7,0);
  plVar14 = param_1 + 9;
  local_98 = plVar14;
  FUN_1418565d0(plVar14,0);
  lVar4 = *param_1;
  local_res18 = 0;
  if (0 < *(int *)(lVar4 + 0x30)) {
    local_88 = 0;
    local_90 = 2;
    local_80 = 0x20;
    do {
      if ((-1 < local_90) && (local_res18 + 2 < (int)param_1[6])) {
        lVar4 = *(longlong *)(lVar4 + 0x28) + local_88;
        plVar7 = (longlong *)param_1[5];
        if ((longlong *)param_1[5] == (longlong *)0x0) {
          plVar7 = param_1 + 1;
        }
        plVar2 = *(longlong **)((longlong)plVar7 + local_80 + 8);
        uVar5 = *(undefined8 *)((longlong)plVar7 + local_80);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        if (*(int *)(lVar4 + 0x30) < 2) {
LAB_141853d43:
          if (plVar14 != (longlong *)0x0) {
            pcVar12 = *(char **)(lVar4 + 0x18);
            pcVar15 = pcVar12 + (longlong)*(int *)(lVar4 + 0x20) * 0x10;
            for (; pcVar12 != pcVar15; pcVar12 = pcVar12 + 0x10) {
              if (((*pcVar12 == '\x02') || (pcVar12[8] == '\x02')) ||
                 ((*(int *)(pcVar12 + 4) <= *(int *)(pcVar12 + 0xc) &&
                  ((*(int *)(pcVar12 + 4) != *(int *)(pcVar12 + 0xc) ||
                   ((*pcVar12 != '\0' && (pcVar12[8] != '\0')))))))) {
                iVar3 = (int)plVar14[1];
                *(int *)(plVar14 + 1) = iVar3 + 1;
                if (*(int *)((longlong)plVar14 + 0xc) < iVar3 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow(plVar14,iVar3);
                }
                lVar4 = *plVar14;
                if (plVar2 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                  UNLOCK();
                }
                local_58 = uVar5;
                local_50 = plVar2;
                FUN_1417e9260((longlong)iVar3 * 0x20 + lVar4,pcVar12,&local_58);
              }
            }
          }
        }
        else {
          local_a8 = (longlong *)0x0;
          local_a0 = 0;
          FUN_141594550(lVar4 + 0x28,&local_a8,&DAT_144cb1544,
                        CONCAT71((int7)((ulonglong)local_80 >> 8),1));
          uVar10 = (ulonglong)(int)local_a0;
          plVar14 = local_a8 + uVar10 * 2;
          plVar7 = local_a8;
          if (local_a8 != plVar14) {
            do {
              plVar13 = local_78 + (longlong)local_70 * 2;
              for (plVar11 = local_78; plVar11 != plVar13; plVar11 = plVar11 + 2) {
                if ((int)plVar7[1] == 0) {
                  puVar8 = &DAT_143f3eda8;
                }
                else {
                  puVar8 = (undefined2 *)*plVar7;
                }
                if ((int)plVar11[1] == 0) {
                  puVar6 = &DAT_143f3eda8;
                }
                else {
                  puVar6 = (undefined2 *)*plVar11;
                }
                iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
                if (iVar3 == 0) {
                  plVar7 = local_a8;
                  for (iVar3 = (int)local_a0; iVar3 != 0; iVar3 = iVar3 + -1) {
                    if (*plVar7 != 0) {
                      FMemory::Free();
                    }
                    plVar7 = plVar7 + 2;
                  }
                  plVar14 = local_res20;
                  if (local_a8 != (longlong *)0x0) {
                    FMemory::Free(local_a8);
                    plVar14 = local_res20;
                  }
                  goto LAB_141853d43;
                }
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar14);
            uVar10 = local_a0 & 0xffffffff;
          }
          uVar9 = (uint)uVar10;
          plVar7 = local_a8;
          while (uVar9 != 0) {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 2;
            uVar9 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar9;
          }
          if (local_a8 != (longlong *)0x0) {
            FMemory::Free(local_a8);
          }
        }
        plVar14 = local_98;
        plVar7 = local_res20;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar2 + 1;
          lVar4 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar14 = local_98;
            plVar7 = local_res20;
            if (iVar3 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
              plVar14 = local_98;
              plVar7 = local_res20;
            }
          }
        }
      }
      local_res18 = local_res18 + 1;
      local_80 = local_80 + 0x10;
      local_90 = local_90 + 1;
      lVar4 = *param_1;
      local_88 = local_88 + 0x38;
    } while (local_res18 < *(int *)(lVar4 + 0x30));
  }
  local_68 = &LAB_14185c850;
  AlgoImpl::
  IntroSortInternal<FCachedCompositeFontData::FCachedFontRange,FIdentityFunctor,TDereferenceWrapper<FCachedCompositeFontData::FCachedFontRange,bool_(__cdecl*)(FCachedCompositeFontData::FCachedFontRange_const_&,FCachedCompositeFontData::FCachedFontRange_const_&)>_>
            (*plVar7,(longlong)(int)plVar7[1],(ulonglong)param_1 & 0xff,&local_68);
  local_60 = &LAB_14185c850;
  AlgoImpl::
  IntroSortInternal<FCachedCompositeFontData::FCachedFontRange,FIdentityFunctor,TDereferenceWrapper<FCachedCompositeFontData::FCachedFontRange,bool_(__cdecl*)(FCachedCompositeFontData::FCachedFontRange_const_&,FCachedCompositeFontData::FCachedFontRange_const_&)>_>
            (*plVar14,(longlong)(int)plVar14[1],(ulonglong)param_1 & 0xff,&local_60);
  <lambda_a8d7dad92333cedc8a75a424489b309a>::operator()(local_res10,plVar7);
  <lambda_a8d7dad92333cedc8a75a424489b309a>::operator()(local_res10,plVar14);
  plVar7 = local_78;
  for (; local_70 != 0; local_70 = local_70 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 141853de0 FUN_141853de0 body=528 status=ok
// SIG undefined FUN_141853de0(void)

undefined8 * FUN_141853de0(longlong param_1,undefined8 *param_2,float param_3,longlong **param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  longlong *plVar6;
  BOOL BVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong *local_58;
  int local_50;
  
  pfVar8 = (float *)operator_new(0x28);
  plVar6 = DAT_1469eaf38;
  pfVar9 = (float *)0x0;
  pfVar11 = pfVar9;
  if (pfVar8 != (float *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    if (((param_4 != &local_58) && (*(int *)(param_4 + 1) != 0)) &&
       (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_58);
    }
    dVar5 = (double)(**(code **)(*plVar6 + 0x40))(plVar6);
    *pfVar8 = param_3;
    *(longlong **)(pfVar8 + 2) = (longlong *)0x0;
    pfVar8[4] = 0.0;
    if (((&local_58 != (longlong **)(pfVar8 + 2)) && (local_50 != 0)) &&
       (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x30))();
    }
    *(double *)(pfVar8 + 6) = dVar5 + (double)param_3;
    *(undefined1 *)(pfVar8 + 8) = 0;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    pfVar11 = pfVar8;
  }
  pfVar8 = (float *)operator_new(0x18);
  if (pfVar8 != (float *)0x0) {
    pfVar8[2] = 1.4013e-45;
    *(undefined ***)pfVar8 = &PTR_FUN_144d50318;
    pfVar8[3] = 1.4013e-45;
    *(float **)(pfVar8 + 4) = pfVar11;
    pfVar9 = pfVar8;
  }
  *param_2 = pfVar11;
  param_2[1] = pfVar9;
  SharedPointerInternals::EnableSharedFromThis(param_2,pfVar11,pfVar11);
  plVar6 = DAT_1469eaf38;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_1469eaf38 + 9));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 9));
  }
  lVar3 = param_2[1];
  uVar4 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  iVar1 = (int)plVar6[2];
  *(int *)(plVar6 + 2) = iVar1 + 1;
  if (*(int *)((longlong)plVar6 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6 + 1,iVar1);
  }
  puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + plVar6[1]);
  *puVar10 = uVar4;
  puVar10[1] = lVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 9));
  iVar1 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar1 + 1;
  if (*(int *)(param_1 + 0x94) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x88),iVar1);
  }
  puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x88));
  *puVar10 = *param_2;
  lVar3 = param_2[1];
  puVar10[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_2;
}



// FUNCTION 141853ff0 FUN_141853ff0 body=409 status=ok
// SIG undefined FUN_141853ff0(void)

void FUN_141853ff0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_141854141;
  }
  local_28 = 0;
  local_20 = 0;
  puVar5 = (undefined8 *)operator_new(0x28,&local_28);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_GetPoolName_143f3f4f8;
    puVar5[2] = FCurveSequence::EnsureSlateTickDuringAnimation;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[4] = uVar6;
  }
  puVar5 = (undefined8 *)FUN_141853de0(*param_2,local_18,0,&local_28);
  *(undefined8 *)(param_1 + 0x20) = *puVar5;
  plVar2 = (longlong *)puVar5[1];
  plVar7 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x28);
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
    *(longlong **)(param_1 + 0x28) = plVar2;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar7 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x18);
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
    *(longlong **)(param_1 + 0x18) = plVar2;
  }
LAB_141854141:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return;
}



// FUNCTION 141854190 FUN_141854190 body=105 status=ok
// SIG undefined FUN_141854190(void)

void FUN_141854190(longlong *param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  longlong *local_res10 [3];
  undefined8 local_18;
  longlong **local_10;
  
  local_res10[0] = param_1;
  local_18 = (**(code **)(*param_1 + 8))();
  local_10 = local_res10;
  FUN_1416e1690(&DAT_1464b9f40,local_res8,&local_18,0);
  if ((DAT_1469eaf38 != 0) &&
     (plVar1 = *(longlong **)(DAT_1469eaf38 + 0x18), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001418541ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xe8))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141854200 Rehash body=548 status=ok
// SIG undefined Rehash(void)

void TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14185432f;
        uVar5 = puVar14[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14185432f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x10 + *param_1);
        if (*(int *)((undefined8 *)*puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = *(undefined2 **)*puVar11;
        }
        uVar5 = FCrc::StrCrc32<wchar_t>(puVar9);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0xc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 1) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141854430 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>,TDefaultMapHashableKeyFuncs<FFreeTypeAdvanceCache::FCachedAdvanceKey,long,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14185456f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_14185456f:
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
        lVar6 = (longlong)iStack_1c * 0x30 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x18);
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141854640 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>,TDefaultMapHashableKeyFuncs<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14185477f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_14185477f:
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
        lVar6 = (longlong)iStack_1c * 0x78 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x18);
        *(uint *)(lVar6 + 0x74) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x70) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141854850 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_>,TDefaultMapHashableKeyFuncs<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14185498f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_14185498f:
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
        lVar6 = (longlong)iStack_1c * 0x30 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x1c);
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141854a60 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,0>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,0>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141854b8f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141854b8f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x38 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x34) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x30) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141854c70 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FLegacySlateFontInfoCache::FLegacyFontKey,TSharedPtr<FCompositeFont_const_,0>_>,TDefaultMapHashableKeyFuncs<FLegacySlateFontInfoCache::FLegacyFontKey,TSharedPtr<FCompositeFont_const_,0>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141854daf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_141854daf:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141854e80 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141854fbf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_141854fbf:
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
        lVar6 = (longlong)iStack_1c * 0x40 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x24);
        *(uint *)(lVar6 + 0x3c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x38) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141855090 Rehash body=530 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,0>_>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1418551cf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_1418551cf:
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
        lVar6 = (longlong)iStack_1c * 0x90 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x74);
        *(uint *)(lVar6 + 0x8c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x88) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1418552b0 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<wchar_t,FCharacterList::FCharacterListEntry>,TDefaultMapHashableKeyFuncs<wchar_t,FCharacterList::FCharacterListEntry,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1418553ef;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1418553ef:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      puVar9 = (ushort *)((longlong)iStack_44 * 0x88 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*puVar9;
      *(uint *)(puVar9 + 0x42) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(puVar9 + 0x40) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 1418554d0 thunk_FUN_1418554e0 body=5 status=ok
// SIG undefined thunk_FUN_1418554e0(void)

void thunk_FUN_1418554e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uStack_18;
  longlong *plStack_10;
  
  if (((*(byte *)(param_1 + 0x98) & 2) != 0) &&
     (*(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfd, DAT_1469eaf38 != 0)) {
    lVar8 = 0;
    plStack_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x70) != &uStack_18) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uStack_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&plStack_10);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_10 + 8))(plStack_10,1);
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar7 = iVar3 >> 0x1f & 0xffff;
        uVar6 = iVar3 + uVar7;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xbfffffff;
    }
    plVar4 = *(longlong **)(DAT_1469eaf38 + 0x18);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418555fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa8))(plVar4,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1418554e0 FUN_1418554e0 body=298 status=ok
// SIG undefined FUN_1418554e0(void)

void FUN_1418554e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_18;
  longlong *local_10;
  
  if (((*(byte *)(param_1 + 0x98) & 2) != 0) &&
     (*(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfd, DAT_1469eaf38 != 0)) {
    lVar8 = 0;
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x70) != &local_18) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_10);
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
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar7 = iVar3 >> 0x1f & 0xffff;
        uVar6 = iVar3 + uVar7;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xbfffffff;
    }
    plVar4 = *(longlong **)(DAT_1469eaf38 + 0x18);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418555fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa8))(plVar4,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141855610 ReleaseResources body=130 status=ok
// SIG undefined ReleaseResources(void)

void FSlateFontCache::ReleaseResources(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0xe8) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 0x18))();
  }
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0xf8) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 0x18))();
  }
  return;
}



// FUNCTION 1418556a0 ReleaseResources body=42 status=ok
// SIG undefined ReleaseResources(void)

void FSlateFontServices::ReleaseResources(longlong *param_1)

{
  FSlateFontCache::ReleaseResources(*param_1);
  if (*param_1 != param_1[2]) {
    FSlateFontCache::ReleaseResources();
    return;
  }
  return;
}



// FUNCTION 1418556d0 Remove body=432 status=ok
// SIG undefined Remove(void)

undefined8
TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  short *psVar10;
  int *piVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  uVar17 = (longlong)(int)param_1[9] - 1;
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar8 = FCrc::StrCrc32<wchar_t>(puVar13,0);
  iVar8 = *(int *)((longlong)plVar12 + ((longlong)iVar8 & uVar17) * 4);
  if (iVar8 != -1) {
    lVar5 = *param_1;
    do {
      lVar15 = (longlong)iVar8;
      puVar6 = *(undefined8 **)(lVar5 + lVar15 * 0x10);
      if (iVar4 == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar6 + 1) == 0) {
        psVar10 = &DAT_143f3eda8;
      }
      else {
        psVar10 = (short *)*puVar6;
      }
      lVar14 = (longlong)puVar13 - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar14);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      if (sVar2 == sVar3) {
        uVar17 = (longlong)*(int *)(lVar5 + 0xc + lVar15 * 0x10) & uVar17;
        piVar11 = (int *)((longlong)plVar12 + uVar17 * 4);
        iVar4 = *(int *)((longlong)plVar12 + uVar17 * 4);
        goto joined_r0x0001418557de;
      }
      iVar8 = *(int *)(lVar5 + 8 + lVar15 * 0x10);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001418557de:
  if (iVar4 == -1) {
LAB_141855801:
    bVar7 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar8;
    }
    uVar9 = 0xffffffff;
    puVar16 = (undefined4 *)(lVar15 * 0x10 + *param_1);
    *puVar16 = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar9 = (undefined4)param_1[6];
    }
    puVar16[1] = uVar9;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar12 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar12 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar12 +
                     (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
    return 1;
  }
  if (iVar4 == iVar8) {
    *piVar11 = *(int *)(lVar5 + 8 + lVar15 * 0x10);
    goto LAB_141855801;
  }
  piVar11 = (int *)(lVar5 + 8 + (longlong)iVar4 * 0x10);
  iVar4 = *piVar11;
  goto joined_r0x0001418557de;
}



// FUNCTION 141855880 Remove body=186 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>,FSlateFontKeyFuncs<TSharedRef<FCharacterList,0>_>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x8c + lVar6 * 0x90));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x88 + lVar6 * 0x90);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x88 + (longlong)iVar1 * 0x90);
      iVar1 = *piVar5;
    }
  }
  FUN_1417f5c70(lVar6 * 0x90 + *param_1);
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141855940 Remove body=38 status=ok
// SIG undefined Remove(void)

void FOverlayPopupLayer::Remove(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  lVar1 = param_1[9];
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_18);
  FUN_1418560f0(lVar1,uVar2);
  return;
}



// FUNCTION 141855970 FUN_141855970 body=257 status=ok
// SIG undefined FUN_141855970(void)

void FUN_141855970(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar5 = *plVar1;
    lVar4 = (longlong)param_2 * 8;
    puVar6 = *(undefined8 **)(lVar5 + lVar4);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar6 + 8);
    *puVar6 = &PTR__scalar_deleting_destructor__144d4edf0;
    if (puVar6[2] != DAT_1469eb218) {
      FUN_141806420(puVar6[2],puVar6[1]);
    }
    plVar7 = (longlong *)puVar6[3];
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
        iVar10 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FMemory::Free(*(undefined8 *)(lVar5 + lVar4));
    iVar10 = *(int *)(param_1 + 0x18);
    iVar9 = (iVar10 - param_2) + -1;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar4),(void *)(*plVar1 + (longlong)(param_2 + 1) * 8),
                 (longlong)iVar9 << 3);
      iVar10 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar10 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 141855a80 RemoveAtImpl body=249 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x20);
    iVar6 = param_3;
    do {
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
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar5 << 5);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141855b80 RemoveAtImpl body=305 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x40 + (longlong)param_2 * 0x58);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)plVar7[2];
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
      plVar7 = plVar7 + 0xb;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + *param_1),(longlong)iVar5 * 0x58);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141855cc0 FUN_141855cc0 body=304 status=ok
// SIG undefined FUN_141855cc0(void)

void FUN_141855cc0(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar6 = param_1;
    }
    plVar7 = (longlong *)(lVar6 + 0x40 + (longlong)param_2 * 0x48);
    iVar5 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar7 = plVar7 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x128);
    iVar4 = (iVar5 - param_2) - param_3;
    if (iVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
      if (*(longlong *)(param_1 + 0x120) == 0) {
        lVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x48 + lVar6),
                 (void *)(lVar6 + (longlong)(param_2 + param_3) * 0x48),(longlong)iVar4 * 0x48);
      iVar5 = *(int *)(param_1 + 0x128);
    }
    *(int *)(param_1 + 0x128) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141855df0 FUN_141855df0 body=157 status=ok
// SIG undefined FUN_141855df0(void)

ulonglong FUN_141855df0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                    (param_1 + 0x578);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x580)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x578);
      uVar2 = FUN_141855df0(*(undefined8 *)(lVar1 + lVar4),param_2);
      if ((char)uVar2 != '\0') {
        lVar4 = *(longlong *)(lVar1 + lVar4);
        *(longlong *)(lVar4 + 0x470) = *(longlong *)(param_1 + 0x468) + 0xec0;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x580));
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141855e90 FUN_141855e90 body=386 status=ok
// SIG undefined FUN_141855e90(void)

int FUN_141855e90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = 0;
  iVar8 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + lVar11) + 0x10))
      {
        if (*(char *)(param_1 + 0x228) == '\0') {
          plVar3 = (longlong *)(param_1 + 0x218);
          lVar11 = (longlong)iVar10 * 8;
          lVar4 = *plVar3;
          puVar5 = *(undefined8 **)(lVar4 + lVar11);
          *puVar5 = &PTR__scalar_deleting_destructor__144042bf8;
          TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar5 + 0xf);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar5 + 0xc);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar5 + 7);
          *puVar5 = &PTR__scalar_deleting_destructor__144d4edf0;
          if (puVar5[2] != DAT_1469eb218) {
            FUN_141806420(puVar5[2],puVar5[1]);
          }
          plVar6 = (longlong *)puVar5[3];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          FMemory::Free(*(undefined8 *)(lVar4 + lVar11));
          iVar8 = *(int *)(param_1 + 0x220);
          iVar9 = (iVar8 - iVar10) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar3 + lVar11),(void *)(*plVar3 + (longlong)(iVar10 + 1) * 8),
                       (longlong)iVar9 << 3);
            iVar8 = *(int *)(param_1 + 0x220);
          }
          *(int *)(param_1 + 0x220) = iVar8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar3);
        }
        FUN_1418475e0(param_1,1);
        return iVar10;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 8;
      iVar8 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar10 < iVar8);
  }
  return -1;
}



// FUNCTION 141856020 RemoveSlot body=196 status=ok
// SIG undefined RemoveSlot(void)

void SOverlay::RemoveSlot(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x208);
  if (param_2 == -1) {
    iVar2 = (**(code **)*puVar1)(puVar1);
    if (0 < iVar2) {
      iVar2 = (**(code **)*puVar1)(puVar1);
      FUN_141855970(puVar1,iVar2 + -1);
      FUN_1418475e0(param_1,1);
      return;
    }
  }
  else {
    uVar3 = 0;
    iVar2 = (**(code **)*puVar1)();
    uVar5 = uVar3;
    if (0 < iVar2) {
      do {
        if (*(int *)(*(longlong *)(uVar3 + *(longlong *)(param_1 + 0x218)) + 0x20) == param_2) {
          FUN_141855970(puVar1,uVar5);
          FUN_1418475e0(param_1,1);
          return;
        }
        uVar4 = (int)uVar5 + 1;
        uVar3 = uVar3 + 8;
        iVar2 = (**(code **)*puVar1)();
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < iVar2);
    }
  }
  return;
}



// FUNCTION 1418560f0 FUN_1418560f0 body=270 status=ok
// SIG undefined FUN_1418560f0(void)

undefined8 FUN_1418560f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + lVar6) + 0x10) == *param_2) {
        FUN_141855970(param_1 + 0x208,iVar5);
        FUN_1418475e0(param_1,1);
        plVar3 = (longlong *)param_2[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        return 1;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
    } while (iVar5 < iVar4);
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
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
  return 0;
}



// FUNCTION 141856200 FUN_141856200 body=435 status=ok
// SIG undefined FUN_141856200(void)

void FUN_141856200(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  uint uStackX_c;
  
  uVar9 = 0;
  if (0 < (int)param_1[1]) {
    plVar10 = (longlong *)((ulonglong)uStackX_c << 0x20);
    uVar11 = uVar9;
    uVar12 = uVar9;
    do {
      iVar8 = (int)uVar9;
      lVar2 = *(longlong *)(uVar11 + *param_1);
      plVar7 = *(longlong **)(lVar2 + 0x18);
      plVar6 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar13 = iVar3 == 0;
        if (bVar13) {
          *(int *)(plVar7 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar6 = (longlong *)0x0, !bVar13) {
          LOCK();
          bVar13 = iVar3 == (int)plVar7[1];
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar13) {
            plVar6 = plVar7;
            if ((plVar7 != (longlong *)0x0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) {
              uVar12 = 1;
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              plVar4 = (longlong *)*param_2;
              plVar5 = plVar4 + (longlong)(int)param_2[1] * 2;
              goto joined_r0x000141856392;
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar13 = iVar3 == 0;
          if (bVar13) {
            *(int *)(plVar7 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
LAB_14185628b:
      bVar13 = true;
      plVar7 = plVar6;
LAB_14185628e:
      if ((uVar12 != 0) && (uVar12 = 0, plVar10 != (longlong *)0x0)) {
        LOCK();
        plVar6 = plVar10 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      if (bVar13) {
        TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                  (param_1,uVar9,1,1);
        iVar8 = iVar8 + -1;
        uVar11 = uVar11 - 0x10;
      }
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
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
      uVar11 = uVar11 + 0x10;
    } while ((int)(iVar8 + 1U) < (int)param_1[1]);
  }
  return;
joined_r0x000141856392:
  plVar10 = plVar7;
  if (plVar4 == plVar5) goto LAB_14185628b;
  if (*plVar4 == lVar2) {
    bVar13 = false;
    goto LAB_14185628e;
  }
  plVar4 = plVar4 + 2;
  goto joined_r0x000141856392;
}



// FUNCTION 1418563c0 FUN_1418563c0 body=102 status=ok
// SIG undefined FUN_1418563c0(void)

void FUN_1418563c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove();
  if ((iVar1 == 0) && (iVar1 = 0, 0 < (int)param_1[1])) {
    lVar2 = 0;
    do {
      FUN_1418563c0(*(longlong *)(*param_1 + lVar2) + 0x578,param_2);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar1 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 141856430 FUN_141856430 body=406 status=ok
// SIG undefined FUN_141856430(void)

void FUN_141856430(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (((*(int *)(param_1 + 0x530) == 0) || (*(longlong **)(param_1 + 0x528) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x528) + 0x18))(), cVar5 == '\0')) {
    plVar7 = DAT_1469eaf38;
    puVar6 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
    local_38 = *puVar6;
    local_30 = puVar6[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    (**(code **)(*plVar7 + 0x108))(plVar7,&local_38);
    return;
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  local_48 = *puVar6;
  local_40 = (longlong *)puVar6[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)();
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
  if (*(int *)(param_1 + 0x530) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x528);
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,&local_48);
  plVar7 = local_40;
  if (local_40 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar2 = local_40 + 1;
  lVar4 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar4 != 1) {
    return;
  }
  (**(code **)*local_40)(local_40);
  LOCK();
  piVar1 = (int *)((longlong)plVar7 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
  (**(code **)(*plVar7 + 8))(plVar7,1);
  return;
}



// FUNCTION 1418565d0 FUN_1418565d0 body=266 status=ok
// SIG undefined FUN_1418565d0(void)

void FUN_1418565d0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar7 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*param_1 + 0x18);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*param_1 + 0x18);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1418566e0 FUN_1418566e0 body=329 status=ok
// SIG undefined FUN_1418566e0(void)

void FUN_1418566e0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  if (iVar3 < param_2) {
    if (iVar5 != 0) {
      plVar4 = (longlong *)(*param_1 + 0x18);
      do {
        if (plVar4[0xb] != 0) {
          FMemory::Free();
        }
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
        plVar2 = (longlong *)plVar4[-2];
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
        plVar4 = plVar4 + 0x11;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar3 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar5 != 0) {
      plVar4 = (longlong *)(*param_1 + 0x18);
      do {
        if (plVar4[0xb] != 0) {
          FMemory::Free();
        }
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
        plVar2 = (longlong *)plVar4[-2];
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
        plVar4 = plVar4 + 0x11;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 141856830 FUN_141856830 body=411 status=ok
// SIG undefined FUN_141856830(void)

void FUN_141856830(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x40);
      do {
        plVar3 = (longlong *)plVar7[2];
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
        plVar7 = plVar7 + 0xb;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x40);
      do {
        plVar3 = (longlong *)plVar7[2];
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
        plVar7 = plVar7 + 0xb;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1418569d0 FUN_1418569d0 body=307 status=ok
// SIG undefined FUN_1418569d0(void)

void FUN_1418569d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 300);
  lVar6 = *(longlong *)(param_1 + 0x120);
  iVar7 = *(int *)(param_1 + 0x128);
  if (iVar4 < param_2) {
    if (lVar6 == 0) {
      lVar6 = param_1;
    }
    if (iVar7 != 0) {
      plVar5 = (longlong *)(lVar6 + 0x40);
      do {
        plVar3 = (longlong *)*plVar5;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar5 = plVar5 + 9;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 300);
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (iVar4 != param_2) {
      FUN_141858550(param_1,param_2);
    }
  }
  else {
    if (lVar6 == 0) {
      lVar6 = param_1;
    }
    if (iVar7 != 0) {
      plVar5 = (longlong *)(lVar6 + 0x40);
      do {
        plVar3 = (longlong *)*plVar5;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar5 = plVar5 + 9;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}



// FUNCTION 141856b10 FUN_141856b10 body=530 status=ok
// SIG undefined FUN_141856b10(void)

void FUN_141856b10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar7 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar7 != 0) {
      pcVar6 = (char *)(*param_1 + 0xc0);
      do {
        if (*pcVar6 != '\0') {
          *pcVar6 = '\0';
          if (*(longlong *)(pcVar6 + -0x10) != 0) {
            FMemory::Free();
          }
          if (pcVar6[-0x18] != '\0') {
            pcVar6[-0x18] = '\0';
          }
        }
        plVar3 = *(longlong **)(pcVar6 + -0x50);
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
        plVar3 = *(longlong **)(pcVar6 + -0x60);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        plVar3 = *(longlong **)(pcVar6 + -0x70);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pcVar6 = pcVar6 + 0xf0;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar7 != 0) {
      pcVar6 = (char *)(*param_1 + 0xc0);
      do {
        if (*pcVar6 != '\0') {
          *pcVar6 = '\0';
          if (*(longlong *)(pcVar6 + -0x10) != 0) {
            FMemory::Free();
          }
          if (pcVar6[-0x18] != '\0') {
            pcVar6[-0x18] = '\0';
          }
        }
        plVar3 = *(longlong **)(pcVar6 + -0x50);
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
        plVar3 = *(longlong **)(pcVar6 + -0x60);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        plVar3 = *(longlong **)(pcVar6 + -0x70);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pcVar6 = pcVar6 + 0xf0;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 141856d30 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *local_38 + (longlong)local_1c * 0x18;
      TDefaultDelete<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>::operator()
                (lVar3 + 8,*(undefined8 *)(lVar3 + 8));
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141856e40 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (*local_38 + (longlong)local_1c * 0x28);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141856f50 ResetBatches body=12 status=ok
// SIG undefined ResetBatches(void)

void FSlateElementBatcher::ResetBatches(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



// FUNCTION 141856f60 FUN_141856f60 body=196 status=ok
// SIG undefined FUN_141856f60(void)

void FUN_141856f60(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0) {
    if (iVar3 != 0) {
      pcVar2 = (char *)(*(longlong *)(param_1 + 0x10) + 0x28);
      do {
        if (*(longlong *)(pcVar2 + 8) != 0) {
          FMemory::Free();
        }
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
        }
        pcVar2 = pcVar2 + 0x40;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (iVar1 != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
  }
  else {
    if (iVar3 != 0) {
      pcVar2 = (char *)(*(longlong *)(param_1 + 0x10) + 0x28);
      do {
        if (*(longlong *)(pcVar2 + 8) != 0) {
          FMemory::Free();
        }
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
        }
        pcVar2 = pcVar2 + 0x40;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  return;
}



// FUNCTION 141857030 FUN_141857030 body=1300 status=ok
// SIG undefined FUN_141857030(void)

void FUN_141857030(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *plStack_b0;
  int local_a8;
  uint local_98;
  uint uStack_94;
  uint local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  iVar7 = *(int *)(param_1 + 0xa34);
  lVar10 = *(longlong *)(param_1 + 0xa28);
  iVar11 = *(int *)(param_1 + 0xa30);
  if (iVar7 < 0) {
    if (iVar11 != 0) {
      plVar13 = (longlong *)(lVar10 + 8);
      do {
        plVar5 = (longlong *)*plVar13;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar13 = plVar13 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar7 = *(int *)(param_1 + 0xa34);
    }
    *(undefined4 *)(param_1 + 0xa30) = 0;
    if (iVar7 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0xa28),0);
    }
  }
  else {
    if (iVar11 != 0) {
      plVar13 = (longlong *)(lVar10 + 8);
      do {
        plVar5 = (longlong *)*plVar13;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar13 = plVar13 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    *(undefined4 *)(param_1 + 0xa30) = 0;
  }
  iVar7 = *(int *)(param_1 + 0xa5c);
  lVar10 = *(longlong *)(param_1 + 0xa50);
  iVar11 = *(int *)(param_1 + 0xa58);
  if (iVar7 < 0) {
    if (iVar11 != 0) {
      plVar13 = (longlong *)(lVar10 + 8);
      do {
        plVar5 = (longlong *)*plVar13;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar13 = plVar13 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar7 = *(int *)(param_1 + 0xa5c);
    }
    *(undefined4 *)(param_1 + 0xa58) = 0;
    if (iVar7 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0xa50),0);
    }
  }
  else {
    if (iVar11 != 0) {
      plVar13 = (longlong *)(lVar10 + 8);
      do {
        plVar5 = (longlong *)*plVar13;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar13 = plVar13 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    *(undefined4 *)(param_1 + 0xa58) = 0;
  }
  FUN_141856b10(param_1 + 0x78,0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x28) != &local_b8) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&plStack_b0);
    plVar13 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_b0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        }
      }
    }
  }
  FUN_141857550(param_1 + 0x98);
  FUN_141856f60();
  uStack_d4 = 1;
  plVar13 = (longlong *)(param_1 + 0x9a8);
  local_d8 = 0;
  uVar4 = *(uint *)(param_1 + 0x9d0);
  puVar3 = (uint *)(param_1 + 0x9b8);
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar4 != 0) {
    puVar12 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar9 = *puVar12;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar7 = local_d8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar7;
      if (bVar6) goto LAB_14185733f;
      uVar9 = puVar12[lVar10 + 1];
    }
    uStack_d4 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_c4 = (iStack_c0 - iVar7) + 0x1f;
    if ((int)uVar4 < (int)uStack_c4) {
LAB_14185733f:
      uStack_c4 = uVar4;
    }
  }
  uStack_94 = *(uint *)(param_1 + 0x9d0);
  uStack_58 = CONCAT44(uStack_d4,local_d8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_c4;
  local_68 = CONCAT44(uStack_bc,iStack_c0);
  local_a8 = (int)uStack_94 >> 5;
  local_98 = -1 << ((byte)uStack_94 & 0x1f);
  local_90 = uStack_94 & 0xffffffe0;
  iStack_80 = local_d8;
  uStack_7c = uStack_d4;
  local_78 = puVar3;
  local_60 = plVar13;
  puStack_50 = puVar3;
  uStack_40 = local_68;
  local_88 = plVar13;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uVar9 = uStack_94;
  if (uStack_94 != uVar4) {
    puVar12 = *(uint **)(param_1 + 0x9c8);
    if (*(uint **)(param_1 + 0x9c8) == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar9 = puVar12[local_a8] & local_98;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_a8;
      local_90 = local_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar6) goto LAB_14185741c;
      uVar9 = puVar12[lVar10 + 1];
      local_98 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (local_90 - iVar7) + 0x1f;
    uVar9 = uStack_94;
    if ((int)uVar4 < (int)uStack_94) {
LAB_14185741c:
      uStack_94 = uVar4;
      uVar9 = uVar4;
    }
  }
  while (((uStack_6c != uVar9 || (local_78 != puVar3)) || (local_88 != plVar13))) {
    lVar10 = *local_88 + (longlong)(int)uStack_6c * 0x28;
    FUN_141857550(*(undefined8 *)(*local_88 + 0x10 + (longlong)(int)uStack_6c * 0x28));
    iVar7 = *(int *)(param_1 + 0xa00);
    *(int *)(param_1 + 0xa00) = iVar7 + 1;
    if (*(int *)(param_1 + 0xa04) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x9f8,iVar7);
    }
    puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x9f8));
    *puVar8 = *(undefined8 *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar10 + 0x18);
    puVar8[1] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(plVar13);
  plVar13 = (longlong *)(param_1 + 0xa08);
  *(undefined4 *)(param_1 + 0xa10) = 0;
  if ((*(int *)(param_1 + 0xa14) < 0) && (*(int *)(param_1 + 0xa14) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar13,0);
  }
  iVar7 = *(int *)(param_1 + 0xa10);
  *(int *)(param_1 + 0xa10) = iVar7 + 1;
  if (*(int *)(param_1 + 0xa14) < iVar7 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar7);
  }
  *(longlong *)(*plVar13 + (longlong)iVar7 * 8) = param_1 + 0x98;
  FMemStackBase::FreeChunks(param_1 + 0xa70,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xaa0) = 1;
  return;
}



// FUNCTION 141857550 FUN_141857550 body=689 status=ok
// SIG undefined FUN_141857550(void)

void FUN_141857550(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x88c);
  lVar5 = *(longlong *)(param_1 + 0x880);
  iVar7 = *(int *)(param_1 + 0x888);
  if (iVar4 < 0) {
    if (iVar7 != 0) {
      do {
        FUN_1417f7410(lVar5);
        lVar5 = lVar5 + 0x130;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x88c);
    }
    *(undefined4 *)(param_1 + 0x888) = 0;
    if (iVar4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<304,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x880),0);
    }
  }
  else {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_1417f7410(lVar5);
      lVar5 = lVar5 + 0x130;
    }
    *(undefined4 *)(param_1 + 0x888) = 0;
  }
  *(undefined4 *)(param_1 + 0x898) = 0;
  if ((*(int *)(param_1 + 0x89c) < 0) && (*(int *)(param_1 + 0x89c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x890,0);
  }
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if ((*(int *)(param_1 + 0x8ac) < 0) && (*(int *)(param_1 + 0x8ac) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8a0,0);
  }
  iVar4 = *(int *)(param_1 + 0x8bc);
  lVar5 = *(longlong *)(param_1 + 0x8b0);
  iVar7 = *(int *)(param_1 + 0x8b8);
  if (iVar4 < 0) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar5 + 0x98);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar6 = plVar6 + 0x18;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x8bc);
    }
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    if (iVar4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x8b0),0);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar5 + 0x98);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar6 = plVar6 + 0x18;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x8b8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x8cc);
  lVar5 = *(longlong *)(param_1 + 0x8c0);
  iVar7 = *(int *)(param_1 + 0x8c8);
  if (iVar4 < 0) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar5 + 0x68);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar6 = plVar6 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x8cc);
    }
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    if (iVar4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x8c0),0);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar5 + 0x68);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar6 = plVar6 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x8c8) = 0;
  }
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  if ((*(int *)(param_1 + 0x8dc) < 0) && (*(int *)(param_1 + 0x8dc) != 0)) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8d0,0);
  }
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  if ((*(int *)(param_1 + 0x8ec) < 0) && (*(int *)(param_1 + 0x8ec) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x8e0,0);
  }
  return;
}



// FUNCTION 141857810 ResetToDefault body=290 status=ok
// SIG undefined ResetToDefault(void)

void FCoreStyle::ResetToDefault(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FName::FName(local_res8,"CoreStyle",1);
  plVar5 = (longlong *)FUN_1418094a0(local_18,local_res8);
  if (DAT_1469eb140 != (longlong *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*DAT_1469eb140 + 8))();
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Remove(&DAT_1464b9f40,*puVar6);
  }
  local_20 = (longlong *)plVar5[1];
  DAT_1469eb140 = (longlong *)*plVar5;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469eb148,&local_20);
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
  if (DAT_1469eb140 == (longlong *)0x0) {
    ResetToDefault();
  }
  else {
    FUN_141854190();
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
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 141857940 FUN_141857940 body=48 status=ok
// SIG undefined FUN_141857940(void)

void FUN_141857940(undefined8 param_1,float *param_2)

{
  SWindow::ReshapeWindow
            (param_2[2] - *param_2,*(undefined8 *)param_2,
             CONCAT44(param_2[3] - param_2[1],param_2[2] - *param_2));
  return;
}



// FUNCTION 141857970 ReshapeWindow body=445 status=ok
// SIG undefined ReshapeWindow(void)

void SWindow::ReshapeWindow(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8;
  
  fVar6 = (float)(int)(float)param_2;
  fVar3 = (float)(int)(float)((ulonglong)param_2 >> 0x20);
  local_res8 = CONCAT44(fVar3,fVar6);
  fVar5 = (float)-((int)ROUND(-0.5 - (float)param_3 * 2.0) >> 1);
  fVar2 = -0.5 - (float)((ulonglong)param_3 >> 0x20) * 2.0;
  fVar4 = (float)-((int)ROUND(fVar2) >> 1);
  if ((((*(float *)(param_1 + 0x368) != fVar6) || (*(float *)(param_1 + 0x36c) != fVar3)) ||
      (*(float *)(param_1 + 0x378) != fVar5)) || (*(float *)(param_1 + 0x37c) != fVar4)) {
    if (*(longlong *)(param_1 + 0x498) == 0) {
      *(undefined8 *)(param_1 + 0x358) = param_2;
      *(undefined8 *)(param_1 + 0x360) = param_3;
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_14185a3f0(fVar2,local_res8);
      (**(code **)(**(longlong **)(param_1 + 0x498) + 8))
                (*(longlong **)(param_1 + 0x498),(int)fVar6,(int)fVar3,(int)fVar5,(int)fVar4);
      plVar1 = *(longlong **)(param_1 + 0x498);
    }
    if (plVar1 != (longlong *)0x0) {
      local_res8 = param_3;
      (**(code **)(*plVar1 + 0xe8))(param_3,&local_res8);
      param_3 = local_res8;
    }
    *(undefined8 *)(param_1 + 0x378) = param_3;
  }
  return;
}



// FUNCTION 141857b30 FUN_141857b30 body=541 status=ok
// SIG undefined FUN_141857b30(void)

void FUN_141857b30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  *(byte *)(param_1 + 0x41c) = *(byte *)(param_1 + 0x41c) & 0xf8;
  local_res8 = param_2;
  dVar4 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  fVar3 = (float)local_res8;
  fVar5 = local_res8._4_4_;
  *(double *)(param_1 + 0x408) = dVar4 - (double)*(float *)(param_1 + 0x418);
  if ((((*(byte *)(param_1 + 0x350) & 2) == 0) &&
      ((*(int *)(param_1 + 0x30c) - 2U & 0xfffffffd) != 0)) &&
     ((*(byte *)(param_1 + 0x351) & 1) == 0)) {
    FUN_1418454d0(param_1,&local_38,0);
    local_res8._0_4_ = local_30 + local_38 + fVar3;
    fVar5 = local_34 + local_2c + fVar5;
    if ((*(byte *)(param_1 + 0x350) & 1) != 0) {
      fVar5 = fVar5 + 24.0;
    }
  }
  local_res8 = CONCAT44(fVar5,(float)local_res8);
  if (((float)local_res8 != *(float *)(param_1 + 0x378)) || (fVar5 != *(float *)(param_1 + 0x37c)))
  {
    fVar3 = (float)local_res8;
    if (*(char *)(param_1 + 0x47c) != '\0') {
      fVar3 = *(float *)(param_1 + 0x478);
    }
    fVar6 = (float)local_res8;
    if ((float)local_res8 <= fVar3) {
      local_res8 = CONCAT44(fVar5,fVar3);
      fVar6 = fVar3;
    }
    pfVar2 = (float *)(param_1 + 0x488);
    if (*(char *)(param_1 + 0x48c) == '\0') {
      pfVar2 = (float *)&local_res8;
    }
    fVar3 = *pfVar2;
    if (fVar3 <= fVar6) {
      local_res8 = CONCAT44(local_res8._4_4_,fVar3);
      fVar6 = fVar3;
    }
    pfVar2 = (float *)(param_1 + 0x480);
    if (*(char *)(param_1 + 0x484) == '\0') {
      pfVar2 = (float *)((longlong)&local_res8 + 4);
    }
    fVar3 = *pfVar2;
    if (fVar5 <= fVar3) {
      local_res8 = CONCAT44(fVar3,(float)local_res8);
      fVar5 = fVar3;
    }
    pfVar2 = (float *)(param_1 + 0x490);
    if (*(char *)(param_1 + 0x494) == '\0') {
      pfVar2 = (float *)((longlong)&local_res8 + 4);
    }
    fVar3 = *pfVar2;
    if (fVar3 <= fVar5) {
      local_res8 = CONCAT44(fVar3,(float)local_res8);
      fVar5 = fVar3;
    }
    plVar1 = *(longlong **)(param_1 + 0x498);
    if (plVar1 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x360) = local_res8;
    }
    else {
      (**(code **)(*plVar1 + 8))
                (plVar1,(int)*(float *)(param_1 + 0x368),(int)*(float *)(param_1 + 0x36c),
                 -((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1),
                 -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1));
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x498);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,&local_res8);
  }
  *(undefined8 *)(param_1 + 0x378) = local_res8;
  return;
}



// FUNCTION 141857d50 FUN_141857d50 body=163 status=ok
// SIG undefined FUN_141857d50(void)

void FUN_141857d50(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x120);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x48);
    pvVar1 = *(void **)((longlong)param_1 + 0x120);
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
        *(void **)((longlong)param_1 + 0x120) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x48);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x120) = uVar2;
  return;
}



// FUNCTION 141857e00 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<2,FDefaultAllocator>::ForElementType<FSlateElementBatch>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x1c0);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xe0);
    pvVar1 = *(void **)((longlong)param_1 + 0x1c0);
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
        *(void **)((longlong)param_1 + 0x1c0) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xe0);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x1c0) = uVar2;
  return;
}



// FUNCTION 141857eb0 FUN_141857eb0 body=132 status=ok
// SIG undefined FUN_141857eb0(void)

void FUN_141857eb0(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x48,0);
      iVar2 = (int)(uVar1 / 0x48);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    FUN_141857d50(param_1,0,iVar2,0x48);
  }
  *(int *)(param_1 + 300) = iVar2;
  return;
}


