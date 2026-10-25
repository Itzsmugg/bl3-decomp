// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433fe950 FUN_1433fe950 body=59 status=ok
// SIG undefined FUN_1433fe950(void)

void FUN_1433fe950(longlong param_1,float param_2)

{
  if (param_2 != 1.0) {
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 4;
    *(short *)(param_1 + 0x152) = (short)(longlong)(param_2 * 20.0);
    return;
  }
  *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfb;
  *(undefined2 *)(param_1 + 0x152) = 0x14;
  return;
}



// FUNCTION 1433fe9a0 FUN_1433fe9a0 body=580 status=ok
// SIG undefined FUN_1433fe9a0(void)

ulonglong FUN_1433fe9a0(longlong param_1,float param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  RefCountImpl *local_68;
  RefCountNTSImpl *pRStack_60;
  undefined8 local_58;
  longlong *local_48 [2];
  uint local_38;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  param_2 = param_2 - *(float *)(param_1 + 0x80);
  fVar6 = *(float *)(param_1 + 0x84);
  uVar2 = FUN_1433f3880(param_1 + 0x50);
  FUN_1433f32d0(param_1 + 0x50,local_48,(float)uVar2 + (param_3 - fVar6));
  if (((local_48[0] != (longlong *)0x0) && ((ulonglong)local_38 < (ulonglong)local_48[0][1])) &&
     (-1 < (int)local_38)) {
    piVar1 = *(int **)(*local_48[0] + (ulonglong)local_38 * 8);
    fVar6 = (float)piVar1[3];
    if (fVar6 <= param_2) {
      iVar5 = *piVar1;
      if (iVar5 < 0) {
        uVar2 = (uint)*(ushort *)(piVar1 + 5);
      }
      else {
        uVar2 = piVar1[5];
      }
      if (param_2 <= (float)(int)uVar2 + fVar6) {
        iVar3 = 0;
        if (iVar5 < 0) {
          uVar2 = (uint)*(byte *)(piVar1 + 7);
        }
        else {
          uVar2 = piVar1[1];
        }
        lVar4 = 0x2a;
        if (iVar5 < 0) {
          lVar4 = 0x1e;
        }
        local_d8 = FUN_1433f23a0(piVar1);
        local_d0 = 0;
        local_e8 = lVar4 + (longlong)piVar1;
        local_c8 = 0;
        local_c0 = 0;
        local_e0 = local_e8 + (ulonglong)uVar2 * 8;
        local_b8 = 0xffffffffffffffff;
        local_b0 = 0;
        local_a8 = 0xffffffffffffffff;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = (RefCountImpl *)0x0;
        pRStack_60 = (RefCountNTSImpl *)0x0;
        local_58 = 0;
        FUN_1433f2020(&local_e8);
        iVar5 = iVar3;
        while ((local_e8 != 0 && (local_e8 < local_e0))) {
          uVar2 = (uint)*(ushort *)(local_e8 + 2);
          if ((*(byte *)(local_e8 + 6) >> 6 & 1) != 0) {
            uVar2 = -(uint)*(ushort *)(local_e8 + 2);
          }
          iVar5 = iVar5 + uVar2;
          if (param_2 - fVar6 < (float)iVar5) break;
          iVar3 = iVar3 + (uint)(*(ushort *)(local_e8 + 4) >> 0xc);
          Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_e8);
        }
        uVar2 = piVar1[2];
        if ((*piVar1 < 0) && (uVar2 = uVar2 & 0xffffff, uVar2 == 0xffffff)) {
          uVar2 = 0xffffffff;
        }
        if (pRStack_60 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRStack_60);
        }
        if (local_68 == (RefCountImpl *)0x0) {
          return (ulonglong)(iVar3 + uVar2);
        }
        Scaleform::RefCountImpl::Release(local_68);
        return (ulonglong)(iVar3 + uVar2);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433febf0 FUN_1433febf0 body=276 status=ok
// SIG undefined FUN_1433febf0(void)

longlong FUN_1433febf0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  byte bStack_30;
  undefined7 uStack_2f;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  fVar1 = *(float *)(param_1 + 0x80);
  param_3 = param_3 - *(float *)(param_1 + 0x84);
  lVar4 = param_1 + 0x50;
  uVar3 = FUN_1433f3880(lVar4);
  FUN_1433f32d0(lVar4,&local_68,(float)uVar3 + param_3);
  if (local_68 != 0) {
    if (((local_58 & 0xffffffff) < *(ulonglong *)(local_68 + 8)) &&
       (uVar5 = local_58 & 0xffffffff, -1 < (int)local_58)) goto LAB_1433fecbf;
  }
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0.0 < param_3) {
    local_38 = (ulonglong)(*(int *)(param_1 + 0x58) - 1);
  }
  else {
    local_38 = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x94) >> 2;
  bStack_30 = bVar2 & 1;
  uStack_50 = CONCAT71(uStack_2f,bVar2) & 0xffffffffffffff01;
  local_58 = local_38;
  local_68 = lVar4;
  uVar5 = local_38;
  local_48 = lVar4;
LAB_1433fecbf:
  if (((local_68 == 0) || (*(ulonglong *)(local_68 + 8) <= uVar5)) || ((int)uVar5 < 0)) {
    lVar4 = -(ulonglong)(*(int *)(param_1 + 0x58) != 0);
  }
  else {
    lVar4 = FUN_1433fb620(param_1,uVar5,param_2 - fVar1);
  }
  return lVar4;
}



// FUNCTION 1433fed10 FUN_1433fed10 body=97 status=ok
// SIG undefined FUN_1433fed10(void)

undefined8 FUN_1433fed10(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0x58) <= param_2) {
    return 0xffffffffffffffff;
  }
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  uVar1 = FUN_1433fb620(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 1433fed80 FUN_1433fed80 body=93 status=ok
// SIG undefined FUN_1433fed80(void)

longlong FUN_1433fed80(longlong param_1,longlong param_2)

{
  longlong local_res8 [4];
  longlong local_18;
  longlong local_10;
  
  local_res8[0] = -1;
  FUN_1433e8370(*(undefined8 *)(param_1 + 0x10),&local_18,param_2,local_res8);
  if (((local_18 != 0) && (-1 < local_10)) && (local_10 < *(int *)(local_18 + 8))) {
    return param_2 - local_res8[0];
  }
  return -1;
}



// FUNCTION 1433fedf0 FUN_1433fedf0 body=113 status=ok
// SIG undefined FUN_1433fedf0(void)

ulonglong FUN_1433fedf0(longlong param_1,undefined8 param_2,float param_3)

{
  uint uVar1;
  longlong local_38 [2];
  uint local_28;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  uVar1 = FUN_1433f3880(param_1 + 0x50);
  FUN_1433f32d0(param_1 + 0x50,local_38,(float)uVar1 + param_3);
  if (((local_38[0] != 0) && ((ulonglong)local_28 < *(ulonglong *)(local_38[0] + 8))) &&
     (-1 < (int)local_28)) {
    return (ulonglong)local_28;
  }
  return 0xffffffff;
}



// FUNCTION 1433fee70 FUN_1433fee70 body=92 status=ok
// SIG undefined FUN_1433fee70(void)

ulonglong FUN_1433fee70(longlong param_1,undefined8 param_2)

{
  longlong local_28 [2];
  uint local_18;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  FUN_1433f3180(param_1 + 0x50,local_28,param_2);
  if (((local_28[0] != 0) && ((ulonglong)local_18 < *(ulonglong *)(local_28[0] + 8))) &&
     (-1 < (int)local_18)) {
    return (ulonglong)local_18;
  }
  return 0xffffffff;
}



// FUNCTION 1433feee0 FUN_1433feee0 body=130 status=ok
// SIG undefined FUN_1433feee0(void)

ulonglong FUN_1433feee0(longlong param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  if ((((longlong *)(param_1 + 0x50) != (longlong *)0x0) &&
      ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x58))) && (-1 < (int)param_2)) {
    piVar1 = *(int **)(*(longlong *)(param_1 + 0x50) + (ulonglong)param_2 * 8);
    if (*piVar1 < 0) {
      uVar2 = (ulonglong)(piVar1[2] & 0xffffffU);
      if ((piVar1[2] & 0xffffffU) == 0xffffff) {
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
    return (ulonglong)(uint)piVar1[2];
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433fef70 GetLineLength body=144 status=ok
// SIG undefined GetLineLength(void)

ulonglong Scaleform::Render::Text::DocView::GetLineLength
                    (longlong param_1,uint param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar3 = (ulonglong)param_2;
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  plVar4 = (longlong *)(param_1 + 0x50);
  if (((plVar4 == (longlong *)0x0) || (*(ulonglong *)(param_1 + 0x58) <= uVar3)) ||
     ((int)param_2 < 0)) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      uVar2 = FUN_1433f23e0(*(undefined8 *)(*plVar4 + uVar3 * 8));
      *param_3 = uVar2;
    }
    piVar1 = *(int **)(*plVar4 + uVar3 * 8);
    if (*piVar1 < 0) {
      uVar3 = (ulonglong)*(byte *)((longlong)piVar1 + 0xb);
    }
    else {
      uVar3 = (ulonglong)(uint)piVar1[8];
    }
  }
  return uVar3;
}



// FUNCTION 1433ff010 FUN_1433ff010 body=260 status=ok
// SIG undefined FUN_1433ff010(void)

longlong FUN_1433ff010(longlong param_1,uint param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong local_res18 [2];
  longlong *local_28;
  longlong local_20;
  
  uVar4 = (ulonglong)param_2;
  if (param_3 == (ulonglong *)0x0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  if (((plVar1 != (longlong *)0x0) && (uVar4 < *(ulonglong *)(param_1 + 0x58))) &&
     (-1 < (int)param_2)) {
    piVar2 = *(int **)(*plVar1 + uVar4 * 8);
    uVar3 = piVar2[2];
    if ((*piVar2 < 0) && (uVar3 = uVar3 & 0xffffff, uVar3 == 0xffffff)) {
      uVar3 = 0xffffffff;
    }
    local_res18[0] = 0;
    FUN_1433e8370(*(undefined8 *)(param_1 + 0x10),&local_28,uVar3,local_res18);
    if (((local_28 != (longlong *)0x0) && (-1 < local_20)) && (local_20 < (int)local_28[1])) {
      piVar2 = *(int **)(*plVar1 + uVar4 * 8);
      if (*piVar2 < 0) {
        uVar4 = (ulonglong)*(byte *)((longlong)piVar2 + 0xb);
      }
      else {
        uVar4 = (ulonglong)(uint)piVar2[8];
      }
      *param_3 = uVar4;
      return **(longlong **)(*local_28 + local_20 * 8) + local_res18[0] * 2;
    }
  }
  return 0;
}



// FUNCTION 1433ff120 FUN_1433ff120 body=135 status=ok
// SIG undefined FUN_1433ff120(void)

undefined8 FUN_1433ff120(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res8;
  longlong *local_18;
  longlong local_10;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  local_res8 = 0;
  FUN_1433e8370(*(undefined8 *)(param_1 + 0x10),&local_18,param_2,&local_res8);
  if (((local_18 != (longlong *)0x0) && (-1 < local_10)) && (local_10 < (int)local_18[1])) {
    uVar1 = Scaleform::Render::Text::Paragraph::GetLength(*(undefined8 *)(*local_18 + local_10 * 8))
    ;
    return uVar1;
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433ff1b0 FUN_1433ff1b0 body=323 status=ok
// SIG undefined FUN_1433ff1b0(void)

ulonglong FUN_1433ff1b0(longlong param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *in_RAX;
  
  if (param_3 != (uint *)0x0) {
    if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
      FUN_1433fcba0();
      *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    }
    in_RAX = (longlong *)(param_1 + 0x50);
    if (((in_RAX != (longlong *)0x0) && ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x58))) &&
       (-1 < (int)param_2)) {
      piVar1 = *(int **)(*in_RAX + (ulonglong)param_2 * 8);
      if (*piVar1 < 0) {
        uVar2 = *(ushort *)((longlong)piVar1 + 0x1a);
      }
      else {
        uVar2 = *(ushort *)((longlong)piVar1 + 0x26);
      }
      param_3[2] = (uint)uVar2;
      if (*piVar1 < 0) {
        uVar3 = (uint)*(ushort *)((longlong)piVar1 + 0x16);
        uVar2 = *(ushort *)((longlong)piVar1 + 0x1a);
      }
      else {
        uVar3 = piVar1[6];
        uVar2 = *(ushort *)((longlong)piVar1 + 0x26);
      }
      param_3[3] = (uint)(longlong)((float)(int)uVar3 - (float)uVar2);
      if (*piVar1 < 0) {
        uVar3 = (uint)*(ushort *)(piVar1 + 5);
      }
      else {
        uVar3 = piVar1[5];
      }
      *param_3 = uVar3;
      if (*piVar1 < 0) {
        uVar3 = (uint)*(ushort *)((longlong)piVar1 + 0x16);
        iVar4 = (int)*(char *)((longlong)piVar1 + 0x1d);
      }
      else {
        uVar3 = piVar1[6];
        iVar4 = (int)(short)piVar1[10];
      }
      param_3[1] = iVar4 + uVar3;
      if (-1 < *piVar1) {
        param_3[5] = (int)(short)piVar1[10];
        uVar3 = piVar1[3];
        param_3[4] = uVar3;
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
      param_3[5] = (int)*(char *)((longlong)piVar1 + 0x1d);
      uVar3 = piVar1[3];
      param_3[4] = uVar3;
      return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433ff300 FUN_1433ff300 body=712 status=ok
// SIG undefined FUN_1433ff300(void)

ulonglong FUN_1433ff300(longlong param_1,float *param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  RefCountImpl *local_78;
  RefCountNTSImpl *pRStack_70;
  undefined8 local_68;
  longlong *local_58 [2];
  uint local_48;
  
  if ((param_2 == (float *)0x0) ||
     (in_RAX = Scaleform::Render::Text::StyledText::GetLength(*(undefined8 *)(param_1 + 0x10)),
     in_RAX <= param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0(param_1);
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  FUN_1433f3180(param_1 + 0x50,local_58,param_3);
  uVar8 = 0;
  if (((local_58[0] != (longlong *)0x0) && ((ulonglong)local_48 < (ulonglong)local_58[0][1])) &&
     (-1 < (int)local_48)) {
    piVar2 = *(int **)(*local_58[0] + (ulonglong)local_48 * 8);
    iVar9 = *piVar2;
    if (iVar9 < 0) {
      uVar5 = (ulonglong)(piVar2[2] & 0xffffffU);
      if ((piVar2[2] & 0xffffffU) == 0xffffff) {
        uVar5 = 0xffffffff;
      }
    }
    else {
      uVar5 = (ulonglong)(uint)piVar2[2];
    }
    if (iVar9 < 0) {
      uVar3 = (uint)*(byte *)(piVar2 + 7);
    }
    else {
      uVar3 = piVar2[1];
    }
    lVar6 = 0x2a;
    if (iVar9 < 0) {
      lVar6 = 0x1e;
    }
    local_e8 = FUN_1433f23a0(piVar2);
    uVar7 = 0;
    local_c8 = 0xffffffffffffffff;
    local_e0 = 0;
    local_f8 = lVar6 + (longlong)piVar2;
    local_d8 = 0;
    local_d0 = 0;
    local_f0 = local_f8 + (ulonglong)uVar3 * 8;
    local_c0 = 0;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = (RefCountImpl *)0x0;
    pRStack_70 = (RefCountNTSImpl *)0x0;
    local_68 = 0;
    FUN_1433f2020(&local_f8);
    iVar9 = piVar2[3];
    while( true ) {
      if ((local_f8 == 0) || (local_f0 <= local_f8)) goto LAB_1433ff56c;
      if (uVar7 == param_3 - uVar5) break;
      uVar3 = (uint)*(ushort *)(local_f8 + 2);
      if ((*(byte *)(local_f8 + 6) >> 6 & 1) != 0) {
        uVar3 = -(uint)*(ushort *)(local_f8 + 2);
      }
      iVar9 = iVar9 + uVar3;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_f8);
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    if ((*(byte *)(local_f8 + 7) & 1) == 0) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      uVar8 = 1;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      uVar3 = (uint)*(ushort *)(local_f8 + 2);
      if ((*(byte *)(local_f8 + 6) >> 6 & 1) != 0) {
        uVar3 = -(uint)*(ushort *)(local_f8 + 2);
      }
      param_2[1] = 40.0;
      param_2[2] = (float)(int)uVar3 + 0.0;
      if (*piVar2 < 0) {
        uVar4 = (uint)*(ushort *)((longlong)piVar2 + 0x16);
      }
      else {
        uVar4 = piVar2[6];
      }
      param_2[3] = (float)(int)uVar4;
      iVar1 = piVar2[4];
      *param_2 = (float)iVar9 + 40.0 + 0.0;
      param_2[2] = (float)iVar9 + 40.0 + (float)(int)uVar3 + 0.0;
      param_2[1] = (float)iVar1 + 40.0;
      param_2[3] = (float)(int)uVar4 + (float)iVar1;
    }
LAB_1433ff56c:
    if (pRStack_70 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRStack_70);
    }
    if (local_78 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_78);
    }
  }
  return uVar8;
}



// FUNCTION 1433ff5d0 FUN_1433ff5d0 body=1084 status=ok
// SIG undefined FUN_1433ff5d0(void)

ulonglong FUN_1433ff5d0(longlong param_1,float *param_2,ulonglong param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte local_res8;
  ushort *local_108;
  ushort *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  RefCountImpl *local_88;
  RefCountNTSImpl *pRStack_80;
  undefined8 local_78;
  longlong *local_68 [2];
  uint local_58;
  
  uVar8 = Scaleform::Render::Text::StyledText::GetLength(*(undefined8 *)(param_1 + 0x10));
  if ((param_2 == (float *)0x0) || (uVar8 < param_3)) {
    return uVar8 & 0xffffffffffffff00;
  }
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0(param_1);
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  FUN_1433f3180(param_1 + 0x50,local_68,param_3);
  local_res8 = 0;
  if (((local_68[0] != (longlong *)0x0) && ((ulonglong)local_58 < (ulonglong)local_68[0][1])) &&
     (-1 < (int)local_58)) {
    uVar8 = 0xffffffff;
    piVar3 = *(int **)(*local_68[0] + (ulonglong)local_58 * 8);
    iVar13 = *piVar3;
    if (iVar13 < 0) {
      uVar9 = (ulonglong)(piVar3[2] & 0xffffffU);
      if ((piVar3[2] & 0xffffffU) == 0xffffff) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = (ulonglong)(uint)piVar3[2];
    }
    if (iVar13 < 0) {
      uVar11 = (uint)*(byte *)(piVar3 + 7);
    }
    else {
      uVar11 = piVar3[1];
    }
    lVar10 = 0x2a;
    if (iVar13 < 0) {
      lVar10 = 0x1e;
    }
    local_f8 = FUN_1433f23a0(piVar3);
    iVar13 = 0;
    local_d8 = 0xffffffffffffffff;
    local_f0 = 0;
    local_108 = (ushort *)(lVar10 + (longlong)piVar3);
    local_e8 = 0;
    local_e0 = 0;
    local_100 = local_108 + (ulonglong)uVar11 * 4;
    local_d0 = 0;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = (RefCountImpl *)0x0;
    pRStack_80 = (RefCountNTSImpl *)0x0;
    local_78 = 0;
    FUN_1433f2020(&local_108);
    uVar11 = 0;
    while( true ) {
      puVar4 = local_108;
      if ((local_108 == (ushort *)0x0) || (local_100 <= local_108)) goto LAB_1433ff91d;
      if ((ulonglong)uVar11 == param_3 - uVar9) break;
      uVar7 = (uint)local_108[1];
      if (((byte)local_108[3] >> 6 & 1) != 0) {
        uVar7 = -(uint)local_108[1];
      }
      iVar13 = iVar13 + uVar7;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_108);
      uVar11 = uVar11 + 1;
    }
    local_res8 = 1;
    if ((local_108[3] >> 0xb & 1) == 0) {
      if (local_88 == (RefCountImpl *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = *(longlong **)(local_88 + 0x30);
      }
      fVar17 = (float)(local_108[2] & 0xfff);
      if ((local_108[3] & 0x10) != 0) {
        fVar17 = fVar17 * 0.0625;
      }
      uVar6 = *local_108;
      fVar17 = fVar17 * 20.0 * 0.0009765625;
      uVar5 = uVar6;
      if (uVar6 == 0xffff) {
        uVar5 = 0xffff;
      }
      if (uVar5 == 0xffff) {
        *param_2 = 0.0;
        uVar11 = (uint)local_108[1];
        if (((byte)local_108[3] >> 6 & 1) != 0) {
          uVar11 = -(uint)local_108[1];
        }
        param_2[2] = (float)(int)uVar11;
      }
      else {
        if (uVar6 != 0xffff) {
          uVar8 = (ulonglong)uVar6;
        }
        (**(code **)(*plVar12 + 0x38))(plVar12,uVar8,param_2);
      }
      if ((*(byte *)((longlong)puVar4 + 7) & 1) != 0) {
        param_2[2] = (param_2[2] - *param_2) / 3.0 + *param_2;
      }
      fVar14 = *(float *)((longlong)plVar12 + 0x14);
      fVar16 = *(float *)(plVar12 + 2);
      fVar18 = *param_2;
      fVar1 = param_2[2];
      *param_2 = fVar17 * fVar18;
      param_2[2] = fVar17 * fVar1;
      if (*piVar3 < 0) {
        uVar6 = *(ushort *)((longlong)piVar3 + 0x1a);
      }
      else {
        uVar6 = *(ushort *)((longlong)piVar3 + 0x26);
      }
      fVar15 = ((float)uVar6 - fVar17 * *(float *)(plVar12 + 2)) + 40.0;
      param_2[1] = fVar15;
      fVar14 = fVar15 + (fVar14 + fVar16) * fVar17;
      param_2[3] = fVar14;
      iVar2 = piVar3[4];
      param_2[2] = (float)iVar13 + 40.0 + fVar17 * fVar1;
      *param_2 = (float)iVar13 + 40.0 + fVar17 * fVar18;
      param_2[1] = (float)iVar2 + fVar15;
      param_2[3] = (float)iVar2 + fVar14;
    }
    else {
      fVar16 = -*(float *)(pRStack_80 + 0x18);
      *param_2 = fVar16;
      fVar18 = -*(float *)(pRStack_80 + 0x1c);
      param_2[1] = fVar18;
      fVar17 = *(float *)(pRStack_80 + 0x20);
      param_2[2] = fVar16 + fVar17;
      fVar14 = *(float *)(pRStack_80 + 0x24);
      param_2[3] = fVar14 + fVar18;
      iVar2 = piVar3[4];
      *param_2 = (float)iVar13 + 40.0 + fVar16;
      param_2[2] = (float)iVar13 + 40.0 + fVar16 + fVar17;
      param_2[3] = (float)iVar2 + 40.0 + fVar14 + fVar18;
      param_2[1] = (float)iVar2 + 40.0 + fVar18;
    }
LAB_1433ff91d:
    if (pRStack_80 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRStack_80);
    }
    if (local_88 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_88);
    }
  }
  return (ulonglong)local_res8;
}



// FUNCTION 1433ffa20 FUN_1433ffa20 body=167 status=ok
// SIG undefined FUN_1433ffa20(void)

uint FUN_1433ffa20(longlong param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  Scaleform::Render::Text::DocView::ForceReformat();
  uVar3 = FUN_1433f3880(param_1 + 0x50);
  bVar1 = *(byte *)(param_1 + 0x94);
  uVar4 = *(uint *)(param_1 + 0x70);
  uVar5 = 0;
  while( true ) {
    if ((*(ulonglong *)(param_1 + 0x58) <= (ulonglong)uVar4) || ((int)uVar4 < 0)) {
      return uVar5;
    }
    if (((bVar1 >> 2 & 1) == 0) &&
       (cVar2 = FUN_1433f38d0(param_1 + 0x50,uVar4,-(float)uVar3), cVar2 == '\0')) break;
    uVar5 = uVar4;
    if ((ulonglong)uVar4 < *(ulonglong *)(param_1 + 0x58)) {
      uVar4 = uVar4 + 1;
    }
  }
  return uVar5;
}



// FUNCTION 1433ffad0 FUN_1433ffad0 body=301 status=ok
// SIG undefined FUN_1433ffad0(void)

longlong FUN_1433ffad0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = *(uint *)(param_1 + 0x58);
  if (uVar5 <= (uint)param_2) {
    param_2 = (ulonglong)(uVar5 - 1);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  uVar8 = param_2 & 0xffffffff;
  if (((plVar1 == (longlong *)0x0) || (*(ulonglong *)(param_1 + 0x58) <= uVar8)) ||
     ((int)param_2 < 0)) {
    return (ulonglong)(uint3)(uVar5 >> 8) << 8;
  }
  piVar2 = *(int **)(*plVar1 + uVar8 * 8);
  if (*piVar2 < 0) {
    uVar5 = (uint)*(ushort *)((longlong)piVar2 + 0x16);
    if ('\0' < *(char *)((longlong)piVar2 + 0x1d)) {
      iVar4 = (int)*(char *)((longlong)piVar2 + 0x1d);
      goto LAB_1433ffb51;
    }
  }
  else {
    uVar5 = piVar2[6];
    if (0 < (short)piVar2[10]) {
      iVar4 = (int)(short)piVar2[10];
      goto LAB_1433ffb51;
    }
  }
  iVar4 = 0;
LAB_1433ffb51:
  uVar3 = param_2;
  do {
    uVar9 = uVar8;
    uVar6 = (uint)uVar3;
    if (((*(ulonglong *)(param_1 + 0x58) <= (param_2 & 0xffffffff)) || ((int)param_2 < 0)) ||
       ((float)*(int *)(*(longlong *)(*plVar1 + (param_2 & 0xffffffff) * 8) + 0x10) <
        ((float)(int)(piVar2[4] + iVar4 + uVar5) - *(float *)(param_1 + 0x8c)) +
        *(float *)(param_1 + 0x84))) break;
    param_2 = (ulonglong)((int)param_2 - 1);
    uVar6 = (uint)uVar9;
    uVar8 = uVar9 - 1;
    uVar3 = uVar9;
  } while (-1 < (longlong)(uVar9 - 1));
  lVar7 = 0;
  uVar5 = FUN_1433fe300(param_1);
  if (uVar5 < uVar6) {
    uVar6 = uVar5;
  }
  if (*(uint *)(param_1 + 0x70) != uVar6) {
    Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(plVar1,uVar6);
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1,uVar6);
    }
    lVar7 = 1;
  }
  return lVar7;
}



// FUNCTION 1433ffc10 FUN_1433ffc10 body=149 status=ok
// SIG undefined FUN_1433ffc10(void)

bool FUN_1433ffc10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_res8[0] = 0x4a;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
    if (lVar1 != 0) {
      Scaleform::Render::Text::Highlighter::Highlighter(lVar1);
      *(undefined4 *)(lVar1 + 0x38) = 0xbf800000;
      *(undefined4 *)(lVar1 + 0x3c) = 0xbf800000;
      *(undefined2 *)(lVar1 + 0x40) = 0;
      lVar2 = lVar1;
    }
    *(longlong *)(param_1 + 0x28) = lVar2;
  }
  lVar2 = FUN_1433f11f0(*(undefined8 *)(param_1 + 0x28),param_2);
  return lVar2 != 0;
}



// FUNCTION 1433ffcd0 UpdateHighlight body=25 status=ok
// SIG undefined UpdateHighlight(void)

void Scaleform::Render::Text::DocView::UpdateHighlight(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && ((*(byte *)(param_1 + 0x15b) & 0x40) == 0)) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x30) = 0;
  }
  return;
}



// FUNCTION 1433ffcf0 FUN_1433ffcf0 body=294 status=ok
// SIG undefined FUN_1433ffcf0(void)

void FUN_1433ffcf0(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 local_res20 [2];
  
  *(ulonglong *)(param_1 + 0x38) = param_2;
  *(ulonglong *)(param_1 + 0x40) = param_3;
  if (param_4 != '\0') {
    lVar5 = 0;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_res20[0] = 0x4a;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res20);
      lVar2 = lVar5;
      if (lVar1 != 0) {
        Scaleform::Render::Text::Highlighter::Highlighter(lVar1);
        *(undefined4 *)(lVar1 + 0x38) = 0xbf800000;
        *(undefined4 *)(lVar1 + 0x3c) = 0xbf800000;
        *(undefined2 *)(lVar1 + 0x40) = 0;
        lVar2 = lVar1;
      }
      *(longlong *)(param_1 + 0x28) = lVar2;
    }
    uVar4 = param_2;
    if (param_3 < param_2) {
      uVar4 = param_3;
      param_3 = param_2;
    }
    if ((*(byte *)(param_1 + 0x15b) & 0x40) == 0) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_res20[0] = 0x4a;
        lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res20);
        if (lVar2 != 0) {
          Scaleform::Render::Text::Highlighter::Highlighter(lVar2);
          *(undefined4 *)(lVar2 + 0x38) = 0xbf800000;
          *(undefined4 *)(lVar2 + 0x3c) = 0xbf800000;
          *(undefined2 *)(lVar2 + 0x40) = 0;
          lVar5 = lVar2;
        }
        *(longlong *)(param_1 + 0x28) = lVar5;
      }
      puVar3 = (ulonglong *)Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(param_1);
      if ((*puVar3 != uVar4) || (puVar3[1] != param_3 - uVar4)) {
        *puVar3 = uVar4;
        puVar3[1] = param_3 - uVar4;
        *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x30) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1433ffe20 FUN_1433ffe20 body=197 status=ok
// SIG undefined FUN_1433ffe20(void)

void FUN_1433ffe20(longlong param_1,int param_2)

{
  longlong lVar1;
  int local_res8 [2];
  
  if ((*(byte *)(param_1 + 0x15b) & 0x40) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_res8[0] = 0x4a;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
      if (lVar1 != 0) {
        Scaleform::Render::Text::Highlighter::Highlighter(lVar1);
        *(undefined4 *)(lVar1 + 0x38) = 0xbf800000;
        *(undefined2 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 0x3c) = 0xbf800000;
      }
      *(longlong *)(param_1 + 0x28) = lVar1;
    }
    lVar1 = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(param_1);
    if ((*(byte *)(lVar1 + 0x38) & 0x10) == 0) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] = *(int *)(lVar1 + 0x30);
    }
    if (local_res8[0] != param_2) {
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x10;
      *(int *)(lVar1 + 0x30) = param_2;
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x30) = 0;
    }
  }
  return;
}



// FUNCTION 1433ffef0 FUN_1433ffef0 body=197 status=ok
// SIG undefined FUN_1433ffef0(void)

void FUN_1433ffef0(longlong param_1,int param_2)

{
  longlong lVar1;
  int local_res8 [2];
  
  if ((*(byte *)(param_1 + 0x15b) & 0x40) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_res8[0] = 0x4a;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
      if (lVar1 != 0) {
        Scaleform::Render::Text::Highlighter::Highlighter(lVar1);
        *(undefined4 *)(lVar1 + 0x38) = 0xbf800000;
        *(undefined2 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 0x3c) = 0xbf800000;
      }
      *(longlong *)(param_1 + 0x28) = lVar1;
    }
    lVar1 = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(param_1);
    if ((*(byte *)(lVar1 + 0x38) & 8) == 0) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] = *(int *)(lVar1 + 0x2c);
    }
    if (local_res8[0] != param_2) {
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 8;
      *(int *)(lVar1 + 0x2c) = param_2;
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x30) = 0;
    }
  }
  return;
}



// FUNCTION 1433fffc0 FUN_1433fffc0 body=62 status=ok
// SIG undefined FUN_1433fffc0(void)

undefined4 FUN_1433fffc0(void)

{
  longlong lVar1;
  
  lVar1 = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc();
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)(lVar1 + 0x38) & 8) != 0) {
    return *(undefined4 *)(lVar1 + 0x2c);
  }
  return 0;
}



// FUNCTION 143400010 FUN_143400010 body=64 status=ok
// SIG undefined FUN_143400010(void)

undefined4 FUN_143400010(void)

{
  longlong lVar1;
  
  lVar1 = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc();
  if (lVar1 == 0) {
    return 0xff000000;
  }
  if ((*(byte *)(lVar1 + 0x38) & 8) != 0) {
    return *(undefined4 *)(lVar1 + 0x2c);
  }
  return 0;
}



// FUNCTION 143400060 FUN_143400060 body=176 status=ok
// SIG undefined FUN_143400060(void)

void FUN_143400060(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_18;
  longlong local_10;
  
  local_res20 = -1;
  local_res8 = 0;
  local_res18 = 0;
  FUN_1433e8370(*(undefined8 *)(param_1 + 0x10),&local_18,param_2,&local_res20);
  if ((((local_18 != 0) && (-1 < local_10)) && (local_10 < *(int *)(local_18 + 8))) &&
     (param_2 - local_res20 != -1)) {
    lVar2 = param_2 + -1;
    if (param_2 - local_res20 == param_2) {
      lVar2 = param_2;
    }
    cVar1 = FUN_1433e6590(*(undefined8 *)(param_1 + 0x10),&local_res18,&local_res8,lVar2);
    if (cVar1 != '\0') {
      CAkParameterNodeBase::SetRTPC(*(undefined8 *)(param_1 + 0x10),local_res8);
      FUN_1433e69a0(*(undefined8 *)(param_1 + 0x10),local_res18);
    }
  }
  return;
}



// FUNCTION 143400120 FUN_143400120 body=129 status=ok
// SIG undefined FUN_143400120(void)

longlong FUN_143400120(longlong param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x158) & 8) != 0) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
    if (cVar1 == '\0') {
      iVar2 = 0x4b0;
      goto LAB_143400159;
    }
  }
  iVar2 = 0;
LAB_143400159:
  if (*(uint *)(param_1 + 0xc0) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)*(uint *)(param_1 + 0xc0);
  }
  fVar4 = (fVar3 - (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80))) + (float)iVar2;
  fVar3 = 0.0;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  return (longlong)fVar3;
}



// FUNCTION 143400240 FUN_143400240 body=138 status=ok
// SIG undefined FUN_143400240(void)

longlong FUN_143400240(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return *(longlong *)(param_1 + 0x28);
  }
  local_res8[0] = 0x4a;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
  if (lVar1 != 0) {
    Scaleform::Render::Text::Highlighter::Highlighter(lVar1);
    *(undefined4 *)(lVar1 + 0x38) = 0xbf800000;
    *(undefined2 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 0x3c) = 0xbf800000;
    *(longlong *)(param_1 + 0x28) = lVar1;
    return lVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



// FUNCTION 1434002d0 FUN_1434002d0 body=1919 status=ok
// SIG undefined FUN_1434002d0(void)

void FUN_1434002d0(longlong *param_1)

{
  undefined2 uVar1;
  uint *puVar2;
  void *_Src;
  void *_Dst;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined4 uVar18;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  RefCountImpl *local_68;
  RefCountNTSImpl *pRStack_60;
  undefined8 local_58;
  
  fVar16 = *(float *)(param_1 + 7);
  if (fVar16 <= 0.0) {
    fVar16 = fVar16 - 0.5;
  }
  else {
    fVar16 = fVar16 + 0.5;
  }
  lVar13 = param_1[4];
  iVar10 = (int)fVar16;
  if (lVar13 != 0) {
    if (iVar10 < 0) {
      uVar5 = (ushort)(iVar10 >> 0x1f);
      *(ushort *)(lVar13 + 6) = *(ushort *)(lVar13 + 6) | 0x40;
      *(ushort *)(lVar13 + 2) = ((ushort)iVar10 ^ uVar5) - uVar5;
    }
    else {
      *(ushort *)(lVar13 + 6) = *(ushort *)(lVar13 + 6) & 0xffbf;
      *(ushort *)(lVar13 + 2) = (ushort)iVar10;
    }
  }
  if (param_1[5] == 0) {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + iVar10;
  }
  else {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + *(int *)((longlong)param_1 + 0x3c);
  }
  lVar13 = param_1[2];
  if (((*(byte *)(lVar13 + 0x22) & 1) != 0) &&
     (((*(ushort *)(lVar13 + 0x22) & 0x600) == 0x200 ||
      (((*(byte *)(lVar13 + 0x22) & 1) != 0 && ((*(ushort *)(lVar13 + 0x22) & 0x600) == 0x600))))))
  {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + (int)param_1[0x1d];
    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + (int)param_1[0x1d];
  }
  if ((*(byte *)(lVar13 + 0x22) >> 3 & 1) == 0) {
    fVar16 = *(float *)((longlong)param_1 + 0x84);
  }
  else {
    fVar16 = (float)(int)*(short *)(lVar13 + 0x1c) * 20.0;
  }
  fVar15 = *(float *)(param_1 + 0x10) + *(float *)((longlong)param_1 + 0x7c);
  if (fVar15 <= 0.0) {
    fVar15 = fVar15 - 0.5;
  }
  else {
    fVar15 = fVar15 + 0.5;
  }
  uVar12 = (uint)fVar15;
  if (fVar16 <= 0.0) {
    fVar16 = fVar16 - 0.5;
  }
  else {
    fVar16 = fVar16 + 0.5;
  }
  iVar10 = (int)param_1[0xe];
  iVar6 = (int)fVar16;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  *(int *)(param_1 + 0xe) = iVar10;
  iVar10 = *(int *)((longlong)param_1 + 0x74);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  *(int *)((longlong)param_1 + 0x74) = iVar10;
  if ((char)param_1[0x2d] != '\0') {
    FUN_143401d10(param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x21);
  if ((((((*(byte *)(*param_1 + 0x159) & 0x30) == 0) && (*(uint *)(param_1 + 0xf) < 0x100)) &&
       (uVar3 < 0x100)) && ((iVar6 + 0x80U < 0x100 && (uVar12 < 0x10000)))) &&
     (*(uint *)(param_1 + 0xe) < 0x10000)) {
    plVar8 = (longlong *)param_1[0x107];
    iVar10 = (int)plVar8[2];
    if ((iVar10 < 0) || (iVar10 == -1)) {
      iVar10 = *(int *)(*plVar8 + 8);
    }
    uVar18 = 0;
  }
  else {
    plVar8 = (longlong *)param_1[0x107];
    iVar10 = (int)plVar8[2];
    if ((iVar10 < 0) || (iVar10 == -1)) {
      iVar10 = *(int *)(*plVar8 + 8);
    }
    uVar18 = 1;
  }
  puVar2 = (uint *)FUN_1433f3650(*plVar8,iVar10,(ulonglong)uVar3,(ulonglong)uVar7,uVar18);
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  uVar11 = *puVar2;
  if ((int)uVar11 < 0) {
    puVar2[1] = *(uint *)(param_1[0xd] + 0x40);
  }
  else {
    puVar2[7] = *(uint *)(param_1[0xd] + 0x40);
  }
  if ((int)uVar11 < 0) {
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_1[0xd] + 0x44);
  }
  else {
    *(undefined2 *)(puVar2 + 9) = *(undefined2 *)(param_1[0xd] + 0x44);
  }
  if ((char)param_1[0x2d] != '\0') {
    *puVar2 = uVar11 | 0x20000000;
  }
  lVar13 = 0x2a;
  if (*(int *)param_1[3] < 0) {
    lVar13 = 0x1e;
  }
  uVar11 = 0x2a;
  if ((int)*puVar2 < 0) {
    uVar11 = 0x1e;
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)uVar11 + (longlong)puVar2),(void *)(lVar13 + param_1[3]),
             (ulonglong)uVar3 << 3);
  _Src = (void *)FUN_1433f23a0(param_1[3]);
  _Dst = (void *)FUN_1433f23a0(puVar2);
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar7 << 3);
  uVar3 = ((int *)param_1[3])[2];
  if ((*(int *)param_1[3] < 0) && (uVar3 = uVar3 & 0xffffff, uVar3 == 0xffffff)) {
    uVar3 = 0xffffffff;
  }
  if ((int)*puVar2 < 0) {
    puVar2[2] = puVar2[2] & 0xff000000;
    puVar2[2] = puVar2[2] | uVar3 & 0xffffff;
  }
  else {
    puVar2[2] = uVar3;
  }
  if ((int)*puVar2 < 0) {
    *(char *)((longlong)puVar2 + 0xb) = (char)*(uint *)(param_1 + 0xf);
  }
  else {
    puVar2[8] = *(uint *)(param_1 + 0xf);
  }
  if (param_1[0x34] == 0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)(param_1[0x34] + 0x2c);
  }
  uVar3 = *puVar2;
  uVar1 = (undefined2)(longlong)(fVar16 + *(float *)((longlong)param_1 + 0x7c));
  if ((int)uVar3 < 0) {
    *(undefined2 *)((longlong)puVar2 + 0x1a) = uVar1;
  }
  else {
    *(undefined2 *)((longlong)puVar2 + 0x26) = uVar1;
  }
  if ((*(char *)((longlong)param_1 + 0x16a) == '\0') && ((*(byte *)(*param_1 + 0x158) & 8) != 0)) {
    if ((*(uint *)((longlong)param_1 + 0x114) < *(uint *)(param_1 + 0x22)) &&
       (((*(byte *)(param_1[2] + 0x22) & 1) != 0 &&
        ((*(ushort *)(param_1[2] + 0x22) & 0x600) == 0x400)))) {
      uVar7 = ((((int)(*(float *)(param_1 + 0xb6) - 30.0) - (int)param_1[0x1d]) -
               *(int *)((longlong)param_1 + 0xe4)) - (int)param_1[0x1c]) -
              *(int *)((longlong)param_1 + 0x74);
      if (0 < (int)uVar7) {
        uVar11 = *(uint *)(param_1 + 0x22) - *(uint *)((longlong)param_1 + 0x114);
        if ((int)uVar3 < 0) {
          uVar9 = (uint)(byte)puVar2[7];
        }
        else {
          uVar9 = puVar2[1];
        }
        lVar13 = 0x2a;
        if ((int)uVar3 < 0) {
          lVar13 = 0x1e;
        }
        local_d8 = FUN_1433f23a0(puVar2,(ulonglong)uVar7 % (ulonglong)uVar11);
        local_b8 = 0xffffffffffffffff;
        local_a8 = 0xffffffffffffffff;
        local_d0 = 0;
        local_e8 = (longlong)puVar2 + lVar13;
        local_c8 = 0;
        local_c0 = 0;
        local_b0 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_58 = 0;
        local_68 = (RefCountImpl *)0x0;
        pRStack_60 = (RefCountNTSImpl *)0x0;
        local_e0 = local_e8 + (ulonglong)uVar9 * 8;
        FUN_1433f2020(&local_e8);
LAB_143400760:
        do {
          if ((local_e8 == 0) || (local_e0 <= local_e8)) goto LAB_1434007bf;
          bVar4 = (byte)*(undefined2 *)(local_e8 + 6);
          if ((bVar4 >> 1 & 1) != 0) {
            uVar3 = (uint)*(ushort *)(local_e8 + 2);
            if ((bVar4 >> 6 & 1) != 0) {
              uVar3 = -(uint)*(ushort *)(local_e8 + 2);
            }
            iVar10 = uVar3 + uVar7 / uVar11;
            if (-1 < iVar10) {
              *(ushort *)(local_e8 + 6) = *(ushort *)(local_e8 + 6) & 0xffbf;
              *(ushort *)(local_e8 + 2) = (ushort)iVar10;
              Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_e8);
              goto LAB_143400760;
            }
            uVar5 = (ushort)(iVar10 >> 0x1f);
            *(ushort *)(local_e8 + 6) = *(ushort *)(local_e8 + 6) | 0x40;
            *(ushort *)(local_e8 + 2) = ((ushort)iVar10 ^ uVar5) - uVar5;
          }
          Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_e8);
        } while( true );
      }
    }
  }
LAB_1434007de:
  uVar7 = *(int *)((longlong)param_1 + 0xe4) + (int)param_1[0x1c];
  uVar3 = *(uint *)(param_1 + 0x189);
  puVar2[3] = uVar7;
  puVar2[4] = uVar3;
  uVar3 = *puVar2;
  if ((int)uVar3 < 0) {
    *(char *)((longlong)puVar2 + 0x1d) = (char)iVar6;
  }
  else {
    *(short *)(puVar2 + 10) = (short)iVar6;
  }
  uVar5 = *(ushort *)(param_1[2] + 0x22) >> 9 & 3;
  uVar1 = (undefined2)uVar12;
  if (uVar5 == 1) {
    *puVar2 = uVar3 & 0xefffffff | 0x8000000;
    if ((int)uVar3 < 0) {
      *(short *)(puVar2 + 5) = (short)*(uint *)((longlong)param_1 + 0x74);
      *(undefined2 *)((longlong)puVar2 + 0x16) = uVar1;
    }
    else {
      puVar2[5] = *(uint *)((longlong)param_1 + 0x74);
      puVar2[6] = uVar12;
    }
    fVar16 = *(float *)(param_1 + 0xb6);
    if ((char)param_1[0x2d] == '\0') {
      if (fVar16 <= 0.0) {
        fVar16 = fVar16 - 0.5;
      }
      else {
        fVar16 = fVar16 + 0.5;
      }
      uVar3 = (int)fVar16 - *(int *)((longlong)param_1 + 0x74);
      bVar14 = (int)uVar3 < 0;
      goto LAB_14340097c;
    }
    if (fVar16 <= 0.0) {
      uVar3 = (int)(fVar16 - 0.5) - *(int *)((longlong)param_1 + 0x74);
    }
    else {
      uVar3 = (int)(fVar16 + 0.5) - *(int *)((longlong)param_1 + 0x74);
    }
  }
  else {
    if (uVar5 != 3) {
      *puVar2 = uVar3 & 0xe7ffffff;
      if ((int)uVar3 < 0) {
        *(short *)(puVar2 + 5) = (short)*(uint *)(param_1 + 0xe);
        *(undefined2 *)((longlong)puVar2 + 0x16) = uVar1;
      }
      else {
        puVar2[5] = *(uint *)(param_1 + 0xe);
        puVar2[6] = uVar12;
      }
      goto LAB_1434009a4;
    }
    *puVar2 = uVar3 & 0xf7ffffff | 0x10000000;
    if ((int)uVar3 < 0) {
      *(short *)(puVar2 + 5) = (short)*(uint *)((longlong)param_1 + 0x74);
      *(undefined2 *)((longlong)puVar2 + 0x16) = uVar1;
    }
    else {
      puVar2[5] = *(uint *)((longlong)param_1 + 0x74);
      puVar2[6] = uVar12;
    }
    iVar10 = *(int *)((longlong)param_1 + 0xe4);
    fVar16 = (*(float *)(param_1 + 0xb6) - (float)iVar10) * 0.5 -
             (float)(*(int *)((longlong)param_1 + 0x74) / 2);
    if (fVar16 <= 0.0) {
      uVar3 = (int)(fVar16 - 0.5) + iVar10;
      bVar14 = (int)uVar3 < 0;
    }
    else {
      uVar3 = (int)(fVar16 + 0.5) + iVar10;
      bVar14 = (int)uVar3 < 0;
    }
LAB_14340097c:
    if (bVar14) {
      uVar3 = 0;
    }
  }
  puVar2[3] = uVar3;
  if (((*(byte *)(*param_1 + 0x158) & 1) != 0) || ((*(byte *)(*param_1 + 0x159) & 0x30) != 0)) {
    *(undefined1 *)((longlong)param_1 + 0xc64) = 1;
  }
LAB_1434009a4:
  iVar10 = (int)param_1[0xe] + uVar7;
  if (iVar10 < (int)param_1[0x18b]) {
    iVar10 = (int)param_1[0x18b];
  }
  *(int *)(param_1 + 0x18b) = iVar10;
  *(uint *)((longlong)param_1 + 0xc5c) =
       ((int)param_1[0x189] - *(int *)((longlong)param_1 + 0xc4c)) + uVar12;
  dVar17 = (double)(int)(iVar6 + uVar12);
  if (dVar17 <= 0.0) {
    dVar17 = dVar17 - 0.5;
  }
  else {
    dVar17 = dVar17 + 0.5;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x189) = (int)dVar17 + (int)param_1[0x189];
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = 0;
  return;
LAB_1434007bf:
  *(uint *)(param_1 + 0xe) = (int)param_1[0xe] + uVar7;
  if (pRStack_60 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_60);
  }
  if (local_68 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_68);
  }
  goto LAB_1434007de;
}



// FUNCTION 143400a60 FUN_143400a60 body=1025 status=ok
// SIG undefined FUN_143400a60(void)

void FUN_143400a60(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 local_168 [8];
  RefCountImpl *local_160;
  longlong local_100;
  longlong local_c0;
  longlong local_38;
  
  param_1[1] = param_2;
  param_1[2] = *(longlong *)(param_2 + 0x18);
  uVar7 = FUN_143403bf0(local_168,*param_1,param_2);
  FUN_143403fc0(param_1 + 4,uVar7);
  lVar8 = local_38;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_38);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
    }
  }
  lVar8 = local_c0;
  if (local_c0 != 0) {
    piVar1 = (int *)(local_c0 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_c0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
    }
  }
  lVar8 = local_100;
  if (local_100 != 0) {
    piVar1 = (int *)(local_100 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_100);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
    }
  }
  if (local_160 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_160);
  }
  uVar7 = FUN_143403d00(local_168);
  uVar7 = FUN_143403fc0(param_1 + 0x8b,uVar7);
  uVar7 = FUN_143403fc0(param_1 + 0x60,uVar7);
  FUN_143403fc0(param_1 + 0x35,uVar7);
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_38);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38);
    }
  }
  if (local_c0 != 0) {
    piVar1 = (int *)(local_c0 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_c0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c0);
    }
  }
  if (local_100 != 0) {
    piVar1 = (int *)(local_100 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_100);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_100);
    }
  }
  if (local_160 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_160);
  }
  *(float *)(param_1 + 0x23) = (float)*(ushort *)(*param_1 + 0x152) * 0.05;
  plVar5 = *(longlong **)(*param_1 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  FUN_143401070(param_1);
  FUN_143400e70(param_1);
  uVar11 = param_1[10] + *(longlong *)(param_2 + 8);
  if ((*(ushort *)(param_1[2] + 0x22) & 0x8080) == 0x8080) {
    uVar11 = uVar11 + 1;
  }
  uVar6 = FUN_1433f3840(uVar11 & 0xffffffff,(int)uVar11 * 2,1);
  puVar10 = (uint *)0x0;
  if (uVar6 < 0x400) {
    puVar2 = (uint *)(param_1 + 0x108);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = 0;
      puVar10 = puVar2;
    }
    param_1[3] = (longlong)puVar10;
    *puVar10 = *puVar10 & 0xf8000000;
    *puVar10 = *puVar10 | uVar6 & 0x7ffffff;
  }
  else {
    if ((uint *)param_1[0x188] == (uint *)0x0) {
      lVar8 = FUN_1433f4000(*param_1 + 0xa0,uVar6 + 100,1);
      param_1[0x188] = lVar8;
    }
    else {
      if ((*(uint *)param_1[0x188] & 0x7ffffff) <= uVar6) {
        Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(*param_1 + 0xa0);
        lVar8 = FUN_1433f4000(*param_1 + 0xa0,uVar6 + 100,1);
        param_1[0x188] = lVar8;
      }
      lVar8 = param_1[0x188];
    }
    param_1[3] = lVar8;
  }
  puVar10 = (uint *)param_1[3];
  *puVar10 = *puVar10 & 0x7ffffff | 0x40000000;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined4 *)((longlong)puVar10 + 0x26) = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[8] = 0;
  *(uint *)param_1[3] = *(uint *)param_1[3] & 0xbfffffff;
  piVar1 = (int *)param_1[3];
  if (*piVar1 < 0) {
    *(char *)(piVar1 + 7) = (char)uVar11;
  }
  else {
    piVar1[1] = (int)uVar11;
  }
  uVar6 = (uint)*(undefined8 *)(param_2 + 0x38);
  if (*(longlong **)(*param_1 + 0xd8) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(*param_1 + 0xd8) + 0x20))();
  }
  piVar1 = (int *)param_1[3];
  if (*piVar1 < 0) {
    piVar1[2] = piVar1[2] & 0xff000000;
    piVar1[2] = piVar1[2] | uVar6 & 0xffffff;
  }
  else {
    piVar1[2] = uVar6;
  }
  piVar1 = (int *)param_1[3];
  if (*piVar1 < 0) {
    uVar6 = (uint)*(byte *)(piVar1 + 7);
  }
  else {
    uVar6 = piVar1[1];
  }
  lVar8 = (longlong)piVar1 + 0x1e;
  if (-1 < *piVar1) {
    lVar8 = (longlong)piVar1 + 0x2a;
  }
  lVar9 = FUN_1433f23a0();
  param_1[0x1e] = lVar8;
  *(uint *)((longlong)param_1 + 0x104) = uVar6;
  param_1[0x1f] = lVar9;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x18b] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  fVar3 = *(float *)(*param_1 + 0x88);
  fVar4 = *(float *)(*param_1 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(float *)(param_1 + 0xb6) = fVar3 - fVar4;
  return;
}



// FUNCTION 143400e70 FUN_143400e70 body=498 status=ok
// SIG undefined FUN_143400e70(void)

void FUN_143400e70(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong _Size;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((((*(byte *)(lVar3 + 0x15a) & 4) == 0) || (*(longlong *)(lVar3 + 0x20) == 0)) ||
     ((*(byte *)(*(longlong *)(lVar3 + 0x20) + 0x10) & 0x10) == 0)) {
    *(byte *)(lVar3 + 0x15b) = *(byte *)(lVar3 + 0x15b) & 0xbf;
    return;
  }
  _Size = Scaleform::Render::Text::Paragraph::GetLength(param_1[1]);
  if (*(uint *)((longlong)param_1 + 0x7e4) < _Size) {
    *(int *)((longlong)param_1 + 0x7e4) = (int)_Size;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xfd]);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xfe]);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xff]);
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,_Size * 2,0);
    param_1[0xfd] = lVar3;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,_Size * 4,0);
    param_1[0xfe] = lVar3;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,_Size,0);
    param_1[0xff] = lVar3;
  }
  *(int *)(param_1 + 0xfc) = (int)_Size;
  _guard_xfg_dispatch_icall_nop((void *)param_1[0xfd],0,_Size * 2);
  _guard_xfg_dispatch_icall_nop((void *)param_1[0xfe],0,_Size * 4);
  _guard_xfg_dispatch_icall_nop((void *)param_1[0xff],0,_Size);
  plVar1 = *(longlong **)(*param_1 + 0x20);
  cVar2 = (**(code **)(*plVar1 + 0x10))
                    (plVar1,*param_1,*(undefined8 *)param_1[1],_Size,param_1[0xfd],param_1[0xfe],
                     param_1[0xff]);
  *(char *)(param_1 + 0x2d) = cVar2;
  if (cVar2 != '\0') {
    param_1[0x24] = param_1[1];
    *(int *)((longlong)param_1 + 0x144) = (int)param_1[0xfc] + -1;
    param_1[0x25] = param_1[0xfd];
    *(int *)(param_1 + 0x28) = (int)param_1[0xfc];
    param_1[0x26] = param_1[0xfe];
    param_1[0x27] = param_1[0xff];
    *(undefined4 *)(param_1 + 0x29) = 0;
    *(byte *)(*param_1 + 0x15b) = *(byte *)(*param_1 + 0x15b) | 0x40;
    return;
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return;
}



// FUNCTION 143401070 FUN_143401070 body=273 status=ok
// SIG undefined FUN_143401070(void)

void FUN_143401070(longlong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  
  if ((*(longlong *)(*param_1 + 0x20) == 0) ||
     (cVar3 = '\x01', (*(byte *)(*(longlong *)(*param_1 + 0x20) + 0x10) & 1) == 0)) {
    cVar3 = '\0';
  }
  *(char *)((longlong)param_1 + 0x5cc) = cVar3;
  param_1[0xfa] = 0;
  if (cVar3 != '\0') {
    uVar4 = Scaleform::Render::Text::Paragraph::GetLength(param_1[1]);
    uVar1 = *(ulonglong *)(param_1[1] + 0x38);
    if (((ulonglong)param_1[9] < uVar1) ||
       (lVar5 = Scaleform::Render::Text::Paragraph::GetLength(),
       lVar5 + uVar1 < (ulonglong)param_1[9])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      lVar5 = Scaleform::Render::Text::Paragraph::GetLength(param_1[1]);
      uVar4 = lVar5 + param_1[10];
    }
    if (uVar4 < 0x100) {
      _Dst = (void *)((longlong)param_1 + 0x5ce);
    }
    else {
      lVar5 = FUN_1433e9900(*(undefined8 *)(*param_1 + 0x10));
      _Dst = (void *)(**(code **)(**(longlong **)(lVar5 + 0x30) + 0x50))
                               (*(longlong **)(lVar5 + 0x30),uVar4 * 2 + 2,0);
    }
    if ((!bVar2) || (param_1[10] == 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,*(void **)param_1[1],uVar4 * 2);
    }
    *(undefined2 *)((longlong)_Dst + uVar4 * 2) = 0;
    param_1[0xfa] = (longlong)_Dst;
    param_1[0xfb] = uVar4;
    return;
  }
  return;
}



// FUNCTION 143401190 FUN_143401190 body=92 status=ok
// SIG undefined FUN_143401190(void)

float FUN_143401190(longlong *param_1)

{
  float fVar1;
  
  fVar1 = (float)*(ushort *)(param_1[0x32] + 0x48) * 0.05;
  if (*(float *)(param_1[0x34] + 0x28) != 1.0) {
    fVar1 = fVar1 * *(float *)(param_1[0x34] + 0x28);
  }
  if ((*(byte *)(*param_1 + 0x15b) & 4) != 0) {
    fVar1 = fVar1 * (float)*(ushort *)(*param_1 + 0x152) * 0.05;
  }
  return fVar1;
}



// FUNCTION 143401200 FUN_143401200 body=594 status=ok
// SIG undefined FUN_143401200(void)

undefined8 FUN_143401200(longlong *param_1)

{
  ushort *puVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_168 [352];
  
  if (((((int)param_1[0xb8] != 1) || ((*(byte *)(*param_1 + 0x158) & 8) == 0)) ||
      ((char)param_1[0x106] != '\0')) ||
     ((float)((int)param_1[0x105] + *(int *)((longlong)param_1 + 0x824) +
              *(int *)((longlong)param_1 + 0xe4) + (int)param_1[0x1c]) <=
      *(float *)(param_1 + 0xb6) - (float)(int)param_1[0x1d])) {
    if ((int)param_1[0xb8] != 2) {
      return 0;
    }
    if (param_1[0x2e] != (ulonglong)*(uint *)(param_1 + 0xb9)) {
      return 0;
    }
  }
  cVar4 = FUN_143401460(param_1);
  if (cVar4 != '\0') {
    return 1;
  }
  bVar3 = false;
  *(undefined4 *)(param_1 + 0x105) = 0;
  if ((char)param_1[0xb4] == '\0') {
    if ((param_1[0x9e] == 0) || (*(ulonglong *)(param_1[0x9e] + 8) <= (ulonglong)param_1[0x9f]))
    goto LAB_14340135d;
  }
  else if (*(int *)((longlong)param_1 + 0x57c) < 0) goto LAB_14340135d;
  local_188 = param_1[0xa5];
  local_180 = param_1[0xa6];
  local_178 = (undefined4)param_1[0xa7];
  local_174 = *(undefined4 *)((longlong)param_1 + 0x53c);
  local_170 = (undefined4)param_1[0xa8];
  FUN_1433f2290(param_1 + 0x1e,&local_188);
  FUN_143403fc0(param_1 + 4,param_1 + 0x8b);
  *(undefined1 *)(param_1 + 0x106) = 0;
  bVar3 = true;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
LAB_14340135d:
  uVar5 = FUN_143403d00(local_168);
  FUN_143403fc0(param_1 + 0x8b,uVar5);
  FUN_143403f10(local_168);
  uVar5 = *(undefined8 *)(param_1[1] + 0x38);
  lVar6 = FUN_143404230(param_1 + 4);
  uVar7 = (int)uVar5 + (int)*(undefined8 *)(lVar6 + 8);
  if (param_1[4] != 0) {
    puVar1 = (ushort *)(param_1[4] + 6);
    *puVar1 = *puVar1 | 8;
  }
  param_1[7] = 0;
  param_1[4] = 0;
  FUN_1434002d0(param_1);
  param_1[4] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x169) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x22] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  piVar2 = (int *)param_1[3];
  *(undefined4 *)(param_1 + 0xb7) = 0;
  if (*piVar2 < 0) {
    piVar2[2] = piVar2[2] & 0xff000000;
    piVar2[2] = piVar2[2] | uVar7 & 0xffffff;
  }
  else {
    piVar2[2] = uVar7;
  }
  if (!bVar3) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  return 1;
}



// FUNCTION 143401460 FUN_143401460 body=2209 status=ok
// SIG undefined FUN_143401460(void)

undefined8 FUN_143401460(longlong *param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ushort *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_618;
  longlong local_610;
  undefined1 *local_608;
  longlong local_600;
  longlong local_5f8;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  undefined4 local_5e4;
  undefined1 local_5e0;
  ulonglong local_5d8;
  undefined1 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [8];
  RefCountImpl *local_5b0;
  longlong local_550;
  longlong local_510;
  longlong local_488;
  undefined1 local_458 [1072];
  
  if (param_1[5] == 0) {
    return 0;
  }
  uVar22 = 0;
  if (((int)param_1[0xb8] != 1) || (*(char *)((longlong)param_1 + 0x5cc) == '\0')) {
    if ((int)param_1[0xb8] == 2) {
      uVar11 = FUN_143403d00(local_5b8);
      FUN_143403fc0(param_1 + 0x8b,uVar11);
      FUN_143403f10(local_5b8);
      *(undefined4 *)(param_1 + 0xb8) = 1;
    }
    goto LAB_143401b0d;
  }
  plVar15 = param_1 + 0x8b;
  if ((char)param_1[0xb4] == '\0') {
    if ((param_1[0x9e] != 0) && ((ulonglong)param_1[0x9f] < *(ulonglong *)(param_1[0x9e] + 8)))
    goto LAB_143401508;
LAB_143401571:
    plVar16 = *(longlong **)(param_1[5] + 0x30);
    uVar23 = param_1[0x2e];
    iVar5 = (int)param_1[0xe];
  }
  else {
    if (*(int *)((longlong)param_1 + 0x57c) < 0) goto LAB_143401571;
LAB_143401508:
    uVar23 = param_1[0xb5];
    plVar16 = *(longlong **)(param_1[0x8c] + 0x30);
    iVar5 = (int)param_1[0x95];
  }
  local_618 = param_1[0xfa];
  local_610 = param_1[0xfb];
  piVar3 = (int *)param_1[3];
  local_5e8 = (float)iVar5;
  if (*piVar3 < 0) {
    uVar17 = (ulonglong)(piVar3[2] & 0xffffffU);
    if ((piVar3[2] & 0xffffffU) == 0xffffff) {
      uVar17 = 0xffffffff;
    }
  }
  else {
    uVar17 = (ulonglong)(uint)piVar3[2];
  }
  local_600 = uVar17 - *(longlong *)(param_1[1] + 0x38);
  local_5f8 = param_1[0x2e];
  uVar2 = *(ushort *)(param_1[2] + 0x22) >> 9;
  uVar12 = uVar2 & 3;
  if ((uVar2 & 3) == 0) {
    local_5e0 = 0;
  }
  else if (uVar12 == 1) {
    local_5e0 = 1;
  }
  else if (uVar12 == 2) {
    local_5e0 = 3;
  }
  else if (uVar12 == 3) {
    local_5e0 = 2;
  }
  local_5f0 = *(float *)(param_1 + 0xb6);
  local_5ec = (float)(int)param_1[0xe];
  iVar5 = (**(code **)(*plVar16 + 0x10))(plVar16,0x2d);
  if (0 < iVar5) {
    local_5e4 = (**(code **)(*plVar16 + 0x28))(plVar16,iVar5);
  }
  puVar10 = local_458;
  local_5d8 = uVar23;
  if (0x100 < local_5f8 + 1U) {
    lVar9 = FUN_1433e9900(*(undefined8 *)(*param_1 + 0x10));
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x50))
                        (*(longlong **)(lVar9 + 0x30),local_5f8 * 4 + 4,0);
  }
  uVar7 = *(uint *)(param_1 + 0x20);
  lVar9 = param_1[0x1e];
  fVar26 = 0.0;
  uVar17 = uVar22;
  if (3 < uVar7) {
    puVar21 = (ushort *)(lVar9 + 2);
    pbVar14 = (byte *)(lVar9 + 6);
    puVar18 = (ushort *)(lVar9 + 4);
    do {
      if (0xfff < *puVar18) goto LAB_143401783;
      uVar6 = (uint)*puVar21;
      if ((*pbVar14 >> 6 & 1) != 0) {
        uVar6 = -(uint)*puVar21;
      }
      fVar26 = fVar26 + (float)(int)uVar6;
      iVar5 = (int)uVar17;
      if (0xfff < puVar18[4]) {
        uVar17 = (ulonglong)(iVar5 + 1);
        goto LAB_143401783;
      }
      uVar6 = (uint)puVar21[4];
      if ((pbVar14[8] >> 6 & 1) != 0) {
        uVar6 = -(uint)puVar21[4];
      }
      fVar26 = fVar26 + (float)(int)uVar6;
      if (0xfff < puVar18[8]) {
        uVar17 = (ulonglong)(iVar5 + 2);
        goto LAB_143401783;
      }
      uVar6 = (uint)puVar21[8];
      if ((pbVar14[0x10] >> 6 & 1) != 0) {
        uVar6 = -(uint)puVar21[8];
      }
      fVar26 = fVar26 + (float)(int)uVar6;
      if (0xfff < puVar18[0xc]) {
        uVar17 = (ulonglong)(iVar5 + 3);
        goto LAB_143401783;
      }
      uVar6 = (uint)puVar21[0xc];
      if ((pbVar14[0x18] >> 6 & 1) != 0) {
        uVar6 = -(uint)puVar21[0xc];
      }
      puVar18 = puVar18 + 0x10;
      pbVar14 = pbVar14 + 0x20;
      puVar21 = puVar21 + 0x10;
      uVar17 = (ulonglong)(iVar5 + 4U);
      fVar26 = fVar26 + (float)(int)uVar6;
    } while (iVar5 + 4U < uVar7 - 3);
  }
  if ((uint)uVar17 < uVar7) {
    puVar21 = (ushort *)(lVar9 + 2 + uVar17 * 8);
    do {
      if (0xfff < puVar21[1]) break;
      uVar6 = (uint)*puVar21;
      if (((byte)puVar21[2] >> 6 & 1) != 0) {
        uVar6 = -(uint)*puVar21;
      }
      puVar21 = puVar21 + 4;
      uVar20 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar20;
      fVar26 = fVar26 + (float)(int)uVar6;
    } while (uVar20 < uVar7);
  }
LAB_143401783:
  local_5f0 = local_5f0 - fVar26;
  local_5ec = local_5ec - fVar26;
  local_5e8 = local_5e8 - fVar26;
  fVar26 = 0.0;
  if ((uint)uVar17 < uVar7) {
    puVar21 = (ushort *)(lVar9 + uVar17 * 8 + 2);
    uVar17 = (ulonglong)(uVar7 - (uint)uVar17);
    do {
      *(float *)(puVar10 + uVar22 * 4) = fVar26;
      uVar7 = (uint)*puVar21;
      if (((byte)puVar21[2] >> 6 & 1) != 0) {
        uVar7 = -(uint)*puVar21;
      }
      uVar6 = (uint)(puVar21[1] >> 0xc);
      fVar26 = fVar26 + (float)(int)uVar7;
      if (1 < uVar6) {
        uVar19 = (ulonglong)uVar6;
        puVar13 = (undefined4 *)(puVar10 + uVar22 * 4);
        lVar9 = uVar22 * 2;
        do {
          *(undefined2 *)(lVar9 + param_1[0xfa]) = 0xa0;
          *puVar13 = 0;
          uVar19 = uVar19 - 1;
          puVar13 = puVar13 + 1;
          lVar9 = lVar9 + 2;
        } while (uVar19 != 0);
      }
      puVar21 = puVar21 + 4;
      uVar22 = uVar22 + uVar6;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  *(float *)(puVar10 + uVar22 * 4) = fVar26;
  local_5d0 = 0;
  plVar16 = *(longlong **)(*param_1 + 0x20);
  local_608 = puVar10;
  cVar4 = (**(code **)(*plVar16 + 8))(plVar16,*param_1,&local_618);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x5c4) = local_5d0;
    if (local_5d8 == 0) {
      local_5d8 = 1;
    }
    if (local_5d8 != uVar23) {
      if ((char)param_1[0xb4] == '\0') {
        if ((param_1[0x9e] == 0) || (*(ulonglong *)(param_1[0x9e] + 8) <= (ulonglong)param_1[0x9f]))
        goto LAB_1434018ce;
LAB_143401a77:
        if (local_5d8 <= (ulonglong)param_1[0xb5]) goto LAB_1434018ce;
        FUN_1433f2290(param_1 + 0x1e,param_1 + 0xa5);
      }
      else {
        if (-1 < *(int *)((longlong)param_1 + 0x57c)) goto LAB_143401a77;
LAB_1434018ce:
        if ((char)param_1[0x89] == '\0') {
          if ((param_1[0x73] != 0) && ((ulonglong)param_1[0x74] < *(ulonglong *)(param_1[0x73] + 8))
             ) {
LAB_143401ab0:
            if ((ulonglong)param_1[0x8a] < local_5d8) {
              FUN_1433f2290(param_1 + 0x1e,param_1 + 0x7a);
              plVar15 = param_1 + 0x60;
              goto LAB_143401912;
            }
          }
        }
        else if (-1 < *(int *)((longlong)param_1 + 0x424)) goto LAB_143401ab0;
        FUN_1433f2290(param_1 + 0x1e,param_1 + 0x4f);
        plVar15 = param_1 + 0x35;
      }
LAB_143401912:
      FUN_143403fc0(param_1 + 4,plVar15);
      *(undefined4 *)(param_1 + 0xb9) = (undefined4)local_5d8;
      *(undefined4 *)(param_1 + 0xb8) = 2;
      *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
    }
  }
  if (puVar10 != local_458) {
    FUN_1433e9900(*(undefined8 *)(*param_1 + 0x10));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar10);
  }
  uVar11 = FUN_143403d00(local_5b8);
  uVar11 = FUN_143403fc0(param_1 + 0x60,uVar11);
  FUN_143403fc0(param_1 + 0x35,uVar11);
  if (local_488 != 0) {
    piVar3 = (int *)(local_488 + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_1433dd700(local_488);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_488);
    }
  }
  if (local_510 != 0) {
    piVar3 = (int *)(local_510 + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_1433dd700(local_510);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_510);
    }
  }
  if (local_550 != 0) {
    piVar3 = (int *)(local_550 + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_1433dd700(local_550);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_550);
    }
  }
  if (local_5b0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_5b0);
  }
  if ((cVar4 != '\0') && ((int)param_1[0xb8] == 2)) {
    return 1;
  }
LAB_143401b0d:
  if (*(char *)((longlong)param_1 + 0x5c4) != '\0') {
    uVar7 = *(uint *)(param_1 + 0x20);
    lVar9 = param_1[0x1e];
    *(undefined8 *)(lVar9 + (ulonglong)uVar7 * 8) = 0;
    fVar26 = *(float *)(param_1 + 7);
    puVar1 = (undefined2 *)(lVar9 + (ulonglong)uVar7 * 8);
    if (fVar26 <= 0.0) {
      fVar26 = fVar26 - 0.5;
    }
    else {
      fVar26 = fVar26 + 0.5;
    }
    lVar9 = param_1[4];
    iVar5 = (int)fVar26;
    if (lVar9 != 0) {
      if (iVar5 < 0) {
        uVar2 = (ushort)(iVar5 >> 0x1f);
        *(ushort *)(lVar9 + 6) = *(ushort *)(lVar9 + 6) | 0x40;
        *(ushort *)(lVar9 + 2) = ((ushort)iVar5 ^ uVar2) - uVar2;
      }
      else {
        *(ushort *)(lVar9 + 2) = (ushort)iVar5;
        *(ushort *)(lVar9 + 6) = *(ushort *)(lVar9 + 6) & 0xffbf;
      }
    }
    uVar8 = (**(code **)(**(longlong **)(param_1[5] + 0x30) + 0x10))
                      (*(longlong **)(param_1[5] + 0x30),0x2d);
    puVar1[2] = puVar1[2] & 0xfff;
    uVar2 = puVar1[2];
    *puVar1 = (short)uVar8;
    fVar26 = *(float *)((longlong)param_1 + 0x82c);
    if ((256.0 <= fVar26) || (((longlong)(fVar26 * 16.0) & 0xfU) == 0)) {
      puVar1[3] = puVar1[3] & 0xffef;
      puVar1[2] = ((ushort)(longlong)fVar26 ^ uVar2) & 0xfff ^ uVar2;
    }
    else {
      puVar1[3] = puVar1[3] | 0x10;
      puVar1[2] = ((ushort)(longlong)(fVar26 * 16.0) ^ uVar2) & 0xfff ^ uVar2;
    }
    *(int *)(param_1 + 0xe) = (int)param_1[0x105];
    fVar24 = (float)(**(code **)(**(longlong **)(param_1[5] + 0x30) + 0x18))
                              (*(longlong **)(param_1[5] + 0x30),uVar8);
    fVar26 = *(float *)(param_1 + 0x102);
    local_5c8 = 0;
    uStack_5c0 = 0;
    lVar9 = (**(code **)(*(longlong *)param_1[0x100] + 0x38))
                      ((longlong *)param_1[0x100],uVar8,&local_5c8);
    fVar25 = *(float *)(lVar9 + 8) * *(float *)(param_1 + 0x102) + 20.0;
    if (fVar25 <= fVar24 * fVar26) {
      fVar25 = fVar24 * fVar26;
    }
    if (fVar25 <= 0.0) {
      fVar25 = fVar25 - 0.5;
    }
    else {
      fVar25 = fVar25 + 0.5;
    }
    iVar5 = (int)fVar25;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0x5c4) = 0;
    param_1[4] = (longlong)puVar1;
    *(int *)((longlong)param_1 + 0x3c) = iVar5;
    *(int *)((longlong)param_1 + 0x74) = iVar5 + (int)param_1[0x105];
    *(float *)(param_1 + 7) = (float)iVar5;
    if ((param_1[0x1e] != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)((longlong)param_1 + 0x104)))
    {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
    }
  }
  return 0;
}



// FUNCTION 143401d10 FUN_143401d10 body=1040 status=ok
// SIG undefined FUN_143401d10(void)

void FUN_143401d10(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  RefCountImpl *pRVar4;
  undefined1 auVar5 [16];
  RefCountNTSImpl *pRVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint local_res8;
  RefCountImpl *local_res18;
  ulonglong local_res20;
  ulonglong *local_f8;
  ulonglong *local_e8;
  ulonglong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  RefCountImpl *local_68;
  RefCountNTSImpl *pRStack_60;
  undefined8 local_58;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  uVar15 = CONCAT44(0,uVar2);
  *(undefined8 *)(param_1 + 0x70) = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar15;
  uVar8 = SUB168(ZEXT816(0x20) * auVar5,0);
  if (SUB168(ZEXT816(0x20) * auVar5,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  lVar9 = uVar8 + 8;
  if (0xfffffffffffffff7 < uVar8) {
    lVar9 = -1;
  }
  local_f8 = (ulonglong *)operator_new(lVar9);
  if (local_f8 == (ulonglong *)0x0) {
    local_f8 = (ulonglong *)0x0;
  }
  else {
    *local_f8 = uVar15;
    local_f8 = local_f8 + 1;
    puVar13 = local_f8;
    for (uVar8 = uVar15; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13 = puVar13 + 4;
    }
  }
  lVar9 = 0x2a;
  piVar3 = *(int **)(param_1 + 0x18);
  lVar11 = 0x2a;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  if (*piVar3 < 0) {
    lVar11 = 0x1e;
  }
  local_d8 = FUN_1433f23a0(piVar3);
  local_b8 = 0xffffffffffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_e8 = (ulonglong *)(lVar11 + (longlong)piVar3);
  local_e0 = local_e8 + uVar15;
  local_a8 = 0xffffffffffffffff;
  local_68 = (RefCountImpl *)0x0;
  pRStack_60 = (RefCountNTSImpl *)0x0;
  FUN_1433f2020(&local_e8);
  uVar8 = 0;
  while ((pRVar4 = local_68, local_e8 != (ulonglong *)0x0 && (local_e8 < local_e0))) {
    local_f8[uVar8 * 4] = *local_e8;
    if (local_68 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(local_68);
    }
    if ((RefCountImpl *)local_f8[uVar8 * 4 + 1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)local_f8[uVar8 * 4 + 1]);
    }
    pRVar6 = pRStack_60;
    local_f8[uVar8 * 4 + 1] = (ulonglong)pRVar4;
    if (pRStack_60 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRStack_60 + 8) = *(int *)(pRStack_60 + 8) + 1;
    }
    if ((RefCountNTSImpl *)local_f8[uVar8 * 4 + 2] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)local_f8[uVar8 * 4 + 2]);
    }
    local_f8[uVar8 * 4 + 2] = (ulonglong)pRVar6;
    *(undefined4 *)(local_f8 + uVar8 * 4 + 3) = (undefined4)local_78;
    if ((int)uVar8 != 0) {
      uVar1 = *(ushort *)(uVar8 * 0x20 + 2 + (longlong)local_f8);
      uVar7 = (uint)uVar1;
      if ((*(byte *)(uVar8 * 0x20 + 6 + (longlong)local_f8) >> 6 & 1) != 0) {
        uVar7 = -(uint)uVar1;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + uVar7;
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_e8);
  }
  if (pRStack_60 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_60);
  }
  if (local_68 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_68);
  }
  piVar3 = *(int **)(param_1 + 0x18);
  lVar11 = 0x2a;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  if (*piVar3 < 0) {
    lVar11 = 0x1e;
  }
  uVar10 = FUN_1433f23a0(piVar3);
  FUN_1433f2440(lVar11 + (longlong)piVar3,uVar15,uVar10);
  if (**(int **)(param_1 + 0x18) < 0) {
    lVar9 = 0x1e;
  }
  lVar9 = lVar9 + (longlong)*(int **)(param_1 + 0x18);
  lVar11 = FUN_1433f23a0();
  uVar8 = 0;
  local_res20 = 0;
  local_res18 = (RefCountImpl *)0x0;
  lVar17 = (longlong)(int)(uVar2 - 1);
  local_res8 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    puVar13 = local_f8 + lVar17 * 4 + 1;
    uVar15 = uVar8;
    uVar16 = uVar8;
    do {
      puVar12 = (ulonglong *)(uVar16 * 8 + lVar9);
      *puVar12 = 0;
      *puVar12 = puVar13[-1];
      *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) & 0x87ff;
      uVar14 = puVar13[1];
      if ((uVar14 == 0) || (local_res20 == uVar14)) {
        pRVar4 = (RefCountImpl *)*puVar13;
        uVar14 = uVar8;
        uVar7 = (uint)uVar15;
        if ((pRVar4 != (RefCountImpl *)0x0) && (local_res18 != pRVar4)) {
          *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) | 0x4000;
          *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) | 0x2000;
          uVar14 = (ulonglong)((int)uVar8 + 1);
          *(RefCountImpl **)(lVar11 + uVar8 * 8) = pRVar4;
          Scaleform::RefCountImpl::AddRef(pRVar4);
          local_res18 = (RefCountImpl *)*puVar13;
          uVar7 = local_res8;
        }
        uVar15 = puVar13[2];
        uVar8 = uVar14;
        if (uVar7 != (uint)uVar15) {
          *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) | 0x4000;
          *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) | 0x1000;
          uVar8 = (ulonglong)((int)uVar14 + 1);
          *(uint *)(lVar11 + uVar14 * 8) = (uint)uVar15;
          local_res8 = (uint)puVar13[2];
        }
      }
      else {
        *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) | 0x4000;
        *(ushort *)((longlong)puVar12 + 6) = *(ushort *)((longlong)puVar12 + 6) | 0x800;
        *(ulonglong *)(lVar11 + uVar8 * 8) = uVar14;
        *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1;
        local_res20 = puVar13[1];
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
      }
      *puVar13 = 0;
      if ((RefCountNTSImpl *)puVar13[1] != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar13[1]);
      }
      puVar13[1] = 0;
      lVar17 = lVar17 + -1;
      puVar13 = puVar13 + -4;
      if ((lVar9 != 0) && ((uint)uVar16 < uVar2)) {
        uVar16 = (ulonglong)((uint)uVar16 + 1);
      }
      uVar15 = (ulonglong)local_res8;
    } while (-1 < lVar17);
  }
  if (local_f8 != (ulonglong *)0x0) {
    uVar8 = local_f8[-1];
    if (uVar8 != 0) {
      puVar13 = local_f8 + uVar8 * 4 + 1;
      do {
        puVar12 = puVar13 + -3;
        puVar13 = puVar13 + -4;
        uVar8 = uVar8 - 1;
        if ((RefCountNTSImpl *)*puVar12 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar12);
        }
        if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
        }
      } while (uVar8 != 0);
    }
    FMemory::operator_delete(local_f8 + -1,local_f8[-1] * 0x20 + 8);
  }
  return;
}



// FUNCTION 143402130 FUN_143402130 body=368 status=ok
// SIG undefined FUN_143402130(void)

longlong * FUN_143402130(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143403d00(param_1 + 4);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x78))();
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  param_1[0x30] = lVar1;
  param_1[0x2f] = 0;
  param_1[0x31] = (longlong)(param_1 + 0x2f);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_1434046a0();
  FUN_143403d00(param_1 + 0x35);
  FUN_143403d00(param_1 + 0x60);
  FUN_143403d00(param_1 + 0x8b);
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5cc) = 0;
  param_1[0xfa] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined2 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  param_1[0x188] = 0;
  param_1[0x18b] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  param_1[0x189] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc64) = 0;
  param_1[0x18a] = param_3;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined2 *)((longlong)param_1 + 0x5ce) = 0;
  return param_1;
}



// FUNCTION 1434022b0 FUN_1434022b0 body=187 status=ok
// SIG undefined FUN_1434022b0(void)

void FUN_1434022b0(longlong *param_1)

{
  if (param_1[0x188] != 0) {
    Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(*param_1 + 0xa0);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xfd]);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xfe]);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xff]);
  if ((RefCountImpl *)param_1[0x101] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x101]);
  }
  FUN_143403f10(param_1 + 0x8b);
  FUN_143403f10(param_1 + 0x60);
  FUN_143403f10(param_1 + 0x35);
  FUN_143403e90(param_1 + 0x31);
  FUN_143331d70(param_1 + 0x2f);
  FUN_143403f10(param_1 + 4);
  return;
}



// FUNCTION 143402380 FUN_143402380 body=5047 status=ok
// SIG undefined FUN_143402380(void)

void FUN_143402380(longlong *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  ushort uVar15;
  short sVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong *plVar20;
  RefCountImpl *pRVar21;
  longlong *plVar22;
  RefCountNTSImpl *this;
  RefCountNTSImpl *this_00;
  ulonglong *puVar23;
  undefined8 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ushort uVar28;
  undefined1 *puVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  longlong local_res18;
  ulonglong local_res20;
  undefined4 *puVar33;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined4 local_130 [2];
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  undefined4 local_110 [2];
  undefined1 *local_108 [24];
  
  bVar11 = false;
  bVar10 = false;
  *(byte *)(*param_1 + 0x15b) = *(byte *)(*param_1 + 0x15b) & 0xbf;
  FUN_143400a60();
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  if ((*(ushort *)(param_1[2] + 0x22) & 0x8080) == 0x8080) {
    uVar26 = (ulonglong)*(uint *)(param_1 + 0x20);
    lVar25 = param_1[0x1e];
    *(undefined8 *)(lVar25 + uVar26 * 8) = 0;
    plVar20 = (longlong *)FUN_143404230(param_1 + 4);
    if (*plVar20 != 0) {
      piVar1 = (int *)(*plVar20 + 8);
      *piVar1 = *piVar1 + 1;
    }
    lVar8 = param_1[0x32];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar8);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
      }
    }
    lVar8 = *plVar20;
    param_1[0x32] = lVar8;
    if (lVar8 != 0) {
      pRVar21 = (RefCountImpl *)FUN_1433fb160(*param_1,param_1 + 0x31,0);
      if (pRVar21 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar21);
      }
      uVar14 = (**(code **)(**(longlong **)(pRVar21 + 0x30) + 0x10))
                         (*(longlong **)(pRVar21 + 0x30),0x2022);
      *(undefined2 *)(lVar25 + uVar26 * 8) = uVar14;
      *(undefined2 *)(lVar25 + 2 + uVar26 * 8) = 300;
      puVar3 = (ushort *)(lVar25 + 6 + uVar26 * 8);
      *puVar3 = *puVar3 & 0xffbf;
      uVar28 = *(ushort *)(lVar25 + 6 + uVar26 * 8);
      fVar31 = (float)FUN_143401190(param_1);
      fVar31 = (fVar31 + fVar31) / 3.0;
      if ((256.0 <= fVar31) ||
         (uVar15 = (ushort)(longlong)(fVar31 * 16.0), ((longlong)(fVar31 * 16.0) & 0xfU) == 0)) {
        uVar28 = uVar28 & 0xffef;
        uVar15 = (ushort)(longlong)fVar31;
      }
      else {
        uVar28 = uVar28 | 0x10;
      }
      *(ushort *)(lVar25 + 6 + uVar26 * 8) = uVar28;
      puVar3 = (ushort *)(lVar25 + 4 + uVar26 * 8);
      *puVar3 = *puVar3 & 0xf000;
      puVar3 = (ushort *)(lVar25 + 4 + uVar26 * 8);
      *puVar3 = *puVar3 | uVar15 & 0xfff;
      puVar3 = (ushort *)(lVar25 + 4 + uVar26 * 8);
      *puVar3 = *puVar3 & 0xfff;
      uVar18 = *(undefined4 *)(param_1[0x32] + 0x40);
      puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
      *puVar3 = *puVar3 | 0x4000;
      puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
      *puVar3 = *puVar3 | 0x2000;
      *(RefCountImpl **)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x21) * 8) = pRVar21;
      *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
      Scaleform::RefCountImpl::AddRef(pRVar21);
      puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
      *puVar3 = *puVar3 | 0x4000;
      puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
      *puVar3 = *puVar3 | 0x1000;
      *(undefined4 *)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x21) * 8) = uVar18;
      *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
      if ((param_1[0x1e] != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)((longlong)param_1 + 0x104))
         ) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
      }
      Scaleform::RefCountImpl::AddRef(pRVar21);
      if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
      }
      param_1[5] = (longlong)pRVar21;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar18;
      Scaleform::RefCountImpl::Release(pRVar21);
    }
    *(undefined4 *)((longlong)param_1 + 0xe4) = 700;
    *(undefined4 *)(param_1 + 0xe) = 700;
    *(undefined4 *)(param_1 + 0x1c) = 0xfffffed4;
  }
  else {
    *(int *)(param_1 + 0x1c) = *(short *)(param_1[2] + 0x1a) * 0x14;
  }
  this_00 = (RefCountNTSImpl *)0x0;
  lVar25 = param_1[2];
  *(int *)((longlong)param_1 + 0xe4) =
       *(int *)((longlong)param_1 + 0xe4) +
       ((uint)*(ushort *)(lVar25 + 0x1e) + (uint)*(ushort *)(lVar25 + 0x18)) * 0x14;
  *(uint *)(param_1 + 0x1d) =
       ((uint)*(ushort *)(lVar25 + 0x20) + (uint)*(ushort *)(lVar25 + 0x20) * 4) * 4;
  local_118 = Scaleform::Render::Text::ParagraphFormat::GetTabStops
                        (lVar25,(longlong)param_1 + 0x5b4);
  do {
    this = (RefCountNTSImpl *)0x0;
    plVar20 = param_1 + 4;
    if ((char)param_1[0x2d] == '\0') {
      if ((param_1[0x17] == 0) || (*(ulonglong *)(param_1[0x17] + 8) <= (ulonglong)param_1[0x18]))
      goto LAB_14340272a;
    }
    else if (*(int *)((longlong)param_1 + 0x144) < 0) {
LAB_14340272a:
      if (param_1[3] != 0) {
        FUN_1434002d0(param_1);
      }
      if ((param_1[0xfa] != 0) && (param_1[0xfa] != (longlong)param_1 + 0x5ce)) {
        FUN_1433e9900(*(undefined8 *)(*param_1 + 0x10));
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xfa]);
      }
      if (this_00 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this_00);
      }
      return;
    }
    plVar22 = (longlong *)FUN_143404230(plVar20);
    local_148 = plVar22;
    if ((int)param_1[0xb8] == 1) {
      if ((((*(byte *)(*param_1 + 0x158) & 8) != 0) && (this_00 == (RefCountNTSImpl *)0x0)) &&
         (cVar12 = FUN_143392c50(7,(short)param_1[6],(short)plVar22[2]), cVar12 != '\0')) {
        FUN_143403fc0(param_1 + 0x8b,plVar20);
      }
      if (((int)param_1[0xb8] == 1) && (*(char *)((longlong)param_1 + 0x5cc) != '\0')) {
        fVar31 = *(float *)(param_1 + 0xb6);
        if (((int)param_1[0xe] == 0) && (param_1[0x3d] == 0)) {
          FUN_143403fc0(param_1 + 0x35,plVar20);
        }
        if ((fVar31 * 0.5 < (float)(int)param_1[0xe]) && (param_1[0x68] == 0)) {
          FUN_143403fc0(param_1 + 0x60,plVar20);
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x5bc) = 1;
    if (this_00 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
    if (*(longlong *)(*param_1 + 0x30) == 0) {
LAB_1434029aa:
      this_00 = this;
      if ((*plVar22 != 0) &&
         (((*(ushort *)(*plVar22 + 0x4c) >> 9 & 1) != 0 && ((short)plVar22[2] != 0)))) {
        this_00 = (RefCountNTSImpl *)FUN_1433e0c20();
        if (this_00 != (RefCountNTSImpl *)0x0) {
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        }
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
    }
    else {
      if ((char)param_1[0x2d] == '\0') {
        this = (RefCountNTSImpl *)
               Scaleform::Render::Text::Paragraph::CharactersIterator::GetRemainingTextPtr
                         (param_1 + 0x11,&local_res18);
      }
      else {
        local_res18 = (longlong)*(int *)((longlong)param_1 + 0x144);
        if (*(int *)((longlong)param_1 + 0x144) < 0) {
          local_res18 = 0;
        }
        else {
          this = (RefCountNTSImpl *)
                 (param_1[0x25] +
                 ((ulonglong)*(uint *)(param_1 + 0x28) - (ulonglong)*(uint *)(param_1 + 0x29)) * 2);
        }
      }
      this = (RefCountNTSImpl *)
             FUN_1433facc0(*(undefined8 *)(*param_1 + 0x30),this,local_res18,local_130,
                           (char)param_1[0x2d]);
      if ((this == (RefCountNTSImpl *)0x0) ||
         (*(int *)(this + 8) = *(int *)(this + 8) + 1, this == (RefCountNTSImpl *)0x0))
      goto LAB_1434029aa;
      *(undefined4 *)((longlong)param_1 + 0x5bc) = local_130[0];
      this_00 = this;
    }
    param_1[0x100] = 0;
    *(undefined4 *)(param_1 + 0x102) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x82c) = 0xbf800000;
    if (this_00 == (RefCountNTSImpl *)0x0) {
      bVar30 = (short)plVar22[2] == 0xa0;
      *(bool *)((longlong)param_1 + 0x831) = bVar30;
      uVar28 = *(ushort *)(plVar22 + 2);
      if ((uVar28 == 0) ||
         (((!bVar30 &&
           (uVar15 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar28 >> 8) * 2), uVar15 != 0)) &&
          ((uVar15 == 1 ||
           ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar28 >> 4 & 0xf) + (uint)uVar15) * 2) >>
             (uVar28 & 0xf) & 1) != 0)))))) {
        uVar13 = 1;
      }
      else {
        uVar13 = 0;
      }
      *(undefined1 *)(param_1 + 0x106) = uVar13;
      if ((param_1[0x34] != 0) && (param_1[0x32] == *plVar22)) {
        if ((RefCountImpl *)param_1[0x34] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_1[0x34]);
        }
        if ((RefCountImpl *)param_1[0x101] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x101]);
        }
        param_1[0x101] = param_1[0x34];
LAB_143402b5b:
        plVar20 = *(longlong **)(param_1[0x101] + 0x30);
        param_1[0x100] = (longlong)plVar20;
        fVar31 = (float)FUN_143401190(param_1);
        *(float *)((longlong)param_1 + 0x82c) = fVar31;
        *(float *)(param_1 + 0x102) = fVar31 * 20.0 * 0.0009765625;
        sVar16 = 10;
        sVar6 = (short)plVar22[2];
        if ((*(byte *)(*(longlong *)(*param_1 + 0x10) + 0x40) & 2) != 0) {
          sVar16 = 0xd;
        }
        if ((sVar6 == sVar16) || (sVar6 == 0)) {
          uVar18 = (**(code **)(*plVar20 + 0x10))(plVar20,0x20);
          *(undefined4 *)((longlong)param_1 + 0x814) = uVar18;
          fVar31 = (float)(**(code **)(*(longlong *)param_1[0x100] + 0x18))
                                    ((longlong *)param_1[0x100],uVar18);
          *(float *)(param_1 + 0x103) = fVar31 * 0.5 * *(float *)(param_1 + 0x102);
        }
        else if (sVar6 == 9) {
          *(undefined4 *)((longlong)param_1 + 0x814) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x103) = 0;
        }
        else {
          iVar17 = (**(code **)(*plVar20 + 0x10))(plVar20);
          *(int *)((longlong)param_1 + 0x814) = iVar17;
          if (iVar17 == -1) {
            if (*(char *)((longlong)param_1 + 0x831) != '\0') {
              uVar18 = (**(code **)(*(longlong *)param_1[0x100] + 0x10))
                                 ((longlong *)param_1[0x100],0x20);
              *(undefined4 *)((longlong)param_1 + 0x814) = uVar18;
            }
            if (((*(int *)((longlong)param_1 + 0x814) == -1) && (param_1[0x18a] != 0)) &&
               ((*(byte *)(*param_1 + 0x15b) & 0x10) == 0)) {
              local_110[0] = 1;
              FUN_1432c5960(local_108,DAT_146b62f28);
              uVar14 = *(undefined2 *)(param_1[0x32] + 0x4c);
              bVar4 = *(byte *)(param_1[0x32] + 0x4a);
              bVar5 = *(byte *)(*param_1 + 0x158);
              puVar23 = (ulonglong *)FUN_1433ddd30();
              puVar33 = local_110;
              pRVar21 = (RefCountImpl *)
                        (**(code **)(**(longlong **)(*param_1 + 0x18) + 8))
                                  (*(longlong **)(*param_1 + 0x18),
                                   (*puVar23 & 0xfffffffffffffffc) + 0xc,
                                   (bVar5 & 0x20 | bVar4 & 2) >> 1 | -(uint)((bVar4 & 1) != 0) & 2,
                                   (byte)((ushort)uVar14 >> 0xc) & 1 ^ 1,puVar33);
              uVar18 = (undefined4)((ulonglong)puVar33 >> 0x20);
              plVar20 = *(longlong **)(*param_1 + 0x20);
              if (plVar20 == (longlong *)0x0) {
                bVar10 = true;
                uVar24 = FUN_1432c2f70(&local_128);
              }
              else {
                bVar11 = true;
                uVar24 = (**(code **)(*plVar20 + 0x70))(plVar20,&local_120);
              }
              FUN_1432c31e0(&local_138,uVar24);
              if (bVar10) {
                bVar10 = false;
                uVar26 = local_128 & 0xfffffffffffffffc;
                iVar17 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                                   (uVar26 + 8,0xffffffff);
                if (iVar17 == 1) {
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar26);
                }
              }
              if (bVar11) {
                bVar11 = false;
                uVar26 = local_120 & 0xfffffffffffffffc;
                iVar17 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                                   (uVar26 + 8,0xffffffff);
                if (iVar17 == 1) {
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar26);
                }
              }
              (**(code **)(*(longlong *)param_1[0x100] + 0xa0))
                        ((longlong *)param_1[0x100],&local_res20);
              uVar19 = (**(code **)(*(longlong *)param_1[0x100] + 0x90))();
              puVar29 = &DAT_145af3922;
              if (local_108[0] != (undefined1 *)0x0) {
                puVar29 = local_108[0];
              }
              uVar27 = local_res20 & 0xfffffffffffffffc;
              uVar26 = local_138 & 0xfffffffffffffffc;
              puVar23 = (ulonglong *)FUN_1433ddd30(param_1[0x32]);
              FUN_1432bbf90(param_1[0x18a],
                            "Missing \"%s\" glyph \'%c\' (0x%x) in \"%s\".\nFont has %u glyphs, ranges %s.\nSearch log: \n%s"
                            ,(*puVar23 & 0xfffffffffffffffc) + 0xc,(int)(char)local_148[2],
                            CONCAT44(uVar18,(uint)*(ushort *)(local_148 + 2)),uVar26 + 0xc,uVar19,
                            uVar27 + 0xc,puVar29);
              *(byte *)(*param_1 + 0x15b) = *(byte *)(*param_1 + 0x15b) | 0x10;
              uVar26 = local_res20 & 0xfffffffffffffffc;
              iVar17 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar26 + 8,0xffffffff);
              if (iVar17 == 1) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar26);
              }
              uVar26 = local_138 & 0xfffffffffffffffc;
              iVar17 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar26 + 8,0xffffffff);
              if (iVar17 == 1) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar26);
              }
              if (pRVar21 != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(pRVar21);
              }
              Scaleform::StringBuffer::~StringBuffer(local_108);
              plVar22 = local_148;
            }
          }
          fVar31 = (float)(**(code **)(*(longlong *)param_1[0x100] + 0x18))
                                    ((longlong *)param_1[0x100],
                                     *(undefined4 *)((longlong)param_1 + 0x814));
          *(float *)(param_1 + 0x103) = fVar31 * *(float *)(param_1 + 0x102);
          uVar28 = *(ushort *)(plVar22 + 2);
          uVar15 = *(ushort *)(&DAT_145afebc0 + (ulonglong)(uVar28 >> 8) * 2);
          if ((uVar15 != 0) &&
             ((uVar15 == 1 ||
              ((*(ushort *)(&DAT_145afebc0 + (ulonglong)((uVar28 >> 4 & 0xf) + (uint)uVar15) * 2) >>
                (uVar28 & 0xf) & 1) != 0)))) {
            *(undefined4 *)(param_1 + 0x103) = 0;
          }
        }
        if ((param_1[4] == 0) || ((char)param_1[0x2d] != '\0')) {
          fVar31 = *(float *)(param_1 + 7);
          if (fVar31 <= 0.0) {
            fVar31 = fVar31 - 0.5;
          }
          else {
            fVar31 = fVar31 + 0.5;
          }
          iVar17 = (int)fVar31;
        }
        else {
          fVar31 = 0.0;
          if (*(char *)((longlong)param_1 + 0x169) != '\0') {
            if (param_1[4] == 0) {
              fVar31 = 0.0;
            }
            else {
              fVar31 = (float)(**(code **)(**(longlong **)(param_1[5] + 0x30) + 0x20))
                                        (*(longlong **)(param_1[5] + 0x30),(int)param_1[6],
                                         (short)plVar22[2]);
            }
            fVar31 = fVar31 * *(float *)(param_1 + 0x102);
          }
          fVar31 = fVar31 + *(float *)(param_1 + 7);
          if (fVar31 <= 0.0) {
            iVar17 = (int)(fVar31 - 0.5);
          }
          else {
            iVar17 = (int)(fVar31 + 0.5);
          }
        }
        fVar31 = *(float *)(param_1 + 0x103);
        *(int *)((longlong)param_1 + 0x81c) = iVar17;
        if (fVar31 <= 0.0) {
          fVar31 = fVar31 - 0.5;
        }
        else {
          fVar31 = fVar31 + 0.5;
        }
        iVar17 = (int)fVar31;
        *(int *)(param_1 + 0x104) = iVar17;
        if ((char)param_1[0x106] != '\0') {
          iVar17 = 0;
        }
        *(int *)((longlong)param_1 + 0x824) = iVar17;
        goto LAB_14340311d;
      }
      if (*plVar22 != 0) {
        piVar1 = (int *)(*plVar22 + 8);
        *piVar1 = *piVar1 + 1;
      }
      lVar25 = param_1[0x32];
      if (lVar25 != 0) {
        piVar1 = (int *)(lVar25 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar25);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar25);
        }
      }
      param_1[0x32] = *plVar22;
      pRVar21 = (RefCountImpl *)FUN_1433fb160(*param_1,param_1 + 0x31,(short)plVar22[2] == 0);
      if (pRVar21 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar21);
      }
      if ((RefCountImpl *)param_1[0x101] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x101]);
      }
      param_1[0x101] = (longlong)pRVar21;
      if (pRVar21 != (RefCountImpl *)0x0) goto LAB_143402b5b;
    }
    else {
      if (*plVar22 != 0) {
        piVar1 = (int *)(*plVar22 + 8);
        *piVar1 = *piVar1 + 1;
      }
      lVar25 = param_1[0x32];
      if (lVar25 != 0) {
        piVar1 = (int *)(lVar25 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar25);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar25);
        }
      }
      param_1[0x32] = *plVar22;
      fVar31 = *(float *)(this_00 + 0x20);
      if (fVar31 <= 0.0) {
        fVar31 = fVar31 - 0.5;
      }
      else {
        fVar31 = fVar31 + 0.5;
      }
      fVar32 = *(float *)(param_1 + 7);
      iVar17 = (int)fVar31;
      *(int *)(param_1 + 0x104) = iVar17;
      *(float *)(param_1 + 0x103) = (float)iVar17 + 40.0;
      if (fVar32 <= 0.0) {
        fVar32 = fVar32 - 0.5;
      }
      else {
        fVar32 = fVar32 + 0.5;
      }
      *(int *)((longlong)param_1 + 0x824) = iVar17;
      *(undefined4 *)((longlong)param_1 + 0x814) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x106) = 0;
      *(int *)((longlong)param_1 + 0x81c) = (int)fVar32;
LAB_14340311d:
      plVar20 = param_1 + 4;
      iVar17 = *(int *)((longlong)param_1 + 0x81c);
      *(int *)(param_1 + 0x105) = (int)param_1[0xe] + iVar17;
      lVar25 = *plVar20;
      if (lVar25 != 0) {
        if (iVar17 < 0) {
          uVar28 = (ushort)(iVar17 >> 0x1f);
          *(ushort *)(lVar25 + 6) = *(ushort *)(lVar25 + 6) | 0x40;
          *(ushort *)(lVar25 + 2) = ((ushort)iVar17 ^ uVar28) - uVar28;
        }
        else {
          *(ushort *)(lVar25 + 2) = (ushort)iVar17;
          *(ushort *)(lVar25 + 6) = *(ushort *)(lVar25 + 6) & 0xffbf;
        }
      }
      cVar12 = FUN_143401200(param_1);
      if (cVar12 == '\0') {
        lVar25 = param_1[0x1e];
        uVar7 = *(uint *)(param_1 + 0x20);
        *(undefined8 *)(lVar25 + (ulonglong)uVar7 * 8) = 0;
        puVar2 = (undefined2 *)(lVar25 + (ulonglong)uVar7 * 8);
        *puVar2 = *(undefined2 *)((longlong)param_1 + 0x814);
        if (this_00 == (RefCountNTSImpl *)0x0) {
          fVar31 = *(float *)((longlong)param_1 + 0x82c);
          iVar17 = *(int *)(param_1[0x32] + 0x40);
          if ((256.0 <= fVar31) ||
             (uVar28 = (ushort)(longlong)(fVar31 * 16.0), ((longlong)(fVar31 * 16.0) & 0xfU) == 0))
          {
            puVar2[3] = 0;
            uVar28 = (ushort)(longlong)fVar31;
          }
          else {
            puVar2[3] = 0x10;
          }
          puVar2[2] = uVar28 & 0xfff;
          pRVar21 = (RefCountImpl *)param_1[0x101];
          if (pRVar21 != (RefCountImpl *)param_1[5]) {
            puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
            *puVar3 = *puVar3 | 0x4000;
            puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
            *puVar3 = *puVar3 | 0x2000;
            *(RefCountImpl **)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x21) * 8) = pRVar21;
            *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
            Scaleform::RefCountImpl::AddRef(pRVar21);
          }
          if (iVar17 != *(int *)((longlong)param_1 + 0x44)) {
            puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
            *puVar3 = *puVar3 | 0x4000;
            puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
            *puVar3 = *puVar3 | 0x1000;
            *(int *)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x21) * 8) = iVar17;
            *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
          }
          sVar6 = (short)plVar22[2];
          sVar16 = 10;
          if ((*(byte *)(*(longlong *)(*param_1 + 0x10) + 0x40) & 2) != 0) {
            sVar16 = 0xd;
          }
          if (sVar6 == sVar16) {
            if (sVar6 == 0) goto LAB_1434034a7;
            puVar2[2] = puVar2[2] & 0xfff;
            puVar2[2] = puVar2[2] | 0x1000;
LAB_1434034c0:
            puVar2[3] = puVar2[3] | 0x300;
            *(undefined4 *)(param_1 + 0x104) = 0;
            *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
            if (plVar22[1] == 0) goto LAB_1434034e0;
          }
          else {
            if (sVar6 == 0) {
LAB_1434034a7:
              puVar2[2] = puVar2[2] & 0xfff;
              goto LAB_1434034c0;
            }
            if (((char)param_1[0x106] == '\0') && (*(char *)((longlong)param_1 + 0x831) == '\0')) {
LAB_143403473:
              *(undefined4 *)((longlong)param_1 + 0x114) = 0;
              *(int *)((longlong)param_1 + 0x74) =
                   *(int *)((longlong)param_1 + 0x824) + (int)param_1[0x105];
            }
            else {
              puVar2[3] = puVar2[3] | 2;
              if (*(int *)((longlong)param_1 + 0x814) < 0) {
                puVar2[3] = puVar2[3] | 0x200;
              }
              else {
                local_148 = (longlong *)0x0;
                uStack_140 = 0;
                (**(code **)(*(longlong *)param_1[0x100] + 0x38))
                          ((longlong *)param_1[0x100],*(int *)((longlong)param_1 + 0x814),&local_148
                          );
                if ((float)local_148 < (float)uStack_140) {
                  if (local_148._4_4_ < uStack_140._4_4_) goto LAB_143403459;
                }
                puVar2[3] = puVar2[3] | 0x200;
              }
LAB_143403459:
              *(int *)(param_1 + 0x22) = (int)param_1[0x22] + 1;
              if ((char)param_1[0x106] == '\0') goto LAB_143403473;
              *(int *)((longlong)param_1 + 0x114) = *(int *)((longlong)param_1 + 0x114) + 1;
            }
            puVar2[2] = puVar2[2] & 0xfff;
            puVar2[2] = puVar2[2] | 0x1000;
LAB_1434034e0:
            FUN_143404630(plVar20,param_1[0x100],(int)param_1[0x102]);
          }
          if ((*(byte *)(param_1[0x32] + 0x4a) & 4) == 0) {
            puVar2[3] = puVar2[3] & 0xfbff;
          }
          else {
            puVar2[3] = puVar2[3] | 0x400;
          }
          if (((*(ushort *)(param_1[0x32] + 0x4c) & 0x100) == 0) ||
             (lVar25 = FUN_1432c3580(param_1[0x32] + 0x20), lVar25 == 0)) {
            puVar2[3] = puVar2[3] & 0xff7f;
          }
          else {
            puVar2[3] = puVar2[3] | 0x80;
          }
          if ((RefCountImpl *)param_1[0x101] != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_1[0x101]);
          }
          if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
          }
          param_1[5] = param_1[0x101];
          *(int *)((longlong)param_1 + 0x44) = iVar17;
          *(byte *)((longlong)param_1 + 0x169) = *(byte *)(param_1[0x32] + 0x4a) >> 3 & 1;
        }
        else {
          puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
          *puVar3 = *puVar3 | 0x4000;
          puVar3 = (ushort *)(param_1[0x1e] + 6 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
          *puVar3 = *puVar3 | 0x800;
          *(RefCountNTSImpl **)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x21) * 8) = this_00;
          *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
          puVar2[2] = *(short *)((longlong)param_1 + 0x5bc) << 0xc | puVar2[2] & 0xfff;
          *(undefined1 *)((longlong)param_1 + 0x169) = 0;
          fVar32 = -(*(float *)(this_00 + 0x44) * 0.0 + *(float *)(this_00 + 0x40) * 0.0 +
                    *(float *)(this_00 + 0x4c));
          fVar31 = *(float *)((longlong)param_1 + 0x7c);
          if (*(float *)((longlong)param_1 + 0x7c) <= fVar32) {
            fVar31 = fVar32;
          }
          *(float *)((longlong)param_1 + 0x7c) = fVar31;
          fVar31 = *(float *)(this_00 + 0x24);
          *(int *)((longlong)param_1 + 0x74) =
               *(int *)((longlong)param_1 + 0x824) + (int)param_1[0x105];
          *(undefined4 *)((longlong)param_1 + 0x114) = 0;
          fVar9 = *(float *)(param_1 + 0x10);
          if (*(float *)(param_1 + 0x10) <= fVar31 - fVar32) {
            fVar9 = fVar31 - fVar32;
          }
          *(float *)(param_1 + 0x10) = fVar9;
          if (((*(ushort *)(param_1[0x32] + 0x4c) & 0x100) == 0) ||
             (lVar25 = FUN_1432c3580(param_1[0x32] + 0x20), lVar25 == 0)) {
            puVar2[3] = puVar2[3] & 0xff7f;
          }
          else {
            puVar2[3] = puVar2[3] | 0x80;
          }
        }
        if ((short)plVar22[2] == 9) {
          uVar7 = *(uint *)(param_1 + 0xb7);
          if (uVar7 < *(uint *)((longlong)param_1 + 0x5b4)) {
            iVar17 = *(int *)(local_118 + (ulonglong)uVar7 * 4);
            *(uint *)(param_1 + 0xb7) = uVar7 + 1;
            iVar17 = iVar17 * 0x14;
            if (iVar17 <= (int)param_1[0x105]) goto LAB_143403639;
            fVar31 = (float)(iVar17 - (int)param_1[0x105]);
          }
          else {
            fVar31 = _guard_xfg_dispatch_icall_nop
                               ((*(float *)((longlong)param_1 + 0x82c) +
                                 *(float *)((longlong)param_1 + 0x82c) + 8.0) * 0.125);
            lVar25 = param_1[0x105];
            fVar32 = fVar31 * 8.0 * 20.0;
            fVar31 = _guard_xfg_dispatch_icall_nop(((float)(int)lVar25 + fVar32) / fVar32);
            fVar31 = fVar31 * fVar32 - (float)(int)lVar25;
          }
          *(float *)(param_1 + 0x103) = fVar31;
        }
LAB_143403639:
        *(uint *)(param_1 + 0xf) = (int)param_1[0xf] + (uint)((ushort)puVar2[2] >> 0xc);
        *plVar20 = (longlong)puVar2;
        *(uint *)(param_1 + 6) = (uint)*(ushort *)(plVar22 + 2);
        *(int *)(param_1 + 0xe) = (int)param_1[0x105];
        *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x814);
        *(float *)(param_1 + 7) = *(float *)(param_1 + 0x103);
        if ((*(byte *)(param_1[0x32] + 0x4c) >> 1 & 1) != 0) {
          *(float *)(param_1 + 7) =
               *(float *)(param_1[0x32] + 0x44) * 0.05 * 20.0 + *(float *)(param_1 + 0x103);
        }
        *(int *)((longlong)param_1 + 0x3c) = (int)param_1[0x104];
        if ((int)param_1[0x20] == 0) {
          *(int *)(param_1 + 8) = (int)param_1[0x104];
        }
        if ((param_1[0x1e] != 0) &&
           (*(uint *)(param_1 + 0x20) < *(uint *)((longlong)param_1 + 0x104))) {
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
        }
      }
    }
    uVar7 = *(uint *)((longlong)param_1 + 0x5bc);
    if (uVar7 != 0) {
      if ((char)param_1[0x2d] == '\0') {
        FUN_1433e1fd0(param_1 + 0x11,uVar7);
        param_1[0x2e] = param_1[0x2e] + (ulonglong)uVar7;
      }
      else {
        if (-1 < *(int *)((longlong)param_1 + 0x144)) {
          *(uint *)(param_1 + 0x29) = (int)param_1[0x29] + uVar7;
          *(uint *)((longlong)param_1 + 0x144) = *(int *)((longlong)param_1 + 0x144) - uVar7;
        }
        param_1[0x2e] = param_1[0x2e] + (ulonglong)uVar7;
      }
    }
  } while( true );
}



// FUNCTION 143403740 FUN_143403740 body=176 status=ok
// SIG undefined FUN_143403740(void)

longlong FUN_143403740(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  RefCountImpl *this;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  uVar1 = *(ulonglong *)*param_3;
  if ((lVar4 != 0) &&
     (lVar3 = FUN_143403b80(param_1,param_3,*(ulonglong *)(lVar4 + 8) & uVar1), -1 < lVar3)) {
    lVar4 = lVar3 * 0x18 + lVar4;
    *(ulonglong *)(lVar4 + 0x18) = uVar1;
    puVar2 = (undefined8 *)param_3[1];
    this = (RefCountImpl *)*puVar2;
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    if (*(RefCountImpl **)(lVar4 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar4 + 0x20));
    }
    *(undefined8 *)(lVar4 + 0x20) = *puVar2;
    return lVar4 + 0x18;
  }
  lVar4 = FUN_143403990(param_1,param_2,param_3,uVar1);
  return lVar4;
}



// FUNCTION 1434037f0 FUN_1434037f0 body=409 status=ok
// SIG undefined FUN_1434037f0(void)

longlong FUN_1434037f0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  FUN_143404430();
  plVar4 = (longlong *)*param_1;
  uVar8 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar8 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar2 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = *param_3;
    if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
    }
    *(undefined8 *)(lVar2 + 0x20) = param_3[1];
    return lVar2 + 0x18;
  }
  do {
    uVar9 = uVar9 + 1 & uVar8;
    lVar3 = lVar5 + uVar9 * 0x18;
  } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
  uVar8 = *(ulonglong *)(lVar2 + 0x18) & uVar8;
  if (uVar8 == param_4) {
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar2 + 0x20));
    }
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = *param_3;
    if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
    }
    if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x20));
    }
    *(undefined8 *)(lVar2 + 0x20) = param_3[1];
    *(ulonglong *)(lVar2 + 0x10) = uVar9;
  }
  else {
    lVar1 = uVar8 * 3 + 2;
    uVar8 = *(ulonglong *)(lVar5 + lVar1 * 8);
    while (puVar7 = (ulonglong *)(lVar5 + lVar1 * 8), uVar8 != param_4) {
      lVar1 = *puVar7 * 3 + 2;
      uVar8 = *(ulonglong *)(lVar5 + lVar1 * 8);
    }
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar2 + 0x20));
    }
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    *puVar7 = uVar9;
    *(undefined8 *)(lVar2 + 0x18) = *param_3;
    if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
    }
    if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x20));
    }
    *(undefined8 *)(lVar2 + 0x20) = param_3[1];
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  }
  return lVar2 + 0x18;
}



// FUNCTION 143403990 FUN_143403990 body=495 status=ok
// SIG undefined FUN_143403990(void)

longlong FUN_143403990(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  RefCountImpl *pRVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar11 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1434039e2;
    lVar11 = plVar3[1] * 2 + 2;
  }
  FUN_143404730(param_1,param_2,lVar11);
LAB_1434039e2:
  plVar3 = (longlong *)*param_1;
  uVar9 = plVar3[1];
  *plVar3 = *plVar3 + 1;
  lVar4 = *param_1;
  param_4 = uVar9 & param_4;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar11 = lVar4 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)*param_3;
    puVar6 = (undefined8 *)param_3[1];
    pRVar7 = (RefCountImpl *)*puVar6;
    if (pRVar7 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar7);
    }
    *(undefined8 *)(lVar11 + 0x20) = *puVar6;
    return lVar11 + 0x18;
  }
  do {
    uVar10 = uVar10 + 1 & uVar9;
    lVar2 = lVar4 + uVar10 * 0x18;
  } while (*(longlong *)(lVar4 + 0x10 + uVar10 * 0x18) != -2);
  uVar9 = uVar9 & *(ulonglong *)(lVar11 + 0x18);
  if (uVar9 == param_4) {
    *(longlong *)(lVar2 + 0x10) = lVar5;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
    if (*(RefCountImpl **)(lVar11 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar11 + 0x20));
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)*param_3;
    puVar6 = (undefined8 *)param_3[1];
    pRVar7 = (RefCountImpl *)*puVar6;
    if (pRVar7 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar7);
    }
    if (*(RefCountImpl **)(lVar11 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar11 + 0x20));
    }
    *(undefined8 *)(lVar11 + 0x20) = *puVar6;
    *(ulonglong *)(lVar11 + 0x10) = uVar10;
  }
  else {
    lVar1 = uVar9 * 3 + 2;
    uVar9 = *(ulonglong *)(lVar4 + lVar1 * 8);
    while (puVar8 = (ulonglong *)(lVar4 + lVar1 * 8), uVar9 != param_4) {
      lVar1 = *puVar8 * 3 + 2;
      uVar9 = *(ulonglong *)(lVar4 + lVar1 * 8);
    }
    *(longlong *)(lVar2 + 0x10) = lVar5;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
    if (*(RefCountImpl **)(lVar11 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar11 + 0x20));
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
    *puVar8 = uVar10;
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)*param_3;
    puVar6 = (undefined8 *)param_3[1];
    pRVar7 = (RefCountImpl *)*puVar6;
    if (pRVar7 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar7);
    }
    if (*(RefCountImpl **)(lVar11 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar11 + 0x20));
    }
    *(undefined8 *)(lVar11 + 0x20) = *puVar6;
    *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
  }
  return lVar11 + 0x18;
}



// FUNCTION 143403b80 FUN_143403b80 body=105 status=ok
// SIG undefined FUN_143403b80(void)

ulonglong FUN_143403b80(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  lVar2 = *param_1;
  lVar1 = param_3 * 3 + 2;
  puVar4 = (ulonglong *)(lVar2 + lVar1 * 8);
  if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) &&
     (uVar3 = param_3, (puVar4[1] & *(ulonglong *)(lVar2 + 8)) == param_3)) {
    while( true ) {
      if (((puVar4[1] & *(ulonglong *)(lVar2 + 8)) == param_3) &&
         (puVar4[1] == *(ulonglong *)*param_2)) {
        return uVar3;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)(lVar2 + uVar3 * 0x18 + 0x10);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143403bf0 FUN_143403bf0 body=272 status=ok
// SIG undefined FUN_143403bf0(void)

undefined8 * FUN_143403bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1433e1d80(param_1 + 0xd,param_3,0);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x149) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 143403d00 FUN_143403d00 body=281 status=ok
// SIG undefined FUN_143403d00(void)

undefined8 * FUN_143403d00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x149) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 143403e20 FUN_143403e20 body=103 status=ok
// SIG undefined FUN_143403e20(void)

void FUN_143403e20(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x38);
    do {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -7;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143403e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143403e90 FUN_143403e90 body=116 status=ok
// SIG undefined FUN_143403e90(void)

void FUN_143403e90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  return;
}



// FUNCTION 143403f10 FUN_143403f10 body=161 status=ok
// SIG undefined FUN_143403f10(void)

void FUN_143403f10(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x130);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  if (*(RefCountImpl **)(param_1 + 8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 8));
  }
  return;
}



// FUNCTION 143403fc0 FUN_143403fc0 body=622 status=ok
// SIG undefined FUN_143403fc0(void)

undefined8 * FUN_143403fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  if ((RefCountImpl *)param_2[1] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_2[1]);
  }
  if ((RefCountImpl *)param_1[1] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[1]);
  }
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  FUN_1433e90c0(param_1 + 0xd,param_2 + 0xd);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x12);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  FUN_1433e90c0(param_1 + 0x15,param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  FUN_1433e90c0(param_1 + 0x26,param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x149) = *(undefined1 *)((longlong)param_2 + 0x149);
  *(undefined1 *)((longlong)param_1 + 0x14a) = *(undefined1 *)((longlong)param_2 + 0x14a);
  param_1[0x2a] = param_2[0x2a];
  return param_1;
}



// FUNCTION 143404230 FUN_143404230 body=143 status=ok
// SIG undefined FUN_143404230(void)

longlong FUN_143404230(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1433e1e50(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 8);
  if (*(char *)(param_1 + 0x148) == '\0') {
    uVar2 = FUN_1433e1e50(param_1 + 0x68);
  }
  else {
    uVar2 = FUN_1434042c0(param_1 + 0x100);
  }
  FUN_1433e90c0(param_1 + 0xa8,uVar2);
  if (((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x158) & 0x10) != 0) &&
     (*(short *)(param_1 + 0xb8) != 0)) {
    *(undefined2 *)(param_1 + 0xb8) = 0x2a;
  }
  return param_1 + 0xa8;
}



// FUNCTION 1434042c0 FUN_1434042c0 body=162 status=ok
// SIG undefined FUN_1434042c0(void)

longlong * FUN_1434042c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if (-1 < iVar3) {
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1[1] + (longlong)iVar3 * 2);
    param_1[7] = (ulonglong)*(uint *)(param_1 + 5);
    uVar5 = FUN_1433e1580(*param_1,*(undefined4 *)(param_1[2] + (longlong)iVar3 * 4));
    FUN_1433e8fe0(param_1 + 6,uVar5);
    return param_1 + 6;
  }
  plVar1 = param_1 + 6;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1433dd700(lVar4);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
    }
  }
  *plVar1 = 0;
  return plVar1;
}



// FUNCTION 143404370 FUN_143404370 body=89 status=ok
// SIG undefined FUN_143404370(void)

undefined8 FUN_143404370(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Render::Text::DocView::~DocView();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1434043d0 FUN_1434043d0 body=89 status=ok
// SIG undefined FUN_1434043d0(void)

undefined8 FUN_1434043d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433e8df0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143404430 FUN_143404430 body=67 status=ok
// SIG undefined FUN_143404430(void)

void FUN_143404430(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143404730(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143404730(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143404480 FUN_143404480 body=227 status=ok
// SIG undefined FUN_143404480(void)

void FUN_143404480(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *_Src;
  longlong lVar7;
  
  uVar3 = param_1[1];
  uVar1 = uVar3 + 1;
  FUN_143404570(param_1,param_1,uVar1);
  if (uVar3 < uVar1) {
    lVar5 = uVar3 * 0x38 + *param_1;
    for (lVar7 = uVar1 - uVar3; lVar7 != 0; lVar7 = lVar7 + -1) {
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x28) = 0;
      }
      lVar5 = lVar5 + 0x38;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(param_2 * 0x38 + *param_1);
    memmove((void *)((longlong)_Src + 0x38),_Src,(param_1[1] - param_2) * 0x38 - 0x38);
  }
  puVar6 = (undefined8 *)(param_2 * 0x38 + *param_1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    *puVar6 = *param_3;
    puVar6[1] = uVar4;
    uVar4 = param_3[3];
    puVar6[2] = param_3[2];
    puVar6[3] = uVar4;
    puVar6[4] = param_3[4];
    if (param_3[5] != 0) {
      piVar2 = (int *)(param_3[5] + 8);
      *piVar2 = *piVar2 + 1;
    }
    puVar6[5] = param_3[5];
    *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_3 + 6);
  }
  return;
}



// FUNCTION 143404570 FUN_143404570 body=180 status=ok
// SIG undefined FUN_143404570(void)

void FUN_143404570(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x38);
      do {
        if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
        }
        puVar1 = puVar1 + -7;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5a20(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5a20(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143404630 FUN_143404630 body=99 status=ok
// SIG undefined FUN_143404630(void)

void FUN_143404630(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  if (fVar3 == 0.0) {
    fVar3 = 960.0;
  }
  if (fVar2 == 0.0) {
    fVar2 = 64.0;
  }
  fVar1 = *(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x5c) <= fVar3 * param_3) {
    fVar1 = fVar3 * param_3;
  }
  *(float *)(param_1 + 0x5c) = fVar1;
  fVar3 = *(float *)(param_1 + 0x60);
  if (*(float *)(param_1 + 0x60) <= fVar2 * param_3) {
    fVar3 = fVar2 * param_3;
  }
  *(float *)(param_1 + 0x60) = fVar3;
  param_3 = param_3 * *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_1 + 100);
  if (*(float *)(param_1 + 100) <= param_3) {
    fVar3 = param_3;
  }
  *(float *)(param_1 + 100) = fVar3;
  return;
}



// FUNCTION 1434046a0 FUN_1434046a0 body=140 status=ok
// SIG undefined FUN_1434046a0(void)

void FUN_1434046a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143404730 FUN_143404730 body=313 status=ok
// SIG undefined FUN_143404730(void)

void FUN_143404730(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143331d70();
    return;
  }
  if (param_3 < 8) {
    lVar2 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar2 = 1L << (cVar1 + 1U & 0x3f);
  }
  lVar4 = 0;
  local_res18[0] = 0x4a;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar2 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar2 + -1;
  lVar3 = lVar4;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)(lVar3 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar3 = lVar3 + 0x18;
  }
  if (*param_1 != 0) {
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar3 = *param_1 + lVar4;
      if (*(longlong *)(lVar3 + 0x10) != -2) {
        FUN_1434037f0(&local_res20,param_2,lVar3 + 0x18,*(undefined8 *)(lVar3 + 0x18));
        if (*(RefCountImpl **)(lVar3 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x20));
        }
        *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143404870 FUN_143404870 body=150 status=ok
// SIG undefined FUN_143404870(void)

undefined8 *
FUN_143404870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong *local_18;
  undefined8 local_10;
  
  uVar1 = FUN_1433f95e0(&local_18,0,param_4 >> 9 & 0x7fff01);
  FUN_143352910(param_1,param_2,uVar1,param_4 & 0xffffffff);
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_145b06c58;
  FUN_1433bf440(param_1 + 0x1a,param_3);
  return param_1;
}



// FUNCTION 143404910 FUN_143404910 body=44 status=ok
// SIG undefined FUN_143404910(void)

void FUN_143404910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b06c58;
  Scaleform::Render::TextMeshProvider::~TextMeshProvider(param_1 + 0x1a);
  FUN_1433529e0(param_1);
  return;
}



// FUNCTION 143404970 UpdateChildSubtree body=98 status=ok
// SIG undefined UpdateChildSubtree(void)

void Scaleform::Render::TreeCacheText::UpdateChildSubtree
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x30) + 0x4a) & 0xc0 | (uVar1 & 0x20) * 2 |
          uVar1 & 0xffbf;
  if ((param_3 != 0) && ((*(ushort *)(param_3 + 10) >> 9 & 1) != 0)) {
    uVar2 = uVar2 | 0x200;
  }
  if (uVar2 != uVar1) {
    *(ushort *)(param_1 + 0x4a) = uVar2;
  }
  if (param_3 != 0) {
    FUN_14334e380();
  }
  return;
}



// FUNCTION 1434049e0 FUN_1434049e0 body=1557 status=ok
// SIG undefined FUN_1434049e0(void)

void FUN_1434049e0(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                  uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  longlong *plVar4;
  RefCountImpl *pRVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  float *pfVar13;
  Matrix4x4<float> *pMVar14;
  Matrix3x4<float> *pMVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined **local_res8;
  longlong *local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 *puVar23;
  undefined8 in_stack_fffffffffffffed0;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  local_c8 = *param_4;
  uStack_c4 = param_4[1];
  uStack_c0 = param_4[2];
  uStack_bc = param_4[3];
  local_res10 = param_2;
  FUN_14334e6d0(local_c8,param_2,param_3,param_4,&local_c8,
                CONCAT44((int)((ulonglong)in_stack_fffffffffffffed0 >> 0x20),param_5) | 0x20);
  uVar9 = *(undefined4 *)(param_3 + 0x8c);
  uVar1 = *(undefined4 *)(param_3 + 0x88);
  uVar2 = *(undefined4 *)(param_3 + 0x84);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x80);
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar9;
  *(ushort *)((longlong)param_1 + 0x4a) = *(ushort *)((longlong)param_1 + 0x4a) & 0xfbff;
  lVar12 = *param_1;
  uVar11 = (**(code **)(*param_2 + 0x100))(param_2);
  (**(code **)(lVar12 + 0x68))(param_1,param_4,uVar11,param_5);
  lVar12 = FUN_1432cd220(param_1[5]);
  lVar12 = *(longlong *)(lVar12 + 0x98);
  local_res18 = param_5 & 1;
  if (local_res18 != 0) {
    if ((((*(byte *)(lVar12 + 0x1c) & 1) != 0) &&
        (lVar16 = *(longlong *)param_1[0x16], (*(byte *)(lVar16 + 0xf) & 0x10) == 0)) &&
       (cVar7 = FUN_14337ad10(((ulonglong)
                               (byte)(&DAT_1467ccff4)
                                     [(ulonglong)(*(byte *)(lVar16 + 0xf) & 0xf) * 5] + 1) * 0x10 +
                              lVar16,0x358637bd), cVar7 == '\0')) {
      fVar22 = -0.5;
      pfVar13 = (float *)(((ulonglong)
                           (byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar16 + 0xf) & 0xf) * 5] +
                          1) * 0x10 + lVar16);
      local_118 = *pfVar13;
      local_114 = *(undefined8 *)(pfVar13 + 1);
      local_10c._0_4_ = pfVar13[3];
      local_10c._4_4_ = pfVar13[4];
      local_104 = pfVar13[5];
      local_100 = CONCAT44(local_100._4_4_,pfVar13[6]);
      fVar21 = pfVar13[7];
      if (0.0 <= (float)local_10c) {
        fVar20 = 0.5;
      }
      else {
        fVar20 = -0.5;
      }
      fVar20 = _guard_xfg_dispatch_icall_nop((float)local_10c + fVar20);
      local_10c = CONCAT44(local_10c._4_4_,fVar20);
      if (0.0 <= fVar21) {
        fVar22 = 0.5;
      }
      fVar21 = _guard_xfg_dispatch_icall_nop(fVar21 + fVar22);
      local_100 = CONCAT44(fVar21,(undefined4)local_100);
      FUN_1432c0490(param_1 + 0x16,&local_118);
    }
    plVar4 = (longlong *)param_1[0x13];
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x1e) >> 5 & 1) == 0) {
      return;
    }
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_88 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    local_b8 = 0x3f800000;
    local_a8 = 0x3f80000000000000;
    local_90 = 0x3f800000;
    local_80 = 0x3f80000000000000;
    local_e8 = 0x100000001;
    local_d0 = 0;
    if (((*(byte *)(*(longlong *)param_1[0x16] + 0xf) & 0x10) != 0) && (param_1[4] != 0)) {
      pMVar14 = (Matrix4x4<float> *)FUN_1433535a0(param_4);
      pMVar15 = (Matrix3x4<float> *)FUN_1432c08b0(param_1 + 0x16);
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                ((Matrix4x4<float> *)&local_b8,pMVar14,pMVar15);
      lVar16 = FUN_1432cd220(*(undefined8 *)(param_1[4] + 0x28));
      local_f8 = *(undefined8 *)(lVar16 + 0xa0);
      uStack_f0 = *(undefined8 *)(lVar16 + 0xa8);
      local_e8 = *(undefined8 *)(lVar16 + 0xb0);
      uStack_e0 = *(undefined8 *)(lVar16 + 0xb8);
      local_d8 = *(undefined8 *)(lVar16 + 0xc0);
      local_d0 = *(undefined4 *)(lVar16 + 200);
    }
    cVar7 = Scaleform::Render::TextMeshProvider::NeedsUpdate
                      (param_1 + 0x1a,param_1 + 0x16,&local_b8,&local_f8,lVar12 + 0x10);
    param_2 = local_res10;
    if (cVar7 != '\0') {
      (**(code **)(*plVar4 + 0x18))(plVar4,local_res10,param_1 + 0xe);
      Scaleform::Render::TextMeshProvider::Clear(param_1 + 0x1a);
      return;
    }
  }
  uVar18 = 0;
  if ((*(uint *)(param_1 + 0x1e) >> 6 & 1) != 0) {
    uVar3 = *(ushort *)((longlong)param_1 + 0x4a);
    if ((uVar3 & 0x40) == 0) {
      uVar10 = 0;
      if (((byte)uVar3 & 0xc) == 4) {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 2;
    }
    uVar6 = uVar10 | 8;
    if ((uVar3 & 0x80) == 0) {
      uVar6 = uVar10;
    }
    iVar8 = (**(code **)(param_1[0x1a] + 0x48))(param_1 + 0x1a);
    if (iVar8 != 0) {
      do {
        piVar17 = (int *)(uVar18 * 0x40 + param_1[0x27]);
        if ((*piVar17 - 8U & 0xfffffffb) == 0) {
          local_114 = 0;
          local_118 = (float)piVar17[0xe] * *(float *)(param_1 + 0x2e);
          local_10c = 0;
          local_100 = 0;
          local_104 = local_118;
          uVar9 = FUN_1433c0e50(param_2,piVar17,param_1[0x23] + (ulonglong)(uint)piVar17[1] * 0x28,
                                &local_118,piVar17[0xe],param_1 + 0x16,uVar6,&local_b8);
          local_res8 = (undefined **)(**(code **)(*param_2 + 0xe8))(param_2);
          uVar11 = FUN_1432d8640(param_2);
          if ((*(longlong *)(piVar17 + 6) == 0) ||
             (cVar7 = FUN_143324da0(*(longlong *)(piVar17 + 6),0,param_5,&local_b8,uVar11),
             cVar7 == '\0')) {
            puVar23 = &local_b8;
            lVar12 = FUN_143325c50(local_res8,*(undefined8 *)(piVar17 + 8),0,uVar9,puVar23,uVar11);
            uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
            if (*(longlong *)(piVar17 + 6) != 0) {
              FUN_143325070();
            }
            *(longlong *)(piVar17 + 6) = lVar12;
            if (*(longlong *)(lVar12 + 0x20) == 0) {
              local_res8 = (undefined **)CONCAT44(local_res8._4_4_,0x44);
              lVar12 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xe0,&local_res8);
              if (lVar12 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = Scaleform::Render::Mesh::Mesh
                                   (lVar12,*(undefined8 *)(*(longlong *)(piVar17 + 6) + 0x18),
                                    &local_118,0,(ulonglong)puVar23 & 0xffffffff00000000,
                                    CONCAT44(uVar9,uVar6));
              }
              lVar12 = *(longlong *)(piVar17 + 6);
              pRVar5 = *(RefCountImpl **)(lVar12 + 0x20);
              if (pRVar5 != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(pRVar5);
              }
              *(undefined8 *)(lVar12 + 0x20) = uVar11;
            }
            pRVar5 = *(RefCountImpl **)(*(longlong *)(piVar17 + 6) + 0x20);
            if (pRVar5 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::AddRef(pRVar5);
            }
            if (*(RefCountImpl **)(piVar17 + 4) != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(*(RefCountImpl **)(piVar17 + 4));
            }
            *(RefCountImpl **)(piVar17 + 4) = pRVar5;
          }
        }
        uVar19 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar19;
        uVar10 = (**(code **)(param_1[0x1a] + 0x48))(param_1 + 0x1a);
        param_2 = local_res10;
      } while (uVar19 < uVar10);
    }
  }
  if ((local_res18 != 0) && ((*(uint *)(param_1 + 0x1e) >> 8 & 1) != 0)) {
    local_res8 = (undefined **)param_1[0x16];
    if (local_res8 != &PTR_LOOP_1467cd040) {
      *(int *)(*local_res8 + 8) = *(int *)(*local_res8 + 8) + 1;
    }
    FUN_1433c0c10(param_1 + 0x1a,&local_res18,local_res10,&local_res8);
    if ((undefined **)CONCAT44(uStackX_1c,local_res18) != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*(undefined **)CONCAT44(uStackX_1c,local_res18));
    }
  }
  return;
}



// FUNCTION 143405000 FUN_143405000 body=152 status=ok
// SIG undefined FUN_143405000(void)

void FUN_143405000(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  
  if ((param_3 >> 10 & 1) != 0) {
    plVar1 = (longlong *)param_1[0x13];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_1 + 0xe);
    }
    Scaleform::Render::TextMeshProvider::Clear(param_1 + 0x1a);
  }
  if ((param_3 & 0x20) == 0) {
    return;
  }
  lVar2 = param_1[6];
  lVar3 = FUN_1432cd220(param_1[5]);
  if (lVar2 == 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = *(ushort *)(lVar2 + 0x4a) & 0xc;
    if (uVar4 == 0xc) {
      uVar5 = 0xc;
      goto LAB_14340507c;
    }
  }
  uVar5 = *(ushort *)(lVar3 + 10) & 0xc;
  if ((*(ushort *)(lVar3 + 10) & 0xc) == 0) {
    uVar5 = uVar4;
  }
LAB_14340507c:
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar5);
  return;
}



// FUNCTION 1434050a0 FUN_1434050a0 body=412 status=ok
// SIG undefined FUN_1434050a0(void)

void FUN_1434050a0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  
  if ((*(uint *)(param_1 + 0xf0) >> 9 & 1) != 0) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0.0;
    local_44 = 0;
    local_3c = 9.0;
    lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
    lVar1 = *(longlong *)(lVar1 + 0x90);
    if (0.0 < *(float *)(lVar1 + 0x108)) {
      local_68 = CONCAT44(local_68._4_4_,0x3f800000);
      fVar2 = *(float *)(lVar1 + 0x108) * 0.05;
      local_48 = 3.0;
      if (fVar2 <= 3.0) {
        local_48 = fVar2;
      }
      local_48 = local_48 * local_3c * 2.0;
      fVar3 = *(float *)(lVar1 + 0x110) * -0.05;
      fVar4 = *(float *)(lVar1 + 0x114) * -0.05;
      local_58 = CONCAT44(fVar4,fVar3);
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3;
      if (4.0 < fVar2) {
        fVar2 = _guard_xfg_dispatch_icall_nop(fVar2);
        local_58 = CONCAT44(fVar4 * (2.0 / fVar2),fVar3 * (2.0 / fVar2));
      }
      FUN_143405970(lVar1 + 0x11c,&local_78,(longlong)&local_78 + 4,&local_70,
                    (longlong)&local_70 + 4);
    }
    FUN_1432c0800(param_1 + 0xb0,&local_78,0x40);
  }
  return;
}



// FUNCTION 143405270 FUN_143405270 body=28 status=ok
// SIG undefined FUN_143405270(void)

longlong FUN_143405270(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0xd0;
  if ((*(uint *)(param_1 + 0xf0) >> 5 & 1) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1434052a0 FUN_1434052a0 body=474 status=ok
// SIG undefined FUN_1434052a0(void)

longlong * FUN_1434052a0(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  Matrix3x4<float> *pMVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  Matrix4x4<float> local_58 [64];
  
  lVar3 = FUN_1432cd220(param_1[5]);
  uVar7 = 0;
  lVar3 = *(longlong *)(lVar3 + 0x98);
  if ((lVar3 != 0) && (param_1[4] != 0)) {
    local_c8 = 0;
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    local_68 = 0;
    local_98 = 0x3f800000;
    local_88 = 0x3f80000000000000;
    local_70 = 0x3f800000;
    local_60 = 0x3f80000000000000;
    uStack_c0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_a0 = 0;
    local_b8 = 0x100000001;
    if ((*(byte *)(*(longlong *)param_1[0x16] + 0xf) & 0x10) != 0) {
      FUN_143350290(param_1,local_58);
      pMVar4 = (Matrix3x4<float> *)FUN_1432c08b0(param_1 + 0x16);
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                ((Matrix4x4<float> *)&local_98,local_58,pMVar4);
      lVar5 = FUN_1432cd220(*(undefined8 *)(param_1[4] + 0x28));
      local_c8 = *(undefined8 *)(lVar5 + 0xa0);
      uStack_c0 = *(undefined8 *)(lVar5 + 0xa8);
      local_b8 = *(undefined8 *)(lVar5 + 0xb0);
      uStack_b0 = *(undefined8 *)(lVar5 + 0xb8);
      local_a8 = *(undefined8 *)(lVar5 + 0xc0);
      local_a0 = *(undefined4 *)(lVar5 + 200);
    }
    uVar1 = *(ushort *)((longlong)param_1 + 0x4a);
    if ((uVar1 & 0x40) == 0) {
      if (((byte)uVar1 & 0xc) == 4) {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 2;
    }
    uVar2 = uVar7 | 8;
    if ((uVar1 & 0x80) == 0) {
      uVar2 = uVar7;
    }
    FUN_1433bfb20(param_1 + 0x1a,param_2,lVar3,param_1 + 0x16,&local_98,&local_c8,uVar2);
  }
  if ((*(uint *)(param_1 + 0x1e) >> 5 & 1) != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  plVar6 = param_1 + 0x1a;
  if ((*(uint *)(param_1 + 0x1e) >> 5 & 1) == 0) {
    plVar6 = (longlong *)0x0;
  }
  return plVar6;
}



// FUNCTION 143405480 FUN_143405480 body=100 status=ok
// SIG undefined FUN_143405480(void)

void FUN_143405480(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 = FUN_1432cd220(), param_3 != 0xc)) &&
     (uVar2 = *(ushort *)(lVar1 + 10) & 0xc, (*(ushort *)(lVar1 + 10) & 0xc) == 0)) {
    uVar2 = param_3;
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0xc) != uVar2) {
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfff3 | (ushort)uVar2;
    Scaleform::Render::TextMeshProvider::Clear(param_1 + 0xd0);
  }
  return;
}



// FUNCTION 1434054f0 FUN_1434054f0 body=287 status=ok
// SIG undefined FUN_1434054f0(void)

void FUN_1434054f0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  RefCountNTSImpl *this;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x98);
    Scaleform::Render::Bundle::RemoveEntry(this,param_1 + 0x70);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x98) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x98));
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  puVar3 = (undefined8 *)FUN_1433f95e0(&local_18,0,(byte)(param_3 >> 9) & 1);
  (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,puVar3[1]);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
            (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x88) = *puVar3;
  *(undefined8 *)(param_1 + 0x90) = puVar3[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1 + 0x70);
  }
  Scaleform::Render::TextMeshProvider::Clear(param_1 + 0xd0);
  return;
}



// FUNCTION 143405620 FUN_143405620 body=52 status=ok
// SIG undefined FUN_143405620(void)

void FUN_143405620(longlong param_1,Matrix4x4<float> *param_2,Matrix4x4<float> *param_3)

{
  Matrix3x4<float> *pMVar1;
  
  pMVar1 = (Matrix3x4<float> *)FUN_1432c08b0(param_1 + 0xb0);
  Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(param_2,param_3,pMVar1);
  return;
}



// FUNCTION 1434056d0 FUN_1434056d0 body=536 status=ok
// SIG undefined FUN_1434056d0(void)

void FUN_1434056d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined **local_res8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  
  lVar5 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  if (((*(byte *)(*(longlong *)(lVar5 + 0x98) + 0x1c) & 1) != 0) && (-1 < (char)param_4)) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    ppuVar2 = (undefined **)*plVar1;
    puVar3 = *ppuVar2;
    if (((puVar3[0xf] & 0x10) == 0) &&
       (cVar4 = FUN_14337ad10(puVar3 + ((ulonglong)
                                        (byte)(&DAT_1467ccff4)
                                              [(ulonglong)((byte)puVar3[0xf] & 0xf) * 5] + 1) * 0x10
                              ,0x358637bd), cVar4 == '\0')) {
      local_58 = *(undefined4 *)(param_2 + 0xa0);
      local_54 = *(undefined4 *)(param_2 + 0xa4);
      local_50 = *(undefined4 *)(param_2 + 0xa8);
      local_48 = *(undefined4 *)(param_2 + 0xb0);
      fVar8 = -0.5;
      local_44 = *(undefined4 *)(param_2 + 0xb4);
      local_40 = *(undefined4 *)(param_2 + 0xb8);
      if (0.0 <= *(float *)(param_2 + 0xac)) {
        fVar7 = 0.5;
      }
      else {
        fVar7 = -0.5;
      }
      local_4c = _guard_xfg_dispatch_icall_nop(fVar7 + *(float *)(param_2 + 0xac));
      if (0.0 < *(float *)(param_2 + 0xbc) || *(float *)(param_2 + 0xbc) == 0.0) {
        fVar8 = 0.5;
      }
      local_3c = _guard_xfg_dispatch_icall_nop(fVar8 + *(float *)(param_2 + 0xbc));
      if (ppuVar2 == &PTR_LOOP_1467cd040) {
        cVar4 = Scaleform::Render::Cxform::operator==(param_2 + 0xc0,&DAT_1467ccfd0);
        uVar6 = FUN_1432c0b20(param_3,&local_res8,&local_58,param_2 + 0xc0,cVar4 == '\0');
        FUN_1432c03f0(plVar1,uVar6);
        if (local_res8 == &PTR_LOOP_1467cd040) {
          return;
        }
        FUN_1432c03a0(*local_res8);
        return;
      }
      FUN_1432c0490(plVar1,&local_58);
      if ((param_4 & 2) == 0) {
        return;
      }
      FUN_1432c0590(plVar1,param_2 + 0xc0);
      return;
    }
  }
  FUN_143352760(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1434058f0 FUN_1434058f0 body=114 status=ok
// SIG undefined FUN_1434058f0(void)

undefined8 * FUN_1434058f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b06c58;
  Scaleform::Render::TextMeshProvider::~TextMeshProvider(param_1 + 0x1a);
  FUN_1433529e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 143405970 FUN_143405970 body=147 status=ok
// SIG undefined FUN_143405970(void)

void FUN_143405970(byte *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  
  if (param_1[2] == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[2] / 255.0;
  }
  *param_2 = fVar1;
  if (param_1[1] == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[1] / 255.0;
  }
  *param_3 = fVar1;
  if (*param_1 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)*param_1 / 255.0;
  }
  *param_4 = fVar1;
  if (param_1[3] == 0) {
    *param_5 = 0.0;
    return;
  }
  *param_5 = (float)param_1[3] / 255.0;
  return;
}



// FUNCTION 143405a10 FUN_143405a10 body=213 status=ok
// SIG undefined FUN_143405a10(void)

undefined1
FUN_143405a10(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_3 * 2 + 2,0);
  uVar3 = FUN_143306bc0(uVar2,param_3 + 1,param_2,param_3);
  uVar1 = FUN_143405be0(param_1,uVar2,uVar3,param_4,param_5,param_6,param_7,param_8,param_9);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  return uVar1;
}



// FUNCTION 143405af0 FUN_143405af0 body=23 status=ok
// SIG undefined FUN_143405af0(void)

void FUN_143405af0(void)

{
  FUN_143405be0();
  return;
}



// FUNCTION 143405b10 FUN_143405b10 body=200 status=ok
// SIG undefined FUN_143405b10(void)

longlong FUN_143405b10(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = param_4;
  while (uVar1 = uVar4, 0 < (longlong)uVar1) {
    uVar4 = (longlong)uVar1 >> 1;
    iVar2 = FUN_143409a00(param_1,*(undefined8 *)(param_3 + (uVar4 + uVar3) * 0x10),param_2);
    if (-iVar2 < 0) {
      uVar3 = uVar4 + uVar3 + 1;
      uVar4 = uVar1 + (-1 - uVar4);
    }
  }
  if (uVar3 < param_4) {
    iVar2 = FUN_143409a00(param_1,*(undefined8 *)(param_3 + uVar3 * 0x10),param_2);
    if (iVar2 == 0) {
      return param_3 + uVar3 * 0x10;
    }
  }
  return 0;
}



// FUNCTION 143405be0 FUN_143405be0 body=7477 status=ok
// SIG undefined FUN_143405be0(void)

undefined8
FUN_143405be0(longlong param_1,ushort *param_2,longlong param_3,longlong *param_4,char param_5,
             char param_6,longlong *param_7,longlong param_8,longlong param_9)

{
  RefCountNTSImpl RVar1;
  ushort uVar2;
  short sVar3;
  RefCountNTSImpl *this;
  short *psVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  RefCountNTSImpl *this_00;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined *puVar16;
  ushort uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int local_res18;
  ulonglong local_388;
  ulonglong local_380;
  ulonglong local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  ulonglong local_358;
  ulonglong local_350;
  undefined8 local_348;
  undefined8 local_340;
  short *local_338;
  longlong local_330;
  longlong local_328;
  ulonglong local_320;
  undefined8 local_318;
  int local_310;
  ushort *local_308;
  ushort *local_300;
  ushort *local_2f8;
  uint local_2f0;
  char local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined2 local_2a8;
  undefined2 local_2a6;
  undefined2 local_2a4;
  undefined2 local_2a2;
  undefined2 local_2a0;
  undefined2 local_29e;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  uint local_288;
  int local_284;
  int local_280;
  float local_27c;
  byte local_278 [4];
  undefined2 local_274 [2];
  int local_270;
  undefined2 local_26c [2];
  int local_268;
  int local_264;
  longlong local_260;
  undefined1 local_258 [8];
  undefined8 local_250;
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  RefCountNTSImpl *local_178;
  ushort local_15c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [48];
  RefCountNTSImpl *local_b8;
  ushort local_9c;
  undefined1 local_98 [48];
  RefCountNTSImpl *local_68;
  ushort local_4c;
  
  if (param_3 == 0) {
    FUN_1433e3a40();
    return 0;
  }
  local_340 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  uVar23 = 0;
  local_358 = 0;
  local_378 = 0;
  local_350 = 0;
  local_348 = 0;
  local_310 = 0;
  local_2f8 = param_2 + param_3;
  uVar12 = 0;
  local_2f0 = 0;
  local_2ec = '\0';
  local_300 = param_2;
  if (param_2 < local_2f8) {
    local_2f0 = (uint)*param_2;
    local_300 = param_2 + 1;
  }
  local_2d0 = param_6 != '\0';
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_388 = 0;
  local_res18 = 0;
  if (param_8 == 0) {
    param_8 = *(longlong *)(param_1 + 0x38);
  }
  local_318 = local_340;
  local_308 = param_2;
  local_1b8 = local_340;
  FUN_1433dd660(local_98,param_8,0);
  if (param_9 == 0) {
    param_9 = *(longlong *)(param_1 + 0x30);
  }
  local_2c0 = 0;
  local_2b8 = 1;
  local_2b0 = 0;
  local_2a8 = *(undefined2 *)(param_9 + 0x18);
  local_2a6 = *(undefined2 *)(param_9 + 0x1a);
  local_2a4 = *(undefined2 *)(param_9 + 0x1c);
  local_2a2 = *(undefined2 *)(param_9 + 0x1e);
  local_2a0 = *(undefined2 *)(param_9 + 0x20);
  local_29e = *(undefined2 *)(param_9 + 0x22);
  FUN_1433df7d0(&local_2c0,*(undefined8 *)(param_9 + 0x10));
  FUN_1433dd660(local_e8,local_98,0);
  FUN_1433dde10(local_98,&DAT_145af3922,0xffffffffffffffff);
  iVar7 = FUN_143408360(&local_318);
  uVar15 = uVar23;
  if (iVar7 != 0x8000) {
    do {
      puVar22 = (ulonglong *)0x0;
      if (iVar7 == 1) break;
      if (iVar7 == 2) {
        local_388 = 0;
        if (local_310 == 2) {
          FUN_1434090d0(&local_318,&local_388,&local_2c8);
          if (local_2f0 == 0x3e) {
            local_308 = local_300;
            local_310 = 0x8002;
            if ((local_2ec == '\0') || (*local_300 != 0x26)) {
              if (local_300 < local_2f8) {
                uVar2 = *local_300;
                local_300 = local_300 + 1;
                local_2f0 = (uint)uVar2;
              }
            }
            else {
              FUN_143407e80(&local_308);
            }
          }
          else if (local_2f0 == 0x2f) {
            local_310 = 6;
          }
          else {
            local_310 = 7;
            Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(&local_318);
          }
        }
        uVar24 = local_388;
        uVar12 = FUN_143405b10(local_388,local_2c8,&PTR_DAT_145b06d00,0xd);
        iVar7 = (int)uVar23 + -1;
        local_388 = uVar12;
        if ((uVar12 == 0) || (*(char *)(uVar12 + 0xd) == '\0')) {
          uVar11 = Scaleform::Render::Text::StyledText::GetLength(param_1);
          local_1a0 = local_2c8;
          local_190 = 0;
          local_1a8 = uVar24;
          local_198 = uVar12;
          FUN_1433dd540(local_188,local_1b8);
          local_138 = 0;
          local_130 = 1;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          FUN_143409360(&local_358,local_340,uVar23 + 1);
          uVar23 = local_350;
          uVar12 = local_358;
          local_378 = local_350;
          lVar9 = (local_358 - 0x98) + local_350 * 0x98;
          if (lVar9 != 0) {
            FUN_143407a40(lVar9,&local_1a8);
          }
          FUN_1433dedf0(&local_138);
          FUN_1433dd700(local_188);
          *(undefined8 *)(lVar9 + 0x18) = uVar11;
          uVar15 = lVar9 + 0x20;
          local_380 = uVar15;
          if (iVar7 < 0) {
            FUN_1433dd7b0(uVar15,local_98);
            puVar21 = &local_2c0;
          }
          else {
            FUN_1433dd7b0(uVar15,uVar12 + 0x20 + (longlong)iVar7 * 0x98);
            puVar21 = (undefined8 *)(uVar12 + 0x70 + (longlong)iVar7 * 0x98);
          }
          lVar10 = lVar9 + 0x70;
          Scaleform::Render::Text::ParagraphFormat::operator=(lVar10,puVar21);
          uVar12 = local_388;
          if (local_388 == 0) {
            if ((param_7 != (longlong *)0x0) &&
               (lVar9 = (**(code **)(*param_7 + 8))(param_7,0,uVar24,local_2c8), uVar12 = local_388,
               lVar9 != 0)) {
              uVar11 = FUN_1433deff0(lVar10,&local_260,lVar9 + 0x50);
              Scaleform::Render::Text::ParagraphFormat::operator=(lVar10,uVar11);
              FUN_1433dedf0(&local_260);
              uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar9);
              FUN_1433dd7b0(uVar15,uVar11);
              FUN_1433dd700(&local_1a8);
              uVar12 = local_388;
            }
          }
          else {
            switch(*(undefined4 *)(local_388 + 8)) {
            case 0:
              cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                (&local_318,&local_220,&local_1b0);
              while (cVar6 != '\0') {
                lVar9 = FUN_143405b10(local_220,local_1b0,&PTR_s_ALIGN_145b06e10,0x1b);
                if (((lVar9 != 0) &&
                    (cVar6 = FUN_143408820(&local_318,&local_100,&local_108), cVar6 != '\0')) &&
                   (*(int *)(lVar9 + 8) == 0x14)) {
                  FUN_1433dde80(uVar15,local_100,local_108);
                  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
                }
                cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                  (&local_318,&local_220,&local_1b0);
              }
              if (param_7 != (longlong *)0x0) {
                lVar9 = (**(code **)(*param_7 + 0x10))(param_7,0,&DAT_145b07098,0xffffffffffffffff);
                if (lVar9 != 0) {
                  uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar9);
                  FUN_1433dd7b0(uVar15,uVar11);
                  FUN_1433dd700(&local_1a8);
                }
                cVar6 = Scaleform::Render::Text::TextFormat::IsUrlSet(uVar15);
                if ((cVar6 != '\0') &&
                   (lVar9 = (**(code **)(*param_7 + 0x10))(param_7,0,"a:link",0xffffffffffffffff),
                   lVar9 != 0)) {
                  uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar9);
                  FUN_1433dd7b0(uVar15,uVar11);
                  FUN_1433dd700(&local_1a8);
                }
              }
              break;
            case 1:
              FUN_1433dd860(uVar15,1);
              break;
            case 3:
              cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                (&local_318,&local_1f0,&local_1f8);
              while (cVar6 != '\0') {
                lVar10 = FUN_143405b10(local_1f0,local_1f8,&PTR_s_ALIGN_145b06e10,0x1b);
                if ((lVar10 != 0) &&
                   (cVar6 = FUN_143408820(&local_318,&local_338,&local_330), cVar6 != '\0')) {
                  switch(*(undefined4 *)(lVar10 + 8)) {
                  case 0xd:
                    if ((*local_338 == 0x23) &&
                       (cVar6 = FUN_143408f60(local_278,local_338 + 1,local_330 + -1), cVar6 != '\0'
                       )) {
                      *(uint *)(lVar9 + 0x60) = *(uint *)(lVar9 + 0x60) & 0xffffff;
                      *(uint *)(lVar9 + 0x60) = *(uint *)(lVar9 + 0x60) | (uint)local_278[0] << 0x18
                      ;
                      *(ushort *)(lVar9 + 0x6c) = *(ushort *)(lVar9 + 0x6c) | 0x400;
                    }
                    break;
                  case 0x11:
                    if ((*local_338 == 0x23) &&
                       (cVar6 = FUN_143408f60(&local_288,local_338 + 1,local_330 + -1),
                       cVar6 != '\0')) {
                      *(uint *)(lVar9 + 0x60) = *(uint *)(lVar9 + 0x60) & 0xff000000;
                      *(uint *)(lVar9 + 0x60) = *(uint *)(lVar9 + 0x60) | local_288 & 0xffffff;
                      *(ushort *)(lVar9 + 0x6c) = *(ushort *)(lVar9 + 0x6c) | 1;
                    }
                    break;
                  case 0x12:
                    FUN_1433ddc00(uVar15,local_338,local_330);
                    break;
                  case 0x18:
                    cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                      (&local_280,local_338,local_330);
                    if ((cVar6 != '\0') && (-1 < local_280)) {
                      if (local_280 == 0) {
                        *(byte *)(lVar9 + 0x6a) = *(byte *)(lVar9 + 0x6a) & 0xf7;
                        *(ushort *)(lVar9 + 0x6c) = *(ushort *)(lVar9 + 0x6c) & 0xff7f;
                      }
                      else {
                        Scaleform::Render::Text::TextFormat::SetKerning(uVar15,1);
                      }
                    }
                    break;
                  case 0x1b:
                    cVar6 = FUN_143408df0(&local_27c,local_338,local_330);
                    if (cVar6 != '\0') {
                      *(ushort *)(lVar9 + 0x6c) = *(ushort *)(lVar9 + 0x6c) | 2;
                      *(float *)(lVar9 + 100) = local_27c * 20.0;
                    }
                    break;
                  case 0x1e:
                    cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                      (&local_284,local_338,local_330);
                    if ((cVar6 != '\0') && (-1 < local_284)) {
                      Scaleform::Render::Text::TextFormat::SetFontSize(uVar15);
                    }
                  }
                }
                cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                  (&local_318,&local_1f0,&local_1f8);
                uVar12 = local_388;
                uVar23 = local_378;
              }
              FUN_1433dd7b0(local_e8,uVar15);
              break;
            case 4:
              FUN_1433dd8e0(uVar15,1);
              break;
            case 6:
              *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x8080;
              lVar9 = FUN_1433e8b70(param_1);
              if (lVar9 == 0) {
                lVar9 = FUN_1433e85e0(param_1,lVar10);
              }
              else {
                lVar20 = Scaleform::Render::Text::Paragraph::GetLength(lVar9);
                if (lVar20 != 0) {
                  if (param_5 != '\0') {
                    puVar16 = &DAT_145af0af0;
                    if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                      puVar16 = &DAT_145b06cf0;
                    }
                    FUN_1433e6b70(param_1,puVar16,1,1,local_e8,&local_2c0);
                  }
                  lVar9 = FUN_1433e8b70(param_1);
                }
                uVar11 = FUN_1433e9900(param_1);
                FUN_1433e3210(lVar9,uVar11,lVar10);
              }
              uVar12 = local_388;
              if ((param_7 != (longlong *)0x0) &&
                 (lVar20 = (**(code **)(*param_7 + 8))(param_7,0,uVar24,local_2c8),
                 uVar12 = local_388, lVar20 != 0)) {
                uVar11 = FUN_1433deff0(lVar10,&local_260,lVar20 + 0x50);
                Scaleform::Render::Text::ParagraphFormat::operator=(lVar10,uVar11);
                FUN_1433dedf0(&local_260);
                uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar20);
                FUN_1433dd7b0(uVar15,uVar11);
                FUN_1433dd700(&local_1a8);
                uVar11 = FUN_1433e9900(param_1);
                FUN_1433e3210(lVar9,uVar11,lVar10);
                uVar12 = local_388;
              }
              break;
            case 7:
              uVar12 = FUN_1433e8b70(param_1);
              local_380 = uVar12;
              if (uVar12 == 0) {
                uVar12 = FUN_1433e85e0(param_1,&local_2c0);
              }
              else if (local_res18 != 0) {
                if (param_5 != '\0') {
                  puVar16 = &DAT_145af0af0;
                  if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                    puVar16 = &DAT_145b06cf0;
                  }
                  FUN_1433e6b70(param_1,puVar16,1,1,local_e8,&local_2c0);
                }
                uVar12 = FUN_1433e8b70(param_1);
              }
              local_380 = uVar12;
              if ((param_7 != (longlong *)0x0) &&
                 (lVar20 = (**(code **)(*param_7 + 8))(param_7,0,uVar24,local_2c8), lVar20 != 0)) {
                uVar11 = FUN_1433deff0(lVar10,&local_260,lVar20 + 0x50);
                Scaleform::Render::Text::ParagraphFormat::operator=(lVar10,uVar11);
                FUN_1433dedf0(&local_260);
                uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar20);
                FUN_1433dd7b0(uVar15,uVar11);
                FUN_1433dd700(&local_1a8);
              }
              cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                (&local_318,&local_200,&local_208);
              while (cVar6 != '\0') {
                lVar20 = FUN_143405b10(local_200,local_208,&PTR_s_ALIGN_145b06e10,0x1b);
                if ((lVar20 != 0) &&
                   (cVar6 = FUN_143408820(&local_318,&local_210,&local_218), cVar6 != '\0')) {
                  if (*(int *)(lVar20 + 8) == 0xc) {
                    lVar20 = FUN_143405b10(local_210,local_218,&PTR_s_ALIGN_145b06e10,0x1b);
                    if (lVar20 != 0) {
                      iVar7 = *(int *)(lVar20 + 8);
                      if (iVar7 == 0x23) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) & 63999;
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 1;
                      }
                      else if (iVar7 == 0x24) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) & 0xfbff;
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x201;
                      }
                      else if (iVar7 == 0x25) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x601;
                      }
                      else if (iVar7 == 0x26) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) & 0xfdff;
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x401;
                      }
                    }
                  }
                  else if (((*(int *)(lVar20 + 8) == 0x10) && (param_7 != (longlong *)0x0)) &&
                          (lVar20 = (**(code **)(*param_7 + 8))(param_7,1,local_210,local_218),
                          lVar20 != 0)) {
                    uVar11 = FUN_1433deff0(lVar10,&local_260,lVar20 + 0x50);
                    Scaleform::Render::Text::ParagraphFormat::operator=(lVar10,uVar11);
                    FUN_1433dedf0(&local_260);
                    uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar20);
                    FUN_1433dd7b0(uVar15,uVar11);
                    FUN_1433dd700(&local_1a8);
                  }
                }
                cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                  (&local_318,&local_200,&local_208);
                uVar12 = local_380;
                uVar23 = local_378;
              }
              lVar9 = Scaleform::Render::Text::Paragraph::GetLength(uVar12);
              if (lVar9 == 0) {
                uVar11 = FUN_1433e9900(param_1);
                FUN_1433e3210(uVar12,uVar11,lVar10);
              }
              local_res18 = local_res18 + 1;
              uVar12 = local_388;
              break;
            case 8:
              cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                (&local_318,&local_1d0,&local_1c8);
              while (cVar6 != '\0') {
                lVar9 = FUN_143405b10(local_1d0,local_1c8,&PTR_s_ALIGN_145b06e10,0x1b);
                if ((((lVar9 != 0) &&
                     (cVar6 = FUN_143408820(&local_318,&local_f0,&local_f8), cVar6 != '\0')) &&
                    (*(int *)(lVar9 + 8) == 0x10)) &&
                   ((param_7 != (longlong *)0x0 &&
                    (lVar9 = (**(code **)(*param_7 + 8))(param_7,1,local_f0,local_f8), lVar9 != 0)))
                   ) {
                  uVar11 = FUN_1433ddf20(uVar15,&local_1a8,lVar9);
                  FUN_1433dd7b0(uVar15,uVar11);
                  FUN_1433dd700(&local_1a8);
                  FUN_1433dd7b0(local_e8,uVar15);
                }
                cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                  (&local_318,&local_1d0,&local_1c8);
              }
              break;
            case 10:
              cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                (&local_318,&local_1e0,&local_1e8);
              if (cVar6 != '\0') {
                uVar24 = 0;
                do {
                  lVar20 = FUN_143405b10(local_1e0,local_1e8,&PTR_s_ALIGN_145b06e10,0x1b);
                  if ((lVar20 != 0) &&
                     (cVar6 = FUN_143408820(&local_318,&local_328,&local_320), uVar23 = local_320,
                     lVar5 = local_328, cVar6 != '\0')) {
                    switch(*(undefined4 *)(lVar20 + 8)) {
                    case 0xf:
                      cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                        (&local_270,local_328,local_320);
                      if ((cVar6 != '\0') && (-1 < local_270)) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 2;
                        *(short *)(lVar9 + 0x88) = (short)local_270;
                      }
                      break;
                    case 0x17:
                      cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                        (local_274,local_328,local_320);
                      if (cVar6 != '\0') {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 4;
                        *(undefined2 *)(lVar9 + 0x8a) = local_274[0];
                      }
                      break;
                    case 0x19:
                      cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                        (local_26c,local_328,local_320);
                      if (cVar6 != '\0') {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 8;
                        *(undefined2 *)(lVar9 + 0x8c) = local_26c[0];
                      }
                      break;
                    case 0x1a:
                      cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                        (&local_268,local_328,local_320);
                      if ((cVar6 != '\0') && (-1 < local_268)) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x10;
                        *(short *)(lVar9 + 0x8e) = (short)local_268;
                      }
                      break;
                    case 0x1c:
                      cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                        (&local_264,local_328,local_320);
                      if ((cVar6 != '\0') && (-1 < local_264)) {
                        *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x20;
                        *(short *)(lVar9 + 0x90) = (short)local_264;
                      }
                      break;
                    case 0x20:
                      uVar12 = uVar24;
                      if (local_320 != 0) {
                        do {
                          cVar6 = FUN_143408ac0(*(undefined2 *)(lVar5 + uVar12 * 2));
                          if (cVar6 == '\0') break;
                          uVar12 = uVar12 + 1;
                        } while (uVar12 < uVar23);
                      }
                      uVar15 = uVar12 + 1;
                      iVar7 = 1;
                      uVar19 = uVar12 + 1;
                      if (*(short *)(lVar5 + uVar12 * 2) != 0x5b) {
                        uVar15 = uVar12;
                        uVar19 = uVar12;
                      }
                      while ((iVar8 = iVar7, uVar15 < uVar23 &&
                             (sVar3 = *(short *)(lVar5 + uVar15 * 2), sVar3 != 0x5d))) {
                        uVar15 = uVar15 + 1;
                        iVar7 = iVar8 + 1;
                        if (sVar3 != 0x2c) {
                          iVar7 = iVar8;
                        }
                      }
                      FUN_1433df6f0(lVar10,iVar8);
                      *(ushort *)(lVar9 + 0x92) = *(ushort *)(lVar9 + 0x92) | 0x40;
                      uVar12 = uVar24;
                      if (uVar19 < uVar23) {
                        while (uVar15 = uVar24, *(short *)(lVar5 + uVar19 * 2) != 0x5d) {
                          do {
                            iVar7 = isdigit((uint)*(ushort *)(lVar5 + uVar19 * 2));
                            if (iVar7 == 0) goto joined_r0x000143407528;
                            lVar20 = uVar19 * 2;
                            uVar19 = uVar19 + 1;
                            uVar15 = (ulonglong)
                                     ((uint)*(ushort *)(lVar5 + lVar20) +
                                     ((int)uVar15 * 5 + -0x18) * 2);
                          } while (uVar19 < uVar23);
LAB_14340757b:
                          Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement
                                    (lVar10,uVar12,uVar15);
                          if (*(short *)(lVar5 + uVar19 * 2) == 0x2c) {
                            do {
                              uVar19 = uVar19 + 1;
                              if (uVar23 <= uVar19) goto switchD_143407371_caseD_10;
                              uVar2 = *(ushort *)(lVar5 + uVar19 * 2);
                              uVar17 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar2 >> 8) * 2);
                            } while ((uVar17 != 0) &&
                                    ((uVar17 == 1 ||
                                     ((*(ushort *)
                                        (&DAT_145afe6e0 +
                                        (ulonglong)((uVar2 >> 4 & 0xf) + (uint)uVar17) * 2) >>
                                       (uVar2 & 0xf) & 1) != 0))));
                          }
                          uVar12 = (ulonglong)((int)uVar12 + 1);
                          if (uVar23 <= uVar19) break;
                        }
                      }
                    }
                  }
switchD_143407371_caseD_10:
                  cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                    (&local_318,&local_1e0,&local_1e8);
                  uVar12 = local_388;
                  uVar23 = local_378;
                  uVar15 = local_380;
                } while (cVar6 != '\0');
              }
              break;
            case 0xb:
              Scaleform::Render::Text::TextFormat::SetUnderline(uVar15,1);
            }
          }
          FUN_1433dd7b0(local_e8,uVar15);
          uVar15 = local_358;
        }
        else {
          iVar8 = *(int *)(uVar12 + 8);
          if (iVar8 == 2) {
            if (param_5 != '\0') {
              puVar16 = &DAT_145af0af0;
              if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                puVar16 = &DAT_145b06cf0;
              }
              FUN_1433e6b70(param_1,puVar16,1,1,local_e8,&local_2c0);
            }
          }
          else if (iVar8 == 5) {
            if (param_4 != (longlong *)0x0) {
              local_260 = 0;
              FUN_1432c55c0(local_258,local_1b8);
              FUN_1432c55c0(local_248,local_1b8);
              local_238 = 0;
              local_230 = 0;
              local_228 = 0xffffffff;
              local_224 = 0;
              FUN_143409430(param_4,param_4[3],param_4[1] + 1);
              plVar13 = (longlong *)(*param_4 + -0x40 + param_4[1] * 0x40);
              if (plVar13 != (longlong *)0x0) {
                if (local_260 != 0) {
                  *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
                }
                *plVar13 = local_260;
                FUN_1432c54e0(plVar13 + 1,local_258,local_250);
                FUN_1432c54e0(plVar13 + 3,local_248,local_240);
                *(undefined4 *)(plVar13 + 5) = (undefined4)local_238;
                *(undefined4 *)((longlong)plVar13 + 0x2c) = local_238._4_4_;
                *(undefined4 *)(plVar13 + 6) = (undefined4)local_230;
                *(undefined4 *)((longlong)plVar13 + 0x34) = local_230._4_4_;
                *(undefined4 *)(plVar13 + 7) = local_228;
                *(undefined1 *)((longlong)plVar13 + 0x3c) = local_224;
              }
              FUN_143407bf0(&local_260);
              lVar9 = *param_4;
              lVar20 = param_4[1] * 0x40;
              lVar10 = FUN_1433e8b70(param_1);
              if (lVar10 == 0) {
                lVar10 = FUN_1433e85e0(param_1,&local_2c0);
              }
              FUN_1433dd660(&local_1a8,local_98,0);
              *(undefined4 *)(lVar20 + -8 + lVar9) = *(undefined4 *)(lVar10 + 0x40);
              cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                (&local_318,&local_1c0,&local_1d8);
              while (cVar6 != '\0') {
                lVar10 = FUN_143405b10(local_1c0,local_1d8,&PTR_s_ALIGN_145b06e10,0x1b);
                if ((lVar10 == 0) ||
                   (cVar6 = FUN_143408820(&local_318,&local_360,&local_368), cVar6 == '\0'))
                goto switchD_1434065e3_caseD_d;
                switch(*(undefined4 *)(lVar10 + 8)) {
                case 0xc:
                  lVar10 = FUN_143405b10(local_360,local_368,&PTR_s_ALIGN_145b06e10,0x1b);
                  if (lVar10 != 0) {
                    iVar8 = *(int *)(lVar10 + 8);
                    if (iVar8 == 0xe) {
                      *(undefined1 *)(lVar20 + -4 + lVar9) = 0;
                    }
                    else if (iVar8 == 0x23) {
                      *(undefined1 *)(lVar20 + -4 + lVar9) = 2;
                    }
                    else if (iVar8 == 0x24) {
                      *(undefined1 *)(lVar20 + -4 + lVar9) = 1;
                    }
                  }
                  break;
                case 0x13:
                  cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                    (&local_294,local_360,local_368);
                  if ((cVar6 != '\0') && (-1 < local_294)) {
                    *(int *)(lVar20 + -0x14 + lVar9) = local_294 * 0x14;
                  }
                  break;
                case 0x15:
                  cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                    (&local_28c,local_360,local_368);
                  if (cVar6 != '\0') {
                    *(int *)(lVar20 + -0xc + lVar9) = local_28c * 0x14;
                  }
                  break;
                case 0x16:
                  lVar10 = lVar9 + -0x28;
                  goto LAB_1434065e9;
                case 0x1d:
                  lVar10 = lVar9 + -0x38;
LAB_1434065e9:
                  FUN_1432c3830(lVar10 + lVar20,local_360,local_368);
                  break;
                case 0x21:
                  cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                    (&local_290,local_360,local_368);
                  if (cVar6 != '\0') {
                    *(int *)(lVar20 + -0x10 + lVar9) = local_290 * 0x14;
                  }
                  break;
                case 0x22:
                  cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                                    (&local_298,local_360,local_368);
                  if ((cVar6 != '\0') && (-1 < local_298)) {
                    *(int *)(lVar20 + -0x18 + lVar9) = local_298 * 0x14;
                  }
                }
switchD_1434065e3_caseD_d:
                cVar6 = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
                                  (&local_318,&local_1c0,&local_1d8);
              }
              uVar12 = (ulonglong)local_370 >> 0x20;
              local_370 = (short *)CONCAT44((int)uVar12,0x4a);
              lVar10 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x70,&local_370);
              if (lVar10 == 0) {
                this_00 = (RefCountNTSImpl *)0x0;
              }
              else {
                this_00 = (RefCountNTSImpl *)FUN_143407af0(lVar10);
                if (this_00 != (RefCountNTSImpl *)0x0) {
                  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
                }
              }
              if (local_178 != (RefCountNTSImpl *)0x0) {
                Scaleform::RefCountNTSImpl::Release(local_178);
              }
              local_15c = local_15c | 0x200;
              *(float *)(this_00 + 0x20) = (float)*(uint *)(lVar20 + -0x18 + lVar9);
              *(float *)(this_00 + 0x24) = (float)*(uint *)(lVar20 + -0x14 + lVar9);
              *(undefined4 *)(this_00 + 0x60) = *(undefined4 *)(lVar20 + -0x10 + lVar9);
              *(undefined4 *)(this_00 + 100) = *(undefined4 *)(lVar20 + -0xc + lVar9);
              local_178 = this_00;
              FUN_1432c4d80(this_00 + 0x50,lVar9 + -0x38 + lVar20);
              FUN_1432c4d80(this_00 + 0x58,lVar9 + -0x28 + lVar20);
              RVar1 = *(RefCountNTSImpl *)(lVar20 + -4 + lVar9);
              *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
              this_00[0x6c] = RVar1;
              this = *(RefCountNTSImpl **)(lVar20 + -0x40 + lVar9);
              if (this != (RefCountNTSImpl *)0x0) {
                Scaleform::RefCountNTSImpl::Release(this);
              }
              uVar15 = local_358;
              *(RefCountNTSImpl **)(lVar20 + -0x40 + lVar9) = this_00;
              if (iVar7 < 0) {
                puVar18 = local_98;
                puVar21 = &local_2c0;
              }
              else {
                puVar18 = (undefined1 *)(local_358 + 0x20 + (longlong)iVar7 * 0x98);
                puVar21 = (undefined8 *)(local_358 + 0x70 + (longlong)iVar7 * 0x98);
              }
              cVar6 = Scaleform::Render::Text::TextFormat::IsUrlSet(puVar18);
              if (cVar6 != '\0') {
                Scaleform::Render::Text::TextFormat::SetUrl(&local_1a8,puVar18 + 0x20);
              }
              FUN_1433e6b70(param_1,&DAT_145af3920,1,1,&local_1a8,puVar21);
              if (*(RefCountNTSImpl **)(puVar18 + 0x30) != (RefCountNTSImpl *)0x0) {
                Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(puVar18 + 0x30));
              }
              *(undefined8 *)(puVar18 + 0x30) = 0;
              *(ushort *)(puVar18 + 0x4c) = *(ushort *)(puVar18 + 0x4c) | 0x200;
              if (local_b8 != (RefCountNTSImpl *)0x0) {
                Scaleform::RefCountNTSImpl::Release(local_b8);
              }
              local_9c = local_9c | 0x200;
              local_b8 = (RefCountNTSImpl *)0x0;
              FUN_1433e69f0(param_1,puVar18);
              if (local_68 != (RefCountNTSImpl *)0x0) {
                Scaleform::RefCountNTSImpl::Release(local_68);
              }
              local_4c = local_4c | 0x200;
              local_68 = (RefCountNTSImpl *)0x0;
              Scaleform::RefCountNTSImpl::Release(this_00);
              FUN_1433dd700(&local_1a8);
              uVar12 = local_388;
            }
          }
          else if (iVar8 == 9) {
            Scaleform::Render::Text::StyledText::AppendString(param_1,&DAT_145b07094,1,1);
          }
        }
      }
      else if (iVar7 == 3) {
        local_370 = (short *)0x0;
        local_380 = 0;
        cVar6 = FUN_143408b10(&local_318,&local_370,&local_380);
        uVar24 = local_380;
        if ((cVar6 != '\0') && (local_380 != 0)) {
          lVar10 = FUN_1433e8b70(param_1);
          lVar9 = 0;
          if (lVar10 != 0) {
            lVar9 = Scaleform::Render::Text::Paragraph::GetLength(lVar10);
          }
          if ((((param_6 == '\0') || (1 < uVar24)) || (*local_370 != 0x20)) || (lVar9 != 0)) {
            if (uVar23 == 0) {
              FUN_1433e6f50(param_1,local_370,uVar24,1,local_98,&local_2c0);
              FUN_1433dd7b0(local_e8,local_98);
            }
            else {
              lVar9 = (uVar15 - 0x78) + uVar23 * 0x98;
              FUN_1433e6f50(param_1,local_370,uVar24,1,lVar9,uVar23 * 0x98 + -0x28 + uVar15);
              FUN_1433dd7b0(local_e8,lVar9);
            }
          }
        }
      }
      else if ((iVar7 == 4) || (iVar7 == 0x8005)) {
        local_380 = 0;
        local_370 = (short *)0x0;
        if (iVar7 == 4) {
          if (uVar23 != 0) {
            puVar22 = (ulonglong *)((uVar15 - 0x98) + uVar23 * 0x98);
          }
          if (local_310 == 4) {
            FUN_1434090d0(&local_318,&local_380,&local_370);
            if (local_2f0 == 0x3e) {
              local_308 = local_300;
              local_310 = 0x8004;
              if ((local_2ec == '\0') || (*local_300 != 0x26)) {
                if (local_300 < local_2f8) {
                  uVar2 = *local_300;
                  local_300 = local_300 + 1;
                  local_2f0 = (uint)uVar2;
                }
              }
              else {
                FUN_143407e80(&local_308);
              }
            }
            else {
              local_310 = 1;
            }
          }
        }
        else {
          if (((uVar12 != 0) && (*(char *)(uVar12 + 0xd) != '\0')) || (uVar23 == 0))
          goto LAB_143405f93;
          puVar22 = (ulonglong *)(uVar23 * 0x98 + -0x98 + uVar15);
          local_380 = *puVar22;
          local_370 = (short *)puVar22[1];
        }
        psVar4 = local_370;
        uVar24 = local_380;
        if (puVar22 != (ulonglong *)0x0) {
          iVar8 = FUN_143409ac0(local_380,local_370,*puVar22,puVar22[1]);
          if (iVar8 == 0) {
LAB_14340600c:
            uVar2 = *(ushort *)((longlong)puVar22 + 0x92);
            local_388 = puVar22[2];
            uVar24 = puVar22[3];
            uVar12 = uVar23 - 1;
            uVar17 = uVar2 >> 0xb & 3;
            FUN_143409360(&local_358,local_340,uVar12);
            if (uVar23 < uVar12) {
              FUN_143407e00(uVar23 * 0x98 + local_358,uVar12 - uVar23);
            }
            uVar12 = local_388;
            uVar15 = local_358;
            uVar23 = local_350;
            if (local_388 == 0) {
              if ((param_7 == (longlong *)0x0) || ((uVar2 & 0x100) == 0)) goto LAB_143406208;
              if (uVar17 == 1) {
                if (param_5 == '\0') {
                  local_378 = local_350;
                }
                else {
                  puVar16 = &DAT_145af0af0;
                  if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                    puVar16 = &DAT_145b06cf0;
                  }
                  FUN_1433e6b70(param_1,puVar16,1,1,local_e8,&local_2c0);
                  local_378 = local_350;
                  uVar12 = local_388;
                  uVar23 = local_350;
                  uVar15 = local_358;
                }
              }
              else {
                if (uVar17 != 2) goto LAB_143406208;
                lVar9 = Scaleform::Render::Text::StyledText::GetLength(param_1);
                if (param_5 != '\0') {
                  puVar16 = &DAT_145af0af0;
                  if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                    puVar16 = &DAT_145b06cf0;
                  }
                  FUN_1433e6b70(param_1,puVar16,1,1,local_e8,&local_2c0);
                }
                FUN_1433e7f80(param_1,uVar24,lVar9 - uVar24);
                local_378 = local_350;
                uVar12 = local_388;
                uVar23 = local_350;
                uVar15 = local_358;
              }
            }
            else if (((*(int *)(local_388 + 8) == 6) ||
                     ((*(int *)(local_388 + 8) == 7 &&
                      (local_res18 = local_res18 + -1, iVar7 != 0x8005)))) && (param_5 != '\0')) {
              puVar16 = &DAT_145af0af0;
              if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                puVar16 = &DAT_145b06cf0;
              }
              FUN_1433e6b70(param_1,puVar16,1,1,local_e8,&local_2c0);
              local_378 = local_350;
              uVar23 = local_350;
              uVar15 = local_358;
            }
            else {
LAB_143406208:
              local_378 = local_350;
            }
          }
          else {
            lVar9 = FUN_143405b10(uVar24,psVar4,&PTR_DAT_145b06d00,0xd);
            uVar12 = local_388;
            if (((lVar9 != 0) && (local_res18 != 0)) &&
               (uVar24 = uVar23, uVar19 = local_378, *(int *)(lVar9 + 8) - 6U < 2)) {
              while (local_378 = uVar19, uVar23 = uVar24, uVar12 = local_388, uVar23 != 0) {
                lVar10 = *(longlong *)(uVar23 * 0x98 + -0x88 + uVar15);
                if ((lVar10 != 0) && (*(int *)(lVar9 + 8) == *(int *)(lVar10 + 8))) {
                  if (uVar23 != 0) {
                    puVar22 = (ulonglong *)((uVar15 - 0x98) + uVar23 * 0x98);
                    goto LAB_14340600c;
                  }
                  break;
                }
                uVar12 = uVar23 - 1;
                FUN_143409360(&local_358,local_340,uVar12);
                uVar15 = local_358;
                uVar24 = local_350;
                uVar19 = local_350;
                if (uVar23 < uVar12) {
                  FUN_143407e00(uVar23 * 0x98 + local_358,uVar12 - uVar23);
                  uVar24 = local_350;
                  uVar19 = local_350;
                }
              }
            }
          }
        }
      }
LAB_143405f93:
      iVar7 = FUN_143408360(&local_318);
    } while (iVar7 != 0x8000);
    if (uVar23 != 0) {
      lVar9 = uVar23 * 0x98 + uVar15;
      FUN_1433e69f0(param_1,lVar9 + -0x78);
      FUN_1433e6ac0(param_1,(uVar15 - 0x28) + uVar23 * 0x98);
      FUN_1433dd7b0(local_e8,lVar9 + -0x78);
      goto LAB_143407741;
    }
  }
  FUN_1433e69f0(param_1,local_98);
  FUN_1433e6ac0(param_1,&local_2c0);
LAB_143407741:
  FUN_1433e3a40(param_1);
  lVar9 = FUN_1433e8b70(param_1);
  if ((lVar9 != 0) && (lVar9 = Scaleform::Render::Text::Paragraph::GetLength(lVar9), lVar9 == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    while ((lVar9 = lVar9 + -1, uVar23 = local_378, -1 < lVar9 && (lVar9 < *(int *)(param_1 + 0x20))
           )) {
      uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8);
      uVar12 = Scaleform::Render::Text::Paragraph::GetLength(uVar11);
      uVar23 = local_378;
      if (1 < uVar12) break;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar13 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
        puVar14 = (undefined8 *)(**(code **)(*plVar13 + 0x50))(plVar13,0x90,0);
        puVar21 = (undefined8 *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
          puVar14[1] = 0;
          *puVar14 = &PTR_FUN_145b03c28;
          *(undefined4 *)(puVar14 + 1) = 1;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *(undefined4 *)(puVar14 + 4) = 100;
          *(undefined4 *)((longlong)puVar14 + 0x24) = 100;
          *(undefined4 *)(puVar14 + 5) = 1;
          puVar14[6] = plVar13;
          FUN_1433dd540(puVar14 + 7,plVar13);
          *(undefined1 *)(puVar14 + 0x11) = 0;
          puVar21 = puVar14;
        }
        if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
        }
        *(undefined8 **)(param_1 + 0x10) = puVar21;
      }
      FUN_1433e2830(uVar11,*(undefined8 *)(param_1 + 0x10),local_e8,0,0xffffffffffffffff);
    }
  }
  FUN_1433dd700(local_e8);
  FUN_1433dedf0(&local_2c0);
  FUN_1433dd700(local_98);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_2e8);
  uVar12 = local_358;
  if (uVar23 != 0) {
    lVar9 = (local_358 - 0x78) + uVar23 * 0x98;
    do {
      FUN_1433dedf0(lVar9 + 0x50);
      FUN_1433dd700(lVar9);
      lVar9 = lVar9 + -0x98;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar12);
  return 1;
joined_r0x000143407528:
  if (uVar23 <= uVar19) goto LAB_14340757b;
  uVar2 = *(ushort *)(lVar5 + uVar19 * 2);
  uVar17 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(uVar2 >> 8) * 2);
  if ((uVar17 == 0) ||
     ((uVar17 != 1 &&
      ((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar2 >> 4 & 0xf) + (uint)uVar17) * 2) >>
        (uVar2 & 0xf) & 1) == 0)))) goto LAB_14340757b;
  uVar19 = uVar19 + 1;
  goto joined_r0x000143407528;
}



// FUNCTION 143407a40 FUN_143407a40 body=174 status=ok
// SIG undefined FUN_143407a40(void)

undefined8 * FUN_143407a40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  FUN_1433dd660(param_1 + 4,param_2 + 4,0);
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  *(undefined2 *)((longlong)param_1 + 0x8a) = *(undefined2 *)((longlong)param_2 + 0x8a);
  *(undefined2 *)((longlong)param_1 + 0x8c) = *(undefined2 *)((longlong)param_2 + 0x8c);
  *(undefined2 *)((longlong)param_1 + 0x8e) = *(undefined2 *)((longlong)param_2 + 0x8e);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)((longlong)param_1 + 0x92) = *(undefined2 *)((longlong)param_2 + 0x92);
  FUN_1433df7d0(param_1 + 0xe,param_2[0x10]);
  return param_1;
}



// FUNCTION 143407af0 FUN_143407af0 body=123 status=ok
// SIG undefined FUN_143407af0(void)

undefined8 * FUN_143407af0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *param_1 = &PTR_FUN_145b06ce8;
  FUN_1432c5250(param_1 + 10);
  FUN_1432c5250(param_1 + 0xb);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 143407b70 FUN_143407b70 body=128 status=ok
// SIG undefined FUN_143407b70(void)

void FUN_143407b70(RefCountNTSImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 143407bf0 FUN_143407bf0 body=119 status=ok
// SIG undefined FUN_143407bf0(void)

void FUN_143407bf0(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = param_1[3];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = param_1[1];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if ((RefCountNTSImpl *)*param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_1);
  }
  return;
}



// FUNCTION 143407c70 FUN_143407c70 body=44 status=ok
// SIG undefined FUN_143407c70(void)

ushort * FUN_143407c70(undefined8 *param_1)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *in_RAX;
  ushort *puVar6;
  short *psVar7;
  undefined2 *puVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  puVar6 = (ushort *)param_1[1];
  *param_1 = puVar6;
  if ((*(char *)((longlong)param_1 + 0x1c) == '\0') || (*puVar6 != 0x26)) {
    if (puVar6 < (ushort *)param_1[2]) {
      *(uint *)(param_1 + 3) = (uint)*puVar6;
      in_RAX = puVar6 + 1;
      param_1[1] = in_RAX;
    }
    return in_RAX;
  }
  psVar2 = (short *)*param_1;
  if ((short *)param_1[2] <= psVar2) {
    return (ushort *)0x0;
  }
  param_1[1] = psVar2;
  if (*psVar2 != 0x26) goto LAB_143408216;
  psVar7 = psVar2 + 1;
  *(undefined4 *)(param_1 + 3) = 0x26;
  param_1[1] = psVar7;
  if (psVar2 + 6 <= (short *)param_1[2]) {
    lVar12 = 5;
    pcVar9 = "quot;";
    lVar11 = 5;
    do {
      iVar3 = FUN_14331b480(*psVar7);
      psVar7 = psVar7 + 1;
      iVar4 = FUN_14331b480((int)*pcVar9);
      pcVar9 = pcVar9 + 1;
      lVar11 = lVar11 + -1;
      if ((lVar11 == 0) || (iVar3 == 0)) break;
      if (iVar3 != iVar4) goto LAB_143407f2c;
    } while (*pcVar9 != '\0');
    if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_143407f2c:
      if (iVar3 != iVar4) {
        puVar8 = (undefined2 *)param_1[1];
        pcVar9 = "apos;";
        lVar11 = 5;
        do {
          iVar3 = FUN_14331b480(*puVar8);
          puVar8 = puVar8 + 1;
          iVar4 = FUN_14331b480((int)*pcVar9);
          pcVar9 = pcVar9 + 1;
          lVar11 = lVar11 + -1;
          if ((lVar11 == 0) || (iVar3 == 0)) break;
          if (iVar3 != iVar4) goto LAB_143407f8c;
        } while (*pcVar9 != '\0');
        if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_143407f8c:
          if (iVar3 != iVar4) {
            puVar8 = (undefined2 *)param_1[1];
            pcVar9 = "nbsp;";
            do {
              iVar3 = FUN_14331b480(*puVar8);
              puVar8 = puVar8 + 1;
              iVar4 = FUN_14331b480((int)*pcVar9);
              pcVar9 = pcVar9 + 1;
              lVar12 = lVar12 + -1;
              if ((lVar12 == 0) || (iVar3 == 0)) break;
              if (iVar3 != iVar4) goto LAB_143407fec;
            } while (*pcVar9 != '\0');
            if ((iVar3 != iVar4) || ((lVar12 == 0 && (*pcVar9 == '\0')))) {
LAB_143407fec:
              if (iVar3 != iVar4) goto LAB_143408001;
            }
            param_1[1] = param_1[1] + 10;
            *(undefined4 *)(param_1 + 3) = 0xa0;
            goto LAB_143408216;
          }
        }
        param_1[1] = param_1[1] + 10;
        *(undefined4 *)(param_1 + 3) = 0x27;
        goto LAB_143408216;
      }
    }
    param_1[1] = param_1[1] + 10;
    *(undefined4 *)(param_1 + 3) = 0x22;
    goto LAB_143408216;
  }
LAB_143408001:
  puVar8 = (undefined2 *)param_1[1];
  if (puVar8 + 4 <= (undefined2 *)param_1[2]) {
    lVar11 = 4;
    pcVar9 = "amp;";
    do {
      iVar3 = FUN_14331b480(*puVar8);
      puVar8 = puVar8 + 1;
      iVar4 = FUN_14331b480((int)*pcVar9);
      pcVar9 = pcVar9 + 1;
      lVar11 = lVar11 + -1;
      if ((lVar11 == 0) || (iVar3 == 0)) break;
      if (iVar3 != iVar4) goto LAB_14340805c;
    } while (*pcVar9 != '\0');
    if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_14340805c:
      if (iVar3 != iVar4) goto LAB_143408071;
    }
    param_1[1] = param_1[1] + 8;
    *(undefined4 *)(param_1 + 3) = 0x26;
    goto LAB_143408216;
  }
LAB_143408071:
  puVar8 = (undefined2 *)param_1[1];
  if (puVar8 + 3 <= (undefined2 *)param_1[2]) {
    lVar12 = 3;
    pcVar9 = "lt;";
    lVar11 = 3;
    do {
      iVar3 = FUN_14331b480(*puVar8);
      puVar8 = puVar8 + 1;
      iVar4 = FUN_14331b480((int)*pcVar9);
      pcVar9 = pcVar9 + 1;
      lVar11 = lVar11 + -1;
      if ((lVar11 == 0) || (iVar3 == 0)) break;
      if (iVar3 != iVar4) goto LAB_1434080cf;
    } while (*pcVar9 != '\0');
    if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_1434080cf:
      if (iVar3 != iVar4) {
        puVar8 = (undefined2 *)param_1[1];
        pcVar9 = "gt;";
        do {
          iVar3 = FUN_14331b480(*puVar8);
          puVar8 = puVar8 + 1;
          iVar4 = FUN_14331b480((int)*pcVar9);
          pcVar9 = pcVar9 + 1;
          lVar12 = lVar12 + -1;
          if ((lVar12 == 0) || (iVar3 == 0)) break;
          if (iVar3 != iVar4) goto LAB_14340812c;
        } while (*pcVar9 != '\0');
        if ((iVar3 != iVar4) || ((lVar12 == 0 && (*pcVar9 == '\0')))) {
LAB_14340812c:
          if (iVar3 != iVar4) goto LAB_143408141;
        }
        param_1[1] = param_1[1] + 6;
        *(undefined4 *)(param_1 + 3) = 0x3e;
        goto LAB_143408216;
      }
    }
    param_1[1] = param_1[1] + 6;
    *(undefined4 *)(param_1 + 3) = 0x3c;
    goto LAB_143408216;
  }
LAB_143408141:
  psVar2 = (short *)param_1[1];
  if (((short *)param_1[2] < psVar2 + 2) || (*psVar2 != 0x23)) goto LAB_143408216;
  param_1[1] = psVar2 + 1;
  uVar10 = 0;
  iVar3 = FUN_14331b480(psVar2[1] == 0x78);
  if (iVar3 == 0) {
    iVar3 = isdigit((uint)*(ushort *)param_1[1]);
    if (iVar3 == 0) {
LAB_1434081f9:
      param_1[1] = psVar2;
      goto LAB_143408216;
    }
    uVar10 = 0;
    uVar5 = 0;
    if ((ulonglong)param_1[1] < (ulonglong)param_1[2]) {
      do {
        uVar10 = uVar5;
        if (*(ushort *)param_1[1] == 0x3b) break;
        iVar3 = isdigit((uint)*(ushort *)param_1[1]);
        if (iVar3 == 0) goto LAB_1434081f9;
        uVar1 = *(ushort *)param_1[1];
        puVar6 = (ushort *)param_1[1] + 1;
        param_1[1] = puVar6;
        uVar10 = (uVar1 - 0x30) + uVar10 * 10;
        uVar5 = uVar10;
      } while (puVar6 < (ushort *)param_1[2]);
      if (uVar10 == 0xffffffff) goto LAB_1434081f9;
    }
    puVar6 = (ushort *)param_1[1];
  }
  else {
    param_1[1] = param_1[1] + 2;
    puVar6 = (ushort *)param_1[1];
    uVar5 = 0;
    if (puVar6 < (ushort *)param_1[2]) {
      do {
        uVar10 = uVar5;
        if (*puVar6 == 0x3b) break;
        iVar3 = isxdigit((uint)*puVar6);
        if (iVar3 == 0) goto LAB_1434081f9;
        uVar10 = uVar10 << 4;
        uVar5 = FUN_14331b480(*(undefined2 *)param_1[1]);
        if ((ushort)((short)uVar5 - 0x30U) < 10) {
          uVar5 = uVar5 & 0xf;
LAB_1434081df:
          uVar10 = uVar10 | uVar5;
        }
        else if ((ushort)((short)uVar5 - 0x61U) < 6) {
          uVar5 = ((uVar5 & 0xffff) - 1 & 0xf) + 10;
          goto LAB_1434081df;
        }
        param_1[1] = param_1[1] + 2;
        puVar6 = (ushort *)param_1[1];
        uVar5 = uVar10;
      } while (puVar6 < (ushort *)param_1[2]);
      if (uVar10 == 0xffffffff) goto LAB_1434081f9;
    }
  }
  if (*puVar6 == 0x3b) {
    param_1[1] = puVar6 + 1;
  }
  *(uint *)(param_1 + 3) = uVar10;
LAB_143408216:
  return (ushort *)(ulonglong)*(uint *)(param_1 + 3);
}



// FUNCTION 143407ca0 FUN_143407ca0 body=89 status=ok
// SIG undefined FUN_143407ca0(void)

undefined8 FUN_143407ca0(undefined8 param_1,ulonglong param_2)

{
  FUN_143407b70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143407d00 FUN_143407d00 body=107 status=ok
// SIG undefined FUN_143407d00(void)

RefCountNTSImplCore * FUN_143407d00(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143407d70 FUN_143407d70 body=138 status=ok
// SIG undefined FUN_143407d70(void)

void FUN_143407d70(undefined8 *param_1,void *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_1[7] < (ulonglong)(param_1[8] + param_3)) {
    lVar2 = param_3 + param_1[7];
    param_1[7] = lVar2;
    if (param_1[6] == 0) {
      uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,lVar2 * 2,0);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[6],lVar2 * 2);
    }
    param_1[6] = uVar1;
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1[6] + param_1[8] * 2),param_2,param_3 * 2);
  param_1[8] = param_1[8] + param_3;
  return;
}



// FUNCTION 143407e00 FUN_143407e00 body=127 status=ok
// SIG undefined FUN_143407e00(void)

void FUN_143407e00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x80);
    do {
      if (puVar2 + -0x10 != (undefined8 *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        puVar2[-0xe] = 0;
        uVar1 = (**(code **)(*DAT_146b62f28 + 0x78))();
        FUN_1433dd540(puVar2 + -0xc,uVar1);
        puVar2[-2] = 0;
        *(undefined4 *)(puVar2 + -1) = 1;
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
      }
      puVar2 = puVar2 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143407e80 FUN_143407e80 body=1059 status=ok
// SIG undefined FUN_143407e80(void)

undefined4 FUN_143407e80(undefined8 *param_1)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  short *psVar7;
  undefined2 *puVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  psVar2 = (short *)*param_1;
  if ((short *)param_1[2] <= psVar2) {
    return 0;
  }
  param_1[1] = psVar2;
  if (*psVar2 != 0x26) goto LAB_143408216;
  psVar7 = psVar2 + 1;
  *(undefined4 *)(param_1 + 3) = 0x26;
  param_1[1] = psVar7;
  if (psVar2 + 6 <= (short *)param_1[2]) {
    lVar12 = 5;
    pcVar9 = "quot;";
    lVar11 = 5;
    do {
      iVar3 = FUN_14331b480(*psVar7);
      psVar7 = psVar7 + 1;
      iVar4 = FUN_14331b480((int)*pcVar9);
      pcVar9 = pcVar9 + 1;
      lVar11 = lVar11 + -1;
      if ((lVar11 == 0) || (iVar3 == 0)) break;
      if (iVar3 != iVar4) goto LAB_143407f2c;
    } while (*pcVar9 != '\0');
    if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_143407f2c:
      if (iVar3 != iVar4) {
        puVar8 = (undefined2 *)param_1[1];
        pcVar9 = "apos;";
        lVar11 = 5;
        do {
          iVar3 = FUN_14331b480(*puVar8);
          puVar8 = puVar8 + 1;
          iVar4 = FUN_14331b480((int)*pcVar9);
          pcVar9 = pcVar9 + 1;
          lVar11 = lVar11 + -1;
          if ((lVar11 == 0) || (iVar3 == 0)) break;
          if (iVar3 != iVar4) goto LAB_143407f8c;
        } while (*pcVar9 != '\0');
        if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_143407f8c:
          if (iVar3 != iVar4) {
            puVar8 = (undefined2 *)param_1[1];
            pcVar9 = "nbsp;";
            do {
              iVar3 = FUN_14331b480(*puVar8);
              puVar8 = puVar8 + 1;
              iVar4 = FUN_14331b480((int)*pcVar9);
              pcVar9 = pcVar9 + 1;
              lVar12 = lVar12 + -1;
              if ((lVar12 == 0) || (iVar3 == 0)) break;
              if (iVar3 != iVar4) goto LAB_143407fec;
            } while (*pcVar9 != '\0');
            if ((iVar3 != iVar4) || ((lVar12 == 0 && (*pcVar9 == '\0')))) {
LAB_143407fec:
              if (iVar3 != iVar4) goto LAB_143408001;
            }
            param_1[1] = param_1[1] + 10;
            *(undefined4 *)(param_1 + 3) = 0xa0;
            goto LAB_143408216;
          }
        }
        param_1[1] = param_1[1] + 10;
        *(undefined4 *)(param_1 + 3) = 0x27;
        goto LAB_143408216;
      }
    }
    param_1[1] = param_1[1] + 10;
    *(undefined4 *)(param_1 + 3) = 0x22;
    goto LAB_143408216;
  }
LAB_143408001:
  puVar8 = (undefined2 *)param_1[1];
  if (puVar8 + 4 <= (undefined2 *)param_1[2]) {
    lVar11 = 4;
    pcVar9 = "amp;";
    do {
      iVar3 = FUN_14331b480(*puVar8);
      puVar8 = puVar8 + 1;
      iVar4 = FUN_14331b480((int)*pcVar9);
      pcVar9 = pcVar9 + 1;
      lVar11 = lVar11 + -1;
      if ((lVar11 == 0) || (iVar3 == 0)) break;
      if (iVar3 != iVar4) goto LAB_14340805c;
    } while (*pcVar9 != '\0');
    if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_14340805c:
      if (iVar3 != iVar4) goto LAB_143408071;
    }
    param_1[1] = param_1[1] + 8;
    *(undefined4 *)(param_1 + 3) = 0x26;
    goto LAB_143408216;
  }
LAB_143408071:
  puVar8 = (undefined2 *)param_1[1];
  if (puVar8 + 3 <= (undefined2 *)param_1[2]) {
    lVar12 = 3;
    pcVar9 = "lt;";
    lVar11 = 3;
    do {
      iVar3 = FUN_14331b480(*puVar8);
      puVar8 = puVar8 + 1;
      iVar4 = FUN_14331b480((int)*pcVar9);
      pcVar9 = pcVar9 + 1;
      lVar11 = lVar11 + -1;
      if ((lVar11 == 0) || (iVar3 == 0)) break;
      if (iVar3 != iVar4) goto LAB_1434080cf;
    } while (*pcVar9 != '\0');
    if ((iVar3 != iVar4) || ((lVar11 == 0 && (*pcVar9 == '\0')))) {
LAB_1434080cf:
      if (iVar3 != iVar4) {
        puVar8 = (undefined2 *)param_1[1];
        pcVar9 = "gt;";
        do {
          iVar3 = FUN_14331b480(*puVar8);
          puVar8 = puVar8 + 1;
          iVar4 = FUN_14331b480((int)*pcVar9);
          pcVar9 = pcVar9 + 1;
          lVar12 = lVar12 + -1;
          if ((lVar12 == 0) || (iVar3 == 0)) break;
          if (iVar3 != iVar4) goto LAB_14340812c;
        } while (*pcVar9 != '\0');
        if ((iVar3 != iVar4) || ((lVar12 == 0 && (*pcVar9 == '\0')))) {
LAB_14340812c:
          if (iVar3 != iVar4) goto LAB_143408141;
        }
        param_1[1] = param_1[1] + 6;
        *(undefined4 *)(param_1 + 3) = 0x3e;
        goto LAB_143408216;
      }
    }
    param_1[1] = param_1[1] + 6;
    *(undefined4 *)(param_1 + 3) = 0x3c;
    goto LAB_143408216;
  }
LAB_143408141:
  psVar2 = (short *)param_1[1];
  if (((short *)param_1[2] < psVar2 + 2) || (*psVar2 != 0x23)) goto LAB_143408216;
  param_1[1] = psVar2 + 1;
  uVar10 = 0;
  iVar3 = FUN_14331b480(psVar2[1] == 0x78);
  if (iVar3 == 0) {
    iVar3 = isdigit((uint)*(ushort *)param_1[1]);
    if (iVar3 == 0) {
LAB_1434081f9:
      param_1[1] = psVar2;
      goto LAB_143408216;
    }
    uVar10 = 0;
    uVar5 = 0;
    if ((ulonglong)param_1[1] < (ulonglong)param_1[2]) {
      do {
        uVar10 = uVar5;
        if (*(ushort *)param_1[1] == 0x3b) break;
        iVar3 = isdigit((uint)*(ushort *)param_1[1]);
        if (iVar3 == 0) goto LAB_1434081f9;
        uVar1 = *(ushort *)param_1[1];
        puVar6 = (ushort *)param_1[1] + 1;
        param_1[1] = puVar6;
        uVar10 = (uVar1 - 0x30) + uVar10 * 10;
        uVar5 = uVar10;
      } while (puVar6 < (ushort *)param_1[2]);
      if (uVar10 == 0xffffffff) goto LAB_1434081f9;
    }
    puVar6 = (ushort *)param_1[1];
  }
  else {
    param_1[1] = param_1[1] + 2;
    puVar6 = (ushort *)param_1[1];
    uVar5 = 0;
    if (puVar6 < (ushort *)param_1[2]) {
      do {
        uVar10 = uVar5;
        if (*puVar6 == 0x3b) break;
        iVar3 = isxdigit((uint)*puVar6);
        if (iVar3 == 0) goto LAB_1434081f9;
        uVar10 = uVar10 << 4;
        uVar5 = FUN_14331b480(*(undefined2 *)param_1[1]);
        if ((ushort)((short)uVar5 - 0x30U) < 10) {
          uVar5 = uVar5 & 0xf;
LAB_1434081df:
          uVar10 = uVar10 | uVar5;
        }
        else if ((ushort)((short)uVar5 - 0x61U) < 6) {
          uVar5 = ((uVar5 & 0xffff) - 1 & 0xf) + 10;
          goto LAB_1434081df;
        }
        param_1[1] = param_1[1] + 2;
        puVar6 = (ushort *)param_1[1];
        uVar5 = uVar10;
      } while (puVar6 < (ushort *)param_1[2]);
      if (uVar10 == 0xffffffff) goto LAB_1434081f9;
    }
  }
  if (*puVar6 == 0x3b) {
    param_1[1] = puVar6 + 1;
  }
  *(uint *)(param_1 + 3) = uVar10;
LAB_143408216:
  return *(undefined4 *)(param_1 + 3);
}



// FUNCTION 1434082b0 FUN_1434082b0 body=169 status=ok
// SIG undefined FUN_1434082b0(void)

void FUN_1434082b0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_2 * 0x40 + -0x40 + param_1);
    do {
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((puVar2[3] & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((puVar2[1] & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      if ((RefCountNTSImpl *)*puVar2 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar2);
      }
      puVar2 = puVar2 + -8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143408360 FUN_143408360 body=783 status=ok
// SIG undefined FUN_143408360(void)

int FUN_143408360(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 1) {
    return 1;
  }
  if ((uVar1 >> 0xf & 1) == 0) {
    switch(uVar1) {
    case 2:
      Scaleform::Render::Text::SGMLParser<wchar_t>::SkipName(param_1);
    case 7:
    case 8:
      while (*(int *)(param_1 + 8) - 7U < 2) {
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(param_1);
      }
    case 9:
      if (*(int *)(param_1 + 0x28) == 0x3e) {
        FUN_143407c70(param_1 + 0x10);
        *(undefined4 *)(param_1 + 8) = 0x8002;
      }
      break;
    case 3:
      if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
        do {
          if (*(int *)(param_1 + 0x28) == 0x3c) break;
          puVar3 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x10) = puVar3;
          if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
            if (puVar3 < *(ushort **)(param_1 + 0x20)) {
              *(uint *)(param_1 + 0x28) = (uint)*puVar3;
              *(ushort **)(param_1 + 0x18) = puVar3 + 1;
            }
          }
          else {
            FUN_143407e80(param_1 + 0x10);
          }
        } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
      }
      *(undefined4 *)(param_1 + 8) = 0x8003;
      break;
    case 4:
      if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
        do {
          if (*(int *)(param_1 + 0x28) == 0x3e) goto LAB_14340848f;
          puVar3 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x10) = puVar3;
          if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
            if (puVar3 < *(ushort **)(param_1 + 0x20)) {
              *(uint *)(param_1 + 0x28) = (uint)*puVar3;
              *(ushort **)(param_1 + 0x18) = puVar3 + 1;
            }
          }
          else {
            FUN_143407e80(param_1 + 0x10);
          }
        } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
      }
      if (*(int *)(param_1 + 0x28) == 0x3e) {
LAB_14340848f:
        FUN_143407c70(param_1 + 0x10);
        *(undefined4 *)(param_1 + 8) = 0x8004;
      }
      else {
        *(undefined4 *)(param_1 + 8) = 1;
      }
    }
  }
  if (*(int *)(param_1 + 8) == 1) {
    return 1;
  }
  iVar4 = 0;
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
    do {
      if (iVar4 != 0) goto LAB_143408640;
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
LAB_143408629:
        iVar4 = 1;
      }
      else if (iVar2 == 0x2f) {
        if ((*(int *)(param_1 + 8) == 9) || (*(int *)(param_1 + 8) == 6)) {
          puVar3 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x10) = puVar3;
          if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
            if (puVar3 < *(ushort **)(param_1 + 0x20)) {
              *(uint *)(param_1 + 0x28) = (uint)*puVar3;
              *(ushort **)(param_1 + 0x18) = puVar3 + 1;
            }
          }
          else {
            FUN_143407e80(param_1 + 0x10);
          }
          if (*(int *)(param_1 + 0x28) != 0x3e) goto LAB_143408629;
          puVar3 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x10) = puVar3;
          if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
            if (puVar3 < *(ushort **)(param_1 + 0x20)) {
              *(uint *)(param_1 + 0x28) = (uint)*puVar3;
              *(ushort **)(param_1 + 0x18) = puVar3 + 1;
            }
            iVar4 = 0x8005;
          }
          else {
            FUN_143407e80(param_1 + 0x10);
            iVar4 = 0x8005;
          }
        }
        else {
          iVar4 = 3;
        }
      }
      else if (iVar2 == 0x3c) {
        puVar3 = *(ushort **)(param_1 + 0x18);
        *(ushort **)(param_1 + 0x10) = puVar3;
        if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
          if (puVar3 < *(ushort **)(param_1 + 0x20)) {
            *(uint *)(param_1 + 0x28) = (uint)*puVar3;
            *(ushort **)(param_1 + 0x18) = puVar3 + 1;
          }
        }
        else {
          FUN_143407e80(param_1 + 0x10);
        }
        if (*(int *)(param_1 + 0x28) == 0x21) {
          FUN_143409760(param_1);
        }
        else if (*(int *)(param_1 + 0x28) == 0x2f) {
          puVar3 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x10) = puVar3;
          if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
            if (puVar3 < *(ushort **)(param_1 + 0x20)) {
              *(uint *)(param_1 + 0x28) = (uint)*puVar3;
              *(ushort **)(param_1 + 0x18) = puVar3 + 1;
            }
            iVar4 = 4;
          }
          else {
            FUN_143407e80(param_1 + 0x10);
            iVar4 = 4;
          }
        }
        else {
          iVar4 = 2;
        }
      }
      else {
        iVar4 = 3;
      }
    } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
    if (iVar4 != 0) {
LAB_143408640:
      *(int *)(param_1 + 8) = iVar4;
      return iVar4;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x8000;
  return *(int *)(param_1 + 8);
}



// FUNCTION 143408690 GetNextAttribute body=398 status=ok
// SIG undefined GetNextAttribute(void)

undefined8
Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 8) == 1) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 8) {
    SkipAttribute();
  }
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 8);
  do {
    if ((iVar2 != 7) || (*(ulonglong *)(param_1 + 0x20) <= *(ulonglong *)(param_1 + 0x10))) {
      if (*(ulonglong *)(param_1 + 0x20) <= *(ulonglong *)(param_1 + 0x10)) {
        *(undefined4 *)(param_1 + 8) = 1;
      }
      return uVar5;
    }
    FUN_1434090d0(param_1,param_2,param_3);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
      do {
        uVar3 = *(uint *)(param_1 + 0x28);
        uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar3 & 0xffff) >> 8) * 2);
        if ((uVar1 == 0) ||
           ((uVar1 != 1 &&
            ((*(ushort *)
               (&DAT_145afe6e0 + (ulonglong)(((uVar3 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
              (uVar3 & 0xf) & 1) == 0)))) break;
        puVar4 = *(ushort **)(param_1 + 0x18);
        *(ushort **)(param_1 + 0x10) = puVar4;
        if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar4 != 0x26)) {
          if (puVar4 < *(ushort **)(param_1 + 0x20)) {
            *(uint *)(param_1 + 0x28) = (uint)*puVar4;
            *(ushort **)(param_1 + 0x18) = puVar4 + 1;
          }
        }
        else {
          FUN_143407e80(param_1 + 0x10);
        }
      } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
    }
    if (*(ushort **)(param_1 + 0x10) < *(ushort **)(param_1 + 0x20)) {
      if (*(int *)(param_1 + 0x28) == 0x3d) {
        puVar4 = *(ushort **)(param_1 + 0x18);
        *(ushort **)(param_1 + 0x10) = puVar4;
        if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar4 != 0x26)) {
          if (puVar4 < *(ushort **)(param_1 + 0x20)) {
            *(uint *)(param_1 + 0x28) = (uint)*puVar4;
            *(ushort **)(param_1 + 0x18) = puVar4 + 1;
          }
        }
        else {
          FUN_143407e80(param_1 + 0x10);
        }
        SkipSpaces(param_1);
        *(undefined4 *)(param_1 + 8) = 8;
        uVar5 = 1;
      }
      else {
        SkipAttribute(param_1);
      }
    }
    iVar2 = *(int *)(param_1 + 8);
  } while( true );
}



// FUNCTION 143408820 FUN_143408820 body=668 status=ok
// SIG undefined FUN_143408820(void)

undefined8 FUN_143408820(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  if (*(int *)(param_1 + 1) == 8) {
    iVar3 = *(int *)(param_1 + 5);
    if ((iVar3 == 0x22) || (iVar3 == 0x27)) {
      puVar5 = (ushort *)param_1[3];
      param_1[2] = puVar5;
      if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*puVar5 != 0x26)) {
        if (puVar5 < (ushort *)param_1[4]) {
          *(uint *)(param_1 + 5) = (uint)*puVar5;
          param_1[3] = puVar5 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 2);
      }
      bVar6 = false;
      *param_2 = param_1[2];
      *param_3 = 0;
      cVar2 = *(char *)((longlong)param_1 + 0x2c);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      if ((cVar2 == '\0') && (*(short *)param_1[2] == 0x26)) {
        FUN_143407e80(param_1 + 2);
      }
      if ((ulonglong)param_1[2] < (ulonglong)param_1[4]) {
        do {
          if (*(int *)(param_1 + 5) == iVar3) break;
          if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*(short *)param_1[2] != 0x26)) {
            if (bVar6) {
              FUN_143407d70(param_1,param_1[2],(longlong)(param_1[3] - param_1[2]) >> 1 & 0xffffffff
                           );
            }
            else {
              *param_3 = *param_3 + ((longlong)(param_1[3] - param_1[2]) >> 1 & 0xffffffffU);
            }
          }
          else {
            if (!bVar6) {
              param_1[8] = 0;
              FUN_143407d70(param_1,*param_2,*param_3);
              bVar6 = true;
            }
            uVar4 = *(undefined4 *)(param_1 + 5);
            if ((ulonglong)param_1[7] < param_1[8] + 6) {
              lVar1 = param_1[7] + 6;
              param_1[7] = lVar1;
              if (param_1[6] == 0) {
                uVar7 = (**(code **)(*(longlong *)*param_1 + 0x50))
                                  ((longlong *)*param_1,lVar1 * 2,0);
              }
              else {
                uVar7 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[6],lVar1 * 2);
              }
              param_1[6] = uVar7;
            }
            *(short *)(param_1[6] + param_1[8] * 2) = (short)uVar4;
            param_1[8] = param_1[8] + 1;
          }
          puVar5 = (ushort *)param_1[3];
          param_1[2] = puVar5;
          if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*puVar5 != 0x26)) {
            if (puVar5 < (ushort *)param_1[4]) {
              *(uint *)(param_1 + 5) = (uint)*puVar5;
              param_1[3] = puVar5 + 1;
            }
          }
          else {
            FUN_143407e80(param_1 + 2);
          }
        } while ((ulonglong)param_1[2] < (ulonglong)param_1[4]);
      }
      *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
      if (bVar6) {
        *param_2 = param_1[6];
        *param_3 = param_1[8];
      }
      if ((ushort *)param_1[2] < (ushort *)param_1[4]) {
        uVar8 = 1;
        puVar5 = (ushort *)param_1[3];
        param_1[2] = puVar5;
        if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*puVar5 != 0x26)) {
          if (puVar5 < (ushort *)param_1[4]) {
            *(uint *)(param_1 + 5) = (uint)*puVar5;
            param_1[3] = puVar5 + 1;
          }
        }
        else {
          FUN_143407e80(param_1 + 2);
        }
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(param_1);
        if ((*(int *)(param_1 + 5) == 0x3e) || (*(int *)(param_1 + 5) == 0x2f)) {
          *(undefined4 *)(param_1 + 1) = 9;
        }
        else {
          *(undefined4 *)(param_1 + 1) = 7;
        }
      }
      else {
        *(undefined4 *)(param_1 + 1) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 1) = 1;
    }
  }
  if ((ulonglong)param_1[4] <= (ulonglong)param_1[2]) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return uVar8;
}



// FUNCTION 143408ac0 FUN_143408ac0 body=69 status=ok
// SIG undefined FUN_143408ac0(void)

ushort FUN_143408ac0(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(param_1 >> 8) * 2);
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 == 1) {
    return uVar1 & 0xff;
  }
  return (ushort)((*(ushort *)(&DAT_145afe6e0 + (ulonglong)((param_1 >> 4 & 0xf) + (uint)uVar1) * 2)
                   >> (param_1 & 0xf) & 1) != 0);
}



// FUNCTION 143408b10 FUN_143408b10 body=732 status=ok
// SIG undefined FUN_143408b10(void)

bool FUN_143408b10(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  bool bVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 1) == 3) {
    bVar7 = false;
    *param_2 = param_1[2];
    *param_3 = 0;
    cVar2 = *(char *)((longlong)param_1 + 0x2c);
    *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
    if ((cVar2 == '\0') && (*(short *)param_1[2] == 0x26)) {
      FUN_143407e80(param_1 + 2);
    }
    if ((ulonglong)param_1[2] < (ulonglong)param_1[4]) {
      do {
        uVar4 = *(uint *)(param_1 + 5);
        if ((uVar4 == 0x3c) &&
           ((*(char *)((longlong)param_1 + 0x2c) == '\0' || (*(short *)param_1[2] != 0x26)))) break;
        uVar3 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar4 & 0xffff) >> 8) * 2);
        if ((uVar3 == 0) ||
           (((uVar3 != 1 &&
             ((*(ushort *)
                (&DAT_145afe6e0 + (ulonglong)(((uVar4 & 0xffff) >> 4 & 0xf) + (uint)uVar3) * 2) >>
               (uVar4 & 0xf) & 1) == 0)) || (*(char *)(param_1 + 9) == '\0')))) {
          if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*(short *)param_1[2] != 0x26)) {
            if (bVar7) {
              FUN_143407d70(param_1,param_1[2],(longlong)(param_1[3] - param_1[2]) >> 1 & 0xffffffff
                           );
            }
            else {
              *param_3 = *param_3 + ((longlong)(param_1[3] - param_1[2]) >> 1 & 0xffffffffU);
            }
          }
          else {
            if (!bVar7) {
              param_1[8] = 0;
              FUN_143407d70(param_1,*param_2,*param_3);
              bVar7 = true;
            }
            uVar5 = *(undefined4 *)(param_1 + 5);
            if ((ulonglong)param_1[7] < param_1[8] + 6) {
              lVar1 = param_1[7] + 6;
              param_1[7] = lVar1;
              if (param_1[6] == 0) {
                uVar8 = (**(code **)(*(longlong *)*param_1 + 0x50))
                                  ((longlong *)*param_1,lVar1 * 2,0);
              }
              else {
                uVar8 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[6],lVar1 * 2);
              }
              param_1[6] = uVar8;
            }
            *(short *)(param_1[6] + param_1[8] * 2) = (short)uVar5;
            param_1[8] = param_1[8] + 1;
          }
          puVar6 = (ushort *)param_1[3];
          param_1[2] = puVar6;
          if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*puVar6 != 0x26)) {
            if (puVar6 < (ushort *)param_1[4]) {
              *(uint *)(param_1 + 5) = (uint)*puVar6;
              param_1[3] = puVar6 + 1;
            }
          }
          else {
            FUN_143407e80(param_1 + 2);
          }
        }
        else {
          if (!bVar7) {
            param_1[8] = 0;
            FUN_143407d70(param_1,*param_2,*param_3);
            bVar7 = true;
          }
          if ((ulonglong)param_1[7] < param_1[8] + 6) {
            lVar1 = param_1[7] + 6;
            param_1[7] = lVar1;
            if (param_1[6] == 0) {
              uVar8 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,lVar1 * 2,0);
            }
            else {
              uVar8 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[6],lVar1 * 2);
            }
            param_1[6] = uVar8;
          }
          *(undefined2 *)(param_1[6] + param_1[8] * 2) = 0x20;
          param_1[8] = param_1[8] + 1;
          Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(param_1);
        }
      } while ((ulonglong)param_1[2] < (ulonglong)param_1[4]);
      if (bVar7) {
        *param_2 = param_1[6];
        *param_3 = param_1[8];
      }
    }
    if (((ulonglong)param_1[2] < (ulonglong)param_1[4]) &&
       ((*(int *)(param_1 + 5) != 0x3c ||
        ((*(char *)((longlong)param_1 + 0x2c) != '\0' && (*(short *)param_1[2] == 0x26)))))) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    else {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x8000;
    }
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  return *(int *)(param_1 + 1) != 1;
}



// FUNCTION 143408df0 FUN_143408df0 body=365 status=ok
// SIG undefined FUN_143408df0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_143408df0(float *param_1,ushort *param_2,longlong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar6;
  undefined4 extraout_var_00;
  double dVar7;
  uint uVar8;
  
  if (param_3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *param_2;
  uVar6 = (ulonglong)uVar2;
  puVar1 = param_2 + param_3;
  dVar3 = 0.0;
  dVar7 = 0.0;
  uVar8 = 0x3ff00000;
  if (uVar2 == 0x2d) {
    uVar8 = 0xbff00000;
  }
  else if (uVar2 != 0x2b) goto joined_r0x000143408e69;
  param_2 = param_2 + 1;
joined_r0x000143408e69:
  do {
    if (puVar1 <= param_2) {
LAB_143408f18:
      *param_1 = (float)((double)((ulonglong)uVar8 << 0x20) * dVar7);
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    uVar4 = *param_2 - 0x2c;
    uVar6 = (ulonglong)uVar4;
    if ((uVar4 & 0xfffd) == 0) {
      if ((param_2 < puVar1) &&
         (uVar6 = (ulonglong)(ushort)(*param_2 - 0x2c), (*param_2 - 0x2c & 0xfffd) == 0)) {
        while (param_2 = param_2 + 1, param_2 < puVar1) {
          iVar5 = isdigit((uint)*param_2);
          uVar6 = CONCAT44(extraout_var_00,iVar5);
          if (iVar5 == 0) {
LAB_143408f59:
            return uVar6 & 0xffffffffffffff00;
          }
          uVar6 = (ulonglong)(*param_2 - 0x30);
          dVar3 = ((double)(int)(*param_2 - 0x30) + dVar3) * 0.1;
        }
        dVar7 = dVar7 + dVar3;
      }
      goto LAB_143408f18;
    }
    iVar5 = isdigit((uint)*param_2);
    uVar6 = CONCAT44(extraout_var,iVar5);
    if (iVar5 == 0) goto LAB_143408f59;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar6 = (ulonglong)(uVar2 - 0x30);
    dVar7 = (double)(int)(uVar2 - 0x30) + dVar7 * 10.0;
  } while( true );
}



// FUNCTION 143408f60 FUN_143408f60 body=181 status=ok
// SIG undefined FUN_143408f60(void)

undefined8 FUN_143408f60(uint *param_1,ushort *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = isxdigit((uint)*param_2);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = uVar3 << 4;
      uVar2 = FUN_14331b480(*param_2);
      if ((ushort)((short)uVar2 - 0x30U) < 10) {
        uVar2 = uVar2 & 0xf;
LAB_143408fe3:
        uVar3 = uVar3 | uVar2;
      }
      else if ((ushort)((short)uVar2 - 0x61U) < 6) {
        uVar2 = ((uVar2 & 0xffff) - 1 & 0xf) + 10;
        goto LAB_143408fe3;
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 1;
    } while (uVar4 < param_3);
  }
  *param_1 = uVar3;
  return 1;
}



// FUNCTION 143409020 ParseInt body=170 status=ok
// SIG undefined ParseInt(void)

ulonglong Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt
                    (int *param_1,ushort *param_2,ulonglong param_3)

{
  ushort uVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (param_3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *param_2;
  uVar3 = 0;
  uVar4 = 0;
  iVar6 = 1;
  if (uVar1 == 0x2d) {
    iVar6 = -1;
  }
  else if (uVar1 != 0x2b) goto LAB_143409073;
  param_2 = param_2 + 1;
  param_3 = param_3 - 1;
LAB_143409073:
  uVar5 = uVar3;
  if (param_3 != 0) {
    do {
      iVar2 = isdigit((uint)*param_2);
      if (iVar2 == 0) {
        return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
      }
      uVar1 = *param_2;
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      uVar4 = (uint)uVar1 + ((int)uVar5 * 5 + -0x18) * 2;
      uVar5 = (ulonglong)uVar4;
    } while (uVar3 < param_3);
  }
  *param_1 = iVar6 * uVar4;
  return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
}



// FUNCTION 1434090d0 FUN_1434090d0 body=472 status=ok
// SIG undefined FUN_1434090d0(void)

void FUN_1434090d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  bool bVar6;
  undefined8 uVar7;
  
  *param_2 = param_1[2];
  bVar6 = false;
  *param_3 = 0;
  if ((ulonglong)param_1[2] < (ulonglong)param_1[4]) {
    do {
      uVar3 = *(uint *)(param_1 + 5);
      if (((uVar3 - 0x3c < 3) || (uVar3 == 0x2f)) ||
         ((uVar2 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar3 & 0xffff) >> 8) * 2), uVar2 != 0
          && ((uVar2 == 1 ||
              ((*(ushort *)
                 (&DAT_145afe6e0 + (ulonglong)(((uVar3 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2) >>
                (uVar3 & 0xf) & 1) != 0)))))) break;
      if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*(short *)param_1[2] != 0x26)) {
        if (bVar6) {
          FUN_143407d70(param_1,param_1[2],(longlong)(param_1[3] - param_1[2]) >> 1 & 0xffffffff);
        }
        else {
          *param_3 = *param_3 + ((longlong)(param_1[3] - param_1[2]) >> 1 & 0xffffffffU);
        }
      }
      else {
        if (!bVar6) {
          param_1[8] = 0;
          FUN_143407d70(param_1,*param_2,*param_3);
          bVar6 = true;
        }
        uVar4 = *(undefined4 *)(param_1 + 5);
        if ((ulonglong)param_1[7] < param_1[8] + 6) {
          lVar1 = param_1[7] + 6;
          param_1[7] = lVar1;
          if (param_1[6] == 0) {
            uVar7 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,lVar1 * 2,0);
          }
          else {
            uVar7 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[6],lVar1 * 2);
          }
          param_1[6] = uVar7;
        }
        *(short *)(param_1[6] + param_1[8] * 2) = (short)uVar4;
        param_1[8] = param_1[8] + 1;
      }
      puVar5 = (ushort *)param_1[3];
      param_1[2] = puVar5;
      if ((*(char *)((longlong)param_1 + 0x2c) == '\0') || (*puVar5 != 0x26)) {
        if (puVar5 < (ushort *)param_1[4]) {
          *(uint *)(param_1 + 5) = (uint)*puVar5;
          param_1[3] = puVar5 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 2);
      }
    } while ((ulonglong)param_1[2] < (ulonglong)param_1[4]);
    if (bVar6) {
      *param_2 = param_1[6];
      *param_3 = param_1[8];
    }
  }
  return;
}



// FUNCTION 1434092b0 FUN_1434092b0 body=171 status=ok
// SIG undefined FUN_1434092b0(void)

void FUN_1434092b0(longlong *param_1,longlong *param_2,longlong param_3)

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
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x98);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 0x98,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143409360 FUN_143409360 body=197 status=ok
// SIG undefined FUN_143409360(void)

void FUN_143409360(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      lVar1 = *param_1 + -0x78 + (lVar2 + param_3) * 0x98;
      do {
        FUN_1433dedf0(lVar1 + 0x50);
        FUN_1433dd700(lVar1);
        lVar1 = lVar1 + -0x98;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434092b0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434092b0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143409430 FUN_143409430 body=158 status=ok
// SIG undefined FUN_143409430(void)

void FUN_143409430(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1434082b0(param_3 * 0x40 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433c68e0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1433c68e0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1434094d0 SetFontSize body=51 status=ok
// SIG undefined SetFontSize(void)

void Scaleform::Render::Text::TextFormat::SetFontSize(longlong param_1,float param_2)

{
  if (param_2 < 3276.8) {
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 8;
    *(short *)(param_1 + 0x48) = (short)(longlong)(param_2 * 20.0);
    return;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 8;
  *(undefined2 *)(param_1 + 0x48) = 0xffff;
  return;
}



// FUNCTION 143409510 SkipAttribute body=581 status=ok
// SIG undefined SkipAttribute(void)

void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  if (*(int *)(param_1 + 8) == 7) {
    SkipSpaces();
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
      do {
        uVar2 = *(uint *)(param_1 + 0x28);
        uVar1 = *(ushort *)(&DAT_145afd5e0 + (((ulonglong)uVar2 & 0xffff) >> 8) * 2);
        if ((uVar1 == 0) ||
           (((uVar1 != 1 &&
             ((*(ushort *)
                (&DAT_145afd5e0 + (ulonglong)(((uVar2 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
               (uVar2 & 0xf) & 1) == 0)) || (uVar2 == 0x3d)))) break;
        puVar4 = *(ushort **)(param_1 + 0x18);
        *(ushort **)(param_1 + 0x10) = puVar4;
        if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar4 != 0x26)) {
          if (puVar4 < *(ushort **)(param_1 + 0x20)) {
            *(uint *)(param_1 + 0x28) = (uint)*puVar4;
            *(ushort **)(param_1 + 0x18) = puVar4 + 1;
          }
        }
        else {
          FUN_143407e80(param_1 + 0x10);
        }
      } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
    }
    if (*(ulonglong *)(param_1 + 0x20) <= *(ulonglong *)(param_1 + 0x10)) goto LAB_1434095df;
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0x3d) {
      puVar4 = *(ushort **)(param_1 + 0x18);
      *(ushort **)(param_1 + 0x10) = puVar4;
      if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar4 != 0x26)) {
        if (puVar4 < *(ushort **)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0x28) = (uint)*puVar4;
          *(ushort **)(param_1 + 0x18) = puVar4 + 1;
        }
        SkipSpaces(param_1);
        *(undefined4 *)(param_1 + 8) = 8;
      }
      else {
        FUN_143407e80(param_1 + 0x10);
        SkipSpaces(param_1);
        *(undefined4 *)(param_1 + 8) = 8;
      }
    }
    else if ((iVar3 == 0x2f) || (iVar3 == 0x3e)) {
      *(undefined4 *)(param_1 + 8) = 9;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  if (*(int *)(param_1 + 8) != 8) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 == 0x22) || (iVar3 == 0x27)) {
    do {
      puVar4 = *(ushort **)(param_1 + 0x18);
      *(ushort **)(param_1 + 0x10) = puVar4;
      if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar4 != 0x26)) {
        if (puVar4 < *(ushort **)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0x28) = (uint)*puVar4;
          *(ushort **)(param_1 + 0x18) = puVar4 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 0x10);
      }
      puVar4 = *(ushort **)(param_1 + 0x20);
      if (puVar4 <= *(ushort **)(param_1 + 0x10)) goto LAB_1434095df;
    } while (*(int *)(param_1 + 0x28) != iVar3);
    if (*(ushort **)(param_1 + 0x10) < puVar4) {
      puVar5 = *(ushort **)(param_1 + 0x18);
      *(ushort **)(param_1 + 0x10) = puVar5;
      if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar5 != 0x26)) {
        if (puVar5 < puVar4) {
          *(uint *)(param_1 + 0x28) = (uint)*puVar5;
          *(ushort **)(param_1 + 0x18) = puVar5 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 0x10);
      }
      SkipSpaces(param_1);
      if ((*(int *)(param_1 + 0x28) != 0x3e) && (*(int *)(param_1 + 0x28) != 0x2f)) {
        *(undefined4 *)(param_1 + 8) = 7;
        return;
      }
      *(undefined4 *)(param_1 + 8) = 9;
      return;
    }
  }
LAB_1434095df:
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 143409760 FUN_143409760 body=241 status=ok
// SIG undefined FUN_143409760(void)

void FUN_143409760(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
    do {
      if ((*(int *)(param_1 + 0x28) == 0) || (iVar3 == 3)) break;
      puVar1 = *(ushort **)(param_1 + 0x18);
      *(ushort **)(param_1 + 0x10) = puVar1;
      if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar1 != 0x26)) {
        if (puVar1 < *(ushort **)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0x28) = (uint)*puVar1;
          *(ushort **)(param_1 + 0x18) = puVar1 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x28) == 0x2d) {
        iVar2 = iVar3 + 1;
        if (1 < iVar3) {
          iVar2 = iVar3;
        }
      }
      else if (*(int *)(param_1 + 0x28) == 0x3e) {
        iVar2 = 3;
        if (iVar3 != 2) {
          iVar2 = iVar3;
        }
      }
      else {
        iVar2 = 0;
      }
      iVar3 = iVar2;
    } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
  }
  if ((*(ushort **)(param_1 + 0x10) < *(ushort **)(param_1 + 0x20)) && (iVar3 == 3)) {
    puVar1 = *(ushort **)(param_1 + 0x18);
    *(ushort **)(param_1 + 0x10) = puVar1;
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*puVar1 == 0x26)) {
      FUN_143407e80(param_1 + 0x10);
      return;
    }
    if (puVar1 < *(ushort **)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0x28) = (uint)*puVar1;
      *(ushort **)(param_1 + 0x18) = puVar1 + 1;
    }
  }
  return;
}



// FUNCTION 143409860 SkipName body=221 status=ok
// SIG undefined SkipName(void)

void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipName(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  if ((*(int *)(param_1 + 8) == 2) &&
     (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20))) {
    do {
      uVar2 = *(uint *)(param_1 + 0x28);
      if (uVar2 - 0x3c < 3) {
        return;
      }
      if (uVar2 == 0x2f) {
        return;
      }
      uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar2 & 0xffff) >> 8) * 2);
      if (uVar1 != 0) {
        if (uVar1 == 1) {
          return;
        }
        if ((*(ushort *)
              (&DAT_145afe6e0 + (ulonglong)(((uVar2 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
             (uVar2 & 0xf) & 1) != 0) {
          return;
        }
      }
      puVar3 = *(ushort **)(param_1 + 0x18);
      *(ushort **)(param_1 + 0x10) = puVar3;
      if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
        if (puVar3 < *(ushort **)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0x28) = (uint)*puVar3;
          *(ushort **)(param_1 + 0x18) = puVar3 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 0x10);
      }
    } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 143409940 SkipSpaces body=184 status=ok
// SIG undefined SkipSpaces(void)

void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
    do {
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar1 = *(ushort *)(&DAT_145afe6e0 + (((ulonglong)uVar2 & 0xffff) >> 8) * 2);
      if (uVar1 == 0) {
        return;
      }
      if ((uVar1 != 1) &&
         ((*(ushort *)
            (&DAT_145afe6e0 + (ulonglong)(((uVar2 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
           (uVar2 & 0xf) & 1) == 0)) {
        return;
      }
      puVar3 = *(ushort **)(param_1 + 0x18);
      *(ushort **)(param_1 + 0x10) = puVar3;
      if ((*(char *)(param_1 + 0x2c) == '\0') || (*puVar3 != 0x26)) {
        if (puVar3 < *(ushort **)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0x28) = (uint)*puVar3;
          *(ushort **)(param_1 + 0x18) = puVar3 + 1;
        }
      }
      else {
        FUN_143407e80(param_1 + 0x10);
      }
    } while (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 143409a00 FUN_143409a00 body=180 status=ok
// SIG undefined FUN_143409a00(void)

int FUN_143409a00(undefined2 *param_1,char *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  
  pcVar3 = param_2;
  lVar4 = param_3;
  if (param_3 == 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != '\0');
    return -(int)lVar4;
  }
  do {
    iVar1 = FUN_14331b480(*param_1);
    param_1 = param_1 + 1;
    iVar2 = FUN_14331b480((int)*pcVar3);
    pcVar3 = pcVar3 + 1;
    lVar4 = lVar4 + -1;
    if ((lVar4 == 0) || (iVar1 == 0)) break;
    if (iVar1 != iVar2) goto LAB_143409a97;
  } while (*pcVar3 != '\0');
  if ((iVar1 == iVar2) && ((lVar4 != 0 || (*pcVar3 != '\0')))) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != '\0');
    iVar1 = (int)param_3 - (int)lVar4;
  }
  else {
LAB_143409a97:
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}



// FUNCTION 143409ac0 FUN_143409ac0 body=171 status=ok
// SIG undefined FUN_143409ac0(void)

ulonglong FUN_143409ac0(longlong param_1,longlong param_2,undefined2 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return (ulonglong)(uint)-(int)param_4;
  }
  param_1 = param_1 - (longlong)param_3;
  lVar4 = param_2;
  lVar5 = param_4;
  do {
    iVar1 = FUN_14331b480(*(undefined2 *)(param_1 + (longlong)param_3));
    iVar2 = FUN_14331b480(*param_3);
    param_3 = param_3 + 1;
    lVar4 = lVar4 + -1;
    if ((lVar4 == 0) || (iVar1 == 0)) break;
    if (iVar1 != iVar2) goto LAB_143409b53;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((iVar1 == iVar2) && ((lVar4 != 0 || (lVar5 != 0)))) {
    uVar3 = param_2 - param_4 & 0xffffffff;
  }
  else {
LAB_143409b53:
    uVar3 = (ulonglong)(uint)(iVar1 - iVar2);
  }
  return uVar3;
}



// FUNCTION 143409b70 FUN_143409b70 body=179 status=ok
// SIG undefined FUN_143409b70(void)

RefCountImpl * FUN_143409b70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  RefCountImpl *pRVar3;
  RefCountImpl *this;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x54c0,0);
  this = (RefCountImpl *)0x0;
  pRVar3 = this;
  if (lVar2 != 0) {
    pRVar3 = (RefCountImpl *)FUN_1432e2220(lVar2,plVar1,0x41f00000);
  }
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x640,0);
  if (lVar2 != 0) {
    this = (RefCountImpl *)FUN_1434377b0(lVar2,param_2,pRVar3,param_1);
  }
  *(uint *)(pRVar3 + 0x52f4) = *(uint *)(pRVar3 + 0x52f4) | 1;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return pRVar3;
}



// FUNCTION 143409c30 FUN_143409c30 body=462 status=ok
// SIG undefined FUN_143409c30(void)

undefined8 * FUN_143409c30(undefined8 param_1,undefined8 param_2,uint *param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  ulonglong uStack_20;
  undefined8 local_18;
  uint uStack_10;
  uint uStack_c;
  
  local_38 = *(undefined8 *)(param_3 + 4);
  uStack_30 = *(undefined8 *)(param_3 + 6);
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_28 = param_3[8];
  uStack_24 = param_3[9];
  uStack_10 = param_3[0xe];
  uStack_c = param_3[0xf];
  local_18 = 3;
  local_48 = *param_3 | -(uint)(param_4 != '\0') & 0x1000 | 3;
  uStack_20 = (ulonglong)param_3[0x13];
  if (param_3[0x13] == 0xffffffff) {
    uStack_20 = 0x20000;
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x20))(DAT_146b62f28,local_28,&local_48,-param_4);
  Scaleform::MemoryHeap::AssignToCurrentThread(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_144f70a50;
    *puVar2 = &PTR_FUN_145b070f0;
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar2[6] = &PTR_FUN_145b070d8;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0x3e800000;
    puVar2[8] = puVar2;
  }
  uVar5 = 0;
  puVar2[2] = plVar1;
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  uVar4 = uVar5;
  if (lVar3 != 0) {
    uVar4 = FUN_14340b7b0(lVar3);
  }
  if ((RefCountImpl *)puVar2[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[4]);
  }
  puVar2[4] = uVar4;
  Scaleform::GFx::AS2::ASRefCountCollector::SetParams(uVar4,param_3[0x12],param_3[0x11]);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,200,0);
  if (lVar3 != 0) {
    uVar5 = FUN_143360540(lVar3,plVar1);
  }
  if ((RefCountImpl *)puVar2[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[3]);
  }
  puVar2[3] = uVar5;
  puVar2[9] = *(undefined8 *)(param_3 + 10);
  *(uint *)(puVar2 + 0xc) = param_3[0x10];
  (**(code **)(*plVar1 + 0x28))(plVar1,puVar2 + 6);
  FUN_1432bde20(plVar1,puVar2);
  return puVar2;
}



// FUNCTION 143409e30 FUN_143409e30 body=675 status=ok
// SIG undefined FUN_143409e30(void)

undefined8
FUN_143409e30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             int *param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_18 [4];
  
  iVar1 = param_6;
  if (param_6 == 0) {
    iVar1 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                        (*(longlong **)(param_2 + 0x48),0x340,0);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        param_6 = *param_5;
        uVar3 = FUN_1433830e0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                              &param_6,0);
      }
      if (lVar2 + 0x140 != 0) {
        FUN_143425d60(lVar2 + 0x140,uVar3);
      }
    }
    else if (iVar1 == 4) {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                        (*(longlong **)(param_2 + 0x48),0x1b0,0);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        param_6 = *param_5;
        uVar3 = FUN_143de5ba0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                              &param_6);
      }
      if (lVar2 + 0x148 != 0) {
        FUN_1434422b0(lVar2 + 0x148,uVar3);
      }
    }
    else if (iVar1 == 5) {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                        (*(longlong **)(param_2 + 0x48),400,0);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        param_6 = *param_5;
        uVar3 = FUN_1433a3830(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                              &param_6);
      }
    }
    else if (iVar1 == 6) {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                        (*(longlong **)(param_2 + 0x48),0x1b0,0);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        param_6 = *param_5;
        uVar3 = FUN_143de33e0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                              &param_6);
      }
      if (lVar2 + 0x170 != 0) {
        FUN_14343f660(lVar2 + 0x170,uVar3);
      }
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  param_6 = 0x142;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_4,0x78,&param_6);
  if (lVar2 == 0) {
    return 0;
  }
  local_18[0] = *param_5;
  uVar3 = FUN_143422ca0(lVar2,*param_3,*(undefined8 *)(param_2 + 0x18),param_4,local_18);
  return uVar3;
}



// FUNCTION 14340a0f0 FUN_14340a0f0 body=174 status=ok
// SIG undefined FUN_14340a0f0(void)

undefined8 * FUN_14340a0f0(undefined8 param_1,longlong param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_4 < 6) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    uVar3 = param_3 + 0x16U & 0xfffffffffffffff8;
    if (*(ulonglong *)(lVar1 + 0x18) < uVar3) {
      puVar2 = (undefined8 *)FUN_14330cf40(lVar1 + 0x10);
    }
    else {
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - uVar3;
      *(ulonglong *)(lVar1 + 0x10) = (longlong)puVar2 + uVar3;
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR__scalar_deleting_destructor__145b07158;
      return puVar2;
    }
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    uVar3 = param_3 + 0x16U & 0xfffffffffffffff8;
    if (*(ulonglong *)(lVar1 + 0x18) < uVar3) {
      puVar2 = (undefined8 *)FUN_14330cf40(lVar1 + 0x10);
    }
    else {
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - uVar3;
      *(ulonglong *)(lVar1 + 0x10) = (longlong)puVar2 + uVar3;
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR__scalar_deleting_destructor__145b070f8;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14340a1b0 FUN_14340a1b0 body=88 status=ok
// SIG undefined FUN_14340a1b0(void)

undefined8 * FUN_14340a1b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  uVar3 = param_3 + 0x16U & 0xfffffffffffffff8;
  if (*(ulonglong *)(lVar1 + 0x18) < uVar3) {
    puVar2 = (undefined8 *)FUN_14330cf40(lVar1 + 0x10);
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - uVar3;
    *(ulonglong *)(lVar1 + 0x10) = (longlong)puVar2 + uVar3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__scalar_deleting_destructor__145b071b8;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14340a210 FUN_14340a210 body=87 status=ok
// SIG undefined FUN_14340a210(void)

undefined8 * FUN_14340a210(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x18) {
    puVar2 = (undefined8 *)FUN_14330cf40(lVar1 + 0x10,0x18);
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined8 **)(lVar1 + 0x10) = puVar2 + 3;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x18;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145b07218;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14340a270 FUN_14340a270 body=87 status=ok
// SIG undefined FUN_14340a270(void)

undefined8 * FUN_14340a270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x10) {
    puVar2 = (undefined8 *)FUN_14330cf40(lVar1 + 0x10,0x10);
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined8 **)(lVar1 + 0x10) = puVar2 + 2;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x10;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145b07268;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14340a2d0 FUN_14340a2d0 body=165 status=ok
// SIG undefined FUN_14340a2d0(void)

void FUN_14340a2d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FUN_143300df0(param_2 + 0x20,"tag %d: DoActionLoader\n",*param_3);
  FUN_143300df0(param_2 + 0x20,"-- actions in frame %d\n",
                *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 0xe8));
  lVar1 = *(longlong *)(param_2 + 0x38);
  plVar3 = (longlong *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x10) {
    puVar2 = (undefined8 *)FUN_14330cf40(plVar3,0x10);
  }
  else {
    puVar2 = (undefined8 *)*plVar3;
    *plVar3 = (longlong)(puVar2 + 2);
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x10;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__scalar_deleting_destructor__145b072f0;
    puVar2[1] = 0;
  }
  Scaleform::GFx::AS2::DoActionTag::Read(puVar2,param_2);
  FUN_14330bde0(param_2,puVar2);
  return;
}



// FUNCTION 14340a380 FUN_14340a380 body=264 status=ok
// SIG undefined FUN_14340a380(void)

void FUN_14340a380(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  lVar6 = *(longlong *)(param_2 + 0x418);
  if (lVar6 == 0) {
    lVar6 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar6 + 0x29) = 0;
  if (*(int *)(lVar6 + 0x50) - *(int *)(lVar6 + 0x4c) < 2) {
    FUN_143396c40(lVar6,2);
  }
  uVar3 = *(uint *)(lVar6 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar6 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar6 + 0x60));
  *(uint *)(lVar6 + 0x4c) = uVar3 + 2;
  FUN_143300df0(param_2 + 0x20,"  tag %d: DoInitActionLoader\n",*param_3);
  FUN_143300df0(param_2 + 0x20,"  -- init actions for sprite %d\n",CONCAT11(uVar1,uVar2));
  lVar6 = *(longlong *)(param_2 + 0x38);
  plVar5 = (longlong *)(lVar6 + 0x10);
  if (*(ulonglong *)(lVar6 + 0x18) < 0x10) {
    puVar4 = (undefined8 *)FUN_14330cf40(plVar5,0x10);
  }
  else {
    puVar4 = (undefined8 *)*plVar5;
    *plVar5 = (longlong)(puVar4 + 2);
    *(ulonglong *)(lVar6 + 0x18) = *(ulonglong *)(lVar6 + 0x18) - 0x10;
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *puVar4 = &PTR__scalar_deleting_destructor__145b07330;
  }
  Scaleform::GFx::AS2::DoActionTag::Read(puVar4,param_2);
  FUN_14340b120(param_2,local_res10,puVar4);
  return;
}



// FUNCTION 14340a490 FUN_14340a490 body=225 status=ok
// SIG undefined FUN_14340a490(void)

void FUN_14340a490(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  RefCountImpl *this;
  longlong lVar6;
  longlong lVar7;
  
  plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x38);
  this = (RefCountImpl *)(**(code **)(*plVar4 + 0x50))(plVar4,0x30);
  if (this != (RefCountImpl *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145b070c8;
    *(undefined4 *)(this + 8) = 1;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  FUN_1433b0880(param_3,this);
  lVar7 = *(longlong *)(param_2 + 0x418);
  lVar6 = param_2 + 0x50;
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  iVar1 = *(int *)(lVar6 + 0x54);
  iVar2 = *(int *)(lVar6 + 0x50);
  iVar3 = *(int *)(lVar6 + 0x4c);
  if (lVar7 == 0) {
    lVar7 = param_2 + 0x50;
  }
  iVar5 = Scaleform::GFx::Stream::GetTagEndPosition(lVar7);
  lVar7 = *(longlong *)(param_2 + 0x418);
  if (lVar7 == 0) {
    lVar7 = param_2 + 0x50;
  }
  (**(code **)(*(longlong *)this + 8))(this,lVar7,param_4,iVar5 - ((iVar1 - iVar2) + iVar3));
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 14340a580 FUN_14340a580 body=408 status=ok
// SIG undefined FUN_14340a580(void)

void FUN_14340a580(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RefCountImpl *pRVar7;
  undefined8 uVar8;
  longlong lVar9;
  RefCountImpl *this;
  
  while( true ) {
    lVar9 = *(longlong *)(param_2 + 0x418);
    this = (RefCountImpl *)0x0;
    if (lVar9 == 0) {
      lVar9 = param_2 + 0x50;
    }
    *(undefined1 *)(lVar9 + 0x29) = 0;
    if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 2) {
      FUN_143396c40(lVar9,2);
    }
    uVar1 = *(uint *)(lVar9 + 0x4c);
    uVar3 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar9 + 0x60)),
                     *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar9 + 0x60)));
    *(uint *)(lVar9 + 0x4c) = uVar1 + 2;
    iVar5 = uVar3 - 2;
    iVar4 = Scaleform::GFx::LoadProcess::Tell(param_2);
    iVar4 = iVar4 + iVar5;
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x38);
    pRVar7 = (RefCountImpl *)(**(code **)(*plVar2 + 0x50))(plVar2,0x30);
    if (pRVar7 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar7 + 8) = 0;
      *(undefined ***)pRVar7 = &PTR_FUN_144f70a50;
      *(undefined ***)pRVar7 = &PTR_FUN_145b070c8;
      *(undefined4 *)(pRVar7 + 8) = 1;
      *(undefined8 *)(pRVar7 + 0x18) = 0;
      *(undefined8 *)(pRVar7 + 0x20) = 0;
      *(undefined8 *)(pRVar7 + 0x28) = 0;
      this = pRVar7;
    }
    FUN_1433b0880(param_3,this);
    if (uVar3 == 0) {
      lVar9 = *(longlong *)(param_2 + 0x418);
      if (lVar9 == 0) {
        lVar9 = param_2 + 0x50;
      }
      iVar5 = Scaleform::GFx::Stream::GetTagEndPosition(lVar9);
      iVar6 = Scaleform::GFx::LoadProcess::Tell(param_2);
      iVar5 = iVar5 - iVar6;
    }
    lVar9 = *(longlong *)this;
    uVar8 = Scaleform::GFx::LoadProcess::GetStream(param_2);
    (**(code **)(lVar9 + 8))(this,uVar8,param_4,iVar5);
    if (uVar3 == 0) break;
    lVar9 = *(longlong *)(param_2 + 0x418);
    if (lVar9 == 0) {
      lVar9 = param_2 + 0x50;
    }
    iVar5 = Scaleform::GFx::Stream::GetTagEndPosition(lVar9);
    iVar6 = Scaleform::GFx::LoadProcess::Tell(param_2);
    if (iVar5 <= iVar6) break;
    lVar9 = *(longlong *)(param_2 + 0x418);
    if (lVar9 == 0) {
      lVar9 = param_2 + 0x50;
    }
    FUN_143395c80(lVar9,iVar4);
    Scaleform::RefCountImpl::Release(this);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 14340a720 FUN_14340a720 body=150 status=ok
// SIG undefined FUN_14340a720(void)

void FUN_14340a720(RefCountImplCore *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b070c8;
  FUN_1433b0a70(param_1 + 0x18,param_1 + 0x18,0);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
    puVar1 = puVar1 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
  *(undefined ***)param_1 = &PTR_FUN_145b070b8;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14340a7c0 FUN_14340a7c0 body=267 status=ok
// SIG undefined FUN_14340a7c0(void)

void FUN_14340a7c0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  RefCountImpl *this;
  
  if (param_4 != 0) {
    if (param_3 == 7) {
      *(undefined4 *)(param_1 + 0x10) = 8;
    }
    else {
      *(undefined1 *)(param_2 + 0x29) = 0;
      if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 2) {
        FUN_143396c40(param_2,2);
      }
      uVar4 = *(uint *)(param_2 + 0x4c);
      uVar2 = *(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(param_2 + 0x60));
      uVar3 = *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(param_2 + 0x60));
      *(uint *)(param_2 + 0x4c) = uVar4 + 2;
      *(uint *)(param_1 + 0x10) = (uint)CONCAT11(uVar2,uVar3);
      param_4 = param_4 + -2;
    }
    FUN_143300df0(param_2,"-- action conditions %X\n",*(undefined4 *)(param_1 + 0x10));
    FUN_143300df0(param_2,"-- actions in button\n");
    this = (RefCountImpl *)FUN_14340bbf0();
    FUN_14340bc50(this,param_2,param_4);
    FUN_1433b0a70(param_1 + 0x18,param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x18) + (*(longlong *)(param_1 + 0x20) + -1) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      *puVar1 = this;
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14340a8e0 FUN_14340a8e0 body=488 status=ok
// SIG undefined FUN_14340a8e0(void)

void FUN_14340a8e0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  byte param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  
  lVar4 = FUN_1433a8a40(param_4);
  if (lVar4 != 0) {
    *(longlong *)(param_2 + 0x70) = lVar4;
    return;
  }
  if ((int)param_3[3] != 0) {
    param_3[2] = param_3[2] + 1;
  }
  param_3[2] = param_3[2] + 2;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  if (param_5 < 6) {
    lVar4 = param_3[2] + 2;
  }
  else {
    lVar4 = param_3[2] + 4;
  }
  param_3[2] = lVar4;
  plVar5 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  plVar9 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar9 = plVar5;
  }
  do {
    if ((int)param_3[3] != 0) {
      param_3[2] = param_3[2] + 1;
    }
    lVar4 = param_3[2];
    *(undefined4 *)(param_3 + 3) = 0;
    *(undefined4 *)(param_3 + 3) = 0;
    if (param_5 < 6) {
      lVar6 = lVar4 + 2;
      uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar4 + 1 + *param_3),*(undefined1 *)(lVar4 + *param_3)
                            );
    }
    else {
      uVar8 = *(uint *)(*param_3 + lVar4);
      lVar6 = lVar4 + 4;
    }
    param_3[2] = lVar6;
    if (uVar8 == 0) {
      FUN_1433a8a50(param_1 + 8,plVar9);
      *(longlong **)(param_2 + 0x70) = plVar9;
      return;
    }
    plVar7 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
    plVar5 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      *(undefined4 *)(plVar7 + 1) = 0;
      *(undefined1 *)((longlong)plVar7 + 0xc) = 0;
      *(undefined4 *)(plVar7 + 2) = 0xff00;
      plVar7[3] = 0;
      plVar5 = plVar7;
    }
    FUN_1434103e0(plVar5,param_3);
    uVar3 = plVar9[1];
    uVar1 = uVar3 + 1;
    if (uVar1 < uVar3) {
      if (uVar1 < (ulonglong)plVar9[2] >> 1) {
LAB_14340aa5c:
        FUN_14340b4b0(plVar9,plVar9);
      }
    }
    else if ((ulonglong)plVar9[2] < uVar1) goto LAB_14340aa5c;
    plVar9[1] = uVar1;
    puVar2 = (undefined8 *)(*plVar9 + uVar3 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar5;
    }
  } while( true );
}



// FUNCTION 14340aad0 FUN_14340aad0 body=413 status=ok
// SIG undefined FUN_14340aad0(void)

void FUN_14340aad0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar5 = FUN_1433a8a40(param_1 + 8);
  if (lVar5 != 0) {
    *(longlong *)(param_2 + 0x70) = lVar5;
    return;
  }
  if ((int)param_3[3] != 0) {
    param_3[2] = param_3[2] + 1;
  }
  param_3[2] = param_3[2] + 6;
  *(undefined4 *)(param_3 + 3) = 0;
  plVar6 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18,0);
  plVar8 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar8 = plVar6;
  }
  do {
    if ((int)param_3[3] != 0) {
      param_3[2] = param_3[2] + 1;
    }
    *(undefined4 *)(param_3 + 3) = 0;
    iVar4 = *(int *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 4;
    if (iVar4 == 0) {
      FUN_1433a8a50(param_1 + 8,plVar8);
      *(longlong **)(param_2 + 0x70) = plVar8;
      return;
    }
    plVar7 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
    plVar6 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      *(undefined4 *)(plVar7 + 1) = 0;
      *(undefined1 *)((longlong)plVar7 + 0xc) = 0;
      *(undefined4 *)(plVar7 + 2) = 0xff00;
      plVar7[3] = 0;
      plVar6 = plVar7;
    }
    FUN_1434103e0(plVar6,param_3);
    uVar3 = plVar8[1];
    uVar1 = uVar3 + 1;
    if (uVar1 < uVar3) {
      if (uVar1 < (ulonglong)plVar8[2] >> 1) {
LAB_14340ac07:
        FUN_14340b4b0(plVar8,plVar8);
      }
    }
    else if ((ulonglong)plVar8[2] < uVar1) goto LAB_14340ac07;
    plVar8[1] = uVar1;
    puVar2 = (undefined8 *)(*plVar8 + uVar3 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = plVar6;
    }
  } while( true );
}



// FUNCTION 14340ac70 FUN_14340ac70 body=107 status=ok
// SIG undefined FUN_14340ac70(void)

void FUN_14340ac70(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b070f0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10),0);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_145af8240;
  if (*(RefCountNTSImpl **)(param_1 + 0x28) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145b070b0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14340ace0 FUN_14340ace0 body=196 status=ok
// SIG undefined FUN_14340ace0(void)

void FUN_14340ace0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__145b070f8;
  if ((*(char *)(param_1 + 1) < '\0') &&
     (plVar3 = (longlong *)FUN_1433a8a40(), plVar3 != (longlong *)0x0)) {
    uVar4 = 0;
    uVar1 = plVar3[1];
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(*plVar3 + uVar4 * 8);
        if (lVar2 != 0) {
          if (*(RefCountImpl **)(lVar2 + 0x18) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x18));
          }
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar3);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3);
  }
  FPhysXPlatformModule::~FPhysXPlatformModule(param_1);
  return;
}



// FUNCTION 14340adb0 FUN_14340adb0 body=196 status=ok
// SIG undefined FUN_14340adb0(void)

void FUN_14340adb0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__145b071b8;
  if ((*(char *)(param_1 + 1) < '\0') &&
     (plVar3 = (longlong *)FUN_1433a8a40(), plVar3 != (longlong *)0x0)) {
    uVar4 = 0;
    uVar1 = plVar3[1];
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(*plVar3 + uVar4 * 8);
        if (lVar2 != 0) {
          if (*(RefCountImpl **)(lVar2 + 0x18) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x18));
          }
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar3);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3);
  }
  FPhysXPlatformModule::~FPhysXPlatformModule(param_1);
  return;
}



// FUNCTION 14340ae80 FUN_14340ae80 body=89 status=ok
// SIG undefined FUN_14340ae80(void)

undefined8 FUN_14340ae80(undefined8 param_1,ulonglong param_2)

{
  FUN_14340a720();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14340aee0 FUN_14340aee0 body=99 status=ok
// SIG undefined FUN_14340aee0(void)

RefCountImplCore * FUN_14340aee0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b070b8;
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



// FUNCTION 14340af50 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  if ((RefCountImpl *)param_1[1] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[1]);
  }
  *param_1 = &PTR_FUN_145afa360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14340afa0 FUN_14340afa0 body=43 status=ok
// SIG undefined FUN_14340afa0(void)

undefined8 * FUN_14340afa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8240;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14340afd0 FUN_14340afd0 body=99 status=ok
// SIG undefined FUN_14340afd0(void)

RefCountImplCore * FUN_14340afd0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b070b0;
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



// FUNCTION 14340b040 FUN_14340b040 body=89 status=ok
// SIG undefined FUN_14340b040(void)

undefined8 FUN_14340b040(undefined8 param_1,ulonglong param_2)

{
  FUN_14340ac70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14340b0a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14340ace0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14340b0e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14340adb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14340b120 FUN_14340b120 body=121 status=ok
// SIG undefined FUN_14340b120(void)

void FUN_14340b120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x3f8);
  uVar3 = *(longlong *)(param_1 + 0x400) + 1;
  if (uVar3 < *(ulonglong *)(param_1 + 0x400)) {
    uVar4 = uVar3;
    if (*(ulonglong *)(param_1 + 0x408) >> 1 <= uVar3) goto LAB_14340b172;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0x408)) goto LAB_14340b172;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_14330c390(plVar1,plVar1,uVar4);
LAB_14340b172:
  *(ulonglong *)(param_1 + 0x400) = uVar3;
  puVar2 = (undefined8 *)(*plVar1 + -8 + uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
  }
  return;
}



// FUNCTION 14340b1e0 FUN_14340b1e0 body=163 status=ok
// SIG undefined FUN_14340b1e0(void)

void FUN_14340b1e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  RefCountNTSImpl *this;
  
  lVar1 = param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4;
  lVar3 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 0xf0))
                    (lVar1);
  lVar4 = *(longlong *)(param_1 + 8);
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) && (**(char **)(lVar4 + 0x10) != '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x40);
    if (lVar4 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)
             FUN_14340bd30(lVar4,(longlong *)(lVar3 + 0xe8),*(undefined8 *)(param_1 + 8));
    }
    FUN_143427d10(lVar1,this,4);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14340b290 FUN_14340b290 body=181 status=ok
// SIG undefined FUN_14340b290(void)

void FUN_14340b290(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  RefCountNTSImpl *this;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) && (**(char **)(lVar1 + 0x10) != '\0')) {
    lVar1 = param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4;
    lVar3 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 0xf0))
                      (lVar1);
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x40);
    if (lVar4 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)
             FUN_14340bd30(lVar4,(longlong *)(lVar3 + 0xe8),*(undefined8 *)(param_1 + 8));
    }
    FUN_143427d10(lVar1,this,2);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
      return;
    }
  }
  return;
}



// FUNCTION 14340b350 FUN_14340b350 body=172 status=ok
// SIG undefined FUN_14340b350(void)

void FUN_14340b350(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  RefCountNTSImpl *this;
  
  plVar1 = (longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  lVar3 = *(longlong *)(param_1 + 8);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x18) != 0)) && (**(char **)(lVar3 + 0x10) != '\0')) {
    lVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x40);
    if (lVar4 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)
             FUN_14340bd30(lVar4,(longlong *)(lVar3 + 0xe8),*(undefined8 *)(param_1 + 8));
    }
    FUN_143427d10(plVar1,this,param_3);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14340b410 Read body=152 status=ok
// SIG undefined Read(void)

void Scaleform::GFx::AS2::DoActionTag::Read(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_2 + 0x50;
  }
  uVar1 = FUN_14340bbf0();
  if (*(RefCountImpl **)(param_1 + 8) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  lVar3 = *(longlong *)(param_2 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_2 + 0x50;
  }
  iVar2 = Stream::GetTagEndPosition(lVar3);
  lVar3 = *(longlong *)(param_2 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_2 + 0x50;
  }
  FUN_14340bc50(*(undefined8 *)(param_1 + 8),lVar4,
                ((*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x54)) - *(int *)(lVar3 + 0x4c)) + iVar2
               );
  return;
}



// FUNCTION 14340b4b0 FUN_14340b4b0 body=165 status=ok
// SIG undefined FUN_14340b4b0(void)

void FUN_14340b4b0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x104;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14340b560 Tell body=26 status=ok
// SIG undefined Tell(void)

int Scaleform::GFx::LoadProcess::Tell(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
  }
  return (*(int *)(lVar1 + 0x54) - *(int *)(lVar1 + 0x50)) + *(int *)(lVar1 + 0x4c);
}



// FUNCTION 14340b580 FUN_14340b580 body=135 status=ok
// SIG undefined FUN_14340b580(void)

undefined8 * FUN_14340b580(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x13;
  puVar1 = param_1;
  do {
    puVar2 = puVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar2 + 8;
  } while (lVar3 != 0);
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  param_1[0x9c] = param_2;
  param_1[0x9d] = &PTR_DAT_1467cf150;
  FUN_143361080(param_2,param_1,&PTR_DAT_1467cf150,0x9c);
  return param_1;
}



// FUNCTION 14340b610 FUN_14340b610 body=405 status=ok
// SIG undefined FUN_14340b610(void)

void FUN_14340b610(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  byte local_58 [8];
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  plVar2 = *(longlong **)(*param_2 + 0x30);
  FUN_14341b750(*param_2,7);
  lVar4 = *param_3;
  while (lVar4 != 0) {
    local_res10[0] = param_4;
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x70);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      lVar4 = param_3[1];
      FUN_143414770(puVar3,param_2);
      puVar3[0xd] = lVar4;
      *puVar3 = &PTR_LAB_145b0ae70;
      puVar3[4] = &PTR_LAB_145b0aef8;
      FUN_1434a4d00(puVar3 + 4,param_2);
    }
    local_58[0] = 8;
    local_40 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
    }
    lVar4 = -1;
    local_48 = 0;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*param_3 + lVar4) != '\0');
    local_50 = puVar3;
    local_res18[0] =
         FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618)
                       ,*param_3,lVar4,0);
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    (**(code **)(*param_1 + 0x50))(param_1,param_2,local_res18,local_58,local_res10);
    piVar1 = (int *)(local_res18[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
      FUN_1434a2b80(puVar3);
    }
    param_3 = param_3 + 2;
    lVar4 = *param_3;
  }
  return;
}



// FUNCTION 14340b7b0 FUN_14340b7b0 body=137 status=ok
// SIG undefined FUN_14340b7b0(void)

undefined8 * FUN_14340b7b0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[8] = &PTR_StartProfileThreadUsage_145b0ab48;
  param_1[0xc] = param_1 + 8;
  *param_1 = &PTR_FUN_145b0ab68;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 1000;
  return param_1;
}



// FUNCTION 14340b840 SetParams body=50 status=ok
// SIG undefined SetParams(void)

void Scaleform::GFx::AS2::ASRefCountCollector::SetParams(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != -1) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x94) = iVar1;
  if (param_3 != -1) {
    *(int *)(param_1 + 0x74) = param_3;
    *(int *)(param_1 + 0x90) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 1000;
  *(undefined4 *)(param_1 + 0x90) = 1000;
  return;
}



// FUNCTION 14340b880 FUN_14340b880 body=349 status=ok
// SIG undefined FUN_14340b880(void)

void FUN_14340b880(longlong param_1,uint *param_2,int *param_3,RefCountImpl *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  RefCountImpl *local_18;
  undefined8 local_10;
  
  if (*param_3 == *(int *)(param_1 + 0x8c)) {
    if (*param_2 < *(uint *)(param_1 + 0x70)) {
      *param_2 = *param_2 + 1;
    }
    else {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      uVar2 = *(uint *)(param_1 + 0x70) + 1;
      uVar1 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x70) = uVar2;
      uVar3 = uVar1;
      if (uVar1 < *(uint *)(param_1 + 0x78)) {
        uVar3 = *(uint *)(param_1 + 0x78);
      }
      *(uint *)(param_1 + 0x78) = uVar3;
      if (((*(uint *)(param_1 + 0x90) != 0) && (*(uint *)(param_1 + 0x74) < uVar1)) ||
         ((*(uint *)(param_1 + 0x94) != 0 &&
          ((*(uint *)(param_1 + 0x94) <= uVar2 && (*(uint *)(param_1 + 0x90) < uVar1)))))) {
        if (param_4 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(param_4);
        }
        local_10 = 0;
        local_18 = param_4;
        FUN_14349e200(param_1,&local_18);
        if (*(uint *)(param_1 + 0x90) < local_10._4_4_) {
          *(uint *)(param_1 + 0x78) = uVar1;
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x90);
        }
        if (local_10._4_4_ < uVar1) {
          uVar2 = uVar1 - local_10._4_4_;
          if (uVar1 - local_10._4_4_ < *(uint *)(param_1 + 0x74)) {
            uVar2 = *(uint *)(param_1 + 0x74);
          }
          *(uint *)(param_1 + 0x74) = uVar2;
        }
        uVar2 = (uint)(longlong)((double)*(uint *)(param_1 + 0x74) * 0.7);
        if (*(uint *)(param_1 + 0x78) < uVar2) {
          *(uint *)(param_1 + 0x74) = uVar2;
        }
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(uint *)(param_1 + 0x80) = local_10._4_4_;
        if (local_18 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_18);
        }
      }
      *(uint *)(param_1 + 0x7c) = uVar1;
      *param_2 = *(uint *)(param_1 + 0x70);
      *param_3 = *(int *)(param_1 + 0x8c);
    }
  }
  else {
    *param_3 = *(int *)(param_1 + 0x8c);
    *param_2 = 1;
  }
  return;
}



// FUNCTION 14340b9f0 FUN_14340b9f0 body=111 status=ok
// SIG undefined FUN_14340b9f0(void)

void FUN_14340b9f0(longlong param_1,RefCountImpl *param_2)

{
  uint uVar1;
  uint uVar2;
  RefCountImpl *local_18;
  undefined8 local_10;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  local_10 = 0;
  local_18 = param_2;
  FUN_14349e200(param_1,&local_18);
  *(undefined4 *)(param_1 + 0x70) = 0;
  uVar2 = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x78)) {
    uVar2 = *(uint *)(param_1 + 0x78);
  }
  *(uint *)(param_1 + 0x78) = uVar2;
  *(uint *)(param_1 + 0x7c) = uVar1;
  if (local_18 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_18);
  }
  return;
}



// FUNCTION 14340ba70 FUN_14340ba70 body=58 status=ok
// SIG undefined FUN_14340ba70(void)

void FUN_14340ba70(longlong param_1)

{
  FUN_14340b9f0();
  if (((*(byte *)(param_1 + 0x68) & 1) == 0) && (*(longlong *)(param_1 + 0x18) == 0)) {
    Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
    ClearAndRelease(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14340bb80 FUN_14340bb80 body=101 status=ok
// SIG undefined FUN_14340bb80(void)

longlong FUN_14340bb80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((int)param_1[1] < 0) {
    lVar2 = *param_1 + 0x20;
    if (*param_1 == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))
                      (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
    lVar2 = lVar1 + 8;
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 14340bbf0 FUN_14340bbf0 body=88 status=ok
// SIG undefined FUN_14340bbf0(void)

undefined8 * FUN_14340bbf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145b0ab70;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14340bc50 FUN_14340bc50 body=71 status=ok
// SIG undefined FUN_14340bc50(void)

void FUN_14340bc50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = param_3;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_3,0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_143396b20(param_2,uVar1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14340bca0 FUN_14340bca0 body=135 status=ok
// SIG undefined FUN_14340bca0(void)

void FUN_14340bca0(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  void *_Dst;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  if ((int)param_2[3] != 0) {
    param_2[2] = param_2[2] + 1;
  }
  *(undefined4 *)(param_2 + 3) = 0;
  _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,_Size,0);
  *(void **)(param_1 + 0x10) = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)(*param_2 + param_2[2]),_Size);
  *(uint *)(param_1 + 0x18) = param_3;
  lVar1 = param_2[3];
  *(undefined4 *)(param_2 + 3) = 0;
  if ((int)lVar1 != 0) {
    param_2[2] = param_2[2] + 1;
  }
  param_2[2] = param_2[2] + _Size;
  return;
}



// FUNCTION 14340bd30 FUN_14340bd30 body=129 status=ok
// SIG undefined FUN_14340bd30(void)

undefined8 * FUN_14340bd30(undefined8 *param_1,longlong *param_2,RefCountImpl *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b0ab78;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[2] = param_3;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = *(longlong *)(lVar2 + 0x138);
  param_1[6] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return param_1;
}



// FUNCTION 14340bdc0 FUN_14340bdc0 body=55 status=ok
// SIG undefined FUN_14340bdc0(void)

void FUN_14340bdc0(RefCountNTSImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0ab78;
  FUN_143497780(param_1 + 0x18);
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 14340be00 FUN_14340be00 body=40 status=ok
// SIG undefined FUN_14340be00(void)

void FUN_14340be00(void)

{
  FUN_14340be30();
  return;
}



// FUNCTION 14340be30 FUN_14340be30 body=16176 status=ok
// SIG undefined FUN_14340be30(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14340be30(longlong param_1,longlong *param_2,uint param_3,int param_4,undefined ***param_5,
                  undefined8 param_6,int param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  RefCountNTSImpl *this;
  ulonglong uVar23;
  char *pcVar24;
  RefCountNTSImpl **ppRVar25;
  uint uVar26;
  int iVar27;
  char *pcVar28;
  bool bVar29;
  double _X;
  double dVar30;
  undefined ***in_stack_fffffffffffffd98;
  uint7 uVar31;
  undefined8 *local_248;
  char local_240 [8];
  longlong *local_238;
  int local_230 [2];
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong *local_208;
  longlong local_200;
  char *local_1f8;
  longlong local_1f0;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined **local_1c8 [2];
  char local_1b8;
  byte local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  byte local_198;
  byte local_190 [32];
  int local_170 [2];
  longlong *local_168;
  longlong *local_160;
  undefined **local_158;
  byte *local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  longlong *local_128;
  int local_120;
  int local_11c;
  byte local_118 [32];
  byte local_f8 [32];
  longlong *local_d8;
  undefined1 local_d0 [24];
  undefined4 local_b8;
  undefined4 local_b4;
  RefCountNTSImpl *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  longlong local_a0;
  undefined8 *local_98;
  char *local_90;
  uint local_88;
  int local_84;
  undefined8 **local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  byte *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  RefCountNTSImpl *local_50;
  uint local_48;
  
  if ((param_7 == 0) || (param_7 == 3)) {
    if ((*(ushort *)(param_2[0x1c] + 0x6a) & 0x1000) != 0) {
      return;
    }
    if (*(int *)(param_2[0x1c] + 0x2c) < -1) {
      return;
    }
  }
  local_200 = param_2[0x1c];
  if ((*(byte *)(local_200 + 0x6a) >> 4 & 1) != 0) {
    return;
  }
  *(int *)(param_2 + 0x2f) = (int)param_2[0x2f] + 1;
  local_230[0] = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x18) == 0) ||
     (local_1f8 = *(char **)(*(longlong *)(param_1 + 0x10) + 0x10), *local_1f8 == '\0')) {
    local_1f8 = (char *)0x0;
  }
  local_208 = param_2;
  FUN_1434974a0(&local_1d8,*(undefined8 *)(param_2[0x1d] + 0x30),param_6);
  FUN_143416df0(local_1c8,local_200,0);
  local_1f0 = local_208[0x27];
  local_1a8 = FUN_14336b320(local_208[0x1c]);
  local_1a7 = (undefined1)param_7;
  local_1a6 = (param_7 == 2) << 2 | local_1a6 & 0xfb;
  local_1a6 = local_1a6 ^ (local_1b8 * '\x02' ^ local_1a6) & 2;
  bVar5 = (*(code *)local_1c8[0][1])(local_1c8);
  local_1a6 = local_1a6 ^ (local_1a6 ^ bVar5) & 1;
  local_198 = ~(*(byte *)((longlong)param_2 + 0x17e) >> 1) & 1;
  iVar27 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  if (param_4 < iVar27) {
    iVar27 = param_4;
  }
  local_1e8 = iVar27 + param_3;
  local_238 = (longlong *)0x0;
  local_1e4 = param_3;
  local_1e0 = param_3;
  if ((int)local_1e8 <= (int)param_3) goto LAB_14340fc84;
LAB_14340bfb1:
  plVar17 = local_1d0;
  uVar23 = 0;
  if ((local_1d0 != (longlong *)0x0) && (uVar13 = local_1d0[1], uVar13 != 0)) {
    do {
      if ((int)local_1e0 < (int)(*(uint *)(*local_1d0 + -8 + uVar13 * 0x10) & 0x7fffffff)) break;
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar13);
    if (uVar23 != 0) {
      uVar23 = uVar13 - uVar23;
      if (uVar23 < uVar13) {
        uVar13 = uVar23;
        if (uVar23 < (ulonglong)local_1d0[2] >> 1) {
LAB_14340c03a:
          local_1e4 = local_1e0;
          FUN_1434a2ea0(local_1d0,local_1d0,uVar13);
        }
      }
      else if ((ulonglong)local_1d0[2] < uVar23) {
        uVar13 = (uVar23 >> 2) + uVar23;
        goto LAB_14340c03a;
      }
      plVar17[1] = uVar23;
    }
  }
  bVar5 = local_1a8;
  plVar17 = (longlong *)0x0;
  cVar6 = local_1f8[(int)local_1e0];
  uVar31 = (uint7)((ulonglong)in_stack_fffffffffffffd98 >> 8);
  if (cVar6 < '\0') {
    local_1e4 = local_1e0 + 3 +
                (uint)CONCAT11(local_1f8[(int)(local_1e0 + 2)],local_1f8[(int)(local_1e0 + 1)]);
    local_220 = (byte *)CONCAT44(local_220._4_4_,
                                 (uint)CONCAT11(local_1f8[(int)(local_1e0 + 2)],
                                                local_1f8[(int)(local_1e0 + 1)]));
    switch(cVar6) {
    case -0x7f:
      if (((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) &&
         (plVar17 = (longlong *)param_2[0x1c], plVar17 != (longlong *)0x0)) {
        (**(code **)(*plVar17 + 0x378))
                  (plVar17,CONCAT11(local_1f8[(int)(local_1e0 + 4)],local_1f8[(int)(local_1e0 + 3)])
                  );
      }
      goto LAB_14340ef7d;
    default:
      break;
    case -0x7d:
      pcVar24 = local_1f8 + (int)(local_1e0 + 3);
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (pcVar24[lVar19] != '\0');
      pcVar28 = local_1f8 + (local_1e0 + 4 + (int)lVar19);
      iVar27 = strncmp(pcVar24,"FSCommand:",10);
      if (iVar27 == 0) {
        plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(local_200 + 0x20) + 0x10) + 0x240);
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 8))
                    (plVar17,*(undefined8 *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10),
                     pcVar24 + 10,pcVar28);
        }
      }
      else {
        in_stack_fffffffffffffd98 =
             (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffff00000000);
        FUN_143438700(*(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10) + 0x18),pcVar28,
                      pcVar24,param_2,in_stack_fffffffffffffd98,0);
      }
      break;
    case -0x79:
      bVar5 = local_1f8[(int)(local_1e0 + 3)];
      if ((local_1a6 & 4) == 0) {
        if (bVar5 < 4) {
          FUN_143411240(param_2 + (ulonglong)bVar5 * 4 + 9,param_2[1]);
        }
        else if ((local_1a6 & 1) != 0) {
          FUN_143416f20(local_1c8,"StoreRegister[%d] - register out of bounds!");
        }
      }
      else {
        lVar19 = param_2[1];
        uVar20 = FUN_1434199b0(param_2,(ulonglong)bVar5);
        FUN_143411240(uVar20,lVar19);
      }
      break;
    case -0x78:
      in_stack_fffffffffffffd98 = local_1c8;
      FUN_14340ffc0(param_1,param_2 + 0x1d,local_1e0,local_1e4,in_stack_fffffffffffffd98);
      break;
    case -0x76:
    case -0x73:
      FUN_143482010(&local_208,param_1,cVar6);
      break;
    case -0x75:
      pcVar24 = local_1f8 + (int)(local_1e0 + 3);
      if (*pcVar24 == '\0') {
        Scaleform::GFx::AS2::Environment::SetTarget(param_2,local_200);
      }
      else {
        uVar20 = FUN_14349e8a0(param_2,&local_248,pcVar24);
        lVar19 = FUN_143419c20(param_2,uVar20,0);
        if (lVar19 == 0) {
          if ((local_1a6 & 1) != 0) {
            FUN_143416f20(local_1c8,"SetTarget(tellTarget) with invalid target \'%s\'.",pcVar24);
          }
          Scaleform::GFx::AS2::Environment::SetInvalidTarget(param_2,local_200);
          FUN_14349b350(uVar20,0);
        }
        else {
          Scaleform::GFx::AS2::Environment::SetTarget(param_2,lVar19);
          FUN_14349b350(uVar20,0);
        }
      }
      break;
    case -0x74:
      if ((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) {
        lVar19 = 0;
        if ((*(ushort *)(param_2[0x1c] + 0x6a) >> 10 & 1) != 0) {
          lVar19 = param_2[0x1c];
        }
        if (lVar19 == 0) goto LAB_14340f1e7;
        FUN_143384900(lVar19,local_1f8 + (int)(local_1e0 + 3),0);
        cVar6 = FUN_143417100(param_2,param_7);
      }
      else {
LAB_14340f1e7:
        cVar6 = FUN_143417100(param_2,param_7);
      }
      goto LAB_14340ef87;
    case -0x72:
      FUN_1434826f0(&local_208,param_1);
      break;
    case -0x71:
      FUN_14341b3a0(param_2,local_1e0,local_230);
      local_230[0] = local_230[0] + 1;
      local_90 = local_1f8 + (int)(local_1e0 + 3);
      local_88 = local_1e4;
      local_84 = (int)param_2[6] * 0x20 + (int)(param_2[1] - param_2[2] >> 5) + -0x20;
      FUN_1434a2770(param_2 + 0x28,&local_90);
      break;
    case -0x6c:
      if ((local_1d0 == (longlong *)0x0) || ((ulonglong)local_1d0[1] < 8)) {
        uVar10 = CONCAT11(local_1f8[(int)(local_1e0 + 4)],local_1f8[(int)(local_1e0 + 3)]) +
                 local_1e4;
        if (*(char *)param_2[1] == '\a') {
          this = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter();
          if (this != (RefCountNTSImpl *)0x0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
          }
          local_50 = this;
          local_48 = uVar10;
          if ((local_1d0 == (longlong *)0x0) &&
             (local_1d0 = (longlong *)(**(code **)(*local_1d8 + 0x50))(local_1d8,0x18),
             local_1d0 != (longlong *)0x0)) {
            ppRVar25 = &local_50;
            *local_1d0 = 0;
            local_1d0[1] = 0;
            local_1d0[2] = 0;
          }
          else {
            ppRVar25 = &local_50;
          }
        }
        else {
          this = (RefCountNTSImpl *)FUN_143412120((char *)param_2[1],param_2);
          if (this != (RefCountNTSImpl *)0x0) {
            *(uint *)(this + 0x18) = *(int *)(this + 0x18) + 1U & 0x8fffffff;
          }
          uVar10 = uVar10 | 0x80000000;
          local_b0 = this;
          uStack_a8 = uVar10;
          if ((local_1d0 == (longlong *)0x0) &&
             (local_1d0 = (longlong *)(**(code **)(*local_1d8 + 0x50))(local_1d8,0x18),
             local_1d0 != (longlong *)0x0)) {
            *local_1d0 = 0;
            local_1d0[1] = 0;
            local_1d0[2] = 0;
          }
          ppRVar25 = &local_b0;
        }
        FUN_1434a27f0(local_1d0,ppRVar25);
        if ((int)uVar10 < 0) {
          if ((this == (RefCountNTSImpl *)0x0) || ((*(uint *)(this + 0x18) & 0x3ffffff) == 0))
          goto LAB_14340c201;
          *(uint *)(this + 0x18) = *(uint *)(this + 0x18) - 1;
          FUN_1434a2b80(this);
          FUN_14349eac0(param_2);
        }
        else {
          if (this == (RefCountNTSImpl *)0x0) goto LAB_14340c201;
          Scaleform::RefCountNTSImpl::Release(this);
          FUN_14349eac0(param_2);
        }
        break;
      }
      goto LAB_14340c201;
    case -0x6a:
      uVar10 = local_1e0;
      do {
        uVar26 = uVar10 + 1;
        cVar6 = local_1f8[(int)(uVar10 + 3)];
        if (cVar6 == '\x04') {
          uVar26 = uVar10 + 2;
          bVar5 = local_1f8[(int)(uVar10 + 4)];
          if ((local_1a6 & 4) == 0) {
            if (bVar5 < 4) {
              FUN_143490020(param_2,param_2 + (ulonglong)bVar5 * 4 + 9);
            }
            else {
              local_190[0] = 0;
              FUN_143490020(param_2,local_190);
              if ((local_1a6 & 1) != 0) {
                FUN_143416f20(local_1c8,"Push register[%d] - register out of bounds",bVar5);
              }
LAB_14340f663:
              FUN_14349d080(local_190,0);
            }
          }
          else {
            uVar20 = FUN_1434199b0(param_2,(ulonglong)bVar5);
            FUN_143490020(param_2,uVar20);
          }
        }
        else if (cVar6 == '\b') {
          uVar26 = uVar10 + 2;
          uVar23 = (ulonglong)(byte)local_1f8[(int)(uVar10 + 4)];
          bVar29 = uVar23 < *(ulonglong *)(param_1 + 0x20);
LAB_14340f629:
          if (!bVar29) {
            if ((local_1a6 & 1) != 0) {
              FUN_143416f20(local_1c8,"DictLookup(%d) is out of bounds");
            }
LAB_14340f653:
            local_190[0] = 0;
LAB_14340f657:
            FUN_143490020(param_2,local_190);
            goto LAB_14340f663;
          }
          FUN_14348ffd0(param_2,*(longlong *)(param_1 + 0x18) + uVar23 * 8);
        }
        else if (cVar6 == '\0') {
          plVar17 = (longlong *)FUN_14349e8a0(param_2,&local_248,local_1f8 + (int)(uVar10 + 4));
          uVar26 = uVar26 + *(int *)(*plVar17 + 0x20) + 1;
          FUN_14348ffd0(param_2,plVar17);
          piVar1 = (int *)(*plVar17 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if (cVar6 == '\x01') {
          local_218 = (undefined **)
                      CONCAT44(local_218._4_4_,*(undefined4 *)(local_1f8 + (int)(uVar10 + 4)));
          FUN_14348fee0(param_2,&local_218);
          uVar26 = uVar10 + 5;
        }
        else {
          if (cVar6 == '\x02') {
            local_190[0] = 0;
            FUN_143411150(local_190);
            local_190[0] = 1;
            goto LAB_14340f657;
          }
          if (cVar6 == '\x03') goto LAB_14340f653;
          if (cVar6 == '\x05') {
            local_240[0] = local_1f8[(int)(uVar10 + 4)] != '\0';
            FUN_143490070(param_2,local_240);
            uVar26 = uVar10 + 2;
          }
          else if (cVar6 == '\x06') {
            local_b4 = *(undefined4 *)(local_1f8 + (int)(uVar10 + 4));
            local_b8 = *(undefined4 *)(local_1f8 + (int)(uVar10 + 8));
            FUN_14348ff30(param_2,&local_b8);
            uVar26 = uVar10 + 9;
          }
          else if (cVar6 == '\a') {
            local_218 = (undefined **)
                        CONCAT44(local_218._4_4_,
                                 CONCAT31(CONCAT21(CONCAT11(local_1f8[(int)(uVar10 + 7)],
                                                            local_1f8[(int)(uVar10 + 6)]),
                                                   local_1f8[(int)(uVar10 + 5)]),
                                          local_1f8[(int)(uVar10 + 4)]));
            FUN_14348fe90(param_2,&local_218);
            uVar26 = uVar10 + 5;
          }
          else if (cVar6 == '\t') {
            uVar26 = uVar10 + 3;
            uVar23 = (ulonglong)CONCAT11(local_1f8[(int)(uVar10 + 5)],local_1f8[(int)(uVar10 + 4)]);
            bVar29 = uVar23 < *(ulonglong *)(param_1 + 0x20);
            goto LAB_14340f629;
          }
        }
        uVar10 = uVar26;
      } while ((int)(uVar10 - local_1e0) < (int)local_220);
      break;
    case -0x67:
      local_1e4 = local_1e4 +
                  ((int)(short)((ushort)(byte)local_1f8[(int)(local_1e0 + 4)] << 8) |
                  (uint)(byte)local_1f8[(int)(local_1e0 + 3)]);
      if (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) <= local_1e4) {
        Scaleform::GFx::AS2::Environment::SetTarget(param_2,local_200);
        if ((local_1a6 & 1) != 0) {
          FUN_143416f20(local_1c8,"Branch destination %d is out of action buffer bounds!",local_1e4)
          ;
        }
        goto LAB_14340fcdc;
      }
      break;
    case -0x66:
      uVar23 = (ulonglong)uVar31 << 8;
      bVar5 = local_1f8[(int)(local_1e0 + 3)];
      local_d8 = param_2 + 1;
      FUN_143411540(*local_d8,&local_248,param_2,0xffffffff,uVar23);
      uVar20 = FUN_1434a5010(param_2);
      in_stack_fffffffffffffd98 = (undefined ***)(uVar23 & 0xffffffffffffff00);
      FUN_143411540(uVar20,&local_160,param_2,0xffffffff,in_stack_fffffffffffffd98);
      iVar27 = strncmp((char *)*local_160,"FSCommand:",10);
      if (iVar27 == 0) {
        plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(local_200 + 0x20) + 0x10) + 0x240);
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 8))
                    (plVar17,*(undefined8 *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10),
                     *local_160 + 10,*local_248);
        }
      }
      else {
        uVar11 = 0;
        if ((bVar5 & 3) == 1) {
          uVar11 = 1;
        }
        else if ((bVar5 & 3) == 2) {
          uVar11 = 2;
        }
        local_228 = (longlong *)&DAT_145af3922;
        uVar10 = FUN_14336b320(param_2[0x1c]);
        iVar27 = FUN_143437bb0(*local_248,&local_228,6 < uVar10);
        if ((char)bVar5 < '\0') {
          FUN_143438d00(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10) + 0x18),
                        *local_248,*local_160,uVar11);
        }
        else if (((bVar5 & 0x40) != 0) || ((iVar27 != -1 && ((char)*local_228 == '\0')))) {
          in_stack_fffffffffffffd98 =
               (undefined ***)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),uVar11);
          FUN_143438700(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10) + 0x18),
                        *local_248,*local_160,param_2,in_stack_fffffffffffffd98,0);
        }
      }
      FUN_1434a23f0(local_d8);
      piVar1 = (int *)(local_248 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar17 = local_160 + 3;
      *(int *)plVar17 = (int)*plVar17 + -1;
      if ((int)*plVar17 == 0) {
        FUN_14335f920();
      }
      goto switchD_14340c090_caseD_1;
    case -0x65:
      FUN_1434821d0(&local_208,param_1);
      break;
    case -99:
      cVar6 = local_1f8[(int)(local_1e0 + 4)];
      cVar3 = local_1f8[(int)(local_1e0 + 3)];
      cVar7 = FUN_143411fd0(param_2[1],param_2);
      FUN_14349eac0(param_2);
      if (((cVar7 != '\0') &&
          (local_1e4 = local_1e4 + (int)CONCAT11(cVar6,cVar3), (int)local_1e8 < (int)local_1e4)) &&
         ((local_1a6 & 1) != 0)) {
        FUN_143416f20(local_1c8,"branch to offset %d - this section only runs to %d",local_1e4);
      }
      break;
    case -0x62:
      local_220 = (byte *)param_2[0x1c];
      if ((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) {
        in_stack_fffffffffffffd98 = (undefined ***)&local_218;
        local_218 = (undefined **)((ulonglong)local_218 & 0xffffffff00000000);
        cVar6 = FUN_143410210(param_1,param_2,param_2[1],&local_220,in_stack_fffffffffffffd98);
        if (cVar6 == '\0') {
          if ((local_1a6 & 1) != 0) {
            in_stack_fffffffffffffd98 =
                 (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
            FUN_143411540(param_2[1],&local_98,param_2,0xffffffff,in_stack_fffffffffffffd98);
            puVar15 = local_98;
            lVar19 = *(longlong *)(local_220 + 0x70);
            uVar20 = *local_98;
            if (lVar19 == 0) {
              lVar19 = FUN_14336c170();
            }
            FUN_143416f20(local_1c8,"%s, CallFrame(\'%s\') - unknown frame",
                          **(undefined8 **)(lVar19 + 0x18),uVar20);
            piVar1 = (int *)(puVar15 + 3);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(puVar15);
            }
          }
        }
        else {
          pbVar16 = (byte *)0x0;
          if ((*(ushort *)(local_220 + 0x6a) >> 10 & 1) != 0) {
            pbVar16 = local_220;
          }
          if (pbVar16 != (byte *)0x0) {
            FUN_143426e10(pbVar16 + (ulonglong)pbVar16[0x6d] * 4,(ulonglong)local_218 & 0xffffffff);
            FUN_14349eac0(param_2);
            goto switchD_14340c090_caseD_1;
          }
        }
switchD_14340c090_caseD_17:
        FUN_14349eac0(param_2);
      }
      goto switchD_14340c090_caseD_1;
    case -0x61:
      uVar10 = 0;
      local_220 = (byte *)(CONCAT44(local_220._4_4_,~(uint)(byte)local_1f8[(int)(local_1e0 + 3)]) &
                          0xffffffff00000001);
      if ((local_1f8[(int)(local_1e0 + 3)] & 2U) != 0) {
        uVar10 = (uint)CONCAT11(local_1f8[(int)(local_1e0 + 5)],local_1f8[(int)(local_1e0 + 4)]);
      }
      local_228 = (longlong *)param_2[0x1c];
      in_stack_fffffffffffffd98 = (undefined ***)local_170;
      local_170[0] = 0;
      cVar6 = FUN_143410210(param_1,param_2,param_2[1],&local_228,in_stack_fffffffffffffd98);
      plVar17 = local_228;
      if (cVar6 != '\0') {
        (**(code **)(*local_228 + 0x378))(local_228,local_170[0] + uVar10);
        (**(code **)(*plVar17 + 0x398))(plVar17,(ulonglong)local_220 & 0xffffffff);
      }
      FUN_14349eac0(param_2);
      cVar6 = FUN_143417100(param_2,param_7);
      if (cVar6 != '\0') {
        local_1e4 = local_1e8;
      }
    }
switchD_14340ef31_caseD_82:
  }
  else {
    local_1e4 = local_1e0 + 1;
    switch(cVar6) {
    case '\0':
      local_1e4 = local_1e8;
      local_1e0 = local_1e8;
      goto LAB_14340fc84;
    case '\x04':
      if ((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) {
        plVar17 = (longlong *)param_2[0x1c];
        lVar19 = *plVar17;
        iVar27 = (**(code **)(lVar19 + 0x360))(plVar17);
        (**(code **)(lVar19 + 0x378))(plVar17,iVar27 + 1);
      }
      goto LAB_14340ef7d;
    case '\x05':
      if ((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) {
        plVar17 = (longlong *)param_2[0x1c];
        lVar19 = *plVar17;
        iVar27 = (**(code **)(lVar19 + 0x360))(plVar17);
        (**(code **)(lVar19 + 0x378))(plVar17,iVar27 + -1);
      }
      goto LAB_14340ef7d;
    case '\x06':
      if ((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) {
        (**(code **)(*(longlong *)param_2[0x1c] + 0x398))((longlong *)param_2[0x1c],0);
      }
      break;
    case '\a':
      if ((*(byte *)((longlong)param_2 + 0x17e) & 2) == 0) {
        (**(code **)(*(longlong *)param_2[0x1c] + 0x398))((longlong *)param_2[0x1c],1);
      }
      break;
    case '\n':
    case 'G':
      uVar20 = FUN_1434a5010(param_2);
      FUN_1434136e0(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case '\v':
      uVar20 = FUN_1434a5010(param_2);
      FUN_1434139b0(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case '\f':
      uVar20 = FUN_1434a5010(param_2);
      FUN_143413a30(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case '\r':
      uVar20 = FUN_1434a5010(param_2);
      FUN_143413ab0(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case '\x0e':
      uVar20 = FUN_1434a5010(param_2);
      uVar8 = FUN_143412de0(uVar20,param_2,param_2[1]);
      goto LAB_14340c1e7;
    case '\x0f':
    case 'H':
      uVar20 = FUN_1434a5010(param_2);
      in_stack_fffffffffffffd98 =
           (undefined ***)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),0xffffffff);
      pbVar16 = (byte *)FUN_143413170(uVar20,local_190,param_2,param_2[1],in_stack_fffffffffffffd98)
      ;
      uVar20 = FUN_1434a5010(param_2);
      FUN_143411240(uVar20,pbVar16);
      FUN_14349eac0(param_2);
      if (*pbVar16 < 5) goto switchD_14340ef31_caseD_82;
      FUN_143411150(pbVar16);
      break;
    case '\x10':
      uVar20 = FUN_1434a5010(param_2);
      cVar6 = FUN_143411fd0(uVar20,param_2);
      if ((cVar6 != '\0') && (cVar6 = FUN_143411fd0(param_2[1],param_2), cVar6 != '\0'))
      goto LAB_14340c28c;
LAB_14340c2bb:
      uVar8 = 0;
      goto LAB_14340c1e7;
    case '\x11':
      uVar20 = FUN_1434a5010(param_2);
      cVar6 = FUN_143411fd0(uVar20,param_2);
      if ((cVar6 == '\0') && (cVar6 = FUN_143411fd0(param_2[1],param_2), cVar6 == '\0'))
      goto LAB_14340c2bb;
LAB_14340c28c:
      uVar8 = 1;
LAB_14340c1e7:
      puVar12 = (undefined1 *)FUN_1434a5010(param_2);
      FUN_143411150(puVar12);
      *puVar12 = 2;
      puVar12[8] = uVar8;
LAB_14340c201:
      FUN_14349eac0(param_2);
      goto switchD_14340ef31_caseD_82;
    case '\x12':
      pcVar24 = (char *)param_2[1];
      cVar6 = *pcVar24;
      if (cVar6 == '\x02') {
        pcVar24[8] = pcVar24[8] == '\0';
      }
      else if ((cVar6 == '\0') || (cVar6 == '\n')) {
        *pcVar24 = '\x02';
        pcVar24[8] = '\x01';
      }
      else {
        cVar6 = FUN_143411fd0(pcVar24,param_2);
        FUN_143411150(pcVar24);
        *pcVar24 = '\x02';
        pcVar24[8] = cVar6 == '\0';
      }
      goto switchD_14340ef31_caseD_82;
    case '\x13':
      uVar20 = FUN_1434a5010(param_2);
      plVar14 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned(uVar20,&local_248,param_2,bVar5);
      local_228 = (longlong *)
                  Scaleform::GFx::AS2::Value::ToStringVersioned
                            (param_2[1],&local_160,param_2,local_1a8);
      uVar8 = *plVar14 == *local_228;
      goto LAB_14340c364;
    case '\x14':
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned
                          (param_2[1],&local_248,param_2,local_1a8);
      lVar19 = param_2[1];
      uVar11 = FUN_14335fa60(plVar17);
      FUN_1434a47f0(lVar19,uVar11);
      piVar1 = (int *)(*plVar17 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto switchD_14340ef31_caseD_82;
    case '\x15':
      uVar20 = FUN_1434a5030(param_2,2);
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned(uVar20,&local_248,param_2,bVar5);
      uVar11 = FUN_143411e30(param_2[1],param_2);
      uVar20 = FUN_1434a5010(param_2);
      iVar27 = FUN_143411e30(uVar20,param_2);
      plVar14 = (longlong *)FUN_14345c050(&local_160,plVar17,iVar27 + -1,uVar11);
      FUN_1434a23f0(param_2 + 1);
      FUN_1434a4c10(param_2[1],plVar14);
      piVar1 = (int *)(*plVar17 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(*plVar14 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto switchD_14340ef31_caseD_82;
    case '\x17':
      goto switchD_14340c090_caseD_17;
    case '\x18':
      lVar19 = param_2[1];
      uVar11 = FUN_143411e30(lVar19,param_2);
      FUN_1434a47f0(lVar19,uVar11);
      break;
    case '\x1c':
      puVar12 = (undefined1 *)param_2[1];
      in_stack_fffffffffffffd98 =
           (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
      FUN_143411540(puVar12,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      if (*(byte *)(param_2 + 0x1e) < 7) {
        cVar6 = FUN_14349e5a0(*(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x388,
                              &local_248);
        if (cVar6 == '\0') {
          cVar6 = FUN_14349e5a0(*(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x390,
                                &local_248);
          if (cVar6 != '\0') goto LAB_14340c5cb;
          cVar6 = FUN_14349e5a0(*(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x398,
                                &local_248);
          if (cVar6 != '\0') goto LAB_14340c605;
LAB_14340c531:
          FUN_143411150(puVar12);
          *puVar12 = 0;
          in_stack_fffffffffffffd98 = (undefined ***)0x0;
          FUN_1434175f0(param_2,&local_248,puVar12,local_1d0,0,0,0);
        }
        else {
          uVar11 = Scaleform::GFx::NumberUtil::NaN();
          FUN_1434a4b40(puVar12,uVar11);
        }
      }
      else {
        lVar19 = *(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18);
        if (local_248 == *(undefined8 **)(lVar19 + 0x388)) {
          uVar11 = Scaleform::GFx::NumberUtil::NaN();
          FUN_1434a4b40(puVar12,uVar11);
        }
        else if (local_248 == *(undefined8 **)(lVar19 + 0x390)) {
LAB_14340c5cb:
          uVar11 = Scaleform::GFx::NumberUtil::NaN();
          FUN_1434a4b40(puVar12,uVar11);
        }
        else {
          if (local_248 != *(undefined8 **)(lVar19 + 0x398)) goto LAB_14340c531;
LAB_14340c605:
          uVar11 = Scaleform::GFx::NumberUtil::NaN();
          FUN_1434a4b40(puVar12,uVar11);
        }
      }
      piVar1 = (int *)(local_248 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto switchD_14340ef31_caseD_82;
    case '\x1d':
      uVar20 = FUN_1434a5010(param_2);
      uVar23 = (ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00;
      FUN_143411540(uVar20,&local_248,param_2,0xffffffff,uVar23);
      in_stack_fffffffffffffd98 = (undefined ***)CONCAT71((int7)(uVar23 >> 8),1);
      FUN_143419290(param_2,&local_248,param_2[1],local_1d0,in_stack_fffffffffffffd98);
      goto LAB_14340c659;
    case ' ':
      FUN_143480ad0(&local_208);
      break;
    case '!':
      uVar20 = FUN_1434a5010(param_2);
      FUN_143412a00(uVar20,param_2,bVar5);
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned
                          (param_2[1],&local_248,param_2,local_1a8);
      uVar20 = FUN_1434a5010(param_2);
      FUN_143413bb0(uVar20,param_2,plVar17);
      FUN_14349eac0(param_2);
      goto LAB_14340c6d6;
    case '\"':
      uVar20 = FUN_1434a5010(param_2);
      lVar19 = FUN_143419e00(param_2,uVar20);
      if (lVar19 == 0) {
        puVar12 = (undefined1 *)FUN_1434a5010(param_2);
        FUN_143411150(puVar12);
        *puVar12 = 0;
        FUN_14349eac0(param_2);
      }
      else {
        plVar17 = (longlong *)
                  (**(code **)(*(longlong *)(lVar19 + (ulonglong)*(byte *)(lVar19 + 0x6d) * 4) + 8))
                            ();
        lVar19 = *plVar17;
        uVar20 = FUN_1434a5010(param_2);
        uVar11 = FUN_143411e30(param_2[1],param_2);
        (**(code **)(lVar19 + 0x118))(plVar17,uVar11,uVar20,1);
        FUN_14349eac0(param_2);
      }
      goto switchD_14340ef31_caseD_82;
    case '#':
      uVar20 = FUN_1434a5030(param_2,2);
      lVar19 = FUN_143419e00(param_2,uVar20);
      if (lVar19 != 0) {
        plVar17 = (longlong *)
                  (**(code **)(*(longlong *)(lVar19 + (ulonglong)*(byte *)(lVar19 + 0x6d) * 4) + 8))
                            ();
        lVar19 = param_2[1];
        lVar18 = *plVar17;
        uVar20 = FUN_1434a5010(param_2);
        uVar11 = FUN_143411e30(uVar20,param_2);
        (**(code **)(lVar18 + 0x110))(plVar17,uVar11,lVar19,1);
      }
      FUN_1434a2470(param_2 + 1);
      goto switchD_14340ef31_caseD_82;
    case '$':
      uVar20 = FUN_1434a5030(param_2,2);
      lVar19 = FUN_143419e00(param_2,uVar20);
      if (lVar19 != 0) {
        uVar20 = FUN_1434a5010(param_2);
        in_stack_fffffffffffffd98 =
             (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
        FUN_143411540(uVar20,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
        lVar18 = param_2[1];
        uVar20 = (**(code **)(*(longlong *)(lVar19 + (ulonglong)*(byte *)(lVar19 + 0x6d) * 4) + 8))
                           (lVar19 + (ulonglong)*(byte *)(lVar19 + 0x6d) * 4);
        uVar11 = FUN_143411e30(lVar18,param_2);
        FUN_143421ca0(uVar20,&local_248,uVar11,0);
        piVar1 = (int *)(local_248 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      FUN_1434a2470(param_2 + 1);
      goto switchD_14340ef31_caseD_82;
    case '%':
      lVar19 = FUN_143419e00(param_2,param_2[1]);
      if (lVar19 != 0) {
        if (*(int *)(lVar19 + 0x2c) < 0x4000) {
          puVar15 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(lVar19,&local_a0);
          FUN_143416f60(local_1c8,"removeMovieClip(\"%s\") failed - depth must be >= 0",
                        *(undefined8 *)*puVar15);
          piVar1 = (int *)(local_a0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
            FUN_14349eac0(param_2);
            break;
          }
        }
        else {
          FUN_14336ee70(lVar19);
        }
      }
      FUN_14349eac0(param_2);
      break;
    case '&':
      local_11c = (int)param_2[6] * 0x20 + (int)(param_2[1] - param_2[2] >> 5) + -0x20;
      local_158 = &PTR_FUN_145b0ab98;
      local_150 = (byte *)param_2[1];
      local_148 = (longlong *)0x0;
      local_130 = 0;
      local_140 = 0;
      local_138 = 0;
      local_120 = 1;
      local_128 = param_2;
      FUN_14347f6b0(&local_158);
      FUN_14349eac0(param_2);
      (*(code *)*local_158)(&local_158,0);
      break;
    case '\'':
      FUN_143480d70(&local_208);
      break;
    case '(':
      FUN_1432e3ba0(*(undefined8 *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10),0);
      break;
    case ')':
      uVar20 = FUN_1434a5010(param_2);
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned(uVar20,&local_248,param_2,bVar5);
      local_228 = plVar17;
      plVar14 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned
                          (param_2[1],&local_160,param_2,local_1a8);
      uVar8 = FUN_143360290(plVar17,plVar14);
LAB_14340c364:
      puVar12 = (undefined1 *)FUN_1434a5010(param_2);
      FUN_143411150(puVar12);
      *puVar12 = 2;
      puVar12[8] = uVar8;
      FUN_14349eac0(param_2);
      piVar1 = (int *)(*plVar14 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      puVar15 = (undefined8 *)*local_228;
      goto LAB_14340c39d;
    case '*':
      FUN_14341b3a0(param_2,local_1e0,local_230);
      FUN_143411240(param_2 + 0x2b,param_2[1]);
      FUN_14349eac0(param_2);
LAB_14340ca10:
      in_stack_fffffffffffffd98 = param_5;
      local_1e4 = FUN_14341ad70(param_2,param_1,local_1e4,local_230,param_5,local_1d0,param_7);
      break;
    case '+':
      FUN_1434810b0(&local_208);
      break;
    case ',':
      FUN_143481310(&local_208);
      break;
    case '0':
      uVar10 = FUN_143411e30(param_2[1],param_2);
      uVar23 = (ulonglong)uVar10;
      lVar19 = param_2[1];
      if ((int)uVar10 < 1) {
        uVar23 = 1;
      }
      uVar13 = FUN_143462c00(*(undefined8 *)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10));
      FUN_1434a47f0(lVar19,(uVar13 & 0xffffffff) % uVar23);
      goto switchD_14340ef31_caseD_82;
    case '1':
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned
                          (param_2[1],&local_248,param_2,local_1a8);
      uVar11 = FUN_14335fa60(plVar17);
      FUN_1434a47f0(param_2[1],uVar11);
LAB_14340c6d6:
      piVar1 = (int *)(*plVar17 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) goto switchD_14340ef31_caseD_82;
      FUN_14335f920();
      break;
    case '2':
      in_stack_fffffffffffffd98 = (undefined ***)((ulonglong)uVar31 << 8);
      FUN_143411540(param_2[1],&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      FUN_1434a47f0(param_2[1],(int)*(char *)*local_248);
      puVar15 = local_248;
      goto LAB_14340c663;
    case '3':
      bVar5 = FUN_143411e30(param_2[1],param_2);
      local_168._0_2_ = (ushort)bVar5;
      lVar19 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x618),
                             &local_168);
      goto LAB_14340cb43;
    case '4':
      local_168 = (longlong *)
                  (**(code **)(**(longlong **)(*(longlong *)(param_2[0x1c] + 0x20) + 0x10) + 0x58))
                            ();
      dVar30 = (double)(longlong)local_168;
      if ((longlong)local_168 < 0) {
        dVar30 = dVar30 + 1.8446744073709552e+19;
      }
      param_2[1] = param_2[1] + 0x20;
      if ((ulonglong)param_2[3] <= (ulonglong)param_2[1]) {
        FUN_1434a29d0(param_2 + 1);
      }
      puVar12 = (undefined1 *)param_2[1];
      if (puVar12 == (undefined1 *)0x0) goto switchD_14340ef31_caseD_82;
      *(double *)(puVar12 + 8) = dVar30;
      *puVar12 = 3;
      break;
    case '5':
      uVar20 = FUN_1434a5030(param_2,2);
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned(uVar20,&local_248,param_2,bVar5);
      uVar11 = FUN_143411e30(param_2[1],param_2);
      uVar20 = FUN_1434a5010(param_2);
      iVar27 = FUN_143411e30(uVar20,param_2);
      puVar15 = (undefined8 *)FUN_14345c050(&local_160,plVar17,iVar27 + -1,uVar11);
      FUN_1434a23f0(param_2 + 1);
      FUN_1434a4c10(param_2[1],puVar15);
      piVar1 = (int *)(*plVar17 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      puVar15 = (undefined8 *)*puVar15;
      goto LAB_14340c39d;
    case '6':
      plVar17 = (longlong *)
                Scaleform::GFx::AS2::Value::ToStringVersioned
                          (param_2[1],&local_248,param_2,local_1a8);
      if (*(int *)(*plVar17 + 0x20) == 0) {
        FUN_1434a47f0(param_2[1],0);
        puVar15 = (undefined8 *)*plVar17;
      }
      else {
        uVar11 = FUN_14335fad0(plVar17,0);
        FUN_1434a47f0(param_2[1],uVar11);
        puVar15 = (undefined8 *)*plVar17;
      }
      goto LAB_14340c663;
    case '7':
      uVar9 = FUN_143411f00(param_2[1],param_2);
      local_168._0_4_ = (uint)uVar9;
      lVar19 = FUN_143360fd0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x618),
                             &local_168,0xffffffffffffffff);
LAB_14340cb43:
      *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1;
      pbVar16 = (byte *)param_2[1];
      if (4 < *pbVar16) {
        FUN_143411150(pbVar16);
      }
      *pbVar16 = 5;
      *(longlong *)(pbVar16 + 8) = lVar19;
      iVar27 = *(int *)(lVar19 + 0x18);
      *(int *)(lVar19 + 0x18) = iVar27;
      if (iVar27 == 0) {
        FUN_14335f920(lVar19);
      }
      goto switchD_14340ef31_caseD_82;
    case ':':
      uVar8 = 0;
      pbVar16 = (byte *)FUN_1434a5010(param_2);
      in_stack_fffffffffffffd98 =
           (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
      FUN_143411540(param_2[1],&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      if ((local_1a8 < 7) && ((*pbVar16 < 2 || (*pbVar16 == 10)))) {
        local_190[0] = 0;
        cVar6 = FUN_143418720(param_2,&local_248,local_190,local_1d0);
        if ((cVar6 != '\0') &&
           (plVar17 = (longlong *)FUN_1434123a0(local_190,param_2), plVar17 != (longlong *)0x0)) {
          uVar8 = (**(code **)(*plVar17 + 0x30))(plVar17,param_2 + 0x1d,&local_248);
        }
        if (4 < local_190[0]) {
          FUN_143411150(local_190);
        }
      }
      else {
        uVar20 = FUN_1434a5010(param_2);
        plVar17 = (longlong *)FUN_1434123a0(uVar20,param_2);
        if (plVar17 != (longlong *)0x0) {
          uVar8 = (**(code **)(*plVar17 + 0x30))(plVar17,param_2 + 0x1d,&local_248);
        }
      }
      FUN_14349eac0(param_2);
      puVar12 = (undefined1 *)param_2[1];
      FUN_143411150(puVar12);
      *puVar12 = 2;
      puVar12[8] = uVar8;
      puVar15 = local_248;
LAB_14340c39d:
      piVar1 = (int *)(puVar15 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto switchD_14340ef31_caseD_82;
    case ';':
      in_stack_fffffffffffffd98 = (undefined ***)((ulonglong)uVar31 << 8);
      FUN_143411540(param_2[1],&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      local_190[0] = 0;
      if (((*(uint *)((longlong)local_248 + 0x1c) >> 0x19 & 1) == 0) &&
         (cVar6 = FUN_14341a9a0(&local_248), cVar6 != '\0')) {
        local_80 = &local_248;
        local_78 = 0;
        local_70 = local_1d0;
        local_60 = local_190;
        local_68 = 0;
        local_58 = 0;
        cVar6 = FUN_143418920(param_2,&local_80,0,&local_248);
        if (((cVar6 == '\0') || (local_190[0] == 0)) || (local_190[0] == 10)) goto LAB_14340ce8e;
LAB_14340cee2:
        plVar17 = (longlong *)FUN_1434123a0(local_190,param_2);
        if (plVar17 == (longlong *)0x0) goto LAB_14340ce8e;
        puVar12 = (undefined1 *)param_2[1];
        uVar8 = (**(code **)(*plVar17 + 0x30))(plVar17,param_2 + 0x1d,&local_248);
        FUN_143411150(puVar12);
        *puVar12 = 2;
        puVar12[8] = uVar8;
      }
      else {
        cVar6 = FUN_143418720(param_2,&local_248,local_190,local_1d0);
        if (cVar6 != '\0') goto LAB_14340cee2;
LAB_14340ce8e:
        puVar12 = (undefined1 *)param_2[1];
        FUN_143411150(puVar12);
        *puVar12 = 2;
        puVar12[8] = 0;
      }
      piVar1 = (int *)(local_248 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (4 < local_190[0]) {
        FUN_143411150(local_190);
      }
      goto switchD_14340ef31_caseD_82;
    case '<':
      uVar20 = FUN_1434a5010(param_2);
      in_stack_fffffffffffffd98 =
           (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
      FUN_143411540(uVar20,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      if (((local_1a6 & 4) == 0) && (param_7 != 1)) {
        in_stack_fffffffffffffd98 =
             (undefined ***)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),1);
        FUN_143419290(param_2,&local_248,param_2[1],local_1d0,in_stack_fffffffffffffd98);
      }
      else {
        FUN_143419680(param_2,&local_248,param_2[1]);
      }
LAB_14340c659:
      FUN_1434a23f0(param_2 + 1);
      puVar15 = local_248;
LAB_14340c663:
      piVar1 = (int *)(puVar15 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) goto switchD_14340ef31_caseD_82;
      FUN_14335f920();
      break;
    case '=':
      pcVar24 = (char *)param_2[1];
      local_190[0] = 0;
      local_118[0] = 0;
      local_240[0] = '\x01';
      if (*pcVar24 == '\x05') {
        FUN_143411540(pcVar24,&local_248,param_2,0xffffffff,(ulonglong)uVar31 << 8);
        in_stack_fffffffffffffd98 = (undefined ***)0x0;
        FUN_1434175f0(param_2,&local_248,local_190,local_1d0,0,local_118,0);
        if ((local_190[0] == 8) || (local_190[0] == 0xb)) {
          local_220 = local_190;
        }
        else {
          if (local_190[0] == 6) {
            plVar14 = (longlong *)FUN_143412120(local_190,param_2);
            if (plVar14 != (longlong *)0x0) {
              *(uint *)(plVar14 + 3) = (int)plVar14[3] + 1U & 0x8fffffff;
            }
            if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
              *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
              FUN_1434a2b80();
            }
            local_238 = plVar14;
            if ((plVar14 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(plVar14[4] + 0x78))(plVar14 + 4), cVar6 == '\0'))
            goto LAB_14340d0c3;
            if (4 < local_190[0]) {
              FUN_143411150(local_190);
            }
            uVar20 = (**(code **)(local_238[4] + 0x70))(local_238 + 4,local_d0,param_2 + 0x1d);
            local_220 = (byte *)Scaleform::GFx::AS2::Value::Value(local_190,uVar20);
            FUN_14349ebc0(uVar20);
            FUN_143412aa0(local_118,local_238);
          }
          else {
LAB_14340d0c3:
            if ((local_1a6 & 1) != 0) {
              FUN_143416f20(local_1c8,"CallFunction - \'%s\' is not a function",*local_248);
            }
            local_220 = local_190;
            local_240[0] = '\0';
          }
          if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
            *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
            FUN_1434a2b80(local_238);
          }
          local_238 = (longlong *)0x0;
        }
        pbVar16 = local_220;
        piVar1 = (int *)(local_248 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        FUN_143411240(local_190,pcVar24);
        pbVar16 = local_190;
        local_220 = pbVar16;
      }
      uVar20 = FUN_1434a5010(param_2);
      local_228 = (longlong *)FUN_143411a90(uVar20,param_2);
      if (((ulonglong)local_228 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        plVar17 = (longlong *)(ulonglong)(uint)(int)(double)local_228;
      }
      local_f8[0] = 0;
      local_168 = local_228;
      if (local_240[0] != '\0') {
        local_228 = (longlong *)FUN_1434123a0(local_118,param_2);
        plVar14 = (longlong *)Scaleform::GFx::AS2::Value::ToFunction(pbVar16,local_d0,param_2);
        if (*plVar14 == 0) {
          cVar6 = (**(code **)(*param_2 + 8))(param_2);
          if (cVar6 != '\0') {
            FUN_1434171c0(param_2,"CallFunction - attempt to call invalid function");
          }
        }
        else {
          local_130 = 0;
          local_150 = local_f8;
          local_158 = &PTR_FUN_145b0ab98;
          local_148 = local_228;
          local_140 = 0;
          local_138 = 0;
          local_11c = (int)param_2[6] * 0x20 + (int)(param_2[1] - param_2[2] >> 5) + -0x22;
          local_128 = param_2;
          local_120 = (int)plVar17;
          (**(code **)(*(longlong *)*plVar14 + 0x50))((longlong *)*plVar14,&local_158,plVar14[1],0);
          (*(code *)*local_158)(&local_158,0);
        }
        FUN_14349ebc0(plVar14);
        pbVar16 = local_220;
      }
      FUN_14349eb00(param_2,(int)plVar17 + 1);
      FUN_143411240(param_2[1],local_f8);
      if (4 < local_118[0]) {
        FUN_143411150(local_118);
      }
      FUN_14349d080(pbVar16,0);
      FUN_14349d080(local_f8,0);
      goto LAB_14340d2a5;
    case '>':
      if (param_5 != (undefined ***)0x0) {
        FUN_143411240(param_5,param_2[1]);
      }
      FUN_14349eac0(param_2);
      local_1e4 = local_1e8;
      local_1e0 = local_1e8;
      iVar27 = local_230[0];
      goto joined_r0x00014340fb5c;
    case '?':
      dVar30 = (double)FUN_143411a90(param_2[1],param_2);
      uVar20 = FUN_1434a5010(param_2);
      _X = (double)FUN_143411a90(uVar20,param_2);
      if (dVar30 == 0.0) {
        dVar30 = (double)Scaleform::GFx::NumberUtil::NaN();
      }
      else {
        dVar30 = _guard_xfg_dispatch_icall_nop(_X,dVar30);
      }
      FUN_1434a23f0(param_2 + 1);
      param_2[1] = param_2[1] + 0x20;
      if ((ulonglong)param_2[3] <= (ulonglong)param_2[1]) {
        FUN_1434a29d0(param_2 + 1);
      }
      puVar12 = (undefined1 *)param_2[1];
      if (puVar12 != (undefined1 *)0x0) {
        *(double *)(puVar12 + 8) = dVar30;
        *puVar12 = 3;
      }
      break;
    case '@':
      FUN_143411540(param_2[1],&local_248,param_2,0xffffffff,(ulonglong)uVar31 << 8);
      uVar20 = FUN_1434a5010(param_2);
      local_228 = (longlong *)FUN_143411a90(uVar20,param_2);
      if (((ulonglong)local_228 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        plVar17 = (longlong *)(ulonglong)(uint)(int)(double)local_228;
      }
      local_218 = (undefined **)CONCAT44(local_218._4_4_,(int)plVar17);
      local_168 = local_228;
      FUN_1434a23f0(param_2 + 1);
      if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
        FUN_1434a2b80();
      }
      in_stack_fffffffffffffd98 = (undefined ***)0x0;
      local_238 = (longlong *)0x0;
      local_190[0] = 0;
      cVar6 = FUN_1434175f0(param_2,&local_248,local_190,local_1d0,0,0,0);
      if ((cVar6 == '\0') || ((local_190[0] != 8 && (local_190[0] != 0xb)))) {
        if ((local_1a6 & 1) != 0) {
          FUN_143416f20(local_1c8,"Can\'t create object with unknown class \'%s\'",*local_248);
        }
      }
      else {
        local_228 = (longlong *)Scaleform::GFx::AS2::Value::ToFunction(local_190,local_d0,param_2);
        plVar17 = (longlong *)FUN_143419ed0(param_2,local_228,plVar17,0xffffffff);
        if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
          FUN_1434a2b80();
        }
        local_238 = plVar17;
        if ((plVar17 == (longlong *)0x0) && ((local_1a6 & 1) != 0)) {
          FUN_143416f20(local_1c8,"Can\'t create object with unknown class \'%s\'",*local_248);
        }
        FUN_14349ebc0(local_228);
      }
      FUN_14349eb00(param_2,(ulonglong)local_218 & 0xffffffff);
      if (local_238 == (longlong *)0x0) {
        local_118[0] = 0;
        FUN_143490020(param_2,local_118);
        FUN_14349d080(local_118,0);
      }
      else {
        param_2[1] = param_2[1] + 0x20;
        if ((ulonglong)param_2[3] <= (ulonglong)param_2[1]) {
          FUN_1434a29d0(param_2 + 1);
        }
        if (param_2[1] != 0) {
          FUN_143410c00(param_2[1],local_238);
        }
      }
      if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
        FUN_1434a2b80();
      }
      local_238 = (longlong *)0x0;
      FUN_14349d080(local_190,0);
      piVar1 = (int *)(local_248 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_14340d588;
    case 'A':
      in_stack_fffffffffffffd98 = (undefined ***)((ulonglong)uVar31 << 8);
      FUN_143411540(param_2[1],&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      if (((local_1a6 & 4) != 0) || (param_7 == 1)) {
        FUN_143419780(param_2,&local_248);
      }
      FUN_14349eac0(param_2);
      piVar1 = (int *)(local_248 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      break;
    case 'B':
      dVar30 = (double)FUN_143411a90(param_2[1],param_2);
      iVar27 = (int)dVar30;
      FUN_14349eac0(param_2);
      local_11c = (int)param_2[6] * 0x20 + (int)(param_2[1] - param_2[2] >> 5) + -0x20;
      local_190[0] = 0;
      local_148 = (longlong *)0x0;
      local_130 = 0;
      local_158 = &PTR_FUN_145b0ab98;
      local_150 = local_190;
      local_140 = 0;
      local_138 = 0;
      local_128 = param_2;
      local_120 = iVar27;
      FUN_143461020(&local_158);
      (*(code *)*local_158)(&local_158,0);
      if (0 < iVar27) {
        FUN_14349eb00(param_2,iVar27);
      }
      FUN_143490020(param_2,local_190);
      FUN_14349d080(local_190,0);
      break;
    case 'C':
      dVar30 = (double)FUN_143411a90(param_2[1],param_2);
      in_stack_fffffffffffffd98 =
           (undefined ***)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),0xffffffff);
      local_228 = (longlong *)
                  FUN_14341a5c0(param_2,*(undefined8 *)(param_2[0x1d] + 0x60),
                                *(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x140,0,
                                in_stack_fffffffffffffd98);
      if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
        FUN_1434a2b80();
      }
      local_238 = local_228;
      FUN_14349eac0(param_2);
      if ((local_238 != (longlong *)0x0) && (0 < (int)dVar30)) {
        uVar23 = (ulonglong)(uint)(int)dVar30;
        do {
          if (0 < (int)param_2[6] * 0x20 + -0x20 + (int)(param_2[1] - param_2[2] >> 5)) {
            pcVar24 = (char *)FUN_1434a5010(param_2);
            if (*pcVar24 == '\x05') {
              uVar20 = FUN_1434a5010(param_2);
              FUN_143411540(uVar20,&local_248,param_2,0xffffffff,
                            (ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
              in_stack_fffffffffffffd98 = (undefined ***)local_240;
              local_240[0] = '\0';
              (**(code **)(local_238[4] + 0x18))
                        (local_238 + 4,param_2,&local_248,param_2[1],in_stack_fffffffffffffd98);
              piVar1 = (int *)(local_248 + 3);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            FUN_1434a23f0(param_2 + 1);
          }
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      plVar17 = local_238;
      param_2[1] = param_2[1] + 0x20;
      if ((ulonglong)param_2[3] <= (ulonglong)param_2[1]) {
        FUN_1434a29d0(param_2 + 1);
      }
      if (param_2[1] != 0) {
        FUN_143410c00(param_2[1],plVar17);
      }
      if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
        FUN_1434a2b80();
      }
      local_238 = (longlong *)0x0;
LAB_14340d588:
      if ((char)param_2[0x2b] == '\n') {
        cVar6 = FUN_143417100(param_2,param_7);
      }
      else {
        FUN_14341b3a0(param_2,local_1e0,local_230);
        in_stack_fffffffffffffd98 = param_5;
        local_1e4 = FUN_14341ad70(param_2,param_1,local_1e4,local_230,param_5,local_1d0,param_7);
        cVar6 = FUN_143417100(param_2,param_7);
      }
      goto LAB_14340ef87;
    case 'D':
      pcVar24 = (char *)param_2[1];
      switch(*pcVar24) {
      case '\0':
      case '\n':
switchD_14340d8a1_caseD_0:
        lVar19 = 0x33;
        break;
      case '\x01':
        lVar19 = 0x34;
        break;
      case '\x02':
        lVar19 = 0x39;
        break;
      default:
        if ((byte)(*pcVar24 - 3U) < 2) {
          lVar19 = 0x38;
        }
        else {
          lVar19 = 0x33;
          if ((local_1a6 & 1) != 0) {
            FUN_143416f20(local_1c8,"typeof unknown - %02X",*pcVar24);
            goto switchD_14340d8a1_caseD_0;
          }
        }
        break;
      case '\x05':
        lVar19 = 0x37;
        break;
      case '\x06':
switchD_14340d8a1_caseD_6:
        lVar19 = 0x3b;
        break;
      case '\a':
        lVar19 = Scaleform::GFx::AS2::Value::ToCharacter(pcVar24,param_2);
        if ((lVar19 != 0) && ((*(ushort *)(lVar19 + 0x6a) >> 10 & 1) == 0))
        goto switchD_14340d8a1_caseD_6;
        lVar19 = 0x3a;
        break;
      case '\b':
        lVar19 = 0x3c;
      }
      FUN_1434a4c10(param_2[1],
                    *(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + (lVar19 + 0x27) * 8)
      ;
      break;
    case 'E':
      lVar19 = Scaleform::GFx::AS2::Value::ToCharacter(param_2[1],param_2);
      if (lVar19 == 0) {
        puVar12 = (undefined1 *)param_2[1];
        FUN_143411150(puVar12);
        *puVar12 = 0;
      }
      else {
        lVar18 = *(longlong *)(lVar19 + 0x70);
        if (lVar18 == 0) {
          lVar18 = FUN_14336c170(lVar19);
        }
        FUN_1434a4c10(param_2[1],lVar18 + 0x18);
      }
      break;
    case 'F':
    case 'U':
      FUN_143481750(&local_208);
      break;
    case 'I':
      uVar20 = FUN_1434a5010(param_2);
      lVar19 = param_2[1];
LAB_14340d9a6:
      uVar8 = FUN_143412de0(uVar20,param_2,lVar19);
      uVar20 = FUN_1434a5010(param_2);
      goto LAB_14340d9bf;
    case 'J':
      FUN_143412960(param_2[1],param_2);
      break;
    case 'K':
      FUN_143412a00(param_2[1],param_2,local_1a8);
      break;
    case 'L':
      FUN_143490020(param_2,param_2[1]);
      break;
    case 'M':
      uVar20 = FUN_1434a5010(param_2);
      uVar20 = FUN_143410ec0(local_190,uVar20);
      uVar21 = FUN_1434a5010(param_2);
      FUN_143411240(uVar21,param_2[1]);
      FUN_143411240(param_2[1],uVar20);
      FUN_14349d080(uVar20,0);
      break;
    case 'N':
      pbVar16 = (byte *)FUN_1434a5010(param_2);
      local_220 = (byte *)param_2[1];
      plVar17 = (longlong *)FUN_1434123a0(pbVar16,param_2);
      if (plVar17 == (longlong *)0x0) {
        local_228 = (longlong *)FUN_14341aa30(param_2,local_190,1);
        lVar19 = FUN_143412120(local_228,param_2);
        if ((lVar19 == 0) || (lVar19 + 0x20 == 0)) {
          FUN_143411150(pbVar16);
          *pbVar16 = 0;
        }
        else {
          in_stack_fffffffffffffd98 =
               (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
          FUN_143411540(local_220,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
          cVar6 = FUN_1434173e0(param_2,lVar19 + 0x20,&local_248,pbVar16);
          if (cVar6 == '\0') {
            FUN_143411150(pbVar16);
            *pbVar16 = 0;
          }
          piVar1 = (int *)(local_248 + 3);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
            FUN_14349d080(local_228,0);
            goto LAB_14340dc7e;
          }
        }
        FUN_14349d080(local_228,0);
      }
      else {
        if (((byte)(*local_220 - 3) < 2) &&
           (iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17), iVar27 == 7)) {
          FUN_143499df0(&local_238,plVar17 + -4);
          dVar30 = (double)FUN_143411a90(local_220,param_2);
          iVar27 = (int)dVar30;
          if (iVar27 < 0) {
            in_stack_fffffffffffffd98 =
                 (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
            FUN_143411540(local_220,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
            cVar6 = (**(code **)(*plVar17 + 0x58))(plVar17,param_2 + 0x1d,&local_248,pbVar16);
            if (cVar6 == '\0') {
              FUN_143411150(pbVar16);
              *pbVar16 = 0;
            }
            goto LAB_14340dc49;
          }
          if ((iVar27 < (int)plVar17[0xb]) &&
             (*(longlong *)(plVar17[10] + (longlong)iVar27 * 8) != 0)) {
            FUN_143411240();
          }
          else {
            FUN_143411150(pbVar16);
            *pbVar16 = 0;
          }
        }
        else {
          in_stack_fffffffffffffd98 =
               (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
          FUN_143411540(local_220,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
          if ((*pbVar16 < 0xc) && ((0x940U >> (*pbVar16 & 0x1f) & 1) != 0)) {
            uVar20 = FUN_143412120(pbVar16,param_2);
            FUN_143499df0(&local_238,uVar20);
          }
          FUN_143411150(pbVar16);
          *pbVar16 = 0;
          FUN_1434173e0(param_2,plVar17,&local_248,pbVar16);
LAB_14340dc49:
          piVar1 = (int *)(local_248 + 3);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
          FUN_1434a2b80();
        }
        local_238 = (longlong *)0x0;
      }
LAB_14340dc7e:
      FUN_14349eac0(param_2);
      if ((char)param_2[0x2b] != '\n') {
        FUN_14341b3a0(param_2,local_1e0,local_230);
        goto LAB_14340ca10;
      }
      goto switchD_14340ef31_caseD_82;
    case 'O':
      uVar20 = FUN_1434a5030(param_2,2);
      plVar17 = (longlong *)FUN_1434123a0(uVar20,param_2);
      if (plVar17 != (longlong *)0x0) {
        pcVar24 = (char *)FUN_1434a5010(param_2);
        if (((byte)(*pcVar24 - 3U) < 2) &&
           (iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17), iVar27 == 7)) {
          dVar30 = (double)FUN_143411a90(pcVar24,param_2);
          if (-1 < (int)dVar30) {
            FUN_14345e2f0(plVar17 + -4,(int)dVar30,param_2[1]);
            goto LAB_14340dda0;
          }
          FUN_143411540(pcVar24,&local_248,param_2,0xffffffff,
                        (ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
          in_stack_fffffffffffffd98 = (undefined ***)local_240;
          local_240[0] = '\0';
          FUN_143414a10(plVar17,param_2,&local_248,param_2[1],in_stack_fffffffffffffd98);
        }
        else {
          FUN_143411540(pcVar24,&local_248,param_2,0xffffffff,
                        (ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
          in_stack_fffffffffffffd98 = (undefined ***)local_240;
          local_240[0] = '\0';
          (**(code **)(*plVar17 + 0x18))
                    (plVar17,param_2,&local_248,param_2[1],in_stack_fffffffffffffd98);
        }
        piVar1 = (int *)(local_248 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
LAB_14340dda0:
      FUN_1434a2470(param_2 + 1);
      if ((char)param_2[0x2b] != '\n') {
        FUN_14341b3a0(param_2,local_1e0,local_230);
        in_stack_fffffffffffffd98 = param_5;
        local_1e4 = FUN_14341ad70(param_2,param_1,local_1e4,local_230,param_5,local_1d0,param_7);
      }
      goto switchD_14340ef31_caseD_82;
    case 'P':
      FUN_1434134a0(param_2[1],param_2,1);
      break;
    case 'Q':
      FUN_143413680(param_2[1],param_2,1);
      break;
    case 'R':
      uVar20 = FUN_1434a5030(param_2,2);
      local_228 = (longlong *)FUN_143411a90(uVar20,param_2);
      if (((ulonglong)local_228 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        local_218 = (undefined **)((ulonglong)local_218._4_4_ << 0x20);
      }
      else {
        local_218 = (undefined **)CONCAT44(local_218._4_4_,(int)(double)local_228);
      }
      local_190[0] = 0;
      in_stack_fffffffffffffd98 =
           (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
      local_168 = local_228;
      FUN_143411540(param_2[1],&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      uVar20 = FUN_1434a5010(param_2);
      Scaleform::GFx::AS2::ValueGuard::ValueGuard(&local_80,param_2,uVar20);
      if (((*(char *)param_2[1] == '\0') || (*(char *)param_2[1] == '\n')) ||
         (*(int *)(local_248 + 4) == 0)) {
        uVar20 = FUN_1434a5010(param_2);
        pbVar16 = (byte *)FUN_143410ec0(local_118,uVar20);
        local_220 = pbVar16;
        if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
          FUN_1434a2b80();
        }
        local_238 = (longlong *)0x0;
        local_f8[0] = 0;
        if (*pbVar16 == 6) {
          uVar20 = FUN_143412120(pbVar16,param_2);
          plVar14 = (longlong *)FUN_143499df0(&local_238,uVar20);
          if ((*plVar14 == 0) || (cVar6 = (**(code **)(local_238[4] + 0x78))(), cVar6 == '\0'))
          goto LAB_14340e7d0;
          FUN_14349d080(pbVar16,0);
          uVar20 = (**(code **)(local_238[4] + 0x70))(local_238 + 4,local_d0,param_2 + 0x1d);
          local_220 = (byte *)Scaleform::GFx::AS2::Value::Value(local_118,uVar20);
          FUN_14349ebc0(uVar20);
          FUN_143412aa0(local_f8,local_238);
          pbVar16 = local_220;
        }
        else {
LAB_14340e7d0:
          in_stack_fffffffffffffd98 = (undefined ***)0x0;
          FUN_1434175f0(param_2,*(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 800,
                        local_f8,local_1d0,0,0,0);
        }
        if ((*pbVar16 == 8) || (*pbVar16 == 0xb)) {
          local_228 = (longlong *)Scaleform::GFx::AS2::Value::ToFunction(pbVar16,local_d0,param_2);
          if (*local_228 != 0) {
            in_stack_fffffffffffffd98 =
                 (undefined ***)
                 CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),(int)local_218);
            puVar15 = (undefined8 *)
                      FUN_143496870(&local_158,local_190,local_f8,param_2,in_stack_fffffffffffffd98,
                                    (int)param_2[6] * 0x20 +
                                    (int)(param_2[1] - param_2[2] >> 5) + -0x23);
            (**(code **)(*(longlong *)*local_228 + 0x50))
                      ((longlong *)*local_228,puVar15,local_228[1],0);
            (**(code **)*puVar15)(puVar15,0);
            pbVar16 = local_220;
          }
          FUN_14349ebc0(local_228);
        }
        else if ((local_1a6 & 1) != 0) {
          FUN_143416f20(local_1c8,
                        "CallMethod \"as a function\" - pushed object is not a function object");
        }
        FUN_14349d080(local_f8,0);
        FUN_14349d080(pbVar16,0);
        if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
          FUN_1434a2b80();
        }
        local_238 = (longlong *)0x0;
      }
      else {
        uVar20 = FUN_1434a5010(param_2);
        cVar6 = FUN_1434a1320(uVar20);
        if (cVar6 == '\0') {
          uVar20 = FUN_1434a5010(param_2);
          plVar14 = (longlong *)FUN_1434123a0(uVar20,param_2);
          plVar17 = plVar14;
          if (plVar14 == (longlong *)0x0) goto LAB_14340e230;
          local_118[0] = 0;
          cVar6 = (**(code **)(*plVar14 + 0x78))(plVar14);
          if (cVar6 != '\0') {
            plVar2 = plVar14 + -4;
            if (plVar2 != (longlong *)0x0) {
              *(uint *)(plVar14 + -1) = (int)plVar14[-1] + 1U & 0x8fffffff;
            }
            uVar20 = FUN_1434145b0(plVar14[9] + 0x20,param_2 + 0x1d,&local_248);
            FUN_143499df0(&local_238,uVar20);
            if (local_238 == (longlong *)0x0) {
              plVar17 = (longlong *)0x0;
            }
            else {
              Scaleform::GFx::AS2::SuperObject::SetAltProto(plVar2);
              if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
                *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
                FUN_1434a2b80();
              }
              local_238 = (longlong *)0x0;
            }
            if ((*(uint *)(plVar14 + -1) & 0x3ffffff) != 0) {
              *(uint *)(plVar14 + -1) = *(uint *)(plVar14 + -1) - 1;
              FUN_1434a2b80(plVar2);
            }
          }
          if (plVar17 != (longlong *)0x0) {
            cVar6 = FUN_1434173e0(param_2,plVar17,&local_248,local_118);
            if (cVar6 != '\0') {
              if ((local_118[0] != 8) && (local_118[0] != 0xb)) {
                if ((local_1a6 & 1) == 0) goto LAB_14340e220;
                iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17);
                if (3 < iVar27 - 2U) {
                  pcVar24 = "CallMethod - \'%s\' is not a method";
                  goto LAB_14340e20f;
                }
                uVar20 = *local_248;
                lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                lVar19 = *(longlong *)(lVar18 + 0x70);
                if (lVar19 == 0) {
                  lVar19 = FUN_14336c170(lVar18);
                }
                FUN_143416f20(local_1c8,"CallMethod - \'%s.%s\' is not a method",
                              **(undefined8 **)(lVar19 + 0x18),uVar20);
                FUN_14349d080(local_118,0);
                goto LAB_14340e902;
              }
              pbVar16 = (byte *)Scaleform::GFx::AS2::Value::ToFunction(local_118,local_d0,param_2);
              if (*(longlong *)pbVar16 != 0) {
                local_150 = local_190;
                local_140 = 0;
                local_158 = &PTR_FUN_145b0ab98;
                local_138 = 0;
                local_120 = (int)local_218;
                local_130 = 0;
                local_11c = (int)param_2[6] * 0x20 + (int)(param_2[1] - param_2[2] >> 5) + -0x23;
                local_148 = plVar17;
                local_128 = param_2;
                (**(code **)(**(longlong **)pbVar16 + 0x50))
                          (*(longlong **)pbVar16,&local_158,*(longlong *)(pbVar16 + 8),*local_248);
                (*(code *)*local_158)(&local_158,0);
                FUN_14349ebc0(pbVar16);
                FUN_14349d080(local_118,0);
                goto LAB_14340e902;
              }
              if ((local_1a6 & 1) != 0) {
                iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17);
                if (iVar27 - 2U < 4) {
                  local_228 = (longlong *)*local_248;
                  lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                  lVar19 = *(longlong *)(lVar18 + 0x70);
                  if (lVar19 == 0) {
                    lVar19 = FUN_14336c170(lVar18);
                  }
                  FUN_143416f20(local_1c8,"Invoked method (%s.%s) is null",
                                **(undefined8 **)(lVar19 + 0x18),local_228);
                  FUN_14349ebc0(pbVar16);
                  FUN_14349d080(local_118,0);
                  goto LAB_14340e902;
                }
                pcVar24 = "Invoked method (%s) is null";
LAB_14340e17d:
                FUN_143416f20(local_1c8,pcVar24,*local_248);
              }
LAB_14340e18e:
              FUN_14349ebc0(pbVar16);
              FUN_14349d080(local_118,0);
              goto LAB_14340e902;
            }
            if ((local_1a6 & 1) == 0) goto LAB_14340e220;
            iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17);
            if (iVar27 - 2U < 4) {
              uVar20 = *local_248;
              lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
              lVar19 = *(longlong *)(lVar18 + 0x70);
              if (lVar19 == 0) {
                lVar19 = FUN_14336c170(lVar18);
              }
              FUN_143416f20(local_1c8,"CallMethod - can\'t find method %s.%s",
                            **(undefined8 **)(lVar19 + 0x18),uVar20);
              FUN_14349d080(local_118,0);
              goto LAB_14340e902;
            }
            pcVar24 = "CallMethod - can\'t find method %s";
LAB_14340e20f:
            FUN_143416f20(local_1c8,pcVar24,*local_248);
          }
LAB_14340e220:
          FUN_14349d080(local_118,0);
        }
        else {
LAB_14340e230:
          uVar20 = FUN_1434a5010(param_2);
          cVar6 = FUN_1434a1320(uVar20);
          if (cVar6 == '\0') {
            pbVar16 = (byte *)FUN_14341aa30(param_2,local_118,1);
            local_220 = pbVar16;
            if (*pbVar16 == 6) {
              lVar19 = FUN_143412120(pbVar16,param_2);
              if (lVar19 == 0) {
                plVar17 = (longlong *)0x0;
              }
              else {
                plVar17 = (longlong *)(lVar19 + 0x20);
              }
              local_f8[0] = 0;
              cVar6 = FUN_1434173e0(param_2,plVar17,&local_248,local_f8);
              if (cVar6 == '\0') {
                if ((plVar17 == (longlong *)0x0) ||
                   (iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17), 3 < iVar27 - 2U)) {
                  pcVar24 = "CallMethod - can\'t find method %s";
LAB_14340e68e:
                  FUN_143416f20(local_1c8,pcVar24,*local_248);
                }
                else {
                  uVar20 = *local_248;
                  lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                  lVar19 = *(longlong *)(lVar18 + 0x70);
                  if (lVar19 == 0) {
                    lVar19 = FUN_14336c170(lVar18);
                  }
                  FUN_143416f20(local_1c8,"CallMethod - can\'t find method %s.%s",
                                **(undefined8 **)(lVar19 + 0x18),uVar20);
                }
              }
              else if (local_f8[0] == 8) {
                plVar14 = (longlong *)
                          Scaleform::GFx::AS2::Value::ToFunction(local_f8,local_d0,param_2);
                if (*plVar14 == 0) {
                  if ((local_1a6 & 1) != 0) {
                    if ((plVar17 != (longlong *)0x0) &&
                       (iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17), iVar27 - 2U < 4)) {
                      local_228 = (longlong *)*local_248;
                      lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                      lVar19 = *(longlong *)(lVar18 + 0x70);
                      if (lVar19 == 0) {
                        lVar19 = FUN_14336c170(lVar18);
                      }
                      FUN_143416f20(local_1c8,"Error: Invoked method (%s.%s) is not a function\n",
                                    **(undefined8 **)(lVar19 + 0x18),local_228);
                      FUN_14349ebc0(plVar14);
                      goto LAB_14340e69f;
                    }
                    FUN_143416f20(local_1c8,"Error: Invoked method (%s) is not a function\n",
                                  *local_248);
                  }
                  FUN_14349ebc0(plVar14);
                }
                else {
                  local_150 = local_190;
                  local_140 = 0;
                  local_158 = &PTR_FUN_145b0ab98;
                  local_138 = 0;
                  local_120 = (int)local_218;
                  local_130 = 0;
                  local_11c = (int)param_2[6] * 0x20 + (int)(param_2[1] - param_2[2] >> 5) + -0x23;
                  local_148 = plVar17;
                  local_128 = param_2;
                  (**(code **)(*(longlong *)*plVar14 + 0x50))
                            ((longlong *)*plVar14,&local_158,plVar14[1],*local_248);
                  (*(code *)*local_158)(&local_158,0);
                  FUN_14349ebc0(plVar14);
                }
              }
              else if ((local_1a6 & 1) != 0) {
                if ((plVar17 == (longlong *)0x0) ||
                   (iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17), 3 < iVar27 - 2U)) {
                  pcVar24 = "CallMethod - \'%s\' is not a method";
                  goto LAB_14340e68e;
                }
                uVar20 = *local_248;
                lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                lVar19 = *(longlong *)(lVar18 + 0x70);
                if (lVar19 == 0) {
                  lVar19 = FUN_14336c170(lVar18);
                }
                FUN_143416f20(local_1c8,"CallMethod - \'%s.%s\' is not a method",
                              **(undefined8 **)(lVar19 + 0x18),uVar20);
              }
LAB_14340e69f:
              FUN_14349d080(local_f8,0);
              plVar17 = (longlong *)0x0;
              FUN_14349d080(local_220,0);
            }
            else {
              if ((local_1a6 & 1) != 0) {
                FUN_143416f20(local_1c8,"CallMethod - \'%s\' on invalid object",*local_248);
              }
              FUN_14349d080(pbVar16,0);
            }
          }
          else {
            local_228 = (longlong *)FUN_1434a5010();
            lVar19 = FUN_143412120(local_228,param_2);
            if (lVar19 == 0) {
              plVar17 = (longlong *)0x0;
            }
            else {
              plVar17 = (longlong *)(lVar19 + 0x20);
              if (plVar17 != (longlong *)0x0) {
                local_118[0] = 0;
                cVar6 = FUN_1434173e0(param_2,plVar17,&local_248,local_118);
                if (cVar6 != '\0') {
                  pbVar16 = (byte *)Scaleform::GFx::AS2::Value::ToFunction
                                              (local_118,local_d0,param_2);
                  local_220 = pbVar16;
                  if (*(longlong *)pbVar16 == 0) {
                    if ((local_1a6 & 1) != 0) {
                      iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17);
                      if (3 < iVar27 - 2U) {
                        pcVar24 = "Invoked method (%s) is not a function";
                        goto LAB_14340e17d;
                      }
                      local_228 = (longlong *)*local_248;
                      lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                      lVar19 = *(longlong *)(lVar18 + 0x70);
                      if (lVar19 == 0) {
                        lVar19 = FUN_14336c170(lVar18);
                      }
                      FUN_143416f20(local_1c8,"Invoked method (%s.%s) is not a function",
                                    **(undefined8 **)(lVar19 + 0x18),local_228);
                    }
                  }
                  else {
                    in_stack_fffffffffffffd98 =
                         (undefined ***)
                         CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),(int)local_218
                                 );
                    puVar15 = (undefined8 *)
                              FUN_143496870(&local_158,local_190,local_228,param_2,
                                            in_stack_fffffffffffffd98,
                                            (int)param_2[6] * 0x20 +
                                            (int)(param_2[1] - param_2[2] >> 5) + -0x23);
                    (**(code **)(**(longlong **)local_220 + 0x50))
                              (*(longlong **)local_220,puVar15,*(longlong *)(local_220 + 8),
                               *local_248);
                    (**(code **)*puVar15)(puVar15,0);
                    pbVar16 = local_220;
                  }
                  goto LAB_14340e18e;
                }
                if ((local_1a6 & 1) == 0) goto LAB_14340e220;
                iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17);
                if (3 < iVar27 - 2U) {
                  pcVar24 = "Static method \'%s\' is not found.";
                  goto LAB_14340e20f;
                }
                uVar20 = *local_248;
                lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
                lVar19 = *(longlong *)(lVar18 + 0x70);
                if (lVar19 == 0) {
                  lVar19 = FUN_14336c170(lVar18);
                }
                FUN_143416f20(local_1c8,"Static method \'%s.%s\' is not found.",
                              **(undefined8 **)(lVar19 + 0x18),uVar20);
                FUN_14349d080(local_118,0);
                goto LAB_14340e902;
              }
            }
            if ((local_1a6 & 1) != 0) {
              FUN_143416f20(local_1c8,"Function is not an object for static method \'%s\'.",
                            *local_248);
            }
          }
        }
      }
LAB_14340e902:
      FUN_14349eb00(param_2,(int)local_218 + 2);
      FUN_143411240(param_2[1],local_190);
      if ((char)param_2[0x2b] != '\n') {
        FUN_14341b3a0(param_2,local_1e0,local_230);
        in_stack_fffffffffffffd98 = param_5;
        local_1e4 = FUN_14341ad70(param_2,param_1,local_1e4,local_230,param_5,local_1d0,param_7);
      }
      if ((plVar17 != (longlong *)0x0) &&
         (((lVar19 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17), lVar19 == 0 ||
           ((*(byte *)(lVar19 + 0x6a) >> 4 & 1) == 0)) &&
          (cVar6 = FUN_143417100(param_2,param_7), cVar6 != '\0')))) {
        local_1e4 = local_1e8;
      }
      FUN_14349d080(local_190,0);
      FUN_14349b350(&local_248,0);
      if ((RefCountNTSImpl *)CONCAT44(uStack_54,local_58) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)CONCAT44(uStack_54,local_58));
      }
      if (4 < (byte)local_78) {
        FUN_143411150(&local_78);
      }
      goto switchD_14340ef31_caseD_82;
    case 'S':
      local_228 = (longlong *)FUN_143410ec0(local_190,param_2[1]);
      uVar20 = FUN_1434a5010(param_2);
      pbVar16 = (byte *)FUN_143410ec0(local_118,uVar20);
      local_220 = pbVar16;
      uVar20 = FUN_1434a5030(param_2,2);
      local_168 = (longlong *)FUN_143411a90(uVar20,param_2);
      local_218._4_4_ = (uint)((ulonglong)local_168 >> 0x20);
      if (((ulonglong)local_168 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        local_218 = (undefined **)((ulonglong)local_218._4_4_ << 0x20);
      }
      else {
        local_218 = (undefined **)CONCAT44(local_218._4_4_,(int)(double)local_168);
        pbVar16 = local_220;
      }
      FUN_1434a2470(param_2 + 1);
      plVar17 = local_228;
      in_stack_fffffffffffffd98 =
           (undefined ***)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
      FUN_143411540(local_228,&local_248,param_2,0xffffffff,in_stack_fffffffffffffd98);
      cVar6 = (char)*plVar17;
      if (((cVar6 == '\0') || (cVar6 == '\n')) ||
         ((cVar6 == '\x05' && (*(int *)(local_248 + 4) == 0)))) {
        uVar20 = Scaleform::GFx::AS2::Value::ToFunction(pbVar16,local_d0,param_2);
        pbVar16 = (byte *)Scaleform::GFx::AS2::Value::Value(local_f8,uVar20);
        FUN_14349ebc0(uVar20);
      }
      else {
        local_f8[0] = 0;
        plVar17 = (longlong *)FUN_1434123a0(pbVar16,param_2);
        if (plVar17 != (longlong *)0x0) {
          pbVar16 = local_f8;
          cVar6 = FUN_1434173e0(param_2,plVar17,&local_248,local_f8);
          if (cVar6 != '\0') goto LAB_14340ebb9;
        }
        pbVar16 = local_f8;
        if ((local_1a6 & 1) != 0) {
          if ((plVar17 == (longlong *)0x0) ||
             (iVar27 = (**(code **)(*plVar17 + 0x10))(plVar17), 3 < iVar27 - 2U)) {
            FUN_143416f20(local_1c8,"Method \'%s\' is not found.",*local_248);
            pbVar16 = local_f8;
          }
          else {
            uVar20 = *local_248;
            lVar18 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(plVar17);
            lVar19 = *(longlong *)(lVar18 + 0x70);
            if (lVar19 == 0) {
              lVar19 = FUN_14336c170(lVar18);
            }
            FUN_143416f20(local_1c8,"Method \'%s.%s\' is not found.",
                          **(undefined8 **)(lVar19 + 0x18),uVar20);
            pbVar16 = local_f8;
          }
        }
      }
LAB_14340ebb9:
      if ((*pbVar16 == 8) || (*pbVar16 == 0xb)) {
        uVar20 = Scaleform::GFx::AS2::Value::ToFunction(pbVar16,local_d0,param_2);
        local_d8 = (longlong *)
                   FUN_143419ed0(param_2,uVar20,(ulonglong)local_218 & 0xffffffff,0xffffffff);
        if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
          FUN_1434a2b80();
        }
        local_238 = local_d8;
        FUN_14349ebc0(uVar20);
      }
      else {
        if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
          FUN_1434a2b80();
        }
        local_238 = (longlong *)0x0;
        if ((local_1a6 & 1) != 0) {
          FUN_143416f20(local_1c8,"Can\'t create object with unknown ctor");
        }
      }
      FUN_14349eb00(param_2,(ulonglong)local_218 & 0xffffffff);
      FUN_14348ff80(param_2,&local_238);
      if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
        FUN_1434a2b80();
      }
      local_238 = (longlong *)0x0;
      FUN_14349d080(local_228,0);
      FUN_14349d080(local_220,0);
      FUN_14349d080(pbVar16,0);
      FUN_14349b350(&local_248,0);
LAB_14340d2a5:
      if ((char)param_2[0x2b] != '\n') {
        FUN_14341b3a0(param_2,local_1e0,local_230);
        in_stack_fffffffffffffd98 = param_5;
        local_1e4 = FUN_14341ad70(param_2,param_1,local_1e4,local_230,param_5,local_1d0,param_7);
      }
LAB_14340ef7d:
      cVar6 = FUN_143417100(param_2,param_7);
LAB_14340ef87:
      if (cVar6 != '\0') {
        local_1e4 = local_1e8;
      }
      break;
    case 'T':
      FUN_143481dd0(&local_208);
      break;
    case '`':
      uVar20 = FUN_1434a5010(param_2);
      FUN_14349d400(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case 'a':
      uVar20 = FUN_1434a5010(param_2);
      FUN_1434a23a0(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case 'b':
      uVar20 = FUN_1434a5010(param_2);
      FUN_1434a61c0(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case 'c':
      uVar20 = FUN_1434a5010(param_2);
      FUN_1434a4e50(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case 'd':
      uVar20 = FUN_1434a5010(param_2);
      FUN_14349d570(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case 'e':
      uVar20 = FUN_1434a5010(param_2);
      FUN_1434a16b0(uVar20,param_2,param_2[1]);
      FUN_14349eac0(param_2);
      break;
    case 'f':
      lVar19 = param_2[1];
      uVar20 = FUN_1434a5010(param_2);
      cVar6 = FUN_1434a5140(uVar20,lVar19);
      if (cVar6 != '\0') {
        uVar20 = FUN_1434a5010(param_2);
        goto LAB_14340d9a6;
      }
      uVar20 = FUN_1434a5010(param_2);
      uVar8 = 0;
LAB_14340d9bf:
      Scaleform::GFx::AS2::Value::SetBool(uVar20,uVar8);
      FUN_14349eac0(param_2);
      break;
    case 'g':
      uVar20 = FUN_1434a5010(param_2);
      in_stack_fffffffffffffd98 =
           (undefined ***)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),1);
      uVar20 = FUN_143413170(uVar20,local_190,param_2,param_2[1],in_stack_fffffffffffffd98);
      uVar21 = FUN_1434a5010(param_2);
      FUN_143411240(uVar21,uVar20);
      FUN_14349eac0(param_2);
      FUN_14349d080(uVar20,0);
      break;
    case 'h':
      uVar20 = FUN_1434a5010(param_2);
      uVar20 = Scaleform::GFx::AS2::Value::ToStringVersioned(uVar20,&local_248,param_2,bVar5);
      uVar21 = Scaleform::GFx::AS2::Value::ToStringVersioned
                         (param_2[1],&local_160,param_2,local_1a8);
      uVar8 = Scaleform::GFx::ASString::operator>(uVar20,uVar21);
      uVar22 = FUN_1434a5010(param_2);
      Scaleform::GFx::AS2::Value::SetBool(uVar22,uVar8);
      FUN_14349eac0(param_2);
      FUN_14349b350(uVar20,0);
      FUN_14349b350(uVar21,0);
      goto switchD_14340ef31_caseD_82;
    case 'i':
      FUN_1434819c0(&local_208);
    }
  }
switchD_14340c090_caseD_1:
  local_1e0 = local_1e4;
  iVar27 = local_230[0];
  if ((int)local_1e8 <= (int)local_1e4) goto joined_r0x00014340fb5c;
  goto LAB_14340bfb1;
joined_r0x00014340fb5c:
  while (local_170[0] = iVar27, 0 < local_170[0]) {
    puVar15 = (undefined8 *)(param_2[0x28] + -0x10 + param_2[0x29] * 0x10);
    local_b0 = (RefCountNTSImpl *)*puVar15;
    uStack_a8 = *(uint *)(puVar15 + 1);
    uVar10 = *(uint *)((longlong)puVar15 + 0xc);
    uStack_a4 = uVar10;
    FUN_1434a3690(param_2 + 0x28,param_2[0x29] + -1);
    uVar26 = (int)param_2[6] * 0x20 + -0x20 + (int)(param_2[1] - param_2[2] >> 5);
    if (uVar10 < uVar26) {
      for (iVar27 = uVar26 - uVar10; iVar27 != 0; iVar27 = iVar27 + -1) {
        if (4 < *(byte *)param_2[1]) {
          FUN_143411150();
        }
        param_2[1] = param_2[1] + -0x20;
        if ((ulonglong)param_2[1] < (ulonglong)param_2[2]) {
          FUN_1434a25c0(param_2 + 1);
        }
      }
    }
    if (((byte)*local_b0 & 2) != 0) {
      uVar9 = *(ushort *)(local_b0 + 3);
      uVar4 = *(ushort *)(local_b0 + 1);
      *(byte *)((longlong)param_2 + 0x17e) = *(byte *)((longlong)param_2 + 0x17e) | 1;
      local_1e0 = (uint)uVar4 + uVar9 + uStack_a8;
      FUN_14340be30(param_1,param_2,local_1e0,*(undefined2 *)(local_b0 + 5),param_5,local_1d0,
                    param_7);
      *(byte *)((longlong)param_2 + 0x17e) = *(byte *)((longlong)param_2 + 0x17e) & 0xfe;
    }
    iVar27 = local_170[0] + -1;
  }
LAB_14340fc84:
  plVar17 = param_2 + 0x2f;
  *(int *)plVar17 = (int)*plVar17 + -1;
  if (((int)*plVar17 == 0) && ((char)param_2[0x2b] != '\n')) {
    FUN_143411150(param_2 + 0x2b);
    *(undefined1 *)(param_2 + 0x2b) = 10;
    *(byte *)((longlong)param_2 + 0x17e) = *(byte *)((longlong)param_2 + 0x17e) & 0xfe;
  }
  param_2[0x1c] = local_200;
  if (local_198 == 0) {
    *(byte *)((longlong)param_2 + 0x17e) = *(byte *)((longlong)param_2 + 0x17e) | 2;
  }
  else {
    *(byte *)((longlong)param_2 + 0x17e) = *(byte *)((longlong)param_2 + 0x17e) & 0xfd;
  }
  uVar8 = FUN_14336b320();
  *(undefined1 *)(param_2 + 0x1e) = uVar8;
LAB_14340fcdc:
  if ((local_238 != (longlong *)0x0) && ((*(uint *)(local_238 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_238 + 3) = *(uint *)(local_238 + 3) - 1;
    FUN_1434a2b80();
  }
  plVar17 = local_1d0;
  local_208[0x27] = local_1f0;
  local_1c8[0] = &PTR_FUN_145af8cf0;
  if (local_1d0 != (longlong *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*local_1d0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar17);
  }
  return;
}



// FUNCTION 14340ffc0 FUN_14340ffc0 body=575 status=ok
// SIG undefined FUN_14340ffc0(void)

void FUN_14340ffc0(longlong param_1,longlong *param_2,int param_3,uint param_4,longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  
  pcVar12 = (char *)0x0;
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x18) == 0) ||
     (pcVar9 = *(char **)(*(longlong *)(param_1 + 0x10) + 0x10), *pcVar9 == '\0')) {
    pcVar9 = pcVar12;
  }
  if (*(int *)(param_1 + 0x38) != param_3) {
    if (*(int *)(param_1 + 0x38) == -1) {
      *(int *)(param_1 + 0x38) = param_3;
      uVar11 = param_3 + 2;
      plVar1 = (longlong *)(param_1 + 0x18);
      cVar6 = pcVar9[param_3 + 4];
      cVar4 = pcVar9[param_3 + 3];
      uVar15 = (uint)CONCAT11(cVar6,cVar4);
      FUN_1434a35b0(plVar1,uVar15);
      pcVar14 = pcVar12;
      if (CONCAT11(cVar6,cVar4) != 0) {
        do {
          lVar7 = FUN_143360a60(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                pcVar9 + (uVar11 + 3));
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
          plVar3 = (longlong *)(*plVar1 + (longlong)pcVar12 * 8);
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
          piVar2 = (int *)(*plVar3 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
          *plVar3 = lVar7;
          piVar2 = (int *)(lVar7 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920(lVar7);
          }
          uVar13 = (uint)pcVar14;
          cVar6 = pcVar9[uVar11 + 3];
          while (cVar6 != '\0') {
            if (param_4 <= uVar11) {
              cVar6 = (**(code **)(*param_5 + 8))(param_5);
              if (cVar6 != '\0') {
                FUN_143416f20(param_5,"Action buffer dict length exceeded");
              }
              if (uVar15 <= uVar13) {
                return;
              }
              lVar7 = (longlong)pcVar12 * 8;
              uVar10 = (ulonglong)(uVar15 - uVar13);
              do {
                lVar8 = FUN_143360a60(*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618
                                       ),"<invalid>");
                *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
                lVar5 = *plVar1;
                *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
                piVar2 = (int *)(*(longlong *)(lVar5 + lVar7) + 0x18);
                *piVar2 = *piVar2 + -1;
                if (*piVar2 == 0) {
                  FUN_14335f920();
                }
                *(longlong *)(lVar5 + lVar7) = lVar8;
                piVar2 = (int *)(lVar8 + 0x18);
                *piVar2 = *piVar2 + -1;
                if (*piVar2 == 0) {
                  FUN_14335f920(lVar8);
                }
                lVar7 = lVar7 + 8;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
              return;
            }
            cVar6 = pcVar9[uVar11 + 4];
            uVar11 = uVar11 + 1;
          }
          uVar11 = uVar11 + 1;
          pcVar14 = (char *)(ulonglong)(uVar13 + 1);
          pcVar12 = pcVar12 + 1;
        } while (uVar13 + 1 < uVar15);
      }
    }
    else {
      cVar6 = (**(code **)(*param_5 + 8))(param_5);
      if (cVar6 != '\0') {
        FUN_143416f20(param_5,"ProcessDeclDict(%d, %d) - DeclDict was already processed at %d",
                      param_3,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143410210 FUN_143410210 body=447 status=ok
// SIG undefined FUN_143410210(void)

char FUN_143410210(undefined8 param_1,longlong param_2,char *param_3,undefined8 *param_4,
                  int *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  double dVar10;
  undefined8 *local_res10;
  longlong local_res18;
  
  plVar6 = *(longlong **)(param_2 + 0xe0);
  if (*param_3 == '\x05') {
    FUN_143411540(param_3,&local_res10,param_2,0xffffffff,0);
    iVar3 = FUN_14335fa60(&local_res10);
    iVar9 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = FUN_14335fad0(&local_res10,iVar9);
        if (iVar4 == 0x3a) {
          lVar5 = FUN_14335fd10(&local_res10,0,iVar9);
          *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
          local_res18 = lVar5;
          plVar6 = (longlong *)FUN_143419c20(param_2,&local_res18,0);
          if (plVar6 != (longlong *)0x0) {
            if (iVar9 < iVar3) {
              puVar7 = (undefined8 *)FUN_14335fd10(&local_res10,iVar9 + 1,iVar3 + 1);
              *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 2;
              piVar1 = (int *)(local_res10 + 3);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
              piVar1 = (int *)(puVar7 + 3);
              *piVar1 = *piVar1 + -1;
              local_res10 = puVar7;
              if (*piVar1 == 0) {
                FUN_14335f920(puVar7);
              }
              piVar1 = (int *)(lVar5 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(lVar5);
              }
              break;
            }
            plVar6 = (longlong *)0x0;
          }
          piVar1 = (int *)(lVar5 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar5);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar3);
    }
    cVar8 = '\0';
    if ((plVar6 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar6 + 0x368))(plVar6,*local_res10,param_5,1), cVar8 = '\0',
       cVar2 != '\0')) {
      cVar8 = '\x01';
    }
    piVar1 = (int *)(local_res10 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (cVar8 == '\0') {
      return '\0';
    }
  }
  else {
    if (1 < (byte)(*param_3 - 3U)) {
      return '\0';
    }
    dVar10 = (double)FUN_143411a90(param_3);
    cVar8 = '\x01';
    *param_5 = (int)(dVar10 - 1.0);
  }
  if (param_4 == (undefined8 *)0x0) {
    return cVar8;
  }
  *param_4 = plVar6;
  return cVar8;
}



// FUNCTION 1434103e0 FUN_1434103e0 body=366 status=ok
// SIG undefined FUN_1434103e0(void)

void FUN_1434103e0(uint *param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  puVar8 = (undefined8 *)0x0;
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0xff00;
  if ((int)param_2[3] != 0) {
    param_2[2] = param_2[2] + 1;
  }
  lVar5 = param_2[2];
  *(undefined4 *)(param_2 + 3) = 0;
  lVar3 = *param_2;
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 3 + lVar5),
                                     *(undefined1 *)(lVar3 + 2 + lVar5)),
                            *(undefined1 *)(lVar3 + 1 + lVar5)),*(undefined1 *)(lVar3 + lVar5));
  param_2[2] = lVar5 + 4;
  if ((*param_1 & 0x20000) != 0) {
    *(undefined4 *)(param_2 + 3) = 0;
    bVar1 = *(byte *)(lVar5 + 4 + lVar3);
    param_2[2] = lVar5 + 5;
    uVar9 = uVar9 - 1;
    param_1[2] = (uint)bVar1;
  }
  puVar4 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28,0,param_4,param_3);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_144f70a50;
    *puVar4 = &PTR_FUN_145b0ab70;
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar8 = puVar4;
  }
  if (*(RefCountImpl **)(param_1 + 6) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 6));
  }
  *(undefined8 **)(param_1 + 6) = puVar8;
  FUN_14340bca0(puVar8,param_2,uVar9);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 6) + 0x18);
  if (uVar2 != uVar9) {
    if (uVar2 < uVar9) {
      if (uVar9 - uVar2 != 0) {
        lVar5 = param_2[2];
        uVar7 = (ulonglong)(uVar9 - uVar2);
        iVar6 = (int)param_2[3];
        do {
          if (iVar6 != 0) {
            lVar5 = lVar5 + 1;
          }
          lVar5 = lVar5 + 1;
          uVar7 = uVar7 - 1;
          iVar6 = 0;
        } while (uVar7 != 0);
        *(undefined4 *)(param_2 + 3) = 0;
        param_2[2] = lVar5;
      }
    }
    else {
      param_2[2] = param_2[2] - (ulonglong)(uVar2 - uVar9);
    }
  }
  return;
}



// FUNCTION 143410560 FUN_143410560 body=433 status=ok
// SIG undefined FUN_143410560(void)

void FUN_143410560(int *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  RefCountNTSImpl *this;
  undefined4 uVar6;
  byte local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  lVar4 = *(longlong *)(param_1 + 6);
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) && (**(char **)(lVar4 + 0x10) != '\0')) {
    if (param_2 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                         (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
    }
    lVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3);
    plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0xe8) + 0x30);
    lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,0x40);
    if (lVar5 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_14340bd30(lVar5,lVar4 + 0xe8,*(undefined8 *)(param_1 + 6));
    }
    iVar1 = *param_1;
    if (((iVar1 == 1) || (iVar1 == 4)) || ((iVar1 == 0x200 || (uVar6 = 3, iVar1 == 0x40000)))) {
      uVar6 = 4;
    }
    lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,0xd0,0);
    if (lVar5 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143441430(lVar5,lVar4,this,0,*(undefined4 *)(*(longlong *)(param_1 + 6) + 0x18)
                               ,0,uVar6);
    }
    local_38[0] = 8;
    local_20 = 0;
    if (local_30 != 0) {
      *(uint *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1U & 0x8fffffff;
    }
    local_28 = 0;
    if ((local_30 != 0) && ((*(uint *)(local_30 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_30 + 0x18) = *(uint *)(local_30 + 0x18) - 1;
      FUN_1434a2b80();
    }
    FUN_14341f6d0(plVar3,param_1,local_38);
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 143410760 FUN_143410760 body=212 status=ok
// SIG undefined FUN_143410760(void)

void FUN_143410760(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  RefCountImpl *local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (lVar2 != 0) {
    FUN_1433dfc00(lVar2,1);
    FUN_1433dfce0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),1);
  }
  local_18 = (RefCountImpl *)0x0;
  local_10 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  uVar1 = *(uint *)(lVar2 + 0x18);
  FUN_14349e200(lVar2,&local_18);
  *(undefined4 *)(lVar2 + 0x70) = 0;
  uVar4 = uVar1;
  if (uVar1 < *(uint *)(lVar2 + 0x78)) {
    uVar4 = *(uint *)(lVar2 + 0x78);
  }
  *(uint *)(lVar2 + 0x78) = uVar4;
  *(uint *)(lVar2 + 0x7c) = uVar1;
  if (local_18 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_18);
  }
  if (((*(byte *)(lVar2 + 0x68) & 1) == 0) && (*(longlong *)(lVar2 + 0x18) == 0)) {
    Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
    ClearAndRelease(lVar2 + 0x10);
  }
  *(undefined4 *)(lVar2 + 0x74) = *(undefined4 *)(lVar2 + 0x90);
  *(undefined4 *)(lVar2 + 0x78) = 0;
  uVar3 = (**(code **)(*param_2 + 0xa0))(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}



// FUNCTION 143410840 FUN_143410840 body=54 status=ok
// SIG undefined FUN_143410840(void)

void FUN_143410840(longlong param_1,longlong *param_2)

{
  FUN_143410760();
  (**(code **)(*param_2 + 0x30))(param_2,0x20000);
  *(longlong *)(param_1 + 0x28) = param_2[0xc];
  return;
}



// FUNCTION 143410880 FUN_143410880 body=278 status=ok
// SIG undefined FUN_143410880(void)

undefined8 FUN_143410880(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  lVar1 = param_2[0xc];
  fVar6 = (float)lVar2;
  if (lVar2 < 0) {
    fVar6 = fVar6 + 1.8446744e+19;
  }
  fVar6 = fVar6 * *(float *)(param_1 + 0x30);
  lVar3 = 0;
  fVar7 = fVar6;
  if ((9.223372e+18 <= fVar6) && (fVar7 = fVar6 - 9.223372e+18, fVar7 < 9.223372e+18)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = (ulonglong)fVar6;
  uVar5 = (longlong)fVar7 + lVar3 + lVar1 + param_3;
  if (((longlong)uVar4 <= lVar2 - *(longlong *)(param_1 + 0x20)) ||
     ((uVar4 = *(ulonglong *)(param_1 + 0x18), uVar4 != 0 && (uVar4 < uVar5)))) {
    if (*(int *)(param_1 + 8) != 0) goto LAB_14341097b;
    FUN_143410760(param_1,param_2);
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar4 == 0) || (uVar5 <= uVar4)) goto LAB_14341097b;
    if ((ulonglong)(lVar2 - *(longlong *)(param_1 + 0x20)) < param_3) {
      uVar5 = lVar1 + (*(longlong *)(param_1 + 0x20) - lVar2) + param_3;
      *(ulonglong *)(param_1 + 0x28) = uVar5;
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x28);
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,uVar5);
  uVar4 = param_2[0xc];
  *(ulonglong *)(param_1 + 0x28) = uVar4;
LAB_14341097b:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 1434109d0 FUN_1434109d0 body=119 status=ok
// SIG undefined FUN_1434109d0(void)

void FUN_1434109d0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) &&
     ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *(longlong *)(param_1 + 8) = param_2;
  if (param_3 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  }
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  }
  return;
}



// FUNCTION 143410a60 FUN_143410a60 body=209 status=ok
// SIG undefined FUN_143410a60(void)

void FUN_143410a60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (((((*(byte *)(param_1 + 2) & 2) == 0) && (lVar1 != 0)) && (lVar1 != *param_2)) &&
       ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80(lVar1);
    }
    *param_1 = *param_2;
    if ((((*(byte *)(param_1 + 2) & 2) == 0) && (lVar2 = *param_2, lVar2 != 0)) && (lVar1 != lVar2))
    {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    if (param_2[1] != 0) {
      FUN_1434109d0(param_1,param_2[1],*(byte *)(param_2 + 2) & 1);
      return;
    }
    lVar1 = param_1[1];
    if (((lVar1 != 0) && ((*(byte *)(param_1 + 2) & 1) == 0)) &&
       ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 143410b40 FUN_143410b40 body=177 status=ok
// SIG undefined FUN_143410b40(void)

undefined8 *
FUN_143410b40(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b0ab80;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar1 = *param_3;
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[5] = 0;
  if (param_3[1] != 0) {
    FUN_1434109d0(param_1 + 4,param_3[1],*(byte *)(param_3 + 2) & 1);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  lVar1 = *param_4;
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[8] = 0;
  if (param_4[1] != 0) {
    FUN_1434109d0(param_1 + 7,param_4[1],*(byte *)(param_4 + 2) & 1);
  }
  return param_1;
}



// FUNCTION 143410c00 FUN_143410c00 body=281 status=ok
// SIG undefined FUN_143410c00(void)

undefined1 * FUN_143410c00(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_28;
  longlong local_20;
  byte local_18;
  
  if ((param_2 == 0) ||
     (iVar2 = (**(code **)(*(longlong *)(param_2 + 0x20) + 0x10))(param_2 + 0x20), iVar2 != 0x17)) {
    *param_1 = 6;
    *(longlong *)(param_1 + 8) = param_2;
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
    }
    return param_1;
  }
  *param_1 = 8;
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_2 + 0x20) + 0x60))(param_2 + 0x20,&local_28)
  ;
  param_1[0x18] = 0;
  lVar1 = *plVar3;
  *(longlong *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar3[1] != 0) {
    FUN_1434109d0(param_1 + 8,plVar3[1],*(byte *)(plVar3 + 2) & 1);
  }
  if ((((local_18 & 2) == 0) && (local_28 != 0)) && ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
    FUN_1434a2b80();
  }
  local_28 = 0;
  if ((local_18 & 1) != 0) {
    return param_1;
  }
  if (local_20 == 0) {
    return param_1;
  }
  if ((*(uint *)(local_20 + 0x18) & 0x3ffffff) == 0) {
    return param_1;
  }
  *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
  FUN_1434a2b80();
  return param_1;
}



// FUNCTION 143410d20 FUN_143410d20 body=67 status=ok
// SIG undefined FUN_143410d20(void)

undefined1 * FUN_143410d20(undefined1 *param_1,longlong param_2)

{
  int *piVar1;
  
  *param_1 = 7;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
  }
  piVar1 = *(int **)(param_2 + 0x70);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_14336c170(param_2);
  }
  *(int **)(param_1 + 8) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}



// FUNCTION 143410d70 FUN_143410d70 body=101 status=ok
// SIG undefined FUN_143410d70(void)

undefined1 * FUN_143410d70(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = 8;
  lVar1 = (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                    (*(longlong **)(*param_2 + 0x30),0x70);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143416630(lVar1,param_2,param_3);
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 143410de0 Value body=89 status=ok
// SIG undefined Value(void)

undefined1 * Scaleform::GFx::AS2::Value::Value(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 8;
  param_1[0x18] = 0;
  lVar1 = *param_2;
  *(longlong *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2[1] != 0) {
    FUN_1434109d0(param_1 + 8,param_2[1],*(byte *)(param_2 + 2) & 1);
  }
  return param_1;
}



// FUNCTION 143410e40 FUN_143410e40 body=117 status=ok
// SIG undefined FUN_143410e40(void)

undefined1 *
FUN_143410e40(undefined1 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = 9;
  lVar1 = (**(code **)(*param_4 + 0x50))(param_4,0x50);
  if (lVar1 != 0) {
    uVar2 = FUN_143410b40(lVar1,param_5,param_2,param_3);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return param_1;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143410ec0 FUN_143410ec0 body=556 status=ok
// SIG undefined FUN_143410ec0(void)

undefined1 * FUN_143410ec0(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28;
  longlong local_20;
  byte local_18;
  
  *param_1 = *param_2;
  switch(*param_2) {
  case 2:
    param_1[8] = param_2[8];
    return param_1;
  case 3:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    return param_1;
  case 4:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    return param_1;
  case 5:
  case 0xb:
    lVar4 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    return param_1;
  case 6:
    lVar4 = *(longlong *)(param_2 + 8);
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return param_1;
    }
    iVar2 = (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x10))(lVar4 + 0x20);
    if (iVar2 == 0x17) {
      *param_1 = 8;
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x20) + 0x60))
                         ((longlong *)(*(longlong *)(param_2 + 8) + 0x20),&local_28);
      param_1[0x18] = 0;
      lVar4 = *plVar3;
      *(longlong *)(param_1 + 8) = lVar4;
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (plVar3[1] != 0) {
        FUN_1434109d0(param_1 + 8,plVar3[1],*(byte *)(plVar3 + 2) & 1);
      }
      if ((((local_18 & 2) == 0) && (local_28 != 0)) &&
         ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
        FUN_1434a2b80();
      }
      local_28 = 0;
      if ((local_18 & 1) != 0) {
        return param_1;
      }
      if (local_20 == 0) {
        return param_1;
      }
      if ((*(uint *)(local_20 + 0x18) & 0x3ffffff) == 0) {
        return param_1;
      }
      *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
      FUN_1434a2b80();
      return param_1;
    }
    lVar4 = *(longlong *)(param_2 + 8);
    goto LAB_1434110cd;
  case 7:
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
      return param_1;
    }
    break;
  case 8:
  case 0xc:
    param_1[0x18] = 0;
    lVar4 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar4;
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1434109d0(param_1 + 8,*(longlong *)(param_2 + 0x10),param_2[0x18] & 1);
      return param_1;
    }
    break;
  case 9:
    lVar4 = *(longlong *)(param_2 + 8);
LAB_1434110cd:
    *(longlong *)(param_1 + 8) = lVar4;
    *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
  }
  return param_1;
}



// FUNCTION 143411120 FUN_143411120 body=10 status=ok
// SIG undefined FUN_143411120(void)

void FUN_143411120(byte *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (*param_1 < 5) {
    return;
  }
  switch(*param_1) {
  case 5:
  case 0xb:
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
    break;
  case 6:
  case 9:
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80();
      }
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      return;
    }
    break;
  case 7:
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 1) {
        FUN_14336bed0(piVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
      }
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    break;
  case 8:
  case 0xc:
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_14349ebc0(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 143411150 FUN_143411150 body=197 status=ok
// SIG undefined FUN_143411150(void)

void FUN_143411150(undefined1 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  switch(*param_1) {
  case 5:
  case 0xb:
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
    break;
  case 6:
  case 9:
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80();
      }
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    break;
  case 7:
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 1) {
        FUN_14336bed0(piVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
      }
      *(undefined8 *)(param_1 + 8) = 0;
    }
    break;
  case 8:
  case 0xc:
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_14349ebc0(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 143411240 FUN_143411240 body=527 status=ok
// SIG undefined FUN_143411240(void)

void FUN_143411240(byte *param_1,byte *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong local_28;
  longlong local_20;
  byte local_18;
  
  if (4 < *param_1) {
    FUN_143411150();
  }
  *param_1 = *param_2;
  switch(*param_2) {
  case 2:
    param_1[8] = param_2[8];
    return;
  case 3:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    return;
  case 4:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    return;
  case 5:
  case 0xb:
    lVar2 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    return;
  case 6:
    lVar2 = *(longlong *)(param_2 + 8);
    if (lVar2 == 0) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      return;
    }
    iVar3 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x10))(lVar2 + 0x20);
    if (iVar3 == 0x17) {
      *param_1 = 8;
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x20) + 0x60))
                         ((longlong *)(*(longlong *)(param_2 + 8) + 0x20),&local_28);
      param_1[0x18] = 0;
      lVar2 = *plVar4;
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
      }
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (plVar4[1] != 0) {
        FUN_1434109d0(param_1 + 8,plVar4[1],*(byte *)(plVar4 + 2) & 1);
      }
      if ((((local_18 & 2) == 0) && (local_28 != 0)) &&
         ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
        FUN_1434a2b80();
      }
      local_28 = 0;
      if ((local_18 & 1) != 0) {
        return;
      }
      if (local_20 == 0) {
        return;
      }
      if ((*(uint *)(local_20 + 0x18) & 0x3ffffff) == 0) {
        return;
      }
      *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
      FUN_1434a2b80();
      return;
    }
  case 9:
    lVar2 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    break;
  case 7:
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
      return;
    }
    break;
  case 8:
  case 0xc:
    param_1[0x18] = 0;
    lVar2 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1434109d0(param_1 + 8,*(longlong *)(param_2 + 0x10),param_2[0x18] & 1);
      return;
    }
  }
  return;
}



// FUNCTION 143411490 ToStringVersioned body=111 status=ok
// SIG undefined ToStringVersioned(void)

longlong *
Scaleform::GFx::AS2::Value::ToStringVersioned
          (char *param_1,longlong *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  
  if ((*param_1 != '\0') && (*param_1 != '\n')) {
    FUN_143411540();
    return param_2;
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0xe8) + 0x28) + 0x18);
  if (param_4 - 1U < 6) {
    lVar2 = *(longlong *)(lVar2 + 0x138);
    *param_2 = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    return param_2;
  }
  lVar2 = *(longlong *)(lVar2 + 0x2d0);
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_2;
}



// FUNCTION 143411510 FUN_143411510 body=32 status=ok
// SIG undefined FUN_143411510(void)

undefined8 FUN_143411510(undefined8 param_1,undefined8 param_2)

{
  FUN_143411540();
  return param_2;
}



// FUNCTION 143411540 FUN_143411540 body=1285 status=ok
// SIG undefined FUN_143411540(void)

longlong * FUN_143411540(char *param_1,longlong *param_2,longlong *param_3,int param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong local_res10;
  longlong *local_res18;
  longlong *local_b8;
  longlong lStack_b0;
  byte local_a8;
  byte local_a0 [8];
  longlong *local_98;
  longlong local_90;
  byte local_88;
  longlong *local_80;
  undefined **local_78;
  byte *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong *local_48;
  undefined8 local_40;
  byte local_38 [32];
  
  plVar7 = param_3 + 0x1d;
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x138);
  *param_2 = lVar5;
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + 1;
  switch(*param_1) {
  case '\0':
  case '\n':
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x2d0);
    goto LAB_143411a1b;
  case '\x01':
    FUN_143499eb0(param_2,*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x2d8);
    break;
  case '\x02':
    lVar5 = 0x2e8;
    if (param_1[8] != '\0') {
      lVar5 = 0x2e0;
    }
    FUN_143499eb0(param_2,lVar5 + *(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18));
    break;
  case '\x03':
    if (param_4 < 0) {
      param_4 = 10;
    }
    else {
      param_4 = -param_4;
    }
    uVar8 = FUN_143364c20((int)*(undefined8 *)(param_1 + 8),&local_78,0x40,param_4);
    goto LAB_1434115dd;
  case '\x04':
    uVar8 = FUN_143364ed0(*(undefined4 *)(param_1 + 8),&local_78,0x40);
LAB_1434115dd:
    lVar5 = FUN_143360a60(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x618),uVar8);
LAB_1434115f7:
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
    break;
  case '\x05':
    FUN_143361630(param_2,*(undefined8 *)(param_1 + 8));
    break;
  case '\x06':
  case '\a':
    local_a0[0] = 0;
    local_res18 = (longlong *)FUN_1434123a0(param_1,param_3);
    if (((param_5 == '\0') && (local_res18 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*local_res18 + 0x58))
                          (local_res18,plVar7,
                           *(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 1000,local_a0),
       cVar4 != '\0')) {
      uVar3 = *(ushort *)((longlong)param_3 + 0x17c);
      *(ushort *)((longlong)param_3 + 0x17c) = uVar3 + 1;
      if (uVar3 < 0xff) {
        local_38[0] = 0;
        if (local_a0[0] == 8) {
          bVar9 = 0;
          if (local_98 != (longlong *)0x0) {
            *(int *)(local_98 + 3) = (int)local_98[3] + 1;
            *(uint *)(local_98 + 3) = *(uint *)(local_98 + 3) & 0x8fffffff;
          }
          local_res10 = 0;
          plVar7 = local_98;
          if (local_90 != 0) {
            bVar9 = (local_88 & 1) != 0;
            local_res10 = local_90;
            if (!(bool)bVar9) {
              *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + 1;
              *(uint *)(local_90 + 0x18) = *(uint *)(local_90 + 0x18) & 0x8fffffff;
            }
          }
LAB_1434117ab:
          if (plVar7 != (longlong *)0x0) {
            local_60 = 0;
            local_78 = &PTR_FUN_145b0ab98;
            local_58 = 0;
            local_70 = local_38;
            local_68 = local_res18;
            local_50 = 0;
            local_40 = 0;
            local_48 = param_3;
            (**(code **)(*plVar7 + 0x50))(plVar7,&local_78,local_res10,0);
            local_78 = &PTR_FUN_145b0ab98;
            FUN_14349ebc0(&local_60);
          }
        }
        else {
          if (local_a0[0] == 0xb) {
            FUN_143413f20(local_a0,&local_b8);
            local_res10 = lStack_b0;
            plVar7 = local_b8;
            bVar9 = local_a8;
            goto LAB_1434117ab;
          }
          bVar9 = 0;
          local_b8 = (longlong *)0x0;
          lStack_b0 = 0;
          plVar7 = (longlong *)0x0;
          local_res10 = 0;
        }
        FUN_143411540(local_38,&local_res18,param_3,0xffffffff,0);
        local_80 = local_res18;
        *(int *)(local_res18 + 3) = (int)local_res18[3] + 1;
        piVar1 = (int *)(*param_2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_2 = (longlong)local_80;
        plVar2 = local_res18 + 3;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          FUN_14335f920();
        }
        if ((((bVar9 & 2) == 0) && (plVar7 != (longlong *)0x0)) &&
           ((*(uint *)(plVar7 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(plVar7 + 3) = *(uint *)(plVar7 + 3) - 1;
          FUN_1434a2b80(plVar7);
        }
        if ((((bVar9 & 1) == 0) && (local_res10 != 0)) &&
           ((*(uint *)(local_res10 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(local_res10 + 0x18) = *(uint *)(local_res10 + 0x18) - 1;
          FUN_1434a2b80();
        }
        if (4 < local_38[0]) {
          FUN_143411150(local_38);
          *(short *)((longlong)param_3 + 0x17c) = *(short *)((longlong)param_3 + 0x17c) + -1;
          goto LAB_1434119a5;
        }
      }
      else {
        FUN_143499eb0(param_2,*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x3d8);
        cVar4 = (**(code **)(*param_3 + 8))(param_3);
        if (cVar4 != '\0') {
          FUN_1434171c0(param_3,
                        "Stack overflow, max level of 255 nested calls of toString is reached.");
        }
      }
      *(short *)((longlong)param_3 + 0x17c) = *(short *)((longlong)param_3 + 0x17c) + -1;
    }
    else if (((*param_1 == '\x06') && (lVar5 = *(longlong *)(param_1 + 8), lVar5 != 0)) &&
            (lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 8))(lVar5 + 0x20,param_3),
            lVar5 != 0)) {
      lVar5 = FUN_143360a60(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x618),lVar5);
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
      piVar1 = (int *)(*param_2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar5);
      }
    }
    else {
      if ((*param_1 == '\a') && (*(longlong *)(param_1 + 8) != 0)) {
        lVar5 = FUN_143413eb0(param_1,param_3);
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x3e0;
      }
      FUN_143499eb0(param_2,lVar5);
    }
LAB_1434119a5:
    if (4 < local_a0[0]) {
      FUN_143411150(local_a0);
    }
    break;
  case '\b':
  case '\v':
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x3d0);
    goto LAB_143411a1b;
  case '\t':
    uVar8 = 10;
    pcVar6 = "[property]";
    goto LAB_1434119db;
  case '\f':
    uVar8 = 0x10;
    pcVar6 = "[resolveHandler]";
LAB_1434119db:
    lVar5 = FUN_143360950(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x618),pcVar6,
                          uVar8,0);
    goto LAB_1434115f7;
  default:
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(*plVar7 + 0x28) + 0x18) + 0x2b0);
LAB_143411a1b:
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar5;
  }
  return param_2;
}



// FUNCTION 143411a90 FUN_143411a90 body=914 status=ok
// SIG undefined FUN_143411a90(void)

double FUN_143411a90(char *param_1,longlong *param_2)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  char *_String;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte local_res8;
  undefined7 uStackX_9;
  longlong *local_c8;
  longlong lStack_c0;
  byte local_b8;
  byte local_b0 [8];
  longlong *local_a8;
  longlong local_a0;
  byte local_98;
  byte local_90 [40];
  undefined **local_68;
  byte *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  cVar2 = *param_1;
  if (cVar2 == '\x03') {
    return *(double *)(param_1 + 8);
  }
  if (cVar2 == '\x04') {
    return (double)*(int *)(param_1 + 8);
  }
  if (cVar2 == '\x05') {
    cVar2 = FUN_1434a4eb0(&local_res8,**(undefined8 **)(param_1 + 8));
    if (cVar2 != '\0') {
      return (double)CONCAT71(uStackX_9,local_res8);
    }
    goto LAB_143411e13;
  }
  if (cVar2 == '\x01') {
    bVar6 = *(byte *)(param_2 + 0x1e) < 6;
    bVar7 = *(byte *)(param_2 + 0x1e) == 6;
LAB_143411e0d:
    if (bVar6 || bVar7) {
      return 0.0;
    }
LAB_143411e13:
    dVar9 = (double)Scaleform::GFx::NumberUtil::NaN();
    return dVar9;
  }
  if (cVar2 == '\x02') {
    if (param_1[8] == '\0') {
      return 0.0;
    }
    return 1.0;
  }
  if (cVar2 == '\a') goto LAB_143411e13;
  if (((cVar2 != '\x06') || (*(longlong *)(param_1 + 8) == 0)) && (cVar2 != '\b')) {
    if ((cVar2 != '\0') && (cVar2 != '\n')) {
      return 0.0;
    }
    bVar6 = *(byte *)(param_2 + 0x1e) - 1 < 5;
    bVar7 = *(byte *)(param_2 + 0x1e) - 1 == 5;
    goto LAB_143411e0d;
  }
  local_b0[0] = 0;
  plVar3 = (longlong *)FUN_1434123a0();
  if ((param_2 == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,param_2 + 0x1d,
                         *(longlong *)(*(longlong *)(param_2[0x1d] + 0x28) + 0x18) + 0x3f0,local_b0)
     , cVar2 == '\0')) {
    if (*param_1 == '\a') {
      uVar8 = Scaleform::GFx::NumberUtil::NaN();
      uVar10 = (undefined4)uVar8;
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    else {
      _String = (char *)(**(code **)(*plVar3 + 8))(plVar3,param_2);
      if (_String == (char *)0x0) {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        dVar9 = atof(_String);
        uVar10 = SUB84(dVar9,0);
        uVar11 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
    }
    goto LAB_143411dd0;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 0x17c);
  *(ushort *)((longlong)param_2 + 0x17c) = uVar1 + 1;
  if (uVar1 < 0xff) {
    lVar4 = 0;
    local_90[0] = 0;
    if (local_b0[0] == 8) {
      local_res8 = 0;
      if (local_a8 != (longlong *)0x0) {
        *(int *)(local_a8 + 3) = (int)local_a8[3] + 1;
        *(uint *)(local_a8 + 3) = *(uint *)(local_a8 + 3) & 0x8fffffff;
      }
      plVar5 = local_a8;
      if ((local_a0 != 0) && (local_res8 = (local_98 & 1) != 0, lVar4 = local_a0, !(bool)local_res8)
         ) {
        *(int *)(local_a0 + 0x18) = *(int *)(local_a0 + 0x18) + 1;
        *(uint *)(local_a0 + 0x18) = *(uint *)(local_a0 + 0x18) & 0x8fffffff;
      }
LAB_143411cdb:
      if (plVar5 != (longlong *)0x0) {
        local_50 = 0;
        local_68 = &PTR_FUN_145b0ab98;
        local_48 = 0;
        local_60 = local_90;
        local_40 = 0;
        local_30 = 0;
        local_58 = plVar3;
        local_38 = param_2;
        (**(code **)(*plVar5 + 0x50))(plVar5,&local_68,lVar4,0);
        local_68 = &PTR_FUN_145b0ab98;
        FUN_14349ebc0(&local_50);
      }
      if ((((local_90[0] - 1 & 0xfa) != 0) || (local_90[0] == 6)) && (1 < (byte)(local_90[0] - 3)))
      goto LAB_143411bfb;
      uVar8 = FUN_143411a90(local_90,param_2);
    }
    else {
      if (local_b0[0] == 0xb) {
        FUN_143413f20(local_b0,&local_c8,param_2);
        local_res8 = local_b8;
        lVar4 = lStack_c0;
        plVar5 = local_c8;
        goto LAB_143411cdb;
      }
      local_res8 = 0;
      local_c8 = (longlong *)0x0;
      lStack_c0 = 0;
      lVar4 = 0;
      plVar5 = (longlong *)0x0;
LAB_143411bfb:
      uVar8 = Scaleform::GFx::NumberUtil::NaN();
    }
    uVar10 = (undefined4)uVar8;
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((((local_res8 & 2) == 0) && (plVar5 != (longlong *)0x0)) &&
       ((*(uint *)(plVar5 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) - 1;
      FUN_1434a2b80(plVar5);
    }
    if ((((local_res8 & 1) == 0) && (lVar4 != 0)) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80(lVar4);
    }
    if (4 < local_90[0]) {
      FUN_143411150(local_90);
      *(short *)((longlong)param_2 + 0x17c) = *(short *)((longlong)param_2 + 0x17c) + -1;
      goto LAB_143411dd0;
    }
  }
  else {
    uVar8 = Scaleform::GFx::NumberUtil::NaN();
    uVar10 = (undefined4)uVar8;
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    cVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (cVar2 != '\0') {
      FUN_1434171c0(param_2,"Stack overflow, max level of 255 nested calls of valueOf is reached.");
    }
  }
  *(short *)((longlong)param_2 + 0x17c) = *(short *)((longlong)param_2 + 0x17c) + -1;
LAB_143411dd0:
  if (4 < local_b0[0]) {
    FUN_143411150(local_b0);
  }
  return (double)CONCAT44(uVar11,uVar10);
}



// FUNCTION 143411e30 FUN_143411e30 body=191 status=ok
// SIG undefined FUN_143411e30(void)

ulonglong FUN_143411e30(char *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  if (*param_1 == '\x04') {
    return (ulonglong)*(uint *)(param_1 + 8);
  }
  dVar2 = (double)FUN_143411a90();
  if ((((ulonglong)dVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) || (dVar2 == 0.0)) {
    uVar1 = 0;
  }
  else {
    if ((-2147483648.0 <= dVar2) && (dVar2 <= 2147483647.0)) {
      return (ulonglong)(uint)(int)dVar2;
    }
    dVar3 = _guard_xfg_dispatch_icall_nop(ABS(dVar2));
    dVar3 = _guard_xfg_dispatch_icall_nop(dVar3,4294967296.0);
    uVar1 = (ulonglong)dVar3;
    if (dVar2 < 0.0) {
      return (ulonglong)(uint)-(int)uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 143411f00 FUN_143411f00 body=188 status=ok
// SIG undefined FUN_143411f00(void)

ulonglong FUN_143411f00(char *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  if (*param_1 == '\x04') {
    return (ulonglong)*(uint *)(param_1 + 8);
  }
  dVar2 = (double)FUN_143411a90();
  if ((((ulonglong)dVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) || (dVar2 == 0.0)) {
    uVar1 = 0;
  }
  else {
    if ((0.0 <= dVar2) && (dVar2 <= 4294967295.0)) {
      return (longlong)dVar2;
    }
    dVar3 = _guard_xfg_dispatch_icall_nop(ABS(dVar2));
    dVar3 = _guard_xfg_dispatch_icall_nop(dVar3,4294967296.0);
    uVar1 = (ulonglong)dVar3;
    if (dVar2 < 0.0) {
      return (ulonglong)(uint)-(int)uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 143411fd0 FUN_143411fd0 body=322 status=ok
// SIG undefined FUN_143411fd0(void)

bool FUN_143411fd0(char *param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  double local_res8 [4];
  
  cVar2 = *param_1;
  if (cVar2 == '\x05') {
    if (*(int *)(*(undefined8 **)(param_1 + 8) + 4) != 0) {
      if (6 < *(byte *)(param_2 + 0xf0)) {
        return true;
      }
      cVar2 = FUN_1434a4eb0(local_res8,**(undefined8 **)(param_1 + 8));
      if (cVar2 != '\0') {
        cVar2 = Scaleform::GFx::NumberUtil::IsNaN(SUB84(local_res8[0],0));
        if (cVar2 != '\0') {
          return false;
        }
        if (local_res8[0] != 0.0) {
          return true;
        }
        return false;
      }
    }
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 == '\x04') {
        return *(int *)(param_1 + 8) != 0;
      }
      if (cVar2 == '\x02') {
        return (bool)param_1[8];
      }
      if (cVar2 != '\x06') {
        if (cVar2 == '\a') {
          lVar3 = Scaleform::GFx::AS2::Value::ToCharacter();
          return lVar3 != 0;
        }
        if (cVar2 != '\b') {
          return cVar2 == '\v';
        }
      }
      return *(longlong *)(param_1 + 8) != 0;
    }
    dVar1 = *(double *)(param_1 + 8);
    if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar1 & 0xfffffffffffff) == 0)) {
      if (dVar1 != 0.0) {
        return true;
      }
      return false;
    }
  }
  return false;
}



// FUNCTION 143412120 FUN_143412120 body=426 status=ok
// SIG undefined FUN_143412120(void)

longlong FUN_143412120(char *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  byte local_28;
  undefined7 uStack_27;
  longlong local_20;
  byte local_18;
  
  cVar1 = *param_1;
  if (cVar1 == '\x06') {
    return *(longlong *)(param_1 + 8);
  }
  if (cVar1 == '\b') {
    if (*(longlong *)(param_1 + 8) != 0) {
      return *(longlong *)(param_1 + 8);
    }
  }
  else if (cVar1 == '\t') {
    lVar2 = *(longlong *)(param_2 + 0xe0);
    if ((lVar2 != 0) &&
       (lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))(),
       lVar2 != 0)) {
      local_28 = 0;
      cVar1 = FUN_143413c30(param_1,param_2,lVar2 + 8,&local_28);
      if (cVar1 != '\0') {
        lVar2 = FUN_143412120(&local_28,param_2);
        if (local_28 < 5) {
          return lVar2;
        }
        FUN_143411150(&local_28);
        return lVar2;
      }
      if (4 < local_28) {
        FUN_143411150(&local_28);
        return 0;
      }
    }
  }
  else if (cVar1 == '\v') {
    FUN_143413f20(param_1,&local_28,param_2);
    lVar2 = CONCAT71(uStack_27,local_28);
    if (lVar2 != 0) {
      if (((local_18 & 2) == 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
      if ((((local_18 & 1) == 0) && (local_20 != 0)) &&
         ((*(uint *)(local_20 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
        FUN_1434a2b80();
      }
      return lVar2;
    }
    if ((((local_18 & 1) == 0) && (local_20 != 0)) &&
       ((*(uint *)(local_20 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
      FUN_1434a2b80();
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1434122d0 ToCharacter body=82 status=ok
// SIG undefined ToCharacter(void)

longlong Scaleform::GFx::AS2::Value::ToCharacter(char *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*param_1 == '\a') && (param_2 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
    lVar1 = CharacterHandle::ResolveCharacter
                      (*(longlong *)(param_1 + 8),
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10));
    if (lVar1 != 0) {
      lVar2 = 0;
      if (*(char *)(lVar1 + 0x6a) < '\0') {
        lVar2 = lVar1;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 143412330 FUN_143412330 body=98 status=ok
// SIG undefined FUN_143412330(void)

undefined8 FUN_143412330(char *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*param_1 == '\a') && (param_2 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
    lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                      (*(longlong *)(param_1 + 8),
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10));
    if (lVar1 != 0) {
      lVar3 = 0;
      if (*(char *)(lVar1 + 0x6a) < '\0') {
        lVar3 = lVar1;
      }
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143412387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1434123a0 FUN_1434123a0 body=160 status=ok
// SIG undefined FUN_1434123a0(void)

longlong FUN_1434123a0(char *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != '\a') {
    lVar1 = FUN_143412120();
    if (lVar1 == 0) {
      return 0;
    }
    return lVar1 + 0x20;
  }
  if (((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                        (*(longlong *)(param_1 + 8),
                         *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10)
                        ), lVar1 != 0)) {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x6a) < '\0') {
      lVar2 = lVar1;
    }
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
      lVar1 = lVar2 + 8;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 143412450 ToFunction body=126 status=ok
// SIG undefined ToFunction(void)

longlong * Scaleform::GFx::AS2::Value::ToFunction(char *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_1 == '\b') {
    *(undefined1 *)(param_2 + 2) = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    }
    param_2[1] = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1434109d0(param_2,*(longlong *)(param_1 + 0x10),param_1[0x18] & 1);
    }
    return param_2;
  }
  if (*param_1 != '\v') {
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FUN_143413f20();
  return param_2;
}



// FUNCTION 1434124e0 FUN_1434124e0 body=102 status=ok
// SIG undefined FUN_1434124e0(void)

longlong * FUN_1434124e0(char *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *param_1;
  *(undefined1 *)(param_2 + 2) = 0;
  if (cVar1 == '\f') {
    lVar2 = *(longlong *)(param_1 + 8);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    param_2[1] = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1434109d0(param_2,*(longlong *)(param_1 + 0x10),param_1[0x18] & 1);
      return param_2;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 143412550 FUN_143412550 body=1033 status=ok
// SIG undefined FUN_143412550(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_143412550(char *param_1,undefined1 *param_2,longlong *param_3)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  byte bVar7;
  undefined ***local_res8;
  undefined **local_a8;
  undefined ***pppuStack_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  longlong *local_78;
  undefined8 local_70;
  byte local_68 [8];
  undefined **local_60;
  undefined ***local_58;
  byte local_50;
  byte local_48 [32];
  
  if (2 < (byte)(*param_1 - 6U)) {
    if (*param_1 == '\v') {
      FUN_143413f20(param_1,&local_a8);
      if (local_a8 != (undefined **)0x0) {
        *param_2 = 8;
        param_2[0x18] = 0;
        *(undefined ***)(param_2 + 8) = local_a8;
        *(uint *)(local_a8 + 3) = *(int *)(local_a8 + 3) + 1U & 0x8fffffff;
        *(undefined8 *)(param_2 + 0x10) = 0;
        if (pppuStack_a0 != (undefined ***)0x0) {
          FUN_1434109d0(param_2 + 8,pppuStack_a0,(byte)local_98 & 1);
        }
        if ((((ulonglong)local_98 & 2) == 0) && ((*(uint *)(local_a8 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_a8 + 3) = *(uint *)(local_a8 + 3) - 1;
          FUN_1434a2b80(local_a8);
        }
        if (((ulonglong)local_98 & 1) != 0) {
          return param_2;
        }
        if (pppuStack_a0 == (undefined ***)0x0) {
          return param_2;
        }
        if ((*(uint *)(pppuStack_a0 + 3) & 0x3ffffff) == 0) {
          return param_2;
        }
        *(uint *)(pppuStack_a0 + 3) = *(uint *)(pppuStack_a0 + 3) - 1;
        FUN_1434a2b80(pppuStack_a0);
        return param_2;
      }
      if (((((ulonglong)local_98 & 1) == 0) && (pppuStack_a0 != (undefined ***)0x0)) &&
         ((*(uint *)(pppuStack_a0 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(pppuStack_a0 + 3) = *(uint *)(pppuStack_a0 + 3) - 1;
        FUN_1434a2b80();
      }
    }
    FUN_143410ec0(param_2,param_1);
    return param_2;
  }
  local_68[0] = 0;
  plVar4 = (longlong *)FUN_1434123a0(param_1,param_3);
  if (((param_3 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x58))
                        (plVar4,param_3 + 0x1d,
                         *(longlong *)(*(longlong *)(param_3[0x1d] + 0x28) + 0x18) + 0x3f0,local_68)
     , cVar3 == '\0')) {
    if ((*param_1 == '\a') && (*(longlong *)(param_1 + 8) != 0)) {
      plVar4 = (longlong *)FUN_143413eb0(param_1,param_3);
      local_a8 = (undefined **)CONCAT71(local_a8._1_7_,5);
      pppuStack_a0 = (undefined ***)*plVar4;
      *(int *)(pppuStack_a0 + 3) = *(int *)(pppuStack_a0 + 3) + 1;
    }
    else {
      if ((*param_1 == '\x06') &&
         ((lVar5 = *(longlong *)(param_1 + 8), lVar5 != 0 &&
          (lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 8))(lVar5 + 0x20,param_3), lVar5 != 0)
          ))) {
        pppuStack_a0 = (undefined ***)
                       FUN_143360a60(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(param_3[0x1d] + 0x28) + 0x18) +
                                      0x618),lVar5);
        pppuVar6 = pppuStack_a0 + 3;
        *(int *)pppuVar6 = *(int *)pppuVar6 + 1;
        iVar1 = *(int *)pppuVar6;
      }
      else {
        FUN_143411540(param_1,&local_res8,param_3,0xffffffff,0);
        iVar1 = *(int *)(local_res8 + 3);
        *(int *)(local_res8 + 3) = iVar1;
        pppuStack_a0 = local_res8;
      }
      local_a8 = (undefined **)CONCAT71(local_a8._1_7_,5);
      if (iVar1 == 0) {
        FUN_14335f920(pppuStack_a0);
      }
    }
    FUN_143410ec0(param_2,&local_a8);
    if ((byte)local_a8 < 5) goto LAB_143412928;
    pppuVar6 = &local_a8;
  }
  else {
    uVar2 = *(ushort *)((longlong)param_3 + 0x17c);
    local_48[0] = 0;
    *(ushort *)((longlong)param_3 + 0x17c) = uVar2 + 1;
    if (uVar2 < 0xff) {
      pppuVar6 = (undefined ***)0x0;
      if (local_68[0] == 8) {
        bVar7 = 0;
        if (local_60 != (undefined **)0x0) {
          *(int *)(local_60 + 3) = *(int *)(local_60 + 3) + 1;
          *(uint *)(local_60 + 3) = *(uint *)(local_60 + 3) & 0x8fffffff;
        }
        if ((local_58 != (undefined ***)0x0) &&
           (bVar7 = (local_50 & 1) != 0, pppuVar6 = local_58, !(bool)bVar7)) {
          *(int *)(local_58 + 3) = *(int *)(local_58 + 3) + 1;
          *(uint *)(local_58 + 3) = *(uint *)(local_58 + 3) & 0x8fffffff;
        }
LAB_14341276f:
        if (local_60 != (undefined **)0x0) {
          local_a8 = &PTR_FUN_145b0ab98;
          pppuStack_a0 = (undefined ***)local_48;
          local_80 = 0;
          local_90 = 0;
          local_88 = 0;
          local_70 = 0;
          local_98 = plVar4;
          local_78 = param_3;
          (**(code **)(*local_60 + 0x50))(local_60,&local_a8,pppuVar6,0);
          local_a8 = &PTR_FUN_145b0ab98;
          FUN_14349ebc0(&local_90);
        }
      }
      else {
        if (local_68[0] == 0xb) {
          FUN_143413f20(local_68,&local_a8,param_3);
          local_60 = local_a8;
          pppuVar6 = pppuStack_a0;
          bVar7 = (byte)local_98;
          goto LAB_14341276f;
        }
        bVar7 = 0;
        local_a8 = (undefined **)0x0;
        pppuStack_a0 = (undefined ***)0x0;
        pppuVar6 = (undefined ***)0x0;
        local_60 = (undefined **)0x0;
      }
      if ((((bVar7 & 2) == 0) && (local_60 != (undefined **)0x0)) &&
         ((*(uint *)(local_60 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_60 + 3) = *(uint *)(local_60 + 3) - 1;
        FUN_1434a2b80(local_60);
      }
      if ((((bVar7 & 1) == 0) && (pppuVar6 != (undefined ***)0x0)) &&
         ((*(uint *)(pppuVar6 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(pppuVar6 + 3) = *(uint *)(pppuVar6 + 3) - 1;
        FUN_1434a2b80(pppuVar6);
      }
    }
    else {
      cVar3 = (**(code **)(*param_3 + 8))(param_3);
      if (cVar3 != '\0') {
        FUN_1434171c0(param_3,"Stack overflow, max level of 255 nested calls of valueOf is reached."
                     );
      }
    }
    *(short *)((longlong)param_3 + 0x17c) = *(short *)((longlong)param_3 + 0x17c) + -1;
    FUN_143410ec0(param_2,local_48);
    if (local_48[0] < 5) goto LAB_143412928;
    pppuVar6 = (undefined ***)local_48;
  }
  FUN_143411150(pppuVar6);
LAB_143412928:
  if (4 < local_68[0]) {
    FUN_143411150(local_68);
  }
  return param_2;
}



// FUNCTION 143412960 FUN_143412960 body=54 status=ok
// SIG undefined FUN_143412960(void)

void FUN_143412960(byte *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143411a90();
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 3;
  return;
}



// FUNCTION 1434129a0 FUN_1434129a0 body=77 status=ok
// SIG undefined FUN_1434129a0(void)

void FUN_1434129a0(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong local_res8 [4];
  
  FUN_143411540(param_1,local_res8,param_2,0xffffffff,0);
  FUN_143411150(param_1);
  *param_1 = 5;
  *(longlong *)(param_1 + 8) = local_res8[0];
  iVar1 = *(int *)(local_res8[0] + 0x18);
  *(int *)(local_res8[0] + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 143412a00 FUN_143412a00 body=140 status=ok
// SIG undefined FUN_143412a00(void)

void FUN_143412a00(char *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  if ((*param_1 == '\0') || (*param_1 == '\n')) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
    if (param_3 - 1U < 6) {
      local_res8 = *(longlong *)(lVar2 + 0x138);
    }
    else {
      local_res8 = *(longlong *)(lVar2 + 0x2d0);
    }
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  }
  else {
    FUN_143411540(param_1,&local_res8,param_2,0xffffffff,0);
  }
  FUN_143411150(param_1);
  *param_1 = '\x05';
  *(longlong *)(param_1 + 8) = local_res8;
  iVar1 = *(int *)(local_res8 + 0x18);
  *(int *)(local_res8 + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  return;
}



// FUNCTION 143412aa0 FUN_143412aa0 body=242 status=ok
// SIG undefined FUN_143412aa0(void)

void FUN_143412aa0(char *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_28;
  longlong local_20;
  byte local_18;
  
  if ((param_2 == 0) ||
     (iVar1 = (**(code **)(*(longlong *)(param_2 + 0x20) + 0x10))(param_2 + 0x20), iVar1 != 0x17)) {
    if ((*param_1 != '\x06') || (*(longlong *)(param_1 + 8) != param_2)) {
      FUN_143411150(param_1);
      *param_1 = '\x06';
      *(longlong *)(param_1 + 8) = param_2;
      if (param_2 != 0) {
        *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
      }
    }
    return;
  }
  uVar2 = (**(code **)(*(longlong *)(param_2 + 0x20) + 0x60))(param_2 + 0x20,&local_28);
  Scaleform::GFx::AS2::Value::SetAsFunction(param_1,uVar2);
  if (((local_18 & 2) == 0) && ((local_28 != 0 && ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0))))
  {
    *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
    FUN_1434a2b80();
  }
  local_28 = 0;
  if ((local_18 & 1) != 0) {
    return;
  }
  if (local_20 == 0) {
    return;
  }
  if ((*(uint *)(local_20 + 0x18) & 0x3ffffff) == 0) {
    return;
  }
  *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
  FUN_1434a2b80();
  return;
}



// FUNCTION 143412ba0 SetAsCharacterHandle body=57 status=ok
// SIG undefined SetAsCharacterHandle(void)

void Scaleform::GFx::AS2::Value::SetAsCharacterHandle(char *param_1,int *param_2)

{
  if ((*param_1 != '\a') || (*(int **)(param_1 + 8) != param_2)) {
    FUN_143411150();
    *param_1 = '\a';
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}



// FUNCTION 143412be0 SetAsCharacter body=86 status=ok
// SIG undefined SetAsCharacter(void)

void Scaleform::GFx::AS2::Value::SetAsCharacter(char *param_1,longlong param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 0x70);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_14336c170(param_2);
    }
  }
  if ((*param_1 != '\a') || (*(int **)(param_1 + 8) != piVar1)) {
    FUN_143411150(param_1);
    *param_1 = '\a';
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



// FUNCTION 143412c40 FUN_143412c40 body=165 status=ok
// SIG undefined FUN_143412c40(void)

void FUN_143412c40(char *param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar1 - 2U < 4) {
    iVar1 = (**(code **)(*param_2 + 0x10))();
    if ((iVar1 - 2U < 4) && (param_2[3] != 0)) {
      piVar2 = *(int **)(param_2[3] + 0x70);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_14336c170();
      }
    }
    else {
      piVar2 = (int *)0x0;
    }
    if ((*param_1 != '\a') || (*(int **)(param_1 + 8) != piVar2)) {
      FUN_143411150(param_1);
      *param_1 = '\a';
      *(int **)(param_1 + 8) = piVar2;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + 1;
        return;
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (iVar1 - 6U < 0x27) {
      param_2 = param_2 + -4;
    }
    else {
      param_2 = (longlong *)0x0;
    }
    FUN_143412aa0(param_1,param_2);
  }
  return;
}



// FUNCTION 143412cf0 SetAsFunction body=112 status=ok
// SIG undefined SetAsFunction(void)

void Scaleform::GFx::AS2::Value::SetAsFunction(char *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_1 != '\b') || (*(longlong *)(param_1 + 8) != *param_2)) {
    FUN_143411150();
    *param_1 = '\b';
    param_1[0x18] = '\0';
    lVar1 = *param_2;
    *(longlong *)(param_1 + 8) = lVar1;
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    }
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    if (param_2[1] != 0) {
      FUN_1434109d0(param_1 + 8,param_2[1],*(byte *)(param_2 + 2) & 1);
    }
  }
  return;
}



// FUNCTION 143412d70 FUN_143412d70 body=100 status=ok
// SIG undefined FUN_143412d70(void)

void FUN_143412d70(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_143411150();
  *param_1 = 0xc;
  param_1[0x18] = 0;
  lVar1 = *param_2;
  *(longlong *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2[1] != 0) {
    FUN_1434109d0(param_1 + 8,param_2[1],*(byte *)(param_2 + 2) & 1);
  }
  return;
}



// FUNCTION 143412de0 FUN_143412de0 body=861 status=ok
// SIG undefined FUN_143412de0(void)

undefined1 FUN_143412de0(byte *param_1,undefined8 param_2,byte *param_3)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  bool bVar14;
  double dVar15;
  longlong local_res8;
  byte local_48 [8];
  double local_40;
  
  bVar3 = *param_1;
  if ((bVar3 < 2) || (bVar3 == 10)) {
    bVar13 = 1;
  }
  else {
    bVar13 = 0;
  }
  bVar4 = *param_3;
  if ((bVar4 < 2) || (bVar4 == 10)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  if ((bVar13 != 0) || (bVar6 != 0)) {
    return (bool)(bVar6 ^ bVar13 ^ 1);
  }
  switch(bVar3 - 2) {
  case 0:
switchD_143412e5d_caseD_0:
    local_40 = (double)FUN_143411a90(param_1,param_2);
    break;
  case 1:
    if (((bVar4 != 2) && (bVar4 < 0xc)) && ((0x940U >> (bVar4 & 0x1f) & 1) != 0)) {
      FUN_143412550(param_3,local_48,param_2,0);
      if ((byte)(local_48[0] - 1) < 5) {
        uVar7 = FUN_143412de0(param_1,param_2,local_48);
      }
      else {
        uVar7 = 0;
      }
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
        return uVar7;
      }
      return uVar7;
    }
    dVar15 = (double)FUN_143411a90(param_3,param_2);
    dVar2 = *(double *)(param_1 + 8);
    cVar8 = Scaleform::GFx::NumberUtil::IsNaN();
    if ((cVar8 != '\0') && (cVar9 = Scaleform::GFx::NumberUtil::IsNaN(), cVar9 != '\0')) {
      return true;
    }
    if ((cVar8 == '\0') && (cVar8 = Scaleform::GFx::NumberUtil::IsNaN(), cVar8 == '\0')) {
      if (dVar2 != dVar15) {
        return false;
      }
      return true;
    }
    return false;
  case 2:
    if (bVar4 != 3) {
      if (((bVar4 == 2) || (0xb < bVar4)) || ((0x940U >> (bVar4 & 0x1f) & 1) == 0)) {
        iVar10 = FUN_143411e30(param_3,param_2);
        return *(int *)(param_1 + 8) == iVar10;
      }
LAB_143412ece:
      FUN_143412550(param_3,local_48,param_2,0);
      if (4 < (byte)(local_48[0] - 1)) goto LAB_143412f06;
      param_3 = local_48;
      goto LAB_143412ef2;
    }
    local_40 = (double)*(int *)(param_1 + 8);
    break;
  case 3:
    if ((byte)(bVar4 - 3) < 2) goto switchD_143412e5d_caseD_0;
    if (bVar4 != 2) {
      if ((0xb < bVar4) || ((0x940U >> (bVar4 & 0x1f) & 1) == 0)) {
        FUN_143411540(param_3,&local_res8,param_2,0xffffffff,0);
        lVar5 = *(longlong *)(param_1 + 8);
        iVar10 = *(int *)(lVar5 + 0x18);
        *(int *)(lVar5 + 0x18) = iVar10;
        if (iVar10 == 0) {
          FUN_14335f920();
        }
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(local_res8);
          return lVar5 == local_res8;
        }
        return lVar5 == local_res8;
      }
      goto LAB_143412ece;
    }
    local_40 = (double)FUN_143411a90(param_3,param_2);
    param_3 = local_48;
    goto LAB_143412e78;
  case 4:
  case 6:
    if (3 < (byte)(bVar4 - 2)) {
      if ((bVar3 != 6) || (bVar4 != 6)) {
        if (bVar3 != 8) {
          return false;
        }
        if (bVar4 != 8) {
          return false;
        }
      }
      return *(longlong *)(param_1 + 8) == *(longlong *)(param_3 + 8);
    }
    FUN_143412550(param_1,local_48,param_2,0);
    if (4 < (byte)(local_48[0] - 1)) {
LAB_143412f06:
      uVar7 = 0;
      bVar14 = local_48[0] < 5;
      goto LAB_143412e90;
    }
    param_1 = local_48;
LAB_143412ef2:
    uVar7 = FUN_143412de0(param_1,param_2,param_3);
    bVar14 = local_48[0] < 5;
    goto LAB_143412e90;
  case 5:
    if (bVar4 != 7) {
      return false;
    }
    if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_3 + 8) != 0)) {
      plVar11 = (longlong *)FUN_143413eb0(param_3,param_2);
      plVar12 = (longlong *)FUN_143413eb0(param_1,param_2);
      return *plVar12 == *plVar11;
    }
    return *(longlong *)(param_1 + 8) == *(longlong *)(param_3 + 8);
  default:
    return bVar3 == bVar4;
  }
  param_1 = local_48;
LAB_143412e78:
  local_48[0] = 3;
  uVar7 = FUN_143412de0(param_1,param_2,param_3);
  bVar14 = local_48[0] < 5;
LAB_143412e90:
  if (!bVar14) {
    FUN_143411150(local_48);
  }
  return uVar7;
}



// FUNCTION 143413170 FUN_143413170 body=804 status=ok
// SIG undefined FUN_143413170(void)

undefined1 *
FUN_143413170(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,int param_5
             )

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong local_78;
  double local_70;
  byte local_68 [32];
  byte local_48 [64];
  
  if (param_5 == 0) {
    uVar3 = FUN_143412de0(param_1,param_3,param_4);
    param_2[8] = uVar3;
    *param_2 = 2;
  }
  else {
    FUN_143412550(param_1,local_48,param_3,0);
    FUN_143412550(param_4,local_68,param_3,0);
    if ((local_48[0] == 5) && (local_68[0] == 5)) {
      if (param_5 < 0) {
        FUN_143411540(local_68,&local_78,param_3,0xffffffff,0);
        FUN_143411540(local_48,&local_70,param_3,0xffffffff,0);
        uVar3 = FUN_143360290(&local_70,&local_78);
        *param_2 = 2;
        param_2[8] = uVar3;
        piVar1 = (int *)((longlong)local_70 + 0x18);
        *piVar1 = *piVar1 + -1;
        local_70 = (double)local_78;
        if (*piVar1 == 0) {
          FUN_14335f920();
          local_70 = (double)local_78;
        }
      }
      else {
        FUN_143411540(local_68,&local_70,param_3,0xffffffff,0);
        FUN_143411540(local_48,&local_78,param_3,0xffffffff,0);
        if ((double)local_78 == local_70) {
          bVar5 = false;
        }
        else {
          cVar4 = FUN_143360290(&local_78,&local_70);
          bVar5 = cVar4 == '\0';
        }
        piVar1 = (int *)(local_78 + 0x18);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        *param_2 = 2;
        param_2[8] = bVar5;
        if (iVar2 == 0) {
          FUN_14335f920();
        }
      }
      piVar1 = (int *)((longlong)local_70 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      FUN_143411150(local_68);
      FUN_143411150(local_48);
    }
    else if ((*(byte *)(param_3 + 0xf0) < 7) ||
            ((((local_48[0] != 0 && (local_48[0] != 10)) && (local_68[0] != 0)) &&
             (local_68[0] != 10)))) {
      dVar6 = (double)FUN_143411a90(local_48,param_3);
      if (param_5 < 0) {
        dVar7 = (double)FUN_143411a90(local_68,param_3);
        dVar8 = dVar6;
        dVar6 = dVar7;
      }
      else {
        dVar8 = (double)FUN_143411a90(local_68,param_3);
      }
      if (((((uint)((ulonglong)dVar8 >> 0x20) & 0x7ff00000) == 0x7ff00000) &&
          (local_70 = dVar8, ((ulonglong)dVar8 & 0xfffffffffffff) != 0)) ||
         ((local_70 = dVar6, ((uint)((ulonglong)dVar6 >> 0x20) & 0x7ff00000) == 0x7ff00000 &&
          (((ulonglong)dVar6 & 0xfffffffffffff) != 0)))) {
        *param_2 = 0;
      }
      else {
        if (dVar8 == dVar6) {
          bVar5 = false;
        }
        else {
          cVar4 = FUN_143364c00(SUB84(dVar8,0));
          if ((cVar4 == '\0') || (cVar4 = FUN_143364be0(SUB84(dVar6,0)), cVar4 == '\0')) {
            cVar4 = FUN_143364c00(SUB84(dVar6,0));
            if ((cVar4 == '\0') || (cVar4 = FUN_143364be0(SUB84(dVar8,0)), cVar4 == '\0')) {
              if (dVar8 == INFINITY) {
                bVar5 = false;
                local_70 = INFINITY;
              }
              else if (dVar6 == INFINITY) {
                bVar5 = true;
                local_70 = INFINITY;
              }
              else if (dVar6 == -INFINITY) {
                bVar5 = false;
                local_70 = -INFINITY;
              }
              else if (dVar8 == -INFINITY) {
                bVar5 = true;
                local_70 = dVar8;
              }
              else {
                bVar5 = dVar8 < dVar6;
                local_70 = dVar8;
              }
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = false;
          }
        }
        *param_2 = 2;
        param_2[8] = bVar5;
      }
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    else {
      *param_2 = 0;
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
  }
  return param_2;
}



// FUNCTION 1434134a0 FUN_1434134a0 body=465 status=ok
// SIG undefined FUN_1434134a0(void)

void FUN_1434134a0(byte *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  longlong local_res20;
  longlong local_68;
  longlong local_60;
  byte local_58 [8];
  longlong local_50;
  byte local_38 [8];
  int local_30;
  
  local_58[0] = 0;
  uVar4 = FUN_143412550(param_1,local_38,param_2,0);
  FUN_143411240(local_58,uVar4);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if (local_58[0] == 5) {
    FUN_143411540(local_58,&local_res20,param_2,0xffffffff,0);
    FUN_143411150(local_58);
    local_58[0] = 5;
    local_50 = local_res20;
    iVar2 = *(int *)(local_res20 + 0x18);
    *(int *)(local_res20 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920();
    }
    local_38[0] = 4;
    local_30 = param_3;
    FUN_143411540(local_38,&local_60,param_2,0xffffffff,0);
    FUN_143411540(local_58,&local_res20,param_2,0xffffffff,0);
    Scaleform::GFx::ASString::operator+(&local_res20,&local_68,&local_60);
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143411150(local_58);
    local_58[0] = 5;
    local_50 = local_68;
    *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
    piVar1 = (int *)(local_68 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_60 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143411540(local_58,&local_res20,param_2,0xffffffff,0);
    if (4 < *param_1) {
      FUN_143411150(param_1);
    }
    *param_1 = 5;
    *(longlong *)(param_1 + 8) = local_res20;
    iVar2 = *(int *)(local_res20 + 0x18);
    *(int *)(local_res20 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    dVar3 = (double)FUN_143411a90(local_58,param_2);
    if (4 < *param_1) {
      FUN_143411150(param_1);
    }
    *(double *)(param_1 + 8) = dVar3 + (double)param_3;
    *param_1 = 3;
    if (local_58[0] < 5) {
      return;
    }
  }
  FUN_143411150(local_58);
  return;
}



// FUNCTION 143413680 FUN_143413680 body=78 status=ok
// SIG undefined FUN_143413680(void)

void FUN_143413680(byte *param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_143411a90();
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *param_1 = 3;
  *(double *)(param_1 + 8) = dVar1 - (double)param_3;
  return;
}



// FUNCTION 1434136e0 FUN_1434136e0 body=701 status=ok
// SIG undefined FUN_1434136e0(void)

void FUN_1434136e0(byte *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong local_res20;
  longlong local_98;
  longlong local_90;
  byte local_88 [8];
  longlong local_80;
  byte local_68 [32];
  byte local_48 [48];
  
  local_88[0] = 0;
  local_68[0] = 0;
  uVar7 = FUN_143412550(param_1,local_48,param_2,0);
  FUN_143411240(local_88,uVar7);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  uVar7 = FUN_143412550(param_3,local_48,param_2,0);
  FUN_143411240(local_68,uVar7);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  bVar6 = local_68[0];
  bVar8 = local_88[0];
  if ((local_88[0] == 5) || (local_68[0] == 5)) {
    bVar8 = *(byte *)(param_2 + 0xf0);
    if ((local_88[0] == 0) || (local_88[0] == 10)) {
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
      if (bVar8 - 1 < 6) {
        local_80 = *(longlong *)(lVar3 + 0x138);
      }
      else {
        local_80 = *(longlong *)(lVar3 + 0x2d0);
      }
      *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + 1;
    }
    else {
      FUN_143411540(local_88,&local_res20,param_2,0xffffffff,0);
      local_80 = local_res20;
    }
    FUN_143411150(local_88);
    iVar2 = *(int *)(local_80 + 0x18);
    local_88[0] = 5;
    *(int *)(local_80 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920(local_80);
    }
    if ((bVar6 == 0) || (bVar6 == 10)) {
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
      if (bVar8 - 1 < 6) {
        local_res20 = *(longlong *)(lVar3 + 0x138);
      }
      else {
        local_res20 = *(longlong *)(lVar3 + 0x2d0);
      }
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    }
    else {
      FUN_143411540(local_68,&local_res20,param_2,0xffffffff,0);
    }
    FUN_143411540(local_88,&local_98,param_2,0xffffffff,0);
    Scaleform::GFx::ASString::operator+(&local_98,&local_90,&local_res20);
    piVar1 = (int *)(local_98 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143411150(local_88);
    bVar8 = 5;
    local_88[0] = 5;
    local_80 = local_90;
    *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + 1;
    piVar1 = (int *)(local_90 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143411540(local_88,&local_res20,param_2,0xffffffff,0);
    if (4 < *param_1) {
      FUN_143411150(param_1);
    }
    *param_1 = 5;
    *(longlong *)(param_1 + 8) = local_res20;
    iVar2 = *(int *)(local_res20 + 0x18);
    *(int *)(local_res20 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    dVar5 = (double)FUN_143411a90(local_68,param_2);
    dVar4 = (double)FUN_143411a90(local_88,param_2);
    if (4 < *param_1) {
      FUN_143411150(param_1);
    }
    *(double *)(param_1 + 8) = dVar5 + dVar4;
    *param_1 = 3;
  }
  if (4 < bVar6) {
    FUN_143411150(local_68);
  }
  if (4 < bVar8) {
    FUN_143411150(local_88);
  }
  return;
}



// FUNCTION 1434139b0 FUN_1434139b0 body=107 status=ok
// SIG undefined FUN_1434139b0(void)

void FUN_1434139b0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_143411a90();
  dVar2 = (double)FUN_143411a90(param_3,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *param_1 = 3;
  *(double *)(param_1 + 8) = dVar1 - dVar2;
  return;
}



// FUNCTION 143413a30 FUN_143413a30 body=107 status=ok
// SIG undefined FUN_143413a30(void)

void FUN_143413a30(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)FUN_143411a90();
  dVar1 = (double)FUN_143411a90(param_3,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *param_1 = 3;
  *(double *)(param_1 + 8) = dVar1 * dVar2;
  return;
}



// FUNCTION 143413ab0 FUN_143413ab0 body=236 status=ok
// SIG undefined FUN_143413ab0(void)

void FUN_143413ab0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_143411a90();
  dVar2 = (double)FUN_143411a90(param_3,param_2);
  if (((((uint)((ulonglong)dVar1 >> 0x20) & 0x7ff00000) == 0x7ff00000) &&
      (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) ||
     ((((uint)((ulonglong)dVar2 >> 0x20) & 0x7ff00000) == 0x7ff00000 &&
      (((ulonglong)dVar2 & 0xfffffffffffff) != 0)))) {
    dVar1 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (dVar2 == 0.0) {
    if (dVar1 == 0.0) {
      dVar1 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else if (dVar1 < 0.0) {
      dVar1 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      dVar1 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
  }
  else {
    dVar1 = dVar1 / dVar2;
  }
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(double *)(param_1 + 8) = dVar1;
  *param_1 = 3;
  return;
}



// FUNCTION 143413bb0 FUN_143413bb0 body=122 status=ok
// SIG undefined FUN_143413bb0(void)

void FUN_143413bb0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong local_res8;
  longlong local_res20;
  
  FUN_143411540(param_1,&local_res8,param_2,0xffffffff,0);
  Scaleform::GFx::ASString::operator+(&local_res8,&local_res20,param_3);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411150(param_1);
  *param_1 = 5;
  *(longlong *)(param_1 + 8) = local_res20;
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143413c30 FUN_143413c30 body=253 status=ok
// SIG undefined FUN_143413c30(void)

undefined8 FUN_143413c30(char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  byte local_68 [32];
  undefined **local_48;
  byte *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*param_1 == '\t') && (param_2 != (longlong *)0x0)) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      local_40 = local_68;
      local_68[0] = 0;
      local_48 = &PTR_FUN_145b0ab98;
      local_20 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_10 = 0;
      local_38 = param_3;
      local_18 = param_2;
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x50))
                (*(longlong **)(lVar1 + 0x20),&local_48,*(undefined8 *)(lVar1 + 0x28),0);
      local_48 = &PTR_FUN_145b0ab98;
      FUN_14349ebc0(&local_30);
      FUN_143411240(param_4,local_68);
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
      return 1;
    }
    cVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (cVar2 != '\0') {
      FUN_1434171c0(param_2,"Getter method is null.");
    }
  }
  return 0;
}



// FUNCTION 143413d40 FUN_143413d40 body=360 status=ok
// SIG undefined FUN_143413d40(void)

void FUN_143413d40(char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  byte local_68 [32];
  undefined **local_48;
  byte *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  longlong *local_18;
  undefined4 local_10;
  int local_c;
  
  if ((*param_1 == '\t') && (param_2 != (longlong *)0x0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) == 0) {
      cVar2 = (**(code **)(*param_2 + 8))(param_2);
      if (cVar2 != '\0') {
        FUN_1434171c0(param_2,"Setter method is null.");
      }
    }
    else {
      param_2[1] = param_2[1] + 0x20;
      local_68[0] = 0;
      if ((ulonglong)param_2[3] <= (ulonglong)param_2[1]) {
        FUN_1434a29d0(param_2 + 1);
      }
      if (param_2[1] != 0) {
        FUN_143410ec0(param_2[1],param_4);
      }
      local_40 = local_68;
      local_48 = &PTR_FUN_145b0ab98;
      local_20 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_10 = 1;
      local_c = (int)param_2[6] * 0x20 + -0x20 + (int)(param_2[1] - param_2[2] >> 5);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x38);
      local_38 = param_3;
      local_18 = param_2;
      (**(code **)(*plVar1 + 0x50))
                (plVar1,&local_48,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40),0);
      local_48 = &PTR_FUN_145b0ab98;
      FUN_14349ebc0(&local_30);
      if (4 < *(byte *)param_2[1]) {
        FUN_143411150();
      }
      param_2[1] = param_2[1] + -0x20;
      if ((ulonglong)param_2[1] < (ulonglong)param_2[2]) {
        FUN_1434a25c0(param_2 + 1);
      }
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
    }
  }
  return;
}



// FUNCTION 143413eb0 FUN_143413eb0 body=101 status=ok
// SIG undefined FUN_143413eb0(void)

longlong FUN_143413eb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                      (*(longlong *)(param_1 + 8),
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10));
    if (lVar1 != 0) {
      return *(longlong *)(param_1 + 8) + 0x18;
    }
  }
  return *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x138;
}



// FUNCTION 143413f20 FUN_143413f20 body=253 status=ok
// SIG undefined FUN_143413f20(void)

longlong * FUN_143413f20(char *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  if ((param_3 == 0) || (*param_1 != '\v')) {
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0xe8) + 0x28) + 0x18) + 0x138);
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar2 = *(longlong *)(param_1 + 8);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_res18[0] = lVar2;
    lVar3 = FUN_14341c3e0(*(undefined8 *)(param_3 + 0xe8),local_res18);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = lVar3;
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    param_2[1] = 0;
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 143414030 ValueGuard body=147 status=ok
// SIG undefined ValueGuard(void)

longlong *
Scaleform::GFx::AS2::ValueGuard::ValueGuard(longlong *param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  FUN_143410ec0(param_1 + 1,param_3);
  if (*param_3 == '\a') {
    if (((*param_1 == 0) || (*(longlong *)(param_3 + 8) == 0)) ||
       (lVar1 = CharacterHandle::ResolveCharacter
                          (*(longlong *)(param_3 + 8),
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(*param_1 + 0xe0) + 0x20) + 0x10)),
       lVar1 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      if (*(char *)(lVar1 + 0x6a) < '\0') {
        lVar2 = lVar1;
      }
    }
    param_1[5] = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      return param_1;
    }
  }
  else {
    param_1[5] = 0;
  }
  return param_1;
}



// FUNCTION 1434140d0 FUN_1434140d0 body=49 status=ok
// SIG undefined FUN_1434140d0(void)

void FUN_1434140d0(longlong param_1)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x28) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x28));
  }
  if (4 < *(byte *)(param_1 + 8)) {
    FUN_143411150(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 143414110 FUN_143414110 body=169 status=ok
// SIG undefined FUN_143414110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143414110(longlong *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_143411240(param_1 + 1);
  if ((RefCountNTSImpl *)param_1[5] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[5]);
  }
  if (*param_2 == '\a') {
    if ((*param_1 != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                        (*(longlong *)(param_2 + 8),
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(*param_1 + 0xe0) + 0x20) + 0x10));
      if (lVar1 != 0) {
        lVar2 = 0;
        if (*(char *)(lVar1 + 0x6a) < '\0') {
          lVar2 = lVar1;
        }
        param_1[5] = lVar2;
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        return param_1;
      }
    }
    param_1[5] = 0;
    _DAT_00000008 = _DAT_00000008 + 1;
    return param_1;
  }
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1434141c0 FUN_1434141c0 body=72 status=ok
// SIG undefined FUN_1434141c0(void)

longlong FUN_1434141c0(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(int *)(param_1 + 0x3c) - param_2;
  if (uVar2 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
    return (ulonglong)(uVar2 & 0x1f) * 0x20 +
           *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
  }
  return 0;
}



// FUNCTION 143414210 FUN_143414210 body=21 status=ok
// SIG undefined FUN_143414210(void)

void FUN_143414210(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014341421e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
  return;
}



// FUNCTION 143414280 CheckThisPtr body=43 status=ok
// SIG undefined CheckThisPtr(void)

undefined8 Scaleform::GFx::AS2::FnCall::CheckThisPtr(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == param_2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1434142c0 ThisPtrError body=19 status=ok
// SIG undefined ThisPtrError(void)

void Scaleform::GFx::AS2::FnCall::ThisPtrError(longlong param_1,undefined8 param_2)

{
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",param_2);
  return;
}



// FUNCTION 143414300 FUN_143414300 body=165 status=ok
// SIG undefined FUN_143414300(void)

void FUN_143414300(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_145b0aba8;
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      Scaleform::GFx::ASUserData::SetLastObjectValue(puVar1[1],0,0,0);
      (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],*puVar1,param_1);
      puVar1[1] = 0;
    }
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        Scaleform::GFx::ASUserData::SetLastObjectValue(*(longlong *)(lVar2 + 8),0,0,0);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  return;
}



// FUNCTION 1434143b0 ToCharacter body=41 status=ok
// SIG undefined ToCharacter(void)

longlong Scaleform::GFx::AS2::ObjectInterface::ToCharacter(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 - 2U < 4) {
    return param_1[3];
  }
  return 0;
}



// FUNCTION 1434143e0 ToAvmCharacter body=41 status=ok
// SIG undefined ToAvmCharacter(void)

longlong * Scaleform::GFx::AS2::ObjectInterface::ToAvmCharacter(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 - 2U < 4) {
    return param_1 + -1;
  }
  return (longlong *)0x0;
}



// FUNCTION 143414410 ToASObject body=41 status=ok
// SIG undefined ToASObject(void)

longlong * Scaleform::GFx::AS2::ObjectInterface::ToASObject(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 - 6U < 0x27) {
    return param_1 + -4;
  }
  return (longlong *)0x0;
}



// FUNCTION 143414440 FUN_143414440 body=38 status=ok
// SIG undefined FUN_143414440(void)

longlong FUN_143414440(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 2) {
    return param_1[3];
  }
  return 0;
}



// FUNCTION 143414470 FUN_143414470 body=38 status=ok
// SIG undefined FUN_143414470(void)

longlong * FUN_143414470(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 2) {
    return param_1 + -1;
  }
  return (longlong *)0x0;
}



// FUNCTION 1434144c0 ToCharacter body=41 status=ok
// SIG undefined ToCharacter(void)

longlong Scaleform::GFx::AS2::ObjectInterface::ToCharacter(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 - 2U < 4) {
    return param_1[3];
  }
  return 0;
}



// FUNCTION 1434144f0 ToAvmCharacter body=41 status=ok
// SIG undefined ToAvmCharacter(void)

longlong * Scaleform::GFx::AS2::ObjectInterface::ToAvmCharacter(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 - 2U < 4) {
    return param_1 + -1;
  }
  return (longlong *)0x0;
}



// FUNCTION 143414520 ToASObject body=41 status=ok
// SIG undefined ToASObject(void)

longlong * Scaleform::GFx::AS2::ObjectInterface::ToASObject(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 - 6U < 0x27) {
    return param_1 + -4;
  }
  return (longlong *)0x0;
}



// FUNCTION 143414550 FUN_143414550 body=38 status=ok
// SIG undefined FUN_143414550(void)

longlong FUN_143414550(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 2) {
    return param_1[3];
  }
  return 0;
}



// FUNCTION 143414580 FUN_143414580 body=38 status=ok
// SIG undefined FUN_143414580(void)

longlong * FUN_143414580(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 2) {
    return param_1 + -1;
  }
  return (longlong *)0x0;
}



// FUNCTION 1434145b0 FUN_1434145b0 body=126 status=ok
// SIG undefined FUN_1434145b0(void)

longlong * FUN_1434145b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_1 != (longlong *)0x0) {
    do {
      cVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,0);
      if (cVar2 != '\0') {
        if (param_1 != (longlong *)0x0) {
          return param_1 + -4;
        }
        return (longlong *)0x0;
      }
      plVar1 = param_1 + 2;
      param_1 = (longlong *)(*plVar1 + 0x20);
      if (*plVar1 == 0) {
        param_1 = (longlong *)0x0;
      }
    } while (param_1 != (longlong *)0x0);
  }
  return (longlong *)0x0;
}



// FUNCTION 143414640 FUN_143414640 body=293 status=ok
// SIG undefined FUN_143414640(void)

void FUN_143414640(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  
  puVar1 = (undefined8 *)param_1[1];
  plVar6 = (longlong *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      Scaleform::GFx::ASUserData::SetLastObjectValue(puVar1[1],0,0,0);
      (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],*puVar1,param_1);
      puVar1[1] = 0;
    }
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        Scaleform::GFx::ASUserData::SetLastObjectValue(*(longlong *)(lVar2 + 8),0,0,0);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  local_res8[0] = 0x143;
  plVar4 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,local_res8);
  plVar5 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_2;
    plVar4[1] = param_3;
    plVar5 = plVar4;
  }
  param_1[1] = (longlong)plVar5;
  if (param_3 != 0) {
    if (param_4 == '\0') {
      param_4 = '\0';
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      if (iVar3 - 2U < 4) {
        plVar6 = (longlong *)param_1[3];
      }
      param_1 = (longlong *)plVar6[0xe];
      if (param_1 == (longlong *)0x0) {
        param_1 = (longlong *)FUN_14336c170(plVar6);
      }
    }
    Scaleform::GFx::ASUserData::SetLastObjectValue
              (param_3,*(undefined8 *)(param_2 + 0x40),param_1,param_4);
  }
  return;
}



// FUNCTION 143414770 FUN_143414770 body=160 status=ok
// SIG undefined FUN_143414770(void)

undefined8 * FUN_143414770(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x28), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x38) + 0x20);
  }
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  lVar1 = param_1[6];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 143414820 FUN_143414820 body=134 status=ok
// SIG undefined FUN_143414820(void)

undefined8 * FUN_143414820(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x28), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x38) + 0x20);
  }
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 1434148b0 FUN_1434148b0 body=199 status=ok
// SIG undefined FUN_1434148b0(void)

undefined8 * FUN_1434148b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)(param_2 + 0xe0);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x20) + 0x38) + 0x20);
  }
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  uVar2 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),1);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar2);
  return param_1;
}



// FUNCTION 143414980 FUN_143414980 body=125 status=ok
// SIG undefined FUN_143414980(void)

void FUN_143414980(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xb];
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  if (lVar1 != 0) {
    FUN_1434979f0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 8);
  FUN_143497ba0(param_1 + 7);
  FUN_143414300(param_1 + 4);
  *param_1 = &PTR_StartProfileThreadUsage_145b0ab30;
  return;
}



// FUNCTION 143414a10 FUN_143414a10 body=1486 status=ok
// SIG undefined FUN_143414a10(void)

undefined1
FUN_143414a10(longlong *param_1,longlong param_2,longlong *param_3,byte *param_4,byte *param_5)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 uVar6;
  RefCountNTSImpl *this;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  byte *pbVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  byte local_res8 [8];
  longlong *local_res10;
  undefined1 local_a8 [16];
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  byte local_68;
  byte local_58 [32];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b745c4) && (_Init_thread_header(&DAT_146b745c4), DAT_146b745c4 == -1))
  {
    atexit((_func_5014 *)&LAB_143ec4cc0);
    _Init_thread_footer(&DAT_146b745c4);
  }
  local_a8._0_8_ = param_1 + 3;
  local_res8[0] = 0;
  if (*(byte *)(param_2 + 0xf0) < 7) {
    local_res10 = param_3;
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*(longlong *)local_a8._0_8_ != 0) {
      local_a8._8_8_ =
           FUN_143493d80(local_a8._0_8_,&local_res10,
                         (ulonglong)*(uint *)(*param_3 + 0x1c) &
                         *(ulonglong *)(*(longlong *)local_a8._0_8_ + 8));
      goto LAB_143414ac9;
    }
LAB_143414ad8:
    local_a8._0_8_ = (longlong *)0x0;
    local_a8._8_8_ = 0;
  }
  else {
    if (*(longlong *)local_a8._0_8_ == 0) goto LAB_143414ad8;
    local_a8._8_8_ =
         FUN_1434940d0(local_a8._0_8_,param_3,
                       (ulonglong)*(uint *)(*param_3 + 0x1c) &
                       *(ulonglong *)(*(longlong *)local_a8._0_8_ + 8));
LAB_143414ac9:
    if ((longlong)local_a8._8_8_ < 0) goto LAB_143414ad8;
  }
  plVar12 = (longlong *)local_a8._0_8_;
  if ((((longlong *)local_a8._0_8_ == (longlong *)0x0) || (*(longlong *)local_a8._0_8_ == 0)) ||
     (*(longlong *)(*(longlong *)local_a8._0_8_ + 8) < (longlong)local_a8._8_8_)) {
    for (lVar7 = param_1[2]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (*(char *)(lVar7 + 0x60) != '\0') {
        plVar11 = (longlong *)(lVar7 + 0x38);
        if (*(byte *)(param_2 + 0xf0) < 7) {
          local_res10 = param_3;
          if (*(longlong *)(*param_3 + 0x10) == 0) {
            FUN_14335f970();
          }
          if ((*plVar11 == 0) ||
             (lStack_80 = FUN_143493d80(plVar11,&local_res10,
                                        (ulonglong)*(uint *)(*param_3 + 0x1c) &
                                        *(ulonglong *)(*plVar11 + 8)), lStack_80 < 0)) {
            local_88 = (longlong *)0x0;
            lStack_80 = 0;
          }
          else {
            local_88 = plVar11;
          }
          pauVar9 = (undefined1 (*) [16])&local_88;
        }
        else if ((*plVar11 == 0) ||
                (lStack_90 = FUN_1434940d0(plVar11,param_3,
                                           (ulonglong)*(uint *)(*param_3 + 0x1c) &
                                           *(ulonglong *)(*plVar11 + 8)), lStack_90 < 0)) {
          pauVar9 = (undefined1 (*) [16])&local_98;
          local_98 = (longlong *)0x0;
          lStack_90 = 0;
        }
        else {
          local_98 = plVar11;
          pauVar9 = (undefined1 (*) [16])&local_98;
        }
        local_78 = *pauVar9;
        plVar11 = local_78._0_8_;
        if (((plVar11 != (longlong *)0x0) && (lVar2 = *plVar11, lVar2 != 0)) &&
           ((longlong)local_78._8_8_ <= *(longlong *)(lVar2 + 8))) {
          if (*(char *)(lVar2 + 0x20 + local_78._8_8_ * 0x30) == '\t') {
            plVar12 = plVar11;
            local_a8 = local_78;
          }
          break;
        }
      }
    }
  }
  plVar11 = (longlong *)0x0;
  if (((plVar12 == (longlong *)0x0) || (lVar7 = *plVar12, lVar7 == 0)) ||
     (*(longlong *)(lVar7 + 8) < (longlong)local_a8._8_8_)) {
    local_res8[0] = *param_5;
    plVar12 = plVar11;
  }
  else {
    plVar12 = (longlong *)(local_a8._8_8_ * 0x30 + 0x20 + lVar7);
    local_res8[0] = *(byte *)((longlong)plVar12 + 1);
    if ((local_res8[0] & 4) != 0) {
      return 0;
    }
    if ((char)*plVar12 == '\t') {
      FUN_143410ec0(local_78,plVar12);
      this = (RefCountNTSImpl *)(**(code **)(param_1[-4] + 0x38))(param_1 + -4);
      if (this == (RefCountNTSImpl *)0x0) {
        if (param_1 + -4 == (longlong *)0x0) {
          param_1 = plVar11;
        }
        FUN_143413d40(local_78,param_2,param_1,param_4);
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        lVar7 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                          (this + (ulonglong)(byte)this[0x6d] * 4);
        plVar12 = (longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
          plVar12 = plVar11;
        }
        FUN_143413d40(local_78,param_2,plVar12,param_4);
        Scaleform::RefCountNTSImpl::Release(this);
      }
      if (4 < local_78[0]) {
        FUN_143411150(local_78);
      }
      return 1;
    }
  }
  local_58[0] = 0;
  pbVar10 = param_4;
  if (param_1[7] != 0) {
    cVar5 = FUN_143415e30(param_1 + -4,param_2,param_3,param_4,local_58);
    pbVar10 = local_58;
    if (cVar5 == '\0') {
      pbVar10 = param_4;
    }
  }
  if (plVar12 == (longlong *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xe8,param_3,pbVar10,local_res8);
    goto LAB_143414f7b;
  }
  if (*param_4 == 9) {
    *(char *)(param_1 + 8) = '\x01';
  }
  if (*(byte *)(param_2 + 0xf0) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
    lVar2 = *(longlong *)(*param_3 + 0x10);
    if (*(longlong *)(*(longlong *)(lVar7 + 0x3a8) + 0x10) == lVar2) goto LAB_143414e72;
    if (*(longlong *)(*(longlong *)(lVar7 + 0x3c8) + 0x10) == lVar2) {
      if (*param_4 != 10) {
        uVar8 = Scaleform::GFx::AS2::Value::ToFunction(param_4,local_78,param_2);
        FUN_143410a60(param_1 + 4,uVar8);
        if ((((local_68 & 2) == 0) && (local_78._0_8_ != 0)) &&
           ((*(uint *)(local_78._0_8_ + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(local_78._0_8_ + 0x18) = *(uint *)(local_78._0_8_ + 0x18) - 1;
          FUN_1434a2b80();
        }
        uVar8 = local_78._8_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_78._8_8_;
        local_78 = auVar4 << 0x40;
        if ((((local_68 & 1) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0))
        {
          *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
          FUN_1434a2b80();
        }
      }
      goto LAB_143414f3e;
    }
    bVar13 = *param_3 == *(longlong *)(lVar7 + 0x468);
LAB_143414f4e:
    if ((bVar13) && (*(longlong *)(param_2 + 0xe0) != 0)) {
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10) +
                       0x52f0);
      *puVar1 = *puVar1 | 0x80000;
    }
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
    lVar2 = *param_3;
    if (lVar2 == *(longlong *)(lVar7 + 0x3a8)) {
LAB_143414e72:
      if (*param_4 != 10) {
        lVar7 = *param_1;
        uVar8 = FUN_143412120(param_4,param_2);
        (**(code **)(lVar7 + 0x68))(param_1,param_2 + 0xe8,uVar8);
        if (*(longlong *)(param_2 + 0xe0) != 0) {
          puVar1 = (uint *)(*(longlong *)
                             (*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10) + 0x52f0);
          *puVar1 = *puVar1 | 0x80000;
        }
      }
      pbVar10 = &DAT_1467cf7c8;
    }
    else {
      if (lVar2 != *(longlong *)(lVar7 + 0x3c8)) {
        bVar13 = lVar2 == *(longlong *)(lVar7 + 0x468);
        goto LAB_143414f4e;
      }
      if (*param_4 != 10) {
        uVar8 = Scaleform::GFx::AS2::Value::ToFunction(param_4,local_78,param_2);
        FUN_143410a60(param_1 + 4,uVar8);
        if ((((local_68 & 2) == 0) && (local_78._0_8_ != 0)) &&
           ((*(uint *)(local_78._0_8_ + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(local_78._0_8_ + 0x18) = *(uint *)(local_78._0_8_ + 0x18) - 1;
          FUN_1434a2b80();
        }
        uVar8 = local_78._8_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_78._8_8_;
        local_78 = auVar3 << 0x40;
        if ((((local_68 & 1) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0))
        {
          *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
          FUN_1434a2b80();
          pbVar10 = &DAT_1467cf7c8;
          goto LAB_143414f6e;
        }
      }
LAB_143414f3e:
      pbVar10 = &DAT_1467cf7c8;
    }
  }
LAB_143414f6e:
  FUN_143411240(plVar12,pbVar10);
  uVar6 = 1;
LAB_143414f7b:
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  return uVar6;
}



// FUNCTION 143414ff0 GetMember body=14 status=ok
// SIG undefined GetMember(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::XmlObject,Scaleform::GFx::AS2::Environment>
     ::GetMember(longlong *param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143414ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8);
  return;
}



// FUNCTION 143415040 FUN_143415040 body=283 status=ok
// SIG undefined FUN_143415040(void)

undefined8 FUN_143415040(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *local_res8;
  longlong *local_18;
  longlong lStack_10;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    local_res8 = param_3;
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*plVar1 != 0) {
      lStack_10 = FUN_143493d80(plVar1,&local_res8,
                                (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(*plVar1 + 8))
      ;
      goto LAB_1434150b3;
    }
  }
  else if (*plVar1 != 0) {
    lStack_10 = FUN_1434940d0(plVar1,param_3,
                              (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(*plVar1 + 8));
LAB_1434150b3:
    local_18 = plVar1;
    if (-1 < lStack_10) goto LAB_1434150cd;
  }
  local_18 = (longlong *)0x0;
  lStack_10 = 0;
LAB_1434150cd:
  if ((((local_18 != (longlong *)0x0) && (lVar3 = *local_18, lVar3 != 0)) &&
      (lStack_10 <= *(longlong *)(lVar3 + 8))) &&
     ((*(byte *)(lStack_10 * 0x30 + lVar3 + 0x21) & 2) == 0)) {
    lVar3 = *(longlong *)(*param_2 + 0x28);
    if ((*param_3 == *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x468)) && (*param_2 != 0)) {
      puVar2 = (uint *)(lVar3 + 0x52f0);
      *puVar2 = *puVar2 | 0x80000;
    }
    FUN_143490e70(plVar1,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 143415170 FUN_143415170 body=126 status=ok
// SIG undefined FUN_143415170(void)

bool FUN_143415170(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 local_38;
  undefined2 *local_30;
  undefined2 local_28;
  
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    local_28 = CONCAT11(param_4,(byte)local_28);
    local_30 = &local_28;
    local_38 = param_3;
    FUN_143490f90(param_1 + 3,param_1 + 3,&local_38);
  }
  if (4 < (byte)local_28) {
    FUN_143411150(&local_28);
  }
  return cVar1 != '\0';
}



// FUNCTION 143415200 FUN_143415200 body=527 status=ok
// SIG undefined FUN_143415200(void)

void FUN_143415200(longlong *param_1,undefined8 param_2,longlong *param_3,uint param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_48;
  ulonglong uStack_40;
  
  local_48 = param_1 + 3;
  uVar6 = 0;
  lVar2 = *local_48;
  if (lVar2 == 0) {
    local_48 = (longlong *)0x0;
    uVar6 = 0;
    uStack_40 = uVar6;
    plVar7 = local_48;
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      uStack_40 = uVar6;
      plVar7 = local_48;
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 6;
      uStack_40 = uVar6;
    } while (uVar6 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar6)) {
        if (((param_4 & 1) != 0) && (lVar2 = param_1[2], lVar2 != 0)) {
          if ((param_5 == (longlong *)0x0) &&
             (param_5 = (longlong *)0x0, param_1 != (longlong *)&DAT_00000020)) {
            param_5 = param_1;
          }
          (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x40))
                    (lVar2 + 0x20,param_2,param_3,param_4,param_5);
        }
        return;
      }
      lVar5 = uVar6 * 0x30;
      lVar1 = lVar5 + lVar2;
      if (((*(byte *)(lVar5 + 0x21 + lVar2) & 1) == 0) || ((param_4 & 4) != 0)) {
        if (*(char *)(lVar1 + 0x20) == '\n') {
          local_48 = (longlong *)((ulonglong)local_48 & 0xffffffffffffff00);
          if ((param_4 & 8) == 0) {
            plVar4 = param_5;
            if ((param_5 == (longlong *)0x0) &&
               (plVar4 = (longlong *)0x0, param_1 != (longlong *)&DAT_00000020)) {
              plVar4 = param_1;
            }
            (**(code **)(*plVar4 + 0x58))(plVar4,param_2,lVar1 + 0x18,&local_48);
          }
          (**(code **)(*param_3 + 8))(param_3,*plVar7 + 0x18 + lVar5,&local_48);
          if (4 < (byte)local_48) {
            FUN_143411150(&local_48);
          }
        }
        else {
          (**(code **)(*param_3 + 8))(param_3,lVar1 + 0x18,lVar1 + 0x20);
        }
      }
      uVar3 = *(ulonglong *)(*plVar7 + 8);
    } while (((longlong)uVar3 < (longlong)uVar6) || (uVar6 = uVar6 + 1, uVar3 < uVar6));
    plVar4 = (longlong *)(uVar6 * 0x30 + 0x10 + *plVar7);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 6;
    } while (uVar6 <= uVar3);
  } while( true );
}



// FUNCTION 143415420 FUN_143415420 body=220 status=ok
// SIG undefined FUN_143415420(void)

ulonglong FUN_143415420(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  byte bVar3;
  undefined2 local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_38 = 0;
  bVar3 = 0;
  if ((lVar2 != 0) &&
     (in_RAX = FUN_1434940d0(param_1 + 0x18,param_3,
                             (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
     -1 < (longlong)in_RAX)) {
    in_RAX = in_RAX * 0x30;
    lVar2 = lVar2 + 0x18 + in_RAX;
    if (lVar2 != 0) {
      FUN_143411240(&local_38,lVar2 + 8);
      bVar1 = 1;
      local_38 = CONCAT11(*(undefined1 *)(lVar2 + 9),(byte)local_38);
      bVar3 = (byte)local_38;
      goto LAB_1434154cc;
    }
  }
  if ((param_4 == '\0') || (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  bVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x48))(lVar2 + 0x20,param_2,param_3,1);
LAB_1434154cc:
  if (4 < bVar3) {
    FUN_143411150(&local_38);
  }
  return (ulonglong)bVar1;
}



// FUNCTION 143415510 FUN_143415510 body=938 status=ok
// SIG undefined FUN_143415510(void)

undefined8
FUN_143415510(longlong *param_1,longlong *param_2,longlong *param_3,char *param_4,
             undefined1 *param_5)

{
  uint *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *local_res8;
  longlong *local_68;
  byte *pbStack_60;
  byte local_58;
  byte local_48;
  undefined1 local_47;
  
  if ((((*(char *)((longlong)param_1 + 0x41) == '\0') && (*param_4 == '\x06')) &&
      (*param_3 == *(longlong *)(*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3c0))) &&
     ((lVar6 = FUN_143412120(param_4,0), lVar6 != 0 &&
      (iVar5 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x10))(lVar6 + 0x20), iVar5 == 7)))) {
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  }
  lVar6 = *param_3;
  pcVar8 = param_4;
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar6 = *(longlong *)(*param_2 + 0x28);
    lVar3 = *(longlong *)(*param_3 + 0x10);
    lVar4 = *(longlong *)(lVar6 + 0x18);
    if (*(longlong *)(*(longlong *)(lVar4 + 0x3a8) + 0x10) == lVar3) {
      if (*param_4 != '\n') {
        lVar6 = *param_1;
        uVar7 = FUN_143412120(param_4,0);
        (**(code **)(lVar6 + 0x68))(param_1,param_2,uVar7);
        if (*param_2 != 0) {
          puVar1 = (uint *)(*(longlong *)(*param_2 + 0x28) + 0x52f0);
          *puVar1 = *puVar1 | 0x80000;
        }
      }
      pcVar8 = &DAT_1467cf6e0;
    }
    else if (*(longlong *)(*(longlong *)(lVar4 + 0x3c8) + 0x10) == lVar3) {
      if (*param_4 != '\n') {
        uVar7 = Scaleform::GFx::AS2::Value::ToFunction(param_4,&local_68,0);
        FUN_143410a60(param_1 + 4,uVar7);
        if ((((local_58 & 2) == 0) && (local_68 != (longlong *)0x0)) &&
           ((*(uint *)(local_68 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_68 + 3) = *(uint *)(local_68 + 3) - 1;
          FUN_1434a2b80();
        }
        local_68 = (longlong *)0x0;
        if ((((local_58 & 1) == 0) && (pbStack_60 != (byte *)0x0)) &&
           ((*(uint *)((longlong)pbStack_60 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)((longlong)pbStack_60 + 0x18) = *(uint *)((longlong)pbStack_60 + 0x18) - 1;
          FUN_1434a2b80();
        }
      }
      pcVar8 = &DAT_1467cf6e0;
    }
    else if ((*param_3 == *(longlong *)(lVar4 + 0x468)) && (*param_2 != 0)) {
      puVar1 = (uint *)(lVar6 + 0x52f0);
      *puVar1 = *puVar1 | 0x80000;
    }
    local_res8 = param_3;
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (param_1[3] != 0) {
      pbStack_60 = (byte *)FUN_143493d80(param_1 + 3,&local_res8,
                                         (ulonglong)*(uint *)(*param_3 + 0x1c) &
                                         *(ulonglong *)(param_1[3] + 8));
      goto LAB_1434157fe;
    }
  }
  else {
    lVar3 = *(longlong *)(*param_2 + 0x28);
    lVar4 = *(longlong *)(lVar3 + 0x18);
    if (lVar6 == *(longlong *)(lVar4 + 0x3a8)) {
      if (*param_4 != '\n') {
        lVar6 = *param_1;
        uVar7 = FUN_143412120(param_4,0);
        (**(code **)(lVar6 + 0x68))(param_1,param_2,uVar7);
        if (*param_2 != 0) {
          puVar1 = (uint *)(*(longlong *)(*param_2 + 0x28) + 0x52f0);
          *puVar1 = *puVar1 | 0x80000;
        }
      }
      pcVar8 = &DAT_1467cf6e0;
    }
    else if (lVar6 == *(longlong *)(lVar4 + 0x3c8)) {
      if (*param_4 != '\n') {
        uVar7 = Scaleform::GFx::AS2::Value::ToFunction(param_4,&local_68,0);
        FUN_143410a60(param_1 + 4,uVar7);
        if ((((local_58 & 2) == 0) && (local_68 != (longlong *)0x0)) &&
           ((*(uint *)(local_68 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_68 + 3) = *(uint *)(local_68 + 3) - 1;
          FUN_1434a2b80();
        }
        local_68 = (longlong *)0x0;
        if ((((local_58 & 1) == 0) && (pbStack_60 != (byte *)0x0)) &&
           ((*(uint *)((longlong)pbStack_60 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)((longlong)pbStack_60 + 0x18) = *(uint *)((longlong)pbStack_60 + 0x18) - 1;
          FUN_1434a2b80();
        }
      }
      pcVar8 = &DAT_1467cf6e0;
    }
    else if ((lVar6 == *(longlong *)(lVar4 + 0x468)) && (*param_2 != 0)) {
      puVar1 = (uint *)(lVar3 + 0x52f0);
      *puVar1 = *puVar1 | 0x80000;
    }
    if (param_1[3] != 0) {
      pbStack_60 = (byte *)FUN_1434940d0(param_1 + 3,param_3,
                                         (ulonglong)*(uint *)(*param_3 + 0x1c) &
                                         *(ulonglong *)(param_1[3] + 8));
LAB_1434157fe:
      local_68 = param_1 + 3;
      if (-1 < (longlong)pbStack_60) goto LAB_143415815;
    }
  }
  local_68 = (longlong *)0x0;
  pbStack_60 = (byte *)0x0;
LAB_143415815:
  if (*param_4 == '\t') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (((local_68 == (longlong *)0x0) || (lVar6 = *local_68, lVar6 == 0)) ||
     (*(longlong *)(lVar6 + 8) < (longlong)pbStack_60)) {
    uVar2 = *param_5;
    FUN_143410ec0(&local_48,pcVar8);
    pbStack_60 = &local_48;
    local_68 = param_3;
    local_47 = uVar2;
    FUN_143490f90(param_1 + 3,param_1 + 3,&local_68);
    if (4 < local_48) {
      FUN_143411150(&local_48);
    }
  }
  else {
    FUN_143411240(lVar6 + 0x20 + (longlong)pbStack_60 * 0x30,pcVar8);
  }
  return 1;
}



// FUNCTION 1434158c0 FUN_1434158c0 body=784 status=ok
// SIG undefined FUN_1434158c0(void)

undefined8 FUN_1434158c0(longlong param_1,longlong *param_2,ulonglong *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *local_res8;
  
  bVar5 = false;
  param_1 = param_1 + -0x20;
  lVar8 = param_1;
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    local_res8 = param_3;
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
      lVar4 = *(longlong *)(*param_3 + 0x10);
      if (*(longlong *)(*(longlong *)(lVar2 + 0x3a8) + 0x10) == lVar4) goto LAB_143415a90;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x3c8) + 0x10) == lVar4) goto LAB_143415a7b;
      if ((((*(longlong *)(lVar8 + 0x38) != 0) &&
           (uVar7 = FUN_143493d80(lVar8 + 0x38,&local_res8,
                                  (ulonglong)*(uint *)(*param_3 + 0x1c) &
                                  *(ulonglong *)(*(longlong *)(lVar8 + 0x38) + 8)),
           -1 < (longlong)uVar7)) && (*(longlong *)(lVar8 + 0x38) != 0)) &&
         ((longlong)uVar7 <= *(longlong *)(*(longlong *)(lVar8 + 0x38) + 8))) {
        lVar2 = *(longlong *)(lVar8 + 0x38);
LAB_143415a48:
        if ((*(char *)(lVar2 + 0x20 + uVar7 * 0x30) == '\n') && (lVar8 != param_1)) {
          uVar6 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x58))
                            (lVar8 + 0x20,param_2,param_3,param_4);
          return uVar6;
        }
        FUN_143411240(param_4);
        return 1;
      }
      if ((!bVar5) && (*(longlong *)(lVar8 + 0x40) != 0)) {
        FUN_143411150(param_4);
        *param_4 = 0xc;
        param_4[0x18] = 0;
        lVar2 = *(longlong *)(lVar8 + 0x40);
        *(longlong *)(param_4 + 8) = lVar2;
        if (lVar2 != 0) {
          *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
        }
        *(undefined8 *)(param_4 + 0x10) = 0;
        if (*(longlong *)(lVar8 + 0x48) != 0) {
          FUN_1434109d0(param_4 + 8,*(longlong *)(lVar8 + 0x48),*(byte *)(lVar8 + 0x50) & 1);
        }
        bVar5 = true;
      }
    }
  }
  else {
    for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      uVar1 = *param_3;
      lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
      if (uVar1 == *(ulonglong *)(lVar2 + 0x3a8)) goto LAB_143415a90;
      if (uVar1 == *(ulonglong *)(lVar2 + 0x3c8)) goto LAB_143415a7b;
      lVar2 = *(longlong *)(lVar8 + 0x38);
      if (lVar2 != 0) {
        uVar3 = *(ulonglong *)(lVar2 + 8);
        uVar10 = *(uint *)(uVar1 + 0x1c) & uVar3;
        puVar9 = (ulonglong *)(lVar2 + 0x10 + uVar10 * 0x30);
        if ((*puVar9 != 0xfffffffffffffffe) &&
           (uVar7 = uVar10, (*(uint *)(puVar9[1] + 0x1c) & uVar3) == uVar10)) {
          while (((*(uint *)(puVar9[1] + 0x1c) & uVar3) != uVar10 || (puVar9[1] != uVar1))) {
            uVar7 = *puVar9;
            if (uVar7 == 0xffffffffffffffff) goto LAB_1434159bc;
            puVar9 = (ulonglong *)(lVar2 + 0x10 + uVar7 * 0x30);
          }
          if ((-1 < (longlong)uVar7) && ((longlong)uVar7 <= (longlong)uVar3)) goto LAB_143415a48;
        }
      }
LAB_1434159bc:
      if ((!bVar5) && (*(longlong *)(lVar8 + 0x40) != 0)) {
        FUN_143411150(param_4);
        *param_4 = 0xc;
        param_4[0x18] = 0;
        lVar2 = *(longlong *)(lVar8 + 0x40);
        *(longlong *)(param_4 + 8) = lVar2;
        if (lVar2 != 0) {
          *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
        }
        *(undefined8 *)(param_4 + 0x10) = 0;
        if (*(longlong *)(lVar8 + 0x48) != 0) {
          FUN_1434109d0(param_4 + 8,*(longlong *)(lVar8 + 0x48),*(byte *)(lVar8 + 0x50) & 1);
        }
        bVar5 = true;
      }
    }
  }
  return 0;
LAB_143415a90:
  if (*(longlong *)(lVar8 + 0x30) != 0) {
    FUN_143412aa0(param_4);
    return 1;
  }
  goto LAB_143415aa8;
LAB_143415a7b:
  if (*(longlong *)(lVar8 + 0x40) != 0) {
    Scaleform::GFx::AS2::Value::SetAsFunction();
    return 1;
  }
LAB_143415aa8:
  FUN_143411150(param_4);
  *param_4 = 0;
  return 1;
}



// FUNCTION 143415c00 InstanceOf body=104 status=ok
// SIG undefined InstanceOf(void)

undefined8
Scaleform::GFx::AS2::Object::InstanceOf
          (longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)(param_1 + -0x20);
  do {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if (param_4 == '\0') {
      if (plVar1 == param_3) {
        return 1;
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    plVar1 = (longlong *)plVar1[6];
  } while( true );
}



// FUNCTION 143415c70 FUN_143415c70 body=187 status=ok
// SIG undefined FUN_143415c70(void)

undefined8
FUN_143415c70(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  byte local_30 [40];
  
  local_38 = 0;
  local_30[0] = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_143410a60(&local_48,param_4);
  FUN_143411240(local_30,param_5);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    puVar1 = (undefined8 *)
             (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                       (*(longlong **)(*param_2 + 0x30),8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
    }
    *(undefined8 **)(param_1 + 0x38) = puVar1;
  }
  FUN_1434a4300(*(undefined8 *)(param_1 + 0x38),param_3,&local_48,6 < *(byte *)(param_2 + 1));
  if (4 < local_30[0]) {
    FUN_143411150(local_30);
  }
  FUN_14349ebc0(&local_48);
  return 1;
}



// FUNCTION 143415d40 FUN_143415d40 body=219 status=ok
// SIG undefined FUN_143415d40(void)

undefined8 FUN_143415d40(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_res8;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_14349fe00(*(longlong *)(param_1 + 0x38),param_3,6 < *(byte *)(param_2 + 8));
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      if (*(byte *)(param_2 + 8) < 7) {
        local_res8 = param_3;
        if (*(longlong *)(*param_3 + 0x10) == 0) {
          FUN_14335f970();
        }
        FUN_143490870(uVar1,&local_res8);
      }
      else {
        FUN_143490c60(uVar1,param_3);
      }
      plVar2 = *(longlong **)(param_1 + 0x38);
      if (((longlong *)*plVar2 == (longlong *)0x0) || (*(longlong *)*plVar2 == 0)) {
        if (plVar2 != (longlong *)0x0) {
          FUN_1434979f0(plVar2);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar2);
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143415e30 FUN_143415e30 body=754 status=ok
// SIG undefined FUN_143415e30(void)

undefined8
FUN_143415e30(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  RefCountNTSImpl *this;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  byte local_a8 [32];
  undefined **local_88;
  byte *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  longlong local_58;
  undefined4 local_50;
  int local_4c;
  byte local_48 [32];
  
  plVar1 = param_1 + 4;
  local_48[0] = 0;
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3,local_48);
  plVar3 = (longlong *)param_1[0xb];
  lVar6 = 0;
  local_a8[0] = 0;
  if (*(byte *)(param_2 + 0xf0) < 7) {
    puVar8 = (undefined8 *)FUN_14349fe70(plVar3,param_3);
  }
  else {
    lVar4 = *plVar3;
    if ((lVar4 != 0) &&
       (lVar5 = FUN_143493fd0(plVar3,param_3,
                              (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar4 + 8)),
       -1 < lVar5)) {
      lVar6 = lVar4 + (lVar5 * 9 + 3) * 8;
    }
    puVar8 = (undefined8 *)(lVar6 + 8);
    if (lVar6 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  if ((puVar8 == (undefined8 *)0x0) || (param_1[0xb] == 0)) {
    uVar7 = 0;
    goto LAB_1434160c7;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  puVar2 = (ulonglong *)(param_2 + 8);
  if (*(ulonglong *)(param_2 + 0x18) <= *puVar2) {
    FUN_1434a29d0(puVar2);
  }
  if (*puVar2 != 0) {
    FUN_143410ec0(*puVar2,puVar8 + 3);
  }
  *puVar2 = *puVar2 + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *puVar2) {
    FUN_1434a29d0(puVar2);
  }
  if (*puVar2 != 0) {
    FUN_143410ec0(*puVar2,param_4);
  }
  *puVar2 = *puVar2 + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *puVar2) {
    FUN_1434a29d0(puVar2);
  }
  if (*puVar2 != 0) {
    FUN_143410ec0(*puVar2,local_48);
  }
  local_80 = (byte *)*param_3;
  local_88 = (undefined **)CONCAT71(local_88._1_7_,5);
  *(int *)((longlong)local_80 + 0x18) = *(int *)((longlong)local_80 + 0x18) + 1;
  *puVar2 = *puVar2 + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *puVar2) {
    FUN_1434a29d0(puVar2);
  }
  if (*puVar2 == 0) {
LAB_143415fa3:
    FUN_143411150(&local_88);
  }
  else {
    FUN_143410ec0(*puVar2,&local_88);
    if (4 < (byte)local_88) goto LAB_143415fa3;
  }
  this = (RefCountNTSImpl *)(**(code **)(*param_1 + 0x38))(param_1);
  if (this == (RefCountNTSImpl *)0x0) {
    local_4c = *(int *)(param_2 + 0x30) * 0x20 + -0x20 +
               (int)((longlong)(*puVar2 - *(longlong *)(param_2 + 0x10)) >> 5);
    local_78 = plVar1;
  }
  else {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    lVar6 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                      (this + (ulonglong)(byte)this[0x6d] * 4);
    local_4c = *(int *)(param_2 + 0x30) * 0x20 + -0x20 +
               (int)((longlong)(*puVar2 - *(longlong *)(param_2 + 0x10)) >> 5);
    local_78 = (longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
      local_78 = (longlong *)0x0;
    }
  }
  local_80 = local_a8;
  local_60 = 0;
  local_88 = &PTR_FUN_145b0ab98;
  local_70 = 0;
  uStack_68 = 0;
  iVar9 = 4;
  local_50 = 4;
  local_58 = param_2;
  (**(code **)(*(longlong *)*puVar8 + 0x50))((longlong *)*puVar8,&local_88,puVar8[1],0);
  local_88 = &PTR_FUN_145b0ab98;
  FUN_14349ebc0(&local_70);
  do {
    if (4 < *(byte *)*puVar2) {
      FUN_143411150();
    }
    *puVar2 = *puVar2 - 0x20;
    if (*puVar2 < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1434a25c0(puVar2);
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_143411240(param_5,local_a8);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  uVar7 = 1;
LAB_1434160c7:
  if (4 < local_a8[0]) {
    FUN_143411150(local_a8);
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  return uVar7;
}



// FUNCTION 143416140 FUN_143416140 body=126 status=ok
// SIG undefined FUN_143416140(void)

undefined8 * FUN_143416140(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  lVar1 = param_1[6];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 143416210 FUN_143416210 body=167 status=ok
// SIG undefined FUN_143416210(void)

void FUN_143416210(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_143497ba0(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1434979f0();
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x58));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      Scaleform::GFx::ASUserData::SetLastObjectValue(puVar1[1],0,0,0);
      (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],*puVar1,param_1 + 0x20);
      puVar1[1] = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        Scaleform::GFx::ASUserData::SetLastObjectValue(*(longlong *)(lVar2 + 8),0,0,0);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  return;
}



// FUNCTION 1434162c0 FUN_1434162c0 body=44 status=ok
// SIG undefined FUN_1434162c0(void)

undefined8 * FUN_1434162c0(undefined8 *param_1)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  return param_1;
}



// FUNCTION 143416300 FUN_143416300 body=44 status=ok
// SIG undefined FUN_143416300(void)

undefined8 * FUN_143416300(undefined8 *param_1)

{
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  return param_1;
}



// FUNCTION 143416360 FUN_143416360 body=128 status=ok
// SIG undefined FUN_143416360(void)

void FUN_143416360(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  byte local_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res8[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  uVar3 = FUN_143410c00(local_28,param_3);
  (**(code **)(lVar1 + 0x50))((longlong *)(param_1 + 0x20),param_2,lVar2 + 0x3a0,uVar3,local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 1434163f0 FUN_1434163f0 body=169 status=ok
// SIG undefined FUN_1434163f0(void)

void FUN_1434163f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong local_28;
  longlong local_20;
  byte local_18;
  
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))(param_1 + 0x20);
  FUN_1434a0f30(param_3 + 0x20,&local_28,param_2);
  if (local_28 != 0) {
    FUN_1434a4da0(param_1 + 0x20,param_2,&local_28);
  }
  if ((((local_18 & 2) == 0) && (local_28 != 0)) && ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
    FUN_1434a2b80(local_28);
  }
  if ((((local_18 & 1) == 0) && (local_20 != 0)) && ((*(uint *)(local_20 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
    FUN_1434a2b80();
  }
  return;
}


