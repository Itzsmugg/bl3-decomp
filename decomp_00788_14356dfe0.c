// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14356dfe0 FUN_14356dfe0 body=83 status=ok
// SIG undefined FUN_14356dfe0(void)

void FUN_14356dfe0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  cVar2 = FUN_143dea8d0(lVar1);
  if (cVar2 == '\0') {
    FUN_1433fc260(*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)*param_3,0xffffffffffffffff);
    *(uint *)(lVar1 + 0xfc) = *(uint *)(lVar1 + 0xfc) | 0x10000;
    FUN_143de5880(lVar1);
  }
  return;
}



// FUNCTION 14356e040 FUN_14356e040 body=572 status=ok
// SIG undefined FUN_14356e040(void)

void FUN_14356e040(longlong param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [2];
  double local_a0 [2];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [4];
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [4];
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [4];
  double local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_c8 = 0;
  uStack_c0 = 0;
  cVar3 = FUN_1433ff300(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),&local_c8,
                        (longlong)param_3);
  if (cVar3 != '\0') {
    puVar4 = local_a8;
    lVar7 = 4;
    lVar5 = 4;
    do {
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    dVar1 = (double)((float)local_c8 * 0.05);
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    local_a8[0] = local_a8[0] & 0xffffffe4 | 4;
    uStack_90 = uStack_b0;
    uStack_8c = uStack_ac;
    dVar2 = (double)(local_c8._4_4_ * 0.05);
    local_a0[1] = dVar1;
    if (9 < ((byte)local_88[0] & 0x1f)) {
      local_b8 = dVar1;
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_88);
      }
      else {
        FUN_143592150();
      }
    }
    local_88[0] = local_88[0] & 0xffffffe4 | 4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    dVar1 = (double)(((float)uStack_c0 - (float)local_c8) * 0.05);
    local_78 = dVar2;
    if (9 < ((byte)local_68[0] & 0x1f)) {
      local_b8 = dVar2;
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
    local_68[0] = local_68[0] & 0xffffffe4 | 4;
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    dVar2 = (double)((uStack_c0._4_4_ - local_c8._4_4_) * 0.05);
    local_58 = dVar1;
    if (9 < ((byte)local_48[0] & 0x1f)) {
      local_b8 = dVar1;
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    local_48[0] = local_48[0] & 0xffffffe4 | 4;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    local_b8 = dVar2;
    local_38 = dVar2;
    FUN_1435e8720(*(longlong *)(param_1 + 0x40),param_2,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3d0),4,local_a8);
    puVar6 = local_28;
    do {
      puVar4 = (uint *)(puVar6 + -0x20);
      puVar6 = puVar6 + -0x20;
      lVar7 = lVar7 + -1;
      if (9 < ((byte)*puVar4 & 0x1f)) {
        if ((*puVar4 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar6);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14356e290 FUN_14356e290 body=76 status=ok
// SIG undefined FUN_14356e290(void)

void FUN_14356e290(longlong param_1,undefined4 *param_2,double param_3,double param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1433fe9a0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),
                        CONCAT44((int)((ulonglong)(param_3 * 20.0) >> 0x20),(float)(param_3 * 20.0))
                        ,(float)(param_4 * 20.0));
  uVar2 = 0xffffffff;
  if (lVar1 != -1) {
    uVar2 = (undefined4)lVar1;
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 14356e2f0 FUN_14356e2f0 body=65 status=ok
// SIG undefined FUN_14356e2f0(void)

void FUN_14356e2f0(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 < 0) {
    *param_2 = 0xffffffff;
    return;
  }
  lVar1 = FUN_1433fed80(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),param_3);
  uVar2 = 0xffffffff;
  if (lVar1 != -1) {
    uVar2 = (undefined4)lVar1;
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 14356e370 FUN_14356e370 body=75 status=ok
// SIG undefined FUN_14356e370(void)

void FUN_14356e370(longlong param_1,int *param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1433fedf0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),
                        CONCAT44((int)((ulonglong)(param_3 * 20.0) >> 0x20),(float)(param_3 * 20.0))
                        ,(float)(param_4 * 20.0));
  iVar2 = -1;
  if (iVar1 != -1) {
    iVar2 = iVar1;
  }
  *param_2 = iVar2;
  return;
}



// FUNCTION 14356e3d0 getLineIndexOfChar body=64 status=ok
// SIG undefined getLineIndexOfChar(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::getLineIndexOfChar
               (longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 0) {
    *param_2 = -1;
    return;
  }
  iVar1 = FUN_1433fee70(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),param_3);
  iVar2 = -1;
  if (iVar1 != -1) {
    iVar2 = iVar1;
  }
  *param_2 = iVar2;
  return;
}



// FUNCTION 14356e420 getLineLength body=71 status=ok
// SIG undefined getLineLength(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::getLineLength
               (longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 < 0) {
    *param_2 = 0xffffffff;
    return;
  }
  lVar1 = Render::Text::DocView::GetLineLength
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),param_3,0);
  uVar2 = 0xffffffff;
  if (lVar1 != -1) {
    uVar2 = (undefined4)lVar1;
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 14356e470 FUN_14356e470 body=868 status=ok
// SIG undefined FUN_14356e470(void)

void FUN_14356e470(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_118;
  undefined8 uStack_110;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  uint local_e8 [2];
  char *local_e0 [2];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8 [4];
  char *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [4];
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [4];
  char *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [4];
  char *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [4];
  double local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  cVar1 = FUN_1433ff1b0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),param_3,&local_108);
  if (cVar1 != '\0') {
    puVar2 = local_e8;
    lVar6 = 6;
    lVar4 = 6;
    do {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pcVar7 = (char *)((double)local_100 * 0.05);
    if (9 < ((byte)local_e8[0] & 0x1f)) {
      if ((local_e8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_e8);
      }
      else {
        FUN_143592150();
      }
    }
    local_e8[0] = local_e8[0] & 0xffffffe4 | 4;
    uStack_d0 = (undefined4)uStack_110;
    uStack_cc = uStack_110._4_4_;
    pcVar8 = (char *)((double)local_fc * 0.05);
    local_e0[1] = pcVar7;
    if (9 < ((byte)local_c8[0] & 0x1f)) {
      local_118 = pcVar7;
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
    local_c8[0] = local_c8[0] & 0xffffffe4 | 4;
    uStack_b0 = (undefined4)uStack_110;
    uStack_ac = uStack_110._4_4_;
    pcVar7 = (char *)((double)local_104 * 0.05);
    local_b8 = pcVar8;
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      local_118 = pcVar8;
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    local_a8[0] = local_a8[0] & 0xffffffe4 | 4;
    uStack_90 = (undefined4)uStack_110;
    uStack_8c = uStack_110._4_4_;
    pcVar8 = (char *)((double)local_f4 * 0.05);
    local_98 = pcVar7;
    if (9 < ((byte)local_88[0] & 0x1f)) {
      local_118 = pcVar7;
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_88);
      }
      else {
        FUN_143592150();
      }
    }
    local_88[0] = local_88[0] & 0xffffffe4 | 4;
    uStack_70 = (undefined4)uStack_110;
    uStack_6c = uStack_110._4_4_;
    pcVar7 = (char *)((double)local_108 * 0.05);
    local_78 = pcVar8;
    if (9 < ((byte)local_68[0] & 0x1f)) {
      local_118 = pcVar8;
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
    local_68[0] = local_68[0] & 0xffffffe4 | 4;
    uStack_50 = (undefined4)uStack_110;
    uStack_4c = uStack_110._4_4_;
    local_58 = pcVar7;
    if (9 < ((byte)local_48[0] & 0x1f)) {
      local_118 = pcVar7;
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x40);
    uStack_30 = (undefined4)uStack_110;
    uStack_2c = uStack_110._4_4_;
    local_118 = "flash.text.TextLineMetrics";
    local_48[0] = local_48[0] & 0xffffffe4 | 4;
    uStack_110 = 0x1a;
    local_38 = (double)local_f8 * 0.05;
    uVar3 = FUN_1435cc580(lVar4,&local_118,*(undefined8 *)(lVar4 + 0x1c8));
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
    FUN_1435e8720(lVar4,param_2,uVar3,6,local_e8);
    if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
      FUN_1434ef880(uVar3);
    }
    puVar5 = local_28;
    do {
      puVar2 = (uint *)(puVar5 + -0x20);
      puVar5 = puVar5 + -0x20;
      lVar6 = lVar6 + -1;
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar5);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14356e7e0 FUN_14356e7e0 body=65 status=ok
// SIG undefined FUN_14356e7e0(void)

void FUN_14356e7e0(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 < 0) {
    *param_2 = 0xffffffff;
    return;
  }
  lVar1 = FUN_1433feee0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),param_3);
  uVar2 = 0xffffffff;
  if (lVar1 != -1) {
    uVar2 = (undefined4)lVar1;
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 14356e830 FUN_14356e830 body=332 status=ok
// SIG undefined FUN_14356e830(void)

void FUN_14356e830(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong local_res8;
  undefined8 local_res20;
  
  local_res20 = 0;
  lVar3 = FUN_1433ff010(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),param_3,&local_res20);
  if (lVar3 == 0) {
    lVar3 = FUN_143360950(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                          &DAT_145af3922,0,0);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  else {
    FUN_1432c2f70(&local_res8);
    FUN_1432c3830(&local_res8,lVar3,local_res20);
    lVar3 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                          (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return;
    }
  }
  return;
}



// FUNCTION 14356e990 getParagraphLength body=39 status=ok
// SIG undefined getParagraphLength(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::getParagraphLength
               (longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1433ff120(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0),(longlong)param_3);
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356e9c0 FUN_14356e9c0 body=380 status=ok
// SIG undefined FUN_14356e9c0(void)

void FUN_14356e9c0(longlong param_1,ulonglong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong local_res8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_78 [80];
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_res8 = 0;
  iVar5 = 0;
  if (param_3 != -1) {
    iVar5 = param_3;
  }
  iVar4 = 0x7fffffff;
  if (param_4 != -1) {
    iVar4 = param_4;
  }
  FUN_1435e8720(lVar1,&local_res8,*(undefined8 *)(lVar1 + 0x3d8),0,0);
  if (iVar5 <= iVar4) {
    uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x300) + 0x10) + 0x180))();
    FUN_1433dd540(local_78,uVar3);
    local_a8 = 0;
    local_a0 = 1;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_1433e6310(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xe0) + 0x10),
                  local_78,&local_a8,(longlong)iVar5,(longlong)iVar4);
    FUN_14356a380(local_res8,&local_a8,local_78);
    FUN_1433dedf0(&local_a8);
    FUN_1433dd700(local_78);
  }
  if (&local_res8 != param_2) {
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880(uVar2);
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = local_res8;
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14356eb50 FUN_14356eb50 body=567 status=ok
// SIG undefined FUN_14356eb50(void)

void FUN_14356eb50(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_828 [2048];
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  cVar6 = FUN_143dea8d0(lVar2);
  if (cVar6 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x10) + 0x38);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x10) + 0x30);
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    uVar7 = FUN_14335fa60(param_3);
    lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0xd8) + 0x10);
    uVar5 = *(ulonglong *)(lVar9 + 0x38);
    uVar11 = *(ulonglong *)(lVar9 + 0x40);
    if (uVar5 < *(ulonglong *)(lVar9 + 0x40)) {
      uVar11 = uVar5;
    }
    uVar10 = *(ulonglong *)(lVar9 + 0x40);
    if (*(ulonglong *)(lVar9 + 0x40) < uVar5) {
      uVar10 = uVar5;
    }
    if (uVar7 < 0x400) {
      FUN_143306bc0(local_828,0x400,*(undefined8 *)*param_3,0xffffffffffffffff);
      FUN_143deb360(lVar2,local_828,uVar11,uVar10,0xffffffffffffffff);
    }
    else {
      uVar8 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)(uVar7 + 1) * 2,0);
      FUN_143306bc0(uVar8,(ulonglong)(uVar7 + 1),*(undefined8 *)*param_3,0xffffffffffffffff);
      FUN_143deb360(lVar2,uVar8,uVar11,uVar10,0xffffffffffffffff);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
    }
    lVar9 = uVar7 + uVar11;
    FUN_143df1be0(*(undefined8 *)(*(longlong *)(lVar2 + 0xe0) + 0xd8),lVar9,0);
    if (lVar4 != 0) {
      Scaleform::Render::Text::DocView::SetParagraphFormat
                (*(undefined8 *)(lVar2 + 0xe0),lVar4,uVar11,lVar9);
    }
    if (lVar3 != 0) {
      Scaleform::Render::Text::DocView::SetTextFormat
                (*(undefined8 *)(lVar2 + 0xe0),lVar3,uVar11,lVar9);
    }
    FUN_143de5880(lVar2);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dedf0(lVar4);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
    }
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar3);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 14356ed90 FUN_14356ed90 body=796 status=ok
// SIG undefined FUN_14356ed90(void)

