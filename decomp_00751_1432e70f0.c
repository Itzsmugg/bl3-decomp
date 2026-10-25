// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432e70f0 FUN_1432e70f0 body=90 status=ok
// SIG undefined FUN_1432e70f0(void)

void FUN_1432e70f0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x4c98);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c90) + uVar2 * 8) + 0x20))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_1432f29e0(param_1 + 0x4c90,param_1 + 0x4c90,0);
  return;
}



// FUNCTION 1432e7150 FUN_1432e7150 body=136 status=ok
// SIG undefined FUN_1432e7150(void)

void FUN_1432e7150(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  RefCountImpl *this;
  char cVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x4c98);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x4c90) + uVar5 * 8);
      cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(param_1 + 0x4c90);
        this = *(RefCountImpl **)(lVar3 + uVar5 * 8);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 1432e7210 FUN_1432e7210 body=37 status=ok
// SIG undefined FUN_1432e7210(void)

ulonglong FUN_1432e7210(longlong param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x390))();
    return (ulonglong)bVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432e7240 FUN_1432e7240 body=840 status=ok
// SIG undefined FUN_1432e7240(void)

void FUN_1432e7240(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  uint local_2c;
  
  if (param_1[0xb] != 0) {
    *(uint *)((longlong)param_1 + 0x52f4) = *(uint *)((longlong)param_1 + 0x52f4) | 4;
    FUN_1432e64b0();
    lVar5 = (**(code **)(*(longlong *)param_1[0xb] + 0x218))();
    if (lVar5 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar5);
    }
    iVar3 = (int)param_1[0xd];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      FUN_1432e35c0(param_1,iVar3);
    }
    FUN_1432f2860(param_1 + 0xc,param_1 + 0xc,0);
    lVar11 = param_1[0xa60];
    uVar6 = 0;
    uVar9 = uVar6;
    if (lVar11 != 0) {
      do {
        uVar9 = uVar9 + 1;
        Scaleform::GFx::LoadQueueEntryMT::Cancel(lVar11);
        lVar11 = *(longlong *)(lVar11 + 8);
      } while (lVar11 != 0);
      if (uVar9 != 0) {
        do {
          uVar10 = 0;
          for (plVar8 = (longlong *)param_1[0xa60]; plVar8 != (longlong *)0x0;
              plVar8 = (longlong *)plVar8[1]) {
            cVar4 = (**(code **)(*plVar8 + 8))(plVar8);
            if (cVar4 != '\0') {
              uVar10 = uVar10 + 1;
            }
          }
        } while (uVar10 < uVar9);
      }
    }
    lVar11 = param_1[5];
    while (lVar11 != 0) {
      puVar2 = (undefined8 *)param_1[5];
      param_1[5] = puVar2[1];
      (**(code **)*puVar2)(puVar2,1);
      lVar11 = param_1[5];
    }
    lVar11 = param_1[0xa60];
    while (lVar11 != 0) {
      puVar2 = (undefined8 *)param_1[0xa60];
      param_1[0xa60] = puVar2[1];
      (**(code **)*puVar2)(puVar2,1);
      lVar11 = param_1[0xa60];
    }
    param_1[5] = 0;
    param_1[0xa60] = 0;
    *(uint *)(param_1 + 0xa5e) = *(uint *)(param_1 + 0xa5e) | 0x80000;
    param_1[0xa5c] = 0;
    param_1[0xa5b] = 0;
    (**(code **)(*(longlong *)param_1[3] + 0x158))();
    FUN_1432eda00(param_1);
    plVar8 = (longlong *)param_1[0x966];
    if (plVar8 != (longlong *)0x0) {
      if (*plVar8 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      piVar1 = (int *)(plVar8[5] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      lVar11 = plVar8[3];
      plVar7 = (longlong *)(plVar8[2] + (lVar11 + -1) * 8);
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        piVar1 = (int *)(*plVar7 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        plVar7 = plVar7 + -1;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar8[2]);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar8);
    }
    param_1[0x966] = 0;
    Scaleform::GFx::MovieImpl::ResetFocusStates(param_1);
    *(uint *)(param_1 + 0xa5e) = *(uint *)(param_1 + 0xa5e) & 0x3fffff;
    plVar8 = param_1 + 0x442;
    lVar11 = 6;
    lVar12 = 6;
    do {
      FUN_14338a570(plVar8);
      plVar8 = plVar8 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    (**(code **)(*(longlong *)param_1[3] + 0x48))((longlong *)param_1[3],2);
    *(uint *)((longlong)param_1 + 0x52f4) = *(uint *)((longlong)param_1 + 0x52f4) & 0xfffffffb;
    (**(code **)(*(longlong *)param_1[3] + 0x88))((longlong *)param_1[3],lVar5);
    if (param_1[0xb] != 0) {
      if ((param_1[0x47] != 0) && ((int)param_1[0x47e] != 0)) {
        do {
          local_44 = 0;
          local_48 = 0x15;
          local_40 = 0;
          local_3c = uVar6;
          (**(code **)(*(longlong *)param_1[0x47] + 8))((longlong *)param_1[0x47],param_1,&local_48)
          ;
          local_34 = 0;
          local_38 = 0x17;
          local_30 = 0;
          local_2c = uVar6;
          (**(code **)(*(longlong *)param_1[0x47] + 8))((longlong *)param_1[0x47],param_1,&local_38)
          ;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x47e));
      }
      *(undefined1 *)((longlong)param_1 + 0x52d4) = 1;
      plVar8 = param_1 + 0x480;
      do {
        Scaleform::GFx::KeyboardState::ResetState(plVar8);
        plVar8 = plVar8 + 0xd1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (param_2 != '\0') {
        (**(code **)(*param_1 + 0xc0))(param_1,0,0,1);
      }
      (**(code **)(*(longlong *)param_1[3] + 0x48))((longlong *)param_1[3],2);
    }
    if (lVar5 != 0) {
      FUN_1432de450(lVar5);
    }
  }
  return;
}



// FUNCTION 1432e75b0 FUN_1432e75b0 body=184 status=ok
// SIG undefined FUN_1432e75b0(void)

undefined8 FUN_1432e75b0(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int local_res8 [2];
  RefCountImpl *local_res20;
  
  if (param_1[0xb] != 0) {
    local_res8[0] = -1;
    plVar1 = *(longlong **)(*(longlong *)(param_1[10] + 0x70) + 0x18);
    cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,local_res8,0);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,local_res8[0] + param_3);
      return 1;
    }
    Scaleform::GFx::StateBag::GetLogState(param_1 + 2,&local_res20);
    if (local_res20 != (RefCountImpl *)0x0) {
      FUN_1432f1560(local_res20 + 0x18,"MovieImpl::GotoLabeledFrame(\'%s\') unknown label",param_2);
      if (local_res20 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_res20);
      }
    }
  }
  return 0;
}



// FUNCTION 1432e7670 FUN_1432e7670 body=217 status=ok
// SIG undefined FUN_1432e7670(void)

ulonglong FUN_1432e7670(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = *(uint *)(param_1 + 0x52f0) >> 0x14;
  uVar7 = (ulonglong)uVar5 & 0xffffffffffffff01;
  if ((((uVar5 & 1) == 0) || (param_2 == '\0')) &&
     ((((byte)uVar5 & 1 & (byte)uVar7) != 0 || (param_2 != '\0')))) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xffefffff;
      uVar6 = Scaleform::Timer::GetTicks();
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      lVar8 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
      uVar7 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,0);
      *(longlong *)(param_1 + 0x4c80) =
           *(longlong *)(param_1 + 0x4c80) +
           (((uVar6 - lVar8 >> 1) + lVar8 >> 9) - *(longlong *)(param_1 + 0x4c88));
    }
    else {
      *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x100000;
      uVar6 = Scaleform::Timer::GetTicks();
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      lVar8 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
      uVar7 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,0);
      *(ulonglong *)(param_1 + 0x4c88) = (uVar6 - lVar8 >> 1) + lVar8 >> 9;
    }
    plVar4 = *(longlong **)(param_1 + 0x52d8);
    while (plVar4 != (longlong *)0x0) {
      plVar1 = (longlong *)plVar4[0x13];
      uVar7 = (**(code **)(*plVar4 + 0x300))(plVar4,param_2);
      plVar4 = plVar1;
    }
  }
  return uVar7;
}



// FUNCTION 1432e77b0 FUN_1432e77b0 body=37 status=ok
// SIG undefined FUN_1432e77b0(void)

ulonglong FUN_1432e77b0(longlong param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1d8))();
    return (ulonglong)bVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432e77e0 FUN_1432e77e0 body=207 status=ok
// SIG undefined FUN_1432e77e0(void)

void FUN_1432e77e0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *local_res18;
  
  plVar4 = (longlong *)(param_1 + 0x4c60);
  lVar1 = *plVar4;
  local_res18 = param_3;
  if ((((lVar1 != 0) &&
       (lVar3 = FUN_1432ef240(plVar4,param_2,
                              (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar1 + 8)),
       -1 < lVar3)) && (lVar1 = lVar1 + (lVar3 * 3 + 3) * 8, lVar1 != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
    plVar4 = plVar2;
    do {
      if (plVar4[1] == param_3[1]) {
        (**(code **)(*plVar4 + 8))(plVar4,param_3);
        if (local_res18 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*local_res18)(local_res18,1);
        return;
      }
      plVar4 = (longlong *)plVar4[2];
    } while (plVar4 != (longlong *)0x0);
    param_3[2] = plVar2[2];
    plVar2[2] = (longlong)local_res18;
    return;
  }
  FUN_1432f2c70(plVar4,param_2,&local_res18);
  return;
}



// FUNCTION 1432e78c0 FUN_1432e78c0 body=231 status=ok
// SIG undefined FUN_1432e78c0(void)

void FUN_1432e78c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  plVar1 = (longlong *)(param_1 + 0x4c60);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    uVar7 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar7 = 0;
    plVar6 = (longlong *)(lVar2 + 0x10);
    do {
      plVar8 = plVar1;
      if (*plVar6 != -2) break;
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 3;
    } while (uVar7 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((plVar8 == (longlong *)0x0) || (lVar2 = *plVar8, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar7)) {
        FUN_1432ef9e0(plVar1);
        return;
      }
      puVar5 = *(undefined8 **)(lVar2 + 0x20 + uVar7 * 0x18);
      while (puVar5 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar5[2];
        (**(code **)*puVar5)(puVar5,1);
        puVar5 = puVar3;
      }
      uVar4 = *(ulonglong *)(*plVar8 + 8);
    } while (((longlong)uVar4 < (longlong)uVar7) || (uVar7 = uVar7 + 1, uVar4 < uVar7));
    plVar6 = (longlong *)(*plVar8 + uVar7 * 0x18 + 0x10);
    do {
      if (*plVar6 != -2) break;
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 3;
    } while (uVar7 <= uVar4);
  } while( true );
}



// FUNCTION 1432e79b0 FUN_1432e79b0 body=715 status=ok
// SIG undefined FUN_1432e79b0(void)

longlong FUN_1432e79b0(longlong *param_1,Point<float> *param_2,undefined4 param_3,undefined1 param_4
                      ,undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  Point<float> local_res10 [8];
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
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
  
  fVar7 = (*(float *)(param_2 + 4) - *(float *)((longlong)param_1 + 0xec) * 20.0) /
          (*(float *)((longlong)param_1 + 0x10c) - *(float *)((longlong)param_1 + 0x104));
  lStack_90 = 0;
  lStack_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  uStack_70 = 0x3f800000;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  fVar6 = (*(float *)param_2 - *(float *)(param_1 + 0x1d) * 20.0) /
          (*(float *)(param_1 + 0x21) - *(float *)(param_1 + 0x20));
  *(float *)((longlong)param_1 + 0x144) = -((fVar7 + fVar7) - 1.0);
  *(float *)(param_1 + 0x28) = (fVar6 + fVar6) - 1.0;
  (**(code **)(*param_1 + 0x1f0))(*(float *)(param_1 + 0x1d) * 20.0,&local_98);
  param_1[0x2a] = local_98;
  param_1[0x2b] = lStack_90;
  param_1[0x2c] = local_88;
  param_1[0x2d] = lStack_80;
  *(undefined4 *)(param_1 + 0x2e) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x174) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x2f) = uStack_70;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStack_6c;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x184) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x31) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uStack_5c;
  lStack_c0 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  local_c8 = 0x3f800000;
  local_b8 = 0x3f80000000000000;
  uStack_a0 = 0x3f800000;
  uStack_9c = 0;
  (**(code **)(*param_1 + 0x1e0))(param_1,&local_c8);
  param_1[0x32] = local_c8;
  param_1[0x33] = lStack_c0;
  param_1[0x34] = local_b8;
  param_1[0x35] = lStack_b0;
  *(undefined4 *)(param_1 + 0x36) = (undefined4)local_a8;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 0x37) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uStack_9c;
  iVar3 = (int)param_1[0x98e] + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(param_1[0x98d] + lVar5 * 8);
      plVar2 = (longlong *)plVar1[7];
      if (plVar2 != (longlong *)0x0) {
        local_58 = 0x3f800000;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        local_48 = 0;
        uStack_44 = 0x3f800000;
        uStack_40 = 0;
        uStack_3c = 0;
        (**(code **)(*plVar2 + 0x1e8))(plVar2,&local_58);
        Scaleform::Render::Matrix2x4<float>::TransformByInverse
                  ((Matrix2x4<float> *)&local_58,local_res10,param_2);
        local_e0 = 0;
        local_e8 = param_5;
        local_d8 = param_3;
        local_d4 = param_4;
        iVar3 = (**(code **)(*plVar1 + 0x208))(plVar1,local_res10,local_f8);
        if (iVar3 == 1) {
          if (local_f8[0] != 0) {
            return local_f8[0];
          }
          break;
        }
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  lVar5 = (longlong)(int)param_1[0xd];
  if (0 < lVar5) {
    lVar4 = lVar5 * 0x10;
    do {
      lVar4 = lVar4 + -0x10;
      plVar1 = *(longlong **)(param_1[0xc] + 8 + lVar4);
      local_e0 = 0;
      local_e8 = param_5;
      local_d8 = param_3;
      local_d4 = param_4;
      iVar3 = (**(code **)(*plVar1 + 0x208))(plVar1,param_2,local_f8);
      if (iVar3 == 1) {
        return local_f8[0];
      }
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
  }
  return 0;
}



// FUNCTION 1432e7d10 PrintObjectsReport body=84 status=ok
// SIG undefined PrintObjectsReport(void)

void Scaleform::GFx::MovieImpl::PrintObjectsReport(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x108))();
  if (in_stack_00000028 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))
                      (*(longlong **)(param_1 + 0x18),in_stack_00000030);
    if ((RefCountImpl *)*in_stack_00000028 != (RefCountImpl *)0x0) {
      RefCountImpl::Release((RefCountImpl *)*in_stack_00000028);
    }
    *in_stack_00000028 = uVar1;
  }
  return;
}



// FUNCTION 1432e7d70 FUN_1432e7d70 body=168 status=ok
// SIG undefined FUN_1432e7d70(void)

void FUN_1432e7d70(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    lVar1 = param_1 + 0x2400;
    lVar3 = 6;
    lVar2 = 6;
    do {
      Scaleform::GFx::KeyboardState::ResetState(lVar1);
      lVar1 = lVar1 + 0x688;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar1 = param_1 + 0x2210;
    do {
      FUN_14338a570(lVar1);
      lVar1 = lVar1 + 0x50;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_2 == '\0') {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffbffff;
  }
  else {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x40000;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e7e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))(*(longlong **)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 1432e7e20 FUN_1432e7e20 body=73 status=ok
// SIG undefined FUN_1432e7e20(void)

undefined1 FUN_1432e7e20(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(uint *)(param_1 + 0x52f0) >> 10 & 1) == 0) {
    cVar1 = FUN_1432cdfa0(param_1 + 0x5350);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_1432e7e4f;
  }
  uVar2 = 1;
LAB_1432e7e4f:
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffbff;
  }
  return uVar2;
}



// FUNCTION 1432e7e70 ForceUpdateImages body=33 status=ok
// SIG undefined ForceUpdateImages(void)

void Scaleform::GFx::MovieImpl::ForceUpdateImages(longlong param_1)

{
  FUN_1432ce900(param_1 + 0x5350);
  *(char *)(param_1 + 0x5468) = *(char *)(param_1 + 0x5468) + '\x01';
  return;
}



// FUNCTION 1432e7ea0 FUN_1432e7ea0 body=1292 status=ok
// SIG undefined FUN_1432e7ea0(void)

void FUN_1432e7ea0(longlong param_1,Rect<float> *param_2,float *param_3,uint param_4)

{
  Matrix2x4<float> *pMVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_f8 [4];
  float local_e8 [4];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  if ((((*(float *)(param_2 + 8) < param_3[2]) || (*(float *)(param_2 + 0xc) < param_3[3])) ||
      (*param_3 < *(float *)param_2)) || (param_3[1] < *(float *)(param_2 + 4))) {
    local_a8 = 0x3f800000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_98 = 0;
    uStack_94 = 0x3f800000;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_1432e83f0();
    pMVar1 = (Matrix2x4<float> *)(param_1 + 0x120);
    Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_a8,pMVar1);
    local_f8[0] = 0.0;
    local_f8[1] = 0.0;
    local_f8[2] = 0.0;
    local_f8[3] = 0.0;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform
              ((Matrix2x4<float> *)&local_a8,(Rect<float> *)local_f8,param_2);
    dVar5 = 1.0;
    local_bc = *param_3 * 20.0;
    local_ac = param_3[1] * 20.0;
    local_d0 = param_3[2] * 20.0;
    local_cc = param_3[3] * 20.0;
    dVar3 = 1.0;
    if ((param_4 & 1) == 0) {
      if (local_f8[2] - local_f8[0] < local_d0 - local_bc) {
        dVar5 = (double)(local_f8[2] - local_f8[0]) / (double)(local_d0 - local_bc);
      }
      dVar3 = 1.0;
      if (local_f8[3] - local_f8[1] < local_cc - local_ac) {
        dVar3 = (double)(local_f8[3] - local_f8[1]) / (double)(local_cc - local_ac);
      }
    }
    local_d8 = local_bc;
    local_d4 = local_ac;
    if ((((param_4 & 2) != 0) && (dVar5 == 1.0)) && (dVar3 == 1.0)) {
      fVar8 = local_f8[3] - local_f8[1];
      fVar9 = local_f8[2] - local_f8[0];
      fVar6 = local_cc - local_ac;
      fVar7 = local_d0 - local_bc;
      if ((double)(fVar6 * fVar7 + fVar6 * fVar7) < (double)(fVar8 * fVar9)) {
        dVar4 = (double)(fVar8 * fVar9) * 0.5;
        dVar3 = _guard_xfg_dispatch_icall_nop(((double)fVar7 / (double)fVar6) * dVar4);
        dVar5 = dVar3 / (double)fVar7;
        dVar3 = (dVar4 / dVar3) / (double)fVar6;
        if ((double)fVar9 < (double)fVar7 * dVar5) {
          dVar5 = (double)fVar9 / (double)fVar7;
        }
        if ((double)fVar8 < (double)fVar6 * dVar3) {
          dVar3 = (double)fVar8 / (double)fVar6;
        }
      }
    }
    if (dVar3 <= dVar5) {
      dVar5 = dVar3;
    }
    fVar7 = 0.0;
    local_c8 = (float)dVar5;
    local_c4 = local_c8 * 0.0;
    local_bc = (-local_bc + 0.0) * local_c8 + local_bc;
    local_ac = (-local_ac + 0.0) * local_c8 + local_ac;
    local_e8[0] = 0.0;
    local_e8[1] = 0.0;
    local_e8[2] = 0.0;
    local_e8[3] = 0.0;
    local_c0 = local_c4;
    local_b8 = local_c4;
    local_b4 = local_c8;
    local_b0 = local_c4;
    Scaleform::Render::Matrix2x4<float>::EncloseTransform
              ((Matrix2x4<float> *)&local_c8,(Rect<float> *)local_e8,(Rect<float> *)&local_d8);
    fVar6 = 0.0;
    if (((local_f8[2] < local_e8[0]) || (local_e8[2] < local_f8[0])) ||
       ((local_f8[2] < local_e8[2] || (local_e8[0] < local_f8[0])))) {
      if ((param_4 & 4) == 0) {
        fVar7 = ((local_e8[2] - local_e8[0]) * 0.5 + local_e8[0]) -
                (local_f8[2] - (local_f8[2] - local_f8[0]) * 0.5);
      }
      else {
        fVar7 = local_e8[0] - local_f8[0];
      }
    }
    if ((((local_f8[3] < local_e8[1]) || (local_e8[3] < local_f8[1])) || (local_f8[3] < local_e8[3])
        ) || (local_e8[1] < local_f8[1])) {
      if ((param_4 & 4) == 0) {
        fVar6 = ((local_e8[3] - local_e8[1]) * 0.5 + local_e8[1]) -
                (local_f8[3] - (local_f8[3] - local_f8[1]) * 0.5);
      }
      else {
        fVar6 = local_e8[1] - local_f8[1];
      }
    }
    fVar8 = *(float *)pMVar1;
    fVar9 = *(float *)(param_1 + 0x130);
    fVar2 = *(float *)(param_1 + 0x134);
    local_bc = local_bc + -fVar7;
    fVar7 = *(float *)(param_1 + 0x124);
    local_ac = local_ac + -fVar6;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(float *)pMVar1 = fVar7 * local_b8 + fVar8 * local_c8;
    *(float *)(param_1 + 0x130) = fVar2 * local_b8 + fVar9 * local_c8;
    *(float *)(param_1 + 0x124) = fVar7 * local_b4 + fVar8 * local_c4;
    *(float *)(param_1 + 0x134) = fVar2 * local_b4 + fVar9 * local_c4;
    *(float *)(param_1 + 300) = fVar7 * local_ac + fVar8 * local_bc + *(float *)(param_1 + 300);
    *(float *)(param_1 + 0x13c) = fVar2 * local_ac + fVar9 * local_bc + *(float *)(param_1 + 0x13c);
    FUN_1433625b0(*(undefined8 *)(param_1 + 0x90),pMVar1);
  }
  return;
}



// FUNCTION 1432e83c0 FUN_1432e83c0 body=38 status=ok
// SIG undefined FUN_1432e83c0(void)

void FUN_1432e83c0(longlong param_1)

{
  FUN_1432e83f0();
  FUN_1433625b0(*(undefined8 *)(param_1 + 0x90),param_1 + 0x120);
  return;
}



// FUNCTION 1432e83f0 FUN_1432e83f0 body=291 status=ok
// SIG undefined FUN_1432e83f0(void)

void FUN_1432e83f0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  *(undefined8 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 0x100) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x104) ^ 0x80000000;
  fVar2 = (float)*(int *)(param_1 + 0xbc) /
          (*(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x104));
  fVar1 = (float)*(int *)(param_1 + 0xb8) /
          (*(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x100));
  *(float *)(param_1 + 0x120) = fVar1 * *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x124) = fVar1 * *(float *)(param_1 + 0x124);
  *(float *)(param_1 + 0x128) = fVar1 * *(float *)(param_1 + 0x128);
  *(float *)(param_1 + 300) = fVar1 * *(float *)(param_1 + 300);
  *(float *)(param_1 + 0x130) = fVar2 * *(float *)(param_1 + 0x130);
  *(float *)(param_1 + 0x134) = fVar2 * *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x138) = fVar2 * *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x13c) = fVar2 * *(float *)(param_1 + 0x13c);
  return;
}



// FUNCTION 1432e8520 FUN_1432e8520 body=337 status=ok
// SIG undefined FUN_1432e8520(void)

void FUN_1432e8520(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong *plVar5;
  RefCountNTSImpl *pRVar6;
  RefCountNTSImpl *this;
  
  if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
    if (param_5 == 0) {
      param_5 = param_1 + 0x4cc0 +
                (ulonglong)*(byte *)((ulonglong)*(byte *)(param_3 + 10) + 0x52c4 + param_1) * 0x60;
    }
    *param_2 = param_5;
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_5 + 0x38);
    uVar3 = *(undefined4 *)(param_5 + 0x40);
    uVar1 = *(undefined4 *)(param_5 + 0x4c);
    uVar2 = *(undefined4 *)(param_5 + 0x48);
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_5 + 0x44);
    *(undefined4 *)(param_2 + 5) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined1 *)((longlong)param_2 + 0x3b) = param_4;
    *(undefined1 *)((longlong)param_2 + 0x3a) = 0;
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_3 + 10);
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_3 + 4);
    *(undefined1 *)((longlong)param_2 + 0x39) = *(undefined1 *)(param_3 + 9);
    FUN_1432e9eb0();
    pRVar6 = (RefCountNTSImpl *)0x0;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    piVar4 = *(int **)(param_5 + 0x28);
    this = pRVar6;
    if (piVar4 != (int *)0x0) {
      this = *(RefCountNTSImpl **)(piVar4 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(param_5 + 0x28) = 0;
        this = (RefCountNTSImpl *)0x0;
      }
      else if (*(int *)(this + 8) == 0) {
        this = (RefCountNTSImpl *)0x0;
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
    }
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    if ((RefCountNTSImpl *)param_2[1] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_2[1]);
    }
    param_2[1] = (longlong)this;
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    if ((param_2[1] != 0) && (*(RefCountNTSImpl **)(param_5 + 0x10) != (RefCountNTSImpl *)0x0)) {
      plVar5 = *(longlong **)(param_5 + 8);
      do {
        if (*plVar5 == param_2[1]) {
          *(int *)(param_2 + 2) = (int)pRVar6;
          break;
        }
        pRVar6 = pRVar6 + 1;
        plVar5 = plVar5 + 1;
      } while (pRVar6 < *(RefCountNTSImpl **)(param_5 + 0x10));
    }
    *(undefined1 *)((longlong)param_2 + 0x3c) = 1;
  }
  return;
}



// FUNCTION 1432e8680 FUN_1432e8680 body=3441 status=ok
// SIG undefined FUN_1432e8680(void)

