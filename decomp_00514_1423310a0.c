// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1423310a0 FUN_1423310a0 body=226 status=ok
// SIG undefined FUN_1423310a0(void)

undefined4 * FUN_1423310a0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(longlong **)(param_1 + 0x6f0) == (longlong *)0x0) {
    fVar4 = 1.0;
  }
  else {
    fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))();
    fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b0))();
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
  }
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  fVar3 = *(float *)(param_3 + 0x24);
  if (*(float *)(param_3 + 0x24) <= *(float *)(param_3 + 0x20)) {
    fVar3 = *(float *)(param_3 + 0x20);
  }
  if (fVar3 <= *(float *)(param_3 + 0x28)) {
    fVar3 = *(float *)(param_3 + 0x28);
  }
  fVar3 = fVar3 * fVar4;
  *param_2 = *(undefined4 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  *(ulonglong *)(param_2 + 3) = CONCAT44(fVar3,fVar3);
  param_2[2] = uVar2;
  param_2[5] = fVar3;
  param_2[6] = SQRT(fVar3 * fVar3 * 3.0);
  return param_2;
}



// FUNCTION 142331190 FUN_142331190 body=303 status=ok
// SIG undefined FUN_142331190(void)

undefined8 FUN_142331190(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  fVar3 = (float)*(undefined8 *)(param_1 + 0x710) - -*(float *)(param_1 + 0x710);
  fVar1 = *(float *)(param_1 + 0x718) - -*(float *)(param_1 + 0x718);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x710) >> 0x20) -
          -*(float *)(param_1 + 0x714);
  local_38 = fVar1 * 0.5;
  local_40 = CONCAT44(fVar2 * 0.5,fVar3 * 0.5);
  local_44 = local_38 - *(float *)(param_1 + 0x718);
  local_4c = CONCAT44(fVar2 * 0.5 - *(float *)(param_1 + 0x714),
                      fVar3 * 0.5 - *(float *)(param_1 + 0x710));
  local_34 = SQRT((fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 0.25);
  FBoxSphereBounds::TransformBy(&local_4c);
  return param_2;
}



// FUNCTION 1423312c0 FUN_1423312c0 body=174 status=ok
// SIG undefined FUN_1423312c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423312c0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x6f8);
  if ((lVar1 != 0) &&
     (0 < *(int *)(lVar1 + 0x70) + *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x50) +
          *(int *)(lVar1 + 0x40) + *(int *)(lVar1 + 0x30))) {
    FUN_1423063d0(lVar1 + 0x28,&local_28);
    *param_2 = local_28;
    param_2[1] = uStack_20;
    param_2[2] = local_18;
    *(undefined4 *)(param_2 + 3) = local_10;
    return param_2;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)param_2 = uVar2;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
  uVar5 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar4;
  uVar2 = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0xc) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  return param_2;
}



// FUNCTION 142331370 FUN_142331370 body=100 status=ok
// SIG undefined FUN_142331370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142331370(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = *(undefined4 *)(param_1 + 0x710);
  local_28 = _DAT_1468b5d90;
  local_1c = CONCAT44(*(undefined4 *)(param_1 + 0x714),*(undefined4 *)(param_1 + 0x714));
  local_20 = DAT_1468b5d98;
  local_10 = local_14;
  FBoxSphereBounds::TransformBy(&local_28);
  return param_2;
}



// FUNCTION 1423313e0 FUN_1423313e0 body=38 status=ok
// SIG undefined FUN_1423313e0(void)

undefined8 FUN_1423313e0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xa70))();
  return param_2;
}



// FUNCTION 142331410 FUN_142331410 body=3085 status=ok
// SIG undefined FUN_142331410(void)

void FUN_142331410(longlong *param_1,undefined8 param_2,float param_3,char param_4,
                  undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float local_res8 [2];
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  
  fVar16 = (float)param_2;
  cVar3 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = (**(code **)(*param_1 + 0xa68))(param_1);
  if (cVar3 != '\0') {
    return;
  }
  if (fVar16 < 1e-06) {
    return;
  }
  if ((param_1[0x44] != 0) && (*(char *)(param_1[0x44] + 0x128) == '\x01')) {
    return;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fVar5 = (float)(**(code **)(*param_1 + 0x6b8))(param_1);
  fVar6 = (float)(**(code **)(*param_1 + 0x400))(param_1);
  bVar1 = true;
  local_e8 = DAT_1468b5d98;
  local_f0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_res8[0] = 0.0;
  cVar3 = (**(code **)(*param_1 + 0x668))
                    (param_1,param_2,fVar5,fVar6,param_3,param_5,&local_f0,local_res8);
  if (cVar3 != '\0') {
    if (0.0001 <= fVar5) {
      fVar7 = (float)local_f0 * (float)local_f0 + local_f0._4_4_ * local_f0._4_4_ +
              local_e8 * local_e8;
      if (fVar5 * fVar5 < fVar7) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar11 = auVar15._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
        fVar7 = (fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11)) * fVar5;
        local_f0._0_4_ = (float)local_f0 * fVar7;
        local_f0._4_4_ = local_f0._4_4_ * fVar7;
        local_e8 = local_e8 * fVar7;
      }
      local_e0 = CONCAT44(local_f0._4_4_,(float)local_f0);
      local_d8 = local_e8;
    }
    else {
      local_e0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_d8 = DAT_1468b5d98;
    }
    bVar1 = false;
    local_f0 = local_e0;
    local_e8 = local_d8;
  }
  if ((*(byte *)(param_1 + 0x60) & 0x40) != 0) {
    fVar7 = *(float *)((longlong)param_1 + 0x354);
    fVar11 = *(float *)(param_1 + 0x6a) * *(float *)(param_1 + 0x6a) + fVar7 * fVar7 +
             *(float *)(param_1 + 0x6b) * *(float *)(param_1 + 0x6b);
    if (fVar11 <= 1e-08) {
      fVar7 = *(float *)((longlong)param_1 + 0x18c);
      fVar11 = fVar7 * fVar7 + *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
               *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194);
      if (1e-08 <= fVar11) {
        if (fVar11 == 1.0) {
          uVar9 = *(ulonglong *)((longlong)param_1 + 0x18c);
          local_d8 = (float)*(undefined4 *)((longlong)param_1 + 0x194);
          local_e0 = uVar9;
        }
        else if (1e-08 <= fVar11) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar12 = auVar15._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          uVar9 = (ulonglong)(uint)(fVar7 * fVar12);
          local_e0 = CONCAT44(*(float *)(param_1 + 0x32) * fVar12,fVar7 * fVar12);
          local_d8 = *(float *)((longlong)param_1 + 0x194) * fVar12;
        }
        else {
          uVar9 = (ulonglong)(uint)DAT_1468b5d90;
          local_e0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_d8 = DAT_1468b5d98;
        }
        fVar7 = (float)uVar9;
        pfVar4 = (float *)&local_e0;
      }
      else {
        pfVar4 = (float *)FUN_142369f10(param_1[0x2f],&local_e0);
        fVar7 = *pfVar4;
      }
      local_d8 = pfVar4[2];
      lVar8 = CONCAT44(fVar5 * pfVar4[1],fVar7 * fVar5);
    }
    else {
      if (fVar11 == 1.0) {
        local_e0 = param_1[0x6a];
        fVar12 = (float)local_e0;
        local_d8 = *(float *)(param_1 + 0x6b);
        fVar13 = (float)(local_e0 >> 0x20);
      }
      else {
        fVar12 = DAT_1468b5d90;
        local_d8 = DAT_1468b5d98;
        fVar13 = DAT_1468b5d94;
        if (1e-08 <= fVar11) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar13 = auVar15._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar11 * 0.5 * fVar13 * fVar13);
          fVar13 = fVar13 + fVar13 * (0.5 - fVar11 * 0.5 * fVar13 * fVar13);
          fVar12 = *(float *)(param_1 + 0x6a) * fVar13;
          local_d8 = *(float *)(param_1 + 0x6b) * fVar13;
          fVar13 = fVar7 * fVar13;
        }
      }
      lVar8 = CONCAT44(fVar13 * fVar5,fVar12 * fVar5);
    }
    local_d8 = local_d8 * fVar5;
    param_1[0x6a] = lVar8;
    *(float *)(param_1 + 0x6b) = local_d8;
    *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  }
  fVar7 = (float)(**(code **)(*param_1 + 0x6a0))(param_1);
  fVar5 = fVar6 * *(float *)(param_1 + 0x76);
  if (fVar6 * *(float *)(param_1 + 0x76) <= local_res8[0]) {
    fVar5 = local_res8[0];
  }
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  if (((*(float *)(param_1 + 0x6a) == 0.0) && (*(float *)((longlong)param_1 + 0x354) == 0.0)) &&
     (*(float *)(param_1 + 0x6b) == 0.0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  cVar3 = (**(code **)(*param_1 + 0x428))(param_1,fVar5);
  if (((bVar2) && (bVar1)) || (cVar3 != '\0')) {
    local_e0 = *(ulonglong *)((longlong)param_1 + 0x18c);
    local_d8 = *(float *)((longlong)param_1 + 0x194);
    fVar6 = param_3;
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      fVar6 = *(float *)((longlong)param_1 + 700);
    }
    (**(code **)(*param_1 + 0x860))(param_1,param_2,fVar6,param_5);
    if ((cVar3 == '\0') ||
       (fVar5 * fVar5 <=
        *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
        *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
        *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194)))
    goto LAB_142331d26;
    if (local_e0._4_4_ * *(float *)((longlong)param_1 + 0x354) +
        (float)local_e0 * *(float *)(param_1 + 0x6a) + local_d8 * *(float *)(param_1 + 0x6b) < 0.0)
    goto LAB_142331d26;
    fVar12 = (float)local_e0 * (float)local_e0 + local_e0._4_4_ * local_e0._4_4_ +
             local_d8 * local_d8;
    fVar6 = local_d8;
    fVar7 = (float)local_e0;
    fVar11 = local_e0._4_4_;
    if ((fVar12 != 1.0) &&
       (fVar6 = DAT_1468b5d98, fVar7 = DAT_1468b5d90, fVar11 = DAT_1468b5d94, 1e-08 <= fVar12)) {
      auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar6 = auVar15._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar12 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar12 * 0.5 * fVar6 * fVar6);
      fVar7 = (float)local_e0 * fVar6;
      fVar11 = local_e0._4_4_ * fVar6;
      fVar6 = local_d8 * fVar6;
    }
    local_d8 = fVar6 * fVar5;
    uVar10 = CONCAT44(fVar11 * fVar5,fVar7 * fVar5);
  }
  else {
    if (bVar2) goto LAB_142331d26;
    fVar6 = *(float *)((longlong)param_1 + 0x354);
    fVar7 = *(float *)(param_1 + 0x6a);
    fVar11 = *(float *)(param_1 + 0x6b);
    fVar12 = fVar7 * fVar7 + fVar6 * fVar6 + fVar11 * fVar11;
    if (fVar12 == 1.0) {
      local_e0 = param_1[0x6a];
      fVar13 = *(float *)(param_1 + 0x6b);
      fVar17 = (float)local_e0;
      fVar14 = (float)(local_e0 >> 0x20);
    }
    else {
      fVar13 = DAT_1468b5d98;
      fVar17 = DAT_1468b5d90;
      fVar14 = DAT_1468b5d94;
      if (1e-08 <= fVar12) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar14 = auVar15._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
        fVar17 = fVar7 * fVar14;
        fVar13 = fVar11 * fVar14;
        fVar14 = fVar6 * fVar14;
      }
    }
    fVar6 = *(float *)((longlong)param_1 + 0x18c);
    fVar7 = *(float *)(param_1 + 0x32);
    local_d8 = *(float *)((longlong)param_1 + 0x194);
    fVar11 = fVar16 * param_3;
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    fVar12 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + local_d8 * local_d8);
    local_d8 = local_d8 - (local_d8 - fVar13 * fVar12) * fVar11;
    uVar10 = CONCAT44(fVar7 - (fVar7 - fVar14 * fVar12) * fVar11,
                      fVar6 - (fVar6 - fVar17 * fVar12) * fVar11);
  }
  *(undefined8 *)((longlong)param_1 + 0x18c) = uVar10;
  *(float *)((longlong)param_1 + 0x194) = local_d8;
LAB_142331d26:
  if (param_4 != '\0') {
    param_3 = fVar16 * param_3;
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    param_3 = 1.0 - param_3;
    local_d8 = param_3 * *(float *)((longlong)param_1 + 0x194);
    *(ulonglong *)((longlong)param_1 + 0x18c) =
         CONCAT44(param_3 * *(float *)(param_1 + 0x32),
                  param_3 * *(float *)((longlong)param_1 + 0x18c));
    *(float *)((longlong)param_1 + 0x194) = local_d8;
  }
  cVar3 = (**(code **)(*param_1 + 0x428))(param_1,fVar5);
  if (cVar3 != '\0') {
    fVar5 = SQRT(*(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
                 *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
                 *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194));
  }
  *(float *)(param_1 + 0x32) =
       *(float *)((longlong)param_1 + 0x354) * fVar16 + *(float *)(param_1 + 0x32);
  fVar7 = (float)local_f0 * fVar16 +
          fVar16 * *(float *)(param_1 + 0x6a) + *(float *)((longlong)param_1 + 0x18c);
  *(float *)((longlong)param_1 + 0x194) =
       *(float *)(param_1 + 0x6b) * fVar16 + *(float *)((longlong)param_1 + 0x194);
  fVar6 = local_f0._4_4_ * fVar16 + *(float *)(param_1 + 0x32);
  fVar16 = local_e8 * fVar16 + *(float *)((longlong)param_1 + 0x194);
  *(float *)((longlong)param_1 + 0x18c) = fVar7;
  *(float *)(param_1 + 0x32) = fVar6;
  *(float *)((longlong)param_1 + 0x194) = fVar16;
  if (0.0001 <= fVar5) {
    fVar11 = fVar7 * fVar7 + fVar6 * fVar6 + fVar16 * fVar16;
    if (fVar11 <= fVar5 * fVar5) {
      uVar10 = *(undefined8 *)((longlong)param_1 + 0x18c);
      fVar16 = *(float *)((longlong)param_1 + 0x194);
    }
    else {
      auVar15 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar12 = auVar15._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
      fVar5 = (fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12)) * fVar5;
      fVar16 = fVar16 * fVar5;
      uVar10 = CONCAT44(fVar6 * fVar5,fVar5 * fVar7);
      local_d8 = fVar16;
    }
  }
  else {
    local_d8 = DAT_1468b5d98;
    uVar10 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar16 = DAT_1468b5d98;
  }
  *(undefined8 *)((longlong)param_1 + 0x18c) = uVar10;
  *(float *)((longlong)param_1 + 0x194) = fVar16;
  if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x80000) != 0) {
    (**(code **)(*param_1 + 0xa88))(param_1,param_2);
  }
  return;
}



// FUNCTION 142332020 FUN_142332020 body=41 status=ok
// SIG undefined FUN_142332020(void)

void FUN_142332020(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_1 + 2);
  }
  return;
}



// FUNCTION 142332050 FUN_142332050 body=103 status=ok
// SIG undefined FUN_142332050(void)

void FUN_142332050(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar1 = FWeakObjectPtr::Get(param_1 + 3);
  FUN_1429127a0(*(undefined8 *)(*param_1 + 0x220),(int)param_1[1],&local_18,uVar1,param_1[4],
                (char)param_1[5],*(undefined1 *)((longlong)param_1 + 0x29),
                *(undefined1 *)((longlong)param_1 + 0x2a));
  return;
}



// FUNCTION 1423320c0 FUN_1423320c0 body=41 status=ok
// SIG undefined FUN_1423320c0(void)

void FUN_1423320c0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xc0) = *(undefined4 *)(param_1 + 2);
  }
  return;
}



// FUNCTION 1423320f0 FUN_1423320f0 body=53 status=ok
// SIG undefined FUN_1423320f0(void)

void FUN_1423320f0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    FActiveSound::SetWaveParameter(lVar1,param_1[2],param_1[3]);
    return;
  }
  return;
}



// FUNCTION 142332160 FUN_142332160 body=60 status=ok
// SIG undefined FUN_142332160(void)

void FUN_142332160(longlong *param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_142913a10(*(undefined8 *)(*param_1 + 0x220),(int)param_1[1],&local_18,(char)param_1[3]);
  return;
}



// FUNCTION 1423321b0 FUN_1423321b0 body=53 status=ok
// SIG undefined FUN_1423321b0(void)

void FUN_1423321b0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    FActiveSound::SetIntParameter(lVar1,param_1[2],*(undefined4 *)(param_1 + 3));
    return;
  }
  return;
}



// FUNCTION 142332210 FUN_142332210 body=84 status=ok
// SIG undefined FUN_142332210(void)

void FUN_142332210(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x8d8))
            ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),(longlong)param_1 + 0xc,param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00014233225d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x8e0))
            ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),(longlong)param_1 + 0xc,param_1 + 3);
  return;
}



// FUNCTION 142332290 FUN_142332290 body=51 status=ok
// SIG undefined FUN_142332290(void)

void FUN_142332290(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x9a) =
         *(byte *)(lVar1 + 0x9a) ^ (*(byte *)(param_1 + 2) ^ *(byte *)(lVar1 + 0x9a)) & 1;
  }
  return;
}



// FUNCTION 142332350 FUN_142332350 body=91 status=ok
// SIG undefined FUN_142332350(void)

void FUN_142332350(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_1 + 2);
  local_18 = param_1[1];
  if (((*(byte *)(param_1[6] + 0x4b4) & 0x20) == 0) &&
     ((*(uint *)(param_1[6] + 0x300) & 0x2000) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_142397be0(*param_1,&local_18,param_1 + 4,0,0,uVar1);
  return;
}



// FUNCTION 1423323d0 FUN_1423323d0 body=41 status=ok
// SIG undefined FUN_1423323d0(void)

void FUN_1423323d0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 200) = *(undefined4 *)(param_1 + 2);
  }
  return;
}



// FUNCTION 142332420 FUN_142332420 body=54 status=ok
// SIG undefined FUN_142332420(void)

void FUN_142332420(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    FActiveSound::SetBoolParameter(lVar1,param_1[2],*(undefined1 *)(param_1 + 3));
    return;
  }
  return;
}



// FUNCTION 142332480 FUN_142332480 body=50 status=ok
// SIG undefined FUN_142332480(void)

void FUN_142332480(longlong *param_1)

{
  FUN_14288e3d0(*param_1 + 0x5b8,0);
  FUN_142301a70(*param_1 + 0x30,*(undefined8 *)param_1[1]);
  return;
}



// FUNCTION 1423324f0 FUN_1423324f0 body=57 status=ok
// SIG undefined FUN_1423324f0(void)

void FUN_1423324f0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x9a) = *(char *)(param_1 + 2) << 7 | *(byte *)(lVar1 + 0x9a) & 0x7f;
  }
  return;
}



// FUNCTION 142332530 FUN_142332530 body=53 status=ok
// SIG undefined FUN_142332530(void)

void FUN_142332530(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    FSoundAttenuationSettings::operator=(lVar1 + 0x178,param_1 + 2);
    return;
  }
  return;
}



// FUNCTION 142332570 FUN_142332570 body=54 status=ok
// SIG undefined FUN_142332570(void)

void FUN_142332570(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    FActiveSound::SetFloatParameter(lVar1,param_1[2],*(undefined4 *)(param_1 + 3));
    return;
  }
  return;
}



// FUNCTION 1423325b0 FUN_1423325b0 body=62 status=ok
// SIG undefined FUN_1423325b0(void)

