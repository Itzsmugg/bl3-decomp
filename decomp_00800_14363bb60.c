// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14363bb60 FUN_14363bb60 body=33 status=ok
// SIG undefined FUN_14363bb60(void)

undefined8 * FUN_14363bb60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363bb90 FUN_14363bb90 body=228 status=ok
// SIG undefined FUN_14363bb90(void)

undefined8 * FUN_14363bb90(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b527d0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b527d0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14363bc80 FUN_14363bc80 body=33 status=ok
// SIG undefined FUN_14363bc80(void)

undefined8 * FUN_14363bc80(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14363bcb0 FUN_14363bcb0 body=43 status=ok
// SIG undefined FUN_14363bcb0(void)

undefined8 * FUN_14363bcb0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined2 *)(param_1 + 8) = 0x101;
  *param_1 = &PTR_FUN_145b1c0f8;
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return param_1;
}



// FUNCTION 14363bcf0 FUN_14363bcf0 body=33 status=ok
// SIG undefined FUN_14363bcf0(void)

undefined8 * FUN_14363bcf0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b53490;
  return param_1;
}



// FUNCTION 14363bd20 FUN_14363bd20 body=183 status=ok
// SIG undefined FUN_14363bd20(void)

void FUN_14363bd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    *(undefined2 *)(puVar1 + 8) = 0x101;
    *puVar1 = &PTR_FUN_145b1c0f8;
    *(undefined1 *)((longlong)puVar1 + 0x42) = 1;
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



// FUNCTION 14363bde0 FUN_14363bde0 body=33 status=ok
// SIG undefined FUN_14363bde0(void)

undefined8 * FUN_14363bde0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363be10 FUN_14363be10 body=214 status=ok
// SIG undefined FUN_14363be10(void)

undefined8 * FUN_14363be10(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52830);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52830);
    *puVar2 = &PTR_FUN_145b53490;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363bef0 FUN_14363bef0 body=33 status=ok
// SIG undefined FUN_14363bef0(void)

undefined8 * FUN_14363bef0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363bf20 FUN_14363bf20 body=250 status=ok
// SIG undefined FUN_14363bf20(void)

undefined8 * FUN_14363bf20(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52bf0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b52bf0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "critical";
    puVar5[0xb] = "informational";
  }
  return param_1;
}



// FUNCTION 14363c020 FUN_14363c020 body=55 status=ok
// SIG undefined FUN_14363c020(void)

undefined8 * FUN_14363c020(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "critical";
  param_1[0xb] = "informational";
  return param_1;
}



// FUNCTION 14363c060 FUN_14363c060 body=33 status=ok
// SIG undefined FUN_14363c060(void)

undefined8 * FUN_14363c060(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363c090 FUN_14363c090 body=242 status=ok
// SIG undefined FUN_14363c090(void)

undefined8 * FUN_14363c090(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b52ce0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b52ce0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
    puVar5[10] = 0x404f800000000000;
  }
  return param_1;
}



// FUNCTION 14363c190 FUN_14363c190 body=47 status=ok
// SIG undefined FUN_14363c190(void)

undefined8 * FUN_14363c190(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = 0x404f800000000000;
  return param_1;
}



// FUNCTION 14363c1d0 FUN_14363c1d0 body=33 status=ok
// SIG undefined FUN_14363c1d0(void)

undefined8 * FUN_14363c1d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363c200 FUN_14363c200 body=215 status=ok
// SIG undefined FUN_14363c200(void)

undefined8 * FUN_14363c200(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b51dd0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b51dd0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363c2e0 FUN_14363c2e0 body=175 status=ok
// SIG undefined FUN_14363c2e0(void)

void FUN_14363c2e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b128)((longlong)DAT_146b7b130 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14363c3b0 FUN_14363c3b0 body=132 status=ok
// SIG undefined FUN_14363c3b0(void)

void FUN_14363c3b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b148)(DAT_146b7b150 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363c440 FUN_14363c440 body=209 status=ok
// SIG undefined FUN_14363c440(void)

void FUN_14363c440(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
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
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0xc);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b158)(DAT_146b7b160 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363c520 FUN_14363c520 body=238 status=ok
// SIG undefined FUN_14363c520(void)

void FUN_14363c520(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
    (*DAT_146b7b168)(DAT_146b7b170 + lVar2,local_18,&local_10);
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



// FUNCTION 14363c610 FUN_14363c610 body=267 status=ok
// SIG undefined FUN_14363c610(void)

void FUN_14363c610(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
  undefined4 *local_18;
  undefined1 local_10;
  
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
  local_18 = param_6 + 8;
  local_10 = *(undefined1 *)(param_6 + 0x14);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b178)(DAT_146b7b180 + lVar2,local_28,&local_20,local_18,local_10);
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



// FUNCTION 14363c720 FUN_14363c720 body=267 status=ok
// SIG undefined FUN_14363c720(void)

void FUN_14363c720(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
  undefined4 *local_18;
  undefined1 local_10;
  
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
  local_18 = param_6 + 8;
  local_10 = *(undefined1 *)(param_6 + 0x14);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b188)(DAT_146b7b190 + lVar2,local_28,&local_20,local_18,local_10);
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



// FUNCTION 14363c830 FUN_14363c830 body=175 status=ok
// SIG undefined FUN_14363c830(void)

void FUN_14363c830(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b198)((longlong)DAT_146b7b1a0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14363c8e0 FUN_14363c8e0 body=33 status=ok
// SIG undefined FUN_14363c8e0(void)

undefined8 * FUN_14363c8e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363c910 FUN_14363c910 body=261 status=ok
// SIG undefined FUN_14363c910(void)

undefined8 * FUN_14363c910(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b54678);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b54678);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "bottom";
    puVar5[0xb] = &DAT_145b122f4;
    puVar5[0xc] = &DAT_145b1237c;
  }
  return param_1;
}



// FUNCTION 14363ca20 FUN_14363ca20 body=66 status=ok
// SIG undefined FUN_14363ca20(void)

undefined8 * FUN_14363ca20(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "bottom";
  param_1[0xb] = &DAT_145b122f4;
  param_1[0xc] = &DAT_145b1237c;
  return param_1;
}



// FUNCTION 14363ca70 FUN_14363ca70 body=33 status=ok
// SIG undefined FUN_14363ca70(void)

undefined8 * FUN_14363ca70(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363caa0 FUN_14363caa0 body=215 status=ok
// SIG undefined FUN_14363caa0(void)

undefined8 * FUN_14363caa0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b53550);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b53550);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363cb80 FUN_14363cb80 body=33 status=ok
// SIG undefined FUN_14363cb80(void)

undefined8 * FUN_14363cb80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363cbb0 FUN_14363cbb0 body=215 status=ok
// SIG undefined FUN_14363cbb0(void)

undefined8 * FUN_14363cbb0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b535b0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b535b0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363cc90 FUN_14363cc90 body=33 status=ok
// SIG undefined FUN_14363cc90(void)

undefined8 * FUN_14363cc90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363ccc0 FUN_14363ccc0 body=215 status=ok
// SIG undefined FUN_14363ccc0(void)

undefined8 * FUN_14363ccc0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b53d30);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b53d30);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363cda0 FUN_14363cda0 body=33 status=ok
// SIG undefined FUN_14363cda0(void)

undefined8 * FUN_14363cda0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363cdd0 FUN_14363cdd0 body=261 status=ok
// SIG undefined FUN_14363cdd0(void)

undefined8 * FUN_14363cdd0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b545d0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b545d0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "maximized";
    puVar5[0xb] = "minimized";
    puVar5[0xc] = "normal";
  }
  return param_1;
}



// FUNCTION 14363cee0 FUN_14363cee0 body=66 status=ok
// SIG undefined FUN_14363cee0(void)

undefined8 * FUN_14363cee0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "maximized";
  param_1[0xb] = "minimized";
  param_1[0xc] = "normal";
  return param_1;
}



// FUNCTION 14363cf30 FUN_14363cf30 body=33 status=ok
// SIG undefined FUN_14363cf30(void)

undefined8 * FUN_14363cf30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363cf60 FUN_14363cf60 body=215 status=ok
// SIG undefined FUN_14363cf60(void)

undefined8 * FUN_14363cf60(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b54728);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b54728);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14363d040 FUN_14363d040 body=33 status=ok
// SIG undefined FUN_14363d040(void)

undefined8 * FUN_14363d040(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363d070 FUN_14363d070 body=216 status=ok
// SIG undefined FUN_14363d070(void)

undefined8 * FUN_14363d070(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b549d0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b549d0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_display::NativeWindowResize::NativeWindowResize(lVar3,*param_1)
    ;
  }
  return param_1;
}



// FUNCTION 14363d150 NativeWindowResize body=141 status=ok
// SIG undefined NativeWindowResize(void)

undefined8 *
Scaleform::GFx::AS3::Classes::fl_display::NativeWindowResize::NativeWindowResize
          (undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b55018;
  param_1[10] = &DAT_145b06dd4;
  param_1[0xb] = &DAT_145b26418;
  param_1[0xc] = &DAT_145b06dd8;
  param_1[0xd] = &DAT_145b1393c;
  param_1[0xe] = &DAT_145af3922;
  param_1[0xf] = &DAT_145b13940;
  param_1[0x10] = &DAT_145b13938;
  param_1[0x11] = &DAT_145b2641c;
  param_1[0x12] = &DAT_145b13948;
  return param_1;
}



// FUNCTION 14363d1f0 FUN_14363d1f0 body=33 status=ok
// SIG undefined FUN_14363d1f0(void)

undefined8 * FUN_14363d1f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363d220 FUN_14363d220 body=250 status=ok
// SIG undefined FUN_14363d220(void)

undefined8 * FUN_14363d220(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b54b08);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b54b08);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = &DAT_145b122f4;
    puVar5[0xb] = "standard";
  }
  return param_1;
}



// FUNCTION 14363d320 FUN_14363d320 body=55 status=ok
// SIG undefined FUN_14363d320(void)

undefined8 * FUN_14363d320(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = &DAT_145b122f4;
  param_1[0xb] = "standard";
  return param_1;
}



// FUNCTION 14363d360 FUN_14363d360 body=33 status=ok
// SIG undefined FUN_14363d360(void)

undefined8 * FUN_14363d360(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363d390 FUN_14363d390 body=261 status=ok
// SIG undefined FUN_14363d390(void)

undefined8 * FUN_14363d390(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b54b98);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b54b98);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = "lightweight";
    puVar5[0xb] = "normal";
    puVar5[0xc] = "utility";
  }
  return param_1;
}



// FUNCTION 14363d4a0 FUN_14363d4a0 body=66 status=ok
// SIG undefined FUN_14363d4a0(void)

undefined8 * FUN_14363d4a0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = "lightweight";
  param_1[0xb] = "normal";
  param_1[0xc] = "utility";
  return param_1;
}



// FUNCTION 14363d4f0 FUN_14363d4f0 body=33 status=ok
// SIG undefined FUN_14363d4f0(void)

undefined8 * FUN_14363d4f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363d520 FUN_14363d520 body=228 status=ok
// SIG undefined FUN_14363d520(void)

undefined8 * FUN_14363d520(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b54c48);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b54c48);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14363d610 FUN_14363d610 body=33 status=ok
// SIG undefined FUN_14363d610(void)