void FUN_1432e8680(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  RefCountNTSImpl *pRVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  Rect<float> *pRVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_res10;
  float local_1a8;
  float local_198;
  float local_188;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  longlong local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  if (param_2 != 5) {
    return;
  }
  if (*(int *)(param_3 + 4) != 9) {
    if ((*(char *)((ulonglong)*(byte *)((ulonglong)*(byte *)(param_3 + 10) + 0x52c4 + param_1) *
                   0x60 + 0x4d10 + param_1) == '\0') &&
       (*(char *)((longlong)param_4 + 0x3a) == '\0')) {
      return;
    }
    if (3 < *(int *)(param_3 + 4) - 0x25U) {
      return;
    }
  }
  FUN_1432e8520(param_1,param_4,param_3,0,0);
  lVar19 = *param_4;
  iVar6 = *(int *)(lVar19 + 0x10);
  lVar17 = (longlong)iVar6;
  local_158 = lVar19;
  local_138 = lVar17;
  if (*(int *)(param_3 + 4) == 9) {
    uVar14 = (ulonglong)(int)param_4[2];
    iVar18 = 0;
    *(undefined4 *)(param_4 + 2) = 0xffffffff;
    uVar15 = uVar14;
    if (0 < iVar6) {
      do {
        if ((*(byte *)(param_3 + 9) & 1) == 0) {
          uVar15 = (ulonglong)((int)uVar15 + 1);
          uVar14 = uVar14 + 1;
          if (lVar17 <= (longlong)uVar14) {
            uVar15 = 0;
            uVar14 = 0;
          }
        }
        else {
          uVar15 = (ulonglong)((int)uVar15 - 1);
          uVar14 = uVar14 - 1;
          if ((longlong)uVar14 < 0) {
            uVar15 = (ulonglong)(iVar6 - 1);
            uVar14 = lVar17 - 1;
          }
        }
        plVar7 = *(longlong **)(*(longlong *)(lVar19 + 8) + uVar14 * 8);
        if ((plVar7 != (longlong *)0x0) &&
           (((*(char *)((longlong)param_4 + 0x3b) != '\0' ||
             (cVar10 = (**(code **)(*plVar7 + 0x2c0))(), cVar10 != '\0')) &&
            (plVar7 = *(longlong **)(*(longlong *)(lVar19 + 8) + uVar14 * 8),
            cVar10 = (**(code **)(*plVar7 + 0x2b0))(plVar7,param_1,(char)param_4[7]), cVar10 != '\0'
            )))) {
          *(int *)(param_4 + 2) = (int)uVar15;
          break;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
  }
  else if ((longlong *)param_4[1] != (longlong *)0x0) {
    cVar10 = (**(code **)(*(longlong *)param_4[1] + 0x2c8))();
    if (cVar10 == '\0') {
      uVar11 = *(byte *)(param_1 + 0x52f3) & 3;
      if (uVar11 == 3) {
        uVar11 = 0xffffffff;
      }
      if ((uVar11 != 1) && (*(char *)((longlong)param_4 + 0x3a) == '\0')) goto LAB_1432e9321;
    }
    local_f8 = 0x3f800000;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_e8 = 0;
    uStack_e4 = 0x3f800000;
    uStack_e0 = 0;
    uStack_dc = 0;
    FUN_14336a6d0(param_4[1],&local_f8);
    pRVar12 = (Rect<float> *)
              (**(code **)(*(longlong *)param_4[1] + 0x2f0))((longlong *)param_4[1],&local_148);
    Scaleform::Render::Matrix2x4<float>::EncloseTransform
              ((Matrix2x4<float> *)&local_f8,(Rect<float> *)&local_168,pRVar12);
    iVar18 = *(int *)(param_3 + 4);
    if ((int)param_4[6] == iVar18) {
      if ((iVar18 - 0x26U & 0xfffffffd) == 0) {
        local_168 = *(float *)(param_4 + 4);
        fStack_160 = *(float *)(param_4 + 5);
      }
      else if ((iVar18 - 0x25U & 0xfffffffd) == 0) {
        fStack_164 = *(float *)((longlong)param_4 + 0x24);
        fStack_15c = *(float *)((longlong)param_4 + 0x2c);
      }
    }
    else {
      param_4[4] = CONCAT44(fStack_164,local_168);
      param_4[5] = CONCAT44(fStack_15c,fStack_160);
      *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_3 + 4);
    }
    iVar18 = *(int *)(param_3 + 4);
    if ((iVar18 - 0x25U & 0xfffffffd) == 0) {
      fVar27 = 2.1474836e+09;
      uVar14 = (ulonglong)(int)param_4[2];
      local_1a8 = 2.1474836e+09;
      if (iVar18 == 0x27) {
        fVar26 = 2.1474836e+09;
      }
      else {
        fVar26 = -2.1474836e+09;
      }
      bVar9 = false;
      uVar11 = iVar6 - 1;
      local_198 = 2.1474836e+09;
      lVar19 = local_158;
      if (0 < (int)uVar11) {
        uVar16 = (ulonglong)uVar11;
        uVar15 = uVar14;
        local_res10 = fVar26;
        local_188 = fVar26;
        do {
          if (*(int *)(param_3 + 4) == 0x27) {
            uVar13 = (int)uVar14 + 1;
            uVar15 = uVar15 + 1;
          }
          else {
            uVar13 = (int)uVar14 - 1;
            uVar15 = uVar15 - 1;
          }
          uVar14 = (ulonglong)uVar13;
          if ((longlong)uVar15 < local_138) {
            if ((int)uVar13 < 0) {
              uVar14 = (ulonglong)uVar11;
              uVar15 = local_138 - 1;
            }
          }
          else {
            uVar14 = 0;
            uVar15 = 0;
          }
          lVar19 = *(longlong *)(local_158 + 8);
          lVar17 = *(longlong *)(lVar19 + uVar15 * 8);
          if (lVar17 != 0) {
            piVar1 = (int *)(lVar17 + 8);
            *piVar1 = *piVar1 + 1;
          }
          pRVar8 = *(RefCountNTSImpl **)(lVar19 + uVar15 * 8);
          if (((*(char *)((longlong)param_4 + 0x3b) == '\0') &&
              (cVar10 = (**(code **)(*(longlong *)pRVar8 + 0x2c0))(pRVar8), cVar10 == '\0')) ||
             (cVar10 = (**(code **)(*(longlong *)pRVar8 + 0x2b0))(pRVar8,param_1,(char)param_4[7]),
             cVar10 == '\0')) {
            Scaleform::RefCountNTSImpl::Release(pRVar8);
          }
          else {
            local_128 = 0x3f800000;
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            local_118 = 0;
            uStack_114 = 0x3f800000;
            uStack_110 = 0;
            uStack_10c = 0;
            FUN_14336a6d0(pRVar8,&local_128);
            pRVar12 = (Rect<float> *)(**(code **)(*(longlong *)pRVar8 + 0x2f0))(pRVar8,local_108);
            Scaleform::Render::Matrix2x4<float>::EncloseTransform
                      ((Matrix2x4<float> *)&local_128,(Rect<float> *)&local_148,pRVar12);
            fVar3 = local_13c;
            fVar4 = local_140;
            fVar5 = local_144;
            fVar23 = fStack_160;
            if (*(int *)(param_3 + 4) == 0x27) {
              fVar24 = 3.4028235e+38;
              fVar25 = fStack_160 + 1.0;
            }
            else {
              fVar25 = 1.1754944e-38;
              fVar24 = local_168 - 1.0;
            }
            fVar2 = local_148;
            if (((local_13c < fStack_164) || (fStack_15c < local_144)) ||
               ((fVar24 < local_148 || (local_140 < fVar25)))) {
LAB_1432e902c:
              if (bVar9) {
                Scaleform::RefCountNTSImpl::Release(pRVar8);
                goto LAB_1432e92af;
              }
            }
            else {
              fVar24 = local_144;
              if (local_144 <= fStack_164) {
                fVar24 = fStack_164;
              }
              fVar25 = local_13c;
              if (fStack_15c < local_13c) {
                fVar25 = fStack_15c;
              }
              if (fVar25 - fVar24 < 40.0) goto LAB_1432e902c;
              if (!bVar9) {
                local_188 = local_148;
                local_res10 = local_140;
                local_1a8 = local_13c;
                local_198 = local_144;
                bVar9 = true;
                *(int *)(param_4 + 2) = (int)uVar14;
                Scaleform::RefCountNTSImpl::Release(pRVar8);
                fVar26 = fVar4;
                fVar27 = fVar3;
                goto LAB_1432e92af;
              }
            }
            fVar24 = (fStack_15c - fStack_164) * 0.5 + fStack_164;
            if (*(int *)(param_3 + 4) == 0x27) {
              fVar25 = fStack_160;
              if (fStack_160 <= local_148) {
                fVar25 = local_148;
              }
              fVar28 = fStack_160;
              if (fStack_160 <= local_188) {
                fVar28 = local_188;
              }
              if (((fVar25 <= local_140) && (local_144 <= local_13c)) &&
                 (iVar18 = FUN_1432dcbf0((local_140 - fVar25) * 0.05), 3 < iVar18)) {
                fVar21 = _guard_xfg_dispatch_icall_nop((fVar25 - fVar23) * 0.05);
                fVar22 = _guard_xfg_dispatch_icall_nop
                                   ((((fVar3 - fVar5) * 0.5 + fVar5) - fVar24) * 0.05);
                fVar23 = _guard_xfg_dispatch_icall_nop((fVar28 - fVar23) * 0.05);
                fVar24 = _guard_xfg_dispatch_icall_nop
                                   ((((fVar27 - local_198) * 0.5 + local_198) - fVar24) * 0.05);
                bVar20 = 0.0 < fVar21;
LAB_1432e9139:
                fVar26 = local_res10;
                fVar27 = local_1a8;
                if (!bVar20 && fVar21 != 0.0) {
                  Scaleform::RefCountNTSImpl::Release(pRVar8);
                  goto LAB_1432e92af;
                }
                if (bVar9) {
                  if ((ABS(fVar21) < ABS(fVar23)) ||
                     ((fVar21 == fVar23 && (ABS(fVar22) < ABS(fVar24))))) {
LAB_1432e938a:
                    *(int *)(param_4 + 2) = (int)uVar14;
                    fVar26 = fVar4;
                    fVar27 = fVar3;
                    local_res10 = fVar4;
                    local_1a8 = fVar3;
                    local_198 = fVar5;
                    local_188 = fVar2;
                  }
                }
                else if (fVar22 * fVar22 + fVar21 * fVar21 < fVar24 * fVar24 + fVar23 * fVar23)
                goto LAB_1432e938a;
              }
            }
            else {
              fVar23 = local_168;
              if (local_140 <= local_168) {
                fVar23 = local_140;
              }
              fVar25 = local_168;
              if (fVar26 <= local_168) {
                fVar25 = fVar26;
              }
              if (((local_148 <= fVar23) && (local_144 <= local_13c)) &&
                 (iVar18 = FUN_1432dcbf0((fVar23 - local_148) * 0.05), 3 < iVar18)) {
                fVar21 = _guard_xfg_dispatch_icall_nop((fVar23 - local_168) * 0.05);
                fVar22 = _guard_xfg_dispatch_icall_nop
                                   ((((fVar3 - fVar5) * 0.5 + fVar5) - fVar24) * 0.05);
                fVar23 = _guard_xfg_dispatch_icall_nop((fVar25 - local_168) * 0.05);
                fVar24 = _guard_xfg_dispatch_icall_nop
                                   ((((fVar27 - local_198) * 0.5 + local_198) - fVar24) * 0.05);
                bVar20 = fVar21 < 0.0;
                goto LAB_1432e9139;
              }
            }
            Scaleform::RefCountNTSImpl::Release(pRVar8);
          }
LAB_1432e92af:
          uVar16 = uVar16 - 1;
          lVar19 = local_158;
        } while (uVar16 != 0);
      }
    }
    else if ((iVar18 - 0x26U & 0xfffffffd) == 0) {
      fVar27 = 2.1474836e+09;
      uVar14 = (ulonglong)(int)param_4[2];
      local_198 = 0.0;
      local_188 = 0.0;
      local_1a8 = 2.1474836e+09;
      if (iVar18 == 0x28) {
        fVar26 = 2.1474836e+09;
      }
      else {
        fVar26 = -2.1474836e+09;
      }
      bVar9 = false;
      uVar11 = iVar6 - 1;
      lVar19 = local_158;
      if (0 < (int)uVar11) {
        uVar16 = (ulonglong)uVar11;
        uVar15 = uVar14;
        local_res10 = fVar26;
        do {
          if (*(int *)(param_3 + 4) == 0x28) {
            uVar13 = (int)uVar14 + 1;
            uVar15 = uVar15 + 1;
          }
          else {
            uVar13 = (int)uVar14 - 1;
            uVar15 = uVar15 - 1;
          }
          uVar14 = (ulonglong)uVar13;
          if ((longlong)uVar15 < local_138) {
            if ((int)uVar13 < 0) {
              uVar14 = (ulonglong)uVar11;
              uVar15 = local_138 - 1;
            }
          }
          else {
            uVar14 = 0;
            uVar15 = 0;
          }
          lVar19 = *(longlong *)(local_158 + 8);
          lVar17 = *(longlong *)(lVar19 + uVar15 * 8);
          if (lVar17 != 0) {
            piVar1 = (int *)(lVar17 + 8);
            *piVar1 = *piVar1 + 1;
          }
          pRVar8 = *(RefCountNTSImpl **)(lVar19 + uVar15 * 8);
          if (((*(char *)((longlong)param_4 + 0x3b) == '\0') &&
              (cVar10 = (**(code **)(*(longlong *)pRVar8 + 0x2c0))(pRVar8), cVar10 == '\0')) ||
             (cVar10 = (**(code **)(*(longlong *)pRVar8 + 0x2b0))(pRVar8,param_1,(char)param_4[7]),
             cVar10 == '\0')) {
            Scaleform::RefCountNTSImpl::Release(pRVar8);
          }
          else {
            local_128 = 0x3f800000;
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            local_118 = 0;
            uStack_114 = 0x3f800000;
            uStack_110 = 0;
            uStack_10c = 0;
            FUN_14336a6d0(pRVar8,&local_128);
            pRVar12 = (Rect<float> *)(**(code **)(*(longlong *)pRVar8 + 0x2f0))(pRVar8,local_108);
            Scaleform::Render::Matrix2x4<float>::EncloseTransform
                      ((Matrix2x4<float> *)&local_128,(Rect<float> *)&local_148,pRVar12);
            fVar3 = local_140;
            fVar4 = local_144;
            fVar5 = local_148;
            fVar23 = fStack_164;
            if (*(int *)(param_3 + 4) == 0x28) {
              fVar25 = 3.4028235e+38;
              fVar24 = fStack_15c + 1.0;
            }
            else {
              fVar24 = 1.1754944e-38;
              fVar25 = fStack_164 - 1.0;
            }
            fVar2 = local_13c;
            if ((((local_13c < fVar24) || (fVar25 < local_144)) || (fStack_160 < local_148)) ||
               (local_140 < local_168)) {
LAB_1432e8b43:
              if (bVar9) {
                Scaleform::RefCountNTSImpl::Release(pRVar8);
                goto LAB_1432e8dc6;
              }
            }
            else {
              fVar24 = local_148;
              if (local_148 <= local_168) {
                fVar24 = local_168;
              }
              fVar25 = local_140;
              if (fStack_160 < local_140) {
                fVar25 = fStack_160;
              }
              if (fVar25 - fVar24 < 40.0) goto LAB_1432e8b43;
              if (!bVar9) {
                local_1a8 = local_148;
                local_res10 = local_144;
                local_198 = local_140;
                local_188 = local_13c;
                bVar9 = true;
                *(int *)(param_4 + 2) = (int)uVar14;
                Scaleform::RefCountNTSImpl::Release(pRVar8);
                fVar26 = fVar4;
                fVar27 = fVar5;
                goto LAB_1432e8dc6;
              }
            }
            fVar24 = (fStack_160 - local_168) * 0.5 + local_168;
            if (*(int *)(param_3 + 4) == 0x26) {
              fVar25 = fStack_164;
              if (local_188 <= fStack_164) {
                fVar25 = local_188;
              }
              fVar22 = fStack_164;
              if (local_13c <= fStack_164) {
                fVar22 = local_13c;
              }
              if (((local_148 <= local_140) && (local_144 <= fVar22)) &&
                 (iVar18 = FUN_1432dcbf0((fVar22 - local_144) * 0.05), 3 < iVar18)) {
                fVar21 = _guard_xfg_dispatch_icall_nop
                                   ((((fVar3 - fVar5) * 0.5 + fVar5) - fVar24) * 0.05);
                fVar22 = _guard_xfg_dispatch_icall_nop((fVar22 - fVar23) * 0.05);
                fVar24 = _guard_xfg_dispatch_icall_nop
                                   ((((local_198 - fVar27) * 0.5 + fVar27) - fVar24) * 0.05);
                fVar23 = _guard_xfg_dispatch_icall_nop((fVar25 - fVar23) * 0.05);
                if (0.0 < fVar22) {
                  Scaleform::RefCountNTSImpl::Release(pRVar8);
                  fVar26 = local_res10;
                  fVar27 = local_1a8;
                  goto LAB_1432e8dc6;
                }
LAB_1432e8d6a:
                if (bVar9) {
                  if ((ABS(fVar22) < ABS(fVar23)) ||
                     ((fVar26 = local_res10, fVar27 = local_1a8, fVar22 == fVar23 &&
                      (ABS(fVar21) < ABS(fVar24))))) {
LAB_1432e8dfd:
                    *(int *)(param_4 + 2) = (int)uVar14;
                    fVar26 = fVar4;
                    fVar27 = fVar5;
                    local_res10 = fVar4;
                    local_1a8 = fVar5;
                    local_198 = fVar3;
                    local_188 = fVar2;
                  }
                }
                else {
                  fVar26 = local_res10;
                  fVar27 = local_1a8;
                  if (fVar22 * fVar22 + fVar21 * fVar21 < fVar23 * fVar23 + fVar24 * fVar24)
                  goto LAB_1432e8dfd;
                }
              }
            }
            else {
              fVar23 = fStack_15c;
              if (fStack_15c <= local_144) {
                fVar23 = local_144;
              }
              fVar25 = fStack_15c;
              if (fStack_15c <= fVar26) {
                fVar25 = fVar26;
              }
              if (((local_148 <= local_140) && (fVar23 <= local_13c)) &&
                 (iVar18 = FUN_1432dcbf0((local_13c - fVar23) * 0.05), 3 < iVar18)) {
                fVar21 = _guard_xfg_dispatch_icall_nop
                                   ((((fVar3 - fVar5) * 0.5 + fVar5) - fVar24) * 0.05);
                fVar22 = _guard_xfg_dispatch_icall_nop((fVar23 - fStack_15c) * 0.05);
                fVar24 = _guard_xfg_dispatch_icall_nop
                                   ((((local_198 - fVar27) * 0.5 + fVar27) - fVar24) * 0.05);
                fVar23 = _guard_xfg_dispatch_icall_nop((fVar25 - fStack_15c) * 0.05);
                if (0.0 <= fVar22) goto LAB_1432e8d6a;
                Scaleform::RefCountNTSImpl::Release(pRVar8);
                fVar26 = local_res10;
                fVar27 = local_1a8;
                goto LAB_1432e8dc6;
              }
            }
            Scaleform::RefCountNTSImpl::Release(pRVar8);
          }
LAB_1432e8dc6:
          uVar16 = uVar16 - 1;
          lVar19 = local_158;
        } while (uVar16 != 0);
      }
    }
  }
LAB_1432e9321:
  iVar18 = (int)param_4[2];
  if ((iVar18 < 0) || (iVar6 <= iVar18)) {
    if ((RefCountNTSImpl *)param_4[1] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_4[1]);
    }
    param_4[1] = 0;
  }
  else {
    lVar19 = *(longlong *)(lVar19 + 8);
    lVar17 = *(longlong *)(lVar19 + (longlong)iVar18 * 8);
    if (lVar17 != 0) {
      piVar1 = (int *)(lVar17 + 8);
      *piVar1 = *piVar1 + 1;
    }
    if ((RefCountNTSImpl *)param_4[1] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_4[1]);
    }
    param_4[1] = *(longlong *)(lVar19 + (longlong)iVar18 * 8);
  }
  return;
}



// FUNCTION 1432e9400 FUN_1432e9400 body=370 status=ok
// SIG undefined FUN_1432e9400(void)

void FUN_1432e9400(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RefCountNTSImpl *pRVar4;
  int iVar5;
  longlong lVar6;
  RefCountNTSImpl *local_res10;
  
  if (((param_2 != 0) && (*(char *)(param_2 + 0x3c) != '\0')) &&
     (lVar6 = (ulonglong)*(byte *)((ulonglong)*(byte *)(param_2 + 0x38) + 0x52c4 + param_1) * 0x60,
     (*(byte *)(lVar6 + 0x4d11 + param_1) & 1) != 0)) {
    iVar5 = *(int *)(param_2 + 0x10);
    if ((-1 < iVar5) && (iVar5 < *(int *)(lVar6 + 0x4cd0 + param_1))) {
      pRVar4 = *(RefCountNTSImpl **)(*(longlong *)(lVar6 + 0x4cc8 + param_1) + (longlong)iVar5 * 8);
      FUN_1432efd10(param_1 + 0x4ce8 + lVar6,&local_res10);
      if (local_res10 != (RefCountNTSImpl *)0x0) {
        *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(local_res10);
      }
      if (local_res10 != pRVar4) {
        *(undefined4 *)(lVar6 + 0x4cf8 + param_1) = *(undefined4 *)(param_2 + 0x30);
        uVar1 = *(undefined4 *)(param_2 + 0x2c);
        uVar2 = *(undefined4 *)(param_2 + 0x28);
        uVar3 = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(lVar6 + 0x4d04 + param_1) = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(lVar6 + 0x4d08 + param_1) = uVar2;
        *(undefined4 *)(lVar6 + 0x4d0c + param_1) = uVar1;
        *(undefined4 *)(lVar6 + 0x4d00 + param_1) = uVar3;
        FUN_1432eaef0(param_1,pRVar4,0,*(undefined1 *)(param_2 + 0x38),2,param_2);
      }
      if ((pRVar4 == (RefCountNTSImpl *)0x0) ||
         (iVar5 = (**(code **)(*(longlong *)pRVar4 + 0x290))(pRVar4), iVar5 != 4)) {
        if (*(char *)(lVar6 + 0x4d10 + param_1) == '\0') {
          *(undefined1 *)(param_1 + 0x52d4) = 1;
        }
        *(undefined1 *)(lVar6 + 0x4d10 + param_1) = 1;
      }
      else {
        if (*(char *)(lVar6 + 0x4d10 + param_1) != '\0') {
          *(undefined1 *)(param_1 + 0x52d4) = 1;
        }
        *(undefined1 *)(lVar6 + 0x4d10 + param_1) = 0;
      }
      if (local_res10 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_res10);
      }
    }
  }
  return;
}



// FUNCTION 1432e9580 FUN_1432e9580 body=687 status=ok
// SIG undefined FUN_1432e9580(void)

void FUN_1432e9580(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  RefCountNTSImpl *this;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  uint local_res8;
  undefined4 local_resc;
  undefined8 local_88;
  int local_80;
  undefined1 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined2 local_76;
  int local_74;
  int local_70;
  undefined8 local_68;
  RefCountNTSImpl *pRStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar6 = 1;
    local_res8 = 0;
    bVar8 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x20) == '\x02';
    local_68 = 0;
    pRStack_60 = (RefCountNTSImpl *)0x0;
    local_58 = 0xffffffff;
    uVar4 = (1 << ((byte)*(undefined4 *)(param_1 + 0x23f0) & 0x1f)) - 1;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    while ((uVar2 = local_res8, *(longlong *)(param_1 + 0x21c8) != 0 ||
           (*(int *)(param_1 + 0x2200) != 0))) {
      piVar3 = (int *)FUN_14338a0d0(param_1 + 0x280);
      iVar1 = *piVar3;
      if (iVar1 == 1) {
        FUN_1432e9840(param_1,piVar3,&local_68);
      }
      else if (iVar1 == 0) {
        FUN_1432e9a00(param_1,piVar3,&local_res8,bVar8);
      }
      else if (iVar1 == 4) {
        local_80 = piVar3[2];
        local_74 = piVar3[3];
        local_70 = piVar3[4];
        local_77 = (undefined1)piVar3[5];
        local_88 = 0x1000023;
        local_7c = 0;
        local_78 = 0;
        local_76 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
      }
      else if (iVar1 == 7) {
        FUN_1432e9d80(param_1);
      }
      else if (iVar1 == 5) {
        FUN_1432e9de0(param_1);
      }
      else if (iVar1 == 6) {
        FUN_1432e9e40(param_1);
      }
    }
    if ((((*(uint *)(param_1 + 0x52f0) >> 7 & 1) != 0) && ((uVar4 & local_res8) != uVar4)) &&
       (uVar5 = 0, *(int *)(param_1 + 0x23f0) != 0)) {
      do {
        if (((uVar2 & uVar6) == 0) && ((*(byte *)(param_1 + 0x225c + uVar5 * 0x50) & 0x10) != 0)) {
          lVar7 = (uVar5 + 0x6d) * 0x50 + param_1;
          *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar7 + 0x30);
          local_res8 = *(uint *)(param_1 + 0x2248 + uVar5 * 0x50);
          local_resc = *(undefined4 *)(param_1 + 0x224c + uVar5 * 0x50);
          this = (RefCountNTSImpl *)FUN_1432e79b0(param_1,&local_res8,uVar5,bVar8,0);
          if (this != (RefCountNTSImpl *)0x0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
          }
          FUN_1432f2fc0(lVar7,this);
          FUN_1432eccc0(param_1,uVar5,this);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))
                    (*(longlong **)(param_1 + 0x18),uVar5);
          if (this != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(this);
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 * 2;
      } while (uVar4 < *(uint *)(param_1 + 0x23f0));
    }
    FUN_1432e9400(param_1,&local_68);
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xffffff7f;
    if (pRStack_60 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRStack_60);
    }
  }
  return;
}



// FUNCTION 1432e9840 FUN_1432e9840 body=442 status=ok
// SIG undefined FUN_1432e9840(void)

void FUN_1432e9840(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  RefCountNTSImpl *this;
  longlong lVar5;
  uint uVar6;
  undefined4 local_res10 [2];
  undefined4 local_38;
  int local_34;
  int local_30;
  char local_2c;
  undefined1 local_28;
  undefined1 local_27;
  byte local_26;
  undefined1 local_25;
  
  lVar5 = 0;
  piVar1 = (int *)(param_2 + 8);
  local_res10[0] = 0;
  local_30 = *(int *)(param_2 + 0xc);
  if (local_30 == 0) {
    if (*piVar1 != 0) {
      param_1 = (ulonglong)*(byte *)((ulonglong)*(byte *)(param_2 + 0x12) + 0x52c4 + param_1) * 0x60
                + param_1;
      piVar4 = *(int **)(param_1 + 0x4ce8);
      if (piVar4 != (int *)0x0) {
        this = *(RefCountNTSImpl **)(piVar4 + 2);
        if (this == (RefCountNTSImpl *)0x0) {
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)(param_1 + 0x4ce8) = 0;
        }
        else if (*(int *)(this + 8) != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(this);
          (**(code **)(*(longlong *)this + 0x310))(this,*piVar1,*(undefined1 *)(param_2 + 0x12));
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
    }
  }
  else {
    cVar2 = *(char *)(param_2 + 0x13);
    local_2c = *(char *)(param_2 + 0x10);
    local_38 = 0x80;
    if (cVar2 != '\0') {
      local_38 = 0x40;
    }
    local_34 = *piVar1;
    local_27 = *(undefined1 *)(param_2 + 0x12);
    local_26 = *(byte *)(param_2 + 0x11) | 0x80;
    local_28 = 0;
    local_25 = 0;
    if (local_2c == '\0') {
      local_2c = FUN_14338a8c0(&local_38);
    }
    uVar6 = *(uint *)(param_1 + 0x68);
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + (ulonglong)uVar6 * 0x10);
      (**(code **)(*plVar3 + 0x330))(plVar3,&local_38,local_res10);
    }
    if (*(byte *)(param_2 + 0x12) < 6) {
      lVar5 = param_1 + 0x2400 + (ulonglong)*(byte *)(param_2 + 0x12) * 0x688;
    }
    Scaleform::GFx::KeyboardState::NotifyListeners
              (lVar5,*(undefined8 *)(param_1 + 0x58),&local_38,local_res10[0]);
    uVar6 = *(uint *)(param_1 + 0x52f0) >> 0x1e;
    if (uVar6 == 3) {
      uVar6 = 0xffffffff;
    }
    if (uVar6 != 1) {
      FUN_1432e8680(param_1,6 - (uint)(cVar2 != '\0'),piVar1,param_3);
    }
  }
  return;
}



// FUNCTION 1432e9a00 FUN_1432e9a00 body=794 status=ok
// SIG undefined FUN_1432e9a00(void)

void FUN_1432e9a00(longlong param_1,longlong param_2,uint *param_3,undefined1 param_4)

{
  byte bVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  RefCountNTSImpl *this;
  RefCountNTSImpl *this_00;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined1 local_38;
  byte local_37;
  undefined2 local_36;
  
  *param_3 = *param_3 | 1 << (*(byte *)(param_2 + 0x14) & 0x1f);
  bVar1 = *(byte *)(param_2 + 0x14);
  uVar8 = (ulonglong)bVar1;
  lVar7 = uVar8 * 0x50;
  FUN_14338a590(param_1 + lVar7 + 0x2210);
  local_res8 = *(undefined4 *)(param_2 + 8);
  local_resc = *(undefined4 *)(param_2 + 0xc);
  this = (RefCountNTSImpl *)FUN_1432e79b0(param_1,&local_res8,uVar8,param_4,0);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  FUN_1432f2fc0(param_1 + lVar7 + 0x2210);
  if (*(longlong *)(param_1 + 0x4b40 + uVar8 * 0x30) != 0) {
    FUN_14336e600();
  }
  iVar6 = 0;
  if ((*(short *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x10) & 1) != 0)) {
    if (((*(byte *)(param_2 + 0x13) & 0xc0) != 0) || (bVar4 = true, *(short *)(param_2 + 0x10) == 0)
       ) {
      bVar4 = false;
    }
    iVar6 = 0x20;
    if (bVar4) {
      iVar6 = 0x10;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x68);
  while (uVar5 != 0) {
    uVar5 = uVar5 - 1;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + (ulonglong)uVar5 * 0x10);
    if (iVar6 != 0) {
      uStack_44 = 0;
      uStack_40 = 0;
      local_36 = 0;
      local_3c = 0;
      local_38 = 0;
      local_48 = iVar6;
      local_37 = bVar1;
      (**(code **)(*plVar2 + 800))(plVar2);
    }
    if ((*(byte *)(param_1 + 0x225c + lVar7) & 8) != 0) {
      uStack_40 = 0;
      local_48 = 8;
      uStack_44 = 0;
      local_36 = 0;
      local_3c = 0;
      local_38 = 0;
      local_37 = bVar1;
      (**(code **)(*plVar2 + 800))(plVar2,&local_48);
    }
  }
  if (((*(uint *)(param_1 + 0x52f0) >> 0x10 & 1) != 0) || (*(short *)(param_2 + 0x10) == 0)) {
    uVar5 = *(uint *)(param_1 + 0x52f0) >> 0x16 & 3;
    if (uVar5 == 3) {
      uVar5 = 0xffffffff;
    }
    if ((uVar5 == 1) || ((*(byte *)(param_1 + 0x225c + lVar7) & 8) == 0)) goto LAB_1432e9be8;
  }
  FUN_1432eaa50(param_1,bVar1);
LAB_1432e9be8:
  if (((*(byte *)(param_2 + 0x13) & 0x20) != 0) && (this != (RefCountNTSImpl *)0x0)) {
    (**(code **)(*(longlong *)this + 0x318))(this,(int)*(char *)(param_2 + 0x12));
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))
            (*(longlong **)(param_1 + 0x18),param_2,param_1 + 0x2210 + lVar7,bVar1);
  FUN_1432eccc0(param_1,bVar1,this);
  if ((((*(byte *)(param_2 + 0x13) & 0xc0) == 0) && (*(short *)(param_2 + 0x10) != 0)) &&
     ((*(byte *)(param_2 + 0x10) & 1) != 0)) {
    lVar7 = (ulonglong)*(byte *)(uVar8 + 0x52c4 + param_1) * 0x60;
    piVar3 = *(int **)(lVar7 + 0x4ce8 + param_1);
    this_00 = (RefCountNTSImpl *)0x0;
    if (piVar3 != (int *)0x0) {
      this_00 = *(RefCountNTSImpl **)(piVar3 + 2);
      if (this_00 == (RefCountNTSImpl *)0x0) {
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar7 + 0x4ce8 + param_1) = 0;
        this_00 = (RefCountNTSImpl *)0x0;
      }
      else if (*(int *)(this_00 + 8) == 0) {
        this_00 = (RefCountNTSImpl *)0x0;
      }
      else {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this_00);
      }
    }
    if (this != this_00) {
      FUN_1432eaef0(param_1,this,this,bVar1,1,0);
    }
    if (this_00 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))(*(longlong **)(param_1 + 0x18),bVar1);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1432e9d20 FUN_1432e9d20 body=90 status=ok
// SIG undefined FUN_1432e9d20(void)

void FUN_1432e9d20(longlong param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_2 + 8);
  local_14 = *(undefined4 *)(param_2 + 0xc);
  local_10 = *(undefined4 *)(param_2 + 0x10);
  local_17 = *(undefined1 *)(param_2 + 0x14);
  local_28 = 0x1000023;
  local_1c = 0;
  local_18 = 0;
  local_16 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18),&local_28);
  return;
}



// FUNCTION 1432e9d80 FUN_1432e9d80 body=90 status=ok
// SIG undefined FUN_1432e9d80(void)

void FUN_1432e9d80(longlong param_1,longlong param_2)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_3c = 0;
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = *(undefined8 *)(param_2 + 0x10);
  local_20 = *(undefined8 *)(param_2 + 0x18);
  local_18 = *(undefined8 *)(param_2 + 0x20);
  local_48 = 0x1000026;
  local_38 = 0xff00;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))(*(longlong **)(param_1 + 0x18),&local_48);
  return;
}



// FUNCTION 1432e9de0 FUN_1432e9de0 body=81 status=ok
// SIG undefined FUN_1432e9de0(void)

void FUN_1432e9de0(longlong param_1,longlong param_2)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined8 *)(param_2 + 0x10);
  uStack_28 = *(undefined8 *)(param_2 + 0x18);
  local_34 = *(undefined4 *)(param_2 + 8);
  local_48 = 0x1000024;
  local_20 = *(undefined4 *)(param_2 + 0x20);
  uStack_1c = *(undefined4 *)(param_2 + 0x24);
  uStack_18 = *(undefined4 *)(param_2 + 0x28);
  uStack_14 = *(undefined4 *)(param_2 + 0x2c);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0xff00;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),&local_48);
  return;
}



// FUNCTION 1432e9e40 FUN_1432e9e40 body=105 status=ok
// SIG undefined FUN_1432e9e40(void)

void FUN_1432e9e40(longlong param_1,longlong param_2)

{
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_50 = *(undefined8 *)(param_2 + 0x10);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  local_54 = *(undefined4 *)(param_2 + 8);
  local_68 = 0x1000025;
  local_40 = *(undefined8 *)(param_2 + 0x20);
  uStack_38 = *(undefined8 *)(param_2 + 0x28);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0xff00;
  local_30 = *(undefined8 *)(param_2 + 0x30);
  uStack_28 = *(undefined8 *)(param_2 + 0x38);
  local_20 = *(undefined4 *)(param_2 + 0x40);
  uStack_1c = *(undefined4 *)(param_2 + 0x44);
  uStack_18 = *(undefined4 *)(param_2 + 0x48);
  uStack_14 = *(undefined4 *)(param_2 + 0x4c);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))(*(longlong **)(param_1 + 0x18),&local_68);
  return;
}



// FUNCTION 1432e9eb0 FUN_1432e9eb0 body=312 status=ok
// SIG undefined FUN_1432e9eb0(void)

/* WARNING: Removing unreachable block (ram,0x0001432e9fa6) */

void FUN_1432e9eb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_2;
  if ((*(char *)((longlong)param_2 + 0x3b) != '\0') && ((*(byte *)(lVar1 + 0x51) & 3) == 1)) {
    FUN_1432f2a90(lVar1 + 8,*(undefined8 *)(lVar1 + 0x20),0);
    *(undefined1 *)(lVar1 + 0x51) = 0;
  }
  if ((*(byte *)(lVar1 + 0x51) & 1) == 0) {
    if ((*(longlong *)(lVar1 + 0x30) == 0) ||
       (this = (RefCountNTSImpl *)Scaleform::GFx::CharacterHandle::ResolveCharacter(),
       this == (RefCountNTSImpl *)0x0)) {
      lVar3 = (longlong)*(int *)(param_1 + 0x68);
      if (0 < lVar3) {
        lVar4 = lVar3 * 0x10;
        do {
          if ((*(ushort *)(*(longlong *)(lVar4 + -8 + *(longlong *)(param_1 + 0x60)) + 0x6a) >> 9 &
              1) != 0) {
            FUN_1433705a0();
          }
          lVar3 = lVar3 + -1;
          lVar4 = lVar4 + -0x10;
        } while (0 < lVar3);
      }
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
      FUN_1433705a0(this);
    }
    FUN_1432ee0c0(lVar1 + 8,0,*(undefined8 *)(lVar1 + 0x10),DAT_146b63194);
    *(undefined1 *)(lVar1 + 0x51) = 1;
    uVar2 = *(undefined1 *)(lVar1 + 0x51);
    if (*(char *)((longlong)param_2 + 0x3b) != '\0') {
      uVar2 = 3;
    }
    *(undefined1 *)(lVar1 + 0x51) = uVar2;
  }
  return;
}



// FUNCTION 1432e9ff0 FUN_1432e9ff0 body=51 status=ok
// SIG undefined FUN_1432e9ff0(void)

void FUN_1432e9ff0(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x2210;
  lVar1 = 6;
  do {
    FUN_14338a570(param_1);
    param_1 = param_1 + 0x50;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432ea030 FUN_1432ea030 body=54 status=ok
// SIG undefined FUN_1432ea030(void)

void FUN_1432ea030(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x2400;
  lVar1 = 6;
  do {
    Scaleform::GFx::KeyboardState::ResetState(param_1);
    param_1 = param_1 + 0x688;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432ea070 FUN_1432ea070 body=1895 status=ok
// SIG undefined FUN_1432ea070(void)

void FUN_1432ea070(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  RefCountNTSImpl *this;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  RefCountImpl *pRVar9;
  longlong lVar10;
  uint *puVar11;
  RefCountImpl *pRVar12;
  RefCountImpl *pRVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res8;
  uint local_res10;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(longlong *)(param_1 + 0x4cb0) == 0) {
      uVar7 = FUN_1432edef0(param_1 + 0x5350);
      if (*(longlong *)(param_1 + 0x4cb0) != 0) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x4cb0) + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00();
        }
      }
      *(undefined8 *)(param_1 + 0x4cb0) = uVar7;
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      lVar8 = FUN_1432cd1e0(uVar2);
      uVar3 = *(ulonglong *)(lVar8 + 0x90);
      if (uVar3 == 0) {
        FUN_143364100(uVar2,0,uVar7);
      }
      else if ((uVar3 & 1) == 0) {
        FUN_143364100(uVar2,(*(longlong *)(lVar8 + 0x98) != 0) + '\x01',uVar7);
      }
      else {
        FUN_143364100(uVar2,*(undefined8 *)((uVar3 & 0xfffffffffffffffe) + 8),uVar7);
      }
    }
    else {
      lVar10 = FUN_1432cd1e0();
      lVar8 = 0;
      if (*(ulonglong *)(lVar10 + 0x90) != 0) {
        if ((*(byte *)(lVar10 + 0x90) & 1) == 0) {
          lVar8 = (ulonglong)(*(longlong *)(lVar10 + 0x98) != 0) + 1;
        }
        else {
          lVar8 = *(longlong *)((*(ulonglong *)(lVar10 + 0x90) & 0xfffffffffffffffe) + 8);
        }
      }
      FUN_143364170(*(undefined8 *)(param_1 + 0x4cb0),0,lVar8);
    }
    pRVar13 = (RefCountImpl *)0x0;
    local_res8 = 0;
    if (*(int *)(param_1 + 0x52c0) != 0) {
      local_res10 = 0;
      pRVar12 = pRVar13;
      pRVar9 = pRVar13;
      do {
        uVar14 = (uint)pRVar9;
        uVar15 = (uint)pRVar12;
        lVar8 = (longlong)pRVar12 * 0x60;
        piVar4 = *(int **)(param_1 + 0x4ce8 + lVar8);
        if (piVar4 != (int *)0x0) {
          this = *(RefCountNTSImpl **)(piVar4 + 2);
          if (this == (RefCountNTSImpl *)0x0) {
            *piVar4 = *piVar4 + -1;
            if (*piVar4 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *(undefined8 *)(param_1 + 0x4ce8 + lVar8) = 0;
          }
          else if (*(int *)(this + 8) != 0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            Scaleform::RefCountNTSImpl::Release(this);
            if ((*(char *)(param_1 + 0x4d10 + lVar8) != '\0') &&
               (cVar6 = (**(code **)(*(longlong *)this + 0x2c8))(this), cVar6 != '\0')) {
              (**(code **)(*(longlong *)this + 0x2f0))(this,&local_118);
              if ((local_110 == local_118) && (local_10c == local_114)) {
                Scaleform::RefCountNTSImpl::Release(this);
                return;
              }
              local_108 = 0x3f800000;
              local_f8 = 0x3f80000000000000;
              uStack_e0 = 0x3f800000;
              uStack_100 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              FUN_14336a5a0(this,&local_108);
              local_c8 = local_108;
              uStack_c0 = uStack_100;
              local_a8 = local_e8;
              uStack_a0 = uStack_e0;
              local_b8 = local_f8;
              uStack_b0 = uStack_f0;
              Scaleform::Render::Matrix3x4<float>::EncloseTransform
                        ((Matrix3x4<float> *)&local_c8,(Rect<float> *)&local_128,
                         (Rect<float> *)&local_118);
              fVar16 = (float)(longlong)pRVar12 * 20.0;
              fVar18 = local_128 - fVar16;
              fVar17 = local_120 + fVar16;
              fVar19 = local_124 - fVar16;
              fVar16 = local_11c + fVar16;
              local_128 = fVar18;
              local_124 = fVar19;
              local_120 = fVar17;
              local_11c = fVar16;
              pRVar9 = (RefCountImpl *)
                       (**(code **)(**(longlong **)(param_1 + 0x5350) + 0x50))
                                 (*(longlong **)(param_1 + 0x5350),0x80,0);
              pRVar12 = pRVar13;
              if (pRVar9 != (RefCountImpl *)0x0) {
                *(undefined8 *)(pRVar9 + 8) = 0;
                *(undefined ***)pRVar9 = &PTR_FUN_144f70a50;
                *(undefined4 *)(pRVar9 + 8) = 1;
                *(undefined4 *)(pRVar9 + 0x10) = 0;
                *(undefined8 *)(pRVar9 + 0x18) = 0;
                *(undefined8 *)(pRVar9 + 0x20) = 0;
                *(undefined8 *)(pRVar9 + 0x28) = 0;
                *(undefined8 *)(pRVar9 + 0x30) = 0;
                *(undefined8 *)(pRVar9 + 0x38) = 0;
                *(undefined8 *)(pRVar9 + 0x40) = 0;
                *(RefCountImpl **)(pRVar9 + 0x48) = pRVar9 + 0x68;
                *(undefined8 *)(pRVar9 + 0x50) = 0;
                *(undefined8 *)(pRVar9 + 0x58) = 0;
                *(undefined4 *)(pRVar9 + 0x60) = 0;
                *(undefined ***)pRVar9 = &PTR_FUN_145af9280;
                *(undefined8 *)(pRVar9 + 0x68) = 0;
                *(undefined8 *)(pRVar9 + 0x70) = 0;
                *(undefined8 *)(pRVar9 + 0x78) = 0;
                pRVar12 = pRVar9;
              }
              local_d0 = 0;
              uVar15 = uVar14 ^ 0xffffff00 | 0xff000000;
              local_d8 = uVar15;
              FUN_1432f2630(pRVar12 + 0x18,pRVar12 + 0x18,*(longlong *)(pRVar12 + 0x20) + 1);
              puVar11 = (uint *)(*(longlong *)(pRVar12 + 0x18) + -0x10 +
                                *(longlong *)(pRVar12 + 0x20) * 0x10);
              if (puVar11 != (uint *)0x0) {
                *puVar11 = uVar15;
                puVar11[2] = 0;
                puVar11[3] = 0;
              }
              FUN_1432f3130(pRVar12,1,0);
              FUN_1432f15c0(pRVar12,fVar18,fVar19);
              FUN_1432f1450(pRVar12,fVar17,fVar19);
              FUN_1432f1450(pRVar12,fVar17,fVar19 + 20.0);
              FUN_1432f1450(pRVar12,fVar18,fVar19 + 20.0);
              if ((*(float *)(pRVar12 + 0x5c) != *(float *)(pRVar12 + 0x54)) ||
                 (*(float *)(pRVar12 + 0x60) != *(float *)(pRVar12 + 0x58))) {
                FUN_1432f1450(pRVar12,*(float *)(pRVar12 + 0x54),*(undefined4 *)(pRVar12 + 0x58));
              }
              FUN_1432f0880(pRVar12);
              FUN_1432f3130(pRVar12,1,0);
              FUN_1432f15c0(pRVar12,fVar17,fVar19);
              FUN_1432f1450(pRVar12,fVar17,fVar16);
              FUN_1432f1450(pRVar12,fVar17 - 20.0,fVar16);
              FUN_1432f1450(pRVar12,fVar17 - 20.0,fVar19);
              if ((*(float *)(pRVar12 + 0x5c) != *(float *)(pRVar12 + 0x54)) ||
                 (*(float *)(pRVar12 + 0x60) != *(float *)(pRVar12 + 0x58))) {
                FUN_1432f1450(pRVar12,*(float *)(pRVar12 + 0x54),*(undefined4 *)(pRVar12 + 0x58));
              }
              FUN_1432f0880(pRVar12);
              FUN_1432f3130(pRVar12,1,0);
              FUN_1432f15c0(pRVar12,fVar17,fVar16);
              FUN_1432f1450(pRVar12,fVar18,fVar16);
              FUN_1432f1450(pRVar12,fVar18,fVar16 - 20.0);
              FUN_1432f1450(pRVar12,fVar17,fVar16 - 20.0);
              if ((*(float *)(pRVar12 + 0x5c) != *(float *)(pRVar12 + 0x54)) ||
                 (*(float *)(pRVar12 + 0x60) != *(float *)(pRVar12 + 0x58))) {
                FUN_1432f1450(pRVar12,*(float *)(pRVar12 + 0x54),*(undefined4 *)(pRVar12 + 0x58));
              }
              FUN_1432f0880(pRVar12);
              FUN_1432f3130(pRVar12,1,0);
              FUN_1432f15c0(pRVar12,fVar18,fVar16);
              FUN_1432f1450(pRVar12,fVar18,fVar19);
              FUN_1432f1450(pRVar12,fVar18 + 20.0,fVar19);
              FUN_1432f1450(pRVar12,fVar18 + 20.0,fVar16);
              if ((*(float *)(pRVar12 + 0x5c) != *(float *)(pRVar12 + 0x54)) ||
                 (*(float *)(pRVar12 + 0x60) != *(float *)(pRVar12 + 0x58))) {
                FUN_1432f1450(pRVar12,*(float *)(pRVar12 + 0x54),*(undefined4 *)(pRVar12 + 0x58));
              }
              FUN_1432f0880(pRVar12);
              FUN_1432f0900(pRVar12);
              lVar10 = (**(code **)(**(longlong **)(param_1 + 0x5350) + 0x50))
                                 (*(longlong **)(param_1 + 0x5350),0x90,0);
              pRVar9 = pRVar13;
              if (lVar10 != 0) {
                pRVar9 = (RefCountImpl *)FUN_143371000(lVar10,pRVar12,0);
              }
              lVar10 = FUN_1432edf60(param_1 + 0x5350);
              FUN_1432f2e20(lVar10,pRVar9);
              FUN_1432f03c0(*(undefined8 *)(param_1 + 0x4cb0),lVar10);
              if (lVar10 != 0) {
                *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + 1;
              }
              lVar5 = *(longlong *)(param_1 + 0x4cc0 + lVar8);
              if (lVar5 != 0) {
                plVar1 = (longlong *)(lVar5 + 0x18);
                *plVar1 = *plVar1 + -1;
                if (*plVar1 == 0) {
                  FUN_1432ccf00();
                }
              }
              *(longlong *)(param_1 + 0x4cc0 + lVar8) = lVar10;
              if (lVar10 != 0) {
                plVar1 = (longlong *)(lVar10 + 0x18);
                *plVar1 = *plVar1 + -1;
                if (*plVar1 == 0) {
                  FUN_1432ccf00(lVar10);
                }
              }
              if (pRVar9 != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(pRVar9);
              }
              Scaleform::RefCountImpl::Release(pRVar12);
              uVar15 = local_res8;
              uVar14 = local_res10;
            }
            Scaleform::RefCountNTSImpl::Release(this);
          }
        }
        local_res8 = uVar15 + 1;
        pRVar12 = (RefCountImpl *)(ulonglong)local_res8;
        local_res10 = uVar14 + 0x1080d0;
        pRVar9 = (RefCountImpl *)(ulonglong)local_res10;
      } while (local_res8 < *(uint *)(param_1 + 0x52c0));
    }
    *(undefined1 *)(param_1 + 0x52d4) = 0;
  }
  return;
}



