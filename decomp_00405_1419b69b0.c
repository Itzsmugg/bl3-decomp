// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1419b69b0 FUN_1419b69b0 body=274 status=ok
// SIG undefined FUN_1419b69b0(void)

undefined1 *
FUN_1419b69b0(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  
  if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
    FInertialScrollManager::ClearScrollVelocity(param_1 + 0x7c);
    fVar1 = (float)(**(code **)(*param_1 + 0x218))
                             (param_1,param_3,
                              -(*(float *)(param_4 + 100) * *(float *)((longlong)param_1 + 0x40c)),1
                             );
    if (*(char *)((longlong)param_1 + 0x419) == '\x01') {
      *param_2 = 1;
      goto LAB_1419b6a33;
    }
    if (0.0 < ABS(fVar1)) {
      FReply::Handled(param_2);
      return param_2;
    }
  }
  *param_2 = 0;
LAB_1419b6a33:
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



// FUNCTION 1419b6ad0 FUN_1419b6ad0 body=881 status=ok
// SIG undefined FUN_1419b6ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1419b6ad0(longlong param_1,undefined8 param_2,longlong param_3,float param_4,uint param_5,
             longlong param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
             undefined4 param_10,float *param_11,byte param_12)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  char local_128;
  float *local_120;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
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
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  fVar12 = *(float *)(param_3 + 0x30);
  local_f8 = param_11[4];
  fStack_f4 = param_11[5];
  fStack_f0 = param_11[6];
  fStack_ec = param_11[7];
  fVar1 = *(float *)(param_3 + 0x34);
  fVar2 = *(float *)(param_3 + 0x40);
  FUN_1419401f0(param_6 + 8);
  fVar9 = (float)FTextEditHelper::CalculateCaretWidth();
  dVar4 = (double)(**(code **)(*DAT_1469f4590 + 0x40))();
  lVar3 = *(longlong *)(param_1 + 8);
  dVar4 = dVar4 - *(double *)(lVar3 + 0x10);
  fVar11 = 1.0 / *(float *)(param_7 + 8);
  if (0.10000000149011612 <= dVar4) {
    dVar4 = dVar4 * 3.1415927410125732;
    fVar10 = _guard_xfg_dispatch_icall_nop((float)(dVar4 + dVar4 + 1.5707963705062866));
    fVar10 = (float)((int)ROUND(fVar10 * 0.5 + fVar10 * 0.5 + 1.5) >> 1);
  }
  else {
    fVar10 = 1.0;
  }
  cVar8 = *(char *)(lVar3 + 8);
  if (*(char *)(lVar3 + 9) == '\x01') {
    cVar8 = cVar8 == '\0';
  }
  if (cVar8 == '\x01') {
    local_118 = (ulonglong)param_5;
  }
  else {
    local_118 = DAT_1468b5d88;
  }
  local_108 = local_f8 * *param_11;
  local_104 = fStack_f4 * param_11[1];
  local_fc = fVar10 * fVar10 * param_11[3];
  fVar10 = (float)local_118;
  fVar5 = local_118._4_4_;
  local_100 = fStack_f0 * param_11[2];
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if (cVar8 != '\0') {
      if (*(int *)(param_1 + 0x28) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x20);
      }
      uVar6 = (**(code **)(*plVar7 + 0x38))();
      *(undefined8 *)(param_1 + 0x10) = uVar6;
    }
  }
  fStack_110 = *(float *)(param_7 + 0x24);
  local_e0 = *(float *)(param_7 + 8);
  local_120 = &local_108;
  local_118 = *(ulonglong *)(param_7 + 0x1c);
  fStack_10c = *(float *)(param_7 + 0x28);
  uStack_c4 = *(undefined8 *)(param_7 + 0x24);
  fVar10 = (fVar10 + param_4 + fVar12) * fVar11;
  local_b4 = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_b4 & 0xfc;
  fVar12 = (fVar5 + fVar1) * fVar11;
  local_d0 = fVar2 * fVar11;
  local_128 = (param_12 ^ 1) << 5;
  local_dc = 0;
  fVar9 = local_e0 * fVar9;
  if (fVar9 <= 1.0) {
    fVar9 = 1.0;
  }
  local_d4 = fVar9 * fVar11;
  local_e8 = local_e0 * fVar10 + *(float *)(param_7 + 0xc);
  local_e4 = local_e0 * fVar12 + *(float *)(param_7 + 0x10);
  local_bc = CONCAT44(*(float *)(param_7 + 0x20) * fVar10 + fVar12 * fStack_10c +
                      *(float *)(param_7 + 0x30),
                      fVar10 * *(float *)(param_7 + 0x1c) + fVar12 * fStack_110 +
                      *(float *)(param_7 + 0x2c));
  local_cc = local_118;
  FSlateDrawElement::MakeBox(param_9,param_10,&local_e8,*(undefined8 *)(param_1 + 0x10));
  return param_10;
}



// FUNCTION 1419b6e50 FUN_1419b6e50 body=282 status=ok
// SIG undefined FUN_1419b6e50(void)

void FUN_1419b6e50(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float local_res8;
  float local_resc;
  
  param_1[6] = *param_3;
  iVar3 = FTextLayout::GetVisualJustification(*param_1);
  local_resc = DAT_1468b5d88._4_4_;
  local_res8 = (float)DAT_1468b5d88;
  if (iVar3 != 0) {
    pfVar4 = (float *)FTextLayout::GetSize(*param_1,&local_res8);
    fVar1 = *(float *)(param_1 + 6);
    fVar2 = *pfVar4;
    if (fVar1 < fVar2) {
      if (iVar3 == 1) {
        local_res8 = (fVar2 - fVar1) * 0.5;
      }
      else if (iVar3 == 2) {
        local_res8 = fVar2 - fVar1;
      }
    }
  }
  fVar1 = *(float *)(*param_1 + 0x8c);
  local_res8 = local_res8 * fVar1;
  local_resc = local_resc * fVar1;
  FTextLayout::SetVisibleRegion(*param_1,param_1 + 6,&local_res8);
  (**(code **)(*(longlong *)*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001419b6f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1419b6f70 FUN_1419b6f70 body=678 status=ok
// SIG undefined FUN_1419b6f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1419b6f70(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                 undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
                 int param_10,float *param_11,byte param_12)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_108 [32];
  char local_e8;
  float *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  float local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  fVar5 = 1.0 / *(float *)(param_7 + 8);
  fVar6 = *(float *)(param_3 + 0x30);
  fVar7 = *(float *)(param_3 + 0x34);
  fVar1 = *(float *)(param_3 + 0x40);
  if (param_5 != 0.0) {
    local_c8 = param_11[4] * *param_11;
    local_c4 = param_11[5] * param_11[1];
    local_c0 = param_11[6] * param_11[2];
    local_bc = param_11[7] * param_11[3];
    if (((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x20) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x18);
      }
      uVar3 = (**(code **)(*plVar4 + 0x38))();
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    local_b0 = *(float *)(param_7 + 8);
    local_e0 = &local_c8;
    fStack_d0 = *(float *)(param_7 + 0x24);
    local_d8 = *(float *)(param_7 + 0x1c);
    fStack_cc = *(float *)(param_7 + 0x28);
    uStack_94 = *(undefined8 *)(param_7 + 0x24);
    fStack_d4 = *(float *)(param_7 + 0x20);
    local_9c = *(undefined8 *)(param_7 + 0x1c);
    fVar6 = (param_4 + fVar6) * fVar5;
    local_84 = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_84 & 0xfc;
    fVar7 = fVar7 * fVar5;
    local_e8 = (param_12 ^ 1) << 5;
    local_a4 = fVar5 * param_5;
    local_a0 = fVar1 * fVar5;
    local_ac = 0;
    local_b8 = local_b0 * fVar6 + *(float *)(param_7 + 0xc);
    local_b4 = local_b0 * fVar7 + *(float *)(param_7 + 0x10);
    local_8c = CONCAT44(fVar6 * fStack_d4 + fVar7 * fStack_cc + *(float *)(param_7 + 0x30),
                        fVar6 * local_d8 + fVar7 * fStack_d0 + *(float *)(param_7 + 0x2c));
    FSlateDrawElement::MakeBox(param_9,param_10 + 1,&local_b8,*(undefined8 *)(param_1 + 8));
    param_10 = param_10 + 1;
  }
  return param_10;
}



// FUNCTION 1419b7220 OnPaint body=690 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int SlateEditableTextTypes::FTextSearchHighlighter::OnPaint
              (longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
              longlong param_6,longlong param_7,undefined8 param_8,undefined8 param_9,int param_10,
              float *param_11,char param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  float *local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_d4 = *(float *)(param_6 + 0xc4) * param_11[1];
  local_d8 = *param_11 * *(float *)(param_6 + 0xc0);
  local_c0 = *(float *)(param_7 + 8);
  local_cc = *(float *)(param_6 + 0xcc) * param_11[3] * 0.2;
  local_d0 = *(float *)(param_6 + 200) * param_11[2];
  fVar1 = 1.0 / local_c0;
  if (0.0 < param_5) {
    if ((param_12 == '\0') || (*(char *)(param_1 + 8) == '\0')) {
      local_f8 = 0x20;
    }
    else {
      local_f8 = 0;
    }
    local_b0 = *(float *)(param_3 + 0x40);
    if (*(float *)(param_3 + 0x40) <= *(float *)(param_3 + 0x3c)) {
      local_b0 = *(float *)(param_3 + 0x3c);
    }
    fStack_e0 = *(float *)(param_7 + 0x24);
    fVar2 = fVar1 * *(float *)(param_3 + 0x34);
    fVar3 = fVar1 * (param_4 + *(float *)(param_3 + 0x30));
    local_bc = 0;
    fStack_dc = *(float *)(param_7 + 0x28);
    uStack_a4 = *(undefined8 *)(param_7 + 0x24);
    local_94 = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_94 & 0xfc;
    local_b4 = fVar1 * param_5;
    local_e8 = *(float *)(param_7 + 0x1c);
    local_b0 = local_b0 * fVar1;
    fStack_e4 = *(float *)(param_7 + 0x20);
    local_ac = *(undefined8 *)(param_7 + 0x1c);
    local_c8 = local_c0 * fVar3 + *(float *)(param_7 + 0xc);
    local_9c = CONCAT44(fStack_dc * fVar2 + fStack_e4 * fVar3 + *(float *)(param_7 + 0x30),
                        fStack_e0 * fVar2 + local_e8 * fVar3 + *(float *)(param_7 + 0x2c));
    local_c4 = local_c0 * fVar2 + *(float *)(param_7 + 0x10);
    local_f0 = &local_d8;
    FSlateDrawElement::MakeBox(param_9,param_10 + 1,&local_c8,param_6 + 0xd0);
    param_10 = param_10 + 1;
  }
  return param_10;
}



// FUNCTION 1419b74e0 OnPaint body=924 status=ok
// SIG undefined OnPaint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int SlateEditableTextTypes::FTextSelectionHighlighter::OnPaint
              (longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
              longlong param_6,longlong param_7,undefined8 param_8,undefined8 param_9,int param_10,
              float *param_11,char param_12)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  bVar1 = *(byte *)(param_6 + 0xa8);
  if (bVar1 < 2) {
    pfVar2 = *(float **)(param_6 + 0xb0);
    if (pfVar2 == (float *)0x0) {
      fVar5 = *(float *)(param_6 + 0x98);
      fVar6 = *(float *)(param_6 + 0x9c);
      fVar7 = *(float *)(param_6 + 0xa0);
      fVar4 = *(float *)(param_6 + 0xa4);
    }
    else {
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar4 = pfVar2[3];
    }
    local_e8 = CONCAT44(fVar6,fVar5);
    uStack_e0 = CONCAT44(fVar4,fVar7);
    local_d8 = fVar5 * *param_11;
    fStack_d0 = fVar7 * param_11[2];
    fStack_d4 = fVar6 * param_11[1];
    pfVar2 = &local_d8;
    fStack_cc = fVar4 * param_11[3];
  }
  else {
    pfVar3 = (float *)(param_6 + 0x98);
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        pfVar3 = *(float **)(param_6 + 0xb0);
      }
      else if (bVar1 == 3) {
        pfVar3 = param_11 + 8;
      }
      else {
        pfVar3 = param_11 + 4;
      }
    }
    local_e8 = CONCAT44(((DAT_1464aa6c4 - pfVar3[1]) * 0.5 - 0.05) * param_11[1],
                        ((DAT_1464aa6c0 - *pfVar3) * 0.5 - 0.2) * *param_11);
    pfVar2 = (float *)&local_e8;
    uStack_e0 = CONCAT44(((DAT_1464aa6cc - pfVar3[3]) * 0.5 + 1.0) * param_11[3],
                         ((DAT_1464aa6c8 - pfVar3[2]) * 0.5 + 0.15) * param_11[2]);
  }
  local_e8 = *(undefined8 *)pfVar2;
  uStack_e0 = *(undefined8 *)(pfVar2 + 2);
  local_c0 = *(float *)(param_7 + 8);
  fVar5 = 1.0 / local_c0;
  if (*(int *)(param_3 + 0x4c) - *(int *)(param_3 + 0x48) < 1) {
    local_b4 = local_c0 * 4.0;
  }
  else {
    local_b4 = 0.0;
  }
  if (local_b4 <= param_5) {
    local_b4 = param_5;
  }
  if (0.0 < local_b4) {
    if ((param_12 == '\0') || (*(char *)(param_1 + 8) == '\0')) {
      local_f8 = 0x20;
    }
    else {
      local_f8 = 0;
    }
    local_b0 = *(float *)(param_3 + 0x40);
    if (*(float *)(param_3 + 0x40) <= *(float *)(param_3 + 0x3c)) {
      local_b0 = *(float *)(param_3 + 0x3c);
    }
    fStack_d0 = *(float *)(param_7 + 0x24);
    local_d8 = *(float *)(param_7 + 0x1c);
    fStack_d4 = *(float *)(param_7 + 0x20);
    local_ac = *(undefined8 *)(param_7 + 0x1c);
    fVar6 = (param_4 + *(float *)(param_3 + 0x30)) * fVar5;
    local_94 = (*(byte *)(param_7 + 0x34) & 1) * '\x02' | local_94 & 0xfc;
    local_bc = 0;
    fVar7 = *(float *)(param_3 + 0x34) * fVar5;
    local_b0 = local_b0 * fVar5;
    local_b4 = local_b4 * fVar5;
    fStack_cc = *(float *)(param_7 + 0x28);
    uStack_a4 = *(undefined8 *)(param_7 + 0x24);
    local_c8 = fVar6 * local_c0 + *(float *)(param_7 + 0xc);
    local_9c = CONCAT44(fStack_d4 * fVar6 + fStack_cc * fVar7 + *(float *)(param_7 + 0x30),
                        local_d8 * fVar6 + fStack_d0 * fVar7 + *(float *)(param_7 + 0x2c));
    local_c4 = fVar7 * local_c0 + *(float *)(param_7 + 0x10);
    local_f0 = &local_e8;
    FSlateDrawElement::MakeBox(param_9,param_10 + 1,&local_c8,param_6 + 0xd0);
    param_10 = param_10 + 1;
  }
  return param_10;
}



// FUNCTION 1419b7880 FUN_1419b7880 body=2058 status=ok
// SIG undefined FUN_1419b7880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419b7880(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7,undefined1 param_8)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2b8 [32];
  ulonglong local_298;
  undefined8 *local_290;
  longlong local_288;
  undefined1 local_280;
  undefined8 local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined4 local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  float local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  byte local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined8 local_194;
  undefined4 local_18c;
  float local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  byte local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_15c;
  undefined4 local_154;
  float local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  byte local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  byte local_fc;
  undefined1 local_f8 [16];
  undefined1 *local_e8;
  int local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar10 = (longlong *)0x0;
  fVar22 = 10.0;
  local_278 = param_5;
  local_1f8 = param_7;
  local_208 = 0x41200000;
  local_200 = param_1;
  local_1f0 = param_4;
  local_1e8 = param_2;
  if (*(char *)(param_1 + 0x31c) != '\0') {
    if (((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))(), cVar4 != '\0')) {
      plVar8 = plVar10;
      if (*(int *)(param_1 + 0x328) != 0) {
        plVar8 = *(longlong **)(param_1 + 800);
      }
      uVar18 = (**(code **)(*plVar8 + 0x38))();
      *(undefined4 *)(param_1 + 0x318) = uVar18;
    }
    fVar22 = *(float *)(param_1 + 0x318);
  }
  plVar8 = plVar10;
  if (*(longlong **)(param_1 + 0x310) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x310);
    puVar7 = (undefined8 *)FName::FName(local_1e0,"WhiteBrush",1);
    plVar8 = (longlong *)(**(code **)(lVar2 + 0x40))(*(undefined8 *)(param_1 + 0x310),*puVar7,0);
  }
  local_270 = plVar8;
  if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x358) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x350);
    }
    uVar5 = (**(code **)(*plVar10 + 0x38))();
    *(undefined1 *)(param_1 + 0x348) = uVar5;
  }
  if ((*(char *)(param_1 + 0x348) == '\x01') && (plVar8 != (longlong *)0x0)) {
    local_268 = *(longlong **)(param_1 + 0x2f8);
    local_260 = (longlong *)0x0;
    if (local_268 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)local_268[1];
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(local_268 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar17) {
        LOCK();
        bVar17 = iVar6 == (int)local_268[1];
        if (bVar17) {
          *(int *)(local_268 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar17) {
          if (local_268 != (longlong *)0x0) {
            local_260 = *(longlong **)(param_1 + 0x2f0);
          }
          goto LAB_1419b7a7f;
        }
        LOCK();
        iVar6 = (int)local_268[1];
        bVar17 = iVar6 == 0;
        if (bVar17) {
          *(int *)(local_268 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      local_268 = (longlong *)0x0;
    }
LAB_1419b7a7f:
    plVar15 = local_260;
    plVar13 = local_268;
    local_258 = *(undefined8 *)(param_7 + 0x10);
    _uStack_250 = CONCAT44(0x3e8ccccd,(int)*(undefined8 *)(param_7 + 0x18));
    (**(code **)(*local_260 + 0x40))(local_260,local_f8);
    plVar10 = local_270;
    uVar3 = local_278;
    uVar9 = 0;
    if (0 < local_e0) {
      uVar14 = 1;
      puVar12 = local_e8;
      do {
        puVar11 = local_f8;
        if (puVar12 != (undefined1 *)0x0) {
          puVar11 = puVar12;
        }
        if ((*(uint *)(puVar11 + (uVar9 >> 5) * 4) & uVar14) != 0) {
          local_248 = param_3[7];
          fStack_244 = param_3[8];
          local_1bc = *(undefined8 *)(param_3 + 7);
          local_1d0 = param_3[2];
          local_1c0 = param_3[1];
          local_1d4 = param_3[4];
          local_1a4 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_1a4 & 0xfc;
          fStack_240 = param_3[9];
          local_290 = &local_258;
          fStack_23c = param_3[10];
          uStack_1b4 = *(undefined8 *)(param_3 + 9);
          local_1cc = 0;
          local_1c4 = 0x3f800000;
          local_298 = local_298 & 0xffffffffffffff00;
          fVar19 = (float)(int)uVar9 * fVar22;
          local_1d8 = fVar19 * local_1d0 + param_3[3];
          local_1ac = CONCAT44(fStack_244 * fVar19 + param_3[0xc],local_248 * fVar19 + param_3[0xb])
          ;
          FSlateDrawElement::MakeBox(uVar3,param_6,&local_1d8,plVar10);
          puVar12 = local_e8;
        }
        uVar16 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar16;
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        plVar13 = local_268;
        plVar8 = local_270;
        plVar15 = local_260;
        param_1 = local_200;
      } while ((int)uVar16 < local_e0);
    }
    fVar19 = param_3[1];
    fVar21 = fVar19 * 0.5 + 0.5;
    cVar4 = (**(code **)(*plVar15 + 0x48))(plVar15);
    if (cVar4 != '\0') {
      local_238 = param_3[7];
      fStack_234 = param_3[8];
      local_184 = *(undefined8 *)(param_3 + 7);
      local_198 = param_3[2];
      local_19c = param_3[4];
      fStack_230 = param_3[9];
      local_16c = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_16c & 0xfc;
      local_290 = &local_258;
      local_194 = 0;
      fStack_22c = param_3[10];
      uStack_17c = *(undefined8 *)(param_3 + 9);
      fVar20 = (float)(local_e0 + -1) * fVar22;
      local_18c = 0x3f800000;
      local_298 = local_298 & 0xffffffffffffff00;
      local_1a0 = fVar20 * local_198 + param_3[3];
      local_174 = CONCAT44(fStack_234 * fVar20 + param_3[0xc],local_238 * fVar20 + param_3[0xb]);
      local_188 = fVar21;
      FSlateDrawElement::MakeBox(local_278,param_6,&local_1a0,plVar8);
    }
    cVar4 = (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((cVar4 != '\0') && (iVar6 = (**(code **)(*plVar15 + 0x38))(plVar15), iVar6 != 0)) {
      local_160 = param_3[2];
      fVar20 = fVar19 * 0.5 - 0.5;
      fStack_220 = param_3[9];
      local_228 = param_3[7];
      fStack_21c = param_3[10];
      uStack_144 = *(undefined8 *)(param_3 + 9);
      fStack_224 = param_3[8];
      local_14c = *(undefined8 *)(param_3 + 7);
      local_15c = 0;
      local_134 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_134 & 0xfc;
      local_290 = &local_258;
      local_154 = 0x3f800000;
      local_298 = local_298 & 0xffffffffffffff00;
      fVar19 = (float)local_e0 * fVar22;
      local_164 = fVar20 * local_160 + param_3[4];
      local_168 = fVar19 * local_160 + param_3[3];
      local_13c = CONCAT44(fVar19 * fStack_224 + fVar20 * fStack_21c + param_3[0xc],
                           fVar19 * local_228 + fVar20 * fStack_220 + param_3[0xb]);
      local_150 = fVar21;
      FSlateDrawElement::MakeBox(local_278,param_6,&local_168,plVar8);
    }
    local_128 = param_3[2];
    fStack_210 = param_3[9];
    local_218 = param_3[7];
    fStack_20c = param_3[10];
    uStack_10c = *(undefined8 *)(param_3 + 9);
    fStack_214 = param_3[8];
    local_114 = *(undefined8 *)(param_3 + 7);
    local_124 = 0;
    local_fc = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_fc & 0xfc;
    local_290 = &local_258;
    fVar22 = (float)(local_e0 + -1) * fVar22;
    fVar19 = (param_3[1] - 1.0) * 0.5;
    local_118 = 0x3f800000;
    fVar21 = fVar22 + 1.0;
    local_298 = local_298 & 0xffffffffffffff00;
    local_11c = (*param_3 - fVar22) - 1.0;
    local_130 = fVar21 * local_128 + param_3[3];
    local_12c = fVar19 * local_128 + param_3[4];
    local_104 = CONCAT44(fStack_214 * fVar21 + fStack_20c * fVar19 + param_3[0xc],
                         local_218 * fVar21 + fStack_210 * fVar19 + param_3[0xb]);
    FSlateDrawElement::MakeBox(local_278,param_6,&local_130,plVar8);
    if (local_e8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar13 + 1;
      lVar2 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  local_280 = param_8;
  local_288 = local_1f8;
  local_290 = (undefined8 *)CONCAT44(local_290._4_4_,param_6);
  local_298 = local_278;
  FUN_14184ebd0(param_1,local_1e8,param_3,local_1f0);
  return;
}



// FUNCTION 1419b8090 FUN_1419b8090 body=862 status=ok
// SIG undefined FUN_1419b8090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419b8090(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       ulonglong param_5,undefined4 param_6,undefined4 *param_7,char param_8)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined1 local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined8 local_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  byte local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar3 = FUN_140573010(*(undefined8 *)(param_1 + 0x210));
  cVar1 = *(char *)(lVar3 + 0x68);
  puVar4 = (undefined4 *)(lVar3 + 0x58);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      puVar4 = *(undefined4 **)(lVar3 + 0x70);
    }
    else if (cVar1 == '\x03') {
      puVar4 = param_7 + 8;
    }
    else {
      puVar4 = param_7 + 4;
    }
  }
  local_110 = *puVar4;
  uStack_10c = puVar4[1];
  uStack_108 = puVar4[2];
  fStack_104 = (float)puVar4[3];
  local_120 = *param_7;
  uStack_11c = param_7[1];
  uStack_118 = param_7[2];
  uStack_114 = param_7[3];
  fStack_dc = (float)param_7[5];
  fStack_d8 = (float)param_7[6];
  fStack_d4 = (float)param_7[7];
  fStack_f4 = fStack_104 * 0.6;
  uStack_c4 = CONCAT44(uStack_c4._4_4_,fStack_f4);
  local_e4 = CONCAT44(param_7[4],(undefined4)local_e4);
  local_100 = local_110;
  uStack_fc = uStack_10c;
  uStack_f8 = uStack_108;
  fStack_d0 = (float)local_110;
  fStack_cc = (float)uStack_10c;
  fStack_c8 = (float)uStack_108;
  if (param_8 != '\0') {
    if ((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0xa0);
        }
        uVar2 = (**(code **)(*plVar7 + 0x38))();
        *(undefined1 *)(param_1 + 0x98) = uVar2;
      }
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      local_140 = 1;
      goto LAB_1419b81b2;
    }
  }
  local_140 = 0;
LAB_1419b81b2:
  local_148 = &local_120;
  local_150 = (undefined4 *)CONCAT44(local_150._4_4_,param_6);
  local_158 = param_5;
  uVar5 = FUN_141997a50(*(undefined8 *)(param_1 + 0x210),param_2,param_3,param_4);
  plVar7 = DAT_1469eb140;
  if (*(char *)(param_1 + 0x37c) != '\0') {
    lVar3 = *DAT_1469eb140;
    puVar6 = (undefined8 *)FName::FName(local_128,L"SoftwareCursor_Grab",1);
    lVar3 = (**(code **)(lVar3 + 0x40))(plVar7,*puVar6,0);
    local_e8 = *(float *)(param_3 + 8);
    fStack_134 = *(float *)(param_3 + 0x20);
    fStack_dc = *(float *)(lVar3 + 8);
    fStack_d8 = *(float *)(lVar3 + 0xc);
    fStack_130 = *(float *)(param_3 + 0x24);
    local_138 = *(float *)(param_3 + 0x1c);
    fVar9 = *(float *)(param_1 + 0x380) - fStack_dc * 0.5;
    fStack_12c = *(float *)(param_3 + 0x28);
    local_e4 = 0;
    fVar8 = *(float *)(param_1 + 900) - fStack_d8 * 0.5;
    local_bc = (*(byte *)(param_3 + 0x34) & 1) * '\x02' | local_bc & 0xfc;
    local_f0 = local_e8 * fVar9 + *(float *)(param_3 + 0xc);
    local_150 = &DAT_1464aa6c0;
    local_158 = local_158 & 0xffffffffffffff00;
    local_ec = local_e8 * fVar8 + *(float *)(param_3 + 0x10);
    uStack_c4 = CONCAT44(fVar9 * fStack_134 + fVar8 * fStack_12c + *(float *)(param_3 + 0x30),
                         fVar9 * local_138 + fVar8 * fStack_130 + *(float *)(param_3 + 0x2c));
    fStack_d4 = local_138;
    fStack_d0 = fStack_134;
    fStack_cc = fStack_130;
    fStack_c8 = fStack_12c;
    FSlateDrawElement::MakeBox(param_5,(int)uVar5 + 1,&local_f0,lVar3);
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  return uVar5;
}



// FUNCTION 1419b83f0 FUN_1419b83f0 body=168 status=ok
// SIG undefined FUN_1419b83f0(void)

void FUN_1419b83f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char in_stack_00000040;
  
  if ((((in_stack_00000040 != '\0') && (*(int *)(param_1 + 0xa8) != 0)) &&
      (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0xa0);
    }
    uVar2 = (**(code **)(*plVar3 + 0x38))();
    *(undefined1 *)(param_1 + 0x98) = uVar2;
  }
  FUN_1419b6e50(*(undefined8 *)(param_1 + 0x238),param_2,param_3,param_4);
  return;
}



// FUNCTION 1419b84a0 FUN_1419b84a0 body=683 status=ok
// SIG undefined FUN_1419b84a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419b84a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       ulonglong param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

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
  if (*(char *)(param_1 + 0x408) != '\0') {
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
    fVar6 = *(float *)(param_1 + 0x400) - local_ec * 0.5;
    local_f4 = 0;
    local_cc = (*(byte *)(param_3 + 0x34) & 1) * '\x02' | local_cc & 0xfc;
    fVar5 = *(float *)(param_1 + 0x404) - local_e8 * 0.5;
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



// FUNCTION 1419b8750 FUN_1419b8750 body=323 status=ok
// SIG undefined FUN_1419b8750(void)

undefined1 * FUN_1419b8750(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  if (*(char *)(param_4 + 0x5c) != '\0') {
    FInertialScrollManager::ClearScrollVelocity(param_1 + 0x3e0);
    *(undefined1 *)(param_1 + 0x338) = 1;
    *(undefined4 *)(param_1 + 0x33c) = 0;
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



// FUNCTION 1419b88a0 FUN_1419b88a0 body=815 status=ok
// SIG undefined FUN_1419b88a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419b88a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_508 [32];
  longlong *local_4e8;
  longlong local_4e0;
  undefined4 *local_4d8;
  undefined1 local_4d0;
  undefined8 *local_4c8;
  undefined1 *local_4c0;
  undefined1 local_4b8;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined4 local_4a4 [3];
  longlong local_498;
  longlong *plStack_490;
  longlong local_488;
  longlong *plStack_480;
  undefined1 local_478 [8];
  longlong *local_470;
  undefined1 local_468 [8];
  longlong *local_460;
  undefined1 local_458 [8];
  undefined1 local_450 [320];
  longlong *local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [352];
  undefined1 local_198 [352];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  fVar11 = (float)FUN_14189c9c0(DAT_1469f4590);
  if ((*(float *)(param_1 + 0x33c) <= fVar11 && fVar11 != *(float *)(param_1 + 0x33c)) ||
     ((cVar7 = FUN_14198bef0(*(undefined8 *)(param_1 + 0x310)), cVar7 == '\0' &&
      (*(char *)(param_1 + 0x418) != '\0')))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((*(int *)(param_1 + 0x3b0) == 0) || (*(longlong **)(param_1 + 0x3a8) == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x18))(), cVar7 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  plVar10 = (longlong *)0x0;
  if ((bVar5) && (bVar6)) {
    if (*(int *)(param_1 + 0x3b0) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x3a8);
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_498);
    if (local_498 != 0) {
      *(undefined1 *)(param_1 + 0x408) = 0;
      lVar4 = *(longlong *)(param_2 + 0x10);
      if (lVar4 == 0) {
        uVar8 = FWidgetPath::FWidgetPath(local_2f8);
      }
      else {
        uVar8 = FUN_1419a8b20(local_198,lVar4);
      }
      FWidgetPath::FWidgetPath(local_458,uVar8);
      if (lVar4 == 0) {
        FUN_140458830(local_2f8);
      }
      else {
        FUN_140458830(local_198);
      }
      local_488 = local_498;
      plStack_480 = plStack_490;
      local_4a7 = 0;
      local_4a4[0] = 5;
      if (plStack_490 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
        UNLOCK();
      }
      uVar8 = DAT_1469f4590;
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_468);
      local_4b8 = 1;
      local_4c0 = &local_4a8;
      local_4c8 = &DAT_1468b5d88;
      local_4d8 = local_4a4;
      local_4d0 = 1;
      local_4e8 = &local_488;
      local_4e0 = param_2 + 0x18;
      FUN_1418b8580(uVar8,local_478,uVar9,local_458);
      if (local_470 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_470 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_470)(local_470);
          LOCK();
          piVar1 = (int *)((longlong)local_470 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_470 + 8))(local_470,1);
          }
        }
      }
      if (local_460 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_460 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_460)(local_460);
          LOCK();
          piVar1 = (int *)((longlong)local_460 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_460 + 8))(local_460,1);
          }
        }
      }
      plVar10 = plStack_480;
      if (plStack_480 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_480 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_480)(plStack_480);
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
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_308);
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_310 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar1 = (int *)((longlong)local_310 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_310 + 8))(local_310,1);
          }
        }
      }
      FUN_140456b10(local_450);
    }
    if (plStack_490 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_490 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_490)(plStack_490);
        LOCK();
        piVar1 = (int *)((longlong)plStack_490 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_490 + 8))(plStack_490,1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x33c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x33c) = 0;
  }
  return;
}



