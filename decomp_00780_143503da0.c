// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143503da0 FUN_143503da0 body=33 status=ok
// SIG undefined FUN_143503da0(void)

undefined8 * FUN_143503da0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b24718;
  return param_1;
}



// FUNCTION 143503dd0 FUN_143503dd0 body=176 status=ok
// SIG undefined FUN_143503dd0(void)

void FUN_143503dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b24658;
    puVar1[8] = 0;
    puVar1[9] = 0;
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



// FUNCTION 143503e90 FUN_143503e90 body=33 status=ok
// SIG undefined FUN_143503e90(void)

undefined8 * FUN_143503e90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143503ec0 FUN_143503ec0 body=214 status=ok
// SIG undefined FUN_143503ec0(void)

undefined8 * FUN_143503ec0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c970);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c970);
    *puVar2 = &PTR_FUN_145b24718;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143503fa0 FUN_143503fa0 body=33 status=ok
// SIG undefined FUN_143503fa0(void)

undefined8 * FUN_143503fa0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143503fd0 FUN_143503fd0 body=215 status=ok
// SIG undefined FUN_143503fd0(void)

undefined8 * FUN_143503fd0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1ef00);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b1ef00);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435040b0 FUN_1435040b0 body=33 status=ok
// SIG undefined FUN_1435040b0(void)

undefined8 * FUN_1435040b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435040e0 FUN_1435040e0 body=215 status=ok
// SIG undefined FUN_1435040e0(void)

undefined8 * FUN_1435040e0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f020);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b1f020);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435041c0 FUN_1435041c0 body=33 status=ok
// SIG undefined FUN_1435041c0(void)

undefined8 * FUN_1435041c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435041f0 FUN_1435041f0 body=215 status=ok
// SIG undefined FUN_1435041f0(void)

undefined8 * FUN_1435041f0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f488);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b1f488);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435042d0 FUN_1435042d0 body=49 status=ok
// SIG undefined FUN_1435042d0(void)

undefined8 * FUN_1435042d0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b24790;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 143504310 AS3Constructor body=114 status=ok
// SIG undefined AS3Constructor(void)

void Scaleform::GFx::AS3::Instances::fl_display::GraphicsBitmapFill::AS3Constructor
               (longlong param_1,uint param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (param_2 < 5) {
    if (param_2 != 0) {
      FUN_1434f0700(param_1 + 0x40,*(undefined8 *)(param_3 + 0x10));
    }
    if (1 < param_2) {
      FUN_1434f0700(param_1 + 0x48,*(undefined8 *)(param_3 + 0x30));
    }
    if (2 < param_2) {
      uVar1 = FUN_1435909c0(param_3 + 0x40);
      *(undefined1 *)(param_1 + 0x50) = uVar1;
    }
    if (param_2 == 4) {
      uVar1 = FUN_1435909c0(param_3 + 0x60);
      *(undefined1 *)(param_1 + 0x51) = uVar1;
    }
  }
  return;
}



// FUNCTION 143504390 FUN_143504390 body=33 status=ok
// SIG undefined FUN_143504390(void)

undefined8 * FUN_143504390(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b24850;
  return param_1;
}



// FUNCTION 1435043c0 FUN_1435043c0 body=182 status=ok
// SIG undefined FUN_1435043c0(void)

void FUN_1435043c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b24790;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined2 *)(puVar1 + 10) = 1;
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



// FUNCTION 143504480 FUN_143504480 body=33 status=ok
// SIG undefined FUN_143504480(void)

undefined8 * FUN_143504480(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435044b0 FUN_1435044b0 body=214 status=ok
// SIG undefined FUN_1435044b0(void)

undefined8 * FUN_1435044b0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f5f8);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f5f8);
    *puVar2 = &PTR_FUN_145b24850;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143504590 FUN_143504590 body=33 status=ok
// SIG undefined FUN_143504590(void)

undefined8 * FUN_143504590(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b17510;
  return param_1;
}



// FUNCTION 1435045c0 FUN_1435045c0 body=33 status=ok
// SIG undefined FUN_1435045c0(void)

undefined8 * FUN_1435045c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b248c8;
  return param_1;
}



// FUNCTION 1435045f0 FUN_1435045f0 body=173 status=ok
// SIG undefined FUN_1435045f0(void)

void FUN_1435045f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar1 = &PTR_FUN_145b17510;
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



// FUNCTION 1435046b0 FUN_1435046b0 body=33 status=ok
// SIG undefined FUN_1435046b0(void)

undefined8 * FUN_1435046b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435046e0 FUN_1435046e0 body=214 status=ok
// SIG undefined FUN_1435046e0(void)

undefined8 * FUN_1435046e0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b20288);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b20288);
    *puVar2 = &PTR_FUN_145b248c8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435047c0 FUN_1435047c0 body=154 status=ok
// SIG undefined FUN_1435047c0(void)

undefined8 * FUN_1435047c0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b24940;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xb] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xe] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xf] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143504860 FUN_143504860 body=1067 status=ok
// SIG undefined FUN_143504860(void)

void FUN_143504860(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  longlong local_res18;
  undefined8 *local_res20;
  undefined1 local_58 [8];
  longlong local_50;
  
  lVar12 = 0;
  local_res8[0] = 0;
  local_res10[0] = param_2;
  local_res18 = param_3;
  FUN_1433601c0(param_1 + 0x78,"linear");
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar2 - 1;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = uVar2 - 1;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = uVar2 - 1;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = uVar2 - 1;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_1433601c0(param_1 + 0x70,&DAT_145b16e38);
  FUN_1433601c0(param_1 + 0x58,&DAT_145b12be4);
  local_res20 = (undefined8 *)(param_1 + 0x50);
  *local_res20 = 0;
  if (local_res10[0] != 0) {
    pcVar6 = (char *)FUN_1435911f0(local_res18,local_res8,param_1 + 0x78);
    if (*pcVar6 == '\0') {
      return;
    }
    lVar9 = lVar12;
    do {
      lVar8 = lVar9 + 1;
      lVar13 = lVar12;
      if (*(char *)(**(longlong **)(param_1 + 0x78) + lVar9) != "linear"[lVar9]) goto LAB_143504a70;
      lVar9 = lVar8;
    } while (lVar8 != 7);
  }
  goto LAB_1435049d8;
  while (lVar11 = lVar10, lVar10 != 8) {
LAB_143504bc2:
    lVar10 = lVar11 + 1;
    lVar8 = lVar12;
    if (*(char *)(lVar13 + lVar11) != "reflect"[lVar11]) goto LAB_143504be2;
  }
  goto LAB_143504bfa;
  while (lVar8 = lVar11, lVar11 != 7) {
LAB_143504be2:
    lVar11 = lVar8 + 1;
    if (*(char *)(lVar13 + lVar8) != "repeat"[lVar8]) goto LAB_143504a89;
  }
  goto LAB_143504bfa;
  while (lVar13 = lVar9, lVar9 != 7) {
LAB_143504a70:
    lVar9 = lVar13 + 1;
    if (*(char *)(**(longlong **)(param_1 + 0x78) + lVar13) != "radial"[lVar13]) goto LAB_143504a89;
  }
LAB_1435049d8:
  uVar4 = local_res10[0];
  if (1 < local_res10[0]) {
    if ((*(longlong *)(local_res18 + 0x30) != 0) &&
       ((lVar9 = *(longlong *)(*(longlong *)(local_res18 + 0x30) + 0x28),
        *(int *)(lVar9 + 0x90) != 7 || ((~(*(byte *)(lVar9 + 0x88) >> 5) & 1) == 0))))
    goto LAB_143504a1e;
    FUN_1434f0700(param_1 + 0x48);
  }
  lVar9 = local_res18;
  if (2 < uVar4) {
    if ((*(longlong *)(local_res18 + 0x50) != 0) &&
       ((lVar13 = *(longlong *)(*(longlong *)(local_res18 + 0x50) + 0x28),
        *(int *)(lVar13 + 0x90) != 7 || ((~(*(byte *)(lVar13 + 0x88) >> 5) & 1) == 0))))
    goto LAB_143504a1e;
    FUN_1434f0700(param_1 + 0x40);
  }
  if (3 < uVar4) {
    if ((*(longlong *)(lVar9 + 0x70) != 0) &&
       ((lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x70) + 0x28), *(int *)(lVar13 + 0x90) != 7 ||
        ((~(*(byte *)(lVar13 + 0x88) >> 5) & 1) == 0)))) {
LAB_143504a1e:
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar7 = FUN_1435c8e40(local_58,0x40a,uVar3);
      FUN_1435cbef0(uVar3,uVar7);
      piVar1 = (int *)(local_50 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    FUN_1434f0700(param_1 + 0x68);
  }
  if (4 < uVar4) {
    FUN_1434f0700(param_1 + 0x60,*(undefined8 *)(lVar9 + 0x90));
  }
  if (5 < uVar4) {
    pcVar6 = (char *)FUN_1435911f0(lVar9 + 0xa0,local_res10,param_1 + 0x70);
    if (*pcVar6 == '\0') {
      return;
    }
    lVar13 = **(longlong **)(param_1 + 0x70);
    lVar8 = lVar12;
    do {
      lVar10 = lVar8 + 1;
      lVar11 = lVar12;
      if (*(char *)(lVar13 + lVar8) != (&DAT_145b16e38)[lVar8]) goto LAB_143504bc2;
      lVar8 = lVar10;
    } while (lVar10 != 4);
  }
LAB_143504bfa:
  if (6 < uVar4) {
    pcVar6 = (char *)FUN_1435911f0(lVar9 + 0xc0,local_res10,param_1 + 0x58);
    if (*pcVar6 == '\0') {
      return;
    }
    do {
      lVar13 = lVar12 + 1;
      if (((char *)**(undefined8 **)(param_1 + 0x58))[lVar12] != (&DAT_145b12be4)[lVar12]) {
        iVar5 = _guard_xfg_dispatch_icall_nop((char *)**(undefined8 **)(param_1 + 0x58),"linearRGB")
        ;
        if (iVar5 != 0) {
LAB_143504a89:
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar7 = FUN_1435c8e40(local_58,0x7d8,uVar3);
          FUN_1435cbef0(uVar3,uVar7);
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        break;
      }
      lVar12 = lVar13;
    } while (lVar13 != 4);
  }
  if (7 < uVar4) {
    FUN_143590af0(lVar9 + 0xe0,local_res10,local_res20);
  }
  return;
}



// FUNCTION 143504ca0 FUN_143504ca0 body=33 status=ok
// SIG undefined FUN_143504ca0(void)

undefined8 * FUN_143504ca0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b24a00;
  return param_1;
}



// FUNCTION 143504cd0 FUN_143504cd0 body=141 status=ok
// SIG undefined FUN_143504cd0(void)

void FUN_143504cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1435047c0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
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



// FUNCTION 143504d70 FUN_143504d70 body=33 status=ok
// SIG undefined FUN_143504d70(void)

undefined8 * FUN_143504d70(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143504da0 FUN_143504da0 body=214 status=ok
// SIG undefined FUN_143504da0(void)

undefined8 * FUN_143504da0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b21690);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b21690);
    *puVar2 = &PTR_FUN_145b24a00;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143504e80 FUN_143504e80 body=84 status=ok
// SIG undefined FUN_143504e80(void)

undefined8 * FUN_143504e80(undefined8 *param_1)

{
  longlong lVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b24a78;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar1 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),"evenOdd")
  ;
  param_1[10] = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return param_1;
}



// FUNCTION 143504ee0 FUN_143504ee0 body=555 status=ok
// SIG undefined FUN_143504ee0(void)

void FUN_143504ee0(longlong param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_res10 [4];
  longlong local_res20;
  undefined1 local_38 [8];
  longlong local_30;
  
  lVar11 = 0;
  local_res10[0] = 0;
  if (3 < param_2) {
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_38,0x427,uVar10);
    FUN_1435cbef0(uVar10,uVar6);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (param_2 == 0) {
LAB_143504fbc:
    bVar3 = false;
    if (1 < param_2) {
      if (((byte)param_3[8] & 0x1f) == 0xc) {
        plVar2 = *(longlong **)(param_3 + 0xc);
        if (plVar2 != (longlong *)0x0) {
          bVar3 = true;
          puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x78))(plVar2,&local_res20);
          iVar5 = _guard_xfg_dispatch_icall_nop(*(char **)*puVar7,"Vector$double");
          if (iVar5 != 0) goto LAB_143505007;
        }
        bVar4 = true;
      }
      else {
LAB_143505007:
        bVar4 = false;
      }
      if (bVar3) {
        piVar1 = (int *)(local_res20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (!bVar4) goto LAB_143504ffd;
      FUN_1434f0700(param_1 + 0x48,*(undefined8 *)(param_3 + 0xc));
    }
    if (param_2 < 3) {
      return;
    }
    pcVar8 = (char *)FUN_1435911f0(param_3 + 0x10,local_res10,param_1 + 0x50);
    if (*pcVar8 == '\0') {
      return;
    }
    lVar12 = lVar11;
    while (lVar9 = lVar12 + 1,
          *(char *)(**(longlong **)(param_1 + 0x50) + lVar12) == "evenOdd"[lVar12]) {
      lVar12 = lVar9;
      if (lVar9 == 8) {
        return;
      }
    }
    while (lVar12 = lVar11 + 1,
          *(char *)(**(longlong **)(param_1 + 0x50) + lVar11) == "nonZero"[lVar11]) {
      lVar11 = lVar12;
      if (lVar12 == 8) {
        return;
      }
    }
    uVar10 = 0x7d8;
  }
  else {
    lVar12 = lVar11;
    if (((byte)*param_3 & 0x1f) == 0xc) {
      plVar2 = *(longlong **)(param_3 + 4);
      if (plVar2 != (longlong *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x78))(plVar2,&local_res20);
        lVar12 = 1;
        iVar5 = _guard_xfg_dispatch_icall_nop(*(char **)*puVar7,"Vector$int");
        if (iVar5 != 0) goto LAB_143504f8e;
      }
      bVar3 = true;
    }
    else {
LAB_143504f8e:
      bVar3 = false;
    }
    if (lVar12 != 0) {
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (bVar3) {
      FUN_1434f0700(param_1 + 0x40,*(undefined8 *)(param_3 + 4));
      goto LAB_143504fbc;
    }
LAB_143504ffd:
    uVar10 = 0x40a;
  }
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar10 = FUN_1435c8e40(local_38,uVar10,uVar6);
  FUN_1435cbef0(uVar6,uVar10);
  piVar1 = (int *)(local_30 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143505120 FUN_143505120 body=62 status=ok
// SIG undefined FUN_143505120(void)

void FUN_143505120(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 143505170 FUN_143505170 body=184 status=ok
// SIG undefined FUN_143505170(void)

void FUN_143505170(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  param_3 = (longlong *)*param_3;
  lVar3 = 0;
  lVar4 = lVar3;
  do {
    lVar6 = lVar4 + 1;
    if (*(char *)(*param_3 + lVar4) != "evenOdd"[lVar4]) goto LAB_1435051b0;
    lVar4 = lVar6;
  } while (lVar6 != 8);
LAB_1435051c4:
  *(int *)(param_3 + 3) = (int)param_3[3] + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong **)(param_1 + 0x50) = param_3;
  return;
LAB_1435051b0:
  do {
    lVar4 = lVar3 + 1;
    if (*(char *)(*param_3 + lVar3) != "nonZero"[lVar3]) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar5 = FUN_1435c8e40(local_18,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar5);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      return;
    }
    lVar3 = lVar4;
  } while (lVar4 != 8);
  goto LAB_1435051c4;
}



// FUNCTION 143505230 FUN_143505230 body=144 status=ok
// SIG undefined FUN_143505230(void)

void FUN_143505230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1435161a0(*(undefined8 *)(param_1 + 0x40),6);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_5);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_4);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_6);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_7);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_8);
  return;
}