undefined8 * FUN_14363d610(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14363d640 FUN_14363d640 body=89 status=ok
// SIG undefined FUN_14363d640(void)

undefined8 FUN_14363d640(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14363d6a0 FUN_14363d6a0 body=132 status=ok
// SIG undefined FUN_14363d6a0(void)

void FUN_14363d6a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b2a8)(DAT_146b7b2b0 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363d730 FUN_14363d730 body=147 status=ok
// SIG undefined FUN_14363d730(void)

void FUN_14363d730(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b578)(DAT_146b7b580 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363d7d0 FUN_14363d7d0 body=142 status=ok
// SIG undefined FUN_14363d7d0(void)

void FUN_14363d7d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
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
  local_10 = *(undefined8 *)(param_6 + 0xc);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b2b8)(DAT_146b7b2c0 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363d860 FUN_14363d860 body=147 status=ok
// SIG undefined FUN_14363d860(void)

void FUN_14363d860(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b588)(DAT_146b7b590 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363d900 FUN_14363d900 body=142 status=ok
// SIG undefined FUN_14363d900(void)

void FUN_14363d900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
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
  local_10 = *(undefined8 *)(param_6 + 0xc);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b2c8)(DAT_146b7b2d0 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363d990 FUN_14363d990 body=144 status=ok
// SIG undefined FUN_14363d990(void)

void FUN_14363d990(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b598)((longlong)DAT_146b7b5a0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14363da20 FUN_14363da20 body=132 status=ok
// SIG undefined FUN_14363da20(void)

void FUN_14363da20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b2d8)(DAT_146b7b2e0 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363dab0 FUN_14363dab0 body=145 status=ok
// SIG undefined FUN_14363dab0(void)

void FUN_14363dab0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b5a8)((longlong)DAT_146b7b5b0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14363dbd0 FUN_14363dbd0 body=148 status=ok
// SIG undefined FUN_14363dbd0(void)

void FUN_14363dbd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b5c8)(DAT_146b7b5d0 + lVar1,local_28);
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



// FUNCTION 14363dc70 FUN_14363dc70 body=175 status=ok
// SIG undefined FUN_14363dc70(void)

void FUN_14363dc70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b308)((longlong)DAT_146b7b310 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14363dd20 FUN_14363dd20 body=148 status=ok
// SIG undefined FUN_14363dd20(void)

void FUN_14363dd20(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b5d8)(DAT_146b7b5e0 + lVar1,local_28);
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



// FUNCTION 14363ddf0 FUN_14363ddf0 body=145 status=ok
// SIG undefined FUN_14363ddf0(void)

void FUN_14363ddf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b5e8)((longlong)DAT_146b7b5f0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14363de90 FUN_14363de90 body=50 status=ok
// SIG undefined FUN_14363de90(void)

undefined8 * FUN_14363de90(undefined8 *param_1)

{
  FUN_1435572c0();
  *(undefined1 *)(param_1 + 0x15) = 0;
  *param_1 = &PTR_FUN_145b56710;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 14363ded0 FUN_14363ded0 body=96 status=ok
// SIG undefined FUN_14363ded0(void)

void FUN_14363ded0(longlong param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 local_res10 [8];
  
  FUN_14351ba50();
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_1435911f0(param_3,local_res10,param_1 + 0x88);
    if (*pcVar1 != '\0') {
      uVar2 = FUN_143590540();
      FUN_14363e670(param_1,uVar2,param_1 + 0x88);
    }
  }
  return;
}



// FUNCTION 14363df40 FUN_14363df40 body=239 status=ok
// SIG undefined FUN_14363df40(void)

void FUN_14363df40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x88) + 4);
  local_18 = **(longlong **)(param_1 + 0x88);
  lVar2 = FUN_1432c6260(&local_18,0x5c,0xffffffffffffffff);
  if (lVar2 < 0) {
    lVar2 = FUN_1432c6260(&local_18,0x2f,0xffffffffffffffff);
    if (lVar2 < 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*param_2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = lVar2;
      return;
    }
  }
  uVar3 = lVar2 + 1U;
  if (local_10 < lVar2 + 1U) {
    uVar3 = local_10;
  }
  local_18 = local_18 + uVar3;
  local_10 = local_10 - uVar3;
  lVar2 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218));
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



// FUNCTION 14363e100 isSymbolicLinkGet body=80 status=ok
// SIG undefined isSymbolicLinkGet(void)

void Scaleform::GFx::AS3::Instances::fl_filesystem::File::isSymbolicLinkGet
               (undefined8 param_1,undefined1 *param_2)

{
  char *_Str1;
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FUN_143557380(param_1,local_18);
  if (puVar2[1] == 4) {
    _Str1 = (char *)*puVar2;
    if (_Str1 == ".lnk") {
LAB_14363e13e:
      *param_2 = 1;
      return;
    }
    if (_Str1 != (char *)0x0) {
      iVar1 = strncmp(_Str1,".lnk",4);
      if (iVar1 == 0) goto LAB_14363e13e;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14363e160 FUN_14363e160 body=276 status=ok
// SIG undefined FUN_14363e160(void)

void FUN_14363e160(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_res8;
  longlong *local_res18 [2];
  
  iVar3 = *(int *)(param_1 + 0xac);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (iVar3 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x88);
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar5 = *param_2;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5,uVar4);
    }
    *param_2 = lVar6;
  }
  else if ((iVar3 == 1) || (iVar3 == 2)) {
    FUN_14363f9c0(local_res18);
    local_res8 = local_res18[0];
    *(int *)(local_res18[0] + 3) = (int)local_res18[0][3] + 1;
    if (((int)local_res18[0][4] != 0) &&
       (((*(char *)((ulonglong)((int)local_res18[0][4] - 1) + *local_res18[0]) != '\\' &&
         (*(int *)(*(undefined8 **)(param_1 + 0x88) + 4) != 0)) &&
        (*(char *)**(undefined8 **)(param_1 + 0x88) != '\\')))) {
      lVar6 = FUN_14335fc20(&local_res8,0x5c);
      iVar3 = *(int *)(lVar6 + 0x18);
      *(int *)(lVar6 + 0x18) = iVar3;
      if (iVar3 == 0) {
        FUN_14335f920(lVar6);
      }
    }
    FUN_143360170(&local_res8,param_1 + 0x88);
    plVar2 = local_res8;
    *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = (longlong)plVar2;
    plVar2 = local_res8 + 3;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      FUN_14335f920();
    }
    local_res18[0] = local_res18[0] + 3;
    *(int *)local_res18[0] = (int)*local_res18[0] + -1;
    if ((int)*local_res18[0] == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 14363e280 FUN_14363e280 body=100 status=ok
// SIG undefined FUN_14363e280(void)

void FUN_14363e280(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong local_res8;
  
  *(undefined4 *)(param_1 + 0xac) = 0;
  FUN_14363fd80(&local_res8,param_3,0x2f,0x5c);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x88) = local_res8;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  return;
}



// FUNCTION 14363e2f0 FUN_14363e2f0 body=399 status=ok
// SIG undefined FUN_14363e2f0(void)

void FUN_14363e2f0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = (ulonglong)*(uint *)(*(undefined8 **)(param_1 + 0x88) + 4);
  local_18 = **(undefined8 **)(param_1 + 0x88);
  uVar4 = FUN_1432c6260(&local_18,0x5c,0xffffffffffffffff);
  if (((-1 < (longlong)uVar4) ||
      (uVar4 = FUN_1432c6260(&local_18,0x2f,0xffffffffffffffff), -1 < (longlong)uVar4)) ||
     (uVar4 = (ulonglong)(local_10 != 0) - 1, -1 < (longlong)uVar4)) {
    if (local_10 < uVar4) {
      uVar4 = local_10;
    }
    local_10 = uVar4;
    lVar5 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                          local_18);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_1435572c0(puVar6,uVar2);
      *(undefined1 *)(puVar6 + 0x15) = 0;
      *puVar6 = &PTR_FUN_145b56710;
      *(undefined4 *)((longlong)puVar6 + 0xac) = 0;
    }
    puVar3 = (undefined8 *)*param_2;
    if (puVar6 != puVar3) {
      if (puVar3 != (undefined8 *)0x0) {
        if (((ulonglong)puVar3 & 1) == 0) {
          if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar3 - 1;
        }
      }
      *param_2 = (ulonglong)puVar6;
    }
    *(undefined1 *)(*param_2 + 0xa8) = *(undefined1 *)(param_1 + 0xa8);
    *(undefined4 *)(*param_2 + 0xac) = *(undefined4 *)(param_1 + 0xac);
    uVar4 = *param_2;
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    piVar1 = (int *)(*(longlong *)(uVar4 + 0x88) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(uVar4 + 0x88) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
  }
  return;
}



// FUNCTION 14363e520 FUN_14363e520 body=330 status=ok
// SIG undefined FUN_14363e520(void)

void FUN_14363e520(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 *local_res8;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  FUN_1432c5960(&local_38,DAT_146b62f28);
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 0) {
    pcVar6 = "file:///";
  }
  else if (iVar2 == 1) {
    pcVar6 = "app:/";
  }
  else {
    if (iVar2 != 2) goto LAB_14363e585;
    pcVar6 = "app-storage:/";
  }
  Scaleform::StringBuffer::AppendString(&local_38,pcVar6,0xffffffffffffffff);
LAB_14363e585:
  FUN_14363fd80(&local_res8,param_1 + 0x88,0x5c,0x2f);
  cVar4 = thunk_FUN_143365870(*local_res8,*(undefined4 *)(local_res8 + 4),&local_38,0);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = FUN_1435c8e40(local_48,0x41c,uVar3);
    FUN_1435cbef0(uVar3,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    puVar7 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar7 = local_38;
    }
    local_40 = FUN_143360a90(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),puVar7,local_30);
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = local_40;
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FUN_14335f920(local_40);
  }
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 14363e670 FUN_14363e670 body=789 status=ok
// SIG undefined FUN_14363e670(void)

void FUN_14363e670(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char *_Str1;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  String *pSVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *local_res8;
  char *pcVar14;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 local_50;
  
  plVar2 = (longlong *)(param_1 + 0x88);
  lVar10 = *(longlong *)(param_1 + 0x40);
  pcVar14 = "file:///";
  _Str1 = *(char **)*param_3;
  uVar13 = (ulonglong)*(uint *)((undefined8 *)*param_3 + 4);
  *(undefined4 *)(param_1 + 0xac) = 0;
  lVar3 = *param_3;
  local_68 = "app-storage:/";
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  uStack_60 = 0xd;
  piVar1 = (int *)(*plVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *plVar2 = lVar3;
  uVar8 = 8;
  if (uVar13 < 8) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 8) &&
     ((_Str1 == "file:///" ||
      ((_Str1 != (char *)0x0 && (iVar7 = strncmp(_Str1,"file:///",8), iVar7 == 0)))))) {
    local_78 = SUB84(pcVar14,0);
    uStack_74 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    uStack_80._0_4_ = 8;
    uStack_80._4_4_ = 0;
  }
  else {
    uVar8 = 5;
    if (uVar13 < 5) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 5) &&
       ((_Str1 == "app:/" ||
        ((_Str1 != (char *)0x0 && (iVar7 = strncmp(_Str1,"app:/",5), iVar7 == 0)))))) {
      local_78 = 0x45b56a24;
      uStack_74 = 1;
      uStack_70 = 5;
      uStack_6c = 0;
      *(undefined4 *)(param_1 + 0xac) = 1;
      uStack_80._0_4_ = uStack_70;
      uStack_80._4_4_ = uStack_6c;
    }
    else {
      uVar8 = 0xd;
      if (uVar13 < 0xd) {
        uVar8 = uVar13;
      }
      if ((uVar8 != 0xd) ||
         ((_Str1 != "app-storage:/" &&
          ((_Str1 == (char *)0x0 || (iVar7 = strncmp(_Str1,"app-storage:/",0xd), iVar7 != 0))))))
      goto LAB_14363e89e;
      *(undefined4 *)(param_1 + 0xac) = 2;
      local_78 = (undefined4)local_68;
      uStack_74 = local_68._4_4_;
      uStack_80._0_4_ = (undefined4)uStack_60;
      uStack_80._4_4_ = uStack_60._4_4_;
    }
  }
  pcVar14 = (char *)CONCAT44(uStack_74,local_78);
  if (uStack_80 != 0) {
    FUN_1432c5960(&local_58,DAT_146b62f28);
    if (uVar13 < uStack_80) {
      uStack_80 = uVar13;
    }
    cVar5 = thunk_FUN_143365ba0(_Str1 + uStack_80,uVar13 - uStack_80,&local_58,0);
    if (cVar5 == '\0') {
      uVar9 = FUN_1435c8e40(&local_68,0x41c,lVar10);
      FUN_1435cbef0(lVar10,uVar9);
      piVar1 = (int *)(uStack_60 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      Scaleform::StringBuffer::~StringBuffer(&local_58);
      return;
    }
    puVar12 = &DAT_145af3922;
    if (local_58 != (undefined1 *)0x0) {
      puVar12 = local_58;
    }
    lVar10 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x218),puVar12,local_50);
    *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 2;
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *plVar2 = lVar10;
    piVar1 = (int *)(lVar10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar10);
    }
    Scaleform::StringBuffer::~StringBuffer(&local_58);
  }