// FUNCTION 1432ea7f0 FUN_1432ea7f0 body=450 status=ok
// SIG undefined FUN_1432ea7f0(void)

void FUN_1432ea7f0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  void *_Dst;
  longlong *plVar2;
  RefCountImpl *this;
  char cVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = *(ulonglong *)(param_1 + 0x4c98);
  if (uVar8 != 0) {
    lVar4 = 0;
    fVar11 = *param_2 * 1e+06;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar4 = -0x8000000000000000;
    }
    uVar6 = 0;
    iVar5 = 0;
    uVar7 = 0;
    uVar9 = (longlong)fVar11 + lVar4;
    if (uVar8 != 0) {
      plVar1 = (longlong *)(param_1 + 0x4c90);
      uVar10 = uVar9;
      do {
        plVar2 = *(longlong **)(*plVar1 + uVar7 * 8);
        if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x18))(), cVar3 == '\0'))
        {
          iVar5 = iVar5 + 1;
          uVar9 = uVar10;
        }
        else {
          plVar2 = *(longlong **)(*plVar1 + uVar7 * 8);
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(undefined4 *)(param_1 + 0x274));
          lVar4 = (**(code **)(**(longlong **)(*plVar1 + uVar7 * 8) + 0x30))();
          uVar9 = lVar4 - *(longlong *)(param_1 + 0x268);
          if (uVar10 <= uVar9) {
            uVar9 = uVar10;
          }
        }
        uVar7 = uVar7 + 1;
        uVar10 = uVar9;
      } while (uVar7 < uVar8);
      if (iVar5 != 0) {
        for (lVar4 = *(longlong *)(param_1 + 0x4c98); lVar4 != 0; lVar4 = lVar4 + -1) {
          uVar8 = (ulonglong)uVar6;
          plVar2 = *(longlong **)(*plVar1 + uVar8 * 8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x18))(), cVar3 == '\0')) {
            (**(code **)(**(longlong **)(*plVar1 + uVar8 * 8) + 0x20))();
            if (*(longlong *)(param_1 + 0x4c98) == 1) {
              FUN_1432f29e0(plVar1,plVar1,0);
            }
            else {
              this = *(RefCountImpl **)(*plVar1 + uVar8 * 8);
              if (this != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(this);
              }
              _Dst = (void *)(*plVar1 + uVar8 * 8);
              memmove(_Dst,(void *)((longlong)_Dst + 8),
                      (*(longlong *)(param_1 + 0x4c98) - uVar8) * 8 - 8);
              *(longlong *)(param_1 + 0x4c98) = *(longlong *)(param_1 + 0x4c98) + -1;
            }
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
      }
    }
    fVar11 = (float)(longlong)uVar9;
    if ((longlong)uVar9 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    *param_2 = fVar11 / 1e+06;
  }
  return;
}



// FUNCTION 1432ea9c0 FUN_1432ea9c0 body=134 status=ok
// SIG undefined FUN_1432ea9c0(void)

uint FUN_1432ea9c0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  uVar3 = 1;
  lVar2 = 4;
  pbVar5 = (byte *)(param_1 + 0x52c5);
  do {
    uVar1 = uVar3 | uVar4;
    if (pbVar5[-1] != param_2) {
      uVar1 = uVar4;
    }
    uVar4 = uVar1 | uVar3 * 2;
    if (*pbVar5 != param_2) {
      uVar4 = uVar1;
    }
    uVar1 = uVar4 | uVar3 << 2;
    if (pbVar5[1] != param_2) {
      uVar1 = uVar4;
    }
    uVar4 = uVar1 | uVar3 * 8;
    if (pbVar5[2] != param_2) {
      uVar4 = uVar1;
    }
    uVar3 = uVar3 * 0x10;
    lVar2 = lVar2 + -1;
    pbVar5 = pbVar5 + 4;
  } while (lVar2 != 0);
  return uVar4;
}



// FUNCTION 1432eaa50 FUN_1432eaa50 body=216 status=ok
// SIG undefined FUN_1432eaa50(void)

void FUN_1432eaa50(longlong param_1,uint param_2)

{
  int *piVar1;
  RefCountNTSImpl *this;
  char cVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)*(byte *)((ulonglong)param_2 + 0x52c4 + param_1) * 0x60 + param_1;
  if ((*(char *)(lVar3 + 0x4d10) != '\0') &&
     (piVar1 = *(int **)(lVar3 + 0x4ce8), piVar1 != (int *)0x0)) {
    this = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar3 + 0x4ce8) = 0;
    }
    else if (*(int *)(this + 8) != 0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
      if ((*(longlong *)(this + 0x38) != 0) &&
         (cVar2 = (**(code **)(*(longlong *)this + 0x2e8))(this,0,param_2,2), cVar2 == '\0')) {
        Scaleform::RefCountNTSImpl::Release(this);
        return;
      }
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  *(undefined1 *)(lVar3 + 0x4d10) = 0;
  *(undefined1 *)(param_1 + 0x52d4) = 1;
  return;
}



// FUNCTION 1432eab30 FUN_1432eab30 body=193 status=ok
// SIG undefined FUN_1432eab30(void)

undefined8 FUN_1432eab30(longlong param_1,RefCountNTSImpl *param_2)

{
  int *piVar1;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar2;
  uint uVar3;
  RefCountNTSImpl *pRVar5;
  RefCountNTSImpl *pRVar4;
  
  pRVar5 = (RefCountNTSImpl *)0x0;
  pRVar4 = pRVar5;
  if (*(int *)(param_1 + 0x52c0) != 0) {
    do {
      piVar1 = *(int **)((longlong)pRVar4 * 0x60 + 0x4ce8 + param_1);
      pRVar2 = pRVar5;
      if (piVar1 != (int *)0x0) {
        this = *(RefCountNTSImpl **)(piVar1 + 2);
        if (this == (RefCountNTSImpl *)0x0) {
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)((longlong)pRVar4 * 0x60 + 0x4ce8 + param_1) = 0;
          pRVar2 = (RefCountNTSImpl *)0x0;
        }
        else if (*(int *)(this + 8) != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(this);
          Scaleform::RefCountNTSImpl::Release(this);
          pRVar2 = this;
        }
      }
      if (pRVar2 == param_2) {
        return 1;
      }
      uVar3 = (int)pRVar4 + 1;
      pRVar4 = (RefCountNTSImpl *)(ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x52c0));
  }
  return 0;
}



// FUNCTION 1432eac00 FUN_1432eac00 body=275 status=ok
// SIG undefined FUN_1432eac00(void)

undefined8
FUN_1432eac00(longlong param_1,RefCountNTSImpl *param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  RefCountNTSImpl *this;
  undefined8 uVar4;
  
  param_3 = param_3 & 0xffffffff;
  lVar1 = (ulonglong)*(byte *)(param_3 + 0x52c4 + param_1) * 0x60 + param_1;
  piVar2 = *(int **)(lVar1 + 0x4ce8);
  this = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar1 + 0x4ce8) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (this == param_2) {
LAB_1432eace6:
    uVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x52d4) = 1;
    if ((this != (RefCountNTSImpl *)0x0) && (*(longlong *)(this + 0x38) != 0)) {
      cVar3 = (**(code **)(*(longlong *)this + 0x2e8))(this,param_2,param_3,param_4);
      if (cVar3 == '\0') goto LAB_1432eace6;
    }
    FUN_1432eb060(param_1,param_2,param_3,param_4);
    if (param_2 != (RefCountNTSImpl *)0x0) {
      (**(code **)(*(longlong *)param_2 + 0x2e0))(param_2,param_3,param_4);
    }
    uVar4 = 1;
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return uVar4;
}



// FUNCTION 1432ead40 FUN_1432ead40 body=422 status=ok
// SIG undefined FUN_1432ead40(void)

void FUN_1432ead40(longlong *param_1,RefCountNTSImpl *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  RefCountNTSImpl *pRVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  uVar7 = 0;
  if ((int)param_1[0xa58] != 0) {
    do {
      plVar8 = param_1 + uVar7 * 0xc + 0x99d;
      piVar1 = (int *)*plVar8;
      pRVar5 = (RefCountNTSImpl *)0x0;
      if (piVar1 != (int *)0x0) {
        pRVar5 = *(RefCountNTSImpl **)(piVar1 + 2);
        if (pRVar5 == (RefCountNTSImpl *)0x0) {
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *plVar8 = 0;
          pRVar5 = (RefCountNTSImpl *)0x0;
        }
        else if (*(int *)(pRVar5 + 8) == 0) {
          pRVar5 = (RefCountNTSImpl *)0x0;
        }
        else {
          *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
          *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(pRVar5);
          Scaleform::RefCountNTSImpl::Release(pRVar5);
        }
      }
      if (pRVar5 == param_2) {
        piVar1 = (int *)*plVar8;
        pRVar5 = (RefCountNTSImpl *)0x0;
        if (piVar1 != (int *)0x0) {
          pRVar5 = *(RefCountNTSImpl **)(piVar1 + 2);
          if (pRVar5 == (RefCountNTSImpl *)0x0) {
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *plVar8 = 0;
            pRVar5 = (RefCountNTSImpl *)0x0;
          }
          else if (*(int *)(pRVar5 + 8) == 0) {
            pRVar5 = (RefCountNTSImpl *)0x0;
          }
          else {
            *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
            *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
            Scaleform::RefCountNTSImpl::Release(pRVar5);
            cVar2 = FUN_1432f1330(param_1);
            if (cVar2 == '\0') {
              uVar6 = FUN_1432ea9c0(param_1,uVar7);
              uVar3 = (**(code **)(*param_1 + 0x170))(param_1);
              for (uVar4 = 0; (uVar6 != 0 && (uVar4 < uVar3)); uVar4 = uVar4 + 1) {
                FUN_1432eac00(param_1,0,uVar4,2);
                uVar6 = uVar6 >> 1;
              }
            }
          }
        }
        piVar1 = (int *)*plVar8;
        if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *plVar8 = 0;
        if (pRVar5 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar5);
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0xa58));
  }
  return;
}



// FUNCTION 1432eaef0 FUN_1432eaef0 body=356 status=ok
// SIG undefined FUN_1432eaef0(void)

undefined8
FUN_1432eaef0(longlong param_1,RefCountNTSImpl *param_2,undefined8 param_3,uint param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  RefCountNTSImpl *this;
  undefined8 uVar4;
  
  lVar1 = (ulonglong)*(byte *)((ulonglong)param_4 + 0x52c4 + param_1) * 0x60 + param_1;
  piVar2 = *(int **)(lVar1 + 0x4ce8);
  this = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar1 + 0x4ce8) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (this != param_2) {
    *(undefined1 *)(param_1 + 0x52d4) = 1;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                      (*(longlong **)(param_1 + 0x18),this,param_2,param_4,param_5,param_6);
    if (cVar3 != '\0') {
      if (param_2 != (RefCountNTSImpl *)0x0) {
        cVar3 = (**(code **)(*(longlong *)param_2 + 0x2d0))(param_2,param_5);
        if (cVar3 == '\0') {
          param_2 = (RefCountNTSImpl *)0x0;
        }
      }
      if ((this != (RefCountNTSImpl *)0x0) && (*(longlong *)(this + 0x38) != 0)) {
        cVar3 = (**(code **)(*(longlong *)this + 0x2e8))(this,param_2,param_4,param_5);
        if (cVar3 == '\0') goto LAB_1432eb027;
      }
      if (param_2 != (RefCountNTSImpl *)0x0) {
        (**(code **)(*(longlong *)param_2 + 0x2e0))(param_2,param_4,param_5);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                (*(longlong **)(param_1 + 0x18),param_2,param_4,param_5);
      uVar4 = 1;
      goto LAB_1432eb02a;
    }
  }
LAB_1432eb027:
  uVar4 = 0;
LAB_1432eb02a:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return uVar4;
}



// FUNCTION 1432eb060 FUN_1432eb060 body=411 status=ok
// SIG undefined FUN_1432eb060(void)

void FUN_1432eb060(longlong param_1,RefCountNTSImpl *param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  RefCountNTSImpl *this;
  undefined8 *puVar4;
  
  param_3 = param_3 & 0xffffffff;
  puVar4 = (undefined8 *)
           (param_1 + 0x4ce8 + (ulonglong)*(byte *)(param_3 + 0x52c4 + param_1) * 0x60);
  piVar2 = (int *)*puVar4;
  this = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar4 = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (this == param_2) goto LAB_1432eb1ca;
  *(undefined1 *)(param_1 + 0x52d4) = 1;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x20);
  if (cVar1 == '\x02') {
    if (param_2 != (RefCountNTSImpl *)0x0) {
      cVar3 = (**(code **)(*(longlong *)param_2 + 0x2d0))(param_2,param_4);
      if (cVar3 == '\0') {
        piVar2 = (int *)*puVar4;
        if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *puVar4 = 0;
        param_2 = (RefCountNTSImpl *)0x0;
        goto LAB_1432eb159;
      }
    }
    FUN_1432efc10(puVar4,param_2);
  }
LAB_1432eb159:
  if ((this != (RefCountNTSImpl *)0x0) && (*(longlong *)(this + 0x38) != 0)) {
    (**(code **)(*(longlong *)this + 0x2d8))(this,0,param_2,param_3,param_4);
  }
  if (cVar1 == '\x01') {
    FUN_1432efc10(puVar4,param_2);
  }
  if (param_2 != (RefCountNTSImpl *)0x0) {
    (**(code **)(*(longlong *)param_2 + 0x2d8))(param_2,1,this,param_3,param_4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))
            (*(longlong **)(param_1 + 0x18),this,param_2,param_3);
LAB_1432eb1ca:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
    return;
  }
  return;
}



// FUNCTION 1432eb210 FUN_1432eb210 body=241 status=ok
// SIG undefined FUN_1432eb210(void)

void FUN_1432eb210(longlong param_1,longlong *param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = param_1 + 0x4cc0 + (ulonglong)*(byte *)((param_3 & 0xffffffff) + 0x52c4 + param_1) * 0x60;
  if (param_2 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x290))(param_2);
    if (iVar2 == 4) {
      if (*(char *)(lVar3 + 0x50) != '\0') {
        *(undefined1 *)(param_1 + 0x52d4) = 1;
      }
      *(undefined1 *)(lVar3 + 0x50) = 0;
      goto LAB_1432eb289;
    }
  }
  if (*(char *)(lVar3 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x52d4) = 1;
  }
  *(undefined1 *)(lVar3 + 0x50) = 1;
LAB_1432eb289:
  *(undefined4 *)(lVar3 + 0x38) = 0;
  cVar1 = FUN_1432eac00(param_1,param_2,param_3 & 0xffffffff,param_4);
  if ((cVar1 != '\0') && (*(char *)(lVar3 + 0x50) != '\0')) {
    bVar4 = param_2 == (longlong *)0x0;
    if (!bVar4) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2);
        if (cVar1 == '\0') break;
        param_2 = (longlong *)param_2[7];
      } while (param_2 != (longlong *)0x0);
      bVar4 = param_2 == (longlong *)0x0;
    }
    if ((bool)*(char *)(lVar3 + 0x50) != bVar4) {
      *(undefined1 *)(param_1 + 0x52d4) = 1;
    }
    *(bool *)(lVar3 + 0x50) = param_2 == (longlong *)0x0;
  }
  return;
}



// FUNCTION 1432eb310 FUN_1432eb310 body=106 status=ok
// SIG undefined FUN_1432eb310(void)

void FUN_1432eb310(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x52c0) != 0) {
    do {
      lVar4 = uVar3 * 0x60;
      if ((*(byte *)(lVar4 + 0x4d11 + param_1) & 1) != 0) {
        lVar1 = param_1 + 0x4cc8 + lVar4;
        FUN_1432f2a90(lVar1,*(undefined8 *)(lVar1 + 0x18),0);
        *(undefined1 *)(lVar4 + 0x4d11 + param_1) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x52c0));
  }
  return;
}



// FUNCTION 1432eb380 ResetFocusStates body=195 status=ok
// SIG undefined ResetFocusStates(void)

void Scaleform::GFx::MovieImpl::ResetFocusStates(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x52c0) != 0) {
    do {
      lVar3 = uVar5 * 0x60;
      piVar1 = *(int **)(lVar3 + 0x4cf0 + param_1);
      if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
        FUN_14336bed0(piVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
      }
      *(undefined8 *)(lVar3 + 0x4cf0 + param_1) = 0;
      if ((*(byte *)(lVar3 + 0x4d11 + param_1) & 1) != 0) {
        lVar2 = param_1 + 0x4cc8 + lVar3;
        FUN_1432f2a90(lVar2,*(undefined8 *)(lVar2 + 0x18),0);
        *(undefined1 *)(lVar3 + 0x4d11 + param_1) = 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined4 *)(lVar3 + 0x4cf8 + param_1) = 0;
    } while (uVar4 < *(uint *)(param_1 + 0x52c0));
  }
  return;
}



// FUNCTION 1432eb450 FUN_1432eb450 body=117 status=ok
// SIG undefined FUN_1432eb450(void)

void FUN_1432eb450(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined8 local_48;
  RefCountNTSImpl *pRStack_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_38 = 0xffffffff;
  local_48 = 0;
  pRStack_40 = (RefCountNTSImpl *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_54 = 9;
  local_4f = 0;
  local_4e = param_2;
  FUN_1432e8680(0,5,local_58,&local_48);
  FUN_1432e9400(param_1,&local_48);
  if (pRStack_40 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_40);
  }
  return;
}



// FUNCTION 1432eb4d0 FUN_1432eb4d0 body=140 status=ok
// SIG undefined FUN_1432eb4d0(void)

void FUN_1432eb4d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  
  param_1 = (ulonglong)*(byte *)((param_3 & 0xffffffff) + 0x52c4 + param_1) * 0x60 + param_1;
  if (param_2 == 0) {
    piVar1 = *(int **)(param_1 + 0x4cf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      FUN_14336bed0(piVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    }
    *(undefined8 *)(param_1 + 0x4cf0) = 0;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x70);
  if (lVar2 == 0) {
    lVar2 = FUN_14336c170(param_2);
  }
  FUN_1432efba0(param_1 + 0x4cf0,lVar2);
  return;
}



// FUNCTION 1432eb570 GetModalClip body=84 status=ok
// SIG undefined GetModalClip(void)

RefCountNTSImpl * Scaleform::GFx::MovieImpl::GetModalClip(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  
  lVar1 = *(longlong *)
           ((ulonglong)*(byte *)((param_2 & 0xffffffff) + 0x52c4 + param_1) * 0x60 + 0x4cf0 +
           param_1);
  if (lVar1 != 0) {
    this = (RefCountNTSImpl *)CharacterHandle::ResolveCharacter(lVar1,param_1);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      RefCountNTSImpl::Release(this);
      return this;
    }
  }
  return (RefCountNTSImpl *)0x0;
}



// FUNCTION 1432eb630 FUN_1432eb630 body=1010 status=ok
// SIG undefined FUN_1432eb630(void)

void FUN_1432eb630(longlong *param_1,RefCountNTSImpl *param_2)

{
  void *_Src;
  RefCountNTSImpl *pRVar1;
  RefCountNTSImpl *pRVar2;
  RefCountNTSImpl *pRVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  RefCountNTSImpl *pRVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong local_a8;
  RefCountNTSImpl *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  
  if (((*(ushort *)(param_2 + 0x6a) >> 10 & 1) == 0) ||
     (cVar4 = Scaleform::GFx::Sprite::IsLevelMovie(param_2), cVar4 == '\0')) {
    uVar19 = 0;
    uVar17 = uVar19;
    if (param_1[0x98e] != 0) {
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar18 = 0;
      uVar13 = 0;
      local_70 = 0;
      local_60 = 0;
      local_78 = uVar7;
      local_58 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar8 = uVar19;
      pRVar2 = param_2;
      uVar10 = uVar19;
      do {
        pRVar14 = pRVar2;
        uVar11 = uVar17;
        uVar17 = uVar11 + 1;
        if (uVar17 < uVar11) {
          uVar8 = local_90;
          uVar16 = uVar17;
          if (uVar17 < uVar10 >> 1) {
LAB_1432eb71c:
            FUN_1432f2240(&local_90,uVar7,uVar16);
            uVar8 = local_90;
            uVar10 = local_80;
            uVar7 = local_78;
          }
        }
        else if (uVar10 < uVar17) {
          uVar16 = (uVar17 >> 2) + uVar17;
          goto LAB_1432eb71c;
        }
        puVar9 = (undefined8 *)(uVar8 + uVar11 * 8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = pRVar14;
        }
        pRVar2 = *(RefCountNTSImpl **)(pRVar14 + 0x38);
        local_a0 = pRVar14;
        local_88 = uVar17;
      } while (*(RefCountNTSImpl **)(pRVar14 + 0x38) != (RefCountNTSImpl *)0x0);
      local_98 = param_1[0x98e];
      uVar17 = uVar13;
      if (local_98 != 0) {
        do {
          if (*(RefCountNTSImpl **)(param_1[0x98d] + uVar17 * 8) == param_2) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar19);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_90);
            return;
          }
          if (((uVar13 != 0) && ((uVar18 & 0xfffffffffffffffe) != 0)) && (uVar18 != 0)) {
            if (uVar19 != 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar19);
              uVar19 = 0;
              local_70 = 0;
            }
            uVar18 = 0;
            local_60 = 0;
          }
          local_68 = 0;
          pRVar3 = *(RefCountNTSImpl **)(param_1[0x98d] + uVar17 * 8);
          pRVar2 = (RefCountNTSImpl *)0x0;
          uVar13 = local_68;
          pRVar14 = local_a0;
          while (pRVar1 = pRVar3, local_a0 = pRVar14, local_68 = uVar13,
                pRVar1 != (RefCountNTSImpl *)0x0) {
            uVar8 = uVar13 + 1;
            if (uVar8 < uVar13) {
              uVar10 = uVar8;
              if (uVar8 < uVar18 >> 1) {
LAB_1432eb818:
                FUN_1432f2240(&local_70,local_58,uVar10);
                uVar18 = local_60;
                uVar19 = local_70;
              }
            }
            else if (uVar18 < uVar8) {
              uVar10 = (uVar8 >> 2) + uVar8;
              goto LAB_1432eb818;
            }
            plVar15 = (longlong *)(uVar19 + uVar13 * 8);
            if (plVar15 != (longlong *)0x0) {
              *plVar15 = (longlong)pRVar1;
            }
            pRVar2 = pRVar1;
            uVar13 = uVar8;
            pRVar14 = local_a0;
            pRVar3 = *(RefCountNTSImpl **)(pRVar1 + 0x38);
          }
          uVar8 = uVar11;
          uVar10 = uVar13;
          if (pRVar2 == pRVar14) {
            while( true ) {
              if (((longlong)uVar8 < 0) || (uVar10 = uVar10 - 1, (longlong)uVar10 < 0))
              goto LAB_1432eb9e6;
              lVar12 = *(longlong *)(uVar19 + uVar10 * 8);
              if (*(longlong *)(local_90 + uVar8 * 8) != lVar12) break;
              uVar8 = uVar8 - 1;
            }
            if (*(int *)(*(longlong *)(local_90 + uVar8 * 8) + 0x2c) < *(int *)(lVar12 + 0x2c))
            break;
          }
          else {
            iVar5 = Scaleform::GFx::Sprite::GetLevel();
            iVar6 = Scaleform::GFx::Sprite::GetLevel(pRVar14);
            if (iVar6 < iVar5) break;
          }
LAB_1432eb9e6:
          uVar17 = uVar17 + 1;
        } while (uVar17 < local_98);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar19);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_90);
    }
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    plVar15 = param_1 + 0x98d;
    uVar18 = param_1[0x98e];
    uVar19 = uVar18 + 1;
    FUN_1432f2b40(plVar15,plVar15,uVar19);
    if (uVar18 < uVar19) {
      puVar9 = (undefined8 *)(*plVar15 + uVar18 * 8);
      for (lVar12 = uVar19 - uVar18; lVar12 != 0; lVar12 = lVar12 + -1) {
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = 0;
        }
        puVar9 = puVar9 + 1;
      }
    }
    if (uVar17 < param_1[0x98e] - 1U) {
      _Src = (void *)(*plVar15 + uVar17 * 8);
      memmove((void *)((longlong)_Src + 8),_Src,(param_1[0x98e] - uVar17) * 8 - 8);
    }
    puVar9 = (undefined8 *)(*plVar15 + uVar17 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      *puVar9 = param_2;
    }
    Scaleform::RefCountNTSImpl::Release(param_2);
    FUN_1433665f0(param_2,&local_a8,param_1[0x14]);
    if ((local_a8 != 0) && (FUN_143364100(param_1[0x14],uVar17), local_a8 != 0)) {
      plVar15 = (longlong *)(local_a8 + 0x18);
      *plVar15 = *plVar15 + -1;
      if (*plVar15 == 0) {
        FUN_1432ccf00();
      }
    }
  }
  return;
}



// FUNCTION 1432eba30 FUN_1432eba30 body=217 status=ok
// SIG undefined FUN_1432eba30(void)

void FUN_1432eba30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Dst;
  RefCountNTSImpl *this;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x4c70) != 0) {
    plVar1 = (longlong *)(param_1 + 0x4c68);
    plVar2 = (longlong *)*plVar1;
    while (*plVar2 != param_2) {
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
      if (*(ulonglong *)(param_1 + 0x4c70) <= uVar3) {
        return;
      }
    }
    FUN_143364170(*(undefined8 *)(param_1 + 0xa0),uVar3,1);
    FUN_143366790(param_2,1);
    if (*(longlong *)(param_1 + 0x4c70) == 1) {
      FUN_1432f2b40(plVar1,plVar1,0);
      return;
    }
    this = *(RefCountNTSImpl **)(*plVar1 + uVar3 * 8);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    _Dst = (void *)(*plVar1 + uVar3 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x4c70) - uVar3) * 8 - 8);
    *(longlong *)(param_1 + 0x4c70) = *(longlong *)(param_1 + 0x4c70) + -1;
  }
  return;
}



// FUNCTION 1432ebb30 FUN_1432ebb30 body=14 status=ok
// SIG undefined FUN_1432ebb30(void)

void FUN_1432ebb30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432ebb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1e8))();
  return;
}



// FUNCTION 1432ebb50 FUN_1432ebb50 body=567 status=ok
// SIG undefined FUN_1432ebb50(void)

float * FUN_1432ebb50(longlong param_1,float *param_2,float *param_3,float *param_4)

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
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  
  local_98 = 1.0;
  fStack_94 = 0.0;
  uStack_90 = 0;
  fStack_8c = 0.0;
  local_88 = 0.0;
  fStack_84 = 1.0;
  uStack_80 = 0;
  fStack_7c = 0.0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1e8))(*(longlong **)(param_1 + 0x58),&local_98);
  fVar1 = *(float *)(param_1 + 0x120);
  fVar5 = *(float *)(param_1 + 0x124);
  fVar9 = *(float *)(param_1 + 300);
  fVar2 = *(float *)(param_1 + 0x130);
  fVar6 = *(float *)(param_1 + 0x134);
  fVar10 = *(float *)(param_1 + 0x13c);
  fVar7 = fVar1;
  fVar8 = fVar2;
  if (param_4 != (float *)0x0) {
    fVar7 = fVar1 * *param_4 + fVar5 * param_4[4];
    fVar3 = fVar5 * param_4[7];
    fVar4 = fVar6 * param_4[7];
    fVar8 = fVar2 * *param_4 + fVar6 * param_4[4];
    fVar5 = fVar5 * param_4[5] + fVar1 * param_4[1];
    fVar9 = fVar9 + fVar3 + fVar1 * param_4[3];
    fVar6 = fVar6 * param_4[5] + fVar2 * param_4[1];
    fVar10 = fVar10 + fVar4 + fVar2 * param_4[3];
  }
  fVar1 = *param_3;
  fVar2 = param_3[1];
  *param_2 = (fVar7 * local_98 + fVar5 * local_88) * fVar1 * 20.0 +
             (fVar7 * fStack_94 + fVar5 * fStack_84) * fVar2 * 20.0 +
             fVar9 + fVar5 * fStack_7c + fVar7 * fStack_8c;
  param_2[1] = (fVar8 * local_98 + fVar6 * local_88) * fVar1 * 20.0 +
               (fVar8 * fStack_94 + fVar6 * fStack_84) * fVar2 * 20.0 +
               fVar10 + fVar6 * fStack_7c + fVar8 * fStack_8c;
  return param_2;
}



// FUNCTION 1432ebd90 FUN_1432ebd90 body=600 status=ok
// SIG undefined FUN_1432ebd90(void)