// FUNCTION 1435052d0 FUN_1435052d0 body=108 status=ok
// SIG undefined FUN_1435052d0(void)

void FUN_1435052d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1435161a0(*(undefined8 *)(param_1 + 0x40),3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_4);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_5);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_6);
  return;
}



// FUNCTION 143505350 FUN_143505350 body=78 status=ok
// SIG undefined FUN_143505350(void)

void FUN_143505350(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1435161a0(*(undefined8 *)(param_1 + 0x40),2);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_4);
  return;
}



// FUNCTION 1435053b0 FUN_1435053b0 body=78 status=ok
// SIG undefined FUN_1435053b0(void)

void FUN_1435053b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1435161a0(*(undefined8 *)(param_1 + 0x40),2);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_4);
  return;
}



// FUNCTION 143505410 FUN_143505410 body=78 status=ok
// SIG undefined FUN_143505410(void)

void FUN_143505410(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1435161a0(*(undefined8 *)(param_1 + 0x40),5);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_4);
  return;
}



// FUNCTION 143505470 FUN_143505470 body=78 status=ok
// SIG undefined FUN_143505470(void)

void FUN_143505470(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1435161a0(*(undefined8 *)(param_1 + 0x40),4);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_3);
  FUN_143516110(*(undefined8 *)(param_1 + 0x48),param_4);
  return;
}



// FUNCTION 1435054d0 FUN_1435054d0 body=33 status=ok
// SIG undefined FUN_1435054d0(void)

undefined8 * FUN_1435054d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b24b38;
  return param_1;
}



// FUNCTION 143505500 FUN_143505500 body=218 status=ok
// SIG undefined FUN_143505500(void)

void FUN_143505500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b24a78;
    puVar1[8] = 0;
    puVar1[9] = 0;
    lVar2 = FUN_143360a60(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(puVar1[5] + 0x98) + 0x10) + 0x218),"evenOdd"
                         );
    puVar1[10] = lVar2;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
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



// FUNCTION 1435055e0 FUN_1435055e0 body=33 status=ok
// SIG undefined FUN_1435055e0(void)

undefined8 * FUN_1435055e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143505610 FUN_143505610 body=214 status=ok
// SIG undefined FUN_143505610(void)

undefined8 * FUN_143505610(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c610);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c610);
    *puVar2 = &PTR_FUN_145b24b38;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435056f0 UTresFieldGenerateTargetParam_e_ex357 body=42 status=ok
// SIG undefined UTresFieldGenerateTargetParam_e_ex357(void)

undefined8 *
UTresFieldGenerateTargetParam_e_ex357::UTresFieldGenerateTargetParam_e_ex357(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b24bb0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143505720 FUN_143505720 body=105 status=ok
// SIG undefined FUN_143505720(void)

void FUN_143505720(longlong param_1,uint param_2,longlong param_3)

{
  undefined1 local_res10 [8];
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  if (param_2 != 0) {
    FUN_143590eb0(param_3,local_res10,param_1 + 0x48);
  }
  if (1 < param_2) {
    FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x40);
  }
  return;
}



// FUNCTION 143505790 FUN_143505790 body=33 status=ok
// SIG undefined FUN_143505790(void)

undefined8 * FUN_143505790(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b24c70;
  return param_1;
}



// FUNCTION 1435057c0 FUN_1435057c0 body=175 status=ok
// SIG undefined FUN_1435057c0(void)

void FUN_1435057c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b24bb0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
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



// FUNCTION 143505880 FUN_143505880 body=33 status=ok
// SIG undefined FUN_143505880(void)

undefined8 * FUN_143505880(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435058b0 FUN_1435058b0 body=214 status=ok
// SIG undefined FUN_1435058b0(void)

undefined8 * FUN_1435058b0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e2e8);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e2e8);
    *puVar2 = &PTR_FUN_145b24c70;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143505990 FUN_143505990 body=149 status=ok
// SIG undefined FUN_143505990(void)

undefined8 * FUN_143505990(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b24ce8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[10] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xd] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 143505a30 FUN_143505a30 body=782 status=ok
// SIG undefined FUN_143505a30(void)

void FUN_143505a30(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  lVar10 = 0;
  local_res10[0] = 0;
  FUN_1433601c0(param_1 + 0x68,"normal");
  FUN_1433601c0(param_1 + 0x40,&DAT_145b122f4);
  FUN_1433601c0(param_1 + 0x50,"round");
  *(undefined8 *)(param_1 + 0x58) = 0x4008000000000000;
  uVar11 = Scaleform::GFx::NumberUtil::NaN();
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  if ((param_2 != 0) &&
     (pcVar4 = (char *)FUN_143590af0(param_3,local_res10,param_1 + 0x70), *pcVar4 == '\0')) {
    return;
  }
  if (1 < param_2) {
    uVar2 = FUN_1435909c0(param_3 + 0x20);
    *(undefined1 *)(param_1 + 0x60) = uVar2;
  }
  if (2 < param_2) {
    pcVar4 = (char *)FUN_1435911f0(param_3 + 0x40,local_res10,param_1 + 0x68);
    if (*pcVar4 == '\0') {
      return;
    }
    pcVar4 = (char *)**(undefined8 **)(param_1 + 0x68);
    lVar8 = lVar10;
    do {
      lVar6 = lVar8 + 1;
      lVar9 = lVar10;
      if (pcVar4[lVar8] != "normal"[lVar8]) goto LAB_143505be0;
      lVar8 = lVar6;
    } while (lVar6 != 7);
  }
  goto LAB_143505b20;
  while (lVar9 = lVar8, lVar8 != 5) {
LAB_143505be0:
    lVar8 = lVar9 + 1;
    if (pcVar4[lVar9] != (&DAT_145b122f4)[lVar9]) {
      iVar3 = _guard_xfg_dispatch_icall_nop(pcVar4,"vertical");
      if ((iVar3 != 0) && (iVar3 = _guard_xfg_dispatch_icall_nop(pcVar4,"horizontal"), iVar3 != 0))
      goto LAB_143505c26;
      break;
    }
  }
LAB_143505b20:
  if (3 < param_2) {
    pcVar4 = (char *)FUN_1435911f0(param_3 + 0x60,local_res10,param_1 + 0x40);
    if (*pcVar4 == '\0') {
      return;
    }
    lVar8 = **(longlong **)(param_1 + 0x40);
    lVar9 = lVar10;
    do {
      lVar7 = lVar9 + 1;
      lVar6 = lVar10;
      if (*(char *)(lVar8 + lVar9) != (&DAT_145b122f4)[lVar9]) goto LAB_143505c71;
      lVar9 = lVar7;
    } while (lVar7 != 5);
  }
  goto LAB_143505b6e;
  while (lVar6 = lVar7, lVar7 != 6) {
LAB_143505c71:
    lVar7 = lVar6 + 1;
    lVar9 = lVar10;
    if (*(char *)(lVar8 + lVar6) != "round"[lVar6]) goto LAB_143505c93;
  }
  goto LAB_143505b6e;
  while (lVar6 = lVar9, lVar9 != 6) {
LAB_143505cc0:
    lVar9 = lVar6 + 1;
    if (*(char *)(lVar8 + lVar6) != "miter"[lVar6]) goto LAB_143505ce0;
  }
  goto LAB_143505cf7;
LAB_143505ce0:
  do {
    lVar9 = lVar10 + 1;
    if (*(char *)(lVar8 + lVar10) != "round"[lVar10]) {
LAB_143505c26:
      uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar5 = FUN_1435c8e40(local_38,0x7d8,uVar11);
      FUN_1435cbef0(uVar11,uVar5);
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    lVar10 = lVar9;
  } while (lVar9 != 6);
  goto LAB_143505cf7;
  while (lVar9 = lVar6, lVar6 != 7) {
LAB_143505c93:
    lVar6 = lVar9 + 1;
    if (*(char *)(lVar8 + lVar9) != "square"[lVar9]) goto LAB_143505c26;
  }
LAB_143505b6e:
  if (4 < param_2) {
    pcVar4 = (char *)FUN_1435911f0(param_3 + 0x80,local_res10,param_1 + 0x50);
    if (*pcVar4 == '\0') {
      return;
    }
    lVar8 = **(longlong **)(param_1 + 0x50);
    lVar9 = lVar10;
    do {
      lVar7 = lVar9 + 1;
      lVar6 = lVar10;
      if (*(char *)(lVar8 + lVar9) != "bevel"[lVar9]) goto LAB_143505cc0;
      lVar9 = lVar7;
    } while (lVar7 != 6);
  }
LAB_143505cf7:
  if (((param_2 < 6) ||
      (pcVar4 = (char *)FUN_143590af0(param_3 + 0xa0,local_res10,param_1 + 0x58), *pcVar4 != '\0'))
     && (6 < param_2)) {
    FUN_1434f0700(param_1 + 0x48,*(undefined8 *)(param_3 + 0xd0));
  }
  return;
}



// FUNCTION 143505d50 FUN_143505d50 body=33 status=ok
// SIG undefined FUN_143505d50(void)

undefined8 * FUN_143505d50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b24da8;
  return param_1;
}



// FUNCTION 143505d80 FUN_143505d80 body=141 status=ok
// SIG undefined FUN_143505d80(void)

void FUN_143505d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143505990(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
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



// FUNCTION 143505e20 FUN_143505e20 body=33 status=ok
// SIG undefined FUN_143505e20(void)

undefined8 * FUN_143505e20(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143505e50 FUN_143505e50 body=214 status=ok
// SIG undefined FUN_143505e50(void)

undefined8 * FUN_143505e50(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1ef60);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1ef60);
    *puVar2 = &PTR_FUN_145b24da8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143505f30 FUN_143505f30 body=33 status=ok
// SIG undefined FUN_143505f30(void)

undefined8 * FUN_143505f30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143505f60 FUN_143505f60 body=253 status=ok
// SIG undefined FUN_143505f60(void)

undefined8 * FUN_143505f60(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e0f0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1e0f0);
  }
  FUN_1435b8600(*param_1,uVar4);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,*param_1);
    *(undefined4 *)(puVar2 + 10) = 6;
    *puVar2 = &PTR_ForEachChild_GC_145b24fa0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 3;
    *(undefined4 *)(puVar2 + 0xb) = 2;
    *(undefined8 *)((longlong)puVar2 + 0x5c) = 1;
    *(undefined4 *)((longlong)puVar2 + 100) = 5;
    *(undefined4 *)(puVar2 + 0xd) = 4;
  }
  return param_1;
}



// FUNCTION 143506070 FUN_143506070 body=76 status=ok
// SIG undefined FUN_143506070(void)

undefined8 * FUN_143506070(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 6;
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)((longlong)param_1 + 100) = 5;
  *(undefined4 *)(param_1 + 0xd) = 4;
  return param_1;
}



// FUNCTION 1435060d0 FUN_1435060d0 body=33 status=ok
// SIG undefined FUN_1435060d0(void)

undefined8 * FUN_1435060d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143506100 FUN_143506100 body=250 status=ok
// SIG undefined FUN_143506100(void)

undefined8 * FUN_143506100(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e9c0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1e9c0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "evenOdd";
    puVar5[0xb] = "nonZero";
  }
  return param_1;
}



// FUNCTION 143506200 FUN_143506200 body=55 status=ok
// SIG undefined FUN_143506200(void)

undefined8 * FUN_143506200(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "evenOdd";
  param_1[0xb] = "nonZero";
  return param_1;
}



// FUNCTION 143506240 FUN_143506240 body=33 status=ok
// SIG undefined FUN_143506240(void)

undefined8 * FUN_143506240(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143506270 FUN_143506270 body=250 status=ok
// SIG undefined FUN_143506270(void)

undefined8 * FUN_143506270(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1eba0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1eba0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "linearRGB";
    puVar5[0xb] = &DAT_145b12be4;
  }
  return param_1;
}



// FUNCTION 143506370 FUN_143506370 body=55 status=ok
// SIG undefined FUN_143506370(void)

undefined8 * FUN_143506370(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "linearRGB";
  param_1[0xb] = &DAT_145b12be4;
  return param_1;
}



// FUNCTION 1435063b0 FUN_1435063b0 body=33 status=ok
// SIG undefined FUN_1435063b0(void)

undefined8 * FUN_1435063b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435063e0 FUN_1435063e0 body=261 status=ok
// SIG undefined FUN_1435063e0(void)

undefined8 * FUN_1435063e0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f4e8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1f4e8);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "bevel";
    puVar5[0xb] = "miter";
    puVar5[0xc] = "round";
  }
  return param_1;
}



// FUNCTION 1435064f0 FUN_1435064f0 body=66 status=ok
// SIG undefined FUN_1435064f0(void)

undefined8 * FUN_1435064f0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "bevel";
  param_1[0xb] = "miter";
  param_1[0xc] = "round";
  return param_1;
}



// FUNCTION 143506540 FUN_143506540 body=33 status=ok
// SIG undefined FUN_143506540(void)

undefined8 * FUN_143506540(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143506570 FUN_143506570 body=272 status=ok
// SIG undefined FUN_143506570(void)

undefined8 * FUN_143506570(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b20060);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b20060);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "horizontal";
    puVar5[0xb] = &DAT_145b122f4;
    puVar5[0xc] = "normal";
    puVar5[0xd] = "vertical";
  }
  return param_1;
}



// FUNCTION 143506690 FUN_143506690 body=77 status=ok
// SIG undefined FUN_143506690(void)

undefined8 * FUN_143506690(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "horizontal";
  param_1[0xb] = &DAT_145b122f4;
  param_1[0xc] = "normal";
  param_1[0xd] = "vertical";
  return param_1;
}



// FUNCTION 143506710 FUN_143506710 body=56 status=ok
// SIG undefined FUN_143506710(void)

void FUN_143506710(longlong param_1)

{
  FUN_1434ff8e0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xa0),
                *(undefined8 *)(param_1 + 0x10));
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014350673e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143506750 FUN_143506750 body=33 status=ok
// SIG undefined FUN_143506750(void)

undefined8 * FUN_143506750(undefined8 *param_1)