void FUN_14356ed90(longlong param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 *param_5
                  )

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_838;
  longlong local_830;
  undefined1 local_828 [2048];
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  uVar7 = (ulonglong)param_3;
  cVar3 = FUN_143dea8d0(lVar2);
  if ((((cVar3 == '\0') && (uVar4 = FUN_14335fa60(param_5), -1 < (int)param_3)) &&
      (-1 < (int)param_4)) && (param_3 <= param_4)) {
    uVar5 = Scaleform::Render::Text::StyledText::GetLength
                      (*(undefined8 *)(*(longlong *)(lVar2 + 0xe0) + 0x10));
    uVar10 = ((ulonglong)uVar4 - (ulonglong)(param_4 - param_3)) + uVar5;
    if (uVar7 < uVar5) {
      FUN_1433e6590(*(undefined8 *)(*(longlong *)(lVar2 + 0xe0) + 0x10),&local_838,&local_830,uVar7)
      ;
      lVar8 = local_838;
      lVar9 = local_830;
      if (local_838 != 0) {
        *(int *)(local_838 + 8) = *(int *)(local_838 + 8) + 1;
        *(int *)(local_838 + 8) = *(int *)(local_838 + 8) + 1;
        if (local_838 != 0) {
          piVar1 = (int *)(local_838 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1433dd700(local_838);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_838);
            lVar9 = local_830;
          }
        }
      }
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x10) + 0x38);
      if (lVar8 != 0) {
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1433dd700(lVar8);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
          }
        }
      }
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x10) + 0x30);
    }
    if (lVar9 != 0) {
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dedf0(lVar9);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar9);
        }
      }
    }
    if (uVar4 < 0x400) {
      FUN_143306bc0(local_828,0x400,*(undefined8 *)*param_5,0xffffffffffffffff);
      FUN_143deb360(lVar2,local_828,uVar7,param_4,0xffffffffffffffff);
    }
    else {
      uVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)(uVar4 + 1) * 2,0);
      FUN_143306bc0(uVar6,(ulonglong)(uVar4 + 1),*(undefined8 *)*param_5,0xffffffffffffffff);
      FUN_143deb360(lVar2,uVar6,uVar7,param_4,0xffffffffffffffff);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
    }
    if ((*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0xd8) != 0) &&
       (uVar7 = FUN_143df1d50(), uVar10 < uVar7)) {
      FUN_143df1be0(*(undefined8 *)(*(longlong *)(lVar2 + 0xe0) + 0xd8),uVar10,0);
    }
    if (lVar9 != 0) {
      Scaleform::Render::Text::DocView::SetParagraphFormat
                (*(undefined8 *)(lVar2 + 0xe0),lVar9,param_3,param_3 + uVar4);
    }
    if (lVar8 != 0) {
      Scaleform::Render::Text::DocView::SetTextFormat
                (*(undefined8 *)(lVar2 + 0xe0),lVar8,param_3,param_3 + uVar4);
    }
    FUN_143de5880(lVar2);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dedf0(lVar9);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar9);
      }
    }
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar8);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
      }
    }
  }
  return;
}



// FUNCTION 14356f0e0 FUN_14356f0e0 body=287 status=ok
// SIG undefined FUN_14356f0e0(void)

void FUN_14356f0e0(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_58 [80];
  
  if (param_3 != 0) {
    iVar4 = 0;
    if (param_4 != -1) {
      iVar4 = param_4;
    }
    iVar3 = 0x7fffffff;
    if (param_5 != -1) {
      iVar3 = param_5;
    }
    if (iVar4 <= iVar3) {
      lVar1 = *(longlong *)(param_1 + 0x88);
      uVar2 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10) + 0x180))
                        ();
      FUN_1433dd540(local_58,uVar2);
      local_88 = 0;
      local_80 = 1;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_14356b280(param_3,&local_88,local_58);
      Scaleform::Render::Text::DocView::SetTextFormat
                (*(undefined8 *)(lVar1 + 0xe0),local_58,iVar4,iVar3);
      Scaleform::Render::Text::DocView::SetParagraphFormat
                (*(undefined8 *)(lVar1 + 0xe0),&local_88,iVar4,iVar3);
      FUN_143de5880(lVar1);
      FUN_1433dedf0(&local_88);
      FUN_1433dd700(local_58);
    }
  }
  return;
}



// FUNCTION 14356f210 FUN_14356f210 body=109 status=ok
// SIG undefined FUN_14356f210(void)

undefined8 * FUN_14356f210(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xe0) + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  FUN_1435e8720(*(longlong *)(param_1 + 0x40),param_2,
                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3d8),0,0);
  FUN_14356a380(*param_2,uVar3,uVar2);
  return param_2;
}



// FUNCTION 14356f290 FUN_14356f290 body=30 status=ok
// SIG undefined FUN_14356f290(void)

undefined8 * FUN_14356f290(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  Scaleform::GFx::AS3::Instances::fl_text::TextField::styleSheetGet();
  return param_2;
}



// FUNCTION 14356f2c0 FUN_14356f2c0 body=30 status=ok
// SIG undefined FUN_14356f2c0(void)

undefined8 * FUN_14356f2c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14356e040();
  return param_2;
}



// FUNCTION 14356f2f0 FUN_14356f2f0 body=51 status=ok
// SIG undefined FUN_14356f2f0(void)

undefined8 * FUN_14356f2f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method TextField::getImageReference() is not implemented\n");
  return param_2;
}



// FUNCTION 14356f330 FUN_14356f330 body=30 status=ok
// SIG undefined FUN_14356f330(void)

undefined8 * FUN_14356f330(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14356e470();
  return param_2;
}



// FUNCTION 14356f360 FUN_14356f360 body=30 status=ok
// SIG undefined FUN_14356f360(void)

undefined8 * FUN_14356f360(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14356e9c0();
  return param_2;
}



// FUNCTION 14356f390 FUN_14356f390 body=33 status=ok
// SIG undefined FUN_14356f390(void)

undefined8 * FUN_14356f390(undefined8 *param_1)

{
  FUN_1434fadc0();
  *param_1 = &PTR_FUN_145b3e358;
  return param_1;
}



// FUNCTION 14356f3c0 FUN_14356f3c0 body=173 status=ok
// SIG undefined FUN_14356f3c0(void)

void FUN_14356f3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1434fa6f0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b3e280;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14356f480 FUN_14356f480 body=33 status=ok
// SIG undefined FUN_14356f480(void)

undefined8 * FUN_14356f480(undefined8 *param_1)

{
  FUN_1434faec0();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356f4b0 FUN_14356f4b0 body=227 status=ok
// SIG undefined FUN_14356f4b0(void)

undefined8 * FUN_14356f4b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1434faec0(puVar3,param_2,&PTR_DAT_145b3d820);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1434fadc0(puVar3,param_2,&PTR_DAT_145b3d820);
    *puVar3 = &PTR_FUN_145b3e358;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14356f5a0 FUN_14356f5a0 body=33 status=ok
// SIG undefined FUN_14356f5a0(void)

undefined8 * FUN_14356f5a0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14356f600 UKWIllustDemoOrderDataAsset body=59 status=ok
// SIG undefined UKWIllustDemoOrderDataAsset(void)

undefined8 * UKWIllustDemoOrderDataAsset::UKWIllustDemoOrderDataAsset(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b3e3d0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14356f650 FUN_14356f650 body=185 status=ok
// SIG undefined FUN_14356f650(void)

void FUN_14356f650(longlong param_1,uint param_2,longlong param_3)

{
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    FUN_143590af0(param_3,local_res10,param_1 + 0x40);
    if (1 < param_2) {
      FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x48);
    }
    if (2 < param_2) {
      FUN_143590af0(param_3 + 0x40,local_res10,param_1 + 0x50);
    }
    if (3 < param_2) {
      FUN_143590af0(param_3 + 0x60,local_res10,param_1 + 0x58);
    }
    if (4 < param_2) {
      FUN_143590af0(param_3 + 0x80,local_res10,param_1 + 0x60);
    }
    if (5 < param_2) {
      FUN_143590af0(param_3 + 0xa0,local_res10,param_1 + 0x68);
    }
  }
  return;
}



// FUNCTION 14356f710 FUN_14356f710 body=33 status=ok
// SIG undefined FUN_14356f710(void)

undefined8 * FUN_14356f710(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3e490;
  return param_1;
}



// FUNCTION 14356f740 FUN_14356f740 body=192 status=ok
// SIG undefined FUN_14356f740(void)

void FUN_14356f740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b3e3d0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14356f810 FUN_14356f810 body=33 status=ok
// SIG undefined FUN_14356f810(void)

undefined8 * FUN_14356f810(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356f840 FUN_14356f840 body=214 status=ok
// SIG undefined FUN_14356f840(void)

undefined8 * FUN_14356f840(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3d880);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3d880);
    *puVar2 = &PTR_FUN_145b3e490;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14356f920 FUN_14356f920 body=33 status=ok
// SIG undefined FUN_14356f920(void)

undefined8 * FUN_14356f920(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356f950 FUN_14356f950 body=272 status=ok
// SIG undefined FUN_14356f950(void)

undefined8 * FUN_14356f950(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3bcf0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3bcf0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "center";
    puVar5[0xb] = &DAT_145b068ec;
    puVar5[0xc] = &DAT_145b122f4;
    puVar5[0xd] = "right";
  }
  return param_1;
}



// FUNCTION 14356fa70 FUN_14356fa70 body=77 status=ok
// SIG undefined FUN_14356fa70(void)

undefined8 * FUN_14356fa70(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "center";
  param_1[0xb] = &DAT_145b068ec;
  param_1[0xc] = &DAT_145b122f4;
  param_1[0xd] = "right";
  return param_1;
}



// FUNCTION 14356fad0 FUN_14356fad0 body=33 status=ok
// SIG undefined FUN_14356fad0(void)

undefined8 * FUN_14356fad0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356fb00 FUN_14356fb00 body=250 status=ok
// SIG undefined FUN_14356fb00(void)

undefined8 * FUN_14356fb00(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3bf30);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3bf30);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "dynamic";
    puVar5[0xb] = "input";
  }
  return param_1;
}



// FUNCTION 14356fc00 FUN_14356fc00 body=55 status=ok
// SIG undefined FUN_14356fc00(void)

undefined8 * FUN_14356fc00(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "dynamic";
  param_1[0xb] = "input";
  return param_1;
}



// FUNCTION 14356fc40 FUN_14356fc40 body=33 status=ok
// SIG undefined FUN_14356fc40(void)

undefined8 * FUN_14356fc40(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356fc70 FUN_14356fc70 body=272 status=ok
// SIG undefined FUN_14356fc70(void)

undefined8 * FUN_14356fc70(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3bc28);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3bc28);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "center";
    puVar5[0xb] = "justify";
    puVar5[0xc] = &DAT_145b068ec;
    puVar5[0xd] = "right";
  }
  return param_1;
}



// FUNCTION 14356fd90 FUN_14356fd90 body=77 status=ok
// SIG undefined FUN_14356fd90(void)

undefined8 * FUN_14356fd90(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "center";
  param_1[0xb] = "justify";
  param_1[0xc] = &DAT_145b068ec;
  param_1[0xd] = "right";
  return param_1;
}



// FUNCTION 14356fdf0 FUN_14356fdf0 body=33 status=ok
// SIG undefined FUN_14356fdf0(void)

undefined8 * FUN_14356fdf0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356fe20 FUN_14356fe20 body=228 status=ok
// SIG undefined FUN_14356fe20(void)

undefined8 * FUN_14356fe20(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3bf90);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3bf90);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14356ff10 FUN_14356ff10 body=33 status=ok
// SIG undefined FUN_14356ff10(void)