Rect<float> * FUN_1432ebd90(longlong param_1,Rect<float> *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  
  local_b8 = 1.0;
  fStack_b4 = 0.0;
  uStack_b0 = 0;
  fStack_ac = 0.0;
  local_a8 = 0.0;
  fStack_a4 = 1.0;
  uStack_a0 = 0;
  fStack_9c = 0.0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1e8))(*(longlong **)(param_1 + 0x58),&local_b8);
  fVar1 = *(float *)(param_1 + 0x120);
  fVar5 = *(float *)(param_1 + 0x124);
  local_8c = *(float *)(param_1 + 300);
  fVar2 = *(float *)(param_1 + 0x130);
  fVar6 = *(float *)(param_1 + 0x134);
  local_7c = *(float *)(param_1 + 0x13c);
  fVar7 = fVar1;
  fVar8 = fVar2;
  if (param_4 != (float *)0x0) {
    fVar4 = fVar6 * param_4[7];
    fVar7 = fVar1 * *param_4 + fVar5 * param_4[4];
    fVar3 = fVar5 * param_4[7];
    fVar8 = fVar2 * *param_4 + fVar6 * param_4[4];
    fVar5 = fVar5 * param_4[5] + fVar1 * param_4[1];
    fVar6 = fVar6 * param_4[5] + fVar2 * param_4[1];
    local_8c = local_8c + fVar3 + fVar1 * param_4[3];
    local_7c = local_7c + fVar4 + fVar2 * param_4[3];
  }
  local_80 = 0;
  local_90 = 0;
  local_98 = fVar5 * local_a8 + fVar7 * local_b8;
  local_88 = fVar6 * local_a8 + fVar8 * local_b8;
  local_94 = fVar5 * fStack_a4 + fVar7 * fStack_b4;
  local_8c = local_8c + fVar5 * fStack_9c + fVar7 * fStack_ac;
  local_84 = fVar6 * fStack_a4 + fVar8 * fStack_b4;
  local_7c = local_7c + fVar6 * fStack_9c + fVar8 * fStack_ac;
  local_c8 = *param_3 * 20.0;
  fStack_c4 = param_3[1] * 20.0;
  fStack_c0 = param_3[2] * 20.0;
  fStack_bc = param_3[3] * 20.0;
  Scaleform::Render::Matrix2x4<float>::EncloseTransform
            ((Matrix2x4<float> *)&local_98,param_2,(Rect<float> *)&local_c8);
  return param_2;
}



// FUNCTION 1432ebff0 FUN_1432ebff0 body=727 status=ok
// SIG undefined FUN_1432ebff0(void)

undefined8
FUN_1432ebff0(longlong param_1,undefined8 param_2,float *param_3,float *param_4,
             Matrix2x4<float> *param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  uint local_90;
  undefined8 local_88;
  
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 400))
                    (*(longlong **)(param_1 + 0x18),&local_a8,param_2);
  if (cVar3 != '\0') {
    local_c8 = 0x3f800000;
    uStack_c0 = 0;
    local_b8 = 0.0;
    fStack_b4 = 1.0;
    uStack_b0 = 0;
    fStack_ac = 0.0;
    cVar3 = (**(code **)(*local_98 + 0xe8))(local_98,local_88,&local_c8);
    if (cVar3 != '\0') {
      local_cc = *(float *)(param_1 + 0x13c) * 20.0;
      local_e8 = *(float *)(param_1 + 0x120) * 20.0;
      local_e4 = *(float *)(param_1 + 0x124) * 20.0;
      local_e0 = *(float *)(param_1 + 0x128) * 20.0;
      local_dc = *(float *)(param_1 + 300) * 20.0;
      local_d8 = *(float *)(param_1 + 0x130) * 20.0;
      local_d4 = *(float *)(param_1 + 0x134) * 20.0;
      local_d0 = *(float *)(param_1 + 0x138) * 20.0;
      if (param_5 != (Matrix2x4<float> *)0x0) {
        Scaleform::Render::Matrix2x4<float>::Prepend((Matrix2x4<float> *)&local_e8,param_5);
      }
      uVar4 = 1;
      fVar1 = *param_3;
      fVar2 = param_3[1];
      *param_4 = (local_e4 * local_b8 + local_e8 * (float)local_c8) * *param_3 +
                 (local_e4 * fStack_b4 + local_e8 * local_c8._4_4_) * param_3[1] +
                 local_dc + local_e4 * fStack_ac + local_e8 * uStack_c0._4_4_;
      param_4[1] = (local_d4 * local_b8 + local_d8 * (float)local_c8) * fVar1 +
                   (local_d4 * fStack_b4 + local_d8 * local_c8._4_4_) * fVar2 +
                   local_cc + local_d4 * fStack_ac + local_d8 * uStack_c0._4_4_;
      goto LAB_1432ec285;
    }
  }
  uVar4 = 0;
LAB_1432ec285:
  if ((local_90 >> 6 & 1) != 0) {
    (**(code **)(*local_98 + 0x10))(local_98,&local_a8,local_88);
  }
  return uVar4;
}



// FUNCTION 1432ec2d0 FUN_1432ec2d0 body=91 status=ok
// SIG undefined FUN_1432ec2d0(void)

void FUN_1432ec2d0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x2254 + (ulonglong)param_2 * 0x50) != param_3) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  lVar2 = (ulonglong)param_2 + 0x6d;
  iVar1 = *(int *)(param_1 + 0x40 + lVar2 * 0x50);
  if (iVar1 == -1) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x44 + lVar2 * 0x50) = iVar1;
  return;
}



// FUNCTION 1432ec340 FUN_1432ec340 body=58 status=ok
// SIG undefined FUN_1432ec340(void)

undefined8 FUN_1432ec340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  lVar2 = param_1 + 0x70;
  if (param_1 == -0x78) {
    lVar2 = 0;
  }
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (((*(longlong *)(lVar1 + 0x20) == param_2) || (param_2 == 0)) &&
       (*(longlong *)(lVar1 + 0x38) != 0)) break;
    lVar1 = *(longlong *)(lVar1 + 0x10);
  }
  return *(undefined8 *)(lVar1 + 0x38);
}



// FUNCTION 1432ec380 FUN_1432ec380 body=400 status=ok
// SIG undefined FUN_1432ec380(void)

undefined4 FUN_1432ec380(undefined8 param_1,longlong *param_2,int *param_3,char param_4)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong local_res10 [2];
  
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    FUN_1432c2f70(local_res10);
    psVar2 = (short *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)*param_3,0);
    (**(code **)(*param_2 + 0x50))(param_2,psVar2,*param_3);
    iVar1 = *param_3;
    if (*psVar2 == -0x101) {
      FUN_1432c3830(local_res10,psVar2 + 1,(longlong)(iVar1 / 2 + -1));
    }
    else if (*psVar2 == -2) {
      lVar3 = 0;
      iVar1 = iVar1 / 2 + -1;
      if (0 < iVar1) {
        do {
          psVar2[lVar3 + 1] = psVar2[lVar3 + 1] << 8 | (ushort)psVar2[lVar3 + 1] >> 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar1);
      }
      FUN_1432c3830(local_res10,psVar2 + 1);
    }
    else {
      psVar4 = psVar2;
      if ((((2 < iVar1) && ((char)*psVar2 == -0x11)) && (*(char *)((longlong)psVar2 + 1) == -0x45))
         && ((char)psVar2[1] == -0x41)) {
        iVar1 = iVar1 + -3;
        psVar4 = (short *)((longlong)psVar2 + 3);
      }
      FUN_1432c3950(local_res10,psVar4,(longlong)iVar1);
    }
    if (param_4 == '\0') {
      FUN_1432c4d80(param_1,local_res10);
    }
    else {
      FUN_143364700((longlong)(local_res10[0] & 0xfffffffffffffffc) + 0xc,
                    *(ulonglong *)(local_res10[0] & 0xfffffffffffffffc) & 0x7fffffffffffffff,param_1
                   );
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,psVar2);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1432ec520 FUN_1432ec520 body=102 status=ok
// SIG undefined FUN_1432ec520(void)

bool FUN_1432ec520(undefined8 *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  *param_3 = iVar1;
  if (iVar1 == 0) {
    return false;
  }
  FUN_1432f25b0(param_1,(longlong)iVar1);
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2,*param_1,*param_3);
  return iVar1 == *param_3;
}



// FUNCTION 1432ec590 FUN_1432ec590 body=190 status=ok
// SIG undefined FUN_1432ec590(void)

undefined8 FUN_1432ec590(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_143311e60(param_2,param_3,param_4,0);
  if (cVar1 != '\0') {
    return 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar3 = param_1 + 0x70;
  lVar4 = param_2;
  if (param_1 == -0x78) {
    lVar3 = 0;
  }
  do {
    if (lVar2 == lVar3) {
      return 0;
    }
    if ((*(longlong *)(lVar2 + 0x20) != param_2) &&
       (cVar1 = FUN_143312430(*(longlong *)(lVar2 + 0x20),lVar4), cVar1 != '\0')) {
      cVar1 = FUN_143311e60(*(undefined8 *)(lVar2 + 0x20),param_3,param_4,0);
      if (cVar1 != '\0') {
        return 1;
      }
      lVar4 = *(longlong *)(lVar2 + 0x20);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
  } while( true );
}



// FUNCTION 1432ec660 FUN_1432ec660 body=150 status=ok
// SIG undefined FUN_1432ec660(void)

longlong FUN_1432ec660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_1 + 0x5470);
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x5478) == 0) {
      return 0;
    }
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1c0,0);
    lVar2 = 0;
    if (lVar1 != 0) {
      local_18 = 0;
      local_28 = 0;
      uStack_20 = 0;
      lVar2 = FUN_14331b530(lVar1,param_1 + 0x5350,*(undefined8 *)(param_1 + 0x5478),&local_28);
    }
    if (*(RefCountImpl **)(param_1 + 0x5470) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x5470));
    }
    *(longlong *)(param_1 + 0x5470) = lVar2;
  }
  return lVar2;
}



// FUNCTION 1432ec700 FUN_1432ec700 body=192 status=ok
// SIG undefined FUN_1432ec700(void)

longlong FUN_1432ec700(longlong param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))
                    (*(longlong **)(param_1 + 0x48),0xd8,0);
  if (lVar1 != 0) {
    this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xe);
    lVar2 = FUN_14337e0e0(lVar1,param_1 + 0x5350,this);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x5320);
  *(longlong *)(lVar2 + 0x18) = param_1 + 0x5310;
  *(longlong *)(*(longlong *)(param_1 + 0x5320) + 0x18) = lVar2;
  *(longlong *)(param_1 + 0x5320) = lVar2;
  return lVar2;
}



// FUNCTION 1432ec7d0 FUN_1432ec7d0 body=242 status=ok
// SIG undefined FUN_1432ec7d0(void)

void FUN_1432ec7d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x5338) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x5330);
      plVar2 = (longlong *)(lVar1 + 8);
      do {
        if (*plVar2 == param_2) {
          uVar3 = FUN_1432ce8e0(param_1 + 0x5350);
          *(undefined8 *)(uVar4 * 0x10 + lVar1) = uVar3;
          return;
        }
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 2;
      } while (uVar4 < *(ulonglong *)(param_1 + 0x5338));
    }
    uVar3 = FUN_1432ce8e0(param_1 + 0x5350);
    Scaleform::GFx::Resource::AddRef(param_2);
    FUN_1432f2920(param_1 + 0x5330,param_1 + 0x5330,*(longlong *)(param_1 + 0x5338) + 1);
    puVar5 = (undefined8 *)
             (*(longlong *)(param_1 + 0x5330) + -0x10 + *(longlong *)(param_1 + 0x5338) * 0x10);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = uVar3;
      Scaleform::GFx::Resource::AddRef(param_2);
      puVar5[1] = param_2;
    }
    FUN_1432de450(param_2);
  }
  return;
}



// FUNCTION 1432ec8d0 FUN_1432ec8d0 body=206 status=ok
// SIG undefined FUN_1432ec8d0(void)

void FUN_1432ec8d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x5338) != 0) {
    uVar3 = 0;
    uVar2 = *(ulonglong *)(param_1 + 0x5460);
    if (*(longlong *)(param_1 + 0x5338) != 0) {
      plVar1 = (longlong *)(param_1 + 0x5330);
      uVar4 = uVar3;
      do {
        if (*(ulonglong *)(uVar4 + *plVar1) < uVar2) {
          if (*(longlong *)(param_1 + 0x5338) == 1) {
            FUN_1432f2920(plVar1,plVar1,0);
          }
          else {
            if (*(longlong *)(uVar4 + 8 + *plVar1) != 0) {
              FUN_1432de450();
            }
            memmove((void *)(*plVar1 + uVar4),(void *)((longlong)(*plVar1 + uVar4) + 0x10),
                    (*(longlong *)(param_1 + 0x5338) - uVar3) * 0x10 - 0x10);
            *(longlong *)(param_1 + 0x5338) = *(longlong *)(param_1 + 0x5338) + -1;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 + 0x10;
        }
      } while (uVar3 < *(ulonglong *)(param_1 + 0x5338));
    }
  }
  return;
}



// FUNCTION 1432ec9b0 FUN_1432ec9b0 body=139 status=ok
// SIG undefined FUN_1432ec9b0(void)

undefined1
FUN_1432ec9b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,8);
  uVar1 = 0;
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 8))
                      (this,param_2,param_3,param_4,param_5,param_6,param_7);
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar1;
}



// FUNCTION 1432eca50 GetExtensionDirectory body=85 status=ok
// SIG undefined GetExtensionDirectory(void)

undefined8 Scaleform::GFx::MovieImpl::GetExtensionDirectory(longlong param_1,undefined8 param_2)

{
  RefCountImpl *this;
  undefined8 uVar1;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,8);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x10))(this,param_2);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ecab0 FUN_1432ecab0 body=84 status=ok
// SIG undefined FUN_1432ecab0(void)

void FUN_1432ecab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,8);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x18))(this,param_2,param_3);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ecb10 FUN_1432ecb10 body=84 status=ok
// SIG undefined FUN_1432ecb10(void)

void FUN_1432ecb10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,8);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x20))(this,param_2,param_3);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ecb70 FUN_1432ecb70 body=106 status=ok
// SIG undefined FUN_1432ecb70(void)

undefined8 FUN_1432ecb70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  RefCountImpl *this;
  undefined8 uVar1;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,8);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x28))(this,param_2,param_3);
    Scaleform::RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ecbe0 FUN_1432ecbe0 body=100 status=ok
// SIG undefined FUN_1432ecbe0(void)

void FUN_1432ecbe0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,8);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x30))(this,param_2,param_3,param_4);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ecc50 FUN_1432ecc50 body=104 status=ok
// SIG undefined FUN_1432ecc50(void)

undefined8 FUN_1432ecc50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x4b30) == 0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))
                      (*(longlong **)(param_1 + 0x48),0x38);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1e0))();
      uVar2 = FUN_1432ef6b0(lVar1,uVar2);
    }
    *(undefined8 *)(param_1 + 0x4b30) = uVar2;
    return uVar2;
  }
  return *(undefined8 *)(param_1 + 0x4b30);
}



// FUNCTION 1432eccc0 FUN_1432eccc0 body=157 status=ok
// SIG undefined FUN_1432eccc0(void)

void FUN_1432eccc0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  param_2 = param_2 & 0xffffffff;
  cVar2 = FUN_1432f1350(param_1 + 0x2210 + param_2 * 0x50);
  if (cVar2 != '\0') {
    iVar3 = 0;
    if (param_3 != (longlong *)0x0) {
      iVar3 = (**(code **)(*param_3 + 0x3a8))(param_3);
    }
    if (*(int *)(param_2 * 0x50 + 0x2254 + param_1) != iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),param_2,iVar3);
    }
    iVar1 = *(int *)(param_1 + 0x40 + (param_2 + 0x6d) * 0x50);
    if (iVar1 == -1) {
      iVar1 = iVar3;
    }
    *(int *)(param_1 + 0x44 + (param_2 + 0x6d) * 0x50) = iVar1;
  }
  return;
}



// FUNCTION 1432ecd70 FUN_1432ecd70 body=73 status=ok
// SIG undefined FUN_1432ecd70(void)

void FUN_1432ecd70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x5328);
  lVar2 = param_1 + 0x5310;
  if (param_1 == -0x5320) {
    lVar2 = 0;
  }
  for (; lVar1 != lVar2; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    if (0x7f < *(byte *)(lVar1 + 0xd0)) {
      FUN_14337f400(lVar1);
    }
  }
  return;
}



// FUNCTION 1432ece10 FUN_1432ece10 body=108 status=ok
// SIG undefined FUN_1432ece10(void)

void FUN_1432ece10(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (((*(float *)(param_1 + 0x108) != *(float *)(param_1 + 0x100)) ||
      (*(float *)(param_1 + 0x10c) != *(float *)(param_1 + 0x104))) &&
     (uVar2 = 0, *(longlong *)(param_1 + 0x68) != 0)) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + uVar2 * 0x10);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x60))();
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < *(ulonglong *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 1432ece90 GetMultitouchInputMode body=7 status=ok
// SIG undefined GetMultitouchInputMode(void)

undefined4 Scaleform::GFx::MovieImpl::GetMultitouchInputMode(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5488);
}



// FUNCTION 1432ecea0 SetMultitouchInputMode body=89 status=ok
// SIG undefined SetMultitouchInputMode(void)

void Scaleform::GFx::MovieImpl::SetMultitouchInputMode(longlong param_1,undefined4 param_2)

{
  char cVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,7);
  if (this != (RefCountImpl *)0x0) {
    cVar1 = (**(code **)(*(longlong *)this + 0x18))(this,param_2);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x5488) = param_2;
    }
    RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ecf00 GetMaxTouchPoints body=73 status=ok
// SIG undefined GetMaxTouchPoints(void)

undefined4 Scaleform::GFx::MovieImpl::GetMaxTouchPoints(longlong param_1)

{
  undefined4 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,7);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 8))(this);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ecf50 GetSupportedGesturesMask body=73 status=ok
// SIG undefined GetSupportedGesturesMask(void)

undefined4 Scaleform::GFx::MovieImpl::GetSupportedGesturesMask(longlong param_1)

{
  undefined4 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,7);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x10))(this);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ecfa0 RegisterAccelerometer body=84 status=ok
// SIG undefined RegisterAccelerometer(void)

undefined1 Scaleform::GFx::MovieImpl::RegisterAccelerometer(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,10);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 8))(this,param_2);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed000 UnregisterAccelerometer body=84 status=ok
// SIG undefined UnregisterAccelerometer(void)

undefined1 Scaleform::GFx::MovieImpl::UnregisterAccelerometer(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,10);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x10))(this,param_2);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed060 IsAccelerometerMuted body=76 status=ok
// SIG undefined IsAccelerometerMuted(void)

undefined1 Scaleform::GFx::MovieImpl::IsAccelerometerMuted(longlong param_1)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,10);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x18))(this);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed0c0 IsAccelerometerSupported body=76 status=ok
// SIG undefined IsAccelerometerSupported(void)

undefined1 Scaleform::GFx::MovieImpl::IsAccelerometerSupported(longlong param_1)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,10);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x20))(this);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed120 FUN_1432ed120 body=82 status=ok
// SIG undefined FUN_1432ed120(void)

void FUN_1432ed120(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,10);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x28))(this,param_2,param_3);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ed180 RegisterGeolocation body=84 status=ok
// SIG undefined RegisterGeolocation(void)

undefined1 Scaleform::GFx::MovieImpl::RegisterGeolocation(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xb);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 8))(this,param_2);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed1e0 UnregisterGeolocation body=84 status=ok
// SIG undefined UnregisterGeolocation(void)

undefined1 Scaleform::GFx::MovieImpl::UnregisterGeolocation(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xb);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x10))(this,param_2);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed240 IsGeolocationMuted body=76 status=ok
// SIG undefined IsGeolocationMuted(void)

undefined1 Scaleform::GFx::MovieImpl::IsGeolocationMuted(longlong param_1)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xb);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x18))(this);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed2a0 IsGeolocationSupported body=76 status=ok
// SIG undefined IsGeolocationSupported(void)

undefined1 Scaleform::GFx::MovieImpl::IsGeolocationSupported(longlong param_1)

{
  undefined1 uVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xb);
  if (this != (RefCountImpl *)0x0) {
    uVar1 = (**(code **)(*(longlong *)this + 0x20))(this);
    RefCountImpl::Release(this);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432ed300 FUN_1432ed300 body=82 status=ok
// SIG undefined FUN_1432ed300(void)

void FUN_1432ed300(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xb);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x28))(this,param_2,param_3);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ed360 FUN_1432ed360 body=906 status=ok
// SIG undefined FUN_1432ed360(void)

void FUN_1432ed360(Matrix3x4<float> *param_1,Matrix4x4<float> *param_2,float *param_3,float *param_4
                  ,float param_5,float param_6,char param_7)

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
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
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  fVar4 = ABS(param_3[2] - *param_3);
  if (param_6 == 0.0) {
    fVar9 = 1.0;
    fVar6 = fVar4;
    if (fVar4 <= 100000.0) {
      fVar6 = 100000.0;
    }
  }
  else {
    fVar9 = param_6 / 100.0;
    fVar6 = param_6 * 100.0;
  }
  fVar5 = *param_4;
  fVar1 = param_4[1];
  fVar11 = param_3[2] - fVar5;
  fVar10 = fVar1 - param_3[1];
  fVar12 = -(fVar5 - *param_3);
  fVar13 = -(param_3[3] - fVar1);
  if ((param_6 == 0.0) && (param_6 = fVar4 * 0.5, 0.0 < param_5)) {
    param_6 = _guard_xfg_dispatch_icall_nop(((param_5 * 3.1415927) / 180.0) * 0.5);
    param_6 = (fVar4 * 0.5) / param_6;
  }
  uVar3 = 0x3f800000;
  if (param_1 == (Matrix3x4<float> *)0x0) goto LAB_1432ed613;
  local_b0 = -fVar6;
  if (-fVar6 <= -param_6) {
    local_b0 = -param_6;
  }
  if (param_7 == '\0') {
    uVar3 = 0xbf800000;
  }
  fVar7 = fVar5 - fVar5;
  local_c8 = 0;
  fVar8 = fVar1 - fVar1;
  local_c0 = 0;
  fVar4 = fVar8 * fVar8 + fVar7 * fVar7;
  local_d8 = fVar7;
  local_d4 = fVar8;
  local_c4 = uVar3;
  local_b8 = fVar5;
  local_b4 = fVar1;
  if (param_7 == '\0') {
    fVar5 = local_b0 - 0.0;
    dVar2 = (double)(fVar4 + fVar5 * fVar5);
    local_d0 = fVar5;
    if (1e-24 <= dVar2) {
      dVar2 = _guard_xfg_dispatch_icall_nop(dVar2);
      fVar4 = (float)dVar2;
      local_d0 = fVar5 / fVar4;
      goto LAB_1432ed5e0;
    }
  }
  else {
    fVar5 = 0.0 - local_b0;
    dVar2 = (double)(fVar4 + fVar5 * fVar5);
    local_d0 = fVar5;
    if (1e-24 <= dVar2) {
      dVar2 = _guard_xfg_dispatch_icall_nop(dVar2);
      fVar4 = (float)dVar2;
      local_d0 = fVar5 / fVar4;
LAB_1432ed5e0:
      local_d8 = fVar7 / fVar4;
      local_d4 = fVar8 / fVar4;
    }
  }
  Scaleform::Render::Matrix3x4<float>::View
            (param_1,(Point3<float> *)&local_b8,(Point3<float> *)&local_d8,
             (Point3<float> *)&local_c8);
LAB_1432ed613:
  if (param_2 != (Matrix4x4<float> *)0x0) {
    if (0.0 < param_5) {
      if (param_7 == '\0') {
        Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterRH
                  (param_2,param_6,fVar12,fVar11,fVar13,fVar10,fVar9,fVar6);
      }
      else {
        Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterLH
                  (param_2,param_6,fVar12,fVar11,fVar13,fVar10,fVar9,fVar6);
      }
    }
    else if (param_7 == '\0') {
      Scaleform::Render::Matrix4x4<float>::OrthoOffCenterRH
                (param_2,fVar12,fVar11,fVar13,fVar10,fVar9,fVar6);
    }
    else {
      Scaleform::Render::Matrix4x4<float>::OrthoOffCenterLH
                (param_2,fVar12,fVar11,fVar13,fVar10,fVar9,fVar6);
    }
  }
  return;
}



// FUNCTION 1432ed6f0 GetViewMatrix3D body=56 status=ok
// SIG undefined GetViewMatrix3D(void)

void Scaleform::GFx::MovieImpl::GetViewMatrix3D(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))(*(longlong **)(param_1 + 0x18),0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ed71e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2,0);
    return;
  }
  return;
}



// FUNCTION 1432ed730 SetViewMatrix3D body=53 status=ok
// SIG undefined SetViewMatrix3D(void)

void Scaleform::GFx::MovieImpl::SetViewMatrix3D(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))(*(longlong **)(param_1 + 0x18),0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ed75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1432ed770 GetProjectionMatrix3D body=56 status=ok
// SIG undefined GetProjectionMatrix3D(void)

void Scaleform::GFx::MovieImpl::GetProjectionMatrix3D(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))(*(longlong **)(param_1 + 0x18),0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ed79e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,0);
    return;
  }
  return;
}



// FUNCTION 1432ed7b0 SetProjectionMatrix3D body=53 status=ok
// SIG undefined SetProjectionMatrix3D(void)

void Scaleform::GFx::MovieImpl::SetProjectionMatrix3D(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))(*(longlong **)(param_1 + 0x18),0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ed7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1432ed7f0 FUN_1432ed7f0 body=210 status=ok
// SIG undefined FUN_1432ed7f0(void)

void FUN_1432ed7f0(longlong param_1,RefCountNTSImpl *param_2,longlong param_3,
                  RefCountNTSImpl *param_4)

{
  longlong *plVar1;
  
  if (param_3 != 0) {
    *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + 1;
  }
  if (param_4 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  }
  if (param_2 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar1 = (longlong *)(param_1 + 0x54a0);
  FUN_1432f27c0(plVar1,plVar1,*(longlong *)(param_1 + 0x54a8) + 1);
  plVar1 = (longlong *)(*plVar1 + -0x20 + *(longlong *)(param_1 + 0x54a8) * 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (param_3 != 0) {
      *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + 1;
    }
    *plVar1 = param_3;
    if (param_4 != (RefCountNTSImpl *)0x0) {
      *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    }
    plVar1[1] = (longlong)param_4;
    if (param_2 != (RefCountNTSImpl *)0x0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    plVar1[2] = (longlong)param_2;
    *(undefined4 *)(plVar1 + 3) = 0xffffffff;
  }
  if (param_2 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(param_2);
  }
  if (param_4 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(param_4);
  }
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_3 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(param_3);
    }
  }
  return;
}



// FUNCTION 1432ed8d0 FUN_1432ed8d0 body=297 status=ok
// SIG undefined FUN_1432ed8d0(void)

longlong * FUN_1432ed8d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  RefCountNTSImpl *this_00;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (*(ulonglong *)(param_1 + 0x54a8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x54a0);
    plVar5 = (longlong *)(lVar3 + 8);
    do {
      if (*plVar5 == param_3) {
        plVar5 = (longlong *)(uVar6 * 0x20 + lVar3);
        if (*plVar5 != 0) {
          plVar1 = (longlong *)(*plVar5 + 0x18);
          *plVar1 = *plVar1 + 1;
        }
        lVar3 = *plVar5;
        if (plVar5[1] != 0) {
          piVar2 = (int *)(plVar5[1] + 8);
          *piVar2 = *piVar2 + 1;
        }
        this = (RefCountNTSImpl *)plVar5[1];
        if (plVar5[2] != 0) {
          piVar2 = (int *)(plVar5[2] + 8);
          *piVar2 = *piVar2 + 1;
        }
        this_00 = (RefCountNTSImpl *)plVar5[2];
        lVar4 = plVar5[3];
        FUN_1432f2110((longlong *)(param_1 + 0x54a0));
        if (lVar3 != 0) {
          *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
        }
        *param_2 = lVar3;
        if (this != (RefCountNTSImpl *)0x0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        param_2[1] = (longlong)this;
        if (this_00 != (RefCountNTSImpl *)0x0) {
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        }
        param_2[2] = (longlong)this_00;
        *(int *)(param_2 + 3) = (int)lVar4;
        if (this_00 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this_00);
        }
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        if (lVar3 != 0) {
          plVar5 = (longlong *)(lVar3 + 0x18);
          *plVar5 = *plVar5 + -1;
          if (*plVar5 == 0) {
            FUN_1432ccf00(lVar3);
          }
        }
        return param_2;
      }
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 4;
    } while (uVar6 < *(ulonglong *)(param_1 + 0x54a8));
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  return param_2;
}



// FUNCTION 1432eda00 FUN_1432eda00 body=254 status=ok
// SIG undefined FUN_1432eda00(void)

void FUN_1432eda00(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x54a8) != 0) {
    plVar3 = (longlong *)(param_1 + 0x54a0);
    do {
      lVar6 = *(longlong *)(param_1 + 0x54a8) * 0x20 + *plVar3;
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        plVar1 = (longlong *)(*(longlong *)(lVar6 + -0x20) + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00();
        }
      }
      *(undefined8 *)(lVar6 + -0x20) = 0;
      if (*(RefCountNTSImpl **)(lVar6 + -0x18) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + -0x18));
      }
      *(undefined8 *)(lVar6 + -0x18) = 0;
      if (*(RefCountNTSImpl **)(lVar6 + -0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + -0x10));
      }
      *(undefined8 *)(lVar6 + -0x10) = 0;
      *(undefined4 *)(lVar6 + -8) = 0;
      uVar4 = *(ulonglong *)(param_1 + 0x54a8);
      uVar2 = uVar4 - 1;
      FUN_1432f27c0(plVar3,plVar3,uVar2);
      if (uVar4 < uVar2) {
        puVar5 = (undefined8 *)(uVar4 * 0x20 + *plVar3);
        for (lVar6 = uVar2 - uVar4; lVar6 != 0; lVar6 = lVar6 + -1) {
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *(undefined4 *)(puVar5 + 3) = 0xffffffff;
          }
          puVar5 = puVar5 + 4;
        }
      }
    } while (*(longlong *)(param_1 + 0x54a8) != 0);
  }
  return;
}



// FUNCTION 1432edb10 FUN_1432edb10 body=138 status=ok
// SIG undefined FUN_1432edb10(void)

void FUN_1432edb10(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  uVar2 = 0;
  if (*(ulonglong *)(param_1 + 0x54a8) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x54a0) + 8);
    uVar3 = uVar2;
    while (*plVar1 != param_2) {
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 4;
      if (*(ulonglong *)(param_1 + 0x54a8) <= uVar3) {
        return;
      }
    }
    puVar4 = (ulonglong *)(uVar3 * 0x20 + *(longlong *)(param_1 + 0x54a0));
    if (param_3 != 0) {
      uVar2 = FUN_14336b350(param_3);
      if (uVar2 != 0) {
        *(longlong *)(uVar2 + 0x18) = *(longlong *)(uVar2 + 0x18) + 1;
      }
    }
    if (*puVar4 != 0) {
      plVar1 = (longlong *)(*puVar4 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    *puVar4 = uVar2;
    *(undefined4 *)(puVar4 + 3) = 0xffffffff;
  }
  return;
}



// FUNCTION 1432edba0 FUN_1432edba0 body=269 status=ok
// SIG undefined FUN_1432edba0(void)

undefined8 FUN_1432edba0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(ulonglong *)(param_1 + 0x5310) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x5308);
    do {
      if ((plVar2[1] == param_3) && (*plVar2 == param_2)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 2;
    } while (uVar1 < *(ulonglong *)(param_1 + 0x5310));
  }
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
  }
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  FUN_1432f26f0(param_1 + 0x5308,param_1 + 0x5308,*(longlong *)(param_1 + 0x5310) + 1);
  plVar2 = (longlong *)
           (*(longlong *)(param_1 + 0x5308) + -0x10 + *(longlong *)(param_1 + 0x5310) * 0x10);
  if (plVar2 != (longlong *)0x0) {
    if (param_2 != 0) {
      Scaleform::GFx::Resource::AddRef(param_2);
    }
    *plVar2 = param_2;
    if (param_3 != 0) {
      Scaleform::GFx::Resource::AddRef(param_3);
    }
    plVar2[1] = param_3;
  }
  *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) | 2;
  if (param_3 != 0) {
    FUN_1432de450(param_3);
  }
  if (param_2 != 0) {
    FUN_1432de450(param_2);
  }
  return 1;
}



// FUNCTION 1432edcc0 FUN_1432edcc0 body=219 status=ok
// SIG undefined FUN_1432edcc0(void)

undefined8 FUN_1432edcc0(longlong param_1,char *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  char *_Str1;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x5310);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar6 = 3;
    if ((param_3 & 0x300) != 0) {
      uVar6 = 0x303;
    }
    uVar5 = uVar4;
    do {
      plVar2 = *(longlong **)(*(longlong *)(uVar5 + 8 + *(longlong *)(param_1 + 0x5308)) + 0x18);
      if ((*(uint *)((longlong)plVar2 + 0x1c) & (uVar6 | param_3 & 0x10)) == (param_3 & 0x313)) {
        _Str1 = (char *)(**(code **)(*plVar2 + 8))();
        iVar3 = _stricmp(_Str1,param_2);
        if (iVar3 == 0) {
          *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0x5308) + uVar4 * 0x10);
          return *(undefined8 *)(*(longlong *)(param_1 + 0x5308) + 8 + uVar4 * 0x10);
        }
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + 0x10;
    } while (uVar4 < uVar1);
  }
  return 0;
}



// FUNCTION 1432eddb0 FUN_1432eddb0 body=171 status=ok
// SIG undefined FUN_1432eddb0(void)

void FUN_1432eddb0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = uVar3;
  uVar2 = uVar3;
  if (*(longlong *)(param_1 + 0x5310) != 0) {
    do {
      if (*(longlong *)(uVar2 + *(longlong *)(param_1 + 0x5308)) == param_2) {
        FUN_1432f2070(param_1 + 0x5308,uVar1);
      }
      else {
        uVar1 = uVar1 + 1;
        uVar2 = uVar2 + 0x10;
      }
    } while (uVar1 < *(ulonglong *)(param_1 + 0x5310));
  }
  uVar1 = *(ulonglong *)(param_1 + 0x80);
  uVar2 = param_1 + 0x70;
  if (param_1 == -0x78) {
    uVar2 = uVar3;
  }
  for (; uVar1 != uVar2; uVar1 = *(ulonglong *)(uVar1 + 0x10)) {
    FUN_143386d50(*(undefined8 *)(uVar1 + 0x38),param_2);
  }
  *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) | 2;
  return;
}



// FUNCTION 1432ede70 FUN_1432ede70 body=116 status=ok
// SIG undefined FUN_1432ede70(void)

void FUN_1432ede70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x5310);
  if (lVar2 != 0) {
    lVar1 = 0;
    do {
      local_res8 = *(undefined8 *)
                    (*(longlong *)(lVar1 + 8 + *(longlong *)(param_1 + 0x5308)) + 0x18);
      FUN_1432ee9d0(param_2,param_2,&local_res8);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1432edef0 FUN_1432edef0 body=98 status=ok
// SIG undefined FUN_1432edef0(void)

void FUN_1432edef0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0xa0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar1,2);
    *puVar1 = &PTR_FUN_145af8f68;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
  }
  FUN_1432ceba0(param_1,puVar1);
  return;
}



// FUNCTION 1432edf60 FUN_1432edf60 body=97 status=ok
// SIG undefined FUN_1432edf60(void)

void FUN_1432edf60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0xa0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar1,3);
    *puVar1 = &PTR_FUN_145af92d8;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
  }
  FUN_1432ceba0(param_1,puVar1);
  return;
}



// FUNCTION 1432edfd0 FUN_1432edfd0 body=232 status=ok
// SIG undefined FUN_1432edfd0(void)