LAB_14363e89e:
  FUN_14363fd80(&local_res8,plVar2,0x2f,0x5c,pcVar14);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  piVar1 = (int *)(*plVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *plVar2 = (longlong)local_res8;
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  piVar1 = (int *)(lVar10 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_res8 = (undefined8 *)(lVar10 + 0x48);
  FUN_14363e160(param_1,&local_res8);
  puVar4 = local_res8;
  pSVar11 = (String *)FUN_1432c3140(&local_res8,*local_res8,*(undefined4 *)(local_res8 + 4));
  bVar6 = Scaleform::SysFile::GetFileStat((FileStat *)(param_1 + 0x90),pSVar11);
  uVar13 = (ulonglong)local_res8 & 0xfffffffffffffffc;
  *(bool *)(param_1 + 0x80) = bVar6;
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar13 + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar13);
  }
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar4);
  }
  return;
}



// FUNCTION 14363ede0 FUN_14363ede0 body=51 status=ok
// SIG undefined FUN_14363ede0(void)

undefined8 * FUN_14363ede0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method instance::File::getDirectoryListing() is not implemented\n");
  return param_2;
}



// FUNCTION 14363ee20 FUN_14363ee20 body=33 status=ok
// SIG undefined FUN_14363ee20(void)

undefined8 * FUN_14363ee20(undefined8 *param_1)

{
  FUN_1435579c0();
  *param_1 = &PTR_FUN_145b567e0;
  return param_1;
}



// FUNCTION 14363ee50 FUN_14363ee50 body=181 status=ok
// SIG undefined FUN_14363ee50(void)

void FUN_14363ee50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435572c0(puVar1,param_3);
    *(undefined1 *)(puVar1 + 0x15) = 0;
    *puVar1 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
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



// FUNCTION 14363ef10 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363ef40 FUN_14363ef40 body=227 status=ok
// SIG undefined FUN_14363ef40(void)

undefined8 * FUN_14363ef40(undefined8 *param_1,longlong param_2)

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
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b56500);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x108,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435579c0(puVar3,param_2,&PTR_DAT_145b56500);
    *puVar3 = &PTR_FUN_145b567e0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14363f030 FUN_14363f030 body=33 status=ok
// SIG undefined FUN_14363f030(void)

undefined8 * FUN_14363f030(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14363f060 FUN_14363f060 body=212 status=ok
// SIG undefined FUN_14363f060(void)

void FUN_14363f060(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_1435572c0(puVar4,uVar1);
    *(undefined1 *)(puVar4 + 0x15) = 0;
    *puVar4 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar2 - 1;
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
  *(undefined4 *)(*param_2 + 0xac) = 1;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014363f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))
            (plVar3,2,"The method class_::File::applicationDirectoryGet() is not implemented\n");
  return;
}



// FUNCTION 14363f140 FUN_14363f140 body=212 status=ok
// SIG undefined FUN_14363f140(void)

void FUN_14363f140(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_1435572c0(puVar4,uVar1);
    *(undefined1 *)(puVar4 + 0x15) = 0;
    *puVar4 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar2 - 1;
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
  *(undefined4 *)(*param_2 + 0xac) = 2;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014363f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))
            (plVar3,2,
             "The method class_::File::applicationStorageDirectoryGet() is not implemented\n");
  return;
}



// FUNCTION 14363f220 FUN_14363f220 body=285 status=ok
// SIG undefined FUN_14363f220(void)

void FUN_14363f220(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong local_res8;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    FUN_1435572c0(puVar7,uVar2);
    *(undefined1 *)(puVar7 + 0x15) = 0;
    *puVar7 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar7 + 0xac) = 0;
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar7 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      if (((ulonglong)puVar3 & 1) == 0) {
        if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar3 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  *(undefined4 *)(*param_2 + 0xac) = 0;
  FUN_14363f9c0(&local_res8,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  lVar6 = local_res8;
  uVar4 = *param_2;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  piVar1 = (int *)(*(longlong *)(uVar4 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(uVar4 + 0x88) = lVar6;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014363f339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))
            (plVar5,2,"The method class_::File::cacheDirectoryGet() is not implemented\n");
  return;
}



// FUNCTION 14363f350 FUN_14363f350 body=285 status=ok
// SIG undefined FUN_14363f350(void)

void FUN_14363f350(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong local_res8;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    FUN_1435572c0(puVar7,uVar2);
    *(undefined1 *)(puVar7 + 0x15) = 0;
    *puVar7 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar7 + 0xac) = 0;
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar7 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      if (((ulonglong)puVar3 & 1) == 0) {
        if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar3 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  *(undefined4 *)(*param_2 + 0xac) = 0;
  FUN_14363f9c0(&local_res8,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  lVar6 = local_res8;
  uVar4 = *param_2;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  piVar1 = (int *)(*(longlong *)(uVar4 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(uVar4 + 0x88) = lVar6;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014363f469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))
            (plVar5,2,"The method class_::File::desktopDirectoryGet() is not implemented\n");
  return;
}



// FUNCTION 14363f480 FUN_14363f480 body=285 status=ok
// SIG undefined FUN_14363f480(void)

void FUN_14363f480(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong local_res8;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar7 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    FUN_1435572c0(puVar7,uVar2);
    *(undefined1 *)(puVar7 + 0x15) = 0;
    *puVar7 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar7 + 0xac) = 0;
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar7 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      if (((ulonglong)puVar3 & 1) == 0) {
        if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar3 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  *(undefined4 *)(*param_2 + 0xac) = 0;
  FUN_14363f9c0(&local_res8,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  lVar6 = local_res8;
  uVar4 = *param_2;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  piVar1 = (int *)(*(longlong *)(uVar4 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(uVar4 + 0x88) = lVar6;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00014363f599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))
            (plVar5,2,"The method class_::File::documentsDirectoryGet() is not implemented\n");
  return;
}



// FUNCTION 14363f5b0 FUN_14363f5b0 body=250 status=ok
// SIG undefined FUN_14363f5b0(void)

void FUN_14363f5b0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_res8;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar6 = (undefined8 *)FUN_1435b5bc0(uVar2);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    FUN_1435572c0(puVar6,uVar2);
    *(undefined1 *)(puVar6 + 0x15) = 0;
    *puVar6 = &PTR_FUN_145b56710;
    *(undefined4 *)((longlong)puVar6 + 0xac) = 0;
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar6 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      if (((ulonglong)puVar3 & 1) == 0) {
        if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar3 - 1;
      }
    }
    *param_2 = (ulonglong)puVar6;
  }
  *(undefined4 *)(*param_2 + 0xac) = 0;
  uVar4 = *param_2;
  plVar7 = (longlong *)
           FUN_14363f900(&local_res8,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  lVar5 = *plVar7;
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(uVar4 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(uVar4 + 0x88) = lVar5;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14363f6b0 FUN_14363f6b0 body=122 status=ok
// SIG undefined FUN_14363f6b0(void)

void FUN_14363f6b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (PTR_DAT_1467dc368[lVar2] != '\0');
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),PTR_DAT_1467dc368,lVar2,0);
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



// FUNCTION 14363f730 FUN_14363f730 body=103 status=ok
// SIG undefined FUN_14363f730(void)

void FUN_14363f730(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),&DAT_145b56400,1);
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



// FUNCTION 14363f860 FUN_14363f860 body=23 status=ok
// SIG undefined FUN_14363f860(void)

undefined8 FUN_14363f860(undefined8 param_1)

{
  FUN_14363f9c0();
  return param_1;
}



// FUNCTION 14363f880 FUN_14363f880 body=23 status=ok
// SIG undefined FUN_14363f880(void)

undefined8 FUN_14363f880(undefined8 param_1)

{
  FUN_14363f9c0();
  return param_1;
}



// FUNCTION 14363f8a0 FUN_14363f8a0 body=23 status=ok
// SIG undefined FUN_14363f8a0(void)

undefined8 FUN_14363f8a0(undefined8 param_1)

{
  FUN_14363f9c0();
  return param_1;
}



// FUNCTION 14363f8c0 FUN_14363f8c0 body=23 status=ok
// SIG undefined FUN_14363f8c0(void)

undefined8 FUN_14363f8c0(undefined8 param_1)

{
  FUN_14363f9c0();
  return param_1;
}



// FUNCTION 14363f8e0 FUN_14363f8e0 body=23 status=ok
// SIG undefined FUN_14363f8e0(void)

undefined8 FUN_14363f8e0(undefined8 param_1)

{
  FUN_14363f9c0();
  return param_1;
}



// FUNCTION 14363f900 FUN_14363f900 body=174 status=ok
// SIG undefined FUN_14363f900(void)

longlong * FUN_14363f900(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  *param_1 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  uVar3 = FUN_14363fac0(local_res18,param_2,"HOMEPATH");
  uVar4 = FUN_14363fac0(&local_res10,param_2,"HOMEDRIVE");
  plVar5 = (longlong *)Scaleform::GFx::ASString::operator+(uVar4,&local_res8,uVar3);
  lVar2 = *plVar5;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_1;
}



// FUNCTION 14363f9c0 FUN_14363f9c0 body=239 status=ok
// SIG undefined FUN_14363f9c0(void)

longlong * FUN_14363f9c0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  *param_1 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  if (*(longlong *)(param_2 + 0x108) != 0) {
    uVar4 = *(longlong *)(param_2 + 0x108) - 1;
    FUN_143307740(*(longlong *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x120) + (uVar4 >> 6) * 8) + 0x18 +
                     (ulonglong)((uint)uVar4 & 0x3f) * 0xa0) + 0xa0) + 0x18,&local_res8);
    FUN_143360130(param_1,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                  *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    return param_1;
  }
  FUN_143360130(param_1,&DAT_145b57344,2);
  return param_1;
}



// FUNCTION 14363fac0 FUN_14363fac0 body=268 status=ok
// SIG undefined FUN_14363fac0(void)

longlong * FUN_14363fac0(longlong *param_1,longlong param_2,char *param_3)

{
  int *piVar1;
  longlong lVar2;
  errno_t eVar3;
  char *_DstBuf;
  size_t local_res8;
  char local_108 [256];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  *param_1 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_res8 = 0;
  eVar3 = getenv_s(&local_res8,(char *)0x0,0,param_3);
  if ((eVar3 == 0) && (local_res8 != 0)) {
    if (local_res8 < 0x101) {
      _DstBuf = local_108;
    }
    else {
      _DstBuf = (char *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,local_res8,0);
    }
    eVar3 = getenv_s(&local_res8,_DstBuf,local_res8,param_3);
    if (eVar3 == 0) {
      FUN_143360130(param_1,_DstBuf,local_res8);
    }
    if (0x100 < local_res8) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_DstBuf);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 14363fbe0 FUN_14363fbe0 body=57 status=ok
// SIG undefined FUN_14363fbe0(void)

longlong * FUN_14363fbe0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  *param_1 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_143360130(param_1,"windows",7);
  return param_1;
}



// FUNCTION 14363fc20 FUN_14363fc20 body=103 status=ok
// SIG undefined FUN_14363fc20(void)