undefined8 * FUN_14356ff10(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14356ff40 FUN_14356ff40 body=42 status=ok
// SIG undefined FUN_14356ff40(void)

undefined8 * FUN_14356ff40(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b3e798;
  FUN_1433a4740(param_1 + 8);
  return param_1;
}



// FUNCTION 14356ff70 charCountGet body=26 status=ok
// SIG undefined charCountGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextSnapshot::charCountGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1433a4a30(param_1 + 0x40);
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356ff90 FUN_14356ff90 body=135 status=ok
// SIG undefined FUN_14356ff90(void)

void FUN_14356ff90(longlong param_1,undefined4 *param_2,int param_3,longlong *param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong local_res8;
  
  FUN_1432c3140(&local_res8,*(undefined8 *)*param_4,*(undefined4 *)((undefined8 *)*param_4 + 4));
  uVar1 = FUN_1433a4db0(param_1 + 0x40,(longlong)param_3,(local_res8 & 0xfffffffffffffffc) + 0xc,
                        param_5);
  *param_2 = uVar1;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143570020 getSelected body=44 status=ok
// SIG undefined getSelected(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextSnapshot::getSelected
               (longlong param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  
  if (param_4 <= param_3) {
    param_4 = param_3 + 1;
  }
  uVar1 = FUN_1433a4f10(param_1 + 0x40,(longlong)param_3,(longlong)param_4);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143570060 FUN_143570060 body=177 status=ok
// SIG undefined FUN_143570060(void)

void FUN_143570060(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong local_res8;
  
  FUN_1433a4bd0(param_1 + 0x40,&local_res8);
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143570120 FUN_143570120 body=201 status=ok
// SIG undefined FUN_143570120(void)

void FUN_143570120(longlong param_1,longlong *param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong local_res8;
  
  if (param_4 <= param_3) {
    param_4 = param_3 + 1;
  }
  FUN_1433a4b30(param_1 + 0x40,&local_res8,(longlong)param_3,(longlong)param_4,param_5);
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1435701f0 FUN_1435701f0 body=295 status=ok
// SIG undefined FUN_1435701f0(void)

void FUN_1435701f0(longlong param_1,ulonglong *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong local_res8;
  undefined **local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  puVar4 = (ulonglong *)FUN_1435ca860(uVar1,&local_res8);
  uVar2 = *puVar4;
  local_78 = 0x3f800000;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_64 = 0x3f800000;
  uStack_60 = 0;
  uStack_5c = 0;
  local_88[0] = &PTR_FUN_145b3e8d0;
  local_28 = uVar1;
  local_20 = uVar2;
  FUN_1433a56b0(param_1 + 0x40,local_88,(longlong)param_3,(longlong)param_4);
  if (&local_res8 != param_2) {
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar3 - 1;
      }
    }
    *param_2 = uVar2;
  }
  local_88[0] = &PTR_FUN_145b10140;
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  return;
}



// FUNCTION 143570320 FUN_143570320 body=86 status=ok
// SIG undefined FUN_143570320(void)

void FUN_143570320(longlong param_1,double *param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  
  iVar1 = FUN_1433a5210(param_1 + 0x40,(float)(param_3 * 20.0),(float)(param_4 * 20.0),
                        (float)(param_5 * 20.0));
  *param_2 = (double)iVar1;
  return;
}



// FUNCTION 143570380 setSelectColor body=33 status=ok
// SIG undefined setSelectColor(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextSnapshot::setSelectColor
               (longlong param_1,undefined8 param_2,undefined3 param_3)

{
  undefined3 local_res18;
  undefined1 uStackX_1b;
  
  _local_res18 = CONCAT13(0xff,param_3);
  FUN_1433a5190(param_1 + 0x40,&local_res18);
  return;
}



// FUNCTION 1435703e0 FUN_1435703e0 body=30 status=ok
// SIG undefined FUN_1435703e0(void)

undefined8 * FUN_1435703e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435701f0();
  return param_2;
}



// FUNCTION 143570410 FUN_143570410 body=33 status=ok
// SIG undefined FUN_143570410(void)

undefined8 * FUN_143570410(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3e858;
  return param_1;
}



// FUNCTION 143570440 FUN_143570440 body=182 status=ok
// SIG undefined FUN_143570440(void)

void FUN_143570440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b3e798;
    FUN_1433a4740(puVar1 + 8);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143570500 FUN_143570500 body=33 status=ok
// SIG undefined FUN_143570500(void)

undefined8 * FUN_143570500(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143570530 FUN_143570530 body=214 status=ok
// SIG undefined FUN_143570530(void)

undefined8 * FUN_143570530(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c230);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c230);
    *puVar2 = &PTR_FUN_145b3e858;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143570640 FUN_143570640 body=132 status=ok
// SIG undefined FUN_143570640(void)

void FUN_143570640(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b799c0)(DAT_146b799c8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435706d0 FUN_1435706d0 body=167 status=ok
// SIG undefined FUN_1435706d0(void)

void FUN_1435706d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79880)((longlong)DAT_146b79888 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143570780 FUN_143570780 body=145 status=ok
// SIG undefined FUN_143570780(void)

void FUN_143570780(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79440)((longlong)DAT_146b79448 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143570820 FUN_143570820 body=273 status=ok
// SIG undefined FUN_143570820(void)

void FUN_143570820(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined4 local_20;
  longlong local_18;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_28[0] = 0;
  local_20 = *(undefined4 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 0x30);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  local_10 = *(undefined1 *)(param_6 + 0x50);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79b60)(DAT_146b79b68 + lVar2,local_28,local_20,&local_18,local_10);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143570940 FUN_143570940 body=145 status=ok
// SIG undefined FUN_143570940(void)

void FUN_143570940(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79670)((longlong)DAT_146b79678 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143570a00 FUN_143570a00 body=135 status=ok
// SIG undefined FUN_143570a00(void)

void FUN_143570a00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79890)(DAT_146b79898 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143570ac0 FUN_143570ac0 body=180 status=ok
// SIG undefined FUN_143570ac0(void)

void FUN_143570ac0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79b70)((longlong)DAT_146b79b78 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143570be0 FUN_143570be0 body=144 status=ok
// SIG undefined FUN_143570be0(void)

void FUN_143570be0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79460)((longlong)DAT_146b79468 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143570c70 FUN_143570c70 body=167 status=ok
// SIG undefined FUN_143570c70(void)

void FUN_143570c70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b798a0)((longlong)DAT_146b798a8 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143570d20 FUN_143570d20 body=136 status=ok
// SIG undefined FUN_143570d20(void)

void FUN_143570d20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined1 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79b80)(DAT_146b79b88 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143570db0 FUN_143570db0 body=144 status=ok
// SIG undefined FUN_143570db0(void)

void FUN_143570db0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79690)((longlong)DAT_146b79698 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143570e90 FUN_143570e90 body=214 status=ok
// SIG undefined FUN_143570e90(void)

void FUN_143570e90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b798b0)((longlong)DAT_146b798b8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143570f70 FUN_143570f70 body=162 status=ok
// SIG undefined FUN_143570f70(void)

void FUN_143570f70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_28 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined1 *)(param_6 + 0x50);
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79b90)(DAT_146b79b98 + lVar2,&local_28,local_20,local_18,local_10);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_28);
  }
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143571080 FUN_143571080 body=145 status=ok
// SIG undefined FUN_143571080(void)

void FUN_143571080(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79480)((longlong)DAT_146b79488 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143571120 FUN_143571120 body=132 status=ok
// SIG undefined FUN_143571120(void)

void FUN_143571120(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b798c0)(DAT_146b798c8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435711b0 FUN_1435711b0 body=145 status=ok
// SIG undefined FUN_1435711b0(void)

void FUN_1435711b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b796b0)((longlong)DAT_146b796b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143571270 FUN_143571270 body=214 status=ok
// SIG undefined FUN_143571270(void)

void FUN_143571270(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79ba0)((longlong)DAT_146b79ba8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143571380 FUN_143571380 body=165 status=ok
// SIG undefined FUN_143571380(void)

void FUN_143571380(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18 [3];
  
  lVar4 = *(longlong *)(param_3 + 0x10);
  uVar2 = *(undefined4 *)(param_6 + 0x10);
  uVar3 = *(undefined4 *)(param_6 + 0x30);
  if ((((byte)*(undefined4 *)(param_6 + 0x40) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x50) == 0)) {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar5 + 0x80;
    piVar1 = (int *)(lVar5 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x50);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b798d0)(DAT_146b798d8 + lVar4,param_4,uVar2,uVar3,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143571430 FUN_143571430 body=145 status=ok
// SIG undefined FUN_143571430(void)

void FUN_143571430(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b796c0)((longlong)DAT_146b796c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143571500 FUN_143571500 body=228 status=ok
// SIG undefined FUN_143571500(void)

void FUN_143571500(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_38 = Scaleform::GFx::NumberUtil::NaN();
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  local_20 = *(undefined8 *)(param_6 + 0x50);
  uVar2 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79bb0)(DAT_146b79bb8 + lVar1,&local_38,local_30,local_28,local_20);
    uVar2 = local_38;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_38 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 1435715f0 FUN_1435715f0 body=145 status=ok
// SIG undefined FUN_1435715f0(void)

void FUN_1435715f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b794a0)((longlong)DAT_146b794a8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143571690 FUN_143571690 body=148 status=ok
// SIG undefined FUN_143571690(void)

void FUN_143571690(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b796d0)(DAT_146b796d8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435717b0 FUN_1435717b0 body=145 status=ok
// SIG undefined FUN_1435717b0(void)

void FUN_1435717b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b794b0)((longlong)DAT_146b794b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435718f0 FUN_1435718f0 body=144 status=ok
// SIG undefined FUN_1435718f0(void)

void FUN_1435718f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b794c0)((longlong)DAT_146b794c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435719c0 FUN_1435719c0 body=175 status=ok
// SIG undefined FUN_1435719c0(void)

void FUN_1435719c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b796f0)((longlong)DAT_146b796f8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143571a90 FUN_143571a90 body=315 status=ok
// SIG undefined FUN_143571a90(void)

void FUN_143571a90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_28[0] = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 4);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0xc);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79900)(DAT_146b79908 + lVar2,local_28,&local_20,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143571c60 FUN_143571c60 body=112 status=ok
// SIG undefined FUN_143571c60(void)

void FUN_143571c60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79710)(DAT_146b79718 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143571cf0 FUN_143571cf0 body=175 status=ok
// SIG undefined FUN_143571cf0(void)

void FUN_143571cf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b794f0)((longlong)DAT_146b794f8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143571da0 FUN_143571da0 body=132 status=ok
// SIG undefined FUN_143571da0(void)

void FUN_143571da0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79720)(DAT_146b79728 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143571e90 FUN_143571e90 body=145 status=ok
// SIG undefined FUN_143571e90(void)

void FUN_143571e90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79730)((longlong)DAT_146b79738 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143571f50 FUN_143571f50 body=144 status=ok
// SIG undefined FUN_143571f50(void)

void FUN_143571f50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79510)((longlong)DAT_146b79518 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143571fe0 FUN_143571fe0 body=175 status=ok
// SIG undefined FUN_143571fe0(void)

void FUN_143571fe0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79360)((longlong)DAT_146b79368 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143572140 FUN_143572140 body=148 status=ok
// SIG undefined FUN_143572140(void)

void FUN_143572140(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b79750)(DAT_146b79758 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143572200 FUN_143572200 body=144 status=ok
// SIG undefined FUN_143572200(void)

void FUN_143572200(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79530)((longlong)DAT_146b79538 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143572290 FUN_143572290 body=266 status=ok
// SIG undefined FUN_143572290(void)

void FUN_143572290(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79380)(DAT_146b79388 + lVar2,&local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435723a0 FUN_1435723a0 body=148 status=ok
// SIG undefined FUN_1435723a0(void)

void FUN_1435723a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b79760)(DAT_146b79768 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435724a0 FUN_1435724a0 body=132 status=ok
// SIG undefined FUN_1435724a0(void)

void FUN_1435724a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79390)(DAT_146b79398 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572550 FUN_143572550 body=148 status=ok
// SIG undefined FUN_143572550(void)

void FUN_143572550(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b79770)(DAT_146b79778 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435725f0 FUN_1435725f0 body=175 status=ok
// SIG undefined FUN_1435725f0(void)

void FUN_1435725f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79ad0)((longlong)DAT_146b79ad8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435726a0 FUN_1435726a0 body=112 status=ok
// SIG undefined FUN_1435726a0(void)

void FUN_1435726a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79550)(DAT_146b79558 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572710 FUN_143572710 body=142 status=ok
// SIG undefined FUN_143572710(void)

void FUN_143572710(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 *local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 4);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  local_10 = param_6 + 8;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b793a0)(DAT_146b793a8 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572800 FUN_143572800 body=132 status=ok
// SIG undefined FUN_143572800(void)

void FUN_143572800(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79560)(DAT_146b79568 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435728b0 FUN_1435728b0 body=193 status=ok
// SIG undefined FUN_1435728b0(void)

void FUN_1435728b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b793b0)((longlong)DAT_146b793b8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143572980 FUN_143572980 body=112 status=ok
// SIG undefined FUN_143572980(void)

void FUN_143572980(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79790)(DAT_146b79798 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435729f0 FUN_1435729f0 body=112 status=ok
// SIG undefined FUN_1435729f0(void)

void FUN_1435729f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79af0)(DAT_146b79af8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572a60 FUN_143572a60 body=112 status=ok
// SIG undefined FUN_143572a60(void)

void FUN_143572a60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79350)(DAT_146b79358 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572ad0 FUN_143572ad0 body=112 status=ok
// SIG undefined FUN_143572ad0(void)

void FUN_143572ad0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79570)(DAT_146b79578 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572b60 FUN_143572b60 body=132 status=ok
// SIG undefined FUN_143572b60(void)

void FUN_143572b60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b797a0)(DAT_146b797a8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572bf0 FUN_143572bf0 body=132 status=ok
// SIG undefined FUN_143572bf0(void)

void FUN_143572bf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79b00)(DAT_146b79b08 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572c80 FUN_143572c80 body=132 status=ok
// SIG undefined FUN_143572c80(void)

void FUN_143572c80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79580)(DAT_146b79588 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143572d10 FUN_143572d10 body=238 status=ok
// SIG undefined FUN_143572d10(void)

void FUN_143572d10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18[0] = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79320)(DAT_146b79328 + lVar2,local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143572e00 FUN_143572e00 body=144 status=ok
// SIG undefined FUN_143572e00(void)

void FUN_143572e00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b797b0)((longlong)DAT_146b797b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143572eb0 FUN_143572eb0 body=145 status=ok
// SIG undefined FUN_143572eb0(void)

void FUN_143572eb0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79590)((longlong)DAT_146b79598 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143572fb0 FUN_143572fb0 body=145 status=ok
// SIG undefined FUN_143572fb0(void)

void FUN_143572fb0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b795a0)((longlong)DAT_146b795a8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573050 FUN_143573050 body=144 status=ok
// SIG undefined FUN_143573050(void)

void FUN_143573050(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b797d0)((longlong)DAT_146b797d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435730e0 FUN_1435730e0 body=112 status=ok
// SIG undefined FUN_1435730e0(void)

void FUN_1435730e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79b30)(DAT_146b79b38 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573150 FUN_143573150 body=112 status=ok
// SIG undefined FUN_143573150(void)

void FUN_143573150(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79910)(DAT_146b79918 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573220 FUN_143573220 body=132 status=ok
// SIG undefined FUN_143573220(void)

void FUN_143573220(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79b40)(DAT_146b79b48 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435732b0 FUN_1435732b0 body=145 status=ok
// SIG undefined FUN_1435732b0(void)

void FUN_1435732b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b795c0)((longlong)DAT_146b795c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573350 FUN_143573350 body=132 status=ok
// SIG undefined FUN_143573350(void)

void FUN_143573350(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79920)(DAT_146b79928 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435733e0 FUN_1435733e0 body=132 status=ok
// SIG undefined FUN_1435733e0(void)

void FUN_1435733e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b797f0)(DAT_146b797f8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573470 FUN_143573470 body=145 status=ok
// SIG undefined FUN_143573470(void)

void FUN_143573470(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b795d0)((longlong)DAT_146b795d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573510 FUN_143573510 body=200 status=ok
// SIG undefined FUN_143573510(void)

void FUN_143573510(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined1 local_10;
  
  local_10 = *(undefined1 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79330)((longlong)DAT_146b79338 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143573600 FUN_143573600 body=199 status=ok
// SIG undefined FUN_143573600(void)

void FUN_143573600(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79800)((longlong)DAT_146b79808 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 1435736d0 FUN_1435736d0 body=144 status=ok
// SIG undefined FUN_1435736d0(void)

void FUN_1435736d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b795e0)((longlong)DAT_146b795e8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435737c0 FUN_1435737c0 body=144 status=ok
// SIG undefined FUN_1435737c0(void)

void FUN_1435737c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b793c0)((longlong)DAT_146b793c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573850 FUN_143573850 body=177 status=ok
// SIG undefined FUN_143573850(void)

void FUN_143573850(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79810)((longlong)DAT_146b79818 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143573990 FUN_143573990 body=167 status=ok
// SIG undefined FUN_143573990(void)

void FUN_143573990(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79820)((longlong)DAT_146b79828 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573a40 FUN_143573a40 body=144 status=ok
// SIG undefined FUN_143573a40(void)

void FUN_143573a40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79600)((longlong)DAT_146b79608 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573b00 FUN_143573b00 body=112 status=ok
// SIG undefined FUN_143573b00(void)

void FUN_143573b00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b793e0)(DAT_146b793e8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573b70 FUN_143573b70 body=266 status=ok
// SIG undefined FUN_143573b70(void)

void FUN_143573b70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79830)(DAT_146b79838 + lVar2,&local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143573cd0 FUN_143573cd0 body=132 status=ok
// SIG undefined FUN_143573cd0(void)

void FUN_143573cd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b793f0)(DAT_146b793f8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573d60 FUN_143573d60 body=145 status=ok
// SIG undefined FUN_143573d60(void)

void FUN_143573d60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79620)((longlong)DAT_146b79628 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143573e30 FUN_143573e30 body=177 status=ok
// SIG undefined FUN_143573e30(void)

void FUN_143573e30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79840)((longlong)DAT_146b79848 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143573ef0 FUN_143573ef0 body=112 status=ok
// SIG undefined FUN_143573ef0(void)

void FUN_143573ef0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79400)(DAT_146b79408 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573f60 FUN_143573f60 body=112 status=ok
// SIG undefined FUN_143573f60(void)

void FUN_143573f60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79630)(DAT_146b79638 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143573ff0 FUN_143573ff0 body=167 status=ok
// SIG undefined FUN_143573ff0(void)

void FUN_143573ff0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79850)((longlong)DAT_146b79858 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435740a0 FUN_1435740a0 body=132 status=ok
// SIG undefined FUN_1435740a0(void)

void FUN_1435740a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79410)(DAT_146b79418 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143574130 FUN_143574130 body=132 status=ok
// SIG undefined FUN_143574130(void)

void FUN_143574130(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79640)(DAT_146b79648 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435741f0 FUN_1435741f0 body=167 status=ok
// SIG undefined FUN_1435741f0(void)

void FUN_1435741f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79860)((longlong)DAT_146b79868 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435742a0 FUN_1435742a0 body=144 status=ok
// SIG undefined FUN_1435742a0(void)

void FUN_1435742a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79420)((longlong)DAT_146b79428 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143574330 FUN_143574330 body=145 status=ok
// SIG undefined FUN_143574330(void)

void FUN_143574330(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79650)((longlong)DAT_146b79658 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435743d0 FUN_1435743d0 body=112 status=ok
// SIG undefined FUN_1435743d0(void)

void FUN_1435743d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b799b0)(DAT_146b799b8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143574440 FUN_143574440 body=199 status=ok
// SIG undefined FUN_143574440(void)

void FUN_143574440(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79870)((longlong)DAT_146b79878 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143574510 FUN_143574510 body=84 status=ok
// SIG undefined FUN_143574510(void)

undefined8 * FUN_143574510(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145b0cec0;
  puVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = 6;
  param_1[3] = 0;
  do {
    *(undefined4 *)puVar1 = 0;
    *(undefined2 *)((longlong)puVar1 + 4) = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_145b3e508;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 143574570 FUN_143574570 body=725 status=ok
// SIG undefined FUN_143574570(void)

void FUN_143574570(longlong param_1)

{
  ulonglong uVar1;
  
  if (9 < ((byte)*(uint *)(param_1 + 0x248) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x248) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x228) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x228) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x208) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x208) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x200);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x200) = uVar1 - 1;
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x1e0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x1e0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x1c0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x1c0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x1a0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x1a0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x180) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x180) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x160) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x160) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x140) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x140) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x120) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x120) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x100) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x100) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0xe0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0xe0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0xc0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0xc0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0xa0) & 0x1f)) {
    if ((*(uint *)(param_1 + 0xa0) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x80) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x80) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x60) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x60) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x60);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x40) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x40) >> 9 & 1) != 0) {
      FUN_143592150();
      FUN_1435b9dc0(param_1);
      return;
    }
    FUN_1435920c0(param_1 + 0x40);
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143574850 FUN_143574850 body=89 status=ok
// SIG undefined FUN_143574850(void)

undefined8 FUN_143574850(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1435748b0 FUN_1435748b0 body=147 status=ok
// SIG undefined FUN_1435748b0(void)

undefined8 * FUN_1435748b0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[10];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_FUN_145b0cec0;
  FUN_143497620(param_1 + 1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143574950 FUN_143574950 body=151 status=ok
// SIG undefined FUN_143574950(void)

longlong FUN_143574950(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1435749f0 FUN_1435749f0 body=101 status=ok
// SIG undefined FUN_1435749f0(void)

longlong FUN_1435749f0(longlong param_1,ulonglong param_2)

{
  FUN_143dee360(param_1 + 0x80);
  FUN_1435196e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143574a60 FUN_143574a60 body=89 status=ok
// SIG undefined FUN_143574a60(void)

undefined8 FUN_143574a60(undefined8 param_1,ulonglong param_2)

{
  FUN_1434fa790();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143574ac0 FUN_143574ac0 body=89 status=ok
// SIG undefined FUN_143574ac0(void)

undefined8 FUN_143574ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_143574570();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 143574b20 FUN_143574b20 body=150 status=ok
// SIG undefined FUN_143574b20(void)

longlong FUN_143574b20(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143370c10(param_1 + 0x40);
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
    }
  }
  return param_1;
}



// FUNCTION 143574bd0 FUN_143574bd0 body=2896 status=ok
// SIG undefined FUN_143574bd0(void)

void FUN_143574bd0(longlong param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  puVar12 = (ulonglong *)FUN_1435ca830(*(undefined8 *)(param_1 + 0x60),local_res18);
  uVar8 = *puVar12;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
  local_c8._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x48);
  local_f8 = (double)CONCAT44(local_f8._4_4_,(undefined4)local_c8);
  local_d0 = 0;
  local_d8[0] = 3;
  local_c8._4_4_ = local_f8._4_4_;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"indexInRun");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  uVar13 = local_f8;
  local_f8 = (double)CONCAT71(local_f8._1_7_,uVar6);
  uVar11 = local_f8;
  local_f8._4_4_ = SUB84(uVar13,4);
  local_d8[0] = local_d8[0] & 0xffffffe1 | 1;
  local_c8._0_4_ = (uint)local_f8;
  local_c8._4_4_ = local_f8._4_4_;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = (double)uVar11;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar9 + 0x218),"selected",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar13 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
  local_res10 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),uVar13);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(&local_f8,&local_res10);
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),&DAT_145b13b5c);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,&local_f8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < (SUB81(local_f8,0) & 0x1f)) {
    if (((uint)local_f8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar7 = *(uint *)(param_1 + 0x54);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  local_f8 = (double)uVar7;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_c8 = local_f8;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar9 + 0x218),"color",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x50);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_f8 = (double)fVar2;
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_c8 = local_f8;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar9 + 0x218),"height",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(*(float *)(param_1 + 0x10) * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"matrix_a");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(*(float *)(param_1 + 0x20) * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"matrix_b");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(*(float *)(param_1 + 0x14) * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"matrix_c");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(*(float *)(param_1 + 0x24) * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"matrix_d");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(*(float *)(param_1 + 0x1c) * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"matrix_tx");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(*(float *)(param_1 + 0x2c) * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"matrix_ty");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x3c);
  fVar4 = *(float *)(param_1 + 0x38);
  fVar5 = *(float *)(param_1 + 0x34);
  dVar10 = (double)(fVar2 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner0x");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar3 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner0y");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar4 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner1x");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar3 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner1y");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar4 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner2x");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar5 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner2y");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar2 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner3x");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  dVar10 = (double)(fVar5 * 0.05);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_f8 = dVar10;
  local_c8 = dVar10;
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x218),"corner3y");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar8,&local_res8,local_d8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_f8 = (double)((ulonglong)local_f8 & 0xffffffff00000000);
  uStack_f0 = 0;
  FUN_143590450(&local_f8,uVar8);
  FUN_1434b49b0(*(longlong *)(param_1 + 0x68) + 0x40,&local_f8);
  if (9 < (SUB81(local_f8,0) & 0x1f)) {
    if (((uint)local_f8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  if (((uVar8 != 0) && ((uVar8 & 1) == 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
    FUN_1434ef880(uVar8);
  }
  return;
}



// FUNCTION 143575720 FUN_143575720 body=320 status=ok
// SIG undefined FUN_143575720(void)

void FUN_143575720(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_res10 [8];
  longlong local_res18;
  uint local_58 [2];
  undefined8 local_50;
  longlong local_48;
  uint local_38 [2];
  undefined8 local_30;
  
  piVar3 = (int *)(**(code **)(*param_2 + 0xa0))(param_2,local_res10,0);
  iVar1 = *piVar3;
  while (iVar1 != 0) {
    local_58[0] = 0;
    local_50 = 0;
    local_38[0] = 0;
    local_30 = 0;
    (**(code **)(*param_2 + 0x98))(param_2,local_58,iVar1);
    (**(code **)(*param_2 + 0xa8))(param_2,local_38,iVar1);
    lVar2 = local_48;
    if (((byte)local_58[0] & 0x1f) == 10) {
      local_res18 = local_48;
      *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
      FUN_1435759f0(param_1,&local_res18,local_38);
      piVar3 = (int *)(lVar2 + 0x18);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_14335f920(lVar2);
      }
    }
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
    piVar3 = (int *)(**(code **)(*param_2 + 0xa0))(param_2,local_res10,iVar1);
    iVar1 = *piVar3;
  }
  return;
}



// FUNCTION 143575860 FUN_143575860 body=320 status=ok
// SIG undefined FUN_143575860(void)

void FUN_143575860(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_res10 [8];
  longlong local_res18;
  uint local_58 [2];
  undefined8 local_50;
  longlong local_48;
  uint local_38 [2];
  undefined8 local_30;
  
  piVar3 = (int *)(**(code **)(*param_2 + 0xa0))(param_2,local_res10,0);
  iVar1 = *piVar3;
  while (iVar1 != 0) {
    local_58[0] = 0;
    local_50 = 0;
    local_38[0] = 0;
    local_30 = 0;
    (**(code **)(*param_2 + 0x98))(param_2,local_58,iVar1);
    (**(code **)(*param_2 + 0xa8))(param_2,local_38,iVar1);
    lVar2 = local_48;
    if (((byte)local_58[0] & 0x1f) == 10) {
      local_res18 = local_48;
      *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
      FUN_143575c80(param_1,&local_res18,local_38);
      piVar3 = (int *)(lVar2 + 0x18);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_14335f920(lVar2);
      }
    }
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
    piVar3 = (int *)(**(code **)(*param_2 + 0xa0))(param_2,local_res10,iVar1);
    iVar1 = *piVar3;
  }
  return;
}



// FUNCTION 1435759a0 FUN_1435759a0 body=74 status=ok
// SIG undefined FUN_1435759a0(void)

void FUN_1435759a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong local_res18 [2];
  
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((uVar1 & 0xff00) == 0x200) {
    local_res18[0] = param_3[3];
    FUN_1432ee9d0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 1435759f0 FUN_1435759f0 body=653 status=ok
// SIG undefined FUN_1435759f0(void)

void FUN_1435759f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *_Str1;
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 local_res10 [8];
  undefined1 *local_68 [6];
  undefined1 *local_38;
  ulonglong local_30;
  
  FUN_1432c5960(local_68,DAT_146b62f28);
  FUN_1432c5960(&local_38,DAT_146b62f28);
  _Str1 = *(char **)*param_2;
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"fontFamily");
  if (iVar1 == 0) {
    pcVar2 = "font-family";
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"fontSize");
    if (iVar1 == 0) {
      pcVar2 = "font-size";
    }
    else {
      iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"fontStyle");
      if (iVar1 == 0) {
        pcVar2 = "font-style";
      }
      else {
        iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"fontWeight");
        if (iVar1 == 0) {
          pcVar2 = "font-weight";
        }
        else {
          iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"letterSpacing");
          if (iVar1 == 0) {
            pcVar2 = "letter-spacing";
          }
          else {
            iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"marginLeft");
            if (iVar1 == 0) {
              pcVar2 = "margin-left";
            }
            else {
              iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"marginRight");
              if (iVar1 == 0) {
                pcVar2 = "margin-right";
              }
              else {
                iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"textAlign");
                if (iVar1 == 0) {
                  pcVar2 = "text-align";
                }
                else {
                  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"textDecoration");
                  if (iVar1 == 0) {
                    pcVar2 = "text-decoration";
                  }
                  else {
                    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"textIndent");
                    pcVar2 = "text-indent";
                    if (iVar1 != 0) {
                      pcVar2 = _Str1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Scaleform::StringBuffer::AppendString(local_68,pcVar2,0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString(local_68,&DAT_145b138d8,0xffffffffffffffff);
  FUN_143591800(param_3,local_res10,&local_38);
  uVar4 = 0;
  if (local_30 != 0) {
    do {
      iVar1 = isspace((int)(char)local_38[uVar4]);
      if (iVar1 != 0) {
        FUN_1432c5df0(local_68,0x22);
        puVar3 = &DAT_145af3922;
        if (local_38 != (undefined1 *)0x0) {
          puVar3 = local_38;
        }
        Scaleform::StringBuffer::AppendString(local_68,puVar3,local_30);
        FUN_1432c5df0(local_68,0x22);
        goto LAB_143575be1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_30);
  }
  puVar3 = &DAT_145af3922;
  if (local_38 != (undefined1 *)0x0) {
    puVar3 = local_38;
  }
  Scaleform::StringBuffer::AppendString(local_68,puVar3,0xffffffffffffffff);
LAB_143575be1:
  Scaleform::StringBuffer::AppendString(local_68,&DAT_145b13b2c,0xffffffffffffffff);
  puVar3 = &DAT_145af3922;
  if (local_68[0] != (undefined1 *)0x0) {
    puVar3 = local_68[0];
  }
  FUN_1432c3950(param_1,puVar3,0xffffffffffffffff);
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  Scaleform::StringBuffer::~StringBuffer(local_68);
  return;
}



// FUNCTION 143575c80 FUN_143575c80 body=1201 status=ok
// SIG undefined FUN_143575c80(void)

void FUN_143575c80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char *_Str1;
  long lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *_Str2;
  uint *puVar6;
  longlong lVar7;
  size_t sVar8;
  double dVar9;
  undefined1 local_res10 [8];
  char *local_res20;
  undefined4 uStack_64;
  undefined8 uStack_60;
  char *local_58;
  ulonglong local_50;
  
  FUN_1432c5960(&local_58,DAT_146b62f28);
  FUN_143591800(param_3,local_res10,&local_58);
  _Str2 = "";
  if (local_58 != (char *)0x0) {
    _Str2 = local_58;
  }
  lVar7 = 0;
  local_res20 = (char *)0x0;
  _Str1 = *(char **)*param_2;
  lVar4 = lVar7;
  do {
    lVar3 = lVar4 + 1;
    lVar5 = lVar7;
    if (_Str1[lVar4] != "color"[lVar4]) goto LAB_143575d80;
    lVar4 = lVar3;
  } while (lVar3 != 6);
  lVar1 = strtol(_Str2 + 1,&local_res20,0x10);
  puVar6 = (uint *)(param_1 + 0xc0);
  if (9 < ((byte)*puVar6 & 0x1f)) {
    if ((*puVar6 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar6);
    }
    else {
      FUN_143592150();
    }
  }
  *puVar6 = *puVar6 & 0xffffffe3;
  *puVar6 = *puVar6 | 3;
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uStack_64,lVar1);
  *(undefined8 *)(param_1 + 0xd8) = uStack_60;
  goto LAB_14357610e;
  while (lVar5 = lVar4, lVar4 != 8) {
LAB_143575d80:
    lVar4 = lVar5 + 1;
    if (_Str1[lVar5] != "display"[lVar5]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontFamily");
      if (iVar2 == 0) {
        FUN_143590140(param_1 + 0xe0,param_3);
      }
      else {
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontSize");
        if (iVar2 == 0) {
          dVar9 = (double)FUN_14331b260(_Str2,&local_res20);
          param_1 = param_1 + 0x1e0;
          goto LAB_1435760ff;
        }
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontStyle");
        if (iVar2 == 0) {
          sVar8 = 4;
          if (local_50 < 4) {
            sVar8 = local_50;
          }
          iVar2 = strncmp("normal",_Str2,sVar8);
          if (iVar2 == 0) {
            FUN_1434f05f0(param_1 + 0x100,0);
          }
          else {
            sVar8 = 9;
            if (local_50 < 9) {
              sVar8 = local_50;
            }
            iVar2 = strncmp("italic",_Str2,sVar8);
            if (iVar2 == 0) {
              FUN_1434f05f0(param_1 + 0x100,1);
            }
          }
        }
        else {
          iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontWeight");
          lVar4 = lVar7;
          if (iVar2 != 0) goto LAB_143575ef3;
          sVar8 = 6;
          if (local_50 < 6) {
            sVar8 = local_50;
          }
          iVar2 = strncmp("normal",_Str2,sVar8);
          if (iVar2 == 0) {
            FUN_1434f05f0(param_1 + 0xa0,0);
          }
          else {
            sVar8 = 4;
            if (local_50 < 4) {
              sVar8 = local_50;
            }
            iVar2 = strncmp("bold",_Str2,sVar8);
            if (iVar2 == 0) {
              FUN_1434f05f0(param_1 + 0xa0,1);
            }
          }
        }
      }
      break;
    }
  }
  goto LAB_14357610e;
  while (lVar4 = lVar5, lVar5 != 8) {
LAB_143575ef3:
    lVar5 = lVar4 + 1;
    if (_Str1[lVar4] != "kerning"[lVar4]) goto LAB_143575f80;
  }
  sVar8 = 5;
  if (local_50 < 5) {
    sVar8 = local_50;
  }
  iVar2 = strncmp("false",_Str2,sVar8);
  if (iVar2 == 0) {
    FUN_1434f05f0(param_1 + 0x140,0);
  }
  else {
    sVar8 = 4;
    if (local_50 < 4) {
      sVar8 = local_50;
    }
    iVar2 = strncmp("true",_Str2,sVar8);
    if (iVar2 == 0) {
      FUN_1434f05f0(param_1 + 0x140,1);
    }
  }
  goto LAB_14357610e;
  while (lVar7 = lVar4, lVar4 != 8) {
LAB_143575f80:
    lVar4 = lVar7 + 1;
    if (_Str1[lVar7] != "leading"[lVar7]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"letterSpacing");
      if (iVar2 == 0) {
        dVar9 = (double)FUN_14331b260(_Str2,&local_res20);
        param_1 = param_1 + 0x1c0;
        goto LAB_1435760ff;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"marginLeft");
      if (iVar2 == 0) {
        dVar9 = (double)FUN_14331b260(_Str2,&local_res20);
        param_1 = param_1 + 0x180;
        goto LAB_1435760ff;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"marginRight");
      if (iVar2 == 0) {
        dVar9 = (double)FUN_14331b260(_Str2,&local_res20);
        param_1 = param_1 + 0x1a0;
        goto LAB_1435760ff;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"textAlign");
      if (iVar2 == 0) {
        FUN_143590140(param_1 + 0x40,param_3);
        goto LAB_14357610e;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"textDecoration");
      if (iVar2 != 0) {
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"textIndent");
        if (iVar2 != 0) goto LAB_14357610e;
        dVar9 = (double)FUN_14331b260(_Str2,&local_res20);
        param_1 = param_1 + 0x120;
        goto LAB_1435760ff;
      }
      sVar8 = 4;
      if (local_50 < 4) {
        sVar8 = local_50;
      }
      iVar2 = strncmp("none",_Str2,sVar8);
      if (iVar2 == 0) {
        FUN_1434f05f0(param_1 + 0x228,0);
      }
      else {
        sVar8 = 9;
        if (local_50 < 9) {
          sVar8 = local_50;
        }
        iVar2 = strncmp("underline",_Str2,sVar8);
        if (iVar2 == 0) {
          FUN_1434f05f0(param_1 + 0x228,1);
        }
      }
      goto LAB_14357610e;
    }
  }
  dVar9 = (double)FUN_14331b260(_Str2,&local_res20);
  param_1 = param_1 + 0x160;
LAB_1435760ff:
  FUN_1434f06a0(param_1,(double)(float)dVar9);
LAB_14357610e:
  Scaleform::StringBuffer::~StringBuffer(&local_58);
  return;
}