{
  FUN_1434f20e0();
  *param_1 = &PTR_ForEachChild_GC_145b232a8;
  return param_1;
}



// FUNCTION 143506780 FUN_143506780 body=43 status=ok
// SIG undefined FUN_143506780(void)

undefined8 * FUN_143506780(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x1b;
  *param_1 = &PTR_FUN_145b25480;
  return param_1;
}



// FUNCTION 1435067c0 FUN_1435067c0 body=173 status=ok
// SIG undefined FUN_1435067c0(void)

void FUN_1435067c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1434f20e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b232a8;
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



// FUNCTION 143506880 FUN_143506880 body=43 status=ok
// SIG undefined FUN_143506880(void)

undefined8 * FUN_143506880(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x1b;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435068c0 FUN_1435068c0 body=234 status=ok
// SIG undefined FUN_1435068c0(void)

undefined8 * FUN_1435068c0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b22040);
    *(undefined4 *)(puVar2 + 0x12) = 0x1b;
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
              (puVar2,param_2,&PTR_DAT_145b22040);
    *(undefined4 *)(puVar2 + 0x12) = 0x1b;
    *puVar2 = &PTR_FUN_145b25480;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435069b0 FUN_1435069b0 body=49 status=ok
// SIG undefined FUN_1435069b0(void)

undefined8 * FUN_1435069b0(undefined8 *param_1)

{
  FUN_1434f20e0();
  param_1[0x13] = 0;
  *param_1 = &PTR_ForEachChild_GC_145b254f8;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1435069f0 FUN_1435069f0 body=153 status=ok
// SIG undefined FUN_1435069f0(void)

void FUN_1435069f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b254f8;
  uVar1 = param_1[0x14];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x14] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 143506a90 FUN_143506a90 body=97 status=ok
// SIG undefined FUN_143506a90(void)

void FUN_143506a90(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_2 == '\0') {
    FUN_143506b50();
    lVar1 = param_1[0x11];
    uVar3 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root
                      (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
    FUN_1435f2710(uVar3,lVar1);
  }
  cVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
  if (cVar2 != '\0') {
    *(ushort *)(param_1[0x11] + 0x6a) = *(ushort *)(param_1[0x11] + 0x6a) | 0x800;
  }
  return;
}



// FUNCTION 143506b00 ForEachChild_GC body=63 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_display::Loader::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1434fb9e0();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 143506b50 FUN_143506b50 body=486 status=ok
// SIG undefined FUN_143506b50(void)

undefined8 FUN_143506b50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  RefCountNTSImpl *this;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  longlong local_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
  lVar4 = FUN_1435e8f40(*(longlong *)(param_1 + 0x40),param_1);
  if (lVar4 == 0) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  lVar8 = 0;
  local_38 = 0;
  lStack_30 = 0;
  lStack_28 = 0;
  FUN_1434f2330(param_1,&local_38,lVar4,1);
  if ((local_38 == 0) && (cVar3 = FUN_1435f30c0(lVar1,param_1,&local_38), cVar3 == '\0')) {
    local_res8[0] = 0x10001;
    plVar5 = (longlong *)FUN_143310f20(lVar4,local_20,local_res8);
    local_38 = *plVar5;
    lStack_28 = plVar5[2];
    lVar2 = *(longlong *)(param_1 + 0x40);
    lStack_30 = lVar4;
    if (*(longlong *)(lVar2 + 0x108) != 0) {
      uVar7 = *(longlong *)(lVar2 + 0x108) - 1;
      lStack_30 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar2 + 0x120) + (uVar7 >> 6) * 8) + 0x18 +
                       (ulonglong)((uint)uVar7 & 0x3f) * 0xa0) + 0xa0) + 0x178);
    }
  }
  local_res8[0] = 0x40000;
  this = (RefCountNTSImpl *)
         (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                   (*(longlong **)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x10),&local_38,0,
                    local_res8,3);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
  }
  *(RefCountNTSImpl **)(param_1 + 0x88) = this;
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    lVar8 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
  }
  FUN_1435e0fb0(lVar8,param_1);
  uVar6 = FUN_1435b5230(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 143506dc0 FUN_143506dc0 body=258 status=ok
// SIG undefined FUN_143506dc0(void)

void FUN_143506dc0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + 0x10);
  local_resc = *(undefined4 *)(lVar1 + 0x224c);
  local_res8 = *(undefined4 *)(lVar1 + 0x2248);
  lVar1 = FUN_1432e79b0(lVar1,&local_res8,0,1,*(longlong *)(param_1 + 0x88));
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                      (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
    plVar5 = (longlong *)0x0;
    plVar3 = (longlong *)(lVar2 + -0x38);
    if (lVar2 == 0) {
      plVar3 = plVar5;
    }
    (**(code **)(*plVar3 + 0x70))(plVar3,1);
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                      (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
    if (lVar1 != 0) {
      plVar5 = (longlong *)(lVar1 + -0x38);
    }
    uVar4 = plVar5[2];
    if (uVar4 == 0) {
      uVar4 = plVar5[1];
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 - 1;
    }
    FUN_1434f0700(param_2,uVar4);
    return;
  }
  uVar4 = *param_2;
  if (uVar4 != 0) {
    if ((uVar4 & 1) == 0) {
      if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *param_2 = uVar4 - 1;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143506ed0 FUN_143506ed0 body=256 status=ok
// SIG undefined FUN_143506ed0(void)

void FUN_143506ed0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  RefCountNTSImpl *this;
  char cVar3;
  longlong lVar4;
  
  puVar1 = (ulonglong *)(param_1 + 0xa0);
  if (*puVar1 == 0) {
    cVar3 = FUN_1435e8720(*(longlong *)(param_1 + 0x40),puVar1,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x308),0,0);
    if (cVar3 != '\0') {
      uVar2 = *puVar1;
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2a0))();
      if (lVar4 != 0) {
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      this = *(RefCountNTSImpl **)(uVar2 + 0x40);
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
      *(longlong *)(uVar2 + 0x40) = lVar4;
      *(undefined8 *)(*puVar1 + 0x48) = *(undefined8 *)(param_1 + 0x88);
    }
  }
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 143506fe0 FUN_143506fe0 body=164 status=ok
// SIG undefined FUN_143506fe0(void)

void FUN_143506fe0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x3c8))();
    if (lVar1 != 0) {
      uVar2 = *(ulonglong *)(lVar1 + 0x10 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      if (uVar2 == 0) {
        uVar2 = *(ulonglong *)(lVar1 + 8 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 - 1;
      }
      if ((uVar2 != 0) && (*(int *)(*(longlong *)(uVar2 + 0x28) + 0x90) - 0x20U < 2)) {
        FUN_1434f0700(param_2);
        return;
      }
    }
  }
  uVar2 = *param_2;
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *param_2 = uVar2 - 1;
      *param_2 = 0;
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143507090 FUN_143507090 body=96 status=ok
// SIG undefined FUN_143507090(void)

void FUN_143507090(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 != (longlong *)0x0) {
    if (param_3[0x11] == 0) {
      (**(code **)(*param_3 + 0xd0))(param_3);
    }
    FUN_143384c20(*(undefined8 *)(param_1 + 0x88),param_3[0x11]);
    return;
  }
  FUN_143384c20(*(undefined8 *)(param_1 + 0x88),0);
  return;
}



// FUNCTION 1435071d0 FUN_1435071d0 body=361 status=ok
// SIG undefined FUN_1435071d0(void)

void FUN_1435071d0(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  
  uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + 0x10);
  cVar2 = FUN_1432e3bd0(uVar4,0);
  if (cVar2 == '\0') {
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0xffffffff;
    if (param_4 != 0) {
      local_28 = 0x100;
      local_24 = CONCAT44((float)*(double *)(param_4 + 0x58) * 20.0,
                          (float)*(double *)(param_4 + 0x50) * 20.0);
      local_1c = CONCAT44((float)((double)(float)*(double *)(param_4 + 0x58) +
                                 *(double *)(param_4 + 0x40)) * 20.0,
                          (float)((double)(float)*(double *)(param_4 + 0x50) +
                                 *(double *)(param_4 + 0x48)) * 20.0);
    }
    local_38 = *(undefined8 *)(param_1 + 0x88);
    FUN_1432e2050(&local_38,param_3,0);
    FUN_1432e39c0(uVar4,&local_38);
    plVar1 = *(longlong **)(param_1 + 0x88);
    if (((*(uint *)(plVar1 + 0x17) >> 0x15 & 1) == 0) ||
       ((*(uint *)(plVar1 + 0x17) >> 0x16 & 1) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    iVar3 = (**(code **)(*plVar1 + 0x340))(plVar1,uVar4);
    if (iVar3 == -1) {
      *(uint *)(plVar1 + 0x17) = *(uint *)(plVar1 + 0x17) | 0x400000;
    }
    else if (iVar3 == 1) {
      FUN_14336e960(plVar1);
    }
  }
  return;
}



// FUNCTION 143507340 FUN_143507340 body=118 status=ok
// SIG undefined FUN_143507340(void)

void FUN_143507340(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_1432e3ba0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + 0x10),0);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (((*(uint *)(plVar1 + 0x17) >> 0x15 & 1) == 0) || ((*(uint *)(plVar1 + 0x17) >> 0x16 & 1) != 0)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  iVar2 = (**(code **)(*plVar1 + 0x340))(plVar1,uVar3);
  if (iVar2 == -1) {
    *(uint *)(plVar1 + 0x17) = *(uint *)(plVar1 + 0x17) | 0x400000;
  }
  else if (iVar2 == 1) {
    FUN_14336e960(plVar1);
    return;
  }
  return;
}



// FUNCTION 143507420 FUN_143507420 body=30 status=ok
// SIG undefined FUN_143507420(void)

undefined8 * FUN_143507420(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143506dc0();
  return param_2;
}



// FUNCTION 143507450 FUN_143507450 body=30 status=ok
// SIG undefined FUN_143507450(void)

undefined8 * FUN_143507450(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143506ed0();
  return param_2;
}



// FUNCTION 143507480 FUN_143507480 body=51 status=ok
// SIG undefined FUN_143507480(void)

undefined8 * FUN_143507480(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))(plVar1,2,"The method Sprite::soundTransformGet() is not implemented\n")
  ;
  return param_2;
}



// FUNCTION 1435074c0 FUN_1435074c0 body=43 status=ok
// SIG undefined FUN_1435074c0(void)

undefined8 * FUN_1435074c0(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x20;
  *param_1 = &PTR_FUN_145b255e8;
  return param_1;
}



// FUNCTION 143507500 FUN_143507500 body=182 status=ok
// SIG undefined FUN_143507500(void)

void FUN_143507500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    puVar1[0x13] = 0;
    *puVar1 = &PTR_ForEachChild_GC_145b254f8;
    puVar1[0x14] = 0;
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



// FUNCTION 1435075c0 FUN_1435075c0 body=43 status=ok
// SIG undefined FUN_1435075c0(void)

undefined8 * FUN_1435075c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x20;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143507600 FUN_143507600 body=234 status=ok
// SIG undefined FUN_143507600(void)

undefined8 * FUN_143507600(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e090);
    *(undefined4 *)(puVar2 + 0x12) = 0x20;
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
              (puVar2,param_2,&PTR_DAT_145b1e090);
    *(undefined4 *)(puVar2 + 0x12) = 0x20;
    *puVar2 = &PTR_FUN_145b255e8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435076f0 FUN_1435076f0 body=62 status=ok
// SIG undefined FUN_1435076f0(void)

undefined8 * FUN_1435076f0(undefined8 *param_1)

{
  FUN_1434f20e0();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_ForEachChild_GC_145b25660;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 143507740 ForEachChild_GC body=80 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_display::MovieClip::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1434fb9e0();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (*param_3)(param_2);
  }
  FUN_143509490(param_1 + 0xa8,param_2,param_3);
  return;
}



// FUNCTION 1435077a0 FUN_1435077a0 body=148 status=ok
// SIG undefined FUN_1435077a0(void)

longlong * FUN_1435077a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  RefCountNTSImpl *this;
  undefined8 uVar3;
  char *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_18 = "flash.display.Scene";
  local_10 = 0x13;
  uVar3 = FUN_1435cc580(lVar1,&local_18,*(undefined8 *)(lVar1 + 0x1c8));
  *param_2 = 0;
  FUN_1435e8720(lVar1,param_2,uVar3,0,0);
  lVar1 = *(longlong *)(param_1 + 0x88);
  lVar2 = *param_2;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  this = *(RefCountNTSImpl **)(lVar2 + 0x48);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  *(longlong *)(lVar2 + 0x48) = lVar1;
  return param_2;
}



// FUNCTION 143507840 FUN_143507840 body=160 status=ok
// SIG undefined FUN_143507840(void)

uint * FUN_143507840(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar2 = (**(code **)(*(longlong *)plVar1[0x22] + 0x20))();
  if (iVar2 == 2) {
    uVar5 = 0;
    local_res8 = 0;
    lVar3 = (**(code **)(*plVar1 + 0x218))(plVar1);
    lVar3 = FUN_14330f0b0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x18) + 0x40),
                          &local_res8);
    if (local_res8 != 0) {
      puVar4 = (uint *)(lVar3 + 0x10);
      do {
        if ((*puVar4 <= param_2) && (param_2 < *puVar4 + puVar4[1])) {
          return puVar4 + -4;
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
      } while (uVar5 < local_res8);
    }
  }
  return (uint *)0x0;
}



// FUNCTION 1435078f0 FUN_1435078f0 body=201 status=ok
// SIG undefined FUN_1435078f0(void)

