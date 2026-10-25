// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143587590 FUN_143587590 body=40 status=ok
// SIG undefined FUN_143587590(void)

undefined8 * FUN_143587590(undefined8 *param_1)

{
  FUN_1435270a0();
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b46d50;
  return param_1;
}



// FUNCTION 1435875e0 FUN_1435875e0 body=171 status=ok
// SIG undefined FUN_1435875e0(void)

longlong * FUN_1435875e0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_143517380();
  lVar3 = *param_2;
  puVar1 = (ulonglong *)(param_1 + 0x68);
  puVar2 = (ulonglong *)(lVar3 + 0x68);
  if (puVar1 != puVar2) {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar4 - 1;
      }
    }
    *puVar2 = *puVar1;
  }
  *(undefined1 *)(lVar3 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined4 *)(lVar3 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(lVar3 + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return param_2;
}



// FUNCTION 1435876a0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b46e28;
  return param_1;
}



// FUNCTION 1435876d0 FUN_1435876d0 body=171 status=ok
// SIG undefined FUN_1435876d0(void)

void FUN_1435876d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435270a0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b46d50;
    *(undefined4 *)(puVar1 + 0xe) = 0;
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



// FUNCTION 143587790 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435877c0 FUN_1435877c0 body=214 status=ok
// SIG undefined FUN_1435877c0(void)

undefined8 * FUN_1435877c0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b44960);
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
              (puVar2,param_2,&PTR_DAT_145b44960);
    *puVar2 = &PTR_FUN_145b46e28;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435878a0 UNF_SocketSlotBase body=39 status=ok
// SIG undefined UNF_SocketSlotBase(void)

undefined8 * UNF_SocketSlotBase::UNF_SocketSlotBase(undefined8 *param_1)

{
  FUN_14351e0e0();
  *param_1 = &PTR_ForEachChild_GC_145b46ea0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1435878f0 FUN_1435878f0 body=96 status=ok
// SIG undefined FUN_1435878f0(void)

longlong * FUN_1435878f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143517380();
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x60);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x60) = lVar3;
  *(undefined4 *)(lVar2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return param_2;
}



// FUNCTION 143587960 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b46f78;
  return param_1;
}



// FUNCTION 143587990 FUN_143587990 body=172 status=ok
// SIG undefined FUN_143587990(void)

void FUN_143587990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14351e0e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b46ea0;
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



// FUNCTION 143587a50 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143587a80 FUN_143587a80 body=249 status=ok
// SIG undefined FUN_143587a80(void)

undefined8 * FUN_143587a80(undefined8 *param_1,longlong param_2)

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
              (puVar3,param_2,&PTR_DAT_145b45270);
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
              (puVar3,param_2,&PTR_DAT_145b45270);
    *puVar3 = &PTR_FUN_145b46f78;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = "linkMouseOver";
    puVar3[0xb] = "linkMouseOut";
  }
  return param_1;
}



// FUNCTION 143587b80 FUN_143587b80 body=55 status=ok
// SIG undefined FUN_143587b80(void)

undefined8 * FUN_143587b80(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "linkMouseOver";
  param_1[0xb] = "linkMouseOut";
  return param_1;
}



// FUNCTION 143587bc0 FUN_143587bc0 body=66 status=ok
// SIG undefined FUN_143587bc0(void)

undefined8 * FUN_143587bc0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143517270();
  *param_1 = &PTR_ForEachChild_GC_145b47010;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143587c10 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b470e8;
  return param_1;
}



// FUNCTION 143587c40 FUN_143587c40 body=206 status=ok
// SIG undefined FUN_143587c40(void)

void FUN_143587c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_143517270(puVar3,param_3);
    *puVar3 = &PTR_ForEachChild_GC_145b47010;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[0xc] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
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



// FUNCTION 143587d20 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143587d50 FUN_143587d50 body=215 status=ok
// SIG undefined FUN_143587d50(void)

undefined8 * FUN_143587d50(undefined8 *param_1,longlong param_2)

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
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b45730);
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
              (puVar2,param_2,&PTR_DAT_145b45730);
    *puVar2 = &PTR_FUN_145b470e8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_gfx::IMEEventEx::IMEEventEx(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143587e30 IMEEventEx body=127 status=ok
// SIG undefined IMEEventEx(void)

undefined8 * Scaleform::GFx::AS3::Classes::fl_gfx::IMEEventEx::IMEEventEx(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26340;
  param_1[10] = "SetCurrentInputLanguage";
  param_1[0xb] = "SetSupportedLanguages";
  param_1[0xc] = "SetSupportedIMENames";
  param_1[0xd] = "SetIMEName";
  param_1[0xe] = "SetCurrentLanguage";
  param_1[0xf] = "RemoveStatusWindow";
  param_1[0x10] = "DisplayStatusWindow";
  param_1[0x11] = "SetConversionStatus";
  return param_1;
}



// FUNCTION 143587ec0 FUN_143587ec0 body=73 status=ok
// SIG undefined FUN_143587ec0(void)

undefined8 * FUN_143587ec0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  param_1[8] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145b47218;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 143587f10 FUN_143587f10 body=33 status=ok
// SIG undefined FUN_143587f10(void)

undefined8 * FUN_143587f10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b472d8;
  return param_1;
}



// FUNCTION 143587f40 FUN_143587f40 body=213 status=ok
// SIG undefined FUN_143587f40(void)

void FUN_143587f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    puVar1[8] = 0xffffffffffffffff;
    *puVar1 = &PTR_FUN_145b47218;
    puVar1[9] = 0xffffffffffffffff;
    puVar1[10] = 0xffffffffffffffff;
    puVar1[0xb] = 0xffffffffffffffff;
    puVar1[0xc] = 0xffffffffffffffff;
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



// FUNCTION 143588020 FUN_143588020 body=33 status=ok
// SIG undefined FUN_143588020(void)

undefined8 * FUN_143588020(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143588050 FUN_143588050 body=214 status=ok
// SIG undefined FUN_143588050(void)

undefined8 * FUN_143588050(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b44300);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b44300);
    *puVar2 = &PTR_FUN_145b472d8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143588130 FUN_143588130 body=33 status=ok
// SIG undefined FUN_143588130(void)