// FUNCTION 143576140 FUN_143576140 body=47 status=ok
// SIG undefined FUN_143576140(void)

undefined8 * FUN_143576140(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined4 *)(param_1 + 8) = 0x1010101;
  *param_1 = &PTR_FUN_145b1c0f8;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x1010101;
  return param_1;
}



// FUNCTION 143576180 FUN_143576180 body=33 status=ok
// SIG undefined FUN_143576180(void)

undefined8 * FUN_143576180(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b41960;
  return param_1;
}



// FUNCTION 1435761b0 FUN_1435761b0 body=187 status=ok
// SIG undefined FUN_1435761b0(void)

void FUN_1435761b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *(undefined4 *)(puVar1 + 8) = 0x1010101;
    *puVar1 = &PTR_FUN_145b1c0f8;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x1010101;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143576280 FUN_143576280 body=33 status=ok
// SIG undefined FUN_143576280(void)

undefined8 * FUN_143576280(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435762b0 FUN_1435762b0 body=214 status=ok
// SIG undefined FUN_1435762b0(void)

undefined8 * FUN_1435762b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3ecf0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3ecf0);
    *puVar2 = &PTR_FUN_145b41960;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143576390 FUN_143576390 body=44 status=ok
// SIG undefined FUN_143576390(void)