longlong * FUN_14363fc20(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  BOOL BVar3;
  DWORD local_res8 [8];
  CHAR local_108 [256];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  *param_1 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_108[0] = '\0';
  local_res8[0] = 0x100;
  BVar3 = GetUserNameA(local_108,local_res8);
  if (BVar3 != 0) {
    FUN_143360130(param_1,local_108,local_res8[0] - 1);
  }
  return param_1;
}



// FUNCTION 14363fc90 FUN_14363fc90 body=120 status=ok
// SIG undefined FUN_14363fc90(void)

longlong * FUN_14363fc90(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  iVar2 = (int)((longlong *)*param_1)[4];
  if ((((iVar2 != 0) && (*(char *)((ulonglong)(iVar2 - 1) + *(longlong *)*param_1) != '\\')) &&
      (*(int *)((undefined8 *)*param_3 + 4) != 0)) && (**(char **)*param_3 != '\\')) {
    lVar3 = FUN_14335fc20(param_1,0x5c);
    iVar2 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  FUN_143360170(param_1,param_3);
  return param_1;
}



// FUNCTION 14363fd10 FUN_14363fd10 body=99 status=ok
// SIG undefined FUN_14363fd10(void)

bool FUN_14363fd10(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong local_res10 [3];
  FileStat local_28 [32];
  
  FUN_1432c2fb0(local_res10,param_1);
  bVar1 = Scaleform::SysFile::GetFileStat(local_28,(String *)local_res10);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
  }
  return bVar1;
}



// FUNCTION 14363fd80 FUN_14363fd80 body=253 status=ok
// SIG undefined FUN_14363fd80(void)

longlong * FUN_14363fd80(longlong *param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *local_48;
  undefined8 local_40;
  
  lVar3 = *param_2;
  uVar5 = 0;
  *param_1 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  uVar6 = (ulonglong)*(uint *)((longlong *)*param_1 + 4);
  lVar3 = *(longlong *)*param_1;
  uVar2 = uVar5;
  if (uVar6 != 0) {
    do {
      if (*(char *)(lVar3 + uVar2) == param_3) {
        if (uVar2 == 0) {
          return param_1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar6);
  }
  FUN_1432c5a90(&local_48,lVar3,uVar6,DAT_146b62f28);
  if (uVar6 != 0) {
    do {
      if (local_48[uVar5] == param_3) {
        local_48[uVar5] = param_4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  puVar4 = &DAT_145af3922;
  if (local_48 != (undefined1 *)0x0) {
    puVar4 = local_48;
  }
  lVar3 = FUN_143360a90(*(undefined8 *)(*param_2 + 8),puVar4,local_40);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_48);
  return param_1;
}



// FUNCTION 14363fe90 FUN_14363fe90 body=197 status=ok
// SIG undefined FUN_14363fe90(void)

longlong * FUN_14363fe90(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar4 = *(longlong *)(param_2 + 0x218);
  *param_1 = lVar4 + 0x48;
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar2 = FUN_1433924d0(&local_28,0x104);
  if (cVar2 != '\0') {
    iVar3 = SHGetFolderPathW(0,param_3,0,0,local_28);
    if (iVar3 == 0) {
      lVar4 = FUN_143360fd0(*(undefined8 *)(param_2 + 0x218),local_28,local_20);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_1 = lVar4;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
    }
  }
  Scaleform::WStringBuffer::~WStringBuffer(&local_28);
  return param_1;
}



// FUNCTION 14363ff60 FUN_14363ff60 body=33 status=ok
// SIG undefined FUN_14363ff60(void)

undefined8 * FUN_14363ff60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14363ff90 FUN_14363ff90 body=272 status=ok
// SIG undefined FUN_14363ff90(void)

undefined8 * FUN_14363ff90(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b56438);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b56438);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "append";
    puVar5[0xb] = &DAT_145b57350;
    puVar5[0xc] = "update";
    puVar5[0xd] = "write";
  }
  return param_1;
}



// FUNCTION 1436400b0 FUN_1436400b0 body=77 status=ok
// SIG undefined FUN_1436400b0(void)

undefined8 * FUN_1436400b0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "append";
  param_1[0xb] = &DAT_145b57350;
  param_1[0xc] = "update";
  param_1[0xd] = "write";
  return param_1;
}



// FUNCTION 143640110 FUN_143640110 body=96 status=ok
// SIG undefined FUN_143640110(void)

undefined8 * FUN_143640110(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_143519560();
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = &PTR_FUN_145b57360;
  lVar2 = FUN_1435b4fe0(param_2);
  uVar1 = *(undefined4 *)(lVar2 + 0x50);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  Scaleform::SysFile::SysFile((SysFile *)(param_1 + 0x13));
  return param_1;
}



// FUNCTION 143640180 FUN_143640180 body=303 status=ok
// SIG undefined FUN_143640180(void)

void FUN_143640180(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  FUN_14351a780(param_1,"End of file.");
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_28[0] = 0;
  local_20 = 0;
  local_res8[0] = 0;
  FUN_1435ccb40(lVar1,"flash.errors.EOFError",*(undefined8 *)(lVar1 + 0x1c8),local_28,local_res8,0);
  if ((*(char *)(lVar1 + 0xb8) != '\0') || (uVar2 = local_28[0] & 0x1f, uVar2 == 0))
  goto LAB_143640275;
  if (uVar2 == 0xc) {
    bVar4 = local_18 == 0;
LAB_143640211:
    if (bVar4) goto LAB_143640275;
  }
  else if (uVar2 == 10) {
    bVar4 = local_18 == *(longlong *)(local_18 + 8) + 0x80;
    goto LAB_143640211;
  }
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
LAB_143640275:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1436402c0 FUN_1436402c0 body=303 status=ok
// SIG undefined FUN_1436402c0(void)

void FUN_1436402c0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  FUN_14351a780(param_1,"File operation cannot be performed.");
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_28[0] = 0;
  local_20 = 0;
  local_res8[0] = 0;
  FUN_1435ccb40(lVar1,"flash.errors.IOError",*(undefined8 *)(lVar1 + 0x1c8),local_28,local_res8,0);
  if ((*(char *)(lVar1 + 0xb8) != '\0') || (uVar2 = local_28[0] & 0x1f, uVar2 == 0))
  goto LAB_1436403b5;
  if (uVar2 == 0xc) {
    bVar4 = local_18 == 0;
LAB_143640351:
    if (bVar4) goto LAB_1436403b5;
  }
  else if (uVar2 == 10) {
    bVar4 = local_18 == *(longlong *)(local_18 + 8) + 0x80;
    goto LAB_143640351;
  }
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
LAB_1436403b5:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143640400 FUN_143640400 body=130 status=ok
// SIG undefined FUN_143640400(void)

undefined1 * FUN_143640400(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))();
  if (cVar1 != '\0') {
    bVar2 = *(uint *)(param_1 + 0x90) <= *(uint *)(param_1 + 0x8c);
    if (bVar2) {
      FUN_143640180(param_1);
    }
    *param_2 = bVar2;
    return param_2;
  }
  FUN_14351a780(param_1,"File is closed.");
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143640490 FUN_143640490 body=100 status=ok
// SIG undefined FUN_143640490(void)

ushort FUN_143640490(longlong param_1)

{
  int iVar1;
  ushort local_res8 [16];
  
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))
                    ((longlong *)(param_1 + 0x98),local_res8,2);
  if (iVar1 < 2) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
    FUN_143640180(param_1);
  }
  else {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 2;
    if (*(int *)(param_1 + 0x88) != 1) {
      return local_res8[0] << 8 | local_res8[0] >> 8;
    }
  }
  return local_res8[0];
}



// FUNCTION 143640500 FUN_143640500 body=120 status=ok
// SIG undefined FUN_143640500(void)

undefined1 * FUN_143640500(longlong param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))
                    ((longlong *)(param_1 + 0x98),param_3,param_4);
  if (iVar1 < param_4) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
    FUN_143640180(param_1);
    *param_2 = 0;
    return param_2;
  }
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + param_4;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143640580 FUN_143640580 body=365 status=ok
// SIG undefined FUN_143640580(void)

undefined1 * FUN_143640580(longlong param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char local_res8;
  char local_res9;
  char local_resa;
  undefined1 local_428 [1024];
  
  plVar1 = (longlong *)(param_1 + 0x98);
  cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (cVar2 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
    goto LAB_1436406ce;
  }
  if (*(uint *)(param_1 + 0x90) <= *(uint *)(param_1 + 0x8c)) {
    FUN_143640180(param_1);
    goto LAB_1436406ce;
  }
  iVar5 = *(int *)(param_1 + 0x8c);
  uVar3 = *(int *)(param_1 + 0x90) - iVar5;
  if (uVar3 < param_4) goto LAB_1436406ce;
  if ((param_4 < 3) || (uVar3 < 3)) {
joined_r0x000143640678:
    while( true ) {
      if (param_4 == 0) {
        *param_2 = 1;
        return param_2;
      }
      uVar3 = 0x400;
      if ((int)param_4 < 0x400) {
        uVar3 = param_4;
      }
      iVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,local_428,uVar3);
      if (iVar5 < (int)uVar3) break;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar3;
      FUN_143360130(param_3,local_428,(longlong)(int)uVar3);
      param_4 = param_4 - uVar3;
    }
  }
  else {
    iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,&local_res8,3);
    if (2 < iVar4) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 3;
      if (((local_res8 == -0x11) && (local_res9 == -0x45)) && (local_resa == -0x41)) {
        param_4 = param_4 - 3;
      }
      else {
        FUN_143644910(param_1,iVar5);
      }
      goto joined_r0x000143640678;
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
  FUN_143640180(param_1);
LAB_1436406ce:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143640700 FUN_143640700 body=105 status=ok
// SIG undefined FUN_143640700(void)

undefined8 FUN_143640700(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),param_3,param_4);
  if (iVar1 == param_4) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + param_4;
  }
  else {
    FUN_1436402c0(param_1);
  }
  *(bool *)param_2 = iVar1 == param_4;
  return param_2;
}



// FUNCTION 143640770 FUN_143640770 body=195 status=ok
// SIG undefined FUN_143640770(void)