void FUN_1432edfd0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x60) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x60,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x5fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143354e50(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 1432ee0c0 FUN_1432ee0c0 body=1032 status=ok
// SIG undefined FUN_1432ee0c0(void)

void FUN_1432ee0c0(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  RefCountNTSImpl *pRVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  RefCountNTSImpl *this;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong local_res10;
  undefined1 local_res20 [8];
  longlong local_2b8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar11 = local_2b8;
    local_res10 = param_3;
    local_res20[0] = param_4;
LAB_1432ee10d:
    while (lVar9 = param_2, 9 < local_res10 - param_2) {
      plVar2 = (longlong *)(*param_1 + param_2 * 8);
      plVar3 = (longlong *)(*param_1 + ((local_res10 - param_2) / 2 + param_2) * 8);
      if (*plVar2 != 0) {
        piVar1 = (int *)(*plVar2 + 8);
        *piVar1 = *piVar1 + 1;
      }
      pRVar4 = (RefCountNTSImpl *)*plVar2;
      if (*plVar3 != 0) {
        piVar1 = (int *)(*plVar3 + 8);
        *piVar1 = *piVar1 + 1;
      }
      if ((RefCountNTSImpl *)*plVar2 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar2);
      }
      *plVar2 = *plVar3;
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar4 + 8) = *(int *)(pRVar4 + 8) + 1;
      }
      if ((RefCountNTSImpl *)*plVar3 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar3);
      }
      *plVar3 = (longlong)pRVar4;
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar4);
      }
      lVar9 = param_2 + 1;
      lVar10 = local_res10 + -1;
      cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar8 != '\0') {
        FUN_1432eeae0(*param_1 + lVar10 * 8,*param_1 + lVar9 * 8);
      }
      cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar8 != '\0') {
        FUN_1432eeae0(*param_1 + param_2 * 8,*param_1 + lVar9 * 8);
      }
      cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if (cVar8 != '\0') {
        FUN_1432eeae0(*param_1 + lVar10 * 8,*param_1 + param_2 * 8);
      }
      while( true ) {
        do {
          lVar9 = lVar9 + 1;
          cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + lVar9 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while (cVar8 != '\0');
        do {
          lVar10 = lVar10 + -1;
          cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar10 * 8));
        } while (cVar8 != '\0');
        lVar5 = *param_1;
        if (lVar10 < lVar9) break;
        plVar2 = (longlong *)(lVar5 + lVar9 * 8);
        plVar3 = (longlong *)(lVar5 + lVar10 * 8);
        if (*plVar2 != 0) {
          piVar1 = (int *)(*plVar2 + 8);
          *piVar1 = *piVar1 + 1;
        }
        pRVar4 = (RefCountNTSImpl *)*plVar2;
        if (*plVar3 != 0) {
          piVar1 = (int *)(*plVar3 + 8);
          *piVar1 = *piVar1 + 1;
        }
        if ((RefCountNTSImpl *)*plVar2 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar2);
        }
        *plVar2 = *plVar3;
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar4 + 8) = *(int *)(pRVar4 + 8) + 1;
        }
        if ((RefCountNTSImpl *)*plVar3 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar3);
        }
        *plVar3 = (longlong)pRVar4;
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar4);
        }
      }
      plVar2 = (longlong *)(lVar5 + param_2 * 8);
      plVar3 = (longlong *)(lVar5 + lVar10 * 8);
      if (*plVar2 != 0) {
        piVar1 = (int *)(*plVar2 + 8);
        *piVar1 = *piVar1 + 1;
      }
      pRVar4 = (RefCountNTSImpl *)*plVar2;
      if (*plVar3 != 0) {
        piVar1 = (int *)(*plVar3 + 8);
        *piVar1 = *piVar1 + 1;
      }
      if ((RefCountNTSImpl *)*plVar2 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar2);
      }
      *plVar2 = *plVar3;
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar4 + 8) = *(int *)(pRVar4 + 8) + 1;
      }
      if ((RefCountNTSImpl *)*plVar3 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar3);
      }
      *plVar3 = (longlong)pRVar4;
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar4);
      }
      if (local_res10 - lVar9 < lVar10 - param_2) {
        *plVar11 = param_2;
        plVar11[1] = lVar10;
        plVar11 = plVar11 + 2;
        param_2 = lVar9;
      }
      else {
        plVar11[1] = local_res10;
        *plVar11 = lVar9;
        plVar11 = plVar11 + 2;
        local_res10 = lVar10;
      }
    }
joined_r0x0001432ee37f:
    lVar10 = lVar9;
    lVar9 = lVar10 + 1;
    if (lVar9 < local_res10) {
      lVar5 = lVar10 * 8;
      cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + 8 + lVar5),
                            *(undefined8 *)(*param_1 + lVar5));
      while (cVar8 != '\0') {
        lVar6 = *param_1;
        lVar7 = *(longlong *)(lVar6 + 8 + lVar5);
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 8);
          *piVar1 = *piVar1 + 1;
        }
        pRVar4 = *(RefCountNTSImpl **)(lVar6 + 8 + lVar5);
        if (*(longlong *)(lVar6 + lVar5) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar6 + lVar5) + 8);
          *piVar1 = *piVar1 + 1;
        }
        this = *(RefCountNTSImpl **)(lVar6 + 8 + lVar5);
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        *(undefined8 *)(lVar6 + 8 + lVar5) = *(undefined8 *)(lVar6 + lVar5);
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar4 + 8) = *(int *)(pRVar4 + 8) + 1;
        }
        if (*(RefCountNTSImpl **)(lVar6 + lVar5) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + lVar5));
        }
        *(RefCountNTSImpl **)(lVar6 + lVar5) = pRVar4;
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar4);
        }
        if (lVar10 == param_2) break;
        lVar10 = lVar10 + -1;
        lVar5 = lVar10 * 8;
        cVar8 = FUN_1432efda0(local_res20,*(undefined8 *)(*param_1 + 8 + lVar5),
                              *(undefined8 *)(*param_1 + lVar5));
      }
      goto joined_r0x0001432ee37f;
    }
    if (local_2b8 < plVar11) {
      local_res10 = plVar11[-1];
      plVar11 = plVar11 + -2;
      param_2 = *plVar11;
      goto LAB_1432ee10d;
    }
  }
  return;
}



// FUNCTION 1432ee4d0 FUN_1432ee4d0 body=999 status=ok
// SIG undefined FUN_1432ee4d0(void)

void FUN_1432ee4d0(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  short sVar2;
  RefCountNTSImpl *pRVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_res18;
  longlong local_2b8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar9 = local_2b8;
    local_res18 = param_3;
LAB_1432ee51a:
    while (lVar7 = param_2, 9 < local_res18 - param_2) {
      plVar10 = (longlong *)(*param_1 + param_2 * 8);
      plVar11 = (longlong *)(*param_1 + ((local_res18 - param_2) / 2 + param_2) * 8);
      if (*plVar10 != 0) {
        piVar1 = (int *)(*plVar10 + 8);
        *piVar1 = *piVar1 + 1;
      }
      pRVar3 = (RefCountNTSImpl *)*plVar10;
      if (*plVar11 != 0) {
        piVar1 = (int *)(*plVar11 + 8);
        *piVar1 = *piVar1 + 1;
      }
      if ((RefCountNTSImpl *)*plVar10 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar10);
      }
      *plVar10 = *plVar11;
      if (pRVar3 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar3 + 8) = *(int *)(pRVar3 + 8) + 1;
      }
      if ((RefCountNTSImpl *)*plVar11 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar11);
      }
      *plVar11 = (longlong)pRVar3;
      if (pRVar3 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar3);
      }
      lVar4 = *param_1;
      lVar7 = param_2 + 1;
      lVar8 = local_res18 + -1;
      lVar5 = lVar7 * 8;
      lVar6 = lVar8 * 8;
      if (*(short *)(*(longlong *)(lVar6 + lVar4) + 0xbc) <
          *(short *)(*(longlong *)(lVar5 + lVar4) + 0xbc)) {
        FUN_1432eeae0(lVar6 + lVar4);
      }
      lVar4 = *param_1;
      if (*(short *)(*(longlong *)(lVar4 + param_2 * 8) + 0xbc) <
          *(short *)(*(longlong *)(lVar5 + lVar4) + 0xbc)) {
        FUN_1432eeae0(lVar4 + param_2 * 8,lVar5 + lVar4);
      }
      lVar4 = *param_1;
      if (*(short *)(*(longlong *)(lVar6 + lVar4) + 0xbc) <
          *(short *)(*(longlong *)(lVar4 + param_2 * 8) + 0xbc)) {
        FUN_1432eeae0(lVar6 + lVar4,lVar4 + param_2 * 8);
      }
      while( true ) {
        lVar4 = *param_1;
        lVar5 = lVar5 + lVar4;
        sVar2 = *(short *)(*(longlong *)(lVar4 + param_2 * 8) + 0xbc);
        do {
          plVar10 = (longlong *)(lVar5 + 8);
          lVar5 = lVar5 + 8;
          lVar7 = lVar7 + 1;
        } while (*(short *)(*plVar10 + 0xbc) < sVar2);
        lVar6 = lVar6 + lVar4;
        do {
          plVar10 = (longlong *)(lVar6 + -8);
          lVar6 = lVar6 + -8;
          lVar8 = lVar8 + -1;
        } while (sVar2 < *(short *)(*plVar10 + 0xbc));
        if (lVar8 < lVar7) break;
        lVar5 = lVar7 * 8;
        lVar6 = lVar8 * 8;
        if (*(longlong *)(lVar5 + lVar4) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar5 + lVar4) + 8);
          *piVar1 = *piVar1 + 1;
        }
        pRVar3 = *(RefCountNTSImpl **)(lVar5 + lVar4);
        if (*(longlong *)(lVar6 + lVar4) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar6 + lVar4) + 8);
          *piVar1 = *piVar1 + 1;
        }
        if (*(RefCountNTSImpl **)(lVar5 + lVar4) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar5 + lVar4));
        }
        *(undefined8 *)(lVar5 + lVar4) = *(undefined8 *)(lVar6 + lVar4);
        if (pRVar3 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar3 + 8) = *(int *)(pRVar3 + 8) + 1;
        }
        if (*(RefCountNTSImpl **)(lVar6 + lVar4) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + lVar4));
        }
        *(RefCountNTSImpl **)(lVar6 + lVar4) = pRVar3;
        if (pRVar3 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar3);
        }
      }
      plVar11 = (longlong *)(param_2 * 8 + lVar4);
      plVar10 = (longlong *)(lVar8 * 8 + lVar4);
      if (*plVar11 != 0) {
        piVar1 = (int *)(*plVar11 + 8);
        *piVar1 = *piVar1 + 1;
      }
      pRVar3 = (RefCountNTSImpl *)*plVar11;
      if (*plVar10 != 0) {
        piVar1 = (int *)(*plVar10 + 8);
        *piVar1 = *piVar1 + 1;
      }
      if ((RefCountNTSImpl *)*plVar11 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar11);
      }
      *plVar11 = *plVar10;
      if (pRVar3 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar3 + 8) = *(int *)(pRVar3 + 8) + 1;
      }
      if ((RefCountNTSImpl *)*plVar10 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar10);
      }
      *plVar10 = (longlong)pRVar3;
      if (pRVar3 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar3);
      }
      if (local_res18 - lVar7 < lVar8 - param_2) {
        *plVar9 = param_2;
        plVar9[1] = lVar8;
        plVar9 = plVar9 + 2;
        param_2 = lVar7;
      }
      else {
        plVar9[1] = local_res18;
        *plVar9 = lVar7;
        plVar9 = plVar9 + 2;
        local_res18 = lVar8;
      }
    }
joined_r0x0001432ee7ab:
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
    if (lVar7 < local_res18) {
      lVar5 = *param_1;
      plVar10 = (longlong *)(lVar5 + lVar8 * 8);
      if (*(short *)(*(longlong *)(lVar5 + 8 + lVar8 * 8) + 0xbc) <
          *(short *)(*(longlong *)(lVar5 + lVar8 * 8) + 0xbc)) {
        do {
          if (plVar10[1] != 0) {
            piVar1 = (int *)(plVar10[1] + 8);
            *piVar1 = *piVar1 + 1;
          }
          pRVar3 = (RefCountNTSImpl *)plVar10[1];
          if (*plVar10 != 0) {
            piVar1 = (int *)(*plVar10 + 8);
            *piVar1 = *piVar1 + 1;
          }
          if ((RefCountNTSImpl *)plVar10[1] != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plVar10[1]);
          }
          plVar10[1] = *plVar10;
          if (pRVar3 != (RefCountNTSImpl *)0x0) {
            *(int *)(pRVar3 + 8) = *(int *)(pRVar3 + 8) + 1;
          }
          if ((RefCountNTSImpl *)*plVar10 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar10);
          }
          *plVar10 = (longlong)pRVar3;
          if (pRVar3 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRVar3);
          }
          if (lVar8 == param_2) break;
          lVar5 = *param_1;
          lVar8 = lVar8 + -1;
          plVar10 = (longlong *)(lVar5 + lVar8 * 8);
        } while (*(short *)(*(longlong *)(lVar5 + 8 + lVar8 * 8) + 0xbc) <
                 *(short *)(*(longlong *)(lVar5 + lVar8 * 8) + 0xbc));
      }
      goto joined_r0x0001432ee7ab;
    }
    if (local_2b8 < plVar9) {
      local_res18 = plVar9[-1];
      plVar9 = plVar9 + -2;
      param_2 = *plVar9;
      goto LAB_1432ee51a;
    }
  }
  return;
}



// FUNCTION 1432ee8c0 FUN_1432ee8c0 body=259 status=ok
// SIG undefined FUN_1432ee8c0(void)

ulonglong FUN_1432ee8c0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = *(ulonglong *)(lVar1 + 8) & (longlong)*param_2;
  uVar3 = uVar4 * 3;
  puVar7 = (ulonglong *)(lVar1 + 0x10 + uVar4 * 0x18);
  if ((*(longlong *)(lVar1 + 0x10 + uVar4 * 0x18) != -2) && (puVar7[1] == uVar4)) {
    uVar2 = uVar4;
    uVar6 = 0xffffffffffffffff;
    while( true ) {
      uVar5 = uVar2;
      if ((puVar7[1] == uVar4) && (uVar3 = puVar7[2], *(int *)(uVar3 + 0x10) == *param_2)) {
        uVar3 = *puVar7;
        if (uVar4 == uVar5) {
          if (uVar3 != 0xffffffffffffffff) {
            lVar1 = lVar1 + uVar3 * 0x18;
            if ((RefCountImpl *)puVar7[2] != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release((RefCountImpl *)puVar7[2]);
            }
            *puVar7 = 0xfffffffffffffffe;
            FUN_1432ef2c0(puVar7,lVar1 + 0x10);
            puVar7 = (ulonglong *)(lVar1 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar1 + 0x10 + uVar6 * 0x18) = uVar3;
        }
        if ((RefCountImpl *)puVar7[2] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar7[2]);
        }
        *puVar7 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar2 = *puVar7;
      if (uVar2 == 0xffffffffffffffff) break;
      uVar3 = uVar2 * 3;
      puVar7 = (ulonglong *)(lVar1 + 0x10 + uVar2 * 0x18);
      uVar6 = uVar5;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1432ee9d0 FUN_1432ee9d0 body=271 status=ok
// SIG undefined FUN_1432ee9d0(void)

longlong FUN_1432ee9d0(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  RefCountImpl *pRVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte local_res8 [8];
  
  pRVar3 = (RefCountImpl *)*param_3;
  if (pRVar3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar3);
  }
  uVar6 = 0x1505;
  lVar8 = 8;
  do {
    pbVar2 = &stack0x00000007 + lVar8;
    lVar8 = lVar8 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*pbVar2;
  } while (lVar8 != 0);
  if (pRVar3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar3);
  }
  lVar8 = *param_1;
  if (lVar8 != 0) {
    uVar7 = *(ulonglong *)(lVar8 + 8) & uVar6;
    lVar1 = uVar7 * 3 + 2;
    puVar4 = (ulonglong *)(lVar8 + lVar1 * 8);
    if ((*(longlong *)(lVar8 + lVar1 * 8) != -2) && (uVar5 = uVar7, puVar4[1] == uVar7)) {
      while ((puVar4[1] != uVar7 || (puVar4[2] != *param_3))) {
        uVar5 = *puVar4;
        if (uVar5 == 0xffffffffffffffff) goto LAB_1432eeabb;
        puVar4 = (ulonglong *)(lVar8 + uVar5 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar5) {
        pRVar3 = (RefCountImpl *)*param_3;
        lVar8 = lVar8 + uVar5 * 0x18;
        if (pRVar3 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar3);
        }
        if (*(RefCountImpl **)(lVar8 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar8 + 0x20));
        }
        *(RefCountImpl **)(lVar8 + 0x20) = pRVar3;
        return lVar8 + 0x20;
      }
    }
  }
LAB_1432eeabb:
  lVar8 = FUN_1432eeb60(param_1,param_2,param_3,uVar6);
  return lVar8;
}



// FUNCTION 1432eeae0 FUN_1432eeae0 body=118 status=ok
// SIG undefined FUN_1432eeae0(void)

void FUN_1432eeae0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  RefCountNTSImpl *this;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    *piVar1 = *piVar1 + 1;
  }
  this = (RefCountNTSImpl *)*param_1;
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    *piVar1 = *piVar1 + 1;
  }
  if ((RefCountNTSImpl *)*param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_1);
  }
  *param_1 = *param_2;
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if ((RefCountNTSImpl *)*param_2 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_2);
  }
  *param_2 = (longlong)this;
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1432eeb60 FUN_1432eeb60 body=466 status=ok
// SIG undefined FUN_1432eeb60(void)

longlong FUN_1432eeb60(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  RefCountImpl *pRVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432eebb6;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1432bda50(param_1,param_2,lVar10);
LAB_1432eebb6:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    pRVar6 = (RefCountImpl *)*param_3;
    if (pRVar6 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar6);
    }
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    if (pRVar6 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar6);
    }
    *(RefCountImpl **)(lVar10 + 0x20) = pRVar6;
    if (pRVar6 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar6);
    }
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      pRVar6 = (RefCountImpl *)*param_3;
      if (pRVar6 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar6);
      }
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(RefCountImpl **)(lVar10 + 0x20) = pRVar6;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar8 = uVar9;
      pRVar6 = (RefCountImpl *)*param_3;
      if (pRVar6 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar6);
      }
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(RefCountImpl **)(lVar10 + 0x20) = pRVar6;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 1432eed40 FUN_1432eed40 body=354 status=ok
// SIG undefined FUN_1432eed40(void)

longlong FUN_1432eed40(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_1432f0430();
  plVar5 = (longlong *)*param_1;
  uVar9 = plVar5[1];
  *plVar5 = *plVar5 + 1;
  lVar6 = *param_1;
  param_4 = uVar9 & param_4;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x18);
  lVar3 = lVar6 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    lVar6 = *param_3;
    *(longlong *)(lVar3 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(longlong *)(lVar3 + 0x20) = param_3[1];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & uVar9;
      lVar4 = lVar6 + uVar10 * 0x18;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x18) != -2);
    uVar9 = *(uint *)(*(longlong *)(lVar3 + 0x18) + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      *(longlong *)(lVar4 + 0x10) = lVar7;
      lVar6 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(lVar4 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      lVar6 = *param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar3 + 0x18) = lVar6;
      *(longlong *)(lVar3 + 0x20) = param_3[1];
      *(ulonglong *)(lVar3 + 0x10) = uVar10;
    }
    else {
      lVar2 = uVar9 * 3 + 2;
      uVar9 = *(ulonglong *)(lVar6 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar6 + lVar2 * 8), uVar9 != param_4) {
        lVar2 = *puVar8 * 3 + 2;
        uVar9 = *(ulonglong *)(lVar6 + lVar2 * 8);
      }
      *(longlong *)(lVar4 + 0x10) = lVar7;
      lVar6 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(lVar4 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      *puVar8 = uVar10;
      lVar6 = *param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar3 + 0x18) = lVar6;
      *(longlong *)(lVar3 + 0x20) = param_3[1];
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar3 + 0x18;
}



// FUNCTION 1432eeeb0 FUN_1432eeeb0 body=440 status=ok
// SIG undefined FUN_1432eeeb0(void)

longlong FUN_1432eeeb0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_1432eef0a;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_1432f3b80(param_1,param_2,lVar9);
LAB_1432eef0a:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar5 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 1432ef070 FUN_1432ef070 body=459 status=ok
// SIG undefined FUN_1432ef070(void)

longlong FUN_1432ef070(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432ef0c2;
    lVar9 = plVar3[1] * 2 + 2;
  }
  FUN_1432f3cd0(param_1,param_2,lVar9);
LAB_1432ef0c2:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar9 = lVar4 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
    }
    *(undefined8 *)(lVar9 + 0x20) = *param_3;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar8 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar8 * 0x18) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
      }
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar1 = *(ulonglong *)(lVar9 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
      }
      if (*(RefCountImpl **)(lVar9 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar9 + 0x20));
      }
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return lVar9 + 0x20;
}



// FUNCTION 1432ef240 FUN_1432ef240 body=122 status=ok
// SIG undefined FUN_1432ef240(void)

ulonglong FUN_1432ef240(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 3 + 2;
  puVar4 = (ulonglong *)(lVar2 + lVar1 * 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar3 = param_3,
     ((ulonglong)*(uint *)(puVar4[1] + 0x1c) & *(ulonglong *)(lVar2 + 8)) == param_3)) {
    while( true ) {
      if ((((ulonglong)*(uint *)(puVar4[1] + 0x1c) & *(ulonglong *)(lVar2 + 8)) == param_3) &&
         (puVar4[1] == *param_2)) {
        return uVar3;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)(lVar2 + uVar3 * 0x18 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1432ef2c0 FUN_1432ef2c0 body=66 status=ok
// SIG undefined FUN_1432ef2c0(void)

undefined8 * FUN_1432ef2c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((RefCountImpl *)param_2[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_2[2]);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1432ef310 FUN_1432ef310 body=222 status=ok
// SIG undefined FUN_1432ef310(void)

undefined8 * FUN_1432ef310(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_144f8bf30;
  plVar1 = param_1 + 4;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f8c5e0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f70a50;
  *plVar1 = (longlong)&PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f8c510;
  FUN_1432de310(param_1 + 10);
  plVar2 = (longlong *)param_1[3];
  if ((plVar2 != (longlong *)0x0) && (plVar2 != plVar1)) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[9] = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  param_1[3] = plVar1;
  return param_1;
}



// FUNCTION 1432ef3f0 FUN_1432ef3f0 body=215 status=ok
// SIG undefined FUN_1432ef3f0(void)

undefined8 * FUN_1432ef3f0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_145af8120;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *param_1 = &PTR_FUN_145af8f20;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_1433210c0(param_1 + 8,param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  return param_1;
}



// FUNCTION 1432ef4d0 FUN_1432ef4d0 body=141 status=ok
// SIG undefined FUN_1432ef4d0(void)

undefined8 * FUN_1432ef4d0(undefined8 *param_1,byte param_2)

{
  *(ushort *)(param_1 + 1) = (ushort)param_2;
  *(undefined2 *)((longlong)param_1 + 10) = 1;
  *param_1 = &PTR_FUN_145af8f20;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1432bfaf0(param_1 + 10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 1432ef560 FUN_1432ef560 body=218 status=ok
// SIG undefined FUN_1432ef560(void)

undefined8 * FUN_1432ef560(undefined8 *param_1,longlong param_2)

{
  FUN_1432ef3f0();
  *param_1 = &PTR_FUN_145af8f68;
  Scaleform::Render::TreeNodeArray::TreeNodeArray(param_1 + 0x12,param_2 + 0x90);
  *param_1 = &PTR_FUN_145af8fb0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  return param_1;
}



// FUNCTION 1432ef640 FUN_1432ef640 body=109 status=ok
// SIG undefined FUN_1432ef640(void)

undefined8 * FUN_1432ef640(undefined8 *param_1)

{
  FUN_1432ef4d0(param_1,1);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_145af8fb0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 1432ef6b0 FUN_1432ef6b0 body=99 status=ok
// SIG undefined FUN_1432ef6b0(void)

undefined8 * FUN_1432ef6b0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = FUN_143360950(param_2,&DAT_145af3922,0,0);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = lVar2;
  iVar1 = *(int *)(lVar2 + 0x18);
  *(int *)(lVar2 + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1432ef720 FUN_1432ef720 body=306 status=ok
// SIG undefined FUN_1432ef720(void)

undefined4 * FUN_1432ef720(undefined4 *param_1)

{
  *param_1 = 0x7f7fffff;
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0x7f7fffff;
  param_1[3] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[4] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x20] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x3b] = 0x3f800000;
  return param_1;
}



// FUNCTION 1432ef860 FUN_1432ef860 body=103 status=ok
// SIG undefined FUN_1432ef860(void)

void FUN_1432ef860(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -8 + lVar2 * 0x10);
    do {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ef8c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432ef8d0 FUN_1432ef8d0 body=138 status=ok
// SIG undefined FUN_1432ef8d0(void)

void FUN_1432ef8d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + -0x20 + lVar3 * 0x20);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if ((RefCountNTSImpl *)plVar2[2] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plVar2[2]);
    }
    if ((RefCountNTSImpl *)plVar2[1] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plVar2[1]);
    }
    if (*plVar2 != 0) {
      plVar1 = (longlong *)(*plVar2 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    plVar2 = plVar2 + -4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ef956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432ef960 FUN_1432ef960 body=117 status=ok
// SIG undefined FUN_1432ef960(void)

void FUN_1432ef960(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x28);
    do {
      if ((RefCountImpl *)puVar1[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar1[1]);
      }
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ef9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432ef9e0 FUN_1432ef9e0 body=135 status=ok
// SIG undefined FUN_1432ef9e0(void)

void FUN_1432ef9e0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar4) != -2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x18 + lVar4) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432efa70 FUN_1432efa70 body=188 status=ok
// SIG undefined FUN_1432efa70(void)

void FUN_1432efa70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  piVar2 = (int *)param_1[6];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
    FUN_14336bed0(piVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
  }
  piVar2 = (int *)param_1[5];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  lVar4 = param_1[2];
  puVar3 = (undefined8 *)(param_1[1] + (lVar4 + -1) * 8);
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if ((RefCountNTSImpl *)*puVar3 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar3);
    }
    puVar3 = puVar3 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[1]);
  if (*param_1 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  return;
}



// FUNCTION 1432efb30 FUN_1432efb30 body=108 status=ok
// SIG undefined FUN_1432efb30(void)

void FUN_1432efb30(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9240;
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af9248;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_145af9270;
  Scaleform::Lock::~Lock(param_1 + 0x30);
  FUN_14207f9b0(param_1 + 0x28);
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_145af8cf0;
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af7910;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432efba0 FUN_1432efba0 body=111 status=ok
// SIG undefined FUN_1432efba0(void)

undefined8 * FUN_1432efba0(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 + 1;
  }
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1432efc10 FUN_1432efc10 body=110 status=ok
// SIG undefined FUN_1432efc10(void)

void FUN_1432efc10(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_1432be180(param_2);
    piVar1 = (int *)*param_1;
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = uVar2;
    return;
  }
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1432efc80 FUN_1432efc80 body=130 status=ok
// SIG undefined FUN_1432efc80(void)

undefined4 * FUN_1432efc80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  if (*(RefCountImpl **)(param_2 + 6) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 6));
  }
  if (*(RefCountImpl **)(param_1 + 6) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 6));
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  if (*(RefCountImpl **)(param_2 + 8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 8));
  }
  if (*(RefCountImpl **)(param_1 + 8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 1432efd10 FUN_1432efd10 body=143 status=ok
// SIG undefined FUN_1432efd10(void)

longlong * FUN_1432efd10(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  lVar3 = *(longlong *)(piVar2 + 2);
  if (lVar3 == 0) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
    }
    *param_1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 8);
    if (iVar1 != 0) {
      *param_2 = lVar3;
      *(int *)(lVar3 + 8) = iVar1 + 1;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1432efda0 FUN_1432efda0 body=367 status=ok
// SIG undefined FUN_1432efda0(void)

bool FUN_1432efda0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  Rect<float> *pRVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_78 = 0x3f800000;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = 0;
  uStack_64 = 0x3f800000;
  uStack_60 = 0;
  uStack_5c = 0;
  FUN_14336a6d0(param_2,&local_78);
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  uStack_44 = 0x3f800000;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_14336a6d0(param_3,&local_58);
  pRVar1 = (Rect<float> *)(**(code **)(*param_2 + 0x2f0))(param_2,local_88);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform
            ((Matrix2x4<float> *)&local_78,(Rect<float> *)&local_98,pRVar1);
  pRVar1 = (Rect<float> *)(**(code **)(*param_3 + 0x2f0))(param_3,local_88);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform
            ((Matrix2x4<float> *)&local_58,(Rect<float> *)&local_a8,pRVar1);
  fVar4 = (local_8c + local_94) * 0.5;
  fVar6 = (local_90 + local_98) * 0.5;
  fVar7 = (local_a0 + local_a8) * 0.5;
  fVar5 = (local_9c + local_a4) * 0.5;
  if (((ABS(local_94 - local_a4) <= 20.0) || (ABS(local_8c - local_9c) <= 20.0)) ||
     (ABS(fVar4 - fVar5) <= 20.0)) {
    bVar3 = fVar7 == fVar6;
    bVar2 = fVar7 < fVar6;
  }
  else {
    bVar3 = fVar5 == fVar4;
    bVar2 = fVar5 < fVar4;
  }
  return !bVar2 && !bVar3;
}



// FUNCTION 1432eff50 FUN_1432eff50 body=159 status=ok
// SIG undefined FUN_1432eff50(void)

RefCountNTSImplCore * FUN_1432eff50(RefCountNTSImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af7910;
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1432efff0 FUN_1432efff0 body=138 status=ok
// SIG undefined FUN_1432efff0(void)

RefCountImplCore * FUN_1432efff0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af8ff8;
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af9218;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af7910;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432f0080 FUN_1432f0080 body=89 status=ok
// SIG undefined FUN_1432f0080(void)

undefined8 FUN_1432f0080(undefined8 param_1,ulonglong param_2)

{
  FUN_1432e2920();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x54c0);
  }
  return param_1;
}



// FUNCTION 1432f00e0 FUN_1432f00e0 body=135 status=ok
// SIG undefined FUN_1432f00e0(void)

longlong FUN_1432f00e0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x90) & 0xfffffffffffffffe;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_143320fc0(param_1 + 0x40);
  }
  FUN_1432cd280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1432f0170 FUN_1432f0170 body=71 status=ok
// SIG undefined FUN_1432f0170(void)

longlong FUN_1432f0170(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_143320fc0();
  }
  FUN_1432cd280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1432f01c0 FUN_1432f01c0 body=135 status=ok
// SIG undefined FUN_1432f01c0(void)

longlong FUN_1432f01c0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x90) & 0xfffffffffffffffe;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_143320fc0(param_1 + 0x40);
  }
  FUN_1432cd280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1432f0250 FUN_1432f0250 body=99 status=ok
// SIG undefined FUN_1432f0250(void)

undefined8 * FUN_1432f0250(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145af92d8;
  if ((RefCountImpl *)param_1[0x12] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x12]);
  }
  if (param_1[8] != 0) {
    FUN_143320fc0(param_1 + 8);
  }
  FUN_1432cd280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1432f02c0 FUN_1432f02c0 body=132 status=ok
// SIG undefined FUN_1432f02c0(void)

RefCountImplCore * FUN_1432f02c0(RefCountImplCore *param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_1432ef960(param_1 + 0x30);
  FUN_1432ef860(param_1 + 0x18);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1432f0350 FUN_1432f0350 body=89 status=ok
// SIG undefined FUN_1432f0350(void)

undefined8 FUN_1432f0350(undefined8 param_1,ulonglong param_2)

{
  FUN_1432efb30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1432f03c0 FUN_1432f03c0 body=84 status=ok
// SIG undefined FUN_1432f03c0(void)

void FUN_1432f03c0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1432cd1e0();
  uVar1 = *(ulonglong *)(lVar2 + 0x90);
  lVar3 = 0;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      lVar3 = (ulonglong)(*(longlong *)(lVar2 + 0x98) != 0) + 1;
    }
    else {
      lVar3 = *(longlong *)((uVar1 & 0xfffffffffffffffe) + 8);
    }
  }
  FUN_143364100(param_1,lVar3,param_2);
  return;
}



// FUNCTION 1432f0430 FUN_1432f0430 body=67 status=ok
// SIG undefined FUN_1432f0430(void)

void FUN_1432f0430(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1432f3b80(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1432f3b80(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1432f0480 FUN_1432f0480 body=106 status=ok
// SIG undefined FUN_1432f0480(void)

undefined8 * FUN_1432f0480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0xa0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1432ef3f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_145af8f68;
    Scaleform::Render::TreeNodeArray::TreeNodeArray(puVar1 + 0x12,param_1 + 0x90);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432f04f0 FUN_1432f04f0 body=56 status=ok
// SIG undefined FUN_1432f04f0(void)

void FUN_1432f04f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,0xd0,0);
  if (lVar1 != 0) {
    FUN_1432ef560(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1432f0530 FUN_1432f0530 body=130 status=ok
// SIG undefined FUN_1432f0530(void)

undefined8 * FUN_1432f0530(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0xa0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1432ef3f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_145af92d8;
    if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x90));
    }
    puVar1[0x12] = *(undefined8 *)(param_1 + 0x90);
    *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(param_1 + 0x98);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432f05c0 FUN_1432f05c0 body=101 status=ok
// SIG undefined FUN_1432f05c0(void)

void FUN_1432f05c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 * 0x20 + -0x20 + param_1);
    do {
      if ((RefCountNTSImpl *)plVar2[2] != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plVar2[2]);
      }
      if ((RefCountNTSImpl *)plVar2[1] != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plVar2[1]);
      }
      if (*plVar2 != 0) {
        plVar1 = (longlong *)(*plVar2 + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00();
        }
      }
      plVar2 = plVar2 + -4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1432f0630 EncloseTransform body=23 status=ok
// SIG Rect<float> EncloseTransform(Matrix3x4<float> * this, Rect<float> * param_1)

/* public: class Scaleform::Render::Rect<float> __cdecl
   Scaleform::Render::Matrix3x4<float>::EncloseTransform(class Scaleform::Render::Rect<float> const
   & __ptr64)const __ptr64 */

Rect<float> * __thiscall
Scaleform::Render::Matrix3x4<float>::EncloseTransform(Matrix3x4<float> *this,Rect<float> *param_1)

{
  Rect<float> *in_R8;
  
                    /* 0x32f0630  112
                       ?EncloseTransform@?$Matrix3x4@M@Render@Scaleform@@QEBA?AV?$Rect@M@23@AEBV423@@Z
                        */
  EncloseTransform(this,param_1,in_R8);
  return param_1;
}