undefined8 * FUN_143588130(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143588160 FUN_143588160 body=228 status=ok
// SIG undefined FUN_143588160(void)

undefined8 * FUN_143588160(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b44ed0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b44ed0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143588250 FUN_143588250 body=33 status=ok
// SIG undefined FUN_143588250(void)

undefined8 * FUN_143588250(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143588330 FUN_143588330 body=167 status=ok
// SIG undefined FUN_143588330(void)

void FUN_143588330(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a240)((longlong)DAT_146b7a248 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588410 FUN_143588410 body=171 status=ok
// SIG undefined FUN_143588410(void)

void FUN_143588410(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a520)((longlong)DAT_146b7a528 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435884c0 FUN_1435884c0 body=180 status=ok
// SIG undefined FUN_1435884c0(void)

void FUN_1435884c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
    (*DAT_146b7a250)((longlong)DAT_146b7a258 + *(longlong *)(param_3 + 0x10),local_28);
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



// FUNCTION 143588580 FUN_143588580 body=171 status=ok
// SIG undefined FUN_143588580(void)

void FUN_143588580(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a420)((longlong)DAT_146b7a428 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588660 FUN_143588660 body=167 status=ok
// SIG undefined FUN_143588660(void)

void FUN_143588660(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
    (*DAT_146b7a260)((longlong)DAT_146b7a268 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588740 FUN_143588740 body=167 status=ok
// SIG undefined FUN_143588740(void)

void FUN_143588740(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a540)((longlong)DAT_146b7a548 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435887f0 FUN_1435887f0 body=167 status=ok
// SIG undefined FUN_1435887f0(void)

void FUN_1435887f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
    (*DAT_146b7a270)((longlong)DAT_146b7a278 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435888a0 FUN_1435888a0 body=171 status=ok
// SIG undefined FUN_1435888a0(void)

void FUN_1435888a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a440)((longlong)DAT_146b7a448 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588980 FUN_143588980 body=199 status=ok
// SIG undefined FUN_143588980(void)

void FUN_143588980(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a280)((longlong)DAT_146b7a288 + *(longlong *)(param_3 + 0x10),&local_18);
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



// FUNCTION 143588a50 FUN_143588a50 body=167 status=ok
// SIG undefined FUN_143588a50(void)

void FUN_143588a50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a560)((longlong)DAT_146b7a568 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588b60 FUN_143588b60 body=167 status=ok
// SIG undefined FUN_143588b60(void)

void FUN_143588b60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a580)((longlong)DAT_146b7a588 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588c40 FUN_143588c40 body=167 status=ok
// SIG undefined FUN_143588c40(void)

void FUN_143588c40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a5a0)((longlong)DAT_146b7a5a8 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588d20 FUN_143588d20 body=167 status=ok
// SIG undefined FUN_143588d20(void)

void FUN_143588d20(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a5c0)((longlong)DAT_146b7a5c8 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143588dd0 FUN_143588dd0 body=145 status=ok
// SIG undefined FUN_143588dd0(void)

void FUN_143588dd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a5e0)((longlong)DAT_146b7a5e8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143588ed0 FUN_143588ed0 body=144 status=ok
// SIG undefined FUN_143588ed0(void)

void FUN_143588ed0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a2b0)((longlong)DAT_146b7a2b8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143588f60 FUN_143588f60 body=145 status=ok
// SIG undefined FUN_143588f60(void)

void FUN_143588f60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a600)((longlong)DAT_146b7a608 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143589090 FUN_143589090 body=144 status=ok
// SIG undefined FUN_143589090(void)

void FUN_143589090(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a2d0)((longlong)DAT_146b7a2d8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143589120 FUN_143589120 body=148 status=ok
// SIG undefined FUN_143589120(void)

void FUN_143589120(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a620)(DAT_146b7a628 + lVar1,local_28);
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



// FUNCTION 1435891c0 FUN_1435891c0 body=171 status=ok
// SIG undefined FUN_1435891c0(void)

void FUN_1435891c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a3a0)((longlong)DAT_146b7a3a8 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435892a0 FUN_1435892a0 body=230 status=ok
// SIG undefined FUN_1435892a0(void)

void FUN_1435892a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_10 = *(undefined1 *)(param_6 + 0x50);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a2e0)((longlong)DAT_146b7a2e8 + *(longlong *)(param_3 + 0x10),&local_28,local_10,
                     local_18,local_10);
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



// FUNCTION 143589390 FUN_143589390 body=147 status=ok
// SIG undefined FUN_143589390(void)

void FUN_143589390(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7a450)(DAT_146b7a458 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143589430 FUN_143589430 body=147 status=ok
// SIG undefined FUN_143589430(void)

void FUN_143589430(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7a3b0)(DAT_146b7a3b8 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435894d0 FUN_1435894d0 body=148 status=ok
// SIG undefined FUN_1435894d0(void)

void FUN_1435894d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a640)(DAT_146b7a648 + lVar1,local_28);
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



// FUNCTION 143589570 FUN_143589570 body=215 status=ok
// SIG undefined FUN_143589570(void)

void FUN_143589570(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined1 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined1 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a2f0)((longlong)DAT_146b7a2f8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
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



// FUNCTION 143589650 FUN_143589650 body=147 status=ok
// SIG undefined FUN_143589650(void)

void FUN_143589650(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7a460)(DAT_146b7a468 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435896f0 FUN_1435896f0 body=135 status=ok
// SIG undefined FUN_1435896f0(void)

void FUN_1435896f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a3c0)(DAT_146b7a3c8 + lVar2,&local_18);
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



// FUNCTION 1435897b0 FUN_1435897b0 body=142 status=ok
// SIG undefined FUN_1435897b0(void)

void FUN_1435897b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
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
  local_10 = param_6[0xc];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a300)(DAT_146b7a308 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143589870 FUN_143589870 body=135 status=ok
// SIG undefined FUN_143589870(void)

void FUN_143589870(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a470)(DAT_146b7a478 + lVar2,&local_18);
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



// FUNCTION 143589900 FUN_143589900 body=175 status=ok
// SIG undefined FUN_143589900(void)

void FUN_143589900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7a660)((longlong)DAT_146b7a668 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143589a10 FUN_143589a10 body=135 status=ok
// SIG undefined FUN_143589a10(void)

void FUN_143589a10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7a310)(DAT_146b7a318 + lVar2,&local_18);
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



// FUNCTION 143589aa0 FUN_143589aa0 body=175 status=ok
// SIG undefined FUN_143589aa0(void)

void FUN_143589aa0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7a680)((longlong)DAT_146b7a688 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143589b50 FUN_143589b50 body=147 status=ok
// SIG undefined FUN_143589b50(void)

void FUN_143589b50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7a480)(DAT_146b7a488 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143589bf0 FUN_143589bf0 body=112 status=ok
// SIG undefined FUN_143589bf0(void)

void FUN_143589bf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a670)(DAT_146b7a678 + lVar2,local_18);
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



// FUNCTION 143589c60 FUN_143589c60 body=144 status=ok
// SIG undefined FUN_143589c60(void)

void FUN_143589c60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a1b0)((longlong)DAT_146b7a1b8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143589cf0 FUN_143589cf0 body=189 status=ok
// SIG undefined FUN_143589cf0(void)

void FUN_143589cf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a3e0)(DAT_146b7a3e8 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
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



// FUNCTION 143589db0 FUN_143589db0 body=144 status=ok
// SIG undefined FUN_143589db0(void)

void FUN_143589db0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a120)((longlong)DAT_146b7a128 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143589e40 FUN_143589e40 body=167 status=ok
// SIG undefined FUN_143589e40(void)

void FUN_143589e40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a320)((longlong)DAT_146b7a328 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143589f20 FUN_143589f20 body=135 status=ok
// SIG undefined FUN_143589f20(void)

void FUN_143589f20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a490)(DAT_146b7a498 + lVar2,&local_18);
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



// FUNCTION 14358a070 FUN_14358a070 body=232 status=ok
// SIG undefined FUN_14358a070(void)

void FUN_14358a070(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_20;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 0x30);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  if ((((byte)*(undefined4 *)(param_6 + 0x40) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x50) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x50);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a6a0)(DAT_146b7a6a8 + lVar2,param_4,uVar3,&local_20,local_18);
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
  return;
}



// FUNCTION 14358a160 FUN_14358a160 body=147 status=ok
// SIG undefined FUN_14358a160(void)

void FUN_14358a160(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b7a4a0)(DAT_146b7a4a8 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14358a200 FUN_14358a200 body=144 status=ok
// SIG undefined FUN_14358a200(void)

void FUN_14358a200(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a1d0)((longlong)DAT_146b7a1d8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358a290 FUN_14358a290 body=112 status=ok
// SIG undefined FUN_14358a290(void)

void FUN_14358a290(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a140)(DAT_146b7a148 + lVar2,local_18);
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



// FUNCTION 14358a300 FUN_14358a300 body=171 status=ok
// SIG undefined FUN_14358a300(void)

void FUN_14358a300(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a400)((longlong)DAT_146b7a408 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14358a3b0 FUN_14358a3b0 body=145 status=ok
// SIG undefined FUN_14358a3b0(void)

void FUN_14358a3b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a340)((longlong)DAT_146b7a348 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358a450 FUN_14358a450 body=112 status=ok
// SIG undefined FUN_14358a450(void)

void FUN_14358a450(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a6b0)(DAT_146b7a6b8 + lVar2,local_18);
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



// FUNCTION 14358a4c0 FUN_14358a4c0 body=135 status=ok
// SIG undefined FUN_14358a4c0(void)

void FUN_14358a4c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a4b0)(DAT_146b7a4b8 + lVar2,&local_18);
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



// FUNCTION 14358a550 FUN_14358a550 body=112 status=ok
// SIG undefined FUN_14358a550(void)

void FUN_14358a550(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a150)(DAT_146b7a158 + lVar2,local_18);
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



// FUNCTION 14358a5c0 FUN_14358a5c0 body=306 status=ok
// SIG undefined FUN_14358a5c0(void)

void FUN_14358a5c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_38 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_30 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_30 = *(longlong *)(param_6 + 4);
    *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1;
  }
  local_28 = *(undefined8 *)(param_6 + 0xc);
  local_20 = *(undefined1 *)(param_6 + 0x14);
  local_18 = param_6[0x1c];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a1e0)(DAT_146b7a1e8 + lVar2,&local_38,&local_30,local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_30 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_38 != 0) {
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_38);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_38 != 0) && ((local_38 & 1) == 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14358a700 FUN_14358a700 body=175 status=ok
// SIG undefined FUN_14358a700(void)

void FUN_14358a700(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7a350)((longlong)DAT_146b7a358 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358a7b0 FUN_14358a7b0 body=112 status=ok
// SIG undefined FUN_14358a7b0(void)

void FUN_14358a7b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a6c0)(DAT_146b7a6c8 + lVar2,local_18);
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



// FUNCTION 14358a850 FUN_14358a850 body=175 status=ok
// SIG undefined FUN_14358a850(void)

void FUN_14358a850(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7a160)((longlong)DAT_146b7a168 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358a900 FUN_14358a900 body=144 status=ok
// SIG undefined FUN_14358a900(void)

void FUN_14358a900(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a360)((longlong)DAT_146b7a368 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358a990 FUN_14358a990 body=343 status=ok
// SIG undefined FUN_14358a990(void)

void FUN_14358a990(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_48 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_40 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_40 = *(longlong *)(param_6 + 4);
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + 1;
  }
  local_38 = *(undefined8 *)(param_6 + 0xc);
  local_30 = *(undefined1 *)(param_6 + 0x14);
  local_28 = *(undefined8 *)(param_6 + 0x1c);
  local_20 = *(undefined1 *)(param_6 + 0x24);
  local_18 = param_6[0x2c];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a1f0)(DAT_146b7a1f8 + lVar2,&local_48,&local_40,local_38,local_30,local_28,local_20,
                     local_18);
  }
  piVar1 = (int *)(local_40 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_48;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_48 != 0) {
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      *(uint *)(local_48 + 8) = *(uint *)(local_48 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_48);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_48 != 0) && ((local_48 & 1) == 0)) && ((*(uint *)(local_48 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_48 + 8) = *(uint *)(local_48 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14358aaf0 FUN_14358aaf0 body=131 status=ok
// SIG undefined FUN_14358aaf0(void)

void FUN_14358aaf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = param_6;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a170)(DAT_146b7a178 + lVar2,&local_18);
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



// FUNCTION 14358ac10 FUN_14358ac10 body=167 status=ok
// SIG undefined FUN_14358ac10(void)

void FUN_14358ac10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18 [3];
  
  lVar4 = *(longlong *)(param_3 + 0x10);
  uVar2 = *(undefined1 *)(param_6 + 0x10);
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
    (*DAT_146b7a180)(DAT_146b7a188 + lVar4,param_4,uVar2,uVar3,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14358acc0 FUN_14358acc0 body=165 status=ok
// SIG undefined FUN_14358acc0(void)

void FUN_14358acc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_20;
  undefined8 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 0x30);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  local_18 = *(undefined8 *)(param_6 + 0x50);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a4e0)(DAT_146b7a4e8 + lVar2,param_4,uVar3,&local_20,local_18);
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14358ad70 FUN_14358ad70 body=144 status=ok
// SIG undefined FUN_14358ad70(void)

void FUN_14358ad70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a380)((longlong)DAT_146b7a388 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358ae00 FUN_14358ae00 body=199 status=ok
// SIG undefined FUN_14358ae00(void)

void FUN_14358ae00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a210)((longlong)DAT_146b7a218 + *(longlong *)(param_3 + 0x10),&local_18);
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



// FUNCTION 14358aed0 FUN_14358aed0 body=197 status=ok
// SIG undefined FUN_14358aed0(void)

void FUN_14358aed0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a190)((longlong)DAT_146b7a198 + *(longlong *)(param_3 + 0x10),&local_18);
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



// FUNCTION 14358afd0 FUN_14358afd0 body=145 status=ok
// SIG undefined FUN_14358afd0(void)

void FUN_14358afd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a220)((longlong)DAT_146b7a228 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358b070 FUN_14358b070 body=171 status=ok
// SIG undefined FUN_14358b070(void)

void FUN_14358b070(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a500)((longlong)DAT_146b7a508 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14358b120 FUN_14358b120 body=136 status=ok
// SIG undefined FUN_14358b120(void)

longlong FUN_14358b120(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
    }
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14358b1b0 FUN_14358b1b0 body=136 status=ok
// SIG undefined FUN_14358b1b0(void)

longlong FUN_14358b1b0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
    }
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14358b240 FUN_14358b240 body=89 status=ok
// SIG undefined FUN_14358b240(void)

undefined8 FUN_14358b240(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14358b2a0 FUN_14358b2a0 body=58 status=ok
// SIG undefined FUN_14358b2a0(void)

undefined8 FUN_14358b2a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  RefCountImpl *local_res8 [4];
  
  puVar2 = (undefined8 *)
           Scaleform::GFx::StateBag::GetLog
                     (*(longlong *)(*(longlong *)(param_1 + 0x300) + 0x10) + 0x10,local_res8);
  uVar1 = *puVar2;
  if (local_res8[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8[0]);
  }
  return uVar1;
}



// FUNCTION 14358b2e0 FUN_14358b2e0 body=44 status=ok
// SIG undefined FUN_14358b2e0(void)

longlong FUN_14358b2e0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
    if (lVar1 != 0) {
      return lVar1 + -0x38;
    }
  }
  return 0;
}



// FUNCTION 14358b310 FUN_14358b310 body=124 status=ok
// SIG undefined FUN_14358b310(void)

undefined8 * FUN_14358b310(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b47970;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xb] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xd] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 14358b3a0 FUN_14358b3a0 body=33 status=ok
// SIG undefined FUN_14358b3a0(void)

undefined8 * FUN_14358b3a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b47a30;
  return param_1;
}



// FUNCTION 14358b3d0 FUN_14358b3d0 body=141 status=ok
// SIG undefined FUN_14358b3d0(void)

void FUN_14358b3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14358b310(lVar1,param_3);
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



// FUNCTION 14358b470 FUN_14358b470 body=33 status=ok
// SIG undefined FUN_14358b470(void)

undefined8 * FUN_14358b470(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358b4a0 FUN_14358b4a0 body=214 status=ok
// SIG undefined FUN_14358b4a0(void)

undefined8 * FUN_14358b4a0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b47410);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b47410);
    *puVar2 = &PTR_FUN_145b47a30;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358b580 FUN_14358b580 body=62 status=ok
// SIG undefined FUN_14358b580(void)

undefined8 * FUN_14358b580(undefined8 *param_1)

{
  FUN_14358b310();
  *param_1 = &PTR_FUN_145b47aa8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14358b5d0 FUN_14358b5d0 body=33 status=ok
// SIG undefined FUN_14358b5d0(void)

undefined8 * FUN_14358b5d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b47b68;
  return param_1;
}



// FUNCTION 14358b600 FUN_14358b600 body=195 status=ok
// SIG undefined FUN_14358b600(void)

void FUN_14358b600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14358b310(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b47aa8;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
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



// FUNCTION 14358b6d0 FUN_14358b6d0 body=33 status=ok
// SIG undefined FUN_14358b6d0(void)

undefined8 * FUN_14358b6d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358b700 FUN_14358b700 body=214 status=ok
// SIG undefined FUN_14358b700(void)

undefined8 * FUN_14358b700(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b477d0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b477d0);
    *puVar2 = &PTR_FUN_145b47b68;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358b7e0 FUN_14358b7e0 body=33 status=ok
// SIG undefined FUN_14358b7e0(void)

undefined8 * FUN_14358b7e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358b810 FUN_14358b810 body=242 status=ok
// SIG undefined FUN_14358b810(void)

undefined8 * FUN_14358b810(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b47380);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b47380);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *(undefined4 *)(puVar5 + 10) = 1;
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 3;
  }
  return param_1;
}



// FUNCTION 14358b910 FUN_14358b910 body=47 status=ok
// SIG undefined FUN_14358b910(void)

undefined8 * FUN_14358b910(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 1;
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  return param_1;
}



// FUNCTION 14358b940 FUN_14358b940 body=183 status=ok
// SIG undefined FUN_14358b940(void)

void FUN_14358b940(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x98) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x88);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x88) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x80);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x80) = uVar1 - 1;
      FUN_14358ba00(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_14358ba00(param_1);
  return;
}



// FUNCTION 14358ba00 FUN_14358ba00 body=283 status=ok
// SIG undefined FUN_14358ba00(void)

void FUN_14358ba00(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x78) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x70);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x70) = uVar2 - 1;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x50);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x50) = uVar2 - 1;
    }
  }
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
  }
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x40) = uVar2 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 14358bb20 FUN_14358bb20 body=89 status=ok
// SIG undefined FUN_14358bb20(void)

undefined8 FUN_14358bb20(undefined8 param_1,ulonglong param_2)

{
  FUN_14358b940();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14358bb80 FUN_14358bb80 body=89 status=ok
// SIG undefined FUN_14358bb80(void)

undefined8 FUN_14358bb80(undefined8 param_1,ulonglong param_2)

{
  FUN_14358ba00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14358bbe0 FUN_14358bbe0 body=144 status=ok
// SIG undefined FUN_14358bbe0(void)

void FUN_14358bbe0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a6d8)((longlong)DAT_146b7a6e0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358bca0 FUN_14358bca0 body=101 status=ok
// SIG undefined FUN_14358bca0(void)

undefined8 * FUN_14358bca0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b47d28;
  *(int *)(param_1 + 0x10) = DAT_146b7a6d0;
  DAT_146b7a6d0 = DAT_146b7a6d0 + 1;
  lVar1 = param_1[8];
  FUN_1435f2020(*(undefined8 *)(lVar1 + 0x300),param_1);
  Scaleform::GFx::MovieImpl::RegisterAccelerometer
            (*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),*(undefined4 *)(param_1 + 0x10));
  return param_1;
}



// FUNCTION 14358bd10 FUN_14358bd10 body=92 status=ok
// SIG undefined FUN_14358bd10(void)

void FUN_14358bd10(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[8];
  *param_1 = &PTR_FUN_145b47d28;
  lVar2 = *(longlong *)(lVar1 + 0x300);
  if (lVar2 != 0) {
    FUN_1435f2150(lVar2,param_1);
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  if (lVar1 != 0) {
    Scaleform::GFx::MovieImpl::UnregisterAccelerometer(lVar1,*(undefined4 *)(param_1 + 0x10));
  }
  FUN_1435196e0(param_1);
  return;
}



// FUNCTION 14358bd80 FUN_14358bd80 body=96 status=ok
// SIG undefined FUN_14358bd80(void)

void FUN_14358bd80(longlong param_1,undefined8 param_2,longlong *param_3)

{
  FUN_14351bae0();
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x1f0) == *param_3) {
    FUN_1435f2020(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x300),param_1);
  }
  return;
}



// FUNCTION 14358bdf0 FUN_14358bdf0 body=37 status=ok
// SIG undefined FUN_14358bdf0(void)

void FUN_14358bdf0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = Scaleform::GFx::MovieImpl::IsAccelerometerMuted
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14358be20 FUN_14358be20 body=140 status=ok
// SIG undefined FUN_14358be20(void)

