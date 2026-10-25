// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140afe1f0 FUN_140afe1f0 body=1631 status=ok
// SIG undefined FUN_140afe1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_140afe1f0(longlong param_1,void *param_2,longlong *param_3,ulonglong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_308 [32];
  undefined4 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined8 local_2b8;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  float local_290;
  undefined8 local_288;
  float local_280;
  float local_278;
  float local_274;
  float local_270;
  undefined8 local_268;
  float local_260;
  undefined8 local_258 [4];
  byte local_238 [12];
  float local_22c;
  undefined4 local_20c;
  undefined4 local_208;
  float local_204;
  byte local_1a8 [12];
  float local_19c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  lVar3 = (**(code **)(*param_3 + 0x148))(param_3);
  plVar4 = (longlong *)UWidgetComponent::GetUserWidgetObject(param_3);
  FUN_140a63ba0(param_3);
  if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
    local_110 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_108 = 0x10000;
    local_100 = 0;
    local_2b8 = 0;
    local_118 = 0;
    local_104 = 0;
    local_f4 = 0x101;
    local_fc = 0;
    local_102 = 0;
    local_f8 = 0;
    FUN_1426d3dd0(local_258);
    FUN_1426ea8d0(local_258,2,0);
    (**(code **)(*plVar4 + 0x740))(plVar4,&local_118,local_258);
    FCollisionQueryParams::AddIgnoredActor(&local_118,param_3);
    lVar1 = param_3[0x2d];
    if (lVar1 == 0) {
      local_288 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_280 = DAT_1468b5d98;
    }
    else {
      local_288 = *(undefined8 *)(lVar1 + 0x220);
      local_280 = *(float *)(lVar1 + 0x228);
    }
    local_290 = local_280;
    local_298 = local_288;
    pfVar5 = (float *)(**(code **)(*param_3 + 0x308))(param_3,&local_2b8);
    fVar10 = pfVar5[1];
    fVar7 = *pfVar5;
    local_2a0 = pfVar5[2];
    fVar6 = fVar7 * fVar7 + fVar10 * fVar10 + local_2a0 * local_2a0;
    if (fVar6 == 1.0) {
      local_2a8 = *(ulonglong *)pfVar5;
      local_2a0 = pfVar5[2];
    }
    else {
      if (1e-08 <= fVar6) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
        local_2b8 = CONCAT44(local_2b8._4_4_,fVar8);
        fVar7 = fVar8 * fVar7;
        local_2a0 = fVar8 * local_2a0;
        fVar8 = fVar8 * fVar10;
      }
      else {
        local_2a0 = DAT_1468b5d98;
        fVar8 = DAT_1468b5d94;
        fVar7 = DAT_1468b5d90;
      }
      local_2a8 = CONCAT44(fVar8,fVar7);
    }
    pfVar5 = (float *)FUN_140b2bed0(param_3);
    if (((0.0001 < ABS(*pfVar5)) || (0.0001 < ABS(pfVar5[1]))) || (0.0001 < ABS(pfVar5[2]))) {
      pfVar5 = (float *)FUN_140b2bed0(param_3);
      fVar10 = *pfVar5 - (float)local_298;
      fVar6 = pfVar5[1] - local_298._4_4_;
      local_2b0 = pfVar5[2] - local_290;
      fVar7 = fVar6 * fVar6 + fVar10 * fVar10 + local_2b0 * local_2b0;
      if (fVar7 == 1.0) {
        local_2b8 = CONCAT44(fVar6,fVar10);
      }
      else {
        if (1e-08 <= fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar10 = fVar8 * fVar10;
          local_2b0 = fVar8 * local_2b0;
          fVar8 = fVar8 * fVar6;
        }
        else {
          local_2b0 = DAT_1468b5d98;
          fVar8 = DAT_1468b5d94;
          fVar10 = DAT_1468b5d90;
        }
        local_2b8 = CONCAT44(fVar8,fVar10);
      }
      local_2a8 = local_2b8;
      local_2a0 = local_2b0;
    }
    fVar10 = *(float *)(param_1 + 0x3c);
    local_268 = local_288;
    local_260 = local_280;
    local_278 = (float)local_2a8 * fVar10 + (float)local_298;
    local_274 = local_2a8._4_4_ * fVar10 + local_298._4_4_;
    local_270 = local_2a0 * fVar10 + local_290;
    _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
    local_19c = 1.0;
    uVar2 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_1 + 0x58));
    local_2d8 = local_258;
    local_2e0 = &local_118;
    local_2e8 = (undefined4 *)CONCAT44(local_2e8._4_4_,uVar2);
    UWorld::LineTraceSingleByChannel(lVar3,local_1a8,&local_268,&local_278);
    fVar10 = *(float *)(param_1 + 0x5c);
    _guard_xfg_dispatch_icall_nop(local_238,0,0x90);
    local_22c = 1.0;
    if (0.0 < fVar10) {
      local_288 = CONCAT44(fVar10,2);
      uVar2 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_1 + 0x60));
      local_2c8 = local_258;
      local_2d0 = &local_118;
      local_2d8 = &local_288;
      local_2e0 = (undefined8 *)CONCAT44(local_2e0._4_4_,uVar2);
      local_2e8 = &DAT_1464aa810;
      UWorld::SweepSingleByChannel(lVar3,local_238,&local_268,&local_278);
    }
    FUN_140729f20(param_2,local_1a8);
    if ((0.0 < fVar10) &&
       ((((local_238[0] & 1) != 0 && ((local_1a8[0] & 1) == 0)) || (local_22c < local_19c)))) {
      FUN_140729f20(param_2,local_238);
      local_2a0 = -local_204;
      local_2a8 = CONCAT44(local_208,local_20c) ^ 0x8000000080000000;
    }
    if (param_4 != (ulonglong *)0x0) {
      *param_4 = local_2a8;
      *(float *)(param_4 + 1) = local_2a0;
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140afe850 FUN_140afe850 body=154 status=ok
// SIG undefined FUN_140afe850(void)

longlong FUN_140afe850(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x5b8);
    iVar3 = *(int *)(param_1 + 0x5c0);
    for (lVar4 = lVar1; lVar4 != (longlong)iVar3 * 0x20 + lVar1; lVar4 = lVar4 + 0x20) {
      cVar2 = FUN_14058c1e0(lVar4,param_2);
      if (cVar2 != '\0') {
        iVar3 = (int)(lVar4 - lVar1 >> 5);
        if (iVar3 < 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x5c0) <= iVar3) {
          return 0;
        }
        return (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x5b8);
      }
    }
  }
  return 0;
}



// FUNCTION 140afe8f0 FUN_140afe8f0 body=390 status=ok
// SIG undefined FUN_140afe8f0(void)

void FUN_140afe8f0(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_3 = 0;
  *param_4 = 0;
  lVar6 = *(longlong *)(param_1 + 0x4e0);
  if (lVar6 != 0) {
    lVar4 = UFocusButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(lVar6 + 0x698) != 0)) &&
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x698) + 0x508), lVar6 != 0)) {
      plVar8 = *(longlong **)(lVar6 + 0x2c70);
      goto LAB_140afe98e;
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x4d8);
LAB_140afe98e:
  if ((plVar8 != (longlong *)0x0) && (*(longlong *)(param_2 + 0x38) != 0)) {
    lVar4 = FUN_142dfdfe0();
    for (lVar6 = *(longlong *)(param_2 + 0x38); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar4) {
        if (*(longlong *)(param_2 + 0x38) == 0) {
          return;
        }
        uVar5 = FUN_142e035e0();
        lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar5);
        if (lVar6 == 0) {
          return;
        }
        if (*(longlong *)(param_2 + 0x38) == 0) goto LAB_140afea16;
        lVar7 = FUN_142dfdfe0();
        lVar4 = *(longlong *)(param_2 + 0x38);
        lVar1 = lVar4;
        goto joined_r0x000140afea06;
      }
    }
  }
  return;
joined_r0x000140afea06:
  if (lVar1 == 0) goto LAB_140afea16;
  if (lVar1 == lVar7) goto LAB_140afea18;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000140afea06;
LAB_140afea16:
  lVar4 = 0;
LAB_140afea18:
  uVar3 = FUN_142dce8d0(lVar6,lVar4);
  *param_3 = uVar3;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    lVar7 = FUN_142dfdfe0();
    lVar4 = *(longlong *)(param_2 + 0x38);
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar7) goto LAB_140afea50;
    }
  }
  lVar4 = 0;
LAB_140afea50:
  uVar3 = FUN_142dcf470(lVar6,lVar4);
  *param_4 = uVar3;
  return;
}



// FUNCTION 140afea80 FUN_140afea80 body=244 status=ok
// SIG undefined FUN_140afea80(void)

void FUN_140afea80(longlong param_1,longlong param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (lVar2 != 0) {
    lVar4 = UFocusButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x554);
      if ((iVar1 < 0) || (*(int *)(lVar2 + 0x6c0) <= iVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar4 = *(longlong *)(param_2 + 0x40);
        plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x6b8));
        *param_4 = 0;
        *param_3 = 0;
        plVar5 = (longlong *)*plVar6;
        plVar6 = plVar5 + (longlong)(int)plVar6[1] * 2;
        while( true ) {
          if (plVar5 == plVar6) {
            return;
          }
          if (*plVar5 == lVar4) break;
          plVar5 = plVar5 + 2;
        }
        *param_3 = (uint)*(byte *)(plVar5 + 1);
        *param_4 = (uint)*(byte *)((longlong)plVar5 + 9);
        return;
      }
    }
  }
  *param_4 = 0;
  *param_3 = 0;
  return;
}



// FUNCTION 140afeb80 FUN_140afeb80 body=8 status=ok
// SIG undefined FUN_140afeb80(void)

longlong FUN_140afeb80(longlong param_1)

{
  return param_1 + 0x2f8;
}



// FUNCTION 140afeb90 FUN_140afeb90 body=266 status=ok
// SIG undefined FUN_140afeb90(void)

longlong FUN_140afeb90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 == (longlong *)0x0) {
    return param_1 + 0x2f8;
  }
  cVar4 = (**(code **)(*param_2 + 0x768))(param_2);
  if (cVar4 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x3b0);
    plVar1 = plVar7 + *(int *)(param_1 + 0x3b8);
    if (plVar7 != plVar1) {
      do {
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar6 = param_2;
          if (!bVar3) {
            plVar6 = (longlong *)0x0;
          }
          FUN_14123bd20(lVar2,plVar6);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
      return param_1 + 0x2f8;
    }
    return param_1 + 0x2f8;
  }
  return param_1 + 0x2f8;
}



// FUNCTION 140afeca0 FUN_140afeca0 body=198 status=ok
// SIG undefined FUN_140afeca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140afeca0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    bVar1 = false;
    goto LAB_140afed11;
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
LAB_140afece8:
    lVar4 = FUN_140b825a0(param_3);
    bVar1 = false;
    if (lVar4 == 0) goto LAB_140afed11;
    if ((*(char *)(lVar4 + 0xa48) == '\0') && (*(char *)(lVar4 + 0x750) == '\0')) {
      bVar1 = 0 < *(int *)(lVar4 + 0x74c);
      goto LAB_140afed11;
    }
  }
  else {
    cVar2 = FUN_142c48f60(*(longlong *)(param_1 + 0x98),param_3,0);
    if (cVar2 == '\0') goto LAB_140afece8;
  }
  bVar1 = true;
LAB_140afed11:
  puVar5 = local_38;
  if (bVar1) {
    puVar5 = local_2c;
  }
  lVar4 = 0x28;
  if (!bVar1) {
    lVar4 = 0x60;
  }
  uVar3 = FUN_142caac20(lVar4 + param_1,puVar5,param_3);
  uVar6 = FUN_142cc4350(uVar3,0);
  *param_2 = uVar6;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140afed70 FUN_140afed70 body=57 status=ok
// SIG undefined FUN_140afed70(void)

undefined8 FUN_140afed70(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    iVar2 = *param_2;
    if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = iVar2;
    }
    uVar4 = FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x28),0);
    return uVar4;
  }
  return 0;
}



// FUNCTION 140afedb0 FUN_140afedb0 body=387 status=ok
// SIG undefined FUN_140afedb0(void)

longlong * FUN_140afedb0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x550) == 0) goto LAB_140afeef3;
  FUN_142f5af50(*(longlong *)(param_1 + 0x550) + 0xb8,&local_res8);
  if (local_res8 != 0) {
    lVar2 = FUN_142f71d80();
    for (lVar3 = local_res8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        *param_2 = local_res8;
        return param_2;
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x550);
  lVar4 = lVar3 + 0x90;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x98)) || (*(longlong *)(lVar3 + 0xa0) == 0))
    goto LAB_140afeef3;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x98) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) goto LAB_140afeef3;
  }
  lVar3 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_142f71d80();
    lVar3 = lVar2;
    do {
      if (lVar3 == lVar4) {
        lVar4 = FUN_142f71d80();
        lVar3 = lVar2;
        do {
          if (lVar3 == lVar4) {
            *param_2 = lVar2;
            return param_2;
          }
          lVar3 = *(longlong *)(lVar3 + 0x30);
        } while (lVar3 != 0);
        break;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_140afeef3:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140afef40 FUN_140afef40 body=238 status=ok
// SIG undefined FUN_140afef40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140afef40(longlong param_1,float *param_2)

{
  longlong lVar1;
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
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar5 = (float)(_DAT_1468684a0 & _DAT_1468684b0);
    fVar6 = (float)(uRam00000001468684a4 & uRam00000001468684b4);
    fVar7 = (float)(uRam00000001468684a8 & uRam00000001468684b8);
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = fRam00000001468684ac;
  }
  else {
    fVar8 = *(float *)(lVar1 + 0x210);
    fVar9 = *(float *)(lVar1 + 0x214);
    fVar10 = *(float *)(lVar1 + 0x218);
    fVar12 = *(float *)(lVar1 + 0x220);
    fVar13 = *(float *)(lVar1 + 0x224);
    fVar14 = *(float *)(lVar1 + 0x228);
    fVar5 = *(float *)(lVar1 + 0x230);
    fVar6 = *(float *)(lVar1 + 0x234);
    fVar7 = *(float *)(lVar1 + 0x238);
    fVar11 = *(float *)(lVar1 + 0x21c);
  }
  fVar5 = *(float *)(param_1 + 0x580) * fVar5;
  fVar6 = *(float *)(param_1 + 0x584) * fVar6;
  fVar7 = *(float *)(param_1 + 0x588) * fVar7;
  fVar2 = fVar7 * fVar9 - fVar6 * fVar10;
  fVar3 = fVar5 * fVar10 - fVar7 * fVar8;
  fVar4 = fVar6 * fVar8 - fVar5 * fVar9;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  *param_2 = (fVar4 * fVar9 - fVar3 * fVar10) + fVar11 * fVar2 + fVar5 + fVar12;
  param_2[2] = (fVar3 * fVar8 - fVar2 * fVar9) + fVar11 * fVar4 + fVar7 + fVar14;
  param_2[1] = (fVar2 * fVar10 - fVar4 * fVar8) + fVar11 * fVar3 + fVar6 + fVar13;
  return param_2;
}



// FUNCTION 140aff070 FUN_140aff070 body=535 status=ok
// SIG undefined FUN_140aff070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aff070(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  if (param_2 <= 0.0) {
    if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
      if (*(char *)((longlong)param_1 + 0x4fb) == '\x01') {
        (**(code **)(*param_1 + 0x730))(0,2);
      }
      else if (*(char *)((longlong)param_1 + 0x4fb) == '\x03') {
        (**(code **)(*param_1 + 0x730))(0,4);
      }
    }
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uStack_b0 = 0;
      local_b8 = &LAB_140aff030;
      uVar2 = AActor::GetWorldTimerManager(param_1);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar1;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0xee,&local_a8,param_2);
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar1 = FMemory::Realloc(plVar3,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140aff290 FUN_140aff290 body=120 status=ok
// SIG undefined FUN_140aff290(void)

void FUN_140aff290(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    lVar1 = FUN_140afdab0(param_1,1);
    if (lVar1 != 0) {
      FUN_140b0d310(param_1,lVar1);
      if (((*(char *)(param_1 + 0x570) == '\0') &&
          (lVar1 = *(longlong *)(param_1 + 0x568), lVar1 != 0)) && (*(longlong *)(lVar1 + 8) != 0))
      {
        lVar2 = 0;
        if (*(longlong *)(param_1 + 0x4d8) != 0) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0xc90);
        }
        if (lVar2 != 0) {
          *(undefined1 *)(param_1 + 0x570) = 1;
          FUN_140e61510(lVar2,*(undefined8 *)(lVar1 + 8));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140aff310 FUN_140aff310 body=74 status=ok
// SIG undefined FUN_140aff310(void)

void FUN_140aff310(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x571) == '\0') {
    *(undefined1 *)(param_1 + 0x571) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x570) == '\0') {
    lVar1 = FUN_140afdab0(param_1,0);
    if (lVar1 != 0) {
      FUN_140b0d310(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140aff360 FUN_140aff360 body=86 status=ok
// SIG undefined FUN_140aff360(void)

void FUN_140aff360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res10 [3];
  
  plVar2 = *(longlong **)(param_1 + 0x5a0);
  plVar1 = plVar2 + *(int *)(param_1 + 0x5a8);
  local_res10[0] = param_2;
  if (plVar2 != plVar1) {
    while (*plVar2 != param_2) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar1) {
        FUN_140b12950(param_1);
        return;
      }
    }
    TArray<FName,FDefaultAllocator>::Remove((longlong *)(param_1 + 0x5a0),local_res10);
  }
  FUN_140b12950(param_1);
  return;
}



// FUNCTION 140aff3c0 FUN_140aff3c0 body=31 status=ok
// SIG undefined FUN_140aff3c0(void)

bool FUN_140aff3c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140afe850();
  if (lVar1 != 0) {
    return 0 < *(int *)(lVar1 + 0x18);
  }
  return false;
}



// FUNCTION 140aff3e0 FUN_140aff3e0 body=209 status=ok
// SIG undefined FUN_140aff3e0(void)

void FUN_140aff3e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x798) != 0) {
    uVar2 = AActor::GetWorldTimerManager();
    FUN_142880530(uVar2,param_1 + 0x798);
    *(undefined8 *)(param_1 + 0x798) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x738);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x5b8))(plVar1,0);
    puVar4 = *(undefined8 **)(param_1 + 0x5c0);
    uVar5 = (longlong)*(int *)(param_1 + 0x5c8) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x5c8) < puVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        FUN_1423b2f40(*(undefined8 *)(param_1 + 0x738),*puVar4,0);
        FUN_142db9430(*(undefined8 *)(param_1 + 0x738),1);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return;
}



// FUNCTION 140aff4c0 FUN_140aff4c0 body=84 status=ok
// SIG undefined FUN_140aff4c0(void)

void FUN_140aff4c0(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x790);
  }
  if ((param_1[0xe7] != 0) && (fVar2 - *(float *)(param_1[0xe7] + 0x36c) <= 1.0)) {
    return;
  }
  FUN_140aff3e0(param_1);
  return;
}



// FUNCTION 140aff520 FUN_140aff520 body=255 status=ok
// SIG undefined FUN_140aff520(void)

void FUN_140aff520(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    lVar2 = UUGButton::GetPrivateStaticClass();
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
      puVar4 = *(undefined8 **)(param_1 + 0x660);
      iVar5 = *(int *)(param_1 + 0x668);
      local_38 = (undefined8 *)0x0;
      local_30 = iVar5;
      if (iVar5 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_38,iVar5,0);
        puVar6 = local_38;
        do {
          *puVar6 = *puVar4;
          FText::FText(puVar6 + 1,puVar4 + 1);
          puVar6 = puVar6 + 4;
          puVar4 = puVar4 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      uVar3 = FText::FText(local_28,param_1 + 0x670);
      FUN_140f31550(param_2,&local_38,uVar3,param_1);
    }
  }
  return;
}



// FUNCTION 140aff620 FUN_140aff620 body=293 status=ok
// SIG undefined FUN_140aff620(void)

void FUN_140aff620(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if ((*(longlong *)(param_1 + 0x550) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x578), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x930))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x550) + 0x30),1);
    uVar6 = 0;
    FUN_1423b60f0(*(undefined8 *)(param_1 + 0x578),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x550) + 0x70),1,1,0,0x3f800000);
    FUN_142cac740(*(undefined8 *)(param_1 + 0x578),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x550) + 0x78));
    FUN_142398770(*(undefined8 *)(param_1 + 0x578),*(longlong *)(param_1 + 0x550) + 0x40,0,0,
                  uVar6 & 0xffffff00);
    lVar3 = *(longlong *)(param_1 + 0x578);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x550) + 0x80);
    puVar5 = (undefined8 *)(lVar3 + 0x6f0);
    if (puVar5 != puVar4) {
      _Src = (void *)*puVar4;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x550) + 0x88);
      *(int *)(lVar3 + 0x6f8) = iVar1;
      if ((iVar1 == 0) && (*(int *)(lVar3 + 0x6fc) == 0)) {
        *(undefined4 *)(lVar3 + 0x6fc) = 0;
        return;
      }
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}



// FUNCTION 140aff760 FUN_140aff760 body=164 status=ok
// SIG undefined FUN_140aff760(void)

void FUN_140aff760(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  FUN_142dede60(param_1 + 0x28,1);
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) | 4;
  plVar3 = (longlong *)(param_1 + -0x458);
  if ((*(byte *)(param_1 + 0x360) & 4) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x288) == 0) {
    if (*(longlong *)(param_1 + 0x290) == 0) {
      return;
    }
  }
  else {
    cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x288),plVar3,0);
    if (cVar1 != '\0') {
      uVar2 = 2;
      goto LAB_140aff7e9;
    }
  }
  if ((*(longlong *)(param_1 + 0x290) == 0) ||
     (cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x290),plVar3,0), cVar1 == '\0')) {
    uVar2 = 5;
  }
  else {
    if ((byte)(*(char *)(param_1 + 0xa3) - 1U) < 2) {
      return;
    }
    uVar2 = 4;
  }
LAB_140aff7e9:
                    /* WARNING: Could not recover jumptable at 0x000140aff7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x730))(plVar3,uVar2);
  return;
}



// FUNCTION 140aff810 FUN_140aff810 body=37 status=ok
// SIG undefined FUN_140aff810(void)

void FUN_140aff810(longlong param_1)

{
  FUN_142dede60(param_1 + 0x28,1);
  FUN_140af4350(param_1 + -0x458);
  return;
}



// FUNCTION 140aff840 FUN_140aff840 body=525 status=ok
// SIG undefined FUN_140aff840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140aff840(longlong param_1,float *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
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
  
  lVar1 = *(longlong *)(param_1 + 0x588);
  if (lVar1 == 0) {
    return 0;
  }
  auVar10 = *(undefined1 (*) [16])(lVar1 + 0x230);
  fVar3 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar5 = auVar10._8_4_;
  fVar13 = *(float *)(lVar1 + 0x210) * _DAT_146868810;
  fVar14 = *(float *)(lVar1 + 0x214) * fRam0000000146868814;
  fVar15 = *(float *)(lVar1 + 0x218) * fRam0000000146868818;
  fVar16 = *(float *)(lVar1 + 0x21c) * fRam000000014686881c;
  auVar10 = rcpps(in_XMM5,auVar10);
  fVar17 = (float)((uint)(*param_2 - *(float *)(lVar1 + 0x220)) & _DAT_1468684b0);
  fVar18 = (float)((uint)(param_2[1] - *(float *)(lVar1 + 0x224)) & uRam00000001468684b4);
  fVar19 = (float)((uint)(param_2[2] - *(float *)(lVar1 + 0x228)) & uRam00000001468684b8);
  fVar20 = *(float *)(lVar1 + 0x230) * *(float *)(lVar1 + 0x710);
  fVar6 = fVar19 * fVar14 - fVar18 * fVar15;
  fVar7 = fVar17 * fVar15 - fVar19 * fVar13;
  fVar8 = fVar18 * fVar13 - fVar17 * fVar14;
  fVar21 = *(float *)(lVar1 + 0x234) * *(float *)(lVar1 + 0x714);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar22 = *(float *)(lVar1 + 0x238) * *(float *)(lVar1 + 0x718);
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar3;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar4;
  fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar5;
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar3;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar4;
  fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar5;
  fVar3 = ((fVar8 * fVar14 - fVar7 * fVar15) + fVar16 * fVar6 + fVar17) *
          (float)(-(uint)((float)((uint)fVar3 & _DAT_146868550) <= _DAT_146868800) & (uint)fVar9 ^
                 (uint)fVar9);
  fVar4 = ((fVar6 * fVar15 - fVar8 * fVar13) + fVar16 * fVar7 + fVar18) *
          (float)(-(uint)((float)((uint)fVar4 & uRam0000000146868554) <= fRam0000000146868804) &
                  (uint)fVar11 ^ (uint)fVar11);
  fVar5 = ((fVar7 * fVar13 - fVar6 * fVar14) + fVar16 * fVar8 + fVar19) *
          (float)(-(uint)((float)((uint)fVar5 & uRam0000000146868558) <= fRam0000000146868808) &
                  (uint)fVar12 ^ (uint)fVar12);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (*(char *)(param_1 + 0x581) == '\0') {
    if (((ABS(fVar3) <= ABS(fVar20)) && (ABS(fVar4) <= ABS(fVar21))) && (ABS(fVar5) <= ABS(fVar22)))
    {
      return CONCAT71(uVar2,1);
    }
  }
  else if (ABS(fVar5) <= ABS(fVar22)) {
    fVar5 = fVar20 * fVar20;
    if (fVar20 * fVar20 <= fVar21 * fVar21) {
      fVar5 = fVar21 * fVar21;
    }
    return CONCAT71(uVar2,fVar4 * fVar4 + fVar3 * fVar3 <= fVar5);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140affa50 FUN_140affa50 body=140 status=ok
// SIG undefined FUN_140affa50(void)

undefined1 FUN_140affa50(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [32];
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x590) != 0) {
    plVar2 = (longlong *)FUN_142f41f60();
    if (plVar2 != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x288))(plVar2,local_18);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar3;
      }
      uVar4 = FName::FName(local_res8,puVar6,1);
      uVar5 = thunk_FUN_1422ca050();
      uVar1 = FUN_140a0b540(uVar5,uVar4);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 140affae0 FUN_140affae0 body=451 status=ok
// SIG undefined FUN_140affae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140affae0(longlong param_1,longlong param_2,undefined8 param_3,float param_4,float *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  float local_10;
  
  lVar3 = *(longlong *)(param_2 + 0x168);
  if (lVar3 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar3 + 0x220);
    local_10 = *(float *)(lVar3 + 0x228);
  }
  fVar7 = *param_5 - (float)local_18;
  fVar8 = param_5[1] - (float)((ulonglong)local_18 >> 0x20);
  if (fVar8 * fVar8 + fVar7 * fVar7 + (param_5[2] - local_10) * (param_5[2] - local_10) <= param_4)
  {
    if ((*(longlong *)(param_1 + 0x90) != 0) && (cVar4 = FUN_142c48f60(), cVar4 == '\0')) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
LAB_140affc13:
      if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
        plVar6 = *(longlong **)(param_1 + 0xe8);
        plVar1 = plVar6 + *(int *)(param_1 + 0xf0);
        if (plVar6 != plVar1) {
          do {
            iVar2 = *(int *)(*plVar6 + 0x90);
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar2) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                *plVar6 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              return 0;
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar1);
        }
      }
      if ((0 < *(int *)(param_1 + 0xa0)) &&
         (cVar4 = FUN_142def1c0(param_1 + 0x98,param_2), cVar4 == '\0')) {
        return 0;
      }
      return 1;
    }
    plVar6 = *(longlong **)(param_1 + 0xd8);
    plVar1 = plVar6 + *(int *)(param_1 + 0xe0);
    if (plVar6 != plVar1) {
      do {
        iVar2 = *(int *)(*plVar6 + 0x90);
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != *plVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_140affc13;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  return 0;
}



// FUNCTION 140affcb0 FUN_140affcb0 body=360 status=ok
// SIG undefined FUN_140affcb0(void)

void FUN_140affcb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x560) != 0) {
    lVar3 = FUN_141410cb0();
    lVar1 = *(longlong *)(param_1 + 0x560);
    lVar6 = lVar1;
    if (lVar1 != 0) {
      while (lVar6 != lVar3) {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        if (lVar6 == 0) {
          return;
        }
      }
      if ((((lVar1 != 0) && (param_2 != (longlong *)0x0)) && ((char)param_2[0x25] == '\x03')) &&
         (((cVar2 = (**(code **)(*param_2 + 0x950))(param_2), cVar2 == '\0' &&
           ((char)param_2[0x1d8] != '\x03')) &&
          ((*(longlong *)(param_1 + 0x568) == 0 ||
           (cVar2 = FUN_142c48f90(*(longlong *)(param_1 + 0x568),param_2,0), cVar2 != '\0')))))) {
        lVar1 = param_2[0x1cd];
        if (lVar1 != 0) {
          puVar4 = (undefined8 *)FUN_140afef40(param_1,local_18);
          local_28 = *puVar4;
          local_20 = *(undefined4 *)(puVar4 + 1);
          if (*(longlong *)(param_1 + 0x560) != 0) {
            lVar5 = FUN_141410cb0();
            lVar6 = *(longlong *)(param_1 + 0x560);
            for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
              if (lVar3 == lVar5) goto LAB_140affdc0;
            }
          }
          lVar6 = 0;
LAB_140affdc0:
          FUN_142d00740(lVar1,lVar6,param_2,*(undefined4 *)(param_1 + 0x574),0,
                        *(undefined4 *)(param_1 + 0x578),0,&local_28);
        }
        FUN_1413c4a80(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140affe20 FUN_140affe20 body=2842 status=ok
// SIG undefined FUN_140affe20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140affe20(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong **pplVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  longlong **local_270;
  undefined8 local_268;
  undefined8 *local_260;
  undefined1 *local_258;
  longlong *local_248;
  float local_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  float local_210;
  longlong local_208 [2];
  longlong *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [32];
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [4];
  float local_1b4;
  undefined8 local_1b0;
  code *local_1a8;
  longlong local_198 [4];
  undefined8 local_178;
  float local_170;
  int local_168;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 local_128 [16];
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  cVar4 = FWeakObjectPtr::IsValid(param_2);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_2);
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_2);
  lVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
  plVar8 = (longlong *)UWidgetComponent::GetUserWidgetObject(plVar7);
  FUN_140a63ba0(plVar7);
  cVar4 = FUN_140b2f2f0(plVar7);
  if (cVar4 != '\0') {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar10 = plVar7[0x2d];
  if (lVar10 == 0) {
    local_238._0_4_ = (float)DAT_1468b5d90;
    local_238._4_4_ = (float)DAT_1468b5d94;
    local_230 = DAT_1468b5d98;
  }
  else {
    local_238._0_4_ = *(float *)(lVar10 + 0x220);
    local_238._4_4_ = *(float *)(lVar10 + 0x224);
    local_230 = *(float *)(lVar10 + 0x228);
  }
  local_210 = local_230;
  local_218 = (float)local_238;
  uStack_214 = local_238._4_4_;
  pfVar9 = (float *)(**(code **)(*plVar7 + 0x308))(plVar7,&local_248);
  fVar1 = pfVar9[1];
  fVar2 = *pfVar9;
  local_230 = pfVar9[2];
  fVar14 = fVar2 * fVar2 + fVar1 * fVar1 + local_230 * local_230;
  if (fVar14 == 1.0) {
    local_238 = *(longlong **)pfVar9;
    local_230 = pfVar9[2];
  }
  else if (1e-08 <= fVar14) {
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar15 = auVar16._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    local_230 = local_230 * fVar15;
    local_238 = (longlong *)CONCAT44(fVar1 * fVar15,fVar2 * fVar15);
  }
  else {
    local_230 = DAT_1468b5d98;
    local_238 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  local_220 = 0.0;
  local_240 = local_210;
  local_270 = (longlong **)&local_228;
  local_228 = 0;
  local_248 = (longlong *)CONCAT44(uStack_214,local_218);
  local_278 = (undefined4 *)CONCAT44(local_278._4_4_,0x42480000);
  FUN_1405a1e30(&local_138,lVar6,*(undefined8 *)(param_1 + 0x48),&local_248);
  FUN_140591060(&local_138);
  local_118 = _DAT_1468684a0 & _DAT_1468684b0;
  uStack_114 = uRam00000001468684a4 & uRam00000001468684b4;
  uStack_110 = uRam00000001468684a8 & uRam00000001468684b8;
  uStack_10c = uRam00000001468684ac & uRam00000001468684bc;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = uRam00000001468684ac;
  local_270 = (longlong **)0x0;
  local_128._4_4_ = uStack_214;
  local_128._0_4_ = local_218;
  local_128._8_4_ = local_210;
  local_128._12_4_ = 0;
  local_278._0_1_ = 1;
  FUN_14245f910(lVar6,*(undefined8 *)(param_1 + 0x50),&local_138,1);
  local_100 = 0;
  local_108 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_f8 = 0x10000;
  local_f0 = 0;
  local_228 = 0;
  local_f4 = 0;
  local_e4 = 0x101;
  local_ec = 0;
  local_f2 = 0;
  local_e8 = 0;
  FUN_1426d3dd0(local_1e8);
  FUN_1426ea8d0(local_1e8,2,0);
  (**(code **)(*plVar8 + 0x740))(plVar8,&local_108,local_1e8);
  FCollisionQueryParams::AddIgnoredActor(&local_108,plVar7);
  FUN_140afe1f0(param_1,&local_1c8,plVar7,&local_238);
  fVar1 = local_230;
  if ((local_1c8 & 1) != 0) {
    fVar2 = (float)local_238;
    fVar14 = local_238._4_4_;
    local_278 = (undefined4 *)CONCAT71(local_278._1_7_,1);
    local_228 = CONCAT44((float)local_1b0 - local_238._4_4_ * 100.0,
                         local_1b4 - (float)local_238 * 100.0);
    local_220 = local_1b0._4_4_ - local_230 * 100.0;
    FUN_14223c850(plVar7,&local_228,0,0);
    lVar10 = FUN_140b2a700(plVar7);
    if (lVar10 != 0) {
      fVar15 = *(float *)(param_1 + 0x34);
      *(undefined4 *)(lVar10 + 0x1dc) = 0x3f800000;
      *(ulonglong *)(lVar10 + 0x18c) = CONCAT44(fVar15 * fVar14,fVar15 * fVar2);
      *(float *)(lVar10 + 0x194) = fVar15 * fVar1;
    }
    uVar5 = *param_2;
    uVar3 = param_2[1];
    local_228 = 0;
    local_248 = (longlong *)0x0;
    local_240 = 0.0;
    plVar11 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar11 == (longlong *)0x0) {
      if (((local_240 != 0.0) && (local_248 != (longlong *)0x0)) &&
         ((**(code **)(*local_248 + 0x28))(local_248,0), local_248 != (longlong *)0x0)) {
        local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
      }
    }
    else {
      *plVar11 = (longlong)&PTR_GetPoolName_14428b1e8;
      *(undefined4 *)(plVar11 + 1) = uVar5;
      *(undefined4 *)((longlong)plVar11 + 0xc) = uVar3;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar11[3] = lVar10;
      *plVar11 = (longlong)&PTR_GetPoolName_14428b230;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar11,&local_248);
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      lVar10 = FMemory::Realloc(plVar11,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar13 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar13 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    if ((local_240 != 0.0) && (local_248 != (longlong *)0x0)) {
      (**(code **)(*local_248 + 0x30))(local_248,&local_1c8);
    }
    FWeakObjectPtr::operator=(local_1b8,0);
    local_270 = (longlong **)CONCAT44(local_270._4_4_,0xbf800000);
    local_278 = (undefined4 *)((ulonglong)local_278 & 0xffffffffffffff00);
    local_1b0 = 0;
    local_178 = (longlong *)0x0;
    local_168 = 0;
    local_1a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar13,&local_228,&local_1c8,0x3e4ccccd);
    if (local_168 != 0) {
      plVar11 = local_198;
      if (local_178 != (longlong *)0x0) {
        plVar11 = local_178;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
    if (local_240 != 0.0) {
      if (local_248 == (longlong *)0x0) goto LAB_140b007bf;
      (**(code **)(*local_248 + 0x28))(local_248,0);
      if (local_248 != (longlong *)0x0) {
        local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
      }
      local_240 = 0.0;
    }
    if (local_248 != (longlong *)0x0) {
      FMemory::Free(local_248);
    }
    goto LAB_140b007bf;
  }
  FUN_14308b040(plVar7,0);
  local_278 = (undefined4 *)CONCAT71(local_278._1_7_,1);
  local_228 = CONCAT44(local_178._4_4_ - local_238._4_4_ * 100.0,
                       (float)local_178 - (float)local_238 * 100.0);
  local_220 = local_170 - local_230 * 100.0;
  FUN_14223c850(plVar7,&local_228,1,0);
  uVar5 = *param_2;
  local_228 = 0;
  local_248 = (longlong *)0x0;
  local_240 = 0.0;
  uVar3 = param_2[1];
  plVar11 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar11 == (longlong *)0x0) {
    if (((local_240 != 0.0) && (local_248 != (longlong *)0x0)) &&
       ((**(code **)(*local_248 + 0x28))(local_248,0), local_248 != (longlong *)0x0)) {
      local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
    }
  }
  else {
    *plVar11 = (longlong)&PTR_GetPoolName_14428b278;
    *(undefined4 *)(plVar11 + 1) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0xc) = uVar3;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar11[3] = lVar10;
    *plVar11 = (longlong)&PTR_GetPoolName_14428b2c0;
    TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
    ::CreateCopy(plVar11,&local_248);
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    lVar10 = FMemory::Realloc(plVar11,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  if (*(longlong *)(lVar6 + 400) == 0) {
    uVar13 = *(undefined8 *)(lVar6 + 0x3f8);
  }
  else {
    uVar13 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  if ((local_240 != 0.0) && (local_248 != (longlong *)0x0)) {
    (**(code **)(*local_248 + 0x30))(local_248,&local_1c8);
  }
  FWeakObjectPtr::operator=(local_1b8,0);
  local_270 = (longlong **)CONCAT44(local_270._4_4_,0xbf800000);
  local_278 = (undefined4 *)((ulonglong)local_278 & 0xffffffffffffff00);
  local_1b0 = 0;
  local_178 = (longlong *)0x0;
  local_168 = 0;
  local_1a8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar13,&local_228,&local_1c8,0x3e4ccccd);
  if (local_168 != 0) {
    plVar11 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar11 = local_178;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
  if (local_240 == 0.0) {
LAB_140b006f7:
    if (local_248 != (longlong *)0x0) {
      FMemory::Free(local_248);
    }
  }
  else if (local_248 != (longlong *)0x0) {
    (**(code **)(*local_248 + 0x28))(local_248,0);
    if (local_248 != (longlong *)0x0) {
      local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
    }
    local_240 = 0.0;
    goto LAB_140b006f7;
  }
  local_240 = 0.0;
  local_230 = local_210;
  local_270 = &local_248;
  local_248 = (longlong *)0x0;
  local_238 = (longlong *)CONCAT44(uStack_214,local_218);
  local_278 = (undefined4 *)CONCAT44(local_278._4_4_,0x42480000);
  FUN_1405a1e30(&local_138,lVar6,*(undefined8 *)(param_1 + 0x68),&local_238);
  FUN_140591060(&local_138);
  local_118 = _DAT_1468684a0 & _DAT_1468684b0;
  uStack_114 = uRam00000001468684a4 & uRam00000001468684b4;
  uStack_110 = uRam00000001468684a8 & uRam00000001468684b8;
  uStack_10c = uRam00000001468684ac & uRam00000001468684bc;
  local_128._4_4_ = uStack_214;
  local_128._0_4_ = local_218;
  local_128._8_4_ = local_210;
  local_270 = (longlong **)0x0;
  local_128._12_4_ = 0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = uRam00000001468684ac;
  local_278 = (undefined4 *)CONCAT71(local_278._1_7_,1);
  FUN_14245f910(lVar6,*(undefined8 *)(param_1 + 0x80),&local_138,1);
LAB_140b007bf:
  lVar10 = plVar7[0x2d];
  if (lVar10 == 0) {
    local_240 = DAT_1468b5d98;
    pplVar12 = &local_248;
    local_248 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    pplVar12 = (longlong **)&local_238;
    local_230 = *(float *)(lVar10 + 0x228);
    local_238 = *(longlong **)(lVar10 + 0x220);
  }
  local_1f8 = *pplVar12;
  local_1f0 = *(undefined4 *)(pplVar12 + 1);
  local_f4 = CONCAT11(1,(undefined1)local_f4);
  local_208[0] = 0;
  local_208[1] = 0;
  uVar13 = (**(code **)(*plVar8 + 0x748))(plVar8,&local_248,0);
  uVar5 = (**(code **)(*plVar8 + 0x4f8))(plVar8);
  local_258 = local_1e8;
  local_260 = &local_108;
  local_270 = (longlong **)CONCAT44(local_270._4_4_,uVar5);
  local_278 = &DAT_1464aa810;
  local_268 = uVar13;
  UWorld::SweepMultiByChannel(lVar6,local_208,&local_218,local_208 + 2);
  FUN_140b840b0(plVar7,plVar8,local_208);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b00950 FUN_140b00950 body=39 status=ok
// SIG undefined FUN_140b00950(void)

void FUN_140b00950(longlong param_1)

{
  FUN_142dede60(param_1 + 0x28,0);
  FUN_140af42a0(param_1 + -0x458,0);
  return;
}



// FUNCTION 140b00980 FUN_140b00980 body=37 status=ok
// SIG undefined FUN_140b00980(void)

void FUN_140b00980(longlong param_1)

{
  FUN_142dede60(param_1 + 0x28,0);
  FUN_140af4350(param_1 + -0x458);
  return;
}



// FUNCTION 140b009b0 FUN_140b009b0 body=451 status=ok
// SIG undefined FUN_140b009b0(void)

undefined8 FUN_140b009b0(longlong param_1,char param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_res8 = *(undefined8 *)(param_1 + -0x468);
  FName::ToString(&local_res8,local_28);
  bVar2 = false;
  bVar1 = false;
  iVar4 = FUN_141592950(local_28,L"IO_Ali_MayaPlatform",1,0,0xffffffff);
  if ((iVar4 != -1) && (param_3 != 0)) {
    local_res8 = *(undefined8 *)(param_3 + 0x18);
    FName::ToString(&local_res8,&local_38);
    puVar5 = (undefined8 *)FName::ToString(&DAT_1468688d8,local_18);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar5;
    }
    bVar2 = true;
    bVar1 = true;
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
    if ((iVar4 == 0) && (param_2 == '\x01')) {
      bVar3 = true;
      goto LAB_140b00a84;
    }
  }
  bVar3 = false;
LAB_140b00a84:
  if (bVar1) {
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (bVar3) {
    uVar6 = FUN_142a232e0();
    plVar7 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + -0x480) + 0x628))(param_1 + -0x480,uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x638))(plVar7,3);
    }
  }
  if ((*(byte *)(param_1 + 0x7e) & 0x40) == 0) {
    uVar6 = 0;
  }
  else {
    iVar4 = FUN_142235230(param_1 + -0x480);
    if (iVar4 != 3) {
      lVar8 = (**(code **)(*(longlong *)(param_1 + -0x480) + 0x148))(param_1 + -0x480);
      if (lVar8 != 0) {
        uVar6 = (**(code **)(*(longlong *)(param_1 + -0x480) + 0x148))(param_1 + -0x480);
        lVar8 = UWorld::GetGameState<APVPGameState>(uVar6);
        if (lVar8 != 0) {
          FUN_140cd0d00(lVar8,param_2 == '\x01');
        }
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 140b00b80 FUN_140b00b80 body=139 status=ok
// SIG undefined FUN_140b00b80(void)

void FUN_140b00b80(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10;
  
  FUN_140b32680();
  local_10 = 0;
  lVar3 = local_10;
  if (param_2 != (longlong *)0x0) {
    uVar1 = AGFireballProjectile::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x3b0);
    }
  }
  if (lVar3 != 0) {
    local_18 = param_1;
    if (param_1 != 0) {
      uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    }
    FUN_1409b6bc0(lVar3,&local_18);
  }
  return;
}



// FUNCTION 140b00c10 FUN_140b00c10 body=536 status=ok
// SIG undefined FUN_140b00c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b00c10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (((char)param_1[0xb7] == '\0') && (*(char *)((longlong)param_1 + 0x129) != '\x01')) {
    (**(code **)(*param_1 + 0x600))();
    FUN_14223e980(param_1,1);
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      local_98 = FUN_140b024a0;
      uStack_90 = 0;
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_a0 = 0xbf800000;
      local_a8 = 1;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0xf1,&local_88,0x3f000000);
      if (local_28 != 0) {
        plVar4 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar4 = local_38;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b00e30 FUN_140b00e30 body=587 status=ok
// SIG undefined FUN_140b00e30(void)

void FUN_140b00e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_res18;
  code *local_28;
  undefined8 uStack_20;
  
  FUN_140adbf60();
  iVar7 = FUN_142235230(param_1);
  if ((iVar7 != 3) && (param_2 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x678);
    plVar2 = (longlong *)*plVar1;
    iVar7 = *(int *)(param_1 + 0x680);
    lVar10 = (longlong)iVar7;
    for (plVar9 = plVar2; plVar9 != plVar2 + lVar10 * 3; plVar9 = plVar9 + 3) {
      if (*plVar9 == param_2) {
        iVar4 = (int)(((longlong)plVar9 - (longlong)plVar2) / 0x18);
        if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x680))) {
          if (plVar2[(longlong)iVar4 * 3 + 2] != 0) {
            FUN_142227350(plVar2[(longlong)iVar4 * 3 + 2],0,
                          CONCAT71((int7)((ulonglong)plVar2 >> 8),1));
            *(undefined8 *)((longlong)iVar4 * 0x18 + 0x10 + *(longlong *)(param_1 + 0x678)) = 0;
          }
          goto LAB_140b00ef5;
        }
        break;
      }
    }
    *(int *)(param_1 + 0x680) = iVar7 + 1;
    if (*(int *)(param_1 + 0x684) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1);
    }
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + lVar10 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 8 + lVar10 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar10 * 0x18) = 0;
    if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x680))) {
      *(longlong *)(lVar10 * 0x18 + *plVar1) = param_2;
    }
LAB_140b00ef5:
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    local_28 = thunk_FUN_140b0ec80;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnReRolledInventorySourceSet",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res18,pwVar6 + 2,1);
    FUN_1407260e0(param_2 + 0x1c60,param_1,&local_28,local_res18);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = thunk_FUN_140b0ec80;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnReRolledInventoryActorReady",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res18,pwVar6 + 2,1);
    FUN_1407260e0(param_2 + 0x1c50,param_1,&local_28,local_res18);
  }
  return;
}



// FUNCTION 140b01080 FUN_140b01080 body=377 status=ok
// SIG undefined FUN_140b01080(void)

void FUN_140b01080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FUN_140adc160();
  iVar4 = FUN_142235230(param_1);
  if ((iVar4 != 3) && (param_2 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x678);
    plVar2 = (longlong *)*plVar1;
    for (plVar8 = plVar2; plVar8 != plVar2 + (longlong)*(int *)(param_1 + 0x680) * 3;
        plVar8 = plVar8 + 3) {
      if (*plVar8 == param_2) {
        lVar9 = ((longlong)plVar8 - (longlong)plVar2) / 6 +
                ((longlong)plVar8 - (longlong)plVar2 >> 0x3f);
        iVar4 = (int)(lVar9 >> 2) - (int)(lVar9 >> 0x3f);
        if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x680))) {
          lVar9 = *(longlong *)(param_1 + 0x668);
          lVar6 = (longlong)iVar4;
          lVar3 = plVar2[lVar6 * 3 + 1];
          if (plVar2[lVar6 * 3 + 2] != 0) {
            FUN_142227350(plVar2[lVar6 * 3 + 2],0,CONCAT71((int7)((ulonglong)plVar2 >> 8),1));
            *(undefined8 *)(*plVar1 + 0x10 + lVar6 * 0x18) = 0;
          }
          iVar7 = *(int *)(param_1 + 0x680);
          iVar5 = (iVar7 - iVar4) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar6 * 0x18 + *plVar1),
                       (void *)(*plVar1 + (longlong)(iVar4 + 1) * 0x18),(longlong)iVar5 * 0x18);
            iVar7 = *(int *)(param_1 + 0x680);
          }
          *(int *)(param_1 + 0x680) = iVar7 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
          if (lVar3 == lVar9) {
            FUN_140af5670(param_1);
          }
        }
        break;
      }
    }
    FUN_1407665e0(param_2 + 0x1c60,param_1);
    FUN_1407665e0(param_2 + 0x1c50,param_1);
  }
  return;
}



// FUNCTION 140b01200 FUN_140b01200 body=471 status=ok
// SIG undefined FUN_140b01200(void)

void FUN_140b01200(longlong param_1,longlong param_2,char param_3,int param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x568);
  *(undefined1 *)(param_1 + 0x570) = 0;
  if ((lVar9 != 0) && (*(longlong *)(lVar9 + 8) == param_2)) {
    if (param_3 == '\0') {
      if (*(char *)(lVar9 + 0x38) == '\0') {
        bVar4 = false;
        *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + 1;
        iVar6 = *(int *)(param_1 + 0x51c);
        iVar7 = *(int *)(param_1 + 0x510) + -1;
        lVar9 = (longlong)iVar7;
        if (-1 < iVar7) {
          lVar8 = lVar9 << 4;
          bVar4 = false;
          do {
            lVar2 = *(longlong *)(param_1 + 0x508);
            if (((*(int *)(lVar8 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar8 + lVar2), plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2), cVar5 == '\0')) {
              bVar4 = true;
            }
            lVar8 = lVar8 + -0x10;
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
          iVar6 = *(int *)(param_1 + 0x51c);
        }
        *(int *)(param_1 + 0x51c) = iVar6 + -1;
        if (bVar4) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(param_1 + 0x508),0);
        }
      }
    }
    else {
      iVar6 = FUN_140e4fee0(param_2);
      if (param_4 == iVar6) {
        lVar9 = *(longlong *)(param_1 + 0x568);
        if (lVar9 != 0) {
          *(undefined1 *)(lVar9 + 0x38) = 1;
          FUN_1414bbed0(param_1,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x40));
        }
      }
      else {
        FUN_1407fcc20(param_1 + 0x4f0,param_4,param_2);
      }
      bVar4 = false;
      uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x568) + 0x38);
      *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + 1;
      iVar6 = *(int *)(param_1 + 0x534);
      iVar7 = *(int *)(param_1 + 0x528) + -1;
      lVar9 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar8 = lVar9 << 4;
        bVar4 = false;
        do {
          lVar2 = *(longlong *)(param_1 + 0x520);
          if (((*(int *)(lVar8 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar8 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,uVar1), cVar5 == '\0')) {
            bVar4 = true;
          }
          lVar8 = lVar8 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        iVar6 = *(int *)(param_1 + 0x534);
      }
      *(int *)(param_1 + 0x534) = iVar6 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x520),0);
      }
      FUN_1414bbe20(param_1,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x568) + 0x40));
      if ((*(longlong *)(param_1 + 0x4d8) != 0) && (param_2 != 0)) {
        if (*(char *)(param_2 + 0x50) == '\0') {
          FUN_140d04be0();
        }
        else {
          Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit();
        }
      }
    }
  }
  return;
}



// FUNCTION 140b013e0 FUN_140b013e0 body=1308 status=ok
// SIG undefined FUN_140b013e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b013e0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_150;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_78;
  
  if (param_3 == 0) {
    return;
  }
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_11c = *(undefined4 *)(param_3 + 0x118);
  local_124 = *(undefined8 *)(param_3 + 0x110);
  local_110 = *(undefined4 *)(param_3 + 0x124);
  local_104 = *(undefined4 *)(param_3 + 0x130);
  local_100 = *(undefined8 *)(param_3 + 0x28);
  local_f0 = *(undefined8 *)(param_3 + 0x50);
  local_118 = *(undefined8 *)(param_3 + 0x11c);
  local_f8 = *(undefined8 *)(param_3 + 0x58);
  local_10c = *(undefined8 *)(param_3 + 0x128);
  plVar1 = (longlong *)(param_1 + -0x460);
  local_128 = param_2;
  FUN_1413c4ac0(plVar1,&local_128);
  if ((*(byte *)(param_1 + 0x10c) & 2) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = FUN_1429e18b0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (((((*(byte *)(param_1 + 0x10c) & 8) != 0) && (*(char *)(param_1 + 0x318) == '\0')) &&
      (*(longlong *)(param_1 + 800) == 0)) && (*(char *)(param_1 + 0x9b) == '\x04')) {
    if (*(float *)(param_1 + 0x110) <= 0.0) {
      FUN_140b08f10(plVar1);
    }
    else {
      lVar5 = (**(code **)(*plVar1 + 0x148))();
      if (lVar5 != 0) {
        local_148 = FUN_140b08f10;
        fStack_140 = 0.0;
        lVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x110);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar6 + 1,plVar1);
          *(float *)(plVar6 + 2) = (float)local_148;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_148._4_4_;
          *(float *)(plVar6 + 3) = fStack_140;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_13c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar5;
          *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_e8 = 0;
        local_e0 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_e8);
        }
        FWeakObjectPtr::operator=(local_d8,0);
        local_150 = 0xbf800000;
        local_d0 = 0;
        local_98 = (longlong *)0x0;
        local_88 = 0;
        local_158 = 0;
        local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar9,param_1 + 800,&local_e8,uVar2);
        if (local_88 != 0) {
          plVar8 = local_b8;
          if (local_98 != (longlong *)0x0) {
            plVar8 = local_98;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          lVar5 = FMemory::Realloc(plVar6,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
  }
  local_148 = *(code **)(param_3 + 0x11c);
  fVar13 = (float)((ulonglong)local_148 >> 0x20);
  fVar10 = fVar13 * fVar13 + (float)local_148 * (float)local_148;
  if (fVar10 == 1.0) {
    fStack_140 = *(float *)(param_3 + 0x124);
    fVar10 = (float)local_148;
    if (*(float *)(param_3 + 0x124) == 0.0) goto LAB_140b017f7;
  }
  else {
    if (fVar10 < 1e-08) {
      local_148 = (code *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fStack_140 = DAT_1468b5d98;
      fVar13 = DAT_1468b5d94;
      fVar10 = DAT_1468b5d90;
      goto LAB_140b017f7;
    }
    auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar12._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
    fVar10 = (float)local_148 * fVar11;
    fVar13 = fVar13 * fVar11;
    local_148 = (code *)CONCAT44(fVar13,fVar10);
  }
  fStack_140 = 0.0;
LAB_140b017f7:
  if (((fVar10 == 0.0) && (fVar13 == 0.0)) && (fStack_140 == 0.0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    local_148 = (code *)0x3f800000;
    fStack_140 = 0.0;
  }
  if (*(char *)(param_1 + 0x9b) == '\x04') {
    *(undefined1 *)(param_1 + 0x2a0) = 1;
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_3 + 0x128);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_3 + 0x130);
    *(undefined8 *)(param_1 + 700) = *(undefined8 *)(param_3 + 0x110);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_3 + 0x118);
    uVar7 = 0;
    if ((*(char *)(param_1 + 400) != '\0') && (uVar7 = 0, *(char *)(param_1 + 0x1a0) != '\0')) {
      uVar7 = 1;
    }
    FUN_140b0cba0(plVar1,&local_148);
    FUN_140b104c0(plVar1,lVar3,uVar7);
  }
  return;
}



// FUNCTION 140b01900 FUN_140b01900 body=139 status=ok
// SIG undefined FUN_140b01900(void)

void FUN_140b01900(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10;
  
  FUN_140b32f10();
  local_10 = 0;
  lVar3 = local_10;
  if (param_2 != (longlong *)0x0) {
    uVar1 = AGFireballProjectile::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x3b0);
    }
  }
  if (lVar3 != 0) {
    local_18 = param_1;
    if (param_1 != 0) {
      uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    }
    FUN_1409be8b0(lVar3,&local_18);
  }
  return;
}



// FUNCTION 140b01990 FUN_140b01990 body=42 status=ok
// SIG undefined FUN_140b01990(void)

void FUN_140b01990(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x4fb) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140b019b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x730))(param_1,2);
    return;
  }
  if (*(char *)((longlong)param_1 + 0x4fb) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140b019a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x730))(param_1,4);
    return;
  }
  return;
}



// FUNCTION 140b019c0 FUN_140b019c0 body=60 status=ok
// SIG undefined FUN_140b019c0(void)

void FUN_140b019c0(longlong *param_1)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x600))();
  plVar1 = (longlong *)param_1[0xac];
  *(undefined1 *)((longlong)param_1 + 0x571) = 3;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b019ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x280))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140b01a00 FUN_140b01a00 body=58 status=ok
// SIG undefined FUN_140b01a00(void)

void FUN_140b01a00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x600))();
  *(undefined1 *)((longlong)param_1 + 0x571) = 4;
  if ((longlong *)param_1[0xac] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b01a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0xac] + 0x288))();
    return;
  }
  return;
}



// FUNCTION 140b01a40 FUN_140b01a40 body=444 status=ok
// SIG undefined FUN_140b01a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b01a40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  lVar1 = param_1[0x8e];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_140b10430;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x92,&local_98,(int)lVar1);
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
  return;
}



// FUNCTION 140b01c10 FUN_140b01c10 body=59 status=ok
// SIG undefined FUN_140b01c10(void)

void FUN_140b01c10(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_140b3ffc0(param_2);
  }
  FUN_1413b2bc0(param_1,param_2);
  return;
}



// FUNCTION 140b01c50 thunk_FUN_1413b2c00 body=5 status=ok
// SIG undefined thunk_FUN_1413b2c00(void)

void thunk_FUN_1413b2c00(void)

{
  FUN_1413b2c00();
  return;
}



// FUNCTION 140b01c60 FUN_140b01c60 body=136 status=ok
// SIG undefined FUN_140b01c60(void)

void FUN_140b01c60(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  if (param_2 == 0) goto LAB_140b01ccb;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 1) {
LAB_140b01cb8:
    fVar4 = 1.0;
  }
  else {
    iVar2 = *param_3;
    if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = iVar2;
    }
    fVar4 = (float)FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x28),0);
    if (fVar4 <= 0.0) goto LAB_140b01cb8;
  }
  FUN_140b325a0(param_2,fVar4);
LAB_140b01ccb:
  FUN_1413b2c00(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b01cf0 FUN_140b01cf0 body=136 status=ok
// SIG undefined FUN_140b01cf0(void)

void FUN_140b01cf0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  if (param_2 == 0) goto LAB_140b01d5b;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 1) {
LAB_140b01d48:
    fVar4 = 1.0;
  }
  else {
    iVar2 = *param_3;
    if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = iVar2;
    }
    fVar4 = (float)FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x28),0);
    if (fVar4 <= 0.0) goto LAB_140b01d48;
  }
  FUN_140b325d0(param_2,fVar4);
LAB_140b01d5b:
  FUN_1413b2c00(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b01d80 FUN_140b01d80 body=129 status=ok
// SIG undefined FUN_140b01d80(void)

void FUN_140b01d80(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if (((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x30), 0 < iVar1)) &&
     (*(char *)(param_2 + 0x128) == '\x03')) {
    iVar2 = *param_3;
    if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = iVar2;
    }
    uVar4 = FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x28),0);
    FUN_140b32640(param_2,uVar4);
  }
  FUN_1413b2c00(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b01e10 FUN_140b01e10 body=1019 status=ok
// SIG undefined FUN_140b01e10(void)

void FUN_140b01e10(longlong param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_38;
  uint local_30;
  uint local_2c;
  
  cVar1 = *(char *)(param_1 + 0x550);
  if (cVar1 == '\x01') {
    if (0.0 < *param_2) {
      FUN_140b10b30(param_1,1);
      return;
    }
    if (*param_2 < 0.0) {
      FUN_140b10b30(param_1,0xffffffff);
      return;
    }
  }
  else if ((byte)(cVar1 - 2U) < 2) {
    if (cVar1 == '\x02') {
      lVar5 = FUN_140afb070();
    }
    else {
      lVar5 = FUN_140afafe0();
    }
    if (lVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0x554);
      uVar8 = 0;
      local_2c = 0;
      local_38 = 0;
      local_30 = 0;
      if (*(char *)(param_1 + 0x550) == '\x02') {
        if ((iVar2 < 0) || (*(int *)(param_1 + 0x580) <= iVar2)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar7 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x578);
        }
        else {
          lVar7 = param_1 + 0x5d8;
        }
        lVar11 = *(longlong *)(lVar7 + 0x30);
        lVar7 = lVar11 + (longlong)*(int *)(lVar7 + 0x38) * 0x48;
        uVar9 = uVar8;
        uVar10 = uVar8;
        for (; lVar11 != lVar7; lVar11 = lVar11 + 0x48) {
          lVar3 = *(longlong *)(lVar11 + 0x30);
          if (((lVar3 != lVar5) && (lVar3 != 0)) && (*(char *)(lVar3 + 0x7b0) != '\0')) {
            local_30 = (int)uVar10 + 1;
            if ((int)uVar9 < (int)local_30) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar10);
            }
            *(longlong *)(local_38 + (longlong)(int)uVar10 * 8) = lVar3;
            uVar9 = (ulonglong)local_2c;
            uVar10 = (ulonglong)local_30;
          }
        }
      }
      else {
        if ((iVar2 < 0) || (*(int *)(param_1 + 0x580) <= iVar2)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar7 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x578);
        }
        else {
          lVar7 = param_1 + 0x5d8;
        }
        iVar2 = *(int *)(param_1 + 0x55c);
        if ((iVar2 < 0) || (*(int *)(lVar7 + 0x38) <= iVar2)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (bVar4) {
          lVar7 = lVar7 + (longlong)iVar2 * 0x48;
        }
        lVar11 = *(longlong *)(lVar7 + 0x38);
        lVar7 = (longlong)*(int *)(lVar7 + 0x40) * 0x50 + lVar11;
        uVar9 = uVar8;
        uVar10 = uVar8;
        for (; lVar11 != lVar7; lVar11 = lVar11 + 0x50) {
          lVar3 = *(longlong *)(lVar11 + 0x48);
          if (((lVar3 != lVar5) && (lVar3 != 0)) && (*(char *)(lVar3 + 0x7b0) != '\0')) {
            local_30 = (int)uVar10 + 1;
            if ((int)uVar9 < (int)local_30) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar10);
            }
            *(longlong *)(local_38 + (longlong)(int)uVar10 * 8) = lVar3;
            uVar9 = (ulonglong)local_2c;
            uVar10 = (ulonglong)local_30;
          }
        }
      }
      lVar5 = FUN_1411dfa70(*(undefined8 *)(param_1 + 0x4d8),param_2,lVar5,&local_38,
                            *(undefined4 *)(param_1 + 0x5c8),*(undefined4 *)(param_1 + 0x5cc),
                            *(undefined4 *)(param_1 + 0x5d0),*(undefined4 *)(param_1 + 0x5d4),
                            param_1 + 0x618);
      if (lVar5 != 0) {
        lVar7 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar2 = *(int *)(param_1 + 0x554);
          if (*(char *)(param_1 + 0x550) == '\x02') {
            if ((iVar2 < 0) || (*(int *)(param_1 + 0x580) <= iVar2)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar7 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x578);
            }
            else {
              lVar7 = param_1 + 0x5d8;
            }
            if (0 < *(int *)(lVar7 + 0x38)) {
              plVar6 = (longlong *)(*(longlong *)(lVar7 + 0x30) + 0x30);
              uVar9 = uVar8;
              do {
                if (*plVar6 == lVar5) {
                  FUN_140b0d6a0(param_1,uVar9);
                  break;
                }
                uVar9 = (ulonglong)((int)uVar9 + 1);
                uVar8 = uVar8 + 1;
                plVar6 = plVar6 + 9;
              } while ((longlong)uVar8 < (longlong)*(int *)(lVar7 + 0x38));
            }
          }
          else {
            if ((iVar2 < 0) || (*(int *)(param_1 + 0x580) <= iVar2)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar7 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x578);
            }
            else {
              lVar7 = param_1 + 0x5d8;
            }
            iVar2 = *(int *)(param_1 + 0x55c);
            if ((iVar2 < 0) || (*(int *)(lVar7 + 0x38) <= iVar2)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            lVar7 = *(longlong *)(lVar7 + 0x30);
            if (bVar4) {
              lVar7 = lVar7 + (longlong)iVar2 * 0x48;
            }
            if (0 < *(int *)(lVar7 + 0x40)) {
              plVar6 = (longlong *)(*(longlong *)(lVar7 + 0x38) + 0x48);
              uVar9 = uVar8;
              do {
                if (*plVar6 == lVar5) {
                  FUN_140b0d430(param_1,uVar9);
                  break;
                }
                uVar9 = (ulonglong)((int)uVar9 + 1);
                uVar8 = uVar8 + 1;
                plVar6 = plVar6 + 10;
              } while ((longlong)uVar8 < (longlong)*(int *)(lVar7 + 0x40));
            }
          }
        }
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b02210 FUN_140b02210 body=198 status=ok
// SIG undefined FUN_140b02210(void)

void FUN_140b02210(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_3 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)(param_3 + 0x4d0) == param_4)) {
      plVar1 = (longlong *)(param_1 + 0x6c0);
      plVar3 = (longlong *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x6c8);
      for (plVar6 = plVar3; plVar6 != plVar3 + iVar2; plVar6 = plVar6 + 1) {
        if (*plVar6 == param_3) {
          if ((int)((longlong)plVar6 - (longlong)plVar3 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x6c8) = iVar2 + 1;
      if (*(int *)(param_1 + 0x6cc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_3;
    }
  }
  return;
}



// FUNCTION 140b022e0 FUN_140b022e0 body=440 status=ok
// SIG undefined FUN_140b022e0(void)

void FUN_140b022e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar2 = (**(code **)(*param_3 + 0x780))(param_3), cVar2 != '\0')) &&
       (*(longlong *)(param_1 + 0x560) != 0)) {
      lVar4 = FUN_141410cb0();
      lVar3 = *(longlong *)(param_1 + 0x560);
      lVar7 = lVar3;
      if (lVar3 != 0) {
        while (lVar7 != lVar4) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          if (lVar7 == 0) {
            return;
          }
        }
        if ((((lVar3 != 0) && ((char)param_3[0x25] == '\x03')) &&
            ((cVar2 = (**(code **)(*param_3 + 0x950))(param_3), cVar2 == '\0' &&
             ((char)param_3[0x1d8] != '\x03')))) &&
           ((*(longlong *)(param_1 + 0x568) == 0 ||
            (cVar2 = FUN_142c48f90(*(longlong *)(param_1 + 0x568),param_3,0), cVar2 != '\0')))) {
          lVar3 = param_3[0x1cd];
          if (lVar3 != 0) {
            puVar5 = (undefined8 *)FUN_140afef40(param_1,local_18);
            local_28 = *puVar5;
            local_20 = *(undefined4 *)(puVar5 + 1);
            if (*(longlong *)(param_1 + 0x560) != 0) {
              lVar6 = FUN_141410cb0();
              lVar7 = *(longlong *)(param_1 + 0x560);
              for (lVar4 = lVar7; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
                if (lVar4 == lVar6) goto LAB_140b02440;
              }
            }
            lVar7 = 0;
LAB_140b02440:
            FUN_142d00740(lVar3,lVar7,param_3,*(undefined4 *)(param_1 + 0x574),0,
                          *(undefined4 *)(param_1 + 0x578),0,&local_28);
          }
          FUN_1413c4a80(param_1,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b024a0 FUN_140b024a0 body=153 status=ok
// SIG undefined FUN_140b024a0(void)

void FUN_140b024a0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)param_1[0xe7];
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)param_1[0xe7] + 0x828))();
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    uVar4 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar4,param_1 + 0xf1);
    param_1[0xf1] = 0;
  }
  FUN_14223e980(param_1,2);
  return;
}



// FUNCTION 140b02540 FUN_140b02540 body=61 status=ok
// SIG undefined FUN_140b02540(void)

void FUN_140b02540(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14302d370();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_143002cf0(lVar2,param_1[0xab]);
    return;
  }
  return;
}



// FUNCTION 140b02580 FUN_140b02580 body=167 status=ok
// SIG undefined FUN_140b02580(void)

void FUN_140b02580(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong local_res8 [4];
  
  uVar1 = AArchVisCharacter::StaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xc0] = lVar2;
  uVar1 = UBlindWidget::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xbf] = lVar2;
  FUN_140b0c450(param_1);
  if ((((char)param_1[0xaa] != '\0') && (param_1[0xc0] != 0)) && (param_1[0xb6] != 0)) {
    local_res8[0] = 0;
    cVar3 = FUN_142dedf80(param_1 + 0x90,param_1 + 0xb1,local_res8);
    if ((cVar3 != '\0') && (local_res8[0] != 0)) {
      FUN_142f6c000(param_1[0xc0]);
    }
  }
  return;
}



// FUNCTION 140b02630 FUN_140b02630 body=27 status=ok
// SIG undefined FUN_140b02630(void)

void FUN_140b02630(undefined8 param_1)

{
  FUN_140af39e0();
  FUN_140aff620(param_1);
  return;
}



// FUNCTION 140b02650 FUN_140b02650 body=131 status=ok
// SIG undefined FUN_140b02650(void)

void FUN_140b02650(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8;
  char local_res9;
  
  FUN_140b93d80(param_2,DAT_1468688c0);
  lVar1 = param_1[0x8d];
  if ((char)lVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x8d) = 0;
    local_res8 = 0;
    local_res9 = (char)lVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x8b,&local_res8);
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,"InHyperHoop",1);
  FUN_142cff080(param_1[0x90],0,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x000140b026cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0))(param_1,0);
  return;
}



// FUNCTION 140b026f0 FUN_140b026f0 body=366 status=ok
// SIG undefined FUN_140b026f0(void)

void FUN_140b026f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1[0xad] != 0) && ((char)param_1[0x25] == '\x03')) {
    (**(code **)(*param_1 + 0x600))();
    *(undefined1 *)((longlong)param_1 + 0x571) = 2;
    if ((longlong *)param_1[0xab] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xab] + 0x288))();
    }
    if ((longlong *)param_1[0xac] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xac] + 0x288))();
    }
    FUN_141321e70(param_1);
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xaf);
    param_1[0xaf] = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xb0);
    param_1[0xb0] = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xb1);
    param_1[0xb1] = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xb2);
    param_1[0xb2] = 0;
  }
  return;
}



// FUNCTION 140b02860 FUN_140b02860 body=261 status=ok
// SIG undefined FUN_140b02860(void)

void FUN_140b02860(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    uVar6 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar6,param_1 + 0xee);
    param_1[0xee] = 0;
  }
  if (((*(byte *)((longlong)param_1 + 0x56c) & 6) == 6) && (param_1[0xe7] != 0)) {
    FUN_1423974f0(param_1[0xe7],1);
  }
  if ((char)param_1[0x25] == '\x03') {
    if (param_1[0xeb] == 0) {
      iVar2 = (int)param_1[0xb6];
      if (iVar2 < 1) {
        lVar5 = 0;
        lVar7 = 0;
      }
      else {
        iVar3 = rand();
        iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar2);
        iVar3 = iVar2 + -1;
        if (iVar4 <= iVar2 + -1) {
          iVar3 = iVar4;
        }
        plVar1 = (longlong *)(param_1[0xb5] + (longlong)iVar3 * 0x10);
        lVar5 = *plVar1;
        lVar7 = plVar1[1];
      }
      param_1[0xeb] = lVar5;
      param_1[0xec] = lVar7;
    }
    lVar5 = param_1[0xec];
    if ((lVar5 != param_1[0xe6]) || ((char)param_1[0xe5] != '\x01')) {
      (**(code **)(*param_1 + 0x600))(param_1);
      param_1[0xe6] = lVar5;
      *(undefined1 *)(param_1 + 0xe5) = 1;
    }
  }
  return;
}



// FUNCTION 140b02970 FUN_140b02970 body=327 status=ok
// SIG undefined FUN_140b02970(void)

void FUN_140b02970(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    uVar6 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar6,param_1 + 0xee);
    param_1[0xee] = 0;
  }
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x780))(param_1);
    if (param_1[0xeb] == 0) {
      iVar2 = (int)param_1[0xb6];
      if (iVar2 < 1) {
        lVar5 = 0;
        lVar8 = 0;
      }
      else {
        iVar3 = rand();
        iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar2);
        iVar3 = iVar2 + -1;
        if (iVar4 <= iVar2 + -1) {
          iVar3 = iVar4;
        }
        plVar1 = (longlong *)(param_1[0xb5] + (longlong)iVar3 * 0x10);
        lVar5 = *plVar1;
        lVar8 = plVar1[1];
      }
      param_1[0xeb] = lVar5;
      param_1[0xec] = lVar8;
    }
    lVar5 = param_1[0xeb];
    if ((lVar5 != param_1[0xe6]) || ((char)param_1[0xe5] != '\0')) {
      (**(code **)(*param_1 + 0x600))(param_1);
      param_1[0xe6] = lVar5;
      *(undefined1 *)(param_1 + 0xe5) = 0;
    }
    if ((char)param_1[0xb7] == '\0') {
      if ((longlong *)param_1[0xeb] != (longlong *)0x0) {
        uVar7 = (**(code **)(*(longlong *)param_1[0xeb] + 0x280))();
        FUN_140aff070(param_1,uVar7);
        return;
      }
      FUN_140aff070(param_1,0);
      return;
    }
    FUN_140aff070(param_1,0);
  }
  return;
}



// FUNCTION 140b02ad0 FUN_140b02ad0 body=660 status=ok
// SIG undefined FUN_140b02ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b02ad0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar6 = param_1[0xad];
  if ((lVar6 != 0) && ((char)param_1[0x25] == '\x03')) {
    lVar5 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      fVar1 = *(float *)(lVar6 + 0xc4);
      fVar2 = *(float *)(lVar6 + 0xc0);
      local_c8 = FUN_140b09460;
      uStack_c0 = 0;
      iVar4 = rand();
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_bc;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar6;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,param_1 + 0xaf,&local_b8,
                    (float)iVar4 * 3.051851e-05 * (fVar1 - fVar2) + fVar2);
      if (local_58 != 0) {
        plVar9 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar9 = local_68;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar6 = FMemory::Realloc(plVar7,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
    }
    else {
      FUN_141321eb0(param_1);
    }
  }
  return;
}



// FUNCTION 140b02d70 FUN_140b02d70 body=686 status=ok
// SIG undefined FUN_140b02d70(void)

void FUN_140b02d70(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *local_res8;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar4,param_1 + 0xee);
    param_1[0xee] = 0;
  }
  if (((char)param_1[0x25] == '\x03') &&
     (plVar1 = (longlong *)param_1[0xde], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x290))(plVar1,0,0);
  }
  if (((*(byte *)((longlong)param_1 + 0x56c) & 6) == 6) && (param_1[0xe7] != 0)) {
    FUN_1423974f0(param_1[0xe7],0);
  }
  if ((char)param_1[0x25] != '\x03') goto LAB_140b02fa8;
  if ((*(float *)((longlong)param_1 + 0x7bc) <= 0.0) &&
     (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
    *(float *)((longlong)param_1 + 0x7bc) =
         *(float *)(lVar3 + 0x790) + *(float *)((longlong)param_1 + 0x564);
  }
  lVar3 = param_1[0xe9];
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x7b9) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x62a) == '\x01')) {
    FUN_142f6c130(lVar3,1);
  }
  if (param_1[0xeb] == 0) {
    FUN_140b0cfe0(param_1,1);
  }
  lVar3 = param_1[0xec];
  if ((lVar3 != param_1[0xe6]) || ((char)param_1[0xe5] != '\x01')) {
    (**(code **)(*param_1 + 0x600))(param_1);
    param_1[0xe6] = lVar3;
    *(undefined1 *)(param_1 + 0xe5) = 1;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar2 = UWorld::IsGameWorld(uVar4);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x62a) == '\x02')) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = FUN_142f6c9f0(uVar4);
      if ((lVar3 != 0) &&
         ((cVar2 = FUN_142f63b20(param_1 + 0xd0,param_1), cVar2 != '\0' &&
          (cVar2 = FUN_142f635c0(lVar3,param_1 + 0xd0,0), cVar2 != '\0')))) {
        FUN_140af7130(param_1);
      }
    }
  }
  if ((char)param_1[0xac] == '\0') {
    bVar5 = *(char *)((longlong)param_1 + 0x4fb) == '\x02';
LAB_140b02f4a:
    if (bVar5) {
      FUN_140af7130(param_1);
    }
  }
  else if ((char)param_1[0xac] == '\x01') {
    bVar5 = *(char *)((longlong)param_1 + 0x4fb) == '\x01';
    goto LAB_140b02f4a;
  }
  if ((longlong *)param_1[0xe8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe8] + 0x3f8))();
  }
  if ((*(byte *)((longlong)param_1 + 0x56c) & 8) != 0) {
    FUN_140b08f10(param_1);
  }
  if ((((char)param_1[0xbe] != '\0') && ((char)param_1[0x25] == '\x03')) &&
     ((char)param_1[0xed] != '\0')) {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
LAB_140b02fa8:
  if ((char)param_1[0xbe] != '\0') {
    FUN_140af0d50(param_1);
  }
  if (((char)param_1[0xb7] != '\0') && ((char)param_1[0xf2] == '\0')) {
    FUN_140aff3e0(param_1);
  }
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xf8,&local_res8);
  if (DAT_14686b388 == '\0') {
    FUN_140bfde30(&DAT_14686b378);
    DAT_14686b388 = '\x01';
  }
  FUN_140c1fb30(&DAT_14686b378,param_1);
  return;
}



// FUNCTION 140b03020 FUN_140b03020 body=800 status=ok
// SIG undefined FUN_140b03020(void)

void FUN_140b03020(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar4,param_1 + 0xee);
    param_1[0xee] = 0;
  }
  if (((char)param_1[0x25] == '\x03') &&
     (plVar6 = (longlong *)param_1[0xde], plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x290))(plVar6,0,0);
  }
  if (((*(byte *)((longlong)param_1 + 0x56c) & 6) == 6) && (param_1[0xe7] != 0)) {
    FUN_1423974f0(param_1[0xe7],0);
  }
  if ((char)param_1[0xb7] != '\0') {
    cVar1 = (char)param_1[0xed];
    if ((cVar1 < '\0') || ((int)param_1[0xbd] <= (int)cVar1)) {
      plVar6 = param_1 + 0xba;
    }
    else {
      plVar6 = (longlong *)(param_1[0xbc] + 0x10 + (longlong)cVar1 * 0x20);
    }
    if ((char)param_1[0x25] == '\x03') {
      if ((param_1[0xe8] != 0) && (*plVar6 != 0)) {
        *(longlong *)(param_1[0xe8] + 0x238) = *plVar6;
      }
      FUN_140aff070(param_1,0x40400000);
    }
    FUN_140af5a00(param_1,(int)plVar6[1]);
  }
  if ((char)param_1[0x25] != '\x03') goto LAB_140b0331f;
  uVar8 = 0;
  if ((*(float *)((longlong)param_1 + 0x7bc) <= 0.0) &&
     (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
    *(float *)((longlong)param_1 + 0x7bc) =
         *(float *)(lVar3 + 0x790) + *(float *)((longlong)param_1 + 0x564);
  }
  lVar3 = param_1[0xe9];
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x7b9) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x62a) == '\x01')) {
    FUN_142f6c130(lVar3,1);
  }
  lVar3 = param_1[0xeb];
  if (lVar3 == 0) {
    FUN_140b0cfe0(param_1,1);
    lVar3 = param_1[0xeb];
  }
  if ((lVar3 != param_1[0xe6]) || ((char)param_1[0xe5] != '\0')) {
    (**(code **)(*param_1 + 0x600))(param_1);
    param_1[0xe6] = lVar3;
    *(undefined1 *)(param_1 + 0xe5) = 0;
  }
  if (param_1[0xda] != 0) {
    lVar5 = FUN_142f71d80();
    for (lVar3 = param_1[0xda]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar5) {
        if (param_1[0xda] != 0) {
          local_28 = (undefined4)param_1[0xda];
          uStack_24 = *(undefined4 *)((longlong)param_1 + 0x6d4);
          uStack_20 = (undefined4)param_1[0xdb];
          uStack_1c = *(undefined4 *)((longlong)param_1 + 0x6dc);
          FUN_142f6b950(param_1,&local_28,param_1);
        }
        break;
      }
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = UWorld::IsGameWorld(uVar4);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x62a) == '\x02')) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = FUN_142f6c9f0(uVar4);
      if ((lVar3 != 0) && (cVar1 = FUN_142f63b20(param_1 + 0xc6,param_1), cVar1 != '\0')) {
        uVar4 = FUN_142f5f490(param_1 + 0xc6);
        uVar2 = FUN_142f5cdc0(uVar4,param_1);
        FUN_142f6e6e0(lVar3,param_1 + 0xc6,uVar2,1,param_1);
      }
    }
  }
  if ((char)param_1[0xac] == '\0') {
    bVar7 = *(char *)((longlong)param_1 + 0x4fb) == '\x02';
LAB_140b032e4:
    if (bVar7) {
      FUN_140af7130(param_1);
    }
  }
  else if ((char)param_1[0xac] == '\x01') {
    bVar7 = *(char *)((longlong)param_1 + 0x4fb) == '\x01';
    goto LAB_140b032e4;
  }
  if ((char)param_1[0xb7] == '\0') {
    if ((longlong *)param_1[0xeb] != (longlong *)0x0) {
      uVar8 = (**(code **)(*(longlong *)param_1[0xeb] + 0x280))();
    }
    FUN_140aff070(param_1,uVar8);
  }
LAB_140b0331f:
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xfa,&local_res8);
  return;
}



// FUNCTION 140b03340 FUN_140b03340 body=257 status=ok
// SIG undefined FUN_140b03340(void)

void FUN_140b03340(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(param_3 + 0x4d0) == param_4)) {
      plVar2 = *(longlong **)(param_1 + 0x6c0);
      iVar1 = *(int *)(param_1 + 0x6c8);
      plVar7 = plVar2;
      if (plVar2 != plVar2 + iVar1) {
        while (*plVar7 != param_3) {
          plVar7 = plVar7 + 1;
          if (plVar7 == plVar2 + iVar1) {
            return;
          }
        }
        iVar6 = (int)((longlong)plVar7 - (longlong)plVar2 >> 3);
        if (iVar6 != -1) {
          iVar4 = (iVar1 - iVar6) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar2 + iVar6,plVar2 + (iVar1 - iVar4),(longlong)iVar4 << 3);
          }
          *(int *)(param_1 + 0x6c8) = *(int *)(param_1 + 0x6c8) + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x6c0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b03450 FUN_140b03450 body=98 status=ok
// SIG undefined FUN_140b03450(void)

void FUN_140b03450(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_1413f82e0();
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
      FUN_140c577f0(param_3,param_1);
    }
  }
  return;
}



// FUNCTION 140b034c0 FUN_140b034c0 body=160 status=ok
// SIG undefined FUN_140b034c0(void)

void FUN_140b034c0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 local_res8;
  
  uVar3 = UUGButton::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
  if (lVar4 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&ATravelStationObject::OnFastTravelStationDiscovered",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x718,param_1,local_res8);
  }
  return;
}



// FUNCTION 140b03560 FUN_140b03560 body=987 status=ok
// SIG undefined FUN_140b03560(void)

void FUN_140b03560(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar8 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar8 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    FUN_140b0c6d0(param_1);
    plVar5 = *(longlong **)(param_1 + 0x5b8);
    iVar4 = *(int *)(param_1 + 0x5c0);
    if (plVar5 != plVar5 + (longlong)iVar4 * 4) {
      plVar14 = plVar5 + 2;
      do {
        lVar9 = FWeakObjectPtr::Get(plVar14 + -2);
        if (lVar9 != 0) {
          iVar13 = (int)plVar14[1];
          if (*(int *)((longlong)plVar14 + 0xc) < 0) {
            if (iVar13 != 0) {
              plVar12 = (longlong *)(*plVar14 + 8);
              do {
                plVar6 = (longlong *)*plVar12;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar6 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
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
                plVar12 = plVar12 + 2;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            *(undefined4 *)(plVar14 + 1) = 0;
            if (*(int *)((longlong)plVar14 + 0xc) != 0) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar14,0);
            }
          }
          else {
            if (iVar13 != 0) {
              plVar12 = (longlong *)(*plVar14 + 8);
              do {
                plVar6 = (longlong *)*plVar12;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar6 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
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
                plVar12 = plVar12 + 2;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            *(undefined4 *)(plVar14 + 1) = 0;
          }
          uVar10 = FUN_140afcba0(param_1,local_48);
          FUN_140afd160(param_1,lVar9,uVar10,plVar14);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          cVar8 = FWeakObjectPtr::IsValid(plVar14 + -1);
          if (cVar8 != '\0') {
            if ((int)plVar14[1] == 0) {
              uVar10 = FWeakObjectPtr::Get(plVar14 + -1);
              FUN_142eb3990(uVar10);
              FWeakObjectPtr::operator=(&local_res20);
              *(undefined4 *)(plVar14 + -1) = local_res20;
              *(undefined4 *)((longlong)plVar14 + -4) = local_res24;
            }
            else if ((param_3 < 0x11) && ((0x10484U >> (param_3 & 0x1f) & 1) != 0)) {
              FUN_142dcf3a0(lVar9);
              if ((local_58 != 0) && (lVar9 = FUN_1422312c0(lVar9), lVar9 != 0)) {
                lVar11 = FUN_14141f270();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) {
                  uVar10 = FUN_140bb7440(lVar9);
                  FUN_140d80730(uVar10,&local_78,param_2);
                  if (local_78 != 0) {
                    local_68 = local_78;
                    plStack_60 = plStack_70;
                    if (plStack_70 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                      UNLOCK();
                    }
                    uVar10 = FWeakObjectPtr::Get(plVar14 + -1);
                    FUN_140f3ed10(uVar10);
                    plVar12 = plStack_60;
                    if (plStack_60 != (longlong *)0x0) {
                      LOCK();
                      plVar6 = plStack_60 + 1;
                      lVar9 = *plVar6;
                      *(int *)plVar6 = (int)*plVar6 + -1;
                      UNLOCK();
                      if ((int)lVar9 == 1) {
                        (**(code **)*plStack_60)(plStack_60);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar12 + 0xc);
                        iVar13 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar13 == 1) {
                          (**(code **)(*plVar12 + 8))(plVar12);
                        }
                      }
                    }
                  }
                  plVar12 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = plStack_70 + 1;
                    lVar9 = *plVar6;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)*plStack_70)(plStack_70);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar12 + 0xc);
                      iVar13 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar13 == 1) {
                        (**(code **)(*plVar12 + 8))(plVar12);
                      }
                    }
                  }
                }
              }
              plVar12 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar6 = local_50 + 1;
                lVar9 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12);
                  }
                }
              }
            }
          }
        }
        plVar12 = plVar14 + 2;
        plVar14 = plVar14 + 4;
      } while (plVar12 != plVar5 + (longlong)iVar4 * 4);
    }
    FUN_140b12730(param_1);
  }
  return;
}



// FUNCTION 140b03940 FUN_140b03940 body=235 status=ok
// SIG undefined FUN_140b03940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b03940(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    local_20 = 0;
    lVar2 = param_2[0x2d];
    local_28 = 0;
    if (lVar2 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar2 + 0x220);
      local_40 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_10 = local_40;
    local_18 = local_48;
    uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_1405a1e30(&local_48,uVar3,lVar1,&local_18,0x42480000,&local_28);
    FUN_140591060(&local_48);
  }
  return;
}



// FUNCTION 140b03a30 FUN_140b03a30 body=251 status=ok
// SIG undefined FUN_140b03a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b03a30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1413b2ce0();
  if ((param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    local_20 = 0;
    lVar2 = param_2[0x2d];
    local_28 = 0;
    if (lVar2 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar2 + 0x220);
      local_40 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_10 = local_40;
    local_18 = local_48;
    uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_1405a1e30(&local_48,uVar3,lVar1,&local_18,0x42480000,&local_28);
    FUN_140591060(&local_48);
  }
  return;
}



// FUNCTION 140b03b30 FUN_140b03b30 body=317 status=ok
// SIG undefined FUN_140b03b30(void)

void FUN_140b03b30(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && (lVar3 = FUN_140b2a730(param_2), lVar3 != 0)) {
    lVar4 = FUN_142ddddc0(*(undefined8 *)(param_2 + 0x118));
    if ((lVar4 != 0) &&
       (((plVar5 = (longlong *)FUN_142dcd660(lVar4,0), plVar5 != (longlong *)0x0 &&
         (lVar4 = FUN_142df3510(plVar5), lVar4 != 0)) &&
        (iVar2 = FUN_142dec940(lVar4,*(undefined8 *)(param_2 + 0x118)), iVar2 == 2)))) {
      uVar6 = UScrollBox::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      if (lVar4 != 0) {
        lVar7 = UScrollBox::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && ((*(uint *)(lVar4 + 0x840) >> 3 & 1) == 0)) {
          FUN_140b2f9d0(lVar3,plVar5,*(undefined4 *)(param_1 + 0x30));
          goto LAB_140b03c57;
        }
      }
    }
    FUN_140af6740(param_1,param_2,param_3,1,*(undefined4 *)(param_1 + 0x30));
  }
LAB_140b03c57:
  FUN_140b03a30(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b03c70 FUN_140b03c70 body=1582 status=ok
// SIG undefined FUN_140b03c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b03c70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  longlong *local_1b8;
  int local_1b0;
  float local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined1 local_190 [40];
  undefined1 local_168 [40];
  undefined1 local_140 [40];
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_198 = param_3;
  if ((param_2 == (longlong *)0x0) ||
     (lVar5 = FUN_140b27c50(param_2,local_168), *(int *)(lVar5 + 0xc) == 1)) {
LAB_140b03cf9:
    bVar3 = false;
  }
  else {
    lVar5 = FUN_140b27c50(param_2,local_140);
    piVar6 = (int *)FUN_140b27c50(param_2,local_118);
    uVar7 = FUN_140b27c50(param_2,local_190);
    iVar4 = FUN_140b455e0(uVar7);
    if (iVar4 != *(int *)(lVar5 + 0xc) + *piVar6) goto LAB_140b03cf9;
    bVar3 = true;
  }
  if (bVar3) {
    lVar5 = FUN_140b2a700(param_2);
    if (lVar5 != 0) {
      lVar8 = ULanguageItemCUnitWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined4 *)(lVar5 + 0x1dc) = 0;
        lVar8 = FUN_140b27c50(param_2,local_190);
        fVar13 = *(float *)(lVar5 + 400);
        fVar1 = *(float *)(lVar5 + 0x18c);
        fVar2 = *(float *)(lVar5 + 0x194);
        fVar11 = fVar1 * fVar1 + fVar13 * fVar13 + fVar2 * fVar2;
        if (*(int *)(lVar8 + 0xc) == 2) {
          if (fVar11 == 1.0) {
            local_1c8 = *(undefined8 *)(lVar5 + 0x18c);
            fVar10 = (float)((ulonglong)local_1c8 >> 0x20);
            local_1c0 = *(float *)(lVar5 + 0x194);
            fVar14 = (float)local_1c8;
          }
          else {
            fVar10 = DAT_1468b5d94;
            local_1c0 = DAT_1468b5d98;
            fVar14 = DAT_1468b5d90;
            if (1e-08 <= fVar11) {
              auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              local_1a8 = auVar12._0_4_;
              local_1a8 = local_1a8 + local_1a8 * (0.5 - fVar11 * 0.5 * local_1a8 * local_1a8);
              local_1a8 = local_1a8 + local_1a8 * (0.5 - fVar11 * 0.5 * local_1a8 * local_1a8);
              fVar14 = fVar1 * local_1a8;
              fVar10 = fVar13 * local_1a8;
              local_1c0 = fVar2 * local_1a8;
            }
          }
          fVar13 = *(float *)(param_1 + 0x70);
          local_1c0 = local_1c0 * fVar13;
          *(ulonglong *)(lVar5 + 0x18c) = CONCAT44(fVar10 * fVar13,fVar14 * fVar13);
          *(float *)(lVar5 + 0x194) = local_1c0;
          *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(param_1 + 0x74);
        }
        else {
          if (fVar11 == 1.0) {
            local_1c8 = *(undefined8 *)(lVar5 + 0x18c);
            fVar10 = (float)((ulonglong)local_1c8 >> 0x20);
            local_1c0 = *(float *)(lVar5 + 0x194);
            fVar14 = (float)local_1c8;
          }
          else {
            fVar10 = DAT_1468b5d94;
            local_1c0 = DAT_1468b5d98;
            fVar14 = DAT_1468b5d90;
            if (1e-08 <= fVar11) {
              auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              local_1a8 = auVar12._0_4_;
              local_1a8 = local_1a8 + local_1a8 * (0.5 - fVar11 * 0.5 * local_1a8 * local_1a8);
              local_1a8 = local_1a8 + local_1a8 * (0.5 - fVar11 * 0.5 * local_1a8 * local_1a8);
              fVar14 = fVar1 * local_1a8;
              fVar10 = fVar13 * local_1a8;
              local_1c0 = fVar2 * local_1a8;
            }
          }
          fVar13 = *(float *)(param_1 + 0x30);
          local_1c0 = local_1c0 * fVar13;
          *(ulonglong *)(lVar5 + 0x18c) = CONCAT44(fVar10 * fVar13,fVar14 * fVar13);
          *(float *)(lVar5 + 0x194) = local_1c0;
        }
      }
    }
    lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar5 != 0) {
      fVar13 = *(float *)(param_1 + 0x38);
      piVar6 = (int *)FUN_140b27c50(param_2,local_190);
      if (0 < *piVar6) {
        piVar6 = (int *)FUN_140b27c50(param_2,local_190);
        fVar13 = fVar13 + (float)*piVar6 * *(float *)(param_1 + 0x88);
      }
      local_1b8 = (longlong *)0x0;
      local_1b0 = 0;
      FWeakObjectPtr::operator=(&local_1a8,param_1);
      FWeakObjectPtr::operator=(&local_1a0,param_2);
      fVar1 = local_1a8;
      plVar9 = (longlong *)FMemory::Realloc(0,0x40);
      if (plVar9 == (longlong *)0x0) {
        if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
           ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
          local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
        }
      }
      else {
        *plVar9 = (longlong)&PTR_GetPoolName_14428b158;
        *(float *)(plVar9 + 1) = fVar1;
        *(undefined4 *)((longlong)plVar9 + 0xc) = local_1a4;
        *(undefined4 *)(plVar9 + 2) = local_1a0;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_19c;
        plVar9[3] = param_1;
        plVar9[4] = (longlong)param_2;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar9[6] = lVar5;
        *plVar9 = (longlong)&PTR_GetPoolName_14428b1a0;
        FUN_140af4890(plVar9,&local_1b8);
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        lVar5 = FMemory::Realloc(plVar9,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      local_1c8 = 0;
      if (fVar13 <= 0.1) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = fVar13 - 0.1;
      }
      lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      local_e8 = 0;
      local_e0 = 0;
      if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
        (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_e8);
      }
      FWeakObjectPtr::operator=(local_d8,0);
      local_1d0 = 0xbf800000;
      local_1d8 = 0;
      local_d0 = 0;
      local_98 = (longlong *)0x0;
      local_88 = 0;
      local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar7,&local_1c8,&local_e8,fVar13);
      if (local_88 != 0) {
        plVar9 = local_b8;
        if (local_98 != (longlong *)0x0) {
          plVar9 = local_98;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
      if (local_1b0 != 0) {
        if (local_1b8 == (longlong *)0x0) goto LAB_140b04271;
        (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
        if (local_1b8 != (longlong *)0x0) {
          local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
        }
        local_1b0 = 0;
      }
      if (local_1b8 != (longlong *)0x0) {
        FMemory::Free(local_1b8);
      }
    }
  }
LAB_140b04271:
  FUN_140b03a30(param_1,param_2,local_198);
  return;
}



// FUNCTION 140b042a0 FUN_140b042a0 body=372 status=ok
// SIG undefined FUN_140b042a0(void)

void FUN_140b042a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_68 [64];
  
  if (param_2 != 0) {
    uVar2 = FUN_140b27c50(param_2,local_68);
    iVar1 = FUN_140b455e0(uVar2);
    if (((iVar1 == 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
       ((*(int *)(param_1 + 0x58) != 0 || (*(int *)(param_1 + 0x5c) != 0)))) {
      local_res10[0] = 0;
      lVar3 = FUN_140b1a100(param_2,*(longlong *)(param_1 + 0x40),0,1);
      if (lVar3 != 0) {
        local_res20 = 0;
        if ((param_3 != 0) && (lVar4 = FUN_140b27930(param_3), lVar4 != 0)) {
          plVar5 = (longlong *)FUN_140b27930(param_3);
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x470))(plVar5,local_res10);
          local_res20 = *puVar6;
        }
        uVar10 = *(undefined4 *)(param_1 + 0x60);
        piVar7 = (int *)FUN_140af9bd0(param_1 + 0x68,local_res10,&local_res20);
        if (*piVar7 != -1) {
          FUN_140af9bd0(param_1 + 0x68,local_res10,&local_res20);
          puVar9 = (undefined4 *)0x0;
          if ((int)local_res10[0] != -1) {
            puVar9 = (undefined4 *)
                     (*(longlong *)(param_1 + 0x68) + (longlong)(int)local_res10[0] * 0x18);
          }
          puVar8 = puVar9 + 2;
          if (puVar9 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          uVar10 = *puVar8;
        }
        FUN_14260f0c0(lVar3,*(undefined8 *)(param_1 + 0x58),uVar10);
      }
    }
  }
  FUN_140b03a30(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b04420 FUN_140b04420 body=777 status=ok
// SIG undefined FUN_140b04420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b04420(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [8];
  undefined1 local_f8 [48];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (param_2 != (longlong *)0x0) {
    if ((param_3 != 0) && (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)) {
      uVar2 = FUN_1413b53a0();
      lVar1 = FUN_140b2c110(param_3,uVar2,local_100);
      if ((lVar1 != 0) && (lVar1 = FUN_140b27c50(param_2,local_f8), *(int *)(lVar1 + 0xc) != 2)) {
        FWeakObjectPtr::operator=(&local_108,param_2);
        local_118 = (longlong *)0x0;
        local_110 = 0;
        plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar3 == (longlong *)0x0) {
          if (((local_110 != 0) && (local_118 != (longlong *)0x0)) &&
             ((**(code **)(*local_118 + 0x28))(local_118,0), local_118 != (longlong *)0x0)) {
            local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
          }
        }
        else {
          *plVar3 = (longlong)&PTR_GetPoolName_14428b428;
          *(undefined4 *)(plVar3 + 1) = local_108;
          *(undefined4 *)((longlong)plVar3 + 0xc) = local_104;
          plVar3[2] = param_1;
          lVar1 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar1;
          *plVar3 = (longlong)&PTR_GetPoolName_14428b470;
          FUN_140af46e0(plVar3,&local_118);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar1 = FMemory::Realloc(plVar3,0,0);
          if (lVar1 != 0) {
            FMemory::Free(lVar1);
          }
        }
        lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
        if (*(longlong *)(lVar1 + 400) == 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
        }
        else {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
        }
        local_c8 = 0;
        local_c0 = 0;
        if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
          (**(code **)(*local_118 + 0x30))(local_118,&local_c8);
        }
        FWeakObjectPtr::operator=(local_b8,0);
        local_b0 = 0;
        local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
        local_78 = (longlong *)0x0;
        local_68 = 0;
        FUN_142880af0(uVar2,&local_c8);
        if (local_68 != 0) {
          plVar3 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar3 = local_78;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
        if (local_110 != 0) {
          if (local_118 == (longlong *)0x0) goto LAB_140b046fb;
          (**(code **)(*local_118 + 0x28))(local_118,0);
          if (local_118 != (longlong *)0x0) {
            local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
          }
          local_110 = 0;
        }
        if (local_118 != (longlong *)0x0) {
          FMemory::Free(local_118);
        }
        goto LAB_140b046fb;
      }
    }
    FUN_140b32ff0(param_2,*(undefined1 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                  *(undefined8 *)(param_1 + 0x80));
    FUN_140b0efd0(param_1,param_2,param_4);
    FUN_14223d160(param_2,&DAT_1464aa810,0);
    lVar1 = FUN_140b2a700(param_2);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x1c8) = *(uint *)(lVar1 + 0x1c8) & 0xfffffffe;
      *(undefined1 *)(lVar1 + 0x2c8) = 0;
    }
  }
LAB_140b046fb:
  FUN_1413b2d30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b04730 thunk_FUN_1413b2d30 body=5 status=ok
// SIG undefined thunk_FUN_1413b2d30(void)

void thunk_FUN_1413b2d30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                        )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_140b15f30(&uStack_38);
  uStack_38 = *param_4;
  uStack_30 = param_4[1];
  uStack_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  uStack_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889870);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_48);
  *param_4 = uStack_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,uStack_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,uStack_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 140b04740 FUN_140b04740 body=159 status=ok
// SIG undefined FUN_140b04740(void)

void FUN_140b04740(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined1 local_38 [48];
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar1 = FUN_140b27c50(param_2,local_38);
    if (*(int *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)FName::FName(local_res10,&DAT_144268114,1);
      uVar3 = FUN_140b1a100(param_2,*(undefined8 *)(param_1 + 0x48),*puVar2,0);
      FUN_140b3fd40(param_2,uVar3,DAT_146868980);
    }
  }
  FUN_1413b2d30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b047e0 FUN_140b047e0 body=910 status=ok
// SIG undefined FUN_140b047e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b047e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong *local_140;
  int local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [40];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148 = param_4;
  local_110 = param_3;
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_140b27c50(param_2,local_100);
    iVar2 = FUN_140b455e0(uVar3);
    if (((iVar2 == 0) && ((char)param_2[0x25] == '\x03')) &&
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 != 0)) {
      local_140 = (longlong *)0x0;
      local_138 = 0;
      FWeakObjectPtr::operator=(&local_118,param_2);
      FWeakObjectPtr::operator=(&local_120,local_110);
      FWeakObjectPtr::operator=(&local_128,param_1);
      local_130 = local_118;
      local_12c = local_114;
      plVar5 = (longlong *)FMemory::Realloc(0,0x40);
      param_4 = local_148;
      if (plVar5 == (longlong *)0x0) {
        if (((local_138 != 0) && (local_140 != (longlong *)0x0)) &&
           ((**(code **)(*local_140 + 0x28))(local_140,0), param_4 = local_148,
           local_140 != (longlong *)0x0)) {
          local_140 = (longlong *)FMemory::Realloc(local_140,0,0);
          param_4 = local_148;
        }
      }
      else {
        *plVar5 = (longlong)&PTR_GetPoolName_14428b668;
        plVar5[1] = param_1;
        *(undefined4 *)(plVar5 + 2) = local_128;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_124;
        *(undefined4 *)(plVar5 + 3) = local_120;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = local_11c;
        *(undefined4 *)(plVar5 + 4) = local_130;
        *(undefined4 *)((longlong)plVar5 + 0x24) = local_12c;
        plVar5[5] = local_148;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[7] = lVar4;
        *plVar5 = (longlong)&PTR_GetPoolName_14428b6b0;
        FUN_140af4980(plVar5,&local_140);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar4 = FMemory::Realloc(plVar5,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      local_108 = 0;
      lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      local_d8 = 0;
      local_d0 = 0;
      if ((local_138 != 0) && (local_140 != (longlong *)0x0)) {
        (**(code **)(*local_140 + 0x30))(local_140,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_150 = 0xbf800000;
      local_158 = 0;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,&local_108,&local_d8,uVar1);
      if (local_78 != 0) {
        plVar5 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar5 = local_88;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (local_138 != 0) {
        if (local_140 == (longlong *)0x0) goto LAB_140b04b3b;
        (**(code **)(*local_140 + 0x28))(local_140,0);
        if (local_140 != (longlong *)0x0) {
          local_140 = (longlong *)FMemory::Realloc(local_140,0,0);
        }
        local_138 = 0;
      }
      if (local_140 != (longlong *)0x0) {
        FMemory::Free(local_140);
      }
    }
    else {
      piVar6 = (int *)FUN_140b27c50(param_2,local_100);
      param_4 = local_148;
      if (0 < *piVar6) {
        puVar7 = (undefined8 *)FName::FName(&local_108,&DAT_144268154,1);
        FUN_140b1a100(param_2,*(undefined8 *)(param_1 + 0x58),*puVar7,1);
        FUN_140b1a280(param_2,*(undefined8 *)(param_1 + 0x60));
        param_4 = local_148;
      }
    }
  }
LAB_140b04b3b:
  FUN_1413b2d30(param_1,param_2,local_110,param_4);
  return;
}



// FUNCTION 140b04b70 FUN_140b04b70 body=908 status=ok
// SIG undefined FUN_140b04b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b04b70(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  int local_180 [2];
  longlong *local_178;
  int local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  undefined1 local_148 [40];
  undefined1 local_120 [40];
  undefined1 local_f8 [48];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_188 = param_4;
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar3 != 0) {
      uVar4 = FUN_1413b53a0();
      lVar3 = FUN_140b2c110(param_3,uVar4,local_150);
      if ((lVar3 != 0) && (lVar3 = FUN_140b27c50(param_2,local_148), *(int *)(lVar3 + 0xc) != 2)) {
        FWeakObjectPtr::operator=(&local_158,param_2);
        local_178 = (longlong *)0x0;
        local_170 = 0;
        FWeakObjectPtr::operator=(&local_160,param_1);
        local_168 = local_158;
        local_180[0] = local_154;
        plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar5 == (longlong *)0x0) {
          if (((local_170 != 0) && (local_178 != (longlong *)0x0)) &&
             ((**(code **)(*local_178 + 0x28))(local_178,0), local_178 != (longlong *)0x0)) {
            local_178 = (longlong *)FMemory::Realloc(local_178,0,0);
          }
        }
        else {
          *plVar5 = (longlong)&PTR_GetPoolName_14428b548;
          *(undefined4 *)(plVar5 + 1) = local_160;
          *(undefined4 *)((longlong)plVar5 + 0xc) = local_15c;
          *(undefined4 *)(plVar5 + 2) = local_168;
          *(int *)((longlong)plVar5 + 0x14) = local_180[0];
          plVar5[3] = param_1;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar5[5] = lVar3;
          *plVar5 = (longlong)&PTR_GetPoolName_14428b590;
          FUN_140af4dd0(plVar5,&local_178);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          lVar3 = FMemory::Realloc(plVar5,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
        lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        local_c8 = 0;
        local_c0 = 0;
        if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
          (**(code **)(*local_178 + 0x30))(local_178,&local_c8);
        }
        FWeakObjectPtr::operator=(local_b8,0);
        local_b0 = 0;
        local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
        local_78 = (longlong *)0x0;
        local_68 = 0;
        FUN_142880af0(uVar4,&local_c8);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
        if (local_170 != 0) {
          param_4 = local_188;
          if (local_178 == (longlong *)0x0) goto LAB_140b04e21;
          (**(code **)(*local_178 + 0x28))(local_178,0);
          if (local_178 != (longlong *)0x0) {
            local_178 = (longlong *)FMemory::Realloc(local_178,0,0);
          }
          local_170 = 0;
        }
        param_4 = local_188;
        if (local_178 != (longlong *)0x0) {
          FMemory::Free(local_178);
          param_4 = local_188;
        }
        goto LAB_140b04e21;
      }
    }
    lVar3 = FUN_140b27c50(param_2,local_148);
    lVar6 = FUN_140b27c50(param_2,local_f8);
    iVar1 = *(int *)(lVar3 + 0x10);
    iVar2 = *(int *)(lVar6 + 8);
    lVar3 = FUN_140b27c50(param_2,local_120);
    if ((0 < *(int *)(lVar3 + 4) + iVar1 + iVar2) ||
       (lVar3 = FUN_140b27c50(param_2,local_120), param_4 = local_188, 1 < *(int *)(lVar3 + 0xc))) {
      FUN_140af9d40(param_1 + 0x48,local_180,param_2 + 0x8f);
      param_4 = local_188;
      lVar3 = 0;
      if (local_180[0] != -1) {
        lVar3 = (longlong)local_180[0] * 0x58 + *(longlong *)(param_1 + 0x48);
      }
      lVar6 = lVar3 + 8;
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        FUN_140b0f7b0(param_1,param_2,local_188);
      }
    }
  }
LAB_140b04e21:
  FUN_1413b2d30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b04f10 FUN_140b04f10 body=620 status=ok
// SIG undefined FUN_140b04f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b04f10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_140b2a700(param_2);
    if (lVar3 != 0) {
      lVar3 = FUN_140b27c50(param_2,&local_88);
      if (*(char *)(lVar3 + 0x18) == '\0') {
        lVar3 = FUN_140b2a700(param_2);
        if (lVar3 != 0) {
          iVar1 = FUN_140b2bf20(lVar3);
          iVar2 = FUN_140b28020(lVar3);
          if (iVar2 <= iVar1) {
            uVar4 = *(undefined8 *)(lVar3 + 0x18c);
            fVar8 = (float)((ulonglong)uVar4 >> 0x20);
            local_88._0_4_ = (float)uVar4;
            fVar5 = fVar8 * fVar8 + (float)local_88 * (float)local_88;
            if (1e-08 < fVar5) {
              auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
              fVar6 = auVar7._0_4_;
              fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
              fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
              local_88._0_4_ = (float)local_88 * fVar6;
              fVar8 = fVar8 * fVar6;
            }
            local_80 = *(undefined4 *)(param_1 + 0x4c);
            *(ulonglong *)(lVar3 + 0x18c) =
                 CONCAT44(fVar8 * *(float *)(param_1 + 0x48),
                          (float)local_88 * *(float *)(param_1 + 0x48));
            *(undefined4 *)(lVar3 + 0x194) = local_80;
            local_88 = uVar4;
            FUN_140b3d9f0(param_2);
            FUN_140b1bed0(param_2);
          }
        }
        local_50 = 0;
        lVar3 = param_2[0x2d];
        local_58 = 0;
        if (lVar3 == 0) {
          local_88 = _DAT_1468b5d90;
          local_80 = DAT_1468b5d98;
        }
        else {
          local_88 = *(undefined8 *)(lVar3 + 0x220);
          local_80 = *(undefined4 *)(lVar3 + 0x228);
        }
        local_40 = local_80;
        local_48 = local_88;
        uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
        FUN_1405a1e30(&local_88,uVar4,*(undefined8 *)(param_1 + 0x50),&local_48,0x42480000,&local_58
                     );
        FUN_140591060(&local_88);
      }
    }
  }
  FUN_1413b2de0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b05180 thunk_FUN_1413b2e30 body=5 status=ok
// SIG undefined thunk_FUN_1413b2e30(void)

void thunk_FUN_1413b2e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                        )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_140b15f30(&uStack_38);
  uStack_38 = *param_4;
  uStack_30 = param_4[1];
  uStack_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  uStack_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889878);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_48);
  *param_4 = uStack_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,uStack_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,uStack_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 140b05190 FUN_140b05190 body=542 status=ok
// SIG undefined FUN_140b05190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b05190(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140b2a700(param_2);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18c);
      fVar6 = (float)((ulonglong)uVar2 >> 0x20);
      local_68._0_4_ = (float)uVar2;
      fVar3 = fVar6 * fVar6 + (float)local_68 * (float)local_68;
      if (1e-08 < fVar3) {
        auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar4 = auVar5._0_4_;
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        local_68._0_4_ = (float)local_68 * fVar4;
        fVar6 = fVar6 * fVar4;
      }
      local_60 = *(undefined4 *)(param_1 + 0x54);
      *(ulonglong *)(lVar1 + 0x18c) =
           CONCAT44(fVar6 * *(float *)(param_1 + 0x50),(float)local_68 * *(float *)(param_1 + 0x50))
      ;
      *(undefined4 *)(lVar1 + 0x194) = local_60;
      local_68 = uVar2;
      FUN_140b1bed0(param_2);
    }
    local_40 = 0;
    lVar1 = param_2[0x2d];
    local_48 = 0;
    if (lVar1 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x220);
      local_60 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_30 = local_60;
    local_38 = local_68;
    uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_1405a1e30(&local_68,uVar2,*(undefined8 *)(param_1 + 0x58),&local_38,0x42480000,&local_48);
    FUN_140591060(&local_68);
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
  }
  FUN_1413b2e30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b053b0 thunk_FUN_1413b2ee0 body=5 status=ok
// SIG undefined thunk_FUN_1413b2ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1413b2ee0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                        ,undefined8 param_5,undefined4 *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  longlong alStack_48 [5];
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  undefined1 uStack_10;
  
  FUN_140b15f30(&uStack_88);
  alStack_48[2] = 0;
  alStack_48[3] = 0;
  uStack_88 = *param_4;
  uStack_80 = param_4[1];
  alStack_48[0] = 0;
  alStack_48[1] = 0;
  uStack_68 = param_4[4];
  uStack_60 = param_4[5];
  uStack_20 = DAT_1468b5d98;
  alStack_48[4] = _DAT_1468b5d90;
  uStack_1c = _DAT_1468b5d90;
  uStack_78 = *(undefined4 *)(param_4 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_70 = *(undefined4 *)(param_4 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_14 = DAT_1468b5d98;
  uStack_50 = *param_6;
  uStack_10 = 0;
  uStack_58 = param_5;
  uStack_98 = param_2;
  uStack_90 = param_3;
  FUN_1408e22e0(alStack_48,param_6 + 2);
  alStack_48[2] = *(longlong *)(param_6 + 6);
  alStack_48[4] = *(longlong *)(param_6 + 10);
  alStack_48[3] = *(longlong *)(param_6 + 8);
  uStack_20 = param_6[0xc];
  uStack_14 = param_6[0xf];
  uStack_10 = *(undefined1 *)(param_6 + 0x10);
  uStack_1c = *(undefined8 *)(param_6 + 0xd);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146889880);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_98);
  *param_4 = uStack_88;
  param_4[1] = uStack_80;
  *(undefined4 *)(param_4 + 2) = uStack_78;
  *(undefined4 *)((longlong)param_4 + 0x14) = uStack_74;
  *(undefined4 *)(param_4 + 3) = uStack_70;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_6c;
  *(undefined4 *)(param_4 + 4) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)param_4 + 0x24) = uStack_68._4_4_;
  *(undefined4 *)(param_4 + 5) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_60._4_4_;
  if (alStack_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b053c0 FUN_140b053c0 body=2423 status=ok
// SIG undefined FUN_140b053c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b053c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  float local_230;
  longlong local_228;
  undefined8 local_220;
  float local_218;
  undefined8 local_214;
  float local_20c;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  byte local_1b8;
  undefined1 local_1b0 [56];
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined1 local_150 [16];
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128;
  ushort local_126;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1f0 = param_5;
  local_228 = param_6;
  local_1e8 = param_4;
  local_158 = param_3;
  if (((((param_2 != (longlong *)0x0) && (param_2[0x23] != 0)) && (param_5 != 0)) &&
      (((char)param_2[0x25] == '\x03' &&
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 != 0)))) &&
     (*(longlong *)(param_6 + 0x20) != 0)) {
    plVar12 = *(longlong **)(param_1 + 0x68);
    lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x20) + 0x10);
    plVar6 = plVar12 + *(int *)(param_1 + 0x70);
    if (plVar12 != plVar6) {
      lVar13 = 0;
      do {
        lVar9 = lVar13;
        if (*plVar12 != 0) {
          lVar5 = FUN_142e0d0b0();
          for (lVar7 = *plVar12; (lVar9 = lVar13, lVar7 != 0 && (lVar9 = *plVar12, lVar7 != lVar5));
              lVar7 = *(longlong *)(lVar7 + 0x30)) {
          }
        }
        if (lVar9 == lVar4) {
          plVar6 = *(longlong **)(param_6 + 8);
          plVar12 = plVar6 + (longlong)*(int *)(param_6 + 0x10) * 2;
          if (plVar6 != plVar12) {
            goto LAB_140b05520;
          }
          break;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar6);
    }
  }
  goto LAB_140b05ce6;
  while (plVar6 = plVar6 + 2, plVar6 != plVar12) {
LAB_140b05520:
    lVar4 = *plVar6;
    lStack_200 = plVar6[1];
    local_208 = lVar4;
    if ((lVar4 == *(longlong *)(param_1 + 0x48)) &&
       (fVar16 = (float)lStack_200, 0.0 < (float)lStack_200)) {
      fVar14 = (float)FUN_140afed70(param_1,local_1e8);
      lVar9 = param_2[0x23];
      fVar14 = fVar14 * fVar16;
      fVar16 = 1.0;
      if (fVar14 <= 1.0) {
        fVar14 = 1.0;
      }
      if (lVar9 == 0) {
LAB_140b0564b:
        local_1f8 = 0;
      }
      else {
        local_1f8 = lVar9;
        lVar7 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140b0564b;
        local_1c8 = 0;
        local_1b8 = local_1b8 & 0xfd | 1;
        local_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        FUN_142c8c260(local_1b0,0x3f800000);
        local_178[0] = 0xff;
        local_170 = 0;
        local_168 = 0;
        FUN_140c42c80(lVar9,lVar4,&local_1d8);
        cVar2 = FUN_142d52a00(local_178);
        if (cVar2 != '\0') {
          uVar8 = FUN_142d52a20(local_178);
          uVar8 = FArchive::operator<<(uVar8);
          fVar15 = (float)FUN_142d5fea0(uVar8);
          if (fVar15 < 1.0) {
            lVar13 = lVar9;
          }
        }
        if (local_1c8 != 0) {
          FMemory::Free();
        }
        if (lVar13 != 0) goto LAB_140b057e9;
      }
      uVar8 = (**(code **)(*param_2 + 0x148))(param_2);
      UWorld::GetPlayerControllerIterator(uVar8,&local_208);
      iVar3 = (int)(float)lStack_200;
      while( true ) {
        if ((iVar3 < 0) || (*(int *)(local_208 + 8) <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar9 = FWeakObjectPtr::Get();
        if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x488), lVar9 != 0)) {
          lVar7 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) &&
             (iVar3 = (**(code **)(*(longlong *)(lVar9 + 0x8b0) + 0x20))
                                ((longlong *)(lVar9 + 0x8b0),param_2[0x23]), iVar3 != 2)) {
            local_1c8 = 0;
            local_1b8 = local_1b8 & 0xfd | 1;
            local_1c0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            FUN_142c8c260(local_1b0,0x3f800000);
            local_178[0] = 0xff;
            local_170 = 0;
            local_168 = 0;
            FUN_140c42c80(lVar9,lVar4,&local_1d8);
            cVar2 = FUN_142d52a00(local_178);
            if (cVar2 != '\0') {
              uVar8 = FUN_142d52a20(local_178);
              uVar8 = FArchive::operator<<(uVar8);
              fVar15 = (float)FUN_142d5fea0(uVar8);
              if (fVar15 < fVar16) {
                lVar13 = lVar9;
                fVar16 = fVar15;
              }
            }
            if (local_1c8 != 0) {
              FMemory::Free();
            }
          }
        }
        iVar3 = (int)(float)lStack_200 + 1;
        lStack_200 = CONCAT44(lStack_200._4_4_,iVar3);
      }
      if (lVar13 == 0) {
        lVar13 = param_2[0x23];
        if (lVar13 == 0) break;
        lVar4 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
      }
LAB_140b057e9:
      lVar4 = param_2[0x2d];
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        puVar10 = &local_238;
        local_230 = DAT_1468b5d98;
      }
      else {
        puVar10 = &local_220;
        local_218 = (float)*(undefined4 *)(lVar4 + 0x228);
        local_220 = *(undefined8 *)(lVar4 + 0x220);
      }
      local_214 = *puVar10;
      local_20c = *(float *)(puVar10 + 1);
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      fVar16 = local_230;
      uVar8 = local_238;
      local_218 = local_230;
      lVar4 = *(longlong *)(lVar13 + 0x168);
      local_220 = local_238;
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      local_220._0_4_ = (float)uVar8;
      local_230 = local_230 - fVar16;
      local_220._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      local_238 = CONCAT44((float)((ulonglong)local_238 >> 0x20) - local_220._4_4_,
                           (float)local_238 - (float)local_220);
      local_220 = uVar8;
      uVar8 = FVector::Rotation(&local_238,&local_220);
      FRotator::Quaternion(uVar8,&local_118);
      lVar4 = param_2[0x2d];
      local_c8 = local_118;
      uStack_c0 = uStack_110;
      local_b8._8_4_ = local_20c;
      local_b8._0_8_ = local_214;
      local_b8._12_4_ = 0;
      local_a8._4_4_ = DAT_1464aa788._4_4_;
      local_a8._0_4_ = (undefined4)DAT_1464aa788;
      local_a8._8_4_ = DAT_1464aa790;
      local_a8._12_4_ = 0;
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      fVar16 = local_230;
      uVar8 = local_238;
      local_20c = local_230;
      lVar4 = *(longlong *)(lVar13 + 0x168);
      local_214 = local_238;
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      local_214._0_4_ = (float)uVar8;
      local_230 = local_230 - fVar16;
      local_214._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      local_238 = CONCAT44((float)((ulonglong)local_238 >> 0x20) - local_214._4_4_,
                           (float)local_238 - (float)local_214);
      local_214 = uVar8;
      FVector::Rotation(&local_238,local_108);
      FActorSpawnParameters::FActorSpawnParameters(local_f8);
      local_e8 = param_2[0x23];
      local_e0 = FUN_140a63ba0(param_2);
      lVar4 = param_2[0x23];
      lVar9 = UUGButton::GetPrivateStaticClass();
      uVar8 = FUN_140a63ba0(param_2);
      uVar11 = (**(code **)(*param_2 + 0x148))(param_2);
      FActorSpawnParameters::FActorSpawnParameters(local_150);
      local_126 = local_126 | 4;
      local_128 = 0;
      param_6 = local_228;
      local_140 = lVar4;
      local_138 = uVar8;
      if ((lVar9 != 0) &&
         (lVar4 = FUN_142550d00(uVar11,lVar9,&local_c8,local_150), param_6 = local_228, lVar4 != 0))
      {
        lVar7 = UUGButton::GetPrivateStaticClass();
        lVar9 = local_1f8;
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        param_6 = local_228;
        if (bVar1) {
          *(undefined8 *)(lVar4 + 0x700) = *(undefined8 *)(param_1 + 0x58);
          if (lVar13 != local_1f8) {
            local_1b8 = local_1b8 & 0xfd | 1;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0;
            FUN_142c8c260(local_1b0,0x3f800000);
            local_178[0] = 0xff;
            local_170 = 0;
            local_168 = 0;
            if (((lVar9 != 0) &&
                (cVar2 = FUN_140c42c80(lVar9,*(undefined8 *)(param_1 + 0x48),&local_1d8),
                cVar2 != '\0')) && (cVar2 = FUN_142d52a00(local_178), cVar2 != '\0')) {
              uVar8 = FUN_142d52a20(local_178);
              lVar9 = FArchive::operator<<(uVar8);
              if (0.0001 < *(float *)(lVar9 + 0x20)) {
                *(undefined8 *)(lVar4 + 0x710) = *(undefined8 *)(param_1 + 0x48);
                uVar8 = FUN_142d52a20(local_178);
                uVar8 = FArchive::operator<<(uVar8);
                fVar16 = (float)FUN_142d61c30(uVar8);
                *(float *)(lVar4 + 0x708) = fVar14 / fVar16;
              }
            }
            if (local_1c8 != 0) {
              FMemory::Free();
            }
          }
          *(float *)(lVar4 + 0x470) = fVar14;
          *(longlong *)(lVar4 + 0x480) = param_2[0x90];
          *(undefined8 *)(lVar4 + 0x6f8) = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(lVar4 + 0x718) = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(lVar4 + 0x728) = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)(lVar4 + 0x730) = *(undefined8 *)(param_1 + 0x80);
          if (*(longlong *)(lVar4 + 0x720) != 0) {
            FUN_1405abab0(*(longlong *)(lVar4 + 0x720),*(undefined8 *)(param_1 + 0x78));
          }
          if (*(longlong *)(lVar4 + 0x6e8) != 0) {
            *(longlong *)(*(longlong *)(lVar4 + 0x6e8) + 0x1a0) = lVar13;
            FUN_142d6f9d0(*(undefined8 *)(lVar4 + 0x6e8),1);
          }
          FUN_14222b9f0(lVar4,&local_c8,0,0);
          param_6 = local_228;
        }
      }
      break;
    }
  }
LAB_140b05ce6:
  local_248 = local_1f0;
  local_240 = param_6;
  FUN_1413b2ee0(param_1,param_2,local_158,local_1e8);
  return;
}



// FUNCTION 140b05d50 thunk_FUN_1413b3080 body=5 status=ok
// SIG undefined thunk_FUN_1413b3080(void)

void thunk_FUN_1413b3080(void)

{
  FUN_1413b3080();
  return;
}



// FUNCTION 140b05d70 FUN_140b05d70 body=677 status=ok
// SIG undefined FUN_140b05d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b05d70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c8 = param_3;
  if ((param_2 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)
     ) {
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    FWeakObjectPtr::operator=(&local_d0,param_2);
    FWeakObjectPtr::operator=(&local_d8,param_1);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 == (longlong *)0x0) {
      if (((local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
         ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
    }
    else {
      *plVar2 = (longlong)&PTR_GetPoolName_14428b398;
      *(undefined4 *)(plVar2 + 1) = local_d8;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_d4;
      *(undefined4 *)(plVar2 + 2) = local_d0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_cc;
      plVar2[3] = param_1;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_GetPoolName_14428b3e0;
      FUN_140af4ec0(plVar2,&local_e8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_b8 = 0;
    local_b0 = 0;
    if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
      (**(code **)(*local_e8 + 0x30))(local_e8,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_a0 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    FUN_142880af0(uVar3,&local_b8);
    if (local_58 != 0) {
      plVar2 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar2 = local_68;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (local_e0 != 0) {
      if (local_e8 == (longlong *)0x0) goto LAB_140b05fef;
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
LAB_140b05fef:
  FUN_1413b3130(param_1,param_2,local_c8);
  return;
}



// FUNCTION 140b06020 FUN_140b06020 body=239 status=ok
// SIG undefined FUN_140b06020(void)

void FUN_140b06020(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  undefined1 local_48 [48];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar4 = FUN_1413b1450();
    cVar3 = FUN_140b2eca0(param_2,uVar4);
    if (cVar3 == '\0') {
      uVar4 = FUN_1413b56e0();
      lVar5 = FUN_140b2c110(param_3,uVar4,local_res10);
      if (lVar5 == 0) {
        lVar5 = FUN_140b27c50(param_2,local_98);
        lVar6 = FUN_140b27c50(param_2,local_70);
        iVar1 = *(int *)(lVar6 + 8);
        iVar2 = *(int *)(lVar5 + 0xc);
        lVar5 = FUN_140b27c50(param_2,local_48);
        if (*(int *)(lVar5 + 4) + iVar1 + iVar2 == 0) {
          FUN_140af62e0(param_1,param_2);
          *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
        }
      }
    }
  }
  FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b06110 thunk_FUN_1413b3180 body=5 status=ok
// SIG undefined thunk_FUN_1413b3180(void)

void thunk_FUN_1413b3180(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                        )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_140b15f30(&uStack_38);
  uStack_38 = *param_4;
  uStack_30 = param_4[1];
  uStack_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  uStack_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889890);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_48);
  *param_4 = uStack_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,uStack_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,uStack_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 140b06120 FUN_140b06120 body=617 status=ok
// SIG undefined FUN_140b06120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b06120(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((param_2 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)
     ) {
    FWeakObjectPtr::operator=(&local_d8,param_2);
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar2 == (longlong *)0x0) {
      if (((local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
         ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
    }
    else {
      *plVar2 = (longlong)&PTR_GetPoolName_14428b5d8;
      *(undefined4 *)(plVar2 + 1) = local_d8;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_d4;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar1;
      *plVar2 = (longlong)&PTR_GetPoolName_14428b620;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar2,&local_e8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_c8 = 0;
    local_c0 = 0;
    if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
      (**(code **)(*local_e8 + 0x30))(local_e8,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_b0 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    FUN_142880af0(uVar3,&local_c8);
    if (local_68 != 0) {
      plVar2 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar2 = local_78;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (local_e0 != 0) {
      if (local_e8 == (longlong *)0x0) goto LAB_140b0635c;
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
LAB_140b0635c:
  FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b06390 FUN_140b06390 body=516 status=ok
// SIG undefined FUN_140b06390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b06390(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if (((param_2 != (longlong *)0x0) &&
      (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) &&
     (lVar2 = FUN_140b27c50(param_2,&local_48), *(char *)(lVar2 + 0x18) == '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (lVar2 != 0) {
      local_40 = 0;
      local_60 = 0;
      lVar1 = param_2[0x2d];
      local_68 = 0;
      if (lVar1 == 0) {
        local_78 = _DAT_1468b5d90;
        local_70 = DAT_1468b5d98;
      }
      else {
        local_78 = *(undefined8 *)(lVar1 + 0x220);
        local_70 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_50 = local_70;
      local_58 = local_78;
      uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      FUN_1405a1e30(&local_48,uVar3,lVar2,&local_58,0x42480000,&local_68);
      FUN_140591060(&local_48);
    }
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (lVar2 != 0) {
      local_60 = DAT_1468b5da8;
      lVar1 = param_2[0x2d];
      local_68 = DAT_1468b5da0;
      if (lVar1 == 0) {
        local_50 = DAT_1468b5d98;
        puVar4 = &local_58;
        local_58 = _DAT_1468b5d90;
      }
      else {
        puVar4 = &local_78;
        local_70 = *(undefined4 *)(lVar1 + 0x228);
        local_78 = *(undefined8 *)(lVar1 + 0x220);
      }
      local_48 = *puVar4;
      local_40 = *(undefined4 *)(puVar4 + 1);
      uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      FUN_14245fbc0(uVar3,lVar2,&local_48,&local_68,1,1,0);
    }
  }
  FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b065a0 FUN_140b065a0 body=608 status=ok
// SIG undefined FUN_140b065a0(void)

void FUN_140b065a0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  int local_res10 [2];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_54 [60];
  
  if ((((param_2 != 0) && (param_3 != 0)) && (cVar1 = FUN_140b28450(param_2), cVar1 != '\0')) &&
     ((fVar6 = (float)USphereReflectionCaptureComponent::GetInfluenceBoundingRadius(param_2),
      0.0 < fVar6 && (lVar2 = FUN_140b27c50(param_2,local_54), *(int *)(lVar2 + 0xc) != 1)))) {
    uVar3 = FUN_1413b56e0();
    lVar2 = FUN_140b2c110(param_3,uVar3,local_68);
    if (lVar2 == 0) {
      FUN_140af9d40(param_1 + 0x48,local_res10,param_2 + 0x478);
      lVar2 = 0;
      if (local_res10[0] != -1) {
        lVar2 = (longlong)local_res10[0] * 0x58 + *(longlong *)(param_1 + 0x48);
      }
      lVar5 = lVar2 + 8;
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        lVar2 = FUN_140b27c50(param_2,local_54);
        if (((*(int *)(lVar2 + 8) == 0) &&
            (lVar2 = FUN_140b27c50(param_2,local_54), *(int *)(lVar2 + 4) == 0)) &&
           (lVar2 = FUN_140b27c50(param_2,local_54), *(int *)(lVar2 + 0xc) != 1)) {
          FUN_140b3ffb0(param_2,0);
          FUN_140b40840(param_2,0);
        }
        FUN_14223d160(param_2,&DAT_1464aa810,0);
        FSlateApplication::ExternalUIChange(param_2,0);
        FUN_140b32ff0(param_2,*(undefined1 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                      *(undefined8 *)(param_1 + 0xc0));
        SVirtualWindow::SetIsFocusable(param_2,1);
        plVar4 = (longlong *)FUN_140b2a700(param_2);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x450))(plVar4,*(undefined8 *)(param_2 + 0x168));
          local_58 = *(undefined4 *)(param_1 + 0xac);
          *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
          *(undefined4 *)((longlong)plVar4 + 0x194) = local_58;
          *(undefined4 *)((longlong)plVar4 + 0x1dc) = 0x3f800000;
          FUN_140b40280(plVar4,*(undefined4 *)(param_1 + 0xb0));
          *(undefined4 *)((longlong)plVar4 + 0x1e4) = *(undefined4 *)(param_1 + 0xb4);
        }
        plVar4 = (longlong *)UWidgetComponent::GetUserWidgetObject(param_2);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x638))(plVar4,3);
          (**(code **)(*plVar4 + 0x830))(plVar4,2);
        }
        FUN_140b0f7b0(param_1,param_2,param_4,lVar5);
      }
    }
  }
  FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b06800 FUN_140b06800 body=1454 status=ok
// SIG undefined FUN_140b06800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b06800(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined4 *local_180;
  undefined *local_178;
  longlong *local_168;
  int local_160;
  undefined4 local_158;
  uint local_154;
  longlong *local_150;
  int local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  longlong *local_128;
  undefined4 *local_120;
  undefined8 local_118;
  longlong *local_110;
  uint local_108;
  uint local_104;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_128 = param_2;
  local_100 = param_3;
  local_f8 = param_1;
  local_f0 = param_4;
  if ((((param_2 == (longlong *)0x0) || ((char)param_2[0x25] != '\x03')) ||
      (lVar8 = (**(code **)(*param_2 + 0x148))(param_2), lVar8 == 0)) ||
     ((param_3 == 0 || (fVar17 = (float)FUN_140afed70(param_1,param_4), fVar17 <= 0.0))))
  goto LAB_140b06d82;
  plVar11 = (longlong *)0x0;
  local_110 = (longlong *)0x0;
  local_104 = 0;
  local_120 = (undefined4 *)0x0;
  local_118 = 0;
  local_13c = FUN_1409d4e20(param_2);
  lVar8 = param_2[0x2d];
  local_140 = 2;
  local_158 = 0;
  local_154 = local_154 & 0xffffff00;
  if (lVar8 == 0) {
    local_150 = _DAT_1468b5d90;
    local_148 = DAT_1468b5d98;
  }
  else {
    local_150 = *(longlong **)(lVar8 + 0x220);
    local_148 = *(int *)(lVar8 + 0x228);
  }
  local_160 = local_148;
  local_168 = local_150;
  uVar9 = (**(code **)(*param_2 + 0x148))(param_2);
  local_178 = &DAT_146aefe90;
  local_180 = &local_140;
  local_188 = &local_158;
  UWorld::OverlapMultiByObjectType(uVar9,&local_120,&local_168,&DAT_1464aa810);
  puVar2 = local_120 + (longlong)(int)local_118 * 6;
  plVar16 = plVar11;
  if (local_120 != puVar2) {
    puVar13 = local_120 + 1;
    plVar14 = plVar11;
    do {
      local_140 = puVar13[-1];
      local_13c = *puVar13;
      local_138 = puVar13[1];
      local_134 = puVar13[2];
      local_130 = puVar13[3];
      local_12c = local_12c ^ (puVar13[4] ^ local_12c) & 1;
      lVar8 = FUN_1423111a0(&local_140);
      if (lVar8 != 0) {
        lVar8 = FUN_1423111a0(&local_140);
        iVar15 = (int)plVar11;
        for (plVar12 = plVar16; plVar12 != plVar16 + iVar15; plVar12 = plVar12 + 1) {
          if (*plVar12 == lVar8) goto LAB_140b06a53;
        }
        lVar8 = FUN_1423111a0(&local_140);
        local_108 = iVar15 + 1;
        if ((int)plVar14 < (int)local_108) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_110,plVar11);
          plVar14 = (longlong *)(ulonglong)local_104;
          plVar16 = local_110;
        }
        plVar11 = (longlong *)(ulonglong)local_108;
        plVar16[iVar15] = lVar8;
      }
LAB_140b06a53:
      param_2 = local_128;
      puVar1 = puVar13 + 5;
      puVar13 = puVar13 + 6;
    } while (puVar1 != puVar2);
    param_3 = local_100;
    param_1 = local_f8;
    param_4 = local_f0;
    if (0 < (int)plVar11) {
      iVar15 = 0;
      lVar8 = FUN_142df3510(local_128);
      param_3 = local_100;
      param_1 = local_f8;
      param_4 = local_f0;
      if (lVar8 != 0) {
        for (plVar14 = plVar16; plVar14 != plVar16 + (int)plVar11; plVar14 = plVar14 + 1) {
          plVar12 = (longlong *)*plVar14;
          if (plVar12 != (longlong *)0x0) {
            lVar10 = AHeoCon::GetPrivateStaticClass();
            if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((bVar3) && (iVar7 = FUN_142dec940(lVar8,plVar12), iVar7 == 2)) &&
               (cVar6 = (**(code **)(*plVar12 + 0x950))(plVar12), cVar6 == '\0')) {
              iVar15 = iVar15 + 1;
            }
          }
        }
        fVar17 = (float)iVar15 * fVar17 + 1.0;
        *(float *)(param_2 + 0x8e) = fVar17 * *(float *)(param_2 + 0x8e);
        cVar6 = FUN_140b28450(param_2);
        param_3 = local_100;
        param_1 = local_f8;
        param_4 = local_f0;
        if (cVar6 == '\0') {
          local_168 = (longlong *)0x0;
          local_160 = 0;
          FWeakObjectPtr::operator=(&local_158,param_2);
          uVar5 = local_154;
          uVar4 = local_158;
          plVar11 = (longlong *)FMemory::Realloc(0,0x20,0);
          if (plVar11 == (longlong *)0x0) {
            if (((local_160 != 0) && (local_168 != (longlong *)0x0)) &&
               ((**(code **)(*local_168 + 0x28))(local_168,0), local_168 != (longlong *)0x0)) {
              local_168 = (longlong *)FMemory::Realloc(local_168,0,0);
            }
          }
          else {
            *plVar11 = (longlong)&PTR_GetPoolName_14428b938;
            *(undefined4 *)(plVar11 + 1) = uVar4;
            *(uint *)((longlong)plVar11 + 0xc) = uVar5;
            *(float *)(plVar11 + 2) = fVar17;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar11[3] = lVar8;
            *plVar11 = (longlong)&PTR_GetPoolName_14428b980;
            FUN_140af4840(plVar11,&local_168);
            (**(code **)(*plVar11 + 0x28))(plVar11,0);
            lVar8 = FMemory::Realloc(plVar11,0,0);
            if (lVar8 != 0) {
              FMemory::Free(lVar8);
            }
          }
          local_128 = (longlong *)0x0;
          lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
          if (*(longlong *)(lVar8 + 400) == 0) {
            uVar9 = *(undefined8 *)(lVar8 + 0x3f8);
          }
          else {
            uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
          }
          local_e8 = 0;
          local_e0 = 0;
          if ((local_160 != 0) && (local_168 != (longlong *)0x0)) {
            (**(code **)(*local_168 + 0x30))(local_168,&local_e8);
          }
          FWeakObjectPtr::operator=(local_d8,0);
          local_180 = (undefined4 *)CONCAT44(local_180._4_4_,0xbf800000);
          local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffffffffff00);
          local_d0 = 0;
          local_98 = (longlong *)0x0;
          local_88 = 0;
          local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar9,&local_128,&local_e8,0x3c23d70a);
          if (local_88 != 0) {
            plVar11 = local_b8;
            if (local_98 != (longlong *)0x0) {
              plVar11 = local_98;
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,0);
            }
          }
          if (local_98 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
          if (local_160 != 0) {
            param_3 = local_100;
            param_1 = local_f8;
            param_4 = local_f0;
            if (local_168 == (longlong *)0x0) goto LAB_140b06d48;
            (**(code **)(*local_168 + 0x28))(local_168,0);
            if (local_168 != (longlong *)0x0) {
              local_168 = (longlong *)FMemory::Realloc(local_168,0,0);
            }
            local_160 = 0;
          }
          param_3 = local_100;
          param_1 = local_f8;
          param_4 = local_f0;
          if (local_168 != (longlong *)0x0) {
            FMemory::Free(local_168);
            param_3 = local_100;
            param_1 = local_f8;
            param_4 = local_f0;
          }
        }
      }
    }
  }
LAB_140b06d48:
  if (local_120 != (undefined4 *)0x0) {
    FMemory::Free(local_120);
  }
  if (plVar16 != (longlong *)0x0) {
    FMemory::Free(plVar16);
  }
LAB_140b06d82:
  FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b06dc0 FUN_140b06dc0 body=312 status=ok
// SIG undefined FUN_140b06dc0(void)

void FUN_140b06dc0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (lVar6 = *(longlong *)(param_2 + 0x118), lVar6 != 0)) {
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
    if ((bVar1) && (*(longlong *)(lVar6 + 0x908) != 0)) {
      uVar4 = FWeakObjectPtr::Get(param_4 + 0x6c);
      cVar2 = FUN_142dee910(*(undefined8 *)(lVar6 + 0x908),uVar4);
      if (cVar2 != '\0') {
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_4 + 0x6c);
        if (plVar5 != (longlong *)0x0) {
          lVar6 = FUN_1413f82e0();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (cVar2 = (**(code **)(*plVar5 + 0x950))(plVar5), cVar2 != '\0'))
          goto LAB_140b06ed9;
        }
        FUN_140b3d9f0(param_2);
        UPaperFlipbookComponent::SetPlayRate(param_2,0);
        FUN_140b26e10(param_2);
      }
    }
  }
LAB_140b06ed9:
  FUN_1413b3230(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b06f00 FUN_140b06f00 body=191 status=ok
// SIG undefined FUN_140b06f00(void)

void FUN_140b06f00(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (param_3 != 0)) && (lVar1 = FUN_140b2a730(param_2), lVar1 != 0)) {
    FUN_140b43a90(lVar1);
    lVar3 = 0;
    if (*(longlong *)(lVar1 + 0x1a0) != 0) {
      lVar2 = FWeakObjectPtr::Get(param_4 + 0x6c);
      lVar3 = *(longlong *)(lVar1 + 0x1a0);
      if (lVar3 == lVar2) {
        FUN_140af6740(param_1,param_2,param_3,0,*(undefined4 *)(param_1 + 0x38));
        goto LAB_140b06f99;
      }
    }
    FUN_140b2f9d0(lVar1,lVar3,*(undefined4 *)(param_1 + 0x3c));
  }
LAB_140b06f99:
  FUN_1413b3230(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b06fc0 FUN_140b06fc0 body=105 status=ok
// SIG undefined FUN_140b06fc0(void)

void FUN_140b06fc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140b2a700(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_140b2a700(param_2);
      *(undefined4 *)(lVar1 + 0x1dc) = 0x3f800000;
    }
  }
  FUN_1413b3230(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b07030 thunk_FUN_1413b33a0 body=5 status=ok
// SIG undefined thunk_FUN_1413b33a0(void)

void thunk_FUN_1413b33a0(longlong *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                        undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte abStack_c8 [4];
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_64 = 0xffffffff;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  uStack_5c = 0xffffffff;
  uStack_54 = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(abStack_c8,0,0x90);
  uStack_bc = 0x3f800000;
  FUN_140b15f30(&uStack_38);
  uStack_bc = *(undefined4 *)(param_4 + 0xc);
  uStack_b8 = *(undefined4 *)(param_4 + 0x10);
  abStack_c8[0] = abStack_c8[0] ^ (*param_4 ^ abStack_c8[0]) & 3;
  uStack_b4 = *(undefined8 *)(param_4 + 0x14);
  uStack_c4 = *(undefined4 *)(param_4 + 4);
  uStack_a8 = *(undefined8 *)(param_4 + 0x20);
  uStack_c0 = uStack_c0 ^ (*(uint *)(param_4 + 8) ^ uStack_c0) & 1;
  uStack_ac = *(undefined4 *)(param_4 + 0x1c);
  uStack_a0 = *(undefined4 *)(param_4 + 0x28);
  uStack_94 = *(undefined4 *)(param_4 + 0x34);
  uStack_88 = *(undefined4 *)(param_4 + 0x40);
  uStack_7c = *(undefined4 *)(param_4 + 0x4c);
  uStack_70 = *(undefined4 *)(param_4 + 0x58);
  uStack_68 = *(undefined4 *)(param_4 + 0x60);
  uStack_64 = *(undefined4 *)(param_4 + 100);
  uStack_9c = *(undefined8 *)(param_4 + 0x2c);
  uStack_60 = *(undefined4 *)(param_4 + 0x68);
  uStack_90 = *(undefined8 *)(param_4 + 0x38);
  uStack_5c = *(undefined4 *)(param_4 + 0x6c);
  uStack_84 = *(undefined8 *)(param_4 + 0x44);
  uStack_58 = *(undefined4 *)(param_4 + 0x70);
  uStack_78 = *(undefined8 *)(param_4 + 0x50);
  uStack_54 = *(undefined4 *)(param_4 + 0x74);
  uStack_6c = *(undefined4 *)(param_4 + 0x5c);
  uStack_50 = *(undefined4 *)(param_4 + 0x78);
  uStack_48 = *(undefined8 *)(param_4 + 0x80);
  lVar1 = *param_1;
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  uStack_28 = *(undefined4 *)(param_5 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_5 + 0x14);
  uStack_20 = *(undefined4 *)(param_5 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_40 = *(ulonglong *)(param_4 + 0x88);
  uStack_18 = *(undefined4 *)(param_5 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_10 = *(undefined4 *)(param_5 + 5);
  uStack_c = *(undefined4 *)((longlong)param_5 + 0x2c);
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889898);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_d8);
  *param_5 = uStack_38;
  param_5[1] = uStack_30;
  param_5[2] = CONCAT44(uStack_24,uStack_28);
  param_5[3] = CONCAT44(uStack_1c,uStack_20);
  param_5[4] = CONCAT44(uStack_14,uStack_18);
  param_5[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 140b07040 FUN_140b07040 body=158 status=ok
// SIG undefined FUN_140b07040(void)

void FUN_140b07040(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = FWeakObjectPtr::Get(param_4 + 0x6c), lVar4 != 0)) {
    uVar1 = FWeakObjectPtr::Get(param_4 + 0x6c);
    lVar4 = FUN_142df3510(uVar1);
    if ((lVar4 != 0) &&
       ((iVar3 = FUN_142dec940(lVar4,param_2), iVar3 == 2 &&
        (cVar2 = FUN_140b29400(param_2), cVar2 == '\0')))) {
      FUN_140b26e10(param_2);
    }
  }
  FUN_1413b33a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b070f0 FUN_140b070f0 body=93 status=ok
// SIG undefined FUN_140b070f0(void)

void FUN_140b070f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14307c290(param_2);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x1e4) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(lVar1 + 0x1e8) = *(undefined4 *)(param_1 + 0x34);
    }
  }
  FUN_1413b3580(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b07150 FUN_140b07150 body=241 status=ok
// SIG undefined FUN_140b07150(void)

void FUN_140b07150(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x128) == '\x03') {
      FUN_140b21fe0(param_2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      lVar3 = FUN_140b2a730(param_2);
      if (lVar3 != 0) {
        uVar2 = FUN_140b2a730(param_2);
        FUN_140b30650(uVar2,*(undefined8 *)(param_1 + 0x40));
      }
    }
    UEngine::RestoreSelectedMaterialColor(param_2);
    lVar3 = FUN_140b2a700(param_2);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x1dc) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(lVar3 + 0x1c4) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(lVar3 + 0x1e4) = *(undefined4 *)(param_1 + 0x58);
      uVar1 = *(undefined4 *)(param_1 + 0x54);
      *(uint *)(lVar3 + 0x1c8) = *(uint *)(lVar3 + 0x1c8) | 1;
      *(undefined8 *)(lVar3 + 0x228) = 0xc2b40000;
      *(undefined4 *)(lVar3 + 0x1e8) = uVar1;
      *(undefined1 *)(lVar3 + 0x2c8) = 0;
      *(undefined4 *)(lVar3 + 0x230) = 0;
    }
  }
  FUN_1413b3580(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b07250 FUN_140b07250 body=77 status=ok
// SIG undefined FUN_140b07250(void)

void FUN_140b07250(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_140b40100(param_2,0);
    UEngine::RestoreSelectedMaterialColor(param_2);
  }
  FUN_1413b3580(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b072a0 FUN_140b072a0 body=672 status=ok
// SIG undefined FUN_140b072a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b072a0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [40];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140b27c50(param_2,local_d0);
    if ((*(int *)(lVar1 + 0x10) == 1) &&
       (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)) {
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      FWeakObjectPtr::operator=(&local_d8,param_2);
      plVar2 = (longlong *)FMemory::Realloc(0,0x20,0);
      if (plVar2 == (longlong *)0x0) {
        if (((local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
           ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
          local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
        }
      }
      else {
        *plVar2 = (longlong)&PTR_GetPoolName_14428b308;
        *(undefined4 *)(plVar2 + 1) = local_d8;
        *(undefined4 *)((longlong)plVar2 + 0xc) = local_d4;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[3] = lVar1;
        *plVar2 = (longlong)&PTR_GetPoolName_14428b350;
        TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
        ::CreateCopy(plVar2,&local_e8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
      lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_a8 = 0;
      local_a0 = 0;
      if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
        (**(code **)(*local_e8 + 0x30))(local_e8,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_90 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      FUN_142880af0(uVar3,&local_a8);
      if (local_48 != 0) {
        plVar2 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar2 = local_58;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (local_e0 != 0) {
        if (local_e8 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_e8 + 0x28))(local_e8,0);
        if (local_e8 != (longlong *)0x0) {
          local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
        }
        local_e0 = 0;
      }
      if (local_e8 == (longlong *)0x0) {
        return;
      }
      FMemory::Free(local_e8);
      return;
    }
    FUN_140b3ffb0(param_2,0);
    lVar1 = FUN_140b2a700(param_2);
    if (lVar1 != 0) {
      FUN_140b40280(lVar1,*(undefined4 *)(param_1 + 0x30));
    }
    lVar1 = UWidgetComponent::GetUserWidgetObject(param_2);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x714) = 0;
    }
  }
  FUN_1413b3580(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b07540 thunk_FUN_1413b35d0 body=5 status=ok
// SIG undefined thunk_FUN_1413b35d0(void)

void thunk_FUN_1413b35d0(void)

{
  FUN_1413b35d0();
  return;
}



// FUNCTION 140b07550 FUN_140b07550 body=868 status=ok
// SIG undefined FUN_140b07550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b07550(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_148 [32];
  longlong *local_128;
  int local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((param_2 != (longlong *)0x0) &&
     (lVar4 = FUN_140b27c50(param_2,local_108), *(int *)(lVar4 + 0xc) != 1)) {
    lVar4 = FUN_140b27c50(param_2,local_108);
    if ((*(int *)(lVar4 + 0x10) == 1) &&
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 != 0)) {
      local_128 = (longlong *)0x0;
      local_120 = 0;
      FWeakObjectPtr::operator=(&local_110,param_2);
      FWeakObjectPtr::operator=(&local_118,param_1);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 == (longlong *)0x0) {
        if (((local_120 != 0) && (local_128 != (longlong *)0x0)) &&
           ((**(code **)(*local_128 + 0x28))(local_128,0), local_128 != (longlong *)0x0)) {
          local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
        }
      }
      else {
        *plVar5 = (longlong)&PTR_GetPoolName_14428b548;
        *(undefined4 *)(plVar5 + 1) = local_118;
        *(undefined4 *)((longlong)plVar5 + 0xc) = local_114;
        *(undefined4 *)(plVar5 + 2) = local_110;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_10c;
        plVar5[3] = param_1;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_GetPoolName_14428b590;
        FUN_140af4dd0(plVar5,&local_128);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar4 = FMemory::Realloc(plVar5,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      local_d8 = 0;
      local_d0 = 0;
      if ((local_120 != 0) && (local_128 != (longlong *)0x0)) {
        (**(code **)(*local_128 + 0x30))(local_128,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_c0 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      FUN_142880af0(uVar6,&local_d8);
      if (local_78 != 0) {
        plVar5 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar5 = local_88;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (local_120 != 0) {
        if (local_128 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_128 + 0x28))(local_128,0);
        if (local_128 != (longlong *)0x0) {
          local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
        }
        local_120 = 0;
      }
      if (local_128 == (longlong *)0x0) {
        return;
      }
      FMemory::Free(local_128);
      return;
    }
    fVar7 = 0.0;
    UPaperFlipbookComponent::SetPlayRate(param_2,0);
    FUN_140b3ffb0(param_2,0);
    FUN_140b40840(param_2,0);
    UEngine::RestoreSelectedMaterialColor(param_2);
    lVar4 = FUN_140b2a700(param_2);
    if (lVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x30);
      if (0 < iVar1) {
        iVar2 = *param_4;
        if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar1 = iVar2;
        }
        fVar7 = (float)FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x28),0
                                    );
      }
      FUN_140b40280(lVar4,(int)fVar7);
    }
    lVar4 = UWidgetComponent::GetUserWidgetObject(param_2);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x714) = 0;
    }
  }
  FUN_1413b35d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b078d0 FUN_140b078d0 body=98 status=ok
// SIG undefined FUN_140b078d0(void)

void FUN_140b078d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_140b3ffb0(param_2,1);
    lVar1 = FUN_140b2a700();
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18c) = 0;
    }
    AMaiCharacter::AbortAttack_Implementation(param_2);
  }
  FUN_1413b3680(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b07940 thunk_FUN_1413b36d0 body=5 status=ok
// SIG undefined thunk_FUN_1413b36d0(void)

void thunk_FUN_1413b36d0(void)

{
  FUN_1413b36d0();
  return;
}



// FUNCTION 140b07950 FUN_140b07950 body=154 status=ok
// SIG undefined FUN_140b07950(void)

void FUN_140b07950(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_38 [48];
  
  if (param_2 == 0) goto LAB_140b079c5;
  lVar1 = FUN_140b27c50(param_2,local_38);
  if (*(int *)(lVar1 + 8) < 1) {
    uVar2 = FUN_1413b0610();
    cVar3 = FUN_140b2eca0(param_2,uVar2);
    if (cVar3 == '\0') goto LAB_140b0799c;
  }
  else {
LAB_140b0799c:
    FUN_140b3ffb0(param_2,1);
  }
  UPaperFlipbookComponent::SetPlayRate(param_2,0);
  cVar3 = FUN_140b29400(param_2);
  if (cVar3 == '\0') {
    FUN_140b26e10(param_2);
  }
LAB_140b079c5:
  FUN_1413b36d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b079f0 FUN_140b079f0 body=101 status=ok
// SIG undefined FUN_140b079f0(void)

void FUN_140b079f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
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
      FUN_14145dc60(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 140b07a60 FUN_140b07a60 body=678 status=ok
// SIG undefined FUN_140b07a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b07a60(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_3d8 [32];
  undefined4 *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined1 local_38c;
  undefined2 local_38b;
  undefined1 local_389;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined8 local_378 [2];
  undefined **local_368;
  longlong local_360;
  longlong *local_358;
  longlong local_348;
  longlong local_330;
  uint local_308;
  longlong local_300;
  undefined4 local_28c;
  longlong local_280;
  undefined1 local_250 [8];
  undefined8 local_248;
  undefined1 local_238 [44];
  undefined1 local_20c [220];
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  ulonglong local_38;
  
  if (((param_4 != 0) &&
      (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3d8, *(int *)(param_3 + 0x108) < 1)) &&
     (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    lVar2 = FUN_14304c8c0(lVar2);
    if (lVar2 != 0) {
      FUN_140aec950(&local_368);
      local_360 = 0;
      if (param_1[0xbf] != 0) {
        lVar3 = FUN_141432f80();
        for (lVar1 = param_1[0xbf];
            (local_360 = 0, lVar1 != 0 && (local_360 = param_1[0xbf], lVar1 != lVar3));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      local_348 = param_1[0xae];
      local_28c = (undefined4)param_1[0xd];
      local_308 = local_308 | 2;
      local_300 = param_1[0x2a];
      local_358 = param_1;
      local_330 = param_4;
      FUN_14303ae50(lVar2,local_378,&local_368);
      local_368 = &PTR_FUN_14422f7d8;
      FWeakObjectPtr::operator=(local_250,0);
      local_378[0] = 0;
      local_248 = 0;
      if (local_280 != 0) {
        FMemory::Free();
      }
    }
    FUN_142d0a300(local_238);
    FWeakObjectPtr::operator=(local_20c,param_1);
    if ((undefined8 *)(param_3 + 200) != &local_128) {
      local_128 = *(undefined8 *)(param_3 + 200);
      local_120 = *(undefined4 *)(param_3 + 0xd0);
      local_11c = 1;
    }
    if ((char)param_1[0xcf] == '\0') {
      local_130 = FUN_142c98860(param_1 + 199,param_1[0x2a]);
      local_12c = 1;
      local_38b = 0;
      local_389 = 0;
      local_398 = 0xbf800000;
      local_394 = 0xbf800000;
      local_390 = 0xbf800000;
      local_38c = 0;
      local_388 = 0x3f800000;
      local_384 = 0x3f800000;
      local_380 = 0x3f800000;
      lVar2 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    }
    else {
      lVar2 = param_1[0xce];
      local_38b = 0;
      local_389 = 0;
      local_398 = 0xbf800000;
      local_394 = 0xbf800000;
      local_390 = 0xbf800000;
      local_38c = 0;
      local_388 = 0x3f800000;
      local_384 = 0x3f800000;
      local_380 = 0x3f800000;
    }
    local_3b8 = &local_398;
    local_3a8 = 0;
    local_3b0 = 0;
    FUN_140a86fb0(param_1,lVar2,param_4,local_238);
    FUN_1409c53c0(local_238);
  }
  return;
}



// FUNCTION 140b07d10 FUN_140b07d10 body=109 status=ok
// SIG undefined FUN_140b07d10(void)

void FUN_140b07d10(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_3 != 0)) {
    lVar2 = FUN_1413ffe00();
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
      FUN_140b0e4d0(param_1,param_3,CONCAT71((int7)((ulonglong)(lVar2 + 0x88) >> 8),1));
    }
  }
  return;
}



// FUNCTION 140b07d80 FUN_140b07d80 body=109 status=ok
// SIG undefined FUN_140b07d80(void)

void FUN_140b07d80(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_3 != 0)) {
    lVar2 = FUN_1413ffe00();
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
      FUN_140b0e4d0(param_1,param_3,0);
    }
  }
  return;
}



// FUNCTION 140b07df0 FUN_140b07df0 body=790 status=ok
// SIG undefined FUN_140b07df0(void)

void FUN_140b07df0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  
  FUN_140b38cf0();
  if ((((*(longlong *)(param_1 + 0x4a8) != 0) && (param_2 != (longlong *)0x0)) &&
      (*(longlong *)(param_1 + 0x498) != 0)) &&
     (lVar9 = (**(code **)(param_2[0x1b0] + 0x18))(), lVar9 != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x208);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x1fc);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1d8) != 0)) &&
       ((*(char *)(*(longlong *)(lVar1 + 0x1d8) + 0x3c) != '\0' &&
        (cVar4 = FUN_140b81c70(param_1), cVar4 == '\x01')))) {
      plVar10 = (longlong *)FUN_140b823b0(param_1);
      if (plVar10 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)plVar10[0x23];
      }
      uVar11 = FUN_142dfdf30();
      plVar12 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar11);
      if (((plVar10 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) &&
         ((plVar13 != param_2 && (DAT_146868b34 == '\0')))) {
        DAT_146868b34 = '\0';
        cVar4 = (char)(*(longlong **)(param_1 + 0x498))[0x34];
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x408))();
        iVar6 = (**(code **)(*plVar12 + 0x408))(plVar12);
        iVar7 = (**(code **)(*plVar10 + 0x408))(plVar10);
        iVar8 = FUN_1405120f0();
        iVar7 = (iVar6 - iVar7) + iVar5;
        iVar6 = 1;
        if ((0 < iVar7) && (iVar6 = iVar8, iVar7 < iVar8)) {
          iVar6 = iVar7;
        }
        if (cVar4 != '\0') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x498) + 0x1a0) = 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x498);
        iVar7 = FUN_14233f450(lVar2);
        if (iVar7 == 3) {
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          *(int *)(lVar2 + 0x1a8) = iVar6;
        }
        fVar14 = (float)FUN_142c98860(lVar1 + 0x1e8,param_1);
        lVar1 = *(longlong *)(param_1 + 0x498);
        iVar6 = (int)fVar14;
        iVar7 = FUN_14233f450(lVar1);
        if (iVar7 == 3) {
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          *(int *)(lVar1 + 0x1a8) = iVar5;
        }
        if (cVar4 != '\0') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x498) + 0x1a0) = 1;
        }
      }
    }
    fVar14 = (float)FUN_142c98860(param_1 + 0x4b0,param_2);
    iVar6 = (int)(fVar14 * (float)iVar6);
    if (*(char *)(*(longlong *)(param_1 + 0x4a8) + 0x30) == '\0') {
      FUN_142fe44f0(lVar9,*(longlong *)(param_1 + 0x4a8),iVar6);
    }
    else {
      plVar10 = (longlong *)param_2[0x138];
      if (plVar10 != (longlong *)0x0) {
        lVar9 = FUN_14145f370();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (((*(uint *)((longlong)plVar10 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar4 = (**(code **)(*plVar10 + 0x768))(plVar10), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            FUN_140aa27c0(plVar10 + 0x34d,*(undefined8 *)(param_1 + 0x4a8),iVar6);
          }
          (**(code **)(*plVar10 + 0x1030))(plVar10,iVar6,*(undefined8 *)(param_1 + 0x4a8));
        }
      }
    }
    if (*(longlong *)(param_1 + 0x4e8) != 0) {
      FUN_142dedb40(param_2,*(longlong *)(param_1 + 0x4e8),iVar6);
    }
  }
  return;
}



// FUNCTION 140b08110 FUN_140b08110 body=58 status=ok
// SIG undefined FUN_140b08110(void)

void FUN_140b08110(longlong param_1,undefined8 param_2)

{
  FUN_140b38cf0();
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_142dedb40(param_2,*(longlong *)(param_1 + 0x4a8),1);
  }
  return;
}



// FUNCTION 140b08150 FUN_140b08150 body=521 status=ok
// SIG undefined FUN_140b08150(void)

void FUN_140b08150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  if ((((param_2 != 0) && (*(char *)(param_1 + 0x62a) == '\x02')) &&
      (cVar3 = FUN_142f63b20(param_1 + 0x680,param_1), cVar3 != '\0')) &&
     (lVar6 = *(longlong *)(param_2 + 0x568), lVar6 != 0)) {
    lVar5 = FUN_141437c50();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(longlong *)(lVar6 + 0x468) == *(longlong *)(param_1 + 0x688)) &&
         (cVar3 = FSoftObjectPath::operator==(lVar6 + 0x498,param_1 + 0x6b8), cVar3 != '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (lVar6 = FUN_140b825a0(param_1), lVar6 != 0)) {
        plVar8 = *(longlong **)(lVar6 + 0x9a0);
        plVar1 = plVar8 + *(int *)(lVar6 + 0x9a8);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          lVar6 = *plVar8;
          if (((lVar6 != 0) && (lVar6 != param_2)) &&
             (lVar6 = *(longlong *)(lVar6 + 0x568), lVar6 != 0)) {
            lVar5 = FUN_141437c50();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar4 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar4 < (int)DAT_1469e91c4) {
                uVar7 = uVar4 & 0xffff;
                if ((int)uVar4 < 0) {
                  uVar4 = uVar4 + 0xffff;
                  uVar7 = uVar7 - 0x10000;
                }
                lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                        (longlong)(int)uVar7 * 0x18;
              }
              else {
                lVar5 = 0;
              }
              if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
                if ((*(longlong *)(lVar6 + 0x468) == *(longlong *)(param_1 + 0x688)) &&
                   (cVar3 = FSoftObjectPath::operator==(lVar6 + 0x498,param_1 + 0x6b8),
                   cVar3 != '\0')) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  FUN_142227350(param_2,0,1);
                  return;
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



// FUNCTION 140b08360 FUN_140b08360 body=154 status=ok
// SIG undefined FUN_140b08360(void)

void FUN_140b08360(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_18 [16];
  
  FUN_140b08150();
  if (param_2 != 0) {
    lVar2 = FUN_141481e80();
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
      uVar3 = FString::FString(local_18,param_1 + 0x7e8);
      FUN_140b3ffd0(param_2,uVar3);
      uVar3 = FString::FString(local_18,param_1 + 0x7f8);
      FUN_140b40160(param_2,uVar3,*(undefined4 *)(param_1 + 0x808));
    }
  }
  return;
}



// FUNCTION 140b08400 FUN_140b08400 body=41 status=ok
// SIG undefined FUN_140b08400(void)

void FUN_140b08400(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14129bba0(*(undefined8 *)(param_1 + 0x660));
  *(undefined8 *)(param_1 + 0x668) = uVar1;
  FUN_1413175d0(param_1);
  return;
}



// FUNCTION 140b08430 FUN_140b08430 body=25 status=ok
// SIG undefined FUN_140b08430(void)

void FUN_140b08430(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FUN_141317590(*(longlong *)(param_1 + 0x678));
    return;
  }
  FUN_141317550();
  return;
}



// FUNCTION 140b08450 FUN_140b08450 body=362 status=ok
// SIG undefined FUN_140b08450(void)

void FUN_140b08450(long param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (param_2 != 0) {
    lVar2 = FUN_1414b9a30();
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
      lVar2 = *(longlong *)(param_2 + 0x538);
      lVar5 = (longlong)*(int *)(param_2 + 0x540) * 0x88 + lVar2;
      for (; lVar2 != lVar5; lVar2 = lVar2 + 0x88) {
        if ((*(longlong *)(lVar2 + 0x40) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
          uVar3 = FUN_142a232e0();
          FUN_1417846f0(param_2,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          lVar4 = FUN_1417985e0(uVar3,param_2,0,0,0,0,0,0,0);
          *(longlong *)(lVar2 + 0x50) = lVar4;
          if (lVar4 != 0) {
            FUN_14234b150(lVar4);
            FUN_142382f60(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x40),&DAT_146af29ec
                         );
            (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x928))
                      (*(longlong **)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x10));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b085c0 thunk_FUN_140b0ec80 body=5 status=ok
// SIG undefined thunk_FUN_140b0ec80(void)

void thunk_FUN_140b0ec80(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar4 = FUN_142235230();
  if (iVar4 != 3) {
    lVar1 = param_1[0xcd];
    if (param_2 != 0) {
      plVar2 = (longlong *)param_1[0xcf];
      for (plVar7 = plVar2; plVar7 != plVar2 + (longlong)(int)param_1[0xd0] * 3; plVar7 = plVar7 + 3
          ) {
        if (*plVar7 == param_2) {
          lVar8 = ((longlong)plVar7 - (longlong)plVar2) / 6 +
                  ((longlong)plVar7 - (longlong)plVar2 >> 0x3f);
          iVar4 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
          if ((-1 < iVar4) && (iVar4 < (int)param_1[0xd0])) {
            lVar8 = (longlong)iVar4;
            if (param_3 == 0) {
              if (plVar2[lVar8 * 3 + 2] != 0) {
                FUN_142227350(plVar2[lVar8 * 3 + 2],0,CONCAT71((int7)((ulonglong)plVar2 >> 8),1));
                *(undefined8 *)(lVar8 * 0x18 + 0x10 + param_1[0xcf]) = 0;
                *(undefined8 *)(lVar8 * 0x18 + 8 + param_1[0xcf]) = 0;
              }
              FUN_140af5670(param_1);
            }
            *(longlong *)(param_1[0xcf] + 8 + lVar8 * 0x18) = param_3;
          }
          goto LAB_140b0ecee;
        }
      }
      iVar4 = -1;
LAB_140b0ecee:
      if (param_3 != 0) {
        param_1[0xcd] = param_3;
        (**(code **)(*param_1 + 0x600))(param_1);
        uVar5 = FUN_140b0de00(param_1,param_3);
        if ((-1 < iVar4) && (iVar4 < (int)param_1[0xd0])) {
          lVar6 = (longlong)iVar4;
          lVar8 = param_1[0xcf];
          lVar3 = *(longlong *)(lVar8 + (lVar6 * 3 + 2) * 8);
          if (lVar3 != 0) {
            FUN_142227350(lVar3,0,1);
            *(undefined8 *)(lVar6 * 0x18 + 0x10 + param_1[0xcf]) = 0;
            lVar8 = param_1[0xcf];
          }
          *(undefined8 *)(lVar8 + (lVar6 * 3 + 2) * 8) = uVar5;
        }
      }
    }
    if (param_1[0xcd] != lVar1) {
      lVar8 = param_1[0xcf];
      lVar1 = lVar8 + (longlong)(int)param_1[0xd0] * 0x18;
      for (; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
        if ((*(longlong *)(lVar8 + 8) != param_1[0xcd]) &&
           (plVar2 = *(longlong **)(lVar8 + 0x10), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x310))(plVar2,1);
          lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x168);
          if (lVar3 != 0) {
            FUN_142398ec0(lVar3,0,2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b085d0 FUN_140b085d0 body=257 status=ok
// SIG undefined FUN_140b085d0(void)

void FUN_140b085d0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 local_res20;
  char local_res21;
  undefined2 *local_28;
  undefined8 local_20;
  
  local_20 = 0xb;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar4 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0xb,"Decelerate",0xb,0x3f);
  psVar5 = &DAT_143f3eda8;
  puVar6 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar6 = puVar4;
  }
  if ((int)param_4[1] != 0) {
    psVar5 = (short *)*param_4;
  }
  lVar7 = (longlong)puVar6 - (longlong)psVar5;
  do {
    sVar2 = *psVar5;
    sVar3 = *(short *)((longlong)psVar5 + lVar7);
    if (sVar2 != sVar3) break;
    psVar5 = psVar5 + 1;
  } while (sVar3 != 0);
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  if (sVar2 == sVar3) {
    cVar1 = *(char *)(param_1 + 0x468);
    if (cVar1 != '\x05') {
      *(undefined1 *)(param_1 + 0x468) = 5;
      local_res20 = 5;
      local_res21 = cVar1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x458,&local_res20);
    }
    *(undefined4 *)(param_2 + 0x1cc) = 0xbf800000;
    *(undefined1 *)(param_2 + 0x1c4) = 1;
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b086e0 FUN_140b086e0 body=444 status=ok
// SIG undefined FUN_140b086e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b086e0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x474);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_140b0f2e0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x91,&local_98,uVar1);
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
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return;
}



// FUNCTION 140b088a0 FUN_140b088a0 body=36 status=ok
// SIG undefined FUN_140b088a0(void)

void FUN_140b088a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x5f0) != '\0') {
    FUN_140af0a80();
  }
  FUN_140b0a750(param_1);
  return;
}



// FUNCTION 140b088e0 FUN_140b088e0 body=163 status=ok
// SIG undefined FUN_140b088e0(void)

void FUN_140b088e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x660) != 0) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    uStack_10 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_140b08400;
    puVar1 = (undefined8 *)operator_new(0x30,&local_28);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(puVar1 + 1,param_1);
      *(undefined4 *)(puVar1 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_18._4_4_;
      *(undefined4 *)(puVar1 + 3) = uStack_10;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_c;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[5] = uVar2;
      *puVar1 = &PTR_FUN_143f77bd0;
    }
    FUN_141292470(*(undefined8 *)(param_1 + 0x660),&local_28);
  }
  return;
}



// FUNCTION 140b08990 FUN_140b08990 body=72 status=ok
// SIG undefined FUN_140b08990(void)

void FUN_140b08990(longlong param_1)

{
  if (*(char *)(param_1 + 0x67c) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x670) == 1) {
    FUN_140af7a10();
    FUN_140af4520(param_1);
    return;
  }
  FUN_140af7c60(param_1,0);
  FUN_140af4520(param_1);
  return;
}



// FUNCTION 140b089e0 FUN_140b089e0 body=98 status=ok
// SIG undefined FUN_140b089e0(void)

void FUN_140b089e0(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(char *)(param_1 + 0x603) == '\0') && (*(int *)(param_1 + 0x670) == 1)) {
    local_18 = *(undefined8 *)(param_1 + 0x630);
    local_10 = *(undefined4 *)(param_1 + 0x638);
    FUN_1423990b0(*(undefined8 *)(param_1 + 0x550),&local_18,0,0,0);
    FUN_140af3ee0(param_1);
    return;
  }
  return;
}



// FUNCTION 140b08a50 FUN_140b08a50 body=57 status=ok
// SIG undefined FUN_140b08a50(void)

void FUN_140b08a50(longlong param_1)

{
  if ((*(char *)(param_1 + 0x603) == '\0') && (*(int *)(param_1 + 0x670) == 1)) {
    FUN_142399b10(*(undefined8 *)(param_1 + 0x550),param_1 + 0x650,0,0,0);
  }
  return;
}



// FUNCTION 140b08a90 FUN_140b08a90 body=98 status=ok
// SIG undefined FUN_140b08a90(void)

void FUN_140b08a90(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(char *)(param_1 + 0x603) == '\0') && (*(int *)(param_1 + 0x670) == 2)) {
    local_18 = *(undefined8 *)(param_1 + 0x63c);
    local_10 = *(undefined4 *)(param_1 + 0x644);
    FUN_1423990b0(*(undefined8 *)(param_1 + 0x550),&local_18,0,0,0);
    FUN_140af3ee0(param_1);
    return;
  }
  return;
}



// FUNCTION 140b08b00 FUN_140b08b00 body=57 status=ok
// SIG undefined FUN_140b08b00(void)

void FUN_140b08b00(longlong param_1)

{
  if ((*(char *)(param_1 + 0x603) == '\0') && (*(int *)(param_1 + 0x670) == 2)) {
    FUN_142399b10(*(undefined8 *)(param_1 + 0x550),param_1 + 0x660,0,0,0);
  }
  return;
}



// FUNCTION 140b08b70 FUN_140b08b70 body=59 status=ok
// SIG undefined FUN_140b08b70(void)

void FUN_140b08b70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x670),0,1);
  }
  uVar1 = FUN_140b0de00(param_1,*(undefined8 *)(param_1 + 0x668));
  *(undefined8 *)(param_1 + 0x670) = uVar1;
  return;
}



// FUNCTION 140b08bb0 FUN_140b08bb0 body=84 status=ok
// SIG undefined FUN_140b08bb0(void)

void FUN_140b08bb0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x4fa);
  *(char *)((longlong)param_1 + 0x4fd) = cVar1;
  (**(code **)(*param_1 + 0x758))();
  if (cVar1 == '\x01') {
    FUN_1413c14c0(param_1);
  }
  else if (cVar1 == '\x02') {
    FUN_1413c1500(param_1);
    return;
  }
  return;
}



// FUNCTION 140b08c10 FUN_140b08c10 body=84 status=ok
// SIG undefined FUN_140b08c10(void)

void FUN_140b08c10(longlong *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x4f9);
  *(char *)((longlong)param_1 + 0x4fc) = cVar1;
  (**(code **)(*param_1 + 0x750))();
  if (cVar1 == '\x01') {
    FUN_1413c1580(param_1);
  }
  else if (cVar1 == '\x02') {
    FUN_1413c1540(param_1);
    return;
  }
  return;
}



// FUNCTION 140b08ca0 FUN_140b08ca0 body=331 status=ok
// SIG undefined FUN_140b08ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b08ca0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(char *)((longlong)param_1 + 0x674) != '\0') &&
     (*(char *)((longlong)param_1 + 0x603) != '\0')) {
    if ((char)param_1[0x25] == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x603) = 0;
      *(undefined1 *)((longlong)param_1 + 0x674) = 1;
      FUN_142890280(param_1[0xad]);
      if ((param_1[0xaa] != 0) && (param_1[0xbf] != 0)) {
        uStack_74 = 0;
        uStack_70 = 0;
        local_78 = local_78 & 0xffffff00;
        local_68 = (ulonglong)local_78;
        local_60 = 0;
        lVar1 = FUN_1423912d0(param_1[0xaa],local_48);
        local_78 = *(uint *)(lVar1 + 0x10);
        uStack_74 = *(undefined4 *)(lVar1 + 0x14);
        uStack_70 = *(undefined4 *)(lVar1 + 0x18);
        local_80 = 0;
        local_88 = 0;
        local_98 = param_1;
        local_90 = param_1;
        local_50 = uStack_70;
        FUN_142d40cc0(param_1[0xbf],&local_78,&local_68,0);
      }
      FUN_140b0c810(param_1);
      (**(code **)(*param_1 + 0x600))(param_1);
      FUN_140b108a0(param_1);
    }
    else {
      FUN_140b108a0();
      FUN_142890280(param_1[0xad]);
    }
  }
  return;
}



// FUNCTION 140b08df0 FUN_140b08df0 body=133 status=ok
// SIG undefined FUN_140b08df0(void)

void FUN_140b08df0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x638);
  plVar1 = plVar5 + *(int *)(param_1 + 0x640);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = FUN_1414d3b80();
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
        FUN_140af5780(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140b08e90 FUN_140b08e90 body=62 status=ok
// SIG undefined FUN_140b08e90(void)

void FUN_140b08e90(undefined8 param_1,long param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage(param_2);
  return;
}



// FUNCTION 140b08ed0 FUN_140b08ed0 body=62 status=ok
// SIG undefined FUN_140b08ed0(void)

void FUN_140b08ed0(undefined8 param_1,long param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage(param_2);
  return;
}



// FUNCTION 140b08f10 FUN_140b08f10 body=783 status=ok
// SIG undefined FUN_140b08f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b08f10(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (((char)param_1[0xef] == '\0') && ((*(byte *)((longlong)param_1 + 0x56c) & 8) != 0)) {
    *(undefined1 *)(param_1 + 0xef) = 1;
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      FUN_142880530(uVar6,param_1 + 0xf0);
      param_1[0xf0] = 0;
    }
    plVar5 = (longlong *)param_1[0x2d];
    if (plVar5 != (longlong *)0x0) {
      lVar4 = FUN_1429f11d0();
      lVar3 = plVar5[2];
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar5 + 0x5b8))(plVar5,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
        local_b8 = 0;
        cVar2 = (**(code **)(*plVar5 + 0x400))(plVar5,0);
        if (cVar2 != '\0') {
          if (((*(float *)(param_1 + 0xe2) == 0.0) && (*(float *)((longlong)param_1 + 0x714) == 0.0)
              ) && (*(float *)(param_1 + 0xe3) == 0.0)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            uStack_a0 = (undefined4)param_1[0xe3];
            local_a8 = (code *)param_1[0xe2];
            local_b8 = 0;
            (**(code **)(*plVar5 + 0x5d8))(plVar5,&local_a8,0,0);
          }
        }
        (**(code **)(*param_1 + 0x600))(param_1);
        FUN_14223e980(param_1,1);
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar3 != 0) {
          local_a8 = FUN_140b024a0;
          uStack_a0 = 0;
          lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar3 + 400) == 0) {
            uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
          }
          else {
            uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
          }
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            *(undefined4 *)(plVar5 + 2) = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar5 + 0x14) = local_a8._4_4_;
            *(undefined4 *)(plVar5 + 3) = uStack_a0;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_9c;
            lVar3 = FDelegateHandle::GenerateNewID();
            plVar5[5] = lVar3;
            *plVar5 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_98 = 0;
          local_90 = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
          }
          FWeakObjectPtr::operator=(local_88,0);
          local_c0 = 0xbf800000;
          local_c8 = 1;
          local_80 = 0;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar6,param_1 + 0xf1,&local_98,0x3f000000);
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
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            lVar3 = FMemory::Realloc(plVar5,0,0);
            if (lVar3 != 0) {
              FMemory::Free(lVar3);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b09220 FUN_140b09220 body=564 status=ok
// SIG undefined FUN_140b09220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b09220(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  lVar5 = param_1[0xad];
  if (lVar5 != 0) {
    lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_a8 = FUN_140b09870;
      uStack_a0 = 0;
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0xd0);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
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
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xb2,&local_98,uVar1);
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
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      FUN_141321df0(param_1);
    }
  }
  return;
}



// FUNCTION 140b09460 FUN_140b09460 body=564 status=ok
// SIG undefined FUN_140b09460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b09460(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  lVar5 = param_1[0xad];
  if (lVar5 != 0) {
    lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_a8 = FUN_140b09ab0;
      uStack_a0 = 0;
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(lVar5 + 200);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
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
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xb0,&local_98,uVar1);
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
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      FUN_141321eb0(param_1);
    }
  }
  return;
}



// FUNCTION 140b096a0 FUN_140b096a0 body=231 status=ok
// SIG undefined FUN_140b096a0(void)

void FUN_140b096a0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  if (((*(char *)(param_1 + 0x4fb) - 1U & 0xfd) == 0) ||
     ((*(char *)(param_1 + 0x5f0) != '\0' && (*(char *)(param_1 + 0x768) == '\0')))) {
    uVar4 = 1;
  }
  FUN_14223f340(param_1,uVar4);
  if ((*(int *)(param_1 + 0x620) != 0) && (*(longlong *)(param_1 + 0x738) != 0)) {
    bVar2 = (byte)(*(char *)(param_1 + 0x4fb) - 1U) < 3;
    if ((bool)(*(byte *)(param_1 + 0x7b8) & 1) != bVar2) {
      bVar3 = *(byte *)(param_1 + 0x7b8) & 0xfe | bVar2;
      *(byte *)(param_1 + 0x7b8) = bVar3;
      puVar5 = *(undefined8 **)(param_1 + 0x618);
      puVar1 = puVar5 + *(int *)(param_1 + 0x620);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        (**(code **)(**(longlong **)(param_1 + 0x738) + 0xa88))
                  (*(longlong **)(param_1 + 0x738),(~bVar3 & 1) + 2,*puVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140b09790 FUN_140b09790 body=83 status=ok
// SIG undefined FUN_140b09790(void)

void FUN_140b09790(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140b12950();
  }
  lVar1 = *(longlong *)(param_1 + 0x578);
  if (lVar1 != 0) {
    if ((byte)(*(char *)(param_1 + 0x4fb) - 1U) < 3) {
      FUN_142398ec0(lVar1,1);
      return;
    }
    FUN_142398ec0(lVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 140b097f0 FUN_140b097f0 body=58 status=ok
// SIG undefined FUN_140b097f0(void)

void FUN_140b097f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x600))();
  *(undefined1 *)((longlong)param_1 + 0x571) = 2;
  if ((longlong *)param_1[0xab] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b0981d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0xab] + 0x288))();
    return;
  }
  return;
}



// FUNCTION 140b09830 FUN_140b09830 body=60 status=ok
// SIG undefined FUN_140b09830(void)

void FUN_140b09830(longlong *param_1)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x600))();
  plVar1 = (longlong *)param_1[0xab];
  *(undefined1 *)((longlong)param_1 + 0x571) = 1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b0985f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x280))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140b09870 FUN_140b09870 body=564 status=ok
// SIG undefined FUN_140b09870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b09870(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  lVar5 = param_1[0xad];
  if (lVar5 != 0) {
    lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_a8 = FUN_140b09460;
      uStack_a0 = 0;
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0xd4);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
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
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xaf,&local_98,uVar1);
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
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      FUN_141321e30(param_1);
    }
  }
  return;
}



// FUNCTION 140b09ab0 FUN_140b09ab0 body=564 status=ok
// SIG undefined FUN_140b09ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b09ab0(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  lVar5 = param_1[0xad];
  if (lVar5 != 0) {
    lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_a8 = FUN_140b09220;
      uStack_a0 = 0;
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0xcc);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
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
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xb1,&local_98,uVar1);
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
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      FUN_141321e70(param_1);
    }
  }
  return;
}



// FUNCTION 140b09cf0 FUN_140b09cf0 body=843 status=ok
// SIG undefined FUN_140b09cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b09cf0(longlong param_1,char param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  char local_108;
  char local_104 [4];
  longlong *local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar9 = *(longlong **)(param_1 + 0x500);
  plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x508) * 2;
  if (plVar9 != plVar6) {
    plVar7 = plVar9 + 1;
    local_108 = param_2;
    local_100 = plVar6;
    do {
      plVar2 = (longlong *)*plVar9;
      if (plVar2 != (longlong *)0x0) {
        if (param_2 == '\0') {
          if ((*(byte *)(param_1 + 0x4ff) & 2) != 0) {
            cVar8 = (char)*plVar7 == '\0';
            goto LAB_140b09dc5;
          }
        }
        else {
          if (plVar7 != (longlong *)local_104) {
            local_104[0] = (char)*plVar7;
          }
          cVar8 = local_104[0];
          if (plVar7 != (longlong *)local_104) {
LAB_140b09dc5:
            fVar14 = *(float *)((longlong)plVar7 + 4);
            bVar1 = *(byte *)((longlong)plVar2 + 0x4ff);
            plVar6 = local_100;
            local_104[0] = cVar8;
            if (cVar8 == '\0') {
              if ((bVar1 & 4) == 0) {
                if ((*(byte *)(param_1 + 0x4ff) & 1) != 0) {
                  *(byte *)((longlong)plVar2 + 0x4ff) = bVar1 | 4;
                }
                lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
                plVar6 = local_100;
                param_2 = local_108;
                if (lVar3 != 0) {
                  local_f8 = FUN_1413c1600;
                  if (fVar14 <= 0.01) {
                    fVar14 = 0.01;
                  }
                  uStack_f0 = 0;
                  uVar4 = AActor::GetWorldTimerManager(plVar2);
                  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
                  if (plVar5 != (longlong *)0x0) {
                    *plVar5 = (longlong)&PTR_FUN_143f77b88;
                    FWeakObjectPtr::operator=(plVar5 + 1,plVar2);
                    uVar10 = (undefined4)local_f8;
                    uVar11 = local_f8._4_4_;
                    uVar12 = uStack_f0;
                    uVar13 = uStack_ec;
LAB_140b09edc:
                    *(undefined4 *)(plVar5 + 2) = uVar10;
                    *(undefined4 *)((longlong)plVar5 + 0x14) = uVar11;
                    *(undefined4 *)(plVar5 + 3) = uVar12;
                    *(undefined4 *)((longlong)plVar5 + 0x1c) = uVar13;
                    lVar3 = FDelegateHandle::GenerateNewID();
                    plVar5[5] = lVar3;
                    *plVar5 = (longlong)&PTR_FUN_143f77bd0;
                  }
LAB_140b09ef3:
                  local_d0 = 0;
                  local_d8 = 0;
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x30))(plVar5,&local_d8);
                  }
                  FWeakObjectPtr::operator=(local_c8,0);
                  local_110 = 0xbf800000;
                  local_c0 = 0;
                  local_88 = (longlong *)0x0;
                  local_78 = 0;
                  local_118 = 0;
                  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
                  FUN_142880850(uVar4,plVar2 + 0xa2,&local_d8,fVar14);
                  if (local_78 != 0) {
                    plVar6 = local_a8;
                    if (local_88 != (longlong *)0x0) {
                      plVar6 = local_88;
                    }
                    if (plVar6 != (longlong *)0x0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6,0);
                    }
                  }
                  if (local_88 != (longlong *)0x0) {
                    FMemory::Free();
                  }
                  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
                  plVar6 = local_100;
                  param_2 = local_108;
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x28))(plVar5,0);
                    lVar3 = FMemory::Realloc(plVar5,0);
                    plVar6 = local_100;
                    param_2 = local_108;
                    if (lVar3 != 0) {
                      FMemory::Free(lVar3);
                      plVar6 = local_100;
                      param_2 = local_108;
                    }
                  }
                }
              }
            }
            else if ((bVar1 & 4) == 0) {
              if ((*(byte *)(param_1 + 0x4ff) & 1) != 0) {
                *(byte *)((longlong)plVar2 + 0x4ff) = bVar1 | 4;
              }
              lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
              plVar6 = local_100;
              param_2 = local_108;
              if (lVar3 != 0) {
                uStack_e0 = 0;
                local_e8 = FUN_1413c1640;
                if (fVar14 <= 0.01) {
                  fVar14 = 0.01;
                }
                uVar4 = AActor::GetWorldTimerManager(plVar2);
                plVar5 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar5 != (longlong *)0x0) {
                  *plVar5 = (longlong)&PTR_FUN_143f77b88;
                  FWeakObjectPtr::operator=(plVar5 + 1,plVar2);
                  uVar10 = (undefined4)local_e8;
                  uVar11 = local_e8._4_4_;
                  uVar12 = uStack_e0;
                  uVar13 = uStack_dc;
                  goto LAB_140b09edc;
                }
                goto LAB_140b09ef3;
              }
            }
          }
        }
      }
      plVar9 = plVar9 + 2;
      plVar7 = plVar7 + 2;
    } while (plVar9 != plVar6);
  }
  return;
}



// FUNCTION 140b0a040 FUN_140b0a040 body=68 status=ok
// SIG undefined FUN_140b0a040(void)

void FUN_140b0a040(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined1 *)FUN_140cb7100(lVar1);
      lVar1 = FUN_141317410(param_1,*puVar2);
      param_1[0xcc] = lVar1;
    }
  }
  return;
}



// FUNCTION 140b0a090 FUN_140b0a090 body=218 status=ok
// SIG undefined FUN_140b0a090(void)

void FUN_140b0a090(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = *(longlong *)(lVar4 + 400);
  }
  if (lVar4 != 0) {
    plVar5 = (longlong *)UListView::OnItemSelectionChanged();
    puVar8 = (undefined8 *)*plVar5;
    puVar1 = puVar8 + (int)plVar5[1];
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      uVar2 = *puVar8;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = UPlayer::GetPlayerController(uVar2,uVar6);
      if (lVar4 != 0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140d04be0(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b0a170 FUN_140b0a170 body=83 status=ok
// SIG undefined FUN_140b0a170(void)

void FUN_140b0a170(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_1413f82e0();
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
      FUN_140c577f0(param_3,0);
    }
  }
  return;
}



// FUNCTION 140b0a1d0 FUN_140b0a1d0 body=157 status=ok
// SIG undefined FUN_140b0a1d0(void)

void FUN_140b0a1d0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((char)param_2[2] != '\0') {
    return;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b0a228;
  }
  lVar3 = 0;
LAB_140b0a228:
  if (*(char *)((longlong)param_1 + 0x4fb) == '\x04') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    (**(code **)(*param_1 + 0x780))(param_1);
    if (*(char *)((longlong)param_1 + 0x4fb) == '\x04') {
      param_1[0xdf] = lVar3;
      (**(code **)(*param_1 + 0x730))(param_1,1);
    }
  }
  return;
}



// FUNCTION 140b0a270 FUN_140b0a270 body=403 status=ok
// SIG undefined FUN_140b0a270(void)

void FUN_140b0a270(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_18 [2];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*param_2 + 0x768))(param_2);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  plVar5 = param_2;
  if (!bVar1) {
    plVar5 = (longlong *)0x0;
  }
  lVar3 = FUN_140afe850(param_1,plVar5);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x18) < 1) {
    return;
  }
  lVar4 = FUN_14145f370();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0xfa8))(param_2);
  if (lVar4 == 0) {
    return;
  }
  plVar5 = (longlong *)FUN_142f02280(lVar4,*(undefined8 *)(param_1 + 0x560));
  if (plVar5 != (longlong *)0x0) {
    lVar4 = FUN_1413412c0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b0a39d;
  }
  plVar5 = (longlong *)0x0;
LAB_140b0a39d:
  FWeakObjectPtr::operator=(lVar3 + 8,plVar5);
  cVar2 = FUN_14044af00(lVar3 + 8,0);
  if (cVar2 != '\0') {
    FUN_140afcba0(param_1,local_18);
    uVar6 = FWeakObjectPtr::Get(lVar3 + 8);
    FUN_140f44400(uVar6,lVar3 + 0x10,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b0a410 FUN_140b0a410 body=829 status=ok
// SIG undefined FUN_140b0a410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b0a410(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  longlong *local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  code *local_b8;
  undefined1 local_b0 [8];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  ulonglong local_58;
  
  if (param_2 != (longlong *)0x0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    FUN_142d49d00(param_2,*(undefined8 *)(param_4 + 0x20));
    if (param_6 != (longlong *)0x0) {
      (**(code **)(*param_6 + 0x288))(param_6);
    }
    local_108 = (longlong *)0x0;
    local_100 = 0;
    FWeakObjectPtr::operator=(&local_f0,param_2);
    FWeakObjectPtr::operator=(&local_e8,param_6);
    FWeakObjectPtr::operator=(&local_f8,param_1);
    local_d0 = local_f8;
    local_cc = local_f4;
    local_c8 = local_f0;
    local_c4 = local_ec;
    local_c0._0_4_ = local_e8;
    local_c0._4_4_ = local_e4;
    local_d8 = param_1;
    local_b8 = (code *)param_3;
    FUN_140aecad0(local_b0,param_4);
    local_68 = param_5;
    plVar2 = (longlong *)FMemory::Realloc(0,0x90,0);
    if (plVar2 == (longlong *)0x0) {
      if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
         ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
    }
    else {
      *plVar2 = (longlong)&PTR_GetPoolName_14428b818;
      plVar2[1] = local_d8;
      *(undefined4 *)(plVar2 + 2) = local_d0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_cc;
      *(undefined4 *)(plVar2 + 3) = local_c8;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = local_c4;
      *(undefined4 *)(plVar2 + 4) = (undefined4)local_c0;
      *(undefined4 *)((longlong)plVar2 + 0x24) = local_c0._4_4_;
      plVar2[5] = (longlong)local_b8;
      FUN_140aecad0(plVar2 + 6,local_b0);
      *(undefined4 *)(plVar2 + 0xf) = local_68;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[0x11] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_14428b860;
      FUN_140af4a70(plVar2,&local_108);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      FMemory::Free();
    }
    local_e0 = 0;
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x98);
    local_d8 = 0;
    local_d0 = 0;
    if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 0x30))(local_108,&local_d8);
    }
    FWeakObjectPtr::operator=(&local_c8,0);
    local_110 = 0xbf800000;
    local_118 = 0;
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,&local_e0,&local_d8,uVar1);
    if (local_78 != 0) {
      plVar2 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar2 = local_88;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (local_100 != 0) {
      if (local_108 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_108 + 0x28))(local_108,0);
      if (local_108 != (longlong *)0x0) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
      local_100 = 0;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  return;
}



// FUNCTION 140b0a750 FUN_140b0a750 body=213 status=ok
// SIG undefined FUN_140b0a750(void)

void FUN_140b0a750(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  ulonglong local_res18 [2];
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1[0xa3] != 0) {
    puVar3 = local_res10;
    local_res18[0] = 0;
    local_res10[0] = 0;
    local_res8[0] = 0;
    (**(code **)(*param_1 + 0x760))
              (param_1,*(undefined1 *)((longlong)param_1 + 0x4fb),local_res18,local_res8,puVar3);
    uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
    if (local_res18[0] != 0) {
      iVar2 = FUN_14062c730(param_1[0xa3]);
      if (iVar2 == 1) {
        FUN_1423b60f0(param_1[0xa3],local_res18[0],local_res8[0],1,CONCAT44(uVar4,local_res10[0]),
                      0x3f800000);
      }
      plVar1 = (longlong *)param_1[0xa3];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x290))(plVar1,1,0);
        (**(code **)(*(longlong *)param_1[0xa3] + 0x358))((longlong *)param_1[0xa3],1);
      }
    }
  }
  return;
}



// FUNCTION 140b0a830 FUN_140b0a830 body=139 status=ok
// SIG undefined FUN_140b0a830(void)

void FUN_140b0a830(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    cVar1 = FUN_14059ee90(param_1 + 0x610);
    if ((cVar1 == '\0') &&
       (lVar2 = FUN_1405ab470(param_1,0,1,*(undefined8 *)(param_1 + 0x550)), lVar2 != 0)) {
      lVar2 = FUN_1405a3150(lVar2,local_28,*(undefined8 *)(param_1 + 0x5e0),0);
      FUN_1405913a0(param_1 + 0x610,lVar2);
      *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(lVar2 + 0x10);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 140b0a8c0 FUN_140b0a8c0 body=100 status=ok
// SIG undefined FUN_140b0a8c0(void)

void FUN_140b0a8c0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((char)param_1[0xad] != '\0') {
    uVar1 = AArchVisCharacter::StaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x712) != '\0')) && ((*(byte *)(lVar2 + 0xba) & 4) != 0)
       ) {
      thunk_FUN_142f3ce80(lVar2,0);
    }
  }
  FUN_140af0830(param_1,param_2);
  return;
}



// FUNCTION 140b0a930 FUN_140b0a930 body=331 status=ok
// SIG undefined FUN_140b0a930(void)

void FUN_140b0a930(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  FUN_140b0c6d0();
  iVar1 = *(int *)(param_1 + 0x5c0);
  if (iVar1 != 0) {
    iVar7 = 0;
    cVar3 = FUN_14058c1e0(*(undefined8 *)(param_1 + 0x5b8),param_2);
    bVar8 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = FUN_14058c1e0((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x5b8),param_2);
      } while (bVar8 == (cVar3 == '\0'));
      iVar6 = iVar2 - iVar4;
      if (bVar8 == false) {
        if (iVar6 != 0) {
          lVar5 = (longlong)iVar4 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x5b8);
          do {
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar5);
            lVar5 = lVar5 + 0x20;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar7 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x5b8)),
                     (void *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x5b8)),
                     (longlong)iVar6 << 5);
        }
        iVar7 = iVar7 + iVar6;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x5c0) = iVar7;
  }
  if (*(int *)(param_1 + 0x5c0) == 0) {
    FUN_140af4400(param_1);
  }
  FUN_140b12730(param_1);
  return;
}



// FUNCTION 140b0aa80 FUN_140b0aa80 body=409 status=ok
// SIG undefined FUN_140b0aa80(void)

void FUN_140b0aa80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined1 local_res18 [16];
  
  plVar4 = (longlong *)*param_2;
  local_res10 = param_2;
  for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x578);
  lVar2 = (longlong)*(int *)(param_1 + 0x580) * 0x40 + lVar8;
  for (; lVar8 != lVar2; lVar8 = lVar8 + 0x40) {
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
    }
    plVar4 = (longlong *)((longlong)iVar6 * 0x10 + *param_2);
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar9 = *(longlong *)(lVar8 + 0x30);
    lVar1 = lVar9 + (longlong)*(int *)(lVar8 + 0x38) * 0x48;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x48) {
      lVar7 = *(longlong *)(lVar9 + 0x38);
      lVar5 = (longlong)*(int *)(lVar9 + 0x40) * 0x50 + lVar7;
      for (; lVar7 != lVar5; lVar7 = lVar7 + 0x50) {
        FUN_140afe8f0(param_1,lVar7,local_res8,local_res18);
        iVar6 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar6 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar6);
        }
        puVar3 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar4);
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 1) = 0;
        *puVar3 = *(undefined8 *)(lVar7 + 0x40);
        *(undefined1 *)(puVar3 + 1) = local_res8[0];
        *(undefined1 *)((longlong)puVar3 + 9) = local_res18[0];
      }
      param_2 = local_res10;
    }
  }
  return;
}



// FUNCTION 140b0ac20 FUN_140b0ac20 body=227 status=ok
// SIG undefined FUN_140b0ac20(void)

void FUN_140b0ac20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  
  FUN_142238430();
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  uVar4 = FUN_1429bed90();
  AActor::GetComponentsByClass(param_1,&local_18,uVar4);
  plVar1 = local_18 + local_10;
  for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar6 = *plVar7;
    if ((lVar6 != 0) &&
       (cVar3 = UActorComponent::ComponentHasTag(lVar6,*(undefined8 *)(param_1 + 0x4e8)),
       cVar3 != '\0')) {
      lVar5 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        lVar6 = 0;
      }
      *(longlong *)(param_1 + 0x4f8) = lVar6;
    }
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 140b0ad10 FUN_140b0ad10 body=532 status=ok
// SIG undefined FUN_140b0ad10(void)

void FUN_140b0ad10(longlong *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142238430();
  uVar5 = UUGBrightnessScreenUW::GetPrivateStaticClass();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  param_1[0xe8] = lVar6;
  uVar5 = FUN_142a07000();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  param_1[0xe7] = lVar6;
  uVar5 = AArchVisCharacter::StaticClass();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  param_1[0xe9] = lVar6;
  uVar5 = UBlindWidget::GetPrivateStaticClass();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  param_1[0xea] = lVar6;
  if (param_1[0xde] != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ALootableObject::OnUsedBy",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar6 = param_1[0xde];
    plVar11 = (longlong *)(lVar6 + 0x318);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_20);
    }
    piVar9 = (int *)*plVar11;
    iVar1 = *(int *)(lVar6 + 800);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_20)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140b0aef6;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 800);
    *(int *)(lVar6 + 800) = iVar1 + 1;
    if (*(int *)(lVar6 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
    *piVar9 = local_28;
    piVar9[1] = local_24;
    *(longlong *)(piVar9 + 2) = local_20;
LAB_140b0aef6:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
  }
  *(undefined4 *)(param_1 + 0xae) = 0x3dcccccd;
  return;
}



// FUNCTION 140b0af30 FUN_140b0af30 body=981 status=ok
// SIG undefined FUN_140b0af30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b0af30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_188 [2];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_160;
  undefined4 local_150;
  longlong local_148 [24];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FUN_142238430();
  plVar9 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_140ae9d40(param_1,local_148,0);
  plVar4 = *(longlong **)(param_1 + 0x538);
  iVar3 = *(int *)(param_1 + 0x540);
  plVar5 = plVar4 + (longlong)iVar3 * 0x11;
  if (plVar4 != plVar5) {
    local_188[0] = 0;
    do {
      if (*plVar4 != 0) {
        plVar7 = local_148;
        if (local_88 != (longlong *)0x0) {
          plVar7 = local_88;
        }
        plVar1 = plVar7 + (int)local_80;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          lVar6 = *plVar7;
          if ((lVar6 != 0) &&
             (plVar2 = (longlong *)FUN_142340170(lVar6,local_188), *plVar2 == *plVar4)) {
            plVar4[8] = lVar6;
            if (plVar4[9] != 0) {
              local_198 = 0;
              FUN_142399d60(plVar4[9],lVar6 + 0x210,0,0);
            }
            if (plVar4[0xc] != 0) {
              local_160 = 0x41200000;
              local_150 = 0;
              local_198 = 0;
              FUN_142399d60(plVar4[0xc],lVar6 + 0x210,0,0);
              lVar6 = plVar4[0xc];
              local_198 = 0;
              *(undefined8 *)(lVar6 + 0x710) = 0x41f0000041700000;
              *(undefined4 *)(lVar6 + 0x718) = local_160;
              local_178 = 0xc1a00000;
              local_170 = 0;
              FUN_1423809e0(plVar4[0xc],&local_178,0);
              (**(code **)(*(longlong *)plVar4[0xc] + 0x838))((longlong *)plVar4[0xc],0);
              (**(code **)(*(longlong *)plVar4[0xc] + 0x830))();
              FUN_14234b150(plVar4[0xc]);
            }
            break;
          }
        }
      }
      plVar4 = plVar4 + 0x11;
    } while (plVar4 != plVar5);
    iVar3 = *(int *)(param_1 + 0x540);
  }
  lVar6 = *(longlong *)(param_1 + 0x538);
  lVar8 = (longlong)iVar3 * 0x88 + lVar6;
  do {
    if (lVar6 == lVar8) {
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plVar4 = *(longlong **)(param_1 + 0x538);
    plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x540) * 0x11;
    plVar5 = plVar9;
    if (plVar4 != plVar7) {
      do {
        plVar5 = plVar4;
        if (*plVar4 == *(longlong *)(lVar6 + 0x18)) break;
        plVar4 = plVar4 + 0x11;
        plVar5 = plVar9;
      } while (plVar4 != plVar7);
    }
    *(longlong **)(lVar6 + 0x68) = plVar5;
    plVar4 = *(longlong **)(param_1 + 0x538);
    plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x540) * 0x11;
    plVar5 = plVar9;
    if (plVar4 != plVar7) {
      do {
        plVar5 = plVar4;
        if (*plVar4 == *(longlong *)(lVar6 + 0x20)) break;
        plVar4 = plVar4 + 0x11;
        plVar5 = plVar9;
      } while (plVar4 != plVar7);
    }
    *(longlong **)(lVar6 + 0x70) = plVar5;
    plVar4 = *(longlong **)(param_1 + 0x538);
    plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x540) * 0x11;
    plVar5 = plVar9;
    if (plVar4 != plVar7) {
      do {
        plVar5 = plVar4;
        if (*plVar4 == *(longlong *)(lVar6 + 0x28)) break;
        plVar4 = plVar4 + 0x11;
        plVar5 = plVar9;
      } while (plVar4 != plVar7);
    }
    *(longlong **)(lVar6 + 0x78) = plVar5;
    plVar4 = *(longlong **)(param_1 + 0x538);
    plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x540) * 0x11;
    plVar5 = plVar9;
    if (plVar4 != plVar7) {
      do {
        plVar5 = plVar4;
        if (*plVar4 == *(longlong *)(lVar6 + 0x30)) break;
        plVar4 = plVar4 + 0x11;
        plVar5 = plVar9;
      } while (plVar4 != plVar7);
    }
    *(longlong **)(lVar6 + 0x80) = plVar5;
    lVar6 = lVar6 + 0x88;
  } while( true );
}



// FUNCTION 140b0b310 FUN_140b0b310 body=2895 status=ok
// SIG undefined FUN_140b0b310(void)

void FUN_140b0b310(longlong *param_1)

{
  wchar_t wVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int *piVar14;
  int *piVar15;
  wchar_t *pwVar16;
  wint_t *pwVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  undefined8 local_res8;
  longlong local_res10;
  int local_48;
  int iStack_44;
  longlong local_40;
  code *local_38;
  ulonglong uStack_30;
  
  FUN_142238430();
  uVar8 = FUN_142a07000();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xaf] = lVar9;
  uVar8 = FUN_142e80f20();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xae] = lVar9;
  uVar8 = UUGHitTextureButton::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xb0] = lVar9;
  uVar8 = UUGHitTextureButton::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xb2] = lVar9;
  uVar8 = UUGButton::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xb1] = lVar9;
  uVar8 = UGNavigationHeaderItem::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xb3] = lVar9;
  uVar8 = FUN_1414a1520();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  param_1[0xb5] = lVar9;
  if (param_1[0xaf] != 0) {
    *(undefined1 *)(param_1[0xaf] + 0x878) = 0;
  }
  if (param_1[0xb3] != 0) {
    FUN_142398ec0(param_1[0xb3],0,1);
  }
  pwVar16 = (wchar_t *)0x0;
  if (param_1[0xae] != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ATravelStationObject::OnUsedBy",L"::");
    pwVar13 = pwVar16;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar13 = pwVar4;
    }
    FName::FName(&local_res10,pwVar13 + 2,1);
    lVar11 = local_res10;
    lVar9 = param_1[0xae];
    plVar19 = (longlong *)(lVar9 + 0x318);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = lVar11;
    local_res8 = 0;
    if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_40);
    }
    piVar14 = (int *)*plVar19;
    iVar2 = *(int *)(lVar9 + 800);
    for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_48) && (piVar15[1] == iStack_44)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar15 + 2) == local_40)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140b0b57e;
        break;
      }
    }
    iVar2 = *(int *)(lVar9 + 800);
    lVar11 = (longlong)iVar2;
    *(int *)(lVar9 + 800) = iVar2 + 1;
    if (*(int *)(lVar9 + 0x324) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar2);
    }
    lVar9 = *plVar19;
    *(int *)(lVar9 + lVar11 * 0x10) = local_48;
    *(int *)(lVar9 + 4 + lVar11 * 0x10) = iStack_44;
    *(longlong *)(lVar9 + 8 + lVar11 * 0x10) = local_40;
LAB_140b0b57e:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ATravelStationObject::OnUsedSecondaryBy",L"::");
    pwVar13 = pwVar16;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar13 = pwVar4;
    }
    FName::FName(&local_res10,pwVar13 + 2,1);
    lVar11 = local_res10;
    lVar9 = param_1[0xae];
    plVar19 = (longlong *)(lVar9 + 0x348);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = lVar11;
    local_res8 = 0;
    if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_40);
    }
    piVar14 = (int *)*plVar19;
    iVar2 = *(int *)(lVar9 + 0x350);
    for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_48) && (piVar15[1] == iStack_44)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar15 + 2) == local_40)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140b0b6cf;
        break;
      }
    }
    iVar2 = *(int *)(lVar9 + 0x350);
    lVar11 = (longlong)iVar2;
    *(int *)(lVar9 + 0x350) = iVar2 + 1;
    if (*(int *)(lVar9 + 0x354) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar2);
    }
    lVar9 = *plVar19;
    *(int *)(lVar9 + lVar11 * 0x10) = local_48;
    *(int *)(lVar9 + 4 + lVar11 * 0x10) = iStack_44;
    *(longlong *)(lVar9 + 8 + lVar11 * 0x10) = local_40;
LAB_140b0b6cf:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
  }
  uVar8 = AArchVisCharacter::StaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  if (lVar9 != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTravelStationActivated",L"::");
    pwVar13 = pwVar16;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar13 = pwVar4;
    }
    FName::FName(&local_res10,pwVar13 + 2,1);
    lVar11 = local_res10;
    plVar19 = (longlong *)(lVar9 + 0x738);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = lVar11;
    local_res8 = 0;
    if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_40);
    }
    piVar14 = (int *)*plVar19;
    iVar2 = *(int *)(lVar9 + 0x740);
    for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_48) && (piVar15[1] == iStack_44)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar15 + 2) == local_40)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140b0b849;
        break;
      }
    }
    iVar2 = *(int *)(lVar9 + 0x740);
    lVar11 = (longlong)iVar2;
    *(int *)(lVar9 + 0x740) = iVar2 + 1;
    if (*(int *)(lVar9 + 0x744) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar2);
    }
    lVar9 = *plVar19;
    *(int *)(lVar9 + lVar11 * 0x10) = local_48;
    *(int *)(lVar9 + 4 + lVar11 * 0x10) = iStack_44;
    *(longlong *)(lVar9 + 8 + lVar11 * 0x10) = local_40;
LAB_140b0b849:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
  }
  uVar8 = UUGButton::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar11 != 0) && (lVar9 != 0)) && (lVar11 = *(longlong *)(lVar11 + 0x140), lVar11 != 0)) {
    lVar12 = FUN_141425c60();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar11 = *(longlong *)(lVar11 + 0x4b8), lVar11 != 0)) {
      lVar12 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar11 = *(longlong *)(lVar11 + 0x5a0), lVar11 != 0)) {
        UObjectBaseUtility::GetPathName(*(undefined8 *)(lVar9 + 0x710),&local_38,0);
        cVar5 = FUN_142f42f70(lVar11,&local_38,0);
        if (cVar5 == '\0') {
          pwVar10 = _guard_xfg_dispatch_icall_nop
                              (L"&ATravelStationObject::OnFastTravelStationDiscovered",L"::");
          pwVar13 = pwVar16;
          while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar13 = pwVar4;
          }
          FName::FName(&local_res10,pwVar13 + 2,1);
          plVar19 = (longlong *)(lVar9 + 0x718);
          FWeakObjectPtr::operator=(&local_48,0);
          local_40 = 0;
          FWeakObjectPtr::operator=(&local_48,param_1);
          local_40 = local_res10;
          local_res8 = 0;
          if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
            UObject::FindFunction(lVar11,local_40);
          }
          piVar14 = (int *)*plVar19;
          iVar2 = *(int *)(lVar9 + 0x720);
          for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
            if (((*piVar15 == local_48) && (piVar15[1] == iStack_44)) ||
               ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
                (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((bVar3) && (*(longlong *)(piVar15 + 2) == local_40)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (bVar3) {
              if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140b0ba95;
              break;
            }
          }
          iVar2 = *(int *)(lVar9 + 0x720);
          *(int *)(lVar9 + 0x720) = iVar2 + 1;
          if (*(int *)(lVar9 + 0x724) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar2);
          }
          piVar14 = (int *)((longlong)iVar2 * 0x10 + *plVar19);
          *piVar14 = local_48;
          piVar14[1] = iStack_44;
          *(longlong *)(piVar14 + 2) = local_40;
LAB_140b0ba95:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
        }
        if (local_38 != (code *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  if (((param_1[0xb2] != 0) && (param_1[2] != 0)) &&
     ((lVar9 = *(longlong *)(param_1[2] + 0x18), lVar9 == DAT_146868950 || (lVar9 == DAT_146868958))
     )) {
    *(undefined1 *)(param_1[0xb2] + 0x700) = 1;
  }
  if (param_1[0xb0] != 0) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140b0a8c0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ATravelStationObject::PlayerEnteredArea",L"::");
    pwVar13 = pwVar16;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar13 = pwVar4;
    }
    FName::FName(&local_res8,pwVar13 + 2,1);
    FUN_1407260e0(param_1[0xb0] + 0x710,param_1,&local_38,local_res8);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140b0a930;
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&ATravelStationObject::PlayerExitedArea",L"::");
    while (pwVar10 = pwVar13, pwVar10 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
      pwVar16 = pwVar10;
    }
    FName::FName(&local_res8,pwVar16 + 2,1);
    FUN_1407260e0(param_1[0xb0] + 0x720,param_1,&local_38,local_res8);
  }
  if ((longlong *)param_1[0xb2] == (longlong *)0x0) {
    if ((longlong *)param_1[0xb1] == (longlong *)0x0) {
      return;
    }
    lVar11 = (**(code **)(*(longlong *)param_1[0xb1] + 0x8e8))();
    lVar9 = param_1[0xb1];
  }
  else {
    lVar11 = (**(code **)(*(longlong *)param_1[0xb2] + 0x8e8))();
    lVar9 = param_1[0xb2];
  }
  if (lVar11 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  UObjectBaseUtility::GetPathName(lVar11,&local_48,0);
  pwVar16 = 
  L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Watership_EdenMystery.LTS_Ixora2_Watership_EdenMystery"
  ;
  puVar18 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar18 = (undefined2 *)CONCAT44(iStack_44,local_48);
  }
  do {
    wVar1 = *(wchar_t *)((longlong)pwVar16 + (longlong)(puVar18 + -0xa213a7a8));
    if ((wVar1 == L'\0') && (*pwVar16 == L'\0')) goto LAB_140b0be0e;
    if (wVar1 != *pwVar16) {
      wVar6 = towlower(wVar1);
      wVar7 = towlower(*pwVar16);
      if (wVar6 != wVar7) break;
    }
    pwVar16 = pwVar16 + 1;
  } while( true );
  if (wVar6 != wVar7) {
    pwVar16 = 
    L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Desolate_NekroMystery.LTS_Ixora2_Desolate_NekroMystery"
    ;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar18 = (undefined2 *)CONCAT44(iStack_44,local_48);
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar16 + (longlong)(puVar18 + -0xa213a820));
      if ((wVar1 == L'\0') && (*pwVar16 == L'\0')) break;
      if (wVar1 != *pwVar16) {
        wVar6 = towlower(wVar1);
        wVar7 = towlower(*pwVar16);
        if (wVar6 != wVar7) goto LAB_140b0bcf8;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
  goto LAB_140b0be0e;
LAB_140b0bcf8:
  if (wVar6 != wVar7) {
    pwVar16 = 
    L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Desert_PandoraMystery.LTS_Ixora2_Desert_PandoraMystery"
    ;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar18 = (undefined2 *)CONCAT44(iStack_44,local_48);
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar16 + (longlong)(puVar18 + -0xa213a898));
      if ((wVar1 == L'\0') && (*pwVar16 == L'\0')) break;
      if (wVar1 != *pwVar16) {
        wVar6 = towlower(wVar1);
        wVar7 = towlower(*pwVar16);
        if (wVar6 != wVar7) goto LAB_140b0bd57;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
  goto LAB_140b0be0e;
LAB_140b0bd57:
  if (wVar6 != wVar7) {
    pwVar16 = 
    L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Sacrifice_SacrificeBoss.LTS_Ixora2_Sacrifice_SacrificeBoss"
    ;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar18 = (undefined2 *)CONCAT44(iStack_44,local_48);
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar16 + (longlong)(puVar18 + -0xa213a968));
      if ((wVar1 == L'\0') && (*pwVar16 == L'\0')) break;
      if (wVar1 != *pwVar16) {
        wVar6 = towlower(wVar1);
        wVar7 = towlower(*pwVar16);
        if (wVar6 != wVar7) goto LAB_140b0bdb3;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
  goto LAB_140b0be0e;
LAB_140b0be03:
  if (wVar6 != wVar7) goto LAB_140b0be32;
  goto LAB_140b0be0e;
LAB_140b0bdb3:
  if (wVar6 != wVar7) {
    pwVar17 = &DAT_1442753d0;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar18 = (undefined2 *)CONCAT44(iStack_44,local_48);
    }
    do {
      wVar6 = *(wint_t *)((longlong)pwVar17 + (longlong)(puVar18 + -0xa213a9e8));
      if ((wVar6 == 0) && (*pwVar17 == 0)) break;
      if (wVar6 != *pwVar17) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar17);
        if (wVar6 != wVar7) goto LAB_140b0be03;
      }
      pwVar17 = pwVar17 + 1;
    } while( true );
  }
LAB_140b0be0e:
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar11 = FUN_142f429c0(uVar8);
  if (lVar11 != 0) {
    FUN_142f3e250(lVar11,lVar9);
  }
LAB_140b0be32:
  if (CONCAT44(iStack_44,local_48) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b0be60 FUN_140b0be60 body=428 status=ok
// SIG undefined FUN_140b0be60(void)

void FUN_140b0be60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  FUN_142238430();
  FUN_140ae9940(param_1,(longlong *)(param_1 + 0x568),0);
  plVar3 = *(longlong **)(param_1 + 0x578);
  iVar2 = *(int *)(param_1 + 0x580);
  if (plVar3 != plVar3 + (longlong)iVar2 * 8) {
    plVar13 = plVar3 + 6;
    do {
      plVar4 = (longlong *)*plVar13;
      lVar6 = plVar13[1];
      if (plVar4 != plVar4 + (longlong)(int)lVar6 * 9) {
        plVar12 = plVar4 + 7;
        do {
          lVar10 = *plVar12;
          iVar7 = (int)plVar12[1];
          lVar11 = (longlong)iVar7 * 0x50 + lVar10;
          if (lVar10 != lVar11) {
            do {
              plVar9 = *(longlong **)(param_1 + 0x568);
              plVar1 = plVar9 + *(int *)(param_1 + 0x570);
              for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
                lVar8 = *plVar9;
                if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x7a8) == *(longlong *)(lVar10 + 0x40)))
                goto LAB_140b0bf3c;
              }
              lVar8 = 0;
LAB_140b0bf3c:
              *(longlong *)(lVar10 + 0x48) = lVar8;
              if (lVar8 != 0) {
                *(undefined1 *)(lVar8 + 0x7b0) = 0;
                FUN_142398ec0(lVar8,0,CONCAT71((int7)((ulonglong)plVar1 >> 8),2));
              }
              lVar10 = lVar10 + 0x50;
            } while (lVar10 != lVar11);
            iVar7 = (int)plVar12[1];
          }
          if (((iVar7 != 0) && (*(longlong *)(*plVar12 + 0x48) != 0)) &&
             (lVar10 = *(longlong *)(*(longlong *)(*plVar12 + 0x48) + 400), lVar10 != 0)) {
            lVar11 = AArchVisCharacter::StaticClass();
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
              plVar12[-1] = lVar10;
              *(undefined1 *)(lVar10 + 0x7b0) = 0;
              FUN_142398ec0(lVar10,0,CONCAT71((int7)((ulonglong)(lVar11 + 0x88) >> 8),2));
            }
          }
          plVar1 = plVar12 + 2;
          plVar12 = plVar12 + 9;
        } while (plVar1 != plVar4 + (longlong)(int)lVar6 * 9);
      }
      plVar4 = plVar13 + 2;
      plVar13 = plVar13 + 8;
    } while (plVar4 != plVar3 + (longlong)iVar2 * 8);
  }
  return;
}



// FUNCTION 140b0c010 FUN_140b0c010 body=72 status=ok
// SIG undefined FUN_140b0c010(void)

void FUN_140b0c010(longlong param_1)

{
  longlong local_res8 [4];
  
  FUN_1422384a0();
  if (*(longlong *)(param_1 + 0x550) != 0) {
    UWorld::AddOnActorSpawnedHandler(*(longlong *)(param_1 + 0x550),local_res8);
    if (local_res8[0] != DAT_1468688b8) {
      (**(code **)(**(longlong **)(param_1 + 0x550) + 0x640))();
    }
  }
  return;
}



// FUNCTION 140b0c060 FUN_140b0c060 body=38 status=ok
// SIG undefined FUN_140b0c060(void)

void FUN_140b0c060(longlong param_1)

{
  FUN_1422384a0();
  if (*(char *)(param_1 + 0x629) != '\0') {
    *(undefined2 *)(param_1 + 0x629) = 0x100;
  }
  return;
}



// FUNCTION 140b0c090 FUN_140b0c090 body=607 status=ok
// SIG undefined FUN_140b0c090(void)

void FUN_140b0c090(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *local_a8;
  int local_a0;
  int local_9c;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60 [3];
  undefined1 local_48 [16];
  
  UObject::PostLoad();
  plVar9 = *(longlong **)(param_1 + 0x38);
  plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x40) * 0x21;
  if (plVar9 != plVar7) {
    plVar8 = plVar9 + 5;
    do {
      if (*plVar9 != 0) {
        FSoftObjectPath::ToString(plVar9,&local_a8);
        cVar3 = FString::EndsWith(&local_a8,&DAT_144275c64,1);
        if (cVar3 == '\0') {
          local_88 = (void *)0x0;
          local_80 = 3;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
          pvVar1 = local_88;
          FGenericPlatformString::Memcpy(local_88,&DAT_1442775b4,6);
          iVar2 = local_a0;
          if (((int)local_80 != 0) && (iVar6 = (int)local_80 + -1, iVar6 != 0)) {
            lVar5 = (longlong)local_a0;
            local_a0 = (uint)(local_a0 == 0) + local_a0 + iVar6;
            if (local_9c < local_a0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar2);
            }
            pvVar4 = (void *)((longlong)local_a8 + (lVar5 - (ulonglong)(iVar2 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar4,pvVar1,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar4) = 0;
          }
          if (pvVar1 != (void *)0x0) {
            FMemory::Free(pvVar1);
          }
        }
        pvVar1 = local_a8;
        pvVar4 = (void *)0x0;
        lVar5 = (longlong)local_a0;
        local_98 = (void *)0x0;
        local_90._0_4_ = local_a0;
        if (local_a0 == 0) {
          local_70 = local_a0;
          local_6c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_a0,0);
          pvVar4 = local_98;
          _guard_xfg_dispatch_icall_nop(local_98,pvVar1,lVar5 * 2);
          local_70 = (int)local_90;
          local_6c = local_90._4_4_;
        }
        local_68 = 0;
        local_60[0] = 0;
        local_60[1] = 0;
        local_98 = (void *)0x0;
        local_90 = 0;
        local_78 = pvVar4;
        FUN_1417978e0(&local_68,&local_78);
        local_60[2] = local_68;
        *(undefined4 *)(plVar8 + -2) = 0xffffffff;
        *(undefined4 *)((longlong)plVar8 + -0xc) = 0;
        FString::FString(local_48,local_60);
        FSoftObjectPath::operator=(plVar8,local_60 + 2);
        *(undefined4 *)(plVar8 + -1) = 0;
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free();
        }
      }
      plVar9 = plVar9 + 0x21;
      plVar8 = plVar8 + 0x21;
    } while (plVar9 != plVar7);
  }
  return;
}



// FUNCTION 140b0c2f0 FUN_140b0c2f0 body=43 status=ok
// SIG undefined FUN_140b0c2f0(void)

void FUN_140b0c2f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1423daa60();
  puVar1 = (undefined8 *)FUN_142340170(param_1,local_res8);
  *(undefined8 *)(param_1 + 0x7a8) = *puVar1;
  return;
}



// FUNCTION 140b0c320 FUN_140b0c320 body=43 status=ok
// SIG undefined FUN_140b0c320(void)

void FUN_140b0c320(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_142349f80();
  puVar1 = (undefined8 *)FUN_142340170(param_1,local_res8);
  *(undefined8 *)(param_1 + 0x7a8) = *puVar1;
  return;
}



// FUNCTION 140b0c350 FUN_140b0c350 body=248 status=ok
// SIG undefined FUN_140b0c350(void)

void FUN_140b0c350(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142239650();
  lVar2 = *(longlong *)(param_1 + 0x538);
  lVar3 = (longlong)*(int *)(param_1 + 0x540) * 0x88 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x88) {
    if (*(longlong *)(lVar2 + 0x48) == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar1 = USoundSourceBus::GetPrivateStaticClass();
      uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
      *(undefined8 *)(lVar2 + 0x48) = uVar1;
    }
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar1 = FUN_14290f330();
      uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
      *(undefined8 *)(lVar2 + 0x60) = uVar1;
    }
  }
  return;
}



// FUNCTION 140b0c450 FUN_140b0c450 body=638 status=ok
// SIG undefined FUN_140b0c450(void)

void FUN_140b0c450(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_res10 [2];
  
  if (*(char *)(param_1 + 0x551) == '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x558) + 0x18))(param_1 + 0x558,&local_res8);
    lVar6 = 0;
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      local_res10[0] = 0;
      cVar2 = FUN_142dedf80(param_1 + 0x480,param_1 + 0x588,local_res10);
      if (cVar2 != '\0') {
        lVar8 = lVar6;
        if (local_res8 != 0) {
          lVar3 = FUN_142f71d80();
          lVar4 = local_res10[0];
          for (lVar5 = local_res8; lVar8 = 0, lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
            if (lVar5 == lVar3) {
              if (local_res10[0] == 0) {
LAB_140b0c538:
                local_res10[1] = 0;
                uVar7 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
                lVar4 = NewObject<USaveGame>(param_1,uVar7,0,1,0,0,0);
              }
              else {
                lVar8 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) goto LAB_140b0c538;
              }
              (**(code **)(*(longlong *)(lVar4 + 0xa0) + 8))
                        ((longlong *)(lVar4 + 0xa0),param_1 + 0x558);
              *(undefined1 *)(lVar4 + 0xf0) = 1;
              lVar8 = lVar4;
              break;
            }
          }
        }
        FUN_142dee040(param_1 + 0x480,param_1 + 0x588,lVar8);
      }
    }
    if (*(longlong *)(param_1 + 0x5e8) != 0) {
      local_res10[0] = 0;
      cVar2 = FUN_142dedf80(param_1 + 0x480,param_1 + 0x5c0,local_res10);
      if (cVar2 != '\0') {
        if (local_res8 != 0) {
          lVar5 = FUN_142f71d80();
          lVar8 = local_res10[0];
          for (; local_res8 != 0; local_res8 = *(longlong *)(local_res8 + 0x30)) {
            if (local_res8 == lVar5) {
              if (local_res10[0] == 0) {
LAB_140b0c648:
                local_res10[1] = 0;
                uVar7 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
                lVar8 = NewObject<USaveGame>(param_1,uVar7,0,1,0,0,0);
              }
              else {
                lVar6 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) goto LAB_140b0c648;
              }
              (**(code **)(*(longlong *)(lVar8 + 0xa0) + 8))
                        ((longlong *)(lVar8 + 0xa0),param_1 + 0x558);
              *(undefined1 *)(lVar8 + 0xf0) = 3;
              lVar6 = lVar8;
              break;
            }
          }
        }
        FUN_142dee040(param_1 + 0x480,param_1 + 0x5c0,lVar6);
      }
    }
  }
  return;
}



// FUNCTION 140b0c6d0 FUN_140b0c6d0 body=320 status=ok
// SIG undefined FUN_140b0c6d0(void)

void FUN_140b0c6d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = *(int *)(param_1 + 0x5c0);
  if (iVar1 != 0) {
    iVar7 = 0;
    cVar3 = FUN_14044aea0(*(undefined8 *)(param_1 + 0x5b8),0);
    bVar8 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = FUN_14044aea0((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x5b8),0);
      } while (bVar8 == (cVar3 == '\0'));
      iVar6 = iVar2 - iVar4;
      if (bVar8 == false) {
        if (iVar6 != 0) {
          lVar5 = (longlong)iVar4 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x5b8);
          do {
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar5);
            lVar5 = lVar5 + 0x20;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar7 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x5b8)),
                     (void *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x5b8)),
                     (longlong)iVar6 << 5);
        }
        iVar7 = iVar7 + iVar6;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x5c0) = iVar7;
    if ((0 < iVar1 - iVar7) && (*(int *)(param_1 + 0x5c0) == 0)) {
      FUN_140af4400(param_1);
      FUN_140b12730(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140b0c810 FUN_140b0c810 body=638 status=ok
// SIG undefined FUN_140b0c810(void)

void FUN_140b0c810(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x603) != '\0') {
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x5b0);
  plVar1 = plVar3 + *(int *)(param_1 + 0x5b8);
  cVar2 = '\x03';
  if (plVar3 != plVar1) {
    do {
      if (*plVar3 != 0) {
        FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,1);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    cVar2 = *(char *)(param_1 + 0x128);
  }
  if (*(char *)(param_1 + 0x674) == '\0') {
    if (*(char *)(param_1 + 0x604) == '\0') {
      if (cVar2 == '\x03') {
        plVar3 = *(longlong **)(param_1 + 0x5d0);
        plVar1 = plVar3 + *(int *)(param_1 + 0x5d8);
        if (plVar3 != plVar1) {
          do {
            if (*plVar3 != 0) {
              FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,1);
            }
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
          if (*(char *)(param_1 + 0x128) != '\x03') goto LAB_140b0ca77;
        }
        plVar3 = *(longlong **)(param_1 + 0x5c0);
        plVar1 = plVar3 + *(int *)(param_1 + 0x5c8);
        for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
          if (*plVar3 != 0) {
            FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,0);
          }
        }
      }
    }
    else if (cVar2 == '\x03') {
      plVar3 = *(longlong **)(param_1 + 0x5c0);
      plVar1 = plVar3 + *(int *)(param_1 + 0x5c8);
      if (plVar3 != plVar1) {
        do {
          if (*plVar3 != 0) {
            FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,1);
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar1);
        if (*(char *)(param_1 + 0x128) != '\x03') goto LAB_140b0ca77;
      }
      plVar3 = *(longlong **)(param_1 + 0x5d0);
      plVar1 = plVar3 + *(int *)(param_1 + 0x5d8);
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 != 0) {
          FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,0);
        }
      }
    }
  }
  else if (cVar2 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x5c0);
    plVar1 = plVar3 + *(int *)(param_1 + 0x5c8);
    if (plVar3 != plVar1) {
      do {
        if (*plVar3 != 0) {
          FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,1);
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
      if (*(char *)(param_1 + 0x128) != '\x03') goto LAB_140b0ca77;
    }
    plVar3 = *(longlong **)(param_1 + 0x5d0);
    plVar1 = plVar3 + *(int *)(param_1 + 0x5d8);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 != 0) {
        FUN_142df30b0(*plVar3 + 0x480,DAT_1468688a0,1);
      }
    }
  }
LAB_140b0ca77:
  *(undefined1 *)(param_1 + 0x602) = 0;
  return;
}



// FUNCTION 140b0cab0 FUN_140b0cab0 body=105 status=ok
// SIG undefined FUN_140b0cab0(void)

void FUN_140b0cab0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 != '\0') {
    FUN_1413b3780();
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 != 0) {
      FUN_140af6740(param_1,param_2,param_3,0,*(undefined4 *)(param_1 + 0x34));
    }
  }
  return;
}



// FUNCTION 140b0cb20 FUN_140b0cb20 body=64 status=ok
// SIG undefined FUN_140b0cb20(void)

void FUN_140b0cb20(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x5b8);
  if (*(char *)(param_1 + 0x550) == '\x03') {
    lVar2 = FUN_140afafe0();
    if (lVar2 != 0) {
      FUN_140ae2830(lVar2,uVar1 ^ 0x80000000);
    }
  }
  return;
}



// FUNCTION 140b0cb60 FUN_140b0cb60 body=57 status=ok
// SIG undefined FUN_140b0cb60(void)

void FUN_140b0cb60(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5b8);
  if (*(char *)(param_1 + 0x550) == '\x03') {
    lVar2 = FUN_140afafe0();
    if (lVar2 != 0) {
      FUN_140ae2830(lVar2,uVar1);
    }
  }
  return;
}



// FUNCTION 140b0cba0 FUN_140b0cba0 body=1075 status=ok
// SIG undefined FUN_140b0cba0(void)

void FUN_140b0cba0(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [96];
  
  (**(code **)(*param_1 + 0x780))();
  if ((char)param_1[0xb7] == '\0') {
    lVar15 = param_1[0x2d];
    local_a4 = DAT_1468b5da8;
    local_ac = DAT_1468b5da0;
    if (lVar15 != 0) {
      local_88 = *(float *)(lVar15 + 0x210);
      fStack_84 = *(float *)(lVar15 + 0x214);
      fStack_80 = *(float *)(lVar15 + 0x218);
      fStack_7c = *(float *)(lVar15 + 0x21c);
      auVar17._4_4_ = -(uint)(*(float *)(lVar15 + 0x254) != fStack_84);
      auVar17._0_4_ = -(uint)(*(float *)(lVar15 + 0x250) != local_88);
      auVar17._8_4_ = -(uint)(*(float *)(lVar15 + 600) != fStack_80);
      auVar17._12_4_ = -(uint)(*(float *)(lVar15 + 0x25c) != fStack_7c);
      iVar14 = movmskps(*(undefined4 *)(param_2 + 8),auVar17);
      if (iVar14 != 0) {
        *(float *)(lVar15 + 0x250) = local_88;
        *(float *)(lVar15 + 0x254) = fStack_84;
        *(float *)(lVar15 + 600) = fStack_80;
        *(float *)(lVar15 + 0x25c) = fStack_7c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_88,local_a0);
        *(undefined8 *)(lVar15 + 0x260) = *puVar7;
        *(undefined4 *)(lVar15 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      local_a4 = *(undefined4 *)(lVar15 + 0x268);
      local_ac = *(undefined8 *)(lVar15 + 0x260);
    }
    FRotator::Quaternion(&local_ac,local_78);
    fVar16 = (float)FGenericPlatformMath::Atan2();
    pfVar10 = (float *)param_1[0xaf];
    pfVar1 = pfVar10 + (longlong)(int)param_1[0xb0] * 6;
    while( true ) {
      if (pfVar10 == pfVar1) {
        return;
      }
      fVar18 = *pfVar10 - fVar16 * 57.295776;
      fVar19 = (float)(int)(fVar18 * 0.0027777778) * 360.0;
      if (ABS(fVar18) < ABS(fVar19)) {
        fVar19 = fVar18;
      }
      fVar18 = fVar18 - fVar19;
      if (fVar18 < 0.0) {
        fVar18 = fVar18 + 360.0;
      }
      if (180.0 < fVar18) {
        fVar18 = fVar18 - 360.0;
      }
      if (ABS(fVar18) < pfVar10[1] || ABS(fVar18) == pfVar10[1]) break;
      pfVar10 = pfVar10 + 6;
    }
    fVar16 = pfVar10[4];
    if (0 < (int)fVar16) {
      iVar14 = rand();
      iVar4 = (int)((float)iVar14 * 3.051851e-05 * (float)(int)fVar16);
      iVar14 = (int)fVar16 + -1;
      if (iVar4 <= (int)fVar16 + -1) {
        iVar14 = iVar4;
      }
      plVar2 = (longlong *)(*(longlong *)(pfVar10 + 2) + (longlong)iVar14 * 0x10);
      lVar15 = plVar2[1];
      param_1[0xeb] = *plVar2;
      param_1[0xec] = lVar15;
      return;
    }
    param_1[0xeb] = 0;
    param_1[0xec] = 0;
    return;
  }
  cVar12 = -1;
  iVar14 = 0;
  if (0 < (int)param_1[0xbd]) {
    lVar15 = 0;
    iVar4 = -1;
    do {
      iVar3 = *(int *)(lVar15 + 8 + param_1[0xbc]);
      iVar13 = iVar14;
      if (iVar3 != 0) {
        plVar9 = *(longlong **)(lVar15 + param_1[0xbc]);
        plVar2 = plVar9 + iVar3;
        for (; iVar13 = iVar4, plVar9 != plVar2; plVar9 = plVar9 + 1) {
          if (*plVar9 != 0) {
            lVar5 = FUN_142e0d0b0();
            lVar11 = *plVar9;
            for (lVar8 = lVar11; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
              if (lVar8 == lVar5) goto LAB_140b0cc48;
            }
          }
          lVar11 = 0;
LAB_140b0cc48:
          if (param_1[0xe1] != 0) {
            lVar6 = FUN_142e0d0b0();
            lVar8 = param_1[0xe1];
            for (lVar5 = lVar8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
              if (lVar5 == lVar6) goto LAB_140b0cc76;
            }
          }
          lVar8 = 0;
LAB_140b0cc76:
          if (lVar11 == lVar8) {
            cVar12 = (char)iVar14;
            goto LAB_140b0ccad;
          }
        }
      }
      cVar12 = (char)iVar13;
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 0x20;
      iVar4 = iVar13;
    } while (iVar14 < (int)param_1[0xbd]);
  }
LAB_140b0ccad:
  if (((char)param_1[0x25] == '\x03') && ((char)param_1[0xed] != cVar12)) {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(char *)(param_1 + 0xed) = cVar12;
  }
  return;
}



// FUNCTION 140b0cfe0 FUN_140b0cfe0 body=330 status=ok
// SIG undefined FUN_140b0cfe0(void)

void FUN_140b0cfe0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (param_2 == '\0') {
    iVar2 = *(int *)(param_1 + 0x5b0);
    if (0 < iVar2) {
      iVar5 = rand();
      iVar6 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar2);
      iVar5 = iVar2 + -1;
      if (iVar6 <= iVar2 + -1) {
        iVar5 = iVar6;
      }
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x5a8) + (longlong)iVar5 * 0x10);
      uVar3 = puVar1[1];
      *(undefined8 *)(param_1 + 0x758) = *puVar1;
      *(undefined8 *)(param_1 + 0x760) = uVar3;
      return;
    }
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x598);
    puVar1 = puVar7 + (longlong)*(int *)(param_1 + 0x5a0) * 3;
    for (; puVar7 != puVar1; puVar7 = puVar7 + 3) {
      cVar4 = FUN_142c48f90(*puVar7,param_1,*(undefined8 *)(param_1 + 0x6f8));
      if (cVar4 != '\0') {
        uVar3 = puVar7[2];
        *(undefined8 *)(param_1 + 0x758) = puVar7[1];
        *(undefined8 *)(param_1 + 0x760) = uVar3;
        break;
      }
    }
    if (*(longlong *)(param_1 + 0x758) != 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x590);
    if (0 < iVar2) {
      iVar5 = rand();
      iVar6 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar2);
      iVar5 = iVar2 + -1;
      if (iVar6 <= iVar2 + -1) {
        iVar5 = iVar6;
      }
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x588) + (longlong)iVar5 * 0x10);
      uVar3 = puVar1[1];
      *(undefined8 *)(param_1 + 0x758) = *puVar1;
      *(undefined8 *)(param_1 + 0x760) = uVar3;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  return;
}



// FUNCTION 140b0d1a0 FUN_140b0d1a0 body=82 status=ok
// SIG undefined FUN_140b0d1a0(void)

void FUN_140b0d1a0(longlong *param_1,longlong param_2,char param_3)

{
  if ((param_2 != param_1[0xe6]) || (param_3 != (char)param_1[0xe5])) {
    (**(code **)(*param_1 + 0x600))();
    param_1[0xe6] = param_2;
    *(char *)(param_1 + 0xe5) = param_3;
  }
  return;
}



// FUNCTION 140b0d200 FUN_140b0d200 body=87 status=ok
// SIG undefined FUN_140b0d200(void)

void FUN_140b0d200(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (0 < iVar1) {
    do {
      (**(code **)(*param_1 + 0x568))(param_1,iVar2,param_2);
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    } while (iVar2 < iVar1);
  }
  return;
}



// FUNCTION 140b0d260 FUN_140b0d260 body=165 status=ok
// SIG undefined FUN_140b0d260(void)

void FUN_140b0d260(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(longlong *)(param_1 + 0x660) = param_2;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    uStack_10 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_140b08400;
    puVar1 = (undefined8 *)operator_new(0x30,&local_28);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(puVar1 + 1,param_1);
      *(undefined4 *)(puVar1 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_18._4_4_;
      *(undefined4 *)(puVar1 + 3) = uStack_10;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_c;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[5] = uVar2;
      *puVar1 = &PTR_FUN_143f77bd0;
    }
    FUN_141292470(*(undefined8 *)(param_1 + 0x660),&local_28);
  }
  return;
}



// FUNCTION 140b0d310 FUN_140b0d310 body=277 status=ok
// SIG undefined FUN_140b0d310(void)

void FUN_140b0d310(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = *(undefined8 **)(param_1 + 0x568);
  if (param_2 == puVar1) {
    return;
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar8 = puVar1[1];
    uVar7 = puVar1[8];
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    uVar6 = param_2[1];
    uVar9 = param_2[8];
  }
  *(undefined8 **)(param_1 + 0x568) = param_2;
  if ((param_2 == (undefined8 *)0x0) || (cVar2 = FUN_140ad80f0(param_1,*param_2), cVar2 == '\0')) {
    uVar5 = 0xcc;
  }
  else {
    uVar5 = **(undefined8 **)(param_1 + 0x568);
  }
  FUN_140ae2e10(param_1,uVar5);
  if ((*(longlong *)(param_1 + 0x568) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x568) + 8) == 0)) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_140ad5f70(param_1);
    if (lVar4 == 0) goto LAB_140b0d3f5;
    uVar3 = FUN_140e50ca0(lVar4 + 0x2950,*(undefined8 *)(*(longlong *)(param_1 + 0x568) + 8));
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x568) + 8);
  }
  FUN_1407fcc20(param_1 + 0x4f0,uVar3,uVar5);
LAB_140b0d3f5:
  FUN_1414bbe70(param_1,uVar6,uVar9,uVar8,uVar7);
  return;
}



// FUNCTION 140b0d430 FUN_140b0d430 body=611 status=ok
// SIG undefined FUN_140b0d430(void)

void FUN_140b0d430(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  iVar4 = *(int *)(param_1 + 0x554);
  if ((iVar4 < 0) || (*(int *)(param_1 + 0x580) <= iVar4)) {
    lVar6 = param_1 + 0x5d8;
  }
  else {
    lVar6 = (longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar1 = *(int *)(param_1 + 0x55c);
  if ((iVar1 < 0) || (*(int *)(lVar6 + 0x38) <= iVar1)) {
    lVar6 = *(longlong *)(lVar6 + 0x30);
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 0x48;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(lVar6 + 0x40))) {
    iVar5 = -1;
    if (*(char *)(param_1 + 0x550) == '\x02') {
      iVar5 = 0;
    }
    else if (*(char *)(param_1 + 0x550) == '\x03') {
      iVar5 = *(int *)(param_1 + 0x560);
    }
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x580) <= iVar4)) {
      lVar3 = param_1 + 0x5d8;
    }
    else {
      lVar3 = (longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 0x578);
    }
    if ((iVar1 < 0) || (*(int *)(lVar3 + 0x38) <= iVar1)) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 0x48;
    }
    if (((-1 < iVar5) && (iVar5 < *(int *)(lVar3 + 0x40))) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x38) + 0x48 + (longlong)iVar5 * 0x50),
       plVar2 != (longlong *)0x0)) {
      FUN_140ae2260(plVar2);
      (**(code **)(*plVar2 + 0x568))(plVar2,0,0);
    }
    *(int *)(param_1 + 0x560) = param_2;
    if (*(char *)(param_1 + 0x550) == '\x02') {
      iVar4 = 0;
    }
    else {
      iVar4 = -1;
      if (*(char *)(param_1 + 0x550) == '\x03') {
        iVar4 = param_2;
      }
    }
    iVar1 = *(int *)(param_1 + 0x554);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
      lVar3 = param_1 + 0x5d8;
    }
    else {
      lVar3 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
    }
    iVar1 = *(int *)(param_1 + 0x55c);
    if ((iVar1 < 0) || (*(int *)(lVar3 + 0x38) <= iVar1)) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 0x48;
    }
    if ((((-1 < iVar4) && (iVar4 < *(int *)(lVar3 + 0x40))) &&
        (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x38) + 0x48 + (longlong)iVar4 * 0x50),
        plVar2 != (longlong *)0x0)) && (*(longlong *)(param_1 + 0x5c0) != 0)) {
      (**(code **)(*plVar2 + 0x568))(plVar2,0);
    }
    FUN_140b129c0(param_1,3);
    lVar6 = (longlong)param_2 * 0x50 + *(longlong *)(lVar6 + 0x38);
    FUN_140afea80(param_1,lVar6,local_res10,local_res8);
    plVar2 = *(longlong **)(lVar6 + 0x38);
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar2[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar3 = plVar2[0x1f];
      }
    }
    FUN_140af3610(param_1 + 0x538,lVar6,lVar6 + 0x18,local_res10[0] == 0,local_res10[0],
                  local_res8[0],lVar3);
  }
  return;
}



// FUNCTION 140b0d6a0 FUN_140b0d6a0 body=240 status=ok
// SIG undefined FUN_140b0d6a0(void)

void FUN_140b0d6a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  iVar1 = *(int *)(param_1 + 0x554);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
    lVar3 = param_1 + 0x5d8;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  if ((-1 < param_2) && (param_2 < *(int *)(lVar3 + 0x38))) {
    plVar2 = (longlong *)FUN_140afb070();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x980))(plVar2,0);
    }
    *(int *)(param_1 + 0x55c) = param_2;
    plVar2 = (longlong *)FUN_140afb070(param_1);
    if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x5c0) != 0)) {
      (**(code **)(*plVar2 + 0x980))(plVar2);
    }
    FUN_140b129c0(param_1,2);
    lVar3 = *(longlong *)(lVar3 + 0x30) + (longlong)param_2 * 0x48;
    FUN_140afb6b0(param_1,lVar3,local_res8,local_res10);
    FUN_140af3530(param_1 + 0x520,lVar3,lVar3 + 0x18,local_res8[0],local_res10[0]);
  }
  return;
}



// FUNCTION 140b0d790 FUN_140b0d790 body=821 status=ok
// SIG undefined FUN_140b0d790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b0d790(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  longlong *local_118;
  int local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((param_2 == (longlong *)0x0) && (param_3 == (longlong *)0x0)) {
    return;
  }
  FWeakObjectPtr::operator=(&local_f0);
  FWeakObjectPtr::operator=(&local_e8,param_3);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  FWeakObjectPtr::operator=(&local_f8,param_1);
  local_108 = local_ec;
  local_104 = local_e8;
  local_100 = local_e4;
  plVar1 = (longlong *)FMemory::Realloc(0,0x40);
  if (plVar1 == (longlong *)0x0) {
    if (((local_110 != 0) && (local_118 != (longlong *)0x0)) &&
       ((**(code **)(*local_118 + 0x28))(local_118,0), local_118 != (longlong *)0x0)) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
  }
  else {
    *plVar1 = (longlong)&PTR_GetPoolName_14428af18;
    *(undefined4 *)(plVar1 + 1) = local_f8;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_f4;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_108;
    *(undefined4 *)(plVar1 + 2) = local_f0;
    *(undefined4 *)(plVar1 + 3) = local_104;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = local_100;
    plVar1[5] = param_5;
    plVar1[4] = param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[7] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_14428af60;
    FUN_140af4730(plVar1,&local_118);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  local_e0 = 0;
  if ((param_2 == (longlong *)0x0) || (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 == 0)
     ) {
    if ((param_3 == (longlong *)0x0) ||
       (lVar2 = (**(code **)(*param_3 + 0x148))(param_3), lVar2 == 0)) goto LAB_140b0da5f;
    lVar2 = *param_3;
  }
  else {
    lVar2 = *param_2;
    param_3 = param_2;
  }
  lVar2 = (**(code **)(lVar2 + 0x148))(param_3);
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  local_d0 = 0;
  local_d8 = 0;
  if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
    (**(code **)(*local_118 + 0x30))(local_118,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_120 = 0xbf800000;
  local_128 = 0;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar3,&local_e0,&local_d8,param_4);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
LAB_140b0da5f:
  if (local_110 != 0) {
    if (local_118 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_118 + 0x28))(local_118,0);
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
    local_110 = 0;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b0dad0 FUN_140b0dad0 body=804 status=ok
// SIG undefined FUN_140b0dad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b0dad0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  longlong *local_f8;
  int local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((param_2 == (longlong *)0x0) && (param_3 == (longlong *)0x0)) {
    return;
  }
  FWeakObjectPtr::operator=(&local_c8);
  FWeakObjectPtr::operator=(&local_d0,param_3);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  FWeakObjectPtr::operator=(&local_d8,param_1);
  local_e8 = local_cc;
  local_e4 = local_c8;
  local_e0 = local_c4;
  plVar1 = (longlong *)FMemory::Realloc(0,0x40);
  if (plVar1 == (longlong *)0x0) {
    if (((local_f0 != 0) && (local_f8 != (longlong *)0x0)) &&
       ((**(code **)(*local_f8 + 0x28))(local_f8,0), local_f8 != (longlong *)0x0)) {
      local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
    }
  }
  else {
    *plVar1 = (longlong)&PTR_GetPoolName_14428b4b8;
    plVar1[1] = param_1;
    *(undefined4 *)(plVar1 + 2) = local_d8;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_d4;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = local_e8;
    *(undefined4 *)(plVar1 + 3) = local_d0;
    *(undefined4 *)(plVar1 + 4) = local_e4;
    *(undefined4 *)((longlong)plVar1 + 0x24) = local_e0;
    plVar1[5] = param_6;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[7] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_14428b500;
    FUN_140af4900(plVar1,&local_f8);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  local_c0 = 0;
  if ((param_2 == (longlong *)0x0) || (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 == 0)
     ) {
    if ((param_3 == (longlong *)0x0) ||
       (lVar2 = (**(code **)(*param_3 + 0x148))(param_3), lVar2 == 0)) goto LAB_140b0dd96;
    lVar2 = *param_3;
  }
  else {
    lVar2 = *param_2;
    param_3 = param_2;
  }
  lVar2 = (**(code **)(lVar2 + 0x148))(param_3);
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  local_b0 = 0;
  local_b8 = 0;
  if ((local_f0 != 0) && (local_f8 != (longlong *)0x0)) {
    (**(code **)(*local_f8 + 0x30))(local_f8,&local_b8);
  }
  FWeakObjectPtr::operator=(local_a8,0);
  local_100 = 0xbf800000;
  local_108 = 0;
  local_a0 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar3,&local_c0,&local_b8,param_5);
  if (local_58 != 0) {
    plVar1 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar1 = local_68;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
LAB_140b0dd96:
  if (local_f0 != 0) {
    if (local_f8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_f8 + 0x28))(local_f8,0);
    if (local_f8 != (longlong *)0x0) {
      local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
    }
    local_f0 = 0;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b0de00 FUN_140b0de00 body=361 status=ok
// SIG undefined FUN_140b0de00(void)

undefined8 FUN_140b0de00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  uVar4 = 0;
  if (param_2 != (longlong *)0x0) {
    FUN_14301f8f0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2);
    uVar4 = 0;
    if (lVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
      FUN_142ff3000(lVar3,local_78);
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar4 = FUN_143019ed0(uVar4,local_78,1,0);
      plVar6 = (longlong *)param_1[199];
      plVar1 = plVar6 + (int)param_1[200];
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        lVar3 = *plVar6;
        if (lVar3 == 0) {
LAB_140b0deee:
          lVar3 = 0;
        }
        else {
          lVar5 = UFadeInOutViewportClient::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140b0deee;
        }
        FUN_140b0df70(lVar3,uVar4);
      }
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
    }
  }
  return uVar4;
}



// FUNCTION 140b0df70 FUN_140b0df70 body=331 status=ok
// SIG undefined FUN_140b0df70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b0df70(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x4f8) == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar2 = FUN_14301f8f0();
  local_48 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  lVar4 = param_2[0x2d];
  local_68 = *(undefined8 *)(param_1 + 0x4f0);
  local_40 = DAT_1468b5da0;
  local_38 = DAT_1468b5da8;
  local_34 = _DAT_1468b5d90;
  local_2c = DAT_1468b5d98;
  local_50 = 0;
  local_28 = 0x1000100;
  local_60 = 2;
  if (lVar4 != 0) {
    lVar3 = FUN_1429bed90();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b0e05d;
  }
  lVar4 = 0;
LAB_140b0e05d:
  FUN_142fe6850(lVar4,*(undefined8 *)(param_1 + 0x4f8),&local_68);
  (**(code **)(*param_2 + 0x310))(param_2,0);
  if (param_2[0x2d] != 0) {
    FUN_142398ec0(param_2[0x2d],1,2);
  }
  return;
}



// FUNCTION 140b0e0c0 FUN_140b0e0c0 body=45 status=ok
// SIG undefined FUN_140b0e0c0(void)

void FUN_140b0e0c0(longlong param_1,longlong *param_2)

{
  FString::operator=(param_1 + 0x7e8);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b0e0f0 FUN_140b0e0f0 body=63 status=ok
// SIG undefined FUN_140b0e0f0(void)

void FUN_140b0e0f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if ((((*(char *)(param_1 + 0x601) != '\0') && (*(char *)(param_1 + 0x128) == '\x03')) &&
      (*(char *)(param_1 + 0x603) == '\0')) && (*(char *)(param_1 + 0x604) != '\0')) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x630) = *param_2;
    *(undefined4 *)(param_1 + 0x638) = uVar1;
    FUN_140af3ee0();
    return;
  }
  return;
}



// FUNCTION 140b0e130 FUN_140b0e130 body=107 status=ok
// SIG undefined FUN_140b0e130(void)

void FUN_140b0e130(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x5c0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x5c8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 != 0) {
        FUN_142df30b0(*plVar2 + 0x480,DAT_1468688a0,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140b0e1a0 FUN_140b0e1a0 body=77 status=ok
// SIG undefined FUN_140b0e1a0(void)

void FUN_140b0e1a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if ((((*(char *)(param_1 + 0x601) != '\0') && (*(char *)(param_1 + 0x128) == '\x03')) &&
      (*(char *)(param_1 + 0x603) == '\0')) && (*(char *)(param_1 + 0x604) != '\0')) {
    puVar2 = (undefined8 *)FRotator::Quaternion(param_2,local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x650) = *puVar2;
    *(undefined8 *)(param_1 + 0x658) = uVar1;
  }
  return;
}



// FUNCTION 140b0e1f0 FUN_140b0e1f0 body=63 status=ok
// SIG undefined FUN_140b0e1f0(void)

void FUN_140b0e1f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if ((((*(char *)(param_1 + 0x601) != '\0') && (*(char *)(param_1 + 0x128) == '\x03')) &&
      (*(char *)(param_1 + 0x603) == '\0')) && (*(char *)(param_1 + 0x604) == '\0')) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x63c) = *param_2;
    *(undefined4 *)(param_1 + 0x644) = uVar1;
    FUN_140af3ee0();
    return;
  }
  return;
}



// FUNCTION 140b0e230 FUN_140b0e230 body=107 status=ok
// SIG undefined FUN_140b0e230(void)

void FUN_140b0e230(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x5d0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x5d8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 != 0) {
        FUN_142df30b0(*plVar2 + 0x480,DAT_1468688a0,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140b0e2a0 FUN_140b0e2a0 body=77 status=ok
// SIG undefined FUN_140b0e2a0(void)

void FUN_140b0e2a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if ((((*(char *)(param_1 + 0x601) != '\0') && (*(char *)(param_1 + 0x128) == '\x03')) &&
      (*(char *)(param_1 + 0x603) == '\0')) && (*(char *)(param_1 + 0x604) == '\0')) {
    puVar2 = (undefined8 *)FRotator::Quaternion(param_2,local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x660) = *puVar2;
    *(undefined8 *)(param_1 + 0x668) = uVar1;
  }
  return;
}



// FUNCTION 140b0e2f0 FUN_140b0e2f0 body=200 status=ok
// SIG undefined FUN_140b0e2f0(void)

void FUN_140b0e2f0(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_res8;
  longlong local_18 [2];
  
  FUN_142df30b0(param_1 + 0x90);
  local_res8 = param_1[3];
  FName::ToString(&local_res8,local_18);
  iVar2 = FUN_141592950(local_18,L"IO_Ali_MayaPlatform",1,0,0xffffffff);
  if (((iVar2 == -1) || (param_2 != DAT_1468688d8)) || (param_3 != '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    uVar3 = FUN_142a232e0();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x638))(plVar4,3);
    }
  }
  return;
}



// FUNCTION 140b0e3c0 FUN_140b0e3c0 body=107 status=ok
// SIG undefined FUN_140b0e3c0(void)

void FUN_140b0e3c0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x5b0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x5b8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 != 0) {
        FUN_142df30b0(*plVar2 + 0x480,DAT_1468688a0,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140b0e430 FUN_140b0e430 body=72 status=ok
// SIG undefined FUN_140b0e430(void)

void FUN_140b0e430(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x550);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x638))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_142fb3370(*(longlong *)(param_1 + 0x590),param_2);
  }
  return;
}



// FUNCTION 140b0e480 FUN_140b0e480 body=71 status=ok
// SIG undefined FUN_140b0e480(void)

void FUN_140b0e480(longlong param_1,longlong *param_2,undefined4 param_3)

{
  FString::operator=(param_1 + 0x7f8);
  *(undefined4 *)(param_1 + 0x808) = param_3;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b0e4d0 FUN_140b0e4d0 body=572 status=ok
// SIG undefined FUN_140b0e4d0(void)

void FUN_140b0e4d0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res20;
  int local_38;
  int local_34;
  longlong local_30;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    local_res8 = 0;
    local_res10 = param_2;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x5a0,&local_res8);
    if (param_2 != 0) {
      if (param_3 == '\0') {
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AWantedPoster::HandlePlayerActorDestroyed",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x290,param_1,local_res8);
        TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x5a0,&local_res10);
      }
      else {
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AWantedPoster::HandlePlayerActorDestroyed",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res20,pwVar3 + 2,1);
        plVar9 = (longlong *)(param_2 + 0x290);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = local_res20;
        local_res8 = 0;
        if ((local_res20 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_30);
        }
        piVar7 = (int *)*plVar9;
        iVar1 = *(int *)(param_2 + 0x298);
        for (piVar8 = piVar7; piVar8 != piVar7 + (longlong)iVar1 * 4; piVar8 = piVar8 + 4) {
          if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
              ((cVar4 = FWeakObjectPtr::IsValid(piVar8), cVar4 == '\0' &&
               (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
             (*(longlong *)(piVar8 + 2) == local_30)) {
            if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_140b0e66d;
            break;
          }
        }
        iVar1 = *(int *)(param_2 + 0x298);
        *(int *)(param_2 + 0x298) = iVar1 + 1;
        if (*(int *)(param_2 + 0x29c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
        }
        piVar7 = (int *)((longlong)iVar1 * 0x10 + *plVar9);
        *piVar7 = local_38;
        piVar7[1] = local_34;
        *(longlong *)(piVar7 + 2) = local_30;
LAB_140b0e66d:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x5a0,&local_res10);
      }
    }
    FUN_140b12950(param_1);
  }
  return;
}



// FUNCTION 140b0e710 FUN_140b0e710 body=73 status=ok
// SIG undefined FUN_140b0e710(void)

void FUN_140b0e710(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = AArchVisCharacter::StaticClass();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x290))(plVar2,param_2,0);
  }
  return;
}



// FUNCTION 140b0e760 FUN_140b0e760 body=32 status=ok
// SIG undefined FUN_140b0e760(void)

void FUN_140b0e760(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1413baaf0(param_1,*(undefined8 *)(param_2 + 0x488));
    return;
  }
  return;
}



// FUNCTION 140b0e780 FUN_140b0e780 body=1275 status=ok
// SIG undefined FUN_140b0e780(void)

void FUN_140b0e780(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 local_res10;
  ushort uVar18;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  
  pwVar5 = (wchar_t *)UObject::GetDefaultSubobjectByName(param_3,param_4);
  pwVar13 = (wchar_t *)0x0;
  if (pwVar5 != (wchar_t *)0x0) {
    lVar6 = UGNewsMenuItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140b0e7ef;
  }
  pwVar5 = pwVar13;
LAB_140b0e7ef:
  if ((param_2 != 0) && (pwVar5 != (wchar_t *)0x0)) {
    FUN_140b83e90(param_2,DAT_1468688c0);
    cVar1 = *(char *)(param_1 + 0x468);
    if (cVar1 != '\x02') {
      *(undefined1 *)(param_1 + 0x468) = 2;
      local_res10._0_2_ = CONCAT11(cVar1,2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x458,&local_res10);
    }
    FUN_142ce1dc0(*(undefined8 *)(param_1 + 0x480),param_2,0);
    puVar7 = (undefined8 *)FName::FName(&local_res10,"InHyperHoop",1);
    FUN_142cff080(*(undefined8 *)(param_1 + 0x480),1,*puVar7);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AHyperHoopVehicle::OnAttachFinished",L"::");
    pwVar9 = pwVar13;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
    ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
              (*(longlong *)(param_1 + 0x480) + 0x3c0,param_1,FUN_140b01a40,local_res10);
    fVar15 = *(float *)(param_1 + 0x46c);
    fVar14 = (float)FUN_1423b1370(pwVar5);
    if (fVar15 < fVar14) {
      local_38 = fVar15;
      if (param_5 == '\0') {
        fVar15 = (float)FUN_1423b1370(pwVar5);
        local_38 = fVar15 - *(float *)(param_1 + 0x46c);
      }
      local_58 = 0;
      local_50 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      lVar6 = local_58;
      uVar18 = 0;
      FGenericPlatformString::Convert<char,wchar_t>(local_58,0xb,"Decelerate",0xb,0x3f);
      uVar17 = 0;
      local_40 = (undefined4)local_50;
      local_3c = local_50._4_4_;
      local_48 = lVar6;
      if (param_5 == '\0') {
        uVar16 = 0;
      }
      else {
        uVar16 = FUN_1423b1370(pwVar5);
      }
      FUN_1423aee90(pwVar5,local_68,uVar16,1);
      FUN_14223c850(param_1,local_68,0,0,uVar18 & 0xff00);
      if (param_5 != '\0') {
        uVar17 = FUN_1423b1370(pwVar5);
      }
      FUN_1423b0180(pwVar5,&local_78,uVar17,1);
      if (param_5 != '\0') {
        fStack_74 = fStack_74 + 180.0;
      }
      local_88 = CONCAT44(fStack_74,local_78);
      local_80 = local_70;
      AActor::SetActorRotation(param_1,&local_88,0);
      FUN_140ec0410(*(undefined8 *)(param_1 + 0x478),pwVar5);
      FUN_140ebf640(*(undefined8 *)(param_1 + 0x478),param_5);
      lVar6 = *(longlong *)(param_1 + 0x478);
      iVar2 = *(int *)(lVar6 + 0x1b8);
      *(int *)(lVar6 + 0x1b8) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x1bc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar6 + 0x1b0,iVar2);
      }
      lVar6 = *(longlong *)(lVar6 + 0x1b0) + (longlong)iVar2 * 0x18;
      FString::FString(lVar6,&local_48);
      *(float *)(lVar6 + 0x10) = local_38;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AHyperHoopVehicle::OnReachedCallbackDistance",L"::")
      ;
      pwVar5 = pwVar13;
      while (pwVar8 = pwVar9, pwVar8 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
        pwVar5 = pwVar8;
      }
      FName::FName(&local_88,pwVar5 + 2,1);
      lVar10 = local_88;
      lVar6 = *(longlong *)(param_1 + 0x478);
      plVar12 = (longlong *)(lVar6 + 0x198);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = lVar10;
      local_res10 = 0;
      if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_58), lVar10 != 0)) {
        UObject::FindFunction(lVar10,local_50);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      iVar2 = *(int *)(lVar6 + 0x1a0);
      *(int *)(lVar6 + 0x1a0) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x1a4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar2);
      }
      puVar11 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar12);
      *puVar11 = (undefined4)local_58;
      puVar11[1] = local_58._4_4_;
      *(longlong *)(puVar11 + 2) = local_50;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AHyperHoopVehicle::OnReachedEndOfSpline",L"::");
      while (pwVar9 = pwVar5, pwVar9 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
        pwVar13 = pwVar9;
      }
      FName::FName(&local_88,pwVar13 + 2,1);
      lVar10 = local_88;
      lVar6 = *(longlong *)(param_1 + 0x478);
      plVar12 = (longlong *)(lVar6 + 0x178);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = lVar10;
      local_res10 = 0;
      if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_58), lVar10 != 0)) {
        UObject::FindFunction(lVar10,local_50);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      iVar2 = *(int *)(lVar6 + 0x180);
      *(int *)(lVar6 + 0x180) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x184) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar2);
      }
      puVar11 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar12);
      *puVar11 = (undefined4)local_58;
      puVar11[1] = local_58._4_4_;
      *(longlong *)(puVar11 + 2) = local_50;
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b0ec80 FUN_140b0ec80 body=509 status=ok
// SIG undefined FUN_140b0ec80(void)

void FUN_140b0ec80(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar4 = FUN_142235230();
  if (iVar4 != 3) {
    lVar1 = param_1[0xcd];
    if (param_2 != 0) {
      plVar2 = (longlong *)param_1[0xcf];
      for (plVar7 = plVar2; plVar7 != plVar2 + (longlong)(int)param_1[0xd0] * 3; plVar7 = plVar7 + 3
          ) {
        if (*plVar7 == param_2) {
          lVar8 = ((longlong)plVar7 - (longlong)plVar2) / 6 +
                  ((longlong)plVar7 - (longlong)plVar2 >> 0x3f);
          iVar4 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
          if ((-1 < iVar4) && (iVar4 < (int)param_1[0xd0])) {
            lVar8 = (longlong)iVar4;
            if (param_3 == 0) {
              if (plVar2[lVar8 * 3 + 2] != 0) {
                FUN_142227350(plVar2[lVar8 * 3 + 2],0,CONCAT71((int7)((ulonglong)plVar2 >> 8),1));
                *(undefined8 *)(lVar8 * 0x18 + 0x10 + param_1[0xcf]) = 0;
                *(undefined8 *)(lVar8 * 0x18 + 8 + param_1[0xcf]) = 0;
              }
              FUN_140af5670(param_1);
            }
            *(longlong *)(param_1[0xcf] + 8 + lVar8 * 0x18) = param_3;
          }
          goto LAB_140b0ecee;
        }
      }
      iVar4 = -1;
LAB_140b0ecee:
      if (param_3 != 0) {
        param_1[0xcd] = param_3;
        (**(code **)(*param_1 + 0x600))(param_1);
        uVar5 = FUN_140b0de00(param_1,param_3);
        if ((-1 < iVar4) && (iVar4 < (int)param_1[0xd0])) {
          lVar6 = (longlong)iVar4;
          lVar8 = param_1[0xcf];
          lVar3 = *(longlong *)(lVar8 + (lVar6 * 3 + 2) * 8);
          if (lVar3 != 0) {
            FUN_142227350(lVar3,0,1);
            *(undefined8 *)(lVar6 * 0x18 + 0x10 + param_1[0xcf]) = 0;
            lVar8 = param_1[0xcf];
          }
          *(undefined8 *)(lVar8 + (lVar6 * 3 + 2) * 8) = uVar5;
        }
      }
    }
    if (param_1[0xcd] != lVar1) {
      lVar8 = param_1[0xcf];
      lVar1 = lVar8 + (longlong)(int)param_1[0xd0] * 0x18;
      for (; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
        if ((*(longlong *)(lVar8 + 8) != param_1[0xcd]) &&
           (plVar2 = *(longlong **)(lVar8 + 0x10), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x310))(plVar2,1);
          lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x168);
          if (lVar3 != 0) {
            FUN_142398ec0(lVar3,0,2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b0ee80 FUN_140b0ee80 body=331 status=ok
// SIG undefined FUN_140b0ee80(void)

longlong FUN_140b0ee80(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar2 != 0) {
      lVar2 = param_2[2];
      lVar1 = param_2[0x23];
      uVar3 = FUN_140a63ba0(param_2);
      uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar2 = FUN_140aea740(uVar4,lVar2,param_3,lVar1,uVar3,0);
      if (lVar2 != 0) {
        FUN_140b30220(lVar2,param_2,param_1);
        uVar3 = FUN_140b2a6f0(param_2);
        FUN_140b30a70(lVar2,uVar3);
        fVar5 = (float)FUN_140b2a6a0(lVar2);
        fVar6 = (float)FUN_140b2a710(lVar2);
        if (0.0001 < fVar5) {
          fVar7 = (float)FUN_140b2a6a0(param_2);
          FUN_140b32570(lVar2,fVar7 / fVar5);
        }
        if (0.0001 < fVar6) {
          fVar5 = (float)FUN_140b2a710(param_2);
          FUN_140b32610(lVar2,fVar5 / fVar6);
        }
        UGameplayStatics::FinishSpawningActor(lVar2,param_3);
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140b0efd0 FUN_140b0efd0 body=778 status=ok
// SIG undefined FUN_140b0efd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b0efd0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_2a8 [32];
  undefined4 *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined1 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 local_240 [8];
  undefined1 local_238 [28];
  undefined1 local_21c [236];
  float local_130;
  undefined1 local_12c;
  undefined4 local_d8;
  undefined1 local_d4;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar5 = UCelLightData::GetPrivateStaticClass();
  lVar11 = *(longlong *)(param_1 + 0x48);
  lVar8 = lVar11;
  while( true ) {
    if (lVar8 == 0) {
      return;
    }
    if (lVar8 == lVar5) break;
    lVar8 = *(longlong *)(lVar8 + 0x30);
  }
  if (lVar11 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x128) == '\x03') {
    FUN_142d0a300(local_238);
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 1) {
      fVar12 = 0.0;
    }
    else {
      iVar2 = *param_3;
      if ((iVar2 < 1) || (iVar1 <= iVar2 + -1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        iVar1 = iVar2;
      }
      fVar12 = (float)FUN_142c98860((longlong)(iVar1 + -1) * 0x38 + *(longlong *)(param_1 + 0x28),0)
      ;
    }
    local_130 = (float)USphereReflectionCaptureComponent::GetInfluenceBoundingRadius(param_2);
    local_130 = local_130 * fVar12;
    local_12c = 1;
    if ((undefined4 *)(param_1 + 0x5c) != &local_d8) {
      local_d8 = *(undefined4 *)(param_1 + 0x5c);
      local_d4 = 1;
    }
    plVar6 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,&local_268);
    plVar6 = (longlong *)*plVar6;
    if (plVar6 == (longlong *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = plVar6[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar11 = plVar6[0x1f];
      }
    }
    FWeakObjectPtr::operator=(local_21c,lVar11);
    local_260 = *(undefined4 *)(param_1 + 0x50);
    local_288 = &local_260;
    local_258 = *(undefined4 *)(param_1 + 0x58);
    local_25c = *(undefined4 *)(param_1 + 0x54);
    local_278 = 0;
    local_280 = 0;
    local_250 = 0x3f800000;
    local_24c = 0x3f800000;
    local_248 = 0x3f800000;
    local_254 = 1;
    FUN_140a86fb0(param_2,*(undefined8 *)(param_1 + 0x48),0,local_238);
    FUN_1409c53c0(local_238);
    return;
  }
  if (lVar11 != 0) {
    plVar7 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar6 = *(longlong **)(param_1 + 0x48);
    for (plVar3 = plVar6; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar7) goto LAB_140b0f1d2;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140b0f1d2:
  lVar11 = plVar6[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar11 = plVar6[0x1f];
    if (lVar11 == 0) {
      return;
    }
  }
  lVar8 = UCelLightData::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (lVar8 = FUN_142bbbf70(lVar11), lVar8 != 0)) {
    local_268 = 0;
    plVar6 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,local_240);
    if (*plVar6 != 0) {
      lVar9 = FUN_142e49950();
      lVar8 = *plVar6;
      for (lVar5 = lVar8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar9) goto LAB_140b0f280;
      }
    }
    lVar8 = 0;
LAB_140b0f280:
    uVar10 = FUN_142bbbf70(lVar11);
    uVar10 = FUN_142d480a0(uVar10,*(undefined4 *)(param_1 + 0x5c),lVar8);
    uVar10 = FUN_142d3c360(uVar10,param_2);
    FUN_140b1a100(param_2,uVar10,local_268,1);
  }
  return;
}



// FUNCTION 140b0f2e0 FUN_140b0f2e0 body=255 status=ok
// SIG undefined FUN_140b0f2e0(void)

void FUN_140b0f2e0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  undefined1 local_res8;
  char cStackX_9;
  undefined6 uStackX_a;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar3 + 400) == 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
  }
  FUN_142880530(uVar5,param_1 + 0x91);
  param_1[0x91] = 0;
  lVar3 = param_1[0x8d];
  if ((char)lVar3 != '\x06') {
    *(undefined1 *)(param_1 + 0x8d) = 6;
    local_res8 = 6;
    cStackX_9 = (char)lVar3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x8b,&local_res8);
  }
  FUN_142ce8a30(param_1[0x90],0,0);
  pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AHyperHoopVehicle::OnDetachFinished",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
  ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
            (param_1[0x90] + 0x3e0,param_1,FUN_140b02650,
             CONCAT62(uStackX_a,CONCAT11(cStackX_9,local_res8)));
  return;
}



// FUNCTION 140b0f3e0 FUN_140b0f3e0 body=112 status=ok
// SIG undefined FUN_140b0f3e0(void)

void FUN_140b0f3e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_140ae47e0();
  if (param_1[0x9d] != 0) {
    uVar1 = FUN_142a07000();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      FUN_1423b5fe0(plVar2,param_1[0x9d],0);
      (**(code **)(*plVar2 + 0x358))(plVar2,1);
      AActor::SetActorTickEnabled(param_1,1);
    }
  }
  return;
}



// FUNCTION 140b0f450 FUN_140b0f450 body=513 status=ok
// SIG undefined FUN_140b0f450(void)

void FUN_140b0f450(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 0x571) = 0;
  lVar3 = FUN_140ad5f70();
  if (lVar3 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x538);
    lVar9 = (longlong)*(int *)(param_1 + 0x540) * 0x88 + lVar10;
    for (; lVar10 != lVar9; lVar10 = lVar10 + 0x88) {
      if (*(longlong *)(lVar10 + 8) != 0) {
        iVar1 = FUN_140e50ca0(lVar3 + 0x2950);
        iVar2 = FUN_140e4fee0(*(undefined8 *)(lVar10 + 8));
        if (iVar1 == iVar2) {
          *(undefined1 *)(lVar10 + 0x38) = 1;
          FUN_1414bbed0(param_1,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x40));
        }
      }
    }
  }
  plVar8 = (longlong *)0x0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x548) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x538);
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x540) * 0x11;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 0x11) {
      if (((*plVar4 == *(longlong *)(param_1 + 0x548)) && (plVar4[8] != 0)) && (plVar4[10] != 0))
      goto LAB_140b0f570;
    }
  }
  plVar4 = plVar8;
  if (*(int *)(param_1 + 0x540) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x538);
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x540) * 0x11;
    for (; (plVar4 = (longlong *)0x0, plVar6 != plVar7 &&
           ((plVar6[8] == 0 || (plVar4 = plVar6, plVar6[10] == 0)))); plVar6 = plVar6 + 0x11) {
    }
  }
LAB_140b0f570:
  FUN_140b0d310(param_1,plVar4);
  FUN_140ae47e0(param_1);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_14416caa8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = 0x40b08e90;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar3;
    *plVar4 = (longlong)&PTR_FUN_14416caf0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
    iVar1 = DAT_146533138;
    lVar3 = (longlong)DAT_146533138;
    plVar8 = (longlong *)*puVar5;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar5 = (undefined8 *)(lVar3 * 0x10 + DAT_146533130);
    *puVar5 = plVar4;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(longlong **)(param_1 + 0x4e8) = plVar8;
  return;
}



// FUNCTION 140b0f660 FUN_140b0f660 body=331 status=ok
// SIG undefined FUN_140b0f660(void)

void FUN_140b0f660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_140ae47e0();
  uVar6 = 0;
  if ((*(longlong *)(param_1 + 0x4d8) != 0) &&
     (lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x980) + 0x28))(),
     lVar2 != 0)) {
    uStack_10 = 0;
    local_18 = (code *)param_1;
    uVar3 = FUN_142f2a230();
    uStack_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    FUN_142ee1df0(lVar2,&local_18);
  }
  FUN_140b129c0(param_1,1);
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = FUN_140b08ed0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_14416caa8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_10._4_4_;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar2;
    *plVar4 = (longlong)&PTR_FUN_14416caf0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_146533138;
    lVar2 = (longlong)DAT_146533138;
    uVar6 = *puVar5;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar5 = (undefined8 *)(lVar2 * 0x10 + DAT_146533130);
    *puVar5 = plVar4;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x4e8) = uVar6;
  return;
}



// FUNCTION 140b0f7b0 FUN_140b0f7b0 body=424 status=ok
// SIG undefined FUN_140b0f7b0(void)

void FUN_140b0f7b0(undefined8 param_1,longlong param_2,int *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_30;
  
  if (param_2 != 0) {
    local_30 = 0;
    fVar8 = 0.0;
    local_48 = 0;
    local_40 = 0;
    AActor::SetActorRotation(param_2,&local_48,0);
    lVar5 = FUN_140b2a700(param_2);
    lVar7 = 0;
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x1c8) = *(uint *)(lVar5 + 0x1c8) | 2;
      *(undefined8 *)(lVar5 + 0x2cc) = 0x42b4000000000000;
      *(undefined1 *)(lVar5 + 0x2c8) = 1;
      *(undefined4 *)(lVar5 + 0x2d4) = 0;
      local_30 = 0;
      *(undefined4 *)(lVar5 + 0x1ec) = 0;
    }
    cVar1 = *param_4;
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_4 + 0x40);
      if (0 < iVar2) {
        iVar3 = *param_3;
        if ((iVar3 < 1) || (iVar2 <= iVar3 + -1)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar2 = iVar3;
        }
        fVar8 = (float)FUN_142c98860((longlong)(iVar2 + -1) * 0x38 + *(longlong *)(param_4 + 0x38),0
                                    );
      }
      if (*(longlong *)(param_4 + 8) != 0) {
        puVar6 = (undefined8 *)FName::FName(local_res10,&DAT_1442687bc,1);
        lVar7 = FUN_140b1a100(param_2,*(undefined8 *)(param_4 + 8),*puVar6,0);
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xbf;
        }
      }
      FUN_140af6ac0(param_1,param_2,param_3,param_4,(int)fVar8,lVar7);
    }
    else if (cVar1 == '\x01') {
      FUN_140b0f960(param_1,param_2,param_3,param_4);
    }
    else if (cVar1 == '\x02') {
      FUN_140b0ff10(param_1,param_2,param_3,param_4);
    }
    param_3[10] = param_3[10] + 1;
  }
  return;
}



// FUNCTION 140b0f960 FUN_140b0f960 body=1446 status=ok
// SIG undefined FUN_140b0f960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b0f960(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_148;
  longlong *local_140;
  int local_138;
  longlong local_130 [2];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  iVar1 = *(int *)(param_4 + 0x40);
  if (iVar1 < 1) {
    uVar10 = 0;
  }
  else {
    iVar3 = *param_3 + -1;
    if ((iVar3 < 0) || (iVar1 <= iVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      iVar3 = iVar1 + -1;
    }
    uVar10 = FUN_142c98860((longlong)iVar3 * 0x38 + *(longlong *)(param_4 + 0x38),0);
  }
  puVar4 = (undefined8 *)FName::FName(&local_148,&DAT_14426888c,1);
  FUN_140b1a100(param_2,*(undefined8 *)(param_4 + 8),*puVar4,0);
  lVar7 = DAT_146868988;
  local_148 = 0;
  if (DAT_146868988 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar5 = FUN_1413b5150();
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  plVar6 = (longlong *)FUN_1417985e0(uVar5,param_2,lVar7,0);
  if (plVar6 == (longlong *)0x0) goto LAB_140b0fbdb;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868b40) && (_Init_thread_header(&DAT_146868b40), DAT_146868b40 == -1))
  {
    local_130[0] = 0;
    local_130[1] = 0x4f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_130,0);
    FGenericPlatformString::Memcpy
              (local_130[0],
               L"/Game/GameData/DamageSources/DamageSource_GrenadeDoT.DamageSource_GrenadeDoT_C",
               0x9e);
    uVar5 = FUN_14171bfe0();
    puVar4 = (undefined8 *)FName::FName(&local_148,L"DamageSource_GrenadeDoT_C",1);
    local_178 = 0;
    lVar7 = StaticFindObjectFastExplicit(uVar5,*puVar4,local_130,0);
    if (lVar7 == 0) {
LAB_140b0fee4:
      DAT_146868b38 = 0;
    }
    else {
      lVar9 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      DAT_146868b38 = lVar7;
      if (!bVar2) goto LAB_140b0fee4;
    }
    if (local_130[0] != 0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146868b40);
  }
  FUN_1423974f0(plVar6,1);
  lVar7 = FUN_140b27c50(param_2,local_108);
  if ((*(int *)(lVar7 + 8) < 1) &&
     (lVar7 = FUN_140b27c50(param_2,local_108), *(int *)(lVar7 + 4) < 1)) {
    lVar7 = FUN_140b27c50(param_2,local_108);
    if (*(int *)(lVar7 + 0xc) < 2) {
      uVar12 = *(undefined4 *)(param_4 + 0x2c);
    }
    else {
      uVar12 = *(undefined4 *)(param_4 + 0x34);
    }
  }
  else {
    uVar12 = *(undefined4 *)(param_4 + 0x30);
  }
  FUN_1423bc010(plVar6,uVar12,1);
  (**(code **)(*plVar6 + 0x648))(plVar6,0xe);
  (**(code **)(*plVar6 + 0x838))(plVar6,0);
  (**(code **)(*plVar6 + 0x830))(plVar6,2,1);
  (**(code **)(*plVar6 + 0x830))(plVar6,0x18,1);
  (**(code **)(*plVar6 + 0x638))(plVar6,1);
  local_148 = 0;
  FUN_142382f60(plVar6,param_2[0x2d],&DAT_146532184,0);
  plVar6[0xe5] = *(longlong *)(param_4 + 0x10);
  fVar11 = (float)USphereReflectionCaptureComponent::GetInfluenceBoundingRadius(param_2);
  *(float *)(plVar6 + 0xe6) = fVar11 * *(float *)(param_4 + 0x28);
  plVar6[0xe7] = *(longlong *)(param_4 + 0x18);
  plVar8 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,&local_148);
  plVar6[0xe8] = *plVar8;
  plVar6[0xe9] = DAT_146868b38;
  FUN_14234b150(plVar6);
  (**(code **)(*plVar6 + 0x488))(plVar6,0,1,0);
LAB_140b0fbdb:
  local_140 = (longlong *)0x0;
  local_138 = 0;
  FWeakObjectPtr::operator=(&local_118,param_2);
  FWeakObjectPtr::operator=(&local_120,param_1);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 == (longlong *)0x0) {
    if (((local_138 != 0) && (local_140 != (longlong *)0x0)) &&
       ((**(code **)(*local_140 + 0x28))(local_140,0), local_140 != (longlong *)0x0)) {
      local_140 = (longlong *)FMemory::Realloc(local_140,0,0);
    }
  }
  else {
    *plVar6 = (longlong)&PTR_GetPoolName_14428b788;
    *(undefined4 *)(plVar6 + 1) = local_120;
    *(undefined4 *)((longlong)plVar6 + 0xc) = local_11c;
    *(undefined4 *)(plVar6 + 2) = local_118;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_114;
    plVar6[3] = param_1;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_14428b7d0;
    FUN_140af4d10(plVar6,&local_140);
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar7 = FMemory::Realloc(plVar6,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  local_110 = 0;
  lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
  if (*(longlong *)(lVar7 + 400) == 0) {
    uVar5 = *(undefined8 *)(lVar7 + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
  }
  local_d8 = 0;
  local_d0 = 0;
  if ((local_138 != 0) && (local_140 != (longlong *)0x0)) {
    (**(code **)(*local_140 + 0x30))(local_140,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_170 = CONCAT44(local_170._4_4_,0xbf800000);
  local_178 = local_178 & 0xffffff00;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,&local_110,&local_d8,uVar10);
  if (local_78 != 0) {
    plVar6 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar6 = local_88;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (local_138 != 0) {
    if (local_140 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_140 + 0x28))(local_140,0);
    if (local_140 != (longlong *)0x0) {
      local_140 = (longlong *)FMemory::Realloc(local_140,0,0);
    }
    local_138 = 0;
  }
  if (local_140 != (longlong *)0x0) {
    FMemory::Free(local_140);
  }
  return;
}



// FUNCTION 140b0ff10 FUN_140b0ff10 body=1299 status=ok
// SIG undefined FUN_140b0ff10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140b0ff10(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong *local_378;
  int local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined1 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined8 local_338;
  undefined1 local_330 [8];
  undefined8 local_328;
  float local_320;
  float local_310;
  undefined1 local_30c [52];
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong local_2c8 [2];
  code *local_2b8;
  longlong local_2a8 [4];
  longlong *local_288;
  int local_278;
  undefined1 local_268 [28];
  undefined1 local_24c [236];
  float local_160;
  undefined1 local_15c;
  float local_108;
  undefined1 local_104;
  ulonglong local_68;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar5 == 0) {
    return;
  }
  iVar2 = *(int *)(param_4 + 0x40);
  if (iVar2 < 1) {
LAB_140b103f4:
    FUN_140b3ffb0(param_2,1);
    return;
  }
  iVar3 = *param_3;
  if ((iVar3 < 1) || (iVar2 <= iVar3 + -1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    iVar2 = iVar3;
  }
  fVar10 = (float)FUN_142c98860((longlong)(iVar2 + -1) * 0x38 + *(longlong *)(param_4 + 0x38),0);
  if (fVar10 <= 0.0) goto LAB_140b103f4;
  FUN_142d0a300(local_268);
  pfVar1 = (float *)(param_4 + 0x2c);
  local_160 = *(float *)(param_2 + 0x8e) * *(float *)(param_4 + 0x28);
  local_15c = 1;
  if (pfVar1 != &local_108) {
    local_108 = *pfVar1;
    local_104 = 1;
  }
  lVar5 = FUN_140b27c50(param_2,local_30c);
  if ((*(int *)(lVar5 + 8) < 1) &&
     (lVar5 = FUN_140b27c50(param_2,local_30c), *(int *)(lVar5 + 4) < 1)) {
    lVar5 = FUN_140b27c50(param_2,local_30c);
    if (1 < *(int *)(lVar5 + 0xc)) {
      pfVar6 = (float *)(param_4 + 0x34);
      goto LAB_140b1004e;
    }
  }
  else {
    pfVar6 = (float *)(param_4 + 0x30);
LAB_140b1004e:
    if (pfVar6 != &local_108) {
      local_108 = *pfVar6;
      local_104 = 1;
    }
  }
  plVar7 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,local_330);
  plVar7 = (longlong *)*plVar7;
  if (plVar7 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = plVar7[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar5 = plVar7[0x1f];
    }
  }
  FWeakObjectPtr::operator=(local_24c,lVar5);
  local_350 = *(undefined4 *)(param_4 + 0x28);
  local_398 = &local_358;
  local_388 = 0;
  local_390 = 0;
  local_358 = 0xbf800000;
  local_354 = 0xbf800000;
  local_34c = 0;
  local_348 = 0x3f800000;
  local_344 = 0x3f800000;
  local_340 = 0x3f800000;
  FUN_140a86fb0(param_2,*(undefined8 *)(param_4 + 0x20),0,local_268);
  puVar8 = (undefined8 *)FName::FName(local_330,&DAT_14426896c,1);
  plVar7 = (longlong *)FUN_140b1a100(param_2,*(undefined8 *)(param_4 + 8),*puVar8,0);
  if (plVar7 != (longlong *)0x0) {
    FUN_14234b150(plVar7);
    if (0.0001 < *pfVar1) {
      local_320 = local_108 / *pfVar1;
      local_328 = CONCAT44(local_320,local_320);
      local_310 = local_320;
      (**(code **)(*plVar7 + 0x3f8))(plVar7,&local_328);
    }
  }
  local_378 = (longlong *)0x0;
  local_370 = 0;
  FWeakObjectPtr::operator=(&local_360,param_2);
  FWeakObjectPtr::operator=(&local_368,param_1);
  local_2d8._0_4_ = local_368;
  local_2d8._4_4_ = local_364;
  local_2d0 = local_360;
  local_2cc = local_35c;
  local_2c8[0] = param_1;
  FUN_140aecad0(local_2c8 + 1,param_4);
  plVar7 = (longlong *)FMemory::Realloc(0,0x80,0);
  if (plVar7 == (longlong *)0x0) {
    if (((local_370 != 0) && (local_378 != (longlong *)0x0)) &&
       ((**(code **)(*local_378 + 0x28))(local_378,0), local_378 != (longlong *)0x0)) {
      local_378 = (longlong *)FMemory::Realloc(local_378,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_14428b8a8;
    *(undefined4 *)(plVar7 + 1) = (undefined4)local_2d8;
    *(undefined4 *)((longlong)plVar7 + 0xc) = local_2d8._4_4_;
    *(undefined4 *)(plVar7 + 2) = local_2d0;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_2cc;
    plVar7[3] = local_2c8[0];
    FUN_140aecad0(plVar7 + 4,local_2c8 + 1);
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[0xe] = lVar5;
    *plVar7 = (longlong)&PTR_GetPoolName_14428b8f0;
    FUN_140af4e40(plVar7,&local_378);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar5 = FMemory::Realloc(plVar7,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  if (local_288 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_338 = 0;
  lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  if (*(longlong *)(lVar5 + 400) == 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
  }
  else {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  if ((local_370 != 0) && (local_378 != (longlong *)0x0)) {
    (**(code **)(*local_378 + 0x30))(local_378,&local_2d8);
  }
  FWeakObjectPtr::operator=(local_2c8,0);
  local_390 = CONCAT44(local_390._4_4_,0xbf800000);
  local_2b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_2c8[1] = 0;
  local_288 = (longlong *)0x0;
  local_278 = 0;
  local_398 = (undefined4 *)((ulonglong)local_398 & 0xffffffffffffff00);
  FUN_142880850(uVar9,&local_338,&local_2d8,fVar10);
  if (local_278 != 0) {
    plVar7 = local_2a8;
    if (local_288 != (longlong *)0x0) {
      plVar7 = local_288;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_288 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2d8);
  if (local_370 != 0) {
    if (local_378 == (longlong *)0x0) goto LAB_140b103e1;
    (**(code **)(*local_378 + 0x28))(local_378,0);
    if (local_378 != (longlong *)0x0) {
      local_378 = (longlong *)FMemory::Realloc(local_378,0,0);
    }
    local_370 = 0;
  }
  if (local_378 != (longlong *)0x0) {
    FMemory::Free(local_378);
  }
LAB_140b103e1:
  FUN_1409c53c0(local_268);
  return;
}



// FUNCTION 140b10430 FUN_140b10430 body=140 status=ok
// SIG undefined FUN_140b10430(void)

void FUN_140b10430(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8;
  char local_res9;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  FUN_142880530(uVar2,param_1 + 0x92);
  param_1[0x92] = 0;
  FUN_140ec2ee0(param_1[0x8f]);
  local_res9 = (char)param_1[0x8d];
  if (local_res9 != '\x03') {
    *(undefined1 *)(param_1 + 0x8d) = 3;
    local_res8 = 3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x8b,&local_res8);
  }
  return;
}



// FUNCTION 140b104c0 FUN_140b104c0 body=74 status=ok
// SIG undefined FUN_140b104c0(void)

void FUN_140b104c0(longlong *param_1,longlong param_2,char param_3)

{
  if (*(char *)((longlong)param_1 + 0x4fb) == '\x04') {
    param_1[0xdf] = param_2;
    (**(code **)(*param_1 + 0x730))(param_1,1);
    if (param_3 != '\0') {
      (**(code **)(*param_1 + 0x730))(param_1,2);
    }
  }
  return;
}



// FUNCTION 140b10510 FUN_140b10510 body=350 status=ok
// SIG undefined FUN_140b10510(void)

void FUN_140b10510(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x128) == '\x03') {
      FUN_142d49d00(param_2,*(undefined8 *)(param_1 + 0x48));
      return;
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      plVar4 = (longlong *)UCelLightData::GetPrivateStaticClass();
      plVar6 = *(longlong **)(param_1 + 0x48);
      for (plVar1 = plVar6; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
        if (plVar1 == plVar4) goto LAB_140b10580;
      }
    }
    plVar6 = (longlong *)0x0;
LAB_140b10580:
    lVar9 = plVar6[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar9 = plVar6[0x1f];
      if (lVar9 == 0) {
        return;
      }
    }
    lVar5 = UCelLightData::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar5 = FUN_142bbbf70(lVar9), lVar5 != 0)) {
      plVar6 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,local_res10);
      if (*plVar6 != 0) {
        lVar7 = FUN_142e49950();
        lVar5 = *plVar6;
        for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar7) goto LAB_140b10621;
        }
      }
      lVar5 = 0;
LAB_140b10621:
      uVar8 = FUN_142bbbf70(lVar9);
      lVar9 = FUN_142d480a0(uVar8,*(undefined4 *)(param_1 + 0x5c),lVar5);
      FUN_140b3cb70(param_2,*(undefined8 *)(lVar9 + 0x10));
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        FUN_140b3cb70(param_2);
      }
    }
  }
  return;
}



// FUNCTION 140b10680 FUN_140b10680 body=86 status=ok
// SIG undefined FUN_140b10680(void)

void FUN_140b10680(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (lVar1 = FUN_140b2a730(param_2), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x200) != '\0') && (*(longlong *)(lVar1 + 0x1a0) != 0)) {
      FUN_140b43850(param_2,*(undefined8 *)(lVar1 + 0x270));
      return;
    }
    FUN_140b43850(param_2,*(undefined8 *)(lVar1 + 0x268));
  }
  return;
}



// FUNCTION 140b106f0 FUN_140b106f0 body=54 status=ok
// SIG undefined FUN_140b106f0(void)

void FUN_140b106f0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_140b43850(param_2,*(undefined8 *)(param_1 + 0x60));
  }
  FUN_1413b3910(param_1,param_2);
  return;
}



// FUNCTION 140b10730 FUN_140b10730 body=112 status=ok
// SIG undefined FUN_140b10730(void)

void FUN_140b10730(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_140ae5a60();
  if (param_1[0x9f] != 0) {
    uVar1 = FUN_142a07000();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      FUN_1423b5fe0(plVar2,param_1[0x9f],0);
      (**(code **)(*plVar2 + 0x358))(plVar2,1);
      AActor::SetActorTickEnabled(param_1,1);
    }
  }
  return;
}



// FUNCTION 140b107a0 FUN_140b107a0 body=105 status=ok
// SIG undefined FUN_140b107a0(void)

void FUN_140b107a0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (lVar1 != 0) {
    FUN_140d04be0(lVar1);
    Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(lVar1);
  }
  FUN_140b0d310(param_1,0);
  FUN_140ae5a60(param_1,param_2);
  TBaseMulticastDelegate<void>::Remove(&DAT_146533130,*(undefined8 *)(param_1 + 0x4e8));
  return;
}



// FUNCTION 140b10810 FUN_140b10810 body=136 status=ok
// SIG undefined FUN_140b10810(void)

void FUN_140b10810(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_140ae5a60();
  if ((*(longlong *)(param_1 + 0x4d8) != 0) &&
     (lVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x980) + 0x28))(),
     lVar1 != 0)) {
    local_10 = 0;
    local_18 = param_1;
    uVar2 = FUN_142f2a230();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f06710(lVar1,&local_18);
  }
  *(undefined1 *)(param_1 + 0x550) = 0;
  TBaseMulticastDelegate<void>::Remove(&DAT_146533130,*(undefined8 *)(param_1 + 0x4e8));
  return;
}



// FUNCTION 140b108a0 FUN_140b108a0 body=214 status=ok
// SIG undefined FUN_140b108a0(void)

void FUN_140b108a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x5e8);
  cVar1 = FUN_14059ee90(param_1 + 0x610);
  if (lVar2 == 0) {
    if (cVar1 != '\0') {
      FUN_1405ac8f0(param_1 + 0x610,0,4);
    }
  }
  else {
    if (cVar1 == '\0') {
      lVar2 = FUN_1405ab470(param_1,0,1,*(undefined8 *)(param_1 + 0x550));
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x610) + 0x2d8);
    }
    if (lVar2 != 0) {
      FUN_1405a3150(lVar2,local_28,*(undefined8 *)(param_1 + 0x5e8),0);
      FUN_140591060(local_28);
    }
  }
  lVar2 = FUN_140590080(local_28);
  FUN_1405913a0(param_1 + 0x610,lVar2);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(lVar2 + 0x10);
  FUN_140591060(local_28);
  return;
}



// FUNCTION 140b10980 FUN_140b10980 body=31 status=ok
// SIG undefined FUN_140b10980(void)

void FUN_140b10980(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140afafe0();
  if (lVar1 != 0) {
    FUN_140ae5f50(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b109a0 FUN_140b109a0 body=205 status=ok
// SIG undefined FUN_140b109a0(void)

void FUN_140b109a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x554);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
    lVar4 = param_1 + 0x5d8;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar1 = *(int *)(param_1 + 0x55c);
  if ((iVar1 < 0) || (*(int *)(lVar4 + 0x38) <= iVar1)) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 0x48;
  }
  iVar1 = *(int *)(lVar4 + 0x40);
  if ((1 < iVar1) && (iVar3 = 0, 0 < iVar1)) {
    while( true ) {
      lVar2 = *(longlong *)
               (*(longlong *)(lVar4 + 0x38) + 0x48 +
               (longlong)((param_2 + *(int *)(param_1 + 0x560) + iVar1 + iVar3) % iVar1) * 0x50);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x7b0) != '\0')) break;
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) {
        return;
      }
    }
    FUN_140b0d430(param_1);
    return;
  }
  return;
}



// FUNCTION 140b10a80 FUN_140b10a80 body=168 status=ok
// SIG undefined FUN_140b10a80(void)

void FUN_140b10a80(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x554);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
    lVar3 = param_1 + 0x5d8;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar1 = *(int *)(lVar3 + 0x38);
  if ((1 < iVar1) && (iVar4 = 0, 0 < iVar1)) {
    while( true ) {
      lVar2 = *(longlong *)
               (*(longlong *)(lVar3 + 0x30) + 0x30 +
               (longlong)((*(int *)(param_1 + 0x55c) + iVar1 + param_2 + iVar4) % iVar1) * 0x48);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x7b0) != '\0')) break;
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    FUN_140b0d6a0(param_1);
    return;
  }
  return;
}



// FUNCTION 140b10b30 FUN_140b10b30 body=358 status=ok
// SIG undefined FUN_140b10b30(void)

void FUN_140b10b30(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar11;
  int local_res8 [2];
  int local_res18 [2];
  ulonglong uVar6;
  ulonglong uVar10;
  
  iVar2 = *(int *)(param_1 + 0x580);
  if (1 < iVar2) {
    iVar3 = (iVar2 + param_2 + *(int *)(param_1 + 0x554)) % iVar2;
    uVar8 = 0;
    *(int *)(param_1 + 0x558) = iVar3;
    *(undefined8 *)(param_1 + 0x55c) = 0;
    if ((-1 < iVar3) && (iVar3 < iVar2)) {
      uVar5 = 0;
      lVar11 = (longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x578);
      lVar4 = *(longlong *)(lVar11 + 0x30);
      lVar1 = lVar4 + (longlong)*(int *)(lVar11 + 0x38) * 0x48;
      uVar6 = uVar8;
      uVar10 = uVar8;
      uVar9 = uVar5;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
        FUN_140afb6b0(param_1,lVar4,local_res8,local_res18);
        uVar5 = (int)uVar6 + local_res8[0];
        uVar6 = (ulonglong)uVar5;
        uVar9 = (int)uVar10 + local_res18[0];
        uVar10 = (ulonglong)uVar9;
      }
      FUN_140af3530(param_1 + 0x508,lVar11,lVar11 + 0x18,uVar5,uVar9);
    }
    plVar7 = *(longlong **)(param_1 + 0x568);
    uVar6 = (longlong)*(int *)(param_1 + 0x570) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_1 + 0x570) < plVar7) {
      uVar6 = uVar8;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar7;
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0x7b0) = 0;
          FUN_142398ec0(lVar1,0,2);
          FUN_140ae3890(lVar1);
        }
        plVar7 = plVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
    *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x558);
    FUN_140af5780(param_1);
  }
  return;
}



// FUNCTION 140b10ca0 FUN_140b10ca0 body=202 status=ok
// SIG undefined FUN_140b10ca0(void)

void FUN_140b10ca0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_18;
  undefined4 local_10;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar4 = param_2[1];
    param_1[0xc6] = *param_2;
    *(int *)(param_1 + 199) = (int)lVar4;
    puVar5 = (undefined4 *)FRotator::Quaternion(param_3,&local_18);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)(param_1 + 0xca) = *puVar5;
    *(undefined4 *)((longlong)param_1 + 0x654) = uVar1;
    *(undefined4 *)(param_1 + 0xcb) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x65c) = uVar3;
    if ((*(char *)((longlong)param_1 + 0x603) == '\0') && ((int)param_1[0xce] == 1)) {
      local_18 = param_1[0xc6];
      local_10 = (undefined4)param_1[199];
      FUN_1423990b0(param_1[0xaa],&local_18,0,0,0);
      FUN_142399b10(param_1[0xaa],param_1 + 0xca,0,0,0);
    }
    FUN_140af3ee0(param_1);
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  return;
}



// FUNCTION 140b10d70 FUN_140b10d70 body=202 status=ok
// SIG undefined FUN_140b10d70(void)

void FUN_140b10d70(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((char)param_1[0x25] == '\x03') {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 0x63c) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x644) = uVar1;
    puVar4 = (undefined4 *)FRotator::Quaternion(param_3,&local_18);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(param_1 + 0xcc) = *puVar4;
    *(undefined4 *)((longlong)param_1 + 0x664) = uVar1;
    *(undefined4 *)(param_1 + 0xcd) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x66c) = uVar3;
    if ((*(char *)((longlong)param_1 + 0x603) == '\0') && ((int)param_1[0xce] == 2)) {
      local_18 = *(undefined8 *)((longlong)param_1 + 0x63c);
      local_10 = *(undefined4 *)((longlong)param_1 + 0x644);
      FUN_1423990b0(param_1[0xaa],&local_18,0,0,0);
      FUN_142399b10(param_1[0xaa],param_1 + 0xcc,0,0,0);
    }
    FUN_140af3ee0(param_1);
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  return;
}



// FUNCTION 140b10e40 FUN_140b10e40 body=853 status=ok
// SIG undefined FUN_140b10e40(void)

void FUN_140b10e40(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong *local_res8;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong *local_c8;
  undefined8 local_c0;
  float local_b8;
  
  uVar3 = FUN_1422406d0();
  lVar10 = *(longlong *)(param_1 + 0x580);
  lVar11 = *(longlong *)(param_1 + 0x578);
  local_d8 = *(float *)(lVar10 + 0x210);
  fStack_d4 = *(float *)(lVar10 + 0x214);
  fStack_d0 = *(float *)(lVar10 + 0x218);
  fStack_cc = *(float *)(lVar10 + 0x21c);
  auVar1._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_d4);
  auVar1._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_d8);
  auVar1._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_d0);
  auVar1._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_cc);
  iVar4 = movmskps(uVar3,auVar1);
  if (iVar4 != 0) {
    *(float *)(lVar10 + 0x250) = local_d8;
    *(float *)(lVar10 + 0x254) = fStack_d4;
    *(float *)(lVar10 + 600) = fStack_d0;
    *(float *)(lVar10 + 0x25c) = fStack_cc;
    puVar5 = (undefined8 *)FQuat::Rotator(&local_d8,&local_e8);
    *(undefined8 *)(lVar10 + 0x260) = *puVar5;
    *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar5 + 1);
  }
  local_f8 = *(undefined8 *)(lVar10 + 0x260);
  local_f0 = *(float *)(lVar10 + 0x268);
  FRotator::Vector(&local_f8,&local_108);
  lVar10 = *(longlong *)(lVar11 + 0x3a0);
  lVar11 = (longlong)*(int *)(lVar11 + 0x3a8) * 0xa0 + lVar10;
  do {
    if (lVar10 == lVar11) {
      return;
    }
    local_res8 = (longlong *)FWeakObjectPtr::Get(lVar10 + 0x74);
    if ((local_res8 != (longlong *)0x0) &&
       (lVar6 = FUN_140ae9890(param_1 + 0x560,&local_res8), fVar13 = DAT_1468b5d98,
       fVar17 = DAT_1468b5d94, fVar16 = DAT_1468b5d90, lVar6 != 0)) {
      fVar12 = param_2 * *(float *)(param_1 + 0x570);
      fVar14 = param_2 * *(float *)(param_1 + 0x574);
      fVar15 = local_108 * fVar12;
      fVar18 = local_104 * fVar12;
      fVar12 = local_100 * fVar12;
      pfVar7 = (float *)FUN_140afd7b0(param_1,&local_d8,local_res8);
      plVar9 = local_res8;
      fVar16 = fVar15 + fVar16 + fVar14 * *pfVar7;
      fVar15 = fVar18 + fVar17 + fVar14 * pfVar7[1];
      fVar17 = fVar12 + fVar13 + fVar14 * pfVar7[2];
      uVar8 = UMediaSoundComponent::GetPrivateStaticClass();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x628))(plVar9,uVar8);
      if (plVar9 == (longlong *)0x0) {
        local_e8 = CONCAT44(fVar15,fVar16);
        local_e0 = fVar17;
        FUN_142221b50(local_res8,&local_e8,0,0,1);
      }
      else {
        cVar2 = (**(code **)(*plVar9 + 0x560))(plVar9);
        if (cVar2 == '\0') goto LAB_140b11122;
        fVar13 = 1.0 / param_2;
        local_f0 = fVar17 * fVar13;
        local_f8 = CONCAT44(fVar13 * fVar15,fVar16 * fVar13);
        (**(code **)(*plVar9 + 0x7b0))(plVar9,&local_f8,param_2);
      }
      local_c0 = CONCAT44(fVar15,fVar16);
      local_c8 = local_res8;
      local_b8 = fVar17;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x550,&local_c8);
    }
LAB_140b11122:
    lVar10 = lVar10 + 0xa0;
  } while( true );
}



// FUNCTION 140b111a0 FUN_140b111a0 body=2078 status=ok
// SIG undefined FUN_140b111a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b111a0(longlong param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
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
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0 [2];
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined1 local_18c [4];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  float local_160;
  float local_154;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_120;
  undefined1 local_11c [20];
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1cc = param_2;
  FUN_1422406d0();
  if (((*(char *)(param_1 + 0x4fb) == '\x02') && (*(longlong *)(param_1 + 0x568) != 0)) &&
     (*(char *)(param_1 + 0x571) == '\x01')) {
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    uVar3 = FUN_1413ffe00();
    AActor::GetOverlappingActors(param_1,&local_1a8,uVar3);
    plVar1 = local_1a8 + (int)local_1a0;
    if (local_1a8 != plVar1) {
      fVar20 = 0.0;
      plVar8 = local_1a8;
      do {
        plVar7 = (longlong *)*plVar8;
        if (plVar7 == (longlong *)0x0) {
LAB_140b112f6:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar4 = FUN_1413ffe00();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140b112f6;
        }
        lVar4 = plVar7[0x1cd];
        *(undefined1 *)(lVar4 + 0xea1) = 1;
        if (*(char *)(lVar4 + 0x248) == '\x01') {
          if (*(longlong *)(param_1 + 0x168) == 0) {
            local_180 = DAT_1464aa7a0;
            puVar5 = &local_188;
            local_188 = DAT_1464aa798;
          }
          else {
            puVar5 = (undefined8 *)FUN_14238db80(*(longlong *)(param_1 + 0x168),local_11c);
          }
          local_178 = *puVar5;
          local_170 = *(undefined4 *)(puVar5 + 1);
          (**(code **)(*plVar7 + 0x8a0))(plVar7,&local_178,0,0);
        }
        else if (*(char *)(lVar4 + 0x248) == '\x03') {
          lVar6 = *(longlong *)(param_1 + 0x168);
          if (lVar6 == 0) {
            local_148 = 0.0;
            fStack_144 = 0.0;
            fStack_140 = 0.0;
            uStack_13c = 0;
            fVar13 = 0.0;
            fVar14 = 0.0;
            fVar12 = 0.0;
            fVar22 = fRam00000001468684ac;
          }
          else {
            local_148 = *(float *)(lVar6 + 0x220);
            fStack_144 = *(float *)(lVar6 + 0x224);
            fStack_140 = *(float *)(lVar6 + 0x228);
            uStack_13c = *(undefined4 *)(lVar6 + 0x22c);
            fVar13 = *(float *)(lVar6 + 0x210);
            fVar14 = *(float *)(lVar6 + 0x214);
            fVar12 = *(float *)(lVar6 + 0x218);
            fVar22 = *(float *)(lVar6 + 0x21c);
          }
          lVar6 = plVar7[0x2d];
          fVar15 = fVar14 * 1.0 - fVar12 * 0.0;
          fVar16 = fVar12 * 0.0 - fVar13 * 1.0;
          fVar17 = fVar13 * 0.0 - fVar14 * 0.0;
          fVar18 = fVar22 * 0.0 - fVar22 * 0.0;
          fVar15 = fVar15 + fVar15;
          fVar16 = fVar16 + fVar16;
          fVar17 = fVar17 + fVar17;
          fVar18 = fVar18 + fVar18;
          fVar10 = (fVar17 * fVar14 - fVar16 * fVar12) + fVar22 * fVar15 + 0.0;
          fVar12 = (fVar15 * fVar12 - fVar17 * fVar13) + fVar22 * fVar16 + 0.0;
          fVar13 = (fVar16 * fVar13 - fVar15 * fVar14) + fVar22 * fVar17 + 1.0;
          local_138 = fVar10;
          fStack_134 = fVar12;
          fStack_130 = fVar13;
          fStack_12c = (fVar18 * fVar22 - fVar18 * fVar22) + fVar22 * fVar18 + 0.0;
          if (lVar6 == 0) {
            local_160 = DAT_1468b5d98;
            puVar5 = &local_168;
            local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          }
          else {
            puVar5 = (undefined8 *)&local_198;
            local_198 = *(undefined4 *)(lVar6 + 0x220);
            local_190 = *(undefined4 *)(lVar6 + 0x228);
            uStack_194 = *(undefined4 *)(lVar6 + 0x224);
          }
          local_154 = *(float *)(puVar5 + 1);
          fVar16 = (float)*puVar5 - local_148;
          fVar17 = local_154 - fStack_140;
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x550) + 0x710);
          fVar15 = (float)((ulonglong)*puVar5 >> 0x20) - fStack_144;
          local_1d0 = fVar10 * *(float *)(lVar4 + 0x18c) + fVar12 * *(float *)(lVar4 + 400) +
                      fVar13 * *(float *)(lVar4 + 0x194);
          local_1c8 = fVar10 * local_1d0;
          local_1c4 = fVar12 * local_1d0;
          local_1d0 = fVar13 * local_1d0;
          local_1d4 = *(float *)(lVar4 + 0x18c) - local_1c8;
          local_1d8 = *(float *)(lVar4 + 400) - local_1c4;
          fVar22 = *(float *)(lVar4 + 0x194) - local_1d0;
          local_1c0 = fVar22;
          local_1bc = fVar12;
          local_1b8 = fVar10;
          local_1b4 = fVar13;
          lVar6 = FUN_14238d0c0(*(longlong *)(param_1 + 0x550),local_108);
          fVar14 = *(float *)(lVar6 + 0x28) * fVar14;
          if (fVar14 == 0.0) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = (fVar12 * fVar15 + fVar10 * fVar16 + fVar13 * fVar17) / fVar14;
          }
          uVar3 = FRuntimeFloatCurve::GetRichCurve(*(longlong *)(param_1 + 0x568) + 0x30);
          fVar9 = (float)FRichCurve::Eval(uVar3,fVar14,0);
          fVar9 = fVar9 * local_1cc;
          lVar6 = *(longlong *)(param_1 + 0x568);
          fVar18 = *(float *)(lVar6 + 0xa8);
          fVar10 = fVar10 * fVar9 + local_1c8;
          fVar12 = fVar12 * fVar9 + local_1c4;
          fVar13 = fVar13 * fVar9 + local_1d0;
          if (0.0 < fVar18) {
            fVar9 = fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13;
            fVar22 = SQRT(fVar9);
            if (0.0 <= fVar22) {
              if (fVar18 <= fVar22) {
                fVar22 = fVar18;
              }
            }
            else {
              fVar22 = 0.0;
            }
            fVar18 = fVar10;
            fVar11 = fVar12;
            fVar21 = fVar13;
            if ((fVar9 != 1.0) &&
               (fVar18 = DAT_1468b5d90, fVar11 = DAT_1468b5d94, fVar21 = DAT_1468b5d98,
               1e-08 <= fVar9)) {
              auVar19 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
              local_1d0 = auVar19._0_4_;
              local_1d0 = local_1d0 + local_1d0 * (0.5 - fVar9 * 0.5 * local_1d0 * local_1d0);
              local_1d0 = local_1d0 + local_1d0 * (0.5 - fVar9 * 0.5 * local_1d0 * local_1d0);
              fVar18 = fVar10 * local_1d0;
              fVar11 = local_1d0 * fVar12;
              fVar21 = local_1d0 * fVar13;
            }
            fVar10 = fVar18 * fVar22;
            fVar12 = fVar11 * fVar22;
            fVar13 = fVar21 * fVar22;
            fVar22 = local_1c0;
          }
          fVar9 = local_1d8;
          fVar18 = local_1d4;
          if ((*(char *)(lVar6 + 0xac) != '\0') && (0.0 < *(float *)(lVar6 + 0xb0))) {
            (**(code **)(*plVar7 + 0x578))(plVar7,local_1b0,local_18c);
            fVar18 = local_1bc * fVar15 + local_1b8 * fVar16 + local_1b4 * fVar17;
            fVar16 = fVar16 - local_1b8 * fVar18;
            fVar17 = fVar17 - local_1b4 * fVar18;
            fVar15 = fVar15 - local_1bc * fVar18;
            fVar18 = local_1b0[0] + *(float *)(*(longlong *)(param_1 + 0x550) + 0x714);
            fVar9 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17);
            if (1e-08 < ABS(fVar18)) {
              fVar11 = fVar9 / fVar18;
              fVar18 = fVar20;
              if (0.0 <= fVar11) goto LAB_140b117be;
            }
            else {
              fVar11 = fVar20;
              if (fVar18 <= fVar9) {
                fVar11 = 1.0;
              }
LAB_140b117be:
              fVar18 = fVar11;
              if (1.0 <= fVar11) {
                fVar18 = 1.0;
              }
            }
            lVar6 = *(longlong *)(param_1 + 0x568);
            fVar18 = fVar18 * 0.99 + 0.01;
            fVar9 = fVar18 * 1.1111112;
            fVar18 = -1.0 / (fVar18 * *(float *)(lVar6 + 0xb0));
            if (0.0 <= fVar9) {
              if (1.0 <= fVar9) {
                fVar9 = 1.0;
              }
            }
            else {
              fVar9 = 0.0;
            }
            fVar11 = *(float *)(lVar6 + 0xb8) - *(float *)(lVar6 + 0xb4);
            if (1e-08 < ABS(fVar11)) {
              fVar11 = (fVar14 - *(float *)(lVar6 + 0xb4)) / fVar11;
              fVar14 = fVar20;
              if (0.0 <= fVar11) goto LAB_140b11869;
            }
            else {
              fVar11 = fVar20;
              if (*(float *)(lVar6 + 0xb8) <= fVar14) {
                fVar11 = 1.0;
              }
LAB_140b11869:
              fVar14 = fVar11;
              if (1.0 <= fVar11) {
                fVar14 = 1.0;
              }
            }
            fVar14 = (1.0 - fVar14) * (fVar9 * 0.7 + 0.2);
            fVar22 = fVar14 * (fVar17 * fVar18 - fVar22) + fVar22;
            fVar9 = fVar14 * (fVar15 * fVar18 - local_1d8) + local_1d8;
            fVar18 = fVar14 * (fVar16 * fVar18 - local_1d4) + local_1d4;
          }
          local_120 = fVar22 + fVar13;
          *(ulonglong *)(lVar4 + 0x18c) = CONCAT44(fVar9 + fVar12,fVar10 + fVar18);
          *(float *)(lVar4 + 0x194) = fVar22 + fVar13;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  return;
}



// FUNCTION 140b119c0 FUN_140b119c0 body=123 status=ok
// SIG undefined FUN_140b119c0(void)

void FUN_140b119c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 local_res8;
  char local_res9;
  
  FUN_1422406d0();
  if (*(char *)(param_1 + 0x468) == '\x03') {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x478) + 0x1c0);
    fVar2 = (float)FUN_140eac0e0();
    if ((ABS(fVar2 - fVar1) <= 1.0) &&
       (local_res9 = *(char *)(param_1 + 0x468), local_res9 != '\x04')) {
      *(undefined1 *)(param_1 + 0x468) = 4;
      local_res8 = 4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x458,&local_res8);
    }
  }
  return;
}



// FUNCTION 140b11a40 FUN_140b11a40 body=129 status=ok
// SIG undefined FUN_140b11a40(void)

void FUN_140b11a40(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140ae5f70();
  uVar2 = FUN_142a07000();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = FUN_1423b4950(plVar3);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x4d4) == '\0') {
        lVar4 = param_1[0xa0];
      }
      else {
        lVar4 = param_1[0x9e];
      }
      FUN_1423b5fe0(plVar3,lVar4,1);
      (**(code **)(*plVar3 + 0x358))(plVar3,0);
      AActor::SetActorTickEnabled(param_1,0);
    }
  }
  return;
}



// FUNCTION 140b11ad0 FUN_140b11ad0 body=1057 status=ok
// SIG undefined FUN_140b11ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b11ad0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined1 *local_198;
  undefined *local_190;
  longlong **local_188;
  undefined4 local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  int local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  undefined1 local_d8;
  undefined1 local_d5;
  undefined1 local_d4;
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  FUN_1422409a0();
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x708) != 4)) {
    if ((char)param_1[0xad] == '\0') {
      FUN_140af55a0(param_1);
    }
    else {
      if ((char)param_1[0xd6] == '\0') {
        FUN_140af5220(param_1);
      }
      fVar11 = (float)FUN_142c98860(param_1 + 0xc0,param_1[0x2a]);
      if (0.0 < fVar11) {
        plVar6 = (longlong *)param_1[0x2d];
        if (plVar6 == (longlong *)0x0) {
          local_158 = DAT_1468b5d98;
          puVar5 = &local_160;
          local_160 = _DAT_1468b5d90;
        }
        else {
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x428))(plVar6,&local_154,param_1[0xae]);
        }
        local_110 = *puVar5;
        local_108 = *(undefined4 *)(puVar5 + 1);
        local_1a8 = (undefined8 *)0x0;
        FUN_1422ffb20(local_e8,*(undefined8 *)(param_1[2] + 0x18),local_178,0);
        local_d4 = 0;
        plVar6 = (longlong *)UAudioSettings::GetPrivateStaticClass();
        lVar9 = plVar6[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          lVar9 = plVar6[0x1f];
        }
        local_d5 = *(char *)(lVar9 + 0xab) == '\0';
        local_d8 = 1;
        FCollisionQueryParams::AddIgnoredActor(local_e8,param_1);
        local_140 = &local_148;
        local_148 = lVar4;
        local_138 = FUN_14073d760(&local_148,DAT_146b34888);
        plVar6 = local_140;
        local_130 = &local_148;
        local_128 = 0;
        puVar5 = (undefined8 *)FUN_14073d760(local_140,local_138);
        puVar7 = (undefined8 *)FUN_14073d760(local_130,local_128);
        for (; puVar5 != puVar7; puVar5 = (undefined8 *)FUN_14073d760(plVar6,*puVar5)) {
          lVar9 = puVar5[2];
          plVar1 = *(longlong **)(lVar9 + 0x118);
          if ((((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) &&
              (fVar12 = (float)FUN_142230c20(param_1,plVar1), fVar12 <= fVar11)) &&
             ((iVar3 = FUN_142dec980(param_1[0xd5],*(undefined8 *)(lVar9 + 0x180)), iVar3 == 2 &&
              (cVar2 = FUN_142221b10(plVar1,DAT_146859048), cVar2 == '\0')))) {
            local_100 = FUN_140b07a60;
            uStack_f8 = 0;
            local_170 = (longlong *)0x0;
            local_168 = 0;
            plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
            local_168 = 3;
            local_170 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              *plVar8 = (longlong)&PTR_FUN_14428adf8;
              FWeakObjectPtr::operator=(plVar8 + 1,param_1);
              *(undefined4 *)(plVar8 + 2) = (undefined4)local_100;
              *(undefined4 *)((longlong)plVar8 + 0x14) = local_100._4_4_;
              *(undefined4 *)(plVar8 + 3) = uStack_f8;
              *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_f4;
              plVar8[4] = (longlong)plVar1;
              lVar9 = FDelegateHandle::GenerateNewID();
              plVar8[5] = lVar9;
              *plVar8 = (longlong)&PTR_FUN_14428ae40;
            }
            lVar9 = plVar1[0x2d];
            if (lVar9 == 0) {
              local_118 = DAT_1468b5d98;
              puVar10 = &local_120;
              local_120 = _DAT_1468b5d90;
            }
            else {
              puVar10 = &local_160;
              local_158 = *(undefined4 *)(lVar9 + 0x228);
              local_160 = *(undefined8 *)(lVar9 + 0x220);
            }
            local_154 = *puVar10;
            local_14c = *(undefined4 *)(puVar10 + 1);
            local_180 = 0;
            local_188 = &local_170;
            local_190 = &DAT_146aefe68;
            local_198 = local_e8;
            local_1a8 = &local_154;
            local_1a0 = 3;
            FUN_142330010(lVar4,local_f0,1,&local_110);
            if (local_168 != 0) {
              if (local_170 == (longlong *)0x0) goto LAB_140b11e6c;
              (**(code **)(*local_170 + 0x28))(local_170,0);
              if (local_170 != (longlong *)0x0) {
                local_170 = (longlong *)FMemory::Realloc(local_170,0,0);
              }
              local_168 = 0;
            }
            if (local_170 != (longlong *)0x0) {
              FMemory::Free(local_170);
            }
          }
LAB_140b11e6c:
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140b11f00 FUN_140b11f00 body=1106 status=ok
// SIG undefined FUN_140b11f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b11f00(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x601) != '\0') {
    if ((*(char *)(param_1 + 0x580) == '\0') || (*(longlong *)(param_1 + 0x588) == 0)) {
      bVar9 = false;
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x6d0);
      uVar14 = 0;
      *(undefined4 *)(param_1 + 0x6d8) = 0;
      bVar9 = true;
      if (0x7fffffff < *(uint *)(param_1 + 0x6dc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
      }
      *(undefined8 *)(param_1 + 0x6e0) = DAT_1468c21b0;
      plVar16 = *(longlong **)(param_1 + 0x6c0);
      uVar15 = (longlong)*(int *)(param_1 + 0x6c8) & 0x1fffffffffffffff;
      if (plVar16 + *(int *)(param_1 + 0x6c8) < plVar16) {
        uVar15 = uVar14;
      }
      if (uVar15 != 0) {
        do {
          plVar7 = (longlong *)*plVar16;
          if ((plVar7 != (longlong *)0x0) && (lVar8 = plVar7[0x9a], lVar8 != 0)) {
            local_b8 = *(undefined **)(lVar8 + 0x220);
            uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,*(undefined4 *)(lVar8 + 0x228));
            cVar10 = FUN_140aff840(param_1,&local_b8);
            if (cVar10 != '\0') {
              iVar6 = *(int *)(param_1 + 0x6d8);
              *(int *)(param_1 + 0x6d8) = iVar6 + 1;
              if (*(int *)(param_1 + 0x6dc) < iVar6 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
              }
              *(longlong **)(*plVar1 + (longlong)iVar6 * 8) = plVar7;
              if (plVar7[0x9b] == 0) {
                local_a8 = 0;
                (**(code **)(*plVar7 + 0x838))(plVar7,*(undefined8 *)(param_1 + 0x588),0,1);
              }
            }
          }
          plVar16 = plVar16 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar15);
        bVar9 = true;
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x578);
    if (lVar8 == 0) {
      local_c8 = 0;
      local_a0 = (*(float *)(param_1 + 0x644) - *(float *)(param_1 + 0x638)) * param_2 +
                 *(float *)(param_1 + 0x638);
      local_b8 = (undefined *)
                 CONCAT44((*(float *)(param_1 + 0x640) - *(float *)(param_1 + 0x634)) * param_2 +
                          *(float *)(param_1 + 0x634),
                          (*(float *)(param_1 + 0x63c) - *(float *)(param_1 + 0x630)) * param_2 +
                          *(float *)(param_1 + 0x630));
      uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,local_a0);
      FUN_1423990b0(*(undefined8 *)(param_1 + 0x550),&local_b8,0,0);
      pfVar12 = (float *)FQuat::Slerp_NotNormalized(&local_98,param_1 + 0x650,param_1 + 0x660);
      local_c8 = 0;
      fVar2 = *pfVar12;
      fVar3 = pfVar12[1];
      fVar4 = pfVar12[2];
      fVar5 = pfVar12[3];
      local_a8 = CONCAT44(local_a8._4_4_,0x322bcc77);
      auVar18._0_4_ = fVar2 * fVar2 + fVar4 * fVar4;
      auVar18._4_4_ = fVar3 * fVar3 + fVar5 * fVar5;
      auVar18._8_4_ = fVar4 * fVar4 + fVar2 * fVar2;
      auVar18._12_4_ = fVar5 * fVar5 + fVar3 * fVar3;
      fVar24 = auVar18._4_4_ + auVar18._0_4_;
      fVar25 = auVar18._8_4_ + auVar18._4_4_;
      fVar26 = auVar18._12_4_ + auVar18._8_4_;
      fVar27 = auVar18._0_4_ + auVar18._12_4_;
      auVar19._4_4_ = fVar25;
      auVar19._0_4_ = fVar24;
      auVar19._8_4_ = fVar26;
      auVar19._12_4_ = fVar27;
      auVar19 = rsqrtps(auVar18,auVar19);
      fVar20 = auVar19._0_4_;
      fVar21 = auVar19._4_4_;
      fVar22 = auVar19._8_4_;
      fVar23 = auVar19._12_4_;
      fVar20 = (_DAT_146868490 - fVar20 * fVar20 * fVar24 * _DAT_146868490) * fVar20 + fVar20;
      fVar21 = (fRam0000000146868494 - fVar21 * fVar21 * fVar25 * fRam0000000146868494) * fVar21 +
               fVar21;
      fVar22 = (fRam0000000146868498 - fVar22 * fVar22 * fVar26 * fRam0000000146868498) * fVar22 +
               fVar22;
      fVar23 = (fRam000000014686849c - fVar23 * fVar23 * fVar27 * fRam000000014686849c) * fVar23 +
               fVar23;
      local_b8 = (undefined *)
                 CONCAT44(((uint)(((fRam0000000146868494 -
                                   fVar21 * fVar21 * fVar25 * fRam0000000146868494) * fVar21 +
                                  fVar21) * fVar3) ^ uRam0000000146868484) &
                          -(uint)(1e-08 <= fVar25) ^ uRam0000000146868484,
                          ((uint)(((_DAT_146868490 - fVar20 * fVar20 * fVar24 * _DAT_146868490) *
                                   fVar20 + fVar20) * fVar2) ^ _DAT_146868480) &
                          -(uint)(1e-08 <= fVar24) ^ _DAT_146868480);
      uStack_b0 = (undefined8 *)
                  CONCAT44(((uint)(((fRam000000014686849c -
                                    fVar23 * fVar23 * fVar27 * fRam000000014686849c) * fVar23 +
                                   fVar23) * fVar5) ^ uRam000000014686848c) &
                           -(uint)(1e-08 <= fVar27) ^ uRam000000014686848c,
                           ((uint)(((fRam0000000146868498 -
                                    fVar22 * fVar22 * fVar26 * fRam0000000146868498) * fVar22 +
                                   fVar22) * fVar4) ^ uRam0000000146868488) &
                           -(uint)(1e-08 <= fVar26) ^ uRam0000000146868488);
      FUN_142399b10(*(undefined8 *)(param_1 + 0x550),&local_b8,0,0);
    }
    else {
      local_c0 = 0;
      local_c8 = 0;
      FUN_1423b1dd0(lVar8,&local_88,param_2 * *(float *)(lVar8 + 0x7b8),1);
      local_a0 = fStack_70;
      local_c8 = 0;
      FUN_1423990b0(*(undefined8 *)(param_1 + 0x550),&local_b8,0,0);
      local_98 = local_88;
      uStack_94 = uStack_84;
      uStack_90 = uStack_80;
      uStack_8c = uStack_7c;
      puVar11 = (undefined8 *)FQuat::Rotator(&local_98,&local_a8);
      local_c8 = 0;
      local_b8 = (undefined *)*puVar11;
      uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,*(undefined4 *)(puVar11 + 1));
      FUN_142399b90(*(undefined8 *)(param_1 + 0x550),&local_b8,0,0);
    }
    if (*(char *)(param_1 + 0x128) == '\x03') {
      uVar17 = FUN_142875980(*(undefined8 *)(param_1 + 0x568));
      *(undefined4 *)(param_1 + 0x678) = uVar17;
    }
    if ((bVar9) && (0 < *(int *)(param_1 + 0x6c8))) {
      _DAT_146868a60 = *(undefined8 *)(param_1 + 0x550);
      local_b8 = &DAT_146868a60;
      uStack_b0 = &DAT_146868a68;
      uVar13 = FUN_1424a1490();
      FUN_14249f560(uVar13,&local_b8);
    }
  }
  return;
}



// FUNCTION 140b12360 FUN_140b12360 body=384 status=ok
// SIG undefined FUN_140b12360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b12360(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_14130e980();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x690,0);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined1 *)(param_1 + 0x603) = 0;
    *(undefined4 *)(param_1 + 0x62c) = 0;
    if ((*(longlong *)(param_1 + 0x550) != 0) && (*(longlong *)(param_1 + 0x5f8) != 0)) {
      uStack_74 = 0;
      uStack_70 = 0;
      local_78 = local_78 & 0xffffff00;
      local_68 = (ulonglong)local_78;
      local_60 = 0;
      lVar2 = FUN_1423912d0(*(longlong *)(param_1 + 0x550),local_48);
      local_80 = 0;
      local_88 = 0;
      local_78 = *(uint *)(lVar2 + 0x10);
      uStack_74 = *(undefined4 *)(lVar2 + 0x14);
      uStack_70 = *(undefined4 *)(lVar2 + 0x18);
      local_98 = param_1;
      local_90 = param_1;
      local_50 = uStack_70;
      FUN_142d40cc0(*(undefined8 *)(param_1 + 0x5f8),&local_78,&local_68,0);
    }
    FUN_140b108a0(param_1);
    FUN_140b0c810(param_1);
    if (*(char *)(param_1 + 0x604) == '\0') {
      FUN_14130e900(param_1);
      lVar2 = 0x6a0;
    }
    else {
      FUN_14130e940();
      lVar2 = 0x6b0;
    }
  }
  else {
    FUN_140b108a0(param_1);
    iVar1 = *(int *)(param_1 + 0x670);
    if (iVar1 == 1) {
      FUN_14130e900();
    }
    else {
      FUN_14130e940(param_1);
    }
    lVar2 = 0x6a0;
    if (iVar1 != 1) {
      lVar2 = 0x6b0;
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + lVar2,0);
  return;
}



// FUNCTION 140b12530 FUN_140b12530 body=139 status=ok
// SIG undefined FUN_140b12530(void)

void FUN_140b12530(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (((char)param_1[0x25] == '\x03') && ((*(byte *)((longlong)param_1 + 0x4fe) & 0x10) == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      *(byte *)((longlong)param_1 + 0x4fe) = *(byte *)((longlong)param_1 + 0x4fe) | 0x10;
      local_10 = 0;
      local_18 = param_1;
      uVar1 = FUN_142f768a0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
      FUN_142f690f0(lVar2,&local_18,*(byte *)((longlong)param_1 + 0x4fe) >> 5 & 1);
    }
  }
  return;
}



// FUNCTION 140b125c0 FUN_140b125c0 body=60 status=ok
// SIG undefined FUN_140b125c0(void)

void FUN_140b125c0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    lVar1 = FUN_140af9a90(param_1,*(undefined8 *)(param_1 + 0x568),3);
    if (lVar1 != 0) {
      FUN_140b0d310(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140b12600 FUN_140b12600 body=60 status=ok
// SIG undefined FUN_140b12600(void)

void FUN_140b12600(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    lVar1 = FUN_140af9a90(param_1,*(undefined8 *)(param_1 + 0x568),0);
    if (lVar1 != 0) {
      FUN_140b0d310(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140b12640 FUN_140b12640 body=60 status=ok
// SIG undefined FUN_140b12640(void)

void FUN_140b12640(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    lVar1 = FUN_140af9a90(param_1,*(undefined8 *)(param_1 + 0x568),1);
    if (lVar1 != 0) {
      FUN_140b0d310(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140b12680 FUN_140b12680 body=60 status=ok
// SIG undefined FUN_140b12680(void)

void FUN_140b12680(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    lVar1 = FUN_140af9a90(param_1,*(undefined8 *)(param_1 + 0x568),2);
    if (lVar1 != 0) {
      FUN_140b0d310(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140b126c0 FUN_140b126c0 body=72 status=ok
// SIG undefined FUN_140b126c0(void)

void FUN_140b126c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0x570) == '\0') && (lVar1 = *(longlong *)(param_1 + 0x568), lVar1 != 0))
     && (*(longlong *)(lVar1 + 8) != 0)) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0xc90);
    }
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 0x570) = 1;
      FUN_140e61510(lVar2,*(undefined8 *)(lVar1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 140b12730 FUN_140b12730 body=544 status=ok
// SIG undefined FUN_140b12730(void)

void FUN_140b12730(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffb8;
  uint uVar6;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((*(int *)(param_1 + 0x5c0) != 1) || (*(int *)(*(longlong *)(param_1 + 0x5b8) + 0x18) < 1)) {
    if (*(longlong *)(param_1 + 0x598) == 0) {
      return;
    }
    FUN_140ee2cf0();
    if (*(longlong **)(param_1 + 0x5a0) == (longlong *)0x0) {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x5a0) + 0x280))();
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    lVar2 = FWeakObjectPtr::Get();
    lVar3 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x5a0));
    if (lVar3 == lVar2) {
      lVar2 = *(longlong *)(param_1 + 0x5a0);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x5b8) + 0x18);
      goto LAB_140b12794;
    }
  }
  if (*(longlong *)(param_1 + 0x598) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x558) == 0) {
    return;
  }
  lVar4 = FUN_1413411f0();
  lVar2 = *(longlong *)(param_1 + 0x558);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  while (lVar3 != lVar4) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return;
    }
  }
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FUN_140ee2cf0(*(undefined8 *)(param_1 + 0x598));
  }
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x558) != 0) {
    lVar4 = FUN_1413411f0();
    for (lVar3 = *(longlong *)(param_1 + 0x558);
        (lVar2 = 0, lVar3 != 0 && (lVar2 = *(longlong *)(param_1 + 0x558), lVar3 != lVar4));
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
    }
  }
  uVar5 = GetTransientPackage();
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar2 = FUN_1417985e0(lVar2,uVar5,0,0,(ulonglong)uVar6 << 0x20,0,0,0,0);
  *(longlong *)(param_1 + 0x5a0) = lVar2;
  if (lVar2 == 0) {
    return;
  }
  uVar5 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x5b8));
  FUN_140f0b810(*(undefined8 *)(param_1 + 0x598),uVar5,*(undefined8 *)(param_1 + 0x5a0),
                *(undefined8 *)(param_1 + 0x168),0);
  lVar2 = *(longlong *)(param_1 + 0x5a0);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x5b8) + 0x18);
LAB_140b12794:
  FUN_140f53660(lVar2,uVar1);
  return;
}



// FUNCTION 140b12950 FUN_140b12950 body=102 status=ok
// SIG undefined FUN_140b12950(void)

void FUN_140b12950(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  bVar1 = *(char *)((longlong)param_1 + 0x4fb) - 1;
  if ((char)param_1[0xb3] == '\0') {
    if (1 < bVar1) {
      return;
    }
    if ((int)param_1[0xb5] < 1) {
      return;
    }
    uVar2 = 1;
  }
  else {
    if ((bVar1 < 2) && (0 < (int)param_1[0xb5])) {
      return;
    }
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0xb3) = uVar2;
  (**(code **)(*param_1 + 0x600))();
  FUN_1414ea330(param_1);
  return;
}



// FUNCTION 140b129c0 FUN_140b129c0 body=274 status=ok
// SIG undefined FUN_140b129c0(void)

void FUN_140b129c0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 0x550);
  if (cVar1 != param_2) {
    *(char *)(param_1 + 0x550) = param_2;
    TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x4f0);
    cVar1 = *(char *)(param_1 + 0x550);
  }
  if (cVar1 == '\x01') {
    FUN_140ae2e10(param_1,DAT_146868960);
    return;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      FUN_140ae2e10(param_1,0xcc);
      return;
    }
    lVar2 = FUN_140afafe0(param_1);
    if (lVar2 != 0) {
      cVar1 = FUN_140ad80f0(param_1,*(undefined8 *)(lVar2 + 0x7a8));
      if (cVar1 != '\0') {
LAB_140b12a87:
        FUN_140ae2e10(param_1,*(undefined8 *)(lVar2 + 0x7a8));
        return;
      }
    }
    FUN_140ae2e10(param_1,DAT_146868970);
    return;
  }
  lVar2 = FUN_140afb070(param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_140ad80f0(param_1,*(undefined8 *)(lVar2 + 0x7a8));
    if (cVar1 != '\0') goto LAB_140b12a87;
  }
  FUN_140ae2e10(param_1,DAT_146868968);
  return;
}



// FUNCTION 140b12ae0 FUN_140b12ae0 body=193 status=ok
// SIG undefined FUN_140b12ae0(void)

ulonglong FUN_140b12ae0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_2 != 0) {
    if (*(ulonglong *)(param_1 + 0x6e0) == DAT_1468c21b0) {
      plVar4 = *(longlong **)(param_1 + 0x6d0);
      in_RAX = (ulonglong)*(int *)(param_1 + 0x6d8);
      plVar1 = plVar4 + in_RAX;
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == param_2) {
          return CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x6d8) >> 8),1);
        }
      }
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x4d0);
      in_RAX = DAT_1468c21b0;
      if (lVar2 != 0) {
        plVar4 = *(longlong **)(param_1 + 0x6c0);
        plVar1 = plVar4 + *(int *)(param_1 + 0x6c8);
        if (plVar4 != plVar1) {
          do {
            if (*plVar4 == param_2) {
              local_18 = *(undefined4 *)(lVar2 + 0x220);
              local_14 = *(undefined4 *)(lVar2 + 0x224);
              local_10 = *(undefined4 *)(lVar2 + 0x228);
              uVar3 = FUN_140aff840(param_1,&local_18);
              return uVar3;
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
          return DAT_1468c21b0 & 0xffffffffffffff00;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b12bb0 FUN_140b12bb0 body=214 status=ok
// SIG undefined FUN_140b12bb0(void)

void FUN_140b12bb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x550) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x554);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
      lVar2 = param_1 + 0x5d8;
    }
    else {
      lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
    }
    iVar1 = *(int *)(param_1 + 0x55c);
    if ((iVar1 < 0) || (*(int *)(lVar2 + 0x38) <= iVar1)) {
      lVar3 = *(longlong *)(lVar2 + 0x30);
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 0x48;
    }
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (*(char *)(*(longlong *)(lVar3 + 0x30) + 0x7b0) != '\0')) {
      FUN_140b129c0(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),2));
      FUN_140b0d6a0(param_1,0);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x550) == '\x02') {
    lVar2 = FUN_140afaf60(param_1);
    if ((*(longlong *)(lVar2 + 0x48) != 0) &&
       (*(char *)(*(longlong *)(lVar2 + 0x48) + 0x7b0) != '\0')) {
      FUN_140b129c0(param_1,3);
      FUN_140b0d430(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140b12c90 FUN_140b12c90 body=169 status=ok
// SIG undefined FUN_140b12c90(void)

void FUN_140b12c90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x550);
  if (cVar1 == '\x01') {
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      FUN_14145ff60(*(longlong *)(param_1 + 0x4d8),0);
      return;
    }
  }
  else {
    if (cVar1 == '\x02') {
      plVar2 = (longlong *)FUN_140afb070();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x980))(plVar2,0);
      }
      FUN_140b129c0(param_1,1);
      return;
    }
    if (cVar1 == '\x03') {
      plVar2 = (longlong *)FUN_140afafe0();
      if (plVar2 != (longlong *)0x0) {
        FUN_140ae2260(plVar2);
        (**(code **)(*plVar2 + 0x568))(plVar2,0,0);
      }
      FUN_140b129c0(param_1,2);
      return;
    }
  }
  return;
}



// FUNCTION 140b12d60 FUN_140b12d60 body=209 status=ok
// SIG undefined FUN_140b12d60(void)

undefined8 *
FUN_140b12d60(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14419ca48;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_14419ca90;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140b12e40 FUN_140b12e40 body=556 status=ok
// SIG undefined FUN_140b12e40(void)

void FUN_140b12e40(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_140b3d7a0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_140b12f2d;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140b12f2d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140b12ff3;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140b12ff3:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = (longlong)(int)uStack_5c * 0x40 + *(longlong *)CONCAT44(uStack_74,local_78);
    lStack_90 = local_98 + 8;
    FUN_140b13590(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 140b13070 FUN_140b13070 body=524 status=ok
// SIG undefined FUN_140b13070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140b13070(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_68 [2];
  ulonglong *local_60;
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_68);
  uVar3 = _DAT_1468b5d90;
  bVar11 = false;
  *param_2 = local_68[0];
  uVar4 = DAT_1468b5d98;
  uStack_40 = DAT_1468b5d98;
  local_58 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_4c = 0;
  uVar1 = *(ulonglong *)*param_3;
  *local_60 = uVar1;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined4 *)(local_60 + 1) = 0;
  *(uint *)((longlong)local_60 + 0xc) = uStack_54;
  *(undefined4 *)(local_60 + 2) = 0;
  *(undefined4 *)((longlong)local_60 + 0x14) = 0;
  auVar2._8_4_ = uVar4;
  auVar2._0_8_ = uVar3;
  auVar2._12_4_ = uStack_3c;
  *(undefined1 (*) [16])(local_60 + 3) = auVar2;
  *(undefined4 *)(local_60 + 5) = 0;
  *(undefined4 *)((longlong)local_60 + 0x2c) = 0;
  *(undefined4 *)(local_60 + 6) = 0;
  *(undefined4 *)((longlong)local_60 + 0x34) = uStack_2c;
  *(undefined4 *)(local_60 + 7) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar1);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x40 + *param_1),local_60,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_68[0],1);
      *param_2 = local_res8[0];
      goto LAB_140b13252;
    }
  }
  cVar5 = TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*local_60 >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_60 + 0x3c) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_60 + 7) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_140b13252:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140b13280 FUN_140b13280 body=775 status=ok
// SIG undefined FUN_140b13280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140b13280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 uVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong *_Src;
  undefined4 uVar19;
  bool bVar20;
  int local_res8 [2];
  int local_res10;
  undefined2 uStack_5a;
  undefined4 uStack_44;
  
  uVar19 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar11 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  lVar9 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar10 + lVar9);
  *puVar17 = *puVar17 | 1 << ((byte)iVar11 & 0x1f);
  uVar7 = DAT_1468b5d98;
  uVar6 = _DAT_1468b5d90;
  lVar13 = (longlong)iVar11 * 0x40;
  _Src = (ulonglong *)(*param_1 + lVar13);
  uVar3 = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[2] = CONCAT26(uStack_5a,0x100000000);
  *_Src = uVar3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  *(undefined1 (*) [16])(_Src + 3) = auVar5 << 0x40;
  *(undefined4 *)(_Src + 5) = uVar7;
  *(undefined4 *)((longlong)_Src + 0x2c) = uStack_44;
  *(undefined4 *)(_Src + 6) = 0;
  *(undefined4 *)((longlong)_Src + 0x34) = 0;
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    iVar1 = local_res8[0];
    lVar16 = (longlong)local_res8[0];
    bVar20 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar20);
    if (bVar20) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar16 * 0x40 + *param_1),_Src,0x38);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar11;
      }
      lVar16 = *param_1;
      *(undefined4 *)(lVar13 + lVar16) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar19 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + lVar16) = uVar19;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar1;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar10 + lVar9);
      *puVar17 = *puVar17 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar15 = (undefined1)local_res8[0];
      goto LAB_140b1355d;
    }
  }
  uVar15 = 0;
  cVar8 = TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar8 == '\0') {
    iVar11 = (int)(*_Src >> 4);
    uVar14 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar18 = -(iVar11 + uVar14) ^ uVar14 >> 0xd;
    uVar12 = (iVar11 - uVar14) - uVar18 ^ uVar18 >> 0xc;
    uVar14 = (uVar14 - uVar12) - uVar18 ^ uVar12 << 0x10;
    uVar18 = (uVar18 - uVar14) - uVar12 ^ uVar14 >> 5;
    uVar12 = (uVar12 - uVar14) - uVar18 ^ uVar18 >> 3;
    uVar14 = (uVar14 - uVar12) - uVar18 ^ uVar12 << 10;
    uVar12 = ((uVar18 - uVar14) - uVar12 ^ uVar14 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_140b1355d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar15;
  }
  return param_2;
}



// FUNCTION 140b13590 FUN_140b13590 body=458 status=ok
// SIG undefined FUN_140b13590(void)

int * FUN_140b13590(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  bVar12 = false;
  puVar2 = (ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  uVar5 = puVar1[1];
  local_30[1] = *puVar1;
  local_30[2] = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar5 = puVar1[3];
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(int *)(local_30 + 3) = (int)puVar1[2];
  *(undefined4 *)((longlong)local_30 + 0x1c) = uVar3;
  *(int *)(local_30 + 4) = (int)uVar5;
  *(undefined4 *)((longlong)local_30 + 0x24) = uVar4;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar5 = puVar1[5];
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(int *)(local_30 + 5) = (int)puVar1[4];
  *(undefined4 *)((longlong)local_30 + 0x2c) = uVar3;
  *(int *)(local_30 + 6) = (int)uVar5;
  *(undefined4 *)((longlong)local_30 + 0x34) = uVar4;
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x40 + *param_1),local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_140b13732;
    }
  }
  cVar6 = TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*local_30 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar11 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar8 = (iVar10 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x3c) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140b13732:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140b13760 FUN_140b13760 body=1073 status=ok
// SIG undefined FUN_140b13760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b13760(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  longlong **pplStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x28) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_b4 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_98 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_b0 = (uint *)(param_1 + 0x2c0);
  local_8c = 0;
  iVar13 = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar5 = local_b8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar5;
      if (bVar3) goto LAB_140b1387a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_b4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (iStack_a0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_140b1387a:
      uStack_a4 = uVar1;
    }
  }
  local_a8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = (longlong **)CONCAT44(uStack_9c,iStack_a0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_80 = local_b8;
  uStack_7c = uStack_b4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140b1393d;
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
LAB_140b1393d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_78 = puStack_b0;
  local_60 = local_c0;
  puStack_50 = puStack_b0;
  pplStack_40 = local_68;
  local_88 = local_c0;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while( true ) {
    if ((uStack_6c == uVar12) && (local_78 == puStack_b0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_143036a00();
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
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
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
        local_90 = iVar13 + 1;
        if (iVar5 < local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
          plVar11 = local_98;
          iVar5 = local_8c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_90;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    pplStack_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140b13760(*(longlong *)(*plVar14 + 0x2d8),&local_60,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) < (int)local_38 + iVar5) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x28);
            }
            _Src = &local_60;
            if (pplStack_40 != (longlong **)0x0) {
              _Src = pplStack_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140b13ba0 HeapSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_> body=402 status=ok
// SIG undefined HeapSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>(void)

void AlgoImpl::
     HeapSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar3 = iVar6;
    iVar11 = iVar5;
joined_r0x000140b13be6:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar8 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_140b18800(param_4,param_1[(longlong)iVar6 + 2],param_1[iVar8]);
          if (cVar4 != '\0') {
            iVar8 = iVar6;
          }
          iVar8 = iVar8 + 1;
        }
        lVar12 = (longlong)iVar8;
        cVar4 = FUN_140b18800(param_4,param_1[iVar5],param_1[iVar8]);
        if (cVar4 != '\0') {
          uVar1 = param_1[iVar5];
          param_1[iVar5] = param_1[lVar12];
          iVar6 = iVar8 * 2 + 1;
          param_1[lVar12] = uVar1;
          iVar5 = iVar8;
          goto joined_r0x000140b13be6;
        }
      }
      iVar6 = iVar3 + -2;
      iVar5 = iVar11 + -1;
      iVar3 = iVar6;
      iVar11 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  lVar12 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar7 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = uVar1;
      if (1 < param_2) {
        do {
          iVar5 = (int)uVar7;
          uVar2 = iVar5 * 2;
          uVar9 = uVar2 + 1;
          if ((int)(uVar2 + 2) < param_2) {
            cVar4 = FUN_140b18800(param_4,param_1[(longlong)(int)uVar2 + 2],param_1[(int)uVar9]);
            if (cVar4 != '\0') {
              uVar9 = uVar2;
            }
            uVar9 = uVar9 + 1;
          }
          uVar10 = (ulonglong)uVar9;
          cVar4 = FUN_140b18800(param_4,param_1[iVar5],param_1[(int)uVar9]);
          if (cVar4 == '\0') break;
          uVar1 = param_1[iVar5];
          param_1[iVar5] = param_1[(int)uVar9];
          uVar7 = uVar10 & 0xffffffff;
          param_1[(int)uVar9] = uVar1;
        } while ((int)uVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar12 = lVar12 + -1;
    } while (0 < lVar12);
  }
  return;
}



// FUNCTION 140b13d40 FUN_140b13d40 body=649 status=ok
// SIG undefined FUN_140b13d40(void)

void FUN_140b13d40(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  
  iVar15 = (param_2 + -2) / 2;
  if (-1 < iVar15) {
    iVar16 = iVar15 * 2 + 1;
    iVar1 = iVar16;
    iVar20 = iVar15;
joined_r0x000140b13d86:
    do {
      if (iVar16 < param_2) {
        iVar16 = iVar15 * 2;
        iVar17 = iVar16 + 1;
        if (iVar16 + 2 < param_2) {
          cVar14 = FUN_140b18780(**(undefined8 **)*param_4,param_1[((longlong)iVar16 + 2) * 8],
                                 param_1[(longlong)iVar17 * 8]);
          if (cVar14 != '\0') {
            iVar17 = iVar16;
          }
          iVar17 = iVar17 + 1;
        }
        puVar21 = param_1 + (longlong)iVar17 * 8;
        puVar18 = param_1 + (longlong)iVar15 * 8;
        cVar14 = FUN_140b18780(**(undefined8 **)*param_4,*puVar18,*puVar21);
        if (cVar14 != '\0') {
          if (puVar18 != puVar21) {
            uVar5 = puVar21[1];
            uVar6 = *puVar18;
            uVar7 = puVar18[1];
            uVar8 = puVar18[2];
            uVar9 = puVar18[3];
            uVar10 = puVar18[4];
            uVar11 = puVar18[5];
            uVar12 = puVar18[6];
            uVar13 = puVar18[7];
            *puVar18 = *puVar21;
            puVar18[1] = uVar5;
            uVar5 = puVar21[3];
            puVar18[2] = puVar21[2];
            puVar18[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar21 + 0x24);
            uVar3 = *(undefined4 *)(puVar21 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar21 + 0x2c);
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar21 + 4);
            *(undefined4 *)((longlong)puVar18 + 0x24) = uVar2;
            *(undefined4 *)(puVar18 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar4;
            uVar5 = puVar21[7];
            puVar18[6] = puVar21[6];
            puVar18[7] = uVar5;
            *puVar21 = uVar6;
            puVar21[1] = uVar7;
            puVar21[2] = uVar8;
            puVar21[3] = uVar9;
            puVar21[4] = uVar10;
            puVar21[5] = uVar11;
            puVar21[6] = uVar12;
            puVar21[7] = uVar13;
          }
          iVar16 = iVar17 * 2 + 1;
          iVar15 = iVar17;
          goto joined_r0x000140b13d86;
        }
      }
      iVar16 = iVar1 + -2;
      iVar15 = iVar20 + -1;
      iVar1 = iVar16;
      iVar20 = iVar15;
    } while (-1 < iVar15);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar21) {
        uVar5 = puVar21[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        uVar12 = param_1[6];
        uVar13 = param_1[7];
        *param_1 = *puVar21;
        param_1[1] = uVar5;
        uVar5 = puVar21[3];
        param_1[2] = puVar21[2];
        param_1[3] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar21 + 0x24);
        uVar3 = *(undefined4 *)(puVar21 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar21 + 0x2c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar21 + 4);
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
        *(undefined4 *)(param_1 + 5) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
        uVar5 = puVar21[7];
        param_1[6] = puVar21[6];
        param_1[7] = uVar5;
        *puVar21 = uVar6;
        puVar21[1] = uVar7;
        puVar21[2] = uVar8;
        puVar21[3] = uVar9;
        puVar21[4] = uVar10;
        puVar21[5] = uVar11;
        puVar21[6] = uVar12;
        puVar21[7] = uVar13;
      }
      iVar15 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar15 * 2;
          iVar16 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar14 = FUN_140b18780(**(undefined8 **)*param_4,param_1[((longlong)iVar1 + 2) * 8],
                                   param_1[(longlong)iVar16 * 8]);
            if (cVar14 != '\0') {
              iVar16 = iVar1;
            }
            iVar16 = iVar16 + 1;
          }
          puVar18 = param_1 + (longlong)iVar16 * 8;
          puVar19 = param_1 + (longlong)iVar15 * 8;
          cVar14 = FUN_140b18780(**(undefined8 **)*param_4,*puVar19,*puVar18);
          if (cVar14 == '\0') break;
          if (puVar19 != puVar18) {
            uVar5 = puVar18[1];
            uVar6 = *puVar19;
            uVar7 = puVar19[1];
            uVar8 = puVar19[2];
            uVar9 = puVar19[3];
            uVar10 = puVar19[4];
            uVar11 = puVar19[5];
            uVar12 = puVar19[6];
            uVar13 = puVar19[7];
            *puVar19 = *puVar18;
            puVar19[1] = uVar5;
            uVar5 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar18 + 0x24);
            uVar3 = *(undefined4 *)(puVar18 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar18 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar18 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar4;
            uVar5 = puVar18[7];
            puVar19[6] = puVar18[6];
            puVar19[7] = uVar5;
            *puVar18 = uVar6;
            puVar18[1] = uVar7;
            puVar18[2] = uVar8;
            puVar18[3] = uVar9;
            puVar18[4] = uVar10;
            puVar18[5] = uVar11;
            puVar18[6] = uVar12;
            puVar18[7] = uVar13;
          }
          iVar15 = iVar16;
        } while (iVar16 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140b13fd0 IntroSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_> body=663 status=ok
// SIG undefined IntroSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
      puVar7 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar7 >> 3) + 1;
      puVar9 = puVar7;
      iVar4 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140b140b0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar5 = puVar10 + 1;
          uVar1 = puVar9[lVar3 >> 1];
          puVar9[lVar3 >> 1] = *puVar9;
          *puVar9 = uVar1;
          puVar7 = puVar9;
LAB_140b140e0:
          puVar7 = puVar7 + 1;
          if (puVar7 <= puVar10) goto code_r0x000140b140e9;
          goto LAB_140b14100;
        }
        for (; puVar5 = puVar9, puVar7 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar7 = puVar7 + 1, puVar7 <= puVar10) {
            cVar2 = FUN_140b18800(param_4,*puVar5,*puVar7);
            if (cVar2 != '\0') {
              puVar5 = puVar7;
            }
          }
          uVar1 = *puVar5;
          *puVar5 = *puVar10;
          *puVar10 = uVar1;
        }
        goto LAB_140b141c7;
      }
LAB_140b141b8:
      HeapSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>
                (puVar7,lVar3,param_3,param_4);
LAB_140b141c7:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000140b140e9:
  cVar2 = FUN_140b18800(param_4,*puVar9,*puVar7);
  if (cVar2 == '\0') goto LAB_140b140e0;
LAB_140b14100:
  do {
    puVar6 = puVar5;
    puVar5 = puVar6 + -1;
    if (puVar5 <= puVar9) break;
    cVar2 = FUN_140b18800(param_4,*puVar5,*puVar9);
  } while (cVar2 == '\0');
  if (puVar7 <= puVar5) {
    uVar1 = *puVar7;
    *puVar7 = *puVar5;
    *puVar5 = uVar1;
    goto LAB_140b140e0;
  }
  uVar1 = *puVar9;
  iVar4 = iVar4 + -1;
  *puVar9 = *puVar5;
  *puVar5 = uVar1;
  if ((longlong)((longlong)puVar5 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar7 & 0xfffffffffffffff8U)) {
    if (puVar7 < puVar10) {
      *plVar8 = (longlong)puVar7;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar4;
      plVar8 = plVar8 + 3;
    }
    if (puVar5 <= puVar9 + 1) goto LAB_140b141c7;
    puVar10 = puVar6 + -2;
    puVar7 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar5) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar6 + -2);
      *(int *)(plVar8 + 2) = iVar4;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar7) goto LAB_140b141c7;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar7 >> 3) + 1;
  puVar9 = puVar7;
  if (iVar4 == 0) goto LAB_140b141b8;
  goto LAB_140b140b0;
}



// FUNCTION 140b14270 FUN_140b14270 body=934 status=ok
// SIG undefined FUN_140b14270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b14270(longlong param_1,ulonglong param_2)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
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
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_318 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      plVar4 = (longlong *)*plVar16;
      plVar14 = (longlong *)plVar16[1];
      local_338 = (int)plVar16[2];
      lVar9 = ((longlong)plVar14 - (longlong)plVar4 >> 3) + 1;
      plVar6 = plVar4;
      if (local_338 != 0) {
LAB_140b14340:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          lVar2 = plVar6[lVar9 >> 1];
          plVar6[lVar9 >> 1] = *plVar6;
          plVar10 = plVar14 + 1;
          *plVar6 = lVar2;
          plVar4 = plVar6;
LAB_140b14370:
          plVar4 = plVar4 + 1;
          if (plVar4 <= plVar14) goto code_r0x000140b14379;
          goto LAB_140b14390;
        }
        for (; plVar10 = plVar6, plVar4 = plVar6, plVar6 < plVar14; plVar14 = plVar14 + -1) {
          while (plVar4 = plVar4 + 1, plVar4 <= plVar14) {
            if (*(float *)(*plVar10 + 0x48) < *(float *)(*plVar4 + 0x48)) {
              plVar10 = plVar4;
            }
          }
          lVar9 = *plVar10;
          *plVar10 = *plVar14;
          *plVar14 = lVar9;
        }
        goto LAB_140b14580;
      }
LAB_140b14449:
      iVar15 = (int)lVar9;
      iVar3 = (iVar15 + -2) / 2;
      if (-1 < iVar3) {
        iVar5 = iVar3 * 2 + 1;
        iVar8 = iVar5;
        iVar7 = iVar3;
joined_r0x000140b14466:
        do {
          if (iVar5 < iVar15) {
            iVar12 = iVar3 * 2 + 1;
            iVar5 = iVar3 * 2 + 2;
            iVar13 = iVar12;
            if ((iVar5 < iVar15) &&
               (iVar13 = iVar5,
               *(float *)(plVar4[iVar5] + 0x48) <= *(float *)(plVar4[iVar12] + 0x48) &&
               *(float *)(plVar4[iVar12] + 0x48) != *(float *)(plVar4[iVar5] + 0x48))) {
              iVar13 = iVar12;
            }
            lVar9 = plVar4[iVar3];
            fVar17 = *(float *)(plVar4[iVar13] + 0x48);
            pfVar1 = (float *)(lVar9 + 0x48);
            if (*pfVar1 <= fVar17 && fVar17 != *pfVar1) {
              plVar4[iVar3] = plVar4[iVar13];
              iVar5 = iVar13 * 2 + 1;
              plVar4[iVar13] = lVar9;
              iVar3 = iVar13;
              goto joined_r0x000140b14466;
            }
          }
          iVar5 = iVar8 + -2;
          iVar3 = iVar7 + -1;
          iVar8 = iVar5;
          iVar7 = iVar3;
        } while (-1 < iVar3);
      }
      iVar15 = iVar15 + -1;
      lVar9 = (longlong)iVar15;
      if (0 < iVar15) {
        do {
          iVar3 = 0;
          lVar2 = *plVar4;
          *plVar4 = plVar4[lVar9];
          plVar4[lVar9] = lVar2;
          if (1 < iVar15) {
            do {
              iVar7 = iVar3 * 2 + 1;
              iVar5 = iVar3 * 2 + 2;
              iVar8 = iVar7;
              if ((iVar5 < iVar15) &&
                 (iVar8 = iVar5,
                 *(float *)(plVar4[iVar5] + 0x48) <= *(float *)(plVar4[iVar7] + 0x48) &&
                 *(float *)(plVar4[iVar7] + 0x48) != *(float *)(plVar4[iVar5] + 0x48))) {
                iVar8 = iVar7;
              }
              lVar2 = plVar4[iVar3];
              fVar17 = *(float *)(plVar4[iVar8] + 0x48);
              pfVar1 = (float *)(lVar2 + 0x48);
              if (fVar17 < *pfVar1 || fVar17 == *pfVar1) break;
              plVar4[iVar3] = plVar4[iVar8];
              plVar4[iVar8] = lVar2;
              iVar3 = iVar8;
            } while (iVar8 * 2 + 1 < iVar15);
          }
          iVar15 = iVar15 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_140b14580:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x000140b14379:
  if (*(float *)(*plVar4 + 0x48) < *(float *)(*plVar6 + 0x48) ||
      *(float *)(*plVar4 + 0x48) == *(float *)(*plVar6 + 0x48)) goto LAB_140b14370;
LAB_140b14390:
  do {
    plVar11 = plVar10;
    lVar9 = plVar11[-1];
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar6) break;
  } while (*(float *)(*plVar6 + 0x48) < *(float *)(lVar9 + 0x48) ||
           *(float *)(*plVar6 + 0x48) == *(float *)(lVar9 + 0x48));
  if (plVar4 <= plVar10) {
    lVar2 = *plVar4;
    *plVar4 = lVar9;
    *plVar10 = lVar2;
    goto LAB_140b14370;
  }
  lVar2 = *plVar6;
  local_338 = local_338 + -1;
  *plVar6 = lVar9;
  *plVar10 = lVar2;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar14 - (longlong)plVar4 & 0xfffffffffffffff8U)) {
    if (plVar4 < plVar14) {
      *plVar16 = (longlong)plVar4;
      plVar16[1] = (longlong)plVar14;
      *(int *)(plVar16 + 2) = local_338;
      plVar16 = plVar16 + 3;
    }
    if (plVar10 <= plVar6 + 1) goto LAB_140b14580;
    plVar14 = plVar11 + -2;
    plVar4 = plVar6;
  }
  else {
    if (plVar6 + 1 < plVar10) {
      *plVar16 = (longlong)plVar6;
      plVar16[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar16 + 2) = local_338;
      plVar16 = plVar16 + 3;
    }
    if (plVar14 <= plVar4) goto LAB_140b14580;
  }
  lVar9 = ((longlong)plVar14 - (longlong)plVar4 >> 3) + 1;
  plVar6 = plVar4;
  if (local_338 == 0) goto LAB_140b14449;
  goto LAB_140b14340;
}



// FUNCTION 140b14620 FUN_140b14620 body=948 status=ok
// SIG undefined FUN_140b14620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b14620(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x40 + -0x40 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar23);
    local_338 = (undefined4)(longlong)(fVar23 + fVar23);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar17 = &local_348;
    do {
      puVar22 = (undefined8 *)*plVar17;
      puVar15 = (undefined8 *)plVar17[1];
      local_358 = plVar17[2];
      lVar14 = ((longlong)puVar15 - (longlong)puVar22 >> 6) + 1;
      puVar21 = puVar22;
      iVar18 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140b14700:
        if (8 < lVar14) {
          puVar22 = puVar21 + (lVar14 / 2) * 8;
          if (puVar22 != puVar21) {
            uVar1 = puVar21[1];
            uVar5 = *puVar22;
            uVar6 = puVar22[1];
            uVar7 = puVar22[2];
            uVar8 = puVar22[3];
            uVar9 = puVar22[4];
            uVar10 = puVar22[5];
            uVar11 = puVar22[6];
            uVar12 = puVar22[7];
            *puVar22 = *puVar21;
            puVar22[1] = uVar1;
            uVar1 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar21 + 0x24);
            uVar3 = *(undefined4 *)(puVar21 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar21 + 0x2c);
            *(undefined4 *)(puVar22 + 4) = *(undefined4 *)(puVar21 + 4);
            *(undefined4 *)((longlong)puVar22 + 0x24) = uVar2;
            *(undefined4 *)(puVar22 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar22 + 0x2c) = uVar4;
            uVar1 = puVar21[7];
            puVar22[6] = puVar21[6];
            puVar22[7] = uVar1;
            *puVar21 = uVar5;
            puVar21[1] = uVar6;
            puVar21[2] = uVar7;
            puVar21[3] = uVar8;
            puVar21[4] = uVar9;
            puVar21[5] = uVar10;
            puVar21[6] = uVar11;
            puVar21[7] = uVar12;
          }
          puVar19 = puVar15 + 8;
          puVar22 = puVar21;
LAB_140b14770:
          puVar16 = puVar22;
          puVar22 = puVar16 + 8;
          if (puVar22 <= puVar15) goto code_r0x000140b14779;
          goto LAB_140b14791;
        }
        for (; puVar19 = puVar21, puVar22 = puVar21, puVar21 < puVar15; puVar15 = puVar15 + -8) {
          while (puVar22 = puVar22 + 8, puVar22 <= puVar15) {
            cVar13 = FUN_140b18780(**(undefined8 **)*param_4,*puVar19,*puVar22);
            if (cVar13 != '\0') {
              puVar19 = puVar22;
            }
          }
          if (puVar19 != puVar15) {
            uVar1 = puVar15[1];
            uVar5 = *puVar19;
            uVar6 = puVar19[1];
            uVar7 = puVar19[2];
            uVar8 = puVar19[3];
            uVar9 = puVar19[4];
            uVar10 = puVar19[5];
            uVar11 = puVar19[6];
            uVar12 = puVar19[7];
            *puVar19 = *puVar15;
            puVar19[1] = uVar1;
            uVar1 = puVar15[3];
            puVar19[2] = puVar15[2];
            puVar19[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar15 + 0x24);
            uVar3 = *(undefined4 *)(puVar15 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar15 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar15 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar4;
            uVar1 = puVar15[7];
            puVar19[6] = puVar15[6];
            puVar19[7] = uVar1;
            *puVar15 = uVar5;
            puVar15[1] = uVar6;
            puVar15[2] = uVar7;
            puVar15[3] = uVar8;
            puVar15[4] = uVar9;
            puVar15[5] = uVar10;
            puVar15[6] = uVar11;
            puVar15[7] = uVar12;
          }
        }
        goto LAB_140b148e5;
      }
LAB_140b148d6:
      FUN_140b13d40(puVar22,lVar14,param_3,param_4);
LAB_140b148e5:
      plVar17 = plVar17 + -3;
    } while (&local_348 <= plVar17);
  }
  return;
code_r0x000140b14779:
  cVar13 = FUN_140b18780(**(undefined8 **)*param_4,*puVar21,*puVar22);
  if (cVar13 == '\0') goto LAB_140b14770;
LAB_140b14791:
  do {
    puVar20 = puVar19;
    puVar19 = puVar20 + -8;
    if (puVar19 <= puVar21) break;
    cVar13 = FUN_140b18780(**(undefined8 **)*param_4,*puVar19,*puVar21);
  } while (cVar13 == '\0');
  if (puVar22 <= puVar19) {
    if (puVar22 != puVar19) {
      uVar1 = puVar20[-7];
      uVar5 = *puVar22;
      uVar6 = puVar16[9];
      uVar7 = puVar16[10];
      uVar8 = puVar16[0xb];
      uVar9 = puVar16[0xc];
      uVar10 = puVar16[0xd];
      uVar11 = puVar16[0xe];
      uVar12 = puVar16[0xf];
      *puVar22 = *puVar19;
      puVar16[9] = uVar1;
      uVar1 = puVar20[-5];
      puVar16[10] = puVar20[-6];
      puVar16[0xb] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar20 + -0x1c);
      uVar3 = *(undefined4 *)(puVar20 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar20 + -0x14);
      *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar20 + -4);
      *(undefined4 *)((longlong)puVar16 + 100) = uVar2;
      *(undefined4 *)(puVar16 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar16 + 0x6c) = uVar4;
      uVar1 = puVar20[-1];
      puVar16[0xe] = puVar20[-2];
      puVar16[0xf] = uVar1;
      *puVar19 = uVar5;
      puVar20[-7] = uVar6;
      puVar20[-6] = uVar7;
      puVar20[-5] = uVar8;
      puVar20[-4] = uVar9;
      puVar20[-3] = uVar10;
      puVar20[-2] = uVar11;
      puVar20[-1] = uVar12;
    }
    goto LAB_140b14770;
  }
  if (puVar21 != puVar19) {
    uVar1 = puVar20[-7];
    uVar5 = *puVar21;
    uVar6 = puVar21[1];
    uVar7 = puVar21[2];
    uVar8 = puVar21[3];
    uVar9 = puVar21[4];
    uVar10 = puVar21[5];
    uVar11 = puVar21[6];
    uVar12 = puVar21[7];
    *puVar21 = *puVar19;
    puVar21[1] = uVar1;
    uVar1 = puVar20[-5];
    puVar21[2] = puVar20[-6];
    puVar21[3] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar20 + -0x1c);
    uVar3 = *(undefined4 *)(puVar20 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar20 + -0x14);
    *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(puVar20 + -4);
    *(undefined4 *)((longlong)puVar21 + 0x24) = uVar2;
    *(undefined4 *)(puVar21 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar4;
    uVar1 = puVar20[-1];
    puVar21[6] = puVar20[-2];
    puVar21[7] = uVar1;
    *puVar19 = uVar5;
    puVar20[-7] = uVar6;
    puVar20[-6] = uVar7;
    puVar20[-5] = uVar8;
    puVar20[-4] = uVar9;
    puVar20[-3] = uVar10;
    puVar20[-2] = uVar11;
    puVar20[-1] = uVar12;
  }
  iVar18 = iVar18 + -1;
  if ((longlong)((longlong)puVar19 + (-0x40 - (longlong)puVar21) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar15 - (longlong)puVar22 & 0xffffffffffffffc0U)) {
    if (puVar22 < puVar15) {
      *plVar17 = (longlong)puVar22;
      plVar17[1] = (longlong)puVar15;
      *(int *)(plVar17 + 2) = iVar18;
      plVar17 = plVar17 + 3;
    }
    if (puVar19 <= puVar21 + 8) goto LAB_140b148e5;
    puVar15 = puVar20 + -0x10;
    puVar22 = puVar21;
  }
  else {
    if (puVar21 + 8 < puVar19) {
      *plVar17 = (longlong)puVar21;
      plVar17[1] = (longlong)(puVar20 + -0x10);
      *(int *)(plVar17 + 2) = iVar18;
      plVar17 = plVar17 + 3;
    }
    if (puVar15 <= puVar22) goto LAB_140b148e5;
  }
  lVar14 = ((longlong)puVar15 - (longlong)puVar22 >> 6) + 1;
  puVar21 = puVar22;
  if (iVar18 == 0) goto LAB_140b148d6;
  goto LAB_140b14700;
}



// FUNCTION 140b149e0 FUN_140b149e0 body=146 status=ok
// SIG undefined FUN_140b149e0(void)

void FUN_140b149e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_142a07000();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 140b14a80 FUN_140b14a80 body=533 status=ok
// SIG undefined FUN_140b14a80(void)

longlong * FUN_140b14a80(longlong *param_1,longlong *param_2,void *param_3,short *param_4)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *_Src;
  longlong local_48 [2];
  
  iVar7 = 0;
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_2[1] == 0) {
    if (param_4 != (short *)0x0) {
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (param_4[lVar8] != 0);
        iVar7 = (int)lVar8 + 1;
      }
      if (iVar7 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar7);
        iVar5 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar5 + iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*param_1,param_4,(longlong)iVar7 * 2);
        return param_1;
      }
    }
  }
  else {
    lVar9 = *param_2;
    bVar2 = true;
    lVar8 = lVar9 + (longlong)(int)param_2[1] * 8;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 8) {
      if (bVar2) {
        bVar2 = false;
      }
      else {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)((longlong)param_3 + lVar6 * 2) != 0);
        iVar5 = (int)lVar6;
        if (iVar5 != 0) {
          iVar7 = (int)param_1[1];
          iVar3 = (uint)(iVar7 == 0) + iVar7 + iVar5;
          *(int *)(param_1 + 1) = iVar3;
          if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
          }
          pvVar1 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,param_3,(longlong)iVar5 * 2);
          *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        }
      }
      puVar4 = (undefined8 *)FName::ToString(lVar9,local_48);
      if (*(int *)(puVar4 + 1) == 0) {
        _Src = &DAT_143f3eda8;
      }
      else {
        _Src = (undefined2 *)*puVar4;
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (_Src[lVar6] != 0);
      iVar5 = (int)lVar6;
      if (iVar5 != 0) {
        iVar7 = (int)param_1[1];
        iVar3 = (uint)(iVar7 == 0) + iVar7 + iVar5;
        *(int *)(param_1 + 1) = iVar3;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
        }
        pvVar1 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_1;
}