// FUNCTION 1419b8bd0 OnTextChanged body=87 status=ok
// SIG undefined OnTextChanged(void)

void SMultiLineEditableText::OnTextChanged(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0xe0) != 0) && (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xe0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xd8);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 1419b8c30 OnTextCommitted body=103 status=ok
// SIG undefined OnTextCommitted(void)

void SMultiLineEditableText::OnTextCommitted(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0xf0) != 0) && (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xf0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xe8);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1419b8ca0 FUN_1419b8ca0 body=507 status=ok
// SIG undefined FUN_1419b8ca0(void)

undefined1 * FUN_1419b8ca0(longlong param_1,undefined1 *param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))(), cVar2 != '\0')) {
    puVar4 = (ushort *)FSlateApplication::GetModifierKeys(DAT_1469f4590,local_res8);
    uVar1 = *puVar4;
    if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar2 != '\0')) {
      plVar5 = plVar6;
      if (*(int *)(param_1 + 0x318) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x310);
      }
      uVar3 = (**(code **)(*plVar5 + 0x38))();
      *(undefined4 *)(param_1 + 0x308) = uVar3;
    }
    iVar8 = *(int *)(param_1 + 0x308);
    if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar2 != '\0')) {
      plVar5 = plVar6;
      if (*(int *)(param_1 + 0x300) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x2f8);
      }
      uVar3 = (**(code **)(*plVar5 + 0x38))();
      *(undefined4 *)(param_1 + 0x2f0) = uVar3;
    }
    if (*(int *)(param_1 + 0x2f0) == 0) {
      iVar7 = 1;
      if (((((uVar1 & 3) == 0) || (*(int *)(param_1 + 0x318) == 0)) ||
          (*(longlong **)(param_1 + 0x310) == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), iVar8 = iVar7,
         cVar2 == '\0')) {
        iVar8 = 0;
      }
    }
    else {
      if (((uVar1 & 3) == 0) && (iVar8 == 1)) {
        iVar8 = 0;
      }
      iVar7 = (*(int *)(param_1 + 0x2f0) != 2) + 1;
    }
    if (*(int *)(param_1 + 0x328) != 0) {
      plVar6 = *(longlong **)(param_1 + 800);
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,iVar8,param_1 + 0x368,iVar7);
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



// FUNCTION 1419b8ea0 FUN_1419b8ea0 body=372 status=ok
// SIG undefined FUN_1419b8ea0(void)

undefined1 * FUN_1419b8ea0(longlong param_1,undefined1 *param_2)

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
  
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined1 *)(param_1 + 0x338) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x310) + 0x218))();
  cVar1 = FUN_141846080(param_1);
  if (cVar1 == '\0') {
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



// FUNCTION 1419b9020 FUN_1419b9020 body=795 status=ok
// SIG undefined FUN_1419b9020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419b9020(longlong *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_178 [32];
  code *local_158;
  undefined4 uStack_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((char)param_1[0x67] == '\0') {
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
    fVar7 = *(float *)(param_4 + 0x2c) / *(float *)(param_3 + 8);
    *(float *)((longlong)param_1 + 0x33c) = ABS(fVar7) + *(float *)((longlong)param_1 + 0x33c);
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - fVar7;
    fVar6 = (float)FUN_14189c9c0(DAT_1469f4590);
    if (*(float *)((longlong)param_1 + 0x33c) <= fVar6) {
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
      if ((char)param_1[0x82] == '\0') {
        local_158 = FUN_1419bdc00;
        uStack_150 = 0;
        *(undefined1 *)(param_1 + 0x82) = 1;
        uVar5 = FUN_1417ddb00(local_138,param_1,&local_158);
        FUN_141853de0(param_1,local_148,0,uVar5);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_140 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)local_140 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
      }
      (**(code **)(*param_1 + 0x218))(param_1,param_3,-fVar7,0);
      (**(code **)(*(longlong *)param_1[0x62] + 0x210))();
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
      uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_128);
      uVar5 = FUN_140693ff0(local_118,uVar5);
      FUN_140438260(param_2,uVar5);
      FUN_140438c20(local_118);
    }
  }
  return param_2;
}



// FUNCTION 1419b9340 OnVScrollBarMoved body=62 status=ok
// SIG undefined OnVScrollBarMoved(void)

void SMultiLineEditableText::OnVScrollBarMoved(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [32];
  
  FSlateEditableTextLayout::SetVerticalScrollFraction
            (*(undefined8 *)(param_1 + 0x210),local_res8,param_2);
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x340,param_2);
  return;
}



// FUNCTION 1419b9380 FUN_1419b9380 body=685 status=ok
// SIG undefined FUN_1419b9380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419b9380(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  longlong local_4b0;
  undefined4 *local_4a8;
  undefined1 local_4a0;
  undefined8 *local_498;
  undefined1 *local_490;
  undefined1 local_488;
  undefined1 local_478;
  undefined1 local_477;
  undefined4 local_474;
  undefined1 local_470 [8];
  longlong *local_468;
  undefined1 local_460 [8];
  longlong *local_458;
  undefined1 local_450 [8];
  undefined1 local_448 [320];
  longlong *local_308;
  undefined1 local_300 [16];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [320];
  longlong *local_1a8;
  undefined1 local_1a0 [16];
  undefined1 local_190 [8];
  undefined1 local_188 [320];
  longlong *local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  if (*(longlong *)(param_1 + 0x330) != DAT_1469eb218) {
    lVar4 = *(longlong *)(param_2 + 0x10);
    if (lVar4 == 0) {
      uVar6 = FWidgetPath::FWidgetPath(local_2f0);
    }
    else {
      uVar6 = FUN_1419a8b20(local_190,lVar4);
    }
    FWidgetPath::FWidgetPath(local_450,uVar6);
    if (lVar4 == 0) {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_1a0);
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)local_1a8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1a8 + 8))(local_1a8,1);
          }
        }
      }
      FUN_140456b10(local_2e8);
    }
    if (lVar4 != 0) {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_40);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      FUN_140456b10(local_188);
    }
    uVar6 = DAT_1469f4590;
    local_477 = 0;
    local_474 = 5;
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_460);
    local_488 = 1;
    local_490 = &local_478;
    local_498 = &DAT_1468b5d88;
    local_4a8 = &local_474;
    local_4a0 = 1;
    local_4b8 = (longlong *)(param_1 + 0x330);
    local_4b0 = param_2 + 0x18;
    FUN_1418b8580(uVar6,local_470,uVar7,local_450);
    if (local_468 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_468 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_468)(local_468);
        LOCK();
        piVar2 = (int *)((longlong)local_468 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_468 + 8))(local_468,1);
        }
      }
    }
    if (local_458 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_458 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_458)(local_458);
        LOCK();
        piVar2 = (int *)((longlong)local_458 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_458 + 8))(local_458,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_300);
    if (local_308 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_308 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar2 = (int *)((longlong)local_308 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_308 + 8))(local_308,1);
        }
      }
    }
    FUN_140456b10(local_448);
  }
  return;
}



// FUNCTION 1419b9630 OverrideTextStyle body=311 status=ok
// SIG undefined OverrideTextStyle(void)

void FSlateTextBlockLayout::OverrideTextStyle(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong local_218 [2];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [488];
  
  cVar6 = IsStyleUpToDate();
  if (cVar6 == '\0') {
    uVar4 = *param_1;
    uVar7 = FTextBlockStyle::FTextBlockStyle(local_1f0,param_2);
    FSlateTextLayout::SetDefaultTextStyle(uVar4,uVar7);
    local_218[0] = 0;
    local_218[1] = 0;
    (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],local_218,*param_1);
    (**(code **)(*(longlong *)param_1[2] + 0x28))();
    FUN_14192a460(*param_1);
    FUN_14192a360(*param_1);
    FUN_14192a590(*param_1);
    (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],local_218,*param_1);
    puVar8 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_208);
    if (param_1 + 10 != puVar8) {
      param_1[10] = *puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,puVar8 + 1);
    }
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar8 + 2);
    *(undefined2 *)((longlong)param_1 + 0x62) = *(undefined2 *)((longlong)puVar8 + 0x12);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)puVar8 + 0x14);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_200 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    if (local_218[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1419b9770 Padding body=65 status=ok
// SIG undefined Padding(void)

longlong SOverlay::FOverlaySlot::Padding(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x40,param_2 + 6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 6);
  return param_1;
}



// FUNCTION 1419b97c0 FUN_1419b97c0 body=7617 status=ok
// SIG undefined FUN_1419b97c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419b97c0(longlong *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  longlong *plVar25;
  undefined1 auStack_1348 [32];
  longlong local_1328;
  undefined1 *local_1320;
  undefined4 local_1318;
  longlong local_1310;
  longlong local_1308;
  longlong local_1300;
  undefined1 local_12f8;
  undefined1 local_12f0;
  longlong local_12e8;
  int local_12d8;
  undefined4 local_12c8;
  undefined4 uStack_12c4;
  undefined4 uStack_12c0;
  undefined4 uStack_12bc;
  longlong *local_12b8;
  undefined1 local_12b0;
  undefined1 local_12af;
  undefined1 local_12ae;
  undefined1 local_12ad;
  undefined1 local_12ac;
  undefined1 local_12ab [3];
  longlong local_12a8;
  longlong *local_12a0;
  longlong *local_1298;
  longlong *local_1290;
  longlong *plStack_1288;
  undefined4 local_1280;
  undefined1 local_127c;
  longlong *local_1278;
  int local_1270;
  undefined8 local_1268;
  longlong *plStack_1260;
  longlong *local_1258;
  longlong *local_1250;
  undefined8 local_1248;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  longlong *local_1238;
  int local_1230;
  undefined4 local_1228;
  undefined1 local_1224;
  undefined8 local_1220;
  undefined4 local_1218;
  undefined8 local_1210;
  longlong *local_1208;
  undefined8 local_1200;
  longlong *local_11f8;
  undefined8 local_11f0;
  longlong *local_11e8;
  undefined4 local_11e0;
  undefined4 local_11d8;
  undefined1 local_11d4;
  undefined8 local_11d0;
  undefined4 local_11c8;
  undefined8 local_11c0;
  undefined4 local_11b8;
  undefined4 local_11b0;
  undefined1 local_11ac;
  undefined8 local_11a8;
  undefined4 local_11a0;
  longlong local_1198;
  undefined4 *local_1190;
  undefined8 local_1188;
  undefined4 local_1180;
  undefined8 local_1178;
  undefined4 local_1170;
  undefined8 local_1168;
  undefined4 local_1160;
  undefined4 local_1158;
  undefined1 local_1154;
  undefined8 local_1150;
  undefined4 local_1148;
  longlong *local_1140;
  longlong local_1138;
  longlong local_1130;
  undefined1 *local_1128;
  longlong local_1120;
  longlong local_1118;
  undefined1 *local_1110;
  undefined4 local_1108;
  undefined1 local_1104;
  undefined8 local_1100;
  undefined4 local_10f8;
  longlong local_10f0;
  longlong local_10e8;
  undefined1 *local_10e0;
  longlong local_10d8;
  longlong local_10d0;
  undefined1 *local_10c8;
  undefined4 local_10c0;
  undefined1 local_10bc;
  undefined8 local_10b8;
  undefined4 local_10b0;
  undefined8 *local_10a8;
  undefined8 *local_10a0;
  undefined1 *local_1098;
  undefined4 local_1090;
  undefined1 local_108c;
  longlong local_1088;
  undefined4 local_1080;
  undefined4 local_1078;
  undefined4 local_1074;
  undefined1 local_1070;
  undefined8 local_1068;
  undefined4 local_1060;
  undefined4 local_1058;
  undefined4 local_1054;
  undefined1 local_1050;
  undefined8 local_1048;
  undefined4 local_1040;
  longlong *local_1038;
  longlong *local_1030;
  longlong *local_1028;
  longlong *local_1020;
  undefined8 local_1018;
  longlong *local_1010;
  longlong *local_1008;
  longlong *local_1000;
  undefined8 local_ff8;
  longlong *local_ff0;
  longlong *local_fe8;
  longlong *local_fe0;
  longlong *local_fd8 [2];
  longlong *local_fc8;
  longlong *local_fc0;
  undefined8 local_fb8;
  longlong local_fb0;
  longlong *local_fa8;
  longlong *local_fa0;
  undefined8 local_f98;
  undefined1 local_f90;
  undefined8 local_f88;
  undefined4 local_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined1 local_f68;
  undefined8 local_f60;
  undefined4 local_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined1 local_f40;
  undefined8 local_f38;
  undefined4 local_f30;
  undefined4 local_f28;
  undefined4 uStack_f24;
  undefined4 uStack_f20;
  undefined4 uStack_f1c;
  undefined1 local_f18 [8];
  longlong *local_f10;
  undefined1 local_f08 [8];
  longlong *local_f00;
  undefined1 local_ef8 [8];
  longlong *local_ef0;
  longlong *local_ee8;
  undefined4 local_ed8;
  undefined4 uStack_ed4;
  undefined4 uStack_ed0;
  undefined4 uStack_ecc;
  longlong *local_ec8;
  longlong *local_ec0;
  longlong *local_eb0;
  longlong *local_ea8;
  longlong *local_e98;
  longlong *local_e90;
  undefined4 local_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 local_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined1 local_e58 [8];
  undefined1 local_e50 [8];
  longlong *local_e48;
  longlong *local_e40;
  longlong *local_e38;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined1 local_e20;
  longlong local_e18;
  undefined4 local_e10;
  undefined8 local_e08;
  longlong *plStack_e00;
  undefined1 local_df8 [264];
  longlong local_cf0;
  undefined1 local_cc0 [16];
  undefined1 local_cb0 [24];
  undefined1 local_c98 [264];
  longlong local_b90;
  undefined1 local_b78 [264];
  longlong local_a70;
  undefined1 local_a58 [280];
  undefined1 local_940 [24];
  undefined1 local_928 [280];
  undefined1 local_810 [24];
  undefined1 local_7f8 [272];
  undefined1 local_6e8 [496];
  undefined1 local_4f8 [496];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1348;
  plVar13 = param_1 + 0x73;
  iVar24 = (int)param_1[0x74];
  local_12b8 = param_1;
  local_1140 = plVar13;
  if (iVar24 != 0) {
    plVar25 = (longlong *)(*plVar13 + 8);
    do {
      plVar16 = (longlong *)*plVar25;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar16 + 1;
        lVar15 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      plVar25 = plVar25 + 2;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  puVar19 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(int *)((longlong)param_1 + 0x3a4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar13,0);
  }
  lVar15 = param_1[0x75];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x3ac);
  local_1248 = FUN_1419b36f0;
  local_1250 = (longlong *)0x0;
  local_1070 = 1;
  local_1068 = 0;
  local_1060 = 0;
  uStack_1240 = 0;
  local_1158 = 0x3f800000;
  local_1154 = 1;
  local_1150 = 0;
  local_1148 = 0;
  local_1078 = (int)lVar15;
  local_1074 = uVar4;
  lVar10 = SSpacer::FArguments::FArguments(local_a58);
  *(int *)(lVar10 + 0x108) = (int)lVar15;
  *(undefined4 *)(lVar10 + 0x10c) = uVar4;
  *(undefined1 *)(lVar10 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x118,&local_1068);
  *(undefined1 *)(lVar10 + 0x78) = (char)param_1[0x76];
  *(undefined1 *)(lVar10 + 0x79) = *(undefined1 *)((longlong)param_1 + 0x3b1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x80,param_1 + 0x77);
  plVar25 = (longlong *)FUN_141880f80();
  plVar13 = plVar25 + 2;
  local_ec8 = plVar13;
  local_ec0 = plVar25;
  FUN_14044f790(&local_ec8,plVar13);
  local_1328 = 0x228;
  SWidget::SetDebugInfo
            (plVar13,"SSpacer",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x256);
  local_1318 = *(undefined4 *)(lVar10 + 0x90);
  local_12e8 = lVar10 + 0xf8;
  local_1300 = lVar10 + 0xe8;
  local_12f0 = *(undefined1 *)(lVar10 + 0xf1);
  local_1308 = lVar10 + 200;
  local_1310 = lVar10 + 0x98;
  local_12f8 = *(undefined1 *)(lVar10 + 0xf0);
  local_1328 = lVar10 + 0x60;
  local_1320 = (undefined1 *)(lVar10 + 0x78);
  SWidget::SWidgetConstruct(plVar13,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  SSpacer::Construct(plVar13,lVar10);
  if (((char)plVar25[5] < '\0') || (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar25 + 0x29) = *(byte *)((longlong)plVar25 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar25 + 0x29) = *(byte *)((longlong)plVar25 + 0x29) | bVar8;
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
  }
  local_1038 = plVar13;
  local_1030 = plVar25;
  puVar11 = (undefined8 *)operator_new(0x88);
  puVar14 = puVar19;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar11);
    *puVar11 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar14 = puVar11;
  }
  local_1298 = (longlong *)SVerticalBox::FSlot::AutoHeight(puVar14);
  local_f40 = 1;
  local_f50 = 0;
  uStack_f48 = 0;
  local_f38 = 0;
  local_f30 = 0;
  local_1298[9] = 0;
  local_1298[10] = 0;
  *(undefined1 *)(local_1298 + 0xb) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_1298 + 0xc,&local_f38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f38);
  lVar15 = param_1[0x79];
  lVar10 = SSplitter::FArguments::FArguments(local_df8);
  local_e68 = (undefined4)local_1248;
  uStack_e64 = local_1248._4_4_;
  uStack_e60 = uStack_1240;
  uStack_e5c = uStack_123c;
  *(longlong *)(lVar10 + 0x118) = lVar15 + 0x9a8;
  *(int *)(lVar10 + 0x124) = (int)param_1[0x7d];
  *(undefined4 *)(lVar10 + 0x128) = 0;
  *(undefined4 *)(lVar10 + 300) = 0x40a00000;
  uVar12 = FUN_1419a80c0(&local_1238,param_1,&local_e68);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x148,uVar12);
  if (local_1230 != 0) {
    if (local_1238 == (longlong *)0x0) goto LAB_1419b9ba5;
    (**(code **)(*local_1238 + 0x28))(local_1238,0);
    if (local_1238 != (longlong *)0x0) {
      local_1238 = (longlong *)FMemory::Realloc(local_1238,0,0);
    }
    local_1230 = 0;
  }
  if (local_1238 != (longlong *)0x0) {
    FMemory::Free(local_1238);
  }