void FUN_14358be20(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1432ed120(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10),
                  *(undefined4 *)(param_1 + 0x80),local_res20[0]);
  }
  return;
}



// FUNCTION 14358bec0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b47df8;
  return param_1;
}



// FUNCTION 14358bef0 FUN_14358bef0 body=141 status=ok
// SIG undefined FUN_14358bef0(void)

void FUN_14358bef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14358bca0(lVar1,param_3);
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



// FUNCTION 14358bf90 FUN_14358bf90 body=33 status=ok
// SIG undefined FUN_14358bf90(void)

undefined8 * FUN_14358bf90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358bfc0 FUN_14358bfc0 body=227 status=ok
// SIG undefined FUN_14358bfc0(void)

undefined8 * FUN_14358bfc0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b47c10);
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
              (puVar3,param_2,&PTR_DAT_145b47c10);
    *puVar3 = &PTR_FUN_145b47df8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14358c0b0 FUN_14358c0b0 body=33 status=ok
// SIG undefined FUN_14358c0b0(void)

undefined8 * FUN_14358c0b0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14358c0e0 FUN_14358c0e0 body=44 status=ok
// SIG undefined FUN_14358c0e0(void)

void FUN_14358c0e0(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = Scaleform::GFx::MovieImpl::IsAccelerometerSupported
                    (*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                      0x10));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14358c110 FUN_14358c110 body=144 status=ok
// SIG undefined FUN_14358c110(void)

void FUN_14358c110(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a6f8)((longlong)DAT_146b7a700 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358c1a0 FUN_14358c1a0 body=168 status=ok
// SIG undefined FUN_14358c1a0(void)

undefined8 * FUN_14358c1a0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[8];
  *param_1 = &PTR_FUN_145b47d28;
  lVar2 = *(longlong *)(lVar1 + 0x300);
  if (lVar2 != 0) {
    FUN_1435f2150(lVar2,param_1);
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  if (lVar1 != 0) {
    Scaleform::GFx::MovieImpl::UnregisterAccelerometer(lVar1,*(undefined4 *)(param_1 + 0x10));
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



// FUNCTION 14358c250 FUN_14358c250 body=33 status=ok
// SIG undefined FUN_14358c250(void)

undefined8 * FUN_14358c250(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358c280 FUN_14358c280 body=228 status=ok
// SIG undefined FUN_14358c280(void)

undefined8 * FUN_14358c280(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48278);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b48278);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14358c370 FUN_14358c370 body=33 status=ok
// SIG undefined FUN_14358c370(void)

undefined8 * FUN_14358c370(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14358c3a0 FUN_14358c3a0 body=264 status=ok
// SIG undefined FUN_14358c3a0(void)

undefined8 * FUN_14358c3a0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b49238;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[9] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[10] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xb] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xd] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xe] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 14358c4b0 FUN_14358c4b0 body=33 status=ok
// SIG undefined FUN_14358c4b0(void)

undefined8 * FUN_14358c4b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b492f8;
  return param_1;
}



// FUNCTION 14358c4e0 FUN_14358c4e0 body=141 status=ok
// SIG undefined FUN_14358c4e0(void)

void FUN_14358c4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14358c3a0(lVar1,param_3);
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



// FUNCTION 14358c580 FUN_14358c580 body=33 status=ok
// SIG undefined FUN_14358c580(void)

undefined8 * FUN_14358c580(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358c5b0 FUN_14358c5b0 body=214 status=ok
// SIG undefined FUN_14358c5b0(void)

undefined8 * FUN_14358c5b0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48070);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48070);
    *puVar2 = &PTR_FUN_145b492f8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358c690 FUN_14358c690 body=33 status=ok
// SIG undefined FUN_14358c690(void)

undefined8 * FUN_14358c690(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358c6c0 FUN_14358c6c0 body=228 status=ok
// SIG undefined FUN_14358c6c0(void)

undefined8 * FUN_14358c6c0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b481b8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b481b8);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14358c7b0 FUN_14358c7b0 body=33 status=ok
// SIG undefined FUN_14358c7b0(void)

undefined8 * FUN_14358c7b0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14358c7e0 FUN_14358c7e0 body=33 status=ok
// SIG undefined FUN_14358c7e0(void)

undefined8 * FUN_14358c7e0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b49370;
  return param_1;
}



// FUNCTION 14358ca60 FUN_14358ca60 body=33 status=ok
// SIG undefined FUN_14358ca60(void)

undefined8 * FUN_14358ca60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b49430;
  return param_1;
}



// FUNCTION 14358ca90 FUN_14358ca90 body=173 status=ok
// SIG undefined FUN_14358ca90(void)

void FUN_14358ca90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar1 = &PTR_FUN_145b49370;
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



// FUNCTION 14358cb50 FUN_14358cb50 body=33 status=ok
// SIG undefined FUN_14358cb50(void)

undefined8 * FUN_14358cb50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358cb80 FUN_14358cb80 body=214 status=ok
// SIG undefined FUN_14358cb80(void)

undefined8 * FUN_14358cb80(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48218);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48218);
    *puVar2 = &PTR_FUN_145b49430;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358cc60 FUN_14358cc60 body=33 status=ok
// SIG undefined FUN_14358cc60(void)

undefined8 * FUN_14358cc60(undefined8 *param_1)

{
  FUN_143519560();
  *param_1 = &PTR_FUN_145b37e70;
  return param_1;
}



// FUNCTION 14358cdb0 FUN_14358cdb0 body=51 status=ok
// SIG undefined FUN_14358cdb0(void)

undefined8 * FUN_14358cdb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method SoundChannel::soundTransformGet() is not implemented\n");
  return param_2;
}



// FUNCTION 14358cdf0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b494a8;
  return param_1;
}



// FUNCTION 14358ce20 FUN_14358ce20 body=173 status=ok
// SIG undefined FUN_14358ce20(void)

void FUN_14358ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14358cee0 FUN_14358cee0 body=33 status=ok
// SIG undefined FUN_14358cee0(void)

undefined8 * FUN_14358cee0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358cf10 FUN_14358cf10 body=214 status=ok
// SIG undefined FUN_14358cf10(void)

undefined8 * FUN_14358cf10(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b489a0);
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
              (puVar2,param_2,&PTR_DAT_145b489a0);
    *puVar2 = &PTR_FUN_145b494a8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358cff0 FUN_14358cff0 body=33 status=ok
// SIG undefined FUN_14358cff0(void)

undefined8 * FUN_14358cff0(undefined8 *param_1)

{
  FUN_143519560();
  *param_1 = &PTR_FUN_145b49520;
  return param_1;
}



// FUNCTION 14358d1e0 FUN_14358d1e0 body=51 status=ok
// SIG undefined FUN_14358d1e0(void)

undefined8 * FUN_14358d1e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))(plVar1,2,"The method Sound::id3Get() is not implemented\n");
  return param_2;
}



// FUNCTION 14358d220 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b495f0;
  return param_1;
}



// FUNCTION 14358d250 FUN_14358d250 body=173 status=ok
// SIG undefined FUN_14358d250(void)

void FUN_14358d250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar1 = &PTR_FUN_145b49520;
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



// FUNCTION 14358d310 FUN_14358d310 body=33 status=ok
// SIG undefined FUN_14358d310(void)

undefined8 * FUN_14358d310(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358d340 FUN_14358d340 body=214 status=ok
// SIG undefined FUN_14358d340(void)

undefined8 * FUN_14358d340(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48ec0);
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
              (puVar2,param_2,&PTR_DAT_145b48ec0);
    *puVar2 = &PTR_FUN_145b495f0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358d420 FUN_14358d420 body=51 status=ok
// SIG undefined FUN_14358d420(void)

undefined8 * FUN_14358d420(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_145b49668;
  param_1[8] = 0x408f400000000000;
  return param_1;
}



// FUNCTION 14358d460 FUN_14358d460 body=33 status=ok
// SIG undefined FUN_14358d460(void)

undefined8 * FUN_14358d460(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b49728;
  return param_1;
}



// FUNCTION 14358d490 FUN_14358d490 body=191 status=ok
// SIG undefined FUN_14358d490(void)

void FUN_14358d490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    *(undefined1 *)(puVar1 + 9) = 0;
    *puVar1 = &PTR_FUN_145b49668;
    puVar1[8] = 0x408f400000000000;
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



// FUNCTION 14358d560 FUN_14358d560 body=33 status=ok
// SIG undefined FUN_14358d560(void)

undefined8 * FUN_14358d560(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358d590 FUN_14358d590 body=214 status=ok
// SIG undefined FUN_14358d590(void)

undefined8 * FUN_14358d590(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48f20);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48f20);
    *puVar2 = &PTR_FUN_145b49728;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14358d670 FUN_14358d670 body=33 status=ok
// SIG undefined FUN_14358d670(void)

undefined8 * FUN_14358d670(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14358d6a0 FUN_14358d6a0 body=228 status=ok
// SIG undefined FUN_14358d6a0(void)

undefined8 * FUN_14358d6a0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b48580);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b48580);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14358d790 FUN_14358d790 body=33 status=ok
// SIG undefined FUN_14358d790(void)

undefined8 * FUN_14358d790(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14358d7c0 FUN_14358d7c0 body=148 status=ok
// SIG undefined FUN_14358d7c0(void)

void FUN_14358d7c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a798)(DAT_146b7a7a0 + lVar1,local_28);
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



// FUNCTION 14358d860 FUN_14358d860 body=148 status=ok
// SIG undefined FUN_14358d860(void)

void FUN_14358d860(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a7a8)(DAT_146b7a7b0 + lVar1,local_28);
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



// FUNCTION 14358d900 FUN_14358d900 body=148 status=ok
// SIG undefined FUN_14358d900(void)

void FUN_14358d900(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a7b8)(DAT_146b7a7c0 + lVar1,local_28);
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



// FUNCTION 14358d9a0 FUN_14358d9a0 body=175 status=ok
// SIG undefined FUN_14358d9a0(void)

void FUN_14358d9a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7a7c8)((longlong)DAT_146b7a7d0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358daa0 FUN_14358daa0 body=148 status=ok
// SIG undefined FUN_14358daa0(void)

void FUN_14358daa0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a7f8)(DAT_146b7a800 + lVar1,local_28);
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



// FUNCTION 14358db70 FUN_14358db70 body=148 status=ok
// SIG undefined FUN_14358db70(void)

void FUN_14358db70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a818)(DAT_146b7a820 + lVar1,local_28);
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



// FUNCTION 14358dc10 FUN_14358dc10 body=145 status=ok
// SIG undefined FUN_14358dc10(void)

void FUN_14358dc10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a708)((longlong)DAT_146b7a710 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358dce0 FUN_14358dce0 body=148 status=ok
// SIG undefined FUN_14358dce0(void)

void FUN_14358dce0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a838)(DAT_146b7a840 + lVar1,local_28);
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



// FUNCTION 14358dd80 FUN_14358dd80 body=145 status=ok
// SIG undefined FUN_14358dd80(void)

void FUN_14358dd80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a718)((longlong)DAT_146b7a720 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358de20 FUN_14358de20 body=175 status=ok
// SIG undefined FUN_14358de20(void)

void FUN_14358de20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b7a728)((longlong)DAT_146b7a730 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358df00 FUN_14358df00 body=144 status=ok
// SIG undefined FUN_14358df00(void)

void FUN_14358df00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a738)((longlong)DAT_146b7a740 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14358df90 FUN_14358df90 body=148 status=ok
// SIG undefined FUN_14358df90(void)

void FUN_14358df90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a858)(DAT_146b7a860 + lVar1,local_28);
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



// FUNCTION 14358e030 FUN_14358e030 body=148 status=ok
// SIG undefined FUN_14358e030(void)

void FUN_14358e030(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a748)(DAT_146b7a750 + lVar1,local_28);
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



// FUNCTION 14358e100 FUN_14358e100 body=112 status=ok
// SIG undefined FUN_14358e100(void)

void FUN_14358e100(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a758)(DAT_146b7a760 + lVar2,local_18);
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



// FUNCTION 14358e170 FUN_14358e170 body=148 status=ok
// SIG undefined FUN_14358e170(void)

void FUN_14358e170(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a878)(DAT_146b7a880 + lVar1,local_28);
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



// FUNCTION 14358e260 FUN_14358e260 body=148 status=ok
// SIG undefined FUN_14358e260(void)

void FUN_14358e260(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a898)(DAT_146b7a8a0 + lVar1,local_28);
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



// FUNCTION 14358e3a0 FUN_14358e3a0 body=127 status=ok
// SIG undefined FUN_14358e3a0(void)

void FUN_14358e3a0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
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
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 14358e420 FUN_14358e420 body=89 status=ok
// SIG undefined FUN_14358e420(void)

undefined8 FUN_14358e420(undefined8 param_1,ulonglong param_2)

{
  FUN_14358e3a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14358e480 FUN_14358e480 body=92 status=ok
// SIG undefined FUN_14358e480(void)

undefined8 * FUN_14358e480(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x29;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b49e08;
  *(undefined4 *)(param_1 + 1) = 1;
  Scaleform::GFx::RegisterTagLoader(0x4c,FUN_14358ec90);
  Scaleform::GFx::RegisterTagLoader(0x52,FUN_14358ee80);
  return param_1;
}



// FUNCTION 14358e4f0 FUN_14358e4f0 body=154 status=ok
// SIG undefined FUN_14358e4f0(void)

undefined8 FUN_14358e4f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  RefCountImpl *this;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x54c0,0);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1432e2220(lVar2,plVar1,0x41f00000);
  }
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x948,0);
  if (lVar2 != 0) {
    this = (RefCountImpl *)FUN_1435e9d10(lVar2,param_2,uVar3,param_1);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return uVar3;
}