void FUN_143640770(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong local_res8;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    cVar2 = FUN_14351a530(param_1,lVar1 + 0x140,0);
    if (cVar2 != '\0') {
      FUN_143519770(param_1,&local_res8,lVar1 + 0x140);
      FUN_1434f0700(local_res8 + 0x50,param_1);
      *(ulonglong *)(local_res8 + 0x60) = (ulonglong)param_2;
      *(ulonglong *)(local_res8 + 0x68) = param_3 & 0xffffffff;
      FUN_14351af40(param_1,local_res8,0);
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return;
}



// FUNCTION 143640840 FUN_143640840 body=161 status=ok
// SIG undefined FUN_143640840(void)

void FUN_143640840(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong local_res8;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    cVar2 = FUN_14351a530(param_1,lVar1 + 0x138,0);
    if (cVar2 != '\0') {
      Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
                (param_1,&local_res8,lVar1 + 0x138,0,0);
      FUN_1434f0700(local_res8 + 0x50,param_1);
      FUN_14351af40(param_1,local_res8,0);
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return;
}



// FUNCTION 1436408f0 FUN_1436408f0 body=161 status=ok
// SIG undefined FUN_1436408f0(void)

void FUN_1436408f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong local_res8;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    cVar2 = FUN_14351a530(param_1,lVar1 + 0x160,0);
    if (cVar2 != '\0') {
      Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
                (param_1,&local_res8,lVar1 + 0x160,0,0);
      FUN_1434f0700(local_res8 + 0x50,param_1);
      FUN_14351af40(param_1,local_res8,0);
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return;
}



// FUNCTION 1436409a0 FUN_1436409a0 body=702 status=ok
// SIG undefined FUN_1436409a0(void)

void FUN_1436409a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *local_res8;
  ulonglong local_res10;
  undefined1 local_38 [8];
  undefined8 *local_30;
  
  FUN_143590540();
  cVar5 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x98))(param_1 + 0x98);
  if (cVar5 != '\0') {
    FUN_1436408f0(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x80) = param_4;
  if (param_2 != 0) {
    lVar12 = 0;
    iVar8 = 0;
    lVar3 = *(longlong *)*param_3;
    lVar13 = lVar12;
    do {
      lVar9 = lVar13 + 1;
      lVar10 = lVar12;
      if (*(char *)(lVar3 + lVar13) != "append"[lVar13]) goto LAB_143640a30;
      lVar13 = lVar9;
    } while (lVar9 != 7);
    goto LAB_143640a9c;
  }
  uVar11 = 0x5e3;
LAB_143640c25:
  uVar11 = FUN_1435c8e40(local_38,uVar11,uVar2);
  FUN_1435cbe70(uVar2,uVar11);
  goto LAB_143640c3d;
  while (lVar10 = lVar9 + 1, lVar9 + 1 != 5) {
LAB_143640a30:
    lVar9 = lVar10;
    lVar13 = lVar12;
    if (*(char *)(lVar3 + lVar9) != (&DAT_145b57350)[lVar9]) goto LAB_143640a60;
  }
  iVar8 = (int)lVar9 + -3;
  goto LAB_143640a9c;
  while (lVar13 = lVar10 + 1, lVar10 + 1 != 7) {
LAB_143640a60:
    lVar10 = lVar13;
    if (*(char *)(lVar3 + lVar10) != "update"[lVar10]) goto LAB_143640a80;
  }
  iVar8 = (int)lVar10 + -4;
  goto LAB_143640a9c;
  while (lVar12 = lVar13, lVar13 != 6) {
LAB_143640a80:
    lVar13 = lVar12 + 1;
    if (*(char *)(lVar3 + lVar12) != "write"[lVar12]) {
      uVar11 = 0x5e4;
      goto LAB_143640c25;
    }
  }
  iVar8 = 3;
LAB_143640a9c:
  if ((*(int *)(param_2 + 0xac) == 1) && (iVar8 != 1)) {
    FUN_14351a780(param_1,"Cannot open file.");
    uVar11 = FUN_1435c8e40(local_38,0x5dc,uVar2);
    FUN_1435cbe30(uVar2,uVar11);
LAB_143640c3d:
    piVar1 = (int *)(local_30 + 3);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    goto joined_r0x000143640c03;
  }
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x98) + 0x10) + 0x218);
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_res8 = (undefined8 *)(lVar3 + 0x48);
  FUN_14363e160(param_2,&local_res8);
  puVar4 = local_res8;
  FUN_1432c3140(&local_res10,*local_res8,*(undefined4 *)(local_res8 + 4));
  iVar14 = 0x20;
  if (iVar8 == 0) {
LAB_143640b44:
    iVar14 = 0x22;
  }
  else if (iVar8 == 1) {
    iVar14 = 0x21;
  }
  else if (iVar8 == 2) {
    iVar14 = 0x24;
  }
  else if (iVar8 == 3) goto LAB_143640b44;
  bVar6 = Scaleform::SysFile::Open((SysFile *)(param_1 + 0x98),(String *)&local_res10,iVar14,0x1b6);
  if (!bVar6) {
    FUN_14351a780(param_1,"File doesn\'t exist.");
    uVar11 = FUN_1435c8e40(local_38,0xbbb,uVar2);
    FUN_1435cbdb0(uVar2,uVar11);
    piVar1 = (int *)(local_30 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  uVar7 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x30))(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  if (iVar8 - 1U < 2) {
    FUN_143640770(param_1,0,uVar7);
    FUN_143640840(param_1);
  }
  iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar8 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  piVar1 = (int *)(puVar4 + 3);
  *piVar1 = *piVar1 + -1;
  iVar8 = *piVar1;
  local_30 = puVar4;
joined_r0x000143640c03:
  if (iVar8 == 0) {
    FUN_14335f920(local_30);
  }
  return;
}



// FUNCTION 143640c90 FUN_143640c90 body=120 status=ok
// SIG undefined FUN_143640c90(void)

void FUN_143640c90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar4 = 9;
    pcVar3 = "bigEndian";
  }
  else {
    uVar4 = 0xc;
    pcVar3 = "littleEndian";
  }
  lVar2 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218)
                        ,pcVar3,uVar4);
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



// FUNCTION 143640d10 FUN_143640d10 body=155 status=ok
// SIG undefined FUN_143640d10(void)

void FUN_143640d10(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
    *(undefined4 *)(param_1 + 0x88) = 0;
    return;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"littleEndian");
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_1435c8e40(local_18,0x5e4,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143640dd0 FUN_143640dd0 body=91 status=ok
// SIG undefined FUN_143640dd0(void)

void FUN_143640dd0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((param_3 == 0) || (param_3 == 3)) {
    *(int *)(param_1 + 0x84) = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
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



// FUNCTION 143640e60 positionSet body=76 status=ok
// SIG undefined positionSet(void)

void Scaleform::GFx::AS3::Instances::fl_filesystem::FileStream::positionSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(longlong)param_3;
  if (*(uint *)(param_1 + 0x90) <= uVar1) {
    FUN_143640180();
    return;
  }
  (**(code **)(*(longlong *)(param_1 + 0x98) + 0x70))
            ((longlong *)(param_1 + 0x98),(longlong)param_3 & 0xffffffff,0);
  *(uint *)(param_1 + 0x8c) = uVar1;
  return;
}



// FUNCTION 143640f20 close body=48 status=ok
// SIG int close(int _FileHandle)

int __cdecl Scaleform::GFx::AS3::Instances::fl_filesystem::FileStream::close(int _FileHandle)

{
  int iVar1;
  undefined4 in_register_0000000c;
  
  iVar1 = (**(code **)(*(longlong *)(CONCAT44(in_register_0000000c,_FileHandle) + 0x98) + 0x98))();
  if ((char)iVar1 != '\0') {
    iVar1 = FUN_1436408f0(CONCAT44(in_register_0000000c,_FileHandle));
    return iVar1;
  }
  return iVar1;
}



// FUNCTION 143640fa0 FUN_143640fa0 body=205 status=ok
// SIG undefined FUN_143640fa0(void)

void FUN_143640fa0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  char local_res8 [8];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar1 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar1 > uVar2 || uVar2 < uVar1) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,local_res8,1);
      if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *(bool *)param_2 = local_res8[0] != '\0';
      return;
    }
  }
  return;
}



// FUNCTION 143641080 FUN_143641080 body=202 status=ok
// SIG undefined FUN_143641080(void)

void FUN_143641080(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  char local_res8 [8];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar1 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar1 > uVar2 || uVar2 < uVar1) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,local_res8,1);
      if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *param_2 = (int)local_res8[0];
      return;
    }
  }
  return;
}



// FUNCTION 143641150 FUN_143641150 body=396 status=ok
// SIG undefined FUN_143641150(void)

void FUN_143641150(longlong param_1,undefined8 param_2,longlong param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_428 [8];
  longlong local_420;
  undefined1 local_418 [1024];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar4 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar4 > uVar2 || uVar2 < uVar4) {
      uVar4 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c);
      if (uVar4 < param_5) {
LAB_1436412bb:
        FUN_143640180(param_1);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        if (param_5 == 0) {
          param_5 = uVar4;
        }
        if (param_3 == 0) {
          uVar6 = FUN_1435c8e40(local_428,0x5e3,uVar7);
          FUN_1435cbe70(uVar7,uVar6);
          piVar1 = (int *)(local_420 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if (*(ulonglong *)(param_3 + 0x58) <= (ulonglong)(param_4 + param_5)) {
            FUN_143579320(param_3);
          }
          uVar7 = FUN_143590540();
          FUN_143579d90(param_3,uVar7,param_4);
          for (; param_5 != 0; param_5 = param_5 - uVar4) {
            uVar4 = 0x400;
            if ((int)param_5 < 0x400) {
              uVar4 = param_5;
            }
            iVar5 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))
                              (param_1 + 0x98,local_418,uVar4);
            if (iVar5 < (int)uVar4) {
              *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
              goto LAB_1436412bb;
            }
            *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar4;
            (*(code *)**(undefined8 **)(param_3 + 0x68))
                      ((undefined8 *)(param_3 + 0x68),local_res8,local_418,uVar4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1436412f0 FUN_1436412f0 body=244 status=ok
// SIG undefined FUN_1436412f0(void)

void FUN_1436412f0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x8c);
    uVar2 = *(uint *)(param_1 + 0x90);
    if (uVar2 <= uVar1) {
      FUN_143640180(param_1);
    }
    if (uVar2 > uVar1 || uVar1 < uVar2) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,param_2,8);
      if (iVar4 < 8) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 8;
      if (*(int *)(param_1 + 0x88) != 1) {
        uVar5 = FUN_143562a40(*param_2);
        *param_2 = uVar5;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1436413f0 FUN_1436413f0 body=277 status=ok
// SIG undefined FUN_1436413f0(void)

void FUN_1436413f0(longlong param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  float local_res8 [2];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar1 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar1 > uVar2 || uVar2 < uVar1) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,local_res8,4);
      if (iVar4 < 4) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 4;
      if (*(int *)(param_1 + 0x88) != 1) {
        local_res8[0] =
             (float)(((uint)local_res8[0] & 0xff0000 | (uint)local_res8[0] >> 0x10) >> 8 |
                    ((int)local_res8[0] << 0x10 | (uint)local_res8[0] & 0xff00) << 8);
      }
      *param_2 = (double)local_res8[0];
      return;
    }
  }
  return;
}



// FUNCTION 143641510 FUN_143641510 body=237 status=ok
// SIG undefined FUN_143641510(void)

void FUN_143641510(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x8c);
    uVar2 = *(uint *)(param_1 + 0x90);
    if (uVar2 <= uVar1) {
      FUN_143640180(param_1);
    }
    if (uVar2 > uVar1 || uVar1 < uVar2) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,param_2,4);
      if (iVar4 < 4) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 4;
      if (*(int *)(param_1 + 0x88) != 1) {
        uVar1 = *param_2;
        *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        return;
      }
    }
  }
  return;
}



// FUNCTION 143641610 FUN_143641610 body=862 status=ok
// SIG undefined FUN_143641610(void)