ulonglong * FUN_1435078f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
  iVar4 = (**(code **)(*(longlong *)plVar3[0x22] + 0x20))();
  if (iVar4 == 2) {
    uVar8 = 0;
    local_res8 = 0;
    lVar5 = (**(code **)(*plVar3 + 0x218))(plVar3);
    puVar6 = (ulonglong *)
             FUN_14330f0b0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x18) + 0x40)
                           ,&local_res8);
    if (local_res8 != 0) {
      do {
        pcVar7 = *(char **)*param_2;
        do {
          cVar1 = *pcVar7;
          cVar2 = pcVar7[((*puVar6 & 0xfffffffffffffffc) + 0xc) - (longlong)*(char **)*param_2];
          if (cVar1 != cVar2) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          return puVar6;
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 7;
      } while (uVar8 < local_res8);
    }
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1435079c0 FUN_1435079c0 body=416 status=ok
// SIG undefined FUN_1435079c0(void)

undefined8
FUN_1435079c0(longlong param_1,longlong *param_2,longlong param_3,uint *param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined1 local_28 [8];
  longlong local_20;
  
  puVar2 = *(undefined8 **)(param_3 + 0x10);
  *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1;
  (**(code **)(*param_2 + 0x368))(param_2,*puVar2,param_5,1);
  piVar1 = (int *)(puVar2 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar2);
  }
  uVar7 = *param_4 & 0x1f;
  if (uVar7 == 0xc) {
    bVar9 = *(longlong *)(param_4 + 4) == 0;
LAB_143507a30:
    if (!bVar9) goto LAB_143507a3b;
  }
  else {
    if (uVar7 == 10) {
      bVar9 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143507a30;
    }
LAB_143507a3b:
    if (uVar7 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218);
      local_res18 = lVar4 + 0x48;
      piVar1 = (int *)(lVar4 + 0x60);
      *piVar1 = *piVar1 + 1;
      FUN_1435911f0(param_4,local_res10,&local_res18);
      lVar4 = FUN_1435078f0(param_1,&local_res18);
      if (lVar4 == 0) {
        uVar8 = 0x83c;
      }
      else {
        lVar5 = FUN_143507840(param_1,*param_5);
        if (lVar4 == lVar5) {
          piVar1 = (int *)(local_res18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return 1;
          }
          FUN_14335f920();
          return 1;
        }
        uVar8 = 0x83d;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = FUN_1435c8e40(local_28,uVar8,uVar6);
      FUN_1435cbef0(uVar6,uVar8);
      piVar1 = (int *)(local_20 + 0x18);
      *piVar1 = *piVar1 + -1;
      local_20 = local_res18;
      if (*piVar1 == 0) {
        FUN_14335f920();
        local_20 = local_res18;
      }
      goto LAB_143507ad2;
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x360))(param_2);
  lVar4 = FUN_143507840(param_1,uVar3);
  if ((lVar4 == 0) || (lVar5 = FUN_143507840(param_1,*param_5), lVar4 == lVar5)) {
    return 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = FUN_1435c8e40(local_28,0x83d,uVar8);
  FUN_1435cbef0(uVar8,uVar6);
LAB_143507ad2:
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return 0;
}



// FUNCTION 143507b90 FUN_143507b90 body=113 status=ok
// SIG undefined FUN_143507b90(void)

undefined8 FUN_143507b90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = (uint *)FUN_1435092a0(param_1 + 0xa8);
  if ((puVar1 != (uint *)0x0) && ((uVar2 = *puVar1 & 0x1f, 0xb < uVar2 || (uVar2 - 5 < 3)))) {
    if (uVar2 == 0xc) {
      bVar3 = *(longlong *)(puVar1 + 4) == 0;
    }
    else {
      if (uVar2 != 10) goto LAB_143507be6;
      bVar3 = *(longlong *)(puVar1 + 4) == *(longlong *)(*(longlong *)(puVar1 + 4) + 8) + 0x80;
    }
    if (!bVar3) {
LAB_143507be6:
      FUN_143590140(param_3,puVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143507c10 FUN_143507c10 body=48 status=ok
// SIG undefined FUN_143507c10(void)

void FUN_143507c10(longlong param_1,int *param_2)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    *param_2 = 0;
    return;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x360))();
  *param_2 = iVar1 + 1;
  return;
}



// FUNCTION 143507c50 FUN_143507c50 body=199 status=ok
// SIG undefined FUN_143507c50(void)

void FUN_143507c50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int local_res8 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  lVar5 = *(longlong *)(param_1 + 0x40);
  iVar3 = (**(code **)(*plVar2 + 0x360))(plVar2);
  puVar4 = (ulonglong *)
           (**(code **)(*(longlong *)plVar2[0x22] + 0x70))
                     ((longlong *)plVar2[0x22],iVar3,local_res8);
  if ((puVar4 == (ulonglong *)0x0) || (iVar3 != local_res8[0])) {
    lVar5 = *(longlong *)(*param_2 + 8);
    piVar1 = (int *)(lVar5 + 0x98);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar5 + 0x80;
  }
  else {
    lVar5 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),
                          (*puVar4 & 0xfffffffffffffffc) + 0xc);
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
  return;
}



// FUNCTION 143507d20 FUN_143507d20 body=199 status=ok
// SIG undefined FUN_143507d20(void)

void FUN_143507d20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  lVar4 = *(longlong *)(param_1 + 0x40);
  local_res8[0] = (**(code **)(*plVar2 + 0x360))(plVar2);
  puVar3 = (ulonglong *)
           (**(code **)(*(longlong *)plVar2[0x22] + 0x70))
                     ((longlong *)plVar2[0x22],local_res8[0],local_res8);
  if (puVar3 == (ulonglong *)0x0) {
    lVar4 = *(longlong *)(*param_2 + 8);
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar4 + 0x80;
  }
  else {
    lVar4 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                          (*puVar3 & 0xfffffffffffffffc) + 0xc);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 143507df0 FUN_143507df0 body=146 status=ok
// SIG undefined FUN_143507df0(void)

void FUN_143507df0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong local_res18 [2];
  
  local_res18[0] = 0;
  FUN_143507e90(param_1,local_res18);
  if (local_res18[0] == 0) {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880(uVar1);
      }
    }
    else {
      *param_2 = uVar1 - 1;
    }
    *param_2 = 0;
  }
  else {
    FUN_143509810(local_res18[0],param_2);
  }
  if (((local_res18[0] != 0) && ((local_res18[0] & 1) == 0)) &&
     ((*(uint *)(local_res18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res18[0] + 8) = *(uint *)(local_res18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143507e90 FUN_143507e90 body=568 status=ok
// SIG undefined FUN_143507e90(void)

void FUN_143507e90(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  char *local_38;
  undefined8 local_30;
  
  uVar1 = *param_2;
  uVar9 = 0;
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
    *param_2 = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  iVar3 = (**(code **)(*(longlong *)plVar2[0x22] + 0x20))();
  if (iVar3 == 2) {
    uVar4 = (**(code **)(*plVar2 + 0x360))(plVar2);
    local_res8 = 0;
    lVar5 = (**(code **)(*plVar2 + 0x218))(plVar2);
    lVar5 = FUN_14330f0b0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x18) + 0x40),
                          &local_res8);
    if (local_res8 != 0) {
      puVar8 = (uint *)(lVar5 + 0x10);
      do {
        if ((*puVar8 <= uVar4) && (uVar4 < puVar8[1] + *puVar8)) {
          local_38 = "flash.display.Scene";
          local_30 = 0x13;
          uVar6 = FUN_1435cc580(*(longlong *)(param_1 + 0x40),&local_38,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8));
          FUN_1435e8720(uVar7,param_2,uVar6,0,0);
          *(ulonglong *)(*param_2 + 0x40) = uVar9 * 0x38 + lVar5;
          break;
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 0xe;
      } while (uVar9 < local_res8);
    }
  }
  if (*param_2 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    local_38 = "flash.display.Scene";
    local_30 = 0x13;
    uVar7 = FUN_1435cc580(lVar5,&local_38,*(undefined8 *)(lVar5 + 0x1c8));
    local_res8 = 0;
    FUN_1435e8720(lVar5,&local_res8,uVar7,0,0);
    uVar1 = local_res8;
    lVar5 = *(longlong *)(param_1 + 0x88);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(local_res8 + 0x48) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(local_res8 + 0x48));
    }
    *(longlong *)(uVar1 + 0x48) = lVar5;
    if (&local_res8 != param_2) {
      if (local_res8 != 0) {
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
      }
      uVar1 = *param_2;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880(uVar1);
          }
        }
        else {
          *param_2 = uVar1 - 1;
        }
      }
      *param_2 = local_res8;
    }
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 143508120 FUN_143508120 body=50 status=ok
// SIG undefined FUN_143508120(void)

void FUN_143508120(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    *param_2 = 1;
    return;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x380))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 143508160 FUN_143508160 body=646 status=ok
// SIG undefined FUN_143508160(void)

void FUN_143508160(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  ulonglong local_res10;
  char *local_58;
  undefined8 local_50;
  uint local_48 [2];
  undefined8 local_40;
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x88);
  puVar4 = (ulonglong *)FUN_1435ca860(uVar7,&local_res8);
  uVar8 = *param_2;
  uVar2 = *puVar4;
  if (uVar2 != uVar8) {
    if (uVar8 != 0) {
      if ((uVar8 & 1) == 0) {
        if ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar8 - 1;
      }
    }
    *param_2 = uVar2;
  }
  iVar3 = (**(code **)(*(longlong *)plVar1[0x22] + 0x20))();
  if (iVar3 == 2) {
    uVar8 = 0;
    local_res10 = 0;
    lVar5 = (**(code **)(*plVar1 + 0x218))(plVar1);
    lVar5 = FUN_14330f0b0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x18) + 0x40),
                          &local_res10);
    local_50 = 0x13;
    local_58 = "flash.display.Scene";
    uVar6 = FUN_1435cc580(*(longlong *)(param_1 + 0x40),&local_58,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8));
    if (local_res10 != 0) {
      do {
        local_res8 = 0;
        FUN_1435e8720(uVar7,&local_res8,uVar6,0,0);
        local_48[0] = 0;
        local_40 = 0;
        *(longlong *)(local_res8 + 0x40) = lVar5;
        FUN_143590450(local_48,local_res8);
        FUN_1434b49b0(*param_2 + 0x40,local_48);
        if (9 < ((byte)local_48[0] & 0x1f)) {
          if ((local_48[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_48);
          }
          else {
            FUN_143592150();
          }
        }
        if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
           ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
          FUN_1434ef880();
        }
        uVar8 = uVar8 + 1;
        lVar5 = lVar5 + 0x38;
      } while (uVar8 < local_res10);
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x40);
    local_58 = "flash.display.Scene";
    local_50 = 0x13;
    uVar7 = FUN_1435cc580(lVar5,&local_58,*(undefined8 *)(lVar5 + 0x1c8));
    local_res8 = 0;
    FUN_1435e8720(lVar5,&local_res8,uVar7,0,0);
    uVar8 = local_res8;
    lVar5 = *(longlong *)(param_1 + 0x88);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(local_res8 + 0x48) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(local_res8 + 0x48));
    }
    *(longlong *)(uVar8 + 0x48) = lVar5;
    local_48[0] = 0;
    local_40 = 0;
    FUN_143590450(local_48,local_res8);
    FUN_1434b49b0(*param_2 + 0x40,local_48);
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 1435083f0 totalFramesGet body=37 status=ok
// SIG undefined totalFramesGet(void)

void Scaleform::GFx::AS3::Instances::fl_display::MovieClip::totalFramesGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x110) + 0x50))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 143508470 FUN_143508470 body=635 status=ok
// SIG undefined FUN_143508470(void)