// FUNCTION 14358e590 FUN_14358e590 body=480 status=ok
// SIG undefined FUN_14358e590(void)

undefined8 * FUN_14358e590(undefined8 param_1,undefined8 param_2,uint *param_3,char param_4)

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
    puVar2[6] = &PTR_FUN_145b4a220;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0x3e800000;
    puVar2[8] = puVar2;
  }
  uVar5 = 0;
  puVar2[2] = plVar1;
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0xe8,0);
  uVar4 = uVar5;
  if (lVar3 != 0) {
    uVar4 = FUN_1435aaba0(lVar3);
  }
  if ((RefCountImpl *)puVar2[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[4]);
  }
  puVar2[4] = uVar4;
  FUN_1435aac30(uVar4,param_3[0x12],param_3[0x11],param_3[0x14],param_3[0x15],param_3[0x16]);
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



// FUNCTION 14358e7a0 FUN_14358e7a0 body=805 status=ok
// SIG undefined FUN_14358e7a0(void)

undefined8
FUN_14358e7a0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             int *param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = param_6;
  if (param_6 == 0) {
    iVar1 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  }
  switch(iVar1) {
  case 1:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0xd8,0);
    if (lVar2 != 0) {
      param_6 = *param_5;
      uVar3 = FUN_1435e1f10(lVar2,*param_3,*(undefined8 *)(param_2 + 0x18),param_4,&param_6);
      return uVar3;
    }
    goto LAB_14358e834;
  default:
    uVar3 = 0;
    break;
  case 3:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0x1b0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      param_6 = *param_5;
      uVar3 = FUN_1433830e0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                            &param_6,0);
    }
    if (lVar2 + 0x140 != 0) {
      Scaleform::GFx::AS3::AvmMovieClip::AvmMovieClip(lVar2 + 0x140,uVar3);
    }
    break;
  case 4:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0x198,0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      param_6 = *param_5;
      uVar3 = FUN_143de5ba0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                            &param_6);
    }
    if (lVar2 + 0x148 != 0) {
      FUN_1435f6350(lVar2 + 0x148,uVar3);
    }
    break;
  case 5:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0x1c8,0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      param_6 = *param_5;
      uVar3 = FUN_1433a3830(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                            &param_6);
    }
    if (lVar2 + 400 != 0) {
      FUN_1435f62d0(lVar2 + 400,uVar3);
    }
    break;
  case 6:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0x1c0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      param_6 = *param_5;
      uVar3 = FUN_143de33e0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                            &param_6);
    }
    if (lVar2 + 0x170 != 0) {
      FUN_1435f5050(lVar2 + 0x170,uVar3);
    }
    break;
  case 8:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0xd8,0);
    if (lVar2 != 0) {
      param_6 = *param_5;
      uVar3 = FUN_1435e2500(lVar2,*(undefined8 *)(param_2 + 0x18),param_3,param_4,&param_6);
      return uVar3;
    }
LAB_14358e834:
    uVar3 = 0;
    break;
  case 9:
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                      (*(longlong **)(param_2 + 0x48),0x1b0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      param_6 = *param_5;
      uVar3 = FUN_1433830e0(lVar2,*param_3,param_3[1],*(undefined8 *)(param_2 + 0x18),param_4,
                            &param_6,0);
    }
    if (lVar2 + 0x140 != 0) {
      FUN_1435e5600(lVar2 + 0x140,uVar3);
    }
  }
  return uVar3;
}



// FUNCTION 14358eb10 FUN_14358eb10 body=88 status=ok
// SIG undefined FUN_14358eb10(void)

undefined8 * FUN_14358eb10(undefined8 param_1,longlong param_2,longlong param_3)

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
    *puVar2 = &PTR__scalar_deleting_destructor__145afa3a0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14358eb70 FUN_14358eb70 body=88 status=ok
// SIG undefined FUN_14358eb70(void)

undefined8 * FUN_14358eb70(undefined8 param_1,longlong param_2,longlong param_3)

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
    *puVar2 = &PTR__scalar_deleting_destructor__145afa460;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14358ebd0 FUN_14358ebd0 body=87 status=ok
// SIG undefined FUN_14358ebd0(void)

undefined8 * FUN_14358ebd0(undefined8 param_1,longlong param_2)

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
    *puVar2 = &PTR_FUN_145afa510;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14358ec30 FUN_14358ec30 body=87 status=ok
// SIG undefined FUN_14358ec30(void)

undefined8 * FUN_14358ec30(undefined8 param_1,longlong param_2)

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
    *puVar2 = &PTR_FUN_145afa4c0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14358ec90 FUN_14358ec90 body=479 status=ok
// SIG undefined FUN_14358ec90(void)

void FUN_14358ec90(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  int local_48 [2];
  longlong local_40;
  ulonglong local_38 [2];
  
  lVar6 = *(longlong *)(param_1 + 0x418);
  if (lVar6 == 0) {
    lVar6 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar6 + 0x29) = 0;
  if (*(int *)(lVar6 + 0x50) - *(int *)(lVar6 + 0x4c) < 2) {
    FUN_143396c40(lVar6,2);
  }
  uVar1 = *(uint *)(lVar6 + 0x4c);
  uVar5 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar6 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar6 + 0x60)));
  *(uint *)(lVar6 + 0x4c) = uVar1 + 2;
  FUN_143300df0(param_1 + 0x20,"  SymbolClassLoader: num = %d\n",(uint)uVar5);
  if (uVar5 != 0) {
    uVar7 = (ulonglong)(uint)uVar5;
    do {
      *(undefined1 *)(lVar6 + 0x29) = 0;
      if (*(int *)(lVar6 + 0x50) - *(int *)(lVar6 + 0x4c) < 2) {
        FUN_143396c40(lVar6,2);
      }
      uVar1 = *(uint *)(lVar6 + 0x4c);
      uVar5 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar6 + 0x60)),
                       *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar6 + 0x60)));
      *(uint *)(lVar6 + 0x4c) = uVar1 + 2;
      FUN_1432c55c0(local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38));
      FUN_143395ed0(lVar6,local_38);
      FUN_143300df0(param_1 + 0x20,"       id = %d, symbol = \'%s\'\n",(uint)uVar5,
                    (local_38[0] & 0xfffffffffffffffc) + 0xc);
      local_48[0] = 0;
      local_40 = 0;
      if ((uVar5 == 0) ||
         (local_res8[0] = (uint)uVar5,
         cVar2 = FUN_14330e8c0(*(undefined8 *)(param_1 + 0x38),local_48,local_res8), cVar2 != '\0'))
      {
        local_res8[0] = (uint)uVar5;
        FUN_14330e7b0(*(undefined8 *)(param_1 + 0x38),local_38,local_res8,local_48);
      }
      else {
        FUN_14330c260(param_1 + 0x20,
                      "SymbolClassLoader can\'t find Resource with id = %d, name = \'%s\'",
                      (uint)uVar5,(local_38[0] & 0xfffffffffffffffc) + 0xc);
      }
      if ((local_48[0] == 0) && (local_40 != 0)) {
        FUN_1432de450();
      }
      uVar4 = local_38[0] & 0xfffffffffffffffc;
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar4 + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar4);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14358ee80 FUN_14358ee80 body=481 status=ok
// SIG undefined FUN_14358ee80(void)

void FUN_14358ee80(longlong param_1,longlong param_2)

{
  RefCountImpl RVar1;
  int iVar2;
  RefCountImpl *this;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  ulonglong local_48 [2];
  undefined1 local_38 [32];
  
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  RVar1 = (RefCountImpl)FUN_143300e60(lVar3);
  FUN_1432c55c0(local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38));
  FUN_143395ed0(lVar3,local_48);
  uVar4 = ((*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x54)) - *(int *)(lVar3 + 0x4c)) +
          *(int *)(param_2 + 0xc) + *(int *)(param_2 + 8);
  if (((*(ulonglong *)(local_48[0] & 0xfffffffffffffffc) & 0x7fffffffffffffff) == 0) &&
     (*(int *)(param_1 + 0x410) != 0)) {
    FUN_1432f2bf0(local_38,0x14,&DAT_145af963c);
    Scaleform::String::operator=(local_48,local_38);
  }
  this = (RefCountImpl *)
         (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)uVar4 + 0x2f,0);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145b4a218;
    *(undefined4 *)(this + 8) = 1;
    FUN_1432c31e0(this + 0x10,local_48);
    *(uint *)(this + 0x18) = uVar4;
    this[0x1c] = RVar1;
    FUN_1432c5250(this + 0x20);
  }
  Scaleform::String::operator=
            (this + 0x20,
             (*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x48) &
             0xfffffffffffffffc) + 0xc);
  iVar2 = FUN_143396b20(lVar3,this + 0x28,*(undefined4 *)(this + 0x18));
  if (iVar2 == *(int *)(this + 0x18)) {
    lVar3 = FUN_14358f070(param_1);
    Scaleform::RefCountImpl::AddRef(this);
    if (*(RefCountImpl **)(lVar3 + 8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 8));
    }
    *(RefCountImpl **)(lVar3 + 8) = this;
    FUN_14340b120(param_1,local_res8,lVar3);
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
  }
  else {
    FUN_14339fb50(lVar3,"Can\'t read completely ABCData at offset %d",*(undefined4 *)(param_2 + 4));
  }
  Scaleform::RefCountImpl::Release(this);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_48[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48[0] & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14358f070 FUN_14358f070 body=95 status=ok
// SIG undefined FUN_14358f070(void)

undefined8 * FUN_14358f070(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x10) {
    puVar2 = (undefined8 *)FUN_14330cf40(lVar1 + 0x10,0x10);
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined8 **)(lVar1 + 0x10) = puVar2 + 2;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x10;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__scalar_deleting_destructor__145b4a238;
    puVar2[1] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14358f0d0 AvmMovieClip body=66 status=ok
// SIG undefined AvmMovieClip(void)

undefined8 * Scaleform::GFx::AS3::AvmMovieClip::AvmMovieClip(undefined8 *param_1)

{
  FUN_1435e5600();
  *param_1 = &PTR_FUN_145b49e80;
  param_1[7] = &PTR_LAB_145b49f70;
  param_1[9] = &PTR_LAB_145b4a020;
  param_1[10] = &PTR_LAB_145b4a0e8;
  return param_1;
}



// FUNCTION 14358f120 FUN_14358f120 body=113 status=ok
// SIG undefined FUN_14358f120(void)

void FUN_14358f120(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14358f1c0 FUN_14358f1c0 body=89 status=ok
// SIG undefined FUN_14358f1c0(void)

undefined8 FUN_14358f1c0(undefined8 param_1,ulonglong param_2)

{
  FUN_14358f120();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14358f220 FUN_14358f220 body=55 status=ok
// SIG undefined FUN_14358f220(void)

undefined8 FUN_14358f220(undefined8 param_1,byte param_2)

{
  FUN_1435e6c60();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14358f2b0 FUN_14358f2b0 body=211 status=ok
// SIG undefined FUN_14358f2b0(void)

void FUN_14358f2b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  RefCountImpl *local_res8;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = (longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4;
  uVar5 = Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(lVar1);
  cVar4 = FUN_1435f1cc0(uVar5,uVar2,param_2);
  if (cVar4 == '\0') {
    plVar6 = (longlong *)
             Scaleform::GFx::StateBag::GetLog
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x20) + 0x10) +
                        0x10,&local_res8);
    lVar3 = *plVar6;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
    }
    if (lVar3 != 0) {
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x218))(param_2);
      puVar7 = (undefined8 *)
               Scaleform::GFx::StateBag::GetLog
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x20) + 0x10) +
                          0x10,&local_res8);
      uVar2 = *puVar7;
      uVar5 = (**(code **)(*plVar6 + 0x60))(plVar6);
      FUN_1432bbf90(uVar2,"Can\'t execute ABC from %s",uVar5);
      if (local_res8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_res8);
      }
    }
  }
  return;
}



// FUNCTION 14358f6d0 FUN_14358f6d0 body=55 status=ok
// SIG undefined FUN_14358f6d0(void)

uint FUN_14358f6d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *param_2;
  cVar1 = *(char *)(lVar4 + 2 + param_1);
  uVar2 = *(undefined1 *)(lVar4 + param_1);
  uVar3 = *(undefined1 *)(lVar4 + 1 + param_1);
  *param_2 = lVar4 + 3;
  uVar5 = (uint)CONCAT21(CONCAT11(cVar1,uVar3),uVar2);
  if (cVar1 < '\0') {
    uVar5 = ~(uVar5 ^ 0xffffff);
  }
  return uVar5;
}



// FUNCTION 14358f710 FUN_14358f710 body=80 status=ok
// SIG undefined FUN_14358f710(void)

uint FUN_14358f710(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(*param_2 + param_1);
  *param_2 = *param_2 + 1;
  uVar2 = bVar1 & 0x7f;
  for (uVar3 = 7; ((char)bVar1 < '\0' && (uVar3 < 0x20)); uVar3 = uVar3 + 7) {
    bVar1 = *(byte *)(*param_2 + param_1);
    *param_2 = *param_2 + 1;
    uVar2 = uVar2 | (bVar1 & 0x7f) << ((byte)uVar3 & 0x1f);
  }
  return uVar2;
}



// FUNCTION 14358f7f0 FUN_14358f7f0 body=57 status=ok
// SIG undefined FUN_14358f7f0(void)

undefined8 FUN_14358f7f0(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  FUN_1432c3140(param_1,param_2 + *param_3,param_4);
  *param_3 = *param_3 + param_4;
  return param_1;
}



// FUNCTION 14358f850 FUN_14358f850 body=25 status=ok
// SIG undefined FUN_14358f850(void)

undefined2 FUN_14358f850(longlong *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = (longlong)((undefined2 *)*param_1 + 1);
  return uVar1;
}