void FUN_143641610(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined1 *local_868;
  undefined8 local_860;
  undefined1 local_838 [8];
  longlong local_830;
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  
  plVar2 = (longlong *)(param_1 + 0x98);
  cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (cVar5 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
    return;
  }
  if (*(uint *)(param_1 + 0x90) <= *(uint *)(param_1 + 0x8c)) {
    FUN_143640180(param_1);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c)) < param_3) {
    FUN_143640180(param_1);
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  uVar14 = 0;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  if (PTR_s_us_ascii_1467dc2d0 != (undefined *)0x0) {
    puVar12 = PTR_s_us_ascii_1467dc2d0;
    uVar13 = uVar14;
    do {
      pcVar7 = *(char **)*param_4;
      do {
        cVar5 = *pcVar7;
        cVar3 = pcVar7[(longlong)puVar12 - (longlong)*(char **)*param_4];
        if (cVar5 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar5 == cVar3) {
        FUN_1432c5960(&local_868,DAT_146b62f28);
        goto LAB_143641820;
      }
      uVar13 = (ulonglong)((int)uVar13 + 1);
      puVar12 = (&PTR_s_us_ascii_1467dc2d0)[uVar13];
    } while (puVar12 != (undefined *)0x0);
  }
  if (PTR_s_utf_8_1467dc328 != (undefined *)0x0) {
    puVar12 = PTR_s_utf_8_1467dc328;
    uVar13 = uVar14;
    do {
      pcVar7 = *(char **)*param_4;
      do {
        cVar5 = *pcVar7;
        cVar3 = pcVar7[(longlong)puVar12 - (longlong)*(char **)*param_4];
        if (cVar5 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar5 == cVar3) {
        FUN_143640580(param_1,local_res8,param_2,param_3);
        return;
      }
      uVar13 = (ulonglong)((int)uVar13 + 1);
      puVar12 = (&PTR_s_utf_8_1467dc328)[uVar13];
    } while (puVar12 != (undefined *)0x0);
  }
  if (PTR_s_unicode_1467dc350 != (undefined *)0x0) {
    puVar12 = PTR_s_unicode_1467dc350;
    do {
      pcVar7 = *(char **)*param_4;
      do {
        cVar5 = *pcVar7;
        cVar3 = pcVar7[(longlong)puVar12 - (longlong)*(char **)*param_4];
        if (cVar5 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar5 == cVar3) {
        FUN_1432c5960(&local_868,DAT_146b62f28);
        goto LAB_143641890;
      }
      uVar14 = (ulonglong)((int)uVar14 + 1);
      puVar12 = (&PTR_s_unicode_1467dc350)[uVar14];
    } while (puVar12 != (undefined *)0x0);
  }
  uVar8 = FUN_1435c8e40(local_838,0x5e4,lVar9);
  FUN_1435cbe70(lVar9,uVar8);
  piVar1 = (int *)(local_830 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
  while( true ) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar11;
    Scaleform::StringBuffer::AppendString(&local_868,local_828,(longlong)(int)uVar11);
    param_3 = param_3 - uVar11;
    if (param_3 == 0) break;
LAB_143641820:
    uVar11 = 0x400;
    if ((int)param_3 < 0x400) {
      uVar11 = param_3;
    }
    iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,local_828,uVar11);
    if (iVar6 < (int)uVar11) goto LAB_14364192c;
  }
  goto LAB_1436418d1;
LAB_14364192c:
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
  FUN_143640180(param_1);
  goto LAB_143641940;
  while( true ) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar11;
    FUN_1432c5e60(&local_868,local_428,(longlong)(int)uVar11);
    param_3 = param_3 - uVar11;
    if (param_3 == 0) break;
LAB_143641890:
    uVar11 = 0x400;
    if ((int)param_3 < 0x400) {
      uVar11 = param_3;
    }
    iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,local_428,uVar11);
    if (iVar6 < (int)uVar11) goto LAB_14364192c;
  }
LAB_1436418d1:
  puVar10 = &DAT_145af3922;
  if (local_868 != (undefined1 *)0x0) {
    puVar10 = local_868;
  }
  lVar9 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),puVar10,local_860);
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar9;
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
    Scaleform::StringBuffer::~StringBuffer(&local_868);
  }
  else {
LAB_143641940:
    Scaleform::StringBuffer::~StringBuffer(&local_868);
  }
  return;
}



// FUNCTION 1436419b0 FUN_1436419b0 body=253 status=ok
// SIG undefined FUN_1436419b0(void)

void FUN_1436419b0(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ushort local_res8 [4];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar1 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar1 > uVar2 || uVar2 < uVar1) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,local_res8,2);
      if (iVar4 < 2) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 2;
      if (*(int *)(param_1 + 0x88) != 1) {
        *param_2 = (int)(short)(local_res8[0] >> 8 | local_res8[0] << 8);
        return;
      }
      *param_2 = (int)(short)local_res8[0];
      return;
    }
  }
  return;
}



// FUNCTION 143641ac0 FUN_143641ac0 body=202 status=ok
// SIG undefined FUN_143641ac0(void)

void FUN_143641ac0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  byte local_res8 [8];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar1 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar1 > uVar2 || uVar2 < uVar1) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,local_res8,1);
      if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *param_2 = (uint)local_res8[0];
      return;
    }
  }
  return;
}



// FUNCTION 143641b90 FUN_143641b90 body=237 status=ok
// SIG undefined FUN_143641b90(void)

void FUN_143641b90(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x8c);
    uVar2 = *(uint *)(param_1 + 0x90);
    if (uVar2 <= uVar1) {
      FUN_143640180(param_1);
    }
    if (uVar2 > uVar1 || uVar1 < uVar2) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,param_2,4);
      if (iVar4 < 4) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 4;
      if (*(int *)(param_1 + 0x88) != 1) {
        uVar1 = *param_2;
        *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        return;
      }
    }
  }
  return;
}



// FUNCTION 143641c90 FUN_143641c90 body=219 status=ok
// SIG undefined FUN_143641c90(void)

void FUN_143641c90(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ushort local_res8 [4];
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
  if (cVar3 == '\0') {
    FUN_14351a780(param_1,"File is closed.");
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (uVar1 <= uVar2) {
      FUN_143640180(param_1);
    }
    if (uVar1 > uVar2 || uVar2 < uVar1) {
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))(param_1 + 0x98,local_res8,2);
      if (iVar4 < 2) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
        FUN_143640180(param_1);
        return;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 2;
      if (*(int *)(param_1 + 0x88) != 1) {
        local_res8[0] = local_res8[0] << 8 | local_res8[0] >> 8;
      }
      *param_2 = (uint)local_res8[0];
      return;
    }
  }
  return;
}



// FUNCTION 143641d80 FUN_143641d80 body=122 status=ok
// SIG undefined FUN_143641d80(void)

void FUN_143641d80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  ushort local_res18 [8];
  
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x50))
                    ((longlong *)(param_1 + 0x98),local_res18,2);
  if (iVar1 < 2) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
    FUN_143640180(param_1);
  }
  else {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 2;
    if (*(int *)(param_1 + 0x88) != 1) {
      local_res18[0] = local_res18[0] << 8 | local_res18[0] >> 8;
    }
  }
  FUN_143640580(param_1,local_res8,param_2,local_res18[0]);
  return;
}



// FUNCTION 143641e00 FUN_143641e00 body=25 status=ok
// SIG undefined FUN_143641e00(void)

void FUN_143641e00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res20 [8];
  
  FUN_143640580(param_1,local_res20,param_2,param_3);
  return;
}



// FUNCTION 143641e20 truncate body=53 status=ok
// SIG undefined truncate(void)

void Scaleform::GFx::AS3::Instances::fl_filesystem::FileStream::truncate(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x88))
                    ((longlong *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x8c));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  }
  return;
}



// FUNCTION 143641e60 FUN_143641e60 body=69 status=ok
// SIG undefined FUN_143641e60(void)

void FUN_143641e60(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res18,1);
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143641eb0 FUN_143641eb0 body=69 status=ok
// SIG undefined FUN_143641eb0(void)

void FUN_143641eb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res18,1);
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143641f00 FUN_143641f00 body=177 status=ok
// SIG undefined FUN_143641f00(void)

void FUN_143641f00(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (param_3 == 0) {
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    uVar3 = *(uint *)(param_3 + 0x48);
    if (uVar3 < param_4) {
      param_4 = uVar3;
    }
    if (param_5 == 0) {
      param_5 = uVar3 - param_4;
    }
    if (uVar3 - param_4 < param_5) {
      param_5 = uVar3 - param_4;
    }
    if (param_5 != 0) {
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                        ((longlong *)(param_1 + 0x98),
                         (ulonglong)param_4 + *(longlong *)(param_3 + 0x50),param_5);
      if (uVar3 == param_5) {
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + param_5;
        return;
      }
      FUN_1436402c0(param_1);
    }
  }
  return;
}



// FUNCTION 143641fc0 FUN_143641fc0 body=92 status=ok
// SIG undefined FUN_143641fc0(void)

void FUN_143641fc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 0x88) != 1) {
    local_res18[0] = FUN_143562a40((int)param_3);
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res18,8);
  if (iVar1 == 8) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 8;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143642030 FUN_143642030 body=142 status=ok
// SIG undefined FUN_143642030(void)

void FUN_143642030(longlong param_1,undefined8 param_2,double param_3)

{
  int iVar1;
  float local_res8 [8];
  
  local_res8[0] = (float)param_3;
  if (*(int *)(param_1 + 0x88) != 1) {
    local_res8[0] =
         (float)(((uint)local_res8[0] & 0xff0000 | (uint)local_res8[0] >> 0x10) >> 8 |
                ((uint)local_res8[0] & 0xff00 | (int)local_res8[0] << 0x10) << 8);
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res8,4);
  if (iVar1 == 4) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 4;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 1436420d0 FUN_1436420d0 body=121 status=ok
// SIG undefined FUN_1436420d0(void)

void FUN_1436420d0(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 0x88) != 1) {
    local_res18[0] =
         (param_3 & 0xff0000 | param_3 >> 0x10) >> 8 | (param_3 & 0xff00 | param_3 << 0x10) << 8;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res18,4);
  if (iVar1 == 4) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 4;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143642150 FUN_143642150 body=508 status=ok
// SIG undefined FUN_143642150(void)

void FUN_143642150(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined *puVar12;
  ulonglong uVar13;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar10 = 0;
  if (PTR_s_utf_8_1467dc328 != (undefined *)0x0) {
    puVar12 = PTR_s_utf_8_1467dc328;
    uVar13 = uVar10;
    do {
      pcVar7 = *(char **)*param_4;
      do {
        cVar2 = *pcVar7;
        cVar3 = pcVar7[(longlong)puVar12 - (longlong)*(char **)*param_4];
        if (cVar2 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        iVar6 = *(int *)((undefined8 *)*param_3 + 4);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                          ((longlong *)(param_1 + 0x98),*(undefined8 *)*param_3,iVar6);
        if (iVar5 != iVar6) {
          FUN_1436402c0(param_1);
          return;
        }
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar6;
        return;
      }
      uVar13 = (ulonglong)((int)uVar13 + 1);
      puVar12 = (&PTR_s_utf_8_1467dc328)[uVar13];
    } while (puVar12 != (undefined *)0x0);
  }
  if (PTR_s_unicode_1467dc350 != (undefined *)0x0) {
    ppuVar9 = &PTR_s_unicode_1467dc350;
    do {
      pcVar7 = *(char **)*param_4;
      lVar11 = (longlong)*ppuVar9 - (longlong)pcVar7;
      do {
        cVar2 = *pcVar7;
        cVar3 = pcVar7[lVar11];
        if (cVar2 != cVar3) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        FUN_143392800(&local_48,*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4))
        ;
        if (local_40 < 0x100000000) {
          iVar5 = (int)local_40;
          iVar6 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                            ((longlong *)(param_1 + 0x98),local_48,local_40 & 0xffffffff);
          if (iVar6 == iVar5) {
            *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar5;
            Scaleform::WStringBuffer::~WStringBuffer(&local_48);
            return;
          }
          FUN_1436402c0(param_1);
          Scaleform::WStringBuffer::~WStringBuffer(&local_48);
          return;
        }
        Scaleform::WStringBuffer::~WStringBuffer(&local_48);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      ppuVar9 = &PTR_s_unicode_1467dc350 + uVar10;
    } while ((&PTR_s_unicode_1467dc350)[uVar10] != (undefined *)0x0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = FUN_1435c8e40(&local_48,0x5e4,uVar4);
  FUN_1435cbe70(uVar4,uVar8);
  piVar1 = (int *)(local_40 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143642390 writeShort body=101 status=ok
// SIG undefined writeShort(void)

void Scaleform::GFx::AS3::Instances::fl_filesystem::FileStream::writeShort
               (longlong param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  ushort local_res18 [8];
  
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 0x88) != 1) {
    local_res18[0] = param_3 >> 8 | param_3 << 8;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res18,2);
  if (iVar1 == 2) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 2;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143642400 FUN_143642400 body=121 status=ok
// SIG undefined FUN_143642400(void)

void FUN_143642400(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 0x88) != 1) {
    local_res18[0] =
         (param_3 & 0xff0000 | param_3 >> 0x10) >> 8 | (param_3 & 0xff00 | param_3 << 0x10) << 8;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),local_res18,4);
  if (iVar1 == 4) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 4;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143642480 FUN_143642480 body=177 status=ok
// SIG undefined FUN_143642480(void)

void FUN_143642480(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort local_res8 [4];
  
  uVar1 = *(ushort *)(*param_3 + 0x20);
  local_res8[0] = uVar1;
  if (*(int *)(param_1 + 0x88) != 1) {
    local_res8[0] = uVar1 << 8 | uVar1 >> 8;
  }
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))(param_1 + 0x98,local_res8,2);
  if (iVar2 == 2) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 2;
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                      (param_1 + 0x98,*(undefined8 *)*param_3,(uint)uVar1);
    if (uVar3 == uVar1) {
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + (uint)uVar1;
      return;
    }
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 143642540 FUN_143642540 body=78 status=ok
// SIG undefined FUN_143642540(void)

void FUN_143642540(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((undefined8 *)*param_3 + 4);
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x48))
                    ((longlong *)(param_1 + 0x98),*(undefined8 *)*param_3,iVar1);
  if (iVar2 == iVar1) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar1;
    return;
  }
  FUN_1436402c0(param_1);
  return;
}



