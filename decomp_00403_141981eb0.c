// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141981eb0 FUN_141981eb0 body=264 status=ok
// SIG undefined FUN_141981eb0(void)

ulonglong FUN_141981eb0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong in_RAX;
  undefined8 local_18;
  longlong local_10;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        param_1 = (longlong *)*param_1;
      }
      local_18 = *param_2;
      local_10 = param_2[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      bVar6 = (**(code **)(*param_1 + 0x40))(param_1,&local_18,param_3);
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
      return (ulonglong)bVar6;
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == 0) {
      in_RAX = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141981fc0 ExecuteIfSafe body=57 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseFunctorDelegateInstance<void___cdecl(void),<lambda_f4bfa535afaf2b21df39634d76d571e3>_>::
ExecuteIfSafe(longlong param_1)

{
  char cVar1;
  
  cVar1 = FSlateEditableTextLayout::CanExecuteDelete(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_14196cd00(*(undefined8 *)(param_1 + 8));
    FUN_141980ac0(*(undefined8 *)(param_1 + 8));
    FSlateEditableTextLayout::EndEditTransaction(*(undefined8 *)(param_1 + 8));
  }
  return 1;
}



// FUNCTION 141982000 FUN_141982000 body=580 status=ok
// SIG undefined FUN_141982000(void)

undefined8 FUN_141982000(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar9 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar2[1];
    bVar10 = iVar7 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar7 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 8) != 0) {
            local_48 = *param_2;
            plVar3 = (longlong *)param_2[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar4 = *(longlong **)(param_1 + 0x10);
            plVar8 = plVar4;
            if (plVar4 == (longlong *)0x0) goto LAB_1419820c2;
            LOCK();
            iVar7 = (int)plVar4[1];
            bVar10 = iVar7 == 0;
            if (bVar10) {
              *(int *)(plVar4 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
            goto joined_r0x000141982095;
          }
          LOCK();
          plVar9 = plVar2 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        break;
      }
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = (longlong *)param_2[1];
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
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return 0;
joined_r0x000141982095:
  plVar8 = plVar9;
  if (bVar10) {
LAB_1419820c2:
    local_30 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c);
    pcVar5 = *(code **)(param_1 + 0x18);
    iStack_28 = *(int *)(param_1 + 0x20);
    uStack_24 = *(undefined4 *)(param_1 + 0x24);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_40 = plVar3;
    (*pcVar5)((longlong)iStack_28 + (longlong)plVar9,&local_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    LOCK();
    plVar9 = plVar2 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    plVar2 = (longlong *)param_2[1];
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    return 1;
  }
  LOCK();
  bVar10 = iVar7 == (int)plVar4[1];
  if (bVar10) {
    *(int *)(plVar4 + 1) = iVar7 + 1;
  }
  UNLOCK();
  if (bVar10) {
    plVar8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 8);
    }
    goto LAB_1419820c2;
  }
  LOCK();
  iVar7 = (int)plVar4[1];
  bVar10 = iVar7 == 0;
  if (bVar10) {
    *(int *)(plVar4 + 1) = 0;
    iVar7 = 0;
  }
  UNLOCK();
  goto joined_r0x000141982095;
}



// FUNCTION 141982250 FUN_141982250 body=447 status=ok
// SIG undefined FUN_141982250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141982250(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  float local_78;
  float local_74;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = *(undefined8 *)(param_1 + 0x3c8);
  plVar5 = *(longlong **)(param_1 + 0x3d0);
  iVar4 = *(int *)(param_1 + 0x3ec);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_80 = plVar5;
  FUN_14182e310(param_1,&local_78,param_2,&local_88);
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
  local_48 = *(float *)(param_3 + 0x1c) - local_48;
  fVar8 = 1.0 / (local_5c * local_50 - local_58 * local_54);
  local_4c = *(float *)(param_3 + 0x18) - local_4c;
  if (iVar4 == 0) {
    fVar8 = local_50 * fVar8 * local_4c - local_48 * local_54 * fVar8;
  }
  else {
    fVar8 = local_48 * local_5c * fVar8 - local_4c * local_58 * fVar8;
  }
  fVar8 = fVar8 - *(float *)(param_1 + 1000);
  if (iVar4 == 0) {
    local_74 = local_78;
  }
  local_74 = local_74 - *(float *)(*(longlong *)(param_1 + 0x3c8) + 0x238);
  fVar7 = 0.0;
  if ((0.0 <= fVar8) && (fVar7 = local_74, fVar8 <= local_74)) {
    fVar7 = fVar8;
  }
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x3d8,fVar7 / local_74);
  return;
}



// FUNCTION 141982410 FUN_141982410 body=441 status=ok
// SIG undefined FUN_141982410(void)

void FUN_141982410(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  uVar7 = FCurveSequence::FCurveSequence(local_68);
  FUN_1417f8e00(param_1 + 0x390,uVar7);
  FUN_1417f61f0(local_68);
  plVar10 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x370) != 0) && (*(longlong **)(param_1 + 0x368) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x368) + 0x18))(), cVar6 != '\0')) {
    plVar9 = plVar10;
    if (*(int *)(param_1 + 0x370) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x368);
    }
    uVar11 = (**(code **)(*plVar9 + 0x38))();
    *(undefined4 *)(param_1 + 0x360) = uVar11;
  }
  if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))(), cVar6 != '\0')) {
    plVar9 = plVar10;
    if (*(int *)(param_1 + 0x358) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x350);
    }
    uVar11 = (**(code **)(*plVar9 + 0x38))();
    *(undefined4 *)(param_1 + 0x348) = uVar11;
  }
  FCurveSequence::AddCurve
            (param_1 + 0x390,local_88,*(undefined4 *)(param_1 + 0x348),
             *(undefined4 *)(param_1 + 0x360),0);
  if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x358) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x350);
    }
    uVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
    *(undefined4 *)(param_1 + 0x348) = uVar11;
  }
  puVar8 = (undefined4 *)
           FCurveSequence::AddCurve(param_1 + 0x390,local_78,0,*(undefined4 *)(param_1 + 0x348),0);
  uVar11 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)(param_1 + 1000) = *puVar8;
  *(undefined4 *)(param_1 + 0x3ec) = uVar11;
  *(undefined4 *)(param_1 + 0x3f0) = uVar3;
  *(undefined4 *)(param_1 + 0x3f4) = uVar4;
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_98);
  FUN_141852180(param_1 + 0x390,uVar7,0,0);
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 1419825d0 FUN_1419825d0 body=757 status=ok
// SIG undefined FUN_1419825d0(void)

void FUN_1419825d0(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 local_res8 [8];
  undefined1 local_148;
  undefined1 local_147;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [88];
  undefined1 local_78 [96];
  
  local_148 = DAT_1464b9ee8;
  plVar10 = (longlong *)0x0;
  local_140 = 0;
  local_138 = 0;
  local_147 = 1;
  SLeafWidget::SetVisibility(param_1,&local_148);
  uVar7 = FCurveSequence::FCurveSequence(local_d0);
  FUN_1417f8e00(param_1 + 0x390,uVar7);
  FUN_1417f61f0(local_d0);
  if (((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x18))(), cVar6 != '\0')) {
    plVar9 = plVar10;
    if (*(int *)(param_1 + 0x340) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x338);
    }
    uVar11 = (**(code **)(*plVar9 + 0x38))();
    *(undefined4 *)(param_1 + 0x330) = uVar11;
  }
  puVar8 = (undefined4 *)
           FCurveSequence::AddCurve(param_1 + 0x390,local_110,0,*(undefined4 *)(param_1 + 0x330),0);
  uVar11 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)(param_1 + 1000) = *puVar8;
  *(undefined4 *)(param_1 + 0x3ec) = uVar11;
  *(undefined4 *)(param_1 + 0x3f0) = uVar3;
  *(undefined4 *)(param_1 + 0x3f4) = uVar4;
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_130);
  FUN_141852100(param_1 + 0x390,uVar7,0,0);
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_128 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  uVar7 = FCurveSequence::FCurveSequence(local_78);
  FUN_1417f8e00(param_1 + 0x3f8,uVar7);
  FUN_1417f61f0(local_78);
  puVar8 = (undefined4 *)FCurveSequence::AddCurve(param_1 + 0x3f8,local_100,0x3e4ccccd,0x3e99999a,2)
  ;
  uVar11 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)(param_1 + 0x450) = *puVar8;
  *(undefined4 *)(param_1 + 0x454) = uVar11;
  *(undefined4 *)(param_1 + 0x458) = uVar3;
  *(undefined4 *)(param_1 + 0x45c) = uVar4;
  puVar8 = (undefined4 *)FCurveSequence::AddCurve(param_1 + 0x3f8,local_f0,0,0x3e4ccccd,0);
  uVar11 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)(param_1 + 0x460) = *puVar8;
  *(undefined4 *)(param_1 + 0x464) = uVar11;
  *(undefined4 *)(param_1 + 0x468) = uVar3;
  *(undefined4 *)(param_1 + 0x46c) = uVar4;
  puVar8 = (undefined4 *)FCurveSequence::AddCurve(param_1 + 0x3f8,local_e0,0x3f000000,0x3f0ccccd,2);
  uVar11 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)(param_1 + 0x470) = *puVar8;
  *(undefined4 *)(param_1 + 0x474) = uVar11;
  *(undefined4 *)(param_1 + 0x478) = uVar3;
  *(undefined4 *)(param_1 + 0x47c) = uVar4;
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_120);
  FUN_141852100(param_1 + 0x3f8,uVar7,0,0);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_118 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  if (((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x340) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x338);
    }
    uVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
    *(undefined4 *)(param_1 + 0x330) = uVar11;
  }
  if (((0.0001 < *(float *)(param_1 + 0x330)) && (param_2 != '\0')) &&
     ((*(int *)(param_1 + 0x4d8) == -1 &&
      (cVar6 = FSlateApplication::IsRunningAtTargetFrameRate(DAT_1469f4590), cVar6 == '\0')))) {
    uVar7 = FSlateThrottleManager::Get();
    puVar8 = (undefined4 *)FSlateThrottleManager::EnterResponsiveMode(uVar7,local_res8);
    *(undefined4 *)(param_1 + 0x4d8) = *puVar8;
  }
  return;
}



// FUNCTION 1419828d0 FUN_1419828d0 body=267 status=ok
// SIG undefined FUN_1419828d0(void)

void FUN_1419828d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  uVar7 = FCurveSequence::FCurveSequence(local_68);
  FUN_1417f8e00(param_1 + 0x390,uVar7);
  FUN_1417f61f0(local_68);
  if ((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x350);
      }
      uVar10 = (**(code **)(*plVar9 + 0x38))();
      *(undefined4 *)(param_1 + 0x348) = uVar10;
    }
  }
  puVar8 = (undefined4 *)
           FCurveSequence::AddCurve(param_1 + 0x390,local_78,0,*(undefined4 *)(param_1 + 0x348),0);
  uVar10 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)(param_1 + 1000) = *puVar8;
  *(undefined4 *)(param_1 + 0x3ec) = uVar10;
  *(undefined4 *)(param_1 + 0x3f0) = uVar3;
  *(undefined4 *)(param_1 + 0x3f4) = uVar4;
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_88);
  FUN_141852180(param_1 + 0x390,uVar7,0,0);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 1419829e0 FUN_1419829e0 body=640 status=ok
// SIG undefined FUN_1419829e0(void)

void FUN_1419829e0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined8 local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [96];
  
  uVar9 = FCurveSequence::FCurveSequence(local_88);
  FUN_1417f8e00(param_1 + 0x72,uVar9);
  FUN_1417f61f0(local_88);
  puVar10 = (undefined4 *)FCurveHandle::FCurveHandle(local_98,0,0);
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(undefined4 *)(param_1 + 0x7d) = *puVar10;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = uVar4;
  *(undefined4 *)(param_1 + 0x7e) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = uVar6;
  (**(code **)(*param_1 + 0x238))(param_1,0);
  if ((int)param_1[0x9b] != -1) {
    uVar9 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(uVar9,param_1 + 0x9b);
  }
  if ((param_1[0x5e] != 0) && (param_1[0x5f] != 0)) {
    plVar14 = (longlong *)0x0;
    piVar1 = (int *)(param_1[0x5f] + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      puVar11 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_a8);
      plVar2 = (longlong *)puVar11[1];
      uVar9 = *puVar11;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_a0 + 1;
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      plVar13 = plVar2 + 1;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar13 = (int)*plVar13 + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_1[0x5f];
      plVar12 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar15 = iVar8 == 0;
        if (bVar15) {
          *(int *)(plVar3 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar12 = plVar14, !bVar15) {
          LOCK();
          bVar15 = iVar8 == (int)plVar3[1];
          if (bVar15) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar15) {
            plVar12 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar14 = (longlong *)param_1[0x5e];
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar3[1];
          bVar15 = iVar8 == 0;
          if (bVar15) {
            *(int *)(plVar3 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      local_b8 = uVar9;
      local_b0 = plVar2;
      (**(code **)(*plVar14 + 0x210))(plVar14,&local_b8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar12 + 1;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar14 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b0 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141982c60 FUN_141982c60 body=454 status=ok
// SIG undefined FUN_141982c60(void)

void FUN_141982c60(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  char local_res10 [8];
  
  uVar10 = (ulonglong)param_2;
  bVar4 = true;
  if (*(int *)((longlong)param_1 + 0x1c) <= param_2) {
    lVar11 = uVar10 * 8;
    do {
      lVar2 = *(longlong *)(lVar11 + *(longlong *)(*param_1 + 0x230));
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (((*(int *)(lVar3 + 0xc0) != 0) && (*(longlong **)(lVar3 + 0xb8) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(lVar3 + 0xc0) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(lVar3 + 0xb8);
        }
        (**(code **)(*plVar7 + 0x38))(plVar7,local_res10);
        *(char *)(lVar3 + 0xb0) = local_res10[0];
      }
      iVar9 = (int)uVar10;
      if (*(char *)(lVar3 + 0xb0) != DAT_1464b9ee9) {
        if ((int)param_1[5] != *(int *)((longlong)param_1 + 0x54)) {
          plVar7 = (longlong *)param_1[0xc];
          if ((longlong *)param_1[0xc] == (longlong *)0x0) {
            plVar7 = param_1 + 0xb;
          }
          iVar6 = *(int *)((longlong)plVar7 +
                          ((longlong)(int)param_1[0xd] - 1U & (longlong)iVar9) * 4);
          if (iVar6 != -1) {
            do {
              piVar8 = (int *)((longlong)iVar6 * 0x1c + param_1[4]);
              if (*piVar8 == iVar9) {
                if (iVar6 != -1) goto LAB_141982d5f;
                break;
              }
              iVar6 = piVar8[5];
            } while (iVar6 != -1);
          }
        }
        piVar8 = (int *)0x0;
LAB_141982d5f:
        if ((bVar4) && (*(char *)(lVar2 + 0x58) != '\0')) {
          lVar3 = *param_1;
          if ((*(int *)(lVar3 + 0x218) != 0) &&
             ((*(longlong **)(lVar3 + 0x210) != (longlong *)0x0 &&
              (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0x210) + 0x18))(), cVar5 != '\0')))) {
            if (*(int *)(lVar3 + 0x218) == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = *(longlong **)(lVar3 + 0x210);
            }
            fVar12 = (float)(**(code **)(*plVar7 + 0x38))();
            *(float *)(lVar3 + 0x208) = fVar12;
          }
          piVar8[3] = (int)(*(float *)(lVar3 + 0x208) - (float)piVar8[1]);
        }
        (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],lVar2,piVar8 + 1);
        bVar4 = false;
      }
      uVar10 = (ulonglong)(iVar9 - 1U);
      lVar11 = lVar11 + -8;
    } while (*(int *)((longlong)param_1 + 0x1c) <= (int)(iVar9 - 1U));
  }
  *(undefined4 *)(param_1 + 2) = 0;
  fVar12 = *(float *)(*param_1 + 0x24c);
  fVar1 = *(float *)(param_1 + 3);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(float *)((longlong)param_1 + 0x14) = fVar12 + fVar1 + *(float *)((longlong)param_1 + 0x14);
  return;
}



// FUNCTION 141982e30 FindResizeableSlotAfterHandle body=248 status=ok
// SIG undefined FindResizeableSlotAfterHandle(void)

int SSplitter::FindResizeableSlotAfterHandle(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char local_res8 [8];
  
  param_1 = param_1 + 1;
  lVar6 = (longlong)param_1;
  iVar3 = (**(code **)*param_2)(param_2);
  if (iVar3 <= lVar6) {
    return param_1;
  }
  do {
    lVar1 = *(longlong *)(*(longlong *)(param_2[2] + lVar6 * 8) + 0x10);
    if (((*(int *)(lVar1 + 0xc0) != 0) && (*(longlong **)(lVar1 + 0xb8) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(lVar1 + 0xc0) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar1 + 0xb8);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,local_res8);
      *(char *)(lVar1 + 0xb0) = local_res8[0];
    }
    if (*(char *)(lVar1 + 0xb0) != DAT_1464b9ee9) {
      lVar1 = *(longlong *)(param_2[2] + lVar6 * 8);
      if (((*(int *)(lVar1 + 0x30) != 0) && (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x18))(), cVar2 != '\0')) {
        if (*(int *)(lVar1 + 0x30) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 0x28);
        }
        uVar4 = (**(code **)(*plVar5 + 0x38))();
        *(undefined4 *)(lVar1 + 0x20) = uVar4;
      }
      if (*(int *)(lVar1 + 0x20) != 0) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    lVar6 = lVar6 + 1;
    if (iVar3 <= lVar6) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 141982f30 FindResizeableSlotBeforeHandle body=250 status=ok
// SIG undefined FindResizeableSlotBeforeHandle(void)

ulonglong SSplitter::FindResizeableSlotBeforeHandle(uint param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char local_res8 [8];
  
  uVar5 = (ulonglong)(int)param_1;
  uVar6 = uVar5;
  if ((int)param_1 < 0) {
    return (ulonglong)param_1;
  }
  do {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + uVar5 * 8) + 0x10);
    if (((*(int *)(lVar1 + 0xc0) != 0) && (*(longlong **)(lVar1 + 0xb8) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(lVar1 + 0xc0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(lVar1 + 0xb8);
      }
      (**(code **)(*plVar4 + 0x38))(plVar4,local_res8);
      *(char *)(lVar1 + 0xb0) = local_res8[0];
    }
    if (*(char *)(lVar1 + 0xb0) != DAT_1464b9ee9) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar5 * 8);
      if (((*(int *)(lVar1 + 0x30) != 0) && (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x18))(), cVar2 != '\0')) {
        if (*(int *)(lVar1 + 0x30) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x28);
        }
        uVar3 = (**(code **)(*plVar4 + 0x38))();
        *(undefined4 *)(lVar1 + 0x20) = uVar3;
      }
      if (*(int *)(lVar1 + 0x20) != 0) break;
    }
    uVar6 = (ulonglong)((int)uVar6 - 1);
    uVar5 = uVar5 - 1;
  } while (-1 < (longlong)uVar5);
  return uVar6 & 0xffffffff;
}



// FUNCTION 141983030 ForEachElement body=568 status=ok
// SIG undefined ForEachElement(void)

void FSlateDrawLayer::ForEachElement(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x890);
  lVar3 = (longlong)*(int *)(param_1 + 0x898) * 0x70 + lVar4;
  if (lVar4 != lVar3) {
    do {
      if (*(int *)(param_2 + 8) == 0) {
LAB_141983090:
        uVar1 = 0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_141983090;
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
      (*(code *)*param_2)(uVar1,lVar4);
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != lVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x8a0);
  lVar3 = (longlong)*(int *)(param_1 + 0x8a8) * 0x70 + lVar4;
  if (lVar4 != lVar3) {
    do {
      if (*(int *)(param_2 + 8) == 0) {
LAB_1419830e1:
        uVar1 = 0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_1419830e1;
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
      (*(code *)*param_2)(uVar1,lVar4);
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != lVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x8b0);
  lVar3 = (longlong)*(int *)(param_1 + 0x8b8) * 0xc0 + lVar4;
  if (lVar4 != lVar3) {
    do {
      if (*(int *)(param_2 + 8) == 0) {
LAB_141983136:
        uVar1 = 0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_141983136;
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
      (*(code *)*param_2)(uVar1,lVar4);
      lVar4 = lVar4 + 0xc0;
    } while (lVar4 != lVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x8c0);
  lVar3 = (longlong)*(int *)(param_1 + 0x8c8) * 0x80 + lVar4;
  if (lVar4 != lVar3) {
    do {
      if (*(int *)(param_2 + 8) == 0) {
LAB_141983190:
        uVar1 = 0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_141983190;
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
      (*(code *)*param_2)(uVar1,lVar4);
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != lVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x8d0);
  lVar3 = (longlong)*(int *)(param_1 + 0x8d8) * 0x78 + lVar4;
  if (lVar4 != lVar3) {
    do {
      if (*(int *)(param_2 + 8) == 0) {
LAB_1419831e1:
        uVar1 = 0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_1419831e1;
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
      (*(code *)*param_2)(uVar1,lVar4);
      lVar4 = lVar4 + 0x78;
    } while (lVar4 != lVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x8e0);
  lVar3 = (longlong)*(int *)(param_1 + 0x8e8) * 0x60 + lVar4;
  if (lVar4 != lVar3) {
    do {
      if (*(int *)(param_2 + 8) == 0) {
LAB_141983240:
        uVar1 = 0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_141983240;
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
      (*(code *)*param_2)(uVar1,lVar4);
      lVar4 = lVar4 + 0x60;
    } while (lVar4 != lVar3);
  }
  return;
}



// FUNCTION 141983270 FUN_141983270 body=195 status=ok
// SIG undefined FUN_141983270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141983270(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_1 + 0x670);
  cVar2 = *(char *)(param_1 + 0x678);
  uVar3 = local_30[0];
  if (cVar2 != '\0') {
    uVar3 = *puVar1;
  }
  local_40 = *(undefined8 *)(param_1 + 0x680);
  uStack_38 = *(undefined8 *)(param_1 + 0x688);
  local_48 = *(undefined8 *)(param_1 + 0x690);
  FUN_1419a1d70((int)local_48,param_2,1);
  if (local_30 != puVar1) {
    if (*(char *)(param_1 + 0x678) != '\0') {
      *(undefined1 *)(param_1 + 0x678) = 0;
    }
    if (cVar2 != '\0') {
      *puVar1 = uVar3;
      *(undefined1 *)(param_1 + 0x678) = 1;
    }
  }
  *(undefined8 *)(param_1 + 0x680) = local_40;
  *(undefined8 *)(param_1 + 0x688) = uStack_38;
  *(undefined8 *)(param_1 + 0x690) = local_48;
  FUN_1419a7100(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
  return;
}



// FUNCTION 141983340 FUN_141983340 body=1730 status=ok
// SIG undefined FUN_141983340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141983340(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_778 [32];
  longlong local_758;
  longlong local_750;
  undefined4 local_748;
  longlong local_740;
  longlong local_738;
  longlong local_730;
  undefined1 local_728;
  undefined1 local_720;
  longlong local_718;
  longlong *local_708;
  longlong *local_700;
  undefined8 *local_6f8;
  longlong *local_6f0;
  longlong *local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  longlong *local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  undefined1 local_6a8 [8];
  longlong *local_6a0;
  undefined1 local_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined1 local_678 [16];
  undefined1 local_668 [8];
  longlong *local_660;
  undefined1 local_658 [8];
  longlong *local_650;
  longlong *local_648;
  longlong *local_640;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [280];
  longlong *local_500;
  undefined1 local_4f8 [280];
  longlong *local_3e0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_778;
  if (((*(int *)(param_1 + 1000) == 0) || (*(longlong **)(param_1 + 0x3e0) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x18))(), cVar4 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_630,L"Please provide a .OnGenerateWidget() handler.",L"SlateCore",
                       L"ComboBoxMissingOnGenerateWidgetMethod");
    FText::FText(local_6a8,uVar8);
    local_690 = 1;
    local_688 = 0;
    local_680 = 0;
    lVar6 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar6 + 0x108,local_6a8);
    *(undefined1 *)(lVar6 + 0x120) = local_690;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x128,&local_688);
    plVar7 = (longlong *)operator_new(0x660);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144043520;
      if (plVar7 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar10 = plVar7 + 2;
    local_648 = plVar10;
    local_640 = plVar7;
    FUN_14044f790(&local_648,plVar10);
    local_758 = 0x650;
    SWidget::SetDebugInfo
              (plVar10,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",
               0x199);
    local_748 = *(undefined4 *)(lVar6 + 0x90);
    local_718 = lVar6 + 0xf8;
    local_730 = lVar6 + 0xe8;
    local_720 = *(undefined1 *)(lVar6 + 0xf1);
    local_738 = lVar6 + 200;
    local_740 = lVar6 + 0x98;
    local_728 = *(undefined1 *)(lVar6 + 0xf0);
    local_750 = lVar6 + 0x78;
    local_758 = lVar6 + 0x60;
    SWidget::SWidgetConstruct(plVar10,lVar6,lVar6 + 0x30,lVar6 + 0x40);
    FUN_1419b0120(plVar10,lVar6);
    if (((char)plVar7[5] < '\0') ||
       (cVar4 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar4 != '\0')) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_6d0 = param_4;
    local_6b8 = plVar10;
    local_6b0 = plVar7;
    plVar10 = (longlong *)FUN_14195e850();
    local_6f0 = plVar10 + 2;
    local_6e8 = plVar10;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_6f0,local_6f0);
    local_6e0 = &local_6d0;
    local_758 = 0x440;
    SWidget::SetDebugInfo
              (plVar10 + 3,"SComboRow<OptionType>",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",
               0x197);
    uVar8 = FUN_14195f3e0(local_4f8);
    uVar8 = FUN_1419671f0(uVar8,&local_6b8);
    puVar9 = (undefined8 *)FUN_141967920(&local_6f0,local_658,uVar8);
    *param_2 = *puVar9;
    lVar6 = puVar9[1];
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_650 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)local_650 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_650 + 8))(local_650,1);
        }
      }
    }
    plVar10 = local_6e8;
    if (local_6e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6e8 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6e8)(local_6e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6e8 + 8))(local_6e8,1);
        }
      }
    }
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_3e0 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_3e0)(local_3e0);
        LOCK();
        piVar1 = (int *)((longlong)local_3e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3e0 + 8))(local_3e0,1);
        }
      }
    }
    FUN_140456c70(local_4f8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_688);
    if (local_6a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_6a0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6a0)(local_6a0);
        LOCK();
        piVar1 = (int *)((longlong)local_6a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6a0 + 8))(local_6a0,1);
        }
      }
    }
    if (local_628 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_628 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_628)(local_628);
        LOCK();
        piVar1 = (int *)((longlong)local_628 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_628 + 8))(local_628,1);
        }
      }
    }
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  else {
    plVar7 = (longlong *)param_3[1];
    local_6c8 = *param_3;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 1000) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x3e0);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_6c0 = plVar7;
    (**(code **)(*plVar10 + 0x38))(plVar10,local_678,&local_6c8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar8 = *(undefined8 *)(param_1 + 0x388);
    lVar6 = FUN_14195f3e0(local_618);
    *(undefined8 *)(lVar6 + 0x108) = uVar8;
    local_6d8 = param_4;
    plVar7 = (longlong *)FUN_14195e850();
    local_708 = plVar7 + 2;
    local_700 = plVar7;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_708,local_708);
    local_6f8 = &local_6d8;
    local_758 = 0x440;
    SWidget::SetDebugInfo
              (plVar7 + 3,"SComboRow<OptionType>",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",
               399);
    uVar8 = FUN_1419671f0(lVar6,local_678);
    puVar9 = (undefined8 *)FUN_141967920(&local_708,local_668,uVar8);
    *param_2 = *puVar9;
    lVar6 = puVar9[1];
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (local_660 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_660 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_660)(local_660);
        LOCK();
        piVar1 = (int *)((longlong)local_660 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_660 + 8))(local_660,1);
        }
      }
    }
    plVar7 = local_700;
    if (local_700 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_700 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_700)(local_700);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_700 + 8))(local_700,1);
        }
      }
    }
    if (local_500 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_500 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_500)(local_500);
        LOCK();
        piVar1 = (int *)((longlong)local_500 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_500 + 8))(local_500,1);
        }
      }
    }
    FUN_140456c70(local_618);
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return param_2;
}



// FUNCTION 141983a10 Get body=75 status=ok
// SIG undefined Get(void)

undefined1 * TAttribute<EVisibility>::Get(undefined1 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,local_res8);
      *param_1 = local_res8[0];
    }
  }
  return param_1;
}



// FUNCTION 141983a60 FUN_141983a60 body=143 status=ok
// SIG undefined FUN_141983a60(void)

undefined8 FUN_141983a60(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  
  plVar5 = DAT_1469f45a8;
  if (DAT_1469f45a8 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)DAT_1469f45a8[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(DAT_1469f45a8 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar6 == (int)plVar5[1];
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar6 + 1;
      }
      uVar4 = DAT_1469f45a0;
      UNLOCK();
      if (bVar7) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
        return uVar4;
      }
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar7 = iVar6 == 0;
      if (bVar7) {
        *(int *)(plVar5 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return 0;
}



// FUNCTION 141983af0 FUN_141983af0 body=138 status=ok
// SIG undefined FUN_141983af0(void)

undefined8 FUN_141983af0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((*(int *)(param_1 + 0x218) != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x218) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x210);
      }
      uVar3 = (**(code **)(*plVar5 + 0x38))();
      *(undefined4 *)(param_1 + 0x208) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x208);
  if (-1 < iVar1) {
    iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x220))();
    if (iVar1 < iVar4) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 141983be0 GetCharacterIndexFromPoint body=155 status=ok
// SIG undefined GetCharacterIndexFromPoint(void)

undefined4
FSlateEditableTextLayout::FTextInputMethodContext::GetCharacterIndexFromPoint
          (longlong param_1,float *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float local_res8;
  float local_resc;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  local_res8 = *(float *)(*(longlong *)(lVar1 + 0x48) + 0x8c);
  local_resc = local_res8 * param_2[1];
  local_res8 = local_res8 * *param_2;
  FTextLayout::GetTextLocationAt(*(undefined8 *)(lVar1 + 0x48),local_res18,&local_res8,0);
  local_18[0] = 0;
  local_18[1] = 0;
  FTextLayout::GetTextOffsetLocations(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_18);
  uVar2 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(local_18,local_res18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 141983c80 FUN_141983c80 body=76 status=ok
// SIG undefined FUN_141983c80(void)

undefined1 * FUN_141983c80(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  
  if ((*(int *)(param_1 + 0x4e8) != 0) && (*(longlong **)(param_1 + 0x4e0) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x18))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_141983cae;
    }
  }
  bVar2 = false;
LAB_141983cae:
  uVar1 = DAT_1464b9ee9;
  if (bVar2) {
    uVar1 = DAT_1464b9ee8;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 141983cd0 FUN_141983cd0 body=169 status=ok
// SIG undefined FUN_141983cd0(void)

undefined8 * FUN_141983cd0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 0x10);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141983d80 FUN_141983d80 body=217 status=ok
// SIG undefined FUN_141983d80(void)

undefined8 * FUN_141983d80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 0x10);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141983e60 GetChildAt body=107 status=ok
// SIG undefined GetChildAt(void)

undefined8 SWidgetSwitcher::FOneDynamicChild::GetChildAt(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if ((puVar1[4] != 0) && (*(longlong **)(puVar1 + 2) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(puVar1 + 2) + 0x18))();
    if (cVar2 != '\0') {
      if (puVar1[4] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(puVar1 + 2);
      }
      uVar3 = (**(code **)(*plVar4 + 0x38))();
      *puVar1 = uVar3;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),param_2,*puVar1);
  return param_2;
}



// FUNCTION 141983ed0 FUN_141983ed0 body=188 status=ok
// SIG undefined FUN_141983ed0(void)

undefined8 * FUN_141983ed0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if ((puVar3[4] != 0) && (*(longlong **)(puVar3 + 2) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(puVar3 + 2) + 0x18))();
    if (cVar5 != '\0') {
      if (puVar3[4] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(puVar3 + 2);
      }
      uVar6 = (**(code **)(*plVar8 + 0x38))();
      *puVar3 = uVar6;
    }
  }
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                     (*(longlong **)(param_1 + 0x10),local_18,*puVar3);
  *param_2 = *puVar7;
  lVar4 = puVar7[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return param_2;
}



// FUNCTION 141983f90 GetChildren body=55 status=ok
// SIG undefined GetChildren(void)

void FSlateEditableTextLayout::GetChildren(longlong param_1)

{
  char cVar1;
  
  cVar1 = FTextLayout::IsEmpty(*(undefined8 *)(param_1 + 0x48));
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_1419b26a0();
    return;
  }
  FUN_14193f460(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 141984020 FUN_141984020 body=211 status=ok
// SIG undefined FUN_141984020(void)

undefined * FUN_141984020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_14183ac60(*(longlong *)(param_1 + 0x268),local_18);
    if (*(char *)(param_1 + 0x28a) == '\0') {
      puVar6 = &DAT_1469f54d0;
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x218))();
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x1a8))();
        puVar6 = &DAT_1469f53c0;
        if (cVar5 == '\0') {
          puVar6 = &DAT_1469f5338;
        }
      }
      else {
        puVar6 = &DAT_1469f5448;
      }
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
    return puVar6;
  }
  return &DAT_1469f5338;
}



// FUNCTION 141984110 GetBaseCameraProperties body=8 status=ok
// SIG undefined GetBaseCameraProperties(void)

longlong UConversationPlayer::GetBaseCameraProperties(longlong param_1)

{
  return param_1 + 0x228;
}



// FUNCTION 141984120 GetContentColor body=48 status=ok
// SIG undefined GetContentColor(void)

undefined8 * SNotificationExtendable::GetContentColor(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FUN_141984150(param_1,local_18);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 141984150 FUN_141984150 body=610 status=ok
// SIG undefined FUN_141984150(void)

undefined4 * FUN_141984150(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  uint uStackX_c;
  
  plVar7 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x2f0) == 0) || (*(longlong *)(param_1 + 0x2f8) == 0)) {
LAB_141984205:
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar5 = plVar7;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 < 1) goto LAB_141984205;
    plVar5 = *(longlong **)(param_1 + 0x2f8);
    plVar4 = plVar7;
    plVar6 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar4 = (longlong *)0x0, plVar6 = plVar7, !bVar9) {
        LOCK();
        bVar9 = iVar3 == (int)plVar5[1];
        if (bVar9) {
          *(int *)(plVar5 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar6 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            plVar4 = *(longlong **)(param_1 + 0x2f0);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar5 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    if ((plVar4[0x60] != 0) && (plVar4[0x61] != 0)) {
      piVar1 = (int *)(plVar4[0x61] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        bVar9 = true;
        plVar5 = (longlong *)0x1;
        goto LAB_14198420d;
      }
    }
    plVar5 = (longlong *)0x1;
  }
  bVar9 = false;
LAB_14198420d:
  if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (bVar9) {
    plVar6 = *(longlong **)(param_1 + 0x2f8);
    plVar5 = plVar7;
    plVar4 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar4 = plVar7, !bVar9) {
        LOCK();
        bVar9 = iVar3 == (int)plVar6[1];
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar5 = (longlong *)0x0;
          plVar4 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x2f0);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    plVar6 = (longlong *)plVar5[0x61];
    plVar8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar7, !bVar9) {
        LOCK();
        bVar9 = iVar3 == (int)plVar6[1];
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar8 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar7 = (longlong *)plVar5[0x60];
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    uVar10 = FUN_141839cb0(param_1 + 1000);
    SWindow::SetOpacity(plVar7,uVar10);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    *param_2 = 0x3f800000;
    param_2[1] = 0x3f800000;
    param_2[2] = 0x3f800000;
    param_2[3] = 0x3f800000;
  }
  else {
    uVar10 = FUN_141839cb0(param_1 + 1000);
    *param_2 = 0x3f800000;
    param_2[1] = 0x3f800000;
    param_2[2] = 0x3f800000;
    param_2[3] = uVar10;
  }
  return param_2;
}



// FUNCTION 1419843c0 FUN_1419843c0 body=34 status=ok
// SIG undefined FUN_1419843c0(void)

undefined8 * FUN_1419843c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x348);
  lVar1 = *(longlong *)(param_1 + 0x350);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419843f0 GetTabWellScale body=41 status=ok
// SIG undefined GetTabWellScale(void)

undefined4 * SDockingTabStack::GetTabWellScale(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_141839e50(param_1 + 0x420);
  param_2[1] = uVar1;
  *param_2 = 0x3f800000;
  return param_2;
}



// FUNCTION 141984420 FUN_141984420 body=77 status=ok
// SIG undefined FUN_141984420(void)

undefined8 FUN_141984420(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3c0) != '\0') {
    return *(undefined8 *)(param_1 + 0x418);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x1a8))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x410);
  }
  return *(undefined8 *)(param_1 + 0x408);
}



// FUNCTION 141984470 FUN_141984470 body=189 status=ok
// SIG undefined FUN_141984470(void)

undefined4 * FUN_141984470(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x308) + 0x3c8);
  fVar1 = *(float *)(lVar3 + 0x234);
  fVar2 = *(float *)(lVar3 + 0x230);
  pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_res8);
  fVar5 = pfVar4[1];
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar5 = *pfVar4;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = fVar5 * (1.0 - (fVar1 + fVar2)) * 0.03125;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 141984530 FUN_141984530 body=85 status=ok
// SIG undefined FUN_141984530(void)

undefined4 FUN_141984530(void)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  puVar1 = DAT_1469eb110;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return puVar1[1];
    }
  }
  return *puVar1;
}



// FUNCTION 141984590 GetGlowColor body=179 status=ok
// SIG undefined GetGlowColor(void)

undefined4 * SNotificationExtendable::GetGlowColor(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  fVar1 = (float)FUN_141839cb0(param_1 + 0x470);
  fVar1 = 1.0 - fVar1;
  if (fVar1 == 1.0) {
    fVar1 = 0.0;
  }
  if (*(int *)(param_1 + 0x388) == 2) {
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
  }
  else if (*(int *)(param_1 + 0x388) == 3) {
    local_18 = 0x3f800000;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  else {
    local_18 = 0x3f800000;
    uStack_14 = 0x3f800000;
    uStack_10 = 0x3f800000;
  }
  *param_2 = local_18;
  param_2[1] = uStack_14;
  param_2[2] = uStack_10;
  param_2[3] = fVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 141984650 GetHintText body=65 status=ok
// SIG undefined GetHintText(void)

undefined8
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetHintText(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = FUN_1404b03b0();
  if (*(char *)(lVar1 + 0x488) != '\0') {
    uVar2 = TAttribute<FText>::Get();
  }
  FText::FText(param_2,uVar2);
  return param_2;
}



// FUNCTION 1419846a0 GetHyperlinkText body=41 status=ok
// SIG undefined GetHyperlinkText(void)

undefined8 SNotificationItemImpl::GetHyperlinkText(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = TAttribute<FText>::Get(param_1 + 0x500);
  FText::FText(param_2,uVar1);
  return param_2;
}



// FUNCTION 1419846d0 FUN_1419846d0 body=76 status=ok
// SIG undefined FUN_1419846d0(void)

undefined1 * FUN_1419846d0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  
  if ((*(int *)(param_1 + 0x4f8) != 0) && (*(longlong **)(param_1 + 0x4f0) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x18))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1419846fe;
    }
  }
  bVar2 = false;
LAB_1419846fe:
  uVar1 = DAT_1464b9ee9;
  if (bVar2) {
    uVar1 = DAT_1464b9ee8;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 141984720 GetItemScale body=76 status=ok
// SIG undefined GetItemScale(void)

undefined4 * SNotificationExtendable::GetItemScale(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_141839cb0(param_1 + 0x460);
  uVar2 = FUN_141839cb0(param_1 + 0x450);
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 141984770 FUN_141984770 body=278 status=ok
// SIG undefined FUN_141984770(void)

undefined4 FUN_141984770(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar1 != '\0')) {
    plVar3 = plVar4;
    if (*(int *)(param_1 + 0x318) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x310);
    }
    uVar2 = (**(code **)(*plVar3 + 0x38))();
    *(undefined4 *)(param_1 + 0x308) = uVar2;
  }
  if (*(int *)(param_1 + 0x308) == 6) {
    uVar2 = *(undefined4 *)(param_1 + 0x350);
  }
  else {
    if (*(int *)(param_1 + 0x308) != 7) {
      if ((*(char *)(param_1 + 0x360) != '\0') && (*(char *)(param_1 + 0x380) != '\0')) {
        return *(undefined4 *)(param_1 + 0x37c);
      }
      return 0x3f800000;
    }
    uVar2 = 0x3f800000;
    if (*(char *)(param_1 + 0x324) != '\0') {
      if (((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))(0x3f800000),
            cVar1 != '\0')) {
        if (*(int *)(param_1 + 0x330) != 0) {
          plVar4 = *(longlong **)(param_1 + 0x328);
        }
        uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
        *(undefined4 *)(param_1 + 800) = uVar2;
      }
      return *(undefined4 *)(param_1 + 800);
    }
  }
  return uVar2;
}



// FUNCTION 141984890 FUN_141984890 body=372 status=ok
// SIG undefined FUN_141984890(void)

undefined * FUN_141984890(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x268) == 0) {
    return &DAT_1469f4e38;
  }
  FUN_14183ac60(*(longlong *)(param_1 + 0x268),&local_18);
  if ((local_18 == (longlong *)0x0) ||
     ((cVar4 = (**(code **)(*local_18 + 0x70))(), cVar4 == '\0' &&
      (iVar5 = (**(code **)(*local_18 + 0x68))(), iVar5 == 2)))) {
    if ((*(char *)(param_1 + 0x289) != '\0') &&
       (cVar4 = SWindow::HasMaximizeBox(*(undefined8 *)(param_1 + 0x268)), cVar4 != '\0')) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x218))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x1a8))();
        if (cVar4 == '\0') {
          puVar6 = &DAT_1469f4e38;
        }
        else {
          puVar6 = &DAT_1469f4ec0;
        }
      }
      else {
        puVar6 = &DAT_1469f4f48;
      }
      goto LAB_1419849b3;
    }
  }
  else if ((*(char *)(param_1 + 0x289) != '\0') &&
          (cVar4 = SWindow::HasMaximizeBox(*(undefined8 *)(param_1 + 0x268)), cVar4 != '\0')) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x218))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x1a8))();
      if (cVar4 == '\0') {
        puVar6 = &DAT_1469f50b8;
      }
      else {
        puVar6 = &DAT_1469f5140;
      }
    }
    else {
      puVar6 = &DAT_1469f51c8;
    }
    goto LAB_1419849b3;
  }
  puVar6 = &DAT_1469f4fd0;
LAB_1419849b3:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return puVar6;
}



// FUNCTION 141984a10 FUN_141984a10 body=229 status=ok
// SIG undefined FUN_141984a10(void)

undefined * FUN_141984a10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_14183ac60(*(longlong *)(param_1 + 0x268),local_18);
    if ((*(char *)(param_1 + 0x288) == '\0') ||
       (cVar5 = SWindow::HasMinimizeBox(*(undefined8 *)(param_1 + 0x268)), cVar5 == '\0')) {
      puVar6 = &DAT_1469f4d50;
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x290) + 0x218))();
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x290) + 0x1a8))();
        if (cVar5 == '\0') {
          puVar6 = &DAT_1469f4bb8;
        }
        else {
          puVar6 = &DAT_1469f4c40;
        }
      }
      else {
        puVar6 = &DAT_1469f4cc8;
      }
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
    return puVar6;
  }
  return &DAT_1469f4bb8;
}



// FUNCTION 141984b00 FUN_141984b00 body=402 status=ok
// SIG undefined FUN_141984b00(void)

longlong * FUN_141984b00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x2f0) == 0) || (*(longlong *)(param_1 + 0x2f8) == 0)) {
LAB_141984b9b:
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar7 = plVar8;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_141984b9b;
    plVar7 = *(longlong **)(param_1 + 0x2f8);
    plVar5 = plVar8;
    plVar6 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar5 = (longlong *)0x0, plVar6 = plVar8, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar7[1];
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar6 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x2f0);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar7 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar7 = (longlong *)0x1;
    cVar3 = FUN_14192b710(plVar5);
    if (cVar3 != '\0') {
      bVar9 = true;
      goto LAB_141984ba3;
    }
  }
  bVar9 = false;
LAB_141984ba3:
  if ((plVar7 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (bVar9) {
    plVar6 = *(longlong **)(param_1 + 0x2f8);
    plVar7 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar8, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar6[1];
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x2f0);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    *param_2 = (longlong)plVar8;
    param_2[1] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar7 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
          return param_2;
        }
      }
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 141984ca0 FUN_141984ca0 body=7 status=ok
// SIG undefined FUN_141984ca0(void)

undefined4 FUN_141984ca0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x238);
}



// FUNCTION 141984cd0 FUN_141984cd0 body=126 status=ok
// SIG undefined FUN_141984cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141984cd0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x218) == 0) {
    return (ulonglong)*(uint *)(param_1 + 0x208);
  }
  if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x218) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))();
        *(int *)(param_1 + 0x208) = (int)uVar2;
        return uVar2;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(int *)(param_1 + 0x208) = (int)uVar2;
      return uVar2;
    }
  }
  return (ulonglong)*(uint *)(param_1 + 0x208);
}



// FUNCTION 141984d50 FUN_141984d50 body=143 status=ok
// SIG undefined FUN_141984d50(void)

float FUN_141984d50(longlong param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    if ((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x348) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x340);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x338) = uVar2;
      }
    }
    cVar1 = *(char *)(param_1 + 0x338);
  }
  fVar4 = (float)FUN_141984770(param_1);
  if (cVar1 != '\0') {
    fVar4 = fVar4 / param_3;
  }
  return fVar4;
}



// FUNCTION 141984de0 FUN_141984de0 body=389 status=ok
// SIG undefined FUN_141984de0(void)

float * FUN_141984de0(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  
  param_3 = 1.0 / param_3;
  fVar10 = param_3 * *(float *)(param_1 + 0x350);
  fVar11 = param_3 * *(float *)(param_1 + 0x354);
  fVar12 = param_3 * *(float *)(param_1 + 0x358);
  param_3 = param_3 * *(float *)(param_1 + 0x35c);
  fVar1 = *(float *)(param_1 + 0x338);
  fVar2 = *(float *)(param_1 + 0x33c);
  fVar3 = *(float *)(param_1 + 0x340);
  fVar4 = *(float *)(param_1 + 0x344);
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))();
    if (cVar8 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x328);
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,&local_58);
      *(undefined8 *)(param_1 + 0x310) = local_58;
      *(undefined8 *)(param_1 + 0x318) = uStack_50;
    }
  }
  fVar5 = *(float *)(param_1 + 0x314);
  fVar6 = *(float *)(param_1 + 0x318);
  fVar7 = *(float *)(param_1 + 0x31c);
  *param_2 = (float)((int)ROUND(fVar10 + fVar10 + 0.5) >> 1) * fVar1 + *(float *)(param_1 + 0x310);
  param_2[1] = (float)((int)ROUND(fVar11 + fVar11 + 0.5) >> 1) * fVar2 + fVar5;
  param_2[2] = (float)((int)ROUND(fVar12 + fVar12 + 0.5) >> 1) * fVar3 + fVar6;
  param_2[3] = (float)((int)ROUND(param_3 + param_3 + 0.5) >> 1) * fVar4 + fVar7;
  return param_2;
}



// FUNCTION 141984fc0 GetScrollOffset body=16 status=ok
// SIG undefined GetScrollOffset(void)

undefined8 * FSlateEditableTextLayout::GetScrollOffset(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x658);
  return param_2;
}



// FUNCTION 141984fe0 GetSectionScale body=41 status=ok
// SIG undefined GetSectionScale(void)

undefined4 * SExpandableArea::GetSectionScale(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_141839e50(param_1 + 0x300);
  param_2[1] = uVar1;
  *param_2 = 0x3f800000;
  return param_2;
}



// FUNCTION 141985010 FUN_141985010 body=453 status=ok
// SIG undefined FUN_141985010(void)

longlong * FUN_141985010(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined8 uStack_50;
  uint *local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
            (param_2,*(int *)(param_1 + 0x550) - *(int *)(param_1 + 0x57c));
  local_78 = 0;
  iVar2 = *(int *)(param_1 + 0x570);
  local_48 = (uint *)(param_1 + 0x558);
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x568);
    if (*(uint **)(param_1 + 0x568) == (uint *)0x0) {
      puVar8 = local_48;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar4) goto LAB_1419850fe;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_64 = (iStack_60 - iVar7) + 0x1f;
    if (iVar2 < iStack_64) {
LAB_1419850fe:
      iStack_64 = iVar2;
    }
  }
  uStack_50 = CONCAT44(uStack_74,local_78);
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_64;
  iStack_10 = iStack_60;
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  local_38 = iStack_60;
  local_30 = (longlong *)(param_1 + 0x548);
  uStack_28 = uStack_50;
  puStack_20 = local_48;
  if (iStack_64 < iVar2) {
    do {
      iVar2 = (int)param_2[1];
      lVar6 = *(longlong *)(param_1 + 0x548);
      *(int *)(param_2 + 1) = iVar2 + 1;
      puVar1 = (undefined8 *)(lVar6 + (longlong)iStack_3c * 0x18);
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar5 = *puVar1;
      lVar6 = puVar1[1];
      puVar5[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      uStack_40 = uStack_40 & ~uStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return param_2;
}



// FUNCTION 1419851e0 FUN_1419851e0 body=372 status=ok
// SIG undefined FUN_1419851e0(void)

void FUN_1419851e0(longlong param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  int local_res8;
  int iStackX_c;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  if (lVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    return;
  }
  local_res8 = *(int *)(lVar1 + 0x680);
  iVar5 = (uint)(*(char *)(lVar1 + 0x688) == '\x01') + *(int *)(lVar1 + 0x684);
  puVar9 = (ulonglong *)(lVar1 + 0x670);
  iStackX_c = 0;
  if (-1 < iVar5) {
    iStackX_c = iVar5;
  }
  if (*(char *)(lVar1 + 0x678) == '\0') {
    puVar9 = (ulonglong *)&local_res8;
  }
  uVar2 = *puVar9;
  local_40[0] = 0;
  local_40[1] = 0;
  FTextLayout::GetTextOffsetLocations(*(undefined8 *)(lVar1 + 0x48),local_40);
  iVar4 = (int)uVar2;
  iVar5 = (int)(uVar2 >> 0x20);
  if ((iVar4 == local_res8) && (iVar5 == iStackX_c)) {
    iVar5 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(local_40,&local_res8);
    *param_2 = iVar5;
    *param_3 = 0;
    goto LAB_14198532f;
  }
  local_48 = CONCAT44(iStackX_c,local_res8);
  if (iVar4 == local_res8) {
    uVar10 = uVar2;
    if (iVar5 < iStackX_c) {
      puVar8 = &local_50;
    }
    else {
LAB_1419852d6:
      puVar8 = &local_48;
    }
  }
  else {
    uVar10 = uVar2 & 0xffffffff;
    puVar8 = &local_50;
    if (local_res8 <= iVar4) goto LAB_1419852d6;
  }
  local_50 = uVar2;
  iVar3 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(local_40,puVar8);
  iVar7 = (int)local_48;
  iVar6 = (int)local_50;
  bVar13 = SBORROW4(iVar6,iVar7);
  iVar4 = iVar6 - iVar7;
  bVar12 = false;
  if (iVar6 == iVar7) {
    bVar13 = SBORROW4(local_50._4_4_,local_48._4_4_);
    iVar4 = local_50._4_4_ - local_48._4_4_;
    bVar12 = local_50._4_4_ == local_48._4_4_;
  }
  puVar8 = &local_50;
  if (bVar12 || bVar13 != iVar4 < 0) {
    puVar8 = &local_48;
  }
  iVar4 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(local_40,puVar8);
  *param_2 = iVar3;
  *param_3 = iVar4 - iVar3;
  if (((int)uVar10 <= local_res8) && ((local_res8 != (int)uVar10 || (iVar5 <= iStackX_c)))) {
    uVar11 = 1;
  }
LAB_14198532f:
  *param_4 = uVar11;
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141985360 GetSize body=27 status=ok
// SIG undefined GetSize(void)

undefined8 FSlateEditableTextLayout::GetSize(longlong param_1,undefined8 param_2)

{
  FTextLayout::GetSize(*(undefined8 *)(param_1 + 0x48));
  return param_2;
}



// FUNCTION 141985380 FUN_141985380 body=123 status=ok
// SIG undefined FUN_141985380(void)

undefined * FUN_141985380(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f5690) {
    _Init_thread_header(&DAT_1469f5690);
    if (DAT_1469f5690 == -1) {
      FSlotBase::FSlotBase(&DAT_1469f5670);
      atexit((_func_5014 *)&LAB_143e83cc0);
      _Init_thread_footer(&DAT_1469f5690);
      return &DAT_1469f5670;
    }
  }
  return &DAT_1469f5670;
}



// FUNCTION 141985410 GetStartShadowOpacity body=110 status=ok
// SIG undefined GetStartShadowOpacity(void)

undefined4 * SScrollBox::GetStartShadowOpacity(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x208) * 0.03125;
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = fVar2;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 141985480 GetSuccessFailImage body=89 status=ok
// SIG undefined GetSuccessFailImage(void)

void SNotificationExtendable::GetSuccessFailImage(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar2 = DAT_1469eb140;
  lVar1 = *DAT_1469eb140;
  if (*(int *)(param_1 + 0x388) == 2) {
    pcVar5 = "NotificationList.SuccessImage";
    puVar4 = local_res8;
  }
  else {
    pcVar5 = "NotificationList.FailImage";
    puVar4 = local_res10;
  }
  puVar3 = (undefined8 *)FName::FName(puVar4,pcVar5,1);
  (**(code **)(lVar1 + 0x40))(plVar2,*puVar3,0);
  return;
}



// FUNCTION 141985510 GetText body=64 status=ok
// SIG undefined GetText(void)

undefined8 FSlateEditableTextLayout::GetText(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  if (*(char *)(param_1 + 0x438) != '\0') {
    uVar1 = TAttribute<FText>::Get();
  }
  FText::FText(param_2,uVar1);
  return param_2;
}



// FUNCTION 141985550 GetText body=65 status=ok
// SIG undefined GetText(void)

undefined8
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetText(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = FUN_1404b03b0();
  if (*(char *)(lVar1 + 0x438) != '\0') {
    uVar2 = TAttribute<FText>::Get();
  }
  FText::FText(param_2,uVar2);
  return param_2;
}



// FUNCTION 1419855a0 GetTextBounds body=362 status=ok
// SIG undefined GetTextBounds(void)

ulonglong FSlateEditableTextLayout::FTextInputMethodContext::GetTextBounds
                    (longlong param_1,int param_2,int param_3,float *param_4,undefined8 *param_5)

{
  float *pfVar1;
  float local_res8;
  float fStackX_c;
  float local_48;
  float local_44;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  longlong local_28 [4];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)param_4 = DAT_1468b5d88;
    *param_5 = DAT_1468b5d88;
  }
  else {
    local_28[0] = 0;
    local_28[1] = 0;
    FTextLayout::GetTextOffsetLocations(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_28)
    ;
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(local_28,local_40,param_2);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(local_28,local_38,param_2 + param_3);
    FUN_1419409d0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),&local_res8,local_40,0);
    FUN_1419409d0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),&local_48,local_38,0);
    if (fStackX_c == local_44) {
      *(ulonglong *)param_4 = CONCAT44(fStackX_c,local_res8);
      local_48 = local_48 - local_res8;
    }
    else {
      *(ulonglong *)param_4 = (ulonglong)(uint)fStackX_c << 0x20;
      pfVar1 = (float *)FTextLayout::GetDrawSize
                                  (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_30);
      local_48 = *pfVar1;
    }
    *param_5 = CONCAT44(local_44 - fStackX_c,local_48);
    *param_4 = *param_4 + *(float *)(param_1 + 0x2c);
    param_4[1] = *(float *)(param_1 + 0x30) + param_4[1];
    if (local_28[0] != 0) {
      param_5 = (undefined8 *)FMemory::Free();
    }
  }
  return (ulonglong)param_5 & 0xffffffffffffff00;
}



// FUNCTION 141985710 FUN_141985710 body=486 status=ok
// SIG undefined FUN_141985710(void)

void FUN_141985710(longlong param_1,uint param_2,int param_3,wchar_t **param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  pwVar9 = (wchar_t *)0x0;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_4 + 0xc)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0);
    }
    if (*param_4 != (wchar_t *)0x0) {
      **param_4 = L'\0';
      return;
    }
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x10))
              (*(longlong **)(lVar4 + 0x18),local_58,*(undefined8 *)(lVar4 + 0x48));
    FText::FromString(local_48,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)FText::ToString(local_48);
    uVar3 = param_2 + param_3;
    iVar12 = *(int *)(puVar5 + 1);
    uVar10 = iVar12 - 1;
    if (iVar12 == 0) {
      uVar10 = 0;
    }
    if (param_2 < uVar10) {
      uVar10 = param_2;
    }
    uVar6 = iVar12 - 1;
    if (iVar12 == 0) {
      uVar6 = 0;
    }
    uVar7 = uVar10;
    if ((uVar10 <= uVar3) && (uVar7 = uVar6, uVar3 < uVar6)) {
      uVar7 = uVar3;
    }
    if (iVar12 == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar5;
    }
    iVar8 = uVar7 - uVar10;
    local_68 = (wchar_t *)0x0;
    local_5c = 0;
    iVar12 = iVar8 + 1;
    if (iVar8 == 0) {
      iVar12 = 0;
    }
    local_60 = iVar12;
    if ((0 < iVar12) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0), iVar12 = local_60,
       pwVar9 = local_68, 0 < local_60)) {
      wcsncpy(local_68,puVar11 + (int)uVar10,(longlong)iVar8);
      pwVar9[iVar8] = L'\0';
    }
    if (param_4 == &local_68) {
      if (pwVar9 != (wchar_t *)0x0) {
        FMemory::Free(pwVar9);
      }
    }
    else {
      if (*param_4 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_4 = pwVar9;
      *(int *)(param_4 + 1) = iVar12;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_5c;
    }
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
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141985900 GetTextLength body=90 status=ok
// SIG undefined GetTextLength(void)

undefined4 FSlateEditableTextLayout::FTextInputMethodContext::GetTextLength(longlong param_1)

{
  undefined4 uVar1;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0;
  FTextLayout::GetTextOffsetLocations(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_18);
  uVar1 = FTextLayout::FTextOffsetLocations::GetTextLength(local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 141985990 FUN_141985990 body=199 status=ok
// SIG undefined FUN_141985990(void)

undefined4 * FUN_141985990(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  if ((char)param_1[0x78] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1a8))();
    if (cVar1 == '\0') {
      if ((*(char *)((longlong)param_1 + 0x3f1) == '\0') || ((char)param_1[0x80] != '\0')) {
        param_2[3] = 0x3f400000;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x3f2) == '\0') {
          dVar2 = (double)(**(code **)(*DAT_1469f4590 + 0x40))();
          dVar2 = dVar2 - (double)param_1[0x7f];
        }
        else {
          dVar2 = 0.0;
        }
        fVar4 = (float)((dVar2 - 0.2) * 5.0);
        fVar3 = 0.0;
        if ((0.0 <= fVar4) && (fVar3 = fVar4, 1.0 <= fVar4)) {
          fVar3 = 1.0;
        }
        param_2[3] = 1.0 - fVar3;
      }
      goto LAB_141985a35;
    }
  }
  param_2[3] = 0x3f800000;
LAB_141985a35:
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  return param_2;
}



// FUNCTION 141985a60 FUN_141985a60 body=85 status=ok
// SIG undefined FUN_141985a60(void)

undefined4 FUN_141985a60(void)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  puVar1 = DAT_1469f4ba8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return puVar1[1];
    }
  }
  return *puVar1;
}



// FUNCTION 141985ac0 FUN_141985ac0 body=73 status=ok
// SIG undefined FUN_141985ac0(void)

undefined4 * FUN_141985ac0(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x78] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1a8))();
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_141985aef;
    }
  }
  uVar2 = 0x3f800000;
LAB_141985aef:
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = uVar2;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 141985b10 FUN_141985b10 body=356 status=ok
// SIG undefined FUN_141985b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_141985b10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  float local_60;
  float local_5c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = *(undefined8 *)(param_1 + 0x2f8);
  plVar4 = *(longlong **)(param_1 + 0x300);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_70 = plVar4;
  FUN_14182e310(param_1,&local_60,(float *)(param_1 + 0x394),&local_78);
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
  pfVar6 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_68);
  iVar3 = *(int *)(param_1 + 0x378);
  fVar8 = pfVar6[1];
  if (iVar3 != 1) {
    fVar8 = *pfVar6;
  }
  fVar7 = *(float *)(param_1 + 0x398);
  if (iVar3 != 1) {
    fVar7 = *(float *)(param_1 + 0x394);
  }
  if (fVar7 <= 0.0) {
    local_60 = 1.0;
  }
  else {
    if (iVar3 == 1) {
      local_60 = local_5c;
    }
    local_60 = local_60 / fVar8;
    if (local_60 < 0.0) {
      return 0.0;
    }
  }
  if (1.0 <= local_60) {
    local_60 = 1.0;
  }
  return local_60;
}



// FUNCTION 141985c80 FUN_141985c80 body=332 status=ok
// SIG undefined FUN_141985c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_141985c80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = *(undefined8 *)(param_1 + 0x2f8);
  plVar4 = *(longlong **)(param_1 + 0x300);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_70 = plVar4;
  FUN_14182e310(param_1,local_60,param_1 + 0x394,&local_78);
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
  pfVar6 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_68);
  fVar8 = pfVar6[1];
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar8 = *pfVar6;
  }
  fVar7 = (float)FUN_141985b10(param_1);
  fVar8 = *(float *)(param_1 + 0x2f0) / fVar8;
  if (fVar8 < 0.0) {
    return 0.0;
  }
  if (1.0 - fVar7 <= fVar8) {
    fVar8 = 1.0 - fVar7;
  }
  return fVar8;
}



// FUNCTION 141985dd0 GetVirtualKeyboardOptions body=31 status=ok
// SIG undefined GetVirtualKeyboardOptions(void)

undefined8
FSlateEditableTextLayout::FVirtualKeyboardEntry::GetVirtualKeyboardOptions
          (longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x68))();
  return param_2;
}



// FUNCTION 141985df0 GetVirtualKeyboardType body=56 status=ok
// SIG undefined GetVirtualKeyboardType(void)

undefined8 FSlateEditableTextLayout::FVirtualKeyboardEntry::GetVirtualKeyboardType(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 8))();
  if (cVar1 != '\0') {
    return 4;
  }
                    /* WARNING: Could not recover jumptable at 0x000141985e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x60))();
  return uVar2;
}



// FUNCTION 141985e30 FUN_141985e30 body=408 status=ok
// SIG undefined FUN_141985e30(void)

longlong * FUN_141985e30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *plStack_30;
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  plVar6 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar4[1];
    bVar7 = iVar3 == 0;
    if (bVar7) {
      *(int *)(plVar4 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar7) {
      LOCK();
      bVar7 = iVar3 == (int)plVar4[1];
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar4;
        if ((plVar4 != (longlong *)0x0) && (lVar5 = *(longlong *)(param_1 + 0x10), lVar5 != 0)) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          bVar2 = true;
          bVar7 = false;
          local_20 = plVar4;
          goto LAB_141985eac;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  plVar4 = DAT_1469eb220;
  lVar5 = DAT_1469eb218;
  plStack_30 = DAT_1469eb220;
  if (DAT_1469eb220 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
    UNLOCK();
  }
  bVar2 = false;
  bVar7 = true;
LAB_141985eac:
  *param_2 = lVar5;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((bVar7) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_30 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  if ((bVar2) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141985fd0 FUN_141985fd0 body=403 status=ok
// SIG undefined FUN_141985fd0(void)

longlong * FUN_141985fd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar5 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar8 = *(longlong **)(param_1 + 0x18);
  plVar7 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar8[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar8 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar5, !bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar8[1];
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar8;
        if ((plVar8 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10) != 0)) {
          plVar6 = (longlong *)FUN_14183ac60(*(longlong *)(param_1 + 0x10),local_28);
          bVar2 = true;
          bVar9 = false;
          plVar5 = (longlong *)*plVar6;
          goto LAB_141986050;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar8 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar6 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar2 = false;
  bVar9 = true;
  plVar8 = plVar7;
LAB_141986050:
  *param_2 = (longlong)plVar5;
  param_2[1] = plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar5 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_30 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  if ((bVar2) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_2;
}



// FUNCTION 141986170 GetWindowZoneOverride body=55 status=ok
// SIG undefined GetWindowZoneOverride(void)

undefined4 SWindowTitleBarArea::GetWindowZoneOverride(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 10;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x268) + 0x498) + 0x68))();
    uVar2 = 10;
    if (iVar1 != 2) {
      uVar2 = 5;
    }
  }
  return uVar2;
}



// FUNCTION 1419861b0 FUN_1419861b0 body=364 status=ok
// SIG undefined FUN_1419861b0(void)

undefined8 FUN_1419861b0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_res8;
  int iStackX_c;
  int local_res10;
  int local_res14;
  undefined8 local_28 [2];
  
  cVar2 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0xd0);
    iVar3 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar5 = 0;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    piVar4 = (int *)(param_1 + 0xce);
    _local_res8 = CONCAT44(iVar5,iVar1);
    if (*(char *)(param_1 + 0xcf) == '\0') {
      piVar4 = &local_res8;
    }
    if (((int)*(undefined8 *)piVar4 == iVar1) &&
       ((int)((ulonglong)*(undefined8 *)piVar4 >> 0x20) == iVar5)) {
      _local_res8 = CONCAT44(iVar5,iVar1);
      if (iVar5 == 0) {
        if (0 < iVar1) {
          iVar1 = iVar1 + -1;
          iVar5 = *(int *)(*(longlong *)((longlong)iVar1 * 0x70 + *(longlong *)(param_1[9] + 0x18))
                          + 8);
          cVar2 = FUN_141945550(param_1[9],iVar1);
          if (cVar2 != '\0') {
            iVar3 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar3 = 0;
            }
            _local_res8 = CONCAT44(iVar3,iVar1);
          }
        }
      }
      else {
        iVar3 = 0;
        if (-1 < iVar5 + -1) {
          iVar3 = iVar5 + -1;
        }
        local_res10 = iVar1;
        local_res14 = iVar3;
        cVar2 = FUN_141954f70(param_1[9],&local_res10,1);
        if (cVar2 != '\0') {
          _local_res8 = CONCAT44(iVar3,iVar1);
        }
      }
      FUN_1419bc080(param_1 + 0xd0,param_1[9],&local_res8);
      if ((local_28 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
        *(undefined1 *)(param_1 + 0xcf) = 0;
      }
      FUN_1419a7100(param_1);
    }
    else {
      FUN_141980ac0(param_1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141986320 FUN_141986320 body=610 status=ok
// SIG undefined FUN_141986320(void)

undefined8 FUN_141986320(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_res8;
  int local_resc;
  int local_res10;
  int iStackX_14;
  int local_res18 [4];
  undefined8 local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  
  cVar3 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*(longlong *)*param_1 + 0x48))();
    if (cVar3 != '\0') {
      cVar3 = *(char *)(param_1 + 0xd1);
      iVar6 = *(int *)((longlong)param_1 + 0x684);
      iVar4 = (uint)(cVar3 == '\x01') + iVar6;
      local_res10 = *(int *)(param_1 + 0xd0);
      iStackX_14 = 0;
      if (-1 < iVar4) {
        iStackX_14 = iVar4;
      }
      piVar5 = (int *)(param_1 + 0xce);
      if (*(char *)(param_1 + 0xcf) == '\0') {
        piVar5 = &local_res10;
      }
      if (((int)*(undefined8 *)piVar5 != *(int *)(param_1 + 0xd0)) ||
         ((int)((ulonglong)*(undefined8 *)piVar5 >> 0x20) != iStackX_14)) {
        FUN_141980ac0(param_1);
        cVar3 = *(char *)(param_1 + 0xd1);
        iVar6 = *(int *)((longlong)param_1 + 0x684);
      }
      local_res8 = *(int *)(param_1 + 0xd0);
      iVar6 = (uint)(cVar3 == '\x01') + iVar6;
      local_resc = 0;
      if (-1 < iVar6) {
        local_resc = iVar6;
      }
      cVar3 = FUN_14195aa90(param_1[9],&local_res8);
      if (cVar3 != '\0') {
        local_res18[0] = local_res8 + 1;
        local_res18[1] = 0;
        FUN_1419bc080(param_1 + 0xd0,param_1[9],local_res18);
      }
      if ((local_58 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
        *(undefined1 *)(param_1 + 0xcf) = 0;
      }
      FUN_1419a7100(param_1);
      return 1;
    }
  }
  FSlateEditableTextLayout::ClearUndoStates(param_1);
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_48,param_1[9]);
  FText::FromString(local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,local_48 + 2,1);
  if ((*(int *)(param_1 + 0x89) != 0) && ((longlong *)param_1[0x88] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x88] + 0x18))();
    if (cVar3 != '\0') {
      FUN_1419a43a0(param_1,param_1 + 0x84);
      (**(code **)(*(longlong *)param_1[9] + 8))();
    }
  }
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x40))();
  if (cVar3 != '\0') {
    FUN_14199fd20(param_1);
  }
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if (cVar3 != '\0') {
    FUN_141891070(DAT_1469f4590,3);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar5 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return 1;
}



// FUNCTION 141986590 FUN_141986590 body=374 status=ok
// SIG undefined FUN_141986590(void)

undefined8 FUN_141986590(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_res8;
  int iStackX_c;
  undefined8 local_res10;
  undefined8 local_18 [2];
  
  cVar3 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar3 != '\0') {
    return 0;
  }
  local_res8 = *(int *)(param_1 + 0xd0);
  iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  iStackX_c = 0;
  if (-1 < iVar4) {
    iStackX_c = iVar4;
  }
  piVar5 = (int *)(param_1 + 0xce);
  if (*(char *)(param_1 + 0xcf) == '\0') {
    piVar5 = &local_res8;
  }
  if (((int)*(undefined8 *)piVar5 == local_res8) &&
     ((int)((ulonglong)*(undefined8 *)piVar5 >> 0x20) == iStackX_c)) {
    lVar2 = param_1[9];
    local_res10 = CONCAT44(iStackX_c,local_res8);
    iVar1 = *(int *)(*(longlong *)((longlong)local_res8 * 0x70 + *(longlong *)(lVar2 + 0x18)) + 8);
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = -1;
    }
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = -1;
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      if ((-1 < local_res8 + 1) && (local_res8 + 1 < *(int *)(lVar2 + 0x20))) {
        FTextLayout::RemoveLine(lVar2);
      }
    }
    else {
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (iStackX_c < iVar6) {
        FUN_141954f70(lVar2,&local_res8,1);
      }
      else if ((-1 < local_res8 + 1) && (local_res8 + 1 < *(int *)(lVar2 + 0x20))) {
        FUN_141945550(lVar2);
      }
    }
    FUN_1419bc080(param_1 + 0xd0,param_1[9],&local_res10);
    if ((local_18 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(undefined1 *)(param_1 + 0xcf) = 0;
    }
    FUN_1419a7100(param_1);
    return 1;
  }
  FUN_141980ac0(param_1);
  return 1;
}



// FUNCTION 141986740 FUN_141986740 body=750 status=ok
// SIG undefined FUN_141986740(void)

undefined8 FUN_141986740(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(char *)(param_1 + 0xef) != '\0') {
    return 0;
  }
  uVar9 = 0;
  if ((param_1[0xf0] != 0) && (param_1[0xf1] != 0)) {
    piVar1 = (int *)(param_1[0xf1] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      return 0;
    }
  }
  plVar7 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if ((plVar7 != (longlong *)0x0) && (*(char *)(param_1 + 0xbc) != '\0')) {
    plVar3 = (longlong *)param_1[0xbe];
    local_68[2] = param_1[0xbd];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_50 = plVar3;
    (**(code **)(*plVar7 + 0x28))(plVar7,local_68 + 2);
    plVar7 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
  }
  cVar5 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  if ((((cVar5 != '\0') && (*param_2 != 5)) && (local_78 != param_1 + 0xce)) &&
     (*(char *)(param_1 + 0xcf) != '\0')) {
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  if (*param_2 < 2) {
    uVar9 = 2;
  }
  else if (*param_2 == 3) {
    uVar9 = 3;
  }
  FSlateEditableTextLayout::ClearUndoStates(param_1);
  local_68[0] = 0;
  local_68[1] = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_68,param_1[9]);
  FText::FromString(local_38,local_68);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,local_38,uVar9);
  if (((*(int *)(param_1 + 0x89) != 0) && ((longlong *)param_1[0x88] != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)param_1[0x88] + 0x18))(), cVar5 != '\0')) {
    FUN_1419a43a0(param_1,param_1 + 0x84);
    (**(code **)(*(longlong *)param_1[9] + 8))();
  }
  FUN_1419a7100(param_1);
  if (*(char *)((longlong)param_1 + 0x66c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
  }
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_48);
  FUN_1418475e0(*puVar8,5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return 1;
}



// FUNCTION 141986a30 FUN_141986a30 body=908 status=ok
// SIG undefined FUN_141986a30(void)

undefined8 FUN_141986a30(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(char *)(param_1 + 0xef) != '\0') {
    return 0;
  }
  if ((param_1[0xf0] != 0) && (param_1[0xf1] != 0)) {
    piVar1 = (int *)(param_1[0xf1] + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      return 0;
    }
  }
  (**(code **)(*(longlong *)*param_1 + 0x58))();
  plVar8 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if (plVar8 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      *(undefined1 *)(param_1 + 0xbc) = 1;
      plVar3 = (longlong *)param_1[0xbe];
      local_68 = param_1[0xbd];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_60 = plVar3;
      plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,local_48,&local_68);
      plVar4 = param_1 + 0xbf;
      if (plVar4 != plVar9) {
        *plVar4 = *plVar9;
        *plVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc0,plVar9 + 1);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar9 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar3 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,0);
      }
    }
    FUN_14196ded0(param_1[0xbd]);
    plVar3 = (longlong *)param_1[0xbe];
    local_58 = param_1[0xbd];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_50 = plVar3;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    plVar8 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  if (((*(int *)(param_1 + 0x89) != 0) && ((longlong *)param_1[0x88] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x88] + 0x18))(), cVar6 != '\0')) {
    FUN_1419a43a0(param_1,param_1 + 0x84);
    (**(code **)(*(longlong *)param_1[9] + 8))();
  }
  FSlateEditableTextLayout::MakeUndoState(param_1,param_1 + 0xdf);
  if (((*param_2 & 0xfb) != 0) &&
     (cVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar6 != '\0')) {
    FUN_14198c170(param_1,1);
  }
  cVar6 = (**(code **)(*(longlong *)*param_1 + 0x20))();
  if (cVar6 != '\0') {
    FUN_14199fd20(param_1);
  }
  FUN_1419a7100(param_1);
  if (*(char *)((longlong)param_1 + 0x66c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
  }
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_38)
  ;
  FUN_1418475e0(*puVar10,5);
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
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return 1;
}



// FUNCTION 141986dc0 FUN_141986dc0 body=1167 status=ok
// SIG undefined FUN_141986dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141986dc0(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStack_208 [32];
  int local_1e8;
  int iStack_1e4;
  int local_1e0;
  int local_1dc;
  undefined8 local_1d8 [2];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar2 = *(ushort *)(param_3 + 0x18);
  switch(uVar2) {
  case 1:
  case 3:
  case 0xd:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x7f:
    *param_2 = 1;
    goto LAB_1419871b8;
  default:
    cVar5 = (*(code *)**(undefined8 **)*param_1)();
    if ((cVar5 == '\0') &&
       (cVar5 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,uVar2),
       cVar5 != '\0')) {
      FUN_14196cd00(param_1);
      cVar5 = (*(code *)**(undefined8 **)*param_1)();
      bVar4 = false;
      iVar10 = 0;
      if (cVar5 == '\0') {
        piVar1 = (int *)(param_1 + 0xd0);
        local_1e8 = *piVar1;
        iVar6 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
        iStack_1e4 = iVar10;
        if (-1 < iVar6) {
          iStack_1e4 = iVar6;
        }
        piVar7 = (int *)(param_1 + 0xce);
        if (*(char *)(param_1 + 0xcf) == '\0') {
          piVar7 = &local_1e8;
        }
        if (((int)*(undefined8 *)piVar7 != *piVar1) ||
           ((int)((ulonglong)*(undefined8 *)piVar7 >> 0x20) != iStack_1e4)) {
          FUN_141980ac0(param_1);
        }
        if (((uVar2 & 0xffe0) == 0) && (uVar2 != 9)) goto LAB_141987110;
        local_1e8 = *piVar1;
        lVar8 = (longlong)local_1e8;
        iVar6 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
        iStack_1e4 = iVar10;
        if (-1 < iVar6) {
          iStack_1e4 = iVar6;
        }
        lVar3 = *(longlong *)(param_1[9] + 0x18);
        FUN_1419449b0(param_1[9],&local_1e8,uVar2);
        if ((local_1d8 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
          *(undefined1 *)(param_1 + 0xcf) = 0;
        }
        iVar6 = *(int *)(*(longlong *)(lVar8 * 0x70 + lVar3) + 8);
        local_1e0 = local_1e8;
        local_1dc = iVar6 + -1;
        if (iVar6 == 0) {
          local_1dc = iVar10;
        }
        if (iStack_1e4 + 1 <= local_1dc) {
          local_1dc = iStack_1e4 + 1;
        }
        FUN_1419bc080(piVar1,param_1[9],&local_1e0);
        FUN_1419a7100(param_1);
        local_114 = local_114 & 0xffffff00;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        iVar10 = 4;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_1c8[0] = 1;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_148 = 0;
        local_140 = 0;
        local_118 = 0x20702;
        puVar9 = local_1c8;
      }
      else {
LAB_141987110:
        local_54 = local_54 & 0xffffff00;
        local_108[0] = 0;
        local_100 = 0;
        local_f8 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_88 = 0;
        local_80 = 0;
        bVar4 = true;
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
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0x20702;
        puVar9 = local_108;
      }
      FReply::FReply(param_2,puVar9);
      if (bVar4) {
        FUN_140438c20(local_108);
      }
      if (iVar10 != 0) {
        FUN_140438c20(local_1c8);
      }
LAB_1419871ab:
      FSlateEditableTextLayout::EndEditTransaction(param_1);
      return param_2;
    }
    break;
  case 8:
    cVar5 = (*(code *)**(undefined8 **)*param_1)();
    if (cVar5 == '\0') {
      FUN_14196cd00(param_1);
      cVar5 = FUN_1419861b0(param_1);
      if (cVar5 == '\0') {
        local_114 = local_114 & 0xffffff00;
        puVar9 = local_1c8;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_148 = 0;
        local_140 = 0;
        local_1c8[0] = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0x20702;
      }
      else {
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
        puVar9 = local_108;
      }
      FReply::FReply(param_2,puVar9);
      if (cVar5 != '\0') {
        FUN_140438c20(local_108);
        FSlateEditableTextLayout::EndEditTransaction(param_1);
        return param_2;
      }
      FUN_140438c20(local_1c8);
      goto LAB_1419871ab;
    }
    break;
  case 10:
    FReply::Handled(param_2);
    return param_2;
  }
  *param_2 = 0;
LAB_1419871b8:
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



// FUNCTION 1419872e0 FUN_1419872e0 body=6014 status=ok
// SIG undefined FUN_1419872e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1419872e0(undefined8 *param_1,char *param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_1c88 [32];
  undefined4 local_1c68;
  int iStack_1c64;
  undefined4 local_1c60;
  int local_1c5c;
  longlong local_1c58 [2];
  uint local_1c48 [5];
  undefined4 local_1c34;
  uint local_1c30 [5];
  undefined4 local_1c1c;
  undefined8 local_1c18;
  undefined4 local_1c10;
  undefined4 local_1c0c;
  uint local_1c08;
  undefined4 local_1c04;
  undefined8 local_1c00;
  undefined4 local_1bf8;
  undefined4 local_1bf4;
  uint local_1bf0;
  undefined4 local_1bec;
  undefined8 local_1be8;
  undefined4 local_1be0;
  undefined4 local_1bdc;
  undefined4 local_1bd8;
  undefined4 local_1bd4;
  undefined8 local_1bd0;
  undefined4 local_1bc8;
  undefined4 local_1bc4;
  undefined4 local_1bc0;
  undefined4 local_1bbc;
  longlong local_1bb8;
  undefined8 local_1bb0;
  longlong local_1ba8;
  undefined8 local_1ba0;
  undefined8 local_1b98;
  undefined1 local_1b90 [24];
  longlong local_1b78;
  undefined8 local_1b70;
  longlong local_1b68;
  undefined1 local_1b58 [8];
  undefined8 local_1b50;
  undefined8 local_1b48;
  undefined1 local_1b38;
  undefined8 local_1b30;
  undefined8 local_1b28;
  undefined8 uStack_1b20;
  undefined8 local_1b18;
  undefined8 uStack_1b10;
  undefined8 local_1b08;
  undefined8 uStack_1b00;
  undefined8 local_1af8;
  undefined8 uStack_1af0;
  undefined8 local_1ae8;
  undefined8 uStack_1ae0;
  undefined8 local_1ad8;
  undefined8 local_1ad0;
  undefined8 local_1ac8;
  undefined8 uStack_1ac0;
  undefined8 local_1ab8;
  undefined8 uStack_1ab0;
  undefined4 local_1aa8;
  uint local_1aa4;
  undefined1 local_1a98 [8];
  undefined8 local_1a90;
  undefined8 local_1a88;
  undefined1 local_1a78;
  undefined8 local_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  undefined8 local_1a38;
  undefined8 uStack_1a30;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined8 local_1a18;
  undefined8 local_1a10;
  undefined8 local_1a08;
  undefined8 uStack_1a00;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined4 local_19e8;
  uint local_19e4;
  undefined1 local_19d8 [8];
  undefined8 local_19d0;
  undefined8 local_19c8;
  undefined1 local_19b8;
  undefined8 local_19b0;
  undefined8 local_19a8;
  undefined8 uStack_19a0;
  undefined8 local_1998;
  undefined8 uStack_1990;
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 local_1950;
  undefined8 local_1948;
  undefined8 uStack_1940;
  undefined8 local_1938;
  undefined8 uStack_1930;
  undefined4 local_1928;
  uint local_1924;
  undefined1 local_1918 [8];
  undefined8 local_1910;
  undefined8 local_1908;
  undefined1 local_18f8;
  undefined8 local_18f0;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  undefined8 uStack_18a0;
  undefined8 local_1898;
  undefined8 local_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined8 uStack_1870;
  undefined4 local_1868;
  uint local_1864;
  undefined1 local_1858 [8];
  undefined8 local_1850;
  undefined8 local_1848;
  undefined1 local_1838;
  undefined8 local_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined8 local_1818;
  undefined8 uStack_1810;
  undefined8 local_1808;
  undefined8 uStack_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 local_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined4 local_17a8;
  uint local_17a4;
  undefined8 local_1798 [2];
  undefined1 local_1788 [192];
  undefined1 local_16c8 [192];
  undefined1 local_1608 [192];
  undefined1 local_1548 [192];
  undefined1 local_1488 [192];
  undefined1 local_13c8 [192];
  undefined1 local_1308 [192];
  undefined1 local_1248 [192];
  undefined1 local_1188 [192];
  undefined1 local_10c8 [192];
  undefined1 local_1008 [8];
  undefined8 local_1000;
  undefined8 local_ff8;
  undefined1 local_fe8;
  undefined8 local_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 local_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined4 local_f58;
  uint local_f54;
  undefined1 local_f48 [8];
  undefined8 local_f40;
  undefined8 local_f38;
  undefined1 local_f28;
  undefined8 local_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined4 local_e98;
  uint local_e94;
  undefined1 local_e88 [8];
  undefined8 local_e80;
  undefined8 local_e78;
  undefined1 local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined4 local_dd8;
  uint local_dd4;
  undefined1 local_dc8 [8];
  undefined8 local_dc0;
  undefined8 local_db8;
  undefined1 local_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 local_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined4 local_d18;
  uint local_d14;
  undefined1 local_d08 [8];
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined1 local_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined4 local_c58;
  uint local_c54;
  undefined1 local_c48 [8];
  undefined8 local_c40;
  undefined8 local_c38;
  undefined1 local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined4 local_b98;
  uint local_b94;
  undefined1 local_b88 [8];
  undefined8 local_b80;
  undefined8 local_b78;
  undefined1 local_b68;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined4 local_ad8;
  uint local_ad4;
  undefined1 local_ac8 [8];
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined1 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  uint local_a14;
  undefined1 local_a08 [8];
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined1 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined4 local_958;
  uint local_954;
  undefined1 local_948 [8];
  undefined8 local_940;
  undefined8 local_938;
  undefined1 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined4 local_898;
  uint local_894;
  undefined1 local_888 [8];
  undefined8 local_880;
  undefined8 local_878;
  undefined1 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined4 local_7d8;
  uint local_7d4;
  undefined1 local_7c8 [8];
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined1 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  uint local_714;
  undefined1 local_708 [8];
  undefined8 local_700;
  undefined8 local_6f8;
  undefined1 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined4 local_658;
  uint local_654;
  undefined1 local_648 [8];
  undefined8 local_640;
  undefined8 local_638;
  undefined1 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  uint local_594;
  undefined1 local_588 [192];
  undefined1 local_4c8 [192];
  undefined1 local_408 [192];
  undefined1 local_348 [192];
  undefined1 local_288 [192];
  undefined1 local_1c8 [192];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c88;
  lVar10 = 0;
  iVar7 = 0;
  local_1c68 = 0;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x20] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  param_2[0x50] = '\0';
  param_2[0x51] = '\0';
  param_2[0x52] = '\0';
  param_2[0x53] = '\0';
  param_2[0x54] = '\0';
  param_2[0x55] = '\0';
  param_2[0x56] = '\0';
  param_2[0x57] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  param_2[0x74] = '\0';
  param_2[0x75] = '\0';
  param_2[0x76] = '\0';
  param_2[0x77] = '\0';
  param_2[0x78] = '\0';
  param_2[0x79] = '\0';
  param_2[0x7a] = '\0';
  param_2[0x7b] = '\0';
  param_2[0x7c] = '\0';
  param_2[0x7d] = '\0';
  param_2[0x7e] = '\0';
  param_2[0x7f] = '\0';
  param_2[0x80] = '\0';
  param_2[0x81] = '\0';
  param_2[0x82] = '\0';
  param_2[0x83] = '\0';
  param_2[0x84] = '\0';
  param_2[0x85] = '\0';
  param_2[0x86] = '\0';
  param_2[0x87] = '\0';
  param_2[0x88] = '\0';
  param_2[0x89] = '\0';
  param_2[0x8a] = '\0';
  param_2[0x8b] = '\0';
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  param_2[0x94] = '\0';
  param_2[0x95] = '\0';
  param_2[0x96] = '\0';
  param_2[0x97] = '\0';
  param_2[0x98] = '\0';
  param_2[0x99] = '\0';
  param_2[0x9a] = '\0';
  param_2[0x9b] = '\0';
  param_2[0x9c] = '\0';
  param_2[0x9d] = '\0';
  param_2[0x9e] = '\0';
  param_2[0x9f] = '\0';
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  param_2[0xac] = '\0';
  param_2[0xad] = '\0';
  param_2[0xae] = '\0';
  param_2[0xaf] = '\0';
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  local_1bb0 = *(undefined8 *)(param_3 + 0x20);
  lVar12 = *(longlong *)(param_3 + 0x18);
  local_1ba8 = *(longlong *)(param_3 + 0x28);
  if (local_1ba8 != 0) {
    LOCK();
    *(int *)(local_1ba8 + 8) = *(int *)(local_1ba8 + 8) + 1;
    UNLOCK();
  }
  local_1bb8 = lVar12;
  if (lVar12 == DAT_1469e99e8) {
    local_1c48[2] = 0xbf800000;
    local_1c48[0] = (uint)((*(ushort *)(param_3 + 8) & 0xc) != 0);
    local_1c34 = 0x3f800000;
    local_1c48[1] = 0;
    local_1c48[4] = (uint)((*(ushort *)(param_3 + 8) & 3) != 0);
    local_1c48[3] = 0;
    cVar3 = FUN_14198ccb0(param_1,local_1c48);
    if (cVar3 == '\0') {
      local_f54 = local_f54 & 0xffffff00;
      puVar8 = local_1008;
      local_1008[0] = 0;
      local_1000 = 0;
      local_ff8 = 0;
      local_fe8 = 0;
      local_fe0 = 0;
      local_f88 = 0;
      local_f80 = 0;
      iVar9 = 4;
      local_fd8 = 0;
      uStack_fd0 = 0;
      local_fc8 = 0;
      uStack_fc0 = 0;
      local_fb8 = 0;
      uStack_fb0 = 0;
      local_fa8 = 0;
      uStack_fa0 = 0;
      local_f98 = 0;
      uStack_f90 = 0;
      local_f78 = 0;
      uStack_f70 = 0;
      local_f68 = 0;
      uStack_f60 = 0;
      local_f58 = 0x20702;
    }
    else {
      local_e94 = local_e94 & 0xffffff00;
      puVar8 = local_f48;
      local_f48[0] = 1;
      local_f40 = 0;
      local_f38 = 0;
      local_f28 = 0;
      local_f20 = 0;
      local_f18 = 0;
      uStack_f10 = 0;
      local_f08 = 0;
      uStack_f00 = 0;
      local_ef8 = 0;
      uStack_ef0 = 0;
      local_ee8 = 0;
      uStack_ee0 = 0;
      local_ed8 = 0;
      uStack_ed0 = 0;
      local_ec8 = 0;
      local_ec0 = 0;
      local_eb8 = 0;
      uStack_eb0 = 0;
      local_ea8 = 0;
      uStack_ea0 = 0;
      local_e98 = 0x20702;
      iVar9 = iVar7;
      iVar7 = 2;
    }
    FReply::FReply(local_288,puVar8);
    if (iVar9 != 0) {
      FUN_140438c20(local_1008);
    }
    if (iVar7 != 0) {
      FUN_140438c20(local_f48);
    }
    FUN_140439160(param_2,local_288);
    puVar8 = local_288;
  }
  else {
    iVar9 = 0;
    if (lVar12 == DAT_1469e9a18) {
      local_1c30[1] = 0;
      local_1c30[2] = 0x3f800000;
      local_1c1c = 0x3f800000;
      local_1c30[0] = (uint)((*(ushort *)(param_3 + 8) & 0xc) != 0);
      local_1c30[3] = 0;
      local_1c30[4] = (uint)((*(ushort *)(param_3 + 8) & 3) != 0);
      cVar3 = FUN_14198ccb0(param_1,local_1c30);
      if (cVar3 == '\0') {
        local_dd4 = local_dd4 & 0xffffff00;
        puVar8 = local_e88;
        local_e88[0] = 0;
        local_e80 = 0;
        local_e78 = 0;
        local_e68 = 0;
        local_e60 = 0;
        local_e08 = 0;
        local_e00 = 0;
        iVar7 = 0x10;
        local_e58 = 0;
        uStack_e50 = 0;
        local_e48 = 0;
        uStack_e40 = 0;
        local_e38 = 0;
        uStack_e30 = 0;
        local_e28 = 0;
        uStack_e20 = 0;
        local_e18 = 0;
        uStack_e10 = 0;
        local_df8 = 0;
        uStack_df0 = 0;
        local_de8 = 0;
        uStack_de0 = 0;
        local_dd8 = 0x20702;
      }
      else {
        local_d14 = local_d14 & 0xffffff00;
        puVar8 = local_dc8;
        local_dc8[0] = 1;
        iVar9 = 8;
        local_dc0 = 0;
        local_db8 = 0;
        local_da8 = 0;
        local_da0 = 0;
        local_d98 = 0;
        uStack_d90 = 0;
        local_d88 = 0;
        uStack_d80 = 0;
        local_d78 = 0;
        uStack_d70 = 0;
        local_d68 = 0;
        uStack_d60 = 0;
        local_d58 = 0;
        uStack_d50 = 0;
        local_d48 = 0;
        local_d40 = 0;
        local_d38 = 0;
        uStack_d30 = 0;
        local_d28 = 0;
        uStack_d20 = 0;
        local_d18 = 0x20702;
      }
      FReply::FReply(local_1c8,puVar8);
      if (iVar7 != 0) {
        FUN_140438c20(local_e88);
      }
      if (iVar9 != 0) {
        FUN_140438c20(local_dc8);
      }
      FUN_140439160(param_2,local_1c8);
      puVar8 = local_1c8;
    }
    else if (lVar12 == DAT_1469e9a00) {
      local_1c10 = 0;
      local_1c04 = 0x3f800000;
      local_1c08 = (uint)((*(byte *)(param_3 + 8) & 3) != 0);
      local_1c0c = 0xbf800000;
      local_1c18 = 0;
      cVar3 = FUN_14198ccb0(0x3f800000,&local_1c18);
      if (cVar3 == '\0') {
        local_c54 = local_c54 & 0xffffff00;
        puVar8 = local_d08;
        local_d08[0] = 0;
        local_d00 = 0;
        local_cf8 = 0;
        local_ce8 = 0;
        local_ce0 = 0;
        local_c88 = 0;
        local_c80 = 0;
        iVar7 = 0x40;
        local_cd8 = 0;
        uStack_cd0 = 0;
        local_cc8 = 0;
        uStack_cc0 = 0;
        local_cb8 = 0;
        uStack_cb0 = 0;
        local_ca8 = 0;
        uStack_ca0 = 0;
        local_c98 = 0;
        uStack_c90 = 0;
        local_c78 = 0;
        uStack_c70 = 0;
        local_c68 = 0;
        uStack_c60 = 0;
        local_c58 = 0x20702;
      }
      else {
        local_7d4 = local_7d4 & 0xffffff00;
        puVar8 = local_888;
        local_888[0] = 1;
        iVar9 = 0x20;
        local_880 = 0;
        local_878 = 0;
        local_868 = 0;
        local_860 = 0;
        local_858 = 0;
        uStack_850 = 0;
        local_848 = 0;
        uStack_840 = 0;
        local_838 = 0;
        uStack_830 = 0;
        local_828 = 0;
        uStack_820 = 0;
        local_818 = 0;
        uStack_810 = 0;
        local_808 = 0;
        local_800 = 0;
        local_7f8 = 0;
        uStack_7f0 = 0;
        local_7e8 = 0;
        uStack_7e0 = 0;
        local_7d8 = 0x20702;
      }
      FReply::FReply(local_588,puVar8);
      if (iVar7 != 0) {
        FUN_140438c20(local_d08);
      }
      if (iVar9 != 0) {
        FUN_140438c20(local_888);
      }
      FUN_140439160(param_2,local_588);
      puVar8 = local_588;
    }
    else if (lVar12 == DAT_1469e9a30) {
      local_1c00 = 0;
      local_1bf4 = 0x3f800000;
      local_1bf0 = (uint)((*(byte *)(param_3 + 8) & 3) != 0);
      local_1bf8 = 0;
      local_1bec = 0x3f800000;
      cVar3 = FUN_14198ccb0(0,&local_1c00);
      if (cVar3 == '\0') {
        local_b94 = local_b94 & 0xffffff00;
        puVar8 = local_c48;
        local_c48[0] = 0;
        local_c40 = 0;
        local_c38 = 0;
        local_c28 = 0;
        local_c20 = 0;
        local_bc8 = 0;
        local_bc0 = 0;
        iVar7 = 0x100;
        local_c18 = 0;
        uStack_c10 = 0;
        local_c08 = 0;
        uStack_c00 = 0;
        local_bf8 = 0;
        uStack_bf0 = 0;
        local_be8 = 0;
        uStack_be0 = 0;
        local_bd8 = 0;
        uStack_bd0 = 0;
        local_bb8 = 0;
        uStack_bb0 = 0;
        local_ba8 = 0;
        uStack_ba0 = 0;
        local_b98 = 0x20702;
      }
      else {
        local_ad4 = local_ad4 & 0xffffff00;
        puVar8 = local_b88;
        local_b88[0] = 1;
        iVar9 = 0x80;
        local_b80 = 0;
        local_b78 = 0;
        local_b68 = 0;
        local_b60 = 0;
        local_b58 = 0;
        uStack_b50 = 0;
        local_b48 = 0;
        uStack_b40 = 0;
        local_b38 = 0;
        uStack_b30 = 0;
        local_b28 = 0;
        uStack_b20 = 0;
        local_b18 = 0;
        uStack_b10 = 0;
        local_b08 = 0;
        local_b00 = 0;
        local_af8 = 0;
        uStack_af0 = 0;
        local_ae8 = 0;
        uStack_ae0 = 0;
        local_ad8 = 0x20702;
      }
      FReply::FReply(local_4c8,puVar8);
      if (iVar7 != 0) {
        FUN_140438c20(local_c48);
      }
      if (iVar9 != 0) {
        FUN_140438c20(local_b88);
      }
      FUN_140439160(param_2,local_4c8);
      puVar8 = local_4c8;
    }
    else if (lVar12 == DAT_1469e99d0) {
      lVar12 = 2;
      if ((*(ushort *)(param_3 + 8) & 0xc) != 0) {
        lVar12 = lVar10;
      }
      FUN_14198c170(param_1,lVar12,(*(ushort *)(param_3 + 8) & 3) != 0);
      local_1864 = local_1864 & 0xffffff00;
      local_1918[0] = 1;
      local_18e8 = 0;
      uStack_18e0 = 0;
      local_18d8 = 0;
      uStack_18d0 = 0;
      local_18c8 = 0;
      uStack_18c0 = 0;
      local_18b8 = 0;
      uStack_18b0 = 0;
      local_18a8 = 0;
      uStack_18a0 = 0;
      local_1888 = 0;
      uStack_1880 = 0;
      local_1878 = 0;
      uStack_1870 = 0;
      local_1910 = 0;
      local_1908 = 0;
      local_18f8 = 0;
      local_18f0 = 0;
      local_1898 = 0;
      local_1890 = 0;
      local_1868 = 0x20702;
      FUN_140439160(param_2,local_1918);
      puVar8 = local_1918;
    }
    else if (lVar12 == DAT_1469e99b8) {
      uVar6 = 3;
      if ((*(ushort *)(param_3 + 8) & 0xc) != 0) {
        uVar6 = 1;
      }
      FUN_14198c170(param_1,uVar6,(*(ushort *)(param_3 + 8) & 3) != 0);
      local_17a4 = local_17a4 & 0xffffff00;
      local_1858[0] = 1;
      local_1828 = 0;
      uStack_1820 = 0;
      local_1818 = 0;
      uStack_1810 = 0;
      local_1808 = 0;
      uStack_1800 = 0;
      local_17f8 = 0;
      uStack_17f0 = 0;
      local_17e8 = 0;
      uStack_17e0 = 0;
      local_17c8 = 0;
      uStack_17c0 = 0;
      local_17b8 = 0;
      uStack_17b0 = 0;
      local_1850 = 0;
      local_1848 = 0;
      local_1838 = 0;
      local_1830 = 0;
      local_17d8 = 0;
      local_17d0 = 0;
      local_17a8 = 0x20702;
      FUN_140439160(param_2,local_1858);
      puVar8 = local_1858;
    }
    else if (lVar12 == DAT_1469e9988) {
      FUN_14198c170(param_1,4,(*(byte *)(param_3 + 8) & 3) != 0);
      local_19e4 = local_19e4 & 0xffffff00;
      local_1a98[0] = 1;
      local_1a68 = 0;
      uStack_1a60 = 0;
      local_1a58 = 0;
      uStack_1a50 = 0;
      local_1a48 = 0;
      uStack_1a40 = 0;
      local_1a38 = 0;
      uStack_1a30 = 0;
      local_1a28 = 0;
      uStack_1a20 = 0;
      local_1a08 = 0;
      uStack_1a00 = 0;
      local_19f8 = 0;
      uStack_19f0 = 0;
      local_1a90 = 0;
      local_1a88 = 0;
      local_1a78 = 0;
      local_1a70 = 0;
      local_1a18 = 0;
      local_1a10 = 0;
      local_19e8 = 0x20702;
      FUN_140439160(param_2,local_1a98);
      puVar8 = local_1a98;
    }
    else if (lVar12 == DAT_1469e99a0) {
      FUN_14198c170(param_1,5,(*(byte *)(param_3 + 8) & 3) != 0);
      local_1aa4 = local_1aa4 & 0xffffff00;
      local_1b58[0] = 1;
      local_1b28 = 0;
      uStack_1b20 = 0;
      local_1b18 = 0;
      uStack_1b10 = 0;
      local_1b08 = 0;
      uStack_1b00 = 0;
      local_1af8 = 0;
      uStack_1af0 = 0;
      local_1ae8 = 0;
      uStack_1ae0 = 0;
      local_1ac8 = 0;
      uStack_1ac0 = 0;
      local_1ab8 = 0;
      uStack_1ab0 = 0;
      local_1b50 = 0;
      local_1b48 = 0;
      local_1b38 = 0;
      local_1b30 = 0;
      local_1ad8 = 0;
      local_1ad0 = 0;
      local_1aa8 = 0x20702;
      FUN_140439160(param_2,local_1b58);
      puVar8 = local_1b58;
    }
    else {
      if ((lVar12 == DAT_1469e9910) &&
         (cVar3 = (*(code *)**(undefined8 **)*param_1)(), cVar3 == '\0')) {
        FUN_14196cd00(param_1);
        FUN_141986320(param_1);
        local_1924 = local_1924 & 0xffffff00;
        local_19d8[0] = 1;
        local_19a8 = 0;
        uStack_19a0 = 0;
        local_1998 = 0;
        uStack_1990 = 0;
        local_1988 = 0;
        uStack_1980 = 0;
        local_1978 = 0;
        uStack_1970 = 0;
        local_1968 = 0;
        uStack_1960 = 0;
        local_1948 = 0;
        uStack_1940 = 0;
        local_1938 = 0;
        uStack_1930 = 0;
        local_19d0 = 0;
        local_19c8 = 0;
        local_19b8 = 0;
        local_19b0 = 0;
        local_1958 = 0;
        local_1950 = 0;
        local_1928 = 0x20702;
        FUN_140439160(param_2,local_19d8);
        FUN_140438c20(local_19d8);
        FSlateEditableTextLayout::EndEditTransaction(param_1);
        goto LAB_1419889e1;
      }
      if ((lVar12 == DAT_1469e9a60) &&
         (cVar3 = (*(code *)**(undefined8 **)*param_1)(), cVar3 == '\0')) {
        uVar1 = *(ushort *)(param_3 + 8);
        if (((uVar1 & 0xc) != 0) && (((uVar1 & 0x30) == 0 && ((uVar1 & 3) == 0)))) {
          local_1be0 = 0x3f800000;
          local_1be8 = 1;
          local_1bdc = 0;
          local_1bd8 = 1;
          local_1bd4 = 0x3f800000;
          FUN_14198ccb0(param_1,&local_1be8);
        }
        FUN_14196cd00(param_1);
        cVar3 = FUN_141986590(param_1);
        if (cVar3 == '\0') {
          local_a14 = local_a14 & 0xffffff00;
          puVar8 = local_ac8;
          local_ac8[0] = 0;
          local_ac0 = 0;
          local_ab8 = 0;
          local_aa8 = 0;
          local_aa0 = 0;
          local_a48 = 0;
          local_a40 = 0;
          iVar7 = 0x400;
          local_a98 = 0;
          uStack_a90 = 0;
          local_a88 = 0;
          uStack_a80 = 0;
          local_a78 = 0;
          uStack_a70 = 0;
          local_a68 = 0;
          uStack_a60 = 0;
          local_a58 = 0;
          uStack_a50 = 0;
          local_a38 = 0;
          uStack_a30 = 0;
          local_a28 = 0;
          uStack_a20 = 0;
          local_a18 = 0x20702;
        }
        else {
          local_954 = local_954 & 0xffffff00;
          puVar8 = local_a08;
          local_a08[0] = 1;
          iVar9 = 0x200;
          local_a00 = 0;
          local_9f8 = 0;
          local_9e8 = 0;
          local_9e0 = 0;
          local_9d8 = 0;
          uStack_9d0 = 0;
          local_9c8 = 0;
          uStack_9c0 = 0;
          local_9b8 = 0;
          uStack_9b0 = 0;
          local_9a8 = 0;
          uStack_9a0 = 0;
          local_998 = 0;
          uStack_990 = 0;
          local_988 = 0;
          local_980 = 0;
          local_978 = 0;
          uStack_970 = 0;
          local_968 = 0;
          uStack_960 = 0;
          local_958 = 0x20702;
        }
        FReply::FReply(local_108,puVar8);
        if (iVar7 != 0) {
          FUN_140438c20(local_ac8);
        }
        if (iVar9 != 0) {
          FUN_140438c20(local_a08);
        }
        FUN_140439160(param_2,local_108);
        FUN_140438c20(local_108);
        FSlateEditableTextLayout::EndEditTransaction(param_1);
        goto LAB_1419889e1;
      }
      if (lVar12 == DAT_1469e98f8) {
        cVar3 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,9);
        if (cVar3 != '\0') {
          uVar6 = FReply::Handled(local_1188);
          FUN_140439160(param_2,uVar6);
          puVar8 = local_1188;
          goto LAB_1419889dc;
        }
      }
      if (lVar12 != DAT_1469e9958) {
        if (((lVar12 == DAT_1469e9a60) && ((*(byte *)(param_3 + 8) & 3) != 0)) &&
           (cVar3 = FSlateEditableTextLayout::CanExecuteCut(param_1), cVar3 != '\0')) {
          FSlateEditableTextLayout::CutSelectedTextToClipboard(param_1);
          uVar6 = FReply::Handled(local_10c8);
          FUN_140439160(param_2,uVar6);
          puVar8 = local_10c8;
        }
        else if (lVar12 == DAT_1469e9a48) {
          if (((*(byte *)(param_3 + 8) & 0xc) == 0) ||
             (cVar3 = FSlateEditableTextLayout::CanExecuteCopy(param_1), cVar3 == '\0')) {
            if (((lVar12 != DAT_1469e9a48) || ((*(byte *)(param_3 + 8) & 3) == 0)) ||
               (cVar3 = FSlateEditableTextLayout::CanExecutePaste(param_1), cVar3 == '\0'))
            goto LAB_1419883f2;
            FSlateEditableTextLayout::PasteTextFromClipboard(param_1);
            uVar6 = FReply::Handled(local_1248);
            FUN_140439160(param_2,uVar6);
            puVar8 = local_1248;
          }
          else {
            FUN_141980560(param_1);
            uVar6 = FReply::Handled(local_1788);
            FUN_140439160(param_2,uVar6);
            puVar8 = local_1788;
          }
        }
        else {
LAB_1419883f2:
          cVar3 = FSlateEditableTextLayout::CanExecuteUndo(param_1);
          if ((((cVar3 == '\0') || (lVar12 != DAT_1469e98e0)) ||
              ((*(ushort *)(param_3 + 8) & 0x30) == 0)) || ((*(ushort *)(param_3 + 8) & 3) != 0)) {
            cVar3 = (*(code *)**(undefined8 **)*param_1)();
            if (((cVar3 == '\0') && (*(int *)(param_1 + 0xd5) != -1)) &&
               (cVar3 = (**(code **)(*(longlong *)param_1[0xbd] + 8))(), cVar3 == '\0')) {
              if (((lVar12 != DAT_1469e9da8) || ((*(byte *)(param_3 + 8) & 0xc) == 0)) &&
                 ((lVar12 != DAT_1469e9dc0 ||
                  (((*(ushort *)(param_3 + 8) & 0xc) == 0 || ((*(ushort *)(param_3 + 8) & 3) == 0)))
                  ))) {
                if (lVar12 != DAT_1469e98e0) goto LAB_141988809;
                if (((*(ushort *)(param_3 + 8) & 0x30) == 0) ||
                   ((*(ushort *)(param_3 + 8) & 3) == 0)) goto LAB_14198860e;
              }
              cVar3 = (*(code *)**(undefined8 **)*param_1)();
              if ((cVar3 == '\0') &&
                 ((*(int *)(param_1 + 0xd5) != -1 &&
                  (cVar3 = (**(code **)(*(longlong *)param_1[0xbd] + 8))(), cVar3 == '\0')))) {
                iVar7 = *(int *)(param_1 + 0xd5);
                iVar11 = iVar7 + 1;
                if (iVar11 < *(int *)(param_1 + 0xd4)) {
                  lVar12 = (longlong)iVar11 * 0x40 + param_1[0xd3];
                  FSlateEditableTextLayout::SaveText(param_1,lVar12);
                  cVar3 = FUN_1419a1d70(param_1,lVar12,0);
                  if (cVar3 != '\0') {
                    (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,lVar12);
                  }
                  SlateEditableTextTypes::FCursorInfo::RestoreFromUndo(param_1 + 0xd0,lVar12 + 0x28)
                  ;
                  TOptional<FTextLocation>::operator=(param_1 + 0xce,lVar12 + 0x18);
                  local_1c60 = *(undefined4 *)(param_1 + 0xd0);
                  iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') +
                          *(int *)((longlong)param_1 + 0x684);
                  local_1c5c = iVar9;
                  if (-1 < iVar4) {
                    local_1c5c = iVar4;
                  }
                  (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_1c60);
                  FUN_1419a7100(param_1);
                  *(int *)(param_1 + 0xd5) = iVar11;
                  if (*(int *)(param_1 + 0xd4) <= iVar7 + 2) {
                    *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
                    TArray<SlateEditableTextTypes::FUndoState,FDefaultAllocator>::RemoveAtImpl
                              (param_1 + 0xd3,*(int *)(param_1 + 0xd4) + -1,1,1);
                  }
                }
              }
              uVar6 = FReply::Handled(local_1608);
              FUN_140439160(param_2,uVar6);
              puVar8 = local_1608;
            }
            else {
LAB_14198860e:
              if ((((lVar12 == DAT_1469e98e0) &&
                   (uVar1 = *(ushort *)(param_3 + 8), (uVar1 & 0xc) != 0)) && ((uVar1 & 0x30) == 0))
                 && (((uVar1 & 3) == 0 &&
                     (cVar3 = (*(code *)**(undefined8 **)*param_1)(), cVar3 == '\0')))) {
                FUN_14196cd00(param_1);
                local_1bc8 = 0xbf800000;
                local_1bbc = 0x3f800000;
                local_1bc4 = 0;
                local_1bd0 = 1;
                local_1bc0 = 1;
                FUN_14198ccb0(param_1,&local_1bd0);
                cVar3 = FUN_1419861b0(param_1);
                if (cVar3 == '\0') {
                  local_654 = local_654 & 0xffffff00;
                  puVar8 = local_708;
                  local_708[0] = 0;
                  local_700 = 0;
                  local_6f8 = 0;
                  local_6e8 = 0;
                  local_6e0 = 0;
                  local_688 = 0;
                  local_680 = 0;
                  iVar7 = 0x4000;
                  local_6d8 = 0;
                  uStack_6d0 = 0;
                  local_6c8 = 0;
                  uStack_6c0 = 0;
                  local_6b8 = 0;
                  uStack_6b0 = 0;
                  local_6a8 = 0;
                  uStack_6a0 = 0;
                  local_698 = 0;
                  uStack_690 = 0;
                  local_678 = 0;
                  uStack_670 = 0;
                  local_668 = 0;
                  uStack_660 = 0;
                  local_658 = 0x20702;
                }
                else {
                  local_594 = local_594 & 0xffffff00;
                  puVar8 = local_648;
                  local_648[0] = 1;
                  iVar9 = 0x2000;
                  local_640 = 0;
                  local_638 = 0;
                  local_628 = 0;
                  local_620 = 0;
                  local_618 = 0;
                  uStack_610 = 0;
                  local_608 = 0;
                  uStack_600 = 0;
                  local_5f8 = 0;
                  uStack_5f0 = 0;
                  local_5e8 = 0;
                  uStack_5e0 = 0;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  local_5c8 = 0;
                  local_5c0 = 0;
                  local_5b8 = 0;
                  uStack_5b0 = 0;
                  local_5a8 = 0;
                  uStack_5a0 = 0;
                  local_598 = 0x20702;
                }
                FReply::FReply(local_348,puVar8);
                if (iVar7 != 0) {
                  FUN_140438c20(local_708);
                }
                if (iVar9 != 0) {
                  FUN_140438c20(local_648);
                }
                FUN_140439160(param_2,local_348);
                FUN_140438c20(local_348);
                FSlateEditableTextLayout::EndEditTransaction(param_1);
                goto LAB_1419889e1;
              }
LAB_141988809:
              if (lVar12 == DAT_1469e9f70) {
                uVar1 = *(ushort *)(param_3 + 8);
                if (((uVar1 & 0xc) == 0) || ((uVar1 & 0x30) != 0)) {
                  if (((uVar1 & 0xc) != 0) || ((uVar1 & 0x30) != 0)) goto LAB_14198895f;
                  FUN_14196abc0(param_1,(uVar1 & 3) != 0);
                  uVar6 = FReply::Handled(local_1488);
                  FUN_140439160(param_2,uVar6);
                  puVar8 = local_1488;
                }
                else {
                  cVar3 = FSlateEditableTextLayout::AnyTextSelected(param_1);
                  if (cVar3 == '\0') {
                    uVar6 = FUN_1404b03b0();
                    FText::FText(local_1b90,uVar6);
                  }
                  else {
                    local_1c68 = *(undefined4 *)(param_1 + 0xd0);
                    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') +
                            *(int *)((longlong)param_1 + 0x684);
                    if (-1 < iVar7) {
                      iVar9 = iVar7;
                    }
                    iStack_1c64 = iVar9;
                    puVar5 = param_1 + 0xce;
                    if (*(char *)(param_1 + 0xcf) == '\0') {
                      puVar5 = (undefined8 *)&local_1c68;
                    }
                    local_1ba0 = *puVar5;
                    local_1b98 = CONCAT44(iVar9,*(undefined4 *)(param_1 + 0xd0));
                    local_1c58[0] = 0;
                    local_1c58[1] = 0;
                    FTextLayout::GetSelectionAsText(param_1[9],local_1c58,&local_1ba0);
                    FText::FromString(local_1b90,local_1c58);
                    if (local_1c58[0] != 0) {
                      FMemory::Free();
                    }
                  }
                  FSlateEditableTextLayout::BeginSearch(param_1,local_1b90,1,(uVar1 & 3) != 0);
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (local_1b90);
                  uVar6 = FReply::Handled(local_1548);
                  FUN_140439160(param_2,uVar6);
                  puVar8 = local_1548;
                }
              }
              else {
LAB_14198895f:
                if (((*(ushort *)(param_3 + 8) & 0x30) == 0) &&
                   ((*(ushort *)(param_3 + 8) & 0xc) == 0)) {
                  local_1b70 = *(undefined8 *)(param_3 + 0x20);
                  local_1b78 = *(longlong *)(param_3 + 0x18);
                  local_1b68 = *(longlong *)(param_3 + 0x28);
                  if (local_1b68 != 0) {
                    LOCK();
                    *(int *)(local_1b68 + 8) = *(int *)(local_1b68 + 8) + 1;
                    UNLOCK();
                  }
                  lVar10 = 1;
                  if ((local_1b78 == DAT_1469e98f8) || (lVar10 = 1, *(int *)(param_3 + 0x30) == 0))
                  goto LAB_1419889a9;
                  bVar2 = true;
                  lVar10 = 1;
                }
                else {
LAB_1419889a9:
                  bVar2 = false;
                }
                if (lVar10 != 0) {
                  FKey::~FKey(&local_1b78);
                }
                if (!bVar2) goto LAB_1419889e1;
                uVar6 = FReply::Handled(local_13c8);
                FUN_140439160(param_2,uVar6);
                puVar8 = local_13c8;
              }
            }
          }
          else {
            FSlateEditableTextLayout::Undo(param_1);
            uVar6 = FReply::Handled(local_16c8);
            FUN_140439160(param_2,uVar6);
            puVar8 = local_16c8;
          }
        }
        goto LAB_1419889dc;
      }
      cVar3 = FText::IsEmpty(param_1 + 0x9d);
      if (cVar3 == '\0') {
        uVar6 = FUN_1404b03b0();
        FText::operator=(param_1 + 0x9d,uVar6);
        FUN_1419a7100(param_1);
LAB_1419881a7:
        local_714 = local_714 & 0xffffff00;
        puVar8 = local_7c8;
        local_7c8[0] = 1;
        local_798 = 0;
        uStack_790 = 0;
        local_788 = 0;
        uStack_780 = 0;
        iVar9 = 0x800;
        local_778 = 0;
        uStack_770 = 0;
        local_768 = 0;
        uStack_760 = 0;
        local_758 = 0;
        uStack_750 = 0;
        local_738 = 0;
        uStack_730 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_7c0 = 0;
        local_7b8 = 0;
        local_7a8 = 0;
        local_7a0 = 0;
        local_748 = 0;
        local_740 = 0;
        local_718 = 0x20702;
      }
      else {
        cVar3 = FSlateEditableTextLayout::AnyTextSelected(param_1);
        if (cVar3 != '\0') {
          if ((local_1798 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
            *(undefined1 *)(param_1 + 0xcf) = 0;
          }
          FUN_1419a7100(param_1);
          goto LAB_1419881a7;
        }
        cVar3 = (*(code *)**(undefined8 **)*param_1)();
        if (((cVar3 == '\0') &&
            (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x30))(), cVar3 != '\0')) &&
           (cVar3 = FUN_14198aa50(param_1), cVar3 != '\0')) {
          cVar3 = FUN_14198aa50(param_1);
          if (cVar3 != '\0') {
            FUN_1419a1d70(param_1,param_1 + 0xdf,0);
            (**(code **)(*(longlong *)param_1[9] + 8))();
            (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,param_1 + 0xdf,3);
          }
          goto LAB_1419881a7;
        }
        local_894 = local_894 & 0xffffff00;
        puVar8 = local_948;
        local_948[0] = 0;
        local_940 = 0;
        local_938 = 0;
        local_928 = 0;
        local_920 = 0;
        local_8c8 = 0;
        local_8c0 = 0;
        iVar7 = 0x1000;
        local_918 = 0;
        uStack_910 = 0;
        local_908 = 0;
        uStack_900 = 0;
        local_8f8 = 0;
        uStack_8f0 = 0;
        local_8e8 = 0;
        uStack_8e0 = 0;
        local_8d8 = 0;
        uStack_8d0 = 0;
        local_8b8 = 0;
        uStack_8b0 = 0;
        local_8a8 = 0;
        uStack_8a0 = 0;
        local_898 = 0x20702;
      }
      FReply::FReply(local_408,puVar8);
      if (iVar7 != 0) {
        FUN_140438c20(local_948);
      }
      if (iVar9 != 0) {
        FUN_140438c20(local_7c8);
      }
      FUN_140439160(param_2,local_408);
      puVar8 = local_408;
    }
  }
LAB_1419889dc:
  FUN_140438c20(puVar8);
LAB_1419889e1:
  if ((*param_2 == '\0') && (cVar3 = FUN_1418b2460(param_1[0xed],param_3), cVar3 != '\0')) {
    uVar6 = FReply::Handled(local_1308);
    FUN_140439160(param_2,uVar6);
    FUN_140438c20(local_1308);
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1bb0);
  return param_2;
}



// FUNCTION 141988a60 FUN_141988a60 body=300 status=ok
// SIG undefined FUN_141988a60(void)

undefined1 *
FUN_141988a60(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar6 = lVar4 == DAT_1469e9868;
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
  if (bVar6) {
    FUN_14199fdb0(param_1,param_3,param_4 + 0x18);
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



// FUNCTION 141988b90 FUN_141988b90 body=1826 status=ok
// SIG undefined FUN_141988b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_141988b90(undefined8 *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_228 [32];
  undefined4 local_208 [2];
  longlong local_200;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  float local_1e8;
  float local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined8 local_170;
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
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_d8;
  undefined8 local_cc;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_208[0] = 0;
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
  local_200 = param_3;
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_1c0)
  ;
  cVar6 = FUN_141846080(*puVar7);
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1b8 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  if (cVar6 != '\0') {
    return param_2;
  }
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar8 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar12 = false;
  if (lVar8 == DAT_1469e9868) {
    plVar11 = (longlong *)CONCAT44(fStack_1f4,local_1f8);
  }
  else {
    plVar11 = *(longlong **)(param_4 + 0x48);
    lVar8 = *(longlong *)(param_4 + 0x38);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar12 = true;
    if (lVar8 != DAT_1469e9880) {
      bVar5 = false;
      goto LAB_141988d03;
    }
  }
  bVar5 = true;
LAB_141988d03:
  if ((bVar12) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
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
  if (bVar5) {
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_1b0);
    lVar8 = FUN_141845d20(*puVar7,local_208);
    cVar6 = *(char *)(lVar8 + 1);
    local_208[0]._0_2_ = (ushort)(byte)local_208[0];
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1a8 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
    if (cVar6 == '\0') {
      FSlateEditableTextLayout::LoadText(param_1);
      *(undefined1 *)((longlong)param_1 + 0x739) = 1;
    }
    plVar4 = *(longlong **)(param_4 + 0x48);
    lVar8 = *(longlong *)(param_4 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    bVar12 = lVar8 == DAT_1469e9868;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar4 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
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
    if (bVar12) {
      if ((*(byte *)(param_4 + 8) & 3) == 0) {
        if ((&local_d8 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
          *(undefined1 *)(param_1 + 0xcf) = 0;
        }
        puVar10 = &local_1d8;
        local_1d8 = 0;
        local_1d4 = 1;
        local_1c8 = 0;
        fVar13 = 1.0 / (*(float *)(local_200 + 0x1c) * *(float *)(local_200 + 0x28) -
                       *(float *)(local_200 + 0x20) * *(float *)(local_200 + 0x24));
        local_1d0 = fVar13 * *(float *)(local_200 + 0x28) *
                    (*(float *)(param_4 + 0x18) - *(float *)(local_200 + 0x2c)) -
                    fVar13 * *(float *)(local_200 + 0x24) *
                    (*(float *)(param_4 + 0x1c) - *(float *)(local_200 + 0x30));
        local_1cc = fVar13 * *(float *)(local_200 + 0x1c) *
                    (*(float *)(param_4 + 0x1c) - *(float *)(local_200 + 0x30)) -
                    fVar13 * *(float *)(local_200 + 0x20) *
                    (*(float *)(param_4 + 0x18) - *(float *)(local_200 + 0x2c));
        local_1c4 = *(undefined4 *)(local_200 + 8);
      }
      else {
        puVar10 = &local_1f0;
        local_1f0 = 0;
        local_1ec = 1;
        local_1e0 = 1;
        fVar13 = 1.0 / (*(float *)(local_200 + 0x1c) * *(float *)(local_200 + 0x28) -
                       *(float *)(local_200 + 0x20) * *(float *)(local_200 + 0x24));
        local_1e8 = fVar13 * *(float *)(local_200 + 0x28) *
                    (*(float *)(param_4 + 0x18) - *(float *)(local_200 + 0x2c)) -
                    fVar13 * *(float *)(local_200 + 0x24) *
                    (*(float *)(param_4 + 0x1c) - *(float *)(local_200 + 0x30));
        local_1dc = *(undefined4 *)(local_200 + 8);
        local_1e4 = (*(float *)(param_4 + 0x1c) - *(float *)(local_200 + 0x30)) *
                    fVar13 * *(float *)(local_200 + 0x1c) -
                    fVar13 * *(float *)(local_200 + 0x20) *
                    (*(float *)(param_4 + 0x18) - *(float *)(local_200 + 0x2c));
      }
      FUN_14198ccb0(param_1,puVar10);
      *(undefined1 *)(param_1 + 0xe7) = 1;
    }
    else {
      plVar4 = *(longlong **)(param_4 + 0x48);
      lVar8 = *(longlong *)(param_4 + 0x38);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      bVar12 = lVar8 == DAT_1469e9880;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar4 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
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
      if ((bVar12) && (cVar6 = FSlateEditableTextLayout::AnyTextSelected(param_1), cVar6 != '\0')) {
        fVar13 = 1.0 / (*(float *)(local_200 + 0x1c) * *(float *)(local_200 + 0x28) -
                       *(float *)(local_200 + 0x20) * *(float *)(local_200 + 0x24));
        local_1f8 = ((*(float *)(param_4 + 0x18) - *(float *)(local_200 + 0x2c)) *
                     fVar13 * *(float *)(local_200 + 0x28) -
                    (*(float *)(param_4 + 0x1c) - *(float *)(local_200 + 0x30)) *
                    fVar13 * *(float *)(local_200 + 0x24)) * *(float *)(local_200 + 8);
        fStack_1f4 = ((*(float *)(param_4 + 0x1c) - *(float *)(local_200 + 0x30)) *
                      fVar13 * *(float *)(local_200 + 0x1c) -
                     (*(float *)(param_4 + 0x18) - *(float *)(local_200 + 0x2c)) *
                     fVar13 * *(float *)(local_200 + 0x20)) * *(float *)(local_200 + 8);
        cVar6 = FUN_14198bfc0(param_1,&local_1f8);
        if ((cVar6 == '\0') &&
           ((&local_cc != param_1 + 0xce && (*(char *)(param_1 + 0xcf) != '\0')))) {
          *(undefined1 *)(param_1 + 0xcf) = 0;
        }
      }
    }
    local_e4 = local_e4 & 0xffffff00;
    local_198[0] = 1;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_190 = 0;
    local_188 = 0;
    local_178 = 0;
    local_170 = 0;
    local_118 = 0;
    local_110 = 0;
    local_e8 = 0x20702;
    FUN_140439160(param_2,local_198);
    FUN_140438c20(local_198);
    uVar9 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_c0);
    FUN_140693ff0(param_2,uVar9);
    uVar9 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_b0);
    FUN_14185b9a0(param_2,uVar9,0,0);
  }
  return param_2;
}



// FUNCTION 1419892c0 FUN_1419892c0 body=2608 status=ok
// SIG undefined FUN_1419892c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419892c0(undefined8 *param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_728 [32];
  longlong *local_708;
  longlong local_700;
  undefined4 *local_6f8;
  undefined1 local_6f0;
  undefined8 *local_6e8;
  undefined1 *local_6e0;
  undefined1 local_6d8;
  undefined1 local_6c8;
  undefined1 local_6c7;
  int local_6c4;
  undefined4 local_6c0 [2];
  longlong *local_6b8;
  longlong *local_6b0;
  float local_6a8;
  float local_6a4;
  float local_6a0;
  float local_69c;
  float local_698;
  float local_694;
  longlong local_690;
  longlong local_688;
  undefined8 local_680;
  longlong *local_678;
  longlong local_668;
  longlong *plStack_660;
  longlong local_658;
  longlong *plStack_650;
  undefined1 local_648 [8];
  undefined1 local_640 [8];
  longlong *local_638;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [8];
  undefined8 local_610;
  undefined8 local_608;
  undefined1 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  uint local_564;
  undefined1 local_558 [8];
  undefined8 local_550;
  undefined8 local_548;
  undefined1 local_538;
  undefined8 local_530;
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
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  uint local_4a4;
  undefined8 local_498 [2];
  longlong *local_488;
  undefined8 local_478 [2];
  undefined1 local_468 [8];
  undefined8 local_460 [36];
  undefined8 *local_340;
  int local_338;
  undefined4 uStack_334;
  undefined1 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined8 *local_318;
  int local_310;
  undefined4 uStack_30c;
  undefined1 local_308 [8];
  undefined1 local_300 [288];
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [352];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  local_6c0[0] = 0;
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
  local_690 = param_4;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_640)
  ;
  cVar4 = FUN_141846080(*puVar5);
  if (local_638 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_638 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_638)(local_638);
      LOCK();
      piVar1 = (int *)((longlong)local_638 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_638 + 8))(local_638,1);
      }
    }
  }
  if (cVar4 == '\0') {
    return param_2;
  }
  plVar7 = *(longlong **)(param_4 + 0x48);
  lVar9 = *(longlong *)(param_4 + 0x38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if ((lVar9 == DAT_1469e9868) && (*(char *)(param_1 + 0xe7) != '\0')) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  if (bVar12) {
    *(undefined1 *)(param_1 + 0xe7) = 0;
    if (*(char *)((longlong)param_1 + 0x739) != '\0') {
      if ((*(char *)((longlong)param_1 + 0x73a) == '\0') &&
         (cVar4 = (**(code **)(*(longlong *)*param_1 + 0x20))(), cVar4 != '\0')) {
        FUN_14198c170(param_1,1);
        FUN_14199fd20(param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x739) = 0;
    }
    local_564 = local_564 & 0xffffff00;
    local_618[0] = 1;
    local_610 = 0;
    local_608 = 0;
    local_5f8 = 0;
    local_5f0 = 0;
    local_5e8 = 0;
    uStack_5e0 = 0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    uStack_5b0 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_598 = 0;
    local_590 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_578 = 0;
    uStack_570 = 0;
    local_568 = 0x20702;
    FUN_140439160(param_2,local_618);
    puVar6 = local_618;
    goto LAB_141989cb6;
  }
  plVar7 = *(longlong **)(param_4 + 0x48);
  lVar9 = *(longlong *)(param_4 + 0x38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 != DAT_1469e9880;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  if (bVar12) {
    return param_2;
  }
  local_688 = param_4 + 0x18;
  local_6a8 = param_3[0xb];
  local_698 = param_3[1] * param_3[9];
  local_6a0 = *param_3 * param_3[7];
  local_694 = param_3[1] * param_3[10];
  local_69c = *param_3 * param_3[8];
  local_6a4 = param_3[0xc];
  cVar4 = FSlateRotatedRect::IsUnderLocation(&local_6a8,local_688);
  if (cVar4 != '\0') {
    puVar6 = *(undefined1 **)(param_4 + 0x10);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)FWidgetPath::FWidgetPath(local_1a8);
      bVar12 = false;
      bVar3 = false;
      local_6c4 = 4;
    }
    else {
      local_468[0] = *puVar6;
      local_340 = (undefined8 *)0x0;
      iVar11 = *(int *)(puVar6 + 0x130);
      puVar5 = *(undefined8 **)(puVar6 + 0x128);
      local_338 = iVar11;
      if (iVar11 == 0) {
        uStack_334 = 0;
      }
      else {
        FUN_141857eb0(local_460,iVar11);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)(puVar6 + 8);
        }
        puVar10 = local_460;
        if (local_340 != (undefined8 *)0x0) {
          puVar10 = local_340;
        }
        do {
          uVar2 = puVar5[1];
          *puVar10 = *puVar5;
          puVar10[1] = uVar2;
          uVar2 = puVar5[3];
          puVar10[2] = puVar5[2];
          puVar10[3] = uVar2;
          uVar2 = puVar5[5];
          puVar10[4] = puVar5[4];
          puVar10[5] = uVar2;
          puVar10[6] = puVar5[6];
          puVar10[7] = puVar5[7];
          lVar9 = puVar5[8];
          puVar10[8] = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 9;
          iVar11 = iVar11 + -1;
          puVar10 = puVar10 + 9;
        } while (iVar11 != 0);
      }
      local_330 = puVar6[0x138];
      local_328 = *(undefined8 *)(puVar6 + 0x140);
      local_320 = *(longlong *)(puVar6 + 0x148);
      if (local_320 != 0) {
        LOCK();
        *(int *)(local_320 + 8) = *(int *)(local_320 + 8) + 1;
        UNLOCK();
      }
      local_318 = (undefined8 *)0x0;
      iVar11 = *(int *)(puVar6 + 0x158);
      puVar5 = *(undefined8 **)(puVar6 + 0x150);
      local_310 = iVar11;
      if (iVar11 == 0) {
        uStack_30c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_318,iVar11);
        puVar10 = local_318;
        do {
          *puVar10 = *puVar5;
          lVar9 = puVar5[1];
          puVar10[1] = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          puVar10 = puVar10 + 2;
          puVar5 = puVar5 + 2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      bVar12 = true;
      local_6c4 = 0;
      bVar3 = true;
      puVar6 = local_468;
    }
    local_308[0] = *puVar6;
    local_1e0 = 0;
    if (*(longlong *)(puVar6 + 0x128) == 0) {
      _guard_xfg_dispatch_icall_nop(local_300,puVar6 + 8,0x120);
    }
    if (local_1e0 != 0) {
      FMemory::Free();
    }
    local_1e0 = *(undefined8 *)(puVar6 + 0x128);
    *(undefined8 *)(puVar6 + 0x128) = 0;
    local_1d8 = *(undefined4 *)(puVar6 + 0x130);
    local_1d4 = *(undefined4 *)(puVar6 + 0x134);
    *(undefined8 *)(puVar6 + 0x130) = 0;
    local_1d0 = puVar6[0x138];
    local_1c8 = *(undefined8 *)(puVar6 + 0x140);
    local_1c0 = *(undefined8 *)(puVar6 + 0x148);
    *(undefined8 *)(puVar6 + 0x148) = 0;
    *(undefined8 *)(puVar6 + 0x140) = 0;
    local_1b8 = 0;
    local_1b8 = *(undefined8 *)(puVar6 + 0x150);
    *(undefined8 *)(puVar6 + 0x150) = 0;
    local_1b0 = *(undefined4 *)(puVar6 + 0x158);
    local_1ac = *(undefined4 *)(puVar6 + 0x15c);
    *(undefined8 *)(puVar6 + 0x158) = 0;
    if (local_6c4 != 0) {
      FUN_140458830(local_1a8);
      bVar12 = bVar3;
    }
    if (bVar12) {
      FUN_140458830(local_468);
    }
    (**(code **)(*(longlong *)*param_1 + 0x90))((longlong *)*param_1,&local_668);
    if (local_668 != 0) {
      *(undefined1 *)(param_1 + 0xef) = 1;
      if (param_1 + 0xf0 != local_498) {
        param_1[0xf0] = 0;
        plVar7 = (longlong *)param_1[0xf1];
        param_1[0xf1] = 0;
        if (plVar7 != (longlong *)0x0) {
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
      puVar5 = (undefined8 *)FUN_141845410(local_690,local_630);
      local_680 = *puVar5;
      local_678 = (longlong *)puVar5[1];
      if (local_678 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_678 + 1) = (int)local_678[1] + 1;
        UNLOCK();
      }
      local_658 = local_668;
      plStack_650 = plStack_660;
      local_6c7 = 0;
      local_6c0[0] = 5;
      if (plStack_660 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_660 + 1) = (int)plStack_660[1] + 1;
        UNLOCK();
      }
      local_6e0 = &local_6c8;
      local_6d8 = 1;
      local_6e8 = &DAT_1468b5d88;
      local_6f0 = 1;
      local_6f8 = local_6c0;
      local_700 = local_688;
      local_708 = &local_658;
      FUN_1418b8580(DAT_1469f4590,&local_6b8,&local_680,local_308);
      plVar7 = plStack_650;
      if (plStack_650 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_650 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_650)(plStack_650);
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
      plVar7 = local_678;
      if (local_678 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_678 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_678)(local_678);
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
      if (local_628 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_628 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_628)(local_628);
          LOCK();
          piVar1 = (int *)((longlong)local_628 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_628 + 8))(local_628,1);
          }
        }
      }
      if (local_6b8 == (longlong *)0x0) {
        *(undefined1 *)(param_1 + 0xef) = 0;
        if (param_1 + 0xf0 != local_478) {
          param_1[0xf0] = 0;
          plVar7 = (longlong *)param_1[0xf1];
          param_1[0xf1] = 0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              lVar9 = *plVar7;
              goto LAB_141989b9e;
            }
          }
        }
      }
      else {
        plVar7 = (longlong *)(**(code **)(*local_6b8 + 0x28))();
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        local_488 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          plVar8[1] = (longlong)param_1;
          *plVar8 = (longlong)&PTR_GetPoolName_144d60ee8;
          plVar8[2] = (longlong)FUN_1419929e0;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[4] = lVar9;
          *plVar8 = (longlong)&PTR_GetPoolName_144d60f30;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,local_648);
          iVar11 = (int)plVar7[1];
          *(int *)(plVar7 + 1) = iVar11 + 1;
          if (*(int *)((longlong)plVar7 + 0xc) < iVar11 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar11);
          }
          puVar5 = (undefined8 *)((longlong)iVar11 * 0x10 + *plVar7);
          *puVar5 = plVar8;
          *(undefined4 *)(puVar5 + 1) = 3;
        }
        plVar7 = local_6b0;
        if (local_6b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
          UNLOCK();
        }
        *(undefined1 *)(param_1 + 0xef) = 0;
        param_1[0xf0] = local_6b8;
        plVar8 = (longlong *)param_1[0xf1];
        if (local_6b0 != plVar8) {
          if (local_6b0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_6b0 + 0xc) = *(int *)((longlong)local_6b0 + 0xc) + 1;
            UNLOCK();
            plVar8 = (longlong *)param_1[0xf1];
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          param_1[0xf1] = plVar7;
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              lVar9 = *plVar7;
LAB_141989b9e:
              (**(code **)(lVar9 + 8))(plVar7,1);
            }
          }
        }
      }
      if (local_6b0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_6b0 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_6b0)(local_6b0);
          LOCK();
          piVar1 = (int *)((longlong)local_6b0 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_6b0 + 8))(local_6b0,1);
          }
        }
      }
    }
    if (plStack_660 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_660 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_660)(plStack_660);
        LOCK();
        piVar1 = (int *)((longlong)plStack_660 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_660 + 8))(plStack_660,1);
        }
      }
    }
    FUN_140458830(local_308);
  }
  local_4a4 = local_4a4 & 0xffffff00;
  local_558[0] = 1;
  local_550 = 0;
  local_548 = 0;
  local_538 = 0;
  local_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0x20702;
  FUN_140439160(param_2,local_558);
  puVar6 = local_558;
LAB_141989cb6:
  FUN_140438c20(puVar6);
  FUN_1406a1ac0(param_2);
  return param_2;
}



// FUNCTION 141989cf0 FUN_141989cf0 body=666 status=ok
// SIG undefined FUN_141989cf0(void)

undefined1 *
FUN_141989cf0(undefined8 *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  bool bVar8;
  float fVar9;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  bVar8 = false;
  if (*(char *)(param_1 + 0xe7) != '\0') {
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_a8);
    bVar8 = true;
    cVar6 = FUN_141846080(*puVar7);
    if ((cVar6 != '\0') &&
       ((*(float *)(param_4 + 0x28) != (float)DAT_1468b5d88 ||
        (*(float *)(param_4 + 0x2c) != DAT_1468b5d88._4_4_)))) {
      bVar4 = true;
      goto LAB_141989d73;
    }
  }
  bVar4 = false;
LAB_141989d73:
  if ((bVar8) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (bVar4) {
    local_98 = 0;
    local_94 = 1;
    local_88 = 1;
    fVar9 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                  *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
    local_90 = (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
               *(float *)(param_3 + 0x28) * fVar9 -
               (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
               *(float *)(param_3 + 0x24) * fVar9;
    local_84 = *(undefined4 *)(param_3 + 8);
    local_8c = (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
               *(float *)(param_3 + 0x1c) * fVar9 -
               (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
               *(float *)(param_3 + 0x20) * fVar9;
    FUN_14198ccb0(param_1,&local_98);
    *(undefined1 *)((longlong)param_1 + 0x73a) = 1;
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



// FUNCTION 141989f90 FUN_141989f90 body=2066 status=ok
// SIG undefined FUN_141989f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141989f90(longlong param_1,int param_2,undefined8 param_3,int param_4,int param_5,
                  float param_6,undefined8 *param_7,longlong *param_8)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int *piVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int *local_b0;
  uint local_a8;
  int local_a4;
  longlong *local_a0;
  uint local_98;
  int local_94;
  undefined8 local_90;
  longlong lStack_88;
  ulonglong local_80;
  
  puVar5 = param_7;
  iVar7 = (**(code **)*param_7)(param_7);
  iVar8 = SSplitter::FindResizeableSlotBeforeHandle(param_5,puVar5);
  iVar9 = 0;
  uVar17 = 0;
  local_b0 = (int *)0x0;
  local_a4 = 0;
  if (param_4 == 0) {
    iVar9 = SSplitter::FindResizeableSlotAfterHandle(param_5,puVar5);
    if (iVar9 < iVar7) {
      local_a8 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_b0,0);
      uVar17 = (ulonglong)local_a8;
      *local_b0 = iVar9;
    }
  }
  else if (param_4 - 1U < 2) {
    param_5 = param_5 + 1;
    iVar7 = (**(code **)*puVar5)(puVar5);
    for (lVar12 = (longlong)param_5; lVar12 < iVar7; lVar12 = lVar12 + 1) {
      lVar13 = *(longlong *)(*(longlong *)(puVar5[2] + lVar12 * 8) + 0x10);
      if (((*(int *)(lVar13 + 0xc0) != 0) && (*(longlong **)(lVar13 + 0xb8) != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar13 + 0xb8) + 0x18))(), cVar6 != '\0')) {
        if (*(int *)(lVar13 + 0xc0) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar13 + 0xb8);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&param_7);
        *(char *)(lVar13 + 0xb0) = (char)param_7;
      }
      if (*(char *)(lVar13 + 0xb0) != DAT_1464b9ee9) {
        lVar13 = *(longlong *)(puVar5[2] + lVar12 * 8);
        if (((*(int *)(lVar13 + 0x30) != 0) && (*(longlong **)(lVar13 + 0x28) != (longlong *)0x0))
           && (cVar6 = (**(code **)(**(longlong **)(lVar13 + 0x28) + 0x18))(), cVar6 != '\0')) {
          if (*(int *)(lVar13 + 0x30) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(lVar13 + 0x28);
          }
          uVar21 = (**(code **)(*plVar10 + 0x38))();
          *(undefined4 *)(lVar13 + 0x20) = uVar21;
        }
        if (*(int *)(lVar13 + 0x20) != 0) {
          iVar16 = (int)uVar17;
          local_a8 = iVar16 + 1;
          if (iVar9 < (int)local_a8) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_b0,uVar17);
            iVar9 = local_a4;
          }
          uVar17 = (ulonglong)local_a8;
          local_b0[iVar16] = param_5;
        }
      }
      param_5 = param_5 + 1;
    }
  }
  plVar10 = param_8;
  if ((-1 < iVar8) && (0 < (int)uVar17)) {
    plVar18 = (longlong *)0x0;
    iVar9 = 0;
    uVar15 = 0;
    local_a0 = (longlong *)0x0;
    local_94 = 0;
    if (0 < (int)uVar17) {
      piVar19 = local_b0;
      do {
        lVar12 = (longlong)*piVar19;
        iVar7 = (int)uVar15;
        local_90 = *(longlong *)(puVar5[2] + lVar12 * 8);
        local_98 = iVar7 + 1;
        fVar25 = *(float *)(*plVar10 + lVar12 * 0x14);
        lStack_88 = *plVar10 + lVar12 * 0x14;
        param_7 = (undefined8 *)
                  CONCAT44(fVar25 * *(float *)(lStack_88 + 0x10),
                           fVar25 * *(float *)(lStack_88 + 0xc));
        local_80 = CONCAT44(local_80._4_4_,
                            *(undefined4 *)
                             ((longlong)&param_7 + (ulonglong)(-(uint)(param_2 != 0) & 4)));
        if (iVar9 < (int)local_98) {
          TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
                    (&local_a0,uVar15);
          plVar18 = local_a0;
          iVar9 = local_94;
        }
        uVar15 = (ulonglong)local_98;
        piVar19 = piVar19 + 1;
        plVar18[(longlong)iVar7 * 3] = local_90;
        (plVar18 + (longlong)iVar7 * 3)[1] = lStack_88;
        plVar18[(longlong)iVar7 * 3 + 2] = local_80;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    lVar11 = (longlong)iVar8;
    uVar17 = (ulonglong)(-(uint)(param_2 != 0) & 4);
    iVar9 = 0;
    lVar12 = *(longlong *)(puVar5[2] + lVar11 * 8);
    lVar13 = *param_8;
    fVar25 = *(float *)(lVar13 + lVar11 * 0x14);
    param_7 = (undefined8 *)
              CONCAT44(fVar25 * *(float *)(lVar13 + 0x10 + lVar11 * 0x14),
                       fVar25 * *(float *)(lVar13 + 0xc + lVar11 * 0x14));
    fVar25 = *(float *)((longlong)&param_7 + uVar17);
    fVar23 = fVar25 + param_6;
    if (fVar25 + param_6 <= *(float *)(param_1 + 0x260)) {
      fVar23 = *(float *)(param_1 + 0x260);
    }
    fVar23 = fVar23 - fVar25;
    iVar7 = (int)uVar15;
    fVar24 = fVar23;
    if (0 < iVar7) {
      do {
        if (fVar23 == 0.0) break;
        fVar22 = fVar23;
        if (param_4 != 1) {
          fVar22 = fVar23 / (float)iVar7;
        }
        fVar23 = 0.0;
        if (*(int *)(param_1 + 0x23c) == 1) {
          bVar3 = true;
          lVar13 = (longlong)(iVar7 + -1);
          if (-1 < iVar7 + -1) {
            if (2 < lVar13) {
              fVar23 = *(float *)(param_1 + 0x260);
              pfVar14 = (float *)(plVar18 + lVar13 * 3 + -4);
              do {
                if (!bVar3) goto LAB_14198a4af;
                pfVar2 = *(float **)(pfVar14 + 10);
                param_7 = (undefined8 *)CONCAT44(*pfVar2 * pfVar2[4],*pfVar2 * pfVar2[3]);
                fVar1 = fVar23;
                if (fVar23 <= *(float *)((longlong)&param_7 + uVar17)) {
                  fVar1 = *(float *)((longlong)&param_7 + uVar17);
                }
                fVar20 = fVar1 - fVar22;
                if (fVar1 - fVar22 <= fVar23) {
                  fVar20 = fVar23;
                }
                pfVar14[0xc] = fVar20;
                fVar23 = *(float *)(param_1 + 0x260);
                if (fVar20 != fVar23) {
LAB_14198a49f:
                  bVar3 = false;
                  goto LAB_14198a4af;
                }
                pfVar2 = *(float **)(pfVar14 + 4);
                param_7 = (undefined8 *)CONCAT44(*pfVar2 * pfVar2[4],*pfVar2 * pfVar2[3]);
                fVar1 = *(float *)((longlong)&param_7 + uVar17);
                if (*(float *)((longlong)&param_7 + uVar17) <= fVar23) {
                  fVar1 = fVar23;
                }
                fVar20 = fVar1 - fVar22;
                if (fVar1 - fVar22 <= fVar23) {
                  fVar20 = fVar23;
                }
                pfVar14[6] = fVar20;
                fVar23 = *(float *)(param_1 + 0x260);
                if (fVar20 != fVar23) goto LAB_14198a49f;
                pfVar2 = *(float **)(pfVar14 + -2);
                param_7 = (undefined8 *)CONCAT44(*pfVar2 * pfVar2[4],*pfVar2 * pfVar2[3]);
                fVar1 = *(float *)((longlong)&param_7 + uVar17);
                if (*(float *)((longlong)&param_7 + uVar17) <= fVar23) {
                  fVar1 = fVar23;
                }
                fVar20 = fVar1 - fVar22;
                if (fVar1 - fVar22 <= fVar23) {
                  fVar20 = fVar23;
                }
                *pfVar14 = fVar20;
                fVar23 = *(float *)(param_1 + 0x260);
                if (fVar20 != fVar23) goto LAB_14198a49f;
                pfVar2 = *(float **)(pfVar14 + -8);
                param_7 = (undefined8 *)CONCAT44(*pfVar2 * pfVar2[4],*pfVar2 * pfVar2[3]);
                fVar1 = *(float *)((longlong)&param_7 + uVar17);
                if (*(float *)((longlong)&param_7 + uVar17) <= fVar23) {
                  fVar1 = fVar23;
                }
                fVar20 = fVar1 - fVar22;
                if (fVar1 - fVar22 <= fVar23) {
                  fVar20 = fVar23;
                }
                pfVar14[-6] = fVar20;
                fVar23 = *(float *)(param_1 + 0x260);
                bVar3 = fVar20 == fVar23;
                lVar13 = lVar13 + -4;
                pfVar14 = pfVar14 + -0x18;
              } while (2 < lVar13);
            }
            if (-1 < lVar13) {
              pfVar14 = (float *)(plVar18 + lVar13 * 3 + 2);
              do {
                bVar4 = !bVar3;
                bVar3 = false;
                if (bVar4) break;
                pfVar2 = *(float **)(pfVar14 + -2);
                fVar23 = *(float *)(param_1 + 0x260);
                param_7 = (undefined8 *)CONCAT44(*pfVar2 * pfVar2[4],*pfVar2 * pfVar2[3]);
                fVar1 = *(float *)((longlong)&param_7 + uVar17);
                if (*(float *)((longlong)&param_7 + uVar17) <= fVar23) {
                  fVar1 = fVar23;
                }
                fVar20 = fVar1 - fVar22;
                if (fVar1 - fVar22 <= fVar23) {
                  fVar20 = fVar23;
                }
                *pfVar14 = fVar20;
                bVar3 = fVar20 == *(float *)(param_1 + 0x260);
                pfVar14 = pfVar14 + -6;
                lVar13 = lVar13 + -1;
              } while (-1 < lVar13);
            }
          }
LAB_14198a4af:
          fVar23 = 0.0;
          if (bVar3) {
            fVar24 = 0.0;
          }
        }
        else {
          pfVar14 = (float *)(plVar18 + 2);
          iVar8 = 0;
          do {
            if ((param_4 != 1) || (iVar8 == iVar7 + -1)) {
              pfVar2 = *(float **)(pfVar14 + -2);
              fVar1 = *(float *)(param_1 + 0x260);
              param_7 = (undefined8 *)CONCAT44(*pfVar2 * pfVar2[4],*pfVar2 * pfVar2[3]);
              fVar20 = *(float *)((longlong)&param_7 + uVar17);
              if (*(float *)((longlong)&param_7 + uVar17) <= fVar1) {
                fVar20 = fVar1;
              }
              fVar20 = fVar20 - fVar22;
              if (fVar1 <= fVar20) {
                fVar1 = fVar20;
              }
              *pfVar14 = fVar1;
              fVar23 = fVar23 + (fVar1 - fVar20);
            }
            iVar8 = iVar8 + 1;
            pfVar14 = pfVar14 + 6;
            plVar18 = local_a0;
          } while (iVar8 < iVar7);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar7);
    }
    fVar25 = (fVar24 - fVar23) + fVar25;
    if (fVar25 <= *(float *)(param_1 + 0x260)) {
      fVar25 = *(float *)(param_1 + 0x260);
    }
    if (((*(int *)(lVar12 + 0x48) != 0) && (*(longlong **)(lVar12 + 0x40) != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x18))(), plVar18 = local_a0,
       cVar6 != '\0')) {
      if (*(int *)(lVar12 + 0x48) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(lVar12 + 0x40);
      }
      uVar21 = (**(code **)(*plVar10 + 0x38))();
      *(undefined4 *)(lVar12 + 0x38) = uVar21;
      plVar18 = local_a0;
    }
    fVar23 = *(float *)(lVar12 + 0x38);
    uVar17 = uVar15;
    fVar24 = fVar25;
    if (0 < iVar7) {
      do {
        local_80 = plVar18[2];
        lVar13 = *plVar18;
        fVar24 = fVar24 + (float)local_80;
        if (((*(int *)(lVar13 + 0x48) != 0) && (*(longlong **)(lVar13 + 0x40) != (longlong *)0x0))
           && (cVar6 = (**(code **)(**(longlong **)(lVar13 + 0x40) + 0x18))(), cVar6 != '\0')) {
          if (*(int *)(lVar13 + 0x48) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(lVar13 + 0x40);
          }
          uVar21 = (**(code **)(*plVar10 + 0x38))();
          *(undefined4 *)(lVar13 + 0x38) = uVar21;
        }
        fVar23 = fVar23 + *(float *)(lVar13 + 0x38);
        plVar18 = plVar18 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    fVar25 = fVar23 * fVar25 * (1.0 / fVar24);
    if (((*(int *)(lVar12 + 0x58) == 0) || (*(longlong **)(lVar12 + 0x50) == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x18))(), cVar6 == '\0')) {
      lStack_88 = 0;
      local_80 = local_80 & 0xffffffff00000000;
      *(float *)(lVar12 + 0x38) = fVar25;
      local_90._0_5_ = CONCAT14(1,fVar25);
      *(undefined1 *)(lVar12 + 0x3c) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x40,&lStack_88);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&lStack_88);
    }
    else if (*(int *)(lVar12 + 0x58) == 0) {
      (**(code **)(_DAT_00000000 + 0x38))(0,fVar25);
    }
    else {
      (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x38))(*(longlong **)(lVar12 + 0x50),fVar25);
    }
    plVar10 = local_a0;
    plVar18 = local_a0;
    if (0 < iVar7) {
      do {
        local_80 = plVar18[2];
        uVar21 = (undefined4)(local_80 >> 0x20);
        lVar12 = *plVar18;
        fVar25 = (float)local_80 * fVar23 * (1.0 / fVar24);
        if (((*(int *)(lVar12 + 0x58) == 0) || (*(longlong **)(lVar12 + 0x50) == (longlong *)0x0))
           || (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x18))(), cVar6 == '\0')) {
          *(float *)(lVar12 + 0x38) = fVar25;
          local_90._0_5_ = CONCAT14(1,fVar25);
          lStack_88 = 0;
          local_80 = local_80 & 0xffffffff00000000;
          *(undefined1 *)(lVar12 + 0x3c) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x40,&lStack_88);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&lStack_88);
        }
        else if (*(int *)(lVar12 + 0x58) == 0) {
          (**(code **)(_DAT_00000000 + 0x38))(0,CONCAT44(uVar21,fVar25));
        }
        else {
          (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x38))
                    (*(longlong **)(lVar12 + 0x50),CONCAT44(uVar21,fVar25));
        }
        uVar15 = uVar15 - 1;
        plVar18 = plVar18 + 3;
      } while (uVar15 != 0);
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
  }
  if (local_b0 != (int *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14198a7b0 FUN_14198a7b0 body=525 status=ok
// SIG undefined FUN_14198a7b0(void)

undefined8 FUN_14198a7b0(longlong param_1,int param_2,float *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float local_res8;
  float local_resc;
  float fVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  lVar2 = (longlong)param_2 * 0xd0;
  fVar11 = *param_3 - *(float *)(lVar2 + 0x88 + lVar1);
  fVar10 = param_3[1] - *(float *)(lVar2 + 0x8c + lVar1);
  if ((fVar11 != 0.0) || (fVar10 != 0.0)) {
    uVar4 = FGenericPlatformMath::Atan2(fVar10,fVar11);
    uVar5 = __libm_sse2_sincosf_(uVar4);
    fVar6 = (float)((ulonglong)uVar5 >> 0x20);
    fVar7 = (2.0 / *(float *)(lVar2 + 0x98 + lVar1)) * fVar6;
    fVar8 = (2.0 / *(float *)(lVar2 + 0x9c + lVar1)) * (float)uVar5;
    fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    if (fVar8 * fVar8 < fVar11 * fVar11 + fVar10 * fVar10) {
      fVar10 = fVar8 * (float)uVar5;
      fVar11 = fVar8 * fVar6;
    }
  }
  pfVar3 = (float *)(lVar1 + 0x80 + lVar2);
  *pfVar3 = fVar11;
  pfVar3[1] = fVar10;
  fVar10 = *(float *)(lVar2 + 0x88 + *(longlong *)(param_1 + 0x208));
  fVar11 = *(float *)(lVar2 + 0x8c + *(longlong *)(param_1 + 0x208));
  local_res8 = fVar10 + *pfVar3;
  local_resc = fVar11 + pfVar3[1];
  SVirtualJoystick::AlignBoxIntoScreen(param_1,&local_res8,lVar1 + 0xa0 + lVar2,param_4);
  *pfVar3 = local_res8 - fVar10;
  pfVar3[1] = local_resc - fVar11;
  return 1;
}



// FUNCTION 14198a9c0 FUN_14198a9c0 body=50 status=ok
// SIG undefined FUN_14198a9c0(void)

undefined8 FUN_14198a9c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x778) != '\0') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x780) != 0) && (*(longlong *)(param_1 + 0x788) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x788) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14198aa00 FUN_14198aa00 body=41 status=ok
// SIG undefined FUN_14198aa00(void)

bool FUN_14198aa00(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = TAttribute<FText>::Get(*(longlong *)(param_1 + 0x88) + 0x208);
  cVar2 = FText::IsEmpty(uVar1);
  return cVar2 == '\0';
}



// FUNCTION 14198aa50 FUN_14198aa50 body=291 status=ok
// SIG undefined FUN_14198aa50(void)

ulonglong FUN_14198aa50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar6 = (*(code *)**(undefined8 **)*param_1)();
  if ((char)uVar6 != '\0') {
    return uVar6 & 0xffffffffffffff00;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_38,param_1[9]);
  FText::FromString(local_28,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar7 = (undefined8 *)FText::ToString(param_1 + 0xdf);
  puVar8 = (undefined8 *)FText::ToString(local_28);
  psVar9 = &DAT_143f3eda8;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar7;
  }
  if (*(int *)(puVar8 + 1) != 0) {
    psVar9 = (short *)*puVar8;
  }
  lVar11 = (longlong)puVar10 - (longlong)psVar9;
  do {
    sVar4 = *psVar9;
    sVar5 = *(short *)((longlong)psVar9 + lVar11);
    if (sVar4 != sVar5) break;
    psVar9 = psVar9 + 1;
  } while (sVar5 != 0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    return (ulonglong)(sVar4 != sVar5);
  }
  return (ulonglong)(sVar4 != sVar5);
}



// FUNCTION 14198ab80 IdenticalTo body=244 status=ok
// SIG undefined IdenticalTo(void)

bool TAttribute<FMargin>::IdenticalTo(float *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((param_1[8] == 0.0) || (*(longlong **)(param_1 + 6) == (longlong *)0x0)) {
LAB_14198abab:
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 6) + 0x18))();
    if (cVar1 == '\0') goto LAB_14198abab;
    cVar1 = '\x01';
  }
  if ((param_2[8] != 0.0) && (*(longlong **)(param_2 + 6) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 6) + 0x18))();
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_14198abcc;
    }
  }
  cVar2 = '\0';
LAB_14198abcc:
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[8] != 0.0) &&
         (plVar3 = *(longlong **)(param_2 + 6), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((param_1[8] != 0.0) && (plVar3 = *(longlong **)(param_1 + 6), plVar3 != (longlong *)0x0))
      {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      return lVar4 == lVar5;
    }
    if ((((*(char *)(param_1 + 4) == *(char *)(param_2 + 4)) && (*param_2 == *param_1)) &&
        (param_2[2] == param_1[2])) && ((param_2[1] == param_1[1] && (param_2[3] == param_1[3])))) {
      return true;
    }
  }
  return false;
}



// FUNCTION 14198ac80 IdenticalTo body=207 status=ok
// SIG undefined IdenticalTo(void)

bool TAttribute<FOptionalSize>::IdenticalTo(float *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((param_1[4] == 0.0) || (*(longlong **)(param_1 + 2) == (longlong *)0x0)) {
LAB_14198acab:
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))();
    if (cVar1 == '\0') goto LAB_14198acab;
    cVar1 = '\x01';
  }
  if ((param_2[4] != 0.0) && (*(longlong **)(param_2 + 2) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 2) + 0x18))();
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_14198accc;
    }
  }
  cVar2 = '\0';
LAB_14198accc:
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[4] != 0.0) &&
         (plVar3 = *(longlong **)(param_2 + 2), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((param_1[4] != 0.0) && (plVar3 = *(longlong **)(param_1 + 2), plVar3 != (longlong *)0x0))
      {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      return lVar4 == lVar5;
    }
    if ((*(char *)(param_1 + 1) == *(char *)(param_2 + 1)) && (*param_2 == *param_1)) {
      return true;
    }
  }
  return false;
}



// FUNCTION 14198ad50 IdenticalTo body=205 status=ok
// SIG undefined IdenticalTo(void)

bool TAttribute<bool>::IdenticalTo(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((*(int *)(param_1 + 0x10) == 0) || (*(longlong **)(param_1 + 8) == (longlong *)0x0)) {
LAB_14198ad7b:
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 == '\0') goto LAB_14198ad7b;
    cVar1 = '\x01';
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (*(longlong **)(param_2 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))();
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_14198ad9c;
    }
  }
  cVar2 = '\0';
LAB_14198ad9c:
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)(param_2 + 0x10) != 0) &&
         (plVar3 = *(longlong **)(param_2 + 8), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 8), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      return lVar4 == lVar5;
    }
    if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
      return true;
    }
  }
  return false;
}



// FUNCTION 14198ae20 FUN_14198ae20 body=560 status=ok
// SIG undefined FUN_14198ae20(void)

longlong FUN_14198ae20(longlong param_1,longlong param_2)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_38 [8];
  longlong *local_30;
  
  bVar5 = false;
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
  plVar2 = (longlong *)puVar7[1];
  uVar3 = *puVar7;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  plVar8 = *(longlong **)(param_2 + 0x58);
  if (plVar2 != plVar8) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_2 + 0x58);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(param_2 + 0x58) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  iVar9 = 0;
  lVar10 = 0;
  do {
    iVar6 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    if (iVar6 <= iVar9) {
      if ((!bVar5) && (*(char *)(param_1 + 0x228) == '\0')) {
        lVar10 = *(longlong *)(param_1 + 0x210);
        if ((lVar10 != 0) && (*(longlong *)(param_2 + 8) != lVar10)) {
          *(longlong *)(param_2 + 8) = lVar10;
          FUN_141802340(param_2);
        }
        iVar9 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar9 + 1;
        if (*(int *)(param_1 + 0x224) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x218,iVar9);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar9 * 8) = param_2;
      }
      break;
    }
    plVar2 = (longlong *)(param_1 + 0x218);
    if (*(int *)(param_2 + 0x70) < *(int *)(*(longlong *)(lVar10 + *plVar2) + 0x70)) {
      if (*(char *)(param_1 + 0x228) == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x210);
        if ((lVar4 != 0) && (*(longlong *)(param_2 + 8) != lVar4)) {
          *(longlong *)(param_2 + 8) = lVar4;
          FUN_141802340(param_2);
        }
        iVar6 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar6 + 1;
        if (*(int *)(param_1 + 0x224) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
        }
        _Src = (void *)(*plVar2 + (longlong)iVar9 * 8);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar6 - iVar9) << 3);
        *(longlong *)(lVar10 + *plVar2) = param_2;
      }
      bVar5 = true;
    }
    iVar9 = iVar9 + 1;
    lVar10 = lVar10 + 8;
  } while (!bVar5);
  SGridPanel::NotifySlotChanged(param_1,param_2);
  return param_2;
}



// FUNCTION 14198b050 FUN_14198b050 body=718 status=ok
// SIG undefined FUN_14198b050(void)

void FUN_14198b050(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  int local_res20;
  uint local_res24;
  int local_88 [3];
  int local_7c;
  uint *local_78;
  undefined2 *local_70;
  int local_68;
  undefined4 local_64;
  wchar_t *local_60;
  int local_58;
  undefined4 local_54;
  uint *local_50;
  undefined8 local_48;
  
  cVar4 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar4 == '\0') {
    local_68 = *(int *)(param_2 + 1);
    lVar11 = (longlong)local_68;
    iVar10 = local_68 + -1;
    if (local_68 == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      _Src = (void *)*param_2;
      local_70 = (undefined2 *)0x0;
      if (local_68 == 0) {
        local_64 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_68,0);
        _guard_xfg_dispatch_icall_nop(local_70,_Src,lVar11 * 2);
      }
      local_res8[0] = (**(code **)(*(longlong *)*param_1 + 0x10))();
      local_res18 = local_res8;
      FUN_14195edc0(&local_70,&local_res18);
      local_50 = (uint *)0x0;
      local_48 = 0;
      FTextRange::CalculateLineRangesFromString(&local_70,&local_50);
      cVar4 = FSlateEditableTextLayout::AnyTextSelected(param_1);
      if (cVar4 != '\0') {
        FUN_141980ac0(param_1);
      }
      bVar2 = true;
      local_78 = local_50 + (longlong)(int)local_48 * 2;
      if (local_50 != local_78) {
        piVar1 = (int *)(param_1 + 0xd0);
        puVar12 = local_50;
        do {
          uVar14 = 0;
          if (!bVar2) {
            local_res20 = *piVar1;
            uVar6 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') +
                    *(int *)((longlong)param_1 + 0x684);
            local_res24 = uVar14;
            if (-1 < (int)uVar6) {
              local_res24 = uVar6;
            }
            cVar4 = FUN_14195aa90(param_1[9],&local_res20);
            if (cVar4 != '\0') {
              local_88[0] = local_res20 + 1;
              local_88[1] = 0;
              FUN_1419bc080(piVar1,param_1[9],local_88);
            }
          }
          uVar6 = puVar12[1];
          uVar13 = local_68 - 1;
          if (local_68 == 0) {
            uVar13 = uVar14;
          }
          if (*puVar12 < uVar13) {
            uVar13 = *puVar12;
          }
          uVar9 = local_68 - 1;
          if (local_68 == 0) {
            uVar9 = uVar14;
          }
          uVar14 = uVar13;
          if ((uVar13 <= uVar6) && (uVar14 = uVar9, uVar6 < uVar9)) {
            uVar14 = uVar6;
          }
          local_60 = (wchar_t *)0x0;
          puVar15 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar15 = local_70;
          }
          iVar10 = uVar14 - uVar13;
          local_54 = 0;
          local_58 = iVar10 + 1;
          if (iVar10 == 0) {
            local_58 = 0;
          }
          if ((0 < local_58) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0), pwVar3 = local_60,
             0 < local_58)) {
            wcsncpy(local_60,puVar15 + (int)uVar13,(longlong)iVar10);
            pwVar3[iVar10] = L'\0';
          }
          iVar10 = *piVar1;
          iVar8 = 0;
          iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
          iVar5 = iVar8;
          if (-1 < iVar7) {
            iVar5 = iVar7;
          }
          local_res18 = (undefined1 *)CONCAT44(iVar5,iVar10);
          lVar11 = *(longlong *)(param_1[9] + 0x18);
          FUN_141944500(param_1[9],&local_res18,&local_60);
          iVar10 = *(int *)(*(longlong *)((longlong)iVar10 * 0x70 + lVar11) + 8);
          local_7c = iVar10 + -1;
          if (iVar10 == 0) {
            local_7c = iVar8;
          }
          if (local_58 != 0) {
            iVar8 = local_58 + -1;
          }
          local_88[2] = (undefined4)local_res18;
          if (iVar8 + local_res18._4_4_ <= local_7c) {
            local_7c = iVar8 + local_res18._4_4_;
          }
          FUN_1419bc080(piVar1,param_1[9],local_88 + 2);
          if (local_60 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          puVar12 = puVar12 + 2;
          bVar2 = false;
        } while (puVar12 != local_78);
      }
      FUN_1419a7100(param_1);
      if (local_50 != (uint *)0x0) {
        FMemory::Free();
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14198b320 FUN_14198b320 body=1537 status=ok
// SIG undefined FUN_14198b320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14198b320(longlong param_1,float *param_2,longlong *param_3,undefined1 param_4,char param_5,
             float param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined8 uVar7;
  float *pfVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  int local_178;
  undefined1 local_174 [4];
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_148 [4];
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8 [4];
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar4 = *param_3;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (lVar4 != 0) {
    plVar5 = (longlong *)param_3[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_170 = lVar4;
    local_168 = plVar5;
    FUN_14195dd20(local_f8,local_174,&local_170,0);
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
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  SWidget::FindChildGeometries(param_1,param_2,local_f8,local_148);
  lVar4 = *param_3;
  if (lVar4 != 0) {
    plVar5 = (longlong *)param_3[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_160 = lVar4;
    local_158 = plVar5;
    TSet<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0>,FDefaultSetAllocator>
    ::FindId(local_148,&local_178,&local_160);
    pfVar6 = (float *)0x0;
    if (local_178 != -1) {
      pfVar6 = (float *)((longlong)local_178 * 0x60 + local_148[0]);
    }
    pfVar8 = pfVar6 + 4;
    if (pfVar6 == (float *)0x0) {
      pfVar8 = (float *)0x0;
    }
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
    if (pfVar8 != (float *)0x0) {
      if (param_5 == '\x01') {
        fVar12 = DAT_1468b5d88._4_4_ * pfVar8[9] + (float)DAT_1468b5d88 * pfVar8[7] + pfVar8[0xb];
        fVar11 = (float)DAT_1468b5d88 * pfVar8[8] + DAT_1468b5d88._4_4_ * pfVar8[10] + pfVar8[0xc];
        fVar10 = 1.0 / (param_2[7] * param_2[10] - param_2[8] * param_2[9]);
        if (*(int *)(param_1 + 0x378) == 1) {
          fVar10 = (fVar11 + -param_2[0xc]) * param_2[7] * fVar10 -
                   (fVar12 + -param_2[0xb]) * param_2[8] * fVar10;
        }
        else {
          fVar12 = (fVar12 - param_2[0xb]) * param_2[10] * fVar10;
          fVar10 = (fVar11 - param_2[0xc]) * param_2[9] * fVar10;
LAB_14198b7ef:
          fVar10 = fVar12 - fVar10;
        }
LAB_14198b7f3:
        fVar10 = fVar10 - param_6;
LAB_14198b7f7:
        if (fVar10 != 0.0) {
          *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x208)
          ;
          local_188 = param_4;
          FUN_14199f960(param_1,param_2,fVar10,1);
        }
      }
      else {
        fVar11 = DAT_1468b5d88._4_4_ * pfVar8[9] + (float)DAT_1468b5d88 * pfVar8[7] + pfVar8[0xb];
        fVar10 = (float)DAT_1468b5d88 * pfVar8[8] + DAT_1468b5d88._4_4_ * pfVar8[10] + pfVar8[0xc];
        if (param_5 == '\x02') {
          fVar12 = 1.0 / (param_2[7] * param_2[10] - param_2[8] * param_2[9]);
          if (*(int *)(param_1 + 0x378) == 1) {
            fVar10 = ((pfVar8[1] * 0.5 - (-param_2[0xb] + fVar11) * param_2[8] * fVar12) +
                     (-param_2[0xc] + fVar10) * param_2[7] * fVar12) - param_2[1] * 0.5;
          }
          else {
            fVar10 = ((*pfVar8 * 0.5 - (fVar10 - param_2[0xc]) * param_2[9] * fVar12) +
                     (fVar11 - param_2[0xb]) * param_2[10] * fVar12) - *param_2 * 0.5;
          }
          goto LAB_14198b7f7;
        }
        bVar9 = *(int *)(param_1 + 0x378) != 1;
        fVar12 = 1.0 / (param_2[7] * param_2[10] - param_2[8] * param_2[9]);
        if (bVar9) {
          fVar10 = (fVar11 - param_2[0xb]) * param_2[10] * fVar12 -
                   (fVar10 - param_2[0xc]) * param_2[9] * fVar12;
        }
        else {
          fVar10 = (-param_2[0xc] + fVar10) * param_2[7] * fVar12 -
                   (-param_2[0xb] + fVar11) * param_2[8] * fVar12;
        }
        pfVar6 = pfVar8 + 1;
        if (bVar9) {
          pfVar6 = pfVar8;
        }
        fVar12 = *pfVar6 + fVar10;
        fVar11 = param_2[1];
        if (bVar9) {
          fVar11 = *param_2;
        }
        if (fVar10 < param_6) goto LAB_14198b7f3;
        if (fVar11 - param_6 < fVar12) {
          fVar10 = (fVar11 - param_6) - param_6;
          goto LAB_14198b7ef;
        }
      }
      uVar7 = 1;
      goto LAB_14198b85c;
    }
  }
  uVar7 = 0;
LAB_14198b85c:
  local_100 = 0;
  if (local_108 != 0) {
    FMemory::Free();
  }
  FUN_141981640(local_148,0);
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  local_b0 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_f8,0);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 14198b940 IsBound body=43 status=ok
// SIG undefined IsBound(void)

undefined8 TAttribute<FMargin>::IsBound(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14198b970 FUN_14198b970 body=1161 status=ok
// SIG undefined FUN_14198b970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14198b970(longlong param_1,longlong param_2,float *param_3,float *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  char local_70 [4];
  undefined1 local_6c [36];
  char local_48;
  longlong local_40;
  int local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0x460) < param_5) ||
      (iVar4 = FSlateWindowElementList::GetClippingIndex(param_2),
      *(int *)(param_1 + 0x410) != iVar4)) ||
     (lVar5 = FUN_1405859b0(param_2 + 0x988), *(int *)(param_1 + 0x414) != *(int *)(lVar5 + 8))) {
    return 1;
  }
  if (*(char *)(param_1 + 0x46c) == '\0') {
    if (*(float *)(param_1 + 0x310) != param_3[2]) {
      return 1;
    }
    if (param_3[3] != *(float *)(param_1 + 0x314)) {
      return 1;
    }
    if (param_3[4] != *(float *)(param_1 + 0x318)) {
      return 1;
    }
    if (0.0001 < ABS(param_3[7] - *(float *)(param_1 + 0x324))) {
      return 1;
    }
    if (0.0001 < ABS(param_3[8] - *(float *)(param_1 + 0x328))) {
      return 1;
    }
    if (0.0001 < ABS(param_3[9] - *(float *)(param_1 + 0x32c))) {
      return 1;
    }
    if (0.0001 < ABS(param_3[10] - *(float *)(param_1 + 0x330))) {
      return 1;
    }
    if (*(float *)(param_1 + 0x334) != param_3[0xb]) {
      return 1;
    }
    if (*(float *)(param_1 + 0x338) != param_3[0xc]) {
      return 1;
    }
  }
  else {
    local_88 = param_3[3];
    local_74 = param_3[2] * param_3[1];
    local_7c = 0;
    local_80 = param_3[2] * *param_3;
    local_84 = param_3[4];
    FSlateRotatedRect::ToBoundingRect(&local_88,&local_98);
    fVar11 = param_4[3];
    if (uStack_90._4_4_ <= param_4[3]) {
      fVar11 = uStack_90._4_4_;
    }
    fVar12 = param_4[1];
    if (param_4[1] <= local_98._4_4_) {
      fVar12 = local_98._4_4_;
    }
    fVar10 = param_4[2];
    if ((float)uStack_90 <= param_4[2]) {
      fVar10 = (float)uStack_90;
    }
    fVar9 = *param_4;
    if (*param_4 <= (float)local_98) {
      fVar9 = (float)local_98;
    }
    if ((fVar11 < fVar12) || (fVar10 < fVar9)) {
      local_98 = 0;
      uStack_90 = 0;
      uStack_90._0_4_ = 0.0;
      fVar11 = 0.0;
      local_98._4_4_ = 0.0;
      local_98._0_4_ = 0.0;
      fVar9 = (float)local_98;
      fVar10 = (float)uStack_90;
      fVar12 = local_98._4_4_;
    }
    if (1.0 < ABS(*(float *)(param_1 + 0x408) - (fVar10 - fVar9))) {
      return 1;
    }
    if (1.0 < ABS(*(float *)(param_1 + 0x40c) - (fVar11 - fVar12))) {
      return 1;
    }
    if (*(float *)(param_1 + 0x310) != param_3[2]) {
      return 1;
    }
    if (0.0001 < ABS(param_3[7] - *(float *)(param_1 + 0x324))) {
      return 1;
    }
    if (0.0001 < ABS(param_3[8] - *(float *)(param_1 + 0x328))) {
      return 1;
    }
    if (0.0001 < ABS(param_3[9] - *(float *)(param_1 + 0x32c))) {
      return 1;
    }
    if (0.0001 < ABS(param_3[10] - *(float *)(param_1 + 0x330))) {
      return 1;
    }
  }
  if (*(float *)(param_1 + 0x308) != *param_3) {
    return 1;
  }
  if (*(float *)(param_1 + 0x30c) != param_3[1]) {
    return 1;
  }
  if ((float)((int)ROUND((param_4[2] - *param_4) + (param_4[2] - *param_4) + 0.5) >> 1) !=
      *(float *)(param_1 + 0x400)) {
    return 1;
  }
  if ((float)((int)ROUND((param_4[3] - param_4[1]) + (param_4[3] - param_4[1]) + 0.5) >> 1) !=
      *(float *)(param_1 + 0x404)) {
    return 1;
  }
  FUN_141833ba0(param_2,local_70);
  if (*(char *)(param_1 + 0x458) == local_30) {
    if (*(char *)(param_1 + 0x458) == '\0') {
      uVar8 = 0;
      goto LAB_14198bddb;
    }
    if (*(char *)(param_1 + 0x418) == local_70[0]) {
      if (((*(char *)(param_1 + 0x440) == local_48) &&
          ((*(char *)(param_1 + 0x440) == '\0' ||
           (cVar3 = FSlateClippingZone::operator==(param_1 + 0x41c,local_6c), cVar3 != '\0')))) &&
         (iVar4 = *(int *)(param_1 + 0x450), iVar4 == local_38)) {
        if (iVar4 != 0) {
          pfVar7 = (float *)(local_40 + 0x14);
          pfVar6 = (float *)(*(longlong *)(param_1 + 0x448) + 0x14);
          do {
            bVar1 = *(byte *)(pfVar7 + 3);
            bVar2 = *(byte *)(pfVar6 + 3);
            if (((((((((bVar1 ^ bVar2) & 1) != 0) || (((bVar1 ^ bVar2) & 2) != 0)) ||
                   (((bVar1 ^ bVar2) & 4) != 0)) ||
                  ((pfVar7[-5] != pfVar6[-5] || (pfVar7[-4] != pfVar6[-4])))) ||
                 ((pfVar7[-3] != pfVar6[-3] ||
                  ((pfVar7[-2] != pfVar6[-2] || (pfVar7[-1] != pfVar6[-1])))))) ||
                (*pfVar7 != *pfVar6)) || ((pfVar7[1] != pfVar6[1] || (pfVar7[2] != pfVar6[2]))))
            goto LAB_14198bdd9;
            pfVar7 = pfVar7 + 9;
            pfVar6 = pfVar6 + 9;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        uVar8 = 0;
        goto LAB_14198bddb;
      }
    }
  }
LAB_14198bdd9:
  uVar8 = 1;
LAB_14198bddb:
  if (local_30 == '\0') {
    return uVar8;
  }
  local_30 = 0;
  if (local_40 != 0) {
    FMemory::Free(local_40);
    return uVar8;
  }
  return uVar8;
}



// FUNCTION 14198be20 IsEmpty body=70 status=ok
// SIG undefined IsEmpty(void)

undefined8 SToolTip::IsEmpty(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      return 0;
    }
  }
  uVar4 = TAttribute<FText>::Get(param_1 + 8);
  cVar2 = FText::IsEmpty(uVar4);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 14198be70 IsInteractive body=98 status=ok
// SIG undefined IsInteractive(void)

undefined1 SToolTip::IsInteractive(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x158) != 0) {
    if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x158) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x150);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x148) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x148);
  }
  return *(undefined1 *)(param_1 + 0x148);
}



// FUNCTION 14198bef0 FUN_14198bef0 body=26 status=ok
// SIG undefined FUN_14198bef0(void)

undefined8 FUN_14198bef0(longlong param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x3c8) + 0x234);
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x3c8) >> 8),
                  *pfVar1 <= 0.9999 && *pfVar1 != 0.9999);
}



// FUNCTION 14198bf30 IsReadOnly body=37 status=ok
// SIG undefined IsReadOnly(void)

undefined1 FSlateEditableTextLayout::FTextInputMethodContext::IsReadOnly(longlong param_1)

{
  char cVar1;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    cVar1 = (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 8))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14198bf60 FUN_14198bf60 body=82 status=ok
// SIG undefined FUN_14198bf60(void)

ulonglong FUN_14198bf60(longlong param_1)

{
  float *pfVar1;
  ulonglong in_RAX;
  float extraout_XMM0_Da;
  
  if (DAT_1469f4590 != 0) {
    in_RAX = FUN_14189c9c0();
    if ((extraout_XMM0_Da < *(float *)(param_1 + 0x324) ||
         extraout_XMM0_Da == *(float *)(param_1 + 0x324)) &&
       (in_RAX = *(ulonglong *)(param_1 + 0x308),
       pfVar1 = (float *)(*(longlong *)(in_RAX + 0x3c8) + 0x234),
       *pfVar1 <= 0.9999 && *pfVar1 != 0.9999)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14198bfc0 FUN_14198bfc0 body=418 status=ok
// SIG undefined FUN_14198bfc0(void)

ulonglong FUN_14198bfc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined7 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8;
  uint uStackX_c;
  int local_res18;
  uint uStackX_1c;
  
  iVar1 = *(int *)(param_1 + 0x680);
  local_res18 = iVar1;
  uVar4 = (uint)(*(char *)(param_1 + 0x688) == '\x01') + *(int *)(param_1 + 0x684);
  uStackX_1c = 0;
  if (-1 < (int)uVar4) {
    uStackX_1c = uVar4;
  }
  puVar7 = (ulonglong *)(param_1 + 0x670);
  if (*(char *)(param_1 + 0x678) == '\0') {
    puVar7 = (ulonglong *)&local_res18;
  }
  uVar2 = *puVar7;
  if (((int)uVar2 != iVar1) || (uVar6 = uVar2 >> 0x20, (uint)(uVar2 >> 0x20) != uStackX_1c)) {
    FTextLayout::GetTextLocationAt(*(undefined8 *)(param_1 + 0x48),&local_res8,param_2,0);
    puVar7 = (ulonglong *)&local_res18;
    if (*(char *)(param_1 + 0x678) != '\0') {
      puVar7 = (ulonglong *)(param_1 + 0x670);
    }
    uVar6 = *puVar7;
    iVar5 = (int)uVar6;
    uVar4 = (uint)(uVar6 >> 0x20);
    if (iVar5 == iVar1) {
      iVar10 = iVar1;
      if ((int)uVar4 < (int)uStackX_1c) {
        iVar10 = iVar5;
      }
    }
    else {
      iVar10 = iVar5;
      if (iVar1 <= iVar5) {
        iVar10 = iVar1;
      }
    }
    uVar11 = uStackX_1c;
    if (iVar5 == iVar1) {
      if ((int)uVar4 < (int)uStackX_1c) {
        uVar11 = uVar4;
      }
    }
    else if (iVar5 < iVar1) {
      uVar11 = uVar4;
    }
    bVar12 = SBORROW4(iVar5,iVar1);
    iVar3 = iVar5 - iVar1;
    if (iVar5 == iVar1) {
      bVar12 = SBORROW4(uVar4,uStackX_1c);
      iVar3 = uVar4 - uStackX_1c;
    }
    iVar9 = iVar1;
    if ((iVar5 != iVar1 || uVar4 != uStackX_1c) && bVar12 == iVar3 < 0) {
      iVar9 = iVar5;
    }
    if (iVar5 == iVar1) {
      uVar6 = uVar6 >> 0x20;
      uVar2 = (ulonglong)uStackX_1c;
      if ((int)uStackX_1c < (int)uVar4) {
        uVar2 = uVar6;
      }
      uStackX_1c = (uint)uVar2;
    }
    else if (iVar1 < iVar5) {
      uStackX_1c = uVar4;
    }
    if (iVar10 == iVar9) {
      if ((local_res8 == iVar10) &&
         ((uVar6 = (ulonglong)uStackX_c, (int)uVar11 <= (int)uStackX_c &&
          ((int)uStackX_c <= (int)uStackX_1c)))) {
LAB_14198c150:
        return CONCAT71((int7)(uVar6 >> 8),1);
      }
    }
    else {
      uVar6 = CONCAT44(uStackX_c,local_res8);
      uVar8 = (undefined7)(uVar6 >> 8);
      if (iVar10 == local_res8) {
        return CONCAT71(uVar8,(int)uVar11 <= (int)uStackX_c);
      }
      if (iVar9 == local_res8) {
        return CONCAT71(uVar8,(int)uStackX_c <= (int)uStackX_1c);
      }
      if ((iVar10 < local_res8) && (local_res8 < iVar9)) goto LAB_14198c150;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14198c170 FUN_14198c170 body=1899 status=ok
// SIG undefined FUN_14198c170(void)

void FUN_14198c170(undefined8 *param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  byte local_res10;
  char local_res11;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  switch(param_2) {
  case 0:
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    local_50 = 0;
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    local_res20 = CONCAT44(iVar4,*(undefined4 *)(param_1 + 0xd0));
    goto LAB_14198c407;
  case 1:
    cVar3 = FTextLayout::IsEmpty(param_1[9]);
    if (cVar3 != '\0') {
      return;
    }
    iVar4 = *(int *)(param_1[9] + 0x20);
    iVar6 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar7 = 0;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    local_res20 = CONCAT44(iVar7,*(undefined4 *)(param_1 + 0xd0));
    iVar7 = *(int *)(*(longlong *)
                      ((longlong)iVar4 * 0x70 + -0x70 + *(longlong *)(param_1[9] + 0x18)) + 8);
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    local_50 = CONCAT44(iVar6,iVar4 + -1);
LAB_14198c407:
    if (param_3 == 1) {
      if ((*(char *)(param_1 + 0xcf) == '\0') && (&local_res20 != param_1 + 0xce)) {
        param_1[0xce] = local_res20;
        *(undefined1 *)(param_1 + 0xcf) = 1;
      }
    }
    else if ((&local_48 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(undefined1 *)(param_1 + 0xcf) = 0;
    }
    FUN_1419bc080(param_1 + 0xd0,param_1[9],&local_50);
    puVar9 = &local_res20;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    local_res20 = CONCAT44(iVar4,*(undefined4 *)(param_1 + 0xd0));
    break;
  case 2:
    puVar2 = param_1 + 0xd0;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    lVar5 = param_1[9];
    local_res20 = CONCAT44(iVar4,*(undefined4 *)puVar2);
    iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                      (lVar5,(longlong *)(lVar5 + 0x28),&local_res20,
                       *(char *)(param_1 + 0xd1) == '\x01');
    if (iVar4 < 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x30) <= iVar4) {
      return;
    }
    local_50 = CONCAT44(*(undefined4 *)((longlong)iVar4 * 0x58 + 0x48 + *(longlong *)(lVar5 + 0x28))
                        ,(int)local_res20);
    if (param_3 == 1) {
      if ((*(char *)(param_1 + 0xcf) == '\0') && (&local_48 != param_1 + 0xce)) {
        param_1[0xce] = local_res20;
        *(undefined1 *)(param_1 + 0xcf) = 1;
      }
    }
    else if ((&local_48 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(undefined1 *)(param_1 + 0xcf) = 0;
    }
    FUN_1419bc080(puVar2,param_1[9],&local_50);
    puVar9 = &local_58;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    local_58 = CONCAT44(iVar4,*(undefined4 *)puVar2);
    break;
  case 3:
    puVar2 = param_1 + 0xd0;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    lVar5 = param_1[9];
    local_res20 = CONCAT44(iVar4,*(undefined4 *)puVar2);
    iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                      (lVar5,(longlong *)(lVar5 + 0x28),&local_res20,
                       *(char *)(param_1 + 0xd1) == '\x01');
    if (iVar4 < 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x30) <= iVar4) {
      return;
    }
    iVar4 = *(int *)((longlong)iVar4 * 0x58 + 0x4c + *(longlong *)(lVar5 + 0x28)) + -1;
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    local_50 = CONCAT44(iVar4,(int)local_res20);
    if (param_3 == 1) {
      if ((*(char *)(param_1 + 0xcf) == '\0') && (&local_48 != param_1 + 0xce)) {
        param_1[0xce] = local_res20;
        *(undefined1 *)(param_1 + 0xcf) = 1;
      }
    }
    else if ((&local_48 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(undefined1 *)(param_1 + 0xcf) = 0;
    }
    FUN_1419bbf50(puVar2,param_1[9],&local_50,1);
    puVar9 = &local_58;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = 0;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    local_58 = CONCAT44(iVar4,*(undefined4 *)puVar2);
    break;
  case 4:
    puVar2 = param_1 + 0xd0;
    iVar6 = 0;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = iVar6;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    lVar5 = param_1[9];
    local_58 = CONCAT44(iVar4,*(undefined4 *)puVar2);
    plVar1 = (longlong *)(lVar5 + 0x28);
    iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                      (lVar5,plVar1,&local_58,*(char *)(param_1 + 0xd1) == '\x01');
    if (iVar4 < 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x30) <= iVar4) {
      return;
    }
    lVar8 = *plVar1;
    lVar11 = (longlong)iVar4 * 0x58 + lVar8;
    local_50 = local_58;
    local_res20 = 0;
    local_res11 = '\0';
    lVar10 = (longlong)*(int *)(lVar5 + 0x30) * 0x58 + lVar8;
    iVar4 = iVar6;
    for (; lVar8 != lVar10; lVar8 = lVar8 + 0x58) {
      if (0.0 <= *(float *)(lVar8 + 0x34)) {
        fVar12 = *(float *)(lVar8 + 0x34) + *(float *)(lVar8 + 0x3c);
        if (*(float *)(param_1 + 0xec) <= fVar12 && fVar12 != *(float *)(param_1 + 0xec)) break;
        iVar4 = iVar4 + 1;
      }
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    FSlateEditableTextLayout::TranslateLocationVertical
              (param_1,&local_50,-iVar4,*(undefined4 *)(param_1[9] + 0x8c),&local_res20,&local_res10
              );
    if (param_3 == 1) {
      if ((*(char *)(param_1 + 0xcf) == '\0') && (&local_50 != param_1 + 0xce)) {
        param_1[0xce] = local_50;
        *(undefined1 *)(param_1 + 0xcf) = 1;
      }
    }
    else if ((&local_48 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(undefined1 *)(param_1 + 0xcf) = 0;
    }
    if (local_res11 == '\0') {
      FUN_1419bc080(puVar2,param_1[9],&local_res20);
    }
    else {
      FUN_1419bbf50(puVar2,param_1[9],&local_res20,local_res10);
    }
    local_48._0_4_ = *(undefined4 *)puVar2;
    iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    local_48._4_4_ = 0;
    if (-1 < iVar4) {
      local_48._4_4_ = iVar4;
    }
    (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_48);
    FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(param_1);
    FUN_1419a7100(param_1);
    local_48._0_4_ = *(undefined4 *)puVar2;
    iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    local_48._4_4_ = iVar6;
    if (-1 < iVar4) {
      local_48._4_4_ = iVar4;
    }
    iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                      (param_1[9],plVar1,&local_48,*(char *)(param_1 + 0xd1) == '\x01');
    if (iVar4 < 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x30) <= iVar4) {
      return;
    }
    fVar12 = (*(float *)((longlong)iVar4 * 0x58 + 0x34 + *plVar1) - *(float *)(lVar11 + 0x34)) /
             *(float *)(param_1[9] + 0x8c) + *(float *)((longlong)param_1 + 0x65c);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    goto LAB_14198c89b;
  case 5:
    puVar2 = param_1 + 0xd0;
    iVar6 = 0;
    iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iVar4 = iVar6;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    lVar5 = param_1[9];
    local_50 = CONCAT44(iVar4,*(undefined4 *)puVar2);
    plVar1 = (longlong *)(lVar5 + 0x28);
    iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                      (lVar5,plVar1,&local_50,*(char *)(param_1 + 0xd1) == '\x01');
    if (iVar4 < 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x30) <= iVar4) {
      return;
    }
    lVar8 = *plVar1;
    lVar11 = (longlong)iVar4 * 0x58 + lVar8;
    local_58 = local_50;
    local_res20 = 0;
    local_res11 = '\0';
    lVar10 = (longlong)*(int *)(lVar5 + 0x30) * 0x58 + lVar8;
    iVar4 = iVar6;
    for (; lVar8 != lVar10; lVar8 = lVar8 + 0x58) {
      if (0.0 <= *(float *)(lVar8 + 0x34)) {
        fVar12 = *(float *)(lVar8 + 0x34) + *(float *)(lVar8 + 0x3c);
        if (*(float *)(param_1 + 0xec) <= fVar12 && fVar12 != *(float *)(param_1 + 0xec)) break;
        iVar4 = iVar4 + 1;
      }
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    FSlateEditableTextLayout::TranslateLocationVertical
              (param_1,&local_58,iVar4,*(undefined4 *)(param_1[9] + 0x8c),&local_res20,&local_res10)
    ;
    if (param_3 == 1) {
      if ((*(char *)(param_1 + 0xcf) == '\0') && (&local_58 != param_1 + 0xce)) {
        param_1[0xce] = local_58;
        *(undefined1 *)(param_1 + 0xcf) = 1;
      }
    }
    else if ((&local_48 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
      *(undefined1 *)(param_1 + 0xcf) = 0;
    }
    if (local_res11 == '\0') {
      FUN_1419bc080(puVar2,param_1[9],&local_res20);
    }
    else {
      FUN_1419bbf50(puVar2,param_1[9],&local_res20,local_res10);
    }
    local_48._0_4_ = *(undefined4 *)puVar2;
    iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    local_48._4_4_ = 0;
    if (-1 < iVar4) {
      local_48._4_4_ = iVar4;
    }
    (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_48);
    FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(param_1);
    FUN_1419a7100(param_1);
    local_48._0_4_ = *(undefined4 *)puVar2;
    iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    local_48._4_4_ = iVar6;
    if (-1 < iVar4) {
      local_48._4_4_ = iVar4;
    }
    iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                      (param_1[9],plVar1,&local_48,*(char *)(param_1 + 0xd1) == '\x01');
    if (iVar4 < 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x30) <= iVar4) {
      return;
    }
    fVar13 = (*(float *)((longlong)iVar4 * 0x58 + 0x34 + *plVar1) - *(float *)(lVar11 + 0x34)) /
             *(float *)(param_1[9] + 0x8c) + *(float *)((longlong)param_1 + 0x65c);
    lVar5 = FTextLayout::GetSize(param_1[9],&local_48);
    fVar12 = *(float *)(lVar5 + 4) - *(float *)(param_1 + 0xec);
    if (fVar13 <= fVar12) {
      fVar12 = fVar13;
    }
LAB_14198c89b:
    *(float *)((longlong)param_1 + 0x65c) = fVar12;
    if (*(char *)((longlong)param_1 + 0x66c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
    }
  default:
    goto switchD_14198c1b5_default;
  }
  (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,puVar9);
  FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(param_1);
  FUN_1419a7100(param_1);
switchD_14198c1b5_default:
  return;
}



// FUNCTION 14198c900 LoadText body=77 status=ok
// SIG undefined LoadText(void)

void FSlateEditableTextLayout::LoadText(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x448) != 0) && (*(longlong **)(param_1 + 0x440) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x18))();
    if (cVar1 != '\0') {
      FUN_1419a43a0(param_1,param_1 + 0x420);
                    /* WARNING: Could not recover jumptable at 0x00014198c943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
      return;
    }
  }
  return;
}



// FUNCTION 14198c950 MakeUndoState body=223 status=ok
// SIG undefined MakeUndoState(void)

void FSlateEditableTextLayout::MakeUndoState(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38[0] = 0;
  local_38[1] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),local_38,*(undefined8 *)(param_1 + 0x48));
  FText::FromString(local_28,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  FText::operator=(param_2,local_28);
  uVar4 = *(undefined4 *)(param_1 + 0x684);
  uVar5 = *(undefined4 *)(param_1 + 0x688);
  uVar6 = *(undefined4 *)(param_1 + 0x68c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x680);
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = uVar5;
  *(undefined4 *)(param_2 + 0x34) = uVar6;
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x690);
  if ((undefined8 *)(param_1 + 0x670) != (undefined8 *)(param_2 + 0x18)) {
    if (*(char *)(param_2 + 0x20) != '\0') {
      *(undefined1 *)(param_2 + 0x20) = 0;
    }
    if (*(char *)(param_1 + 0x678) != '\0') {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x670);
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 14198ca30 FUN_14198ca30 body=371 status=ok
// SIG undefined FUN_14198ca30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_14198ca30(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_14183ac60(*(longlong *)(param_1 + 0x268),&local_18);
    if (local_18 != (longlong *)0x0) {
      iVar5 = (**(code **)(*local_18 + 0x68))();
      if ((((iVar5 == 2) || (*(int *)(param_1 + 0x280) == 0)) ||
          (*(longlong **)(param_1 + 0x278) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x18))(), cVar4 == '\0')) {
        cVar4 = (**(code **)(*local_18 + 0x70))();
        if (cVar4 == '\0') {
          (**(code **)(*local_18 + 0x40))();
        }
        else {
          (**(code **)(*local_18 + 0x48))();
        }
      }
      else if (*(int *)(param_1 + 0x280) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))();
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x38))();
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
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
  return param_2;
}



// FUNCTION 14198cbb0 FUN_14198cbb0 body=254 status=ok
// SIG undefined FUN_14198cbb0(void)

undefined1 * FUN_14198cbb0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_14183ac60(*(longlong *)(param_1 + 0x268),&local_18);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x38))();
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



// FUNCTION 14198ccb0 FUN_14198ccb0 body=1985 status=ok
// SIG undefined FUN_14198ccb0(void)

undefined8 FUN_14198ccb0(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  char local_res18 [8];
  undefined2 local_res20;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68 [2];
  ulonglong local_58;
  
  cVar10 = FSlateApplication::AllowMoveCursor(DAT_1469f4590);
  if ((cVar10 == '\0') ||
     ((cVar10 = (**(code **)(*(longlong *)param_1[0xbd] + 8))(), cVar10 != '\0' && (param_2[1] != 1)
      ))) {
    return 1;
  }
  bVar21 = true;
  iVar12 = *(int *)(param_1 + 0xd0);
  local_d8 = 0;
  iVar16 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  iVar11 = 0;
  if (-1 < iVar16) {
    iVar11 = iVar16;
  }
  local_e0 = CONCAT44(iVar11,iVar12);
  if (((param_2[4] == 0) && (iVar11 = param_2[1], iVar11 != 1)) &&
     (cVar10 = FSlateEditableTextLayout::AnyTextSelected(param_1), cVar10 != '\0')) {
    bVar21 = (float)param_2[2] == 0.0;
    if ((iVar11 != 0) ||
       ((0.0 <= (float)(int)(float)param_2[2] && (0.0 <= (float)(int)(float)param_2[3])))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    local_58 = param_1[0xce];
    iVar17 = (int)(local_58 >> 0x20);
    iVar16 = (int)local_58;
    iVar11 = (int)(local_e0 >> 0x20);
    if (bVar20) {
      if (iVar16 != iVar12) {
        if (iVar16 < iVar12) {
          local_e0 = local_58;
        }
        goto LAB_14198ce07;
      }
      local_d8 = local_58;
      if (iVar11 <= iVar17) goto LAB_14198ce07;
    }
    else {
      bVar20 = SBORROW4(iVar16,iVar12);
      iVar8 = iVar16 - iVar12;
      if (iVar16 == iVar12) {
        bVar20 = SBORROW4(iVar17,iVar11);
        iVar8 = iVar17 - iVar11;
      }
      if ((iVar16 != iVar12 || iVar17 != iVar11) && bVar20 == iVar8 < 0) {
        local_e0 = local_58;
      }
LAB_14198ce07:
      local_d8 = local_e0;
    }
    local_e0 = local_d8;
    if (*param_2 == 1) {
      FTextLayout::GetWordAt(param_1[9],&local_b8,&local_d8);
      bVar20 = SBORROW4(local_b8,local_b0);
      iVar12 = local_b8 - local_b0;
      if (local_b8 == local_b0) {
        bVar20 = SBORROW4(iStack_b4,iStack_ac);
        iVar12 = iStack_b4 - iStack_ac;
      }
      if (bVar20 != iVar12 < 0) {
        local_b0 = local_b8;
        iStack_ac = iStack_b4;
      }
      if (((local_b0 != -1) && (iStack_ac != -1)) &&
         ((local_b0 == (int)local_d8 && (iStack_ac == local_d8._4_4_)))) {
        bVar21 = false;
      }
    }
    iVar12 = (uint)local_e0;
  }
  cVar10 = '\0';
  bVar20 = false;
  local_res20 = (ushort)(byte)local_res20;
  iVar11 = 0;
  if (!bVar21) goto LAB_14198d1f7;
  if (param_2[1] == 0) {
    fVar5 = (float)param_2[2];
    if (*param_2 == 0) {
      if (fVar5 == 0.0) {
        cVar10 = (**(code **)(*(longlong *)*param_1 + 0x10))();
        if (cVar10 == '\0') {
          return 0;
        }
        FSlateEditableTextLayout::TranslateLocationVertical
                  (param_1,&local_e0,(int)(float)param_2[3],param_2[5],&local_d8,&local_res20);
        cVar10 = local_res20._1_1_;
      }
      else {
        puVar13 = (ulonglong *)
                  FSlateEditableTextLayout::TranslatedLocation
                            (param_1,local_78,&local_e0,(int)fVar5);
        bVar20 = true;
        local_d8 = *puVar13;
      }
      goto LAB_14198d1f7;
    }
    lVar9 = param_1[9];
    (**(code **)(*(longlong *)param_1[1] + 0x10))
              ((longlong *)param_1[1],
               *(undefined8 *)((longlong)iVar12 * 0x70 + *(longlong *)(lVar9 + 0x18)));
    lVar6 = *(longlong *)param_1[1];
    cVar19 = (char)(int)fVar5;
    if (cVar19 < '\x01') {
      iVar12 = (**(code **)(lVar6 + 0x50))((longlong *)param_1[1],local_e0._4_4_);
    }
    else {
      iVar12 = (**(code **)(lVar6 + 0x58))();
    }
    (**(code **)(*(longlong *)param_1[1] + 0x20))();
    uVar18 = (uint)local_e0;
    local_e8._4_4_ = iVar12;
    if (iVar12 == -1) {
      if (cVar19 < '\x01') {
        if (0 < (int)(uint)local_e0) {
          uVar18 = (uint)local_e0 - 1;
          iVar12 = *(int *)(*(longlong *)
                             ((longlong)(int)uVar18 * 0x70 + *(longlong *)(lVar9 + 0x18)) + 8);
          local_e8._4_4_ = iVar12 + -1;
          if (iVar12 == 0) {
            local_e8._4_4_ = iVar11;
          }
          goto LAB_14198cfae;
        }
      }
      else if ((int)(uint)local_e0 < *(int *)(lVar9 + 0x20) + -1) {
        local_e8._4_4_ = 0;
        uVar18 = (uint)local_e0 + 1;
        goto LAB_14198cfae;
      }
      local_e8 = local_e0;
    }
    else {
LAB_14198cfae:
      local_e8 = CONCAT44(local_e8._4_4_,uVar18);
    }
    while (((iVar12 = (int)(local_e8 >> 0x20), uVar14 = local_e8, uVar18 != 0 || (iVar12 != 0)) &&
           (iVar12 != 0))) {
      lVar9 = param_1[9];
      if (*(int *)(lVar9 + 0x20) == 0) break;
      if (*(int *)(lVar9 + 0x20) - 1U == uVar18) {
        iVar16 = *(int *)(*(longlong *)((longlong)(int)uVar18 * 0x70 + *(longlong *)(lVar9 + 0x18))
                         + 8);
        iVar17 = iVar16 + -1;
        if (iVar16 == 0) {
          iVar17 = iVar11;
        }
        if (iVar17 == iVar12) break;
      }
      iVar16 = *(int *)(*(longlong *)((longlong)(int)uVar18 * 0x70 + *(longlong *)(lVar9 + 0x18)) +
                       8);
      iVar17 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar17 = iVar11;
      }
      if (iVar17 == iVar12) break;
      FTextLayout::GetWordAt(lVar9,&local_a8,&local_e8);
      bVar21 = SBORROW4(local_a8,local_a0);
      iVar12 = local_a8 - local_a0;
      if (local_a8 == local_a0) {
        bVar21 = SBORROW4(iStack_a4,iStack_9c);
        iVar12 = iStack_a4 - iStack_9c;
      }
      iVar16 = local_a0;
      iVar17 = iStack_9c;
      if (bVar21 != iVar12 < 0) {
        iVar16 = local_a8;
        iVar17 = iStack_a4;
      }
      if (((iVar16 != -1) && (iVar17 != -1)) &&
         ((iVar16 == (uint)local_e8 && (uVar14 = local_e8, iVar17 == local_e8._4_4_)))) break;
      lVar9 = param_1[9];
      (**(code **)(*(longlong *)param_1[1] + 0x10))
                ((longlong *)param_1[1],
                 *(undefined8 *)((longlong)(int)(uint)local_e8 * 0x70 + *(longlong *)(lVar9 + 0x18))
                );
      lVar6 = *(longlong *)param_1[1];
      if (cVar19 < '\x01') {
        iVar12 = (**(code **)(lVar6 + 0x50))((longlong *)param_1[1],local_e8._4_4_);
      }
      else {
        iVar12 = (**(code **)(lVar6 + 0x58))();
      }
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      uVar18 = (uint)local_e8;
      if (iVar12 == -1) {
        if (cVar19 < '\x01') {
          if ((int)(uint)local_e8 < 1) goto LAB_14198d141;
          uVar18 = (uint)local_e8 - 1;
          iVar12 = *(int *)(*(longlong *)
                             ((longlong)(int)uVar18 * 0x70 + *(longlong *)(lVar9 + 0x18)) + 8);
          iVar16 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar16 = iVar11;
          }
          local_d0 = CONCAT44(iVar16,uVar18);
          local_e8 = local_d0;
        }
        else if ((int)(uint)local_e8 < *(int *)(lVar9 + 0x20) + -1) {
          uVar18 = (uint)local_e8 + 1;
          local_d0 = (ulonglong)uVar18;
          local_e8 = local_d0;
        }
        else {
LAB_14198d141:
          local_d0 = local_e8;
        }
      }
      else {
        local_e8 = CONCAT44(iVar12,(uint)local_e8);
        local_d0 = local_e8;
      }
    }
  }
  else {
    if (param_2[1] != 1) goto LAB_14198d1f7;
    local_c8 = (float)param_2[2] * (float)param_2[5];
    local_c4 = (float)param_2[3] * (float)param_2[5];
    local_res18[0] = '\0';
    puVar13 = (ulonglong *)FTextLayout::GetTextLocationAt(param_1[9],local_70,&local_c8,local_res18)
    ;
    bVar20 = true;
    local_d8 = *puVar13;
    if (local_res18[0] != '\x02') goto LAB_14198d1f7;
    iVar16 = (int)(local_d8 >> 0x20) + -1;
    local_res20 = 0x101;
    cVar10 = '\x01';
    iVar12 = iVar11;
    if (-1 < iVar16) {
      iVar12 = iVar16;
    }
    local_d0 = CONCAT44(iVar12,(int)local_d8);
    uVar14 = local_d0;
  }
  bVar20 = true;
  local_d8 = uVar14;
LAB_14198d1f7:
  if (param_2[4] == 1) {
    if ((*(char *)(param_1 + 0xcf) == '\0') && (&local_e0 != param_1 + 0xce)) {
      param_1[0xce] = local_e0;
      *(undefined1 *)(param_1 + 0xcf) = 1;
    }
  }
  else if ((local_68 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  puVar4 = param_1 + 0xd0;
  if (cVar10 == '\0') {
    FUN_1419bc080(puVar4,param_1[9],&local_d8);
  }
  else {
    FUN_1419bbf50(puVar4,param_1[9],&local_d8,(byte)local_res20);
  }
  local_c0 = *(undefined4 *)puVar4;
  iVar12 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  local_bc = iVar11;
  if (-1 < iVar12) {
    local_bc = iVar12;
  }
  (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_c0);
  if (bVar20) {
    FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(param_1);
  }
  FUN_1419a7100(param_1);
  cVar10 = (**(code **)(*(longlong *)param_1[0xbd] + 8))();
  if (((cVar10 != '\0') &&
      (plVar15 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))(), plVar15 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 0xbc) != '\0')) {
    plVar7 = (longlong *)param_1[0xbe];
    local_98 = param_1[0xbd];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_90 = plVar7;
    (**(code **)(*plVar15 + 0x28))(plVar15,&local_98);
    plVar3 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    local_88 = param_1[0xbd];
    plVar7 = (longlong *)param_1[0xbe];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_80 = plVar7;
    (**(code **)(*plVar15 + 0x20))(plVar15,&local_88);
    plVar15 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar7 + 1;
      lVar9 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  return 1;
}



// FUNCTION 14198d480 FUN_14198d480 body=179 status=ok
// SIG undefined FUN_14198d480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_14198d480(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TAttribute<FText>::Get(*(longlong *)(param_1 + 0x410) + 0x208);
  cVar1 = FText::IsEmpty(uVar2);
  if (cVar1 == '\0') {
    puVar3 = (undefined1 *)(param_1 + 0x3f8);
    if ((*(int *)(param_1 + 0x408) != 0) && (*(longlong **)(param_1 + 0x400) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x400) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x408) == 0) {
          (**(code **)(_DAT_00000000 + 0x38))(0,local_res8);
          *puVar3 = local_res8[0];
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x400) + 0x38))
                    (*(longlong **)(param_1 + 0x400),local_res8);
          *puVar3 = local_res8[0];
        }
      }
    }
  }
  else {
    puVar3 = &DAT_1464b9ee9;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 14198d540 FUN_14198d540 body=177 status=ok
// SIG undefined FUN_14198d540(void)

void FUN_14198d540(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x300) != 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      *(undefined1 *)(param_1 + 0x378) = 1;
      return;
    }
  }
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  FUN_141855e90(*(undefined8 *)(param_1 + 0x2f0),&local_18);
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14198d600 NotifySlotChanged body=223 status=ok
// SIG undefined NotifySlotChanged(void)

void SGridPanel::NotifySlotChanged(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x238);
  iVar3 = *(int *)(param_2 + 0x60) + 1 + *(int *)(param_2 + 100);
  if (iVar2 < iVar3) {
    iVar3 = iVar3 - iVar2;
    iVar1 = iVar2 + iVar3;
    *(int *)(param_1 + 0x238) = iVar1;
    if (*(int *)(param_1 + 0x23c) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x230);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar2 * 4),0,(longlong)iVar3 << 2
              );
  }
  iVar2 = *(int *)(param_2 + 0x68) + 1 + *(int *)(param_2 + 0x6c);
  if (*(int *)(param_1 + 0x248) < iVar2) {
    iVar3 = *(int *)(param_1 + 0x248);
    iVar2 = iVar2 - *(int *)(param_1 + 0x248);
    iVar1 = iVar3 + iVar2;
    *(int *)(param_1 + 0x248) = iVar1;
    if (*(int *)(param_1 + 0x24c) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x240);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar3 * 4),0,(longlong)iVar2 << 2
              );
  }
  return;
}



// FUNCTION 14198d710 FUN_14198d710 body=27 status=ok
// SIG undefined FUN_14198d710(void)

bool FUN_14198d710(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
  return 0 < iVar1;
}



// FUNCTION 14198d730 FUN_14198d730 body=413 status=ok
// SIG undefined FUN_14198d730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14198d730(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xa8))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_14198d845;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_14198d845:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14198d8d0 OnArrangeChildren body=104 status=ok
// SIG undefined OnArrangeChildren(void)

void FSlateEditableTextLayout::OnArrangeChildren
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FTextLayout::IsEmpty(*(undefined8 *)(param_1 + 0x48));
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_1419aaa20(*(longlong *)(param_1 + 0x58),param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014198d934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
            (*(longlong **)(param_1 + 0x48),param_2,param_3);
  return;
}



// FUNCTION 14198d940 FUN_14198d940 body=1866 status=ok
// SIG undefined FUN_14198d940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14198d940(longlong param_1,float *param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  float *local_240;
  float *local_238;
  byte local_228 [8];
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined4 local_210;
  float local_20c;
  float fStack_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
  float local_1f4;
  float local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 auStack_1c4 [5];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float local_194;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar5 = *(longlong *)(param_1 + 0x228);
  plVar8 = (longlong *)0x0;
  pbVar9 = (byte *)(lVar5 + 0xb0);
  if (((*(int *)(lVar5 + 0xc0) == 0) || (*(longlong **)(lVar5 + 0xb8) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x18))(), cVar3 == '\0')) {
    local_228[0] = *pbVar9;
  }
  else if (*(int *)(lVar5 + 0xc0) == 0) {
    (**(code **)(_DAT_00000000 + 0x38))(0,local_228);
    *pbVar9 = local_228[0];
  }
  else {
    (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x38))(*(longlong **)(lVar5 + 0xb8),local_228);
    *pbVar9 = local_228[0];
  }
  if ((*param_3 & local_228[0]) == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x308) != 0) && (*(longlong **)(param_1 + 0x300) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x18))(), cVar3 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0x308) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x300);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_210);
    *(undefined4 *)(param_1 + 0x2f8) = local_210;
  }
  fVar15 = *(float *)(param_1 + 0x2f8);
  if (((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))(), cVar3 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0x260) != 0) {
      plVar7 = *(longlong **)(param_1 + 600);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_160);
    *(undefined8 *)(param_1 + 0x240) = local_160;
    *(undefined8 *)(param_1 + 0x248) = uStack_158;
  }
  local_220 = *(float *)(param_1 + 0x240);
  fStack_21c = *(float *)(param_1 + 0x244);
  fStack_218 = *(float *)(param_1 + 0x248);
  fStack_214 = *(float *)(param_1 + 0x24c);
  if (fVar15 != -1.0) {
    pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_190);
    fVar13 = *param_2;
    fVar16 = *pfVar4;
    lVar5 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_188);
    fVar11 = fStack_218;
    fVar14 = local_220;
    fVar18 = param_2[1];
    if (fVar15 != 0.0) {
      fVar17 = fVar18;
      if (*(float *)(lVar5 + 4) <= fVar18) {
        fVar17 = *(float *)(lVar5 + 4);
      }
      if (0.0 < fVar17) {
        if (fVar16 <= fVar13) {
          fVar13 = fVar16;
        }
        if ((0.0 < fVar13) && (fVar13 = *param_2, fVar15 < fVar13 / fVar18)) {
          iVar2 = *(int *)(param_1 + 0x238);
          fVar18 = local_220 + fStack_218;
          fVar17 = fVar13 - fVar18;
          fVar16 = fVar17;
          if (iVar2 != 0) {
            pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_180);
            fVar10 = fVar17;
            if (*pfVar4 <= fVar17) {
              fVar10 = *pfVar4;
            }
            fVar16 = fVar10;
            if (iVar2 != 1) {
              if (iVar2 == 2) {
                fVar13 = (fVar13 - fVar10) * 0.5 + fVar14;
              }
              else {
                fVar16 = fVar17;
                if (iVar2 != 3) goto LAB_14198dbcd;
                fVar13 = fVar13 - fVar10;
              }
              fVar14 = fVar13 - fVar11;
              fVar16 = fVar10;
            }
          }
LAB_14198dbcd:
          fVar17 = fStack_214;
          iVar2 = *(int *)(param_1 + 0x23c);
          fVar11 = param_2[1];
          fVar13 = fStack_21c;
          if (iVar2 != 0) {
            lVar5 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_178);
            fVar13 = fVar11 - (fStack_21c + fVar17);
            fVar10 = *(float *)(lVar5 + 4);
            if (fVar13 <= *(float *)(lVar5 + 4)) {
              fVar10 = fVar13;
            }
            fVar13 = fStack_21c;
            if (iVar2 != 1) {
              if (iVar2 == 2) {
                fVar13 = ((fVar11 - fVar10) * 0.5 + fStack_21c) - fVar17;
              }
              else if (iVar2 == 3) {
                fVar13 = (fVar11 - fVar10) - fVar17;
              }
            }
          }
          fVar18 = *param_2 - fVar18;
          fVar16 = fVar15 * fVar16;
          fVar11 = param_2[1] - (fStack_21c + fVar17);
          fStack_208 = fVar16 / fVar15;
          if (fVar18 < fVar16) {
            fVar18 = fVar18 / fVar16;
            fVar16 = fVar16 * fVar18;
            fStack_208 = fStack_208 * fVar18;
          }
          if (fVar11 < fStack_208) {
            fVar11 = fVar11 / fStack_208;
            fVar16 = fVar16 * fVar11;
            fStack_208 = fStack_208 * fVar11;
          }
          goto LAB_14198dda9;
        }
      }
    }
  }
  fVar13 = fStack_218;
  fVar14 = local_220;
  fVar15 = *param_2;
  iVar2 = *(int *)(param_1 + 0x238);
  fVar18 = fVar15 - (local_220 + fStack_218);
  fVar16 = fVar18;
  if (iVar2 != 0) {
    pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_170);
    fVar11 = fVar18;
    if (*pfVar4 <= fVar18) {
      fVar11 = *pfVar4;
    }
    fVar16 = fVar11;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar15 = (fVar15 - fVar11) * 0.5 + fVar14;
      }
      else {
        fVar16 = fVar18;
        if (iVar2 != 3) goto LAB_14198dd2f;
        fVar15 = fVar15 - fVar11;
      }
      fVar14 = fVar15 - fVar13;
      fVar16 = fVar11;
    }
  }
LAB_14198dd2f:
  fVar18 = fStack_214;
  fVar13 = fStack_21c;
  fVar15 = param_2[1];
  iVar2 = *(int *)(param_1 + 0x23c);
  fVar11 = fVar15 - (fStack_21c + fStack_214);
  fStack_208 = fVar11;
  if (iVar2 != 0) {
    lVar5 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_168);
    fVar17 = *(float *)(lVar5 + 4);
    if (fVar11 <= *(float *)(lVar5 + 4)) {
      fVar17 = fVar11;
    }
    fStack_208 = fVar17;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar15 = (fVar15 - fVar17) * 0.5 + fVar13;
      }
      else {
        fStack_208 = fVar11;
        if (iVar2 != 3) goto LAB_14198dda9;
        fVar15 = fVar15 - fVar17;
      }
      fVar13 = fVar15 - fVar18;
      fStack_208 = fVar17;
    }
  }
LAB_14198dda9:
  local_1f8 = 0x3f800000;
  local_20c = fVar16;
  local_1f4 = fVar14;
  local_1f0 = fVar13;
  lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
  if (*(char *)(lVar5 + 0x18) == '\0') {
    local_1e0 = CONCAT44(fStack_208,local_20c);
    fVar15 = param_2[2];
    local_1a8 = 0x3f800000;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0x3f800000;
    local_198 = fVar14;
    local_194 = fVar13;
    Concatenate<FTransform2D>(auStack_1c4,&local_1a8,param_2 + 7);
    uStack_1ac = CONCAT31(uStack_1ac._1_3_,
                          (byte)uStack_1ac ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_1ac) & 1);
    fStack_1d4 = fVar15 * fVar14 + param_2[3];
    local_e0 = *(undefined8 *)(param_1 + 0x228);
    local_1d0 = fVar15 * fVar13 + param_2[4];
    plVar8 = *(longlong **)(param_1 + 0x230);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uStack_110 = CONCAT44(fStack_1d4,fVar15);
    local_108 = CONCAT44(fVar14,local_1d0);
    uStack_100 = CONCAT44(auStack_1c4[0],fVar13);
    local_118 = local_1e0;
    uVar12 = uStack_1ac;
    fStack_1d8 = fVar15;
    fStack_1cc = fVar14;
    fStack_1c8 = fVar13;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x228);
    if (((*(int *)(lVar5 + 0x118) != 0) && (*(longlong **)(lVar5 + 0x110) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x110) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(lVar5 + 0x118) != 0) {
        plVar8 = *(longlong **)(lVar5 + 0x110);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_1ec);
      *(undefined8 *)(lVar5 + 0x100) = local_1ec;
    }
    uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
    local_204 = param_2[2];
    local_238 = param_2 + 7;
    local_200 = param_2[3];
    local_240 = &local_204;
    local_1fc = param_2[4];
    local_248 = (undefined8 *)(lVar5 + 0x100);
    FGeometry::FGeometry(&local_150,&local_20c,&local_1f8,uVar6);
    local_e0 = *(undefined8 *)(param_1 + 0x228);
    plVar8 = *(longlong **)(param_1 + 0x230);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_118 = local_150;
    uStack_110 = uStack_148;
    local_108 = local_140;
    uStack_100 = uStack_138;
    local_1b0 = (undefined4)local_120;
    uVar12 = (int)((ulonglong)local_120 >> 0x20);
  }
  local_e8 = CONCAT44(uVar12,local_1b0);
  local_d8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  FUN_141801ed0(param_3,&local_118);
  plVar8 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d8 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 14198e090 FUN_14198e090 body=1273 status=ok
// SIG undefined FUN_14198e090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14198e090(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 *local_1f0;
  longlong local_1e8;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  puVar3 = (undefined8 *)(param_1 + 0x208);
  local_1a0 = param_3;
  iVar9 = (**(code **)*puVar3)(puVar3);
  if (0 < iVar9) {
    iVar14 = 0;
    iVar9 = (**(code **)*puVar3)(puVar3);
    if (0 < iVar9) {
      lVar13 = 0;
      do {
        lVar7 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x218));
        if (((*(int *)(lVar7 + 0x58) != 0) && (*(longlong **)(lVar7 + 0x50) != (longlong *)0x0)) &&
           (cVar8 = (**(code **)(**(longlong **)(lVar7 + 0x50) + 0x18))(), cVar8 != '\0')) {
          if (*(int *)(lVar7 + 0x58) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)(lVar7 + 0x50);
          }
          (**(code **)(*plVar12 + 0x38))(plVar12,&local_1b8);
          *(undefined8 *)(lVar7 + 0x40) = local_1b8;
        }
        fVar15 = 0.0;
        fVar4 = *(float *)(lVar7 + 0x40);
        fVar16 = 0.0;
        fVar5 = *(float *)(lVar7 + 0x44);
        if (*(int *)(lVar7 + 0x60) == 2) {
          fVar15 = fVar4 * -0.5;
        }
        else if (*(int *)(lVar7 + 0x60) == 3) {
          fVar15 = -fVar4;
        }
        if (*(int *)(lVar7 + 100) == 2) {
          fVar16 = fVar5 * -0.5;
        }
        else if (*(int *)(lVar7 + 100) == 3) {
          fVar16 = -fVar5;
        }
        local_1d8 = fVar4;
        local_1d4 = fVar5;
        if (((*(int *)(lVar7 + 0x38) != 0) && (*(longlong **)(lVar7 + 0x30) != (longlong *)0x0)) &&
           (cVar8 = (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x18))(), cVar8 != '\0')) {
          if (*(int *)(lVar7 + 0x38) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)(lVar7 + 0x30);
          }
          (**(code **)(*plVar12 + 0x38))(plVar12,&local_1b0);
          *(undefined8 *)(lVar7 + 0x20) = local_1b0;
        }
        fVar15 = fVar15 + *(float *)(lVar7 + 0x20);
        fVar16 = fVar16 + *(float *)(lVar7 + 0x24);
        local_1c4 = 0x3f800000;
        local_1c0 = fVar15;
        local_1bc = fVar16;
        lVar10 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar7 + 0x10) + 0xd0);
        if (*(char *)(lVar10 + 0x18) == '\0') {
          fVar6 = *(float *)(param_2 + 8);
          local_160 = 0x3f800000;
          uStack_15c = 0;
          uStack_158 = 0;
          uStack_154 = 0x3f800000;
          local_198 = fVar4;
          fStack_194 = fVar5;
          local_150 = fVar15;
          local_14c = fVar16;
          Concatenate<FTransform2D>(&uStack_17c,&local_160,param_2 + 0x1c);
          uStack_164 = CONCAT31(uStack_164._1_3_,
                                (byte)uStack_164 ^
                                (*(byte *)(param_2 + 0x34) ^ (byte)uStack_164) & 1);
          fStack_18c = fVar6 * fVar15 + *(float *)(param_2 + 0xc);
          local_d0 = *(undefined8 *)(lVar7 + 0x10);
          local_188 = fVar6 * fVar16 + *(float *)(param_2 + 0x10);
          plVar12 = *(longlong **)(lVar7 + 0x18);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_108 = CONCAT44(fStack_194,local_198);
          uStack_100 = CONCAT44(fStack_18c,fVar6);
          local_f8 = CONCAT44(fVar15,local_188);
          uStack_f0 = CONCAT44(uStack_17c,fVar16);
          local_d8 = CONCAT44(uStack_164,local_168);
          local_e8 = local_178;
          uStack_e4 = uStack_174;
          uStack_e0 = uStack_170;
          uStack_dc = uStack_16c;
          fStack_190 = fVar6;
          fStack_184 = fVar15;
          fStack_180 = fVar16;
          local_c8 = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar12 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        else {
          lVar10 = *(longlong *)(lVar7 + 0x10);
          if (((*(int *)(lVar10 + 0x118) != 0) &&
              (*(longlong **)(lVar10 + 0x110) != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(**(longlong **)(lVar10 + 0x110) + 0x18))(), cVar8 != '\0')) {
            if (*(int *)(lVar10 + 0x118) == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = *(longlong **)(lVar10 + 0x110);
            }
            (**(code **)(*plVar12 + 0x38))(plVar12,&local_1a8);
            *(undefined8 *)(lVar10 + 0x100) = local_1a8;
          }
          uVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar7 + 0x10) + 0xd0);
          local_1d0 = *(undefined4 *)(param_2 + 8);
          local_1e8 = param_2 + 0x1c;
          local_1cc = *(undefined4 *)(param_2 + 0xc);
          local_1f0 = &local_1d0;
          local_1c8 = *(undefined4 *)(param_2 + 0x10);
          local_1f8 = (undefined8 *)(lVar10 + 0x100);
          FGeometry::FGeometry(&local_148,&local_1d8,&local_1c4,uVar11);
          local_d0 = *(undefined8 *)(lVar7 + 0x10);
          plVar12 = *(longlong **)(lVar7 + 0x18);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_108 = local_148;
          uStack_100 = uStack_140;
          local_f8 = local_138;
          uStack_f0 = uStack_130;
          local_d8 = local_118;
          local_e8 = local_128;
          uStack_e4 = uStack_124;
          uStack_e0 = uStack_120;
          uStack_dc = uStack_11c;
          local_c8 = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar12 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        FUN_141801ed0(local_1a0,&local_108);
        plVar12 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c8 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 8;
        iVar9 = (**(code **)*puVar3)(puVar3);
      } while (iVar14 < iVar9);
    }
  }
  return;
}



// FUNCTION 14198e590 OnArrangeChildren body=74 status=ok
// SIG undefined OnArrangeChildren(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SConstraintCanvas::OnArrangeChildren(void)

{
  undefined1 auStack_58 [48];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_20 = 0;
  FUN_14196c090();
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14198e5e0 FUN_14198e5e0 body=1021 status=ok
// SIG undefined FUN_14198e5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14198e5e0(longlong param_1,float *param_2,byte *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  float *local_1b0;
  float *local_1a8;
  byte local_198 [4];
  float local_194;
  float fStack_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170 [4];
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 auStack_134 [5];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar9 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0xc0) == 0) || (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar5 == '\0')) {
    local_198[0] = *(byte *)(param_1 + 0xb0);
  }
  else {
    plVar8 = plVar9;
    if (*(int *)(param_1 + 0xc0) != 0) {
      plVar8 = *(longlong **)(param_1 + 0xb8);
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,local_198);
    *(byte *)(param_1 + 0xb0) = local_198[0];
  }
  if ((*param_3 & local_198[0]) != 0) {
    if (((*(int *)(param_1 + 0x218) != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))(), cVar5 != '\0')) {
      plVar8 = plVar9;
      if (*(int *)(param_1 + 0x218) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x210);
      }
      uVar10 = (**(code **)(*plVar8 + 0x38))();
      *(undefined4 *)(param_1 + 0x208) = uVar10;
    }
    fVar2 = *(float *)(param_1 + 0x208);
    fVar11 = (float)DAT_1468b5d88 * fVar2;
    fVar12 = DAT_1468b5d88._4_4_ * fVar2;
    local_194 = (1.0 / fVar2) * *param_2;
    fStack_190 = (1.0 / fVar2) * param_2[1];
    local_180 = fVar2;
    local_17c = fVar11;
    local_178 = fVar12;
    lVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x240) + 0xd0);
    if (*(char *)(lVar6 + 0x18) == '\0') {
      local_150 = CONCAT44(fStack_190,local_194);
      fVar3 = param_2[2];
      local_170[1] = 0.0;
      local_170[2] = 0.0;
      local_170[0] = fVar2;
      local_170[3] = fVar2;
      local_160 = fVar11;
      local_15c = fVar12;
      Concatenate<FTransform2D>(auStack_134,local_170,param_2 + 7);
      fStack_148 = fVar3 * fVar2;
      uStack_11c = CONCAT31(uStack_11c._1_3_,
                            (byte)uStack_11c ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_11c) & 1);
      local_a0 = *(undefined8 *)(param_1 + 0x240);
      plVar9 = *(longlong **)(param_1 + 0x248);
      fStack_144 = fVar3 * fVar11 + param_2[3];
      local_140 = fVar3 * fVar12 + param_2[4];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      uStack_d0 = CONCAT44(fStack_144,fStack_148);
      local_c8 = CONCAT44(fVar11,local_140);
      uStack_c0 = CONCAT44(auStack_134[0],fVar12);
      local_d8 = local_150;
      uVar10 = uStack_11c;
      fStack_13c = fVar11;
      fStack_138 = fVar12;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x240);
      if (((*(int *)(lVar6 + 0x118) != 0) && (*(longlong **)(lVar6 + 0x110) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x110) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(lVar6 + 0x118) != 0) {
          plVar9 = *(longlong **)(lVar6 + 0x110);
        }
        (**(code **)(*plVar9 + 0x38))(plVar9,&local_158);
        *(undefined8 *)(lVar6 + 0x100) = local_158;
      }
      uVar7 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x240) + 0xd0);
      local_18c = param_2[2];
      local_1a8 = param_2 + 7;
      local_188 = param_2[3];
      local_1b0 = &local_18c;
      local_184 = param_2[4];
      local_1b8 = (undefined8 *)(lVar6 + 0x100);
      FGeometry::FGeometry(&local_118,&local_194,&local_180,uVar7);
      local_a0 = *(undefined8 *)(param_1 + 0x240);
      plVar9 = *(longlong **)(param_1 + 0x248);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_d8 = local_118;
      uStack_d0 = uStack_110;
      local_c8 = local_108;
      uStack_c0 = uStack_100;
      local_120 = (undefined4)local_e8;
      uVar10 = (int)((ulonglong)local_e8 >> 0x20);
    }
    local_a8 = CONCAT44(uVar10,local_120);
    local_98 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
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
    }
    FUN_141801ed0(param_3,&local_d8);
    plVar9 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_98)(local_98);
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
  }
  return;
}



// FUNCTION 14198e9e0 FUN_14198e9e0 body=1854 status=ok
// SIG undefined FUN_14198e9e0(void)

void FUN_14198e9e0(longlong param_1,undefined4 *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte local_res10 [8];
  byte *local_res18;
  byte local_res20;
  float *local_238;
  uint local_230;
  undefined4 local_22c;
  float *local_228;
  ulonglong local_220;
  float local_218;
  float fStack_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  
  uVar15 = 0;
  local_228 = (float *)0x0;
  local_220 = 0;
  uVar16 = 0;
  local_res18 = param_3;
  if (0 < (int)*(uint *)(param_1 + 0x238)) {
    local_220 = (ulonglong)*(uint *)(param_1 + 0x238);
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_228,0);
    local_228[(int)((uint)local_220 - 1)] = 0.0;
    uVar16 = (uint)local_220;
  }
  local_230 = 0;
  local_238 = (float *)0x0;
  local_22c = 0;
  if (0 < (int)*(uint *)(param_1 + 0x248)) {
    local_230 = *(uint *)(param_1 + 0x248);
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
    local_238[(int)(local_230 - 1)] = 0.0;
  }
  uVar5 = local_230;
  FUN_14196e070(&local_228,*param_2,param_1 + 0x230,param_1 + 600);
  FUN_14196e070(&local_238,param_2[1],param_1 + 0x240,param_1 + 0x268);
  fVar18 = 0.0;
  fVar21 = 0.0;
  if (0 < (int)uVar16) {
    uVar11 = (ulonglong)uVar16;
    pfVar8 = local_228;
    do {
      fVar22 = *pfVar8;
      *pfVar8 = fVar21;
      pfVar8 = pfVar8 + 1;
      fVar21 = fVar21 + fVar22;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (0 < (int)uVar5) {
    uVar11 = (ulonglong)uVar5;
    pfVar8 = local_238;
    do {
      fVar21 = *pfVar8;
      *pfVar8 = fVar18;
      pfVar8 = pfVar8 + 1;
      fVar18 = fVar18 + fVar21;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  iVar7 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
  uVar11 = uVar15;
  if (0 < iVar7) {
    do {
      lVar14 = *(longlong *)(uVar15 + *(longlong *)(param_1 + 0x218));
      lVar9 = *(longlong *)(lVar14 + 0x10);
      if (((*(int *)(lVar9 + 0xc0) != 0) && (*(longlong **)(lVar9 + 0xb8) != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar9 + 0xb8) + 0x18))(), cVar6 != '\0')) {
        if (*(int *)(lVar9 + 0xc0) == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)(lVar9 + 0xb8);
        }
        (**(code **)(*plVar12 + 0x38))(plVar12,local_res10);
        *(byte *)(lVar9 + 0xb0) = local_res10[0];
      }
      local_res20 = *(byte *)(lVar9 + 0xb0);
      if ((*param_3 & local_res20) != 0) {
        fVar18 = local_228[*(int *)(lVar14 + 0x60)];
        fVar21 = local_238[*(int *)(lVar14 + 0x68)];
        fVar22 = local_228[*(int *)(lVar14 + 100) + *(int *)(lVar14 + 0x60)] - fVar18;
        fVar27 = local_238[*(int *)(lVar14 + 0x6c) + *(int *)(lVar14 + 0x68)] - fVar21;
        if (((*(int *)(lVar14 + 0x48) != 0) && (*(longlong **)(lVar14 + 0x40) != (longlong *)0x0))
           && (cVar6 = (**(code **)(**(longlong **)(lVar14 + 0x40) + 0x18))(), cVar6 != '\0')) {
          if (*(int *)(lVar14 + 0x48) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)(lVar14 + 0x40);
          }
          (**(code **)(*plVar12 + 0x38))(plVar12,&local_128);
          *(undefined8 *)(lVar14 + 0x28) = local_128;
          *(undefined8 *)(lVar14 + 0x30) = uStack_120;
        }
        fVar23 = *(float *)(lVar14 + 0x28);
        fStack_1b4 = *(float *)(lVar14 + 0x2c);
        fVar4 = *(float *)(lVar14 + 0x30);
        fStack_1ac = *(float *)(lVar14 + 0x34);
        iVar7 = *(int *)(lVar14 + 0x20);
        fVar25 = fVar22 - (fVar23 + fVar4);
        fVar26 = fVar25;
        local_1b8 = fVar23;
        fStack_1b0 = fVar4;
        if (iVar7 != 0) {
          pfVar8 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar14 + 0x10),local_138);
          fVar24 = fVar25;
          if (*pfVar8 <= fVar25) {
            fVar24 = *pfVar8;
          }
          fVar26 = fVar24;
          if (iVar7 != 1) {
            if (iVar7 == 2) {
              fVar22 = (fVar22 - fVar24) * 0.5 + fVar23;
            }
            else {
              fVar26 = fVar25;
              if (iVar7 != 3) goto LAB_14198ecfe;
              fVar22 = fVar22 - fVar24;
            }
            fVar23 = fVar22 - fVar4;
            fVar26 = fVar24;
          }
        }
LAB_14198ecfe:
        fVar4 = fStack_1ac;
        fVar22 = fStack_1b4;
        iVar7 = *(int *)(lVar14 + 0x24);
        fVar24 = fVar27 - (fStack_1b4 + fStack_1ac);
        fVar25 = fVar24;
        if (iVar7 != 0) {
          lVar9 = SWidget::GetDesiredSize(*(undefined8 *)(lVar14 + 0x10),local_130);
          fVar17 = *(float *)(lVar9 + 4);
          if (fVar24 <= *(float *)(lVar9 + 4)) {
            fVar17 = fVar24;
          }
          fVar25 = fVar17;
          if (iVar7 != 1) {
            if (iVar7 == 2) {
              fVar27 = (fVar27 - fVar17) * 0.5 + fVar22;
            }
            else {
              fVar25 = fVar24;
              if (iVar7 != 3) goto LAB_14198ed6a;
              fVar27 = fVar27 - fVar17;
            }
            fVar22 = fVar27 - fVar4;
            fVar25 = fVar17;
          }
        }
LAB_14198ed6a:
        local_204 = 0x3f800000;
        fVar27 = fVar23 + fVar18 + *(float *)(lVar14 + 0x74);
        fVar18 = fVar22 + fVar21 + *(float *)(lVar14 + 0x78);
        local_218 = fVar26;
        fStack_214 = fVar25;
        local_200 = fVar27;
        local_1fc = fVar18;
        lVar9 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar14 + 0x10) + 0xd0);
        if (*(char *)(lVar9 + 0x18) == '\0') {
          local_1f0 = CONCAT44(fStack_214,local_218);
          fVar21 = (float)param_2[2];
          local_1a8 = 0x3f800000;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0x3f800000;
          local_198 = fVar27;
          local_194 = fVar18;
          Concatenate<FTransform2D>(&uStack_1d4,&local_1a8,param_2 + 7);
          uVar10 = *(undefined8 *)(lVar14 + 0x10);
          plVar12 = *(longlong **)(lVar14 + 0x18);
          uStack_1bc = CONCAT31(uStack_1bc._1_3_,
                                (byte)uStack_1bc ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_1bc) & 1
                               );
          fStack_1e4 = fVar21 * fVar27 + (float)param_2[3];
          local_1e0 = fVar21 * fVar18 + (float)param_2[4];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          uStack_180 = CONCAT44(fStack_1e4,fVar21);
          local_178 = CONCAT44(fVar27,local_1e0);
          uStack_170 = CONCAT44(uStack_1d4,fVar18);
          local_188 = local_1f0;
          local_168 = local_1d0;
          uStack_164 = uStack_1cc;
          uStack_160 = uStack_1c8;
          uStack_15c = uStack_1c4;
          uVar19 = local_1c0;
          uVar20 = uStack_1bc;
          fStack_1e8 = fVar21;
          fStack_1dc = fVar27;
          fStack_1d8 = fVar18;
        }
        else {
          lVar9 = *(longlong *)(lVar14 + 0x10);
          if (((*(int *)(lVar9 + 0x118) != 0) && (*(longlong **)(lVar9 + 0x110) != (longlong *)0x0))
             && (cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x110) + 0x18))(), cVar6 != '\0')) {
            if (*(int *)(lVar9 + 0x118) == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = *(longlong **)(lVar9 + 0x110);
            }
            (**(code **)(*plVar12 + 0x38))(plVar12,&local_1f8);
            *(undefined8 *)(lVar9 + 0x100) = local_1f8;
          }
          uVar10 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar14 + 0x10) + 0xd0);
          local_210 = param_2[2];
          local_20c = param_2[3];
          local_208 = param_2[4];
          FGeometry::FGeometry
                    (&local_118,&local_218,&local_204,uVar10,(undefined8 *)(lVar9 + 0x100),
                     &local_210,param_2 + 7);
          uVar10 = *(undefined8 *)(lVar14 + 0x10);
          plVar12 = *(longlong **)(lVar14 + 0x18);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_188 = local_118;
          uStack_180 = uStack_110;
          local_178 = local_108;
          uStack_170 = uStack_100;
          local_168 = local_f8;
          uStack_164 = uStack_f4;
          uStack_160 = uStack_f0;
          uStack_15c = uStack_ec;
          uVar19 = (int)local_e8;
          uVar20 = (int)((ulonglong)local_e8 >> 0x20);
        }
        local_158 = CONCAT44(uVar20,uVar19);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar12 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
          }
        }
        if ((local_res20 & *param_3) != 0) {
          lVar14 = (longlong)*(int *)(param_3 + 0x130);
          iVar7 = *(int *)(param_3 + 0x130) + 1;
          *(int *)(param_3 + 0x130) = iVar7;
          if (*(int *)(param_3 + 0x134) < iVar7) {
            TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_3 + 8);
          }
          pbVar13 = *(byte **)(param_3 + 0x128);
          if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
            pbVar13 = param_3 + 8;
          }
          *(undefined8 *)(pbVar13 + lVar14 * 0x48) = local_188;
          *(undefined8 *)(pbVar13 + lVar14 * 0x48 + 8) = uStack_180;
          *(undefined8 *)(pbVar13 + lVar14 * 0x48 + 0x10) = local_178;
          *(undefined8 *)(pbVar13 + lVar14 * 0x48 + 0x10 + 8) = uStack_170;
          pbVar3 = pbVar13 + lVar14 * 0x48 + 0x20;
          *(undefined4 *)pbVar3 = local_168;
          *(undefined4 *)(pbVar3 + 4) = uStack_164;
          *(undefined4 *)(pbVar3 + 8) = uStack_160;
          *(undefined4 *)(pbVar3 + 0xc) = uStack_15c;
          *(undefined8 *)(pbVar13 + lVar14 * 0x48 + 0x30) = local_158;
          *(undefined8 *)(pbVar13 + lVar14 * 0x48 + 0x38) = uVar10;
          *(longlong **)(pbVar13 + lVar14 * 0x48 + 0x40) = plVar12;
          if (plVar12 == (longlong *)0x0) goto LAB_14198f047;
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
      }
LAB_14198f047:
      uVar16 = (int)uVar11 + 1;
      uVar15 = uVar15 + 8;
      iVar7 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
      param_3 = local_res18;
      uVar11 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar7);
  }
  if (local_238 != (float *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != (float *)0x0) {
    FMemory::Free(local_228);
  }
  return;
}



// FUNCTION 14198f120 FUN_14198f120 body=1170 status=ok
// SIG undefined FUN_14198f120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14198f120(longlong param_1,float *param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  float *local_1e0;
  float *local_1d8;
  byte local_1c8 [4];
  float local_1c4;
  float fStack_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined8 local_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 auStack_16c [5];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0xc0) == 0) || (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar3 == '\0')) {
    local_1c8[0] = *(byte *)(param_1 + 0xb0);
  }
  else {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0xc0) != 0) {
      plVar7 = *(longlong **)(param_1 + 0xb8);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,local_1c8);
    *(byte *)(param_1 + 0xb0) = local_1c8[0];
  }
  if ((*param_3 & local_1c8[0]) == 0) {
    return;
  }
  FUN_141984de0(param_1,&local_1b8,param_2[2]);
  fVar12 = *param_2;
  iVar2 = *(int *)(param_1 + 0x238);
  fVar14 = fVar12 - (local_1b8 + local_1b0);
  fVar13 = local_1b8;
  fVar15 = fVar14;
  if (iVar2 != 0) {
    pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_138);
    fVar11 = fVar14;
    if (*pfVar4 <= fVar14) {
      fVar11 = *pfVar4;
    }
    fVar15 = fVar11;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar12 = (fVar12 - fVar11) * 0.5 + local_1b8;
      }
      else {
        fVar15 = fVar14;
        if (iVar2 != 3) goto LAB_14198f272;
        fVar12 = fVar12 - fVar11;
      }
      fVar13 = fVar12 - local_1b0;
      fVar15 = fVar11;
    }
  }
LAB_14198f272:
  fVar12 = param_2[1];
  iVar2 = *(int *)(param_1 + 0x23c);
  fVar11 = fVar12 - (local_1b4 + local_1ac);
  fStack_1c0 = fVar11;
  fVar14 = local_1b4;
  if (iVar2 != 0) {
    lVar5 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_130);
    fVar9 = *(float *)(lVar5 + 4);
    if (fVar11 <= *(float *)(lVar5 + 4)) {
      fVar9 = fVar11;
    }
    fStack_1c0 = fVar9;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar12 = (fVar12 - fVar9) * 0.5 + local_1b4;
      }
      else {
        fStack_1c0 = fVar11;
        if (iVar2 != 3) goto LAB_14198f2eb;
        fVar12 = fVar12 - fVar9;
      }
      fVar14 = fVar12 - local_1ac;
      fStack_1c0 = fVar9;
    }
  }
LAB_14198f2eb:
  local_19c = 0x3f800000;
  local_1c4 = fVar15;
  local_198 = fVar13;
  local_194 = fVar14;
  lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
  if (*(char *)(lVar5 + 0x18) == '\0') {
    local_188 = CONCAT44(fStack_1c0,local_1c4);
    fVar12 = param_2[2];
    local_150 = 0x3f800000;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0x3f800000;
    local_140 = fVar13;
    local_13c = fVar14;
    Concatenate<FTransform2D>(auStack_16c,&local_150,param_2 + 7);
    uStack_154 = CONCAT31(uStack_154._1_3_,
                          (byte)uStack_154 ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_154) & 1);
    fStack_17c = fVar13 * fVar12 + param_2[3];
    local_b0 = *(undefined8 *)(param_1 + 0x228);
    local_178 = fVar14 * fVar12 + param_2[4];
    plVar8 = *(longlong **)(param_1 + 0x230);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uStack_e0 = CONCAT44(fStack_17c,fVar12);
    local_d8 = CONCAT44(fVar13,local_178);
    uStack_d0 = CONCAT44(auStack_16c[0],fVar14);
    local_e8 = local_188;
    uVar10 = uStack_154;
    fStack_180 = fVar12;
    fStack_174 = fVar13;
    fStack_170 = fVar14;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x228);
    if (((*(int *)(lVar5 + 0x118) != 0) && (*(longlong **)(lVar5 + 0x110) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x110) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(lVar5 + 0x118) != 0) {
        plVar8 = *(longlong **)(lVar5 + 0x110);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_190);
      *(undefined8 *)(lVar5 + 0x100) = local_190;
    }
    uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
    local_1a8 = param_2[2];
    local_1d8 = param_2 + 7;
    local_1a4 = param_2[3];
    local_1e0 = &local_1a8;
    local_1a0 = param_2[4];
    local_1e8 = (undefined8 *)(lVar5 + 0x100);
    FGeometry::FGeometry(&local_128,&local_1c4,&local_19c,uVar6);
    local_b0 = *(undefined8 *)(param_1 + 0x228);
    plVar8 = *(longlong **)(param_1 + 0x230);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_e8 = local_128;
    uStack_e0 = uStack_120;
    local_d8 = local_118;
    uStack_d0 = uStack_110;
    local_158 = (undefined4)local_f8;
    uVar10 = (int)((ulonglong)local_f8 >> 0x20);
  }
  local_b8 = CONCAT44(uVar10,local_158);
  local_a8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  FUN_141801ed0(param_3,&local_e8);
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 14198f5c0 FUN_14198f5c0 body=2431 status=ok
// SIG undefined FUN_14198f5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14198f5c0(longlong param_1,undefined8 *param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int *piVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  byte *pbVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte local_res20 [8];
  float local_1d8 [2];
  float local_1d0;
  float fStack_1cc;
  undefined1 local_1c8;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190 [4];
  float local_180;
  float local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  
  lVar12 = *(longlong *)(param_1 + 0x228);
  plVar15 = (longlong *)0x0;
  pbVar16 = (byte *)(lVar12 + 0xb0);
  if (((*(int *)(lVar12 + 0xc0) == 0) || (*(longlong **)(lVar12 + 0xb8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0xb8) + 0x18))(), cVar5 == '\0')) {
    bVar6 = *pbVar16;
  }
  else if (*(int *)(lVar12 + 0xc0) == 0) {
    (**(code **)(_DAT_00000000 + 0x38))(0,local_res20);
    *pbVar16 = local_res20[0];
    bVar6 = local_res20[0];
  }
  else {
    (**(code **)(**(longlong **)(lVar12 + 0xb8) + 0x38))(*(longlong **)(lVar12 + 0xb8),local_res20);
    *pbVar16 = local_res20[0];
    bVar6 = local_res20[0];
  }
  if ((*param_3 & bVar6) == 0) {
    return;
  }
  uVar13 = *param_2;
  fVar22 = (float)((ulonglong)uVar13 >> 0x20);
  SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),&local_1d0);
  fVar20 = 1.0;
  local_1b0._0_4_ = (float)uVar13;
  fVar21 = (float)local_1b0;
  local_1d8[0] = 1.0;
  local_1b0 = uVar13;
  if (((((*(char *)(param_1 + 0x360) != '\0') && (*(char *)(param_1 + 0x36c) != '\0')) &&
       ((*(char *)(param_1 + 0x380) != '\0' &&
        ((ABS(*(float *)(param_1 + 0x370) - (float)local_1b0) <= 0.0001 &&
         (ABS(*(float *)(param_1 + 0x374) - fVar22) <= 0.0001)))))) &&
      (ABS(*(float *)(param_1 + 0x378) - *(float *)(param_2 + 1)) <= 1e-08)) &&
     ((ABS(local_1d0 - *(float *)(param_1 + 0x364)) <= 0.0001 &&
      (ABS(fStack_1cc - *(float *)(param_1 + 0x368)) <= 0.0001)))) {
    fVar20 = *(float *)(param_1 + 0x37c);
    local_1d8[0] = fVar20;
    goto LAB_14198fbe9;
  }
  piVar9 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x308);
  iVar2 = *piVar9;
  if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar5 != '\0')) {
    plVar14 = plVar15;
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar14 = *(longlong **)(param_1 + 0x2f8);
    }
    uVar8 = (**(code **)(*plVar14 + 0x38))();
    *(undefined4 *)(param_1 + 0x2f0) = uVar8;
  }
  iVar3 = *(int *)(param_1 + 0x2f0);
  bVar4 = 1 < iVar2 - 6U;
  if ((local_1d0 == 0.0) || (fStack_1cc == 0.0)) goto LAB_14198f972;
  switch(iVar2) {
  case 0:
    goto switchD_14198f833_caseD_0;
  case 1:
    local_1d0 = fVar21;
    fStack_1cc = fVar22;
    goto switchD_14198f833_caseD_0;
  case 2:
    fVar20 = fVar22 / fStack_1cc;
    fVar17 = fVar21 / local_1d0;
    local_1d8[0] = fVar20;
    if (fVar17 <= fVar20) {
      fVar20 = fVar17;
      local_1d8[0] = fVar17;
    }
    break;
  case 3:
    fVar20 = fVar21 / local_1d0;
    local_1d8[0] = fVar21 / local_1d0;
    break;
  case 4:
    fVar20 = fVar22 / fStack_1cc;
    local_1d8[0] = fVar22 / fStack_1cc;
    break;
  case 5:
    fVar20 = fVar22 / fStack_1cc;
    fVar17 = fVar21 / local_1d0;
    local_1d8[0] = fVar20;
    if (fVar20 <= fVar17) {
      fVar20 = fVar17;
      local_1d8[0] = fVar17;
    }
    break;
  case 6:
    fVar20 = *(float *)(param_1 + 0x350);
    local_1d8[0] = fVar20;
    goto switchD_14198f833_caseD_0;
  case 7:
    local_1b0 = CONCAT44(local_1b0._4_4_,0x3f800000);
    if (*(char *)(param_1 + 0x324) == '\0') {
      fVar20 = 1.0;
      local_1d8[0] = fVar20;
    }
    else {
      if (((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))(), cVar5 != '\0')) {
        plVar14 = plVar15;
        if (*(int *)(param_1 + 0x330) != 0) {
          plVar14 = *(longlong **)(param_1 + 0x328);
        }
        uVar8 = (**(code **)(*plVar14 + 0x38))();
        *(undefined4 *)(param_1 + 800) = uVar8;
      }
      fVar20 = *(float *)(param_1 + 800);
      local_1d8[0] = fVar20;
    }
switchD_14198f833_caseD_0:
    bVar4 = false;
  }
  if (iVar3 == 1) {
    if (1.0 < fVar20) goto LAB_14198f935;
  }
  else if ((iVar3 == 2) && (fVar20 < 1.0)) {
LAB_14198f935:
    fVar20 = 1.0;
    local_1d8[0] = 1.0;
  }
  if ((1e-08 < ABS(fVar20)) || (*(char *)(param_1 + 0x360) == '\0')) {
    if (local_1d8 != (float *)(param_1 + 0x37c)) {
      *(float *)(param_1 + 0x37c) = fVar20;
      *(undefined1 *)(param_1 + 0x380) = 1;
    }
  }
  else {
LAB_14198f972:
    if (*(char *)(param_1 + 0x380) != '\0') {
      *(undefined1 *)(param_1 + 0x380) = 0;
    }
  }
  local_1c8 = 0;
  if (*(char *)(param_1 + 0x339) != '\0') {
    if (((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))(), cVar5 != '\0')) {
      plVar14 = plVar15;
      if (*(int *)(param_1 + 0x348) != 0) {
        plVar14 = *(longlong **)(param_1 + 0x340);
      }
      uVar7 = (**(code **)(*plVar14 + 0x38))();
      *(undefined1 *)(param_1 + 0x338) = uVar7;
    }
    if ((*(char *)(param_1 + 0x338) != '\0') && (*(float *)(param_2 + 1) != 0.0)) {
      fVar20 = fVar20 / *(float *)(param_2 + 1);
      local_1d8[0] = fVar20;
    }
  }
  *(undefined8 *)(param_1 + 900) = 0;
  if (iVar2 != 1) {
    pfVar10 = (float *)TAttribute<FLinearColor>::Get(param_1 + 0x240);
    iVar2 = *(int *)(param_1 + 0x238);
    local_1c0 = *pfVar10;
    fStack_1bc = pfVar10[1];
    fStack_1b8 = pfVar10[2];
    fStack_1b4 = pfVar10[3];
    fVar17 = local_1c0;
    if (iVar2 != 0) {
      pfVar10 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_e8);
      fVar17 = local_1c0;
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          fVar17 = ((fVar21 - fVar20 * *pfVar10) * 0.5 + local_1c0) - fStack_1b8;
        }
        else if (iVar2 == 3) {
          fVar17 = (fVar21 - fVar20 * *pfVar10) - fStack_1b8;
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x23c);
    fVar19 = fStack_1bc;
    if (iVar2 != 0) {
      lVar12 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_e0);
      fVar18 = fVar20 * *(float *)(lVar12 + 4);
      fVar19 = fStack_1bc;
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          fVar19 = ((fVar22 - fVar18) * 0.5 + fStack_1bc) - fStack_1b4;
        }
        else if (iVar2 == 3) {
          fVar19 = (fVar22 - fVar18) - fStack_1b4;
        }
      }
    }
    fVar18 = 1.0 / fVar20;
    *(float *)(param_1 + 900) = fVar18 * fVar17;
    *(float *)(param_1 + 0x388) = fVar18 * fVar19;
    if (*(int *)(param_1 + 0x238) == 0) {
      local_1d0 = fVar18 * fVar21;
    }
    if (*(int *)(param_1 + 0x23c) == 0) {
      fStack_1cc = fVar18 * fVar22;
    }
  }
  if ((DAT_1469eaf30 != 0) &&
     ((fVar21 != *(float *)(param_1 + 0x370) || (fVar22 != *(float *)(param_1 + 0x374))))) {
    FUN_141847700(param_1);
    bVar4 = true;
  }
  *(float *)(param_1 + 0x370) = fVar21;
  *(float *)(param_1 + 0x374) = fVar22;
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 1);
  *(ulonglong *)(param_1 + 0x38c) = CONCAT44(fStack_1cc,local_1d0);
  if (bVar4) {
    FUN_14185c5d0(*(undefined8 *)(param_1 + 0x228),fVar20 * *(float *)(param_2 + 1));
    puVar11 = (undefined8 *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_d8);
    if (puVar11 != (undefined8 *)(param_1 + 0x364)) {
      if (*(char *)(param_1 + 0x36c) != '\0') {
        *(undefined1 *)(param_1 + 0x36c) = 0;
      }
      *(undefined8 *)(param_1 + 0x364) = *puVar11;
      *(undefined1 *)(param_1 + 0x36c) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x36c) != '\0') {
      *(undefined1 *)(param_1 + 0x36c) = 0;
    }
    if (*(char *)(param_1 + 0x380) != '\0') {
      *(undefined1 *)(param_1 + 0x380) = 0;
    }
  }
LAB_14198fbe9:
  fVar21 = fVar20 * *(float *)(param_1 + 900);
  fVar22 = fVar20 * *(float *)(param_1 + 0x388);
  local_19c = fVar20;
  local_198 = fVar21;
  local_194 = fVar22;
  lVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
  if (*(char *)(lVar12 + 0x18) == '\0') {
    local_170 = *(undefined4 *)(param_1 + 0x38c);
    uStack_16c = *(undefined4 *)(param_1 + 0x390);
    fVar17 = *(float *)(param_2 + 1);
    local_190[1] = 0.0;
    local_190[2] = 0.0;
    local_190[0] = fVar20;
    local_190[3] = fVar20;
    local_180 = fVar21;
    local_17c = fVar22;
    Concatenate<FTransform2D>(&uStack_154,local_190,(longlong)param_2 + 0x1c);
    uVar13 = *(undefined8 *)(param_1 + 0x228);
    plVar15 = *(longlong **)(param_1 + 0x230);
    uStack_13c = CONCAT31(uStack_13c._1_3_,
                          (byte)uStack_13c ^
                          (*(byte *)((longlong)param_2 + 0x34) ^ (byte)uStack_13c) & 1);
    fStack_168 = fVar17 * fVar20;
    fStack_164 = fVar17 * fVar21 + *(float *)((longlong)param_2 + 0xc);
    local_160 = fVar17 * fVar22 + *(float *)(param_2 + 2);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_138 = CONCAT44(uStack_16c,local_170);
    uStack_130 = CONCAT44(fStack_164,fStack_168);
    local_128 = CONCAT44(fVar21,local_160);
    uStack_120 = CONCAT44(uStack_154,fVar22);
    local_b0 = local_150;
    uStack_ac = uStack_14c;
    uStack_a8 = uStack_148;
    uStack_a4 = uStack_144;
    uVar8 = uStack_13c;
    fStack_15c = fVar21;
    fStack_158 = fVar22;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x228);
    if (((*(int *)(lVar12 + 0x118) != 0) && (*(longlong **)(lVar12 + 0x110) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0x110) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(lVar12 + 0x118) != 0) {
        plVar15 = *(longlong **)(lVar12 + 0x110);
      }
      (**(code **)(*plVar15 + 0x38))(plVar15,&local_178);
      *(undefined8 *)(lVar12 + 0x100) = local_178;
    }
    uVar13 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
    local_1a8 = *(undefined4 *)(param_2 + 1);
    local_1a4 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_1a0 = *(undefined4 *)(param_2 + 2);
    FGeometry::FGeometry
              (&local_d0,param_1 + 0x38c,&local_19c,uVar13,(undefined8 *)(lVar12 + 0x100),&local_1a8
               ,(longlong)param_2 + 0x1c);
    uVar13 = *(undefined8 *)(param_1 + 0x228);
    plVar15 = *(longlong **)(param_1 + 0x230);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_138 = local_d0;
    uStack_130 = uStack_c8;
    local_128 = local_c0;
    uStack_120 = uStack_b8;
    local_140 = (undefined4)local_a0;
    uVar8 = (int)((ulonglong)local_a0 >> 0x20);
  }
  local_108 = CONCAT44(uVar8,local_140);
  local_118 = local_b0;
  uStack_114 = uStack_ac;
  uStack_110 = uStack_a8;
  uStack_10c = uStack_a4;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar15 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar9 = (int *)((longlong)plVar15 + 0xc);
        iVar2 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
  }
  if ((*param_3 & bVar6) != 0) {
    iVar2 = *(int *)(param_3 + 0x130);
    lVar12 = (longlong)iVar2;
    *(int *)(param_3 + 0x130) = iVar2 + 1;
    if (*(int *)(param_3 + 0x134) < iVar2 + 1) {
      TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_3 + 8,iVar2);
    }
    pbVar16 = *(byte **)(param_3 + 0x128);
    if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
      pbVar16 = param_3 + 8;
    }
    *(undefined8 *)(pbVar16 + lVar12 * 0x48) = local_138;
    *(undefined8 *)(pbVar16 + lVar12 * 0x48 + 8) = uStack_130;
    *(undefined8 *)(pbVar16 + lVar12 * 0x48 + 0x10) = local_128;
    *(undefined8 *)(pbVar16 + lVar12 * 0x48 + 0x10 + 8) = uStack_120;
    pbVar1 = pbVar16 + lVar12 * 0x48 + 0x20;
    *(undefined4 *)pbVar1 = local_118;
    *(undefined4 *)(pbVar1 + 4) = uStack_114;
    *(undefined4 *)(pbVar1 + 8) = uStack_110;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_10c;
    *(undefined8 *)(pbVar16 + lVar12 * 0x48 + 0x30) = local_108;
    *(undefined8 *)(pbVar16 + lVar12 * 0x48 + 0x38) = uVar13;
    *(longlong **)(pbVar16 + lVar12 * 0x48 + 0x40) = plVar15;
    if (plVar15 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar9 = (int *)((longlong)plVar15 + 0xc);
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return;
}



// FUNCTION 14198ff60 FUN_14198ff60 body=3134 status=ok
// SIG undefined FUN_14198ff60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14198ff60(longlong param_1,float *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 uVar12;
  float *pfVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_558 [32];
  undefined8 *local_538;
  float *local_530;
  float *local_528;
  undefined8 local_518;
  undefined8 local_510;
  float local_508;
  float fStack_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float fStack_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8 [3];
  float fStack_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  float local_4c8 [3];
  float local_4bc;
  float local_4b8;
  float fStack_4b4;
  undefined8 local_4b0;
  undefined4 local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  undefined4 local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  undefined4 local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  float fStack_428;
  float fStack_424;
  float local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  uint auStack_414 [5];
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  undefined4 auStack_3dc [5];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined8 local_3c0;
  float fStack_3b8;
  float fStack_3b4;
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  undefined4 auStack_3a4 [5];
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  float local_370;
  float local_36c;
  float local_368;
  undefined8 local_364;
  undefined1 local_35c [24];
  byte local_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  float local_318;
  float local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  float local_300;
  float local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  ulonglong local_2d0;
  longlong lStack_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8;
  longlong lStack_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  local_510 = param_3;
  if (0.9999 <= *(float *)(param_1 + 0x234)) {
    lVar8 = **(longlong **)(param_1 + 0x218);
    local_45c = 0x3f800000;
    local_458 = 0;
    local_508 = fVar3;
    fStack_504 = fVar4;
    lVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
    if (*(char *)(lVar11 + 0x18) == '\0') {
      local_378 = CONCAT44(fStack_504,local_508);
      local_2f8 = 0x3f800000;
      uStack_2f4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0x3f800000;
      local_2e8 = 0;
      Concatenate<FTransform2D>(local_35c,&local_2f8,param_2 + 7);
      local_36c = param_2[3];
      local_368 = param_2[4];
      local_370 = param_2[2];
      local_344 = local_344 ^ (*(byte *)(param_2 + 0xd) ^ local_344) & 1;
      local_388 = *(undefined8 *)(lVar8 + 0x10);
      local_380 = *(longlong *)(lVar8 + 0x18);
      local_364 = 0;
      if (local_380 != 0) {
        LOCK();
        *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
        UNLOCK();
      }
      FArrangedWidget::FArrangedWidget(&local_108,&local_388,&local_378);
    }
    else {
      lVar11 = *(longlong *)(lVar8 + 0x10);
      if (((*(int *)(lVar11 + 0x118) != 0) && (*(longlong **)(lVar11 + 0x110) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(lVar11 + 0x110) + 0x18))(), cVar9 != '\0')) {
        if (*(int *)(lVar11 + 0x118) == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = *(longlong **)(lVar11 + 0x110);
        }
        (**(code **)(*plVar15 + 0x38))(plVar15,&local_450);
        *(undefined8 *)(lVar11 + 0x100) = local_450;
      }
      uVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
      local_468 = param_2[2];
      local_528 = param_2 + 7;
      local_464 = param_2[3];
      local_530 = &local_468;
      local_460 = param_2[4];
      local_538 = (undefined8 *)(lVar11 + 0x100);
      FGeometry::FGeometry(&local_238,&local_508,&local_45c,uVar12);
      plVar15 = *(longlong **)(lVar8 + 0x18);
      local_d0 = *(undefined8 *)(lVar8 + 0x10);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      local_108 = local_238;
      uStack_100 = uStack_230;
      local_f8 = local_228;
      uStack_f0 = uStack_220;
      local_d8 = local_208;
      local_e8 = local_218;
      uStack_e4 = uStack_214;
      uStack_e0 = uStack_210;
      uStack_dc = uStack_20c;
      local_c8 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar15 + 1;
          lVar8 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
      }
    }
    FUN_141801ed0(param_3,&local_108);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d0);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x23c);
    fVar18 = fVar4;
    if (iVar7 == 0) {
      fVar18 = fVar3;
    }
    fVar18 = fVar18 - *(float *)(param_1 + 0x238);
    fVar19 = fVar18 * *(float *)(param_1 + 0x230);
    fVar18 = fVar18 * *(float *)(param_1 + 0x234) + *(float *)(param_1 + 0x238);
    if (iVar7 == 0) {
      local_4f8 = fVar19;
      fStack_4f4 = fVar4;
    }
    else {
      local_500 = fVar3;
      local_4fc = fVar19;
    }
    local_4b0 = 0x3f800000;
    local_4a8 = 0;
    pfVar10 = &local_500;
    if (iVar7 == 0) {
      pfVar10 = &local_4f8;
    }
    uVar12 = *(undefined8 *)pfVar10;
    lVar8 = **(longlong **)(param_1 + 0x218);
    local_518 = uVar12;
    lVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
    plVar15 = (longlong *)0x0;
    if (*(char *)(lVar11 + 0x18) == '\0') {
      local_330 = 0;
      local_340 = 0x3f800000;
      uStack_33c = 0;
      uStack_338 = 0;
      uStack_334 = 0x3f800000;
      local_430 = uVar12;
      Concatenate<FTransform2D>(auStack_414,&local_340,param_2 + 7);
      fStack_424 = param_2[3];
      plVar14 = *(longlong **)(lVar8 + 0x18);
      local_420 = param_2[4];
      fStack_428 = param_2[2];
      uStack_1f0 = *(undefined8 *)(param_2 + 2);
      uStack_3fc = CONCAT31(uStack_3fc._1_3_,
                            (byte)uStack_3fc ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_3fc) & 1);
      local_1c0 = *(undefined8 *)(lVar8 + 0x10);
      uStack_41c = 0;
      uStack_418 = 0;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_1e8 = (ulonglong)(uint)local_420;
      lStack_1e0 = (ulonglong)auStack_414[0] << 0x20;
      local_1f8 = local_430;
      uVar17 = uStack_3fc;
    }
    else {
      lVar11 = *(longlong *)(lVar8 + 0x10);
      if (((*(int *)(lVar11 + 0x118) != 0) && (*(longlong **)(lVar11 + 0x110) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(lVar11 + 0x110) + 0x18))(), cVar9 != '\0')) {
        plVar14 = plVar15;
        if (*(int *)(lVar11 + 0x118) != 0) {
          plVar14 = *(longlong **)(lVar11 + 0x110);
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,&local_448);
        *(undefined8 *)(lVar11 + 0x100) = local_448;
      }
      uVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
      local_480 = param_2[2];
      local_530 = &local_480;
      local_47c = param_2[3];
      local_528 = param_2 + 7;
      local_478 = param_2[4];
      local_538 = (undefined8 *)(lVar11 + 0x100);
      FGeometry::FGeometry(&local_2e0,&local_518,&local_4b0,uVar12);
      plVar14 = *(longlong **)(lVar8 + 0x18);
      local_1c0 = *(undefined8 *)(lVar8 + 0x10);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_1f8 = local_2e0;
      uStack_1f0 = uStack_2d8;
      local_1e8 = local_2d0;
      lStack_1e0 = lStack_2c8;
      local_400 = (undefined4)local_2b0;
      uVar17 = (int)((ulonglong)local_2b0 >> 0x20);
    }
    pfVar10 = param_2 + 7;
    local_1c8 = CONCAT44(uVar17,local_400);
    local_1b8 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
    }
    FUN_141801ed0(local_510,&local_1f8);
    plVar14 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x23c);
    fVar16 = fVar18 + fVar19;
    if (iVar7 == 0) {
      local_4e8[0] = fVar16;
      local_4e8[1] = 0.0;
    }
    else {
      local_4ec = fVar16;
      local_4f0 = 0.0;
    }
    pfVar13 = &local_4f0;
    if (iVar7 == 0) {
      pfVar13 = local_4e8;
    }
    fVar5 = *pfVar13;
    fVar6 = pfVar13[1];
    if (iVar7 != 0) {
      pfVar13 = &local_4d8;
      local_4d8 = fVar3;
      local_4d4 = param_2[1] - fVar16;
    }
    else {
      pfVar13 = local_4e8 + 2;
      fStack_4dc = fVar4;
      local_4e8[2] = *param_2 - fVar16;
    }
    local_518 = *(undefined8 *)pfVar13;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 8);
    local_498 = 0x3f800000;
    local_494 = fVar5;
    local_490 = fVar6;
    lVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
    if (*(char *)(lVar11 + 0x18) == '\0') {
      local_3f8 = *(undefined8 *)pfVar13;
      fVar16 = param_2[2];
      local_328 = 0x3f800000;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_31c = 0x3f800000;
      local_318 = fVar5;
      local_314 = fVar6;
      Concatenate<FTransform2D>(auStack_3dc,&local_328,pfVar10);
      plVar14 = *(longlong **)(lVar8 + 0x18);
      uStack_3c4 = CONCAT31(uStack_3c4._1_3_,
                            (byte)uStack_3c4 ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_3c4) & 1);
      local_170 = *(undefined8 *)(lVar8 + 0x10);
      fStack_3ec = fVar16 * fVar5 + param_2[3];
      local_3e8 = fVar16 * fVar6 + param_2[4];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      uStack_1a0 = CONCAT44(fStack_3ec,fVar16);
      local_198 = CONCAT44(fVar5,local_3e8);
      uStack_190 = CONCAT44(auStack_3dc[0],fVar6);
      local_1a8 = local_3f8;
      uVar17 = uStack_3c4;
      fStack_3f0 = fVar16;
      fStack_3e4 = fVar5;
      fStack_3e0 = fVar6;
    }
    else {
      lVar11 = *(longlong *)(lVar8 + 0x10);
      if (((*(int *)(lVar11 + 0x118) != 0) && (*(longlong **)(lVar11 + 0x110) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(lVar11 + 0x110) + 0x18))(), cVar9 != '\0')) {
        plVar14 = plVar15;
        if (*(int *)(lVar11 + 0x118) != 0) {
          plVar14 = *(longlong **)(lVar11 + 0x110);
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,&local_440);
        *(undefined8 *)(lVar11 + 0x100) = local_440;
      }
      uVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
      local_4a4 = param_2[2];
      local_530 = &local_4a4;
      local_4a0 = param_2[3];
      local_49c = param_2[4];
      local_538 = (undefined8 *)(lVar11 + 0x100);
      local_528 = pfVar10;
      FGeometry::FGeometry(&local_2a8,&local_518,&local_498,uVar12);
      plVar14 = *(longlong **)(lVar8 + 0x18);
      local_170 = *(undefined8 *)(lVar8 + 0x10);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_1a8 = local_2a8;
      uStack_1a0 = uStack_2a0;
      local_198 = local_298;
      uStack_190 = uStack_290;
      local_3c8 = (undefined4)local_278;
      uVar17 = (int)((ulonglong)local_278 >> 0x20);
    }
    local_178 = CONCAT44(uVar17,local_3c8);
    local_168 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
    }
    FUN_141801ed0(local_510,&local_1a8);
    plVar14 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_168 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x23c);
    if (iVar7 == 0) {
      local_4c8[0] = fVar19;
      local_4c8[1] = 0.0;
    }
    else {
      local_4cc = fVar19;
      local_4d0 = 0.0;
    }
    pfVar13 = &local_4d0;
    if (iVar7 == 0) {
      pfVar13 = local_4c8;
    }
    fVar19 = *pfVar13;
    fVar16 = pfVar13[1];
    if (iVar7 != 0) {
      local_4c8[2] = fVar3;
      local_4bc = fVar18;
    }
    else {
      local_4b8 = fVar18;
      fStack_4b4 = fVar4;
    }
    local_474 = 0x3f800000;
    pfVar13 = local_4c8 + 2;
    if (iVar7 == 0) {
      pfVar13 = &local_4b8;
    }
    uVar12 = *(undefined8 *)pfVar13;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x10);
    local_518 = uVar12;
    local_470 = fVar19;
    local_46c = fVar16;
    lVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
    if (*(char *)(lVar11 + 0x18) == '\0') {
      fVar3 = param_2[2];
      local_310 = 0x3f800000;
      uStack_30c = 0;
      uStack_308 = 0;
      uStack_304 = 0x3f800000;
      local_3c0 = uVar12;
      local_300 = fVar19;
      local_2fc = fVar16;
      Concatenate<FTransform2D>(auStack_3a4,&local_310,pfVar10);
      uStack_38c = CONCAT31(uStack_38c._1_3_,
                            (byte)uStack_38c ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_38c) & 1);
      fStack_3b4 = fVar3 * fVar19 + param_2[3];
      local_120 = *(undefined8 *)(lVar8 + 0x10);
      local_3b0 = fVar3 * fVar16 + param_2[4];
      plVar15 = *(longlong **)(lVar8 + 0x18);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      uStack_150 = CONCAT44(fStack_3b4,fVar3);
      local_148 = CONCAT44(fVar19,local_3b0);
      uStack_140 = CONCAT44(auStack_3a4[0],fVar16);
      local_158 = local_3c0;
      uVar17 = uStack_38c;
      fStack_3b8 = fVar3;
      fStack_3ac = fVar19;
      fStack_3a8 = fVar16;
    }
    else {
      lVar11 = *(longlong *)(lVar8 + 0x10);
      if (((*(int *)(lVar11 + 0x118) != 0) && (*(longlong **)(lVar11 + 0x110) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(lVar11 + 0x110) + 0x18))(), cVar9 != '\0')) {
        if (*(int *)(lVar11 + 0x118) != 0) {
          plVar15 = *(longlong **)(lVar11 + 0x110);
        }
        (**(code **)(*plVar15 + 0x38))(plVar15,&local_438);
        *(undefined8 *)(lVar11 + 0x100) = local_438;
      }
      uVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
      local_48c = param_2[2];
      local_530 = &local_48c;
      local_488 = param_2[3];
      local_484 = param_2[4];
      local_538 = (undefined8 *)(lVar11 + 0x100);
      local_528 = pfVar10;
      FGeometry::FGeometry(&local_270,&local_518,&local_474,uVar12);
      plVar15 = *(longlong **)(lVar8 + 0x18);
      local_120 = *(undefined8 *)(lVar8 + 0x10);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      local_158 = local_270;
      uStack_150 = uStack_268;
      local_148 = local_260;
      uStack_140 = uStack_258;
      local_390 = (undefined4)local_240;
      uVar17 = (int)((ulonglong)local_240 >> 0x20);
    }
    local_128 = CONCAT44(uVar17,local_390);
    local_118 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar15 + 1;
        lVar8 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
    }
    FUN_141801ed0(local_510,&local_158);
    plVar15 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_118 + 1;
      lVar8 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141990ba0 FUN_141990ba0 body=297 status=ok
// SIG undefined FUN_141990ba0(void)

void FUN_141990ba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  char local_res8 [8];
  
  uVar8 = *(uint *)(param_1 + 0x208) ^ 0x80000000;
  iVar6 = 0;
  iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x210))(param_1 + 0x210);
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x220));
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (((*(int *)(lVar2 + 0xc0) != 0) && (*(longlong **)(lVar2 + 0xb8) != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar2 + 0xb8) + 0x18))(), cVar3 != '\0')) {
        if (*(int *)(lVar2 + 0xc0) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar2 + 0xb8);
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,local_res8);
        *(char *)(lVar2 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar2 + 0xb0) != DAT_1464b9ee9) {
        if (*(int *)(param_1 + 0x238) == 1) {
          uVar8 = FUN_14196b790();
        }
        else {
          uVar8 = FUN_14196b380(param_1,param_2,param_3,lVar1,uVar8);
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x210))(param_1 + 0x210);
    } while (iVar6 < iVar4);
  }
  return;
}



// FUNCTION 141990cd0 FUN_141990cd0 body=953 status=ok
// SIG undefined FUN_141990cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141990cd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined4 *local_1b0;
  longlong local_1a8;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  float local_188 [4];
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 auStack_13c [5];
  undefined4 local_128;
  undefined4 uStack_124;
  longlong local_120 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_168 = param_3;
  local_160 = param_1;
  FUN_14196bba0(param_1,local_120,param_2);
  puVar3 = (undefined8 *)(param_1 + 0x208);
  iVar16 = 0;
  iVar10 = (**(code **)*puVar3)(puVar3);
  if (0 < iVar10) {
    lVar15 = 0;
    pfVar14 = (float *)(local_120[0] + 8);
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x218) + lVar15);
      lVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
      if (*(char *)(lVar11 + 0x18) == '\0') {
        local_158 = pfVar14[1];
        fStack_154 = pfVar14[2];
        fVar4 = pfVar14[-2];
        fVar5 = pfVar14[-1];
        fVar6 = *pfVar14;
        fVar7 = *(float *)(param_2 + 8);
        local_188[1] = 0.0;
        local_188[2] = 0.0;
        local_188[0] = fVar4;
        local_188[3] = fVar4;
        local_178 = fVar5;
        local_174 = fVar6;
        Concatenate<FTransform2D>(auStack_13c,local_188,param_2 + 0x1c);
        plVar13 = *(longlong **)(lVar8 + 0x18);
        uStack_124 = CONCAT31(uStack_124._1_3_,
                              (byte)uStack_124 ^ (*(byte *)(param_2 + 0x34) ^ (byte)uStack_124) & 1)
        ;
        fStack_150 = fVar7 * fVar4;
        local_a0 = *(undefined8 *)(lVar8 + 0x10);
        fStack_14c = fVar7 * fVar5 + *(float *)(param_2 + 0xc);
        local_148 = fVar7 * fVar6 + *(float *)(param_2 + 0x10);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        local_d8 = CONCAT44(fStack_154,local_158);
        uStack_d0 = CONCAT44(fStack_14c,fStack_150);
        local_c8 = CONCAT44(fVar5,local_148);
        uStack_c0 = CONCAT44(auStack_13c[0],fVar6);
        uVar17 = local_128;
        uVar18 = uStack_124;
        fStack_144 = fVar5;
        fStack_140 = fVar6;
      }
      else {
        lVar11 = *(longlong *)(lVar8 + 0x10);
        if (((*(int *)(lVar11 + 0x118) != 0) && (*(longlong **)(lVar11 + 0x110) != (longlong *)0x0))
           && (cVar9 = (**(code **)(**(longlong **)(lVar11 + 0x110) + 0x18))(), cVar9 != '\0')) {
          if (*(int *)(lVar11 + 0x118) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(lVar11 + 0x110);
          }
          (**(code **)(*plVar13 + 0x38))(plVar13,&local_170);
          *(undefined8 *)(lVar11 + 0x100) = local_170;
        }
        uVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar8 + 0x10) + 0xd0);
        local_198 = *(undefined4 *)(param_2 + 8);
        local_1a8 = param_2 + 0x1c;
        local_194 = *(undefined4 *)(param_2 + 0xc);
        local_1b0 = &local_198;
        local_190 = *(undefined4 *)(param_2 + 0x10);
        local_1b8 = (undefined8 *)(lVar11 + 0x100);
        FGeometry::FGeometry(&local_110,pfVar14 + 1,pfVar14 + -2,uVar12);
        plVar13 = *(longlong **)(lVar8 + 0x18);
        local_a0 = *(undefined8 *)(lVar8 + 0x10);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        local_d8 = local_110;
        uStack_d0 = uStack_108;
        local_c8 = local_100;
        uStack_c0 = uStack_f8;
        uVar17 = (int)local_e0;
        uVar18 = (int)((ulonglong)local_e0 >> 0x20);
      }
      local_a8 = CONCAT44(uVar18,uVar17);
      local_98 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar13 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      FUN_141801ed0(local_168,&local_d8);
      plVar13 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      iVar16 = iVar16 + 1;
      pfVar14 = pfVar14 + 5;
      lVar15 = lVar15 + 8;
      iVar10 = (**(code **)*puVar3)(puVar3);
      param_1 = local_160;
    } while (iVar16 < iVar10);
  }
  if (local_120[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141991090 FUN_141991090 body=1673 status=ok
// SIG undefined FUN_141991090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141991090(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined4 *local_260;
  float *local_258;
  float local_248;
  float local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 auStack_1d4 [5];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float local_1a4;
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  pfVar7 = (float *)(**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,local_1a0);
  lVar11 = param_1 + 0x208;
  fVar16 = *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x74) -
           *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x70);
  fVar17 = 1.0 / fVar16;
  fVar19 = (*pfVar7 - *(float *)(param_1 + 0x78)) * *(float *)(param_1 + 0x74) * fVar17 -
           (pfVar7[1] - *(float *)(param_1 + 0x7c)) * *(float *)(param_1 + 0x70) * fVar17;
  local_200 = fVar19 + _DAT_1464bfed0;
  fVar20 = (pfVar7[1] / fVar16 - *(float *)(param_1 + 0x7c) * fVar17) * *(float *)(param_1 + 0x68) -
           (*pfVar7 - *(float *)(param_1 + 0x78)) * *(float *)(param_1 + 0x6c) * fVar17;
  local_1fc = fVar20 + _DAT_1464bfed4;
  local_208 = fVar19;
  local_204 = fVar20;
  puVar8 = (undefined8 *)FUN_141985e30(lVar11,local_188);
  fVar17 = fVar19 + _DAT_1464bfed0;
  fVar16 = fVar20 + _DAT_1464bfed4;
  pfVar7 = (float *)SWidget::GetDesiredSize(*puVar8,local_198);
  local_218 = fVar19 + _DAT_1464bfed0;
  local_214 = fVar20 + _DAT_1464bfed4;
  local_210 = fVar17 + *pfVar7;
  local_20c = fVar16 + pfVar7[1];
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_180 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)local_180 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  local_220 = *param_2;
  local_268 = (undefined8 *)&local_228;
  local_21c = param_2[1];
  local_228 = (undefined4)DAT_1468b5d88;
  local_224 = DAT_1468b5d88._4_4_;
  ComputePopupFitInRect(&local_248,&local_208,&local_218,1);
  pfVar7 = (float *)(param_2 + 7);
  fVar16 = (float)param_2[0xb];
  fVar17 = (float)param_2[9];
  fVar19 = *pfVar7;
  fVar20 = (float)param_2[8];
  fVar3 = (float)param_2[10];
  local_234 = 0x3f800000;
  fVar4 = (float)param_2[0xc];
  fVar18 = (float)((int)ROUND((local_248 + local_248) * fVar19 + local_244 * fVar17 +
                              local_244 * fVar17 + fVar16 + fVar16 + 0.5) >> 1);
  fVar14 = fVar3 * fVar19 - fVar20 * fVar17;
  fVar22 = 1.0 / fVar14;
  fVar21 = (float)((int)ROUND((local_244 + local_244) * fVar3 + local_248 * fVar20 +
                              local_248 * fVar20 + fVar4 + fVar4 + 0.5) >> 1);
  fVar17 = (fVar18 - fVar16) * fVar3 * fVar22 - (fVar21 - fVar4) * fVar17 * fVar22;
  fVar16 = (fVar21 / fVar14 - fVar4 * fVar22) * fVar19 - (fVar18 - fVar16) * fVar20 * fVar22;
  local_230 = fVar17;
  local_22c = fVar16;
  puVar8 = (undefined8 *)FUN_141985e30(lVar11,local_168);
  puVar9 = (undefined4 *)SWidget::GetDesiredSize(*puVar8,local_190);
  plVar10 = (longlong *)FUN_141985e30(lVar11,local_178);
  lVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*plVar10 + 0xd0);
  if (*(char *)(lVar11 + 0x18) == '\0') {
    local_1f0 = *puVar9;
    uStack_1ec = puVar9[1];
    fVar19 = (float)param_2[2];
    local_1b8 = 0x3f800000;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0x3f800000;
    local_1a8 = fVar17;
    local_1a4 = fVar16;
    Concatenate<FTransform2D>(auStack_1d4,&local_1b8,pfVar7);
    plVar13 = (longlong *)plVar10[1];
    uStack_1bc = CONCAT31(uStack_1bc._1_3_,
                          (byte)uStack_1bc ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_1bc) & 1);
    local_e0 = *plVar10;
    fStack_1e4 = fVar19 * fVar17 + (float)param_2[3];
    local_1e0 = fVar19 * fVar16 + (float)param_2[4];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_118 = CONCAT44(uStack_1ec,local_1f0);
    uStack_110 = CONCAT44(fStack_1e4,fVar19);
    local_108 = CONCAT44(fVar17,local_1e0);
    uStack_100 = CONCAT44(auStack_1d4[0],fVar16);
    uVar15 = uStack_1bc;
    fStack_1e8 = fVar19;
    fStack_1dc = fVar17;
    fStack_1d8 = fVar16;
  }
  else {
    lVar11 = *plVar10;
    if ((*(int *)(lVar11 + 0x118) != 0) && (*(longlong **)(lVar11 + 0x110) != (longlong *)0x0)) {
      cVar6 = (**(code **)(**(longlong **)(lVar11 + 0x110) + 0x18))();
      if (cVar6 != '\0') {
        if (*(int *)(lVar11 + 0x118) == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)(lVar11 + 0x110);
        }
        (**(code **)(*plVar13 + 0x38))(plVar13,&local_1f8);
        *(undefined8 *)(lVar11 + 0x100) = local_1f8;
      }
    }
    uVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*plVar10 + 0xd0);
    local_240 = param_2[2];
    local_260 = &local_240;
    local_23c = param_2[3];
    local_238 = param_2[4];
    local_268 = (undefined8 *)(lVar11 + 0x100);
    local_258 = pfVar7;
    FGeometry::FGeometry(&local_158,puVar9,&local_234,uVar12);
    plVar13 = (longlong *)plVar10[1];
    local_e0 = *plVar10;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_118 = local_158;
    uStack_110 = uStack_150;
    local_108 = local_148;
    uStack_100 = uStack_140;
    local_1c0 = (undefined4)local_128;
    uVar15 = (int)((ulonglong)local_128 >> 0x20);
  }
  local_e8 = CONCAT44(uVar15,local_1c0);
  local_d8 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar13 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  FUN_141801ed0(param_3,&local_118);
  plVar10 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_d8 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_d8)(local_d8);
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
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_170 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_160 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  return;
}



// FUNCTION 141991720 FUN_141991720 body=1569 status=ok
// SIG undefined FUN_141991720(void)

void FUN_141991720(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  byte *pbVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte local_res8 [8];
  int local_1f8;
  float local_1f4;
  float fStack_1f0;
  longlong local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_178;
  float local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  
  puVar3 = (undefined8 *)(param_1 + 0x208);
  iVar6 = (**(code **)*puVar3)(puVar3);
  if (0 < iVar6) {
    fVar22 = *param_2 / (float)*(int *)(param_1 + 600);
    fVar23 = param_2[1] / (float)*(int *)(param_1 + 0x25c);
    if (((*(int *)(param_1 + 0x250) != 0) && (*(longlong **)(param_1 + 0x248) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x248) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x250) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x248);
      }
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_108);
      *(undefined8 *)(param_1 + 0x230) = local_108;
      *(undefined8 *)(param_1 + 0x238) = uStack_100;
    }
    local_1f8 = 0;
    iVar6 = (**(code **)*puVar3)(puVar3);
    if (0 < iVar6) {
      lVar12 = 0;
      local_1e8 = 0;
      do {
        lVar12 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x218));
        lVar8 = *(longlong *)(lVar12 + 0x10);
        if (((*(int *)(lVar8 + 0xc0) != 0) && (*(longlong **)(lVar8 + 0xb8) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0xb8) + 0x18))(), cVar5 != '\0')) {
          if (*(int *)(lVar8 + 0xc0) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(lVar8 + 0xb8);
          }
          (**(code **)(*plVar10 + 0x38))(plVar10,local_res8);
          *(byte *)(lVar8 + 0xb0) = local_res8[0];
        }
        bVar4 = *(byte *)(lVar8 + 0xb0);
        if ((*param_3 & bVar4) != 0) {
          fVar17 = *(float *)(param_1 + 0x230);
          fVar18 = *(float *)(param_1 + 0x238);
          iVar6 = *(int *)(lVar12 + 0x20);
          fVar20 = fVar22 - (fVar17 + fVar18);
          fVar21 = fVar20;
          if (iVar6 != 0) {
            pfVar7 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar12 + 0x10),local_118);
            fVar13 = fVar20;
            if (*pfVar7 <= fVar20) {
              fVar13 = *pfVar7;
            }
            fVar21 = fVar13;
            if (iVar6 != 1) {
              if (iVar6 == 2) {
                fVar17 = (fVar22 - fVar13) * 0.5 + fVar17;
              }
              else {
                fVar21 = fVar20;
                if (iVar6 != 3) goto LAB_141991938;
                fVar17 = fVar22 - fVar13;
              }
              fVar17 = fVar17 - fVar18;
              fVar21 = fVar13;
            }
          }
LAB_141991938:
          fVar18 = *(float *)(param_1 + 0x234);
          fVar20 = *(float *)(param_1 + 0x23c);
          iVar6 = *(int *)(lVar12 + 0x24);
          fVar19 = fVar23 - (fVar18 + fVar20);
          fVar13 = fVar19;
          if (iVar6 != 0) {
            lVar8 = SWidget::GetDesiredSize(*(undefined8 *)(lVar12 + 0x10),local_110);
            fVar14 = *(float *)(lVar8 + 4);
            if (fVar19 <= *(float *)(lVar8 + 4)) {
              fVar14 = fVar19;
            }
            fVar13 = fVar14;
            if (iVar6 != 1) {
              if (iVar6 == 2) {
                fVar18 = (fVar23 - fVar14) * 0.5 + fVar18;
              }
              else {
                fVar13 = fVar19;
                if (iVar6 != 3) goto LAB_1419919af;
                fVar18 = fVar23 - fVar14;
              }
              fVar18 = fVar18 - fVar20;
              fVar13 = fVar14;
            }
          }
LAB_1419919af:
          local_1d4 = 0x3f800000;
          fVar17 = (float)*(int *)(lVar12 + 0x28) * fVar22 + fVar17;
          fVar18 = (float)*(int *)(lVar12 + 0x2c) * fVar23 + fVar18;
          local_1f4 = fVar21;
          fStack_1f0 = fVar13;
          local_1d0 = fVar17;
          local_1cc = fVar18;
          lVar8 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar12 + 0x10) + 0xd0);
          if (*(char *)(lVar8 + 0x18) == '\0') {
            local_1c0 = CONCAT44(fStack_1f0,local_1f4);
            fVar21 = param_2[2];
            local_188 = 0x3f800000;
            uStack_184 = 0;
            uStack_180 = 0;
            uStack_17c = 0x3f800000;
            local_178 = fVar17;
            local_174 = fVar18;
            Concatenate<FTransform2D>(&uStack_1a4,&local_188,param_2 + 7);
            plVar10 = *(longlong **)(lVar12 + 0x18);
            uVar9 = *(undefined8 *)(lVar12 + 0x10);
            uStack_18c = CONCAT31(uStack_18c._1_3_,
                                  (byte)uStack_18c ^
                                  (*(byte *)(param_2 + 0xd) ^ (byte)uStack_18c) & 1);
            fStack_1b4 = fVar21 * fVar17 + param_2[3];
            local_1b0 = fVar21 * fVar18 + param_2[4];
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            uStack_160 = CONCAT44(fStack_1b4,fVar21);
            local_158 = CONCAT44(fVar17,local_1b0);
            uStack_150 = CONCAT44(uStack_1a4,fVar18);
            local_168 = local_1c0;
            uVar15 = local_190;
            uVar16 = uStack_18c;
            local_148 = local_1a0;
            uStack_140 = uStack_198;
            fStack_1b8 = fVar21;
            fStack_1ac = fVar17;
            fStack_1a8 = fVar18;
          }
          else {
            lVar8 = *(longlong *)(lVar12 + 0x10);
            if (((*(int *)(lVar8 + 0x118) != 0) &&
                (*(longlong **)(lVar8 + 0x110) != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x110) + 0x18))(), cVar5 != '\0')) {
              if (*(int *)(lVar8 + 0x118) == 0) {
                plVar10 = (longlong *)0x0;
              }
              else {
                plVar10 = *(longlong **)(lVar8 + 0x110);
              }
              (**(code **)(*plVar10 + 0x38))(plVar10,&local_1c8);
              *(undefined8 *)(lVar8 + 0x100) = local_1c8;
            }
            uVar9 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar12 + 0x10) + 0xd0);
            local_1e0 = param_2[2];
            local_1dc = param_2[3];
            local_1d8 = param_2[4];
            FGeometry::FGeometry
                      (&local_f8,&local_1f4,&local_1d4,uVar9,(undefined8 *)(lVar8 + 0x100),
                       &local_1e0,param_2 + 7);
            plVar10 = *(longlong **)(lVar12 + 0x18);
            uVar9 = *(undefined8 *)(lVar12 + 0x10);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            local_168 = local_f8;
            uStack_160 = uStack_f0;
            local_158 = local_e8;
            uStack_150 = uStack_e0;
            uVar15 = (int)local_c8;
            uVar16 = (int)((ulonglong)local_c8 >> 0x20);
            local_148 = local_d8;
            uStack_140 = uStack_d0;
          }
          local_138 = CONCAT44(uVar16,uVar15);
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
              TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (param_3 + 8);
            }
            pbVar11 = *(byte **)(param_3 + 0x128);
            if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
              pbVar11 = param_3 + 8;
            }
            *(undefined8 *)(pbVar11 + lVar12 * 0x48) = local_168;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 8) = uStack_160;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x10) = local_158;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x10 + 8) = uStack_150;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x20) = local_148;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x20 + 8) = uStack_140;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x30) = local_138;
            *(undefined8 *)(pbVar11 + lVar12 * 0x48 + 0x38) = uVar9;
            *(longlong **)(pbVar11 + lVar12 * 0x48 + 0x40) = plVar10;
            if (plVar10 == (longlong *)0x0) goto LAB_141991cad;
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
LAB_141991cad:
        local_1f8 = local_1f8 + 1;
        lVar12 = local_1e8 + 8;
        local_1e8 = lVar12;
        iVar6 = (**(code **)*puVar3)(puVar3);
      } while (local_1f8 < iVar6);
    }
  }
  return;
}



// FUNCTION 141991d50 OnArrangeChildren body=62 status=ok
// SIG undefined OnArrangeChildren(void)

void SViewport::OnArrangeChildren(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  SCompoundWidget::OnArrangeChildren();
  if ((*(char *)(param_3 + 0x138) != '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x348), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  }
  return;
}



// FUNCTION 141991d90 OnArrangeChildren body=165 status=ok
// SIG undefined OnArrangeChildren(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SVirtualWindow::OnArrangeChildren(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  SCompoundWidget::OnArrangeChildren();
  if (*(char *)(param_3 + 0x138) != '\0') {
    plVar3 = (longlong *)SWindow::GetChildWindows(param_1);
    iVar5 = 0;
    if (0 < (int)plVar3[1]) {
      lVar4 = 0;
      do {
        lVar1 = *plVar3;
        SWindow::GetWindowGeometryInWindow(*(undefined8 *)(lVar1 + lVar4),local_68);
        plVar2 = *(longlong **)(lVar1 + lVar4);
        (**(code **)(*plVar2 + 0x200))(plVar2,local_68,param_3);
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar5 < (int)plVar3[1]);
    }
  }
  return;
}



// FUNCTION 141991e40 FUN_141991e40 body=904 status=ok
// SIG undefined FUN_141991e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141991e40(longlong param_1,undefined4 *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 *local_170;
  undefined4 *local_168;
  byte local_158 [8];
  longlong local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint auStack_104 [5];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  longlong lStack_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  longlong lStack_80;
  undefined8 local_68;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FUN_141985e30(param_1 + 0x208,&local_150);
  plVar7 = local_148;
  if (local_150 != DAT_1469eb218) {
    plVar8 = (longlong *)0x0;
    if (((*(int *)(local_150 + 0xc0) == 0) || (*(longlong **)(local_150 + 0xb8) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(local_150 + 0xb8) + 0x18))(), cVar4 == '\0')) {
      local_158[0] = *(byte *)(local_150 + 0xb0);
    }
    else {
      plVar7 = plVar8;
      if (*(int *)(local_150 + 0xc0) != 0) {
        plVar7 = *(longlong **)(local_150 + 0xb8);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,local_158);
      *(byte *)(local_150 + 0xb0) = local_158[0];
    }
    plVar7 = local_148;
    if ((*param_3 & local_158[0]) != 0) {
      local_134 = 0x3f800000;
      local_130 = 0;
      lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(local_150 + 0xd0);
      if (*(char *)(lVar5 + 0x18) == '\0') {
        local_120 = *param_2;
        uStack_11c = param_2[1];
        local_e8 = 0x3f800000;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0x3f800000;
        local_d8 = 0;
        Concatenate<FTransform2D>(auStack_104,&local_e8,param_2 + 7);
        uStack_114 = param_2[3];
        local_110 = param_2[4];
        uStack_118 = param_2[2];
        uStack_90 = *(undefined8 *)(param_2 + 2);
        uStack_ec = CONCAT31(uStack_ec._1_3_,
                             (byte)uStack_ec ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_ec) & 1);
        uStack_10c = 0;
        uStack_108 = 0;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_148 + 1) = (int)local_148[1] + 1;
          UNLOCK();
        }
        local_98 = CONCAT44(uStack_11c,local_120);
        local_88 = (ulonglong)local_110;
        lStack_80 = (ulonglong)auStack_104[0] << 0x20;
        uVar9 = uStack_ec;
      }
      else {
        if (((*(int *)(local_150 + 0x118) != 0) &&
            (*(longlong **)(local_150 + 0x110) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(local_150 + 0x110) + 0x18))(), cVar4 != '\0')) {
          if (*(int *)(local_150 + 0x118) != 0) {
            plVar8 = *(longlong **)(local_150 + 0x110);
          }
          (**(code **)(*plVar8 + 0x38))(plVar8,&local_128);
          *(undefined8 *)(local_150 + 0x100) = local_128;
        }
        uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(local_150 + 0xd0);
        local_140 = param_2[2];
        local_168 = param_2 + 7;
        local_13c = param_2[3];
        local_170 = &local_140;
        local_138 = param_2[4];
        local_178 = (undefined8 *)(local_150 + 0x100);
        FGeometry::FGeometry(&local_d0,param_2,&local_134,uVar6);
        if (local_148 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_148 + 1) = (int)local_148[1] + 1;
          UNLOCK();
        }
        local_98 = local_d0;
        uStack_90 = uStack_c8;
        local_88 = local_c0;
        lStack_80 = lStack_b8;
        local_f0 = (undefined4)local_a0;
        uVar9 = (int)((ulonglong)local_a0 >> 0x20);
      }
      plVar8 = local_148;
      local_68 = CONCAT44(uVar9,local_f0);
      plVar7 = local_148;
      local_58 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_148 + 1) = (int)local_148[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = local_148 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_148)(local_148);
          plVar7 = local_148;
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      FUN_141801ed0(param_3,&local_98);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_58 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = local_148;
        if ((int)lVar5 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = local_148;
          if (iVar3 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
            plVar7 = local_148;
          }
        }
      }
    }
  }
  plVar8 = local_148;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_148 + 8))(local_148,1);
      }
    }
  }
  return;
}



// FUNCTION 1419921d0 OnArrangeChildren body=142 status=ok
// SIG undefined OnArrangeChildren(void)

void SWidgetSwitcher::OnArrangeChildren(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = DAT_1464aa770;
  local_24 = DAT_1464aa774;
  local_20 = 1;
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x220))();
  if (0 < iVar1) {
    lVar2 = FUN_141983af0(param_1);
    if (lVar2 != 0) {
      FUN_14195cd70(param_2,param_3,lVar2,&local_28);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  return;
}



// FUNCTION 141992260 FUN_141992260 body=1234 status=ok
// SIG undefined FUN_141992260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141992260(longlong param_1,float *param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  float *local_1f0;
  float *local_1e8;
  byte local_1d8 [4];
  float local_1d4;
  float fStack_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 auStack_17c [5];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  float local_14c;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0xc0) == 0) || (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar3 == '\0')) {
    local_1d8[0] = *(byte *)(param_1 + 0xb0);
  }
  else {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0xc0) != 0) {
      plVar7 = *(longlong **)(param_1 + 0xb8);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,local_1d8);
    *(byte *)(param_1 + 0xb0) = local_1d8[0];
  }
  if ((*param_3 & local_1d8[0]) == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))(), cVar3 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0x260) != 0) {
      plVar7 = *(longlong **)(param_1 + 600);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_138);
    *(undefined8 *)(param_1 + 0x240) = local_138;
    *(undefined8 *)(param_1 + 0x248) = uStack_130;
  }
  fVar12 = *(float *)(param_1 + 0x240);
  fStack_1ac = *(float *)(param_1 + 0x244);
  fVar13 = *(float *)(param_1 + 0x248);
  fStack_1a4 = *(float *)(param_1 + 0x24c);
  iVar2 = *(int *)(param_1 + 0x238);
  fVar11 = *param_2;
  fVar14 = fVar11 - (fVar12 + fVar13);
  fVar15 = fVar14;
  local_1b0 = fVar12;
  fStack_1a8 = fVar13;
  if (iVar2 != 0) {
    pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_148);
    fVar9 = fVar14;
    if (*pfVar4 <= fVar14) {
      fVar9 = *pfVar4;
    }
    fVar15 = fVar9;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar11 = (fVar11 - fVar9) * 0.5 + fVar12;
      }
      else {
        fVar15 = fVar14;
        if (iVar2 != 3) goto LAB_1419923ef;
        fVar11 = fVar11 - fVar9;
      }
      fVar12 = fVar11 - fVar13;
      fVar15 = fVar9;
    }
  }
LAB_1419923ef:
  fVar13 = fStack_1ac;
  fVar11 = param_2[1];
  iVar2 = *(int *)(param_1 + 0x23c);
  fVar14 = fVar11 - (fStack_1ac + fStack_1a4);
  fStack_1d0 = fVar14;
  if (iVar2 != 0) {
    lVar5 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_140);
    fVar9 = *(float *)(lVar5 + 4);
    if (fVar14 <= *(float *)(lVar5 + 4)) {
      fVar9 = fVar14;
    }
    fStack_1d0 = fVar9;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar11 = (fVar11 - fVar9) * 0.5 + fVar13;
      }
      else {
        fStack_1d0 = fVar14;
        if (iVar2 != 3) goto LAB_141992468;
        fVar11 = fVar11 - fVar9;
      }
      fVar13 = fVar11 - fStack_1a4;
      fStack_1d0 = fVar9;
    }
  }
LAB_141992468:
  local_1c0 = 0x3f800000;
  local_1d4 = fVar15;
  local_1bc = fVar12;
  local_1b8 = fVar13;
  lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
  if (*(char *)(lVar5 + 0x18) == '\0') {
    local_198 = CONCAT44(fStack_1d0,local_1d4);
    fVar11 = param_2[2];
    local_160 = 0x3f800000;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0x3f800000;
    local_150 = fVar12;
    local_14c = fVar13;
    Concatenate<FTransform2D>(auStack_17c,&local_160,param_2 + 7);
    uStack_164 = CONCAT31(uStack_164._1_3_,
                          (byte)uStack_164 ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_164) & 1);
    fStack_18c = fVar12 * fVar11 + param_2[3];
    local_b0 = *(undefined8 *)(param_1 + 0x228);
    local_188 = fVar11 * fVar13 + param_2[4];
    plVar8 = *(longlong **)(param_1 + 0x230);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uStack_e0 = CONCAT44(fStack_18c,fVar11);
    local_d8 = CONCAT44(fVar12,local_188);
    uStack_d0 = CONCAT44(auStack_17c[0],fVar13);
    local_e8 = local_198;
    uVar10 = uStack_164;
    fStack_190 = fVar11;
    fStack_184 = fVar12;
    fStack_180 = fVar13;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x228);
    if (((*(int *)(lVar5 + 0x118) != 0) && (*(longlong **)(lVar5 + 0x110) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x110) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(lVar5 + 0x118) != 0) {
        plVar8 = *(longlong **)(lVar5 + 0x110);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_1a0);
      *(undefined8 *)(lVar5 + 0x100) = local_1a0;
    }
    uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0x228) + 0xd0);
    local_1cc = param_2[2];
    local_1e8 = param_2 + 7;
    local_1c8 = param_2[3];
    local_1f0 = &local_1cc;
    local_1c4 = param_2[4];
    local_1f8 = (undefined8 *)(lVar5 + 0x100);
    FGeometry::FGeometry(&local_128,&local_1d4,&local_1c0,uVar6);
    local_b0 = *(undefined8 *)(param_1 + 0x228);
    plVar8 = *(longlong **)(param_1 + 0x230);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_e8 = local_128;
    uStack_e0 = uStack_120;
    local_d8 = local_118;
    uStack_d0 = uStack_110;
    local_168 = (undefined4)local_f8;
    uVar10 = (int)((ulonglong)local_f8 >> 0x20);
  }
  local_b8 = CONCAT44(uVar10,local_168);
  local_a8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  FUN_141801ed0(param_3,&local_e8);
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 141992740 FUN_141992740 body=150 status=ok
// SIG undefined FUN_141992740(void)

void FUN_141992740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  
  if ((*(int *)(param_1 + 0x218) != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x218) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x210);
      }
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      *(undefined4 *)(param_1 + 0x208) = uVar3;
    }
  }
  local_10 = &local_28;
  local_18 = &LAB_14196e250;
  local_28 = param_3;
  local_20 = param_2;
  SWrapBox::FChildArranger::Arrange(param_1,&local_18);
  return;
}



// FUNCTION 1419927e0 FUN_1419927e0 body=215 status=ok
// SIG undefined FUN_1419927e0(void)

undefined8 FUN_1419927e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *local_28;
  int local_20;
  undefined8 local_18;
  longlong local_10;
  
  cVar1 = FUN_14192b710();
  if (cVar1 == '\0') {
    FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x358,0);
    if ((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x3d8) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x3d0);
        }
        (**(code **)(*plVar2 + 0x40))();
      }
    }
  }
  else {
    FUN_141985010(*(undefined8 *)(param_1 + 0x3b0),&local_28);
    if (0 < local_20) {
      local_18 = *local_28;
      local_10 = local_28[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FUN_14199c920(param_1,&local_18,3);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  }
  FUN_141946eb0(param_1,param_2);
  return param_2;
}



// FUNCTION 1419928c0 FUN_1419928c0 body=214 status=ok
// SIG undefined FUN_1419928c0(void)

undefined1 * FUN_1419928c0(undefined8 param_1,undefined1 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar1 != '\0')) {
    if ((int)param_3[1] != 0) {
      plVar2 = (longlong *)*param_3;
    }
    (**(code **)(*plVar2 + 0x40))();
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_2;
}



// FUNCTION 1419929a0 FUN_1419929a0 body=58 status=ok
// SIG undefined FUN_1419929a0(void)

void FUN_1419929a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2f8);
  if (*(char *)((longlong)plVar1 + 0x1a) != *(char *)(param_1 + 0x1a)) {
    *(char *)((longlong)plVar1 + 0x1a) = *(char *)(param_1 + 0x1a);
    (**(code **)(*plVar1 + 0x1f0))(plVar1);
    FUN_1418475e0(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1419929e0 FUN_1419929e0 body=188 status=ok
// SIG undefined FUN_1419929e0(void)

void FUN_1419929e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_18);
  if (local_18 != 0) {
    FSlateApplication::SetKeyboardFocus(DAT_1469f4590,&local_18,4);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 141992aa0 FUN_141992aa0 body=179 status=ok
// SIG undefined FUN_141992aa0(void)

undefined1 * FUN_141992aa0(longlong param_1,undefined1 *param_2)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  
  if (DAT_1469f4590 != 0) {
    fVar3 = (float)FUN_14189c9c0();
    if ((fVar3 < *(float *)(param_1 + 0x324) || fVar3 == *(float *)(param_1 + 0x324)) &&
       (pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x308) + 0x3c8) + 0x234),
       *pfVar1 <= 0.9999 && *pfVar1 != 0.9999)) {
      bVar2 = true;
      goto LAB_141992aef;
    }
  }
  bVar2 = false;
LAB_141992aef:
  if (bVar2) {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    return param_2;
  }
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



// FUNCTION 141992b60 FUN_141992b60 body=779 status=ok
// SIG undefined FUN_141992b60(void)

undefined1 * FUN_141992b60(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_e8;
  int local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60 [22];
  
  fVar11 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                 *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
  fVar9 = (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
          *(float *)(param_3 + 0x24) * fVar11;
  fVar13 = (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
           *(float *)(param_3 + 0x28) * fVar11 - fVar9;
  fVar12 = (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
           *(float *)(param_3 + 0x1c) * fVar11 -
           (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
           *(float *)(param_3 + 0x20) * fVar11;
  FUN_14196bba0(fVar9,&local_e8);
  iVar1 = *(int *)(param_1 + 0x238);
  fVar9 = *(float *)(param_1 + 0x268) * 0.5;
  iVar3 = 1;
  fVar11 = *(float *)(param_1 + 0x264) * 0.5;
  if (iVar1 == 0) {
    if (1 < local_e0) {
      fVar12 = *(float *)(local_e8 + 4);
      lVar4 = local_e8 + 4;
      do {
        fVar10 = *(float *)(lVar4 + 8) * *(float *)(lVar4 + -4) + fVar12;
        if (fVar10 < fVar12) {
          fVar10 = fVar12;
        }
        fVar12 = *(float *)(lVar4 + 0x14);
        lVar4 = lVar4 + 0x14;
        if (((fVar10 - fVar9) + fVar11 < fVar13) && (fVar13 < (fVar12 + fVar9) - fVar11))
        goto LAB_141992d89;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_e0);
    }
  }
  else if (1 < local_e0) {
    fVar13 = *(float *)(local_e8 + 8);
    lVar4 = local_e8 + 8;
    do {
      fVar10 = *(float *)(lVar4 + -8) * *(float *)(lVar4 + 8) + fVar13;
      if (fVar10 < fVar13) {
        fVar10 = fVar13;
      }
      fVar13 = *(float *)(lVar4 + 0x14);
      lVar4 = lVar4 + 0x14;
      if (((fVar10 - fVar9) + fVar11 < fVar12) && (fVar12 < (fVar9 + fVar13) - fVar11))
      goto LAB_141992d89;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_e0);
  }
LAB_141992cc8:
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 1;
LAB_141992ce8:
  if (local_e8 != 0) {
    FMemory::Free(local_e8);
  }
  return param_2;
LAB_141992d89:
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      local_d8[0] = 1;
      puVar7 = &local_d0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_a0[0] = 4;
      puVar5 = &local_c0;
      local_c0 = 0;
      uStack_b8 = 0;
      puVar6 = &local_b0;
      local_b0 = 0;
      uStack_a8 = 0;
      puVar8 = local_a0;
    }
    else {
      local_98[0] = 1;
      puVar7 = &local_90;
      local_90 = 0;
      uStack_88 = 0;
      local_60[0] = 3;
      puVar5 = &local_80;
      local_80 = 0;
      uStack_78 = 0;
      puVar6 = &local_70;
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = local_60;
    }
    uVar2 = puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    *(undefined8 *)(param_2 + 0x18) = *puVar5;
    uVar2 = puVar5[1];
    puVar5[1] = 0;
    *(undefined8 *)(param_2 + 0x20) = uVar2;
    *puVar5 = 0;
    *(undefined8 *)(param_2 + 0x28) = *puVar6;
    uVar2 = puVar6[1];
    puVar6[1] = 0;
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    *puVar6 = 0;
    *(undefined4 *)(param_2 + 0x38) = *puVar8;
    if (iVar1 != 0) {
      FCursorReply::~FCursorReply(local_d8);
    }
    else {
      FCursorReply::~FCursorReply(local_98);
    }
    goto LAB_141992ce8;
  }
  goto LAB_141992cc8;
}



// FUNCTION 141992e70 FUN_141992e70 body=424 status=ok
// SIG undefined FUN_141992e70(void)

undefined1 * FUN_141992e70(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  uint uStackX_c;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
      plVar9 = plVar2;
      plVar10 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar2[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(plVar2 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar9 = (longlong *)0x0, plVar10 = (longlong *)0x0, !bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)plVar2[1];
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar9 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar10 = *(longlong **)(param_1 + 0x2f0);
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar2[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(plVar2 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      puVar8 = (undefined1 *)(**(code **)(*plVar10 + 0x40))(plVar10,local_48);
      bVar4 = true;
      bVar3 = true;
      bVar11 = false;
      uVar6 = *puVar8;
      goto LAB_141992f49;
    }
  }
  plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
  puVar8 = local_88;
  local_88[0] = 0;
  local_50 = 1;
  local_80 = 0;
  uStack_78 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar11 = true;
  uVar6 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
LAB_141992f49:
  *param_2 = uVar6;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar8 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(puVar8 + 0x18);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(puVar8 + 0x20);
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(puVar8 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(puVar8 + 0x30);
  *(undefined8 *)(puVar8 + 0x30) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(puVar8 + 0x38);
  if (bVar11) {
    FCursorReply::~FCursorReply(local_88);
  }
  if (bVar3) {
    FCursorReply::~FCursorReply(local_48);
  }
  if ((bVar4) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141993020 FUN_141993020 body=148 status=ok
// SIG undefined FUN_141993020(void)

void FUN_141993020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x2f8);
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
        if (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0xf0))();
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
  return;
}



// FUNCTION 1419930c0 FUN_1419930c0 body=203 status=ok
// SIG undefined FUN_1419930c0(void)

void FUN_1419930c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x2f0);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar6 + 0x110))(plVar6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
    }
  }
  return;
}



// FUNCTION 141993190 FUN_141993190 body=423 status=ok
// SIG undefined FUN_141993190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141993190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  uint uStack_1b4;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar9 = (longlong *)0x0;
  local_1b8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xb8))(plVar9,local_e8,param_4);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_1419932a8;
    }
  }
  local_f4 = local_f4 & 0xffffff00;
  puVar7 = local_1a8;
  plVar8 = (longlong *)((ulonglong)uStack_1b4 << 0x20);
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0x20702;
LAB_1419932a8:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1a8);
  }
  if (bVar3) {
    FUN_140438c20(local_e8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141993360 OnGetContentVisibility body=61 status=ok
// SIG undefined OnGetContentVisibility(void)

undefined1 * SExpandableArea::OnGetContentVisibility(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 local_res8 [32];
  
  lVar1 = (**(code **)(*param_1 + 0x240))(param_1,local_res8);
  uVar2 = DAT_1464b9ee9;
  if (0.0 < *(float *)(lVar1 + 4)) {
    uVar2 = DAT_1464b9ee8;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1419933b0 FUN_1419933b0 body=434 status=ok
// SIG undefined FUN_1419933b0(void)

undefined1 * FUN_1419933b0(longlong *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *local_28;
  int local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar4 = *param_3;
  if (((lVar4 != DAT_1469e9910) && (lVar4 != DAT_1469e9970)) && (lVar4 != DAT_1469eae58)) {
    if (lVar4 == DAT_1469e9958) {
      (**(code **)(*param_1 + 0x210))(param_1,0,1,0);
      FReply::Handled(param_2);
      FKey::~FKey(param_3);
      return param_2;
    }
    FReply::Unhandled(param_2);
    FKey::~FKey(param_3);
    return param_2;
  }
  FUN_141985010(param_1[0x76],&local_28);
  if (0 < local_20) {
    local_18 = *local_28;
    local_10 = local_28[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_141959b70(param_1[0x76],&local_18,3);
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
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  plVar5 = (longlong *)param_3[2];
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
  return param_2;
}



// FUNCTION 141993570 FUN_141993570 body=149 status=ok
// SIG undefined FUN_141993570(void)

undefined1 * FUN_141993570(longlong *param_1,undefined1 *param_2)

{
  (**(code **)(*param_1 + 0x230))();
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



// FUNCTION 141993610 FUN_141993610 body=88 status=ok
// SIG undefined FUN_141993610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141993610(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x4f8) != 0) && (*(longlong **)(param_1 + 0x4f0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4f8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141993650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014199365e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 141993670 FUN_141993670 body=413 status=ok
// SIG undefined FUN_141993670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141993670(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xb0))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141993785;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141993785:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141993810 FUN_141993810 body=1367 status=ok
// SIG undefined FUN_141993810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_141993810(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  int local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [16];
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar3 = *(longlong **)(param_4 + 0x28);
  lVar4 = *(longlong *)(param_4 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*param_1 + 400))();
  if (cVar7 == '\0') goto LAB_1419938d8;
  if ((char)param_1[0x7e] == '\0') {
    if (((lVar4 == DAT_1469e9a00) || (lVar4 == DAT_1469ea5b8)) || (lVar4 == DAT_1469ea618)) {
      plVar5 = (longlong *)param_1[0x75];
      lVar4 = param_1[0x74];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)param_1[0x7f];
      for (plVar11 = plVar6; plVar11 != plVar6 + (longlong)(int)((longlong *)param_1[0x7f])[1] * 2;
          plVar11 = plVar11 + 2) {
        if (*plVar11 == lVar4) {
          iVar10 = (int)((longlong)plVar11 - (longlong)plVar6 >> 4);
          goto LAB_141993c25;
        }
      }
      iVar10 = -1;
LAB_141993c25:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (0 < iVar10) {
        local_128 = *(undefined8 *)(*(longlong *)param_1[0x7f] + -0x10 + (longlong)iVar10 * 0x10);
        local_120 = *(longlong *)(*(longlong *)param_1[0x7f] + -8 + (longlong)iVar10 * 0x10);
        if (local_120 != 0) {
          LOCK();
          *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
          UNLOCK();
        }
        FUN_1419a3c30(param_1,&local_128);
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
    }
    else if (((lVar4 == DAT_1469e9a30) || (lVar4 == DAT_1469ea5d0)) || (lVar4 == DAT_1469ea630)) {
      plVar5 = (longlong *)param_1[0x75];
      lVar4 = param_1[0x74];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)param_1[0x7f];
      for (plVar11 = plVar6; plVar11 != plVar6 + (longlong)(int)((longlong *)param_1[0x7f])[1] * 2;
          plVar11 = plVar11 + 2) {
        if (*plVar11 == lVar4) {
          iVar10 = (int)((longlong)plVar11 - (longlong)plVar6 >> 4);
          goto LAB_141993b3c;
        }
      }
      iVar10 = -1;
LAB_141993b3c:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (iVar10 < (int)((longlong *)param_1[0x7f])[1] + -1) {
        puVar9 = (undefined8 *)(((longlong)iVar10 + 1) * 0x10 + *(longlong *)param_1[0x7f]);
        local_138 = *puVar9;
        local_130 = puVar9[1];
        if (local_130 != 0) {
          LOCK();
          *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
          UNLOCK();
        }
        FUN_1419a3c30(param_1,&local_138);
      }
      FReply::Handled(param_2);
    }
    else {
      FUN_141949570(param_1,param_2,param_3,param_4);
    }
  }
  else {
    if (((lVar4 != DAT_1469e9910) && (lVar4 != DAT_1469e9970)) && (lVar4 != DAT_1469eae58)) {
      if (((lVar4 == DAT_1469e9958) || (lVar4 == DAT_1469eae70)) || (lVar4 == DAT_1469e98e0)) {
        FUN_141994290(param_1,0);
      }
      else if (*(char *)((longlong)param_1 + 0x3f1) != '\0') {
        FReply::Handled(param_2);
        goto joined_r0x000141993adc;
      }
LAB_1419938d8:
      FUN_1417c9760(param_1,param_2,param_3,param_4);
      if (plVar3 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar5 = plVar3 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 != 1) {
        return param_2;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return param_2;
    }
    if (*(char *)((longlong)param_1 + 0x3f1) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x3f1) = 1;
      FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x6b,0);
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x7a);
      FUN_141946eb0(param_1,param_2);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x3f1) = 0;
      FUN_141985010(param_1[0x76],&local_158);
      if (0 < local_150) {
        local_148 = *local_158;
        local_140 = local_158[1];
        if (local_140 != 0) {
          LOCK();
          *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
          UNLOCK();
        }
        FUN_14199c920(param_1,&local_148,3);
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
      uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_118);
      FUN_14185b9a0(local_108,uVar8,2,0);
      FReply::FReply(param_2,local_108);
      FUN_140438c20(local_108);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_158);
    }
  }
joined_r0x000141993adc:
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
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141993d70 FUN_141993d70 body=413 status=ok
// SIG undefined FUN_141993d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141993d70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x98))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141993e85;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141993e85:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141993f10 FUN_141993f10 body=413 status=ok
// SIG undefined FUN_141993f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141993f10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xa0))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141994025;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141994025:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 1419940b0 FUN_1419940b0 body=477 status=ok
// SIG undefined FUN_1419940b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1419940b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint uStack_64;
  undefined8 local_60;
  longlong *local_58;
  char local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar9 = (longlong *)0x0;
  local_68 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,local_48,param_3);
      bVar5 = true;
      bVar4 = true;
      bVar10 = false;
      goto LAB_141994169;
    }
  }
  plVar8 = (longlong *)((ulonglong)uStack_64 << 0x20);
  puVar7 = &local_60;
  local_50 = '\0';
  bVar5 = false;
  bVar4 = false;
  bVar10 = true;
LAB_141994169:
  plVar9 = local_58;
  *(undefined1 *)(param_2 + 2) = 0;
  if (*(char *)(puVar7 + 2) != '\0') {
    *param_2 = *puVar7;
    lVar3 = puVar7[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  if (((bVar10) && (local_50 != '\0')) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_58 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (((bVar4) && (local_38 != '\0')) && (local_38 = '\0', local_40 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if ((bVar5) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  return param_2;
}



// FUNCTION 141994290 FUN_141994290 body=206 status=ok
// SIG undefined FUN_141994290(void)

void FUN_141994290(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong local_res18 [2];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined1 *local_28;
  longlong *plStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  longlong *plStack_10;
  
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x3a0);
    *(undefined1 *)(param_1 + 0x3f1) = 0;
    if (lVar1 != 0) {
      local_40 = *(longlong *)(param_1 + 0x3a8);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_48 = lVar1;
      FUN_141959b70(*(undefined8 *)(param_1 + 0x3b0),&local_48,1);
      local_38 = *(undefined8 *)(param_1 + 0x3a0);
      local_30 = *(longlong *)(param_1 + 0x3a8);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_1406a2070(*(undefined8 *)(param_1 + 0x3b0),&local_38,0);
    }
    plStack_20 = local_res18;
    local_28 = &LAB_14196e240;
    local_18 = 0x4196e240;
    uStack_14 = 1;
    local_res18[0] = param_1;
    plStack_10 = plStack_20;
    FUN_14189a880(DAT_1469f4590,&local_18,0);
  }
  return;
}



// FUNCTION 141994360 FUN_141994360 body=413 status=ok
// SIG undefined FUN_141994360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141994360(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xe0))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141994475;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141994475:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141994500 FUN_141994500 body=478 status=ok
// SIG undefined FUN_141994500(void)

undefined1 *
FUN_141994500(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  float local_res8 [2];
  undefined8 local_38;
  longlong local_30 [3];
  
  if (((*(int *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x250) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))(), cVar2 != '\0')) {
    plVar3 = (longlong *)0x0;
    if (*(int *)(param_1 + 600) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x250);
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,local_res8,*(undefined4 *)(param_1 + 0x230));
    if ((local_res8[0] != 0.0) || (local_res8[1] != 0.0)) {
      FUN_14196bba0(param_1,local_30,param_3);
      lVar5 = (longlong)*(int *)(param_1 + 0x230);
      fVar1 = *(float *)(local_30[0] + lVar5 * 0x14);
      uVar4 = (ulonglong)(-(uint)(*(int *)(param_1 + 0x238) != 0) & 4);
      local_38 = CONCAT44(fVar1 * *(float *)(local_30[0] + 0x10 + lVar5 * 0x14),
                          fVar1 * *(float *)(local_30[0] + 0xc + lVar5 * 0x14));
      FUN_141989f90(param_1,*(int *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x264),
                    *(undefined4 *)(param_1 + 0x23c),*(int *)(param_1 + 0x230),
                    *(float *)((longlong)local_res8 + uVar4) -
                    *(float *)((longlong)local_30 + (uVar4 - 8)),param_1 + 0x208,local_30);
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
      if (local_30[0] == 0) {
        return param_2;
      }
      FMemory::Free(local_30[0]);
      return param_2;
    }
  }
  FUN_1417ca1a0(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1419946e0 FUN_1419946e0 body=413 status=ok
// SIG undefined FUN_1419946e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1419946e0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x90))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_1419947f5;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_1419947f5:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141994880 FUN_141994880 body=287 status=ok
// SIG undefined FUN_141994880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_141994880(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x268) + 0x498) + 0x68))();
    if (((iVar2 != 2) && (*(int *)(param_1 + 0x280) != 0)) &&
       (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x280) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x278) + 0x38))();
          FReply::Handled(param_2);
          return param_2;
        }
        (**(code **)(_DAT_00000000 + 0x38))();
        FReply::Handled(param_2);
        return param_2;
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



// FUNCTION 1419949a0 FUN_1419949a0 body=507 status=ok
// SIG undefined FUN_1419949a0(void)

undefined1 * FUN_1419949a0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar3 == DAT_1469e9868;
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (bVar9) {
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar7 = plVar2;
    plVar8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x388);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,param_1 + -8);
    cVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar6);
    if (cVar4 != '\0') {
      (**(code **)(*plVar8 + 0x30))(plVar8,3);
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
      if (plVar7 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_2;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 != 1) {
        return param_2;
      }
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_2;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
  }
  FUN_14069eb20(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 141994ba0 FUN_141994ba0 body=965 status=ok
// SIG undefined FUN_141994ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141994ba0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  float local_178;
  float local_174;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar5 == DAT_1469e9868;
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
  if (bVar9) {
    plVar4 = *(longlong **)(param_1 + 0x3a8);
    local_1a8 = *(undefined8 *)(param_1 + 0x3a0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_1a0 = plVar4;
    FUN_14182e310(param_1,&local_178,param_3,&local_1a8);
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
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x1a8))();
    if (cVar6 == '\0') {
      if (((*(int *)(param_1 + 0x3e0) != 0) && (*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x18))(), cVar6 != '\0')) {
        if (*(int *)(param_1 + 0x3ec) == 0) {
          local_174 = local_178;
        }
        *(undefined1 *)(param_1 + 0x3c0) = 1;
        *(float *)(param_1 + 1000) = local_174 * 0.5;
        FUN_141982250(param_1,param_3,param_4);
      }
    }
    else {
      local_14c = *(float *)(param_4 + 0x18) - local_14c;
      if (*(int *)(param_1 + 0x3ec) == 0) {
        fVar10 = 1.0 / (local_15c * local_150 - local_158 * local_154);
        fVar10 = local_150 * fVar10 * local_14c -
                 local_154 * fVar10 * (*(float *)(param_4 + 0x1c) - local_148);
      }
      else {
        fVar10 = 1.0 / (local_15c * local_150 - local_158 * local_154);
        fVar10 = (*(float *)(param_4 + 0x1c) - local_148) * local_15c * fVar10 -
                 local_14c * local_158 * fVar10;
      }
      *(float *)(param_1 + 1000) = fVar10;
      *(undefined1 *)(param_1 + 0x3c0) = 1;
    }
  }
  if (*(char *)(param_1 + 0x3c0) == '\0') {
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
    local_84 = local_84 & 0xffffff00;
    local_138[0] = 1;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_130 = 0;
    local_128 = 0;
    local_118 = 0;
    local_110 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_88 = 0x20702;
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_198);
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_188);
    uVar8 = FUN_140693ff0(local_138,uVar8);
    uVar7 = FUN_14185b9a0(uVar8,uVar7,*(undefined1 *)(param_1 + 0x3f0),0);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_138);
  }
  return param_2;
}



// FUNCTION 141994f70 FUN_141994f70 body=602 status=ok
// SIG undefined FUN_141994f70(void)

undefined1 * FUN_141994f70(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  if (*(char *)(param_1 + 800) == '\0') {
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xdb;
    plVar4 = (longlong *)(param_1 + 0x420);
    lVar7 = *plVar4;
    if (lVar7 != 0) {
      local_30 = *(longlong **)(param_1 + 0x428);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      local_38 = lVar7;
      FUN_14185f5a0(param_1,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_30)(local_30);
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
      local_40 = (longlong *)0x0;
      if (plVar4 != &local_48) {
        *plVar4 = 0;
        local_48 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x428,&local_40);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
      }
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + 0x330);
  }
  if (*(char *)(param_4 + 0x5c) == '\0') {
    plVar4 = *(longlong **)(param_4 + 0x48);
    lVar7 = *(longlong *)(param_4 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (((lVar7 != DAT_1469e9880) ||
        (pfVar5 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x308) + 0x3c8) + 0x234),
        0.9999 < *pfVar5 || *pfVar5 == 0.9999)) || ((*(byte *)(param_1 + 0x438) & 0x40) == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (!bVar8) {
      *param_2 = 0;
      goto LAB_141995137;
    }
    *(undefined4 *)(param_1 + 0x324) = 0;
    FUN_1418475e0(param_1,1);
  }
  *param_2 = 1;
LAB_141995137:
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



// FUNCTION 1419951d0 FUN_1419951d0 body=641 status=ok
// SIG undefined FUN_1419951d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419951d0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong *local_120;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar3 = *(longlong **)(param_4 + 0x48);
  lVar4 = *(longlong *)(param_4 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9868) && (*(int *)(param_1 + 0x230) != -1)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  if (bVar5) {
    *(undefined1 *)(param_1 + 0x234) = 1;
    puVar6 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_118);
    plVar3 = (longlong *)puVar6[1];
    uVar7 = *puVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_110 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    plVar8 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar8 = (int)*plVar8 + 1;
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
    local_128 = uVar7;
    local_120 = plVar3;
    uVar7 = FUN_140693ff0(local_108,&local_128);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_108);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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



// FUNCTION 141995460 FUN_141995460 body=410 status=ok
// SIG undefined FUN_141995460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141995460(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x60))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141995572;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141995572:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141995600 FUN_141995600 body=458 status=ok
// SIG undefined FUN_141995600(void)

undefined1 * FUN_141995600(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
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
  
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar7 = lVar5 == DAT_1469e9868;
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
  if (bVar7) {
    local_14 = local_14 & 0xffffff00;
    *(undefined1 *)(param_1 + 0x3c0) = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 0;
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
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_c8[0] = 1;
    local_18 = 0x20702;
    uVar6 = FUN_1406a1ac0(local_c8);
    FUN_140438260(param_2,uVar6);
    FUN_140438c20(local_c8);
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



// FUNCTION 1419957d0 FUN_1419957d0 body=826 status=ok
// SIG undefined FUN_1419957d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419957d0(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_218 [32];
  int local_1f8;
  int local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined8 local_1d4;
  float local_1cc;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar5 == DAT_1469e9880) && ((*(byte *)(param_1 + 0x438) & 0x40) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
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
  if (bVar6) {
    if (((*(byte *)(param_1 + 0x438) & 0x20) == 0) &&
       (cVar7 = FUN_14198bf60(param_1), cVar7 != '\0')) {
      FGeometry::operator=(param_1 + 0x394,param_3);
      FUN_14196ce50(param_1);
    }
    *(undefined4 *)(param_1 + 0x324) = 0;
    FUN_1418475e0(param_1,1);
    local_114 = local_114 & 0xffffff00;
    local_1c8[0] = 1;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_148 = 0;
    local_140 = 0;
    local_118 = 0x20702;
    uVar8 = FUN_1406a1ac0(local_1c8);
    FUN_140438260(local_108,uVar8);
    FUN_140438c20(local_1c8);
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xfe;
    cVar7 = FUN_141846080(param_1);
    if (cVar7 != '\0') {
      local_1e0 = param_3[3];
      local_1dc = param_3[4];
      local_1cc = param_3[2] * param_3[1];
      local_1d4 = 0;
      local_1d8 = param_3[2] * *param_3;
      FSlateRotatedRect::ToBoundingRect(&local_1e0,&local_1f0);
      fVar9 = *(float *)(param_1 + 0x360) * param_3[8] + *(float *)(param_1 + 0x364) * param_3[10] +
              param_3[0xc];
      if ((local_1ec <= fVar9) && (local_1ec = fVar9, local_1e4 <= fVar9)) {
        local_1ec = local_1e4;
      }
      fVar9 = param_3[0xb] +
              *(float *)(param_1 + 0x364) * param_3[9] + *(float *)(param_1 + 0x360) * param_3[7];
      local_1f4 = (int)ROUND(local_1ec + local_1ec + 0.5) >> 1;
      if ((local_1f0 <= fVar9) && (local_1f0 = fVar9, local_1e8 <= fVar9)) {
        local_1f0 = local_1e8;
      }
      local_1f8 = (int)ROUND(local_1f0 + local_1f0 + 0.5) >> 1;
      FReply::SetMousePos(local_108,&local_1f8);
    }
    FReply::FReply(param_2,local_108);
    FUN_140438c20(local_108);
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



// FUNCTION 141995b10 FUN_141995b10 body=527 status=ok
// SIG undefined FUN_141995b10(void)

undefined1 * FUN_141995b10(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
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
  
  plVar8 = *(longlong **)(param_4 + 0x48);
  lVar4 = *(longlong *)(param_4 + 0x38);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9868) && (*(char *)(param_1 + 0x234) == '\x01')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar5) {
    plVar8 = (longlong *)0x0;
    if (((*(int *)(param_1 + 0x248) != 0) && (*(longlong **)(param_1 + 0x240) != (longlong *)0x0))
       && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x18))(), cVar6 != '\0')) {
      if (*(int *)(param_1 + 0x248) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x240);
      }
      (**(code **)(*plVar8 + 0x40))();
    }
    local_14 = local_14 & 0xffffff00;
    *(undefined1 *)(param_1 + 0x234) = 0;
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
    local_c8[0] = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_48 = 0;
    local_40 = 0;
    local_18 = 0x20702;
    uVar7 = FUN_1406a1ac0(local_c8);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_c8);
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



// FUNCTION 141995d20 FUN_141995d20 body=410 status=ok
// SIG undefined FUN_141995d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141995d20(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x68))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141995e32;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141995e32:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141995ec0 FUN_141995ec0 body=41 status=ok
// SIG undefined FUN_141995ec0(void)

void FUN_141995ec0(longlong param_1)

{
  undefined8 uVar1;
  
  SWidget::OnMouseEnter();
  uVar1 = (**(code **)(*DAT_1469f4590 + 0x40))();
  *(undefined8 *)(param_1 + 0x3f8) = uVar1;
  return;
}



// FUNCTION 141995ef0 OnMouseEnter body=163 status=ok
// SIG undefined OnMouseEnter(void)

void SScrollBox::OnMouseEnter(longlong param_1,float *param_2,longlong param_3)

{
  char cVar1;
  undefined4 local_res18 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(char *)(param_3 + 0x5c) != '\0') && (*(char *)(param_1 + 800) == '\0')) {
    local_20 = *param_2 * param_2[7];
    local_18 = param_2[1] * param_2[9];
    local_14 = param_2[1] * param_2[10];
    local_1c = *param_2 * param_2[8];
    local_28 = param_2[0xb];
    local_24 = param_2[0xc];
    cVar1 = FSlateRotatedRect::IsUnderLocation(&local_28,param_3 + 0x20);
    if (cVar1 != '\0') {
      if (local_res18 != (undefined4 *)(param_1 + 0x31c)) {
        *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_3 + 0x50);
        *(undefined1 *)(param_1 + 800) = 1;
      }
    }
  }
  return;
}



// FUNCTION 141995fa0 FUN_141995fa0 body=236 status=ok
// SIG undefined FUN_141995fa0(void)

void FUN_141995fa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  SWidget::OnMouseEnter();
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x2f0);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar6 + 0x70))(plVar6,param_2,param_3);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
    }
  }
  return;
}



// FUNCTION 141996090 FUN_141996090 body=41 status=ok
// SIG undefined FUN_141996090(void)

void FUN_141996090(longlong param_1)

{
  undefined8 uVar1;
  
  SWidget::OnMouseLeave();
  uVar1 = (**(code **)(*DAT_1469f4590 + 0x40))();
  *(undefined8 *)(param_1 + 0x3f8) = uVar1;
  return;
}



// FUNCTION 1419960c0 OnMouseLeave body=90 status=ok
// SIG undefined OnMouseLeave(void)

void SScrollBox::OnMouseLeave(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_141846080();
  if (cVar1 == '\0') {
    if (*(float *)(param_1 + 0x324) != 0.0) {
      *(undefined4 *)(param_1 + 0x324) = 0;
      FUN_1418475e0(param_1,1);
    }
    if ((*(char *)(param_2 + 0x5c) != '\0') && (*(char *)(param_1 + 800) != '\0')) {
      *(undefined1 *)(param_1 + 800) = 0;
    }
  }
  return;
}



// FUNCTION 141996140 FUN_141996140 body=213 status=ok
// SIG undefined FUN_141996140(void)

void FUN_141996140(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  SWidget::OnMouseLeave();
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x2f0);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar6 + 0x78))(plVar6,param_2);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
    }
  }
  return;
}



// FUNCTION 141996220 FUN_141996220 body=260 status=ok
// SIG undefined FUN_141996220(void)

undefined1 * FUN_141996220(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  cVar1 = FUN_141846080();
  if (cVar1 != '\0') {
    if ((*(float *)(param_4 + 0x28) != 0.0) || (*(float *)(param_4 + 0x2c) != 0.0)) {
      if ((*(int *)(param_1 + 0x3e0) != 0) && (*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0))
      {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x18))();
        if (cVar1 != '\0') {
          FUN_141982250(param_1,param_3,param_4);
        }
      }
      *param_2 = 1;
      goto LAB_141996295;
    }
  }
  *param_2 = 0;
LAB_141996295:
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



// FUNCTION 141996330 FUN_141996330 body=1926 status=ok
// SIG undefined FUN_141996330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141996330(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_4f8 [32];
  undefined1 local_4d8;
  undefined4 local_4c8;
  undefined1 local_4c4;
  LARGE_INTEGER local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  undefined1 local_498 [8];
  undefined8 local_490;
  undefined8 local_488;
  undefined1 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  uint local_3e4;
  undefined1 local_3d8 [8];
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8;
  undefined8 local_3b0;
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
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  uint local_324;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [8];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  uint local_234;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  uint local_174;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  uint local_b4;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  fVar15 = *(float *)(param_4 + 0x2c);
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar15 = *(float *)(param_4 + 0x28);
  }
  fVar16 = fVar15 / *(float *)(param_3 + 8);
  if (*(char *)(param_4 + 0x5c) == '\0') {
    local_4b8 = DAT_1469e9880;
    local_4b0 = DAT_1469e9888;
    local_4a8 = DAT_1469e9890;
    if (DAT_1469e9890 != 0) {
      LOCK();
      *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
      UNLOCK();
    }
    cVar9 = FUN_140472340(param_4,&local_4b8);
    if ((cVar9 != '\0') && ((*(byte *)(param_1 + 0x438) & 0x40) != 0)) {
      *(float *)(param_1 + 0x324) = ABS(fVar15) + *(float *)(param_1 + 0x324);
      cVar9 = FUN_14198bf60(param_1);
      if (cVar9 != '\0') {
        QueryPerformanceCounter(&local_4c0);
        FInertialScrollManager::AddScrollSample
                  (param_1 + 0x330,-fVar15,(double)local_4c0.QuadPart * DAT_1468b02f8 + 16777216.0);
        local_4d8 = 0;
        cVar9 = FUN_14199f960(param_1,param_3,CONCAT44(0x80000000,-fVar16),
                              *(undefined1 *)(param_1 + 0x354));
        local_174 = local_174 & 0xffffff00;
        local_228[0] = 1;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_220 = 0;
        local_218 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_178 = 0x20702;
        cVar10 = FUN_141846080(param_1);
        if (cVar10 == '\0') {
          uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_308);
          uVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_2f8);
          uVar12 = FUN_140693ff0(local_228,uVar12);
          FUN_14048f0a0(uVar12,uVar11);
          fVar15 = *(float *)(param_3 + 0x1c);
          fVar16 = *(float *)(param_4 + 0x18);
          fVar1 = *(float *)(param_4 + 0x1c);
          fVar2 = *(float *)(param_3 + 0x2c);
          fVar3 = *(float *)(param_3 + 0x2c);
          fVar17 = 1.0 / (fVar15 * *(float *)(param_3 + 0x28) -
                         *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
          fVar4 = *(float *)(param_3 + 0x28);
          fVar5 = *(float *)(param_3 + 0x24);
          fVar6 = *(float *)(param_3 + 0x30);
          fVar7 = *(float *)(param_3 + 0x30);
          fVar8 = *(float *)(param_3 + 0x20);
          *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) | 1;
          *(float *)(param_1 + 0x360) =
               fVar17 * fVar4 * (fVar16 - fVar2) - fVar17 * fVar5 * (fVar1 - fVar6);
          *(float *)(param_1 + 0x364) =
               fVar17 * fVar15 * (fVar1 - fVar7) - fVar17 * fVar8 * (fVar16 - fVar3);
        }
        if (cVar9 != '\0') {
          bVar14 = *(int *)(param_1 + 0x378) != 1;
          fVar15 = *(float *)(param_1 + 0x364);
          if (bVar14) {
            fVar15 = *(float *)(param_1 + 0x360);
          }
          fVar16 = *(float *)(param_4 + 0x2c);
          if (bVar14) {
            fVar16 = *(float *)(param_4 + 0x28);
          }
          if (bVar14) {
            *(float *)(param_1 + 0x360) = fVar15 + fVar16;
          }
          else {
            *(float *)(param_1 + 0x364) = fVar15 + fVar16;
          }
        }
        FReply::FReply(param_2,local_228);
        FUN_140438c20(local_228);
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
  local_234 = local_234 & 0xffffff00;
  local_2e8[0] = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0x20702;
  if (*(char *)(param_1 + 800) != '\0') {
    if (*(char *)(param_1 + 0x438) < '\0') {
      local_4c8 = *(undefined4 *)(param_4 + 0x50);
      local_4c4 = 1;
      cVar9 = FUN_141846180(0,*(undefined4 *)(param_4 + 0xc),&local_4c8);
      if (cVar9 == '\0') goto LAB_1419966c4;
      uVar11 = (**(code **)(*DAT_1469f4590 + 0x40))();
      *(undefined8 *)(param_1 + 0x430) = uVar11;
      uVar11 = (**(code **)(*DAT_1469f4590 + 0x40))();
      FInertialScrollManager::AddScrollSample(param_1 + 0x330,-fVar15,uVar11);
      local_4d8 = 0;
      FUN_14199f960(param_1,param_3,CONCAT44(0x80000000,-fVar16),0);
      local_324 = local_324 & 0xffffff00;
      local_3d8[0] = 1;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_3d0 = 0;
      local_3c8 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_358 = 0;
      local_350 = 0;
      local_328 = 0x20702;
      FUN_140439160(local_2e8,local_3d8);
      puVar13 = local_3d8;
    }
    else {
      cVar9 = FUN_141846080();
      if (cVar9 != '\0') goto LAB_1419966c4;
      fVar15 = fVar15 + *(float *)(param_1 + 0x328);
      *(float *)(param_1 + 0x328) = fVar15;
      fVar16 = (float)FUN_14189c9c0(DAT_1469f4590);
      if (ABS(fVar15) <= fVar16) {
        local_3e4 = local_3e4 & 0xffffff00;
        local_498[0] = 1;
        local_468 = 0;
        uStack_460 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        uStack_430 = 0;
        local_428 = 0;
        uStack_420 = 0;
        local_408 = 0;
        uStack_400 = 0;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_490 = 0;
        local_488 = 0;
        local_478 = 0;
        local_470 = 0;
        local_418 = 0;
        local_410 = 0;
        local_3e8 = 0x20702;
        FUN_140439160(local_2e8,local_498);
        puVar13 = local_498;
      }
      else {
        *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) | 0x80;
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x210))();
        local_b4 = local_b4 & 0xffffff00;
        local_168[0] = 1;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_160 = 0;
        local_158 = 0;
        local_148 = 0;
        local_140 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_b8 = 0x20702;
        uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_318);
        uVar11 = FUN_140693ff0(local_168,uVar11);
        FUN_140459130(local_2e8,uVar11);
        puVar13 = local_168;
      }
    }
    FUN_140438c20(puVar13);
  }
LAB_1419966c4:
  FReply::FReply(param_2,local_2e8);
  FUN_140438c20(local_2e8);
  return param_2;
}



// FUNCTION 141996ac0 FUN_141996ac0 body=865 status=ok
// SIG undefined FUN_141996ac0(void)

undefined1 * FUN_141996ac0(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float local_res8 [2];
  longlong local_78 [12];
  
  fVar5 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
  fVar4 = (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
          *(float *)(param_3 + 0x24) * fVar5;
  local_res8[0] =
       (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
       *(float *)(param_3 + 0x28) * fVar5 - fVar4;
  local_res8[1] =
       (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
       *(float *)(param_3 + 0x1c) * fVar5 -
       (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
       *(float *)(param_3 + 0x20) * fVar5;
  FUN_14196bba0(fVar4,local_78);
  if (*(char *)(param_1 + 0x234) != '\0') {
    if ((*(float *)(param_4 + 0x28) != 0.0) || (*(float *)(param_4 + 0x2c) != 0.0)) {
      uVar3 = (ulonglong)(*(int *)(param_1 + 0x238) != 0);
      FUN_141989f90(param_1,*(int *)(param_1 + 0x238),uVar3,*(undefined4 *)(param_1 + 0x23c),
                    *(int *)(param_1 + 0x230),
                    local_res8[uVar3] -
                    (*(float *)(local_78[0] + 0x18 +
                               (uVar3 + (longlong)*(int *)(param_1 + 0x230) * 5) * 4) -
                    *(float *)(param_1 + 0x264) * 0.5),param_1 + 0x208,local_78);
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
    if (local_78[0] != 0) {
      FMemory::Free(local_78[0]);
    }
    return param_2;
  }
  if (*(int *)(param_1 + 0x238) == 0) {
    iVar1 = SSplitter::GetHandleBeingResizedFromMousePosition<0>();
  }
  else {
    iVar1 = SSplitter::GetHandleBeingResizedFromMousePosition<1>
                      (*(undefined4 *)(param_1 + 0x264),*(undefined4 *)(param_1 + 0x268),
                       CONCAT44(local_res8[1],local_res8[0]),local_78);
  }
  *(int *)(param_1 + 0x230) = iVar1;
  if (iVar1 != -1) {
    iVar1 = SSplitter::FindResizeableSlotBeforeHandle(iVar1,param_1 + 0x208);
    if (-1 < iVar1) {
      iVar1 = SSplitter::FindResizeableSlotAfterHandle
                        (*(undefined4 *)(param_1 + 0x230),param_1 + 0x208);
      iVar2 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
      if (iVar1 < iVar2) goto LAB_141996d8a;
    }
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  }
LAB_141996d8a:
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
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141996e30 FUN_141996e30 body=413 status=ok
// SIG undefined FUN_141996e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141996e30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x80))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141996f45;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141996f45:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141996fd0 FUN_141996fd0 body=614 status=ok
// SIG undefined FUN_141996fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141996fd0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 *puVar6;
  float fVar7;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x308) + 0x3c8) + 0x234);
  if ((0.9999 < *pfVar1 || *pfVar1 == 0.9999) || (*(char *)(param_1 + 0x390) == '\x02')) {
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
    FInertialScrollManager::ClearScrollVelocity(param_1 + 0x330);
    fVar2 = *(float *)(param_4 + 100);
    fVar7 = (float)FUN_141984530();
    local_1d8 = 0;
    cVar5 = FUN_14199f960(param_1,param_3,-(fVar7 * fVar2),1);
    if (cVar5 == '\0') {
      local_1c8[0] = 0;
      local_114 = local_114 & 0xffffff00;
      puVar6 = local_1c8;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1a8 = 0;
      bVar4 = false;
      local_1a0 = 0;
      local_148 = 0;
      local_140 = 0;
      bVar3 = true;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0x20702;
    }
    else {
      if ((*(byte *)(param_1 + 0x438) & 0x20) == 0) {
        FGeometry::operator=(param_1 + 0x394,param_3);
        FUN_14196ce50(param_1);
      }
      local_108[0] = 1;
      local_54 = local_54 & 0xffffff00;
      puVar6 = local_108;
      local_100 = 0;
      local_f8 = 0;
      bVar3 = false;
      bVar4 = true;
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
    }
    FReply::FReply(param_2,puVar6);
    if (bVar3) {
      FUN_140438c20(local_1c8);
    }
    if (bVar4) {
      FUN_140438c20(local_108);
    }
  }
  return param_2;
}



// FUNCTION 141997240 FUN_141997240 body=413 status=ok
// SIG undefined FUN_141997240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141997240(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x88))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_141997355;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_141997355:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 1419973e0 FUN_1419973e0 body=1033 status=ok
// SIG undefined FUN_1419973e0(void)

undefined8 FUN_1419973e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 local_a8 [2];
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  
  local_a8[0] = 0;
  lVar4 = *(longlong *)(param_1 + 0x2f8);
  iVar13 = 0;
  puVar14 = (undefined8 *)(lVar4 + 0x210);
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  iVar8 = (**(code **)*puVar14)(puVar14);
  iVar12 = -1;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      lVar9 = FUN_1418462c0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar4 + 0x220) + lVar11) + 0x10),local_a8,
                            *(undefined4 *)(param_4 + 0xc));
      if (*(char *)(lVar9 + 1) == '\0') {
        cVar7 = FUN_1418463e0(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar4 + 0x220) + lVar11) + 0x10),
                              *(undefined4 *)(param_4 + 0xc));
        bVar6 = false;
        if (cVar7 != '\0') goto LAB_14199748b;
      }
      else {
LAB_14199748b:
        bVar6 = true;
      }
      local_a8[0]._0_2_ = (ushort)(byte)local_a8[0];
      if (bVar6) {
        lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x220) + (longlong)iVar13 * 8);
        local_70 = *(longlong **)(lVar11 + 0x18);
        local_98 = *(longlong *)(lVar11 + 0x10);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_78 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_70);
        plVar5 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
        if (local_98 == 0) break;
        uVar10 = (uint)*(byte *)(param_4 + 0x18);
        if (*(int *)(param_1 + 0x378) == 1) {
          uVar10 = *(byte *)(param_4 + 0x18) - 2;
        }
        if (uVar10 != 0) {
          if (uVar10 != 1) break;
          iVar12 = 1;
        }
        iVar13 = iVar13 + iVar12;
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        lVar11 = (longlong)iVar13;
        if (-1 < iVar13) goto LAB_141997580;
        break;
      }
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + 8;
      iVar8 = (**(code **)*puVar14)(puVar14);
    } while (iVar13 < iVar8);
  }
LAB_141997788:
  FUN_1417ca320(param_1,param_2,param_3,param_4);
LAB_14199779b:
  plVar5 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return param_2;
LAB_141997580:
  iVar8 = (**(code **)*puVar14)(puVar14);
  if (iVar8 <= iVar13) goto LAB_141997788;
  lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x220) + lVar11 * 8);
  plVar5 = *(longlong **)(lVar9 + 0x18);
  local_a0 = *(longlong **)(lVar9 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*local_a0 + 0x178))(local_a0);
  if (cVar7 != '\0') {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_88 = local_a0;
    local_68 = 0;
    local_60 = plVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_80,&local_60);
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = plStack_80;
    if (local_88 != (longlong *)0x0) {
      FUN_14198b320(param_1,param_3,&local_88,0,*(undefined1 *)(param_1 + 0x35c),
                    *(undefined4 *)(param_1 + 0x358));
      plVar5 = plStack_80;
      local_58 = local_88;
      plStack_50 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      FUN_1418f84e0(param_2,&local_58);
      plVar1 = plStack_80;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar5 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      goto LAB_14199779b;
    }
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    goto LAB_141997788;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  iVar13 = iVar13 + iVar12;
  lVar11 = lVar11 + iVar12;
  if (lVar11 < 0) goto LAB_141997788;
  goto LAB_141997580;
}



// FUNCTION 1419977f0 FUN_1419977f0 body=593 status=ok
// SIG undefined FUN_1419977f0(void)

undefined8 FUN_1419977f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_38;
  undefined1 local_30 [24];
  
  plVar9 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x100))(plVar9,local_50);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_1419978c0;
    }
  }
  plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  puVar7 = &local_88;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_58 = 3;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
LAB_1419978c0:
  FUN_141960160(param_2,puVar7);
  if (bVar10) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    plVar9 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    plVar9 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_80 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  if (bVar3) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_30);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_38 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_48 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 141997a50 FUN_141997a50 body=476 status=ok
// SIG undefined FUN_141997a50(void)

void FUN_141997a50(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  
  *(undefined8 *)(param_1 + 0x75c) = *param_3;
  cVar9 = FTextLayout::IsEmpty(*(undefined8 *)(param_1 + 0x48));
  if ((cVar9 != '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    puVar10 = (undefined4 *)(param_1 + 0xb8);
    cVar9 = *(char *)(param_1 + 200);
    if (cVar9 != '\0') {
      if (cVar9 == '\x01') {
        puVar10 = *(undefined4 **)(param_1 + 0xd0);
      }
      else if (cVar9 == '\x03') {
        puVar10 = (undefined4 *)(param_7 + 0x20);
      }
      else {
        puVar10 = (undefined4 *)(param_7 + 0x10);
      }
    }
    uVar4 = *puVar10;
    uVar5 = puVar10[1];
    uVar6 = puVar10[2];
    FTextBlockStyle::operator=(param_1 + 0x240,param_1 + 0x60);
    local_5c = 0x3eb33333;
    local_58 = 0;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_68 = uVar4;
    local_64 = uVar5;
    local_60 = uVar6;
    FUN_140692440(param_1 + 0x298,&local_68);
    plVar8 = plStack_48;
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_48)(plStack_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_48 + 8))(plStack_48,1);
        }
      }
    }
    FSlateTextBlockLayout::OverrideTextStyle(*(undefined8 *)(param_1 + 0x58),param_1 + 0x240);
    FUN_1419b6e50(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4,param_5,param_6,param_7,
                  param_8);
  }
                    /* WARNING: Could not recover jumptable at 0x000141997c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))
            (*(longlong **)(param_1 + 0x48),param_2,param_3,param_4);
  return;
}



// FUNCTION 141997c30 FUN_141997c30 body=1250 status=ok
// SIG undefined FUN_141997c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141997c30(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,float *param_7,undefined1 param_8)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 uVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  float *local_130;
  float *local_128;
  undefined1 local_120;
  int local_118;
  int local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  float local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  byte local_b4;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  byte local_74;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_f8 = param_4;
  local_f0 = param_2;
  if (((DAT_1464bfebc != 0) && ((float)DAT_1468b5d88 < *param_3)) &&
     (DAT_1468b5d88._4_4_ < param_3[1])) {
    if (DAT_1469f4ad0 == 0) {
      fVar12 = 1.0;
      if (*(char *)(param_1 + 0x2f0) != '\0') {
        fVar12 = param_7[3];
      }
      pfVar5 = (float *)TAttribute<float>::Get(param_1 + 0x2f8);
      fVar12 = fVar12 * *pfVar5;
      if (fVar12 <= 0.0) goto LAB_1419980bd;
      local_e8 = param_3[0xb];
      local_e0 = *param_3 * param_3[7];
      local_d4 = param_3[1] * param_3[10];
      local_e4 = param_3[0xc];
      local_dc = CONCAT44(param_3[1] * param_3[9],*param_3 * param_3[8]);
      FSlateRotatedRect::ToBoundingRect(&local_e8,&local_110);
      pfVar5 = (float *)(param_1 + 0x310);
      plVar9 = (longlong *)0x0;
      local_9c = local_108 - local_110;
      local_a8 = local_110;
      local_98 = local_104 - local_10c;
      local_84 = 0x3f80000000000000;
      uStack_7c = 0;
      local_74 = local_74 & 0xfd | 1;
      local_a0 = 0x3f800000;
      local_a4 = local_10c;
      local_94 = 0;
      uStack_8c = 0x3f800000;
      local_118 = (int)ROUND(local_9c + local_9c + 0.5) >> 1;
      local_100[0] = (float)((int)ROUND(fVar12 * 3.0 + fVar12 * 3.0 + 0.5) >> 1);
      local_114 = (int)ROUND(local_98 + local_98 + 0.5) >> 1;
      iVar10 = 0;
      if (((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0))
         && (cVar2 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))(), cVar2 != '\0')) {
        if (*(int *)(param_1 + 0x328) != 0) {
          plVar9 = *(longlong **)(param_1 + 800);
        }
        (**(code **)(*plVar9 + 0x38))(plVar9,&local_e8);
        if (&local_e8 != pfVar5) {
          if (*(char *)(param_1 + 0x314) != '\0') {
            *(undefined1 *)(param_1 + 0x314) = 0;
          }
          if (local_e4._0_1_ != '\0') {
            *pfVar5 = local_e8;
            *(undefined1 *)(param_1 + 0x314) = 1;
          }
        }
      }
      pfVar6 = local_100;
      if (*(char *)(param_1 + 0x314) != '\0') {
        pfVar6 = pfVar5;
      }
      fVar4 = *pfVar6;
      if ((DAT_1464bfec4 != 0) && (9 < (int)fVar4)) {
        iVar10 = 2;
        if (0x3f < (int)fVar4) {
          iVar10 = 4;
        }
        fVar4 = (float)((int)fVar4 / iVar10);
      }
      fVar8 = (float)((int)fVar4 + 1);
      if (((uint)fVar4 & 1) != 0) {
        fVar8 = fVar4;
      }
      if ((int)fVar8 < 3) {
        fVar4 = 4.2039e-45;
      }
      else {
        fVar4 = DAT_1464bfec0;
        if ((int)fVar8 < (int)DAT_1464bfec0) {
          fVar4 = fVar8;
        }
      }
      if (fVar12 <= 0.5) {
        fVar12 = 0.5;
      }
      if (iVar10 != 0) {
        local_118 = (local_118 + -1 + iVar10) / iVar10;
        local_114 = (local_114 + -1 + iVar10) / iVar10;
        fVar12 = fVar12 / (float)iVar10;
      }
      if ((0 < local_118) && (0 < local_114)) {
        uVar7 = FSlateClippingZone::FSlateClippingZone(&local_e8,param_3);
        FSlateWindowElementList::PushClip(param_5,uVar7);
        local_e8 = (float)(int)fVar4;
        local_138 = CONCAT44(local_138._4_4_,iVar10);
        local_e0 = (float)local_118;
        local_dc = CONCAT44(local_dc._4_4_,(float)local_114);
        local_e4 = fVar12;
        FSlateDrawElement::MakePostProcessPass(param_5,param_6,&local_a8,&local_e8);
        FSlateWindowElementList::PopClip(param_5);
      }
    }
    else {
      if ((*(longlong *)(param_1 + 0x330) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x330) + 0x6c) == '\0')) goto LAB_1419980bd;
      cVar3 = SWidget::ShouldBeEnabled(param_1,param_8);
      lVar1 = *(longlong *)(param_1 + 0x330);
      cVar2 = *(char *)(lVar1 + 0x30);
      pfVar5 = (float *)(lVar1 + 0x20);
      uVar11 = 0x20;
      if (cVar3 != '\0') {
        uVar11 = 0;
      }
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
      local_dc = 0;
      local_110 = *pfVar5 * *param_7;
      local_10c = pfVar5[1] * param_7[1];
      local_b4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_b4 & 0xfc;
      local_130 = &local_110;
      local_108 = pfVar5[2] * param_7[2];
      local_138 = CONCAT71(local_138._1_7_,uVar11);
      local_e4 = param_3[4];
      local_e8 = param_3[3];
      local_104 = pfVar5[3] * param_7[3];
      local_d4 = *param_3;
      local_d0 = param_3[1];
      local_cc = *(undefined8 *)(param_3 + 7);
      uStack_c4 = *(undefined8 *)(param_3 + 9);
      local_bc = *(undefined8 *)(param_3 + 0xb);
      local_e0 = param_3[2];
      FSlateDrawElement::MakeBox(param_5,param_6,&local_e8);
    }
    param_6 = param_6 + 1;
  }
LAB_1419980bd:
  local_120 = param_8;
  local_128 = param_7;
  local_130 = (float *)CONCAT44(local_130._4_4_,param_6);
  local_138 = param_5;
  FUN_14184ebd0(param_1,local_f0,param_3,local_f8);
  return;
}



// FUNCTION 141998120 FUN_141998120 body=709 status=ok
// SIG undefined FUN_141998120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141998120(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,float *param_7,char param_8)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  float *pfVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  float *local_c0;
  float *local_b8;
  char local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  byte local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar10 = (longlong *)0x0;
  local_98 = param_4;
  local_90 = param_2;
  if (((*(int *)(param_1 + 0x308) != 0) && (*(longlong **)(param_1 + 0x300) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x18))(), cVar3 != '\0')) {
    plVar8 = plVar10;
    if (*(int *)(param_1 + 0x308) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x300);
    }
    uVar5 = (**(code **)(*plVar8 + 0x38))();
    *(undefined8 *)(param_1 + 0x2f0) = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x2f0);
  if (param_8 != '\0') {
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        plVar10 = *(longlong **)(param_1 + 0xa0);
      }
      uVar4 = (**(code **)(*plVar10 + 0x38))(plVar10);
      *(undefined1 *)(param_1 + 0x98) = uVar4;
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      cVar3 = '\x01';
      goto LAB_141998203;
    }
  }
  cVar3 = '\0';
LAB_141998203:
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x6c) != '\0')) {
    pcVar6 = (char *)TAttribute<bool>::Get(param_1 + 0x370);
    if ((*pcVar6 == '\0') || (cVar3 != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x20;
    }
    pfVar7 = (float *)FUN_141831530(param_1 + 0x310);
    cVar1 = *(char *)(pfVar7 + 4);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar7 = *(float **)(pfVar7 + 6);
      }
      else if (cVar1 == '\x03') {
        pfVar7 = param_7 + 8;
      }
      else {
        pfVar7 = param_7 + 4;
      }
    }
    cVar1 = *(char *)(lVar2 + 0x30);
    pfVar9 = (float *)(lVar2 + 0x20);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar9 = *(float **)(lVar2 + 0x38);
      }
      else if (cVar1 == '\x03') {
        pfVar9 = param_7 + 8;
      }
      else {
        pfVar9 = param_7 + 4;
      }
    }
    local_54 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_54 & 0xfc;
    local_c0 = &local_a8;
    local_a0 = pfVar9[2] * param_7[2] * pfVar7[2];
    local_c8 = CONCAT71(local_c8._1_7_,uVar4);
    local_a4 = pfVar9[1] * param_7[1] * pfVar7[1];
    local_a8 = *pfVar9 * *param_7 * *pfVar7;
    local_9c = pfVar9[3] * param_7[3] * pfVar7[3];
    local_84 = param_3[4];
    local_88 = param_3[3];
    local_74 = *param_3;
    local_70 = param_3[1];
    local_6c = param_3[7];
    uStack_68 = param_3[8];
    uStack_64 = param_3[9];
    uStack_60 = param_3[10];
    local_7c = 0;
    local_80 = param_3[2];
    local_5c = *(undefined8 *)(param_3 + 0xb);
    FSlateDrawElement::MakeBox(param_5,param_6,&local_88,lVar2);
  }
  local_b8 = param_7;
  local_c0 = (float *)CONCAT44(local_c0._4_4_,param_6);
  local_c8 = param_5;
  local_b0 = cVar3;
  FUN_14184ebd0(param_1,local_90,param_3,local_98);
  return;
}



// FUNCTION 1419983f0 FUN_1419983f0 body=494 status=ok
// SIG undefined FUN_1419983f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1419983f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
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
  undefined1 local_190 [8];
  undefined1 local_188 [288];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_190[0] = DAT_1464b9ee8;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_190);
  if (0 < (int)local_60) {
    local_210 = *(undefined4 *)(param_2 + 0x28);
    local_218 = *(undefined8 *)(param_2 + 0x20);
    puVar6 = local_188;
    if (local_68 != (undefined1 *)0x0) {
      puVar6 = local_68;
    }
    FPaintArgs::FPaintArgs
              (local_1e8,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
    local_1d8 = *(undefined4 *)(param_2 + 0x10);
    local_1d4 = *(undefined1 *)(param_2 + 0x14);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x38);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
    local_1f8 = (undefined4)uVar3;
    uStack_1f4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_1f0 = (undefined4)lVar4;
    uStack_1ec = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_1a0 = local_1f8;
    uStack_19c = uStack_1f4;
    uStack_198 = uStack_1f0;
    uStack_194 = uStack_1ec;
    local_1b8 = local_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = uStack_1f0;
    uStack_1ac = uStack_1ec;
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
    local_1a8 = *(undefined8 *)(param_2 + 0x40);
    local_1bc = *(undefined1 *)(param_2 + 0x2c);
    local_1bb = *(undefined1 *)(param_2 + 0x2d);
    uVar3 = *(undefined8 *)(puVar6 + 0x38);
    local_200 = SWidget::ShouldBeEnabled(param_1,param_8);
    local_208 = param_7;
    local_210 = param_6;
    local_218 = param_5;
    param_6 = FUN_14184f6c0(uVar3,local_1e8,puVar6,param_4);
    plVar5 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
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
  }
  FUN_140456b10(local_188);
  return param_6;
}



// FUNCTION 1419985e0 FUN_1419985e0 body=930 status=ok
// SIG undefined FUN_1419985e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1419985e0(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  int local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined1 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 *local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined1 local_234;
  float local_230;
  float local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [288];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulonglong local_70;
  longlong *plVar10;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_268 = param_5;
  local_270 = param_7;
  local_1b0[0] = DAT_1464b9ee8;
  plVar10 = (longlong *)0x0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_260 = param_3;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_1b0);
  if (param_8 != '\0') {
    if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar10;
      if ((int)param_1[0x15] != 0) {
        plVar7 = (longlong *)param_1[0x14];
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined1 *)(param_1 + 0x13) = uVar5;
    }
    local_288 = 1;
    if ((char)param_1[0x13] != '\0') goto LAB_1419986d8;
  }
  local_288 = 0;
LAB_1419986d8:
  local_2a0 = *(int *)(param_2 + 0x28);
  local_2a8 = *(undefined8 *)(param_2 + 0x20);
  FPaintArgs::FPaintArgs
            (local_248,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  local_238 = *(undefined4 *)(param_2 + 0x10);
  local_234 = *(undefined1 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)CONCAT44(uStack_20c,uStack_210);
  local_280 = (undefined4)uVar2;
  uStack_27c = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_278 = (undefined4)lVar3;
  uStack_274 = (undefined4)((ulonglong)lVar3 >> 0x20);
  local_1c0 = local_280;
  uStack_1bc = uStack_27c;
  uStack_1b8 = uStack_278;
  uStack_1b4 = uStack_274;
  local_218 = local_280;
  uStack_214 = uStack_27c;
  uStack_210 = uStack_278;
  uStack_20c = uStack_274;
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
  uVar5 = local_288;
  local_208 = *(undefined8 *)(param_2 + 0x40);
  local_21c = *(undefined1 *)(param_2 + 0x2c);
  local_21b = *(undefined1 *)(param_2 + 0x2d);
  plVar7 = plVar10;
  if (0 < (int)local_80) {
    do {
      puVar8 = local_1a8;
      if (local_88 != (undefined1 *)0x0) {
        puVar8 = local_88;
      }
      puVar8 = puVar8 + (longlong)plVar7;
      cVar4 = SWidget::IsChildWidgetCulled(param_1,param_4,puVar8);
      lVar3 = *(longlong *)(puVar8 + 0x38);
      iVar6 = param_6;
      if (cVar4 == '\0') {
        local_2a0 = param_6 + 1;
        local_290 = uVar5;
        local_298 = local_270;
        local_2a8 = local_268;
        iVar6 = FUN_14184f6c0(lVar3,local_248,puVar8,param_4);
        if (iVar6 <= param_6) {
          iVar6 = param_6;
        }
      }
      else if (*(char *)(lVar3 + 0x200) != '\0') {
        uStack_254 = local_260[8];
        uStack_250 = local_260[9];
        uStack_24c = local_260[10];
        uStack_1e4 = local_260[5];
        uStack_1e0 = local_260[6];
        local_258 = local_260[7];
        local_1f8 = *local_260;
        uStack_1f4 = local_260[1];
        uStack_1f0 = local_260[2];
        local_1e8 = (float)local_260[4] + local_22c;
        uStack_1c4 = (undefined4)((ulonglong)*(undefined8 *)(local_260 + 0xc) >> 0x20);
        fStack_1c8 = local_22c + (float)*(undefined8 *)(local_260 + 0xc);
        fStack_1ec = (float)local_260[3] + local_230;
        fStack_1cc = local_230 + (float)local_260[0xb];
        uStack_1dc = local_258;
        local_1d8 = uStack_254;
        uStack_1d4 = uStack_250;
        uStack_1d0 = uStack_24c;
        SWidget::ExecuteActiveTimers(lVar3,local_228,local_220);
        (**(code **)(**(longlong **)(puVar8 + 0x38) + 8))
                  (*(longlong **)(puVar8 + 0x38),&local_1f8,(int)local_228,local_220);
      }
      param_6 = iVar6;
      uVar9 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar9;
      plVar7 = plVar7 + 9;
    } while ((int)uVar9 < (int)local_80);
  }
  plVar10 = (longlong *)CONCAT44(uStack_20c,uStack_210);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 8))(plVar10,1);
    }
  }
  FUN_140456b10(local_1a8);
  return param_6;
}



// FUNCTION 141998990 FUN_141998990 body=1014 status=ok
// SIG undefined FUN_141998990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141998990(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_268 [16];
  undefined4 local_258;
  undefined1 local_254;
  float local_250;
  float local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined1 local_218 [16];
  undefined1 *local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [288];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulonglong local_70;
  longlong *plVar9;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  plVar9 = (longlong *)0x0;
  local_290 = param_5;
  local_298 = param_7;
  local_1b0[0] = DAT_1464b9ee8;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_208 = (undefined1 *)0x0;
  local_200 = 0;
  local_2b0 = param_4;
  local_288 = param_3;
  FUN_14196c090(param_1,param_3,local_1b0,local_218);
  if (param_8 != '\0') {
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar3 != '\0')) {
      plVar10 = plVar9;
      if (*(int *)(param_1 + 0xa8) != 0) {
        plVar10 = *(longlong **)(param_1 + 0xa0);
      }
      uVar4 = (**(code **)(*plVar10 + 0x38))();
      *(undefined1 *)(param_1 + 0x98) = uVar4;
    }
    local_2b8 = 1;
    if (*(char *)(param_1 + 0x98) != '\0') goto LAB_141998a8e;
  }
  local_2b8 = 0;
LAB_141998a8e:
  local_2d0 = *(int *)(param_2 + 0x28);
  local_2d8 = *(undefined8 *)(param_2 + 0x20);
  FPaintArgs::FPaintArgs
            (local_268,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  local_258 = *(undefined4 *)(param_2 + 0x10);
  local_254 = *(undefined1 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar12 = *(longlong *)(param_2 + 0x38);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)CONCAT44(uStack_22c,uStack_230);
  local_2a8 = (undefined4)uVar2;
  uStack_2a4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_2a0 = (undefined4)lVar12;
  uStack_29c = (undefined4)((ulonglong)lVar12 >> 0x20);
  local_1c0 = local_2a8;
  uStack_1bc = uStack_2a4;
  uStack_1b8 = uStack_2a0;
  uStack_1b4 = uStack_29c;
  local_238 = local_2a8;
  uStack_234 = uStack_2a4;
  uStack_230 = uStack_2a0;
  uStack_22c = uStack_29c;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10,1);
    }
  }
  local_228 = *(undefined8 *)(param_2 + 0x40);
  local_23c = *(undefined1 *)(param_2 + 0x2c);
  local_23b = *(undefined1 *)(param_2 + 0x2d);
  if (0 < (int)local_80) {
    lVar12 = 0;
    plVar10 = plVar9;
    iVar11 = param_6;
    do {
      puVar7 = local_1a8;
      if (local_88 != (undefined1 *)0x0) {
        puVar7 = local_88;
      }
      puVar7 = puVar7 + lVar12;
      cVar3 = SWidget::IsChildWidgetCulled(param_1,local_2b0,puVar7);
      iVar5 = param_6;
      if (cVar3 == '\0') {
        puVar6 = local_218;
        if (local_208 != (undefined1 *)0x0) {
          puVar6 = local_208;
        }
        iVar5 = param_6 + 1;
        if (puVar6[(longlong)plVar10] == '\0') {
          iVar5 = iVar11;
        }
        iVar11 = iVar5;
        local_2c0 = local_2b8;
        local_2c8 = local_298;
        local_2d8 = local_290;
        local_2d0 = iVar11;
        iVar5 = FUN_14184f6c0(*(undefined8 *)(puVar7 + 0x38),local_268,puVar7,local_2b0);
        if (iVar5 <= param_6) {
          iVar5 = param_6;
        }
      }
      else if (*(char *)(*(longlong *)(puVar7 + 0x38) + 0x200) != '\0') {
        uStack_27c = local_288[8];
        uStack_278 = local_288[9];
        uStack_274 = local_288[10];
        uStack_1e4 = local_288[5];
        uStack_1e0 = local_288[6];
        local_280 = local_288[7];
        local_1f8 = *local_288;
        uStack_1f4 = local_288[1];
        uStack_1f0 = local_288[2];
        local_1e8 = (float)local_288[4] + local_24c;
        uStack_1c4 = (undefined4)((ulonglong)*(undefined8 *)(local_288 + 0xc) >> 0x20);
        fStack_1c8 = local_24c + (float)*(undefined8 *)(local_288 + 0xc);
        fStack_1ec = (float)local_288[3] + local_250;
        fStack_1cc = local_250 + (float)local_288[0xb];
        uStack_1dc = local_280;
        local_1d8 = uStack_27c;
        uStack_1d4 = uStack_278;
        uStack_1d0 = uStack_274;
        SWidget::ExecuteActiveTimers(*(longlong *)(puVar7 + 0x38),local_248,local_240);
        (**(code **)(**(longlong **)(puVar7 + 0x38) + 8))
                  (*(longlong **)(puVar7 + 0x38),&local_1f8,(int)local_248,local_240);
      }
      param_6 = iVar5;
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
      plVar10 = (longlong *)((longlong)plVar10 + 1);
      lVar12 = lVar12 + 0x48;
    } while ((int)uVar8 < (int)local_80);
  }
  plVar9 = (longlong *)CONCAT44(uStack_22c,uStack_230);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar11 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  if (local_208 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  FUN_140456b10(local_1a8);
  return param_6;
}



// FUNCTION 141998d90 FUN_141998d90 body=1111 status=ok
// SIG undefined FUN_141998d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141998d90(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  int local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8;
  byte local_2a7 [3];
  int local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 *local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_258 [16];
  undefined4 local_248;
  undefined1 local_244;
  float local_240;
  float local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined1 local_22b;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined1 local_208 [8];
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  float fStack_1f4;
  float local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [288];
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_280 = param_5;
  local_288 = param_7;
  local_2a0 = param_4;
  local_278 = param_3;
  if (DAT_1469eaf30 != 0) {
    SWidget::GetDesiredSize(param_1,local_208);
  }
  local_1b8[0] = DAT_1464b9eed;
  plVar12 = (longlong *)0x0;
  local_90 = (undefined1 *)0x0;
  local_88 = 0;
  local_80 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_1b8);
  local_2c0 = *(int *)(param_2 + 0x28);
  local_2c8 = *(undefined8 *)(param_2 + 0x20);
  FPaintArgs::FPaintArgs
            (local_258,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  local_248 = *(undefined4 *)(param_2 + 0x10);
  local_244 = *(undefined1 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)CONCAT44(uStack_21c,uStack_220);
  local_298 = (undefined4)uVar2;
  uStack_294 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_290 = (undefined4)lVar3;
  uStack_28c = (undefined4)((ulonglong)lVar3 >> 0x20);
  local_1c8 = local_298;
  uStack_1c4 = uStack_294;
  uStack_1c0 = uStack_290;
  uStack_1bc = uStack_28c;
  local_228 = local_298;
  uStack_224 = uStack_294;
  uStack_220 = uStack_290;
  uStack_21c = uStack_28c;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  local_218 = *(undefined8 *)(param_2 + 0x40);
  local_22c = *(undefined1 *)(param_2 + 0x2c);
  local_22b = *(undefined1 *)(param_2 + 0x2d);
  if (param_8 != '\0') {
    if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar4 != '\0')) {
      plVar9 = plVar12;
      if ((int)param_1[0x15] != 0) {
        plVar9 = (longlong *)param_1[0x14];
      }
      uVar5 = (**(code **)(*plVar9 + 0x38))();
      *(undefined1 *)(param_1 + 0x13) = uVar5;
    }
    local_2a8 = 1;
    if ((char)param_1[0x13] != '\0') goto LAB_141998f47;
  }
  local_2a8 = 0;
LAB_141998f47:
  local_2a4 = 0;
  iVar6 = (**(code **)param_1[0x41])();
  plVar9 = plVar12;
  plVar15 = plVar12;
  iVar13 = param_6;
  if (0 < iVar6) {
    do {
      puVar11 = local_1b0;
      if (local_90 != (undefined1 *)0x0) {
        puVar11 = local_90;
      }
      puVar11 = puVar11 + (longlong)plVar12;
      lVar3 = *(longlong *)(puVar11 + 0x38);
      if (((*(int *)(lVar3 + 0xc0) != 0) && (*(longlong **)(lVar3 + 0xb8) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(lVar3 + 0xc0) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar3 + 0xb8);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,local_2a7);
        *(byte *)(lVar3 + 0xb0) = local_2a7[0];
      }
      iVar6 = local_2a4;
      if ((*(byte *)(lVar3 + 0xb0) & 0x19) != 0) {
        lVar3 = *(longlong *)((longlong)plVar15 + param_1[0x43]);
        cVar4 = SWidget::IsChildWidgetCulled(param_1,local_2a0,puVar11);
        if (cVar4 == '\0') {
          iVar6 = *(int *)(lVar3 + 0x70);
          iVar7 = iVar13 + 1;
          if (local_2a4 == iVar6) {
            iVar7 = param_6;
          }
          local_2b0 = local_2a8;
          local_2b8 = local_288;
          local_2c8 = local_280;
          local_2c0 = iVar7;
          iVar8 = FUN_14184f6c0(*(undefined8 *)(puVar11 + 0x38),local_258,puVar11,local_2a0);
          if (iVar8 <= iVar13) {
            iVar8 = iVar13;
          }
          iVar13 = iVar8;
          param_6 = iVar7;
          if (local_2a4 == iVar6) {
            iVar6 = local_2a4;
          }
        }
        else {
          iVar6 = local_2a4;
          if (*(char *)(*(longlong *)(puVar11 + 0x38) + 0x200) != '\0') {
            uStack_26c = local_278[8];
            uStack_268 = local_278[9];
            uStack_264 = local_278[10];
            uStack_1ec = local_278[5];
            uStack_1e8 = local_278[6];
            local_270 = local_278[7];
            local_200 = *local_278;
            uStack_1fc = local_278[1];
            uStack_1f8 = local_278[2];
            local_1f0 = (float)local_278[4] + local_23c;
            uStack_1cc = (undefined4)((ulonglong)*(undefined8 *)(local_278 + 0xc) >> 0x20);
            fStack_1d0 = local_23c + (float)*(undefined8 *)(local_278 + 0xc);
            fStack_1f4 = (float)local_278[3] + local_240;
            fStack_1d4 = local_240 + (float)local_278[0xb];
            uStack_1e4 = local_270;
            local_1e0 = uStack_26c;
            uStack_1dc = uStack_268;
            uStack_1d8 = uStack_264;
            SWidget::ExecuteActiveTimers(*(longlong *)(puVar11 + 0x38),local_238,local_230);
            (**(code **)(**(longlong **)(puVar11 + 0x38) + 8))
                      (*(longlong **)(puVar11 + 0x38),&local_200,(int)local_238,local_230);
            iVar6 = local_2a4;
          }
        }
      }
      local_2a4 = iVar6;
      uVar14 = (int)plVar9 + 1;
      plVar12 = plVar12 + 9;
      iVar6 = (**(code **)param_1[0x41])();
      plVar9 = (longlong *)(ulonglong)uVar14;
      plVar15 = plVar15 + 1;
    } while ((int)uVar14 < iVar6);
  }
  plVar12 = (longlong *)CONCAT44(uStack_21c,uStack_220);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar12 != (longlong *)0x0)) {
      (**(code **)(*plVar12 + 8))(plVar12,1);
    }
  }
  FUN_140456b10(local_1b0);
  return iVar13;
}



// FUNCTION 1419991f0 FUN_1419991f0 body=3013 status=ok
// SIG undefined FUN_1419991f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419991f0(longlong param_1,longlong param_2,float *param_3,float *param_4,
                       longlong param_5,int param_6,undefined8 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong *plVar6;
  void *_Src;
  float *pfVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  uint local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  char local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  float *local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong *local_278;
  float *local_270;
  longlong local_268;
  longlong *local_260;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined8 local_23c;
  float local_234;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  longlong *local_218;
  undefined **local_210 [3];
  longlong local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [56];
  longlong *local_188;
  undefined1 local_178 [4];
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined1 local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  code *local_138;
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [48];
  longlong local_68;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2c8 = param_5;
  local_230 = param_7;
  local_2c0 = param_2;
  local_2b0 = param_3;
  local_270 = param_4;
  if (*(char *)(param_1 + 0x46b) == '\0') {
    local_2e0 = param_8;
    local_2e8 = param_7;
    local_2f0 = param_6;
    local_2f8 = (longlong *)param_5;
    uVar18 = FUN_14184ebd0(param_1);
    return uVar18;
  }
  if (*(char *)(param_1 + 0x468) == '\0') {
    local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,param_6);
    cVar8 = FUN_14198b970(param_1,param_5);
    if (cVar8 == '\0') {
      bVar21 = false;
      uVar12 = FUN_1405859b0(*(longlong *)(param_1 + 0x3b0) + 0x988);
      FSlateClippingManager::MergeClippingStates(param_5 + 0x988,uVar12);
      goto LAB_141999c6c;
    }
  }
  plVar13 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1f0);
  plVar6 = (longlong *)plVar13[1];
  local_2d0 = *plVar13;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1e8 + 1;
    lVar20 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x468) = 0x100;
  *(undefined1 *)(param_1 + 0x46a) = 1;
  *(int *)(param_1 + 0x460) = param_6 + 10;
  local_288 = *(longlong **)(param_5 + 0x18);
  local_228 = param_1 + 0x300;
  if (param_1 == 0) {
    local_228 = 0;
  }
  local_290 = 0;
  if (local_288 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)local_288[1];
    bVar21 = iVar9 == 0;
    if (bVar21) {
      *(int *)(local_288 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar9 == (int)local_288[1];
      if (bVar21) {
        *(int *)(local_288 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (local_288 != (longlong *)0x0) {
          local_290 = *(undefined8 *)(param_5 + 0x10);
        }
        goto LAB_14199937c;
      }
      LOCK();
      iVar9 = (int)local_288[1];
      bVar21 = iVar9 == 0;
      if (bVar21) {
        *(int *)(local_288 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
    local_288 = (longlong *)0x0;
  }
LAB_14199937c:
  plVar14 = (longlong *)FUN_14189b8a0(DAT_1469f4590,local_1e0,&local_290,local_228);
  plVar13 = (longlong *)(param_1 + 0x3b0);
  if (plVar13 != plVar14) {
    *plVar13 = *plVar14;
    *plVar14 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3b8,plVar14 + 1);
  }
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1d8 + 1;
    lVar20 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  plVar14 = local_288;
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_288 + 1;
    lVar20 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_288)(local_288);
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
  puVar17 = (undefined8 *)(param_1 + 0x3c0);
  local_278 = (longlong *)0x0;
  if (puVar17 != &local_280) {
    *puVar17 = 0;
    local_280 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c8,&local_278);
    plVar14 = local_278;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_278 + 1;
      lVar20 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  uVar12 = (**(code **)(*(longlong *)(param_1 + 0x300) + 0x10))();
  pfVar7 = local_2b0;
  *(undefined8 *)(param_1 + 0x3a8) = uVar12;
  local_220 = local_2d0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_218 = plVar6;
  FUN_1418467f0(*(undefined8 *)(param_1 + 0x3a8),local_2c0,&local_220,local_2b0);
  FUN_14185c5d0(*(undefined8 *)(param_1 + 0x228),pfVar7[2]);
  lVar20 = local_2c8;
  local_2d8 = '\0';
  local_298 = local_2c8 + 0x988;
  iVar9 = FSlateClippingManager::GetClippingIndex(local_298);
  if (iVar9 != -1) {
    local_2d8 = '\x01';
    plVar14 = (longlong *)FUN_1405859b0(local_298);
    puVar19 = (undefined1 *)((longlong)iVar9 * 0x40 + *plVar14);
    local_178[0] = *puVar19;
    local_150 = puVar19[0x28] != '\0';
    if ((bool)local_150) {
      local_174 = *(undefined8 *)(puVar19 + 4);
      uStack_16c = *(undefined8 *)(puVar19 + 0xc);
      local_164 = *(undefined8 *)(puVar19 + 0x14);
      uStack_15c = *(undefined8 *)(puVar19 + 0x1c);
      local_154 = *(undefined4 *)(puVar19 + 0x24);
    }
    local_148 = (void *)0x0;
    local_140 = *(int *)(puVar19 + 0x38);
    lVar20 = (longlong)local_140;
    _Src = *(void **)(puVar19 + 0x30);
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(&local_148,local_140,0);
      _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar20 * 0x24);
    }
    FSlateClippingManager::PushClippingState(*plVar13 + 0x988,local_178);
    lVar20 = local_2c8;
    if (local_148 != (void *)0x0) {
      FMemory::Free();
      lVar20 = local_2c8;
    }
  }
  if (local_2d0 == 0) {
    local_268 = 0;
  }
  else {
    local_268 = local_2d0 + 0x300;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
  }
  lVar15 = *plVar13;
  local_2f0 = local_2f0 & 0xffffff00;
  local_2f8 = (longlong *)CONCAT71(local_2f8._1_7_,1);
  local_260 = plVar6;
  uVar12 = FUN_14182c690(local_2c0,local_1c0,&local_268,*(undefined8 *)(param_1 + 0x3a8));
  local_2e0 = param_8;
  local_2e8 = local_230;
  local_2f0 = *(uint *)(param_1 + 0x460);
  local_2f8 = (longlong *)lVar15;
  uVar10 = FUN_14184ebd0(param_1,uVar12,local_2b0,local_270);
  *(undefined4 *)(param_1 + 0x464) = uVar10;
  if (local_188 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_188 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar9 == 1) && (local_188 != (longlong *)0x0)) {
      (**(code **)(*local_188 + 8))(local_188,1);
    }
  }
  if (local_260 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_260 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar9 == 1) && (local_260 != (longlong *)0x0)) {
      (**(code **)(*local_260 + 8))(local_260,1);
    }
  }
  if (local_2d8 != '\0') {
    FSlateClippingManager::PopClip(*plVar13 + 0x988);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if ((*(int *)(param_1 + 0x3dc) < 0) && (*(int *)(param_1 + 0x3dc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x3d0,0);
  }
  FReferenceCollector::FReferenceCollector(local_210);
  local_210[0] = &PTR__scalar_deleting_destructor__144d4fc80;
  local_1f8 = param_1 + 0x3d0;
  FSlateWindowElementList::AddReferencedObjects(*plVar13,local_210);
  FReferenceCollector::~FReferenceCollector(local_210);
  if (*(char *)(param_1 + 0x46c) != '\0') {
    *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(local_2b0 + 0xb);
  }
  lVar15 = FUN_1405859b0(lVar20 + 0x988);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(lVar15 + 8);
  uVar10 = FSlateWindowElementList::GetClippingIndex(lVar20);
  *(undefined4 *)(param_1 + 0x410) = uVar10;
  puVar19 = (undefined1 *)FUN_141833ba0(lVar20,local_98);
  if (puVar19 != (undefined1 *)(param_1 + 0x418)) {
    if (*(char *)(param_1 + 0x458) != '\0') {
      *(undefined1 *)(param_1 + 0x458) = 0;
      if (*(longlong *)(param_1 + 0x448) != 0) {
        FMemory::Free();
      }
      if (*(char *)(param_1 + 0x440) != '\0') {
        *(undefined1 *)(param_1 + 0x440) = 0;
      }
    }
    if (puVar19[0x40] != '\0') {
      *(undefined1 *)(param_1 + 0x418) = *puVar19;
      *(undefined1 *)(param_1 + 0x440) = 0;
      if (puVar19[0x28] != '\0') {
        uVar12 = *(undefined8 *)(puVar19 + 0xc);
        *(undefined8 *)(param_1 + 0x41c) = *(undefined8 *)(puVar19 + 4);
        *(undefined8 *)(param_1 + 0x424) = uVar12;
        uVar12 = *(undefined8 *)(puVar19 + 0x1c);
        *(undefined8 *)(param_1 + 0x42c) = *(undefined8 *)(puVar19 + 0x14);
        *(undefined8 *)(param_1 + 0x434) = uVar12;
        *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(puVar19 + 0x24);
        *(undefined1 *)(param_1 + 0x440) = 1;
      }
      *(undefined8 *)(param_1 + 0x448) = 0;
      *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(puVar19 + 0x30);
      *(undefined8 *)(puVar19 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(puVar19 + 0x38);
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(puVar19 + 0x3c);
      *(undefined8 *)(puVar19 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x458) = 1;
    }
  }
  if ((local_58 != '\0') && (local_58 = '\0', local_68 != 0)) {
    FMemory::Free();
  }
  uVar12 = FUN_1405859b0(*plVar13 + 0x988);
  uVar10 = FSlateClippingManager::MergeClippingStates(local_298,uVar12);
  if (*(char *)(param_1 + 0x46d) == '\0') {
    local_2d0 = CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x410));
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar17 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &PTR_FUN_143f77b70;
      puVar17[1] = local_2d0;
    }
    local_e8[0] = &LAB_14196e260;
    FSlateDrawLayer::ForEachElement(*plVar13 + 0x98,local_e8);
    if (local_a8 != 0) {
      plVar14 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar14 = local_b8;
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_2d0 = CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x410));
    local_108 = (longlong *)0x0;
    local_f8 = 0;
    puVar17 = (undefined8 *)FUN_140438ef0(0x10,local_128);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &PTR_FUN_143f77b70;
      puVar17[1] = local_2d0;
    }
    local_138 = FUN_14196e2f0;
    lVar20 = *(longlong *)(*plVar13 + 0x918);
    lVar15 = (longlong)*(int *)(*plVar13 + 0x920) * 0x130 + lVar20;
    for (; lVar20 != lVar15; lVar20 = lVar20 + 0x130) {
      uVar12 = 0;
      if (local_f8 != 0) {
        plVar13 = local_128;
        if (local_108 != (longlong *)0x0) {
          plVar13 = local_108;
        }
        if (plVar13 != (longlong *)0x0) {
          uVar12 = (**(code **)(*plVar13 + 8))();
        }
      }
      (*local_138)(uVar12,lVar20);
    }
    if (local_f8 != 0) {
      plVar13 = local_128;
      if (local_108 != (longlong *)0x0) {
        plVar13 = local_108;
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13,0);
      }
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    puVar16 = (undefined8 *)FUN_1418046d0(*plVar13,local_1d0,local_228);
    local_2a0 = (longlong *)puVar16[1];
    local_2a8 = *puVar16;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
      UNLOCK();
    }
    if (puVar17 != &local_2a8) {
      *puVar17 = local_2a8;
      local_2a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c8,&local_2a0);
    }
    plVar13 = local_2a0;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_2a0 + 1;
      lVar20 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1c8 + 1;
      lVar20 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
  }
  param_3 = local_2b0;
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(local_2c0 + 0x10);
  FGeometry::operator=(param_1 + 0x308,local_2b0);
  pfVar7 = local_270;
  fVar3 = local_270[3];
  fVar4 = local_270[1];
  *(float *)(param_1 + 0x400) =
       (float)((int)ROUND((local_270[2] - *local_270) + (local_270[2] - *local_270) + 0.5) >> 1);
  *(float *)(param_1 + 0x404) = (float)((int)ROUND((fVar3 - fVar4) + (fVar3 - fVar4) + 0.5) >> 1);
  if (*(char *)(param_1 + 0x46c) != '\0') {
    local_248 = param_3[3];
    local_244 = param_3[4];
    local_234 = param_3[2] * param_3[1];
    local_23c = 0;
    local_240 = param_3[2] * *param_3;
    FSlateRotatedRect::ToBoundingRect(&local_248,&local_258);
    if (pfVar7[3] <= local_24c) {
      local_24c = pfVar7[3];
    }
    if (local_254 <= pfVar7[1]) {
      local_254 = pfVar7[1];
    }
    if (pfVar7[2] <= local_250) {
      local_250 = pfVar7[2];
    }
    if (local_258 <= *pfVar7) {
      local_258 = *pfVar7;
    }
    if ((local_24c < local_254) || (local_250 < local_258)) {
      local_258 = 0.0;
      local_254 = 0.0;
      local_250 = 0.0;
      local_24c = 0.0;
    }
    *(float *)(param_1 + 0x408) = local_250 - local_258;
    *(float *)(param_1 + 0x40c) = local_24c - local_254;
  }
  *(undefined1 *)(param_1 + 0x46a) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar6 + 1;
    lVar20 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  bVar21 = true;
  param_2 = local_2c0;
  param_5 = local_2c8;
LAB_141999c6c:
  local_2b8 = DAT_1468b5d88;
  if (*(char *)(param_1 + 0x46c) != '\0') {
    local_2b8 = CONCAT44(param_3[0xc] - *(float *)(param_1 + 0x3e4),
                         param_3[0xb] - *(float *)(param_1 + 0x3e0));
  }
  if (!bVar21) {
    local_2f8 = (longlong *)local_2b8;
    FUN_141853310(*(undefined8 *)(param_1 + 0x3a8),*(undefined8 *)(param_2 + 8),
                  *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 0x460));
  }
  uVar5 = *(uint *)(param_1 + 0x464);
  if (*(char *)(param_1 + 0x46d) == '\0') {
    FUN_14184b720(param_5,*(longlong *)(param_1 + 0x3b0),local_2b8);
  }
  else {
    FSlateDrawElement::MakeCachedBuffer
              (param_5,*(undefined4 *)(param_1 + 0x460),param_1 + 0x3c0,&local_2b8);
    FSlateWindowElementList::MergeResources(param_5,param_1 + 0x3d0);
  }
  lVar20 = *(longlong *)(param_1 + 0x3b0);
  uVar11 = uVar5;
  if (lVar20 != 0) {
    local_2f8 = &local_2b8;
    if (*(char *)(param_1 + 0x46d) != '\0') {
      uVar11 = FSlateWindowElementList::PaintVolatile();
      if ((int)uVar11 <= (int)uVar5) {
        uVar11 = uVar5;
      }
      return (ulonglong)uVar11;
    }
    uVar11 = FUN_1418501f0(lVar20,param_5,*(undefined8 *)(param_2 + 0x20));
    if ((int)uVar11 <= (int)uVar5) {
      uVar11 = uVar5;
    }
  }
  return (ulonglong)uVar11;
}



// FUNCTION 141999dc0 FUN_141999dc0 body=1111 status=ok
// SIG undefined FUN_141999dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_141999dc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  undefined4 local_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined8 local_390;
  longlong *local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined1 local_368 [16];
  undefined4 local_358;
  undefined1 local_354;
  undefined1 local_33c;
  undefined1 local_33b;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  longlong local_320;
  longlong lStack_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [32];
  longlong *local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_260 [8];
  undefined8 local_258 [36];
  undefined8 *local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  longlong *local_d0;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  local_260[0] = DAT_1464b9ee8;
  plVar9 = (longlong *)0x0;
  local_138 = (undefined8 *)0x0;
  local_130 = 0;
  local_128 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_260);
  if (0 < (int)local_130) {
    puVar10 = local_258;
    if (local_138 != (undefined8 *)0x0) {
      puVar10 = local_138;
    }
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x1d8))(param_1,local_298);
    local_3a8 = *puVar7;
    uStack_3a0 = puVar7[1];
    local_398 = *(undefined1 *)(puVar7 + 2);
    local_390 = puVar7[3];
    local_388 = (longlong *)puVar7[4];
    if (local_388 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_388 + 1) = (int)local_388[1] + 1;
      UNLOCK();
    }
    local_3d8 = *param_7;
    uStack_3d0 = param_7[1];
    local_380 = 1;
    local_3c8 = param_7[2];
    uStack_3c0 = param_7[3];
    local_378 = 0;
    local_370 = 0;
    local_3b8 = *(undefined4 *)(param_7 + 4);
    uStack_3b4 = *(undefined4 *)((longlong)param_7 + 0x24);
    uStack_3b0 = *(undefined4 *)(param_7 + 5);
    uStack_3ac = *(undefined4 *)((longlong)param_7 + 0x2c);
    if (((int)param_1[0x55] != 0) && ((longlong *)param_1[0x54] != (longlong *)0x0)) {
      cVar5 = (**(code **)(*(longlong *)param_1[0x54] + 0x18))();
      if (cVar5 != '\0') {
        if ((int)param_1[0x55] != 0) {
          plVar9 = (longlong *)param_1[0x54];
        }
        (**(code **)(*plVar9 + 0x38))(plVar9,&local_320);
        param_1[0x51] = local_320;
        param_1[0x52] = lStack_318;
      }
    }
    local_3d8 = CONCAT44(local_3d8._4_4_ * *(float *)((longlong)param_1 + 0x28c),
                         (float)local_3d8 * *(float *)(param_1 + 0x51));
    uStack_3d0 = CONCAT44(uStack_3d0._4_4_ * *(float *)((longlong)param_1 + 0x294),
                          (float)uStack_3d0 * *(float *)(param_1 + 0x52));
    puVar7 = (undefined8 *)FWidgetStyle::SetForegroundColor(&local_3d8,&local_3a8);
    local_2c8 = *puVar7;
    uStack_2c0 = puVar7[1];
    local_2b8 = puVar7[2];
    uStack_2b0 = puVar7[3];
    local_2a8 = *(undefined4 *)(puVar7 + 4);
    uStack_2a4 = *(undefined4 *)((longlong)puVar7 + 0x24);
    uStack_2a0 = *(undefined4 *)(puVar7 + 5);
    uStack_29c = *(undefined4 *)((longlong)puVar7 + 0x2c);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_378);
    plVar9 = local_388;
    if (local_388 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_388 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_388)(local_388);
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
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_278 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar2 = (int *)((longlong)local_278 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    local_3e8 = puVar10[7];
    local_3e0 = (longlong *)puVar10[8];
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
      UNLOCK();
    }
    local_308 = *puVar10;
    uStack_300 = puVar10[1];
    local_2f8 = puVar10[2];
    uStack_2f0 = puVar10[3];
    local_2e8 = puVar10[4];
    uStack_2e0 = puVar10[5];
    local_2d8 = puVar10[6];
    local_400 = *(undefined4 *)(param_2 + 0x28);
    local_408 = *(undefined8 **)(param_2 + 0x20);
    FPaintArgs::FPaintArgs
              (local_368,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
    local_358 = *(undefined4 *)(param_2 + 0x10);
    local_354 = *(undefined1 *)(param_2 + 0x14);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x38);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)CONCAT44(uStack_32c,uStack_330);
    local_3f8 = (undefined4)uVar8;
    uStack_3f4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_3f0 = (undefined4)lVar4;
    uStack_3ec = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_270 = local_3f8;
    uStack_26c = uStack_3f4;
    uStack_268 = uStack_3f0;
    uStack_264 = uStack_3ec;
    local_338 = local_3f8;
    uStack_334 = uStack_3f4;
    uStack_330 = uStack_3f0;
    uStack_32c = uStack_3ec;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    local_328 = *(undefined8 *)(param_2 + 0x40);
    local_33c = *(undefined1 *)(param_2 + 0x2c);
    local_33b = *(undefined1 *)(param_2 + 0x2d);
    uVar6 = SWidget::ShouldBeEnabled(param_1,param_8);
    local_400 = CONCAT31(local_400._1_3_,uVar6);
    local_408 = &local_2c8;
    uVar8 = FUN_1417ea820(local_118,&local_3e8,local_368,&local_308);
    FUN_141852c20(param_5,uVar8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_d0 != (longlong *)0x0)) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_110 != (longlong *)0x0)) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
    plVar9 = (longlong *)CONCAT44(uStack_32c,uStack_330);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    plVar9 = local_3e0;
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_3e0)(local_3e0);
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
  }
  FUN_140456b10(local_258);
  return param_6;
}



// FUNCTION 14199a220 FUN_14199a220 body=2413 status=ok
// SIG undefined FUN_14199a220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14199a220(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_198 [32];
  float *local_178;
  float *local_170;
  undefined1 local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  char local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  byte local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar12 = (longlong *)0x0;
  if (param_8 == '\0') {
LAB_14199a2b9:
    uVar8 = 0x20;
  }
  else {
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar7 != '\0')) {
      plVar10 = plVar12;
      if (*(int *)(param_1 + 0xa8) != 0) {
        plVar10 = *(longlong **)(param_1 + 0xa0);
      }
      uVar8 = (**(code **)(*plVar10 + 0x38))();
      *(undefined1 *)(param_1 + 0x98) = uVar8;
    }
    if (*(char *)(param_1 + 0x98) == '\0') goto LAB_14199a2b9;
    uVar8 = 0;
  }
  lVar14 = *(longlong *)(param_1 + 0x240);
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(param_1 + 0x208) + 0x90;
  }
  cVar7 = *(char *)(lVar14 + 0x30);
  pfVar9 = (float *)(lVar14 + 0x20);
  if (cVar7 != '\0') {
    if (cVar7 == '\x01') {
      pfVar9 = *(float **)(lVar14 + 0x38);
    }
    else if (cVar7 == '\x03') {
      pfVar9 = param_7 + 8;
    }
    else {
      pfVar9 = param_7 + 4;
    }
  }
  local_140 = *pfVar9;
  fStack_13c = pfVar9[1];
  fStack_138 = pfVar9[2];
  fStack_134 = pfVar9[3];
  local_168 = uVar8;
  pfVar9 = (float *)FUN_141831530(param_1 + 0x250);
  cVar7 = *(char *)(pfVar9 + 4);
  if (cVar7 != '\0') {
    if (cVar7 == '\x01') {
      pfVar9 = *(float **)(pfVar9 + 6);
    }
    else if (cVar7 == '\x03') {
      pfVar9 = param_7 + 8;
    }
    else {
      pfVar9 = param_7 + 4;
    }
  }
  local_108 = *param_7 * *pfVar9 * local_140;
  local_104 = pfVar9[1] * param_7[1] * fStack_13c;
  local_100 = pfVar9[2] * param_7[2] * fStack_138;
  local_fc = pfVar9[3] * param_7[3] * fStack_134;
  local_128 = *param_7;
  fStack_124 = param_7[1];
  fStack_120 = param_7[2];
  fStack_11c = param_7[3];
  pfVar9 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x210);
  local_148 = *(char *)(pfVar9 + 1);
  fVar19 = local_140;
  if (local_148 != '\0') {
    fVar19 = *pfVar9;
  }
  if (((*(int *)(param_1 + 0x2a8) != 0) && (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x18))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x2a8) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar12 + 0x38))(plVar12,&local_140);
    *(ulonglong *)(param_1 + 0x290) = CONCAT44(fStack_13c,local_140);
  }
  lVar11 = *(longlong *)(param_1 + 0x238);
  local_140 = *(float *)(param_1 + 0x290);
  fStack_13c = *(float *)(param_1 + 0x294);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(param_1 + 0x208) + 8;
  }
  cVar7 = *(char *)(lVar11 + 0x30);
  pfVar9 = (float *)(lVar11 + 0x20);
  if (cVar7 != '\0') {
    if (cVar7 == '\x01') {
      pfVar9 = *(float **)(lVar11 + 0x38);
    }
    else if (cVar7 == '\x03') {
      pfVar9 = param_7 + 8;
    }
    else {
      pfVar9 = param_7 + 4;
    }
  }
  local_158 = *pfVar9 * *param_7;
  local_ec = 0;
  fStack_154 = pfVar9[1] * param_7[1];
  local_c4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_c4 & 0xfc;
  local_170 = &local_158;
  fStack_150 = pfVar9[2] * param_7[2];
  local_f8 = param_3[3];
  local_f4 = param_3[4];
  fStack_14c = pfVar9[3] * param_7[3];
  local_e4 = *param_3;
  local_e0 = param_3[1];
  local_dc = *(undefined8 *)(param_3 + 7);
  uStack_d4 = *(undefined8 *)(param_3 + 9);
  local_178 = (float *)CONCAT71(local_178._1_7_,uVar8);
  local_f0 = param_3[2];
  local_cc = *(undefined8 *)(param_3 + 0xb);
  FSlateDrawElement::MakeBox(param_5,param_6,&local_f8);
  iVar13 = param_6 + 1;
  if (local_148 == '\0') {
    lVar14 = *(longlong *)(param_1 + 0x248);
    if (lVar14 == 0) {
      lVar14 = *(longlong *)(param_1 + 0x208) + 0x118;
    }
    local_178 = &local_158;
    fVar19 = *(float *)(lVar14 + 8);
    fVar17 = *(float *)(param_1 + 0x2b0);
    local_158 = 0.0;
    fStack_154 = 0.0;
    fStack_150 = 1.0;
    fStack_14c = 1.0;
    cVar7 = PushTransformedClip(param_5,param_3,CONCAT44(fStack_13c,local_140),0);
    if (cVar7 == '\0') goto LAB_14199ab1c;
    pfVar9 = *(float **)(lVar14 + 0x38);
    if (pfVar9 == (float *)0x0) {
      local_140 = *(float *)(lVar14 + 0x20);
      fStack_13c = *(float *)(lVar14 + 0x24);
      fStack_138 = *(float *)(lVar14 + 0x28);
      fStack_134 = *(float *)(lVar14 + 0x2c);
    }
    else {
      local_140 = *pfVar9;
      fStack_13c = pfVar9[1];
      fStack_138 = pfVar9[2];
      fStack_134 = pfVar9[3];
    }
    fVar1 = param_3[2];
    local_118 = fVar19 * fVar17 - fVar19;
    fVar17 = param_3[1];
    fVar2 = param_3[4];
    local_114 = 0;
    local_158 = local_140 * local_128;
    fStack_154 = fStack_13c * fStack_124;
    fVar3 = *param_3;
    fStack_150 = fStack_138 * fStack_120;
    fStack_14c = fStack_134 * fStack_11c;
    fVar18 = local_118 * fVar1;
    local_128 = 1.0;
    fStack_124 = 0.0;
    fStack_120 = 0.0;
    fStack_11c = 1.0;
    fVar4 = param_3[3];
    Concatenate<FTransform2D>(&local_140,&local_128,param_3 + 7);
    local_c4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_c4 & 0xfc;
    local_170 = &local_158;
    local_dc = CONCAT44(fStack_13c,local_140);
    uStack_d4 = CONCAT44(fStack_134,fStack_138);
    local_cc = local_130;
    local_f8 = fVar18 + fVar4;
    local_f4 = fVar2;
    local_f0 = fVar1;
    local_e4 = fVar19 + fVar3;
    local_e0 = fVar17;
  }
  else {
    uVar16 = 0x3f800000;
    if (0.0 <= fVar19) {
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
    }
    else {
      fVar19 = 0.0;
    }
    iVar5 = *(int *)(param_1 + 0x230);
    local_178 = &local_128;
    uVar6 = CONCAT44(fStack_13c,local_140);
    uVar15 = 0x3f800000;
    if (iVar5 == 1) {
      fStack_150 = 0.0;
      fStack_124 = 0.0;
      fStack_120 = 0.0;
      fStack_11c = 1.0;
      uVar16 = 0;
      local_128 = fVar19;
LAB_14199a727:
      local_158 = local_128;
      fStack_154 = fStack_124;
      fStack_14c = fStack_11c;
      cVar7 = PushTransformedClip(param_5,param_3,uVar6,CONCAT44(uVar16,uVar15));
      if (cVar7 == '\0') goto LAB_14199ab1c;
      local_f0 = param_3[2];
      fStack_150 = param_3[9];
      local_158 = param_3[7];
      fStack_14c = param_3[10];
      uStack_d4 = *(undefined8 *)(param_3 + 9);
      fStack_154 = param_3[8];
      local_dc = *(undefined8 *)(param_3 + 7);
      local_e4 = *param_3;
      local_e0 = param_3[1];
      local_f8 = (float)DAT_1468b5d88 * local_f0 + param_3[3];
      fVar19 = local_158 * (float)DAT_1468b5d88 + fStack_150 * DAT_1468b5d88._4_4_ + param_3[0xb];
      local_f4 = DAT_1468b5d88._4_4_ * local_f0 + param_3[4];
      fVar17 = fStack_154 * (float)DAT_1468b5d88 + fStack_14c * DAT_1468b5d88._4_4_ + param_3[0xc];
    }
    else {
      if (iVar5 != 2) {
        if (iVar5 == 3) {
          fStack_120 = 1.0;
          fStack_150 = 1.0;
          fStack_124 = 0.0;
          uVar15 = 0;
          uVar16 = 0;
          local_128 = 0.0;
          fStack_11c = fVar19;
        }
        else {
          if (iVar5 != 4) {
            local_158 = 0.0;
            fStack_154 = 0.0;
            fStack_14c = 1.0;
            local_128 = 0.0;
            fStack_124 = 0.0;
            fStack_11c = 1.0;
            fStack_150 = fVar19;
            fStack_120 = fVar19;
            cVar7 = PushTransformedClip(param_5,param_3,uVar6,0);
            if (cVar7 == '\0') goto LAB_14199ab1c;
            local_f0 = param_3[2];
            fStack_150 = param_3[9];
            local_158 = param_3[7];
            fStack_14c = param_3[10];
            uStack_d4 = *(undefined8 *)(param_3 + 9);
            fStack_154 = param_3[8];
            local_dc = *(undefined8 *)(param_3 + 7);
            local_c4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_c4 & 0xfc;
            local_170 = &local_108;
            local_cc = CONCAT44((float)DAT_1468b5d88 * fStack_154 + DAT_1468b5d88._4_4_ * fStack_14c
                                + param_3[0xc],
                                (float)DAT_1468b5d88 * local_158 + DAT_1468b5d88._4_4_ * fStack_150
                                + param_3[0xb]);
            local_f8 = (float)DAT_1468b5d88 * local_f0 + param_3[3];
            local_f4 = DAT_1468b5d88._4_4_ * local_f0 + param_3[4];
            local_e4 = *param_3;
            local_e0 = param_3[1];
            goto LAB_14199aaec;
          }
          fStack_150 = 1.0;
          local_128 = 0.0;
          fStack_120 = 1.0;
          fStack_11c = 0.0;
          uVar15 = 0;
          fStack_124 = fVar19;
        }
        goto LAB_14199a727;
      }
      local_158 = fVar19 * 0.5;
      fStack_154 = local_158;
      fStack_150 = local_158;
      fStack_14c = local_158;
      local_128 = local_158;
      fStack_124 = local_158;
      fStack_120 = local_158;
      fStack_11c = local_158;
      cVar7 = PushTransformedClip(param_5,param_3,uVar6,0x3f0000003f000000);
      if (cVar7 == '\0') goto LAB_14199ab1c;
      fStack_154 = param_3[8];
      local_e0 = param_3[1];
      local_f4 = param_3[4];
      local_e4 = *param_3 * fVar19;
      local_f0 = param_3[2];
      fStack_14c = param_3[10];
      fVar17 = *param_3 * 0.5 - local_e4 * 0.5;
      local_158 = param_3[7];
      local_dc = *(undefined8 *)(param_3 + 7);
      fStack_150 = param_3[9];
      uStack_d4 = *(undefined8 *)(param_3 + 9);
      fVar19 = local_158 * fVar17 + param_3[0xb];
      local_f8 = fVar17 * local_f0 + param_3[3];
      fVar17 = fStack_154 * fVar17 + param_3[0xc];
    }
    local_cc = CONCAT44(fVar17,fVar19);
    local_c4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_c4 & 0xfc;
    local_170 = &local_108;
  }
LAB_14199aaec:
  local_178 = (float *)CONCAT71(local_178._1_7_,local_168);
  local_ec = 0;
  FSlateDrawElement::MakeBox(param_5,iVar13,&local_f8,lVar14);
  iVar13 = param_6 + 2;
  FSlateWindowElementList::PopClip(param_5);
LAB_14199ab1c:
  return iVar13 + -1;
}



// FUNCTION 14199ab90 FUN_14199ab90 body=572 status=ok
// SIG undefined FUN_14199ab90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14199ab90(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_d8 [40];
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
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  bVar1 = false;
  if (*(char *)(param_1 + 0x1a) == '\0') {
    if ((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x318) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x310);
        }
        uVar3 = (**(code **)(*plVar7 + 0x38))();
        *(undefined4 *)(param_1 + 0x308) = uVar3;
      }
    }
    if (*(int *)(param_1 + 0x308) - 3U < 3) {
      bVar1 = true;
      uVar4 = FSlateClippingZone::FSlateClippingZone(local_d8,param_3);
      FSlateWindowElementList::PushClip(param_5,uVar4);
      local_90 = param_3[8];
      uStack_8c = param_3[9];
      uStack_88 = param_3[10];
      uVar4 = *(undefined8 *)(param_2 + 8);
      uStack_9c = param_3[5];
      uStack_98 = param_3[6];
      uStack_94 = param_3[7];
      local_b0 = *param_3;
      uStack_ac = param_3[1];
      uStack_a8 = param_3[2];
      local_a0 = (float)param_3[4] + *(float *)(param_2 + 0x1c);
      fStack_84 = (float)param_3[0xb] + *(float *)(param_2 + 0x18);
      uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
      fStack_80 = (float)*(undefined8 *)(param_3 + 0xc) + *(float *)(param_2 + 0x1c);
      fStack_a4 = (float)param_3[3] + *(float *)(param_2 + 0x18);
      uVar5 = FSlateClippingZone::FSlateClippingZone(local_d8,&local_b0);
      FUN_141852760(uVar4,uVar5);
    }
  }
  local_f0 = param_8;
  local_f8 = param_7;
  local_100 = param_6;
  local_108 = param_5;
  uVar6 = FUN_14184ebd0(param_1,param_2,param_3,param_4);
  if (bVar1) {
    FSlateWindowElementList::PopClip(param_5);
    FHittestGrid::PopClip(*(undefined8 *)(param_2 + 8));
    uVar6 = uVar6 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14199add0 OnPaint body=683 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong SScrollBox::OnPaint(longlong param_1,undefined8 param_2,longlong param_3,
                             undefined8 param_4,ulonglong param_5,undefined4 param_6,
                             undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 *local_130;
  undefined8 local_128;
  undefined1 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 local_d4;
  byte local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_120 = param_8;
  local_128 = param_7;
  local_130 = (undefined4 *)CONCAT44(local_130._4_4_,param_6);
  local_138 = param_5;
  uVar2 = FUN_14184ebd0();
  plVar1 = DAT_1469eb140;
  if ((*(byte *)(param_1 + 0x438) & 1) != 0) {
    lVar4 = *DAT_1469eb140;
    puVar3 = (undefined8 *)FName::FName(local_108,L"SoftwareCursor_Grab",1);
    lVar4 = (**(code **)(lVar4 + 0x40))(plVar1,*puVar3,0);
    fStack_114 = *(float *)(param_3 + 0x20);
    local_f8 = *(float *)(param_3 + 8);
    fStack_110 = *(float *)(param_3 + 0x24);
    local_ec = *(float *)(lVar4 + 8);
    local_e8 = *(float *)(lVar4 + 0xc);
    local_118 = *(float *)(param_3 + 0x1c);
    fStack_10c = *(float *)(param_3 + 0x28);
    fVar6 = *(float *)(param_1 + 0x360) - local_ec * 0.5;
    local_f4 = 0;
    local_cc = (*(byte *)(param_3 + 0x34) & 1) * '\x02' | local_cc & 0xfc;
    fVar5 = *(float *)(param_1 + 0x364) - local_e8 * 0.5;
    local_130 = &DAT_1464aa6c0;
    local_138 = local_138 & 0xffffffffffffff00;
    local_100 = local_f8 * fVar6 + *(float *)(param_3 + 0xc);
    local_fc = local_f8 * fVar5 + *(float *)(param_3 + 0x10);
    local_d4 = CONCAT44(fStack_114 * fVar6 + fStack_10c * fVar5 + *(float *)(param_3 + 0x30),
                        local_118 * fVar6 + fStack_110 * fVar5 + *(float *)(param_3 + 0x2c));
    local_e4 = local_118;
    fStack_e0 = fStack_114;
    fStack_dc = fStack_110;
    fStack_d8 = fStack_10c;
    FSlateDrawElement::MakeBox(param_5,(int)uVar2 + 1,&local_100,lVar4);
    uVar2 = (ulonglong)((int)uVar2 + 1);
  }
  return uVar2;
}



// FUNCTION 14199b080 FUN_14199b080 body=1418 status=ok
// SIG undefined FUN_14199b080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14199b080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,undefined4 param_6,float *param_7,char param_8)

{
  longlong lVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  float *local_2e0;
  undefined4 local_2d8;
  float *local_2d0;
  char local_2c8;
  int local_2b8;
  float local_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float *local_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined8 local_24c;
  float local_244;
  float local_240;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_22c;
  byte local_224;
  undefined1 local_220 [8];
  undefined1 local_218 [288];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_220[0] = DAT_1464b9ee8;
  local_2a0 = param_5;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_220);
  local_2c8 = param_8;
  local_2d0 = param_7;
  local_2d8 = param_6;
  local_2e0 = param_5;
  local_2e8 = param_4;
  local_2b8 = FUN_14184fbf0(param_1,param_2,local_220,param_3);
  lVar1 = param_1[0x4e];
  local_2b8 = local_2b8 + 1;
  if (0 < (int)local_f0) {
    iVar10 = 1;
    do {
      if (iVar10 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)local_f0 + -1;
        if (iVar10 < (int)local_f0 + -1) {
          iVar7 = iVar10;
        }
      }
      puVar9 = local_218;
      if (local_f8 != (undefined1 *)0x0) {
        puVar9 = local_f8;
      }
      lVar6 = (longlong)iVar7;
      if ((int)param_1[0x47] == 0) {
        fVar15 = *(float *)((longlong)param_1 + 0x264);
        fVar13 = 0.0;
        fVar16 = *(float *)(puVar9 + lVar6 * 0x48 + 4);
        fVar14 = -fVar15;
      }
      else {
        fVar16 = *(float *)((longlong)param_1 + 0x264);
        fVar14 = 0.0;
        fVar15 = *(float *)(puVar9 + lVar6 * 0x48);
        fVar13 = -fVar16;
      }
      if ((int)param_1[0x46] == iVar10 + -1) {
        lVar11 = param_1[0x4e];
        pfVar2 = *(float **)(lVar11 + 200);
        if (pfVar2 == (float *)0x0) {
          local_2b4 = *(float *)(lVar11 + 0xb0);
          fStack_2b0 = *(float *)(lVar11 + 0xb4);
          fStack_2ac = *(float *)(lVar11 + 0xb8);
          fStack_2a8 = *(float *)(lVar11 + 0xbc);
        }
        else {
          local_2b4 = *pfVar2;
          fStack_2b0 = pfVar2[1];
          fStack_2ac = pfVar2[2];
          fStack_2a8 = pfVar2[3];
        }
        local_268 = local_2b4 * *param_7;
        local_264 = fStack_2b0 * param_7[1];
        local_260 = fStack_2ac * param_7[2];
        local_25c = fStack_2a8 * param_7[3];
        if (param_8 == '\0') {
LAB_14199b477:
          uVar5 = 0x20;
        }
        else {
          if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar4 != '\0')) {
            if ((int)param_1[0x15] == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)param_1[0x14];
            }
            uVar5 = (**(code **)(*plVar8 + 0x38))();
            *(undefined1 *)(param_1 + 0x13) = uVar5;
          }
          if ((char)param_1[0x13] == '\0') goto LAB_14199b477;
          uVar5 = 0;
        }
        local_250 = *(float *)(puVar9 + lVar6 * 0x48 + 8);
        fStack_270 = *(float *)(puVar9 + lVar6 * 0x48 + 0x24);
        local_278 = *(float *)(puVar9 + lVar6 * 0x48 + 0x1c);
        fStack_274 = *(float *)(puVar9 + lVar6 * 0x48 + 0x20);
        fStack_26c = *(float *)(puVar9 + lVar6 * 0x48 + 0x28);
        local_224 = (puVar9[lVar6 * 0x48 + 0x34] & 1) * '\x02' | local_224 & 0xfc;
        local_2e0 = &local_268;
        lVar11 = param_1[0x4e] + 0x90;
        local_254 = local_250 * fVar13 + *(float *)(puVar9 + lVar6 * 0x48 + 0x10);
        local_258 = local_250 * fVar14 + *(float *)(puVar9 + lVar6 * 0x48 + 0xc);
        fVar12 = fVar14 * local_278 + fVar13 * fStack_270 + *(float *)(puVar9 + lVar6 * 0x48 + 0x2c)
        ;
        local_23c = CONCAT44(fStack_274,local_278);
        uStack_234 = CONCAT44(fStack_26c,fStack_270);
        fVar13 = fVar13 * fStack_26c + fVar14 * fStack_274 +
                 *(float *)(puVar9 + lVar6 * 0x48 + 0x30);
      }
      else {
        pfVar2 = *(float **)(lVar1 + 0x40);
        if (pfVar2 == (float *)0x0) {
          local_2b4 = *(float *)(lVar1 + 0x28);
          fStack_2b0 = *(float *)(lVar1 + 0x2c);
          fStack_2ac = *(float *)(lVar1 + 0x30);
          fStack_2a8 = *(float *)(lVar1 + 0x34);
        }
        else {
          local_2b4 = *pfVar2;
          fStack_2b0 = pfVar2[1];
          fStack_2ac = pfVar2[2];
          fStack_2a8 = pfVar2[3];
        }
        local_288 = local_2b4 * *param_7;
        local_284 = fStack_2b0 * param_7[1];
        local_280 = fStack_2ac * param_7[2];
        local_27c = fStack_2a8 * param_7[3];
        if (param_8 == '\0') {
LAB_14199b2ea:
          uVar5 = 0x20;
        }
        else {
          if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar4 != '\0')) {
            if ((int)param_1[0x15] == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)param_1[0x14];
            }
            uVar5 = (**(code **)(*plVar8 + 0x38))();
            *(undefined1 *)(param_1 + 0x13) = uVar5;
          }
          if ((char)param_1[0x13] == '\0') goto LAB_14199b2ea;
          uVar5 = 0;
        }
        local_250 = *(float *)(puVar9 + lVar6 * 0x48 + 8);
        lVar11 = lVar1 + 8;
        fStack_290 = *(float *)(puVar9 + lVar6 * 0x48 + 0x24);
        local_298 = *(float *)(puVar9 + lVar6 * 0x48 + 0x1c);
        fStack_294 = *(float *)(puVar9 + lVar6 * 0x48 + 0x20);
        fStack_28c = *(float *)(puVar9 + lVar6 * 0x48 + 0x28);
        local_224 = (puVar9[lVar6 * 0x48 + 0x34] & 1) * '\x02' | local_224 & 0xfc;
        local_2e0 = &local_288;
        local_258 = local_250 * fVar14 + *(float *)(puVar9 + lVar6 * 0x48 + 0xc);
        fVar12 = local_298 * fVar14 + fStack_290 * fVar13 + *(float *)(puVar9 + lVar6 * 0x48 + 0x2c)
        ;
        local_254 = local_250 * fVar13 + *(float *)(puVar9 + lVar6 * 0x48 + 0x10);
        local_23c = CONCAT44(fStack_294,local_298);
        uStack_234 = CONCAT44(fStack_28c,fStack_290);
        fVar13 = fStack_28c * fVar13 + fStack_294 * fVar14 +
                 *(float *)(puVar9 + lVar6 * 0x48 + 0x30);
      }
      local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
      local_24c = 0;
      local_22c = CONCAT44(fVar13,fVar12);
      local_244 = fVar15;
      local_240 = fVar16;
      FSlateDrawElement::MakeBox(local_2a0,local_2b8,&local_258,lVar11);
      bVar3 = iVar10 < (int)local_f0;
      iVar10 = iVar10 + 1;
    } while (bVar3);
  }
  FUN_140456b10(local_218);
  return local_2b8;
}



// FUNCTION 14199b610 FUN_14199b610 body=2348 status=ok
// SIG undefined FUN_14199b610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14199b610(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             ulonglong param_5,int param_6,undefined8 *param_7,char param_8)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong *plVar11;
  byte bVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_398 [32];
  ulonglong local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined1 local_360;
  undefined4 local_358;
  ulonglong local_350;
  undefined4 local_348;
  undefined8 local_340;
  longlong local_338;
  float local_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined **local_310;
  ushort local_308;
  undefined1 local_306;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  longlong *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined2 local_2b4;
  undefined8 local_2b0;
  undefined1 local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong local_290;
  longlong local_288;
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [56];
  int local_220;
  undefined1 local_218 [56];
  longlong *local_1e0;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 local_1a4;
  byte local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 local_16c;
  byte local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_154;
  float local_14c;
  float local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  byte local_12c;
  longlong local_128 [4];
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_350 = param_5;
  local_340 = param_4;
  local_338 = param_2;
  if (param_8 != '\0') {
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0xa0);
      }
      uVar4 = (**(code **)(*plVar11 + 0x38))();
      *(undefined1 *)(param_1 + 0x98) = uVar4;
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      cVar3 = '\x01';
      goto LAB_14199b6ca;
    }
  }
  cVar3 = '\0';
LAB_14199b6ca:
  local_358 = CONCAT31(local_358._1_3_,cVar3);
  if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x18))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 800) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(param_1 + 0x318);
    }
    uVar4 = (**(code **)(*plVar11 + 0x38))();
    *(undefined1 *)(param_1 + 0x310) = uVar4;
  }
  if ((*(char *)(param_1 + 0x310) == '\0') || (cVar3 != '\0')) {
    bVar12 = 0;
  }
  else {
    bVar12 = 0x20;
  }
  local_348 = *(undefined4 *)(param_2 + 0x10);
  bVar13 = bVar12 | 0x40;
  if (*(char *)(param_1 + 0x35d) == '\0') {
    bVar13 = bVar12;
  }
  bVar12 = bVar13 | 4;
  if (*(char *)(param_1 + 0x359) != '\0') {
    bVar12 = bVar13;
  }
  bVar13 = bVar12 | 0x80;
  if (*(char *)(param_1 + 0x35a) == '\0') {
    bVar13 = bVar12;
  }
  if (*(char *)(param_1 + 0x35b) == '\0') {
    bVar13 = bVar13 | 1;
  }
  else if (*(char *)(param_1 + 0x35e) != '\0') {
    bVar13 = bVar13 | 2;
  }
  plVar11 = *(longlong **)(param_1 + 0x2f8);
  plVar14 = (longlong *)0x0;
  plVar15 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar16 = iVar6 == 0;
    if (bVar16) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar15 = (longlong *)0x0, !bVar16) {
      LOCK();
      bVar16 = iVar6 == (int)plVar11[1];
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar16) {
        plVar15 = plVar11;
        if ((plVar11 != (longlong *)0x0) &&
           (plVar14 = *(longlong **)(param_1 + 0x2f0), plVar14 != (longlong *)0x0)) {
          local_368 = (undefined8 *)CONCAT71(local_368._1_7_,param_8);
          local_370 = param_7;
          local_378 = CONCAT44(local_378._4_4_,param_6);
          (**(code **)(*plVar14 + 8))(plVar14,param_3,local_340,local_350);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if (*(char *)(param_1 + 0x358) == '\0') {
    if ((plVar14 == (longlong *)0x0) ||
       (lVar8 = (**(code **)(*plVar14 + 0x18))(plVar14), lVar8 == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1469f5668) &&
         (_Init_thread_header(&DAT_1469f5668), DAT_1469f5668 == -1)) {
        FSlateColorBrush::FSlateColorBrush(&DAT_1469f55e0,&DAT_1464aa734);
        atexit(`SViewport::OnPaint'::`29'::_dynamic_atexit_destructor_for__BlackBrush__);
        _Init_thread_footer(&DAT_1469f5668);
      }
      if (DAT_1469f5610 == '\0') {
        puVar9 = (undefined8 *)&DAT_1469f5600;
      }
      else {
        puVar9 = DAT_1469f5618;
        if (DAT_1469f5610 != '\x01') {
          if (DAT_1469f5610 == '\x03') {
            puVar9 = param_7 + 4;
          }
          else {
            puVar9 = param_7 + 2;
          }
        }
      }
      local_268 = *puVar9;
      uStack_260 = puVar9[1];
      local_194 = param_3[4];
      local_190 = param_3[2];
      local_198 = param_3[3];
      local_164 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_164 & 0xfc;
      local_370 = &local_268;
      local_184 = *param_3;
      local_180 = param_3[1];
      local_17c = param_3[7];
      uStack_178 = param_3[8];
      uStack_174 = param_3[9];
      uStack_170 = param_3[10];
      local_16c = *(undefined8 *)(param_3 + 0xb);
      local_18c = 0;
      local_378 = CONCAT71(local_378._1_7_,bVar13);
      FSlateDrawElement::MakeBox(local_350,param_6,&local_198,&DAT_1469f55e0);
    }
    else {
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      local_1d0 = param_3[3];
      local_1cc = param_3[4];
      local_1c8 = param_3[2];
      local_19c = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_19c & 0xfc;
      local_1bc = *param_3;
      local_1b8 = param_3[1];
      local_1b4 = param_3[7];
      uStack_1b0 = param_3[8];
      uStack_1ac = param_3[9];
      uStack_1a8 = param_3[10];
      local_1a4 = *(undefined8 *)(param_3 + 0xb);
      local_370 = param_7;
      local_1c4 = 0;
      local_378 = CONCAT71(local_378._1_7_,bVar13);
      local_2a0 = plVar14;
      local_298 = plVar15;
      FUN_14184ab60(local_350,param_6,&local_1d0,&local_2a0);
    }
  }
  lVar8 = local_338;
  local_360 = (undefined1)local_358;
  local_368 = param_7;
  local_370 = (undefined8 *)CONCAT44(local_370._4_4_,param_6);
  local_378 = local_350;
  uVar7 = FUN_14184ebd0(param_1,local_338,param_3,local_340);
  local_358 = uVar7;
  if ((plVar14 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar14 + 0x50))(plVar14), cVar3 != '\0')) {
    (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,&local_318);
    local_308 = (ushort)local_358 & 0xfe00;
    local_2f8 = local_318;
    uStack_2f4 = uStack_314;
    uStack_2f0 = local_318;
    uStack_2ec = uStack_314;
    local_128[0] = 0;
    local_310 = &PTR__scalar_deleting_destructor__144d565c0;
    local_2e0 = local_128;
    local_2e8 = (undefined4)DAT_1468b5d88;
    local_2c0 = 10;
    local_2e4 = DAT_1468b5d88._4_4_;
    local_128[1] = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_306 = 0;
    local_304 = 0;
    local_300 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2bc = 0;
    local_2b8 = 0x3f800000;
    local_2b4 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    (**(code **)(*plVar14 + 0x40))(plVar14,local_258,param_3,&local_310);
    FPointerEvent::~FPointerEvent(&local_310);
    local_e0 = 0;
    if (local_e8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_128,0);
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_128[0] != 0) {
      FMemory::Free();
    }
    plVar11 = DAT_1469eb140;
    lVar8 = *DAT_1469eb140;
    puVar9 = (undefined8 *)FName::FName(local_280,L"SoftwareCursor_Grab",1);
    lVar8 = (**(code **)(lVar8 + 0x40))(plVar11,*puVar9,0);
    plVar11 = DAT_1469eb140;
    if (local_220 == 7) {
      lVar8 = *DAT_1469eb140;
      puVar9 = (undefined8 *)FName::FName(local_278,L"SoftwareCursor_CardinalCross",1);
      lVar8 = (**(code **)(lVar8 + 0x40))(plVar11,*puVar9,0);
    }
    fVar18 = (float)param_3[2];
    pfVar10 = (float *)(**(code **)(*plVar14 + 0x58))(plVar14,local_270);
    local_14c = *(float *)(lVar8 + 8);
    local_158 = (float)param_3[2];
    local_148 = *(float *)(lVar8 + 0xc);
    fStack_328 = (float)param_3[9];
    local_330 = (float)param_3[7];
    fStack_324 = (float)param_3[10];
    uStack_13c = *(undefined8 *)(param_3 + 9);
    fStack_32c = (float)param_3[8];
    local_144 = *(undefined8 *)(param_3 + 7);
    local_154 = 0;
    fVar17 = (1.0 / fVar18) * *pfVar10 - local_14c * 0.5;
    local_12c = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_12c & 0xfc;
    fVar18 = (1.0 / fVar18) * pfVar10[1] - local_148 * 0.5;
    local_370 = (undefined8 *)&DAT_1464aa6c0;
    local_378 = local_378 & 0xffffffffffffff00;
    local_160 = local_158 * fVar17 + (float)param_3[3];
    local_15c = local_158 * fVar18 + (float)param_3[4];
    local_134 = CONCAT44(fStack_32c * fVar17 + fStack_324 * fVar18 + (float)param_3[0xc],
                         local_330 * fVar17 + fStack_328 * fVar18 + (float)param_3[0xb]);
    FSlateDrawElement::MakeBox(local_350,param_6 + 1,&local_160,lVar8);
    FCursorReply::~FCursorReply(local_258);
    lVar8 = local_338;
    uVar7 = local_358;
  }
  lVar2 = *(longlong *)(param_1 + 0x348);
  if (lVar2 != 0) {
    local_288 = *(longlong *)(param_1 + 0x350);
    if (local_288 != 0) {
      LOCK();
      *(int *)(local_288 + 8) = *(int *)(local_288 + 8) + 1;
      UNLOCK();
    }
    local_290 = lVar2;
    FUN_141846c00(lVar8,local_218,&local_290,local_348);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_1e0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (local_1e0 != (longlong *)0x0)) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 14199bf40 FUN_14199bf40 body=1065 status=ok
// SIG undefined FUN_14199bf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14199bf40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 *local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_bc;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(byte *)(param_1 + 0x234) & 1) != 0) {
    local_f8 = *param_7;
    iVar5 = 0;
    _uStack_f0 = CONCAT44(*(undefined4 *)(param_1 + 0x238),(int)param_7[1]);
    if (0 < *(int *)(param_1 + 0x210)) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x208);
        puVar2 = *(undefined8 **)(lVar4 + 0x10 + lVar1);
        if (puVar2 != (undefined8 *)0x0) {
          local_e0 = *(float *)(param_3 + 8);
          local_d4 = *(float *)(lVar4 + 0x98 + lVar1);
          fStack_110 = *(float *)(param_3 + 0x24);
          fStack_114 = *(float *)(param_3 + 0x20);
          fStack_10c = *(float *)(param_3 + 0x28);
          local_dc = 0;
          local_b4 = (*(byte *)(param_3 + 0x34) & 1) * '\x02' | local_b4 & 0xfc;
          fVar7 = *(float *)(lVar4 + 0x88 + lVar1) - local_d4 * 0.5;
          fVar6 = *(float *)(lVar4 + 0x8c + lVar1) - *(float *)(lVar4 + 0x9c + lVar1) * 0.5;
          local_118 = *(float *)(param_3 + 0x1c);
          local_d0 = *(undefined4 *)(lVar4 + 0x9c + lVar1);
          local_e8 = local_e0 * fVar7 + *(float *)(param_3 + 0xc);
          local_e4 = local_e0 * fVar6 + *(float *)(param_3 + 0x10);
          local_bc = CONCAT44(fStack_10c * fVar6 + fStack_114 * fVar7 + *(float *)(param_3 + 0x30),
                              fStack_110 * fVar6 + local_118 * fVar7 + *(float *)(param_3 + 0x2c));
          local_cc = local_118;
          fStack_c8 = fStack_114;
          fStack_c4 = fStack_110;
          fStack_c0 = fStack_10c;
          uVar3 = (**(code **)*puVar2)();
          local_120 = &local_f8;
          local_128 = 0;
          FSlateDrawElement::MakeBox(param_5,param_6,&local_e8,uVar3);
          param_6 = param_6 + 1;
        }
        if (*(undefined8 **)(lVar4 + lVar1) != (undefined8 *)0x0) {
          local_108 = *(float *)(param_3 + 0x1c);
          local_d4 = *(float *)(lVar4 + 0xa0 + lVar1);
          local_e0 = *(float *)(param_3 + 8);
          fStack_100 = *(float *)(param_3 + 0x24);
          fStack_104 = *(float *)(param_3 + 0x20);
          fStack_fc = *(float *)(param_3 + 0x28);
          local_dc = 0;
          local_b4 = (*(byte *)(param_3 + 0x34) & 1) * '\x02' | local_b4 & 0xfc;
          fVar7 = (*(float *)(lVar4 + 0x88 + lVar1) + *(float *)(lVar4 + 0x80 + lVar1)) -
                  local_d4 * 0.5;
          fVar6 = (*(float *)(lVar4 + 0x8c + lVar1) + *(float *)(lVar4 + 0x84 + lVar1)) -
                  *(float *)(lVar4 + 0xa4 + lVar1) * 0.5;
          local_e8 = local_e0 * fVar7 + *(float *)(param_3 + 0xc);
          local_e4 = local_e0 * fVar6 + *(float *)(param_3 + 0x10);
          local_d0 = *(undefined4 *)(lVar4 + 0xa4 + lVar1);
          local_bc = CONCAT44(fStack_fc * fVar6 + fStack_104 * fVar7 + *(float *)(param_3 + 0x30),
                              local_108 * fVar7 + fStack_100 * fVar6 + *(float *)(param_3 + 0x2c));
          local_cc = local_108;
          fStack_c8 = fStack_104;
          fStack_c4 = fStack_100;
          fStack_c0 = fStack_fc;
          uVar3 = (**(code **)**(undefined8 **)(lVar4 + lVar1))();
          local_120 = &local_f8;
          local_128 = 0;
          FSlateDrawElement::MakeBox(param_5,param_6,&local_e8,uVar3);
          param_6 = param_6 + 1;
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 0xd0;
      } while (iVar5 < *(int *)(param_1 + 0x210));
    }
  }
  return param_6;
}



// FUNCTION 14199c370 OnPaint body=163 status=ok
// SIG undefined OnPaint(void)

ulonglong SVirtualWindow::OnPaint
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x601) != '\0') {
    FSlateWindowElementList::BeginDeferredGroup(param_5);
  }
  uVar1 = FUN_14184ebd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x601) != '\0') {
    FSlateWindowElementList::EndDeferredGroup(param_5);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14199c420 FUN_14199c420 body=496 status=ok
// SIG undefined FUN_14199c420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14199c420(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  int local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
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
  undefined1 local_190 [8];
  undefined1 local_188 [288];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_190[0] = DAT_1464b9ee8;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_190);
  if (0 < (int)local_60) {
    local_210 = *(undefined4 *)(param_2 + 0x28);
    local_218 = *(undefined8 *)(param_2 + 0x20);
    puVar6 = local_188;
    if (local_68 != (undefined1 *)0x0) {
      puVar6 = local_68;
    }
    FPaintArgs::FPaintArgs
              (local_1e8,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
    local_1d8 = *(undefined4 *)(param_2 + 0x10);
    local_1d4 = *(undefined1 *)(param_2 + 0x14);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x38);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
    local_1f8 = (undefined4)uVar3;
    uStack_1f4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_1f0 = (undefined4)lVar4;
    uStack_1ec = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_1a0 = local_1f8;
    uStack_19c = uStack_1f4;
    uStack_198 = uStack_1f0;
    uStack_194 = uStack_1ec;
    local_1b8 = local_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = uStack_1f0;
    uStack_1ac = uStack_1ec;
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
    local_1a8 = *(undefined8 *)(param_2 + 0x40);
    local_1bc = *(undefined1 *)(param_2 + 0x2c);
    local_1bb = *(undefined1 *)(param_2 + 0x2d);
    uVar3 = *(undefined8 *)(puVar6 + 0x38);
    local_200 = SWidget::ShouldBeEnabled(param_1,param_8);
    local_210 = param_6 + 1;
    local_208 = param_7;
    local_218 = param_5;
    param_6 = FUN_14184f6c0(uVar3,local_1e8,puVar6,param_4);
    plVar5 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
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
  }
  FUN_140456b10(local_188);
  return param_6;
}



// FUNCTION 14199c610 OnPreviewMouseButtonDown body=246 status=ok
// SIG undefined OnPreviewMouseButtonDown(void)

undefined1 *
SScrollBox::OnPreviewMouseButtonDown
          (longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 local_res10 [2];
  
  if ((*(char *)(param_4 + 0x5c) != '\0') && (*(char *)(param_1 + 800) == '\0')) {
    FInertialScrollManager::ClearScrollVelocity(param_1 + 0x330);
    *(undefined8 *)(param_1 + 0x324) = 0;
    if (local_res10 != (undefined4 *)(param_1 + 0x31c)) {
      *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_4 + 0x50);
      *(undefined1 *)(param_1 + 800) = 1;
    }
    FUN_1418475e0(param_1,CONCAT71((int7)((ulonglong)local_res10 >> 8),1));
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



// FUNCTION 14199c710 FUN_14199c710 body=189 status=ok
// SIG undefined FUN_14199c710(void)

undefined1 * FUN_14199c710(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x2f8);
  plVar5 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar6[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar6 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = (longlong *)0x0, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar6[1];
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar6;
        if ((plVar6 != (longlong *)0x0) &&
           (plVar2 = *(longlong **)(param_1 + 0x2f0), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0xf8))(plVar2,param_2);
          goto LAB_14199c76d;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0x100;
  plVar6 = plVar5;
  if (plVar5 != (longlong *)0x0) {
LAB_14199c76d:
    LOCK();
    plVar5 = plVar6 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_2;
}



// FUNCTION 14199c7f0 FUN_14199c7f0 body=291 status=ok
// SIG undefined FUN_14199c7f0(void)

undefined1 * FUN_14199c7f0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res8;
  undefined1 uStackX_9;
  undefined2 uStackX_a;
  uint uStackX_c;
  undefined1 local_res10;
  undefined1 local_res11;
  
  plVar8 = (longlong *)0x0;
  local_res8 = 0;
  uStackX_9 = 0;
  uStackX_a = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar8, !bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar8 = *(longlong **)(param_1 + 0x2f0);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      puVar6 = (undefined1 *)(**(code **)(*plVar8 + 0xe8))(plVar8,&local_res10);
      bVar3 = true;
      bVar9 = true;
      goto LAB_14199c891;
    }
  }
  uStackX_9 = 0;
  puVar6 = &local_res8;
  plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  bVar3 = false;
  bVar9 = false;
LAB_14199c891:
  param_2[1] = 0;
  if (puVar6[1] != '\0') {
    *param_2 = *puVar6;
    param_2[1] = 1;
  }
  if (bVar9) {
    local_res11 = 0;
  }
  if ((bVar3) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14199c920 FUN_14199c920 body=356 status=ok
// SIG undefined FUN_14199c920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14199c920(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_3 != 1) {
    plVar5 = param_1 + 0x74;
    if (*param_2 != *plVar5) {
      FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x6e,0);
      plVar3 = (longlong *)param_2[1];
      lVar4 = *param_2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_68 = lVar4;
      plStack_60 = plVar3;
      if (&local_68 != plVar5) {
        local_68 = *plVar5;
        plStack_60 = (longlong *)param_1[0x75];
        *plVar5 = lVar4;
        param_1[0x75] = (longlong)plVar3;
        local_48 = lVar4;
        plStack_40 = plVar3;
      }
      plVar5 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      local_58 = *param_2;
      local_50 = param_2[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_141981eb0(param_1 + 0x72,&local_58,param_3);
    }
    (**(code **)(*param_1 + 0x210))(param_1,0,1,0);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 14199cab0 FUN_14199cab0 body=410 status=ok
// SIG undefined FUN_14199cab0(void)

undefined1 * FUN_14199cab0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined1 local_resc;
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
  
  FGeometry::operator=(param_1 + 0x394,param_3);
  local_res8 = *(undefined4 *)(param_4 + 0x50);
  local_resc = 1;
  cVar1 = FUN_141846180(param_1,*(undefined4 *)(param_4 + 0xc),&local_res8);
  if (cVar1 == '\0') {
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
    *(undefined8 *)(param_1 + 0x324) = 0;
    if (*(char *)(param_1 + 800) != '\0') {
      *(undefined1 *)(param_1 + 800) = 0;
    }
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0x7f;
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x218))();
    FUN_1418475e0(param_1,1);
    FUN_14196ce50(param_1);
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
    uVar2 = FUN_1406a1ac0(local_c8);
    FUN_140438260(param_2,uVar2);
    FUN_140438c20(local_c8);
  }
  return param_2;
}



// FUNCTION 14199cc50 FUN_14199cc50 body=413 status=ok
// SIG undefined FUN_14199cc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14199cc50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xd0))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_14199cd65;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_14199cd65:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14199cdf0 FUN_14199cdf0 body=419 status=ok
// SIG undefined FUN_14199cdf0(void)

undefined1 * FUN_14199cdf0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  
  lVar3 = 0;
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar1 = *(longlong *)(param_1 + 0x208);
    do {
      if (*(int *)(lVar1 + 0xb8) == *(int *)(param_4 + 0x50)) {
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined4 *)(lVar1 + 0xb8) = 0xffffffff;
        *(undefined1 *)(lVar1 + 200) = 1;
        if (*(char *)(lVar1 + 0xca) == '\0') {
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
          uVar2 = FUN_1406a1ac0(local_c8);
          FUN_140438260(param_2,uVar2);
          FUN_140438c20(local_c8);
          return param_2;
        }
        *(undefined1 *)(lVar1 + 0xca) = 0;
        break;
      }
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + 0xd0;
    } while (lVar3 < *(int *)(param_1 + 0x210));
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



// FUNCTION 14199cfa0 FUN_14199cfa0 body=413 status=ok
// SIG undefined FUN_14199cfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14199cfa0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xd8))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_14199d0b5;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_14199d0b5:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14199d140 FUN_14199d140 body=413 status=ok
// SIG undefined FUN_14199d140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14199d140(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 200))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_14199d255;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_14199d255:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14199d2e0 FUN_14199d2e0 body=494 status=ok
// SIG undefined FUN_14199d2e0(void)

undefined1 * FUN_14199d2e0(longlong *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  ulonglong uVar3;
  
  uVar3 = 0;
  fVar5 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
  local_resc = (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
               *(float *)(param_3 + 0x1c) * fVar5 -
               (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
               *(float *)(param_3 + 0x20) * fVar5;
  local_res8 = (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
               *(float *)(param_3 + 0x28) * fVar5 -
               (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
               *(float *)(param_3 + 0x24) * fVar5;
  uVar4 = uVar3;
  if (0 < (int)param_1[0x42]) {
    do {
      if (*(int *)(uVar4 + 0xb8 + param_1[0x41]) == *(int *)(param_4 + 0x50)) {
        if (*(char *)(uVar4 + 0xca + param_1[0x41]) != '\0') break;
        cVar1 = (**(code **)(*param_1 + 0x210))(param_1,uVar3,&local_res8,param_3);
        if (cVar1 != '\0') {
          *param_2 = 1;
          goto LAB_14199d434;
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 0xd0;
    } while ((int)uVar2 < (int)param_1[0x42]);
  }
  *param_2 = 0;
LAB_14199d434:
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



// FUNCTION 14199d4d0 FUN_14199d4d0 body=413 status=ok
// SIG undefined FUN_14199d4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14199d4d0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  local_1c8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0xc0))(plVar9,local_f8);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_14199d5e5;
    }
  }
  local_104 = local_104 & 0xffffff00;
  puVar7 = local_1b8;
  plVar8 = (longlong *)((ulonglong)uStack_1c4 << 0x20);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0x20702;
LAB_14199d5e5:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1b8);
  }
  if (bVar3) {
    FUN_140438c20(local_f8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14199d670 FUN_14199d670 body=1184 status=ok
// SIG undefined FUN_14199d670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14199d670(longlong *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_198 [32];
  float local_178;
  float fStack_174;
  undefined8 local_170;
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint local_94;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar9 = 0;
  fVar14 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                 *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
  fVar15 = *(float *)(param_3 + 0x28) * fVar14 *
           (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) -
           *(float *)(param_3 + 0x24) * fVar14 *
           (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30));
  fVar14 = *(float *)(param_3 + 0x1c) * fVar14 *
           (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) -
           *(float *)(param_3 + 0x20) * fVar14 *
           (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c));
  uVar12 = uVar9;
  local_178 = fVar15;
  fStack_174 = fVar14;
  if (0 < (int)param_1[0x42]) {
    do {
      lVar4 = param_1[0x41];
      if (*(int *)(uVar9 + 0xb8 + lVar4) == -1) {
        fVar2 = *(float *)(uVar9 + 0x90 + lVar4);
        fVar13 = *(float *)(uVar9 + 0xa8 + lVar4) * 0.5;
        if ((fVar2 - fVar13 <= fVar15) && (fVar15 <= fVar2 + fVar13)) {
          fVar2 = *(float *)(uVar9 + 0x94 + lVar4);
          fVar13 = *(float *)(uVar9 + 0xac + lVar4) * 0.5;
          if ((fVar2 - fVar13 <= fVar14) && (fVar14 <= fVar2 + fVar13)) {
            SVirtualJoystick::AlignBoxIntoScreen(param_1,&local_178,lVar4 + 0x98 + uVar9,param_3);
            *(undefined4 *)(uVar9 + 0xb8 + lVar4) = *(undefined4 *)(param_4 + 0x50);
            if (*(float *)(param_1 + 0x45) != 0.0) {
              *(undefined1 *)(uVar9 + 0xca + lVar4) = 1;
              *(undefined4 *)(uVar9 + 0xbc + lVar4) = 0;
              *(ulonglong *)(uVar9 + 0xc0 + lVar4) = CONCAT44(fStack_174,local_178);
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
              goto LAB_14199d8ef;
            }
            *(int *)(param_1 + 0x47) = (int)param_1[0x43];
            if ((*(byte *)((longlong)param_1 + 0x234) & 4) == 0) {
              *(ulonglong *)(uVar9 + 0x88 + lVar4) = CONCAT44(fStack_174,local_178);
            }
            cVar6 = (**(code **)(*param_1 + 0x210))(param_1,uVar12,&local_178,param_3);
            fVar14 = fStack_174;
            fVar15 = local_178;
            if (cVar6 != '\0') {
              puVar7 = (undefined8 *)
                       TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_160);
              plVar5 = (longlong *)puVar7[1];
              uVar8 = *puVar7;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              if (local_158 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_158 + 1;
                lVar4 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_158)(local_158);
                  LOCK();
                  piVar1 = (int *)((longlong)local_158 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_158 + 8))(local_158,1);
                  }
                }
              }
              plVar10 = plVar5 + 1;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)plVar10 = (int)*plVar10 + 1;
                UNLOCK();
              }
              local_94 = local_94 & 0xffffff00;
              local_148[0] = 1;
              local_140 = 0;
              local_138 = 0;
              local_128 = 0;
              local_120 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0x20702;
              local_170 = uVar8;
              local_168 = plVar5;
              uVar8 = FUN_140693ff0(local_148,&local_170);
              FUN_140438260(param_2,uVar8);
              FUN_140438c20(local_148);
              if (plVar5 == (longlong *)0x0) {
                return param_2;
              }
              LOCK();
              lVar4 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar4 != 1) {
                return param_2;
              }
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 != 1) {
                return param_2;
              }
              (**(code **)(*plVar5 + 8))(plVar5,1);
              return param_2;
            }
          }
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar9 = uVar9 + 0xd0;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_1[0x42]);
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
LAB_14199d8ef:
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14199db10 FUN_14199db10 body=423 status=ok
// SIG undefined FUN_14199db10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14199db10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  uint uStack_1b4;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar9 = (longlong *)0x0;
  local_1b8 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
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
      puVar7 = (undefined1 *)(**(code **)(*plVar9 + 0x130))(plVar9,local_e8,param_3);
      bVar4 = true;
      bVar3 = true;
      bVar10 = false;
      goto LAB_14199dc28;
    }
  }
  local_f4 = local_f4 & 0xffffff00;
  puVar7 = local_1a8;
  plVar8 = (longlong *)((ulonglong)uStack_1b4 << 0x20);
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  bVar4 = false;
  bVar3 = false;
  bVar10 = true;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0x20702;
LAB_14199dc28:
  FReply::FReply(param_2,puVar7);
  if (bVar10) {
    FUN_140438c20(local_1a8);
  }
  if (bVar3) {
    FUN_140438c20(local_e8);
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14199dcc0 FUN_14199dcc0 body=351 status=ok
// SIG undefined FUN_14199dcc0(void)

undefined8 FUN_14199dcc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uStackX_c;
  longlong local_28;
  longlong *local_20;
  
  plVar8 = DAT_1469eb220;
  local_28 = DAT_1469eb218;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
    bVar6 = false;
    bVar5 = true;
    plVar9 = plVar8;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
    bVar6 = true;
    bVar5 = false;
    local_28 = lVar4;
    plVar9 = plVar7;
  }
  lVar4 = *(longlong *)(param_1 + 0x5f0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_20 = plVar9;
  FUN_14196cbb0(lVar4 + 0x208,&local_28);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if ((bVar5) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if ((bVar6) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return 1;
}



// FUNCTION 14199de20 PasteTextFromClipboard body=125 status=ok
// SIG undefined PasteTextFromClipboard(void)

void FSlateEditableTextLayout::PasteTextFromClipboard(undefined8 *param_1)

{
  char cVar1;
  longlong local_18;
  undefined8 local_10;
  
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar1 == '\0') {
    FUN_14196cd00(param_1);
    FUN_141980ac0(param_1);
    local_18 = 0;
    local_10 = 0;
    FWindowsPlatformApplicationMisc::ClipboardPaste(&local_18);
    if (((int)local_10 != 0) && (0 < (int)local_10 + -1)) {
      FUN_14198b050(param_1,&local_18);
      (**(code **)(*(longlong *)param_1[9] + 8))();
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    EndEditTransaction(param_1);
  }
  return;
}



// FUNCTION 14199dea0 PushTransformedClip body=631 status=ok
// SIG undefined PushTransformedClip(void)

undefined8
PushTransformedClip(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                   float *param_5)

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
  float local_res10;
  float fStackX_14;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c0;
  float local_bc;
  byte local_b8;
  
  fVar1 = param_2[0xb];
  local_res10 = (float)param_3;
  local_e8 = (float)param_4;
  fVar4 = *param_2 - local_res10 * 2.0;
  fStack_e4 = (float)((ulonglong)param_4 >> 0x20);
  fStackX_14 = (float)((ulonglong)param_3 >> 0x20);
  fVar8 = param_2[1] - fStackX_14 * 2.0;
  fVar2 = (local_e8 + param_5[2]) * fVar4 + local_res10;
  local_res10 = (local_e8 - *param_5) * fVar4 + local_res10;
  fVar5 = param_2[7] * fVar2;
  fVar4 = (fStack_e4 + param_5[3]) * fVar8 + fStackX_14;
  fVar2 = param_2[8] * fVar2;
  fStackX_14 = (fStack_e4 - param_5[1]) * fVar8 + fStackX_14;
  fVar7 = param_2[7] * local_res10;
  fVar3 = param_2[10] * fVar4;
  fVar4 = param_2[9] * fVar4;
  fVar6 = param_2[8] * local_res10;
  fVar9 = param_2[10] * fStackX_14;
  param_5._0_4_ = fVar5 + fVar4 + fVar1;
  local_dc = param_2[0xc];
  param_5._4_4_ = fVar2 + fVar3 + local_dc;
  fVar8 = param_2[9] * fStackX_14;
  _local_res10 = CONCAT44(fVar3 + fVar6 + local_dc,fVar4 + fVar7 + fVar1);
  local_e0 = fVar1 + fVar8 + fVar7;
  _local_e8 = CONCAT44(fVar2 + fVar9 + local_dc,fVar5 + fVar8 + fVar1);
  local_dc = local_dc + fVar9 + fVar6;
  FSlateClippingZone::FSlateClippingZone(&local_d8,&local_e0,&local_e8,&local_res10,&param_5);
  if (((local_b8 & 1) != 0) &&
     ((ABS(local_d8 - local_c0) <= 1e-08 || (ABS(local_d4 - local_bc) <= 1e-08)))) {
    return 0;
  }
  FSlateWindowElementList::PushClip(param_1,&local_d8);
  return 1;
}



// FUNCTION 14199e120 PushUndoState body=209 status=ok
// SIG undefined PushUndoState(void)

void FSlateEditableTextLayout::PushUndoState(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x6a8);
  if (iVar2 != -1) {
    TArray<SlateEditableTextTypes::FUndoState,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 0x698,iVar2,*(int *)(param_1 + 0x6a0) - iVar2,1);
    *(undefined4 *)(param_1 + 0x6a8) = 0xffffffff;
  }
  plVar1 = (longlong *)(param_1 + 0x698);
  iVar2 = *(int *)(param_1 + 0x6a0);
  *(int *)(param_1 + 0x6a0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6a4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  lVar6 = (longlong)iVar2 * 0x40 + *plVar1;
  FText::FText(lVar6,param_2);
  *(undefined1 *)(lVar6 + 0x20) = 0;
  if (*(char *)(param_2 + 0x20) != '\0') {
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined1 *)(lVar6 + 0x20) = 1;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(lVar6 + 0x2c) = uVar3;
  *(undefined4 *)(lVar6 + 0x30) = uVar4;
  *(undefined4 *)(lVar6 + 0x34) = uVar5;
  *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  if (99 < *(int *)(param_1 + 0x6a0)) {
    TArray<SlateEditableTextTypes::FUndoState,FDefaultAllocator>::RemoveAtImpl(plVar1,0,1,1);
  }
  return;
}



// FUNCTION 14199e200 FUN_14199e200 body=51 status=ok
// SIG undefined FUN_14199e200(void)

void FUN_14199e200(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  if (*(char *)(param_1 + 0x438) != '\0') {
    uVar1 = TAttribute<FText>::Get();
  }
  FUN_14199e240(param_1,uVar1,0);
  return;
}



// FUNCTION 14199e240 FUN_14199e240 body=680 status=ok
// SIG undefined FUN_14199e240(void)

char FUN_14199e240(undefined8 *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  longlong local_98 [2];
  char local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar9 = '\0';
  cVar7 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_88[1] = 1;
  local_80 = 0;
  local_78 = 0;
  local_88[0] = cVar7;
  FSlateTextLayout::SetIsPassword(param_1[9],local_88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_80);
  if (param_2 != 0) {
    if (param_3 == '\0') {
      cVar8 = FTextSnapshot::IdenticalTo(param_1 + 0x8a,param_2);
      if (cVar8 != '\0') goto LAB_14199e398;
      cVar8 = FTextSnapshot::IsDisplayStringEqualTo(param_1 + 0x8a,param_2);
      if (cVar8 == '\0') goto LAB_14199e2eb;
    }
    else {
LAB_14199e2eb:
      cVar9 = FUN_1419a1d70(param_1,param_2,1);
    }
    puVar10 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_58,param_2);
    if (param_1 + 0x8a != puVar10) {
      param_1[0x8a] = *puVar10;
      *puVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8b,puVar10 + 1);
    }
    *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(puVar10 + 2);
    *(undefined2 *)((longlong)param_1 + 0x462) = *(undefined2 *)((longlong)puVar10 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)puVar10 + 0x14);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (cVar9 != '\0') goto LAB_14199e49c;
  }
LAB_14199e398:
  cVar8 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
  if ((cVar8 != '\0') || (cVar7 != *(char *)(param_1 + 0x8d))) {
    if (param_2 == 0) {
      local_98[0] = 0;
      local_98[1] = 0;
      (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_98,param_1[9]);
      FText::FromString(local_70,local_98);
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      puVar11 = local_70;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puVar11 = (undefined1 *)FText::FText(local_40,param_2);
      bVar5 = true;
      bVar4 = false;
    }
    FUN_141983270(param_1,puVar11);
    if (bVar4) {
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
    if ((bVar5) && (local_38 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    cVar9 = '\x01';
  }
LAB_14199e49c:
  *(char *)(param_1 + 0x8d) = cVar7;
  if (cVar9 != '\0') {
    (**(code **)(*(longlong *)param_1[9] + 8))();
  }
  return cVar9;
}



// FUNCTION 14199e4f0 FUN_14199e4f0 body=563 status=ok
// SIG undefined FUN_14199e4f0(void)

void FUN_14199e4f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  float local_res8;
  float local_res10;
  float local_res18;
  float local_res1c;
  undefined1 local_res20 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong *local_30;
  
  plVar11 = (longlong *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar6 != '\0')) {
    plVar9 = plVar11;
    if (*(int *)(param_1 + 0x318) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x310);
    }
    uVar7 = (**(code **)(*plVar9 + 0x38))();
    *(undefined4 *)(param_1 + 0x308) = uVar7;
  }
  if (*(int *)(param_1 + 0x308) == 6) {
    FUN_14189cb10(DAT_1469f4590,&local_38);
    if (local_38 != 0) {
      plVar9 = *(longlong **)(local_38 + 0x2f0);
      plVar2 = *(longlong **)(local_38 + 0x2f8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        LOCK();
        iVar8 = (int)plVar2[1];
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(plVar2 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar10 = plVar11, plVar12 = plVar11, !bVar13) {
          LOCK();
          bVar13 = iVar8 == (int)plVar2[1];
          if (bVar13) {
            *(int *)(plVar2 + 1) = iVar8 + 1;
          }
          UNLOCK();
          plVar10 = plVar2;
          plVar12 = plVar9;
          if (bVar13) break;
          LOCK();
          iVar8 = (int)plVar2[1];
          bVar13 = iVar8 == 0;
          if (bVar13) {
            *(int *)(plVar2 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,local_res20);
          local_res18 = (float)local_res20._0_4_;
          local_res1c = (float)local_res20._4_4_;
          FUN_14183d4c0(DAT_1469f4590,&local_48,&local_res18);
          local_res8 = (float)local_res20._0_4_;
          local_res10 = (float)local_res20._4_4_;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar10 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_30 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  fVar4 = local_48._4_4_;
  if (local_48._4_4_ <= uStack_40._4_4_) {
    fVar4 = uStack_40._4_4_;
  }
  if ((float)local_48 <= (float)uStack_40) {
    local_48._0_4_ = (float)uStack_40;
  }
  fVar3 = (float)local_48 / local_res8;
  if ((float)local_48 / local_res8 <= fVar4 / local_res10) {
    fVar3 = fVar4 / local_res10;
  }
  *(float *)(param_1 + 0x350) = 1.0 - fVar3;
  return;
}



// FUNCTION 14199e730 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,SWrapBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14199e86f;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_14199e86f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x1c + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[6] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[5] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 14199e940 FUN_14199e940 body=191 status=ok
// SIG undefined FUN_14199e940(void)

void FUN_14199e940(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x228) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x218);
    lVar3 = *plVar1;
    lVar2 = (longlong)param_2 * 8;
    lVar4 = *(longlong *)(lVar3 + lVar2);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x28);
    FSlotBase::~FSlotBase(lVar4);
    FMemory::Free(*(undefined8 *)(lVar3 + lVar2));
    iVar5 = *(int *)(param_1 + 0x220);
    iVar6 = (iVar5 - param_2) + -1;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar2),(void *)(*plVar1 + (longlong)(param_2 + 1) * 8),
                 (longlong)iVar6 << 3);
      iVar5 = *(int *)(param_1 + 0x220);
    }
    *(int *)(param_1 + 0x220) = iVar5 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 14199ea00 RemoveAtImpl body=258 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<SlateEditableTextTypes::FUndoState,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  if (param_3 != 0) {
    pcVar7 = (char *)(*param_1 + 0x20 + (longlong)param_2 * 0x40);
    iVar6 = param_3;
    do {
      if (*pcVar7 != '\0') {
        *pcVar7 = '\0';
      }
      plVar3 = *(longlong **)(pcVar7 + -0x18);
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
      pcVar7 = pcVar7 + 0x40;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar5 << 6);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14199eb10 FUN_14199eb10 body=277 status=ok
// SIG undefined FUN_14199eb10(void)

int FUN_14199eb10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar5 = 0;
  iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + lVar7) + 0x10)) {
        if (*(char *)(param_1 + 0x228) != '\0') {
          return iVar5;
        }
        plVar6 = (longlong *)(param_1 + 0x218);
        lVar7 = (longlong)iVar5 * 8;
        lVar1 = *plVar6;
        lVar2 = *(longlong *)(lVar1 + lVar7);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x50);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x30);
        FSlotBase::~FSlotBase(lVar2);
        FMemory::Free(*(undefined8 *)(lVar1 + lVar7));
        iVar3 = *(int *)(param_1 + 0x220);
        iVar4 = (iVar3 - iVar5) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar6 + lVar7),(void *)(*plVar6 + (longlong)(iVar5 + 1) * 8),
                     (longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x220);
        }
        *(int *)(param_1 + 0x220) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
      iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar5 < iVar3);
  }
  return -1;
}



// FUNCTION 14199ec30 FUN_14199ec30 body=317 status=ok
// SIG undefined FUN_14199ec30(void)

int FUN_14199ec30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FUN_1418475e0(param_1,1);
  iVar5 = 0;
  iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + lVar7) + 0x10)) {
        if (*(char *)(param_1 + 0x228) != '\0') {
          return iVar5;
        }
        plVar6 = (longlong *)(param_1 + 0x218);
        lVar7 = (longlong)iVar5 * 8;
        lVar1 = *plVar6;
        lVar2 = *(longlong *)(lVar1 + lVar7);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0xb0);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x98);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x80);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x60);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x38);
        FSlotBase::~FSlotBase(lVar2);
        FMemory::Free(*(undefined8 *)(lVar1 + lVar7));
        iVar3 = *(int *)(param_1 + 0x220);
        iVar4 = (iVar3 - iVar5) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar6 + lVar7),(void *)(*plVar6 + (longlong)(iVar5 + 1) * 8),
                     (longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x220);
        }
        *(int *)(param_1 + 0x220) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
      iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar5 < iVar3);
  }
  return -1;
}



// FUNCTION 14199ed70 FUN_14199ed70 body=309 status=ok
// SIG undefined FUN_14199ed70(void)

undefined8 FUN_14199ed70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  iVar7 = 0;
  iVar5 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar5) {
    lVar9 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + lVar9) + 0x10)) {
        if (*(char *)(param_1 + 0x228) == '\0') {
          plVar8 = (longlong *)(param_1 + 0x218);
          lVar9 = (longlong)iVar7 * 8;
          lVar2 = *plVar8;
          lVar3 = *(longlong *)(lVar2 + lVar9);
          plVar4 = *(longlong **)(lVar3 + 0x58);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar5 == 1) && (plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x40);
          FSlotBase::~FSlotBase(lVar3);
          FMemory::Free(*(undefined8 *)(lVar2 + lVar9));
          iVar5 = *(int *)(param_1 + 0x220);
          iVar6 = (iVar5 - iVar7) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar8 + lVar9),(void *)(*plVar8 + (longlong)(iVar7 + 1) * 8),
                       (longlong)iVar6 << 3);
            iVar5 = *(int *)(param_1 + 0x220);
          }
          *(int *)(param_1 + 0x220) = iVar5 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
        }
        return 1;
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
      iVar5 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar7 < iVar5);
  }
  return 0;
}



// FUNCTION 14199eeb0 FUN_14199eeb0 body=247 status=ok
// SIG undefined FUN_14199eeb0(void)

void FUN_14199eeb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x2f8);
  puVar9 = (undefined8 *)(lVar2 + 0x210);
  iVar7 = 0;
  iVar5 = (**(code **)*puVar9)(puVar9);
  if (0 < iVar5) {
    lVar8 = 0;
    plVar1 = (longlong *)(lVar2 + 0x220);
    do {
      lVar3 = *plVar1;
      if (*(longlong *)(*(longlong *)(lVar8 + lVar3) + 0x10) == *param_2) {
        if (*(char *)(lVar2 + 0x230) != '\0') {
          return;
        }
        lVar8 = (longlong)iVar7 * 8;
        lVar4 = *(longlong *)(lVar8 + lVar3);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x38);
        FSlotBase::~FSlotBase(lVar4);
        FMemory::Free(*(undefined8 *)(lVar8 + lVar3));
        iVar5 = *(int *)(lVar2 + 0x228);
        iVar6 = (iVar5 - iVar7) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar8),(void *)(*plVar1 + (longlong)(iVar7 + 1) * 8),
                     (longlong)iVar6 << 3);
          iVar5 = *(int *)(lVar2 + 0x228);
        }
        *(int *)(lVar2 + 0x228) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
      iVar5 = (**(code **)*puVar9)(puVar9);
    } while (iVar7 < iVar5);
  }
  return;
}



// FUNCTION 14199efb0 FUN_14199efb0 body=253 status=ok
// SIG undefined FUN_14199efb0(void)

undefined8 FUN_14199efb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  uVar8 = uVar6;
  if (0 < iVar3) {
    do {
      iVar3 = (int)uVar8;
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + uVar6) + 0x10)) {
        if (*(char *)(param_1 + 0x228) == '\0') {
          plVar7 = (longlong *)(param_1 + 0x218);
          lVar1 = (longlong)iVar3 * 8;
          lVar2 = *plVar7;
          FSlotBase::~FSlotBase(*(undefined8 *)(lVar2 + lVar1));
          FMemory::Free(*(undefined8 *)(lVar2 + lVar1));
          iVar4 = *(int *)(param_1 + 0x220);
          iVar5 = (iVar4 - iVar3) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar7 + lVar1),(void *)(*plVar7 + (longlong)(iVar3 + 1) * 8),
                       (longlong)iVar5 << 3);
            iVar4 = *(int *)(param_1 + 0x220);
          }
          *(int *)(param_1 + 0x220) = iVar4 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar7);
        }
        return 1;
      }
      uVar6 = uVar6 + 8;
      iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
      uVar8 = (ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < iVar4);
  }
  return 0;
}



// FUNCTION 14199f0b0 FUN_14199f0b0 body=566 status=ok
// SIG undefined FUN_14199f0b0(void)

int FUN_14199f0b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_30;
  undefined4 local_28;
  
  iVar11 = 0;
  iVar6 = (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1 + 0x220);
  if (0 < iVar6) {
    plVar2 = (longlong *)(param_1 + 0x230);
    lVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar10 + *plVar2) + 0x10) == *param_2) {
        if (*(int *)(param_1 + 0x218) != 0) {
          if ((*(longlong **)(param_1 + 0x210) != (longlong *)0x0) &&
             (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))(), cVar5 != '\0'))
          goto LAB_14199f236;
          if ((*(int *)(param_1 + 0x218) != 0) &&
             ((*(longlong **)(param_1 + 0x210) != (longlong *)0x0 &&
              (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))(), cVar5 != '\0')))) {
            if (*(int *)(param_1 + 0x218) == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = *(longlong **)(param_1 + 0x210);
            }
            uVar7 = (**(code **)(*plVar9 + 0x38))();
            *(undefined4 *)(param_1 + 0x208) = uVar7;
          }
        }
        iVar6 = *(int *)(param_1 + 0x208);
        if (iVar11 == iVar6) {
          FUN_1418475e0(param_1,5);
        }
        if ((0 < iVar6) && (iVar11 <= iVar6)) {
          *(int *)(param_1 + 0x208) = iVar6 + -1;
          local_30 = 0;
          local_28 = 0;
          *(undefined1 *)(param_1 + 0x20c) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,&local_30);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
        }
LAB_14199f236:
        if (*(char *)(param_1 + 0x240) == '\0') {
          lVar3 = *plVar2;
          lVar10 = (longlong)iVar11 * 8;
          lVar4 = *(longlong *)(lVar3 + lVar10);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x40);
          FSlotBase::~FSlotBase(lVar4);
          FMemory::Free(*(undefined8 *)(lVar3 + lVar10));
          iVar6 = *(int *)(param_1 + 0x238);
          iVar8 = (iVar6 - iVar11) + -1;
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar2 + lVar10),(void *)(*plVar2 + (longlong)(iVar11 + 1) * 8),
                       (longlong)iVar8 << 3);
            iVar6 = *(int *)(param_1 + 0x238);
          }
          *(int *)(param_1 + 0x238) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
        }
        plVar2 = (longlong *)param_2[1];
        if (plVar2 == (longlong *)0x0) {
          return iVar11;
        }
        LOCK();
        plVar9 = plVar2 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 != 1) {
          return iVar11;
        }
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return iVar11;
        }
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return iVar11;
      }
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 8;
      iVar6 = (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1 + 0x220);
    } while (iVar11 < iVar6);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
  return -1;
}



// FUNCTION 14199f2f0 FUN_14199f2f0 body=278 status=ok
// SIG undefined FUN_14199f2f0(void)

int FUN_14199f2f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar5 = 0;
  iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1 + 0x220);
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x230) + lVar7) + 0x10)) {
        if (*(char *)(param_1 + 0x240) != '\0') {
          return iVar5;
        }
        plVar6 = (longlong *)(param_1 + 0x230);
        lVar7 = (longlong)iVar5 * 8;
        lVar1 = *plVar6;
        lVar2 = *(longlong *)(lVar1 + lVar7);
        if (*(char *)(lVar2 + 0x54) != '\0') {
          *(undefined1 *)(lVar2 + 0x54) = 0;
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x40);
        FSlotBase::~FSlotBase(lVar2);
        FMemory::Free(*(undefined8 *)(lVar1 + lVar7));
        iVar3 = *(int *)(param_1 + 0x238);
        iVar4 = (iVar3 - iVar5) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar6 + lVar7),(void *)(*plVar6 + (longlong)(iVar5 + 1) * 8),
                     (longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x238);
        }
        *(int *)(param_1 + 0x238) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
      iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1 + 0x220);
    } while (iVar5 < iVar3);
  }
  return -1;
}



// FUNCTION 14199f410 FUN_14199f410 body=361 status=ok
// SIG undefined FUN_14199f410(void)

void FUN_14199f410(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar8 = param_2 + -1;
    lVar11 = (longlong)iVar8;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar10 = lVar11 * 0x1c;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar8;
        }
        *(undefined4 *)(lVar10 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar10 + 4 + *param_1) = uVar5;
        lVar10 = lVar10 + -0x1c;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar8;
        iVar8 = iVar8 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar8 = (int)param_1[5];
        iVar6 = iVar8 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
          uVar2 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14199f580 Reset body=144 status=ok
// SIG undefined Reset(void)

void TArray<TAttribute<float>,FDefaultAllocator>::Reset(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      lVar3 = *param_1 + 8;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3);
        lVar3 = lVar3 + 0x18;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar3 = *param_1 + 8;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3);
        lVar3 = lVar3 + 0x18;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14199f610 Reset body=104 status=ok
// SIG undefined Reset(void)

void TOptional<SlateEditableTextTypes::FUndoState>::Reset(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 0;
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
  }
  return;
}



// FUNCTION 14199f680 ResizeGrow body=212 status=ok
// SIG undefined ResizeGrow(void)

void TArray<bool,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  if (uVar1 < 0x11) {
    uVar2 = 0x10;
  }
  else {
    lVar5 = 4;
    if ((*(int *)((longlong)param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar5 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(lVar5,0);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar2;
  pvVar3 = *(void **)((longlong)param_1 + 0x10);
  if (uVar2 < 0x11) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2);
    pvVar3 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar5 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2);
      return;
    }
    lVar5 = (longlong)(int)uVar2;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar5,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
  return;
}



// FUNCTION 14199f770 SaveText body=133 status=ok
// SIG undefined SaveText(void)

void FSlateEditableTextLayout::SaveText(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_1 + 0x448) != 0) && (*(longlong **)(param_1 + 0x440) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x18))(), cVar2 != '\0')) {
    return;
  }
  if ((*(int *)(param_1 + 0x448) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x440), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x440) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_1 + 0x440),0,0);
      *(undefined8 *)(param_1 + 0x440) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  FText::operator=(param_1 + 0x420,param_2);
  *(undefined1 *)(param_1 + 0x438) = 1;
  return;
}



// FUNCTION 14199f800 FUN_14199f800 body=340 status=ok
// SIG undefined FUN_14199f800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14199f800(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  float local_70;
  float local_6c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  pfVar6 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_78);
  fVar8 = pfVar6[1];
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar8 = *pfVar6;
  }
  plVar4 = *(longlong **)(param_1 + 0x300);
  local_88 = *(undefined8 *)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_80 = plVar4;
  FUN_14182e310(param_1,&local_70,param_1 + 0x394,&local_88);
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
  if (*(int *)(param_1 + 0x378) == 1) {
    local_70 = local_6c;
  }
  fVar7 = fVar8 - local_70;
  if (fVar8 * param_2 <= fVar8 - local_70) {
    fVar7 = fVar8 * param_2;
  }
  *(float *)(param_1 + 0x2f0) = fVar7;
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x368);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 14199f960 FUN_14199f960 body=573 status=ok
// SIG undefined FUN_14199f960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14199f960(longlong param_1,undefined8 param_2,float param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  float local_ac;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1418475e0(param_1,5);
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xf7;
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) | param_5 << 3;
  pfVar8 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_b8);
  fVar11 = pfVar8[1];
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar11 = *pfVar8;
  }
  plVar5 = *(longlong **)(param_1 + 0x300);
  local_c8 = *(undefined8 *)(param_1 + 0x2f8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_c0 = plVar5;
  FUN_14182e310(param_1,&local_b0,param_2,&local_c8);
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
  fVar4 = *(float *)(param_1 + 0x2f0);
  fVar10 = fVar4;
  if (param_3 != 0.0) {
    if (*(int *)(param_1 + 0x378) == 1) {
      local_b0 = local_ac;
    }
    fVar11 = fVar11 - local_b0;
    if (((*(char *)(param_1 + 0x354) == '\0') && (param_4 == '\0')) &&
       (cVar7 = FOverscroll::ShouldApplyOverscroll(param_1 + 0x350,fVar4,fVar4 == fVar11,param_3),
       cVar7 != '\0')) {
      FOverscroll::ScrollBy(param_1 + 0x350,param_2,param_3);
      fVar10 = *(float *)(param_1 + 0x2f0);
    }
    else {
      fVar10 = param_3 + *(float *)(param_1 + 0x2f0);
      if (0.0 <= fVar10) {
        if (fVar11 <= fVar10) {
          fVar10 = fVar11;
        }
      }
      else {
        fVar10 = 0.0;
      }
      *(float *)(param_1 + 0x2f0) = fVar10;
    }
  }
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x368,fVar10);
  if ((*(char *)(param_1 + 0x390) == '\x01') || (fVar4 != *(float *)(param_1 + 0x2f0))) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 14199fba0 FUN_14199fba0 body=322 status=ok
// SIG undefined FUN_14199fba0(void)

void FUN_14199fba0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  plVar3 = (longlong *)param_2[1];
  uVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_58);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144d75ee0;
    puVar6[1] = param_1;
    puVar6[2] = uVar4;
    puVar6[3] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)puVar6 + 0x24) = param_5;
    *(undefined1 *)(puVar6 + 4) = param_3;
    *(undefined1 *)((longlong)puVar6 + 0x21) = param_4;
  }
  local_68[0] = FUN_14196e290;
  FGenericPlatformMemory::MemswapGreaterThan8(local_68,param_1 + 0x3d0,0x50);
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  FUN_14196ce50(param_1);
  return;
}



// FUNCTION 14199fd20 FUN_14199fd20 body=137 status=ok
// SIG undefined FUN_14199fd20(void)

void FUN_14199fd20(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 local_res8;
  int local_res10;
  int local_res14;
  
  cVar2 = FTextLayout::IsEmpty(*(undefined8 *)(param_1 + 0x48));
  if (cVar2 == '\0') {
    local_res8 = 0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x20);
    if (&local_res8 != (undefined8 *)(param_1 + 0x670)) {
      *(undefined8 *)(param_1 + 0x670) = 0;
      *(undefined1 *)(param_1 + 0x678) = 1;
    }
    local_res10 = iVar1 + -1;
    iVar1 = *(int *)(*(longlong *)
                      ((longlong)iVar1 * 0x70 + -0x70 +
                      *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18)) + 8);
    local_res14 = iVar1 + -1;
    if (iVar1 == 0) {
      local_res14 = 0;
    }
    FUN_1419bc080(param_1 + 0x680,*(undefined8 *)(param_1 + 0x48),&local_res10);
    FUN_1419a7100(param_1);
  }
  return;
}



// FUNCTION 14199fdb0 FUN_14199fdb0 body=523 status=ok
// SIG undefined FUN_14199fdb0(void)

void FUN_14199fdb0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float fStackX_c;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined8 local_68 [2];
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  
  fVar7 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x24));
  fVar11 = *(float *)(param_2 + 0x1c) * fVar7;
  fVar9 = -(*(float *)(param_2 + 0x24) * fVar7);
  fVar8 = *(float *)(param_2 + 0x28) * fVar7;
  fVar10 = -(*(float *)(param_2 + 0x20) * fVar7);
  fVar7 = (float)((ulonglong)*param_3 >> 0x20);
  local_res8 = (float)*param_3;
  _local_res8 = CONCAT44((fVar11 * fVar7 + fVar10 * local_res8 +
                         fVar11 * -*(float *)(param_2 + 0x30) + fVar10 * -*(float *)(param_2 + 0x2c)
                         ) * *(float *)(param_2 + 8),
                         (fVar9 * fVar7 + fVar8 * local_res8 +
                         fVar9 * -*(float *)(param_2 + 0x30) + fVar8 * -*(float *)(param_2 + 0x2c))
                         * *(float *)(param_2 + 8));
  FTextLayout::GetTextLocationAt(*(undefined8 *)(param_1 + 0x48),local_res10,&local_res8,0);
  FTextLayout::GetWordAt(*(undefined8 *)(param_1 + 0x48),&local_58,local_res10);
  bVar6 = SBORROW4(local_58,local_50);
  iVar2 = local_58 - local_50;
  if (local_58 == local_50) {
    bVar6 = SBORROW4(iStack_54,iStack_4c);
    iVar2 = iStack_54 - iStack_4c;
  }
  uVar5 = CONCAT44(iStack_4c,local_50);
  if (bVar6 != iVar2 < 0) {
    uVar5 = CONCAT44(iStack_54,local_58);
  }
  bVar6 = SBORROW4(local_58,local_50);
  iVar2 = local_58 - local_50;
  if (local_58 == local_50) {
    bVar6 = SBORROW4(iStack_54,iStack_4c);
    iVar2 = iStack_54 - iStack_4c;
  }
  uVar4 = CONCAT44(iStack_54,local_58);
  if (local_58 == local_50 && iStack_54 == iStack_4c || bVar6 != iVar2 < 0) {
    uVar4 = CONCAT44(iStack_4c,local_50);
  }
  if (((((int)uVar5 != -1) && (iVar2 = (int)((ulonglong)uVar5 >> 0x20), iVar2 != -1)) &&
      ((int)uVar4 != -1)) && (iVar3 = (int)((ulonglong)uVar4 >> 0x20), iVar3 != -1)) {
    puVar1 = (undefined8 *)(param_1 + 0x670);
    if ((local_68 != puVar1) && (*(char *)(param_1 + 0x678) != '\0')) {
      *(undefined1 *)(param_1 + 0x678) = 0;
    }
    if ((((int)uVar5 != (int)uVar4) || (iVar2 != iVar3)) && (local_res18 != puVar1)) {
      *puVar1 = uVar5;
      *(undefined1 *)(param_1 + 0x678) = 1;
    }
    FUN_1419bc080(param_1 + 0x680,*(undefined8 *)(param_1 + 0x48),local_res18);
    FUN_1419a7100(param_1);
  }
  return;
}



// FUNCTION 14199ffc0 FUN_14199ffc0 body=480 status=ok
// SIG undefined FUN_14199ffc0(void)

void FUN_14199ffc0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_48;
  longlong *local_40;
  code *local_38;
  undefined4 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [16];
  
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x300) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x308) == 0) {
      return;
    }
    local_48 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x308);
    plVar8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar8 = local_48, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar8 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            local_48 = *(longlong **)(param_1 + 0x300);
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
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_40 = plVar8;
    FUN_14185f5a0(param_1,&local_48);
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
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
    if ((*(longlong *)(param_1 + 0x300) != 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
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
    local_38 = BuildSettings::IsPromotedBuild;
    uStack_30 = 0;
    uVar5 = FUN_1417ddb00(local_18,param_1,&local_38);
    puVar6 = (undefined8 *)FUN_141853de0(param_1,local_28,0,uVar5);
    *(undefined8 *)(param_1 + 0x300) = *puVar6;
    plVar2 = (longlong *)puVar6[1];
    plVar7 = *(longlong **)(param_1 + 0x308);
    plVar8 = local_20;
    if (plVar2 != plVar7) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x308);
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
      *(longlong **)(param_1 + 0x308) = plVar2;
      plVar8 = local_20;
    }
  }
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a01a0 FUN_1419a01a0 body=535 status=ok
// SIG undefined FUN_1419a01a0(void)

void FUN_1419a01a0(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_68;
  longlong *local_60;
  code *local_58;
  undefined4 uStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [32];
  
  if (((param_2 == *(float *)(param_1 + 0x2c8)) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
     (*(longlong *)(param_1 + 0x2c0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2c0) + 8);
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
  plVar2 = *(longlong **)(param_1 + 0x2c0);
  *(float *)(param_1 + 0x2c8) = param_2;
  plVar8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar8 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1 + 0x2b8), lVar3 != 0)) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          local_68 = lVar3;
          local_60 = plVar2;
          FUN_14185f5a0(param_1,&local_68);
          plVar7 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_60 + 1;
            lVar3 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            plVar8 = plVar2;
            if ((int)lVar3 == 1) {
              (**(code **)*local_60)(local_60);
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
  local_58 = FUN_141969440;
  uStack_50 = 0;
  uVar5 = FUN_1417ddb00(local_38,param_1,&local_58);
  puVar6 = (undefined8 *)FUN_141853de0(param_1,local_48,param_2,uVar5);
  *(undefined8 *)(param_1 + 0x2b8) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x2c0);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x2c0);
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
    *(longlong **)(param_1 + 0x2c0) = plVar2;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a03c0 FUN_1419a03c0 body=84 status=ok
// SIG undefined FUN_1419a03c0(void)

void FUN_1419a03c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x208) = param_2;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,&local_20,param_3,param_4,param_2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419a0420 SetAllowOverscroll body=24 status=ok
// SIG undefined SetAllowOverscroll(void)

void SScrollBox::SetAllowOverscroll(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x354) = param_2;
  if (param_2 == '\x01') {
    icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x350);
    return;
  }
  return;
}



// FUNCTION 1419a0440 SetApplyAlphaToBlur body=13 status=ok
// SIG undefined SetApplyAlphaToBlur(void)

void SBackgroundBlur::SetApplyAlphaToBlur(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2f0) = param_2;
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a0450 FUN_1419a0450 body=143 status=ok
// SIG undefined FUN_1419a0450(void)

void FUN_1419a0450(undefined8 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0xa4) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x521) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa5,param_2 + 8);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar5,5);
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
  return;
}



// FUNCTION 1419a04e0 FUN_1419a04e0 body=13 status=ok
// SIG undefined FUN_1419a04e0(void)

void FUN_1419a04e0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x230) = param_2;
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a04f0 SetBlurRadius body=80 status=ok
// SIG undefined SetBlurRadius(void)

void SBackgroundBlur::SetBlurRadius(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)(param_1 + 0x310)) {
    if (*(char *)(param_1 + 0x314) != '\0') {
      *(undefined1 *)(param_1 + 0x314) = 0;
    }
    if (*(char *)(param_2 + 1) != '\0') {
      *(undefined4 *)(param_1 + 0x310) = *param_2;
      *(undefined1 *)(param_1 + 0x314) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 2);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,param_2 + 4);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a0540 SetBlurStrength body=58 status=ok
// SIG undefined SetBlurStrength(void)

void SBackgroundBlur::SetBlurStrength(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2f8) = *param_2;
  *(undefined1 *)(param_1 + 0x2fc) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x300,param_2 + 2);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a0580 FUN_1419a0580 body=313 status=ok
// SIG undefined FUN_1419a0580(void)

void FUN_1419a0580(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x348) == 0) || (*(longlong **)(param_1 + 0x340) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((param_2[0xe] == 0.0) || (*(longlong **)(param_2 + 0xc) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 0xc) + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (((*(char *)(param_1 + 0x338) != *(char *)(param_2 + 10)) ||
          (*param_2 != *(float *)(param_1 + 0x310))) ||
         ((param_2[1] != *(float *)(param_1 + 0x314) ||
          (((param_2[2] != *(float *)(param_1 + 0x318) ||
            (param_2[3] != *(float *)(param_1 + 0x31c))) ||
           (*(char *)(param_1 + 800) != *(char *)(param_2 + 4))))))) goto LAB_1419a067e;
      if (*(char *)(param_1 + 800) != '\x01') {
        return;
      }
      bVar6 = *(longlong *)(param_1 + 0x328) == *(longlong *)(param_2 + 6);
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[0xe] != 0.0) &&
         (plVar3 = *(longlong **)(param_2 + 0xc), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x348) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x340), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419a067e:
  FUN_140692440((float *)(param_1 + 0x310),param_2);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 10);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0xc);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419a06c0 FUN_1419a06c0 body=261 status=ok
// SIG undefined FUN_1419a06c0(void)

void FUN_1419a06c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x308) == 0) || (*(longlong **)(param_1 + 0x300) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if ((((int)param_2[3] == 0) || ((longlong *)param_2[2] == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)param_2[2] + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x2f8) != (char)param_2[1]) goto LAB_1419a078a;
      bVar6 = *(longlong *)(param_1 + 0x2f0) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if (((int)param_2[3] != 0) &&
         (plVar3 = (longlong *)param_2[2], lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x308) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x300), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419a078a:
  *(longlong *)(param_1 + 0x2f0) = *param_2;
  *(char *)(param_1 + 0x2f8) = (char)param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x300,param_2 + 2);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419a07d0 FUN_1419a07d0 body=82 status=ok
// SIG undefined FUN_1419a07d0(void)

void FUN_1419a07d0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x290) = *param_2;
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2a0,param_2 + 2);
  FUN_1418475e0(param_1,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419a0830 FUN_1419a0830 body=14 status=ok
// SIG undefined FUN_1419a0830(void)

void FUN_1419a0830(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x46b) = param_2;
  *(undefined1 *)(param_1 + 0x468) = 1;
  return;
}



// FUNCTION 1419a0840 SetColumnFill body=199 status=ok
// SIG undefined SetColumnFill(void)

void SGridPanel::SetColumnFill(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_2;
  iVar1 = *(int *)(param_1 + 0x260);
  while (iVar1 <= param_2) {
    iVar1 = *(int *)(param_1 + 0x260);
    lVar4 = (longlong)iVar1;
    *(int *)(param_1 + 0x260) = iVar1 + 1;
    if (*(int *)(param_1 + 0x264) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 600,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 600);
    *(undefined4 *)(lVar2 + lVar4 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 4 + lVar4 * 0x18) = 1;
    *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) = 0;
    iVar1 = *(int *)(param_1 + 0x260);
  }
  lVar4 = *(longlong *)(param_1 + 600);
  *(undefined4 *)(lVar4 + lVar3 * 0x18) = *param_3;
  *(undefined1 *)(lVar4 + 4 + lVar3 * 0x18) = *(undefined1 *)(param_3 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + lVar3 * 0x18 + 8,param_3 + 2);
  return;
}



// FUNCTION 1419a0910 FUN_1419a0910 body=224 status=ok
// SIG undefined FUN_1419a0910(void)

void FUN_1419a0910(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  *(int *)(param_1 + 0x388) = param_2;
  if (param_2 - 2U < 2) {
    uVar8 = FCurveSequence::FCurveSequence(local_68);
    FUN_1417f8e00(param_1 + 0x480,uVar8);
    FUN_1417f61f0(local_68);
    puVar9 = (undefined4 *)FCurveSequence::AddCurve(param_1 + 0x480,local_78,0,0x3f400000,0);
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    *(undefined4 *)(param_1 + 0x470) = *puVar9;
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined4 *)(param_1 + 0x478) = uVar5;
    *(undefined4 *)(param_1 + 0x47c) = uVar6;
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_88);
    FUN_141852100(param_1 + 0x480,uVar8,0,0);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  return;
}



// FUNCTION 1419a09f0 FUN_1419a09f0 body=268 status=ok
// SIG undefined FUN_1419a09f0(void)

void FUN_1419a09f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  *(int *)(param_1 + 0x388) = param_2;
  if (param_2 - 2U < 2) {
    uVar8 = FCurveSequence::FCurveSequence(local_68);
    FUN_1417f8e00(param_1 + 0x480,uVar8);
    FUN_1417f61f0(local_68);
    puVar9 = (undefined4 *)FCurveSequence::AddCurve(param_1 + 0x480,local_78,0,0x3f400000,0);
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    *(undefined4 *)(param_1 + 0x470) = *puVar9;
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined4 *)(param_1 + 0x478) = uVar5;
    *(undefined4 *)(param_1 + 0x47c) = uVar6;
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_88);
    FUN_141852100(param_1 + 0x480,uVar8,0,0);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
                    /* WARNING: Could not recover jumptable at 0x0001419a0af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x530))(*(undefined8 **)(param_1 + 0x530),param_2);
  return;
}



// FUNCTION 1419a0b00 FUN_1419a0b00 body=12 status=ok
// SIG undefined FUN_1419a0b00(void)

void FUN_1419a0b00(longlong param_1)

{
  FUN_1419bbf10(*(undefined8 *)(param_1 + 0x618));
  return;
}