// FUNCTION 1432f0650 EncloseTransform body=550 status=ok
// SIG void EncloseTransform(Matrix3x4<float> * this, Rect<float> * param_1, Rect<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::EncloseTransform(class
   Scaleform::Render::Rect<float> * __ptr64,class Scaleform::Render::Rect<float> const &
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::EncloseTransform
          (Matrix3x4<float> *this,Rect<float> *param_1,Rect<float> *param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
                    /* 0x32f0650  113
                       ?EncloseTransform@?$Matrix3x4@M@Render@Scaleform@@QEBAXPEAV?$Rect@M@23@AEBV423@@Z
                        */
  fVar9 = *(float *)this;
  fVar11 = *(float *)(param_2 + 4);
  fVar16 = *(float *)(this + 0x18);
  fVar1 = *(float *)(this + 0x10);
  fVar17 = *(float *)(this + 0x1c);
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 4);
  fVar8 = *(float *)(this + 0xc);
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)(this + 0x14);
  fVar6 = *(float *)(param_2 + 0xc);
  fVar10 = fVar9 * fVar4 + fVar3 * fVar11 + fVar2 + fVar8;
  fVar15 = fVar5 * fVar11 + fVar1 * fVar4 + fVar16 + fVar17;
  fVar7 = *(float *)(param_2 + 8);
  fVar14 = fVar9 * fVar7 + fVar3 * fVar11 + fVar2 + fVar8;
  fVar13 = fVar5 * fVar11 + fVar1 * fVar7 + fVar16 + fVar17;
  fVar12 = fVar9 * fVar7 + fVar3 * fVar6 + fVar2 + fVar8;
  fVar11 = fVar5 * fVar6 + fVar1 * fVar7 + fVar16 + fVar17;
  fVar17 = fVar5 * fVar6 + fVar1 * fVar4 + fVar16 + fVar17;
  fVar8 = fVar9 * fVar4 + fVar3 * fVar6 + fVar2 + fVar8;
  fVar9 = fVar10;
  if (fVar14 <= fVar10) {
    fVar9 = fVar14;
  }
  if (fVar10 <= fVar14) {
    fVar10 = fVar14;
  }
  if (fVar12 <= fVar9) {
    fVar9 = fVar12;
  }
  fVar16 = fVar15;
  if (fVar15 <= fVar13) {
    fVar16 = fVar13;
  }
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar12) {
    fVar10 = fVar12;
  }
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  if (fVar16 <= fVar11) {
    fVar16 = fVar11;
  }
  if (fVar11 <= fVar15) {
    fVar15 = fVar11;
  }
  if (fVar10 <= fVar8) {
    fVar10 = fVar8;
  }
  *(float *)param_1 = fVar9;
  if (fVar16 <= fVar17) {
    fVar16 = fVar17;
  }
  if (fVar17 <= fVar15) {
    fVar15 = fVar17;
  }
  *(float *)(param_1 + 8) = fVar10;
  *(float *)(param_1 + 0xc) = fVar16;
  *(float *)(param_1 + 4) = fVar15;
  return;
}



// FUNCTION 1432f0880 FUN_1432f0880 body=120 status=ok
// SIG undefined FUN_1432f0880(void)

void FUN_1432f0880(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar3 = plVar1[1] + 1;
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)plVar1[2] >> 1 <= uVar3) goto LAB_1432f08cf;
  }
  else {
    if (uVar3 <= (ulonglong)plVar1[2]) goto LAB_1432f08cf;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432bbfd0(plVar1,plVar1,uVar4);
LAB_1432f08cf:
  plVar1[1] = uVar3;
  puVar2 = (undefined1 *)(*plVar1 + -1 + uVar3);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 6;
  }
  *(undefined4 *)(param_1 + 0x10) = 5;
  return;
}



// FUNCTION 1432f0900 FUN_1432f0900 body=141 status=ok
// SIG undefined FUN_1432f0900(void)

void FUN_1432f0900(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 6) {
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 != 5) {
    FUN_1432f0880();
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  lVar3 = plVar2[1];
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulonglong)plVar2[1]) {
    uVar6 = uVar5;
    if ((ulonglong)plVar2[2] >> 1 <= uVar5) goto LAB_1432f0966;
  }
  else {
    if (uVar5 <= (ulonglong)plVar2[2]) goto LAB_1432f0966;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_1432bbfd0(plVar2,plVar2,uVar6);
LAB_1432f0966:
  plVar2[1] = uVar5;
  puVar4 = (undefined1 *)(lVar3 + *plVar2);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 7;
  }
  *(undefined4 *)(param_1 + 0x10) = 6;
  return;
}



// FUNCTION 1432f09c0 FUN_1432f09c0 body=28 status=ok
// SIG undefined FUN_1432f09c0(void)

ushort FUN_1432f09c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x90));
  return *(ushort *)(lVar1 + 10) & 0xc;
}



// FUNCTION 1432f09e0 GetFillStyle body=76 status=ok
// SIG undefined GetFillStyle(void)

void Scaleform::Render::
     ShapeDataFloatTempl<Scaleform::Array<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
     GetFillStyle(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((ulonglong)(param_2 - 1) * 0x10 + *(longlong *)(param_1 + 0x18));
  *param_3 = *puVar1;
  if (*(RefCountImpl **)(puVar1 + 2) != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(*(RefCountImpl **)(puVar1 + 2));
  }
  if (*(RefCountImpl **)(param_3 + 2) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_3 + 2));
  }
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar1 + 2);
  return;
}



// FUNCTION 1432f0a30 FUN_1432f0a30 body=1295 status=ok
// SIG undefined FUN_1432f0a30(void)

float * FUN_1432f0a30(float *param_1,float *param_2)

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
  ulonglong uStack_d0;
  ulonglong uStack_c0;
  undefined8 uStack_b0;
  
  fVar18 = param_1[10] * 0.0;
  fVar1 = param_1[7];
  fVar25 = param_1[8] * 0.0;
  fVar29 = param_1[9] * 0.0;
  fVar26 = fVar25 - fVar18;
  fVar25 = fVar25 - fVar29;
  fVar2 = param_1[0xb];
  fVar29 = fVar29 - fVar18;
  fVar18 = param_1[3];
  fVar16 = fVar2 * 0.0;
  fVar21 = param_1[8] - fVar16;
  fVar19 = param_1[9] - fVar16;
  fVar16 = param_1[10] - fVar16;
  fVar31 = (fVar16 * param_1[5] - fVar19 * param_1[6]) + fVar29 * fVar1;
  fVar34 = -((fVar16 * param_1[4] - fVar21 * param_1[6]) + fVar26 * fVar1);
  fVar32 = (fVar19 * param_1[4] - fVar21 * param_1[5]) + fVar25 * fVar1;
  fVar3 = *param_1;
  fVar22 = -((fVar29 * param_1[4] - fVar26 * param_1[5]) + fVar25 * param_1[6]) * fVar18 +
           fVar34 * param_1[1] + fVar31 * fVar3 + fVar32 * param_1[2];
  if (fVar22 == 0.0) {
    uStack_d0 = (ulonglong)(uint)fVar18 << 0x20 ^ 0x8000000000000000;
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    *(ulonglong *)(param_2 + 2) = uStack_d0;
    uStack_c0 = (ulonglong)(uint)fVar1 << 0x20 ^ 0x8000000000000000;
    uStack_b0 = CONCAT44(-fVar2,0x3f800000);
    param_2[4] = 0.0;
    param_2[5] = 1.0;
    *(ulonglong *)(param_2 + 6) = uStack_c0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    *(undefined8 *)(param_2 + 10) = uStack_b0;
  }
  else {
    fVar4 = param_1[2];
    fVar5 = param_1[1];
    fVar22 = 1.0 / fVar22;
    fVar6 = param_1[2];
    fVar7 = param_1[1];
    fVar17 = fVar1 * 0.0;
    fVar30 = param_1[4] - fVar17;
    fVar33 = param_1[6] - fVar17;
    fVar17 = param_1[5] - fVar17;
    fVar27 = param_1[5] * 0.0;
    fVar20 = param_1[6] * 0.0;
    fVar8 = param_1[2];
    fVar9 = param_1[1];
    fVar10 = *param_1;
    fVar23 = param_1[4] * 0.0;
    fVar11 = param_1[1];
    fVar12 = param_1[4];
    fVar28 = fVar2 * fVar12 - param_1[8] * fVar1;
    fVar13 = param_1[10];
    fVar24 = param_1[5];
    fVar35 = param_1[6];
    fVar14 = param_1[9];
    param_2[6] = -(((fVar33 * *param_1 - fVar30 * param_1[2]) + (fVar23 - fVar20) * fVar18) * fVar22
                  );
    fVar15 = param_1[8];
    fVar24 = fVar2 * fVar24 - fVar14 * fVar1;
    param_2[1] = -(((fVar16 * fVar5 - fVar19 * fVar4) + fVar29 * fVar18) * fVar22);
    fVar29 = param_1[5];
    fVar4 = param_1[9];
    param_2[2] = ((fVar33 * fVar9 - fVar17 * fVar8) + (fVar27 - fVar20) * fVar18) * fVar22;
    fVar35 = fVar2 * fVar35 - fVar13 * fVar1;
    param_2[5] = ((fVar16 * fVar3 - fVar21 * fVar6) + fVar26 * fVar18) * fVar22;
    param_2[10] = ((fVar17 * fVar10 - fVar30 * fVar11) + (fVar23 - fVar27) * fVar18) * fVar22;
    fVar1 = *param_1;
    fVar2 = param_1[1];
    *param_2 = fVar22 * fVar31;
    fVar16 = param_1[6];
    fVar26 = param_1[2];
    fVar31 = *param_1;
    fVar5 = param_1[10];
    param_2[4] = fVar22 * fVar34;
    fVar34 = param_1[6];
    fVar6 = param_1[5];
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    param_2[3] = -(((fVar13 * fVar29 - fVar4 * fVar16) * fVar18 + (fVar35 * fVar2 - fVar24 * fVar26)
                   ) * fVar22);
    param_2[9] = -(((fVar19 * fVar3 - fVar21 * fVar7) + fVar25 * fVar18) * fVar22);
    param_2[8] = fVar22 * fVar32;
    param_2[0xb] = -(((fVar4 * fVar12 - fVar15 * fVar6) * fVar18 +
                     (fVar24 * fVar31 - fVar28 * fVar8)) * fVar22);
    param_2[7] = ((fVar5 * fVar12 - fVar15 * fVar34) * fVar18 + (fVar35 * fVar1 - fVar28 * fVar9)) *
                 fVar22;
  }
  return param_2;
}



// FUNCTION 1432f0f80 FUN_1432f0f80 body=66 status=ok
// SIG undefined FUN_1432f0f80(void)

longlong FUN_1432f0f80(void)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd1e0();
  uVar1 = *(ulonglong *)(lVar2 + 0x90);
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 & 1) != 0) {
    return *(longlong *)((uVar1 & 0xfffffffffffffffe) + 8);
  }
  return (ulonglong)(*(longlong *)(lVar2 + 0x98) != 0) + 1;
}



// FUNCTION 1432f0fd0 FUN_1432f0fd0 body=221 status=ok
// SIG undefined FUN_1432f0fd0(void)

undefined8 FUN_1432f0fd0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar7 = *(ulonglong *)(lVar3 + 8) & (longlong)param_2;
    lVar1 = uVar7 * 3 + 2;
    puVar5 = (ulonglong *)(lVar3 + lVar1 * 8);
    if ((*(longlong *)(lVar3 + lVar1 * 8) != -2) && (uVar6 = uVar7, puVar5[1] == uVar7)) {
      while ((puVar5[1] != uVar7 || (*(int *)(puVar5[2] + 0x10) != param_2))) {
        uVar6 = *puVar5;
        if (uVar6 == 0xffffffffffffffff) goto LAB_1432f1075;
        puVar5 = (ulonglong *)(lVar3 + uVar6 * 0x18 + 0x10);
      }
      if ((-1 < (longlong)uVar6) &&
         (puVar2 = (undefined8 *)(lVar3 + uVar6 * 0x18 + 0x20), puVar2 != (undefined8 *)0x0)) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*puVar2);
        uVar4 = *puVar2;
        Scaleform::Lock::DoLock(param_1 + 0x20);
        return uVar4;
      }
    }
  }
LAB_1432f1075:
  Scaleform::Lock::DoLock(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))(lVar3 + 0x10,param_2);
  }
  return uVar4;
}



// FUNCTION 1432f10d0 FUN_1432f10d0 body=315 status=ok
// SIG undefined FUN_1432f10d0(void)

void FUN_1432f10d0(longlong param_1,longlong *param_2,int *param_3,uint param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  
  bVar4 = false;
  Scaleform::Lock::DoLock(param_1 + 0x20);
  if (param_4 != 0) {
    uVar7 = (ulonglong)param_4;
    plVar8 = param_2;
    piVar10 = param_3;
    bVar4 = false;
    do {
      if (*plVar8 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        if (lVar3 != 0) {
          uVar9 = *(ulonglong *)(lVar3 + 8) & (longlong)*piVar10;
          lVar1 = uVar9 * 3 + 2;
          puVar5 = (ulonglong *)(lVar3 + lVar1 * 8);
          if ((*(longlong *)(lVar3 + lVar1 * 8) != -2) && (uVar6 = uVar9, puVar5[1] == uVar9)) {
            while ((puVar5[1] != uVar9 || (*(int *)(puVar5[2] + 0x10) != *piVar10))) {
              uVar6 = *puVar5;
              if (uVar6 == 0xffffffffffffffff) goto LAB_1432f11a2;
              puVar5 = (ulonglong *)(lVar3 + uVar6 * 0x18 + 0x10);
            }
            if ((-1 < (longlong)uVar6) &&
               (plVar2 = (longlong *)(lVar3 + uVar6 * 0x18 + 0x20), plVar2 != (longlong *)0x0)) {
              Scaleform::RefCountImpl::AddRef((RefCountImpl *)*plVar2);
              *plVar8 = *plVar2;
              goto LAB_1432f11a5;
            }
          }
        }
LAB_1432f11a2:
        bVar4 = true;
      }
LAB_1432f11a5:
      piVar10 = piVar10 + 1;
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  if ((bVar4) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
    (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x20))(lVar3 + 0x10,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1432f1270 GetXScale body=26 status=ok
// SIG float GetXScale(Matrix2x4<float> * this)

/* public: float __cdecl Scaleform::Render::Matrix2x4<float>::GetXScale(void)const __ptr64 */

float __thiscall Scaleform::Render::Matrix2x4<float>::GetXScale(Matrix2x4<float> *this)

{
  float fVar1;
  
                    /* 0x32f1270  219  ?GetXScale@?$Matrix2x4@M@Render@Scaleform@@QEBAMXZ */
  fVar1 = ::_guard_xfg_dispatch_icall_nop
                    (*(float *)this * *(float *)this +
                     *(float *)(this + 0x10) * *(float *)(this + 0x10));
  return fVar1;
}



// FUNCTION 1432f1290 GetYScale body=27 status=ok
// SIG float GetYScale(Matrix2x4<float> * this)

/* public: float __cdecl Scaleform::Render::Matrix2x4<float>::GetYScale(void)const __ptr64 */

float __thiscall Scaleform::Render::Matrix2x4<float>::GetYScale(Matrix2x4<float> *this)

{
  float fVar1;
  
                    /* 0x32f1290  221  ?GetYScale@?$Matrix2x4@M@Render@Scaleform@@QEBAMXZ */
  fVar1 = ::_guard_xfg_dispatch_icall_nop
                    (*(float *)(this + 4) * *(float *)(this + 4) +
                     *(float *)(this + 0x14) * *(float *)(this + 0x14));
  return fVar1;
}



// FUNCTION 1432f12e0 IsShutdownRenderingComplete body=71 status=ok
// SIG undefined IsShutdownRenderingComplete(void)

undefined8 Scaleform::GFx::MovieImpl::IsShutdownRenderingComplete(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1432ce460(param_1 + 0x5350);
  if (cVar1 == '\0') {
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x5470) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x5470) + 0x20) != 0)) &&
     (cVar1 = FUN_1432ce460(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1432f1330 FUN_1432f1330 body=29 status=ok
// SIG undefined FUN_1432f1330(void)

undefined4 FUN_1432f1330(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if ((*(uint *)(param_1 + 0x52f4) >> 2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1432f1350 FUN_1432f1350 body=245 status=ok
// SIG undefined FUN_1432f1350(void)

undefined8 FUN_1432f1350(undefined8 *param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  undefined8 uVar2;
  RefCountNTSImpl *this_00;
  
  piVar1 = (int *)*param_1;
  this_00 = (RefCountNTSImpl *)0x0;
  if (piVar1 != (int *)0x0) {
    this_00 = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this_00 == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = 0;
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this_00 + 8) == 0) {
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
  }
  piVar1 = (int *)param_1[1];
  this = (RefCountNTSImpl *)0x0;
  if (piVar1 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      param_1[1] = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (((this_00 == this) &&
      ((this_00 != (RefCountNTSImpl *)0x0 || ((*(byte *)((longlong)param_1 + 0x4c) & 1) != 0)))) &&
     ((this != (RefCountNTSImpl *)0x0 || ((*(byte *)((longlong)param_1 + 0x4c) & 2) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  if (this_00 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  return uVar2;
}



// FUNCTION 1432f1450 FUN_1432f1450 body=272 status=ok
// SIG undefined FUN_1432f1450(void)

void FUN_1432f1450(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined4 local_res10;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar1 = plVar2[1] + 1;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar4 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_1432f14af;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_1432f14af;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432bbfd0(plVar2,plVar2,uVar4);
LAB_1432f14af:
  plVar2[1] = uVar1;
  puVar3 = (undefined1 *)(*plVar2 + -1 + uVar1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 3;
  }
  local_res10 = param_2;
  FUN_1432f1a90(plVar2,&local_res10);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 1);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 2);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 3);
  local_res10 = param_3;
  FUN_1432f1a90(plVar2,&local_res10);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 1);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 2);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 3);
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 4;
  return;
}



// FUNCTION 1432f1560 FUN_1432f1560 body=92 status=ok
// SIG undefined FUN_1432f1560(void)

void FUN_1432f1560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  lVar1 = param_1 + -0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  plVar2 = *(longlong **)(lVar1 + 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)Scaleform::Log::GetGlobalLog();
  }
  local_18[0] = 0x34000;
  (**(code **)(*plVar2 + 8))(plVar2,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 1432f15c0 FUN_1432f15c0 body=282 status=ok
// SIG undefined FUN_1432f15c0(void)

void FUN_1432f15c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined4 local_res10;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar1 = plVar2[1] + 1;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar4 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_1432f161f;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_1432f161f;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432bbfd0(plVar2,plVar2,uVar4);
LAB_1432f161f:
  plVar2[1] = uVar1;
  puVar3 = (undefined1 *)(*plVar2 + -1 + uVar1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 2;
  }
  local_res10 = param_2;
  FUN_1432f1a90(plVar2,&local_res10);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 1);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 2);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 3);
  local_res10 = param_3;
  FUN_1432f1a90(plVar2,&local_res10);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 1);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 2);
  FUN_1432f1a90(plVar2,(longlong)&local_res10 + 3);
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 3;
  return;
}



// FUNCTION 1432f16e0 OrthoOffCenterLH body=216 status=ok
// SIG void OrthoOffCenterLH(Matrix4x4<float> * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)

/* public: void __cdecl
   Scaleform::Render::Matrix4x4<float>::OrthoOffCenterLH(float,float,float,float,float,float)
   __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::OrthoOffCenterLH
          (Matrix4x4<float> *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
                    /* 0x32f16e0  292
                       ?OrthoOffCenterLH@?$Matrix4x4@M@Render@Scaleform@@QEAAXMMMMMM@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)this = 2.0 / (param_2 - param_1);
  *(float *)(this + 0x14) = 2.0 / (param_4 - param_3);
  *(float *)(this + 0x28) = 1.0 / (param_6 - param_5);
  *(float *)(this + 0xc) = (param_1 + param_2) / (param_1 - param_2);
  *(float *)(this + 0x2c) = param_5 / (param_5 - param_6);
  *(float *)(this + 0x1c) = (param_3 + param_4) / (param_3 - param_4);
  return;
}



// FUNCTION 1432f17c0 OrthoOffCenterRH body=222 status=ok
// SIG void OrthoOffCenterRH(Matrix4x4<float> * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)

/* public: void __cdecl
   Scaleform::Render::Matrix4x4<float>::OrthoOffCenterRH(float,float,float,float,float,float)
   __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::OrthoOffCenterRH
          (Matrix4x4<float> *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
                    /* 0x32f17c0  293
                       ?OrthoOffCenterRH@?$Matrix4x4@M@Render@Scaleform@@QEAAXMMMMMM@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)this = 2.0 / (param_2 - param_1);
  *(float *)(this + 0x28) = 1.0 / (param_5 - param_6);
  *(float *)(this + 0x14) = 2.0 / (param_4 - param_3);
  *(float *)(this + 0xc) = (param_1 + param_2) / (param_1 - param_2);
  *(float *)(this + 0x2c) = param_5 / (param_5 - param_6);
  *(float *)(this + 0x1c) = (param_3 + param_4) / (param_3 - param_4);
  return;
}



// FUNCTION 1432f18a0 PerspectiveOffCenterLH body=234 status=ok
// SIG void PerspectiveOffCenterLH(Matrix4x4<float> * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)

/* public: void __cdecl
   Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterLH(float,float,float,float,float,float,float)
   __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterLH
          (Matrix4x4<float> *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7)

{
                    /* 0x32f18a0  295
                       ?PerspectiveOffCenterLH@?$Matrix4x4@M@Render@Scaleform@@QEAAXMMMMMMM@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(float *)this = (param_1 + param_1) / (param_3 - param_2);
  *(float *)(this + 0x14) = (param_1 + param_1) / (param_5 - param_4);
  *(float *)(this + 0x28) = param_7 / (param_7 - param_6);
  *(float *)(this + 0x2c) = (param_6 * param_7) / (param_6 - param_7);
  *(float *)(this + 0x18) = (param_4 + param_5) / (param_4 - param_5);
  *(float *)(this + 8) = (param_2 + param_3) / (param_2 - param_3);
  return;
}



// FUNCTION 1432f1990 PerspectiveOffCenterRH body=255 status=ok
// SIG void PerspectiveOffCenterRH(Matrix4x4<float> * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)

/* public: void __cdecl
   Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterRH(float,float,float,float,float,float,float)
   __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterRH
          (Matrix4x4<float> *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7)

{
                    /* 0x32f1990  296
                       ?PerspectiveOffCenterRH@?$Matrix4x4@M@Render@Scaleform@@QEAAXMMMMMMM@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x38) = 0xbf800000;
  *(float *)this = (param_1 + param_1) / (param_3 - param_2);
  *(float *)(this + 0x14) = (param_1 + param_1) / (param_5 - param_4);
  *(float *)(this + 0x2c) = (param_6 * param_7) / (param_6 - param_7);
  *(float *)(this + 8) = (param_2 + param_3) / (param_3 - param_2);
  *(float *)(this + 0x28) = param_7 / (param_6 - param_7);
  *(float *)(this + 0x18) = (param_4 + param_5) / (param_5 - param_4);
  return;
}



// FUNCTION 1432f1a90 FUN_1432f1a90 body=111 status=ok
// SIG undefined FUN_1432f1a90(void)

void FUN_1432f1a90(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[1] + 1;
  if (uVar2 < (ulonglong)param_1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)param_1[2] >> 1 <= uVar2) goto LAB_1432f1adb;
  }
  else {
    if (uVar2 <= (ulonglong)param_1[2]) goto LAB_1432f1adb;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_1432bbfd0(param_1,param_1,uVar3);
LAB_1432f1adb:
  param_1[1] = uVar2;
  puVar1 = (undefined1 *)(*param_1 + -1 + uVar2);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}



// FUNCTION 1432f1b00 FUN_1432f1b00 body=556 status=ok
// SIG undefined FUN_1432f1b00(void)

undefined8 FUN_1432f1b00(longlong param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_res8;
  
  uVar2 = *param_2;
  plVar3 = *(longlong **)(param_1 + 0x48);
  cVar1 = *(char *)((ulonglong)uVar2 + *plVar3);
  *param_2 = uVar2 + 1;
  if (cVar1 == '\x06') {
    return 0;
  }
  lVar4 = *plVar3;
  local_res8._0_3_ =
       CONCAT12(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar4),
                CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 2) + lVar4),
                         *(undefined1 *)((ulonglong)(uVar2 + 1) + lVar4)));
  local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar2 + 4) + lVar4),(undefined3)local_res8);
  *param_3 = local_res8;
  *param_2 = *param_2 + 4;
  uVar2 = *param_2;
  lVar4 = *plVar3;
  local_res8._0_3_ =
       CONCAT12(*(undefined1 *)((ulonglong)(uVar2 + 2) + lVar4),
                CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 1) + lVar4),
                         *(undefined1 *)((ulonglong)uVar2 + lVar4)));
  local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar4),(undefined3)local_res8);
  param_3[1] = local_res8;
  *param_2 = *param_2 + 4;
  uVar2 = *param_2;
  if ((byte)(cVar1 - 4U) < 2) {
    lVar4 = *plVar3;
    local_res8._0_3_ =
         CONCAT12(*(undefined1 *)((ulonglong)(uVar2 + 2) + lVar4),
                  CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 1) + lVar4),
                           *(undefined1 *)((ulonglong)uVar2 + lVar4)));
    local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar4),(undefined3)local_res8);
    param_3[2] = local_res8;
    *param_2 = *param_2 + 4;
    uVar2 = *param_2;
    lVar4 = *plVar3;
    local_res8._0_3_ =
         CONCAT12(*(undefined1 *)((ulonglong)(uVar2 + 2) + lVar4),
                  CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 1) + lVar4),
                           *(undefined1 *)((ulonglong)uVar2 + lVar4)));
    local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar4),(undefined3)local_res8);
    param_3[3] = local_res8;
    *param_2 = *param_2 + 4;
    uVar2 = *param_2;
    if (cVar1 == '\x05') {
      lVar4 = *plVar3;
      local_res8._0_3_ =
           CONCAT12(*(undefined1 *)((ulonglong)(uVar2 + 2) + lVar4),
                    CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 1) + lVar4),
                             *(undefined1 *)((ulonglong)uVar2 + lVar4)));
      local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar4),(undefined3)local_res8);
      param_3[4] = local_res8;
      *param_2 = *param_2 + 4;
      lVar4 = *plVar3;
      uVar2 = *param_2;
      local_res8._0_3_ =
           CONCAT12(*(undefined1 *)((ulonglong)(uVar2 + 2) + lVar4),
                    CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 1) + lVar4),
                             *(undefined1 *)((ulonglong)uVar2 + lVar4)));
      local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar4),(undefined3)local_res8);
      param_3[5] = local_res8;
      *param_2 = *param_2 + 4;
      return 3;
    }
    return 2;
  }
  return 1;
}



// FUNCTION 1432f1d30 FUN_1432f1d30 body=810 status=ok
// SIG undefined FUN_1432f1d30(void)

undefined8 FUN_1432f1d30(longlong param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 local_res8;
  
  plVar4 = *(longlong **)(param_1 + 0x48);
  uVar3 = *param_2;
  if ((ulonglong)plVar4[1] <= (ulonglong)uVar3) {
    return 0;
  }
  uVar7 = 1;
  cVar1 = *(char *)((ulonglong)uVar3 + *plVar4);
  *param_2 = uVar3 + 1;
  if (cVar1 == '\a') {
    return 0;
  }
  if (cVar1 == '\0') {
    uVar7 = 2;
    *param_2 = uVar3 + 2;
  }
  uVar3 = *param_2;
  lVar5 = *plVar4;
  bVar2 = *(byte *)((ulonglong)uVar3 + lVar5);
  iVar8 = 4;
  if ((bVar2 & 3) == 0) {
    iVar6 = 1;
    *param_4 = (uint)(bVar2 >> 2);
  }
  else if ((bVar2 & 3) == 1) {
    *param_4 = (uint)*(byte *)((ulonglong)(uVar3 + 1) + lVar5) << 6 | (uint)(bVar2 >> 2);
    iVar6 = 2;
  }
  else if ((bVar2 & 3) == 2) {
    iVar6 = 3;
    *param_4 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5),
                              *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5)) << 6 |
               (uint)(bVar2 >> 2);
  }
  else {
    iVar6 = 4;
    *param_4 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 3) + lVar5),
                                       *(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5)),
                              *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5)) << 6 |
               (uint)(bVar2 >> 2);
  }
  *param_2 = *param_2 + iVar6;
  uVar3 = *param_2;
  lVar5 = *plVar4;
  bVar2 = *(byte *)((ulonglong)uVar3 + lVar5);
  if ((bVar2 & 3) == 0) {
    iVar6 = 1;
    param_4[1] = (uint)(bVar2 >> 2);
  }
  else if ((bVar2 & 3) == 1) {
    param_4[1] = (uint)*(byte *)((ulonglong)(uVar3 + 1) + lVar5) << 6 | (uint)(bVar2 >> 2);
    iVar6 = 2;
  }
  else if ((bVar2 & 3) == 2) {
    iVar6 = 3;
    param_4[1] = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5),
                                *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5)) << 6 |
                 (uint)(bVar2 >> 2);
  }
  else {
    iVar6 = 4;
    param_4[1] = (uint)CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 3) + lVar5),
                                         *(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5)),
                                *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5)) << 6 |
                 (uint)(bVar2 >> 2);
  }
  *param_2 = *param_2 + iVar6;
  uVar3 = *param_2;
  lVar5 = *plVar4;
  bVar2 = *(byte *)((ulonglong)uVar3 + lVar5);
  if ((bVar2 & 3) == 0) {
    iVar8 = 1;
    param_4[2] = (uint)(bVar2 >> 2);
  }
  else if ((bVar2 & 3) == 1) {
    iVar8 = 2;
    param_4[2] = (uint)*(byte *)((ulonglong)(uVar3 + 1) + lVar5) << 6 | (uint)(bVar2 >> 2);
  }
  else if ((bVar2 & 3) == 2) {
    iVar8 = 3;
    param_4[2] = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5),
                                *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5)) << 6 |
                 (uint)(bVar2 >> 2);
  }
  else {
    param_4[2] = (uint)CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 3) + lVar5),
                                         *(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5)),
                                *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5)) << 6 |
                 (uint)(bVar2 >> 2);
  }
  *param_2 = *param_2 + iVar8 + 1;
  uVar3 = *param_2;
  lVar5 = *plVar4;
  local_res8._0_3_ =
       CONCAT12(*(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5),
                CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5),
                         *(undefined1 *)((ulonglong)uVar3 + lVar5)));
  local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar3 + 3) + lVar5),(undefined3)local_res8);
  *param_3 = local_res8;
  *param_2 = *param_2 + 4;
  uVar3 = *param_2;
  lVar5 = *plVar4;
  local_res8._0_3_ =
       CONCAT12(*(undefined1 *)((ulonglong)(uVar3 + 2) + lVar5),
                CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + lVar5),
                         *(undefined1 *)((ulonglong)uVar3 + lVar5)));
  local_res8 = CONCAT13(*(undefined1 *)((ulonglong)(uVar3 + 3) + lVar5),(undefined3)local_res8);
  param_3[1] = local_res8;
  *param_2 = *param_2 + 4;
  return uVar7;
}



// FUNCTION 1432f2070 FUN_1432f2070 body=149 status=ok
// SIG undefined FUN_1432f2070(void)

void FUN_1432f2070(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[1] == 1) {
    FUN_1432f26f0(param_1,param_1,0);
    return;
  }
  lVar1 = *param_1;
  lVar2 = param_2 * 0x10;
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1432de450();
  }
  if (*(longlong *)(lVar1 + lVar2) != 0) {
    FUN_1432de450();
  }
  memmove((void *)(*param_1 + lVar2),(void *)(*param_1 + lVar2 + 0x10),
          (param_1[1] - param_2) * 0x10 - 0x10);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1432f2110 FUN_1432f2110 body=171 status=ok
// SIG undefined FUN_1432f2110(void)

void FUN_1432f2110(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  RefCountNTSImpl *pRVar3;
  longlong lVar4;
  
  if (param_1[1] == 1) {
    FUN_1432f27c0(param_1,param_1,0);
    return;
  }
  lVar4 = param_2 * 0x20;
  lVar2 = *param_1;
  pRVar3 = *(RefCountNTSImpl **)(lVar2 + 0x10 + lVar4);
  if (pRVar3 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar3);
  }
  pRVar3 = *(RefCountNTSImpl **)(lVar2 + 8 + lVar4);
  if (pRVar3 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar3);
  }
  if (*(longlong *)(lVar2 + lVar4) != 0) {
    plVar1 = (longlong *)(*(longlong *)(lVar2 + lVar4) + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  memmove((void *)(*param_1 + lVar4),(void *)(*param_1 + lVar4 + 0x20),
          (param_1[1] - param_2) * 0x20 - 0x20);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1432f21c0 FUN_1432f21c0 body=125 status=ok
// SIG undefined FUN_1432f21c0(void)

void FUN_1432f21c0(longlong *param_1,longlong param_2)

{
  RefCountNTSImpl *this;
  void *_Dst;
  
  if (param_1[1] == 1) {
    FUN_1432f2860(param_1,param_1,0);
    return;
  }
  this = *(RefCountNTSImpl **)(param_2 * 0x10 + 8 + *param_1);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  _Dst = (void *)(*param_1 + param_2 * 0x10);
  memmove(_Dst,(void *)((longlong)_Dst + 0x10),(param_1[1] - param_2) * 0x10 - 0x10);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1432f2240 FUN_1432f2240 body=173 status=ok
// SIG undefined FUN_1432f2240(void)

void FUN_1432f2240(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 8);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432f22f0 FUN_1432f22f0 body=164 status=ok
// SIG undefined FUN_1432f22f0(void)

void FUN_1432f22f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x147;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432f23a0 FUN_1432f23a0 body=165 status=ok
// SIG undefined FUN_1432f23a0(void)

void FUN_1432f23a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 << 4);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x147;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432f2450 FUN_1432f2450 body=165 status=ok
// SIG undefined FUN_1432f2450(void)

void FUN_1432f2450(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x147;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432f2500 FUN_1432f2500 body=173 status=ok
// SIG undefined FUN_1432f2500(void)

void FUN_1432f2500(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 8);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x147;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432f25b0 FUN_1432f25b0 body=114 status=ok
// SIG undefined FUN_1432f25b0(void)

void FUN_1432f25b0(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1432bbfd0(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1432bbfd0(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1432f2630 FUN_1432f2630 body=180 status=ok
// SIG undefined FUN_1432f2630(void)

void FUN_1432f2630(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -8 + (lVar2 + param_3) * 0x10);
      do {
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5ad0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5ad0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f26f0 FUN_1432f26f0 body=194 status=ok
// SIG undefined FUN_1432f26f0(void)

void FUN_1432f26f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar1 = (longlong *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x10);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (plVar1[1] != 0) {
        FUN_1432de450();
      }
      if (*plVar1 != 0) {
        FUN_1432de450();
      }
      plVar1 = plVar1 + -2;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5ad0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5ad0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f27c0 FUN_1432f27c0 body=158 status=ok
// SIG undefined FUN_1432f27c0(void)

void FUN_1432f27c0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1432f05c0(param_3 * 0x20 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5b80(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5b80(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432f2860 FUN_1432f2860 body=180 status=ok
// SIG undefined FUN_1432f2860(void)

void FUN_1432f2860(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -8 + (lVar2 + param_3) * 0x10);
      do {
        if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
        }
        puVar1 = puVar1 + -2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f22f0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f22f0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f2920 FUN_1432f2920 body=180 status=ok
// SIG undefined FUN_1432f2920(void)

void FUN_1432f2920(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + -8 + (lVar2 + param_3) * 0x10);
      do {
        if (*plVar1 != 0) {
          FUN_1432de450();
        }
        plVar1 = plVar1 + -2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f23a0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f23a0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f29e0 FUN_1432f29e0 body=174 status=ok
// SIG undefined FUN_1432f29e0(void)

void FUN_1432f29e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f2450(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f2450(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f2a90 FUN_1432f2a90 body=174 status=ok
// SIG undefined FUN_1432f2a90(void)

void FUN_1432f2a90(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f2500(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f2500(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f2b40 FUN_1432f2b40 body=174 status=ok
// SIG undefined FUN_1432f2b40(void)

void FUN_1432f2b40(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f2450(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f2450(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432f2bf0 FUN_1432f2bf0 body=119 status=ok
// SIG undefined FUN_1432f2bf0(void)

longlong FUN_1432f2bf0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,param_1,param_2,0xffffffffffffffff,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 == -1) {
    *(undefined1 *)(param_1 + -1 + param_2) = 0;
    return param_2 + -1;
  }
  return (longlong)iVar1;
}



// FUNCTION 1432f2c70 FUN_1432f2c70 body=245 status=ok
// SIG undefined FUN_1432f2c70(void)

ulonglong * FUN_1432f2c70(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *local_18;
  ulonglong *local_10;
  
  uVar3 = *param_2;
  lVar4 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  if (lVar4 != 0) {
    uVar5 = *(ulonglong *)(lVar4 + 8);
    uVar8 = uVar5 & *(uint *)(uVar3 + 0x1c);
    lVar2 = uVar8 * 3 + 2;
    puVar6 = (ulonglong *)(lVar4 + lVar2 * 8);
    if ((*(longlong *)(lVar4 + lVar2 * 8) != -2) &&
       (uVar7 = uVar8, (*(uint *)(puVar6[1] + 0x1c) & uVar5) == uVar8)) {
      while (((*(uint *)(puVar6[1] + 0x1c) & uVar5) != uVar8 || (puVar6[1] != uVar3))) {
        uVar7 = *puVar6;
        if (uVar7 == 0xffffffffffffffff) goto LAB_1432f2d3d;
        puVar6 = (ulonglong *)(lVar4 + uVar7 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar7) {
        *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
        puVar6 = (ulonglong *)(lVar4 + (uVar7 + 1) * 0x18);
        piVar1 = (int *)(*(longlong *)(lVar4 + (uVar7 + 1) * 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *puVar6 = uVar3;
        puVar6[1] = *param_3;
        return puVar6;
      }
    }
  }
LAB_1432f2d3d:
  puVar6 = (ulonglong *)FUN_1432eeeb0(param_1,param_1,&local_18,(ulonglong)*(uint *)(uVar3 + 0x1c));
  return puVar6;
}



// FUNCTION 1432f2e20 FUN_1432f2e20 body=102 status=ok
// SIG undefined FUN_1432f2e20(void)

void FUN_1432f2e20(longlong param_1,RefCountImpl *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x400);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(lVar1 + 0x90) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x90));
  }
  *(RefCountImpl **)(lVar1 + 0x90) = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1432f2eb0 FUN_1432f2eb0 body=270 status=ok
// SIG undefined FUN_1432f2eb0(void)

void FUN_1432f2eb0(longlong param_1,undefined4 param_2,RefCountImpl *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  RefCountImpl *this;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  RefCountImpl *local_res8;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x20);
  if (param_3 == (RefCountImpl *)0x0) {
    FUN_1432ee8c0(param_1 + 0x18,local_res10);
  }
  else {
    Scaleform::RefCountImpl::AddRef(param_3);
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar2 = *(int *)(param_3 + 0x10);
    local_res8 = param_3;
    if (lVar3 != 0) {
      uVar6 = *(ulonglong *)(lVar3 + 8) & (longlong)iVar2;
      lVar1 = uVar6 * 3 + 2;
      puVar4 = (ulonglong *)(lVar3 + lVar1 * 8);
      if ((*(longlong *)(lVar3 + lVar1 * 8) != -2) && (uVar5 = uVar6, puVar4[1] == uVar6)) {
        while ((puVar4[1] != uVar6 || (*(int *)(puVar4[2] + 0x10) != iVar2))) {
          uVar5 = *puVar4;
          if (uVar5 == 0xffffffffffffffff) goto LAB_1432f2f70;
          puVar4 = (ulonglong *)(lVar3 + uVar5 * 0x18 + 0x10);
        }
        if (-1 < (longlong)uVar5) {
          lVar3 = lVar3 + uVar5 * 0x18;
          Scaleform::RefCountImpl::AddRef(param_3);
          this = *(RefCountImpl **)(lVar3 + 0x20);
          if (this != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this);
          }
          *(RefCountImpl **)(lVar3 + 0x20) = param_3;
          goto LAB_1432f2f8a;
        }
      }
    }
LAB_1432f2f70:
    FUN_1432ef070(param_1 + 0x18,param_1 + 0x18,&local_res8,(longlong)iVar2);
    param_3 = local_res8;
LAB_1432f2f8a:
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(param_3);
    }
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return;
}



// FUNCTION 1432f2fc0 FUN_1432f2fc0 body=118 status=ok
// SIG undefined FUN_1432f2fc0(void)

void FUN_1432f2fc0(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  param_1[1] = *param_1;
  bVar1 = *(byte *)((longlong)param_1 + 0x4c);
  *(byte *)((longlong)param_1 + 0x4c) = (bVar1 * '\x02' ^ bVar1) & 2 ^ bVar1;
  FUN_1432efc10(param_1,param_2);
  *(byte *)((longlong)param_1 + 0x4c) = param_2 == 0 | *(byte *)((longlong)param_1 + 0x4c) & 0xfe;
  return;
}



// FUNCTION 1432f3080 FUN_1432f3080 body=48 status=ok
// SIG undefined FUN_1432f3080(void)

void FUN_1432f3080(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_28 [32];
  
  do {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2,local_28);
  } while (iVar1 != 0);
  return;
}



// FUNCTION 1432f30b0 FUN_1432f30b0 body=120 status=ok
// SIG undefined FUN_1432f30b0(void)

void FUN_1432f30b0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar3 = plVar1[1] + 1;
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)plVar1[2] >> 1 <= uVar3) goto LAB_1432f30ff;
  }
  else {
    if (uVar3 <= (ulonglong)plVar1[2]) goto LAB_1432f30ff;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432bbfd0(plVar1,plVar1,uVar4);
LAB_1432f30ff:
  plVar1[1] = uVar3;
  puVar2 = (undefined1 *)(*plVar1 + -1 + uVar3);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1432f3130 FUN_1432f3130 body=201 status=ok
// SIG undefined FUN_1432f3130(void)

void FUN_1432f3130(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong *local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  local_res8 = plVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1432f30b0();
  }
  uVar1 = plVar2[1] + 1;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar4 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_1432f31a1;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_1432f31a1;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432bbfd0(plVar2,plVar2,uVar4);
LAB_1432f31a1:
  plVar2[1] = uVar1;
  puVar3 = (undefined1 *)(*plVar2 + -1 + uVar1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 1;
  }
  FUN_1432f37e0(&local_res8,param_2);
  FUN_1432f37e0(&local_res8,param_3);
  FUN_1432f37e0(&local_res8,param_4);
  *(undefined4 *)(param_1 + 0x10) = 2;
  return;
}



// FUNCTION 1432f3200 Transform body=77 status=ok
// SIG Point<float> Transform(Matrix3x4<float> * this, Point<float> * param_1)

/* public: class Scaleform::Render::Point<float> __cdecl
   Scaleform::Render::Matrix3x4<float>::Transform(class Scaleform::Render::Point<float> const &
   __ptr64)const __ptr64 */