// FUNCTION 1436425a0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b57430;
  return param_1;
}



// FUNCTION 1436425d0 FUN_1436425d0 body=218 status=ok
// SIG undefined FUN_1436425d0(void)

void FUN_1436425d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_143519560(puVar1,param_3);
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *puVar1 = &PTR_FUN_145b57360;
    lVar2 = FUN_1435b4fe0(param_3);
    *(undefined4 *)((longlong)puVar1 + 0x84) = *(undefined4 *)(lVar2 + 0x50);
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    Scaleform::SysFile::SysFile((SysFile *)(puVar1 + 0x13));
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



// FUNCTION 1436426b0 FUN_1436426b0 body=33 status=ok
// SIG undefined FUN_1436426b0(void)

undefined8 * FUN_1436426b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436426e0 FUN_1436426e0 body=214 status=ok
// SIG undefined FUN_1436426e0(void)

undefined8 * FUN_1436426e0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b56560);
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
              (puVar2,param_2,&PTR_DAT_145b56560);
    *puVar2 = &PTR_FUN_145b57430;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1436427f0 FUN_1436427f0 body=216 status=ok
// SIG undefined FUN_1436427f0(void)

void FUN_1436427f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined4 local_20;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_28 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_20 = *(undefined4 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b5f8)(DAT_146b7b600 + lVar2,&local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
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



// FUNCTION 143642940 FUN_143642940 body=175 status=ok
// SIG undefined FUN_143642940(void)

void FUN_143642940(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b418)((longlong)DAT_146b7b420 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436429f0 FUN_1436429f0 body=145 status=ok
// SIG undefined FUN_1436429f0(void)

void FUN_1436429f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b618)((longlong)DAT_146b7b620 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642ac0 FUN_143642ac0 body=175 status=ok
// SIG undefined FUN_143642ac0(void)

void FUN_143642ac0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b428)((longlong)DAT_146b7b430 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642b70 FUN_143642b70 body=145 status=ok
// SIG undefined FUN_143642b70(void)

void FUN_143642b70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b628)((longlong)DAT_146b7b630 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642c30 FUN_143642c30 body=175 status=ok
// SIG undefined FUN_143642c30(void)

void FUN_143642c30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b438)((longlong)DAT_146b7b440 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642ce0 FUN_143642ce0 body=145 status=ok
// SIG undefined FUN_143642ce0(void)

void FUN_143642ce0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b638)((longlong)DAT_146b7b640 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642da0 FUN_143642da0 body=175 status=ok
// SIG undefined FUN_143642da0(void)

void FUN_143642da0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b448)((longlong)DAT_146b7b450 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642e50 FUN_143642e50 body=145 status=ok
// SIG undefined FUN_143642e50(void)

void FUN_143642e50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b648)((longlong)DAT_146b7b650 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642ef0 FUN_143642ef0 body=175 status=ok
// SIG undefined FUN_143642ef0(void)

void FUN_143642ef0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b388)((longlong)DAT_146b7b390 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143642fa0 FUN_143642fa0 body=175 status=ok
// SIG undefined FUN_143642fa0(void)

void FUN_143642fa0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b458)((longlong)DAT_146b7b460 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643050 FUN_143643050 body=112 status=ok
// SIG undefined FUN_143643050(void)

void FUN_143643050(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b658)(DAT_146b7b660 + lVar2,local_18);
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



// FUNCTION 1436430e0 FUN_1436430e0 body=175 status=ok
// SIG undefined FUN_1436430e0(void)

void FUN_1436430e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b468)((longlong)DAT_146b7b470 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643190 FUN_143643190 body=135 status=ok
// SIG undefined FUN_143643190(void)

void FUN_143643190(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b668)(DAT_146b7b670 + lVar2,&local_18);
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



// FUNCTION 143643220 FUN_143643220 body=112 status=ok
// SIG undefined FUN_143643220(void)

void FUN_143643220(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b478)(DAT_146b7b480 + lVar2,local_18);
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



// FUNCTION 143643290 FUN_143643290 body=148 status=ok
// SIG undefined FUN_143643290(void)

void FUN_143643290(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_28 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined1 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b3a8)(DAT_146b7b3b0 + lVar2,&local_28);
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



// FUNCTION 143643350 FUN_143643350 body=112 status=ok
// SIG undefined FUN_143643350(void)

void FUN_143643350(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b488)(DAT_146b7b490 + lVar2,local_18);
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



// FUNCTION 1436433c0 FUN_1436433c0 body=112 status=ok
// SIG undefined FUN_1436433c0(void)

void FUN_1436433c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b1a8)(DAT_146b7b1b0 + lVar2,local_18);
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



// FUNCTION 143643490 FUN_143643490 body=112 status=ok
// SIG undefined FUN_143643490(void)

void FUN_143643490(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b498)(DAT_146b7b4a0 + lVar2,local_18);
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



// FUNCTION 143643560 FUN_143643560 body=144 status=ok
// SIG undefined FUN_143643560(void)

void FUN_143643560(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b1b8)((longlong)DAT_146b7b1c0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436435f0 FUN_1436435f0 body=175 status=ok
// SIG undefined FUN_1436435f0(void)

void FUN_1436435f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b4a8)((longlong)DAT_146b7b4b0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643730 FUN_143643730 body=175 status=ok
// SIG undefined FUN_143643730(void)

void FUN_143643730(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b4b8)((longlong)DAT_146b7b4c0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643830 FUN_143643830 body=144 status=ok
// SIG undefined FUN_143643830(void)

void FUN_143643830(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b1d8)((longlong)DAT_146b7b1e0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436438c0 FUN_1436438c0 body=175 status=ok
// SIG undefined FUN_1436438c0(void)

void FUN_1436438c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b4c8)((longlong)DAT_146b7b4d0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436439c0 FUN_1436439c0 body=144 status=ok
// SIG undefined FUN_1436439c0(void)

void FUN_1436439c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b1e8)((longlong)DAT_146b7b1f0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643a50 FUN_143643a50 body=266 status=ok
// SIG undefined FUN_143643a50(void)

void FUN_143643a50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b408)(DAT_146b7b410 + lVar2,&local_18,&local_10);
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



// FUNCTION 143643b90 FUN_143643b90 body=144 status=ok
// SIG undefined FUN_143643b90(void)

void FUN_143643b90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b1f8)((longlong)DAT_146b7b200 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643c20 FUN_143643c20 body=144 status=ok
// SIG undefined FUN_143643c20(void)

void FUN_143643c20(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b208)((longlong)DAT_146b7b210 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643cb0 FUN_143643cb0 body=209 status=ok
// SIG undefined FUN_143643cb0(void)

void FUN_143643cb0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
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
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0xc);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7b6e8)(DAT_146b7b6f0 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143643d90 FUN_143643d90 body=145 status=ok
// SIG undefined FUN_143643d90(void)

void FUN_143643d90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b4d8)((longlong)DAT_146b7b4e0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643e30 FUN_143643e30 body=144 status=ok
// SIG undefined FUN_143643e30(void)

void FUN_143643e30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b218)((longlong)DAT_146b7b220 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143643ef0 FUN_143643ef0 body=112 status=ok
// SIG undefined FUN_143643ef0(void)

void FUN_143643ef0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b4e8)(DAT_146b7b4f0 + lVar2,local_18);
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



// FUNCTION 143643f60 FUN_143643f60 body=112 status=ok
// SIG undefined FUN_143643f60(void)

void FUN_143643f60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b228)(DAT_146b7b230 + lVar2,local_18);
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



// FUNCTION 143644000 FUN_143644000 body=132 status=ok
// SIG undefined FUN_143644000(void)

void FUN_143644000(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b4f8)(DAT_146b7b500 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143644090 FUN_143644090 body=132 status=ok
// SIG undefined FUN_143644090(void)

void FUN_143644090(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b238)(DAT_146b7b240 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143644150 FUN_143644150 body=145 status=ok
// SIG undefined FUN_143644150(void)

void FUN_143644150(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7b508)((longlong)DAT_146b7b510 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436441f0 FUN_1436441f0 body=175 status=ok
// SIG undefined FUN_1436441f0(void)

void FUN_1436441f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7b248)((longlong)DAT_146b7b250 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436442a0 FUN_1436442a0 body=132 status=ok
// SIG undefined FUN_1436442a0(void)

void FUN_1436442a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b728)(DAT_146b7b730 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143644360 FUN_143644360 body=144 status=ok
// SIG undefined FUN_143644360(void)

void FUN_143644360(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b258)((longlong)DAT_146b7b260 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436443f0 FUN_1436443f0 body=132 status=ok
// SIG undefined FUN_1436443f0(void)

void FUN_1436443f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b738)(DAT_146b7b740 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143644480 FUN_143644480 body=148 status=ok
// SIG undefined FUN_143644480(void)

void FUN_143644480(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b528)(DAT_146b7b530 + lVar1,local_28);
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



// FUNCTION 143644580 FUN_143644580 body=148 status=ok
// SIG undefined FUN_143644580(void)

void FUN_143644580(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b278)(DAT_146b7b280 + lVar1,local_28);
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



// FUNCTION 143644620 FUN_143644620 body=148 status=ok
// SIG undefined FUN_143644620(void)

void FUN_143644620(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7b548)(DAT_146b7b550 + lVar1,local_28);
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



// FUNCTION 1436446c0 FUN_1436446c0 body=112 status=ok
// SIG undefined FUN_1436446c0(void)

void FUN_1436446c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7b288)(DAT_146b7b290 + lVar2,local_18);
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



// FUNCTION 143644760 FUN_143644760 body=132 status=ok
// SIG undefined FUN_143644760(void)

void FUN_143644760(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7b298)(DAT_146b7b2a0 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143644810 FUN_143644810 body=110 status=ok
// SIG undefined FUN_143644810(void)

longlong FUN_143644810(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
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



// FUNCTION 143644880 FUN_143644880 body=136 status=ok
// SIG undefined FUN_143644880(void)

longlong FUN_143644880(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0xa8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xa8));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 0x98));
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



// FUNCTION 143644910 FUN_143644910 body=48 status=ok
// SIG undefined FUN_143644910(void)

void FUN_143644910(longlong param_1,undefined4 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 0x98) + 0x70))((longlong *)(param_1 + 0x98),param_2,0);
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  return;
}



// FUNCTION 143644940 FUN_143644940 body=33 status=ok
// SIG undefined FUN_143644940(void)

undefined8 * FUN_143644940(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143644970 FUN_143644970 body=215 status=ok
// SIG undefined FUN_143644970(void)

undefined8 * FUN_143644970(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b58390);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b58390);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143644a50 FUN_143644a50 body=33 status=ok
// SIG undefined FUN_143644a50(void)

undefined8 * FUN_143644a50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143644a80 FUN_143644a80 body=215 status=ok
// SIG undefined FUN_143644a80(void)

undefined8 * FUN_143644a80(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b584b0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b584b0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143644b60 FUN_143644b60 body=90 status=ok
// SIG undefined FUN_143644b60(void)

undefined8 * FUN_143644b60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_145b58960;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0x1000000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[0xb] = uVar1;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[0xc] = uVar1;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[0xd] = uVar1;
  return param_1;
}