LAB_1419b9ba5:
  plVar13 = (longlong *)operator_new(0x288);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144d6a6e0;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      SSplitter::SSplitter();
    }
  }
  plVar16 = plVar13 + 2;
  local_e40 = plVar16;
  local_e38 = plVar13;
  FUN_14044f790(&local_e40,plVar16);
  local_1328 = 0x278;
  SWidget::SetDebugInfo
            (plVar16,"SSplitter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x24a);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1210 = 0;
  local_1258 = plVar16;
  local_1208 = plVar13;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1250,&local_1208);
  plVar22 = local_1208;
  if (local_1208 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1208 + 1;
    lVar15 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1208)(local_1208);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*local_1208 + 8))(local_1208,1);
      }
    }
  }
  local_1318 = *(undefined4 *)(lVar10 + 0x90);
  local_12e8 = lVar10 + 0xf8;
  local_1300 = lVar10 + 0xe8;
  local_12f0 = *(undefined1 *)(lVar10 + 0xf1);
  local_1308 = lVar10 + 200;
  local_1310 = lVar10 + 0x98;
  local_12f8 = *(undefined1 *)(lVar10 + 0xf0);
  local_1320 = (undefined1 *)(lVar10 + 0x78);
  local_1328 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar16,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141978760(plVar16,lVar10);
  if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')
     ) {
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
  local_fa8 = plVar16;
  local_fa0 = plVar13;
  puVar14 = (undefined8 *)operator_new(0x88);
  if (puVar14 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar14);
    *puVar14 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar19 = puVar14;
  }
  local_11e0 = 1;
  local_11d8 = 0x3f800000;
  local_11d4 = 1;
  local_11d0 = 0;
  local_11c8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_11d0,&local_1150);
  *(undefined4 *)(puVar19 + 5) = local_11e0;
  *(undefined1 *)((longlong)puVar19 + 0x34) = local_11d4;
  *(undefined4 *)(puVar19 + 6) = local_11d8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar19 + 7,&local_11d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_11d0);
  uVar12 = FUN_140692760(puVar19,&local_fa8);
  lVar15 = SCanvas::FArguments::FArguments(local_c98);
  plVar16 = (longlong *)(lVar15 + 0x108);
  iVar24 = *(int *)(lVar15 + 0x110);
  *(int *)(lVar15 + 0x110) = iVar24 + 1;
  if (*(int *)(lVar15 + 0x114) < iVar24 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar24);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar24 * 8) = uVar12;
  uVar12 = FUN_140692760(local_1298,&local_1038);
  iVar24 = *(int *)(lVar15 + 0x110);
  *(int *)(lVar15 + 0x110) = iVar24 + 1;
  if (*(int *)(lVar15 + 0x114) < iVar24 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar24);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar24 * 8) = uVar12;
  plVar16 = (longlong *)operator_new(0x248);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
    local_12a0 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144044b58;
    local_12a0 = plVar16;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar22 = plVar16 + 2;
  local_1248 = (code *)plVar22;
  local_eb0 = plVar22;
  local_ea8 = plVar16;
  FUN_14044f790(&local_eb0,plVar22);
  local_1328 = 0x238;
  SWidget::SetDebugInfo
            (plVar22,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x246);
  local_1318 = *(undefined4 *)(lVar15 + 0x90);
  local_12e8 = lVar15 + 0xf8;
  local_1300 = lVar15 + 0xe8;
  local_12f0 = *(undefined1 *)(lVar15 + 0xf1);
  local_1308 = lVar15 + 200;
  local_1310 = lVar15 + 0x98;
  local_12f8 = *(undefined1 *)(lVar15 + 0xf0);
  local_1320 = (undefined1 *)(lVar15 + 0x78);
  local_1328 = lVar15 + 0x60;
  SWidget::SWidgetConstruct(plVar22,lVar15,lVar15 + 0x30,lVar15 + 0x40);
  SHorizontalBox::Construct(plVar22);
  if (((char)plVar16[5] < '\0') || (cVar7 = (**(code **)(*plVar22 + 0x1e8))(plVar22), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar8;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar16 + 1;
    lVar15 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  if (local_b90 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_c98);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar13 + 1;
    lVar15 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
    LOCK();
    plVar5 = plVar13 + 1;
    lVar15 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_cb0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_cc0);
  if (local_cf0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_df8);
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar25 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
    }
    LOCK();
    plVar13 = plVar25 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_940);
  FUN_140456c70(local_a58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1150);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1068);
  local_12d8 = 0;
  local_1290 = (longlong *)0x0;
  plStack_1288 = (longlong *)0x0;
  plVar13 = local_12b8;
  local_fc8 = plVar22;
  if (0 < (int)local_12b8[0x72]) {
    local_12b0 = 1;
    local_12a8 = 0;
    do {
      lVar15 = *(longlong *)(plVar13[0x71] + local_12a8 * 8);
      if (*(char *)(lVar15 + 0x129) == '\0') {
LAB_1419ba1c5:
        plVar25 = plStack_1288;
        local_1298 = plStack_1288;
        if (plStack_1288 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1288 + 1) = (int)plStack_1288[1] + 1;
          UNLOCK();
        }
        local_11f8 = (longlong *)0x0;
        local_1290 = (longlong *)0x0;
        local_1200 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1288,&local_11f8);
        plVar13 = local_11f8;
        if (local_11f8 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_11f8 + 1;
          lVar10 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_11f8)(local_11f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*local_11f8 + 8))(local_11f8,1);
            }
          }
        }
        local_ed8 = 0x40600000;
        uStack_ed4 = 0;
        uStack_ed0 = 0x40600000;
        uStack_ecc = 0;
        lVar18 = local_12b8[0x72];
        lVar10 = local_12b8[0x79];
        lVar17 = STableColumnHeader::FArguments::FArguments(local_7f8);
        lVar23 = 0x4d8;
        if (local_12d8 + 1 != (int)lVar18) {
          lVar23 = 8;
        }
        *(longlong *)(lVar17 + 0x108) = lVar23 + lVar10;
        local_1190 = &local_ed8;
        local_1198 = lVar15;
        plVar16 = (longlong *)FUN_1419a8480();
        plVar13 = plVar16 + 2;
        local_e98 = plVar13;
        local_e90 = plVar16;
        FUN_14044f790(&local_e98,plVar13);
        local_1328 = 0x378;
        SWidget::SetDebugInfo
                  (plVar13,"STableColumnHeader",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                   ,0x26e);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
        }
        local_11f0 = 0;
        local_1290 = plVar13;
        local_11e8 = plVar16;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1288,&local_11e8);
        plVar22 = local_11e8;
        if (local_11e8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_11e8 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_11e8)(local_11e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*local_11e8 + 8))(local_11e8,1);
            }
          }
        }
        local_1318 = *(undefined4 *)(lVar17 + 0x90);
        local_12e8 = lVar17 + 0xf8;
        local_1300 = lVar17 + 0xe8;
        local_12f0 = *(undefined1 *)(lVar17 + 0xf1);
        local_1308 = lVar17 + 200;
        local_1310 = lVar17 + 0x98;
        local_12f8 = *(undefined1 *)(lVar17 + 0xf0);
        local_1320 = (undefined1 *)(lVar17 + 0x78);
        local_1328 = lVar17 + 0x60;
        SWidget::SWidgetConstruct(plVar13,lVar17,lVar17 + 0x30,lVar17 + 0x40);
        local_e78 = *local_1190;
        uStack_e74 = local_1190[1];
        uStack_e70 = local_1190[2];
        uStack_e6c = local_1190[3];
        FUN_1419adc80(plVar13,lVar17,local_1198,&local_e78);
        if (((char)plVar16[5] < '\0') ||
           (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0')) {
          bVar8 = 1;
        }
        else {
          bVar8 = 0;
        }
        *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
        *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar8;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          LOCK();
          plVar22 = plVar16 + 1;
          lVar10 = *plVar22;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        FUN_140456c70(local_7f8);
        plVar22 = local_1140;
        iVar24 = (int)local_1140[1];
        *(int *)(local_1140 + 1) = iVar24 + 1;
        if (*(int *)((longlong)local_1140 + 0xc) < iVar24 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_1140,iVar24);
        }
        plVar22 = (longlong *)((longlong)iVar24 * 0x10 + *plVar22);
        *plVar22 = (longlong)local_1290;
        plVar22[1] = (longlong)plStack_1288;
        if (plStack_1288 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1288 + 1) = (int)plStack_1288[1] + 1;
          UNLOCK();
        }
        iVar24 = *(int *)(lVar15 + 0x98);
        if (iVar24 == 0) {
          local_1280 = 0;
          local_1278 = (longlong *)0x0;
          local_1270 = 0;
          local_127c = 1;
          plVar22 = (longlong *)FMemory::Realloc(0,0x30,0);
          local_ee8 = plVar22;
          if (plVar22 == (longlong *)0x0) {
            if ((local_1270 != 0) && (local_1278 != (longlong *)0x0)) {
              (**(code **)(*local_1278 + 0x28))(local_1278,0);
              if (local_1278 != (longlong *)0x0) {
                local_1278 = (longlong *)FMemory::Realloc(local_1278,0,0);
              }
              local_1270 = 0;
            }
          }
          else {
            plVar22[1] = lVar15;
            *plVar22 = (longlong)&PTR_GetPoolName_143f3f4f8;
            plVar22[2] = (longlong)SHeaderRow::FColumn::GetWidth;
            lVar10 = FDelegateHandle::GenerateNewID();
            plVar22[4] = lVar10;
            (**(code **)(*plVar22 + 0x30))(plVar22,&local_1278);
            (**(code **)(*plVar22 + 0x28))(plVar22,0);
            local_ee8 = (longlong *)FMemory::Realloc(plVar22,0,0);
            if (local_ee8 != (longlong *)0x0) {
              FMemory::Free(local_ee8);
            }
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_1090 = 1;
          local_108c = 1;
          local_1088 = 0;
          local_1080 = 0;
          local_fe8 = plVar13;
          local_fe0 = plVar16;
          plVar13 = (longlong *)FMemory::Realloc(0,0x30);
          local_fd8[0] = plVar13;
          if (plVar13 != (longlong *)0x0) {
            plVar13[1] = lVar15;
            *plVar13 = (longlong)&DAT_143f3ed00;
            plVar13[2] = (longlong)FUN_1419bd0d0;
            lVar15 = FDelegateHandle::GenerateNewID();
            plVar13[4] = lVar15;
            *plVar13 = (longlong)&PTR_GetPoolName_143f3ed48;
          }
          lVar15 = FUN_14196a7e0(local_1258,0xffffffff);
          *(undefined4 *)(lVar15 + 0x38) = local_1280;
          *(undefined1 *)(lVar15 + 0x3c) = local_127c;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar15 + 0x40,&local_1278);
          *(undefined4 *)(lVar15 + 0x20) = 1;
          plVar22 = (longlong *)(lVar15 + 0x28);
          *(undefined1 *)(lVar15 + 0x24) = 1;
          if (((&local_1088 != plVar22) && (*(int *)(lVar15 + 0x30) != 0)) &&
             (plVar5 = (longlong *)*plVar22, plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            if (*plVar22 != 0) {
              lVar10 = FMemory::Realloc(*plVar22,0,0);
              *plVar22 = lVar10;
            }
            *(undefined4 *)(lVar15 + 0x30) = 0;
          }
          pplVar2 = (longlong **)(lVar15 + 0x50);
          if (local_fd8 != pplVar2) {
            if (plVar13 == (longlong *)0x0) {
              if ((*(int *)(lVar15 + 0x58) != 0) && (plVar22 = *pplVar2, plVar22 != (longlong *)0x0)
                 ) {
                (**(code **)(*plVar22 + 0x28))(plVar22,0);
                if (*pplVar2 != (longlong *)0x0) {
                  plVar22 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                  *pplVar2 = plVar22;
                }
                *(undefined4 *)(lVar15 + 0x58) = 0;
              }
            }
            else {
              (**(code **)(*plVar13 + 0x30))(plVar13,pplVar2);
            }
          }
          FUN_140801a00(lVar15,&local_fe8);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            local_fd8[0] = (longlong *)FMemory::Realloc(plVar13,0,0);
            if (local_fd8[0] != (longlong *)0x0) {
              FMemory::Free(local_fd8[0]);
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1088);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar16 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1278);
        }
        else if (iVar24 == 1) {
          local_11b0 = SHeaderRow::FColumn::GetWidth(lVar15);
          local_11ac = 1;
          local_11a8 = 0;
          local_11a0 = 0;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_1008 = plVar13;
          local_1000 = plVar16;
          lVar15 = FUN_14068f180(local_4f8);
          *(undefined4 *)(lVar15 + 0x148) = local_11b0;
          *(undefined1 *)(lVar15 + 0x14c) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar15 + 0x150,&local_11a8);
          puVar19 = (undefined8 *)operator_new(800);
          if (puVar19 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar19 + 1) = 1;
            *(undefined4 *)((longlong)puVar19 + 0xc) = 1;
            *puVar19 = &PTR_FUN_144044b78;
            if (puVar19 != (undefined8 *)0xfffffffffffffff0) {
              FUN_1419618a0();
            }
          }
          puVar14 = puVar19 + 2;
          local_10a8 = puVar14;
          local_10a0 = puVar19;
          FUN_14044f790(&local_10a8,puVar14);
          local_1098 = local_12ab;
          local_1328 = 0x310;
          SWidget::SetDebugInfo
                    (puVar14,&DAT_144d76954,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                     ,0x28b);
          uVar12 = FUN_140692660(lVar15,&local_1008);
          puVar19 = (undefined8 *)FUN_14188dd80(&local_10a8,local_ef8,uVar12);
          plVar13 = (longlong *)puVar19[1];
          local_ff8 = *puVar19;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_10c0 = 0;
          local_10bc = 1;
          local_10b8 = 0;
          local_10b0 = 0;
          local_ff0 = plVar13;
          uVar12 = FUN_14196a7e0(local_1258,0xffffffff);
          uVar12 = SSplitter::FSlot::SizeRule(uVar12,&local_10c0);
          FUN_140801a00(uVar12,&local_ff8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_10b8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar22 = plVar13 + 1;
            lVar15 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = local_ef0;
          if (local_ef0 != (longlong *)0x0) {
            LOCK();
            plVar22 = local_ef0 + 1;
            lVar15 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_ef0)(local_ef0);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_10a8);
          FUN_140690ea0(local_4f8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_11a8);
        }
        else if (iVar24 == 2) {
          local_1050 = 1;
          local_1048 = 0;
          local_1040 = 0;
          local_1058 = 0x40a00000;
          local_1054 = 0x40a00000;
          lVar18 = SSpacer::FArguments::FArguments(local_928);
          *(undefined4 *)(lVar18 + 0x108) = 0x40a00000;
          *(undefined4 *)(lVar18 + 0x10c) = 0x40a00000;
          *(undefined1 *)(lVar18 + 0x110) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x118,&local_1048);
          local_1118 = FUN_141880f80();
          lVar10 = local_1118 + 0x10;
          local_1120 = lVar10;
          FUN_14044f790(&local_1120,lVar10);
          local_1110 = &local_12af;
          local_1328 = 0x228;
          SWidget::SetDebugInfo
                    (lVar10,"SSpacer",
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                     ,0x29e);
          puVar19 = (undefined8 *)FUN_14188e190(&local_1120,local_e50,lVar18);
          plVar13 = (longlong *)puVar19[1];
          uVar12 = *puVar19;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          plVar25 = DAT_1469eb140;
          local_e28 = 3;
          local_e24 = 1;
          local_e20 = 1;
          lVar10 = *DAT_1469eb140;
          local_e18 = 0;
          local_e10 = 0;
          puVar19 = (undefined8 *)FName::FName(local_e58,"NoBorder",1);
          uVar20 = (**(code **)(lVar10 + 0x40))(plVar25,*puVar19,0);
          local_f90 = 1;
          local_f68 = 1;
          local_f88 = 0;
          local_f80 = 0;
          local_f60 = 0;
          local_f58 = 0;
          local_f78 = 0;
          uStack_f70 = 0;
          local_f98 = uVar20;
          lVar10 = FUN_141886d30(local_308);
          *(undefined1 *)(lVar10 + 0x130) = 1;
          *(undefined8 *)(lVar10 + 0x120) = 0;
          *(undefined8 *)(lVar10 + 0x128) = 0;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x138,&local_f60);
          *(undefined8 *)(lVar10 + 0x188) = uVar20;
          *(undefined1 *)(lVar10 + 400) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x198,&local_f88);
          if (&local_e28 != (undefined4 *)(lVar10 + 0x40)) {
            *(undefined4 *)(lVar10 + 0x40) = 3;
            *(undefined1 *)(lVar10 + 0x44) = 1;
          }
          *(undefined1 *)(lVar10 + 0x48) = 1;
          plVar25 = (longlong *)(lVar10 + 0x50);
          if (((&local_e18 != plVar25) && (*(int *)(lVar10 + 0x58) != 0)) &&
             (plVar22 = (longlong *)*plVar25, plVar22 != (longlong *)0x0)) {
            (**(code **)(*plVar22 + 0x28))(plVar22,0);
            if (*plVar25 != 0) {
              lVar18 = FMemory::Realloc(*plVar25,0,0);
              *plVar25 = lVar18;
            }
            *(undefined4 *)(lVar10 + 0x58) = 0;
          }
          puVar19 = (undefined8 *)(lVar10 + 0x108);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_1268 = uVar12;
          plStack_1260 = plVar13;
          if (&local_1268 != puVar19) {
            local_1268 = *puVar19;
            plStack_1260 = *(longlong **)(lVar10 + 0x110);
            *puVar19 = uVar12;
            *(longlong **)(lVar10 + 0x110) = plVar13;
            local_e08 = uVar12;
            plStack_e00 = plVar13;
          }
          plVar25 = plStack_1260;
          if (plStack_1260 != (longlong *)0x0) {
            LOCK();
            plVar22 = plStack_1260 + 1;
            lVar18 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plStack_1260)(plStack_1260);
              LOCK();
              piVar1 = (int *)((longlong)plVar25 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plStack_1260 + 8))(plStack_1260,1);
              }
            }
          }
          local_1130 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
          lVar18 = local_1130 + 0x10;
          local_1138 = lVar18;
          FUN_14044f790(&local_1138,lVar18);
          local_1128 = &local_12ae;
          local_1328 = 0x388;
          SWidget::SetDebugInfo
                    (lVar18,"SBorder",
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                     ,0x298);
          FUN_1418d3ed0(&local_1138,&local_12c8,lVar10);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1138);
          FUN_14188af70(local_308);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f60);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f88);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e18);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar25 = plVar13 + 1;
            lVar10 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = local_e48;
          if (local_e48 != (longlong *)0x0) {
            LOCK();
            plVar25 = local_e48 + 1;
            lVar10 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_e48)(local_e48);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1120);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_810);
          FUN_140456c70(local_928);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1048);
          lVar10 = CONCAT44(uStack_12bc,uStack_12c0);
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
            UNLOCK();
            LOCK();
            *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
            UNLOCK();
            LOCK();
            *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
            UNLOCK();
            LOCK();
            *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
            UNLOCK();
          }
          lVar10 = CONCAT44(uStack_12bc,uStack_12c0);
          local_1188 = 0;
          local_1180 = 0;
          puVar19 = (undefined8 *)operator_new(0x30,&local_1188);
          uVar6 = uStack_12c4;
          uVar4 = local_12c8;
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = &PTR_GetPoolName_144d77bb8;
            puVar19[1] = lVar15;
            puVar19[2] = CONCAT44(uStack_12c4,local_12c8);
            puVar19[3] = lVar10;
            if (lVar10 != 0) {
              LOCK();
              *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
              UNLOCK();
              lVar10 = CONCAT44(uStack_12bc,uStack_12c0);
            }
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar19[5] = uVar12;
          }
          uVar12 = CONCAT44(uVar6,uVar4);
          FUN_14185b0f0(uVar12,&local_1188);
          local_1178 = 0;
          local_1170 = 0;
          puVar19 = (undefined8 *)operator_new(0x30,&local_1178);
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = &PTR_GetPoolName_144d77bf8;
            puVar19[1] = lVar15;
            puVar19[2] = uVar12;
            puVar19[3] = lVar10;
            if (lVar10 != 0) {
              LOCK();
              *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
              UNLOCK();
              lVar10 = CONCAT44(uStack_12bc,uStack_12c0);
              uVar12 = CONCAT44(uStack_12c4,local_12c8);
            }
            uVar20 = FDelegateHandle::GenerateNewID();
            puVar19[5] = uVar20;
          }
          FUN_14185b130(uVar12,&local_1178);
          local_1168 = 0;
          local_1160 = 0;
          puVar19 = (undefined8 *)operator_new(0x30,&local_1168);
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = &PTR_GetPoolName_144d77c38;
            puVar19[1] = lVar15;
            puVar19[2] = uVar12;
            puVar19[3] = lVar10;
            if (lVar10 != 0) {
              LOCK();
              *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
              UNLOCK();
              lVar10 = CONCAT44(uStack_12bc,uStack_12c0);
              uVar12 = CONCAT44(uStack_12c4,local_12c8);
            }
            uVar20 = FDelegateHandle::GenerateNewID();
            puVar19[5] = uVar20;
          }
          FUN_14185b1b0(uVar12,&local_1168);
          local_1228 = 0xbf800000;
          local_1224 = 0;
          local_1220 = 0;
          local_1218 = 0;
          local_11c0 = 0;
          local_11b8 = 0;
          puVar19 = (undefined8 *)operator_new(0x20,&local_11c0);
          if (puVar19 != (undefined8 *)0x0) {
            puVar19[1] = lVar15;
            *puVar19 = &PTR_GetPoolName_144d77c78;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar19[3] = uVar12;
          }
          local_1224 = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1220,&local_11c0);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_11c0);
          local_f28 = local_12c8;
          uStack_f24 = uStack_12c4;
          uStack_f20 = uStack_12c0;
          uStack_f1c = uStack_12bc;
          lVar15 = 0;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          local_1028 = plVar16 + 2;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          local_1020 = plVar16;
          lVar18 = FUN_14185c7c0();
          *(undefined1 *)(lVar18 + 0x24) = 3;
          local_10d0 = FUN_1417e5b60();
          lVar10 = local_10d0 + 0x10;
          local_10d8 = lVar10;
          FUN_14044f790(&local_10d8,lVar10);
          local_10c8 = &local_12ad;
          local_1328 = 0x230;
          SWidget::SetDebugInfo
                    (lVar10,"SOverlay",
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                     ,0x2d9);
          uVar12 = FUN_140801a00(lVar18,&local_f28);
          uVar20 = FUN_14185c7c0();
          uVar20 = FUN_140801a00(uVar20,&local_1028);
          uVar21 = SOverlay::FArguments::FArguments(local_b78);
          uVar20 = SOverlay::FArguments::operator+(uVar21,uVar20);
          uVar12 = SOverlay::FArguments::operator+(uVar20,uVar12);
          puVar19 = (undefined8 *)FUN_1417fcf70(&local_10d8,local_f08,uVar12);
          local_fb8 = *puVar19;
          local_fb0 = puVar19[1];
          if (local_fb0 != 0) {
            LOCK();
            *(int *)(local_fb0 + 8) = *(int *)(local_fb0 + 8) + 1;
            UNLOCK();
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          lVar18 = FUN_14068f180(local_6e8);
          *(undefined4 *)(lVar18 + 0x148) = local_1228;
          *(undefined1 *)(lVar18 + 0x14c) = local_1224;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x150,&local_1220);
          local_10e8 = FUN_1418cc2a0();
          lVar10 = local_10e8 + 0x10;
          local_10f0 = lVar10;
          FUN_14044f790(&local_10f0,lVar10);
          local_10e0 = &local_12ac;
          local_1328 = 0x310;
          SWidget::SetDebugInfo
                    (lVar10,&DAT_144d76c00,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                     ,0x2d6);
          uVar12 = FUN_140692660(lVar18,&local_fb8);
          puVar19 = (undefined8 *)FUN_14188dd80(&local_10f0,local_f18,uVar12);
          plVar13 = (longlong *)puVar19[1];
          local_1018 = *puVar19;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          local_1108 = 0;
          local_1104 = 1;
          local_1100 = 0;
          local_10f8 = 0;
          local_1010 = plVar13;
          uVar12 = FUN_14196a7e0(local_1258,0xffffffff);
          uVar12 = SSplitter::FSlot::SizeRule(uVar12,&local_1108);
          FUN_140801a00(uVar12,&local_1018);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1100);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar25 = plVar13 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          plVar13 = local_f10;
          if (local_f10 != (longlong *)0x0) {
            LOCK();
            plVar25 = local_f10 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_f10)(local_f10);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_10f0);
          FUN_140690ea0(local_6e8);
          plVar13 = local_f00;
          if (local_f00 != (longlong *)0x0) {
            LOCK();
            plVar25 = local_f00 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_f00)(local_f00);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_10d8);
          if (local_a70 != 0) {
            FMemory::Free();
          }
          FUN_140456c70(local_b78);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar16 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
            lVar15 = CONCAT44(uStack_12bc,uStack_12c0);
          }
          plVar13 = (longlong *)0x0;
          if (lVar15 != 0) {
            LOCK();
            piVar1 = (int *)(lVar15 + 8);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              puVar19 = (undefined8 *)CONCAT44(uStack_12bc,uStack_12c0);
              (**(code **)*puVar19)(puVar19);
              LOCK();
              piVar1 = (int *)((longlong)puVar19 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                plVar13 = (longlong *)CONCAT44(uStack_12bc,uStack_12c0);
                (**(code **)(*plVar13 + 8))(plVar13,1);
                goto LAB_1419bae2b;
              }
            }
            plVar13 = (longlong *)CONCAT44(uStack_12bc,uStack_12c0);
          }
LAB_1419bae2b:
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1220);
          plVar25 = local_1298;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*(longlong *)CONCAT44(uStack_12bc,uStack_12c0) + 8))
                        ((longlong *)CONCAT44(uStack_12bc,uStack_12c0),1);
            }
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*(longlong *)CONCAT44(uStack_12bc,uStack_12c0) + 8))
                        ((longlong *)CONCAT44(uStack_12bc,uStack_12c0),1);
            }
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*(longlong *)CONCAT44(uStack_12bc,uStack_12c0) + 8))
                        ((longlong *)CONCAT44(uStack_12bc,uStack_12c0),1);
            }
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar25 = (longlong *)CONCAT44(uStack_12bc,uStack_12c0);
            if (iVar24 == 1) {
              (**(code **)(*plVar25 + 8))(plVar25,1);
            }
            LOCK();
            plVar25 = plVar25 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            plVar25 = local_1298;
            if ((int)lVar15 == 1) {
              (*(code *)**(undefined8 **)CONCAT44(uStack_12bc,uStack_12c0))();
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar25 = local_1298;
              if (iVar24 == 1) {
                (**(code **)(*(longlong *)CONCAT44(uStack_12bc,uStack_12c0) + 8))
                          ((longlong *)CONCAT44(uStack_12bc,uStack_12c0),1);
                plVar25 = local_1298;
              }
            }
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar16 + 1;
          lVar15 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        plVar13 = local_12b8;
        if (plVar25 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar25 + 1;
          lVar15 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar25)(plVar25);
            LOCK();
            piVar1 = (int *)((longlong)plVar25 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar13 = local_12b8;
            if (iVar24 == 1) {
              (**(code **)(*plVar25 + 8))(plVar25,1);
              plVar13 = local_12b8;
            }
          }
        }
      }
      else {
        if (((*(int *)(lVar15 + 0x138) != 0) &&
            (plVar13 = local_12b8, *(longlong **)(lVar15 + 0x130) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar15 + 0x130) + 0x18))(), plVar13 = local_12b8,
           cVar7 != '\0')) {
          if (*(int *)(lVar15 + 0x138) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(lVar15 + 0x130);
          }
          uVar9 = (**(code **)(*plVar13 + 0x38))();
          *(undefined1 *)(lVar15 + 0x128) = uVar9;
          plVar13 = local_12b8;
        }
        if (*(char *)(lVar15 + 0x128) != '\0') goto LAB_1419ba1c5;
      }
      plVar25 = plStack_1288;
      local_12d8 = local_12d8 + 1;
      local_12a8 = local_12a8 + 1;
    } while (local_12d8 < (int)plVar13[0x72]);
    plVar16 = local_12a0;
    local_fc8 = (longlong *)local_1248;
    if (plStack_1288 != (longlong *)0x0) {
      LOCK();
      plVar22 = plStack_1288 + 1;
      lVar15 = *plVar22;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_1288)(plStack_1288);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        iVar24 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar13 = local_12b8;
        plVar16 = local_12a0;
        local_fc8 = (longlong *)local_1248;
        if (iVar24 == 1) {
          (**(code **)(*plStack_1288 + 8))(plStack_1288,1);
          plVar13 = local_12b8;
          plVar16 = local_12a0;
          local_fc8 = (longlong *)local_1248;
        }
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_fc0 = plVar16;
  (**(code **)(*plVar13 + 0x208))(plVar13,&local_fc8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar16 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar13 = local_1250;
  if (local_1250 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_1250 + 1;
    lVar15 = *plVar25;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1250)(local_1250);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        (**(code **)(*local_1250 + 8))(local_1250,1);
      }
    }
  }
  return;
}



// FUNCTION 1419bb590 FUN_1419bb590 body=205 status=ok
// SIG undefined FUN_1419bb590(void)

void FUN_1419bb590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *local_38;
  undefined4 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x41a) == '\0') {
    *(undefined1 *)(param_1 + 0x41a) = 1;
    local_38 = FOutputDevice::CanBeUsedOnAnyThread;
    uStack_30 = 0;
    uVar5 = FUN_1417ddb00(local_18,param_1,&local_38);
    FUN_141853de0(param_1,local_28,0,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x300) + 0x29c) = 1;
  }
  return;
}



// FUNCTION 1419bb670 RestoreFromUndo body=53 status=ok
// SIG undefined RestoreFromUndo(void)

void SlateEditableTextTypes::FCursorInfo::RestoreFromUndo(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  uVar1 = (**(code **)(*DAT_1469f4590 + 0x40))();
  param_1[2] = uVar1;
  return;
}



// FUNCTION 1419bb6b0 ScrollBar_OnUserScrolled body=89 status=ok
// SIG undefined ScrollBar_OnUserScrolled(void)