void FUN_143508470(longlong *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_98 [4];
  uint local_94;
  uint local_90 [2];
  uint local_88 [2];
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  
  if (param_1[0x11] == 0) {
    local_94 = param_3;
    (**(code **)(*param_1 + 0xd0))();
    param_3 = local_94;
  }
  lVar15 = 0;
  local_48 = (longlong *)0x0;
  if ((*(ushort *)(param_1[0x11] + 0x6a) >> 10 & 1) != 0) {
    local_48 = (longlong *)param_1[0x11];
  }
  if (local_48 != (longlong *)0x0) {
    lVar11 = 0;
    local_40 = (longlong)local_48 + (ulonglong)*(byte *)((longlong)local_48 + 0x6d) * 4;
    local_94 = param_3 >> 1;
    iVar13 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if (local_94 != 0) {
      uVar12 = (ulonglong)local_94;
      puVar7 = param_4;
      puVar9 = param_4 + 4;
      do {
        puVar8 = puVar7 + 8;
        puVar10 = puVar9 + 8;
        pcVar5 = (char *)FUN_143590b70(param_4 + (longlong)iVar13 * 8,local_98,local_90);
        uVar1 = local_90[0];
        iVar14 = iVar13 + 1;
        if (*pcVar5 != '\0') {
          local_80 = *(undefined8 *)(puVar7 + 10);
          local_88[0] = *puVar8;
          local_78 = *puVar10;
          uStack_74 = puVar9[9];
          uStack_70 = puVar9[10];
          uStack_6c = puVar9[0xb];
          if (9 < ((byte)local_88[0] & 0x1f)) {
            if ((local_88[0] >> 9 & 1) == 0) {
              FUN_143592070(puVar8);
            }
            else {
              FUN_143592140();
            }
          }
          local_68 = uVar1;
          iVar14 = iVar13 + 2;
          puVar8 = puVar7 + 0x10;
          puVar10 = puVar9 + 0x10;
          FUN_1435164b0(&local_60,&local_60,lVar11 + 1);
          lVar11 = local_58;
          lVar15 = local_60;
          puVar7 = (uint *)(local_60 + (local_58 + -1) * 0x28);
          if (puVar7 != (uint *)0x0) {
            *puVar7 = local_88[0];
            *(undefined8 *)(puVar7 + 2) = local_80;
            puVar7[4] = local_78;
            puVar7[5] = uStack_74;
            puVar7[6] = uStack_70;
            puVar7[7] = uStack_6c;
            if (9 < ((byte)local_88[0] & 0x1f)) {
              if ((local_88[0] >> 9 & 1) == 0) {
                FUN_143592070(local_88);
              }
              else {
                FUN_143592140();
              }
            }
            puVar7[8] = local_68;
          }
          if (9 < ((byte)local_88[0] & 0x1f)) {
            if ((local_88[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_88);
            }
            else {
              FUN_143592150();
            }
          }
        }
        iVar13 = iVar14;
        uVar12 = uVar12 - 1;
        puVar7 = puVar8;
        puVar9 = puVar10;
      } while (uVar12 != 0);
    }
    lVar11 = local_40;
    plVar2 = local_48;
    uVar4 = (**(code **)(*(longlong *)local_48[0x22] + 0x50))();
    uVar6 = FUN_1435e05d0(lVar11);
    FUN_143508d80(param_1 + 0x15,uVar6,uVar4,local_94,lVar15);
    uVar4 = (**(code **)(*plVar2 + 0x360))(plVar2);
    lVar15 = FUN_1435092a0(param_1 + 0x15,uVar4);
    if (lVar15 != 0) {
      *(byte *)(lVar11 + 0x68) = *(byte *)(lVar11 + 0x68) | 2;
      cVar3 = Scaleform::GFx::InteractiveObject::IsInPlayList(*(undefined8 *)(lVar11 + 0x18));
      if (cVar3 != '\0') {
        FUN_14336e960(*(undefined8 *)(lVar11 + 0x18));
      }
    }
    FUN_143514f10(&local_60);
  }
  return;
}



// FUNCTION 143508700 FUN_143508700 body=372 status=ok
// SIG undefined FUN_143508700(void)

void FUN_143508700(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_28 [2];
  undefined1 local_20 [8];
  longlong local_18;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (((byte)*param_3 & 0x1f) == 10) {
    cVar6 = FUN_1435079c0(param_1,plVar3,param_3,param_4,local_res18);
    if (cVar6 == '\0') {
      uVar7 = (**(code **)(*plVar3 + 0x360))(plVar3);
      FUN_143507840(param_1,uVar7);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = FUN_1435c8e40(local_20,0x83d,uVar4);
      FUN_1435cbef0(uVar4,uVar9);
      piVar1 = (int *)(local_18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  else {
    pcVar10 = (char *)FUN_143590eb0(param_3,local_res8,local_28);
    if (*pcVar10 == '\0') {
      return;
    }
    local_res18[0] = local_28[0] + -1;
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  iVar8 = (**(code **)(*plVar3 + 0x360))(plVar3);
  if (local_res18[0] != iVar8) {
    FUN_1435eabd0(*(undefined8 *)(lVar5 + 0x300),3,*(undefined8 *)(param_1 + 0x88));
    (**(code **)(*plVar3 + 0x378))(plVar3,local_res18[0]);
  }
  (**(code **)(*plVar3 + 0x398))(plVar3,0);
  FUN_1435eabb0(*(undefined8 *)(lVar5 + 0x300));
  if ((*(byte *)(*(longlong *)(lVar5 + 0x300) + 0x920) & 1) == 0) {
    pbVar2 = (byte *)(*(longlong *)(lVar5 + 0x300) + 0x920);
    *pbVar2 = *pbVar2 | 1;
    FUN_1435ea830(*(undefined8 *)(lVar5 + 0x300),0);
    FUN_1435ea830(*(undefined8 *)(lVar5 + 0x300),1);
    FUN_1435ea830(*(undefined8 *)(lVar5 + 0x300),3);
    pbVar2 = (byte *)(*(longlong *)(lVar5 + 0x300) + 0x920);
    *pbVar2 = *pbVar2 & 0xfe;
  }
  return;
}



// FUNCTION 143508880 FUN_143508880 body=375 status=ok
// SIG undefined FUN_143508880(void)

void FUN_143508880(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_28 [2];
  undefined1 local_20 [8];
  longlong local_18;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (((byte)*param_3 & 0x1f) == 10) {
    cVar6 = FUN_1435079c0(param_1,plVar3,param_3,param_4,local_res18);
    if (cVar6 == '\0') {
      uVar7 = (**(code **)(*plVar3 + 0x360))(plVar3);
      FUN_143507840(param_1,uVar7);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = FUN_1435c8e40(local_20,0x83d,uVar4);
      FUN_1435cbef0(uVar4,uVar9);
      piVar1 = (int *)(local_18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  else {
    pcVar10 = (char *)FUN_143590eb0(param_3,local_res8,local_28);
    if (*pcVar10 == '\0') {
      return;
    }
    local_res18[0] = local_28[0] + -1;
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  iVar8 = (**(code **)(*plVar3 + 0x360))(plVar3);
  if (local_res18[0] != iVar8) {
    FUN_1435eabd0(*(undefined8 *)(lVar5 + 0x300),3,*(undefined8 *)(param_1 + 0x88));
    (**(code **)(*plVar3 + 0x378))(plVar3,local_res18[0]);
  }
  (**(code **)(*plVar3 + 0x398))(plVar3,1);
  FUN_1435eabb0(*(undefined8 *)(lVar5 + 0x300));
  if ((*(byte *)(*(longlong *)(lVar5 + 0x300) + 0x920) & 1) == 0) {
    pbVar2 = (byte *)(*(longlong *)(lVar5 + 0x300) + 0x920);
    *pbVar2 = *pbVar2 | 1;
    FUN_1435ea830(*(undefined8 *)(lVar5 + 0x300),0);
    FUN_1435ea830(*(undefined8 *)(lVar5 + 0x300),1);
    FUN_1435ea830(*(undefined8 *)(lVar5 + 0x300),3);
    pbVar2 = (byte *)(*(longlong *)(lVar5 + 0x300) + 0x920);
    *pbVar2 = *pbVar2 & 0xfe;
  }
  return;
}



// FUNCTION 143508a00 FUN_143508a00 body=91 status=ok
// SIG undefined FUN_143508a00(void)

void FUN_143508a00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar2 = (**(code **)(*plVar1 + 0x380))(plVar1);
  iVar3 = (**(code **)(*plVar1 + 0x360))(plVar1);
  if (iVar3 < iVar2) {
    (**(code **)(*plVar1 + 0x378))(plVar1,iVar3 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143508a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x398))(plVar1,1);
  return;
}



// FUNCTION 143508a70 FUN_143508a70 body=238 status=ok
// SIG undefined FUN_143508a70(void)

void FUN_143508a70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar2 = (**(code **)(*(longlong *)plVar1[0x22] + 0x20))();
  if (iVar2 == 2) {
    uVar8 = 0;
    local_res8 = 0;
    lVar5 = (**(code **)(*plVar1 + 0x218))(plVar1);
    lVar5 = FUN_14330f0b0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x18) + 0x40),
                          &local_res8);
    uVar3 = (**(code **)(*plVar1 + 0x360))(plVar1);
    if (local_res8 != 0) {
      puVar7 = (uint *)(lVar5 + 0x10);
      uVar6 = local_res8;
      do {
        if ((((*puVar7 <= uVar3) && (uVar3 < puVar7[1] + *puVar7)) && (uVar8 + 1 < uVar6)) &&
           (uVar4 = (**(code **)(*plVar1 + 0x380))(plVar1), uVar6 = local_res8, puVar7[0xe] < uVar4)
           ) {
          (**(code **)(*plVar1 + 0x378))(plVar1);
          (**(code **)(*plVar1 + 0x398))(plVar1,0);
          uVar6 = local_res8;
        }
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 0xe;
      } while (uVar8 < uVar6);
    }
  }
  return;
}



// FUNCTION 143508b90 FUN_143508b90 body=68 status=ok
// SIG undefined FUN_143508b90(void)

void FUN_143508b90(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar2 = (**(code **)(*plVar1 + 0x360))(plVar1);
  if (0 < iVar2) {
    (**(code **)(*plVar1 + 0x378))(plVar1,iVar2 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143508bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x398))(plVar1,1);
  return;
}



// FUNCTION 143508be0 FUN_143508be0 body=215 status=ok
// SIG undefined FUN_143508be0(void)

void FUN_143508be0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar2 = (**(code **)(*(longlong *)plVar1[0x22] + 0x20))();
  if (iVar2 == 2) {
    uVar6 = 0;
    local_res8 = 0;
    lVar4 = (**(code **)(*plVar1 + 0x218))(plVar1);
    lVar4 = FUN_14330f0b0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x70) + 0x18) + 0x40),
                          &local_res8);
    uVar3 = (**(code **)(*plVar1 + 0x360))(plVar1);
    if (local_res8 != 0) {
      puVar5 = (uint *)(lVar4 + 0x10);
      uVar7 = local_res8;
      do {
        if (((*puVar5 <= uVar3) && (uVar3 < puVar5[1] + *puVar5)) && (uVar6 != 0)) {
          (**(code **)(*plVar1 + 0x378))(plVar1,puVar5[-0xe]);
          (**(code **)(*plVar1 + 0x398))(plVar1,0);
          uVar7 = local_res8;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0xe;
      } while (uVar6 < uVar7);
    }
  }
  return;
}



// FUNCTION 143508ce0 FUN_143508ce0 body=30 status=ok
// SIG undefined FUN_143508ce0(void)

undefined8 * FUN_143508ce0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143507df0();
  return param_2;
}



// FUNCTION 143508d10 FUN_143508d10 body=30 status=ok
// SIG undefined FUN_143508d10(void)

undefined8 * FUN_143508d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143507e90();
  return param_2;
}



// FUNCTION 143508d40 FUN_143508d40 body=30 status=ok
// SIG undefined FUN_143508d40(void)

undefined8 * FUN_143508d40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143508160();
  return param_2;
}



// FUNCTION 143508d80 FUN_143508d80 body=1293 status=ok
// SIG undefined FUN_143508d80(void)

void FUN_143508d80(longlong *param_1,longlong *param_2,uint param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  longlong lVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  ulonglong local_res8;
  longlong local_70;
  uint local_58 [2];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  
  lVar6 = *param_1;
  uVar13 = 0;
  uVar14 = local_res8 >> 0x20;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (lVar6 == 0) {
    if (param_4 != 0) {
      *(ushort *)((longlong)param_1 + 10) = (ushort)param_3;
      uVar4 = (ushort)param_3;
      if (param_4 < param_3) {
        uVar4 = (ushort)param_4;
      }
      *(ushort *)(param_1 + 1) = uVar4;
      pvVar7 = (void *)(**(code **)(*param_2 + 0x50))
                                 (param_2,((ulonglong)(param_3 & 0xffff) + 7 >> 3) +
                                          ((ulonglong)uVar4 + 1) * 0x28,0);
      *param_1 = (longlong)pvVar7;
      if (pvVar7 == (void *)0x0) {
        return;
      }
      _guard_xfg_dispatch_icall_nop
                (pvVar7,0,(ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3);
      lVar6 = *param_1;
      pvVar7 = (void *)(lVar6 + 7 + ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) &
                       0xfffffffffffffff8);
      iVar15 = *(ushort *)(param_1 + 1) - 1;
      if (-1 < iVar15) {
        param_5 = param_5 + (longlong)iVar15 * 0x28;
        puVar11 = (uint *)(param_5 + 0x20);
        iVar16 = iVar15;
        do {
          uVar18 = *puVar11;
          if (uVar18 < *(ushort *)((longlong)param_1 + 10)) {
            pbVar20 = (byte *)((ulonglong)(uVar18 >> 3) + lVar6);
            if ((*pbVar20 & (byte)(1 << (sbyte)(uVar18 & 7))) == 0) {
              lVar12 = (longlong)iVar16;
              iVar16 = iVar16 + -1;
              pvVar8 = (void *)(lVar12 * 0x28 + (longlong)pvVar7);
              if (pvVar8 != (void *)0x0) {
                FUN_143514de0(pvVar8,param_5);
              }
              uVar13 = (uint)local_res8 + 1;
              *pbVar20 = *pbVar20 | (byte)(1 << (uVar18 & 7));
              local_res8 = CONCAT44(local_res8._4_4_,uVar13);
            }
            else {
              uVar13 = (uint)local_res8;
            }
          }
          param_5 = param_5 + -0x28;
          puVar11 = puVar11 + -10;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
      if (*(ushort *)(param_1 + 1) != uVar13) {
        memmove(pvVar7,(void *)((ulonglong)(*(ushort *)(param_1 + 1) - uVar13) * 0x28 +
                               (longlong)pvVar7),(ulonglong)uVar13 * 0x28);
      }
    }
  }
  else {
    local_70 = (longlong)(int)(param_4 - 1);
    iVar15 = 0;
    local_res8 = CONCAT44((int)uVar14,(uint)*(ushort *)(param_1 + 1));
    uVar13 = (uint)*(ushort *)(param_1 + 1);
    if (-1 < (int)(param_4 - 1)) {
      puVar11 = (uint *)(param_5 + (local_70 * 5 + 4) * 8);
      lVar12 = local_70;
      do {
        uVar13 = *puVar11;
        if (uVar13 < *(ushort *)((longlong)param_1 + 10)) {
          if ((*(byte *)((ulonglong)(uVar13 >> 3) + lVar6) & (byte)(1 << ((byte)uVar13 & 7))) == 0)
          {
            iVar15 = iVar15 + 1;
          }
          else {
            uVar14 = *param_1 + 7 + ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) &
                     0xfffffffffffffff8;
            puVar5 = (uint *)FUN_143590540();
            local_58[0] = *puVar5;
            local_50 = *(undefined8 *)(puVar5 + 2);
            local_48 = puVar5[4];
            uStack_44 = puVar5[5];
            uStack_40 = puVar5[6];
            uStack_3c = puVar5[7];
            if (9 < ((byte)*puVar5 & 0x1f)) {
              if ((*puVar5 >> 9 & 1) == 0) {
                FUN_143592070(puVar5);
              }
              else {
                FUN_143592140();
              }
            }
            lVar10 = 0;
            uVar19 = (ulonglong)*(ushort *)(param_1 + 1);
            if ((ulonglong)*(ushort *)(param_1 + 1) != 0) {
              do {
                uVar9 = (longlong)uVar19 >> 1;
                if (*(uint *)(uVar14 + 0x20 + (uVar9 + lVar10) * 0x28) < uVar13) {
                  lVar10 = uVar9 + lVar10 + 1;
                  uVar9 = uVar19 + (-1 - uVar9);
                }
                uVar19 = uVar9;
              } while (0 < (longlong)uVar9);
            }
            local_38 = uVar13;
            if (9 < ((byte)local_58[0] & 0x1f)) {
              if ((local_58[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_58);
              }
              else {
                FUN_143592150();
              }
            }
            lVar10 = uVar14 + lVar10 * 0x28;
            FUN_143590140(lVar10,puVar11 + -8);
            *(uint *)(lVar10 + 0x20) = *puVar11;
          }
        }
        puVar11 = puVar11 + -10;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
      uVar13 = (uint)local_res8;
    }
    uVar18 = (uint)*(ushort *)(param_1 + 1) + iVar15;
    if (iVar15 != 0) {
      lVar6 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*param_1,
                         ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) +
                         (ulonglong)(uVar18 + 1) * 0x28);
      iVar15 = uVar18 - 1;
      *param_1 = lVar6;
      uVar14 = ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) + 7 + lVar6 &
               0xfffffffffffffff8;
      if ((int)(uint)*(ushort *)(param_1 + 1) <= iVar15) {
        puVar11 = (uint *)(param_5 + local_70 * 0x28);
        puVar5 = (uint *)(uVar14 + (longlong)iVar15 * 0x28);
        do {
          if (local_70 < 0) break;
          uVar1 = puVar11[8];
          puVar17 = puVar5;
          if (uVar1 < *(ushort *)((longlong)param_1 + 10)) {
            uVar19 = (ulonglong)(uVar1 >> 3);
            if ((*(byte *)(uVar19 + lVar6) & (byte)(1 << (sbyte)(uVar1 & 7))) == 0) {
              iVar15 = iVar15 + -1;
              puVar17 = puVar5 + -10;
              if (puVar5 != (uint *)0x0) {
                *puVar5 = *puVar11;
                *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar11 + 2);
                uVar13 = puVar11[5];
                uVar2 = puVar11[6];
                uVar3 = puVar11[7];
                puVar5[4] = puVar11[4];
                puVar5[5] = uVar13;
                puVar5[6] = uVar2;
                puVar5[7] = uVar3;
                if (9 < ((byte)*puVar11 & 0x1f)) {
                  if ((*puVar11 >> 9 & 1) == 0) {
                    FUN_143592070(puVar11);
                  }
                  else {
                    FUN_143592140();
                  }
                }
                puVar5[8] = puVar11[8];
              }
              uVar13 = (uint)local_res8 + 1;
              *(byte *)(uVar19 + lVar6) = *(byte *)(uVar19 + lVar6) | (byte)(1 << (uVar1 & 7));
              local_res8 = CONCAT44(local_res8._4_4_,uVar13);
            }
          }
          local_70 = local_70 + -1;
          puVar11 = puVar11 + -10;
          puVar5 = puVar17;
        } while ((int)(uint)*(ushort *)(param_1 + 1) <= iVar15);
      }
      if (uVar18 != uVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(uVar14 + (ulonglong)*(ushort *)(param_1 + 1) * 0x28),
                   (void *)(uVar14 + (ulonglong)uVar13 * 0x28),(ulonglong)(uVar18 - uVar13) * 0x28);
      }
      *(short *)(param_1 + 1) = (short)uVar18;
    }
  }
  uVar14 = (ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3;
  local_res8 = *param_1 + 7 + uVar14 & 0xfffffffffffffff8;
  if (*(ushort *)(param_1 + 1) != uVar13) {
    *(short *)(param_1 + 1) = (short)uVar13;
    lVar6 = (**(code **)(*DAT_146b62f28 + 0x58))
                      (DAT_146b62f28,*param_1,uVar14 + ((ulonglong)(uVar13 & 0xffff) + 1) * 0x28);
    *param_1 = lVar6;
  }
  FUN_143514a90(&local_res8,0,(short)param_1[1],&LAB_143516010);
  return;
}