undefined8 * FUN_143576390(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_145b1c0f8;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return param_1;
}



// FUNCTION 1435763d0 FUN_1435763d0 body=33 status=ok
// SIG undefined FUN_1435763d0(void)

undefined8 * FUN_1435763d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b419d8;
  return param_1;
}



// FUNCTION 143576400 FUN_143576400 body=184 status=ok
// SIG undefined FUN_143576400(void)

void FUN_143576400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *(undefined4 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_145b1c0f8;
    *(undefined1 *)((longlong)puVar1 + 0x44) = 1;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435764c0 FUN_1435764c0 body=33 status=ok
// SIG undefined FUN_1435764c0(void)

undefined8 * FUN_1435764c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435764f0 FUN_1435764f0 body=214 status=ok
// SIG undefined FUN_1435764f0(void)

undefined8 * FUN_1435764f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b40a20);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b40a20);
    *puVar2 = &PTR_FUN_145b419d8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435765d0 FUN_1435765d0 body=33 status=ok
// SIG undefined FUN_1435765d0(void)

undefined8 * FUN_1435765d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143576600 FUN_143576600 body=215 status=ok
// SIG undefined FUN_143576600(void)

undefined8 * FUN_143576600(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3ed50);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b3ed50);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435766e0 FUN_1435766e0 body=33 status=ok
// SIG undefined FUN_1435766e0(void)

undefined8 * FUN_1435766e0(undefined8 *param_1)

{
  FUN_143519560();
  *param_1 = &PTR_FUN_145b37e70;
  return param_1;
}



// FUNCTION 143576710 FUN_143576710 body=88 status=ok
// SIG undefined FUN_143576710(void)

void FUN_143576710(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method instance::ContextMenu::builtInItemsGet() is not implemented\n");
  FUN_1435ccdc0(*(undefined8 *)(param_1 + 0x40),local_res8,param_2,
                "flash.ui.ContextMenuBuiltInItems",0,0);
  return;
}



// FUNCTION 1435767a0 FUN_1435767a0 body=130 status=ok
// SIG undefined FUN_1435767a0(void)

void FUN_1435767a0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = (ulonglong *)FUN_1435ca860(*(undefined8 *)(param_1 + 0x40),local_res8);
  uVar1 = *param_2;
  uVar2 = *puVar4;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = uVar2;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014357681e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))
            (plVar3,2,"The method instance::ContextMenu::customItemsGet() is not implemented\n");
  return;
}



// FUNCTION 1435768c0 FUN_1435768c0 body=104 status=ok
// SIG undefined FUN_1435768c0(void)

undefined8 * FUN_1435768c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method instance::ContextMenu::builtInItemsGet() is not implemented\n");
  FUN_1435ccdc0(*(undefined8 *)(param_1 + 0x40),local_res8,param_2,
                "flash.ui.ContextMenuBuiltInItems",0,0);
  return param_2;
}



// FUNCTION 143576930 FUN_143576930 body=30 status=ok
// SIG undefined FUN_143576930(void)

undefined8 * FUN_143576930(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435767a0();
  return param_2;
}



// FUNCTION 143576960 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b41a50;
  return param_1;
}



// FUNCTION 143576990 FUN_143576990 body=173 status=ok
// SIG undefined FUN_143576990(void)

void FUN_143576990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143519560(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b37e70;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143576a50 FUN_143576a50 body=33 status=ok
// SIG undefined FUN_143576a50(void)

undefined8 * FUN_143576a50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143576a80 FUN_143576a80 body=214 status=ok
// SIG undefined FUN_143576a80(void)

undefined8 * FUN_143576a80(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3ea18);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b3ea18);
    *puVar2 = &PTR_FUN_145b41a50;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143576b60 FUN_143576b60 body=33 status=ok
// SIG undefined FUN_143576b60(void)

undefined8 * FUN_143576b60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143576b90 FUN_143576b90 body=216 status=ok
// SIG undefined FUN_143576b90(void)