Point<float> * __thiscall
Scaleform::Render::Matrix3x4<float>::Transform(Matrix3x4<float> *this,Point<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_R8;
  
                    /* 0x32f3200  482
                       ?Transform@?$Matrix3x4@M@Render@Scaleform@@QEBA?AV?$Point@M@23@AEBV423@@Z */
  fVar1 = in_R8[1];
  fVar2 = *in_R8;
  fVar3 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x14);
  fVar5 = *(float *)(this + 0x18);
  fVar6 = *(float *)(this + 0x1c);
  *(float *)param_1 =
       fVar1 * *(float *)(this + 4) + fVar2 * *(float *)this + *(float *)(this + 8) +
       *(float *)(this + 0xc);
  *(float *)(param_1 + 4) = fVar2 * fVar3 + fVar1 * fVar4 + fVar5 + fVar6;
  return param_1;
}



// FUNCTION 1432f3250 Transform body=74 status=ok
// SIG void Transform(Matrix3x4<float> * this, Point<float> * param_1, Point<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::Transform(class
   Scaleform::Render::Point<float> * __ptr64,class Scaleform::Render::Point<float> const &
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::Transform
          (Matrix3x4<float> *this,Point<float> *param_1,Point<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x32f3250  483
                       ?Transform@?$Matrix3x4@M@Render@Scaleform@@QEBAXPEAV?$Point@M@23@AEBV423@@Z
                        */
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(this + 4);
  fVar4 = *(float *)this;
  fVar5 = *(float *)(this + 8);
  fVar6 = *(float *)(this + 0xc);
  *(float *)(param_1 + 4) =
       fVar2 * *(float *)(this + 0x10) + fVar1 * *(float *)(this + 0x14) + *(float *)(this + 0x18) +
       *(float *)(this + 0x1c);
  *(float *)param_1 = fVar1 * fVar3 + fVar2 * fVar4 + fVar5 + fVar6;
  return;
}



// FUNCTION 1432f32a0 TransformByInverse body=265 status=ok
// SIG void TransformByInverse(Matrix2x4<float> * this, Point<float> * param_1, Point<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::TransformByInverse(class
   Scaleform::Render::Point<float> * __ptr64,class Scaleform::Render::Point<float> const &
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Matrix2x4<float>::TransformByInverse
          (Matrix2x4<float> *this,Point<float> *param_1,Point<float> *param_2)

{
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  
                    /* 0x32f32a0  484
                       ?TransformByInverse@?$Matrix2x4@M@Render@Scaleform@@QEBAXPEAV?$Point@M@23@AEBV423@@Z
                        */
  local_60 = *(undefined4 *)(this + 8);
  local_5c = *(float *)(this + 0xc);
  local_58 = *(float *)(this + 0x10);
  local_54 = *(float *)(this + 0x14);
  local_50 = *(undefined4 *)(this + 0x18);
  local_4c = *(float *)(this + 0x1c);
  local_64 = *(float *)(this + 4);
  local_68 = *(float *)this;
  local_48 = local_68;
  local_44 = local_64;
  local_40 = local_60;
  local_3c = local_5c;
  local_38 = local_58;
  local_34 = local_54;
  local_30 = local_50;
  local_2c = local_4c;
  SetInverse((Matrix2x4<float> *)&local_68,(Matrix2x4<float> *)&local_48);
  *(float *)param_1 = local_68 * *(float *)param_2 + local_64 * *(float *)(param_2 + 4) + local_5c;
  *(float *)(param_1 + 4) =
       local_58 * *(float *)param_2 + local_54 * *(float *)(param_2 + 4) + local_4c;
  return;
}



// FUNCTION 1432f33b0 View body=584 status=ok
// SIG void View(Matrix3x4<float> * this, Point3<float> * param_1, Point3<float> * param_2, Point3<float> * param_3)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::View(class
   Scaleform::Render::Point3<float> const & __ptr64,class Scaleform::Render::Point3<float> const &
   __ptr64,class Scaleform::Render::Point3<float> const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::View
          (Matrix3x4<float> *this,Point3<float> *param_1,Point3<float> *param_2,
          Point3<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* 0x32f33b0  517
                       ?View@?$Matrix3x4@M@Render@Scaleform@@QEAAXAEBV?$Point3@M@23@00@Z */
  fVar9 = *(float *)(param_2 + 8);
  fVar10 = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_3 + 4) * fVar9 - *(float *)(param_3 + 8) * fVar1;
  fVar8 = fVar10 * *(float *)(param_3 + 8) - *(float *)param_3 * fVar9;
  fVar7 = *(float *)param_3 * fVar1 - fVar10 * *(float *)(param_3 + 4);
  dVar4 = (double)(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
  if (1e-24 <= dVar4) {
    dVar4 = ::_guard_xfg_dispatch_icall_nop(dVar4);
    fVar5 = (float)dVar4;
    fVar6 = fVar6 / fVar5;
    fVar8 = fVar8 / fVar5;
    fVar7 = fVar7 / fVar5;
  }
  fVar5 = fVar1 * fVar7 - fVar9 * fVar8;
  fVar9 = fVar9 * fVar6 - fVar10 * fVar7;
  fVar10 = fVar10 * fVar8 - fVar1 * fVar6;
  if ((1.4210855e-14 < fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) &&
     (1.4210855e-14 < fVar9 * fVar9 + fVar5 * fVar5 + fVar10 * fVar10)) {
    *(float *)this = fVar6;
    *(float *)(this + 4) = fVar8;
    *(float *)(this + 8) = fVar7;
    fVar1 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(param_1 + 8);
    *(float *)(this + 0x10) = fVar5;
    *(float *)(this + 0x14) = fVar9;
    *(float *)(this + 0x18) = fVar10;
    *(float *)(this + 0xc) = -(fVar6 * fVar1 + fVar8 * fVar2 + fVar7 * fVar3);
    *(float *)(this + 0x1c) =
         -(fVar5 * *(float *)param_1 + fVar9 * *(float *)(param_1 + 4) +
          fVar10 * *(float *)(param_1 + 8));
    *(undefined4 *)(this + 0x20) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_2 + 8);
    *(float *)(this + 0x2c) =
         -(*(float *)(param_2 + 4) * *(float *)(param_1 + 4) + *(float *)param_1 * *(float *)param_2
          + *(float *)(param_1 + 8) * *(float *)(param_2 + 8));
  }
  return;
}



// FUNCTION 1432f3600 ViewLH body=229 status=ok
// SIG void ViewLH(Matrix3x4<float> * this, Point3<float> * param_1, Point3<float> * param_2, Point3<float> * param_3)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::ViewLH(class
   Scaleform::Render::Point3<float> const & __ptr64,class Scaleform::Render::Point3<float> const &
   __ptr64,class Scaleform::Render::Point3<float> const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::ViewLH
          (Matrix3x4<float> *this,Point3<float> *param_1,Point3<float> *param_2,
          Point3<float> *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  
                    /* 0x32f3600  518
                       ?ViewLH@?$Matrix3x4@M@Render@Scaleform@@QEAAXAEBV?$Point3@M@23@00@Z */
  fVar2 = *(float *)param_2 - *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  dVar1 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  local_48 = fVar2;
  local_44 = fVar3;
  local_40 = fVar4;
  if (1e-24 <= dVar1) {
    dVar1 = ::_guard_xfg_dispatch_icall_nop(dVar1);
    local_40 = (float)dVar1;
    local_48 = fVar2 / local_40;
    local_44 = fVar3 / local_40;
    local_40 = fVar4 / local_40;
  }
  View(this,param_1,(Point3<float> *)&local_48,param_3);
  return;
}



// FUNCTION 1432f36f0 ViewRH body=229 status=ok
// SIG void ViewRH(Matrix3x4<float> * this, Point3<float> * param_1, Point3<float> * param_2, Point3<float> * param_3)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::ViewRH(class
   Scaleform::Render::Point3<float> const & __ptr64,class Scaleform::Render::Point3<float> const &
   __ptr64,class Scaleform::Render::Point3<float> const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::ViewRH
          (Matrix3x4<float> *this,Point3<float> *param_1,Point3<float> *param_2,
          Point3<float> *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  
                    /* 0x32f36f0  519
                       ?ViewRH@?$Matrix3x4@M@Render@Scaleform@@QEAAXAEBV?$Point3@M@23@00@Z */
  fVar2 = *(float *)param_1 - *(float *)param_2;
  fVar3 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  dVar1 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  local_48 = fVar2;
  local_44 = fVar3;
  local_40 = fVar4;
  if (1e-24 <= dVar1) {
    dVar1 = ::_guard_xfg_dispatch_icall_nop(dVar1);
    local_40 = (float)dVar1;
    local_48 = fVar2 / local_40;
    local_44 = fVar3 / local_40;
    local_40 = fVar4 / local_40;
  }
  View(this,param_1,(Point3<float> *)&local_48,param_3);
  return;
}



// FUNCTION 1432f37e0 FUN_1432f37e0 body=914 status=ok
// SIG undefined FUN_1432f37e0(void)

undefined8 FUN_1432f37e0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)*param_1;
  uVar6 = plVar1[1] + 1;
  if (param_2 < 0x40) {
    if (uVar6 < (ulonglong)plVar1[1]) {
      uVar7 = uVar6;
      if ((ulonglong)plVar1[2] >> 1 <= uVar6) goto LAB_1432f383e;
    }
    else {
      if (uVar6 <= (ulonglong)plVar1[2]) goto LAB_1432f383e;
      uVar7 = (uVar6 >> 2) + uVar6;
    }
    FUN_1432bbfd0(plVar1,plVar1,uVar7);
LAB_1432f383e:
    plVar1[1] = uVar6;
    pcVar2 = (char *)(*plVar1 + -1 + uVar6);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = (char)param_2 << 2;
    }
    return 1;
  }
  bVar5 = (char)param_2 << 2;
  if (0x3fff < param_2) {
    if (0x3fffff < param_2) {
      if (uVar6 < (ulonglong)plVar1[1]) {
        uVar7 = uVar6;
        if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1432f3a3f:
          FUN_1432bbfd0(plVar1,plVar1,uVar7);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar6) {
        uVar7 = (uVar6 >> 2) + uVar6;
        goto LAB_1432f3a3f;
      }
      plVar1[1] = uVar6;
      pbVar3 = (byte *)(*plVar1 + -1 + uVar6);
      if (pbVar3 != (byte *)0x0) {
        *pbVar3 = bVar5 | 3;
      }
      plVar1 = (longlong *)*param_1;
      uVar6 = plVar1[1] + 1;
      if (uVar6 < (ulonglong)plVar1[1]) {
        uVar7 = uVar6;
        if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1432f3a92:
          FUN_1432bbfd0(plVar1,plVar1,uVar7);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar6) {
        uVar7 = (uVar6 >> 2) + uVar6;
        goto LAB_1432f3a92;
      }
      plVar1[1] = uVar6;
      puVar4 = (undefined1 *)(*plVar1 + -1 + uVar6);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = (char)(param_2 >> 6);
      }
      plVar1 = (longlong *)*param_1;
      uVar6 = plVar1[1] + 1;
      if (uVar6 < (ulonglong)plVar1[1]) {
        uVar7 = uVar6;
        if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1432f3ae5:
          FUN_1432bbfd0(plVar1,plVar1,uVar7);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar6) {
        uVar7 = (uVar6 >> 2) + uVar6;
        goto LAB_1432f3ae5;
      }
      plVar1[1] = uVar6;
      puVar4 = (undefined1 *)(*plVar1 + -1 + uVar6);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = (char)(param_2 >> 0xe);
      }
      param_1 = (longlong *)*param_1;
      uVar6 = param_1[1] + 1;
      if (uVar6 < (ulonglong)param_1[1]) {
        uVar7 = uVar6;
        if ((ulonglong)param_1[2] >> 1 <= uVar6) goto LAB_1432f3b41;
      }
      else {
        if (uVar6 <= (ulonglong)param_1[2]) goto LAB_1432f3b41;
        uVar7 = (uVar6 >> 2) + uVar6;
      }
      FUN_1432bbfd0(param_1,param_1,uVar7);
LAB_1432f3b41:
      param_1[1] = uVar6;
      puVar4 = (undefined1 *)(*param_1 + -1 + uVar6);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = (char)(param_2 >> 0x16);
      }
      return 4;
    }
    if (uVar6 < (ulonglong)plVar1[1]) {
      uVar7 = uVar6;
      if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1432f394a:
        FUN_1432bbfd0(plVar1,plVar1,uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar6) {
      uVar7 = (uVar6 >> 2) + uVar6;
      goto LAB_1432f394a;
    }
    plVar1[1] = uVar6;
    pbVar3 = (byte *)(*plVar1 + -1 + uVar6);
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = bVar5 | 2;
    }
    plVar1 = (longlong *)*param_1;
    uVar6 = plVar1[1] + 1;
    if (uVar6 < (ulonglong)plVar1[1]) {
      uVar7 = uVar6;
      if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1432f399d:
        FUN_1432bbfd0(plVar1,plVar1,uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar6) {
      uVar7 = (uVar6 >> 2) + uVar6;
      goto LAB_1432f399d;
    }
    plVar1[1] = uVar6;
    puVar4 = (undefined1 *)(*plVar1 + -1 + uVar6);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = (char)(param_2 >> 6);
    }
    param_1 = (longlong *)*param_1;
    uVar6 = param_1[1] + 1;
    if (uVar6 < (ulonglong)param_1[1]) {
      uVar7 = uVar6;
      if ((ulonglong)param_1[2] >> 1 <= uVar6) goto LAB_1432f39f9;
    }
    else {
      if (uVar6 <= (ulonglong)param_1[2]) goto LAB_1432f39f9;
      uVar7 = (uVar6 >> 2) + uVar6;
    }
    FUN_1432bbfd0(param_1,param_1,uVar7);
LAB_1432f39f9:
    param_1[1] = uVar6;
    puVar4 = (undefined1 *)(*param_1 + -1 + uVar6);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = (char)(param_2 >> 0xe);
    }
    return 3;
  }
  if (uVar6 < (ulonglong)plVar1[1]) {
    uVar7 = uVar6;
    if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1432f389c:
      FUN_1432bbfd0(plVar1,plVar1,uVar7);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1432f389c;
  }
  plVar1[1] = uVar6;
  pbVar3 = (byte *)(*plVar1 + -1 + uVar6);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = bVar5 | 1;
  }
  param_1 = (longlong *)*param_1;
  uVar6 = param_1[1] + 1;
  if (uVar6 < (ulonglong)param_1[1]) {
    uVar7 = uVar6;
    if ((ulonglong)param_1[2] >> 1 <= uVar6) goto LAB_1432f38f8;
  }
  else {
    if (uVar6 <= (ulonglong)param_1[2]) goto LAB_1432f38f8;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_1432bbfd0(param_1,param_1,uVar7);
LAB_1432f38f8:
  param_1[1] = uVar6;
  puVar4 = (undefined1 *)(*param_1 + -1 + uVar6);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = (char)(param_2 >> 6);
  }
  return 2;
}



// FUNCTION 1432f3b80 FUN_1432f3b80 body=333 status=ok
// SIG undefined FUN_1432f3b80(void)

void FUN_1432f3b80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ef9e0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_1432eed40(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432f3cd0 FUN_1432f3cd0 body=336 status=ok
// SIG undefined FUN_1432f3cd0(void)

void FUN_1432f3cd0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14207f9b0();
    return;
  }
  if (param_3 < 8) {
    lVar2 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar2 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar2 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar2 + -1;
  lVar4 = lVar3;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar3;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_1432ef070(&local_res20,param_2,lVar4 + 0x20,
                      (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + 0x10));
        if (*(RefCountImpl **)(lVar4 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar4 + 0x20));
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432f3e20 SysFile body=150 status=ok
// SIG undefined SysFile(SysFile * this)

/* public: __cdecl Scaleform::SysFile::SysFile(void) __ptr64 */

SysFile * __thiscall Scaleform::SysFile::SysFile(SysFile *this)

{
  undefined8 *puVar1;
  
                    /* 0x32f3e20  15  ??0SysFile@Scaleform@@QEAA@XZ */
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_144f70a50;
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_145af9670;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145af9710;
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
  }
  *(undefined8 **)(this + 0x10) = puVar1;
  return this;
}



// FUNCTION 1432f3ec0 SysFile body=64 status=ok
// SIG undefined SysFile(SysFile * this, String * param_1, int param_2, int param_3)

/* public: __cdecl Scaleform::SysFile::SysFile(class Scaleform::String const & __ptr64,int,int)
   __ptr64 */

SysFile * __thiscall
Scaleform::SysFile::SysFile(SysFile *this,String *param_1,int param_2,int param_3)

{
                    /* 0x32f3ec0  14  ??0SysFile@Scaleform@@QEAA@AEBVString@1@HH@Z */
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_144f70a50;
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_145af9670;
  Open(this,param_1,param_2,param_3);
  return this;
}



// FUNCTION 1432f3f10 Open body=262 status=ok
// SIG bool Open(SysFile * this, String * param_1, int param_2, int param_3)

/* public: bool __cdecl Scaleform::SysFile::Open(class Scaleform::String const & __ptr64,int,int)
   __ptr64 */

bool __thiscall Scaleform::SysFile::Open(SysFile *this,String *param_1,int param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  BufferedFile *this_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  
                    /* 0x32f3f10  291  ?Open@SysFile@Scaleform@@QEAA_NAEBVString@2@HH@Z */
  plVar2 = (longlong *)FUN_143359a50(param_1,param_2,param_3);
  if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
  }
  *(longlong **)(this + 0x10) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (cVar1 != '\0') {
      if ((param_2 & 0x20U) != 0) {
        this_00 = (BufferedFile *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
        if (this_00 == (BufferedFile *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = BufferedFile::BufferedFile(this_00,*(File **)(this + 0x10));
        }
        if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
          RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
        }
        *(undefined8 *)(this + 0x10) = uVar3;
      }
      return true;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_144f70a50;
    *puVar4 = &PTR_FUN_145af9710;
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
  }
  *(undefined8 **)(this + 0x10) = puVar4;
  return false;
}



// FUNCTION 1432f4020 GetErrorCode body=22 status=ok
// SIG int GetErrorCode(SysFile * this)

/* public: virtual int __cdecl Scaleform::SysFile::GetErrorCode(void) __ptr64 */

int __thiscall Scaleform::SysFile::GetErrorCode(SysFile *this)

{
  int iVar1;
  
                    /* 0x32f4020  156  ?GetErrorCode@SysFile@Scaleform@@UEAAHXZ */
  if (*(longlong **)(this + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f402c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x40))();
    return iVar1;
  }
  return 0x1001;
}



// FUNCTION 1432f4040 IsValid body=37 status=ok
// SIG bool IsValid(SysFile * this)

/* public: virtual bool __cdecl Scaleform::SysFile::IsValid(void)const __ptr64 */

bool __thiscall Scaleform::SysFile::IsValid(SysFile *this)

{
  char cVar1;
  
                    /* 0x32f4040  249  ?IsValid@SysFile@Scaleform@@UEBA_NXZ */
  if (*(longlong **)(this + 0x10) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}



// FUNCTION 1432f4070 Close body=141 status=ok
// SIG bool Close(SysFile * this)

/* public: virtual bool __cdecl Scaleform::SysFile::Close(void) __ptr64 */

bool __thiscall Scaleform::SysFile::Close(SysFile *this)

{
  char cVar1;
  undefined8 *puVar2;
  
                    /* 0x32f4070  94  ?Close@SysFile@Scaleform@@UEAA_NXZ */
  cVar1 = (**(code **)(*(longlong *)this + 0x10))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(this + 0x10) + 0x98))();
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_144f70a50;
      *puVar2 = &PTR_FUN_145af9710;
      *(undefined4 *)(puVar2 + 1) = 1;
    }
    if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
      RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
    }
    *(undefined8 **)(this + 0x10) = puVar2;
    return true;
  }
  return false;
}



// FUNCTION 1432f4100 FUN_1432f4100 body=99 status=ok
// SIG undefined FUN_1432f4100(void)

RefCountImplCore * FUN_1432f4100(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9710;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432f4170 CompressMemoryBound body=4 status=ok
// SIG undefined CompressMemoryBound(void)

undefined8 FGenericPlatformCompression::CompressMemoryBound(void)

{
  return 0xffffffff;
}



// FUNCTION 1432f41a0 FUN_1432f41a0 body=3 status=ok
// SIG undefined FUN_1432f41a0(void)

void FUN_1432f41a0(void)

{
  return;
}



// FUNCTION 1432f41b0 FUN_1432f41b0 body=3 status=ok
// SIG undefined FUN_1432f41b0(void)

void FUN_1432f41b0(void)

{
  return;
}



// FUNCTION 1432f41c0 FUN_1432f41c0 body=17 status=ok
// SIG undefined FUN_1432f41c0(void)

undefined8 * FUN_1432f41c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1432f41e0 FUN_1432f41e0 body=89 status=ok
// SIG undefined FUN_1432f41e0(void)

undefined8 *
FUN_1432f41e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0x50);
  FUN_1432f4e00(param_1,uVar1,param_3,param_4);
  return param_1;
}



// FUNCTION 1432f4240 thunk_FUN_1432f4570 body=5 status=ok
// SIG undefined thunk_FUN_1432f4570(void)

void thunk_FUN_1432f4570(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuStack_18;
  undefined8 ***pppuStack_10;
  
  ppppuVar2 = (undefined8 ****)param_1[2];
  pppuStack_18 = &pppuStack_18;
  pppuStack_10 = &pppuStack_18;
  if (ppppuVar2 != (undefined8 ****)0x0) {
    FUN_1432f4da0(ppppuVar2[3],&pppuStack_18);
    ppppuVar2[1] = &pppuStack_18;
    *ppppuVar2 = pppuStack_18;
    pppuStack_18[1] = ppppuVar2;
    pppuStack_18 = ppppuVar2;
    FUN_1432f4da0(ppppuVar2[4],&pppuStack_18);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  if ((undefined8 ****)pppuStack_10 != &pppuStack_18) {
    do {
      pppuVar1 = pppuStack_10;
      (*pppuStack_10)[1] = pppuStack_10[1];
      *pppuStack_10[1] = *pppuStack_10;
      *pppuStack_10 = (undefined8 ***)0xffffffffffffffff;
      pppuVar1[1] = (undefined8 ***)0xffffffffffffffff;
      (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,pppuVar1);
    } while ((undefined8 ****)pppuStack_10 != &pppuStack_18);
  }
  return;
}



// FUNCTION 1432f4250 thunk_FUN_1432f4460 body=5 status=ok
// SIG undefined thunk_FUN_1432f4460(void)

undefined8 thunk_FUN_1432f4460(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar1 = FUN_1432f4a10(param_1 + 0x10);
  lVar2 = FUN_1432f4890(param_1 + 0x10,param_2 + param_3);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x48) + *(longlong *)(lVar1 + 0x40) != param_2)) {
    lVar1 = 0;
  }
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x40) != param_2 + param_3)) {
    lVar2 = 0;
  }
  uVar3 = FUN_1432f4740(param_1,lVar1,lVar2,param_2,param_3);
  return uVar3;
}



// FUNCTION 1432f4260 FUN_1432f4260 body=114 status=ok
// SIG undefined FUN_1432f4260(void)

void FUN_1432f4260(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432f4a10(param_1 + 0x10);
  FUN_1432f4cd0(param_1 + 8,uVar1);
  FUN_1432f4b50(param_1 + 0x10,uVar1);
  FUN_1432f46a0(param_1,uVar1,param_2,param_3);
  return;
}



// FUNCTION 1432f42e0 FUN_1432f42e0 body=124 status=ok
// SIG undefined FUN_1432f42e0(void)

undefined8 FUN_1432f42e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432f4950(param_1 + 8);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 8);
    FUN_1432f4cd0(param_1 + 8,lVar2);
    if (lVar2 != 0) {
      FUN_1432f4b50(param_1 + 0x10,lVar2);
      uVar1 = *(undefined8 *)(lVar2 + 0x40);
      FUN_1432f46a0(param_1,lVar2,uVar1,param_2);
      return uVar1;
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1432f4370 FUN_1432f4370 body=228 status=ok
// SIG undefined FUN_1432f4370(void)

ulonglong FUN_1432f4370(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 < 2) {
    uVar1 = FUN_1432f42e0();
    return uVar1;
  }
  lVar2 = FUN_1432f4950(param_1 + 8);
  if (lVar2 != 0) {
    do {
      lVar3 = lVar2;
      do {
        uVar1 = (param_3 - 1) + *(longlong *)(lVar3 + 0x40) & ~(param_3 - 1);
        if (uVar1 + param_2 < (ulonglong)(*(longlong *)(lVar3 + 0x40) + *(longlong *)(lVar3 + 0x48))
           ) {
          FUN_1432f4cd0(param_1 + 8,lVar3);
          FUN_1432f4b50(param_1 + 0x10,lVar3);
          FUN_1432f46a0(param_1,lVar3,uVar1,param_2);
          return uVar1;
        }
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (lVar3 != lVar2);
      lVar2 = FUN_1432f4950(param_1 + 8,*(longlong *)(lVar2 + 0x48) + 1);
    } while (lVar2 != 0);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1432f4460 FUN_1432f4460 body=156 status=ok
// SIG undefined FUN_1432f4460(void)

undefined8 FUN_1432f4460(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar1 = FUN_1432f4a10(param_1 + 0x10);
  lVar2 = FUN_1432f4890(param_1 + 0x10,param_2 + param_3);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x48) + *(longlong *)(lVar1 + 0x40) != param_2)) {
    lVar1 = 0;
  }
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x40) != param_2 + param_3)) {
    lVar2 = 0;
  }
  uVar3 = FUN_1432f4740(param_1,lVar1,lVar2,param_2,param_3);
  return uVar3;
}



// FUNCTION 1432f4510 FUN_1432f4510 body=76 status=ok
// SIG undefined FUN_1432f4510(void)

undefined8 FUN_1432f4510(longlong param_1)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    local_res8[0] = *(undefined8 *)(lVar1 + 0x48);
    FUN_1432f4d50(*(undefined8 *)(lVar1 + 0x18),local_res8);
    FUN_1432f4d50(*(undefined8 *)(lVar1 + 0x20),local_res8);
    return local_res8[0];
  }
  return 0;
}



// FUNCTION 1432f4570 FUN_1432f4570 body=198 status=ok
// SIG undefined FUN_1432f4570(void)