// FUNCTION 1435092a0 FUN_1435092a0 body=294 status=ok
// SIG undefined FUN_1435092a0(void)

longlong FUN_1435092a0(longlong *param_1,uint param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint local_38 [2];
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  
  if ((param_2 < *(ushort *)((longlong)param_1 + 10)) &&
     ((*(byte *)((ulonglong)(param_2 >> 3) + *param_1) & (byte)(1 << ((byte)param_2 & 7))) != 0)) {
    uVar5 = *param_1 + 7 + ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) &
            0xfffffffffffffff8;
    puVar1 = (uint *)FUN_143590540();
    local_38[0] = *puVar1;
    local_30 = *(undefined8 *)(puVar1 + 2);
    local_28 = puVar1[4];
    uStack_24 = puVar1[5];
    uStack_20 = puVar1[6];
    uStack_1c = puVar1[7];
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_143592070(puVar1);
      }
      else {
        FUN_143592140();
      }
    }
    lVar4 = 0;
    uVar2 = (ulonglong)*(ushort *)(param_1 + 1);
    if ((ulonglong)*(ushort *)(param_1 + 1) != 0) {
      do {
        uVar3 = (longlong)uVar2 >> 1;
        if (*(uint *)(uVar5 + 0x20 + (uVar3 + lVar4) * 0x28) < param_2) {
          lVar4 = uVar3 + lVar4 + 1;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    if (9 < ((byte)local_38[0] & 0x1f)) {
      local_18 = param_2;
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    lVar4 = uVar5 + lVar4 * 0x28;
    if (*(uint *)(lVar4 + 0x20) == param_2) {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 1435093d0 FUN_1435093d0 body=172 status=ok
// SIG undefined FUN_1435093d0(void)

void FUN_1435093d0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    uVar3 = *param_1 + 7 + ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) &
            0xfffffffffffffff8;
    if ((short)param_1[1] != 0) {
      do {
        uVar1 = *(uint *)(uVar3 + uVar2 * 0x28);
        if (9 < ((byte)uVar1 & 0x1f)) {
          if ((uVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(uVar3 + uVar2 * 0x28);
          }
          else {
            FUN_143592150();
          }
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(ushort *)(param_1 + 1));
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143509490 FUN_143509490 body=169 status=ok
// SIG undefined FUN_143509490(void)

void FUN_143509490(longlong *param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    uVar5 = *param_1 + 7 + ((ulonglong)*(ushort *)((longlong)param_1 + 10) + 7 >> 3) &
            0xfffffffffffffff8;
    if ((short)param_1[1] != 0) {
      do {
        lVar1 = uVar5 + uVar4 * 0x28;
        uVar2 = *(uint *)(uVar5 + uVar4 * 0x28) & 0x1f;
        if (10 < uVar2) {
          if (uVar2 < 0xd) {
            plVar3 = (longlong *)(lVar1 + 0x10);
          }
          else {
            if (0xe < uVar2) goto LAB_143509513;
            plVar3 = (longlong *)(lVar1 + 0x18);
          }
          if (*plVar3 != 0) {
            (*param_3)(param_2);
          }
        }
LAB_143509513:
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
  }
  return;
}



// FUNCTION 143509540 FUN_143509540 body=43 status=ok
// SIG undefined FUN_143509540(void)

undefined8 * FUN_143509540(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x21;
  *param_1 = &PTR_FUN_145b25750;
  return param_1;
}



// FUNCTION 143509580 FUN_143509580 body=195 status=ok
// SIG undefined FUN_143509580(void)

void FUN_143509580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *puVar1 = &PTR_ForEachChild_GC_145b25660;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
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



// FUNCTION 143509650 FUN_143509650 body=43 status=ok
// SIG undefined FUN_143509650(void)

undefined8 * FUN_143509650(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x21;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143509690 FUN_143509690 body=234 status=ok
// SIG undefined FUN_143509690(void)

undefined8 * FUN_143509690(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f2c0);
    *(undefined4 *)(puVar2 + 0x12) = 0x21;
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
              (puVar2,param_2,&PTR_DAT_145b1f2c0);
    *(undefined4 *)(puVar2 + 0x12) = 0x21;
    *puVar2 = &PTR_FUN_145b25750;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143509780 FUN_143509780 body=43 status=ok
// SIG undefined FUN_143509780(void)

undefined8 * FUN_143509780(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b257c8;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1435097d0 FUN_1435097d0 body=53 status=ok
// SIG undefined FUN_1435097d0(void)

void FUN_1435097d0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x48) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x48));
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 143509810 FUN_143509810 body=1023 status=ok
// SIG undefined FUN_143509810(void)

void FUN_143509810(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar14;
  ulonglong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  char *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_70 [2];
  undefined8 local_68;
  ulonglong uVar13;
  
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res18 = lVar8;
  puVar6 = (ulonglong *)FUN_1435ca860(lVar8,&local_res10);
  uVar13 = *param_2;
  uVar14 = *puVar6;
  if (uVar14 != uVar13) {
    if (uVar13 != 0) {
      if ((uVar13 & 1) == 0) {
        if ((*(uint *)(uVar13 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar13 - 1;
      }
    }
    *param_2 = uVar14;
  }
  local_98 = 0x18;
  local_a0 = "flash.display.FrameLabel";
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar7 = FUN_1435cc580(lVar9,&local_a0,*(undefined8 *)(lVar9 + 0x1c8));
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x48) + 0x110) + 0x50))();
    local_res10 = CONCAT44(local_res10._4_4_,uVar4);
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar13 = 0;
    if (uVar4 != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x110);
        lVar9 = (**(code **)(*plVar2 + 0x78))(plVar2,uVar13,&local_90);
        uVar14 = local_88;
        if (lVar9 != 0) {
          uVar11 = 0;
          if (local_88 != 0) {
            do {
              local_res20 = 0;
              FUN_1435e8720(lVar8,&local_res20,uVar7,0,0);
              lVar8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x218),
                                    (*(ulonglong *)(local_90 + uVar11 * 8) & 0xfffffffffffffffc) +
                                    0xc);
              uVar3 = local_res20;
              *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
              *(int *)(local_res20 + 0x40) = (int)uVar13 + 1;
              *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
              piVar1 = (int *)(*(longlong *)(local_res20 + 0x48) + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
              *(longlong *)(uVar3 + 0x48) = lVar8;
              piVar1 = (int *)(lVar8 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(lVar8);
              }
              local_70[0] = 0;
              local_68 = 0;
              FUN_143590450(local_70,local_res20);
              FUN_1434b49b0(*param_2 + 0x40,local_70);
              if (9 < ((byte)local_70[0] & 0x1f)) {
                if ((local_70[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_70);
                }
                else {
                  FUN_143592150();
                }
              }
              if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
                 ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
                *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
                FUN_1434ef880();
              }
              uVar11 = uVar11 + 1;
              lVar8 = local_res18;
            } while (uVar11 < uVar14);
            if (local_88 != 0) {
              puVar6 = (ulonglong *)(local_90 + (local_88 - 1) * 8);
              uVar14 = local_88;
              do {
                iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                                  ((*puVar6 & 0xfffffffffffffffc) + 8,0xffffffff);
                if (iVar5 == 1) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
                puVar6 = puVar6 + -1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
              if (((local_80 & 0xfffffffffffffffe) != 0) && (local_80 != 0)) {
                if (local_90 != 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                  local_90 = 0;
                }
                local_80 = 0;
              }
            }
            lVar8 = local_res18;
            uVar4 = (uint)local_res10;
          }
          local_88 = 0;
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < uVar4);
    }
    FUN_1432bbc10(&local_90);
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        local_res10 = 0;
        FUN_1435e8720(lVar8,&local_res10,uVar7,0,0);
        uVar13 = local_res10;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
        *(int *)(local_res10 + 0x40) =
             (*(int *)(lVar8 + 0x10 + lVar10) - *(int *)(*(longlong *)(param_1 + 0x40) + 0x10)) + 1;
        puVar6 = (ulonglong *)(*(ulonglong *)(lVar8 + lVar10) & 0xfffffffffffffffc);
        lVar8 = FUN_143360a90(*(undefined8 *)(*(longlong *)(local_res10 + 0x48) + 8),
                              (longlong)puVar6 + 0xc,*puVar6 & 0x7fffffffffffffff);
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
        piVar1 = (int *)(*(longlong *)(uVar13 + 0x48) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(longlong *)(uVar13 + 0x48) = lVar8;
        local_90 = local_90 & 0xffffffff00000000;
        local_88 = 0;
        FUN_143590450(&local_90,local_res10);
        FUN_1434b49b0(*param_2 + 0x40,&local_90);
        if (9 < ((byte)local_90 & 0x1f)) {
          if (((uint)local_90 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_90);
          }
          else {
            FUN_143592150();
          }
        }
        if (((local_res10 != 0) && ((local_res10 & 1) == 0)) &&
           ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
          FUN_1434ef880();
        }
        lVar10 = lVar10 + 0x18;
        lVar9 = lVar9 + -1;
        lVar8 = local_res18;
      } while (lVar9 != 0);
    }
  }
  return;
}



// FUNCTION 143509c20 FUN_143509c20 body=167 status=ok
// SIG undefined FUN_143509c20(void)

void FUN_143509c20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  if (*(ulonglong **)(param_1 + 0x40) != (ulonglong *)0x0) {
    puVar3 = (ulonglong *)(**(ulonglong **)(param_1 + 0x40) & 0xfffffffffffffffc);
    lVar2 = FUN_143360a90(*(undefined8 *)(*param_2 + 8),(longlong)puVar3 + 0xc,
                          *puVar3 & 0x7fffffffffffffff);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar2;
    return;
  }
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2 + 0x48);
  }
  return;
}



// FUNCTION 143509cd0 numFramesGet body=54 status=ok
// SIG undefined numFramesGet(void)

void Scaleform::GFx::AS3::Instances::fl_display::Scene::numFramesGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x14);
    return;
  }
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x48) + 0x110) + 0x50))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 143509d10 FUN_143509d10 body=30 status=ok
// SIG undefined FUN_143509d10(void)

undefined8 * FUN_143509d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143509810();
  return param_2;
}



// FUNCTION 143509d40 FUN_143509d40 body=33 status=ok
// SIG undefined FUN_143509d40(void)

undefined8 * FUN_143509d40(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b25888;
  return param_1;
}



// FUNCTION 143509d70 FUN_143509d70 body=176 status=ok
// SIG undefined FUN_143509d70(void)

void FUN_143509d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b257c8;
    puVar1[8] = 0;
    puVar1[9] = 0;
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



// FUNCTION 143509e30 FUN_143509e30 body=33 status=ok
// SIG undefined FUN_143509e30(void)

undefined8 * FUN_143509e30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143509e60 FUN_143509e60 body=214 status=ok
// SIG undefined FUN_143509e60(void)

undefined8 * FUN_143509e60(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f320);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f320);
    *puVar2 = &PTR_FUN_145b25888;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143509f40 FUN_143509f40 body=33 status=ok
// SIG undefined FUN_143509f40(void)

undefined8 * FUN_143509f40(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143509f70 FUN_143509f70 body=261 status=ok
// SIG undefined FUN_143509f70(void)

undefined8 * FUN_143509f70(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b201e0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b201e0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b238a4;
    puVar5[0xb] = &DAT_145b238ac;
    puVar5[0xc] = "never";
  }
  return param_1;
}



// FUNCTION 14350a080 FUN_14350a080 body=66 status=ok
// SIG undefined FUN_14350a080(void)

undefined8 * FUN_14350a080(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b238a4;
  param_1[0xb] = &DAT_145b238ac;
  param_1[0xc] = "never";
  return param_1;
}



// FUNCTION 14350a0d0 FUN_14350a0d0 body=44 status=ok
// SIG undefined FUN_14350a0d0(void)

undefined8 * FUN_14350a0d0(undefined8 *param_1)

{
  FUN_1434f20e0();
  *param_1 = &PTR_ForEachChild_GC_145b25938;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14350a110 ForEachChild_GC body=81 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_display::Bitmap::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435195d0();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 14350a180 FUN_14350a180 body=245 status=ok
// SIG undefined FUN_14350a180(void)

undefined8 FUN_14350a180(longlong param_1)

{
  RefCountNTSImpl *this;
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_res8[0] = 0x10004;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
    FUN_143310f20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x50),local_28,local_res8);
    local_res8[0] = 0x10001;
    this = (RefCountNTSImpl *)
           (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x20))
                     (*(longlong **)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x10),local_28,0,
                      local_res8,1);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
    }
    *(RefCountNTSImpl **)(param_1 + 0x88) = this;
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4;
    }
    FUN_1435e0fb0(lVar2,param_1);
    uVar1 = FUN_1435b5230(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    return *(undefined8 *)(param_1 + 0x88);
  }
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 14350a280 FUN_14350a280 body=93 status=ok
// SIG undefined FUN_14350a280(void)