undefined8 * FUN_143576b90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3f020);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3f020);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x668,0);
  if (lVar3 != 0) {
    FUN_143576c70(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143576c70 FUN_143576c70 body=3017 status=ok
// SIG undefined FUN_143576c70(void)

undefined8 * FUN_143576c70(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0x41;
  *param_1 = &PTR_ForEachChild_GC_145b41cc0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x12;
  *(undefined4 *)(param_1 + 0xb) = 0x42;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xc0;
  *(undefined4 *)(param_1 + 0xc) = 0xdc;
  *(undefined4 *)((longlong)param_1 + 100) = 8;
  *(undefined4 *)(param_1 + 0xd) = 0x43;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x14;
  param_1[0xe] = 0;
  param_1[0x20] = "Begin";
  param_1[0x21] = "Break";
  param_1[0x22] = "ClrDsp";
  param_1[0x23] = "ClrLn";
  param_1[0x24] = "Delete";
  param_1[0x25] = "DelChr";
  param_1[0x26] = "DelLn";
  param_1[0x27] = &DAT_145b41dd0;
  param_1[0x28] = &DAT_145b41dd8;
  param_1[0x29] = &DAT_145b41ddc;
  param_1[0x2a] = &DAT_145b40c0c;
  param_1[0x2b] = &DAT_145b40c24;
  param_1[0x2c] = &DAT_145b40c34;
  param_1[0x2d] = &DAT_145b40c48;
  param_1[0x2e] = &DAT_145b40c5c;
  param_1[0x2f] = &DAT_145b40c6c;
  param_1[0x30] = &DAT_145b40c7c;
  *(undefined4 *)(param_1 + 0xf) = 0xbc;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0x11;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x44;
  *(undefined4 *)(param_1 + 0x11) = 0x2e;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x28;
  *(undefined4 *)(param_1 + 0x12) = 0x45;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x23;
  *(undefined4 *)(param_1 + 0x13) = 0xd;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xbb;
  *(undefined4 *)(param_1 + 0x14) = 0x1b;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x46;
  *(undefined4 *)(param_1 + 0x15) = 0x70;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x79;
  *(undefined4 *)(param_1 + 0x16) = 0x7a;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7b;
  *(undefined4 *)(param_1 + 0x17) = 0x7c;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x7d;
  *(undefined4 *)(param_1 + 0x18) = 0x7e;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x71;
  *(undefined4 *)(param_1 + 0x19) = 0x72;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x73;
  *(undefined4 *)(param_1 + 0x1a) = 0x74;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x75;
  *(undefined4 *)(param_1 + 0x1b) = 0x76;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x77;
  *(undefined4 *)(param_1 + 0x1c) = 0x78;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x47;
  *(undefined4 *)(param_1 + 0x1d) = 0x48;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x24;
  *(undefined4 *)(param_1 + 0x1e) = 0x49;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x2d;
  *(undefined4 *)(param_1 + 0x1f) = 0x4a;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x4b;
  param_1[0x31] = &DAT_145b41de4;
  param_1[0x32] = &DAT_145b41de8;
  param_1[0x33] = &DAT_145b41dec;
  param_1[0x34] = &DAT_145b41df0;
  param_1[0x35] = &DAT_145b40ccc;
  param_1[0x36] = &DAT_145b41df4;
  param_1[0x37] = &DAT_145b41df8;
  param_1[0x38] = &DAT_145b41dfc;
  param_1[0x39] = &DAT_145b41e00;
  param_1[0x3a] = &DAT_145b41e04;
  param_1[0x3b] = &DAT_145b41e08;
  param_1[0x3c] = &DAT_145b41e0c;
  param_1[0x3d] = &DAT_145b41e10;
  param_1[0x3e] = &DAT_145b41e14;
  param_1[0x3f] = &DAT_145b41e18;
  param_1[0x40] = &DAT_145b40d7c;
  param_1[0x41] = &DAT_145b41e1c;
  param_1[0x42] = &DAT_145b41e20;
  param_1[0x43] = &DAT_145b41e24;
  param_1[0x44] = &DAT_145b41e28;
  param_1[0x45] = &DAT_145b41e2c;
  param_1[0x46] = &DAT_145b41e30;
  param_1[0x47] = &DAT_145b40dec;
  param_1[0x48] = &DAT_145b40dfc;
  param_1[0x49] = &DAT_145b40e0c;
  param_1[0x4a] = &DAT_145b40e1c;
  param_1[0x4b] = &DAT_145b40e2c;
  param_1[0x4c] = &DAT_145b40e3c;
  param_1[0x4d] = &DAT_145b41e34;
  param_1[0x4e] = &DAT_145b41e3c;
  param_1[0x4f] = &DAT_145b41e44;
  param_1[0x50] = "Insert";
  param_1[0x51] = "InsChr";
  param_1[0x52] = "InsLn";
  param_1[0x53] = &DAT_145b41e64;
  param_1[0x54] = &DAT_145b41e6c;
  param_1[0x55] = "ModeSw";
  param_1[0x56] = &DAT_145b41e7c;
  param_1[0x57] = &DAT_145b41e84;
  param_1[0x58] = &DAT_145b41e8c;
  param_1[0x59] = "Pause";
  param_1[0x5a] = &DAT_145b41e9c;
  param_1[0x5b] = "Print";
  param_1[0x5c] = "PrntScrn";
  param_1[0x5d] = &DAT_145b41ebc;
  param_1[0x5e] = "Reset";
  param_1[0x5f] = "Right";
  param_1[0x60] = "ScrlLck";
  param_1[0x61] = "Select";
  param_1[0x62] = &DAT_145b41ee8;
  param_1[99] = "SysReq";
  param_1[100] = &DAT_145b41ef8;
  param_1[0x65] = &DAT_145b41efc;
  param_1[0x66] = &DAT_145b41f04;
  param_1[0x67] = &DAT_145b41f08;
  *(undefined4 *)(param_1 + 0x68) = 0x4c;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x25;
  *(undefined4 *)(param_1 + 0x69) = 0xdb;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x4d;
  *(undefined4 *)(param_1 + 0x6a) = 0xbd;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x4e;
  *(undefined4 *)(param_1 + 0x6b) = 0x30;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x31;
  *(undefined4 *)(param_1 + 0x6c) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x33;
  *(undefined4 *)(param_1 + 0x6d) = 0x34;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x35;
  *(undefined4 *)(param_1 + 0x6e) = 0x36;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x37;
  *(undefined4 *)(param_1 + 0x6f) = 0x38;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0x39;
  *(undefined4 *)(param_1 + 0x70) = 0x15;
  *(undefined4 *)((longlong)param_1 + 900) = 0x60;
  *(undefined4 *)(param_1 + 0x71) = 0x61;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x62;
  *(undefined4 *)(param_1 + 0x72) = 99;
  *(undefined4 *)((longlong)param_1 + 0x394) = 100;
  *(undefined4 *)(param_1 + 0x73) = 0x65;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x66;
  *(undefined4 *)(param_1 + 0x74) = 0x67;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x68;
  *(undefined4 *)(param_1 + 0x75) = 0x69;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x6b;
  *(undefined4 *)(param_1 + 0x76) = 0x6e;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x6f;
  *(undefined4 *)(param_1 + 0x77) = 0x6c;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x6a;
  *(undefined4 *)(param_1 + 0x78) = 0x6d;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x4f;
  *(undefined4 *)(param_1 + 0x79) = 0x50;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x22;
  *(undefined4 *)(param_1 + 0x7a) = 0x21;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0xbe;
  *(undefined4 *)(param_1 + 0x7b) = 0x51;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0xde;
  *(undefined4 *)(param_1 + 0x7c) = 0x52;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x27;
  *(undefined4 *)(param_1 + 0x7d) = 0xdd;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x53;
  *(undefined4 *)(param_1 + 0x7e) = 0xba;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x10;
  *(undefined4 *)(param_1 + 0x7f) = 0xbf;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x20;
  param_1[0x80] = &DAT_145b41f10;
  param_1[0x81] = &DAT_145b41f14;
  param_1[0x82] = &DAT_145b41f18;
  param_1[0x83] = &DAT_145b41f1c;
  param_1[0x84] = &DAT_145b41f20;
  param_1[0x85] = &DAT_145b41f24;
  param_1[0x86] = &DAT_145b41f28;
  param_1[0x87] = &DAT_145b41f2c;
  param_1[0x88] = &DAT_145b41f30;
  param_1[0x89] = &DAT_145b41f34;
  param_1[0x8a] = &DAT_145b41f38;
  param_1[0x8b] = &DAT_145b41f3c;
  param_1[0x8c] = &DAT_145b41f40;
  param_1[0x8d] = &DAT_145b41f44;
  param_1[0x8e] = &DAT_145b41f48;
  param_1[0x8f] = &DAT_145b41f4c;
  param_1[0x90] = &DAT_145b41f50;
  param_1[0x91] = &DAT_145b41f54;
  param_1[0x92] = &DAT_145b41f58;
  param_1[0x93] = &DAT_145b41f5c;
  param_1[0x94] = &DAT_145b41f60;
  param_1[0x95] = &DAT_145b41f64;
  param_1[0x96] = &DAT_145b41f68;
  param_1[0x97] = &DAT_145b41f6c;
  param_1[0x98] = &DAT_145b41f70;
  param_1[0x99] = &DAT_145b41f74;
  param_1[0x9a] = &DAT_145b41f78;
  param_1[0x9b] = &DAT_145b41f7c;
  param_1[0x9c] = &DAT_145b41f80;
  param_1[0x9d] = &DAT_145b41f84;
  param_1[0x9e] = &DAT_145b41f88;
  param_1[0x9f] = &DAT_145b41f8c;
  param_1[0xa0] = &DAT_145b41f90;
  param_1[0xa1] = &DAT_145b41f94;
  param_1[0xa2] = &DAT_145b41f98;
  param_1[0xa3] = &DAT_145b41f9c;
  param_1[0xa4] = &DAT_145b41fa0;
  param_1[0xa5] = &DAT_145b41fa4;
  param_1[0xa6] = &DAT_145b41fa8;
  param_1[0xa7] = &DAT_145b41fac;
  param_1[0xa8] = &DAT_145b41fb0;
  param_1[0xa9] = &DAT_145b41fb4;
  param_1[0xaa] = &DAT_145b41fb8;
  param_1[0xab] = &DAT_145b41fbc;
  param_1[0xac] = &DAT_145b41fc0;
  param_1[0xad] = &DAT_145b41fc4;
  param_1[0xae] = &DAT_145b41fc8;
  param_1[0xaf] = &DAT_145b41fcc;
  param_1[0xb0] = &DAT_145b41fd0;
  param_1[0xb1] = &DAT_145b41fd4;
  param_1[0xb2] = &DAT_145b41fd8;
  param_1[0xb3] = &DAT_145b41fdc;
  param_1[0xb4] = &DAT_145b41fe0;
  param_1[0xb5] = &DAT_145b41fe4;
  param_1[0xb6] = &DAT_145b41fe8;
  param_1[0xb7] = &DAT_145b41fec;
  param_1[0xb8] = &DAT_145b41ff0;
  param_1[0xb9] = &DAT_145b41ff4;
  param_1[0xba] = &DAT_145b41ff8;
  param_1[0xbb] = &DAT_145b41ffc;
  param_1[0xbc] = &DAT_145b42000;
  param_1[0xbd] = &DAT_145b42004;
  param_1[0xbe] = &DAT_145b42008;
  param_1[0xbf] = &DAT_145b4200c;
  param_1[0xc0] = &DAT_145b42010;
  param_1[0xc1] = &DAT_145b42014;
  param_1[0xc2] = &DAT_145b42018;
  param_1[0xc3] = &DAT_145b4201c;
  param_1[0xc4] = &DAT_145b42020;
  param_1[0xc5] = &DAT_145b42024;
  param_1[0xc6] = &DAT_145b42028;
  param_1[199] = &DAT_145b4202c;
  *(undefined4 *)(param_1 + 200) = 0x54;
  *(undefined4 *)((longlong)param_1 + 0x644) = 9;
  *(undefined4 *)(param_1 + 0xc9) = 0x55;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0x26;
  *(undefined4 *)(param_1 + 0xca) = 0x56;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0x57;
  *(undefined4 *)(param_1 + 0xcb) = 0x58;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0x59;
  *(undefined4 *)(param_1 + 0xcc) = 0x5a;
  return param_1;
}



// FUNCTION 143577840 FUN_143577840 body=66 status=ok
// SIG undefined FUN_143577840(void)

void FUN_143577840(longlong param_1,byte *param_2)

{
  byte local_res8 [32];
  
  FUN_14335f850(*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10)
                + 0x2400,local_res8);
  *param_2 = local_res8[0] >> 3 & 1;
  return;
}



// FUNCTION 143577890 FUN_143577890 body=66 status=ok
// SIG undefined FUN_143577890(void)

void FUN_143577890(longlong param_1,byte *param_2)

{
  byte local_res8 [32];
  
  FUN_14335f850(*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10)
                + 0x2400,local_res8);
  *param_2 = local_res8[0] >> 4 & 1;
  return;
}



// FUNCTION 1435778f0 FUN_1435778f0 body=33 status=ok
// SIG undefined FUN_1435778f0(void)

undefined8 * FUN_1435778f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143577920 FUN_143577920 body=232 status=ok
// SIG undefined FUN_143577920(void)

undefined8 * FUN_143577920(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3efc0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3efc0);
  }
  FUN_1435b8600(*param_1,uVar4);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,*param_1);
    *(undefined4 *)(puVar2 + 10) = 1;
    *puVar2 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 3;
    puVar2[0xb] = 2;
  }
  return param_1;
}



// FUNCTION 143577a10 FUN_143577a10 body=55 status=ok
// SIG undefined FUN_143577a10(void)

undefined8 * FUN_143577a10(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 1;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  param_1[0xb] = 2;
  return param_1;
}



// FUNCTION 143577a50 FUN_143577a50 body=33 status=ok
// SIG undefined FUN_143577a50(void)

undefined8 * FUN_143577a50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143577a80 FUN_143577a80 body=228 status=ok
// SIG undefined FUN_143577a80(void)

