// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a13c10 FUN_140a13c10 body=328 status=ok
// SIG undefined FUN_140a13c10(void)

BADSPACEBASE *
FUN_140a13c10(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (((*(longlong *)(param_1 + 0x7b8) != 0) && (*(char *)(param_1 + 0x790) != '\0')) &&
     (param_2 != (longlong *)0x0)) {
    (**(code **)(*param_2 + 0x308))(param_2,&local_88);
    FUN_140778ce0(&local_78,*(undefined8 *)(param_1 + 0x118),param_2,param_5);
    local_68 = *param_6;
    local_60 = *(undefined4 *)(param_6 + 1);
    local_58 = *param_7;
    local_50 = *(undefined4 *)(param_7 + 1);
    local_40 = local_80;
    local_30 = local_70;
    local_48 = local_88;
    local_38 = local_78;
    FUN_143091410(*(undefined8 *)(param_1 + 0x7b8),&local_38,&local_48,param_8,param_3,param_4,
                  &local_58,&local_68);
    FUN_140a1a6c0(param_1);
    register0x00000020 = (BADSPACEBASE *)0x1;
  }
  return register0x00000020;
}



// FUNCTION 140a13d60 FUN_140a13d60 body=193 status=ok
// SIG undefined FUN_140a13d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a13d60(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0x7b8) != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    local_30 = DAT_1468b5da8;
    local_10 = *(undefined4 *)(param_2 + 1);
    local_48 = _DAT_1468b5d90;
    local_38 = DAT_1468b5da0;
    local_18 = *param_2;
    local_28 = _DAT_1468b5d90;
    local_40 = DAT_1468b5d98;
    local_20 = DAT_1468b5d98;
    FUN_143091410(*(longlong *)(param_1 + 0x7b8),&local_18,&local_28,0,param_3,param_4,&local_38,
                  &local_48);
    FUN_140a1a6c0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140a13e30 FUN_140a13e30 body=145 status=ok
// SIG undefined FUN_140a13e30(void)

ulonglong FUN_140a13e30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined4 param_7)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0x7b8) != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    local_28 = *param_6;
    local_20 = *(undefined4 *)(param_6 + 1);
    local_18 = *param_5;
    local_10 = *(undefined4 *)(param_5 + 1);
    uVar1 = FUN_140a13c10(param_7,*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x118),param_2,
                          param_3,param_4,&local_18,&local_28,param_7);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a13ed0 FUN_140a13ed0 body=215 status=ok
// SIG undefined FUN_140a13ed0(void)

ulonglong FUN_140a13ed0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined4 param_7)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (((*(longlong *)(param_1 + 0x7d8) == 0) || (*(longlong *)(param_1 + 0x7b8) == 0)) ||
     (*(char *)(param_1 + 0x790) == '\0')) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_48 = *param_6;
    local_40 = *(undefined4 *)(param_6 + 1);
    local_38 = *param_5;
    local_30 = *(undefined4 *)(param_5 + 1);
    uVar1 = FUN_142dcd660(*(longlong *)(param_1 + 0x7d8),0);
    uVar2 = FUN_140a13c10(param_1,uVar1,param_2,param_3,param_4,&local_38,&local_48,param_7);
  }
  return uVar2;
}



// FUNCTION 140a13fb0 FUN_140a13fb0 body=1641 status=ok
// SIG undefined FUN_140a13fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140a13fb0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
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
  undefined8 local_res20;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  
  lVar7 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar4 = FWeakObjectPtr::Get(lVar7 + 0x60);
  if (lVar4 == 0) {
    cVar2 = FUN_14071aa90();
    return cVar2;
  }
  FUN_140a22680(param_1,param_2,lVar7);
  cVar2 = FWeakObjectPtr::IsValid(lVar7 + 0x70);
  if (cVar2 != '\0') {
    cVar2 = FUN_14071aa90(param_1,param_2);
    if (((byte)(cVar2 - 1U) < 2) && (*(longlong *)(lVar7 + 0x48) != 0)) {
      FUN_142f96fa0();
    }
    fVar14 = 0.0;
    local_e0 = 0.0;
    fVar17 = 0.0;
    fVar16 = 0.0;
    lVar5 = FWeakObjectPtr::Get(lVar7 + 0x70);
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      local_f8 = _DAT_1468b5d90;
      local_f0 = DAT_1468b5d98;
    }
    else {
      local_f8 = *(undefined8 *)(lVar5 + 0x220);
      local_f0 = *(float *)(lVar5 + 0x228);
    }
    local_108 = local_f8;
    local_100 = local_f0;
    if ((((float)DAT_146294aa0 == *(float *)(lVar7 + 0x9c)) &&
        (DAT_146294aa0._4_4_ == *(float *)(lVar7 + 0xa0))) &&
       (DAT_146294aa8 == *(float *)(lVar7 + 0xa4))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = (**(code **)(*(longlong *)*param_2 + 0x148))();
      fVar16 = 1.0 / *(float *)(lVar5 + 0x7b0);
      fVar17 = ((float)local_108 - *(float *)(lVar7 + 0x9c)) * fVar16;
      fVar14 = (local_100 - *(float *)(lVar7 + 0xa4)) * fVar16;
      fVar16 = (local_108._4_4_ - *(float *)(lVar7 + 0xa0)) * fVar16;
      local_e0 = fVar14;
    }
    *(undefined8 *)(lVar7 + 0x9c) = local_f8;
    *(float *)(lVar7 + 0xa4) = local_f0;
    *(ulonglong *)(lVar7 + 0xa8) = CONCAT44(fVar16,fVar17);
    *(float *)(lVar7 + 0xb0) = local_e0;
    fVar13 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14);
    FUN_140a08430(param_1,&local_118,lVar7);
    if (((local_118 != (float)DAT_146294aa0) || (local_114 != DAT_146294aa0._4_4_)) ||
       (local_110 != DAT_146294aa8)) {
      cVar3 = FUN_140a17ff0(param_1,lVar7,&local_118);
      if (cVar3 != '\0') {
        FUN_140a214c0(param_1,lVar7,&local_118);
      }
      lVar5 = FWeakObjectPtr::Get(lVar7 + 0x68);
      lVar5 = *(longlong *)(lVar5 + 0x168);
      if (lVar5 == 0) {
        local_e0 = DAT_1468b5d98;
        puVar6 = &local_e8;
        local_e8 = _DAT_1468b5d90;
      }
      else {
        puVar6 = &local_f8;
        local_f0 = *(float *)(lVar5 + 0x228);
        local_f8 = *(undefined8 *)(lVar5 + 0x220);
      }
      local_e0 = *(float *)(puVar6 + 1);
      fVar11 = (float)*puVar6 - local_118;
      fVar12 = local_e0 - local_110;
      fVar15 = (float)((ulonglong)*puVar6 >> 0x20) - local_114;
      local_res20 = 0xffffffffffffffff;
      fVar18 = fVar15 * fVar15 + fVar11 * fVar11 + fVar12 * fVar12;
      fVar8 = (float)FUN_142de77e0(param_1 + 0x2c0,*param_2,0,&local_res20);
      local_res20 = 0xffffffffffffffff;
      fVar9 = (float)FUN_142de77e0(param_1 + 0x340,*param_2,0,&local_res20);
      fVar9 = fVar9 + fVar13;
      if (fVar18 <= fVar8 * fVar8) {
        local_res20 = 0xffffffffffffffff;
        fVar10 = (float)FUN_142de77e0(param_1 + 0x240,*param_2,0,&local_res20);
        if ((((ABS(fVar17) <= 0.0001) && (ABS(fVar16) <= 0.0001)) &&
            ((ABS(fVar14) <= 0.0001 && (fVar18 < fVar10 * fVar10)))) ||
           ((0.0 < fVar15 * fVar16 + fVar11 * fVar17 + fVar12 * fVar14 &&
            ((fVar13 < 500.0 || (cVar3 = FWeakObjectPtr::IsValid(lVar7 + 0x88), cVar3 != '\0'))))))
        {
          fVar9 = 0.0;
        }
        else if (fVar10 * fVar10 <= fVar18) {
          fVar9 = (1.0 - (fVar8 - SQRT(fVar18)) / (fVar8 - fVar10)) * (fVar9 - fVar13) + fVar13;
        }
        else {
          fVar9 = (fVar13 / fVar10) * SQRT(fVar18);
        }
      }
      FUN_1409f83f0(lVar4,3,fVar9,0,0,0,0,0,0xc0000000,0,0xbf800000,0);
      return cVar2;
    }
  }
  return '\x02';
}



// FUNCTION 140a14620 FUN_140a14620 body=970 status=ok
// SIG undefined FUN_140a14620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140a14620(longlong param_1,int *param_2,undefined8 *param_3,longlong *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong *plVar14;
  undefined8 uVar15;
  float fVar16;
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
  undefined8 uStack_40;
  
  if (param_4 == (longlong *)0x0) goto LAB_140a149a2;
  lVar7 = FUN_1428dfc70();
  if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140a149a2;
  uVar8 = FUN_141477fa0();
  lVar7 = (**(code **)(*param_4 + 0x628))(param_4,uVar8);
  if ((lVar7 == 0) || (lVar9 = FUN_1405c6c00(), lVar9 == 0)) goto LAB_140a149a2;
  lVar10 = FUN_1413ea8c0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140a149a2;
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
LAB_140a1475c:
    if (*(longlong *)(param_1 + 0x110) == 0) {
LAB_140a147b3:
      if (*(longlong *)(param_1 + 0x128) == 0) {
LAB_140a1480a:
        if (*(longlong *)(param_1 + 0x170) == 0) {
LAB_140a1485e:
          if ((*(longlong *)(param_1 + 0x158) == 0) ||
             (cVar6 = FUN_140eb2a70(lVar7,*(undefined8 *)(lVar9 + 0x220)), cVar6 == '\0')) {
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
          }
          else {
            local_88 = *(undefined8 *)(param_1 + 0x158);
            uStack_80 = *(undefined8 *)(param_1 + 0x160);
            local_98 = _DAT_146865cc0;
            uStack_90 = uRam0000000146865cc8;
          }
          puVar11 = &local_78;
          local_78 = local_98;
          uStack_70 = uStack_90;
          local_68 = local_88;
          uStack_60 = uStack_80;
        }
        else {
          if (*(longlong *)(lVar9 + 0x218) != 0) {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar9 + 0x218) + 0x90);
          }
          cVar6 = FUN_140eb2a70(lVar7,uVar8);
          if (cVar6 == '\0') goto LAB_140a1485e;
          local_88 = *(undefined8 *)(param_1 + 0x170);
          uStack_80 = *(undefined8 *)(param_1 + 0x178);
          puVar11 = &local_98;
          local_98 = _DAT_146865cb0;
          uStack_90 = uRam0000000146865cb8;
        }
        puVar12 = &local_58;
        local_58 = *puVar11;
        uStack_50 = puVar11[1];
        local_48 = puVar11[2];
        uStack_40 = puVar11[3];
      }
      else {
        uVar15 = uVar8;
        if (*(longlong *)(lVar9 + 0x210) != 0) {
          uVar15 = *(undefined8 *)(*(longlong *)(lVar9 + 0x210) + 0x90);
        }
        cVar6 = FUN_140eb2a70(lVar7,uVar15);
        if (cVar6 == '\0') goto LAB_140a1480a;
        local_88 = *(undefined8 *)(param_1 + 0x128);
        uStack_80 = *(undefined8 *)(param_1 + 0x130);
        puVar12 = &local_98;
        local_98 = _DAT_146865ca0;
        uStack_90 = uRam0000000146865ca8;
      }
      puVar11 = &local_78;
      local_78 = *puVar12;
      uStack_70 = puVar12[1];
      local_68 = puVar12[2];
      uStack_60 = puVar12[3];
    }
    else {
      uVar15 = uVar8;
      if (*(longlong *)(lVar9 + 0x208) != 0) {
        uVar15 = *(undefined8 *)(*(longlong *)(lVar9 + 0x208) + 0x90);
      }
      cVar6 = FUN_140eb2a70(lVar7,uVar15);
      if (cVar6 == '\0') goto LAB_140a147b3;
      local_88 = *(undefined8 *)(param_1 + 0x110);
      uStack_80 = *(undefined8 *)(param_1 + 0x118);
      puVar11 = &local_98;
      local_98 = _DAT_146865c90;
      uStack_90 = uRam0000000146865c98;
    }
    piVar13 = (int *)&local_58;
    local_58 = *puVar11;
    uStack_50 = puVar11[1];
    local_48 = puVar11[2];
    uStack_40 = puVar11[3];
  }
  else {
    uVar15 = uVar8;
    if (*(longlong *)(lVar9 + 0x200) != 0) {
      uVar15 = *(undefined8 *)(*(longlong *)(lVar9 + 0x200) + 0x90);
    }
    cVar6 = FUN_140eb2a70(lVar7,uVar15);
    if (cVar6 == '\0') goto LAB_140a1475c;
    local_88 = *(undefined8 *)(param_1 + 0xf8);
    uStack_80 = *(undefined8 *)(param_1 + 0x100);
    piVar13 = (int *)&local_98;
    local_98 = _DAT_146865c80;
    uStack_90 = uRam0000000146865c88;
  }
  iVar1 = *piVar13;
  iVar2 = piVar13[1];
  iVar3 = piVar13[2];
  iVar4 = piVar13[3];
  local_48 = *(undefined8 *)(piVar13 + 4);
  uStack_40 = *(undefined8 *)(piVar13 + 6);
  if (((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) {
LAB_140a149a2:
    local_98 = *param_3;
    uStack_90 = param_3[1];
    FUN_1405cd530(param_1,param_2,&local_98,param_4,param_5);
    return param_2;
  }
  plVar14 = (longlong *)(**(code **)(*param_4 + 0x678))(param_4);
  if (plVar14 != (longlong *)0x0) {
    uVar8 = UScrollBox::GetPrivateStaticClass();
    lVar7 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar8);
    if ((lVar7 != 0) && (fVar16 = (float)FUN_142d19a40(lVar7), 0.0 < fVar16)) goto LAB_140a149a2;
  }
  *param_5 = local_48;
  param_5[1] = uStack_40;
  *(undefined1 *)(param_5 + 2) = 1;
  *param_2 = iVar1;
  param_2[1] = iVar2;
  param_2[2] = iVar3;
  param_2[3] = iVar4;
  return param_2;
}



// FUNCTION 140a149f0 FUN_140a149f0 body=136 status=ok
// SIG undefined FUN_140a149f0(void)

void FUN_140a149f0(undefined8 param_1,char param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_140a09850();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14149b100();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (param_2 != (char)plVar2[0x125])) {
      *(char *)(plVar2 + 0x125) = param_2;
      (**(code **)(*plVar2 + 0x260))(plVar2);
      FUN_140a20420(param_1);
    }
  }
  return;
}



// FUNCTION 140a14a80 FUN_140a14a80 body=7 status=ok
// SIG undefined FUN_140a14a80(void)

void FUN_140a14a80(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x579) = param_2;
  return;
}



// FUNCTION 140a14a90 set_IconAngle body=9 status=ok
// SIG undefined set_IconAngle(void)

void uhx::glues::UGEmoteWheelButton_Glue_obj::set_IconAngle(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x778) = param_2;
  return;
}



// FUNCTION 140a14ab0 FUN_140a14ab0 body=33 status=ok
// SIG undefined FUN_140a14ab0(void)

void FUN_140a14ab0(longlong param_1,undefined8 param_2,byte param_3,undefined1 param_4)

{
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xfe;
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) | param_3 ^ 1;
  *(undefined8 *)(param_1 + 0x308) = param_2;
  *(undefined1 *)(param_1 + 0x310) = param_4;
  return;
}



// FUNCTION 140a14ae0 FUN_140a14ae0 body=101 status=ok
// SIG undefined FUN_140a14ae0(void)

void FUN_140a14ae0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x490) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x458);
    *(char *)(param_1 + 0x490) = param_2;
    if (lVar1 != 0) {
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      if (param_2 != '\0') {
        FGameplayTagContainer::operator=(&local_28,param_1 + 0x4f0);
      }
      FUN_14076dd40(lVar1,&local_28);
    }
  }
  return;
}



// FUNCTION 140a14b50 FUN_140a14b50 body=126 status=ok
// SIG undefined FUN_140a14b50(void)

void FUN_140a14b50(longlong param_1,undefined4 param_2)

{
  longlong local_res8 [4];
  
  if ((*(longlong *)(param_1 + 0x230) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x230) + 600) != 0)) {
    FUN_140a09920(param_1,local_res8,1);
    if (local_res8[0] != 0) {
      FUN_1405aaa50(local_res8[0],*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 600),param_2,0,4,
                    0);
      if (local_res8[0] != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 140a14bd0 FUN_140a14bd0 body=283 status=ok
// SIG undefined FUN_140a14bd0(void)

void FUN_140a14bd0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  longlong local_res8 [4];
  
  *(undefined4 *)(param_1 + 0x3bc) = param_2;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar2 = FUN_1423407b0();
    if (lVar2 == 0) goto LAB_140a14c7b;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = UWorld::GetWorldSettings(lVar2,0,1);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    uVar3 = UWorld::GetWorldSettings(lVar2,0,1);
    fVar4 = (float)FUN_14222dcf0(uVar3);
    fVar1 = 1.0;
    if (0.0001 < fVar4) {
      fVar1 = 1.0 / fVar4;
    }
    *(float *)(param_1 + 0x3bc) = fVar1 * *(float *)(param_1 + 0x3bc);
  }
LAB_140a14c7b:
  if ((*(longlong *)(param_1 + 0x230) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x230) + 600) != 0)) {
    FUN_140a09920(param_1,local_res8,1);
    if (local_res8[0] != 0) {
      FUN_1405aaa50(local_res8[0],*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 600),param_2,0,4,
                    0);
      if (local_res8[0] != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 140a14cf0 FUN_140a14cf0 body=64 status=ok
// SIG undefined FUN_140a14cf0(void)

void FUN_140a14cf0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    if (param_2 < 2) {
      param_2 = 1;
    }
    *(int *)((longlong)param_1 + 0x1a4) = param_2;
  }
  return;
}



// FUNCTION 140a14d30 FUN_140a14d30 body=53 status=ok
// SIG undefined FUN_140a14d30(void)

void FUN_140a14d30(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    uVar1 = FUN_142df36d0(*param_2);
    FUN_142df2ca0(*(undefined8 *)(param_1 + 0x2b0),uVar1);
    return;
  }
  return;
}



// FUNCTION 140a14d70 FUN_140a14d70 body=97 status=ok
// SIG undefined FUN_140a14d70(void)

void FUN_140a14d70(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_1423407b0();
    if (plVar1 != (longlong *)0x0) goto LAB_140a14d96;
  }
  else {
LAB_140a14d96:
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined4 *)(lVar2 + 0x8c8);
      goto LAB_140a14db4;
    }
  }
  uVar3 = 0;
LAB_140a14db4:
  FUN_142d48b30(param_1 + 0x498,uVar3,param_2,0);
  return;
}



// FUNCTION 140a14de0 FUN_140a14de0 body=3160 status=ok
// SIG undefined FUN_140a14de0(void)

void FUN_140a14de0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  longlong local_res8;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  if (*(longlong *)(param_1 + 0xb30) == 0) {
    return;
  }
  cVar3 = FUN_14122ed50();
  if (cVar3 != '\0') {
    *(undefined2 *)(param_1 + 0xb60) = 0;
    *(undefined4 *)(param_1 + 0xb64) = 0;
    FUN_142fb0a20(param_1 + 0x650);
    return;
  }
  cVar3 = FUN_1430d8750(*(undefined8 *)(param_1 + 0xb30));
  if (cVar3 != '\0') {
    lVar8 = *(longlong *)(param_1 + 0xb30);
    if (*(longlong *)(lVar8 + 0x4d8) == 0) {
      return;
    }
    if (*(longlong *)(lVar8 + 0x4e0) == 0) {
      return;
    }
    cVar3 = FUN_140a1fde0(param_1,lVar8);
    if (cVar3 == '\0') {
      return;
    }
    FUN_140a103a0(param_1,lVar8,param_1 + 0xc78);
    return;
  }
  fVar12 = (float)FUN_140a09700(param_1);
  bVar9 = ABS(fVar12) < 0.0001;
  if (((bVar9) || ((byte)(*(char *)(param_1 + 0xbf8) - 2U) < 2)) ||
     (cVar3 = FUN_141214120(*(undefined8 *)(param_1 + 0xb30)), cVar3 == '\0')) {
    *(undefined2 *)(param_1 + 0xb60) = 0;
    *(undefined4 *)(param_1 + 0xb64) = 0;
    FUN_142fb0a20(param_1 + 0x650);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0xb50);
    if (((*(longlong *)(param_1 + 0xb58) != 0) && (*plVar1 != 0)) &&
       ((cVar3 = FUN_14058b1c0(*(longlong *)(param_1 + 0xb58) + 0x650), cVar3 != '\0' ||
        (*(undefined1 *)(param_1 + 0xb61) = 1, *(char *)(param_1 + 0xb60) != '\0')))) {
      cVar4 = *(char *)(param_1 + 0xb60);
      fVar12 = 2.0;
      if (cVar3 == '\0') {
LAB_140a14fc5:
        if (cVar4 != '\0') {
          if ((*(longlong *)(param_1 + 0xb58) == 0) || (*plVar1 == 0)) {
LAB_140a14ffe:
            cVar3 = FUN_140a03d30(plVar1);
            if (cVar3 == '\0') goto LAB_140a1500e;
          }
          else {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb58) + 0xaf0);
            if (lVar8 != 0) {
              fVar12 = *(float *)(lVar8 + 0x40);
            }
            if (*(float *)(*plVar1 + 0x790) - *(float *)(param_1 + 0xb64) < fVar12)
            goto LAB_140a14ffe;
          }
          *(undefined1 *)(param_1 + 0xb60) = 0;
        }
      }
      else {
        if (*(char *)(param_1 + 0xb61) == '\0') {
          if ((*(longlong *)(param_1 + 0xb58) != 0) && (*plVar1 != 0)) {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb58) + 0xaf0);
            if (lVar8 == 0) {
              fVar14 = 2.0;
            }
            else {
              fVar14 = *(float *)(lVar8 + 0x40);
            }
            if (fVar14 <= *(float *)(*plVar1 + 0x790) - *(float *)(param_1 + 0xb64))
            goto LAB_140a14fba;
          }
          goto LAB_140a14fc5;
        }
LAB_140a14fba:
        *(bool *)(param_1 + 0xb60) = cVar4 == '\0';
      }
LAB_140a1500e:
      if (*(char *)(param_1 + 0xb60) != cVar4) {
        *(undefined1 *)(param_1 + 0xb61) = 0;
        *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(*plVar1 + 0x790);
      }
    }
  }
  if (*(int *)(param_1 + 0xc58) < 1) {
LAB_140a15069:
    fVar12 = -2.0;
    bVar11 = true;
  }
  else {
    fVar12 = *(float *)(*(longlong *)(param_1 + 0xc50) + 0xc);
    bVar11 = false;
    if (fVar12 < -1.0) goto LAB_140a15069;
  }
  bVar11 = !bVar11;
  if ((((*(longlong *)(param_1 + 0xaf0) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xaf0) + 0x80), lVar8 != 0)) &&
      (cVar3 = FUN_142c48f60(lVar8,*(undefined8 *)(param_1 + 0xb48),*(undefined8 *)(param_1 + 0xb30)
                            ), cVar3 == '\0')) ||
     (((cVar3 = FUN_142fa53c0(param_1), cVar3 == '\0' && (!bVar11)) &&
      (cVar3 = UAIBlueprintHelperLibrary::IsValidAIRotation(param_1 + 0xc20), cVar3 == '\0')))) {
    iVar5 = FUN_142eb7a00(param_1);
    if (*(char *)(param_1 + 0xc71) == '\0') {
      FUN_141215170(*(undefined8 *)(param_1 + 0xb30));
      *(undefined1 *)(param_1 + 0xc71) = 1;
    }
    if (iVar5 == 0) {
      FUN_1409fb4b0(param_1);
      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_110 = DAT_1468b5d98;
      FUN_14123f290(*(undefined8 *)(param_1 + 0xb30),&local_118);
    }
    FUN_140a027b0(param_1,*(float *)(param_1 + 0xc74) <= 0.0);
    FUN_14123e120(*(undefined8 *)(param_1 + 0xb30),0);
    return;
  }
  local_res8 = param_1;
  FUN_1409f7160(&local_res8,&local_108);
  FUN_140a1b4a0(param_1);
  fVar14 = local_104 * local_104 + local_108 * local_108;
  if (fVar14 == 1.0) {
    local_128 = local_108;
    local_124 = local_104;
    if (local_100 == 0.0) {
      local_120 = local_100;
    }
    else {
LAB_140a15297:
      local_120 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar14) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      local_124 = auVar17._0_4_;
      local_124 = local_124 + local_124 * (0.5 - fVar14 * 0.5 * local_124 * local_124);
      local_124 = local_124 + local_124 * (0.5 - fVar14 * 0.5 * local_124 * local_124);
      local_128 = local_108 * local_124;
      local_124 = local_104 * local_124;
      goto LAB_140a15297;
    }
    local_128 = DAT_1468b5d90;
    local_120 = DAT_1468b5d98;
    local_124 = DAT_1468b5d94;
  }
  cVar3 = FUN_14122ebf0(*(undefined8 *)(param_1 + 0xb30));
  if (cVar3 != '\0') {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
    if (lVar8 == 0) {
      uVar15 = (undefined4)DAT_1468b5da0;
      uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_110 = (float)DAT_1468b5da8;
    }
    else {
      local_d8 = *(float *)(lVar8 + 0x210);
      fStack_d4 = *(float *)(lVar8 + 0x214);
      fStack_d0 = *(float *)(lVar8 + 0x218);
      fStack_cc = *(float *)(lVar8 + 0x21c);
      auVar17._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_d4);
      auVar17._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_d8);
      auVar17._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_d0);
      auVar17._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_cc);
      iVar5 = movmskps((int)*(longlong *)(param_1 + 0xb30),auVar17);
      if (iVar5 != 0) {
        *(float *)(lVar8 + 0x250) = local_d8;
        *(float *)(lVar8 + 0x254) = fStack_d4;
        *(float *)(lVar8 + 600) = fStack_d0;
        *(float *)(lVar8 + 0x25c) = fStack_cc;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_d8,&local_118);
        *(undefined8 *)(lVar8 + 0x260) = *puVar6;
        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar15 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
      local_110 = (float)*(undefined4 *)(lVar8 + 0x268);
    }
    local_118 = CONCAT44(uVar13,uVar15);
    local_f8 = local_118;
    local_f0 = local_110;
    uVar7 = FRotator::GetInverse(&local_f8,&local_118);
    FRotator::RotateVector(uVar7,&local_e8,&local_128);
    local_118 = local_e8;
    local_110 = (float)local_e0;
    FUN_14123f290(*(undefined8 *)(param_1 + 0xb30),&local_118);
    FUN_1412401f0(*(undefined8 *)(param_1 + 0xb30),0);
    FUN_141240250(*(undefined8 *)(param_1 + 0xb30),0);
    return;
  }
  if (((ABS(local_128) <= 0.0001) && (ABS(local_124) <= 0.0001)) &&
     ((ABS(local_120) <= 0.0001 && (!bVar11)))) {
    cVar3 = FUN_1407c3030(*(undefined8 *)(param_1 + 0x278));
    if ((cVar3 != '\0') && (*(char *)(param_1 + 0xc71) == '\0')) {
      FUN_141215170(*(undefined8 *)(param_1 + 0xb30));
      *(undefined1 *)(param_1 + 0xc71) = 1;
    }
    fVar12 = (float)FUN_140a09700(param_1);
    if ((fVar12 != 0.0) || (0.0 < *(float *)(param_1 + 0xc74))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    FUN_140a027b0(param_1,uVar7);
    FUN_14123e120(*(undefined8 *)(param_1 + 0xb30),0);
    return;
  }
  *(undefined1 *)(param_1 + 0xc71) = 0;
  if ((*(int *)(param_1 + 0xc58) < 1) || (*(char *)(*(longlong *)(param_1 + 0xc50) + 5) == '\0')) {
    if (*(longlong *)(param_1 + 0xaf0) == 0) {
      fVar14 = 4000.0;
    }
    else {
      fVar14 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x34);
      if (fVar14 <= 0.0001) {
        bVar2 = false;
        goto LAB_140a154a7;
      }
    }
    fVar19 = (float)FUN_140a09700(param_1);
    bVar2 = fVar14 <= fVar19;
  }
  else {
    bVar2 = true;
  }
LAB_140a154a7:
  cVar3 = FUN_1409fc8e0(param_1,&local_108);
  if ((cVar3 == '\0') || (!bVar2)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_14123e120(*(undefined8 *)(param_1 + 0xb30),uVar7);
  cVar3 = FUN_140a21610(param_1,&local_108);
  if (cVar3 != '\0') {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0xaf0);
  if (lVar8 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = local_124 * *(float *)(param_1 + 0x778) + local_128 * *(float *)(param_1 + 0x774) +
             local_120 * *(float *)(param_1 + 0x77c) < -*(float *)(lVar8 + 0x124);
  }
  iVar5 = *(int *)(param_1 + 0xc58);
  if (((0 < iVar5) && (*(char *)(*(longlong *)(param_1 + 0xc50) + 4) != '\0')) || (bVar2)) {
    bVar9 = false;
    if (0 < iVar5) {
      if ((*(char *)(*(longlong *)(param_1 + 0xc50) + 6) == '\0') &&
         (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    if (((*(char *)(param_1 + 0xb60) != '\0') || (bVar9)) ||
       ((bVar10 != false && (cVar3 = FUN_140a0b4f0(param_1,param_2), cVar3 != '\0')))) {
      uVar15 = 0xbf800000;
    }
    else {
      uVar15 = 0x3f800000;
    }
    FUN_141240250(*(undefined8 *)(param_1 + 0xb30),uVar15);
    if (*(longlong *)(param_1 + 0xaf0) == 0) {
      fVar14 = 4500.0;
    }
    else {
      fVar14 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x38);
    }
    fVar19 = (float)FUN_140a09700(param_1);
    if (fVar19 <= fVar14) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 1.0;
    }
    fVar19 = fVar14;
    if ((0 < *(int *)(param_1 + 0xc58)) &&
       (fVar19 = *(float *)(*(longlong *)(param_1 + 0xc50) + 0x58), fVar19 <= fVar14)) {
      fVar19 = fVar14;
    }
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x148))();
    if (((lVar8 == 0) || (cVar3 = FUN_14254a160(lVar8), cVar3 == '\0')) && (0.0 < fVar19)) {
      bVar9 = false;
      if (0 < *(int *)(param_1 + 0xc58)) {
        if ((*(char *)(*(longlong *)(param_1 + 0xc50) + 6) == '\0') &&
           (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0')) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
      }
      if (((*(char *)(param_1 + 0xb60) == '\0') && (!bVar9)) &&
         (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x6a0), lVar8 != 0)) {
        if (*(longlong *)(param_1 + 0xaf0) == 0) {
          fVar14 = 1000.0;
        }
        else {
          fVar14 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x108);
        }
        fVar14 = fVar14 * fVar19;
        fVar19 = (float)(**(code **)(*(longlong *)(lVar8 + 0x5b8) + 0x10))();
        local_118 = CONCAT44(local_124 * fVar19 * fVar14,local_128 * fVar19 * fVar14);
        local_110 = local_120 * fVar19 * fVar14;
        FUN_1430ccb30(*(undefined8 *)(param_1 + 0xb30),&local_118,0);
      }
    }
    bVar9 = false;
  }
  else if (bVar9) {
    FUN_1409fb4b0(param_1);
  }
  else {
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x54) != '\0')) {
      fVar14 = (float)FUN_1409fc270(param_1,bVar11,&local_108,bVar10,param_2);
    }
    else {
      fVar19 = *(float *)(param_1 + 0x6f0);
      if (0.0 < fVar19) {
        bVar2 = false;
        if (0 < iVar5) {
          if ((*(char *)(*(longlong *)(param_1 + 0xc50) + 6) == '\0') &&
             (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        if ((*(char *)(param_1 + 0xb60) != '\0') || (bVar2)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        fVar14 = (float)FUN_140a09700(param_1);
        fVar14 = fVar14 / fVar19;
        if (bVar2) {
          fVar14 = -fVar14;
        }
      }
      else {
        if (*(char *)(param_1 + 0xc71) == '\0') {
          FUN_141215170(*(undefined8 *)(param_1 + 0xb30));
          *(undefined1 *)(param_1 + 0xc71) = 1;
        }
        fVar14 = 0.0;
      }
    }
    if (-1.0 <= fVar14) {
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      FUN_141240250(*(undefined8 *)(param_1 + 0xb30),fVar14);
    }
    else {
      FUN_141240250(*(undefined8 *)(param_1 + 0xb30),0xbf800000);
    }
  }
  FUN_140a027b0(param_1,bVar9);
  cVar3 = FUN_140a0b850(param_1);
  if (bVar11) {
    if (cVar3 != '\0') {
      fVar12 = -fVar12;
    }
    lVar8 = *(longlong *)(param_1 + 0xb30);
  }
  else {
    local_118 = *(undefined8 *)(param_1 + 0x774);
    local_110 = *(float *)(param_1 + 0x77c);
    if (((*(int *)(param_1 + 0xc58) < 1) || (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0'))
       && ((bVar10 == false || (cVar4 = FUN_140a0b4f0(param_1,param_2), cVar4 == '\0')))) {
      bVar9 = false;
      fVar12 = local_118._4_4_;
      fVar14 = (float)local_118;
      fVar19 = local_110;
    }
    else {
      bVar9 = true;
      fVar12 = local_118._4_4_ * -1.0;
      fVar14 = (float)local_118 * -1.0;
      fVar19 = local_110 * -1.0;
    }
    fVar18 = (fVar19 * DAT_1464aa798._4_4_ - fVar12 * DAT_1464aa7a0) * local_128;
    fVar16 = (fVar14 * DAT_1464aa7a0 - fVar19 * (float)DAT_1464aa798) * local_124;
    fVar19 = fVar12 * local_124 + fVar14 * local_128 + fVar19 * local_120;
    fVar14 = (fVar12 * (float)DAT_1464aa798 - fVar14 * DAT_1464aa798._4_4_) * local_120;
    fVar12 = -1.0;
    if ((-1.0 <= fVar19) && (fVar12 = fVar19, 1.0 <= fVar19)) {
      fVar12 = 1.0;
    }
    lVar8 = *(longlong *)(param_1 + 0xb30);
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    fVar12 = (fVar12 * 57.295776) / *(float *)(lVar8 + 0xd98);
    if (0.0 < fVar18 + fVar16 + fVar14 == bVar9) {
      fVar12 = -fVar12;
    }
    if ((cVar3 != '\0') && (bVar9 == false)) {
      fVar12 = -fVar12;
    }
  }
  FUN_1412401f0(lVar8,fVar12);
  return;
}



// FUNCTION 140a15a40 FUN_140a15a40 body=508 status=ok
// SIG undefined FUN_140a15a40(void)

void FUN_140a15a40(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_res10;
  
  if (param_2 == 0) {
    return;
  }
  FUN_14058f880(&local_res10,param_2 + 0x378);
  lVar8 = param_1 + -0x178;
  FUN_1409ff840(lVar8,&local_res10);
  if (*(char *)(param_1 + 0xd3) == '\0') {
    cVar2 = *(char *)(param_1 + 0xd2);
  }
  else {
    plVar4 = (longlong *)FUN_140a09850(lVar8);
    if (((plVar4 == (longlong *)0x0) ||
        (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4), plVar4 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar2 == '\0')) goto LAB_140a15ae1;
    cVar2 = (**(code **)(*plVar4 + 0x778))(plVar4);
  }
  if (cVar2 != '\0') {
    FUN_1405a9540(param_2,4);
  }
LAB_140a15ae1:
  lVar5 = FUN_140a08d60(lVar8);
  if (lVar5 != 0) {
    FUN_140c58440(lVar5,&local_res10);
  }
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (plVar4 = (longlong *)FUN_140a09850(lVar8), plVar4 != (longlong *)0x0)) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x288) != 0) &&
       (plVar6 = (longlong *)(**(code **)(plVar4[0x8c] + 0x10))(plVar4 + 0x8c,(char)plVar4[0xd2]),
       plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x420))(plVar6);
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x288));
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x270) != 0) {
      uVar7 = FUN_1430bf3b0();
      lVar8 = *plVar4;
      uVar3 = (**(code **)(lVar8 + 0x858))(plVar4);
      lVar8 = (**(code **)(lVar8 + 0x7f8))(plVar4,uVar7,uVar3);
      if (lVar8 != 0) {
        lVar5 = FUN_1430bf3b0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x270));
        }
      }
    }
  }
  if (local_res10 != 0) {
    FUN_1405a53f0();
  }
  return;
}



// FUNCTION 140a15c40 FUN_140a15c40 body=108 status=ok
// SIG undefined FUN_140a15c40(void)

void FUN_140a15c40(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) && (param_1[0xe5] != 0)) {
    iVar2 = 0;
    iVar1 = *(int *)(param_1[0xe5] + 0x78);
    if (0 < iVar1) {
      do {
        (**(code **)(*param_1 + 0x568))(param_1,iVar2,param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}



// FUNCTION 140a15cb0 FUN_140a15cb0 body=130 status=ok
// SIG undefined FUN_140a15cb0(void)

void FUN_140a15cb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (((plVar1 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0xb8))) &&
     (iVar2 = 0, 0 < *(int *)(param_1 + 0xb8))) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar3 + *(longlong *)(param_1 + 0xb0)) != 0) {
        (**(code **)(*plVar1 + 0x568))(plVar1,iVar2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 140a15d40 FUN_140a15d40 body=107 status=ok
// SIG undefined FUN_140a15d40(void)

void FUN_140a15d40(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (iVar1 = 0, 0 < (int)param_2[1])) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *param_2) != 0) {
        (**(code **)(*param_1 + 0x568))(param_1,iVar1);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 140a15db0 OnDeletePolygons body=83 status=ok
// SIG undefined OnDeletePolygons(void)

void UEditableMeshAdapter::OnDeletePolygons(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxmission\\public\\MissionObjectiveReference.h"
             ,0x2e,L"Pure virtual not implemented (%s)",
             L"FMissionObjectiveReferenceBase::SetMissionClass");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxmission\\public\\MissionObjectiveReference.h"
             ,0x2e,L"Pure virtual not implemented (%s)",
             L"FMissionObjectiveReferenceBase::SetMissionClass");
  return;
}



// FUNCTION 140a15e10 FUN_140a15e10 body=98 status=ok
// SIG undefined FUN_140a15e10(void)

void FUN_140a15e10(longlong *param_1,char param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    if ((char)param_1[0x5a] != param_2) {
      *(char *)(param_1 + 0x5a) = param_2;
      (**(code **)(*param_1 + 0x5b0))(param_1);
    }
    if (param_3 != 0) {
      param_1[0x5c] = param_3;
    }
    FUN_140a21c80(param_1);
  }
  return;
}



// FUNCTION 140a15e80 FUN_140a15e80 body=24 status=ok
// SIG undefined FUN_140a15e80(void)

void FUN_140a15e80(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x700) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x2e0) = param_2;
  }
  FUN_140a11950();
  return;
}



// FUNCTION 140a15ea0 FUN_140a15ea0 body=8 status=ok
// SIG undefined FUN_140a15ea0(void)

void FUN_140a15ea0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2e0) = param_2;
  return;
}



// FUNCTION 140a15eb0 FUN_140a15eb0 body=83 status=ok
// SIG undefined FUN_140a15eb0(void)

void FUN_140a15eb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1428dfc70();
    lVar2 = param_2;
    while (lVar2 != lVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x30);
      if (lVar2 == 0) {
        return;
      }
    }
    (**(code **)(*param_1 + 0x548))(param_1,param_2);
  }
  return;
}



// FUNCTION 140a15f10 FUN_140a15f10 body=471 status=ok
// SIG undefined FUN_140a15f10(void)

void FUN_140a15f10(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 (*param_4) [12],
                  undefined8 param_5,undefined4 param_6,longlong param_7,float param_8,float param_9
                  )

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  float fVar12;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_1 != (longlong *)0x0) {
    uVar7 = FUN_1413cb880();
    lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar7);
    if (lVar8 != 0) {
      FRotator::Quaternion(param_5);
      auVar5 = *param_4;
      if (*(longlong *)(lVar8 + 0x268) == 0) {
        *(longlong *)(lVar8 + 0x1f8) = param_2;
        uVar9 = 0;
        *(undefined8 *)(lVar8 + 0x200) = param_3;
        *(undefined8 *)(lVar8 + 0x220) = local_38;
        *(undefined8 *)(lVar8 + 0x228) = uStack_30;
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar5;
        *(undefined1 (*) [16])(lVar8 + 0x230) = auVar4;
        auVar3._4_4_ = param_6;
        auVar3._0_4_ = param_6;
        auVar3._8_4_ = param_6;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(lVar8 + 0x240) = auVar3;
        if (param_7 == 0) {
          param_7 = *(longlong *)(lVar8 + 0x1d0);
        }
        *(longlong *)(lVar8 + 0x250) = param_7;
        if (0.0 <= param_8) {
          if (30.0 <= param_8) {
            param_8 = 30.0;
          }
        }
        else {
          param_8 = 0.0;
        }
        *(float *)(lVar8 + 600) = param_8;
        fVar12 = 0.0;
        if ((0.0 <= param_9) && (fVar12 = param_9, 30.0 <= param_9)) {
          fVar12 = 30.0;
        }
        *(float *)(lVar8 + 0x25c) = fVar12;
        plVar11 = (longlong *)(lVar8 + 0x208);
        *(undefined4 *)(lVar8 + 0x210) = 0;
        if (0x7fffffff < *(uint *)(lVar8 + 0x214)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11);
        }
        if (param_2 != 0) {
          iVar1 = *(int *)(param_2 + 0x78);
          iVar2 = *(int *)(lVar8 + 0x210);
          iVar6 = iVar2 + iVar1;
          *(int *)(lVar8 + 0x210) = iVar6;
          if (*(int *)(lVar8 + 0x214) < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + (longlong)iVar2 * 8),0,(longlong)iVar1 * 8);
          uVar10 = uVar9;
          if (0 < iVar1) {
            do {
              lVar8 = *plVar11;
              uVar7 = UStaticMesh::GetMaterial(param_2,uVar9);
              *(undefined8 *)(lVar8 + uVar10 * 8) = uVar7;
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar10 = uVar10 + 1;
            } while ((longlong)uVar10 < (longlong)iVar1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a160f0 FUN_140a160f0 body=362 status=ok
// SIG undefined FUN_140a160f0(void)

void FUN_140a160f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,float param_6,float param_7)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  
  if (*(longlong *)(param_1 + 0x268) == 0) {
    *(longlong *)(param_1 + 0x1f8) = param_2;
    *(undefined8 *)(param_1 + 0x200) = param_3;
    uVar7 = param_4[1];
    *(undefined8 *)(param_1 + 0x220) = *param_4;
    *(undefined8 *)(param_1 + 0x228) = uVar7;
    uVar7 = param_4[3];
    uVar8 = 0;
    *(undefined8 *)(param_1 + 0x230) = param_4[2];
    *(undefined8 *)(param_1 + 0x238) = uVar7;
    uVar7 = param_4[5];
    puVar6 = &param_5;
    *(undefined8 *)(param_1 + 0x240) = param_4[4];
    *(undefined8 *)(param_1 + 0x248) = uVar7;
    if (param_5 == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x1d0);
    }
    *(undefined8 *)(param_1 + 0x250) = *puVar6;
    if (0.0 <= param_6) {
      fVar10 = param_6;
      if (30.0 <= param_6) {
        fVar10 = 30.0;
      }
    }
    else {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 600) = fVar10;
    fVar10 = 0.0;
    if ((0.0 <= param_7) && (fVar10 = param_7, 30.0 <= param_7)) {
      fVar10 = 30.0;
    }
    plVar1 = (longlong *)(param_1 + 0x208);
    *(float *)(param_1 + 0x25c) = fVar10;
    *(undefined4 *)(param_1 + 0x210) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x214)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    }
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x210);
      iVar3 = *(int *)(param_2 + 0x78);
      iVar5 = iVar2 + iVar3;
      *(int *)(param_1 + 0x210) = iVar5;
      if (*(int *)(param_1 + 0x214) < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)iVar3 * 8);
      uVar9 = uVar8;
      if (0 < iVar3) {
        do {
          lVar4 = *plVar1;
          uVar7 = UStaticMesh::GetMaterial(param_2,uVar8);
          *(undefined8 *)(lVar4 + uVar9 * 8) = uVar7;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)iVar3);
      }
    }
  }
  return;
}



// FUNCTION 140a16260 FUN_140a16260 body=150 status=ok
// SIG undefined FUN_140a16260(void)

void FUN_140a16260(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_14076b8e0();
  if (param_2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2 != *(longlong *)(param_1 + 0x6c8))) {
      *(longlong *)(param_1 + 0x6c8) = param_2;
      FUN_140c33e70(param_2);
      plVar1 = *(longlong **)(param_1 + 0x6c8);
      uVar4 = APostProcessVolume::GetPrivateStaticClass();
      uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      *(undefined8 *)(param_1 + 0x6d0) = uVar4;
    }
  }
  return;
}



// FUNCTION 140a16300 FUN_140a16300 body=930 status=ok
// SIG undefined FUN_140a16300(void)

void FUN_140a16300(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  float local_78;
  float fStack_74;
  float local_70;
  undefined1 local_68 [8];
  float local_60;
  
  if (*(longlong *)(param_1 + 0xb30) == 0) {
    FUN_142fb4700();
    return;
  }
  if ((((*(longlong *)(param_1 + 0xb48) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0xb48) + 0x758) != '\0')) &&
      (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) &&
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))(), lVar6 != 0)) {
    iVar3 = *(int *)(param_1 + 0xc58);
    lVar12 = (longlong)iVar3;
    fVar14 = *(float *)(lVar6 + 0x790);
    fVar1 = *(float *)(lVar6 + 0x7b0);
    if (iVar3 != 0) {
      iVar11 = 0;
      fVar2 = *(float *)(*(longlong *)(param_1 + 0xc50) + 0x54);
      if ((fVar2 <= 0.0) || (fVar14 <= fVar2)) {
        bVar13 = 1;
      }
      else {
        bVar13 = 0;
      }
      lVar8 = 0;
      iVar9 = 0;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar9 + 1;
        if (lVar8 < lVar12) {
          pfVar7 = (float *)(*(longlong *)(param_1 + 0xc50) + 0x54 + lVar8 * 0x60);
          do {
            if ((*pfVar7 <= 0.0) || (fVar14 <= *pfVar7)) {
              bVar4 = 1;
            }
            else {
              bVar4 = 0;
            }
            if (bVar13 != bVar4) break;
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 1;
            pfVar7 = pfVar7 + 0x18;
          } while (lVar8 < lVar12);
        }
        if (bVar13 != 0) {
          if (iVar11 != iVar9) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x60 + *(longlong *)(param_1 + 0xc50)),
                       (void *)((longlong)iVar9 * 0x60 + *(longlong *)(param_1 + 0xc50)),
                       (longlong)(iVar10 - iVar9) * 0x60);
          }
          iVar11 = iVar11 + (iVar10 - iVar9);
        }
        bVar13 = bVar13 ^ 1;
        iVar9 = iVar10;
      } while (lVar8 < lVar12);
      *(int *)(param_1 + 0xc58) = iVar11;
      if (0 < iVar3 - iVar11) {
        FUN_140a203b0(param_1);
      }
    }
    FUN_1409fd8f0(param_1,fVar14);
    *(float *)(param_1 + 0xc74) = *(float *)(param_1 + 0xc74) - fVar1;
    if ((*(longlong *)(param_1 + 0xb30) == 0) || (*(longlong *)(param_1 + 0xb38) == 0)) {
      FUN_140a14de0(param_1,fVar14);
    }
    else {
      FUN_142fa2760(param_1,&local_78);
      if (((local_78 != 0.0) || (fStack_74 != 0.0)) || (local_70 != 0.0)) {
        local_60 = local_70;
        (**(code **)(**(longlong **)(param_1 + 0xb38) + 0x578))
                  (*(longlong **)(param_1 + 0xb38),local_68,0);
      }
    }
    FUN_140a1ecd0(param_1 + 0xb68,fVar1);
    cVar5 = FUN_14058b1c0(param_1 + 0x650);
    if (cVar5 != '\0') {
      *(undefined4 *)(param_1 + 0xcac) = *(undefined4 *)(lVar6 + 0x790);
    }
    if ((*(longlong *)(param_1 + 0xb30) == 0) || (cVar5 = FUN_14122ed50(), cVar5 != '\0')) {
      *(undefined4 *)(param_1 + 0xb28) = 0;
      *(undefined1 *)(param_1 + 0xb2c) = 0;
    }
    else {
      cVar5 = FUN_14058b1c0(param_1 + 0x650);
      if (*(char *)(param_1 + 0xb10) != '\0') {
        if ((cVar5 != '\0') && (*(char *)(param_1 + 0xb2c) == '\0')) {
          *(float *)(param_1 + 0xb28) = *(float *)(param_1 + 0xb14) + *(float *)(param_1 + 0xb28);
        }
        *(char *)(param_1 + 0xb2c) = cVar5;
        if (cVar5 == '\0') {
          fVar14 = *(float *)(param_1 + 0xb28) - fVar1 * *(float *)(param_1 + 0xb20);
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
        }
        else {
          fVar14 = fVar1 * *(float *)(param_1 + 0xb18) + *(float *)(param_1 + 0xb28);
        }
        *(float *)(param_1 + 0xb28) = fVar14;
        if (*(float *)(param_1 + 0xb1c) <= fVar14 && fVar14 != *(float *)(param_1 + 0xb1c)) {
          *(undefined4 *)(param_1 + 0xb28) = 0;
          *(undefined1 *)(param_1 + 0xb2c) = 0;
          FUN_140a1b340(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a166b0 FUN_140a166b0 body=17 status=ok
// SIG undefined FUN_140a166b0(void)

void FUN_140a166b0(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xfb;
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) | param_2 << 2;
  return;
}



// FUNCTION 140a166d0 FUN_140a166d0 body=723 status=ok
// SIG undefined FUN_140a166d0(void)

void FUN_140a166d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,float param_8,
                  undefined4 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res20 [8];
  float local_98;
  float fStack_94;
  float local_88;
  
  fVar6 = param_8;
  fVar13 = 0.0;
  if ((0.0 < param_8) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))();
    if (lVar7 != 0) {
      fVar13 = fVar6 + *(float *)(lVar7 + 0x790);
    }
  }
  fVar12 = -1.0;
  if ((0.0 < param_4) && (plVar5 = *(longlong **)(param_1 + 0xb30), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x578))(plVar5,&param_8,local_res20);
    fVar12 = (param_8 + param_4) * (param_8 + param_4);
  }
  fVar3 = *(float *)(param_3 + 1);
  uVar1 = *param_2;
  uVar2 = *param_3;
  fVar11 = (float)((ulonglong)uVar2 >> 0x20);
  fVar4 = *(float *)(param_2 + 1);
  FUN_1409fd740((undefined8 *)(param_1 + 0xc20));
  *(undefined8 *)(param_1 + 0xc20) = uVar1;
  *(float *)(param_1 + 0xc28) = fVar4;
  local_88 = (float)uVar2;
  if (((local_88 != (float)DAT_146294aa0) || (fVar11 != DAT_146294aa0._4_4_)) ||
     (fVar3 != DAT_146294aa8)) {
    local_98 = (float)uVar1;
    fStack_94 = (float)((ulonglong)uVar1 >> 0x20);
    *(ulonglong *)(param_1 + 0xc2c) = CONCAT44(fStack_94 - fVar11,local_98 - local_88);
    *(float *)(param_1 + 0xc34) = fVar4 - fVar3;
    fVar3 = *(float *)(param_1 + 0xc30);
    fVar4 = *(float *)(param_1 + 0xc2c);
    fVar11 = *(float *)(param_1 + 0xc34);
    fVar8 = fVar4 * fVar4 + fVar3 * fVar3 + fVar11 * fVar11;
    if (1e-08 < fVar8) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      *(float *)(param_1 + 0xc2c) = fVar4 * fVar9;
      *(float *)(param_1 + 0xc30) = fVar3 * fVar9;
      *(float *)(param_1 + 0xc34) = fVar11 * fVar9;
    }
    *(undefined4 *)(param_1 + 0xc40) = param_9;
  }
  *(float *)(param_1 + 0xc38) = fVar12;
  *(float *)(param_1 + 0xc3c) = fVar13;
  FUN_1409f83f0(param_1,4,param_5,param_6,param_7,0,param_10,0,0xc0000000,0,fVar6,0);
  return;
}



// FUNCTION 140a169b0 FUN_140a169b0 body=7 status=ok
// SIG undefined FUN_140a169b0(void)

void FUN_140a169b0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x491) = param_2;
  return;
}



// FUNCTION 140a169c0 FUN_140a169c0 body=46 status=ok
// SIG undefined FUN_140a169c0(void)

void FUN_140a169c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_140b7fe10();
  if (lVar4 != 0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined8 *)(lVar4 + 0xb10) = *param_2;
    *(undefined8 *)(lVar4 + 0xb18) = uVar1;
    *(undefined8 *)(lVar4 + 0xb20) = uVar2;
    *(undefined8 *)(lVar4 + 0xb28) = uVar3;
  }
  return;
}



// FUNCTION 140a169f0 FUN_140a169f0 body=135 status=ok
// SIG undefined FUN_140a169f0(void)

void FUN_140a169f0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  plVar2 = *(longlong **)(param_1 + 0x8d0);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x8d8) * 0x3a;
  if (plVar2 != plVar3) {
    while (*plVar2 != param_2) {
      plVar2 = plVar2 + 0x3a;
      if (plVar2 == plVar3) {
        return;
      }
    }
    if (plVar2 != (longlong *)0x0) {
      plVar2[2] = param_3;
      puVar1 = (undefined8 *)FUN_1409fb780(param_1,local_18,plVar2);
      *(undefined8 *)((longlong)plVar2 + 0x1ac) = *puVar1;
      *(undefined4 *)((longlong)plVar2 + 0x1b4) = *(undefined4 *)(puVar1 + 1);
      plVar2[0x37] = *(longlong *)((longlong)plVar2 + 0x1c4);
      *(undefined4 *)(plVar2 + 0x38) = *(undefined4 *)((longlong)plVar2 + 0x1cc);
    }
  }
  return;
}



// FUNCTION 140a16a80 FUN_140a16a80 body=68 status=ok
// SIG undefined FUN_140a16a80(void)

void FUN_140a16a80(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x8d0);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x8d8) * 0x3a;
  if (plVar1 != plVar2) {
    while (*plVar1 != param_2) {
      plVar1 = plVar1 + 0x3a;
      if (plVar1 == plVar2) {
        return;
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_1409f6ab0(plVar1 + 3,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140a16ad0 FUN_140a16ad0 body=560 status=ok
// SIG undefined FUN_140a16ad0(void)

void FUN_140a16ad0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  lVar11 = *(longlong *)(param_1 + 0x8d0);
  lVar12 = (longlong)*(int *)(param_1 + 0x8d8) * 0x1d0 + lVar11;
  if (lVar11 != lVar12) {
    puVar10 = (undefined8 *)(lVar11 + 0x1ac);
    do {
      *(longlong *)((longlong)puVar10 + -0x19c) = param_2;
      if (param_2 == 0) {
        fVar4 = *(float *)(param_1 + 0x230);
        fVar5 = *(float *)(param_1 + 0x234);
        fVar6 = *(float *)(param_1 + 0x238);
        fVar1 = *(float *)(param_1 + 0x710);
        fVar2 = *(float *)(param_1 + 0x714);
        fVar3 = *(float *)(param_1 + 0x718);
        iVar7 = rand();
        iVar8 = rand();
        iVar9 = rand();
        fStack_a4 = ((float)iVar8 * 6.103702e-05 - 1.0) * fVar2 * fVar5;
        local_a0 = ((float)iVar7 * 6.103702e-05 - 1.0) * fVar3 * fVar6;
        local_a8 = (((float)iVar9 * 3.051851e-05 + (float)iVar9 * 3.051851e-05) - 1.0) *
                   fVar1 * fVar4;
      }
      else {
        local_a8 = *(float *)(param_2 + 0x220) - *(float *)(param_1 + 0x220);
        fStack_a4 = *(float *)(param_2 + 0x224) - *(float *)(param_1 + 0x224);
        local_a0 = *(float *)(param_2 + 0x228) - *(float *)(param_1 + 0x228);
      }
      lVar11 = lVar11 + 0x1d0;
      *puVar10 = CONCAT44(fStack_a4,local_a8);
      *(float *)(puVar10 + 1) = local_a0;
      *(undefined8 *)((longlong)puVar10 + 0xc) = puVar10[3];
      *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(puVar10 + 4);
      puVar10 = puVar10 + 0x3a;
    } while (lVar11 != lVar12);
  }
  return;
}



// FUNCTION 140a16d00 FUN_140a16d00 body=699 status=ok
// SIG undefined FUN_140a16d00(void)

void FUN_140a16d00(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1409f6ab0(param_1 + 0x740);
  lVar3 = *(longlong *)(param_1 + 0x8d0);
  lVar4 = (longlong)*(int *)(param_1 + 0x8d8) * 0x1d0 + lVar3;
  if (lVar3 != lVar4) {
    puVar2 = (undefined4 *)(lVar3 + 0x18c);
    do {
      *(undefined1 *)(puVar2 + -0x5d) = *param_2;
      *(undefined1 *)((longlong)puVar2 + -0x173) = param_2[1];
      *(undefined1 *)((longlong)puVar2 + -0x172) = param_2[2];
      *(undefined1 *)((longlong)puVar2 + -0x171) = param_2[3];
      *(undefined8 *)(puVar2 + -0x5c) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar2 + -0x59) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(puVar2 + -0x57) = *(undefined8 *)(param_2 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(puVar2 + -0x55) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(puVar2 + -0x53) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(puVar2 + -0x51) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(puVar2 + -0x4f) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(puVar2 + -0x4d) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(puVar2 + -0x4b) = uVar1;
      *(undefined8 *)(puVar2 + -0x49) = *(undefined8 *)(param_2 + 0x50);
      uVar1 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(puVar2 + -0x47) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(puVar2 + -0x45) = uVar1;
      *(undefined8 *)(puVar2 + -0x43) = *(undefined8 *)(param_2 + 0x68);
      puVar2[-0x41] = *(undefined4 *)(param_2 + 0x70);
      puVar2[-0x40] = *(undefined4 *)(param_2 + 0x74);
      puVar2[-0x3f] = *(undefined4 *)(param_2 + 0x78);
      *(undefined1 *)(puVar2 + -0x3d) = param_2[0x80];
      *(undefined1 *)((longlong)puVar2 + -0xf3) = param_2[0x81];
      *(undefined1 *)((longlong)puVar2 + -0xf2) = param_2[0x82];
      *(undefined1 *)((longlong)puVar2 + -0xf1) = param_2[0x83];
      *(undefined8 *)(puVar2 + -0x3c) = *(undefined8 *)(param_2 + 0x84);
      *(undefined8 *)(puVar2 + -0x39) = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(puVar2 + -0x37) = *(undefined8 *)(param_2 + 0x98);
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      *(undefined8 *)(puVar2 + -0x35) = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(puVar2 + -0x33) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(puVar2 + -0x31) = *(undefined8 *)(param_2 + 0xb0);
      *(undefined8 *)(puVar2 + -0x2f) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 200);
      *(undefined8 *)(puVar2 + -0x2d) = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 *)(puVar2 + -0x2b) = uVar1;
      *(undefined8 *)(puVar2 + -0x29) = *(undefined8 *)(param_2 + 0xd0);
      uVar1 = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(puVar2 + -0x27) = *(undefined8 *)(param_2 + 0xd8);
      *(undefined8 *)(puVar2 + -0x25) = uVar1;
      *(undefined8 *)(puVar2 + -0x23) = *(undefined8 *)(param_2 + 0xe8);
      puVar2[-0x21] = *(undefined4 *)(param_2 + 0xf0);
      puVar2[-0x20] = *(undefined4 *)(param_2 + 0xf4);
      puVar2[-0x1f] = *(undefined4 *)(param_2 + 0xf8);
      *(undefined1 *)(puVar2 + -0x1d) = param_2[0x100];
      *(undefined1 *)((longlong)puVar2 + -0x73) = param_2[0x101];
      *(undefined1 *)((longlong)puVar2 + -0x72) = param_2[0x102];
      *(undefined1 *)((longlong)puVar2 + -0x71) = param_2[0x103];
      *(undefined8 *)(puVar2 + -0x1c) = *(undefined8 *)(param_2 + 0x104);
      *(undefined8 *)(puVar2 + -0x19) = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)(puVar2 + -0x17) = *(undefined8 *)(param_2 + 0x118);
      uVar1 = *(undefined8 *)(param_2 + 0x128);
      *(undefined8 *)(puVar2 + -0x15) = *(undefined8 *)(param_2 + 0x120);
      *(undefined8 *)(puVar2 + -0x13) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x138);
      *(undefined8 *)(puVar2 + -0x11) = *(undefined8 *)(param_2 + 0x130);
      *(undefined8 *)(puVar2 + -0xf) = uVar1;
      lVar3 = lVar3 + 0x1d0;
      uVar1 = *(undefined8 *)(param_2 + 0x148);
      *(undefined8 *)(puVar2 + -0xd) = *(undefined8 *)(param_2 + 0x140);
      *(undefined8 *)(puVar2 + -0xb) = uVar1;
      *(undefined8 *)(puVar2 + -9) = *(undefined8 *)(param_2 + 0x150);
      uVar1 = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)(puVar2 + -7) = *(undefined8 *)(param_2 + 0x158);
      *(undefined8 *)(puVar2 + -5) = uVar1;
      *(undefined8 *)(puVar2 + -3) = *(undefined8 *)(param_2 + 0x168);
      puVar2[-1] = *(undefined4 *)(param_2 + 0x170);
      *puVar2 = *(undefined4 *)(param_2 + 0x174);
      puVar2[1] = *(undefined4 *)(param_2 + 0x178);
      *(undefined1 *)(puVar2 + 3) = param_2[0x180];
      puVar2 = puVar2 + 0x74;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 140a16fc0 FUN_140a16fc0 body=13 status=ok
// SIG undefined FUN_140a16fc0(void)

void FUN_140a16fc0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x558) = param_2;
  }
  return;
}



// FUNCTION 140a16fd0 FUN_140a16fd0 body=226 status=ok
// SIG undefined FUN_140a16fd0(void)

void FUN_140a16fd0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar2 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x60) != 0)) {
    cVar1 = FUN_14059ee90(param_2);
    if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x390))) {
      lVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x388) + 0x410))();
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x7c) != 0) {
          FUN_1405aaa50(*param_2,*(undefined8 *)(lVar2 + 0x60));
        }
        if (*(longlong *)(lVar3 + 0x80) != 0) {
          FUN_1405aaa50(*param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a170c0 FUN_140a170c0 body=400 status=ok
// SIG undefined FUN_140a170c0(void)

void FUN_140a170c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_res18 [2];
  
  FUN_140a11ee0();
  plVar6 = (longlong *)*param_1;
  uVar8 = (ulonglong)(int)param_1[1];
  plVar1 = plVar6 + uVar8;
  if (plVar6 != plVar1) {
    do {
      if (*plVar6 != 0) {
        FUN_1405ac930();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    plVar6 = (longlong *)*param_1;
  }
  uVar7 = (uint)uVar8;
  while (uVar7 != 0) {
    if (*plVar6 != 0) {
      FUN_1405a53f0();
      *plVar6 = 0;
    }
    plVar6 = plVar6 + 1;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  lVar3 = DAT_1468536c8;
  if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
     ((param_2 != 0 &&
      ((*(longlong *)(param_2 + 0x120) != 0 || (lVar4 = FUN_1423407b0(param_2), lVar4 != 0)))))) {
    lVar4 = 4;
    do {
      lVar5 = *(longlong *)(param_2 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_2);
      }
      FUN_14059ce50(lVar3 + 8,&local_res8,lVar5,0);
      FUN_1409ff840(param_2,&local_res8);
      FUN_14058f880(local_res18,&local_res8);
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      FIoRequest::operator=(*param_1 + (longlong)iVar2 * 8,local_res18);
      if (local_res18[0] != 0) {
        FUN_1405a53f0();
        local_res18[0] = 0;
      }
      if (local_res8 != 0) {
        FUN_1405a53f0();
        local_res8 = 0;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 140a17250 FUN_140a17250 body=1642 status=ok
// SIG undefined FUN_140a17250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a17250(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  int iVar14;
  float fVar15;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  
  FUN_140a1a850();
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x31c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x310,0);
  }
  plVar4 = (longlong *)FUN_140a09850(param_1);
  if ((((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 0x10) & 1) == 0)) &&
      (DAT_1468536c6 == '\0')) &&
     ((DAT_1468536c5 != '\0' && (local_res8 = DAT_1468536c8, DAT_1468536c8 != 0)))) {
    bVar13 = 0;
    do {
      cVar3 = FUN_14307eaa0(plVar4,bVar13,param_1);
      if (cVar3 != '\0') {
        uVar5 = FUN_1430bf3b0();
        lVar6 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,bVar13);
        if (lVar6 == 0) {
LAB_140a1736f:
          lVar6 = 0;
        }
        else {
          lVar7 = FUN_1430bf3b0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140a1736f;
        }
        uVar5 = FUN_1430bdfe0();
        lVar7 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,bVar13);
        if (lVar7 == 0) {
LAB_140a173c9:
          lVar7 = 0;
        }
        else {
          lVar8 = FUN_1430bdfe0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140a173c9;
        }
        uVar5 = UUGStartScreenUW::GetPrivateStaticClass();
        lVar8 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,bVar13);
        if (lVar8 == 0) {
LAB_140a17423:
          lVar8 = 0;
        }
        else {
          lVar9 = UUGStartScreenUW::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140a17423;
        }
        uVar5 = FUN_1430c20f0();
        lVar9 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,bVar13);
        if (lVar9 == 0) {
LAB_140a1747d:
          lVar9 = 0;
        }
        else {
          lVar10 = FUN_1430c20f0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140a1747d;
        }
        if ((((lVar6 != 0) || (lVar7 != 0)) || (lVar8 != 0)) || (lVar9 != 0)) {
          local_c8 = 0xffffffff;
          uStack_c0 = 0xffffffff;
          local_b8 = 0xffffffff;
          uStack_b0 = 0xffffffff;
          FWeakObjectPtr::operator=(&local_c8,lVar6);
          FWeakObjectPtr::operator=(&uStack_c0,lVar7);
          FWeakObjectPtr::operator=(&local_b8,lVar8);
          FWeakObjectPtr::operator=(&uStack_b0,lVar9);
          iVar14 = *(int *)(param_1 + 0x318);
          *(int *)(param_1 + 0x318) = iVar14 + 1;
          if (*(int *)(param_1 + 0x31c) < iVar14 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x310,iVar14);
          }
          puVar12 = (undefined4 *)((longlong)iVar14 * 0x20 + *(longlong *)(param_1 + 0x310));
          *puVar12 = (undefined4)local_c8;
          puVar12[1] = local_c8._4_4_;
          puVar12[2] = (undefined4)uStack_c0;
          puVar12[3] = uStack_c0._4_4_;
          puVar12[4] = (undefined4)local_b8;
          puVar12[5] = local_b8._4_4_;
          puVar12[6] = (undefined4)uStack_b0;
          puVar12[7] = uStack_b0._4_4_;
        }
      }
      bVar13 = bVar13 + 1;
    } while (bVar13 < 8);
    lVar7 = FUN_140a08d60(param_1);
    lVar6 = local_res8;
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x1b8)) {
      lVar8 = 0;
      do {
        lVar9 = *(longlong *)(param_1 + 0x1b0);
        if (*(longlong *)(lVar8 + 8 + lVar9) != 0) {
          if (*(char *)(param_1 + 0x24b) == '\0') {
            if (*(char *)(param_1 + 0x249) != '\0') goto LAB_140a175d7;
LAB_140a175df:
            if (*(char *)(param_1 + 0x24b) == '\0') {
              cVar3 = *(char *)(param_1 + 0x249);
LAB_140a1761d:
              if (cVar3 != '\0') goto LAB_140a17871;
            }
            else {
              plVar4 = (longlong *)FUN_140a09850(param_1);
              if ((plVar4 != (longlong *)0x0) &&
                 (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4),
                 plVar4 != (longlong *)0x0)) {
                cVar3 = (**(code **)(*plVar4 + 0x780))(plVar4);
                goto LAB_140a1761d;
              }
            }
            if (*(int *)(lVar8 + 0x18 + lVar9) < 1) goto LAB_140a17871;
          }
          else {
            plVar4 = (longlong *)FUN_140a09850(param_1);
            if (((plVar4 == (longlong *)0x0) ||
                (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4),
                plVar4 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar3 == '\0')) goto LAB_140a175df;
LAB_140a175d7:
            if (1 < *(int *)(lVar8 + 0x18 + lVar9)) goto LAB_140a175df;
          }
          uVar5 = FUN_140a04190(param_1);
          lVar10 = *(longlong *)(param_1 + 0x120);
          if (lVar10 == 0) {
            lVar10 = FUN_1423407b0(param_1);
          }
          FUN_14059ce50(lVar6 + 8,&local_res8,lVar10,0);
          if (local_res8 != 0) {
            FUN_1409ff840(param_1,&local_res8);
            fVar15 = *(float *)(lVar8 + 0x1c + lVar9);
            if (fVar15 <= 1.0) {
              fVar15 = *(float *)(param_1 + 0x1a8);
            }
            local_c8 = _DAT_1468b5b70;
            uStack_c0 = uRam00000001468b5b78;
            local_a8._4_4_ = fVar15;
            local_a8._0_4_ = fVar15;
            local_a8._8_4_ = fVar15;
            local_a8._12_4_ = 0;
            local_b8 = _DAT_1468b5b80;
            uStack_b0 = uRam00000001468b5b88;
            uVar11 = FUN_14058f8f0(local_60,&local_res8);
            FUN_1405a9a30(uVar11,uVar5,*(undefined8 *)(lVar8 + lVar9));
            FUN_14058f8d0(&local_88,0);
            FUN_140590080(local_80);
            FUN_14058f880(&local_res10,&local_res8);
            FUN_140591350(&local_88,&local_res10);
            if (local_res10 != 0) {
              FUN_1405a53f0();
              local_res10 = 0;
            }
            local_90 = 0;
            local_98 = local_res10;
            lVar10 = FUN_1405a2d20(local_res8,&local_c8,*(undefined8 *)(lVar8 + 8 + lVar9),0,
                                   (int)local_res10,&local_98);
            FUN_1405913a0(local_80,lVar10);
            local_70 = *(undefined4 *)(lVar10 + 0x10);
            FUN_140591060(&local_c8);
            if (local_98 != 0) {
              FMemory::Free();
            }
            local_68 = *(undefined8 *)(lVar8 + 0x10 + lVar9);
            iVar1 = *(int *)(param_1 + 0x308);
            *(int *)(param_1 + 0x308) = iVar1 + 1;
            if (*(int *)(param_1 + 0x30c) < iVar1 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x300,iVar1);
            }
            lVar9 = *(longlong *)(param_1 + 0x300) + (longlong)iVar1 * 0x28;
            FUN_14058f880(lVar9,&local_88);
            FUN_14058f8f0(lVar9 + 8,local_80);
            *(undefined4 *)(lVar9 + 0x18) = local_70;
            *(undefined8 *)(lVar9 + 0x20) = local_68;
            if (*(char *)(param_1 + 0x24b) == '\0') {
              cVar3 = *(char *)(param_1 + 0x24a);
joined_r0x000140a17829:
              if (cVar3 != '\0') {
                *(undefined1 *)(local_res8 + 0x62) = 4;
              }
            }
            else {
              plVar4 = (longlong *)FUN_140a09850(param_1);
              if (((plVar4 != (longlong *)0x0) &&
                  (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4),
                  plVar4 != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar3 != '\0')) {
                cVar3 = (**(code **)(*plVar4 + 0x778))(plVar4);
                goto joined_r0x000140a17829;
              }
            }
            if (lVar7 != 0) {
              FUN_140c58440(lVar7,&local_res8);
            }
            FUN_140591060(local_80);
            if (local_88 != 0) {
              FUN_1405a53f0();
            }
            if (local_res8 != 0) {
              FUN_1405a53f0();
              local_res8 = 0;
            }
          }
        }
LAB_140a17871:
        iVar14 = iVar14 + 1;
        lVar8 = lVar8 + 0x28;
      } while (iVar14 < *(int *)(param_1 + 0x1b8));
    }
  }
  return;
}



// FUNCTION 140a178c0 FUN_140a178c0 body=500 status=ok
// SIG undefined FUN_140a178c0(void)

void FUN_140a178c0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  plVar2 = (longlong *)FUN_140a09850();
  if ((plVar2 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x900))(plVar2,1,0), lVar3 != 0)) {
    uVar6 = 0;
    plVar7 = (longlong *)*param_2;
    uVar8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
    if (plVar7 + (int)param_2[1] < plVar7) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        if ((*plVar7 != 0) && (lVar5 = *(longlong *)(*plVar7 + 0x38), lVar5 != 0)) {
          FUN_1417846f0(plVar2,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar4 = UGCombatTextWidget::GetPrivateStaticClass();
          lVar5 = FUN_1417985e0(uVar4,plVar2,0,0,0,lVar5,0,0,0);
          if (lVar5 != 0) {
            uVar4 = (**(code **)(*plVar2 + 0x148))(plVar2);
            FUN_14234b270(lVar5,uVar4);
            FUN_142382f60(lVar5,lVar3,&DAT_146af29ec);
            iVar1 = *(int *)(param_1 + 0x228);
            *(int *)(param_1 + 0x228) = iVar1 + 1;
            if (*(int *)(param_1 + 0x22c) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x220,iVar1);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar1 * 8) = lVar5;
          }
        }
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    lVar5 = *(longlong *)(param_1 + 800);
    if (lVar5 == 0) {
      lVar5 = FUN_140a19170(param_1);
      *(longlong *)(param_1 + 800) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    FUN_142382f60(lVar5,lVar3,&DAT_146af29ec,*(undefined8 *)(param_1 + 0x1a0));
  }
  return;
}



// FUNCTION 140a17ac0 FUN_140a17ac0 body=836 status=ok
// SIG undefined FUN_140a17ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a17ac0(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_d8;
  float fStack_d4;
  undefined4 local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (((*(longlong *)(param_1 + 0x370) != 0) &&
      (plVar4 = (longlong *)FUN_140a09850(), plVar4 != (longlong *)0x0)) &&
     (lVar5 = (**(code **)(*plVar4 + 0x950))(plVar4), lVar5 != 0)) {
    lVar8 = plVar4[0x2d];
    if (lVar8 == 0) {
      local_f0 = (float)DAT_1468b5d98;
      puVar6 = &local_f8;
      local_f8 = _DAT_1468b5d90;
    }
    else {
      puVar6 = &local_108;
      local_100 = *(undefined4 *)(lVar8 + 0x228);
      local_108 = *(undefined8 *)(lVar8 + 0x220);
    }
    local_e0 = *(float *)(puVar6 + 1);
    local_e8 = *puVar6;
    if (lVar8 == 0) {
      local_f0 = (float)DAT_1468b5da8;
      puVar6 = &local_f8;
      local_f8 = DAT_1468b5da0;
    }
    else {
      local_c8 = *(float *)(lVar8 + 0x210);
      fStack_c4 = *(float *)(lVar8 + 0x214);
      fStack_c0 = *(float *)(lVar8 + 0x218);
      fStack_bc = *(float *)(lVar8 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_c4);
      auVar2._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_c8);
      auVar2._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_c0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_bc);
      iVar3 = movmskps(local_e0,auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar8 + 0x250) = local_c8;
        *(float *)(lVar8 + 0x254) = fStack_c4;
        *(float *)(lVar8 + 600) = fStack_c0;
        *(float *)(lVar8 + 0x25c) = fStack_bc;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_c8,&local_108);
        *(undefined8 *)(lVar8 + 0x260) = *puVar6;
        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      local_100 = *(undefined4 *)(lVar8 + 0x268);
      puVar6 = &local_108;
      local_108 = *(undefined8 *)(lVar8 + 0x260);
    }
    local_d0 = *(undefined4 *)(puVar6 + 1);
    fVar1 = *(float *)(param_1 + 0x378);
    _local_d8 = CONCAT44((float)((ulonglong)*puVar6 >> 0x20) + 90.0,(int)*puVar6);
    pfVar7 = (float *)FRotator::Vector(&local_d8,&local_108);
    local_f0 = (pfVar7[2] * fVar1 + local_e0) - 512.0;
    local_f8 = CONCAT44(pfVar7[1] * fVar1 + local_e8._4_4_,fVar1 * *pfVar7 + (float)local_e8);
    lVar8 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if (lVar8 != 0) {
      local_98 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_70 = 0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_a8 = 0x10000;
      local_a0 = 0;
      local_108 = 0;
      local_a4 = 0;
      local_94 = 0x101;
      local_9c = 0;
      local_a2 = 0;
      FCollisionQueryParams::AddIgnoredActor(&local_b8,plVar4);
      FCollisionQueryParams::AddIgnoredActor(&local_b8,lVar5);
      local_110 = 0;
      local_118 = 0;
      local_120 = &DAT_146aefe68;
      local_128 = &local_b8;
      local_a4 = CONCAT11(local_a4._1_1_,1);
      local_138 = &local_f8;
      local_130 = 3;
      local_a8 = CONCAT22(local_a8._2_2_,1);
      puVar6 = (undefined8 *)FUN_142330010(lVar8,&local_108,1,&local_e8);
      iVar3 = *(int *)(param_1 + 0x3a0);
      *(int *)(param_1 + 0x3a0) = iVar3 + 1;
      if (*(int *)(param_1 + 0x3a4) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x398,iVar3);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar3 * 8) = *puVar6;
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140a17e10 FUN_140a17e10 body=415 status=ok
// SIG undefined FUN_140a17e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a17e10(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    return;
  }
  if (*(char *)(param_1 + 0x328) != '\x02') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x330);
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x328) == '\x03') goto LAB_140a17eee;
    *(undefined1 *)(param_1 + 0x328) = 3;
    local_res18[0] = CONCAT71(local_res18[0]._1_7_,3);
  }
  else {
    if (*(char *)(param_1 + 0x328) == '\x04') goto LAB_140a17eee;
    *(undefined1 *)(param_1 + 0x328) = 4;
    local_res18[0] = CONCAT71(local_res18[0]._1_7_,4);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1d8,local_res18);
LAB_140a17eee:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    FUN_142d8f4f0(*(undefined8 *)(param_1 + 0x118),DAT_146865c28);
    puVar3 = (undefined8 *)FUN_142d979c0(local_28);
    local_res18[0] = 0;
    local_48 = *puVar3;
    uStack_40 = puVar3[1];
    local_38 = *(undefined4 *)(puVar3 + 2);
    uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_30 = *(undefined4 *)(puVar3 + 3);
    uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_50 = DAT_1468b5d98;
    local_58 = _DAT_1468b5d90;
    FUN_142d6e9e0(*(undefined8 *)(param_1 + 0x118),0,*(undefined8 *)(lVar2 + 0xe58),&local_58,0,
                  &local_48);
  }
  return;
}



// FUNCTION 140a17fc0 FUN_140a17fc0 body=38 status=ok
// SIG undefined FUN_140a17fc0(void)

undefined4 FUN_140a17fc0(longlong *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x4e8))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a17ff0 FUN_140a17ff0 body=167 status=ok
// SIG undefined FUN_140a17ff0(void)

bool FUN_140a17ff0(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3;
  if ((-(float)DAT_146294aa0 < fVar1) && (fVar1 < (float)DAT_146294aa0)) {
    fVar3 = param_3[1];
    if ((-DAT_146294aa0._4_4_ < fVar3) && (fVar3 < DAT_146294aa0._4_4_)) {
      fVar2 = param_3[2];
      if ((-DAT_146294aa8 < fVar2) && (fVar2 < DAT_146294aa8)) {
        fVar1 = fVar1 - *(float *)(param_2 + 0x110);
        fVar3 = fVar3 - *(float *)(param_2 + 0x114);
        fVar2 = fVar2 - *(float *)(param_2 + 0x118);
        return *(float *)(param_1 + 0x3c0) * *(float *)(param_1 + 0x3c0) <=
               fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
      }
    }
  }
  return true;
}



// FUNCTION 140a180a0 FUN_140a180a0 body=550 status=ok
// SIG undefined FUN_140a180a0(void)

bool FUN_140a180a0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)(param_2 + 0x1ac);
  if ((-(float)DAT_146294aa0 < fVar6) && (fVar6 < (float)DAT_146294aa0)) {
    if ((-DAT_146294aa0._4_4_ < *(float *)(param_2 + 0x1b0)) &&
       (*(float *)(param_2 + 0x1b0) < DAT_146294aa0._4_4_)) {
      if ((((((-DAT_146294aa8 < *(float *)(param_2 + 0x1b4)) &&
             (*(float *)(param_2 + 0x1b4) < DAT_146294aa8)) &&
            (fVar1 = *(float *)(param_2 + 0x1b8), -(float)DAT_146294aa0 < fVar1)) &&
           ((fVar1 < (float)DAT_146294aa0 && (-DAT_146294aa0._4_4_ < *(float *)(param_2 + 0x1bc)))))
          && (*(float *)(param_2 + 0x1bc) < DAT_146294aa0._4_4_)) &&
         ((-DAT_146294aa8 < *(float *)(param_2 + 0x1c0) &&
          (*(float *)(param_2 + 0x1c0) < DAT_146294aa8)))) {
        fVar3 = *(float *)(param_2 + 0x1c4) - fVar6;
        fVar4 = *(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1b0);
        fVar2 = *(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1b4);
        if (*(float *)(param_1 + 0x8cc) * *(float *)(param_1 + 0x8cc) <=
            fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) {
          fVar6 = fVar6 - fVar1;
          fVar7 = *(float *)(param_2 + 0x1b0) - *(float *)(param_2 + 0x1bc);
          fVar8 = *(float *)(param_2 + 0x1b4) - *(float *)(param_2 + 0x1c0);
          fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
          fVar2 = DAT_1468b5d90;
          fVar3 = DAT_1468b5d94;
          fVar4 = DAT_1468b5d98;
          if (1e-08 < fVar5) {
            fVar4 = 1.0 / fVar5;
            fVar2 = fVar6 * fVar4;
            fVar3 = fVar7 * fVar4;
            fVar4 = fVar8 * fVar4;
          }
          return fVar5 <= (*(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1bc)) * fVar3 +
                          (*(float *)(param_2 + 0x1c4) - fVar1) * fVar2 +
                          (*(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1c0)) * fVar4;
        }
      }
    }
  }
  return true;
}



// FUNCTION 140a18310 FUN_140a18310 body=73 status=ok
// SIG undefined FUN_140a18310(void)

void FUN_140a18310(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x3b9) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    FUN_1405ad830(DAT_1468536c8,param_1 + 0x360);
    *(undefined1 *)(param_1 + 0x3b9) = 0;
  }
  return;
}



// FUNCTION 140a18360 FUN_140a18360 body=750 status=ok
// SIG undefined FUN_140a18360(void)

longlong FUN_140a18360(char param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 local_res10;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar3 = *(longlong *)(param_2 + 0xe8);
  lVar1 = *(longlong *)(lVar3 + 0x4c0);
  if ((lVar1 != 0) && (*(longlong *)(param_2 + 0xf0) != 0)) {
    uVar6 = 0;
    if ((*(longlong *)(param_2 + 0x40) == 0) || (lVar3 = FHardwareCursor::GetHandle(), lVar3 == 0))
    {
      if (*(longlong *)(param_2 + 0x38) != 0) {
        lVar3 = 0;
        local_res10 = 0;
        if (*(longlong *)(param_2 + 0x98) != 0) {
          (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x928))();
          if (((byte)(param_1 - 1U) < 2) && (*(longlong *)(param_2 + 0xc0) != 0)) {
            if (*(longlong *)(param_2 + 0xf0) != 0) {
              FUN_140a15c40();
            }
            uVar6 = 1;
          }
          else {
            FUN_140a15cb0(param_2);
          }
          local_res10 = CONCAT44(local_res10._4_4_,0x1020202);
          FUN_142382f60(*(undefined8 *)(param_2 + 0xf0),lVar1,&local_res10,
                        *(undefined8 *)(param_2 + 0x98));
          FUN_142398770(*(undefined8 *)(param_2 + 0xf0),param_2 + 0x50,0,0,0);
          FUN_142398ec0(*(undefined8 *)(param_2 + 0xf0),1);
          goto LAB_140a18608;
        }
      }
    }
    else if (*(char *)(param_2 + 0x1c) == '\0') {
      local_b0 = 0xbf800000;
      local_d8 = 0;
      local_b4 = 0;
      local_e8 = (longlong *)0x0;
      uStack_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_ac = 0x3f800000;
      FWeakObjectPtr::operator=(local_50,0);
      plVar5 = *(longlong **)(param_2 + 0xe8);
      local_a0 = *(undefined8 *)(param_2 + 0x98);
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_c8 = 1;
      local_98 = 1;
      local_58 = 0;
      local_b4 = 0x3f800000;
      local_e8 = plVar5;
      local_d0 = lVar3;
      local_60 = lVar1;
      if (*(longlong *)(param_2 + 0xe0) != 0) {
        puVar4 = (undefined8 *)FName::FName(&local_res10,L"SpawnedLootCallback",1);
        FWeakObjectPtr::operator=(local_50,*(undefined8 *)(param_2 + 0xe0));
        local_48 = *puVar4;
        plVar5 = *(longlong **)(param_2 + 0xe8);
      }
      lVar3 = (**(code **)(*plVar5 + 0x148))();
      if ((lVar3 != 0) && (lVar3 = FUN_140b5b830(lVar3), lVar3 != 0)) {
        *(undefined1 *)(param_2 + 0x25) = 1;
        iVar2 = FUN_140b50b70(lVar3,&local_e8);
        if (iVar2 == -1) {
          *(undefined1 *)(param_2 + 0x25) = 0;
          *param_3 = 1;
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_70);
          if (local_90 != 0) {
            FMemory::Free();
          }
          lVar3 = FUN_1409f5880(&uStack_e0);
          return lVar3;
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_70);
      if (local_90 != 0) {
        FMemory::Free();
      }
      FUN_1409f5880(&uStack_e0);
LAB_140a18608:
      lVar3 = FUN_140a1e740(param_2);
      if (*(longlong *)(param_2 + 0xe0) == 0) {
        return lVar3;
      }
      lVar3 = FUN_140a0c500(*(longlong *)(param_2 + 0xe0),uVar6,1);
      return lVar3;
    }
  }
  *param_3 = 1;
  return lVar3;
}



// FUNCTION 140a18650 FUN_140a18650 body=2820 status=ok
// SIG undefined FUN_140a18650(void)

void FUN_140a18650(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  int *piVar18;
  int *piVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffee8;
  uint uVar23;
  ulonglong uVar22;
  undefined4 uVar24;
  int local_e8;
  int local_e4;
  longlong local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  int local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80 [4];
  undefined8 local_60;
  undefined4 local_54;
  
  uVar23 = (uint)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  if (param_1 == 0) {
    return;
  }
  iVar5 = FUN_1428cf800();
  if (iVar5 == 3) {
    return;
  }
  lVar14 = 0;
  local_res10 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = -1;
  uVar6 = FUN_142f71d80();
  uVar22 = (ulonglong)uVar23 << 0x20;
  FUN_1417a5560(uVar6,&local_c8,1,0x10,uVar22);
  uVar21 = local_c0 & 0xffffffff;
  do {
    local_b8 = local_b8 + 1;
    if ((int)local_c0 <= local_b8) break;
  } while (*(longlong *)(local_c8 + (longlong)local_b8 * 8) == 0);
LAB_140a18716:
  uVar24 = (undefined4)(uVar22 >> 0x20);
  if ((local_b8 < 0) || ((int)uVar21 <= local_b8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140a18844;
  local_b0 = 0;
  local_a8 = 0;
  local_res8 = *(undefined8 *)(*(longlong *)(local_c8 + (longlong)local_b8 * 8) + 0x18);
  FName::ToString(&local_res8,&local_b0);
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  puVar16 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Mission_Ep10_CityVault",0x2e);
  uVar22 = CONCAT44(uVar24,0xffffffff);
  puVar17 = &DAT_143f3eda8;
  if ((int)local_d0 != 0) {
    puVar17 = puVar16;
  }
  iVar5 = FUN_141592950(&local_b0,puVar17,1,0,uVar22);
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (iVar5 == -1) {
    if (local_b0 != 0) {
      FMemory::Free();
    }
    uVar21 = local_c0 & 0xffffffff;
    do {
      local_b8 = local_b8 + 1;
      if ((int)local_c0 <= local_b8) break;
    } while (*(longlong *)(local_c8 + (longlong)local_b8 * 8) == 0);
    goto LAB_140a18716;
  }
  lVar14 = *(longlong *)(local_c8 + (longlong)local_b8 * 8);
  local_res10 = lVar14;
  if (local_b0 != 0) {
    FMemory::Free();
  }
LAB_140a18844:
  lVar12 = 0;
  if (local_c8 != 0) {
    FMemory::Free(local_c8);
  }
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  puVar16 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"MissionVehicleSpawner_MayaTruck_Default",0x50);
  uVar6 = FUN_14143cfe0();
  lVar7 = FUN_1409f6e50(&local_res8,param_1,uVar6,&local_d8);
  if (lVar7 == 0) {
LAB_140a188d8:
    lVar7 = lVar12;
  }
  else {
    lVar8 = FUN_14143cfe0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a188d8;
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  puVar16 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"MissionWaypointBox_TurnOnRadio",0x3e);
  uVar6 = UGEditableText::GetPrivateStaticClass();
  lVar8 = FUN_1409f6e50(&local_res8,param_1,uVar6,&local_d8);
  if (lVar8 == 0) {
LAB_140a1896f:
    lVar8 = lVar12;
  }
  else {
    lVar9 = UGEditableText::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a1896f;
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  local_a0 = 0;
  local_98 = 0x73;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
  FGenericPlatformString::Memcpy
            (local_a0,
             L"/Game/Audio/Events/Music/Mus_Act_01/City_Vault/WE_Mus_City_Vault_Car_Radio_Start.WE_Mus_City_Vault_Car_Radio_Start"
             ,0xe6);
  uVar6 = UPawnAction_Sequence::StaticClass();
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"WE_Mus_City_Vault_Car_Radio_Start",1);
  uVar22 = uVar22 & 0xffffffff00000000;
  lVar9 = StaticFindObjectFastExplicit(uVar6,*puVar10,&local_a0,0,uVar22);
  if (lVar9 == 0) {
LAB_140a18a1e:
    lVar9 = lVar12;
  }
  else {
    lVar11 = UPawnAction_Sequence::StaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a18a1e;
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  local_90 = 0;
  local_88 = 0x71;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
  FGenericPlatformString::Memcpy
            (local_90,
             L"/Game/Audio/Events/Music/Mus_Act_01/City_Vault/WE_Mus_City_Vault_Car_Radio_Stop.WE_Mus_City_Vault_Car_Radio_Stop"
             ,0xe2);
  uVar6 = UPawnAction_Sequence::StaticClass();
  puVar10 = (undefined8 *)FName::FName(&local_res18,L"WE_Mus_City_Vault_Car_Radio_Stop",1);
  uVar22 = uVar22 & 0xffffffff00000000;
  lVar12 = StaticFindObjectFastExplicit(uVar6,*puVar10,&local_90,0,uVar22);
  if (lVar12 == 0) {
LAB_140a18ace:
    lVar12 = 0;
  }
  else {
    lVar11 = UPawnAction_Sequence::StaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a18ace;
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0xad;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy
            (local_d8,
             L"/Game/Audio/States/Music_States/Level_Specific/WwiseState_Mus_Scripted_City_Vault_Mus_City_Vault_Car_Radio_On.WwiseState_Mus_Scripted_City_Vault_Mus_City_Vault_Car_Radio_On"
             ,0x15a);
  uVar6 = FUN_1405bf070();
  puVar10 = (undefined8 *)
            FName::FName(local_res20,
                         L"WwiseState_Mus_Scripted_City_Vault_Mus_City_Vault_Car_Radio_On",1);
  lVar11 = StaticFindObjectFastExplicit(uVar6,*puVar10,&local_d8,0,uVar22 & 0xffffffff00000000);
  if (lVar11 != 0) {
    lVar13 = FUN_1405bf070();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a18b8c;
  }
  lVar11 = 0;
LAB_140a18b8c:
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (((((lVar14 != 0) && (lVar7 != 0)) && (lVar8 != 0)) && ((lVar9 != 0 && (lVar12 != 0)))) &&
     (lVar11 != 0)) {
    FActorSpawnParameters::FActorSpawnParameters(local_80);
    puVar10 = (undefined8 *)FName::FName(&local_e8,"OakAudioPatchMissionObserver",1);
    local_80[0] = *puVar10;
    local_60 = UWorld::GetLevel(param_1,0);
    local_54 = 0x40;
    uVar6 = FUN_1413ea570();
    puVar10 = local_80;
    lVar14 = UWorld::SpawnActor(param_1,uVar6,0,0,puVar10);
    if (lVar14 != 0) {
      FWeakObjectPtr::operator=(lVar14 + 0x470,lVar9);
      FWeakObjectPtr::operator=(lVar14 + 0x478,lVar12);
      FWeakObjectPtr::operator=(lVar14 + 0x480,lVar11);
      FWeakObjectPtr::operator=(lVar14 + 0x458,*(undefined8 *)(local_res10 + 0x10));
      pwVar15 = _guard_xfg_dispatch_icall_nop
                          (L"&AOakAudioPatchBeneathTheMeridian::MayaVehicleSpawned",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar15, pwVar2 != (wchar_t *)0x0) {
        pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res18,pwVar3 + 2,1);
      lVar12 = local_res18;
      plVar20 = (longlong *)(lVar7 + 0x810);
      FWeakObjectPtr::operator=(&local_e8,0);
      local_e0 = 0;
      FWeakObjectPtr::operator=(&local_e8,lVar14);
      local_e0 = lVar12;
      local_res8 = 0;
      if ((lVar12 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_e8), lVar12 != 0)) {
        UObject::FindFunction(lVar12,local_e0);
      }
      piVar18 = (int *)*plVar20;
      iVar5 = *(int *)(lVar7 + 0x818);
      for (piVar19 = piVar18; piVar19 != piVar18 + (longlong)iVar5 * 4; piVar19 = piVar19 + 4) {
        if (((*piVar19 == local_e8) && (piVar19[1] == local_e4)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar19), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_e8), cVar4 == '\0')))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (*(longlong *)(piVar19 + 2) == local_e0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if ((int)((longlong)piVar19 - (longlong)piVar18 >> 4) != -1) goto LAB_140a18dce;
          break;
        }
      }
      iVar5 = *(int *)(lVar7 + 0x818);
      *(int *)(lVar7 + 0x818) = iVar5 + 1;
      if (*(int *)(lVar7 + 0x81c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar5);
      }
      piVar18 = (int *)((longlong)iVar5 * 0x10 + *plVar20);
      *piVar18 = local_e8;
      piVar18[1] = local_e4;
      *(longlong *)(piVar18 + 2) = local_e0;
LAB_140a18dce:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
      pwVar15 = _guard_xfg_dispatch_icall_nop
                          (L"&AOakAudioPatchBeneathTheMeridian::OnTouchedTurnOnRadioTrigger",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar15, pwVar2 != (wchar_t *)0x0) {
        pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res18,pwVar3 + 2,1);
      plVar20 = (longlong *)(lVar8 + 0x468);
      FWeakObjectPtr::operator=(&local_e8,0);
      local_e0 = 0;
      FWeakObjectPtr::operator=(&local_e8,lVar14);
      local_e0 = local_res18;
      local_res8 = 0;
      if ((local_res18 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_e8), lVar12 != 0)) {
        UObject::FindFunction(lVar12,local_e0);
      }
      piVar18 = (int *)*plVar20;
      iVar5 = *(int *)(lVar8 + 0x470);
      for (piVar19 = piVar18; piVar19 != piVar18 + (longlong)iVar5 * 4; piVar19 = piVar19 + 4) {
        if (((*piVar19 == local_e8) && (piVar19[1] == local_e4)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar19), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_e8), cVar4 == '\0')))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (*(longlong *)(piVar19 + 2) == local_e0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if ((int)((longlong)piVar19 - (longlong)piVar18 >> 4) != -1) goto LAB_140a18f21;
          break;
        }
      }
      iVar5 = *(int *)(lVar8 + 0x470);
      *(int *)(lVar8 + 0x470) = iVar5 + 1;
      if (*(int *)(lVar8 + 0x474) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar5);
      }
      piVar18 = (int *)((longlong)iVar5 * 0x10 + *plVar20);
      *piVar18 = local_e8;
      piVar18[1] = local_e4;
      *(longlong *)(piVar18 + 2) = local_e0;
LAB_140a18f21:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
      FUN_1417846f0(lVar14,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8 = 0;
      uVar6 = UBlindWidget::GetPrivateStaticClass();
      puVar16 = (undefined2 *)
                FUN_1417985e0(uVar6,lVar14,0,0,(ulonglong)puVar10 & 0xffffffff00000000,0,0,0,0);
      if (puVar16 != (undefined2 *)0x0) {
        FUN_142f67220(puVar16,*(undefined8 *)(local_res10 + 0x10));
        lVar12 = FUN_142f6c9f0(param_1);
        if (lVar12 != 0) {
          local_d0 = 0;
          local_d8 = puVar16;
          uVar6 = FUN_142f768a0();
          local_d0 = UObjectBaseUtility::GetInterfaceAddress(puVar16,uVar6);
          FUN_142f690f0(lVar12,&local_d8,1);
        }
        FWeakObjectPtr::operator=(lVar14 + 0x460,puVar16);
        pwVar15 = _guard_xfg_dispatch_icall_nop
                            (L"&AOakAudioPatchBeneathTheMeridian::OnMissionObjectiveUpdate",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar15, pwVar2 != (wchar_t *)0x0) {
          pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res10,pwVar3 + 2,1);
        lVar12 = local_res10;
        plVar20 = (longlong *)(puVar16 + 0xdc);
        FWeakObjectPtr::operator=(&local_e8,0);
        local_e0 = 0;
        FWeakObjectPtr::operator=(&local_e8,lVar14);
        local_e0 = lVar12;
        local_res8 = 0;
        if ((lVar12 != 0) && (lVar14 = FWeakObjectPtr::Get(&local_e8), lVar14 != 0)) {
          UObject::FindFunction(lVar14,local_e0);
        }
        piVar18 = (int *)*plVar20;
        iVar5 = *(int *)(puVar16 + 0xe0);
        for (piVar19 = piVar18; piVar19 != piVar18 + (longlong)iVar5 * 4; piVar19 = piVar19 + 4) {
          if (((*piVar19 == local_e8) && (piVar19[1] == local_e4)) ||
             ((cVar4 = FWeakObjectPtr::IsValid(piVar19), cVar4 == '\0' &&
              (cVar4 = FWeakObjectPtr::IsValid(&local_e8), cVar4 == '\0')))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (*(longlong *)(piVar19 + 2) == local_e0)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            if ((int)((longlong)piVar19 - (longlong)piVar18 >> 4) != -1) goto LAB_140a1911e;
            break;
          }
        }
        iVar5 = *(int *)(puVar16 + 0xe0);
        *(int *)(puVar16 + 0xe0) = iVar5 + 1;
        if (*(int *)(puVar16 + 0xe2) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar5);
        }
        piVar18 = (int *)((longlong)iVar5 * 0x10 + *plVar20);
        *piVar18 = local_e8;
        piVar18[1] = local_e4;
        *(longlong *)(piVar18 + 2) = local_e0;
LAB_140a1911e:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
      }
    }
  }
  return;
}



// FUNCTION 140a19170 FUN_140a19170 body=614 status=ok
// SIG undefined FUN_140a19170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140a19170(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff88;
  ulonglong uVar15;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar8 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar5 = FUN_140a09850();
    lVar6 = FUN_140a04190(param_1);
    lVar8 = 0;
    if ((lVar5 != 0) && (lVar8 = 0, lVar6 != 0)) {
      FUN_1417846f0(lVar5,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = AUGDoor::GetPrivateStaticClass();
      uVar15 = 0;
      lVar8 = FUN_1417985e0(uVar7,lVar5,0,0,(ulonglong)uVar11 << 0x20,0,0,0,0);
      if (lVar8 != 0) {
        UUGCampaign::SetExitArrowEnabled(lVar8,1);
        FUN_1405a9570(lVar8,param_1);
        local_38 = *(undefined8 *)(param_1 + 400);
        local_30 = *(undefined4 *)(param_1 + 0x198);
        pfVar1 = (float *)(lVar8 + 0x280);
        if (((*(float *)(lVar8 + 0x1f8) != *pfVar1) ||
            (*(float *)(lVar8 + 0x1fc) != *(float *)(lVar8 + 0x284))) ||
           (*(float *)(lVar8 + 0x200) != *(float *)(lVar8 + 0x288))) {
          local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar8 + 0x1f8);
          auVar10._12_4_ = 0;
          auVar10._0_12_ = *(undefined1 (*) [12])(lVar8 + 0x1f8);
          fVar2 = (float)DAT_1468657c0;
          fVar3 = DAT_1468657c0._4_4_;
          fVar4 = DAT_1468657c0._8_4_;
          auVar10 = divps(auVar10,_DAT_1468657c0);
          fVar12 = (float)local_48 - (float)(int)auVar10._0_4_ * fVar2;
          fVar13 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar10._4_4_ * fVar3;
          fVar14 = *(float *)(lVar8 + 0x200) - (float)(int)auVar10._8_4_ * fVar4;
          fVar12 = (float)(((uint)(fVar12 + fVar2) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                          (uint)(fVar12 + fVar2));
          fVar13 = (float)(((uint)(fVar13 + fVar3) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                          (uint)(fVar13 + fVar3));
          fVar14 = (float)(((uint)(fVar14 + fVar4) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                          (uint)(fVar14 + fVar4));
          uVar11 = ((uint)(fVar14 - fVar4) ^ (uint)fVar14) & -(uint)(fRam00000001468657b8 < fVar14)
                   ^ (uint)fVar14;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar11);
          *(ulonglong *)pfVar1 =
               CONCAT44(((uint)(fVar13 - fVar3) ^ (uint)fVar13) &
                        -(uint)(fRam00000001468657b4 < fVar13) ^ (uint)fVar13,
                        ((uint)(fVar12 - fVar2) ^ (uint)fVar12) & -(uint)(_DAT_1468657b0 < fVar12) ^
                        (uint)fVar12);
          *(uint *)(lVar8 + 0x288) = uVar11;
          puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
          uVar7 = puVar9[1];
          *(undefined8 *)(lVar8 + 0x270) = *puVar9;
          *(undefined8 *)(lVar8 + 0x278) = uVar7;
        }
        local_48 = *(undefined8 *)(lVar8 + 0x270);
        uStack_40 = *(undefined8 *)(lVar8 + 0x278);
        FUN_142397be0(lVar8,&local_38,&local_48,0,0,uVar15 & 0xffffffffffffff00);
        lVar5 = *(longlong *)(param_1 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        FUN_14234b270(lVar8,lVar5);
        FUN_142382f60(lVar8,lVar6,&DAT_146af29ec,*(undefined8 *)(param_1 + 0x1a0));
        FUN_1405a9420(lVar8,*(undefined4 *)(param_1 + 0x1a8));
      }
    }
  }
  return lVar8;
}



// FUNCTION 140a193f0 FUN_140a193f0 body=1037 status=ok
// SIG undefined FUN_140a193f0(void)

void FUN_140a193f0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  undefined1 local_d8 [4];
  int local_d4;
  undefined4 local_d0;
  void *local_c8;
  void *local_c0;
  int local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)
      ) && (local_b0 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))(), local_b0 != 0)) {
    if (*(longlong *)(local_b0 + 400) == 0) {
      local_b0 = local_b0 + 0x400;
    }
    else {
      local_b0 = *(longlong *)(*(longlong *)(local_b0 + 400) + 0x98);
    }
    uVar19 = param_5[1];
    uVar18 = *(undefined8 *)(param_5 + 4);
    local_d0 = uVar19;
    local_a0 = uVar18;
    lVar16 = FLatentActionManager::
             FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                       (local_b0,uVar18,uVar19,local_d8);
    if (lVar16 == 0) {
      puVar17 = (undefined8 *)operator_new(0x120);
      puVar20 = (undefined8 *)0x0;
      if (puVar17 != (undefined8 *)0x0) {
        local_d4 = *(int *)(param_1 + 0x210);
        lVar16 = (longlong)local_d4;
        _Src = *(void **)(param_1 + 0x208);
        local_c0 = (void *)0x0;
        local_b8 = local_d4;
        if (local_d4 == 0) {
          local_c8 = (void *)0x0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_c0,local_d4,0);
          local_c8 = local_c0;
          _guard_xfg_dispatch_icall_nop(local_c0,_Src,lVar16 << 3);
        }
        local_c0 = *(void **)(param_1 + 0x1c0);
        uVar10 = *(undefined8 *)(param_1 + 0x220);
        uVar11 = *(undefined8 *)(param_1 + 0x228);
        uVar12 = *(undefined8 *)(param_1 + 0x230);
        uVar13 = *(undefined8 *)(param_1 + 0x238);
        uVar14 = *(undefined8 *)(param_1 + 0x240);
        uVar15 = *(undefined8 *)(param_1 + 0x248);
        uVar18 = *(undefined8 *)(param_1 + 0x118);
        uVar2 = *(undefined8 *)(param_1 + 0x1b0);
        uVar19 = *(undefined4 *)(param_1 + 600);
        uVar1 = *(undefined4 *)(param_1 + 0x25c);
        uVar3 = *(undefined8 *)(param_1 + 0x250);
        uVar4 = *(undefined8 *)(param_1 + 0x200);
        uVar5 = *(undefined8 *)(param_1 + 0x1c8);
        local_a8 = *(undefined8 *)(param_1 + 0x1b8);
        uVar6 = *(undefined8 *)(param_1 + 0x1f8);
        *puVar17 = &PTR_FUN_1441d5618;
        puVar17[1] = *(undefined8 *)(param_5 + 2);
        uVar7 = *(undefined8 *)(param_5 + 4);
        *(undefined4 *)(puVar17 + 2) = *param_5;
        local_d4 = local_b8;
        FWeakObjectPtr::operator=((longlong)puVar17 + 0x14,uVar7);
        *(undefined1 *)((longlong)puVar17 + 0x1c) = param_2;
        *(undefined1 *)((longlong)puVar17 + 0x1d) = 0;
        *(undefined4 *)(puVar17 + 4) = 0xbf800000;
        *(undefined2 *)((longlong)puVar17 + 0x24) = 0;
        *(undefined1 *)((longlong)puVar17 + 0x26) = 0;
        puVar17[5] = 0;
        FWeakObjectPtr::operator=(puVar17 + 6,uVar18);
        puVar17[7] = uVar6;
        puVar17[8] = uVar4;
        puVar17[10] = uVar10;
        puVar17[0xb] = uVar11;
        puVar17[0xc] = uVar12;
        puVar17[0xd] = uVar13;
        puVar17[0xe] = uVar14;
        puVar17[0xf] = uVar15;
        *(undefined4 *)(puVar17 + 0x10) = uVar1;
        *(undefined4 *)((longlong)puVar17 + 0x84) = uVar19;
        puVar17[0x12] = uVar5;
        lVar16 = (longlong)local_d4;
        *(undefined1 *)(puVar17 + 0x11) = param_3;
        puVar17[0x13] = uVar3;
        uVar18 = *(undefined8 *)(param_1 + 0x1a8);
        puVar17[0x15] = uVar2;
        puVar17[0x14] = uVar18;
        puVar17[0x16] = 0;
        *(int *)(puVar17 + 0x17) = local_d4;
        if (local_d4 == 0) {
          *(undefined4 *)((longlong)puVar17 + 0xbc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (puVar17 + 0x16,local_d4,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar17[0x16],local_c8,lVar16 << 3);
        }
        puVar17[0x18] = local_a8;
        puVar17[0x19] = local_c0;
        puVar17[0x1c] = 0;
        puVar17[0x1d] = 0;
        puVar17[0x1e] = 0;
        uVar19 = *param_4;
        uVar1 = param_4[1];
        uVar8 = param_4[2];
        uVar9 = param_4[3];
        puVar17[0x1f] = 0;
        puVar17[0x20] = 0;
        puVar17[0x21] = 0;
        puVar17[0x22] = 0;
        *(undefined4 *)(puVar17 + 0x1a) = uVar19;
        *(undefined4 *)((longlong)puVar17 + 0xd4) = uVar1;
        *(undefined4 *)(puVar17 + 0x1b) = uVar8;
        *(undefined4 *)((longlong)puVar17 + 0xdc) = uVar9;
        uVar18 = local_a0;
        puVar20 = puVar17;
        uVar19 = local_d0;
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
          uVar18 = local_a0;
          uVar19 = local_d0;
        }
      }
      FUN_142514cf0(local_b0,uVar18,uVar19,puVar20);
      *(undefined8 *)(param_1 + 0x268) = uVar18;
      *(undefined4 *)(param_1 + 0x270) = uVar19;
    }
  }
  return;
}



// FUNCTION 140a19800 FUN_140a19800 body=422 status=ok
// SIG undefined FUN_140a19800(void)

void FUN_140a19800(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *local_res8;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  lVar5 = FUN_140a044d0(*(undefined4 *)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x118),
                        *(undefined8 *)(param_1 + 0x268));
  if (lVar5 != 0) {
    if (param_2 != (longlong *)0x0) {
      *(longlong **)(lVar5 + 0x28) = param_2;
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UNPCInteractionComponent::LootDestroyedCallback",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar2 = *(longlong *)(lVar5 + 0x28);
      plVar9 = (longlong *)(lVar2 + 0x290);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_res8 = (longlong *)0x0;
      local_30 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_30);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
      iVar1 = *(int *)(lVar2 + 0x298);
      *(int *)(lVar2 + 0x298) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x29c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
      }
      puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
      *puVar8 = local_38;
      puVar8[1] = local_34;
      *(longlong *)(puVar8 + 2) = local_30;
    }
    *(undefined1 *)(lVar5 + 0x25) = 0;
  }
  if ((param_2 != (longlong *)0x0) &&
     ((param_2[0x23] == 0 || (param_2[0x23] == *(longlong *)(param_1 + 0x118))))) {
    (**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(param_1 + 0x118));
    FUN_14223ec50(param_2,1);
  }
  local_res8 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x178,&local_res8);
  return;
}



// FUNCTION 140a199b0 FUN_140a199b0 body=1375 status=ok
// SIG undefined FUN_140a199b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a199b0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0 [3];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_100 = param_2;
  iVar3 = FUN_14233f450();
  if (iVar3 != 3) {
    return;
  }
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*plVar8 + 0x148))(plVar8);
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x328) != '\x01') {
    *(undefined1 *)(param_1 + 0x328) = 1;
    local_108[0] = 1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1d8,local_108);
  }
  local_b8 = FUN_141477fa0();
  lVar4 = (**(code **)(*plVar8 + 0x628))(plVar8,local_b8);
  if (lVar4 != 0) {
    FUN_140ec5ee0(lVar4);
  }
  FUN_142d8f3b0(plVar8,DAT_146865c28);
  FUN_142d8ec30(plVar8,DAT_146865c28);
  FUN_142d8e990(plVar8,DAT_146865c28,1);
  FUN_142d8efe0(plVar8,DAT_146865c28,0);
  FUN_142d6e060(plVar8,DAT_146865c28);
  FUN_1407d7290(plVar8);
  FUN_1430704f0(plVar8);
  local_b0 = UScrollBox::GetPrivateStaticClass();
  lVar4 = (**(code **)(*plVar8 + 0x628))(plVar8,local_b0);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x660) = *(byte *)(lVar4 + 0x660) & 0xfe;
  }
  uVar10 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1409f0d40(plVar8,local_78,0);
  plVar5 = local_78;
  if (local_58 != (longlong *)0x0) {
    plVar5 = local_58;
  }
  uVar12 = (longlong)(int)local_50 & 0x1fffffffffffffff;
  if (plVar5 + (int)local_50 < plVar5) {
    uVar12 = uVar10;
  }
  uVar13 = uVar10;
  if (uVar12 != 0) {
    do {
      lVar4 = *plVar5;
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x378) != 0) {
          FUN_1412e3540(lVar4);
        }
        FUN_140a018c0(lVar4,0,0);
      }
      plVar5 = plVar5 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
  }
  local_a8 = FUN_141437710();
  plVar5 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,local_a8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x3b0))(plVar5,0);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  local_a0 = UThrobber::GetPrivateStaticClass();
  lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,local_a0);
  if ((lVar4 != 0) && (lVar6 != 0)) {
    FGameplayTagContainer::AppendTags(lVar6 + 0x188,lVar4 + 0xc20);
  }
  local_98 = FUN_142e39920();
  lVar4 = (**(code **)(*plVar8 + 0x628))(plVar8,local_98);
  if (lVar4 == 0) goto LAB_140a19d59;
  lVar6 = *(longlong *)(lVar4 + 0x1778);
  uVar12 = uVar10;
  if (lVar6 != 0) {
    lVar7 = AUGFlyingMageAIController::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x8a8) + 0x10))(), uVar12 = 0, lVar6 != 0)) {
      lVar7 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar12 = *(ulonglong *)(lVar6 + 0x110);
      }
    }
  }
  local_90 = 0;
  FUN_142d01010(lVar4,0,1);
  if (uVar12 == 0) goto LAB_140a19d59;
  uVar13 = uVar10;
  if (local_100 != (undefined1 *)0x0) {
    uVar13 = *(ulonglong *)(local_100 + 0x28);
  }
  uVar11 = *(ulonglong *)(param_1 + 0x118);
  if (uVar11 == 0) {
LAB_140a19d48:
    uVar11 = uVar10;
  }
  else {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140a19d48;
  }
  FUN_1409a6c50(uVar12,uVar13,uVar11);
LAB_140a19d59:
  local_118 = 0;
  local_d0 = DAT_1468b5d98;
  local_120 = local_f0;
  local_130 = &local_d8;
  local_128 = 0;
  local_d8 = _DAT_1468b5d90;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  FUN_1409e0430(&local_c8,*(undefined8 *)(param_1 + 0x2f8),plVar8,0);
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  if (local_c8 == 0) {
    FUN_140a03f10(param_1);
  }
  else {
    uStack_f8 = 0;
    local_100 = &LAB_140a0cb80;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_88 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_100;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_100._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_f8;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_f4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar4;
      *plVar8 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_c8 + 0x58,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_100);
      iVar3 = *(int *)(local_c8 + 0x60);
      *(int *)(local_c8 + 0x60) = iVar3 + 1;
      if (*(int *)(local_c8 + 100) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_c8 + 0x58,iVar3);
      }
      puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(local_c8 + 0x58));
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a19f10 FUN_140a19f10 body=377 status=ok
// SIG undefined FUN_140a19f10(void)

void FUN_140a19f10(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  FUN_1422d92f0();
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar4 = UXSkinAnimationProfile::GetPrivateStaticClass();
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined8 *)(lVar4 + 0x18),&local_48);
  plVar2 = local_48;
  if ((cVar3 == '\0') || ((int)local_40 < 1)) goto LAB_140a1a077;
  if (*local_48 == 0) {
LAB_140a1a058:
    lVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)FName::ToString(local_48,local_38);
    puVar9 = &DAT_143f3eda8;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    uVar6 = UObject::GetPrivateStaticClass();
    lVar4 = FUN_141799410(uVar6,0,puVar8,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)FName::ToString(plVar2,local_28);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar5;
      }
      uVar6 = UObject::GetPrivateStaticClass();
      lVar4 = FUN_141799c90(uVar6,0,puVar9,0,0,0,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (lVar4 == 0) goto LAB_140a1a058;
    }
    lVar7 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a1a058;
  }
  param_1[0x84] = lVar4;
LAB_140a1a077:
  FUN_1404be960(&local_48);
  return;
}



// FUNCTION 140a1a090 FUN_140a1a090 body=182 status=ok
// SIG undefined FUN_140a1a090(void)

void FUN_140a1a090(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x568) != '\x01') {
    return;
  }
  if (param_2 == (longlong *)0x0) goto LAB_140a1a118;
  lVar2 = (**(code **)(*param_2 + 0x668))(param_2);
  if (lVar2 == 0) {
LAB_140a1a10a:
    lVar2 = 0;
  }
  else {
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a1a10a;
  }
  *(longlong *)(param_1 + 0x570) = lVar2;
LAB_140a1a118:
  lVar2 = FUN_142df3580(param_2);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x558) = lVar2;
  }
  *(undefined1 *)(param_1 + 0x568) = 2;
  FUN_140a0e5b0(param_1);
  return;
}



// FUNCTION 140a1a150 FUN_140a1a150 body=777 status=ok
// SIG undefined FUN_140a1a150(void)

void FUN_140a1a150(longlong param_1,undefined1 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
  if (plVar2 == (longlong *)0x0) goto LAB_140a1a3f9;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x678))(plVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_140a1a3f9;
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (plVar3 == (longlong *)0x0)) goto LAB_140a1a3f9;
  }
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 == 0) {
    uVar5 = FUN_142e75af0();
    lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
    if (lVar4 == 0) goto LAB_140a1a3f9;
  }
  lVar6 = *(longlong *)(param_1 + 0x108);
  if ((((lVar6 == 0) && (lVar6 = (**(code **)(*plVar3 + 0xa48))(plVar3), lVar6 == 0)) ||
      (((*(longlong *)(param_1 + 0x40) == 0 || (lVar7 = FHardwareCursor::GetHandle(), lVar7 == 0))
       && (*(longlong *)(param_1 + 0x38) == 0)))) ||
     ((*(longlong *)(param_1 + 0x90) == 0 || (*(longlong *)(param_1 + 0x98) == 0)))) {
LAB_140a1a3f9:
    *param_2 = 1;
    return;
  }
  *(longlong **)(param_1 + 0xe8) = plVar3;
  uVar5 = FUN_142a232e0();
  lVar7 = FUN_14222fa10(plVar3,uVar5,*(undefined8 *)(param_1 + 0x90));
  if (lVar7 != 0) {
    lVar8 = FUN_142a232e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a1a2db;
  }
  lVar7 = 0;
LAB_140a1a2db:
  *(longlong *)(param_1 + 0xf0) = lVar7;
  uVar5 = FUN_142e80f20();
  uVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_142e27720();
  uVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  *(longlong *)(param_1 + 0x110) = lVar4;
  *(longlong *)(param_1 + 0x108) = lVar6;
  uVar5 = FUN_1413cb880();
  uVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x288))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146865d70) && (_Init_thread_header(&DAT_146865d70), DAT_146865d70 == -1))
  {
    FName::FName(&DAT_146865d68,L"CanFidget",1);
    _Init_thread_footer(&DAT_146865d70);
  }
  UBlackboardComponent::SetValueAsBool(lVar6,&DAT_146865d68,0);
  if ((*(longlong *)(param_1 + 0x110) != 0) && (lVar4 = *(longlong *)(param_1 + 0xe0), lVar4 != 0))
  {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      if (*(char *)(param_1 + 0x88) == '\0') {
        lVar4 = *(longlong *)(lVar4 + 0x188);
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 400);
      }
    }
    else if (*(char *)(param_1 + 0x88) == '\0') {
      lVar4 = *(longlong *)(lVar4 + 0x198);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x1a0);
    }
    if (lVar4 != 0) {
      FUN_142ddc5e0(*(longlong *)(param_1 + 0x110),3);
    }
  }
  FUN_1409f8ac0(param_1);
  return;
}



// FUNCTION 140a1a460 FUN_140a1a460 body=604 status=ok
// SIG undefined FUN_140a1a460(void)

void FUN_140a1a460(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong local_res8;
  undefined8 *local_res10;
  longlong *local_res18;
  undefined8 *local_res20;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    local_res8 = param_1;
    FUN_1407665e0(*(longlong *)(param_1 + 0x7b8) + 0x290,param_1);
    local_78 = *(longlong *)(param_1 + 0x120);
    lVar1 = *(longlong *)(param_1 + 0x7b8);
    if (local_78 == 0) {
      local_78 = FUN_1423407b0(param_1);
    }
    local_70 = &local_78;
    local_68 = FUN_14073d760(&local_78,DAT_146865c30);
    local_60 = &local_78;
    local_res18 = local_70;
    local_58 = 0;
    puVar3 = (undefined8 *)FUN_14073d760(local_70,local_68);
    local_res10 = puVar3;
    local_res20 = (undefined8 *)FUN_14073d760(local_60,local_58);
    if (puVar3 != local_res20) {
      do {
        lVar2 = puVar3[2];
        lVar4 = (longlong)*(int *)(lVar2 + 0x7c8);
        if (*(int *)(lVar2 + 0x7c8) != 0) {
          iVar9 = 0;
          lVar6 = 0;
          bVar10 = **(longlong **)(lVar2 + 0x7c0) != lVar1;
          iVar7 = 0;
          do {
            lVar6 = lVar6 + 1;
            iVar8 = iVar7 + 1;
            if (lVar6 < lVar4) {
              plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x7c0) + lVar6 * 8);
              do {
                if (bVar10 != (*plVar5 != lVar1)) break;
                iVar8 = iVar8 + 1;
                lVar6 = lVar6 + 1;
                plVar5 = plVar5 + 1;
              } while (lVar6 < lVar4);
            }
            if (bVar10 != false) {
              if (iVar9 != iVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar2 + 0x7c0) + (longlong)iVar9 * 8),
                           (void *)(*(longlong *)(lVar2 + 0x7c0) + (longlong)iVar7 * 8),
                           (longlong)(iVar8 - iVar7) << 3);
              }
              iVar9 = iVar9 + (iVar8 - iVar7);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar7 = iVar8;
          } while (lVar6 < lVar4);
          *(int *)(lVar2 + 0x7c8) = iVar9;
          puVar3 = local_res10;
        }
        puVar3 = (undefined8 *)FUN_14073d760(local_res18,*puVar3);
        param_1 = local_res8;
        local_res10 = puVar3;
      } while (puVar3 != local_res20);
    }
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    FUN_142cd0a60(param_1 + 0x750,*(undefined8 *)(param_1 + 0x7e0),0);
    FUN_142cd0450(param_1 + 0x760,*(undefined8 *)(param_1 + 0x7e0),0);
    local_res8 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x720,&local_res8);
  }
  return;
}



// FUNCTION 140a1a6c0 FUN_140a1a6c0 body=396 status=ok
// SIG undefined FUN_140a1a6c0(void)

void FUN_140a1a6c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res8;
  
  if ((*(longlong *)(param_1 + 0x7b8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    if ((*(char *)(param_1 + 0x788) != '\0') &&
       (((plVar1 != (longlong *)0x0 && (lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar3 != 0))
        && (*(longlong *)(param_1 + 0x810) != 0)))) {
      uVar4 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      FUN_142880530(uVar4,param_1 + 0x810);
      *(undefined8 *)(param_1 + 0x810) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x7b8);
    if (lVar3 != 0) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = FUN_140a63ba0(lVar3);
        FUN_142ddc830(lVar3,uVar4,0);
        uVar4 = FUN_140a63ba0(lVar3);
        FUN_1430890e0(lVar3,uVar4);
        uVar4 = FUN_140a63ba0(lVar3);
        FUN_142ddcaf0(lVar3,uVar4,0);
      }
    }
    uVar4 = (**(code **)(*plVar1 + 0x688))(plVar1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x150) = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x448))(*(longlong **)(param_1 + 0x7b8),plVar1);
    local_res8 = *(longlong *)(param_1 + 0x7b8);
    if ((local_res8 != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
      FUN_1409fde20(param_1);
      FUN_1412e83c0(*(undefined8 *)(param_1 + 0x7b8));
      local_res8 = *(longlong *)(param_1 + 0x7b8);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x730,&local_res8);
    FUN_140a1a460(param_1);
  }
  return;
}



// FUNCTION 140a1a850 FUN_140a1a850 body=396 status=ok
// SIG undefined FUN_140a1a850(void)

void FUN_140a1a850(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  plVar1 = (longlong *)(param_1 + 0x300);
  plVar5 = (longlong *)*plVar1;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x308);
  plVar6 = plVar5 + uVar8 * 5;
  if (plVar5 != plVar6) {
    do {
      if (*plVar5 != 0) {
        FUN_14058f880(&local_res8,plVar5);
        cVar2 = FUN_14059ee80(local_res8);
        if (cVar2 != '\0') {
          if (plVar5[4] == 0) {
            FUN_1405ac8f0(plVar5 + 1,0,4);
          }
          else {
            local_58 = 0;
            local_50 = 0;
            FUN_1405a2d20(local_res8,local_38,plVar5[4],0,0,&local_58);
            FUN_140591060(local_38);
            if (local_58 != 0) {
              FMemory::Free();
            }
          }
        }
        uVar4 = FUN_14058f8f0(local_48,&local_res8);
        FUN_1405a64e0(uVar4);
        if (local_res8 != 0) {
          FUN_1405a53f0();
          local_res8 = 0;
        }
      }
      plVar5 = plVar5 + 5;
    } while (plVar5 != plVar6);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x308);
  }
  iVar3 = *(int *)(param_1 + 0x30c);
  plVar6 = (longlong *)*plVar1;
  uVar7 = (uint)uVar8;
  if (iVar3 < 0) {
    if (uVar7 != 0) {
      do {
        FUN_140591060(plVar6 + 1);
        if (*plVar6 != 0) {
          FUN_1405a53f0();
          *plVar6 = 0;
        }
        plVar6 = plVar6 + 5;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
      iVar3 = *(int *)(param_1 + 0x30c);
    }
    *(undefined4 *)(param_1 + 0x308) = 0;
    if (iVar3 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
  }
  else {
    while (uVar7 != 0) {
      FUN_140591060(plVar6 + 1);
      if (*plVar6 != 0) {
        FUN_1405a53f0();
        *plVar6 = 0;
      }
      plVar6 = plVar6 + 5;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
    }
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  return;
}



// FUNCTION 140a1a9e0 FUN_140a1a9e0 body=197 status=ok
// SIG undefined FUN_140a1a9e0(void)

void FUN_140a1a9e0(longlong param_1)

{
  char cVar1;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  FWeakObjectPtr::operator=(param_1 + 0x370,0);
  cVar1 = FUN_14059ee90(param_1 + 0x378);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x368) != 0) {
      cVar1 = FUN_14059f130();
      if (cVar1 != '\0') {
        local_38[0] = 0;
        local_38[1] = 0;
        FUN_1405a2d20(*(undefined8 *)(param_1 + 0x378),local_28,*(undefined8 *)(param_1 + 0x368),0,0
                      ,local_38);
        FUN_140591060(local_28);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        goto LAB_140a1aa87;
      }
    }
    FUN_1405ac8f0(param_1 + 0x378,0,4);
  }
LAB_140a1aa87:
  FUN_140a0b040(param_1 + 0x390);
  FUN_140a1aab0(param_1);
  return;
}



// FUNCTION 140a1aab0 FUN_140a1aab0 body=226 status=ok
// SIG undefined FUN_140a1aab0(void)

void FUN_140a1aab0(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  FUN_140a09920(param_1,&local_res8,0);
  if ((local_res8 != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1405a2d20(local_res8,local_28,*(longlong *)(param_1 + 0x1d0),0,0,local_38);
    FUN_140591060(local_28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)(param_1 + 0x24c) = 0;
  FUN_140a11f50(param_1);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    if (lVar1 == 0) {
      lVar1 = FUN_140a19170(param_1);
      *(longlong *)(param_1 + 800) = lVar1;
      if (lVar1 == 0) goto LAB_140a1ab78;
    }
    FUN_1405a3150(lVar1,local_28,*(undefined8 *)(param_1 + 0x1d8),0);
    FUN_140591060(local_28);
  }
LAB_140a1ab78:
  if (local_res8 != 0) {
    FUN_1405a53f0();
  }
  return;
}



// FUNCTION 140a1aba0 FUN_140a1aba0 body=740 status=ok
// SIG undefined FUN_140a1aba0(void)

void FUN_140a1aba0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  float local_44;
  
  if (((*(char *)(param_1 + 0x3b9) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
  {
    if (DAT_1468536c8 != 0) {
      FUN_1405ad830(DAT_1468536c8,param_1 + 0x360);
      *(undefined1 *)(param_1 + 0x3b9) = 0;
      if (DAT_1468536c6 != '\0') goto LAB_140a1ad17;
    }
    if ((DAT_1468536c5 != '\0') && (DAT_1468536c8 != 0)) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
      }
      uVar8 = *(int *)(param_1 + 0x448) - *(int *)(param_1 + 0x418);
      if (0 < (int)uVar8) {
        BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d0));
        if (BVar4 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d0));
        }
        uVar3 = *(undefined8 *)(param_1 + 0x3c0);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d0));
        if (0 < (int)uVar8) {
          uVar7 = (ulonglong)uVar8;
          do {
            local_64 = *(int *)(param_1 + 0x3f8) - (int)uVar3;
            local_5c = local_64 + 1;
            local_68 = 0x503c0090;
            local_60 = 0x503c0080;
            FUN_1405a2520(*(undefined8 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x410),
                          &local_68,2);
            *(longlong *)(param_1 + 0x3f8) =
                 *(longlong *)(param_1 + 0x3f8) + *(longlong *)(param_1 + 0x400);
            *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
    }
  }
LAB_140a1ad17:
  FUN_140a09920(param_1,&local_res8,0);
  if (((local_res8 != 0) && (*(longlong *)(param_1 + 0x380) != 0)) &&
     ((*(char *)(param_1 + 0x3b8) != '\0' && (DAT_1468657a0 == '\0')))) {
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x380) + 0x4c);
    if (fVar9 <= 0.0001) {
      fVar9 = 5.0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24c);
    plVar5 = (longlong *)FUN_14058f880(local_res10,&local_res8);
    lVar6 = 0;
    if (*plVar5 != 0) {
      FUN_14058f920(local_58,0);
      FUN_14058f8f0(&local_68,plVar5);
      FUN_1405913a0(local_58,&local_68);
      FUN_140591060(&local_68);
      iVar2 = *(int *)(param_1 + 0x458);
      *(int *)(param_1 + 0x458) = iVar2 + 1;
      local_48 = uVar1;
      local_44 = fVar9;
      if (*(int *)(param_1 + 0x45c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x450,iVar2);
      }
      lVar6 = *(longlong *)(param_1 + 0x450) + (longlong)iVar2 * 0x18;
      FUN_14058f8f0(lVar6,local_58);
      *(undefined4 *)(lVar6 + 0x10) = local_48;
      *(float *)(lVar6 + 0x14) = local_44;
      FUN_140591060(local_58);
      lVar6 = *plVar5;
    }
    if (lVar6 != 0) {
      FUN_1405a53f0();
      *plVar5 = 0;
    }
  }
  FUN_140a0b040(param_1 + 0x460);
  FUN_140a1aab0(param_1);
  if (local_res8 != 0) {
    FUN_1405a53f0();
  }
  return;
}



// FUNCTION 140a1ae90 FUN_140a1ae90 body=138 status=ok
// SIG undefined FUN_140a1ae90(void)

void FUN_140a1ae90(longlong *param_1)

{
  longlong *plVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((((param_1[3] != 0) && (param_1[2] != 0)) && (*param_1 != 0)) &&
     (*(char *)(param_1[3] + 0xe23) != '\0')) {
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 10) = local_res8;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_resc;
    *(undefined4 *)(param_1 + 0x11) = 0x7f7fffff;
    FUN_141219210(param_1[3],&DAT_146865c60);
    plVar1 = *(longlong **)(*(longlong *)(param_1[2] + 0xb48) + 0x608);
                    /* WARNING: Could not recover jumptable at 0x000140a1af0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x448))(plVar1,&DAT_146865c60);
    return;
  }
  return;
}



// FUNCTION 140a1af40 FUN_140a1af40 body=72 status=ok
// SIG undefined FUN_140a1af40(void)

void FUN_140a1af40(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x19d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x19d4)) {
    FUN_140a13a90(param_1 + 0x1908,0);
  }
  *(undefined8 *)(param_1 + 0x19dc) = 0;
  return;
}



// FUNCTION 140a1af90 FUN_140a1af90 body=355 status=ok
// SIG undefined FUN_140a1af90(void)

void FUN_140a1af90(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  iVar2 = FUN_1428cf800(uVar3);
  if (iVar2 == 3) {
    cVar1 = FUN_14059ee90(param_1 + 0x94);
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        FUN_1405ac8f0(param_1 + 0x94,0,4);
      }
      else {
        FUN_14058f8a0(&local_res8);
        if (local_res8 != 0) {
          local_38[0] = 0;
          local_38[1] = 0;
          FUN_1405a2d20(local_res8,local_28,param_2,0,0,local_38);
          FUN_140591060(local_28);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          if (local_res8 != 0) {
            FUN_1405a53f0();
          }
        }
      }
    }
    lVar4 = FUN_140590080(local_28);
    FUN_1405913a0(param_1 + 0x94,lVar4);
    *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)(lVar4 + 0x10);
    FUN_140591060(local_28);
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar5 = (longlong *)FUN_140c44ae0(uVar3);
    if (plVar5 != (longlong *)0x0) {
      FName::FName(&local_res8,L"Start_Systemic_Music",1);
      lVar4 = UObject::FindFunction(plVar5,local_res8);
      if (lVar4 != 0) {
        (**(code **)(*plVar5 + 0x208))(plVar5,lVar4,0);
      }
    }
  }
  return;
}



// FUNCTION 140a1b100 FUN_140a1b100 body=14 status=ok
// SIG undefined FUN_140a1b100(void)

void FUN_140a1b100(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xfe;
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) | param_2;
  return;
}



// FUNCTION 140a1b110 FUN_140a1b110 body=177 status=ok
// SIG undefined FUN_140a1b110(void)

void FUN_140a1b110(longlong *param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1413cb880();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x198) != 0)) &&
       ((*(longlong *)(lVar2 + 0x1f8) != 0 || (*(longlong *)(lVar2 + 0x200) != 0)))) {
      local_28 = *param_4;
      uStack_20 = param_4[1];
      local_18 = param_4[2];
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      FUN_140a193f0(lVar2,1,param_2,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 140a1b1d0 FUN_140a1b1d0 body=95 status=ok
// SIG undefined FUN_140a1b1d0(void)

void FUN_140a1b1d0(longlong param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     ((*(longlong *)(param_1 + 0x1f8) != 0 || (*(longlong *)(param_1 + 0x200) != 0)))) {
    local_28 = *param_4;
    uStack_20 = param_4[1];
    local_18 = param_4[2];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_140a193f0(local_38,1,param_2,&local_38,&local_28);
  }
  return;
}



// FUNCTION 140a1b230 FUN_140a1b230 body=167 status=ok
// SIG undefined FUN_140a1b230(void)

void FUN_140a1b230(longlong *param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1413cb880();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if ((lVar2 != 0) && ((*(longlong *)(lVar2 + 0x1f8) != 0 || (*(longlong *)(lVar2 + 0x200) != 0)))
       ) {
      local_28 = *param_4;
      uStack_20 = param_4[1];
      local_18 = param_4[2];
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      FUN_140a193f0(lVar2,2,param_2,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 140a1b2e0 FUN_140a1b2e0 body=85 status=ok
// SIG undefined FUN_140a1b2e0(void)

void FUN_140a1b2e0(longlong param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x1f8) != 0) || (*(longlong *)(param_1 + 0x200) != 0)) {
    local_28 = *param_4;
    uStack_20 = param_4[1];
    local_18 = param_4[2];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_140a193f0(local_38,2,param_2,&local_38,&local_28);
  }
  return;
}



// FUNCTION 140a1b340 FUN_140a1b340 body=284 status=ok
// SIG undefined FUN_140a1b340(void)

undefined8 FUN_140a1b340(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    cVar4 = FUN_142fa53c0();
    if (cVar4 != '\0') {
      uVar5 = FUN_142f900f0(*(longlong *)(param_1 + 0x278) + 0x68,&local_38,local_18);
      lVar8 = *(longlong *)(param_1 + 0xb30);
      lVar1 = *(longlong *)(lVar8 + 0x168);
      if (lVar1 == 0) {
        uVar5 = (undefined4)DAT_1468b5da0;
        uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_20 = DAT_1468b5da8;
      }
      else {
        fVar3 = *(float *)(lVar1 + 0x210);
        local_48 = *(undefined8 *)(lVar1 + 0x210);
        fStack_40 = *(float *)(lVar1 + 0x218);
        fStack_3c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar3);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_40);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_3c);
        iVar6 = movmskps(uVar5,auVar2);
        if (iVar6 != 0) {
          *(float *)(lVar1 + 0x250) = fVar3;
          *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
          *(float *)(lVar1 + 600) = fStack_40;
          *(float *)(lVar1 + 0x25c) = fStack_3c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_48,&local_28);
          *(undefined8 *)(lVar1 + 0x260) = *puVar7;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
          lVar8 = *(longlong *)(param_1 + 0xb30);
        }
        uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_20 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_28 = CONCAT44(uVar9,uVar5);
      local_48 = local_38;
      fStack_40 = (float)local_30;
      FUN_14148fbd0(lVar8,&local_48,&local_28);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a1b4a0 FUN_140a1b4a0 body=1562 status=ok
// SIG undefined FUN_140a1b4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1b4a0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  float fVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  undefined1 *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  float local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  float local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_f8 [32];
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if ((((*(longlong **)(param_1 + 0xb30) != (longlong *)0x0) &&
       (lVar7 = (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x148))(), lVar7 != 0)) &&
      (*(longlong *)(param_1 + 0xaf0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xaf0) + 0x118) != '\0')) {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x148))();
    fVar10 = *(float *)(param_1 + 0xc90) - *(float *)(lVar7 + 0x7b0);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xaf0) + 0x11c);
    fVar3 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x120);
    *(float *)(param_1 + 0xc90) = fVar10;
    if (fVar10 < 0.0) {
      *(undefined4 *)(param_1 + 0xc90) = uVar2;
      if ((-1 < *(int *)(param_1 + 0x758)) && (-1 < *(int *)(param_1 + 0x75c))) {
        bVar4 = *(byte *)(param_1 + 0xc8c);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
        if (lVar7 == 0) {
          puVar8 = &local_180;
          local_180 = _DAT_1468b5d90;
          local_178 = (float)DAT_1468b5d98;
        }
        else {
          puVar8 = &local_190;
          local_190._0_4_ = *(undefined4 *)(lVar7 + 0x220);
          local_188 = *(undefined4 *)(lVar7 + 0x228);
          local_190._4_4_ = *(undefined4 *)(lVar7 + 0x224);
        }
        local_160 = *puVar8;
        local_158 = *(float *)(puVar8 + 1);
        local_190._4_4_ = 0x3f800000;
        local_190._0_4_ = 0;
        local_188 = 0;
        local_148 = local_160;
        local_140 = local_158;
        FUN_142fa2030(*(undefined8 *)(param_1 + 0x6b8),(int *)(param_1 + 0x758),&local_190);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
        if (lVar7 == 0) {
          local_198 = (float)DAT_1464aa7b0;
          puVar8 = &local_1a0;
          local_1a0 = DAT_1464aa7a8;
        }
        else {
          puVar8 = (undefined8 *)FUN_142369f10(lVar7,&local_1a0);
        }
        local_170 = (undefined1 *)*puVar8;
        uStack_168 = *(undefined4 *)(puVar8 + 1);
        FRotationMatrix::MakeFromZX(&local_138,&local_190,&local_170);
        if ((bVar4 & 1) == 0) {
          local_128 = -local_128;
          local_198 = -local_120;
          local_124 = -local_124;
        }
        else {
          local_198 = local_120;
        }
        local_138 = local_138 + local_128;
        local_134 = local_134 + local_124;
        local_130 = local_130 + local_198;
        fVar10 = local_138 * local_138 + local_134 * local_134 + local_130 * local_130;
        if (1e-08 < fVar10) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
          local_128 = auVar11._0_4_;
          local_128 = local_128 + local_128 * (0.5 - fVar10 * 0.5 * local_128 * local_128);
          local_128 = local_128 + local_128 * (0.5 - fVar10 * 0.5 * local_128 * local_128);
          local_138 = local_128 * local_138;
          local_134 = local_128 * local_134;
          local_130 = local_128 * local_130;
        }
        local_1a0 = CONCAT44(local_124,local_128);
        local_178 = local_158 + local_130 * fVar3;
        local_180 = CONCAT44(local_160._4_4_ + local_134 * fVar3,
                             local_138 * fVar3 + (float)local_160);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146865fb8) &&
           (_Init_thread_header(&DAT_146865fb8), DAT_146865fb8 == -1)) {
          FName::FName(&DAT_146865fb0,L"OakNavComponentTestWalls",1);
          _Init_thread_footer(&DAT_146865fb8);
        }
        local_1d8 = *(undefined8 **)(param_1 + 0xb30);
        FUN_1422ffb20(local_d8,DAT_146865fb0,local_1a8,0);
        FUN_1426d3dd0(local_f8);
        FUN_1426ea8d0(local_f8,2);
        FCollisionResponseContainer::SetResponse(local_f8,0,2);
        plVar1 = (longlong *)(param_1 + 0xc98);
        if (((*(int *)(param_1 + 0xca0) == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar6 == '\0')) {
          uStack_168 = 0;
          local_170 = &LAB_140a1b460;
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_144012f30;
            FWeakObjectPtr::operator=(plVar9 + 1,param_1);
            *(undefined4 *)(plVar9 + 2) = (undefined4)local_170;
            *(undefined4 *)((longlong)plVar9 + 0x14) = local_170._4_4_;
            *(undefined4 *)(plVar9 + 3) = uStack_168;
            *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_164;
            lVar7 = FDelegateHandle::GenerateNewID();
            plVar9[5] = lVar7;
            *plVar9 = (longlong)&PTR_FUN_144012f78;
          }
          if (&local_170 != plVar1) {
            if (plVar9 == (longlong *)0x0) {
              if ((*(int *)(param_1 + 0xca0) != 0) &&
                 (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0)) {
                (**(code **)(*plVar5 + 0x28))(plVar5,0);
                if (*plVar1 != 0) {
                  lVar7 = FMemory::Realloc(*plVar1,0,0);
                  *plVar1 = lVar7;
                }
                *(undefined4 *)(param_1 + 0xca0) = 0;
              }
            }
            else {
              (**(code **)(*plVar9 + 0x30))(plVar9,plVar1);
            }
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
            lVar7 = FMemory::Realloc(plVar9,0,0);
            if (lVar7 != 0) {
              FMemory::Free(lVar7);
            }
          }
        }
        lVar7 = FUN_140a05dc0();
        local_150 = *(undefined4 *)(lVar7 + 4);
        local_14c = 0;
        if (*(longlong *)(param_1 + 0xb30) != 0) {
          FCollisionQueryParams::AddIgnoredActor(local_d8);
        }
        FCollisionResponseContainer::SetResponse(local_f8,0,2);
        lVar7 = *(longlong *)(param_1 + 0x120);
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0(param_1);
        }
        local_1b8 = *(undefined4 *)(param_1 + 0xc8c);
        local_1c8 = local_d8;
        local_1d0 = &local_150;
        local_1d8 = &local_180;
        local_1c0 = plVar1;
        FUN_142330140(lVar7,&local_1a0,1,&local_148);
        *(int *)(param_1 + 0xc8c) = *(int *)(param_1 + 0xc8c) + 1;
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_90 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140a1bac0 FUN_140a1bac0 body=409 status=ok
// SIG undefined FUN_140a1bac0(void)

void FUN_140a1bac0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
                  undefined1 param_9,char param_10)

{
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_2 == (longlong *)0x0) {
    FUN_140a018c0(param_1,param_9,0);
  }
  else {
    if ((param_10 != '\0') && (*(longlong *)(param_1 + 0x378) == 0)) {
      FUN_142d924a0();
    }
    if (*(longlong *)(param_1 + 0x378) != 0) {
      if (*(char *)(param_1 + 0x361) != '\0') {
        FUN_14223c460(*(longlong *)(param_1 + 0x378),1);
      }
      FUN_140778ce0(&local_78,*(undefined8 *)(param_1 + 0x118),param_2,param_5);
      (**(code **)(*param_2 + 0x308))(param_2,&local_88);
      local_68 = *param_6;
      local_60 = *(undefined4 *)(param_6 + 1);
      local_58 = *param_7;
      local_50 = *(undefined4 *)(param_7 + 1);
      local_40 = local_80;
      local_30 = local_70;
      local_48 = local_88;
      local_38 = local_78;
      FUN_143091410(*(undefined8 *)(param_1 + 0x378),&local_38,&local_48,param_8,param_3,param_4,
                    &local_58,&local_68);
      if ((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
        FUN_140447710(*(undefined8 *)(param_1 + 0x398));
      }
      FUN_140a0e280(param_1,param_9);
    }
  }
  return;
}



// FUNCTION 140a1bc60 FUN_140a1bc60 body=328 status=ok
// SIG undefined FUN_140a1bc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1bc60(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,char param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((param_6 != '\0') && (*(longlong *)(param_1 + 0x378) == 0)) {
    FUN_142d924a0();
  }
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    lVar2 = *(longlong *)(param_1 + 0x378);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2d8);
  }
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x361) != '\0') {
      FUN_14223c460(lVar2,1);
    }
    local_50 = DAT_1468b5da8;
    local_30 = *(undefined4 *)(param_2 + 1);
    local_58 = DAT_1468b5da0;
    local_38 = *param_2;
    local_60 = DAT_1468b5d98;
    local_40 = DAT_1468b5d98;
    local_68 = _DAT_1468b5d90;
    local_48 = _DAT_1468b5d90;
    FUN_143091410(lVar2,&local_38,&local_48,0,param_3,param_4,&local_58,&local_68);
    if ((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
      FUN_140447710(*(undefined8 *)(param_1 + 0x398));
    }
    FUN_140a0e280(param_1,param_5);
  }
  return;
}



// FUNCTION 140a1bdb0 FUN_140a1bdb0 body=448 status=ok
// SIG undefined FUN_140a1bdb0(void)

void FUN_140a1bdb0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined1 param_8,
                  char param_9)

{
  longlong *plVar1;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (*(longlong *)(param_1 + 0x380) != 0) {
    plVar1 = (longlong *)FUN_142dcd660(*(longlong *)(param_1 + 0x380),0);
    if (plVar1 == (longlong *)0x0) {
      FUN_140a018c0(param_1,param_8,0);
    }
    else {
      if ((param_9 != '\0') && (*(longlong *)(param_1 + 0x378) == 0)) {
        FUN_142d924a0(param_1);
      }
      if (*(longlong *)(param_1 + 0x378) != 0) {
        if (*(char *)(param_1 + 0x361) != '\0') {
          FUN_14223c460(*(longlong *)(param_1 + 0x378),1);
        }
        FUN_140778ce0(&local_78,*(undefined8 *)(param_1 + 0x118),plVar1,param_4);
        (**(code **)(*plVar1 + 0x308))(plVar1,&local_88);
        local_68 = *param_5;
        local_60 = *(undefined4 *)(param_5 + 1);
        local_58 = *param_6;
        local_50 = *(undefined4 *)(param_6 + 1);
        local_40 = local_80;
        local_30 = local_70;
        local_48 = local_88;
        local_38 = local_78;
        FUN_143091410(*(undefined8 *)(param_1 + 0x378),&local_38,&local_48,param_7,param_2,param_3,
                      &local_58,&local_68);
        if ((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
          FUN_140447710(*(undefined8 *)(param_1 + 0x398));
        }
        FUN_140a0e280(param_1,param_8);
      }
    }
  }
  return;
}



// FUNCTION 140a1bf70 FUN_140a1bf70 body=381 status=ok
// SIG undefined FUN_140a1bf70(void)

void FUN_140a1bf70(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  
  FUN_142357eb0();
  if ((((*(longlong *)(param_1 + 0x7b8) == 0) || (fVar3 = *(float *)(param_1 + 0x7a0), fVar3 <= 0.0)
       ) || (*(longlong *)(param_1 + 2000) == 0)) || (*(char *)(param_1 + 0x790) == '\0'))
  goto LAB_140a1c0d7;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
    fVar3 = *(float *)(param_1 + 0x7a0);
    if (lVar1 != 0) goto LAB_140a1bfe6;
    fVar2 = 0.0;
  }
  else {
LAB_140a1bfe6:
    fVar2 = *(float *)(lVar1 + 0x790);
  }
  fVar3 = (fVar2 - *(float *)(param_1 + 0x7a4)) / fVar3;
  if (*(longlong *)(param_1 + 0x780) != 0) {
    fVar3 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x780),fVar3);
  }
  if (0.0 <= fVar3) {
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x428))
            (*(longlong **)(param_1 + 2000),&local_48,*(undefined8 *)(param_1 + 0x798));
  local_38 = (local_48 - *(float *)(param_1 + 0x7a8)) * fVar3 + *(float *)(param_1 + 0x7a8);
  local_34 = (local_44 - *(float *)(param_1 + 0x7ac)) * fVar3 + *(float *)(param_1 + 0x7ac);
  local_30 = (local_40 - *(float *)(param_1 + 0x7b0)) * fVar3 + *(float *)(param_1 + 0x7b0);
  FUN_14223c850(*(undefined8 *)(param_1 + 0x7b8),&local_38,0,0,0);
  if (fVar3 < 1.0) {
    return;
  }
LAB_140a1c0d7:
  FUN_14288e3d0(param_1 + 0x30,0);
  return;
}



// FUNCTION 140a1c0f0 FUN_140a1c0f0 body=569 status=ok
// SIG undefined FUN_140a1c0f0(void)

void FUN_140a1c0f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  
  FUN_142357eb0();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (((lVar2 != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) &&
     (cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0')) {
    local_res8 = 0;
    FUN_1409f2120(param_1 + 0x8d0,&local_res8);
    puVar6 = *(undefined8 **)(param_1 + 0x8d0);
    puVar5 = puVar6 + (longlong)*(int *)(param_1 + 0x8d8) * 0x3a;
    if (puVar6 != puVar5) {
      pfVar4 = (float *)((longlong)puVar6 + 0x1b4);
      do {
        cVar1 = FUN_140a180a0(param_1,puVar6);
        if (cVar1 != '\0') {
          if (((((-(float)DAT_146294aa0 < pfVar4[-2]) && (pfVar4[-2] < (float)DAT_146294aa0)) &&
               ((-DAT_146294aa0._4_4_ < pfVar4[-1] &&
                ((pfVar4[-1] < DAT_146294aa0._4_4_ && (-DAT_146294aa8 < *pfVar4)))))) &&
              (*pfVar4 < DAT_146294aa8)) && (*(longlong *)(pfVar4 + -0x69) != 0)) {
            local_40 = *puVar6;
            pfVar4[-0x69] = 0.0;
            pfVar4[-0x68] = 0.0;
            local_48 = param_1;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x720,&local_48);
          }
          puVar3 = (undefined8 *)FUN_1409fb780(param_1,local_58,puVar6);
          *(undefined8 *)(pfVar4 + -2) = *puVar3;
          *pfVar4 = *(float *)(puVar3 + 1);
          *(undefined8 *)(pfVar4 + 1) = *(undefined8 *)(pfVar4 + 4);
          pfVar4[3] = pfVar4[6];
        }
        FUN_140a1f480(param_1,param_2,puVar6);
        FUN_140a1fac0(param_1,param_2,puVar6);
        local_68 = *(float *)(param_1 + 0x220) + pfVar4[4];
        local_64 = *(float *)(param_1 + 0x224) + pfVar4[5];
        local_60 = *(float *)(param_1 + 0x228) + pfVar4[6];
        FUN_14223c850(*puVar6,&local_68,0,0,0);
        puVar6 = puVar6 + 0x3a;
        pfVar4 = pfVar4 + 0x74;
      } while (puVar6 != puVar5);
    }
  }
  return;
}



// FUNCTION 140a1c330 FUN_140a1c330 body=698 status=ok
// SIG undefined FUN_140a1c330(void)

void FUN_140a1c330(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  longlong local_38;
  longlong *local_30;
  
  FUN_142cae030();
  if ((0.0 < *(float *)(param_1 + 0x19dc)) &&
     (param_2 = *(float *)(param_1 + 0x19e0) - param_2, *(float *)(param_1 + 0x19e0) = param_2,
     param_2 <= 0.0)) {
    *(float *)(param_1 + 0x19e0) = *(float *)(param_1 + 0x19dc);
    if ((*(longlong *)(param_1 + 0x19e8) == 0) || (*(char *)(param_1 + 0x19f0) != '\0')) {
LAB_140a1c430:
      FUN_140a1af40(param_1);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x19d8);
      do {
        do {
          iVar4 = iVar12;
          if ((iVar4 < 0) || (*(int *)(param_1 + 0x19d0) <= iVar4)) goto LAB_140a1c430;
          iVar12 = iVar4 + 1;
          *(int *)(param_1 + 0x19d8) = iVar12;
          lVar9 = *(longlong *)(param_1 + 0x19c8);
          if (*(longlong *)(param_1 + 0x19c8) == 0) {
            lVar9 = param_1 + 0x1908;
          }
          iVar3 = *(int *)(lVar9 + (longlong)iVar4 * 4);
        } while ((iVar3 < 0) || (*(int *)(param_1 + 0x1900) <= iVar3));
        lVar9 = *(longlong *)(param_1 + 0x18f8);
        if (*(longlong *)(param_1 + 0x18f8) == 0) {
          lVar9 = param_1 + 0x1478;
        }
      } while (*(char *)(lVar9 + 0x14 + (longlong)iVar3 * 0x18) != '\0');
      FUN_140a1d930(param_1,iVar3,CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1),0);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xf70);
  lVar11 = (longlong)*(int *)(param_1 + 0xf78) * 0xe8 + lVar9;
  if (lVar9 != lVar11) {
    pfVar8 = (float *)(lVar9 + 0xc0);
    do {
      if (((0.0001 < ABS(pfVar8[-2])) || (0.0001 < ABS(pfVar8[-1]))) || (0.0001 < ABS(*pfVar8))) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      *(undefined1 *)(pfVar8 + -0x14) = uVar10;
      lVar9 = lVar9 + 0xe8;
      pfVar8 = pfVar8 + 0x3a;
    } while (lVar9 != lVar11);
  }
  if (((*(longlong **)(param_1 + 0x19e8) != (longlong *)0x0) &&
      (*(char *)(param_1 + 0x19f0) == '\0')) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x19e8) + 0x950))(), cVar7 != '\0')) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x19e8) + 0x910);
    if (lVar9 != 0) {
      lVar9 = lVar9 + 0x3d0;
      cVar7 = APawn::IsPawnControlled(lVar9);
      if (cVar7 != '\0') {
        FUN_142d5edb0(lVar9,&local_38);
        bVar6 = false;
        if (local_38 != 0) {
          lVar9 = *(longlong *)(local_38 + 8);
          lVar11 = FUN_142e262b0();
          for (; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
            if (lVar9 == lVar11) {
              bVar5 = true;
              goto LAB_140a1c564;
            }
          }
          bVar5 = false;
LAB_140a1c564:
          lVar9 = 0;
          if (bVar5) {
            lVar9 = local_38;
          }
          if ((lVar9 != 0) && (bVar6 = false, *(char *)(lVar9 + 0x510) != '\0')) {
            bVar6 = true;
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        if (!bVar6) {
          return;
        }
      }
    }
    FUN_140a0ef20(param_1);
  }
  return;
}



// FUNCTION 140a1c5f0 FUN_140a1c5f0 body=1978 status=ok
// SIG undefined FUN_140a1c5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a1c5f0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  byte bVar25;
  int iVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auStack_338 [32];
  uint local_318;
  longlong **local_310;
  undefined8 local_308;
  byte local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined4 local_2d0;
  longlong *local_2c8;
  longlong *local_2c0 [2];
  undefined1 local_2b0 [520];
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2d8 = param_1;
  FUN_142357eb0();
  plVar20 = (longlong *)param_1[0x23];
  uVar23 = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  if (plVar20 == (longlong *)0x0) {
    return;
  }
  local_2c8 = (longlong *)param_1[0x24];
  local_2e0 = plVar20;
  if ((local_2c8 == (longlong *)0x0) &&
     (local_2c8 = (longlong *)FUN_1423407b0(param_1), local_2c8 == (longlong *)0x0)) {
    return;
  }
  fVar3 = *(float *)(local_2c8 + 0x119);
  local_2f0 = 0xffffffffffffffff;
  uVar8 = (**(code **)(*plVar20 + 0x668))(plVar20);
  if (uVar8 == 0) {
LAB_140a1c707:
    uVar8 = uVar23;
  }
  else {
    lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140a1c707;
  }
  plVar10 = (longlong *)(**(code **)(*plVar20 + 0x688))(plVar20);
  local_2c0[0] = plVar20;
  if (plVar10 != (longlong *)0x0) {
    local_2c0[0] = plVar10;
  }
  bVar4 = false;
  if (param_1[199] != 0) {
    lVar9 = param_1[0x24];
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(param_1);
    }
    lVar9 = FUN_142f6c9f0(lVar9);
    if (lVar9 != 0) {
      lVar11 = UWebSocketNetDriver::StaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        puVar12 = (ulonglong *)FUN_142f5ed60(lVar9,&local_2e8);
        puVar19 = *(ulonglong **)(param_1[199] + 0x188);
        puVar2 = puVar19 + *(int *)(param_1[199] + 400);
        for (; puVar19 != puVar2; puVar19 = puVar19 + 1) {
          uVar22 = uVar23;
          if (*puVar19 != 0) {
            uVar13 = FUN_142f71d80();
            for (uVar18 = *puVar19;
                (uVar22 = uVar23, uVar18 != 0 && (uVar22 = *puVar19, uVar18 != uVar13));
                uVar18 = *(ulonglong *)(uVar18 + 0x30)) {
            }
          }
          uVar18 = uVar23;
          if (*puVar12 != 0) {
            uVar14 = FUN_142f71d80();
            for (uVar13 = *puVar12;
                (uVar18 = uVar23, uVar13 != 0 && (uVar18 = *puVar12, uVar13 != uVar14));
                uVar13 = *(ulonglong *)(uVar13 + 0x30)) {
            }
          }
          if (uVar22 == uVar18) {
            bVar4 = true;
            plVar20 = local_2e0;
            goto LAB_140a1c827;
          }
        }
        bVar4 = false;
        plVar20 = local_2e0;
      }
    }
  }
LAB_140a1c827:
  if ((uVar8 == 0) || (*(longlong *)(uVar8 + 0x6b8) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((uVar8 == 0) || (cVar7 = (**(code **)(*(longlong *)(uVar8 + 0x5b0) + 0x18))(), cVar7 == '\0'))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((bVar4) || (bVar5)) || (bVar6)) {
    local_2e8 = local_2f0;
    fVar28 = (float)FUN_142de77e0(param_1 + 0x72,plVar20,0,&local_2e8);
    *(float *)(param_1 + 0x82) = fVar28 + fVar3;
    if ((bVar5) || (bVar6)) {
      fVar28 = (float)FUN_142de77e0(param_1 + 0x61,plVar20,0,&local_2f0);
      *(float *)(param_1 + 0x71) = fVar28 + fVar3;
    }
  }
  else if (*(float *)(param_1 + 0x82) <= fVar3 && fVar3 != *(float *)(param_1 + 0x82)) {
    *(undefined4 *)(param_1 + 0x82) = 0;
  }
  local_2e8 = local_2f0;
  uVar27 = FUN_142de77e0(param_1 + 0x83,plVar20,0,&local_2e8);
  local_2e8 = local_2f0;
  fVar28 = (float)FUN_142de77e0(param_1 + 0x2f,plVar20,0);
  iVar26 = (int)param_1[0xc2] + -1;
  local_2f8 = 0;
  plVar10 = param_1;
  if (-1 < iVar26) {
    plVar1 = param_1 + 0x95;
    lVar11 = (longlong)iVar26 * 0x2c;
    lVar9 = lVar11;
    do {
      plVar20 = (longlong *)param_1[0xc1];
      if ((longlong *)param_1[0xc1] == (longlong *)0x0) {
        plVar20 = plVar1;
      }
      lVar21 = (longlong)plVar20 + lVar9;
      lVar15 = FWeakObjectPtr::Get(lVar21);
      if (lVar15 == 0) {
LAB_140a1c9e3:
        iVar24 = (int)param_1[0xc2];
        iVar17 = (iVar24 - iVar26) + -1;
        if (0 < iVar17) {
          iVar17 = 1;
        }
        if (iVar17 != 0) {
          uVar23 = (ulonglong)(param_1[0xc1] != 0) - 1 & (ulonglong)plVar1 | param_1[0xc1];
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + uVar23),(void *)((longlong)(iVar24 - iVar17) * 0x2c + uVar23)
                     ,(longlong)iVar17 * 0x2c);
          iVar24 = (int)param_1[0xc2];
        }
        *(int *)(param_1 + 0xc2) = iVar24 + -1;
        FUN_140a138c0(plVar1);
        bVar25 = local_2f8;
      }
      else {
        lVar16 = (**(code **)(*local_2c8 + 0x148))(local_2c8);
        if (lVar16 == 0) {
          uVar30 = 0;
        }
        else {
          uVar30 = *(undefined4 *)(lVar16 + 0x8c8);
        }
        cVar7 = FUN_142d373f0(lVar21 + 0x20,uVar30,uVar27);
        if (cVar7 != '\0') goto LAB_140a1c9e3;
        fVar29 = (float)FUN_142230c20(local_2c0[0],lVar15);
        *(float *)(lVar21 + 8) = fVar29;
        bVar25 = local_2f8 | fVar29 < fVar28;
        local_2f8 = bVar25;
        FUN_142d48b30(lVar21 + 0x14,fVar3);
      }
      uVar23 = (ulonglong)bVar25;
      lVar11 = lVar11 + -0x2c;
      lVar9 = lVar9 + -0x2c;
      iVar26 = iVar26 + -1;
      plVar10 = local_2d8;
      plVar20 = local_2e0;
    } while (-1 < iVar26);
  }
  cVar7 = FUN_142d3d1b0(plVar10 + 0xc3,fVar3);
  FUN_142d48b30(plVar10 + 0xc3,fVar3,uVar23,0);
  if (cVar7 == '\0') {
    if ((char)uVar23 != '\0') {
      fVar28 = (float)FUN_142de77e0(plVar10 + 0x61,plVar20,0,&local_2f0);
      *(float *)(plVar10 + 0x71) = fVar28 + fVar3;
      fVar28 = (float)FUN_142de77e0(plVar10 + 0x50,plVar20,0,&local_2f0);
      *(float *)(plVar10 + 0x60) = fVar28 + fVar3;
    }
  }
  else if ((char)uVar23 == '\0') {
    fVar28 = (float)FUN_142de77e0(plVar10 + 0x3f,plVar20,0,&local_2f0);
    *(float *)(plVar10 + 0x4f) = fVar28 + fVar3;
  }
  cVar7 = FUN_142d3d1b0(plVar10 + 0xc3,fVar3);
  if (cVar7 == '\0') {
    cVar7 = FUN_142d37460(plVar10 + 0xc3,fVar3,0x3f800000);
    if ((cVar7 == '\0') || (fVar3 < *(float *)(plVar10 + 0x60))) goto LAB_140a1cd3d;
    iVar26 = 3;
  }
  else {
    cVar7 = FUN_142d4e1b0();
    if ((cVar7 == '\0') || (fVar3 < *(float *)(plVar10 + 0x4f))) {
      if (fVar3 < *(float *)(plVar10 + 0x71)) goto LAB_140a1cd3d;
      iVar26 = 2;
    }
    else {
      iVar26 = 1;
    }
  }
  if (((longlong *)plVar10[0x23] != (longlong *)0x0) &&
     (lVar9 = (**(code **)(*(longlong *)plVar10[0x23] + 0x148))(), lVar9 != 0)) {
    fVar3 = *(float *)(lVar9 + 0x8c8);
    cVar7 = USequencerScriptingRangeExtensions::HasEnd(plVar10 + 0x93);
    if ((((cVar7 != '\0') && (cVar7 = FUN_142d373f0(plVar10 + 0x93,fVar3,0x3f800000), cVar7 == '\0')
         ) && ((*(float *)(plVar10 + 0x82) <= fVar3 || (iVar26 == 2)))) &&
       ((lVar9 = plVar10[0x24], lVar9 != 0 || (lVar9 = FUN_1423407b0(plVar10), lVar9 != 0)))) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar11 = 0;
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        lVar11 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4f8);
      }
      if (lVar11 != 0) {
        if (iVar26 == 1) {
          if (((*(longlong *)(lVar11 + 0x100) == 0) || (plVar10[200] == 0)) ||
             (cVar7 = FUN_142f62c20(), cVar7 == '\0')) {
            lVar15 = *(longlong *)(lVar11 + 0xf8);
          }
          else {
            lVar15 = *(longlong *)(lVar11 + 0x100);
          }
        }
        else if (iVar26 == 2) {
          lVar15 = *(longlong *)(lVar11 + 0x108);
        }
        else {
          if (iVar26 != 3) goto LAB_140a1cd3d;
          lVar15 = *(longlong *)(lVar11 + 0x110);
        }
        if (lVar15 != 0) {
          *(int *)(plVar10 + 0xc9) = iVar26;
          local_2b0[0] = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_318 = local_318 & 0xffffff00;
          FUN_1405f1370(local_2b0,*(undefined8 *)(lVar11 + 0x118),plVar10[0x23],0);
          local_310 = &local_2d8;
          local_308 = 0;
          local_318 = 0;
          local_2d8 = (longlong *)0xffffffff00000000;
          local_2d0 = 0;
          FUN_1405f8040(local_2c0,lVar9,lVar15,local_2b0);
          if (local_a8 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
LAB_140a1cd3d:
  if ((int)plVar10[0xc2] < 1) {
    (**(code **)(*plVar10 + 0x358))(plVar10,0);
  }
  return;
}



// FUNCTION 140a1cdb0 FUN_140a1cdb0 body=227 status=ok
// SIG undefined FUN_140a1cdb0(void)

void FUN_140a1cdb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_18 [2];
  
  FUN_142357eb0();
  if (*(char *)(param_1 + 0x250) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
      if (lVar2 == 0) goto LAB_140a1ce1e;
    }
    cVar1 = UWorld::IsInSeamlessTravel(lVar2);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x248) != '\0') {
        FUN_140a0bd20(param_1);
      }
      FUN_140a17250(param_1);
      FUN_140a170c0(param_1 + 600,param_1);
      *(undefined1 *)(param_1 + 0x250) = 0;
    }
  }
LAB_140a1ce1e:
  lVar2 = FUN_140a08d60(param_1);
  if (lVar2 != 0) {
    FUN_14058f880(&local_res8,param_1 + 0x268);
    if (local_res8 != 0) {
      FUN_14058f880(local_18,&local_res8);
      FUN_140c5b870(lVar2,local_18);
      if (local_18[0] != 0) {
        FUN_1405a53f0();
      }
      if (local_res8 != 0) {
        FUN_1405a53f0();
      }
    }
  }
  FUN_140a20530(param_1);
  return;
}



// FUNCTION 140a1cea0 FUN_140a1cea0 body=443 status=ok
// SIG undefined FUN_140a1cea0(void)

void FUN_140a1cea0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined4 local_res10 [2];
  longlong local_28;
  undefined4 *local_20 [3];
  
  FUN_142357eb0();
  if ((*(char *)(param_1 + 0x250) != '\0') &&
     (((lVar2 = *(longlong *)(param_1 + 0x120), lVar2 != 0 ||
       (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) &&
      (cVar1 = UWorld::IsInSeamlessTravel(lVar2), cVar1 == '\0')))) {
    if (*(char *)(param_1 + 0x248) != '\0') {
      FUN_140a0bd20(param_1);
    }
    FUN_140a17250(param_1);
    FUN_140a170c0(param_1 + 600,param_1);
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  lVar2 = FUN_140a08d60(param_1);
  if ((lVar2 != 0) && (FUN_14058f880(&local_res8,param_1 + 0x268), local_res8 != 0)) {
    FUN_14058f880(&local_28,&local_res8);
    FUN_140c5b870(lVar2,&local_28);
    if (local_28 != 0) {
      FUN_1405a53f0();
    }
    if (local_res8 != 0) {
      FUN_1405a53f0();
    }
  }
  FUN_140a20530(param_1);
  if (*(char *)(param_1 + 0x368) != '\0') {
    if (*(char *)(param_1 + 0x24b) == '\0') {
      cVar1 = *(char *)(param_1 + 0x24a);
    }
    else {
      plVar3 = (longlong *)FUN_140a09850(param_1);
      if (((plVar3 == (longlong *)0x0) ||
          (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x950))(plVar3), plVar3 == (longlong *)0x0))
         || (cVar1 = (**(code **)(*plVar3 + 0x780))(plVar3), cVar1 == '\0')) goto LAB_140a1cfe8;
      cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3);
    }
    if (cVar1 != '\0') {
      FUN_140a1d3b0(param_1,param_2);
    }
  }
LAB_140a1cfe8:
  local_20[0] = local_res10;
  local_res10[0] = param_2;
  FUN_1409f2300(param_1 + 0x450,local_20);
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  cVar1 = FUN_14254a160(lVar2);
  LOCK();
  *(uint *)(param_1 + 0x4b0) = (uint)(cVar1 != '\0');
  UNLOCK();
  return;
}



// FUNCTION 140a1d060 FUN_140a1d060 body=838 status=ok
// SIG undefined FUN_140a1d060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1d060(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  longlong local_res20;
  float local_58;
  float fStack_54;
  undefined8 local_4c;
  float local_44;
  
  iVar5 = FUN_14233f450();
  if (iVar5 != 3) goto LAB_140a1d38b;
  if (param_1[0x59] == 0) {
LAB_140a1d286:
    FUN_140a00450(param_1);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x2d9) != '\0') {
      uVar6 = FUN_140a63ba0();
      cVar4 = FUN_140b83580(uVar6);
      if (cVar4 == '\0') goto LAB_140a1d286;
    }
    if ((byte)((char)param_1[0x5a] - 1U) < 2) {
      if (param_1[0x5c] == 0) goto LAB_140a1d286;
      if ((char)param_1[0x5b] != '\0') {
        cVar4 = FUN_140b83580();
        if (cVar4 == '\0') goto LAB_140a1d286;
      }
      if (0.0 < *(float *)((longlong)param_1 + 0x32c)) {
        fVar9 = *(float *)(param_1 + 0x60);
        pfVar7 = (float *)(**(code **)(*(longlong *)param_1[0x59] + 0x308))
                                    ((longlong *)param_1[0x59],&local_4c);
        if (fVar9 * fVar9 * 0.25 <=
            *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1] + pfVar7[2] * pfVar7[2]) {
          lVar1 = *(longlong *)(param_1[0x5c] + 0x168);
          if (lVar1 == 0) {
            local_4c = _DAT_1468b5d90;
            local_44 = DAT_1468b5d98;
          }
          else {
            local_4c = *(undefined8 *)(lVar1 + 0x220);
            local_44 = *(float *)(lVar1 + 0x228);
          }
          fVar9 = local_44;
          uVar6 = local_4c;
          lVar1 = *(longlong *)(param_1[0x59] + 0x168);
          if (lVar1 == 0) {
            local_4c = _DAT_1468b5d90;
            local_44 = DAT_1468b5d98;
          }
          else {
            local_4c = *(undefined8 *)(lVar1 + 0x220);
            local_44 = *(float *)(lVar1 + 0x228);
          }
          local_58 = (float)uVar6;
          fStack_54 = (float)((ulonglong)uVar6 >> 0x20);
          local_58 = local_58 - (float)local_4c;
          fStack_54 = fStack_54 - (float)((ulonglong)local_4c >> 0x20);
          fVar9 = SQRT(fStack_54 * fStack_54 + local_58 * local_58 +
                       (fVar9 - local_44) * (fVar9 - local_44));
          if (fVar9 < *(float *)((longlong)param_1 + 0x32c) ||
              fVar9 == *(float *)((longlong)param_1 + 0x32c)) {
            iVar5 = FUN_14233f450(param_1);
            if (iVar5 == 3) {
              if ((char)param_1[0x5a] != '\0') {
                *(undefined1 *)(param_1 + 0x5a) = 0;
                (**(code **)(*param_1 + 0x5b0))(param_1);
              }
              FUN_140a21c80(param_1);
            }
            *(undefined1 *)((longlong)param_1 + 0x2d1) = 1;
          }
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x2d1) != '\x02') goto LAB_140a1d38b;
  lVar1 = param_1[0x5d];
  if ((param_1[0x59] == 0) || (lVar8 = *(longlong *)(param_1[0x59] + 0x718), lVar8 == 0)) {
LAB_140a1d34c:
    param_1[0x5d] = 0;
  }
  else {
    lVar8 = FUN_142dcd660(lVar8,0);
    if (lVar8 == 0) {
      if (*(longlong *)(*(longlong *)(param_1[0x59] + 0x718) + 0x118) == param_1[0x59])
      goto LAB_140a1d34c;
      plVar2 = (longlong *)param_1[0x5d];
      if (plVar2 != (longlong *)0x0) {
        lVar8 = FUN_1413f82e0();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          cVar4 = (**(code **)(*plVar2 + 0x950))(plVar2);
          if (cVar4 != '\0') goto LAB_140a1d34c;
        }
      }
    }
    else {
      param_1[0x5d] = lVar8;
    }
  }
  if (param_1[0x5d] != lVar1) {
    local_res20 = param_1[0x59];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5e,&local_res20);
  }
LAB_140a1d38b:
  BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a1d3b0 FUN_140a1d3b0 body=1241 status=ok
// SIG undefined FUN_140a1d3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a1d3b0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  float local_250;
  undefined1 local_248 [32];
  undefined1 local_228 [12];
  float local_21c;
  float local_208;
  float fStack_204;
  float local_200;
  undefined1 local_1c4 [44];
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [72];
  longlong local_148;
  longlong local_128;
  undefined1 local_118 [32];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  lVar6 = *(longlong *)(param_1 + 0x120);
  if ((lVar6 != 0) || (lVar6 = FUN_1423407b0(), lVar6 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x398);
    iVar13 = *(int *)(param_1 + 0x3a0);
    iVar16 = 0;
    fVar3 = *(float *)(lVar6 + 0x790);
    if (0 < iVar13) {
      do {
        cVar4 = FUN_142341250(lVar6,*plVar1 + (longlong)iVar16 * 8,0);
        if (cVar4 == '\0') {
          iVar13 = *(int *)(param_1 + 0x3a0);
          iVar5 = (iVar13 - iVar16) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar16 * 8),
                       (void *)(*plVar1 + (longlong)(iVar13 - iVar5) * 8),(longlong)iVar5 << 3);
            iVar13 = *(int *)(param_1 + 0x3a0);
          }
          *(int *)(param_1 + 0x3a0) = iVar13 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        else {
          iVar16 = iVar16 + 1;
        }
        iVar13 = *(int *)(param_1 + 0x3a0);
      } while (iVar16 < iVar13);
    }
    lVar12 = *plVar1;
    lVar2 = lVar12 + (longlong)iVar13 * 8;
    if (lVar12 != lVar2) {
      local_268 = 0;
      do {
        local_198 = 0xffffffff;
        local_194 = 0;
        local_288 = 0;
        FUN_1422ffb20(local_190,0,local_278,0);
        FUN_1426d3dd0(local_118);
        FUN_1426ea8d0(local_118,2);
        local_f8 = 0;
        local_f4 = 0;
        local_f0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        cVar4 = FUN_14234afa0(lVar6,lVar12,&local_198);
        if ((((cVar4 != '\0') && (0 < (int)local_90)) &&
            (FUN_140729f20(local_228,local_98), local_21c < 1.0)) &&
           (((local_208 != 0.0 || (fStack_204 != 0.0)) || (local_200 != 0.0)))) {
          plVar1 = (longlong *)(param_1 + 0x3a8);
          iVar13 = *(int *)(param_1 + 0x3b0);
          lVar17 = (longlong)iVar13;
          *(int *)(param_1 + 0x3b0) = iVar13 + 1;
          if (*(int *)(param_1 + 0x3b4) < iVar13 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar1,iVar13);
          }
          *(float *)(*plVar1 + lVar17 * 0x18) = (fVar3 - param_2) + *(float *)(param_1 + 0x37c);
          lVar7 = *plVar1;
          *(ulonglong *)(lVar7 + 4 + lVar17 * 0x18) = CONCAT44(fStack_204,local_208);
          *(float *)(lVar7 + 0xc + lVar17 * 0x18) = local_200;
          cVar4 = FWeakObjectPtr::IsValid();
          if (cVar4 == '\0') {
            uVar8 = 0;
          }
          else {
            lVar7 = FWeakObjectPtr::Get(local_1c4);
            uVar8 = FUN_142db9220(*(undefined1 *)(lVar7 + 0x50));
          }
          *(undefined8 *)(*plVar1 + 0x10 + lVar17 * 0x18) = uVar8;
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (local_128 != 0) {
          FMemory::Free();
        }
        if (local_148 != 0) {
          FMemory::Free();
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != lVar2);
    }
    uVar11 = 0;
    pfVar10 = *(float **)(param_1 + 0x3a8);
    iVar13 = *(int *)(param_1 + 0x3b0);
    pfVar9 = pfVar10 + (longlong)iVar13 * 6;
    if (pfVar10 != pfVar9) {
      do {
        if (*pfVar10 <= fVar3 && fVar3 != *pfVar10) {
          local_268 = DAT_1468b5da0;
          local_258 = *(undefined8 *)(pfVar10 + 1);
          local_260 = DAT_1468b5da8;
          local_250 = pfVar10[3];
          local_288 = CONCAT71(local_288._1_7_,1);
          lVar6 = FUN_1405ab680(param_1,&local_258,0x41a00000,&local_268);
          if (lVar6 != 0) {
            if (*(longlong *)(pfVar10 + 4) != 0) {
              FUN_1405aaf50(lVar6);
            }
            FUN_1405a3150(lVar6,local_248,*(undefined8 *)(param_1 + 0x370),0);
            FUN_140591060(local_248);
          }
        }
        pfVar10 = pfVar10 + 6;
      } while (pfVar10 != pfVar9);
      iVar13 = *(int *)(param_1 + 0x3b0);
    }
    if (iVar13 != 0) {
      lVar6 = (longlong)iVar13;
      bVar15 = fVar3 < **(float **)(param_1 + 0x3a8) || fVar3 == **(float **)(param_1 + 0x3a8);
      uVar14 = uVar11;
      uVar18 = uVar11;
      do {
        iVar13 = (int)uVar14;
        uVar11 = uVar11 + 1;
        uVar14 = (ulonglong)(iVar13 + 1);
        if ((longlong)uVar11 < lVar6) {
          pfVar9 = (float *)(*(longlong *)(param_1 + 0x3a8) + uVar11 * 0x18);
          do {
            if (bVar15 != (fVar3 < *pfVar9 || fVar3 == *pfVar9)) break;
            uVar14 = (ulonglong)((int)uVar14 + 1);
            uVar11 = uVar11 + 1;
            pfVar9 = pfVar9 + 6;
          } while ((longlong)uVar11 < lVar6);
        }
        iVar16 = (int)uVar14 - iVar13;
        if (bVar15 != false) {
          iVar5 = (int)uVar18;
          if (iVar5 != iVar13) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar5 * 0x18),
                       (void *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar13 * 0x18),
                       (longlong)iVar16 * 0x18);
          }
          uVar18 = (ulonglong)(uint)(iVar5 + iVar16);
        }
        bVar15 = (bool)(bVar15 ^ 1);
      } while ((longlong)uVar11 < lVar6);
      *(int *)(param_1 + 0x3b0) = (int)uVar18;
    }
  }
  return;
}



// FUNCTION 140a1d890 FUN_140a1d890 body=145 status=ok
// SIG undefined FUN_140a1d890(void)

void FUN_140a1d890(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x19d8) = 0xffffffff;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x19d4)) {
    FUN_140a13a90(param_1 + 0x1908,0);
  }
  *(undefined8 *)(param_1 + 0x19dc) = 0;
  if (0 < *(int *)(param_1 + 0x1900)) {
    do {
      FUN_140a1d930(param_1,iVar1,param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x1900));
  }
  return;
}



// FUNCTION 140a1d930 FUN_140a1d930 body=465 status=ok
// SIG undefined FUN_140a1d930(void)

void FUN_140a1d930(longlong param_1,int param_2,byte param_3,char param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1900))) {
    lVar5 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar5 = param_1 + 0x1478;
    }
    lVar4 = (longlong)param_2;
    iVar1 = *(int *)(lVar5 + 0xc + lVar4 * 0x18);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xf78))) {
      uVar9 = 0;
      lVar6 = (longlong)iVar1 * 0xe8 + *(longlong *)(param_1 + 0xf70);
      if (param_4 == '\0') {
        uVar8 = *(undefined4 *)(param_1 + 0x1410);
      }
      else {
        uVar8 = 0;
      }
      FAlphaBlend::SetBlendTime(lVar6 + 0x38,uVar8);
      if (param_3 != 0) {
        uVar9 = 0x3f800000;
      }
      local_38 = uVar9;
      local_34 = uVar9;
      local_30 = uVar9;
      FUN_1422b4680(lVar6,&local_38);
      if (param_4 != '\0') {
        *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(lVar6 + 0xdc);
        *(undefined8 *)(lVar6 + 0x94) = *(undefined8 *)(lVar6 + 0xdc);
        *(undefined4 *)(lVar6 + 0xc0) = *(undefined4 *)(lVar6 + 0xe4);
        *(undefined4 *)(lVar6 + 0x9c) = *(undefined4 *)(lVar6 + 0xe4);
      }
      if (param_3 != 0) {
        *(undefined1 *)(lVar6 + 0x70) = 0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x19e4);
    if (param_3 != *(byte *)(lVar5 + 0x14 + lVar4 * 0x18)) {
      *(uint *)(param_1 + 0x19e4) = (uint)param_3 * 2 + -1 + iVar1;
    }
    *(byte *)(lVar5 + 0x14 + lVar4 * 0x18) = param_3;
    *(undefined1 *)(lVar5 + 0x15 + lVar4 * 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) = 0;
    if (((param_3 != 0) && (*(longlong *)(param_1 + 0x19e8) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x19e8) + 0x910) != 0)) {
      fVar7 = (float)FUN_142d1b990();
      *(float *)(lVar5 + 0x10 + lVar4 * 0x18) = fVar7 * *(float *)(param_1 + 0x1414);
    }
    iVar2 = *(int *)(param_1 + 0x141c);
    bVar3 = *(int *)(param_1 + 0x19e4) < iVar2;
    if (((iVar1 < iVar2 != bVar3) && (*(longlong **)(param_1 + 0x19e8) != (longlong *)0x0)) &&
       (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x19e8) + 0xa48))(), lVar5 != 0)) {
      FUN_142cd0450(param_1 + 0x1428,lVar5,bVar3);
    }
  }
  return;
}



// FUNCTION 140a1db10 FUN_140a1db10 body=285 status=ok
// SIG undefined FUN_140a1db10(void)

void FUN_140a1db10(longlong param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1900))) {
    lVar2 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar2 = param_1 + 0x1478;
    }
    iVar1 = *(int *)(lVar2 + 0xc + (longlong)param_2 * 0x18);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xf78))) {
      uVar4 = 0;
      lVar2 = (longlong)iVar1 * 0xe8 + *(longlong *)(param_1 + 0xf70);
      if (param_4 == '\0') {
        uVar3 = *(undefined4 *)(param_1 + 0x1410);
      }
      else {
        uVar3 = 0;
      }
      FAlphaBlend::SetBlendTime(lVar2 + 0x38,uVar3);
      if (param_3 != '\0') {
        uVar4 = 0x3f800000;
      }
      local_28 = uVar4;
      local_24 = uVar4;
      local_20 = uVar4;
      FUN_1422b4680(lVar2,&local_28);
      if (param_4 != '\0') {
        *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar2 + 0xdc);
        *(undefined8 *)(lVar2 + 0x94) = *(undefined8 *)(lVar2 + 0xdc);
        *(undefined4 *)(lVar2 + 0xc0) = *(undefined4 *)(lVar2 + 0xe4);
        *(undefined4 *)(lVar2 + 0x9c) = *(undefined4 *)(lVar2 + 0xe4);
      }
      if (param_3 != '\0') {
        *(undefined1 *)(lVar2 + 0x70) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140a1dc30 FUN_140a1dc30 body=151 status=ok
// SIG undefined FUN_140a1dc30(void)

void FUN_140a1dc30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x468);
  if (((cVar4 != '\0') && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x470), cVar4 != '\0')) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x480), cVar4 != '\0')) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x480);
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x470);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x468);
    FUN_1413eb140(param_1,uVar3,uVar2,uVar1);
  }
  return;
}



// FUNCTION 140a1dcf0 FUN_140a1dcf0 body=100 status=ok
// SIG undefined FUN_140a1dcf0(void)

void FUN_140a1dcf0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x298))();
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = param_1[0x1b] + *(longlong *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x9c) = DAT_146294aa0;
  *(undefined4 *)(lVar2 + 0xa4) = DAT_146294aa8;
  FUN_14071e940(param_1,param_2);
  return;
}



// FUNCTION 140a1dd60 FUN_140a1dd60 body=193 status=ok
// SIG undefined FUN_140a1dd60(void)

undefined8 FUN_140a1dd60(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x690))();
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_10 = *(int *)(param_1 + 0x108);
      lVar3 = (longlong)local_10;
      _Src = *(void **)(param_1 + 0x100);
      local_18 = (void *)0x0;
      if (local_10 == 0) {
        local_c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
      }
      FUN_141241900(lVar2,&local_18);
    }
  }
  return 1;
}



// FUNCTION 140a1de30 FUN_140a1de30 body=205 status=ok
// SIG undefined FUN_140a1de30(void)

undefined8 FUN_140a1de30(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x690))();
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(lVar2 + 0xe88) == '\0') {
        FUN_141241a60(lVar2);
      }
      lVar2 = *param_2;
      if (lVar2 != 0) {
        lVar3 = FUN_1413e48b0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          *(undefined1 *)(lVar2 + 0x75a) = *(undefined1 *)(param_1 + 0x100);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140a1df00 FUN_140a1df00 body=1229 status=ok
// SIG undefined FUN_140a1df00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140a1df00(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_518 [32];
  undefined1 local_4f8;
  undefined1 local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e0;
  undefined4 local_4d8;
  undefined4 *local_4d0;
  float local_4c8;
  undefined4 local_4c0;
  char local_4b8 [8];
  undefined8 local_4b0;
  undefined8 local_4a8 [2];
  undefined4 local_498;
  undefined8 local_494;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined1 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440 [2];
  undefined8 local_430;
  undefined1 local_428 [912];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  uVar2 = (**(code **)(*param_1 + 0x298))();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  local_430 = FWeakObjectPtr::Get(param_2[1] + 0x48 + param_1[0x1b]);
  uVar12 = 0xbf800000;
  if ((char)param_1[0x30] != '\0') {
    local_4a8[0] = 0xffffffffffffffff;
    uVar12 = FUN_142de77e0(param_1 + 0x20,*param_2,0,local_4a8);
  }
  if ((char)param_1[0x41] == '\0') {
    uVar4 = 0xc0000000;
  }
  else {
    local_4a8[0] = 0xffffffffffffffff;
    uVar4 = FUN_142de77e0(param_1 + 0x31,*param_2,0,local_4a8);
  }
  fVar11 = 0.0;
  local_48c = 0x461c4000;
  local_484 = 0x43fa0000;
  local_498 = 0xffffffff;
  local_494 = 0;
  local_488 = 0xbf800000;
  local_480 = 1;
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0xbf800000;
  local_45c = 0;
  if ((char)param_1[0xe5] == '\0') goto LAB_140a1e1b3;
  lVar3 = *(longlong *)(*param_2 + 0x568);
  if (lVar3 == 0) goto LAB_140a1e1b3;
  FUN_142dc1ad0(local_428);
  cVar1 = FUN_142cc5430(param_1 + 0xa2,lVar3,local_428);
  if (cVar1 == '\0') {
    cVar1 = FUN_142cc3a70(param_1 + 0xa2,lVar3,local_4a8);
    uVar2 = local_4a8[0];
    if (cVar1 != '\0') goto LAB_140a1e0fd;
  }
  else {
    local_4b8[0] = '\0';
    FUN_142dcd3a0(local_428,local_440,local_4b8);
    if (local_4b8[0] != '\0') {
      uVar2 = FUN_142dd0030(local_428);
LAB_140a1e0fd:
      FWeakObjectPtr::operator=(&local_498,uVar2);
    }
  }
  local_4b0 = 0xffffffffffffffff;
  uVar5 = FUN_142de77e0(param_1 + 0xa4,*param_2,0,&local_4b0);
  local_4b0 = 0xffffffffffffffff;
  local_494 = CONCAT44(uVar5,(undefined4)local_494);
  local_48c = FUN_142de77e0(param_1 + 0xb4,*param_2,0,&local_4b0);
  local_4b0 = 0xffffffffffffffff;
  local_484 = FUN_142de77e0(param_1 + 0xd4,*param_2,0,&local_4b0);
  local_4b0 = 0xffffffffffffffff;
  local_488 = FUN_142de77e0(param_1 + 0xc4,*param_2,0,&local_4b0);
  local_480 = (undefined1)param_1[0xe4];
LAB_140a1e1b3:
  if ((char)param_1[0xf6] != '\0') {
    local_4b0 = *(undefined8 *)(*param_2 + 0x568);
    fVar6 = (float)FUN_142de77e0(param_1 + 0xe6,*param_2,0,&local_4b0);
    if ((0.0 < (float)(0.5 <= fVar6)) &&
       (lVar3 = (**(code **)(*(longlong *)*param_2 + 0x148))(), lVar3 != 0)) {
      fVar11 = (float)(0.5 <= fVar6) + *(float *)(lVar3 + 0x790);
    }
  }
  uVar2 = *(undefined8 *)(*param_2 + 0x568);
  local_4b0 = uVar2;
  uVar5 = FUN_142de77e0(param_1 + 0x92,*param_2,0,&local_4b0);
  local_4a8[0] = uVar2;
  fVar6 = (float)FUN_142de77e0(param_1 + 0x82,*param_2,0,local_4a8);
  local_458 = uVar2;
  fVar7 = (float)FUN_142de77e0(param_1 + 0x72,*param_2,0,&local_458);
  local_450 = uVar2;
  fVar8 = (float)FUN_142de77e0(param_1 + 0x62,*param_2,0,&local_450);
  local_448 = uVar2;
  fVar9 = (float)FUN_142de77e0(param_1 + 0x52,*param_2,0,&local_448);
  local_440[0] = uVar2;
  fVar10 = (float)FUN_142de77e0(param_1 + 0x42,*param_2,0,local_440);
  local_4d0 = &local_498;
  if ((char)param_1[0xe5] == '\0') {
    local_4d0 = (undefined4 *)0x0;
  }
  local_4f8 = 0.5 <= fVar9;
  local_4f0 = 0.5 <= fVar8;
  local_4e8 = 0.5 <= fVar7;
  local_4e0 = 0.5 <= fVar6;
  local_4d8 = uVar4;
  local_4c8 = fVar11;
  local_4c0 = uVar5;
  FUN_1409f83f0(local_430,1,uVar12,0.5 <= fVar10);
  lVar3 = param_1[0x1b];
  *(undefined1 *)(param_2[1] + 0x29 + lVar3) = 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 140a1e3d0 FUN_140a1e3d0 body=723 status=ok
// SIG undefined FUN_140a1e3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a1e3d0(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  char cVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  pfVar1 = (float *)(param_1 + 0xa0);
  if ((((float)DAT_146294aa0 == *pfVar1) && (DAT_146294aa0._4_4_ == *(float *)(param_1 + 0xa4))) &&
     (DAT_146294aa8 == *(float *)(param_1 + 0xa8))) {
    return 0;
  }
  pfVar4 = (float *)AREDDF_FigureSkeletalBase::GetFigureRotation_Implementation
                              (*(longlong *)(param_1 + 0x10) + 0x6e8,&local_5c);
  fVar10 = *(float *)(param_1 + 0xa4) - pfVar4[1];
  fVar9 = *(float *)(param_1 + 0xa8) - pfVar4[2];
  fVar9 = SQRT(fVar10 * fVar10 + (*pfVar1 - *pfVar4) * (*pfVar1 - *pfVar4) + fVar9 * fVar9);
  if (0.0001 <= fVar9) {
    FUN_1412184a0(*(undefined8 *)(param_1 + 0x18),&DAT_146865c60);
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb48) + 0x608);
    (**(code **)(*plVar2 + 0x440))(plVar2,&DAT_146865c60,0);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168);
    if (lVar7 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar7 + 0x220);
      local_60 = *(float *)(lVar7 + 0x228);
    }
    local_54 = local_60;
    local_60 = *(float *)(param_1 + 0xa8) - local_60;
    local_5c = local_68;
    local_68 = CONCAT44(*(float *)(param_1 + 0xa4) - (float)((ulonglong)local_68 >> 0x20),
                        *pfVar1 - (float)local_68);
    puVar6 = (undefined8 *)FVector::Rotation(&local_68,local_38);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x50);
    if (cVar3 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x50);
      lVar7 = *(longlong *)(lVar7 + 0x168);
      if (lVar7 == 0) {
        uVar11 = 0;
        uVar12 = 0;
        local_54 = 0.0;
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = uRam00000001468657fc;
      }
      else {
        local_48 = *(undefined4 *)(lVar7 + 0x210);
        uStack_44 = *(undefined4 *)(lVar7 + 0x214);
        uStack_40 = *(undefined4 *)(lVar7 + 0x218);
        uVar11 = *(undefined4 *)(lVar7 + 0x220);
        uVar12 = *(undefined4 *)(lVar7 + 0x224);
        local_54 = *(float *)(lVar7 + 0x228);
        uStack_3c = *(undefined4 *)(lVar7 + 0x21c);
      }
      *(ulonglong *)(param_1 + 0x58) = CONCAT44(uVar12,uVar11);
      *(float *)(param_1 + 0x60) = local_54;
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)pfVar1;
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0xa8);
      puVar8 = (undefined8 *)FQuat::Rotator(&local_48,&local_5c);
      *(undefined8 *)(param_1 + 0x70) = *puVar8;
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(puVar8 + 1);
      *(undefined8 *)(param_1 + 0x7c) = *puVar6;
      uVar11 = *(undefined4 *)(puVar6 + 1);
      *(float *)(param_1 + 0x8c) = 500.0 / fVar9;
      *(undefined4 *)(param_1 + 0x84) = uVar11;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0x90) = 3;
  }
  else {
    FUN_14223c850(*(undefined8 *)(param_1 + 0x18),pfVar1,0,0,1);
    FUN_140a1ae90(param_1,1);
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 140a1e6b0 FUN_140a1e6b0 body=135 status=ok
// SIG undefined FUN_140a1e6b0(void)

void FUN_140a1e6b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    if (param_1[0x93] != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0x93);
      param_1[0x93] = 0;
    }
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x8f);
    FUN_1413ebbe0(param_1,uVar2);
  }
  return;
}



// FUNCTION 140a1e740 FUN_140a1e740 body=71 status=ok
// SIG undefined FUN_140a1e740(void)

void FUN_140a1e740(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x4c0);
    }
    if (lVar1 != 0) {
      FUN_140a1e790(*(longlong *)(param_1 + 0xa8),lVar1,*(undefined8 *)(param_1 + 0x98),
                    *(longlong *)(param_1 + 0xe0) + 0x260);
      return;
    }
  }
  return;
}



// FUNCTION 140a1e790 FUN_140a1e790 body=152 status=ok
// SIG undefined FUN_140a1e790(void)

void FUN_140a1e790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_1424600f0();
    *param_4 = uVar1;
    return;
  }
  *param_4 = 0;
  return;
}



// FUNCTION 140a1e830 FUN_140a1e830 body=346 status=ok
// SIG undefined FUN_140a1e830(void)

void FUN_140a1e830(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_28 [16];
  
  iVar10 = (int)param_1[0x86];
  uVar8 = 0;
  if (0 < iVar10) {
    plVar5 = (longlong *)param_1[0x85];
    uVar11 = uVar8;
    do {
      if ((longlong *)*plVar5 == param_2) {
        FUN_140a12330(param_1 + 0x85,uVar8,1,CONCAT71((int7)(int3)((uint)iVar10 >> 8),1));
        break;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar11 = uVar11 + 1;
      plVar5 = plVar5 + 5;
    } while ((longlong)uVar11 < (longlong)iVar10);
  }
  lVar12 = *param_1;
  uVar6 = (**(code **)(*param_2 + 400))(param_2,local_28);
  (**(code **)(lVar12 + 0x338))(param_1,uVar6);
  iVar10 = (int)param_1[0x95] + -1;
  if (-1 < iVar10) {
    plVar5 = param_1 + 0x94;
    lVar9 = (longlong)iVar10 << 4;
    lVar13 = (longlong)(int)param_1[0x95] << 4;
    lVar12 = lVar9;
    do {
      if ((*(longlong *)(lVar9 + *plVar5) == 0) ||
         (lVar2 = *(longlong *)(lVar9 + 8 + *plVar5), lVar2 == 0)) {
LAB_140a1e8fe:
        plVar3 = *(longlong **)(lVar12 + 8 + *plVar5);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        iVar4 = (int)param_1[0x95];
        iVar7 = (iVar4 - iVar10) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar12 + *plVar5),(void *)(lVar13 + *plVar5),(longlong)iVar7 << 4);
          iVar4 = (int)param_1[0x95];
        }
        *(int *)(param_1 + 0x95) = iVar4 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar5);
      }
      else {
        piVar1 = (int *)(lVar2 + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (iVar4 < 1) goto LAB_140a1e8fe;
      }
      lVar13 = lVar13 + -0x10;
      lVar12 = lVar12 + -0x10;
      lVar9 = lVar9 + -0x10;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  return;
}



// FUNCTION 140a1e990 FUN_140a1e990 body=258 status=ok
// SIG undefined FUN_140a1e990(void)

void FUN_140a1e990(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (*(char *)(param_1 + 0x338) != '\0') {
    plVar6 = *(longlong **)(param_1 + 0x340);
    plVar1 = plVar6 + *(int *)(param_1 + 0x348);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      uVar4 = 0;
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x350);
        uVar5 = (longlong)*(int *)(param_1 + 0x358) & 0x1fffffffffffffff;
        if (plVar3 + *(int *)(param_1 + 0x358) < plVar3) {
          uVar5 = uVar4;
        }
        if (uVar5 != 0) {
          do {
            if (*plVar3 != 0) {
              FUN_1405a5510(lVar2);
            }
            plVar3 = plVar3 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar5);
        }
        FUN_1405a5360();
      }
    }
    *(undefined4 *)(param_1 + 0x348) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x34c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x340,0);
    }
    *(undefined1 *)(param_1 + 0x338) = 0;
  }
  return;
}



// FUNCTION 140a1eaa0 FUN_140a1eaa0 body=558 status=ok
// SIG undefined FUN_140a1eaa0(void)

void FUN_140a1eaa0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  
  plVar2 = (longlong *)FUN_140a09850();
  if (plVar2 != (longlong *)0x0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(plVar2 + 0xae,param_1 + 0x2e8);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2 + 0xae);
    FWeakObjectPtr::operator=(param_1 + 0x2e8,0);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    if (0 < *(int *)(param_1 + 0x1b8)) {
      lVar4 = param_1 + 0x2a8;
      TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(plVar2 + 0x9e,lVar4);
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2 + 0x9e);
      FWeakObjectPtr::operator=(lVar4,0);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(plVar2 + 0xa0,param_1 + 0x2b8);
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2 + 0xa0);
      FWeakObjectPtr::operator=(lVar4,0);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(plVar2 + 0xa8,param_1 + 0x2c8);
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2 + 0xa8);
      FWeakObjectPtr::operator=(lVar4,0);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(plVar2 + 0xaa,param_1 + 0x2d8);
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2 + 0xaa);
      FWeakObjectPtr::operator=(lVar4,0);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
    }
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      bVar5 = 0;
      do {
        cVar1 = FUN_14307eaa0(plVar2,bVar5,param_1);
        if (cVar1 != '\0') {
          uVar3 = UUGStartScreenUW::GetPrivateStaticClass();
          lVar4 = (**(code **)(*plVar2 + 0x7f8))(plVar2,uVar3,bVar5);
          if (lVar4 != 0) {
            TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar4 + 0x238,param_1 + 0x288);
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x238);
            TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar4 + 0x248,param_1 + 0x298);
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x248);
          }
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 8);
      FWeakObjectPtr::operator=(param_1 + 0x288,0);
      *(undefined8 *)(param_1 + 0x290) = 0;
      FWeakObjectPtr::operator=(param_1 + 0x298,0);
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
  }
  return;
}



// FUNCTION 140a1ecd0 FUN_140a1ecd0 body=1870 status=ok
// SIG undefined FUN_140a1ecd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1ecd0(longlong *param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (param_1[3] == 0) {
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  lVar9 = *param_1;
  if (lVar9 == 0) {
    return;
  }
  if (*(char *)(param_1[3] + 0xe23) == '\0') {
    return;
  }
  cVar4 = (char)param_1[0x12];
  if (cVar4 == '\0') {
    cVar4 = FUN_140a0b330(param_1);
    if (cVar4 != '\0') {
      cVar4 = FUN_140a06d40(param_1,param_1 + 0x14);
      if (cVar4 == '\0') {
        iVar6 = FUN_142fa3070(param_1[1] + 0x720,*(undefined4 *)(param_1[2] + 0x6e8),
                              *(undefined4 *)(param_1[2] + 0x6ec));
        if (iVar6 != -1) {
          *(undefined1 *)(param_1 + 0x12) = 4;
          *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x12) = 1;
        *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(*param_1 + 0x790);
      }
    }
    cVar4 = FUN_14122edc0(param_1[3]);
    if (cVar4 == '\0') {
      return;
    }
    lVar9 = param_1[2];
    lVar2 = *(longlong *)(lVar9 + 0xb30);
    cVar4 = '\0';
    if (lVar2 != 0) {
      local_58 = *(undefined8 *)(lVar2 + 0xdb8);
      fStack_50 = *(float *)(lVar2 + 0xdc0);
      uStack_4c = *(undefined4 *)(lVar2 + 0xdc4);
      cVar4 = FUN_142fa8370(*(undefined8 *)(lVar9 + 0x6b8),&local_58,*(undefined8 *)(lVar9 + 0x758))
      ;
    }
    if (cVar4 != '\0') {
      if (*(float *)(*param_1 + 0x790) <= *(float *)((longlong)param_1 + 0xac) + 1.0) {
        return;
      }
      FUN_14123cf60(param_1[3]);
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(*param_1 + 0x790);
    return;
  }
  if (cVar4 == '\x01') {
    cVar4 = FUN_140a0b330(param_1);
    if (cVar4 == '\0') goto LAB_140a1f1bc;
    if (param_1[3] == 0) {
      return;
    }
    if (param_1[2] == 0) {
      return;
    }
    if (*param_1 == 0) {
      return;
    }
    if (*(char *)(param_1[3] + 0xe23) == '\0') {
      return;
    }
    if (*(float *)(*param_1 + 0x790) - *(float *)((longlong)param_1 + 0x94) < 0.5) {
      return;
    }
    cVar4 = FUN_14122edc0();
    if (cVar4 == '\0') {
      pfVar1 = (float *)(param_1 + 0x14);
      if ((((float)DAT_146294aa0 != *pfVar1) ||
          (DAT_146294aa0._4_4_ != *(float *)((longlong)param_1 + 0xa4))) ||
         (DAT_146294aa8 != *(float *)(param_1 + 0x15))) {
        lVar9 = *(longlong *)(param_1[3] + 0x168);
        if (lVar9 == 0) {
          fStack_50 = (float)DAT_1468b5d98;
          puVar7 = &local_58;
          local_58 = _DAT_1468b5d90;
        }
        else {
          puVar7 = &local_68;
          fStack_60 = (float)*(undefined4 *)(lVar9 + 0x228);
          local_68 = *(undefined8 *)(lVar9 + 0x220);
        }
        local_78 = *puVar7;
        local_70 = *(float *)(puVar7 + 1);
        if (lVar9 == 0) {
          fStack_50 = (float)DAT_1464aa7b0;
          puVar7 = &local_58;
          local_58 = DAT_1464aa7a8;
        }
        else {
          puVar7 = (undefined8 *)FUN_142369f10(lVar9,&local_68);
        }
        fStack_50 = *(float *)(puVar7 + 1);
        FUN_140a166d0(param_1[2],pfVar1,&local_78,0x42c80000,CONCAT44(uVar5,0xbf800000),0,0,
                      0x40400000,0xbe99999a,
                      (*(float *)((longlong)param_1 + 0xa4) - local_78._4_4_) *
                      (float)((ulonglong)*puVar7 >> 0x20) +
                      (*pfVar1 - (float)local_78) * (float)*puVar7 +
                      (*(float *)(param_1 + 0x15) - local_70) * fStack_50 < -0.3);
        *(undefined1 *)(param_1 + 0x12) = 2;
        return;
      }
      goto LAB_140a1f1bc;
    }
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 == '\x03') {
        cVar4 = FWeakObjectPtr::IsValid(param_1 + 10);
        if ((cVar4 != '\0') &&
           (*(float *)(param_1 + 0x11) <= 1.0 && *(float *)(param_1 + 0x11) != 1.0)) {
          cVar4 = FWeakObjectPtr::IsValid(param_1 + 10);
          if (cVar4 == '\0') {
            return;
          }
          fVar13 = param_2 * *(float *)((longlong)param_1 + 0x8c) + *(float *)(param_1 + 0x11);
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
          *(float *)(param_1 + 0x11) = fVar13;
          fVar14 = fVar13 + fVar13;
          fVar12 = fVar14 * fVar14;
          fVar11 = fVar12;
          if (0.5 <= fVar13) {
            fVar11 = 1.0 - (fVar14 - 1.0);
            fVar11 = (1.0 - fVar11 * fVar11) + 1.0;
          }
          fVar11 = fVar11 * 0.5;
          local_78 = CONCAT44((*(float *)(param_1 + 0xd) - *(float *)((longlong)param_1 + 0x5c)) *
                              fVar11 + *(float *)((longlong)param_1 + 0x5c),
                              (*(float *)((longlong)param_1 + 100) - *(float *)(param_1 + 0xb)) *
                              fVar11 + *(float *)(param_1 + 0xb));
          local_70 = (*(float *)((longlong)param_1 + 0x6c) - *(float *)(param_1 + 0xc)) * fVar11 +
                     *(float *)(param_1 + 0xc);
          if (0.5 <= fVar13) {
            fVar13 = 1.0 - (fVar14 - 1.0);
            fVar12 = (1.0 - fVar13 * fVar13) + 1.0;
          }
          fVar12 = fVar12 * 0.5;
          fStack_50 = (*(float *)((longlong)param_1 + 0x84) - *(float *)(param_1 + 0xf)) * fVar12 +
                      *(float *)(param_1 + 0xf);
          local_58 = CONCAT44((*(float *)(param_1 + 0x10) - *(float *)((longlong)param_1 + 0x74)) *
                              fVar12 + *(float *)((longlong)param_1 + 0x74),
                              (*(float *)((longlong)param_1 + 0x7c) - *(float *)(param_1 + 0xe)) *
                              fVar12 + *(float *)(param_1 + 0xe));
          local_68 = local_78;
          fStack_60 = local_70;
          uVar8 = FWeakObjectPtr::Get(param_1 + 10);
          FUN_14223ca30(uVar8,&local_68,&local_58,0,0,0);
          return;
        }
        FUN_140a1ae90(param_1,0);
        *(undefined1 *)(param_1 + 0x12) = 0;
        return;
      }
      if (cVar4 != '\x04') {
        return;
      }
      fVar13 = *(float *)((longlong)param_1 + 0x9c);
      fVar11 = fVar13 + *(float *)(lVar9 + 0x7b0);
      *(float *)((longlong)param_1 + 0x9c) = fVar11;
      if ((int)fVar13 != (int)fVar11) {
        cVar4 = FUN_140a0b330(param_1);
        if (cVar4 == '\0') goto LAB_140a1f1bc;
        cVar4 = FUN_140a06d40(param_1,param_1 + 0x14);
        if (cVar4 != '\0') {
          cVar4 = FUN_140a0b330(param_1);
          if (cVar4 == '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x12) = 1;
          *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(*param_1 + 0x790);
          return;
        }
      }
      if (*(float *)(param_1 + 0x16) < 0.0) {
        return;
      }
      if (*(float *)((longlong)param_1 + 0x9c) <= *(float *)(param_1 + 0x16)) {
        return;
      }
      if (*(char *)(param_1[2] + 0xb10) == '\0') {
        FUN_14123ece0(param_1[3],1);
        return;
      }
      cVar4 = FUN_140a1b340();
      if (cVar4 == '\0') {
        lVar9 = param_1[2];
        if ((-1 < *(int *)(lVar9 + 0x758)) && (-1 < *(int *)(lVar9 + 0x75c))) {
          uVar5 = FUN_142fa1ef0(*(undefined8 *)(lVar9 + 0x6b8),(int *)(lVar9 + 0x758),&local_78);
          lVar9 = param_1[3];
          lVar2 = *(longlong *)(lVar9 + 0x168);
          if (lVar2 == 0) {
            uVar5 = (undefined4)DAT_1468b5da0;
            uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            fStack_50 = (float)DAT_1468b5da8;
          }
          else {
            fVar13 = *(float *)(lVar2 + 0x210);
            local_68 = *(undefined8 *)(lVar2 + 0x210);
            fStack_60 = *(float *)(lVar2 + 0x218);
            fStack_5c = *(float *)(lVar2 + 0x21c);
            auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != *(float *)(lVar2 + 0x214));
            auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != fVar13);
            auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_60);
            auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_5c);
            iVar6 = movmskps(uVar5,auVar3);
            if (iVar6 != 0) {
              *(float *)(lVar2 + 0x250) = fVar13;
              *(float *)(lVar2 + 0x254) = *(float *)(lVar2 + 0x214);
              *(float *)(lVar2 + 600) = fStack_60;
              *(float *)(lVar2 + 0x25c) = fStack_5c;
              puVar7 = (undefined8 *)FQuat::Rotator(&local_68,&local_58);
              *(undefined8 *)(lVar2 + 0x260) = *puVar7;
              *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar7 + 1);
              lVar9 = param_1[3];
            }
            uVar5 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
            uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
            fStack_50 = (float)*(undefined4 *)(lVar2 + 0x268);
          }
          local_58 = CONCAT44(uVar10,uVar5);
          local_68 = local_78;
          fStack_60 = local_70;
          FUN_14148fbd0(lVar9,&local_68,&local_58);
          *(undefined1 *)(param_1 + 0x12) = 0;
          return;
        }
      }
      goto LAB_140a1f1bc;
    }
    if (*(float *)(lVar9 + 0x790) - *(float *)((longlong)param_1 + 0x94) < 3.5) {
      return;
    }
    cVar4 = FUN_140a0b330(param_1);
    if (cVar4 == '\0') goto LAB_140a1f1bc;
    cVar4 = FUN_14122edc0(param_1[3]);
    if (cVar4 == '\0') {
      FUN_1412400c0(param_1[3]);
      *(undefined1 *)(param_1 + 0x12) = 0;
      return;
    }
  }
  cVar4 = FUN_140a1e3d0(param_1);
  if (cVar4 != '\0') {
    return;
  }
LAB_140a1f1bc:
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 140a1f420 FUN_140a1f420 body=81 status=ok
// SIG undefined FUN_140a1f420(void)

void FUN_140a1f420(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[0x116];
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x738) != 0)) && (*(char *)(lVar1 + 0x758) == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x450))();
    *(undefined4 *)(param_1 + 0x114) = uVar2;
    *(undefined4 *)(param_1 + 0x115) = uVar2;
    return;
  }
  FUN_140785580();
  return;
}



// FUNCTION 140a1f480 FUN_140a1f480 body=1594 status=ok
// SIG undefined FUN_140a1f480(void)

void FUN_140a1f480(longlong param_1,float param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined8 local_res18;
  float local_b8;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (((((*param_3 != 0) &&
        (fVar10 = *(float *)((longlong)param_3 + 0x1ac), -(float)DAT_146294aa0 < fVar10)) &&
       (fVar10 < (float)DAT_146294aa0)) &&
      ((-DAT_146294aa0._4_4_ < *(float *)(param_3 + 0x36) &&
       (*(float *)(param_3 + 0x36) < DAT_146294aa0._4_4_)))) &&
     ((fVar5 = *(float *)((longlong)param_3 + 0x1b4), -DAT_146294aa8 < fVar5 &&
      ((fVar5 < DAT_146294aa8 &&
       (fVar10 = *(float *)((longlong)param_3 + 0x1c4) - fVar10,
       fVar5 = *(float *)((longlong)param_3 + 0x1cc) - fVar5,
       *(float *)(param_1 + 0x8cc) * *(float *)(param_1 + 0x8cc) <=
       (*(float *)(param_3 + 0x39) - *(float *)(param_3 + 0x36)) *
       (*(float *)(param_3 + 0x39) - *(float *)(param_3 + 0x36)) + fVar10 * fVar10 + fVar5 * fVar5))
      )))) {
    local_res18 = 0xffffffffffffffff;
    fVar10 = (float)FUN_142de77e0(param_3 + 3,*param_3,0,&local_res18);
    local_res18 = 0xffffffffffffffff;
    fVar5 = (float)FUN_142de77e0(param_3 + 0x13,*param_3,0,&local_res18);
    if ((char)param_3[0x33] == '\x02') {
      lVar1 = *(longlong *)(*param_3 + 0x168);
      fVar5 = SQRT(*(float *)(param_3 + 0x34) * *(float *)(param_3 + 0x34) +
                   *(float *)((longlong)param_3 + 0x1a4) * *(float *)((longlong)param_3 + 0x1a4) +
                   *(float *)(param_3 + 0x35) * *(float *)(param_3 + 0x35)) + fVar5 * param_2;
      if (fVar10 <= fVar5) {
        fVar5 = fVar10;
      }
      if (lVar1 == 0) {
        uVar6 = (undefined4)DAT_1468b5da0;
        uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_a4 = DAT_1468b5da8;
      }
      else {
        local_88 = *(float *)(lVar1 + 0x210);
        fStack_84 = *(float *)(lVar1 + 0x214);
        fStack_80 = *(float *)(lVar1 + 0x218);
        fStack_7c = *(float *)(lVar1 + 0x21c);
        auVar14._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_84);
        auVar14._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_88);
        auVar14._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_80);
        auVar14._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_7c);
        iVar2 = movmskps((int)*param_3,auVar14);
        if (iVar2 != 0) {
          *(float *)(lVar1 + 0x250) = local_88;
          *(float *)(lVar1 + 0x254) = fStack_84;
          *(float *)(lVar1 + 600) = fStack_80;
          *(float *)(lVar1 + 0x25c) = fStack_7c;
          puVar3 = (undefined8 *)FQuat::Rotator(&local_88,local_a0);
          *(undefined8 *)(lVar1 + 0x260) = *puVar3;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar3 + 1);
        }
        uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_a4 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_ac = CONCAT44(uVar8,uVar6);
      pfVar4 = (float *)FRotator::Vector(&local_ac,local_94);
      fVar7 = pfVar4[2];
      param_3[0x34] = CONCAT44(fVar5 * pfVar4[1],fVar5 * *pfVar4);
      *(float *)(param_3 + 0x35) = fVar5 * fVar7;
    }
    else {
      fVar13 = *(float *)((longlong)param_3 + 0x1ac) - *(float *)((longlong)param_3 + 0x1c4);
      fVar15 = *(float *)(param_3 + 0x36) - *(float *)(param_3 + 0x39);
      fVar16 = *(float *)((longlong)param_3 + 0x1b4) - *(float *)((longlong)param_3 + 0x1cc);
      fVar11 = fVar15 * fVar15 + fVar13 * fVar13 + fVar16 * fVar16;
      fVar7 = fVar13;
      fVar9 = fVar15;
      fVar12 = fVar16;
      if ((fVar11 != 1.0) &&
         (fVar7 = DAT_1468b5d90, fVar9 = DAT_1468b5d94, fVar12 = DAT_1468b5d98, 1e-08 <= fVar11)) {
        auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar12 = auVar14._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
        fVar7 = fVar13 * fVar12;
        fVar9 = fVar15 * fVar12;
        fVar12 = fVar16 * fVar12;
      }
      fVar5 = fVar5 * param_2;
      *(float *)(param_3 + 0x34) = fVar7 * fVar5 + *(float *)(param_3 + 0x34);
      *(float *)((longlong)param_3 + 0x1a4) = fVar9 * fVar5 + *(float *)((longlong)param_3 + 0x1a4);
      *(float *)(param_3 + 0x35) = fVar12 * fVar5 + *(float *)(param_3 + 0x35);
    }
    fVar5 = *(float *)((longlong)param_3 + 0x1a4);
    fVar7 = *(float *)(param_3 + 0x34);
    fVar9 = *(float *)(param_3 + 0x35);
    fVar12 = fVar7 * fVar7 + fVar5 * fVar5 + fVar9 * fVar9;
    if (fVar10 * fVar10 < fVar12) {
      if (fVar12 == 1.0) {
        local_b8 = (float)param_3[0x34];
        fVar11 = (float)((ulonglong)param_3[0x34] >> 0x20);
        fVar13 = *(float *)(param_3 + 0x35);
      }
      else {
        fVar11 = DAT_1468b5d94;
        fVar13 = DAT_1468b5d98;
        local_b8 = DAT_1468b5d90;
        if (1e-08 <= fVar12) {
          auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar13 = auVar14._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
          fVar13 = fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13) + fVar13;
          local_b8 = fVar13 * fVar7;
          fVar11 = fVar13 * fVar5;
          fVar13 = fVar13 * fVar9;
        }
      }
      param_3[0x34] = CONCAT44(fVar11 * fVar10,local_b8 * fVar10);
      *(float *)(param_3 + 0x35) = fVar13 * fVar10;
      fVar5 = *(float *)((longlong)param_3 + 0x1a4);
      fVar9 = *(float *)(param_3 + 0x35);
    }
    fVar10 = param_2 * *(float *)(param_3 + 0x34) + *(float *)((longlong)param_3 + 0x1c4);
    *(float *)((longlong)param_3 + 0x1c4) = fVar10;
    *(float *)(param_3 + 0x39) = fVar5 * param_2 + *(float *)(param_3 + 0x39);
    *(float *)((longlong)param_3 + 0x1cc) = fVar9 * param_2 + *(float *)((longlong)param_3 + 0x1cc);
    if (*(char *)(param_1 + 0x8c8) != '\0') {
      fVar12 = *(float *)(param_1 + 0x230) * *(float *)(param_1 + 0x710);
      fVar9 = *(float *)(param_1 + 0x234) * *(float *)(param_1 + 0x714);
      fVar7 = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x718);
      fVar5 = -fVar12;
      if ((-fVar12 <= fVar10) && (fVar5 = fVar12, fVar10 <= fVar12)) {
        fVar5 = fVar10;
      }
      fVar10 = *(float *)(param_3 + 0x39);
      *(float *)((longlong)param_3 + 0x1c4) = fVar5;
      fVar5 = -fVar9;
      if ((-fVar9 <= fVar10) && (fVar5 = fVar9, fVar10 <= fVar9)) {
        fVar5 = fVar10;
      }
      *(float *)(param_3 + 0x39) = fVar5;
      fVar10 = *(float *)((longlong)param_3 + 0x1cc);
      fVar5 = -fVar7;
      if ((-fVar7 <= fVar10) && (fVar5 = fVar7, fVar10 <= fVar7)) {
        fVar5 = fVar10;
      }
      *(float *)((longlong)param_3 + 0x1cc) = fVar5;
    }
  }
  return;
}



// FUNCTION 140a1fac0 FUN_140a1fac0 body=793 status=ok
// SIG undefined FUN_140a1fac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1fac0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res18 [2];
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  
  if (((((*param_3 != 0) && (-(float)DAT_146294aa0 < *(float *)((longlong)param_3 + 0x1ac))) &&
       (*(float *)((longlong)param_3 + 0x1ac) < (float)DAT_146294aa0)) &&
      ((fVar14 = *(float *)(param_3 + 0x36), -DAT_146294aa0._4_4_ < fVar14 &&
       (fVar14 < DAT_146294aa0._4_4_)))) &&
     ((local_50 = *(float *)((longlong)param_3 + 0x1b4), -DAT_146294aa8 < local_50 &&
      ((local_50 < DAT_146294aa8 && ((char)param_3[0x33] != '\0')))))) {
    lVar1 = *(longlong *)(*param_3 + 0x168);
    fStack_60 = DAT_1468b5da8;
    uVar5 = DAT_1468b5da0;
    if (lVar1 != 0) {
      fVar2 = *(float *)(lVar1 + 0x210);
      local_68 = *(undefined8 *)(lVar1 + 0x210);
      fStack_60 = *(float *)(lVar1 + 0x218);
      fStack_5c = *(float *)(lVar1 + 0x21c);
      auVar12._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar12._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar2);
      auVar12._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_60);
      auVar12._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_5c);
      iVar6 = movmskps((int)&stack0x00000000,auVar12);
      if (iVar6 != 0) {
        *(float *)(lVar1 + 0x250) = fVar2;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_60;
        *(float *)(lVar1 + 0x25c) = fStack_5c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_68,&local_58);
        *(undefined8 *)(lVar1 + 0x260) = *puVar8;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
        fVar14 = *(float *)(param_3 + 0x36);
        local_50 = *(float *)((longlong)param_3 + 0x1b4);
      }
      fStack_60 = *(float *)(lVar1 + 0x268);
      uVar5 = *(undefined8 *)(lVar1 + 0x260);
    }
    local_50 = local_50 - *(float *)((longlong)param_3 + 0x1cc);
    local_58 = CONCAT44(fVar14 - *(float *)(param_3 + 0x39),
                        *(float *)((longlong)param_3 + 0x1ac) -
                        *(float *)((longlong)param_3 + 0x1c4));
    uVar7 = FVector::Rotation(&local_58,&local_78);
    local_68._0_4_ = (float)uVar5;
    local_74 = (float)((ulonglong)uVar5 >> 0x20) - local_74;
    fVar14 = (float)DAT_1468657c0;
    fVar2 = DAT_1468657c0._4_4_;
    fVar3 = DAT_1468657c0._8_4_;
    fVar4 = DAT_1468657c0._12_4_;
    auVar11._4_4_ = local_74;
    auVar11._0_4_ = (float)local_68 - local_78;
    auVar11._8_4_ = fStack_60 - local_70;
    auVar11._12_4_ = 0;
    auVar12 = divps(auVar11,_DAT_1468657c0);
    fVar16 = ((float)local_68 - local_78) - (float)(int)auVar12._0_4_ * fVar14;
    local_74 = local_74 - (float)(int)auVar12._4_4_ * fVar2;
    fVar17 = (fStack_60 - local_70) - (float)(int)auVar12._8_4_ * fVar3;
    fVar18 = 0.0 - (float)(int)auVar12._12_4_ * fVar4;
    fVar16 = (float)(((uint)(fVar16 + fVar14) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar14));
    fVar15 = (float)(((uint)(local_74 + fVar2) ^ (uint)local_74) & -(uint)(0.0 <= local_74) ^
                    (uint)(local_74 + fVar2));
    fVar17 = (float)(((uint)(fVar17 + fVar3) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar17 + fVar3));
    fVar18 = (float)(((uint)(fVar18 + fVar4) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                    (uint)(fVar18 + fVar4));
    auVar13._4_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar15 - fVar2) ^ (uint)fVar15) &
                                  -(uint)(fRam00000001468657b4 < fVar15) ^ (uint)fVar15) &
                                uRam00000001468658a4));
    auVar13._0_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar16 - fVar14) ^ (uint)fVar16) &
                                  -(uint)(_DAT_1468657b0 < fVar16) ^ (uint)fVar16) & _DAT_1468658a0)
                );
    auVar13._8_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar17 - fVar3) ^ (uint)fVar17) &
                                  -(uint)(fRam00000001468657b8 < fVar17) ^ (uint)fVar17) &
                                uRam00000001468658a8));
    auVar13._12_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar18 - fVar4) ^ (uint)fVar18) &
                                  -(uint)(fRam00000001468657bc < fVar18) ^ (uint)fVar18) &
                                uRam00000001468658ac));
    iVar6 = movmskps(uVar7,auVar13);
    if (iVar6 != 0) {
      local_res18[0] = 0xffffffffffffffff;
      local_68 = uVar5;
      FUN_142de77e0(param_3 + 0x23,*param_3,0,local_res18);
      uVar7 = FMath::FixedTurn();
      uVar9 = FMath::FixedTurn();
      uVar10 = FMath::FixedTurn();
      local_58 = CONCAT44(uVar9,uVar10);
      fStack_60 = (float)uVar7;
      local_50 = (float)uVar7;
      AActor::SetActorRotation(*param_3,&local_58,0);
    }
  }
  return;
}



// FUNCTION 140a1fde0 FUN_140a1fde0 body=1254 status=ok
// SIG undefined FUN_140a1fde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140a1fde0(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  float local_c8;
  longlong *local_c0;
  int local_b8;
  undefined8 local_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_80;
  float local_78;
  
  lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar2 == 0) {
    return false;
  }
  fVar1 = *(float *)(lVar2 + 0x790);
  if (*(float *)(param_1 + 0xc88) + 0.33 < fVar1) {
    (**(code **)(*param_2 + 0x308))(param_2,&local_a0);
    fVar6 = local_9c * local_9c + local_a0 * local_a0 + local_98 * local_98;
    if (1e-08 < fVar6) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
      local_d0 = CONCAT44(local_d0._4_4_,fVar8);
      local_a0 = local_a0 * fVar8;
      local_9c = local_9c * fVar8;
      local_98 = local_98 * fVar8;
    }
    if (ABS(local_98) <= 0.9) {
      fVar6 = 0.0;
      fVar8 = local_9c * local_9c + local_a0 * local_a0;
      if (1e-08 < fVar8) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar7 = auVar9._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar8 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar8 * 0.5 * fVar7 * fVar7);
        local_a0 = local_a0 * fVar7;
        local_9c = local_9c * fVar7;
      }
    }
    else {
      if (param_2[0x2d] == 0) {
        local_c8 = (float)DAT_1464aa7b0;
        puVar3 = &local_d0;
        local_d0 = DAT_1464aa7a8;
      }
      else {
        puVar3 = (undefined8 *)FUN_142369f10(param_2[0x2d],&local_b0);
      }
      local_a0 = (float)*puVar3;
      local_9c = (float)((ulonglong)*puVar3 >> 0x20);
      fVar6 = *(float *)(puVar3 + 1);
    }
    lVar5 = param_2[0x2d];
    if (lVar5 == 0) {
      local_d0 = _DAT_1468b5d90;
      local_c8 = DAT_1468b5d98;
    }
    else {
      local_d0 = *(undefined8 *)(lVar5 + 0x220);
      local_c8 = *(float *)(lVar5 + 0x228);
    }
    fStack_a8 = local_c8;
    local_78 = local_c8;
    local_88 = local_c8 + (fVar6 - DAT_1464aa7a0) * 3535.534;
    local_8c = (float)((ulonglong)local_d0 >> 0x20) + (local_9c - DAT_1464aa798._4_4_) * 3535.534;
    local_80 = local_d0;
    local_b0 = (code *)local_d0;
    local_90 = (float)local_d0 + (local_a0 - (float)DAT_1464aa798) * 3535.534;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146865fa8) &&
       (_Init_thread_header(&DAT_146865fa8), DAT_146865fa8 == -1)) {
      puVar3 = (undefined8 *)FName::FName(&local_d0,L"UpdateAirControlTrace",1);
      FUN_1422ffb20(&DAT_146865f30,*puVar3,local_d8,0,0);
      _DAT_146865f48 = 1;
      atexit(FUN_143e46bc0);
      _Init_thread_footer(&DAT_146865fa8);
    }
    fStack_a8 = 0.0;
    local_c0 = (longlong *)0x0;
    local_b0 = FUN_1409f8c40;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_b8 = 3;
    local_c0 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_b0;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_b0._4_4_;
      *(float *)(plVar4 + 3) = fStack_a8;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_a4;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_144012f78;
    }
    FUN_142330140(lVar2,&local_d0,1,&local_80,&local_90,&DAT_146294ec8,&DAT_146865f30,&local_c0,0);
    *(float *)(param_1 + 0xc88) = fVar1;
    if (local_b8 != 0) {
      if (local_c0 == (longlong *)0x0) goto LAB_140a20222;
      (**(code **)(*local_c0 + 0x28))(local_c0,0);
      if (local_c0 != (longlong *)0x0) {
        local_c0 = (longlong *)FMemory::Realloc(local_c0,0,0);
      }
      local_b8 = 0;
    }
    if (local_c0 != (longlong *)0x0) {
      FMemory::Free(local_c0);
    }
  }
LAB_140a20222:
  return fVar1 < *(float *)(param_1 + 0xc84) + 0.5;
}



// FUNCTION 140a202d0 FUN_140a202d0 body=222 status=ok
// SIG undefined FUN_140a202d0(void)

void FUN_140a202d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_res10;
  
  if (param_2 != 0) {
    FUN_14058f880(&local_res10,param_2 + 0x378);
    lVar1 = FUN_140a08d60(param_1 + -0x178);
    if (lVar1 != 0) {
      FUN_140c5b870(lVar1,&local_res10);
    }
    if ((((*(longlong *)(param_1 + 0xb8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x288) != 0)) &&
        (lVar1 = FUN_140a09850(param_1 + -0x178), lVar1 != 0)) &&
       (plVar2 = (longlong *)
                 (**(code **)(*(longlong *)(lVar1 + 0x460) + 0x10))
                           ((longlong *)(lVar1 + 0x460),*(undefined1 *)(lVar1 + 0x690)),
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x420))(plVar2);
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x288));
    }
    if (local_res10 != 0) {
      FUN_1405a53f0();
    }
  }
  return;
}



// FUNCTION 140a203b0 FUN_140a203b0 body=103 status=ok
// SIG undefined FUN_140a203b0(void)

void FUN_140a203b0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  if (1 < *(int *)(param_1 + 0xc58)) {
    local_res8[0] = 0;
    FUN_1409f1c90(*(undefined8 *)(param_1 + 0xc50),(longlong)*(int *)(param_1 + 0xc58),0,local_res8)
    ;
  }
  if (1 < *(int *)(param_1 + 0xc68)) {
    local_res8[0] = 0;
    FUN_1409f1a30(*(undefined8 *)(param_1 + 0xc60),(longlong)*(int *)(param_1 + 0xc68),0,local_res8)
    ;
  }
  return;
}



// FUNCTION 140a20420 FUN_140a20420 body=263 status=ok
// SIG undefined FUN_140a20420(void)

void FUN_140a20420(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  
  lVar6 = FUN_140a09850();
  if (lVar6 != 0) {
    lVar7 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(byte *)(lVar6 + 0x928) != *(byte *)(param_1 + 0x2f8))) {
      uVar8 = 1 << (*(byte *)(lVar6 + 0x928) & 0x1f) & (uint)*(byte *)(param_1 + 0x1c0);
      if ((uVar8 != 0) != 0 < *(int *)(param_1 + 0x308)) {
        if (uVar8 == 0) {
          FUN_140a1a850(param_1);
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x1b0);
          iVar2 = *(int *)(param_1 + 0x1b8);
          if (plVar3 != plVar3 + (longlong)iVar2 * 5) {
            plVar9 = plVar3 + 1;
            do {
              if ((*plVar9 != 0) && (cVar5 = FUN_1405a3410(), cVar5 != '\0')) {
                return;
              }
              plVar1 = plVar9 + 4;
              plVar9 = plVar9 + 5;
            } while (plVar1 != plVar3 + (longlong)iVar2 * 5);
          }
          FUN_140a17250(param_1);
        }
      }
      *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(lVar6 + 0x928);
    }
  }
  return;
}



// FUNCTION 140a20530 FUN_140a20530 body=1222 status=ok
// SIG undefined FUN_140a20530(void)

void FUN_140a20530(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  longlong local_res10;
  
  lVar4 = FUN_140a09850();
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x230) != 0)) &&
     (FUN_140a20420(param_1), *(int *)(param_1 + 0x308) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x310);
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar17 = 0.0;
    lVar9 = (longlong)*(int *)(param_1 + 0x318) * 0x20 + lVar4;
    fVar21 = 0.0;
    fVar19 = 0.0;
    if (lVar4 != lVar9) {
      lVar4 = lVar4 + 0x10;
      fVar14 = fVar13;
      fVar16 = fVar15;
      fVar18 = fVar17;
      fVar20 = fVar19;
      fVar22 = fVar21;
      do {
        cVar3 = FWeakObjectPtr::IsValid(lVar4 + -0x10);
        fVar13 = fVar14;
        fVar19 = fVar20;
        if (cVar3 != '\0') {
          lVar5 = FWeakObjectPtr::Get(lVar4 + -0x10);
          fVar19 = *(float *)(lVar5 + 0x218);
          if (*(float *)(lVar5 + 0x218) <= fVar20) {
            fVar19 = fVar20;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4 + -0x10);
          if (lVar5 != 0) {
            lVar6 = UMovieSceneAudioSection::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (fVar13 = *(float *)(lVar5 + 600), *(float *)(lVar5 + 600) <= fVar14)) {
              fVar13 = fVar14;
            }
          }
        }
        cVar3 = FWeakObjectPtr::IsValid(lVar4 + -8);
        fVar21 = fVar22;
        if (cVar3 != '\0') {
          uVar7 = FWeakObjectPtr::Get(lVar4 + -8);
          fVar21 = (float)FUN_143078d50(uVar7);
          if (fVar21 <= fVar22) {
            fVar21 = fVar22;
          }
        }
        cVar3 = FWeakObjectPtr::IsValid(lVar4);
        fVar17 = fVar18;
        if (cVar3 != '\0') {
          uVar7 = FWeakObjectPtr::Get(lVar4);
          fVar17 = (float)FUN_1430774d0(uVar7);
          if (fVar17 <= fVar18) {
            fVar17 = fVar18;
          }
        }
        cVar3 = FWeakObjectPtr::IsValid(lVar4 + 8);
        fVar15 = fVar16;
        if (cVar3 != '\0') {
          uVar7 = FWeakObjectPtr::Get(lVar4 + 8);
          cVar3 = FUN_14309f7d0(uVar7,1);
          if (cVar3 == '\0') {
            fVar15 = 0.0;
          }
          else {
            fVar15 = 1.0;
          }
          if (fVar15 <= fVar16) {
            fVar15 = fVar16;
          }
        }
        lVar5 = lVar4 + 0x10;
        lVar4 = lVar4 + 0x20;
        fVar14 = fVar13;
        fVar16 = fVar15;
        fVar18 = fVar17;
        fVar20 = fVar19;
        fVar22 = fVar21;
      } while (lVar5 != lVar9);
    }
    lVar4 = FUN_140a08d60(param_1);
    plVar10 = *(longlong **)(param_1 + 0x300);
    plVar1 = plVar10 + (longlong)*(int *)(param_1 + 0x308) * 5;
    for (; plVar10 != plVar1; plVar10 = plVar10 + 5) {
      if (*plVar10 != 0) {
        if (*(char *)(param_1 + 0x24b) == '\0') {
          cVar3 = *(char *)(param_1 + 0x249);
LAB_140a20797:
          if (cVar3 == '\0') goto LAB_140a2079e;
          uVar12 = 0;
        }
        else {
          plVar8 = (longlong *)FUN_140a09850(param_1);
          if ((plVar8 != (longlong *)0x0) &&
             (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x950))(plVar8), plVar8 != (longlong *)0x0
             )) {
            cVar3 = (**(code **)(*plVar8 + 0x780))(plVar8);
            goto LAB_140a20797;
          }
LAB_140a2079e:
          uVar12 = 0x3e4ccccd;
        }
        FUN_14058f880(&local_res10,plVar10);
        if (lVar4 != 0) {
          FUN_140c5b870(lVar4,&local_res10);
        }
        lVar9 = *(longlong *)(param_1 + 0x230);
        if (*(longlong *)(lVar9 + 0x260) != 0) {
          FUN_1405aaa50(local_res10,*(longlong *)(lVar9 + 0x260),fVar21,uVar12,4,0);
          lVar9 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar9 + 0x268) != 0) {
          FUN_1405aaa50(local_res10,*(longlong *)(lVar9 + 0x268),fVar17,uVar12,4,0);
          lVar9 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar9 + 0x270) != 0) {
          FUN_1405aaa50(local_res10,*(longlong *)(lVar9 + 0x270),fVar19,uVar12,4,0);
          lVar9 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar9 + 0x298) != 0) {
          if (*(char *)(param_1 + 0x24b) == '\0') {
            if (*(char *)(param_1 + 0x24a) != '\0') goto LAB_140a208d2;
          }
          else {
            plVar8 = (longlong *)FUN_140a09850(param_1);
            if ((((plVar8 != (longlong *)0x0) &&
                 (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x950))(plVar8),
                 plVar8 != (longlong *)0x0)) &&
                (cVar3 = (**(code **)(*plVar8 + 0x780))(plVar8), cVar3 != '\0')) &&
               (cVar3 = (**(code **)(*plVar8 + 0x778))(plVar8), cVar3 != '\0')) {
              lVar9 = *(longlong *)(param_1 + 0x230);
LAB_140a208d2:
              FUN_1405aaa50(local_res10,*(undefined8 *)(lVar9 + 0x298),fVar15,uVar12,4,0);
            }
          }
        }
        lVar9 = *(longlong *)(param_1 + 0x230);
        if (*(longlong *)(lVar9 + 0x280) != 0) {
          if (*(int *)(param_1 + 0x24c) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0x3f800000;
          }
          FUN_1405aaa50(local_res10,*(longlong *)(lVar9 + 0x280),uVar11,uVar12,4,0);
          lVar9 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar9 + 0x278) != 0) {
          FUN_1405aaa50(local_res10,*(longlong *)(lVar9 + 0x278),fVar13,uVar12,4,0);
        }
        if (local_res10 != 0) {
          FUN_1405a53f0();
          local_res10 = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 140a20a00 FUN_140a20a00 body=472 status=ok
// SIG undefined FUN_140a20a00(void)

void FUN_140a20a00(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong local_res18;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = FUN_140604cc0();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    lVar2 = *(longlong *)(param_1 + 0x630);
    if (lVar2 != lVar6) {
      if (lVar2 != 0) {
        FUN_1407665e0(lVar2 + 0x198,param_1);
      }
      *(longlong *)(param_1 + 0x630) = lVar6;
      if (lVar6 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UOakNpcGreetingComponent::OnDialogStarted",L"::");
        pwVar4 = (wchar_t *)0x0;
        while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_res18,pwVar4 + 2,1);
        lVar2 = *(longlong *)(param_1 + 0x630);
        plVar9 = (longlong *)(lVar2 + 0x198);
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(&local_28,param_1);
        local_20 = local_res18;
        if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_20);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
        iVar1 = *(int *)(lVar2 + 0x1a0);
        *(int *)(lVar2 + 0x1a0) = iVar1 + 1;
        if (*(int *)(lVar2 + 0x1a4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
        }
        puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
        *puVar8 = local_28;
        puVar8[1] = local_24;
        *(longlong *)(puVar8 + 2) = local_20;
      }
    }
    uVar5 = UBlindWidget::GetPrivateStaticClass();
    uVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    *(undefined8 *)(param_1 + 0x638) = uVar5;
    uVar5 = FUN_141437130();
    uVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    *(undefined8 *)(param_1 + 0x640) = uVar5;
    return;
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x630) + 0x198,param_1);
  }
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  return;
}



// FUNCTION 140a20be0 FUN_140a20be0 body=506 status=ok
// SIG undefined FUN_140a20be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a20be0(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  if ((((param_1[0xe3] != 0) && ((char)param_1[0xeb] != '\0')) &&
      (cVar2 = FUN_14122ebf0(), cVar2 != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x75a) != '\0' && (0 < *(int *)(param_1[0xbd] + 0x7540))))) {
    lVar1 = *(longlong *)(param_1[0xe3] + 0x168);
    if (lVar1 == 0) {
      local_50 = (float)DAT_1468b5d98;
      pfVar3 = (float *)&local_58;
      local_58 = _DAT_1468b5d90;
    }
    else {
      pfVar3 = &local_68;
      local_68 = *(float *)(lVar1 + 0x220);
      local_60 = *(float *)(lVar1 + 0x228);
      fStack_64 = *(float *)(lVar1 + 0x224);
    }
    uVar4 = *(undefined8 *)pfVar3;
    local_40 = pfVar3[2];
    FUN_142dcd740(param_1[0xbd],&local_68,0);
    fVar9 = local_68 - (float)uVar4;
    lVar1 = *param_1;
    fVar8 = fStack_64 - (float)((ulonglong)uVar4 >> 0x20);
    local_50 = local_60 - local_40;
    fVar5 = fVar8 * fVar8 + fVar9 * fVar9 + local_50 * local_50;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    local_50 = local_50 * fVar6;
    local_58 = CONCAT44(fVar8 * fVar6,fVar9 * fVar6);
    local_48 = uVar4;
    uVar4 = FVector::Rotation(&local_58,&local_48);
    (**(code **)(lVar1 + 0x728))(param_1,uVar4,1);
    return;
  }
  FUN_14076fea0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a20de0 FUN_140a20de0 body=329 status=ok
// SIG undefined FUN_140a20de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a20de0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  longlong local_f0 [26];
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f0[1] = 0x22;
  uVar6 = 0;
  local_f0[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f0,0);
  lVar1 = local_f0[0];
  FGenericPlatformString::Memcpy(local_f0[0],L"IO_MissionScripted_ForceFieldDome",0x44);
  uVar2 = UMovieScene2DTransformSection::GetPrivateStaticClass();
  lVar3 = FUN_1409f6e50(local_f8,param_1,uVar2,local_f0);
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (lVar3 != 0) {
    local_20 = (longlong *)0x0;
    local_18 = 0;
    FUN_1409f1180(lVar3,local_f0 + 2,0);
    plVar4 = local_f0 + 2;
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    uVar5 = (longlong)(int)local_18 & 0x1fffffffffffffff;
    if (plVar4 + (int)local_18 < plVar4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        if ((*plVar4 != 0) && (0 < *(int *)(*plVar4 + 0x2f0))) {
          FUN_1405b0f30();
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    if (local_20 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a20f30 FUN_140a20f30 body=652 status=ok
// SIG undefined FUN_140a20f30(void)

void FUN_140a20f30(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)FUN_140a09850();
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 0x950))(plVar3);
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    cVar2 = *(char *)(param_1 + 0x24a);
  }
  else {
    plVar5 = (longlong *)FUN_140a09850(param_1);
    if (((plVar5 == (longlong *)0x0) ||
        (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x950))(plVar5), plVar5 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar5 + 0x780))(plVar5), cVar2 == '\0')) goto LAB_140a210a9;
    cVar2 = (**(code **)(*plVar5 + 0x778))(plVar5);
  }
  if (cVar2 != '\0') {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x288) != 0) &&
       (plVar5 = (longlong *)(**(code **)(plVar3[0x8c] + 0x10))(plVar3 + 0x8c,(char)plVar3[0xd2]),
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x420))(plVar5);
      FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x288));
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x298) != 0) {
      FUN_14307ee20(plVar3,1);
      FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x298));
    }
  }
LAB_140a210a9:
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x370);
  if (lVar6 != 0) {
    lVar7 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x2a8) != 0)) {
      lVar6 = *(longlong *)(lVar6 + 0x118);
      if (lVar6 != 0) {
        lVar7 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*(longlong *)(lVar6 + 0x8b0) + 0x20))((longlong *)(lVar6 + 0x8b0),lVar4);
        }
      }
      FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x2a8));
    }
  }
  return;
}



// FUNCTION 140a211c0 FUN_140a211c0 body=764 status=ok
// SIG undefined FUN_140a211c0(void)

void FUN_140a211c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  if (*param_2 != 0) {
    if (*(char *)(param_1 + 0x24b) == '\0') {
      cVar1 = *(char *)(param_1 + 0x24a);
    }
    else {
      plVar2 = (longlong *)FUN_140a09850();
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
    }
    if (cVar1 != '\0') {
      lVar3 = FUN_140a09850(param_1);
      lVar5 = *(longlong *)(param_1 + 0x230);
      if ((lVar5 != 0) && (lVar3 != 0)) {
        uVar4 = 0;
        if (*(longlong *)(lVar5 + 0x288) != 0) {
          plVar2 = (longlong *)
                   (**(code **)(*(longlong *)(lVar3 + 0x460) + 0x10))
                             ((longlong *)(lVar3 + 0x460),*(undefined1 *)(lVar3 + 0x690));
          lVar5 = *(longlong *)(param_1 + 0x230);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x420))(plVar2);
            FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x288));
            lVar5 = *(longlong *)(param_1 + 0x230);
          }
        }
        if (*(longlong *)(lVar5 + 0x298) != 0) {
          FUN_14307ee20(lVar3,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
          FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x298));
          lVar5 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar5 + 0x290) != 0) {
          lVar5 = *param_2;
          (**(code **)(*(longlong *)(lVar3 + 0x458) + 0x20))();
          FUN_1405aaa50(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x290));
          lVar5 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar5 + 0x2a8) != 0) {
          AWorldScapeRoot::Grid_GetOnPendingLoad(lVar3);
          FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x2a8));
          lVar5 = *(longlong *)(param_1 + 0x230);
        }
        if (*(longlong *)(lVar5 + 0x1e0) != 0) {
          lVar3 = *param_2;
          plVar2 = *(longlong **)(lVar3 + 0x110);
          if (*(longlong **)(lVar3 + 0x110) == (longlong *)0x0) {
            plVar2 = (longlong *)(lVar3 + 0x100);
          }
          uVar6 = (longlong)*(int *)(lVar3 + 0x118) & 0x1fffffffffffffff;
          if (plVar2 + *(int *)(lVar3 + 0x118) < plVar2) {
            uVar6 = uVar4;
          }
          fVar8 = 0.0;
          if (uVar6 != 0) {
            do {
              if (*plVar2 == 0) {
                fVar7 = 0.0;
              }
              else {
                fVar7 = *(float *)(*plVar2 + 0x2d4);
              }
              if (fVar7 <= fVar8) {
                fVar7 = fVar8;
              }
              plVar2 = plVar2 + 1;
              uVar4 = uVar4 + 1;
              fVar8 = fVar7;
            } while (uVar4 != uVar6);
          }
          FUN_1405aaa50(lVar3,*(undefined8 *)(lVar5 + 0x1e0),lVar5,0,4,0);
        }
        if ((*(longlong *)(param_1 + 0x4a8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x270) != 0)) {
          FUN_1405aaa50(*param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a214c0 FUN_140a214c0 body=327 status=ok
// SIG undefined FUN_140a214c0(void)

void FUN_140a214c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_68 [96];
  
  cVar4 = FWeakObjectPtr::IsValid(param_2 + 0x78);
  if (cVar4 == '\0') {
    puVar6 = (undefined1 *)FUN_142f89470(local_68,param_3);
  }
  else {
    uVar5 = FWeakObjectPtr::Get(param_2 + 0x78);
    puVar6 = (undefined1 *)FUN_142f894f0(local_68,uVar5);
  }
  *(undefined1 *)(param_2 + 0xb4) = *puVar6;
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(puVar6 + 4);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(puVar6 + 0xc);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(puVar6 + 0x10);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(puVar6 + 0x14);
  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(puVar6 + 0x18);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(puVar6 + 0x1c);
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(puVar6 + 0x20);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(puVar6 + 0x24);
  uVar5 = *(undefined8 *)(puVar6 + 0x30);
  *(undefined8 *)(param_2 + 0xdc) = *(undefined8 *)(puVar6 + 0x28);
  *(undefined8 *)(param_2 + 0xe4) = uVar5;
  uVar1 = *(undefined4 *)(puVar6 + 0x3c);
  uVar2 = *(undefined4 *)(puVar6 + 0x40);
  uVar3 = *(undefined4 *)(puVar6 + 0x44);
  *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(puVar6 + 0x38);
  *(undefined4 *)(param_2 + 0xf0) = uVar1;
  *(undefined4 *)(param_2 + 0xf4) = uVar2;
  *(undefined4 *)(param_2 + 0xf8) = uVar3;
  *(undefined8 *)(param_2 + 0xfc) = *(undefined8 *)(puVar6 + 0x48);
  *(undefined1 *)(param_2 + 0x104) = puVar6[0x50];
  *(undefined1 *)(param_2 + 0x105) = puVar6[0x51];
  *(undefined1 *)(param_2 + 0x106) = puVar6[0x52];
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(puVar6 + 0x54);
  *(undefined1 *)(param_2 + 0x10c) = puVar6[0x58];
  *(undefined1 *)(param_2 + 0x10d) = puVar6[0x59];
  *(undefined1 *)(param_2 + 0x10e) = puVar6[0x5a];
  FUN_142fb28b0(param_2 + 0xdc);
  *(undefined1 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x110) = *param_3;
  *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 140a21610 FUN_140a21610 body=1645 status=ok
// SIG undefined FUN_140a21610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a21610(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  float *pfVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float local_res8;
  undefined8 local_b8;
  float local_b0;
  
  iVar2 = *(int *)(param_1 + 0xc58);
  if ((0 < iVar2) && (*(char *)(*(longlong *)(param_1 + 0xc50) + 8) != '\0')) {
    plVar7 = *(longlong **)(param_1 + 0xb30);
    if (*(char *)(*(longlong *)(param_1 + 0xc50) + 4) != '\0') {
      pfVar5 = (float *)(**(code **)(*plVar7 + 0x308))(plVar7,&local_b8);
      plVar7 = *(longlong **)(param_1 + 0xb30);
      if (*pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] < _DAT_146294ed4) {
        FUN_141241dd0();
        return 0;
      }
    }
    FUN_1412417d0(plVar7,0);
    return 0;
  }
  uVar16 = 0xbf800000;
  if (((0 < iVar2) && (-1.0 <= *(float *)(*(longlong *)(param_1 + 0xc50) + 0xc))) ||
     ((*(char *)(param_1 + 0xca9) != '\0' && (*(char *)(param_1 + 0xca8) != '\0')))) {
LAB_140a21c68:
    FUN_141241dd0(*(undefined8 *)(param_1 + 0xb30),0);
    return 0;
  }
  bVar4 = false;
  if (0 < iVar2) {
    if ((*(char *)(*(longlong *)(param_1 + 0xc50) + 6) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  if ((*(char *)(param_1 + 0xb60) != '\0') || (bVar4)) goto LAB_140a21c68;
  fVar14 = 3.4028235e+38;
  if ((*(int *)(param_1 + 0xc68) < 1) || (*(char *)(*(longlong *)(param_1 + 0xc60) + 1) == '\0')) {
    if (*(longlong *)(param_1 + 0xaf0) == 0) {
      fVar14 = 1000.0;
    }
    else {
      fVar14 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x68);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xb30);
  if (fVar14 == 3.4028235e+38) {
    FUN_141241dd0(plVar7,0);
    return 0;
  }
  pfVar5 = (float *)(**(code **)(*plVar7 + 0x308))(plVar7,&local_b8);
  bVar4 = *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] < fVar14 * fVar14;
  if ((bVar4) &&
     ((*(longlong *)(param_1 + 0xaf0) == 0 ||
      (*(char *)(*(longlong *)(param_1 + 0xaf0) + 0x78) == '\0')))) {
    FUN_141241dd0(*(undefined8 *)(param_1 + 0xb30),0);
    return 0;
  }
  fVar14 = param_2[1];
  fVar17 = *param_2;
  fVar9 = fVar17 * fVar17 + fVar14 * fVar14;
  if (fVar9 == 1.0) {
    if (param_2[2] == 0.0) {
      local_b8 = *(undefined8 *)param_2;
      local_res8 = param_2[2];
      fVar14 = (float)((ulonglong)local_b8 >> 0x20);
      fVar17 = (float)local_b8;
      local_b0 = local_res8;
    }
    else {
LAB_140a21931:
      local_res8 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar9) {
      auVar13 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar13._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar17 = fVar17 * fVar10;
      fVar14 = fVar14 * fVar10;
      goto LAB_140a21931;
    }
    local_res8 = DAT_1468b5d98;
    fVar14 = DAT_1468b5d94;
    fVar17 = DAT_1468b5d90;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
  if (lVar3 == 0) {
    local_b0 = (float)DAT_1464aa7b0;
    puVar6 = &local_b8;
    local_b8 = DAT_1464aa7a8;
  }
  else {
    puVar6 = (undefined8 *)FUN_142369f10(lVar3,&local_b8);
  }
  uVar1 = *puVar6;
  local_b0 = *(float *)(puVar6 + 1);
  fVar9 = (float)((ulonglong)uVar1 >> 0x20);
  local_b8._0_4_ = (float)uVar1;
  fVar10 = fVar9 * fVar9 + (float)local_b8 * (float)local_b8;
  if (fVar10 == 1.0) {
    fVar8 = (float)local_b8;
    fVar12 = local_b0;
    fVar15 = fVar9;
    if (local_b0 != 0.0) {
LAB_140a21a5d:
      fVar8 = (float)local_b8;
      fVar12 = 0.0;
      fVar15 = fVar9;
    }
  }
  else {
    fVar8 = DAT_1468b5d90;
    fVar12 = DAT_1468b5d98;
    fVar15 = DAT_1468b5d94;
    if (1e-08 <= fVar10) {
      auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar8 = auVar13._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar10 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar10 * 0.5 * fVar8 * fVar8);
      local_b8._0_4_ = (float)local_b8 * fVar8;
      fVar9 = fVar9 * fVar8;
      goto LAB_140a21a5d;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xaf0);
  fVar9 = fVar15 * fVar14 + fVar8 * fVar17 + fVar12 * local_res8;
  if (lVar3 == 0) {
    fVar10 = -1.0;
  }
  else {
    fVar10 = *(float *)(lVar3 + 0x70);
  }
  local_b8 = uVar1;
  if (fVar9 > fVar10) {
    if (lVar3 == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = *(float *)(lVar3 + 0x6c);
    }
    if (fVar8 < fVar9) {
      FUN_141241dd0(*(undefined8 *)(param_1 + 0xb30),0);
      return 0;
    }
  }
  if (((*(char *)(param_1 + 0xca9) == *(char *)(param_1 + 0xca8)) || (lVar3 == 0)) ||
     (-*(float *)(lVar3 + 0x124) <= fVar9)) {
    uVar1 = *(undefined8 *)(param_1 + 0x774);
    local_b0 = *(float *)(param_1 + 0x77c);
    local_b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar12 = local_b8._4_4_ * (float)DAT_1464aa798;
    fVar8 = local_b8._4_4_ * DAT_1464aa7a0;
    local_b8 = uVar1;
    if (0.0 < ((float)uVar1 * DAT_1464aa7a0 - local_b0 * (float)DAT_1464aa798) * fVar14 +
              (local_b0 * DAT_1464aa798._4_4_ - fVar8) * fVar17 +
              (fVar12 - (float)uVar1 * DAT_1464aa798._4_4_) * local_res8) {
      uVar11 = 0x3f800000;
      goto LAB_140a21c01;
    }
  }
  else if (*(char *)(param_1 + 0xca9) == '\0') {
    uVar11 = 0x3f800000;
    goto LAB_140a21c01;
  }
  uVar11 = 0xbf800000;
LAB_140a21c01:
  FUN_1412401f0(*(undefined8 *)(param_1 + 0xb30),uVar11);
  FUN_1412417d0(*(undefined8 *)(param_1 + 0xb30),0);
  if (*(longlong *)(param_1 + 0xaf0) == 0) {
    fVar14 = -1.0;
  }
  else {
    fVar14 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x74);
  }
  if ((fVar14 < fVar9) || (bVar4)) {
    if ((fVar9 <= fVar10) || (bVar4)) {
      uVar16 = 0x3f800000;
    }
    else {
      uVar16 = 0;
    }
  }
  FUN_141240250(*(undefined8 *)(param_1 + 0xb30),uVar16);
  return 1;
}



// FUNCTION 140a21c80 FUN_140a21c80 body=316 status=ok
// SIG undefined FUN_140a21c80(void)

void FUN_140a21c80(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (*(char *)(param_1 + 0x3ec) != '\0')) {
    if (1 < (byte)(*(char *)(param_1 + 0x2d0) - 2U)) {
      FUN_1409f8160(param_1);
      return;
    }
    if (*(int *)(param_1 + 1000) == -1) {
      uStack_10 = 0;
      local_18 = FUN_140a0e3e0;
      local_28 = (longlong *)0x0;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      local_20 = 3;
      local_28 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_144089920;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_144089968;
      }
      uVar2 = FUN_142d369f0(param_1 + 0x330,*(undefined8 *)(param_1 + 0x118),&local_28);
      *(undefined4 *)(param_1 + 1000) = uVar2;
      if (local_20 != 0) {
        if (local_28 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_28 + 0x28))(local_28,0);
        if (local_28 != (longlong *)0x0) {
          local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
        }
        local_20 = 0;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 140a21dc0 FUN_140a21dc0 body=1800 status=ok
// SIG undefined FUN_140a21dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a21dc0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  char local_res8 [8];
  uint in_stack_ffffffffffffff68;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar9 = 0;
  cVar8 = '\0';
  local_res8[0] = '\0';
  switch(*(undefined1 *)(param_1 + 0x1d)) {
  case 0:
    FUN_140a1a150(param_1,local_res8);
    cVar8 = local_res8[0];
    if (local_res8[0] == '\0') goto switchD_140a21e17_default;
    goto LAB_140a222c2;
  case 1:
    fVar11 = *(float *)(param_1 + 0x80);
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
    if ((plVar7 == (longlong *)0x0) || (lVar9 = (**(code **)(*plVar7 + 0x148))(plVar7), lVar9 == 0))
    {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(lVar9 + 0x8c8);
    }
    if (*(float *)(param_1 + 0x20) < 0.0) break;
    if (fVar10 - *(float *)(param_1 + 0x20) < fVar11) goto switchD_140a21e17_default;
    FUN_140a18360(*(undefined1 *)(param_1 + 0x1c),param_1,local_res8);
    cVar8 = local_res8[0];
    if (local_res8[0] == '\0') {
      *(undefined1 *)(param_1 + 0x24) = 1;
      FUN_1409f8ac0(param_1);
      if ((*(char *)(param_1 + 0x25) == '\0') &&
         (plVar7 = *(longlong **)(param_1 + 0xf8), plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x280))(plVar7,0);
      }
      goto switchD_140a21e17_default;
    }
    goto LAB_140a222c2;
  case 2:
    if (*(char *)(param_1 + 0x25) != '\0') goto switchD_140a21e17_default;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_14223d0f0(*(longlong *)(param_1 + 0x28),param_1 + 0x50,0,0,
                    in_stack_ffffffffffffff68 & 0xffffff00);
      FUN_1409f8ac0(param_1);
      goto switchD_140a21e17_default;
    }
    goto LAB_140a222b2;
  case 3:
    if (*(char *)(param_1 + 0x24) == '\0') {
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar6 = FUN_142f71d80();
        for (lVar9 = *(longlong *)(param_1 + 0xd0); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30))
        {
          if (lVar9 == lVar6) {
            if (*(longlong *)(param_1 + 0xd0) != 0) {
              local_58 = *(undefined8 *)(param_1 + 0xd0);
              uStack_50 = *(undefined4 *)(param_1 + 0xd8);
              uStack_4c = *(undefined4 *)(param_1 + 0xdc);
              FUN_142f6b950(*(undefined8 *)(param_1 + 0xe8),&local_58,0);
            }
            break;
          }
        }
      }
      lVar9 = *(longlong *)(param_1 + 0xe0);
      if (lVar9 != 0) {
        plVar7 = *(longlong **)(lVar9 + 0x260);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x288))(plVar7);
          *(longlong *)(lVar9 + 0x260) = 0;
          lVar9 = *(longlong *)(param_1 + 0xe0);
        }
        if (lVar9 != 0) {
          FUN_140a0c500(lVar9,0,0);
        }
      }
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x148))(plVar7);
      }
      if (*(longlong *)(param_1 + 200) != 0) {
        local_60 = DAT_1468b5da8;
        local_68 = DAT_1468b5da0;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x168);
        if (lVar9 == 0) {
          local_88 = _DAT_1468b5d90;
          local_80 = DAT_1468b5d98;
        }
        else {
          local_88 = *(undefined8 *)(lVar9 + 0x220);
          local_80 = *(undefined4 *)(lVar9 + 0x228);
        }
        uStack_50 = local_80;
        local_58 = local_88;
        FUN_1405a1e30(&local_88,*(longlong *)(param_1 + 0xe8),*(longlong *)(param_1 + 200),&local_58
                      ,0x42480000,&local_68);
        FUN_140591060(&local_88);
      }
      FUN_1409f8ac0(param_1);
      if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x288))();
      }
      if (*(char *)(param_1 + 0x1c) != '\0') {
        FUN_140a15cb0(param_1);
      }
    }
    goto switchD_140a21e17_default;
  case 4:
    if (*(char *)(param_1 + 0x26) != '\0') goto switchD_140a21e17_default;
    plVar7 = *(longlong **)(param_1 + 0xf8);
    if (plVar7 != (longlong *)0x0) {
      if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x4c0);
        }
        if (lVar9 != 0) {
          FUN_140a1e790(*(longlong *)(param_1 + 0xa8),lVar9,*(undefined8 *)(param_1 + 0x98),
                        *(longlong *)(param_1 + 0xe0) + 0x260);
          plVar7 = *(longlong **)(param_1 + 0xf8);
        }
      }
      *(undefined1 *)(param_1 + 0x24) = 1;
      (**(code **)(*plVar7 + 0x280))(plVar7,0);
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        FUN_140a0c500(*(longlong *)(param_1 + 0xe0),0,1);
        FUN_1409f8ac0(param_1);
        goto switchD_140a21e17_default;
      }
    }
LAB_140a222b2:
    FUN_1409f8ac0(param_1);
    goto switchD_140a21e17_default;
  case 5:
    fVar11 = *(float *)(param_1 + 0x84);
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
    if ((plVar7 == (longlong *)0x0) || (lVar9 = (**(code **)(*plVar7 + 0x148))(plVar7), lVar9 == 0))
    {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(lVar9 + 0x8c8);
    }
    if (0.0 <= *(float *)(param_1 + 0x20)) {
      if (fVar10 - *(float *)(param_1 + 0x20) < fVar11) goto switchD_140a21e17_default;
      if ((*(char *)(param_1 + 0x1c) == '\x01') && (*(longlong *)(param_1 + 0xf0) != 0)) {
        FUN_142398ec0(*(longlong *)(param_1 + 0xf0),0,1);
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x928))(*(longlong **)(param_1 + 0xf0),0);
      }
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x148))(plVar7);
        FUN_1409f8ac0(param_1);
        goto switchD_140a21e17_default;
      }
      goto LAB_140a222b2;
    }
    break;
  case 6:
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
    if ((plVar7 == (longlong *)0x0) || (lVar9 = (**(code **)(*plVar7 + 0x148))(plVar7), lVar9 == 0))
    {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)(lVar9 + 0x8c8);
    }
    if (0.0 <= *(float *)(param_1 + 0x20)) {
      if (fVar11 - *(float *)(param_1 + 0x20) < 1.0) goto switchD_140a21e17_default;
      plVar7 = *(longlong **)(param_1 + 0xf8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x280))(plVar7,0);
      }
      if ((*(char *)(param_1 + 0x1c) == '\x02') && (*(longlong *)(param_1 + 0xf0) != 0)) {
        FUN_142398ec0(*(longlong *)(param_1 + 0xf0),0,1);
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x928))(*(longlong **)(param_1 + 0xf0),0);
      }
      goto LAB_140a222b2;
    }
    break;
  case 7:
    break;
  default:
    goto switchD_140a21e17_default;
  }
  cVar8 = '\x01';
LAB_140a222c2:
  plVar7 = *(longlong **)(param_1 + 0xf8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x280))(plVar7,0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146865d80) &&
       (_Init_thread_header(&DAT_146865d80), DAT_146865d80 == -1)) {
      FName::FName(&DAT_146865d78,L"CanFidget",1);
      _Init_thread_footer(&DAT_146865d80);
    }
    UBlackboardComponent::SetValueAsBool(*(undefined8 *)(param_1 + 0x108),&DAT_146865d78,1);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_142dc7850();
  }
  plVar7 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if ((plVar7 != (longlong *)0x0) && ((longlong *)plVar7[0x4c] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)plVar7[0x4c] + 0x288))();
    plVar7[0x4c] = 0;
    plVar7 = *(longlong **)(param_1 + 0xe0);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (plVar7 != (longlong *)0x0) {
    TArray<FName,FDefaultAllocator>::operator=(plVar7 + 0x3b,plVar7 + 0x41);
    plVar7[0x3d] = plVar7[0x4a];
    *(undefined2 *)(plVar7 + 0x3e) = 0;
    (**(code **)(*plVar7 + 0x260))(plVar7);
    plVar7[0x4d] = 0;
    *(undefined4 *)(plVar7 + 0x4e) = 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
switchD_140a21e17_default:
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(char *)(param_2 + 0x70) = cVar8;
  if (cVar8 != '\0') {
    iVar4 = *(int *)(param_2 + 0x68);
    lVar9 = (longlong)iVar4;
    *(int *)(param_2 + 0x68) = iVar4 + 1;
    if (*(int *)(param_2 + 0x6c) < iVar4 + 1) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar4);
    }
    lVar6 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar9 * 0x18) = uVar5;
    *(undefined4 *)(lVar6 + 8 + lVar9 * 0x18) = uVar3;
    *(undefined4 *)(lVar6 + 0xc + lVar9 * 0x18) = uVar1;
    *(undefined4 *)(lVar6 + 0x10 + lVar9 * 0x18) = uVar2;
  }
  return;
}



// FUNCTION 140a224f0 FUN_140a224f0 body=62 status=ok
// SIG undefined FUN_140a224f0(void)

void FUN_140a224f0(longlong param_1)

{
  FUN_140cdc310();
  if (*(char *)(param_1 + 0xae8) != '\0') {
    *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_1 + 0x55c);
    return;
  }
  *(undefined4 *)(param_1 + 0xaec) = 0;
  return;
}



// FUNCTION 140a22530 FUN_140a22530 body=92 status=ok
// SIG undefined FUN_140a22530(void)

void FUN_140a22530(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140cdc310();
  if (*(char *)(param_1 + 0xae8) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x55c);
  }
  *(undefined4 *)(param_1 + 0xaec) = uVar1;
  if (*(char *)(param_1 + 0xaf0) != '\0') {
    *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_1 + 0x55c);
    return;
  }
  *(undefined4 *)(param_1 + 0xaf4) = 0;
  return;
}



// FUNCTION 140a22590 FUN_140a22590 body=117 status=ok
// SIG undefined FUN_140a22590(void)

void FUN_140a22590(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_140cdc310();
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0x660);
  uVar1 = FUN_14225e8a0(param_1,DAT_146865c58);
  *(undefined4 *)(param_1 + 0xb00) = uVar1;
  fVar2 = (float)FUN_14225e8a0(param_1,DAT_146865c50);
  fVar3 = *(float *)(param_1 + 0xaf0) * *(float *)(param_1 + 0x920);
  *(float *)(param_1 + 0xaf4) = fVar2;
  *(float *)(param_1 + 0xaf8) = fVar3;
  *(float *)(param_1 + 0xafc) = fVar3 * fVar2;
  return;
}



// FUNCTION 140a22610 FUN_140a22610 body=60 status=ok
// SIG undefined FUN_140a22610(void)

void FUN_140a22610(longlong param_1)

{
  float fVar1;
  
  FUN_140cdc310();
  fVar1 = *(float *)(param_1 + 0x5b8);
  *(bool *)(param_1 + 0xaec) = *(float *)(param_1 + 0xae8) <= fVar1;
  *(bool *)(param_1 + 0xaf4) =
       fVar1 < *(float *)(param_1 + 0xaf0) || fVar1 == *(float *)(param_1 + 0xaf0);
  return;
}



// FUNCTION 140a22650 FUN_140a22650 body=35 status=ok
// SIG undefined FUN_140a22650(void)

void FUN_140a22650(longlong param_1)

{
  FUN_140cdc310();
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0x660);
  return;
}



// FUNCTION 140a22680 FUN_140a22680 body=456 status=ok
// SIG undefined FUN_140a22680(void)

void FUN_140a22680(undefined8 param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_28;
  undefined2 local_20;
  
  if (*(char *)(param_3 + 0x11c) == '\0') {
    return;
  }
  if (*(longlong *)(*param_2 + 0x568) == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146865d38) && (_Init_thread_header(&DAT_146865d38), DAT_146865d38 == -1))
  {
    FName::FName(&DAT_146865d30,L"TargetActorInfo",1);
    _Init_thread_footer(&DAT_146865d38);
  }
  local_28 = DAT_146865d30;
  local_20 = 0xff00;
  local_res18 = 0;
  cVar2 = FUN_142cc4b40(&local_28,*(undefined8 *)(*param_2 + 0x568),&local_res18);
  if ((cVar2 == '\0') ||
     (cVar2 = FWeakObjectPtr::IsValid(param_3 + 0x70), lVar4 = local_res18, cVar2 == '\0'))
  goto LAB_140a227df;
  if (local_res18 == 0) {
LAB_140a22766:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a22766;
  }
  if (local_res18 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_3 + 0x70);
    if (lVar4 == lVar3) {
      return;
    }
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_3 + 0x70,param_3 + 0x80);
    if (cVar2 != '\0') {
      FWeakObjectPtr::operator=(param_3 + 0x80,lVar4);
    }
    FWeakObjectPtr::operator=(param_3 + 0x70,lVar4);
    *(undefined8 *)(param_3 + 0x9c) = DAT_146294aa0;
    *(undefined4 *)(param_3 + 0xa4) = DAT_146294aa8;
    return;
  }
LAB_140a227df:
  FWeakObjectPtr::operator=(&local_res20,0);
  *(undefined4 *)(param_3 + 0x70) = local_res20;
  *(undefined4 *)(param_3 + 0x74) = local_res24;
  return;
}



// FUNCTION 140a22850 FUN_140a22850 body=691 status=ok
// SIG undefined FUN_140a22850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a22850(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 5);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 5);
    lVar4 = *(longlong *)(lVar3 + 0x120);
    if ((lVar4 != 0) || (lVar4 = FUN_1423407b0(lVar3), lVar4 != 0)) {
      local_100._0_4_ = (undefined4)param_1[5];
      local_108 = *(undefined4 *)((longlong)param_1 + 0x2c);
      uVar5 = FUN_14058f8f0(local_f0,param_1 + 3);
      lVar3 = param_1[2];
      uVar6 = FUN_14058f8f0(local_e0,uVar5);
      uVar7 = FUN_14058f8f0(local_d0,uVar6);
      plVar8 = (longlong *)FMemory::Realloc(0,0x40);
      if (plVar8 != (longlong *)0x0) {
        local_100._4_4_ = local_108;
        local_118 = FUN_14058f8f0(local_c0,uVar7);
        FUN_1409f28e0(plVar8,FUN_140a04e20,lVar3,&local_100);
      }
      FUN_140591060(uVar7);
      FUN_140591060(uVar6);
      if (&local_100 != param_1) {
        if (plVar8 == (longlong *)0x0) {
          if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0))
          {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*param_1 != 0) {
              lVar3 = FMemory::Realloc(*param_1,0,0);
              *param_1 = lVar3;
            }
            *(undefined4 *)(param_1 + 1) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,param_1);
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar3 = FMemory::Realloc(plVar8,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
      FUN_140591060(uVar5);
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      local_a8 = 0;
      local_a0 = 0;
      if (((param_1 != &local_a8) && ((int)param_1[1] != 0)) &&
         (plVar8 = (longlong *)*param_1, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_110 = 0xbf800000;
      local_118 = local_118 & 0xffffffffffffff00;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,param_1 + 2,&local_a8,0x3f800000);
      if (local_48 != 0) {
        plVar8 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar8 = local_58;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    }
  }
  return;
}



// FUNCTION 140a22b10 FUN_140a22b10 body=188 status=ok
// SIG undefined FUN_140a22b10(void)

void FUN_140a22b10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865db0) {
    _Init_thread_header(&DAT_146865db0);
    if (DAT_146865db0 == -1) {
      FName::FName(&DAT_146865da8,L"UserEdge",1);
      _Init_thread_footer(&DAT_146865db0);
    }
  }
  FUN_1407707d0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x6c8);
  if (lVar1 != 0) {
    uVar2 = FUN_1430a8880();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a22b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x108))(plVar3,DAT_146865da8,0xff,0);
      return;
    }
  }
  return;
}



// FUNCTION 140a22bd0 FUN_140a22bd0 body=193 status=ok
// SIG undefined FUN_140a22bd0(void)

void FUN_140a22bd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865da0) {
    _Init_thread_header(&DAT_146865da0);
    if (DAT_146865da0 == -1) {
      FName::FName(&DAT_146865d98,L"UserEdge",1);
      _Init_thread_footer(&DAT_146865da0);
    }
  }
  FUN_1407707f0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x6c8);
  if (lVar1 != 0) {
    uVar2 = FUN_1430a8880();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x100))(plVar3,DAT_146865d98,0xff,1,0,0);
    }
  }
  return;
}



// FUNCTION 140a22ca0 RandomUnitVector body=264 status=ok
// SIG undefined RandomUnitVector(void)

float * UKismetMathLibrary::RandomUnitVector(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  do {
    do {
      iVar1 = rand();
      fVar4 = ((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05) - 1.0;
      iVar1 = rand();
      fVar5 = ((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05) - 1.0;
      iVar1 = rand();
      fVar3 = ((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05) - 1.0;
      fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
    } while (1.0 < fVar2);
  } while (fVar2 < 0.0001);
  fVar2 = 1.0 / SQRT(fVar2);
  *param_1 = fVar4 * fVar2;
  param_1[1] = fVar5 * fVar2;
  param_1[2] = fVar3 * fVar2;
  return param_1;
}



// FUNCTION 140a22dc0 FUN_140a22dc0 body=262 status=ok
// SIG undefined FUN_140a22dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140a22dc0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 8,&local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 140a22ed0 FUN_140a22ed0 body=319 status=ok
// SIG undefined FUN_140a22ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a22ed0(undefined4 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  uVar5 = FRotator::Quaternion(param_2 + 0x18,local_48);
  uVar6 = FRotator::Quaternion(param_2,local_38);
  pfVar7 = (float *)FQuat::Slerp_NotNormalized(local_28,uVar6,uVar5,param_1);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[3];
  auVar9._0_4_ = fVar1 * fVar1 + fVar3 * fVar3;
  auVar9._4_4_ = fVar2 * fVar2 + fVar4 * fVar4;
  auVar9._8_4_ = fVar3 * fVar3 + fVar1 * fVar1;
  auVar9._12_4_ = fVar4 * fVar4 + fVar2 * fVar2;
  fVar15 = auVar9._4_4_ + auVar9._0_4_;
  fVar16 = auVar9._8_4_ + auVar9._4_4_;
  fVar17 = auVar9._12_4_ + auVar9._8_4_;
  fVar18 = auVar9._0_4_ + auVar9._12_4_;
  auVar10._4_4_ = fVar16;
  auVar10._0_4_ = fVar15;
  auVar10._8_4_ = fVar17;
  auVar10._12_4_ = fVar18;
  auVar10 = rsqrtps(auVar9,auVar10);
  fVar11 = auVar10._0_4_;
  fVar12 = auVar10._4_4_;
  fVar13 = auVar10._8_4_;
  fVar14 = auVar10._12_4_;
  fVar11 = (_DAT_146866080 - fVar11 * fVar11 * _DAT_146866080 * fVar15) * fVar11 + fVar11;
  fVar12 = (fRam0000000146866084 - fVar12 * fVar12 * fRam0000000146866084 * fVar16) * fVar12 +
           fVar12;
  fVar13 = (fRam0000000146866088 - fVar13 * fVar13 * fRam0000000146866088 * fVar17) * fVar13 +
           fVar13;
  fVar14 = (fRam000000014686608c - fVar14 * fVar14 * fRam000000014686608c * fVar18) * fVar14 +
           fVar14;
  local_58 = ((uint)(((_DAT_146866080 - fVar11 * fVar11 * _DAT_146866080 * fVar15) * fVar11 + fVar11
                     ) * fVar1) ^ _DAT_146866070) & -(uint)(1e-08 <= fVar15) ^ _DAT_146866070;
  uStack_54 = ((uint)(((fRam0000000146866084 - fVar12 * fVar12 * fRam0000000146866084 * fVar16) *
                       fVar12 + fVar12) * fVar2) ^ uRam0000000146866074) & -(uint)(1e-08 <= fVar16)
              ^ uRam0000000146866074;
  uStack_50 = ((uint)(((fRam0000000146866088 - fVar13 * fVar13 * fRam0000000146866088 * fVar17) *
                       fVar13 + fVar13) * fVar3) ^ uRam0000000146866078) & -(uint)(1e-08 <= fVar17)
              ^ uRam0000000146866078;
  uStack_4c = ((uint)(((fRam000000014686608c - fVar14 * fVar14 * fRam000000014686608c * fVar18) *
                       fVar14 + fVar14) * fVar4) ^ uRam000000014686607c) & -(uint)(1e-08 <= fVar18)
              ^ uRam000000014686607c;
  puVar8 = (undefined8 *)FQuat::Rotator(&local_58,local_68);
  *(undefined8 *)(param_2 + 0xc) = *puVar8;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(puVar8 + 1);
  return;
}



// FUNCTION 140a23010 FUN_140a23010 body=257 status=ok
// SIG undefined FUN_140a23010(void)

void FUN_140a23010(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1441f1988;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    *(undefined1 *)(plVar2 + 4) = param_4;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_1441f19d0;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140a23120 FUN_140a23120 body=647 status=ok
// SIG undefined FUN_140a23120(void)

float FUN_140a23120(float param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  
  cVar1 = FUnitConversion::AreUnitsCompatible(param_2,param_3);
  if (((cVar1 == '\0') || (param_2 == '2')) || (param_3 == '2')) {
switchD_140a23189_caseD_8:
  }
  else {
    uVar2 = FUnitConversion::GetUnitType(param_2);
    switch(uVar2) {
    case 0:
      dVar3 = (double)FUN_1416263a0(param_2);
      dVar4 = (double)FUN_1416263a0(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 1:
      dVar3 = (double)FUN_1416219f0(param_2);
      dVar4 = (double)FUN_1416219f0(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 2:
      dVar3 = (double)UnitConversion::SpeedUnificationFactor(param_2);
      dVar4 = (double)UnitConversion::SpeedUnificationFactor(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 3:
      if (param_2 == '\x0f') {
        param_1 = param_1 + 273.15;
      }
      else if (param_2 == '\x10') {
        param_1 = param_1 * 0.5555556 + 255.37222;
      }
      if (param_3 == '\x0f') {
        param_1 = param_1 - 273.15;
      }
      else if (param_3 == '\x10') {
        param_1 = param_1 * 1.8 - 459.67;
      }
      break;
    case 4:
      dVar3 = (double)FUN_141630bc0(param_2);
      dVar4 = (double)FUN_141630bc0(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 5:
      dVar3 = (double)FUN_14162a930(param_2);
      dVar4 = (double)FUN_14162a930(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 6:
      dVar3 = (double)FUN_14162a960(param_2);
      dVar4 = (double)FUN_14162a960(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 7:
      dVar3 = (double)FUN_141626100(param_2);
      dVar4 = (double)FUN_141626100(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    default:
      goto switchD_140a23189_caseD_8;
    case 9:
      dVar3 = (double)FUN_1416375f0(param_2);
      dVar4 = (double)FUN_1416375f0(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
      break;
    case 0xb:
      dVar3 = (double)FUN_141630c60(param_2);
      dVar4 = (double)FUN_141630c60(param_3);
      param_1 = (float)((dVar3 * (double)param_1) / dVar4);
    }
  }
  return param_1;
}



// FUNCTION 140a233e0 FUN_140a233e0 body=896 status=ok
// SIG undefined FUN_140a233e0(void)

int * FUN_140a233e0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  bool local_res8;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar7 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x90);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x90) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar13 + lVar4);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar5 = (longlong)iVar10 * 0x90;
  plVar13 = (longlong *)(*param_1 + lVar5);
  _guard_xfg_dispatch_icall_nop(&local_b8,0,0x80);
  local_res8 = false;
  lVar1 = *(longlong *)*param_3;
  plVar13[1] = local_b8;
  plVar13[2] = lStack_b0;
  *plVar13 = lVar1;
  plVar13[3] = local_a8;
  plVar13[4] = lStack_a0;
  plVar13[5] = local_98;
  plVar13[6] = lStack_90;
  plVar13[7] = local_88;
  plVar13[8] = lStack_80;
  plVar13[9] = local_78;
  plVar13[10] = lStack_70;
  plVar13[0xb] = local_68;
  plVar13[0xc] = lStack_60;
  *(undefined4 *)(plVar13 + 0xd) = local_58;
  *(undefined4 *)((longlong)plVar13 + 0x6c) = uStack_54;
  *(undefined4 *)(plVar13 + 0xe) = uStack_50;
  *(undefined4 *)((longlong)plVar13 + 0x74) = uStack_4c;
  *(undefined4 *)(plVar13 + 0xf) = local_48;
  *(undefined4 *)((longlong)plVar13 + 0x7c) = uStack_44;
  *(undefined4 *)(plVar13 + 0x10) = uStack_40;
  *(undefined4 *)((longlong)plVar13 + 0x84) = uStack_3c;
  *(undefined4 *)(plVar13 + 0x11) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar15;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x90) == lVar1) break;
          iVar8 = *(int *)(*param_1 + 0x88 + (longlong)iVar8 * 0x90);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x90 + *param_1),plVar13,0x88);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x90) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar5 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar5 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar13 + lVar4);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140a2372b;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar3 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) * 0x17 + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x8c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 0x11) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140a2372b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140a23760 FUN_140a23760 body=779 status=ok
// SIG undefined FUN_140a23760(void)

int * FUN_140a23760(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  bool local_res8;
  
  iVar11 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar13 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x28;
  plVar13 = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *(undefined4 *)(plVar13 + 1) = 0;
  *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
  *(undefined4 *)(plVar13 + 2) = 0;
  *(undefined4 *)((longlong)plVar13 + 0x14) = 0;
  *plVar13 = lVar2;
  plVar13[3] = 0;
  *(undefined4 *)(plVar13 + 4) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar15;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x28) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x20 + (longlong)iVar8 * 0x28);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x28),plVar13,0x20);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar13 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140a23a39;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar7 = '\0';
    if (uVar4 != 0) {
      iVar11 = 0x1f - iVar15;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar7 = '\x1f' - (char)iVar15;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) * 0x17 + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x24) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_140a391a0(param_1);
  }
LAB_140a23a39:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140a23a70 FUN_140a23a70 body=781 status=ok
// SIG undefined FUN_140a23a70(void)

int * FUN_140a23a70(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  int iVar14;
  bool local_res8;
  
  iVar8 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar9 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar9 * 0x60 + *param_1);
  FUN_140a22dc0(param_3,plVar11);
  *(undefined4 *)(plVar11 + 0xb) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    lVar3 = *plVar11;
    iVar9 = iVar14;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x60 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x60 + 0x58 + *param_1);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x58);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar8;
      }
      puVar6 = (undefined4 *)((longlong)iVar8 * 0x60 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar6[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140a23d54;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar14;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar14;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar11 >> 0x20) * 0x17 + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x5c) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140a23d54:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140a23d80 FUN_140a23d80 body=1020 status=ok
// SIG undefined FUN_140a23d80(void)

void FUN_140a23d80(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140a23e7d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_140a23e7d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140a23f55;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_140a23f55:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_142e27720();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140a23d80(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 140a24180 FUN_140a24180 body=1020 status=ok
// SIG undefined FUN_140a24180(void)

void FUN_140a24180(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140a2427d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_140a2427d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140a24355;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_140a24355:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_1414e0f70();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140a24180(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 140a24580 GetGameState<APVPGameState> body=89 status=ok
// SIG undefined GetGameState<APVPGameState>(void)

longlong UWorld::GetGameState<APVPGameState>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    lVar3 = FUN_141424d10();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140a245e0 FUN_140a245e0 body=413 status=ok
// SIG undefined FUN_140a245e0(void)

undefined1 * FUN_140a245e0(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    lVar5 = UNumericProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x370))(plVar1);
      if (cVar3 != '\0') {
        dVar7 = (double)(**(code **)(*plVar1 + 0x3b8))();
        *param_2 = (char)(int)dVar7;
        param_2[1] = 1;
        return param_2;
      }
      uVar4 = (**(code **)(*plVar1 + 0x3a8))(plVar1,param_1[1]);
      *param_2 = uVar4;
      param_2[1] = 1;
      return param_2;
    }
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = (*(byte *)(lVar5 + 0x73) &
                 *(byte *)((ulonglong)*(byte *)(lVar5 + 0x71) + param_1[1])) != 0;
      param_2[1] = 1;
      return param_2;
    }
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x3a8))
                        (*(longlong **)(lVar5 + 0x70),param_1[1]);
      *param_2 = uVar4;
      param_2[1] = 1;
      return param_2;
    }
  }
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140a24780 IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_> body=905 status=ok
// SIG undefined IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
               (longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
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
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar8 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
      plVar7 = plVar8;
      if (local_338 != 0) {
LAB_140a24850:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          plVar11 = plVar13 + 1;
          lVar1 = plVar7[lVar9 >> 1];
          plVar7[lVar9 >> 1] = *plVar7;
          *plVar7 = lVar1;
          plVar8 = plVar7;
LAB_140a24880:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar13) goto code_r0x000140a24889;
          goto LAB_140a248a0;
        }
        for (; plVar11 = plVar7, plVar8 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar12 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar13) {
            plVar11 = plVar8;
            if (*(int *)(*plVar8 + 8) <= *(int *)(*plVar12 + 8)) {
              plVar11 = plVar12;
            }
          }
          lVar9 = *plVar12;
          *plVar12 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_140a24a68;
      }
LAB_140a24954:
      iVar5 = (int)lVar9;
      iVar3 = (iVar5 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar6 = iVar3;
joined_r0x000140a2496d:
        do {
          if (iVar4 < iVar5) {
            iVar4 = iVar3 * 2;
            iVar10 = iVar4 + 1;
            if (iVar4 + 2 < iVar5) {
              if (*(int *)(plVar8[(longlong)iVar4 + 2] + 8) < *(int *)(plVar8[iVar10] + 8)) {
                iVar10 = iVar4;
              }
              iVar10 = iVar10 + 1;
            }
            lVar9 = plVar8[iVar3];
            if (*(int *)(lVar9 + 8) < *(int *)(plVar8[iVar10] + 8)) {
              iVar4 = iVar10 * 2 + 1;
              plVar8[iVar3] = plVar8[iVar10];
              plVar8[iVar10] = lVar9;
              iVar3 = iVar10;
              goto joined_r0x000140a2496d;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar6 + -1;
          iVar2 = iVar4;
          iVar6 = iVar3;
        } while (-1 < iVar3);
      }
      iVar5 = iVar5 + -1;
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        do {
          iVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = plVar8[lVar9];
          plVar8[lVar9] = lVar1;
          if (1 < iVar5) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar5) {
                if (*(int *)(plVar8[(longlong)iVar2 + 2] + 8) < *(int *)(plVar8[iVar4] + 8)) {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar8[iVar3];
              if (*(int *)(plVar8[iVar4] + 8) <= *(int *)(lVar1 + 8)) break;
              plVar8[iVar3] = plVar8[iVar4];
              plVar8[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar5);
          }
          iVar5 = iVar5 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_140a24a68:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000140a24889:
  if (*(int *)(*plVar8 + 8) <= *(int *)(*plVar7 + 8)) goto LAB_140a24880;
LAB_140a248a0:
  do {
    plVar12 = plVar11;
    lVar9 = plVar12[-1];
    plVar11 = plVar12 + -1;
    if (plVar11 <= plVar7) break;
  } while (*(int *)(*plVar7 + 8) <= *(int *)(lVar9 + 8));
  if (plVar8 <= plVar11) {
    lVar1 = *plVar8;
    *plVar8 = lVar9;
    *plVar11 = lVar1;
    goto LAB_140a24880;
  }
  lVar1 = *plVar7;
  *plVar7 = lVar9;
  *plVar11 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar11 + (-8 - (longlong)plVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar13) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar11 <= plVar7 + 1) goto LAB_140a24a68;
    plVar13 = plVar12 + -2;
    plVar8 = plVar7;
  }
  else {
    if (plVar7 + 1 < plVar11) {
      *plVar14 = (longlong)plVar7;
      plVar14[1] = (longlong)(plVar12 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar8) goto LAB_140a24a68;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
  plVar7 = plVar8;
  if (local_338 == 0) goto LAB_140a24954;
  goto LAB_140a24850;
}



// FUNCTION 140a24b10 FUN_140a24b10 body=89 status=ok
// SIG undefined FUN_140a24b10(void)

void FUN_140a24b10(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_1414c1ff0();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140a24b70 FUN_140a24b70 body=143 status=ok
// SIG undefined FUN_140a24b70(void)

void FUN_140a24b70(float param_1,float *param_2)

{
  float fVar1;
  undefined1 local_res10 [24];
  
  if (*(char *)(param_2 + 5) == '\0') {
    param_1 = param_2[3] + param_1;
  }
  else {
    param_1 = param_2[3] - param_1;
  }
  param_2[3] = param_1;
  if (param_2[4] <= 0.0) {
    param_1 = 1.0;
  }
  else {
    param_1 = param_1 / param_2[4];
    if (0.0 <= param_1) {
      if (1.0 <= param_1) {
        param_1 = 1.0;
      }
    }
    else {
      param_1 = 0.0;
    }
  }
  local_res10[0] = *(undefined1 *)(param_2 + 6);
  fVar1 = (float)UKismetMathLibrary::Ease(0,0x3f800000,param_1,local_res10,param_2[7],param_2[8]);
  param_2[1] = (param_2[2] - *param_2) * fVar1 + *param_2;
  return;
}



// FUNCTION 140a24c00 FUN_140a24c00 body=784 status=ok
// SIG undefined FUN_140a24c00(void)

undefined8 * FUN_140a24c00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  FUN_1426850b0();
  *(undefined4 *)(param_1 + 0x99) = 4;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x459c4000;
  puVar1 = param_1 + 0xb7;
  *(undefined4 *)(param_1 + 0x9a) = 0x42340000;
  *param_1 = &PTR_FUN_1441f0f60;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0x40000000;
  param_1[0x8b] = &PTR_LAB_1441f1798;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0xc0a00000;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x443a0000;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x443a0000;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f333333;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xad) = 1;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0x49f42400;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x10000;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *puVar1 = 0;
  *(undefined2 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5dc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5ce) = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  local_res8 = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"Frame",1);
  uVar4 = *puVar2;
  uVar3 = FUN_142a232e0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0xa1] = uVar4;
  FUN_14223f010(param_1,uVar4);
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"TireTrackAndFrontWheels",1);
  uVar4 = *puVar2;
  uVar3 = FUN_142e5c1e0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0xa2] = uVar4;
  local_res8 = 0;
  FUN_142399e30(uVar4,param_1[0xa1],0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146866698) {
    _Init_thread_header(&DAT_146866698);
    if (DAT_146866698 == -1) {
      FName::FName(&DAT_146866690,L"SplineTraceName",1);
      _Init_thread_footer(&DAT_146866698);
    }
  }
  *puVar1 = DAT_146866690;
  FCollisionQueryParams::AddIgnoredActor(puVar1,param_1);
  *(uint *)(param_1 + 0xb6) = *(uint *)(param_1 + 0xb6) | 1;
  return param_1;
}



// FUNCTION 140a24f10 FUN_140a24f10 body=212 status=ok
// SIG undefined FUN_140a24f10(void)

undefined8 * FUN_140a24f10(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441e9b68;
  param_1[0x8b] = &PTR_LAB_1441ea250;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0xc1700000;
  param_1[0x96] = 0x3f800000;
  param_1[0x98] = 0x40400000;
  param_1[0x9a] = 0x3f800000;
  param_1[0x9c] = 0x40400000;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(undefined1 *)(param_1 + 6) = 2;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf7;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x8e) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0x3f800000;
  AActor::SetActorTickEnabled(param_1,1);
  return param_1;
}



// FUNCTION 140a24ff0 FUN_140a24ff0 body=544 status=ok
// SIG undefined FUN_140a24ff0(void)

undefined8 * FUN_140a24ff0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FUN_1405c0e40();
  *(undefined4 *)(param_1 + 0x8e) = 0x43fa0000;
  *param_1 = &PTR__scalar_deleting_destructor__1441ea278;
  *(undefined1 *)(param_1[0x8c] + 0x1c0) = 1;
  *(undefined4 *)(param_1[0x8c] + 0x1d4) = 0x41200000;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"AIPerception",1);
  uVar6 = *puVar4;
  uVar5 = UHomeWidget::GetPrivateStaticClass();
  uVar6 = FUN_141789050(param_2,param_1,uVar6,uVar5,uVar5,1,0,0);
  param_1[0x8d] = uVar6;
  puVar4 = (undefined8 *)FName::FName(&local_res8,"AISense_Bullet",1);
  uVar6 = param_1[0x8d];
  uVar5 = *puVar4;
  uVar7 = FUN_142df99c0();
  lVar8 = FUN_141789050(param_2,uVar6,uVar5,uVar7,uVar7,1,0,0);
  *(undefined4 *)(lVar8 + 0x50) = 0x461c4000;
  FUN_142c1ded0(param_1[0x8d],lVar8);
  uVar6 = FUN_142df53d0();
  FUN_142c27050(param_1[0x8d],uVar6);
  *(undefined1 *)(param_1[0x8d] + 0x1bc) = 1;
  pwVar9 = _guard_xfg_dispatch_icall_nop
                     (L"&APerceptiveActiveAmbientSound::OnTargetPerceptionUpdated",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(local_res18,pwVar3 + 2,1);
  lVar8 = param_1[0x8d];
  plVar12 = (longlong *)(lVar8 + 0x248);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res18[0];
  local_res8 = 0;
  if ((local_res18[0] != 0) && (lVar10 = FWeakObjectPtr::Get(&local_28), lVar10 != 0)) {
    UObject::FindFunction(lVar10,local_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
  iVar1 = *(int *)(lVar8 + 0x250);
  *(int *)(lVar8 + 0x250) = iVar1 + 1;
  if (*(int *)(lVar8 + 0x254) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
  }
  puVar11 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar12);
  *puVar11 = local_28;
  puVar11[1] = local_24;
  *(longlong *)(puVar11 + 2) = local_20;
  return param_1;
}



// FUNCTION 140a25210 FUN_140a25210 body=130 status=ok
// SIG undefined FUN_140a25210(void)

undefined8 * FUN_140a25210(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441eaed8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  AActor::SetTickableWhenPaused(param_1,1);
  AActor::SetActorTickEnabled(param_1,1);
  return param_1;
}



// FUNCTION 140a252a0 FUN_140a252a0 body=202 status=ok
// SIG undefined FUN_140a252a0(void)

undefined8 * FUN_140a252a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1440ff930;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BoxComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14290f330();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8c] = lVar4;
  *(undefined8 *)(lVar4 + 0x710) = 0x43fa000043fa0000;
  *(undefined4 *)(lVar4 + 0x718) = 0x43fa0000;
  FUN_1423974f0(param_1[0x8c],0);
  (**(code **)(*(longlong *)param_1[0x8c] + 0x638))((longlong *)param_1[0x8c],0);
  return param_1;
}



// FUNCTION 140a25370 FUN_140a25370 body=952 status=ok
// SIG undefined FUN_140a25370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a25370(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  iVar13 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144167968;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x10,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41200000;
  param_1[0x1f] = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  FUN_141f84110(param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *param_1 = &PTR_FUN_1441f0e28;
  *(undefined4 *)(param_1 + 0x28) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xc1c80000;
  *(undefined4 *)(param_1 + 0x29) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xc1c80000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x2b) = 0xc47a0000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x2c) = 0xc47a0000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x2d) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x443b8000;
  *(undefined4 *)(param_1 + 0x2e) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x44098000;
  *(undefined4 *)(param_1 + 0x2f) = 0x437a0000;
  local_48 = (undefined2 *)0x0;
  local_40 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ECarnivoraBones",0x20);
  puVar1 = param_1 + 0x30;
  param_1[0x35e] = 0;
  param_1[0x360] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x361] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x35e);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x35e) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1af4) < iVar3 + 1) {
      FUN_140a39440(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam000000014686609c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146866094 & uRam00000001468660a4;
    uVar16 = uRam0000000146866098 & uRam00000001468660a8;
    uVar17 = uRam000000014686609c & uRam00000001468660ac;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146866090 & _DAT_1468660a0;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x25);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return param_1;
}



// FUNCTION 140a25730 FUN_140a25730 body=139 status=ok
// SIG undefined FUN_140a25730(void)

longlong FUN_140a25730(longlong param_1)

{
  FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return param_1;
}



// FUNCTION 140a257c0 FUN_140a257c0 body=138 status=ok
// SIG undefined FUN_140a257c0(void)

undefined4 * FUN_140a257c0(undefined4 *param_1)

{
  *param_1 = 0;
  FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 140a25850 FUN_140a25850 body=456 status=ok
// SIG undefined FUN_140a25850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a25850(undefined8 *param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = &PTR_FUN_1441f17f0;
  param_1[1] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_142d979c0(param_1 + 0x10);
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x25,0);
  param_1[0x26] = 0;
  param_1[1] = 0;
  param_1[2] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 3) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x1c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x24) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_1468b5da8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xb) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_142d979a0(&local_28,0);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x10) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_24;
  *(undefined4 *)(param_1 + 0x11) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_1c;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x94) = uStack_14;
  *(undefined4 *)(param_1 + 0x13) = uStack_10;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_c;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  FWeakObjectPtr::operator=(param_1 + 0x25,0);
  param_1[0x26] = 0;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfe;
  return param_1;
}



// FUNCTION 140a25a20 FUN_140a25a20 body=114 status=ok
// SIG undefined FUN_140a25a20(void)

undefined8 * FUN_140a25a20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 2;
  *(undefined4 *)(param_1 + 3) = 0x42b40000;
  *(undefined4 *)(param_1 + 4) = 0x42b40000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x44000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x4a000000;
  *(undefined4 *)(param_1 + 6) = 0x3faaaaab;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  FUN_142741540(param_1 + 8);
  param_1[200] = 0;
  *(uint *)(param_1 + 0xc9) = *(uint *)(param_1 + 0xc9) & 0xfffffffe;
  return param_1;
}



// FUNCTION 140a25aa0 FUN_140a25aa0 body=6151 status=ok
// SIG undefined FUN_140a25aa0(void)

uint * FUN_140a25aa0(uint *param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  uVar5 = (*param_1 ^ *param_2) & 2 ^ *param_1;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 4 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 8 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x10 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x20 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x40 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x80 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x100 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x200 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x400 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x800 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x1000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x2000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x4000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x8000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x10000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x20000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x40000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x80000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x100000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x200000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x400000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x800000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x1000000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x2000000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x4000000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x8000000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x10000000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x20000000 ^ uVar5;
  *param_1 = uVar5;
  uVar5 = (uVar5 ^ *param_2) & 0x40000000 ^ uVar5;
  *param_1 = uVar5;
  *param_1 = (uVar5 ^ *param_2) & 0x7fffffff ^ *param_2;
  param_1[1] = param_1[1] ^ (param_1[1] ^ param_2[1]) & 1;
  uVar5 = (param_1[1] ^ param_2[1]) & 2 ^ param_1[1];
  param_1[1] = uVar5;
  uVar5 = (uVar5 ^ param_2[1]) & 4 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 8 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x10 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x20 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x40 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x80 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x100 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x200 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x400 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x800 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x1000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x2000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x4000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x8000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x10000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x20000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x40000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x80000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x100000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x200000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x400000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x800000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x1000000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x2000000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x4000000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x8000000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x10000000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x20000000 ^ uVar5;
  param_1[1] = uVar5;
  uVar5 = (param_2[1] ^ uVar5) & 0x40000000 ^ uVar5;
  param_1[1] = uVar5;
  param_1[1] = (param_2[1] ^ uVar5) & 0x7fffffff ^ param_2[1];
  param_1[2] = param_1[2] ^ (param_1[2] ^ param_2[2]) & 1;
  uVar5 = (param_1[2] ^ param_2[2]) & 2 ^ param_1[2];
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 4 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 8 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x10 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x20 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x40 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x80 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x100 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x200 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x400 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x800 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x1000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x2000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x4000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x8000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x10000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x20000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x40000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x80000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x100000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x200000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x400000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x800000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x1000000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x2000000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x4000000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x8000000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x10000000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x20000000 ^ uVar5;
  param_1[2] = uVar5;
  uVar5 = (param_2[2] ^ uVar5) & 0x40000000 ^ uVar5;
  param_1[2] = uVar5;
  param_1[2] = (param_2[2] ^ uVar5) & 0x7fffffff ^ param_2[2];
  param_1[3] = param_1[3] ^ (param_1[3] ^ param_2[3]) & 1;
  uVar5 = (param_1[3] ^ param_2[3]) & 2 ^ param_1[3];
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 4 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 8 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x10 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x20 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x40 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x80 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x100 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x200 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x400 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x800 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x1000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x2000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x4000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x8000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x10000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x20000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x40000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x80000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x100000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x200000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x400000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x800000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x1000000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x2000000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x4000000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x8000000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x10000000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x20000000 ^ uVar5;
  param_1[3] = uVar5;
  uVar5 = (param_2[3] ^ uVar5) & 0x40000000 ^ uVar5;
  param_1[3] = uVar5;
  param_1[3] = (param_2[3] ^ uVar5) & 0x7fffffff ^ param_2[3];
  param_1[4] = param_1[4] ^ (param_1[4] ^ param_2[4]) & 1;
  uVar5 = (param_1[4] ^ param_2[4]) & 2 ^ param_1[4];
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 4 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 8 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x10 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x20 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x40 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x80 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x100 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x200 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x400 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x800 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x1000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x2000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x4000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x8000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x10000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x20000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x40000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x80000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x100000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x200000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x400000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x800000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x1000000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x2000000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x4000000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x8000000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x10000000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x20000000 ^ uVar5;
  param_1[4] = uVar5;
  uVar5 = (uVar5 ^ param_2[4]) & 0x40000000 ^ uVar5;
  param_1[4] = uVar5;
  param_1[4] = (uVar5 ^ param_2[4]) & 0x7fffffff ^ param_2[4];
  param_1[5] = param_1[5] ^ (param_1[5] ^ param_2[5]) & 1;
  uVar5 = (param_1[5] ^ param_2[5]) & 2 ^ param_1[5];
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 4 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 8 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x10 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x20 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x40 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x80 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x100 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x200 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x400 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x800 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x1000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x2000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x4000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x8000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x10000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x20000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x40000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x80000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x100000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x200000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x400000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x800000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x1000000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x2000000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x4000000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x8000000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x10000000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x20000000 ^ uVar5;
  param_1[5] = uVar5;
  uVar5 = (uVar5 ^ param_2[5]) & 0x40000000 ^ uVar5;
  param_1[5] = uVar5;
  param_1[5] = (uVar5 ^ param_2[5]) & 0x7fffffff ^ param_2[5];
  param_1[6] = param_1[6] ^ (param_1[6] ^ param_2[6]) & 1;
  uVar5 = (param_1[6] ^ param_2[6]) & 2 ^ param_1[6];
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 4 ^ uVar5;
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 8 ^ uVar5;
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 0x10 ^ uVar5;
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 0x20 ^ uVar5;
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 0x40 ^ uVar5;
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 0x80 ^ uVar5;
  param_1[6] = uVar5;
  uVar5 = (uVar5 ^ param_2[6]) & 0x100 ^ uVar5;
  param_1[6] = uVar5;
  param_1[6] = (uVar5 ^ param_2[6]) & 0x200 ^ uVar5;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar4;
  param_1[0x34] = param_2[0x34];
  uVar4 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x42) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x46) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4e) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = uVar4;
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = param_2[0x67];
  uVar4 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x6a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar4;
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  uVar4 = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x73) = *(undefined8 *)(param_2 + 0x73);
  *(undefined8 *)(param_1 + 0x75) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x79);
  *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x77);
  *(undefined8 *)(param_1 + 0x79) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x7d);
  *(undefined8 *)(param_1 + 0x7b) = *(undefined8 *)(param_2 + 0x7b);
  *(undefined8 *)(param_1 + 0x7d) = uVar4;
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  uVar4 = *(undefined8 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x83) = *(undefined8 *)(param_2 + 0x83);
  *(undefined8 *)(param_1 + 0x85) = uVar4;
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  *(char *)(param_1 + 0x89) = (char)param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  uVar4 = *(undefined8 *)(param_2 + 0x95);
  *(undefined8 *)(param_1 + 0x93) = *(undefined8 *)(param_2 + 0x93);
  *(undefined8 *)(param_1 + 0x95) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x99);
  *(undefined8 *)(param_1 + 0x97) = *(undefined8 *)(param_2 + 0x97);
  *(undefined8 *)(param_1 + 0x99) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x9b) = *(undefined8 *)(param_2 + 0x9b);
  *(undefined8 *)(param_1 + 0x9d) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xa1);
  *(undefined8 *)(param_1 + 0x9f) = *(undefined8 *)(param_2 + 0x9f);
  *(undefined8 *)(param_1 + 0xa1) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa3) = *(undefined8 *)(param_2 + 0xa3);
  *(undefined8 *)(param_1 + 0xa5) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xa9);
  *(undefined8 *)(param_1 + 0xa7) = *(undefined8 *)(param_2 + 0xa7);
  *(undefined8 *)(param_1 + 0xa9) = uVar4;
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  *(undefined8 *)(param_1 + 0xaf) = *(undefined8 *)(param_2 + 0xaf);
  *(undefined8 *)(param_1 + 0xb1) = *(undefined8 *)(param_2 + 0xb1);
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  param_1[0xb5] = param_2[0xb5];
  param_1[0xb6] = param_2[0xb6];
  param_1[0xb7] = param_2[0xb7];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xba] = param_2[0xba];
  uVar4 = *(undefined8 *)(param_2 + 0xbd);
  *(undefined8 *)(param_1 + 0xbb) = *(undefined8 *)(param_2 + 0xbb);
  *(undefined8 *)(param_1 + 0xbd) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xc1);
  *(undefined8 *)(param_1 + 0xbf) = *(undefined8 *)(param_2 + 0xbf);
  *(undefined8 *)(param_1 + 0xc1) = uVar4;
  param_1[0xc3] = param_2[0xc3];
  param_1[0xc4] = param_2[0xc4];
  *(undefined8 *)(param_1 + 0xc6) = *(undefined8 *)(param_2 + 0xc6);
  param_1[200] = param_2[200];
  param_1[0xc9] = param_2[0xc9];
  param_1[0xca] = param_2[0xca];
  param_1[0xcb] = param_2[0xcb];
  param_1[0xcc] = param_2[0xcc];
  param_1[0xcd] = param_2[0xcd];
  param_1[0xce] = param_2[0xce];
  *(char *)(param_1 + 0xcf) = (char)param_2[0xcf];
  param_1[0xd0] = param_2[0xd0];
  param_1[0xd1] = param_2[0xd1];
  param_1[0xd2] = param_2[0xd2];
  param_1[0xd3] = param_2[0xd3];
  param_1[0xd4] = param_2[0xd4];
  param_1[0xd5] = param_2[0xd5];
  param_1[0xd6] = param_2[0xd6];
  param_1[0xd7] = param_2[0xd7];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = param_2[0xd9];
  param_1[0xda] = param_2[0xda];
  param_1[0xdb] = param_2[0xdb];
  uVar4 = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xde) = uVar4;
  param_1[0xe0] = param_2[0xe0];
  param_1[0xe1] = param_2[0xe1];
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  uVar4 = *(undefined8 *)(param_2 + 0xe6);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe6) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xea);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xea) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xee);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xee) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xf2);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf2) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xf6) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xfa);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xfa) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xfe);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xfe) = uVar4;
  uVar5 = param_2[0x101];
  uVar2 = param_2[0x102];
  uVar3 = param_2[0x103];
  param_1[0x100] = param_2[0x100];
  param_1[0x101] = uVar5;
  param_1[0x102] = uVar2;
  param_1[0x103] = uVar3;
  param_1[0x104] = param_2[0x104];
  param_1[0x105] = param_2[0x105];
  param_1[0x106] = param_2[0x106];
  param_1[0x107] = param_2[0x107];
  param_1[0x108] = param_2[0x108];
  param_1[0x109] = param_2[0x109];
  param_1[0x10a] = param_2[0x10a];
  param_1[0x10b] = param_1[0x10b] ^ (param_2[0x10b] ^ param_1[0x10b]) & 1;
  param_1[0x10c] = param_2[0x10c];
  param_1[0x10d] = param_2[0x10d];
  param_1[0x10e] = param_2[0x10e];
  param_1[0x10f] = param_2[0x10f];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  param_1[0x114] = param_2[0x114];
  param_1[0x115] = param_1[0x115] ^ (param_2[0x115] ^ param_1[0x115]) & 1;
  param_1[0x116] = param_2[0x116];
  param_1[0x117] = param_2[0x117];
  param_1[0x118] = param_2[0x118];
  param_1[0x119] = param_2[0x119];
  param_1[0x11a] = param_2[0x11a];
  param_1[0x11b] = param_2[0x11b];
  param_1[0x11c] = param_2[0x11c];
  param_1[0x11d] = param_2[0x11d];
  param_1[0x11e] = param_2[0x11e];
  param_1[0x11f] = param_2[0x11f];
  uVar4 = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x122) = uVar4;
  param_1[0x124] = param_2[0x124];
  uVar4 = *(undefined8 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x125) = *(undefined8 *)(param_2 + 0x125);
  *(undefined8 *)(param_1 + 0x127) = uVar4;
  param_1[0x129] = param_2[0x129];
  uVar4 = *(undefined8 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x12a) = *(undefined8 *)(param_2 + 0x12a);
  *(undefined8 *)(param_1 + 300) = uVar4;
  param_1[0x12e] = param_2[0x12e];
  param_1[0x12f] = param_2[0x12f];
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x132) = *(undefined8 *)(param_2 + 0x132);
  param_1[0x134] = param_2[0x134];
  *(char *)(param_1 + 0x135) = (char)param_2[0x135];
  param_1[0x136] = param_1[0x136] ^ (param_2[0x136] ^ param_1[0x136]) & 1;
  param_1[0x137] = param_2[0x137];
  param_1[0x138] = param_2[0x138];
  param_1[0x139] = param_2[0x139];
  param_1[0x13a] = param_2[0x13a];
  param_1[0x13b] = param_2[0x13b];
  param_1[0x13c] = param_2[0x13c];
  param_1[0x13d] = param_2[0x13d];
  param_1[0x13e] = param_2[0x13e];
  param_1[0x13f] = param_2[0x13f];
  param_1[0x140] = param_2[0x140];
  param_1[0x141] = param_2[0x141];
  param_1[0x142] = param_2[0x142];
  param_1[0x143] = param_2[0x143];
  *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_2 + 0x144);
  param_1[0x146] = param_2[0x146];
  param_1[0x147] = param_2[0x147];
  param_1[0x148] = param_2[0x148];
  param_1[0x149] = param_2[0x149];
  param_1[0x14a] = param_2[0x14a];
  param_1[0x14b] = param_2[0x14b];
  param_1[0x14c] = param_2[0x14c];
  param_1[0x14d] = param_2[0x14d];
  param_1[0x14e] = param_2[0x14e];
  param_1[0x14f] = param_2[0x14f];
  param_1[0x150] = param_2[0x150];
  param_1[0x151] = param_2[0x151];
  param_1[0x152] = param_2[0x152];
  param_1[0x153] = param_2[0x153];
  param_1[0x154] = param_2[0x154];
  param_1[0x155] = param_2[0x155];
  param_1[0x156] = param_2[0x156];
  param_1[0x157] = param_2[0x157];
  param_1[0x158] = param_2[0x158];
  param_1[0x159] = param_2[0x159];
  param_1[0x15a] = param_2[0x15a];
  param_1[0x15b] = param_2[0x15b];
  param_1[0x15c] = param_2[0x15c];
  param_1[0x15d] = param_2[0x15d];
  param_1[0x15e] = param_2[0x15e];
  param_1[0x15f] = param_2[0x15f];
  param_1[0x160] = param_2[0x160];
  param_1[0x161] = param_2[0x161];
  param_1[0x162] = param_2[0x162];
  param_1[0x163] = param_2[0x163];
  param_1[0x164] = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x166] = param_1[0x166] ^ (param_2[0x166] ^ param_1[0x166]) & 1;
  param_1[0x167] = param_2[0x167];
  param_1[0x168] = param_2[0x168];
  param_1[0x169] = param_2[0x169];
  param_1[0x16a] = param_2[0x16a];
  param_1[0x16b] = param_2[0x16b];
  param_1[0x16c] = param_2[0x16c];
  param_1[0x16d] = param_2[0x16d];
  param_1[0x16e] = param_2[0x16e];
  param_1[0x16f] = param_2[0x16f];
  param_1[0x170] = param_2[0x170];
  param_1[0x171] = param_2[0x171];
  param_1[0x172] = param_2[0x172];
  *(undefined8 *)(param_1 + 0x173) = *(undefined8 *)(param_2 + 0x173);
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  uVar5 = param_2[0x178];
  pvVar1 = *(void **)(param_2 + 0x176);
  param_1[0x178] = uVar5;
  if (uVar5 == 0) {
    param_1[0x179] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x176,uVar5,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x176),pvVar1,(longlong)(int)uVar5 << 4);
  }
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  uVar5 = param_2[0x17c];
  pvVar1 = *(void **)(param_2 + 0x17a);
  param_1[0x17c] = uVar5;
  if (uVar5 == 0) {
    param_1[0x17d] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x17a,uVar5,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x17a),pvVar1,(longlong)(int)uVar5 << 3);
  }
  return param_1;
}



// FUNCTION 140a272b0 FRotationMatrix body=646 status=ok
// SIG undefined FRotationMatrix(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FRotationMatrix::FRotationMatrix(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_2 * _DAT_1468665d0 -
          (float)(int)(_DAT_1468665c0 * *param_2 * _DAT_1468665d0) * _DAT_1468665b0;
  fVar6 = param_2[1] * fRam00000001468665d4 -
          (float)(int)(fRam00000001468665c4 * param_2[1] * fRam00000001468665d4) *
          fRam00000001468665b4;
  fVar8 = param_2[2] * fRam00000001468665d8 -
          (float)(int)(fRam00000001468665c8 * param_2[2] * fRam00000001468665d8) *
          fRam00000001468665b8;
  uVar1 = -(uint)(_DAT_146866580 < (float)(_DAT_146866130 & (uint)fVar4));
  uVar2 = -(uint)(fRam0000000146866584 < (float)(uRam0000000146866134 & (uint)fVar6));
  uVar3 = -(uint)(fRam0000000146866588 < (float)(uRam0000000146866138 & (uint)fVar8));
  fVar4 = (float)(((uint)((float)(_DAT_1468665a0 & (uint)fVar4 | _DAT_146866590) - fVar4) ^
                  (uint)fVar4) & uVar1 ^ (uint)fVar4);
  fVar6 = (float)(((uint)((float)(uRam00000001468665a4 & (uint)fVar6 | uRam0000000146866594) - fVar6
                         ) ^ (uint)fVar6) & uVar2 ^ (uint)fVar6);
  fVar8 = (float)(((uint)((float)(uRam00000001468665a8 & (uint)fVar8 | uRam0000000146866598) - fVar8
                         ) ^ (uint)fVar8) & uVar3 ^ (uint)fVar8);
  fVar5 = fVar4 * fVar4;
  fVar7 = fVar6 * fVar6;
  fVar9 = fVar8 * fVar8;
  fVar4 = (((((fVar5 * -2.3889859e-08 + 2.7525562e-06) * fVar5 + -0.00019840874) * fVar5 +
            0.008333331) * fVar5 + -0.16666667) * fVar5 + 1.0) * fVar4;
  fVar6 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
            0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fVar6;
  fVar8 = (((((fVar9 * -2.3889859e-08 + 2.7525562e-06) * fVar9 + -0.00019840874) * fVar9 +
            0.008333331) * fVar9 + -0.16666667) * fVar9 + 1.0) * fVar8;
  fVar5 = (((((fVar5 * -2.6051615e-07 + 2.4760495e-05) * fVar5 + -0.0013888378) * fVar5 +
            0.041666638) * fVar5 + -0.5) * fVar5 + 1.0) *
          (float)((_DAT_1468660e0 ^ _DAT_146866090) & uVar1 ^ _DAT_146866090);
  fVar7 = (((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) * fVar7 +
            0.041666638) * fVar7 + -0.5) * fVar7 + 1.0) *
          (float)((uRam00000001468660e4 ^ uRam0000000146866094) & uVar2 ^ uRam0000000146866094);
  fVar9 = (((((fVar9 * -2.6051615e-07 + 2.4760495e-05) * fVar9 + -0.0013888378) * fVar9 +
            0.041666638) * fVar9 + -0.5) * fVar9 + 1.0) *
          (float)((uRam00000001468660e8 ^ uRam0000000146866098) & uVar3 ^ uRam0000000146866098);
  param_1[2] = fVar4;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  *param_1 = fVar7 * fVar5;
  param_1[1] = fVar5 * fVar6;
  param_1[0xb] = 0.0;
  param_1[4] = fVar8 * fVar4 * fVar7 - fVar9 * fVar6;
  param_1[6] = -(fVar5 * fVar8);
  param_1[5] = fVar8 * fVar4 * fVar6 + fVar9 * fVar7;
  param_1[10] = fVar9 * fVar5;
  param_1[8] = -(fVar9 * fVar4 * fVar7 + fVar8 * fVar6);
  param_1[9] = fVar7 * fVar8 - fVar9 * fVar4 * fVar6;
  param_1[0xc] = DAT_1468b5d90;
  param_1[0xd] = DAT_1468b5d94;
  param_1[0xe] = DAT_1468b5d98;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 140a27540 FRuntimeFloatCurve body=189 status=ok
// SIG undefined FRuntimeFloatCurve(void)

undefined8 * FRuntimeFloatCurve::FRuntimeFloatCurve(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14413ebc8;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  _Src = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xc],_Src,(longlong)iVar1 * 0x1c);
  }
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 140a27600 FUN_140a27600 body=358 status=ok
// SIG undefined FUN_140a27600(void)

undefined8 * FUN_140a27600(undefined8 *param_1)

{
  undefined8 local_res8;
  
  FUN_1422552b0();
  *param_1 = &PTR__scalar_deleting_destructor__1441ebe18;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x97));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x97),4000);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1441ec158;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x42b40000;
  *(undefined1 *)(param_1 + 0xab) = 1;
  FName::FName(&local_res8,L"Head",1);
  param_1[0xa8] = local_res8;
  if (*(char *)(param_1 + 0xab) != '\0') {
    param_1[0xa9] = 0;
    *(undefined4 *)(param_1 + 0xaa) = 0x43340000;
  }
  return param_1;
}



// FUNCTION 140a27770 FUN_140a27770 body=743 status=ok
// SIG undefined FUN_140a27770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a27770(undefined8 *param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_142fc8020();
  *param_1 = &PTR__scalar_deleting_destructor__1441ecb50;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x12) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x94) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x9c) = DAT_1468b5d98;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 2;
  param_1[0x17] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xc4) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1468b5da8;
  param_1[0x1a] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x40000000;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 2;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x40000000;
  param_1[0x27] = 2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x40000000;
  param_1[0x30] = 2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x40000000;
  param_1[0x39] = 2;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 2;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x42) = 2;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xe) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x74) = local_resc;
  param_1[6] = 0x37b0292837c0f020;
  *(undefined4 *)(param_1 + 7) = 0xc31c6cfb;
  return param_1;
}



// FUNCTION 140a27a60 FUN_140a27a60 body=61 status=ok
// SIG undefined FUN_140a27a60(void)

undefined8 * FUN_140a27a60(undefined8 *param_1)

{
  FUN_142fc8020();
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *param_1 = &PTR_FUN_1441ec498;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40000000;
  *(undefined4 *)(param_1 + 7) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  return param_1;
}



// FUNCTION 140a27aa0 FUN_140a27aa0 body=73 status=ok
// SIG undefined FUN_140a27aa0(void)

undefined8 * FUN_140a27aa0(undefined8 *param_1)

{
  FUN_142fc8020();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 2;
  *param_1 = &PTR_FUN_1441ecde0;
  *(undefined4 *)(param_1 + 6) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x41200000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a27af0 FUN_140a27af0 body=392 status=ok
// SIG undefined FUN_140a27af0(void)

undefined8 * FUN_140a27af0(undefined8 *param_1)

{
  FUN_142fc8270();
  *param_1 = &PTR__scalar_deleting_destructor__1441ed598;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfffffff0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x41200000;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x41200000;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfffffff0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x41200000;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41200000;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfffffff0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x41200000;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x41200000;
  return param_1;
}



// FUNCTION 140a27c80 FUN_140a27c80 body=246 status=ok
// SIG undefined FUN_140a27c80(void)

undefined8 * FUN_140a27c80(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR_FUN_1441ed830;
  FUN_142741540(param_1 + 6);
  FUN_142741540(param_1 + 0xd0);
  FUN_142741540(param_1 + 0x194);
  *(undefined2 *)(param_1 + 199) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800000;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc8c) = 0;
  param_1[0x254] = 0;
  *(undefined1 *)((longlong)param_1 + 0x64c) = 1;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x47435000;
  *(undefined4 *)(param_1 + 200) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xcc) = 0x43480000;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0xce) = 0x3d4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x674) = 1;
  *(undefined4 *)(param_1 + 0xca) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcb) = 0x42c80000;
  return param_1;
}



// FUNCTION 140a27d80 FUN_140a27d80 body=392 status=ok
// SIG undefined FUN_140a27d80(void)

undefined8 * FUN_140a27d80(undefined8 *param_1)

{
  FUN_142fc8270();
  *param_1 = &PTR__scalar_deleting_destructor__1441ed300;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfffffff0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x41200000;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x41200000;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfffffff0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x41200000;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41200000;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfffffff0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x41200000;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x41200000;
  return param_1;
}



// FUNCTION 140a27f10 FUN_140a27f10 body=67 status=ok
// SIG undefined FUN_140a27f10(void)

undefined8 * FUN_140a27f10(undefined8 *param_1)

{
  FUN_142fc8270();
  *param_1 = &PTR_FUN_1441edac8;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x15);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x33) = 0x41200000;
  return param_1;
}



// FUNCTION 140a27f60 FUN_140a27f60 body=33 status=ok
// SIG undefined FUN_140a27f60(void)

undefined8 * FUN_140a27f60(undefined8 *param_1)

{
  FUN_142fc8100();
  *param_1 = &PTR__scalar_deleting_destructor__1441edd60;
  return param_1;
}



// FUNCTION 140a27f90 FUN_140a27f90 body=33 status=ok
// SIG undefined FUN_140a27f90(void)

undefined8 * FUN_140a27f90(undefined8 *param_1)

{
  FUN_142fc83b0();
  *param_1 = &PTR__scalar_deleting_destructor__1441ee000;
  return param_1;
}



// FUNCTION 140a27fc0 FUN_140a27fc0 body=47 status=ok
// SIG undefined FUN_140a27fc0(void)

undefined8 * FUN_140a27fc0(undefined8 *param_1)

{
  FUN_142fc8020();
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_1441ee290;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x42b40000;
  return param_1;
}



// FUNCTION 140a27ff0 FUN_140a27ff0 body=95 status=ok
// SIG undefined FUN_140a27ff0(void)

undefined8 * FUN_140a27ff0(undefined8 *param_1)

{
  FUN_142fc8020();
  *(undefined4 *)(param_1 + 6) = 0x43480000;
  *param_1 = &PTR_FUN_1441ee520;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40000000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xc1f00000;
  *(undefined4 *)(param_1 + 9) = 0x41f00000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a28050 FUN_140a28050 body=54 status=ok
// SIG undefined FUN_140a28050(void)

undefined8 * FUN_140a28050(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR_FUN_1441ee7b0;
  FUN_142741540(param_1 + 8);
  FUN_142741540(param_1 + 0xca);
  return param_1;
}



// FUNCTION 140a28090 FUN_140a28090 body=43 status=ok
// SIG undefined FUN_140a28090(void)

undefined8 * FUN_140a28090(undefined8 *param_1)

{
  FUN_142fc8020();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *param_1 = &PTR_FUN_1441eea40;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140a280c0 FUN_140a280c0 body=33 status=ok
// SIG undefined FUN_140a280c0(void)

undefined8 * FUN_140a280c0(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR_FUN_1441eecd0;
  return param_1;
}



// FUNCTION 140a280f0 FUN_140a280f0 body=115 status=ok
// SIG undefined FUN_140a280f0(void)

undefined8 * FUN_140a280f0(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR__scalar_deleting_destructor__1441eef60;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  param_1[6] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[10] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a28170 FUN_140a28170 body=212 status=ok
// SIG undefined FUN_140a28170(void)

undefined8 * FUN_140a28170(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR_FUN_1441ef1f0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x1a) = 0x41200000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1b);
  *(undefined2 *)(param_1 + 0x2a) = 1;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2b);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x3a);
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f8ccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41200000;
  *(undefined4 *)(param_1 + 9) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 140a28250 FUN_140a28250 body=71 status=ok
// SIG undefined FUN_140a28250(void)

undefined8 * FUN_140a28250(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR_FUN_1441ef480;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  *(undefined4 *)(param_1 + 8) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3e99999a;
  return param_1;
}



// FUNCTION 140a282a0 FUN_140a282a0 body=33 status=ok
// SIG undefined FUN_140a282a0(void)

undefined8 * FUN_140a282a0(undefined8 *param_1)

{
  FUN_142fc81e0();
  *param_1 = &PTR_FUN_1441ef710;
  return param_1;
}



// FUNCTION 140a282d0 FUN_140a282d0 body=1853 status=ok
// SIG undefined FUN_140a282d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a282d0(undefined8 *param_1)

{
  FUN_142fc8020();
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_1441ef9a0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x43480000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0x43480000;
  *(undefined4 *)(param_1 + 9) = 0xc3c80000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xc3480000;
  *(undefined4 *)(param_1 + 10) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xc3c80000;
  *(undefined4 *)(param_1 + 0xb) = 0xc3480000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xc3160000;
  *(undefined4 *)(param_1 + 0xc) = 0xc3c80000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x41a00000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x1f) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3ecccccd;
  *(undefined1 *)(param_1 + 0x20) = 1;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x21);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3f) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xc4960000;
  *(undefined4 *)(param_1 + 0x40) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x41200000;
  *(undefined4 *)(param_1 + 0x41) = 0xc2200000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x42) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x40400000;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x224) = DAT_1468b5d98;
  param_1[0x45] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x46) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x234) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = DAT_1468b5da8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x244) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x49);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x58);
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0xc1c80000;
  *(undefined1 *)((longlong)param_1 + 0x34c) = 1;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x6a);
  *(undefined4 *)(param_1 + 0x79) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3dcccccd;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x7a);
  *(undefined4 *)(param_1 + 0x89) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x43480000;
  FName::FName(param_1 + 0x8c,L"Body",1);
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x474) = DAT_1468b5d98;
  param_1[0x8f] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x90) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x484) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = DAT_1468b5da8;
  *(undefined4 *)(param_1 + 0x92) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x93);
  *(undefined4 *)(param_1 + 0xa2) = 0x459c4000;
  *(undefined1 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa3] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xa4) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x524) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x52c) = DAT_1468b5d98;
  param_1[0xa6] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0xa7) = DAT_1468b5da8;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xb7) = 0xc4fa0000;
  *(undefined1 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb8] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xb9) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = DAT_1468b5d98;
  param_1[0xbb] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0xbc) = DAT_1468b5da8;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xcd) = 0x43070000;
  *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
  param_1[0xce] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xcf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x67c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x684) = DAT_1468b5d98;
  param_1[0xd1] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0xd2) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xd5) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f666666;
  *(undefined1 *)((longlong)param_1 + 0x6bc) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe7) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x844) = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x874) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x110) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x884) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x111) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x88c) = DAT_1464aa81c;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x8cc) = 0;
  param_1[0x11a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x11b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x8dc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = DAT_1468b5d98;
  param_1[0x11d] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x11e) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x904) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x934) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x944) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0;
  *(undefined8 *)((longlong)param_1 + 0x95c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x964) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x132) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x994) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x133) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x99c) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x134) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x9a4) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x135) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x9ac) = DAT_1464aa81c;
  param_1[0x136] = 0;
  param_1[0x13a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x13b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined4 *)(param_1 + 0x140) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0xa04) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x141) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa14) = 1;
  *(undefined1 *)(param_1 + 0x143) = 0;
  param_1[0x144] = 0;
  return param_1;
}



// FUNCTION 140a28a10 FUN_140a28a10 body=195 status=ok
// SIG undefined FUN_140a28a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a28a10(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_142fc8020();
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *param_1 = &PTR_FUN_1441efc30;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x41200000;
  *(undefined4 *)(param_1 + 7) = 0xc2a00000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42a00000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 8);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x17);
  FName::FName(param_1 + 0x26,L"Camera_3rd",1);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x402ccccd;
  uVar1 = uRam000000014686609c;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(uint *)((longlong)param_1 + 0x19c) = uVar1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  uVar1 = uRam0000000146866094 & uRam00000001468660a4;
  uVar2 = uRam0000000146866098 & uRam00000001468660a8;
  uVar3 = uRam000000014686609c & uRam00000001468660ac;
  *(uint *)(param_1 + 0x36) = _DAT_146866090 & _DAT_1468660a0;
  *(uint *)((longlong)param_1 + 0x1b4) = uVar1;
  *(uint *)(param_1 + 0x37) = uVar2;
  *(uint *)((longlong)param_1 + 0x1bc) = uVar3;
  return param_1;
}



// FUNCTION 140a28ae0 FUN_140a28ae0 body=44 status=ok
// SIG undefined FUN_140a28ae0(void)

undefined8 * FUN_140a28ae0(undefined8 *param_1)

{
  FUN_142fc8020();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 4;
  *param_1 = &PTR_FUN_1441efec0;
  *(undefined4 *)(param_1 + 6) = 0x3f000000;
  return param_1;
}



// FUNCTION 140a28b10 FUN_140a28b10 body=62 status=ok
// SIG undefined FUN_140a28b10(void)

undefined8 * FUN_140a28b10(undefined8 *param_1)

{
  FUN_142fc85b0();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *param_1 = &PTR_FUN_1441f0150;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f000000;
  return param_1;
}



// FUNCTION 140a28b50 FUN_140a28b50 body=33 status=ok
// SIG undefined FUN_140a28b50(void)

undefined8 * FUN_140a28b50(undefined8 *param_1)

{
  FUN_142fc83b0();
  *param_1 = &PTR_FUN_1441f03e0;
  return param_1;
}



// FUNCTION 140a28b80 FUN_140a28b80 body=37 status=ok
// SIG undefined FUN_140a28b80(void)

undefined8 * FUN_140a28b80(undefined8 *param_1)

{
  FUN_142fc8020();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *param_1 = &PTR_FUN_1441f0670;
  return param_1;
}



// FUNCTION 140a28bb0 FUN_140a28bb0 body=37 status=ok
// SIG undefined FUN_140a28bb0(void)

undefined8 * FUN_140a28bb0(undefined8 *param_1)

{
  FUN_142fc8020();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *param_1 = &PTR_FUN_1441f0900;
  return param_1;
}



// FUNCTION 140a28be0 FUN_140a28be0 body=33 status=ok
// SIG undefined FUN_140a28be0(void)

undefined8 * FUN_140a28be0(undefined8 *param_1)

{
  FUN_142fc8020();
  *param_1 = &PTR_FUN_1441f0b90;
  return param_1;
}



// FUNCTION 140a28c10 FUN_140a28c10 body=634 status=ok
// SIG undefined FUN_140a28c10(void)

undefined8 * FUN_140a28c10(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  UFontFaceInterface::UFontFaceInterface();
  plVar1 = param_1 + 0x16;
  *param_1 = &PTR_FUN_1441ebb98;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *plVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x17);
  *(int *)(param_1 + 0x17) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar4 = *plVar1;
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = 1;
  *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x17);
  lVar4 = (longlong)iVar2;
  *(int *)(param_1 + 0x17) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + lVar4 * 0xc) = 2;
  *(undefined4 *)(lVar3 + 4 + lVar4 * 0xc) = 0x3d4ccccd;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0xc) = 0x3f733333;
  iVar2 = *(int *)(param_1 + 0x17);
  lVar4 = (longlong)iVar2;
  *(int *)(param_1 + 0x17) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + lVar4 * 0xc) = 3;
  *(undefined4 *)(lVar3 + 4 + lVar4 * 0xc) = 0x3dcccccd;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0xc) = 0x3f666666;
  iVar2 = *(int *)(param_1 + 0x17);
  lVar4 = (longlong)iVar2;
  *(int *)(param_1 + 0x17) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + lVar4 * 0xc) = 4;
  *(undefined4 *)(lVar3 + 4 + lVar4 * 0xc) = 0x3dcccccd;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0xc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0x27) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40333333;
  *(undefined4 *)(param_1 + 0x28) = 0x40ea8f5c;
  FUN_142c8c260(&local_48,0x3e4ccccd);
  param_1[0xf] = local_48;
  param_1[0x10] = uStack_40;
  *(undefined4 *)(param_1 + 0x2b) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  param_1[0x11] = local_38;
  param_1[0x12] = uStack_30;
  *(undefined4 *)(param_1 + 0x2c) = 0x42700000;
  param_1[0x13] = local_28;
  param_1[0x14] = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x40133333;
  param_1[0x15] = local_18;
  *(undefined4 *)(param_1 + 0x2d) = 0x40ea8f5c;
  return param_1;
}



// FUNCTION 140a28e90 FUN_140a28e90 body=123 status=ok
// SIG undefined FUN_140a28e90(void)

undefined8 * FUN_140a28e90(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__1441ec728;
  param_1[5] = &PTR_LAB_1441ecb20;
  param_1[0x31] = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  FName::FName(local_res8,L"Focus",1);
  param_1[0x31] = local_res8[0];
  *(undefined4 *)(param_1 + 0x32) = 0x43020000;
  *(undefined4 *)(param_1 + 0x2f) = 0xbecccccd;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xbd99999a;
  return param_1;
}



// FUNCTION 140a28f10 FUN_140a28f10 body=371 status=ok
// SIG undefined FUN_140a28f10(void)

undefined8 * FUN_140a28f10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  param_1[0x5a] = &PTR_FUN_1441b3948;
  *param_1 = &PTR_FUN_1441eb5c0;
  param_1[5] = &PTR_LAB_1441ebb08;
  param_1[0x5a] = &PTR_LAB_1441ebb38;
  UCheatManagerGunfire::GetAllCheats(param_1 + 0x5b);
  FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1 + 0x5d);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  FUN_140a257c0(param_1 + 0x62);
  FUN_140a25730(param_1 + 0x68);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 4;
  UActorComponent::SetComponentTickEnabled(param_1,1);
  return param_1;
}



// FUNCTION 140a29090 FUN_140a29090 body=78 status=ok
// SIG undefined FUN_140a29090(void)

undefined8 * FUN_140a29090(undefined8 *param_1)

{
  FUN_142fc8640();
  *(undefined2 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR_FUN_1441ed070;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  FUN_142741540(param_1 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0xc3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  return param_1;
}



// FUNCTION 140a290e0 FUN_140a290e0 body=97 status=ok
// SIG undefined FUN_140a290e0(void)

undefined8 * FUN_140a290e0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_1441ea960;
  param_1[5] = &PTR_LAB_1441eaea8;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  FUN_140590080(param_1 + 100);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf7;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 140a29150 FUN_140a29150 body=155 status=ok
// SIG undefined FUN_140a29150(void)

void FUN_140a29150(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 8);
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
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



// FUNCTION 140a291f0 ~TArray<FVariantDependency,TSizedDefaultAllocator<32>_> body=109 status=ok
// SIG undefined ~TArray<FVariantDependency,TSizedDefaultAllocator<32>_>(void)

void TArray<FVariantDependency,TSizedDefaultAllocator<32>_>::
     ~TArray<FVariantDependency,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
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



// FUNCTION 140a29260 FUN_140a29260 body=207 status=ok
// SIG undefined FUN_140a29260(void)

void FUN_140a29260(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar4 = *(int *)(puVar3 + 3);
      plVar1 = (longlong *)puVar3[2];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)puVar3[2];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = *(int *)(puVar3 + 1);
      plVar1 = (longlong *)*puVar3;
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)*puVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      puVar3 = puVar3 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar3);
  return;
}



// FUNCTION 140a29330 FUN_140a29330 body=395 status=ok
// SIG undefined FUN_140a29330(void)

void FUN_140a29330(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140a293f1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_140a293f1:
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
      FRichCurve::~FRichCurve((longlong)iStack_1c * 0xa8 + 0x18 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a294c0 FUN_140a294c0 body=54 status=ok
// SIG undefined FUN_140a294c0(void)

void FUN_140a294c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140a29500 FUN_140a29500 body=151 status=ok
// SIG undefined FUN_140a29500(void)

void FUN_140a29500(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x528) = 0;
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4e0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b8));
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x468);
  FUN_140a29150(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  FUN_14083eff0(param_1);
  return;
}



// FUNCTION 140a295a0 FUN_140a295a0 body=100 status=ok
// SIG undefined FUN_140a295a0(void)

void FUN_140a295a0(longlong param_1)

{
  FUN_140591050(param_1 + 0x340);
  FUN_140591050(param_1 + 0x318);
  FUN_140591050(param_1 + 0x2e8);
  FUN_1409c55f0(param_1 + 0x2d0);
  FUN_1405911f0(param_1);
  return;
}



// FUNCTION 140a29610 FUN_140a29610 body=151 status=ok
// SIG undefined FUN_140a29610(void)

longlong * FUN_140a29610(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
    if (iVar4 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 4);
      puVar3 = (undefined4 *)*param_1;
      do {
        *puVar3 = puVar2[-1];
        puVar3[1] = *puVar2;
        puVar3[2] = puVar2[1];
        puVar3[3] = puVar2[2];
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
      } while (iVar4 != 0);
    }
  }
  return param_1;
}



// FUNCTION 140a296b0 FUN_140a296b0 body=6175 status=ok
// SIG undefined FUN_140a296b0(void)

uint * FUN_140a296b0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  uVar4 = (*param_1 ^ *param_2) & 2 ^ *param_1;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 4 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 8 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x10 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x20 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x40 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x80 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x100 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x200 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x400 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x800 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x1000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x2000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x4000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x8000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x10000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x20000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x40000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x80000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x100000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x200000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x400000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x800000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x1000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x2000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x4000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x8000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x10000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x20000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (*param_2 ^ uVar4) & 0x40000000 ^ uVar4;
  *param_1 = uVar4;
  *param_1 = (*param_2 ^ uVar4) & 0x7fffffff ^ *param_2;
  param_1[1] = param_1[1] ^ (param_1[1] ^ param_2[1]) & 1;
  uVar4 = (param_1[1] ^ param_2[1]) & 2 ^ param_1[1];
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 4 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 8 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x10 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x20 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x40 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x80 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x100 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x200 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x400 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x800 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x1000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x2000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x4000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x8000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x10000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x20000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x40000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x80000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x100000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x200000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x400000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x800000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x1000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x2000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x4000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x8000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x10000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x20000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (param_2[1] ^ uVar4) & 0x40000000 ^ uVar4;
  param_1[1] = uVar4;
  param_1[1] = (param_2[1] ^ uVar4) & 0x7fffffff ^ param_2[1];
  param_1[2] = param_1[2] ^ (param_1[2] ^ param_2[2]) & 1;
  uVar4 = (param_1[2] ^ param_2[2]) & 2 ^ param_1[2];
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 4 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 8 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x10 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x20 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x40 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x80 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x100 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x200 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x400 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x800 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x1000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x2000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x4000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x8000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x10000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x20000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x40000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x80000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x100000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x200000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x400000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x800000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x1000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x2000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x4000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x8000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x10000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x20000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x40000000 ^ uVar4;
  param_1[2] = uVar4;
  param_1[2] = (param_2[2] ^ uVar4) & 0x7fffffff ^ param_2[2];
  param_1[3] = param_1[3] ^ (param_1[3] ^ param_2[3]) & 1;
  uVar4 = (param_1[3] ^ param_2[3]) & 2 ^ param_1[3];
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 4 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 8 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x10 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x20 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x40 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x80 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x100 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x200 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x400 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x800 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x1000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x2000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x4000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x8000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x10000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (param_2[3] ^ uVar4) & 0x20000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x40000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x80000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x100000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x200000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x400000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x800000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x1000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x2000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x4000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x8000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x10000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x20000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x40000000 ^ uVar4;
  param_1[3] = uVar4;
  param_1[3] = (uVar4 ^ param_2[3]) & 0x7fffffff ^ param_2[3];
  param_1[4] = param_1[4] ^ (param_1[4] ^ param_2[4]) & 1;
  uVar4 = (param_1[4] ^ param_2[4]) & 2 ^ param_1[4];
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 4 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 8 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x10 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x20 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x40 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x80 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x100 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x200 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x400 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x800 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x1000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x2000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x4000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x8000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x10000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x20000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x40000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x80000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x100000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x200000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x400000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x800000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x1000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x2000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x4000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x8000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x10000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x20000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x40000000 ^ uVar4;
  param_1[4] = uVar4;
  param_1[4] = (uVar4 ^ param_2[4]) & 0x7fffffff ^ param_2[4];
  param_1[5] = param_1[5] ^ (param_1[5] ^ param_2[5]) & 1;
  uVar4 = (param_1[5] ^ param_2[5]) & 2 ^ param_1[5];
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 4 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 8 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x10 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x20 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x40 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x80 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x100 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x200 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x400 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x800 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x1000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x2000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x4000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x8000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x10000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x20000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x40000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x80000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x100000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x200000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x400000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x800000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x1000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x2000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x4000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x8000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x10000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x20000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x40000000 ^ uVar4;
  param_1[5] = uVar4;
  param_1[5] = (uVar4 ^ param_2[5]) & 0x7fffffff ^ param_2[5];
  param_1[6] = param_1[6] ^ (param_1[6] ^ param_2[6]) & 1;
  uVar4 = (param_1[6] ^ param_2[6]) & 2 ^ param_1[6];
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 4 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 8 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x10 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x20 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x40 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x80 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x100 ^ uVar4;
  param_1[6] = uVar4;
  param_1[6] = (uVar4 ^ param_2[6]) & 0x200 ^ uVar4;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar3;
  param_1[0x34] = param_2[0x34];
  uVar3 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x42) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x46) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = uVar3;
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = param_2[0x67];
  uVar3 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x6a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar3;
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  uVar3 = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x73) = *(undefined8 *)(param_2 + 0x73);
  *(undefined8 *)(param_1 + 0x75) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x79);
  *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x77);
  *(undefined8 *)(param_1 + 0x79) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x7d);
  *(undefined8 *)(param_1 + 0x7b) = *(undefined8 *)(param_2 + 0x7b);
  *(undefined8 *)(param_1 + 0x7d) = uVar3;
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  uVar3 = *(undefined8 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x83) = *(undefined8 *)(param_2 + 0x83);
  *(undefined8 *)(param_1 + 0x85) = uVar3;
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  *(char *)(param_1 + 0x89) = (char)param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  uVar3 = *(undefined8 *)(param_2 + 0x95);
  *(undefined8 *)(param_1 + 0x93) = *(undefined8 *)(param_2 + 0x93);
  *(undefined8 *)(param_1 + 0x95) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x99);
  *(undefined8 *)(param_1 + 0x97) = *(undefined8 *)(param_2 + 0x97);
  *(undefined8 *)(param_1 + 0x99) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x9b) = *(undefined8 *)(param_2 + 0x9b);
  *(undefined8 *)(param_1 + 0x9d) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa1);
  *(undefined8 *)(param_1 + 0x9f) = *(undefined8 *)(param_2 + 0x9f);
  *(undefined8 *)(param_1 + 0xa1) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa3) = *(undefined8 *)(param_2 + 0xa3);
  *(undefined8 *)(param_1 + 0xa5) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa9);
  *(undefined8 *)(param_1 + 0xa7) = *(undefined8 *)(param_2 + 0xa7);
  *(undefined8 *)(param_1 + 0xa9) = uVar3;
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  *(undefined8 *)(param_1 + 0xaf) = *(undefined8 *)(param_2 + 0xaf);
  *(undefined8 *)(param_1 + 0xb1) = *(undefined8 *)(param_2 + 0xb1);
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  param_1[0xb5] = param_2[0xb5];
  param_1[0xb6] = param_2[0xb6];
  param_1[0xb7] = param_2[0xb7];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xba] = param_2[0xba];
  uVar3 = *(undefined8 *)(param_2 + 0xbd);
  *(undefined8 *)(param_1 + 0xbb) = *(undefined8 *)(param_2 + 0xbb);
  *(undefined8 *)(param_1 + 0xbd) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xc1);
  *(undefined8 *)(param_1 + 0xbf) = *(undefined8 *)(param_2 + 0xbf);
  *(undefined8 *)(param_1 + 0xc1) = uVar3;
  param_1[0xc3] = param_2[0xc3];
  param_1[0xc4] = param_2[0xc4];
  *(undefined8 *)(param_1 + 0xc6) = *(undefined8 *)(param_2 + 0xc6);
  param_1[200] = param_2[200];
  param_1[0xc9] = param_2[0xc9];
  param_1[0xca] = param_2[0xca];
  param_1[0xcb] = param_2[0xcb];
  param_1[0xcc] = param_2[0xcc];
  param_1[0xcd] = param_2[0xcd];
  param_1[0xce] = param_2[0xce];
  *(char *)(param_1 + 0xcf) = (char)param_2[0xcf];
  param_1[0xd0] = param_2[0xd0];
  param_1[0xd1] = param_2[0xd1];
  param_1[0xd2] = param_2[0xd2];
  param_1[0xd3] = param_2[0xd3];
  param_1[0xd4] = param_2[0xd4];
  param_1[0xd5] = param_2[0xd5];
  param_1[0xd6] = param_2[0xd6];
  param_1[0xd7] = param_2[0xd7];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = param_2[0xd9];
  param_1[0xda] = param_2[0xda];
  param_1[0xdb] = param_2[0xdb];
  uVar3 = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xde) = uVar3;
  param_1[0xe0] = param_2[0xe0];
  param_1[0xe1] = param_2[0xe1];
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  uVar3 = *(undefined8 *)(param_2 + 0xe6);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe6) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xea);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xea) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xee);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xee) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xf2);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf2) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xf6) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xfa);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xfa) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xfe);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xfe) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x102);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x102) = uVar3;
  param_1[0x104] = param_2[0x104];
  param_1[0x105] = param_2[0x105];
  param_1[0x106] = param_2[0x106];
  param_1[0x107] = param_2[0x107];
  param_1[0x108] = param_2[0x108];
  param_1[0x109] = param_2[0x109];
  param_1[0x10a] = param_2[0x10a];
  param_1[0x10b] = param_1[0x10b] ^ (param_2[0x10b] ^ param_1[0x10b]) & 1;
  param_1[0x10c] = param_2[0x10c];
  param_1[0x10d] = param_2[0x10d];
  param_1[0x10e] = param_2[0x10e];
  param_1[0x10f] = param_2[0x10f];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  param_1[0x114] = param_2[0x114];
  param_1[0x115] = param_1[0x115] ^ (param_2[0x115] ^ param_1[0x115]) & 1;
  param_1[0x116] = param_2[0x116];
  param_1[0x117] = param_2[0x117];
  param_1[0x118] = param_2[0x118];
  param_1[0x119] = param_2[0x119];
  param_1[0x11a] = param_2[0x11a];
  param_1[0x11b] = param_2[0x11b];
  param_1[0x11c] = param_2[0x11c];
  param_1[0x11d] = param_2[0x11d];
  param_1[0x11e] = param_2[0x11e];
  param_1[0x11f] = param_2[0x11f];
  uVar3 = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x122) = uVar3;
  param_1[0x124] = param_2[0x124];
  uVar3 = *(undefined8 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x125) = *(undefined8 *)(param_2 + 0x125);
  *(undefined8 *)(param_1 + 0x127) = uVar3;
  param_1[0x129] = param_2[0x129];
  uVar3 = *(undefined8 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x12a) = *(undefined8 *)(param_2 + 0x12a);
  *(undefined8 *)(param_1 + 300) = uVar3;
  param_1[0x12e] = param_2[0x12e];
  param_1[0x12f] = param_2[0x12f];
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x132) = *(undefined8 *)(param_2 + 0x132);
  param_1[0x134] = param_2[0x134];
  *(char *)(param_1 + 0x135) = (char)param_2[0x135];
  param_1[0x136] = param_1[0x136] ^ (param_2[0x136] ^ param_1[0x136]) & 1;
  param_1[0x137] = param_2[0x137];
  param_1[0x138] = param_2[0x138];
  param_1[0x139] = param_2[0x139];
  param_1[0x13a] = param_2[0x13a];
  param_1[0x13b] = param_2[0x13b];
  param_1[0x13c] = param_2[0x13c];
  param_1[0x13d] = param_2[0x13d];
  param_1[0x13e] = param_2[0x13e];
  param_1[0x13f] = param_2[0x13f];
  param_1[0x140] = param_2[0x140];
  param_1[0x141] = param_2[0x141];
  param_1[0x142] = param_2[0x142];
  param_1[0x143] = param_2[0x143];
  *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_2 + 0x144);
  param_1[0x146] = param_2[0x146];
  param_1[0x147] = param_2[0x147];
  param_1[0x148] = param_2[0x148];
  param_1[0x149] = param_2[0x149];
  param_1[0x14a] = param_2[0x14a];
  param_1[0x14b] = param_2[0x14b];
  param_1[0x14c] = param_2[0x14c];
  param_1[0x14d] = param_2[0x14d];
  param_1[0x14e] = param_2[0x14e];
  param_1[0x14f] = param_2[0x14f];
  param_1[0x150] = param_2[0x150];
  param_1[0x151] = param_2[0x151];
  param_1[0x152] = param_2[0x152];
  param_1[0x153] = param_2[0x153];
  param_1[0x154] = param_2[0x154];
  param_1[0x155] = param_2[0x155];
  param_1[0x156] = param_2[0x156];
  param_1[0x157] = param_2[0x157];
  param_1[0x158] = param_2[0x158];
  param_1[0x159] = param_2[0x159];
  puVar1 = param_1 + 0x176;
  param_1[0x15a] = param_2[0x15a];
  param_1[0x15b] = param_2[0x15b];
  param_1[0x15c] = param_2[0x15c];
  param_1[0x15d] = param_2[0x15d];
  param_1[0x15e] = param_2[0x15e];
  param_1[0x15f] = param_2[0x15f];
  param_1[0x160] = param_2[0x160];
  param_1[0x161] = param_2[0x161];
  param_1[0x162] = param_2[0x162];
  param_1[0x163] = param_2[0x163];
  param_1[0x164] = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x166] = param_1[0x166] ^ (param_2[0x166] ^ param_1[0x166]) & 1;
  param_1[0x167] = param_2[0x167];
  param_1[0x168] = param_2[0x168];
  param_1[0x169] = param_2[0x169];
  param_1[0x16a] = param_2[0x16a];
  param_1[0x16b] = param_2[0x16b];
  param_1[0x16c] = param_2[0x16c];
  param_1[0x16d] = param_2[0x16d];
  param_1[0x16e] = param_2[0x16e];
  param_1[0x16f] = param_2[0x16f];
  param_1[0x170] = param_2[0x170];
  param_1[0x171] = param_2[0x171];
  param_1[0x172] = param_2[0x172];
  *(undefined8 *)(param_1 + 0x173) = *(undefined8 *)(param_2 + 0x173);
  if (puVar1 != param_2 + 0x176) {
    uVar4 = param_2[0x178];
    pvVar2 = *(void **)(param_2 + 0x176);
    param_1[0x178] = uVar4;
    if ((uVar4 == 0) && (param_1[0x179] == 0)) {
      param_1[0x179] = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,uVar4);
      _guard_xfg_dispatch_icall_nop(*(void **)puVar1,pvVar2,(longlong)(int)uVar4 << 4);
    }
  }
  puVar1 = param_1 + 0x17a;
  if (puVar1 != param_2 + 0x17a) {
    uVar4 = param_2[0x17c];
    pvVar2 = *(void **)(param_2 + 0x17a);
    param_1[0x17c] = uVar4;
    if ((uVar4 == 0) && (param_1[0x17d] == 0)) {
      param_1[0x17d] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,uVar4);
      _guard_xfg_dispatch_icall_nop(*(void **)puVar1,pvVar2,(longlong)(int)uVar4 << 3);
    }
  }
  return param_1;
}



// FUNCTION 140a2aed0 FUN_140a2aed0 body=317 status=ok
// SIG undefined FUN_140a2aed0(void)

undefined8
FUN_140a2aed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,float param_5,
             float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (float)param_3;
  fVar3 = (float)param_2;
  if (param_7 == 0.0) {
    return param_2;
  }
  if (param_5 <= 0.001) {
    param_5 = 0.001;
  }
  param_6 = param_5 * param_6;
  fVar6 = 1.0 / param_5 + 1.0 / param_5;
  uVar5 = 0x80000000;
  fVar1 = fVar6 * param_7;
  fVar2 = fVar3 - fVar4;
  fVar7 = 1.0 / (((fVar1 * 0.235 + 0.48) * fVar1 + 1.0) * fVar1 + 1.0);
  fVar1 = -param_6;
  if ((-param_6 <= fVar2) && (uVar5 = 0, fVar1 = param_6, fVar2 <= param_6)) {
    fVar1 = fVar2;
  }
  param_7 = (fVar1 * fVar6 + *param_4) * param_7;
  fVar1 = (param_7 + fVar1) * fVar7 + (fVar3 - fVar1);
  *param_4 = (*param_4 - param_7 * fVar6) * fVar7;
  if (0.0 < fVar4 - fVar3 == fVar4 < fVar1) {
    *param_4 = 0.0;
    fVar1 = fVar4;
    uVar5 = (int)((ulonglong)param_3 >> 0x20);
  }
  return CONCAT44(uVar5,fVar1);
}



// FUNCTION 140a2b060 FUN_140a2b060 body=308 status=ok
// SIG undefined FUN_140a2b060(void)

longlong FUN_140a2b060(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x680);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x670);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x660);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x650);
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  lVar2 = *(longlong *)(param_1 + 0x630);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x28;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x38;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x630);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  TArray<FVariantDependency,TSizedDefaultAllocator<32>_>::
  ~TArray<FVariantDependency,TSizedDefaultAllocator<32>_>(param_1 + 0x588);
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a0);
  }
  return param_1;
}



// FUNCTION 140a2b1a0 FUN_140a2b1a0 body=87 status=ok
// SIG undefined FUN_140a2b1a0(void)

longlong FUN_140a2b1a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fcb7e0;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 140a2b200 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHyperlinkStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 140a2b240 FUN_140a2b240 body=122 status=ok
// SIG undefined FUN_140a2b240(void)

longlong FUN_140a2b240(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x470);
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 140a2b2c0 FUN_140a2b2c0 body=173 status=ok
// SIG undefined FUN_140a2b2c0(void)

undefined8 * FUN_140a2b2c0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0x360] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x35e);
  if (iVar2 != 0) {
    plVar1 = param_1 + 0x43;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b50);
  }
  return param_1;
}



// FUNCTION 140a2b370 FUN_140a2b370 body=113 status=ok
// SIG undefined FUN_140a2b370(void)

undefined8 * FUN_140a2b370(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(param_1 + 0x25,0);
  param_1[0x26] = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140a2b3f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ULandscapeGizmoRenderComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a29500();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x560);
  }
  return param_1;
}



// FUNCTION 140a2b430 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFGatherCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 140a2b470 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurCS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 140a2b4b0 FUN_140a2b4b0 body=158 status=ok
// SIG undefined FUN_140a2b4b0(void)

longlong FUN_140a2b4b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1288) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x12b0);
  }
  return param_1;
}



// FUNCTION 140a2b550 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessAmbientOcclusionPSandCS<1,1,1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 140a2b590 FUN_140a2b590 body=79 status=ok
// SIG undefined FUN_140a2b590(void)

longlong FUN_140a2b590(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x120);
  FRichCurve::~FRichCurve(param_1 + 0xa8);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 140a2b5e0 FUN_140a2b5e0 body=124 status=ok
// SIG undefined FUN_140a2b5e0(void)

longlong FUN_140a2b5e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x628) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc70);
  }
  return param_1;
}



// FUNCTION 140a2b660 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140a2b6c0 FUN_140a2b6c0 body=112 status=ok
// SIG undefined FUN_140a2b6c0(void)

longlong FUN_140a2b6c0(longlong param_1,ulonglong param_2)

{
  FUN_140a29260(param_1 + 0x250);
  FRichCurve::~FRichCurve(param_1 + 0x1d0);
  FRichCurve::~FRichCurve(param_1 + 0x158);
  FRichCurve::~FRichCurve(param_1 + 0xd8);
  FRichCurve::~FRichCurve(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b0);
  }
  return param_1;
}



// FUNCTION 140a2b730 FUN_140a2b730 body=263 status=ok
// SIG undefined FUN_140a2b730(void)

longlong FUN_140a2b730(longlong param_1,ulonglong param_2)

{
  FUN_140a29260(param_1 + 0x798);
  *(undefined4 *)(param_1 + 0x790) = 0;
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  FUN_140a29330(param_1 + 0x748);
  FRichCurve::~FRichCurve(param_1 + 0x6c0);
  FRichCurve::~FRichCurve(param_1 + 0x5f0);
  FRichCurve::~FRichCurve(param_1 + 0x540);
  FRichCurve::~FRichCurve(param_1 + 0x498);
  FRichCurve::~FRichCurve(param_1 + 0x3d0);
  FRichCurve::~FRichCurve(param_1 + 0x350);
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x2c0);
  FRichCurve::~FRichCurve(param_1 + 0x248);
  FRichCurve::~FRichCurve(param_1 + 0x180);
  FRichCurve::~FRichCurve(param_1 + 0x108);
  FRichCurve::~FRichCurve(param_1 + 0x68);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa30);
  }
  return param_1;
}



// FUNCTION 140a2b840 FUN_140a2b840 body=88 status=ok
// SIG undefined FUN_140a2b840(void)

longlong FUN_140a2b840(longlong param_1,ulonglong param_2)

{
  FUN_140a29260(param_1 + 0x138);
  FRichCurve::~FRichCurve(param_1 + 0xb8);
  FRichCurve::~FRichCurve(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 140a2b8a0 FUN_140a2b8a0 body=52 status=ok
// SIG undefined FUN_140a2b8a0(void)

undefined8 FUN_140a2b8a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140a2b8e0 FUN_140a2b8e0 body=52 status=ok
// SIG undefined FUN_140a2b8e0(void)

undefined8 FUN_140a2b8e0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140a2b920 FUN_140a2b920 body=87 status=ok
// SIG undefined FUN_140a2b920(void)

longlong FUN_140a2b920(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 140a2b980 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TConeTraceScreenGridGlobalOcclusionCS<1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 140a2b9c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TPBDRigidParticles<float,3>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140a29500();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 140a2ba00 FUN_140a2ba00 body=59 status=ok
// SIG undefined FUN_140a2ba00(void)

undefined8 FUN_140a2ba00(undefined8 param_1,uint param_2)

{
  FUN_140a295a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 140a2ba40 FUN_140a2ba40 body=90 status=ok
// SIG undefined FUN_140a2ba40(void)

longlong FUN_140a2ba40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6d0);
  }
  return param_1;
}



// FUNCTION 140a2baa0 FUN_140a2baa0 body=79 status=ok
// SIG undefined FUN_140a2baa0(void)

longlong FUN_140a2baa0(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 140a2baf0 FUN_140a2baf0 body=863 status=ok
// SIG undefined FUN_140a2baf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a2baf0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_14232c410();
  lVar4 = *(longlong *)(param_1 + 0x2d8);
  if (lVar4 == 0) {
    local_e8 = *(longlong *)(param_1 + 0x220);
    local_e0 = *(undefined4 *)(param_1 + 0x228);
    local_f8 = *(uint *)(param_1 + 0x2fc);
    local_d0 = local_e0;
    lVar4 = FUN_140596ae0(param_1,*(undefined8 *)(param_1 + 0x2d0),&local_e8,
                          *(undefined4 *)(param_1 + 0x2f8));
    *(longlong *)(param_1 + 0x2d8) = lVar4;
  }
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar4 = FUN_1423407b0(param_1);
      if (lVar4 == 0) goto LAB_140a2bdbc;
    }
    FUN_140593970(*(undefined8 *)(param_1 + 0x2d8));
    FName::FName(&local_e8,L"StopActiveEffect",1);
    plVar7 = (longlong *)(param_1 + 0x308);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_LAB_1441db670;
      plVar5[2] = local_e8;
      FWeakObjectPtr::operator=(plVar5 + 3,param_1);
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar4;
      uVar6 = FWeakObjectPtr::Get(plVar5 + 3);
      lVar4 = FUN_14178ac60(uVar6,local_e8);
      plVar5[1] = lVar4;
      *plVar5 = (longlong)&PTR_LAB_1441db6b8;
    }
    if (&local_d8 != plVar7) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(param_1 + 0x310) != 0) &&
           (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar7 != 0) {
            lVar4 = FMemory::Realloc(*plVar7,0,0);
            *plVar7 = lVar4;
          }
          *(undefined4 *)(param_1 + 0x310) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,plVar7);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar4 = FMemory::Realloc(plVar5,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x300);
    local_b8 = 0;
    local_b0 = 0;
    if (((plVar7 != &local_b8) && (*(int *)(param_1 + 0x310) != 0)) &&
       (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_f0 = 0xbf800000;
    local_f8 = local_f8 & 0xffffff00;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0x318,&local_b8,uVar1);
    if (local_58 != 0) {
      plVar7 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar7 = local_68;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  }
LAB_140a2bdbc:
  cVar3 = FUN_14059ee90(param_1 + 800);
  if ((cVar3 == '\0') && (*(longlong *)(param_1 + 0x2e8) != 0)) {
    local_e8 = 0;
    lVar4 = FUN_1405ab470(*(undefined8 *)(param_1 + 0x118),0,1,param_1);
    if (lVar4 != 0) {
      lVar4 = FUN_1405a3150(lVar4,&local_d8,*(undefined8 *)(param_1 + 0x2e8),0);
      FUN_1405913a0(param_1 + 800,lVar4);
      *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(lVar4 + 0x10);
      FUN_140591060(&local_d8);
    }
  }
  return;
}



// FUNCTION 140a2be50 FUN_140a2be50 body=72 status=ok
// SIG undefined FUN_140a2be50(void)

void FUN_140a2be50(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0xc90) = 1;
    FUN_140a296b0(param_1 + 0xca0,param_5);
    FUN_142fc8dc0(param_2,param_5,param_4);
  }
  return;
}



// FUNCTION 140a2bea0 FUN_140a2bea0 body=5328 status=ok
// SIG undefined FUN_140a2bea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2bea0(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  undefined1 auVar25 [16];
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
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
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  if (*(char *)(param_1 + 0xaa) != '\0') {
    plVar15 = *(longlong **)(param_1 + 0x98);
    uVar16 = 0;
    plVar13 = plVar15 + *(int *)(param_1 + 0xa0);
    uVar14 = (longlong)*(int *)(param_1 + 0xa0) & 0x1fffffffffffffff;
    if (plVar13 < plVar15) {
      uVar14 = uVar16;
    }
    if (uVar14 != 0) {
      do {
        fVar71 = fRam00000001468660f8;
        fVar63 = fRam00000001468660f4;
        fVar33 = _DAT_1468660f0;
        fVar38 = fRam00000001468660bc;
        fVar37 = fRam00000001468660b8;
        fVar35 = fRam00000001468660b4;
        fVar36 = _DAT_1468660b0;
        fVar51 = fRam0000000146866098;
        fVar49 = fRam0000000146866094;
        fVar48 = _DAT_146866090;
        lVar1 = *plVar15;
        auVar17 = *(undefined1 (*) [16])(param_2 + 8);
        fVar64 = auVar17._0_4_;
        fVar66 = auVar17._4_4_;
        fVar40 = auVar17._8_4_;
        fVar70 = auVar17._12_4_;
        auVar18 = *(undefined1 (*) [16])(lVar1 + 0x50);
        fVar65 = auVar18._0_4_;
        fVar39 = auVar18._4_4_;
        fVar47 = auVar18._8_4_;
        fVar50 = auVar18._12_4_;
        auVar17 = minps(auVar18,auVar17);
        auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam00000001468660f4);
        auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_1468660f0);
        auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam00000001468660f8);
        auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam00000001468660fc);
        iVar11 = movmskps((int)plVar13,auVar18);
        local_128 = _DAT_146866080;
        uStack_120 = uRam0000000146866088;
        if (iVar11 == 0) {
          fVar65 = *param_2;
          fVar39 = param_2[1];
          fVar47 = param_2[2];
          fVar48 = param_2[3];
          fVar49 = *(float *)(lVar1 + 0x30);
          fVar51 = *(float *)(lVar1 + 0x34);
          fVar33 = *(float *)(lVar1 + 0x38);
          fVar63 = *(float *)(lVar1 + 0x3c);
          fVar71 = fVar64 * *(float *)(lVar1 + 0x40);
          fVar24 = fVar66 * *(float *)(lVar1 + 0x44);
          fVar32 = fVar40 * *(float *)(lVar1 + 0x48);
          fVar30 = fVar70 * *(float *)(lVar1 + 0x4c);
          fVar50 = *(float *)(lVar1 + 0x5c);
          fVar67 = *(float *)(lVar1 + 0x50) * fVar64;
          fVar68 = *(float *)(lVar1 + 0x54) * fVar66;
          fVar69 = *(float *)(lVar1 + 0x58) * fVar40;
          fVar34 = fVar63 * fVar65 * _DAT_1468660d0 + fVar48 * fVar49 +
                   fVar39 * fVar33 * _DAT_1468660c0 + fVar47 * fVar51 * _DAT_1468660b0;
          fVar41 = fVar33 * fVar65 * fRam00000001468660d4 + fVar48 * fVar51 +
                   fVar39 * fVar63 * fRam00000001468660c4 + fVar47 * fVar49 * fRam00000001468660b4;
          fVar29 = fVar51 * fVar65 * fRam00000001468660d8 + fVar48 * fVar33 +
                   fVar39 * fVar49 * fRam00000001468660c8 + fVar47 * fVar63 * fRam00000001468660b8;
          fVar63 = fVar49 * fVar65 * fRam00000001468660dc + fVar48 * fVar63 +
                   fVar39 * fVar51 * fRam00000001468660cc + fVar47 * fVar33 * fRam00000001468660bc;
          fVar40 = fVar32 * fVar39 - fVar24 * fVar47;
          fVar49 = fVar71 * fVar47 - fVar32 * fVar65;
          fVar51 = fVar24 * fVar65 - fVar71 * fVar39;
          fVar33 = fVar30 * fVar48 - fVar30 * fVar48;
          fVar40 = fVar40 + fVar40;
          fVar49 = fVar49 + fVar49;
          fVar51 = fVar51 + fVar51;
          fVar33 = fVar33 + fVar33;
          fVar64 = (fVar51 * fVar39 - fVar49 * fVar47) + fVar40 * fVar48 + fVar71 + param_2[4];
          fVar66 = (fVar40 * fVar47 - fVar51 * fVar65) + fVar49 * fVar48 + fVar24 + param_2[5];
          fVar65 = (fVar49 * fVar65 - fVar40 * fVar39) + fVar51 * fVar48 + fVar32 + param_2[6];
          fVar39 = (fVar33 * fVar48 - fVar33 * fVar48) + fVar33 * fVar48 + fVar30 + param_2[7];
          uVar12 = 0;
        }
        else {
          fVar24 = *param_2;
          fVar32 = param_2[1];
          fVar30 = param_2[2];
          fVar34 = param_2[3];
          fVar29 = fVar32 + fVar32;
          fVar31 = fVar30 + fVar30;
          fVar67 = fVar64 * fVar65;
          fVar68 = fVar66 * fVar39;
          fVar69 = fVar40 * fVar47;
          fVar45 = fVar24 * (fVar24 + fVar24);
          fVar41 = fVar34 * (fVar24 + fVar24);
          fVar60 = (fVar34 * fVar31 + fVar24 * fVar29) * fVar64;
          fVar61 = (fVar41 + fVar32 * fVar31) * fVar66;
          fVar62 = (fVar34 * fVar29 + fVar24 * fVar31) * fVar40;
          fVar52 = fVar66 * (fVar24 * fVar29 - fVar34 * fVar31);
          fVar54 = fVar40 * (fVar32 * fVar31 - fVar41);
          fVar55 = fVar64 * (fVar24 * fVar31 - fVar34 * fVar29);
          fVar41 = (float)((uint)((_DAT_146866090 - (fVar30 * fVar31 + fVar32 * fVar29)) * fVar64) &
                          _DAT_1468660a0);
          fVar31 = (float)((uint)((fRam0000000146866094 - (fVar30 * fVar31 + fVar45)) * fVar66) &
                          uRam00000001468660a4);
          fVar29 = (float)((uint)((fRam0000000146866098 - (fVar32 * fVar29 + fVar45)) * fVar40) &
                          uRam00000001468660a8);
          fVar45 = (float)((uint)((fRam000000014686609c - (fVar45 + fVar45)) * fVar70) &
                          uRam00000001468660ac);
          fVar64 = param_2[4];
          fVar66 = param_2[5];
          fVar40 = param_2[6];
          fVar24 = *(float *)(lVar1 + 0x30);
          fVar32 = *(float *)(lVar1 + 0x34);
          fVar30 = *(float *)(lVar1 + 0x38);
          fVar34 = *(float *)(lVar1 + 0x3c);
          fVar42 = fVar32 + fVar32;
          fVar44 = fVar30 + fVar30;
          fVar46 = fVar24 * (fVar24 + fVar24);
          fVar43 = (fVar24 + fVar24) * fVar34;
          fVar57 = (fVar44 * fVar34 + fVar42 * fVar24) * fVar65;
          fVar58 = (fVar43 + fVar44 * fVar32) * fVar39;
          fVar59 = (fVar42 * fVar34 + fVar44 * fVar24) * fVar47;
          fVar53 = fVar39 * (fVar42 * fVar24 - fVar44 * fVar34);
          fVar43 = fVar47 * (fVar44 * fVar32 - fVar43);
          fVar56 = fVar65 * (fVar44 * fVar24 - fVar42 * fVar34);
          fVar24 = (float)((uint)((_DAT_146866090 - (fVar30 * fVar44 + fVar32 * fVar42)) * fVar65) &
                          _DAT_1468660a0);
          fVar30 = (float)((uint)((fRam0000000146866094 - (fVar30 * fVar44 + fVar46)) * fVar39) &
                          uRam00000001468660a4);
          fVar32 = (float)((uint)((fRam0000000146866098 - (fVar32 * fVar42 + fVar46)) * fVar47) &
                          uRam00000001468660a8);
          fVar34 = (float)((uint)((fRam000000014686609c - (fVar46 + fVar46)) * fVar50) &
                          uRam00000001468660ac);
          fVar65 = *(float *)(lVar1 + 0x40);
          fVar39 = *(float *)(lVar1 + 0x44);
          fVar47 = *(float *)(lVar1 + 0x48);
          local_168 = fVar57 * fVar52 + fVar24 * fVar41 + fVar56 * fVar62 + fVar34 * fVar64;
          fStack_164 = fVar57 * fVar31 + fVar24 * fVar60 + fVar56 * fVar54 + fVar34 * fVar66;
          fStack_160 = fVar57 * fVar61 + fVar24 * fVar55 + fVar56 * fVar29 + fVar34 * fVar40;
          fStack_15c = fVar57 * fVar45 + fVar24 * fVar45 + fVar56 * fVar45 +
                       fVar34 * fRam000000014686609c;
          local_158 = fVar30 * fVar52 + fVar53 * fVar41 + fVar58 * fVar62 + fVar34 * fVar64;
          fStack_154 = fVar30 * fVar31 + fVar53 * fVar60 + fVar58 * fVar54 + fVar34 * fVar66;
          fStack_150 = fVar30 * fVar61 + fVar53 * fVar55 + fVar58 * fVar29 + fVar34 * fVar40;
          fStack_14c = fVar30 * fVar45 + fVar53 * fVar45 + fVar58 * fVar45 +
                       fVar34 * fRam000000014686609c;
          local_148 = fVar43 * fVar52 + fVar59 * fVar41 + fVar32 * fVar62 + fVar34 * fVar64;
          fStack_144 = fVar43 * fVar31 + fVar59 * fVar60 + fVar32 * fVar54 + fVar34 * fVar66;
          fStack_140 = fVar43 * fVar61 + fVar59 * fVar55 + fVar32 * fVar29 + fVar34 * fVar40;
          fStack_13c = fVar43 * fVar45 + fVar59 * fVar45 + fVar32 * fVar45 +
                       fVar34 * fRam000000014686609c;
          local_138 = fVar39 * fVar52 + fVar65 * fVar41 + fVar47 * fVar62 +
                      fRam000000014686609c * fVar64;
          fStack_134 = fVar39 * fVar31 + fVar65 * fVar60 + fVar47 * fVar54 +
                       fRam000000014686609c * fVar66;
          fStack_130 = fVar39 * fVar61 + fVar65 * fVar55 + fVar47 * fVar29 +
                       fRam000000014686609c * fVar40;
          fStack_12c = fVar39 * fVar45 + fVar65 * fVar45 + fVar47 * fVar45 +
                       fRam000000014686609c * fRam000000014686609c;
          FMatrix::RemoveScaling(&local_168);
          fVar64 = (float)(-(uint)(fVar33 <= fVar67) & (_DAT_1468660e0 ^ (uint)fVar48) ^
                          _DAT_1468660e0);
          fVar65 = (float)(-(uint)(fVar63 <= fVar68) & (uRam00000001468660e4 ^ (uint)fVar49) ^
                          uRam00000001468660e4);
          fVar66 = (float)(-(uint)(fVar71 <= fVar69) & (uRam00000001468660e8 ^ (uint)fVar51) ^
                          uRam00000001468660e8);
          local_168 = local_168 * fVar64;
          fStack_160 = fStack_160 * fVar64;
          fStack_164 = fStack_164 * fVar64;
          fStack_150 = fStack_150 * fVar65;
          fStack_154 = fStack_154 * fVar65;
          local_158 = local_158 * fVar65;
          fStack_140 = fStack_140 * fVar66;
          local_148 = local_148 * fVar66;
          fStack_144 = fStack_144 * fVar66;
          uVar12 = FQuat::FQuat(&local_108,&local_168);
          auVar25._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
          auVar25._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
          auVar25._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
          auVar25._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
          fVar47 = auVar25._4_4_ + auVar25._0_4_;
          fVar48 = auVar25._8_4_ + auVar25._4_4_;
          fVar49 = auVar25._12_4_ + auVar25._8_4_;
          fVar51 = auVar25._0_4_ + auVar25._12_4_;
          auVar17._4_4_ = fVar48;
          auVar17._0_4_ = fVar47;
          auVar17._8_4_ = fVar49;
          auVar17._12_4_ = fVar51;
          auVar17 = rsqrtps(auVar25,auVar17);
          fVar64 = auVar17._0_4_;
          fVar65 = auVar17._4_4_;
          fVar66 = auVar17._8_4_;
          fVar40 = auVar17._12_4_;
          fVar64 = ((float)local_128 - fVar64 * fVar64 * fVar47 * (float)local_128) * fVar64 +
                   fVar64;
          fVar65 = (local_128._4_4_ - fVar65 * fVar65 * fVar48 * local_128._4_4_) * fVar65 + fVar65;
          fVar66 = ((float)uStack_120 - fVar66 * fVar66 * fVar49 * (float)uStack_120) * fVar66 +
                   fVar66;
          fVar40 = (uStack_120._4_4_ - fVar40 * fVar40 * fVar51 * uStack_120._4_4_) * fVar40 +
                   fVar40;
          fVar39 = 0.0;
          fVar34 = (float)(((uint)((((float)local_128 - fVar64 * fVar64 * fVar47 * (float)local_128)
                                    * fVar64 + fVar64) * local_108) ^ _DAT_146866070) &
                           -(uint)(1e-08 <= fVar47) ^ _DAT_146866070);
          fVar41 = (float)(((uint)(((local_128._4_4_ - fVar65 * fVar65 * fVar48 * local_128._4_4_) *
                                    fVar65 + fVar65) * fStack_104) ^ uRam0000000146866074) &
                           -(uint)(1e-08 <= fVar48) ^ uRam0000000146866074);
          fVar29 = (float)(((uint)((((float)uStack_120 -
                                    fVar66 * fVar66 * fVar49 * (float)uStack_120) * fVar66 + fVar66)
                                  * fStack_100) ^ uRam0000000146866078) & -(uint)(1e-08 <= fVar49) ^
                          uRam0000000146866078);
          fVar63 = (float)(((uint)(((uStack_120._4_4_ - fVar40 * fVar40 * fVar51 * uStack_120._4_4_)
                                    * fVar40 + fVar40) * fStack_fc) ^ uRam000000014686607c) &
                           -(uint)(1e-08 <= fVar51) ^ uRam000000014686607c);
          fVar64 = local_138;
          fVar66 = fStack_134;
          fVar65 = fStack_130;
          local_108 = fVar34;
          fStack_104 = fVar41;
          fStack_100 = fVar29;
          fStack_fc = fVar63;
        }
        fVar52 = fRam00000001468660dc;
        fVar46 = fRam00000001468660d8;
        fVar44 = fRam00000001468660d4;
        fVar43 = _DAT_1468660d0;
        fVar42 = fRam00000001468660cc;
        fVar45 = fRam00000001468660c8;
        fVar31 = fRam00000001468660c4;
        fVar30 = _DAT_1468660c0;
        uVar10 = uRam00000001468660ac;
        uVar9 = uRam00000001468660a8;
        uVar8 = uRam00000001468660a4;
        uVar7 = _DAT_1468660a0;
        fVar70 = fVar70 * fVar50;
        *(float *)(lVar1 + 0x50) = fVar67;
        *(float *)(lVar1 + 0x54) = fVar68;
        *(float *)(lVar1 + 0x58) = fVar69;
        *(float *)(lVar1 + 0x5c) = fVar70;
        auVar19._4_4_ = fVar68;
        auVar19._0_4_ = fVar67;
        auVar19._8_4_ = fVar69;
        auVar19._12_4_ = fVar70;
        *(float *)(lVar1 + 0x40) = fVar64;
        *(float *)(lVar1 + 0x44) = fVar66;
        *(float *)(lVar1 + 0x48) = fVar65;
        *(float *)(lVar1 + 0x4c) = fVar39;
        *(float *)(lVar1 + 0x30) = fVar34;
        *(float *)(lVar1 + 0x34) = fVar41;
        *(float *)(lVar1 + 0x38) = fVar29;
        *(float *)(lVar1 + 0x3c) = fVar63;
        fVar32 = fRam0000000146866098;
        fVar24 = fRam0000000146866094;
        fVar71 = _DAT_146866090;
        auVar17 = *(undefined1 (*) [16])(param_3 + 8);
        fVar39 = auVar17._0_4_;
        fVar40 = auVar17._4_4_;
        fVar47 = auVar17._8_4_;
        fVar50 = auVar17._12_4_;
        fVar48 = *param_3;
        fVar49 = param_3[1];
        fVar51 = param_3[2];
        fVar33 = param_3[3];
        auVar17 = minps(auVar19,auVar17);
        local_118 = _DAT_1468660f0;
        fStack_114 = fRam00000001468660f4;
        fStack_110 = fRam00000001468660f8;
        fStack_10c = fRam00000001468660fc;
        auVar20._4_4_ = -(uint)(auVar17._4_4_ < fRam00000001468660f4);
        auVar20._0_4_ = -(uint)(auVar17._0_4_ < _DAT_1468660f0);
        auVar20._8_4_ = -(uint)(auVar17._8_4_ < fRam00000001468660f8);
        auVar20._12_4_ = -(uint)(auVar17._12_4_ < fRam00000001468660fc);
        iVar11 = movmskps(uVar12,auVar20);
        if (iVar11 == 0) {
          fVar24 = fVar39 * *(float *)(lVar1 + 0x40);
          fVar32 = fVar40 * *(float *)(lVar1 + 0x44);
          fVar53 = fVar47 * *(float *)(lVar1 + 0x48);
          fVar54 = fVar50 * *(float *)(lVar1 + 0x4c);
          fVar64 = param_3[4];
          fVar65 = param_3[5];
          fVar66 = param_3[6];
          fVar71 = param_3[7];
          *(float *)(lVar1 + 0x50) = fVar39 * fVar67;
          *(float *)(lVar1 + 0x54) = fVar40 * fVar68;
          *(float *)(lVar1 + 0x58) = fVar47 * fVar69;
          *(float *)(lVar1 + 0x5c) = fVar50 * fVar70;
          fVar39 = fVar53 * fVar49 - fVar32 * fVar51;
          fVar40 = fVar24 * fVar51 - fVar53 * fVar48;
          fVar47 = fVar32 * fVar48 - fVar24 * fVar49;
          fVar70 = fVar54 * fVar33 - fVar54 * fVar33;
          fVar55 = fVar63 * fVar48 * fVar43 + fVar33 * fVar34 + fVar29 * fVar49 * fVar30 +
                   fVar41 * fVar51 * fVar36;
          fVar56 = fVar29 * fVar48 * fVar44 + fVar33 * fVar41 + fVar63 * fVar49 * fVar31 +
                   fVar34 * fVar51 * fVar35;
          fVar57 = fVar41 * fVar48 * fVar46 + fVar33 * fVar29 + fVar34 * fVar49 * fVar45 +
                   fVar63 * fVar51 * fVar37;
          fVar63 = fVar34 * fVar48 * fVar52 + fVar33 * fVar63 + fVar41 * fVar49 * fVar42 +
                   fVar29 * fVar51 * fVar38;
          fVar39 = fVar39 + fVar39;
          fVar40 = fVar40 + fVar40;
          fVar47 = fVar47 + fVar47;
          fVar70 = fVar70 + fVar70;
          *(float *)(lVar1 + 0x40) =
               (fVar47 * fVar49 - fVar40 * fVar51) + fVar33 * fVar39 + fVar24 + fVar64;
          *(float *)(lVar1 + 0x44) =
               (fVar39 * fVar51 - fVar47 * fVar48) + fVar33 * fVar40 + fVar32 + fVar65;
          *(float *)(lVar1 + 0x48) =
               (fVar40 * fVar48 - fVar39 * fVar49) + fVar33 * fVar47 + fVar53 + fVar66;
          *(float *)(lVar1 + 0x4c) =
               (fVar70 * fVar33 - fVar70 * fVar33) + fVar33 * fVar70 + fVar54 + fVar71;
          uVar12 = 0;
        }
        else {
          fVar35 = fVar49 + fVar49;
          fVar37 = fVar51 + fVar51;
          fVar30 = (fVar48 + fVar48) * fVar48;
          fVar36 = (fVar48 + fVar48) * fVar33;
          fVar31 = fVar41 + fVar41;
          fVar38 = fVar29 + fVar29;
          fVar57 = (fVar37 * fVar33 + fVar35 * fVar48) * fVar39;
          fVar58 = (fVar36 + fVar37 * fVar49) * fVar40;
          fVar59 = (fVar35 * fVar33 + fVar37 * fVar48) * fVar47;
          fVar42 = fVar40 * (fVar35 * fVar48 - fVar37 * fVar33);
          fVar44 = fVar47 * (fVar37 * fVar49 - fVar36);
          fVar52 = fVar39 * (fVar37 * fVar48 - fVar35 * fVar33);
          fVar45 = (fVar34 + fVar34) * fVar34;
          fVar36 = (float)((uint)((_DAT_146866090 - (fVar37 * fVar51 + fVar35 * fVar49)) * fVar39) &
                          uVar7);
          fVar37 = (float)((uint)((fRam0000000146866094 - (fVar37 * fVar51 + fVar30)) * fVar40) &
                          uVar8);
          fVar33 = (float)((uint)((fRam0000000146866098 - (fVar35 * fVar49 + fVar30)) * fVar47) &
                          uVar9);
          fVar30 = (float)((uint)((fRam000000014686609c - (fVar30 + fVar30)) * fVar50) & uVar10);
          fVar48 = param_3[4];
          fVar49 = param_3[5];
          fVar51 = param_3[6];
          fVar35 = (fVar34 + fVar34) * fVar63;
          fVar54 = (fVar38 * fVar63 + fVar31 * fVar34) * fVar67;
          fVar55 = (fVar35 + fVar38 * fVar41) * fVar68;
          fVar56 = (fVar31 * fVar63 + fVar38 * fVar34) * fVar69;
          fVar43 = fVar68 * (fVar31 * fVar34 - fVar38 * fVar63);
          fVar46 = fVar69 * (fVar38 * fVar41 - fVar35);
          fVar53 = fVar67 * (fVar38 * fVar34 - fVar31 * fVar63);
          fVar35 = (float)((uint)((_DAT_146866090 - (fVar38 * fVar29 + fVar31 * fVar41)) * fVar67) &
                          _DAT_1468660a0);
          fVar38 = (float)((uint)((fRam0000000146866094 - (fVar38 * fVar29 + fVar45)) * fVar68) &
                          uRam00000001468660a4);
          fVar63 = (float)((uint)((fRam0000000146866098 - (fVar31 * fVar41 + fVar45)) * fVar69) &
                          uRam00000001468660a8);
          fVar34 = (float)((uint)((fRam000000014686609c - (fVar45 + fVar45)) * fVar70) &
                          uRam00000001468660ac);
          local_168 = fVar54 * fVar42 + fVar35 * fVar36 + fVar53 * fVar59 + fVar34 * fVar48;
          fStack_164 = fVar54 * fVar37 + fVar35 * fVar57 + fVar53 * fVar44 + fVar34 * fVar49;
          fStack_160 = fVar54 * fVar58 + fVar35 * fVar52 + fVar53 * fVar33 + fVar34 * fVar51;
          fStack_15c = fVar54 * fVar30 + fVar35 * fVar30 + fVar53 * fVar30 +
                       fVar34 * fRam000000014686609c;
          local_158 = fVar38 * fVar42 + fVar43 * fVar36 + fVar55 * fVar59 + fVar34 * fVar48;
          fStack_154 = fVar38 * fVar37 + fVar43 * fVar57 + fVar55 * fVar44 + fVar34 * fVar49;
          fStack_150 = fVar38 * fVar58 + fVar43 * fVar52 + fVar55 * fVar33 + fVar34 * fVar51;
          fStack_14c = fVar38 * fVar30 + fVar43 * fVar30 + fVar55 * fVar30 +
                       fVar34 * fRam000000014686609c;
          local_148 = fVar46 * fVar42 + fVar56 * fVar36 + fVar63 * fVar59 + fVar34 * fVar48;
          fStack_144 = fVar46 * fVar37 + fVar56 * fVar57 + fVar63 * fVar44 + fVar34 * fVar49;
          fStack_140 = fVar46 * fVar58 + fVar56 * fVar52 + fVar63 * fVar33 + fVar34 * fVar51;
          fStack_13c = fVar46 * fVar30 + fVar56 * fVar30 + fVar63 * fVar30 +
                       fVar34 * fRam000000014686609c;
          local_138 = fVar66 * fVar42 + fVar64 * fVar36 + fVar65 * fVar59 +
                      fRam000000014686609c * fVar48;
          fStack_134 = fVar66 * fVar37 + fVar64 * fVar57 + fVar65 * fVar44 +
                       fRam000000014686609c * fVar49;
          fStack_130 = fVar66 * fVar58 + fVar64 * fVar52 + fVar65 * fVar33 +
                       fRam000000014686609c * fVar51;
          fStack_12c = fVar66 * fVar30 + fVar64 * fVar30 + fVar65 * fVar30 +
                       fRam000000014686609c * fRam000000014686609c;
          FMatrix::RemoveScaling(&local_168);
          fVar64 = (float)(-(uint)(local_118 <= fVar39 * fVar67) & (_DAT_1468660e0 ^ (uint)fVar71) ^
                          _DAT_1468660e0);
          fVar65 = (float)(-(uint)(fStack_114 <= fVar40 * fVar68) &
                           (uRam00000001468660e4 ^ (uint)fVar24) ^ uRam00000001468660e4);
          fVar66 = (float)(-(uint)(fStack_110 <= fVar47 * fVar69) &
                           (uRam00000001468660e8 ^ (uint)fVar32) ^ uRam00000001468660e8);
          local_168 = local_168 * fVar64;
          fStack_164 = fStack_164 * fVar64;
          fStack_160 = fStack_160 * fVar64;
          fStack_154 = fStack_154 * fVar65;
          fStack_150 = fStack_150 * fVar65;
          local_158 = local_158 * fVar65;
          fStack_144 = fStack_144 * fVar66;
          fStack_140 = fStack_140 * fVar66;
          local_148 = local_148 * fVar66;
          uVar12 = FQuat::FQuat(&local_f8,&local_168);
          fVar52 = fRam00000001468660dc;
          fVar46 = fRam00000001468660d8;
          fVar44 = fRam00000001468660d4;
          fVar43 = _DAT_1468660d0;
          fVar42 = fRam00000001468660cc;
          fVar45 = fRam00000001468660c8;
          fVar31 = fRam00000001468660c4;
          fVar30 = _DAT_1468660c0;
          auVar26._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
          auVar26._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
          auVar26._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
          auVar26._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
          fVar49 = auVar26._4_4_ + auVar26._0_4_;
          fVar51 = auVar26._8_4_ + auVar26._4_4_;
          fVar36 = auVar26._12_4_ + auVar26._8_4_;
          fVar35 = auVar26._0_4_ + auVar26._12_4_;
          auVar4._4_4_ = fVar51;
          auVar4._0_4_ = fVar49;
          auVar4._8_4_ = fVar36;
          auVar4._12_4_ = fVar35;
          auVar17 = rsqrtps(auVar26,auVar4);
          fVar64 = auVar17._0_4_;
          fVar65 = auVar17._4_4_;
          fVar66 = auVar17._8_4_;
          fVar48 = auVar17._12_4_;
          fVar64 = ((float)local_128 - fVar64 * fVar64 * fVar49 * (float)local_128) * fVar64 +
                   fVar64;
          fVar65 = (local_128._4_4_ - fVar65 * fVar65 * fVar51 * local_128._4_4_) * fVar65 + fVar65;
          fVar66 = ((float)uStack_120 - fVar66 * fVar66 * fVar36 * (float)uStack_120) * fVar66 +
                   fVar66;
          fVar48 = (uStack_120._4_4_ - fVar48 * fVar48 * fVar35 * uStack_120._4_4_) * fVar48 +
                   fVar48;
          auVar2._4_4_ = fStack_134;
          auVar2._0_4_ = local_138;
          auVar2._8_4_ = fStack_130;
          fVar55 = (float)(((uint)((((float)local_128 - fVar64 * fVar64 * fVar49 * (float)local_128)
                                    * fVar64 + fVar64) * local_f8) ^ _DAT_146866070) &
                           -(uint)(1e-08 <= fVar49) ^ _DAT_146866070);
          fVar56 = (float)(((uint)(((local_128._4_4_ - fVar65 * fVar65 * fVar51 * local_128._4_4_) *
                                    fVar65 + fVar65) * fStack_f4) ^ uRam0000000146866074) &
                           -(uint)(1e-08 <= fVar51) ^ uRam0000000146866074);
          fVar57 = (float)(((uint)((((float)uStack_120 -
                                    fVar66 * fVar66 * fVar36 * (float)uStack_120) * fVar66 + fVar66)
                                  * fStack_f0) ^ uRam0000000146866078) & -(uint)(1e-08 <= fVar36) ^
                          uRam0000000146866078);
          fVar63 = (float)(((uint)(((uStack_120._4_4_ - fVar48 * fVar48 * fVar35 * uStack_120._4_4_)
                                    * fVar48 + fVar48) * fStack_ec) ^ uRam000000014686607c) &
                           -(uint)(1e-08 <= fVar35) ^ uRam000000014686607c);
          *(float *)(lVar1 + 0x50) = fVar39 * fVar67;
          *(float *)(lVar1 + 0x54) = fVar40 * fVar68;
          *(float *)(lVar1 + 0x58) = fVar47 * fVar69;
          *(float *)(lVar1 + 0x5c) = fVar50 * fVar70;
          fVar38 = fRam00000001468660bc;
          fVar37 = fRam00000001468660b8;
          fVar35 = fRam00000001468660b4;
          fVar36 = _DAT_1468660b0;
          auVar2._12_4_ = 0;
          *(undefined1 (*) [16])(lVar1 + 0x40) = auVar2;
          local_f8 = fVar55;
          fStack_f4 = fVar56;
          fStack_f0 = fVar57;
          fStack_ec = fVar63;
        }
        *(float *)(lVar1 + 0x30) = fVar55;
        *(float *)(lVar1 + 0x34) = fVar56;
        *(float *)(lVar1 + 0x38) = fVar57;
        *(float *)(lVar1 + 0x3c) = fVar63;
        fVar47 = fRam00000001468660f8;
        fVar40 = fRam00000001468660f4;
        fVar39 = _DAT_1468660f0;
        fVar66 = fRam0000000146866098;
        fVar65 = fRam0000000146866094;
        fVar64 = _DAT_146866090;
        if (*(char *)(lVar1 + 0xa8) == '\0') {
          auVar17 = *(undefined1 (*) [16])(lVar1 + 0x80);
          fVar70 = auVar17._0_4_;
          fVar48 = auVar17._4_4_;
          fVar51 = auVar17._8_4_;
          fVar71 = auVar17._12_4_;
          auVar18 = *(undefined1 (*) [16])(param_2 + 8);
          fVar50 = auVar18._0_4_;
          fVar49 = auVar18._4_4_;
          fVar33 = auVar18._8_4_;
          fVar63 = auVar18._12_4_;
          auVar17 = minps(auVar17,auVar18);
          auVar21._4_4_ = -(uint)(auVar17._4_4_ < fRam00000001468660f4);
          auVar21._0_4_ = -(uint)(auVar17._0_4_ < _DAT_1468660f0);
          auVar21._8_4_ = -(uint)(auVar17._8_4_ < fRam00000001468660f8);
          auVar21._12_4_ = -(uint)(auVar17._12_4_ < fRam00000001468660fc);
          iVar11 = movmskps(uVar12,auVar21);
          if (iVar11 == 0) {
            fVar64 = *param_2;
            fVar65 = param_2[1];
            fVar66 = param_2[2];
            fVar39 = param_2[3];
            fVar40 = *(float *)(lVar1 + 0x60);
            fVar47 = *(float *)(lVar1 + 100);
            fVar70 = *(float *)(lVar1 + 0x68);
            fVar48 = *(float *)(lVar1 + 0x6c);
            fVar51 = fVar50 * *(float *)(lVar1 + 0x70);
            fVar24 = fVar49 * *(float *)(lVar1 + 0x74);
            fVar32 = fVar33 * *(float *)(lVar1 + 0x78);
            fVar34 = fVar63 * *(float *)(lVar1 + 0x7c);
            fVar71 = *(float *)(lVar1 + 0x8c);
            fVar67 = *(float *)(lVar1 + 0x80) * fVar50;
            fVar68 = *(float *)(lVar1 + 0x84) * fVar49;
            fVar69 = *(float *)(lVar1 + 0x88) * fVar33;
            fVar49 = fVar64 * fVar48 * fVar43 + fVar40 * fVar39 + fVar65 * fVar70 * fVar30 +
                     fVar66 * fVar47 * fVar36;
            fVar33 = fVar64 * fVar70 * fVar44 + fVar47 * fVar39 + fVar65 * fVar48 * fVar31 +
                     fVar66 * fVar40 * fVar35;
            fVar41 = fVar64 * fVar47 * fVar46 + fVar70 * fVar39 + fVar65 * fVar40 * fVar45 +
                     fVar66 * fVar48 * fVar37;
            fVar29 = fVar64 * fVar40 * fVar52 + fVar48 * fVar39 + fVar65 * fVar47 * fVar42 +
                     fVar66 * fVar70 * fVar38;
            fVar47 = fVar32 * fVar65 - fVar24 * fVar66;
            fVar70 = fVar51 * fVar66 - fVar32 * fVar64;
            fVar50 = fVar24 * fVar64 - fVar51 * fVar65;
            fVar48 = fVar34 * fVar39 - fVar34 * fVar39;
            fVar47 = fVar47 + fVar47;
            fVar70 = fVar70 + fVar70;
            fVar50 = fVar50 + fVar50;
            fVar48 = fVar48 + fVar48;
            fVar40 = (fVar50 * fVar65 - fVar70 * fVar66) + fVar47 * fVar39 + fVar51 + param_2[4];
            fVar66 = (fVar47 * fVar66 - fVar50 * fVar64) + fVar70 * fVar39 + fVar24 + param_2[5];
            fVar64 = (fVar70 * fVar64 - fVar47 * fVar65) + fVar50 * fVar39 + fVar32 + param_2[6];
            fVar65 = (fVar48 * fVar39 - fVar48 * fVar39) + fVar48 * fVar39 + fVar34 + param_2[7];
            uVar12 = 0;
          }
          else {
            fVar24 = *param_2;
            fVar32 = param_2[1];
            fVar30 = param_2[2];
            fVar34 = param_2[3];
            fVar41 = param_2[4];
            fVar29 = param_2[5];
            fVar31 = param_2[6];
            fVar45 = fVar32 + fVar32;
            fVar43 = fVar30 + fVar30;
            fVar44 = fVar24 * (fVar24 + fVar24);
            fVar42 = (fVar24 + fVar24) * fVar34;
            fVar67 = fVar70 * fVar50;
            fVar68 = fVar48 * fVar49;
            fVar69 = fVar51 * fVar33;
            fVar60 = (fVar43 * fVar34 + fVar45 * fVar24) * fVar50;
            fVar61 = (fVar42 + fVar43 * fVar32) * fVar49;
            fVar62 = (fVar45 * fVar34 + fVar43 * fVar24) * fVar33;
            fVar52 = fVar49 * (fVar45 * fVar24 - fVar43 * fVar34);
            fVar54 = fVar33 * (fVar43 * fVar32 - fVar42);
            fVar55 = fVar50 * (fVar43 * fVar24 - fVar45 * fVar34);
            fVar34 = (float)((uint)((_DAT_146866090 - (fVar30 * fVar43 + fVar32 * fVar45)) * fVar50)
                            & _DAT_1468660a0);
            fVar30 = (float)((uint)((fRam0000000146866094 - (fVar30 * fVar43 + fVar44)) * fVar49) &
                            uRam00000001468660a4);
            fVar32 = (float)((uint)((fRam0000000146866098 - (fVar32 * fVar45 + fVar44)) * fVar33) &
                            uRam00000001468660a8);
            fVar45 = (float)((uint)((fRam000000014686609c - (fVar44 + fVar44)) * fVar63) &
                            uRam00000001468660ac);
            fVar50 = *(float *)(lVar1 + 0x60);
            fVar49 = *(float *)(lVar1 + 100);
            fVar33 = *(float *)(lVar1 + 0x68);
            fVar24 = *(float *)(lVar1 + 0x6c);
            fVar42 = fVar49 + fVar49;
            fVar44 = fVar33 + fVar33;
            fVar46 = fVar50 * (fVar50 + fVar50);
            fVar43 = (fVar50 + fVar50) * fVar24;
            fVar57 = (fVar44 * fVar24 + fVar42 * fVar50) * fVar70;
            fVar58 = (fVar43 + fVar44 * fVar49) * fVar48;
            fVar59 = (fVar42 * fVar24 + fVar44 * fVar50) * fVar51;
            fVar53 = fVar48 * (fVar42 * fVar50 - fVar44 * fVar24);
            fVar43 = fVar51 * (fVar44 * fVar49 - fVar43);
            fVar56 = fVar70 * (fVar44 * fVar50 - fVar42 * fVar24);
            fVar24 = (float)((uint)((_DAT_146866090 - (fVar33 * fVar44 + fVar49 * fVar42)) * fVar70)
                            & _DAT_1468660a0);
            fVar33 = (float)((uint)((fRam0000000146866094 - (fVar33 * fVar44 + fVar46)) * fVar48) &
                            uRam00000001468660a4);
            fVar49 = (float)((uint)((fRam0000000146866098 - (fVar49 * fVar42 + fVar46)) * fVar51) &
                            uRam00000001468660a8);
            fVar51 = (float)((uint)((fRam000000014686609c - (fVar46 + fVar46)) * fVar71) &
                            uRam00000001468660ac);
            fVar70 = *(float *)(lVar1 + 0x70);
            fVar50 = *(float *)(lVar1 + 0x74);
            fVar48 = *(float *)(lVar1 + 0x78);
            local_168 = fVar57 * fVar52 + fVar24 * fVar34 + fVar56 * fVar62 + fVar51 * fVar41;
            fStack_164 = fVar57 * fVar30 + fVar24 * fVar60 + fVar56 * fVar54 + fVar51 * fVar29;
            fStack_160 = fVar57 * fVar61 + fVar24 * fVar55 + fVar56 * fVar32 + fVar51 * fVar31;
            fStack_15c = fVar57 * fVar45 + fVar24 * fVar45 + fVar56 * fVar45 +
                         fVar51 * fRam000000014686609c;
            local_158 = fVar33 * fVar52 + fVar53 * fVar34 + fVar58 * fVar62 + fVar51 * fVar41;
            fStack_154 = fVar33 * fVar30 + fVar53 * fVar60 + fVar58 * fVar54 + fVar51 * fVar29;
            fStack_150 = fVar33 * fVar61 + fVar53 * fVar55 + fVar58 * fVar32 + fVar51 * fVar31;
            fStack_14c = fVar33 * fVar45 + fVar53 * fVar45 + fVar58 * fVar45 +
                         fVar51 * fRam000000014686609c;
            local_148 = fVar43 * fVar52 + fVar59 * fVar34 + fVar49 * fVar62 + fVar51 * fVar41;
            fStack_144 = fVar43 * fVar30 + fVar59 * fVar60 + fVar49 * fVar54 + fVar51 * fVar29;
            fStack_140 = fVar43 * fVar61 + fVar59 * fVar55 + fVar49 * fVar32 + fVar51 * fVar31;
            fStack_13c = fVar43 * fVar45 + fVar59 * fVar45 + fVar49 * fVar45 +
                         fVar51 * fRam000000014686609c;
            local_138 = fVar50 * fVar52 + fVar70 * fVar34 + fVar48 * fVar62 +
                        fRam000000014686609c * fVar41;
            fStack_134 = fVar50 * fVar30 + fVar70 * fVar60 + fVar48 * fVar54 +
                         fRam000000014686609c * fVar29;
            fStack_130 = fVar50 * fVar61 + fVar70 * fVar55 + fVar48 * fVar32 +
                         fRam000000014686609c * fVar31;
            fStack_12c = fVar50 * fVar45 + fVar70 * fVar45 + fVar48 * fVar45 +
                         fRam000000014686609c * fRam000000014686609c;
            FMatrix::RemoveScaling(&local_168);
            fVar64 = (float)(-(uint)(fVar39 <= fVar67) & (_DAT_1468660e0 ^ (uint)fVar64) ^
                            _DAT_1468660e0);
            fVar65 = (float)(-(uint)(fVar40 <= fVar68) & (uRam00000001468660e4 ^ (uint)fVar65) ^
                            uRam00000001468660e4);
            fVar66 = (float)(-(uint)(fVar47 <= fVar69) & (uRam00000001468660e8 ^ (uint)fVar66) ^
                            uRam00000001468660e8);
            local_168 = local_168 * fVar64;
            fStack_160 = fStack_160 * fVar64;
            fStack_164 = fStack_164 * fVar64;
            fStack_150 = fStack_150 * fVar65;
            fStack_154 = fStack_154 * fVar65;
            local_158 = local_158 * fVar65;
            fStack_140 = fStack_140 * fVar66;
            local_148 = local_148 * fVar66;
            fStack_144 = fStack_144 * fVar66;
            uVar12 = FQuat::FQuat(&local_e8,&local_168);
            auVar27._0_4_ = local_e8 * local_e8 + fStack_e0 * fStack_e0;
            auVar27._4_4_ = fStack_e4 * fStack_e4 + fStack_dc * fStack_dc;
            auVar27._8_4_ = fStack_e0 * fStack_e0 + local_e8 * local_e8;
            auVar27._12_4_ = fStack_dc * fStack_dc + fStack_e4 * fStack_e4;
            fVar47 = auVar27._4_4_ + auVar27._0_4_;
            fVar70 = auVar27._8_4_ + auVar27._4_4_;
            fVar50 = auVar27._12_4_ + auVar27._8_4_;
            fVar48 = auVar27._0_4_ + auVar27._12_4_;
            auVar5._4_4_ = fVar70;
            auVar5._0_4_ = fVar47;
            auVar5._8_4_ = fVar50;
            auVar5._12_4_ = fVar48;
            auVar17 = rsqrtps(auVar27,auVar5);
            fVar64 = auVar17._0_4_;
            fVar66 = auVar17._4_4_;
            fVar39 = auVar17._8_4_;
            fVar40 = auVar17._12_4_;
            fVar64 = ((float)local_128 - fVar64 * fVar64 * fVar47 * (float)local_128) * fVar64 +
                     fVar64;
            fVar66 = (local_128._4_4_ - fVar66 * fVar66 * fVar70 * local_128._4_4_) * fVar66 +
                     fVar66;
            fVar39 = ((float)uStack_120 - fVar39 * fVar39 * fVar50 * (float)uStack_120) * fVar39 +
                     fVar39;
            fVar40 = (uStack_120._4_4_ - fVar40 * fVar40 * fVar48 * uStack_120._4_4_) * fVar40 +
                     fVar40;
            fVar65 = 0.0;
            fVar49 = (float)(((uint)((((float)local_128 -
                                      fVar64 * fVar64 * fVar47 * (float)local_128) * fVar64 + fVar64
                                     ) * local_e8) ^ _DAT_146866070) & -(uint)(1e-08 <= fVar47) ^
                            _DAT_146866070);
            fVar33 = (float)(((uint)(((local_128._4_4_ - fVar66 * fVar66 * fVar70 * local_128._4_4_)
                                      * fVar66 + fVar66) * fStack_e4) ^ uRam0000000146866074) &
                             -(uint)(1e-08 <= fVar70) ^ uRam0000000146866074);
            fVar41 = (float)(((uint)((((float)uStack_120 -
                                      fVar39 * fVar39 * fVar50 * (float)uStack_120) * fVar39 +
                                     fVar39) * fStack_e0) ^ uRam0000000146866078) &
                             -(uint)(1e-08 <= fVar50) ^ uRam0000000146866078);
            fVar29 = (float)(((uint)(((uStack_120._4_4_ -
                                      fVar40 * fVar40 * fVar48 * uStack_120._4_4_) * fVar40 + fVar40
                                     ) * fStack_dc) ^ uRam000000014686607c) &
                             -(uint)(1e-08 <= fVar48) ^ uRam000000014686607c);
            fVar43 = _DAT_1468660d0;
            fVar44 = fRam00000001468660d4;
            fVar46 = fRam00000001468660d8;
            fVar52 = fRam00000001468660dc;
            fVar30 = _DAT_1468660c0;
            fVar31 = fRam00000001468660c4;
            fVar45 = fRam00000001468660c8;
            fVar42 = fRam00000001468660cc;
            fVar40 = local_138;
            fVar66 = fStack_134;
            fVar64 = fStack_130;
            local_e8 = fVar49;
            fStack_e4 = fVar33;
            fStack_e0 = fVar41;
            fStack_dc = fVar29;
          }
          fVar71 = fVar71 * fVar63;
          *(float *)(lVar1 + 0x80) = fVar67;
          *(float *)(lVar1 + 0x84) = fVar68;
          *(float *)(lVar1 + 0x88) = fVar69;
          *(float *)(lVar1 + 0x8c) = fVar71;
          auVar22._4_4_ = fVar68;
          auVar22._0_4_ = fVar67;
          auVar22._8_4_ = fVar69;
          auVar22._12_4_ = fVar71;
          *(float *)(lVar1 + 0x70) = fVar40;
          *(float *)(lVar1 + 0x74) = fVar66;
          *(float *)(lVar1 + 0x78) = fVar64;
          *(float *)(lVar1 + 0x7c) = fVar65;
          *(float *)(lVar1 + 0x60) = fVar49;
          *(float *)(lVar1 + 100) = fVar33;
          *(float *)(lVar1 + 0x68) = fVar41;
          *(float *)(lVar1 + 0x6c) = fVar29;
          fVar34 = fRam0000000146866098;
          fVar32 = fRam0000000146866094;
          fVar24 = _DAT_146866090;
          auVar17 = *(undefined1 (*) [16])(param_3 + 8);
          fVar65 = auVar17._0_4_;
          fVar39 = auVar17._4_4_;
          fVar47 = auVar17._8_4_;
          fVar70 = auVar17._12_4_;
          fVar50 = *param_3;
          fVar48 = param_3[1];
          fVar51 = param_3[2];
          fVar63 = param_3[3];
          auVar17 = minps(auVar22,auVar17);
          local_118 = _DAT_1468660f0;
          fStack_114 = fRam00000001468660f4;
          fStack_110 = fRam00000001468660f8;
          fStack_10c = fRam00000001468660fc;
          auVar23._4_4_ = -(uint)(auVar17._4_4_ < fRam00000001468660f4);
          auVar23._0_4_ = -(uint)(auVar17._0_4_ < _DAT_1468660f0);
          auVar23._8_4_ = -(uint)(auVar17._8_4_ < fRam00000001468660f8);
          auVar23._12_4_ = -(uint)(auVar17._12_4_ < fRam00000001468660fc);
          iVar11 = movmskps(uVar12,auVar23);
          if (iVar11 == 0) {
            fVar32 = fVar65 * *(float *)(lVar1 + 0x70);
            fVar34 = fVar39 * *(float *)(lVar1 + 0x74);
            fVar53 = fVar47 * *(float *)(lVar1 + 0x78);
            fVar54 = fVar70 * *(float *)(lVar1 + 0x7c);
            fVar64 = param_3[4];
            fVar66 = param_3[5];
            fVar40 = param_3[6];
            fVar24 = param_3[7];
            *(float *)(lVar1 + 0x80) = fVar67 * fVar65;
            *(float *)(lVar1 + 0x84) = fVar68 * fVar39;
            *(float *)(lVar1 + 0x88) = fVar69 * fVar47;
            *(float *)(lVar1 + 0x8c) = fVar71 * fVar70;
            *(float *)(lVar1 + 0x60) =
                 fVar29 * fVar50 * fVar43 + fVar49 * fVar63 + fVar41 * fVar48 * fVar30 +
                 fVar33 * fVar51 * fVar36;
            *(float *)(lVar1 + 100) =
                 fVar41 * fVar50 * fVar44 + fVar33 * fVar63 + fVar29 * fVar48 * fVar31 +
                 fVar49 * fVar51 * fVar35;
            *(float *)(lVar1 + 0x68) =
                 fVar33 * fVar50 * fVar46 + fVar41 * fVar63 + fVar49 * fVar48 * fVar45 +
                 fVar29 * fVar51 * fVar37;
            *(float *)(lVar1 + 0x6c) =
                 fVar49 * fVar50 * fVar52 + fVar29 * fVar63 + fVar33 * fVar48 * fVar42 +
                 fVar41 * fVar51 * fVar38;
            fVar65 = fVar53 * fVar48 - fVar34 * fVar51;
            fVar39 = fVar32 * fVar51 - fVar53 * fVar50;
            fVar47 = fVar34 * fVar50 - fVar32 * fVar48;
            fVar70 = fVar54 * fVar63 - fVar54 * fVar63;
            fVar65 = fVar65 + fVar65;
            fVar39 = fVar39 + fVar39;
            fVar47 = fVar47 + fVar47;
            fVar70 = fVar70 + fVar70;
            *(float *)(lVar1 + 0x70) =
                 (fVar47 * fVar48 - fVar39 * fVar51) + fVar65 * fVar63 + fVar32 + fVar64;
            *(float *)(lVar1 + 0x74) =
                 (fVar65 * fVar51 - fVar47 * fVar50) + fVar39 * fVar63 + fVar34 + fVar66;
            *(float *)(lVar1 + 0x78) =
                 (fVar39 * fVar50 - fVar65 * fVar48) + fVar47 * fVar63 + fVar53 + fVar40;
            *(float *)(lVar1 + 0x7c) =
                 (fVar70 * fVar63 - fVar70 * fVar63) + fVar70 * fVar63 + fVar54 + fVar24;
          }
          else {
            fVar38 = fVar48 + fVar48;
            fVar30 = fVar51 + fVar51;
            fVar31 = fVar50 * (fVar50 + fVar50);
            fVar36 = (fVar50 + fVar50) * fVar63;
            fVar56 = (fVar30 * fVar63 + fVar38 * fVar50) * fVar65;
            fVar57 = (fVar36 + fVar30 * fVar48) * fVar39;
            fVar58 = (fVar38 * fVar63 + fVar30 * fVar50) * fVar47;
            fVar42 = fVar39 * (fVar38 * fVar50 - fVar30 * fVar63);
            fVar44 = fVar47 * (fVar30 * fVar48 - fVar36);
            fVar52 = fVar65 * (fVar30 * fVar50 - fVar38 * fVar63);
            fVar50 = param_3[4];
            fVar36 = param_3[5];
            fVar35 = param_3[6];
            fVar37 = (float)((uint)((_DAT_146866090 - (fVar51 * fVar30 + fVar48 * fVar38)) * fVar65)
                            & _DAT_1468660a0);
            fVar51 = (float)((uint)((fRam0000000146866094 - (fVar51 * fVar30 + fVar31)) * fVar39) &
                            uRam00000001468660a4);
            fVar63 = (float)((uint)((fRam0000000146866098 - (fVar48 * fVar38 + fVar31)) * fVar47) &
                            uRam00000001468660a8);
            fVar31 = (float)((uint)((fRam000000014686609c - (fVar31 + fVar31)) * fVar70) &
                            uRam00000001468660ac);
            fVar38 = fVar33 + fVar33;
            fVar30 = fVar41 + fVar41;
            fVar45 = fVar49 * (fVar49 + fVar49);
            fVar48 = fVar29 * (fVar49 + fVar49);
            fVar53 = (fVar29 * fVar30 + fVar49 * fVar38) * fVar67;
            fVar54 = (fVar48 + fVar33 * fVar30) * fVar68;
            fVar55 = (fVar29 * fVar38 + fVar49 * fVar30) * fVar69;
            fVar43 = fVar68 * (fVar49 * fVar38 - fVar29 * fVar30);
            fVar46 = fVar69 * (fVar33 * fVar30 - fVar48);
            fVar29 = fVar67 * (fVar49 * fVar30 - fVar29 * fVar38);
            fVar48 = (float)((uint)((_DAT_146866090 - (fVar41 * fVar30 + fVar33 * fVar38)) * fVar67)
                            & _DAT_1468660a0);
            fVar49 = (float)((uint)((fRam0000000146866094 - (fVar41 * fVar30 + fVar45)) * fVar68) &
                            uRam00000001468660a4);
            fVar38 = (float)((uint)((fRam0000000146866098 - (fVar33 * fVar38 + fVar45)) * fVar69) &
                            uRam00000001468660a8);
            fVar33 = (float)((uint)((fRam000000014686609c - (fVar45 + fVar45)) * fVar71) &
                            uRam00000001468660ac);
            local_168 = fVar53 * fVar42 + fVar48 * fVar37 + fVar29 * fVar58 + fVar33 * fVar50;
            fStack_164 = fVar53 * fVar51 + fVar48 * fVar56 + fVar29 * fVar44 + fVar33 * fVar36;
            fStack_160 = fVar53 * fVar57 + fVar48 * fVar52 + fVar29 * fVar63 + fVar33 * fVar35;
            fStack_15c = fVar53 * fVar31 + fVar48 * fVar31 + fVar29 * fVar31 +
                         fVar33 * fRam000000014686609c;
            local_158 = fVar49 * fVar42 + fVar43 * fVar37 + fVar54 * fVar58 + fVar33 * fVar50;
            fStack_154 = fVar49 * fVar51 + fVar43 * fVar56 + fVar54 * fVar44 + fVar33 * fVar36;
            fStack_150 = fVar49 * fVar57 + fVar43 * fVar52 + fVar54 * fVar63 + fVar33 * fVar35;
            fStack_14c = fVar49 * fVar31 + fVar43 * fVar31 + fVar54 * fVar31 +
                         fVar33 * fRam000000014686609c;
            local_148 = fVar46 * fVar42 + fVar55 * fVar37 + fVar38 * fVar58 + fVar33 * fVar50;
            fStack_144 = fVar46 * fVar51 + fVar55 * fVar56 + fVar38 * fVar44 + fVar33 * fVar36;
            fStack_140 = fVar46 * fVar57 + fVar55 * fVar52 + fVar38 * fVar63 + fVar33 * fVar35;
            fStack_13c = fVar46 * fVar31 + fVar55 * fVar31 + fVar38 * fVar31 +
                         fVar33 * fRam000000014686609c;
            local_138 = fVar66 * fVar42 + fVar40 * fVar37 + fVar64 * fVar58 +
                        fRam000000014686609c * fVar50;
            fStack_134 = fVar66 * fVar51 + fVar40 * fVar56 + fVar64 * fVar44 +
                         fRam000000014686609c * fVar36;
            fStack_130 = fVar66 * fVar57 + fVar40 * fVar52 + fVar64 * fVar63 +
                         fRam000000014686609c * fVar35;
            fStack_12c = fVar66 * fVar31 + fVar40 * fVar31 + fVar64 * fVar31 +
                         fRam000000014686609c * fRam000000014686609c;
            FMatrix::RemoveScaling(&local_168);
            fVar64 = (float)(-(uint)(local_118 <= fVar65 * fVar67) & (_DAT_1468660e0 ^ (uint)fVar24)
                            ^ _DAT_1468660e0);
            fVar66 = (float)(-(uint)(fStack_114 <= fVar39 * fVar68) &
                             (uRam00000001468660e4 ^ (uint)fVar32) ^ uRam00000001468660e4);
            fVar40 = (float)(-(uint)(fStack_110 <= fVar47 * fVar69) &
                             (uRam00000001468660e8 ^ (uint)fVar34) ^ uRam00000001468660e8);
            local_168 = local_168 * fVar64;
            fStack_164 = fStack_164 * fVar64;
            fStack_160 = fStack_160 * fVar64;
            fStack_154 = fStack_154 * fVar66;
            fStack_150 = fStack_150 * fVar66;
            local_158 = local_158 * fVar66;
            fStack_144 = fStack_144 * fVar40;
            fStack_140 = fStack_140 * fVar40;
            local_148 = local_148 * fVar40;
            FQuat::FQuat(&local_d8,&local_168);
            auVar28._0_4_ = local_d8 * local_d8 + fStack_d0 * fStack_d0;
            auVar28._4_4_ = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc;
            auVar28._8_4_ = fStack_d0 * fStack_d0 + local_d8 * local_d8;
            auVar28._12_4_ = fStack_cc * fStack_cc + fStack_d4 * fStack_d4;
            fVar48 = auVar28._4_4_ + auVar28._0_4_;
            fVar49 = auVar28._8_4_ + auVar28._4_4_;
            fVar51 = auVar28._12_4_ + auVar28._8_4_;
            fVar36 = auVar28._0_4_ + auVar28._12_4_;
            auVar6._4_4_ = fVar49;
            auVar6._0_4_ = fVar48;
            auVar6._8_4_ = fVar51;
            auVar6._12_4_ = fVar36;
            auVar17 = rsqrtps(auVar28,auVar6);
            fVar64 = auVar17._0_4_;
            fVar66 = auVar17._4_4_;
            fVar40 = auVar17._8_4_;
            fVar50 = auVar17._12_4_;
            fVar64 = ((float)local_128 - fVar64 * fVar64 * fVar48 * (float)local_128) * fVar64 +
                     fVar64;
            fVar66 = (local_128._4_4_ - fVar66 * fVar66 * fVar49 * local_128._4_4_) * fVar66 +
                     fVar66;
            fVar40 = ((float)uStack_120 - fVar40 * fVar40 * fVar51 * (float)uStack_120) * fVar40 +
                     fVar40;
            fVar50 = (uStack_120._4_4_ - fVar50 * fVar50 * fVar36 * uStack_120._4_4_) * fVar50 +
                     fVar50;
            auVar3._4_4_ = fStack_134;
            auVar3._0_4_ = local_138;
            auVar3._8_4_ = fStack_130;
            local_d8 = (float)(((uint)((((float)local_128 -
                                        fVar64 * fVar64 * fVar48 * (float)local_128) * fVar64 +
                                       fVar64) * local_d8) ^ _DAT_146866070) &
                               -(uint)(1e-08 <= fVar48) ^ _DAT_146866070);
            fStack_d4 = (float)(((uint)(((local_128._4_4_ -
                                         fVar66 * fVar66 * fVar49 * local_128._4_4_) * fVar66 +
                                        fVar66) * fStack_d4) ^ uRam0000000146866074) &
                                -(uint)(1e-08 <= fVar49) ^ uRam0000000146866074);
            fStack_d0 = (float)(((uint)((((float)uStack_120 -
                                         fVar40 * fVar40 * fVar51 * (float)uStack_120) * fVar40 +
                                        fVar40) * fStack_d0) ^ uRam0000000146866078) &
                                -(uint)(1e-08 <= fVar51) ^ uRam0000000146866078);
            fStack_cc = (float)(((uint)(((uStack_120._4_4_ -
                                         fVar50 * fVar50 * fVar36 * uStack_120._4_4_) * fVar50 +
                                        fVar50) * fStack_cc) ^ uRam000000014686607c) &
                                -(uint)(1e-08 <= fVar36) ^ uRam000000014686607c);
            auVar3._12_4_ = 0;
            *(undefined1 (*) [16])(lVar1 + 0x70) = auVar3;
            *(float *)(lVar1 + 0x80) = fVar65 * fVar67;
            *(float *)(lVar1 + 0x84) = fVar39 * fVar68;
            *(float *)(lVar1 + 0x88) = fVar47 * fVar69;
            *(float *)(lVar1 + 0x8c) = fVar70 * fVar71;
            *(float *)(lVar1 + 0x60) = local_d8;
            *(float *)(lVar1 + 100) = fStack_d4;
            *(float *)(lVar1 + 0x68) = fStack_d0;
            *(float *)(lVar1 + 0x6c) = fStack_cc;
          }
        }
        else {
          *(float *)(lVar1 + 0x60) = fVar55;
          *(float *)(lVar1 + 100) = fVar56;
          *(float *)(lVar1 + 0x68) = fVar57;
          *(float *)(lVar1 + 0x6c) = fVar63;
          *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x40);
          *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x48);
          *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar1 + 0x50);
          *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(lVar1 + 0x58);
        }
        plVar13 = (longlong *)FUN_140a2bea0(lVar1,param_2,param_3);
        plVar15 = plVar15 + 1;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar14);
    }
  }
  return;
}



// FUNCTION 140a2d370 FUN_140a2d370 body=419 status=ok
// SIG undefined FUN_140a2d370(void)

void FUN_140a2d370(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *local_28;
  int local_20;
  
  if ((param_2 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 != 0)
     ) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 200);
    if ((lVar1 != 0) && (lVar7 = UWorld::GetGameState<APVPGameState>(lVar6), lVar7 != 0)) {
      uVar8 = ALevelScriptActor::GetPrivateStaticClass();
      lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
      if (lVar9 != 0) {
        if ((*(byte *)(lVar9 + 0x311) & 2) != 0) {
          return;
        }
        *(byte *)(lVar9 + 0x311) = *(byte *)(lVar9 + 0x311) | 2;
      }
      uVar4 = FHTTPChunkInstall::GetInstallSpeed(lVar7);
      UWorld::GetPlayerControllerIterator(lVar6,&local_28);
      while( true ) {
        if ((local_20 < 0) || ((int)local_28[1] <= local_20)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        lVar6 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
        if (lVar6 != 0) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (lVar7 = FUN_140cffa10(lVar6), lVar7 != 0)) &&
             (cVar3 = FUN_140cfdb70(lVar6), cVar3 == '\0')) {
            uVar5 = FUN_140a2e480(param_1,lVar6,param_2,uVar4,lVar1);
            FUN_140e421f0(lVar7,uVar5,1);
          }
        }
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140a2d520 FUN_140a2d520 body=655 status=ok
// SIG undefined FUN_140a2d520(void)

void FUN_140a2d520(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  longlong *local_58;
  int local_50;
  
  if ((param_1 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_1 + 0x148))(), lVar4 != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 200);
    if ((lVar1 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar4), lVar5 != 0)) {
      iVar3 = FHTTPChunkInstall::GetInstallSpeed(lVar5);
      UWorld::GetPlayerControllerIterator(lVar4,&local_58);
      while( true ) {
        if ((local_50 < 0) || ((int)local_58[1] <= local_50)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        lVar4 = FWeakObjectPtr::Get(*local_58 + (longlong)local_50 * 8);
        if (lVar4 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = FUN_140cffa10(lVar4), lVar5 != 0)) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_2,local_res8,lVar4);
            if ((local_res8[0] == -1) ||
               (lVar4 = *param_2 + (longlong)local_res8[0] * 0x18, lVar4 == 0)) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar9 = (undefined4 *)(lVar4 + 8);
            }
            uVar6 = GetTransientPackage();
            FUN_1417846f0(uVar6,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar7 = FUN_1414e1020();
            lVar4 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
            *(longlong **)(lVar4 + 0x28) = param_1;
            if (puVar9 == (undefined4 *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *puVar9;
            }
            *(undefined4 *)(lVar4 + 0x30) = uVar8;
            fVar10 = (float)FUN_142c98860(lVar1 + 200,lVar4);
            lVar4 = (longlong)iVar3 + -1;
            fVar12 = 1.0;
            fVar11 = 0.0;
            if ((lVar4 < 0) || (*(int *)(lVar1 + 0xb8) <= iVar3 + -1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              fVar12 = *(float *)(*(longlong *)(lVar1 + 0xb0) + 8 + lVar4 * 0xc);
              fVar11 = *(float *)(*(longlong *)(lVar1 + 0xb0) + 4 + lVar4 * 0xc);
            }
            FUN_140e421f0(lVar5,(int)(fVar10 * (fVar11 + fVar12)),1);
          }
        }
        local_50 = local_50 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140a2d7b0 FUN_140a2d7b0 body=27 status=ok
// SIG undefined FUN_140a2d7b0(void)

void FUN_140a2d7b0(undefined8 param_1)

{
  FUN_140a40320();
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 140a2d7d0 FUN_140a2d7d0 body=2207 status=ok
// SIG undefined FUN_140a2d7d0(void)

void FUN_140a2d7d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_142223710();
  iVar9 = *(int *)(param_1 + 0x698);
  *(int *)(param_1 + 0x698) = iVar9 + 3;
  if (*(int *)(param_1 + 0x69c) < iVar9 + 3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x690);
  }
  lVar17 = *(longlong *)(param_1 + 0x690);
  *(undefined8 *)(lVar17 + (longlong)iVar9 * 4) = 0;
  *(undefined4 *)(lVar17 + 8 + (longlong)iVar9 * 4) = 0;
  FUN_140a39b80(param_1,*(undefined8 *)(param_1 + 0x4c0),0);
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FUN_140ebfa50(*(longlong *)(param_1 + 0x5a0),&DAT_1468b5da0,1,0,1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_Tire0",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"TireTrack0",1);
  uVar3 = *puVar10;
  plVar18 = (longlong *)(param_1 + 0x630);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar1 = *(undefined4 *)(param_1 + 0x500);
  uVar4 = *puVar11;
  local_88 = 3;
  local_6c = 0x44fa0000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 3;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x44fa0000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar14 + 0x28,&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_Tire1",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"TireTrack1",1);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar3 = *puVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x500);
  uVar4 = *puVar11;
  local_88 = 4;
  local_6c = 0x44fa0000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 4;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x44fa0000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar14 + 0x28,&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_Tire2",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"TireTrack2",1);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar3 = *puVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x500);
  uVar4 = *puVar11;
  local_88 = 5;
  local_6c = 0x44fa0000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 5;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x44fa0000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar14 + 0x28,&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_Tire3",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"TireTrack3",1);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar3 = *puVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x500);
  uVar4 = *puVar11;
  local_88 = 6;
  local_6c = 0x44fa0000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 6;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x44fa0000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar14 + 0x28,&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_FrontWheel0",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"FrontWheel0",1);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar3 = *puVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x504);
  uVar4 = *puVar11;
  local_88 = 0;
  local_6c = 0x459c4000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 0;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x459c4000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar14 + 0x28,&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_FrontWheel1",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"FrontWheel1",1);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar3 = *puVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x504);
  uVar4 = *puVar11;
  local_88 = 1;
  local_6c = 0x459c4000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 1;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x459c4000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar14 + 0x28,&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  puVar10 = (undefined8 *)FName::FName(&local_res8,L"StaticSocket_FrontWheel2",1);
  puVar11 = (undefined8 *)FName::FName(&local_res10,L"FrontWheel2",1);
  iVar9 = *(int *)(param_1 + 0x638);
  uVar3 = *puVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x504);
  uVar4 = *puVar11;
  local_88 = 2;
  local_6c = 0x459c4000;
  local_60 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x638) = iVar9 + 1;
  local_80 = uVar4;
  local_78 = uVar3;
  local_70 = uVar1;
  local_68 = uVar2;
  if (*(int *)(param_1 + 0x63c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar18,iVar9);
  }
  puVar14 = (undefined1 *)((longlong)iVar9 * 0x38 + *plVar18);
  *(undefined4 *)(puVar14 + 0x18) = uVar1;
  *puVar14 = 2;
  *(undefined8 *)(puVar14 + 8) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar3;
  *(undefined4 *)(puVar14 + 0x1c) = 0x459c4000;
  *(undefined8 *)(puVar14 + 0x20) = uVar2;
  *(undefined8 *)(puVar14 + 0x28) = 0;
  *(undefined4 *)(puVar14 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=();
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  lVar17 = (longlong)*(int *)(param_1 + 0x4f8);
  iVar9 = *(int *)(param_1 + 0x4f8) + 7;
  *(int *)(param_1 + 0x4f8) = iVar9;
  if (*(int *)(param_1 + 0x4fc) < iVar9) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x4f0);
  }
  lVar13 = *(longlong *)(param_1 + 0x4f0);
  *(undefined8 *)(lVar13 + lVar17 * 4) = 0;
  *(undefined8 *)(lVar13 + 8 + lVar17 * 4) = 0;
  *(undefined8 *)(lVar13 + 0x10 + lVar17 * 4) = 0;
  *(undefined4 *)(lVar13 + 0x18 + lVar17 * 4) = 0;
  lVar17 = (longlong)*(int *)(param_1 + 0x648);
  iVar9 = *(int *)(param_1 + 0x648) + 4;
  *(int *)(param_1 + 0x648) = iVar9;
  if (*(int *)(param_1 + 0x64c) < iVar9) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x640);
  }
  lVar13 = *(longlong *)(param_1 + 0x640);
  *(undefined8 *)(lVar13 + lVar17 * 0xc) = 0;
  *(undefined8 *)(lVar13 + 8 + lVar17 * 0xc) = 0;
  *(undefined8 *)(lVar13 + 0x10 + lVar17 * 0xc) = 0;
  *(undefined8 *)(lVar13 + 0x18 + lVar17 * 0xc) = 0;
  *(undefined8 *)(lVar13 + 0x20 + lVar17 * 0xc) = 0;
  *(undefined8 *)(lVar13 + 0x28 + lVar17 * 0xc) = 0;
  local_98 = FUN_140a379b0;
  uStack_90._0_4_ = 0;
  FUN_140a23010(param_1 + 0x680,param_1,&local_98,0);
  local_98 = FUN_140a379b0;
  uStack_90._0_4_ = 0;
  FUN_140a23010(param_1 + 0x650,param_1,&local_98,1);
  local_98 = FUN_140a379b0;
  uStack_90._0_4_ = 0;
  FUN_140a23010(param_1 + 0x670,param_1,&local_98,2);
  local_98 = FUN_140a379b0;
  uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
  FUN_140a23010(param_1 + 0x660,param_1,&local_98,3);
  *(undefined1 *)(param_1 + 0x5ac) = 0;
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ACarnivora::OnComponentHitCallback",L"::");
  pwVar7 = (wchar_t *)0x0;
  while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar7 = pwVar6;
  }
  FName::FName(&local_res10,pwVar7 + 2,1);
  lVar17 = *(longlong *)(param_1 + 0x510);
  plVar18 = (longlong *)(lVar17 + 0x560);
  FWeakObjectPtr::operator=(&local_98,0);
  uStack_90 = 0;
  FWeakObjectPtr::operator=(&local_98,param_1);
  uStack_90 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_98), lVar13 != 0)) {
    UObject::FindFunction(lVar13,uStack_90);
  }
  piVar5 = (int *)*plVar18;
  iVar9 = *(int *)(lVar17 + 0x568);
  piVar16 = piVar5;
  do {
    if (piVar16 == piVar5 + (longlong)iVar9 * 4) {
LAB_140a2e00e:
      iVar9 = *(int *)(lVar17 + 0x568);
      *(int *)(lVar17 + 0x568) = iVar9 + 1;
      if (*(int *)(lVar17 + 0x56c) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar9);
      }
      puVar15 = (undefined4 *)((longlong)iVar9 * 0x10 + *plVar18);
      *puVar15 = (int)local_98;
      puVar15[1] = local_98._4_4_;
      *(longlong *)(puVar15 + 2) = uStack_90;
LAB_140a2e044:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar18);
      return;
    }
    if ((((*piVar16 == (int)local_98) &&
         (local_98._4_4_ = (int)((ulonglong)local_98 >> 0x20), bVar19 = piVar16[1] == local_98._4_4_
         , bVar19)) ||
        ((cVar8 = FWeakObjectPtr::IsValid(piVar16), cVar8 == '\0' &&
         (cVar8 = FWeakObjectPtr::IsValid(&local_98), cVar8 == '\0')))) &&
       (*(longlong *)(piVar16 + 2) == uStack_90)) {
      if ((int)((longlong)piVar16 - (longlong)piVar5 >> 4) != -1) goto LAB_140a2e044;
      goto LAB_140a2e00e;
    }
    piVar16 = piVar16 + 4;
  } while( true );
}



// FUNCTION 140a2e070 FUN_140a2e070 body=27 status=ok
// SIG undefined FUN_140a2e070(void)

void FUN_140a2e070(undefined8 param_1)

{
  FUN_142223710();
  FUN_140a38d70(param_1);
  return;
}



// FUNCTION 140a2e090 FUN_140a2e090 body=246 status=ok
// SIG undefined FUN_140a2e090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2e090(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146866658) && (_Init_thread_header(&DAT_146866658), DAT_146866658 == -1))
  {
    DAT_146866638 = UInputActionDelegateBinding::GetPrivateStaticClass();
    DAT_146866640 = UInputAxisDelegateBinding::GetPrivateStaticClass();
    _DAT_146866648 = UInputKeyDelegateBinding::GetPrivateStaticClass();
    _DAT_146866650 = UInputAxisKeyDelegateBinding::GetPrivateStaticClass();
    _Init_thread_footer(&DAT_146866658);
  }
  if (param_1 != 0) {
    FUN_140a2e090(*(undefined8 *)(param_1 + 0x30),param_2);
    uVar2 = 0;
    puVar3 = &DAT_146866638;
    do {
      plVar1 = (longlong *)FUN_1422f1ac0(param_1,*puVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 4);
  }
  return;
}



// FUNCTION 140a2e190 FUN_140a2e190 body=145 status=ok
// SIG undefined FUN_140a2e190(void)

void FUN_140a2e190(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x41) == '\x04') && (*(longlong *)(param_1 + 0x38) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x5c4);
    iVar2 = 0;
    if (iVar1 != -1) {
      iVar2 = iVar1;
    }
    lVar3 = FUN_140a332a0(param_1,iVar2);
    if ((lVar3 != 0) && (lVar3 = FUN_140e50ff0(lVar3), lVar3 != 0)) {
      if (iVar1 != -1) {
        uVar4 = *(undefined4 *)(lVar3 + 0x128);
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 0x130);
      }
      *param_2 = uVar4;
      if (iVar1 != -1) {
        uVar4 = *(undefined4 *)(lVar3 + 300);
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 0x134);
      }
      *param_3 = uVar4;
    }
  }
  return;
}



// FUNCTION 140a2e230 FUN_140a2e230 body=578 status=ok
// SIG undefined FUN_140a2e230(void)

float FUN_140a2e230(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float fStack_54;
  float local_48 [16];
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (lVar3 == 0) {
    return 0.0;
  }
  lVar5 = AHeoCon::GetPrivateStaticClass();
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
    return 0.0;
  }
  lVar3 = *(longlong *)(lVar3 + 0x900);
  if (lVar3 == 0) {
    return 0.0;
  }
  if (((*(byte *)(lVar3 + 0x420) & 1) == 0) || ((*(byte *)(lVar3 + 0x420) & 2) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0.0;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x458);
  fVar2 = *(float *)(lVar3 + 0x460);
  pfVar6 = (float *)FRotator::Vector(param_2 + 0x3c,local_48);
  fVar11 = 0.0;
  fVar13 = pfVar6[1];
  fVar12 = *pfVar6;
  fVar7 = fVar12 * fVar12 + fVar13 * fVar13;
  if (fVar7 == 1.0) {
    if (pfVar6[2] == 0.0) {
      local_48[0] = (float)*(undefined8 *)pfVar6;
      fVar9 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
      fVar8 = pfVar6[2];
      goto LAB_140a2e3d7;
    }
  }
  else {
    fVar9 = DAT_1468b5d94;
    fVar8 = DAT_1468b5d98;
    local_48[0] = DAT_1468b5d90;
    if (fVar7 < 1e-08) goto LAB_140a2e3d7;
    auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar9 = auVar10._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
    fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
    fVar12 = fVar12 * fVar9;
    fVar13 = fVar13 * fVar9;
  }
  fVar9 = fVar13;
  fVar8 = 0.0;
  local_48[0] = fVar12;
LAB_140a2e3d7:
  if (((0.0001 < ABS(local_48[0])) || (0.0001 < ABS(fVar9))) || (0.0001 < ABS(fVar8))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    fStack_54 = (float)((ulonglong)uVar1 >> 0x20);
    local_58 = (float)uVar1;
    fVar11 = fStack_54 * fVar9 + local_58 * local_48[0] + fVar2 * fVar8;
  }
  return fVar11 * 180.0;
}



// FUNCTION 140a2e480 FUN_140a2e480 body=755 status=ok
// SIG undefined FUN_140a2e480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140a2e480(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,longlong param_5
                 )

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_98 [32];
  int local_78;
  longlong *local_70;
  int local_68;
  char local_64;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar12 = (longlong *)0x0;
  plVar7 = plVar12;
  local_78 = param_4;
  local_70 = param_2;
  if (param_2 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_140cffa10(param_2);
  }
  plVar9 = plVar12;
  if (param_3 != (longlong *)0x0) {
    uVar8 = FUN_142dfdf30();
    plVar9 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar8);
  }
  if (plVar7 == (longlong *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = (**(code **)(*plVar7 + 0x408))(plVar7);
  }
  iVar4 = 1;
  if ((plVar9 != (longlong *)0x0) &&
     (((((lVar10 = plVar9[0x24], lVar10 == 0 && (lVar10 = FUN_1423407b0(plVar9), lVar10 == 0)) ||
        (lVar10 = UWorld::GetGameState<APVPGameState>(lVar10), lVar10 == 0)) ||
       ((*(char *)(lVar10 + 0x6c1) != '\0' || (*(char *)(lVar10 + 0x6c2) == '\0')))) ||
      (FUN_140cd8d10(lVar10,&local_68,plVar7,plVar9), iVar4 = local_68, local_64 == '\0')))) {
    iVar4 = (**(code **)(*plVar9 + 0x408))(plVar9);
  }
  iVar6 = 0;
  if (param_3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_142dfdf30();
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar8);
    if ((plVar7 != (longlong *)0x0) &&
       (iVar5 = (**(code **)(*plVar7 + 0x408))(plVar7), iVar4 != iVar5)) {
      iVar6 = (**(code **)(*plVar7 + 0x408))(plVar7);
      iVar5 = FUN_14233f450(plVar7);
      if (iVar5 == 3) {
        iVar5 = iVar4;
        if (iVar4 < 2) {
          iVar5 = 1;
        }
        *(int *)(plVar7 + 0x35) = iVar5;
      }
    }
  }
  fVar14 = (float)FUN_142c98860(param_5 + 0x30,param_3);
  if (((plVar7 != (longlong *)0x0) && (0 < iVar6)) && (iVar5 = FUN_14233f450(plVar7), iVar5 == 3)) {
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(plVar7 + 0x35) = iVar6;
  }
  if (param_1 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    lVar10 = (**(code **)(*param_1 + 0x690))(param_1);
    bVar13 = lVar10 != 0;
  }
  if (param_3 != (longlong *)0x0) {
    lVar10 = FUN_14148cad0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar12 = param_3;
    }
  }
  if ((bVar13) && (plVar12 == (longlong *)0x0)) {
    fVar15 = (float)FUN_142c98860(param_5 + 0x78,param_3);
    fVar14 = fVar15 * fVar14;
  }
  fVar17 = 0.0;
  fVar16 = 1.0;
  fVar15 = 1.0;
  if ((local_78 + -1 < 0) || (*(int *)(param_5 + 0xb8) <= local_78 + -1)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (bVar13) {
    fVar15 = *(float *)(*(longlong *)(param_5 + 0xb0) + -4 + (longlong)local_78 * 0xc);
    fVar17 = *(float *)(*(longlong *)(param_5 + 0xb0) + -8 + (longlong)local_78 * 0xc);
  }
  if (local_70 == param_1) {
    fVar15 = fVar17 + fVar15;
  }
  uVar11 = iVar3 - iVar4 >> 0x1f;
  iVar6 = (iVar3 - iVar4 ^ uVar11) - uVar11;
  if (0 < iVar6) {
    iVar5 = *(int *)(param_5 + 0x70);
    iVar1 = iVar5;
    if (iVar6 <= iVar5) {
      iVar1 = iVar6;
    }
    if ((iVar1 + -1 < 0) || (iVar5 <= iVar1 + -1)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      if (iVar3 < iVar4) {
        fVar16 = *(float *)(*(longlong *)(param_5 + 0x68) + -8 + (longlong)iVar1 * 0xc);
      }
      else if (iVar4 < iVar3) {
        fVar16 = *(float *)(*(longlong *)(param_5 + 0x68) + -4 + (longlong)iVar1 * 0xc);
      }
    }
  }
  return (int)(fVar15 * fVar14 * fVar16);
}



// FUNCTION 140a2e780 FUN_140a2e780 body=1466 status=ok
// SIG undefined FUN_140a2e780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2e780(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,char param_5,
                  longlong param_6)

{
  undefined8 uVar1;
  float *pfVar2;
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
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [64];
  undefined1 local_c8 [176];
  
  if (((*(float *)(param_1 + 0x840) <= *(float *)(param_6 + 8) &&
        *(float *)(param_6 + 8) != *(float *)(param_1 + 0x840)) && (param_5 != '\0')) &&
     (*(char *)(param_1 + 0x844) == '\0')) {
    uVar1 = FRotationMatrix::MakeFromZX(local_108,param_3,&DAT_1464aa7a8);
    pfVar2 = (float *)FMatrix::ToQuat(uVar1,&local_128);
    fVar10 = pfVar2[2];
    fVar12 = -pfVar2[1];
    fVar12 = fVar12 + fVar12;
    fVar9 = fVar10 + fVar10;
    local_138 = (fVar12 * pfVar2[1] - fVar9 * fVar10) + 1.0;
    local_130 = *pfVar2 * fVar9 + fVar12 * pfVar2[3];
    local_134 = fVar9 * pfVar2[3] - *pfVar2 * fVar12;
    uVar1 = FRotationMatrix::MakeFromXZ(local_c8,&local_138,&DAT_1464aa798);
    FMatrix::ToQuat(uVar1,&local_118);
    *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x840);
    *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0x840);
    *(undefined1 *)(param_1 + 0x844) = 1;
    pfVar2 = (float *)FUN_140a33340(param_1,&local_128,param_2,param_4,&DAT_1464aa810);
    fVar9 = *(float *)(param_2 + 0x30) - *pfVar2;
    fVar12 = *(float *)(param_2 + 0x34) - pfVar2[1];
    fVar18 = *(float *)(param_2 + 0x38) - pfVar2[2];
    fVar10 = -fVar9 * *param_3 + -fVar12 * param_3[1] + -fVar18 * param_3[2];
    local_138 = -fVar9 - *param_3 * fVar10;
    local_134 = -fVar12 - param_3[1] * fVar10;
    local_130 = -fVar18 - param_3[2] * fVar10;
    fVar10 = local_134 * local_134 + local_138 * local_138 + local_130 * local_130;
    if (1e-08 < fVar10) {
      auVar14 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar13 = auVar14._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar10 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar10 * 0.5 * fVar13 * fVar13);
      local_138 = local_138 * fVar13;
      local_134 = local_134 * fVar13;
      local_130 = local_130 * fVar13;
    }
    fVar10 = local_110 + local_110;
    fVar13 = -local_114 + -local_114;
    local_128 = (fVar13 * local_114 - fVar10 * local_110) + 1.0;
    local_120 = fVar13 * local_10c + fVar10 * local_118;
    local_124 = fVar10 * local_10c - fVar13 * local_118;
    fVar10 = (float)FUN_140a34400(&local_128,&local_138,param_3);
    *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x204);
    *(float *)(param_1 + 0x89c) = fVar10 * 57.295776;
    *(float *)(param_1 + 0x8a4) = -SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar18 * fVar18);
    FUN_140a31d60(param_1,param_2,param_1 + 0x89c,param_3,param_4,&local_128,&local_138);
    fVar12 = local_130 + local_130;
    fVar16 = -local_134;
    fVar13 = local_128 - *(float *)(param_2 + 0x30);
    fVar10 = *(float *)(param_2 + 0x34);
    fVar9 = *(float *)(param_2 + 0x38);
    fVar15 = fVar16 + fVar16;
    fVar11 = (fVar15 * local_134 - fVar12 * local_130) + 1.0;
    fVar18 = fVar13 / fVar11;
    fVar19 = -local_138;
    *(float *)(param_1 + 0x8a4) = *(float *)(param_1 + 0x8a4) - fVar18;
    fVar17 = -local_130;
    local_120 = (fVar15 * local_12c + fVar12 * local_138) * fVar18 - (local_120 - fVar9);
    *(ulonglong *)(param_1 + 0x86c) =
         CONCAT44((fVar12 * local_12c - fVar15 * local_138) * fVar18 - (local_124 - fVar10),
                  fVar11 * fVar18 - fVar13);
    *(float *)(param_1 + 0x874) = local_120;
    pfVar2 = (float *)FRotator::Quaternion(param_2 + 0x3c,&local_128);
    fVar10 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar12 = pfVar2[2];
    fVar18 = pfVar2[3];
    fVar6 = fVar12 * fVar19 * fRam00000001468660d4;
    fVar7 = fVar9 * fVar19 * fRam00000001468660d8;
    fVar8 = fVar10 * fVar19 * fRam00000001468660dc;
    fVar13 = fVar18 * fVar16 * fRam00000001468660c4;
    fVar11 = fVar10 * fVar16 * fRam00000001468660c8;
    fVar15 = fVar9 * fVar16 * fRam00000001468660cc;
    fVar3 = fVar10 * fVar17 * fRam00000001468660b4;
    fVar4 = fVar18 * fVar17 * fRam00000001468660b8;
    fVar5 = fVar12 * fVar17 * fRam00000001468660bc;
    *(float *)(param_1 + 0x880) =
         fVar18 * fVar19 * _DAT_1468660d0 + local_12c * fVar10 + fVar12 * fVar16 * _DAT_1468660c0 +
         fVar9 * fVar17 * _DAT_1468660b0;
    *(float *)(param_1 + 0x884) = fVar6 + local_12c * fVar9 + fVar13 + fVar3;
    *(float *)(param_1 + 0x888) = fVar7 + local_12c * fVar12 + fVar11 + fVar4;
    *(float *)(param_1 + 0x88c) = fVar8 + local_12c * fVar18 + fVar15 + fVar5;
    *(undefined8 *)(param_1 + 0x938) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x940) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x944) = 0;
  }
  return;
}



// FUNCTION 140a2ed40 FUN_140a2ed40 body=618 status=ok
// SIG undefined FUN_140a2ed40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2ed40(longlong param_1,float *param_2,float *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [128];
  
  *param_5 = _DAT_1468b5d90;
  *(undefined4 *)(param_5 + 1) = DAT_1468b5d98;
  *param_6 = DAT_1468b5da0;
  *(undefined4 *)(param_6 + 1) = DAT_1468b5da8;
  if (param_4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_4 + 0x748))(param_4);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x748))();
      fVar1 = *(float *)(lVar5 + 0x210);
      fVar2 = *(float *)(lVar5 + 0x214);
      fVar3 = *(float *)(lVar5 + 0x218);
      fVar4 = *(float *)(lVar5 + 0x21c);
      fVar11 = *param_2 * *(float *)(lVar5 + 0x230);
      fVar13 = param_2[1] * *(float *)(lVar5 + 0x234);
      fVar15 = param_2[2] * *(float *)(lVar5 + 0x238);
      fVar8 = fVar15 * fVar2 - fVar13 * fVar3;
      fVar9 = fVar11 * fVar3 - fVar15 * fVar1;
      fVar10 = fVar13 * fVar1 - fVar11 * fVar2;
      fVar8 = fVar8 + fVar8;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar12 = *param_3 * *(float *)(lVar5 + 0x230);
      fVar14 = param_3[1] * *(float *)(lVar5 + 0x234);
      fVar16 = param_3[2] * *(float *)(lVar5 + 0x238);
      local_a8 = (fVar10 * fVar2 - fVar9 * fVar3) + fVar4 * fVar8 + fVar11 +
                 *(float *)(lVar5 + 0x220);
      local_a4 = (fVar8 * fVar3 - fVar10 * fVar1) + fVar4 * fVar9 + fVar13 +
                 *(float *)(lVar5 + 0x224);
      local_a0 = (fVar9 * fVar1 - fVar8 * fVar2) + fVar4 * fVar10 + fVar15 +
                 *(float *)(lVar5 + 0x228);
      fVar11 = fVar16 * fVar2 - fVar14 * fVar3;
      fVar13 = fVar12 * fVar3 - fVar16 * fVar1;
      fVar15 = fVar14 * fVar1 - fVar12 * fVar2;
      fVar11 = fVar11 + fVar11;
      fVar13 = fVar13 + fVar13;
      fVar15 = fVar15 + fVar15;
      fVar8 = *(float *)(lVar5 + 0x220);
      fVar9 = *(float *)(lVar5 + 0x224);
      fVar10 = *(float *)(lVar5 + 0x228);
      *param_5 = CONCAT44(local_a4,local_a8);
      *(float *)(param_5 + 1) = local_a0;
      local_a8 = ((fVar15 * fVar2 - fVar13 * fVar3) + fVar4 * fVar11 + fVar12 + fVar8) - local_a8;
      local_a4 = ((fVar11 * fVar3 - fVar15 * fVar1) + fVar4 * fVar13 + fVar14 + fVar9) - local_a4;
      local_a0 = ((fVar13 * fVar1 - fVar11 * fVar2) + fVar4 * fVar15 + fVar16 + fVar10) - local_a0;
      uVar6 = FRotationMatrix::MakeFromX(local_88,&local_a8);
      puVar7 = (undefined8 *)FMatrix::Rotator(uVar6,local_98);
      *param_6 = *puVar7;
      *(undefined4 *)(param_6 + 1) = *(undefined4 *)(puVar7 + 1);
    }
  }
  return;
}



// FUNCTION 140a2efb0 FUN_140a2efb0 body=479 status=ok
// SIG undefined FUN_140a2efb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2efb0(longlong param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0xaa) != '\0') {
    local_48 = uVar3;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      uVar3 = FUN_140a2efb0();
    }
    if (*(char *)(param_1 + 0xa8) == '\0') {
      auVar6 = *(undefined1 (*) [16])(param_1 + 0x80);
      fVar10 = auVar6._0_4_;
      fVar11 = auVar6._4_4_;
      fVar12 = auVar6._8_4_;
      fVar13 = auVar6._12_4_;
      auVar5._0_4_ = (float)((uint)fVar10 & _DAT_146866130);
      auVar5._4_4_ = (float)((uint)fVar11 & uRam0000000146866134);
      auVar5._8_4_ = (float)((uint)fVar12 & uRam0000000146866138);
      auVar5._12_4_ = (float)((uint)fVar13 & uRam000000014686613c);
      auVar1._4_4_ = -(uint)(fRam0000000146866144 < auVar5._4_4_);
      auVar1._0_4_ = -(uint)(_DAT_146866140 < auVar5._0_4_);
      auVar1._8_4_ = -(uint)(fRam0000000146866148 < auVar5._8_4_);
      auVar1._12_4_ = -(uint)(fRam000000014686614c < auVar5._12_4_);
      iVar2 = movmskps((int)uVar3,auVar1);
      if (iVar2 == 0) {
        local_78 = _DAT_1468b5b70;
        uStack_70 = uRam00000001468b5b78;
        local_58 = _DAT_1468b5b90;
        fStack_54 = fRam00000001468b5b94;
        fStack_50 = fRam00000001468b5b98;
        fStack_4c = fRam00000001468b5b9c;
        local_68 = _DAT_1468b5b80;
        uStack_60 = uRam00000001468b5b88;
      }
      else {
        auVar6 = rcpps(auVar5,auVar6);
        fVar4 = auVar6._0_4_;
        fVar7 = auVar6._4_4_;
        fVar8 = auVar6._8_4_;
        fVar9 = auVar6._12_4_;
        fVar14 = *(float *)(param_1 + 0x60) * _DAT_146866150;
        fVar15 = *(float *)(param_1 + 100) * fRam0000000146866154;
        fVar16 = *(float *)(param_1 + 0x68) * fRam0000000146866158;
        fVar17 = *(float *)(param_1 + 0x6c) * fRam000000014686615c;
        local_78 = CONCAT44(fVar15,fVar14);
        uStack_70 = CONCAT44(fVar17,fVar16);
        fVar4 = (fVar4 + fVar4) - fVar4 * fVar4 * fVar10;
        fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar11;
        fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar12;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar13;
        fVar4 = (fVar4 + fVar4) - fVar4 * fVar4 * fVar10;
        fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar11;
        fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar12;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar13;
        local_58 = (float)((-(uint)((float)((uint)fVar10 & _DAT_146866130) <= _DAT_146866140) &
                            (uint)fVar4 ^ (uint)fVar4) & _DAT_1468660a0);
        fStack_54 = (float)((-(uint)((float)((uint)fVar11 & uRam0000000146866134) <=
                                    fRam0000000146866144) & (uint)fVar7 ^ (uint)fVar7) &
                           uRam00000001468660a4);
        fStack_50 = (float)((-(uint)((float)((uint)fVar12 & uRam0000000146866138) <=
                                    fRam0000000146866148) & (uint)fVar8 ^ (uint)fVar8) &
                           uRam00000001468660a8);
        fStack_4c = (float)((-(uint)((float)((uint)fVar13 & uRam000000014686613c) <=
                                    fRam000000014686614c) & (uint)fVar9 ^ (uint)fVar9) &
                           uRam00000001468660ac);
        fVar4 = *(float *)(param_1 + 0x70) * local_58;
        fVar7 = *(float *)(param_1 + 0x74) * fStack_54;
        fVar8 = *(float *)(param_1 + 0x78) * fStack_50;
        fVar9 = *(float *)(param_1 + 0x7c) * fStack_4c;
        fVar10 = fVar8 * fVar15 - fVar7 * fVar16;
        fVar11 = fVar4 * fVar16 - fVar8 * fVar14;
        fVar12 = fVar7 * fVar14 - fVar4 * fVar15;
        fVar13 = fVar9 * fVar17 - fVar9 * fVar17;
        fVar10 = fVar10 + fVar10;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        local_68 = CONCAT44((uint)(0.0 - ((fVar10 * fVar16 - fVar12 * fVar14) +
                                         fVar17 * fVar11 + fVar7)) & uRam00000001468660a4,
                            (uint)(0.0 - ((fVar12 * fVar15 - fVar11 * fVar16) +
                                         fVar17 * fVar10 + fVar4)) & _DAT_1468660a0);
        uStack_60 = CONCAT44((uint)(0.0 - ((fVar13 * fVar17 - fVar13 * fVar17) +
                                          fVar17 * fVar13 + fVar9)) & uRam00000001468660ac,
                             (uint)(0.0 - ((fVar11 * fVar14 - fVar10 * fVar15) +
                                          fVar17 * fVar12 + fVar8)) & uRam00000001468660a8);
      }
      FUN_140a2bea0(param_1,&local_78,param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
  }
  return;
}



// FUNCTION 140a2f190 FUN_140a2f190 body=267 status=ok
// SIG undefined FUN_140a2f190(void)

int FUN_140a2f190(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float _Y;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 0x148);
  iVar5 = 2;
  fVar2 = *(float *)(param_1 + 0x144);
  _Y = *(float *)(param_1 + 0x150);
  fVar3 = *(float *)(param_1 + 0x154);
  fVar4 = *(float *)(param_1 + 0x14c);
  while( true ) {
    fVar8 = _guard_xfg_dispatch_icall_nop((float)iVar5 * fVar1 + fVar2,_Y);
    lVar6 = (longlong)((fVar8 + fVar3) * fVar4);
    if (lVar6 < 0) break;
    fVar8 = _guard_xfg_dispatch_icall_nop(fVar2 + fVar1,_Y);
    uVar7 = lVar6 - (longlong)((fVar8 + fVar3) * fVar4);
    if ((0x7ffffffffffffffe < uVar7) || (param_2 < (longlong)uVar7)) break;
    iVar5 = iVar5 + 1;
    if (0x7ffffffe < iVar5) {
      return 1;
    }
  }
  return iVar5 + -1;
}



// FUNCTION 140a2f2a0 FUN_140a2f2a0 body=202 status=ok
// SIG undefined FUN_140a2f2a0(void)

int FUN_140a2f2a0(longlong param_1,int param_2)

{
  float _Y;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = FUN_142cc0880();
  iVar3 = FUN_142cc2730(uVar5);
  if (0 < iVar3) {
    _Y = *(float *)(param_1 + 0x13c);
    fVar1 = *(float *)(param_1 + 0x140);
    fVar2 = *(float *)(param_1 + 0x138);
    fVar7 = _guard_xfg_dispatch_icall_nop(1.0,_Y);
    do {
      fVar8 = _guard_xfg_dispatch_icall_nop((float)iVar3,_Y);
      iVar6 = (int)((fVar8 + fVar1) * fVar2) - (int)((fVar7 + fVar1) * fVar2);
      iVar4 = 0;
      if (-1 < iVar6) {
        iVar4 = iVar6;
      }
      if (iVar4 <= param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return 1;
}



// FUNCTION 140a2f370 FUN_140a2f370 body=267 status=ok
// SIG undefined FUN_140a2f370(void)

int FUN_140a2f370(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float _Y;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 0x15c);
  iVar5 = 2;
  fVar2 = *(float *)(param_1 + 0x158);
  _Y = *(float *)(param_1 + 0x164);
  fVar3 = *(float *)(param_1 + 0x168);
  fVar4 = *(float *)(param_1 + 0x160);
  while( true ) {
    fVar8 = _guard_xfg_dispatch_icall_nop((float)iVar5 * fVar1 + fVar2,_Y);
    lVar6 = (longlong)((fVar8 + fVar3) * fVar4);
    if (lVar6 < 0) break;
    fVar8 = _guard_xfg_dispatch_icall_nop(fVar2 + fVar1,_Y);
    uVar7 = lVar6 - (longlong)((fVar8 + fVar3) * fVar4);
    if ((0x7ffffffffffffffe < uVar7) || (param_2 < (longlong)uVar7)) break;
    iVar5 = iVar5 + 1;
    if (0x7ffffffe < iVar5) {
      return 1;
    }
  }
  return iVar5 + -1;
}



// FUNCTION 140a2f480 FUN_140a2f480 body=294 status=ok
// SIG undefined FUN_140a2f480(void)

void FUN_140a2f480(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_2 + 1) == -1) {
    FUN_140a393e0();
    *(undefined1 *)(param_1 + 1) = 0xff;
    return;
  }
  switch(*(char *)(param_2 + 1)) {
  case '\0':
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  case '\x01':
    break;
  case '\x02':
    cVar1 = *(char *)(param_1 + 1);
    switch(cVar1) {
    case '\0':
      bVar2 = cVar1 == '\0';
      break;
    case '\x01':
      bVar2 = cVar1 == '\x01';
      break;
    case '\x02':
      bVar2 = cVar1 == '\x02';
      break;
    case '\x03':
    case '\x04':
    case '\x05':
      bVar2 = cVar1 == '\x03';
      break;
    default:
      goto switchD_140a2f524_default;
    }
    if (bVar2) {
      *(undefined1 *)(param_1 + 1) = 0xff;
    }
switchD_140a2f524_default:
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 2;
    return;
  case '\x03':
  case '\x04':
  case '\x05':
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  default:
    LowLevelFatalErrorHandler("Unknown",0x172,L"Unrecognized TUnion subtype");
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x172,L"Unrecognized TUnion subtype");
    return;
  }
  cVar1 = *(char *)(param_1 + 1);
  switch(cVar1) {
  case '\0':
    bVar2 = cVar1 == '\0';
    break;
  case '\x01':
    bVar2 = cVar1 == '\x01';
    break;
  case '\x02':
    bVar2 = cVar1 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar2 = cVar1 == '\x03';
    break;
  default:
    goto switchD_140a2f4e4_default;
  }
  if (bVar2) {
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
switchD_140a2f4e4_default:
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 140a2f5f0 FUN_140a2f5f0 body=472 status=ok
// SIG undefined FUN_140a2f5f0(void)

void FUN_140a2f5f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_140a29610(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  uVar4 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xfc) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0x10c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(byte *)(param_1 + 0x138) =
       *(byte *)(param_1 + 0x138) ^ (*(byte *)(param_2 + 0x138) ^ *(byte *)(param_1 + 0x138)) & 1;
  return;
}



// FUNCTION 140a2f7d0 FUN_140a2f7d0 body=92 status=ok
// SIG undefined FUN_140a2f7d0(void)

void FUN_140a2f7d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441f1988;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1441f19d0;
  }
  return;
}



// FUNCTION 140a2f830 FUN_140a2f830 body=84 status=ok
// SIG undefined FUN_140a2f830(void)

void FUN_140a2f830(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441f1868;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1441f18b0;
  }
  return;
}



// FUNCTION 140a2f890 FUN_140a2f890 body=78 status=ok
// SIG undefined FUN_140a2f890(void)

void FUN_140a2f890(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441f18f8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1441f1940;
  }
  return;
}



// FUNCTION 140a2f8e0 FUN_140a2f8e0 body=36 status=ok
// SIG undefined FUN_140a2f8e0(void)

void FUN_140a2f8e0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_140a25850(lVar1);
    return;
  }
  return;
}



// FUNCTION 140a2f910 FUN_140a2f910 body=260 status=ok
// SIG undefined FUN_140a2f910(void)

undefined4 *
FUN_140a2f910(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1408d8300(param_2[2],param_3[2],param_4 + 8,param_5,param_6,param_7);
  uVar2 = FUN_1408d8300(param_2[1],param_3[1],param_4 + 4,param_5,param_6,param_7);
  uVar3 = FUN_1408d8300(*param_2,*param_3,param_4,param_5,param_6,param_7);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 140a2fa20 FUN_140a2fa20 body=1086 status=ok
// SIG undefined FUN_140a2fa20(void)

float * FUN_140a2fa20(float *param_1,float *param_2,float *param_3,undefined8 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a8;
  
  uVar2 = UIndianaMathStatics::GetAngleBetweenVectors(param_2,param_3);
  if ((float)uVar2 <= 0.0001) {
    fVar1 = param_3[2];
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    param_1[2] = fVar1;
  }
  else {
    fVar1 = (float)FUN_1408d8300(uVar2,0,param_4,param_5,param_6,param_7);
    fVar8 = param_3[1] * param_2[2] - param_3[2] * param_2[1];
    fVar7 = *param_3 * param_2[1] - *param_2 * param_3[1];
    fVar10 = *param_2 * param_3[2] - *param_3 * param_2[2];
    fVar4 = fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7;
    if (1e-08 < fVar4) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar8 * fVar5;
      fVar10 = fVar10 * fVar5;
      fVar7 = fVar7 * fVar5;
    }
    fVar1 = fVar1 * 0.5;
    if (fVar1 < 0.0) {
      fVar4 = fVar1 * 0.15915494 - 0.5;
    }
    else {
      fVar4 = fVar1 * 0.15915494 + 0.5;
    }
    fVar1 = fVar1 - (float)(int)fVar4 * 6.2831855;
    if (fVar1 <= 1.5707964) {
      if (-1.5707964 <= fVar1) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = -1.0;
        fVar1 = -3.1415927 - fVar1;
      }
    }
    else {
      fVar4 = -1.0;
      fVar1 = 3.1415927 - fVar1;
    }
    fVar5 = param_3[2];
    fVar3 = fVar1 * fVar1;
    local_a8 = (float)*(undefined8 *)param_3;
    fVar1 = (((((2.7525562e-06 - fVar3 * 2.3889859e-08) * fVar3 - 0.00019840874) * fVar3 +
              0.008333331) * fVar3 - 0.16666667) * fVar3 + 1.0) * fVar1;
    fVar4 = (((((2.4760495e-05 - fVar3 * 2.6051615e-07) * fVar3 - 0.0013888378) * fVar3 +
              0.041666638) * fVar3 - 0.5) * fVar3 + 1.0) * fVar4;
    fVar10 = fVar1 * fVar10;
    fVar8 = fVar1 * fVar8;
    fVar1 = fVar1 * fVar7;
    fVar7 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar11 = fVar10 * fVar5 - fVar1 * fVar7;
    fVar9 = fVar1 * local_a8 - fVar8 * fVar5;
    fVar11 = fVar11 + fVar11;
    fVar3 = fVar8 * fVar7 - fVar10 * local_a8;
    fVar9 = fVar9 + fVar9;
    fVar3 = fVar3 + fVar3;
    *param_1 = (fVar3 * fVar10 - fVar9 * fVar1) + fVar11 * fVar4 + local_a8;
    param_1[1] = (fVar11 * fVar1 - fVar3 * fVar8) + fVar9 * fVar4 + fVar7;
    param_1[2] = (fVar9 * fVar8 - fVar11 * fVar10) + fVar3 * fVar4 + fVar5;
  }
  return param_1;
}



// FUNCTION 140a2fe60 FUN_140a2fe60 body=565 status=ok
// SIG undefined FUN_140a2fe60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140a2fe60(float *param_1,float *param_2,float *param_3,undefined8 param_4,
                     undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_28 = -*param_2;
  fStack_1c = param_2[3];
  fStack_20 = -param_2[2];
  fStack_24 = -param_2[1];
  fVar12 = local_28 * *param_3 * fRam00000001468660dc + param_3[3] * fStack_1c +
           -param_2[1] * param_3[1] * fRam00000001468660cc +
           fStack_20 * param_3[2] * fRam00000001468660bc;
  fVar8 = -1.0;
  if ((-1.0 <= fVar12) && (fVar8 = fVar12, 1.0 <= fVar12)) {
    fVar8 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
  fVar8 = fVar8 + fVar8;
  fVar12 = (float)FUN_1408d8300(fVar8);
  if ((ABS(fVar8) <= 1e-08) || (ABS(fVar12) <= 1e-08)) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  else {
    pfVar5 = (float *)FQuat::Slerp_NotNormalized
                                (&local_28,param_2,param_3,(fVar8 - fVar12) / fVar8,param_6,param_7)
    ;
    fVar4 = fRam000000014686608c;
    fVar3 = fRam0000000146866088;
    fVar2 = fRam0000000146866084;
    fVar1 = _DAT_146866080;
    *param_1 = *pfVar5;
    param_1[1] = pfVar5[1];
    param_1[2] = pfVar5[2];
    param_1[3] = pfVar5[3];
    fVar8 = *param_1;
    fVar12 = param_1[1];
    fVar18 = param_1[2];
    fVar19 = param_1[3];
    auVar6._0_4_ = fVar8 * fVar8 + fVar18 * fVar18;
    auVar6._4_4_ = fVar12 * fVar12 + fVar19 * fVar19;
    auVar6._8_4_ = fVar18 * fVar18 + fVar8 * fVar8;
    auVar6._12_4_ = fVar19 * fVar19 + fVar12 * fVar12;
    fVar14 = auVar6._4_4_ + auVar6._0_4_;
    fVar15 = auVar6._8_4_ + auVar6._4_4_;
    fVar16 = auVar6._12_4_ + auVar6._8_4_;
    fVar17 = auVar6._0_4_ + auVar6._12_4_;
    auVar7._4_4_ = fVar15;
    auVar7._0_4_ = fVar14;
    auVar7._8_4_ = fVar16;
    auVar7._12_4_ = fVar17;
    auVar7 = rsqrtps(auVar6,auVar7);
    fVar9 = auVar7._0_4_;
    fVar10 = auVar7._4_4_;
    fVar11 = auVar7._8_4_;
    fVar13 = auVar7._12_4_;
    fVar9 = (fVar1 - fVar9 * fVar9 * fVar14 * fVar1) * fVar9 + fVar9;
    fVar10 = (fVar2 - fVar10 * fVar10 * fVar15 * fVar2) * fVar10 + fVar10;
    fVar11 = (fVar3 - fVar11 * fVar11 * fVar16 * fVar3) * fVar11 + fVar11;
    fVar13 = (fVar4 - fVar13 * fVar13 * fVar17 * fVar4) * fVar13 + fVar13;
    fVar12 = (float)(((uint)(((fVar2 - fVar10 * fVar10 * fVar15 * fVar2) * fVar10 + fVar10) * fVar12
                            ) ^ uRam0000000146866074) & -(uint)(1e-08 <= fVar15) ^
                    uRam0000000146866074);
    fVar18 = (float)(((uint)(((fVar3 - fVar11 * fVar11 * fVar16 * fVar3) * fVar11 + fVar11) * fVar18
                            ) ^ uRam0000000146866078) & -(uint)(1e-08 <= fVar16) ^
                    uRam0000000146866078);
    fVar19 = (float)(((uint)(((fVar4 - fVar13 * fVar13 * fVar17 * fVar4) * fVar13 + fVar13) * fVar19
                            ) ^ uRam000000014686607c) & -(uint)(1e-08 <= fVar17) ^
                    uRam000000014686607c);
    *param_1 = (float)(((uint)(((fVar1 - fVar9 * fVar9 * fVar14 * fVar1) * fVar9 + fVar9) * fVar8) ^
                       _DAT_146866070) & -(uint)(1e-08 <= fVar14) ^ _DAT_146866070);
    param_1[1] = fVar12;
    param_1[2] = fVar18;
    param_1[3] = fVar19;
  }
  return param_1;
}



// FUNCTION 140a300a0 FUN_140a300a0 body=27 status=ok
// SIG undefined FUN_140a300a0(void)

void FUN_140a300a0(undefined8 param_1)

{
  FUN_140a3c760();
  FUN_142338f40(param_1);
  return;
}