void STableViewBase::ScrollBar_OnUserScrolled(longlong *param_1,float param_2)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  dVar2 = (double)param_2;
  uVar3 = 0;
  uVar4 = 0;
  if (0.0 <= dVar2) {
    if (1.0 <= dVar2) {
      dVar2 = 1.0;
    }
    uVar3 = SUB84(dVar2,0);
    uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  iVar1 = (**(code **)(*param_1 + 0x250))();
                    /* WARNING: Could not recover jumptable at 0x0001419bb702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x220))(param_1,(float)((double)iVar1 * (double)CONCAT44(uVar4,uVar3)));
  return;
}



// FUNCTION 1419bb710 FUN_1419bb710 body=253 status=ok
// SIG undefined FUN_1419bb710(void)

void FUN_1419bb710(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x250))();
  if (((double)param_1[0x6a] == 0.0) || ((double)param_1[0x6b] == 0.0)) {
    dVar2 = 0.5;
  }
  else {
    dVar2 = (double)param_1[0x6b] / (double)param_1[0x6a];
  }
  dVar3 = (double)((float)(((double)((float)dVar2 * param_3) + (double)param_1[0x66]) /
                          (double)iVar1) * (float)iVar1);
  dVar2 = -10.0;
  if ((-10.0 <= dVar3) && (dVar2 = (double)((float)iVar1 + 10.0), dVar3 <= dVar2)) {
    dVar2 = dVar3;
  }
  dVar2 = (double)iVar1 * dVar2;
  if (param_4 == '\0') {
    FOverscroll::ScrollBy((longlong)param_1 + 0x414,param_2,(float)(dVar2 - (double)param_3));
  }
                    /* WARNING: Could not recover jumptable at 0x0001419bb806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x220))(param_1,(float)dVar2);
  return;
}



// FUNCTION 1419bb810 FUN_1419bb810 body=189 status=ok
// SIG undefined FUN_1419bb810(void)

float FUN_1419bb810(longlong *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x250))();
  fVar4 = -10.0;
  if ((-10.0 <= param_2) && (fVar4 = (float)iVar3 + 10.0, param_2 <= (float)iVar3 + 10.0)) {
    fVar4 = param_2;
  }
  dVar1 = (double)param_1[0x66];
  dVar2 = (double)fVar4;
  if (dVar1 != dVar2) {
    param_1[0x66] = (longlong)dVar2;
    TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 100,dVar2);
    FUN_1419bb590(param_1);
  }
  if (((char)param_1[0x6d] != '\0') && ((double)param_1[0x66] <= dVar2)) {
    return 0.0;
  }
  return (float)ABS(dVar1 - dVar2);
}



// FUNCTION 1419bb8d0 FUN_1419bb8d0 body=94 status=ok
// SIG undefined FUN_1419bb8d0(void)

void FUN_1419bb8d0(longlong *param_1)

{
  int iVar1;
  
  FInertialScrollManager::ClearScrollVelocity(param_1 + 0x7c);
  iVar1 = (**(code **)(*param_1 + 0x250))(param_1);
  if ((double)iVar1 != (double)param_1[0x66]) {
    param_1[0x66] = (longlong)(double)iVar1;
    TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 100);
    FUN_1419bb590(param_1);
  }
  FUN_1419bb590(param_1);
  return;
}



// FUNCTION 1419bb930 FUN_1419bb930 body=78 status=ok
// SIG undefined FUN_1419bb930(void)

void FUN_1419bb930(longlong param_1)

{
  FInertialScrollManager::ClearScrollVelocity(param_1 + 0x3e0);
  if (*(double *)(param_1 + 0x330) != 0.0) {
    *(undefined8 *)(param_1 + 0x330) = 0;
    TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 800);
    FUN_1419bb590(param_1);
  }
  FUN_1419bb590(param_1);
  return;
}



// FUNCTION 1419bb980 FUN_1419bb980 body=35 status=ok
// SIG undefined FUN_1419bb980(void)

void FUN_1419bb980(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x290) = *param_2;
  *(undefined1 *)(param_1 + 0x291) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x298,param_2 + 8);
  return;
}



// FUNCTION 1419bb9b0 FUN_1419bb9b0 body=375 status=ok
// SIG undefined FUN_1419bb9b0(void)

void FUN_1419bb9b0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28 [2];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x3a8) = param_3;
  plVar6 = (longlong *)param_2[1];
  lVar5 = *param_2;
  local_18 = FUN_1419a5310;
  uStack_10 = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x40);
  local_28[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144d50130;
    plVar4[1] = lVar5;
    plVar4[2] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar4 + 3) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = local_18._4_4_;
    *(undefined4 *)(plVar4 + 4) = uStack_10;
    *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[6] = lVar5;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_28[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_28[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
        plVar4 = local_28[0];
      }
    }
  }
  pplVar2 = (longlong **)(param_1 + 0x3b8);
  *(undefined1 *)(param_1 + 0x3b1) = 1;
  if (local_28 != pplVar2) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x3c0) != 0) && (plVar6 = *pplVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar6;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
      goto LAB_1419bbad1;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_1419bbad1:
  FUN_1419b97c0(param_1);
  return;
}



// FUNCTION 1419bbb30 FUN_1419bbb30 body=12 status=ok
// SIG undefined FUN_1419bbb30(void)

void FUN_1419bbb30(longlong param_1)

{
  FUN_1419a0450(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bbb40 FUN_1419bbb40 body=59 status=ok
// SIG undefined FUN_1419bbb40(void)

void FUN_1419bbb40(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x468) = *param_2;
  *(undefined1 *)(param_1 + 0x469) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x470,param_2 + 8);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bbb80 FUN_1419bbb80 body=261 status=ok
// SIG undefined FUN_1419bbb80(void)

void FUN_1419bbb80(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x5b0) == 0) || (*(longlong **)(param_1 + 0x5a8) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x18))(), cVar1 == '\0')) {
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
      if (*(char *)(param_1 + 0x5a1) != param_2[1]) goto LAB_1419bbc4a;
      bVar6 = *(char *)(param_1 + 0x5a0) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)(param_2 + 0x10) != 0) &&
         (plVar3 = *(longlong **)(param_2 + 8), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x5b0) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x5a8), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419bbc4a:
  *(char *)(param_1 + 0x5a0) = *param_2;
  *(char *)(param_1 + 0x5a1) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5a8,param_2 + 8);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bbc90 SetAllowContextMenu body=35 status=ok
// SIG undefined SetAllowContextMenu(void)

void SMultiLineEditableText::SetAllowContextMenu(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x278) = *param_2;
  *(undefined1 *)(param_1 + 0x279) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 8);
  return;
}



// FUNCTION 1419bbcc0 SetRevertTextOnEscape body=35 status=ok
// SIG undefined SetRevertTextOnEscape(void)

void SMultiLineEditableText::SetRevertTextOnEscape(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x248) = *param_2;
  *(undefined1 *)(param_1 + 0x249) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x250,param_2 + 8);
  return;
}



// FUNCTION 1419bbcf0 FUN_1419bbcf0 body=276 status=ok
// SIG undefined FUN_1419bbcf0(void)

void FUN_1419bbcf0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    if (((*(int *)(param_1 + 0x4c0) == 0) || (*(longlong **)(param_1 + 0x4b8) == (longlong *)0x0))
       || (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x18))(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (((*(int *)(param_2 + 0x38) == 0) || (*(longlong **)(param_2 + 0x30) == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))(), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar1 == cVar2) {
      if (cVar1 == '\0') {
        if ((*(char *)(param_1 + 0x4b0) == *(char *)(param_2 + 0x28)) &&
           (cVar1 = FSlateColor::operator==(param_1 + 0x488,param_2), cVar1 != '\0')) {
          return;
        }
      }
      else {
        lVar4 = 0;
        lVar5 = lVar4;
        if ((*(int *)(param_2 + 0x38) != 0) &&
           (plVar3 = *(longlong **)(param_2 + 0x30), lVar5 = 0, plVar3 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
          lVar5 = *plVar3;
        }
        if ((*(int *)(param_1 + 0x4c0) != 0) &&
           (plVar3 = *(longlong **)(param_1 + 0x4b8), plVar3 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
          lVar4 = *plVar3;
        }
        if (lVar4 == lVar5) {
          return;
        }
      }
    }
  }
  FUN_140692440(param_1 + 0x488,param_2);
  *(undefined1 *)(param_1 + 0x4b0) = *(undefined1 *)(param_2 + 0x28);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b8,param_2 + 0x30);
  FUN_1418475e0(param_1,6);
  return;
}



// FUNCTION 1419bbe10 FUN_1419bbe10 body=248 status=ok
// SIG undefined FUN_1419bbe10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419bbe10(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_30;
  undefined4 local_28;
  
  iVar3 = *(int *)(param_1 + 0x390) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x388) + lVar4 * 8);
      if (*plVar1 == *param_2) {
        if ((((int)plVar1[0x12] == 0) || ((longlong *)plVar1[0x11] == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(*(longlong *)plVar1[0x11] + 0x18))(), cVar2 == '\0')) {
          *(undefined4 *)(plVar1 + 0xd) = param_3;
          local_30 = 0;
          local_28 = 0;
          *(undefined1 *)((longlong)plVar1 + 0x6c) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=(plVar1 + 0xe,&local_30);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
        }
        else if ((int)plVar1[0x12] == 0) {
          (**(code **)(_DAT_00000000 + 0x38))(0,param_3);
        }
        else {
          (**(code **)(*(longlong *)plVar1[0x11] + 0x38))((longlong *)plVar1[0x11],param_3);
        }
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 1419bbf10 FUN_1419bbf10 body=27 status=ok
// SIG undefined FUN_1419bbf10(void)

void FUN_1419bbf10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,param_2 + 2);
  return;
}



// FUNCTION 1419bbf30 FUN_1419bbf30 body=27 status=ok
// SIG undefined FUN_1419bbf30(void)

void FUN_1419bbf30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x20,param_2 + 2);
  return;
}



// FUNCTION 1419bbf50 FUN_1419bbf50 body=294 status=ok
// SIG undefined FUN_1419bbf50(void)

void FUN_1419bbf50(undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int local_res8;
  int local_resc;
  undefined1 local_28 [16];
  longlong *local_18;
  
  uVar9 = *param_3;
  *(char *)(param_1 + 1) = param_4;
  *param_1 = uVar9;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                    (param_2,(longlong *)(param_2 + 0x28),param_3,param_4 == '\x01');
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_2 + 0x30))) {
    iVar2 = *(int *)((longlong)param_3 + 4);
    plVar6 = (longlong *)((longlong)iVar4 * 0x58 + *(longlong *)(param_2 + 0x28));
    puVar7 = (undefined8 *)*plVar6;
    puVar8 = puVar7 + (longlong)(int)plVar6[1] * 2;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
      (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,&local_res8);
      if ((iVar2 < local_res8) || (local_resc <= iVar2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar5 = (**(code **)(*(longlong *)*puVar7 + 0x20))((longlong *)*puVar7,local_28);
        *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)(lVar5 + 0x18);
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_18 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_18)(local_18);
            LOCK();
            piVar1 = (int *)((longlong)local_18 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_18 + 8))(local_18,1);
            }
          }
        }
        break;
      }
    }
  }
  uVar9 = (**(code **)(*DAT_1469f4590 + 0x40))();
  param_1[2] = uVar9;
  return;
}



// FUNCTION 1419bc080 FUN_1419bc080 body=370 status=ok
// SIG undefined FUN_1419bc080(void)

void FUN_1419bc080(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 local_res8;
  int local_res10;
  int local_res14;
  undefined1 local_38 [16];
  longlong *local_28;
  
  local_res8 = *param_3;
  uVar10 = 0;
  iVar4 = (int)((ulonglong)local_res8 >> 0x20);
  if (0 < iVar4) {
    iVar2 = *(int *)(*(longlong *)((longlong)(int)local_res8 * 0x70 + *(longlong *)(param_2 + 0x18))
                    + 8);
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    if (iVar6 == iVar4) {
      uVar10 = 1;
      iVar6 = 0;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      local_res8 = CONCAT44(iVar6,(int)local_res8);
    }
  }
  *param_1 = local_res8;
  *(undefined1 *)(param_1 + 1) = uVar10;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  iVar4 = FTextLayout::GetLineViewIndexForTextLocation
                    (param_2,(longlong *)(param_2 + 0x28),&local_res8);
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_2 + 0x30))) {
    plVar7 = (longlong *)((longlong)iVar4 * 0x58 + *(longlong *)(param_2 + 0x28));
    iVar4 = local_res8._4_4_;
    puVar8 = (undefined8 *)*plVar7;
    puVar9 = puVar8 + (longlong)(int)plVar7[1] * 2;
    for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
      (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,&local_res10);
      if ((iVar4 < local_res10) || (local_res14 <= iVar4)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar5 = (**(code **)(*(longlong *)*puVar8 + 0x20))((longlong *)*puVar8,local_38);
        *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)(lVar5 + 0x18);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_28 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_28 + 8))(local_28,1);
            }
          }
        }
        break;
      }
    }
  }
  uVar11 = (**(code **)(*DAT_1469f4590 + 0x40))();
  param_1[2] = uVar11;
  return;
}



// FUNCTION 1419bc200 SetDebugSourceInfo body=8 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateTextBlockLayout::SetDebugSourceInfo(undefined8 *param_1)

{
  FTextLayout::SetDebugSourceInfo(*param_1);
  return;
}



// FUNCTION 1419bc210 FUN_1419bc210 body=276 status=ok
// SIG undefined FUN_1419bc210(void)

void FUN_1419bc210(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (*(char *)(param_1 + 0x470) != '\0') {
    if (((*(int *)(param_1 + 0x480) == 0) || (*(longlong **)(param_1 + 0x478) == (longlong *)0x0))
       || (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x478) + 0x18))(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (((*(int *)(param_2 + 0x60) == 0) || (*(longlong **)(param_2 + 0x58) == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))(), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar1 == cVar2) {
      if (cVar1 == '\0') {
        if ((*(char *)(param_1 + 0x470) == *(char *)(param_2 + 0x50)) &&
           (cVar1 = FSlateFontInfo::operator==(param_1 + 0x420,param_2), cVar1 != '\0')) {
          return;
        }
      }
      else {
        lVar4 = 0;
        lVar5 = lVar4;
        if ((*(int *)(param_2 + 0x60) != 0) &&
           (plVar3 = *(longlong **)(param_2 + 0x58), lVar5 = 0, plVar3 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
          lVar5 = *plVar3;
        }
        if ((*(int *)(param_1 + 0x480) != 0) &&
           (plVar3 = *(longlong **)(param_1 + 0x478), plVar3 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
          lVar4 = *plVar3;
        }
        if (lVar4 == lVar5) {
          return;
        }
      }
    }
  }
  FUN_1417f9360(param_1 + 0x420,param_2);
  *(undefined1 *)(param_1 + 0x470) = *(undefined1 *)(param_2 + 0x50);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x478,param_2 + 0x58);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bc330 FUN_1419bc330 body=133 status=ok
// SIG undefined FUN_1419bc330(void)

void FUN_1419bc330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FText::operator=(param_1 + 0x558);
  *(undefined1 *)(param_1 + 0x570) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x578,param_2 + 0x20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x20);
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



// FUNCTION 1419bc3c0 FUN_1419bc3c0 body=12 status=ok
// SIG undefined FUN_1419bc3c0(void)

void FUN_1419bc3c0(longlong param_1)

{
  FUN_1419a2a00(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bc3d0 SetClearTextSelectionOnFocusLoss body=35 status=ok
// SIG undefined SetClearTextSelectionOnFocusLoss(void)

void SMultiLineEditableText::SetClearTextSelectionOnFocusLoss(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x2a8) = *param_2;
  *(undefined1 *)(param_1 + 0x2a9) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2b0,param_2 + 8);
  return;
}



// FUNCTION 1419bc400 FUN_1419bc400 body=136 status=ok
// SIG undefined FUN_1419bc400(void)

void FUN_1419bc400(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *(undefined1 *)(param_2 + 1);
  uVar1 = *param_2;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 2);
  lVar3 = *(longlong *)(param_1 + 0x300);
  *(undefined4 *)(lVar3 + 0x248) = uVar1;
  *(undefined1 *)(lVar3 + 0x24c) = uVar2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x250,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419bc490 FUN_1419bc490 body=136 status=ok
// SIG undefined FUN_1419bc490(void)

void FUN_1419bc490(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *(undefined1 *)(param_2 + 1);
  uVar1 = *param_2;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 2);
  lVar3 = *(longlong *)(param_1 + 0x300);
  *(undefined4 *)(lVar3 + 0x230) = uVar1;
  *(undefined1 *)(lVar3 + 0x234) = uVar2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x238,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419bc520 FUN_1419bc520 body=12 status=ok
// SIG undefined FUN_1419bc520(void)

void FUN_1419bc520(longlong param_1)

{
  FUN_1419a2f70(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bc530 FUN_1419bc530 body=58 status=ok
// SIG undefined FUN_1419bc530(void)

void FUN_1419bc530(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x4c0) = *param_2;
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4c8,param_2 + 2);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bc570 FUN_1419bc570 body=259 status=ok
// SIG undefined FUN_1419bc570(void)

void FUN_1419bc570(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x608) == 0) || (*(longlong **)(param_1 + 0x600) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x600) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((param_2[4] == 0) || (*(longlong **)(param_2 + 2) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 2) + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x5fc) != (char)param_2[1]) goto LAB_1419bc639;
      bVar6 = *(int *)(param_1 + 0x5f8) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[4] != 0) &&
         (plVar3 = *(longlong **)(param_2 + 2), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x608) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x600), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419bc639:
  *(int *)(param_1 + 0x5f8) = *param_2;
  *(char *)(param_1 + 0x5fc) = (char)param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x600,param_2 + 2);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bc680 FUN_1419bc680 body=12 status=ok
// SIG undefined FUN_1419bc680(void)

void FUN_1419bc680(longlong param_1)

{
  FUN_1419a3000(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bc690 FUN_1419bc690 body=58 status=ok
// SIG undefined FUN_1419bc690(void)

void FUN_1419bc690(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x4d8) = *param_2;
  *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4e0,param_2 + 2);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bc6d0 FUN_1419bc6d0 body=97 status=ok
// SIG undefined FUN_1419bc6d0(void)

void FUN_1419bc6d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x610);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x610) = *param_2;
    *(undefined1 *)(param_1 + 0x614) = *(undefined1 *)(param_2 + 1);
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x618,param_2 + 2);
    FUN_1418475e0(param_1,5);
  }
  return;
}



// FUNCTION 1419bc740 FUN_1419bc740 body=12 status=ok
// SIG undefined FUN_1419bc740(void)

void FUN_1419bc740(longlong param_1)

{
  FUN_1419a30a0(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bc750 FUN_1419bc750 body=60 status=ok
// SIG undefined FUN_1419bc750(void)

void FUN_1419bc750(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x498) = *param_2;
  *(undefined4 *)(param_1 + 0x49c) = uVar1;
  *(undefined4 *)(param_1 + 0x4a0) = uVar2;
  *(undefined4 *)(param_1 + 0x4a4) = uVar3;
  *(undefined1 *)(param_1 + 0x4a8) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b0,param_2 + 6);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bc790 FUN_1419bc790 body=306 status=ok
// SIG undefined FUN_1419bc790(void)

void FUN_1419bc790(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x5f0) == 0) || (*(longlong **)(param_1 + 0x5e8) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x5e8) + 0x18))(), cVar4 == '\0')) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  if (((param_2[8] == 0.0) || (*(longlong **)(param_2 + 6) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_2 + 6) + 0x18))(), cVar5 == '\0')) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if (cVar4 == cVar5) {
    if (cVar4 == '\0') {
      if (((*(char *)(param_1 + 0x5e0) != *(char *)(param_2 + 4)) ||
          (*param_2 != *(float *)(param_1 + 0x5d0))) ||
         ((param_2[2] != *(float *)(param_1 + 0x5d8) || (param_2[1] != *(float *)(param_1 + 0x5d4)))
         )) goto LAB_1419bc887;
      bVar9 = param_2[3] == *(float *)(param_1 + 0x5dc);
    }
    else {
      lVar7 = 0;
      lVar8 = lVar7;
      if ((param_2[8] != 0.0) &&
         (plVar6 = *(longlong **)(param_2 + 6), lVar8 = 0, plVar6 != (longlong *)0x0)) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        lVar8 = *plVar6;
      }
      if ((*(int *)(param_1 + 0x5f0) != 0) &&
         (plVar6 = *(longlong **)(param_1 + 0x5e8), plVar6 != (longlong *)0x0)) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
        lVar7 = *plVar6;
      }
      bVar9 = lVar7 == lVar8;
    }
    if (bVar9) {
      return;
    }
  }
LAB_1419bc887:
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x5d0) = *param_2;
  *(float *)(param_1 + 0x5d4) = fVar1;
  *(float *)(param_1 + 0x5d8) = fVar2;
  *(float *)(param_1 + 0x5dc) = fVar3;
  *(undefined1 *)(param_1 + 0x5e0) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5e8,param_2 + 6);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bc8d0 FUN_1419bc8d0 body=97 status=ok
// SIG undefined FUN_1419bc8d0(void)

void FUN_1419bc8d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x628);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x628) = *param_2;
    *(undefined1 *)(param_1 + 0x62c) = *(undefined1 *)(param_2 + 1);
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x630,param_2 + 2);
    FUN_1418475e0(param_1,5);
  }
  return;
}



// FUNCTION 1419bc940 SetClearKeyboardFocusOnCommit body=35 status=ok
// SIG undefined SetClearKeyboardFocusOnCommit(void)

void SMultiLineEditableText::SetClearKeyboardFocusOnCommit(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x260) = *param_2;
  *(undefined1 *)(param_1 + 0x261) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268,param_2 + 8);
  return;
}



// FUNCTION 1419bc970 SetScrollOffset body=62 status=ok
// SIG undefined SetScrollOffset(void)

void STableViewBase::SetScrollOffset(longlong param_1,float param_2)

{
  if ((double)param_2 != *(double *)(param_1 + 0x330)) {
    *(double *)(param_1 + 0x330) = (double)param_2;
    TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 800);
    FUN_1419bb590(param_1);
    return;
  }
  return;
}



// FUNCTION 1419bc9b0 SetClearTextSelectionOnFocusLoss body=35 status=ok
// SIG undefined SetClearTextSelectionOnFocusLoss(void)

void SMultiLineEditableText::SetClearTextSelectionOnFocusLoss(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x230) = *param_2;
  *(undefined1 *)(param_1 + 0x231) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x238,param_2 + 8);
  return;
}



// FUNCTION 1419bc9e0 FUN_1419bc9e0 body=262 status=ok
// SIG undefined FUN_1419bc9e0(void)

void FUN_1419bc9e0(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x508) == 0) || (*(longlong **)(param_1 + 0x500) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((param_2[8] == 0.0) || (*(longlong **)(param_2 + 6) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 6) + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if (((*(char *)(param_1 + 0x4f8) != *(char *)(param_2 + 4)) ||
          (*param_2 != *(float *)(param_1 + 0x4e8))) ||
         ((param_2[1] != *(float *)(param_1 + 0x4ec) || (param_2[2] != *(float *)(param_1 + 0x4f0)))
         )) goto LAB_1419bcac3;
      bVar6 = param_2[3] == *(float *)(param_1 + 0x4f4);
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[8] != 0.0) &&
         (plVar3 = *(longlong **)(param_2 + 6), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x508) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x500), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419bcac3:
  FUN_1419a9a20((float *)(param_1 + 0x4e8),param_2);
  FUN_1418475e0(param_1,6);
  return;
}



// FUNCTION 1419bcaf0 FUN_1419bcaf0 body=276 status=ok
// SIG undefined FUN_1419bcaf0(void)

void FUN_1419bcaf0(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x4e0) == 0) || (*(longlong **)(param_1 + 0x4d8) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((param_2[6] == 0.0) || (*(longlong **)(param_2 + 4) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 4) + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((*(char *)(param_1 + 0x4d0) != *(char *)(param_2 + 2)) ||
         (*param_2 != *(float *)(param_1 + 0x4c8))) goto LAB_1419bcbc7;
      bVar6 = param_2[1] == *(float *)(param_1 + 0x4cc);
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[6] != 0.0) &&
         (plVar3 = *(longlong **)(param_2 + 4), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x4e0) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x4d8), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419bcbc7:
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)param_2;
  *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(param_2 + 2);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4d8,param_2 + 4);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bcc10 FUN_1419bcc10 body=12 status=ok
// SIG undefined FUN_1419bcc10(void)

void FUN_1419bcc10(longlong param_1)

{
  FUN_1419a43a0(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bcc20 SetText body=84 status=ok
// SIG undefined SetText(void)

void SRichTextBlock::SetText(longlong param_1,longlong param_2)

{
  FText::operator=(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x228,param_2 + 0x20);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bcc80 FUN_1419bcc80 body=162 status=ok
// SIG undefined FUN_1419bcc80(void)

void FUN_1419bcc80(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x18) != '\0') {
    if ((*(int *)(param_2 + 0x28) != 0) && (*(longlong **)(param_2 + 0x20) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x18))();
      if (cVar1 != '\0') goto LAB_1419bccd6;
    }
    uVar2 = TAttribute<FText>::Get(param_2);
    FUN_1419bcd30(param_1,uVar2);
    return;
  }
LAB_1419bccd6:
  FText::operator=(param_1 + 0x208,param_2);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x228,param_2 + 0x20);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bcd30 FUN_1419bcd30 body=341 status=ok
// SIG undefined FUN_1419bcd30(void)

void FUN_1419bcd30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(int *)(param_1 + 0x230) == 0) || (*(longlong **)(param_1 + 0x228) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x18))(), cVar5 == '\0')) {
    uVar6 = TAttribute<FText>::Get(param_1 + 0x208);
    puVar7 = (undefined8 *)FText::ToString(uVar6);
    iVar10 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 < 0x15) {
      puVar8 = (undefined8 *)FText::ToString(param_2);
      psVar9 = &DAT_143f3eda8;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar8;
      }
      if (*(int *)(puVar7 + 1) != 0) {
        psVar9 = (short *)*puVar7;
      }
      lVar12 = (longlong)puVar11 - (longlong)psVar9;
      do {
        sVar3 = *psVar9;
        sVar4 = *(short *)((longlong)psVar9 + lVar12);
        if (sVar3 != sVar4) break;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      if (sVar3 == sVar4) {
        return;
      }
    }
  }
  FText::FText(local_38,param_2);
  local_20 = 1;
  local_18 = 0;
  local_10 = 0;
  FText::operator=(param_1 + 0x208,local_38);
  *(undefined1 *)(param_1 + 0x220) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x228,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bce90 FUN_1419bce90 body=12 status=ok
// SIG undefined FUN_1419bce90(void)

void FUN_1419bce90(longlong param_1)

{
  FSlateEditableTextLayout::SetTextFlowDirection(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bcea0 SetTextFlowDirection body=67 status=ok
// SIG undefined SetTextFlowDirection(void)

void SRichTextBlock::SetTextFlowDirection(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x238);
  if (param_2[1] == '\0') {
    uVar2 = GetDefaultTextFlowDirection();
  }
  else {
    uVar2 = *param_2;
  }
  FTextLayout::SetTextFlowDirection(*puVar1,uVar2);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419bcef0 FUN_1419bcef0 body=12 status=ok
// SIG undefined FUN_1419bcef0(void)

void FUN_1419bcef0(longlong param_1)

{
  FSlateEditableTextLayout::SetTextShapingMethod(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bcf00 SetTextShapingMethod body=67 status=ok
// SIG undefined SetTextShapingMethod(void)

void SRichTextBlock::SetTextShapingMethod(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x238);
  if (param_2[1] == '\0') {
    uVar2 = GetDefaultTextShapingMethod();
  }
  else {
    uVar2 = *param_2;
  }
  FTextLayout::SetTextShapingMethod(*puVar1,uVar2);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419bcf50 FUN_1419bcf50 body=114 status=ok
// SIG undefined FUN_1419bcf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419bcf50(longlong param_1,longlong param_2)

{
  undefined1 auStack_4a8 [32];
  undefined1 local_488 [496];
  undefined8 local_298;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  if (param_2 == 0) {
    FUN_1419215b0(local_488);
    FSlateEditableTextLayout::SetTextStyle(*(undefined8 *)(param_1 + 0x210),local_298);
    FUN_141924260(local_488);
  }
  else {
    FSlateEditableTextLayout::SetTextStyle(*(undefined8 *)(param_1 + 0x210));
  }
  return;
}



// FUNCTION 1419bcfd0 SetTextStyle body=36 status=ok
// SIG undefined SetTextStyle(void)

void SRichTextBlock::SetTextStyle(longlong param_1)

{
  FTextBlockStyle::operator=(param_1 + 0x240);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419bd000 SetTextStyle body=136 status=ok
// SIG undefined SetTextStyle(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void STextBlock::SetTextStyle(longlong param_1,longlong param_2)

{
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [312];
  undefined8 local_270;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  if (param_2 == 0) {
    FArguments::FArguments(local_3a8);
    FTextBlockStyle::operator=(param_1 + 0x240,local_270);
    FUN_140691150(local_3a8);
  }
  else {
    FTextBlockStyle::operator=(param_1 + 0x240);
  }
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419bd090 SetVirtualKeyboardDismissAction body=57 status=ok
// SIG undefined SetVirtualKeyboardDismissAction(void)

void SMultiLineEditableText::SetVirtualKeyboardDismissAction(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x3c8) = *param_2;
  *(undefined1 *)(param_1 + 0x3c9) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,param_2 + 8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419bd0d0 FUN_1419bd0d0 body=172 status=ok
// SIG undefined FUN_1419bd0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419bd0d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(int *)(param_1 + 0x90) != 0) && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419bd120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))
                  (*(longlong **)(param_1 + 0x88),param_2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001419bd136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x38))(0,param_2);
      return;
    }
  }
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x70,&local_30,param_3,param_4,param_2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  return;
}



// FUNCTION 1419bd180 FUN_1419bd180 body=12 status=ok
// SIG undefined FUN_1419bd180(void)

void FUN_1419bd180(longlong param_1)

{
  FUN_1419a51c0(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bd190 FUN_1419bd190 body=58 status=ok
// SIG undefined FUN_1419bd190(void)

void FUN_1419bd190(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x450) = *param_2;
  *(undefined1 *)(param_1 + 0x454) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x458,param_2 + 2);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bd1d0 FUN_1419bd1d0 body=97 status=ok
// SIG undefined FUN_1419bd1d0(void)

void FUN_1419bd1d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x588);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x588) = *param_2;
    *(undefined1 *)(param_1 + 0x58c) = *(undefined1 *)(param_2 + 1);
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x590,param_2 + 2);
    FUN_1418475e0(param_1,5);
  }
  return;
}



// FUNCTION 1419bd240 FUN_1419bd240 body=12 status=ok
// SIG undefined FUN_1419bd240(void)

void FUN_1419bd240(longlong param_1)

{
  FUN_1419a5280(*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1419bd250 FUN_1419bd250 body=59 status=ok
// SIG undefined FUN_1419bd250(void)

void FUN_1419bd250(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x480) = *param_2;
  *(undefined1 *)(param_1 + 0x481) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x488,param_2 + 8);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bd290 FUN_1419bd290 body=261 status=ok
// SIG undefined FUN_1419bd290(void)

void FUN_1419bd290(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x5c8) == 0) || (*(longlong **)(param_1 + 0x5c0) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x18))(), cVar1 == '\0')) {
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
      if (*(char *)(param_1 + 0x5b9) != param_2[1]) goto LAB_1419bd35a;
      bVar6 = *(char *)(param_1 + 0x5b8) == *param_2;
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)(param_2 + 0x10) != 0) &&
         (plVar3 = *(longlong **)(param_2 + 8), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x5c8) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x5c0), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419bd35a:
  *(char *)(param_1 + 0x5b8) = *param_2;
  *(char *)(param_1 + 0x5b9) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5c0,param_2 + 8);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419bd3a0 FUN_1419bd3a0 body=105 status=ok
// SIG undefined FUN_1419bd3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1419bd3a0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x71) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(int *)(param_1 + 0x80) != 0) && (*(longlong **)(param_1 + 0x78) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x80) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))();
        *(char *)(param_1 + 0x70) = (char)uVar3;
        return uVar3;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined1 *)(param_1 + 0x70) = uVar2;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 0x70);
}



// FUNCTION 1419bd410 FUN_1419bd410 body=99 status=ok
// SIG undefined FUN_1419bd410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1419bd410(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x41) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x50) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
        *(char *)(param_1 + 0x40) = (char)uVar3;
        return uVar3;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined1 *)(param_1 + 0x40) = uVar2;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 0x40);
}



// FUNCTION 1419bd480 FUN_1419bd480 body=99 status=ok
// SIG undefined FUN_1419bd480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1419bd480(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(int *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x68) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
        *(char *)(param_1 + 0x58) = (char)uVar3;
        return uVar3;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined1 *)(param_1 + 0x58) = uVar2;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 0x58);
}



// FUNCTION 1419bd4f0 FUN_1419bd4f0 body=99 status=ok
// SIG undefined FUN_1419bd4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1419bd4f0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x38) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
        *(char *)(param_1 + 0x28) = (char)uVar3;
        return uVar3;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined1 *)(param_1 + 0x28) = uVar2;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 0x28);
}



// FUNCTION 1419bd560 FUN_1419bd560 body=497 status=ok
// SIG undefined FUN_1419bd560(void)

void FUN_1419bd560(longlong param_1,float *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float local_58 [20];
  
  fVar10 = (float)FUN_1419b2cb0();
  if (fVar10 <= 0.0) {
    if (((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x270) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x268);
      }
      uVar4 = (**(code **)(*plVar9 + 0x38))(plVar9);
      *(undefined4 *)(param_1 + 0x260) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_1 + 0x260);
  }
  else {
    plVar9 = (longlong *)0x0;
    if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar2 != '\0')) {
      plVar8 = plVar9;
      if (*(int *)(param_1 + 0x288) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x280);
      }
      uVar3 = (**(code **)(*plVar8 + 0x38))();
      *(undefined1 *)(param_1 + 0x278) = uVar3;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x278);
    fVar10 = *param_2;
    fVar11 = (float)SListPanel::GetItemPadding(param_1,param_2,uVar3);
    FUN_1419b3340(param_1,local_58,param_2,uVar3);
    if (((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x270) != 0) {
        plVar9 = *(longlong **)(param_1 + 0x268);
      }
      uVar4 = (**(code **)(*plVar9 + 0x38))(plVar9);
      *(undefined4 *)(param_1 + 0x260) = uVar4;
    }
    uVar1 = *(uint *)(param_1 + 0x260);
    if ((local_58[0] + fVar11 <= 0.0) || ((int)uVar1 < 1)) {
      iVar6 = 1;
    }
    else {
      fVar10 = fVar10 / (local_58[0] + fVar11);
      uVar7 = ~((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1);
      if ((int)uVar7 < 1) {
        uVar5 = 1;
      }
      else {
        uVar5 = uVar1;
        if ((int)uVar7 < (int)uVar1) {
          uVar5 = uVar7;
        }
      }
      iVar6 = -((int)ROUND(-0.5 - ((float)(int)uVar1 / (float)(int)uVar5 +
                                  (float)(int)uVar1 / (float)(int)uVar5)) >> 1);
    }
    *(int *)(param_1 + 0x298) = iVar6;
  }
  return;
}



// FUNCTION 1419bd770 FUN_1419bd770 body=805 status=ok
// SIG undefined FUN_1419bd770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419bd770(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *local_70;
  float local_68;
  float local_64;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_78 = param_1[0x60];
  if (local_78 != 0) {
    plVar4 = (longlong *)param_1[0x61];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_70 = plVar4;
    FUN_14182e310(param_1,&local_68,param_2,&local_78);
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (((*(char *)((longlong)param_1 + 0x41a) != '\0') ||
        (local_68 != *(float *)((longlong)param_1 + 0x36c))) ||
       (local_64 != *(float *)(param_1 + 0x6e))) {
      FGeometry::operator=((float *)((longlong)param_1 + 0x36c),&local_68);
      iVar6 = (**(code **)(*param_1 + 600))(param_1,&local_68);
      (**(code **)(*param_1 + 0x248))(param_1,&local_98,&local_68);
      param_1[0x69] = local_98;
      param_1[0x6a] = (longlong)dStack_90;
      *(undefined4 *)(param_1 + 0x6b) = local_88;
      *(undefined4 *)((longlong)param_1 + 0x35c) = uStack_84;
      *(undefined4 *)(param_1 + 0x6c) = uStack_80;
      *(undefined4 *)((longlong)param_1 + 0x364) = uStack_7c;
      iVar7 = (**(code **)(*param_1 + 0x250))(param_1);
      iVar8 = (**(code **)(*param_1 + 0x230))(param_1);
      if ((double)CONCAT44(uStack_84,local_88) < (double)(iVar7 / iVar8)) {
        if ((char)uStack_80 != '\0') {
          param_1[0x66] = local_98;
        }
      }
      else {
        param_1[0x66] = 0;
      }
      dVar3 = (double)param_1[0x66];
      uVar10 = SUB84(dVar3,0);
      uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= 0.0) {
        uVar10 = 0;
        uVar11 = 0;
      }
      if (dVar3 != (double)(float)(double)CONCAT44(uVar11,uVar10)) {
        param_1[0x66] = (longlong)(double)(float)(double)CONCAT44(uVar11,uVar10);
        TBaseDelegate<void,float>::ExecuteIfBound
                  (param_1 + 100,(longlong)iVar7 % (longlong)iVar8 & 0xffffffff);
        FUN_1419bb590(param_1);
      }
      iVar9 = (**(code **)(*param_1 + 0x230))(param_1);
      *(float *)(param_1[0x60] + 0x290) =
           (float)((double)param_1[0x66] / (double)iVar9) -
           (float)(int)((double)param_1[0x66] / (double)iVar9);
      if ((char)param_1[0x83] == '\0') {
        uVar10 = FOverscroll::GetOverscroll((longlong)param_1 + 0x414,(longlong)param_1 + 0x4c);
        *(undefined4 *)(param_1[0x60] + 0x294) = uVar10;
      }
      (**(code **)(*param_1 + 0x240))(param_1);
      if (iVar7 < 1) {
        fVar12 = 1.0;
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)((double)param_1[0x66] / (double)iVar7);
        if (1.0 <= (double)CONCAT44(uStack_84,local_88)) {
          fVar12 = (float)((double)CONCAT44(uStack_84,local_88) / (double)(iVar7 / iVar8));
        }
        else {
          dStack_90 = (double)*(float *)(param_2 + 4) / dStack_90;
          if (1.0 <= dStack_90) {
            dStack_90 = 1.0;
          }
          fVar12 = (float)dStack_90;
        }
      }
      FUN_1419a3f80(param_1[0x62],fVar13,fVar12);
      fVar12 = (float)FUN_141981180(param_1[0x62]);
      *(undefined1 *)((longlong)param_1 + 0x41a) = 0;
      *(bool *)(param_1 + 0x6d) = fVar12 < 0.0001;
      *(undefined1 *)(param_1[0x60] + 0x29c) = 0;
      if (iVar6 == 1) {
        FUN_1419bb590();
      }
      else {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1419bdaa0 FUN_1419bdaa0 body=162 status=ok
// SIG undefined FUN_1419bdaa0(void)

undefined4 FUN_1419bdaa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1419a3f80();
    local_20 = 0;
    local_18 = 0;
    lVar1 = *(longlong *)(param_1 + 0x108);
    *(undefined1 *)(lVar1 + 0x388) = *param_4;
    *(undefined1 *)(lVar1 + 0x389) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x390,&local_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    cVar2 = FUN_14198bef0(*(undefined8 *)(param_1 + 0x108));
    if (cVar2 == '\0') {
      return 0;
    }
  }
  puVar3 = (undefined4 *)
           FSlateEditableTextLayout::GetScrollOffset(*(undefined8 *)(param_1 + 8),local_res8);
  return *puVar3;
}



// FUNCTION 1419bdb50 FUN_1419bdb50 body=163 status=ok
// SIG undefined FUN_1419bdb50(void)

undefined4 FUN_1419bdb50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1419a3f80();
    local_20 = 0;
    local_18 = 0;
    lVar2 = *(longlong *)(param_1 + 0x118);
    *(undefined1 *)(lVar2 + 0x388) = *param_4;
    *(undefined1 *)(lVar2 + 0x389) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar2 + 0x390,&local_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    cVar1 = FUN_14198bef0(*(undefined8 *)(param_1 + 0x118));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  lVar2 = FSlateEditableTextLayout::GetScrollOffset(*(undefined8 *)(param_1 + 8),local_res8);
  return *(undefined4 *)(lVar2 + 4);
}



// FUNCTION 1419bdc00 FUN_1419bdc00 body=365 status=ok
// SIG undefined FUN_1419bdc00(void)

bool FUN_1419bdc00(longlong *param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = '\0';
  cVar1 = '\0';
  if (param_1[0x60] != 0) {
    fVar3 = (float)FUN_14189c9c0(DAT_1469f4590);
    if ((*(float *)((longlong)param_1 + 0x33c) <= fVar3 &&
         fVar3 != *(float *)((longlong)param_1 + 0x33c)) ||
       ((cVar1 = FUN_14198bef0(param_1[0x62]), cVar1 == '\0' && ((char)param_1[0x83] != '\0')))) {
      FInertialScrollManager::UpdateScrollVelocity(param_1 + 0x7c,param_3);
      fVar3 = *(float *)(param_1 + 0x7e);
      if (fVar3 != 0.0) {
        cVar1 = FUN_1419aacb0(param_1,fVar3);
        if (cVar1 == '\0') {
          FInertialScrollManager::ClearScrollVelocity(param_1 + 0x7c);
        }
        else {
          cVar2 = '\x01';
          (**(code **)(*param_1 + 0x218))
                    (param_1,(longlong)param_1 + 0x4c,fVar3 * param_3,(char)param_1[0x83]);
        }
      }
      cVar1 = cVar2;
      if ((char)param_1[0x83] == '\0') {
        fVar3 = (float)FOverscroll::GetOverscroll
                                 ((longlong)param_1 + 0x414,(longlong)param_1 + 0x4c);
        if (fVar3 != 0.0) {
          cVar2 = '\x01';
          FUN_1419bb590(param_1);
        }
        FOverscroll::UpdateOverscroll((longlong)param_1 + 0x414,param_3);
        cVar1 = cVar2;
      }
    }
    else {
      cVar2 = FUN_1419aacb0(param_1,(int)param_1[0x68]);
      cVar1 = '\x01';
      if (cVar2 != '\0') {
        FInertialScrollManager::AddScrollSample(param_1 + 0x7c,(int)param_1[0x68],param_2);
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(char *)(param_1 + 0x82) = cVar1;
  return cVar1 != '\0';
}



// FUNCTION 1419bdd70 FUN_1419bdd70 body=996 status=ok
// SIG undefined FUN_1419bdd70(void)

void FUN_1419bdd70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  longlong local_88;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong *local_48;
  
  puVar6 = (undefined8 *)FText::ToString(param_2);
  lVar13 = *param_1;
  iVar15 = 0;
  local_70 = 0;
  local_68 = 0;
  iVar12 = *(int *)(puVar6 + 1) + -1;
  if (*(int *)(puVar6 + 1) == 0) {
    iVar12 = iVar15;
  }
  if (0 < *(int *)(lVar13 + 0x20)) {
    local_88 = 0;
    do {
      iVar16 = 0;
      plVar14 = (longlong *)(*(longlong *)(lVar13 + 0x18) + local_88);
      iVar5 = *(int *)(*plVar14 + 8);
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      if (0 < iVar4) {
        do {
          if (*(int *)(puVar6 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar6;
          }
          iVar5 = FUN_141592950(*plVar14,puVar8,1,0,iVar16);
          if (iVar5 == -1) break;
          iVar3 = (int)local_68;
          iVar16 = iVar12 + iVar5;
          if ((((int)local_68 < 1) ||
              (lVar9 = (longlong)((int)local_68 + -1) * 0x20, *(int *)(lVar9 + local_70) != iVar15))
             || (*(int *)(lVar9 + 8 + local_70) != iVar5)) {
            plVar7 = (longlong *)param_1[5];
            lVar9 = param_1[4];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            iVar1 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,iVar1);
            if (local_68._4_4_ < iVar1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&local_70,iVar3);
            }
            piVar10 = (int *)((longlong)iVar3 * 0x20 + local_70);
            *piVar10 = iVar15;
            *(ulonglong *)(piVar10 + 1) = CONCAT44(iVar16,iVar5);
            *(longlong *)(piVar10 + 4) = lVar9;
            *(longlong **)(piVar10 + 6) = plVar7;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar7 + 1;
                lVar9 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                plVar11 = plVar7;
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar10 = (int *)((longlong)plVar7 + 0xc);
                  iVar5 = *piVar10;
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    lVar9 = *plVar7;
                    goto LAB_1419bdff1;
                  }
                }
                goto LAB_1419bdff9;
              }
            }
          }
          else {
            plVar11 = (longlong *)param_1[5];
            lVar9 = param_1[4];
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            local_5c = CONCAT44(iVar16,*(undefined4 *)
                                        ((longlong)((int)local_68 + -1) * 0x20 + 4 + local_70));
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            piVar10 = (int *)((longlong)((int)local_68 + -1) * 0x20 + local_70);
            *piVar10 = iVar15;
            *(undefined8 *)(piVar10 + 1) = local_5c;
            local_50 = *(undefined8 *)(piVar10 + 4);
            *(longlong *)(piVar10 + 4) = lVar9;
            plVar7 = *(longlong **)(piVar10 + 6);
            *(longlong **)(piVar10 + 6) = plVar11;
            local_60 = iVar15;
            local_48 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar10 = (int *)((longlong)plVar7 + 0xc);
                iVar5 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  lVar9 = *plVar7;
LAB_1419bdff1:
                  (**(code **)(lVar9 + 8))(plVar7,1);
                }
              }
            }
LAB_1419bdff9:
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar11 + 1;
              lVar9 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar10 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
              LOCK();
              plVar7 = plVar11 + 1;
              lVar9 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar10 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
        } while (iVar16 < iVar4);
      }
      local_88 = local_88 + 0x70;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(lVar13 + 0x20));
    lVar13 = *param_1;
  }
  FUN_141959680(lVar13,&local_70);
  if ((int)local_68 != 0) {
    plVar14 = (longlong *)(local_70 + 0x18);
    iVar12 = (int)local_68;
    do {
      plVar7 = (longlong *)*plVar14;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar7 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar10 = (int *)((longlong)plVar7 + 0xc);
          iVar15 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar14 = plVar14 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419be160 UpdateTextLayout body=203 status=ok
// SIG undefined UpdateTextLayout(void)

void FSlateTextBlockLayout::UpdateTextLayout(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  (**(code **)(*(longlong *)param_1[2] + 0x28))();
  FUN_14192a460(*param_1);
  FUN_14192a360(*param_1);
  FUN_14192a590(*param_1);
  (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],param_2,*param_1);
  puVar5 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_28);
  if (param_1 + 10 != puVar5) {
    param_1[10] = *puVar5;
    *puVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,puVar5 + 1);
  }
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar5 + 2);
  *(undefined2 *)((longlong)param_1 + 0x62) = *(undefined2 *)((longlong)puVar5 + 0x12);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)puVar5 + 0x14);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 1419be230 FUN_1419be230 body=47 status=ok
// SIG undefined FUN_1419be230(void)

longlong FUN_1419be230(void)

{
  if (DAT_1469f5850 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
  }
  return DAT_1469f5850;
}



// FUNCTION 1419be260 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UButtonWidgetStyle::StaticClass(void)

{
  if (DAT_1469f5790 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"ButtonWidgetStyle",&DAT_1469f5790,FUN_140447710,0x2a8,
                  0x10000000,0,L"Engine",FUN_1419beba0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f5790;
}



// FUNCTION 1419be330 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UCheckBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1469f57a0 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"CheckBoxWidgetStyle",&DAT_1469f57a0,FUN_140447710,0x5b0,
                  0x10000000,0,L"Engine",FUN_1419bebf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f57a0;
}



// FUNCTION 1419be3f0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UComboBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1469f57b0 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"ComboBoxWidgetStyle",&DAT_1469f57b0,FUN_140447710,0x408,
                  0x10000000,0,L"Engine",FUN_1419bec40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f57b0;
}



// FUNCTION 1419be4b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UComboButtonWidgetStyle::StaticClass(void)

{
  if (DAT_1469f57c0 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"ComboButtonWidgetStyle",&DAT_1469f57c0,FUN_140447710,0x3d0,
                  0x10000000,0,L"Engine",FUN_1419bec90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f57c0;
}



// FUNCTION 1419be570 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableTextBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1469f57d0 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"EditableTextBoxWidgetStyle",&DAT_1469f57d0,FUN_140447710,0x820,
                  0x10000000,0,L"Engine",FUN_1419bece0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f57d0;
}



// FUNCTION 1419be630 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableTextWidgetStyle::StaticClass(void)

{
  if (DAT_1469f57e0 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"EditableTextWidgetStyle",&DAT_1469f57e0,FUN_140447710,0x248,
                  0x10000000,0,L"Engine",FUN_1419bed30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f57e0;
}



// FUNCTION 1419be6f0 FUN_1419be6f0 body=53 status=ok
// SIG undefined FUN_1419be6f0(void)

void FUN_1419be6f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144d7abd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1419be730 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UProgressWidgetStyle::StaticClass(void)

{
  if (DAT_1469f5828 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"ProgressWidgetStyle",&DAT_1469f5828,FUN_140447710,0x1d0,
                  0x10000000,0,L"Engine",FUN_1419bed80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f5828;
}



// FUNCTION 1419be7e0 FUN_1419be7e0 body=162 status=ok
// SIG undefined FUN_1419be7e0(void)

longlong FUN_1419be7e0(void)

{
  if (DAT_1469f58a8 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"TextBlockWidgetStyle",&DAT_1469f58a8,FUN_140447710,0x210,
                  0x10000000,0,L"Engine",FUN_1419beee0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f58a8;
}



// FUNCTION 1419be8a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UScrollBarWidgetStyle::StaticClass(void)

{
  if (DAT_1469f5838 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"ScrollBarWidgetStyle",&DAT_1469f5838,FUN_140447710,0x500,
                  0x10000000,0,L"Engine",FUN_1419bedd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f5838;
}



// FUNCTION 1419be970 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UScrollBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1469f5848 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"ScrollBoxWidgetStyle",&DAT_1469f5848,FUN_140447710,600,
                  0x10000000,0,L"Engine",FUN_1419bee20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f5848;
}



// FUNCTION 1419bea30 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USlateSettings::GetPrivateStaticClass(void)

{
  if (DAT_1469f5860 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"SlateSettings",&DAT_1469f5860,FUN_140447710,0x30,0x10000006,0,
                  L"Engine",&LAB_1419bee70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469f5860;
}



// FUNCTION 1419beae0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USpinBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1469f5870 == 0) {
    FUN_14171ccd0(L"/Script/Slate",L"SpinBoxWidgetStyle",&DAT_1469f5870,FUN_140447710,0x318,
                  0x10000000,0,L"Engine",FUN_1419bee90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USlateWidgetStyleContainerBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1469f5870;
}



// FUNCTION 1419beba0 FUN_1419beba0 body=66 status=ok
// SIG undefined FUN_1419beba0(void)

void FUN_1419beba0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d79c50;
    puVar1[5] = &PTR_LAB_144d79ec8;
    FUN_1417e8800(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bebf0 FUN_1419bebf0 body=66 status=ok
// SIG undefined FUN_1419bebf0(void)

void FUN_1419bebf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d79f00;
    puVar1[5] = &PTR_LAB_144d7a178;
    FCheckBoxStyle::FCheckBoxStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bec40 FUN_1419bec40 body=66 status=ok
// SIG undefined FUN_1419bec40(void)

void FUN_1419bec40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7a190;
    puVar1[5] = &PTR_LAB_144d7a408;
    FComboBoxStyle::FComboBoxStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bec90 FUN_1419bec90 body=66 status=ok
// SIG undefined FUN_1419bec90(void)

void FUN_1419bec90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7a420;
    puVar1[5] = &PTR_LAB_144d7a698;
    FComboButtonStyle::FComboButtonStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bece0 FUN_1419bece0 body=66 status=ok
// SIG undefined FUN_1419bece0(void)

void FUN_1419bece0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7a6b0;
    puVar1[5] = &PTR_LAB_144d7a928;
    FEditableTextBoxStyle::FEditableTextBoxStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bed30 FUN_1419bed30 body=66 status=ok
// SIG undefined FUN_1419bed30(void)

void FUN_1419bed30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7a940;
    puVar1[5] = &PTR_LAB_144d7abb8;
    FEditableTextStyle::FEditableTextStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bed80 FUN_1419bed80 body=66 status=ok
// SIG undefined FUN_1419bed80(void)

void FUN_1419bed80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7ad90;
    puVar1[5] = &PTR_LAB_144d7b008;
    FProgressBarStyle::FProgressBarStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bedd0 FUN_1419bedd0 body=66 status=ok
// SIG undefined FUN_1419bedd0(void)

void FUN_1419bedd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7b020;
    puVar1[5] = &PTR_LAB_144d7b298;
    FUN_1417ec950(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bee20 FUN_1419bee20 body=66 status=ok
// SIG undefined FUN_1419bee20(void)

void FUN_1419bee20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7b2b0;
    puVar1[5] = &PTR_LAB_144d7b528;
    FScrollBoxStyle::FScrollBoxStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419bee90 FUN_1419bee90 body=66 status=ok
// SIG undefined FUN_1419bee90(void)

void FUN_1419bee90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d7b568;
    puVar1[5] = &PTR_LAB_144d7b7e0;
    FSpinBoxStyle::FSpinBoxStyle(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419beee0 FUN_1419beee0 body=66 status=ok
// SIG undefined FUN_1419beee0(void)

void FUN_1419beee0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144d7b9a0;
    puVar1[5] = &PTR_LAB_144d7bc18;
    FUN_1417f2e90(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1419befb0 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UButtonWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x1d0);
  FSlateBrush::~FSlateBrush(param_1 + 0x148);
  FSlateBrush::~FSlateBrush(param_1 + 0xc0);
  FSlateBrush::~FSlateBrush(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144042b80;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a8);
  }
  return param_1;
}



// FUNCTION 1419bf040 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCheckBoxWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FCheckBoxStyle::~FCheckBoxStyle(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 1419bf090 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UComboBoxWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__144d4f4c0;
  FComboButtonStyle::~FComboButtonStyle(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144042b80;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x408);
  }
  return param_1;
}



// FUNCTION 1419bf100 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UComboButtonWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FComboButtonStyle::~FComboButtonStyle(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 1419bf150 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEditableTextBoxWidgetStyle::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  FUN_1417f6640(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x820);
  }
  return param_1;
}



// FUNCTION 1419bf1a0 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEditableTextWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1417f67a0(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 1419bf1f0 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UProgressWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__144d4f538;
  FSlateBrush::~FSlateBrush(param_1 + 0x148);
  FSlateBrush::~FSlateBrush(param_1 + 0xc0);
  FSlateBrush::~FSlateBrush(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144042b80;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1419bf270 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UScrollBarWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FScrollBarStyle::~FScrollBarStyle(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 1419bf2c0 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UScrollBoxWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__144d4f640;
  FSlateBrush::~FSlateBrush(param_1 + 0x1d0);
  FSlateBrush::~FSlateBrush(param_1 + 0x148);
  FSlateBrush::~FSlateBrush(param_1 + 0xc0);
  FSlateBrush::~FSlateBrush(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144042b80;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 1419bf350 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USpinBoxWidgetStyle::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FSpinBoxStyle::~FSpinBoxStyle(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 1419bf3a0 FUN_1419bf3a0 body=75 status=ok
// SIG undefined FUN_1419bf3a0(void)

longlong FUN_1419bf3a0(longlong param_1,ulonglong param_2)

{
  FUN_140691580(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 1419bf420 FUN_1419bf420 body=318 status=ok
// SIG undefined FUN_1419bf420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1419bf420(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  uVar9 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar11 = (uint *)(param_3 + 0x18);
    local_28 = uVar9;
    do {
      *param_2 = *(undefined8 *)(puVar11 + -6);
      puVar1 = param_2 + 1;
      plVar6 = *(longlong **)(puVar11 + -2);
      uVar7 = *(undefined8 *)(puVar11 + -4);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_48 = uVar7;
      plStack_40 = plVar6;
      if (&local_48 != puVar1) {
        local_48 = *puVar1;
        plStack_40 = (longlong *)param_2[2];
        *puVar1 = uVar7;
        param_2[2] = plVar6;
        local_38 = uVar7;
        plStack_30 = plVar6;
      }
      plVar6 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) ^ (*(uint *)(param_2 + 3) ^ *puVar11) & 1;
      uVar10 = (*puVar11 ^ *(uint *)(param_2 + 3)) & 2 ^ *(uint *)(param_2 + 3);
      *(uint *)(param_2 + 3) = uVar10;
      uVar10 = (uVar10 ^ *puVar11) & 4 ^ uVar10;
      *(uint *)(param_2 + 3) = uVar10;
      uVar5 = *puVar11;
      puVar11 = puVar11 + 8;
      uVar10 = (uVar10 ^ uVar5) & 8 ^ uVar10;
      uVar9 = (ulonglong)uVar10;
      *(uint *)(param_2 + 3) = uVar10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 1419bf560 EDescendantScrollDestination_StaticEnum body=85 status=ok
// SIG undefined EDescendantScrollDestination_StaticEnum(void)

void EDescendantScrollDestination_StaticEnum(void)

{
  if (DAT_1469f5720 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5720 = GetStaticEnum(FUN_1419bfe50,DAT_1469f5850,L"EDescendantScrollDestination");
  }
  return;
}



// FUNCTION 1419bf5c0 EListItemAlignment_StaticEnum body=85 status=ok
// SIG undefined EListItemAlignment_StaticEnum(void)

void EListItemAlignment_StaticEnum(void)

{
  if (DAT_1469f5728 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5728 = GetStaticEnum(FUN_1419bfe80,DAT_1469f5850,L"EListItemAlignment");
  }
  return;
}



// FUNCTION 1419bf620 EMultipleKeyBindingIndex_StaticEnum body=85 status=ok
// SIG undefined EMultipleKeyBindingIndex_StaticEnum(void)

void EMultipleKeyBindingIndex_StaticEnum(void)

{
  if (DAT_1469f5748 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5748 = GetStaticEnum(FUN_1419bfeb0,DAT_1469f5850,L"EMultipleKeyBindingIndex");
  }
  return;
}



// FUNCTION 1419bf680 EProgressBarFillType_StaticEnum body=85 status=ok
// SIG undefined EProgressBarFillType_StaticEnum(void)

void EProgressBarFillType_StaticEnum(void)

{
  if (DAT_1469f5750 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5750 = GetStaticEnum(FUN_1419bfee0,DAT_1469f5850,L"EProgressBarFillType");
  }
  return;
}



// FUNCTION 1419bf6e0 ESelectionMode_StaticEnum body=85 status=ok
// SIG undefined ESelectionMode_StaticEnum(void)

void ESelectionMode_StaticEnum(void)

{
  if (DAT_1469f5718 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5718 = GetStaticEnum(FUN_1419bff10,DAT_1469f5850,L"ESelectionMode");
  }
  return;
}



// FUNCTION 1419bf740 EStretchDirection_StaticEnum body=85 status=ok
// SIG undefined EStretchDirection_StaticEnum(void)

void EStretchDirection_StaticEnum(void)

{
  if (DAT_1469f5700 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5700 = GetStaticEnum(FUN_1419bff70,DAT_1469f5850,L"EStretchDirection");
  }
  return;
}



// FUNCTION 1419bf7a0 EStretch_StaticEnum body=85 status=ok
// SIG undefined EStretch_StaticEnum(void)

void EStretch_StaticEnum(void)

{
  if (DAT_1469f56f8 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f56f8 = GetStaticEnum(FUN_1419bff40,DAT_1469f5850,L"EStretch");
  }
  return;
}



// FUNCTION 1419bf800 ETableViewMode_StaticEnum body=85 status=ok
// SIG undefined ETableViewMode_StaticEnum(void)

void ETableViewMode_StaticEnum(void)

{
  if (DAT_1469f5710 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5710 = GetStaticEnum(FUN_1419bffa0,DAT_1469f5850,L"ETableViewMode");
  }
  return;
}



// FUNCTION 1419bf860 ETextFlowDirection_StaticEnum body=85 status=ok
// SIG undefined ETextFlowDirection_StaticEnum(void)

void ETextFlowDirection_StaticEnum(void)

{
  if (DAT_1469f5730 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5730 = GetStaticEnum(FUN_1419bffd0,DAT_1469f5850,L"ETextFlowDirection");
  }
  return;
}



// FUNCTION 1419bf8c0 ETextJustify_StaticEnum body=85 status=ok
// SIG undefined ETextJustify_StaticEnum(void)

void ETextJustify_StaticEnum(void)

{
  if (DAT_1469f5740 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5740 = GetStaticEnum(FUN_1419c0000,DAT_1469f5850,L"ETextJustify");
  }
  return;
}



// FUNCTION 1419bf920 ETextWrappingPolicy_StaticEnum body=85 status=ok
// SIG undefined ETextWrappingPolicy_StaticEnum(void)

void ETextWrappingPolicy_StaticEnum(void)

{
  if (DAT_1469f5738 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5738 = GetStaticEnum(FUN_1419c0030,DAT_1469f5850,L"ETextWrappingPolicy");
  }
  return;
}



// FUNCTION 1419bf980 EVirtualKeyboardDismissAction_StaticEnum body=85 status=ok
// SIG undefined EVirtualKeyboardDismissAction_StaticEnum(void)

void EVirtualKeyboardDismissAction_StaticEnum(void)

{
  if (DAT_1469f5708 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    DAT_1469f5708 = GetStaticEnum(FUN_1419c0060,DAT_1469f5850,L"EVirtualKeyboardDismissAction");
  }
  return;
}



// FUNCTION 1419bf9e0 GetAddress body=5 status=ok
// SIG undefined GetAddress(void)

longlong UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
         GetAddress(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1419bf9f0 FUN_1419bf9f0 body=44 status=ok
// SIG undefined FUN_1419bf9f0(void)

uint FUN_1419bf9f0(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return (int)((ulonglong)*param_2 >> 0x20) + (int)*param_2 ^ *(uint *)(param_2 + 3) & 1;
}



// FUNCTION 1419bfa20 Get_Z_Construct_UScriptStruct_FAnchors_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnchors_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnchors_CRC(void)

{
  return 0xba0011a3;
}



// FUNCTION 1419bfa30 Get_Z_Construct_UScriptStruct_FInputChord_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputChord_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputChord_CRC(void)

{
  return 0x583aeff8;
}



// FUNCTION 1419bfa40 Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_CRC(void)

{
  return 0xc33ff861;
}



// FUNCTION 1419bfa90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnchors::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1469f5758 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    lVar1 = DAT_1469f5850;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnchors_CRC();
    DAT_1469f5758 = GetStaticStruct(FUN_1419c0090,lVar1,L"Anchors",0x10,uVar2);
  }
  return;
}



// FUNCTION 1419bfb10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FInputChord::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1469f57e8 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    lVar1 = DAT_1469f5850;
    uVar2 = Get_Z_Construct_UScriptStruct_FInputChord_CRC();
    DAT_1469f57e8 = GetStaticStruct(FUN_1419c00c0,lVar1,L"InputChord",0x20,uVar2);
  }
  return;
}



// FUNCTION 1419bfb90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVirtualKeyboardOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1469f5810 == 0) {
    if (DAT_1469f5850 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469f5850,&PTR_s__Script_Slate_144d7b540);
    }
    lVar1 = DAT_1469f5850;
    uVar2 = Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_CRC();
    DAT_1469f5810 = GetStaticStruct(FUN_1419c00f0,lVar1,L"VirtualKeyboardOptions",1,uVar2);
  }
  return;
}



// FUNCTION 1419bfc10 FUN_1419bfc10 body=47 status=ok
// SIG undefined FUN_1419bfc10(void)

longlong FUN_1419bfc10(void)

{
  if (DAT_1469f5788 == 0) {
    FUN_141786440(&DAT_1469f5788,&PTR_StaticClass_144d77fd0);
  }
  return DAT_1469f5788;
}



// FUNCTION 1419bfc40 FUN_1419bfc40 body=47 status=ok
// SIG undefined FUN_1419bfc40(void)

longlong FUN_1419bfc40(void)

{
  if (DAT_1469f5798 == 0) {
    FUN_141786440(&DAT_1469f5798,&PTR_StaticClass_144d780f0);
  }
  return DAT_1469f5798;
}



// FUNCTION 1419bfc70 FUN_1419bfc70 body=47 status=ok
// SIG undefined FUN_1419bfc70(void)

longlong FUN_1419bfc70(void)

{
  if (DAT_1469f57a8 == 0) {
    FUN_141786440(&DAT_1469f57a8,&PTR_StaticClass_144d78220);
  }
  return DAT_1469f57a8;
}



// FUNCTION 1419bfca0 FUN_1419bfca0 body=47 status=ok
// SIG undefined FUN_1419bfca0(void)

longlong FUN_1419bfca0(void)

{
  if (DAT_1469f57b8 == 0) {
    FUN_141786440(&DAT_1469f57b8,&PTR_StaticClass_144d78360);
  }
  return DAT_1469f57b8;
}



// FUNCTION 1419bfcd0 FUN_1419bfcd0 body=47 status=ok
// SIG undefined FUN_1419bfcd0(void)

longlong FUN_1419bfcd0(void)

{
  if (DAT_1469f57c8 == 0) {
    FUN_141786440(&DAT_1469f57c8,&PTR_StaticClass_144d78480);
  }
  return DAT_1469f57c8;
}



// FUNCTION 1419bfd00 FUN_1419bfd00 body=47 status=ok
// SIG undefined FUN_1419bfd00(void)

longlong FUN_1419bfd00(void)

{
  if (DAT_1469f57d8 == 0) {
    FUN_141786440(&DAT_1469f57d8,&PTR_StaticClass_144d785d0);
  }
  return DAT_1469f57d8;
}



// FUNCTION 1419bfd30 FUN_1419bfd30 body=47 status=ok
// SIG undefined FUN_1419bfd30(void)

longlong FUN_1419bfd30(void)

{
  if (DAT_1469f5820 == 0) {
    FUN_141786440(&DAT_1469f5820,&PTR_StaticClass_144d78ed0);
  }
  return DAT_1469f5820;
}



// FUNCTION 1419bfd60 FUN_1419bfd60 body=47 status=ok
// SIG undefined FUN_1419bfd60(void)

longlong FUN_1419bfd60(void)

{
  if (DAT_1469f5830 == 0) {
    FUN_141786440(&DAT_1469f5830,&PTR_StaticClass_144d79120);
  }
  return DAT_1469f5830;
}



// FUNCTION 1419bfd90 FUN_1419bfd90 body=47 status=ok
// SIG undefined FUN_1419bfd90(void)

longlong FUN_1419bfd90(void)

{
  if (DAT_1469f5840 == 0) {
    FUN_141786440(&DAT_1469f5840,&PTR_StaticClass_144d79660);
  }
  return DAT_1469f5840;
}



// FUNCTION 1419bfdc0 FUN_1419bfdc0 body=47 status=ok
// SIG undefined FUN_1419bfdc0(void)

longlong FUN_1419bfdc0(void)

{
  if (DAT_1469f5858 == 0) {
    FUN_141786440(&DAT_1469f5858,&PTR_GetPrivateStaticClass_144d797a0);
  }
  return DAT_1469f5858;
}



// FUNCTION 1419bfdf0 FUN_1419bfdf0 body=47 status=ok
// SIG undefined FUN_1419bfdf0(void)

longlong FUN_1419bfdf0(void)

{
  if (DAT_1469f5868 == 0) {
    FUN_141786440(&DAT_1469f5868,&PTR_StaticClass_144d798e0);
  }
  return DAT_1469f5868;
}



// FUNCTION 1419bfe20 FUN_1419bfe20 body=47 status=ok
// SIG undefined FUN_1419bfe20(void)

longlong FUN_1419bfe20(void)

{
  if (DAT_1469f58a0 == 0) {
    FUN_141786440(&DAT_1469f58a0,&PTR_FUN_144d78ff0);
  }
  return DAT_1469f58a0;
}



// FUNCTION 1419bfe50 FUN_1419bfe50 body=47 status=ok
// SIG undefined FUN_1419bfe50(void)

longlong FUN_1419bfe50(void)

{
  if (DAT_1469f5890 == 0) {
    FUN_1417866a0(&DAT_1469f5890,&PTR_FUN_1464c08d0);
  }
  return DAT_1469f5890;
}



// FUNCTION 1419bfe80 FUN_1419bfe80 body=47 status=ok
// SIG undefined FUN_1419bfe80(void)

longlong FUN_1419bfe80(void)

{
  if (DAT_1469f5898 == 0) {
    FUN_1417866a0(&DAT_1469f5898,&PTR_FUN_1464c0920);
  }
  return DAT_1469f5898;
}



// FUNCTION 1419bfeb0 FUN_1419bfeb0 body=47 status=ok
// SIG undefined FUN_1419bfeb0(void)

longlong FUN_1419bfeb0(void)

{
  if (DAT_1469f58c8 == 0) {
    FUN_1417866a0(&DAT_1469f58c8,&PTR_FUN_1464c0a60);
  }
  return DAT_1469f58c8;
}



// FUNCTION 1419bfee0 FUN_1419bfee0 body=47 status=ok
// SIG undefined FUN_1419bfee0(void)

longlong FUN_1419bfee0(void)

{
  if (DAT_1469f5878 == 0) {
    FUN_1417866a0(&DAT_1469f5878,&PTR_FUN_1464c07e0);
  }
  return DAT_1469f5878;
}



// FUNCTION 1419bff10 FUN_1419bff10 body=47 status=ok
// SIG undefined FUN_1419bff10(void)

longlong FUN_1419bff10(void)

{
  if (DAT_1469f5808 == 0) {
    FUN_1417866a0(&DAT_1469f5808,&PTR_FUN_1464c0790);
  }
  return DAT_1469f5808;
}



// FUNCTION 1419bff40 FUN_1419bff40 body=47 status=ok
// SIG undefined FUN_1419bff40(void)

longlong FUN_1419bff40(void)

{
  if (DAT_1469f5880 == 0) {
    FUN_1417866a0(&DAT_1469f5880,&PTR_FUN_1464c0830);
  }
  return DAT_1469f5880;
}



// FUNCTION 1419bff70 FUN_1419bff70 body=47 status=ok
// SIG undefined FUN_1419bff70(void)

longlong FUN_1419bff70(void)

{
  if (DAT_1469f5888 == 0) {
    FUN_1417866a0(&DAT_1469f5888,&PTR_FUN_1464c0880);
  }
  return DAT_1469f5888;
}



// FUNCTION 1419bffa0 FUN_1419bffa0 body=47 status=ok
// SIG undefined FUN_1419bffa0(void)

longlong FUN_1419bffa0(void)

{
  if (DAT_1469f5800 == 0) {
    FUN_1417866a0(&DAT_1469f5800,&PTR_FUN_1464c0740);
  }
  return DAT_1469f5800;
}



// FUNCTION 1419bffd0 FUN_1419bffd0 body=47 status=ok
// SIG undefined FUN_1419bffd0(void)

longlong FUN_1419bffd0(void)

{
  if (DAT_1469f58b0 == 0) {
    FUN_1417866a0(&DAT_1469f58b0,&PTR_FUN_1464c0970);
  }
  return DAT_1469f58b0;
}



// FUNCTION 1419c0000 FUN_1419c0000 body=47 status=ok
// SIG undefined FUN_1419c0000(void)

longlong FUN_1419c0000(void)

{
  if (DAT_1469f58c0 == 0) {
    FUN_1417866a0(&DAT_1469f58c0,&PTR_FUN_1464c0a10);
  }
  return DAT_1469f58c0;
}



// FUNCTION 1419c0030 FUN_1419c0030 body=47 status=ok
// SIG undefined FUN_1419c0030(void)

longlong FUN_1419c0030(void)

{
  if (DAT_1469f58b8 == 0) {
    FUN_1417866a0(&DAT_1469f58b8,&PTR_FUN_1464c09c0);
  }
  return DAT_1469f58b8;
}



// FUNCTION 1419c0060 FUN_1419c0060 body=47 status=ok
// SIG undefined FUN_1419c0060(void)

longlong FUN_1419c0060(void)

{
  if (DAT_1469f57f8 == 0) {
    FUN_1417866a0(&DAT_1469f57f8,&PTR_FUN_1464c06f0);
  }
  return DAT_1469f57f8;
}



// FUNCTION 1419c0090 FUN_1419c0090 body=47 status=ok
// SIG undefined FUN_1419c0090(void)

longlong FUN_1419c0090(void)

{
  if (DAT_1469f5780 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469f5780,&PTR_FUN_1464bff70);
  }
  return DAT_1469f5780;
}



// FUNCTION 1419c00c0 FUN_1419c00c0 body=47 status=ok
// SIG undefined FUN_1419c00c0(void)

longlong FUN_1419c00c0(void)

{
  if (DAT_1469f57f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469f57f0,&PTR_FUN_1464c0450);
  }
  return DAT_1469f57f0;
}



// FUNCTION 1419c00f0 FUN_1419c00f0 body=47 status=ok
// SIG undefined FUN_1419c00f0(void)

longlong FUN_1419c00f0(void)

{
  if (DAT_1469f5818 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469f5818,&PTR_FUN_1464c0510);
  }
  return DAT_1469f5818;
}



// FUNCTION 1419c0120 NewIntrusiveReferenceController<SExpandableArea> body=175 status=ok
// SIG undefined NewIntrusiveReferenceController<SExpandableArea>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SExpandableArea>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x398);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d81df8;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x388);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_144d81b58;
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
      FCurveSequence::FCurveSequence(puVar1 + 0x62);
      puVar1[0x6d] = 0;
      *(undefined4 *)(puVar1 + 0x6e) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419c01d0 FUN_1419c01d0 body=1024 status=ok
// SIG undefined FUN_1419c01d0(void)

longlong FUN_1419c01d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [56];
  longlong *local_48;
  
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
  puVar7 = (undefined8 *)FName::FName(local_res8,"ExpandableArea",1);
  local_res10 = *puVar7;
  local_res18 = local_res10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb1a8);
  if (lVar8 == 0) {
    lVar8 = FUN_141834d00();
  }
  *(longlong *)(param_1 + 0x108) = lVar8;
  uVar6 = DAT_1464aa6cc;
  uVar5 = DAT_1464aa6c8;
  uVar4 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x110) = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0x114) = uVar4;
  *(undefined4 *)(param_1 + 0x118) = uVar5;
  *(undefined4 *)(param_1 + 0x11c) = uVar6;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x138) = 1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  plVar2 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res20,"ExpandableArea.Border",1);
  uVar9 = (**(code **)(lVar8 + 0x40))(plVar2,*puVar7,0);
  *(undefined8 *)(param_1 + 0x150) = uVar9;
  *(undefined8 *)(param_1 + 0x158) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x164) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = DAT_1469eb218;
  lVar8 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x1a8) = DAT_1469eb220;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1b0) = DAT_1469eb218;
  lVar8 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x1b8) = DAT_1469eb220;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FText::FText(param_1 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0x40400000;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x40800000;
  *(undefined4 *)(param_1 + 0x22c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x230) = 0x40800000;
  *(undefined4 *)(param_1 + 0x234) = 0x40000000;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x254) = 0x3f800000;
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x260) = 1;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  plVar2 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_88,"ExpandableArea.TitleFont",1);
  puVar7 = (undefined8 *)(**(code **)(lVar8 + 0x78))(plVar2,local_80,*puVar7,0);
  *(undefined8 *)(param_1 + 0x288) = *puVar7;
  *(undefined8 *)(param_1 + 0x290) = puVar7[1];
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x14);
  uVar5 = *(undefined4 *)(puVar7 + 3);
  uVar6 = *(undefined4 *)((longlong)puVar7 + 0x1c);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)(param_1 + 0x29c) = uVar4;
  *(undefined4 *)(param_1 + 0x2a0) = uVar5;
  *(undefined4 *)(param_1 + 0x2a4) = uVar6;
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)(param_1 + 0x2ac) = uVar4;
  *(undefined4 *)(param_1 + 0x2b0) = uVar5;
  *(undefined4 *)(param_1 + 0x2b4) = uVar6;
  *(undefined8 *)(param_1 + 0x2b8) = puVar7[6];
  lVar8 = puVar7[7];
  *(longlong *)(param_1 + 0x2c0) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x2c8) = puVar7[8];
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(puVar7 + 9);
  *(undefined1 *)(param_1 + 0x2d4) = *(undefined1 *)((longlong)puVar7 + 0x4c);
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  return param_1;
}



// FUNCTION 1419c05d0 FArguments body=307 status=ok
// SIG undefined FArguments(void)

longlong SGridPanel::FArguments::FArguments
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
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
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



// FUNCTION 1419c0710 FArguments body=361 status=ok
// SIG undefined FArguments(void)

longlong SUniformGridPanel::FArguments::FArguments
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
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x144) = 1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
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



// FUNCTION 1419c0880 ~TArray<TAttribute<float>,FDefaultAllocator> body=90 status=ok
// SIG undefined ~TArray<TAttribute<float>,FDefaultAllocator>(void)

void TArray<TAttribute<float>,FDefaultAllocator>::~TArray<TAttribute<float>,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1419c08e0 FUN_1419c08e0 body=9 status=ok
// SIG undefined FUN_1419c08e0(void)

void FUN_1419c08e0(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  return;
}



// FUNCTION 1419c08f0 ~TAttribute<TOptional<enum_EMouseCursor::Type>_> body=34 status=ok
// SIG undefined ~TAttribute<TOptional<enum_EMouseCursor::Type>_>(void)

void TAttribute<TOptional<enum_EMouseCursor::Type>_>::
     ~TAttribute<TOptional<enum_EMouseCursor::Type>_>(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10);
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1419c0920 ~TAttribute<FMargin> body=9 status=ok
// SIG undefined ~TAttribute<FMargin>(void)

void TAttribute<FMargin>::~TAttribute<FMargin>(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x18);
  return;
}



// FUNCTION 1419c0930 FUN_1419c0930 body=89 status=ok
// SIG undefined FUN_1419c0930(void)

void FUN_1419c0930(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  plVar4 = *(longlong **)(param_1 + 0x38);
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



// FUNCTION 1419c0990 ~FInputAxisUnifiedDelegate body=5 status=ok
// SIG undefined ~FInputAxisUnifiedDelegate(void)

void FInputAxisUnifiedDelegate::~FInputAxisUnifiedDelegate(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_1;
  }
  if ((plVar2 != (longlong *)0x0) ||
     (((int)param_1[1] != 0 && (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*param_1 != 0) {
      lVar1 = FMemory::Realloc(*param_1,0,0);
      *param_1 = lVar1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1419c09a0 ~FArguments body=233 status=ok
// SIG undefined ~FArguments(void)

void SExpandableArea::FArguments::~FArguments(longlong param_1)

{
  TAttribute<TOptional<enum_EMouseCursor::Type>_>::~TAttribute<TOptional<enum_EMouseCursor::Type>_>
            (param_1 + 0x2f0);
  FUN_1419c0930(param_1 + 0x288);
  FInputAxisUnifiedDelegate::~FInputAxisUnifiedDelegate(param_1 + 0x278);
  TAttribute<FMargin>::~TAttribute<FMargin>(param_1 + 0x250);
  TAttribute<FMargin>::~TAttribute<FMargin>(param_1 + 0x228);
  TAttribute<FMargin>::~TAttribute<FMargin>(param_1 + 0x200);
  TAttribute<FText>::~TAttribute<FText>(param_1 + 0x1c0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x1b0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x1a0);
  FUN_14188ab30(param_1 + 0x158);
  FUN_14188ab30(param_1 + 0x110);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1419c0a90 ~FArguments body=81 status=ok
// SIG undefined ~FArguments(void)

void SGridPanel::FArguments::~FArguments(longlong param_1)

{
  TArray<TAttribute<float>,FDefaultAllocator>::~TArray<TAttribute<float>,FDefaultAllocator>
            (param_1 + 0x128);
  TArray<TAttribute<float>,FDefaultAllocator>::~TArray<TAttribute<float>,FDefaultAllocator>
            (param_1 + 0x118);
  FUN_140591050(param_1 + 0x108);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1419c0af0 FUN_1419c0af0 body=233 status=ok
// SIG undefined FUN_1419c0af0(void)

void FUN_1419c0af0(longlong param_1)

{
  FInputAxisUnifiedDelegate::~FInputAxisUnifiedDelegate(param_1 + 0x240);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x230);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x200);
  FUN_1419c08e0(param_1 + 0x1e0);
  FUN_1419c08e0(param_1 + 0x1c8);
  FUN_14188ab30(param_1 + 0x180);
  FUN_14188ab30(param_1 + 0x140);
  FUN_1419c08e0(param_1 + 0x120);
  FUN_1419c08e0(param_1 + 0x108);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1419c0be0 FUN_1419c0be0 body=123 status=ok
// SIG undefined FUN_1419c0be0(void)

void FUN_1419c0be0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x358);
  FUN_1417f61f0(param_1 + 0x300);
  plVar4 = *(longlong **)(param_1 + 0x2f8);
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
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1419c0c60 FUN_1419c0c60 body=371 status=ok
// SIG undefined FUN_1419c0c60(void)

void FUN_1419c0c60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x268);
  iVar7 = *(int *)(param_1 + 0x270);
  if (iVar7 != 0) {
    lVar5 = lVar5 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
      lVar5 = lVar5 + 0x18;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *(longlong *)(param_1 + 0x268);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_1 + 0x260);
  lVar5 = *(longlong *)(param_1 + 600);
  if (iVar7 != 0) {
    lVar5 = lVar5 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
      lVar5 = lVar5 + 0x18;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *(longlong *)(param_1 + 600);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)(param_1 + 0x218);
  plVar6 = (longlong *)*plVar2;
  for (iVar7 = *(int *)(param_1 + 0x220); iVar7 != 0; iVar7 = iVar7 + -1) {
    lVar5 = *plVar6;
    plVar4 = *(longlong **)(lVar5 + 0x58);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + 0x40);
    FSlotBase::~FSlotBase(lVar5);
    FMemory::Free(*plVar6);
    plVar6 = plVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1419c0de0 ~SUniformGridPanel body=183 status=ok
// SIG undefined ~SUniformGridPanel(void)

void SUniformGridPanel::~SUniformGridPanel(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x248);
  plVar1 = (longlong *)(param_1 + 0x218);
  puVar2 = (undefined8 *)*plVar1;
  for (iVar3 = *(int *)(param_1 + 0x220); iVar3 != 0; iVar3 = iVar3 + -1) {
    FSlotBase::~FSlotBase(*puVar2);
    FMemory::Free(*puVar2);
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1419c0ea0 FUN_1419c0ea0 body=43 status=ok
// SIG undefined FUN_1419c0ea0(void)

undefined8 * FUN_1419c0ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 1419c0ed0 FUN_1419c0ed0 body=78 status=ok
// SIG undefined FUN_1419c0ed0(void)

undefined8 FUN_1419c0ed0(undefined8 param_1,ulonglong param_2)

{
  FUN_1419c0be0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x388);
  }
  return param_1;
}



// FUNCTION 1419c0f30 FUN_1419c0f30 body=9 status=ok
// SIG undefined FUN_1419c0f30(void)

void FUN_1419c0f30(longlong param_1)

{
  FUN_1419c0c60(param_1 + 0x10);
  return;
}



// FUNCTION 1419c0f40 FUN_1419c0f40 body=9 status=ok
// SIG undefined FUN_1419c0f40(void)

void FUN_1419c0f40(longlong param_1)

{
  SUniformGridPanel::~SUniformGridPanel(param_1 + 0x10);
  return;
}



// FUNCTION 1419c0f60 FUN_1419c0f60 body=239 status=ok
// SIG undefined FUN_1419c0f60(void)

undefined8 * FUN_1419c0f60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f5958) {
    _Init_thread_header(&DAT_1469f5958);
    if (DAT_1469f5958 == -1) {
      DAT_1469f5950 = (undefined8 *)operator_new();
      if (DAT_1469f5950 == (undefined8 *)0x0) {
        DAT_1469f5950 = (undefined8 *)0x0;
      }
      else {
        *DAT_1469f5950 = &PTR__scalar_deleting_destructor__144d82198;
        DAT_1469f5950[1] = 0;
        DAT_1469f5950[2] = 0;
        DAT_1469f5950[3] = 0;
        DAT_1469f5950[4] = 0;
        DAT_1469f5950[5] = 0;
        DAT_1469f5950[6] = 0;
        DAT_1469f5950[7] = 0;
        DAT_1469f5950[8] = 0;
        DAT_1469f5950[9] = 0;
        DAT_1469f5950[10] = 0;
        DAT_1469f5950[0xb] = 0;
        DAT_1469f5950[0xc] = 0;
        DAT_1469f5950[0xd] = 0;
        DAT_1469f5950[0xe] = 0;
        DAT_1469f5950[0xf] = 0;
        DAT_1469f5950[0x10] = 0;
        DAT_1469f5950[0x11] = 0;
        *(undefined2 *)(DAT_1469f5950 + 0x12) = 0x101;
      }
      atexit((_func_5014 *)&LAB_143e83f30);
      _Init_thread_footer(&DAT_1469f5958);
      return DAT_1469f5950;
    }
  }
  return DAT_1469f5950;
}



// FUNCTION 1419c1050 `scalar_deleting_destructor' body=288 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSandboxPlatformFile::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d82198;
  iVar2 = *(int *)(param_1 + 0x11);
  plVar1 = (longlong *)param_1[0x10];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0xf);
  plVar1 = (longlong *)param_1[0xe];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0xe];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cb01d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1419c1170 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEvaluationTemplateGenerator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1419c11e0 ConvertToAbsolutePathForExternalAppForRead body=413 status=ok
// SIG undefined ConvertToAbsolutePathForExternalAppForRead(void)

undefined8 *
FSandboxPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (longlong param_1,undefined8 *param_2,short *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_38);
  if (*(int *)(puVar2 + 1) == 0) {
    psVar5 = &DAT_143f3eda8;
  }
  else {
    psVar5 = (short *)*puVar2;
  }
  local_48 = (undefined2 *)0x0;
  uVar9 = 0;
  local_40 = (ulonglong)(uint)local_40;
  lVar4 = -1;
  puVar8 = (undefined2 *)0x0;
  uVar6 = uVar9;
  if ((psVar5 != (short *)0x0) &&
     (lVar7 = lVar4, puVar8 = (undefined2 *)0x0, uVar6 = 0, *psVar5 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar5[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar6;
    uVar9 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar9 = (uint)local_40;
    }
    puVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)(int)uVar6 * 2);
    uVar6 = local_40._4_4_;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (uVar9 != 0) {
    puVar3 = puVar8;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar3);
  if ((cVar1 == '\0') && (cVar1 = OkForInnerAccess(param_1,param_3,0), cVar1 != '\0')) {
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_3[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_40 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_3,(longlong)(int)uVar6 * 2);
    }
    FPaths::ConvertRelativePathToFull(param_2,&local_48);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  else {
    *param_2 = puVar8;
    *(uint *)(param_2 + 1) = uVar9;
    *(uint *)((longlong)param_2 + 0xc) = uVar6;
  }
  return param_2;
}



// FUNCTION 1419c1380 FUN_1419c1380 body=23 status=ok
// SIG undefined FUN_1419c1380(void)

undefined8 FUN_1419c1380(undefined8 param_1,undefined8 param_2)

{
  FUN_1419c13a0();
  return param_2;
}



// FUNCTION 1419c13a0 FUN_1419c13a0 body=1338 status=ok
// SIG undefined FUN_1419c13a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t ** FUN_1419c13a0(longlong param_1,wchar_t **param_2,short *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  short *psVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  wchar_t *local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  uint local_78;
  undefined2 *local_70;
  int local_68;
  wchar_t *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *param_2 = (wchar_t *)0x0;
  param_2[1] = (wchar_t *)0x0;
  lVar13 = -1;
  if ((param_3 != (short *)0x0) && (lVar12 = lVar13, *param_3 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (param_3[lVar12] != 0);
    iVar10 = (int)lVar12 + 1;
    *(int *)(param_2 + 1) = iVar10;
    if (0 < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,param_3,(longlong)iVar10 * 2);
  }
  FUN_1416781b0(param_2);
  if (*(char *)(param_1 + 0x91) != '\x01') {
    return param_2;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return param_2;
  }
  if (*(int *)(param_1 + 0x18) + -1 < 1) {
    return param_2;
  }
  FPaths::ConvertRelativePathToFull(&local_70,param_2);
  local_88 = 0;
  local_80 = 0;
  uVar5 = FPaths::ProjectDir(&local_60);
  plVar6 = (longlong *)FPaths::ConvertRelativePathToFull(&local_a8,uVar5);
  if (&local_88 != plVar6) {
    if (local_88 != 0) {
      FMemory::Free();
    }
    local_88 = *plVar6;
    *plVar6 = 0;
    local_80 = plVar6[1];
    plVar6[1] = 0;
  }
  if (local_a8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_60 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  cVar1 = FString::StartsWith(&local_70,&local_88,1);
  pwVar15 = L"";
  iVar10 = 0;
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x48) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = *(undefined2 **)(param_1 + 0x40);
    }
    cVar1 = FString::StartsWith(&local_70,puVar14,1);
    if (cVar1 != '\0') {
      puVar14 = &DAT_143f3eda8;
      if (local_68 != 0) {
        puVar14 = local_70;
      }
      iVar4 = *(int *)(param_1 + 0x48) + -1;
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar4 = iVar10;
      }
      local_58 = puVar14 + iVar4;
      if (*(int *)(param_1 + 0x18) != 0) {
        pwVar15 = *(wchar_t **)(param_1 + 0x10);
      }
      uVar5 = 2;
      goto LAB_1419c1528;
    }
    local_b8 = 0xffffffff;
    uVar2 = FUN_141592950(param_2,&DAT_144d81f84,0,0);
    local_b8 = 0xffffffff;
    uVar3 = FUN_141592950(param_2,&DAT_144d81f9c,0,0);
    if (((int)uVar2 < 0) || ((-1 < (int)uVar3 && ((int)uVar3 < (int)uVar2)))) {
      uVar2 = uVar3;
    }
    iVar10 = *(int *)(param_2 + 1);
    local_60 = (wchar_t *)0x0;
    pwVar9 = *param_2;
    local_58 = (undefined2 *)CONCAT44(local_58._4_4_,iVar10);
    if (iVar10 == 0) {
      local_58 = (undefined2 *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,iVar10,0);
      _guard_xfg_dispatch_icall_nop(local_60,pwVar9,(longlong)iVar10 * 2);
    }
    pwVar9 = (wchar_t *)0x0;
    if (uVar2 != 0xffffffff) {
      iVar10 = *(int *)(param_2 + 1);
      uVar3 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar3 = 0xffffffff;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar3 = 0;
      }
      pwVar7 = (wchar_t *)(ulonglong)uVar3;
      if (uVar3 != 0) {
        pwVar7 = pwVar9;
      }
      local_78 = (uint)pwVar7;
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      uVar3 = local_78;
      if ((local_78 <= uVar2) && (uVar3 = uVar11, uVar2 < uVar11)) {
        uVar3 = uVar2;
      }
      if (iVar10 == 0) {
        local_98 = L"";
      }
      else {
        local_98 = *param_2;
      }
      iVar10 = uVar3 - local_78;
      local_a8 = (wchar_t *)0x0;
      local_a0 = (wchar_t *)(ulonglong)(iVar10 + 1);
      if (iVar10 == 0) {
        local_a0 = pwVar9;
      }
      iVar4 = (int)local_a0;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        pwVar9 = local_a8;
        iVar4 = (int)local_a0;
        if (0 < (int)local_a0) {
          wcsncpy(local_a8,local_98 + (int)local_78,(longlong)iVar10);
          pwVar9[iVar10] = L'\0';
        }
      }
      if (local_60 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_58 = (undefined2 *)CONCAT44((int)((ulonglong)local_a0 >> 0x20),iVar4);
      local_60 = pwVar9;
    }
    cVar1 = FUN_141674b80(&local_60);
    pwVar9 = local_60;
    if (cVar1 == '\0') {
      psVar8 = (short *)FUN_1416ac480();
      local_a0 = (wchar_t *)0x0;
      local_a8 = (wchar_t *)0x0;
      if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
        do {
          lVar13 = lVar13 + 1;
        } while (psVar8[lVar13] != 0);
        uVar2 = (int)lVar13 + 1;
        local_a0 = (wchar_t *)(ulonglong)uVar2;
        if (0 < (int)uVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        }
        FGenericPlatformString::Memcpy(local_a8,psVar8,(longlong)(int)uVar2 * 2);
      }
      FUN_1416781b0(&local_a8);
      pwVar9 = local_a8;
      lVar13 = (longlong)(int)local_a0;
      iVar10 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar10 = 0;
      }
      if (((int)local_a0 != 0) || (iVar4 = 2, iVar10 == -1)) {
        iVar4 = 1;
      }
      local_98 = (wchar_t *)0x0;
      local_90 = (int)local_a0;
      if (((int)local_a0 == 0) && (iVar4 + iVar10 == 0)) {
        local_8c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar4 + iVar10 + (int)local_a0,0)
        ;
        _guard_xfg_dispatch_icall_nop(local_98,pwVar9,lVar13 * 2);
      }
      FString::PathAppend(&local_98,*param_2,iVar10);
      if (param_2 == &local_98) {
        if (local_98 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_2 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_2 = local_98;
        *(int *)(param_2 + 1) = local_90;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_8c;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = *(undefined2 **)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        pwVar15 = *(wchar_t **)(param_1 + 0x30);
      }
      local_b8 = 1;
      uVar5 = FString::Replace(param_2,&local_98,pwVar15,puVar14);
      FString::operator=(param_2,uVar5);
      if (local_98 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      pwVar9 = local_60;
      if (local_a8 != (wchar_t *)0x0) {
        FMemory::Free();
        pwVar9 = local_60;
      }
    }
  }
  else {
    local_50 = &DAT_143f3eda8;
    if (local_68 != 0) {
      local_50 = local_70;
    }
    if ((int)local_80 != 0) {
      iVar10 = (int)local_80 + -1;
    }
    local_50 = local_50 + iVar10;
    if (*(int *)(param_1 + 0x18) != 0) {
      pwVar15 = *(wchar_t **)(param_1 + 0x10);
    }
    local_58 = &DAT_146299580;
    uVar5 = 3;
LAB_1419c1528:
    local_a0 = (wchar_t *)0x0;
    local_a8 = (wchar_t *)0x0;
    local_60 = pwVar15;
    FPaths::CombineInternal(&local_a8,&local_60,uVar5);
    pwVar9 = local_a8;
    if (param_2 != &local_a8) {
      if (*param_2 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_a8;
      *(int *)(param_2 + 1) = (int)local_a0;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_a0._4_4_;
      goto LAB_1419c189d;
    }
  }
  if (pwVar9 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_1419c189d:
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1419c18e0 FUN_1419c18e0 body=314 status=ok
// SIG undefined FUN_1419c18e0(void)

undefined1
FUN_1419c18e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_38 [2];
  longlong local_28 [2];
  
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38);
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar5);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_28,param_2);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar3;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))
                      (*(longlong **)(param_1 + 8),puVar4,param_3,param_4,param_5);
  }
  else {
    puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_28,param_3);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38,param_2);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar3;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))
                      (*(longlong **)(param_1 + 8),puVar4,puVar5,param_4,param_5);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1419c1a20 FUN_1419c1a20 body=80 status=ok
// SIG undefined FUN_1419c1a20(void)

undefined1 FUN_1419c1a20(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419c1a70 FUN_1419c1a70 body=80 status=ok
// SIG undefined FUN_1419c1a70(void)

undefined1 FUN_1419c1a70(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419c1ac0 DeleteDirectory body=1282 status=ok
// SIG undefined DeleteDirectory(void)

undefined8 FSandboxPlatformFile::DeleteDirectory(longlong param_1,short *param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  bool bVar15;
  longlong *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  uint local_40;
  uint local_3c;
  
  if (param_3 == '\0') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
    if ((cVar3 == '\0') &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                          (*(longlong **)(param_1 + 8),param_2), cVar3 != '\0')) {
      return 0;
    }
    return 1;
  }
  bVar1 = true;
  local_58 = (undefined2 *)0x0;
  local_50 = (ulonglong)(uint)local_50;
  puVar5 = (undefined2 *)0x0;
  local_40 = 0;
  local_3c = 0;
  if ((param_2 != (short *)0x0) &&
     (puVar5 = (undefined2 *)0x0, local_40 = 0, local_3c = 0, *param_2 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_2[lVar11] != 0);
    uVar9 = (int)lVar11 + 1;
    local_50 = (ulonglong)uVar9;
    local_40 = uVar9;
    local_3c = 0;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      local_40 = (uint)local_50;
      local_3c = local_50._4_4_;
    }
    puVar5 = local_58;
    FGenericPlatformString::Memcpy(local_58,param_2,(longlong)(int)uVar9 * 2);
    iVar10 = 2;
    if (local_40 != 0) goto LAB_1419c1b69;
  }
  iVar10 = 3;
LAB_1419c1b69:
  local_48 = puVar5;
  if ((int)local_3c < (int)(local_40 + iVar10)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FString::PathAppend(&local_48,&DAT_144d81ff0,1);
  uVar12 = 0;
  local_78 = (longlong *)0x0;
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  local_70 = 0;
  FindFiles(param_1,&local_78,puVar5,1,0);
  uVar13 = uVar12;
  if (0 < (int)local_70) {
    do {
      plVar7 = local_78;
      puVar5 = (undefined2 *)0x0;
      local_58 = (undefined2 *)0x0;
      puVar14 = puVar5;
      iVar10 = 0;
      if ((param_2 != (short *)0x0) && (iVar10 = 0, *param_2 != 0)) {
        lVar11 = -1;
        do {
          lVar2 = lVar11 + 1;
          lVar11 = lVar11 + 1;
        } while (param_2[lVar2] != 0);
        local_50._0_4_ = (int)lVar11 + 1;
        lVar11 = (longlong)(int)(uint)local_50;
        local_50._4_4_ = 0;
        if (0 < (int)(uint)local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          puVar14 = (undefined2 *)(ulonglong)local_50._4_4_;
        }
        iVar10 = (uint)local_50;
        puVar5 = local_58;
        FGenericPlatformString::Memcpy(local_58,param_2,lVar11 * 2);
      }
      iVar4 = *(int *)((longlong)plVar7 + uVar13 + 8);
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if ((iVar10 != 0) || (iVar4 = 2, iVar6 == -1)) {
        iVar4 = 1;
      }
      local_58 = (undefined2 *)0x0;
      local_5c = (int)puVar14;
      local_50 = 0;
      local_68 = puVar5;
      local_60 = iVar10;
      if (local_5c < iVar10 + iVar6 + iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      }
      FString::PathAppend(&local_68,*(undefined8 *)((longlong)plVar7 + uVar13),iVar6);
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
      if (cVar3 == '\0') {
LAB_1419c1d23:
        bVar1 = false;
      }
      else {
        puVar5 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar5 = local_68;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8),puVar5,0);
        cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
        if (cVar3 == '\0') goto LAB_1419c1d23;
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar9;
      uVar13 = uVar13 + 0x10;
    } while ((int)uVar9 < (int)local_70);
  }
  uVar12 = 0;
  plVar7 = local_78;
  for (iVar10 = (int)local_70; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
  bVar15 = local_70._4_4_ != 0;
  local_70 = (ulonglong)local_70._4_4_ << 0x20;
  if (bVar15) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_78,0);
  }
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FindFiles(param_1,&local_78,puVar5,0,1);
  uVar13 = uVar12;
  if (0 < (int)local_70) {
    do {
      plVar7 = local_78;
      puVar5 = (undefined2 *)0x0;
      iVar10 = 0;
      local_58 = (undefined2 *)0x0;
      puVar14 = puVar5;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar11 = -1;
        do {
          lVar2 = lVar11 + 1;
          lVar11 = lVar11 + 1;
        } while (param_2[lVar2] != 0);
        local_50._0_4_ = (int)lVar11 + 1;
        lVar11 = (longlong)(int)(uint)local_50;
        local_50._4_4_ = 0;
        if (0 < (int)(uint)local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          puVar14 = (undefined2 *)(ulonglong)local_50._4_4_;
        }
        iVar10 = (uint)local_50;
        puVar5 = local_58;
        FGenericPlatformString::Memcpy(local_58,param_2,lVar11 * 2);
      }
      iVar4 = *(int *)((longlong)plVar7 + uVar13 + 8);
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if ((iVar10 != 0) || (iVar4 = 2, iVar6 == -1)) {
        iVar4 = 1;
      }
      local_58 = (undefined2 *)0x0;
      local_5c = (int)puVar14;
      local_50 = 0;
      local_68 = puVar5;
      local_60 = iVar10;
      if (local_5c < iVar10 + iVar6 + iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      }
      FString::PathAppend(&local_68,*(undefined8 *)((longlong)plVar7 + uVar13),iVar6);
      puVar5 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar5 = local_68;
      }
      cVar3 = DeleteDirectory(param_1,puVar5,1);
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      bVar15 = false;
      if (cVar3 != '\0') {
        bVar15 = bVar1;
      }
      bVar1 = bVar15;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar9;
      uVar13 = uVar13 + 0x10;
    } while ((int)uVar9 < (int)local_70);
  }
  cVar3 = DeleteDirectory(param_1,param_2,0);
  if ((cVar3 == '\0') || (!bVar1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  plVar7 = local_78;
  for (iVar10 = (int)local_70; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 1419c1fd0 DeleteDirectory body=80 status=ok
// SIG undefined DeleteDirectory(void)

undefined1 FSandboxPlatformFile::DeleteDirectory(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419c2020 CreateDirectoryTree body=80 status=ok
// SIG undefined CreateDirectoryTree(void)

undefined1 FSandboxPlatformFile::CreateDirectoryTree(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419c2070 DeleteFile body=324 status=ok
// SIG undefined DeleteFile(void)

undefined1 FSandboxPlatformFile::DeleteFile(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  uVar2 = 1;
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38,param_2);
  puVar10 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = (short *)*puVar3;
  }
  puVar8 = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  iVar7 = 0;
  local_3c = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar9[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_40 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar7 = local_40;
    puVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar9,(longlong)iVar5 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar4 = puVar8;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38,param_2);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar3;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar10);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return uVar2;
}



// FUNCTION 1419c21c0 DirectoryExists body=156 status=ok
// SIG undefined DirectoryExists(void)

ulonglong FSandboxPlatformFile::DirectoryExists(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong local_18 [2];
  
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  bVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),puVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1 == 0) {
    cVar2 = OkForInnerAccess(param_1,param_2,1);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001419c2242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                        (*(longlong **)(param_1 + 8),param_2);
      return uVar4;
    }
  }
  return (ulonglong)bVar1;
}



// FUNCTION 1419c2260 FileExists body=150 status=ok
// SIG undefined FileExists(void)

ulonglong FSandboxPlatformFile::FileExists(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong local_18 [2];
  
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  bVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1 == 0) {
    cVar2 = OkForInnerAccess(param_1,param_2,0);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001419c22df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                        (*(longlong **)(param_1 + 8),param_2);
      return uVar4;
    }
  }
  return (ulonglong)bVar1;
}



// FUNCTION 1419c2300 FUN_1419c2300 body=158 status=ok
// SIG undefined FUN_1419c2300(void)

undefined1 FUN_1419c2300(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_28,param_2);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))
                    (*(longlong **)(param_1 + 8),puVar3,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419c23a0 FileSize body=151 status=ok
// SIG undefined FileSize(void)

longlong FSandboxPlatformFile::FileSize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),puVar4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 < 0) {
    cVar1 = OkForInnerAccess(param_1,param_2,0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001419c2420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                        (*(longlong **)(param_1 + 8),param_2);
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 1419c2440 FindFiles body=451 status=ok
// SIG undefined FindFiles(void)

void FSandboxPlatformFile::FindFiles
               (longlong param_1,undefined8 param_2,short *param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  undefined2 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  short *aj;
  tagPOINT local_78;
  ulonglong local_70;
  longlong local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined1 local_37;
  
  local_78.x = 0;
  local_78.y = 0;
  local_70 = 0;
  lVar4 = -1;
  aj = param_3;
  iVar1 = param_4;
  if ((param_3 != (short *)0x0) && (lVar6 = lVar4, *param_3 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_3[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_70 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    aj = (short *)((longlong)(int)uVar5 * 2);
    FGenericPlatformString::Memcpy(local_78,param_3);
  }
  uVar2 = FPaths::GetCleanFilename(local_68,&local_78);
  local_58 = &PTR_FUN_144d82348;
  local_50 = param_2;
  FString::FString(local_48,uVar2);
  local_38 = (undefined1)param_4;
  local_37 = param_5;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (tagPOINT)0x0) {
    FMemory::Free();
  }
  local_78.x = 0;
  local_78.y = 0;
  local_70 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != 0);
    uVar5 = (int)lVar4 + 1;
    local_70 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    aj = (short *)((longlong)(int)uVar5 * 2);
    FGenericPlatformString::Memcpy(local_78,param_3);
  }
  iVar1 = FPaths::GetPath((HDC)local_68,&local_78,(LPBYTE)aj,iVar1);
  if (*(int *)((undefined8 *)CONCAT44(extraout_var,iVar1) + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)CONCAT44(extraout_var,iVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),puVar3,&local_58);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (tagPOINT)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419c2610 GetAbsoluteGameDirectory body=356 status=ok
// SIG undefined GetAbsoluteGameDirectory(void)

longlong FSandboxPlatformFile::GetAbsoluteGameDirectory(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0x58) < 2) {
    plVar2 = (longlong *)FUN_141672e70(local_18);
    plVar1 = (longlong *)(param_1 + 0x50);
    if (plVar1 != plVar2) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_1 + 0x58) = (int)plVar2[1];
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (*(int *)(param_1 + 0x58) < 2) {
      LowLevelFatalErrorHandler
                ("Unknown",0x165,
                 L"SandboxFileWrapper tried to access project path before it was set.");
      FDebug::AssertFailed
                (&DAT_144d81e6f,"Unknown",0x165,
                 L"SandboxFileWrapper tried to access project path before it was set.");
    }
    plVar2 = (longlong *)FPaths::ConvertRelativePathToFull(local_18,plVar1);
    if (plVar1 != plVar2) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_1 + 0x58) = (int)plVar2[1];
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    plVar2 = (longlong *)FUN_141672d20(local_18,plVar1);
    if (plVar1 != plVar2) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_1 + 0x58) = (int)plVar2[1];
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return param_1 + 0x50;
  }
  return param_1 + 0x50;
}



// FUNCTION 1419c2780 GetAccessTimeStamp body=349 status=ok
// SIG undefined GetAccessTimeStamp(void)

undefined8 *
FSandboxPlatformFile::GetAccessTimeStamp(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  puVar8 = (undefined2 *)0x0;
  *param_2 = 0;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_38);
  iVar7 = 0;
  if (*(int *)(puVar2 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar2;
  }
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar6[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    local_40 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar7 = local_40;
    puVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar6,(longlong)iVar4 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar3 = puVar8;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar3);
  if (cVar1 == '\0') {
    cVar1 = OkForInnerAccess(param_1,param_3,0);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
                         (*(longlong **)(param_1 + 8),local_res8,param_3);
      *param_2 = *puVar2;
    }
  }
  else {
    puVar3 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar3 = puVar8;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
                       (*(longlong **)(param_1 + 8),local_res8,puVar3);
    *param_2 = *puVar2;
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return param_2;
}



// FUNCTION 1419c28e0 GetCookedSandboxDir body=216 status=ok
// SIG undefined GetCookedSandboxDir(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * GetCookedSandboxDir(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  undefined2 *local_28;
  wchar_t *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,"WindowsNoEditor");
  puVar1 = (undefined8 *)FUN_14167d0d0(local_158);
  if (*(int *)(puVar1 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar1;
  }
  local_18 = local_40;
  local_20 = L"Cooked";
  *param_1 = 0;
  param_1[1] = 0;
  FPaths::CombineInternal(param_1,&local_28,3);
  if (local_158[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419c29c0 GetFilenameOnDisk body=374 status=ok
// SIG undefined GetFilenameOnDisk(void)

longlong *
FSandboxPlatformFile::GetFilenameOnDisk(longlong param_1,longlong *param_2,undefined2 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  short *psVar9;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  puVar7 = (undefined2 *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_38);
  iVar5 = 0;
  if (*(int *)(puVar2 + 1) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = (short *)*puVar2;
  }
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar9[lVar8] != 0);
    iVar6 = (int)lVar8 + 1;
    local_40 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar5 = local_40;
    puVar7 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar9,(longlong)iVar6 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar5 != 0) {
    puVar4 = puVar7;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 == '\0') {
    cVar1 = OkForInnerAccess(param_1,param_3,0);
    if (cVar1 == '\0') goto LAB_1419c2b06;
  }
  else {
    param_3 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      param_3 = puVar7;
    }
  }
  plVar3 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                     (*(longlong **)(param_1 + 8),local_38,param_3);
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
  if (local_38[0] != 0) {
    FMemory::Free();
  }
LAB_1419c2b06:
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return param_2;
}



// FUNCTION 1419c2b50 GetStatData body=189 status=ok
// SIG undefined GetStatData(void)

undefined8 *
FSandboxPlatformFile::GetStatData(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_48 [2];
  undefined1 local_38 [48];
  
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_48);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),param_2,puVar4);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if ((*(byte *)(param_2 + 4) & 4) == 0) {
    cVar2 = OkForInnerAccess(param_1,param_3,0);
    if (cVar2 != '\0') {
      cVar2 = OkForInnerAccess(param_1,param_3,1);
      if (cVar2 != '\0') {
        puVar3 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                           (*(longlong **)(param_1 + 8),local_38,param_3);
        uVar1 = puVar3[1];
        *param_2 = *puVar3;
        param_2[1] = uVar1;
        uVar1 = puVar3[3];
        param_2[2] = puVar3[2];
        param_2[3] = uVar1;
        param_2[4] = puVar3[4];
      }
    }
  }
  return param_2;
}



// FUNCTION 1419c2c10 GetTimeStamp body=349 status=ok
// SIG undefined GetTimeStamp(void)

undefined8 *
FSandboxPlatformFile::GetTimeStamp(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  puVar8 = (undefined2 *)0x0;
  *param_2 = 0;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_38);
  iVar7 = 0;
  if (*(int *)(puVar2 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar2;
  }
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar6[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    local_40 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar7 = local_40;
    puVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar6,(longlong)iVar4 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar3 = puVar8;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar3);
  if (cVar1 == '\0') {
    cVar1 = OkForInnerAccess(param_1,param_3,0);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x98))
                         (*(longlong **)(param_1 + 8),local_res8,param_3);
      *param_2 = *puVar2;
    }
  }
  else {
    puVar3 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar3 = puVar8;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x98))
                       (*(longlong **)(param_1 + 8),local_res8,puVar3);
    *param_2 = *puVar2;
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return param_2;
}



// FUNCTION 1419c2d70 FUN_1419c2d70 body=2759 status=ok
// SIG undefined FUN_1419c2d70(void)

/* WARNING: Removing unreachable block (ram,0x0001419c3095) */
/* WARNING: Removing unreachable block (ram,0x0001419c35cd) */

bool FUN_1419c2d70(longlong param_1,longlong param_2,undefined8 param_3)

{
  wchar_t _C;
  void *pvVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t **ppwVar8;
  undefined8 uVar9;
  longlong *plVar10;
  short *_Src;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  wint_t *pwVar19;
  wchar_t *pwVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined2 *puVar23;
  wchar_t *pwVar24;
  uint uVar25;
  bool bVar26;
  wchar_t *local_res20;
  wchar_t *local_88;
  undefined8 local_80;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58 [2];
  undefined1 local_48 [16];
  
  local_88 = (wchar_t *)0x0;
  local_80 = (wchar_t *)0x0;
  FParse::Value(param_3,L"-Sandbox=",&local_88,1);
  if (((int)local_80 < 2) && (*(char *)(param_1 + 0x90) != '\0')) {
    ppwVar8 = (wchar_t **)GetCookedSandboxDir(&local_68);
    if (&local_88 != ppwVar8) {
      if (local_88 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_88 = *ppwVar8;
      *ppwVar8 = (wchar_t *)0x0;
      local_80 = ppwVar8[1];
      ppwVar8[1] = (wchar_t *)0x0;
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_68 = (wchar_t *)0x0;
    local_60 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    pwVar14 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"*.uasset",0x12);
    iVar6 = *(int *)(param_1 + 0x78);
    plVar21 = (longlong *)(param_1 + 0x70);
    puVar12 = *(undefined8 **)(param_1 + 0x70);
    iVar7 = (int)local_60;
    for (puVar18 = puVar12; puVar18 != puVar12 + (longlong)iVar6 * 2; puVar18 = puVar18 + 2) {
      pwVar20 = L"";
      if (iVar7 != 0) {
        pwVar20 = pwVar14;
      }
      if (*(int *)(puVar18 + 1) == 0) {
        puVar23 = &DAT_143f3eda8;
      }
      else {
        puVar23 = (undefined2 *)*puVar18;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,pwVar20);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar18 - (longlong)puVar12 >> 4) != -1) {
          if (pwVar14 != (wchar_t *)0x0) {
            FMemory::Free(pwVar14);
          }
          goto LAB_1419c2ede;
        }
        break;
      }
    }
    iVar6 = *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = iVar6 + 1;
    if (*(int *)(param_1 + 0x7c) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar6);
    }
    puVar12 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar21);
    *puVar12 = pwVar14;
    *(int *)(puVar12 + 1) = iVar7;
    *(undefined4 *)((longlong)puVar12 + 0xc) = local_60._4_4_;