undefined8 * FUN_143577a80(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b408b0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b408b0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143577b70 FUN_143577b70 body=33 status=ok
// SIG undefined FUN_143577b70(void)

undefined8 * FUN_143577b70(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143577bf0 FUN_143577bf0 body=186 status=ok
// SIG undefined FUN_143577bf0(void)

void FUN_143577bf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  RefCountImpl *local_res8;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  plVar3 = *(longlong **)(lVar1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_18 = 0x16;
    (**(code **)(*plVar3 + 8))(plVar3,lVar1,&local_18);
    return;
  }
  plVar3 = (longlong *)Scaleform::GFx::StateBag::GetLogState(lVar1 + 0x10,&local_res8);
  lVar2 = *plVar3;
  if (local_res8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  if (lVar2 != 0) {
    plVar3 = (longlong *)Scaleform::GFx::StateBag::GetLogState(lVar1 + 0x10,&local_res8);
    FUN_1434a1650(*plVar3 + 0x18,"No user event handler interface is installed; Mouse.hide failed.")
    ;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
    }
  }
  return;
}



// FUNCTION 143577cb0 FUN_143577cb0 body=186 status=ok
// SIG undefined FUN_143577cb0(void)

void FUN_143577cb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  RefCountImpl *local_res8;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  plVar3 = *(longlong **)(lVar1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_18 = 0x15;
    (**(code **)(*plVar3 + 8))(plVar3,lVar1,&local_18);
    return;
  }
  plVar3 = (longlong *)Scaleform::GFx::StateBag::GetLogState(lVar1 + 0x10,&local_res8);
  lVar2 = *plVar3;
  if (local_res8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  if (lVar2 != 0) {
    plVar3 = (longlong *)Scaleform::GFx::StateBag::GetLogState(lVar1 + 0x10,&local_res8);
    FUN_1434a1650(*plVar3 + 0x18,"No user event handler interface is installed; Mouse.hide failed.")
    ;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
    }
  }
  return;
}



// FUNCTION 143577d70 FUN_143577d70 body=33 status=ok
// SIG undefined FUN_143577d70(void)

undefined8 * FUN_143577d70(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143577da0 FUN_143577da0 body=283 status=ok
// SIG undefined FUN_143577da0(void)

undefined8 * FUN_143577da0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3e940);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3e940);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b26468;
    puVar5[10] = "arrow";
    puVar5[0xb] = &DAT_145b238ac;
    puVar5[0xc] = "button";
    puVar5[0xd] = &DAT_145b42040;
    puVar5[0xe] = &DAT_145b42048;
  }
  return param_1;
}



// FUNCTION 143577ed0 FUN_143577ed0 body=88 status=ok
// SIG undefined FUN_143577ed0(void)

undefined8 * FUN_143577ed0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26468;
  param_1[10] = "arrow";
  param_1[0xb] = &DAT_145b238ac;
  param_1[0xc] = "button";
  param_1[0xd] = &DAT_145b42040;
  param_1[0xe] = &DAT_145b42048;
  return param_1;
}



// FUNCTION 143577f30 FUN_143577f30 body=33 status=ok
// SIG undefined FUN_143577f30(void)

undefined8 * FUN_143577f30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143577f60 FUN_143577f60 body=228 status=ok
// SIG undefined FUN_143577f60(void)

undefined8 * FUN_143577f60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3eb70);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3eb70);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143578050 FUN_143578050 body=33 status=ok
// SIG undefined FUN_143578050(void)

undefined8 * FUN_143578050(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143578080 FUN_143578080 body=193 status=ok
// SIG undefined FUN_143578080(void)

void FUN_143578080(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  iVar2 = Scaleform::GFx::MovieImpl::GetMultitouchInputMode
                    (*(undefined8 *)(*(longlong *)(lVar3 + 0x300) + 0x10));
  if (iVar2 == 1) {
    uVar6 = 10;
    pcVar5 = "touchPoint";
  }
  else {
    if (iVar2 != 2) {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218);
      if (iVar2 == 3) {
        uVar6 = 5;
        pcVar5 = "mixed";
      }
      else {
        uVar6 = 4;
        pcVar5 = "none";
      }
      goto LAB_14357810b;
    }
    uVar6 = 7;
    pcVar5 = "gesture";
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218);
LAB_14357810b:
  lVar3 = FUN_143360950(uVar4,pcVar5,uVar6,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 143578150 FUN_143578150 body=178 status=ok
// SIG undefined FUN_143578150(void)

void FUN_143578150(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char *_Str1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  _Str1 = *(char **)*param_3;
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"touchPoint");
  lVar2 = 0;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  else {
    do {
      lVar4 = lVar2;
      lVar2 = 0;
      if (_Str1[lVar4] != "gesture"[lVar4]) goto LAB_1435781c2;
      lVar2 = lVar4 + 1;
    } while (lVar4 + 1 != 8);
    iVar3 = (int)lVar4 + -5;
  }
  goto LAB_1435781e1;
  while (lVar2 = lVar4 + 1, lVar4 + 1 != 6) {
LAB_1435781c2:
    lVar4 = lVar2;
    bVar5 = _Str1[lVar4] == "mixed"[lVar4];
    if (!bVar5) goto LAB_1435781d9;
  }
  bVar5 = _Str1[lVar4] == "mixed"[lVar4];
LAB_1435781d9:
  iVar3 = 0;
  if (bVar5) {
    iVar3 = 3;
  }
LAB_1435781e1:
  Scaleform::GFx::MovieImpl::SetMultitouchInputMode
            (*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),iVar3);
  return;
}



// FUNCTION 143578210 FUN_143578210 body=44 status=ok
// SIG undefined FUN_143578210(void)

void FUN_143578210(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Scaleform::GFx::MovieImpl::GetMaxTouchPoints
                    (*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                      0x10));
  *param_2 = uVar1;
  return;
}



// FUNCTION 143578250 FUN_143578250 body=433 status=ok
// SIG undefined FUN_143578250(void)

void FUN_143578250(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = Scaleform::GFx::MovieImpl::GetSupportedGesturesMask
                    (*(undefined8 *)(*(longlong *)(lVar7 + 0x300) + 0x10));
  uVar4 = FUN_1435cb320(lVar7);
  lVar5 = FUN_1435b5bc0(uVar4);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_143623eb0(lVar5,uVar4);
  }
  uVar2 = *param_2;
  if (uVar6 != uVar2) {
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = uVar6;
  }
  if ((uVar3 & 1) != 0) {
    lVar5 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x218),&DAT_145b42070,3);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    FUN_143578ef0(*param_2,lVar5);
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
  }
  if ((uVar3 & 4) != 0) {
    lVar5 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x218),"rotate",6);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    FUN_143578ef0(*param_2,lVar5);
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
  }
  if ((uVar3 & 8) != 0) {
    lVar5 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x218),"swipe",5);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    FUN_143578ef0(*param_2,lVar5);
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
  }
  if ((uVar3 & 2) != 0) {
    lVar7 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x218),&DAT_145b418d8,4);
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
    FUN_143578ef0(*param_2,lVar7);
    piVar1 = (int *)(lVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar7);
    }
  }
  return;
}



// FUNCTION 143578410 FUN_143578410 body=49 status=ok
// SIG undefined FUN_143578410(void)

void FUN_143578410(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = Scaleform::GFx::MovieImpl::GetSupportedGesturesMask
                    (*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                      0x10));
  *(bool *)param_2 = iVar1 != 0;
  return;
}



// FUNCTION 143578450 FUN_143578450 body=49 status=ok
// SIG undefined FUN_143578450(void)

void FUN_143578450(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = Scaleform::GFx::MovieImpl::GetMaxTouchPoints
                    (*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                      0x10));
  *(bool *)param_2 = iVar1 != 0;
  return;
}



// FUNCTION 143578490 FUN_143578490 body=33 status=ok
// SIG undefined FUN_143578490(void)

undefined8 * FUN_143578490(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435784c0 FUN_1435784c0 body=261 status=ok
// SIG undefined FUN_1435784c0(void)

undefined8 * FUN_1435784c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b40850);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b40850);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "gesture";
    puVar5[0xb] = &DAT_145b122f4;
    puVar5[0xc] = "touchPoint";
  }
  return param_1;
}



// FUNCTION 1435785d0 FUN_1435785d0 body=66 status=ok
// SIG undefined FUN_1435785d0(void)

undefined8 * FUN_1435785d0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "gesture";
  param_1[0xb] = &DAT_145b122f4;
  param_1[0xc] = "touchPoint";
  return param_1;
}



// FUNCTION 143578620 FUN_143578620 body=175 status=ok
// SIG undefined FUN_143578620(void)

void FUN_143578620(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79be0)((longlong)DAT_146b79be8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143578700 FUN_143578700 body=175 status=ok
// SIG undefined FUN_143578700(void)

void FUN_143578700(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79c00)((longlong)DAT_146b79c08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143578800 FUN_143578800 body=112 status=ok
// SIG undefined FUN_143578800(void)

void FUN_143578800(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79cb0)(DAT_146b79cb8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143578870 FUN_143578870 body=144 status=ok
// SIG undefined FUN_143578870(void)

void FUN_143578870(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79c40)((longlong)DAT_146b79c48 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143578900 FUN_143578900 body=132 status=ok
// SIG undefined FUN_143578900(void)

void FUN_143578900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79cc0)(DAT_146b79cc8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143578990 FUN_143578990 body=144 status=ok
// SIG undefined FUN_143578990(void)

void FUN_143578990(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79c50)((longlong)DAT_146b79c58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143578a20 FUN_143578a20 body=145 status=ok
// SIG undefined FUN_143578a20(void)

void FUN_143578a20(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79cd0)((longlong)DAT_146b79cd8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143578ac0 FUN_143578ac0 body=144 status=ok
// SIG undefined FUN_143578ac0(void)

void FUN_143578ac0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79c60)((longlong)DAT_146b79c68 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143578b50 FUN_143578b50 body=175 status=ok
// SIG undefined FUN_143578b50(void)

void FUN_143578b50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79ce0)((longlong)DAT_146b79ce8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143578c00 FUN_143578c00 body=144 status=ok
// SIG undefined FUN_143578c00(void)

void FUN_143578c00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79cf0)((longlong)DAT_146b79cf8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143578c90 FUN_143578c90 body=144 status=ok
// SIG undefined FUN_143578c90(void)

void FUN_143578c90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79d00)((longlong)DAT_146b79d08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143578d20 FUN_143578d20 body=132 status=ok
// SIG undefined FUN_143578d20(void)

void FUN_143578d20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79c70)(DAT_146b79c78 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143578db0 FUN_143578db0 body=112 status=ok
// SIG undefined FUN_143578db0(void)

void FUN_143578db0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79c80)(DAT_146b79c88 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143578e60 FUN_143578e60 body=136 status=ok
// SIG undefined FUN_143578e60(void)

longlong FUN_143578e60(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x70);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x70) = uVar1 - 1;
    }
  }
  FUN_1435b38e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x668);
  }
  return param_1;
}



// FUNCTION 143578ef0 FUN_143578ef0 body=124 status=ok
// SIG undefined FUN_143578ef0(void)

void FUN_143578ef0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  
  if (param_2 != 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  pcVar3 = (char *)FUN_14361f950(param_1 + 0x40,local_res8);
  if (*pcVar3 != '\0') {
    FUN_143578f70(param_1 + 0x58,*(undefined8 *)(param_1 + 0x70),*(longlong *)(param_1 + 0x60) + 1);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
    if (plVar2 != (longlong *)0x0) {
      if (param_2 != 0) {
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      }
      *plVar2 = param_2;
    }
  }
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(param_2);
    }
  }
  return;
}



// FUNCTION 143578f70 FUN_143578f70 body=180 status=ok
// SIG undefined FUN_143578f70(void)

void FUN_143578f70(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar3 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (*plVar3 != 0) {
        piVar1 = (int *)(*plVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      plVar3 = plVar3 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f2240(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f2240(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143579090 FUN_143579090 body=121 status=ok
// SIG undefined FUN_143579090(void)

undefined1 * FUN_143579090(longlong param_1,undefined1 *param_2,void *param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = *(int *)(lVar2 + 0x44) + param_4;
  if ((ulonglong)uVar3 < *(ulonglong *)(lVar2 + 0x58)) {
    if (*(uint *)(lVar2 + 0x48) <= uVar3) {
      *(uint *)(lVar2 + 0x48) = uVar3;
    }
  }
  else {
    FUN_143579320();
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x44) +
                     *(longlong *)(*(longlong *)(param_1 + 8) + 0x50)),param_3,(ulonglong)param_4);
  lVar2 = *(longlong *)(param_1 + 8);
  *param_2 = 1;
  piVar1 = (int *)(lVar2 + 0x44);
  *piVar1 = *piVar1 + param_4;
  return param_2;
}



// FUNCTION 143579110 FUN_143579110 body=93 status=ok
// SIG undefined FUN_143579110(void)

uint FUN_143579110(longlong param_1,void *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(lVar2 + 0x58) < (ulonglong)(*(uint *)(lVar2 + 0x44) + param_3)) {
    FUN_143579440();
    return 0;
  }
  _guard_xfg_dispatch_icall_nop
            (param_2,(void *)((ulonglong)*(uint *)(lVar2 + 0x44) + *(longlong *)(lVar2 + 0x50)),
             (ulonglong)param_3);
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x44);
  *piVar1 = *piVar1 + param_3;
  return param_3;
}



// FUNCTION 143579180 FUN_143579180 body=233 status=ok
// SIG undefined FUN_143579180(void)

undefined1 * FUN_143579180(longlong param_1,undefined1 *param_2,longlong *param_3,uint param_4)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(lVar3 + 0x58) < (ulonglong)(*(int *)(lVar3 + 0x44) + param_4)) {
    FUN_143579440();
    *param_2 = 0;
  }
  else {
    if ((2 < param_4) && (2 < *(ulonglong *)(lVar3 + 0x58))) {
      pcVar2 = (char *)((ulonglong)*(uint *)(lVar3 + 0x44) + *(longlong *)(lVar3 + 0x50));
      if ((*pcVar2 == -0x11) && ((pcVar2[1] == -0x45 && (pcVar2[2] == -0x41)))) {
        param_4 = param_4 - 3;
        *(uint *)(lVar3 + 0x44) = *(uint *)(lVar3 + 0x44) + 3;
      }
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar3 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x98) + 0x10)
                           + 0x218),(ulonglong)*(uint *)(lVar3 + 0x44) + *(longlong *)(lVar3 + 0x50)
                          ,param_4);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
    piVar1 = (int *)(*param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_3 = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 8);
    *param_2 = 1;
    piVar1 = (int *)(lVar3 + 0x44);
    *piVar1 = *piVar1 + param_4;
  }
  return param_2;
}