void FUN_1423325b0(longlong *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x8c0))();
                    /* WARNING: Could not recover jumptable at 0x0001423325e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_1 + 0x220) + 0x8f8))
            (*(longlong **)(*param_1 + 0x220),*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  return;
}



// FUNCTION 142332620 FUN_142332620 body=60 status=ok
// SIG undefined FUN_142332620(void)

void FUN_142332620(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423146c0(*(undefined8 *)(*param_1 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x000142332655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1[1] + 0x970))
            (*(longlong **)param_1[1],*(undefined4 *)param_1[2],cVar1 == '\0');
  return;
}



// FUNCTION 142332670 Call body=65 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_fff97fdabcd2abb92fe06fbbc979fa94>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  longlong lVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    local_10 = param_1[2];
    local_18[0] = *(undefined4 *)(param_1 + 3);
    FActiveSound::SetSubmixSend(lVar1,local_18);
  }
  return;
}



// FUNCTION 1423326d0 FUN_1423326d0 body=65 status=ok
// SIG undefined FUN_1423326d0(void)

void FUN_1423326d0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar2 != 0) {
    uVar1 = param_1[3];
    *(undefined8 *)(lVar2 + 0x130) = param_1[2];
    *(undefined8 *)(lVar2 + 0x138) = uVar1;
    uVar1 = param_1[5];
    *(undefined8 *)(lVar2 + 0x140) = param_1[4];
    *(undefined8 *)(lVar2 + 0x148) = uVar1;
    uVar1 = param_1[7];
    *(undefined8 *)(lVar2 + 0x150) = param_1[6];
    *(undefined8 *)(lVar2 + 0x158) = uVar1;
  }
  return;
}



// FUNCTION 142332730 FUN_142332730 body=69 status=ok
// SIG undefined FUN_142332730(void)

void FUN_142332730(undefined8 *param_1)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)((longlong)param_1 + 0x14);
    fVar1 = *(float *)(param_1 + 2);
    *(byte *)(lVar2 + 0x98) = *(byte *)(lVar2 + 0x98) | 0x10;
    *(float *)(lVar2 + 0xbc) = *(float *)(lVar2 + 0xa8) + fVar1;
  }
  return;
}



// FUNCTION 1423327e0 FUN_1423327e0 body=107 status=ok
// SIG undefined FUN_1423327e0(void)

void FUN_1423327e0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x98) = *(byte *)(lVar1 + 0x98) & 0xef;
    *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)((longlong)param_1 + 0x14);
    if (0.0 < *(float *)(param_1 + 2)) {
      *(float *)(lVar1 + 0xbc) = *(float *)(param_1 + 2) + *(float *)(lVar1 + 0xa8);
      return;
    }
    *(undefined4 *)(lVar1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined4 *)(lVar1 + 0xbc) = 0xbf800000;
  }
  return;
}



// FUNCTION 142332880 FUN_142332880 body=50 status=ok
// SIG undefined FUN_142332880(void)

void FUN_142332880(longlong *param_1)

{
  FUN_14288e3d0(*param_1 + 0x5b8,1);
  FUN_14231a7f0(*param_1 + 0x30,*(undefined8 *)param_1[1]);
  return;
}



// FUNCTION 1423328e0 FUN_1423328e0 body=131 status=ok
// SIG undefined FUN_1423328e0(void)

void FUN_1423328e0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  (**(code **)(*param_1 + 0x470))();
  if (param_1[0x44] != 0) {
    local_34 = *param_3;
    local_2c = *(undefined4 *)(param_3 + 1);
    local_28 = *param_4;
    local_20 = *(undefined4 *)(param_4 + 1);
    local_38 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1[0x44] + 0x5c0,&local_38);
  }
  return;
}



// FUNCTION 142332970 FUN_142332970 body=138 status=ok
// SIG undefined FUN_142332970(void)

undefined1
FUN_142332970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (plVar2 = (longlong *)FUN_1422325e0(lVar1), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x2e8))(plVar2,lVar1,param_2,param_3,param_4,param_5,param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 142332a00 FUN_142332a00 body=1180 status=ok
// SIG undefined FUN_142332a00(void)

void FUN_142332a00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff28;
  ushort uVar17;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar17 = (ushort)((uint)in_stack_ffffffffffffff28 >> 0x10);
  fVar14 = *(float *)((longlong)param_2 + 0x184) * 182.04445;
  fVar15 = *(float *)((longlong)param_2 + 0x18c) * 0.7111111;
  uVar13 = ((int)ROUND(*(float *)(param_2 + 0x31) * 182.04445 +
                       *(float *)(param_2 + 0x31) * 182.04445 + 0.5) >> 1) << 0x10 |
           (int)ROUND(fVar14 + fVar14 + 0.5) >> 1 & 0xffffU;
  uVar10 = (int)ROUND(fVar15 + fVar15 + 0.5) >> 1;
  uVar11 = FWeakObjectPtr::Get(param_2 + 0x32);
  lVar3 = param_2[0x33];
  cVar6 = FUN_142314560(uVar11);
  lVar12 = 0x154;
  if (cVar6 != '\0') {
    lVar12 = 0x178;
  }
  lVar1 = *(longlong *)((longlong)param_2 + lVar12);
  uVar2 = *(undefined4 *)((longlong)param_2 + lVar12 + 8);
  if (param_3 != (longlong *)0x0) {
    local_a0 = (undefined4)param_3[0x36];
    local_a8 = param_3[0x35];
    lVar12 = *param_1;
    uVar7 = (**(code **)(*param_3 + 0x50))(param_3);
    (**(code **)(lVar12 + 0x9e8))(param_1,*(undefined4 *)((longlong)param_3 + 0x1c),&local_a8,uVar7)
    ;
  }
  lVar12 = param_1[0xc2];
  if (lVar12 == 0) {
    lVar12 = (**(code **)(param_1[0x43] + 0x28))();
    param_1[0xc2] = lVar12;
  }
  plVar4 = *(longlong **)(lVar12 + 0x30);
  uVar7 = (undefined1)uVar10;
  local_88 = lVar1;
  local_80 = uVar2;
  if (plVar4 == (longlong *)0x0) {
    local_90 = (undefined4)param_2[0x36];
    local_98 = param_2[0x35];
    lVar12 = *param_1;
    uVar7 = (**(code **)(*param_2 + 0x50))(param_2);
    (**(code **)(lVar12 + 0x9a0))
              (param_1,*(undefined4 *)((longlong)param_2 + 0x1c),&local_98,&local_88,uVar7,
               uVar10 & 0xff,CONCAT44(uVar16,uVar13),uVar11,lVar3,(char)param_2[0x2a],
               (uint)uVar17 << 0x10);
  }
  else {
    fVar14 = *(float *)((longlong)plVar4 + 0x184) * 182.04445;
    uVar10 = ((int)ROUND(*(float *)(plVar4 + 0x31) * 182.04445 +
                         *(float *)(plVar4 + 0x31) * 182.04445 + 0.5) >> 1) << 0x10 |
             (int)ROUND(fVar14 + fVar14 + 0.5) >> 1 & 0xffffU;
    cVar6 = FUN_14044aea0(plVar4 + 0x39,0);
    if (cVar6 != '\0') {
      cVar6 = FUN_14044af00(param_2 + 0x39,0);
      if (cVar6 != '\0') {
        local_90 = (undefined4)param_2[0x36];
        local_98 = param_2[0x35];
        lVar12 = *param_1;
        local_80 = (undefined4)plVar4[0x36];
        local_88 = plVar4[0x35];
        local_a8 = lVar1;
        local_a0 = uVar2;
        uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
        uVar9 = (**(code **)(*plVar4 + 0x50))(plVar4);
        (**(code **)(lVar12 + 0x9d0))
                  (param_1,*(undefined4 *)((longlong)plVar4 + 0x1c),&local_88,uVar9,uVar10,
                   *(undefined4 *)((longlong)param_2 + 0x1c),&local_98,&local_a8,uVar8,uVar7,uVar13,
                   uVar11,lVar3,(char)param_2[0x2a],0);
        goto LAB_142332de0;
      }
    }
    local_90 = (undefined4)param_2[0x36];
    local_98 = param_2[0x35];
    lVar12 = *param_1;
    local_a0 = (undefined4)plVar4[0x36];
    local_a8 = plVar4[0x35];
    uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
    uVar9 = (**(code **)(*plVar4 + 0x50))(plVar4);
    (**(code **)(lVar12 + 0x9b8))
              (param_1,*(undefined4 *)((longlong)plVar4 + 0x1c),&local_a8,uVar9,uVar10,
               *(undefined4 *)((longlong)param_2 + 0x1c),&local_98,&local_88,uVar8,uVar7,uVar13,
               uVar11,lVar3,(char)param_2[0x2a],0);
  }
LAB_142332de0:
  lVar3 = *(longlong *)(param_1[0x44] + 0x490);
  if (lVar3 != 0) {
    lVar12 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) && (lVar3 = *(longlong *)(lVar3 + 0x528), lVar3 != 0)) &&
       ((char)*(uint *)(lVar3 + 0x2c40) < '\0')) {
      *(uint *)(lVar3 + 0x2c40) = *(uint *)(lVar3 + 0x2c40) | 0x200;
    }
  }
  return;
}



// FUNCTION 142332ea0 FUN_142332ea0 body=743 status=ok
// SIG undefined FUN_142332ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142332ea0(longlong *param_1,longlong *param_2,undefined8 param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  ulonglong in_RAX;
  uint7 uVar5;
  float fVar6;
  
  param_2 = (longlong *)*param_2;
  if (((((*(byte *)(param_1 + 3) & 8) == 0) && ((*(byte *)(param_2 + 3) & 8) == 0)) &&
      (in_RAX = FUN_14044af00(param_1 + 0x39), (char)in_RAX == '\0')) &&
     (in_RAX = FUN_14044af00(), (char)in_RAX == '\0')) {
    if (((*(float *)(param_2 + 0x35) == 0.0) && (*(float *)((longlong)param_2 + 0x1ac) == 0.0)) &&
       (*(float *)(param_2 + 0x36) == 0.0)) {
      if ((*(float *)(param_1 + 0x35) != 0.0) ||
         ((*(float *)((longlong)param_1 + 0x1ac) != 0.0 || (*(float *)(param_1 + 0x36) != 0.0))))
      goto LAB_142332f21;
    }
    else if ((param_4 <= *(float *)(param_2 + 4) + *(float *)(param_1 + 4)) ||
            (*(float *)((longlong)param_1 + 0x1bc) * *(float *)((longlong)param_2 + 0x1bc) +
             *(float *)(param_1 + 0x37) * *(float *)(param_2 + 0x37) +
             *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x38) < *(float *)(param_1 + 0x65)))
    goto LAB_142332f21;
    if ((*(float *)((longlong)param_1 + 0x54) == 0.0) &&
       ((*(float *)(param_1 + 0xb) == 0.0 && (*(float *)((longlong)param_1 + 0x5c) == 0.0)))) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    uVar5 = (uint7)(in_RAX >> 8);
    if (((*(float *)((longlong)param_2 + 0x54) == 0.0) && (*(float *)(param_2 + 0xb) == 0.0)) &&
       (*(float *)((longlong)param_2 + 0x5c) == 0.0)) {
      in_RAX = CONCAT71(uVar5,1);
    }
    else {
      in_RAX = (ulonglong)uVar5 << 8;
    }
    if (cVar3 == (char)in_RAX) {
      fVar6 = ABS(*(float *)((longlong)param_1 + 0x1b4) - *(float *)((longlong)param_2 + 0x1b4));
      if (((((fVar6 < *(float *)((longlong)param_1 + 0x32c) ||
              fVar6 == *(float *)((longlong)param_1 + 0x32c)) &&
            (in_RAX = 0,
            (*(float *)((longlong)param_1 + 0x1b4) == 0.0) ==
            (*(float *)((longlong)param_2 + 0x1b4) == 0.0))) &&
           ((in_RAX = 0, (*(float *)(param_1 + 5) == 0.0) == (*(float *)(param_2 + 5) == 0.0) &&
            ((in_RAX = (ulonglong)(*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)),
             ((*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)) & 0x20) == 0 &&
             (in_RAX = (ulonglong)*(uint *)((longlong)param_2 + 0x34),
             *(uint *)((longlong)param_1 + 0x34) == *(uint *)((longlong)param_2 + 0x34))))))) &&
          (in_RAX = (ulonglong)*(uint *)(param_2 + 6),
          *(uint *)(param_1 + 6) == *(uint *)(param_2 + 6))) &&
         (in_RAX = 0,
         (*(float *)((longlong)param_1 + 0x2c) == 0.0) ==
         (*(float *)((longlong)param_2 + 0x2c) == 0.0))) {
        cVar3 = (**(code **)(*param_2 + 0x50))(param_2);
        in_RAX = (**(code **)(*param_1 + 0x50))(param_1);
        if ((((char)in_RAX == cVar3) &&
            (in_RAX = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                                (param_1 + 0x27,param_2 + 0x27), (char)in_RAX == '\0')) &&
           (in_RAX = param_2[0x28], param_1[0x28] == in_RAX)) {
          in_RAX = 0;
          if (((*(byte *)(param_1 + 0x2a) == *(byte *)((longlong)param_2 + 0x39)) &&
              (*(float *)(param_2 + 0x26) == *(float *)(param_1 + 0x26))) &&
             (*(float *)((longlong)param_2 + 0x134) == *(float *)((longlong)param_1 + 0x134))) {
            auVar1._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)((longlong)param_1 + 0x124) -
                                                          *(float *)((longlong)param_2 + 0x124)) &
                                                   uRam0000000146af0074));
            auVar1._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x24) -
                                                          *(float *)(param_2 + 0x24)) &
                                                   _DAT_146af0070));
            auVar1._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x25) -
                                                          *(float *)(param_2 + 0x25)) &
                                                   uRam0000000146af0078));
            auVar1._12_4_ =
                 -(uint)(0.0001 < (float)((uint)(*(float *)((longlong)param_1 + 300) -
                                                *(float *)((longlong)param_2 + 300)) &
                                         uRam0000000146af007c));
            uVar4 = movmskps((uint)*(byte *)((longlong)param_2 + 0x39),auVar1);
            in_RAX = (ulonglong)uVar4;
            if (uVar4 != 0) {
              auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)((longlong)param_2 + 0x124) +
                                                            *(float *)((longlong)param_1 + 0x124)) &
                                                     uRam0000000146af0074));
              auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_2 + 0x24) +
                                                            *(float *)(param_1 + 0x24)) &
                                                     _DAT_146af0070));
              auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_2 + 0x25) +
                                                            *(float *)(param_1 + 0x25)) &
                                                     uRam0000000146af0078));
              auVar2._12_4_ =
                   -(uint)(0.0001 < (float)((uint)(*(float *)((longlong)param_2 + 300) +
                                                  *(float *)((longlong)param_1 + 300)) &
                                           uRam0000000146af007c));
              uVar4 = movmskps(uVar4,auVar2);
              in_RAX = (ulonglong)uVar4;
              if (uVar4 != 0) goto LAB_142332f21;
            }
            if (*(float *)((longlong)param_2 + 0x24) == *(float *)((longlong)param_1 + 0x24)) {
              uVar4 = *(uint *)(param_2 + 0x29);
              in_RAX = (ulonglong)uVar4;
              if (*(uint *)(param_1 + 0x34) == uVar4) {
                return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
LAB_142332f21:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142333190 FUN_142333190 body=100 status=ok
// SIG undefined FUN_142333190(void)

undefined8 FUN_142333190(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x558))();
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x560))(param_1), cVar2 == '\0')) {
      return 0;
    }
    plVar1 = (longlong *)param_1[0x2f];
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0), cVar2 == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142333200 FUN_142333200 body=17 status=ok
// SIG undefined FUN_142333200(void)

bool FUN_142333200(undefined8 param_1,longlong *param_2)

{
  return *(char *)(*param_2 + 0x39) == *(char *)(*param_2 + 0x150);
}



// FUNCTION 142333220 FUN_142333220 body=119 status=ok
// SIG undefined FUN_142333220(void)

undefined8 FUN_142333220(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0xa60))(param_1), cVar2 != '\0')) {
    return 0;
  }
  if (param_1[0x44] != 0) {
    plVar1 = *(longlong **)(param_1[0x44] + 0x168);
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0), cVar2 != '\0')) {
      return 0;
    }
    cVar2 = FUN_1422358f0(param_1[0x44]);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1423332a0 FUN_1423332a0 body=151 status=ok
// SIG undefined FUN_1423332a0(void)

undefined8 FUN_1423332a0(longlong *param_1,byte *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (((((*param_2 & 1) == 0) || ((*param_2 & 2) != 0)) ||
      (cVar1 = (**(code **)(*param_1 + 0x5c0))(), cVar1 == '\0')) || ((char)param_1[0x49] == '\x03')
     ) {
    return 0;
  }
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x74);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x880))(plVar2,param_1[0x44]);
    if (cVar1 == '\0') {
      return 0;
    }
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x6c);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar2 + 0x598))(plVar2,param_1[0x44]), cVar1 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142333340 CanStopPathFollowing body=23 status=ok
// SIG undefined CanStopPathFollowing(void)

bool UCharacterMovementComponent::CanStopPathFollowing(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x558))();
  return cVar1 == '\0';
}



// FUNCTION 142333360 FUN_142333360 body=59 status=ok
// SIG undefined FUN_142333360(void)

ulonglong FUN_142333360(longlong *param_1)

{
  ulonglong uVar1;
  
  if ((*(uint *)(param_1 + 0x60) & 0x800) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x550))();
    if ((char)uVar1 != '\0') {
      return uVar1 & 0xffffffffffffff00;
    }
  }
  return (ulonglong)(*(uint *)(param_1 + 0x60) >> 10) & 0xffffffffffffff01;
}



// FUNCTION 1423333a0 FUN_1423333a0 body=137 status=ok
// SIG undefined FUN_1423333a0(void)

void FUN_1423333a0(longlong param_1,char param_2)

{
  byte bVar1;
  longlong *in_RCX;
  
  bVar1 = *(byte *)((longlong)in_RCX + 0x2f2);
  if ((bVar1 & 8) != 0) {
    if ((bVar1 & 0x10) != 0) {
      *(longlong *)((longlong)in_RCX + 0x1ec) = in_RCX[0xd7];
      in_RCX[0x3f] = *(longlong *)((longlong)in_RCX + 0x6c4);
      param_1 = in_RCX[0xda];
      *(int *)((longlong)in_RCX + 500) = (int)in_RCX[0xd8];
      *(undefined4 *)(in_RCX + 0x40) = *(undefined4 *)((longlong)in_RCX + 0x6cc);
      *(longlong *)((longlong)in_RCX + 0x204) = param_1;
      *(int *)((longlong)in_RCX + 0x20c) = (int)in_RCX[0xdb];
      *(byte *)((longlong)in_RCX + 0x2f2) = bVar1 & 0xef;
    }
    if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142333421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_RCX + 0x418))(param_1,&DAT_14653218c);
      return;
    }
  }
  return;
}



// FUNCTION 142333430 FUN_142333430 body=1207 status=ok
// SIG undefined FUN_142333430(void)

void FUN_142333430(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int param_5)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res8;
  undefined8 local_a8;
  float local_a0;
  float local_90;
  
  if (*(char *)(param_1 + 0x31c) == '\0') {
    return;
  }
  if (param_4 == (longlong *)0x0) {
    return;
  }
  cVar1 = (**(code **)(*param_4 + 0x408))(param_4);
  if (cVar1 == '\0') {
    return;
  }
  fVar9 = *(float *)(param_4 + 0x44) - *(float *)(*(longlong *)(param_1 + 0x178) + 0x220);
  fVar7 = *(float *)((longlong)param_4 + 0x224) - *(float *)(*(longlong *)(param_1 + 0x178) + 0x224)
  ;
  fVar15 = 1.0;
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9 + 0.0625;
  if (fVar5 == 1.0) {
    fVar8 = fVar7;
    fVar10 = fVar9;
    fVar13 = 0.25;
  }
  else {
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    fVar13 = DAT_1468b5d98;
    if (1e-08 <= fVar5) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar13 = auVar6._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar5 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar5 * 0.5 * fVar13 * fVar13);
      fVar8 = fVar7 * fVar13;
      fVar10 = fVar9 * fVar13;
      fVar13 = fVar13 * 0.25;
    }
  }
  fVar5 = *(float *)(param_1 + 400);
  fVar7 = *(float *)(param_1 + 0x18c);
  fVar9 = fVar7 * fVar7 + fVar5 * fVar5;
  if (fVar9 == 1.0) {
    if (*(float *)(param_1 + 0x194) == 0.0) {
      local_a8 = *(undefined8 *)(param_1 + 0x18c);
      local_a0 = *(float *)(param_1 + 0x194);
      fVar12 = (float)((ulonglong)local_a8 >> 0x20);
      fVar11 = (float)local_a8;
      fVar14 = local_a0;
      goto LAB_1423336bb;
    }
  }
  else {
    fVar12 = DAT_1468b5d94;
    fVar11 = DAT_1468b5d90;
    fVar14 = DAT_1468b5d98;
    if (fVar9 < 1e-08) goto LAB_1423336bb;
    auVar6 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar12 = auVar6._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
    fVar7 = fVar7 * fVar12;
    fVar5 = fVar5 * fVar12;
  }
  fVar12 = fVar5;
  fVar11 = fVar7;
  fVar14 = 0.0;
LAB_1423336bb:
  fVar10 = fVar10 + fVar11;
  fVar13 = fVar13 + fVar14;
  fVar8 = fVar8 + fVar12;
  fVar5 = fVar10 * 0.5;
  fVar12 = fVar8 * 0.5;
  fVar9 = fVar13 * 0.5;
  fVar7 = (fVar10 * fVar10 + fVar8 * fVar8 + fVar13 * fVar13) * 0.25;
  if (1e-08 < fVar7) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar6._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar5 = fVar8 * fVar5;
    fVar12 = fVar12 * fVar8;
    fVar9 = fVar9 * fVar8;
  }
  local_res8 = 0;
  if (param_5 == -1) {
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_1423acf90(param_4,&local_res8);
    uVar4 = *puVar2;
  }
  fVar7 = *(float *)(param_1 + 0x334);
  if (*(char *)(param_1 + 0x31d) != '\0') {
    lVar3 = (**(code **)(*param_4 + 0x6d0))(param_4,uVar4,1);
    if (lVar3 != 0) {
      fVar15 = (float)FUN_142696270(lVar3);
    }
    fVar7 = fVar7 * fVar15;
  }
  fVar15 = *(float *)(param_1 + 0x33c);
  if (fVar15 <= 0.0) {
    fVar15 = 3.4028235e+38;
  }
  fVar8 = *(float *)(param_1 + 0x338);
  if (fVar8 <= 0.0) {
    fVar8 = -3.4028235e+38;
  }
  fVar7 = SQRT(*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
               *(float *)(param_1 + 400) * *(float *)(param_1 + 400)) * fVar7;
  if ((fVar8 <= fVar7) && (fVar8 = fVar7, fVar15 <= fVar7)) {
    fVar8 = fVar15;
  }
  local_a0 = fVar9 * fVar8;
  local_a8 = CONCAT44(fVar12 * fVar8,fVar5 * fVar8);
  local_90 = local_a0;
  (**(code **)(*param_4 + 0x5d8))(param_4,&local_a8,uVar4,0);
  return;
}



// FUNCTION 1423338f0 CheckCachedData body=81 status=ok
// SIG undefined CheckCachedData(void)

void FWalkableSlopeOverride::CheckCachedData(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  if (fVar1 != *(float *)(param_1 + 8)) {
    fVar2 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.017453292);
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 1.0 <= fVar2)) {
      fVar3 = 1.0;
    }
    *(float *)(param_1 + 0xc) = fVar3;
    *(float *)(param_1 + 8) = fVar1;
  }
  return;
}



// FUNCTION 142333950 FUN_142333950 body=206 status=ok
// SIG undefined FUN_142333950(void)

undefined8
FUN_142333950(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             char param_9)

{
  char cVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_9 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x7e8))(param_1), cVar1 == '\0')) {
    return 0;
  }
  FUN_142913490(param_1[0x44],param_2 + 0x48,param_2 + 0x3c,param_5,CONCAT44(uVar2,param_7));
  cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x5d0))(param_1,param_8,param_6,param_7,param_4,param_5);
  }
  return 1;
}



// FUNCTION 142333a20 FUN_142333a20 body=1377 status=ok
// SIG undefined FUN_142333a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142333a20(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  float *local_230;
  undefined1 *local_228;
  float *local_220;
  undefined1 *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  float local_200;
  int local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined1 local_1e8 [16];
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  undefined1 local_1c0 [40];
  byte local_198 [12];
  float local_18c;
  float local_108 [18];
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  fVar16 = param_2[2] + param_3[2];
  fVar17 = param_2[1] + param_3[1];
  fVar18 = *param_2 + *param_3;
  local_200 = fVar16;
  local_208._0_4_ = fVar18;
  local_208._4_4_ = fVar17;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af0318) && (_Init_thread_header(&DAT_146af0318), DAT_146af0318 == -1))
  {
    FName::FName(&DAT_146af0310,"CheckLedgeDirection",1);
    _Init_thread_footer(&DAT_146af0318);
  }
  local_238 = (undefined8 *)param_1[0x44];
  FUN_1422ffb20(local_108,DAT_146af0310,local_1e8,0);
  FUN_1426d3dd0(local_1c0);
  FUN_1426ea8d0(local_1c0,2);
  (**(code **)(*param_1 + 0x478))(param_1,local_108,local_1c0);
  lVar1 = *(longlong *)(param_1[0x44] + 0x4d0);
  uVar9 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
  uVar10 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
  uVar11 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
  uVar12 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
  auVar14._4_4_ = uVar10;
  auVar14._0_4_ = uVar9;
  auVar14._8_4_ = uVar11;
  auVar14._12_4_ = uVar12;
  auVar15._4_4_ = uVar11;
  auVar15._0_4_ = uVar10;
  auVar15._8_4_ = uVar9;
  auVar15._12_4_ = uVar12;
  auVar15 = minps(auVar14,auVar15);
  auVar2._4_4_ = uVar9;
  auVar2._0_4_ = uVar11;
  auVar2._8_4_ = uVar10;
  auVar2._12_4_ = uVar12;
  auVar15 = minps(auVar15,auVar2);
  local_1f4 = *(float *)(lVar1 + 0x714) * auVar15._0_4_;
  local_1f0 = auVar15._0_4_ * *(float *)(lVar1 + 0x710);
  local_1f8 = 3;
  uVar7 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
  _guard_xfg_dispatch_icall_nop(local_198,0,0x90);
  local_18c = 1.0;
  uVar8 = FUN_14046f570(param_1);
  fVar5 = local_200;
  fVar4 = local_208._4_4_;
  fVar3 = (float)local_208;
  if (local_1f8 == 1) {
    if (((local_1f4 <= 0.0001) && (local_1f0 <= 0.0001)) && (local_1ec <= 0.0001))
    goto LAB_142333dd4;
LAB_142333bf4:
    local_210 = &DAT_146aefe88;
    local_218 = local_1c0;
    local_220 = local_108;
    local_230 = &local_1d8;
    local_228 = (undefined1 *)CONCAT44(local_228._4_4_,uVar7);
    local_238 = &local_208;
    local_1d8 = (float)local_208;
    fStack_1d4 = local_208._4_4_;
    local_1d0 = local_200;
    local_208 = *(undefined8 *)param_2;
    local_200 = param_2[2];
    FUN_1423103c0(uVar8,&local_1f8,&DAT_1464aa810,local_198);
  }
  else {
    if (((local_1f8 == 2) || (local_1f8 == 3)) && (0.0001 < local_1f4)) goto LAB_142333bf4;
LAB_142333dd4:
    local_220 = (float *)&DAT_146aefe88;
    local_228 = local_1c0;
    local_230 = local_108;
    local_238 = (undefined8 *)CONCAT44(local_238._4_4_,uVar7);
    local_1d8 = (float)local_208;
    fStack_1d4 = local_208._4_4_;
    local_1d0 = local_200;
    local_208 = *(undefined8 *)param_2;
    local_200 = param_2[2];
    FUN_142319320(uVar8,local_198,&local_208,&local_1d8);
  }
  if ((local_198[0] & 1) == 0) {
LAB_142333c91:
    fVar13 = *(float *)(param_1 + 0x81) + *(float *)((longlong)param_1 + 0x234);
    local_208._0_4_ = fVar13 * *param_4 + fVar18;
    local_208._4_4_ = fVar13 * param_4[1] + fVar17;
    local_200 = fVar13 * param_4[2] + fVar16;
    uVar8 = FUN_14046f570(param_1);
    if (local_1f8 == 1) {
      if ((local_1f4 <= 0.0001) && (local_1f0 <= 0.0001)) goto joined_r0x000142333e5b;
LAB_142333d13:
      local_1d0 = local_200;
      local_210 = &DAT_146aefe88;
      local_218 = local_1c0;
      local_220 = local_108;
      local_1d8 = (float)local_208;
      fStack_1d4 = local_208._4_4_;
      local_230 = &local_1d8;
      local_228 = (undefined1 *)CONCAT44(local_228._4_4_,uVar7);
      local_238 = &local_208;
      local_208 = CONCAT44(fVar4,fVar3);
      local_200 = fVar5;
      FUN_1423103c0(uVar8,&local_1f8,&DAT_1464aa810,local_198);
    }
    else {
      local_1ec = local_1f4;
      if ((local_1f8 == 2) || (local_1f8 == 3)) {
joined_r0x000142333e5b:
        if (0.0001 < local_1ec) goto LAB_142333d13;
      }
      local_1d0 = local_200;
      local_220 = (float *)&DAT_146aefe88;
      local_228 = local_1c0;
      local_230 = local_108;
      local_1d8 = (float)local_208;
      fStack_1d4 = local_208._4_4_;
      local_238 = (undefined8 *)CONCAT44(local_238._4_4_,uVar7);
      local_208 = CONCAT44(fVar4,fVar3);
      local_200 = fVar5;
      FUN_142319320(uVar8,local_198,&local_208,&local_1d8);
    }
LAB_142333d76:
    if ((local_18c < 1.0) &&
       (cVar6 = (**(code **)(*param_1 + 0x7f0))(param_1,local_198), cVar6 != '\0')) {
      uVar8 = 1;
      goto LAB_142333eb5;
    }
  }
  else {
    cVar6 = (**(code **)(*param_1 + 0x7f0))(param_1,local_198);
    if (cVar6 != '\0') {
      if ((local_198[0] & 1) == 0) goto LAB_142333c91;
      goto LAB_142333d76;
    }
  }
  uVar8 = 0;
LAB_142333eb5:
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 142333f90 FUN_142333f90 body=1857 status=ok
// SIG undefined FUN_142333f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142333f90(longlong *param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined1 *local_2b8;
  undefined8 *local_2b0;
  undefined1 *local_2a8;
  undefined8 *local_2a0;
  undefined1 local_298 [8];
  undefined8 local_290;
  float local_288;
  undefined8 local_278;
  float local_270;
  undefined8 local_258;
  float local_250;
  int local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined8 local_1f8;
  undefined4 local_1ec;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 local_18c [36];
  undefined8 local_168 [9];
  longlong local_120;
  longlong local_100;
  undefined8 local_e8 [9];
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  uVar8 = (**(code **)(*param_1 + 0x5c0))();
  if ((char)uVar8 == '\0') {
    return uVar8;
  }
  fVar11 = *param_2;
  fVar13 = param_2[1];
  param_2[2] = 0.0;
  fVar12 = fVar11 * fVar11 + fVar13 * fVar13;
  if (fVar12 == 1.0) {
    local_290 = *(undefined8 *)param_2;
    local_288 = param_2[2];
    fVar15 = (float)((ulonglong)local_290 >> 0x20);
    fVar18 = local_288;
    fVar16 = (float)local_290;
  }
  else {
    fVar15 = DAT_1468b5d94;
    fVar18 = DAT_1468b5d98;
    fVar16 = DAT_1468b5d90;
    if (1e-08 <= fVar12) {
      auVar20 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar15 = auVar20._0_4_;
      fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
      fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
      fVar16 = fVar11 * fVar15;
      fVar15 = fVar13 * fVar15;
      fVar18 = 0.0;
    }
  }
  lVar1 = *(longlong *)(param_1[0x44] + 0x4d0);
  lVar9 = param_1[0x2f];
  auVar19._0_4_ = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
  auVar19._4_4_ = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
  auVar19._8_4_ = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
  auVar19._12_4_ = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
  auVar20._4_4_ = auVar19._8_4_;
  auVar20._0_4_ = auVar19._4_4_;
  auVar20._8_4_ = auVar19._0_4_;
  auVar20._12_4_ = auVar19._12_4_;
  auVar20 = minps(auVar19,auVar20);
  auVar3._4_4_ = auVar19._0_4_;
  auVar3._0_4_ = auVar19._8_4_;
  auVar3._8_4_ = auVar19._4_4_;
  auVar3._12_4_ = auVar19._12_4_;
  auVar20 = minps(auVar20,auVar3);
  fVar17 = auVar20._0_4_ * *(float *)(lVar1 + 0x714);
  fVar11 = fVar17 * 1.2;
  fVar12 = *(float *)(lVar9 + 0x220) + fVar16 * fVar11;
  fVar13 = *(float *)(lVar9 + 0x224) + fVar15 * fVar11;
  fVar11 = *(float *)(lVar9 + 0x228) + fVar18 * fVar11;
  local_270 = fVar11;
  _guard_xfg_dispatch_icall_nop(&local_1f8,0,0x90);
  local_1ec = 0x3f800000;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146af0338) &&
     (_Init_thread_header(&DAT_146af0338), DAT_146af0338 == -1)) {
    FName::FName(&DAT_146af0330,"CheckWaterJump",1);
    _Init_thread_footer(&DAT_146af0338);
  }
  local_2c8 = (undefined8 *)param_1[0x44];
  FUN_1422ffb20(local_168,DAT_146af0330,local_298,0);
  FUN_1426d3dd0(local_238);
  FUN_1426ea8d0(local_238,2);
  (**(code **)(*param_1 + 0x478))(param_1,local_168,local_238);
  lVar9 = *(longlong *)(param_1[0x44] + 0x4d0);
  auVar14._0_4_ = *(uint *)(lVar9 + 0x230) & _DAT_146af0070;
  auVar14._4_4_ = *(uint *)(lVar9 + 0x234) & uRam0000000146af0074;
  auVar14._8_4_ = *(uint *)(lVar9 + 0x238) & uRam0000000146af0078;
  auVar14._12_4_ = *(uint *)(lVar9 + 0x23c) & uRam0000000146af007c;
  auVar2._4_4_ = auVar14._8_4_;
  auVar2._0_4_ = auVar14._4_4_;
  auVar2._8_4_ = auVar14._0_4_;
  auVar2._12_4_ = auVar14._12_4_;
  auVar20 = minps(auVar14,auVar2);
  auVar4._4_4_ = auVar14._0_4_;
  auVar4._0_4_ = auVar14._8_4_;
  auVar4._8_4_ = auVar14._4_4_;
  auVar4._12_4_ = auVar14._12_4_;
  auVar20 = minps(auVar20,auVar4);
  local_244 = *(float *)(lVar9 + 0x714) * auVar20._0_4_;
  local_240 = auVar20._0_4_ * *(float *)(lVar9 + 0x710);
  local_248 = 3;
  uVar7 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
  local_290 = *(undefined8 *)(param_1[0x2f] + 0x220);
  local_288 = *(float *)(param_1[0x2f] + 0x228);
  uVar8 = FUN_14046f570(param_1);
  if (local_248 == 1) {
    if (((local_244 <= 0.0001) && (local_240 <= 0.0001)) && (local_23c <= 0.0001))
    goto LAB_1423343c1;
LAB_1423342c3:
    local_250 = local_288;
    local_2a8 = local_238;
    local_278 = CONCAT44(fVar13,fVar12);
    local_2a0 = &DAT_146aefe88;
    local_2b0 = local_168;
    local_2c0 = &local_278;
    local_2b8 = (undefined1 *)CONCAT44(local_2b8._4_4_,uVar7);
    local_2c8 = &local_258;
    local_258 = local_290;
    local_270 = fVar11;
    cVar6 = FUN_1423103c0(uVar8,&local_248,&DAT_1464aa810,&local_1f8);
  }
  else {
    if (((local_248 == 2) || (local_248 == 3)) && (0.0001 < local_244)) goto LAB_1423342c3;
LAB_1423343c1:
    local_270 = local_288;
    local_2b8 = local_238;
    local_258 = CONCAT44(fVar13,fVar12);
    local_2b0 = &DAT_146aefe88;
    local_2c0 = local_168;
    local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,uVar7);
    local_278 = local_290;
    local_250 = fVar11;
    cVar6 = FUN_142319320(uVar8,&local_1f8,&local_278,&local_258);
  }
  if (cVar6 == '\0') {
LAB_1423345d8:
    uVar8 = 0;
  }
  else {
    lVar9 = FWeakObjectPtr::Get(local_18c);
    if (lVar9 != 0) {
      lVar10 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1423345d8;
    }
    fVar17 = fVar17 * 3.2;
    *(ulonglong *)param_3 = CONCAT44(local_1bc * -1.0,local_1c0 * -1.0);
    param_3[2] = local_1b8 * -1.0;
    lVar9 = param_1[0x2f];
    fVar11 = *param_3;
    fVar12 = *(float *)(lVar9 + 0x220);
    fVar15 = *(float *)(lVar9 + 0x224);
    local_290 = *(undefined8 *)(lVar9 + 0x220);
    fVar13 = param_3[1];
    local_288 = *(float *)(lVar9 + 0x228) + *(float *)(param_1 + 0x62);
    fVar18 = fVar17 * param_3[2] + local_288;
    local_270 = fVar18;
    if ((*(int *)(lVar1 + 0x38) < DAT_146af0348) &&
       (_Init_thread_header(&DAT_146af0348), DAT_146af0348 == -1)) {
      FName::FName(&DAT_146af0340,"CheckWaterJump",1);
      _Init_thread_footer(&DAT_146af0348);
    }
    local_2c8 = (undefined8 *)param_1[0x44];
    FUN_1422ffb20(local_e8,DAT_146af0340,local_298,1);
    FUN_1426d3dd0(local_218);
    FUN_1426ea8d0(local_218,2);
    (**(code **)(*param_1 + 0x478))(param_1,local_e8,local_218);
    uVar8 = FUN_14046f570(param_1);
    local_2c0 = local_e8;
    local_250 = local_288;
    local_2b0 = &DAT_146aefe88;
    local_2b8 = local_218;
    local_278 = CONCAT44(fVar15 + fVar17 * fVar13,fVar17 * fVar11 + fVar12);
    local_258 = local_290;
    local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,uVar7);
    local_270 = fVar18;
    cVar6 = FUN_142319320(uVar8,&local_1f8,&local_258,&local_278);
    if ((cVar6 == '\0') ||
       (cVar6 = (**(code **)(*param_1 + 0x7f0))(param_1,&local_1f8), cVar6 != '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 1423346e0 FUN_1423346e0 body=919 status=ok
// SIG undefined FUN_1423346e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423346e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_res8;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffc0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x30) = 1;
  *(undefined8 *)(param_1 + 0x3c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x44) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x48) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x50) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x54) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x5c) = DAT_1468b5d98;
  local_34 = 0xffffffff;
  uStack_2c = 0xffffffff;
  local_24 = 0xffffffff;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffff8;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfc;
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x74) = local_94;
  *(undefined4 *)(param_1 + 0x80) = local_88;
  *(undefined8 *)(param_1 + 0x90) = local_78;
  *(undefined8 *)(param_1 + 0x9c) = local_6c;
  *(undefined8 *)(param_1 + 0xa8) = local_60;
  *(undefined8 *)(param_1 + 0xb4) = local_54;
  *(undefined8 *)(param_1 + 0xc0) = local_48;
  *(undefined8 *)(param_1 + 0x84) = local_84;
  *(undefined4 *)(param_1 + 0x8c) = local_7c;
  *(undefined4 *)(param_1 + 0x98) = local_70;
  *(undefined4 *)(param_1 + 0xa4) = local_64;
  *(undefined4 *)(param_1 + 0xb0) = local_58;
  *(undefined4 *)(param_1 + 0xbc) = local_4c;
  *(undefined4 *)(param_1 + 200) = local_40;
  *(undefined4 *)(param_1 + 0xd0) = local_38;
  *(undefined4 *)(param_1 + 0xcc) = local_3c;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = (undefined4)local_34;
  *(undefined4 *)(param_1 + 0xd8) = local_34._4_4_;
  *(undefined4 *)(param_1 + 0xdc) = (undefined4)uStack_2c;
  *(undefined4 *)(param_1 + 0xe0) = uStack_2c._4_4_;
  *(undefined4 *)(param_1 + 0xe4) = local_24;
  *(undefined4 *)(param_1 + 0xe8) = local_20;
  *(undefined8 *)(param_1 + 0xf0) = local_18;
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uStack_c,local_10);
  *(undefined8 *)(param_1 + 0x100) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x108) = DAT_1468b5da8;
  *(undefined8 *)(param_1 + 0x10c) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x114) = DAT_1468b5da8;
  uVar3 = DAT_1464aa81c;
  uVar2 = DAT_1464aa818;
  uVar1 = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x120) = DAT_1464aa810;
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x138) = (undefined4)local_res8;
  *(undefined4 *)(param_1 + 0x13c) = local_res8._4_4_;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x154) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x15c) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x160) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x168) = DAT_1468b5da8;
  *(undefined8 *)(param_1 + 0x178) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x180) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x184) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x18c) = DAT_1468b5da8;
  *(undefined8 *)(param_1 + 0x1a8) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1b0) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1c0) = DAT_1468b5d98;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 400) = (undefined4)local_res8;
  *(undefined4 *)(param_1 + 0x194) = local_res8._4_4_;
  *(undefined8 *)(param_1 + 0x198) = 0;
  local_res8 = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)local_res8;
  *(undefined4 *)(param_1 + 0x1cc) = local_res8._4_4_;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  FRootMotionSourceGroup::Clear(param_1 + 0x220);
  return;
}



// FUNCTION 142334ae0 FUN_142334ae0 body=157 status=ok
// SIG undefined FUN_142334ae0(void)

void FUN_142334ae0(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  }
  if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      lVar4 = FUN_14046f570(param_1);
      if (lVar4 != 0) {
        FUN_142541fb0(lVar4,param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142334b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  return;
}



// FUNCTION 142334b80 FUN_142334b80 body=105 status=ok
// SIG undefined FUN_142334b80(void)

void FUN_142334b80(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_142332130;
  FUN_14234b4d0(param_1,local_58);
  return;
}



// FUNCTION 142334bf0 FUN_142334bf0 body=128 status=ok
// SIG undefined FUN_142334bf0(void)

void FUN_142334bf0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x2a0))(param_1), cVar1 != '\0')) {
    lVar3 = param_1[0xc2];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1[0x43] + 0x28))();
      param_1[0xc2] = lVar3;
    }
    iVar2 = FNetworkPredictionData_Client_Character::GetSavedMoveIndex(lVar3,param_2);
    if (iVar2 != -1) {
      FUN_14232c2d0(lVar3,iVar2);
    }
  }
  return;
}



// FUNCTION 142334c70 FUN_142334c70 body=257 status=ok
// SIG undefined FUN_142334c70(void)

void FUN_142334c70(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_5);
  local_48 = 0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x48,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *puVar4 = &PTR_FUN_14504b6b0;
    uVar3 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar1;
    puVar4[4] = *param_4;
    *(undefined4 *)(puVar4 + 5) = uVar3;
    *(undefined4 *)(puVar4 + 2) = param_2;
    puVar4[1] = param_1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = local_res8;
    *(undefined4 *)(puVar4 + 6) = local_resc;
    puVar4[7] = param_6;
    *(undefined1 *)(puVar4 + 8) = param_7;
    *(undefined1 *)((longlong)puVar4 + 0x41) = param_8;
    *(undefined1 *)((longlong)puVar4 + 0x42) = param_9;
  }
  local_78[0] = &LAB_142332410;
  FUN_14234b4d0(param_1,local_78);
  return;
}



// FUNCTION 142334d80 FUN_142334d80 body=257 status=ok
// SIG undefined FUN_142334d80(void)

void FUN_142334d80(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_5);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14504b6c8;
    *(undefined1 *)(puVar3 + 2) = param_7;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_res8;
    *(undefined4 *)(puVar3 + 3) = local_resc;
    puVar3[5] = param_6;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar3[6] = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)(puVar3 + 7) = uVar2;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x3c) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uVar2;
    *(undefined1 *)(puVar3 + 9) = param_9;
    *(undefined4 *)(puVar3 + 4) = param_2;
    *(undefined1 *)((longlong)puVar3 + 0x1c) = param_8;
  }
  local_78[0] = &LAB_142332610;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142334e90 FUN_142334e90 body=293 status=ok
// SIG undefined FUN_142334e90(void)

void FUN_142334e90(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_7);
  local_48 = 0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_4;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *puVar4 = &PTR_FUN_14504b6e0;
    puVar4[3] = uVar1;
    *(undefined4 *)(puVar4 + 2) = param_2;
    *(undefined4 *)((longlong)puVar4 + 0x14) = param_3;
    uVar3 = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)((longlong)puVar4 + 0x24) = *param_5;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar3;
    *(undefined4 *)(puVar4 + 6) = param_6;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x34) = local_res8;
    *(undefined4 *)(puVar4 + 7) = local_resc;
    puVar4[8] = param_8;
    *(undefined1 *)(puVar4 + 9) = param_9;
    *(undefined1 *)((longlong)puVar4 + 0x49) = param_10;
    *(undefined1 *)((longlong)puVar4 + 0x4a) = param_11;
  }
  local_78[0] = &LAB_1423328d0;
  FUN_14234b4d0(param_1,local_78);
  return;
}



// FUNCTION 142334fc0 FUN_142334fc0 body=293 status=ok
// SIG undefined FUN_142334fc0(void)

void FUN_142334fc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_7);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_4;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *puVar3 = &PTR_FUN_14504b6f8;
    *(undefined8 *)((longlong)puVar3 + 0x14) = uVar1;
    *(undefined4 *)(puVar3 + 4) = param_6;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar2;
    *(undefined4 *)((longlong)puVar3 + 0x24) = local_res8;
    *(undefined4 *)(puVar3 + 5) = local_resc;
    puVar3[6] = param_8;
    *(undefined1 *)(puVar3 + 7) = param_9;
    *(undefined1 *)((longlong)puVar3 + 0x39) = param_10;
    *(undefined1 *)((longlong)puVar3 + 0x3a) = param_11;
    *(undefined4 *)(puVar3 + 9) = param_3;
    uVar2 = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x3c) = *param_5;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uVar2;
  }
  local_78[0] = &LAB_142332270;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 1423350f0 FUN_1423350f0 body=643 status=ok
// SIG undefined FUN_1423350f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423350f0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 *local_1d8 [2];
  undefined1 local_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_198;
  undefined8 local_188;
  undefined4 local_180;
  undefined **local_178;
  undefined1 local_170 [144];
  undefined1 local_e0 [104];
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  FWeakObjectPtr::operator=(&local_1e8,param_9);
  local_188 = param_1;
  local_180 = param_2;
  FUN_142326440(&local_178,param_3);
  local_74 = param_5;
  local_70 = *param_6;
  local_68 = *(undefined4 *)(param_6 + 1);
  local_64 = *param_7;
  local_5c = *(undefined4 *)(param_7 + 1);
  local_54 = local_1e8;
  local_50 = local_1e4;
  local_48 = param_10;
  local_40 = param_11;
  local_3f = param_12;
  local_3e = param_13;
  local_1a8 = 0;
  local_198 = 0;
  local_58 = param_8;
  local_78 = param_4;
  puVar1 = (undefined8 *)FUN_140438ef0(0x158,local_1c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b710;
    puVar1[1] = local_188;
    *(undefined4 *)(puVar1 + 2) = local_180;
    FUN_142326440(puVar1 + 3,&local_178);
    *(undefined1 *)(puVar1 + 0x23) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x11c) = local_74;
    puVar1[0x24] = local_70;
    *(undefined4 *)(puVar1 + 0x25) = local_68;
    *(undefined8 *)((longlong)puVar1 + 300) = local_64;
    *(undefined4 *)((longlong)puVar1 + 0x134) = local_5c;
    *(undefined4 *)(puVar1 + 0x27) = local_58;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = local_54;
    *(undefined4 *)(puVar1 + 0x28) = local_50;
    puVar1[0x29] = local_48;
    *(undefined1 *)(puVar1 + 0x2a) = local_40;
    *(undefined1 *)((longlong)puVar1 + 0x151) = local_3f;
    *(undefined1 *)((longlong)puVar1 + 0x152) = local_3e;
  }
  local_1d8[0] = &LAB_142332720;
  FUN_14234b4d0(param_1,local_1d8);
  local_178 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(local_e0);
  FUN_14074e810(local_170);
  *param_3 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_3 + 0x13);
  FUN_14074e810(param_3 + 1);
  return;
}



// FUNCTION 142335380 FUN_142335380 body=544 status=ok
// SIG undefined FUN_142335380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142335380(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined8 local_144;
  undefined4 local_13c;
  undefined **local_138;
  undefined1 local_130 [144];
  undefined1 local_a0 [104];
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FWeakObjectPtr::operator=(&local_1d8,param_9);
  local_16c = *param_6;
  local_164 = *(undefined4 *)(param_6 + 1);
  local_15c = local_1d8;
  local_158 = local_1d4;
  local_150 = param_10;
  local_148 = param_11;
  local_147 = param_12;
  local_146 = param_13;
  local_160 = param_8;
  local_144 = *param_7;
  local_13c = *(undefined4 *)(param_7 + 1);
  local_178 = param_1;
  local_170 = param_2;
  FUN_142326440(&local_138,param_3);
  local_34 = param_5;
  local_198 = 0;
  local_188 = 0;
  local_38 = param_4;
  puVar1 = (undefined8 *)FUN_140438ef0(0x150,local_1b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b728;
    puVar1[1] = local_178;
    *(undefined4 *)(puVar1 + 2) = local_170;
    *(undefined8 *)((longlong)puVar1 + 0x14) = local_16c;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_164;
    *(undefined4 *)(puVar1 + 4) = local_160;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_15c;
    *(undefined4 *)(puVar1 + 5) = local_158;
    puVar1[6] = local_150;
    *(undefined1 *)(puVar1 + 7) = local_148;
    *(undefined1 *)((longlong)puVar1 + 0x39) = local_147;
    *(undefined1 *)((longlong)puVar1 + 0x3a) = local_146;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = local_144;
    *(undefined4 *)((longlong)puVar1 + 0x44) = local_13c;
    FUN_142326440(puVar1 + 9,&local_138);
    *(undefined1 *)(puVar1 + 0x29) = local_38;
    *(undefined4 *)((longlong)puVar1 + 0x14c) = local_34;
  }
  local_1c8[0] = &LAB_142332150;
  FUN_142339040(param_1,local_1c8);
  local_138 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(local_a0);
  FUN_14074e810(local_130);
  *param_3 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_3 + 0x13);
  FUN_14074e810(param_3 + 1);
  return;
}



// FUNCTION 1423355a0 FUN_1423355a0 body=1061 status=ok
// SIG undefined FUN_1423355a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1423355a0(longlong *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined1 local_198;
  undefined8 local_190;
  uint local_188;
  uint local_184;
  undefined **local_180;
  undefined1 local_178 [144];
  undefined1 local_e8 [104];
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  cVar14 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar14 != '\0') {
    lVar16 = param_1[0xc2];
    if (lVar16 == 0) {
      lVar16 = (**(code **)(param_1[0x43] + 0x28))();
      param_1[0xc2] = lVar16;
    }
    if (((*(uint *)(lVar16 + 0xa0) & 1) != 0) &&
       ((*(uint *)((longlong)param_1 + 0x4b4) & 0x100) == 0)) {
      uVar18 = 0;
      *(uint *)(lVar16 + 0xa0) = *(uint *)(lVar16 + 0xa0) & 0xfffffffe;
      plVar6 = *(longlong **)(param_1[0x44] + 0x168);
      uVar19 = 0;
      if (plVar6 != (longlong *)0x0) {
        local_190 = 0;
        cVar14 = (**(code **)(*plVar6 + 0x400))(plVar6,0);
        if (cVar14 != '\0') {
          return false;
        }
      }
      if (*(int *)(lVar16 + 0x18) != 0) {
        lVar12 = param_1[0xf8];
        lVar13 = param_1[0x76];
        uVar2 = *(undefined4 *)((longlong)param_1 + 0x7c4);
        lVar17 = param_1[0xfa];
        lVar7 = param_1[0xfb];
        lVar8 = param_1[0xfc];
        lVar9 = param_1[0xfd];
        lVar10 = param_1[0xfe];
        lVar11 = param_1[0xff];
        local_198 = (char)lVar12;
        FUN_142326440(&local_180,param_1 + 0xc5);
        uVar3 = *(uint *)(param_1 + 0x60);
        local_184 = *(uint *)((longlong)param_1 + 0x4b4) >> 0xb;
        uVar4 = *(uint *)(param_1[0x44] + 0x56c);
        local_188 = uVar4 >> 2;
        if ((char)param_1[0x49] == '\x03') {
          uVar19 = 0x10;
        }
        local_190 = CONCAT44(local_190._4_4_,uVar3 >> 6);
        *(uint *)(param_1[0x44] + 0x56c) = uVar19 | uVar4 & 0xffffffef;
        *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) | 8;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
        uVar20 = uVar18;
        uVar15 = (char)lVar12;
        uVar19 = uVar3 >> 6;
        if (0 < *(int *)(lVar16 + 0x18)) {
          do {
            plVar6 = *(longlong **)(uVar18 + *(longlong *)(lVar16 + 0x10));
            (**(code **)(*plVar6 + 0x48))(plVar6,param_1[0x44]);
            lVar12 = *param_1;
            uVar15 = (**(code **)(*plVar6 + 0x50))(plVar6);
            local_1a8 = plVar6 + 0x35;
            (**(code **)(lVar12 + 0x950))
                      (param_1,*(undefined4 *)((longlong)plVar6 + 0x1c),(int)plVar6[4],uVar15);
            (**(code **)(*plVar6 + 0x30))(plVar6,param_1[0x44],1);
            uVar19 = (int)uVar20 + 1;
            uVar18 = uVar18 + 0x10;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 < *(int *)(lVar16 + 0x18));
          uVar15 = local_198;
          uVar19 = (uint)local_190;
        }
        uVar4 = local_184;
        uVar3 = local_188;
        if (*(longlong *)(lVar16 + 0x30) != 0) {
          puVar1 = (uint *)(*(longlong *)(lVar16 + 0x30) + 0x18);
          *puVar1 = *puVar1 | 8;
        }
        *(int *)(param_1 + 0x76) = (int)lVar13;
        *(undefined4 *)((longlong)param_1 + 0x7c4) = uVar2;
        *(undefined1 *)(param_1 + 0xf8) = uVar15;
        param_1[0xfa] = lVar17;
        param_1[0xfb] = lVar7;
        param_1[0xfc] = lVar8;
        param_1[0xfd] = lVar9;
        param_1[0xfe] = lVar10;
        param_1[0xff] = lVar11;
        FUN_14243f720(param_1 + 0xc5,&local_180);
        lVar17 = param_1[0x44];
        if ((*(byte *)(lVar17 + 0x56c) & 0x40) != 0) {
          FUN_142465d80(param_1 + 0xc5,lVar17 + 0x5d0,0);
          *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) & 0xffffffbf;
          lVar17 = param_1[0x44];
        }
        FRootMotionSourceGroup::Clear(lVar17 + 0x5d0);
        *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) & 0xffffffdf;
        *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) & 0xfffffff7;
        puVar1 = (uint *)(param_1[0x44] + 0x56c);
        *puVar1 = *puVar1 ^ ((uVar3 & 0xff) << 2 ^ *(uint *)(param_1[0x44] + 0x56c)) & 4;
        *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfffff7ff;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffbf;
        *(uint *)((longlong)param_1 + 0x4b4) =
             *(uint *)((longlong)param_1 + 0x4b4) | (uVar4 & 1) << 0xb;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | (uVar19 & 1 | 4) << 6;
        iVar5 = *(int *)(lVar16 + 0x18);
        local_180 = &PTR__scalar_deleting_destructor__144080980;
        FUN_14074e760(local_e8);
        FUN_14074e810(local_178);
        return 0 < iVar5;
      }
      *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) & 0xffffffdf;
      if ((*(byte *)(param_1[0x44] + 0x56c) & 0x40) != 0) {
        FUN_142465d80(param_1 + 0xc5,param_1[0x44] + 0x5d0,0);
        *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) & 0xffffffbf;
      }
    }
  }
  return false;
}



// FUNCTION 1423359d0 FUN_1423359d0 body=234 status=ok
// SIG undefined FUN_1423359d0(void)

void FUN_1423359d0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_4);
  local_38 = 0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x38,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *puVar3 = &PTR_FUN_14504b698;
    *(undefined8 *)((longlong)puVar3 + 0x14) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar2;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 4) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x24) = local_resc;
    puVar3[5] = param_5;
    *(undefined1 *)(puVar3 + 6) = param_6;
    *(undefined1 *)((longlong)puVar3 + 0x31) = param_7;
    *(undefined1 *)((longlong)puVar3 + 0x32) = param_8;
  }
  local_68[0] = FUN_142332050;
  FUN_14234b4d0(param_1,local_68);
  return;
}



// FUNCTION 142335ac0 FUN_142335ac0 body=194 status=ok
// SIG undefined FUN_142335ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142335ac0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 != '\0') {
    local_30 = DAT_1468b5d98;
    local_20 = *(undefined4 *)(param_3 + 1);
    local_38 = _DAT_1468b5d90;
    local_28 = *param_3;
    (**(code **)(*param_1 + 0xa18))
              (param_1,param_2,&local_28,&local_38,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 142335b90 FUN_142335b90 body=354 status=ok
// SIG undefined FUN_142335b90(void)

void FUN_142335b90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_2 + 0x108);
  local_28 = *(undefined8 *)(param_2 + 0x100);
  plVar1 = *(longlong **)(param_3 + 0x4c8);
  local_18 = *param_5;
  local_10 = *(undefined4 *)(param_5 + 1);
  if (((*(byte *)((longlong)plVar1 + 0x4b4) & 0x20) == 0) &&
     ((*(uint *)(plVar1 + 0x60) & 0x2000) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_142399680(plVar1[0x2f],&local_18,&local_28,0,0,uVar2);
  *(undefined8 *)((longlong)plVar1 + 0x18c) = *(undefined8 *)(param_2 + 0x54);
  *(undefined4 *)((longlong)plVar1 + 0x194) = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = FWeakObjectPtr::Get(param_2 + 0x138);
  (**(code **)(*plVar1 + 0x6d8))(plVar1,uVar3,*(undefined8 *)(param_2 + 0x140),1);
  *(uint *)(plVar1 + 0x82) =
       *(uint *)(plVar1 + 0x82) ^ (*(uint *)(param_2 + 0x60) ^ *(uint *)(plVar1 + 0x82)) & 1;
  uVar4 = (*(uint *)(param_2 + 0x60) ^ *(uint *)(plVar1 + 0x82)) & 2 ^ *(uint *)(plVar1 + 0x82);
  *(uint *)(plVar1 + 0x82) = uVar4;
  *(uint *)(plVar1 + 0x82) = (*(uint *)(param_2 + 0x60) ^ uVar4) & 4 ^ uVar4;
  *(undefined4 *)((longlong)plVar1 + 0x414) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(plVar1 + 0x83) = *(undefined4 *)(param_2 + 0x68);
  FUN_140729f20(plVar1 + 0x84,param_2 + 0x70);
  *(float *)(param_1 + 0x20) = *(float *)(param_2 + 0x20) + *(float *)(param_1 + 0x20);
  *(undefined4 *)(param_3 + 0x574) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_3 + 0x570) = *(undefined4 *)(param_2 + 0x28);
  return;
}



// FUNCTION 142335d00 ComponentHasTag body=55 status=ok
// SIG undefined ComponentHasTag(void)

ulonglong UActorComponent::ComponentHasTag(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x88);
    plVar1 = plVar2 + *(int *)(param_1 + 0x90);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 142335d40 ComponentOverlapMulti body=140 status=ok
// SIG undefined ComponentOverlapMulti(void)

bool UWorld::ComponentOverlapMulti
               (undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (param_3 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x4f8))(param_3);
    (**(code **)(*param_3 + 0x558))(param_3,param_2,param_1,param_4,param_5,uVar2,param_6,param_7);
    bVar1 = 0 < *(int *)(param_2 + 8);
  }
  return bVar1;
}



// FUNCTION 142335dd0 ComponentOverlapMultiByChannel body=27 status=ok
// SIG undefined ComponentOverlapMultiByChannel(void)

undefined1
UWorld::ComponentOverlapMultiByChannel(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  if (param_3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142335de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_3 + 0x558))(param_3,param_2,param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142335df0 FUN_142335df0 body=550 status=ok
// SIG undefined FUN_142335df0(void)

ulonglong FUN_142335df0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  ulonglong in_RAX;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong *local_res18 [2];
  byte local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 *local_70;
  longlong local_68;
  longlong **local_60;
  undefined1 *local_58;
  byte *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(longlong *)(param_1 + 0x218) != 0) && (param_3 != (longlong *)0x0)) {
    local_res18[0] = param_3;
    local_a4 = (**(code **)(*param_3 + 0x4f8))(param_3);
    cVar2 = (**(code **)(*local_res18[0] + 0x6f0))();
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)(**(code **)(*local_res18[0] + 0x4d0))();
      FUN_1426d3dd0(&local_48);
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      uStack_3c = puVar4[3];
      local_38 = puVar4[4];
      uStack_34 = puVar4[5];
      uStack_30 = puVar4[6];
      uStack_2c = puVar4[7];
      uVar5 = FUN_142318d90(param_1,param_2,param_4,param_5,local_a4,param_7,&local_48,
                            &DAT_146aefe88);
      return uVar5;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,0);
    }
    local_a0 = 0;
    lVar6 = (**(code **)(*local_res18[0] + 0x6d0))(local_res18[0],0,1);
    in_RAX = 0;
    if ((lVar6 != 0) && (in_RAX = FBodyInstance::IsValidBodyInstance(lVar6), (char)in_RAX != '\0'))
    {
      local_a8[0] = 0;
      local_res8[0] = 0;
      if (*(longlong *)(param_1 + 0x970) != 0) {
        cVar2 = FUN_142498210(*(longlong *)(param_1 + 0x970),*(undefined4 *)(param_7 + 0x20),1);
        if (cVar2 != '\0') {
          local_res8[0] = 1;
        }
      }
      local_98 = param_6;
      local_88 = param_5;
      local_70 = &local_a4;
      local_60 = local_res18;
      local_58 = local_res8;
      local_50 = local_a8;
      lVar1 = *(longlong *)(lVar6 + 0x110);
      local_68 = param_7;
      lVar8 = lVar1;
      if (lVar1 == 0) {
        lVar8 = *(longlong *)(lVar6 + 0x118);
      }
      if (lVar8 != 0) {
        if (lVar8 == lVar1) {
          sVar3 = *(short *)(lVar6 + 6);
        }
        else {
          sVar3 = *(short *)(lVar6 + 8);
        }
        local_90 = param_4;
        local_80 = param_2;
        local_78 = param_1;
        plVar7 = (longlong *)FUN_1426e2550((int)sVar3);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x348))
                    (plVar7,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0xb8);
        }
        FUN_14232ae40(&local_98,lVar8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x350))(plVar7);
        }
      }
      return (ulonglong)local_a8[0];
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142336020 FUN_142336020 body=138 status=ok
// SIG undefined FUN_142336020(void)

float FUN_142336020(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x6b8))();
  fVar2 = *(float *)(param_1 + 0x6a) * *(float *)(param_1 + 0x6a) +
          *(float *)((longlong)param_1 + 0x354) * *(float *)((longlong)param_1 + 0x354) +
          *(float *)(param_1 + 0x6b) * *(float *)(param_1 + 0x6b);
  if ((0.0 < fVar2) && (1e-08 < fVar1)) {
    fVar2 = SQRT(fVar2) * (1.0 / fVar1);
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    return fVar1;
  }
  return 0.0;
}



// FUNCTION 1423360b0 FUN_1423360b0 body=2241 status=ok
// SIG undefined FUN_1423360b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423360b0(longlong *param_1,undefined8 *param_2,float param_3,float param_4,uint *param_5,
                  float param_6,byte *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  float local_2ac;
  undefined1 local_2a8 [4];
  float local_2a4;
  byte local_298 [4];
  uint local_294;
  uint local_290;
  float local_28c;
  uint local_288;
  undefined8 local_284;
  uint local_27c;
  undefined8 local_278;
  uint local_270;
  undefined8 local_26c;
  uint local_264;
  undefined8 local_260;
  uint local_258;
  undefined8 local_254;
  uint local_24c;
  undefined8 local_248;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208 [4];
  undefined1 local_1e8 [144];
  undefined8 local_158 [9];
  longlong local_110;
  longlong local_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  *param_5 = *param_5 & 0xfffffff8;
  param_5[1] = 0;
  param_5[2] = 0;
  _guard_xfg_dispatch_icall_nop(param_5 + 4,0,0x90);
  bVar4 = false;
  param_5[7] = 0x3f800000;
  lVar2 = *(longlong *)(param_1[0x44] + 0x4d0);
  auVar12._0_4_ = *(uint *)(lVar2 + 0x230) & _DAT_146af0070;
  auVar12._4_4_ = *(uint *)(lVar2 + 0x234) & uRam0000000146af0074;
  auVar12._8_4_ = *(uint *)(lVar2 + 0x238) & uRam0000000146af0078;
  auVar12._12_4_ = *(uint *)(lVar2 + 0x23c) & uRam0000000146af007c;
  auVar13._4_4_ = auVar12._8_4_;
  auVar13._0_4_ = auVar12._4_4_;
  auVar13._8_4_ = auVar12._0_4_;
  auVar13._12_4_ = auVar12._12_4_;
  auVar13 = minps(auVar12,auVar13);
  auVar3._4_4_ = auVar12._0_4_;
  auVar3._0_4_ = auVar12._8_4_;
  auVar3._8_4_ = auVar12._4_4_;
  auVar3._12_4_ = auVar12._12_4_;
  auVar13 = minps(auVar13,auVar3);
  local_2a4 = auVar13._0_4_;
  fVar14 = local_2a4 * *(float *)(lVar2 + 0x714);
  fVar11 = local_2a4 * *(float *)(lVar2 + 0x710);
  if (((((param_7 != (byte *)0x0) && ((*param_7 & 1) != 0)) && ((*param_7 & 2) == 0)) &&
      ((*(float *)(param_7 + 0x58) < *(float *)(param_7 + 0x4c) &&
       ((*(float *)(param_7 + 0x44) - *(float *)(param_7 + 0x50)) *
        (*(float *)(param_7 + 0x44) - *(float *)(param_7 + 0x50)) +
        (*(float *)(param_7 + 0x48) - *(float *)(param_7 + 0x54)) *
        (*(float *)(param_7 + 0x48) - *(float *)(param_7 + 0x54)) <= 0.0001)))) &&
     (cVar5 = (**(code **)(*param_1 + 0x868))(param_1,param_7 + 0x14,param_7 + 0x20,fVar14),
     cVar5 != '\0')) {
    bVar4 = true;
    cVar5 = (**(code **)(*param_1 + 0x7f0))(param_1,param_7);
    FFindFloorResult::SetFromSweep
              (param_5,param_7,*(float *)(param_2 + 1) - *(float *)(param_7 + 0x1c),cVar5);
    if (cVar5 != '\0') {
      return;
    }
  }
  if (param_4 < param_3) {
    return;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146af0358) &&
     (_Init_thread_header(&DAT_146af0358), DAT_146af0358 == -1)) {
    FName::FName(&DAT_146af0350,"ComputeFloorDist",1);
    _Init_thread_footer(&DAT_146af0358);
  }
  local_2e8 = param_1[0x44];
  FUN_1422ffb20(local_158,DAT_146af0350,local_2a8,0);
  FUN_1426d3dd0(local_208);
  FUN_1426ea8d0(local_208,2);
  (**(code **)(*param_1 + 0x478))(param_1,local_158,local_208);
  uVar6 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
  local_2a4 = (float)uVar6;
  if (((!bVar4) && (0.0 < param_4)) && (0.0 < param_6)) {
    local_2b8 = CONCAT44(param_6,3);
    fVar15 = (fVar11 - fVar14) * 0.100000024;
    local_2b0 = fVar11 - fVar15;
    fVar16 = fVar15 + param_4;
    _guard_xfg_dispatch_icall_nop(local_298,0,0x90);
    local_2c0 = *(float *)(param_2 + 1) - fVar16;
    local_2c8 = *param_2;
    local_2d8 = local_158;
    local_2e0 = &local_2b8;
    local_28c = 1.0;
    local_2e8 = CONCAT44(local_2e8._4_4_,uVar6);
    local_2d0 = local_208;
    cVar5 = (**(code **)(*param_1 + 0x890))(param_1,local_298,param_2,&local_2c8);
    if (cVar5 != '\0') {
      if ((local_298[0] & 2) == 0) {
        cVar5 = (**(code **)(*param_1 + 0x868))(param_1,param_2,&local_278,local_2b8._4_4_);
        if (cVar5 == '\0') goto LAB_142336415;
      }
      else {
LAB_142336415:
        fVar10 = (local_2b8._4_4_ - 0.15) - 0.0001;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        local_2b8 = CONCAT44(fVar10,(int)local_2b8);
        if ((int)local_2b8 == 1) {
          if ((fVar10 <= 0.0001) && (local_2b0 <= 0.0001)) goto joined_r0x000142336472;
LAB_142336478:
          fVar15 = (fVar11 - fVar14) * 0.9;
          fVar16 = fVar15 + param_4;
          local_2b0 = fVar10;
          if (fVar10 <= fVar11 - fVar15) {
            local_2b0 = fVar11 - fVar15;
          }
          _guard_xfg_dispatch_icall_nop(local_298,0,0x90);
          local_2c0 = *(float *)(param_2 + 1) - fVar16;
          local_2c8 = *param_2;
          local_2d8 = local_158;
          local_2e0 = &local_2b8;
          local_28c = 1.0;
          local_2e8 = CONCAT44(local_2e8._4_4_,uVar6);
          local_2d0 = local_208;
          (**(code **)(*param_1 + 0x890))(param_1,local_298,param_2,&local_2c8);
        }
        else {
          local_2ac = fVar10;
          if (((int)local_2b8 == 2) || ((int)local_2b8 == 3)) {
joined_r0x000142336472:
            if (0.0001 < local_2ac) goto LAB_142336478;
          }
        }
      }
      fVar10 = fVar14;
      if (fVar14 <= 2.4) {
        fVar10 = 2.4;
      }
      fVar15 = local_28c * fVar16 - fVar15;
      fVar16 = -fVar10;
      if (-fVar10 <= fVar15) {
        fVar16 = fVar15;
      }
      if (((local_298[0] & 1) == 0) || ((local_298[0] & 2) != 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      param_5[1] = (uint)fVar16;
      param_5[2] = 0;
      *param_5 = *param_5 & 0xfffffff8 | uVar9;
      *(byte *)(param_5 + 4) = (byte)param_5[4] & 0xfe;
      param_5[6] = param_5[6] & 0xfffffffe;
      param_5[8] = local_288;
      param_5[5] = local_294;
      *(undefined8 *)(param_5 + 0xc) = local_278;
      param_5[6] = param_5[6] | local_290 & 1;
      *(undefined8 *)(param_5 + 0xf) = local_26c;
      *(undefined8 *)(param_5 + 0x12) = local_260;
      *(undefined8 *)(param_5 + 0x15) = local_254;
      *(undefined8 *)(param_5 + 0x18) = local_248;
      param_5[7] = (uint)local_28c;
      *(undefined8 *)(param_5 + 9) = local_284;
      param_5[0xb] = local_27c;
      param_5[0xe] = local_270;
      param_5[0x11] = local_264;
      param_5[0x14] = local_258;
      param_5[0x17] = local_24c;
      param_5[0x1a] = local_240;
      param_5[0x1c] = local_238;
      param_5[0x1b] = local_23c;
      *(byte *)(param_5 + 4) =
           ((byte)param_5[4] ^ local_298[0]) & 2 ^ (local_298[0] & 1 | (byte)param_5[4]);
      param_5[0x1d] = local_234;
      param_5[0x1e] = local_230;
      param_5[0x1f] = local_22c;
      param_5[0x20] = local_228;
      param_5[0x21] = local_224;
      param_5[0x22] = local_220;
      *(undefined8 *)(param_5 + 0x24) = local_218;
      *(undefined8 *)(param_5 + 0x26) = local_210;
      if ((((((local_298[0] & 1) != 0) && ((local_298[0] & 2) == 0)) &&
           (cVar5 = (**(code **)(*param_1 + 0x7f0))(param_1), cVar5 != '\0')) &&
          (((lVar7 = FUN_140729f20(local_1e8), DAT_146aefe40 == '\0' ||
            (0.0 < *(float *)(param_1 + 0x71))) ||
           (*(float *)((longlong)param_1 + 0x844) <=
            *(float *)(lVar7 + 0x30) * *(float *)(lVar7 + 0x3c) +
            *(float *)(lVar7 + 0x38) * *(float *)(lVar7 + 0x2c) +
            *(float *)(lVar7 + 0x34) * *(float *)(lVar7 + 0x40))))) && (fVar16 <= param_4)) {
        *param_5 = *param_5 | 2;
        goto LAB_14233685f;
      }
    }
  }
  if (((*param_5 & 1) != 0) || ((param_5[4] & 2) != 0)) {
    if (0.0 < param_3) {
      uVar1 = *param_2;
      fVar15 = *(float *)(param_2 + 1);
      local_2c8 = uVar1;
      local_2c0 = fVar15;
      if ((*(int *)(lVar2 + 0x38) < DAT_146af0368) &&
         (_Init_thread_header(&DAT_146af0368), DAT_146af0368 == -1)) {
        FName::FName(&DAT_146af0360,"FloorLineTrace",1);
        _Init_thread_footer(&DAT_146af0368);
      }
      local_158[0] = DAT_146af0360;
      _guard_xfg_dispatch_icall_nop(local_298,0,0x90);
      uVar6 = local_2c8._4_4_;
      local_2b0 = local_2c0 + -(fVar11 + param_3);
      local_28c = 1.0;
      uVar8 = FUN_14046f570(param_1);
      local_2c0 = local_2b0;
      local_2d0 = &DAT_146aefe88;
      local_2e0 = local_158;
      local_2e8 = CONCAT44(local_2e8._4_4_,local_2a4);
      local_2c8 = CONCAT44(uVar6,(undefined4)local_2c8);
      local_2d8 = local_208;
      local_2b8 = uVar1;
      local_2b0 = fVar15;
      cVar5 = FUN_142319320(uVar8,local_298,&local_2b8,&local_2c8);
      if ((cVar5 != '\0') && (0.0 < local_28c)) {
        if (fVar14 <= 2.4) {
          fVar14 = 2.4;
        }
        *param_5 = *param_5 | 1;
        fVar11 = local_28c * (fVar11 + param_3) - fVar11;
        if (fVar11 <= -fVar14) {
          fVar11 = -fVar14;
        }
        if ((fVar11 <= param_3) &&
           (cVar5 = (**(code **)(*param_1 + 0x7f0))(param_1,local_298), cVar5 != '\0')) {
          local_2e8 = CONCAT71(local_2e8._1_7_,1);
          FUN_1423503d0(param_5,local_298,param_5[1],fVar11);
          goto LAB_14233685f;
        }
      }
    }
    *param_5 = *param_5 & 0xfffffffd;
  }
  param_5[1] = (uint)param_4;
LAB_14233685f:
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142336980 FUN_142336980 body=580 status=ok
// SIG undefined FUN_142336980(void)

float * FUN_142336980(longlong *param_1,float *param_2,float *param_3,longlong param_4,char param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(param_4 + 0x38);
  fVar8 = *(float *)(param_4 + 0x40);
  if ((((0.9999 <= fVar8) || (fVar8 <= 0.0001)) || (*(float *)(param_4 + 0x34) <= 0.0001)) ||
     ((param_5 != '\0' ||
      (cVar3 = (**(code **)(*param_1 + 0x7f0))
                         (*(float *)(param_4 + 0x34),param_4,param_3,param_4,uVar11,fVar8,
                          *(undefined8 *)(param_4 + 0x2c)), cVar3 == '\0')))) {
    fVar8 = param_3[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    param_2[2] = fVar8;
  }
  else {
    fVar9 = param_3[2];
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar8 = -((fVar1 * (float)uVar11 + fVar2 * (float)((ulonglong)uVar11 >> 0x20) + fVar9 * fVar8) /
             fVar8);
    if ((*(byte *)((longlong)param_1 + 0x4b4) & 1) == 0) {
      fVar4 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar5 = fVar8 * fVar8 + fVar4;
      fVar10 = SQRT(fVar9 * fVar9 + fVar4);
      fVar9 = fVar8;
      fVar4 = fVar1;
      fVar6 = fVar2;
      if ((fVar5 != 1.0) &&
         (fVar9 = DAT_1468b5d98, fVar4 = DAT_1468b5d90, fVar6 = DAT_1468b5d94, 1e-08 <= fVar5)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar9 = fVar8 * fVar6;
        fVar4 = fVar1 * fVar6;
        fVar6 = fVar2 * fVar6;
      }
      *param_2 = fVar4 * fVar10;
      param_2[1] = fVar6 * fVar10;
      param_2[2] = fVar9 * fVar10;
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = fVar8;
    }
  }
  return param_2;
}



// FUNCTION 142336bd0 FUN_142336bd0 body=474 status=ok
// SIG undefined FUN_142336bd0(void)

undefined8 * FUN_142336bd0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  
  fVar4 = *(float *)(param_1 + 0x350);
  fVar5 = *(float *)(param_1 + 0x354);
  local_40 = *(float *)(param_1 + 0x358);
  fVar1 = fVar4 * fVar4 + fVar5 * fVar5 + local_40 * local_40;
  if (0.0001 <= fVar1) {
    if (fVar1 == 1.0) {
      local_48 = *(undefined8 *)(param_1 + 0x350);
      local_40 = *(float *)(param_1 + 0x358);
    }
    else {
LAB_142336cdc:
      if (1e-08 <= fVar1) {
        auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
        fVar2 = auVar3._0_4_;
        fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
        fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
        local_40 = local_40 * fVar2;
        local_48 = CONCAT44(fVar5 * fVar2,fVar4 * fVar2);
      }
      else {
        local_40 = DAT_1468b5d98;
        local_48 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
    }
LAB_142336d87:
    FVector::Rotation(&local_48);
  }
  else {
    if ((*(uint *)(param_1 + 0x4b4) & 0x400000) != 0) {
      fVar5 = *(float *)(param_1 + 0x4d0);
      fVar4 = *(float *)(param_1 + 0x4cc);
      local_40 = *(float *)(param_1 + 0x4d4);
      fVar1 = fVar4 * fVar4 + fVar5 * fVar5 + local_40 * local_40;
      if (0.0001 < fVar1) {
        if (fVar1 != 1.0) goto LAB_142336cdc;
        local_48 = *(undefined8 *)(param_1 + 0x4cc);
        local_40 = *(float *)(param_1 + 0x4d4);
        goto LAB_142336d87;
      }
    }
    *param_2 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  }
  return param_2;
}



// FUNCTION 142336db0 FUN_142336db0 body=250 status=ok
// SIG undefined FUN_142336db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142336db0(longlong *param_1,undefined4 param_2,longlong param_3,float param_4,
                       uint *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  
  if (0.0 < param_4) {
    lVar1 = *(longlong *)(param_1[0x44] + 0x4d0);
    uVar4 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
    uVar5 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
    uVar6 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
    uVar7 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = uVar7;
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar5;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar7;
    auVar9 = minps(auVar8,auVar9);
    auVar2._4_4_ = uVar4;
    auVar2._0_4_ = uVar6;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar7;
    auVar9 = minps(auVar9,auVar2);
    auVar10._4_12_ = auVar9._4_12_;
    fVar3 = param_4;
    if (param_4 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar11 = *(float *)(param_3 + 0x28) -
             (*(float *)(param_3 + 0x1c) - auVar9._0_4_ * *(float *)(lVar1 + 0x710));
    auVar10._0_4_ = auVar9._0_4_ * *(float *)(lVar1 + 0x714) + fVar3;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar3 = param_4 - fVar11;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    (**(code **)(*param_1 + 0x880))(param_1,param_3 + 0x14,fVar3,auVar10._0_8_,param_5,param_2,0);
    in_RAX = 0;
    if (((byte)*param_5 & 3) == 3) {
      if (fVar11 + (float)param_5[1] <= param_4) {
        return 1;
      }
      *param_5 = *param_5 & 0xfffffffd;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142336eb0 FUN_142336eb0 body=174 status=ok
// SIG undefined FUN_142336eb0(void)

undefined8 *
FUN_142336eb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 uVar3;
  undefined1 local_28 [32];
  undefined4 uVar4;
  
  uVar3 = param_5;
  FUN_142365a40(param_1,param_2,param_3,in_R9,param_5,param_6);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  cVar1 = (**(code **)(*param_1 + 0x558))(param_1);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)
             (**(code **)(*param_1 + 0x858))
                       (param_1,local_28,param_2,param_3,CONCAT44(uVar4,param_4),param_5,param_6);
    *param_2 = *puVar2;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  }
  return param_2;
}



// FUNCTION 142336f60 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<USceneComponent_*,FTransform>,TDefaultMapHashableKeyFuncs<USceneComponent_*,FTransform,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142337010 ConstrainAnimRootMotionVelocity body=65 status=ok
// SIG undefined ConstrainAnimRootMotionVelocity(void)

undefined8 *
UCharacterMovementComponent::ConstrainAnimRootMotionVelocity
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  cVar2 = (**(code **)(*param_1 + 0x558))();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 8);
  }
  return param_2;
}



// FUNCTION 142337060 ConstrainInputAcceleration body=132 status=ok
// SIG undefined ConstrainInputAcceleration(void)

undefined8 *
UCharacterMovementComponent::ConstrainInputAcceleration
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  if (*(float *)(param_3 + 1) != 0.0) {
    cVar2 = (**(code **)(*param_1 + 0x560))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x558))(param_1);
      if (cVar2 == '\0') goto LAB_1423370c3;
    }
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_3 + 4);
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1423370c3:
  uVar1 = *(undefined4 *)(param_3 + 1);
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423370f0 FUN_1423370f0 body=372 status=ok
// SIG undefined FUN_1423370f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1423370f0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x820) == 0) || (*(longlong **)(param_1 + 0x818) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0x18))(), cVar4 == '\0')) {
    local_88._0_4_ = *param_3;
    local_88._4_4_ = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = param_3[4];
    uStack_74 = param_3[5];
    uStack_70 = param_3[6];
    uStack_6c = param_3[7];
    local_68 = param_3[8];
    uStack_64 = param_3[9];
    uStack_60 = param_3[10];
    uStack_5c = param_3[0xb];
  }
  else {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x820) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x818);
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_88,param_3,param_1);
  }
  local_b8 = CONCAT44(local_88._4_4_,(undefined4)local_88);
  uStack_b0 = CONCAT44(uStack_7c,uStack_80);
  local_a8 = CONCAT44(uStack_74,local_78);
  uStack_a0 = CONCAT44(uStack_6c,uStack_70);
  local_98 = CONCAT44(uStack_64,local_68);
  uStack_90 = CONCAT44(uStack_5c,uStack_60);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x4c0);
  (**(code **)(*plVar6 + 0xa80))(plVar6,&local_58,&local_b8);
  if (((*(int *)(param_1 + 0x830) == 0) || (*(longlong **)(param_1 + 0x828) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0x18))(), cVar4 == '\0')) {
    puVar5 = &local_b8;
    local_b8 = local_58;
    uStack_b0 = uStack_50;
    local_98 = local_38;
    uStack_90 = uStack_30;
    local_a8 = local_48;
    uStack_a0 = uStack_40;
  }
  else {
    if (*(int *)(param_1 + 0x830) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x828);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_88,&local_58,param_1);
    puVar5 = &local_88;
  }
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar1;
  uVar1 = puVar5[5];
  param_2[4] = puVar5[4];
  param_2[5] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return param_2;
}



// FUNCTION 142337270 FUN_142337270 body=1013 status=ok
// SIG undefined FUN_142337270(void)

void FUN_142337270(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  short *psVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  short local_res8;
  short sStackX_a;
  undefined4 uStackX_c;
  longlong local_res10;
  
  iVar16 = 0;
  local_res10 = param_2;
  if (0 < *(int *)(param_1 + 0x7b0)) {
    do {
      pvVar9 = *(void **)(param_1 + 0x7a8);
      if (*(void **)(param_1 + 0x7a8) == (void *)0x0) {
        pvVar9 = (void *)(param_1 + 0x728);
      }
      cVar7 = FRootMotionServerToLocalIDMapping::IsStillValid
                        ((void *)((longlong)pvVar9 + (longlong)iVar16 * 8),param_4);
      if ((cVar7 != '\0') && (-1 < iVar16 + -1)) {
        if (iVar16 != 0) {
          iVar8 = *(int *)(param_1 + 0x7b0);
          if (iVar8 - iVar16 != 0) {
            pvVar9 = *(void **)(param_1 + 0x7a8);
            if (*(void **)(param_1 + 0x7a8) == (void *)0x0) {
              pvVar9 = (void *)(param_1 + 0x728);
            }
            _guard_xfg_dispatch_icall_nop
                      (pvVar9,(void *)((longlong)pvVar9 + (longlong)iVar16 * 8),
                       (longlong)(iVar8 - iVar16) << 3);
            iVar8 = *(int *)(param_1 + 0x7b0);
          }
          *(int *)(param_1 + 0x7b0) = iVar8 - iVar16;
        }
        break;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0x7b0));
  }
  iVar16 = *(int *)(param_1 + 0x7b0) + -1;
  lVar11 = local_res10;
  if (-1 < iVar16) {
    plVar18 = (longlong *)(local_res10 + 8);
    lVar17 = (longlong)iVar16 * 8;
    lVar20 = (longlong)*(int *)(param_1 + 0x7b0) << 3;
    lVar21 = lVar17;
    do {
      plVar14 = *(longlong **)(lVar11 + 0x88);
      if (*(longlong **)(lVar11 + 0x88) == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      plVar12 = plVar14 + (longlong)*(int *)(lVar11 + 0x90) * 2;
      for (; plVar14 != plVar12; plVar14 = plVar14 + 2) {
        if (*plVar14 != 0) {
          lVar10 = *(longlong *)(param_1 + 0x7a8);
          if (*(longlong *)(param_1 + 0x7a8) == 0) {
            lVar10 = param_1 + 0x728;
          }
          if (*(short *)(*plVar14 + 0x12) == *(short *)(lVar10 + 2 + lVar17)) goto LAB_142337427;
        }
      }
      iVar8 = *(int *)(param_1 + 0x7b0);
      iVar13 = (iVar8 - iVar16) + -1;
      if (iVar13 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x7a8);
        if (*(longlong *)(param_1 + 0x7a8) == 0) {
          lVar11 = param_1 + 0x728;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar11 + lVar21),(void *)(lVar20 + lVar11),(longlong)iVar13 << 3);
        iVar8 = *(int *)(param_1 + 0x7b0);
        lVar11 = local_res10;
      }
      *(int *)(param_1 + 0x7b0) = iVar8 + -1;
LAB_142337427:
      lVar20 = lVar20 + -8;
      lVar21 = lVar21 + -8;
      lVar17 = lVar17 + -8;
      iVar16 = iVar16 + -1;
    } while (-1 < iVar16);
  }
  plVar18 = *(longlong **)(param_3 + 0x88);
  if (*(longlong **)(param_3 + 0x88) == (longlong *)0x0) {
    plVar18 = (longlong *)(param_3 + 8);
  }
  plVar14 = plVar18 + (longlong)*(int *)(param_3 + 0x90) * 2;
  do {
    if (plVar18 == plVar14) {
      return;
    }
    lVar17 = *plVar18;
    if (lVar17 != 0) {
      sVar3 = *(short *)(lVar17 + 0x12);
      psVar1 = (short *)(param_1 + 0x728);
      *(undefined2 *)(lVar17 + 0x12) = 0;
      bVar6 = false;
      psVar15 = *(short **)(param_1 + 0x7a8);
      if (*(short **)(param_1 + 0x7a8) == (short *)0x0) {
        psVar15 = psVar1;
      }
      psVar2 = psVar15 + (longlong)*(int *)(param_1 + 0x7b0) * 4;
      for (; psVar15 != psVar2; psVar15 = psVar15 + 4) {
        if (sVar3 == *psVar15) {
          bVar6 = true;
          *(short *)(*plVar18 + 0x12) = psVar15[1];
          *(undefined4 *)(psVar15 + 2) = param_4;
          break;
        }
      }
      plVar12 = *(longlong **)(lVar11 + 0x88);
      if (bVar6) {
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)(lVar11 + 8);
        }
        plVar19 = plVar12 + (longlong)*(int *)(lVar11 + 0x90) * 2;
        for (; plVar12 != plVar19; plVar12 = plVar12 + 2) {
          plVar5 = (longlong *)*plVar12;
          if ((plVar5 != (longlong *)0x0) &&
             (*(short *)((longlong)plVar5 + 0x12) == *(short *)(*plVar18 + 0x12))) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
            break;
          }
        }
      }
      else {
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)(lVar11 + 8);
        }
        plVar19 = plVar12 + (longlong)*(int *)(lVar11 + 0x90) * 2;
        for (; plVar12 != plVar19; plVar12 = plVar12 + 2) {
          plVar5 = (longlong *)*plVar12;
          if (plVar5 != (longlong *)0x0) {
            sVar4 = *(short *)((longlong)plVar5 + 0x12);
            psVar15 = *(short **)(param_1 + 0x7a8);
            if (*(short **)(param_1 + 0x7a8) == (short *)0x0) {
              psVar15 = psVar1;
            }
            psVar2 = psVar15 + (longlong)*(int *)(param_1 + 0x7b0) * 4;
            for (; psVar15 != psVar2; psVar15 = psVar15 + 4) {
              if (sVar4 == psVar15[1]) goto LAB_1423375b4;
            }
            cVar7 = (**(code **)(*plVar5 + 0x18))(plVar5,*plVar18);
            if (cVar7 != '\0') {
              *(short *)(*plVar18 + 0x12) = sVar4;
              FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(&local_res8);
              iVar16 = *(int *)(param_1 + 0x7b0);
              *(int *)(param_1 + 0x7b0) = iVar16 + 1;
              local_res8 = sVar3;
              sStackX_a = sVar4;
              uStackX_c = param_4;
              if (*(int *)(param_1 + 0x7b4) < iVar16 + 1) {
                TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                          (psVar1,iVar16);
              }
              psVar15 = *(short **)(param_1 + 0x7a8);
              if (*(short **)(param_1 + 0x7a8) == (short *)0x0) {
                psVar15 = psVar1;
              }
              *(ulonglong *)(psVar15 + (longlong)iVar16 * 4) =
                   CONCAT44(uStackX_c,CONCAT22(sStackX_a,local_res8));
              goto LAB_1423375c5;
            }
          }
LAB_1423375b4:
        }
        *(undefined2 *)(*plVar18 + 0x12) = 0;
      }
    }
LAB_1423375c5:
    plVar18 = plVar18 + 2;
    lVar11 = local_res10;
  } while( true );
}



// FUNCTION 142337670 FUN_142337670 body=131 status=ok
// SIG undefined FUN_142337670(void)

undefined8 * FUN_142337670(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b698;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar1 + 0x31) = *(undefined1 *)(param_1 + 0x31);
    *(undefined1 *)((longlong)puVar1 + 0x32) = *(undefined1 *)(param_1 + 0x32);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337700 FUN_142337700 body=201 status=ok
// SIG undefined FUN_142337700(void)

undefined8 * FUN_142337700(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b728;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)((longlong)puVar1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)((longlong)puVar1 + 0x3a) = *(undefined1 *)(param_1 + 0x3a);
    *(undefined8 *)((longlong)puVar1 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    FUN_142326440(puVar1 + 9,param_1 + 0x48);
    *(undefined1 *)(puVar1 + 0x29) = *(undefined1 *)(param_1 + 0x148);
    *(undefined4 *)((longlong)puVar1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423377d0 FUN_1423377d0 body=209 status=ok
// SIG undefined FUN_1423377d0(void)

undefined8 * FUN_1423377d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b668;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)((longlong)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined1 *)((longlong)puVar1 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined1 *)((longlong)puVar1 + 0x4d) = *(undefined1 *)(param_1 + 0x4d);
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_1 + 0x60);
    *(undefined2 *)((longlong)puVar1 + 0x62) = *(undefined2 *)(param_1 + 0x62);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423378b0 FUN_1423378b0 body=167 status=ok
// SIG undefined FUN_1423378b0(void)

undefined8 * FUN_1423378b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b6f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)((longlong)puVar1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)((longlong)puVar1 + 0x3a) = *(undefined1 *)(param_1 + 0x3a);
    *(undefined8 *)((longlong)puVar1 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337960 FUN_142337960 body=87 status=ok
// SIG undefined FUN_142337960(void)

undefined8 * FUN_142337960(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b5f0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_140729f20(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423379c0 FUN_1423379c0 body=114 status=ok
// SIG undefined FUN_1423379c0(void)

undefined8 * FUN_1423379c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b608;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337a40 FUN_142337a40 body=156 status=ok
// SIG undefined FUN_142337a40(void)

undefined8 * FUN_142337a40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b650;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
    *(undefined1 *)((longlong)puVar1 + 0x25) = *(undefined1 *)(param_1 + 0x25);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337ae0 FUN_142337ae0 body=149 status=ok
// SIG undefined FUN_142337ae0(void)

undefined8 * FUN_142337ae0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b6b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)((longlong)puVar1 + 0x41) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)((longlong)puVar1 + 0x42) = *(undefined1 *)(param_1 + 0x42);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337b80 CopyToEmptyStorage body=95 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_6dd8a762c81ebdce920f2a0b05f3f2f2>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x2c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14504b5c0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    FSoundAttenuationSettings::FSoundAttenuationSettings(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337be0 FUN_142337be0 body=149 status=ok
// SIG undefined FUN_142337be0(void)

undefined8 * FUN_142337be0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b6c8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined8 *)((longlong)puVar1 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337c80 FUN_142337c80 body=209 status=ok
// SIG undefined FUN_142337c80(void)

undefined8 * FUN_142337c80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b620;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x21) = *(undefined1 *)(param_1 + 0x21);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
    *(undefined2 *)((longlong)puVar1 + 0x3a) = *(undefined2 *)(param_1 + 0x3a);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined8 *)((longlong)puVar1 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_1 + 0x58);
    *(undefined4 *)((longlong)puVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337d60 FUN_142337d60 body=267 status=ok
// SIG undefined FUN_142337d60(void)

undefined8 * FUN_142337d60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b710;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    FUN_142326440(puVar1 + 3,param_1 + 0x18);
    *(undefined1 *)(puVar1 + 0x23) = *(undefined1 *)(param_1 + 0x118);
    *(undefined4 *)((longlong)puVar1 + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
    puVar1[0x24] = *(undefined8 *)(param_1 + 0x120);
    *(undefined4 *)(puVar1 + 0x25) = *(undefined4 *)(param_1 + 0x128);
    *(undefined8 *)((longlong)puVar1 + 300) = *(undefined8 *)(param_1 + 300);
    *(undefined4 *)((longlong)puVar1 + 0x134) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(puVar1 + 0x27) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)((longlong)puVar1 + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(param_1 + 0x140);
    puVar1[0x29] = *(undefined8 *)(param_1 + 0x148);
    *(undefined1 *)(puVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x150);
    *(undefined1 *)((longlong)puVar1 + 0x151) = *(undefined1 *)(param_1 + 0x151);
    *(undefined1 *)((longlong)puVar1 + 0x152) = *(undefined1 *)(param_1 + 0x152);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337e70 FUN_142337e70 body=209 status=ok
// SIG undefined FUN_142337e70(void)

undefined8 * FUN_142337e70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b680;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined8 *)((longlong)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
    *(undefined1 *)((longlong)puVar1 + 0x44) = *(undefined1 *)(param_1 + 0x44);
    *(undefined1 *)((longlong)puVar1 + 0x45) = *(undefined1 *)(param_1 + 0x45);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_1 + 0x60);
    *(undefined2 *)((longlong)puVar1 + 0x62) = *(undefined2 *)(param_1 + 0x62);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337f50 FUN_142337f50 body=143 status=ok
// SIG undefined FUN_142337f50(void)

undefined8 * FUN_142337f50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b5d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_140729f20(puVar1 + 2,param_1 + 0x10);
    puVar1[0x14] = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(puVar1 + 0x15) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined8 *)((longlong)puVar1 + 0xac) = *(undefined8 *)(param_1 + 0xac);
    *(undefined4 *)((longlong)puVar1 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142337fe0 FUN_142337fe0 body=169 status=ok
// SIG undefined FUN_142337fe0(void)

undefined8 * FUN_142337fe0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b638;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar1 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)((longlong)puVar1 + 0x35) = *(undefined1 *)(param_1 + 0x35);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    *(undefined2 *)((longlong)puVar1 + 0x4a) = *(undefined2 *)(param_1 + 0x4a);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142338090 FUN_142338090 body=167 status=ok
// SIG undefined FUN_142338090(void)

undefined8 * FUN_142338090(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b6e0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)((longlong)puVar1 + 0x49) = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)((longlong)puVar1 + 0x4a) = *(undefined1 *)(param_1 + 0x4a);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142338140 FUN_142338140 body=231 status=ok
// SIG undefined FUN_142338140(void)

void FUN_142338140(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((((*(byte *)(param_1 + 0x17) & 4) == 0) && (*(longlong *)(param_1[0x24] + 0x218) != 0)) &&
     (cVar4 = (**(code **)(*param_1 + 0x318))(), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x308))(param_1);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146531c38,param_1);
    bVar3 = false;
    *(int *)((longlong)param_1 + 0x164) = *(int *)((longlong)param_1 + 0x164) + 1;
    iVar6 = *(int *)((longlong)param_1 + 0x164);
    iVar5 = (int)param_1[0x2b] + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar7 = lVar8 << 4;
      bVar3 = false;
      do {
        lVar1 = param_1[0x2a];
        if (((*(int *)(lVar7 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar6 = *(int *)((longlong)param_1 + 0x164);
    }
    *(int *)((longlong)param_1 + 0x164) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x2a,0);
    }
  }
  return;
}



// FUNCTION 142338230 FUN_142338230 body=25 status=ok
// SIG undefined FUN_142338230(void)

void FUN_142338230(longlong param_1)

{
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) & 0xfe;
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0x3d | 2;
  return;
}



// FUNCTION 142338250 FUN_142338250 body=364 status=ok
// SIG undefined FUN_142338250(void)

undefined8 * FUN_142338250(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *local_28;
  undefined8 local_20;
  
  if (*(int *)((longlong)param_1 + 0x54) <= (int)param_1[3]) {
    iVar8 = 0;
    if (0 < (int)param_1[3]) {
      do {
        (**(code **)(*param_1 + 0x10))(param_1,(longlong)iVar8 * 0x10 + param_1[2]);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_1[3]);
    }
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 2,0);
    }
    else {
      iVar8 = (int)param_1[3];
      if (iVar8 != 0) {
        plVar9 = (longlong *)(param_1[2] + 8);
        do {
          plVar4 = (longlong *)*plVar9;
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
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  if ((int)param_1[5] != 0) {
    lVar6 = param_1[4];
    lVar7 = (longlong)(int)param_1[5];
    plVar9 = *(longlong **)(lVar6 + -0x10 + lVar7 * 0x10);
    uVar5 = *(undefined8 *)(lVar6 + -8 + lVar7 * 0x10);
    *(undefined8 *)(lVar6 + -8 + lVar7 * 0x10) = 0;
    *(undefined8 *)(lVar6 + -0x10 + lVar7 * 0x10) = 0;
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 4,(int)param_1[5] + -1,1);
    (**(code **)(*plVar9 + 8))(plVar9);
    *param_2 = plVar9;
    param_2[1] = uVar5;
    return param_2;
  }
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  (**(code **)(*local_28 + 8))();
  *param_2 = local_28;
  param_2[1] = local_20;
  return param_2;
}



// FUNCTION 1423383c0 FUN_1423383c0 body=46 status=ok
// SIG undefined FUN_1423383c0(void)

void FUN_1423383c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xd90);
  if (lVar1 != 0) {
    FUN_142324ef0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1423383f0 FUN_1423383f0 body=54 status=ok
// SIG undefined FUN_1423383f0(void)

void FUN_1423383f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x3f0);
  if (lVar1 != 0) {
    FUN_142326940(lVar1,param_1,0x3f800000);
    return;
  }
  return;
}



// FUNCTION 142338430 FUN_142338430 body=157 status=ok
// SIG undefined FUN_142338430(void)

undefined8 * FUN_142338430(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x3c0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar2,param_1,0);
    *puVar2 = &PTR__scalar_deleting_destructor__145049260;
    *(uint *)(puVar2 + 0x74) =
         *(uint *)(puVar2 + 0x74) ^
         ((uint)*(byte *)(param_1 + 0x700) ^ *(uint *)(puVar2 + 0x74)) & 1;
    *(undefined8 *)((longlong)puVar2 + 0x3a4) = *(undefined8 *)(param_1 + 0x710);
    *(undefined4 *)((longlong)puVar2 + 0x3ac) = *(undefined4 *)(param_1 + 0x718);
    uVar1 = *(undefined4 *)(param_1 + 0x6f0);
    *(uint *)((longlong)puVar2 + 0x1c) = *(uint *)((longlong)puVar2 + 0x1c) & 0xfffffffd;
    *(undefined4 *)(puVar2 + 0x76) = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423384d0 FUN_1423384d0 body=243 status=ok
// SIG undefined FUN_1423384d0(void)

undefined8 FUN_1423384d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    return 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (plVar5 != (longlong *)0x0) {
    lVar3 = FUN_14290cfd0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = (**(code **)(*plVar5 + 0x710))(plVar5);
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142338555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar5 + 0x718))(plVar5,param_1);
        return uVar4;
      }
      cVar2 = (**(code **)(*DAT_146b17150 + 0x2f0))(DAT_146b17150,plVar5);
      if (cVar2 == '\0') {
        return 0;
      }
      lVar3 = operator_new(0x3f0);
      if (lVar3 == 0) {
        return 0;
      }
      goto LAB_142338585;
    }
  }
  lVar3 = operator_new(0x3f0);
  if (lVar3 == 0) {
    return 0;
  }
  plVar5 = (longlong *)0x0;
LAB_142338585:
  uVar4 = FUN_142325290(lVar3,param_1,plVar5);
  return uVar4;
}



// FUNCTION 1423385d0 FUN_1423385d0 body=153 status=ok
// SIG undefined FUN_1423385d0(void)

undefined8 * FUN_1423385d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x3b0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar2,param_1,0);
    *puVar2 = &PTR_FUN_14504a728;
    *(uint *)(puVar2 + 0x74) =
         *(uint *)(puVar2 + 0x74) ^
         ((uint)*(byte *)(param_1 + 0x700) ^ *(uint *)(puVar2 + 0x74)) & 1;
    *(undefined4 *)((longlong)puVar2 + 0x3a4) = *(undefined4 *)(param_1 + 0x714);
    *(undefined4 *)(puVar2 + 0x75) = *(undefined4 *)(param_1 + 0x710);
    uVar1 = *(undefined4 *)(param_1 + 0x6f0);
    *(uint *)((longlong)puVar2 + 0x1c) = *(uint *)((longlong)puVar2 + 0x1c) & 0xfffffffd;
    *(undefined4 *)((longlong)puVar2 + 0x3ac) = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142338670 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_14504b5b0;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 1423387f0 FUN_1423387f0 body=134 status=ok
// SIG undefined FUN_1423387f0(void)

undefined8 *
FUN_1423387f0(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = (undefined8 *)FUN_142309ff0(local_18,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 142338880 FUN_142338880 body=1728 status=ok
// SIG undefined FUN_142338880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142338880(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 *local_190;
  float local_188;
  float local_184;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  float *local_168;
  longlong local_158;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  code *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  cVar6 = (**(code **)(*param_1 + 0x5c0))();
  if ((cVar6 != '\0') &&
     ((param_2 != '\0' || (cVar6 = (**(code **)(*param_1 + 0x778))(param_1), cVar6 != '\0')))) {
    lVar10 = param_1[0x44];
    fVar18 = *(float *)((longlong)param_1 + 0x2e4);
    if (*(float *)(*(longlong *)(lVar10 + 0x4d0) + 0x710) == fVar18) {
      if (param_2 == '\0') {
        *(uint *)(lVar10 + 0x56c) = *(uint *)(lVar10 + 0x56c) | 1;
      }
      local_108 = 0;
      local_f8 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_128);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = param_1;
        *puVar8 = &PTR_FUN_143f77b70;
      }
      local_138[0] = (code *)&LAB_142332460;
      uVar9 = FUN_14247f500();
      FUN_14247d5a0(uVar9,param_1,local_138);
    }
    else {
      if ((param_2 != '\0') && (*(char *)(lVar10 + 0x128) == '\x01')) {
        local_158 = UClass::GetDefaultObject<UDamageType>(*(undefined8 *)(lVar10 + 0x10));
        uStack_170 = (float *)&local_158;
        local_108 = 0;
        local_f8 = 0;
        local_178 = param_1;
        puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_128);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar8 + 1) = (undefined4)local_178;
          *(undefined4 *)((longlong)puVar8 + 0xc) = local_178._4_4_;
          *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_170;
          *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_170._4_4_;
        }
        local_138[0] = (code *)&LAB_1423322e0;
        uVar9 = FUN_14247f500();
        FUN_14247d5a0(uVar9,param_1,local_138);
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x200;
        lVar10 = param_1[0x44];
        fVar18 = *(float *)((longlong)param_1 + 0x2e4);
      }
      lVar1 = *(longlong *)(lVar10 + 0x4d0);
      local_108 = 0;
      local_f8 = 0;
      auVar15._0_4_ = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
      auVar15._4_4_ = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
      auVar15._8_4_ = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
      auVar15._12_4_ = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
      auVar16._4_4_ = auVar15._8_4_;
      auVar16._0_4_ = auVar15._4_4_;
      auVar16._8_4_ = auVar15._0_4_;
      auVar16._12_4_ = auVar15._12_4_;
      auVar16 = minps(auVar15,auVar16);
      local_144 = *(float *)(lVar1 + 0x710);
      auVar4._4_4_ = auVar15._0_4_;
      auVar4._0_4_ = auVar15._8_4_;
      auVar4._8_4_ = auVar15._4_4_;
      auVar4._12_4_ = auVar15._12_4_;
      auVar16 = minps(auVar16,auVar4);
      local_140 = auVar16._0_4_;
      local_148 = *(float *)(*(longlong *)(lVar10 + 0x4d0) + 0x714);
      uStack_170 = &local_148;
      local_184 = local_148;
      if (local_148 <= 0.0) {
        local_184 = 0.0;
      }
      local_168 = &local_184;
      if (local_184 <= fVar18) {
        local_184 = fVar18;
      }
      local_178 = param_1;
      puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_128);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar8 + 1) = (undefined4)local_178;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_178._4_4_;
        *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_170;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_170._4_4_;
        *puVar8 = &PTR_FUN_143f4d0b0;
        puVar8[3] = local_168;
      }
      local_138[0] = (code *)&LAB_142332320;
      uVar9 = FUN_14247f500();
      FUN_14247d5a0(uVar9,param_1,local_138);
      local_13c = local_144 - local_184;
      local_188 = local_13c * local_140;
      if (param_2 == '\0') {
        if (local_144 < local_184) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146af02d8) && (_Init_thread_header(&DAT_146af02d8), DAT_146af02d8 == -1)) {
            FName::FName(&DAT_146af02d0,"CrouchTrace",1);
            _Init_thread_footer(&DAT_146af02d8);
          }
          local_1a8 = param_1[0x44];
          FUN_1422ffb20(local_c8,DAT_146af02d0,local_180,0);
          FUN_1426d3dd0(local_e8);
          FUN_1426ea8d0(local_e8,2);
          (**(code **)(*param_1 + 0x478))(param_1,local_c8,local_e8);
          lVar10 = *(longlong *)(param_1[0x44] + 0x4d0);
          uVar11 = *(uint *)(lVar10 + 0x230) & _DAT_146af0070;
          uVar12 = *(uint *)(lVar10 + 0x234) & uRam0000000146af0074;
          uVar13 = *(uint *)(lVar10 + 0x238) & uRam0000000146af0078;
          uVar14 = *(uint *)(lVar10 + 0x23c) & uRam0000000146af007c;
          auVar17._4_4_ = uVar12;
          auVar17._0_4_ = uVar11;
          auVar17._8_4_ = uVar13;
          auVar17._12_4_ = uVar14;
          auVar3._4_4_ = uVar13;
          auVar3._0_4_ = uVar12;
          auVar3._8_4_ = uVar11;
          auVar3._12_4_ = uVar14;
          auVar16 = minps(auVar17,auVar3);
          auVar5._4_4_ = uVar11;
          auVar5._0_4_ = uVar13;
          auVar5._8_4_ = uVar12;
          auVar5._12_4_ = uVar14;
          auVar16 = minps(auVar16,auVar5);
          plVar2 = (longlong *)param_1[0x2f];
          uStack_170 = (float *)CONCAT44(uStack_170._4_4_,auVar16._0_4_ * *(float *)(lVar10 + 0x710)
                                        );
          local_178 = (longlong *)CONCAT44(*(float *)(lVar10 + 0x714) * auVar16._0_4_,3);
          local_158 = plVar2[0x44];
          local_150 = *(float *)(plVar2 + 0x45) - local_188;
          uVar7 = (**(code **)(*plVar2 + 0x4f8))();
          uVar9 = FUN_14046f570(param_1);
          local_190 = &DAT_146aefe88;
          local_198 = local_e8;
          local_1a8 = CONCAT44(local_1a8._4_4_,uVar7);
          local_1a0 = local_c8;
          cVar6 = FUN_14230f990(uVar9,&local_178,&local_158,&DAT_1464aa810);
          if (cVar6 != '\0') {
            uStack_170 = &local_148;
            local_168 = &local_144;
            local_108 = 0;
            local_f8 = 0;
            local_178 = param_1;
            puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_128);
            if (puVar8 != (undefined8 *)0x0) {
              *(undefined4 *)(puVar8 + 1) = (undefined4)local_178;
              *(undefined4 *)((longlong)puVar8 + 0xc) = local_178._4_4_;
              *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_170;
              *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_170._4_4_;
              *puVar8 = &PTR_FUN_143f4d0b0;
              puVar8[3] = local_168;
            }
            local_138[0] = (code *)&LAB_142332320;
            uVar9 = FUN_14247f500();
            FUN_14247d5a0(uVar9,param_1,local_138);
            if (local_60 != 0) {
              FMemory::Free();
            }
            if (local_80 == 0) {
              return;
            }
            FMemory::Free();
            return;
          }
          if (local_60 != 0) {
            FMemory::Free();
          }
          if (local_80 != 0) {
            FMemory::Free();
          }
        }
        if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x1000) != 0) {
          plVar2 = (longlong *)param_1[0x2f];
          local_198 = (undefined1 *)CONCAT71(local_198._1_7_,1);
          local_1a0 = (undefined1 *)((ulonglong)local_1a0 & 0xffffffff00000000);
          local_1a8 = 0;
          local_178 = (longlong *)plVar2[0x42];
          uStack_170 = (float *)plVar2[0x43];
          local_150 = -local_188;
          local_158 = 0;
          (**(code **)(*plVar2 + 0x490))(plVar2,&local_158,&local_178,1);
        }
        *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) | 1;
      }
      fVar18 = local_188;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
      plVar2 = *(longlong **)(param_1[0x44] + 0x10);
      lVar10 = plVar2[0x1f];
      if (lVar10 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar10 = plVar2[0x1f];
      }
      local_108 = 0;
      local_f8 = 0;
      uStack_170 = &local_13c;
      local_13c = *(float *)(*(longlong *)(lVar10 + 0x4d0) + 0x710) - local_184;
      local_168 = &local_188;
      local_188 = local_13c * local_140;
      local_178 = param_1;
      puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_128);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar8 + 1) = (undefined4)local_178;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_178._4_4_;
        *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_170;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_170._4_4_;
        *puVar8 = &PTR_FUN_143f4d0b0;
        puVar8[3] = local_168;
      }
      local_138[0] = FUN_1423325b0;
      uVar9 = FUN_14247f500();
      FUN_14247d5a0(uVar9,param_1,local_138);
      if ((((param_2 != '\0') && (*(char *)(param_1[0x44] + 0x128) == '\x01')) &&
          (lVar10 = FUN_14233f840(param_1), lVar10 != 0)) && (*(float *)(lVar10 + 0xb8) != 0.0)) {
        *(float *)(lVar10 + 0xb8) = *(float *)(lVar10 + 0xb8) - fVar18;
        *(undefined8 *)(lVar10 + 0xa4) = *(undefined8 *)(lVar10 + 0xb0);
        *(undefined4 *)(lVar10 + 0xac) = *(undefined4 *)(lVar10 + 0xb8);
      }
    }
  }
  return;
}



// FUNCTION 142338f40 FUN_142338f40 body=83 status=ok
// SIG undefined FUN_142338f40(void)

void FUN_142338f40(longlong *param_1)

{
  char cVar1;
  longlong *local_res8 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*param_1 + 0x358))(param_1,0);
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfb;
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x21,local_res8);
  }
  return;
}



// FUNCTION 142338fa0 FUN_142338fa0 body=71 status=ok
// SIG undefined FUN_142338fa0(void)

void FUN_142338fa0(longlong *param_1)

{
  char cVar1;
  longlong *local_res8 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x560))(param_1);
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) {
      local_res8[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x21,local_res8);
    }
  }
  return;
}



// FUNCTION 142338ff0 FUN_142338ff0 body=79 status=ok
// SIG undefined FUN_142338ff0(void)

void FUN_142338ff0(longlong *param_1)

{
  char cVar1;
  
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xfffffff7;
  FUN_1423676d0();
  cVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x6f8))(param_1);
    if (param_1[0x44] != 0) {
      FUN_14231b760();
    }
  }
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) | 8;
  return;
}



// FUNCTION 142339040 FUN_142339040 body=221 status=ok
// SIG undefined FUN_142339040(void)

void FUN_142339040(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x858) == '\0') {
    iVar1 = *(int *)(param_1 + 0x868);
    *(int *)(param_1 + 0x868) = iVar1 + 1;
    if (*(int *)(param_1 + 0x86c) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x860),iVar1);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x860),param_2);
  }
  else {
    if (*(int *)(param_2 + 8) != 0) {
      plVar3 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar3 = param_2 + 2;
      }
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 8))();
      }
    }
    (*(code *)*param_2)(uVar2);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_2[6] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142339120 FUN_142339120 body=547 status=ok
// SIG undefined FUN_142339120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142339120(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  uint local_res8;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if ((bVar1 & 0x40) == 0) {
    bVar3 = bVar1 | 0x40;
    *(byte *)(param_1 + 0x19) = bVar3;
    if ((bVar1 & 0x20) != 0) {
      (**(code **)(*param_1 + 0x340))(param_1,0);
      bVar3 = *(byte *)(param_1 + 0x19);
    }
    if ((bVar3 & 0x10) != 0) {
      (**(code **)(*param_1 + 0x348))(param_1);
    }
    uVar11 = 0;
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      if ((char)param_1[0x19] < '\0') {
        (**(code **)(*param_1 + 0x328))(param_1,0);
        *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0x7f;
        _DAT_146af0210 = 0;
      }
      FUN_14233aad0(param_1);
      param_1[0x24] = 0;
    }
    lVar2 = param_1[0x23];
    if (lVar2 != 0) {
      if ((byte)(*(char *)((longlong)param_1 + 0xca) - 1U) < 2) {
        lVar5 = (longlong)*(int *)(lVar2 + 0x328);
        if (*(int *)(lVar2 + 0x328) != 0) {
          bVar13 = (longlong *)**(undefined8 **)(lVar2 + 800) != param_1;
          local_res8 = 0;
          uVar8 = uVar11;
          uVar9 = uVar11;
          uVar10 = uVar11;
          do {
            uVar4 = (uint)uVar10;
            uVar7 = (uint)uVar9;
            uVar8 = uVar8 + 1;
            uVar9 = (ulonglong)(uVar7 + 1);
            if ((longlong)uVar8 < lVar5) {
              puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 800) + uVar8 * 8);
              do {
                if (bVar13 != ((longlong *)*puVar6 != param_1)) break;
                uVar9 = (ulonglong)((int)uVar9 + 1);
                uVar8 = uVar8 + 1;
                puVar6 = puVar6 + 1;
              } while ((longlong)uVar8 < lVar5);
            }
            iVar12 = (int)uVar9 - uVar7;
            if (bVar13 != false) {
              if (uVar4 != uVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar2 + 800) + (longlong)(int)uVar4 * 8),
                           (void *)(*(longlong *)(lVar2 + 800) + (longlong)(int)uVar7 * 8),
                           (longlong)iVar12 << 3);
                uVar4 = local_res8;
              }
              local_res8 = uVar4 + iVar12;
              uVar10 = (ulonglong)local_res8;
            }
            bVar13 = (bool)(bVar13 ^ 1);
          } while ((longlong)uVar8 < lVar5);
          *(int *)(lVar2 + 0x328) = (int)uVar10;
        }
      }
      else {
        FUN_14223ac60(lVar2,param_1);
      }
      FUN_14223af50(lVar2,param_1);
      if (*(longlong **)(lVar2 + 0x168) == param_1) {
        FUN_14223f010(lVar2,0);
      }
    }
    (**(code **)(*param_1 + 0x3c0))(param_1,0);
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    if (iVar12 < (int)DAT_1469e91c4) {
      uVar7 = iVar12 >> 0x1f & 0xffff;
      uVar4 = iVar12 + uVar7;
      uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) | 0x20000000;
  }
  return;
}



// FUNCTION 142339350 FUN_142339350 body=57 status=ok
// SIG undefined FUN_142339350(void)

void FUN_142339350(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146531c50,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014233937c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x310))(param_1);
    return;
  }
  return;
}



// FUNCTION 142339390 DestroyRenderState_Concurrent body=8 status=ok
// SIG undefined DestroyRenderState_Concurrent(void)

void UActorComponent::DestroyRenderState_Concurrent(longlong param_1)

{
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfd;
  return;
}



// FUNCTION 1423393a0 FUN_1423393a0 body=795 status=ok
// SIG undefined FUN_1423393a0(void)

void FUN_1423393a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong local_res18;
  longlong local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_d8 [2];
  undefined **local_c8 [6];
  ulonglong local_98;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  bVar12 = false;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  if (*(char *)(param_1 + 0xca) == '\x01') {
    FArchive::FArchive(local_c8);
    local_c8[0] = &PTR_FUN_145046d78;
    FArchive::SetIsSaving(local_c8,1);
    local_98 = local_98 | 0x20000000;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar13 = FUN_14178ca30(param_1);
    if (lVar3 == 0) {
      local_120 = (longlong *)0x0;
    }
    else {
      local_120 = *(longlong **)(lVar3 + 0x38);
    }
    local_118 = 0xffffffff;
    local_114 = 0x101;
    local_112 = 0;
    local_128 = lVar3;
    FUN_140472e10(&local_128);
    plVar6 = local_120;
    while (local_120 = plVar6, plVar6 != (longlong *)0x0) {
      cVar11 = FUN_141764c10(plVar6,local_c8);
      if ((cVar11 != '\0') && (iVar18 = (int)plVar6[6], uVar17 = 0, 0 < iVar18)) {
        do {
          lVar20 = (longlong)(*(int *)((longlong)plVar6 + 0x34) * (int)uVar17) +
                   (longlong)*(int *)((longlong)plVar6 + 0x44);
          if (lVar13 == 0) {
LAB_1423394fa:
            uVar19 = 0;
          }
          else {
            if (lVar3 == 0) {
              iVar14 = 0x7fffffff;
            }
            else {
              iVar14 = *(int *)(lVar3 + 0x40);
            }
            uVar19 = lVar20 + lVar13;
            if (iVar14 < *(int *)((longlong)plVar6 + 0x34) * iVar18 +
                         *(int *)((longlong)plVar6 + 0x44)) goto LAB_1423394fa;
          }
          cVar11 = (**(code **)(*plVar6 + 0x2b8))(plVar6,lVar20 + param_1,uVar19,0x4000000000000200)
          ;
          if (cVar11 == '\0') {
            iVar18 = *(int *)(param_1 + 0xf0);
            local_110 = 0;
            uStack_108 = 0;
            local_100 = 0;
            uStack_f8 = 0;
            *(int *)(param_1 + 0xf0) = iVar18 + 1;
            if (*(int *)(param_1 + 0xf4) < iVar18 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar1,iVar18);
            }
            uVar10 = uStack_f8;
            uVar9 = local_100;
            uVar8 = uStack_108;
            uVar7 = local_110;
            lVar20 = *plVar1;
            local_110 = 0;
            uStack_108 = 0;
            puVar2 = (undefined8 *)((longlong)iVar18 * 0x20 + lVar20);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            local_100 = 0;
            uStack_f8 = 0;
            puVar2 = (undefined8 *)((longlong)iVar18 * 0x20 + 0x10 + lVar20);
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            lVar15 = (longlong)*(int *)(param_1 + 0xf0) * 0x20 + *plVar1;
            local_f0 = 0;
            uStack_e8 = 0;
            *(undefined4 *)(lVar15 + -0x20) = 0;
            *(undefined4 *)(lVar15 + -0x1c) = 0;
            *(undefined4 *)(lVar15 + -0x18) = 0;
            *(undefined4 *)(lVar15 + -0x14) = 0;
            *(undefined4 *)(lVar15 + -0x10) = 0;
            *(undefined4 *)(lVar15 + -0xc) = 0;
            *(undefined4 *)(lVar15 + -8) = 0;
            *(undefined4 *)(lVar15 + -4) = 0;
            lVar20 = UField::GetOwnerClass(plVar6);
            if (lVar20 == 0) {
              local_res18 = plVar6[3];
              bVar12 = true;
              FName::ToString(&local_res18,local_d8);
              cVar11 = FString::EndsWith(local_d8,L"__DelegateSignature",1);
              if (cVar11 == '\0') goto LAB_142339618;
              bVar5 = true;
            }
            else {
LAB_142339618:
              bVar5 = false;
            }
            if ((bVar12) && (bVar12 = false, local_d8[0] != 0)) {
              FMemory::Free();
            }
            if (bVar5) {
              lVar20 = UObjectBaseUtility::GetOutermost(plVar6);
            }
            lVar4 = plVar6[3];
            *(longlong *)(lVar15 + -0x20) = lVar20;
            *(longlong *)(lVar15 + -0x18) = lVar4;
            *(undefined4 *)(lVar15 + -0x10) = (undefined4)local_f0;
            *(undefined4 *)(lVar15 + -0xc) = local_f0._4_4_;
            *(undefined4 *)(lVar15 + -8) = (undefined4)uStack_e8;
            *(undefined4 *)(lVar15 + -4) = uStack_e8._4_4_;
            break;
          }
          iVar18 = (int)plVar6[6];
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
        } while ((int)uVar16 < iVar18);
      }
      local_120 = (longlong *)plVar6[5];
      FUN_140472e10(&local_128);
      plVar6 = local_120;
    }
    FArchive::~FArchive(local_c8);
  }
  return;
}



// FUNCTION 1423396c0 DiagnosticMessage body=266 status=ok
// SIG undefined DiagnosticMessage(void)

longlong * FActorComponentTickFunction::DiagnosticMessage(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0x10 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0x10 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"[TickCom",8);
  lVar2 = local_28 + lVar2 * 2;
  builtin_wcsncpy((wchar_t *)(lVar2 + 0x10),L"pone",4);
  *(undefined4 *)(lVar2 + 0x18) = 0x74006e;
  *(undefined2 *)(lVar2 + 0x1c) = 0x5d;
  *(undefined2 *)(lVar2 + 0x1e) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423397d0 DiagnosticMessage body=297 status=ok
// SIG undefined DiagnosticMessage(void)

longlong *
FCharacterMovementComponentPostPhysicsTickFunction::DiagnosticMessage
          (longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar2 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar3 = plVar2[1];
  local_28 = *plVar2;
  *plVar2 = 0;
  local_20 = (int)plVar2[1];
  local_1c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar4 = local_20;
  if (local_1c < (int)((0x2c - (uint)((int)lVar3 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar4 = local_20;
  }
  local_20 = (0x2c - (uint)(iVar4 != 0)) + iVar4;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar4);
  }
  lVar3 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
  puVar1 = (undefined8 *)(local_28 + lVar3 * 2);
  *puVar1 = 0x6800430055005b;
  puVar1[1] = 0x63006100720061;
  lVar3 = local_28 + lVar3 * 2;
  *(undefined8 *)(lVar3 + 0x10) = 0x4d007200650074;
  *(undefined8 *)(lVar3 + 0x18) = 0x6d00650076006f;
  *(undefined8 *)(lVar3 + 0x20) = 0x430074006e0065;
  *(undefined8 *)(lVar3 + 0x28) = 0x6f0070006d006f;
  *(undefined4 *)(lVar3 + 0x30) = 0x65006e;
  *(undefined4 *)(lVar3 + 0x34) = 0x74006e;
  *(undefined4 *)(lVar3 + 0x38) = 0x3a003a;
  *(undefined4 *)(lVar3 + 0x3c) = 0x720050;
  *(undefined4 *)(lVar3 + 0x40) = 0x430065;
  *(undefined4 *)(lVar3 + 0x44) = 0x6f006c;
  *(undefined4 *)(lVar3 + 0x48) = 0x680074;
  *(undefined4 *)(lVar3 + 0x4c) = 0x690054;
  *(undefined4 *)(lVar3 + 0x50) = 0x6b0063;
  *(undefined2 *)(lVar3 + 0x54) = 0x5d;
  *(undefined2 *)(lVar3 + 0x56) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142339930 FUN_142339930 body=2468 status=ok
// SIG undefined FUN_142339930(void)

void FUN_142339930(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  float fVar18;
  double dVar19;
  ulonglong local_res8;
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  int local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  longlong *local_48;
  
  bVar4 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1[0x44] != 0) {
    plVar14 = (longlong *)(param_2 + 0x98);
    local_b8 = (undefined2 *)
               CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                        (float)DAT_1464aa730._2_1_ * 0.003921569);
    local_b0 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa730 * 0.003921569);
    local_48 = plVar14;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_b8);
    dVar19 = (double)*(float *)(param_1 + 0x8c);
    FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x8b),
                        (double)*(float *)((longlong)param_1 + 0x45c),dVar19);
    puVar11 = &DAT_143f3eda8;
    if ((int)local_b0 != 0) {
      puVar11 = local_b8;
    }
    uVar7 = (**(code **)(*param_1 + 0x550))(param_1);
    FString::PrintfImpl(&local_a8,L"CHARACTER MOVEMENT Floor %s Crouched %i",puVar11,uVar7,dVar19);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1428a6fb0(plVar14,&local_a8,&local_res8);
    local_res8 = *(ulonglong *)(param_1[0x2f] + 0x18);
    FName::ToString(&local_res8,&local_b8);
    puVar11 = &DAT_143f3eda8;
    if ((int)local_b0 != 0) {
      puVar11 = local_b8;
    }
    FString::PrintfImpl(&local_c8,L"Updated Component: %s",puVar11);
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_a8 = local_c8;
    local_a0 = (int)local_c0;
    local_9c = local_c0._4_4_;
    local_c0 = 0;
    local_c8 = (wchar_t *)0x0;
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar17 = 0;
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1428a6fb0(plVar14,&local_a8,&local_res8);
    if (((0.0001 < ABS(*(float *)(param_1 + 0x6a))) ||
        (0.0001 < ABS(*(float *)((longlong)param_1 + 0x354)))) ||
       (0.0001 < ABS(*(float *)(param_1 + 0x6b)))) {
      local_c8 = (wchar_t *)0x0;
      local_c0 = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      pwVar16 = local_c8;
      FGenericPlatformString::Memcpy(local_c8,&DAT_144063a8c,6);
      bVar2 = true;
      if (1e-08 < ABS(*(float *)(param_1 + 0x6a))) {
        FString::PrintfImpl(&local_68,L"X=%.2f",(double)*(float *)(param_1 + 0x6a));
        pwVar15 = local_68;
        uVar6 = local_c0;
        if (local_60 != 0) {
          iVar17 = local_60 + -1;
        }
        if (iVar17 != 0) {
          iVar5 = (int)local_c0;
          lVar12 = (longlong)(int)local_c0;
          iVar8 = (uint)((int)local_c0 == 0) + (int)local_c0 + iVar17;
          local_c0 = CONCAT44(local_c0._4_4_,iVar8);
          if (local_c0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6 & 0xffffffff);
            pwVar16 = local_c8;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)),pwVar15,(longlong)iVar17 * 2);
          (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)))[iVar17] = L'\0';
        }
        if (local_68 != (wchar_t *)0x0) {
          FMemory::Free(local_68);
        }
        bVar2 = false;
      }
      if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x354))) {
        if (!bVar2) {
          local_b8 = (undefined2 *)0x0;
          local_b0 = 3;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          puVar11 = local_b8;
          FGenericPlatformString::Memcpy(local_b8,&DAT_144063aa8,6);
          uVar6 = local_c0;
          if (((int)local_b0 != 0) && (iVar17 = (int)local_b0 + -1, iVar17 != 0)) {
            iVar5 = (int)local_c0;
            lVar12 = (longlong)(int)local_c0;
            iVar8 = (uint)((int)local_c0 == 0) + iVar17 + (int)local_c0;
            local_c0 = CONCAT44(local_c0._4_4_,iVar8);
            if (local_c0._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6 & 0xffffffff);
              pwVar16 = local_c8;
            }
            _guard_xfg_dispatch_icall_nop
                      (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)),puVar11,(longlong)iVar17 * 2);
            (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)))[iVar17] = L'\0';
          }
          if (puVar11 != (undefined2 *)0x0) {
            FMemory::Free(puVar11);
          }
        }
        FString::PrintfImpl(&local_58,L"Y=%.2f",(double)*(float *)((longlong)param_1 + 0x354));
        pwVar15 = local_58;
        uVar6 = local_c0;
        if (local_50 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = local_50 + -1;
        }
        if (iVar17 != 0) {
          iVar5 = (int)local_c0;
          lVar12 = (longlong)(int)local_c0;
          iVar8 = (uint)((int)local_c0 == 0) + iVar17 + (int)local_c0;
          local_c0 = CONCAT44(local_c0._4_4_,iVar8);
          if (local_c0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6 & 0xffffffff);
            pwVar16 = local_c8;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)),pwVar15,(longlong)iVar17 * 2);
          (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)))[iVar17] = L'\0';
        }
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free(local_58);
        }
        bVar2 = false;
      }
      if (1e-08 < ABS(*(float *)(param_1 + 0x6b))) {
        if (!bVar2) {
          local_b0 = 3;
          local_b8 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          puVar11 = local_b8;
          FGenericPlatformString::Memcpy(local_b8,&DAT_144063aa8,6);
          uVar6 = local_c0;
          if (((int)local_b0 != 0) && (iVar17 = (int)local_b0 + -1, iVar17 != 0)) {
            iVar5 = (int)local_c0;
            lVar12 = (longlong)(int)local_c0;
            iVar8 = (uint)((int)local_c0 == 0) + (int)local_c0 + iVar17;
            local_c0 = CONCAT44(local_c0._4_4_,iVar8);
            if (local_c0._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6 & 0xffffffff);
              pwVar16 = local_c8;
            }
            _guard_xfg_dispatch_icall_nop
                      (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)),puVar11,(longlong)iVar17 * 2);
            (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)))[iVar17] = L'\0';
          }
          if (puVar11 != (undefined2 *)0x0) {
            FMemory::Free(puVar11);
          }
        }
        FString::PrintfImpl(&local_98,L"Z=%.2f",(double)*(float *)(param_1 + 0x6b));
        pwVar15 = local_98;
        uVar6 = local_c0;
        if (local_90 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = local_90 + -1;
        }
        if (iVar17 != 0) {
          iVar5 = (int)local_c0;
          lVar12 = (longlong)(int)local_c0;
          iVar8 = (uint)((int)local_c0 == 0) + iVar17 + (int)local_c0;
          local_c0 = CONCAT44(local_c0._4_4_,iVar8);
          if (local_c0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6 & 0xffffffff);
            pwVar16 = local_c8;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)),pwVar15,(longlong)iVar17 * 2);
          (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)))[iVar17] = L'\0';
        }
        if (local_98 != (wchar_t *)0x0) {
          FMemory::Free(local_98);
        }
      }
      local_b0 = 2;
      local_b8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      puVar11 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,&DAT_144063ad0,4);
      uVar6 = local_c0;
      if (((int)local_b0 != 0) && (iVar17 = (int)local_b0 + -1, iVar17 != 0)) {
        iVar5 = (int)local_c0;
        lVar12 = (longlong)(int)local_c0;
        iVar8 = (uint)((int)local_c0 == 0) + iVar17 + (int)local_c0;
        local_c0 = CONCAT44(local_c0._4_4_,iVar8);
        if (local_c0._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6 & 0xffffffff);
          pwVar16 = local_c8;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)),puVar11,(longlong)iVar17 * 2);
        (pwVar16 + (lVar12 - (ulonglong)(iVar5 != 0)))[iVar17] = L'\0';
      }
      if (puVar11 != (undefined2 *)0x0) {
        FMemory::Free(puVar11);
      }
      local_80 = local_c0;
      plVar14 = local_48;
      iVar17 = (int)local_c0;
      local_88 = pwVar16;
    }
    else {
      FString::PrintfImpl(&local_88,L"V(0)");
      iVar17 = (int)local_80;
    }
    lVar12 = 0;
    puVar11 = &DAT_143f3eda8;
    pwVar16 = L"";
    if (iVar17 != 0) {
      pwVar16 = local_88;
    }
    FString::PrintfImpl(&local_78,L"Acceleration: %s",pwVar16);
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_a8 = local_78;
    local_a0 = (undefined4)local_70;
    local_9c = local_70._4_4_;
    local_70 = 0;
    local_78 = (wchar_t *)0x0;
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1428a6fb0(plVar14,&local_a8,&local_res8);
    FString::PrintfImpl(&local_98,L"bForceMaxAccel: %i",*(uint *)(param_1 + 0x60) >> 6 & 1);
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_a8 = local_98;
    local_a0 = local_90;
    local_9c = local_8c;
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1428a6fb0(plVar14,&local_a8,&local_res8);
    FString::PrintfImpl(&local_98,L"RootMotionSources: %d active",(int)param_1[0xd7]);
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_a8 = local_98;
    local_a0 = local_90;
    local_9c = local_8c;
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1428a6fb0(plVar14,&local_a8,&local_res8);
    lVar9 = (**(code **)(*param_1 + 0x440))(param_1);
    lVar1 = *(longlong *)(param_1[0x44] + 0x4d8);
    if (lVar1 == 0) {
      pwVar16 = L"None";
    }
    else {
      lVar12 = *(longlong *)(lVar1 + 0x118);
      local_res8 = *(ulonglong *)(lVar1 + 0x18);
      FName::ToString(&local_res8,&local_68);
      bVar4 = true;
      pwVar16 = L"";
      if (local_60 != 0) {
        pwVar16 = local_68;
      }
    }
    bVar2 = false;
    if (lVar12 == 0) {
      pwVar15 = L"None";
    }
    else {
      local_78 = *(wchar_t **)(lVar12 + 0x18);
      bVar2 = true;
      FName::ToString(&local_78,&local_58);
      pwVar15 = L"";
      if (local_50 != 0) {
        pwVar15 = local_58;
      }
    }
    bVar3 = false;
    if (lVar9 == 0) {
      pwVar13 = L"None";
    }
    else {
      local_c8 = *(wchar_t **)(lVar9 + 0x18);
      bVar3 = true;
      FName::ToString(&local_c8,&local_98);
      pwVar13 = L"";
      if (local_90 != 0) {
        pwVar13 = local_98;
      }
    }
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x7b8))(param_1,&local_b8);
    if (*(int *)(puVar10 + 1) != 0) {
      puVar11 = (undefined2 *)*puVar10;
    }
    fVar18 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
    FString::PrintfImpl(&local_88,L"%s In physicsvolume %s on base %s component %s gravity %f",
                        puVar11,pwVar13,pwVar15,pwVar16,(double)fVar18);
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_a8 = local_88;
    local_a0 = (int)local_80;
    local_9c = local_80._4_4_;
    local_80 = 0;
    local_88 = (wchar_t *)0x0;
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((bVar3) && (local_98 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar2) && (local_58 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_68 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1428a6fb0(local_48,&local_a8,&local_res8);
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14233a2e0 FUN_14233a2e0 body=129 status=ok
// SIG undefined FUN_14233a2e0(void)

void FUN_14233a2e0(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 0x40) == 0) {
      if ((char)bVar1 < '\0') {
        (**(code **)(*param_1 + 0x2f0))();
      }
      if ((*(byte *)((longlong)param_1 + 0xb9) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014233a354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2f8))(param_1);
        return;
      }
    }
    else {
      if ((bVar1 & 2) != 0) {
        (**(code **)(*param_1 + 0x300))();
        bVar1 = *(byte *)(param_1 + 0x17);
      }
      if (((bVar1 & 1) != 0) && (*(longlong *)(param_1[0x24] + 0x1b8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014233a32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e8))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14233a370 FUN_14233a370 body=122 status=ok
// SIG undefined FUN_14233a370(void)

undefined8 FUN_14233a370(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  if (param_1[0x44] != 0) {
    cVar1 = thunk_FUN_142912390();
    if ((cVar1 != '\0') &&
       (((*(byte *)(param_1 + 0x33) & 1) == 0 || (ABS(*(float *)(param_1 + 0x35)) != 1.0)))) {
      fVar2 = *(float *)(param_1 + 0x47);
      if (*(float *)(param_1 + 0x47) <= *(float *)((longlong)param_1 + 0x194)) {
        fVar2 = *(float *)((longlong)param_1 + 0x194);
      }
      *(float *)((longlong)param_1 + 0x194) = fVar2;
      (**(code **)(*param_1 + 0x5a0))(param_1,3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14233a3f0 FUN_14233a3f0 body=152 status=ok
// SIG undefined FUN_14233a3f0(void)

void FUN_14233a3f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = *param_1 + 0x58;
    do {
      if (*(longlong *)(lVar1 + 0x118) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar1 + -8) = &PTR__scalar_deleting_destructor__144080980;
      FUN_14074e760(lVar1 + 0x90);
      FUN_14074e810(lVar1);
      lVar1 = lVar1 + 0x188;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 14233a490 FUN_14233a490 body=152 status=ok
// SIG undefined FUN_14233a490(void)

void FUN_14233a490(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    plVar2 = (longlong *)*puVar3;
    plVar1 = (longlong *)*plVar2;
    if (((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x17) & 2) == 0)) &&
       ((*(byte *)(plVar1 + 0x17) & 1) != 0)) {
      (**(code **)(*plVar1 + 0x2e8))(plVar1);
      plVar2 = (longlong *)*puVar3;
    }
    FMemory::Free(plVar2);
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 14233a530 FUN_14233a530 body=312 status=ok
// SIG undefined FUN_14233a530(void)

void FUN_14233a530(undefined8 *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_28;
  undefined1 local_20;
  byte local_1f;
  
  plVar8 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    lVar3 = *plVar8;
    cVar1 = FWeakObjectPtr::IsValid(lVar3);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(lVar3 + 8);
      lVar3 = FWeakObjectPtr::Get(lVar3);
      uVar5 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar5 < (int)DAT_1469e91c4) {
        uVar6 = uVar5 & 0xffff;
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xffff;
          uVar6 = uVar6 - 0x10000;
        }
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)uVar6 * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
        if ((*(byte *)(lVar3 + 0xb8) & 1) != 0) {
          FUN_14233aad0(lVar3);
        }
        *(undefined8 *)(lVar3 + 0x120) = uVar2;
        local_1f = local_1f & 0xfd | 1;
        local_20 = 1;
        local_28 = uVar2;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
        FUN_14233a6f0(lVar3);
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
      }
    }
    FMemory::Free(*plVar8);
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 14233a670 FUN_14233a670 body=124 status=ok
// SIG undefined FUN_14233a670(void)

void FUN_14233a670(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      FUN_1428e7d50(param_1,param_2);
    }
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xdf;
    return;
  }
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xdf;
  return;
}



// FUNCTION 14233a6f0 FUN_14233a6f0 body=220 status=ok
// SIG undefined FUN_14233a6f0(void)

void FUN_14233a6f0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    (**(code **)(*param_1 + 0x2d0))();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar2 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar2,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     (((*(byte *)(param_1 + 0x17) & 2) == 0 && (*(longlong *)(param_1[0x24] + 0x1b8) != 0)))) {
    cVar1 = (**(code **)(*param_1 + 0x2e0))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2e8))(param_1);
    }
  }
  FUN_142338140(param_1);
  return;
}



// FUNCTION 14233a7d0 ExecuteTask body=281 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_1[2] == 0) {
    if (param_1[3] != 0) {
      `anonymous_namespace'::RunTraceTask(param_1[3],*(undefined4 *)(param_1 + 4));
    }
  }
  else {
    FUN_14234d2e0(param_1[2],*(undefined4 *)(param_1 + 4));
  }
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_14504b5b0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14233a8f0 FUN_14233a8f0 body=250 status=ok
// SIG undefined FUN_14233a8f0(void)

void FUN_14233a8f0(longlong param_1,float param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  bVar1 = *(byte *)((longlong)plVar3 + 0xb9);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = *(int *)((longlong)plVar3 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       ((**(code **)(*plVar3 + 0x3a0))(plVar3), (*(byte *)(plVar3 + 0x17) & 1) != 0)) {
      plVar3 = (longlong *)plVar3[0x23];
      if ((param_3 == 1) && ((bVar1 & 0x20) == 0)) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        cVar4 = (**(code **)(*plVar3 + 0x460))(plVar3);
        if (cVar4 == '\0') {
          return;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = *(float *)(plVar3 + 0x1a);
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x350))
                (*(longlong **)(param_1 + 0x50),fVar8 * param_2,param_3,param_1);
    }
  }
  return;
}



// FUNCTION 14233a9f0 FUN_14233a9f0 body=224 status=ok
// SIG undefined FUN_14233a9f0(void)

void FUN_14233a9f0(longlong param_1,float param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       ((**(code **)(*plVar2 + 0x3a0))(plVar2), (*(byte *)(plVar2 + 0x17) & 1) != 0)) {
      plVar2 = (longlong *)plVar2[0x23];
      if (param_3 == 1) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        cVar3 = (**(code **)(*plVar2 + 0x460))(plVar2);
        if (cVar3 == '\0') {
          return;
        }
      }
      if (plVar2 == (longlong *)0x0) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = *(float *)(plVar2 + 0x1a);
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x7f8))
                (*(longlong **)(param_1 + 0x50),fVar7 * param_2,param_1);
    }
  }
  return;
}



// FUNCTION 14233aad0 FUN_14233aad0 body=121 status=ok
// SIG undefined FUN_14233aad0(void)

void FUN_14233aad0(longlong *param_1)

{
  byte bVar1;
  longlong *local_res8 [4];
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if ((bVar1 & 4) != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146531c50,param_1);
    (**(code **)(*param_1 + 0x310))(param_1);
    bVar1 = *(byte *)(param_1 + 0x17);
  }
  if ((bVar1 & 2) != 0) {
    (**(code **)(*param_1 + 0x300))(param_1);
    bVar1 = *(byte *)(param_1 + 0x17);
  }
  if ((bVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x25,local_res8);
  }
  return;
}



// FUNCTION 14233ab70 FUN_14233ab70 body=224 status=ok
// SIG undefined FUN_14233ab70(void)

void FUN_14233ab70(longlong *param_1,float param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
    if (param_2 <= 0.0) {
      (**(code **)(*param_1 + 0x560))();
    }
    else {
      lVar2 = FUN_14233c7a0();
      if (lVar2 != 0) {
        lVar1 = param_1[0xd6];
        local_48 = 0;
        local_38 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_68);
        if (puVar3 != (undefined8 *)0x0) {
          local_98 = (undefined4)lVar2;
          uStack_94 = (undefined4)((ulonglong)lVar2 >> 0x20);
          uStack_90 = (undefined4)lVar1;
          uStack_8c = (undefined4)((ulonglong)lVar1 >> 0x20);
          *(undefined4 *)(puVar3 + 1) = local_98;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_94;
          *(undefined4 *)(puVar3 + 2) = uStack_90;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_8c;
          *puVar3 = &PTR_FUN_143f4d0b0;
          puVar3[3] = CONCAT44(param_3,param_2);
        }
        local_78[0] = FUN_142332730;
        FUN_1422f8a30(local_78,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 14233ac50 FUN_14233ac50 body=704 status=ok
// SIG undefined FUN_14233ac50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14233ac50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af0328) && (_Init_thread_header(&DAT_146af0328), DAT_146af0328 == -1))
  {
    FName::FName(&DAT_146af0320,"ProjectLocation",1);
    _Init_thread_footer(&DAT_146af0328);
  }
  iVar7 = 0;
  local_128 = 0;
  FUN_1422ffb20(local_c8,DAT_146af0320,local_108,0);
  FUN_1426d3dd0(local_e8);
  FUN_1426ea8d0(local_e8,0,0);
  FCollisionResponseContainer::SetResponse(local_e8,0,1);
  FCollisionResponseContainer::SetResponse(local_e8,1,*(uint *)(param_1 + 0x4b4) >> 0x1c & 1);
  local_100 = 0;
  local_f8 = 0;
  uVar5 = FUN_14046f570(param_1);
  local_110 = &DAT_146aefe88;
  local_118 = local_e8;
  local_120 = local_c8;
  local_128 = local_128 & 0xffffffff00000000;
  FUN_142318d90(uVar5,&local_100,param_2,param_3);
  uVar1 = *(undefined4 *)(param_1 + 0x4b4);
  if (0 < (int)local_f8) {
    do {
      plVar6 = (longlong *)FWeakObjectPtr::Get(local_100 + 0x74 + (longlong)iVar7 * 0x90);
      if ((plVar6 == (longlong *)0x0) ||
         (iVar4 = (**(code **)(*plVar6 + 0x4f0))(plVar6,0), iVar4 != 2)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((plVar6 == (longlong *)0x0) ||
         (iVar4 = (**(code **)(*plVar6 + 0x4f0))(plVar6,1), bVar3 = true, iVar4 != 2)) {
        bVar3 = false;
      }
      if ((bVar2) || ((bVar3 && ((~(byte)((uint)uVar1 >> 0x1c) & 1) == 0)))) {
        iVar7 = iVar7 + 1;
        iVar4 = (int)local_f8;
      }
      else {
        iVar4 = ((int)local_f8 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x90 + local_100),
                     (void *)((longlong)((int)local_f8 - iVar4) * 0x90 + local_100),
                     (longlong)iVar4 * 0x90);
        }
        iVar4 = (int)local_f8 + -1;
        local_f8 = CONCAT44(local_f8._4_4_,iVar4);
      }
    } while (iVar7 < iVar4);
    if (0 < iVar4) {
      local_f0 = param_5;
      FUN_142323b40(local_100,(longlong)iVar4,local_108[0],&local_f0);
      FUN_140729f20(param_6,local_100);
      *param_6 = *param_6 | 1;
    }
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14233af10 FUN_14233af10 body=248 status=ok
// SIG undefined FUN_14233af10(void)

longlong FUN_14233af10(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_3 == (longlong *)0x0) || (param_3[3] != *param_2)) {
    param_3 = (longlong *)FindField<UObjectProperty>(*(undefined8 *)(param_1 + 0x10),*param_2);
  }
  if ((param_3 != (longlong *)0x0) &&
     (lVar2 = (**(code **)(*param_3 + 0x378))(param_3,*(int *)((longlong)param_3 + 0x44) + param_1),
     lVar2 != 0)) {
    lVar1 = param_2[1];
    local_28 = *(longlong *)(lVar2 + 0x10);
    if (((int)lVar1 != 0) || ((int)((ulonglong)lVar1 >> 0x20) != 0)) {
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_1406efa50(&local_28);
      while (local_20 != 0) {
        if (*(longlong *)(local_20 + 0x18) == lVar1) {
          return *(int *)(local_20 + 0x44) + lVar2;
        }
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_1406efa50(&local_28);
      }
    }
  }
  return 0;
}



// FUNCTION 14233b010 FUN_14233b010 body=1134 status=ok
// SIG undefined FUN_14233b010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14233b010(longlong *param_1,undefined8 param_2,uint *param_3,char param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 local_e8 [12];
  undefined4 local_dc;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  
  cVar6 = (**(code **)(*param_1 + 0x5c0))();
  if ((cVar6 == '\0') ||
     (iVar7 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4e8))(), (iVar7 - 1U & 0xfffffffd) != 0))
  {
    *param_3 = *param_3 & 0xfffffff8;
    param_3[1] = 0;
    param_3[2] = 0;
    _guard_xfg_dispatch_icall_nop(param_3 + 4,0,0x90);
    param_3[7] = 0x3f800000;
    return;
  }
  cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar6 == '\0') {
    fVar18 = -2.4;
  }
  else {
    fVar18 = 2.4001;
  }
  fVar19 = fVar18 + *(float *)((longlong)param_1 + 0x234);
  lVar10 = 0;
  uVar13 = 0;
  if (fVar19 <= 2.4) {
    fVar19 = 2.4;
  }
  if (fVar19 <= 0.0) goto LAB_14233b2f7;
  if (((((*(uint *)((longlong)param_1 + 0x4b4) >> 0xf & 1) == 0) && (param_4 != '\0')) &&
      ((*(uint *)(param_1 + 0x60) & 0x100) == 0)) &&
     ((*(uint *)((longlong)param_1 + 0x4b4) & 0x20) == 0)) {
    plVar1 = *(longlong **)(param_1[0x44] + 0x4d8);
    lVar12 = lVar10;
    if (plVar1 != (longlong *)0x0) {
      lVar12 = plVar1[0x23];
    }
    uVar8 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
    if (plVar1 == (longlong *)0x0) {
      uVar13 = *(uint *)(param_1 + 0x60);
    }
    else {
      iVar7 = (**(code **)(*plVar1 + 0x4e8))(plVar1);
      if ((((iVar7 - 1U & 0xfffffffd) != 0) ||
          (iVar7 = (**(code **)(*plVar1 + 0x4f0))(plVar1,uVar8), iVar7 != 2)) ||
         (cVar6 = FUN_142314560(plVar1), cVar6 != '\0')) {
        uVar13 = 0x100;
      }
      uVar13 = *(uint *)(param_1 + 0x60) & 0xfffffeff | uVar13;
      *(uint *)(param_1 + 0x60) = uVar13;
    }
    if (lVar12 == 0) {
LAB_14233b1de:
      bVar5 = false;
    }
    else {
      iVar7 = *(int *)(lVar12 + 0xc);
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar11 = iVar7 >> 0x1f & 0xffff;
        uVar9 = iVar7 + uVar11;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                 (longlong)(int)((uVar9 & 0xffff) - uVar11) * 0x18;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) goto LAB_14233b1de;
      bVar5 = true;
    }
    if ((((uVar13 >> 8 & 1) == 0) && (!bVar5)) && (plVar1 != (longlong *)0x0)) {
      FFindFloorResult::operator=(param_3,param_1 + 0x82);
      return;
    }
    *(uint *)(param_1 + 0x60) = uVar13 & 0xfffffeff;
    lVar10 = *(longlong *)(param_1[0x44] + 0x4d0);
    uVar13 = *(uint *)(lVar10 + 0x230) & _DAT_146af0070;
    uVar9 = *(uint *)(lVar10 + 0x234) & uRam0000000146af0074;
    uVar11 = *(uint *)(lVar10 + 0x238) & uRam0000000146af0078;
    uVar14 = *(uint *)(lVar10 + 0x23c) & uRam0000000146af007c;
    auVar16._4_4_ = uVar9;
    auVar16._0_4_ = uVar13;
    auVar16._8_4_ = uVar11;
    auVar16._12_4_ = uVar14;
    auVar2._4_4_ = uVar11;
    auVar2._0_4_ = uVar9;
    auVar2._8_4_ = uVar13;
    auVar2._12_4_ = uVar14;
    auVar17 = minps(auVar16,auVar2);
    auVar3._4_4_ = uVar13;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar9;
    auVar3._12_4_ = uVar14;
    minps(auVar17,auVar3);
  }
  else {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffeff;
    lVar10 = *(longlong *)(param_1[0x44] + 0x4d0);
    uVar13 = *(uint *)(lVar10 + 0x230) & _DAT_146af0070;
    uVar9 = *(uint *)(lVar10 + 0x234) & uRam0000000146af0074;
    uVar11 = *(uint *)(lVar10 + 0x238) & uRam0000000146af0078;
    uVar14 = *(uint *)(lVar10 + 0x23c) & uRam0000000146af007c;
    auVar15._4_4_ = uVar9;
    auVar15._0_4_ = uVar13;
    auVar15._8_4_ = uVar11;
    auVar15._12_4_ = uVar14;
    auVar17._4_4_ = uVar11;
    auVar17._0_4_ = uVar9;
    auVar17._8_4_ = uVar13;
    auVar17._12_4_ = uVar14;
    auVar17 = minps(auVar15,auVar17);
    auVar4._4_4_ = uVar13;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar9;
    auVar4._12_4_ = uVar14;
    minps(auVar17,auVar4);
  }
  (**(code **)(*param_1 + 0x880))(param_1,param_2);
LAB_14233b2f7:
  if ((((*param_3 & 1) != 0) && ((*param_3 & 4) == 0)) &&
     (cVar6 = (**(code **)(*param_1 + 0x8a8))(param_1,param_3 + 4,1), cVar6 != '\0')) {
    fVar18 = fVar18 + *(float *)((longlong)param_1 + 0x234);
    if (fVar18 <= 2.4) {
      fVar18 = 2.4;
    }
    cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
    if (cVar6 != '\0') {
      fVar19 = *(float *)(param_1 + 0x5e);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar18 = fVar18 + fVar19;
    }
    local_84 = 0xffffffff;
    local_80 = 0;
    local_7c = 0xffffffff;
    local_78 = 0;
    local_74 = 0xffffffff;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
    lVar10 = *param_1;
    local_dc = 0x3f800000;
    uVar8 = FUN_142340240(param_1);
    cVar6 = (**(code **)(lVar10 + 0x8b0))(param_1,uVar8,param_3 + 4);
    if (cVar6 == '\0') {
      *param_3 = *param_3 & 0xfffffffd;
    }
    else {
      if (fVar18 <= (2.15 - (float)param_3[1]) + 0.0) {
        param_3[1] = 0x4009999a;
      }
      if ((*param_3 & 2) == 0) {
        FUN_1423503d0(param_3,local_e8);
      }
    }
  }
  return;
}



// FUNCTION 14233b480 FindId body=272 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<USceneComponent_*,FTransform>,TDefaultMapHashableKeyFuncs<USceneComponent_*,FTransform,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x50) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x40 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14233b590 FUN_14233b590 body=257 status=ok
// SIG undefined FUN_14233b590(void)

ulonglong FUN_14233b590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = FUN_14046f570();
  if (((uVar1 != 0) && (*(longlong *)(uVar1 + 0x138) != 0)) && (*(longlong *)(param_1 + 0x220) != 0)
     ) {
    plVar2 = (longlong *)FUN_142250040();
    uVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x220);
      if (lVar5 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        uVar3 = UNavAgentInterface::GetPrivateStaticClass();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
      }
      local_20 = 100.0;
      local_28 = 0.0;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        local_28 = *(float *)(lVar5 + 4) + *(float *)(lVar5 + 4);
        local_20 = *(float *)(lVar5 + 0x10) * *(float *)(lVar5 + 8);
      }
      local_18 = 0;
      uStack_10 = 0;
      local_24 = local_28;
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,&local_28,&local_18,0);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14233b6a0 FUN_14233b6a0 body=668 status=ok
// SIG undefined FUN_14233b6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14233b6a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  lVar3 = *(longlong *)(param_1[0x44] + 0x4d0);
  if ((lVar3 != 0) && (lVar1 = param_1[0x2f], lVar1 != 0)) {
    uVar7 = *(uint *)(lVar3 + 0x230) & _DAT_146af0070;
    uVar8 = *(uint *)(lVar3 + 0x234) & uRam0000000146af0074;
    uVar9 = *(uint *)(lVar3 + 0x238) & uRam0000000146af0078;
    uVar10 = *(uint *)(lVar3 + 0x23c) & uRam0000000146af007c;
    fVar11 = *(float *)(param_1 + 0xb6);
    fVar12 = *(float *)((longlong)param_1 + 0x5ac);
    auVar5._4_4_ = uVar8;
    auVar5._0_4_ = uVar7;
    auVar5._8_4_ = uVar9;
    auVar5._12_4_ = uVar10;
    auVar6._4_4_ = uVar9;
    auVar6._0_4_ = uVar8;
    auVar6._8_4_ = uVar7;
    auVar6._12_4_ = uVar10;
    auVar6 = minps(auVar5,auVar6);
    auVar2._4_4_ = uVar7;
    auVar2._0_4_ = uVar9;
    auVar2._8_4_ = uVar8;
    auVar2._12_4_ = uVar10;
    auVar6 = minps(auVar6,auVar2);
    local_f8 = *(float *)(lVar1 + 0x220);
    fStack_f4 = *(float *)(lVar1 + 0x224);
    fVar4 = auVar6._0_4_ * *(float *)(lVar3 + 0x710);
    local_f0 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
    fVar4 = fVar4 + fVar4;
    fVar13 = 0.0;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,local_f0);
    fVar12 = fVar12 * fVar4;
    (**(code **)(*param_1 + 0x758))
              (param_1,&local_c8,param_3,&local_f8,&local_f8,fVar12,fVar11 * fVar4);
    local_b8 = local_c8 - local_f8;
    local_b4 = local_c4 - fStack_f4;
    local_b0 = local_c0 - local_f0;
    if (((0.0001 < ABS(local_b8)) || (0.0001 < ABS(local_b4))) || (0.0001 < ABS(local_b0))) {
      _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
      local_9c = 0x3f800000;
      local_d8 = *(undefined8 *)(param_1[0x2f] + 0x210);
      uStack_d0 = *(undefined8 *)(param_1[0x2f] + 0x218);
      FUN_1423755e0(param_1,&local_b8,&local_d8,*(uint *)(param_1 + 0x60) >> 2 & 0xffffff01,local_a8
                    ,(uint)fVar12 & 0xffffff00);
    }
    lVar3 = param_1[0xc2];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1[0x43] + 0x28))();
      param_1[0xc2] = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    lVar1 = param_1[0x2f];
    if (lVar1 == 0) {
      local_e0 = DAT_146531c80;
    }
    else {
      local_e0 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
    }
    fVar11 = *(float *)(lVar3 + 0xb8);
    fVar12 = fVar11;
    if (0.0 <= fVar11) {
      fVar13 = fVar11;
      fVar12 = 0.0;
    }
    fVar11 = fVar11 - (local_e0 - local_f0);
    if ((fVar12 <= fVar11) && (fVar12 = fVar11, fVar13 <= fVar11)) {
      fVar12 = fVar13;
    }
    *(float *)(lVar3 + 0xb8) = fVar12;
  }
  return;
}



// FUNCTION 14233b940 FUN_14233b940 body=1032 status=ok
// SIG undefined FUN_14233b940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_14233b940(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 *local_120;
  undefined1 local_118 [8];
  longlong local_110;
  undefined8 local_108;
  undefined1 local_f8 [72];
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  fVar11 = param_4[2];
  iVar10 = 0;
  *(undefined8 *)param_2 = *(undefined8 *)param_4;
  param_2[2] = fVar11;
  local_110 = 0;
  local_108 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af0308) && (_Init_thread_header(&DAT_146af0308), DAT_146af0308 == -1))
  {
    FName::FName(&DAT_146af0300,"FindWaterLine",1);
    _Init_thread_footer(&DAT_146af0308);
  }
  local_138 = param_1[0x44];
  uVar4 = FUN_1422ffb20(local_f8,DAT_146af0300,local_118,1);
  uVar3 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
  uVar5 = FUN_14046f570(param_1);
  local_120 = &DAT_146aefe88;
  local_128 = &DAT_146aefe68;
  local_138 = CONCAT44(local_138._4_4_,uVar3);
  local_130 = uVar4;
  FUN_142318d90(uVar5,&local_110,param_4,param_3);
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (0 < (int)local_108) {
    do {
      lVar9 = (longlong)iVar10 * 0x90 + local_110;
      lVar6 = FWeakObjectPtr::Get(lVar9 + 0x6c);
      for (lVar8 = param_1[0x44]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x118)) {
        if (lVar8 == lVar6) goto LAB_14233bb0f;
      }
      plVar7 = (longlong *)FWeakObjectPtr::Get(lVar9 + 0x74);
      cVar2 = (**(code **)(*plVar7 + 0x4e0))(plVar7);
      if ((cVar2 == '\0') && (lVar8 = FWeakObjectPtr::Get(lVar9 + 0x6c), lVar8 != 0)) {
        lVar6 = FUN_1429dcb20();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && ((*(byte *)(lVar8 + 0x49c) & 1) != 0)) {
          fVar16 = *param_3 - *param_4;
          fVar17 = param_3[1] - param_4[1];
          fVar18 = param_3[2] - param_4[2];
          fVar12 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18;
          fVar11 = fVar16;
          fVar13 = fVar17;
          fVar14 = fVar18;
          if ((fVar12 != 1.0) &&
             (fVar11 = DAT_1468b5d90, fVar13 = DAT_1468b5d94, fVar14 = DAT_1468b5d98,
             1e-08 <= fVar12)) {
            auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
            fVar14 = auVar15._0_4_;
            fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
            fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
            fVar11 = fVar14 * fVar16;
            fVar13 = fVar14 * fVar17;
            fVar14 = fVar14 * fVar18;
          }
          *(undefined8 *)param_2 = *(undefined8 *)(lVar9 + 0x14);
          param_2[2] = *(float *)(lVar9 + 0x1c);
          lVar6 = (**(code **)(*param_1 + 0x440))(param_1);
          if (lVar8 == lVar6) {
            fVar12 = *param_2 + fVar11 * 0.1;
            fVar11 = param_2[1] + fVar13 * 0.1;
            fVar13 = param_2[2] + fVar14 * 0.1;
          }
          else {
            fVar12 = *param_2 - fVar11 * 0.1;
            fVar11 = param_2[1] - fVar13 * 0.1;
            fVar13 = param_2[2] - fVar14 * 0.1;
          }
          param_2[2] = fVar13;
          param_2[1] = fVar11;
          *param_2 = fVar12;
          break;
        }
      }
LAB_14233bb0f:
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_108);
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14233bd50 FinishAsyncTrace body=134 status=ok
// SIG undefined FinishAsyncTrace(void)

void UWorld::FinishAsyncTrace(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x2c0;
  `anonymous_namespace'::ExecuteAsyncTraceIfAvailable<FTraceDatum>(lVar1,1);
  `anonymous_namespace'::ExecuteAsyncTraceIfAvailable<FOverlapDatum>(lVar1,1);
  uVar2 = *(uint *)(param_1 + 0x380) & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  *(undefined1 *)((longlong)(int)uVar2 * 0x60 + 0x28 + lVar1) = 0;
  *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + 1;
  uVar2 = *(uint *)(param_1 + 0x380) & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  *(undefined1 *)((longlong)(int)uVar2 * 0x60 + 0x28 + lVar1) = 1;
  *(undefined8 *)((longlong)(int)uVar2 * 0x60 + 0x20 + lVar1) = 0;
  return;
}



// FUNCTION 14233bde0 FUN_14233bde0 body=434 status=ok
// SIG undefined FUN_14233bde0(void)

void FUN_14233bde0(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(uint *)(param_1 + 0x4b4) & 0x10000) == 0) {
    uVar2 = FUN_14046f570();
    UWorld::SweepSingleByChannel
              (uVar2,param_2,param_3,param_4,&DAT_1464aa810,param_5,param_6,param_7,param_8);
    return;
  }
  local_2c = *(undefined4 *)(param_6 + 8);
  local_34 = *(float *)(param_6 + 4) * 0.707;
  local_38 = 1;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0xbec3ef16;
  uStack_1c = 0x3f6c835e;
  local_30 = local_34;
  uVar2 = FUN_14046f570();
  cVar1 = UWorld::SweepSingleByChannel
                    (uVar2,param_2,param_3,param_4,&local_28,param_5,&local_38,param_7,param_8);
  if (cVar1 == '\0') {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    uVar2 = FUN_14046f570(param_1);
    UWorld::SweepSingleByChannel
              (uVar2,param_2,param_3,param_4,&DAT_1464aa810,param_5,&local_38,param_7,param_8);
  }
  return;
}



// FUNCTION 14233bfa0 FUN_14233bfa0 body=366 status=ok
// SIG undefined FUN_14233bfa0(void)

void FUN_14233bfa0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_28;
  longlong *local_20;
  
  lVar8 = param_1[0x44];
  if (((lVar8 != 0) && ((*(byte *)(lVar8 + 0x90) & 0x10) != 0)) &&
     (*(char *)(lVar8 + 0x128) == '\x02')) {
    lVar8 = param_1[0xc2];
    if (lVar8 == 0) {
      lVar8 = (**(code **)(param_1[0x43] + 0x28))();
      param_1[0xc2] = lVar8;
      if (lVar8 == 0) {
        return;
      }
    }
    puVar1 = (undefined8 *)(lVar8 + 0x30);
    if (*(longlong *)(lVar8 + 0x30) != 0) {
      lVar9 = FUN_14046f570(param_1);
      *(undefined4 *)(lVar8 + 8) = *(undefined4 *)(lVar9 + 0x790);
      plVar6 = *(longlong **)(lVar8 + 0x38);
      uVar7 = *puVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_20 = (longlong *)0x0;
      if (puVar1 != &local_28) {
        *puVar1 = 0;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((longlong *)(lVar8 + 0x38),&local_20);
        plVar4 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_20 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
      }
      (**(code **)(*param_1 + 0x938))(param_1,uVar7,0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14233c110 FUN_14233c110 body=570 status=ok
// SIG undefined FUN_14233c110(void)

void FUN_14233c110(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 local_68 [8];
  float local_60;
  
  plVar1 = (longlong *)(param_1 + -0x218);
  cVar5 = (**(code **)(*plVar1 + 0x5c0))(plVar1);
  if (((cVar5 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) &&
     (*(char *)(*(longlong *)(param_1 + -0xa0) + 0x24e) == '\x02')) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x910))(*(longlong **)(param_1 + 8),param_2);
    pfVar2 = (float *)(param_1 + 0x138);
    puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x8c8))(plVar1,local_68,pfVar2);
    *(undefined8 *)pfVar2 = *puVar6;
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(puVar6 + 1);
    fVar7 = (float)(**(code **)(*plVar1 + 0x6b8))(plVar1);
    if (0.0001 <= fVar7) {
      fVar3 = *pfVar2;
      fVar4 = *(float *)(param_1 + 0x13c);
      fVar13 = *(float *)(param_1 + 0x140);
      fVar10 = fVar3 * fVar3 + fVar4 * fVar4 + fVar13 * fVar13;
      if (fVar10 <= fVar7 * fVar7) {
        uVar9 = *(undefined8 *)pfVar2;
        fVar13 = *(float *)(param_1 + 0x140);
      }
      else {
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
        fVar7 = (fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11)) * fVar7;
        fVar13 = fVar13 * fVar7;
        uVar9 = CONCAT44(fVar4 * fVar7,fVar3 * fVar7);
        local_60 = fVar13;
      }
    }
    else {
      local_60 = DAT_1468b5d98;
      uVar9 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar13 = DAT_1468b5d98;
    }
    *(undefined8 *)pfVar2 = uVar9;
    *(float *)(param_1 + 0x140) = fVar13;
    uVar8 = (**(code **)(*plVar1 + 0x598))(plVar1);
    *(undefined4 *)(param_1 + 0x198) = uVar8;
    (**(code **)(*plVar1 + 0x8f8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 14233c350 FUN_14233c350 body=123 status=ok
// SIG undefined FUN_14233c350(void)

void FUN_14233c350(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x40))(param_1 + 0x218);
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x618);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x30))(param_1 + 0x218);
      *(longlong *)(param_1 + 0x618) = lVar2;
    }
    lVar3 = FUN_14046f570(param_1);
    *(float *)(lVar2 + 0x5c) = *(float *)(lVar3 + 0x790) - 10.0;
  }
  return;
}



// FUNCTION 14233c3d0 FUN_14233c3d0 body=361 status=ok
// SIG undefined FUN_14233c3d0(void)

void FUN_14233c3d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  if (*param_2 != 0) {
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x50)) {
      iVar3 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar3 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20,iVar3);
      }
      plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x20));
      *plVar5 = *param_2;
      lVar4 = param_2[1];
      plVar5[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
    }
    plVar5 = (longlong *)(param_1 + 0x30);
    if ((*plVar5 == *param_2) && (local_20 = (longlong *)0x0, plVar5 != &local_28)) {
      *plVar5 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_20);
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
    plVar5 = (longlong *)(param_1 + 0x40);
    if ((*plVar5 == *param_2) && (local_10 = (longlong *)0x0, plVar5 != &local_18)) {
      *plVar5 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x48,&local_10);
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
  }
  return;
}



// FUNCTION 14233c540 FUN_14233c540 body=95 status=ok
// SIG undefined FUN_14233c540(void)

float * FUN_14233c540(longlong *param_1,float *param_2,undefined4 param_3,float param_4,
                     float *param_5)

{
  float fVar1;
  float fVar2;
  
  if (param_4 != 0.0) {
    param_4 = (float)(**(code **)(*param_1 + 0x728))(0,param_3,param_4,param_5);
  }
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  *param_2 = param_4 * *param_5;
  param_2[1] = param_4 * fVar1;
  param_2[2] = param_4 * fVar2;
  return param_2;
}



// FUNCTION 14233c5a0 GetPhotoModeFilmGrain body=9 status=ok
// SIG undefined GetPhotoModeFilmGrain(void)

undefined4 UCG2GameUserSettings::GetPhotoModeFilmGrain(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3b0);
}



// FUNCTION 14233c5c0 FUN_14233c5c0 body=199 status=ok
// SIG undefined FUN_14233c5c0(void)

longlong FUN_14233c5c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x80));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar3 = UAssetUserData::GetPrivateStaticClass();
          lVar4 = param_2;
          do {
            lVar5 = param_2;
            if (lVar4 == lVar3) goto LAB_14233c620;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        lVar5 = 0;
LAB_14233c620:
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar1;
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x88));
  }
  return 0;
}



// FUNCTION 14233c690 FUN_14233c690 body=59 status=ok
// SIG undefined FUN_14233c690(void)

longlong FUN_14233c690(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x2f0) & 0x10) != 0) {
    return param_1 + 0x338;
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    return *(longlong *)(param_1 + 0x330) + 0x28;
  }
  if (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014233c6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x290))();
    return lVar1;
  }
  return 0;
}



// FUNCTION 14233c6d0 GetAudioComponentFromID body=202 status=ok
// SIG undefined GetAudioComponentFromID(void)

undefined8 UAudioComponent::GetAudioComponentFromID(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  }
  uVar5 = 0;
  if (DAT_146531c98 != DAT_146531cc4) {
    puVar3 = DAT_146531cd0;
    if (DAT_146531cd0 == (undefined *)0x0) {
      puVar3 = &DAT_146531cc8;
    }
    iVar1 = *(int *)(puVar3 + ((longlong)((int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) &
                              (longlong)DAT_146531cd8 - 1U) * 4);
    while (iVar1 != -1) {
      lVar4 = (longlong)iVar1;
      if (*(longlong *)(DAT_146531c90 + lVar4 * 0x18) == param_1) {
        uVar5 = 0;
        if ((iVar1 != -1) && (lVar4 = DAT_146531c90 + lVar4 * 0x18, lVar4 != 0)) {
          uVar5 = *(undefined8 *)(lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(DAT_146531c90 + 0x10 + lVar4 * 0x18);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  return uVar5;
}



// FUNCTION 14233c7a0 FUN_14233c7a0 body=110 status=ok
// SIG undefined FUN_14233c7a0(void)

undefined8 FUN_14233c7a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_146b17150 != 0) {
    if (*(int *)(param_1 + 0x2f4) == -1) {
      lVar1 = FUN_14046f570(param_1);
      if (lVar1 != 0) {
        uVar2 = UWorld::GetAudioDevice(lVar1);
        return uVar2;
      }
      uVar2 = FUN_142875430(DAT_146b17150);
      return uVar2;
    }
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      uVar2 = FAudioDeviceManager::GetAudioDevice(lVar1,*(undefined4 *)(param_1 + 0x2f4));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14233c820 FUN_14233c820 body=337 status=ok
// SIG undefined FUN_14233c820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14233c820(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar1 = (float)(**(code **)(*param_1 + 0x910))();
  uVar3 = __libm_sse2_sincosf_(fVar1 * 0.017453292);
  fVar1 = DAT_1468b5d98;
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulonglong)uVar3 >> 0x20);
  fVar5 = fVar4 * fVar4 + fVar2 * fVar2 + 0.25;
  if (fVar5 == 1.0) {
    *(ulonglong *)param_2 = CONCAT44(fVar2,fVar4);
    param_2[2] = 0.5;
    return param_2;
  }
  if (fVar5 < 1e-08) {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar1;
    return param_2;
  }
  auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar1 = auVar6._0_4_;
  fVar1 = fVar1 + fVar1 * (0.5 - fVar5 * 0.5 * fVar1 * fVar1);
  fVar1 = fVar1 + fVar1 * (0.5 - fVar5 * 0.5 * fVar1 * fVar1);
  *param_2 = fVar4 * fVar1;
  param_2[1] = fVar2 * fVar1;
  param_2[2] = fVar1 * 0.5;
  return param_2;
}



// FUNCTION 14233c980 FUN_14233c980 body=554 status=ok
// SIG undefined FUN_14233c980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14233c980(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_58 [48];
  
  if (param_2 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_2[0xa1];
  }
  FUN_14046f570();
  plVar5 = (longlong *)FUN_14293b120();
  if (plVar5[0x1f] == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
  }
  if ((((((param_2 != (longlong *)0x0) && (lVar7 != 0)) && (*(float *)(param_1 + 0x350) == 0.0)) &&
       ((*(float *)(param_1 + 0x354) == 0.0 && (*(float *)(param_1 + 0x358) == 0.0)))) &&
      ((*(float *)(param_1 + 0x18c) == 0.0 &&
       ((*(float *)(param_1 + 400) == 0.0 && (*(float *)(param_1 + 0x194) == 0.0)))))) &&
     (lVar7 = *(longlong *)(param_3 + 0x40), lVar7 != 0)) {
    pfVar6 = (float *)(**(code **)(*param_2 + 0x720))(param_2,local_58);
    fVar1 = (float)DAT_146af0030;
    fVar2 = DAT_146af0030._4_4_;
    fVar3 = DAT_146af0030._8_4_;
    fVar4 = DAT_146af0030._12_4_;
    fVar10 = *(float *)(lVar7 + 0x10c) - *pfVar6;
    fVar11 = *(float *)(lVar7 + 0x110) - pfVar6[1];
    fVar12 = *(float *)(lVar7 + 0x114) - pfVar6[2];
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar10;
    auVar8._8_4_ = fVar12;
    auVar8._12_4_ = 0;
    auVar9 = divps(auVar8,_DAT_146af0030);
    fVar10 = fVar10 - (float)(int)auVar9._0_4_ * fVar1;
    fVar11 = fVar11 - (float)(int)auVar9._4_4_ * fVar2;
    fVar12 = fVar12 - (float)(int)auVar9._8_4_ * fVar3;
    fVar13 = 0.0 - (float)(int)auVar9._12_4_ * fVar4;
    fVar10 = (float)(((uint)(fVar10 + fVar1) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar1));
    fVar11 = (float)(((uint)(fVar11 + fVar2) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar2));
    fVar12 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar3));
    fVar13 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar4));
    auVar9._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar11 - fVar2) ^ (uint)fVar11) &
                                             -(uint)(fRam0000000146af0024 < fVar11) ^ (uint)fVar11)
                                           & uRam0000000146af0074));
    auVar9._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar1) ^ (uint)fVar10) &
                                             -(uint)(_DAT_146af0020 < fVar10) ^ (uint)fVar10) &
                                           _DAT_146af0070));
    auVar9._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar12 - fVar3) ^ (uint)fVar12) &
                                             -(uint)(fRam0000000146af0028 < fVar12) ^ (uint)fVar12)
                                           & uRam0000000146af0078));
    auVar9._12_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar13 - fVar4) ^ (uint)fVar13) &
                                   -(uint)(fRam0000000146af002c < fVar13) ^ (uint)fVar13) &
                                 uRam0000000146af007c));
    movmskps((int)pfVar6,auVar9);
  }
  return;
}



// FUNCTION 14233cc90 FUN_14233cc90 body=63 status=ok
// SIG undefined FUN_14233cc90(void)

undefined8 * FUN_14233cc90(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_142324d10(lVar1,param_1);
  }
  if (*(int *)(puVar2 + 5) < 1) {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 14233ccd0 FUN_14233ccd0 body=52 status=ok
// SIG undefined FUN_14233ccd0(void)

void FUN_14233ccd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    AActor::GetLevel();
    return;
  }
  uVar1 = FUN_1429a0270();
  UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  return;
}



// FUNCTION 14233cd10 GetCompressedFlags body=26 status=ok
// SIG undefined GetCompressedFlags(void)

uint FSavedMove_Character::GetCompressedFlags(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18) & 1;
  uVar1 = (uint)(byte)((byte)uVar2 | 2);
  if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 14233cd30 GetVelocityAnimation body=25 status=ok
// SIG undefined GetVelocityAnimation(void)

undefined8 * AMAU_BehaviorPlayer::GetVelocityAnimation(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x358);
  *param_2 = *(undefined8 *)(param_1 + 0x350);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14233cd50 FUN_14233cd50 body=111 status=ok
// SIG undefined FUN_14233cd50(void)

float * FUN_14233cd50(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(param_1 + 0x2fc) < 0.0) {
    fVar3 = 360.0;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x2fc) * param_3;
  }
  if (*(float *)(param_1 + 0x2f8) < 0.0) {
    fVar2 = 360.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x2f8) * param_3;
  }
  fVar1 = *(float *)(param_1 + 0x2f4);
  if (0.0 <= fVar1) {
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    *param_2 = fVar1 * param_3;
    return param_2;
  }
  param_2[1] = fVar2;
  *param_2 = 360.0;
  param_2[2] = fVar3;
  return param_2;
}



// FUNCTION 14233cdc0 FUN_14233cdc0 body=217 status=ok
// SIG undefined FUN_14233cdc0(void)

longlong * FUN_14233cdc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,9);
    iVar2 = (int)param_2[1] + 9;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    puVar1 = (undefined8 *)*param_2;
    *puVar1 = 0x53005f006f004e;
    puVar1[1] = 0x64006e0075006f;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  else {
    plVar3 = (longlong *)UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x2d0),local_18,0);
    if (param_2 != plVar3) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar3;
      *plVar3 = 0;
      *(int *)(param_2 + 1) = (int)plVar3[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
      plVar3[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14233cea0 FUN_14233cea0 body=2285 status=ok
// SIG undefined FUN_14233cea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14233cea0(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  bool bVar27;
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
  longlong local_408;
  undefined8 *local_400;
  longlong local_3f8;
  undefined4 local_3f0;
  int iStack_3ec;
  longlong local_3e8;
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
  longlong local_398;
  undefined4 local_390;
  float local_388;
  undefined8 uStack_384;
  undefined8 uStack_37c;
  float fStack_374;
  undefined8 uStack_370;
  undefined8 local_368;
  float fStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348 [8];
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
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
  uint local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
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
  undefined1 local_278 [16];
  undefined1 local_268 [560];
  
  fVar29 = *(float *)(param_1 + 0x10);
  fVar30 = *(float *)((longlong)param_1 + 0x84);
  fVar31 = *(float *)(param_1 + 0x11);
  fVar32 = *(float *)((longlong)param_1 + 0x8c);
  fVar33 = *(float *)(param_1 + 0x12);
  fVar34 = *(float *)((longlong)param_1 + 0x94);
  fVar35 = *(float *)(param_1 + 0x13);
  fVar36 = *(float *)((longlong)param_1 + 0x9c);
  fVar37 = *(float *)(param_1 + 0x14);
  fVar38 = *(float *)((longlong)param_1 + 0xa4);
  fVar39 = *(float *)(param_1 + 0x15);
  fVar40 = *(float *)((longlong)param_1 + 0xac);
  fVar41 = *(float *)(param_1 + 0x16);
  fVar42 = *(float *)((longlong)param_1 + 0xb4);
  fVar43 = *(float *)(param_1 + 0x17);
  fVar44 = *(float *)((longlong)param_1 + 0xbc);
  local_3d8 = fVar29;
  fStack_3d4 = fVar30;
  fStack_3d0 = fVar31;
  fStack_3cc = fVar32;
  local_3c8 = fVar33;
  fStack_3c4 = fVar34;
  fStack_3c0 = fVar35;
  fStack_3bc = fVar36;
  local_3b8 = fVar37;
  fStack_3b4 = fVar38;
  fStack_3b0 = fVar39;
  fStack_3ac = fVar40;
  local_3a8 = fVar41;
  fStack_3a4 = fVar42;
  fStack_3a0 = fVar43;
  fStack_39c = fVar44;
  puVar15 = (undefined8 *)operator_new();
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    local_400 = (undefined8 *)0x0;
  }
  else {
    local_400 = puVar15;
    FLinearColor::FLinearColor(&local_340,(longlong)param_1 + 0xd74);
    uVar24 = *(uint *)(param_1 + 3);
    puVar16 = (undefined8 *)FName::FName(local_348,"GizmoColor",1);
    uVar20 = *puVar16;
    uVar17 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x5d0) + 0x2a8))
                       (*(longlong **)(DAT_146b17150 + 0x5d0),(uVar24 & 0x300) != 0,
                        uVar24 >> 10 & 0xffffff01);
    FUN_14257dfd0();
    puVar15[0x27] = uVar17;
    *puVar15 = &PTR__scalar_deleting_destructor__1440fad20;
    puVar15[0x2a] = uVar20;
    *(undefined4 *)(puVar15 + 0x28) = local_340;
    *(undefined4 *)((longlong)puVar15 + 0x144) = uStack_33c;
    *(undefined4 *)(puVar15 + 0x29) = uStack_338;
    *(undefined4 *)((longlong)puVar15 + 0x14c) = uStack_334;
  }
  iVar12 = (int)param_5[0x18];
  *(int *)(param_5 + 0x18) = iVar12 + 1;
  if (*(int *)((longlong)param_5 + 0xc4) < iVar12 + 1) {
    FUN_140822430(param_5 + 0x17,iVar12);
  }
  iVar25 = 0;
  *(undefined8 **)(param_5[0x17] + (longlong)iVar12 * 8) = puVar15;
  if (0 < (int)param_2[1]) {
    uVar24 = 1;
    local_3e8 = 0;
    do {
      if ((param_4 & uVar24) != 0) {
        fVar45 = 1.0;
        if ((*(char *)((longlong)param_1 + 0xd7c) != '\0') &&
           (lVar18 = *(longlong *)(local_3e8 + *param_2), *(float *)(lVar18 + 0x3cc) != 1.0)) {
          fVar28 = *(float *)(lVar18 + 0x3a4);
          if (*(float *)(lVar18 + 0x390) <= *(float *)(lVar18 + 0x3a4)) {
            fVar28 = *(float *)(lVar18 + 0x390);
          }
          if (fVar28 != 0.0) {
            lVar18 = FUN_1427633e0(lVar18,local_278,param_1 + 0x1ad,0);
            fVar28 = (*(float *)(param_1 + 0x1b0) / fVar28) * *(float *)(lVar18 + 0xc);
            if ((fVar28 < 1.0) && (0.0 < fVar28)) {
              fVar45 = fVar28;
            }
          }
        }
        iVar12 = FUN_1408bed80(param_5,1);
        lVar26 = (ulonglong)(uint)(iVar12 % 0x59) * 0xb8 +
                 *(longlong *)(*param_5 + (longlong)(iVar12 / 0x59) * 8);
        lVar18 = *(longlong *)(lVar26 + 0x78);
        if (*(longlong *)(lVar26 + 0x78) == 0) {
          lVar18 = lVar26;
        }
        *(longlong **)(lVar18 + 0x10) = param_1 + 0xb5;
        *(uint *)(lVar26 + 0x8c) = *(uint *)(lVar26 + 0x8c) & 0xfffffeff;
        *(longlong **)(lVar26 + 0xa0) = param_1 + 0xbf;
        *(undefined8 **)(lVar26 + 0xa8) = local_400;
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x37c);
        lVar22 = param_1[0x6f];
        uVar13 = (**(code **)(*param_1 + 0x18))(param_1);
        dVar4 = (double)param_1[0x72];
        local_328 = _DAT_1464aa7d0;
        uStack_320 = _DAT_1464aa7d8;
        local_318 = _DAT_1464aa7e0;
        uStack_310 = _DAT_1464aa7e8;
        local_308 = _DAT_1464aa7f0;
        uStack_300 = _DAT_1464aa7f8;
        local_2f8 = _DAT_1464aa800;
        uStack_2f0 = uRam00000001464aa808;
        dVar5 = (double)param_1[0x71];
        local_2d8 = (uint)((char)uVar13 != '\0');
        lVar21 = (longlong)dVar5;
        local_2cc = 0;
        local_2e8 = 0x3f80000000000000;
        uStack_2e0 = 0x3f8000003f800000;
        dVar8 = dVar5;
        if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar5)) {
          auVar6._8_4_ = SUB84(dVar5,0);
          auVar6._0_8_ = dVar5;
          auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          uVar13 = movmskpd(uVar13,auVar6);
          uVar13 = uVar13 & 1;
          dVar8 = (double)(longlong)(lVar21 - (ulonglong)uVar13);
        }
        lVar23 = (longlong)dVar8;
        dVar5 = (dVar5 - (double)lVar23) * 2147483647.0;
        lVar21 = (longlong)dVar5;
        if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar5)) {
          auVar9._8_4_ = SUB84(dVar5,0);
          auVar9._0_8_ = dVar5;
          auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          uVar13 = movmskpd(uVar13,auVar9);
          dVar5 = (double)(longlong)(lVar21 - (ulonglong)(uVar13 & 1));
        }
        lVar21 = (longlong)dVar5;
        if (lVar23 < 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0x7fffffff;
          if (lVar23 < 0x7fffffff) {
            lVar19 = lVar23;
          }
        }
        local_2c8 = (undefined4)lVar19;
        if (lVar21 < 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = 0x7fffffff;
          if (lVar21 < 0x7fffffff) {
            lVar23 = lVar21;
          }
        }
        lVar21 = (longlong)dVar4;
        local_2c4 = (uint)lVar23;
        dVar5 = dVar4;
        uVar13 = local_2c4;
        if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar4)) {
          auVar7._8_4_ = SUB84(dVar4,0);
          auVar7._0_8_ = dVar4;
          auVar7._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          uVar13 = movmskpd(local_2c4,auVar7);
          uVar13 = uVar13 & 1;
          dVar5 = (double)(longlong)(lVar21 - (ulonglong)uVar13);
        }
        lVar23 = (longlong)dVar5;
        dVar4 = (dVar4 - (double)lVar23) * 2147483647.0;
        lVar21 = (longlong)dVar4;
        if ((lVar21 != -0x8000000000000000) && ((double)lVar21 != dVar4)) {
          auVar10._8_4_ = SUB84(dVar4,0);
          auVar10._0_8_ = dVar4;
          auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          uVar13 = movmskpd(uVar13,auVar10);
          dVar4 = (double)(longlong)(lVar21 - (ulonglong)(uVar13 & 1));
        }
        lVar21 = (longlong)dVar4;
        if (lVar23 < 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0x7fffffff;
          if (lVar23 < 0x7fffffff) {
            lVar19 = lVar23;
          }
        }
        local_2c0 = (undefined4)lVar19;
        if (lVar21 < 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = 0x7fffffff;
          if (lVar21 < 0x7fffffff) {
            lVar23 = lVar21;
          }
        }
        uStack_384 = 0;
        local_2bc = (undefined4)lVar23;
        local_358 = 0;
        uStack_354 = 0;
        uStack_350 = 0;
        uStack_34c = 0x3f800000;
        local_2b8 = fVar33 * 0.0 + fVar45 * fVar29 + fVar37 * 0.0 + fVar41 * 0.0;
        fStack_2b4 = fVar34 * 0.0 + fVar45 * fVar30 + fVar38 * 0.0 + fVar42 * 0.0;
        fStack_2b0 = fVar35 * 0.0 + fVar45 * fVar31 + fVar39 * 0.0 + fVar43 * 0.0;
        fStack_2ac = fVar36 * 0.0 + fVar45 * fVar32 + fVar40 * 0.0 + fVar44 * 0.0;
        uStack_37c = 0;
        uStack_370 = 0;
        local_2a8 = fVar45 * fVar33 + fVar29 * 0.0 + fVar37 * 0.0 + fVar41 * 0.0;
        fStack_2a4 = fVar45 * fVar34 + fVar30 * 0.0 + fVar38 * 0.0 + fVar42 * 0.0;
        fStack_2a0 = fVar45 * fVar35 + fVar31 * 0.0 + fVar39 * 0.0 + fVar43 * 0.0;
        fStack_29c = fVar45 * fVar36 + fVar32 * 0.0 + fVar40 * 0.0 + fVar44 * 0.0;
        local_368 = 0;
        uStack_35c = 0;
        local_298 = fVar33 * 0.0 + fVar29 * 0.0 + fVar45 * fVar37 + fVar41 * 0.0;
        fStack_294 = fVar34 * 0.0 + fVar30 * 0.0 + fVar45 * fVar38 + fVar42 * 0.0;
        fStack_290 = fVar35 * 0.0 + fVar31 * 0.0 + fVar45 * fVar39 + fVar43 * 0.0;
        fStack_28c = fVar36 * 0.0 + fVar32 * 0.0 + fVar45 * fVar40 + fVar44 * 0.0;
        local_390 = (undefined4)param_1[0x19];
        local_398 = param_1[0x18];
        local_288 = fVar33 * 0.0 + fVar29 * 0.0 + fVar37 * 0.0 + fVar41 * 1.0;
        fStack_284 = fVar34 * 0.0 + fVar30 * 0.0 + fVar38 * 0.0 + fVar42 * 1.0;
        fStack_280 = fVar35 * 0.0 + fVar31 * 0.0 + fVar39 * 0.0 + fVar43 * 1.0;
        fStack_27c = fVar36 * 0.0 + fVar32 * 0.0 + fVar40 * 0.0 + fVar44 * 1.0;
        local_388 = fVar45;
        fStack_374 = fVar45;
        fStack_360 = fVar45;
        local_2d4 = (int)lVar22;
        local_2d0 = uVar3;
        uVar20 = FUN_1408c7250(local_268,&local_2b8,&local_398,param_1 + 0x18,
                               (longlong)param_1 + 0xdc,1,0,0,0,0,0,
                               (byte)(*(uint *)((longlong)param_1 + 0x1c) >> 0x14) & 1,1,0x3f800000,
                               &local_328);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_3f8,uVar20,&DAT_146b09668,2);
        lVar22 = local_3f8;
        local_408 = local_3f8;
        if (local_3f8 != 0) {
          LOCK();
          *(int *)(local_3f8 + 8) = *(int *)(local_3f8 + 8) + 1;
          UNLOCK();
          fVar29 = local_3d8;
          fVar30 = fStack_3d4;
          fVar31 = fStack_3d0;
          fVar32 = fStack_3cc;
          fVar33 = local_3c8;
          fVar34 = fStack_3c4;
          fVar35 = fStack_3c0;
          fVar36 = fStack_3bc;
          fVar37 = local_3b8;
          fVar38 = fStack_3b4;
          fVar39 = fStack_3b0;
          fVar40 = fStack_3ac;
          fVar41 = local_3a8;
          fVar42 = fStack_3a4;
          fVar43 = fStack_3a0;
          fVar44 = fStack_39c;
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f8);
        plVar1 = (longlong *)(lVar18 + 8);
        if (plVar1 != &local_408) {
          puVar15 = (undefined8 *)*plVar1;
          *plVar1 = lVar22;
          local_408 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar15 + 1);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            fVar29 = local_3d8;
            fVar30 = fStack_3d4;
            fVar31 = fStack_3d0;
            fVar32 = fStack_3cc;
            fVar33 = local_3c8;
            fVar34 = fStack_3c4;
            fVar35 = fStack_3c0;
            fVar36 = fStack_3bc;
            fVar37 = local_3b8;
            fVar38 = fStack_3b4;
            fVar39 = fStack_3b0;
            fVar40 = fStack_3ac;
            fVar41 = local_3a8;
            fVar42 = fStack_3a4;
            fVar43 = fStack_3a0;
            fVar44 = fStack_39c;
            if (iVar12 == 1) {
              if ((*(char *)(puVar15 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar11 = FOutputDevice::CanBeUsedOnAnyThread(), cVar11 == '\0')))) {
                LOCK();
                bVar27 = *(int *)((longlong)puVar15 + 0xc) == 0;
                if (bVar27) {
                  *(int *)((longlong)puVar15 + 0xc) = 1;
                }
                UNLOCK();
                fVar29 = local_3d8;
                fVar30 = fStack_3d4;
                fVar31 = fStack_3d0;
                fVar32 = fStack_3cc;
                fVar33 = local_3c8;
                fVar34 = fStack_3c4;
                fVar35 = fStack_3c0;
                fVar36 = fStack_3bc;
                fVar37 = local_3b8;
                fVar38 = fStack_3b4;
                fVar39 = fStack_3b0;
                fVar40 = fStack_3ac;
                fVar41 = local_3a8;
                fVar42 = fStack_3a4;
                fVar43 = fStack_3a0;
                fVar44 = fStack_39c;
                if (bVar27) {
                  uVar13 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar13 == 0) {
                    lVar22 = 0;
                  }
                  else {
                    lVar22 = (&DAT_1468a81f8)[uVar13 >> 0xe] + (ulonglong)(uVar13 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar22 + 8) = puVar15;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  fVar29 = local_3d8;
                  fVar30 = fStack_3d4;
                  fVar31 = fStack_3d0;
                  fVar32 = fStack_3cc;
                  fVar33 = local_3c8;
                  fVar34 = fStack_3c4;
                  fVar35 = fStack_3c0;
                  fVar36 = fStack_3bc;
                  fVar37 = local_3b8;
                  fVar38 = fStack_3b4;
                  fVar39 = fStack_3b0;
                  fVar40 = fStack_3ac;
                  fVar41 = local_3a8;
                  fVar42 = fStack_3a4;
                  fVar43 = fStack_3a0;
                  fVar44 = fStack_39c;
                }
              }
              else {
                (**(code **)*puVar15)(puVar15,1);
                fVar29 = local_3d8;
                fVar30 = fStack_3d4;
                fVar31 = fStack_3d0;
                fVar32 = fStack_3cc;
                fVar33 = local_3c8;
                fVar34 = fStack_3c4;
                fVar35 = fStack_3c0;
                fVar36 = fStack_3bc;
                fVar37 = local_3b8;
                fVar38 = fStack_3b4;
                fVar39 = fStack_3b0;
                fVar40 = fStack_3ac;
                fVar41 = local_3a8;
                fVar42 = fStack_3a4;
                fVar43 = fStack_3a0;
                fVar44 = fStack_39c;
              }
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_408);
        iVar12 = *(int *)(lVar18 + 0x38);
        local_3f0 = 0;
        iVar14 = (int)param_1[0xbe];
        iStack_3ec = iVar14 / 3 + (iVar14 >> 0x1f) +
                     (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
        iVar14 = iVar12 + 1;
        *(int *)(lVar18 + 0x38) = iVar14;
        if (*(int *)(lVar18 + 0x3c) < iVar14) {
          TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
          ::ResizeGrow(lVar18 + 0x28);
        }
        lVar22 = *(longlong *)(lVar18 + 0x30);
        if (*(longlong *)(lVar18 + 0x30) == 0) {
          lVar22 = lVar18 + 0x28;
        }
        *(ulonglong *)(lVar22 + (longlong)iVar12 * 8) = CONCAT44(iStack_3ec,local_3f0);
        *(undefined4 *)(lVar18 + 0x48) = 0;
        *(int *)(lVar18 + 0x4c) = *(int *)((longlong)param_1 + 0x4dc) + -1;
        uVar13 = (*(byte *)(param_1 + 3) & 1) << 3 | *(uint *)(lVar26 + 0x8c) & 0xffc00ff7;
        *(uint *)(lVar26 + 0x8c) = uVar13;
        *(uint *)(lVar26 + 0x8c) =
             (*(uint *)((longlong)param_1 + 0x1c) >> 0x11 ^ uVar13) & 0x200 ^ uVar13;
        FUN_142747330(param_5,iVar25,lVar26);
      }
      local_3e8 = local_3e8 + 8;
      uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
      iVar25 = iVar25 + 1;
    } while (iVar25 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14233d790 FUN_14233d790 body=568 status=ok
// SIG undefined FUN_14233d790(void)

void FUN_14233d790(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *in_stack_ffffffffffffff28;
  undefined8 *in_stack_ffffffffffffff30;
  undefined1 *in_stack_ffffffffffffff38;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  iVar4 = 0;
  if (0 < (int)param_2[1]) {
    uVar5 = 1;
    lVar6 = 0;
    do {
      if ((param_4 & uVar5) != 0) {
        uVar2 = *(undefined8 *)(lVar6 + *param_2);
        FLinearColor::FLinearColor(local_58,param_1 + 0x3b0);
        uVar1 = *(uint *)(param_1 + 0x18);
        GetViewSelectionColor
                  (local_48,local_58,uVar2,(uVar1 & 0x300) != 0,
                   CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff28 >> 8),(char)(uVar1 >> 10)) &
                   0xffffffffffffff01,(ulonglong)in_stack_ffffffffffffff30 & 0xffffffffffffff00,
                   CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),(char)(uVar1 >> 9)) &
                   0xffffffffffffff01);
        local_68 = *(undefined8 *)(param_1 + 0x3a4);
        local_94 = *(undefined4 *)(param_1 + 0xa4);
        local_60 = *(undefined4 *)(param_1 + 0x3ac);
        local_98 = *(undefined4 *)(param_1 + 0xa0);
        lVar3 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar3 = param_5 + 0x78;
        }
        local_90 = *(undefined4 *)(param_1 + 0xa8);
        local_8c = *(undefined4 *)(param_1 + 0x90);
        local_88 = *(undefined4 *)(param_1 + 0x94);
        local_84 = *(undefined4 *)(param_1 + 0x98);
        local_80 = *(undefined4 *)(param_1 + 0x80);
        local_7c = *(undefined4 *)(param_1 + 0x84);
        in_stack_ffffffffffffff38 = local_48;
        in_stack_ffffffffffffff30 = &local_68;
        local_78 = *(undefined4 *)(param_1 + 0x88);
        local_74 = *(undefined4 *)(param_1 + 0xb0);
        in_stack_ffffffffffffff28 = &local_98;
        local_70 = *(undefined4 *)(param_1 + 0xb4);
        local_6c = *(undefined4 *)(param_1 + 0xb8);
        FUN_142703f30(*(undefined8 *)(lVar3 + lVar6),&local_74,&local_80,&local_8c,
                      in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,in_stack_ffffffffffffff38,
                      0,0,0,0);
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      lVar6 = lVar6 + 8;
    } while (iVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14233d9d0 UpdateResourceBalanceStruct body=35 status=ok
// SIG undefined UpdateResourceBalanceStruct(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AAncPlayerController::UpdateResourceBalanceStruct(void)

{
  return;
}



// FUNCTION 14233da00 FUN_14233da00 body=623 status=ok
// SIG undefined FUN_14233da00(void)

void FUN_14233da00(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *in_stack_ffffffffffffff28;
  undefined1 *in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  iVar3 = (int)(*(float *)(param_1 + 0x3a4) * 0.25);
  if (iVar3 < 0x10) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 0x40;
    if (iVar3 < 0x40) {
      iVar6 = iVar3;
    }
  }
  iVar3 = 0;
  if (0 < (int)param_2[1]) {
    uVar5 = 1;
    lVar7 = 0;
    do {
      if ((param_4 & uVar5) != 0) {
        uVar2 = *(undefined8 *)(lVar7 + *param_2);
        FLinearColor::FLinearColor(local_58,param_1 + 0x3ac);
        uVar1 = *(uint *)(param_1 + 0x18);
        GetViewSelectionColor
                  (local_48,local_58,uVar2,(uVar1 & 0x300) != 0,
                   CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff28 >> 8),(char)(uVar1 >> 10)) &
                   0xffffffffffffff01,(ulonglong)in_stack_ffffffffffffff30 & 0xffffffffffffff00,
                   CONCAT31((int3)((uint)in_stack_ffffffffffffff38 >> 8),(char)(uVar1 >> 9)) &
                   0xffffff01);
        local_88 = *(undefined4 *)(param_1 + 0xa0);
        local_84 = *(undefined4 *)(param_1 + 0xa4);
        local_80 = *(undefined4 *)(param_1 + 0xa8);
        local_7c = *(undefined4 *)(param_1 + 0x90);
        lVar4 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar4 = param_5 + 0x78;
        }
        local_78 = *(undefined4 *)(param_1 + 0x94);
        in_stack_ffffffffffffff30 = local_48;
        local_74 = *(undefined4 *)(param_1 + 0x98);
        local_70 = *(undefined4 *)(param_1 + 0x80);
        local_6c = *(undefined4 *)(param_1 + 0x84);
        local_68 = *(undefined4 *)(param_1 + 0x88);
        local_64 = *(undefined4 *)(param_1 + 0xb0);
        local_60 = *(undefined4 *)(param_1 + 0xb4);
        local_5c = *(undefined4 *)(param_1 + 0xb8);
        in_stack_ffffffffffffff38 = *(undefined4 *)(param_1 + 0x3a4);
        in_stack_ffffffffffffff28 = &local_88;
        FUN_142705d30(*(undefined8 *)(lVar4 + lVar7),&local_64,&local_70,&local_7c,
                      in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,in_stack_ffffffffffffff38,
                      *(undefined4 *)(param_1 + 0x3a8),iVar6,0,0,0,0);
      }
      iVar3 = iVar3 + 1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      lVar7 = lVar7 + 8;
    } while (iVar3 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14233dc70 FUN_14233dc70 body=992 status=ok
// SIG undefined FUN_14233dc70(void)

void FUN_14233dc70(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  
  if (((*(longlong *)(param_1 + 0x3b8) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3b8) + 0x60), lVar1 != 0)) &&
     (iVar7 = 0, 0 < (int)param_2[1])) {
    uVar8 = 1;
    lVar11 = 0;
    do {
      if ((param_4 & uVar8) != 0) {
        fVar13 = *(float *)(param_1 + 0x3ac);
        fVar14 = *(float *)(param_1 + 0x3b0);
        lVar2 = *(longlong *)(lVar11 + *param_2);
        if (((*(byte *)(param_1 + 0x3e0) & 1) != 0) && (*(float *)(lVar2 + 0x3cc) != 1.0)) {
          fVar12 = *(float *)(lVar2 + 0x3a4);
          if (*(float *)(lVar2 + 0x390) <= *(float *)(lVar2 + 0x3a4)) {
            fVar12 = *(float *)(lVar2 + 0x390);
          }
          if (fVar12 != 0.0) {
            lVar4 = FUN_1427633e0(lVar2,local_a8,param_1 + 0x3a0,0);
            fVar12 = (*(float *)(param_1 + 0x3b4) / fVar12) * *(float *)(lVar4 + 0xc);
            if (fVar12 < 1.0) {
              fVar13 = fVar13 * fVar12;
              fVar14 = fVar14 * fVar12;
            }
          }
        }
        local_d8 = *(undefined8 *)(param_1 + 0x3d0);
        uStack_d0 = *(undefined8 *)(param_1 + 0x3d8);
        uVar10 = *(uint *)(param_1 + 0x18);
        if ((uVar10 & 0x300) == 0) {
          if ((uVar10 >> 10 & 1) != 0) {
            pfVar5 = (float *)(DAT_146b17150 + 0x944);
            if (*(char *)(DAT_146b17150 + 0x954) == '\0') {
              pfVar5 = (float *)(DAT_146b17150 + 0x914);
            }
            fVar12 = *(float *)(DAT_146b17150 + 0x99c);
            goto LAB_14233de27;
          }
        }
        else {
          pfVar5 = (float *)(DAT_146b17150 + 0x944);
          if (*(char *)(DAT_146b17150 + 0x954) == '\0') {
            pfVar5 = (float *)(DAT_146b17150 + 0x914);
          }
          fVar12 = *(float *)(DAT_146b17150 + 0x9a0);
LAB_14233de27:
          local_d8 = CONCAT44(fVar12 * pfVar5[1] * 10.0 + DAT_1464aa6c4,
                              fVar12 * *pfVar5 * 10.0 + DAT_1464aa6c0);
          uStack_d0 = CONCAT44(fVar12 * pfVar5[3] * 10.0 + DAT_1464aa6cc,
                               fVar12 * pfVar5[2] * 10.0 + DAT_1464aa6c8);
        }
        if ((*(byte *)(param_1 + 0x3e0) & 2) != 0) {
          FLinearColor::FLinearColor(&local_b8);
          uVar10 = *(uint *)(param_1 + 0x18);
          local_d8 = local_b8;
          uStack_d0 = uStack_b0;
        }
        local_c8 = DAT_1464aa6c0;
        local_c4 = DAT_1464aa6c4;
        local_c0 = DAT_1464aa6c8;
        local_bc = DAT_1464aa6cc;
        lVar4 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar4 = param_5 + 0x78;
        }
        if ((uVar10 >> 0xb & 1) != 0) {
          plVar3 = *(longlong **)(param_1 + 0x120);
          for (plVar6 = plVar3; plVar6 != plVar3 + *(int *)(param_1 + 0x128); plVar6 = plVar6 + 1) {
            if (*plVar6 == *(longlong *)(lVar2 + 0x350)) {
              if ((int)((longlong)plVar6 - (longlong)plVar3 >> 3) != -1) {
                bVar9 = (byte)(uVar10 >> 0x10);
                goto LAB_14233df46;
              }
              break;
            }
          }
        }
        bVar9 = (byte)(uVar10 >> 0xd);
LAB_14233df46:
        (**(code **)(**(longlong **)(lVar4 + lVar11) + 0x30))
                  (*(longlong **)(lVar4 + lVar11),param_1 + 0x3a0,fVar13,fVar14,lVar1,&local_d8,
                   bVar9 & 7,*(undefined4 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c4),
                   *(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3cc),1);
      }
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar11 = lVar11 + 8;
    } while (iVar7 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14233e050 FUN_14233e050 body=864 status=ok
// SIG undefined FUN_14233e050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14233e050(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((char)param_2[1] != '\0') {
    *param_1 = *(undefined8 *)(param_2 + 6);
    *(int *)(param_1 + 1) = param_2[8];
    return param_1;
  }
  piVar5 = *(int **)(param_2 + 4);
  if (piVar5 == (int *)0x0) goto LAB_14233e374;
  iVar6 = *param_2;
  if (iVar6 == 1) {
    *(undefined1 *)(param_2 + 1) = 1;
    iVar6 = *piVar5;
    if (iVar6 == 1) {
      iVar8 = piVar5[2];
      iVar7 = piVar5[3];
      iVar2 = piVar5[1];
    }
    else {
      if (iVar6 == 2) {
        iVar6 = piVar5[1];
        local_58 = CONCAT44(iVar6,iVar6);
        *(undefined8 *)(param_2 + 6) = local_58;
        param_2[8] = iVar6;
        goto LAB_14233e374;
      }
      iVar8 = DAT_1468b5d94;
      iVar7 = DAT_1468b5d98;
      iVar2 = DAT_1468b5d90;
      if (iVar6 == 3) {
        local_58 = CONCAT44(piVar5[1],piVar5[1]);
        iVar6 = piVar5[2];
        *(undefined8 *)(param_2 + 6) = local_58;
        param_2[8] = iVar6;
        goto LAB_14233e374;
      }
    }
    local_58 = CONCAT44(iVar8,iVar2);
    *(undefined8 *)(param_2 + 6) = local_58;
    param_2[8] = iVar7;
    goto LAB_14233e374;
  }
  if (iVar6 == 2) {
    *(undefined1 *)(param_2 + 1) = 1;
    pfVar4 = (float *)FUN_142695cf0(piVar5,&local_58);
    goto LAB_14233e224;
  }
  if (iVar6 != 3) goto LAB_14233e374;
  *(undefined1 *)(param_2 + 1) = 1;
  piVar1 = param_2 + 6;
  *(ulonglong *)piVar1 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  param_2[8] = DAT_1468b5d98;
  switch(*piVar5) {
  case 0:
    local_58 = *(undefined8 *)piVar5;
  default:
    iVar6 = (int)local_58;
LAB_14233e1e0:
    fVar9 = local_58._4_4_;
LAB_14233e1e5:
    fVar10 = (float)local_50;
    break;
  case 1:
    iVar6 = 1;
    goto LAB_14233e1e0;
  case 2:
    local_58 = *(undefined8 *)piVar5;
    fVar9 = (float)((ulonglong)local_58 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,piVar5[2]);
    iVar6 = (int)local_58;
    goto LAB_14233e1e5;
  case 3:
    iVar6 = 3;
    fVar9 = (float)piVar5[1];
    fVar10 = (float)piVar5[2];
    local_50 = CONCAT44(piVar5[3],(float)local_50);
    break;
  case 4:
    iVar6 = 4;
    local_38 = *(longlong **)(piVar5 + 8);
    fVar9 = (float)piVar5[1];
    fVar10 = (float)piVar5[2];
    local_50 = CONCAT44(piVar5[3],(float)local_50);
    break;
  case 5:
    iVar6 = 5;
    fVar9 = (float)piVar5[1];
    fVar10 = (float)piVar5[2];
    local_38 = (longlong *)CONCAT44(local_38._4_4_,piVar5[8]);
    local_50 = CONCAT44(piVar5[3],(float)local_50);
    break;
  case 6:
    local_50 = *(undefined8 *)(piVar5 + 2);
    iVar6 = 6;
    goto LAB_14233e1e0;
  }
  fVar3 = fVar9;
  if (iVar6 != 0) {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(ulonglong *)piVar1 = CONCAT44(fVar10,fVar9);
        param_2[8] = local_50._4_4_;
      }
      else if ((iVar6 == 4) && (local_38 != (longlong *)0x0)) {
        pfVar4 = (float *)(**(code **)(*local_38 + 0x68))(local_38,&local_58);
LAB_14233e224:
        fVar9 = pfVar4[5];
        fVar10 = pfVar4[2];
        *(ulonglong *)(param_2 + 6) =
             CONCAT44((pfVar4[4] - pfVar4[1]) * 0.5,(pfVar4[3] - *pfVar4) * 0.5);
        param_2[8] = (int)((fVar9 - fVar10) * 0.5);
      }
      goto LAB_14233e374;
    }
    fVar3 = fVar10 + fVar9;
  }
  *(ulonglong *)piVar1 = CONCAT44(fVar9,fVar9);
  param_2[8] = (int)fVar3;
LAB_14233e374:
  piVar5 = &DAT_1468b5d90;
  if ((char)param_2[1] != '\0') {
    piVar5 = param_2 + 6;
  }
  *param_1 = *(undefined8 *)piVar5;
  *(int *)(param_1 + 1) = piVar5[2];
  return param_1;
}



// FUNCTION 14233e3d0 FUN_14233e3d0 body=521 status=ok
// SIG undefined FUN_14233e3d0(void)

float * FUN_14233e3d0(longlong *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 local_58 [80];
  
  fVar5 = *(float *)(param_1 + 0x6a);
  param_2[1] = *(float *)((longlong)param_1 + 0x354);
  *param_2 = fVar5;
  param_2[2] = 0.0;
  cVar3 = (**(code **)(*param_1 + 0xa60))();
  if ((cVar3 == '\0') && (0.0 < *param_2 * *param_2 + param_2[1] * param_2[1])) {
    puVar4 = (undefined8 *)
             (**(code **)(*param_1 + 0x720))
                       (param_1,local_58,param_3,*(undefined4 *)((longlong)param_1 + 0x2d4),param_2)
    ;
    *(undefined8 *)param_2 = *puVar4;
    param_2[2] = *(float *)(puVar4 + 1);
    fVar5 = (float)(**(code **)(*param_1 + 0x6b8))(param_1);
    if (0.0001 <= fVar5) {
      fVar1 = *param_2;
      fVar2 = param_2[1];
      fVar10 = param_2[2];
      fVar7 = fVar1 * fVar1 + fVar2 * fVar2 + fVar10 * fVar10;
      if (fVar7 <= fVar5 * fVar5) {
        uVar6 = *(undefined8 *)param_2;
        fVar10 = param_2[2];
      }
      else {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar5 = (fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8)) * fVar5;
        fVar10 = fVar10 * fVar5;
        uVar6 = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
      }
    }
    else {
      uVar6 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar10 = DAT_1468b5d98;
    }
    *(undefined8 *)param_2 = uVar6;
    param_2[2] = fVar10;
  }
  return param_2;
}



// FUNCTION 14233e600 FUN_14233e600 body=28 status=ok
// SIG undefined FUN_14233e600(void)

float FUN_14233e600(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_14236c620();
  return fVar1 * *(float *)(param_1 + 0x230);
}



// FUNCTION 14233e630 FUN_14233e630 body=380 status=ok
// SIG undefined FUN_14233e630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14233e630(longlong param_1,float *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  fVar5 = DAT_1468b5d98;
  lVar1 = *(longlong *)(param_1 + 0x220);
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar5;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x4d8);
    cVar6 = FUN_142314560(uVar2);
    if (cVar6 != '\0') {
      FUN_1423120b0(&local_38,uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 0x4e0));
      uVar7 = *(uint *)(param_1 + 0x4b4);
      if ((uVar7 & 0x10) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x4d0);
        uVar7 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
        uVar8 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
        uVar9 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
        uVar10 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
        lVar3 = *(longlong *)(param_1 + 0x178);
        auVar11._4_4_ = uVar8;
        auVar11._0_4_ = uVar7;
        auVar11._8_4_ = uVar9;
        auVar11._12_4_ = uVar10;
        auVar12._4_4_ = uVar9;
        auVar12._0_4_ = uVar8;
        auVar12._8_4_ = uVar7;
        auVar12._12_4_ = uVar10;
        auVar12 = minps(auVar11,auVar12);
        auVar4._4_4_ = uVar7;
        auVar4._0_4_ = uVar9;
        auVar4._8_4_ = uVar8;
        auVar4._12_4_ = uVar10;
        auVar12 = minps(auVar12,auVar4);
        local_28 = *(undefined4 *)(lVar3 + 0x220);
        local_24 = *(undefined4 *)(lVar3 + 0x224);
        local_20 = *(float *)(lVar3 + 0x228) - *(float *)(lVar1 + 0x710) * auVar12._0_4_;
        FUN_142311e20(&local_18,uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 0x4e0),
                      &local_28);
        local_38 = local_38 + local_18;
        local_34 = local_34 + local_14;
        local_30 = local_30 + local_10;
        uVar7 = *(uint *)(param_1 + 0x4b4);
      }
      if ((uVar7 & 2) != 0) {
        *param_2 = local_38;
      }
      if ((uVar7 & 4) != 0) {
        param_2[1] = local_34;
      }
      if ((uVar7 & 8) != 0) {
        param_2[2] = local_30;
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 14233e7b0 FUN_14233e7b0 body=281 status=ok
// SIG undefined FUN_14233e7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14233e7b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
             undefined8 param_5)

{
  char cVar1;
  float fVar2;
  undefined8 uVar3;
  float local_18;
  float fStack_14;
  float local_10;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  uVar3 = _DAT_1468b5d90;
  fVar2 = DAT_1468b5d98;
  if ((cVar1 != '\0') && (((*param_4 != 0.0 || (param_4[1] != 0.0)) || (param_4[2] != 0.0)))) {
    local_18 = param_4[1];
    fStack_14 = -*param_4;
    local_10 = 0.0;
    cVar1 = (**(code **)(*param_1 + 0x780))(param_1,param_3,&local_18,param_5);
    if (cVar1 == '\0') {
      local_18 = local_18 * -1.0;
      fStack_14 = fStack_14 * -1.0;
      local_10 = local_10 * -1.0;
      cVar1 = (**(code **)(*param_1 + 0x780))(param_1,param_3,&local_18,param_5);
      uVar3 = _DAT_1468b5d90;
      fVar2 = DAT_1468b5d98;
      if (cVar1 == '\0') goto LAB_14233e8aa;
    }
    uVar3 = CONCAT44(fStack_14,local_18);
    fVar2 = local_10;
  }
LAB_14233e8aa:
  *param_2 = uVar3;
  *(float *)(param_2 + 1) = fVar2;
  return param_2;
}



// FUNCTION 14233e8d0 FUN_14233e8d0 body=497 status=ok
// SIG undefined FUN_14233e8d0(void)

void FUN_14233e8d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  short local_18 [2];
  undefined8 local_14;
  
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
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_146af0248) && (_Init_thread_header(&DAT_146af0248), DAT_146af0248 == -1)) {
    uVar4 = FUN_1428e7a40();
    FUN_1428e7a40();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bIsActive",1);
    DAT_146af0240 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146af0248);
  }
  iVar7 = 0;
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146af0240 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af0240 + 0x40) + (short)iVar6;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146af0240 + 0x30));
  }
  if ((*piVar8 < DAT_146af0258) && (_Init_thread_header(&DAT_146af0258), DAT_146af0258 == -1)) {
    uVar4 = FUN_1428e7a40();
    FUN_1428e7a40();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bReplicates",1);
    DAT_146af0250 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146af0258);
  }
  if (0 < *(int *)(DAT_146af0250 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af0250 + 0x40) + (short)iVar7;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(DAT_146af0250 + 0x30));
  }
  return;
}



// FUNCTION 14233ead0 FUN_14233ead0 body=955 status=ok
// SIG undefined FUN_14233ead0(void)

void FUN_14233ead0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146af0388) && (_Init_thread_header(&DAT_146af0388), DAT_146af0388 == -1)) {
    uVar1 = UMediaSoundComponent::GetPrivateStaticClass();
    UMediaSoundComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxWalkSpeed",1);
    DAT_146af0380 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0388);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af0380 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0380 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0380 + 0x30));
  }
  if ((*piVar4 < DAT_146af0398) && (_Init_thread_header(&DAT_146af0398), DAT_146af0398 == -1)) {
    uVar1 = UMediaSoundComponent::GetPrivateStaticClass();
    UMediaSoundComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxWalkSpeedCrouched",1);
    DAT_146af0390 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0398);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af0390 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0390 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0390 + 0x30));
  }
  if ((*piVar4 < DAT_146af03a8) && (_Init_thread_header(&DAT_146af03a8), DAT_146af03a8 == -1)) {
    uVar1 = UMediaSoundComponent::GetPrivateStaticClass();
    UMediaSoundComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxSwimSpeed",1);
    DAT_146af03a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af03a8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af03a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af03a0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af03a0 + 0x30));
  }
  if ((*piVar4 < DAT_146af03b8) && (_Init_thread_header(&DAT_146af03b8), DAT_146af03b8 == -1)) {
    uVar1 = UMediaSoundComponent::GetPrivateStaticClass();
    UMediaSoundComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxFlySpeed",1);
    DAT_146af03b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af03b8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af03b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af03b0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af03b0 + 0x30));
  }
  if ((*piVar4 < DAT_146af03c8) && (_Init_thread_header(&DAT_146af03c8), DAT_146af03c8 == -1)) {
    uVar1 = UMediaSoundComponent::GetPrivateStaticClass();
    UMediaSoundComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxCustomMovementSpeed",1);
    DAT_146af03c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af03c8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af03c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af03c0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af03c0 + 0x30));
  }
  return;
}



// FUNCTION 14233ef10 FUN_14233ef10 body=83 status=ok
// SIG undefined FUN_14233ef10(void)

float FUN_14233ef10(longlong *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x3f8))();
  if (0.0001 < ABS(fVar1)) {
    return *(float *)(param_1 + 0x47) * *(float *)(param_1 + 0x47) * (-0.5 / fVar1);
  }
  return 0.0;
}



// FUNCTION 14233ef70 FUN_14233ef70 body=59 status=ok
// SIG undefined FUN_14233ef70(void)

ulonglong FUN_14233ef70(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x690))();
  if (param_1[0x44] != 0) {
    uVar1 = (ulonglong)
            (uint)(*(float *)(param_1[0x44] + 0x57c) * *(float *)(param_1 + 0x47) + (float)uVar1);
  }
  return uVar1;
}



// FUNCTION 14233efb0 FUN_14233efb0 body=147 status=ok
// SIG undefined FUN_14233efb0(void)

undefined4 FUN_14233efb0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  switch((char)param_1[0x49]) {
  case '\x01':
  case '\x02':
    break;
  case '\x03':
    return (int)param_1[0x4f];
  case '\x04':
    return (int)param_1[0x52];
  case '\x05':
    return *(undefined4 *)((longlong)param_1 + 0x29c);
  case '\x06':
    return (int)param_1[0x55];
  default:
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x550))(param_1);
  lVar2 = 0x278;
  if (cVar1 != '\0') {
    lVar2 = 0x284;
  }
  return *(undefined4 *)(lVar2 + (longlong)param_1);
}



// FUNCTION 14233f0a0 FUN_14233f0a0 body=51 status=ok
// SIG undefined FUN_14233f0a0(void)

float FUN_14233f0a0(longlong *param_1)

{
  float fVar1;
  
  if (param_1[0x44] != 0) {
    fVar1 = (float)(**(code **)(*param_1 + 0x408))();
    return fVar1 * *(float *)(param_1 + 0x56);
  }
  return 0.0;
}



// FUNCTION 14233f0e0 FUN_14233f0e0 body=21 status=ok
// SIG undefined FUN_14233f0e0(void)

undefined8 FUN_14233f0e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x220) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x220) + 0x4d8);
  }
  return 0;
}



// FUNCTION 14233f100 FUN_14233f100 body=501 status=ok
// SIG undefined FUN_14233f100(void)

undefined8 * FUN_14233f100(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x220) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x168);
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0), cVar2 != '\0')) {
      *param_2 = 0;
      param_2[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0x16;
      pwVar3 = L"Rigid Body";
      goto LAB_14233f2da;
    }
    cVar2 = FUN_1422358f0(*(undefined8 *)(param_1 + 0x220));
    if (cVar2 == '\0') goto LAB_14233f199;
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar3 = L"Matinee";
    goto LAB_14233f2d4;
  }
LAB_14233f199:
  switch(*(undefined1 *)(param_1 + 0x248)) {
  case 0:
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 10;
    pwVar3 = L"NULL";
    break;
  case 1:
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar3 = L"Walking";
    goto LAB_14233f2d4;
  case 2:
    *param_2 = 0;
    param_2[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0x16;
    pwVar3 = L"NavWalking";
    break;
  case 3:
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar3 = L"Falling";
    goto LAB_14233f2d4;
  case 4:
    *param_2 = 0;
    param_2[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0x12;
    pwVar3 = L"Swimming";
    break;
  case 5:
    *param_2 = 0;
    param_2[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0xe;
    pwVar3 = L"Flying";
    break;
  case 6:
    *param_2 = 0;
    param_2[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0xe;
    pwVar3 = L"Custom";
    break;
  default:
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar3 = L"Unknown";
LAB_14233f2d4:
    uVar4 = 0x10;
  }
LAB_14233f2da:
  FGenericPlatformString::Memcpy(*param_2,pwVar3,uVar4);
  return param_2;
}



// FUNCTION 14233f320 FUN_14233f320 body=297 status=ok
// SIG undefined FUN_14233f320(void)

undefined8 FUN_14233f320(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar6 = FGenericPlatformMath::SRand();
  uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  fVar8 = (float)uVar6 * 360.0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    iVar3 = FUN_142235230();
    if (iVar3 != 0) {
      plVar1 = (longlong *)(param_1 + 0x218);
      cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      lVar5 = 0;
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x618);
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
          *(longlong *)(param_1 + 0x618) = lVar4;
        }
      }
      cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
      if ((cVar2 != '\0') && (lVar5 = *(longlong *)(param_1 + 0x610), lVar5 == 0)) {
        lVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
        *(longlong *)(param_1 + 0x610) = lVar5;
      }
      if (lVar4 == 0) {
        if (lVar5 != 0) {
          fVar8 = *(float *)(lVar5 + 0xc);
          uVar9 = 0;
        }
      }
      else {
        fVar8 = *(float *)(lVar4 + 0x58);
        uVar9 = 0;
      }
      fVar8 = fVar8 * 8.0;
      fVar7 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
      if (ABS(fVar8) < ABS(fVar7)) {
        fVar7 = fVar8;
      }
      fVar8 = fVar8 - fVar7;
    }
  }
  return CONCAT44(uVar9,fVar8);
}



// FUNCTION 14233f450 FUN_14233f450 body=21 status=ok
// SIG undefined FUN_14233f450(void)

undefined1 FUN_14233f450(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x118) + 0x128);
  }
  return 0;
}



// FUNCTION 14233f470 FUN_14233f470 body=47 status=ok
// SIG undefined FUN_14233f470(void)

undefined8 FUN_14233f470(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    uVar2 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    uVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14233f4a0 FUN_14233f4a0 body=97 status=ok
// SIG undefined FUN_14233f4a0(void)

float FUN_14233f4a0(longlong *param_1,float param_2)

{
  float fVar1;
  
  if ((*(byte *)((longlong)param_1 + 500) & 4) != 0) {
    return *(float *)(param_1 + 0x3e);
  }
  fVar1 = (float)(**(code **)(*param_1 + 0x6c0))();
  if (1e-08 <= ABS(fVar1)) {
    param_2 = param_2 * param_2 * (0.5 / ABS(fVar1));
  }
  return param_2;
}



// FUNCTION 14233f510 FUN_14233f510 body=151 status=ok
// SIG undefined FUN_14233f510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14233f510(longlong param_1,undefined4 *param_2,int param_3,float param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x4d0);
  uVar4 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
  uVar6 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
  uVar7 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
  uVar8 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
  auVar10._4_4_ = uVar6;
  auVar10._0_4_ = uVar4;
  auVar10._8_4_ = uVar7;
  auVar10._12_4_ = uVar8;
  auVar11._4_4_ = uVar7;
  auVar11._0_4_ = uVar6;
  auVar11._8_4_ = uVar4;
  auVar11._12_4_ = uVar8;
  auVar11 = minps(auVar10,auVar11);
  fVar3 = 0.0;
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = uVar7;
  auVar2._8_4_ = uVar6;
  auVar2._12_4_ = uVar8;
  auVar11 = minps(auVar11,auVar2);
  fVar9 = auVar11._0_4_ * *(float *)(lVar1 + 0x710);
  fVar5 = auVar11._0_4_ * *(float *)(lVar1 + 0x714);
  if (param_3 != 0) {
    fVar12 = 0.0;
    if ((param_3 == 1) ||
       ((fVar13 = param_4, param_3 != 2 && (fVar12 = param_4, fVar13 = 0.0, param_3 == 3)))) {
      fVar3 = param_4;
      fVar13 = fVar12;
    }
    fVar5 = fVar5 - fVar3;
    fVar9 = fVar9 - fVar13;
    if (fVar5 <= 0.0009999999) {
      fVar5 = 0.0009999999;
    }
    if (fVar9 <= 0.0009999999) {
      fVar9 = 0.0009999999;
    }
  }
  param_2[1] = fVar5;
  param_2[2] = fVar9;
  *param_2 = 3;
  return param_2;
}



// FUNCTION 14233f5b0 FUN_14233f5b0 body=547 status=ok
// SIG undefined FUN_14233f5b0(void)

float * FUN_14233f5b0(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  FUN_14236d670();
  if (*(longlong *)(param_1 + 0x220) != 0) {
    cVar3 = *(char *)(*(longlong *)(param_1 + 0x220) + 0x128);
    if (cVar3 == '\x01') {
      fVar10 = *(float *)(param_1 + 0x3c8);
    }
    else {
      fVar10 = *(float *)(param_1 + 0x3c4);
    }
    lVar5 = FWeakObjectPtr::Get(param_3 + 0x6c);
    if (lVar5 != 0) {
      lVar6 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (cVar3 == '\x01') {
          fVar10 = *(float *)(param_1 + 0x3d0);
        }
        else {
          fVar10 = *(float *)(param_1 + 0x3cc);
        }
      }
    }
    if (0.0001 <= fVar10) {
      fVar1 = *param_2;
      fVar2 = param_2[1];
      fVar12 = param_2[2];
      fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar12 * fVar12;
      if (fVar8 <= fVar10 * fVar10) {
        uVar7 = *(undefined8 *)param_2;
        fVar12 = param_2[2];
      }
      else {
        auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar11._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
        fVar10 = (fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9)) * fVar10;
        fVar12 = fVar12 * fVar10;
        uVar7 = CONCAT44(fVar2 * fVar10,fVar1 * fVar10);
      }
    }
    else {
      uVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar12 = DAT_1468b5d98;
    }
    *(undefined8 *)param_2 = uVar7;
    param_2[2] = fVar12;
  }
  return param_2;
}



// FUNCTION 14233f7e0 FUN_14233f7e0 body=16 status=ok
// SIG undefined FUN_14233f7e0(void)

float FUN_14233f7e0(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x2ec);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 14233f7f0 FUN_14233f7f0 body=74 status=ok
// SIG undefined FUN_14233f7f0(void)

void FUN_14233f7f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x3f8) == 0) {
    lVar1 = operator_new(0x160);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_142325eb0(lVar1,param_1 + -0x218);
    }
    *(undefined8 *)(param_1 + 0x3f8) = uVar2;
  }
  return;
}



// FUNCTION 14233f840 FUN_14233f840 body=47 status=ok
// SIG undefined FUN_14233f840(void)

void FUN_14233f840(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x610) == 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x28))();
    *(undefined8 *)(param_1 + 0x610) = uVar1;
  }
  return;
}



// FUNCTION 14233f870 FUN_14233f870 body=281 status=ok
// SIG undefined FUN_14233f870(void)

undefined8 * FUN_14233f870(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x400);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x88);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_14504b4e0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined2 *)(puVar1 + 10) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x52) = 0;
      *(uint *)((longlong)puVar1 + 0x6c) = *(uint *)((longlong)puVar1 + 0x6c) & 0xfffffffe;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + 100) = 0x3e000000;
      *(undefined4 *)(puVar1 + 0xd) = 0x3e000000;
      puVar1[0xe] = 0;
      *(undefined1 *)(puVar1 + 0xf) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
      plVar2 = (longlong *)FUN_14293b120();
      if (plVar2[0x1f] == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
      }
      if (plVar2[0x1f] != 0) {
        *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(plVar2[0x1f] + 0x4a0);
      }
      lVar3 = FUN_14046f570(param_1 + -0x218);
      if (lVar3 != 0) {
        *(undefined4 *)((longlong)puVar1 + 0x84) = *(undefined4 *)(lVar3 + 0x790);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar3 + 0x790);
      }
      *(undefined4 *)((longlong)puVar1 + 100) = *(undefined4 *)(puVar1 + 0xd);
    }
    *(undefined8 **)(param_1 + 0x400) = puVar1;
  }
  return puVar1;
}



// FUNCTION 14233f990 FUN_14233f990 body=47 status=ok
// SIG undefined FUN_14233f990(void)

void FUN_14233f990(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x618) == 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x30))();
    *(undefined8 *)(param_1 + 0x618) = uVar1;
  }
  return;
}



// FUNCTION 14233fa10 FUN_14233fa10 body=110 status=ok
// SIG undefined FUN_14233fa10(void)

undefined8 * FUN_14233fa10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  float local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x98);
  if (lVar1 == 0) {
    local_18 = DAT_146531c78;
    local_10 = DAT_146531c80;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
  }
  *param_2 = local_18;
  *(float *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 14233fae0 FUN_14233fae0 body=675 status=ok
// SIG undefined FUN_14233fae0(void)

longlong * FUN_14233fae0(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  void *_Dst;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong local_res8;
  undefined8 local_res10;
  void *local_res18;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  
  local_res8 = param_1[3];
  FName::ToString(&local_res8,&local_48);
  if (param_1[0x23] == 0) {
    local_68 = 0;
    local_60 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8);
  }
  else {
    local_res10 = *(undefined8 *)(param_1[0x23] + 0x18);
    FName::ToString(&local_res10,&local_68);
  }
  iVar4 = (int)local_60;
  iVar3 = local_60._4_4_;
  bVar8 = (int)local_60 != 0;
  local_58 = local_68;
  local_68 = 0;
  local_50 = (int)local_60;
  local_4c = local_60._4_4_;
  local_60 = 0;
  if (iVar3 < (int)((2 - (uint)bVar8) + iVar4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar4 = local_50;
  }
  local_50 = (2 - (uint)(iVar4 != 0)) + iVar4;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  puVar1 = (undefined2 *)(local_58 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
  *puVar1 = 0x2e;
  puVar1[1] = 0;
  if (local_50 < 2) {
    *param_2 = (longlong)local_48;
    *(int *)(param_2 + 1) = (int)local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48 = (void *)0x0;
    if (local_58 != 0) {
      FMemory::Free(local_58);
    }
  }
  else {
    iVar4 = 0;
    if ((int)local_40 != 0) {
      iVar4 = (int)local_40 + -1;
    }
    if ((local_50 != 0) || (iVar3 = 1, iVar4 == 0)) {
      iVar3 = 0;
    }
    if (local_4c < iVar3 + local_50 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar3 = local_50;
    local_res18 = local_48;
    lVar2 = local_58;
    iVar7 = local_4c;
    iVar5 = local_50;
    if (iVar4 != 0) {
      lVar6 = (longlong)local_50;
      local_50 = local_50 + (uint)(local_50 == 0) + iVar4;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
      }
      iVar7 = local_4c;
      iVar5 = local_50;
      lVar2 = local_58;
      _Dst = (void *)(local_58 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,local_res18,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar4 * 2) = 0;
    }
    *param_2 = lVar2;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  lVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
  if (lVar2 != 0) {
    iVar4 = (int)param_2[1];
    iVar3 = (2 - (uint)(iVar4 != 0)) + iVar4;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    *puVar1 = 0x20;
    puVar1[1] = 0;
    local_res8 = *(longlong *)(lVar2 + 0x18);
    FName::AppendString(&local_res8,param_2);
  }
  return param_2;
}



// FUNCTION 14233fd90 FUN_14233fd90 body=173 status=ok
// SIG undefined FUN_14233fd90(void)

float * FUN_14233fd90(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x138);
  cVar3 = FUN_142314560(uVar4);
  if (cVar3 != '\0') {
    FUN_142311f90(uVar4,*(undefined8 *)(param_1 + 0x140),&local_28,local_18);
    fVar1 = *(float *)(param_1 + 0x4c);
    *param_2 = local_28 + *(float *)(param_1 + 0x48);
    fVar2 = *(float *)(param_1 + 0x50);
    param_2[1] = local_24 + fVar1;
    param_2[2] = local_20 + fVar2;
    return param_2;
  }
  fVar1 = *(float *)(param_1 + 0x44);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x3c);
  param_2[2] = fVar1;
  return param_2;
}



// FUNCTION 14233fe40 GetSavedMoveIndex body=83 status=ok
// SIG undefined GetSavedMoveIndex(void)

ulonglong FNetworkPredictionData_Client_Character::GetSavedMoveIndex(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((0 < iVar1) &&
      (((lVar2 = *(longlong *)(param_1 + 0x40), lVar2 == 0 ||
        ((*(byte *)(lVar2 + 0x18) & 0x10) != 0)) ||
       (*(float *)(lVar2 + 0x1c) <= param_2 && param_2 != *(float *)(lVar2 + 0x1c))))) &&
     (uVar3 = 0, 0 < iVar1)) {
    plVar4 = *(longlong **)(param_1 + 0x10);
    uVar5 = uVar3;
    do {
      if (param_2 == *(float *)(*plVar4 + 0x1c)) {
        return uVar5;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  return 0xffffffff;
}



// FUNCTION 14233fea0 FUN_14233fea0 body=85 status=ok
// SIG undefined FUN_14233fea0(void)

undefined8 FUN_14233fea0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(int *)(lVar1 + 0x708) != 2) && (DAT_1468b616c == '\0')) {
    if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x380);
      }
    }
    else if (*(char *)(param_1 + 0xd8) != '\0') {
      return *(undefined8 *)(param_1 + 0xe0);
    }
  }
  return *(undefined8 *)(lVar1 + 0x1b8);
}



// FUNCTION 14233ff00 GetServerMoveDeltaTime body=30 status=ok
// SIG undefined GetServerMoveDeltaTime(void)

float FNetworkPredictionData_Server_Character::GetServerMoveDeltaTime
                (longlong param_1,float param_2,float param_3)

{
  if (*(char *)(param_1 + 0x78) != '\0') {
    return *(float *)(param_1 + 0x7c);
  }
  param_2 = param_2 - *(float *)(param_1 + 0x58);
  param_3 = param_3 * *(float *)(param_1 + 0x68);
  if (param_3 <= param_2) {
    param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 14233ff20 FUN_14233ff20 body=46 status=ok
// SIG undefined FUN_14233ff20(void)

float FUN_14233ff20(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x3bc);
  fVar2 = param_2;
  if (((fVar1 < param_2) && (param_3 < *(int *)(param_1 + 0x3c0))) &&
     (fVar2 = param_2 * 0.5, fVar1 <= param_2 * 0.5)) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 1e-06) {
    fVar2 = 1e-06;
  }
  return fVar2;
}



// FUNCTION 14233ff50 FUN_14233ff50 body=153 status=ok
// SIG undefined FUN_14233ff50(void)

undefined1 FUN_14233ff50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 == 0) goto LAB_14233ffd7;
  lVar4 = FUN_14290cfd0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_14233ffd7;
  if (*(longlong *)(param_1 + 0x118) == 0) {
LAB_14233ffb8:
    bVar2 = false;
  }
  else {
    cVar3 = FOutputDevice::CanBeUsedOnAnyThread();
    if (cVar3 == '\0') goto LAB_14233ffb8;
    bVar2 = true;
  }
  if (!bVar2) {
    cVar3 = FOutputDevice::CanBeUsedOnAnyThread(lVar1);
    if (cVar3 == '\0') {
LAB_14233ffd7:
      return *(undefined1 *)(param_1 + 0x2e4);
    }
  }
  return 1;
}



// FUNCTION 142340040 FUN_142340040 body=297 status=ok
// SIG undefined FUN_142340040(void)

void FUN_142340040(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [16];
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined2 local_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0xe8);
  puVar5 = puVar3 + (longlong)*(int *)(param_1 + 0xf0) * 4;
  if (puVar3 != puVar5) {
    piVar2 = (int *)(puVar3 + 3);
    do {
      local_70 = 0;
      local_68 = 0;
      local_48 = 0;
      if (((piVar2[-1] == 0 && piVar2[1] == 0) && *piVar2 == 0) && piVar2[-2] == 0) {
        lVar4 = *(longlong *)(piVar2 + -4);
      }
      else {
        local_res18 = 0;
        lVar4 = 0;
      }
      local_58 = piVar2[-2];
      iStack_54 = piVar2[-1];
      iStack_50 = *piVar2;
      iStack_4c = piVar2[1];
      local_78 = *puVar3;
      local_60 = lVar4;
      lVar1 = FUN_142324270(&local_78,0);
      if ((lVar1 == 0) && (lVar4 != *(longlong *)(piVar2 + -4))) {
        local_60 = *(longlong *)(piVar2 + -4);
        lVar1 = FUN_142324270(&local_78,0);
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      local_res20 = lVar1;
      FUN_14058c900(param_2,local_res8,&local_res20,0);
      puVar3 = puVar3 + 4;
      piVar2 = piVar2 + 8;
    } while (puVar3 != puVar5);
  }
  return;
}



// FUNCTION 142340170 FUN_142340170 body=198 status=ok
// SIG undefined FUN_142340170(void)

undefined8 * FUN_142340170(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar4 = FUN_14171bfe0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FName::ToString(param_2,&local_18);
      cVar3 = FString::RemoveFromEnd(&local_18,&DAT_146531c68,1);
      if (cVar3 != '\0') {
        puVar5 = &DAT_143f3eda8;
        if (local_10 != 0) {
          puVar5 = local_18;
        }
        FName::FName(&local_res8,puVar5,1);
        *param_2 = local_res8;
      }
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 142340240 FUN_142340240 body=108 status=ok
// SIG undefined FUN_142340240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142340240(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (*(longlong *)(param_1 + 0x220) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x4d0);
    uVar3 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
    uVar5 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
    uVar6 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
    uVar7 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
    auVar9._4_4_ = uVar5;
    auVar9._0_4_ = uVar3;
    auVar9._8_4_ = uVar6;
    auVar9._12_4_ = uVar7;
    auVar10._4_4_ = uVar6;
    auVar10._0_4_ = uVar5;
    auVar10._8_4_ = uVar3;
    auVar10._12_4_ = uVar7;
    auVar10 = minps(auVar9,auVar10);
    auVar2._4_4_ = uVar3;
    auVar2._0_4_ = uVar6;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar7;
    auVar10 = minps(auVar10,auVar2);
    fVar4 = *(float *)(param_1 + 0x2ec);
    fVar8 = auVar10._0_4_ * *(float *)(lVar1 + 0x714);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    uVar3 = 0x3dcccccd;
    fVar4 = fVar8 - fVar4;
    if (0.1 <= fVar4) {
      if (fVar8 <= fVar4) {
        fVar4 = fVar8;
      }
      return CONCAT44(auVar10._4_4_,fVar4);
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 1423402d0 FUN_1423402d0 body=132 status=ok
// SIG undefined FUN_1423402d0(void)

undefined8 * FUN_1423402d0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_142730ad0(param_1,param_3);
  if ((cVar1 == '\0') ||
     (uVar3 = 0x400, (*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x400) == 0)) {
    uVar3 = 0;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar3 | 0x200;
  bVar2 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar2 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 142340360 FUN_142340360 body=343 status=ok
// SIG undefined FUN_142340360(void)

undefined8 * FUN_142340360(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x18) & 0x300;
  if (((*(byte *)(param_1 + 0x3a0) & 1) == 0) || (uVar5 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af02a8) && (_Init_thread_header(&DAT_146af02a8), DAT_146af02a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146af02a0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Editor.OverrideDrawOnlyIfSelected");
    _Init_thread_footer(&DAT_146af02a8);
  }
  uVar6 = 0;
  if (((DAT_146af02a0 != (longlong *)0x0) &&
      (iVar4 = (**(code **)(*DAT_146af02a0 + 0x68))(), iVar4 == 1)) && (uVar5 == 0)) {
    bVar1 = false;
  }
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar2 = FUN_142730ad0(param_1,param_3);
  if ((cVar2 != '\0') && (bVar1)) {
    uVar6 = 0x400;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar6 | 0x200;
  bVar3 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar3 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 1423404c0 FUN_1423404c0 body=238 status=ok
// SIG undefined FUN_1423404c0(void)

ulonglong * FUN_1423404c0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong local_res8;
  
  if (((*(byte *)(param_1 + 0x3a0) & 4) != 0) && ((*(uint *)(param_1 + 0x18) & 0x300) != 0)) {
    *param_2 = 0x260100000000;
    return param_2;
  }
  uVar3 = 0;
  cVar1 = FUN_142730ad0(param_1,param_3);
  if (cVar1 != '\0') {
    uVar3 = (uint)((*(byte *)(param_1 + 0x3a0) & 1) != 0);
  }
  bVar2 = FUN_142730880(param_1,param_3);
  uVar3 = ((uint)bVar2 * 2 | uVar3) << 10;
  uVar4 = uVar3 | 0x2201;
  local_res8 = (ulonglong)uVar3 << 0x20 | 0x220100000000;
  if ((*(byte *)(param_1 + 0x3a0) & 8) != 0) {
    uVar4 = uVar3 | 0x22201;
    local_res8 = (ulonglong)uVar3 << 0x20 | 0x2220100000000;
  }
  if (*(char *)(param_3 + 0x1200) == '\0') {
    local_res8 = (ulonglong)uVar4 << 0x20 | 0x800000000000;
  }
  *param_2 = local_res8;
  return param_2;
}



// FUNCTION 1423405b0 FUN_1423405b0 body=343 status=ok
// SIG undefined FUN_1423405b0(void)

undefined8 * FUN_1423405b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x18) & 0x300;
  if (((*(byte *)(param_1 + 0x3a0) & 1) == 0) || (uVar5 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af02c8) && (_Init_thread_header(&DAT_146af02c8), DAT_146af02c8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146af02c0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Editor.OverrideDrawOnlyIfSelected");
    _Init_thread_footer(&DAT_146af02c8);
  }
  uVar6 = 0;
  if (((DAT_146af02c0 != (longlong *)0x0) &&
      (iVar4 = (**(code **)(*DAT_146af02c0 + 0x68))(), iVar4 == 1)) && (uVar5 == 0)) {
    bVar1 = false;
  }
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar2 = FUN_142730ad0(param_1,param_3);
  if ((cVar2 != '\0') && (bVar1)) {
    uVar6 = 0x400;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar6 | 0x200;
  bVar3 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar3 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 142340710 FUN_142340710 body=155 status=ok
// SIG undefined FUN_142340710(void)

undefined8 * FUN_142340710(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c);
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_142730ad0(param_1,param_3);
  if ((cVar1 == '\0') || ((uVar3 >> 10 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x400;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar3 | 0x201;
  bVar2 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar2 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 1423407b0 FUN_1423407b0 body=125 status=ok
// SIG undefined FUN_1423407b0(void)

longlong FUN_1423407b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 4 & 1) == 0)) &&
     (lVar3 = (**(code **)(*plVar1 + 0x148))(), lVar3 != 0)) {
    return lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar4 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
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



// FUNCTION 142340830 FUN_142340830 body=125 status=ok
// SIG undefined FUN_142340830(void)

void FUN_142340830(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_f8 [2];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [152];
  
  local_a8 = param_1;
  FUN_140729f20(local_a0);
  local_c8 = 0;
  local_b8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0xa0,local_e8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b5f0;
    puVar1[1] = local_a8;
    FUN_140729f20(puVar1 + 2,local_a0);
  }
  local_f8[0] = &LAB_142332280;
  FUN_14234b4d0(param_1,local_f8);
  return;
}



// FUNCTION 1423408b0 FUN_1423408b0 body=143 status=ok
// SIG undefined FUN_1423408b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1423408b0(longlong *param_1)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  
  if (((*(float *)((longlong)param_1 + 0x4ec) != 0.0) || (*(float *)(param_1 + 0x9e) != 0.0)) ||
     (*(float *)((longlong)param_1 + 0x4f4) != 0.0)) {
    in_RAX = (**(code **)(*param_1 + 0x5c0))();
    if ((char)in_RAX != '\0') {
      *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x4ec);
      *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x4f4);
      (**(code **)(*param_1 + 0x5a0))(param_1,3);
      *(undefined8 *)((longlong)param_1 + 0x4ec) = _DAT_1468b5d90;
      uVar1 = DAT_1468b5d98;
      *(undefined4 *)((longlong)param_1 + 0x4f4) = DAT_1468b5d98;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142340940 HandleSlopeBoosting body=560 status=ok
// SIG undefined HandleSlopeBoosting(void)

float * UCharacterMovementComponent::HandleSlopeBoosting
                  (undefined8 param_1,float *param_2,float *param_3,longlong param_4,float param_5,
                  float *param_6,undefined8 param_7)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined8 local_58;
  float local_50;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_38;
  float local_34;
  float local_30;
  
  fVar6 = param_3[2];
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  param_2[2] = fVar6;
  fVar5 = DAT_1468b5d98;
  fVar6 = param_2[2];
  if (fVar6 <= 0.0) {
    return param_2;
  }
  param_5 = param_5 * *(float *)(param_4 + 8);
  if (fVar6 - param_5 <= 0.0001) {
    return param_2;
  }
  if (param_5 <= 0.0) {
    *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    param_2[2] = fVar5;
    local_48 = *param_2;
    local_44 = param_2[1];
  }
  else {
    param_5 = param_5 / fVar6;
    local_48 = param_5 * *param_2;
    local_44 = param_5 * param_2[1];
    *param_2 = local_48;
    param_2[2] = fVar6 * param_5;
    param_2[1] = local_44;
  }
  local_48 = *param_3 - local_48;
  local_44 = param_3[1] - local_44;
  local_40 = 0;
  fVar6 = param_6[1];
  fVar5 = *param_6;
  uVar1 = (ulonglong)(uint)(fVar6 * fVar6);
  fVar2 = fVar5 * fVar5 + fVar6 * fVar6;
  if (fVar2 == 1.0) {
    if (param_6[2] == 0.0) {
      uVar1 = *(ulonglong *)param_6;
      local_50 = param_6[2];
      local_58 = uVar1;
      goto LAB_142340afe;
    }
  }
  else {
    if (fVar2 < 1e-08) {
      uVar1 = (ulonglong)(uint)DAT_1468b5d98;
      local_50 = DAT_1468b5d98;
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_142340afe;
    }
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar2 = fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    uVar1 = CONCAT44(auVar4._4_4_,fVar2);
    fVar3 = fVar3 + fVar2;
    fVar5 = fVar5 * fVar3;
    fVar6 = fVar6 * fVar3;
  }
  local_58 = CONCAT44(fVar6,fVar5);
  local_50 = 0.0;
LAB_142340afe:
  FUN_142365a40(uVar1,&local_38,&local_48,0x3f800000,&local_58,param_7);
  *param_2 = local_38 + *param_2;
  param_2[1] = local_34 + param_2[1];
  param_2[2] = local_30 + param_2[2];
  return param_2;
}



// FUNCTION 142340b90 FUN_142340b90 body=48 status=ok
// SIG undefined FUN_142340b90(void)

undefined8 FUN_142340b90(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + -0x218) + 0x5c0))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142340bc0 FUN_142340bc0 body=48 status=ok
// SIG undefined FUN_142340bc0(void)

undefined8 FUN_142340bc0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x400) != 0) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + -0x218) + 0x5c0))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142340bf0 FUN_142340bf0 body=79 status=ok
// SIG undefined FUN_142340bf0(void)

undefined8 FUN_142340bf0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRootMotionSourceGroup::HasActiveRootMotionSources(param_1 + 0x628);
  if (cVar1 != '\0') {
    return 1;
  }
  if (((*(longlong *)(param_1 + 0x220) != 0) && (cVar1 = FUN_1423146e0(), cVar1 != '\0')) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x220) + 0x4c0) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142340c40 FUN_142340c40 body=93 status=ok
// SIG undefined FUN_142340c40(void)

ulonglong FUN_142340c40(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  uint uVar4;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) && (in_RAX = 0, *(longlong *)(param_1 + 0x220) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x220) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    in_RAX = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142340ca0 FUN_142340ca0 body=634 status=ok
// SIG undefined FUN_142340ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_142340ca0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined1 local_198 [16];
  undefined8 local_188;
  float local_180;
  float local_178 [2];
  undefined4 local_170;
  undefined4 uStack_16c;
  float local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  float local_150;
  undefined1 local_148 [12];
  float local_13c;
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((param_1[0x44] == 0) ||
     (lVar2 = (**(code **)(*param_1 + 0x440))(), (*(byte *)(lVar2 + 0x49c) & 1) == 0)) {
    fVar3 = 0.0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x44] + 0x578))((longlong *)param_1[0x44],local_160,local_178)
    ;
    if ((local_178[0] == 0.0) || (*(float *)(param_1 + 0x5d) == 0.0)) {
      fVar3 = 1.0;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x440))(param_1);
      plVar1 = *(longlong **)(lVar2 + 0x470);
      _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
      fVar3 = 1.0;
      local_13c = 1.0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = param_1[0x2f];
        local_170 = *(undefined4 *)(lVar2 + 0x220);
        uStack_16c = *(undefined4 *)(lVar2 + 0x224);
        local_188 = *(undefined8 *)(lVar2 + 0x220);
        local_168 = *(float *)(lVar2 + 0x228) + local_178[0];
        local_180 = *(float *)(lVar2 + 0x228) - local_178[0];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146af02f8) &&
           (_Init_thread_header(&DAT_146af02f8), DAT_146af02f8 == -1)) {
          FName::FName(&DAT_146af02f0,"ImmersionDepth",1);
          _Init_thread_footer(&DAT_146af02f8);
        }
        local_1a8 = (undefined1 *)0x0;
        FUN_1422ffb20(local_b8,DAT_146af02f0,local_198,1);
        local_1a8 = local_b8;
        local_150 = local_180;
        local_180 = local_168;
        local_158 = local_188;
        local_188 = CONCAT44(uStack_16c,local_170);
        (**(code **)(*plVar1 + 0x858))(plVar1,local_148,&local_188,&local_158);
        if (local_50 != 0) {
          FMemory::Free();
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_13c != 1.0) {
          fVar3 = 1.0 - local_13c;
        }
      }
    }
  }
  return fVar3;
}



// FUNCTION 142340f20 FUN_142340f20 body=8 status=ok
// SIG undefined FUN_142340f20(void)

void FUN_142340f20(longlong param_1)

{
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 0x10;
  return;
}



// FUNCTION 142340f30 FUN_142340f30 body=19 status=ok
// SIG undefined FUN_142340f30(void)

undefined8 FUN_142340f30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x148))();
  lVar3 = 0;
  if (plVar1[0x24] == 0x11a) {
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x38);
    }
  }
  else {
    lVar3 = FUN_142873bb0(DAT_146b17150,lVar2);
  }
  if ((lVar3 == 0) && ((lVar2 == 0 || (lVar3 = *(longlong *)(lVar2 + 0x108), lVar3 == 0)))) {
    return 0;
  }
  uVar4 = UNetDriver::GetNetMode(lVar3);
  return uVar4;
}



// FUNCTION 142340f50 IsComponentTickEnabled body=8 status=ok
// SIG undefined IsComponentTickEnabled(void)

bool UActorComponent::IsComponentTickEnabled(longlong param_1)

{
  return *(char *)(param_1 + 0x3f) != '\0';
}



// FUNCTION 142340f60 FUN_142340f60 body=15 status=ok
// SIG undefined FUN_142340f60(void)

bool FUN_142340f60(longlong param_1)

{
  return (byte)(*(char *)(param_1 + 0xca) - 1U) < 2;
}



// FUNCTION 142340f90 FUN_142340f90 body=30 status=ok
// SIG undefined FUN_142340f90(void)

byte FUN_142340f90(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xba) >> 3 & 1;
  if (bVar1 != 0) {
    if (*(char *)(param_1 + 0xca) == '\x02') {
      bVar1 = 0;
    }
  }
  return bVar1;
}



// FUNCTION 142340ff0 FUN_142340ff0 body=262 status=ok
// SIG undefined FUN_142340ff0(void)

undefined8 FUN_142340ff0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  
  param_2 = (longlong *)*param_2;
  cVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  cVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar2 == cVar1) {
    if (((*(char *)((longlong)param_1 + 0x39) == (char)param_2[0x2a]) &&
        ((char)param_1[0x2a] == (char)param_2[0x2a])) &&
       (((*(float *)(param_2 + 0x35) == *(float *)(param_1 + 0x35) &&
         ((*(float *)((longlong)param_2 + 0x1ac) == *(float *)((longlong)param_1 + 0x1ac) &&
          (*(float *)(param_2 + 0x36) == *(float *)(param_1 + 0x36))))) ||
        ((fVar3 = ABS(*(float *)((longlong)param_1 + 0x1c4) - *(float *)((longlong)param_2 + 0x1c4))
         , fVar3 < *(float *)((longlong)param_1 + 0x324) ||
           fVar3 == *(float *)((longlong)param_1 + 0x324) &&
         (*(float *)(param_1 + 100) <=
          *(float *)((longlong)param_2 + 0x1bc) * *(float *)((longlong)param_1 + 0x1bc) +
          *(float *)(param_2 + 0x37) * *(float *)(param_1 + 0x37) +
          *(float *)(param_2 + 0x38) * *(float *)(param_1 + 0x38))))))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142341120 FUN_142341120 body=52 status=ok
// SIG undefined FUN_142341120(void)

undefined1 FUN_142341120(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 0x10) == 0) {
    cVar1 = UObject::IsNameStableForNetworking();
    if ((cVar1 == '\0') || (*(char *)(param_1 + 0xca) == '\x02')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142341160 FUN_142341160 body=12 status=ok
// SIG undefined FUN_142341160(void)

void FUN_142341160(longlong param_1)

{
  FUN_142486a10(param_1 + 0x140);
  return;
}



// FUNCTION 142341170 FUN_142341170 body=27 status=ok
// SIG undefined FUN_142341170(void)

longlong FUN_142341170(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x93) & 0x40) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142341190 FUN_142341190 body=39 status=ok
// SIG undefined FUN_142341190(void)

undefined1 FUN_142341190(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423411c0 FUN_1423411c0 body=26 status=ok
// SIG undefined FUN_1423411c0(void)

byte FUN_1423411c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 0x118) + 0x90) >> 5 & 1;
  }
  return 0;
}



// FUNCTION 1423411e0 IsReadyForOwnerToAutoDestroy body=23 status=ok
// SIG undefined IsReadyForOwnerToAutoDestroy(void)

bool UAudioComponent::IsReadyForOwnerToAutoDestroy(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x568))();
  return cVar1 == '\0';
}



// FUNCTION 142341200 FUN_142341200 body=38 status=ok
// SIG undefined FUN_142341200(void)

undefined1 FUN_142341200(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x17) & 8) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x1b8))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142341250 FUN_142341250 body=227 status=ok
// SIG undefined FUN_142341250(void)

ulonglong FUN_142341250(longlong param_1,uint *param_2,char param_3)

{
  int3 iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x380) - 1;
  if ((uVar5 != uVar2) && (uVar5 != *(uint *)(param_1 + 0x380))) {
    return (ulonglong)(uint3)(uVar2 >> 8) << 8;
  }
  uVar5 = uVar5 & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  uVar4 = (int)param_2[1] >> 0x1f & 0x3f;
  param_1 = (longlong)(int)uVar5 * 0x60 + param_1;
  uVar2 = param_2[1] + uVar4;
  uVar4 = (uVar2 & 0x3f) - uVar4;
  iVar3 = (int)uVar2 >> 6;
  iVar1 = (int3)(uVar4 >> 8);
  if (param_3 == '\0') {
    if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x2c8))) && (-1 < (int)uVar4)) &&
       ((int)uVar4 < 0x40)) {
      return CONCAT71((int7)iVar1,
                      (longlong)(int)uVar4 * 0x120 +
                      *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar3 * 8) != 0);
    }
  }
  else if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x2d8))) &&
          ((-1 < (int)uVar4 && ((int)uVar4 < 0x40)))) {
    return CONCAT71((int7)iVar1,
                    (longlong)(int)uVar4 * 0x110 +
                    *(longlong *)(*(longlong *)(param_1 + 0x2d0) + (longlong)iVar3 * 8) != 0);
  }
  return (ulonglong)(uVar4 & 0xffffff00);
}



// FUNCTION 142341340 IsValid body=121 status=ok
// SIG undefined IsValid(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FTransform::IsValid(float *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = FUN_140618120();
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_140618120(param_1 + 4);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_140618120(param_1 + 8);
      if (((char)uVar2 == '\0') &&
         (fVar3 = *param_1 * *param_1, fVar5 = param_1[1] * param_1[1],
         fVar7 = param_1[2] * param_1[2], fVar8 = param_1[3] * param_1[3], fVar4 = fVar3 + fVar7,
         fVar6 = fVar5 + fVar8, fVar7 = fVar7 + fVar3, fVar8 = fVar8 + fVar5,
         auVar1._4_4_ = -(uint)(fRam0000000146af0204 <
                               (float)((uint)(fRam0000000146af0054 - (fVar7 + fVar6)) &
                                      uRam0000000146af0074)),
         auVar1._0_4_ = -(uint)(_DAT_146af0200 <
                               (float)((uint)(_DAT_146af0050 - (fVar6 + fVar4)) & _DAT_146af0070)),
         auVar1._8_4_ = -(uint)(fRam0000000146af0208 <
                               (float)((uint)(fRam0000000146af0058 - (fVar8 + fVar7)) &
                                      uRam0000000146af0078)),
         auVar1._12_4_ =
              -(uint)(fRam0000000146af020c <
                     (float)((uint)(fRam0000000146af005c - (fVar4 + fVar8)) & uRam0000000146af007c))
         , uVar2 = movmskps(uVar2,auVar1), uVar2 == 0)) {
        return 1;
      }
    }
  }
  return uVar2 & 0xffffff00;
}



// FUNCTION 1423413c0 FUN_1423413c0 body=378 status=ok
// SIG undefined FUN_1423413c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1423413c0(longlong *param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint local_a8 [4];
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar3 = 0;
  if ((*param_3 & 1) == 0) goto LAB_14234146d;
  if ((*param_3 & 2) == 0) {
    uVar3 = (**(code **)(*param_1 + 0x7f0))(param_1,param_3);
    if ((char)uVar3 == '\0') goto LAB_14234146d;
    uVar3 = param_1[0x44];
    lVar1 = *(longlong *)(uVar3 + 0x4d0);
    uVar5 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
    uVar6 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
    uVar7 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
    uVar8 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar5;
    auVar9._8_4_ = uVar7;
    auVar9._12_4_ = uVar8;
    auVar10._4_4_ = uVar7;
    auVar10._0_4_ = uVar6;
    auVar10._8_4_ = uVar5;
    auVar10._12_4_ = uVar8;
    auVar10 = minps(auVar9,auVar10);
    auVar2._4_4_ = uVar5;
    auVar2._0_4_ = uVar7;
    auVar2._8_4_ = uVar6;
    auVar2._12_4_ = uVar8;
    auVar10 = minps(auVar10,auVar2);
    fVar4 = (*(float *)(param_3 + 0x1c) - auVar10._0_4_ * *(float *)(lVar1 + 0x710)) +
            auVar10._0_4_ * *(float *)(lVar1 + 0x714);
    if ((fVar4 < *(float *)(param_3 + 0x28) || fVar4 == *(float *)(param_3 + 0x28)) ||
       (uVar3 = (**(code **)(*param_1 + 0x868))(param_1,param_3 + 0x14,param_3 + 0x20),
       (char)uVar3 == '\0')) goto LAB_14234146d;
  }
  else if (*(float *)(param_3 + 0x34) <= 0.0001 && *(float *)(param_3 + 0x34) != 0.0001)
  goto LAB_14234146d;
  local_a8[0] = local_a8[0] & 0xfffffff8;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
  local_24 = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  (**(code **)(*param_1 + 0x870))(param_1,param_2,local_a8,0,param_3);
  uVar3 = 0;
  if (((byte)local_a8[0] & 3) == 3) {
    return 1;
  }
LAB_14234146d:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142341540 FUN_142341540 body=192 status=ok
// SIG undefined FUN_142341540(void)

undefined8 FUN_142341540(longlong param_1,byte *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  float fVar5;
  
  if ((((*param_2 & 1) != 0) && ((*param_2 & 2) == 0)) &&
     (0.0001 < *(float *)(param_2 + 0x40) || *(float *)(param_2 + 0x40) == 0.0001)) {
    fVar1 = *(float *)(param_1 + 0x244);
    lVar3 = FWeakObjectPtr::Get(param_2 + 0x74);
    fVar5 = fVar1;
    if (lVar3 != 0) {
      pcVar4 = (char *)FUN_14270dd10(lVar3);
      cVar2 = *pcVar4;
      if (cVar2 != '\0') {
        if (cVar2 == '\x01') {
          FWalkableSlopeOverride::CheckCachedData(pcVar4);
          fVar5 = *(float *)(pcVar4 + 0xc);
          if (fVar1 <= *(float *)(pcVar4 + 0xc)) {
            fVar5 = fVar1;
          }
        }
        else if (cVar2 == '\x02') {
          FWalkableSlopeOverride::CheckCachedData(pcVar4);
          fVar5 = *(float *)(pcVar4 + 0xc);
          if (*(float *)(pcVar4 + 0xc) <= fVar1) {
            fVar5 = fVar1;
          }
        }
        else if (cVar2 == '\x03') {
          fVar5 = 2.0;
        }
      }
    }
    if (fVar5 < *(float *)(param_2 + 0x40) || fVar5 == *(float *)(param_2 + 0x40)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142341690 FUN_142341690 body=218 status=ok
// SIG undefined FUN_142341690(void)

void FUN_142341690(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_142341758:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x0001423416b3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if ((((byte)uVar1 >> 3 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_142341758;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x0001423416b3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_142341758;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x0001423416b3;
}



// FUNCTION 142341770 FUN_142341770 body=582 status=ok
// SIG undefined FUN_142341770(void)

void FUN_142341770(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  float local_50;
  
  if ((*(uint *)((longlong)param_1 + 0x4b4) >> 0x11 & 1) == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x4b4) | 0x20000;
    *(uint *)((longlong)param_1 + 0x4b4) = uVar1;
    if (param_1[0x44] != 0) {
      fVar3 = (float)(**(code **)(*param_1 + 0x400))();
      fVar3 = fVar3 * 0.85;
      pfVar2 = (float *)(**(code **)(*param_1 + 0x640))(param_1,&local_58,param_2);
      fVar9 = fVar3 * *pfVar2 + *(float *)((longlong)param_1 + 0x18c);
      fVar11 = pfVar2[1] * fVar3 + *(float *)(param_1 + 0x32);
      fVar8 = pfVar2[2] * fVar3 + *(float *)((longlong)param_1 + 0x194);
      *(float *)((longlong)param_1 + 0x18c) = fVar9;
      *(float *)(param_1 + 0x32) = fVar11;
      *(float *)((longlong)param_1 + 0x194) = fVar8;
      fVar5 = fVar11 * fVar11 + fVar9 * fVar9;
      if (fVar3 < SQRT(fVar5)) {
        fVar5 = fVar8 * fVar8 + fVar5;
        if (fVar5 == 1.0) {
          local_58 = *(undefined8 *)((longlong)param_1 + 0x18c);
          fVar4 = (float)((ulonglong)local_58 >> 0x20);
          local_50 = *(float *)((longlong)param_1 + 0x194);
          fVar10 = (float)local_58;
        }
        else {
          fVar4 = DAT_1468b5d94;
          local_50 = DAT_1468b5d98;
          fVar10 = DAT_1468b5d90;
          if (1e-08 <= fVar5) {
            auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
            fVar6 = auVar7._0_4_;
            fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
            fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
            fVar10 = fVar9 * fVar6;
            fVar4 = fVar11 * fVar6;
            local_50 = fVar8 * fVar6;
          }
        }
        local_50 = local_50 * fVar3;
        *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar4 * fVar3,fVar10 * fVar3);
        *(float *)((longlong)param_1 + 0x194) = local_50;
      }
      *(float *)((longlong)param_1 + 0x194) =
           *(float *)((longlong)param_1 + 0x23c) * *(float *)(param_1 + 0x47);
      (**(code **)(*param_1 + 0x5a0))(param_1,3);
      uVar1 = *(uint *)((longlong)param_1 + 0x4b4);
    }
    *(uint *)((longlong)param_1 + 0x4b4) = uVar1 & 0xfffdffff;
  }
  return;
}



// FUNCTION 1423419c0 FUN_1423419c0 body=154 status=ok
// SIG undefined FUN_1423419c0(void)

void FUN_1423419c0(longlong *param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  undefined8 param_6)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 != '\0') {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    if (0.0 <= param_3) {
      if (param_4 <= param_3) {
        param_3 = param_4;
      }
    }
    else {
      param_3 = 0.0;
    }
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    (**(code **)(*param_1 + 0x880))(param_1,param_2,param_3,param_4,param_6,param_5,0);
  }
  return;
}



// FUNCTION 142341a60 FUN_142341a60 body=44 status=ok
// SIG undefined FUN_142341a60(void)

void FUN_142341a60(longlong *param_1,longlong *param_2)

{
  if (((((*(byte *)((longlong)param_1 + 0xba) & 1) == 0) && (param_2 != param_1)) &&
      ((longlong *)param_1[0x23] != (longlong *)0x0)) && ((longlong *)param_1[0x23] != param_2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142341a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  return;
}



// FUNCTION 142341a90 FUN_142341a90 body=77 status=ok
// SIG undefined FUN_142341a90(void)

void FUN_142341a90(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  (**(code **)(*param_1 + 0x870))();
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) ^ ((uVar1 >> 8 & 0xff) << 8 ^ *(uint *)(param_1 + 0x60)) & 0x100;
  return;
}



// FUNCTION 142341af0 GetMouseADSSensitivity body=9 status=ok
// SIG undefined GetMouseADSSensitivity(void)

undefined4 UIndianaGameUserSettings::GetMouseADSSensitivity(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x240);
}



// FUNCTION 142341b00 GetFadeInStartDelay body=9 status=ok
// SIG undefined GetFadeInStartDelay(void)

undefined4 UDecalComponent::GetFadeInStartDelay(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x244);
}



// FUNCTION 142341b10 FUN_142341b10 body=95 status=ok
// SIG undefined FUN_142341b10(void)

void FUN_142341b10(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if ((*(char *)((longlong)param_1 + 0x22c) != '\0') && ((char)param_1[0x49] != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x2a0))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if (cVar1 != '\0') {
        *(undefined8 *)((longlong)param_1 + 0x4ec) = *param_2;
        *(undefined4 *)((longlong)param_1 + 0x4f4) = *(undefined4 *)(param_2 + 1);
      }
    }
  }
  return;
}



// FUNCTION 142341b70 FUN_142341b70 body=751 status=ok
// SIG undefined FUN_142341b70(void)

undefined8 *
FUN_142341b70(longlong *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,byte *param_5,
             char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 *puVar8;
  byte bVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_98;
  float local_90;
  float local_88;
  
  fVar10 = param_4[2];
  local_98 = *(undefined8 *)param_4;
  fVar13 = (float)local_98;
  fVar14 = (float)((ulonglong)local_98 >> 0x20);
  bVar9 = *param_5 >> 1 & 1;
  local_90 = fVar10;
  if ((*param_5 & 1) != 0) {
    if (bVar9 != 0) goto LAB_142341e10;
    if (0.001 < *(float *)(param_5 + 0x34)) {
      if ((param_6 == '\0') ||
         (cVar7 = (**(code **)(*param_1 + 0x898))(0x3a83126f,param_5 + 0x14,param_5), cVar7 == '\0')
         ) {
        fVar1 = *(float *)(param_5 + 0x2c);
        fVar2 = *(float *)(param_5 + 0x30);
        fVar3 = *param_4;
        fVar4 = param_4[1];
        fVar5 = param_4[2];
        if (fVar1 * fVar3 + fVar4 * fVar2 + fVar5 * *(float *)(param_5 + 0x34) < 0.0) {
          fVar10 = fVar1 * fVar1 + fVar2 * fVar2;
          if (fVar10 == 1.0) {
            fVar13 = fVar2;
            local_88 = fVar1;
            fVar12 = 0.0;
            if (*(float *)(param_5 + 0x34) == 0.0) {
              local_88 = (float)*(undefined8 *)(param_5 + 0x2c);
              fVar13 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x2c) >> 0x20);
              fVar12 = *(float *)(param_5 + 0x34);
            }
          }
          else {
            fVar13 = DAT_1468b5d94;
            local_88 = DAT_1468b5d90;
            fVar12 = DAT_1468b5d98;
            if (1e-08 <= fVar10) {
              auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
              fVar13 = auVar11._0_4_;
              fVar13 = fVar13 + fVar13 * (0.5 - fVar10 * 0.5 * fVar13 * fVar13);
              fVar13 = fVar13 + fVar13 * (0.5 - fVar10 * 0.5 * fVar13 * fVar13);
              local_88 = fVar1 * fVar13;
              fVar13 = fVar2 * fVar13;
              fVar12 = 0.0;
            }
          }
          fVar10 = fVar4 * fVar13 + fVar3 * local_88 + fVar5 * fVar12;
          fVar14 = fVar4 - fVar10 * fVar13;
          fVar13 = fVar3 - fVar10 * local_88;
          fVar10 = fVar5 - fVar10 * fVar12;
        }
      }
      goto LAB_142341de2;
    }
  }
  if (bVar9 == 0) {
LAB_142341de2:
    *param_2 = CONCAT44(fVar14,fVar13);
    *(float *)(param_2 + 1) = fVar10;
    return param_2;
  }
LAB_142341e10:
  puVar8 = &local_98;
  if (fVar14 * *(float *)(param_5 + 0x30) + fVar13 * *(float *)(param_5 + 0x2c) +
      fVar10 * *(float *)(param_5 + 0x34) <= 0.0) {
    puVar8 = (undefined8 *)&DAT_1468b5d90;
  }
  uVar6 = *(undefined4 *)(puVar8 + 1);
  *param_2 = *puVar8;
  *(undefined4 *)(param_2 + 1) = uVar6;
  return param_2;
}



// FUNCTION 142341e60 LineTraceMultiByChannel body=57 status=ok
// SIG undefined LineTraceMultiByChannel(void)

void UWorld::LineTraceMultiByChannel(void)

{
  FUN_142318d90();
  return;
}



// FUNCTION 142341ea0 LineTraceMultiByObjectType body=69 status=ok
// SIG undefined LineTraceMultiByObjectType(void)

bool UWorld::LineTraceMultiByObjectType(undefined8 param_1,longlong param_2)

{
  FUN_142318d90();
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 142341ef0 FUN_142341ef0 body=200 status=ok
// SIG undefined FUN_142341ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142341ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_1426d3dd0(&local_30);
  FUN_1426ea8d0(&local_30,2);
  cVar1 = FUN_142311390(param_5,local_38,&local_30);
  if (cVar1 == '\0') {
    local_38[0] = 0;
    local_30 = _DAT_146aefe68;
    uStack_2c = uRam0000000146aefe6c;
    uStack_28 = uRam0000000146aefe70;
    uStack_24 = uRam0000000146aefe74;
    local_20 = _DAT_146aefe78;
    uStack_18 = uRam0000000146aefe80;
  }
  FUN_142318d90(param_1,param_2,param_3,param_4,local_38[0],param_6,&local_30,&DAT_146aefe88);
  return;
}



// FUNCTION 142341fc0 LineTraceSingleByChannel body=111 status=ok
// SIG undefined LineTraceSingleByChannel(void)

void UWorld::LineTraceSingleByChannel
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_142319320(local_18,param_2,&local_18,&local_28,param_5,param_6,param_7,&DAT_146aefe88);
  return;
}



// FUNCTION 142342030 LineTraceSingleByObjectType body=110 status=ok
// SIG undefined LineTraceSingleByObjectType(void)

void UWorld::LineTraceSingleByObjectType
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_142319320(local_18,param_2,&local_18,&local_28,DAT_146aefe3c,param_6,&DAT_146aefe68,param_5);
  return;
}



// FUNCTION 1423420a0 FUN_1423420a0 body=253 status=ok
// SIG undefined FUN_1423420a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423420a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 local_res18 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_1426d3dd0(&local_28);
  FUN_1426ea8d0(&local_28,2);
  cVar1 = FUN_142311390(param_5,local_res18,&local_28);
  if (cVar1 == '\0') {
    local_res18[0] = 0;
    local_28 = _DAT_146aefe68;
    uStack_20 = uRam0000000146aefe70;
    local_18 = _DAT_146aefe78;
    uStack_10 = uRam0000000146aefe80;
  }
  local_40 = *(undefined4 *)(param_4 + 1);
  local_48 = *param_4;
  local_30 = *(undefined4 *)(param_3 + 1);
  local_38 = *param_3;
  FUN_142319320(param_1,param_2,&local_38,&local_48,local_res18[0],param_6,&local_28,&DAT_146aefe88)
  ;
  return;
}



// FUNCTION 1423421a0 LineTraceTestByChannel body=98 status=ok
// SIG undefined LineTraceTestByChannel(void)

void UWorld::LineTraceTestByChannel
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_142319a60(local_18,&local_18,&local_28,param_4,param_5,param_6,&DAT_146aefe88);
  return;
}



// FUNCTION 142342210 Main body=38 status=ok
// SIG undefined Main(void)

bool USmokeTestCommandlet::Main(void)

{
  char cVar1;
  undefined8 uVar2;
  
  DAT_1468c217e = 1;
  uVar2 = FUN_141649d10();
  cVar1 = FUN_1416584c0(uVar2);
  return cVar1 == '\0';
}



// FUNCTION 142342240 FUN_142342240 body=406 status=ok
// SIG undefined FUN_142342240(void)

void FUN_142342240(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float local_58;
  
  if (*(float *)(param_1 + 0x194) != 0.0) {
    if ((*(byte *)(param_1 + 0x4b4) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x194) = 0;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x194);
    fVar2 = *(float *)(param_1 + 0x18c);
    fVar3 = *(float *)(param_1 + 400);
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
    fVar8 = SQRT(fVar1 * fVar1 + fVar4);
    if (fVar4 == 1.0) {
      fVar5 = fVar3;
      fVar7 = 0.0;
      local_58 = fVar2;
      if (fVar1 == 0.0) {
        local_58 = (float)*(undefined8 *)(param_1 + 0x18c);
        fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x18c) >> 0x20);
        fVar7 = *(float *)(param_1 + 0x194);
      }
    }
    else {
      fVar5 = DAT_1468b5d94;
      fVar7 = DAT_1468b5d98;
      local_58 = DAT_1468b5d90;
      if (1e-08 <= fVar4) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        local_58 = fVar2 * fVar5;
        fVar5 = fVar3 * fVar5;
        fVar7 = 0.0;
      }
    }
    *(ulonglong *)(param_1 + 0x18c) = CONCAT44(fVar5 * fVar8,local_58 * fVar8);
    *(float *)(param_1 + 0x194) = fVar7 * fVar8;
  }
  return;
}



// FUNCTION 1423423e0 FUN_1423423e0 body=199 status=ok
// SIG undefined FUN_1423423e0(void)

void FUN_1423423e0(longlong *param_1)

{
  int iVar1;
  undefined1 uVar2;
  BOOL BVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((*(byte *)((longlong)param_1 + 0xb9) & 0x40) == 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
    }
    lVar5 = FUN_14046f570(param_1);
    if (lVar5 == 0) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
        FUN_14233a2e0(param_1);
      }
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x380))(param_1);
      FUN_14254b910(lVar5,param_1,uVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  }
  return;
}



// FUNCTION 1423424c0 FUN_1423424c0 body=26 status=ok
// SIG undefined FUN_1423424c0(void)

void FUN_1423424c0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 3) == 3) {
    *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 1;
    FUN_1423423e0();
    return;
  }
  return;
}



// FUNCTION 1423424e0 FUN_1423424e0 body=247 status=ok
// SIG undefined FUN_1423424e0(void)

void FUN_1423424e0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  BOOL BVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
    if (((bVar1 & 0x40) != 0) && (lVar6 = FUN_14046f570(), lVar6 != 0)) {
      return;
    }
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 0x40;
    if ((*(byte *)((longlong)param_1 + 0xb9) & 0x40) == 0) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
      }
      lVar6 = FUN_14046f570(param_1);
      if (lVar6 == 0) {
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar7 = iVar2 >> 0x1f & 0xffff;
          uVar5 = iVar2 + uVar7;
          lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
          FUN_14233a2e0(param_1);
        }
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x388))(param_1);
        FUN_14254b910(lVar6,param_1,uVar3);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
    }
  }
  return;
}



// FUNCTION 1423425e0 MarkRenderDynamicDataDirty body=31 status=ok
// SIG undefined MarkRenderDynamicDataDirty(void)

void UActorComponent::MarkRenderDynamicDataDirty(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 3) == 3) {
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 0x80;
    FUN_1423423e0();
    return;
  }
  return;
}



// FUNCTION 142342620 FUN_142342620 body=452 status=ok
// SIG undefined FUN_142342620(void)

void FUN_142342620(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *local_res8;
  undefined4 local_88;
  undefined4 uStack_84;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfbffffff;
  local_res8 = *(longlong **)(param_1[0x44] + 0x4d8);
  cVar3 = FUN_142314560();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = (**(code **)(*local_res8 + 0x400))(local_res8,0);
  plVar2 = local_res8;
  if (cVar3 == '\0') {
LAB_1423426dc:
    bVar1 = false;
  }
  else {
    if (local_res8 != (longlong *)0x0) {
      lVar4 = FUN_142a07000();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1423426dc;
    }
    bVar1 = true;
  }
  local_88 = SUB84(param_1,0);
  uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((cVar3 == '\0') || (!bVar1)) {
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfbffffff;
    (**(code **)(*param_1 + 0x5f0))(param_1,param_2);
    if (*(char *)((longlong)param_1 + 0x5c7) == '\0') {
      return;
    }
    local_48 = 0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar5 + 1) = local_88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_84;
      puVar5[2] = &local_res8;
    }
    local_78[0] = FUN_142332480;
  }
  else {
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x4000000;
    if (*(char *)((longlong)param_1 + 0x5c7) != '\0') {
      return;
    }
    local_48 = 0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar5 + 1) = local_88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_84;
      puVar5[2] = &local_res8;
    }
    local_78[0] = FUN_142332880;
  }
  uVar6 = FUN_14247f500();
  FUN_14247d5a0(uVar6,param_1,local_78);
  return;
}



// FUNCTION 1423427f0 FUN_1423427f0 body=1085 status=ok
// SIG undefined FUN_1423427f0(void)

void FUN_1423427f0(longlong *param_1,float *param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_fffffffffffffec8;
  byte *pbVar9;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte local_e8 [12];
  float local_dc;
  undefined1 local_bc [8];
  float local_b4;
  undefined1 local_7c [8];
  undefined1 local_74 [108];
  
  uVar1 = *(uint *)(param_1 + 0x82);
  if (((byte)uVar1 & 3) == 3) {
    local_128 = param_3 * *param_2;
    local_120 = 0.0;
    local_124 = param_3 * param_2[1];
    _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
    local_dc = 1.0;
    (**(code **)(*param_1 + 0x830))
              (param_1,&local_108,&local_128,param_1 + 0x84,
               CONCAT71((int7)((ulonglong)in_stack_fffffffffffffec8 >> 8),(char)(uVar1 >> 2)) &
               0xffffffffffffff01);
    lVar2 = param_1[0x2f];
    local_f8 = *(undefined8 *)(lVar2 + 0x210);
    uStack_f0 = *(undefined4 *)(lVar2 + 0x218);
    uStack_ec = *(undefined4 *)(lVar2 + 0x21c);
    pbVar9 = local_e8;
    FUN_1423755e0(param_1,&local_108,&local_f8,1,pbVar9,0);
    fVar8 = local_dc;
    if ((local_e8[0] & 2) == 0) {
      if ((local_e8[0] & 1) != 0) {
        if (((0.0 < local_dc) && (0.0001 < local_b4)) &&
           (cVar3 = (**(code **)(*param_1 + 0x7f0))(param_1,local_e8), cVar3 != '\0')) {
          fVar7 = 1.0 - fVar8;
          local_118 = local_128 * fVar7;
          local_114 = local_124 * fVar7;
          local_110 = local_120 * fVar7;
          puVar4 = (undefined8 *)
                   (**(code **)(*param_1 + 0x830))
                             (param_1,&local_f8,&local_118,local_e8,
                              (ulonglong)pbVar9 & 0xffffffffffffff00);
          local_108 = *puVar4;
          local_100 = *(undefined4 *)(puVar4 + 1);
          lVar2 = param_1[0x2f];
          param_3 = fVar7 * param_3;
          local_f8 = *(undefined8 *)(lVar2 + 0x210);
          uStack_f0 = *(undefined4 *)(lVar2 + 0x218);
          uStack_ec = *(undefined4 *)(lVar2 + 0x21c);
          FUN_1423755e0(param_1,&local_108,&local_f8,1,local_e8,0);
          fVar8 = fVar7 * local_dc + fVar8;
          if (0.0 <= fVar8) {
            if (1.0 <= fVar8) {
              fVar8 = 1.0;
            }
          }
          else {
            fVar8 = 0.0;
          }
        }
        if (((local_e8[0] & 1) != 0) && ((local_e8[0] & 2) == 0)) {
          cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1,local_e8);
          if ((cVar3 == '\0') &&
             ((*(longlong *)(param_1[0x44] + 0x4d8) == 0 ||
              (lVar2 = *(longlong *)(*(longlong *)(param_1[0x44] + 0x4d8) + 0x118),
              lVar5 = FWeakObjectPtr::Get(local_7c), lVar2 != lVar5)))) {
            cVar3 = FWeakObjectPtr::IsValid(local_74);
            if (cVar3 == '\0') {
              return;
            }
            plVar6 = (longlong *)FWeakObjectPtr::Get(local_74);
            cVar3 = (**(code **)(*plVar6 + 0x880))(plVar6,param_1[0x44]);
            if (cVar3 != '\0') {
              return;
            }
            (**(code **)(*param_1 + 0x468))(param_1,local_e8,param_3,&local_108);
          }
          else {
            local_110 = 1.0 - fVar8;
            uStack_f0 = 0xbf800000;
            local_118 = local_128 * local_110;
            local_f8 = 0;
            local_114 = local_124 * local_110;
            local_110 = local_120 * local_110;
            cVar3 = (**(code **)(*param_1 + 0x6d0))(param_1,&local_f8,&local_118,local_e8,param_4);
            if (cVar3 != '\0') {
              *(uint *)((longlong)param_1 + 0x4b4) =
                   ~(*(uint *)((longlong)param_1 + 0x4b4) << 5) & 0x20 |
                   *(uint *)((longlong)param_1 + 0x4b4);
              return;
            }
            (**(code **)(*param_1 + 0x468))(param_1,local_e8,param_3,&local_108);
          }
          (**(code **)(*param_1 + 0x4a8))(param_1,&local_128,1.0 - fVar8,local_bc,local_e8,1);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x468))(param_1,local_e8,0,&DAT_1468b5d90);
      (**(code **)(*param_1 + 0x4a8))(param_1,&local_128,0x3f800000,local_bc,local_e8,1);
      if ((local_e8[0] & 2) != 0) {
        (**(code **)(*param_1 + 0x840))(param_1,local_e8);
      }
    }
  }
  return;
}



// FUNCTION 142342c30 FUN_142342c30 body=824 status=ok
// SIG undefined FUN_142342c30(void)

void FUN_142342c30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  longlong local_98;
  float local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  cVar3 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x958))(param_1,param_4);
    (**(code **)(*(longlong *)param_1[0x44] + 0x910))((longlong *)param_1[0x44],param_3);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x8c8))(param_1,&local_98,param_5);
    param_1[0x6a] = *plVar5;
    *(int *)(param_1 + 0x6b) = (int)plVar5[1];
    fVar6 = (float)(**(code **)(*param_1 + 0x6b8))(param_1);
    if (0.0001 <= fVar6) {
      fVar1 = *(float *)(param_1 + 0x6a);
      fVar2 = *(float *)((longlong)param_1 + 0x354);
      fVar12 = *(float *)(param_1 + 0x6b);
      fVar9 = fVar1 * fVar1 + fVar2 * fVar2 + fVar12 * fVar12;
      if (fVar9 <= fVar6 * fVar6) {
        lVar8 = param_1[0x6a];
        fVar12 = *(float *)(param_1 + 0x6b);
      }
      else {
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar6 = (fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10)) * fVar6;
        fVar12 = fVar12 * fVar6;
        lVar8 = CONCAT44(fVar2 * fVar6,fVar1 * fVar6);
        local_98 = lVar8;
        local_90 = fVar12;
      }
    }
    else {
      local_90 = DAT_1468b5d98;
      lVar8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar12 = DAT_1468b5d98;
      local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    param_1[0x6a] = lVar8;
    *(float *)(param_1 + 0x6b) = fVar12;
    uVar7 = (**(code **)(*param_1 + 0x598))(param_1);
    lVar8 = param_1[0x2f];
    *(undefined4 *)(param_1 + 0x76) = uVar7;
    local_88 = *(undefined4 *)(lVar8 + 0x220);
    local_84 = *(undefined4 *)(lVar8 + 0x224);
    local_80 = *(undefined4 *)(lVar8 + 0x228);
    local_68 = *(undefined4 *)(lVar8 + 0x210);
    uStack_64 = *(undefined4 *)(lVar8 + 0x214);
    uStack_60 = *(undefined4 *)(lVar8 + 0x218);
    uStack_5c = *(undefined4 *)(lVar8 + 0x21c);
    (**(code **)(*param_1 + 0x8f8))(param_1,param_3);
    cVar3 = (**(code **)(*param_1 + 0x5c0))(param_1);
    if ((((cVar3 != '\0') && (param_1[0x44] != 0)) && (param_1[0x2f] != 0)) &&
       (((DAT_146531c1c != 0 && (*(char *)(param_1[0x44] + 0x95) == '\x02')) &&
        ((param_1[0x23] != 0 && (iVar4 = FUN_142235230(), iVar4 == 2)))))) {
      lVar8 = param_1[0x2f];
      local_78 = *(undefined8 *)(lVar8 + 0x210);
      uStack_70 = *(undefined8 *)(lVar8 + 0x218);
      local_98 = *(longlong *)(lVar8 + 0x220);
      local_90 = *(float *)(lVar8 + 0x228);
      (**(code **)(param_1[0x43] + 0x20))(param_1 + 0x43,&local_88,&local_68,&local_98,&local_78);
    }
  }
  return;
}



// FUNCTION 142342f70 FUN_142342f70 body=911 status=ok
// SIG undefined FUN_142342f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142342f70(longlong *param_1,float *param_2,float param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_458 [32];
  byte *local_438;
  undefined1 local_430;
  float local_428;
  float local_424;
  float local_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  float local_408;
  float local_404;
  float local_400;
  byte local_3f8 [12];
  float local_3ec;
  undefined1 local_3cc [20];
  float local_3b8;
  byte local_238 [448];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 == '\0') {
    return;
  }
  if ((char)param_1[0x49] == '\x06') {
    FUN_14237e6d0(local_3f8,param_1[0x2f],*(uint *)(param_1 + 0x60) >> 5 & 1,1);
    (**(code **)(*param_1 + 0x820))(param_1,param_3,0);
    pbVar3 = local_3f8;
    goto LAB_1423432d7;
  }
  local_428 = param_3 * *param_2;
  local_424 = param_3 * param_2[1];
  local_420 = param_3 * param_2[2];
  if (((local_428 == 0.0) && (local_424 == 0.0)) && (local_420 == 0.0)) {
    return;
  }
  FUN_14237e6d0(local_238,param_1[0x2f],*(uint *)(param_1 + 0x60) >> 5 & 1,1);
  cVar2 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar2 == '\0') {
    _guard_xfg_dispatch_icall_nop(local_3f8,0,0x90);
    lVar1 = param_1[0x2f];
    local_3ec = 1.0;
    local_430 = 0;
    local_418 = *(undefined8 *)(lVar1 + 0x210);
    uStack_410 = *(undefined4 *)(lVar1 + 0x218);
    uStack_40c = *(undefined4 *)(lVar1 + 0x21c);
    local_438 = local_3f8;
    FUN_1423755e0(param_1,&local_428,&local_418,1);
    if (((local_3f8[0] & 1) != 0) && ((local_3f8[0] & 2) == 0)) {
      cVar2 = (**(code **)(*param_1 + 0x570))(param_1);
      if ((cVar2 != '\0') &&
         ((cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1,local_3f8), cVar2 != '\0' &&
          (ABS(local_3b8) < 0.2)))) {
        uStack_410 = 0xbf800000;
        local_418 = 0;
        fVar4 = local_424 * local_424 + local_428 * local_428 + local_420 * local_420;
        fVar5 = local_420;
        if ((fVar4 != 1.0) && (fVar5 = DAT_1468b5d98, 1e-08 <= fVar4)) {
          auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
          fVar5 = auVar6._0_4_;
          fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
          fVar5 = local_420 * (fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5));
        }
        if ((-0.5 < fVar5) && (fVar5 < 0.2)) {
          local_438 = (byte *)0x0;
          local_400 = 1.0 - local_3ec;
          local_408 = local_428 * local_400;
          local_404 = local_424 * local_400;
          local_400 = local_420 * local_400;
          cVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,&local_418,&local_408,local_3f8);
          if (cVar2 != '\0') goto LAB_1423432d0;
        }
      }
      local_438 = local_3f8;
      local_430 = 0;
      (**(code **)(*param_1 + 0x4a8))(param_1,&local_428,1.0 - local_3ec,local_3cc);
    }
  }
  else {
    (**(code **)(*param_1 + 0x838))(param_1,param_2,param_3,param_4);
  }
LAB_1423432d0:
  pbVar3 = local_238;
LAB_1423432d7:
  FUN_14237f990(pbVar3);
  return;
}



// FUNCTION 142343300 NeedsLoadForClient body=107 status=ok
// SIG undefined NeedsLoadForClient(void)

undefined8 UActorComponent::NeedsLoadForClient(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    cVar2 = (**(code **)(*(longlong *)param_1[4] + 0xd8))();
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_142343330;
    }
  }
  bVar1 = true;
LAB_142343330:
  cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((cVar2 == '\0') && (bVar1)) {
    cVar2 = UObject::NeedsLoadForClient(param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142343370 NeedsLoadForServer body=107 status=ok
// SIG undefined NeedsLoadForServer(void)

undefined8 UActorComponent::NeedsLoadForServer(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    cVar2 = (**(code **)(*(longlong *)param_1[4] + 0xe0))();
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_1423433a0;
    }
  }
  bVar1 = true;
LAB_1423433a0:
  cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((cVar2 == '\0') && (bVar1)) {
    cVar2 = UObject::NeedsLoadForServer(param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423433e0 FUN_1423433e0 body=764 status=ok
// SIG undefined FUN_1423433e0(void)

float * FUN_1423433e0(longlong *param_1,float *param_2,undefined8 *param_3,float *param_4,
                     float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float local_88;
  
  fVar5 = *(float *)(param_3 + 1);
  *(undefined8 *)param_2 = *param_3;
  param_2[2] = fVar5;
  if (param_5 <= 0.0) {
    return param_2;
  }
  lVar6 = *param_1;
  fVar5 = param_4[1];
  fVar1 = param_4[2];
  *param_2 = param_5 * *param_4 + *param_2;
  param_2[1] = param_5 * fVar5 + param_2[1];
  param_2[2] = param_5 * fVar1 + param_2[2];
  lVar6 = (**(code **)(lVar6 + 0x440))();
  fVar5 = param_2[1];
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar12 = ABS(*(float *)(lVar6 + 0x490));
  if (fVar12 * fVar12 < fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2) {
    fVar8 = param_4[2];
    fVar3 = *param_4;
    fVar4 = param_4[1];
    fVar7 = fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8;
    if (fVar7 == 1.0) {
      local_88 = (float)*(undefined8 *)param_4;
      fVar9 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      fVar10 = param_4[2];
    }
    else {
      fVar9 = DAT_1468b5d94;
      fVar10 = DAT_1468b5d98;
      local_88 = DAT_1468b5d90;
      if (1e-08 <= fVar7) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
        local_88 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar10;
        fVar10 = fVar8 * fVar10;
      }
    }
    if (fVar12 < fVar5 * fVar9 + fVar1 * local_88 + fVar2 * fVar10) {
      fVar8 = (fVar5 - DAT_1468b5d94) * fVar9 + (fVar1 - DAT_1468b5d90) * local_88 +
              (fVar2 - DAT_1468b5d98) * fVar10;
      *(ulonglong *)param_2 =
           CONCAT44((fVar5 - fVar9 * fVar8) + fVar9 * fVar12,
                    (fVar1 - fVar8 * local_88) + local_88 * fVar12);
      param_2[2] = (fVar2 - fVar10 * fVar8) + fVar10 * fVar12;
    }
  }
  return param_2;
}