LAB_1419c2ede:
    local_60 = 7;
    local_68 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    pwVar14 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"*.umap",0xe);
    puVar12 = (undefined8 *)*plVar21;
    iVar6 = *(int *)(param_1 + 0x78);
    iVar7 = (int)local_60;
    for (puVar18 = puVar12; puVar18 != puVar12 + (longlong)iVar6 * 2; puVar18 = puVar18 + 2) {
      pwVar20 = L"";
      if (iVar7 != 0) {
        pwVar20 = pwVar14;
      }
      if (*(int *)(puVar18 + 1) == 0) {
        puVar23 = &DAT_143f3eda8;
      }
      else {
        puVar23 = (undefined2 *)*puVar18;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,pwVar20);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar18 - (longlong)puVar12 >> 4) != -1) {
          if (pwVar14 != (wchar_t *)0x0) {
            FMemory::Free(pwVar14);
          }
          goto LAB_1419c2fb7;
        }
        break;
      }
    }
    iVar6 = *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = iVar6 + 1;
    if (*(int *)(param_1 + 0x7c) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar6);
    }
    puVar12 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar21);
    *puVar12 = pwVar14;
    *(int *)(puVar12 + 1) = iVar7;
    *(undefined4 *)((longlong)puVar12 + 0xc) = local_60._4_4_;
  }