void FUN_1432f4570(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  ppppuVar2 = (undefined8 ****)param_1[2];
  local_18 = &local_18;
  local_10 = &local_18;
  if (ppppuVar2 != (undefined8 ****)0x0) {
    FUN_1432f4da0(ppppuVar2[3],&local_18);
    ppppuVar2[1] = &local_18;
    *ppppuVar2 = local_18;
    local_18[1] = ppppuVar2;
    local_18 = ppppuVar2;
    FUN_1432f4da0(ppppuVar2[4],&local_18);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  if ((undefined8 ****)local_10 != &local_18) {
    do {
      pppuVar1 = local_10;
      (*local_10)[1] = local_10[1];
      *local_10[1] = *local_10;
      *local_10 = (undefined8 ***)0xffffffffffffffff;
      pppuVar1[1] = (undefined8 ***)0xffffffffffffffff;
      (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,pppuVar1);
    } while ((undefined8 ****)local_10 != &local_18);
  }
  return;
}



// FUNCTION 1432f4640 FUN_1432f4640 body=84 status=ok
// SIG undefined FUN_1432f4640(void)

longlong FUN_1432f4640(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1432f4950(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    FUN_1432f4cd0(param_1 + 8,lVar2);
    if (lVar2 != 0) {
      FUN_1432f4b50(param_1 + 0x10,lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 1432f46a0 FUN_1432f46a0 body=149 status=ok
// SIG undefined FUN_1432f46a0(void)

void FUN_1432f46a0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = ((*(longlong *)(param_2 + 0x48) - param_3) - param_4) + *(longlong *)(param_2 + 0x40);
  if (param_3 == *(longlong *)(param_2 + 0x40)) {
    if (lVar2 == 0) {
      (**(code **)(*(longlong *)*param_1 + 0x60))();
    }
    else {
      FUN_1432f4e00(param_1,param_2,param_3 + param_4,lVar2);
    }
  }
  else {
    FUN_1432f4e00();
    if (lVar2 != 0) {
      uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0x50);
      FUN_1432f4e00(param_1,uVar1,param_3 + param_4,lVar2);
    }
  }
  return;
}



// FUNCTION 1432f4740 FUN_1432f4740 body=322 status=ok
// SIG undefined FUN_1432f4740(void)

longlong FUN_1432f4740(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      longlong param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0x50);
      FUN_1432f4e00(param_1,uVar1,param_4,param_5);
    }
    else {
      param_5 = param_5 + *(longlong *)(param_3 + 0x48);
      FUN_1432f4cd0(param_1 + 1,param_3);
      FUN_1432f4b50(param_1 + 2,param_3);
      FUN_1432f4e00(param_1,param_3,param_4,param_5);
    }
  }
  else if (param_3 == 0) {
    param_5 = param_5 + *(longlong *)(param_2 + 0x48);
    FUN_1432f4cd0(param_1 + 1);
    FUN_1432f4b50(param_1 + 2,param_2);
    FUN_1432f4e00(param_1,param_2,*(undefined8 *)(param_2 + 0x40),param_5);
  }
  else {
    param_5 = *(longlong *)(param_2 + 0x48) + *(longlong *)(param_3 + 0x48) + param_5;
    FUN_1432f4cd0(param_1 + 1);
    FUN_1432f4b50(param_1 + 2,param_2);
    FUN_1432f4cd0(param_1 + 1,param_3);
    FUN_1432f4b50(param_1 + 2,param_3);
    FUN_1432f4e00(param_1,param_2,*(undefined8 *)(param_2 + 0x40),param_5);
    (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_3);
  }
  return param_5;
}



// FUNCTION 1432f4890 FUN_1432f4890 body=184 status=ok
// SIG undefined FUN_1432f4890(void)

longlong FUN_1432f4890(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar3 = *param_1;
  lVar2 = 0;
  uVar7 = 0xffffffffffffffff;
  lVar6 = lVar2;
  uVar5 = param_2;
  if (lVar3 != 0) {
    while( true ) {
      uVar4 = *(longlong *)(lVar3 + 0x40) - param_2;
      if (((param_2 <= *(ulonglong *)(lVar3 + 0x40)) && (uVar4 < uVar7)) &&
         (lVar6 = lVar3, uVar7 = uVar4, uVar4 == 0)) {
        return lVar3;
      }
      lVar1 = *(longlong *)(lVar3 + 0x20);
      lVar3 = *(longlong *)(lVar3 + 0x18 + ((longlong)uVar5 >> 0x3f) * -8);
      if ((lVar1 != 0) && (lVar1 != lVar3)) {
        lVar2 = lVar1;
      }
      lVar1 = lVar2;
      if (lVar3 == 0) break;
      uVar5 = uVar5 * 2;
    }
    for (; lVar2 = lVar6, lVar1 != 0; lVar1 = *(longlong *)(lVar3 + lVar1)) {
      uVar5 = *(longlong *)(lVar1 + 0x40) - param_2;
      if ((param_2 <= *(ulonglong *)(lVar1 + 0x40)) && (uVar5 < uVar7)) {
        lVar2 = lVar1;
        uVar7 = uVar5;
      }
      lVar3 = 0x18;
      if (*(longlong *)(lVar1 + 0x18) == 0) {
        lVar3 = 0x20;
      }
      lVar6 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1432f4950 FUN_1432f4950 body=184 status=ok
// SIG undefined FUN_1432f4950(void)

longlong FUN_1432f4950(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar3 = *param_1;
  lVar2 = 0;
  uVar7 = 0xffffffffffffffff;
  lVar6 = lVar2;
  uVar5 = param_2;
  if (lVar3 != 0) {
    while( true ) {
      uVar4 = *(longlong *)(lVar3 + 0x48) - param_2;
      if (((param_2 <= *(ulonglong *)(lVar3 + 0x48)) && (uVar4 < uVar7)) &&
         (lVar6 = lVar3, uVar7 = uVar4, uVar4 == 0)) {
        return lVar3;
      }
      lVar1 = *(longlong *)(lVar3 + 0x38);
      lVar3 = *(longlong *)(lVar3 + 0x30 + ((longlong)uVar5 >> 0x3f) * -8);
      if ((lVar1 != 0) && (lVar1 != lVar3)) {
        lVar2 = lVar1;
      }
      lVar1 = lVar2;
      if (lVar3 == 0) break;
      uVar5 = uVar5 * 2;
    }
    for (; lVar2 = lVar6, lVar1 != 0; lVar1 = *(longlong *)(lVar3 + lVar1)) {
      uVar5 = *(longlong *)(lVar1 + 0x48) - param_2;
      if ((param_2 <= *(ulonglong *)(lVar1 + 0x48)) && (uVar5 < uVar7)) {
        lVar2 = lVar1;
        uVar7 = uVar5;
      }
      lVar3 = 0x30;
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        lVar3 = 0x38;
      }
      lVar6 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1432f4a10 FUN_1432f4a10 body=184 status=ok
// SIG undefined FUN_1432f4a10(void)

longlong FUN_1432f4a10(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar3 = *param_1;
  lVar2 = 0;
  uVar7 = 0xffffffffffffffff;
  lVar6 = lVar2;
  uVar5 = param_2;
  if (lVar3 != 0) {
    while( true ) {
      uVar4 = param_2 - *(longlong *)(lVar3 + 0x40);
      if (((*(ulonglong *)(lVar3 + 0x40) <= param_2) && (uVar4 < uVar7)) &&
         (lVar6 = lVar3, uVar7 = uVar4, uVar4 == 0)) {
        return lVar3;
      }
      lVar1 = *(longlong *)(lVar3 + 0x18);
      lVar3 = *(longlong *)(lVar3 + 0x18 + ((longlong)uVar5 >> 0x3f) * -8);
      if ((lVar1 != 0) && (lVar1 != lVar3)) {
        lVar2 = lVar1;
      }
      lVar1 = lVar2;
      if (lVar3 == 0) break;
      uVar5 = uVar5 * 2;
    }
    for (; lVar2 = lVar6, lVar1 != 0; lVar1 = *(longlong *)(lVar3 + lVar1)) {
      uVar5 = param_2 - *(longlong *)(lVar1 + 0x40);
      if ((*(ulonglong *)(lVar1 + 0x40) <= param_2) && (uVar5 < uVar7)) {
        lVar2 = lVar1;
        uVar7 = uVar5;
      }
      lVar3 = 0x18;
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        lVar3 = 0x20;
      }
      lVar6 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1432f4ad0 FUN_1432f4ad0 body=115 status=ok
// SIG undefined FUN_1432f4ad0(void)

void FUN_1432f4ad0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = (longlong)param_2;
  param_2[1] = (longlong)param_2;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *param_1 = (longlong)param_2;
    param_2[5] = (longlong)param_1;
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 0x48);
  lVar4 = param_2[9];
  while( true ) {
    if (lVar2 == param_2[9]) {
      param_2[1] = *(longlong *)(lVar1 + 8);
      *param_2 = lVar1;
      *(longlong **)(lVar1 + 8) = param_2;
      *(longlong **)param_2[1] = param_2;
      return;
    }
    lVar3 = *(longlong *)(lVar1 + 0x30 + (lVar4 >> 0x3f) * -8);
    if (lVar3 == 0) break;
    lVar2 = *(longlong *)(lVar3 + 0x48);
    lVar1 = lVar3;
    lVar4 = lVar4 * 2;
  }
  *(longlong **)(lVar1 + (lVar4 >> 0x3f) * -8 + 0x30) = param_2;
  param_2[5] = lVar1;
  return;
}



// FUNCTION 1432f4b50 FUN_1432f4b50 body=188 status=ok
// SIG undefined FUN_1432f4b50(void)

void FUN_1432f4b50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    lVar1 = lVar4;
    puVar2 = (undefined8 *)(param_2 + 0x18);
    if (lVar4 == 0) goto LAB_1432f4ba5;
  }
  do {
    do {
      puVar5 = puVar2;
      lVar4 = lVar1;
      lVar1 = *(longlong *)(lVar4 + 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20);
    } while (*(longlong *)(lVar4 + 0x20) != 0);
    lVar1 = *(longlong *)(lVar4 + 0x18);
    puVar2 = (undefined8 *)(lVar4 + 0x18);
  } while (*(longlong *)(lVar4 + 0x18) != 0);
  *puVar5 = 0;
LAB_1432f4ba5:
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if (param_2 == *param_1) {
      *param_1 = lVar4;
    }
    else {
      lVar3 = 0x18;
      if (*(longlong *)(lVar1 + 0x18) != param_2) {
        lVar3 = 0x20;
      }
      *(longlong *)(lVar3 + lVar1) = lVar4;
    }
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 0x10) = lVar1;
      lVar1 = *(longlong *)(param_2 + 0x18);
      if (lVar1 != 0) {
        *(longlong *)(lVar4 + 0x18) = lVar1;
        *(longlong *)(lVar1 + 0x10) = lVar4;
      }
      lVar1 = *(longlong *)(param_2 + 0x20);
      if (lVar1 != 0) {
        *(longlong *)(lVar4 + 0x20) = lVar1;
        *(longlong *)(lVar1 + 0x10) = lVar4;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 1432f4c10 FUN_1432f4c10 body=188 status=ok
// SIG undefined FUN_1432f4c10(void)

void FUN_1432f4c10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  puVar2 = (undefined8 *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x30);
    lVar1 = lVar4;
    puVar2 = (undefined8 *)(param_2 + 0x30);
    if (lVar4 == 0) goto LAB_1432f4c65;
  }
  do {
    do {
      puVar5 = puVar2;
      lVar4 = lVar1;
      lVar1 = *(longlong *)(lVar4 + 0x38);
      puVar2 = (undefined8 *)(lVar4 + 0x38);
    } while (*(longlong *)(lVar4 + 0x38) != 0);
    lVar1 = *(longlong *)(lVar4 + 0x30);
    puVar2 = (undefined8 *)(lVar4 + 0x30);
  } while (*(longlong *)(lVar4 + 0x30) != 0);
  *puVar5 = 0;
LAB_1432f4c65:
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 != 0) {
    if (param_2 == *param_1) {
      *param_1 = lVar4;
    }
    else {
      lVar3 = 0x30;
      if (*(longlong *)(lVar1 + 0x30) != param_2) {
        lVar3 = 0x38;
      }
      *(longlong *)(lVar3 + lVar1) = lVar4;
    }
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 0x28) = lVar1;
      lVar1 = *(longlong *)(param_2 + 0x30);
      if (lVar1 != 0) {
        *(longlong *)(lVar4 + 0x30) = lVar1;
        *(longlong *)(lVar1 + 0x28) = lVar4;
      }
      lVar1 = *(longlong *)(param_2 + 0x38);
      if (lVar1 != 0) {
        *(longlong *)(lVar4 + 0x38) = lVar1;
        *(longlong *)(lVar1 + 0x28) = lVar4;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 1432f4cd0 FUN_1432f4cd0 body=117 status=ok
// SIG undefined FUN_1432f4cd0(void)

void FUN_1432f4cd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != param_2) {
    plVar2 = (longlong *)param_2[1];
    *plVar2 = (longlong)plVar1;
    plVar1[1] = (longlong)plVar2;
    lVar3 = param_2[5];
    if (lVar3 != 0) {
      if (param_2 == (longlong *)*param_1) {
        *param_1 = (longlong)plVar1;
      }
      else {
        lVar4 = 0x30;
        if (*(longlong **)(lVar3 + 0x30) != param_2) {
          lVar4 = 0x38;
        }
        *(longlong **)(lVar4 + lVar3) = plVar1;
      }
      plVar1[5] = lVar3;
      lVar3 = param_2[6];
      if (lVar3 != 0) {
        plVar1[6] = lVar3;
        *(longlong **)(lVar3 + 0x28) = plVar1;
      }
      lVar3 = param_2[7];
      if (lVar3 != 0) {
        plVar1[7] = lVar3;
        *(longlong **)(lVar3 + 0x28) = plVar1;
      }
    }
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[5] = 0;
    return;
  }
  FUN_1432f4c10();
  return;
}



// FUNCTION 1432f4d50 FUN_1432f4d50 body=71 status=ok
// SIG undefined FUN_1432f4d50(void)

void FUN_1432f4d50(longlong param_1,longlong *param_2)

{
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x20)) {
    *param_2 = *param_2 + *(longlong *)(param_1 + 0x48);
    FUN_1432f4d50(*(undefined8 *)(param_1 + 0x18),param_2);
  }
  return;
}



// FUNCTION 1432f4da0 FUN_1432f4da0 body=84 status=ok
// SIG undefined FUN_1432f4da0(void)

void FUN_1432f4da0(longlong *param_1,longlong *param_2)

{
  for (; param_1 != (longlong *)0x0; param_1 = (longlong *)param_1[4]) {
    FUN_1432f4da0(param_1[3],param_2);
    *param_1 = *param_2;
    param_1[1] = (longlong)param_2;
    *(longlong **)(*param_2 + 8) = param_1;
    *param_2 = (longlong)param_1;
  }
  return;
}



// FUNCTION 1432f4e00 FUN_1432f4e00 body=159 status=ok
// SIG undefined FUN_1432f4e00(void)

void FUN_1432f4e00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  FUN_1432f4ad0(param_1 + 8);
  plVar5 = (longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    *plVar5 = param_2;
    *(longlong **)(param_2 + 0x10) = plVar5;
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x40);
  lVar4 = lVar1;
  if (*(longlong *)(lVar3 + 0x40) != lVar1) {
    while( true ) {
      lVar2 = *(longlong *)(lVar3 + 0x18 + (lVar4 >> 0x3f) * -8);
      if (lVar2 == 0) break;
      lVar3 = lVar2;
      lVar4 = lVar4 * 2;
      if (*(longlong *)(lVar2 + 0x40) == lVar1) {
        return;
      }
    }
    *(longlong *)(lVar3 + (lVar4 >> 0x3f) * -8 + 0x18) = param_2;
    *(longlong *)(param_2 + 0x10) = lVar3;
  }
  return;
}



// FUNCTION 1432f4ea0 FUN_1432f4ea0 body=15 status=ok
// SIG undefined FUN_1432f4ea0(void)

void FUN_1432f4ea0(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_144f88d18;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432f4ec0 FUN_1432f4ec0 body=417 status=ok
// SIG undefined FUN_1432f4ec0(void)

void FUN_1432f4ec0(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar2 = (*(uint **)(param_3 + 2))[1];
  puVar3 = *(uint **)(param_3 + 2);
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar2 = puVar3[1];
    if (((uVar2 & 0xf0) - 0x70 & 0xffffffef) != 0) {
      puVar6 = *(uint **)(param_1 + 2);
      puVar7 = (uint *)(&PTR_DAT_1467cdc00)[uVar2 >> 8 & 0xf];
      uVar5 = puVar6[1];
      while ((uVar5 != 0 && ((uVar5 & 0xff00) != (uVar2 & 0xff00)))) {
        puVar1 = puVar6 + 3;
        puVar6 = puVar6 + 2;
        uVar5 = *puVar1;
      }
      uVar5 = puVar7[1];
      if (uVar5 != 0) {
        do {
          if ((((uVar2 & 0x10000) != 0) || (puVar6[1] == *puVar7)) && ((puVar7[2] & uVar2) == uVar5)
             ) {
            if (param_6 == (undefined8 *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *param_6;
            }
            (**(code **)(puVar7 + 4))
                      (puVar6,puVar3,param_2,*param_1,*puVar6,param_4,*param_3,*puVar3,param_5,uVar4
                      );
            goto LAB_1432f4fee;
          }
          uVar5 = puVar7[7];
          puVar7 = puVar7 + 6;
        } while (uVar5 != 0);
      }
      FUN_1432f55a0((ulonglong)*puVar6 + param_2,*param_1,(ulonglong)*puVar3 + param_4,*param_3,
                    *(int *)(&DAT_1467cdb28 + (ulonglong)((puVar6[1] >> 4 & 0xf) - 1) * 4) *
                    (puVar6[1] & 0xf),param_5);
    }
LAB_1432f4fee:
    uVar2 = puVar3[3];
    puVar3 = puVar3 + 2;
  } while( true );
}



// FUNCTION 1432f5070 FUN_1432f5070 body=583 status=ok
// SIG undefined FUN_1432f5070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1432f5070(int *param_1,longlong param_2,uint *param_3,void *param_4,uint param_5,
                  undefined8 *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  undefined1 local_2038 [8192];
  
  uVar2 = *param_3;
  uVar5 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x2000)) / ZEXT416(uVar2),0);
  do {
    if (param_5 == 0) {
      return;
    }
    if (param_5 < (uint)uVar5) {
      uVar5 = (ulonglong)param_5;
    }
    iVar9 = (int)uVar5;
    uVar4 = (*(uint **)(param_3 + 2))[1];
    puVar3 = *(uint **)(param_3 + 2);
    while (uVar4 != 0) {
      uVar4 = puVar3[1];
      if (((uVar4 & 0xf0) - 0x70 & 0xffffffef) != 0) {
        puVar8 = *(uint **)(param_1 + 2);
        puVar10 = (uint *)(&PTR_DAT_1467cdc00)[uVar4 >> 8 & 0xf];
        uVar7 = puVar8[1];
        while ((uVar7 != 0 && ((uVar7 & 0xff00) != (uVar4 & 0xff00)))) {
          puVar1 = puVar8 + 3;
          puVar8 = puVar8 + 2;
          uVar7 = *puVar1;
        }
        uVar7 = puVar10[1];
        if (uVar7 != 0) {
          do {
            if ((((uVar4 & 0x10000) != 0) || (puVar8[1] == *puVar10)) &&
               ((puVar10[2] & uVar4) == uVar7)) {
              if (param_6 == (undefined8 *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *param_6;
              }
              (**(code **)(puVar10 + 4))
                        (puVar8,puVar3,param_2,*param_1,*puVar8,local_2038,*param_3,*puVar3,iVar9,
                         uVar6);
              goto LAB_1432f51e8;
            }
            uVar7 = puVar10[7];
            puVar10 = puVar10 + 6;
          } while (uVar7 != 0);
        }
        FUN_1432f55a0((ulonglong)*puVar8 + param_2,*param_1,local_2038 + *puVar3,*param_3,
                      *(int *)(&DAT_1467cdb28 + (ulonglong)((puVar8[1] >> 4 & 0xf) - 1) * 4) *
                      (puVar8[1] & 0xf),uVar5);
      }
LAB_1432f51e8:
      uVar4 = puVar3[3];
      puVar3 = puVar3 + 2;
    }
    uVar4 = iVar9 * uVar2;
    _guard_xfg_dispatch_icall_nop(param_4,local_2038,(ulonglong)uVar4);
    param_4 = (void *)((longlong)param_4 + (ulonglong)uVar4);
    param_2 = param_2 + (ulonglong)(uint)(*param_1 * iVar9);
    param_5 = param_5 - iVar9;
  } while( true );
}



// FUNCTION 1432f52c0 FUN_1432f52c0 body=125 status=ok
// SIG undefined FUN_1432f52c0(void)

int FUN_1432f52c0(int *param_1,longlong *param_2,uint *param_3,undefined8 param_4,ulonglong param_5,
                 uint *param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_3;
  uVar2 = (uint)(param_5 / uVar1);
  if (*param_6 < uVar2) {
    uVar2 = *param_6;
  }
  FUN_1432f4ec0(param_1,*param_2,param_3,param_4,uVar2,param_7);
  *param_2 = *param_2 + (ulonglong)(*param_1 * uVar2);
  *param_6 = *param_6 - uVar2;
  return uVar2 * uVar1;
}



// FUNCTION 1432f5350 FUN_1432f5350 body=210 status=ok
// SIG undefined FUN_1432f5350(void)

void FUN_1432f5350(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 2);
  uVar1 = puVar4[1];
  do {
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      piVar3 = (int *)(&PTR_DAT_1467cdc00)[uVar1 >> 8 & 0xf];
      iVar2 = *piVar3;
      while (iVar2 != 0) {
        if ((piVar3[2] & uVar1) == piVar3[1]) {
          (**(code **)(piVar3 + 4))(0,puVar4,0,0,0,param_2,*param_1,*puVar4,param_3,*param_4);
          break;
        }
        piVar3 = piVar3 + 6;
        iVar2 = *piVar3;
      }
    }
    uVar1 = puVar4[3];
    puVar4 = puVar4 + 2;
  } while( true );
}



// FUNCTION 1432f5430 FUN_1432f5430 body=166 status=ok
// SIG undefined FUN_1432f5430(void)

void FUN_1432f5430(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b63198) {
    _Init_thread_header(&DAT_146b63198);
    if (DAT_146b63198 == -1) {
      DAT_146b63195 = '\x01';
      _Init_thread_footer(&DAT_146b63198);
    }
  }
  if (DAT_146b63195 == '\0') {
    FUN_1432f54e0(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_1432f5850();
  }
  return;
}



// FUNCTION 1432f54e0 FUN_1432f54e0 body=181 status=ok
// SIG undefined FUN_1432f54e0(void)

void FUN_1432f54e0(short *param_1,short *param_2,uint param_3,short param_4)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  longlong lVar4;
  short *psVar5;
  
  uVar2 = param_3 & 3;
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      if (uVar2 != 3) goto LAB_1432f552b;
      *param_1 = *param_2 + param_4;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    *param_1 = *param_2 + param_4;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  *param_1 = *param_2 + param_4;
  param_1 = param_1 + 1;
  param_2 = param_2 + 1;
LAB_1432f552b:
  if (param_2 < param_2 + ((ulonglong)param_3 & 0xfffffffc)) {
    lVar4 = (longlong)param_2 + (-4 - (longlong)param_1);
    psVar3 = param_1 + 2;
    psVar5 = param_2 + 2;
    do {
      psVar1 = psVar3 + 4;
      psVar3[-2] = *(short *)(lVar4 + (longlong)psVar3) + param_4;
      psVar3[-1] = psVar5[-1] + param_4;
      *psVar3 = *psVar5 + param_4;
      psVar3[1] = psVar5[1] + param_4;
      psVar3 = psVar1;
      psVar5 = psVar5 + 4;
    } while ((short *)(lVar4 + (longlong)psVar1) < param_2 + ((ulonglong)param_3 & 0xfffffffc));
  }
  return;
}



// FUNCTION 1432f55a0 FUN_1432f55a0 body=217 status=ok
// SIG undefined FUN_1432f55a0(void)

void FUN_1432f55a0(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  size_t param_5,longlong param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * param_6 + (longlong)param_1);
  if (param_5 == 1) {
    for (; param_1 < puVar1; param_1 = (undefined4 *)((longlong)param_1 + param_2)) {
      *(undefined1 *)param_3 = *(undefined1 *)param_1;
      param_3 = (undefined4 *)((longlong)param_3 + param_4);
    }
  }
  else if (param_5 == 2) {
    for (; param_1 < puVar1; param_1 = (undefined4 *)((longlong)param_1 + param_2)) {
      *(undefined2 *)param_3 = *(undefined2 *)param_1;
      param_3 = (undefined4 *)((longlong)param_3 + param_4);
    }
  }
  else if (param_5 == 4) {
    for (; param_1 < puVar1; param_1 = (undefined4 *)((longlong)param_1 + param_2)) {
      *param_3 = *param_1;
      param_3 = (undefined4 *)((longlong)param_3 + param_4);
    }
  }
  else {
    for (; param_1 < puVar1; param_1 = (undefined4 *)((longlong)param_1 + param_2)) {
      _guard_xfg_dispatch_icall_nop(param_3,param_1,param_5);
      param_3 = (undefined4 *)((longlong)param_3 + param_4);
    }
  }
  return;
}



// FUNCTION 1432f5680 FUN_1432f5680 body=118 status=ok
// SIG undefined FUN_1432f5680(void)

void FUN_1432f5680(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4,uint param_5
                  ,longlong param_6,uint param_7,uint param_8,int param_9)

{
  short *psVar1;
  short *psVar2;
  float *pfVar3;
  ulonglong uVar4;
  
  uVar4 = param_4 * param_9 + param_3;
  if (param_3 < uVar4) {
    pfVar3 = (float *)((ulonglong)param_8 + param_6);
    psVar2 = (short *)(param_5 + param_3);
    do {
      *pfVar3 = (float)(int)*psVar2;
      psVar1 = psVar2 + 1;
      psVar2 = (short *)((longlong)psVar2 + (ulonglong)param_4);
      pfVar3[1] = (float)(int)*psVar1;
      pfVar3 = (float *)((longlong)pfVar3 + (ulonglong)param_7);
    } while ((longlong)psVar2 - (ulonglong)param_5 < uVar4);
  }
  return;
}



// FUNCTION 1432f5700 FUN_1432f5700 body=107 status=ok
// SIG undefined FUN_1432f5700(void)

void FUN_1432f5700(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4,uint param_5
                  ,longlong param_6,uint param_7,uint param_8,int param_9)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  
  uVar4 = param_4 * param_9 + param_3;
  if (param_3 < uVar4) {
    puVar2 = (undefined2 *)(param_6 + 4 + (ulonglong)param_8);
    puVar3 = (undefined2 *)(param_5 + param_3);
    do {
      puVar2[-2] = *puVar3;
      puVar1 = puVar3 + 1;
      puVar3 = (undefined2 *)((longlong)puVar3 + (ulonglong)param_4);
      puVar2[-1] = *puVar1;
      *puVar2 = 0;
      puVar2 = (undefined2 *)((longlong)puVar2 + (ulonglong)param_7);
    } while ((longlong)puVar3 - (ulonglong)param_5 < uVar4);
  }
  return;
}



// FUNCTION 1432f5780 FUN_1432f5780 body=120 status=ok
// SIG undefined FUN_1432f5780(void)

void FUN_1432f5780(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4,uint param_5
                  ,longlong param_6,uint param_7,uint param_8,int param_9)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar5 = param_4 * param_9 + param_3;
  if (param_3 < uVar5) {
    puVar3 = (uint *)(param_3 + param_5);
    puVar4 = (uint *)((ulonglong)param_8 + param_6);
    do {
      uVar2 = *puVar3;
      pbVar1 = (byte *)((longlong)puVar3 + 2);
      puVar3 = (uint *)((longlong)puVar3 + (ulonglong)param_4);
      *puVar4 = (uVar2 & 0xff) << 0x10 | (uint)*pbVar1 | uVar2 & 0xff00ff00;
      puVar4 = (uint *)((longlong)puVar4 + (ulonglong)param_7);
    } while ((longlong)puVar3 - (ulonglong)param_5 < uVar5);
  }
  return;
}



// FUNCTION 1432f5850 FUN_1432f5850 body=461 status=ok
// SIG undefined FUN_1432f5850(void)

void FUN_1432f5850(short *param_1,short *param_2,ulonglong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if ((((byte)param_1 ^ (byte)param_2) & 0xf) != 0) {
    FUN_1432f54e0(param_1,param_2,param_3,param_4);
    return;
  }
  uVar12 = 0;
  psVar11 = (short *)((longlong)param_1 + 0xfU & 0xfffffffffffffff0);
  psVar10 = param_1 + (param_3 & 0xffffffff);
  psVar1 = param_2 + (param_3 & 0xffffffff);
  if (psVar11 < (short *)((ulonglong)psVar10 & 0xfffffffffffffff0)) {
    uVar14 = (ulonglong)((longlong)psVar11 + (1 - (longlong)param_1)) >> 1;
    if (psVar11 < param_1) {
      uVar14 = uVar12;
    }
    if (uVar14 != 0) {
      uVar13 = uVar12;
      if ((0xf < uVar14) &&
         ((param_2 + (uVar14 - 1) < param_1 || (uVar13 = 0, param_1 + (uVar14 - 1) < param_2)))) {
        uVar13 = uVar12;
        do {
          sVar2 = param_2[1];
          sVar3 = param_2[2];
          sVar4 = param_2[3];
          sVar5 = param_2[4];
          sVar6 = param_2[5];
          sVar7 = param_2[6];
          sVar8 = param_2[7];
          uVar13 = uVar13 + 0x10;
          *param_1 = *param_2 + param_4;
          param_1[1] = sVar2 + param_4;
          param_1[2] = sVar3 + param_4;
          param_1[3] = sVar4 + param_4;
          param_1[4] = sVar5 + param_4;
          param_1[5] = sVar6 + param_4;
          param_1[6] = sVar7 + param_4;
          param_1[7] = sVar8 + param_4;
          psVar11 = param_2 + 8;
          sVar2 = param_2[9];
          sVar3 = param_2[10];
          sVar4 = param_2[0xb];
          sVar5 = param_2[0xc];
          sVar6 = param_2[0xd];
          sVar7 = param_2[0xe];
          sVar8 = param_2[0xf];
          param_2 = param_2 + 0x10;
          param_1[8] = *psVar11 + param_4;
          param_1[9] = sVar2 + param_4;
          param_1[10] = sVar3 + param_4;
          param_1[0xb] = sVar4 + param_4;
          param_1[0xc] = sVar5 + param_4;
          param_1[0xd] = sVar6 + param_4;
          param_1[0xe] = sVar7 + param_4;
          param_1[0xf] = sVar8 + param_4;
          param_1 = param_1 + 0x10;
        } while (uVar13 < (uVar14 & 0xfffffffffffffff0));
      }
      for (; uVar13 < uVar14; uVar13 = uVar13 + 1) {
        sVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = sVar2 + param_4;
        param_1 = param_1 + 1;
      }
    }
    do {
      sVar2 = *param_2;
      sVar3 = param_2[1];
      sVar4 = param_2[2];
      sVar5 = param_2[3];
      sVar6 = param_2[4];
      sVar7 = param_2[5];
      sVar8 = param_2[6];
      sVar9 = param_2[7];
      param_2 = param_2 + 8;
      *param_1 = sVar2 + param_4;
      param_1[1] = sVar3 + param_4;
      param_1[2] = sVar4 + param_4;
      param_1[3] = sVar5 + param_4;
      param_1[4] = sVar6 + param_4;
      param_1[5] = sVar7 + param_4;
      param_1[6] = sVar8 + param_4;
      param_1[7] = sVar9 + param_4;
      param_1 = param_1 + 8;
    } while (param_1 < (short *)((ulonglong)psVar10 & 0xfffffffffffffff0));
  }
  uVar14 = (ulonglong)((longlong)psVar1 + (1 - (longlong)param_2)) >> 1;
  if (psVar1 < param_2) {
    uVar14 = uVar12;
  }
  if (uVar14 != 0) {
    if ((0xf < uVar14) && ((param_2 + (uVar14 - 1) < param_1 || (param_1 + (uVar14 - 1) < param_2)))
       ) {
      do {
        sVar2 = param_2[1];
        sVar3 = param_2[2];
        sVar4 = param_2[3];
        sVar5 = param_2[4];
        sVar6 = param_2[5];
        sVar7 = param_2[6];
        sVar8 = param_2[7];
        uVar12 = uVar12 + 0x10;
        *param_1 = *param_2 + param_4;
        param_1[1] = sVar2 + param_4;
        param_1[2] = sVar3 + param_4;
        param_1[3] = sVar4 + param_4;
        param_1[4] = sVar5 + param_4;
        param_1[5] = sVar6 + param_4;
        param_1[6] = sVar7 + param_4;
        param_1[7] = sVar8 + param_4;
        psVar10 = param_2 + 8;
        sVar2 = param_2[9];
        sVar3 = param_2[10];
        sVar4 = param_2[0xb];
        sVar5 = param_2[0xc];
        sVar6 = param_2[0xd];
        sVar7 = param_2[0xe];
        sVar8 = param_2[0xf];
        param_2 = param_2 + 0x10;
        param_1[8] = *psVar10 + param_4;
        param_1[9] = sVar2 + param_4;
        param_1[10] = sVar3 + param_4;
        param_1[0xb] = sVar4 + param_4;
        param_1[0xc] = sVar5 + param_4;
        param_1[0xd] = sVar6 + param_4;
        param_1[0xe] = sVar7 + param_4;
        param_1[0xf] = sVar8 + param_4;
        param_1 = param_1 + 0x10;
      } while (uVar12 < (uVar14 & 0xfffffffffffffff0));
    }
    if (uVar12 < uVar14) {
      psVar10 = param_2;
      do {
        sVar2 = *psVar10;
        psVar10 = psVar10 + 1;
        uVar12 = uVar12 + 1;
        *(short *)((longlong)param_1 + (-2 - (longlong)param_2) + (longlong)psVar10) =
             sVar2 + param_4;
      } while (uVar12 < uVar14);
    }
  }
  return;
}



// FUNCTION 1432f5a20 SetMeshItem body=82 status=ok
// SIG undefined SetMeshItem(void)

void Scaleform::Render::MeshCacheItemUseNode::SetMeshItem(longlong *param_1,longlong param_2)

{
  if (param_1[2] != 0) {
    *(longlong *)(*param_1 + 8) = param_1[1];
    *(longlong *)param_1[1] = *param_1;
    *param_1 = -1;
    param_1[1] = -1;
  }
  param_1[2] = param_2;
  if (param_2 != 0) {
    param_1[1] = *(longlong *)(param_2 + 0x28);
    *param_1 = param_2 + 0x20;
    **(undefined8 **)(param_2 + 0x28) = param_1;
    *(longlong **)(param_2 + 0x28) = param_1;
  }
  return;
}



// FUNCTION 1432f5a80 FUN_1432f5a80 body=200 status=ok
// SIG undefined FUN_1432f5a80(void)

longlong FUN_1432f5a80(longlong param_1,int *param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(ulonglong *)(param_1 + 0x90) < 3) {
    lVar5 = param_1 + 0x98;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x98);
  }
  uVar4 = 0;
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x90) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + uVar2 * 8);
      if ((lVar1 != 0) && (lVar1 != param_4)) {
        if (*(int *)(lVar1 + 0x30) != 0) {
          return 0;
        }
        *param_2 = 0;
        *param_3 = 0;
        if (*(int *)(lVar1 + 0x58) == 0) {
          return lVar1;
        }
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)uVar4 * 8);
          if (param_1 == lVar5) {
            return lVar1;
          }
          uVar4 = uVar4 + 1;
          *param_2 = *param_2 + *(int *)(lVar5 + 0x44);
          *param_3 = *param_3 + *(int *)(lVar5 + 0x48);
        } while (uVar4 < *(uint *)(lVar1 + 0x58));
        return lVar1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x90));
  }
  return 0;
}


