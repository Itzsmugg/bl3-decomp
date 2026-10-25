// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141946710 FUN_141946710 body=668 status=ok
// SIG undefined FUN_141946710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141946710(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  ushort uVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar8 != '\0')) {
    if (*(int *)(param_1 + 0x3c8) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(param_1 + 0x3c0);
    }
    uVar9 = (**(code **)(*plVar11 + 0x38))();
    *(undefined4 *)(param_1 + 0x3b8) = uVar9;
  }
  iVar5 = *(int *)(param_1 + 0x3b8);
  if (iVar5 == 0) {
    return;
  }
  plVar11 = (longlong *)param_2[1];
  puVar3 = (undefined8 *)(param_1 + 0x598);
  uVar6 = *param_2;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_98 = uVar6;
  plStack_90 = plVar11;
  if (&local_98 != puVar3) {
    local_98 = *puVar3;
    plStack_90 = *(longlong **)(param_1 + 0x5a0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0x5a0) = plVar11;
    local_48 = uVar6;
    plStack_40 = plVar11;
  }
  plVar11 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if (iVar5 == 3) {
    uVar10 = *(ushort *)(param_3 + 8) & 0xc;
    if ((*(ushort *)(param_3 + 8) & 3) == 0) {
      if (uVar10 == 0) goto LAB_141946840;
    }
    else {
      if (uVar10 == 0) {
        (**(code **)(*(longlong *)(param_1 + 0x420) + 0x20))();
      }
      local_78 = *param_2;
      local_70 = param_2[1];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x28))((longlong *)(param_1 + 0x420),&local_78);
    }
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))((longlong *)(param_1 + 0x420),1);
  }
  else {
LAB_141946840:
    local_68 = *param_2;
    local_60 = param_2[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_141959b70(param_1,&local_68,1);
  }
  FUN_14069bc50(param_1 + 0x428,local_88,param_2);
  plVar11 = (longlong *)param_2[1];
  uVar9 = *(undefined4 *)(param_3 + 0xc);
  local_58 = *param_2;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x633) = 1;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_50 = plVar11;
  FUN_1406a2070(param_1,&local_58,uVar9);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 1419469b0 OffsetToTextLocation body=99 status=ok
// SIG undefined OffsetToTextLocation(void)

int * FTextLayout::FTextOffsetLocations::OffsetToTextLocation
                (undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    piVar2 = (int *)*param_1;
    lVar3 = 0;
    do {
      iVar1 = *piVar2;
      if ((iVar1 <= param_3) && (param_3 <= piVar2[1] + iVar1)) {
        param_2[1] = param_3 - iVar1;
        *param_2 = iVar4;
        return param_2;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (lVar3 < *(int *)(param_1 + 1));
  }
  param_2[0] = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141946a30 FUN_141946a30 body=1137 status=ok
// SIG undefined FUN_141946a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141946a30(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 *local_1f0;
  longlong local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 auStack_18c [5];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar14 = (longlong *)0x0;
  local_170 = DAT_1464aa770;
  local_16c = DAT_1464aa774;
  local_168 = 1;
  local_160 = 0;
  local_158 = 0;
  local_1b0 = param_3;
  FUN_1417dc7b0(param_2,param_3,**(undefined8 **)(param_1 + 0x2e8),&local_170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_160);
  plVar12 = *(longlong **)(param_1 + 0x218);
  plVar11 = plVar14;
  plVar13 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar12[1];
    bVar15 = iVar7 == 0;
    if (bVar15) {
      *(int *)(plVar12 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar11 = (longlong *)0x0, plVar13 = plVar14, !bVar15) {
      LOCK();
      bVar15 = iVar7 == (int)plVar12[1];
      if (bVar15) {
        *(int *)(plVar12 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar13 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 0x210);
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar12[1];
      bVar15 = iVar7 == 0;
      if (bVar15) {
        *(int *)(plVar12 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if (((*(char *)(param_1 + 0x2a0) != '\0') && (*(char *)(param_1 + 0x2b8) == '\x01')) &&
     (plVar11 != (longlong *)0x0)) {
    uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 8) + 0x20);
    puVar8 = (undefined4 *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x280);
    uVar9 = SWidget::GetDesiredSize(uVar9,local_138);
    FUN_141922840(&local_130,param_2,uVar9,*puVar8);
    fVar2 = *(float *)(param_1 + 0x2c4);
    fVar3 = *(float *)(param_1 + 0x2c8);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 8);
    local_1cc = 0x3f800000;
    local_1c8 = fVar2;
    local_1c4 = fVar3;
    lVar10 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar5 + 0x20) + 0xd0);
    if (*(char *)(lVar10 + 0x18) == '\0') {
      local_1a8 = local_130;
      fVar4 = *(float *)(param_2 + 8);
      local_150 = 0x3f800000;
      uStack_14c = 0;
      uStack_148 = 0;
      uStack_144 = 0x3f800000;
      uStack_1a4 = local_12c;
      local_140 = fVar2;
      local_13c = fVar3;
      Concatenate<FTransform2D>(auStack_18c,&local_150,param_2 + 0x1c);
      plVar12 = *(longlong **)(lVar5 + 0x28);
      uStack_174 = CONCAT31(uStack_174._1_3_,
                            (byte)uStack_174 ^ (*(byte *)(param_2 + 0x34) ^ (byte)uStack_174) & 1);
      local_90 = *(undefined8 *)(lVar5 + 0x20);
      fStack_19c = fVar4 * fVar2 + *(float *)(param_2 + 0xc);
      local_198 = fVar4 * fVar3 + *(float *)(param_2 + 0x10);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_c8 = CONCAT44(uStack_1a4,local_1a8);
      uStack_c0 = CONCAT44(fStack_19c,fVar4);
      local_b8 = CONCAT44(fVar2,local_198);
      uStack_b0 = CONCAT44(auStack_18c[0],fVar3);
      uVar16 = uStack_174;
      fStack_1a0 = fVar4;
      fStack_194 = fVar2;
      fStack_190 = fVar3;
    }
    else {
      lVar10 = *(longlong *)(lVar5 + 0x20);
      if (((*(int *)(lVar10 + 0x118) != 0) && (*(longlong **)(lVar10 + 0x110) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(lVar10 + 0x110) + 0x18))(), cVar6 != '\0')) {
        if (*(int *)(lVar10 + 0x118) != 0) {
          plVar14 = *(longlong **)(lVar10 + 0x110);
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,&local_1bc);
        *(undefined8 *)(lVar10 + 0x100) = local_1bc;
      }
      uVar9 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar5 + 0x20) + 0xd0);
      local_1d8 = *(undefined4 *)(param_2 + 8);
      local_1e8 = param_2 + 0x1c;
      local_1d4 = *(undefined4 *)(param_2 + 0xc);
      local_1f0 = &local_1d8;
      local_1d0 = *(undefined4 *)(param_2 + 0x10);
      local_1f8 = (undefined8 *)(lVar10 + 0x100);
      FGeometry::FGeometry(&local_108,&local_130,&local_1cc,uVar9);
      plVar12 = *(longlong **)(lVar5 + 0x28);
      local_90 = *(undefined8 *)(lVar5 + 0x20);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_c8 = local_108;
      uStack_c0 = uStack_100;
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_178 = (undefined4)local_d8;
      uVar16 = (int)((ulonglong)local_d8 >> 0x20);
    }
    local_98 = CONCAT44(uVar16,local_178);
    local_88 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar12 + 1;
        lVar5 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    FUN_141801ed0(local_1b0,&local_c8);
    plVar12 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_88 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
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
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 141946eb0 FUN_141946eb0 body=919 status=ok
// SIG undefined FUN_141946eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141946eb0(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar9 = (longlong *)0x0;
  if ((((char)param_1[0x54] == '\0') || (param_1[0x44] == 0)) || (param_1[0x45] == 0)) {
LAB_141946f03:
    if ((char)param_1[0x53] != '\0') goto LAB_141946f10;
    uVar11 = 1;
  }
  else {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_141946f03;
LAB_141946f10:
    uVar11 = 0;
  }
  (**(code **)(*param_1 + 0x210))(param_1,uVar11,0,0);
  if ((((char)param_1[0x54] != '\0') && (param_1[0x44] != 0)) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (((0 < iVar8) && ((int)param_1[0x62] != 0)) &&
       (((longlong *)param_1[0x61] != (longlong *)0x0 &&
        (cVar7 = (**(code **)(*(longlong *)param_1[0x61] + 0x18))(), cVar7 != '\0')))) {
      plVar10 = plVar9;
      if ((int)param_1[0x62] != 0) {
        plVar10 = (longlong *)param_1[0x61];
      }
      (**(code **)(*plVar10 + 0x38))();
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
  if ((char)param_1[0x6a] == '\0') {
    return param_2;
  }
  uStack_90 = (longlong *)param_1[100];
  local_98 = (longlong *)0x0;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)uStack_90[1];
    bVar12 = iVar8 == 0;
    if (bVar12) {
      *(int *)(uStack_90 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar8 == (int)uStack_90[1];
      if (bVar12) {
        *(int *)(uStack_90 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if ((uStack_90 == (longlong *)0x0) ||
           (local_98 = (longlong *)param_1[99], local_98 == (longlong *)0x0)) goto LAB_141947079;
        goto LAB_1419471b5;
      }
      LOCK();
      iVar8 = (int)uStack_90[1];
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(uStack_90 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
    uStack_90 = (longlong *)0x0;
  }
LAB_141947079:
  plVar6 = uStack_90;
  plVar10 = (longlong *)param_1[0x48];
  plVar3 = (longlong *)param_1[0x49];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_70._0_4_ = SUB84(plVar10,0);
  local_48 = (undefined4)local_70;
  local_70._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
  uStack_44 = local_70._4_4_;
  uStack_68._0_4_ = SUB84(plVar3,0);
  uStack_40 = (undefined4)uStack_68;
  uStack_68._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_3c = uStack_68._4_4_;
  local_70 = local_98;
  uStack_68 = uStack_90;
  local_98 = plVar10;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_90 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      puVar4 = (undefined8 *)*uStack_90;
      uStack_90 = plVar3;
      (*(code *)*puVar4)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = uStack_90;
      if (iVar8 == 1) {
        (**(code **)(*uStack_68 + 8))(uStack_68,1);
        plVar3 = uStack_90;
      }
    }
  }
  uStack_90 = plVar3;
  if (local_98 == (longlong *)0x0) {
    local_80[0] = (longlong *)param_1[0x69];
    if (local_80[0] != (longlong *)0x0) {
      LOCK();
      uVar2 = *(uint *)(local_80[0] + 1);
      bVar12 = uVar2 == 0;
      if (bVar12) {
        *(uint *)(local_80[0] + 1) = 0;
      }
      else {
        plVar9 = (longlong *)(ulonglong)uVar2;
      }
      UNLOCK();
      while (!bVar12) {
        iVar8 = (int)plVar9;
        LOCK();
        bVar12 = iVar8 == (int)local_80[0][1];
        if (bVar12) {
          *(int *)(local_80[0] + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar9 = (longlong *)0x0;
          if (local_80[0] != (longlong *)0x0) {
            plVar9 = (longlong *)param_1[0x68];
          }
          goto LAB_141947152;
        }
        plVar9 = (longlong *)0x0;
        LOCK();
        uVar2 = *(uint *)(local_80[0] + 1);
        bVar12 = uVar2 == 0;
        if (bVar12) {
          *(uint *)(local_80[0] + 1) = 0;
        }
        else {
          plVar9 = (longlong *)(ulonglong)uVar2;
        }
        UNLOCK();
      }
      plVar9 = (longlong *)0x0;
      local_80[0] = (longlong *)0x0;
    }
LAB_141947152:
    local_88 = 0;
    local_98 = plVar9;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_90,local_80);
    plVar9 = local_80[0];
    if (local_80[0] != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80[0] + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80[0])(local_80[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80[0] + 8))(local_80[0],1);
        }
      }
    }
    plVar9 = uStack_90;
    if (local_98 == (longlong *)0x0) goto LAB_1419471dd;
  }
LAB_1419471b5:
  plVar9 = uStack_90;
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
    UNLOCK();
  }
  FUN_14185b9a0(param_2,&local_58,2,0);
LAB_1419471dd:
  plVar10 = uStack_90;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*uStack_90 + 8))(uStack_90,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141947250 FUN_141947250 body=582 status=ok
// SIG undefined FUN_141947250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141947250(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  if (*(char *)(param_1 + 0x2f0) == '\0') {
    FUN_141958a60(param_1,1);
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_118);
    plVar3 = (longlong *)puVar5[1];
    uVar6 = *puVar5;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_110 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar7 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
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
    local_128 = uVar6;
    local_120 = plVar3;
    uVar6 = FUN_14185b9a0(local_108,&local_128,2,0);
    FUN_140438260(param_2,uVar6);
    FUN_140438c20(local_108);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 1419474a0 FUN_1419474a0 body=145 status=ok
// SIG undefined FUN_1419474a0(void)

undefined1 * FUN_1419474a0(undefined8 param_1,undefined1 *param_2)

{
  FUN_141955b60();
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



// FUNCTION 141947540 FUN_141947540 body=261 status=ok
// SIG undefined FUN_141947540(void)

undefined1 * FUN_141947540(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50 [2];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10 [2];
  
  bVar6 = *(char *)(param_1 + 0x510) == '\0';
  if (bVar6) {
    local_88[0] = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_50[0] = 3;
    puVar4 = &local_80;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puVar2 = &local_70;
    puVar3 = &local_60;
    puVar5 = local_50;
  }
  else {
    local_48[0] = 1;
    local_40 = 0;
    uStack_38 = 0;
    local_10[0] = 0;
    puVar4 = &local_40;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    puVar2 = &local_30;
    puVar3 = &local_20;
    puVar5 = local_10;
  }
  uVar1 = puVar4[1];
  puVar4[1] = 0;
  *puVar4 = 0;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *(undefined8 *)(param_2 + 0x18) = *puVar2;
  uVar1 = puVar2[1];
  puVar2[1] = 0;
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x28) = *puVar3;
  uVar1 = puVar3[1];
  puVar3[1] = 0;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *puVar3 = 0;
  *(undefined4 *)(param_2 + 0x38) = *puVar5;
  if (bVar6) {
    FCursorReply::~FCursorReply(local_88);
  }
  else {
    FCursorReply::~FCursorReply(local_48);
  }
  return param_2;
}



// FUNCTION 141947680 FUN_141947680 body=998 status=ok
// SIG undefined FUN_141947680(void)

undefined1 *
FUN_141947680(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  
  fVar10 = *(float *)((longlong)param_3 + 0x1c) * *(float *)(param_3 + 5) -
           *(float *)(param_3 + 4) * *(float *)((longlong)param_3 + 0x24);
  fVar11 = 1.0 / fVar10;
  fVar10 = ((*(float *)(param_4 + 0x1c) / fVar10 - *(float *)(param_3 + 6) * fVar11) *
            *(float *)((longlong)param_3 + 0x1c) -
           *(float *)(param_3 + 4) * fVar11 *
           (*(float *)(param_4 + 0x18) - *(float *)((longlong)param_3 + 0x2c))) /
           (float)((ulonglong)*param_3 >> 0x20);
  if (0.0 <= fVar10) {
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  else {
    fVar10 = 0.0;
  }
  local_res8 = (float)*param_3;
  local_res8 = (*(float *)(param_3 + 5) * fVar11 *
                (*(float *)(param_4 + 0x18) - *(float *)((longlong)param_3 + 0x2c)) -
               *(float *)((longlong)param_3 + 0x24) * fVar11 *
               (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 6))) / local_res8;
  fVar11 = 0.0;
  if ((0.0 <= local_res8) && (fVar11 = local_res8, 1.0 <= local_res8)) {
    fVar11 = 1.0;
  }
  plVar3 = *(longlong **)(param_1 + 0x408);
  plVar7 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar3;
        if ((plVar3 != (longlong *)0x0) && (lVar4 = *(longlong *)(param_1 + 0x400), lVar4 != 0)) {
          plVar7 = (longlong *)FUN_141942440(param_1,local_98);
          cVar2 = *(char *)(*plVar7 + 0x118);
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_90 + 1;
            lVar5 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)local_90 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_90 + 8))(local_90,1);
              }
            }
          }
          if (cVar2 == '\0') {
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
            plVar7 = plVar3;
          }
          else {
            puVar8 = (undefined8 *)
                     TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_88);
            local_a8 = *puVar8;
            local_a0 = puVar8[1];
            if (local_a0 != 0) {
              LOCK();
              *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
              UNLOCK();
            }
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_80 + 1;
              lVar5 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
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
            FUN_14191b2f0(lVar4,param_2,&local_a8,CONCAT44(fVar10,fVar11),param_4);
            plVar7 = plVar3;
          }
          goto LAB_14194788b;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
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
  if (plVar7 != (longlong *)0x0) {
LAB_14194788b:
    LOCK();
    plVar3 = plVar7 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 141947a70 FUN_141947a70 body=315 status=ok
// SIG undefined FUN_141947a70(void)

void FUN_141947a70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *local_38;
  undefined4 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [16];
  
  if ((*(longlong *)(param_1 + 0x388) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x390) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_141947b8d;
  }
  local_38 = SDockTab::TriggerActivateTab;
  uStack_30 = 0;
  uVar5 = FUN_1417ddb00(local_18,param_1,&local_38);
  puVar6 = (undefined8 *)FUN_141853de0(param_1,local_28,0x3f400000,uVar5);
  *(undefined8 *)(param_1 + 0x388) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x390);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x390);
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
    *(longlong **)(param_1 + 0x390) = plVar2;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
LAB_141947b8d:
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 141947bb0 FUN_141947bb0 body=307 status=ok
// SIG undefined FUN_141947bb0(void)

void FUN_141947bb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *local_28;
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x388) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x390) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x390);
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
              plVar6 = *(longlong **)(param_1 + 0x388);
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_28 = plVar6;
      local_20 = plVar5;
      FUN_14185f5a0(param_1,&local_28);
      plVar6 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
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
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 141947cf0 FUN_141947cf0 body=256 status=ok
// SIG undefined FUN_141947cf0(void)

undefined1 *
FUN_141947cf0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_14191fe80(param_4,&local_18);
  plVar5 = local_10;
  if ((local_18 == 0) || ((*(byte *)(local_18 + 0x60) & 1) == 0)) {
    *param_2 = 0;
  }
  else {
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



// FUNCTION 141947df0 FUN_141947df0 body=333 status=ok
// SIG undefined FUN_141947df0(void)

undefined8 FUN_141947df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *local_38;
  longlong *local_30;
  
  if ((*(longlong *)(param_1 + 0x388) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x390) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x390);
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
              plVar6 = *(longlong **)(param_1 + 0x388);
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_38 = plVar6;
      local_30 = plVar5;
      FUN_14185f5a0(param_1,&local_38);
      plVar6 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
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
  FSlateEditableTextLayout::HandleKeyUp(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 141947f40 FUN_141947f40 body=612 status=ok
// SIG undefined FUN_141947f40(void)

undefined1 *
FUN_141947f40(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_14191fe80(param_4,&local_68);
  if ((local_68 == 0) || ((*(byte *)(local_68 + 0x60) & 1) == 0)) {
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
    plVar1 = local_60;
  }
  else {
    uVar6 = FText::FromString(local_58,local_68 + 0x40);
    FText::FText(local_40,uVar6);
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    FUN_1419a43a0(*(undefined8 *)(param_1 + 0x220),local_40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
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
    plVar1 = local_60;
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      local_60 = plVar1;
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1419481b0 OnFocusLost body=32 status=ok
// SIG undefined OnFocusLost(void)

void SButton::OnFocusLost(longlong *param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
                    /* WARNING: Could not recover jumptable at 0x0001419481c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1);
  return;
}



// FUNCTION 141948200 FUN_141948200 body=122 status=ok
// SIG undefined FUN_141948200(void)

void FUN_141948200(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x5f] != '\0') {
    if (((int)param_1[0x5b] != 0) && ((longlong *)param_1[0x5a] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x5a] + 0x18))();
      if (cVar1 != '\0') {
        if ((int)param_1[0x5b] == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = (longlong *)param_1[0x5a];
        }
        uVar3 = (**(code **)(*plVar2 + 0x38))();
        *(undefined4 *)(param_1 + 0x59) = uVar3;
      }
    }
    (**(code **)(*param_1 + 0x208))(param_1,(int)param_1[0x59]);
    FUN_141955ce0(param_1);
    return;
  }
  return;
}



// FUNCTION 141948280 FUN_141948280 body=476 status=ok
// SIG undefined FUN_141948280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141948280(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
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
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(char *)(param_1 + 0x510) == '\0') && ((byte)(*param_4 - 1U) < 2)) {
    FUN_14193b4e0();
    local_108 = *(undefined8 *)(param_1 + 0x358);
    plVar5 = *(longlong **)(param_1 + 0x360);
    cVar4 = *param_4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_44 = local_44 & 0xffffff00;
    local_f8[0] = 1;
    local_f0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x20702;
    local_100 = plVar5;
    uVar7 = FUN_14185b9a0(local_f8,&local_108,cVar4,0);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_f8);
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



// FUNCTION 141948460 FUN_141948460 body=155 status=ok
// SIG undefined FUN_141948460(void)

undefined1 *
FUN_141948460(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141986a30(*(undefined8 *)(param_1 + 0x220),param_4);
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



// FUNCTION 141948500 FUN_141948500 body=321 status=ok
// SIG undefined FUN_141948500(void)

undefined1 * FUN_141948500(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_18;
  longlong *local_10;
  
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
  cVar4 = *param_4;
  if (cVar4 == '\x03') {
    return param_2;
  }
  local_18 = *(undefined8 *)(param_1 + 0x3a0);
  plVar5 = *(longlong **)(param_1 + 0x3a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_10 = plVar5;
  FUN_14185b9a0(param_2,&local_18,cVar4,0);
  if (plVar5 == (longlong *)0x0) {
    return param_2;
  }
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
  return param_2;
}



// FUNCTION 141948650 FUN_141948650 body=321 status=ok
// SIG undefined FUN_141948650(void)

undefined1 * FUN_141948650(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_18;
  longlong *local_10;
  
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
  cVar4 = *param_4;
  if (cVar4 == '\x03') {
    return param_2;
  }
  local_18 = *(undefined8 *)(param_1 + 0x388);
  plVar5 = *(longlong **)(param_1 + 0x390);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_10 = plVar5;
  FUN_14185b9a0(param_2,&local_18,cVar4,0);
  if (plVar5 == (longlong *)0x0) {
    return param_2;
  }
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
  return param_2;
}



// FUNCTION 1419487a0 FUN_1419487a0 body=96 status=ok
// SIG undefined FUN_1419487a0(void)

undefined8 * FUN_1419487a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x400) == '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x510);
  }
  else {
    puVar3 = (undefined8 *)FUN_141831530(param_1 + 0x3d8);
  }
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
  param_2[3] = puVar3[3];
  lVar1 = puVar3[4];
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141948800 FUN_141948800 body=456 status=ok
// SIG undefined FUN_141948800(void)

longlong FUN_141948800(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[0x62] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar4 + 0x38))();
      *(undefined1 *)(param_1 + 0x60) = uVar2;
    }
  }
  cVar1 = (char)param_1[0x5f];
  if ((char)param_1[0x60] == '\0') {
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
      if (cVar1 == '\0') {
        lVar3 = param_1[0x65];
        if (lVar3 == 0) {
          lVar3 = param_1[0x5e] + 0x10;
        }
      }
      else {
        lVar3 = param_1[0x66];
        if (lVar3 == 0) {
          return param_1[0x5e] + 0x98;
        }
      }
    }
    else {
      lVar3 = param_1[0x67];
      if (lVar3 == 0) {
        return param_1[0x5e] + 0x120;
      }
    }
  }
  else if ((char)param_1[0x60] == '\x01') {
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
      if (cVar1 == '\0') {
        lVar3 = param_1[0x68];
        if (lVar3 == 0) {
          return param_1[0x5e] + 0x1a8;
        }
      }
      else {
        lVar3 = param_1[0x69];
        if (lVar3 == 0) {
          return param_1[0x5e] + 0x230;
        }
      }
    }
    else {
      lVar3 = param_1[0x6a];
      if (lVar3 == 0) {
        return param_1[0x5e] + 0x2b8;
      }
    }
  }
  else if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
    if (cVar1 == '\0') {
      lVar3 = param_1[0x6b];
      if (lVar3 == 0) {
        return param_1[0x5e] + 0x340;
      }
    }
    else {
      lVar3 = param_1[0x6c];
      if (lVar3 == 0) {
        return param_1[0x5e] + 0x3c8;
      }
    }
  }
  else {
    lVar3 = param_1[0x6d];
    if (lVar3 == 0) {
      return param_1[0x5e] + 0x450;
    }
  }
  return lVar3;
}



// FUNCTION 1419489d0 FUN_1419489d0 body=96 status=ok
// SIG undefined FUN_1419489d0(void)

undefined8 * FUN_1419489d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x4e8);
  }
  else {
    puVar3 = (undefined8 *)FUN_141831530(param_1 + 0x398);
  }
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
  param_2[3] = puVar3[3];
  lVar1 = puVar3[4];
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141948a30 FUN_141948a30 body=123 status=ok
// SIG undefined FUN_141948a30(void)

undefined8 * FUN_141948a30(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x380) == '\0') {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x4d8);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x370);
    if ((*(int *)(param_1 + 0x390) != 0) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x390) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x388);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
        *puVar4 = local_18;
        *(undefined8 *)(param_1 + 0x378) = uStack_10;
      }
    }
  }
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141948ab0 FUN_141948ab0 body=334 status=ok
// SIG undefined FUN_141948ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_141948ab0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)0x0;
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
  if ((*(int *)(param_1 + 0x440) != 0) && (*(longlong **)(param_1 + 0x438) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x440) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x438);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,local_f8,param_3,param_4);
      FUN_140439160(param_2,local_f8);
      FUN_140438c20(local_f8);
    }
  }
  if (*param_2 == '\0') {
    uVar2 = FUN_141986dc0(*(undefined8 *)(param_1 + 0x220),local_f8,param_4);
    FUN_140439160(param_2,uVar2);
    FUN_140438c20(local_f8);
  }
  return param_2;
}



// FUNCTION 141948c00 FUN_141948c00 body=1303 status=ok
// SIG undefined FUN_141948c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141948c00(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong *local_1d0;
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
  plVar3 = *(longlong **)(param_4 + 0x28);
  lVar4 = *(longlong *)(param_4 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9958) && (cVar5 = FUN_141846080(), cVar5 != '\0')) {
    *(undefined1 *)(param_1 + 0x510) = 0;
    *(undefined4 *)(param_1 + 0x514) = 0xffffffff;
    *(double *)(param_1 + 0x520) = *(double *)(param_1 + 0x528);
    TBaseDelegate<void,float,enum_ETextCommit::Type>::ExecuteIfBound
              (param_1 + 0x318,(float)*(double *)(param_1 + 0x528),1);
    TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x338);
    local_114 = local_114 & 0xffffff00;
    local_1c8[0] = 1;
    local_1c0 = 0;
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
    local_1b8 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_148 = 0;
    local_140 = 0;
    local_118 = 0x20702;
    uVar6 = FUN_1406a1ac0(local_1c8);
    uVar6 = FReply::SetMousePos(uVar6,param_1 + 0x518);
    FUN_140438260(param_2,uVar6);
    FUN_140438c20(local_1c8);
  }
  else {
    if ((lVar4 == DAT_1469e9a00) || (lVar4 == DAT_1469e9a18)) {
      plVar9 = (longlong *)0x0;
      if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar5 != '\0')) {
        plVar8 = plVar9;
        if (*(int *)(param_1 + 0x300) != 0) {
          plVar8 = *(longlong **)(param_1 + 0x2f8);
        }
        uVar10 = (**(code **)(*plVar8 + 0x38))();
        *(undefined4 *)(param_1 + 0x2f0) = uVar10;
      }
      *(double *)(param_1 + 0x520) = (double)*(float *)(param_1 + 0x2f0);
      if (((*(int *)(param_1 + 0x3c0) != 0) && (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x3c0) != 0) {
          plVar9 = *(longlong **)(param_1 + 0x3b8);
        }
        uVar10 = (**(code **)(*plVar9 + 0x38))();
        *(undefined4 *)(param_1 + 0x3b0) = uVar10;
      }
      FUN_14192abd0(param_1,SUB84((double)*(float *)(param_1 + 0x3b0) + *(double *)(param_1 + 0x520)
                                  ,0),2);
      FUN_14193bab0(param_1);
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
      if (plVar3 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar9 = plVar3 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return param_2;
    }
    if ((lVar4 == DAT_1469e9a30) || (lVar4 == DAT_1469e99e8)) {
      pfVar7 = (float *)TAttribute<float>::Get(param_1 + 0x2f0);
      *(double *)(param_1 + 0x520) = (double)*pfVar7;
      pfVar7 = (float *)TAttribute<float>::Get(param_1 + 0x3b0);
      FUN_14192abd0(param_1,SUB84(*(double *)(param_1 + 0x520) - (double)*pfVar7,0),2);
      FUN_14193bab0(param_1);
      FReply::Handled(param_2);
    }
    else if (lVar4 == DAT_1469e9910) {
      pfVar7 = (float *)TAttribute<float>::Get(param_1 + 0x2f0);
      *(double *)(param_1 + 0x520) = (double)*pfVar7;
      FUN_14193b4e0(param_1);
      local_1d8 = *(undefined8 *)(param_1 + 0x358);
      plVar9 = *(longlong **)(param_1 + 0x360);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
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
      local_1d0 = plVar9;
      uVar6 = FUN_14185b9a0(local_108,&local_1d8,1,0);
      FUN_140438260(param_2,uVar6);
      FUN_140438c20(local_108);
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    else {
      FReply::Unhandled(param_2);
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



// FUNCTION 141949120 FUN_141949120 body=1094 status=ok
// SIG undefined FUN_141949120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_141949120(longlong *param_1,undefined1 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_398 [32];
  char local_378;
  longlong *local_370;
  longlong *local_368;
  undefined4 local_360;
  undefined1 local_358 [8];
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined1 local_1d8 [192];
  undefined1 local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  plVar14 = (longlong *)0x0;
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
  local_360 = 0;
  local_370 = param_4;
  local_368 = param_3;
  if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar7 != '\0')) {
    plVar10 = plVar14;
    if ((int)param_1[0x15] != 0) {
      plVar10 = (longlong *)param_1[0x14];
    }
    uVar8 = (**(code **)(*plVar10 + 0x38))();
    *(undefined1 *)(param_1 + 0x13) = uVar8;
  }
  plVar12 = plVar14;
  plVar13 = local_370;
  plVar10 = local_368;
  plVar15 = local_370;
  if ((char)param_1[0x13] == '\0') {
LAB_1419492c7:
    local_378 = '\0';
  }
  else {
    plVar10 = (longlong *)local_370[5];
    lVar4 = local_370[3];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar12 = (longlong *)0x1;
    if (lVar4 != DAT_1469e9910) {
      plVar15 = (longlong *)local_370[5];
      lVar4 = local_370[3];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      plVar12 = (longlong *)0x3;
      if (lVar4 != DAT_1469e9970) {
        plVar13 = (longlong *)local_370[5];
        lVar4 = local_370[3];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        plVar12 = (longlong *)0x7;
        if (lVar4 == DAT_1469eae58) {
          local_378 = '\x01';
          goto LAB_1419492cc;
        }
        goto LAB_1419492c7;
      }
    }
    local_378 = '\x01';
  }
LAB_1419492cc:
  if ((((ulonglong)plVar12 & 4) != 0) &&
     (plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffb), plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if ((((ulonglong)plVar12 & 2) != 0) &&
     (plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffd), plVar15 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if ((((ulonglong)plVar12 & 1) != 0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar15 = plVar10 + 1;
    lVar4 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_378 == '\0') {
    uVar9 = FUN_1417c9760(param_1,local_118,local_368,local_370);
    FUN_140439160(param_2,uVar9);
    puVar11 = local_118;
  }
  else {
    (**(code **)(*param_1 + 0x220))();
    if (*(char *)((longlong)param_1 + 0x482) == '\x01') {
      if ((((int)param_1[0x81] == 0) || ((longlong *)param_1[0x80] == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*(longlong *)param_1[0x80] + 0x18))(), cVar7 == '\0')) {
        local_298[0] = 1;
        local_268 = 0;
        uStack_260 = 0;
        bVar6 = false;
        bVar5 = true;
        local_258 = 0;
        uStack_250 = 0;
        local_1e4 = local_1e4 & 0xffffff00;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_290 = 0;
        local_288 = 0;
        local_278 = 0;
        local_270 = 0;
        local_218 = 0;
        local_210 = 0;
        local_1e8 = 0x20702;
        puVar11 = local_298;
      }
      else {
        bVar6 = true;
        bVar5 = false;
        if ((int)param_1[0x81] != 0) {
          plVar14 = (longlong *)param_1[0x80];
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,local_1d8);
        puVar11 = local_1d8;
      }
      FUN_140439160(param_2,puVar11);
      if (bVar5) {
        FUN_140438c20(local_298);
      }
      if (!bVar6) {
        return param_2;
      }
      puVar11 = local_1d8;
    }
    else {
      local_2a4 = local_2a4 & 0xffffff00;
      local_358[0] = 1;
      local_328 = 0;
      uStack_320 = 0;
      local_318 = 0;
      uStack_310 = 0;
      local_308 = 0;
      uStack_300 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_350 = 0;
      local_348 = 0;
      local_338 = 0;
      local_330 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2a8 = 0x20702;
      FUN_140439160(param_2,local_358);
      puVar11 = local_358;
    }
  }
  FUN_140438c20(puVar11);
  return param_2;
}



// FUNCTION 141949570 FUN_141949570 body=600 status=ok
// SIG undefined FUN_141949570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_141949570(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  uint uStack_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
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
  plVar4 = *(longlong **)(param_4 + 0x28);
  local_118 = 0;
  lVar5 = *(longlong *)(param_4 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar7 = false;
  if (lVar5 == DAT_1469eae58) {
    plVar11 = (longlong *)((ulonglong)uStack_114 << 0x20);
LAB_14194969d:
    bVar6 = false;
    plVar10 = (longlong *)((ulonglong)uStack_114 << 0x20);
  }
  else {
    plVar11 = *(longlong **)(param_4 + 0x28);
    lVar5 = *(longlong *)(param_4 + 0x18);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
    if (lVar5 == DAT_1469e9910) goto LAB_14194969d;
    plVar10 = *(longlong **)(param_4 + 0x28);
    lVar5 = *(longlong *)(param_4 + 0x18);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    if (lVar5 != DAT_1469e9970) {
      bVar8 = false;
      goto LAB_1419496a5;
    }
  }
  bVar8 = true;
LAB_1419496a5:
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
  if ((bVar7) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar5 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
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
  if (bVar8) {
    uVar9 = (**(code **)(*param_1 + 0x218))(param_1,local_108);
    FUN_140439160(param_2,uVar9);
    FUN_140438c20(local_108);
  }
  return param_2;
}



// FUNCTION 1419497d0 FUN_1419497d0 body=379 status=ok
// SIG undefined FUN_1419497d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1419497d0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)0x0;
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
  if ((*(int *)(param_1 + 0x450) != 0) && (*(longlong **)(param_1 + 0x448) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x450) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x448);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,local_f8,param_3,param_4);
      FUN_140439160(param_2,local_f8);
      FUN_140438c20(local_f8);
    }
  }
  if (*param_2 == '\0') {
    uVar2 = FUN_1419872e0(*(undefined8 *)(param_1 + 0x220),local_f8,param_4);
    FUN_140439160(param_2,uVar2);
    FUN_140438c20(local_f8);
    if (*param_2 == '\0') {
      uVar2 = FUN_1417c9760(param_1,local_f8,param_3,param_4);
      FUN_140439160(param_2,uVar2);
      FUN_140438c20(local_f8);
    }
  }
  return param_2;
}



// FUNCTION 141949950 FUN_141949950 body=746 status=ok
// SIG undefined FUN_141949950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141949950(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar3 = *(longlong **)(param_4 + 0x28);
  lVar4 = *(longlong *)(param_4 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar4 != DAT_1469e9958) ||
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x180))(), cVar6 == '\0')) {
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
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_120)
  ;
  plVar5 = (longlong *)puVar7[1];
  local_138 = *puVar7;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_118 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar9 = plVar5 + 1;
  local_130 = local_138;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
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
  local_128 = plVar5;
  uVar8 = FUN_14185b9a0(local_108,&local_130,3,0);
  FUN_140438260(param_2,uVar8);
  FUN_140438c20(local_108);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return param_2;
  }
  (**(code **)(*plVar3 + 8))(plVar3,1);
  return param_2;
}



// FUNCTION 141949c40 FUN_141949c40 body=651 status=ok
// SIG undefined FUN_141949c40(void)

undefined1 * FUN_141949c40(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  bVar10 = false;
  if ((*(char *)(param_1 + 0x2f0) == '\0') && (*(char *)(param_1 + 0x318) != '\0')) {
    uVar8 = FUN_14193e740(param_1 + 0x2f8);
    cVar7 = FKey::IsValid(uVar8);
    if ((cVar7 == '\0') || (*(char *)(param_1 + 0x389) == '\0')) goto LAB_141949ccc;
    plVar9 = *(longlong **)(param_4 + 0x28);
    lVar5 = *(longlong *)(param_4 + 0x18);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
    if (lVar5 == DAT_1469ea528) {
      bVar6 = true;
      goto LAB_141949cd7;
    }
  }
  else {
LAB_141949ccc:
    plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  bVar6 = false;
LAB_141949cd7:
  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar9 = DAT_1469eae38;
  local_60 = DAT_1469eae30;
  local_68 = DAT_1469eae28;
  if (bVar6) {
    if (DAT_1469eae38 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
      UNLOCK();
    }
    local_58 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_50 = local_50 & 0xfffffff0;
    local_48 = 1;
    local_40 = 0;
    local_38 = 0;
    FKey::operator=(param_1 + 0x2f8,&local_68);
    *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffff0;
    *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | local_50 & 0xf;
    *(undefined1 *)(param_1 + 0x318) = local_48;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,&local_40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
    plVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  else {
    FUN_1417c9760(param_1,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 141949ed0 FUN_141949ed0 body=1110 status=ok
// SIG undefined FUN_141949ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_141949ed0(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_448 [32];
  undefined1 local_428 [8];
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  uint local_374;
  undefined1 local_368 [8];
  undefined8 local_360;
  undefined8 local_358;
  undefined1 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  undefined1 local_2a8 [8];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  uint local_1f4;
  undefined1 local_1e8 [192];
  undefined1 local_128 [192];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_448;
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
  plVar4 = *(longlong **)(param_4 + 0x28);
  lVar5 = *(longlong *)(param_4 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*param_1 + 400))();
  if (cVar7 == '\0') {
    uVar8 = FUN_1417c9760(param_1,local_128,param_3,param_4);
    FUN_140439160(param_2,uVar8);
    puVar9 = local_128;
  }
  else {
    if (((lVar5 == DAT_1469e9910) || (lVar5 == DAT_1469e9970)) || (lVar5 == DAT_1469eae58)) {
      if ((char)param_1[0x5f] == '\0') {
        *(undefined1 *)(param_1 + 0x5f) = 1;
        TBaseDelegate<void>::ExecuteIfBound(param_1 + 100);
        local_374 = local_374 & 0xffffff00;
        local_428[0] = 1;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3e8 = 0;
        uStack_3e0 = 0;
        local_3d8 = 0;
        uStack_3d0 = 0;
        local_3c8 = 0;
        uStack_3c0 = 0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_398 = 0;
        uStack_390 = 0;
        local_388 = 0;
        uStack_380 = 0;
        local_420 = 0;
        local_418 = 0;
        local_408 = 0;
        local_400 = 0;
        local_3a8 = 0;
        local_3a0 = 0;
        local_378 = 0x20702;
        FUN_140439160(param_2,local_428);
        puVar9 = local_428;
      }
      else {
        FUN_141955ce0(param_1);
        local_2b4 = local_2b4 & 0xffffff00;
        local_368[0] = 1;
        local_338 = 0;
        uStack_330 = 0;
        local_328 = 0;
        uStack_320 = 0;
        local_318 = 0;
        uStack_310 = 0;
        local_308 = 0;
        uStack_300 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_360 = 0;
        local_358 = 0;
        local_348 = 0;
        local_340 = 0;
        local_2e8 = 0;
        local_2e0 = 0;
        local_2b8 = 0x20702;
        FUN_140439160(param_2,local_368);
        puVar9 = local_368;
      }
      FUN_140438c20(puVar9);
    }
    if ((char)param_1[0x5f] != '\0') {
      TAttribute<float>::Get(param_1 + 0x59);
      if ((int)param_1[0x48] == 0) {
        if ((lVar5 == DAT_1469e99e8) || ((lVar5 == DAT_1469ea600 || (lVar5 == DAT_1469ea660))))
        goto LAB_14194a185;
        if ((lVar5 == DAT_1469e9a18) || (lVar6 = DAT_1469ea648, lVar5 == DAT_1469ea5e8)) {
LAB_14194a173:
          TAttribute<float>::Get(param_1 + 0x5c);
        }
        else {
LAB_14194a171:
          if (lVar5 == lVar6) goto LAB_14194a173;
        }
      }
      else {
        if (((lVar5 != DAT_1469e9a30) && (lVar5 != DAT_1469ea5d0)) && (lVar5 != DAT_1469ea630)) {
          if ((lVar5 != DAT_1469e9a00) && (lVar6 = DAT_1469ea618, lVar5 != DAT_1469ea5b8))
          goto LAB_14194a171;
          goto LAB_14194a173;
        }
LAB_14194a185:
        TAttribute<float>::Get(param_1 + 0x5c);
      }
      (**(code **)(*param_1 + 0x208))(param_1);
      local_1f4 = local_1f4 & 0xffffff00;
      local_2a8[0] = 1;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_2a0 = 0;
      local_298 = 0;
      local_288 = 0;
      local_280 = 0;
      local_228 = 0;
      local_220 = 0;
      local_1f8 = 0x20702;
      FUN_140439160(param_2,local_2a8);
      FUN_140438c20(local_2a8);
      goto LAB_14194a2b1;
    }
    uVar8 = FUN_1417c9760(param_1,local_1e8,param_3,param_4);
    FUN_140439160(param_2,uVar8);
    puVar9 = local_1e8;
  }
  FUN_140438c20(puVar9);
LAB_14194a2b1:
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
  return param_2;
}



// FUNCTION 14194a330 FUN_14194a330 body=1031 status=ok
// SIG undefined FUN_14194a330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14194a330(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_2b8 [32];
  char local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar14 = (longlong *)0x0;
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
  local_290 = 0;
  if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar8 != '\0')) {
    plVar10 = plVar14;
    if ((int)param_1[0x15] != 0) {
      plVar10 = (longlong *)param_1[0x14];
    }
    uVar9 = (**(code **)(*plVar10 + 0x38))();
    *(undefined1 *)(param_1 + 0x13) = uVar9;
  }
  if ((char)param_1[0x13] == '\0') {
    plVar13 = (longlong *)CONCAT44(uStack_28c,local_290);
    plVar15 = (longlong *)CONCAT44(uStack_28c,local_290);
    plVar10 = (longlong *)CONCAT44(uStack_28c,local_290);
    plVar12 = plVar14;
LAB_14194a4c1:
    local_298 = '\0';
  }
  else {
    plVar10 = *(longlong **)(param_4 + 0x28);
    lVar5 = *(longlong *)(param_4 + 0x18);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar12 = (longlong *)0x1;
    if (lVar5 == DAT_1469e9910) {
      plVar15 = (longlong *)CONCAT44(uStack_28c,local_290);
    }
    else {
      plVar15 = *(longlong **)(param_4 + 0x28);
      lVar5 = *(longlong *)(param_4 + 0x18);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      plVar12 = (longlong *)0x3;
      if (lVar5 != DAT_1469e9970) {
        lVar5 = *(longlong *)(param_4 + 0x18);
        plVar13 = *(longlong **)(param_4 + 0x28);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        plVar12 = (longlong *)0x7;
        if (lVar5 == DAT_1469eae58) {
          local_298 = '\x01';
          goto LAB_14194a4c6;
        }
        goto LAB_14194a4c1;
      }
    }
    plVar13 = (longlong *)CONCAT44(uStack_28c,local_290);
    local_298 = '\x01';
  }
LAB_14194a4c6:
  if ((((ulonglong)plVar12 & 4) != 0) &&
     (plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffb), plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if ((((ulonglong)plVar12 & 2) != 0) &&
     (plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffd), plVar15 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar5 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if ((((ulonglong)plVar12 & 1) != 0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar15 = plVar10 + 1;
    lVar5 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
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
  if (local_298 != '\0') {
    bVar4 = *(byte *)((longlong)param_1 + 0x483);
    (**(code **)(*param_1 + 0x228))(param_1);
    if ((*(char *)((longlong)param_1 + 0x482) == '\x02') ||
       ((*(char *)((longlong)param_1 + 0x482) == '\0' && ((bVar4 & 2) != 0)))) {
      if (((int)param_1[0x81] == 0) ||
         (((longlong *)param_1[0x80] == (longlong *)0x0 ||
          (cVar8 = (**(code **)(*(longlong *)param_1[0x80] + 0x18))(), cVar8 == '\0')))) {
        local_1c8[0] = 1;
        local_198 = 0;
        uStack_190 = 0;
        bVar7 = false;
        bVar6 = true;
        local_188 = 0;
        uStack_180 = 0;
        local_114 = local_114 & 0xffffff00;
        puVar11 = local_1c8;
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
      }
      else {
        bVar7 = true;
        bVar6 = false;
        if ((int)param_1[0x81] != 0) {
          plVar14 = (longlong *)param_1[0x80];
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,local_108);
        puVar11 = local_108;
      }
      FUN_140439160(param_2,puVar11);
      if (bVar6) {
        FUN_140438c20(local_1c8);
      }
      if (!bVar7) {
        return param_2;
      }
      puVar11 = local_108;
    }
    else {
      local_1d4 = local_1d4 & 0xffffff00;
      local_288[0] = 1;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_280 = 0;
      local_278 = 0;
      local_268 = 0;
      local_260 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1d8 = 0x20702;
      FUN_140439160(param_2,local_288);
      puVar11 = local_288;
    }
    FUN_140438c20(puVar11);
  }
  return param_2;
}



// FUNCTION 14194a740 FUN_14194a740 body=633 status=ok
// SIG undefined FUN_14194a740(void)

undefined1 * FUN_14194a740(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uStackX_24;
  
  lVar4 = *(longlong *)(param_4 + 0x18);
  plVar10 = *(longlong **)(param_4 + 0x28);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  bVar6 = false;
  if (lVar4 == DAT_1469e9910) {
    plVar11 = (longlong *)((ulonglong)uStackX_24 << 0x20);
LAB_14194a7de:
    bVar5 = false;
    plVar12 = (longlong *)((ulonglong)uStackX_24 << 0x20);
LAB_14194a7e3:
    bVar7 = true;
  }
  else {
    plVar11 = *(longlong **)(param_4 + 0x28);
    lVar4 = *(longlong *)(param_4 + 0x18);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    if (lVar4 == DAT_1469e9970) goto LAB_14194a7de;
    plVar12 = *(longlong **)(param_4 + 0x28);
    lVar4 = *(longlong *)(param_4 + 0x18);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    if (lVar4 == DAT_1469eae58) goto LAB_14194a7e3;
    bVar7 = false;
  }
  if ((bVar5) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if ((bVar6) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar4 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (!bVar7) {
    *param_2 = 0;
    goto LAB_14194a938;
  }
  FUN_14195c4e0(param_1);
  if ((*(int *)(param_1 + 0x310) != 0) && (*(longlong **)(param_1 + 0x308) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))();
    if (cVar8 != '\0') {
      if (*(int *)(param_1 + 0x310) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x308);
      }
      uVar9 = (**(code **)(*plVar10 + 0x38))();
      *(undefined1 *)(param_1 + 0x300) = uVar9;
    }
  }
  if (*(char *)(param_1 + 0x300) == '\x01') {
    param_1 = param_1 + 0x458;
LAB_14194a921:
    FSlateApplication::PlaySound(DAT_1469f4590,param_1,0);
  }
  else if (*(char *)(param_1 + 0x300) == '\0') {
    param_1 = param_1 + 0x470;
    goto LAB_14194a921;
  }
  *param_2 = 1;
LAB_14194a938:
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



// FUNCTION 14194a9c0 OnKeyUp body=33 status=ok
// SIG undefined OnKeyUp(void)

undefined8
SEditableText::OnKeyUp(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FSlateEditableTextLayout::HandleKeyUp(*(undefined8 *)(param_1 + 0x220),param_2,param_4);
  return param_2;
}



// FUNCTION 14194a9f0 FUN_14194a9f0 body=708 status=ok
// SIG undefined FUN_14194a9f0(void)

undefined8 FUN_14194a9f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  bool bVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_48 = *(longlong *)(param_4 + 0x18);
  local_38 = *(longlong **)(param_4 + 0x28);
  local_40 = *(undefined8 *)(param_4 + 0x20);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  uVar4 = *(ushort *)(param_4 + 8);
  if ((((uVar4 & 0xc0) == 0) || (local_48 == DAT_1469ea120)) || (local_48 == DAT_1469ea138)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((((uVar4 & 3) == 0) || (local_48 == DAT_1469ea090)) || (local_48 == DAT_1469ea0a8)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((((uVar4 & 0x30) == 0) || (local_48 == DAT_1469ea0f0)) || (local_48 == DAT_1469ea108)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((((uVar4 & 0xc) == 0) || (local_48 == DAT_1469ea0c0)) || (local_48 == DAT_1469ea0d8)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  bVar10 = bVar8 | 2;
  if (!bVar11) {
    bVar10 = bVar8;
  }
  bVar8 = bVar10 | 4;
  if (!bVar13) {
    bVar8 = bVar10;
  }
  bVar10 = bVar8 | 8;
  if (!bVar7) {
    bVar10 = bVar8;
  }
  if (((*(char *)(param_1 + 0x2f0) == '\0') ||
      ((*(char *)(param_1 + 0x389) == '\0' && (cVar9 = FKey::IsGamepadKey(&local_48), cVar9 != '\0')
       ))) || ((cVar9 = FKey::IsModifierKey(&local_48), cVar9 != '\0' && (bVar10 != 0)))) {
    FSlateEditableTextLayout::HandleKeyUp(param_1,param_2,param_3,param_4);
    plVar5 = local_38;
    goto joined_r0x00014194ac6c;
  }
  FUN_141958a60(param_1,0);
  plVar5 = *(longlong **)(param_4 + 0x28);
  lVar6 = *(longlong *)(param_4 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar6 == DAT_1469eaca8) {
LAB_14194ab99:
    bVar7 = true;
  }
  else {
    if (*(char *)(param_1 + 0x38a) != '\0') {
      if (local_48 == DAT_1469e9958) goto LAB_14194ab99;
      plVar12 = *(longlong **)(param_1 + 0x390);
      plVar2 = plVar12 + (longlong)*(int *)(param_1 + 0x398) * 3;
      for (; plVar12 != plVar2; plVar12 = plVar12 + 3) {
        if (*plVar12 == local_48) goto LAB_14194ab99;
      }
    }
    bVar7 = false;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (!bVar7) {
    local_30 = local_48;
    local_28 = local_40;
    local_20 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_141955d50(param_1,&local_30,bVar10 == 4,bVar10 == 1,bVar10 == 2,bVar10 == 8);
  }
  FReply::Handled(param_2);
  plVar5 = local_38;
joined_r0x00014194ac6c:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      local_38 = plVar5;
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



// FUNCTION 14194acc0 OnKeyUp body=275 status=ok
// SIG undefined OnKeyUp(void)

undefined1 * SSlider::OnKeyUp(longlong param_1,undefined1 *param_2)

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
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    local_c8[0] = 1;
    local_c0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_14 = local_14 & 0xffffff00;
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
    local_18 = 0x20702;
    FUN_140439160(param_2,local_c8);
    FUN_140438c20(local_c8);
  }
  return param_2;
}



// FUNCTION 14194ade0 FUN_14194ade0 body=549 status=ok
// SIG undefined FUN_14194ade0(void)

void FUN_14194ade0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined1 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined2 local_10;
  
  *(undefined1 *)(param_1 + 0x298) = 1;
  local_10._0_1_ = 0;
  local_28 = 0;
  local_10 = 0x100;
  plVar7 = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  local_10._1_1_ = 1;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2a8) != &local_20) {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2b0,&plStack_18);
  }
  plVar4 = plStack_18;
  *(undefined1 *)(param_1 + 0x2b9) = local_10._1_1_;
  *(undefined1 *)(param_1 + 0x2b8) = (undefined1)local_10;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_18 + 8))(plStack_18,1);
      }
    }
  }
  if ((undefined8 *)(param_1 + 0x220) != local_48) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    plVar4 = *(longlong **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (plVar4 != (longlong *)0x0) {
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
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x230) != &local_58) {
    *(undefined8 *)(param_1 + 0x230) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x238,&local_50);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if ((undefined8 *)(param_1 + 0x210) != local_38) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    plVar4 = *(longlong **)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = 0;
    if (plVar4 != (longlong *)0x0) {
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
  if ((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0x278) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x270);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,0);
    }
  }
  plVar7 = *(longlong **)(param_2 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return;
}



// FUNCTION 14194b010 FUN_14194b010 body=225 status=ok
// SIG undefined FUN_14194b010(void)

void FUN_14194b010(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_18;
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    local_18 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar6 = iVar4 == 0;
        if (bVar6) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = local_18, !bVar6) {
          LOCK();
          bVar6 = iVar4 == (int)plVar2[1];
          if (bVar6) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar6) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              local_18 = *(longlong **)(param_1 + 0x18);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar6 = iVar4 == 0;
          if (bVar6) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_10 = plVar5;
      FUN_14194ade0(param_1 + -0x208,&local_18);
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
      }
    }
  }
  return;
}



// FUNCTION 14194b100 OnMouseButtonDoubleClick body=24 status=ok
// SIG undefined OnMouseButtonDoubleClick(void)

undefined8 SButton::OnMouseButtonDoubleClick(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x58))();
  return param_2;
}



// FUNCTION 14194b120 FUN_14194b120 body=618 status=ok
// SIG undefined FUN_14194b120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14194b120(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
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
  bVar8 = lVar4 == DAT_1469e9898;
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (bVar8) {
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_118);
    plVar3 = (longlong *)puVar5[1];
    uVar6 = *puVar5;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_110 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar7 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
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
    local_128 = uVar6;
    local_120 = plVar3;
    uVar6 = FUN_140693ff0(local_108,&local_128);
    FUN_140438260(param_2,uVar6);
    FUN_140438c20(local_108);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 14194b390 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FUN_141988a60(*(undefined8 *)(param_1 + 0x220));
  return param_2;
}



// FUNCTION 14194b3b0 FUN_14194b3b0 body=1374 status=ok
// SIG undefined FUN_14194b3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14194b3b0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  longlong lVar11;
  char cVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar16 = *(longlong **)(param_4 + 0x48);
  lVar14 = *(longlong *)(param_4 + 0x38);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  if ((lVar14 == DAT_1469e9868) && (*(int *)(param_1 + 0x514) == -1)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar16 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar16 = (longlong *)0x0;
  if (bVar10) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0))
       && (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar12 != '\0')) {
      if (*(int *)(param_1 + 0x300) != 0) {
        plVar16 = *(longlong **)(param_1 + 0x2f8);
      }
      uVar17 = (**(code **)(*plVar16 + 0x38))();
      *(undefined4 *)(param_1 + 0x2f0) = uVar17;
    }
    dVar9 = (double)*(float *)(param_1 + 0x2f0);
    auVar8._8_4_ = SUB84(dVar9,0);
    auVar8._0_8_ = dVar9;
    auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x520) = auVar8;
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_4 + 0x50);
    fVar5 = *(float *)(param_4 + 0x1c);
    lVar14 = param_1 + 8;
    *(int *)(param_1 + 0x518) =
         (int)ROUND(*(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x18) + 0.5) >> 1;
    *(int *)(param_1 + 0x51c) = (int)ROUND(fVar5 + fVar5 + 0.5) >> 1;
    puVar13 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar14,local_138);
    plVar16 = (longlong *)puVar13[1];
    uVar15 = *puVar13;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_130 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_148 = uVar15;
    local_140 = plVar16;
    puVar13 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar14,local_128);
    plVar6 = (longlong *)puVar13[1];
    local_160 = *puVar13;
    local_178 = plVar6 + 1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)local_178 = (int)*local_178 + 1;
      UNLOCK();
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_120 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    puVar13 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar14,local_118);
    local_168 = *puVar13;
    plVar7 = (longlong *)puVar13[1];
    local_170 = plVar7 + 1;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)local_170 = (int)*local_170 + 1;
      UNLOCK();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_110 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    local_158 = local_168;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_54 = local_54 & 0xffffff00;
    local_108[0] = 1;
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
    local_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_58 = 0x20702;
    local_150 = plVar7;
    lVar14 = FUN_140693ff0(local_108,&local_158);
    local_188 = local_160;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)local_178 = (int)*local_178 + 1;
      UNLOCK();
    }
    local_180 = plVar6;
    if ((undefined8 *)(lVar14 + 0x38) != &local_188) {
      *(undefined8 *)(lVar14 + 0x38) = local_160;
      local_188 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar14 + 0x40,&local_180);
    }
    plVar2 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_180 + 1;
      lVar11 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    *(uint *)(lVar14 + 0xb4) = *(uint *)(lVar14 + 0xb4) | 0x20;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    uVar15 = FUN_14185b9a0(lVar14,&local_148,0,0);
    FUN_140438260(param_2,uVar15);
    FUN_140438c20(local_108);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      lVar14 = *local_170;
      *(int *)local_170 = (int)*local_170 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar14 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar16 + 1;
      lVar14 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
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



// FUNCTION 14194b910 FUN_14194b910 body=1045 status=ok
// SIG undefined FUN_14194b910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14194b910(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_388 [32];
  char local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_294;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  plVar11 = (longlong *)0x0;
  local_360 = 0;
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
  if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar6 != '\0')) {
    plVar9 = plVar11;
    if ((int)param_1[0x15] != 0) {
      plVar9 = (longlong *)param_1[0x14];
    }
    uVar7 = (**(code **)(*plVar9 + 0x38))();
    *(undefined1 *)(param_1 + 0x13) = uVar7;
  }
  if ((char)param_1[0x13] == '\0') {
    plVar9 = (longlong *)CONCAT44(uStack_35c,local_360);
    plVar12 = plVar11;
LAB_14194ba46:
    local_368 = '\0';
  }
  else {
    plVar9 = *(longlong **)(param_4 + 0x48);
    lVar3 = *(longlong *)(param_4 + 0x38);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if ((lVar3 != DAT_1469e9868) && (plVar12 = (longlong *)0x1, *(char *)(param_4 + 0x5c) == '\0'))
    goto LAB_14194ba46;
    local_368 = '\x01';
    plVar12 = (longlong *)0x1;
  }
  if ((plVar12 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar3 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  if (local_368 != '\0') {
    (**(code **)(*param_1 + 0x220))(param_1);
    param_1[0x7a] = *(longlong *)(param_4 + 0x18);
    if ((char)param_1[0x90] == '\x01') {
      if ((((int)param_1[0x81] == 0) || ((longlong *)param_1[0x80] == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)param_1[0x80] + 0x18))(), cVar6 == '\0')) {
        local_288[0] = 1;
        local_258 = 0;
        uStack_250 = 0;
        bVar5 = false;
        bVar4 = true;
        local_248 = 0;
        uStack_240 = 0;
        local_1d4 = local_1d4 & 0xffffff00;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_280 = 0;
        local_278 = 0;
        local_268 = 0;
        local_260 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1d8 = 0x20702;
        puVar10 = local_288;
      }
      else {
        bVar5 = true;
        bVar4 = false;
        if ((int)param_1[0x81] != 0) {
          plVar11 = (longlong *)param_1[0x80];
        }
        (**(code **)(*plVar11 + 0x38))(plVar11,local_108);
        puVar10 = local_108;
      }
      FUN_140439160(param_2,puVar10);
      if (bVar4) {
        FUN_140438c20(local_288);
      }
      if (!bVar5) goto LAB_14194bcf9;
      puVar10 = local_108;
    }
    else if (((*(char *)((longlong)param_1 + 0x481) == '\x01') &&
             (*(char *)(param_4 + 0x5c) != '\0')) ||
            (((char)param_1[0x90] == '\x03' && (*(char *)(param_4 + 0x5c) == '\0')))) {
      local_294 = local_294 & 0xffffff00;
      local_348[0] = 1;
      local_318 = 0;
      uStack_310 = 0;
      local_308 = 0;
      uStack_300 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_340 = 0;
      local_338 = 0;
      local_328 = 0;
      local_320 = 0;
      local_2c8 = 0;
      local_2c0 = 0;
      local_298 = 0x20702;
      FUN_140439160(param_2,local_348);
      puVar10 = local_348;
    }
    else {
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
      uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,&local_360);
      uVar8 = FUN_140693ff0(local_1c8,uVar8);
      FUN_140459130(param_2,uVar8);
      puVar10 = local_1c8;
    }
    FUN_140438c20(puVar10);
  }
LAB_14194bcf9:
  FUN_1418475e0(param_1,1);
  return param_2;
}



// FUNCTION 14194bd30 FUN_14194bd30 body=2275 status=ok
// SIG undefined FUN_14194bd30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14194bd30(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_6c8 [32];
  undefined1 *local_6a8;
  longlong local_6a0;
  undefined4 *local_698;
  undefined1 local_690;
  undefined8 *local_688;
  undefined1 *local_680;
  undefined1 local_678;
  undefined1 local_668;
  undefined1 local_667;
  int local_664;
  undefined4 local_660 [2];
  longlong local_658;
  undefined1 local_650 [8];
  longlong *local_648;
  undefined1 local_640 [8];
  longlong *local_638;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [24];
  undefined1 local_5e8 [8];
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined1 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined4 local_538;
  uint local_534;
  undefined1 local_528 [8];
  undefined8 local_520;
  undefined8 local_518;
  undefined1 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  uint local_474;
  undefined1 local_468 [8];
  undefined8 local_460 [36];
  undefined8 *local_340;
  int local_338;
  undefined4 uStack_334;
  undefined1 local_330;
  undefined8 local_328;
  longlong *local_320;
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
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [320];
  longlong *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  bVar7 = false;
  local_660[0] = 0;
  plVar15 = *(longlong **)(param_4 + 0x48);
  lVar16 = *(longlong *)(param_4 + 0x38);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  bVar18 = lVar16 != DAT_1469e9868;
  local_658 = param_4;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar16 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (bVar18) {
    plVar15 = *(longlong **)(param_4 + 0x48);
    lVar16 = *(longlong *)(param_4 + 0x38);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    if ((((lVar16 == DAT_1469e9880) && (*(int *)(param_1 + 0x438) != 0)) &&
        (*(longlong **)(param_1 + 0x430) != (longlong *)0x0)) &&
       (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x18))(), cVar8 != '\0')) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar15 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    if (bVar18) {
      puVar12 = *(undefined1 **)(param_4 + 0x10);
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)FWidgetPath::FWidgetPath(local_1a8);
        bVar18 = false;
        local_664 = 4;
      }
      else {
        local_468[0] = *puVar12;
        local_340 = (undefined8 *)0x0;
        iVar17 = *(int *)(puVar12 + 0x130);
        puVar13 = *(undefined8 **)(puVar12 + 0x128);
        local_338 = iVar17;
        if (iVar17 == 0) {
          uStack_334 = 0;
        }
        else {
          FUN_141857eb0(local_460,iVar17);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)(puVar12 + 8);
          }
          puVar14 = local_460;
          if (local_340 != (undefined8 *)0x0) {
            puVar14 = local_340;
          }
          do {
            uVar10 = puVar13[1];
            *puVar14 = *puVar13;
            puVar14[1] = uVar10;
            uVar10 = puVar13[3];
            puVar14[2] = puVar13[2];
            puVar14[3] = uVar10;
            uVar4 = *(undefined4 *)((longlong)puVar13 + 0x24);
            uVar5 = *(undefined4 *)(puVar13 + 5);
            uVar6 = *(undefined4 *)((longlong)puVar13 + 0x2c);
            *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar13 + 4);
            *(undefined4 *)((longlong)puVar14 + 0x24) = uVar4;
            *(undefined4 *)(puVar14 + 5) = uVar5;
            *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar6;
            puVar14[6] = puVar13[6];
            puVar14[7] = puVar13[7];
            lVar16 = puVar13[8];
            puVar14[8] = lVar16;
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              UNLOCK();
            }
            puVar13 = puVar13 + 9;
            iVar17 = iVar17 + -1;
            puVar14 = puVar14 + 9;
          } while (iVar17 != 0);
        }
        local_330 = puVar12[0x138];
        local_328 = *(undefined8 *)(puVar12 + 0x140);
        local_320 = *(longlong **)(puVar12 + 0x148);
        if (local_320 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_320 + 1) = (int)local_320[1] + 1;
          UNLOCK();
        }
        local_318 = (undefined8 *)0x0;
        iVar17 = *(int *)(puVar12 + 0x158);
        puVar13 = *(undefined8 **)(puVar12 + 0x150);
        local_310 = iVar17;
        if (iVar17 == 0) {
          uStack_30c = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_318,iVar17);
          puVar14 = local_318;
          do {
            *puVar14 = *puVar13;
            lVar16 = puVar13[1];
            puVar14[1] = lVar16;
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              UNLOCK();
            }
            puVar14 = puVar14 + 2;
            puVar13 = puVar13 + 2;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        bVar18 = true;
        local_664 = 0;
        bVar7 = true;
        puVar12 = local_468;
      }
      local_308[0] = *puVar12;
      local_1e0 = 0;
      if (*(longlong *)(puVar12 + 0x128) == 0) {
        _guard_xfg_dispatch_icall_nop(local_300,puVar12 + 8,0x120);
      }
      if (local_1e0 != 0) {
        FMemory::Free();
      }
      plVar15 = (longlong *)0x0;
      local_1e0 = *(undefined8 *)(puVar12 + 0x128);
      *(undefined8 *)(puVar12 + 0x128) = 0;
      local_1d8 = *(undefined4 *)(puVar12 + 0x130);
      local_1d4 = *(undefined4 *)(puVar12 + 0x134);
      *(undefined8 *)(puVar12 + 0x130) = 0;
      local_1d0 = puVar12[0x138];
      local_1c8 = *(undefined8 *)(puVar12 + 0x140);
      local_1c0 = *(longlong **)(puVar12 + 0x148);
      *(undefined8 *)(puVar12 + 0x148) = 0;
      *(undefined8 *)(puVar12 + 0x140) = 0;
      local_1b8 = 0;
      local_1b8 = *(undefined8 *)(puVar12 + 0x150);
      *(undefined8 *)(puVar12 + 0x150) = 0;
      local_1b0 = *(undefined4 *)(puVar12 + 0x158);
      local_1ac = *(undefined4 *)(puVar12 + 0x15c);
      *(undefined8 *)(puVar12 + 0x158) = 0;
      if (local_664 != 0) {
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_58);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar17 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        FUN_140456b10(local_1a0);
        bVar18 = bVar7;
      }
      if (bVar18) {
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_318);
        plVar1 = local_320;
        if (local_320 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_320 + 1;
          lVar16 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_320)(local_320);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar17 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
        FUN_140456b10(local_460);
      }
      local_667 = 0;
      local_660[0] = 5;
      if (*(int *)(param_1 + 0x438) != 0) {
        plVar15 = *(longlong **)(param_1 + 0x430);
      }
      (**(code **)(*plVar15 + 0x38))(plVar15,local_650);
      uVar10 = DAT_1469f4590;
      lVar16 = local_658 + 0x18;
      uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_630);
      local_678 = 1;
      local_680 = &local_668;
      local_688 = &DAT_1468b5d88;
      local_698 = local_660;
      local_690 = 1;
      local_6a8 = local_650;
      local_6a0 = lVar16;
      FUN_1418b8580(uVar10,local_640,uVar11,local_308);
      if (local_638 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_638 + 1;
        lVar16 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_638)(local_638);
          LOCK();
          piVar2 = (int *)((longlong)local_638 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_638 + 8))(local_638,1);
          }
        }
      }
      if (local_628 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_628 + 1;
        lVar16 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_628)(local_628);
          LOCK();
          piVar2 = (int *)((longlong)local_628 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_628 + 8))(local_628,1);
          }
        }
      }
      if (local_648 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_648 + 1;
        lVar16 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_648)(local_648);
          LOCK();
          piVar2 = (int *)((longlong)local_648 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_648 + 8))(local_648,1);
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
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1b8);
      plVar15 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1c0 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FUN_140456b10(local_300);
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
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  if (*(int *)(param_1 + 0x424) != 1) {
    local_474 = local_474 & 0xffffff00;
    local_528[0] = 1;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_520 = 0;
    local_518 = 0;
    local_508 = 0;
    local_500 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_478 = 0x20702;
    uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_610);
    uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_600);
    uVar11 = FUN_140693ff0(local_528,uVar11);
    uVar10 = FUN_14185b9a0(uVar11,uVar10,0,0);
    FUN_140438260(param_2,uVar10);
    FUN_140438c20(local_528);
    return param_2;
  }
  FUN_14195c4e0(param_1);
  pcVar9 = (char *)TAttribute<bool>::Get(param_1 + 0x300);
  if (*pcVar9 == '\x01') {
    lVar16 = param_1 + 0x458;
  }
  else {
    if (*pcVar9 != '\0') goto LAB_14194be2a;
    lVar16 = param_1 + 0x470;
  }
  FSlateApplication::PlaySound(DAT_1469f4590,lVar16,0);
LAB_14194be2a:
  local_534 = local_534 & 0xffffff00;
  local_5e8[0] = 1;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_568 = 0;
  local_560 = 0;
  local_538 = 0x20702;
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_620);
  uVar10 = FUN_14185b9a0(local_5e8,uVar10,0,0);
  FUN_140438260(param_2,uVar10);
  FUN_140438c20(local_5e8);
  return param_2;
}



// FUNCTION 14194c620 FUN_14194c620 body=264 status=ok
// SIG undefined FUN_14194c620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14194c620(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x298) != 0) && (*(longlong **)(param_1 + 0x290) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x290) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x298) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x290) + 0x38))
                (*(longlong **)(param_1 + 0x290),param_2,param_3,param_4);
      return param_2;
    }
    (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3,param_4);
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



// FUNCTION 14194c730 FUN_14194c730 body=1273 status=ok
// SIG undefined FUN_14194c730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_14194c730(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong *local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  cVar5 = FUN_141846080();
  if (cVar5 == '\0') {
    plVar3 = *(longlong **)(param_4 + 0x48);
    lVar4 = *(longlong *)(param_4 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    bVar9 = lVar4 == DAT_1469e9868;
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
    if (bVar9) {
      _DAT_1469f4798 = 0;
      FUN_141926de0(param_1,0);
      puVar6 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1f0);
      plVar3 = (longlong *)puVar6[1];
      uVar7 = *puVar6;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1e8 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
          }
        }
      }
      plVar8 = plVar3 + 1;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar8 = (int)*plVar8 + 1;
        UNLOCK();
      }
      local_208 = DAT_1469e9868;
      local_200 = DAT_1469e9870;
      local_1f8 = DAT_1469e9878;
      if (DAT_1469e9878 != 0) {
        LOCK();
        *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
        UNLOCK();
      }
      local_114 = local_114 & 0xffffff00;
      local_1c8[0] = 1;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
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
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0x20702;
      local_228 = uVar7;
      local_220 = plVar3;
      uVar7 = FUN_140466100(local_1c8,&local_228,&local_208);
      FUN_140438260(param_2,uVar7);
      FUN_140438c20(local_1c8);
      if (plVar3 == (longlong *)0x0) {
        return param_2;
      }
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
      LOCK();
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return param_2;
    }
    plVar3 = *(longlong **)(param_4 + 0x48);
    lVar4 = *(longlong *)(param_4 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    bVar9 = lVar4 == DAT_1469e9898;
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
    if (bVar9) {
      puVar6 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1e0);
      plVar3 = (longlong *)puVar6[1];
      uVar7 = *puVar6;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1d8 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)local_1d8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
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
      local_218 = uVar7;
      local_210 = plVar3;
      uVar7 = FUN_140693ff0(local_108,&local_218);
      FUN_140438260(param_2,uVar7);
      FUN_140438c20(local_108);
      if (plVar3 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return param_2;
    }
    plVar3 = *(longlong **)(param_4 + 0x48);
    lVar4 = *(longlong *)(param_4 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    bVar9 = lVar4 == DAT_1469e9880;
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
    if (bVar9) {
      FUN_141926de0(param_1,0);
      FReply::Unhandled(param_2);
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



// FUNCTION 14194cc30 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FUN_141988b90(*(undefined8 *)(param_1 + 0x220));
  return param_2;
}



// FUNCTION 14194cc50 FUN_14194cc50 body=264 status=ok
// SIG undefined FUN_14194cc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14194cc50(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x270) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x268) + 0x38))
                (*(longlong **)(param_1 + 0x268),param_2,param_3,param_4);
      return param_2;
    }
    (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3,param_4);
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



// FUNCTION 14194cd60 FUN_14194cd60 body=592 status=ok
// SIG undefined FUN_14194cd60(void)

undefined8 FUN_14194cd60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((*(char *)(param_1 + 0x2f0) == '\0') && (*(char *)(param_1 + 0x318) != '\0')) {
    uVar6 = FUN_14193e740(param_1 + 0x2f8);
    cVar5 = FKey::IsValid(uVar6);
    plVar4 = DAT_1469e9890;
    lVar3 = DAT_1469e9880;
    if (cVar5 != '\0') {
      if (DAT_1469e9890 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469e9890 + 1) = (int)DAT_1469e9890[1] + 1;
        UNLOCK();
      }
      plVar2 = *(longlong **)(param_4 + 0x30);
      iVar10 = -1;
      iVar9 = iVar10;
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar7 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar7 = plVar2 + 7;
        }
        iVar8 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                        (longlong)(int)plVar2[9] - 1U) * 4);
        if (iVar8 != -1) {
          do {
            iVar9 = iVar8;
            if (*(longlong *)((longlong)iVar8 * 0x20 + *plVar2) == lVar3) break;
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *plVar2);
            iVar9 = iVar10;
          } while (iVar8 != -1);
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
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar4 = DAT_1469eae38;
      local_60 = DAT_1469eae30;
      local_68 = DAT_1469eae28;
      if (iVar9 != -1) {
        if (DAT_1469eae38 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
          UNLOCK();
        }
        local_58 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_50 = local_50 & 0xfffffff0;
        local_48 = 1;
        local_40 = 0;
        local_38 = 0;
        FKey::operator=(param_1 + 0x2f8,&local_68);
        *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffff0;
        *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | local_50 & 0xf;
        *(undefined1 *)(param_1 + 0x318) = local_48;
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,&local_40);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
        plVar2 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_58 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
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
        FReply::Handled(param_2);
        return param_2;
      }
    }
  }
  FUN_1417c9ad0(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14194cfb0 FUN_14194cfb0 body=717 status=ok
// SIG undefined FUN_14194cfb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14194cfb0(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar9 = *(longlong **)(param_4 + 0x48);
  lVar4 = *(longlong *)(param_4 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9868) && (cVar6 = FUN_141945400(), cVar6 == '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
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
  if (bVar5) {
    plVar9 = (longlong *)0x0;
    if ((((int)param_1[0x61] != 0) && ((longlong *)param_1[0x60] != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*(longlong *)param_1[0x60] + 0x18))(), cVar6 != '\0')) {
      if ((int)param_1[0x61] != 0) {
        plVar9 = (longlong *)param_1[0x60];
      }
      (**(code **)(*plVar9 + 0x40))();
    }
    lVar4 = *param_1;
    FUN_1419548b0(param_1,param_3,param_4 + 0x20);
    (**(code **)(lVar4 + 0x208))(param_1);
    FUN_141955ce0(param_1);
    puVar7 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_128);
    plVar9 = (longlong *)puVar7[1];
    uVar8 = *puVar7;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_64 = local_64 & 0xffffff00;
    local_118[0] = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_110 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_68 = 0x20702;
    local_138 = uVar8;
    local_130 = plVar9;
    uVar8 = FUN_140693ff0(local_118,&local_138);
    FUN_140438260(param_2,uVar8);
    FUN_140438c20(local_118);
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



// FUNCTION 14194d280 FUN_14194d280 body=801 status=ok
// SIG undefined FUN_14194d280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14194d280(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong *local_1d0;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (((lVar5 == DAT_1469e9868) && (*(int *)(param_1 + 0x514) == *(int *)(param_4 + 0x50))) &&
     (cVar7 = FUN_141846080(), cVar7 != '\0')) {
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
    if (*(char *)(param_1 + 0x510) != '\0') {
      pfVar8 = (float *)TAttribute<float>::Get(param_1 + 0x3b0);
      dVar11 = *(double *)(param_1 + 0x520);
      if (*pfVar8 != 0.0) {
        dVar11 = (double)SSpinBox<float>::Snap(SUB84(dVar11,0),SUB84((double)*pfVar8,0));
        *(double *)(param_1 + 0x520) = dVar11;
      }
      TBaseDelegate<void,float,enum_ETextCommit::Type>::ExecuteIfBound
                (param_1 + 0x318,(float)dVar11,1);
      TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x338);
    }
    local_114 = local_114 & 0xffffff00;
    *(undefined1 *)(param_1 + 0x510) = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
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
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    *(undefined4 *)(param_1 + 0x514) = 0xffffffff;
    local_1c8[0] = 1;
    local_118 = 0x20702;
    uVar9 = FUN_1406a1ac0(local_1c8);
    FUN_140438260(local_108,uVar9);
    FUN_140438c20(local_1c8);
    if (*(char *)(param_4 + 0x5c) == '\0') {
      FReply::SetMousePos(local_108,param_1 + 0x518);
    }
    fVar10 = (float)FUN_14189c9c0(DAT_1469f4590);
    if (*(float *)(param_1 + 0x3a8) <= fVar10 && fVar10 != *(float *)(param_1 + 0x3a8)) {
      FUN_14193b4e0(param_1);
      local_1d8 = *(undefined8 *)(param_1 + 0x358);
      plVar4 = *(longlong **)(param_1 + 0x360);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_1d0 = plVar4;
      FUN_14185b9a0(local_108,&local_1d8,2,0);
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



// FUNCTION 14194d5b0 FUN_14194d5b0 body=1009 status=ok
// SIG undefined FUN_14194d5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14194d5b0(longlong *param_1,char *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_208 [32];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  uint uStack_1cc;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  bVar5 = false;
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
  local_1d0 = 0;
  if (((((char)param_1[0x90] == '\0') ||
       ((*(char *)((longlong)param_1 + 0x481) == '\x01' && (*(char *)(param_4 + 0x5c) != '\0')))) ||
      (((char)param_1[0x90] == '\x03' && (*(char *)(param_4 + 0x5c) == '\0')))) &&
     ((*(byte *)((longlong)param_1 + 0x483) & 2) == 0)) {
    plVar9 = (longlong *)((ulonglong)uStack_1cc << 0x20);
LAB_14194d6d8:
    bVar4 = false;
  }
  else {
    plVar9 = *(longlong **)(param_4 + 0x48);
    lVar3 = *(longlong *)(param_4 + 0x38);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if ((lVar3 != DAT_1469e9868) && (bVar5 = true, *(char *)(param_4 + 0x5c) == '\0'))
    goto LAB_14194d6d8;
    bVar4 = true;
    bVar5 = true;
  }
  if ((bVar5) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  plVar9 = (longlong *)0x0;
  if (!bVar4) goto LAB_14194d93f;
  (**(code **)(*param_1 + 0x228))(param_1);
  if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar6 != '\0')) {
    plVar8 = plVar9;
    if ((int)param_1[0x15] != 0) {
      plVar8 = (longlong *)param_1[0x14];
    }
    uVar7 = (**(code **)(*plVar8 + 0x38))();
    *(undefined1 *)(param_1 + 0x13) = uVar7;
  }
  if (((char)param_1[0x13] != '\0') && ((char)param_1[0x90] != '\x01')) {
    cVar6 = (**(code **)(*param_1 + 0x1a8))(param_1);
    if (cVar6 == '\0') {
      if (*(char *)(param_4 + 0x5c) != '\0') {
        local_1e8 = param_3[0xb];
        local_1d8 = param_3[1] * param_3[9];
        local_1e0 = *param_3 * param_3[7];
        local_1d4 = param_3[1] * param_3[10];
        local_1dc = *param_3 * param_3[8];
        local_1e4 = param_3[0xc];
        cVar6 = FSlateRotatedRect::IsUnderLocation(&local_1e8,param_4 + 0x18);
        if (cVar6 != '\0') goto LAB_14194d81b;
      }
    }
    else {
LAB_14194d81b:
      if ((*(char *)((longlong)param_1 + 0x481) == '\x01') && (*(char *)(param_4 + 0x5c) != '\0')) {
        cVar6 = (char)param_1[0x90];
        bVar5 = true;
      }
      else {
        cVar6 = (char)param_1[0x90];
        if ((cVar6 == '\x03') && (*(char *)(param_4 + 0x5c) == '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
      if (cVar6 == '\x02') {
LAB_14194d868:
        bVar4 = true;
      }
      else {
        cVar6 = FUN_141846080(param_1);
        bVar4 = false;
        if (cVar6 != '\0') goto LAB_14194d868;
      }
      if ((((bVar5) || (bVar4)) && ((int)param_1[0x81] != 0)) &&
         (((longlong *)param_1[0x80] != (longlong *)0x0 &&
          (cVar6 = (**(code **)(*(longlong *)param_1[0x80] + 0x18))(), cVar6 != '\0')))) {
        if ((int)param_1[0x81] != 0) {
          plVar9 = (longlong *)param_1[0x80];
        }
        (**(code **)(*plVar9 + 0x38))(plVar9,local_108);
        FUN_140439160(param_2,local_108);
        FUN_140438c20(local_108);
      }
    }
  }
  if (*param_2 == '\0') {
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
    FUN_140439160(param_2,local_1c8);
    FUN_140438c20(local_1c8);
  }
LAB_14194d93f:
  if ((*(longlong *)(param_2 + 0x38) == 0) && (cVar6 = FUN_141846080(param_1), cVar6 != '\0')) {
    FUN_1406a1ac0(param_2);
  }
  FUN_1418475e0(param_1,1);
  return param_2;
}



// FUNCTION 14194d9b0 FUN_14194d9b0 body=644 status=ok
// SIG undefined FUN_14194d9b0(void)

undefined1 * FUN_14194d9b0(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  
  plVar4 = *(longlong **)(param_4 + 0x48);
  lVar5 = *(longlong *)(param_4 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar5 != DAT_1469e9868;
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
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x424) != 1) {
    local_108 = param_3[0xb];
    local_f8 = param_3[1] * param_3[9];
    local_100 = *param_3 * param_3[7];
    local_f4 = param_3[1] * param_3[10];
    local_fc = *param_3 * param_3[8];
    local_104 = param_3[0xc];
    cVar6 = FSlateRotatedRect::IsUnderLocation(&local_108,param_4 + 0x18);
    if ((cVar6 != '\0') &&
       ((*(int *)(param_1 + 0x424) == 2 || (cVar6 = FUN_141846080(param_1), cVar6 != '\0')))) {
      FUN_14195c4e0(param_1);
      pcVar7 = (char *)TAttribute<bool>::Get(param_1 + 0x300);
      if (*pcVar7 == '\x01') {
        param_1 = param_1 + 0x458;
      }
      else {
        if (*pcVar7 != '\0') goto LAB_14194db31;
        param_1 = param_1 + 0x470;
      }
      FSlateApplication::PlaySound(DAT_1469f4590,param_1,0);
    }
  }
LAB_14194db31:
  local_34 = local_34 & 0xffffff00;
  local_e8[0] = 1;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x20702;
  uVar8 = FUN_1406a1ac0(local_e8);
  FUN_140438260(param_2,uVar8);
  FUN_140438c20(local_e8);
  return param_2;
}



// FUNCTION 14194dc40 FUN_14194dc40 body=767 status=ok
// SIG undefined FUN_14194dc40(void)

undefined1 * FUN_14194dc40(undefined8 param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
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
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  
  cVar6 = FUN_141846080();
  if (cVar6 != '\0') {
    plVar4 = *(longlong **)(param_4 + 0x48);
    lVar5 = *(longlong *)(param_4 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    bVar8 = lVar5 == DAT_1469e9868;
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
    if (bVar8) {
      local_f4 = local_f4 & 0xffffff00;
      local_1a8[0] = 1;
      local_1a0 = 0;
      local_198 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0x20702;
      uVar7 = FUN_1406a1ac0(local_1a8);
      FUN_140438260(param_2,uVar7);
      FUN_140438c20(local_1a8);
      return param_2;
    }
    plVar4 = *(longlong **)(param_4 + 0x48);
    lVar5 = *(longlong *)(param_4 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    bVar8 = lVar5 == DAT_1469e9898;
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
    if (bVar8) {
      local_1c8 = param_3[0xb];
      local_1b8 = param_3[1] * param_3[9];
      local_1c0 = *param_3 * param_3[7];
      local_1b4 = param_3[1] * param_3[10];
      local_1bc = *param_3 * param_3[8];
      local_1c4 = param_3[0xc];
      cVar6 = FSlateRotatedRect::IsUnderLocation(&local_1c8,param_4 + 0x18);
      if (cVar6 != '\0') {
        FUN_141955b60(param_1);
      }
      local_34 = local_34 & 0xffffff00;
      local_e8[0] = 1;
      local_e0 = 0;
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0x20702;
      uVar7 = FUN_1406a1ac0(local_e8);
      FUN_140438260(param_2,uVar7);
      FUN_140438c20(local_e8);
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



// FUNCTION 14194df40 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FUN_1419892c0(*(undefined8 *)(param_1 + 0x220));
  return param_2;
}



// FUNCTION 14194df60 FUN_14194df60 body=558 status=ok
// SIG undefined FUN_14194df60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14194df60(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar8 = *(longlong **)(param_4 + 0x48);
  lVar4 = *(longlong *)(param_4 + 0x38);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9868) && (cVar6 = FUN_141846080(), cVar6 != '\0')) {
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
    local_58 = 1;
    local_48 = 0;
    local_40 = 0;
    local_54 = 1;
    local_50 = 1;
    FUN_14185a850(param_1,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0))
       && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar6 != '\0')) {
      if (*(int *)(param_1 + 0x318) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x310);
      }
      (**(code **)(*plVar8 + 0x40))();
    }
    FUN_141955ce0(param_1);
    local_64 = local_64 & 0xffffff00;
    local_118[0] = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_110 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_68 = 0x20702;
    uVar7 = FUN_1406a1ac0(local_118);
    FUN_140438260(param_2,uVar7);
    FUN_140438c20(local_118);
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



// FUNCTION 14194e1a0 FUN_14194e1a0 body=222 status=ok
// SIG undefined FUN_14194e1a0(void)

void FUN_14194e1a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar1 != '\0')) {
    plVar3 = plVar4;
    if (*(int *)(param_1 + 0xa8) != 0) {
      plVar3 = *(longlong **)(param_1 + 0xa0);
    }
    uVar2 = (**(code **)(*plVar3 + 0x38))();
    *(undefined1 *)(param_1 + 0x98) = uVar2;
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x450,0);
  }
  SWidget::OnMouseEnter(param_1,param_2,param_3);
  if (((*(int *)(param_1 + 0x438) != 0) && (*(longlong **)(param_1 + 0x430) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x438) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x430);
    }
    (**(code **)(*plVar4 + 0x40))(plVar4);
  }
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 14194e280 FUN_14194e280 body=75 status=ok
// SIG undefined FUN_14194e280(void)

void FUN_14194e280(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x440,0);
  SWidget::OnMouseEnter(param_1,param_2,param_3);
  return;
}



// FUNCTION 14194e2d0 FUN_14194e2d0 body=146 status=ok
// SIG undefined FUN_14194e2d0(void)

void FUN_14194e2d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  SWidget::OnMouseLeave();
  if ((((char)param_1[0x90] == '\x01') ||
      ((*(char *)((longlong)param_1 + 0x481) == '\x01' && (*(char *)(param_2 + 0x5c) != '\0')))) ||
     (((char)param_1[0x90] == '\x03' && (*(char *)(param_2 + 0x5c) == '\0')))) {
    (**(code **)(*param_1 + 0x228))(param_1);
  }
  if (((int)param_1[0x89] != 0) && ((longlong *)param_1[0x88] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x88] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[0x89] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)param_1[0x88];
      }
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 14194e370 FUN_14194e370 body=36 status=ok
// SIG undefined FUN_14194e370(void)

void FUN_14194e370(longlong param_1)

{
  SWidget::OnMouseLeave();
  if (*(int *)(param_1 + 0x424) == 1) {
    *(undefined1 *)(param_1 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 14194e3a0 FUN_14194e3a0 body=1422 status=ok
// SIG undefined FUN_14194e3a0(void)

undefined1 * FUN_14194e3a0(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  uint uVar15;
  
  if (*(int *)(param_1 + 0x514) == *(int *)(param_4 + 0x50)) {
    cVar3 = FUN_141846080();
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x510) == '\0') {
        *(float *)(param_1 + 0x3a8) = ABS(*(float *)(param_4 + 0x28)) + *(float *)(param_1 + 0x3a8);
        fVar7 = (float)FUN_14189c9c0(DAT_1469f4590);
        if (fVar7 < *(float *)(param_1 + 0x3a8)) {
          FUN_14193bab0(param_1);
          *(undefined1 *)(param_1 + 0x510) = 1;
          TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x328);
        }
        fVar7 = *(float *)(param_4 + 0x1c);
        *(int *)(param_1 + 0x518) =
             (int)ROUND(*(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x18) + 0.5) >> 1;
        *(int *)(param_1 + 0x51c) = (int)ROUND(fVar7 + fVar7 + 0.5) >> 1;
        *param_2 = 1;
        goto LAB_14194e89b;
      }
      fVar7 = param_3[2] * *param_3;
      if (fVar7 <= 100.0) {
        fVar7 = 100.0;
      }
      piVar4 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x3c8);
      if ((1 < *piVar4) && ((*(byte *)(param_4 + 8) & 3) != 0)) {
        fVar7 = fVar7 * (float)*piVar4;
      }
      if ((*(byte *)(param_4 + 8) & 0xc) != 0) {
        fVar13 = *(float *)(param_4 + 0x28) / fVar7;
        pcVar5 = (char *)TAttribute<bool>::Get(param_1 + 0x4a8);
        if (*pcVar5 != '\0') {
          fVar8 = (float)SSpinBox<float>::GetMaxSliderValue(param_1);
          if ((double)fVar8 == *(double *)(param_1 + 0x520)) {
            FUN_141928260(param_1,fVar13,0);
            goto LAB_14194e541;
          }
        }
        pcVar5 = (char *)TAttribute<bool>::Get(param_1 + 0x4c0);
        if (*pcVar5 != '\0') {
          fVar8 = (float)SSpinBox<float>::GetMinSliderValue(param_1);
          if ((double)fVar8 == *(double *)(param_1 + 0x520)) {
            FUN_1419284b0(param_1,fVar13,0);
          }
        }
      }
LAB_14194e541:
      if (*(char *)(param_1 + 0x378) == '\0') {
        if (*(char *)(param_1 + 0x414) == '\0') {
LAB_14194e5b2:
          bVar2 = false;
        }
        else {
          pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x410);
          fVar13 = (float)SSpinBox<float>::GetMinSliderValue(param_1);
          if (*pfVar6 <= fVar13) goto LAB_14194e5b2;
          pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x410);
          fVar13 = (float)SSpinBox<float>::GetMaxSliderValue(param_1);
          if (fVar13 < *pfVar6 || fVar13 == *pfVar6) goto LAB_14194e5b2;
          bVar2 = true;
        }
        pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x3f8);
        fVar13 = *pfVar6;
        uVar10 = SSpinBox<float>::GetMaxSliderValue(param_1);
        uVar11 = SSpinBox<float>::GetMinSliderValue(param_1);
        fVar8 = (float)SSpinBox<float>::Fraction(*(undefined8 *)(param_1 + 0x520),uVar11,uVar10);
        if (fVar13 != 1.0) {
          if (bVar2) {
            pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x410);
            uVar10 = SSpinBox<float>::GetMaxSliderValue(param_1);
            uVar11 = SSpinBox<float>::GetMinSliderValue(param_1);
            SSpinBox<float>::Fraction((double)*pfVar6,uVar11,uVar10);
            fVar8 = (float)SpinBoxComputeExponentSliderFraction();
          }
          else {
            fVar8 = _guard_xfg_dispatch_icall_nop(1.0 - fVar8,fVar13);
            fVar8 = 1.0 - fVar8;
          }
        }
        fVar8 = fVar8 * fVar7 + *(float *)(param_4 + 0x28);
        if (0.0 <= fVar8) {
          if (fVar7 <= fVar8) {
            fVar8 = fVar7;
          }
        }
        else {
          fVar8 = 0.0;
        }
        fVar8 = fVar8 / fVar7;
        fVar7 = 0.0;
        if ((0.0 <= fVar8) && (fVar7 = fVar8, 1.0 <= fVar8)) {
          fVar7 = 1.0;
        }
        if (fVar13 != 1.0) {
          if (bVar2) {
            pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x410);
            uVar10 = SSpinBox<float>::GetMaxSliderValue(param_1);
            uVar11 = SSpinBox<float>::GetMinSliderValue(param_1);
            SSpinBox<float>::Fraction((double)*pfVar6,uVar11,uVar10);
            fVar7 = (float)SpinBoxComputeExponentSliderFraction();
          }
          else {
            fVar7 = _guard_xfg_dispatch_icall_nop(1.0 - fVar7,1.0 / fVar13);
            fVar7 = 1.0 - fVar7;
          }
        }
        fVar13 = (float)SSpinBox<float>::GetMaxSliderValue(param_1);
        fVar8 = (float)SSpinBox<float>::GetMinSliderValue(param_1);
        dVar12 = (double)fVar8 * (double)(1.0 - fVar7) + (double)fVar7 * (double)fVar13;
      }
      else {
        if (*(float *)(param_4 + 0x28) <= 0.0) {
          fVar13 = -1.0;
        }
        else {
          fVar13 = 1.0;
        }
        if ((*(char *)(param_1 + 0x3e4) == '\0') || (*(char *)(param_1 + 0x3b4) == '\0')) {
LAB_14194e803:
          fVar8 = *(float *)(param_4 + 0x28);
          dVar12 = *(double *)(param_1 + 0x520);
          uVar14 = 0;
          uVar15 = 0x3ff00000;
          if ((1.0 <= ABS(dVar12)) &&
             (uVar14 = SUB84(dVar12,0), uVar15 = (uint)((ulonglong)dVar12 >> 0x20) & 0x7fffffff,
             3.4028234663852886e+38 <= ABS(dVar12))) {
            uVar14 = 0xe0000000;
            uVar15 = 0x47efffff;
          }
          pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x3f8);
          fVar9 = _guard_xfg_dispatch_icall_nop((float)(double)CONCAT44(uVar15,uVar14),*pfVar6);
          fVar9 = ABS(fVar8 / fVar7) * fVar13 * fVar9;
        }
        else {
          pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x3b0);
          if (*pfVar6 <= 0.0) goto LAB_14194e803;
          fVar7 = *(float *)(param_4 + 0x28);
          piVar4 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x3e0);
          iVar1 = *piVar4;
          pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x3f8);
          fVar8 = *pfVar6;
          pfVar6 = (float *)TAttribute<float>::Get(param_1 + 0x3b0);
          fVar9 = _guard_xfg_dispatch_icall_nop(*pfVar6,fVar8);
          fVar9 = ABS(fVar7 / (float)iVar1) * fVar13 * fVar9;
        }
        dVar12 = (double)fVar9 + *(double *)(param_1 + 0x520);
      }
      FUN_14192abd0(param_1,dVar12,0,1);
      *param_2 = 1;
      goto LAB_14194e89b;
    }
  }
  *param_2 = 0;
LAB_14194e89b:
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



// FUNCTION 14194e930 FUN_14194e930 body=246 status=ok
// SIG undefined FUN_14194e930(void)

undefined1 *
FUN_14194e930(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x218))();
  if ((cVar1 != '\0') &&
     (((*(char *)((longlong)param_1 + 0x481) == '\x01' && (*(char *)(param_4 + 0x5c) != '\0')) ||
      (((char)param_1[0x90] == '\x03' && (*(char *)(param_4 + 0x5c) == '\0')))))) {
    cVar1 = FSlateApplication::HasTraveledFarEnoughToTriggerDrag
                      (DAT_1469f4590,param_4,param_1[0x7a]);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x228))(param_1);
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



// FUNCTION 14194ea30 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FUN_141989cf0(*(undefined8 *)(param_1 + 0x220));
  return param_2;
}



// FUNCTION 14194ea50 FUN_14194ea50 body=331 status=ok
// SIG undefined FUN_14194ea50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14194ea50(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  int local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar2 = FUN_141846080();
  if (cVar2 != '\0') {
    cVar2 = FUN_141945400(param_1);
    if (cVar2 == '\0') {
      local_64 = 1;
      local_60 = 1;
      local_68 = ((int)param_1[0x48] != 0) + 3;
      local_58 = 0;
      local_50 = 0;
      FUN_14185a850(param_1,&local_68);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
      lVar1 = *param_1;
      uVar3 = FUN_1419548b0(param_1,param_3,param_4 + 0x20);
      (**(code **)(lVar1 + 0x208))(param_1,uVar3);
      FUN_141955ce0(param_1);
      *param_2 = 1;
      goto LAB_14194eb09;
    }
  }
  *param_2 = 0;
LAB_14194eb09:
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



// FUNCTION 14194eba0 FUN_14194eba0 body=59 status=ok
// SIG undefined FUN_14194eba0(void)

undefined8 FUN_14194eba0(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x130))();
    return param_2;
  }
  FUN_1417ca320(param_1);
  return param_2;
}



// FUNCTION 14194ebe0 FUN_14194ebe0 body=1761 status=ok
// SIG undefined FUN_14194ebe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14194ebe0(longlong *param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  float *local_148;
  byte local_140;
  byte local_138;
  char local_137;
  char local_136;
  undefined4 local_134;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  float local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  byte local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_118 = param_5;
  local_100 = param_4;
  local_f8 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x1a8))();
  if ((cVar2 == '\0') && ((char)param_1[0xa2] == '\0')) {
    lVar8 = param_1[0x72];
    local_110 = param_1[0x74];
  }
  else {
    lVar8 = param_1[0x71];
    local_110 = param_1[0x73];
  }
  plVar9 = (longlong *)0x0;
  if (param_8 == '\0') {
LAB_14194ecbb:
    local_138 = 0;
  }
  else {
    if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar2 != '\0')) {
      plVar7 = plVar9;
      if ((int)param_1[0x15] != 0) {
        plVar7 = (longlong *)param_1[0x14];
      }
      uVar3 = (**(code **)(*plVar7 + 0x38))();
      *(undefined1 *)(param_1 + 0x13) = uVar3;
    }
    if ((char)param_1[0x13] == '\0') goto LAB_14194ecbb;
    local_138 = 1;
  }
  cVar2 = *(char *)(lVar8 + 0x30);
  pfVar5 = (float *)(lVar8 + 0x20);
  local_136 = (local_138 ^ 1) << 5;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      pfVar5 = *(float **)(lVar8 + 0x38);
    }
    else if (cVar2 == '\x03') {
      pfVar5 = param_7 + 8;
    }
    else {
      pfVar5 = param_7 + 4;
    }
  }
  local_bc = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_bc & 0xfc;
  local_150 = &local_128;
  local_128 = CONCAT44(pfVar5[1] * param_7[1],*pfVar5 * *param_7);
  local_f0 = param_3[3];
  local_ec = param_3[4];
  local_158 = CONCAT71(local_158._1_7_,local_136);
  local_dc = *param_3;
  local_d8 = param_3[1];
  local_d4 = *(undefined8 *)(param_3 + 7);
  uStack_cc = *(undefined8 *)(param_3 + 9);
  local_e4 = 0;
  uStack_120 = CONCAT44(pfVar5[3] * param_7[3],pfVar5[2] * param_7[2]);
  local_e8 = param_3[2];
  local_c4 = *(undefined8 *)(param_3 + 0xb);
  FSlateDrawElement::MakeBox(local_118,param_6,&local_f0,lVar8);
  param_6 = param_6 + 1;
  local_130 = param_6;
  if ((char)param_1[0x6f] != '\0') goto LAB_14194f268;
  if ((((int)param_1[0x60] != 0) && ((longlong *)param_1[0x5f] != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x5f] + 0x18))(), cVar2 != '\0')) {
    plVar7 = plVar9;
    if ((int)param_1[0x60] != 0) {
      plVar7 = (longlong *)param_1[0x5f];
    }
    uVar10 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_1 + 0x5e) = uVar10;
  }
  dVar1 = (double)*(float *)(param_1 + 0x5e);
  if ((((int)param_1[0x78] != 0) && ((longlong *)param_1[0x77] != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x77] + 0x18))(), cVar2 != '\0')) {
    plVar7 = plVar9;
    if ((int)param_1[0x78] != 0) {
      plVar7 = (longlong *)param_1[0x77];
    }
    uVar10 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_1 + 0x76) = uVar10;
  }
  if (*(float *)(param_1 + 0x76) != 0.0) {
    dVar1 = (double)SSpinBox<float>::Snap(SUB84(dVar1,0),(double)*(float *)(param_1 + 0x76));
  }
  uVar10 = 0x7f7fffff;
  local_134 = 0x7f7fffff;
  pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x91);
  if (*(char *)(pfVar5 + 1) == '\0') {
    fVar15 = 3.4028235e+38;
  }
  else {
    fVar15 = *pfVar5;
  }
  uVar17 = 0xff7fffff;
  local_134 = 0xff7fffff;
  pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x8d);
  if (*(char *)(pfVar5 + 1) == '\0') {
    fVar11 = -3.4028235e+38;
  }
  else {
    fVar11 = *pfVar5;
  }
  dVar1 = (dVar1 * 0.5 - (double)fVar11 * 0.5) / ((double)fVar15 * 0.5 - (double)fVar11 * 0.5);
  dVar13 = 0.0;
  if ((0.0 <= dVar1) && (dVar13 = dVar1, 1.0 <= dVar1)) {
    dVar13 = 1.0;
  }
  fVar15 = (float)dVar13;
  if ((((int)param_1[0x81] != 0) && ((longlong *)param_1[0x80] != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x80] + 0x18))(), cVar2 != '\0')) {
    plVar7 = plVar9;
    if ((int)param_1[0x81] != 0) {
      plVar7 = (longlong *)param_1[0x80];
    }
    uVar12 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_1 + 0x7f) = uVar12;
  }
  fVar11 = *(float *)(param_1 + 0x7f);
  if (fVar11 != 1.0) {
    if (*(char *)((longlong)param_1 + 0x414) != '\0') {
      local_134 = 0xff7fffff;
      pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x8d);
      if (*(char *)(pfVar5 + 1) == '\0') {
        fVar16 = -3.4028235e+38;
      }
      else {
        fVar16 = *pfVar5;
      }
      pfVar5 = (float *)TAttribute<float>::Get(param_1 + 0x82);
      if (fVar16 < *pfVar5) {
        local_134 = 0x7f7fffff;
        pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x91);
        if (*(char *)(pfVar5 + 1) == '\0') {
          fVar16 = 3.4028235e+38;
        }
        else {
          fVar16 = *pfVar5;
        }
        pfVar5 = (float *)TAttribute<float>::Get(param_1 + 0x82);
        if (*pfVar5 <= fVar16 && fVar16 != *pfVar5) {
          local_134 = 0x7f7fffff;
          puVar6 = (undefined4 *)TAttribute<TOptional<float>_>::Get(param_1 + 0x91);
          if (*(char *)(puVar6 + 1) != '\0') {
            uVar10 = *puVar6;
          }
          local_134 = 0xff7fffff;
          puVar6 = (undefined4 *)TAttribute<TOptional<float>_>::Get(param_1 + 0x8d);
          if (*(char *)(puVar6 + 1) != '\0') {
            uVar17 = *puVar6;
          }
          pfVar5 = (float *)TAttribute<float>::Get(param_1 + 0x82);
          uVar14 = SSpinBox<float>::Fraction(SUB84((double)*pfVar5,0),uVar17,uVar10);
          fVar15 = (float)SpinBoxComputeExponentSliderFraction(fVar15,uVar14,fVar11);
          goto LAB_14194f0ca;
        }
      }
    }
    fVar15 = _guard_xfg_dispatch_icall_nop(1.0 - fVar15,fVar11);
    fVar15 = 1.0 - fVar15;
  }
LAB_14194f0ca:
  lVar8 = param_1[0x6b];
  fVar11 = *param_3;
  fVar16 = param_3[1];
  if (((*(int *)(lVar8 + 0xc0) == 0) || (*(longlong **)(lVar8 + 0xb8) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(lVar8 + 0xb8) + 0x18))(), cVar2 == '\0')) {
    local_137 = *(char *)(lVar8 + 0xb0);
  }
  else {
    if (*(int *)(lVar8 + 0xc0) != 0) {
      plVar9 = *(longlong **)(lVar8 + 0xb8);
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,&local_137);
    *(char *)(lVar8 + 0xb0) = local_137;
  }
  param_6 = local_130;
  if (local_137 != DAT_1464b9ee8) {
    cVar2 = *(char *)(local_110 + 0x30);
    pfVar5 = (float *)(local_110 + 0x20);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        pfVar5 = *(float **)(local_110 + 0x38);
      }
      else if (cVar2 == '\x03') {
        pfVar5 = param_7 + 8;
      }
      else {
        pfVar5 = param_7 + 4;
      }
    }
    local_ec = param_3[4];
    local_e8 = param_3[2];
    local_bc = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_bc & 0xfc;
    local_150 = &local_110;
    local_108 = pfVar5[2] * param_7[2];
    local_104 = pfVar5[3] * param_7[3];
    local_e4 = 0;
    local_128 = *(undefined8 *)(param_3 + 7);
    uStack_120 = *(undefined8 *)(param_3 + 9);
    local_158 = CONCAT71(local_158._1_7_,local_136);
    local_f0 = param_3[3];
    local_c4 = *(undefined8 *)(param_3 + 0xb);
    local_110 = CONCAT44(pfVar5[1] * param_7[1],*pfVar5 * *param_7);
    local_dc = fVar15 * fVar11;
    local_d8 = fVar16;
    local_d4 = local_128;
    uStack_cc = uStack_120;
    FSlateDrawElement::MakeBox(local_118,local_130,&local_f0);
  }
LAB_14194f268:
  local_140 = local_138;
  local_148 = param_7;
  local_150 = (undefined8 *)CONCAT44(local_150._4_4_,param_6);
  local_158 = local_118;
  iVar4 = FUN_14184ebd0(param_1,local_f8,param_3,local_100);
  if (iVar4 <= param_6) {
    iVar4 = param_6;
  }
  return iVar4;
}



// FUNCTION 14194f2d0 OnPaint body=687 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FSlateImageRun::OnPaint
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
              undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8,int param_9,
              float *param_10,byte param_11)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_138 [32];
  char local_118;
  float *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x90);
  fVar7 = 1.0 / *(float *)(param_6 + 8);
  if (*(char *)(lVar2 + 0x6c) != '\0') {
    cVar1 = *(char *)(lVar2 + 0x30);
    pfVar4 = (float *)(lVar2 + 0x20);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar4 = *(float **)(lVar2 + 0x38);
      }
      else if (cVar1 == '\x03') {
        pfVar4 = param_10 + 8;
      }
      else {
        pfVar4 = param_10 + 4;
      }
    }
    plVar3 = (longlong *)*param_4;
    local_f8 = *pfVar4 * *param_10;
    local_f4 = pfVar4[1] * param_10[1];
    local_f0 = pfVar4[2] * param_10[2];
    local_ec = pfVar4[3] * param_10[3];
    pfVar4 = (float *)(**(code **)(*plVar3 + 0x38))(plVar3,local_e8);
    fVar6 = fVar7 * *pfVar4;
    fVar5 = fVar7 * pfVar4[1];
    pfVar4 = (float *)(**(code **)(*plVar3 + 0x18))(plVar3,local_e0);
    local_d0 = *(float *)(param_6 + 8);
    fStack_104 = *(float *)(param_6 + 0x20);
    fStack_100 = *(float *)(param_6 + 0x24);
    local_c4 = fVar7 * *pfVar4;
    local_c0 = fVar7 * pfVar4[1];
    local_110 = &local_f8;
    local_108 = *(float *)(param_6 + 0x1c);
    fStack_fc = *(float *)(param_6 + 0x28);
    local_a4 = (*(byte *)(param_6 + 0x34) & 1) * '\x02' | local_a4 & 0xfc;
    local_118 = (param_11 ^ 1) << 5;
    local_d8 = local_d0 * fVar6 + *(float *)(param_6 + 0xc);
    local_cc = 0;
    local_d4 = local_d0 * fVar5 + *(float *)(param_6 + 0x10);
    local_ac = CONCAT44(fVar6 * fStack_104 + fVar5 * fStack_fc + *(float *)(param_6 + 0x30),
                        fVar6 * local_108 + fVar5 * fStack_100 + *(float *)(param_6 + 0x2c));
    local_bc = local_108;
    fStack_b8 = fStack_104;
    fStack_b4 = fStack_100;
    fStack_b0 = fStack_fc;
    FSlateDrawElement::MakeBox(param_8,param_9 + 1,&local_d8,*(undefined8 *)(param_1 + 0x90));
    param_9 = param_9 + 1;
  }
  return param_9;
}



// FUNCTION 14194f580 OnPaint body=1500 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FSlatePasswordRun::OnPaint
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
              longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,int param_9,
              float *param_10,byte param_11)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  int local_1a0;
  longlong local_198;
  char local_190;
  float *local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  float local_160;
  float local_15c;
  longlong *local_158;
  float fStack_150;
  float fStack_14c;
  int local_148;
  int local_144;
  undefined8 local_140;
  longlong local_138;
  int local_130;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_104;
  float local_fc;
  float local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  byte local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  cVar6 = (param_11 ^ 1) << 5;
  local_168 = param_5;
  local_140 = param_8;
  if ((*(float *)(param_1 + 0x11c) <= 0.0) ||
     (*(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x108) +
      *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x10c) <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  (**(code **)(*(longlong *)*param_4 + 0x38))((longlong *)*param_4,local_118);
  (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_148);
  fVar8 = *(float *)(param_1 + 0x10c);
  fVar7 = *(float *)(param_6 + 8);
  fVar11 = 1.0 / fVar7;
  fVar12 = fVar8 * fVar7;
  if (fVar8 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar10 = *(float *)(param_1 + 0x108);
  if (fVar10 <= 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = fVar10 * fVar7;
  }
  if (0.0 <= fVar8) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = -(fVar8 * fVar7);
  }
  if (0.0 <= fVar10) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = -(fVar10 * fVar7);
  }
  BuildPasswordString(&local_138,local_144 - local_148);
  if (bVar3) {
    param_9 = param_9 + 1;
    local_178 = *(float *)(param_1 + 0x110) * *param_10;
    local_158 = (longlong *)*param_4;
    fStack_174 = *(float *)(param_1 + 0x114) * param_10[1];
    fStack_170 = *(float *)(param_1 + 0x118) * param_10[2];
    fStack_16c = *(float *)(param_1 + 0x11c) * param_10[3];
    if (local_130 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_130 + -1;
    }
    pfVar4 = (float *)(**(code **)(*local_158 + 0x38))(local_158,local_128);
    fVar10 = (fVar9 + *pfVar4) * fVar11;
    fVar12 = (fVar12 + pfVar4[1]) * fVar11;
    pfVar4 = (float *)(**(code **)(*local_158 + 0x18))(local_158,local_120);
    local_108 = *(float *)(param_6 + 8);
    fStack_150 = *(float *)(param_6 + 0x24);
    fStack_14c = *(float *)(param_6 + 0x28);
    uStack_ec = *(undefined8 *)(param_6 + 0x24);
    local_158 = *(longlong **)(param_6 + 0x1c);
    local_fc = fVar11 * *pfVar4;
    local_f8 = fVar11 * pfVar4[1];
    local_dc = (*(byte *)(param_6 + 0x34) & 1) * '\x02' | local_dc & 0xfc;
    local_198 = local_168 + 8;
    local_188 = &local_178;
    local_104 = 0;
    local_1a8 = 0;
    local_110 = fVar10 * local_108 + *(float *)(param_6 + 0xc);
    local_10c = fVar12 * local_108 + *(float *)(param_6 + 0x10);
    local_e4 = CONCAT44(fVar10 * *(float *)(param_6 + 0x20) + fVar12 * fStack_14c +
                        *(float *)(param_6 + 0x30),
                        fVar10 * *(float *)(param_6 + 0x1c) + fVar12 * fStack_150 +
                        *(float *)(param_6 + 0x2c));
    local_1a0 = iVar5;
    local_190 = cVar6;
    local_168 = local_198;
    local_f4 = local_158;
    FUN_14184a760(local_140,param_9,&local_110,&local_138);
    param_5 = local_168;
  }
  else {
    param_5 = param_5 + 8;
  }
  cVar1 = *(char *)(param_1 + 0xf0);
  plVar2 = (longlong *)*param_4;
  if (cVar1 == '\0') {
    pfVar4 = (float *)(param_1 + 0xe0);
  }
  else if (cVar1 == '\x01') {
    pfVar4 = *(float **)(param_1 + 0xf8);
  }
  else if (cVar1 == '\x03') {
    pfVar4 = param_10 + 8;
  }
  else {
    pfVar4 = param_10 + 4;
  }
  local_15c = pfVar4[3] * param_10[3];
  local_160 = pfVar4[2] * param_10[2];
  local_168 = CONCAT44(pfVar4[1] * param_10[1],*pfVar4 * *param_10);
  if (local_130 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = local_130 + -1;
  }
  pfVar4 = (float *)(**(code **)(*plVar2 + 0x38))(plVar2,local_120);
  fVar7 = (fVar7 + *pfVar4) * fVar11;
  fVar8 = (fVar8 + pfVar4[1]) * fVar11;
  pfVar4 = (float *)(**(code **)(*plVar2 + 0x18))(plVar2,local_128);
  local_108 = *(float *)(param_6 + 8);
  fStack_170 = *(float *)(param_6 + 0x24);
  local_178 = *(float *)(param_6 + 0x1c);
  fStack_16c = *(float *)(param_6 + 0x28);
  uStack_ec = *(undefined8 *)(param_6 + 0x24);
  fStack_174 = *(float *)(param_6 + 0x20);
  local_f4 = *(undefined8 *)(param_6 + 0x1c);
  local_fc = fVar11 * *pfVar4;
  local_f8 = fVar11 * pfVar4[1];
  local_dc = (*(byte *)(param_6 + 0x34) & 1) * '\x02' | local_dc & 0xfc;
  local_188 = (float *)&local_168;
  local_104 = 0;
  local_110 = fVar7 * local_108 + *(float *)(param_6 + 0xc);
  local_e4 = CONCAT44(fVar7 * fStack_174 + fVar8 * fStack_16c + *(float *)(param_6 + 0x30),
                      fVar7 * local_178 + fVar8 * fStack_170 + *(float *)(param_6 + 0x2c));
  local_10c = fVar8 * local_108 + *(float *)(param_6 + 0x10);
  local_1a8 = 0;
  local_1a0 = iVar5;
  local_198 = param_5;
  local_190 = cVar6;
  FUN_14184a760(local_140,param_9 + 1,&local_110,&local_138);
  if (local_138 != 0) {
    FMemory::Free();
  }
  return param_9 + 1;
}



// FUNCTION 14194fb60 OnPaint body=888 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSlateTextHighlightRunRenderer::OnPaint
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
               undefined8 *param_5,longlong param_6,longlong param_7,undefined8 param_8,
               undefined8 param_9,int param_10,float *param_11,byte param_12)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  float *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  int local_188;
  undefined8 *local_180;
  byte local_178;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  longlong local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 local_f0 [8];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_bc;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_130 = param_5;
  local_150 = param_3;
  local_138 = param_4;
  local_128 = param_2;
  (**(code **)(*(longlong *)*param_5 + 0x38))((longlong *)*param_5,&local_158);
  local_154 = *(float *)(param_3 + 0x34);
  local_168 = *param_11 * *(float *)(param_6 + 0xc0);
  local_164 = param_11[1] * *(float *)(param_6 + 0xc4);
  fVar3 = 1.0 / *(float *)(param_7 + 8);
  fVar1 = *(float *)(local_150 + 0x3c);
  local_160 = param_11[2] * *(float *)(param_6 + 200);
  local_15c = param_11[3] * *(float *)(param_6 + 0xcc);
  fVar5 = local_158 * fVar3;
  fVar4 = local_154 * fVar3;
  pfVar2 = (float *)(**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,local_f0);
  local_e0 = *(float *)(param_7 + 8);
  fStack_144 = *(float *)(param_7 + 0x20);
  fStack_140 = *(float *)(param_7 + 0x24);
  local_d4 = fVar3 * *pfVar2;
  local_dc = 0;
  local_148 = *(float *)(param_7 + 0x1c);
  fStack_13c = *(float *)(param_7 + 0x28);
  local_d0 = fVar1 * fVar3;
  local_e8 = local_e0 * fVar5 + *(float *)(param_7 + 0xc);
  local_e4 = local_e0 * fVar4 + *(float *)(param_7 + 0x10);
  local_bc = CONCAT44(fVar5 * fStack_144 + fStack_13c * fVar4 + *(float *)(param_7 + 0x30),
                      fVar5 * local_148 + fVar4 * fStack_140 + *(float *)(param_7 + 0x2c));
  local_b4 = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_b4 & 0xfc;
  local_1a0 = &local_168;
  local_1a8 = CONCAT71(local_1a8._1_7_,(param_12 ^ 1) << 5);
  local_cc = local_148;
  fStack_c8 = fStack_144;
  fStack_c4 = fStack_140;
  fStack_c0 = fStack_13c;
  FSlateDrawElement::MakeBox(param_9,param_10 + 1,&local_e8,param_6 + 0xd0);
  local_180 = &local_120;
  local_110 = DAT_1464aa6c0 - *(float *)(param_6 + 0xc0);
  fStack_10c = DAT_1464aa6c4 - *(float *)(param_6 + 0xc4);
  local_120 = *(undefined8 *)param_11;
  uStack_118 = *(undefined8 *)(param_11 + 2);
  fStack_108 = DAT_1464aa6c8 - *(float *)(param_6 + 200);
  fStack_104 = param_11[7];
  local_178 = param_12;
  local_190 = param_9;
  local_198 = param_8;
  local_1a0 = (float *)param_7;
  _local_100 = CONCAT44(fStack_10c,local_110);
  _fStack_f8 = CONCAT44(fStack_104 * 0.6,fStack_108);
  local_1a8 = param_6;
  local_188 = param_10 + 1;
  (**(code **)(*(longlong *)*local_138 + 0x90))
            ((longlong *)*local_138,local_128,local_150,local_130);
  return;
}



// FUNCTION 14194fee0 FUN_14194fee0 body=1417 status=ok
// SIG undefined FUN_14194fee0(void)

int FUN_14194fee0(longlong *param_1,undefined8 param_2,longlong param_3,float *param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  int local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  longlong *local_f8;
  longlong *local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  
  plVar15 = (longlong *)param_1[5];
  fVar18 = 1.0 / *(float *)(param_3 + 8);
  local_118 = param_6;
  local_c8 = plVar15 + (longlong)(int)param_1[6] * 0xb;
  iVar8 = param_6;
  if (plVar15 != local_c8) {
    pfVar10 = (float *)((longlong)plVar15 + 0x3c);
    do {
      fVar17 = fVar18 * pfVar10[-3];
      fVar16 = fVar18 * pfVar10[-2];
      local_e0 = (fVar18 * pfVar10[-1] + fVar17) - fVar17;
      local_d8 = (fVar18 * *pfVar10 + fVar16) - fVar16;
      local_dc = local_e0 * *(float *)(param_3 + 0x20);
      local_e0 = local_e0 * *(float *)(param_3 + 0x1c);
      local_d4 = local_d8 * *(float *)(param_3 + 0x28);
      local_e4 = fVar17 * *(float *)(param_3 + 0x20) + fVar16 * *(float *)(param_3 + 0x28) +
                 *(float *)(param_3 + 0x30);
      local_e8 = fVar17 * *(float *)(param_3 + 0x1c) + fVar16 * *(float *)(param_3 + 0x24) +
                 *(float *)(param_3 + 0x2c);
      local_d8 = local_d8 * *(float *)(param_3 + 0x24);
      FSlateRotatedRect::ToBoundingRect(&local_e8,&local_108);
      iVar6 = local_118;
      if ((((local_108 < param_4[2] || local_108 == param_4[2]) && (*param_4 <= local_100)) &&
          (local_104 < param_4[3] || local_104 == param_4[3])) && (param_4[1] <= local_fc)) {
        in_stack_fffffffffffffec8 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffec8 >> 0x20),param_6);
        uVar20 = param_7;
        iVar8 = (**(code **)(*param_1 + 0x48))
                          (param_1,param_2,plVar15,pfVar10 + -0xb,param_1 + 0x26,param_3,param_4,
                           param_5,in_stack_fffffffffffffec8,param_7,param_8);
        puVar14 = (undefined8 *)*plVar15;
        iVar8 = iVar8 + 1;
        local_d0 = puVar14 + (longlong)(int)pfVar10[-0xd] * 2;
        iVar13 = iVar8;
        if (puVar14 != local_d0) {
          do {
            uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
            uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
            puVar11 = (undefined8 *)
                      (**(code **)(*(longlong *)*puVar14 + 8))((longlong *)*puVar14,local_c0);
            plVar3 = local_b8;
            local_f8 = (longlong *)*puVar11;
            local_f0 = (longlong *)puVar11[1];
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
              UNLOCK();
            }
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_b8 + 1;
              lVar4 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_b8)(local_b8);
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
            plVar12 = (longlong *)
                      (**(code **)(*(longlong *)*puVar14 + 0x28))((longlong *)*puVar14,local_b0);
            plVar5 = local_a8;
            plVar3 = (longlong *)plVar12[1];
            plVar12 = (longlong *)*plVar12;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_a8 + 1;
              lVar4 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            if (plVar12 == (longlong *)0x0) {
              in_stack_fffffffffffffec8 = CONCAT44(uVar19,iVar8);
              uVar20 = param_7;
              iVar9 = (**(code **)(*local_f8 + 0x90))
                                (local_f8,param_2,plVar15,puVar14,param_1 + 0x26,param_3,param_4,
                                 param_5,in_stack_fffffffffffffec8,param_7,param_8);
            }
            else {
              uVar20 = CONCAT44(uVar21,iVar8);
              in_stack_fffffffffffffec8 = param_5;
              iVar9 = (**(code **)(*plVar12 + 8))
                                (plVar12,param_2,plVar15,&local_f8,puVar14,param_1 + 0x26,param_3,
                                 param_4,param_5,uVar20,param_7,param_8);
            }
            if (iVar9 <= iVar13) {
              iVar9 = iVar13;
            }
            iVar13 = iVar9;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar3 + 1;
              lVar4 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
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
            plVar3 = local_f0;
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_f0 + 1;
              lVar4 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_f0)(local_f0);
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
            puVar14 = puVar14 + 2;
          } while (puVar14 != local_d0);
        }
        cVar7 = FSlateApplication::AllowMoveCursor(DAT_1469f4590);
        iVar8 = local_118;
        if (cVar7 != '\0') {
          in_stack_fffffffffffffec8 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffec8 >> 0x20),iVar13);
          iVar8 = (**(code **)(*param_1 + 0x48))
                            (param_1,param_2,plVar15,pfVar10 + -7,param_1 + 0x26,param_3,param_4,
                             param_5,in_stack_fffffffffffffec8,param_7,param_8);
          iVar6 = iVar8;
          if (iVar8 <= local_118) {
            iVar8 = local_118;
            iVar6 = local_118;
          }
        }
      }
      local_118 = iVar6;
      plVar15 = plVar15 + 0xb;
      pfVar10 = pfVar10 + 0x16;
    } while (plVar15 != local_c8);
  }
  return iVar8;
}



// FUNCTION 141950470 FUN_141950470 body=3716 status=ok
// SIG undefined FUN_141950470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141950470(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                 undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                 int param_9,float *param_10,byte param_11)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  char cVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_448 [32];
  undefined2 *local_428;
  float *local_420;
  float *local_418;
  char local_410;
  float *local_408;
  char local_3f8;
  float local_3f4;
  float local_3f0;
  uint local_3ec;
  float local_3e8;
  float local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  uint local_3d8;
  float local_3d4;
  undefined8 *local_3d0;
  undefined8 local_3c8;
  undefined8 local_3b8;
  longlong *plStack_3b0;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  longlong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_318;
  longlong *plStack_310;
  undefined2 local_308 [4];
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined2 local_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined8 local_238;
  float local_230;
  undefined2 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  float local_190;
  float local_18c;
  float local_188;
  undefined8 local_184;
  float local_17c;
  float local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  byte local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_14c;
  float local_144;
  float local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  byte local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined8 local_114;
  float local_10c;
  float local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  byte local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  fVar16 = *(float *)(param_1 + 0x108) * 0.001;
  local_3c8 = param_8;
  cVar9 = (param_11 ^ 1) << 5;
  fVar17 = *(float *)(param_1 + 0x10c) * 0.001;
  fVar21 = (float)((int)ROUND(fVar16 + fVar16 + 0.5) >> 1);
  fVar19 = *(float *)(param_1 + 0x108) - fVar21 * 1000.0;
  uVar14 = (int)ROUND(fVar17 + fVar17 + 0.5) >> 1;
  fVar17 = *(float *)(param_1 + 0x10c) - (float)uVar14 * 1000.0;
  local_3f8 = 0.0 < fVar17 * fVar17 + fVar19 * fVar19;
  local_3d8 = uVar14;
  local_3d0 = param_4;
  local_338 = param_3;
  (**(code **)(*(longlong *)*param_4 + 0x38))((longlong *)*param_4,local_1a8);
  (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_3e0);
  (**(code **)(*(longlong *)*param_4 + 0x20))((longlong *)*param_4,local_308);
  local_230 = *(float *)(param_6 + 8);
  fVar16 = 1.0 / local_230;
  if (fVar17 <= 0.0) {
    local_3e4 = 0.0;
  }
  else {
    local_3e4 = fVar17 * local_230;
  }
  if (fVar19 <= 0.0) {
    local_3e8 = 0.0;
  }
  else {
    local_3e8 = local_230 * fVar19;
  }
  if (0.0 <= fVar17) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = -(fVar17 * local_230);
  }
  if (0.0 <= fVar19) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = -(local_230 * fVar19);
  }
  if (*(int *)(*(undefined8 **)(param_1 + 0x78) + 1) == 0) {
    local_428 = &DAT_143f3eda8;
  }
  else {
    local_428 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
  }
  local_238 = *(undefined8 *)(param_3 + 0x48);
  pfVar13 = (float *)(param_1 + 0x90);
  local_208 = *(undefined4 *)(param_1 + 0xb0);
  uStack_204 = *(undefined4 *)(param_1 + 0xb4);
  uStack_200 = *(undefined4 *)(param_1 + 0xb8);
  uStack_1fc = *(undefined4 *)(param_1 + 0xbc);
  local_22c = local_308[0];
  local_228 = *(undefined8 *)pfVar13;
  local_220 = *(undefined8 *)(param_1 + 0x98);
  local_1f8 = *(undefined8 *)(param_1 + 0xc0);
  local_218 = *(undefined8 *)(param_1 + 0xa0);
  uStack_210 = *(undefined8 *)(param_1 + 0xa8);
  local_1f0 = *(longlong **)(param_1 + 200);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
  }
  local_1e8 = *(undefined8 *)(param_1 + 0xd0);
  local_1e0 = *(undefined4 *)(param_1 + 0xd8);
  local_1dc = *(undefined1 *)(param_1 + 0xdc);
  local_420 = (float *)CONCAT71(local_420._1_7_,local_2f0);
  local_3f4 = fVar16;
  local_3f0 = fVar19;
  FUN_141941c50(&local_318,local_300,&local_238,&local_3e0);
  plVar6 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1f0)(local_1f0);
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
  if (0.0 < fVar21) {
    fVar21 = fVar21 * *(float *)(param_6 + 8);
    local_3ec = 0;
    if (uVar14 != 0) {
      local_3d4 = 6.2831855 / (float)uVar14;
      do {
        fVar18 = (float)local_3ec * local_3d4;
        if (fVar18 < 0.0) {
          fVar15 = fVar18 * 0.15915494 - 0.5;
        }
        else {
          fVar15 = fVar18 * 0.15915494 + 0.5;
        }
        fVar18 = fVar18 - (float)(int)fVar15 * 6.2831855;
        if (fVar18 <= 1.5707964) {
          fVar15 = fVar21;
          if (fVar18 < -1.5707964) {
            fVar15 = -3.1415927;
            goto LAB_141950834;
          }
        }
        else {
          fVar15 = 3.1415927;
LAB_141950834:
          fVar18 = fVar15 - fVar18;
          fVar15 = -fVar21;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        param_9 = param_9 + 1;
        fVar20 = fVar18 * fVar18;
        plVar6 = (longlong *)*local_3d0;
        local_368 = *param_10 * *(float *)(param_1 + 0x110);
        local_360 = *(float *)(param_1 + 0x118) * param_10[2];
        local_364 = param_10[1] * *(float *)(param_1 + 0x114);
        local_35c = *(float *)(param_1 + 0x11c) * param_10[3];
        pfVar10 = (float *)(**(code **)(*plVar6 + 0x38))(plVar6,local_1b0);
        fVar8 = local_3f4;
        fVar16 = ((fVar19 + *pfVar10) -
                 (((((2.7525562e-06 - fVar20 * 2.3889859e-08) * fVar20 - 0.00019840874) * fVar20 +
                   0.008333331) * fVar20 - 0.16666667) * fVar20 + 1.0) * fVar18 * fVar21) * fVar16;
        fVar19 = ((((((2.4760495e-05 - fVar20 * 2.6051615e-07) * fVar20 - 0.0013888378) * fVar20 +
                    0.041666638) * fVar20 - 0.5) * fVar20 + 1.0) * fVar15 + fVar17 + pfVar10[1]) *
                 local_3f4;
        pfVar11 = (float *)(**(code **)(*plVar6 + 0x18))(plVar6,local_1c8);
        local_188 = *(float *)(param_6 + 8);
        pfVar10 = (float *)(param_6 + 0x1c);
        local_17c = fVar8 * *pfVar11;
        local_178 = fVar8 * pfVar11[1];
        local_174 = *(undefined8 *)pfVar10;
        uStack_16c = *(undefined8 *)(param_6 + 0x24);
        local_330 = *(undefined8 *)pfVar10;
        uStack_328 = *(undefined8 *)(param_6 + 0x24);
        local_190 = local_188 * fVar16 + *(float *)(param_6 + 0xc);
        local_18c = local_188 * fVar19 + *(float *)(param_6 + 0x10);
        local_15c = (*(byte *)(param_6 + 0x34) & 1) * '\x02' | local_15c & 0xfc;
        local_408 = &local_368;
        local_420 = (float *)CONCAT44(local_420._4_4_,local_3dc);
        local_164 = CONCAT44(fVar19 * *(float *)(param_6 + 0x28) +
                             fVar16 * *(float *)(param_6 + 0x20) + *(float *)(param_6 + 0x30),
                             fVar16 * *pfVar10 + fVar19 * *(float *)(param_6 + 0x24) +
                             *(float *)(param_6 + 0x2c));
        local_184 = 0;
        local_428 = (undefined2 *)CONCAT44(local_428._4_4_,local_3e0);
        local_418 = pfVar13;
        local_410 = cVar9;
        FUN_14184a760(local_3c8,param_9,&local_190,uVar5);
        local_3ec = local_3ec + 1;
        fVar19 = local_3f0;
        fVar16 = local_3f4;
      } while (local_3ec < local_3d8);
    }
  }
  if (local_3f8 != '\0') {
    local_3b8 = local_318;
    plStack_3b0 = plStack_310;
    if (plStack_310 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_310 + 1) = (int)plStack_310[1] + 1;
      UNLOCK();
    }
    if ((((*(float *)(param_1 + 0xb0) != *(float *)(param_1 + 0x110)) ||
         (*(float *)(param_1 + 0xb4) != *(float *)(param_1 + 0x114))) ||
        (*(float *)(param_1 + 0xb8) != *(float *)(param_1 + 0x118))) ||
       (*(float *)(param_1 + 0xbc) != *(float *)(param_1 + 0x11c))) {
      local_2b0 = *(longlong **)(param_1 + 200);
      local_2e8 = *(undefined8 *)pfVar13;
      local_2e0 = *(undefined8 *)(param_1 + 0x98);
      local_2b8 = *(undefined8 *)(param_1 + 0xc0);
      local_2d8 = *(undefined8 *)(param_1 + 0xa0);
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
        UNLOCK();
      }
      local_268 = *(undefined4 *)(param_1 + 0x110);
      uStack_264 = *(undefined4 *)(param_1 + 0x114);
      local_2c8 = *(undefined8 *)(param_1 + 0x110);
      uStack_260 = *(undefined4 *)(param_1 + 0x118);
      uStack_25c = *(undefined4 *)(param_1 + 0x11c);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x118);
      local_248 = *(undefined8 *)(param_1 + 0xd0);
      local_240 = *(undefined4 *)(param_1 + 0xd8);
      local_23c = *(undefined1 *)(param_1 + 0xdc);
      uStack_2d0 = 0;
      if (*(int *)(*(undefined8 **)(param_1 + 0x78) + 1) == 0) {
        local_428 = &DAT_143f3eda8;
      }
      else {
        local_428 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
      }
      local_290 = *(undefined4 *)(param_6 + 8);
      local_298 = *(undefined8 *)(local_338 + 0x48);
      local_28c = local_308[0];
      uStack_270 = 0;
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
        UNLOCK();
      }
      local_420 = (float *)CONCAT71(local_420._1_7_,local_2f0);
      local_288 = local_2e8;
      local_280 = local_2e0;
      local_278 = local_2d8;
      local_258 = local_2b8;
      local_250 = local_2b0;
      puVar12 = (undefined8 *)FUN_141941c50(local_1c0,local_300,&local_298,&local_3e0);
      uVar5 = *puVar12;
      *puVar12 = local_3b8;
      plVar6 = (longlong *)puVar12[1];
      puVar12[1] = plStack_3b0;
      local_3b8 = uVar5;
      plStack_3b0 = plVar6;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1b8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar2 = (int *)((longlong)local_1b8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
      plVar6 = local_250;
      if (local_250 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_250 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_250)(local_250);
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
      plVar6 = local_2b0;
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2b0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_2b0 + 8))(local_2b0,1);
          }
        }
      }
    }
    param_9 = param_9 + 1;
    local_388 = *param_10 * *(float *)(param_1 + 0xb0);
    plVar6 = (longlong *)*local_3d0;
    local_384 = param_10[1] * *(float *)(param_1 + 0xb4);
    local_398 = *param_10 * *(float *)(param_1 + 0x110);
    local_394 = param_10[1] * *(float *)(param_1 + 0x114);
    local_380 = param_10[2] * *(float *)(param_1 + 0xb8);
    local_390 = param_10[2] * *(float *)(param_1 + 0x118);
    local_37c = param_10[3] * *(float *)(param_1 + 0xbc);
    local_38c = param_10[3] * *(float *)(param_1 + 0x11c);
    pfVar13 = (float *)(**(code **)(*plVar6 + 0x38))(plVar6,local_1d0);
    fVar19 = (local_3e8 + *pfVar13) * fVar16;
    fVar21 = (local_3e4 + pfVar13[1]) * fVar16;
    pfVar13 = (float *)(**(code **)(*plVar6 + 0x18))(plVar6,local_1d8);
    local_150 = *(float *)(param_6 + 8);
    fStack_370 = *(float *)(param_6 + 0x24);
    local_378 = *(float *)(param_6 + 0x1c);
    local_144 = fVar16 * *pfVar13;
    fStack_36c = *(float *)(param_6 + 0x28);
    uStack_134 = *(undefined8 *)(param_6 + 0x24);
    fStack_374 = *(float *)(param_6 + 0x20);
    local_13c = *(undefined8 *)(param_6 + 0x1c);
    local_140 = fVar16 * pfVar13[1];
    local_14c = 0;
    local_158 = local_150 * fVar19 + *(float *)(param_6 + 0xc);
    local_154 = local_150 * fVar21 + *(float *)(param_6 + 0x10);
    local_124 = (*(byte *)(param_6 + 0x34) & 1) * '\x02' | local_124 & 0xfc;
    local_418 = &local_388;
    local_12c = CONCAT44(fStack_374 * fVar19 + fStack_36c * fVar21 + *(float *)(param_6 + 0x30),
                         local_378 * fVar19 + fStack_370 * fVar21 + *(float *)(param_6 + 0x2c));
    local_420 = &local_398;
    local_428 = (undefined2 *)CONCAT71(local_428._1_7_,cVar9);
    FUN_14184a230(local_3c8,param_9,&local_158,&local_3b8);
    plVar6 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_3b0)(plStack_3b0);
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
  }
  local_358 = *param_10 * *(float *)(param_1 + 0xb0);
  local_354 = param_10[1] * *(float *)(param_1 + 0xb4);
  cVar4 = *(char *)(param_1 + 0xf0);
  plVar6 = (longlong *)*local_3d0;
  local_350 = param_10[2] * *(float *)(param_1 + 0xb8);
  local_34c = param_10[3] * *(float *)(param_1 + 0xbc);
  if (cVar4 == '\0') {
    pfVar13 = (float *)(param_1 + 0xe0);
  }
  else if (cVar4 == '\x01') {
    pfVar13 = *(float **)(param_1 + 0xf8);
  }
  else if (cVar4 == '\x03') {
    pfVar13 = param_10 + 8;
  }
  else {
    pfVar13 = param_10 + 4;
  }
  local_33c = param_10[3] * pfVar13[3];
  local_340 = param_10[2] * pfVar13[2];
  local_344 = param_10[1] * pfVar13[1];
  local_348 = *param_10 * *pfVar13;
  pfVar13 = (float *)(**(code **)(*plVar6 + 0x38))(plVar6,local_1a0);
  fVar19 = (local_3f0 + *pfVar13) * fVar16;
  fVar17 = (fVar17 + pfVar13[1]) * fVar16;
  pfVar13 = (float *)(**(code **)(*plVar6 + 0x18))(plVar6,local_198);
  local_118 = *(float *)(param_6 + 8);
  fStack_3a0 = *(float *)(param_6 + 0x24);
  local_3a8 = *(float *)(param_6 + 0x1c);
  fStack_39c = *(float *)(param_6 + 0x28);
  uStack_fc = *(undefined8 *)(param_6 + 0x24);
  fStack_3a4 = *(float *)(param_6 + 0x20);
  local_104 = *(undefined8 *)(param_6 + 0x1c);
  local_10c = fVar16 * *pfVar13;
  local_108 = fVar16 * pfVar13[1];
  local_ec = (*(byte *)(param_6 + 0x34) & 1) * '\x02' | local_ec & 0xfc;
  local_418 = &local_358;
  local_114 = 0;
  local_428 = (undefined2 *)CONCAT71(local_428._1_7_,cVar9);
  local_120 = local_118 * fVar19 + *(float *)(param_6 + 0xc);
  local_f4 = CONCAT44(fStack_3a4 * fVar19 + fStack_39c * fVar17 + *(float *)(param_6 + 0x30),
                      local_3a8 * fVar19 + fStack_3a0 * fVar17 + *(float *)(param_6 + 0x2c));
  local_11c = local_118 * fVar17 + *(float *)(param_6 + 0x10);
  local_420 = &local_348;
  FUN_14184a230(local_3c8,param_9 + 1,&local_120,&local_318);
  if (plStack_310 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_310 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_310)(plStack_310);
      LOCK();
      piVar2 = (int *)((longlong)plStack_310 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_310 + 8))(plStack_310,1);
      }
    }
  }
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2f8 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar2 = (int *)((longlong)local_2f8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2f8 + 8))(local_2f8,1);
      }
    }
  }
  return param_9 + 1;
}



// FUNCTION 141951300 FUN_141951300 body=1548 status=ok
// SIG undefined FUN_141951300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141951300(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                 undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
                 int param_10,float *param_11,byte param_12)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  short sVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float *local_1b0;
  short local_1a8 [2];
  short local_1a4 [2];
  float local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  longlong *local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  byte local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_104;
  float local_fc;
  float local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  byte local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_188 = param_9;
  FUN_1418375f0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_158);
  uVar9 = FUN_14183a750(local_158,param_1 + 0x90,*(undefined4 *)(param_7 + 8));
  sVar10 = FUN_141831c40(local_158,param_1 + 0x90,*(undefined4 *)(param_7 + 8));
  local_1b8 = local_1a4;
  FUN_14183f2c0(local_158,param_1 + 0x90,*(undefined4 *)(param_7 + 8),local_1a8);
  uVar8 = local_188;
  param_4 = param_4 + *(float *)(param_3 + 0x30);
  fVar3 = *(float *)(param_7 + 8);
  if (local_1a4[0] < 2) {
    local_1a4[0] = 1;
  }
  local_1a0 = (float)(int)local_1a4[0];
  fVar16 = ((float)uVar9 + *(float *)(param_3 + 0x34) + (float)(int)sVar10) -
           (float)(int)local_1a8[0] * 0.5;
  fVar18 = 1.0 / fVar3;
  if (param_5 != 0.0) {
    pfVar11 = (float *)(param_1 + 0xe0);
    cVar5 = *(char *)(param_1 + 0xf0);
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        pfVar11 = *(float **)(param_1 + 0xf8);
      }
      else if (cVar5 == '\x03') {
        pfVar11 = param_11 + 8;
      }
      else {
        pfVar11 = param_11 + 4;
      }
    }
    local_198 = *(undefined8 *)pfVar11;
    uStack_190 = *(undefined8 *)(pfVar11 + 2);
    fVar17 = *(float *)(param_1 + 0x108);
    if ((*(float *)(param_1 + 0x11c) <= 0.0) ||
       (fVar17 * fVar17 + *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x10c) <= 0.0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    fVar14 = *(float *)(param_1 + 0x10c);
    if (fVar14 <= 0.0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = fVar14 * fVar3;
    }
    if (fVar17 <= 0.0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = fVar17 * fVar3;
    }
    fVar15 = fVar16;
    if (fVar14 < 0.0) {
      fVar15 = fVar16 - fVar14 * fVar3;
    }
    fVar14 = param_4;
    if (fVar17 < 0.0) {
      fVar14 = param_4 - fVar17 * fVar3;
    }
    if (bVar6) {
      local_168 = *(float *)(param_1 + 0x110) * *param_11;
      local_164 = *(float *)(param_1 + 0x114) * param_11[1];
      fStack_170 = *(float *)(param_7 + 0x24);
      local_178 = *(float *)(param_7 + 0x1c);
      fStack_16c = *(float *)(param_7 + 0x28);
      uStack_124 = *(undefined8 *)(param_7 + 0x24);
      local_114 = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_114 & 0xfc;
      param_10 = param_10 + 1;
      local_160 = *(float *)(param_1 + 0x118) * param_11[2];
      local_1b0 = &local_168;
      fVar17 = (param_4 + fVar12) * fVar18;
      local_15c = *(float *)(param_1 + 0x11c) * param_11[3];
      local_13c = 0;
      fVar16 = (fVar16 + fVar13) * fVar18;
      local_1b8 = (short *)CONCAT71(local_1b8._1_7_,(param_12 ^ 1) << 5);
      fStack_174 = *(float *)(param_7 + 0x20);
      local_12c = *(undefined8 *)(param_7 + 0x1c);
      local_148 = fVar17 * fVar3 + *(float *)(param_7 + 0xc);
      local_11c = CONCAT44(fVar17 * fStack_174 + fVar16 * fStack_16c + *(float *)(param_7 + 0x30),
                           fVar17 * local_178 + fVar16 * fStack_170 + *(float *)(param_7 + 0x2c));
      local_144 = fVar16 * fVar3 + *(float *)(param_7 + 0x10);
      local_130 = local_1a0 * fVar18;
      local_140 = fVar3;
      local_134 = fVar18 * param_5;
      FSlateDrawElement::MakeBox(local_188,param_10,&local_148,param_1 + 8);
    }
    param_10 = param_10 + 1;
    local_108 = *(float *)(param_7 + 8);
    local_dc = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_dc & 0xfc;
    uStack_ec = *(undefined8 *)(param_7 + 0x24);
    local_1b0 = (float *)&local_188;
    local_180 = (float)uStack_190 * param_11[2];
    local_188 = CONCAT44(local_198._4_4_ * param_11[1],(float)local_198 * *param_11);
    local_17c = uStack_190._4_4_ * param_11[3];
    fVar14 = fVar14 * fVar18;
    local_1a0 = local_1a0 * fVar18;
    local_104 = 0;
    fVar15 = fVar15 * fVar18;
    local_1b8 = (short *)CONCAT71(local_1b8._1_7_,(param_12 ^ 1) << 5);
    local_198 = *(undefined8 *)(param_7 + 0x1c);
    local_110 = fVar14 * local_108 + *(float *)(param_7 + 0xc);
    local_e4 = CONCAT44(fVar14 * *(float *)(param_7 + 0x20) + fVar15 * *(float *)(param_7 + 0x28) +
                        *(float *)(param_7 + 0x30),
                        fVar14 * *(float *)(param_7 + 0x1c) + fVar15 * *(float *)(param_7 + 0x24) +
                        *(float *)(param_7 + 0x2c));
    local_10c = fVar15 * local_108 + *(float *)(param_7 + 0x10);
    uStack_190 = uStack_ec;
    local_fc = fVar18 * param_5;
    local_f8 = local_1a0;
    local_f4 = local_198;
    FSlateDrawElement::MakeBox(uVar8,param_10,&local_110,param_1 + 8);
  }
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return param_10;
}



// FUNCTION 141951910 FUN_141951910 body=1229 status=ok
// SIG undefined FUN_141951910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141951910(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10,undefined1 param_11)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined1 local_170;
  uint local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  longlong *local_c0;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_9c [24];
  byte local_84;
  ulonglong local_80;
  ulonglong uVar12;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_f8 = param_7;
  fVar20 = 1.0 / *(float *)(param_6 + 8);
  local_100 = param_8;
  local_108 = param_10;
  local_150 = param_6;
  local_158 = param_1;
  local_148 = param_2;
  local_110 = param_4;
  SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0xa0));
  if ((local_140 != *(float *)(param_1 + 0xd0)) || (fStack_13c != *(float *)(param_1 + 0xd4))) {
    *(ulonglong *)(param_1 + 0xd0) = CONCAT44(fStack_13c,local_140);
    plVar10 = *(longlong **)(param_1 + 0x20);
    local_120 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar17 = iVar4 == 0;
      if (bVar17) {
        *(int *)(plVar10 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar17) {
        LOCK();
        bVar17 = iVar4 == (int)plVar10[1];
        if (bVar17) {
          *(int *)(plVar10 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar17) {
          if (plVar10 != (longlong *)0x0) {
            lVar8 = *(longlong *)(param_1 + 0x18);
            local_128 = lVar8;
            if (lVar8 != 0) {
              plVar5 = (longlong *)
                       TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_c8);
              plVar16 = (longlong *)plVar5[1];
              local_138 = *plVar5;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              local_118 = plVar16;
              if (local_c0 != (longlong *)0x0) {
                local_160 = plVar16 + 1;
                LOCK();
                plVar5 = local_c0 + 1;
                lVar3 = *plVar5;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*local_c0)(local_c0);
                  local_160 = plVar16 + 1;
                  LOCK();
                  piVar1 = (int *)((longlong)local_c0 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_c0 + 8))(local_c0,1);
                  }
                }
              }
              local_160 = plVar16 + 1;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)local_160 = (int)*local_160 + 1;
                UNLOCK();
              }
              uVar9 = 0;
              local_168 = 0;
              uVar15 = uVar9;
              if (0 < *(int *)(lVar8 + 0x20)) {
                do {
                  uVar12 = 0;
                  lVar8 = *(longlong *)(lVar8 + 0x18);
                  uVar7 = (uint)uVar9;
                  if (((*(byte *)(uVar15 + 0x68 + lVar8) & 1) == 0) &&
                     (uVar13 = uVar12, uVar14 = uVar12, 0 < *(int *)(uVar15 + 0x30 + lVar8))) {
                    do {
                      lVar3 = *(longlong *)(uVar15 + 0x28 + lVar8);
                      plVar10 = *(longlong **)(uVar13 + 8 + lVar3);
                      local_130 = *(longlong *)(uVar13 + lVar3);
                      if (plVar10 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                        UNLOCK();
                        if (plVar10 != (longlong *)0x0) {
                          LOCK();
                          plVar16 = plVar10 + 1;
                          lVar3 = *plVar16;
                          *(int *)plVar16 = (int)*plVar16 + -1;
                          UNLOCK();
                          if ((int)lVar3 == 1) {
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
                      if (local_130 == local_138) {
                        lVar8 = uVar14 * 0x30 + *(longlong *)(uVar15 + 0x28 + lVar8);
                        *(undefined4 *)(lVar8 + 0x18) = 0;
                        if (*(int *)(lVar8 + 0x1c) != 0) {
                          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x10,0);
                        }
                        *(undefined4 *)(lVar8 + 0x28) = 0;
                        uVar7 = local_168;
                        if (*(int *)(lVar8 + 0x2c) != 0) {
                          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x20,0);
                          uVar7 = local_168;
                        }
                        break;
                      }
                      uVar11 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar11;
                      uVar14 = uVar14 + 1;
                      uVar13 = uVar13 + 0x30;
                      uVar7 = local_168;
                    } while ((int)uVar11 < *(int *)(uVar15 + 0x30 + lVar8));
                  }
                  local_168 = uVar7 + 1;
                  uVar9 = (ulonglong)local_168;
                  plVar10 = local_120;
                  param_4 = local_110;
                  plVar16 = local_118;
                  uVar15 = uVar15 + 0x70;
                  lVar8 = local_128;
                } while ((int)local_168 < *(int *)(local_128 + 0x20));
              }
              plVar5 = local_160;
              *(byte *)(lVar8 + 0x88) = *(byte *)(lVar8 + 0x88) | 1;
              param_6 = local_150;
              param_1 = local_158;
              param_2 = local_148;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                lVar8 = *local_160;
                *(int *)local_160 = (int)*local_160 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
                param_6 = local_150;
                param_1 = local_158;
                param_2 = local_148;
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  lVar8 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*plVar16)(plVar16);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar16 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    param_6 = local_150;
                    param_1 = local_158;
                    param_2 = local_148;
                    if (iVar4 == 1) {
                      (**(code **)(*plVar16 + 8))(plVar16,1);
                      param_6 = local_150;
                      param_1 = local_158;
                      param_2 = local_148;
                    }
                  }
                }
              }
            }
            LOCK();
            plVar16 = plVar10 + 1;
            lVar8 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          break;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar17 = iVar4 == 0;
        if (bVar17) {
          *(int *)(plVar10 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
  }
  plVar10 = (longlong *)*param_4;
  pfVar6 = (float *)(**(code **)(*plVar10 + 0x38))(plVar10,local_d8);
  fVar19 = fVar20 * *pfVar6;
  fVar18 = fVar20 * pfVar6[1];
  pfVar6 = (float *)(**(code **)(*plVar10 + 0x18))(plVar10,local_d0);
  fVar2 = *(float *)(param_6 + 8);
  local_b8 = fVar20 * *pfVar6;
  local_b4 = fVar20 * pfVar6[1];
  local_b0 = 0x3f800000;
  local_a8 = 0.0;
  local_f0 = 0x3f800000;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0x3f800000;
  local_e0 = fVar19;
  local_dc = fVar18;
  Concatenate<FTransform2D>(local_9c,&local_f0,param_6 + 0x1c);
  local_84 = local_84 ^ (*(byte *)(param_6 + 0x34) ^ local_84) & 1;
  local_170 = param_11;
  local_178 = local_108;
  local_180 = param_9;
  local_188 = local_100;
  local_b0 = CONCAT44(fVar2 * fVar19 + *(float *)(param_6 + 0xc),fVar2);
  local_a8 = fVar2 * fVar18 + *(float *)(param_6 + 0x10);
  local_a4 = fVar19;
  local_a0 = fVar18;
  FUN_14184f6c0(*(undefined8 *)(param_1 + 0xa0),param_2,&local_b8,local_f8);
  return;
}



// FUNCTION 141951de0 FUN_141951de0 body=653 status=ok
// SIG undefined FUN_141951de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141951de0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,float *param_7,char param_8)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  float *pfVar7;
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
  local_98 = param_4;
  local_90 = param_2;
  if (param_8 != '\0') {
    if (((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) {
      cVar2 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))();
      if (cVar2 != '\0') {
        if ((int)param_1[0x15] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)param_1[0x14];
        }
        uVar3 = (**(code **)(*plVar6 + 0x38))();
        *(undefined1 *)(param_1 + 0x13) = uVar3;
      }
    }
    if ((char)param_1[0x13] != '\0') {
      cVar2 = '\x01';
      goto LAB_141951e80;
    }
  }
  cVar2 = '\0';
LAB_141951e80:
  lVar4 = param_1[0x7f];
  cVar1 = *(char *)(lVar4 + 0x6c);
  if ((cVar1 == '\0') || (cVar2 != '\0')) {
    lVar4 = (**(code **)(*param_1 + 0x210))(param_1);
  }
  if ((cVar1 == '\0') && (cVar2 == '\0')) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0;
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6c) != '\0')) {
    pfVar5 = (float *)FUN_141831530(param_1 + 0x62);
    cVar1 = *(char *)(pfVar5 + 4);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar5 = *(float **)(pfVar5 + 6);
      }
      else if (cVar1 == '\x03') {
        pfVar5 = param_7 + 8;
      }
      else {
        pfVar5 = param_7 + 4;
      }
    }
    cVar1 = *(char *)(lVar4 + 0x30);
    pfVar7 = (float *)(lVar4 + 0x20);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar7 = *(float **)(lVar4 + 0x38);
      }
      else if (cVar1 == '\x03') {
        pfVar7 = param_7 + 8;
      }
      else {
        pfVar7 = param_7 + 4;
      }
    }
    local_54 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_54 & 0xfc;
    local_c0 = &local_a8;
    local_a0 = pfVar7[2] * param_7[2] * pfVar5[2];
    local_c8 = CONCAT71(local_c8._1_7_,uVar3);
    local_a4 = pfVar7[1] * param_7[1] * pfVar5[1];
    local_a8 = *pfVar7 * *param_7 * *pfVar5;
    local_9c = pfVar7[3] * param_7[3] * pfVar5[3];
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
    FSlateDrawElement::MakeBox(param_5,param_6,&local_88,lVar4);
  }
  local_b8 = param_7;
  local_c0 = (float *)CONCAT44(local_c0._4_4_,param_6);
  local_c8 = param_5;
  local_b0 = cVar2;
  FUN_14184ebd0(param_1,local_90,param_3,local_98);
  return;
}



// FUNCTION 141952070 OnPaint body=1017 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
SCircularThrobber::OnPaint
          (longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,float *param_7)

{
  char cVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined8 local_dc;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x270);
    cVar1 = *(char *)(lVar4 + 0x30);
    pfVar3 = (float *)(lVar4 + 0x20);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar3 = *(float **)(lVar4 + 0x38);
      }
      else if (cVar1 == '\x03') {
        pfVar3 = param_7 + 8;
      }
      else {
        pfVar3 = param_7 + 4;
      }
    }
    local_128 = CONCAT44(pfVar3[1] * param_7[1],*pfVar3 * *param_7);
    uStack_120 = CONCAT44(pfVar3[3] * param_7[3],pfVar3[2] * param_7[2]);
  }
  else {
    puVar2 = (undefined8 *)FUN_141831530(param_1 + 0x288);
    cVar1 = *(char *)(puVar2 + 2);
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') {
        if (cVar1 == '\x03') {
          local_128 = *(undefined8 *)(param_7 + 8);
          uStack_120 = *(undefined8 *)(param_7 + 10);
          lVar4 = *(longlong *)(param_1 + 0x270);
        }
        else {
          local_128 = *(undefined8 *)(param_7 + 4);
          uStack_120 = *(undefined8 *)(param_7 + 6);
          lVar4 = *(longlong *)(param_1 + 0x270);
        }
        goto LAB_1419521af;
      }
      puVar2 = (undefined8 *)puVar2[3];
    }
    local_128 = *puVar2;
    uStack_120 = puVar2[1];
    lVar4 = *(longlong *)(param_1 + 0x270);
  }
LAB_1419521af:
  fVar10 = (*param_3 - *(float *)(lVar4 + 8)) * 0.5;
  fVar11 = (param_3[1] - *(float *)(lVar4 + 0xc)) * 0.5;
  FUN_141839cb0(param_1 + 0x260);
  iVar5 = *(int *)(param_1 + 0x278);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      uVar7 = __libm_sse2_sincosf_();
      local_100 = param_3[2];
      iVar6 = iVar6 + 1;
      local_fc = 0;
      local_d4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_d4 & 0xfc;
      local_130 = &local_128;
      fVar8 = (float)uVar7 * fVar10 + fVar10;
      local_138 = 0;
      fVar9 = (float)((ulonglong)uVar7 >> 0x20) * fVar11 + fVar11;
      local_108 = local_100 * fVar8 + param_3[3];
      fStack_e0 = (float)iVar6 / (float)iVar5;
      fStack_e4 = fStack_e0 * param_3[9];
      local_104 = local_100 * fVar9 + param_3[4];
      local_100 = local_100 * fStack_e0;
      local_ec = fStack_e0 * param_3[7];
      fStack_e8 = fStack_e0 * param_3[8];
      fStack_e0 = fStack_e0 * param_3[10];
      local_f4 = *(undefined4 *)(*(longlong *)(param_1 + 0x270) + 8);
      local_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x270) + 0xc);
      local_dc = CONCAT44(fVar9 * param_3[10] + fVar8 * param_3[8] + param_3[0xc],
                          fVar8 * param_3[7] + fVar9 * param_3[9] + param_3[0xb]);
      FSlateDrawElement::MakeBox(param_5,param_6,&local_108);
      iVar5 = *(int *)(param_1 + 0x278);
    } while (iVar6 < iVar5);
  }
  return param_6;
}



// FUNCTION 141952470 FUN_141952470 body=2103 status=ok
// SIG undefined FUN_141952470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141952470(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  float *pfVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined4 *_Src;
  int iVar21;
  longlong lVar22;
  int iVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  uint local_178;
  float *local_170;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [3];
  char local_135;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 local_c4;
  byte local_bc;
  ulonglong local_b8;
  
  plVar19 = DAT_1469eb140;
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  puVar14 = (undefined8 *)FName::FName(local_108,"GenericWhiteBox",1);
  uVar15 = (**(code **)(*plVar19 + 0x40))(plVar19,*puVar14,0);
  plVar19 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x228) != 0) && (*(longlong **)(param_1 + 0x220) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x18))(), cVar12 != '\0')) {
    plVar18 = plVar19;
    if (*(int *)(param_1 + 0x228) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x220);
    }
    (**(code **)(*plVar18 + 0x38))(plVar18,&local_158);
    *(ulonglong *)(param_1 + 0x208) = CONCAT44(fStack_154,local_158);
    *(ulonglong *)(param_1 + 0x210) = CONCAT44(fStack_14c,fStack_150);
  }
  local_148 = *(float *)(param_1 + 0x208);
  fStack_144 = *(float *)(param_1 + 0x20c);
  fStack_140 = *(float *)(param_1 + 0x210);
  fStack_13c = *(float *)(param_1 + 0x214);
  if (((*(int *)(param_1 + 0x240) != 0) && (*(longlong **)(param_1 + 0x238) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x18))(), cVar12 != '\0')) {
    plVar18 = plVar19;
    if (*(int *)(param_1 + 0x240) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x238);
    }
    uVar13 = (**(code **)(*plVar18 + 0x38))();
    *(undefined1 *)(param_1 + 0x230) = uVar13;
  }
  if (*(char *)(param_1 + 0x230) != '\0') {
    pfVar16 = (float *)FLinearColor::HSVToLinearRGB(&local_148,&local_158);
    local_148 = *pfVar16;
    fStack_144 = pfVar16[1];
    fStack_140 = pfVar16[2];
    fStack_13c = pfVar16[3];
  }
  if (((*(int *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x250) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))(), cVar12 != '\0')) {
    plVar18 = plVar19;
    if (*(int *)(param_1 + 600) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x250);
    }
    uVar13 = (**(code **)(*plVar18 + 0x38))();
    *(undefined1 *)(param_1 + 0x248) = uVar13;
  }
  if (*(char *)(param_1 + 0x248) != '\0') {
    fStack_13c = 1.0;
  }
  if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar12 != '\0')) {
    plVar18 = plVar19;
    if (*(int *)(param_1 + 0x288) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x280);
    }
    uVar13 = (**(code **)(*plVar18 + 0x38))();
    *(undefined1 *)(param_1 + 0x278) = uVar13;
  }
  FLinearColor::ToFColor(&local_148,local_138,*(undefined1 *)(param_1 + 0x278));
  if (((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))(), cVar12 != '\0')) {
    plVar18 = plVar19;
    if (*(int *)(param_1 + 0x270) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x268);
    }
    uVar13 = (**(code **)(*plVar18 + 0x38))();
    *(undefined1 *)(param_1 + 0x260) = uVar13;
  }
  plVar18 = DAT_1469eb140;
  if ((*(char *)(param_1 + 0x260) != '\0') && (local_135 != -1)) {
    puVar14 = (undefined8 *)FName::FName(&local_168,"ColorPicker.AlphaBackground",1);
    uVar17 = (**(code **)(*plVar18 + 0x40))(plVar18,*puVar14,0);
    local_f0 = param_3[3];
    local_ec = param_3[4];
    local_e8 = param_3[2];
    local_bc = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_bc & 0xfc;
    local_dc = *param_3;
    local_d8 = param_3[1];
    local_d4 = param_3[7];
    fStack_d0 = param_3[8];
    fStack_cc = param_3[9];
    fStack_c8 = param_3[10];
    local_c4 = *(undefined8 *)(param_3 + 0xb);
    local_170 = (float *)&DAT_1464aa6c0;
    local_178 = local_178 & 0xffffff00;
    local_e4 = 0;
    FSlateDrawElement::MakeBox(param_5,param_6,&local_f0,uVar17);
  }
  fVar24 = local_148;
  if (local_148 <= fStack_144) {
    fVar24 = fStack_144;
  }
  if (fVar24 <= fStack_140) {
    fVar24 = fStack_140;
  }
  if (fVar24 <= 1.0) {
    FLinearColor::FLinearColor(&local_158,local_138);
    local_130 = local_158 * *param_7;
    local_e4 = 0;
    local_128 = fStack_150 * param_7[2];
    local_e8 = param_3[2];
    local_12c = fStack_154 * param_7[1];
    local_ec = param_3[4];
    local_124 = fStack_14c * param_7[3];
    local_d8 = param_3[1];
    local_bc = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_bc & 0xfc;
    local_170 = &local_130;
    local_f0 = param_3[3];
    local_dc = *param_3;
    local_d4 = param_3[7];
    fStack_d0 = param_3[8];
    fStack_cc = param_3[9];
    fStack_c8 = param_3[10];
    local_c4 = *(undefined8 *)(param_3 + 0xb);
    local_178 = local_178 & 0xffffff00;
    FSlateDrawElement::MakeBox(param_5,param_6 + 1,&local_f0,uVar15);
  }
  else {
    local_f8 = 1.0 / fVar24;
    local_100 = local_f8 * local_148;
    local_fc = local_f8 * fStack_144;
    local_f8 = local_f8 * fStack_140;
    local_f4 = fStack_13c;
    if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0))
       && (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar12 != '\0')) {
      plVar18 = plVar19;
      if (*(int *)(param_1 + 0x288) != 0) {
        plVar18 = *(longlong **)(param_1 + 0x280);
      }
      uVar13 = (**(code **)(*plVar18 + 0x38))();
      *(undefined1 *)(param_1 + 0x278) = uVar13;
    }
    uVar15 = FLinearColor::ToFColor(&local_100,local_108,*(undefined1 *)(param_1 + 0x278));
    FLinearColor::FLinearColor(&local_168,uVar15);
    local_124 = fVar24 * fStack_13c;
    local_158 = (float)local_168 * *param_7;
    fStack_150 = (float)local_160 * param_7[2];
    fStack_154 = local_168._4_4_ * param_7[1];
    fStack_14c = local_160._4_4_ * param_7[3];
    local_12c = fStack_144;
    local_130 = local_148;
    local_128 = fStack_140;
    if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0))
       && (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar12 != '\0')) {
      if (*(int *)(param_1 + 0x288) != 0) {
        plVar19 = *(longlong **)(param_1 + 0x280);
      }
      uVar13 = (**(code **)(*plVar19 + 0x38))();
      *(undefined1 *)(param_1 + 0x278) = uVar13;
    }
    uVar15 = FLinearColor::ToFColor(&local_130,local_108,*(undefined1 *)(param_1 + 0x278));
    FLinearColor::FLinearColor(&local_168,uVar15);
    uVar7 = DAT_1468b5d88._4_4_;
    uVar6 = (undefined4)DAT_1468b5d88;
    fVar8 = (float)local_168;
    fVar9 = local_168._4_4_;
    fVar10 = (float)local_160;
    fVar11 = local_160._4_4_;
    fVar4 = local_158;
    fVar5 = fStack_154;
    uVar15 = CONCAT44(fStack_14c,fStack_150);
    local_168 = (undefined4 *)0x0;
    fVar24 = *param_7;
    local_160 = 1;
    fVar1 = param_7[1];
    fVar2 = param_7[2];
    fVar3 = param_7[3];
    uStack_110 = uVar15;
    uStack_118._0_4_ = fVar4;
    uStack_118._4_4_ = fVar5;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_168,0);
    lVar22 = (longlong)(int)(float)local_160;
    iVar23 = (int)(float)local_160 + 1;
    *local_168 = uVar6;
    local_168[1] = uVar7;
    local_168[2] = (float)uStack_118;
    local_168[3] = uStack_118._4_4_;
    *(undefined8 *)(local_168 + 4) = uVar15;
    local_120 = *param_3 * 0.5;
    fStack_11c = param_3[1] * 0.5;
    uStack_118 = CONCAT44(fVar9 * fVar1,fVar8 * fVar24);
    uStack_110 = CONCAT44(fVar11 * fVar3,fVar10 * fVar2);
    if ((int)local_160._4_4_ < iVar23) {
      uVar20 = local_160 & 0xffffffff;
      local_160._0_4_ = (float)iVar23;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_168,uVar20);
      iVar23 = (int)(float)local_160;
    }
    local_160._0_4_ = (float)(iVar23 + 1);
    *(ulonglong *)(local_168 + lVar22 * 6) = CONCAT44(fStack_11c,local_120);
    *(undefined8 *)((longlong)(local_168 + lVar22 * 6) + 8) = uStack_118;
    *(undefined8 *)(local_168 + lVar22 * 6 + 4) = uStack_110;
    local_120 = *param_3;
    fStack_11c = param_3[1];
    _Src = local_168;
    iVar21 = (int)(float)local_160;
    uStack_110 = uVar15;
    uStack_118._0_4_ = fVar4;
    uStack_118._4_4_ = fVar5;
    if ((int)local_160._4_4_ < (int)(float)local_160) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_168,iVar23);
      _Src = local_168;
      iVar21 = (int)(float)local_160;
    }
    local_168 = (void *)0x0;
    local_160 = CONCAT44(local_160._4_4_,iVar21);
    pfVar16 = (float *)(_Src + (longlong)iVar23 * 6);
    *pfVar16 = local_120;
    pfVar16[1] = fStack_11c;
    pfVar16[2] = (float)uStack_118;
    pfVar16[3] = uStack_118._4_4_;
    *(undefined8 *)(_Src + (longlong)iVar23 * 6 + 4) = uStack_110;
    if (iVar21 == 0) {
      local_160 = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_168,iVar21,0);
      _guard_xfg_dispatch_icall_nop(local_168,_Src,(longlong)iVar21 * 0x18);
    }
    local_e8 = param_3[2];
    local_dc = *param_3;
    local_f0 = param_3[3];
    local_ec = param_3[4];
    local_bc = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_bc & 0xfc;
    local_d8 = param_3[1];
    local_e4 = 0;
    local_170 = (float *)((ulonglong)local_170 & 0xffffffffffffff00);
    local_d4 = param_3[7];
    fStack_d0 = param_3[8];
    fStack_cc = param_3[9];
    fStack_c8 = param_3[10];
    local_c4 = *(undefined8 *)(param_3 + 0xb);
    local_178 = (uint)(local_d8 < local_dc);
    FSlateDrawElement::MakeGradient(param_5,param_6 + 1,&local_f0,&local_168);
    if (_Src != (undefined4 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return param_6 + 1;
}



// FUNCTION 141952cb0 FUN_141952cb0 body=363 status=ok
// SIG undefined FUN_141952cb0(void)

void FUN_141952cb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 *param_7,char param_8)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  lVar3 = FUN_140573010(*(undefined8 *)(param_1 + 0x220));
  cVar1 = *(char *)(lVar3 + 0x68);
  puVar4 = (undefined8 *)(lVar3 + 0x58);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      puVar4 = *(undefined8 **)(lVar3 + 0x70);
    }
    else if (cVar1 == '\x03') {
      puVar4 = param_7 + 4;
    }
    else {
      puVar4 = param_7 + 2;
    }
  }
  local_38 = *(undefined4 *)puVar4;
  uStack_34 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_30 = *(undefined4 *)(puVar4 + 1);
  fStack_2c = *(float *)((longlong)puVar4 + 0xc);
  local_48 = *param_7;
  uStack_40 = param_7[1];
  fStack_1c = fStack_2c * 0.6;
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  if (param_8 != '\0') {
    if ((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0xa0);
        }
        uVar2 = (**(code **)(*plVar5 + 0x38))();
        *(undefined1 *)(param_1 + 0x98) = uVar2;
      }
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      uVar2 = 1;
      goto LAB_141952dc2;
    }
  }
  uVar2 = 0;
LAB_141952dc2:
  FUN_141997a50(*(undefined8 *)(param_1 + 0x220),param_2,param_3,param_4,param_5,param_6,&local_48,
                uVar2);
  return;
}



// FUNCTION 141952e20 FUN_141952e20 body=566 status=ok
// SIG undefined FUN_141952e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_141952e20(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,float *param_7,undefined1 param_8)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  float *local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))(), cVar2 != '\0')) {
    plVar6 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x220) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x218);
    }
    uVar4 = (**(code **)(*plVar6 + 0x38))();
    *(undefined8 *)(param_1 + 0x208) = uVar4;
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x6c) != '\0')) {
    cVar3 = SWidget::ShouldBeEnabled(param_1,param_8);
    cVar2 = *(char *)(lVar1 + 0x30);
    pfVar5 = (float *)(lVar1 + 0x20);
    plVar6 = (longlong *)&DAT_00000020;
    if (cVar3 != '\0') {
      plVar6 = (longlong *)0x0;
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
    local_78 = *pfVar5;
    fStack_74 = pfVar5[1];
    fStack_70 = pfVar5[2];
    fStack_6c = pfVar5[3];
    pfVar5 = (float *)FUN_141831530(param_1 + 0x228);
    cVar2 = *(char *)(pfVar5 + 4);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        pfVar5 = *(float **)(pfVar5 + 6);
      }
      else if (cVar2 == '\x03') {
        pfVar5 = param_7 + 8;
      }
      else {
        pfVar5 = param_7 + 4;
      }
    }
    local_64 = pfVar5[1] * param_7[1] * fStack_74;
    local_24 = (*(byte *)((longlong)param_3 + 0x34) & 1) * '\x02' | local_24 & 0xfc;
    local_80 = &local_68;
    local_68 = *param_7 * *pfVar5 * local_78;
    local_60 = pfVar5[2] * param_7[2] * fStack_70;
    local_4c = 0;
    local_54 = *(undefined4 *)(param_3 + 2);
    local_5c = pfVar5[3] * param_7[3] * fStack_6c;
    local_88 = SUB81(plVar6,0);
    local_58 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_44 = *param_3;
    local_3c = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_38 = *(undefined4 *)(param_3 + 4);
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_30 = *(undefined4 *)(param_3 + 5);
    local_2c = *(undefined8 *)((longlong)param_3 + 0x2c);
    local_50 = *(undefined4 *)(param_3 + 1);
    FSlateDrawElement::MakeBox(param_5,param_6,&local_58,lVar1);
  }
  return param_6;
}



// FUNCTION 141953060 FUN_141953060 body=2010 status=ok
// SIG undefined FUN_141953060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141953060(longlong *param_1,longlong param_2,float *param_3,float *param_4,
                       float *param_5,int param_6,float *param_7,undefined1 param_8)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_4f8 [32];
  float *local_4d8;
  int local_4d0;
  float *local_4c8;
  undefined1 local_4c0;
  undefined1 local_4b8;
  longlong local_4b0;
  float *local_4a8;
  float *local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  float local_458;
  float local_454;
  float local_450;
  undefined8 local_44c;
  float local_444;
  undefined8 local_440;
  longlong *local_438;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  undefined8 local_420;
  undefined8 uStack_418;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  undefined1 local_3d0 [16];
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined1 local_3a4;
  undefined1 local_3a3;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  undefined1 local_388 [16];
  undefined4 local_378;
  undefined1 local_374;
  undefined1 local_35c;
  undefined1 local_35b;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [8];
  undefined8 local_260 [36];
  undefined8 *local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  longlong *local_e0;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  local_4a0 = param_5;
  local_4b8 = param_8;
  local_268[0] = DAT_1464b9ee8;
  local_140 = (undefined8 *)0x0;
  local_138 = 0;
  local_130 = 0;
  local_4a8 = param_4;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_268);
  if ((int)local_138 < 1) {
    local_4a8 = (float *)CONCAT44(local_4a8._4_4_,param_6);
    goto LAB_1419537fa;
  }
  puVar13 = local_260;
  if (local_140 != (undefined8 *)0x0) {
    puVar13 = local_140;
  }
  lVar3 = puVar13[7];
  local_4b0 = *(longlong *)(*(longlong *)param_1[0x5d] + 0x20);
  if (lVar3 == local_4b0) {
    local_458 = param_3[3];
    local_454 = param_3[4];
    local_444 = param_3[2] * param_3[1];
    local_44c = 0;
    local_450 = param_3[2] * *param_3;
    FSlateRotatedRect::ToBoundingRect(&local_458,&local_488);
    fVar16 = local_4a8[3];
    if (local_47c <= local_4a8[3]) {
      fVar16 = local_47c;
    }
    fVar17 = local_4a8[1];
    if (local_4a8[1] <= local_484) {
      fVar17 = local_484;
    }
    fVar15 = local_4a8[2];
    if (local_480 <= local_4a8[2]) {
      fVar15 = local_480;
    }
    fVar2 = *local_4a8;
    if (*local_4a8 <= local_488) {
      fVar2 = local_488;
    }
    if ((fVar16 < fVar17) || (fVar15 < fVar2)) {
      local_498 = 0;
      uStack_490 = 0;
    }
    else {
      local_498 = CONCAT44(fVar17,fVar2);
      uStack_490 = CONCAT44(fVar16,fVar15);
    }
    local_4d0 = *(undefined4 *)(param_2 + 0x28);
    local_4d8 = *(float **)(param_2 + 0x20);
    FPaintArgs::FPaintArgs
              (local_3d0,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
    local_3c0 = *(undefined4 *)(param_2 + 0x10);
    local_3bc = *(undefined1 *)(param_2 + 0x14);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x38);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)CONCAT44(uStack_394,uStack_398);
    local_478 = (undefined4)uVar9;
    uStack_474 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_470 = (undefined4)lVar4;
    uStack_46c = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_288 = local_478;
    uStack_284 = uStack_474;
    uStack_280 = uStack_470;
    uStack_27c = uStack_46c;
    local_3a0 = local_478;
    uStack_39c = uStack_474;
    uStack_398 = uStack_470;
    uStack_394 = uStack_46c;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    local_390 = *(undefined8 *)(param_2 + 0x40);
    uVar9 = puVar13[7];
    local_3a4 = *(undefined1 *)(param_2 + 0x2c);
    local_3a3 = *(undefined1 *)(param_2 + 0x2d);
    local_4c0 = SWidget::ShouldBeEnabled(param_1,local_4b8);
    local_4d0 = param_6 + 1;
    local_4c8 = param_7;
    local_4d8 = local_4a0;
    uVar8 = FUN_14184f6c0(uVar9,local_3d0,puVar13,&local_498);
    plVar5 = (longlong *)CONCAT44(uStack_394,uStack_398);
    local_4a8 = (float *)CONCAT44(local_4a8._4_4_,uVar8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar11 == 1) && (plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  else {
    local_4a8 = (float *)CONCAT44(local_4a8._4_4_,param_6);
  }
  if ((((char)param_1[0x54] == '\0') || (param_1[0x44] == 0)) || (param_1[0x45] == 0))
  goto LAB_1419537fa;
  piVar1 = (int *)(param_1[0x45] + 8);
  LOCK();
  iVar11 = *piVar1;
  if (iVar11 == 0) {
    *piVar1 = 0;
    iVar11 = 0;
  }
  UNLOCK();
  if (iVar11 < 1) goto LAB_1419537fa;
  if (lVar3 == local_4b0) {
    if ((int)local_138 < 2) {
      if (lVar3 == local_4b0) goto LAB_1419537fa;
      goto LAB_141953385;
    }
    puVar13 = local_260;
    if (local_140 != (undefined8 *)0x0) {
      puVar13 = local_140;
    }
    puVar13 = puVar13 + 9;
  }
  else {
LAB_141953385:
    if ((int)local_138 != 1) goto LAB_1419537fa;
    puVar13 = local_260;
    if (local_140 != (undefined8 *)0x0) {
      puVar13 = local_140;
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    if ((char)param_1[0x58] == '\0') {
      plVar5 = (longlong *)param_1[0x43];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar11 = (int)plVar5[1];
        bVar14 = iVar11 == 0;
        if (bVar14) {
          *(int *)(plVar5 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar11 == (int)plVar5[1];
          if (bVar14) {
            *(int *)(plVar5 + 1) = iVar11 + 1;
          }
          UNLOCK();
          if (bVar14) {
            if (plVar5 != (longlong *)0x0) {
              local_4b0 = param_1[0x42];
              if (local_4b0 != 0) {
                if (*(char *)((longlong)param_1 + 0x2c2) == '\0') {
                  pfVar12 = &local_400;
                  local_3f0 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
                  uStack_3e8 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
                  local_3e0 = DAT_1464aa6c0 * 0.6;
                  local_400 = DAT_1464aa6c0;
                  local_3d8 = DAT_1464aa6c8 * 0.6;
                  local_3dc = DAT_1464aa6c4 * 0.6;
                  local_3d4 = DAT_1464aa6cc * 0.6;
                  local_3fc = DAT_1464aa6c4;
                  local_3f8 = DAT_1464aa6c8;
                  local_3f4 = DAT_1464aa6cc;
                }
                else {
                  local_2c8 = *(undefined8 *)param_7;
                  uStack_2c0 = *(undefined8 *)(param_7 + 2);
                  local_2b8 = *(undefined8 *)(param_7 + 4);
                  uStack_2b0 = *(undefined8 *)(param_7 + 6);
                  local_2a8 = *(undefined8 *)(param_7 + 8);
                  uStack_2a0 = *(undefined8 *)(param_7 + 10);
                  pfVar12 = (float *)&local_2c8;
                }
                local_4d0 = *(undefined4 *)(param_2 + 0x28);
                local_4d8 = *(float **)(param_2 + 0x20);
                FPaintArgs::FPaintArgs
                          (local_388,param_1,*(undefined8 *)(param_2 + 8),
                           *(undefined8 *)(param_2 + 0x18));
                local_378 = *(undefined4 *)(param_2 + 0x10);
                local_374 = *(undefined1 *)(param_2 + 0x14);
                uVar9 = *(undefined8 *)(param_2 + 0x30);
                lVar3 = *(longlong *)(param_2 + 0x38);
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
                  UNLOCK();
                }
                plVar6 = (longlong *)CONCAT44(uStack_34c,uStack_350);
                local_468 = (undefined4)uVar9;
                uStack_464 = (undefined4)((ulonglong)uVar9 >> 0x20);
                uStack_460 = (undefined4)lVar3;
                uStack_45c = (undefined4)((ulonglong)lVar3 >> 0x20);
                local_278 = local_468;
                uStack_274 = uStack_464;
                uStack_270 = uStack_460;
                uStack_26c = uStack_45c;
                local_358 = local_468;
                uStack_354 = uStack_464;
                uStack_350 = uStack_460;
                uStack_34c = uStack_45c;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar11 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
                local_348 = *(undefined8 *)(param_2 + 0x40);
                local_35c = *(undefined1 *)(param_2 + 0x2c);
                local_35b = *(undefined1 *)(param_2 + 0x2d);
                uVar9 = puVar13[7];
                uVar7 = SWidget::ShouldBeEnabled(param_1,local_4b8);
                iVar11 = (int)local_4a8 + 1;
                uVar10 = SWindow::GetClippingRectangleInWindow(local_4b0,local_298);
                local_4d8 = local_4a0;
                local_4d0 = iVar11;
                local_4c8 = pfVar12;
                local_4c0 = uVar7;
                FUN_14184f6c0(uVar9,local_388,puVar13,uVar10);
                plVar6 = (longlong *)CONCAT44(uStack_34c,uStack_350);
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar11 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar11 == 1) && (plVar6 != (longlong *)0x0)) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
              LOCK();
              plVar6 = plVar5 + 1;
              lVar3 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar11 = (int)plVar5[1];
          bVar14 = iVar11 == 0;
          if (bVar14) {
            *(int *)(plVar5 + 1) = 0;
            iVar11 = 0;
          }
          UNLOCK();
        }
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0x2c2) == '\0') {
        local_4d8 = &local_430;
        local_420 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_418 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        local_410 = DAT_1464aa6c0 * 0.6;
        local_430 = DAT_1464aa6c0;
        local_408 = DAT_1464aa6c8 * 0.6;
        local_40c = DAT_1464aa6c4 * 0.6;
        local_404 = DAT_1464aa6cc * 0.6;
        local_42c = DAT_1464aa6c4;
        local_428 = DAT_1464aa6c8;
        local_424 = DAT_1464aa6cc;
      }
      else {
        local_2f8 = *(undefined8 *)param_7;
        uStack_2f0 = *(undefined8 *)(param_7 + 2);
        local_4d8 = (float *)&local_2f8;
        local_2e8 = *(undefined8 *)(param_7 + 4);
        uStack_2e0 = *(undefined8 *)(param_7 + 6);
        local_2d8 = *(undefined8 *)(param_7 + 8);
        uStack_2d0 = *(undefined8 *)(param_7 + 10);
      }
      local_440 = puVar13[7];
      local_438 = (longlong *)puVar13[8];
      if (local_438 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_438 + 1) = (int)local_438[1] + 1;
        UNLOCK();
      }
      local_338 = *puVar13;
      uStack_330 = puVar13[1];
      local_328 = puVar13[2];
      uStack_320 = puVar13[3];
      local_4d0 = CONCAT31(local_4d0._1_3_,local_4b8);
      local_318 = *(undefined4 *)(puVar13 + 4);
      uStack_314 = *(undefined4 *)((longlong)puVar13 + 0x24);
      uStack_310 = *(undefined4 *)(puVar13 + 5);
      uStack_30c = *(undefined4 *)((longlong)puVar13 + 0x2c);
      local_308 = puVar13[6];
      uVar9 = FUN_1417ea820(local_128,&local_440,param_2,&local_338);
      FUN_141852c20(local_4a0,uVar9);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (local_e0 != (longlong *)0x0)) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (local_120 != (longlong *)0x0)) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
      plVar5 = local_438;
      if (local_438 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_438 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_438)(local_438);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
LAB_1419537fa:
  FUN_140456b10(local_260);
  return (ulonglong)local_4a8 & 0xffffffff;
}



// FUNCTION 141953840 FUN_141953840 body=1845 status=ok
// SIG undefined FUN_141953840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141953840(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  float *local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined8 local_134;
  float local_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined8 local_11c;
  byte local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0x240) == 0) {
    fVar11 = *param_3;
    pfVar5 = param_3 + 1;
  }
  else {
    fVar11 = param_3[1];
    pfVar5 = param_3;
  }
  plVar7 = (longlong *)0x0;
  fVar13 = *pfVar5;
  fVar12 = *(float *)(*(longlong *)(param_1 + 0x208) + 0x120);
  fVar15 = *(float *)(*(longlong *)(param_1 + 0x208) + 0x124);
  fVar14 = fVar12 * 0.5;
  if (((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))(), cVar2 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x220) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x218);
    }
    uVar3 = (**(code **)(*plVar6 + 0x38))();
    *(undefined1 *)(param_1 + 0x210) = uVar3;
  }
  fVar10 = 0.0;
  if (*(char *)(param_1 + 0x210) != '\0') {
    fVar10 = fVar12;
  }
  if (((*(int *)(param_1 + 0x2d8) != 0) && (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x18))(), cVar2 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x2d8) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x2d0);
    }
    uVar9 = (**(code **)(*plVar6 + 0x38))();
    *(undefined4 *)(param_1 + 0x2c8) = uVar9;
  }
  local_110 = *(undefined8 *)param_3;
  uStack_108 = *(undefined8 *)(param_3 + 2);
  local_100 = *(undefined8 *)(param_3 + 4);
  uStack_f8 = *(undefined8 *)(param_3 + 6);
  fVar15 = fVar13 * 0.5 - fVar15 * 0.5;
  local_f0 = param_3[8];
  fStack_ec = param_3[9];
  fStack_e8 = param_3[10];
  fStack_e4 = param_3[0xb];
  local_e0 = *(undefined8 *)(param_3 + 0xc);
  fVar12 = (fVar11 - (fVar12 + fVar10)) * *(float *)(param_1 + 0x2c8) + fVar10 * 0.5;
  if (*(int *)(param_1 + 0x240) == 1) {
    local_14c = fVar13 * DAT_1468b5d88._4_4_;
    local_140 = 1.0;
    fStack_13c = 0.0;
    fVar10 = (float)DAT_1468b5d88 * fVar11;
    local_138 = 0.0;
    local_160 = 0x32510b46;
    uStack_15c = 0xbf800000;
    uStack_158 = 0x3f800000;
    uStack_154 = 0x32510b46;
    local_150 = fVar10 + (fVar11 * -1.2167964e-08 - (local_14c * 1.0 + fVar10 * 1.2167964e-08));
    local_14c = local_14c + (fVar10 * 1.0 - local_14c * 1.2167964e-08) + fVar11 * 1.0;
    local_148 = fVar11;
    local_144 = fVar13;
    Concatenate<FTransform2D>(&local_12c,&local_160,param_3 + 7);
    fStack_13c = param_3[3];
    local_138 = param_3[4];
    local_114 = local_114 | 1;
    local_140 = param_3[2];
    local_134 = 0;
    FGeometry::operator=(&local_110,&local_148);
  }
  if (param_8 != '\0') {
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar2 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0xa8) != 0) {
        plVar6 = *(longlong **)(param_1 + 0xa0);
      }
      uVar3 = (**(code **)(*plVar6 + 0x38))();
      *(undefined1 *)(param_1 + 0x98) = uVar3;
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      uVar3 = 0;
      goto LAB_141953b4a;
    }
  }
  uVar3 = 0x20;
LAB_141953b4a:
  local_168 = *(float *)(*(longlong *)(param_1 + 0x208) + 0x228);
  fVar13 = fVar13 * 0.5 - local_168 * 0.5;
  if (((*(int *)(param_1 + 0x238) != 0) && (*(longlong **)(param_1 + 0x230) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))(), cVar2 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x238) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x230);
    }
    uVar4 = (**(code **)(*plVar6 + 0x38))();
    *(undefined1 *)(param_1 + 0x228) = uVar4;
  }
  lVar8 = 0x90;
  if (*(char *)(param_1 + 0x228) == '\0') {
    lVar8 = 8;
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  pfVar5 = (float *)FUN_141831530(param_1 + 0x248);
  cVar2 = *(char *)(pfVar5 + 4);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      pfVar5 = *(float **)(pfVar5 + 6);
    }
    else if (cVar2 == '\x03') {
      pfVar5 = param_7 + 8;
    }
    else {
      pfVar5 = param_7 + 4;
    }
  }
  local_178 = *pfVar5 * *param_7;
  local_16c = pfVar5[3] * param_7[3];
  local_170 = pfVar5[2] * param_7[2];
  local_174 = pfVar5[1] * param_7[1];
  local_114 = (local_e0._4_1_ & 1) * '\x02' | local_114 & 0xfc;
  local_180 = &local_178;
  fStack_13c = 0.0;
  local_138 = 0.0;
  local_144 = (float)uStack_108 * fVar13 + (float)local_100;
  local_148 = (float)uStack_108 * fVar14 + uStack_108._4_4_;
  local_140 = (float)uStack_108;
  local_11c = CONCAT44(local_f0 * fVar14 + fStack_e8 * fVar13 + (float)local_e0,
                       uStack_f8._4_4_ * fVar14 + fStack_ec * fVar13 + fStack_e4);
  local_134 = CONCAT44(local_168,(fVar11 - fVar14) - fVar14);
  local_12c = uStack_f8._4_4_;
  fStack_128 = local_f0;
  fStack_124 = fStack_ec;
  fStack_120 = fStack_e8;
  local_188 = uVar3;
  FSlateDrawElement::MakeBox(param_5,param_6,&local_148,lVar8 + lVar1);
  if (((*(int *)(param_1 + 0x238) != 0) && (*(longlong **)(param_1 + 0x230) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x238) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x230);
    }
    uVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
    *(undefined1 *)(param_1 + 0x228) = uVar4;
  }
  lVar8 = 0x1a0;
  if (*(char *)(param_1 + 0x228) == '\0') {
    lVar8 = 0x118;
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  pfVar5 = (float *)FUN_141831530(param_1 + 0x288);
  cVar2 = *(char *)(pfVar5 + 4);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      pfVar5 = *(float **)(pfVar5 + 6);
    }
    else if (cVar2 == '\x03') {
      pfVar5 = param_7 + 8;
    }
    else {
      pfVar5 = param_7 + 4;
    }
  }
  local_178 = *pfVar5 * *param_7;
  local_174 = pfVar5[1] * param_7[1];
  local_16c = pfVar5[3] * param_7[3];
  local_170 = pfVar5[2] * param_7[2];
  fStack_13c = 0.0;
  local_138 = 0.0;
  local_114 = (local_e0._4_1_ & 1) * '\x02' | local_114 & 0xfc;
  local_140 = (float)uStack_108;
  local_144 = (float)uStack_108 * fVar15 + (float)local_100;
  local_148 = (float)uStack_108 * fVar12 + uStack_108._4_4_;
  local_134 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x120);
  local_180 = &local_178;
  local_11c = CONCAT44(local_f0 * fVar12 + fStack_e8 * fVar15 + (float)local_e0,
                       uStack_f8._4_4_ * fVar12 + fStack_ec * fVar15 + fStack_e4);
  local_12c = uStack_f8._4_4_;
  fStack_128 = local_f0;
  fStack_124 = fStack_ec;
  fStack_120 = fStack_e8;
  local_188 = uVar3;
  FSlateDrawElement::MakeBox(param_5,param_6 + 1,&local_148,lVar8 + lVar1);
  return param_6 + 1;
}



// FUNCTION 141953f80 OnPaintHighlights body=337 status=ok
// SIG undefined OnPaintHighlights(void)

undefined4
FSlateTextLayout::OnPaintHighlights
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined4 param_9,undefined8 param_10,undefined1 param_11)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)*param_4;
  puVar2 = puVar7 + (longlong)*(int *)(param_4 + 1) * 6;
  for (; puVar7 != puVar2; puVar7 = puVar7 + 6) {
    plVar4 = *(longlong **)(puVar7 + 4);
    plVar5 = *(longlong **)(puVar7 + 2);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar5 != (longlong *)0x0) {
      param_9 = (**(code **)(*plVar5 + 8))
                          (plVar5,param_2,param_3,*puVar7,puVar7[1],param_5,param_6,param_7,param_8,
                           param_9,param_10,param_11);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  return param_9;
}



// FUNCTION 1419540e0 FUN_1419540e0 body=397 status=ok
// SIG undefined FUN_1419540e0(void)

undefined1 * FUN_1419540e0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  bool bVar8;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  bVar8 = false;
  if (*(char *)(param_1 + 0x2f0) == '\0') {
LAB_14195415a:
    bVar4 = false;
  }
  else {
    if (*(char *)(param_1 + 0x389) == '\0') {
      local_48 = *(undefined8 *)(param_4 + 0x18);
      local_40 = *(undefined8 *)(param_4 + 0x20);
      local_38 = *(longlong **)(param_4 + 0x28);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      bVar8 = true;
      cVar7 = FKey::IsGamepadKey(&local_48);
      if (cVar7 != '\0') goto LAB_14195415a;
    }
    bVar4 = true;
  }
  plVar6 = local_38;
  if ((bVar8) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
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
  if (!bVar4) {
    FSlateEditableTextLayout::HandleKeyUp(param_1,param_2,param_3,param_4);
    return param_2;
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



// FUNCTION 141954270 FUN_141954270 body=274 status=ok
// SIG undefined FUN_141954270(void)

undefined1 * FUN_141954270(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    FUN_141958a60(param_1,0);
    local_28 = *(undefined8 *)(param_4 + 0x38);
    local_20 = *(undefined8 *)(param_4 + 0x40);
    local_18 = *(longlong *)(param_4 + 0x48);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_141955d50(param_1,&local_28,0,0,0,0);
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
  FSlateEditableTextLayout::HandleKeyUp();
  return param_2;
}



// FUNCTION 1419543b0 FUN_1419543b0 body=326 status=ok
// SIG undefined FUN_1419543b0(void)

undefined1 * FUN_1419543b0(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
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
  
  cVar1 = FUN_141846080();
  if (cVar1 != '\0') {
    local_14 = local_14 & 0xffffff00;
    local_c8[0] = 1;
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
    local_18 = 0x20702;
    uVar2 = FUN_1406a1ac0(local_c8);
    FUN_140438260(param_2,uVar2);
    FUN_140438c20(local_c8);
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



// FUNCTION 141954500 FUN_141954500 body=598 status=ok
// SIG undefined FUN_141954500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141954500(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
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
  cVar5 = FUN_141846080();
  if (cVar5 == '\0') {
    FUN_141926de0(param_1,0);
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



// FUNCTION 141954760 Padding body=105 status=ok
// SIG undefined Padding(void)

longlong SHorizontalBox::FSlot::Padding(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  local_20 = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (param_1 + 0x60,&local_20,param_3,param_2,param_2,param_2,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 1419547d0 FUN_1419547d0 body=88 status=ok
// SIG undefined FUN_1419547d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419547d0(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x498) != 0) && (*(longlong **)(param_1 + 0x490) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x498) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141954810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014195481e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 141954830 FUN_141954830 body=116 status=ok
// SIG undefined FUN_141954830(void)

void FUN_141954830(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  FUN_141852100(param_1 + 0x508,uVar5,0,0);
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



// FUNCTION 1419548b0 FUN_1419548b0 body=470 status=ok
// SIG undefined FUN_1419548b0(void)

float FUN_1419548b0(longlong param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  
  fVar7 = 1.0 / (param_2[7] * param_2[10] - param_2[8] * param_2[9]);
  fVar1 = param_2[0xc];
  fVar11 = param_2[7] * fVar7;
  fVar10 = -(param_2[9] * fVar7);
  fVar8 = param_2[10] * fVar7;
  fVar2 = param_2[0xb];
  fVar9 = -(param_2[8] * fVar7);
  fVar7 = (float)((ulonglong)*param_3 >> 0x20);
  local_res8 = (float)*param_3;
  fVar8 = fVar10 * fVar7 + fVar8 * local_res8 + fVar10 * -fVar1 + fVar8 * -fVar2;
  if (((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x220) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x218);
    }
    uVar4 = (**(code **)(*plVar5 + 0x38))();
    *(undefined1 *)(param_1 + 0x210) = uVar4;
  }
  if (*(char *)(param_1 + 0x210) == '\0') {
    fVar10 = 1.0;
  }
  else {
    fVar10 = 2.0;
  }
  fVar10 = fVar10 * *(float *)(*(longlong *)(param_1 + 0x208) + 0x120);
  if (*(int *)(param_1 + 0x240) == 0) {
    fVar6 = *param_2 - fVar10;
    if (fVar6 != 0.0) {
LAB_141954a74:
      fVar6 = (fVar8 - fVar10 * 0.5) / fVar6;
      if (fVar6 < 0.0) {
        return 0.0;
      }
      goto LAB_141954a2b;
    }
  }
  else {
    fVar6 = param_2[1] - fVar10;
    if (fVar6 != 0.0) {
      fVar8 = param_2[1] - (fVar11 * fVar7 + fVar9 * local_res8 + fVar11 * -fVar1 + fVar9 * -fVar2);
      goto LAB_141954a74;
    }
  }
  fVar6 = 0.0;
LAB_141954a2b:
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  return fVar6;
}



// FUNCTION 141954a90 FUN_141954a90 body=129 status=ok
// SIG undefined FUN_141954a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141954a90(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x483) & 2) == 0) {
    *(byte *)(param_1 + 0x483) = *(byte *)(param_1 + 0x483) | 2;
    FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x468,0);
    if ((*(int *)(param_1 + 0x418) != 0) && (*(longlong **)(param_1 + 0x410) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x410) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x418) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141954af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_1 + 0x410) + 0x40))();
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000141954b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_DAT_00000000 + 0x40))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 141954b20 FUN_141954b20 body=222 status=ok
// SIG undefined FUN_141954b20(void)

void FUN_141954b20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(int *)(param_1 + 0x458) == 0) || (*(longlong **)(param_1 + 0x450) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x18))(), cVar1 == '\0')) {
    plVar4 = (longlong *)(param_1 + 0x440);
    if (((*(int *)(param_1 + 0x458) != 0) && (*(longlong **)(param_1 + 0x450) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x458) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x450);
      }
      lVar2 = (**(code **)(*plVar3 + 0x38))();
      *plVar4 = lVar2;
    }
    if (*plVar4 != 0) {
      plVar3 = (longlong *)TAttribute<FSlateBrush_const_*>::Get(plVar4);
      lVar2 = FUN_14183ac90();
      if (*plVar3 != lVar2) {
        return;
      }
    }
    local_18 = 0;
    local_10 = 0;
    *plVar4 = param_2;
    *(undefined1 *)(param_1 + 0x448) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (param_1 + 0x450,&local_18,param_3,param_4,param_2,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 141954c00 FUN_141954c00 body=230 status=ok
// SIG undefined FUN_141954c00(void)

void FUN_141954c00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(int *)(param_1 + 0x438) != 0) && (*(longlong **)(param_1 + 0x430) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x18))(), cVar5 != '\0')) {
    return;
  }
  uVar6 = TAttribute<FText>::Get(param_1 + 0x410);
  cVar5 = FText::IsEmpty(uVar6);
  if (cVar5 != '\0') {
    FText::FText(local_38,param_2);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FText::operator=(param_1 + 0x410,local_38);
    *(undefined1 *)(param_1 + 0x428) = local_20;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x430,&local_18);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
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
  }
  return;
}



// FUNCTION 141954cf0 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141954e1f;
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
LAB_141954e1f:
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
        lVar6 = (longlong)iStack_2c * 0x78 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
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
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141954f00 FUN_141954f00 body=107 status=ok
// SIG undefined FUN_141954f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141954f00(longlong param_1)

{
  char cVar1;
  
  if ((((*(byte *)(param_1 + 0x483) & 2) != 0) &&
      (*(byte *)(param_1 + 0x483) = *(byte *)(param_1 + 0x483) & 0xfd,
      *(int *)(param_1 + 0x428) != 0)) && (*(longlong **)(param_1 + 0x420) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x428) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141954f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x420) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000141954f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 141954f70 FUN_141954f70 body=906 status=ok
// SIG undefined FUN_141954f70(void)

undefined8 FUN_141954f70(longlong *param_1,int *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int local_res20;
  int iStackX_24;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  
  iVar6 = *param_2;
  iVar3 = param_2[1];
  if ((-1 < iVar6) && (iVar6 < (int)param_1[4])) {
    plVar12 = (longlong *)((longlong)iVar6 * 0x70 + param_1[3]);
    plVar13 = (longlong *)*plVar12;
    iVar8 = (int)plVar13[1];
    iVar6 = iVar8 + -1;
    iVar16 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar6 = -1;
      iVar16 = -1;
    }
    if (iVar8 == 0) {
      iVar16 = 0;
    }
    if (iVar16 < iVar3 + param_3) {
      if (iVar8 == 0) {
        iVar6 = 0;
      }
      param_3 = iVar6 - iVar3;
    }
    if (param_3 != 0) {
      iVar16 = iVar3 + param_3;
      iVar6 = (iVar8 - iVar3) - param_3;
      local_98 = plVar12;
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar13 + (longlong)iVar3 * 2),
                   (void *)(*plVar13 + (longlong)iVar16 * 2),(longlong)iVar6 * 2);
        iVar8 = (int)plVar13[1];
      }
      *(int *)(plVar13 + 1) = iVar8 - param_3;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(plVar13);
      *(byte *)(plVar12 + 0xd) = *(byte *)(plVar12 + 0xd) | 7;
      iVar6 = (int)plVar12[6] + -1;
      if (-1 < iVar6) {
        plVar13 = plVar12 + 5;
        lVar15 = (longlong)iVar6 * 0x30;
        do {
          puVar10 = (undefined8 *)(*plVar13 + lVar15);
          (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,&local_b8);
          iVar8 = iVar3;
          if (iVar3 <= local_b8) {
            iVar8 = local_b8;
          }
          iVar9 = iVar16;
          if (iStack_b4 <= iVar16) {
            iVar9 = iStack_b4;
          }
          iVar7 = 0;
          iVar14 = 0;
          if (iVar8 < iVar9) {
            iVar7 = iVar8;
            iVar14 = iVar9;
          }
          iVar14 = iVar14 - iVar7;
          if (iVar14 < 1) {
            if (local_b8 < iVar16) {
              if (0 < iVar14) goto LAB_141955103;
              if ((((iStack_b4 - local_b8 < 1) && (iVar3 <= local_b8)) && (local_b8 < iVar16)) &&
                 ((iVar3 <= iStack_b4 && (iStack_b4 < iVar16)))) {
                TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                          (plVar13,iVar6,1,CONCAT71((uint7)(uint3)((uint)iStack_b4 >> 8),1));
              }
            }
            else {
              iVar8 = -param_3 + local_b8;
              if (iVar8 < 1) {
                iVar8 = 0;
              }
              iVar9 = iStack_b4 + -param_3;
              if (iVar9 < 1) {
                iVar9 = 0;
              }
              _local_res20 = CONCAT44(iVar9,iVar8);
              (**(code **)(*(longlong *)*puVar10 + 0x10))((longlong *)*puVar10,&local_res20);
            }
          }
          else {
LAB_141955103:
            if (iStack_b4 - local_b8 == iVar14) {
              TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (plVar13,iVar6,1);
              if ((int)local_98[6] == 0) {
                local_b0 = 0;
                (**(code **)(*param_1 + 0x30))(param_1,&local_90,local_98,&local_b0);
                plVar11 = local_88;
                uVar5 = local_90;
                local_80 = local_90;
                local_78 = local_88;
                if (local_88 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_88 + 1) = (int)local_88[1] + 1;
                  UNLOCK();
                }
                iVar8 = (int)plVar12[6];
                *(int *)(plVar12 + 6) = iVar8 + 1;
                if (*(int *)((longlong)plVar12 + 0x34) < iVar8 + 1) {
                  TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar13,iVar8);
                }
                plVar2 = local_78;
                puVar10 = (undefined8 *)((longlong)iVar8 * 0x30 + *plVar13);
                *puVar10 = uVar5;
                puVar10[1] = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                  plVar11 = local_78;
                }
                puVar10[2] = 0;
                puVar10[3] = 0;
                puVar10[4] = 0;
                puVar10[5] = 0;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = plVar11 + 1;
                  lVar4 = *plVar11;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
                    (**(code **)*local_78)(local_78);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar2 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*local_78 + 8))(local_78,1);
                    }
                  }
                }
                plVar11 = local_88;
                if (local_88 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_88 + 1;
                  lVar4 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
                    (**(code **)*local_88)(local_88);
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
            }
            else {
              plVar11 = (longlong *)*puVar10;
              if (iVar3 < local_b8) {
                local_a4 = iStack_b4 - param_3;
                local_a8 = iVar3;
                (**(code **)(*plVar11 + 0x10))(plVar11,&local_a8);
              }
              else {
                local_9c = iStack_b4 - iVar14;
                local_a0 = local_b8;
                (**(code **)(*plVar11 + 0x10))(plVar11,&local_a0);
              }
            }
            if (local_b8 <= iVar3) break;
          }
          lVar15 = lVar15 + -0x30;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141955300 RemoveAtImpl body=346 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = *param_1 + 0x48 + (longlong)param_2 * 0x70;
    iVar6 = param_3;
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
      plVar3 = *(longlong **)(lVar7 + -0x30);
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
      plVar3 = *(longlong **)(lVar7 + -0x40);
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
      lVar7 = lVar7 + 0x70;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x70),
                 (void *)((longlong)(param_2 + param_3) * 0x70 + *param_1),(longlong)iVar5 * 0x70);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141955460 RemoveAtImpl body=286 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
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
    plVar7 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x30);
    iVar6 = param_3;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar3 = (longlong *)plVar7[-1];
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x30),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + *param_1),(longlong)iVar5 * 0x30);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141955580 RemoveLine body=722 status=ok
// SIG undefined RemoveLine(void)

undefined8 FTextLayout::RemoveLine(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res18 [4];
  float local_res1c;
  
  iVar5 = (int)param_2;
  if ((iVar5 < 0) || (*(int *)(param_1 + 0x20) <= iVar5)) {
    return 0;
  }
  TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
            (param_1 + 0x18,param_2,1,1);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar7 = 0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    if (0 < iVar3) {
      lVar9 = 0;
      iVar12 = 1;
LAB_141955610:
      lVar10 = *(longlong *)(param_1 + 0x28);
      iVar1 = *(int *)(lVar10 + 0x54 + lVar9);
      if (iVar1 == iVar5) {
        fVar15 = fVar15 + *(float *)(lVar10 + 0x3c + lVar9);
        if ((-1 < iVar12) && (iVar12 < iVar3)) {
          fVar14 = fVar14 + (*(float *)(lVar9 + 0x8c + lVar10) - *(float *)(lVar10 + 0x34 + lVar9));
        }
        lVar13 = (longlong)iVar7 * 0x58;
        lVar10 = lVar13 + lVar10;
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar10 + 0x20);
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar10 + 0x10);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar10);
        iVar3 = *(int *)(param_1 + 0x30);
        iVar1 = (iVar3 - iVar7) + -1;
        if (iVar1 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x28) + lVar13),
                     (void *)((longlong)iVar12 * 0x58 + *(longlong *)(param_1 + 0x28)),
                     (longlong)iVar1 * 0x58);
          iVar3 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar3 + -1;
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
        if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
          lVar10 = *(longlong *)(param_1 + 0x78);
          if (*(longlong *)(param_1 + 0x78) == 0) {
            lVar10 = param_1 + 0x70;
          }
          uVar11 = (longlong)*(int *)(param_1 + 0x80) - 1;
          iVar3 = *(int *)(lVar10 + ((longlong)iVar7 & uVar11) * 4);
          if (iVar3 != -1) {
            lVar13 = *(longlong *)(param_1 + 0x38);
            do {
              lVar2 = (longlong)iVar3;
              if (*(int *)(lVar13 + lVar2 * 0xc) == iVar7) {
                uVar11 = (longlong)*(int *)(lVar13 + 8 + lVar2 * 0xc) & uVar11;
                puVar4 = (undefined4 *)(lVar10 + uVar11 * 4);
                iVar1 = *(int *)(lVar10 + uVar11 * 4);
                if (iVar1 != -1) goto LAB_141955730;
                goto LAB_141955757;
              }
              iVar3 = *(int *)(lVar13 + 4 + lVar2 * 0xc);
            } while (iVar3 != -1);
            iVar7 = iVar7 + -1;
            iVar12 = iVar12 + -1;
            lVar9 = lVar9 + -0x58;
            goto LAB_1419557e8;
          }
        }
        goto LAB_141955766;
      }
      if (iVar5 < iVar1) {
        *(int *)(lVar10 + 0x54 + lVar9) = iVar1 + -1;
        *(float *)(lVar10 + 0x34 + lVar9) = *(float *)(lVar10 + 0x34 + lVar9) - fVar14;
        puVar6 = *(undefined8 **)(lVar10 + lVar9);
        puVar8 = puVar6 + (longlong)*(int *)(lVar10 + 8 + lVar9) * 2;
        for (; puVar6 != puVar8; puVar6 = puVar6 + 2) {
          (**(code **)(*(longlong *)*puVar6 + 0x38))((longlong *)*puVar6,local_res18);
          local_res1c = local_res1c - fVar14;
          (**(code **)(*(longlong *)*puVar6 + 0x30))((longlong *)*puVar6,local_res18);
        }
      }
      goto LAB_1419557e8;
    }
LAB_141955816:
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) - fVar15;
  }
  return 1;
  while( true ) {
    lVar10 = (longlong)iVar1 * 3 + 1;
    iVar1 = *(int *)(lVar13 + lVar10 * 4);
    puVar4 = (undefined4 *)(lVar13 + lVar10 * 4);
    if (iVar1 == -1) break;
LAB_141955730:
    if (iVar1 == iVar3) {
      *puVar4 = *(undefined4 *)(lVar13 + 4 + lVar2 * 0xc);
      break;
    }
  }
LAB_141955757:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1 + 0x38,iVar3,1);
LAB_141955766:
  iVar7 = iVar7 + -1;
  iVar12 = iVar12 + -1;
  lVar9 = lVar9 + -0x58;
LAB_1419557e8:
  iVar3 = *(int *)(param_1 + 0x30);
  iVar7 = iVar7 + 1;
  iVar12 = iVar12 + 1;
  lVar9 = lVar9 + 0x58;
  if (iVar3 <= iVar7) goto LAB_141955816;
  goto LAB_141955610;
}



// FUNCTION 141955860 RemoveLineHighlight body=151 status=ok
// SIG undefined RemoveLineHighlight(void)

void FTextLayout::RemoveLineHighlight(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  lVar2 = (longlong)*param_2 * 0x70 + *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar2 + 0x60)) {
    piVar1 = *(int **)(lVar2 + 0x58);
    uVar4 = uVar3;
    while ((((*piVar1 != *param_2 || (piVar1[1] != param_2[1])) || (piVar1[2] != param_2[2])) ||
           ((piVar1[3] != param_2[3] || (*(longlong *)(piVar1 + 4) != *(longlong *)(param_2 + 4)))))
          ) {
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 8;
      if ((longlong)*(int *)(lVar2 + 0x60) <= (longlong)uVar3) {
        return;
      }
    }
    TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (lVar2 + 0x58,uVar4,1);
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  }
  return;
}



// FUNCTION 141955900 FUN_141955900 body=598 status=ok
// SIG undefined FUN_141955900(void)

void FUN_141955900(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_48);
  plVar2 = (longlong *)puVar7[1];
  uVar3 = *puVar7;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  plVar9 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x468) != 0) && (*(longlong **)(param_1 + 0x460) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar9;
    if (*(int *)(param_1 + 0x468) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x460);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_58 = uVar3;
    local_50 = plVar2;
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_58);
  }
  if (plVar2 != (longlong *)0x0) {
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
  if ((*(longlong *)(param_1 + 0x400) != 0) && (*(longlong *)(param_1 + 0x408) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
      local_68 = *puVar7;
      local_60 = (longlong *)puVar7[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      plVar2 = *(longlong **)(param_1 + 0x408);
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
              plVar9 = *(longlong **)(param_1 + 0x400);
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
      FUN_1419134c0(plVar9,&local_68,1);
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
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
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
  }
  return;
}



// FUNCTION 141955b60 FUN_141955b60 body=108 status=ok
// SIG undefined FUN_141955b60(void)

char FUN_141955b60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x498) != 0) && (*(longlong **)(param_1 + 0x490) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x498) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x490);
      }
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  cVar1 = FUN_14192a150(param_1);
  if (cVar1 != '\0') {
    FUN_141955900(param_1);
  }
  return cVar1;
}



// FUNCTION 141955bd0 FUN_141955bd0 body=272 status=ok
// SIG undefined FUN_141955bd0(void)

void FUN_141955bd0(longlong param_1)

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
      FUN_141923d10((longlong)local_1c * 0x78 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo(param_1,0)
    ;
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
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



// FUNCTION 141955ce0 FUN_141955ce0 body=105 status=ok
// SIG undefined FUN_141955ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141955ce0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    if ((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x338) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x330) + 0x40))();
          *(undefined1 *)(param_1 + 0x2f8) = 0;
          return;
        }
        (**(code **)(_DAT_00000000 + 0x40))();
      }
    }
    *(undefined1 *)(param_1 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 141955d50 FUN_141955d50 body=828 status=ok
// SIG undefined FUN_141955d50(void)

void FUN_141955d50(longlong param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5,
                  byte param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  longlong *plVar13;
  undefined8 local_80;
  longlong *local_78;
  uint local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  
  plVar4 = (longlong *)param_2[2];
  uVar10 = *param_2;
  plVar13 = (longlong *)0x0;
  uVar5 = param_2[1];
  if (*(char *)(param_1 + 0x388) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_80 = uVar5;
    local_78 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_70[0] = local_70[0] & 0xfffffff0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    bVar7 = false;
    bVar6 = true;
    puVar12 = local_70;
    puVar11 = &local_80;
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_68 = uVar10;
    local_60 = uVar5;
    local_58 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_50[0] = (((uint)param_6 * 2 | (uint)param_5) * 2 | (uint)param_4) * 2 |
                  local_50[0] & 0xfffffff0 | param_3 & 0xff;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    bVar7 = true;
    bVar6 = false;
    puVar12 = local_50;
    puVar11 = &local_60;
  }
  plVar4 = local_78;
  local_40 = *puVar11;
  local_38 = (longlong *)puVar11[1];
  local_48 = uVar10;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_30 = local_30 ^ (*puVar12 ^ local_30) & 0xf;
  if (bVar6) {
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  plVar4 = local_58;
  if ((bVar7) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if ((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0)) {
    cVar9 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))();
    if (cVar9 != '\0') goto LAB_141955fc3;
  }
  if ((*(int *)(param_1 + 0x328) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 800), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 800) != 0) {
      uVar10 = FMemory::Realloc(*(longlong *)(param_1 + 800),0,0);
      *(undefined8 *)(param_1 + 800) = uVar10;
    }
    *(undefined4 *)(param_1 + 0x328) = 0;
  }
  FKey::operator=(param_1 + 0x2f8,&local_48);
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffff0;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | local_30 & 0xf;
  *(undefined1 *)(param_1 + 0x318) = 1;
LAB_141955fc3:
  if ((*(int *)(param_1 + 0x3a8) != 0) && (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0)) {
    cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x18))();
    if (cVar9 != '\0') {
      if (*(int *)(param_1 + 0x3a8) != 0) {
        plVar13 = *(longlong **)(param_1 + 0x3a0);
      }
      (**(code **)(*plVar13 + 0x40))(plVar13,&local_48);
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_38 + 1;
    lVar8 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_38)(local_38);
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
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    lVar8 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 141956090 FUN_141956090 body=35 status=ok
// SIG undefined FUN_141956090(void)

void FUN_141956090(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x398) = *param_2;
  *(undefined1 *)(param_1 + 0x399) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a0,param_2 + 8);
  return;
}



// FUNCTION 1419560c0 FUN_1419560c0 body=64 status=ok
// SIG undefined FUN_1419560c0(void)

void FUN_1419560c0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar1 + 0x398) = *param_2;
  *(undefined1 *)(lVar1 + 0x399) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x3a0,param_2 + 8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 141956100 FUN_141956100 body=12 status=ok
// SIG undefined FUN_141956100(void)

void FUN_141956100(longlong param_1)

{
  FUN_1419bb980(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141956110 FUN_141956110 body=7 status=ok
// SIG undefined FUN_141956110(void)

void FUN_141956110(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a4) = param_2;
  return;
}



// FUNCTION 141956120 FUN_141956120 body=12 status=ok
// SIG undefined FUN_141956120(void)

void FUN_141956120(longlong param_1)

{
  FUN_1419bbb30(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141956130 SetButtonStyle body=205 status=ok
// SIG undefined SetButtonStyle(void)

void SButton::SetButtonStyle(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0x3d8) = param_2;
  *(longlong *)(param_1 + 0x3e0) = param_2 + 8;
  *(longlong *)(param_1 + 1000) = param_2 + 0x90;
  *(longlong *)(param_1 + 0x3f0) = param_2 + 0x118;
  *(longlong *)(param_1 + 0x3f8) = param_2 + 0x1a0;
  uVar2 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x3b8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x3c8) = uVar2;
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x274);
  lVar1 = *(longlong *)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(lVar1 + 0x248);
  *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(lVar1 + 0x250);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(lVar1 + 600);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(lVar1 + 0x25c);
  return;
}



// FUNCTION 141956200 SetButtonStyle body=17 status=ok
// SIG undefined SetButtonStyle(void)

void SInputKeySelector::SetButtonStyle(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3c0);
  if (lVar2 == 0) {
    return;
  }
  *(longlong *)(lVar2 + 0x3d8) = param_2;
  *(longlong *)(lVar2 + 0x3e0) = param_2 + 8;
  *(longlong *)(lVar2 + 1000) = param_2 + 0x90;
  *(longlong *)(lVar2 + 0x3f0) = param_2 + 0x118;
  *(longlong *)(lVar2 + 0x3f8) = param_2 + 0x1a0;
  uVar3 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(lVar2 + 0x3b0) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(lVar2 + 0x3b8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(lVar2 + 0x3c0) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(lVar2 + 0x3c8) = uVar3;
  *(undefined8 *)(lVar2 + 0x450) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(lVar2 + 0x458) = *(undefined8 *)(param_2 + 0x268);
  *(undefined4 *)(lVar2 + 0x460) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(lVar2 + 0x464) = *(undefined4 *)(param_2 + 0x274);
  lVar1 = *(longlong *)(lVar2 + 0x3d8);
  *(undefined8 *)(lVar2 + 0x468) = *(undefined8 *)(lVar1 + 0x248);
  *(undefined8 *)(lVar2 + 0x470) = *(undefined8 *)(lVar1 + 0x250);
  *(undefined4 *)(lVar2 + 0x478) = *(undefined4 *)(lVar1 + 600);
  *(undefined4 *)(lVar2 + 0x47c) = *(undefined4 *)(lVar1 + 0x25c);
  return;
}



// FUNCTION 141956220 FUN_141956220 body=42 status=ok
// SIG undefined FUN_141956220(void)

void FUN_141956220(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar1 + 0x368) = *param_2;
  *(undefined1 *)(lVar1 + 0x369) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x370,param_2 + 8);
  return;
}



// FUNCTION 141956250 FUN_141956250 body=7 status=ok
// SIG undefined FUN_141956250(void)

void FUN_141956250(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x480) = param_2;
  return;
}



// FUNCTION 141956260 SetColorAndOpacity body=104 status=ok
// SIG undefined SetColorAndOpacity(void)

void SImage::SetColorAndOpacity(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FSlateColor>::IdenticalTo(param_1 + 0x228);
  if (cVar1 == '\0') {
    FUN_140692440(param_1 + 0x228,param_2);
    *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x28);
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,param_2 + 0x30);
    FUN_1418475e0(param_1,6);
  }
  return;
}



// FUNCTION 1419562d0 FUN_1419562d0 body=361 status=ok
// SIG undefined FUN_1419562d0(void)

void FUN_1419562d0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = 0;
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  cVar6 = TAttribute<FSlateColor>::IdenticalTo(param_1 + 0x228,&local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  plVar5 = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  if (cVar6 == '\0') {
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    local_98 = 0;
    local_80 = 1;
    local_78 = 0;
    local_70 = 0;
    local_90 = 0;
    plStack_88 = (longlong *)0x0;
    FUN_140692440(param_1 + 0x228,&local_a8);
    *(undefined1 *)(param_1 + 0x250) = local_80;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,&local_78);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
    plVar5 = plStack_88;
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_88)(plStack_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_88 + 8))(plStack_88,1);
        }
      }
    }
    FUN_1418475e0(param_1,6);
  }
  return;
}



// FUNCTION 141956440 FUN_141956440 body=56 status=ok
// SIG undefined FUN_141956440(void)

void FUN_141956440(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  plVar1 = *(longlong **)(param_1 + 0x488);
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x208))(plVar1,&local_18);
  return;
}



// FUNCTION 141956480 FUN_141956480 body=415 status=ok
// SIG undefined FUN_141956480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141956480(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uStack_40 = (longlong *)param_2[1];
  local_48 = *param_2;
  puVar6 = (undefined8 *)(param_1 + 0x3a8);
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar6) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar3 = *puVar6;
    plVar7 = *(longlong **)(param_1 + 0x3b0);
    local_30 = (undefined4)local_48;
    uStack_2c = local_48._4_4_;
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    *(undefined4 *)puVar6 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x3ac) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x3b0) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x3b4) = uStack_40._4_4_;
    local_48 = uVar3;
    uStack_40 = plVar7;
  }
  plVar7 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*uStack_40 + 8))();
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x400) != 0) && (*(longlong *)(param_1 + 0x408) != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 0x408);
      plVar8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar7, !bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = *(longlong **)(param_1 + 0x400);
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
      FUN_141912b50(plVar7);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  plVar7 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 141956620 FUN_141956620 body=157 status=ok
// SIG undefined FUN_141956620(void)

void FUN_141956620(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar4 = **(longlong **)(param_1 + 0x2e8);
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(lVar4 + 0x48) = 1;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x50,&local_20,param_3,param_4,0,0,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TSlotBase<FSimpleSlot>::operator[](lVar4 + 0x10,param_2);
  plVar5 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 1419566c0 SetContentPadding body=36 status=ok
// SIG undefined SetContentPadding(void)

void SButton::SetContentPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x388) = *param_2;
  *(undefined4 *)(param_1 + 0x38c) = uVar1;
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  *(undefined4 *)(param_1 + 0x394) = uVar3;
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a0,param_2 + 6);
  return;
}



// FUNCTION 1419566f0 SetDebugSourceInfo body=58 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FTextLayout::SetDebugSourceInfo(longlong param_1,longlong param_2)

{
  FString::operator=(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x10);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x120,param_2 + 0x18);
  return;
}



// FUNCTION 141956730 SetDefaultTextStyle body=34 status=ok
// SIG undefined SetDefaultTextStyle(void)

void FSlateTextLayout::SetDefaultTextStyle(longlong param_1,undefined8 param_2)

{
  FTextBlockStyle::operator=(param_1 + 0x130);
  FUN_140691580(param_2);
  return;
}



// FUNCTION 141956760 FUN_141956760 body=191 status=ok
// SIG undefined FUN_141956760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141956760(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar3 = (undefined8 *)(param_1 + 0x5b8);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar3;
    plVar6 = *(longlong **)(param_1 + 0x5c0);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x5bc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x5c0) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x5c4) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 141956820 FUN_141956820 body=886 status=ok
// SIG undefined FUN_141956820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141956820(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 local_258 [8];
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  undefined1 *local_210;
  undefined8 local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [328];
  longlong *local_70;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  pplVar2 = (longlong **)(param_1 + 0x510);
  if (*pplVar2 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_238 = (longlong *)0x0;
    plVar4 = (longlong *)FUN_141920570();
    plVar9 = plVar4 + 2;
    local_220 = plVar9;
    local_218 = plVar4;
    FUN_14044f790(&local_220,plVar9);
    local_210 = local_258;
    local_268 = 0x380;
    SWidget::SetDebugInfo
              (plVar9,"SPopupErrorText",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
               ,0x80);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_230 = 0;
    local_240 = plVar9;
    local_228 = plVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_238,&local_228);
    plVar9 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_228 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    uVar5 = FUN_141921f50(local_1b8);
    puVar6 = (undefined8 *)FUN_141926360(&local_220,local_1d0,uVar5);
    local_208 = *puVar6;
    local_200 = puVar6[1];
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_140693c40(*(undefined8 *)(param_1 + 0x500));
    lVar7 = SVerticalBox::FSlot::AutoHeight(uVar5);
    local_1e8 = 1;
    local_1f8 = 0x40400000;
    uStack_1f4 = 0;
    uStack_1f0 = 0x40400000;
    uStack_1ec = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    *(undefined4 *)(lVar7 + 0x48) = 0x40400000;
    *(undefined4 *)(lVar7 + 0x4c) = 0;
    *(undefined4 *)(lVar7 + 0x50) = 0x40400000;
    *(undefined4 *)(lVar7 + 0x54) = 0;
    *(undefined1 *)(lVar7 + 0x58) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x60,&local_1e0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e0);
    FUN_140692760(lVar7,&local_208);
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1c8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    plVar9 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_218 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    FUN_140456c70(local_1b8);
    plVar9 = local_238;
    if (local_240 != (longlong *)0x0) {
      plVar8 = local_240 + 0x6b;
    }
    local_248 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_238 + 1) = (int)local_238[1] + 1;
      UNLOCK();
    }
    local_250 = plVar8;
    if (pplVar2 != &local_250) {
      *pplVar2 = plVar8;
      local_250 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x518,&local_248);
    }
    plVar4 = local_248;
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_248 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = local_238;
      if ((int)lVar7 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = local_238;
        if (iVar3 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
          plVar9 = local_238;
        }
      }
    }
    plVar4 = local_238;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
  }
  (**(code **)(**pplVar2 + 8))(*pplVar2,param_2);
  return;
}



// FUNCTION 141956ba0 SetError body=33 status=ok
// SIG undefined SetError(void)

void SEditableTextBox::SetError(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(param_2);
  FUN_141956820(param_1,uVar1);
  return;
}



// FUNCTION 141956bd0 FUN_141956bd0 body=886 status=ok
// SIG undefined FUN_141956bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141956bd0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 local_258 [8];
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  undefined1 *local_210;
  undefined8 local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [328];
  longlong *local_70;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  pplVar2 = (longlong **)(param_1 + 0x5b0);
  if (*pplVar2 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_238 = (longlong *)0x0;
    plVar4 = (longlong *)FUN_141920570();
    plVar9 = plVar4 + 2;
    local_220 = plVar9;
    local_218 = plVar4;
    FUN_14044f790(&local_220,plVar9);
    local_210 = local_258;
    local_268 = 0x380;
    SWidget::SetDebugInfo
              (plVar9,"SPopupErrorText",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
               ,0x14b);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_230 = 0;
    local_240 = plVar9;
    local_228 = plVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_238,&local_228);
    plVar9 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_228 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    uVar5 = FUN_141921f50(local_1b8);
    puVar6 = (undefined8 *)FUN_141926360(&local_220,local_1d0,uVar5);
    local_208 = *puVar6;
    local_200 = puVar6[1];
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_140693c40(*(undefined8 *)(param_1 + 0x550));
    lVar7 = SVerticalBox::FSlot::AutoHeight(uVar5);
    local_1e8 = 1;
    local_1f8 = 0x40400000;
    uStack_1f4 = 0;
    uStack_1f0 = 0x40400000;
    uStack_1ec = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    *(undefined4 *)(lVar7 + 0x48) = 0x40400000;
    *(undefined4 *)(lVar7 + 0x4c) = 0;
    *(undefined4 *)(lVar7 + 0x50) = 0x40400000;
    *(undefined4 *)(lVar7 + 0x54) = 0;
    *(undefined1 *)(lVar7 + 0x58) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x60,&local_1e0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e0);
    FUN_140692760(lVar7,&local_208);
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1c8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    plVar9 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_218 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    FUN_140456c70(local_1b8);
    plVar9 = local_238;
    if (local_240 != (longlong *)0x0) {
      plVar8 = local_240 + 0x6b;
    }
    local_248 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_238 + 1) = (int)local_238[1] + 1;
      UNLOCK();
    }
    local_250 = plVar8;
    if (pplVar2 != &local_250) {
      *pplVar2 = plVar8;
      local_250 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5b8,&local_248);
    }
    plVar4 = local_248;
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_248 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = local_238;
      if ((int)lVar7 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = local_238;
        if (iVar3 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
          plVar9 = local_238;
        }
      }
    }
    plVar4 = local_238;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
  }
  (**(code **)(**pplVar2 + 8))(*pplVar2,param_2);
  return;
}



// FUNCTION 141956f50 SetError body=33 status=ok
// SIG undefined SetError(void)

void SMultiLineEditableTextBox::SetError(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(param_2);
  FUN_141956bd0(param_1,uVar1);
  return;
}



// FUNCTION 141956f80 FUN_141956f80 body=12 status=ok
// SIG undefined FUN_141956f80(void)

void FUN_141956f80(longlong param_1)

{
  FUN_1419a2a00(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 141956f90 FUN_141956f90 body=19 status=ok
// SIG undefined FUN_141956f90(void)

void FUN_141956f90(longlong param_1)

{
  FUN_1419a2a00(*(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x220));
  return;
}



// FUNCTION 141956fb0 FUN_141956fb0 body=12 status=ok
// SIG undefined FUN_141956fb0(void)

void FUN_141956fb0(longlong param_1)

{
  FUN_1419bc3c0(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141956fc0 FUN_141956fc0 body=269 status=ok
// SIG undefined FUN_141956fc0(void)

void FUN_141956fc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((*(int *)(param_1 + 0x220) == 0) || (*(longlong **)(param_1 + 0x218) == (longlong *)0x0)) {
LAB_141956ff5:
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))();
    if (cVar1 == '\0') goto LAB_141956ff5;
    cVar1 = '\x01';
  }
  if (((int)param_2[3] == 0) || ((longlong *)param_2[2] == (longlong *)0x0)) {
LAB_141957015:
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_2[2] + 0x18))();
    if (cVar2 == '\0') goto LAB_141957015;
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x210) != (char)param_2[1]) goto LAB_14195708a;
      bVar6 = *(longlong *)(param_1 + 0x208) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if (((int)param_2[3] != 0) &&
         (plVar3 = (longlong *)param_2[2], lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x220) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x218), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) goto LAB_1419570b9;
  }
LAB_14195708a:
  *(longlong *)(param_1 + 0x208) = *param_2;
  *(char *)(param_1 + 0x210) = (char)param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x218,param_2 + 2);
  FUN_1418475e0(param_1,5);
LAB_1419570b9:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419570d0 SetLocked body=35 status=ok
// SIG undefined SetLocked(void)

void SSlider::SetLocked(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x210) = *param_2;
  *(undefined1 *)(param_1 + 0x211) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x218,param_2 + 8);
  return;
}



// FUNCTION 141957100 FUN_141957100 body=42 status=ok
// SIG undefined FUN_141957100(void)

void FUN_141957100(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar1 + 800) = *param_2;
  *(undefined1 *)(lVar1 + 0x321) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x328,param_2 + 8);
  return;
}



// FUNCTION 141957130 FUN_141957130 body=35 status=ok
// SIG undefined FUN_141957130(void)

void FUN_141957130(longlong param_1,longlong param_2)

{
  FUN_1419258c0(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 141957160 FUN_141957160 body=5847 status=ok
// SIG undefined FUN_141957160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141957160(longlong *param_1,char param_2,byte param_3,undefined4 param_4)

{
  longlong **pplVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  char *pcVar21;
  float *pfVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_778 [32];
  longlong *local_758;
  longlong *local_750;
  longlong *local_748;
  undefined8 *local_740;
  float *local_738;
  undefined2 *local_730;
  undefined1 local_728;
  undefined1 local_720;
  longlong local_718;
  byte local_708;
  undefined1 local_707 [3];
  int local_704;
  undefined4 local_700;
  undefined2 local_6fc [2];
  longlong local_6f8;
  longlong *plStack_6f0;
  longlong *local_6e8;
  longlong *plStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  longlong *local_6c8;
  longlong *plStack_6c0;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  float *local_6a8;
  undefined4 uStack_6a0;
  uint uStack_69c;
  longlong *local_698;
  longlong local_690;
  char local_688 [8];
  undefined8 local_680;
  longlong *plStack_678;
  undefined2 local_670;
  code *local_668;
  longlong *local_660;
  longlong local_658;
  longlong *local_650;
  undefined4 local_648;
  undefined4 uStack_644;
  code *local_638;
  longlong *plStack_630;
  longlong *local_628;
  longlong *local_620;
  longlong local_618;
  longlong *local_610;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  char local_5f8 [8];
  undefined8 local_5f0;
  longlong *plStack_5e8;
  undefined1 local_5e0;
  undefined1 local_5df;
  longlong local_5d8;
  longlong *local_5d0;
  longlong local_5c8;
  longlong *local_5c0;
  undefined1 local_5b8 [8];
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined2 local_5a0;
  undefined8 local_598;
  longlong local_590;
  longlong local_588;
  longlong *local_580;
  longlong local_578;
  longlong *plStack_570;
  code *local_568;
  longlong *local_560;
  longlong *local_558;
  longlong *local_550;
  longlong *local_548;
  longlong local_540;
  longlong local_538;
  longlong *plStack_530;
  longlong *local_528;
  longlong *local_520;
  longlong local_518;
  longlong local_510;
  char local_508 [8];
  undefined8 local_500;
  longlong *local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [8];
  undefined1 local_4e0 [8];
  longlong *local_4d8;
  code *local_4c8;
  longlong lStack_4c0;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a8 [8];
  longlong *local_4a0;
  undefined1 local_498 [8];
  longlong *local_490;
  longlong local_488;
  longlong *plStack_480;
  undefined1 local_478 [8];
  longlong *local_470;
  code *local_468;
  ulonglong uStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  code *local_438;
  longlong *local_430;
  undefined1 local_420 [8];
  undefined1 local_418 [8];
  undefined1 local_410 [16];
  undefined1 local_400 [8];
  longlong *local_3f8;
  undefined1 local_3f0 [16];
  longlong local_3e0 [2];
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  longlong *local_3c0;
  longlong *plStack_3b8;
  longlong *local_3b0;
  longlong *plStack_3a8;
  undefined1 local_3a0 [8];
  undefined1 local_398 [288];
  undefined1 *local_278;
  int local_270;
  undefined1 local_238 [288];
  longlong *local_118;
  undefined1 local_100 [72];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_778;
  plVar12 = (longlong *)0x0;
  local_704 = 0;
  if ((((char)param_1[0x54] == '\0') || (param_1[0x44] == 0)) || (param_1[0x45] == 0)) {
LAB_1419571ca:
    cVar6 = '\0';
  }
  else {
    piVar10 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar8 = *piVar10;
    if (iVar8 == 0) {
      *piVar10 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_1419571ca;
    cVar6 = '\x01';
  }
  if (cVar6 == param_2) {
    return;
  }
  local_708 = param_3;
  local_700 = param_4;
  if (param_2 != '\0') {
    if ((((int)param_1[0x4d] != 0) && ((longlong *)param_1[0x4c] != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*(longlong *)param_1[0x4c] + 0x18))(), cVar6 != '\0')) {
      plVar13 = plVar12;
      if ((int)param_1[0x4d] != 0) {
        plVar13 = (longlong *)param_1[0x4c];
      }
      (**(code **)(*plVar13 + 0x38))(plVar13,local_410);
      (**(code **)(*param_1 + 0x208))(param_1,local_410);
    }
    if (param_1[0x48] == 0) goto LAB_141958800;
    if ((((int)param_1[0x4f] != 0) && ((longlong *)param_1[0x4e] != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*(longlong *)param_1[0x4e] + 0x18))(), cVar6 != '\0')) {
      plVar13 = plVar12;
      if ((int)param_1[0x4f] != 0) {
        plVar13 = (longlong *)param_1[0x4e];
      }
      (**(code **)(*plVar13 + 0x38))(plVar13,1);
    }
    FWidgetPath::FWidgetPath(local_3a0);
    local_707[0] = DAT_1464b9ee8;
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_400);
    local_598 = *puVar9;
    local_590 = puVar9[1];
    if (local_590 != 0) {
      LOCK();
      *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
      UNLOCK();
    }
    FUN_14189ada0(DAT_1469f4590,&local_598,local_3a0,local_707);
    if (local_3f8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_3f8 + 1;
      lVar15 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_3f8)(local_3f8);
        LOCK();
        piVar10 = (int *)((longlong)local_3f8 + 0xc);
        iVar8 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_3f8 + 8))(local_3f8,1);
        }
      }
    }
    cVar6 = FWidgetPath::IsValid(local_3a0);
    if (cVar6 != '\0') {
      puVar20 = local_398;
      if (local_278 != (undefined1 *)0x0) {
        puVar20 = local_278;
      }
      uVar24 = *(undefined4 *)(puVar20 + ((longlong)local_270 + -1) * 0x48 + 8);
      pfVar22 = (float *)(puVar20 + ((longlong)local_270 + -1) * 0x48);
      local_6a8 = pfVar22;
      FUN_14185c5d0(param_1,uVar24);
      plStack_6f0 = (longlong *)param_1[0x49];
      local_6f8 = param_1[0x48];
      if (plStack_6f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_6f0 + 1) = (int)plStack_6f0[1] + 1;
        UNLOCK();
      }
      FUN_14185c5d0(local_6f8,uVar24);
      SWidget::GetDesiredSize(local_6f8,local_4e8);
      piVar10 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x50);
      local_6b8 = *(longlong *)(pfVar22 + 3);
      bVar5 = false;
      bVar23 = true;
      iVar8 = *piVar10;
      fVar3 = *pfVar22;
      fVar4 = pfVar22[1];
      local_704 = 0;
      if (iVar8 - 3U < 2) {
        local_704 = 1;
      }
      else if (iVar8 == 0) {
        local_704 = 2;
      }
      else if (iVar8 == 5) {
        local_704 = 3;
      }
      if (*(char *)((longlong)param_1 + 0x29b) == '\0') {
        lVar15 = (longlong)(local_270 + -1);
        if (-1 < local_270 + -1) {
          lVar14 = lVar15 * 0x48;
          do {
            puVar20 = local_398;
            if (local_278 != (undefined1 *)0x0) {
              puVar20 = local_278;
            }
            (**(code **)(**(longlong **)(puVar20 + lVar14 + 0x38) + 0x110))
                      (*(longlong **)(puVar20 + lVar14 + 0x38),local_508);
            plVar13 = local_4f8;
            local_688[0] = local_508[0];
            if (local_508[0] != '\0') {
              local_680 = local_500;
              plStack_678 = local_4f8;
              local_670 = (undefined2)local_4f0;
              goto LAB_141957522;
            }
            if (local_4f8 != (longlong *)0x0) {
              LOCK();
              plVar16 = local_4f8 + 1;
              lVar18 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*local_4f8)(local_4f8);
                LOCK();
                piVar10 = (int *)((longlong)plVar13 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            lVar14 = lVar14 + -0x48;
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
        }
        local_688[0] = '\x01';
        local_680 = 0;
        plStack_678 = (longlong *)0x0;
        local_670 = 0x100;
LAB_141957522:
        pcVar21 = local_688;
        pfVar22 = local_6a8;
      }
      else {
        local_5e0 = *(undefined1 *)((longlong)param_1 + 0x29a);
        pcVar21 = local_5f8;
        local_5f0 = 0;
        plStack_5e8 = (longlong *)0x0;
        local_5f8[0] = '\x01';
        bVar5 = true;
        bVar23 = false;
        local_5df = 1;
      }
      FPopupMethodReply::operator=(param_1 + 0x54,pcVar21);
      plVar13 = plStack_678;
      if ((bVar23) && (plStack_678 != (longlong *)0x0)) {
        LOCK();
        plVar16 = plStack_678 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_678)(plStack_678);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar8 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_678 + 8))(plStack_678,1);
          }
        }
      }
      plVar13 = plStack_5e8;
      if ((bVar5) && (plStack_5e8 != (longlong *)0x0)) {
        LOCK();
        plVar16 = plStack_5e8 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_5e8)(plStack_5e8);
          LOCK();
          piVar10 = (int *)((longlong)plVar13 + 0xc);
          iVar8 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_5e8 + 8))(plStack_5e8,1);
          }
        }
      }
      lVar15 = local_6f8;
      plVar13 = DAT_1469f4590;
      if (*(char *)((longlong)param_1 + 0x2c1) == '\0') {
        if ((char)param_1[0x57] == '\0') {
          local_600 = (float)local_6b8 + fVar3;
          bVar23 = local_704 != 3;
          local_5fc = local_6b8._4_4_ + fVar4;
          local_608 = (float)local_6b8;
          local_604 = local_6b8._4_4_;
          uVar24 = (**(code **)(*DAT_1469f4590 + 0x38))();
          FUN_14185c5d0(lVar15,uVar24);
          SWidget::GetDesiredSize(local_6f8,&local_6b0);
          local_748 = (longlong *)CONCAT44(local_748._4_4_,(uint)bVar23);
          local_750 = &DAT_1468b5d88;
          local_758 = (longlong *)((ulonglong)local_758 & 0xffffffffffffff00);
          (**(code **)(*DAT_1469f4590 + 400))(DAT_1469f4590,&local_648,&local_608,&local_6b0);
          bVar7 = local_708;
          if (local_708 != 0) {
            FUN_1418bcfc0(DAT_1469f4590,local_700);
          }
          plVar13 = plStack_6f0;
          lVar15 = local_6f8;
          if (plStack_6f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_6f0 + 1) = (int)plStack_6f0[1] + 1;
            UNLOCK();
          }
          lVar14 = FUN_1417e8330(local_238);
          local_6d8 = lVar15;
          uStack_6d0 = plVar13;
          *(undefined4 *)(lVar14 + 0x108) = 1;
          *(undefined2 *)(lVar14 + 0x16a) = 0x101;
          *(undefined4 *)(lVar14 + 0x14c) = local_648;
          *(undefined1 *)(lVar14 + 0x149) = 0;
          *(undefined4 *)(lVar14 + 0x150) = uStack_644;
          *(undefined4 *)(lVar14 + 0x154) = local_6b0;
          *(undefined4 *)(lVar14 + 0x164) = 0x3f800000;
          *(undefined4 *)(lVar14 + 0x160) = 1;
          *(byte *)(lVar14 + 0x16d) = bVar7;
          *(undefined4 *)(lVar14 + 0x158) = uStack_6ac;
          *(uint *)(lVar14 + 0x170) = (uint)bVar7;
          plVar16 = (longlong *)(lVar14 + 0x1c0);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          if (&local_6d8 != plVar16) {
            local_6d8._0_4_ = (undefined4)lVar15;
            local_6d8._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
            uStack_6d0._0_4_ = SUB84(plVar13,0);
            uStack_6d0._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
            lVar15 = *plVar16;
            plVar19 = *(longlong **)(lVar14 + 0x1c8);
            local_3d0 = (undefined4)local_6d8;
            uStack_3cc = local_6d8._4_4_;
            uStack_3c8 = (undefined4)uStack_6d0;
            uStack_3c4 = uStack_6d0._4_4_;
            *(undefined4 *)plVar16 = (undefined4)local_6d8;
            *(undefined4 *)(lVar14 + 0x1c4) = local_6d8._4_4_;
            *(undefined4 *)(lVar14 + 0x1c8) = (undefined4)uStack_6d0;
            *(undefined4 *)(lVar14 + 0x1cc) = uStack_6d0._4_4_;
            local_6d8 = lVar15;
            uStack_6d0 = plVar19;
          }
          plVar16 = uStack_6d0;
          if (uStack_6d0 != (longlong *)0x0) {
            LOCK();
            plVar19 = uStack_6d0 + 1;
            lVar15 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*uStack_6d0)(uStack_6d0);
              LOCK();
              piVar10 = (int *)((longlong)plVar16 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*uStack_6d0 + 8))(uStack_6d0,1);
              }
            }
          }
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar13 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
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
          pcVar2 = (code *)(plVar13 + 2);
          local_438 = pcVar2;
          local_430 = plVar13;
          FUN_14044f790(&local_438,pcVar2);
          local_758 = (longlong *)0x5f0;
          SWidget::SetDebugInfo
                    (pcVar2,"SWindow",
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                     ,0x1b6);
          local_718 = lVar14 + 0xf8;
          local_730 = (undefined2 *)(lVar14 + 0xe8);
          local_720 = *(undefined1 *)(lVar14 + 0xf1);
          local_738 = (float *)(lVar14 + 200);
          local_740 = (undefined8 *)(lVar14 + 0x98);
          local_728 = *(undefined1 *)(lVar14 + 0xf0);
          local_750 = (longlong *)(lVar14 + 0x78);
          local_758 = (longlong *)(lVar14 + 0x60);
          local_748 = (longlong *)CONCAT44(local_748._4_4_,*(undefined4 *)(lVar14 + 0x90));
          SWidget::SWidgetConstruct(pcVar2,lVar14,lVar14 + 0x30,lVar14 + 0x40);
          FUN_141806bd0(pcVar2,lVar14);
          if (((char)plVar13[5] < '\0') ||
             (cVar6 = (**(code **)(*(longlong *)pcVar2 + 0x1e8))(pcVar2), cVar6 != '\0')) {
            bVar7 = 1;
          }
          else {
            bVar7 = 0;
          }
          *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
          *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar7;
          local_668 = pcVar2;
          local_660 = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            LOCK();
            plVar16 = plVar13 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_70 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar10 = (int *)((longlong)local_70 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
              }
            }
          }
          local_a0 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_b8 = 0;
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_100);
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_118 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar10 = (int *)((longlong)local_118 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_118 + 8))(local_118,1);
              }
            }
          }
          FUN_140456c70(local_238);
          pcVar2 = local_668;
          plVar16 = plStack_6f0;
          if (local_708 != 0) {
            if (plStack_6f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_6f0 + 1) = (int)plStack_6f0[1] + 1;
              UNLOCK();
            }
            *(longlong *)(local_668 + 0x448) = local_6f8;
            plVar19 = *(longlong **)(local_668 + 0x450);
            if (plStack_6f0 != plVar19) {
              if (plStack_6f0 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plStack_6f0 + 0xc) = *(int *)((longlong)plStack_6f0 + 0xc) + 1;
                UNLOCK();
                plVar19 = *(longlong **)(local_668 + 0x450);
              }
              if (plVar19 != (longlong *)0x0) {
                LOCK();
                piVar10 = (int *)((longlong)plVar19 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
              *(longlong **)(pcVar2 + 0x450) = plVar16;
            }
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar19 = plVar16 + 1;
              lVar15 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar10 = (int *)((longlong)plVar16 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
          }
          lVar15 = operator_new(0x58);
          plVar16 = plVar12;
          if (lVar15 != 0) {
            local_488 = local_6f8;
            plStack_480 = plStack_6f0;
            if (plStack_6f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_6f0 + 1) = (int)plStack_6f0[1] + 1;
              UNLOCK();
            }
            local_568 = local_668;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            local_560 = plVar13;
            plVar16 = (longlong *)
                      FMenuInWindow::FMenuInWindow
                                (lVar15,&local_568,&local_488,
                                 *(undefined1 *)((longlong)param_1 + 0x299));
          }
          plVar17 = (longlong *)operator_new(0x18);
          plVar19 = plVar12;
          if (plVar17 != (longlong *)0x0) {
            *(undefined4 *)(plVar17 + 1) = 1;
            *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
            *plVar17 = (longlong)&PTR_FUN_143f3f2e0;
            plVar17[2] = (longlong)plVar16;
            plVar19 = plVar17;
          }
          plVar17 = plVar16 + 1;
          if (plVar16 == (longlong *)0x0) {
            plVar17 = plVar12;
          }
          local_558 = plVar16;
          local_550 = plVar19;
          if (plVar17 != (longlong *)0x0) {
            if ((*plVar17 != 0) && (plVar17[1] != 0)) {
              piVar10 = (int *)(plVar17[1] + 8);
              LOCK();
              iVar8 = *piVar10;
              if (iVar8 == 0) {
                *piVar10 = 0;
                iVar8 = 0;
              }
              UNLOCK();
              if (0 < iVar8) goto LAB_1419581c7;
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            *plVar17 = (longlong)plVar16;
            plVar12 = (longlong *)plVar17[1];
            if (plVar19 != plVar12) {
              if (plVar19 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
                UNLOCK();
                plVar12 = (longlong *)plVar17[1];
              }
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                piVar10 = (int *)((longlong)plVar12 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
              plVar17[1] = (longlong)plVar19;
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar19 + 1;
              lVar15 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar10 = (int *)((longlong)plVar19 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
          }
LAB_1419581c7:
          local_638 = local_668;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          plVar12 = DAT_1469f4590;
          plStack_630 = plVar13;
          uVar11 = FUN_141845450(local_3a0,local_3f0);
          local_758 = (longlong *)CONCAT71(local_758._1_7_,1);
          FUN_14188f890(plVar12,local_478,&local_638,uVar11);
          if (local_470 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_470 + 1;
            lVar15 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_470)(local_470);
              LOCK();
              piVar10 = (int *)((longlong)local_470 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_470 + 8))(local_470,1);
              }
            }
          }
          pplVar1 = (longlong **)(param_1 + 0x46);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          local_6e8 = plVar16;
          plStack_6e0 = plVar19;
          if (&local_6e8 != pplVar1) {
            local_6e8 = *pplVar1;
            plStack_6e0 = (longlong *)param_1[0x47];
            *pplVar1 = plVar16;
            param_1[0x47] = (longlong)plVar19;
            local_3c0 = plVar16;
            plStack_3b8 = plVar19;
          }
          plVar12 = plStack_6e0;
          if (plStack_6e0 != (longlong *)0x0) {
            LOCK();
            plVar19 = plStack_6e0 + 1;
            lVar15 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plStack_6e0)(plStack_6e0);
              LOCK();
              piVar10 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_6e0 + 8))(plStack_6e0,1);
              }
            }
          }
          param_1[0x44] = param_1[0x46];
          plVar12 = (longlong *)param_1[0x47];
          plVar19 = (longlong *)param_1[0x45];
          if (plVar12 != plVar19) {
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
              UNLOCK();
              plVar19 = (longlong *)param_1[0x45];
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              piVar10 = (int *)((longlong)plVar19 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
            param_1[0x45] = (longlong)plVar12;
          }
          plStack_630 = (longlong *)((ulonglong)plStack_630 & 0xffffffff00000000);
          local_638 = FUN_14194ade0;
          local_468 = FUN_14194ade0;
          uStack_460 = (ulonglong)plStack_630;
          uVar11 = (**(code **)(*plVar16 + 0x28))(plVar16);
          FUN_14191ec90(uVar11,local_420,param_1,&local_468);
          param_1[0x42] = (longlong)local_668;
          SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
                    (param_1 + 0x43,plVar13);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_558);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_668);
        }
        else {
          plVar13 = (longlong *)FUN_141845450(local_3a0,local_458);
          param_1[0x42] = *plVar13;
          SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
                    (param_1 + 0x43,plVar13[1]);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_458);
          bVar7 = local_708;
          if (local_708 != 0) {
            FUN_1418bcfc0(DAT_1469f4590,local_700);
          }
          plVar13 = (longlong *)
                    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_448);
          lVar15 = plVar13[1];
          lVar14 = *plVar13;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          local_518 = lVar14;
          local_510 = lVar15;
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_448);
          lVar18 = operator_new(0x58);
          plVar13 = plVar12;
          if (lVar18 != 0) {
            local_548 = (longlong *)(lVar14 + 0x208);
            if (lVar14 == 0) {
              local_548 = plVar12;
            }
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            local_540 = lVar15;
            plVar13 = (longlong *)
                      FMenuInHostWidget::FMenuInHostWidget
                                (lVar18,&local_548,&local_6f8,
                                 *(undefined1 *)((longlong)param_1 + 0x299));
          }
          plVar19 = (longlong *)FUN_1404f6ae0(plVar13);
          plVar16 = plVar13 + 1;
          if (plVar13 == (longlong *)0x0) {
            plVar16 = plVar12;
          }
          local_528 = plVar13;
          local_520 = plVar19;
          if (plVar16 != (longlong *)0x0) {
            if ((*plVar16 != 0) && (plVar16[1] != 0)) {
              piVar10 = (int *)(plVar16[1] + 8);
              LOCK();
              iVar8 = *piVar10;
              if (iVar8 == 0) {
                *piVar10 = 0;
                iVar8 = 0;
              }
              UNLOCK();
              if (0 < iVar8) goto LAB_1419584f7;
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            *plVar16 = (longlong)plVar13;
            SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
                      (plVar16 + 1,plVar19);
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar19 + 1;
              lVar15 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar10 = (int *)((longlong)plVar19 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
          }
LAB_1419584f7:
          pplVar1 = (longlong **)(param_1 + 0x46);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          local_6c8 = plVar13;
          plStack_6c0 = plVar19;
          if (&local_6c8 != pplVar1) {
            local_6c8 = *pplVar1;
            plStack_6c0 = (longlong *)param_1[0x47];
            *pplVar1 = plVar13;
            param_1[0x47] = (longlong)plVar19;
            local_3b0 = plVar13;
            plStack_3a8 = plVar19;
          }
          plVar12 = plStack_6c0;
          if (plStack_6c0 != (longlong *)0x0) {
            LOCK();
            plVar16 = plStack_6c0 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plStack_6c0)(plStack_6c0);
              LOCK();
              piVar10 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_6c0 + 8))(plStack_6c0,1);
              }
            }
          }
          param_1[0x44] = (longlong)*pplVar1;
          SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
                    (param_1 + 0x45,param_1[0x47]);
          TSlotBase<FSimpleSlot>::operator[](*(longlong *)(param_1[0x5d] + 8) + 0x10,&local_6f8);
          if (bVar7 != 0) {
            local_538 = local_6f8;
            plStack_530 = plStack_6f0;
            if (plStack_6f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_6f0 + 1) = (int)plStack_6f0[1] + 1;
              UNLOCK();
            }
            FUN_1418c3710(DAT_1469f4590,local_700,&local_538,2);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_538);
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
            UNLOCK();
          }
          iVar8 = DAT_1469f4790;
          lVar15 = (longlong)DAT_1469f4790;
          DAT_1469f4790 = DAT_1469f4790 + 1;
          if (DAT_1469f4794 < DAT_1469f4790) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1469f4788,iVar8);
          }
          puVar9 = (undefined8 *)(lVar15 * 0x10 + DAT_1469f4788);
          *puVar9 = plVar13;
          puVar9[1] = plVar19;
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_528);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_518);
        }
      }
      else {
        if ((char)param_1[0x57] == '\0') {
          local_6fc[0] = 0x100;
          uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_4e0);
          local_728 = *(undefined1 *)((longlong)param_1 + 0x299);
          local_730 = local_6fc;
          local_740 = (undefined8 *)CONCAT71(local_740._1_7_,local_708);
          local_748 = (longlong *)&local_704;
          local_750 = &local_6b8;
          local_758 = &local_6f8;
          local_738 = pfVar22;
          FUN_1418b8580(plVar13,&local_628,uVar11,local_3a0);
          if (local_4d8 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_4d8 + 1;
            lVar15 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_4d8)(local_4d8);
              LOCK();
              piVar10 = (int *)((longlong)local_4d8 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_4d8 + 8))(local_4d8,1);
              }
            }
          }
          plVar13 = local_620;
          param_1[0x44] = (longlong)local_628;
          plVar12 = (longlong *)param_1[0x45];
          if (local_620 != plVar12) {
            if (local_620 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_620 + 0xc) = *(int *)((longlong)local_620 + 0xc) + 1;
              UNLOCK();
              plVar12 = (longlong *)param_1[0x45];
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              piVar10 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
            param_1[0x45] = (longlong)plVar13;
          }
          local_6a8 = (float *)FUN_14194ade0;
          uStack_6a0 = 0;
          lStack_4c0 = (ulonglong)uStack_69c << 0x20;
          local_4c8 = FUN_14194ade0;
          uVar11 = (**(code **)(*local_628 + 0x28))();
          FUN_14191ec90(uVar11,local_418,param_1,&local_4c8);
          plVar12 = (longlong *)(**(code **)(*local_628 + 0x18))(local_628,local_4b8);
          param_1[0x42] = *plVar12;
          plVar12 = (longlong *)plVar12[1];
          plVar13 = (longlong *)param_1[0x43];
          if (plVar12 != plVar13) {
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
              UNLOCK();
              plVar13 = (longlong *)param_1[0x43];
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
            param_1[0x43] = (longlong)plVar12;
          }
          plVar12 = local_620;
          if (local_4b0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_4b0 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_4b0)(local_4b0);
              LOCK();
              piVar10 = (int *)((longlong)local_4b0 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              plVar12 = local_620;
              if (iVar8 == 1) {
                (**(code **)(*local_4b0 + 8))(local_4b0,1);
                plVar12 = local_620;
              }
            }
          }
        }
        else {
          plVar12 = (longlong *)FUN_141845450(local_3a0,local_4a8);
          param_1[0x42] = *plVar12;
          plVar12 = (longlong *)plVar12[1];
          plVar13 = (longlong *)param_1[0x43];
          if (plVar12 != plVar13) {
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
              UNLOCK();
              plVar13 = (longlong *)param_1[0x43];
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
            param_1[0x43] = (longlong)plVar12;
          }
          if (local_4a0 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_4a0 + 1;
            lVar15 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_4a0)(local_4a0);
              LOCK();
              piVar10 = (int *)((longlong)local_4a0 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_4a0 + 8))(local_4a0,1);
              }
            }
          }
          bVar7 = local_708;
          if (local_708 != 0) {
            FUN_1418bcfc0(DAT_1469f4590,local_700);
          }
          plVar13 = (longlong *)
                    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_498);
          plVar12 = (longlong *)plVar13[1];
          lVar15 = *plVar13;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          if (local_490 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_490 + 1;
            lVar14 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_490)(local_490);
              LOCK();
              piVar10 = (int *)((longlong)local_490 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_490 + 8))(local_490,1);
              }
            }
          }
          if (lVar15 == 0) {
            local_618 = 0;
          }
          else {
            local_618 = lVar15 + 0x208;
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_730 = (undefined2 *)
                      CONCAT71(local_730._1_7_,*(undefined1 *)((longlong)param_1 + 0x299));
          local_738 = (float *)CONCAT71(local_738._1_7_,*(undefined1 *)((longlong)param_1 + 0x2b9));
          local_740 = (undefined8 *)&local_704;
          local_750 = &local_6f8;
          local_758 = &local_618;
          local_748 = param_1 + 0x4a;
          local_610 = plVar12;
          local_5d8 = lVar15;
          local_5d0 = plVar12;
          FUN_1418b7f10(DAT_1469f4590,&local_5c8,&local_5d8,local_3a0);
          plVar13 = local_5d0;
          if (local_5d0 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_5d0 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_5d0)(local_5d0);
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = local_610;
          if (local_610 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_610 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_610)(local_610);
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar16 = local_5c0;
          param_1[0x44] = local_5c8;
          plVar13 = (longlong *)param_1[0x45];
          if (local_5c0 != plVar13) {
            if (local_5c0 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_5c0 + 0xc) = *(int *)((longlong)local_5c0 + 0xc) + 1;
              UNLOCK();
              plVar13 = (longlong *)param_1[0x45];
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
            param_1[0x45] = (longlong)plVar16;
          }
          plVar13 = (longlong *)param_1[0x4b];
          local_588 = param_1[0x4a];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_580 = plVar13;
          TSlotBase<FSimpleSlot>::operator[](*(longlong *)(param_1[0x5d] + 8) + 0x10,&local_588);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar13 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar10 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          if (bVar7 != 0) {
            local_578 = local_6f8;
            plStack_570 = plStack_6f0;
            if (plStack_6f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_6f0 + 1) = (int)plStack_6f0[1] + 1;
              UNLOCK();
            }
            FUN_1418c3710(DAT_1469f4590,local_700,&local_578,2);
            plVar13 = plStack_570;
            if (plStack_570 != (longlong *)0x0) {
              LOCK();
              plVar16 = plStack_570 + 1;
              lVar15 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plStack_570)(plStack_570);
                LOCK();
                piVar10 = (int *)((longlong)plVar13 + 0xc);
                iVar8 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
          }
          if (local_5c0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_5c0 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_5c0)(local_5c0);
              LOCK();
              piVar10 = (int *)((longlong)local_5c0 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_5c0 + 8))(local_5c0,1);
              }
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar12 + 1;
          lVar15 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar10 = (int *)((longlong)plVar12 + 0xc);
            iVar8 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_6f8);
    }
    FUN_140458830(local_3a0);
    goto LAB_141958800;
  }
  if ((param_1[0x44] == 0) || (param_1[0x45] == 0)) {
LAB_14195870f:
    if (param_1 + 0x42 != local_3e0) {
      param_1[0x42] = 0;
      plVar12 = (longlong *)param_1[0x43];
      param_1[0x43] = 0;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar10 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    local_650 = (longlong *)0x0;
    if (param_1 + 0x46 != &local_658) {
      param_1[0x46] = 0;
      local_658 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x47,&local_650);
      plVar12 = local_650;
      if (local_650 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_650 + 1;
        lVar15 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_650)(local_650);
          LOCK();
          piVar10 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_650 + 8))(local_650,1);
          }
        }
      }
    }
    local_5b8[0] = 0;
    local_5a0 = 0x100;
    local_5b0 = 0;
    uStack_5a8 = 0;
    FPopupMethodReply::operator=(param_1 + 0x54,local_5b8);
    FKey::~FKey(local_5b8);
  }
  else {
    piVar10 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar8 = *piVar10;
    if (iVar8 == 0) {
      *piVar10 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_14195870f;
    local_690 = param_1[0x45];
    local_698 = (longlong *)0x0;
    if (local_690 != 0) {
      LOCK();
      iVar8 = *(int *)(local_690 + 8);
      bVar23 = iVar8 == 0;
      if (bVar23) {
        *(int *)(local_690 + 8) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar23) {
        LOCK();
        bVar23 = iVar8 == *(int *)(local_690 + 8);
        if (bVar23) {
          *(int *)(local_690 + 8) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar23) {
          if (local_690 != 0) {
            local_698 = (longlong *)param_1[0x44];
          }
          goto LAB_1419586f8;
        }
        LOCK();
        iVar8 = *(int *)(local_690 + 8);
        bVar23 = iVar8 == 0;
        if (bVar23) {
          *(int *)(local_690 + 8) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
      local_690 = 0;
    }
LAB_1419586f8:
    (**(code **)(*local_698 + 0x38))(local_698);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_698);
  }
  TSlotBase<FSimpleSlot>::operator[](*(longlong *)(param_1[0x5d] + 8) + 0x10,&DAT_1469eb218);
LAB_141958800:
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 141958840 SetIsPassword body=35 status=ok
// SIG undefined SetIsPassword(void)

void FSlateTextLayout::SetIsPassword(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x338) = *param_2;
  *(undefined1 *)(param_1 + 0x339) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 8);
  return;
}



// FUNCTION 141958870 FUN_141958870 body=98 status=ok
// SIG undefined FUN_141958870(void)

void FUN_141958870(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x308) = *param_2;
  *(undefined1 *)(param_1 + 0x309) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x310,param_2 + 8);
  FPlainTextLayoutMarshaller::SetIsPassword(*(undefined8 *)(param_1 + 0x210),param_1 + 0x308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419588e0 FUN_1419588e0 body=159 status=ok
// SIG undefined FUN_1419588e0(void)

void FUN_1419588e0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 8);
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar3 + 0x308) = uVar1;
  *(undefined1 *)(lVar3 + 0x309) = uVar2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x310,&local_20);
  FPlainTextLayoutMarshaller::SetIsPassword(*(undefined8 *)(lVar3 + 0x210),lVar3 + 0x308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 141958980 FUN_141958980 body=57 status=ok
// SIG undefined FUN_141958980(void)

void FUN_141958980(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x2f0) = *param_2;
  *(undefined1 *)(param_1 + 0x2f1) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2f8,param_2 + 8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419589c0 FUN_1419589c0 body=130 status=ok
// SIG undefined FUN_1419589c0(void)

void FUN_1419589c0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 8);
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar3 + 0x2f0) = uVar1;
  *(undefined1 *)(lVar3 + 0x2f1) = uVar2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x2f8,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 141958a50 FUN_141958a50 body=12 status=ok
// SIG undefined FUN_141958a50(void)

void FUN_141958a50(longlong param_1)

{
  SMultiLineEditableText::SetClearTextSelectionOnFocusLoss(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141958a60 FUN_141958a60 body=269 status=ok
// SIG undefined FUN_141958a60(void)

void FUN_141958a60(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(byte *)(param_1 + 0x2f0) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    plVar3 = (longlong *)0x0;
    *(byte *)(param_1 + 0x2f0) = param_2;
    if (lVar1 != 0) {
      param_2 = param_2 ^ 1;
      local_20 = 0;
      local_18 = 0;
      bVar4 = param_2;
      if ((((*(int *)(lVar1 + 0xa8) != 0) && (*(longlong **)(lVar1 + 0xa0) != (longlong *)0x0)) &&
          (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xa0) + 0x18))(), cVar2 != '\0')) ||
         ((*(char *)(lVar1 + 0x99) != '\x01' || (*(byte *)(lVar1 + 0x98) != param_2)))) {
        *(byte *)(lVar1 + 0x98) = param_2;
        *(undefined1 *)(lVar1 + 0x99) = 1;
        TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0xa0,&local_20,param_3,param_4,bVar4);
        FUN_1418475e0(lVar1,5);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    }
    if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x3b8) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x3b0);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3);
    }
  }
  return;
}



// FUNCTION 141958b70 SetJustification body=22 status=ok
// SIG undefined SetJustification(void)

void FTextLayout::SetJustification(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xa8) != param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(int *)(param_1 + 0xa8) = param_2;
  }
  return;
}



// FUNCTION 141958b90 FUN_141958b90 body=12 status=ok
// SIG undefined FUN_141958b90(void)

void FUN_141958b90(longlong param_1)

{
  FUN_1419a2f70(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 141958ba0 FUN_141958ba0 body=19 status=ok
// SIG undefined FUN_141958ba0(void)

void FUN_141958ba0(longlong param_1)

{
  FUN_1419a2f70(*(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x220));
  return;
}



// FUNCTION 141958bc0 FUN_141958bc0 body=12 status=ok
// SIG undefined FUN_141958bc0(void)

void FUN_141958bc0(longlong param_1)

{
  FUN_1419bc520(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141958bd0 FUN_141958bd0 body=11 status=ok
// SIG undefined FUN_141958bd0(void)

void FUN_141958bd0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 1000) = *param_2;
  *(undefined8 *)(param_1 + 0x3f0) = uVar1;
  return;
}



// FUNCTION 141958be0 FUN_141958be0 body=301 status=ok
// SIG undefined FUN_141958be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141958be0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uStack_40 = (longlong *)param_2[1];
  puVar3 = (undefined8 *)(param_1 + 0xd0);
  local_48 = *param_2;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar3) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar6 = *puVar3;
    plVar5 = *(longlong **)(param_1 + 0xd8);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0xd4) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_40._4_4_;
    local_48 = uVar6;
    uStack_40 = plVar5;
  }
  plVar5 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
  lVar7 = *(longlong *)(param_1 + 0x18);
  lVar8 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x70) {
    *(byte *)(lVar7 + 0x68) = *(byte *)(lVar7 + 0x68) | 1;
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return;
}



// FUNCTION 141958d10 SetLineHeightPercentage body=25 status=ok
// SIG undefined SetLineHeightPercentage(void)

void FTextLayout::SetLineHeightPercentage(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0xac)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(float *)(param_1 + 0xac) = param_2;
  }
  return;
}



// FUNCTION 141958d30 FUN_141958d30 body=12 status=ok
// SIG undefined FUN_141958d30(void)

void FUN_141958d30(longlong param_1)

{
  FUN_1419bc680(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141958d40 FUN_141958d40 body=290 status=ok
// SIG undefined FUN_141958d40(void)

void FUN_141958d40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  iVar7 = 0;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18);
      if (*(int *)(lVar4 + 0x60 + lVar11) != 0) {
        iVar8 = *(int *)(lVar4 + 0x60 + lVar11);
        lVar4 = lVar4 + lVar11;
        if (iVar8 != 0) {
          plVar9 = (longlong *)(*(longlong *)(lVar4 + 0x58) + 0x18);
          do {
            plVar5 = (longlong *)*plVar9;
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
            plVar9 = plVar9 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        *(undefined4 *)(lVar4 + 0x60) = 0;
        if (*(int *)(lVar4 + 100) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(lVar4 + 0x58,0);
        }
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x70;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  if (0 < (int)param_2[1]) {
    do {
      FUN_141927440(param_1,(longlong)iVar7 * 0x20 + *param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141958e80 SetSelectAllTextWhenFocused body=35 status=ok
// SIG undefined SetSelectAllTextWhenFocused(void)

void SMultiLineEditableText::SetSelectAllTextWhenFocused(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x228) = *param_2;
  *(undefined1 *)(param_1 + 0x229) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x230,param_2 + 8);
  return;
}



// FUNCTION 141958eb0 SetMargin body=73 status=ok
// SIG undefined SetMargin(void)

void FTextLayout::SetMargin(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((*param_2 != *(float *)(param_1 + 0x98)) || (param_2[2] != *(float *)(param_1 + 0xa0))) ||
      (param_2[1] != *(float *)(param_1 + 0x9c))) || (param_2[3] != *(float *)(param_1 + 0xa4))) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
  }
  return;
}



// FUNCTION 141958f00 SetMargin body=58 status=ok
// SIG undefined SetMargin(void)

void SInputKeySelector::SetMargin(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x330) = *param_2;
  *(undefined4 *)(param_1 + 0x334) = uVar1;
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  *(undefined4 *)(param_1 + 0x33c) = uVar3;
  *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x348,param_2 + 6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 6);
  return;
}



// FUNCTION 141958f40 FUN_141958f40 body=12 status=ok
// SIG undefined FUN_141958f40(void)

void FUN_141958f40(longlong param_1)

{
  FUN_1419bc740(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 141958f50 FUN_141958f50 body=1010 status=ok
// SIG undefined FUN_141958f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141958f50(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_418 [32];
  longlong local_3f8;
  longlong local_3f0;
  undefined4 local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c0;
  longlong local_3b8;
  longlong *local_3a8;
  longlong *plStack_3a0;
  longlong *local_398;
  longlong *local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  longlong local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348;
  undefined8 local_340;
  undefined4 local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_318;
  longlong *plStack_310;
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  local_368 = *param_2;
  uVar8 = *(undefined4 *)(param_1 + 0x330);
  uVar9 = *(undefined4 *)(param_1 + 0x334);
  uVar10 = *(undefined4 *)(param_1 + 0x338);
  uVar11 = *(undefined4 *)(param_1 + 0x33c);
  uVar5 = *(undefined8 *)(param_1 + 0x328);
  local_360 = param_2[1];
  local_348 = 1;
  local_340 = 0;
  local_338 = 0;
  local_380 = 1;
  local_378 = 0;
  local_370 = 0;
  if (local_360 != 0) {
    LOCK();
    *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
    UNLOCK();
  }
  local_388 = uVar5;
  local_358 = uVar8;
  uStack_354 = uVar9;
  uStack_350 = uVar10;
  uStack_34c = uVar11;
  lVar14 = FUN_141886d30(local_308);
  *(undefined8 *)(lVar14 + 0x188) = uVar5;
  *(undefined1 *)(lVar14 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x198,&local_378);
  *(undefined1 *)(lVar14 + 0x130) = 1;
  *(undefined4 *)(lVar14 + 0x120) = uVar8;
  *(undefined4 *)(lVar14 + 0x124) = uVar9;
  *(undefined4 *)(lVar14 + 0x128) = uVar10;
  *(undefined4 *)(lVar14 + 300) = uVar11;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x138,&local_340);
  plVar15 = (longlong *)operator_new(0x398);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_144d61068;
    if (plVar15 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar6 = plVar15 + 2;
  local_330 = plVar6;
  local_328 = plVar15;
  FUN_14044f790(&local_330,plVar6);
  local_3f8 = 0x388;
  SWidget::SetDebugInfo
            (plVar6,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x89);
  lVar14 = FUN_14188d200(lVar14,&local_368);
  local_3e8 = *(undefined4 *)(lVar14 + 0x90);
  local_3b8 = lVar14 + 0xf8;
  local_3d0 = lVar14 + 0xe8;
  local_3c0 = *(undefined1 *)(lVar14 + 0xf1);
  local_3d8 = lVar14 + 200;
  local_3e0 = lVar14 + 0x98;
  local_3c8 = *(undefined1 *)(lVar14 + 0xf0);
  local_3f0 = lVar14 + 0x78;
  local_3f8 = lVar14 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar14,lVar14 + 0x30,lVar14 + 0x40);
  FUN_141971ea0(plVar6,lVar14);
  if (((char)plVar15[5] < '\0') || (cVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar12 != '\0')
     ) {
    bVar13 = 1;
  }
  else {
    bVar13 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar13;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  pplVar2 = (longlong **)(param_1 + 0x240);
  local_398 = plVar6;
  local_390 = plVar15;
  if (pplVar2 != &local_398) {
    *pplVar2 = plVar6;
    local_398 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x248,&local_390);
  }
  plVar6 = *(longlong **)(param_1 + 0x248);
  pplVar3 = (longlong **)(param_1 + 0x250);
  plVar7 = *pplVar2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_3a8 = plVar7;
  plStack_3a0 = plVar6;
  if (&local_3a8 != pplVar3) {
    local_3a8 = *pplVar3;
    plStack_3a0 = *(longlong **)(param_1 + 600);
    *pplVar3 = plVar7;
    *(longlong **)(param_1 + 600) = plVar6;
    local_318 = plVar7;
    plStack_310 = plVar6;
  }
  plVar6 = plStack_3a0;
  if (plStack_3a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_3a0 + 1;
    lVar14 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_3a0)(plStack_3a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_3a0 + 8))(plStack_3a0,1);
      }
    }
  }
  plVar6 = local_390;
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_390 + 1;
    lVar14 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar15 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar6 = plVar15 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  FUN_14188af70(local_308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_378);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_340);
  plVar15 = (longlong *)param_2[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar15 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return;
}



// FUNCTION 141959350 SetMenuContent body=376 status=ok
// SIG undefined SetMenuContent(void)

void SMenuAnchor::SetMenuContent(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x240) != &local_28) {
    *(undefined8 *)(param_1 + 0x240) = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x248,&local_20);
  }
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
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x250) != &local_18) {
    *(undefined8 *)(param_1 + 0x250) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 600,&local_10);
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



// FUNCTION 1419594d0 FUN_1419594d0 body=41 status=ok
// SIG undefined FUN_1419594d0(void)

void FUN_1419594d0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined4 *)(lVar1 + 0x3f0) = *param_2;
  *(undefined1 *)(lVar1 + 0x3f4) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x3f8,param_2 + 2);
  return;
}



// FUNCTION 141959500 SetAvoidanceGroupMask body=7 status=ok
// SIG undefined SetAvoidanceGroupMask(void)

void UCharacterMovementComponent::SetAvoidanceGroupMask(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x278) = param_2;
  return;
}



// FUNCTION 141959510 SetNumPieces body=11 status=ok
// SIG undefined SetNumPieces(void)

void SThrobber::SetNumPieces(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a0) = param_2;
  FUN_141936150();
  return;
}



// FUNCTION 141959520 FUN_141959520 body=34 status=ok
// SIG undefined FUN_141959520(void)

void FUN_141959520(longlong param_1,undefined8 param_2)

{
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 141959550 FUN_141959550 body=7 status=ok
// SIG undefined FUN_141959550(void)

void FUN_141959550(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x240) = param_2;
  return;
}



// FUNCTION 141959560 FUN_141959560 body=181 status=ok
// SIG undefined FUN_141959560(void)

void FUN_141959560(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x400) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x408);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x408);
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
    *(longlong **)(param_1 + 0x408) = plVar3;
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



// FUNCTION 141959620 FUN_141959620 body=13 status=ok
// SIG undefined FUN_141959620(void)

void FUN_141959620(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x27c) = param_2;
  FUN_141936e70();
  return;
}



// FUNCTION 141959630 FUN_141959630 body=7 status=ok
// SIG undefined FUN_141959630(void)

void FUN_141959630(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x482) = param_2;
  return;
}



// FUNCTION 141959640 SetRVOAvoidanceWeight body=9 status=ok
// SIG undefined SetRVOAvoidanceWeight(void)

void UCharacterMovementComponent::SetRVOAvoidanceWeight(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x280) = param_2;
  return;
}



// FUNCTION 141959650 FUN_141959650 body=42 status=ok
// SIG undefined FUN_141959650(void)

void FUN_141959650(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar1 + 0x350) = *param_2;
  *(undefined1 *)(lVar1 + 0x351) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x358,param_2 + 8);
  return;
}



// FUNCTION 141959680 FUN_141959680 body=290 status=ok
// SIG undefined FUN_141959680(void)

void FUN_141959680(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  iVar7 = 0;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18);
      if (*(int *)(lVar4 + 0x50 + lVar11) != 0) {
        iVar8 = *(int *)(lVar4 + 0x50 + lVar11);
        lVar4 = lVar4 + lVar11;
        if (iVar8 != 0) {
          plVar9 = (longlong *)(*(longlong *)(lVar4 + 0x48) + 0x18);
          do {
            plVar5 = (longlong *)*plVar9;
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
            plVar9 = plVar9 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        *(undefined4 *)(lVar4 + 0x50) = 0;
        if (*(int *)(lVar4 + 0x54) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(lVar4 + 0x48,0);
        }
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x70;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  if (0 < (int)param_2[1]) {
    do {
      FUN_141927b20(param_1,(longlong)iVar7 * 0x20 + *param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1419597b0 SetScale body=105 status=ok
// SIG undefined SetScale(void)

void FTextLayout::SetScale(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = _isnan((double)param_2);
  if (iVar1 != 0) {
    param_2 = 0.0;
  }
  if (param_2 != *(float *)(param_1 + 0x8c)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(float *)(param_1 + 0x8c) = param_2;
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x70) {
      *(byte *)(lVar2 + 0x68) = *(byte *)(lVar2 + 0x68) | 5;
    }
  }
  return;
}



// FUNCTION 141959820 FUN_141959820 body=42 status=ok
// SIG undefined FUN_141959820(void)

void FUN_141959820(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar1 + 0x380) = *param_2;
  *(undefined1 *)(lVar1 + 0x381) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x388,param_2 + 8);
  return;
}



// FUNCTION 141959850 FUN_141959850 body=42 status=ok
// SIG undefined FUN_141959850(void)

void FUN_141959850(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar1 + 0x338) = *param_2;
  *(undefined1 *)(lVar1 + 0x339) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x340,param_2 + 8);
  return;
}



// FUNCTION 141959880 FUN_141959880 body=740 status=ok
// SIG undefined FUN_141959880(void)

void FUN_141959880(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  
  lVar14 = 0;
  plVar2 = (longlong *)(param_1 + 0x2f8);
  local_res8[0] = 0;
  if ((*(int *)(param_1 + 0x328) == 0) || (*(longlong **)(param_1 + 800) == (longlong *)0x0)) {
LAB_1419598c9:
    cVar9 = '\0';
  }
  else {
    cVar9 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))();
    if (cVar9 == '\0') goto LAB_1419598c9;
    cVar9 = '\x01';
  }
  if (((int)param_2[6] == 0) || ((longlong *)param_2[5] == (longlong *)0x0)) {
LAB_1419598e9:
    cVar10 = '\0';
  }
  else {
    cVar10 = (**(code **)(*(longlong *)param_2[5] + 0x18))();
    if (cVar10 == '\0') goto LAB_1419598e9;
    cVar10 = '\x01';
  }
  if (cVar9 == cVar10) {
    if (cVar9 == '\0') {
      if ((*(char *)(param_1 + 0x318) == (char)param_2[4]) && (*plVar2 == *param_2)) {
        uVar4 = *(uint *)(param_1 + 0x310);
        uVar5 = *(uint *)(param_2 + 3);
        if ((((uVar4 ^ uVar5) & 1) == 0) &&
           ((((uVar4 ^ uVar5) & 2) == 0 && (((uVar4 ^ uVar5) & 4) == 0)))) {
          bVar16 = ((uVar4 ^ uVar5) & 8) == 0;
          goto LAB_14195997c;
        }
      }
    }
    else {
      lVar15 = lVar14;
      if (((int)param_2[6] != 0) && (plVar11 = (longlong *)param_2[5], plVar11 != (longlong *)0x0))
      {
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_res8);
        lVar15 = *plVar11;
      }
      if ((*(int *)(param_1 + 0x328) != 0) &&
         (plVar11 = *(longlong **)(param_1 + 800), plVar11 != (longlong *)0x0)) {
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_res10);
        lVar14 = *plVar11;
      }
      bVar16 = lVar14 == lVar15;
LAB_14195997c:
      if (bVar16) goto LAB_141959b10;
    }
  }
  TAttribute<FInputChord>::operator=(plVar2,param_2);
  plVar11 = DAT_1469eae38;
  uVar8 = DAT_1469eae30;
  uVar7 = DAT_1469eae28;
  if (*(char *)(param_1 + 0x318) == '\0') {
    if (DAT_1469eae38 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
      UNLOCK();
    }
    local_48 = uVar7;
    local_40 = uVar8;
    local_38 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_30 = local_30 & 0xfffffff0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
    puVar13 = &local_48;
    bVar6 = false;
    bVar16 = true;
  }
  else {
    puVar12 = (undefined8 *)FUN_14193e740(plVar2);
    local_68 = *puVar12;
    local_60 = puVar12[1];
    local_58 = (longlong *)puVar12[2];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    bVar16 = false;
    local_50 = local_50 ^ (local_50 ^ *(uint *)(puVar12 + 3)) & 1;
    local_50 = (local_50 ^ *(uint *)(puVar12 + 3)) & 2 ^ local_50;
    local_50 = (local_50 ^ *(uint *)(puVar12 + 3)) & 4 ^ local_50;
    puVar13 = &local_68;
    local_50 = (local_50 ^ *(uint *)(puVar12 + 3)) & 8 ^ local_50;
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x3a0,puVar13);
  plVar2 = local_38;
  if (bVar16) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_38 + 1;
      lVar14 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_38)(local_38);
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
  }
  plVar2 = local_58;
  if ((bVar6) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_58 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_58)(local_58);
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
LAB_141959b10:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 5);
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  return;
}



// FUNCTION 141959b70 FUN_141959b70 body=258 status=ok
// SIG undefined FUN_141959b70(void)

void FUN_141959b70(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 local_18;
  longlong local_10;
  
  TSet<TSharedPtr<SWidget,0>,DefaultKeyFuncs<TSharedPtr<SWidget,0>,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0x548,0);
  if ((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x3c8) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar6 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar6;
    }
  }
  if (*(int *)(param_1 + 0x3b8) != 0) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x18))(param_1 + 0x420,&local_18,1,param_3 != 3);
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))(param_1 + 0x420,param_3);
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 141959c80 FUN_141959c80 body=261 status=ok
// SIG undefined FUN_141959c80(void)

void FUN_141959c80(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *(undefined1 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_30 = *(undefined8 *)(param_2 + 6);
  local_28 = *(longlong **)(param_2 + 8);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_20 = 1;
  local_18 = 0;
  local_10 = 0;
  FUN_140692440(param_1 + 0x248,&local_48);
  *(undefined1 *)(param_1 + 0x270) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x278,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 141959d90 FUN_141959d90 body=261 status=ok
// SIG undefined FUN_141959d90(void)

void FUN_141959d90(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *(undefined1 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_30 = *(undefined8 *)(param_2 + 6);
  local_28 = *(longlong **)(param_2 + 8);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_20 = 1;
  local_18 = 0;
  local_10 = 0;
  FUN_140692440(param_1 + 0x288,&local_48);
  *(undefined1 *)(param_1 + 0x2b0) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2b8,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 141959ea0 SetStepSize body=34 status=ok
// SIG undefined SetStepSize(void)

void SSlider::SetStepSize(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2e0) = *param_2;
  *(undefined1 *)(param_1 + 0x2e4) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e8,param_2 + 2);
  return;
}



// FUNCTION 141959ed0 FUN_141959ed0 body=153 status=ok
// SIG undefined FUN_141959ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141959ed0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [280];
  undefined8 local_1d0;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  *(longlong *)(param_1 + 0x2f0) = param_2;
  if (param_2 == 0) {
    FUN_1418cdb90(local_2e8);
    *(undefined8 *)(param_1 + 0x2f0) = local_1d0;
    FUN_1418d1af0(local_2e8);
  }
  puVar1 = (undefined8 *)
           UConversationPlayer::GetBaseCameraProperties(*(undefined8 *)(param_1 + 0x488));
  local_2f8 = *puVar1;
  local_2f0 = puVar1[1];
  if (local_2f0 != 0) {
    LOCK();
    *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
    UNLOCK();
  }
  FUN_141928cb0(param_1,&local_2f8);
  return;
}



// FUNCTION 141959f70 FUN_141959f70 body=162 status=ok
// SIG undefined FUN_141959f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141959f70(longlong param_1,longlong param_2)

{
  undefined1 auStack_4d8 [32];
  undefined1 local_4b8 [264];
  undefined8 local_3b0;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  *(longlong *)(param_1 + 0x388) = param_2;
  if (param_2 == 0) {
    FUN_1418ce820(local_4b8);
    *(undefined8 *)(param_1 + 0x388) = local_3b0;
    FUN_1418d2030(local_4b8);
    param_2 = *(longlong *)(param_1 + 0x388);
  }
  *(longlong *)(param_1 + 0x520) = param_2 + 8;
  *(longlong *)(param_1 + 0x528) = param_2 + 0x90;
  *(longlong *)(param_1 + 0x530) = param_2 + 0x118;
  *(longlong *)(param_1 + 0x538) = param_2 + 0x1a0;
  return;
}



// FUNCTION 14195a020 FUN_14195a020 body=244 status=ok
// SIG undefined FUN_14195a020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14195a020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_638 [32];
  undefined1 local_618 [264];
  undefined8 local_510;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_638;
  if (param_2 == 0) {
    FUN_1419219a0(local_618);
    *(undefined8 *)(param_1 + 0x5c0) = local_510;
    FUN_1419245b0(local_618);
  }
  else {
    *(longlong *)(param_1 + 0x5c0) = param_2;
  }
  if ((*(char *)(param_1 + 0x560) == '\0') && (*(longlong *)(param_1 + 0x568) != 0)) {
    FUN_1419a4290(*(longlong *)(param_1 + 0x568),*(longlong *)(param_1 + 0x5c0) + 800);
  }
  if ((*(char *)(param_1 + 0x588) == '\0') && (*(longlong *)(param_1 + 0x590) != 0)) {
    FUN_1419a4290(*(longlong *)(param_1 + 0x590),*(longlong *)(param_1 + 0x5c0) + 800);
  }
  lVar1 = *(longlong *)(param_1 + 0x5c0);
  *(longlong *)(param_1 + 0x5c8) = lVar1 + 8;
  *(longlong *)(param_1 + 0x5d0) = lVar1 + 0x90;
  *(longlong *)(param_1 + 0x5d8) = lVar1 + 0x118;
  *(longlong *)(param_1 + 0x5e0) = lVar1 + 0x1a0;
  return;
}



// FUNCTION 14195a120 FUN_14195a120 body=104 status=ok
// SIG undefined FUN_14195a120(void)

void FUN_14195a120(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x398) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x3a0);
  if (plVar3 != plVar4) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x3a0);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(longlong **)(param_1 + 0x3a0) = plVar3;
  }
  return;
}



// FUNCTION 14195a190 FUN_14195a190 body=12 status=ok
// SIG undefined FUN_14195a190(void)

void FUN_14195a190(longlong param_1)

{
  FUN_1419a43a0(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 14195a1a0 FUN_14195a1a0 body=19 status=ok
// SIG undefined FUN_14195a1a0(void)

void FUN_14195a1a0(longlong param_1)

{
  FUN_1419a43a0(*(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x220));
  return;
}



// FUNCTION 14195a1c0 FUN_14195a1c0 body=12 status=ok
// SIG undefined FUN_14195a1c0(void)

void FUN_14195a1c0(longlong param_1)

{
  FUN_1419bcc10(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 14195a1d0 SetTextBlockVisibility body=54 status=ok
// SIG undefined SetTextBlockVisibility(void)

void SInputKeySelector::SetTextBlockVisibility(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    local_28 = *param_2;
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    SLeafWidget::SetVisibility(*(longlong *)(param_1 + 0x3d0),&local_28);
  }
  return;
}



// FUNCTION 14195a210 SetTextFlowDirection body=62 status=ok
// SIG undefined SetTextFlowDirection(void)

void FTextLayout::SetTextFlowDirection(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x8a) != param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(char *)(param_1 + 0x8a) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
      *(byte *)(lVar1 + 0x68) = *(byte *)(lVar1 + 0x68) | 7;
    }
  }
  return;
}



// FUNCTION 14195a250 FUN_14195a250 body=12 status=ok
// SIG undefined FUN_14195a250(void)

void FUN_14195a250(longlong param_1)

{
  FSlateEditableTextLayout::SetTextFlowDirection(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 14195a260 FUN_14195a260 body=19 status=ok
// SIG undefined FUN_14195a260(void)

void FUN_14195a260(longlong param_1)

{
  FSlateEditableTextLayout::SetTextFlowDirection
            (*(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x220));
  return;
}



// FUNCTION 14195a280 FUN_14195a280 body=12 status=ok
// SIG undefined FUN_14195a280(void)

void FUN_14195a280(longlong param_1)

{
  FUN_1419bce90(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 14195a2c0 SetTextShapingMethod body=62 status=ok
// SIG undefined SetTextShapingMethod(void)

void FTextLayout::SetTextShapingMethod(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x89) != param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(char *)(param_1 + 0x89) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
      *(byte *)(lVar1 + 0x68) = *(byte *)(lVar1 + 0x68) | 7;
    }
  }
  return;
}



// FUNCTION 14195a300 FUN_14195a300 body=12 status=ok
// SIG undefined FUN_14195a300(void)

void FUN_14195a300(longlong param_1)

{
  FSlateEditableTextLayout::SetTextShapingMethod(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 14195a310 FUN_14195a310 body=19 status=ok
// SIG undefined FUN_14195a310(void)

void FUN_14195a310(longlong param_1)

{
  FSlateEditableTextLayout::SetTextShapingMethod
            (*(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x220));
  return;
}



// FUNCTION 14195a330 FUN_14195a330 body=12 status=ok
// SIG undefined FUN_14195a330(void)

void FUN_14195a330(longlong param_1)

{
  FUN_1419bcef0(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 14195a340 FUN_14195a340 body=17 status=ok
// SIG undefined FUN_14195a340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14195a340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_3c8 [32];
  undefined1 auStack_3a8 [312];
  undefined8 uStack_270;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  if (param_2 == 0) {
    STextBlock::FArguments::FArguments(auStack_3a8);
    FTextBlockStyle::operator=(lVar1 + 0x240,uStack_270);
    FUN_140691150(auStack_3a8);
  }
  else {
    FTextBlockStyle::operator=(lVar1 + 0x240);
  }
  FUN_1418475e0(lVar1,1);
  return;
}



// FUNCTION 14195a360 FUN_14195a360 body=7 status=ok
// SIG undefined FUN_14195a360(void)

void FUN_14195a360(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x481) = param_2;
  return;
}



// FUNCTION 14195a370 SetStepSize body=34 status=ok
// SIG undefined SetStepSize(void)

void SSlider::SetStepSize(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2c8) = *param_2;
  *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2d0,param_2 + 2);
  return;
}



// FUNCTION 14195a3a0 FUN_14195a3a0 body=57 status=ok
// SIG undefined FUN_14195a3a0(void)

void FUN_14195a3a0(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x490) = *param_2;
  *(undefined1 *)(param_1 + 0x491) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x498,param_2 + 8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 14195a3e0 FUN_14195a3e0 body=130 status=ok
// SIG undefined FUN_14195a3e0(void)

void FUN_14195a3e0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 8);
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  *(undefined1 *)(lVar3 + 0x490) = uVar1;
  *(undefined1 *)(lVar3 + 0x491) = uVar2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x498,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 14195a470 FUN_14195a470 body=91 status=ok
// SIG undefined FUN_14195a470(void)

void FUN_14195a470(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = *param_2;
  local_27 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 8);
  SMultiLineEditableText::SetVirtualKeyboardDismissAction
            (*(undefined8 *)(param_1 + 0x388),&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 14195a4d0 SetVisibleRegion body=356 status=ok
// SIG undefined SetVisibleRegion(void)

void FTextLayout::SetVisibleRegion(longlong param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  undefined1 local_res10 [8];
  
  if (((*param_2 != *(float *)(param_1 + 0xbc)) || (param_2[1] != *(float *)(param_1 + 0xc0))) &&
     (*(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)param_2,
     0 < *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c))) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
  }
  if ((*(float *)(param_1 + 0xc4) != *param_3) || (param_3[1] != *(float *)(param_1 + 200))) {
    uVar1 = *(undefined8 *)param_3;
    fVar8 = *(float *)(param_1 + 0xc4) - (float)uVar1;
    *(undefined8 *)(param_1 + 0xc4) = uVar1;
    plVar6 = *(longlong **)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 200) - (float)((ulonglong)uVar1 >> 0x20);
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x30) * 0xb;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 0xb) {
      *(float *)(plVar6 + 6) = fVar8 + *(float *)(plVar6 + 6);
      *(float *)((longlong)plVar6 + 0x34) = fVar9 + *(float *)((longlong)plVar6 + 0x34);
      puVar5 = (undefined8 *)*plVar6;
      puVar4 = puVar5 + (longlong)(int)plVar6[1] * 2;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 2) {
        plVar2 = (longlong *)*puVar5;
        pfVar3 = (float *)(**(code **)(*plVar2 + 0x38))(plVar2,local_res10);
        local_resc = fVar9 + pfVar3[1];
        local_res8 = fVar8 + *pfVar3;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 14195a640 FUN_14195a640 body=12 status=ok
// SIG undefined FUN_14195a640(void)

void FUN_14195a640(longlong param_1)

{
  FUN_1419bd180(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 14195a650 SetWrappingPolicy body=22 status=ok
// SIG undefined SetWrappingPolicy(void)

void FTextLayout::SetWrappingPolicy(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x94) != param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(char *)(param_1 + 0x94) = param_2;
  }
  return;
}



// FUNCTION 14195a670 FUN_14195a670 body=12 status=ok
// SIG undefined FUN_14195a670(void)

void FUN_14195a670(longlong param_1)

{
  FUN_1419bd240(*(undefined8 *)(param_1 + 0x388));
  return;
}



// FUNCTION 14195a680 SetWrappingWidth body=94 status=ok
// SIG undefined SetWrappingWidth(void)

void FTextLayout::SetWrappingWidth(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  fVar1 = *(float *)(param_1 + 0x90);
  if (fVar1 != param_2) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    *(float *)(param_1 + 0x90) = param_2;
    if (0.0 < fVar1 != 0.0 < param_2) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar2;
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x70) {
        *(byte *)(lVar2 + 0x68) = *(byte *)(lVar2 + 0x68) | 1;
      }
    }
  }
  return;
}



// FUNCTION 14195a6e0 FUN_14195a6e0 body=8 status=ok
// SIG undefined FUN_14195a6e0(void)

undefined1 FUN_14195a6e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4d8);
}



// FUNCTION 14195a6f0 FUN_14195a6f0 body=107 status=ok
// SIG undefined FUN_14195a6f0(void)

ulonglong FUN_14195a6f0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x161) != '\0') {
    if ((*(int *)(param_1 + 0x170) != 0) && (*(longlong **)(param_1 + 0x168) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x170) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x168);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x160) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0x160);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14195a760 FUN_14195a760 body=107 status=ok
// SIG undefined FUN_14195a760(void)

ulonglong FUN_14195a760(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x119) != '\0') {
    if ((*(int *)(param_1 + 0x128) != 0) && (*(longlong **)(param_1 + 0x120) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x128) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x120);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x118) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0x118);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14195a7d0 FUN_14195a7d0 body=61 status=ok
// SIG undefined FUN_14195a7d0(void)

undefined8 FUN_14195a7d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x2a0) != '\0') && (*(longlong *)(param_1 + 0x220) != 0)) &&
     (*(longlong *)(param_1 + 0x228) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x228) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x298) != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 14195a810 FUN_14195a810 body=107 status=ok
// SIG undefined FUN_14195a810(void)

ulonglong FUN_14195a810(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x149) != '\0') {
    if ((*(int *)(param_1 + 0x158) != 0) && (*(longlong **)(param_1 + 0x150) != (longlong *)0x0)) {
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
    return (ulonglong)*(byte *)(param_1 + 0x148);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14195a880 FUN_14195a880 body=107 status=ok
// SIG undefined FUN_14195a880(void)

ulonglong FUN_14195a880(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x179) != '\0') {
    if ((*(int *)(param_1 + 0x188) != 0) && (*(longlong **)(param_1 + 0x180) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x188) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x180);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x178) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0x178);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14195a8f0 FUN_14195a8f0 body=107 status=ok
// SIG undefined FUN_14195a8f0(void)

ulonglong FUN_14195a8f0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x131) != '\0') {
    if ((*(int *)(param_1 + 0x140) != 0) && (*(longlong **)(param_1 + 0x138) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x140) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x138);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x130) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0x130);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14195a960 Snap body=124 status=ok
// SIG undefined Snap(void)

double SSpinBox<float>::Snap(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  double dVar4;
  
  if (param_2 != 0.0) {
    param_1 = (param_2 * 0.5 + param_1) / param_2;
    lVar3 = (longlong)param_1;
    if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != param_1)) {
      auVar1._8_4_ = SUB84(param_1,0);
      auVar1._0_8_ = param_1;
      auVar1._12_4_ = (int)((ulonglong)param_1 >> 0x20);
      uVar2 = movmskpd(0,auVar1);
      param_1 = (double)(longlong)(lVar3 - (ulonglong)(uVar2 & 1));
    }
    param_1 = param_1 * param_2;
  }
  dVar4 = -3.4028234663852886e+38;
  if ((-3.4028234663852886e+38 <= param_1) && (dVar4 = param_1, 3.4028234663852886e+38 <= param_1))
  {
    dVar4 = 3.4028234663852886e+38;
  }
  return dVar4;
}



// FUNCTION 14195a9e0 SpinBoxComputeExponentSliderFraction body=176 status=ok
// SIG undefined SpinBoxComputeExponentSliderFraction(void)

float SpinBoxComputeExponentSliderFraction(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_1 <= param_2) {
    fVar1 = _guard_xfg_dispatch_icall_nop(1.0 - (param_2 - param_1) / param_2,param_3);
    return param_2 - (1.0 - fVar1) * param_2;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(1.0 - (param_1 - param_2) / (1.0 - param_2),param_3);
  return (1.0 - fVar1) * (1.0 - param_2) + param_2;
}



// FUNCTION 14195aa90 FUN_14195aa90 body=3349 status=ok
// SIG undefined FUN_14195aa90(void)

undefined8 FUN_14195aa90(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Dest;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  void *_Src;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  uint uVar18;
  size_t _Count;
  longlong *plVar19;
  wchar_t *pwVar20;
  longlong *local_258;
  longlong *local_250;
  int local_248;
  int iStack_244;
  longlong *local_240;
  longlong *local_238;
  longlong local_230;
  int local_228;
  int iStack_224;
  longlong *local_220;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 *local_188;
  longlong *local_180;
  undefined8 *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158 [5];
  longlong local_130;
  int local_128;
  int local_124;
  undefined1 local_e8 [40];
  longlong local_c0;
  int local_b8;
  int local_b4;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  _Count = (size_t)iVar4;
  if ((iVar3 < 0) || ((int)param_1[4] <= iVar3)) {
    return 0;
  }
  local_160 = (longlong)iVar3 * 0x70;
  local_168 = param_1 + 3;
  plVar12 = (longlong *)(param_1[3] + local_160);
  local_220 = plVar12;
  puVar7 = (undefined8 *)operator_new(0x10);
  puVar17 = &DAT_143f3eda8;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (*(int *)((undefined8 *)*plVar12 + 1) == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = *(wchar_t **)*plVar12;
    }
    *puVar7 = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    iVar6 = iVar4 + 1;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    *(int *)(puVar7 + 1) = iVar6;
    if ((0 < iVar6) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7,0), 0 < *(int *)(puVar7 + 1))) {
      _Dest = (wchar_t *)*puVar7;
      wcsncpy(_Dest,pwVar20,_Count);
      _Dest[_Count] = L'\0';
      plVar12 = local_220;
    }
  }
  plVar11 = (longlong *)0x0;
  plVar8 = (longlong *)operator_new(0x18);
  local_180 = plVar11;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_14413b698;
    plVar8[2] = (longlong)puVar7;
    local_180 = plVar8;
  }
  local_188 = puVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_188,puVar7,puVar7);
  FUN_141922530(local_158,&local_188);
  plVar8 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_180 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_180)(local_180);
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
  puVar7 = (undefined8 *)operator_new(0x10);
  iVar6 = 0;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    iVar10 = *(int *)((undefined8 *)*plVar12 + 1);
    if (iVar10 != 0) {
      puVar17 = *(undefined2 **)*plVar12;
    }
    *puVar7 = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    iVar13 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar13 = iVar6;
    }
    iVar13 = iVar13 - iVar4;
    iVar10 = iVar13 + 1;
    if (iVar13 == 0) {
      iVar10 = iVar6;
    }
    *(int *)(puVar7 + 1) = iVar10;
    if ((0 < iVar10) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7,0), 0 < *(int *)(puVar7 + 1))) {
      pwVar20 = (wchar_t *)*puVar7;
      wcsncpy(pwVar20,puVar17 + _Count,(longlong)iVar13);
      pwVar20[iVar13] = L'\0';
    }
  }
  plVar12 = (longlong *)operator_new(0x18);
  local_170 = plVar11;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_DestroyObject_14413b698;
    plVar12[2] = (longlong)puVar7;
    local_170 = plVar12;
  }
  local_178 = puVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_178,puVar7,puVar7);
  FUN_141922530(local_e8,&local_178);
  plVar12 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_170 + 1;
    lVar14 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  bVar5 = true;
  if (0 < (int)local_220[6]) {
    local_230 = 0;
    plVar12 = plVar11;
    do {
      plVar16 = local_220;
      lVar14 = local_230;
      puVar7 = (undefined8 *)(local_230 * 0x30 + local_220[5]);
      plVar8 = (longlong *)puVar7[1];
      local_258 = (longlong *)*puVar7;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_258 + 8))(local_258,&local_248);
      if ((iVar4 < local_248) || (iStack_244 <= iVar4)) {
        if ((int)plVar12 == (int)plVar16[6] + -1) {
          if (!bVar5) goto LAB_14195b6cd;
          goto LAB_14195ad8a;
        }
        if (bVar5) {
          (**(code **)(*local_258 + 0x60))(local_258,local_158,&local_248);
          iVar10 = local_128;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          lVar15 = (longlong)local_128;
          local_128 = local_128 + 1;
          if (local_124 < local_128) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_130,iVar10);
          }
          plVar16 = plVar8 + 1;
          puVar7 = (undefined8 *)(lVar15 * 0x30 + local_130);
          *puVar7 = local_258;
          puVar7[1] = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (plVar8 == (longlong *)0x0) goto LAB_14195b528;
          LOCK();
          iVar10 = (int)*plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
LAB_14195b696:
          if (iVar10 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          goto LAB_14195b4ef;
        }
LAB_14195b6cd:
        plVar16 = (longlong *)(ulonglong)(1 - *(int *)(local_158[0] + 8));
        if (*(int *)(local_158[0] + 8) == 0) {
          plVar16 = plVar11;
        }
        iVar10 = (int)plVar16 + local_248;
        if (iVar10 < 1) {
          iVar10 = iVar6;
        }
        iVar13 = iStack_244 + (int)plVar16;
        if (iVar13 < 1) {
          iVar13 = iVar6;
        }
        _local_228 = CONCAT44(iVar13,iVar10);
        (**(code **)(*local_258 + 0x60))(local_258,local_e8,&local_228);
        iVar10 = local_b8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        lVar15 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        if (local_b4 < local_b8) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c0,iVar10);
        }
        puVar7 = (undefined8 *)(lVar15 * 0x30 + local_c0);
        *puVar7 = local_258;
        puVar7[1] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar8 + 1;
          iVar10 = (int)*plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          goto LAB_14195b696;
        }
      }
      else {
LAB_14195ad8a:
        bVar5 = false;
        local_250 = (longlong *)0x0;
        local_238 = (longlong *)0x0;
        uVar9 = (**(code **)(*local_258 + 0x88))(local_258);
        if ((uVar9 & 1) == 0) {
          if (iVar4 == local_248) {
            local_1d8 = local_248;
            local_1d4 = *(int *)(local_158[0] + 8) + -1;
            if (*(int *)(local_158[0] + 8) == 0) {
              local_1d4 = iVar6;
            }
            puVar7 = (undefined8 *)
                     (**(code **)(*param_1 + 0x30))(param_1,local_68,local_158,&local_1d8);
            local_200 = (longlong *)puVar7[1];
            plVar16 = (longlong *)*puVar7;
            if (local_200 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_200 + 1) = (int)local_200[1] + 1;
              UNLOCK();
            }
            local_208 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_250,&local_200);
            plVar2 = local_200;
            if (local_200 != (longlong *)0x0) {
              LOCK();
              plVar19 = local_200 + 1;
              lVar14 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_200)(local_200);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_200 + 8))(local_200,1);
                }
              }
            }
            plVar2 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar19 = local_60 + 1;
              lVar14 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            local_1a8 = 0;
            local_240 = local_258;
            local_1a0 = plVar8;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_238,&local_1a0);
            plVar2 = local_1a0;
            if (local_1a0 != (longlong *)0x0) {
              LOCK();
              plVar19 = local_1a0 + 1;
              lVar14 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_1a0)(local_1a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_1a0 + 8))(local_1a0,1);
                }
              }
            }
            local_1d0 = 0;
            local_1cc = *(int *)(local_158[0] + 8) + -1;
            if (*(int *)(local_158[0] + 8) == 0) {
              local_1cc = iVar6;
            }
            local_1cc = iStack_244 - local_1cc;
            (**(code **)(*local_240 + 0x60))(local_240,local_e8,&local_1d0);
            local_258 = plVar16;
          }
          else {
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            local_198 = 0;
            local_190 = plVar8;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_250,&local_190);
            plVar16 = local_190;
            if (local_190 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_190 + 1;
              lVar14 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_190)(local_190);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_190 + 8))(local_190,1);
                }
              }
            }
            local_1c8 = local_248;
            local_1c4 = *(int *)(local_158[0] + 8) + -1;
            if (*(int *)(local_158[0] + 8) == 0) {
              local_1c4 = iVar6;
            }
            (**(code **)(*local_258 + 0x60))(local_258,local_158,&local_1c8);
            local_1c0 = 0;
            local_1bc = *(int *)(local_158[0] + 8) + -1;
            if (*(int *)(local_158[0] + 8) == 0) {
              local_1bc = iVar6;
            }
            local_1bc = iStack_244 - local_1bc;
            puVar7 = (undefined8 *)
                     (**(code **)(*param_1 + 0x30))(param_1,local_58,local_e8,&local_1c0);
            local_1f0 = (longlong *)puVar7[1];
            local_240 = (longlong *)*puVar7;
            if (local_1f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
              UNLOCK();
            }
            local_1f8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_238,&local_1f0);
            plVar16 = local_1f0;
            if (local_1f0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1f0 + 1;
              lVar14 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_1f0)(local_1f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_1f0 + 8))(local_1f0,1);
                }
              }
            }
            plVar16 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_50 + 1;
              lVar14 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
          }
        }
        else {
          puVar7 = (undefined8 *)(**(code **)(*local_258 + 0x68))(local_258,local_78);
          local_210 = (longlong *)puVar7[1];
          plVar16 = (longlong *)*puVar7;
          if (local_210 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_210 + 1) = (int)local_210[1] + 1;
            UNLOCK();
          }
          local_218 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_250,&local_210);
          plVar2 = local_210;
          if (local_210 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_210 + 1;
            lVar14 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_210)(local_210);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_210 + 8))(local_210,1);
              }
            }
          }
          plVar2 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_70 + 1;
            lVar14 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          local_1e8 = local_248;
          local_1e4 = *(int *)(local_158[0] + 8) + -1;
          if (*(int *)(local_158[0] + 8) == 0) {
            local_1e4 = iVar6;
          }
          (**(code **)(*plVar16 + 0x60))(plVar16,local_158,&local_1e8);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          local_1b8 = 0;
          local_240 = local_258;
          local_1b0 = plVar8;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_238,&local_1b0);
          plVar2 = local_1b0;
          if (local_1b0 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_1b0 + 1;
            lVar14 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_1b0)(local_1b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_1b0 + 8))(local_1b0,1);
              }
            }
          }
          local_1e0 = 0;
          local_1dc = *(int *)(local_158[0] + 8) + -1;
          if (*(int *)(local_158[0] + 8) == 0) {
            local_1dc = iVar6;
          }
          local_1dc = iStack_244 - local_1dc;
          (**(code **)(*local_240 + 0x60))(local_240,local_e8,&local_1e0);
          local_258 = plVar16;
        }
        iVar10 = local_128;
        plVar16 = local_250;
        if (local_250 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_250 + 1) = (int)local_250[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_250 + 1) = (int)local_250[1] + 1;
          UNLOCK();
        }
        lVar14 = (longlong)local_128;
        local_128 = local_128 + 1;
        if (local_124 < local_128) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_130,iVar10);
        }
        plVar2 = local_250;
        puVar7 = (undefined8 *)(lVar14 * 0x30 + local_130);
        *puVar7 = local_258;
        puVar7[1] = plVar16;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          plVar16 = local_250;
        }
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        plVar19 = (longlong *)0x0;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          lVar14 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_250)(local_250);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_250 + 8))(local_250,1);
            }
          }
          plVar2 = local_250;
          LOCK();
          plVar16 = plVar16 + 1;
          lVar14 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          plVar19 = local_250;
          if ((int)lVar14 == 1) {
            (**(code **)*local_250)(local_250);
            plVar19 = local_250;
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_250 + 8))(local_250,1);
            }
          }
        }
        iVar10 = local_b8;
        plVar16 = local_238;
        if (local_238 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_238 + 1) = (int)local_238[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_238 + 1) = (int)local_238[1] + 1;
          UNLOCK();
          plVar19 = local_250;
        }
        lVar14 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        if (local_b4 < local_b8) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c0,iVar10);
        }
        plVar2 = local_238;
        puVar7 = (undefined8 *)(lVar14 * 0x30 + local_c0);
        *puVar7 = local_240;
        puVar7[1] = plVar16;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          plVar19 = local_250;
          plVar16 = local_238;
        }
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          lVar14 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
            }
          }
          plVar19 = local_238;
          LOCK();
          plVar2 = plVar16 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
            }
          }
          plVar2 = local_238;
          LOCK();
          plVar16 = plVar16 + 1;
          lVar14 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          plVar19 = local_250;
          if ((int)lVar14 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar19 = local_250;
            if (iVar10 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
              plVar19 = local_250;
            }
          }
        }
        plVar16 = local_250;
        lVar14 = local_230;
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar19 + 1;
          lVar15 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_250)(local_250);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar14 = local_230;
            if (iVar10 == 1) {
              (**(code **)(*local_250 + 8))(local_250,1);
              lVar14 = local_230;
            }
          }
        }
LAB_14195b4ef:
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar8 + 1;
          lVar15 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
LAB_14195b528:
      local_230 = lVar14 + 1;
      uVar18 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar18;
    } while ((int)uVar18 < (int)local_220[6]);
  }
  plVar12 = local_168;
  FTextLayout::FLineModel::operator=(local_160 + *local_168,local_158);
  iVar4 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar4 + 1;
  if (*(int *)((longlong)plVar12 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar12,iVar4);
  }
  lVar14 = (longlong)(iVar3 + 1) * 0x70;
  _Src = (void *)(*plVar12 + lVar14);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x70),_Src,(longlong)(iVar4 - (iVar3 + 1)) * 0x70);
  FTextLayout::FLineModel::FLineModel(*plVar12 + lVar14,local_e8);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  FTextLayout::FLineModel::~FLineModel(local_e8);
  FTextLayout::FLineModel::~FLineModel(local_158);
  return 1;
}



// FUNCTION 14195b7b0 FUN_14195b7b0 body=56 status=ok
// SIG undefined FUN_14195b7b0(void)

bool FUN_14195b7b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar2);
  return iVar1 == 0;
}



// FUNCTION 14195b810 FUN_14195b810 body=154 status=ok
// SIG undefined FUN_14195b810(void)

undefined1 FUN_14195b810(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x3a8);
  plVar4 = *(longlong **)(param_1 + 0x3a0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4);
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14195b8b0 FUN_14195b8b0 body=154 status=ok
// SIG undefined FUN_14195b8b0(void)

undefined1 FUN_14195b8b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x390);
  plVar4 = *(longlong **)(param_1 + 0x388);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4);
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14195b960 FUN_14195b960 body=666 status=ok
// SIG undefined FUN_14195b960(void)

void FUN_14195b960(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined1 local_1e8 [8];
  longlong local_1e0;
  longlong local_1d8;
  int local_1d0;
  char local_1cc;
  longlong local_1b0;
  longlong local_1a0;
  int local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  char local_180;
  longlong local_178;
  undefined1 local_118 [8];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [40];
  longlong local_d0;
  longlong local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  char local_ac;
  char local_ab;
  char local_aa;
  byte local_98;
  
  bVar2 = false;
  uVar4 = FUN_140573010(*(undefined8 *)(param_1 + 0x220));
  FTextBlockStyle::FTextBlockStyle(local_1e8,uVar4);
  if (*(char *)(param_1 + 0x278) != '\0') {
    plVar5 = (longlong *)FUN_14193e860(param_1 + 0x228);
    if ((((local_1e0 != *plVar5) || (local_1d8 != plVar5[1])) || (local_1d0 != (int)plVar5[2])) ||
       (((local_1cc != *(char *)((longlong)plVar5 + 0x14) || (local_1b0 != plVar5[6])) ||
        ((local_1a0 != plVar5[8] || (local_198 != (int)plVar5[9])))))) {
      FUN_1417f9360(&local_1e0);
      bVar2 = true;
    }
  }
  if (*(char *)(param_1 + 0x2b8) != '\0') {
    pfVar6 = (float *)FUN_141831530(param_1 + 0x290);
    if ((((local_190 != *pfVar6) || (local_18c != pfVar6[1])) ||
        ((local_188 != pfVar6[2] ||
         ((local_184 != pfVar6[3] || (local_180 != *(char *)(pfVar6 + 4))))))) ||
       ((local_180 == '\x01' && (local_178 != *(longlong *)(pfVar6 + 6))))) {
      FUN_140692440(&local_190);
      bVar2 = true;
    }
  }
  if (*(char *)(param_1 + 0x2d8) == '\0') {
LAB_14195bbb1:
    if (!bVar2) goto LAB_14195bbd3;
  }
  else {
    if ((*(int *)(param_1 + 0x2e8) != 0) && (*(longlong **)(param_1 + 0x2e0) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x2e8) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x2e0);
        }
        uVar4 = (**(code **)(*plVar5 + 0x38))();
        *(undefined8 *)(param_1 + 0x2d0) = uVar4;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x2d0);
    if (lVar1 == 0) goto LAB_14195bbb1;
    if (((((local_110 == *(float *)(lVar1 + 8)) && (local_10c == *(float *)(lVar1 + 0xc))) &&
         (local_ac == *(char *)(lVar1 + 0x6c))) &&
        ((local_108 == *(float *)(lVar1 + 0x10) && (local_100 == *(float *)(lVar1 + 0x18))))) &&
       ((local_104 == *(float *)(lVar1 + 0x14) && (local_fc == *(float *)(lVar1 + 0x1c))))) {
      cVar3 = FSlateColor::operator==(local_f8,lVar1 + 0x20);
      if (((((cVar3 != '\0') && (local_ab == *(char *)(lVar1 + 0x6d))) &&
           (local_aa == *(char *)(lVar1 + 0x6e))) &&
          ((((local_d0 == *(longlong *)(lVar1 + 0x48) && (local_c8 == *(longlong *)(lVar1 + 0x50)))
            && (((*(byte *)(lVar1 + 0x80) ^ local_98) & 1) == 0)) &&
           ((local_c0 == *(float *)(lVar1 + 0x58) && (local_bc == *(float *)(lVar1 + 0x5c))))))) &&
         ((local_b8 == *(float *)(lVar1 + 0x60) && (local_b4 == *(float *)(lVar1 + 100)))))
      goto LAB_14195bbb1;
    }
    FUN_1406922e0(local_118,lVar1);
  }
  FSlateEditableTextLayout::SetTextStyle(*(undefined8 *)(param_1 + 0x220),local_1e8);
  FUN_14199e200(*(undefined8 *)(param_1 + 0x220));
LAB_14195bbd3:
  FUN_140691580(local_1e8);
  return;
}



// FUNCTION 14195bc00 FUN_14195bc00 body=764 status=ok
// SIG undefined FUN_14195bc00(void)

void FUN_14195bc00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t **ppwVar10;
  int iVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  wchar_t *pwVar19;
  undefined4 uVar20;
  wchar_t *local_b8;
  int local_b0;
  wchar_t *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  wchar_t *local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  pwVar14 = (wchar_t *)0x0;
  iVar18 = 0;
  if (*(char *)(param_1 + 0x534) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x534) = 1;
  puVar8 = (undefined8 *)FText::ToString(param_2);
  local_b8 = (wchar_t *)0x0;
  local_b0 = *(int *)(puVar8 + 1);
  lVar12 = (longlong)local_b0;
  _Src = (void *)*puVar8;
  pwVar13 = pwVar14;
  pwVar16 = pwVar14;
  if (local_b0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    pwVar13 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar12 * 2);
    iVar11 = local_b0;
    pwVar19 = pwVar13;
    iVar7 = local_b0 + -1;
    if (local_b0 != 0) goto LAB_14195bca0;
  }
  iVar11 = local_b0;
  pwVar19 = pwVar13;
  iVar7 = iVar18;
LAB_14195bca0:
  while( true ) {
    iVar6 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar6 = iVar18;
    }
    iVar15 = (int)pwVar16;
    iVar17 = iVar7;
    if ((iVar6 <= iVar15) ||
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x368) + 0x18))
                          (*(longlong **)(param_1 + 0x368),*pwVar13), iVar17 = iVar15, cVar5 == '\0'
       )) break;
    pwVar13 = pwVar13 + 1;
    pwVar16 = (wchar_t *)(ulonglong)(iVar15 + 1);
  }
  iVar7 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar7 = iVar18;
  }
  if (iVar17 < iVar7) {
    if (iVar17 < 1) {
      plVar2 = *(longlong **)(param_1 + 0x368);
      if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x300) != 0) {
          pwVar14 = *(wchar_t **)(param_1 + 0x2f8);
        }
        uVar20 = (**(code **)(*(longlong *)pwVar14 + 0x38))();
        *(undefined4 *)(param_1 + 0x2f0) = uVar20;
      }
      (**(code **)(*plVar2 + 8))(plVar2,local_88,(undefined4 *)(param_1 + 0x2f0));
      ppwVar10 = local_88;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      if (iVar11 == 0) {
        pwVar14 = L"";
        iVar11 = iVar18;
      }
      else {
        pwVar14 = pwVar19;
        iVar11 = iVar11 + -1;
      }
      local_a8 = (wchar_t *)0x0;
      uStack_9c = 0;
      if (iVar17 < iVar11) {
        iVar11 = iVar17;
      }
      local_a0 = iVar11 + 1;
      if (iVar11 == 0) {
        local_a0 = iVar18;
      }
      if ((0 < local_a0) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0), pwVar13 = local_a8,
         0 < local_a0)) {
        wcsncpy(local_a8,pwVar14,(longlong)iVar11);
        pwVar13[iVar11] = L'\0';
      }
      ppwVar10 = &local_a8;
      bVar4 = true;
      bVar3 = false;
    }
    pwVar14 = *ppwVar10;
    *ppwVar10 = (wchar_t *)0x0;
    local_98 = pwVar14;
    local_90 = *(undefined4 *)(ppwVar10 + 1);
    local_8c = *(undefined4 *)((longlong)ppwVar10 + 0xc);
    ppwVar10[1] = (wchar_t *)0x0;
    if ((bVar3) && (local_88[0] != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_a8 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    uVar9 = FText::FromString(local_48,&local_98);
    FText::FText(local_78,uVar9);
    local_60 = 1;
    local_58 = 0;
    local_50 = 0;
    FUN_1419a43a0(*(undefined8 *)(*(longlong *)(param_1 + 0x358) + 0x220),local_78);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      pwVar19 = local_b8;
      if ((int)lVar12 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        pwVar19 = local_b8;
        if (iVar18 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
          pwVar19 = local_b8;
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      pwVar19 = local_b8;
      if ((int)lVar12 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        pwVar19 = local_b8;
        if (iVar18 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          pwVar19 = local_b8;
        }
      }
    }
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (pwVar19 != (wchar_t *)0x0) {
    FMemory::Free(pwVar19);
  }
  *(undefined1 *)(param_1 + 0x534) = 0;
  return;
}



// FUNCTION 14195bf00 FUN_14195bf00 body=205 status=ok
// SIG undefined FUN_14195bf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14195bf00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  float local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_3 != 1) {
    FUN_14193bab0();
  }
  plVar1 = *(longlong **)(param_1 + 0x368);
  if ((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x300) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x2f8);
      }
      uVar6 = (**(code **)(*plVar5 + 0x38))();
      *(undefined4 *)(param_1 + 0x2f0) = uVar6;
    }
  }
  lVar2 = *plVar1;
  uVar4 = FText::ToString(param_2);
  (**(code **)(lVar2 + 0x10))(plVar1,&local_38,uVar4,(undefined4 *)(param_1 + 0x2f0));
  if (local_34 != '\0') {
    FUN_14192abd0(param_1,(double)local_38,1,param_3);
  }
  return;
}



// FUNCTION 14195bfd0 TextLocationToOffset body=32 status=ok
// SIG undefined TextLocationToOffset(void)

int FTextLayout::FTextOffsetLocations::TextLocationToOffset(longlong *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < (int)param_1[1])) {
    return *(int *)(*param_1 + (longlong)iVar1 * 8) + param_2[1];
  }
  return -1;
}



// FUNCTION 14195c000 FUN_14195c000 body=1015 status=ok
// SIG undefined FUN_14195c000(void)

void FUN_14195c000(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar17;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [8];
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [12];
  undefined1 local_74 [76];
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  plVar2 = *(longlong **)(param_1 + 0x218);
  plVar10 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar5 == (int)plVar2[1];
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar10 = plVar2;
        if (((plVar2 != (longlong *)0x0) && (lVar4 = *(longlong *)(param_1 + 0x210), lVar4 != 0)) &&
           (*(char *)(param_1 + 0x2a0) != '\0')) {
          if (*(char *)(param_1 + 0x2b8) == '\0') {
            puVar6 = (undefined8 *)FUN_141834360(lVar4,local_90);
            SWidget::GetDesiredSize(*puVar6,local_108);
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_88 + 1;
              lVar3 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_88)(local_88);
                LOCK();
                piVar1 = (int *)((longlong)local_88 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_88 + 8))(local_88,1);
                }
              }
            }
            puVar7 = (undefined4 *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x280);
            SMenuAnchor::ComputeNewWindowMenuPlacement
                      (param_1,&local_d0,param_2,local_108,CONCAT44(uVar17,*puVar7));
            fVar12 = (float)DAT_1468b5d88 * local_b4;
            fVar15 = DAT_1468b5d88._4_4_ * local_ac;
            fVar16 = DAT_1468b5d88._4_4_ * local_a8;
            fVar13 = (float)DAT_1468b5d88 * local_b0;
            fVar14 = *(float *)(param_2 + 8);
            pfVar8 = (float *)SWindow::GetLocalToWindowTransform(lVar4,local_80);
            fVar14 = 1.0 / (fVar14 / *pfVar8);
            SWindow::ReshapeWindow
                      (lVar4,CONCAT44(fVar16 + fVar13 + local_a0,fVar15 + fVar12 + local_a4),
                       CONCAT44(local_cc * local_c8 * fVar14,local_d0 * local_c8 * fVar14));
            plVar10 = plVar2;
          }
          else if ((*(char *)(param_1 + 0x2a0) != '\0') && (*(char *)(param_1 + 0x2b8) == '\x01')) {
            uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 8) + 0x20);
            puVar7 = (undefined4 *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x280);
            uVar9 = SWidget::GetDesiredSize(uVar9,local_98);
            FUN_141922840(&local_f8,param_2,uVar9,*puVar7);
            fVar15 = 1.0 / *(float *)(param_2 + 8);
            fVar12 = *(float *)(param_2 + 0xc) * fVar15;
            fVar13 = *(float *)(param_2 + 0x10) * fVar15;
            pfVar8 = (float *)SWindow::GetClientRectInScreen(lVar4,local_74);
            local_120 = fVar15 * pfVar8[2] - fVar12;
            fVar12 = fVar15 * *pfVar8 - fVar12;
            fVar14 = fVar15 * pfVar8[1] - fVar13;
            local_11c = fVar15 * pfVar8[3] - fVar13;
            local_128 = fVar12;
            if (local_120 < fVar12) {
              local_128 = local_120;
              local_120 = fVar12;
            }
            local_124 = fVar14;
            if (local_11c < fVar14) {
              local_124 = local_11c;
              local_11c = fVar14;
            }
            local_10c = local_ec + local_f4;
            local_118 = local_f0;
            local_110 = local_f0 + local_f8;
            local_114 = local_ec;
            ComputePopupFitInRect(&local_100,local_e8,&local_118,local_d8,&local_128);
            *(undefined8 *)(param_1 + 0x2c4) = local_100;
            fVar14 = *(float *)(param_2 + 8);
            fVar12 = *(float *)(param_2 + 0xc);
            *(float *)(param_1 + 0x2d0) =
                 fVar14 * *(float *)(param_1 + 0x2c8) + *(float *)(param_2 + 0x10);
            *(float *)(param_1 + 0x2cc) = fVar14 * *(float *)(param_1 + 0x2c4) + fVar12;
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 0x298) = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 14195c400 FUN_14195c400 body=217 status=ok
// SIG undefined FUN_14195c400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14195c400(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f4ab8) {
    _Init_thread_header();
    if (DAT_1469f4ab8 == -1) {
      puVar3 = (undefined4 *)FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
      *(undefined1 *)((longlong)puVar3 + 1) = 0;
      puVar3[4] = 1;
      puVar3[5] = 6;
      _DAT_1469f4aa0 = *puVar3;
      uRam00000001469f4aa4 = puVar3[1];
      uRam00000001469f4aa8 = puVar3[2];
      uRam00000001469f4aac = puVar3[3];
      DAT_1469f4ab0 = *(undefined8 *)(puVar3 + 4);
      _Init_thread_footer();
    }
  }
  uVar2 = ExpressionParser::GetLocalizedNumberFormattingRules();
  fVar1 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = CONCAT44(uRam00000001469f4aa4,_DAT_1469f4aa0);
  uStack_20 = CONCAT44(uRam00000001469f4aac,uRam00000001469f4aa8);
  local_18 = DAT_1469f4ab0;
  FastDecimalFormat::Internal::FractionalToString(SUB84((double)fVar1,0),uVar2,&local_28,param_2);
  return param_2;
}



// FUNCTION 14195c4e0 FUN_14195c4e0 body=398 status=ok
// SIG undefined FUN_14195c4e0(void)

void FUN_14195c4e0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x310) != 0) && (*(longlong **)(param_1 + 0x308) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(), cVar1 != '\0')) {
    plVar4 = plVar5;
    if (*(int *)(param_1 + 0x310) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x308);
    }
    uVar2 = (**(code **)(*plVar4 + 0x38))();
    *(undefined1 *)(param_1 + 0x300) = uVar2;
  }
  if (1 < (byte)(*(char *)(param_1 + 0x300) - 1U)) {
    if (*(char *)(param_1 + 0x300) != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x310) != 0) {
      if ((*(longlong **)(param_1 + 0x308) != (longlong *)0x0) &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(), cVar1 != '\0'))
      goto LAB_14195c5ad;
      if ((*(int *)(param_1 + 0x310) != 0) &&
         (plVar5 = *(longlong **)(param_1 + 0x308), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*(longlong *)(param_1 + 0x308) != 0) {
          uVar3 = FMemory::Realloc(*(longlong *)(param_1 + 0x308),0,0);
          *(undefined8 *)(param_1 + 0x308) = uVar3;
        }
        *(undefined4 *)(param_1 + 0x310) = 0;
      }
    }
    *(undefined2 *)(param_1 + 0x300) = 0x101;
LAB_14195c5ad:
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x318,1);
    return;
  }
  if (*(int *)(param_1 + 0x310) != 0) {
    if ((*(longlong **)(param_1 + 0x308) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(), cVar1 != '\0'))
    goto LAB_14195c62b;
    if ((*(int *)(param_1 + 0x310) != 0) &&
       (plVar4 = *(longlong **)(param_1 + 0x308), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      if (*(longlong *)(param_1 + 0x308) != 0) {
        uVar3 = FMemory::Realloc(*(longlong *)(param_1 + 0x308),0,0);
        *(undefined8 *)(param_1 + 0x308) = uVar3;
      }
      *(undefined4 *)(param_1 + 0x310) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x300) = 0x100;
LAB_14195c62b:
  if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 800) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x318);
    }
    (**(code **)(*plVar5 + 0x40))(plVar5,0);
  }
  return;
}



// FUNCTION 14195c670 TriggerActivateTab body=18 status=ok
// SIG undefined TriggerActivateTab(void)

undefined1 SDockTab::TriggerActivateTab(undefined8 param_1)

{
  FUN_141926de0(param_1,0);
  return 0;
}



// FUNCTION 14195c690 Unhandled body=126 status=ok
// SIG undefined Unhandled(void)

undefined1 * FReply::Unhandled(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  return param_1;
}



// FUNCTION 14195c710 FUN_14195c710 body=36 status=ok
// SIG undefined FUN_14195c710(void)

void FUN_14195c710(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*DAT_1469f4590 + 0x40))();
  *(undefined8 *)(param_1 + 0x5e8) = uVar1;
  return;
}



// FUNCTION 14195c740 UpdateAndClampHorizontalScrollBar body=27 status=ok
// SIG undefined UpdateAndClampHorizontalScrollBar(void)

undefined4 SEditableText::UpdateAndClampHorizontalScrollBar(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined4 *)
           FSlateEditableTextLayout::GetScrollOffset(*(undefined8 *)(param_1 + 0x18),local_res8);
  return *puVar1;
}



// FUNCTION 14195c760 UpdateHighlights body=27 status=ok
// SIG undefined UpdateHighlights(void)

void FTextLayout::UpdateHighlights(longlong param_1)

{
  FUN_14193c8a0();
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfd;
  return;
}



// FUNCTION 14195c780 FUN_14195c780 body=265 status=ok
// SIG undefined FUN_14195c780(void)

void FUN_14195c780(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_1418375f0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_18);
  sVar4 = FSlateFontCache::GetLocalizedFallbackFontRevision(local_18);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (sVar4 != (short)param_1[0x6a]) {
    if ((short)param_1[0x6a] != 0) {
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
      lVar5 = param_1[3];
      lVar6 = (longlong)(int)param_1[4] * 0x70 + lVar5;
      for (; lVar5 != lVar6; lVar5 = lVar5 + 0x70) {
        *(byte *)(lVar5 + 0x68) = *(byte *)(lVar5 + 0x68) | 5;
      }
    }
    *(short *)(param_1 + 0x6a) = sVar4;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014195c86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014195c87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 14195c890 UpdateIfNeeded body=73 status=ok
// SIG undefined UpdateIfNeeded(void)

void FTextLayout::UpdateIfNeeded(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014195c8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014195c8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 14195c8e0 UpdateIsSpinRangeUnlimited body=107 status=ok
// SIG undefined UpdateIsSpinRangeUnlimited(void)

void SSpinBox<float>::UpdateIsSpinRangeUnlimited(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = TAttribute<TOptional<float>_>::Get(param_1 + 0x428);
  if (*(char *)(lVar1 + 4) != '\0') {
    lVar1 = TAttribute<TOptional<float>_>::Get(param_1 + 0x448);
    if (*(char *)(lVar1 + 4) != '\0') goto LAB_14195c931;
  }
  lVar1 = TAttribute<TOptional<float>_>::Get(param_1 + 0x468);
  if (*(char *)(lVar1 + 4) != '\0') {
    lVar1 = TAttribute<TOptional<float>_>::Get(param_1 + 0x488);
    if (*(char *)(lVar1 + 4) != '\0') {
LAB_14195c931:
      *(undefined1 *)(param_1 + 0x378) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x378) = 1;
  return;
}



// FUNCTION 14195c950 FUN_14195c950 body=635 status=ok
// SIG undefined FUN_14195c950(void)

void FUN_14195c950(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  float *pfVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  float local_resc;
  undefined1 local_res10 [8];
  undefined8 local_58;
  undefined8 local_50;
  
  FTextLayout::ClearView();
  (**(code **)(*param_1 + 0x20))(param_1);
  uVar9 = 0;
  local_58 = 0;
  local_50 = 0;
  fVar15 = (*(float *)(param_1 + 0x12) - (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x13)))
           * *(float *)((longlong)param_1 + 0x8c);
  if (fVar15 <= 0.01) {
    fVar15 = 0.01;
  }
  uVar12 = uVar9;
  if (0 < (int)param_1[4]) {
    do {
      puVar7 = (undefined8 *)(param_1[3] + uVar9);
      bVar6 = *(byte *)(puVar7 + 0xd);
      if ((bVar6 & 2) != 0) {
        cVar2 = *(char *)((longlong)param_1 + 0x8a);
        if (cVar2 == '\0') {
          if (*(char *)((longlong)param_1 + 0x89) == '\x01') {
            uVar4 = 0;
          }
          else {
            uVar4 = TextBiDi::ComputeBaseDirection(*puVar7);
            bVar6 = *(byte *)(puVar7 + 0xd);
          }
          *(undefined1 *)(puVar7 + 4) = uVar4;
        }
        else if (cVar2 == '\x01') {
          *(undefined1 *)(puVar7 + 4) = 0;
        }
        else if (cVar2 == '\x02') {
          *(undefined1 *)(puVar7 + 4) = 1;
        }
        bVar6 = bVar6 & 0xfd;
        *(byte *)(puVar7 + 0xd) = bVar6;
      }
      if ((bVar6 & 4) != 0) {
        FUN_141955bd0(puVar7[2] + 8);
        *(byte *)(puVar7 + 0xd) = *(byte *)(puVar7 + 0xd) & 0xfb;
      }
      FUN_14193a870(param_1,puVar7);
      FUN_14193d230(param_1,uVar12,fVar15,&local_58);
      uVar11 = (int)uVar12 + 1;
      uVar9 = uVar9 + 0x70;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_1[4]);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  FUN_141945860(param_1);
  fVar15 = *(float *)((longlong)param_1 + 0x8c);
  fVar1 = *(float *)(param_1 + 0x13);
  fVar14 = (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x13)) * fVar15;
  fVar16 = fVar15 * *(float *)((longlong)param_1 + 0x9c);
  *(float *)(param_1 + 0x16) = fVar14 + *(float *)(param_1 + 0x16);
  *(float *)((longlong)param_1 + 0xb4) = fVar14 + *(float *)((longlong)param_1 + 0xb4);
  *(float *)(param_1 + 0x17) =
       (*(float *)((longlong)param_1 + 0xa4) + *(float *)((longlong)param_1 + 0x9c)) * fVar15 +
       *(float *)(param_1 + 0x17);
  plVar10 = (longlong *)param_1[5];
  plVar13 = plVar10 + (longlong)(int)param_1[6] * 0xb;
  for (; plVar10 != plVar13; plVar10 = plVar10 + 0xb) {
    *(float *)(plVar10 + 6) = fVar15 * fVar1 + *(float *)(plVar10 + 6);
    *(float *)((longlong)plVar10 + 0x34) = fVar16 + *(float *)((longlong)plVar10 + 0x34);
    puVar7 = (undefined8 *)*plVar10;
    puVar8 = puVar7 + (longlong)(int)plVar10[1] * 2;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
      plVar3 = (longlong *)*puVar7;
      pfVar5 = (float *)(**(code **)(*plVar3 + 0x38))(plVar3,local_res10);
      local_resc = fVar16 + pfVar5[1];
      local_res8 = fVar15 * fVar1 + *pfVar5;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_res8);
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  return;
}



// FUNCTION 14195cbd0 FUN_14195cbd0 body=401 status=ok
// SIG undefined FUN_14195cbd0(void)

undefined8 * FUN_14195cbd0(undefined8 *param_1)

{
  undefined8 *_Dst;
  
  _Dst = param_1 + 2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = &PTR_LAB_144d76440;
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x350);
    FUN_1417f46d0(_Dst);
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf7;
    *_Dst = &PTR_FUN_144d730f8;
    *(undefined2 *)(param_1 + 0x44) = 0;
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
    *(undefined2 *)(param_1 + 0x47) = 0;
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
    param_1[0x4b] = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x264) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    param_1[0x51] = 0;
    *(undefined4 *)(param_1 + 0x52) = 0;
    param_1[0x53] = 0x3f800000;
    *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5d) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    param_1[0x62] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    param_1[100] = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
    param_1[0x66] = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
    param_1[0x68] = 0;
    *(undefined4 *)(param_1 + 0x69) = 0;
    param_1[0x6a] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
  }
  return param_1;
}



// FUNCTION 14195cd70 FUN_14195cd70 body=1404 status=ok
// SIG undefined FUN_14195cd70(void)

void FUN_14195cd70(float *param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte bVar11;
  byte *pbVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte local_res18 [16];
  undefined8 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  
  lVar7 = *(longlong *)(param_3 + 0x10);
  plVar10 = (longlong *)0x0;
  if (((*(int *)(lVar7 + 0xc0) == 0) || (*(longlong **)(lVar7 + 0xb8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(lVar7 + 0xb8) + 0x18))(), cVar5 == '\0')) {
    bVar11 = *(byte *)(lVar7 + 0xb0);
  }
  else {
    plVar9 = plVar10;
    if (*(int *)(lVar7 + 0xc0) != 0) {
      plVar9 = *(longlong **)(lVar7 + 0xb8);
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,local_res18);
    *(byte *)(lVar7 + 0xb0) = local_res18[0];
    bVar11 = local_res18[0];
  }
  if ((*param_2 & bVar11) == 0) {
    return;
  }
  if (((*(int *)(param_4 + 3) != 0) && ((longlong *)param_4[2] != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)param_4[2] + 0x18))(), cVar5 != '\0')) {
    plVar9 = plVar10;
    if (*(int *)(param_4 + 3) != 0) {
      plVar9 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,&local_198);
    *param_4 = local_198;
  }
  local_1c8 = *param_4;
  if (((*(int *)(param_3 + 0x48) != 0) && (*(longlong **)(param_3 + 0x40) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_3 + 0x40) + 0x18))(), cVar5 != '\0')) {
    plVar9 = plVar10;
    if (*(int *)(param_3 + 0x48) != 0) {
      plVar9 = *(longlong **)(param_3 + 0x40);
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,&local_d8);
    *(undefined8 *)(param_3 + 0x28) = local_d8;
    *(undefined8 *)(param_3 + 0x30) = uStack_d0;
  }
  fVar15 = *(float *)(param_3 + 0x28);
  fStack_1a4 = *(float *)(param_3 + 0x2c);
  fVar18 = *(float *)(param_3 + 0x30);
  fStack_19c = *(float *)(param_3 + 0x34);
  iVar4 = *(int *)(param_3 + 0x20);
  fVar3 = *param_1;
  fVar17 = fVar3 - (fVar15 + fVar18);
  local_1a8 = fVar15;
  fStack_1a0 = fVar18;
  if (iVar4 == 0) {
  }
  else {
    pfVar6 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_3 + 0x10),local_e8);
    fVar19 = (float)local_1c8 * *pfVar6;
    if (fVar17 <= (float)local_1c8 * *pfVar6) {
      fVar19 = fVar17;
    }
    if (iVar4 == 1) goto LAB_14195cf4e;
    if (iVar4 == 2) {
      fVar15 = ((fVar3 - fVar19) * 0.5 + fVar15) - fVar18;
      goto LAB_14195cf4e;
    }
    if (iVar4 == 3) {
      fVar15 = (fVar3 - fVar19) - fVar18;
      goto LAB_14195cf4e;
    }
  }
  fVar19 = (float)local_1c8 * fVar17;
LAB_14195cf4e:
  fVar18 = fStack_1a4;
  fVar3 = param_1[1];
  iVar4 = *(int *)(param_3 + 0x24);
  fVar17 = fVar3 - (fStack_1a4 + fStack_19c);
  if (iVar4 == 0) {
    fVar16 = fVar17 * local_1c8._4_4_;
  }
  else {
    lVar7 = SWidget::GetDesiredSize(*(undefined8 *)(param_3 + 0x10),local_e0);
    fVar13 = local_1c8._4_4_ * *(float *)(lVar7 + 4);
    fVar16 = fVar17;
    if (fVar13 <= fVar17) {
      fVar16 = fVar13;
    }
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        fVar18 = ((fVar3 - fVar16) * 0.5 + fVar18) - fStack_19c;
      }
      else if (iVar4 == 3) {
        fVar18 = (fVar3 - fVar16) - fStack_19c;
      }
      else {
        fVar16 = fVar17 * local_1c8._4_4_;
      }
    }
  }
  local_1c8 = CONCAT44(fVar16,fVar19);
  local_1b4 = 0x3f800000;
  local_1b0 = fVar15;
  local_1ac = fVar18;
  lVar7 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_3 + 0x10) + 0xd0);
  if (*(char *)(lVar7 + 0x18) == '\0') {
    fVar3 = param_1[2];
    local_188 = local_1c8;
    local_150 = 0x3f800000;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0x3f800000;
    local_140 = fVar15;
    local_13c = fVar18;
    Concatenate<FTransform2D>(&uStack_16c,&local_150,param_1 + 7);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    plVar10 = *(longlong **)(param_3 + 0x18);
    uStack_154 = CONCAT31(uStack_154._1_3_,
                          (byte)uStack_154 ^ (*(byte *)(param_1 + 0xd) ^ (byte)uStack_154) & 1);
    fStack_17c = fVar3 * fVar15 + param_1[3];
    local_178 = fVar3 * fVar18 + param_1[4];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uStack_130 = CONCAT44(fStack_17c,fVar3);
    local_128 = CONCAT44(fVar15,local_178);
    uStack_120 = CONCAT44(uStack_16c,fVar18);
    local_138 = local_188;
    local_a8 = local_168;
    uStack_a4 = uStack_164;
    uStack_a0 = uStack_160;
    uStack_9c = uStack_15c;
    uVar14 = uStack_154;
    fStack_180 = fVar3;
    fStack_174 = fVar15;
    fStack_170 = fVar18;
  }
  else {
    lVar7 = *(longlong *)(param_3 + 0x10);
    if (((*(int *)(lVar7 + 0x118) != 0) && (*(longlong **)(lVar7 + 0x110) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar7 + 0x110) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(lVar7 + 0x118) != 0) {
        plVar10 = *(longlong **)(lVar7 + 0x110);
      }
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_190);
      *(undefined8 *)(lVar7 + 0x100) = local_190;
    }
    uVar8 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_3 + 0x10) + 0xd0);
    local_1c0 = param_1[2];
    local_1bc = param_1[3];
    local_1b8 = param_1[4];
    FGeometry::FGeometry
              (&local_c8,&local_1c8,&local_1b4,uVar8,(undefined8 *)(lVar7 + 0x100),&local_1c0,
               param_1 + 7);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    plVar10 = *(longlong **)(param_3 + 0x18);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_138 = local_c8;
    uStack_130 = uStack_c0;
    local_128 = local_b8;
    uStack_120 = uStack_b0;
    local_158 = (undefined4)local_98;
    uVar14 = (int)((ulonglong)local_98 >> 0x20);
  }
  local_108 = CONCAT44(uVar14,local_158);
  local_118 = local_a8;
  uStack_114 = uStack_a4;
  uStack_110 = uStack_a0;
  uStack_10c = uStack_9c;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  if ((*param_2 & bVar11) != 0) {
    iVar4 = *(int *)(param_2 + 0x130);
    lVar7 = (longlong)iVar4;
    *(int *)(param_2 + 0x130) = iVar4 + 1;
    if (*(int *)(param_2 + 0x134) < iVar4 + 1) {
      TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_2 + 8,iVar4);
    }
    pbVar12 = *(byte **)(param_2 + 0x128);
    if (*(byte **)(param_2 + 0x128) == (byte *)0x0) {
      pbVar12 = param_2 + 8;
    }
    *(undefined8 *)(pbVar12 + lVar7 * 0x48) = local_138;
    *(undefined8 *)(pbVar12 + lVar7 * 0x48 + 8) = uStack_130;
    *(undefined8 *)(pbVar12 + lVar7 * 0x48 + 0x10) = local_128;
    *(undefined8 *)(pbVar12 + lVar7 * 0x48 + 0x10 + 8) = uStack_120;
    pbVar2 = pbVar12 + lVar7 * 0x48 + 0x20;
    *(undefined4 *)pbVar2 = local_118;
    *(undefined4 *)(pbVar2 + 4) = uStack_114;
    *(undefined4 *)(pbVar2 + 8) = uStack_110;
    *(undefined4 *)(pbVar2 + 0xc) = uStack_10c;
    *(undefined8 *)(pbVar12 + lVar7 * 0x48 + 0x30) = local_108;
    *(undefined8 *)(pbVar12 + lVar7 * 0x48 + 0x38) = uVar8;
    *(longlong **)(pbVar12 + lVar7 * 0x48 + 0x40) = plVar10;
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 14195d2f0 CopyToEmpty<FNotificationButtonInfo> body=208 status=ok
// SIG undefined CopyToEmpty<FNotificationButtonInfo>(void)

void TArray<FNotificationButtonInfo,FDefaultAllocator>::CopyToEmpty<FNotificationButtonInfo>
               (longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
              (param_1,param_3 + param_5,param_4);
    lVar2 = *param_1;
    if (param_3 != 0) {
      param_2 = param_2 + 0x30;
      do {
        FText::FText(lVar2,param_2 + -0x30);
        FText::FText(lVar2 + 0x18,param_2 + -0x18);
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined4 *)(lVar2 + 0x38) = 0;
        TBaseDelegate<FSlateBrush_const_*>::operator=((undefined8 *)(lVar2 + 0x30),param_2);
        *(undefined1 *)(lVar2 + 0x40) = *(undefined1 *)(param_2 + 0x10);
        *(undefined1 *)(lVar2 + 0x41) = *(undefined1 *)(param_2 + 0x11);
        *(undefined1 *)(lVar2 + 0x42) = *(undefined1 *)(param_2 + 0x12);
        puVar1 = (undefined1 *)(param_2 + 0x13);
        param_2 = param_2 + 0x48;
        *(undefined1 *)(lVar2 + 0x43) = *puVar1;
        lVar2 = lVar2 + 0x48;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



// FUNCTION 14195d3c0 CreateRaw<FSlateEditableTextLayout> body=107 status=ok
// SIG undefined CreateRaw<FSlateEditableTextLayout>(void)

undefined8 *
TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)operator_new(0x28,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = &PTR_GetPoolName_143f3f4f8;
    puVar1[2] = param_3;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[4] = uVar2;
  }
  return param_1;
}



// FUNCTION 14195d430 FUN_14195d430 body=348 status=ok
// SIG undefined FUN_14195d430(void)

undefined8 * FUN_14195d430(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
    *puVar10 = &PTR_GetPoolName_144d75f88;
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
    *puVar10 = &PTR_GetPoolName_144d75fd0;
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



// FUNCTION 14195d590 FUN_14195d590 body=416 status=ok
// SIG undefined FUN_14195d590(void)

undefined8 *
FUN_14195d590(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar9 = *param_3;
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar12 = param_3[3];
  uVar4 = *param_7;
  uVar5 = *param_6;
  uVar6 = *param_5;
  uVar7 = *param_4;
  puVar14 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_28)
  ;
  plVar8 = (longlong *)puVar14[1];
  uVar15 = *puVar14;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  puVar14 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &PTR_GetPoolName_144d75248;
    puVar14[1] = uVar15;
    puVar14[2] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar14 + 3) = uVar9;
    *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar10;
    *(undefined4 *)(puVar14 + 4) = uVar11;
    *(undefined4 *)((longlong)puVar14 + 0x24) = uVar12;
    *(undefined1 *)(puVar14 + 5) = uVar7;
    *(undefined1 *)((longlong)puVar14 + 0x29) = uVar6;
    *(undefined1 *)((longlong)puVar14 + 0x2a) = uVar5;
    *(undefined1 *)((longlong)puVar14 + 0x2b) = uVar4;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[6] = uVar15;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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



// FUNCTION 14195d730 FUN_14195d730 body=480 status=ok
// SIG undefined FUN_14195d730(void)

undefined8 *
FUN_14195d730(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_48 = 0;
  local_40 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_48,param_4);
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_28);
  plVar4 = (longlong *)puVar6[1];
  uVar7 = *puVar6;
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
  local_58 = 0;
  local_50 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,&local_48);
  puVar6 = (undefined8 *)operator_new(0x40,param_1);
  if (puVar6 != (undefined8 *)0x0) {
    local_68 = 0;
    local_60 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_68,&local_58);
    *puVar6 = &PTR_GetPoolName_144d75208;
    puVar6[1] = uVar7;
    puVar6[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar6 + 3) = local_38;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_34;
    *(undefined4 *)(puVar6 + 4) = uStack_30;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_2c;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar6 + 5,&local_68);
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[7] = uVar7;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_1;
}



// FUNCTION 14195d910 FUN_14195d910 body=348 status=ok
// SIG undefined FUN_14195d910(void)

undefined8 * FUN_14195d910(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
    *puVar10 = &PTR_GetPoolName_144d6a3f0;
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
    *puVar10 = &PTR_GetPoolName_144d6a438;
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



// FUNCTION 14195da70 FUN_14195da70 body=673 status=ok
// SIG undefined FUN_14195da70(void)

int * FUN_14195da70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)iVar11 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar14 = (uint *)param_3[1];
  lVar6 = (longlong)iVar11 * 0x1c;
  _Src = (uint *)(*param_1 + lVar6);
  *_Src = *(uint *)*param_3;
  uVar13 = puVar14[1];
  uVar4 = puVar14[2];
  uVar3 = puVar14[3];
  _Src[1] = *puVar14;
  _Src[2] = uVar13;
  _Src[3] = uVar4;
  _Src[4] = uVar3;
  _Src[5] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x1c + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x1c + 0x14 + *param_1);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x1c + *param_1),_Src,0x14);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar11;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar6 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14195dcec;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *_Src;
    _Src[6] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[5] = *(uint *)((longlong)plVar7 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<int,SWrapBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14195dcec:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 14195dd20 FUN_14195dd20 body=1008 status=ok
// SIG undefined FUN_14195dd20(void)

int * FUN_14195dd20(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *_Src;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool local_res8;
  
  iVar11 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  lVar8 = (longlong)iVar12;
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + lVar8 * 0x18) = *param_3;
  lVar5 = param_3[1];
  *(longlong *)(lVar4 + 8 + lVar8 * 0x18) = lVar5;
  _Src = (ulonglong *)(lVar4 + lVar8 * 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar18 != 1) {
    iVar12 = iVar13;
    if (uVar18 != 0) {
      iVar16 = (int)(*_Src >> 4);
      uVar15 = 0x9e3779b9U - iVar16 ^ iVar16 << 8;
      uVar10 = -(uVar15 + iVar16) ^ uVar15 >> 0xd;
      uVar17 = (iVar16 - uVar15) - uVar10 ^ uVar10 >> 0xc;
      uVar15 = (uVar15 - uVar17) - uVar10 ^ uVar17 << 0x10;
      uVar10 = (uVar10 - uVar15) - uVar17 ^ uVar15 >> 5;
      uVar17 = (uVar17 - uVar15) - uVar10 ^ uVar10 >> 3;
      uVar15 = (uVar15 - uVar17) - uVar10 ^ uVar17 << 10;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar16 = *(int *)((longlong)plVar9 +
                       (((longlong)(int)((uVar10 - uVar15) - uVar17) ^ (ulonglong)(uVar15 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar16 != -1) {
        do {
          iVar12 = iVar16;
          if (*(ulonglong *)(*param_1 + (longlong)iVar16 * 0x18) == *_Src) break;
          iVar16 = *(int *)(*param_1 + 0x10 + (longlong)iVar16 * 0x18);
          iVar12 = iVar13;
        } while (iVar16 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      lVar4 = *param_1;
      plVar9 = *(longlong **)(lVar4 + 8 + (longlong)iVar12 * 0x18);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar12 * 0x18),_Src,0x10);
      iVar11 = *param_2;
      bVar6 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar11 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar4 + 4 + (longlong)iVar11 * 0x18) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_14195e0e7;
    }
  }
  if (3 < uVar18) {
    uVar10 = (uVar18 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar11 = 0x20;
    if (uVar10 != 0) {
      iVar11 = 0x1f - iVar13;
    }
    uVar10 = (uVar18 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar10 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar13 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar15 = -(uVar10 + iVar13) ^ uVar10 >> 0xd;
    uVar18 = (iVar13 - uVar10) - uVar15 ^ uVar15 >> 0xc;
    uVar10 = (uVar10 - uVar18) - uVar15 ^ uVar18 << 0x10;
    uVar15 = (uVar15 - uVar10) - uVar18 ^ uVar10 >> 5;
    uVar18 = (uVar18 - uVar10) - uVar15 ^ uVar15 >> 3;
    uVar10 = (uVar10 - uVar18) - uVar15 ^ uVar18 << 10;
    uVar18 = ((uVar15 - uVar10) - uVar18 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar18;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14195e0e7:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14195e110 GetHandleBeingResizedFromMousePosition<1> body=153 status=ok
// SIG undefined GetHandleBeingResizedFromMousePosition<1>(void)

int SSplitter::GetHandleBeingResizedFromMousePosition<1>
              (float param_1,float param_2,undefined8 param_3,longlong *param_4)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fStack_14;
  
  iVar3 = 1;
  if (1 < (int)param_4[1]) {
    fStack_14 = (float)((ulonglong)param_3 >> 0x20);
    pfVar1 = (float *)(*param_4 + 8);
    lVar2 = 1;
    fVar5 = *pfVar1;
    do {
      fVar4 = pfVar1[-2] * pfVar1[2] + fVar5;
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = pfVar1[5];
      if (((fVar4 - param_2 * 0.5) + param_1 * 0.5 < fStack_14) &&
         (fStack_14 < (fVar5 + param_2 * 0.5) - param_1 * 0.5)) {
        return iVar3 + -1;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      pfVar1 = pfVar1 + 5;
    } while (lVar2 < (int)param_4[1]);
  }
  return -1;
}



// FUNCTION 14195e1b0 GetHandleBeingResizedFromMousePosition<0> body=152 status=ok
// SIG undefined GetHandleBeingResizedFromMousePosition<0>(void)

int SSplitter::GetHandleBeingResizedFromMousePosition<0>
              (float param_1,float param_2,float param_3,longlong *param_4)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = 1;
  if (1 < (int)param_4[1]) {
    pfVar1 = (float *)(*param_4 + 4);
    lVar2 = 1;
    fVar5 = *pfVar1;
    do {
      fVar4 = pfVar1[2] * pfVar1[-1] + fVar5;
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = pfVar1[5];
      if (((fVar4 - param_2 * 0.5) + param_1 * 0.5 < param_3) &&
         (param_3 < (fVar5 + param_2 * 0.5) - param_1 * 0.5)) {
        return iVar3 + -1;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      pfVar1 = pfVar1 + 5;
    } while (lVar2 < (int)param_4[1]);
  }
  return -1;
}



// FUNCTION 14195e250 HeapSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_> body=494 status=ok
// SIG undefined HeapSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_>(void)

void AlgoImpl::
     HeapSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_>
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar7 = iVar9;
    iVar11 = iVar8;
joined_r0x00014195e27a:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar10 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 0x14);
          fVar4 = *(float *)((longlong)param_1 + (longlong)iVar10 * 8 + 4);
          if (fVar3 == fVar4) {
            bVar6 = *(int *)(param_1 + (longlong)iVar9 + 2) < *(int *)(param_1 + iVar10);
          }
          else {
            bVar6 = fVar3 < fVar4;
          }
          if (bVar6) {
            iVar10 = iVar9;
          }
          iVar10 = iVar10 + 1;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar8 * 8 + 4);
        piVar1 = (int *)(param_1 + iVar8);
        fVar4 = *(float *)((longlong)param_1 + (longlong)iVar10 * 8 + 4);
        piVar2 = (int *)(param_1 + iVar10);
        if (fVar3 == fVar4) {
          bVar6 = *piVar1 < *piVar2;
        }
        else {
          bVar6 = fVar3 < fVar4;
        }
        if (bVar6) {
          if (piVar1 != piVar2) {
            uVar5 = *(undefined8 *)piVar1;
            *(undefined8 *)piVar1 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = uVar5;
          }
          iVar9 = iVar10 * 2 + 1;
          iVar8 = iVar10;
          goto joined_r0x00014195e27a;
        }
      }
      iVar9 = iVar7 + -2;
      iVar8 = iVar11 + -1;
      iVar7 = iVar9;
      iVar11 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + param_2;
    do {
      if (param_1 != puVar12) {
        uVar5 = *param_1;
        *param_1 = *puVar12;
        *puVar12 = uVar5;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar7 = iVar8 * 2;
          iVar9 = iVar7 + 1;
          if (iVar7 + 2 < param_2) {
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar7 * 8 + 0x14);
            fVar4 = *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4);
            if (fVar3 == fVar4) {
              bVar6 = *(int *)(param_1 + (longlong)iVar7 + 2) < *(int *)(param_1 + iVar9);
            }
            else {
              bVar6 = fVar3 < fVar4;
            }
            if (bVar6) {
              iVar9 = iVar7;
            }
            iVar9 = iVar9 + 1;
          }
          fVar3 = *(float *)((longlong)param_1 + (longlong)iVar8 * 8 + 4);
          piVar1 = (int *)(param_1 + iVar8);
          fVar4 = *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4);
          piVar2 = (int *)(param_1 + iVar9);
          if (fVar3 == fVar4) {
            bVar6 = *piVar1 < *piVar2;
          }
          else {
            bVar6 = fVar3 < fVar4;
          }
          if (!bVar6) break;
          if (piVar1 != piVar2) {
            uVar5 = *(undefined8 *)piVar1;
            *(undefined8 *)piVar1 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = uVar5;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14195e440 IntroSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_> body=702 status=ok
// SIG undefined IntroSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 (*pauVar6) [16];
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  undefined8 local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    pauVar6 = (undefined1 (*) [16])&local_328;
    do {
      uVar1 = *(undefined8 *)pauVar6[1];
      local_338._0_4_ = (int)uVar1;
      piVar10 = SUB168(*pauVar6,0);
      piVar8 = SUB168(*pauVar6,8);
      lVar4 = ((longlong)piVar8 - (longlong)piVar10 >> 3) + 1;
      piVar9 = piVar10;
      if ((int)local_338 != 0) {
LAB_14195e500:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          piVar10 = piVar9 + (lVar4 >> 1) * 2;
          if (piVar10 != piVar9) {
            uVar2 = *(undefined8 *)piVar10;
            *(undefined8 *)piVar10 = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = uVar2;
          }
          piVar7 = piVar8 + 2;
          piVar5 = piVar9;
LAB_14195e537:
          piVar10 = piVar5 + 2;
          if (piVar10 <= piVar8) goto code_r0x00014195e540;
          goto LAB_14195e566;
        }
        for (; piVar10 = piVar9, piVar7 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -2) {
          while (piVar5 = piVar10, piVar10 = piVar7 + 2, piVar10 <= piVar8) {
            if ((float)piVar5[1] == (float)piVar7[3]) {
              bVar3 = *piVar5 < *piVar10;
            }
            else {
              bVar3 = (float)piVar5[1] < (float)piVar7[3];
            }
            piVar7 = piVar10;
            if (!bVar3) {
              piVar10 = piVar5;
            }
          }
          if (piVar5 != piVar8) {
            uVar1 = *(undefined8 *)piVar5;
            *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = uVar1;
          }
        }
        goto LAB_14195e657;
      }
LAB_14195e648:
      local_338 = uVar1;
      HeapSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_>
                (piVar10,lVar4,param_3,param_4);
LAB_14195e657:
      pauVar6 = (undefined1 (*) [16])(pauVar6[-2] + 8);
    } while ((undefined1 (*) [16])&local_328 <= pauVar6);
  }
  return;
code_r0x00014195e540:
  if ((float)piVar9[1] == (float)piVar5[3]) {
    bVar3 = *piVar9 < *piVar10;
  }
  else {
    bVar3 = (float)piVar9[1] < (float)piVar5[3];
  }
  piVar5 = piVar10;
  if (!bVar3) goto LAB_14195e537;
LAB_14195e566:
  do {
    piVar5 = piVar7;
    piVar7 = piVar5 + -2;
    if (piVar7 <= piVar9) break;
    if ((float)piVar5[-1] == (float)piVar9[1]) {
      bVar3 = *piVar7 < *piVar9;
    }
    else {
      bVar3 = (float)piVar5[-1] < (float)piVar9[1];
    }
  } while (!bVar3);
  if (piVar10 <= piVar7) {
    piVar5 = piVar10;
    if (piVar10 != piVar7) {
      uVar2 = *(undefined8 *)piVar10;
      *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
      *(undefined8 *)piVar7 = uVar2;
    }
    goto LAB_14195e537;
  }
  if (piVar9 != piVar7) {
    uVar2 = *(undefined8 *)piVar9;
    *(undefined8 *)piVar9 = *(undefined8 *)piVar7;
    *(undefined8 *)piVar7 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar7 + (-8 - (longlong)piVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)piVar8 - (longlong)piVar10 & 0xfffffffffffffff8U)) {
    if (piVar10 < piVar8) {
      *(int **)*pauVar6 = piVar10;
      *(int **)(*pauVar6 + 8) = piVar8;
      *(int *)pauVar6[1] = (int)local_338;
      pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 8);
    }
    if (piVar7 <= piVar9 + 2) goto LAB_14195e657;
    piVar8 = piVar5 + -4;
    piVar10 = piVar9;
  }
  else {
    if (piVar9 + 2 < piVar7) {
      *(int **)*pauVar6 = piVar9;
      *(int **)(*pauVar6 + 8) = piVar5 + -4;
      *(int *)pauVar6[1] = (int)local_338;
      pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 8);
    }
    if (piVar8 <= piVar10) goto LAB_14195e657;
  }
  lVar4 = ((longlong)piVar8 - (longlong)piVar10 >> 3) + 1;
  piVar9 = piVar10;
  if ((int)local_338 == 0) goto LAB_14195e648;
  goto LAB_14195e500;
}



// FUNCTION 14195e700 FUN_14195e700 body=336 status=ok
// SIG undefined FUN_14195e700(void)

undefined8 * FUN_14195e700(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x410);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d76420;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x400);
      FUN_141923690(_Dst);
      puVar1[99] = 0;
      *(undefined4 *)(puVar1 + 100) = 0;
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6b] = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
      *_Dst = &PTR__scalar_deleting_destructor__144d72a18;
      puVar1[0x43] = &PTR_FUN_144d695d0;
      puVar1[0x6d] = 0;
      puVar1[0x6e] = 0;
      *(undefined4 *)(puVar1 + 0x6f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x37c) = 0;
      puVar1[0x70] = 0;
      puVar1[0x71] = 0;
      *(undefined4 *)(puVar1 + 0x72) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x394) = 0;
      puVar1[0x74] = 0;
      *(undefined4 *)(puVar1 + 0x75) = 0;
      puVar1[0x76] = 0;
      puVar1[0x77] = 0;
      puVar1[0x78] = 0;
      puVar1[0x79] = 0;
      puVar1[0x7a] = 0;
      puVar1[0x7b] = 0;
      puVar1[0x7c] = 0;
      *(undefined4 *)(puVar1 + 0x7d) = 0;
      puVar1[0x7e] = 0;
      *(undefined4 *)(puVar1 + 0x7f) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195e850 FUN_14195e850 body=127 status=ok
// SIG undefined FUN_14195e850(void)

undefined8 * FUN_14195e850(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x450);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b48;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x440);
      FUN_14195f010(_Dst);
      *_Dst = &PTR_StartProfileThreadUsage_144d68b40;
      puVar1[3] = &PTR_LAB_144d760e0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195e8d0 FUN_14195e8d0 body=230 status=ok
// SIG undefined FUN_14195e8d0(void)

undefined8 * FUN_14195e8d0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x488);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d76430;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x478);
      SBorder::SBorder(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144d72c50;
      puVar1[0x73] = &PTR_FUN_144d72e60;
      FUN_1417efd90(puVar1 + 0x74);
      *(undefined1 *)(puVar1 + 0x7e) = 0;
      puVar1[0x7f] = 0;
      *(undefined4 *)(puVar1 + 0x80) = 0;
      *(undefined2 *)(puVar1 + 0x81) = 0x19;
      puVar1[0x82] = 0;
      *(undefined4 *)(puVar1 + 0x83) = 0;
      puVar1[0x84] = 0;
      puVar1[0x85] = 0;
      FCurveSequence::FCurveSequence(puVar1 + 0x86);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195e9c0 FUN_14195e9c0 body=106 status=ok
// SIG undefined FUN_14195e9c0(void)

undefined8 * FUN_14195e9c0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x5f8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d76490;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x5e8);
      FUN_141961d80(_Dst);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195ea30 NewIntrusiveReferenceController<SNotificationItemExternalImpl> body=138 status=ok
// SIG undefined NewIntrusiveReferenceController<SNotificationItemExternalImpl>(void)

undefined8 *
SharedPointerInternals::NewIntrusiveReferenceController<SNotificationItemExternalImpl>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x550);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d76470;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x540);
      SNotificationItemImpl::SNotificationItemImpl(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144d75318;
      puVar1[0xa8] = 0;
      puVar1[0xa9] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}