LAB_1419c2fb7:
  *(longlong *)(param_1 + 8) = param_2;
  if ((param_2 == 0) || ((int)local_80 < 2)) goto LAB_1419c37e4;
  uVar9 = FUN_141673340();
  FString::operator=(param_1 + 0x30,uVar9);
  plVar10 = (longlong *)FPaths::ConvertRelativePathToFull(&local_68,param_1 + 0x30);
  plVar21 = (longlong *)(param_1 + 0x40);
  if (plVar21 != plVar10) {
    if (*plVar21 != 0) {
      FMemory::Free();
    }
    *plVar21 = *plVar10;
    *plVar10 = 0;
    *(int *)(param_1 + 0x48) = (int)plVar10[1];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((longlong)plVar10 + 0xc);
    plVar10[1] = 0;
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  bVar26 = false;
  FPaths::NormalizeFilename(&local_88);
  lVar22 = -1;
  iVar6 = FUN_141592950(&local_88,&DAT_144d81e84,0,0,0xffffffff);
  if (iVar6 == -1) goto LAB_1419c32e2;
  uVar25 = iVar6 + 1;
  uVar15 = (int)local_80 - 1;
  if ((int)local_80 == 0) {
    uVar15 = 0;
  }
  if (uVar25 < uVar15) {
    uVar15 = uVar25;
  }
  local_68 = (wchar_t *)0x0;
  pwVar14 = L"";
  if ((int)local_80 != 0) {
    pwVar14 = local_88;
  }
  uVar11 = uVar15 + 1;
  if (uVar15 == 0) {
    uVar11 = 0;
  }
  local_60 = (ulonglong)uVar11;
  if (0 < (int)uVar11) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    pwVar20 = local_68;
    if (0 < (int)local_60) {
      wcsncpy(local_68,pwVar14,(longlong)(int)uVar15);
      pwVar20[(int)uVar15] = L'\0';
    }
  }
  cVar2 = FUN_141674b80(&local_68);
  if (cVar2 == '\0') {
    uVar11 = iVar6 + 0x80000000;
    pwVar14 = (wchar_t *)0x0;
    uVar15 = (int)local_80 - 1;
    if ((int)local_80 == 0) {
      uVar15 = 0;
    }
    if (uVar25 < uVar15) {
      uVar15 = uVar25;
    }
    uVar25 = (int)local_80 - 1;
    if ((int)local_80 == 0) {
      uVar25 = 0;
    }
    uVar16 = uVar15;
    if ((uVar15 <= uVar11) && (uVar16 = uVar25, uVar11 < uVar25)) {
      uVar16 = uVar11;
    }
    local_78 = (wchar_t *)0x0;
    local_6c = 0;
    pwVar20 = L"";
    if ((int)local_80 != 0) {
      pwVar20 = local_88;
    }
    iVar5 = uVar16 - uVar15;
    iVar7 = iVar5 + 1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    if (0 < iVar7) {
      local_70 = iVar7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
      iVar7 = local_70;
      pwVar14 = local_78;
      if (0 < local_70) {
        wcsncpy(local_78,pwVar20 + (int)uVar15,(longlong)iVar5);
        pwVar14[iVar5] = L'\0';
      }
    }
    pwVar20 = (wchar_t *)0x0;
    iVar5 = 0;
    if ((int)local_80 == 0) {
      local_res20 = L"";
      iVar17 = iVar5;
    }
    else {
      local_res20 = local_88;
      iVar17 = (int)local_80 + -1;
    }
    if ((-1 < iVar6) && (iVar5 = iVar17, iVar6 < iVar17)) {
      iVar5 = iVar6;
    }
    local_78 = (wchar_t *)0x0;
    local_6c = 0;
    pwVar24 = (wchar_t *)(ulonglong)(iVar5 + 1);
    if (iVar5 == 0) {
      pwVar24 = pwVar20;
    }
    iVar6 = (int)pwVar24;
    local_70 = iVar6;
    if ((0 < iVar6) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0), iVar6 = local_70,
       pwVar20 = local_78, 0 < local_70)) {
      wcsncpy(local_78,local_res20,(longlong)iVar5);
      pwVar20[iVar5] = L'\0';
    }
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar19 = &DAT_144d81f68;
    pwVar24 = L"";
    if (iVar7 != 0) {
      pwVar24 = pwVar14;
    }
    local_80 = (wchar_t *)CONCAT44(local_6c,iVar6);
    local_88 = pwVar20;
    do {
      wVar3 = *(wint_t *)((longlong)(pwVar24 + -0xa26c0fb4) + (longlong)pwVar19);
      if ((wVar3 == 0) && (*pwVar19 == 0)) {
        iVar6 = 0;
        goto LAB_1419c32b8;
      }
      if (wVar3 != *pwVar19) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar19);
        if (wVar3 != wVar4) goto LAB_1419c32af;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
  bVar26 = false;
  goto LAB_1419c32d0;