// FUNCTION 143644bc0 FUN_143644bc0 body=33 status=ok
// SIG undefined FUN_143644bc0(void)

undefined8 * FUN_143644bc0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b58a20;
  return param_1;
}



// FUNCTION 143644bf0 FUN_143644bf0 body=230 status=ok
// SIG undefined FUN_143644bf0(void)

void FUN_143644bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_145b58960;
    uVar2 = Scaleform::GFx::NumberUtil::NaN();
    puVar1[9] = uVar2;
    *(undefined4 *)(puVar1 + 10) = 0x1000000;
    *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
    uVar2 = Scaleform::GFx::NumberUtil::NaN();
    puVar1[0xb] = uVar2;
    uVar2 = Scaleform::GFx::NumberUtil::NaN();
    puVar1[0xc] = uVar2;
    uVar2 = Scaleform::GFx::NumberUtil::NaN();
    puVar1[0xd] = uVar2;
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



// FUNCTION 143644ce0 FUN_143644ce0 body=33 status=ok
// SIG undefined FUN_143644ce0(void)

undefined8 * FUN_143644ce0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143644d10 FUN_143644d10 body=214 status=ok
// SIG undefined FUN_143644d10(void)

undefined8 * FUN_143644d10(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b58570);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b58570);
    *puVar2 = &PTR_FUN_145b58a20;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143644df0 FUN_143644df0 body=33 status=ok
// SIG undefined FUN_143644df0(void)

undefined8 * FUN_143644df0(undefined8 *param_1)

{
  FUN_1435075c0();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143644e20 FUN_143644e20 body=215 status=ok
// SIG undefined FUN_143644e20(void)

undefined8 * FUN_143644e20(undefined8 *param_1,longlong param_2)

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
    FUN_1435075c0(puVar2,param_2,&PTR_DAT_145b58510);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1435074c0(lVar3,param_2,&PTR_DAT_145b58510);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143644f00 FUN_143644f00 body=33 status=ok
// SIG undefined FUN_143644f00(void)

undefined8 * FUN_143644f00(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143644f30 FUN_143644f30 body=239 status=ok
// SIG undefined FUN_143644f30(void)

undefined8 * FUN_143644f30(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b580c8);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b580c8);
  }
  FUN_1435b8600(*param_1,uVar4);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,*param_1);
    *(undefined4 *)(puVar2 + 10) = 0xc84;
    *puVar2 = &PTR_ForEachChild_GC_145b23bb0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0xc81;
    *(undefined4 *)(puVar2 + 0xb) = 0xc82;
    *(undefined8 *)((longlong)puVar2 + 0x5c) = 0xc83;
  }
  return param_1;
}



// FUNCTION 143645030 FUN_143645030 body=62 status=ok
// SIG undefined FUN_143645030(void)

undefined8 * FUN_143645030(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0xc84;
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xc81;
  *(undefined4 *)(param_1 + 0xb) = 0xc82;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xc83;
  return param_1;
}



// FUNCTION 143645070 FUN_143645070 body=33 status=ok
// SIG undefined FUN_143645070(void)

undefined8 * FUN_143645070(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436450a0 FUN_1436450a0 body=228 status=ok
// SIG undefined FUN_1436450a0(void)

undefined8 * FUN_1436450a0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b58ad0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b58ad0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143645190 FUN_143645190 body=33 status=ok
// SIG undefined FUN_143645190(void)

undefined8 * FUN_143645190(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1436451c0 FUN_1436451c0 body=144 status=ok
// SIG undefined FUN_1436451c0(void)

void FUN_1436451c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b750)((longlong)DAT_146b7b758 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143645280 FUN_143645280 body=101 status=ok
// SIG undefined FUN_143645280(void)

undefined8 * FUN_143645280(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b58d90;
  *(int *)(param_1 + 0x10) = DAT_146b7b748;
  DAT_146b7b748 = DAT_146b7b748 + 1;
  lVar1 = param_1[8];
  FUN_1435f21a0(*(undefined8 *)(lVar1 + 0x300),param_1);
  Scaleform::GFx::MovieImpl::RegisterGeolocation
            (*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),*(undefined4 *)(param_1 + 0x10));
  return param_1;
}



// FUNCTION 1436452f0 FUN_1436452f0 body=92 status=ok
// SIG undefined FUN_1436452f0(void)

void FUN_1436452f0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[8];
  *param_1 = &PTR_FUN_145b58d90;
  lVar2 = *(longlong *)(lVar1 + 0x300);
  if (lVar2 != 0) {
    FUN_1435f22d0(lVar2,param_1);
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  if (lVar1 != 0) {
    Scaleform::GFx::MovieImpl::UnregisterGeolocation(lVar1,*(undefined4 *)(param_1 + 0x10));
  }
  FUN_1435196e0(param_1);
  return;
}



// FUNCTION 143645360 FUN_143645360 body=96 status=ok
// SIG undefined FUN_143645360(void)

void FUN_143645360(longlong param_1,undefined8 param_2,longlong *param_3)

{
  FUN_14351bae0();
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x1f0) == *param_3) {
    FUN_1435f21a0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x300),param_1);
  }
  return;
}



// FUNCTION 1436453d0 FUN_1436453d0 body=37 status=ok
// SIG undefined FUN_1436453d0(void)

void FUN_1436453d0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = Scaleform::GFx::MovieImpl::IsGeolocationMuted
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10));
  *param_2 = uVar1;
  return;
}



// FUNCTION 143645400 FUN_143645400 body=140 status=ok
// SIG undefined FUN_143645400(void)

void FUN_143645400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_28[0] = 4;
  local_20 = 0;
  local_18 = param_3;
  pcVar2 = (char *)FUN_143590b70(local_28,local_res18,local_res20);
  cVar1 = *pcVar2;
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (cVar1 != '\0') {
    FUN_1432ed300(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10),
                  *(undefined4 *)(param_1 + 0x80),local_res20[0]);
  }
  return;
}



// FUNCTION 1436454a0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b58e60;
  return param_1;
}



// FUNCTION 1436454d0 FUN_1436454d0 body=141 status=ok
// SIG undefined FUN_1436454d0(void)

void FUN_1436454d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143645280(lVar1,param_3);
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



// FUNCTION 143645570 FUN_143645570 body=33 status=ok
// SIG undefined FUN_143645570(void)

undefined8 * FUN_143645570(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436455a0 FUN_1436455a0 body=227 status=ok
// SIG undefined FUN_1436455a0(void)

undefined8 * FUN_1436455a0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b58cc0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b58cc0);
    *puVar3 = &PTR_FUN_145b58e60;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143645690 FUN_143645690 body=33 status=ok
// SIG undefined FUN_143645690(void)

undefined8 * FUN_143645690(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1436456c0 FUN_1436456c0 body=44 status=ok
// SIG undefined FUN_1436456c0(void)

void FUN_1436456c0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = Scaleform::GFx::MovieImpl::IsGeolocationSupported
                    (*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                      0x10));
  *param_2 = uVar1;
  return;
}



// FUNCTION 1436456f0 FUN_1436456f0 body=144 status=ok
// SIG undefined FUN_1436456f0(void)

void FUN_1436456f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7b770)((longlong)DAT_146b7b778 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143645780 FUN_143645780 body=168 status=ok
// SIG undefined FUN_143645780(void)

undefined8 * FUN_143645780(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[8];
  *param_1 = &PTR_FUN_145b58d90;
  lVar2 = *(longlong *)(lVar1 + 0x300);
  if (lVar2 != 0) {
    FUN_1435f22d0(lVar2,param_1);
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  if (lVar1 != 0) {
    Scaleform::GFx::MovieImpl::UnregisterGeolocation(lVar1,*(undefined4 *)(param_1 + 0x10));
  }
  FUN_1435196e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 143645830 FUN_143645830 body=33 status=ok
// SIG undefined FUN_143645830(void)

undefined8 * FUN_143645830(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143645860 FUN_143645860 body=215 status=ok
// SIG undefined FUN_143645860(void)

undefined8 * FUN_143645860(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59140);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b59140);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143645940 UMatineeTrackInstAtom body=37 status=ok
// SIG undefined UMatineeTrackInstAtom(void)

undefined8 * UMatineeTrackInstAtom::UMatineeTrackInstAtom(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_145b1c0f8;
  return param_1;
}



// FUNCTION 143645970 FUN_143645970 body=33 status=ok
// SIG undefined FUN_143645970(void)

undefined8 * FUN_143645970(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b59290;
  return param_1;
}



// FUNCTION 1436459a0 FUN_1436459a0 body=177 status=ok
// SIG undefined FUN_1436459a0(void)

void FUN_1436459a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_145b1c0f8;
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



// FUNCTION 143645a60 FUN_143645a60 body=33 status=ok
// SIG undefined FUN_143645a60(void)

undefined8 * FUN_143645a60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143645a90 FUN_143645a90 body=214 status=ok
// SIG undefined FUN_143645a90(void)

undefined8 * FUN_143645a90(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b591a0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b591a0);
    *puVar2 = &PTR_FUN_145b59290;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143645b70 FUN_143645b70 body=33 status=ok
// SIG undefined FUN_143645b70(void)

undefined8 * FUN_143645b70(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143645ba0 FUN_143645ba0 body=250 status=ok
// SIG undefined FUN_143645ba0(void)

undefined8 * FUN_143645ba0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b590b0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b590b0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "landscape";
    puVar5[0xb] = "portrait";
  }
  return param_1;
}



// FUNCTION 143645ca0 FUN_143645ca0 body=55 status=ok
// SIG undefined FUN_143645ca0(void)

undefined8 * FUN_143645ca0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "landscape";
  param_1[0xb] = "portrait";
  return param_1;
}



// FUNCTION 143645ce0 FUN_143645ce0 body=43 status=ok
// SIG undefined FUN_143645ce0(void)

undefined8 * FUN_143645ce0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b59650;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143645d20 FUN_143645d20 body=33 status=ok
// SIG undefined FUN_143645d20(void)

undefined8 * FUN_143645d20(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b59710;
  return param_1;
}



// FUNCTION 143645d50 FUN_143645d50 body=176 status=ok
// SIG undefined FUN_143645d50(void)

void FUN_143645d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b59650;
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



// FUNCTION 143645e10 FUN_143645e10 body=33 status=ok
// SIG undefined FUN_143645e10(void)

undefined8 * FUN_143645e10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143645e40 FUN_143645e40 body=214 status=ok
// SIG undefined FUN_143645e40(void)

undefined8 * FUN_143645e40(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59598);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59598);
    *puVar2 = &PTR_FUN_145b59710;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143645f20 FUN_143645f20 body=51 status=ok
// SIG undefined FUN_143645f20(void)

undefined8 * FUN_143645f20(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b59788;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 143645f60 FUN_143645f60 body=33 status=ok
// SIG undefined FUN_143645f60(void)

undefined8 * FUN_143645f60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b59848;
  return param_1;
}



// FUNCTION 143645f90 FUN_143645f90 body=184 status=ok
// SIG undefined FUN_143645f90(void)

void FUN_143645f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_145b59788;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
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



// FUNCTION 143646050 FUN_143646050 body=33 status=ok
// SIG undefined FUN_143646050(void)

undefined8 * FUN_143646050(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143646080 FUN_143646080 body=214 status=ok
// SIG undefined FUN_143646080(void)

undefined8 * FUN_143646080(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59370);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59370);
    *puVar2 = &PTR_FUN_145b59848;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143646160 FUN_143646160 body=51 status=ok
// SIG undefined FUN_143646160(void)

undefined8 * FUN_143646160(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b598c0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1436461a0 FUN_1436461a0 body=33 status=ok
// SIG undefined FUN_1436461a0(void)

undefined8 * FUN_1436461a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b59980;
  return param_1;
}



// FUNCTION 1436461d0 FUN_1436461d0 body=184 status=ok
// SIG undefined FUN_1436461d0(void)

void FUN_1436461d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_145b598c0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
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