void FUN_14350a280(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b25938;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 14350a2f0 FUN_14350a2f0 body=275 status=ok
// SIG undefined FUN_14350a2f0(void)

void FUN_14350a2f0(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  RefCountNTSImpl *this;
  char cVar3;
  longlong lVar4;
  
  if (param_1[0x11] == 0) {
    (**(code **)(*param_1 + 0xd0))();
  }
  puVar1 = (ulonglong *)(param_1 + 0x13);
  if (*puVar1 == 0) {
    cVar3 = FUN_1435e8720(param_1[8],puVar1,*(undefined8 *)(param_1[8] + 0x308),0,0);
    if (cVar3 != '\0') {
      uVar2 = *puVar1;
      lVar4 = (**(code **)(*(longlong *)param_1[0x11] + 0x2a0))();
      if (lVar4 != 0) {
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      this = *(RefCountNTSImpl **)(uVar2 + 0x40);
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
      *(longlong *)(uVar2 + 0x40) = lVar4;
      *(longlong *)(*puVar1 + 0x48) = param_1[0x11];
    }
  }
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14350a410 FUN_14350a410 body=30 status=ok
// SIG undefined FUN_14350a410(void)

undefined8 * FUN_14350a410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14350a2f0();
  return param_2;
}



// FUNCTION 14350a440 FUN_14350a440 body=43 status=ok
// SIG undefined FUN_14350a440(void)

undefined8 * FUN_14350a440(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x18;
  *param_1 = &PTR_FUN_145b25a10;
  return param_1;
}



// FUNCTION 14350a480 FUN_14350a480 body=175 status=ok
// SIG undefined FUN_14350a480(void)

void FUN_14350a480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b25938;
    puVar1[0x13] = 0;
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



// FUNCTION 14350a540 FUN_14350a540 body=43 status=ok
// SIG undefined FUN_14350a540(void)

undefined8 * FUN_14350a540(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x18;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350a580 FUN_14350a580 body=234 status=ok
// SIG undefined FUN_14350a580(void)

undefined8 * FUN_14350a580(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e900);
    *(undefined4 *)(puVar2 + 0x12) = 0x18;
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
              (puVar2,param_2,&PTR_DAT_145b1e900);
    *(undefined4 *)(puVar2 + 0x12) = 0x18;
    *puVar2 = &PTR_FUN_145b25a10;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350a670 FUN_14350a670 body=70 status=ok
// SIG undefined FUN_14350a670(void)

undefined8 * FUN_14350a670(undefined8 *param_1)

{
  FUN_1434f20e0();
  param_1[0x13] = 0;
  *param_1 = &PTR_ForEachChild_GC_145b25a88;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14350a6f0 FUN_14350a6f0 body=474 status=ok
// SIG undefined FUN_14350a6f0(void)

undefined8 FUN_14350a6f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  RefCountNTSImpl *this;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_res8 [2];
  longlong local_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
  lVar3 = FUN_1435e8f40(*(longlong *)(param_1 + 0x40),param_1);
  if (lVar3 == 0) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  lVar7 = 0;
  local_38 = 0;
  lStack_30 = 0;
  lStack_28 = 0;
  FUN_1434f2330(param_1,&local_38,lVar3,1);
  if (local_38 == 0) {
    local_res8[0] = 0x10003;
    plVar4 = (longlong *)FUN_143310f20(lVar3,local_20,local_res8);
    local_38 = *plVar4;
    lStack_28 = plVar4[2];
    lVar2 = *(longlong *)(param_1 + 0x40);
    lStack_30 = lVar3;
    if (*(longlong *)(lVar2 + 0x108) != 0) {
      uVar6 = *(longlong *)(lVar2 + 0x108) - 1;
      lStack_30 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar2 + 0x120) + (uVar6 >> 6) * 8) + 0x18 +
                       (ulonglong)((uint)uVar6 & 0x3f) * 0xa0) + 0xa0) + 0x178);
    }
  }
  plVar4 = *(longlong **)(lVar1 + 0x18);
  local_res8[0] = 0x40000;
  this = (RefCountNTSImpl *)
         (**(code **)(*plVar4 + 0x20))
                   (plVar4,*(undefined8 *)(lVar1 + 0x10),&local_38,0,local_res8,6);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
  }
  *(RefCountNTSImpl **)(param_1 + 0x88) = this;
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    lVar7 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
  }
  FUN_1435e0fb0(lVar7,param_1);
  uVar5 = FUN_1435b5230(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  FUN_143de4930(*(undefined8 *)(param_1 + 0x88));
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 14350a8d0 FUN_14350a8d0 body=425 status=ok
// SIG undefined FUN_14350a8d0(void)

void FUN_14350a8d0(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((param_2 != 0) &&
     (cVar3 = FUN_1435c8b00(*(longlong *)(param_1 + 0x40),param_3,"flash.display.DisplayObject",
                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8)), cVar3 != '\0'))
  {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_3 + 0x10);
    lVar4 = lVar5;
    if (lVar1 != 0) {
      lVar4 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
    }
    Scaleform::GFx::AS3::AvmButton::SetUpStateObject(lVar4,*(undefined8 *)(lVar2 + 0x88));
    FUN_1434f0700(param_1 + 0xa8,lVar2);
  }
  if ((1 < param_2) &&
     (cVar3 = FUN_1435c8b00(*(longlong *)(param_1 + 0x40),param_3 + 0x20,
                            "flash.display.DisplayObject",
                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8)), cVar3 != '\0'))
  {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_3 + 0x30);
    lVar4 = lVar5;
    if (lVar1 != 0) {
      lVar4 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
    }
    Scaleform::GFx::AS3::AvmButton::SetOverStateObject(lVar4,*(undefined8 *)(lVar2 + 0x88));
    FUN_1434f0700(param_1 + 0xa0,lVar2);
  }
  if ((2 < param_2) &&
     (cVar3 = FUN_1435c8b00(*(longlong *)(param_1 + 0x40),param_3 + 0x40,
                            "flash.display.DisplayObject",
                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8)), cVar3 != '\0'))
  {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_3 + 0x50);
    lVar4 = lVar5;
    if (lVar1 != 0) {
      lVar4 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
    }
    Scaleform::GFx::AS3::AvmButton::SetDownStateObject(lVar4,*(undefined8 *)(lVar2 + 0x88));
    FUN_1434f0700(param_1 + 0xb0,lVar2);
  }
  if ((3 < param_2) &&
     (cVar3 = FUN_1435c8b00(*(longlong *)(param_1 + 0x40),param_3 + 0x60,
                            "flash.display.DisplayObject",
                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8)), cVar3 != '\0'))
  {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_3 + 0x70);
    if (lVar1 != 0) {
      lVar5 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
    }
    Scaleform::GFx::AS3::AvmButton::SetHitStateObject(lVar5,*(undefined8 *)(lVar2 + 0x88));
    FUN_1434f0700(param_1 + 0xb8,lVar2);
  }
  return;
}



// FUNCTION 14350aa80 FUN_14350aa80 body=120 status=ok
// SIG undefined FUN_14350aa80(void)

void FUN_14350aa80(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0xb0);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14350ab00 downStateSet body=77 status=ok
// SIG undefined downStateSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::SimpleButton::downStateSet
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
  }
  AvmButton::SetDownStateObject(lVar1,*(undefined8 *)(param_3 + 0x88));
  FUN_1434f0700(param_1 + 0xb0,param_3);
  return;
}



// FUNCTION 14350abb0 FUN_14350abb0 body=120 status=ok
// SIG undefined FUN_14350abb0(void)

void FUN_14350abb0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0xb8);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14350ac30 hitTestStateSet body=77 status=ok
// SIG undefined hitTestStateSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::SimpleButton::hitTestStateSet
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
  }
  AvmButton::SetHitStateObject(lVar1,*(undefined8 *)(param_3 + 0x88));
  FUN_1434f0700(param_1 + 0xb8,param_3);
  return;
}



// FUNCTION 14350ac90 FUN_14350ac90 body=120 status=ok
// SIG undefined FUN_14350ac90(void)

void FUN_14350ac90(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0xa0);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14350ad10 overStateSet body=77 status=ok
// SIG undefined overStateSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::SimpleButton::overStateSet
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
  }
  AvmButton::SetOverStateObject(lVar1,*(undefined8 *)(param_3 + 0x88));
  FUN_1434f0700(param_1 + 0xa0,param_3);
  return;
}



// FUNCTION 14350ae20 FUN_14350ae20 body=120 status=ok
// SIG undefined FUN_14350ae20(void)

void FUN_14350ae20(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0xa8);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14350aea0 upStateSet body=77 status=ok
// SIG undefined upStateSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::SimpleButton::upStateSet
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
  }
  AvmButton::SetUpStateObject(lVar1,*(undefined8 *)(param_3 + 0x88));
  FUN_1434f0700(param_1 + 0xa8,param_3);
  return;
}



// FUNCTION 14350af70 FUN_14350af70 body=30 status=ok
// SIG undefined FUN_14350af70(void)

undefined8 * FUN_14350af70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14350aa80();
  return param_2;
}



// FUNCTION 14350afa0 FUN_14350afa0 body=30 status=ok
// SIG undefined FUN_14350afa0(void)

undefined8 * FUN_14350afa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14350abb0();
  return param_2;
}



// FUNCTION 14350afd0 FUN_14350afd0 body=30 status=ok
// SIG undefined FUN_14350afd0(void)

undefined8 * FUN_14350afd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14350ac90();
  return param_2;
}



// FUNCTION 14350b000 FUN_14350b000 body=51 status=ok
// SIG undefined FUN_14350b000(void)

undefined8 * FUN_14350b000(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method SimpleButton::soundTransformGet() is not implemented\n");
  return param_2;
}



// FUNCTION 14350b040 FUN_14350b040 body=30 status=ok
// SIG undefined FUN_14350b040(void)

undefined8 * FUN_14350b040(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14350ae20();
  return param_2;
}



// FUNCTION 14350b070 FUN_14350b070 body=43 status=ok
// SIG undefined FUN_14350b070(void)

undefined8 * FUN_14350b070(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x1e;
  *param_1 = &PTR_FUN_145b25b60;
  return param_1;
}



// FUNCTION 14350b0b0 FUN_14350b0b0 body=203 status=ok
// SIG undefined FUN_14350b0b0(void)

void FUN_14350b0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    puVar1[0x13] = 0;
    *puVar1 = &PTR_ForEachChild_GC_145b25a88;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
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



// FUNCTION 14350b190 FUN_14350b190 body=43 status=ok
// SIG undefined FUN_14350b190(void)

undefined8 * FUN_14350b190(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x1e;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350b1d0 FUN_14350b1d0 body=234 status=ok
// SIG undefined FUN_14350b1d0(void)

undefined8 * FUN_14350b1d0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b21240);
    *(undefined4 *)(puVar2 + 0x12) = 0x1e;
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
              (puVar2,param_2,&PTR_DAT_145b21240);
    *(undefined4 *)(puVar2 + 0x12) = 0x1e;
    *puVar2 = &PTR_FUN_145b25b60;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350b2c0 FUN_14350b2c0 body=33 status=ok
// SIG undefined FUN_14350b2c0(void)

undefined8 * FUN_14350b2c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350b2f0 FUN_14350b2f0 body=261 status=ok
// SIG undefined FUN_14350b2f0(void)

undefined8 * FUN_14350b2f0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f718);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1f718);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b16e38;
    puVar5[0xb] = "reflect";
    puVar5[0xc] = "repeat";
  }
  return param_1;
}



// FUNCTION 14350b400 FUN_14350b400 body=66 status=ok
// SIG undefined FUN_14350b400(void)

undefined8 * FUN_14350b400(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b16e38;
  param_1[0xb] = "reflect";
  param_1[0xc] = "repeat";
  return param_1;
}



// FUNCTION 14350b450 FUN_14350b450 body=33 status=ok
// SIG undefined FUN_14350b450(void)

undefined8 * FUN_14350b450(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350b480 FUN_14350b480 body=216 status=ok
// SIG undefined FUN_14350b480(void)

undefined8 * FUN_14350b480(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b210b8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b210b8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar3 != 0) {
    FUN_14350b560(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350b560 FUN_14350b560 body=127 status=ok
// SIG undefined FUN_14350b560(void)

undefined8 * FUN_14350b560(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26340;
  param_1[10] = &DAT_145b06dd4;
  param_1[0xb] = &DAT_145b26418;
  param_1[0xc] = &DAT_145b06dd8;
  param_1[0xd] = &DAT_145b1393c;
  param_1[0xe] = &DAT_145b13940;
  param_1[0xf] = &DAT_145b13938;
  param_1[0x10] = &DAT_145b2641c;
  param_1[0x11] = &DAT_145b13948;
  return param_1;
}



// FUNCTION 14350b5f0 FUN_14350b5f0 body=33 status=ok
// SIG undefined FUN_14350b5f0(void)

undefined8 * FUN_14350b5f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350b620 FUN_14350b620 body=261 status=ok
// SIG undefined FUN_14350b620(void)

undefined8 * FUN_14350b620(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b21780);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b21780);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "fullScreen";
    puVar5[0xb] = "fullScreenInteractive";
    puVar5[0xc] = "normal";
  }
  return param_1;
}



// FUNCTION 14350b730 FUN_14350b730 body=66 status=ok
// SIG undefined FUN_14350b730(void)

undefined8 * FUN_14350b730(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "fullScreen";
  param_1[0xb] = "fullScreenInteractive";
  param_1[0xc] = "normal";
  return param_1;
}



// FUNCTION 14350b780 FUN_14350b780 body=33 status=ok
// SIG undefined FUN_14350b780(void)

undefined8 * FUN_14350b780(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350b7b0 FUN_14350b7b0 body=272 status=ok
// SIG undefined FUN_14350b7b0(void)

undefined8 * FUN_14350b7b0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c640);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1c640);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = &DAT_145b26448;
    puVar5[0xb] = &DAT_145b26450;
    puVar5[0xc] = &DAT_145b26458;
    puVar5[0xd] = "medium";
  }
  return param_1;
}



// FUNCTION 14350b8d0 FUN_14350b8d0 body=77 status=ok
// SIG undefined FUN_14350b8d0(void)

undefined8 * FUN_14350b8d0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = &DAT_145b26448;
  param_1[0xb] = &DAT_145b26450;
  param_1[0xc] = &DAT_145b26458;
  param_1[0xd] = "medium";
  return param_1;
}



// FUNCTION 14350b930 FUN_14350b930 body=33 status=ok
// SIG undefined FUN_14350b930(void)

undefined8 * FUN_14350b930(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350b960 FUN_14350b960 body=272 status=ok
// SIG undefined FUN_14350b960(void)

undefined8 * FUN_14350b960(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1d780);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1d780);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "exactFit";
    puVar5[0xb] = "noBorder";
    puVar5[0xc] = "noScale";
    puVar5[0xd] = "showAll";
  }
  return param_1;
}



// FUNCTION 14350ba80 FUN_14350ba80 body=77 status=ok
// SIG undefined FUN_14350ba80(void)

undefined8 * FUN_14350ba80(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "exactFit";
  param_1[0xb] = "noBorder";
  param_1[0xc] = "noScale";
  param_1[0xd] = "showAll";
  return param_1;
}



// FUNCTION 14350bae0 FUN_14350bae0 body=33 status=ok
// SIG undefined FUN_14350bae0(void)

undefined8 * FUN_14350bae0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350bb10 FUN_14350bb10 body=291 status=ok
// SIG undefined FUN_14350bb10(void)

undefined8 * FUN_14350bb10(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e3b0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1e3b0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *(undefined4 *)(puVar5 + 10) = 1;
    *puVar5 = &PTR_ForEachChild_GC_145b26468;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 2;
    *(undefined4 *)(puVar5 + 0xb) = 3;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 4;
    *(undefined4 *)(puVar5 + 0xc) = 5;
    *(undefined4 *)((longlong)puVar5 + 100) = 6;
    *(undefined4 *)(puVar5 + 0xd) = 7;
    *(undefined4 *)((longlong)puVar5 + 0x6c) = 8;
    *(undefined4 *)(puVar5 + 0xe) = 9;
  }
  return param_1;
}