LAB_1419c32af:
  iVar6 = (uint)wVar3 - (uint)wVar4;
LAB_1419c32b8:
  bVar26 = iVar6 == 0;
  if (pwVar14 != (wchar_t *)0x0) {
    FMemory::Free(pwVar14);
  }
LAB_1419c32d0:
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_1419c32e2:
  pwVar19 = &DAT_144d81f78;
  pwVar14 = L"";
  if ((int)local_80 != 0) {
    pwVar14 = local_88;
  }
  do {
    wVar3 = *(wint_t *)((longlong)(pwVar14 + -0xa26c0fbc) + (longlong)pwVar19);
    if ((wVar3 == 0) && (*pwVar19 == 0)) goto LAB_1419c3342;
    if (wVar3 != *pwVar19) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*pwVar19);
      if (wVar3 != wVar4) goto LAB_1419c3333;
    }
    pwVar19 = pwVar19 + 1;
  } while( true );
LAB_1419c34a3:
  if (wVar3 == wVar4) {
LAB_1419c34b2:
    puVar12 = (undefined8 *)FUN_141673340();
    local_68 = (wchar_t *)0x0;
    iVar6 = *(int *)(puVar12 + 1);
    pvVar1 = (void *)*puVar12;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_68,(2 - (uint)(*(int *)(puVar12 + 1) != 0)) + iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar6 * 2);
    FString::PathAppend(&local_68,&DAT_144d81e9c,0);
    uVar9 = FGuid::NewGuid(local_48);
    FUN_141682af0(uVar9,&local_78,0);
    pwVar14 = L"";
    if (local_70 != 0) {
      pwVar14 = local_78;
    }
    uVar9 = FUN_141669400(local_58,&local_68,pwVar14);
    FString::operator=(param_1 + 0x10,uVar9);
    pwVar14 = local_78;
    if (local_58[0] != (wchar_t *)0x0) {
      FMemory::Free();
      pwVar14 = local_78;
    }
LAB_1419c36d5:
    if (pwVar14 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  else {
    cVar2 = FString::StartsWith(&local_88,&DAT_144d81fc0,1);
    if (cVar2 == '\0') {
      uVar25 = FUN_141592950(&local_88,&DAT_144d81ee4,0,0,0xffffffff);
      uVar15 = (int)local_80 - 1;
      if ((int)local_80 == 0) {
        uVar15 = 0;
      }
      if (uVar25 < uVar15) {
        uVar15 = uVar25;
      }
      local_68 = (wchar_t *)0x0;
      pwVar14 = L"";
      if ((int)local_80 != 0) {
        pwVar14 = local_88;
      }
      uVar25 = uVar15 + 1;
      if (uVar15 == 0) {
        uVar25 = 0;
      }
      local_60 = (ulonglong)uVar25;
      if (0 < (int)uVar25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        pwVar20 = local_68;
        if (0 < (int)local_60) {
          wcsncpy(local_68,pwVar14,(longlong)(int)uVar15);
          pwVar20[(int)uVar15] = L'\0';
        }
      }
      cVar2 = FUN_141674b80(&local_68);
      if (local_68 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') {
        FString::operator=(param_1 + 0x10,&local_88);
        goto LAB_1419c3721;
      }
      puVar12 = (undefined8 *)FUN_141673340();
      local_68 = (wchar_t *)0x0;
      iVar6 = *(int *)(puVar12 + 1);
      pvVar1 = (void *)*puVar12;
      local_60 = CONCAT44(local_60._4_4_,iVar6);
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_68,(2 - (uint)(*(int *)(puVar12 + 1) != 0)) + iVar6,0);
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar6 * 2);
      FString::PathAppend(&local_68,&DAT_144d81f34,0);
      pwVar14 = L"";
      if ((int)local_80 != 0) {
        pwVar14 = local_88;
      }
      uVar9 = FUN_141669400(local_58,&local_68,pwVar14);
      FString::operator=(param_1 + 0x10,uVar9);
      pwVar14 = local_58[0];
      goto LAB_1419c36d5;
    }
    FString::operator=(param_1 + 0x10,&local_88);
  }
  FUN_1416781b0(param_1 + 0x10);
  FPaths::ConvertRelativePathToFull(local_58,param_1 + 0x10);
  if (local_58[0] != (wchar_t *)0x0) {
    FMemory::Free();
  }
  goto LAB_1419c3721;
LAB_1419c3333:
  if (wVar3 != wVar4) {
    pwVar20 = L"Unique";
    pwVar14 = L"";
    if ((int)local_80 != 0) {
      pwVar14 = local_88;
    }
    do {
      _C = *(wchar_t *)((longlong)(pwVar14 + -0xa26c0fd8) + (longlong)pwVar20);
      if ((_C == L'\0') && (*pwVar20 == L'\0')) goto LAB_1419c34b2;
      if (_C != *pwVar20) {
        wVar3 = towlower(_C);
        wVar4 = towlower(*pwVar20);
        if (wVar3 != wVar4) goto LAB_1419c34a3;
      }
      pwVar20 = pwVar20 + 1;
    } while( true );
  }
LAB_1419c3342:
  _Src = (short *)FUN_1416b1ca0();
  plVar21 = (longlong *)(param_1 + 0x10);
  if ((short *)*plVar21 != _Src) {
    if ((_Src == (short *)0x0) || (*_Src == 0)) {
      iVar6 = 0;
    }
    else {
      do {
        lVar22 = lVar22 + 1;
      } while (_Src[lVar22] != 0);
      iVar6 = (int)lVar22 + 1;
    }
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar21,iVar6);
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar6 + iVar7;
    if (*(int *)(param_1 + 0x1c) < iVar6 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*plVar21,_Src,(longlong)iVar6 * 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = (10 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar7;
  if (*(int *)(param_1 + 0x1c) < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar21,iVar6);
  }
  lVar22 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  builtin_wcsncpy((wchar_t *)(*plVar21 + lVar22 * 2),L"My Games",8);
  lVar22 = *plVar21 + lVar22 * 2;
  *(undefined2 *)(lVar22 + 0x10) = 0x2f;
  *(undefined2 *)(lVar22 + 0x12) = 0;
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = (5 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar7;
  if (*(int *)(param_1 + 0x1c) < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar21,iVar6);
  }
  lVar13 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  lVar22 = *plVar21;
  *(undefined8 *)(lVar22 + lVar13 * 2) = 0x2f003400450055;
  *(undefined2 *)(lVar22 + 8 + lVar13 * 2) = 0;
LAB_1419c3721:
  plVar21 = (longlong *)(param_1 + 0x10);
  if (bVar26) {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = (undefined2 *)*plVar21;
    }
    FSandboxPlatformFile::DeleteDirectory(param_1,puVar23,1);
  }
  cVar2 = FString::EndsWith(plVar21,&DAT_144d81f54,1);
  if (cVar2 == '\0') {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar7 = (2 - (uint)(iVar6 != 0)) + iVar6;
    *(int *)(param_1 + 0x18) = iVar7;
    if (*(int *)(param_1 + 0x1c) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar21,iVar6);
    }
    puVar23 = (undefined2 *)(*plVar21 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    *puVar23 = 0x2f;
    puVar23[1] = 0;
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = (undefined2 *)*plVar21;
    }
    FString::PrintfImpl(&local_68,L"-sandbox=%s",puVar23);
    pwVar14 = L"";
    if ((int)local_60 != 0) {
      pwVar14 = local_68;
    }
    FCommandLine::AddToSubprocessCommandline(pwVar14);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
LAB_1419c37e4:
  lVar22 = *(longlong *)(param_1 + 8);
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return lVar22 != 0;
}



// FUNCTION 1419c3840 FUN_1419c3840 body=39 status=ok
// SIG undefined FUN_1419c3840(void)

void FUN_1419c3840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144d82130;
    return;
  }
  return;
}



// FUNCTION 1419c3870 IsReadOnly body=276 status=ok
// SIG undefined IsReadOnly(void)

undefined1 FSandboxPlatformFile::IsReadOnly(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  uVar2 = 0;
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_28,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    psVar7 = &DAT_143f3eda8;
  }
  else {
    psVar7 = (short *)*puVar3;
  }
  puVar9 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  iVar8 = 0;
  local_2c = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar7[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_30 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar8 = local_30;
    puVar9 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar7,(longlong)iVar5 * 2);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar4 = puVar9;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 != '\0') {
    puVar4 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      puVar4 = puVar9;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),puVar4);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return uVar2;
}



// FUNCTION 1419c39a0 IterateDirectory body=263 status=ok
// SIG undefined IterateDirectory(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FSandboxPlatformFile::IterateDirectory(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = &PTR__scalar_deleting_destructor__144d82178;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = param_3;
  local_78 = param_1;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_98,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),puVar3,&local_88);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))
                    (*(longlong **)(param_1 + 8),param_2,&local_88);
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_70);
  return uVar1;
}



// FUNCTION 1419c3ab0 IterateDirectoryStatRecursively body=263 status=ok
// SIG undefined IterateDirectoryStatRecursively(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FSandboxPlatformFile::IterateDirectoryStatRecursively
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = &PTR__scalar_deleting_destructor__144d82178;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = param_3;
  local_78 = param_1;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_98,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x128))(*(longlong **)(param_1 + 8),puVar3,&local_88);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x128))
                    (*(longlong **)(param_1 + 8),param_2,&local_88);
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_70);
  return uVar1;
}



// FUNCTION 1419c3bc0 FUN_1419c3bc0 body=263 status=ok
// SIG undefined FUN_1419c3bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1419c3bc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = &PTR__scalar_deleting_destructor__144d82188;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = param_3;
  local_78 = param_1;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_98,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),puVar3,&local_88);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))
                    (*(longlong **)(param_1 + 8),param_2,&local_88);
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_70);
  return uVar1;
}



// FUNCTION 1419c3cd0 FUN_1419c3cd0 body=263 status=ok
// SIG undefined FUN_1419c3cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1419c3cd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = &PTR__scalar_deleting_destructor__144d82188;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = param_3;
  local_78 = param_1;
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_98,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),puVar3,&local_88);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))
                    (*(longlong **)(param_1 + 8),param_2,&local_88);
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_70);
  return uVar1;
}



// FUNCTION 1419c3de0 MoveFile body=339 status=ok
// SIG undefined MoveFile(void)

undefined1 FSandboxPlatformFile::MoveFile(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  uVar2 = 0;
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38);
  puVar10 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = (short *)*puVar3;
  }
  puVar8 = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  iVar7 = 0;
  local_3c = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar9[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_40 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar7 = local_40;
    puVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar9,(longlong)iVar5 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar4 = puVar8;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 != '\0') {
    puVar4 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar4 = puVar8;
    }
    puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38,param_2);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar3;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                      (*(longlong **)(param_1 + 8),puVar10,puVar4);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return uVar2;
}



// FUNCTION 1419c3f40 OkForInnerAccess body=315 status=ok
// SIG undefined OkForInnerAccess(void)