// FUNCTION 14358f8b0 FUN_14358f8b0 body=74 status=ok
// SIG undefined FUN_14358f8b0(void)

uint FUN_14358f8b0(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  uVar2 = bVar1 & 0x7f;
  for (uVar3 = 7; ((char)bVar1 < '\0' && (uVar3 < 0x20)); uVar3 = uVar3 + 7) {
    bVar1 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar2 = uVar2 | (bVar1 & 0x7f) << ((byte)uVar3 & 0x1f);
  }
  return uVar2;
}



// FUNCTION 14358f900 FUN_14358f900 body=97 status=ok
// SIG undefined FUN_14358f900(void)

undefined8 FUN_14358f900(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)*param_1;
  *param_1 = (longlong)((undefined8 *)*param_1 + 1);
  return uVar1;
}



// FUNCTION 14358f970 FUN_14358f970 body=54 status=ok
// SIG undefined FUN_14358f970(void)

undefined8 FUN_14358f970(undefined8 param_1,longlong *param_2,longlong param_3)

{
  FUN_1432c3140(param_1,*param_2);
  *param_2 = *param_2 + param_3;
  return param_1;
}



// FUNCTION 14358f9b0 FUN_14358f9b0 body=20 status=ok
// SIG undefined FUN_14358f9b0(void)

longlong * FUN_14358f9b0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *param_2 = lVar1 + param_3;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 14358f9d0 FUN_14358f9d0 body=41 status=ok
// SIG undefined FUN_14358f9d0(void)

undefined8 FUN_14358f9d0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    return 1;
  default:
    return 0;
  }
}



// FUNCTION 14358fa30 CAkRectifier body=16 status=ok
// SIG undefined CAkRectifier(void)

undefined8 * DSP::CAkRectifier::CAkRectifier(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 14358fa80 FUN_14358fa80 body=202 status=ok
// SIG undefined FUN_14358fa80(void)

void FUN_14358fa80(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b17430;
  Scaleform::GFx::AS3::Abc::ConstPool::~ConstPool(param_1 + 0xc0);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa8));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x90));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x48));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14358fb50 FUN_14358fb50 body=83 status=ok
// SIG undefined FUN_14358fb50(void)

uint * FUN_14358fb50(longlong param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = 7;
  pbVar4 = *(byte **)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_3 * 8);
  uVar3 = *pbVar4 & 0x7f;
  if (-1 < (char)*pbVar4) {
    *param_2 = uVar3;
    return param_2;
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (0x1f < uVar2) break;
    bVar1 = (byte)uVar2;
    uVar2 = uVar2 + 7;
    uVar3 = uVar3 | (*pbVar4 & 0x7f) << (bVar1 & 0x1f);
  } while ((char)*pbVar4 < '\0');
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14358fbb0 GetParamNum body=43 status=ok
// SIG undefined GetParamNum(void)

undefined4 Scaleform::GFx::AS3::Abc::File::GetParamNum(longlong param_1,ulonglong param_2)

{
  undefined8 local_res8 [2];
  undefined4 local_res18 [4];
  
  local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (param_2 & 0xffffffff) * 8);
  ReadMethodInfoSmallHeader(local_res8,local_res18);
  return local_res18[0];
}



// FUNCTION 14358fbe0 ~ConstPool body=120 status=ok
// SIG undefined ~ConstPool(void)

void Scaleform::GFx::AS3::Abc::ConstPool::~ConstPool(longlong param_1)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x88));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x70));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x58));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00014358fc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14358fc80 FUN_14358fc80 body=77 status=ok
// SIG undefined FUN_14358fc80(void)

void FUN_14358fc80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (*DAT_146b7a8e8)((longlong)DAT_146b7a8f0 + *(longlong *)(param_3 + 0x10),local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_1434f0780(param_4,local_18[0]);
  }
  return;
}



// FUNCTION 14358fcd0 FUN_14358fcd0 body=112 status=ok
// SIG undefined FUN_14358fcd0(void)

void FUN_14358fcd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a8f8)(DAT_146b7a900 + lVar2,local_18);
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



// FUNCTION 14358fd40 FUN_14358fd40 body=131 status=ok
// SIG undefined FUN_14358fd40(void)

undefined8 * FUN_14358fd40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 8;
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
  param_1[0x43] = param_2;
  param_1[0x44] = &PTR_DAT_1467d97f0;
  FUN_143361080(param_2,param_1,&PTR_DAT_1467d97f0,0x43);
  return param_1;
}



// FUNCTION 14358fdd0 FUN_14358fdd0 body=223 status=ok
// SIG undefined FUN_14358fdd0(void)

void FUN_14358fdd0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong local_res8;
  
  FUN_1432c2fb0(&local_res8,"The method ");
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1432c3950(&local_res8,*(longlong *)(param_1 + 0x18),0xffffffffffffffff);
    FUN_1432c3950(&local_res8,&DAT_145b1a93c,0xffffffffffffffff);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1432c3950(&local_res8,*(longlong *)(param_1 + 0x10),0xffffffffffffffff);
    FUN_1432c3950(&local_res8,&DAT_145b4e11c,0xffffffffffffffff);
  }
  FUN_1432c3950(&local_res8," is not implemented\n",0xffffffffffffffff);
  (**(code **)(**(longlong **)(param_2 + 0x38) + 8))
            (*(longlong **)(param_2 + 0x38),2,(local_res8 & 0xfffffffffffffffc) + 0xc);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14358fec0 FUN_14358fec0 body=343 status=ok
// SIG undefined FUN_14358fec0(void)

longlong * FUN_14358fec0(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_3 + 0x218);
  lVar7 = -1;
  *param_2 = lVar8 + 0x48;
  piVar1 = (int *)(lVar8 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar4 = *(char **)(param_1 + 0x18);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    pcVar5 = pcVar4;
    do {
      cVar2 = *pcVar5;
      cVar3 = pcVar5[(longlong)PTR_s___AS3___vec_1467d9790 - (longlong)pcVar4];
      if (cVar2 != cVar3) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    if (cVar2 != cVar3) {
      pcVar5 = pcVar4;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[(longlong)PTR_s_http___adobe_com_AS3_2006_builti_1467d9780 - (longlong)pcVar4
                      ];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        pcVar5 = "AS3";
      }
      else {
        pcVar5 = pcVar4;
        do {
          cVar2 = *pcVar5;
          cVar3 = pcVar5[(longlong)PTR_s_http___www_adobe_com_2006_action_1467d9788 -
                         (longlong)pcVar4];
          if (cVar2 != cVar3) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        pcVar5 = "flash_proxy";
        if (cVar2 != cVar3) {
          pcVar5 = pcVar4;
        }
      }
      FUN_1433601c0(param_2,pcVar5);
      puVar6 = &DAT_145af796c;
      lVar8 = -1;
      if (param_4 == 0) {
        puVar6 = &DAT_145b1a93c;
      }
      do {
        lVar8 = lVar8 + 1;
      } while (puVar6[lVar8] != '\0');
      FUN_143360130(param_2);
    }
  }
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0x10) + lVar7) != '\0');
  FUN_143360130(param_2,*(longlong *)(param_1 + 0x10),lVar7);
  FUN_143360130(param_2,&DAT_145b4e11c,2);
  return param_2;
}



// FUNCTION 143590020 FUN_143590020 body=139 status=ok
// SIG undefined FUN_143590020(void)

uint * FUN_143590020(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar3 = *param_2 & 0x1f;
  if (9 < uVar3) {
    if ((*param_2 >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        *(int *)(*(longlong *)(param_2 + 4) + 0x18) =
             *(int *)(*(longlong *)(param_2 + 4) + 0x18) + 1;
      }
      else if (10 < uVar3) {
        if (uVar3 < 0xd) {
          lVar4 = *(longlong *)(param_2 + 4);
        }
        else {
          if (0xe < uVar3) goto LAB_143590091;
          lVar4 = *(longlong *)(param_2 + 6);
        }
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
        }
      }
    }
    else {
      **(int **)(param_2 + 2) = **(int **)(param_2 + 2) + 1;
    }
  }
LAB_143590091:
  if ((*param_1 >> 9 & 1) != 0) {
    FUN_1435906a0(param_1);
  }
  return param_1;
}



// FUNCTION 1435900c0 Value body=28 status=ok
// SIG undefined Value(void)

undefined4 * Scaleform::GFx::AS3::Value::Value(undefined4 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = 10;
  *(undefined8 *)(param_1 + 2) = 0;
  lVar2 = *param_2;
  *(longlong *)(param_1 + 4) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 1435900f0 FUN_1435900f0 body=25 status=ok
// SIG undefined FUN_1435900f0(void)

undefined4 * FUN_1435900f0(undefined4 *param_1,longlong param_2)

{
  *param_1 = 10;
  *(undefined8 *)(param_1 + 2) = 0;
  *(longlong *)(param_1 + 4) = param_2;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  return param_1;
}



// FUNCTION 143590110 FUN_143590110 body=40 status=ok
// SIG undefined FUN_143590110(void)

undefined4 * FUN_143590110(undefined4 *param_1,longlong param_2)

{
  *param_1 = 0xc;
  *(undefined8 *)(param_1 + 2) = 0;
  *(longlong *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}



// FUNCTION 143590140 FUN_143590140 body=143 status=ok
// SIG undefined FUN_143590140(void)

void FUN_143590140(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 == param_1) {
    return;
  }
  uVar2 = *param_2 & 0x1f;
  if (9 < uVar2) {
    if ((*param_2 >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        *(int *)(*(longlong *)(param_2 + 4) + 0x18) =
             *(int *)(*(longlong *)(param_2 + 4) + 0x18) + 1;
      }
      else if (10 < uVar2) {
        if (uVar2 < 0xd) {
          lVar3 = *(longlong *)(param_2 + 4);
        }
        else {
          if (0xe < uVar2) goto LAB_1435901ae;
          lVar3 = *(longlong *)(param_2 + 6);
        }
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
        }
      }
    }
    else {
      **(int **)(param_2 + 2) = **(int **)(param_2 + 2) + 1;
    }
  }
LAB_1435901ae:
  FUN_143603d30(param_1);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  return;
}



// FUNCTION 1435901e0 FUN_1435901e0 body=103 status=ok
// SIG undefined FUN_1435901e0(void)