// FUNCTION 14350bc40 FUN_14350bc40 body=96 status=ok
// SIG undefined FUN_14350bc40(void)

undefined8 * FUN_14350bc40(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 1;
  *param_1 = &PTR_ForEachChild_GC_145b26468;
  *(undefined4 *)((longlong)param_1 + 0x54) = 2;
  *(undefined4 *)(param_1 + 0xb) = 3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 4;
  *(undefined4 *)(param_1 + 0xc) = 5;
  *(undefined4 *)((longlong)param_1 + 100) = 6;
  *(undefined4 *)(param_1 + 0xd) = 7;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 8;
  *(undefined4 *)(param_1 + 0xe) = 9;
  return param_1;
}



// FUNCTION 14350bcb0 FUN_14350bcb0 body=33 status=ok
// SIG undefined FUN_14350bcb0(void)

undefined8 * FUN_14350bcb0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350bce0 FUN_14350bce0 body=215 status=ok
// SIG undefined FUN_14350bce0(void)

undefined8 * FUN_14350bce0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1efc0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1efc0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350bdc0 FUN_14350bdc0 body=33 status=ok
// SIG undefined FUN_14350bdc0(void)

undefined8 * FUN_14350bdc0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350bdf0 FUN_14350bdf0 body=215 status=ok
// SIG undefined FUN_14350bdf0(void)

undefined8 * FUN_14350bdf0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f658);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1f658);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350bed0 FUN_14350bed0 body=33 status=ok
// SIG undefined FUN_14350bed0(void)

undefined8 * FUN_14350bed0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350bf00 FUN_14350bf00 body=215 status=ok
// SIG undefined FUN_14350bf00(void)

undefined8 * FUN_14350bf00(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1fe50);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1fe50);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350bfe0 FUN_14350bfe0 body=33 status=ok
// SIG undefined FUN_14350bfe0(void)

undefined8 * FUN_14350bfe0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350c010 FUN_14350c010 body=216 status=ok
// SIG undefined FUN_14350c010(void)

undefined8 * FUN_14350c010(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b202e8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b202e8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,200,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_display::ShaderParameterType::ShaderParameterType
              (lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350c0f0 ShaderParameterType body=225 status=ok
// SIG undefined ShaderParameterType(void)

undefined8 *
Scaleform::GFx::AS3::Classes::fl_display::ShaderParameterType::ShaderParameterType
          (undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26540;
  param_1[10] = &DAT_145af4c58;
  param_1[0xb] = "bool2";
  param_1[0xc] = "bool3";
  param_1[0xd] = "bool4";
  param_1[0xe] = "float";
  param_1[0xf] = "float2";
  param_1[0x10] = "float3";
  param_1[0x11] = "float4";
  param_1[0x12] = &DAT_145af6ba4;
  param_1[0x13] = &DAT_145b26648;
  param_1[0x14] = &DAT_145b26650;
  param_1[0x15] = &DAT_145b26658;
  param_1[0x16] = "matrix2x2";
  param_1[0x17] = "matrix3x3";
  param_1[0x18] = "matrix4x4";
  return param_1;
}



// FUNCTION 14350c1e0 FUN_14350c1e0 body=33 status=ok
// SIG undefined FUN_14350c1e0(void)

undefined8 * FUN_14350c1e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350c210 FUN_14350c210 body=250 status=ok
// SIG undefined FUN_14350c210(void)

undefined8 * FUN_14350c210(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b21be8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b21be8);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = &DAT_145b2668c;
    puVar5[0xb] = &DAT_145b26694;
  }
  return param_1;
}



// FUNCTION 14350c310 FUN_14350c310 body=55 status=ok
// SIG undefined FUN_14350c310(void)

undefined8 * FUN_14350c310(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = &DAT_145b2668c;
  param_1[0xb] = &DAT_145b26694;
  return param_1;
}



// FUNCTION 14350c350 FUN_14350c350 body=33 status=ok
// SIG undefined FUN_14350c350(void)

undefined8 * FUN_14350c350(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350c380 FUN_14350c380 body=215 status=ok
// SIG undefined FUN_14350c380(void)

undefined8 * FUN_14350c380(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c6a0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b1c6a0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350c460 FUN_14350c460 body=33 status=ok
// SIG undefined FUN_14350c460(void)

undefined8 * FUN_14350c460(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14350c490 FUN_14350c490 body=215 status=ok
// SIG undefined FUN_14350c490(void)

undefined8 * FUN_14350c490(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1ca30);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1ca30);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14350c5a0 FUN_14350c5a0 body=103 status=ok
// SIG undefined FUN_14350c5a0(void)

void FUN_14350c5a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75f10)((longlong)DAT_146b75f18 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x30),
                     *(undefined8 *)(param_6 + 0x50),*(undefined8 *)(param_6 + 0x70),
                     *(undefined8 *)(param_6 + 0x90),*(undefined8 *)(param_6 + 0xb0));
  }
  return;
}



// FUNCTION 14350c610 FUN_14350c610 body=148 status=ok
// SIG undefined FUN_14350c610(void)

void FUN_14350c610(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75b60)(DAT_146b75b68 + lVar1,local_28);
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



// FUNCTION 14350c6e0 FUN_14350c6e0 body=176 status=ok
// SIG undefined FUN_14350c6e0(void)

void FUN_14350c6e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75810)((longlong)DAT_146b75818 + *(longlong *)(param_3 + 0x10),local_28);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_44,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14350c7f0 FUN_14350c7f0 body=144 status=ok
// SIG undefined FUN_14350c7f0(void)

void FUN_14350c7f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76080)((longlong)DAT_146b76088 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350c8b0 FUN_14350c8b0 body=148 status=ok
// SIG undefined FUN_14350c8b0(void)

void FUN_14350c8b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b761e0)(DAT_146b761e8 + lVar1,local_28);
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



// FUNCTION 14350c950 FUN_14350c950 body=175 status=ok
// SIG undefined FUN_14350c950(void)

void FUN_14350c950(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b764c0)((longlong)DAT_146b764c8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350ca80 FUN_14350ca80 body=175 status=ok
// SIG undefined FUN_14350ca80(void)

void FUN_14350ca80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b756a0)((longlong)DAT_146b756a8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350cb30 FUN_14350cb30 body=132 status=ok
// SIG undefined FUN_14350cb30(void)

void FUN_14350cb30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b76970)(DAT_146b76978 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14350cbc0 FUN_14350cbc0 body=197 status=ok
// SIG undefined FUN_14350cbc0(void)

void FUN_14350cbc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75820)((longlong)DAT_146b75828 + *(longlong *)(param_3 + 0x10),&local_18);
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



// FUNCTION 14350cc90 FUN_14350cc90 body=148 status=ok
// SIG undefined FUN_14350cc90(void)

void FUN_14350cc90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75950)(DAT_146b75958 + lVar1,local_28);
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



// FUNCTION 14350cd30 FUN_14350cd30 body=144 status=ok
// SIG undefined FUN_14350cd30(void)

void FUN_14350cd30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76760)((longlong)DAT_146b76768 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350cdf0 FUN_14350cdf0 body=145 status=ok
// SIG undefined FUN_14350cdf0(void)

void FUN_14350cdf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b761f0)((longlong)DAT_146b761f8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350cf00 FUN_14350cf00 body=148 status=ok
// SIG undefined FUN_14350cf00(void)

void FUN_14350cf00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75b80)(DAT_146b75b88 + lVar1,local_28);
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



// FUNCTION 14350cfa0 FUN_14350cfa0 body=197 status=ok
// SIG undefined FUN_14350cfa0(void)

void FUN_14350cfa0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75830)((longlong)DAT_146b75838 + *(longlong *)(param_3 + 0x10),&local_18);
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



// FUNCTION 14350d0d0 FUN_14350d0d0 body=145 status=ok
// SIG undefined FUN_14350d0d0(void)

void FUN_14350d0d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b760a0)((longlong)DAT_146b760a8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350d1a0 FUN_14350d1a0 body=175 status=ok
// SIG undefined FUN_14350d1a0(void)

void FUN_14350d1a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76200)((longlong)DAT_146b76208 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350d250 FUN_14350d250 body=175 status=ok
// SIG undefined FUN_14350d250(void)

void FUN_14350d250(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b764e0)((longlong)DAT_146b764e8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350d3c0 FUN_14350d3c0 body=112 status=ok
// SIG undefined FUN_14350d3c0(void)

void FUN_14350d3c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b75970)(DAT_146b75978 + lVar2,local_18);
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



// FUNCTION 14350d430 FUN_14350d430 body=238 status=ok
// SIG undefined FUN_14350d430(void)

void FUN_14350d430(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
    (*DAT_146b76990)(DAT_146b76998 + lVar2,local_18,&local_10);
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



// FUNCTION 14350d550 FUN_14350d550 body=112 status=ok
// SIG undefined FUN_14350d550(void)

void FUN_14350d550(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b76210)(DAT_146b76218 + lVar2,local_18);
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



// FUNCTION 14350d5c0 FUN_14350d5c0 body=242 status=ok
// SIG undefined FUN_14350d5c0(void)

void FUN_14350d5c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38[0] = 0;
  local_20 = param_6 + 0x40;
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined4 *)(param_6 + 0x30);
  local_18 = *(undefined8 *)(param_6 + 0x70);
  local_10 = *(undefined4 *)(param_6 + 0x90);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75840)((longlong)DAT_146b75848 + *(longlong *)(param_3 + 0x10),local_38,local_30,
                     local_28,local_20,local_18,local_10);
  }
  uVar1 = local_38[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_57,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 14350d6c0 FUN_14350d6c0 body=144 status=ok
// SIG undefined FUN_14350d6c0(void)

void FUN_14350d6c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b75d10)((longlong)DAT_146b75d18 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350d750 FUN_14350d750 body=112 status=ok
// SIG undefined FUN_14350d750(void)

void FUN_14350d750(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b756c0)(DAT_146b756c8 + lVar2,local_18);
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



// FUNCTION 14350d7f0 FUN_14350d7f0 body=175 status=ok
// SIG undefined FUN_14350d7f0(void)

void FUN_14350d7f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75ba0)((longlong)DAT_146b75ba8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350d8f0 FUN_14350d8f0 body=132 status=ok
// SIG undefined FUN_14350d8f0(void)

void FUN_14350d8f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b75980)(DAT_146b75988 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14350d980 FUN_14350d980 body=145 status=ok
// SIG undefined FUN_14350d980(void)

void FUN_14350d980(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76790)((longlong)DAT_146b76798 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350da20 FUN_14350da20 body=175 status=ok
// SIG undefined FUN_14350da20(void)

void FUN_14350da20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76220)((longlong)DAT_146b76228 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350dad0 FUN_14350dad0 body=197 status=ok
// SIG undefined FUN_14350dad0(void)

void FUN_14350dad0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75850)((longlong)DAT_146b75858 + *(longlong *)(param_3 + 0x10),&local_18);
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



// FUNCTION 14350dbd0 FUN_14350dbd0 body=144 status=ok
// SIG undefined FUN_14350dbd0(void)

void FUN_14350dbd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76500)((longlong)DAT_146b76508 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350dc60 FUN_14350dc60 body=145 status=ok
// SIG undefined FUN_14350dc60(void)

void FUN_14350dc60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b762d0)((longlong)DAT_146b762d8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350dd00 FUN_14350dd00 body=132 status=ok
// SIG undefined FUN_14350dd00(void)

void FUN_14350dd00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b756d0)(DAT_146b756d8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14350ddf0 FUN_14350ddf0 body=144 status=ok
// SIG undefined FUN_14350ddf0(void)

void FUN_14350ddf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b75990)((longlong)DAT_146b75998 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350de80 FUN_14350de80 body=112 status=ok
// SIG undefined FUN_14350de80(void)

void FUN_14350de80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b767a0)(DAT_146b767a8 + lVar2,local_18);
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



// FUNCTION 14350def0 FUN_14350def0 body=144 status=ok
// SIG undefined FUN_14350def0(void)

void FUN_14350def0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76230)((longlong)DAT_146b76238 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350dfa0 FUN_14350dfa0 body=145 status=ok
// SIG undefined FUN_14350dfa0(void)

void FUN_14350dfa0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b75d30)((longlong)DAT_146b75d38 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e040 FUN_14350e040 body=112 status=ok
// SIG undefined FUN_14350e040(void)

void FUN_14350e040(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b762e0)(DAT_146b762e8 + lVar2,local_18);
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



// FUNCTION 14350e0b0 FUN_14350e0b0 body=144 status=ok
// SIG undefined FUN_14350e0b0(void)

void FUN_14350e0b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b756e0)((longlong)DAT_146b756e8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e170 FUN_14350e170 body=175 status=ok
// SIG undefined FUN_14350e170(void)

void FUN_14350e170(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75bc0)((longlong)DAT_146b75bc8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e220 FUN_14350e220 body=112 status=ok
// SIG undefined FUN_14350e220(void)

void FUN_14350e220(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b767b0)(DAT_146b767b8 + lVar2,local_18);
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



// FUNCTION 14350e2f0 FUN_14350e2f0 body=175 status=ok
// SIG undefined FUN_14350e2f0(void)

void FUN_14350e2f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76240)((longlong)DAT_146b76248 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e3a0 FUN_14350e3a0 body=144 status=ok
// SIG undefined FUN_14350e3a0(void)

void FUN_14350e3a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b75d40)((longlong)DAT_146b75d48 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e450 FUN_14350e450 body=112 status=ok
// SIG undefined FUN_14350e450(void)

void FUN_14350e450(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b762f0)(DAT_146b762f8 + lVar2,local_18);
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



// FUNCTION 14350e4c0 FUN_14350e4c0 body=175 status=ok
// SIG undefined FUN_14350e4c0(void)

void FUN_14350e4c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76520)((longlong)DAT_146b76528 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e570 FUN_14350e570 body=175 status=ok
// SIG undefined FUN_14350e570(void)

void FUN_14350e570(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75bd0)((longlong)DAT_146b75bd8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e650 FUN_14350e650 body=175 status=ok
// SIG undefined FUN_14350e650(void)

void FUN_14350e650(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b759b0)((longlong)DAT_146b759b8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e700 FUN_14350e700 body=132 status=ok
// SIG undefined FUN_14350e700(void)

void FUN_14350e700(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b767c0)(DAT_146b767c8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14350e7f0 FUN_14350e7f0 body=175 status=ok
// SIG undefined FUN_14350e7f0(void)

void FUN_14350e7f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76300)((longlong)DAT_146b76308 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350e8a0 FUN_14350e8a0 body=86 status=ok
// SIG undefined FUN_14350e8a0(void)

void FUN_14350e8a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75880)((longlong)DAT_146b75888 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined4 *)(param_6 + 0x10),*(undefined4 *)(param_6 + 0x30),
                     *(undefined4 *)(param_6 + 0x50),*(undefined4 *)(param_6 + 0x70),
                     *(undefined1 *)(param_6 + 0x90));
  }
  return;
}