undefined1 FSandboxPlatformFile::OkForInnerAccess(longlong param_1,short *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong local_10;
  
  if ((*(int *)(param_1 + 0x88) != 0) || (*(int *)(param_1 + 0x78) != 0)) {
    iVar2 = 0;
    local_18 = 0;
    local_10 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_10 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar3 * 2);
    }
    FUN_1416781b0(&local_18);
    if (param_3 == '\0') {
      if (0 < *(int *)(param_1 + 0x78)) {
        do {
          cVar1 = FUN_141593930(&local_18,(longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x70),1);
          if (cVar1 != '\0') goto LAB_1419c4068;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x78));
      }
    }
    else if (0 < *(int *)(param_1 + 0x88)) {
      do {
        cVar1 = FUN_141593930(&local_18,(longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x80),1);
        if (cVar1 != '\0') {
LAB_1419c4068:
          if (local_18 != 0) {
            FMemory::Free();
          }
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x88));
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1419c4080 OpenAsyncRead body=309 status=ok
// SIG undefined OpenAsyncRead(void)

undefined8 FSandboxPlatformFile::OpenAsyncRead(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_28,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = (short *)*puVar2;
  }
  puVar8 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  iVar7 = 0;
  local_2c = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar9[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_30 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar7 = local_30;
    puVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar9,(longlong)iVar5 * 2);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  cVar1 = OkForInnerAccess(param_1,param_2,0);
  if (cVar1 != '\0') {
    puVar4 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar4 = puVar8;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar4);
    if (cVar1 == '\0') goto LAB_1419c4176;
  }
  param_2 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    param_2 = puVar8;
  }
LAB_1419c4176:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),param_2);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return uVar3;
}



// FUNCTION 1419c41c0 OpenRead body=168 status=ok
// SIG undefined OpenRead(void)

longlong FSandboxPlatformFile::OpenRead(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                    (*(longlong **)(param_1 + 8),puVar4,param_3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 == 0) {
    cVar1 = OkForInnerAccess(param_1,param_2,0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001419c424e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                        (*(longlong **)(param_1 + 8),param_2,0);
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 1419c4270 OpenWrite body=115 status=ok
// SIG undefined OpenWrite(void)

undefined8
FSandboxPlatformFile::OpenWrite
          (longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_1419c13a0(param_1,local_18,param_2);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 200))
                    (*(longlong **)(param_1 + 8),puVar3,param_3,param_4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1419c42f0 SetReadOnly body=297 status=ok
// SIG undefined SetReadOnly(void)

undefined1 FSandboxPlatformFile::SetReadOnly(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  uVar2 = 0;
  puVar3 = (undefined8 *)FUN_1419c13a0(param_1,local_38,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    psVar7 = &DAT_143f3eda8;
  }
  else {
    psVar7 = (short *)*puVar3;
  }
  puVar9 = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  iVar8 = 0;
  local_3c = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar7[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_40 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar8 = local_40;
    puVar9 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar7,(longlong)iVar5 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar4 = puVar9;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 != '\0') {
    puVar4 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      puVar4 = puVar9;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))
                      (*(longlong **)(param_1 + 8),puVar4,param_3);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return uVar2;
}



// FUNCTION 1419c4430 SetTimeStamp body=326 status=ok
// SIG undefined SetTimeStamp(void)

void FSandboxPlatformFile::SetTimeStamp(longlong param_1,undefined2 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  puVar2 = (undefined8 *)FUN_1419c13a0(param_1,local_38,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    psVar4 = &DAT_143f3eda8;
  }
  else {
    psVar4 = (short *)*puVar2;
  }
  puVar6 = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  iVar5 = 0;
  local_3c = 0;
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar4[lVar8] != 0);
    iVar7 = (int)lVar8 + 1;
    local_40 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar5 = local_40;
    puVar6 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar4,(longlong)iVar7 * 2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (iVar5 != 0) {
    puVar3 = puVar6;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),puVar3);
  if (cVar1 == '\0') {
    cVar1 = OkForInnerAccess(param_1,param_2,0);
    if (cVar1 == '\0') goto LAB_1419c4545;
  }
  else {
    param_2 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      param_2 = puVar6;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_2,param_3);
LAB_1419c4545:
  if (puVar6 == (undefined2 *)0x0) {
    return;
  }
  FMemory::Free(puVar6);
  return;
}



// FUNCTION 1419c4580 ShouldBeUsed body=280 status=ok
// SIG undefined ShouldBeUsed(void)

undefined1 FSandboxPlatformFile::ShouldBeUsed(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 **ppuVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *local_28;
  longlong local_20;
  longlong local_18 [2];
  
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  uVar1 = FParse::Value(param_3,L"-Sandbox=",&local_28,1);
  if ((int)local_20 < 2) {
    uVar2 = FPlatformFileManager::Get();
    lVar3 = FPlatformFileManager::GetPlatformFile(uVar2);
    if ((param_2 == lVar3) && (*(char *)(param_1 + 0x90) != '\0')) {
      ppuVar4 = (undefined2 **)GetCookedSandboxDir(local_18);
      if (&local_28 != ppuVar4) {
        if (local_28 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_28 = *ppuVar4;
        *ppuVar4 = (undefined2 *)0x0;
        local_20 = (longlong)ppuVar4[1];
        ppuVar4[1] = (undefined2 *)0x0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      uVar2 = FPlatformFileManager::Get();
      plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
      puVar6 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar6 = local_28;
      }
      uVar1 = (**(code **)(*plVar5 + 0xd0))(plVar5,puVar6);
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419c46a0 Visit body=399 status=ok
// SIG undefined Visit(void)

undefined8
`FSandboxPlatformFile::FindFiles'::`2'::FFileMatch::Visit
          (longlong param_1,short *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  ulonglong local_20;
  
  bVar4 = false;
  lVar7 = -1;
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0x20) != '\0') {
      local_20 = 0;
      local_28 = 0;
      if ((param_2 != (short *)0x0) && (lVar8 = lVar7, *param_2 != 0)) {
        do {
          lVar8 = lVar8 + 1;
        } while (param_2[lVar8] != 0);
        uVar6 = (int)lVar8 + 1;
        local_20 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar6 * 2);
      }
      cVar5 = FUN_141593930(&local_28,param_1 + 0x10,1);
      bVar4 = true;
      goto joined_r0x0001419c4821;
    }
  }
  else {
    cVar5 = *(char *)(param_1 + 0x21);
    bVar4 = false;
joined_r0x0001419c4821:
    if (cVar5 != '\0') {
      bVar3 = true;
      goto LAB_1419c46df;
    }
  }
  bVar3 = false;
LAB_1419c46df:
  if ((bVar4) && (local_28 != 0)) {
    FMemory::Free();
  }
  bVar4 = false;
  if (bVar3) {
    plVar2 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    lVar8 = (longlong)iVar1 * 0x10 + *plVar2;
    if (lVar8 != 0) {
      local_28 = 0;
      local_20 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar7 = lVar7 + 1;
        } while (param_2[lVar7] != 0);
        uVar6 = (int)lVar7 + 1;
        local_20 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar6 * 2);
      }
      bVar4 = true;
      FPaths::GetCleanFilename(lVar8,&local_28);
    }
    if ((bVar4) && (local_28 != 0)) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1419c4830 FUN_1419c4830 body=1046 status=ok
// SIG undefined FUN_1419c4830(void)

undefined1 FUN_1419c4830(longlong param_1,short *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  void *_Src;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  wchar_t *pwVar18;
  undefined1 local_res8 [8];
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  iVar17 = 0;
  local_5c = 0;
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  lVar16 = -1;
  if ((param_2 != (short *)0x0) && (lVar13 = lVar16, *param_2 != 0)) {
    do {
      lVar13 = lVar13 + 1;
    } while (param_2[lVar13] != 0);
    iVar11 = (int)lVar13 + 1;
    local_60 = iVar11;
    if (0 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)iVar11 * 2);
  }
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  if (iVar11 == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = *(wchar_t **)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar17 = iVar11 + -1;
  }
  pwVar10 = L"";
  if (local_60 != 0) {
    pwVar10 = local_68;
  }
  iVar17 = _wcsnicmp(pwVar10,pwVar18,(longlong)iVar17);
  if (iVar17 == 0) {
    local_50 = 0;
    pwVar18 = L"";
    if (local_60 != 0) {
      pwVar18 = local_68;
    }
    local_58 = (wchar_t *)0x0;
    if ((pwVar18 != (wchar_t *)0x0) && (*pwVar18 != L'\0')) {
      do {
        lVar16 = lVar16 + 1;
      } while (pwVar18[lVar16] != L'\0');
      uVar14 = (int)lVar16 + 1;
      local_50 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,pwVar18,(longlong)(int)uVar14 * 2);
    }
    FUN_1415cb280(param_1 + 0x18,local_res8,&local_58,0);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
    uVar12 = 0;
    uVar14 = iVar17 - 1;
    if (iVar17 == 0) {
      uVar14 = uVar12;
    }
    uVar9 = uVar14 + 0x7fffffff;
    uVar15 = local_60 - 1;
    if (local_60 == 0) {
      uVar15 = uVar12;
    }
    if (uVar14 < uVar15) {
      uVar15 = uVar14;
    }
    uVar14 = local_60 - 1;
    if (local_60 == 0) {
      uVar14 = uVar12;
    }
    uVar12 = uVar15;
    if ((uVar15 <= uVar9) && (uVar12 = uVar14, uVar9 < uVar14)) {
      uVar12 = uVar9;
    }
    local_58 = (wchar_t *)0x0;
    pwVar18 = L"";
    if (local_60 != 0) {
      pwVar18 = local_68;
    }
    iVar17 = uVar12 - uVar15;
    uVar14 = iVar17 + 1;
    if (iVar17 == 0) {
      uVar14 = 0;
    }
    local_50 = (ulonglong)uVar14;
    pwVar10 = local_58;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      pwVar10 = local_58;
      uVar14 = (uint)local_50;
      if (0 < (int)(uint)local_50) {
        wcsncpy(local_58,pwVar18 + (int)uVar15,(longlong)iVar17);
        pwVar10[iVar17] = L'\0';
      }
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar17 = 1;
    local_5c = local_50._4_4_;
    local_68 = pwVar10;
    local_60 = uVar14;
    cVar4 = FString::StartsWith(&local_68,L"Engine/",1);
    lVar16 = *(longlong *)(param_1 + 0x10);
    iVar11 = 0;
    if (cVar4 == '\0') {
      if (*(int *)(lVar16 + 0x68) < 2) {
        uVar6 = FSandboxPlatformFile::GetAbsoluteGameDirectory(lVar16);
        plVar7 = (longlong *)FUN_141672d20(local_48,uVar6);
        plVar1 = (longlong *)(lVar16 + 0x60);
        if (plVar1 != plVar7) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          *plVar1 = *plVar7;
          *plVar7 = 0;
          *(int *)(lVar16 + 0x68) = (int)plVar7[1];
          *(undefined4 *)(lVar16 + 0x6c) = *(undefined4 *)((longlong)plVar7 + 0xc);
          plVar7[1] = 0;
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_60 != 0) {
        iVar11 = local_60 - 1;
      }
      if ((*(int *)(lVar16 + 0x68) == 0) && (iVar11 != -1)) {
        iVar17 = 2;
      }
      iVar17 = iVar17 + iVar11;
      iVar2 = *(int *)(lVar16 + 0x68);
      _Src = *(void **)(lVar16 + 0x60);
    }
    else {
      if (local_60 != 0) {
        iVar11 = local_60 - 1;
      }
      if ((*(int *)(lVar16 + 0x48) == 0) && (iVar11 != -1)) {
        iVar17 = 2;
      }
      iVar17 = iVar17 + iVar11;
      iVar2 = *(int *)(lVar16 + 0x48);
      _Src = *(void **)(lVar16 + 0x40);
    }
    local_58 = (wchar_t *)0x0;
    local_50 = CONCAT44(local_50._4_4_,iVar2);
    if ((iVar2 == 0) && (iVar17 == 0)) {
      local_50 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar2 + iVar17,0);
      _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar2 * 2);
    }
    FString::PathAppend(&local_58,local_68,iVar11);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_68 = local_58;
    local_60 = (uint)local_50;
    local_5c = local_50._4_4_;
  }
  else {
    pwVar18 = L"";
    if (local_60 != 0) {
      pwVar18 = local_68;
    }
    uVar6 = FUN_1419c13a0(*(undefined8 *)(param_1 + 0x10),local_48,pwVar18);
    piVar8 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0x18,local_res8,uVar6);
    if (*piVar8 == -1) {
      pwVar18 = L"";
      if (local_60 != 0) {
        pwVar18 = local_68;
      }
      cVar4 = FSandboxPlatformFile::OkForInnerAccess
                        (*(undefined8 *)(param_1 + 0x10),pwVar18,*(byte *)(param_3 + 0x20) & 1);
      if (cVar4 == '\0') goto LAB_1419c4bd4;
      bVar3 = true;
    }
    else {
LAB_1419c4bd4:
      bVar3 = false;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (!bVar3) {
      uVar5 = 1;
      goto LAB_1419c4c0d;
    }
  }
  pwVar18 = L"";
  if (local_60 != 0) {
    pwVar18 = local_68;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),pwVar18,param_3);
LAB_1419c4c0d:
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 1419c4c50 FUN_1419c4c50 body=1443 status=ok
// SIG undefined FUN_1419c4c50(void)

undefined1 FUN_1419c4c50(longlong param_1,short *param_2,undefined1 param_3)

{
  wchar_t **ppwVar1;
  wchar_t _C;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  wint_t wVar6;
  wint_t wVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  wchar_t *_Str1;
  uint uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  int iVar21;
  wchar_t *_Str2;
  undefined1 local_res8 [8];
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  
  pwVar13 = (wchar_t *)0x0;
  iVar21 = 0;
  local_5c = 0;
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  lVar20 = -1;
  pwVar19 = pwVar13;
  if ((param_2 != (short *)0x0) && (pwVar19 = (wchar_t *)0x0, lVar18 = lVar20, *param_2 != 0)) {
    do {
      lVar18 = lVar18 + 1;
    } while (param_2[lVar18] != 0);
    uVar14 = (int)lVar18 + 1;
    local_60 = uVar14;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar14 * 2);
    pwVar19 = (wchar_t *)(ulonglong)local_60;
  }
  iVar17 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  if (iVar17 == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = *(wchar_t **)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar21 = iVar17 + -1;
  }
  _Str1 = L"";
  if ((int)pwVar19 != 0) {
    _Str1 = local_68;
  }
  iVar21 = _wcsnicmp(_Str1,_Str2,(longlong)iVar21);
  if (iVar21 == 0) {
    local_50 = 0;
    pwVar19 = L"";
    if (local_60 != 0) {
      pwVar19 = local_68;
    }
    local_58 = (wchar_t *)0x0;
    if ((pwVar19 != (wchar_t *)0x0) && (*pwVar19 != L'\0')) {
      do {
        lVar20 = lVar20 + 1;
      } while (pwVar19[lVar20] != L'\0');
      uVar14 = (int)lVar20 + 1;
      local_50 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,pwVar19,(longlong)(int)uVar14 * 2);
    }
    FUN_1415cb280(param_1 + 0x18,local_res8,&local_58,0);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar21 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
    uVar15 = 0;
    uVar14 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar14 = uVar15;
    }
    uVar11 = uVar14 + 0x7fffffff;
    uVar12 = local_60 - 1;
    if (local_60 == 0) {
      uVar12 = uVar15;
    }
    if (uVar14 < uVar12) {
      uVar12 = uVar14;
    }
    uVar14 = local_60 - 1;
    if (local_60 == 0) {
      uVar14 = uVar15;
    }
    uVar15 = uVar12;
    if ((uVar12 <= uVar11) && (uVar15 = uVar14, uVar11 < uVar14)) {
      uVar15 = uVar11;
    }
    local_58 = (wchar_t *)0x0;
    pwVar19 = L"";
    if (local_60 != 0) {
      pwVar19 = local_68;
    }
    iVar21 = uVar15 - uVar12;
    uVar14 = iVar21 + 1;
    if (iVar21 == 0) {
      uVar14 = 0;
    }
    local_50 = (ulonglong)uVar14;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      pwVar13 = local_58;
      uVar14 = (uint)local_50;
      if (0 < (int)(uint)local_50) {
        wcsncpy(local_58,pwVar19 + (int)uVar12,(longlong)iVar21);
        pwVar13[iVar21] = L'\0';
      }
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free(local_68);
    }
    iVar21 = 1;
    local_5c = local_50._4_4_;
    local_68 = pwVar13;
    local_60 = uVar14;
    cVar4 = FString::StartsWith(&local_68);
    if (cVar4 == '\0') {
      pwVar19 = L"Engine";
      pwVar13 = L"";
      if (local_60 != 0) {
        pwVar13 = local_68;
      }
      do {
        _C = *(wchar_t *)((longlong)pwVar19 + (longlong)(pwVar13 + -0xa1f9fd0c));
        if ((_C == L'\0') && (*pwVar19 == L'\0')) break;
        if (_C != *pwVar19) {
          wVar6 = towlower(_C);
          wVar7 = towlower(*pwVar19);
          if (wVar6 != wVar7) goto LAB_1419c4eb7;
        }
        pwVar19 = pwVar19 + 1;
      } while( true );
    }
    goto LAB_1419c5095;
  }
  pwVar13 = L"";
  if (local_60 != 0) {
    pwVar13 = local_68;
  }
  uVar9 = FUN_1419c13a0(*(undefined8 *)(param_1 + 0x10),&local_48,pwVar13);
  piVar10 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                             (param_1 + 0x18,local_res8,uVar9);
  if (*piVar10 == -1) {
    pwVar13 = L"";
    if (local_60 != 0) {
      pwVar13 = local_68;
    }
    cVar4 = FSandboxPlatformFile::OkForInnerAccess(*(undefined8 *)(param_1 + 0x10),pwVar13,param_3);
    if (cVar4 == '\0') goto LAB_1419c5180;
    bVar3 = true;
  }
  else {
LAB_1419c5180:
    bVar3 = false;
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (!bVar3) {
    uVar5 = 1;
    goto LAB_1419c51ba;
  }
LAB_1419c519b:
  pwVar13 = L"";
  if (local_60 != 0) {
    pwVar13 = local_68;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),pwVar13,param_3);
LAB_1419c51ba:
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar5;
LAB_1419c4eb7:
  if (wVar6 == wVar7) {
LAB_1419c5095:
    lVar20 = *(longlong *)(param_1 + 0x10);
    if (local_60 == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = local_60 - 1;
    }
    if ((*(int *)(lVar20 + 0x48) == 0) && (iVar17 != -1)) {
      iVar21 = 2;
    }
    local_58 = (wchar_t *)0x0;
    iVar16 = *(int *)(lVar20 + 0x48);
    pvVar2 = *(void **)(lVar20 + 0x40);
    local_50 = CONCAT44(local_50._4_4_,iVar16);
    if ((iVar16 == 0) && (iVar21 + iVar17 == 0)) {
      local_50 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar16 + iVar21 + iVar17,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar2,(longlong)iVar16 * 2);
    }
    FString::PathAppend(&local_58,local_68,iVar17);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_68 = local_58;
    local_60 = (uint)local_50;
    local_5c = local_50._4_4_;
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar20 + 0x28) < 2) {
      FString::PrintfImpl(&local_58,&DAT_144d81fe0);
      ppwVar1 = (wchar_t **)(lVar20 + 0x20);
      if (ppwVar1 == &local_58) {
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*ppwVar1 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *ppwVar1 = local_58;
        *(uint *)(lVar20 + 0x28) = (uint)local_50;
        *(undefined4 *)(lVar20 + 0x2c) = local_50._4_4_;
        local_50 = 0;
        local_58 = (wchar_t *)0x0;
      }
    }
    uVar14 = *(int *)(lVar20 + 0x28) - 1;
    if (*(int *)(lVar20 + 0x28) == 0) {
      uVar14 = 0;
    }
    uVar12 = uVar14 + 0x7fffffff;
    uVar15 = local_60 - 1;
    if (local_60 == 0) {
      uVar15 = 0;
    }
    if (uVar14 < uVar15) {
      uVar15 = uVar14;
    }
    uVar14 = local_60 - 1;
    if (local_60 == 0) {
      uVar14 = 0;
    }
    uVar11 = uVar15;
    if ((uVar15 <= uVar12) && (uVar11 = uVar14, uVar12 < uVar14)) {
      uVar11 = uVar12;
    }
    local_48 = (wchar_t *)0x0;
    pwVar13 = L"";
    if (local_60 != 0) {
      pwVar13 = local_68;
    }
    local_3c = 0;
    iVar16 = uVar11 - uVar15;
    iVar17 = iVar16 + 1;
    if (iVar16 == 0) {
      iVar17 = 0;
    }
    pwVar19 = local_48;
    local_40 = iVar17;
    if ((0 < iVar17) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar17 = local_40,
       pwVar19 = local_48, 0 < local_40)) {
      wcsncpy(local_48,pwVar13 + (int)uVar15,(longlong)iVar16);
      pwVar19[iVar16] = L'\0';
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_5c = local_3c;
    local_68 = pwVar19;
    local_60 = iVar17;
    puVar8 = (undefined8 *)
             FSandboxPlatformFile::GetAbsoluteGameDirectory(*(undefined8 *)(param_1 + 0x10));
    iVar17 = 0;
    if (local_60 != 0) {
      iVar17 = local_60 + -1;
    }
    if ((*(int *)(puVar8 + 1) == 0) && (iVar17 != -1)) {
      iVar21 = 2;
    }
    local_58 = (wchar_t *)0x0;
    iVar16 = *(int *)(puVar8 + 1);
    pvVar2 = (void *)*puVar8;
    local_50 = CONCAT44(local_50._4_4_,iVar16);
    if ((iVar16 == 0) && (iVar21 + iVar17 == 0)) {
      local_50 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar16 + iVar21 + iVar17,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar2,(longlong)iVar16 * 2);
    }
    FString::PathAppend(&local_58,local_68,iVar17);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_68 = local_58;
    local_60 = (uint)local_50;
    local_5c = local_50._4_4_;
  }
  goto LAB_1419c519b;
}



// FUNCTION 1419c5200 ShutdownSocketSubsystem body=557 status=ok
// SIG undefined ShutdownSocketSubsystem(void)

void FSocketSubsystemModule::ShutdownSocketSubsystem(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  undefined8 local_res8;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  lVar8 = *param_1;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"WINDOWS",1);
  (**(code **)(lVar8 + 0x58))(param_1,*puVar4);
  if (DAT_1469f5960 != (longlong *)0x0) {
    (**(code **)(*DAT_1469f5960 + 0x10))();
    if (DAT_1469f5960 != (longlong *)0x0) {
      (**(code **)*DAT_1469f5960)(DAT_1469f5960,1);
    }
    DAT_1469f5960 = (longlong *)0x0;
  }
  uVar5 = FUN_14168dc80();
  local_78 = param_1 + 2;
  local_98 = 0;
  iVar7 = (int)param_1[7];
  puStack_90 = (uint *)(param_1 + 4);
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar7 != 0) {
    puVar10 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar10 = puStack_90;
    }
    uVar1 = *puVar10;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar1 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar2) goto LAB_1419c531b;
      uVar1 = puVar10[lVar8 + 1];
    }
    uStack_94 = -uVar1 & uVar1;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_84 = (iStack_80 - iVar9) + 0x1f;
    if (iVar7 < iStack_84) {
LAB_1419c531b:
      iStack_84 = iVar7;
    }
  }
  local_88 = 0xffffffff;
  uStack_60 = CONCAT44(iStack_84,0xffffffff);
  auStack_20._8_4_ = iStack_80;
  auStack_20._0_8_ = uStack_60;
  auStack_20._12_4_ = uStack_7c;
  uStack_70 = CONCAT44(uStack_94,local_98);
  local_40 = 0;
  local_10._0_4_ = SUB84(local_78,0);
  local_10._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  iVar7 = iStack_84;
  local_68 = puStack_90;
  local_48 = local_78;
  local_38 = local_78;
  uStack_30 = uStack_70;
  puStack_28 = puStack_90;
  local_10 = local_78;
  if (iStack_84 < (int)param_1[7]) {
    do {
      plVar3 = local_78;
      (**(code **)(**(longlong **)(*local_78 + 8 + (longlong)iVar7 * 0x18) + 0x10))();
      uVar6 = FName::ToString(*plVar3 + (longlong)iVar7 * 0x18,&local_98);
      GetSocketModuleName(&local_res8,uVar6);
      if (CONCAT44(uStack_94,local_98) != 0) {
        FMemory::Free();
      }
      FModuleManager::UnloadModule(uVar5,local_res8,1);
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      iVar7 = uStack_60._4_4_;
    } while (uStack_60._4_4_ < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1419c5430 FUN_1419c5430 body=448 status=ok
// SIG undefined FUN_1419c5430(void)

undefined8 FUN_1419c5430(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong local_res8;
  undefined8 local_res18;
  longlong local_28 [2];
  
  local_res18 = 0;
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar6 = param_1 + 0x48;
    }
    iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_1419c54c3;
          break;
        }
        iVar2 = *(int *)(puVar5 + 2);
      } while (iVar2 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_1419c54c3:
  puVar7 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 == (undefined8 *)0x0) {
    local_res8 = param_2;
    uVar3 = FName::ToString(&local_res8,local_28);
    uVar4 = FUN_14168dc80();
    puVar5 = (undefined8 *)GetSocketModuleName(&local_res18,uVar3);
    uVar3 = *puVar5;
    cVar1 = FModuleManager::IsModuleLoaded(uVar4,uVar3);
    if (cVar1 == '\0') {
      FUN_141690010(uVar4,uVar3);
    }
    lVar6 = FModuleManager::GetModule(uVar4,uVar3);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) {
        return 0;
      }
      lVar6 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar6 = param_1 + 0x48;
      }
      iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8) &
                               (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
      if (iVar2 == -1) {
        return 0;
      }
      while (lVar6 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x18,
            *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x18) != local_res8) {
        iVar2 = *(int *)(lVar6 + 0x10);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (iVar2 == -1) {
        return 0;
      }
      if (lVar6 == 0) {
        return 0;
      }
      puVar7 = (undefined8 *)(lVar6 + 8);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
  }
  return *puVar7;
}



// FUNCTION 1419c55f0 RegisterSocketSubsystem body=193 status=ok
// SIG undefined RegisterSocketSubsystem(void)

void FSocketSubsystemModule::RegisterSocketSubsystem
               (longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_18;
  undefined8 *local_10;
  
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar2 = param_1 + 0x48;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_1419c569d;
          break;
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_18 = &local_res10;
  local_10 = &local_res18;
  local_res18 = param_3;
  FUN_1404a88c0(param_1 + 0x10,local_res20,&local_18,0);
LAB_1419c569d:
  if (param_4 != '\0') {
    *(longlong *)(param_1 + 8) = local_res10;
  }
  return;
}



// FUNCTION 1419c5730 FUN_1419c5730 body=410 status=ok
// SIG undefined FUN_1419c5730(void)

void FUN_1419c5730(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong local_res10;
  longlong local_28 [2];
  
  FName::FName(&local_res10,L"WINDOWS",1);
  if (DAT_1469f5960 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0xc0);
    if (plVar2 == (longlong *)0x0) {
      DAT_1469f5960 = (longlong *)0x0;
    }
    else {
      *plVar2 = (longlong)&PTR_FUN_143f9b018;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(plVar2 + 3));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar2 + 3),4000);
      plVar2[8] = 0;
      plVar2[9] = 0;
      plVar2[0xc] = 0;
      plVar2[0xd] = 0;
      *(undefined4 *)(plVar2 + 0xe) = 0xffffffff;
      *(undefined4 *)((longlong)plVar2 + 0x74) = 0;
      plVar2[0x10] = 0;
      *(undefined4 *)(plVar2 + 0x11) = 0;
      *plVar2 = (longlong)&PTR_FUN_144d83370;
      InitializeCriticalSection((LPCRITICAL_SECTION)(plVar2 + 0x12));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar2 + 0x12),4000);
      *(undefined1 *)(plVar2 + 0x17) = 0;
      *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144d83440;
      DAT_1469f5960 = plVar2;
    }
  }
  plVar2 = DAT_1469f5960;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = (**(code **)(*DAT_1469f5960 + 8))(DAT_1469f5960,local_28);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,local_res10,plVar2,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    param_1[1] = local_res10;
    return;
  }
  if (DAT_1469f5960 != (longlong *)0x0) {
    (**(code **)(*DAT_1469f5960 + 0x10))();
    if (DAT_1469f5960 != (longlong *)0x0) {
      (**(code **)*DAT_1469f5960)(DAT_1469f5960,1);
    }
    DAT_1469f5960 = (longlong *)0x0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1419c58d0 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSocketSubsystemModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d82358;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1419c5940 FUN_1419c5940 body=630 status=ok
// SIG undefined FUN_1419c5940(void)

int * FUN_1419c5940(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  bool bVar14;
  int local_res8 [2];
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x28);
  puVar3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  *_Src = 0;
  *_Src = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  _Src[2] = *puVar4;
  lVar5 = puVar4[1];
  _Src[3] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar14 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar14 = local_res8[0] != -1;
    if (bVar14) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419c5b8d;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar7 = (uVar11 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar7 = (uVar11 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*_Src;
    }
    uVar11 = FUN_140438070(puVar10);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)_Src + 0x24) = uVar11;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1419c5b8d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 1419c5bc0 FUN_1419c5bc0 body=147 status=ok
// SIG undefined FUN_1419c5bc0(void)

undefined8 * FUN_1419c5bc0(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__144d83158;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144d83180;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar2 = puVar1;
  }
  param_1[0x24] = puVar2;
  strncpy((char *)(param_1 + 3),param_2,0x100);
  *(undefined1 *)((longlong)param_1 + 0x117) = 0;
  return param_1;
}



// FUNCTION 1419c5c60 FUN_1419c5c60 body=153 status=ok
// SIG undefined FUN_1419c5c60(void)

void FUN_1419c5c60(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d83158;
  plVar4 = (longlong *)param_1[0x24];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
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
    *param_1 = &PTR_FUN_144024f50;
    return;
  }
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 1419c5d00 FUN_1419c5d00 body=101 status=ok
// SIG undefined FUN_1419c5d00(void)

void FUN_1419c5d00(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  *param_1 = &PTR_FUN_143f9b018;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  return;
}



// FUNCTION 1419c5da0 FUN_1419c5da0 body=84 status=ok
// SIG undefined FUN_1419c5da0(void)

undefined8 * FUN_1419c5da0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d83180;
  FUN_1415b5910(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}