void FUN_1435901e0(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 != param_1) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = uVar1;
    uVar2 = *param_1 & 0x1f;
    if (9 < uVar2) {
      if ((*param_1 >> 9 & 1) != 0) {
        **(int **)(param_1 + 2) = **(int **)(param_1 + 2) + 1;
        return;
      }
      if (uVar2 == 10) {
        *(int *)(*(longlong *)(param_1 + 4) + 0x18) =
             *(int *)(*(longlong *)(param_1 + 4) + 0x18) + 1;
      }
      else if (10 < uVar2) {
        if (uVar2 < 0xd) {
          lVar3 = *(longlong *)(param_1 + 4);
        }
        else {
          if (0xe < uVar2) {
            return;
          }
          lVar3 = *(longlong *)(param_1 + 6);
        }
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143590250 FUN_143590250 body=127 status=ok
// SIG undefined FUN_143590250(void)

void FUN_143590250(uint *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uStack_10;
  
  *(int *)(*param_2 + 0x18) = *(int *)(*param_2 + 0x18) + 1;
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      piVar1 = *(int **)(param_1 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = *param_1 & 0xfffffde0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  *param_1 = *param_1 & 0xffffffea;
  *param_1 = *param_1 | 10;
  *(longlong *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1435902e0 FUN_1435902e0 body=36 status=ok
// SIG undefined FUN_1435902e0(void)

void FUN_1435902e0(uint *param_1,longlong *param_2)

{
  undefined8 uStack_10;
  
  *(int *)(*param_2 + 0x18) = *(int *)(*param_2 + 0x18) + 1;
  *param_1 = *param_1 & 0xffffffea;
  *param_1 = *param_1 | 10;
  *(longlong *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 143590310 FUN_143590310 body=121 status=ok
// SIG undefined FUN_143590310(void)

void FUN_143590310(uint *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uStack_10;
  
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      piVar1 = *(int **)(param_1 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = *param_1 & 0xfffffde0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  *param_1 = *param_1 & 0xffffffea;
  *param_1 = *param_1 | 10;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 143590390 AssignUnsafe body=30 status=ok
// SIG undefined AssignUnsafe(void)

void Scaleform::GFx::AS3::Value::AssignUnsafe(uint *param_1,longlong param_2)

{
  undefined8 uStack_10;
  
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  *param_1 = *param_1 & 0xffffffea;
  *param_1 = *param_1 | 10;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1435903c0 FUN_1435903c0 body=136 status=ok
// SIG undefined FUN_1435903c0(void)

void FUN_1435903c0(uint *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      piVar1 = *(int **)(param_1 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = *param_1 & 0xfffffde0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  *param_1 = *param_1 & 0xffffffec;
  *param_1 = *param_1 | 0xc;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 143590450 FUN_143590450 body=45 status=ok
// SIG undefined FUN_143590450(void)

void FUN_143590450(uint *param_1,longlong param_2)

{
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = *param_1 & 0xffffffec;
  *param_1 = *param_1 | 0xc;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1435904b0 PickUnsafe body=27 status=ok
// SIG undefined PickUnsafe(void)

void Scaleform::GFx::AS3::Value::PickUnsafe(uint *param_1,undefined8 param_2)

{
  undefined8 uStack_10;
  
  *param_1 = *param_1 & 0xffffffec;
  *param_1 = *param_1 | 0xc;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1435904e0 FUN_1435904e0 body=45 status=ok
// SIG undefined FUN_1435904e0(void)

void FUN_1435904e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_2 + 6);
  *param_2 = *param_1;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
  uVar5 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_2 + 6) = uVar5;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 6) = uVar4;
  return;
}



// FUNCTION 143590540 FUN_143590540 body=98 status=ok
// SIG undefined FUN_143590540(void)

undefined4 * FUN_143590540(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b7a928) {
    _Init_thread_header(&DAT_146b7a928);
    if (DAT_146b7a928 == -1) {
      atexit(FUN_143ec4e30);
      _Init_thread_footer(&DAT_146b7a928);
    }
  }
  return &DAT_146b7a908;
}



// FUNCTION 1435905b0 FUN_1435905b0 body=98 status=ok
// SIG undefined FUN_1435905b0(void)

undefined4 * FUN_1435905b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b7a92c) {
    _Init_thread_header(&DAT_146b7a92c);
    if (DAT_146b7a92c == -1) {
      atexit(FUN_143ec4d40);
      _Init_thread_footer(&DAT_146b7a92c);
    }
  }
  return &DAT_1467d9ae8;
}



// FUNCTION 143590620 FUN_143590620 body=108 status=ok
// SIG undefined FUN_143590620(void)

undefined8 FUN_143590620(uint *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [32];
  
  if (((*param_1 >> 9 & 1) == 0) && (uVar4 = *param_1 & 0x1f, 10 < uVar4)) {
    if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
      lVar3 = *(longlong *)(param_1 + 4);
    }
    else {
      if (1 < uVar4 - 0xd) {
        return 0;
      }
      lVar3 = *(longlong *)(param_1 + 6);
    }
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)FUN_1435ab1e0(lVar3,local_res8);
      uVar1 = *puVar2;
      *param_1 = *param_1 | 0x200;
      *(undefined8 *)(param_1 + 2) = uVar1;
      FUN_1435920c0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435906a0 FUN_1435906a0 body=175 status=ok
// SIG undefined FUN_1435906a0(void)

int FUN_1435906a0(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *param_1;
  if ((uVar2 >> 9 & 1) == 0) {
    return (uVar2 >> 0x11) << 8;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 2) + 8) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = uVar2 & 0xffffffe0;
    *param_1 = *param_1 & 0xfffffdff;
    param_1[2] = 0;
    param_1[3] = 0;
    return 1;
  }
  uVar2 = uVar2 & 0x1f;
  if (uVar2 == 10) {
    *(int *)(*(longlong *)(param_1 + 4) + 0x18) = *(int *)(*(longlong *)(param_1 + 4) + 0x18) + 1;
  }
  else if (10 < uVar2) {
    if (uVar2 < 0xd) {
      lVar3 = *(longlong *)(param_1 + 4);
    }
    else {
      if (0xe < uVar2) goto LAB_1435906fc;
      lVar3 = *(longlong *)(param_1 + 6);
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
    }
  }
LAB_1435906fc:
  piVar1 = *(int **)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = *param_1 & 0xfffffdff;
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}



// FUNCTION 143590760 FUN_143590760 body=321 status=ok
// SIG undefined FUN_143590760(void)

undefined1 *
FUN_143590760(uint *param_1,undefined1 *param_2,undefined8 param_3,uint *param_4,int param_5)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  undefined8 uStack_10;
  
  uVar3 = *param_1 & 0x1f;
  if ((uVar3 < 5) || (uVar3 == 10)) {
    FUN_143590140(param_4,param_1);
    goto LAB_14359088b;
  }
  if ((uVar3 - 5 & 0xfffffffd) != 0) {
    if (uVar3 == 0xb) {
      FUN_143590250(param_4,*(longlong *)(param_1 + 4) + 0x38);
      goto LAB_14359088b;
    }
    if (1 < uVar3 - 0xd) {
      lVar2 = *(longlong *)(param_1 + 4);
      if (lVar2 == 0) {
        if (-1 < param_5) {
          if (param_5 < 2) {
            *param_4 = *param_4 & 0xffffffe4;
            *param_4 = *param_4 | 4;
            param_4[4] = 0;
            param_4[5] = 0;
            *(undefined8 *)(param_4 + 6) = uStack_10;
          }
          else if (param_5 == 2) {
            lVar2 = FUN_143360950(param_3,&DAT_145af9634,4,0);
            *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
            *param_4 = *param_4 & 0xffffffea;
            *param_4 = *param_4 | 10;
            *(longlong *)(param_4 + 4) = lVar2;
            *(undefined8 *)(param_4 + 6) = uStack_10;
          }
        }
      }
      else {
        pcVar1 = (char *)FUN_1435b0690(lVar2,local_res8,param_4,param_5);
        if (*pcVar1 == '\0') {
          FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x98));
          *param_2 = 0;
          return param_2;
        }
      }
      goto LAB_14359088b;
    }
  }
  FUN_1434f06a0(param_4,0);
LAB_14359088b:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435908b0 FUN_1435908b0 body=256 status=ok
// SIG undefined FUN_1435908b0(void)

undefined1 * FUN_1435908b0(uint *param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  undefined8 uStack_10;
  
  uVar4 = *param_1 & 0x1f;
  if ((uVar4 < 5) || (uVar4 == 10)) {
    FUN_1435901e0(param_3,param_1);
LAB_14359099f:
    *param_2 = 1;
    return param_2;
  }
  if ((uVar4 - 5 & 0xfffffffd) != 0) {
    if (uVar4 == 0xb) {
      lVar2 = *(longlong *)(param_1 + 4);
      *param_2 = 1;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x38) + 0x18);
      *piVar1 = *piVar1 + 1;
      *param_3 = *param_3 & 0xffffffea;
      *param_3 = *param_3 | 10;
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(param_3 + 6) = uStack_10;
      return param_2;
    }
    if ((1 < uVar4 - 0xd) && (lVar2 = *(longlong *)(param_1 + 4), lVar2 != 0)) {
      pcVar3 = (char *)FUN_1435b0690(lVar2,local_res8,param_3,1);
      if (*pcVar3 == '\0') {
        FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x98));
        *param_2 = 0;
        return param_2;
      }
      goto LAB_14359099f;
    }
  }
  *param_3 = *param_3 & 0xffffffe4;
  *param_3 = *param_3 | 4;
  *param_2 = 1;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return param_2;
}



// FUNCTION 1435909c0 FUN_1435909c0 body=222 status=ok
// SIG undefined FUN_1435909c0(void)

bool FUN_1435909c0(uint *param_1)

{
  longlong lVar1;
  char cVar2;
  
  switch(*param_1 & 0x1f) {
  case 0:
  case 0xb:
    return false;
  case 1:
    return (bool)(char)param_1[4];
  case 2:
  case 3:
    return param_1[4] != 0;
  case 4:
    cVar2 = FUN_143611160(param_1);
    if (cVar2 != '\0') {
      return false;
    }
    cVar2 = FUN_143364be0(*(undefined8 *)(param_1 + 4));
    if (cVar2 != '\0') {
      return false;
    }
    cVar2 = FUN_143364c00(*(undefined8 *)(param_1 + 4));
    if (cVar2 != '\0') {
      return false;
    }
switchD_1435909ed_caseD_6:
    return true;
  case 5:
  case 7:
  case 0xd:
  case 0xe:
    goto switchD_1435909ed_caseD_6;
  default:
    return false;
  case 10:
    lVar1 = *(longlong *)(param_1 + 4);
    if (lVar1 == 0) {
      return false;
    }
    if (lVar1 != *(longlong *)(lVar1 + 8) + 0x80) {
      return *(int *)(lVar1 + 0x20) != 0;
    }
    return false;
  case 0xc:
    return *(longlong *)(param_1 + 4) != 0;
  }
}



// FUNCTION 143590af0 FUN_143590af0 body=23 status=ok
// SIG undefined FUN_143590af0(void)

undefined8 FUN_143590af0(undefined8 param_1,undefined8 param_2)

{
  FUN_14360f380();
  return param_2;
}



// FUNCTION 143590b10 FUN_143590b10 body=86 status=ok
// SIG undefined FUN_143590b10(void)

undefined1 * FUN_143590b10(undefined8 param_1,undefined1 *param_2)