// FUNCTION 143579270 FUN_143579270 body=158 status=ok
// SIG undefined FUN_143579270(void)

undefined8 * FUN_143579270(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b436d0;
  lVar2 = FUN_1435b4fe0(param_2);
  uVar1 = *(uint *)(lVar2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(uint *)(param_1 + 8) = uVar1 & 7 | *(uint *)(param_1 + 8) & 0xffffffe0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &PTR_FUN_145b436b8;
  param_1[0xe] = param_1;
  param_1[0xf] = &PTR_FUN_145b436c0;
  param_1[0x10] = param_1;
  FUN_1435ddca0(param_1 + 0x11,param_1);
  FUN_1435daf10(param_1 + 0x2a,param_1,param_1 + 0xf);
  return param_1;
}



// FUNCTION 143579320 FUN_143579320 body=109 status=ok
// SIG undefined FUN_143579320(void)

void FUN_143579320(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  if (uVar1 < param_2) {
    FUN_143333590(param_1 + 0x50);
    _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 0x50) + uVar1),0,param_2 - uVar1)
    ;
  }
  *(uint *)(param_1 + 0x48) = param_2;
  if (param_2 < *(uint *)(param_1 + 0x44)) {
    *(uint *)(param_1 + 0x44) = param_2;
  }
  return;
}



// FUNCTION 1435793a0 FUN_1435793a0 body=146 status=ok
// SIG undefined FUN_1435793a0(void)

undefined8 * FUN_1435793a0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b436d0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffe0 | param_3 & 7;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &PTR_FUN_145b436b8;
  param_1[0xe] = param_1;
  param_1[0xf] = &PTR_FUN_145b436c0;
  param_1[0x10] = param_1;
  FUN_1435ddca0(param_1 + 0x11,param_1);
  FUN_1435daf10(param_1 + 0x2a,param_1,param_1 + 0xf);
  return param_1;
}



// FUNCTION 143579440 FUN_143579440 body=320 status=ok
// SIG undefined FUN_143579440(void)

void FUN_143579440(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8[0] = 0;
  FUN_1435ccb40(lVar1,"flash.errors.EOFError",*(undefined8 *)(lVar1 + 0x1c8),local_28,local_res8,0);
  if ((*(char *)(lVar1 + 0xb8) != '\0') || (uVar2 = local_28[0] & 0x1f, uVar2 == 0))
  goto LAB_14357953c;
  if (uVar2 == 0xc) {
    bVar4 = local_18 == 0;
LAB_1435794cd:
    if (bVar4) goto LAB_14357953c;
  }
  else if (uVar2 == 10) {
    bVar4 = local_18 == *(longlong *)(local_18 + 8) + 0x80;
    goto LAB_1435794cd;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  *(undefined1 *)(lVar1 + 0xb8) = 1;
  FUN_143590140(lVar1 + 0xc0,local_28);
  if (*(longlong *)(lVar1 + 0x108) == 0) {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
  }
  else {
    uVar3 = *(longlong *)(lVar1 + 0x108) - 1;
    *(undefined8 *)(lVar1 + 0xe0) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x120) + (uVar3 >> 6) * 8) + 0x28 +
          (ulonglong)((uint)uVar3 & 0x3f) * 0xa0);
  }
LAB_14357953c:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143579590 FUN_143579590 body=320 status=ok
// SIG undefined FUN_143579590(void)

void FUN_143579590(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  local_28[0] = 0;
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8[0] = 0;
  FUN_1435ccb40(lVar1,"flash.errors.MemoryError",*(undefined8 *)(lVar1 + 0x1c8),local_28,local_res8,
                0);
  if ((*(char *)(lVar1 + 0xb8) != '\0') || (uVar2 = local_28[0] & 0x1f, uVar2 == 0))
  goto LAB_14357968c;
  if (uVar2 == 0xc) {
    bVar4 = local_18 == 0;
LAB_14357961d:
    if (bVar4) goto LAB_14357968c;
  }
  else if (uVar2 == 10) {
    bVar4 = local_18 == *(longlong *)(local_18 + 8) + 0x80;
    goto LAB_14357961d;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  *(undefined1 *)(lVar1 + 0xb8) = 1;
  FUN_143590140(lVar1 + 0xc0,local_28);
  if (*(longlong *)(lVar1 + 0x108) == 0) {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
  }
  else {
    uVar3 = *(longlong *)(lVar1 + 0x108) - 1;
    *(undefined8 *)(lVar1 + 0xe0) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x120) + (uVar3 >> 6) * 8) + 0x28 +
          (ulonglong)((uint)uVar3 & 0x3f) * 0xa0);
  }
LAB_14357968c:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435796e0 FUN_1435796e0 body=47 status=ok
// SIG undefined FUN_1435796e0(void)

undefined1 * FUN_1435796e0(longlong param_1,undefined1 *param_2)

{
  if (*(ulonglong *)(param_1 + 0x58) <= (ulonglong)*(uint *)(param_1 + 0x44)) {
    FUN_143579440();
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143579720 FUN_143579720 body=97 status=ok
// SIG undefined FUN_143579720(void)

ulonglong FUN_143579720(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    return (ulonglong)*(byte *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x50));
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x5e4,uVar2);
  uVar4 = FUN_1435cbef0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar4 = FUN_14335f920();
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143579790 FUN_143579790 body=61 status=ok
// SIG undefined FUN_143579790(void)

void FUN_143579790(longlong param_1,uint param_2,undefined1 param_3)

{
  if (*(uint *)(param_1 + 0x48) <= param_2) {
    FUN_143579320(param_1,param_2 + 1);
  }
  *(undefined1 *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x50)) = param_3;
  return;
}



// FUNCTION 1435797e0 FUN_1435797e0 body=83 status=ok
// SIG undefined FUN_1435797e0(void)

undefined8 FUN_1435797e0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,param_3,param_4);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(bool *)param_2 = iVar1 == param_4;
  return param_2;
}



// FUNCTION 143579840 FUN_143579840 body=50 status=ok
// SIG undefined FUN_143579840(void)

void FUN_143579840(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,param_2,param_3);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 143579880 FUN_143579880 body=165 status=ok
// SIG undefined FUN_143579880(void)

undefined1 * FUN_143579880(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  char *pcVar1;
  char local_res18 [8];
  undefined1 local_18 [4];
  uint local_14 [3];
  
  FUN_1435bdd60(local_res18,param_3 + 0x10,local_14);
  if (local_res18[0] == '\0') {
    FUN_1435aff50(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar1 = (char *)FUN_143590eb0(param_4,local_res18,local_18);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0x48) <= local_14[0]) {
        FUN_143579320(param_1,local_14[0] + 1);
      }
      *(undefined1 *)((ulonglong)local_14[0] + *(longlong *)(param_1 + 0x50)) = local_18[0];
      *param_2 = 1;
    }
  }
  return param_2;
}



// FUNCTION 143579930 FUN_143579930 body=112 status=ok
// SIG undefined FUN_143579930(void)

undefined8 FUN_143579930(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdd60(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0]);
  }
  return param_2;
}



// FUNCTION 1435799b0 FUN_1435799b0 body=213 status=ok
// SIG undefined FUN_1435799b0(void)

undefined8 FUN_1435799b0(longlong param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  longlong lStack_10;
  
  if (param_3 < *(uint *)(param_1 + 0x48)) {
    bVar4 = *(byte *)((ulonglong)param_3 + *(longlong *)(param_1 + 0x50));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x5e4,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    bVar4 = 0;
  }
  if (9 < ((byte)*param_4 & 0x1f)) {
    if ((*param_4 >> 9 & 1) == 0) {
      FUN_1435920c0(param_4);
    }
    else {
      FUN_143592150();
    }
  }
  *param_4 = *param_4 & 0xffffffe3;
  *param_4 = *param_4 | 3;
  *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,(uint)bVar4);
  *(longlong *)(param_4 + 6) = lStack_10;
  *(bool *)param_2 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0xb8) == '\0';
  return param_2;
}



// FUNCTION 143579a90 FUN_143579a90 body=110 status=ok
// SIG undefined FUN_143579a90(void)

ulonglong FUN_143579a90(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  uint local_res20 [2];
  
  FUN_1435bdd60(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)(local_res20[0] < *(uint *)(param_1 + 0x48));
  }
  uVar1 = FUN_1435b0590(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 143579b10 FUN_143579b10 body=98 status=ok
// SIG undefined FUN_143579b10(void)

void FUN_143579b10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435b16a0();
  FUN_143562890(param_1 + 0xe0,param_2,param_3);
  FUN_143562890(param_1 + 0x118,param_2,param_3);
  FUN_1435629a0(param_1 + 0x150,param_2,param_3);
  return;
}



// FUNCTION 143579b90 FUN_143579b90 body=124 status=ok
// SIG undefined FUN_143579b90(void)

void FUN_143579b90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x40) & 0x18) == 0) {
    uVar4 = 9;
    pcVar3 = "bigEndian";
  }
  else {
    uVar4 = 0xc;
    pcVar3 = "littleEndian";
  }
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),pcVar3,uVar4);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143579c20 FUN_143579c20 body=158 status=ok
// SIG undefined FUN_143579c20(void)

void FUN_143579c20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char *_Str1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  _Str1 = *(char **)*param_3;
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"bigEndian");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffffffe7;
    return;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"littleEndian");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffffffef;
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 8;
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_18,0x5e4,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143579ce0 NotifyUObjectDeleted body=8 status=ok
// SIG undefined NotifyUObjectDeleted(void)

void FUObjectAnnotationDense<FLinkerIndexPair,0>::NotifyUObjectDeleted
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143579320(param_1,param_3);
  return;
}



// FUNCTION 143579d10 FUN_143579d10 body=103 status=ok
// SIG undefined FUN_143579d10(void)

void FUN_143579d10(longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((param_3 == 0) || (param_3 == 3)) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffff8;
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | param_3 & 7;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x422,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 143579d90 FUN_143579d90 body=51 status=ok
// SIG undefined FUN_143579d90(void)

void FUN_143579d90(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(ulonglong *)(param_1 + 0x58) <= (ulonglong)param_3) {
    FUN_143579320(param_1,(ulonglong)param_3);
  }
  *(uint *)(param_1 + 0x44) = param_3;
  if (*(uint *)(param_1 + 0x48) < param_3) {
    *(uint *)(param_1 + 0x48) = param_3;
  }
  return;
}



// FUNCTION 143579dd0 FUN_143579dd0 body=91 status=ok
// SIG undefined FUN_143579dd0(void)

void FUN_143579dd0(longlong param_1)

{
  FUN_1435dfe30(param_1 + 0x88);
  FUN_1435dda40(param_1 + 0x150);
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     ((*(ulonglong *)(param_1 + 0x60) & 0xfffffffffffffffe) != 0)) {
    FUN_143333390(param_1 + 0x50,param_1 + 0x50,0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 143579e40 FUN_143579e40 body=155 status=ok
// SIG undefined FUN_143579e40(void)

void FUN_143579e40(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  ulonglong local_18 [2];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    local_18[0] = (ulonglong)(((uint)(*(int *)(param_1 + 0x48) * 3) >> 1) + 0x20);
    uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,local_18[0],0);
    compress2(uVar1,local_18,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),9);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    (*(code *)**(undefined8 **)(param_1 + 0x68))
              (param_1 + 0x68,local_res8,uVar1,local_18[0] & 0xffffffff);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1);
  }
  return;
}



// FUNCTION 143579fb0 FUN_143579fb0 body=201 status=ok
// SIG undefined FUN_143579fb0(void)

void FUN_143579fb0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x44);
  if ((param_5 != 0) && (bVar2 = uVar3 < param_5, uVar3 = param_5, bVar2)) {
    FUN_143579440();
    return;
  }
  uVar4 = param_4 + uVar3;
  uVar1 = *(ulonglong *)(param_3 + 0x58);
  if (uVar1 <= uVar4) {
    if (uVar1 < uVar4) {
      FUN_143333590(param_3 + 0x50);
      _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_3 + 0x50) + uVar1),0,uVar4 - uVar1)
      ;
    }
    *(uint *)(param_3 + 0x48) = uVar4;
    if (uVar4 < *(uint *)(param_3 + 0x44)) {
      *(uint *)(param_3 + 0x44) = uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014357a05f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x78))
            (param_1 + 0x78,(ulonglong)param_4 + *(longlong *)(param_3 + 0x50),uVar3);
  return;
}



// FUNCTION 14357a080 FUN_14357a080 body=70 status=ok
// SIG undefined FUN_14357a080(void)

void FUN_14357a080(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,param_2,8);
  if ((iVar1 == 8) && (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8)) {
    uVar2 = FUN_143562a40(*param_2);
    *param_2 = uVar2;
  }
  return;
}



// FUNCTION 14357a0d0 FUN_14357a0d0 body=131 status=ok
// SIG undefined FUN_14357a0d0(void)

void FUN_14357a0d0(longlong param_1,double *param_2)

{
  int iVar1;
  float local_res8 [2];
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,local_res8,4);
  if (iVar1 == 4) {
    if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
      local_res8[0] =
           (float)(((uint)local_res8[0] & 0xff0000 | (uint)local_res8[0] >> 0x10) >> 8 |
                  ((uint)local_res8[0] & 0xff00 | (int)local_res8[0] << 0x10) << 8);
    }
    *param_2 = (double)local_res8[0];
  }
  return;
}