{
  char local_res10 [8];
  undefined8 local_res18 [2];
  
  *param_2 = 1;
  FUN_14360f380(param_1,local_res10,local_res18);
  if (local_res10[0] != '\0') {
    FUN_1434f06a0(param_1,local_res18[0]);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143590b70 FUN_143590b70 body=669 status=ok
// SIG undefined FUN_143590b70(void)

undefined1 * FUN_143590b70(uint *param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_res8 [8];
  undefined8 local_res20;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  uVar4 = *param_1 & 0x1f;
  switch(uVar4) {
  case 1:
    *param_3 = (uint)((char)param_1[4] != '\0');
    break;
  case 2:
  case 3:
  case 7:
    *param_3 = param_1[4];
    break;
  case 4:
    uVar4 = FUN_14360f460(*(undefined8 *)(param_1 + 4));
    *param_3 = uVar4;
    break;
  default:
    if (uVar4 == 0xc) {
      bVar5 = *(longlong *)(param_1 + 4) == 0;
LAB_143590c5d:
      if (bVar5) goto switchD_143590bae_caseD_0;
    }
    else if (uVar4 == 10) {
      bVar5 = *(longlong *)(param_1 + 4) == *(longlong *)(*(longlong *)(param_1 + 4) + 8) + 0x80;
      goto LAB_143590c5d;
    }
    local_28[0] = 0;
    local_20 = (int *)0x0;
    pcVar3 = (char *)FUN_1435908b0(param_1,local_res8,local_28);
    if ((*pcVar3 == '\0') ||
       (pcVar3 = (char *)FUN_143590b70(local_28,local_res8,param_3), *pcVar3 == '\0')) {
      uVar4 = local_28[0] & 0x1f;
      *param_2 = 0;
      if (uVar4 < 10) {
        return param_2;
      }
      if ((local_28[0] >> 9 & 1) != 0) {
        *local_20 = *local_20 + -1;
        if (*local_20 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar4 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if (((uVar4 != 0xb) && (uVar4 != 0xc)) && (local_18 = local_10, 1 < uVar4 - 0xd)) {
        return param_2;
      }
      if ((local_18 & 1) != 0) {
        return param_2;
      }
      if (local_18 == 0) {
        return param_2;
      }
      if ((*(uint *)(local_18 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    uVar4 = local_28[0] & 0x1f;
    if (9 < uVar4) {
      if ((local_28[0] >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          piVar1 = (int *)(local_18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if (((((uVar4 == 0xb) || (uVar4 == 0xc)) || (local_18 = local_10, uVar4 - 0xd < 2)) &&
                 (((local_18 & 1) == 0 && (local_18 != 0)))) &&
                ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_20 = *local_20 + -1;
        if (*local_20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    break;
  case 10:
    lVar2 = *(longlong *)(param_1 + 4);
    if ((lVar2 != 0) && (lVar2 != *(longlong *)(lVar2 + 8) + 0x80)) {
      FUN_14360f380(param_1,local_res8,&local_res20);
      if (local_res8[0] == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar4 = FUN_14360f460(local_res20);
      *param_3 = uVar4;
      break;
    }
  case 0:
  case 5:
switchD_143590bae_caseD_0:
    *param_3 = 0;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143590e50 FUN_143590e50 body=82 status=ok
// SIG undefined FUN_143590e50(void)

undefined1 * FUN_143590e50(undefined8 param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  pcVar1 = (char *)FUN_143590b70(param_1,local_res10,local_res18);
  if (*pcVar1 != '\0') {
    FUN_1434f0780(param_1,local_res18[0]);
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143590eb0 FUN_143590eb0 body=669 status=ok
// SIG undefined FUN_143590eb0(void)

undefined1 * FUN_143590eb0(uint *param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_res8 [8];
  undefined8 local_res20;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  uVar4 = *param_1 & 0x1f;
  switch(uVar4) {
  case 1:
    *param_3 = (uint)((char)param_1[4] != '\0');
    break;
  case 2:
  case 3:
    *param_3 = param_1[4];
    break;
  case 4:
    uVar4 = FUN_14360f460(*(undefined8 *)(param_1 + 4));
    *param_3 = uVar4;
    break;
  default:
    if (uVar4 == 0xc) {
      bVar5 = *(longlong *)(param_1 + 4) == 0;
LAB_143590f9d:
      if (bVar5) goto switchD_143590eee_caseD_0;
    }
    else if (uVar4 == 10) {
      bVar5 = *(longlong *)(param_1 + 4) == *(longlong *)(*(longlong *)(param_1 + 4) + 8) + 0x80;
      goto LAB_143590f9d;
    }
    local_28[0] = 0;
    local_20 = (int *)0x0;
    pcVar3 = (char *)FUN_1435908b0(param_1,local_res8,local_28);
    if ((*pcVar3 == '\0') ||
       (pcVar3 = (char *)FUN_143590eb0(local_28,local_res8,param_3), *pcVar3 == '\0')) {
      uVar4 = local_28[0] & 0x1f;
      *param_2 = 0;
      if (uVar4 < 10) {
        return param_2;
      }
      if ((local_28[0] >> 9 & 1) != 0) {
        *local_20 = *local_20 + -1;
        if (*local_20 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar4 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if (((uVar4 != 0xb) && (uVar4 != 0xc)) && (local_18 = local_10, 1 < uVar4 - 0xd)) {
        return param_2;
      }
      if ((local_18 & 1) != 0) {
        return param_2;
      }
      if (local_18 == 0) {
        return param_2;
      }
      if ((*(uint *)(local_18 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    uVar4 = local_28[0] & 0x1f;
    if (9 < uVar4) {
      if ((local_28[0] >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          piVar1 = (int *)(local_18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if (((((uVar4 == 0xb) || (uVar4 == 0xc)) || (local_18 = local_10, uVar4 - 0xd < 2)) &&
                 (((local_18 & 1) == 0 && (local_18 != 0)))) &&
                ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_20 = *local_20 + -1;
        if (*local_20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    break;
  case 10:
    lVar2 = *(longlong *)(param_1 + 4);
    if ((lVar2 != 0) && (lVar2 != *(longlong *)(lVar2 + 8) + 0x80)) {
      FUN_14360f380(param_1,local_res8,&local_res20);
      if (local_res8[0] == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar4 = FUN_14360f460(local_res20);
      *param_3 = uVar4;
      break;
    }
  case 0:
  case 5:
switchD_143590eee_caseD_0:
    *param_3 = 0;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143591190 FUN_143591190 body=82 status=ok
// SIG undefined FUN_143591190(void)

undefined1 * FUN_143591190(undefined8 param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  *param_2 = 1;
  pcVar1 = (char *)FUN_143590eb0(param_1,local_res10,local_res18);
  if (*pcVar1 != '\0') {
    FUN_143614720(param_1,local_res18[0]);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435911f0 FUN_1435911f0 body=1471 status=ok
// SIG undefined FUN_1435911f0(void)

undefined1 * FUN_1435911f0(uint *param_1,undefined1 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint local_res8 [2];
  undefined1 *local_res10;
  ulonglong local_res18;
  uint local_458 [2];
  int *local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined1 local_418 [1024];
  
  lVar6 = *(longlong *)(*param_3 + 8);
  local_res10 = param_2;
  switch(*param_1 & 0x1f) {
  case 0:
    lVar11 = 9;
    pcVar8 = "undefined";
    goto LAB_14359177c;
  case 1:
    pcVar8 = "false";
    lVar11 = 5 - (ulonglong)((char)param_1[4] != '\0');
    if ((char)param_1[4] != '\0') {
      pcVar8 = "true";
    }
    goto LAB_14359177c;
  case 2:
    local_res8[0] = param_1[4];
    FUN_1432c2f70(&local_res18);
    local_430 = local_430 & 0xffffffff00000000;
    uStack_428 = &local_res18;
    FUN_1433561d0(local_418,&local_430);
    FUN_1433563e0(local_418,&DAT_145b198a0);
    FUN_143603e10(local_418,local_res8);
    Scaleform::MsgFormat::FinishFormatD(local_418);
    FUN_1433562f0(local_418);
    lVar6 = FUN_143360a90(lVar6,(longlong)(local_res18 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res18 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
    piVar1 = (int *)(*param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_3 = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar6);
    }
    iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar4 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
    }
    break;
  case 3:
    local_res8[0] = param_1[4];
    FUN_1432c2f70(&local_res18);
    local_430 = local_430 & 0xffffffff00000000;
    uStack_428 = &local_res18;
    FUN_1433561d0(local_418,&local_430);
    FUN_1433563e0(local_418,&DAT_145b198a0);
    FUN_1432edfd0(local_418,local_res8);
    Scaleform::MsgFormat::FinishFormatD(local_418);
    FUN_1433562f0(local_418);
    lVar6 = FUN_143360a90(lVar6,(longlong)(local_res18 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res18 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
    piVar1 = (int *)(*param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_3 = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar6);
    }
    iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar4 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
    }
    break;
  case 4:
    uVar7 = FUN_1435ff9f0(local_458,0x28,*(undefined8 *)(param_1 + 4));
    lVar11 = FUN_143360a90(lVar6,local_458,uVar7);
    goto LAB_14359178a;
  case 5:
  case 7:
  case 0xd:
  case 0xe:
    lVar6 = FUN_143360950(lVar6,"function Function() {}",0x16);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    piVar1 = (int *)(*param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_3 = lVar6;
    break;
  case 8:
  case 9:
    lVar11 = lVar6 + 0x48;
    goto LAB_14359178a;
  case 10:
    lVar11 = *(longlong *)(param_1 + 4);
    if ((lVar11 == 0) || (lVar11 == *(longlong *)(lVar11 + 8) + 0x80)) goto LAB_14359176f;
    goto LAB_14359178a;
  case 0xb:
    FUN_143499eb0(param_3,*(longlong *)(param_1 + 4) + 0x38);
    break;
  case 0xc:
    cVar3 = FUN_14353ffc0(param_1);
    if (cVar3 == '\0') {
      local_458[0] = 0;
      local_450 = (int *)0x0;
      local_res18 = *(ulonglong *)(param_1 + 4);
      if (local_res18 == 0) {
        uVar9 = FUN_143360950(lVar6,&DAT_145af9634,4);
        local_430._0_4_ = (undefined4)uVar9;
        local_430._4_4_ = (undefined4)(uVar9 >> 0x20);
        *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
        local_458[0] = local_458[0] & 0xffffffea | 10;
        local_448 = (undefined4)local_430;
        uStack_444 = local_430._4_4_;
        uStack_440 = (undefined4)uStack_428;
        uStack_43c = uStack_428._4_4_;
        local_430 = uVar9;
      }
      else {
        pcVar8 = (char *)FUN_1435b0690(local_res18,local_res8,local_458,2);
        if (*pcVar8 == '\0') {
          FUN_1435cbf30(*(undefined8 *)(*(longlong *)(local_res18 + 0x28) + 0x98));
          *local_res10 = 0;
          puVar2 = local_res10;
          goto joined_r0x00014359165e;
        }
      }
      if (((local_458[0] & 0x1f) < 5) || ((local_458[0] & 0x1f) == 10)) {
        pcVar8 = (char *)FUN_1435911f0(local_458,local_res8,param_3);
        if (*pcVar8 != '\0') {
          uVar5 = local_458[0] & 0x1f;
          if (9 < uVar5) {
            if ((local_458[0] >> 9 & 1) == 0) {
              if (uVar5 == 10) {
                piVar1 = (int *)(CONCAT44(uStack_444,local_448) + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else {
                if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
                  uVar9 = CONCAT44(uStack_444,local_448);
                }
                else {
                  if (1 < uVar5 - 0xd) break;
                  uVar9 = CONCAT44(uStack_43c,uStack_440);
                }
                if ((((uVar9 & 1) == 0) && (uVar9 != 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)
                   ) {
                  *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
                  FUN_1434ef880();
                }
              }
            }
            else {
              *local_450 = *local_450 + -1;
              if (*local_450 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
          break;
        }
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x28) + 0x98);
        uVar10 = FUN_1435c8e40(&local_430,0x41a,uVar7);
        FUN_1435ccf60(uVar7,uVar10,&DAT_145b155b0);
        piVar1 = (int *)((longlong)uStack_428 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *local_res10 = 0;
      puVar2 = local_res10;
joined_r0x00014359165e:
      uVar5 = local_458[0] & 0x1f;
      if (uVar5 < 10) {
        return puVar2;
      }
      local_res10 = puVar2;
      if ((local_458[0] >> 9 & 1) != 0) {
        *local_450 = *local_450 + -1;
        if (*local_450 != 0) {
          return puVar2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return puVar2;
      }
      if (uVar5 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_444,local_448) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return puVar2;
        }
        FUN_14335f920();
        return puVar2;
      }
      if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
        uVar9 = CONCAT44(uStack_444,local_448);
      }
      else {
        if (1 < uVar5 - 0xd) {
          return puVar2;
        }
        uVar9 = CONCAT44(uStack_43c,uStack_440);
      }
      if ((uVar9 & 1) != 0) {
        return puVar2;
      }
      if (uVar9 == 0) {
        return puVar2;
      }
      if ((*(uint *)(uVar9 + 8) & 0x3fffff) == 0) {
        return puVar2;
      }
      *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
      FUN_1434ef880();
      return puVar2;
    }
LAB_14359176f:
    pcVar8 = "null";
    lVar11 = 4;
LAB_14359177c:
    lVar11 = FUN_143360950(lVar6,pcVar8,lVar11,0);
LAB_14359178a:
    FUN_143361630(param_3,lVar11);
  }
  *local_res10 = 1;
  return local_res10;
}



// FUNCTION 143591800 FUN_143591800 body=1051 status=ok
// SIG undefined FUN_143591800(void)

undefined1 * FUN_143591800(uint *param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  ulonglong local_res20;
  uint local_458 [2];
  int *local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined1 local_418 [1024];
  
  switch(*param_1 & 0x1f) {
  case 0:
    pcVar7 = "undefined";
    break;
  case 1:
    pcVar7 = "false";
    if ((char)param_1[4] != '\0') {
      pcVar7 = &DAT_145af3900;
    }
    break;
  case 2:
    local_res8[0] = param_1[4];
    FUN_1432c2f70(&local_res20);
    local_430 = local_430 & 0xffffffff00000000;
    uStack_428 = &local_res20;
    FUN_1433561d0(local_418,&local_430);
    FUN_1433563e0(local_418,&DAT_145b198a0);
    FUN_143603e10(local_418,local_res8);
    goto LAB_1435918d0;
  case 3:
    local_res8[0] = param_1[4];
    FUN_1432c2f70(&local_res20);
    local_430 = local_430 & 0xffffffff00000000;
    uStack_428 = &local_res20;
    FUN_1433561d0(local_418,&local_430);
    FUN_1433563e0(local_418,&DAT_145b198a0);
    FUN_1432edfd0(local_418,local_res8);
LAB_1435918d0:
    Scaleform::MsgFormat::FinishFormatD(local_418);
    FUN_1433562f0(local_418);
    Scaleform::StringBuffer::AppendString
              (param_3,(longlong)(local_res20 & 0xfffffffffffffffc) + 0xc,
               *(ulonglong *)(local_res20 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
    goto switchD_143591842_caseD_6;
  case 4:
    uVar8 = FUN_1435ff9f0(local_458,0x28,*(undefined8 *)(param_1 + 4));
    pcVar7 = (char *)local_458;
    goto LAB_143591bfa;
  case 5:
  case 7:
  case 0xd:
  case 0xe:
    pcVar7 = "function Function() {}";
    break;
  default:
    goto switchD_143591842_caseD_6;
  case 10:
    puVar3 = *(undefined8 **)(param_1 + 4);
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)(puVar3[1] + 0x80)))
    goto LAB_143591bef;
    uVar8 = (ulonglong)*(uint *)(puVar3 + 4);
    pcVar7 = (char *)*puVar3;
    goto LAB_143591bfa;
  case 0xb:
    pcVar7 = (char *)**(undefined8 **)(*(longlong *)(param_1 + 4) + 0x38);
    break;
  case 0xc:
    cVar4 = FUN_14353ffc0(param_1);
    if (cVar4 == '\0') {
      lVar2 = *(longlong *)(param_1 + 4);
      local_458[0] = 0;
      local_450 = (int *)0x0;
      if (lVar2 == 0) {
        uVar8 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x98) + 0x10) + 0x218)
                              ,&DAT_145af9634,4);
        local_430._0_4_ = (undefined4)uVar8;
        local_430._4_4_ = (undefined4)(uVar8 >> 0x20);
        *(int *)(uVar8 + 0x18) = *(int *)(uVar8 + 0x18) + 1;
        local_458[0] = local_458[0] & 0xffffffea | 10;
        local_448 = (undefined4)local_430;
        uStack_444 = local_430._4_4_;
        uStack_440 = (undefined4)uStack_428;
        uStack_43c = uStack_428._4_4_;
        local_430 = uVar8;
      }
      else {
        pcVar7 = (char *)FUN_1435b0690(lVar2,local_res8,local_458,2);
        if (*pcVar7 == '\0') {
          FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x98));
          goto LAB_143591a45;
        }
      }
      pcVar7 = (char *)FUN_143591800(local_458,local_res8,param_3);
      if (*pcVar7 == '\0') {
LAB_143591a45:
        uVar6 = local_458[0] & 0x1f;
        *param_2 = 0;
        if (uVar6 < 10) {
          return param_2;
        }
        if ((local_458[0] >> 9 & 1) != 0) {
          *local_450 = *local_450 + -1;
          if (*local_450 != 0) {
            return param_2;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return param_2;
        }
        if (uVar6 == 10) {
          piVar1 = (int *)(CONCAT44(uStack_444,local_448) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return param_2;
          }
          FUN_14335f920();
          return param_2;
        }
        if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          uVar8 = CONCAT44(uStack_444,local_448);
        }
        else {
          if (1 < uVar6 - 0xd) {
            return param_2;
          }
          uVar8 = CONCAT44(uStack_43c,uStack_440);
        }
        if ((uVar8 & 1) != 0) {
          return param_2;
        }
        if (uVar8 == 0) {
          return param_2;
        }
        if ((*(uint *)(uVar8 + 8) & 0x3fffff) == 0) {
          return param_2;
        }
        *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
        FUN_1434ef880();
        return param_2;
      }
      uVar6 = local_458[0] & 0x1f;
      if (9 < uVar6) {
        if ((local_458[0] >> 9 & 1) == 0) {
          if (uVar6 == 10) {
            piVar1 = (int *)(CONCAT44(uStack_444,local_448) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
              uVar8 = CONCAT44(uStack_444,local_448);
            }
            else {
              if (1 < uVar6 - 0xd) goto switchD_143591842_caseD_6;
              uVar8 = CONCAT44(uStack_43c,uStack_440);
            }
            if ((((uVar8 & 1) == 0) && (uVar8 != 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_450 = *local_450 + -1;
          if (*local_450 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      goto switchD_143591842_caseD_6;
    }
LAB_143591bef:
    pcVar7 = &DAT_145af9634;
  }
  uVar8 = 0xffffffffffffffff;
LAB_143591bfa:
  Scaleform::StringBuffer::AppendString(param_3,pcVar7,uVar8);
switchD_143591842_caseD_6:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143591c60 FUN_143591c60 body=197 status=ok
// SIG undefined FUN_143591c60(void)

undefined1 * FUN_143591c60(uint *param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  *param_2 = 1;
  local_res18[0] = *(longlong *)(param_3 + 0x218) + 0x48;
  piVar1 = (int *)(*(longlong *)(param_3 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar2 = (char *)FUN_1435911f0(param_1,local_res10,local_res18);
  if (*pcVar2 == '\0') {
    *param_2 = 0;
  }
  else {
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    if (9 < ((byte)*param_1 & 0x1f)) {
      if ((*param_1 >> 9 & 1) == 0) {
        FUN_1435920c0(param_1);
      }
      else {
        piVar1 = *(int **)(param_1 + 2);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *param_1 = *param_1 & 0xfffffde0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
    *param_1 = *param_1 & 0xffffffea;
    *param_1 = *param_1 | 10;
    local_18 = (uint)local_res18[0];
    uStack_14 = (uint)((ulonglong)local_res18[0] >> 0x20);
    param_1[4] = local_18;
    param_1[5] = uStack_14;
    param_1[6] = uStack_10;
    param_1[7] = uStack_c;
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 143591d60 FUN_143591d60 body=705 status=ok
// SIG undefined FUN_143591d60(void)

longlong FUN_143591d60(undefined8 param_1,uint *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bStackX_f;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  uVar6 = *param_2 & 0x1f;
  uVar3 = 0;
  switch(uVar6) {
  case 1:
    return (ulonglong)uVar6 + (ulonglong)((char)param_2[4] != '\0');
  case 2:
  case 3:
    lVar2 = 4;
    local_res10 = CONCAT44(local_res10._4_4_,param_2[4]);
    lVar4 = 0x1505;
    do {
      pbVar1 = &bStackX_f + lVar2;
      lVar2 = lVar2 + -1;
      lVar4 = lVar4 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    return (ulonglong)uVar6 + lVar4;
  case 4:
    lVar2 = 8;
    local_res10 = *(undefined8 *)(param_2 + 4);
    lVar4 = 0x1505;
    do {
      pbVar1 = &bStackX_f + lVar2;
      lVar2 = lVar2 + -1;
      lVar4 = lVar4 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    return (ulonglong)uVar6 + lVar4;
  case 5:
    lVar2 = 0x30;
    lVar4 = 0x1505;
    do {
      pbVar1 = (byte *)(*(longlong *)(param_2 + 4) + -1 + lVar2);
      lVar2 = lVar2 + -1;
      lVar4 = lVar4 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    return (ulonglong)uVar6 + lVar4;
  case 6:
    uVar3 = 0x1505;
    local_res10 = CONCAT44(local_res10._4_4_,param_2[4]);
    lVar2 = 4;
    uVar5 = 0x1505;
    local_res18[0] = *(undefined8 *)(param_2 + 6);
    do {
      pbVar1 = &bStackX_f + lVar2;
      lVar2 = lVar2 + -1;
      uVar5 = uVar5 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    lVar2 = 8;
    do {
      lVar4 = lVar2 + -1;
      lVar2 = lVar2 + -1;
      uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)((longlong)local_res18 + lVar4);
    } while (lVar2 != 0);
    return (ulonglong)uVar6 + (uVar3 ^ uVar5);
  case 7:
    uVar3 = 0x1505;
    local_res10 = CONCAT44(local_res10._4_4_,param_2[4]);
    lVar2 = 4;
    uVar5 = 0x1505;
    local_res18[0] = *(undefined8 *)(param_2 + 6);
    do {
      pbVar1 = &bStackX_f + lVar2;
      lVar2 = lVar2 + -1;
      uVar5 = uVar5 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    lVar2 = 8;
    do {
      lVar4 = lVar2 + -1;
      lVar2 = lVar2 + -1;
      uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)((longlong)local_res18 + lVar4);
    } while (lVar2 != 0);
    return (ulonglong)uVar6 + (uVar3 ^ uVar5);
  case 10:
    uVar3 = 0;
    if (*(longlong *)(param_2 + 4) != 0) {
      return (ulonglong)uVar6 + (ulonglong)(*(uint *)(*(longlong *)(param_2 + 4) + 0x1c) & 0xffffff)
      ;
    }
    break;
  case 0xb:
  case 0xc:
    if (*(longlong *)(param_2 + 4) != 0) {
      local_res10 = *(longlong *)(param_2 + 4);
      lVar2 = 8;
      lVar4 = 0x1505;
      do {
        pbVar1 = &bStackX_f + lVar2;
        lVar2 = lVar2 + -1;
        lVar4 = lVar4 * 0x1003f + (ulonglong)*pbVar1;
      } while (lVar2 != 0);
      return (ulonglong)uVar6 + lVar4;
    }
    break;
  case 0xd:
    uVar3 = 0x1505;
    lVar2 = 0x30;
    local_res10 = *(undefined8 *)(param_2 + 6);
    uVar5 = 0x1505;
    do {
      pbVar1 = (byte *)(*(longlong *)(param_2 + 4) + -1 + lVar2);
      lVar2 = lVar2 + -1;
      uVar5 = uVar5 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    lVar2 = 8;
    do {
      pbVar1 = &bStackX_f + lVar2;
      lVar2 = lVar2 + -1;
      uVar3 = uVar3 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    uVar3 = uVar3 ^ uVar5;
    break;
  case 0xe:
    uVar3 = 0x1505;
    local_res10 = CONCAT44(local_res10._4_4_,param_2[4]);
    lVar2 = 4;
    uVar5 = 0x1505;
    local_res18[0] = *(undefined8 *)(param_2 + 6);
    do {
      pbVar1 = &bStackX_f + lVar2;
      lVar2 = lVar2 + -1;
      uVar5 = uVar5 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    lVar2 = 8;
    do {
      lVar4 = lVar2 + -1;
      lVar2 = lVar2 + -1;
      uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)((longlong)local_res18 + lVar4);
    } while (lVar2 != 0);
    return (ulonglong)uVar6 + (uVar3 ^ uVar5);
  }
  return uVar6 + uVar3;
}



// FUNCTION 143592070 FUN_143592070 body=59 status=ok
// SIG undefined FUN_143592070(void)

void FUN_143592070(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 10) {
    *(int *)(*(longlong *)(param_1 + 4) + 0x18) = *(int *)(*(longlong *)(param_1 + 4) + 0x18) + 1;
  }
  else if (10 < uVar1) {
    if (uVar1 < 0xd) {
      lVar2 = *(longlong *)(param_1 + 4);
    }
    else {
      if (0xe < uVar1) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 6);
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      return;
    }
  }
  return;
}



// FUNCTION 1435920c0 FUN_1435920c0 body=107 status=ok
// SIG undefined FUN_1435920c0(void)

void FUN_1435920c0(uint *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong alStackX_8 [4];
  
  uVar4 = *param_1 & 0x1f;
  if (uVar4 == 10) {
    lVar3 = *(longlong *)(param_1 + 4);
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      lVar2 = *(longlong *)(lVar3 + 0x10);
      if ((lVar2 != lVar3) && (lVar2 != 0)) {
        piVar1 = (int *)(lVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      alStackX_8[0] = lVar3;
      FUN_1433612d0(*(longlong *)(lVar3 + 8) + 0x18,alStackX_8);
      FUN_143361710(*(undefined8 *)(lVar3 + 8),lVar3);
      return;
    }
  }
  else {
    if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
      uVar5 = *(ulonglong *)(param_1 + 4);
      if ((uVar5 & 1) != 0) {
        *(ulonglong *)(param_1 + 4) = uVar5 - 1;
        return;
      }
    }
    else {
      if (1 < uVar4 - 0xd) {
        return;
      }
      uVar5 = *(ulonglong *)(param_1 + 6);
      if ((uVar5 & 1) != 0) {
        *(ulonglong *)(param_1 + 6) = uVar5 - 1;
        return;
      }
    }
    if ((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
      FUN_1434ef880(uVar5);
      return;
    }
  }
  return;
}



// FUNCTION 143592140 FUN_143592140 body=7 status=ok
// SIG undefined FUN_143592140(void)

void FUN_143592140(longlong param_1)

{
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  return;
}



// FUNCTION 143592150 FUN_143592150 body=57 status=ok
// SIG undefined FUN_143592150(void)

void FUN_143592150(uint *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = *param_1 & 0xfffffde0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1435921c0 FUN_1435921c0 body=870 status=ok
// SIG undefined FUN_1435921c0(void)

undefined1 * FUN_1435921c0(uint *param_1,undefined1 *param_2,double *param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  uint local_res20 [2];
  ulonglong local_68;
  uint local_60 [2];
  int *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  if (param_4 == 10) {
    plVar2 = *(longlong **)(param_1 + 4);
    if (((plVar2 == (longlong *)0x0) || (plVar2 == (longlong *)(plVar2[1] + 0x80))) ||
       (uVar7 = *(uint *)(plVar2 + 4), uVar7 == 0)) {
LAB_14359238d:
      dVar12 = (double)Scaleform::GFx::NumberUtil::NaN();
      *param_3 = dVar12;
    }
    else {
      lVar3 = *plVar2;
      dVar12 = (double)FUN_143365480(lVar3,uVar7,local_res20);
      cVar4 = Scaleform::GFx::NumberUtil::IsNaN();
      if ((cVar4 == '\0') && (dVar12 != 0.0)) {
LAB_1435922e6:
        FUN_1432c2fb0(&local_68,(ulonglong)local_res20[0] + lVar3);
        uVar10 = (ulonglong)local_res20[0];
        iVar9 = uVar7 - local_res20[0];
        uVar5 = Scaleform::GFx::ASUtils::SkipWhiteSpace(&local_68);
        iVar9 = FUN_1433062a0(uVar5,lVar3 + uVar10,iVar9);
        iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_68 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar6 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68 & 0xfffffffffffffffc);
        }
        if (uVar7 <= local_res20[0] + iVar9) goto LAB_1435922c7;
        dVar12 = (double)Scaleform::GFx::NumberUtil::NaN();
        *param_3 = dVar12;
      }
      else {
        if (local_res20[0] == uVar7) goto LAB_14359238d;
        if (dVar12 != 0.0) {
LAB_1435922d1:
          dVar12 = (double)FUN_143364f60(lVar3,uVar7,0,local_res20);
          goto LAB_1435922e6;
        }
        FUN_1432c2fb0(&local_68,lVar3 + (ulonglong)local_res20[0]);
        uVar10 = (ulonglong)local_res20[0];
        iVar9 = uVar7 - local_res20[0];
        uVar5 = Scaleform::GFx::ASUtils::SkipWhiteSpace(&local_68);
        iVar9 = FUN_1433062a0(uVar5,lVar3 + uVar10,iVar9);
        uVar10 = local_68 & 0xfffffffffffffffc;
        iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
        if (iVar6 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
        }
        if (local_res20[0] + iVar9 < uVar7) goto LAB_1435922d1;
LAB_1435922c7:
        *param_3 = dVar12;
      }
    }
LAB_143592502:
    *param_2 = 1;
  }
  else {
    if ((*param_1 & 0x1f) == 0xc) {
      bVar11 = *(longlong *)(param_1 + 4) == 0;
LAB_143592386:
      if (bVar11) goto LAB_14359238d;
    }
    else if ((*param_1 & 0x1f) == 10) {
      bVar11 = *(longlong *)(param_1 + 4) == *(longlong *)(*(longlong *)(param_1 + 4) + 8) + 0x80;
      goto LAB_143592386;
    }
    local_60[0] = 0;
    local_58 = (int *)0x0;
    pcVar8 = (char *)FUN_1435908b0(param_1,local_res20,local_60);
    if (*pcVar8 == '\0') {
      uVar7 = local_60[0] & 0x1f;
    }
    else {
      FUN_14360f380(local_60,local_res20,param_3);
      uVar7 = local_60[0] & 0x1f;
      if ((char)local_res20[0] != '\0') {
        if (9 < uVar7) {
          if ((local_60[0] >> 9 & 1) == 0) {
            if (uVar7 == 10) {
              piVar1 = (int *)(local_50 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else if ((((uVar7 == 0xb) || (uVar7 == 0xc)) || (local_50 = local_48, uVar7 - 0xd < 2))
                    && ((((local_50 & 1) == 0 && (local_50 != 0)) &&
                        ((*(uint *)(local_50 + 8) & 0x3fffff) != 0)))) {
              *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *local_58 = *local_58 + -1;
            if (*local_58 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        goto LAB_143592502;
      }
    }
    *param_2 = 0;
    if (9 < uVar7) {
      if ((local_60[0] >> 9 & 1) == 0) {
        if (uVar7 == 10) {
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if (((((uVar7 == 0xb) || (uVar7 == 0xc)) || (local_50 = local_48, uVar7 - 0xd < 2)) &&
                 (((local_50 & 1) == 0 && (local_50 != 0)))) &&
                ((*(uint *)(local_50 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_58 = *local_58 + -1;
        if (*local_58 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 143592530 FUN_143592530 body=163 status=ok
// SIG undefined FUN_143592530(void)

ulonglong * FUN_143592530(ulonglong *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (((*param_2 & 0x1f) - 0xb < 2) && (*(ulonglong *)(param_2 + 4) != 0)) {
    if ((*param_2 & 0x1f) == 0xb) {
      uVar3 = 2;
    }
    uVar3 = uVar3 | *(ulonglong *)(param_2 + 4);
  }
  if (uVar3 != *param_1) {
    uVar1 = uVar3 & 0xfffffffffffffffc;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 0xfffffffffffffffd;
      if ((uVar1 & 1) != 0) {
        *param_1 = ((ulonglong)((uint)*param_1 & 2) - 1) + uVar2;
        *param_1 = uVar3;
        return param_1;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_1 = uVar3;
  }
  return param_1;
}


