// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143621520 FUN_143621520 body=96 status=ok
// SIG undefined FUN_143621520(void)

void FUN_143621520(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143621590 FUN_143621590 body=96 status=ok
// SIG undefined FUN_143621590(void)

void FUN_143621590(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143621600 FUN_143621600 body=77 status=ok
// SIG undefined FUN_143621600(void)

void FUN_143621600(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_14361fc60(param_1 + 0x40,&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143621660 FUN_143621660 body=41 status=ok
// SIG undefined FUN_143621660(void)

void FUN_143621660(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620470(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1436216b0 FUN_1436216b0 body=26 status=ok
// SIG undefined FUN_1436216b0(void)

void FUN_1436216b0(longlong param_1)

{
  FUN_143629ac0(param_1 + 0x40);
  return;
}



// FUNCTION 1436216d0 FUN_1436216d0 body=123 status=ok
// SIG undefined FUN_1436216d0(void)

void FUN_1436216d0(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_1436353f0(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x230));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143621760 FUN_143621760 body=41 status=ok
// SIG undefined FUN_143621760(void)

void FUN_143621760(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620b50(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143621790 FUN_143621790 body=123 status=ok
// SIG undefined FUN_143621790(void)

void FUN_143621790(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_143636960(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x230));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143621820 FUN_143621820 body=26 status=ok
// SIG undefined FUN_143621820(void)

void FUN_143621820(longlong param_1)

{
  FUN_1436272e0(param_1 + 0x40);
  return;
}



// FUNCTION 143621840 FUN_143621840 body=26 status=ok
// SIG undefined FUN_143621840(void)

void FUN_143621840(longlong param_1)

{
  FUN_143628570(param_1 + 0x40);
  return;
}



// FUNCTION 1436218d0 FUN_1436218d0 body=26 status=ok
// SIG undefined FUN_1436218d0(void)

void FUN_1436218d0(longlong param_1)

{
  FUN_14362ca40(param_1 + 0x40);
  return;
}



// FUNCTION 143621910 FUN_143621910 body=26 status=ok
// SIG undefined FUN_143621910(void)

void FUN_143621910(longlong param_1)

{
  FUN_143630320(param_1 + 0x40);
  return;
}



// FUNCTION 1436219e0 FUN_1436219e0 body=42 status=ok
// SIG undefined FUN_1436219e0(void)

undefined8 * FUN_1436219e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143629ac0(param_1 + 0x40);
  return param_2;
}



// FUNCTION 143621a10 FUN_143621a10 body=42 status=ok
// SIG undefined FUN_143621a10(void)

undefined8 * FUN_143621a10(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143628570(param_1 + 0x40);
  return param_2;
}



// FUNCTION 143621a40 FUN_143621a40 body=82 status=ok
// SIG undefined FUN_143621a40(void)

undefined8 * FUN_143621a40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  *param_2 = 0;
  lVar3 = *(longlong *)(param_1 + 0x60) + -1;
  if (0 < lVar3) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x58);
      uVar1 = *(undefined4 *)(lVar2 + lVar4 * 4);
      *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar3 * 4);
      lVar4 = lVar4 + 1;
      *(undefined4 *)(lVar2 + lVar3 * 4) = uVar1;
      lVar3 = lVar3 + -1;
    } while (lVar4 < lVar3);
  }
  FUN_1434f0700(param_2,param_1);
  return param_2;
}



// FUNCTION 143621aa0 FUN_143621aa0 body=37 status=ok
// SIG undefined FUN_143621aa0(void)

undefined8 * FUN_143621aa0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  FUN_14362e290(param_1 + 0x40,param_2,param_3,param_1);
  return param_2;
}



// FUNCTION 143621ad0 FUN_143621ad0 body=51 status=ok
// SIG undefined FUN_143621ad0(void)

undefined8 * FUN_143621ad0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b4e818;
  *(undefined4 *)(param_1 + 0x12) = 0xc;
  return param_1;
}



// FUNCTION 143621b10 FUN_143621b10 body=214 status=ok
// SIG undefined FUN_143621b10(void)

void FUN_143621b10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar2 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,param_3);
    *puVar2 = &PTR_FUN_145b4e758;
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x48);
    puVar2[10] = *(longlong *)(param_3 + 0x98);
    puVar2[8] = &PTR_FUN_145b4e730;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar2);
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



// FUNCTION 143621bf0 FUN_143621bf0 body=43 status=ok
// SIG undefined FUN_143621bf0(void)

undefined8 * FUN_143621bf0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0xc;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143621c30 FUN_143621c30 body=255 status=ok
// SIG undefined FUN_143621c30(void)

undefined8 * FUN_143621c30(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e508);
    *(undefined4 *)(puVar3 + 0x12) = 0xc;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e508);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b4e818;
    *(undefined4 *)(puVar3 + 0x12) = 0xc;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b4e890;
  }
  return param_1;
}



// FUNCTION 143621d40 FUN_143621d40 body=33 status=ok
// SIG undefined FUN_143621d40(void)

undefined8 * FUN_143621d40(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4e890;
  return param_1;
}



// FUNCTION 143621d70 FUN_143621d70 body=393 status=ok
// SIG undefined FUN_143621d70(void)

void FUN_143621d70(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint *param_5
                  )

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*param_4 != 1) {
    uVar9 = FUN_1435c8e40(local_18,0x458,uVar2);
    FUN_1435cbdf0(uVar2,uVar9);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar6 = *param_5 & 0x1f;
  if (uVar6 != 0) {
    if (uVar6 == 0xc) {
      bVar10 = *(longlong *)(param_5 + 4) == 0;
    }
    else {
      if (uVar6 != 10) goto LAB_143621dd2;
      bVar10 = *(longlong *)(param_5 + 4) == *(longlong *)(*(longlong *)(param_5 + 4) + 8) + 0x80;
    }
    if (!bVar10) {
LAB_143621dd2:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
      lVar7 = FUN_1435caba0(uVar2,param_5);
      if (lVar7 == lVar3) {
        FUN_143590140(param_3,param_5);
      }
      else {
        puVar8 = (ulonglong *)FUN_143635150(local_res8,lVar3);
        uVar4 = *puVar8;
        cVar5 = FUN_143620380(uVar4 + 0x40,param_5,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(uVar4 + 0x28) + 0x98) + 0x230));
        if (cVar5 == '\0') {
          uVar9 = FUN_1435c8e40(local_18,0x40a,uVar2);
          FUN_1435cbe70(uVar2,uVar9);
          piVar1 = (int *)(local_10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_1435903c0(param_3,uVar4);
        }
        if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      return;
    }
  }
  FUN_143590140(param_3,param_5);
  return;
}



// FUNCTION 143621f00 FUN_143621f00 body=93 status=ok
// SIG undefined FUN_143621f00(void)

undefined8 * FUN_143621f00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4e990;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR_FUN_145b4e968;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  return param_1;
}



// FUNCTION 143621f70 FUN_143621f70 body=145 status=ok
// SIG undefined FUN_143621f70(void)

undefined8 *
FUN_143621f70(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [8];
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4e990;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR_FUN_145b4e968;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  pcVar2 = (char *)FUN_143636070(param_1 + 8,local_res18,param_3);
  if (*pcVar2 != '\0') {
    *(undefined1 *)(param_1 + 9) = param_4;
  }
  return param_1;
}



// FUNCTION 143622010 FUN_143622010 body=208 status=ok
// SIG undefined FUN_143622010(void)

void FUN_143622010(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  if (param_2 != 0) {
    pcVar4 = (char *)FUN_143590eb0(param_3,local_res10,local_res20);
    if (*pcVar4 == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      uVar5 = FUN_1435c8e40(local_38,0x466,uVar2);
      FUN_1435cbdf0(uVar2,uVar5);
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
    }
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    FUN_1434f0030(param_1 + 0x58,(ulonglong)local_res20[0]);
    for (; uVar6 < local_res20[0]; uVar6 = uVar6 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + uVar6 * 4) = 0;
    }
  }
  if (1 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x20);
    *(undefined1 *)(param_1 + 0x48) = uVar3;
  }
  return;
}



// FUNCTION 1436220f0 FUN_1436220f0 body=130 status=ok
// SIG undefined FUN_1436220f0(void)

void FUN_1436220f0(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *param_2;
  bVar2 = (byte)uVar1 & 0x1f;
  if (param_3 != 0) {
    if (9 < bVar2) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe3;
    *param_2 = *param_2 | 3;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,param_3 + -1);
    *(undefined8 *)(param_2 + 6) = uStack_10;
    return;
  }
  if (9 < bVar2) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 143622180 FUN_143622180 body=106 status=ok
// SIG undefined FUN_143622180(void)

int * FUN_143622180(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  iVar2 = (**(code **)(lVar1 + 8))(param_1 + 0x40);
  if ((longlong)((ulonglong)param_3 - 1) < 0) {
    param_3 = 0;
    if (iVar2 == 0) {
      return param_2;
    }
  }
  else if ((ulonglong)(iVar2 - 1) <= (ulonglong)param_3 - 1) {
    return param_2;
  }
  *param_2 = param_3 + 1;
  return param_2;
}



// FUNCTION 1436221f0 FUN_1436221f0 body=138 status=ok
// SIG undefined FUN_1436221f0(void)

undefined8 FUN_1436221f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435aff50(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_143516580(param_1 + 0x40,param_2,local_18[0],param_4,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x238));
  }
  return param_2;
}



// FUNCTION 143622280 FUN_143622280 body=112 status=ok
// SIG undefined FUN_143622280(void)

undefined8 FUN_143622280(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0]);
  }
  return param_2;
}



// FUNCTION 143622300 FUN_143622300 body=202 status=ok
// SIG undefined FUN_143622300(void)

undefined1 * FUN_143622300(longlong param_1,undefined1 *param_2,ulonglong param_3,uint *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  longlong lStack_10;
  
  if ((-1 < (longlong)param_3) && (*(uint *)(param_1 + 0x60) <= param_3)) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x465,uVar3);
    FUN_1435cbdf0(uVar3,uVar4);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  if ((uint)param_3 < *(uint *)(param_1 + 0x60)) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (param_3 & 0xffffffff) * 4);
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,uVar2);
    *(longlong *)(param_4 + 6) = lStack_10;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1436223d0 FUN_1436223d0 body=116 status=ok
// SIG undefined FUN_1436223d0(void)

undefined8 FUN_1436223d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char local_res18 [8];
  undefined4 local_res20 [2];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] != '\0') {
    FUN_143635eb0(param_1 + 0x40,param_2,local_res20[0]);
    return param_2;
  }
  FUN_1435b0650(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143622450 FUN_143622450 body=110 status=ok
// SIG undefined FUN_143622450(void)

ulonglong FUN_143622450(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)(local_res20[0] < *(uint *)(param_1 + 0x60));
  }
  uVar1 = FUN_1435b0590(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 1436224d0 deltaGet body=6 status=ok
// SIG undefined deltaGet(void)

void Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet
               (longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 1436224e0 FUN_1436224e0 body=26 status=ok
// SIG undefined FUN_1436224e0(void)

void FUN_1436224e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  
  FUN_143636070(param_1 + 0x40,local_res18,param_3);
  return;
}



// FUNCTION 143622510 FUN_143622510 body=7 status=ok
// SIG undefined FUN_143622510(void)

void FUN_143622510(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143622520 FUN_143622520 body=96 status=ok
// SIG undefined FUN_143622520(void)

void FUN_143622520(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143622590 FUN_143622590 body=96 status=ok
// SIG undefined FUN_143622590(void)

void FUN_143622590(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143622600 FUN_143622600 body=77 status=ok
// SIG undefined FUN_143622600(void)

void FUN_143622600(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_14361fc60(param_1 + 0x40,&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143622660 FUN_143622660 body=41 status=ok
// SIG undefined FUN_143622660(void)

void FUN_143622660(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620470(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1436226b0 FUN_1436226b0 body=26 status=ok
// SIG undefined FUN_1436226b0(void)

void FUN_1436226b0(longlong param_1)

{
  FUN_14362a4d0(param_1 + 0x40);
  return;
}



// FUNCTION 1436226d0 FUN_1436226d0 body=123 status=ok
// SIG undefined FUN_1436226d0(void)

void FUN_1436226d0(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_1436353f0(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x238));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143622760 FUN_143622760 body=41 status=ok
// SIG undefined FUN_143622760(void)

void FUN_143622760(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620b50(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143622790 FUN_143622790 body=123 status=ok
// SIG undefined FUN_143622790(void)

void FUN_143622790(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_143636960(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x238));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143622820 FUN_143622820 body=26 status=ok
// SIG undefined FUN_143622820(void)

void FUN_143622820(longlong param_1)

{
  FUN_143627760(param_1 + 0x40);
  return;
}



// FUNCTION 143622840 FUN_143622840 body=26 status=ok
// SIG undefined FUN_143622840(void)

void FUN_143622840(longlong param_1)

{
  FUN_143628d80(param_1 + 0x40);
  return;
}



// FUNCTION 1436228d0 FUN_1436228d0 body=26 status=ok
// SIG undefined FUN_1436228d0(void)

void FUN_1436228d0(longlong param_1)

{
  FUN_14362cdf0(param_1 + 0x40);
  return;
}



// FUNCTION 143622910 FUN_143622910 body=26 status=ok
// SIG undefined FUN_143622910(void)

void FUN_143622910(longlong param_1)

{
  FUN_1436306c0(param_1 + 0x40);
  return;
}



// FUNCTION 1436229e0 FUN_1436229e0 body=42 status=ok
// SIG undefined FUN_1436229e0(void)

undefined8 * FUN_1436229e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14362a4d0(param_1 + 0x40);
  return param_2;
}



// FUNCTION 143622a10 FUN_143622a10 body=42 status=ok
// SIG undefined FUN_143622a10(void)

undefined8 * FUN_143622a10(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143628d80(param_1 + 0x40);
  return param_2;
}



// FUNCTION 143622a40 FUN_143622a40 body=82 status=ok
// SIG undefined FUN_143622a40(void)

undefined8 * FUN_143622a40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  *param_2 = 0;
  lVar3 = *(longlong *)(param_1 + 0x60) + -1;
  if (0 < lVar3) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x58);
      uVar1 = *(undefined4 *)(lVar2 + lVar4 * 4);
      *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar3 * 4);
      lVar4 = lVar4 + 1;
      *(undefined4 *)(lVar2 + lVar3 * 4) = uVar1;
      lVar3 = lVar3 + -1;
    } while (lVar4 < lVar3);
  }
  FUN_1434f0700(param_2,param_1);
  return param_2;
}



// FUNCTION 143622aa0 FUN_143622aa0 body=37 status=ok
// SIG undefined FUN_143622aa0(void)

undefined8 * FUN_143622aa0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  FUN_14362f610(param_1 + 0x40,param_2,param_3,param_1);
  return param_2;
}



// FUNCTION 143622ad0 FUN_143622ad0 body=51 status=ok
// SIG undefined FUN_143622ad0(void)

undefined8 * FUN_143622ad0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b4ea50;
  *(undefined4 *)(param_1 + 0x12) = 0xd;
  return param_1;
}



// FUNCTION 143622b10 FUN_143622b10 body=214 status=ok
// SIG undefined FUN_143622b10(void)

void FUN_143622b10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar2 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,param_3);
    *puVar2 = &PTR_FUN_145b4e990;
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x48);
    puVar2[10] = *(longlong *)(param_3 + 0x98);
    puVar2[8] = &PTR_FUN_145b4e968;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar2);
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



// FUNCTION 143622bf0 FUN_143622bf0 body=43 status=ok
// SIG undefined FUN_143622bf0(void)

undefined8 * FUN_143622bf0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0xd;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143622c30 FUN_143622c30 body=255 status=ok
// SIG undefined FUN_143622c30(void)

undefined8 * FUN_143622c30(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e4a8);
    *(undefined4 *)(puVar3 + 0x12) = 0xd;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e4a8);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b4ea50;
    *(undefined4 *)(puVar3 + 0x12) = 0xd;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b4eac8;
  }
  return param_1;
}



// FUNCTION 143622d40 FUN_143622d40 body=33 status=ok
// SIG undefined FUN_143622d40(void)

undefined8 * FUN_143622d40(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4eac8;
  return param_1;
}



// FUNCTION 143622d70 FUN_143622d70 body=393 status=ok
// SIG undefined FUN_143622d70(void)

void FUN_143622d70(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint *param_5
                  )

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*param_4 != 1) {
    uVar9 = FUN_1435c8e40(local_18,0x458,uVar2);
    FUN_1435cbdf0(uVar2,uVar9);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar6 = *param_5 & 0x1f;
  if (uVar6 != 0) {
    if (uVar6 == 0xc) {
      bVar10 = *(longlong *)(param_5 + 4) == 0;
    }
    else {
      if (uVar6 != 10) goto LAB_143622dd2;
      bVar10 = *(longlong *)(param_5 + 4) == *(longlong *)(*(longlong *)(param_5 + 4) + 8) + 0x80;
    }
    if (!bVar10) {
LAB_143622dd2:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
      lVar7 = FUN_1435caba0(uVar2,param_5);
      if (lVar7 == lVar3) {
        FUN_143590140(param_3,param_5);
      }
      else {
        puVar8 = (ulonglong *)FUN_143635290(local_res8,lVar3);
        uVar4 = *puVar8;
        cVar5 = FUN_143620380(uVar4 + 0x40,param_5,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(uVar4 + 0x28) + 0x98) + 0x238));
        if (cVar5 == '\0') {
          uVar9 = FUN_1435c8e40(local_18,0x40a,uVar2);
          FUN_1435cbe70(uVar2,uVar9);
          piVar1 = (int *)(local_10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_1435903c0(param_3,uVar4);
        }
        if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      return;
    }
  }
  FUN_143590140(param_3,param_5);
  return;
}



// FUNCTION 143622f00 FUN_143622f00 body=93 status=ok
// SIG undefined FUN_143622f00(void)

undefined8 * FUN_143622f00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4ebc8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR_FUN_145b4eba0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  return param_1;
}



// FUNCTION 143622f70 FUN_143622f70 body=145 status=ok
// SIG undefined FUN_143622f70(void)

undefined8 *
FUN_143622f70(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [8];
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4ebc8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR_FUN_145b4eba0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  pcVar2 = (char *)FUN_143555f90(param_1 + 8,local_res18,param_3);
  if (*pcVar2 != '\0') {
    *(undefined1 *)(param_1 + 9) = param_4;
  }
  return param_1;
}



// FUNCTION 143623010 FUN_143623010 body=107 status=ok
// SIG undefined FUN_143623010(void)

void FUN_143623010(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_143590eb0(param_3,local_res10,local_res20);
    if (*pcVar1 == '\0') {
      return;
    }
    pcVar1 = (char *)FUN_143555f90(param_1 + 0x40,local_res10,local_res20[0]);
    if (*pcVar1 == '\0') {
      return;
    }
  }
  if (1 < param_2) {
    uVar2 = FUN_1435909c0(param_3 + 0x20);
    *(undefined1 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 143623090 FUN_143623090 body=130 status=ok
// SIG undefined FUN_143623090(void)

void FUN_143623090(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *param_2;
  bVar2 = (byte)uVar1 & 0x1f;
  if (param_3 != 0) {
    if (9 < bVar2) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe3;
    *param_2 = *param_2 | 3;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,param_3 + -1);
    *(undefined8 *)(param_2 + 6) = uStack_10;
    return;
  }
  if (9 < bVar2) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 143623120 FUN_143623120 body=106 status=ok
// SIG undefined FUN_143623120(void)

int * FUN_143623120(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  iVar2 = (**(code **)(lVar1 + 8))(param_1 + 0x40);
  if ((longlong)((ulonglong)param_3 - 1) < 0) {
    param_3 = 0;
    if (iVar2 == 0) {
      return param_2;
    }
  }
  else if ((ulonglong)(iVar2 - 1) <= (ulonglong)param_3 - 1) {
    return param_2;
  }
  *param_2 = param_3 + 1;
  return param_2;
}



// FUNCTION 143623190 FUN_143623190 body=138 status=ok
// SIG undefined FUN_143623190(void)

undefined8 FUN_143623190(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435aff50(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_1435565e0(param_1 + 0x40,param_2,local_18[0],param_4,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x228));
  }
  return param_2;
}



// FUNCTION 143623220 FUN_143623220 body=112 status=ok
// SIG undefined FUN_143623220(void)

undefined8 FUN_143623220(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0]);
  }
  return param_2;
}



// FUNCTION 1436232a0 FUN_1436232a0 body=206 status=ok
// SIG undefined FUN_1436232a0(void)

undefined1 * FUN_1436232a0(longlong param_1,undefined1 *param_2,ulonglong param_3,uint *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28 [8];
  longlong lStack_20;
  
  if ((-1 < (longlong)param_3) && (*(uint *)(param_1 + 0x60) <= param_3)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_28,0x465,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(lStack_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  if ((uint)param_3 < *(uint *)(param_1 + 0x60)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (param_3 & 0xffffffff) * 8);
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
    *(longlong *)(param_4 + 6) = lStack_20;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143623380 FUN_143623380 body=116 status=ok
// SIG undefined FUN_143623380(void)

undefined8 FUN_143623380(longlong param_1,undefined8 param_2,longlong param_3)

{
  char local_res18 [8];
  undefined4 local_res20 [2];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] != '\0') {
    FUN_143635f30(param_1 + 0x40,param_2,local_res20[0]);
    return param_2;
  }
  FUN_1435b0650(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143623400 FUN_143623400 body=110 status=ok
// SIG undefined FUN_143623400(void)

ulonglong FUN_143623400(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)(local_res20[0] < *(uint *)(param_1 + 0x60));
  }
  uVar1 = FUN_1435b0590(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 143623480 deltaGet body=6 status=ok
// SIG undefined deltaGet(void)

void Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet
               (longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143623490 FUN_143623490 body=26 status=ok
// SIG undefined FUN_143623490(void)

void FUN_143623490(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  
  FUN_143555f90(param_1 + 0x40,local_res18,param_3);
  return;
}



// FUNCTION 1436234c0 FUN_1436234c0 body=7 status=ok
// SIG undefined FUN_1436234c0(void)

void FUN_1436234c0(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 1436234d0 FUN_1436234d0 body=96 status=ok
// SIG undefined FUN_1436234d0(void)

void FUN_1436234d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143623540 FUN_143623540 body=96 status=ok
// SIG undefined FUN_143623540(void)

void FUN_143623540(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436235b0 FUN_1436235b0 body=77 status=ok
// SIG undefined FUN_1436235b0(void)

void FUN_1436235b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_14361fc60(param_1 + 0x40,&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143623610 FUN_143623610 body=41 status=ok
// SIG undefined FUN_143623610(void)

void FUN_143623610(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620470(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143623660 FUN_143623660 body=26 status=ok
// SIG undefined FUN_143623660(void)

void FUN_143623660(longlong param_1)

{
  FUN_143629610(param_1 + 0x40);
  return;
}



// FUNCTION 143623680 FUN_143623680 body=123 status=ok
// SIG undefined FUN_143623680(void)

void FUN_143623680(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_1436355b0(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x228));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143623710 FUN_143623710 body=41 status=ok
// SIG undefined FUN_143623710(void)

void FUN_143623710(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620b50(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143623740 FUN_143623740 body=123 status=ok
// SIG undefined FUN_143623740(void)

void FUN_143623740(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_143636ad0(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x228));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1436237d0 FUN_1436237d0 body=26 status=ok
// SIG undefined FUN_1436237d0(void)

void FUN_1436237d0(longlong param_1)

{
  FUN_1436270c0(param_1 + 0x40);
  return;
}



// FUNCTION 1436237f0 FUN_1436237f0 body=26 status=ok
// SIG undefined FUN_1436237f0(void)

void FUN_1436237f0(longlong param_1)

{
  FUN_143628180(param_1 + 0x40);
  return;
}



// FUNCTION 143623880 FUN_143623880 body=26 status=ok
// SIG undefined FUN_143623880(void)

void FUN_143623880(longlong param_1)

{
  FUN_14362c880(param_1 + 0x40);
  return;
}



// FUNCTION 1436238c0 FUN_1436238c0 body=26 status=ok
// SIG undefined FUN_1436238c0(void)

void FUN_1436238c0(longlong param_1)

{
  FUN_143630150(param_1 + 0x40);
  return;
}



// FUNCTION 143623990 FUN_143623990 body=42 status=ok
// SIG undefined FUN_143623990(void)

undefined8 * FUN_143623990(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143629610(param_1 + 0x40);
  return param_2;
}



// FUNCTION 1436239c0 FUN_1436239c0 body=42 status=ok
// SIG undefined FUN_1436239c0(void)

undefined8 * FUN_1436239c0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143628180(param_1 + 0x40);
  return param_2;
}



// FUNCTION 1436239f0 FUN_1436239f0 body=87 status=ok
// SIG undefined FUN_1436239f0(void)

undefined8 * FUN_1436239f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  *param_2 = 0;
  lVar3 = *(longlong *)(param_1 + 0x60) + -1;
  if (0 < lVar3) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x58);
      uVar1 = *(undefined8 *)(lVar2 + lVar4 * 8);
      *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar2 + lVar3 * 8);
      lVar4 = lVar4 + 1;
      *(undefined8 *)(lVar2 + lVar3 * 8) = uVar1;
      lVar3 = lVar3 + -1;
    } while (lVar4 < lVar3);
  }
  FUN_1434f0700(param_2,param_1);
  return param_2;
}



// FUNCTION 143623a50 FUN_143623a50 body=37 status=ok
// SIG undefined FUN_143623a50(void)

undefined8 * FUN_143623a50(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  FUN_14362d970(param_1 + 0x40,param_2,param_3,param_1);
  return param_2;
}



// FUNCTION 143623a80 FUN_143623a80 body=51 status=ok
// SIG undefined FUN_143623a80(void)

undefined8 * FUN_143623a80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b4ec88;
  *(undefined4 *)(param_1 + 0x12) = 0xe;
  return param_1;
}



// FUNCTION 143623ac0 FUN_143623ac0 body=214 status=ok
// SIG undefined FUN_143623ac0(void)

void FUN_143623ac0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar2 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,param_3);
    *puVar2 = &PTR_FUN_145b4ebc8;
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x48);
    puVar2[10] = *(longlong *)(param_3 + 0x98);
    puVar2[8] = &PTR_FUN_145b4eba0;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar2);
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



// FUNCTION 143623ba0 FUN_143623ba0 body=43 status=ok
// SIG undefined FUN_143623ba0(void)

undefined8 * FUN_143623ba0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0xe;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143623be0 FUN_143623be0 body=255 status=ok
// SIG undefined FUN_143623be0(void)

undefined8 * FUN_143623be0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e448);
    *(undefined4 *)(puVar3 + 0x12) = 0xe;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e448);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b4ec88;
    *(undefined4 *)(puVar3 + 0x12) = 0xe;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b4ed00;
  }
  return param_1;
}



// FUNCTION 143623cf0 FUN_143623cf0 body=33 status=ok
// SIG undefined FUN_143623cf0(void)

undefined8 * FUN_143623cf0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4ed00;
  return param_1;
}



// FUNCTION 143623d20 FUN_143623d20 body=393 status=ok
// SIG undefined FUN_143623d20(void)

void FUN_143623d20(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint *param_5
                  )

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*param_4 != 1) {
    uVar9 = FUN_1435c8e40(local_18,0x458,uVar2);
    FUN_1435cbdf0(uVar2,uVar9);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar6 = *param_5 & 0x1f;
  if (uVar6 != 0) {
    if (uVar6 == 0xc) {
      bVar10 = *(longlong *)(param_5 + 4) == 0;
    }
    else {
      if (uVar6 != 10) goto LAB_143623d82;
      bVar10 = *(longlong *)(param_5 + 4) == *(longlong *)(*(longlong *)(param_5 + 4) + 8) + 0x80;
    }
    if (!bVar10) {
LAB_143623d82:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
      lVar7 = FUN_1435caba0(uVar2,param_5);
      if (lVar7 == lVar3) {
        FUN_143590140(param_3,param_5);
      }
      else {
        puVar8 = (ulonglong *)FUN_1436350b0(local_res8,lVar3);
        uVar4 = *puVar8;
        cVar5 = FUN_143620380(uVar4 + 0x40,param_5,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(uVar4 + 0x28) + 0x98) + 0x228));
        if (cVar5 == '\0') {
          uVar9 = FUN_1435c8e40(local_18,0x40a,uVar2);
          FUN_1435cbe70(uVar2,uVar9);
          piVar1 = (int *)(local_10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_1435903c0(param_3,uVar4);
        }
        if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      return;
    }
  }
  FUN_143590140(param_3,param_5);
  return;
}



// FUNCTION 143623eb0 FUN_143623eb0 body=93 status=ok
// SIG undefined FUN_143623eb0(void)

undefined8 * FUN_143623eb0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4edd8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR__scalar_deleting_destructor__145b4e708;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  return param_1;
}



// FUNCTION 143623f20 FUN_143623f20 body=145 status=ok
// SIG undefined FUN_143623f20(void)

undefined8 *
FUN_143623f20(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [8];
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4edd8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR__scalar_deleting_destructor__145b4e708;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  pcVar2 = (char *)FUN_143636130(param_1 + 8,local_res18,param_3);
  if (*pcVar2 != '\0') {
    *(undefined1 *)(param_1 + 9) = param_4;
  }
  return param_1;
}



// FUNCTION 143623fc0 FUN_143623fc0 body=107 status=ok
// SIG undefined FUN_143623fc0(void)

void FUN_143623fc0(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_143590eb0(param_3,local_res10,local_res20);
    if (*pcVar1 == '\0') {
      return;
    }
    pcVar1 = (char *)FUN_143636130(param_1 + 0x40,local_res10,local_res20[0]);
    if (*pcVar1 == '\0') {
      return;
    }
  }
  if (1 < param_2) {
    uVar2 = FUN_1435909c0(param_3 + 0x20);
    *(undefined1 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 143624040 FUN_143624040 body=130 status=ok
// SIG undefined FUN_143624040(void)

void FUN_143624040(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *param_2;
  bVar2 = (byte)uVar1 & 0x1f;
  if (param_3 != 0) {
    if (9 < bVar2) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe3;
    *param_2 = *param_2 | 3;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,param_3 + -1);
    *(undefined8 *)(param_2 + 6) = uStack_10;
    return;
  }
  if (9 < bVar2) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1436240d0 FUN_1436240d0 body=106 status=ok
// SIG undefined FUN_1436240d0(void)

int * FUN_1436240d0(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  iVar2 = (**(code **)(lVar1 + 8))(param_1 + 0x40);
  if ((longlong)((ulonglong)param_3 - 1) < 0) {
    param_3 = 0;
    if (iVar2 == 0) {
      return param_2;
    }
  }
  else if ((ulonglong)(iVar2 - 1) <= (ulonglong)param_3 - 1) {
    return param_2;
  }
  *param_2 = param_3 + 1;
  return param_2;
}



// FUNCTION 143624140 FUN_143624140 body=138 status=ok
// SIG undefined FUN_143624140(void)

undefined8 FUN_143624140(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435aff50(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_143636640(param_1 + 0x40,param_2,local_18[0],param_4,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x240));
  }
  return param_2;
}



// FUNCTION 1436241d0 FUN_1436241d0 body=112 status=ok
// SIG undefined FUN_1436241d0(void)

undefined8 FUN_1436241d0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0]);
  }
  return param_2;
}



// FUNCTION 143624250 FUN_143624250 body=137 status=ok
// SIG undefined FUN_143624250(void)

undefined1 *
FUN_143624250(longlong param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((-1 < (longlong)param_3) && (*(uint *)(param_1 + 0x60) <= param_3)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x465,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  if ((uint)param_3 < *(uint *)(param_1 + 0x60)) {
    FUN_143590310(param_4,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x58) + (param_3 & 0xffffffff) * 8));
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1436242e0 FUN_1436242e0 body=148 status=ok
// SIG undefined FUN_1436242e0(void)

undefined1 * FUN_1436242e0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  char local_res18 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] == '\0') {
    FUN_1435b0650(param_1,param_2,param_3);
    return param_2;
  }
  if (*(uint *)(param_1 + 0x60) <= local_res20[0]) {
    *param_2 = 0;
    return param_2;
  }
  FUN_143635e30(param_1 + 0x58,local_res20[0]);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143624380 FUN_143624380 body=110 status=ok
// SIG undefined FUN_143624380(void)

ulonglong FUN_143624380(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)(local_res20[0] < *(uint *)(param_1 + 0x60));
  }
  uVar1 = FUN_1435b0590(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 143624400 deltaGet body=6 status=ok
// SIG undefined deltaGet(void)

void Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet
               (longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143624410 FUN_143624410 body=26 status=ok
// SIG undefined FUN_143624410(void)

void FUN_143624410(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  
  FUN_143636130(param_1 + 0x40,local_res18,param_3);
  return;
}



// FUNCTION 143624440 FUN_143624440 body=7 status=ok
// SIG undefined FUN_143624440(void)

void FUN_143624440(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143624450 FUN_143624450 body=96 status=ok
// SIG undefined FUN_143624450(void)

void FUN_143624450(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436244c0 FUN_1436244c0 body=96 status=ok
// SIG undefined FUN_1436244c0(void)

void FUN_1436244c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143624530 FUN_143624530 body=77 status=ok
// SIG undefined FUN_143624530(void)

void FUN_143624530(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_14361fc60(param_1 + 0x40,&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143624590 FUN_143624590 body=41 status=ok
// SIG undefined FUN_143624590(void)

void FUN_143624590(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620470(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1436245e0 FUN_1436245e0 body=26 status=ok
// SIG undefined FUN_1436245e0(void)

void FUN_1436245e0(longlong param_1)

{
  FUN_143629170(param_1 + 0x40);
  return;
}



// FUNCTION 143624600 FUN_143624600 body=123 status=ok
// SIG undefined FUN_143624600(void)

void FUN_143624600(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_143635780(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x240));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143624690 FUN_143624690 body=41 status=ok
// SIG undefined FUN_143624690(void)

void FUN_143624690(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620b50(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1436246c0 FUN_1436246c0 body=123 status=ok
// SIG undefined FUN_1436246c0(void)

void FUN_1436246c0(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_143636c80(param_1 + 0x40,param_3,param_4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x240));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143624750 FUN_143624750 body=26 status=ok
// SIG undefined FUN_143624750(void)

void FUN_143624750(longlong param_1)

{
  FUN_143626ea0(param_1 + 0x40);
  return;
}



// FUNCTION 143624770 FUN_143624770 body=26 status=ok
// SIG undefined FUN_143624770(void)

void FUN_143624770(longlong param_1)

{
  FUN_143627da0(param_1 + 0x40);
  return;
}



// FUNCTION 1436247a0 FUN_1436247a0 body=46 status=ok
// SIG undefined FUN_1436247a0(void)

void FUN_1436247a0(longlong param_1,undefined8 param_2)

{
  FUN_14362c370(param_1 + 0x58);
  FUN_1434f0700(param_2,param_1);
  return;
}



// FUNCTION 1436247f0 FUN_1436247f0 body=26 status=ok
// SIG undefined FUN_1436247f0(void)

void FUN_1436247f0(longlong param_1)

{
  FUN_14362c6c0(param_1 + 0x40);
  return;
}



// FUNCTION 143624830 FUN_143624830 body=26 status=ok
// SIG undefined FUN_143624830(void)

void FUN_143624830(longlong param_1)

{
  FUN_14362ff80(param_1 + 0x40);
  return;
}



// FUNCTION 143624850 FUN_143624850 body=99 status=ok
// SIG undefined FUN_143624850(void)

void FUN_143624850(longlong param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  if (param_4 < 0) {
    param_4 = param_4 + *(int *)(param_1 + 0x60);
  }
  uVar3 = (ulonglong)param_4;
  if (uVar3 < *(uint *)(param_1 + 0x60)) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + uVar3 * 8);
    do {
      if (*plVar4 == lVar2) {
        *param_2 = (int)uVar3;
        goto LAB_143624898;
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x60));
  }
  *param_2 = 0xffffffff;
LAB_143624898:
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1436248c0 FUN_1436248c0 body=112 status=ok
// SIG undefined FUN_1436248c0(void)

void FUN_1436248c0(longlong param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  if (param_4 < 0) {
    param_4 = param_4 + *(int *)(param_1 + 0x60);
  }
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x60) - 1;
  if (param_4 < lVar3) {
    lVar3 = (longlong)param_4;
  }
  if (-1 < lVar3) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8);
    do {
      if (*plVar4 == lVar2) {
        *param_2 = (int)lVar3;
        goto LAB_143624915;
      }
      plVar4 = plVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *param_2 = 0xffffffff;
LAB_143624915:
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143624940 FUN_143624940 body=42 status=ok
// SIG undefined FUN_143624940(void)

undefined8 * FUN_143624940(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143629170(param_1 + 0x40);
  return param_2;
}



// FUNCTION 143624970 FUN_143624970 body=42 status=ok
// SIG undefined FUN_143624970(void)

undefined8 * FUN_143624970(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143627da0(param_1 + 0x40);
  return param_2;
}



// FUNCTION 1436249a0 FUN_1436249a0 body=57 status=ok
// SIG undefined FUN_1436249a0(void)

undefined8 * FUN_1436249a0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14362c370(param_1 + 0x58);
  FUN_1434f0700(param_2,param_1);
  return param_2;
}



// FUNCTION 1436249e0 FUN_1436249e0 body=37 status=ok
// SIG undefined FUN_1436249e0(void)

undefined8 * FUN_1436249e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  FUN_14362cfb0(param_1 + 0x40,param_2,param_3,param_1);
  return param_2;
}



// FUNCTION 143624a10 FUN_143624a10 body=51 status=ok
// SIG undefined FUN_143624a10(void)

undefined8 * FUN_143624a10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b4ee98;
  *(undefined4 *)(param_1 + 0x12) = 0xf;
  return param_1;
}



// FUNCTION 143624a50 FUN_143624a50 body=214 status=ok
// SIG undefined FUN_143624a50(void)

void FUN_143624a50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar2 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,param_3);
    *puVar2 = &PTR_FUN_145b4edd8;
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x48);
    puVar2[10] = *(longlong *)(param_3 + 0x98);
    puVar2[8] = &PTR__scalar_deleting_destructor__145b4e708;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar2);
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



// FUNCTION 143624b30 FUN_143624b30 body=43 status=ok
// SIG undefined FUN_143624b30(void)

undefined8 * FUN_143624b30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0xf;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143624b70 FUN_143624b70 body=255 status=ok
// SIG undefined FUN_143624b70(void)

undefined8 * FUN_143624b70(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e380);
    *(undefined4 *)(puVar3 + 0x12) = 0xf;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b4e380);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b4ee98;
    *(undefined4 *)(puVar3 + 0x12) = 0xf;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b4ef10;
  }
  return param_1;
}



// FUNCTION 143624c80 FUN_143624c80 body=33 status=ok
// SIG undefined FUN_143624c80(void)

undefined8 * FUN_143624c80(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4ef10;
  return param_1;
}



// FUNCTION 143624cb0 FUN_143624cb0 body=393 status=ok
// SIG undefined FUN_143624cb0(void)

void FUN_143624cb0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint *param_5
                  )

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*param_4 != 1) {
    uVar9 = FUN_1435c8e40(local_18,0x458,uVar2);
    FUN_1435cbdf0(uVar2,uVar9);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar6 = *param_5 & 0x1f;
  if (uVar6 != 0) {
    if (uVar6 == 0xc) {
      bVar10 = *(longlong *)(param_5 + 4) == 0;
    }
    else {
      if (uVar6 != 10) goto LAB_143624d12;
      bVar10 = *(longlong *)(param_5 + 4) == *(longlong *)(*(longlong *)(param_5 + 4) + 8) + 0x80;
    }
    if (!bVar10) {
LAB_143624d12:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
      lVar7 = FUN_1435caba0(uVar2,param_5);
      if (lVar7 == lVar3) {
        FUN_143590140(param_3,param_5);
      }
      else {
        puVar8 = (ulonglong *)FUN_143635010(local_res8,lVar3);
        uVar4 = *puVar8;
        cVar5 = FUN_143620380(uVar4 + 0x40,param_5,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(uVar4 + 0x28) + 0x98) + 0x240));
        if (cVar5 == '\0') {
          uVar9 = FUN_1435c8e40(local_18,0x40a,uVar2);
          FUN_1435cbe70(uVar2,uVar9);
          piVar1 = (int *)(local_10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_1435903c0(param_3,uVar4);
        }
        if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      return;
    }
  }
  FUN_143590140(param_3,param_5);
  return;
}



// FUNCTION 143624e40 FUN_143624e40 body=93 status=ok
// SIG undefined FUN_143624e40(void)

undefined8 * FUN_143624e40(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4efe8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  return param_1;
}



// FUNCTION 143624eb0 FUN_143624eb0 body=145 status=ok
// SIG undefined FUN_143624eb0(void)

undefined8 *
FUN_143624eb0(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [8];
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4efe8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  pcVar2 = (char *)FUN_143636280(param_1 + 8,local_res18,param_3);
  if (*pcVar2 != '\0') {
    *(undefined1 *)(param_1 + 9) = param_4;
  }
  return param_1;
}



// FUNCTION 143624f50 FUN_143624f50 body=107 status=ok
// SIG undefined FUN_143624f50(void)

void FUN_143624f50(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_143590eb0(param_3,local_res10,local_res20);
    if (*pcVar1 == '\0') {
      return;
    }
    pcVar1 = (char *)FUN_143636280(param_1 + 0x40,local_res10,local_res20[0]);
    if (*pcVar1 == '\0') {
      return;
    }
  }
  if (1 < param_2) {
    uVar2 = FUN_1435909c0(param_3 + 0x20);
    *(undefined1 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 143624fd0 FUN_143624fd0 body=59 status=ok
// SIG undefined FUN_143624fd0(void)

void FUN_143624fd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435b16a0();
  FUN_143631840(param_1 + 0x40,param_2,param_3);
  return;
}



// FUNCTION 143625020 FUN_143625020 body=130 status=ok
// SIG undefined FUN_143625020(void)

void FUN_143625020(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *param_2;
  bVar2 = (byte)uVar1 & 0x1f;
  if (param_3 != 0) {
    if (9 < bVar2) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe3;
    *param_2 = *param_2 | 3;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,param_3 + -1);
    *(undefined8 *)(param_2 + 6) = uStack_10;
    return;
  }
  if (9 < bVar2) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 1436250b0 FUN_1436250b0 body=106 status=ok
// SIG undefined FUN_1436250b0(void)

int * FUN_1436250b0(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  iVar2 = (**(code **)(lVar1 + 8))(param_1 + 0x40);
  if ((longlong)((ulonglong)param_3 - 1) < 0) {
    param_3 = 0;
    if (iVar2 == 0) {
      return param_2;
    }
  }
  else if ((ulonglong)(iVar2 - 1) <= (ulonglong)param_3 - 1) {
    return param_2;
  }
  *param_2 = param_3 + 1;
  return param_2;
}



// FUNCTION 143625120 FUN_143625120 body=192 status=ok
// SIG undefined FUN_143625120(void)

undefined1 * FUN_143625120(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char local_res18 [16];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  longlong local_18;
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_28);
  if (local_res18[0] != '\0') {
    lVar3 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
    FUN_143636790(param_1 + 0x40,param_2,local_28[0],param_4,
                  *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0xe0));
    return param_2;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_20,0x420,uVar2);
  FUN_1435cbe10(uVar2,uVar4);
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436251f0 FUN_1436251f0 body=112 status=ok
// SIG undefined FUN_1436251f0(void)

undefined8 FUN_1436251f0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0]);
  }
  return param_2;
}



// FUNCTION 143625270 FUN_143625270 body=137 status=ok
// SIG undefined FUN_143625270(void)

undefined1 *
FUN_143625270(longlong param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((-1 < (longlong)param_3) && (*(uint *)(param_1 + 0x60) <= param_3)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x465,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  if ((uint)param_3 < *(uint *)(param_1 + 0x60)) {
    FUN_143590140(param_4,(param_3 & 0xffffffff) * 0x20 + *(longlong *)(param_1 + 0x58));
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143625300 FUN_143625300 body=148 status=ok
// SIG undefined FUN_143625300(void)

undefined1 * FUN_143625300(longlong param_1,undefined1 *param_2,longlong param_3)

{
  char local_res18 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] == '\0') {
    FUN_1435b0650(param_1,param_2,param_3);
    return param_2;
  }
  if (*(uint *)(param_1 + 0x60) <= local_res20[0]) {
    *param_2 = 0;
    return param_2;
  }
  FUN_1434ef9b0(param_1 + 0x58,local_res20[0]);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1436253a0 FUN_1436253a0 body=110 status=ok
// SIG undefined FUN_1436253a0(void)

ulonglong FUN_1436253a0(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)(local_res20[0] < *(uint *)(param_1 + 0x60));
  }
  uVar1 = FUN_1435b0590(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 143625420 deltaGet body=6 status=ok
// SIG undefined deltaGet(void)

void Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet
               (longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143625430 FUN_143625430 body=26 status=ok
// SIG undefined FUN_143625430(void)

void FUN_143625430(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  
  FUN_143636280(param_1 + 0x40,local_res18,param_3);
  return;
}



// FUNCTION 143625460 FUN_143625460 body=7 status=ok
// SIG undefined FUN_143625460(void)

void FUN_143625460(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143625470 FUN_143625470 body=96 status=ok
// SIG undefined FUN_143625470(void)

void FUN_143625470(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436254e0 FUN_1436254e0 body=96 status=ok
// SIG undefined FUN_1436254e0(void)

void FUN_1436254e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_14361fc60(param_1 + 0x40,&local_res8,
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                         0x70);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143625550 FUN_143625550 body=77 status=ok
// SIG undefined FUN_143625550(void)

void FUN_143625550(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_14361fc60(param_1 + 0x40,&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436255b0 FUN_1436255b0 body=41 status=ok
// SIG undefined FUN_1436255b0(void)

void FUN_1436255b0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620470(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143625600 FUN_143625600 body=26 status=ok
// SIG undefined FUN_143625600(void)

void FUN_143625600(longlong param_1)

{
  FUN_143629f60(param_1 + 0x40);
  return;
}



// FUNCTION 143625620 FUN_143625620 body=150 status=ok
// SIG undefined FUN_143625620(void)

void FUN_143625620(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  lVar2 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
  FUN_1436359a0(param_1 + 0x40,param_3,param_4,*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0xe0));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1436256c0 FUN_1436256c0 body=41 status=ok
// SIG undefined FUN_1436256c0(void)

void FUN_1436256c0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143620b50(param_1 + 0x40,param_3,param_4,param_1);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1436256f0 FUN_1436256f0 body=150 status=ok
// SIG undefined FUN_1436256f0(void)

void FUN_1436256f0(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  lVar2 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
  FUN_143636dd0(param_1 + 0x40,param_3,param_4,*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0xe0));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 143625790 FUN_143625790 body=26 status=ok
// SIG undefined FUN_143625790(void)

void FUN_143625790(longlong param_1)

{
  FUN_143627500(param_1 + 0x40);
  return;
}



// FUNCTION 1436257b0 FUN_1436257b0 body=26 status=ok
// SIG undefined FUN_1436257b0(void)

void FUN_1436257b0(longlong param_1)

{
  FUN_143628960(param_1 + 0x40);
  return;
}



// FUNCTION 1436257e0 FUN_1436257e0 body=46 status=ok
// SIG undefined FUN_1436257e0(void)

void FUN_1436257e0(longlong param_1,undefined8 param_2)

{
  FUN_1434e4900(param_1 + 0x58);
  FUN_1434f0700(param_2,param_1);
  return;
}



// FUNCTION 143625830 FUN_143625830 body=26 status=ok
// SIG undefined FUN_143625830(void)

void FUN_143625830(longlong param_1)

{
  FUN_14362cc00(param_1 + 0x40);
  return;
}



// FUNCTION 143625870 FUN_143625870 body=26 status=ok
// SIG undefined FUN_143625870(void)

void FUN_143625870(longlong param_1)

{
  FUN_1436304f0(param_1 + 0x40);
  return;
}



// FUNCTION 1436258b0 FUN_1436258b0 body=42 status=ok
// SIG undefined FUN_1436258b0(void)

undefined8 * FUN_1436258b0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143629f60(param_1 + 0x40);
  return param_2;
}



// FUNCTION 1436258e0 FUN_1436258e0 body=42 status=ok
// SIG undefined FUN_1436258e0(void)

undefined8 * FUN_1436258e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143628960(param_1 + 0x40);
  return param_2;
}



// FUNCTION 143625910 FUN_143625910 body=57 status=ok
// SIG undefined FUN_143625910(void)

undefined8 * FUN_143625910(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434e4900(param_1 + 0x58);
  FUN_1434f0700(param_2,param_1);
  return param_2;
}



// FUNCTION 143625950 FUN_143625950 body=37 status=ok
// SIG undefined FUN_143625950(void)

undefined8 * FUN_143625950(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  FUN_14362ec00(param_1 + 0x40,param_2,param_3,param_1);
  return param_2;
}



// FUNCTION 143625980 FUN_143625980 body=243 status=ok
// SIG undefined FUN_143625980(void)

/* WARNING: Removing unreachable block (ram,0x0001436259f5) */
/* WARNING: Removing unreachable block (ram,0x000143625a00) */
/* WARNING: Removing unreachable block (ram,0x000143625a1d) */

undefined8 *
FUN_143625980(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1435b9a80();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b4f0a8;
  *(undefined4 *)(param_1 + 0x12) = 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0x78;
  uVar2 = 0;
  do {
    FUN_1435b6830(param_1,&PTR_DAT_145b4e570,&PTR_FUN_1467db350 + uVar2 * 6,param_4,param_5,param_6,
                  param_7);
    bVar1 = (char)uVar2 + 1;
    uVar2 = (ulonglong)bVar1;
  } while (bVar1 < 0x17);
  return param_1;
}



// FUNCTION 143625a80 FUN_143625a80 body=214 status=ok
// SIG undefined FUN_143625a80(void)

void FUN_143625a80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar2 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,param_3);
    *puVar2 = &PTR_FUN_145b4efe8;
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x48);
    puVar2[10] = *(longlong *)(param_3 + 0x98);
    puVar2[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar2);
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



// FUNCTION 143625b60 FUN_143625b60 body=54 status=ok
// SIG undefined FUN_143625b60(void)

undefined8 * FUN_143625b60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b4f120;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x10;
  return param_1;
}



// FUNCTION 143625ba0 FUN_143625ba0 body=144 status=ok
// SIG undefined FUN_143625ba0(void)

undefined8 * FUN_143625ba0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                     (*(longlong **)(param_2 + 0x48),0xe8,0);
  if (puVar1 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar1,param_2,&PTR_DAT_145b4e570);
    *param_1 = puVar1;
    *puVar1 = &PTR_FUN_145b4f120;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0x10;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143625c40 FUN_143625c40 body=261 status=ok
// SIG undefined FUN_143625c40(void)

undefined8 * FUN_143625c40(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  UMaterialExpression::UMaterialExpression(param_1,param_2,&PTR_DAT_145b4e570);
  *param_1 = &PTR_FUN_145b4f120;
  param_1[0x1c] = param_4;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  *(undefined4 *)(param_1 + 0x12) = 0x10;
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                    (*(longlong **)(param_2 + 0x48),0xe8,0);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0xd8);
    puVar2 = (undefined8 *)FUN_1435cc120(param_2,local_res8,0,PTR_s___AS3___vec_1467d9790);
    uVar3 = FUN_143625980(lVar1,param_2,param_3,*puVar2,uVar3,1,1);
  }
  FUN_1435b8600(param_1,uVar3);
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                     (*(longlong **)(param_2 + 0x48),0x50);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,param_1);
    *puVar2 = &PTR_ForEachChild_GC_145b4f180;
  }
  return param_1;
}



// FUNCTION 143625d50 FUN_143625d50 body=63 status=ok
// SIG undefined FUN_143625d50(void)

void FUN_143625d50(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b8260();
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 143625dc0 FUN_143625dc0 body=33 status=ok
// SIG undefined FUN_143625dc0(void)

undefined8 * FUN_143625dc0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4f180;
  return param_1;
}



// FUNCTION 143625df0 FUN_143625df0 body=395 status=ok
// SIG undefined FUN_143625df0(void)

void FUN_143625df0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint *param_5
                  )

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*param_4 != 1) {
    uVar9 = FUN_1435c8e40(local_18,0x458,uVar2);
    FUN_1435cbdf0(uVar2,uVar9);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar5 = *param_5 & 0x1f;
  if (uVar5 != 0) {
    if (uVar5 == 0xc) {
      bVar10 = *(longlong *)(param_5 + 4) == 0;
    }
    else {
      if (uVar5 != 10) goto LAB_143625e52;
      bVar10 = *(longlong *)(param_5 + 4) == *(longlong *)(*(longlong *)(param_5 + 4) + 8) + 0x80;
    }
    if (!bVar10) {
LAB_143625e52:
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
      lVar6 = FUN_1435caba0(uVar2,param_5);
      if (lVar6 == lVar8) {
        FUN_143590140(param_3,param_5);
      }
      else {
        puVar7 = (ulonglong *)FUN_1436351f0(local_res8,lVar8);
        uVar3 = *puVar7;
        lVar8 = FUN_1435b4fe0(*(undefined8 *)(uVar3 + 0x28));
        cVar4 = FUN_143620380(uVar3 + 0x40,param_5,
                              *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + 0xe0));
        if (cVar4 == '\0') {
          uVar9 = FUN_1435c8e40(local_18,0x40a,uVar2);
          FUN_1435cbe70(uVar2,uVar9);
          piVar1 = (int *)(local_10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_1435903c0(param_3,uVar3);
        }
        if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880(uVar3);
        }
      }
      return;
    }
  }
  FUN_143590140(param_3,param_5);
  return;
}



// FUNCTION 143625f90 FUN_143625f90 body=158 status=ok
// SIG undefined FUN_143625f90(void)

void FUN_143625f90(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)FUN_143590af0(param_3,local_res20,&local_28);
  if (*pcVar3 == '\0') {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  local_20 = local_28;
  uVar1 = plVar2[1] + 1;
  uStack_18 = param_2;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar5 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_143626007;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_143626007;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efcd0(plVar2,plVar2[3],uVar5);
LAB_143626007:
  plVar2[1] = uVar1;
  puVar4 = (undefined8 *)(*plVar2 + -0x10 + uVar1 * 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = local_20;
    puVar4[1] = CONCAT44(uStack_14,uStack_18);
  }
  return;
}



// FUNCTION 143626040 FUN_143626040 body=217 status=ok
// SIG undefined FUN_143626040(void)

void FUN_143626040(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  uint local_28 [8];
  
  FUN_1435900f0(local_28,*param_3);
  pcVar3 = (char *)FUN_143590af0(local_28,local_res18,local_res20);
  if (*pcVar3 == '\0') goto LAB_1436260df;
  plVar2 = *(longlong **)(param_1 + 8);
  uVar1 = plVar2[1] + 1;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar5 = uVar1;
    if (uVar1 < (ulonglong)plVar2[2] >> 1) {
LAB_1436260bb:
      FUN_1434efcd0(plVar2,plVar2[3],uVar5);
    }
  }
  else if ((ulonglong)plVar2[2] < uVar1) {
    uVar5 = (uVar1 >> 2) + uVar1;
    goto LAB_1436260bb;
  }
  plVar2[1] = uVar1;
  puVar4 = (undefined4 *)(*plVar2 + -0x10 + uVar1 * 0x10);
  if (puVar4 != (undefined4 *)0x0) {
    local_38 = local_res20._0_4_;
    uStack_34 = local_res20._4_4_;
    *puVar4 = local_38;
    puVar4[1] = uStack_34;
    puVar4[2] = param_2;
    puVar4[3] = uStack_2c;
  }
LAB_1436260df:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143626120 FUN_143626120 body=126 status=ok
// SIG undefined FUN_143626120(void)

void FUN_143626120(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 uStack_c;
  
  plVar3 = *(longlong **)(param_1 + 8);
  uVar2 = *param_3;
  uVar1 = plVar3[1] + 1;
  if (uVar1 < (ulonglong)plVar3[1]) {
    uVar5 = uVar1;
    if ((ulonglong)plVar3[2] >> 1 <= uVar1) goto LAB_143626177;
  }
  else {
    if (uVar1 <= (ulonglong)plVar3[2]) goto LAB_143626177;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efcd0(plVar3,plVar3[3],uVar5);
LAB_143626177:
  plVar3[1] = uVar1;
  puVar4 = (undefined8 *)(*plVar3 + -0x10 + uVar1 * 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = uVar2;
    puVar4[1] = CONCAT44(uStack_c,param_2);
  }
  return;
}



// FUNCTION 1436261b0 FUN_1436261b0 body=132 status=ok
// SIG undefined FUN_1436261b0(void)

void FUN_1436261b0(longlong param_1,undefined4 param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined4 uStack_c;
  
  uVar2 = *param_3;
  plVar3 = *(longlong **)(param_1 + 8);
  uVar1 = plVar3[1] + 1;
  if (uVar1 < (ulonglong)plVar3[1]) {
    uVar5 = uVar1;
    if ((ulonglong)plVar3[2] >> 1 <= uVar1) goto LAB_14362620d;
  }
  else {
    if (uVar1 <= (ulonglong)plVar3[2]) goto LAB_14362620d;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efcd0(plVar3,plVar3[3],uVar5);
LAB_14362620d:
  plVar3[1] = uVar1;
  pdVar4 = (double *)(*plVar3 + -0x10 + uVar1 * 0x10);
  if (pdVar4 != (double *)0x0) {
    *pdVar4 = (double)uVar2;
    pdVar4[1] = (double)CONCAT44(uStack_c,param_2);
  }
  return;
}



// FUNCTION 143626240 FUN_143626240 body=130 status=ok
// SIG undefined FUN_143626240(void)

void FUN_143626240(longlong param_1,undefined4 param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined4 uStack_c;
  
  plVar3 = *(longlong **)(param_1 + 8);
  iVar2 = *param_3;
  uVar1 = plVar3[1] + 1;
  if (uVar1 < (ulonglong)plVar3[1]) {
    uVar5 = uVar1;
    if ((ulonglong)plVar3[2] >> 1 <= uVar1) goto LAB_14362629b;
  }
  else {
    if (uVar1 <= (ulonglong)plVar3[2]) goto LAB_14362629b;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efcd0(plVar3,plVar3[3],uVar5);
LAB_14362629b:
  plVar3[1] = uVar1;
  pdVar4 = (double *)(*plVar3 + -0x10 + uVar1 * 0x10);
  if (pdVar4 != (double *)0x0) {
    *pdVar4 = (double)iVar2;
    pdVar4[1] = (double)CONCAT44(uStack_c,param_2);
  }
  return;
}



// FUNCTION 1436262d0 FUN_1436262d0 body=187 status=ok
// SIG undefined FUN_1436262d0(void)

void FUN_1436262d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong local_res20;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x218);
  local_res20 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_3,local_res8,&local_res20);
  lVar2 = local_res20;
  if (*pcVar3 != '\0') {
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    plVar4 = *(longlong **)(param_1 + 0x10);
    FUN_1436363c0(plVar4,plVar4[3],plVar4[1] + 1);
    plVar4 = (longlong *)(*plVar4 + -0x10 + plVar4[1] * 0x10);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = lVar2;
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined4 *)(plVar4 + 1) = param_2;
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436263a0 FUN_1436263a0 body=120 status=ok
// SIG undefined FUN_1436263a0(void)

void FUN_1436263a0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_3;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  plVar3 = *(longlong **)(param_1 + 0x10);
  FUN_1436363c0(plVar3,plVar3[3],plVar3[1] + 1);
  plVar3 = (longlong *)(*plVar3 + -0x10 + plVar3[1] * 0x10);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = lVar2;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    *(undefined4 *)(plVar3 + 1) = param_2;
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143626420 FUN_143626420 body=260 status=ok
// SIG undefined FUN_143626420(void)

void FUN_143626420(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  uint local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_38[0] = 4;
  local_30 = 0;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x218);
  local_res18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_28 = *param_3;
  pcVar4 = (char *)FUN_1435911f0(local_38,local_res8,local_res18);
  cVar2 = *pcVar4;
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  lVar3 = local_res18[0];
  if (cVar2 != '\0') {
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    FUN_1436363c0(plVar5,plVar5[3],plVar5[1] + 1);
    plVar5 = (longlong *)(*plVar5 + -0x10 + plVar5[1] * 0x10);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = lVar3;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(undefined4 *)(plVar5 + 1) = param_2;
    }
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143626530 FUN_143626530 body=256 status=ok
// SIG undefined FUN_143626530(void)

void FUN_143626530(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  local_38[0] = 3;
  local_30 = 0;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x218);
  local_res18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_28 = *param_3;
  pcVar4 = (char *)FUN_1435911f0(local_38,local_res8,local_res18);
  cVar2 = *pcVar4;
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  lVar3 = local_res18[0];
  if (cVar2 != '\0') {
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    FUN_1436363c0(plVar5,plVar5[3],plVar5[1] + 1);
    plVar5 = (longlong *)(*plVar5 + -0x10 + plVar5[1] * 0x10);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = lVar3;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(undefined4 *)(plVar5 + 1) = param_2;
    }
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143626640 FUN_143626640 body=256 status=ok
// SIG undefined FUN_143626640(void)

void FUN_143626640(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  local_38[0] = 2;
  local_30 = 0;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x218);
  local_res18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_28 = *param_3;
  pcVar4 = (char *)FUN_1435911f0(local_38,local_res8,local_res18);
  cVar2 = *pcVar4;
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  lVar3 = local_res18[0];
  if (cVar2 != '\0') {
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    FUN_1436363c0(plVar5,plVar5[3],plVar5[1] + 1);
    plVar5 = (longlong *)(*plVar5 + -0x10 + plVar5[1] * 0x10);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = lVar3;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(undefined4 *)(plVar5 + 1) = param_2;
    }
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436267a0 FUN_1436267a0 body=144 status=ok
// SIG undefined FUN_1436267a0(void)

void FUN_1436267a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7ac48)((longlong)DAT_146b7ac50 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143626830 FUN_143626830 body=112 status=ok
// SIG undefined FUN_143626830(void)

void FUN_143626830(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7ac58)(DAT_146b7ac60 + lVar2,local_18);
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



// FUNCTION 1436268a0 FUN_1436268a0 body=145 status=ok
// SIG undefined FUN_1436268a0(void)

void FUN_1436268a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7ad88)((longlong)DAT_146b7ad90 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1436269a0 FUN_1436269a0 body=144 status=ok
// SIG undefined FUN_1436269a0(void)

void FUN_1436269a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7adb8)((longlong)DAT_146b7adc0 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143626a30 FUN_143626a30 body=112 status=ok
// SIG undefined FUN_143626a30(void)

void FUN_143626a30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7adc8)(DAT_146b7add0 + lVar2,local_18);
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



// FUNCTION 143626aa0 FUN_143626aa0 body=145 status=ok
// SIG undefined FUN_143626aa0(void)

void FUN_143626aa0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7aef8)((longlong)DAT_146b7af00 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143626ba0 FUN_143626ba0 body=144 status=ok
// SIG undefined FUN_143626ba0(void)

void FUN_143626ba0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7af28)((longlong)DAT_146b7af30 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143626c30 FUN_143626c30 body=112 status=ok
// SIG undefined FUN_143626c30(void)

void FUN_143626c30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7af38)(DAT_146b7af40 + lVar2,local_18);
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



// FUNCTION 143626ca0 FUN_143626ca0 body=145 status=ok
// SIG undefined FUN_143626ca0(void)

void FUN_143626ca0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a938)((longlong)DAT_146b7a940 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143626da0 FUN_143626da0 body=144 status=ok
// SIG undefined FUN_143626da0(void)

void FUN_143626da0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a968)((longlong)DAT_146b7a970 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143626e30 FUN_143626e30 body=112 status=ok
// SIG undefined FUN_143626e30(void)

void FUN_143626e30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b7a978)(DAT_146b7a980 + lVar2,local_18);
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



// FUNCTION 143626ea0 FUN_143626ea0 body=532 status=ok
// SIG undefined FUN_143626ea0(void)

void FUN_143626ea0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint local_58 [2];
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = FUN_1435b4fe0(*(undefined8 *)(param_5 + 0x28));
  lVar6 = *(longlong *)(param_5 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)FUN_1435b5bc0(lVar6);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar5,lVar6);
    *puVar5 = &PTR_FUN_145b4edd8;
    lVar6 = *(longlong *)(lVar6 + 0x98);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[10] = lVar6;
    puVar5[8] = &PTR__scalar_deleting_destructor__145b4e708;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = uVar8;
  }
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,puVar5);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_143631400(puVar5 + 8,param_5 + 0x40);
  if (param_3 != 0) {
    do {
      lVar6 = FUN_1435caba0(lVar2,param_4);
      lVar7 = FUN_1435ca910(lVar2,param_4);
      if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
        uVar8 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),param_4);
        cVar3 = FUN_1435b5020(lVar4,uVar8);
        if (cVar3 == '\0') {
LAB_143627040:
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x40a,uVar8);
          FUN_1435cbe70(uVar8,uVar9);
LAB_143627061:
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        FUN_143578ef0(puVar5,*(undefined8 *)(param_4 + 0x10));
      }
      else {
        cVar3 = FUN_1435b5020(*(undefined8 *)(lVar2 + 0x248),lVar7);
        if (cVar3 != '\0') {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x3e9,uVar8);
          FUN_1435cbdb0(uVar8,uVar9);
          goto LAB_143627061;
        }
        if (lVar4 != lVar7) goto LAB_143627040;
        FUN_143631400(puVar5 + 8,*(longlong *)(param_4 + 0x10) + 0x40);
      }
      uVar10 = uVar10 + 1;
      param_4 = param_4 + 0x20;
    } while (uVar10 < param_3);
  }
  return;
}



// FUNCTION 1436270c0 FUN_1436270c0 body=533 status=ok
// SIG undefined FUN_1436270c0(void)

void FUN_1436270c0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint local_58 [2];
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = FUN_1435b4fe0(*(undefined8 *)(param_5 + 0x28));
  lVar6 = *(longlong *)(param_5 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)FUN_1435b5bc0(lVar6);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar5,lVar6);
    *puVar5 = &PTR_FUN_145b4ebc8;
    lVar6 = *(longlong *)(lVar6 + 0x98);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[10] = lVar6;
    puVar5[8] = &PTR_FUN_145b4eba0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = uVar8;
  }
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,puVar5);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_143631220(puVar5 + 8,param_5 + 0x40);
  if (param_3 != 0) {
    do {
      lVar6 = FUN_1435caba0(lVar2,param_4);
      lVar7 = FUN_1435ca910(lVar2,param_4);
      if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
        uVar8 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),param_4);
        cVar3 = FUN_1435b5020(lVar4,uVar8);
        if (cVar3 == '\0') {
LAB_143627261:
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x40a,uVar8);
          FUN_1435cbe70(uVar8,uVar9);
LAB_143627282:
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        FUN_143516110(puVar5,*(undefined8 *)(param_4 + 0x10));
      }
      else {
        cVar3 = FUN_1435b5020(*(undefined8 *)(lVar2 + 0x248),lVar7);
        if (cVar3 != '\0') {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x3e9,uVar8);
          FUN_1435cbdb0(uVar8,uVar9);
          goto LAB_143627282;
        }
        if (lVar4 != lVar7) goto LAB_143627261;
        FUN_143631220(puVar5 + 8,*(longlong *)(param_4 + 0x10) + 0x40);
      }
      uVar10 = uVar10 + 1;
      param_4 = param_4 + 0x20;
    } while (uVar10 < param_3);
  }
  return;
}



// FUNCTION 1436272e0 FUN_1436272e0 body=531 status=ok
// SIG undefined FUN_1436272e0(void)

void FUN_1436272e0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint local_58 [2];
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = FUN_1435b4fe0(*(undefined8 *)(param_5 + 0x28));
  lVar6 = *(longlong *)(param_5 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)FUN_1435b5bc0(lVar6);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar5,lVar6);
    *puVar5 = &PTR_FUN_145b4e758;
    lVar6 = *(longlong *)(lVar6 + 0x98);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[10] = lVar6;
    puVar5[8] = &PTR_FUN_145b4e730;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = uVar8;
  }
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,puVar5);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_143631030(puVar5 + 8,param_5 + 0x40);
  if (param_3 != 0) {
    do {
      lVar6 = FUN_1435caba0(lVar2,param_4);
      lVar7 = FUN_1435ca910(lVar2,param_4);
      if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
        uVar8 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),param_4);
        cVar3 = FUN_1435b5020(lVar4,uVar8);
        if (cVar3 == '\0') {
LAB_14362747f:
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x40a,uVar8);
          FUN_1435cbe70(uVar8,uVar9);
LAB_1436274a0:
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        FUN_1435161a0(puVar5,*(undefined4 *)(param_4 + 0x10));
      }
      else {
        cVar3 = FUN_1435b5020(*(undefined8 *)(lVar2 + 0x248),lVar7);
        if (cVar3 != '\0') {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x3e9,uVar8);
          FUN_1435cbdb0(uVar8,uVar9);
          goto LAB_1436274a0;
        }
        if (lVar4 != lVar7) goto LAB_14362747f;
        FUN_143631030(puVar5 + 8,*(longlong *)(param_4 + 0x10) + 0x40);
      }
      uVar10 = uVar10 + 1;
      param_4 = param_4 + 0x20;
    } while (uVar10 < param_3);
  }
  return;
}



// FUNCTION 143627500 FUN_143627500 body=596 status=ok
// SIG undefined FUN_143627500(void)

void FUN_143627500(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint local_58 [2];
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = FUN_1435b4fe0(*(undefined8 *)(param_5 + 0x28));
  lVar6 = *(longlong *)(param_5 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)FUN_1435b5bc0(lVar6);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar5,lVar6);
    *puVar5 = &PTR_FUN_145b4efe8;
    lVar6 = *(longlong *)(lVar6 + 0x98);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[10] = lVar6;
    puVar5[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = uVar8;
  }
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,puVar5);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_1436314d0(puVar5 + 8,param_5 + 0x40);
  if (param_3 != 0) {
    do {
      lVar6 = FUN_1435caba0(lVar2,param_4);
      lVar7 = FUN_1435ca910(lVar2,param_4);
      if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
        uVar8 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),param_4);
        cVar3 = FUN_1435b5020(lVar4,uVar8);
        if (cVar3 == '\0') {
LAB_1436276e0:
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x40a,uVar8);
          FUN_1435cbe70(uVar8,uVar9);
LAB_143627701:
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        if (*(char *)(puVar5 + 9) != '\0') {
          uVar8 = puVar5[10];
          uVar9 = FUN_1435c8e40(local_58,0x466,uVar8);
          FUN_1435cbdf0(uVar8,uVar9);
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (*(char *)(puVar5 + 9) != '\0') goto LAB_1436276c7;
        }
        FUN_1434ef7a0(puVar5 + 0xb,param_4);
      }
      else {
        cVar3 = FUN_1435b5020(*(undefined8 *)(lVar2 + 0x248),lVar7);
        if (cVar3 != '\0') {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x3e9,uVar8);
          FUN_1435cbdb0(uVar8,uVar9);
          goto LAB_143627701;
        }
        if (lVar4 != lVar7) goto LAB_1436276e0;
        FUN_1436314d0(puVar5 + 8,*(longlong *)(param_4 + 0x10) + 0x40);
      }
LAB_1436276c7:
      uVar10 = uVar10 + 1;
      param_4 = param_4 + 0x20;
    } while (uVar10 < param_3);
  }
  return;
}



// FUNCTION 143627760 FUN_143627760 body=531 status=ok
// SIG undefined FUN_143627760(void)

void FUN_143627760(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint local_58 [2];
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = FUN_1435b4fe0(*(undefined8 *)(param_5 + 0x28));
  lVar6 = *(longlong *)(param_5 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)FUN_1435b5bc0(lVar6);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar5,lVar6);
    *puVar5 = &PTR_FUN_145b4e990;
    lVar6 = *(longlong *)(lVar6 + 0x98);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[10] = lVar6;
    puVar5[8] = &PTR_FUN_145b4e968;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = uVar8;
  }
  uVar10 = 0;
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,puVar5);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  FUN_143631030(puVar5 + 8,param_5 + 0x40);
  if (param_3 != 0) {
    do {
      lVar6 = FUN_1435caba0(lVar2,param_4);
      lVar7 = FUN_1435ca910(lVar2,param_4);
      if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
        uVar8 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),param_4);
        cVar3 = FUN_1435b5020(lVar4,uVar8);
        if (cVar3 == '\0') {
LAB_1436278ff:
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x40a,uVar8);
          FUN_1435cbe70(uVar8,uVar9);
LAB_143627920:
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        FUN_143635af0(puVar5,*(undefined4 *)(param_4 + 0x10));
      }
      else {
        cVar3 = FUN_1435b5020(*(undefined8 *)(lVar2 + 0x248),lVar7);
        if (cVar3 != '\0') {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = FUN_1435c8e40(local_58,0x3e9,uVar8);
          FUN_1435cbdb0(uVar8,uVar9);
          goto LAB_143627920;
        }
        if (lVar4 != lVar7) goto LAB_1436278ff;
        FUN_143631030(puVar5 + 8,*(longlong *)(param_4 + 0x10) + 0x40);
      }
      uVar10 = uVar10 + 1;
      param_4 = param_4 + 0x20;
    } while (uVar10 < param_3);
  }
  return;
}



// FUNCTION 143627980 DeleteMultipleAt<Scaleform::GFx::AS3::Instances::fl_vec::Vector_String> body=128 status=ok
// SIG undefined DeleteMultipleAt<Scaleform::GFx::AS3::Instances::fl_vec::Vector_String>(void)

void Scaleform::GFx::AS3::VectorBase<Scaleform::Ptr<Scaleform::GFx::ASStringNode>_>::
     DeleteMultipleAt<Scaleform::GFx::AS3::Instances::fl_vec::Vector_String>
               (longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (param_3 != 0) {
    lVar2 = param_2 * 8;
    do {
      if (*(ulonglong *)(param_1 + 0x20) <= uVar1 + param_2) break;
      FUN_143578ef0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar2));
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (uVar1 < param_3);
  }
  FUN_143635fb0(param_1 + 0x18,param_2,param_3);
  return;
}



// FUNCTION 143627a00 FUN_143627a00 body=236 status=ok
// SIG undefined FUN_143627a00(void)

void FUN_143627a00(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    lVar1 = param_2 * 8;
    do {
      if (*(ulonglong *)(param_1 + 0x20) <= uVar2 + param_2) break;
      FUN_143516110(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < param_3);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar2 != param_3) {
    memmove((void *)(*(longlong *)(param_1 + 0x18) + param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x18) + (param_2 + param_3) * 8),
            ((uVar2 - param_2) - param_3) * 8);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) - param_3;
    return;
  }
  if (((uVar2 != 0) && ((*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x28) != 0)) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143627af0 FUN_143627af0 body=238 status=ok
// SIG undefined FUN_143627af0(void)

void FUN_143627af0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    lVar1 = param_2 * 4;
    do {
      if (*(ulonglong *)(param_1 + 0x20) <= uVar2 + param_2) break;
      FUN_1435161a0(param_4,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 4;
    } while (uVar2 < param_3);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar2 != param_3) {
    memmove((void *)(*(longlong *)(param_1 + 0x18) + param_2 * 4),
            (void *)(*(longlong *)(param_1 + 0x18) + (param_2 + param_3) * 4),
            ((uVar2 - param_2) - param_3) * 4);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) - param_3;
    return;
  }
  if (((uVar2 != 0) && ((*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x28) != 0)) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143627be0 FUN_143627be0 body=208 status=ok
// SIG undefined FUN_143627be0(void)

void FUN_143627be0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 local_38 [8];
  longlong local_30;
  
  uVar5 = 0;
  if (param_3 != 0) {
    lVar6 = param_2 << 5;
    do {
      if (*(ulonglong *)(param_1 + 0x20) <= uVar5 + param_2) break;
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(param_4 + 0x48) == '\0') {
LAB_143627c6e:
        FUN_1434ef7a0(param_4 + 0x58,lVar2 + lVar6);
      }
      else {
        uVar3 = *(undefined8 *)(param_4 + 0x50);
        uVar4 = FUN_1435c8e40(local_38,0x466,uVar3);
        FUN_1435cbdf0(uVar3,uVar4);
        piVar1 = (int *)(local_30 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (*(char *)(param_4 + 0x48) == '\0') goto LAB_143627c6e;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar5 < param_3);
  }
  FUN_1434efac0(param_1 + 0x18,param_2,param_3);
  return;
}



// FUNCTION 143627cb0 FUN_143627cb0 body=238 status=ok
// SIG undefined FUN_143627cb0(void)

void FUN_143627cb0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    lVar1 = param_2 * 4;
    do {
      if (*(ulonglong *)(param_1 + 0x20) <= uVar2 + param_2) break;
      FUN_143635af0(param_4,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 4;
    } while (uVar2 < param_3);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar2 != param_3) {
    memmove((void *)(*(longlong *)(param_1 + 0x18) + param_2 * 4),
            (void *)(*(longlong *)(param_1 + 0x18) + (param_2 + param_3) * 4),
            ((uVar2 - param_2) - param_3) * 4);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) - param_3;
    return;
  }
  if (((uVar2 != 0) && ((*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x28) != 0)) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143627da0 FUN_143627da0 body=991 status=ok
// SIG undefined FUN_143627da0(void)

void FUN_143627da0(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_d8 [2];
  longlong local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 local_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar10 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar4 = (undefined8 *)FUN_1435b5bc0(lVar10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar4,lVar10);
    *puVar4 = &PTR_FUN_145b4edd8;
    lVar10 = *(longlong *)(lVar10 + 0x98);
    uVar2 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[10] = lVar10;
    puVar4[8] = &PTR__scalar_deleting_destructor__145b4e708;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar2;
  }
  uVar12 = 0;
  puVar3 = (undefined8 *)*param_2;
  if (puVar4 != puVar3) {
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
    *param_2 = (ulonglong)puVar4;
  }
  puVar8 = local_res18;
  uVar7 = *local_res18 & 0x1f;
  if (uVar7 == 0) {
    return;
  }
  if (uVar7 == 0xc) {
    bVar13 = *(longlong *)(local_res18 + 4) == 0;
LAB_143627e94:
    if (bVar13) {
      return;
    }
  }
  else if (uVar7 == 10) {
    bVar13 = *(longlong *)(local_res18 + 4) ==
             *(longlong *)(*(longlong *)(local_res18 + 4) + 8) + 0x80;
    goto LAB_143627e94;
  }
  if ((uVar7 < 5) || (uVar7 - 8 < 4)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_d8,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar7 = *param_4 & 0x1f;
  if (uVar7 == 0) {
LAB_143627eef:
    bVar13 = true;
  }
  else {
    if (uVar7 == 0xc) {
      bVar13 = *(longlong *)(param_4 + 4) == 0;
LAB_143627ee3:
      if (bVar13) goto LAB_143627eef;
    }
    else if (uVar7 == 10) {
      bVar13 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143627ee3;
    }
    bVar13 = false;
  }
  puVar6 = local_res18;
  if (!bVar13) {
    puVar6 = param_4;
  }
  local_b0 = *(undefined8 *)(puVar6 + 2);
  local_b8[0] = *puVar6;
  local_a8 = puVar6[4];
  uStack_a4 = puVar6[5];
  uStack_a0 = puVar6[6];
  uStack_9c = puVar6[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar10 = 3;
    do {
      FUN_1435900f0(local_98,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8));
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar12;
      FUN_143590110(local_58,param_5);
      local_d8[0] = 0;
      local_d0 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),puVar8,local_b8,local_d8,local_res10,local_98,0,
                    1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar10 != 0);
        break;
      }
      if (((local_d8[0] & 0x1f) == 1) && (local_c8 != '\0')) {
        FUN_143578ef0(puVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8));
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      else {
        if (9 < (local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      puVar8 = local_res18;
    } while (uVar12 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143628180 FUN_143628180 body=1007 status=ok
// SIG undefined FUN_143628180(void)

void FUN_143628180(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_d8 [2];
  longlong local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar10 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar4 = (undefined8 *)FUN_1435b5bc0(lVar10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar4,lVar10);
    *puVar4 = &PTR_FUN_145b4ebc8;
    lVar10 = *(longlong *)(lVar10 + 0x98);
    uVar2 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[10] = lVar10;
    puVar4[8] = &PTR_FUN_145b4eba0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar2;
  }
  uVar12 = 0;
  puVar3 = (undefined8 *)*param_2;
  if (puVar4 != puVar3) {
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
    *param_2 = (ulonglong)puVar4;
  }
  puVar8 = local_res18;
  uVar7 = *local_res18 & 0x1f;
  if (uVar7 == 0) {
    return;
  }
  if (uVar7 == 0xc) {
    bVar13 = *(longlong *)(local_res18 + 4) == 0;
LAB_143628274:
    if (bVar13) {
      return;
    }
  }
  else if (uVar7 == 10) {
    bVar13 = *(longlong *)(local_res18 + 4) ==
             *(longlong *)(*(longlong *)(local_res18 + 4) + 8) + 0x80;
    goto LAB_143628274;
  }
  if ((uVar7 < 5) || (uVar7 - 8 < 4)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_d8,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar7 = *param_4 & 0x1f;
  if (uVar7 == 0) {
LAB_1436282cf:
    bVar13 = true;
  }
  else {
    if (uVar7 == 0xc) {
      bVar13 = *(longlong *)(param_4 + 4) == 0;
LAB_1436282c3:
      if (bVar13) goto LAB_1436282cf;
    }
    else if (uVar7 == 10) {
      bVar13 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1436282c3;
    }
    bVar13 = false;
  }
  puVar6 = local_res18;
  if (!bVar13) {
    puVar6 = param_4;
  }
  local_b0 = *(undefined8 *)(puVar6 + 2);
  local_b8[0] = *puVar6;
  local_a8 = puVar6[4];
  uStack_a4 = puVar6[5];
  uStack_a0 = puVar6[6];
  uStack_9c = puVar6[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar10 = 3;
    do {
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8);
      local_98[0] = 4;
      local_90 = 0;
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar12;
      FUN_143590110(local_58,param_5);
      local_d8[0] = 0;
      local_d0 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),puVar8,local_b8,local_d8,local_res10,local_98,0,
                    1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar10 != 0);
        break;
      }
      if (((local_d8[0] & 0x1f) == 1) && (local_c8 != '\0')) {
        FUN_143516110(puVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8));
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      else {
        if (9 < (local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      puVar8 = local_res18;
    } while (uVar12 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143628570 FUN_143628570 body=1007 status=ok
// SIG undefined FUN_143628570(void)

void FUN_143628570(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_d8 [2];
  longlong local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar10 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar4 = (undefined8 *)FUN_1435b5bc0(lVar10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar4,lVar10);
    *puVar4 = &PTR_FUN_145b4e758;
    lVar10 = *(longlong *)(lVar10 + 0x98);
    uVar2 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[10] = lVar10;
    puVar4[8] = &PTR_FUN_145b4e730;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar2;
  }
  uVar12 = 0;
  puVar3 = (undefined8 *)*param_2;
  if (puVar4 != puVar3) {
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
    *param_2 = (ulonglong)puVar4;
  }
  puVar8 = local_res18;
  uVar7 = *local_res18 & 0x1f;
  if (uVar7 == 0) {
    return;
  }
  if (uVar7 == 0xc) {
    bVar13 = *(longlong *)(local_res18 + 4) == 0;
LAB_143628664:
    if (bVar13) {
      return;
    }
  }
  else if (uVar7 == 10) {
    bVar13 = *(longlong *)(local_res18 + 4) ==
             *(longlong *)(*(longlong *)(local_res18 + 4) + 8) + 0x80;
    goto LAB_143628664;
  }
  if ((uVar7 < 5) || (uVar7 - 8 < 4)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_d8,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar7 = *param_4 & 0x1f;
  if (uVar7 == 0) {
LAB_1436286bf:
    bVar13 = true;
  }
  else {
    if (uVar7 == 0xc) {
      bVar13 = *(longlong *)(param_4 + 4) == 0;
LAB_1436286b3:
      if (bVar13) goto LAB_1436286bf;
    }
    else if (uVar7 == 10) {
      bVar13 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1436286b3;
    }
    bVar13 = false;
  }
  puVar6 = local_res18;
  if (!bVar13) {
    puVar6 = param_4;
  }
  local_b0 = *(undefined8 *)(puVar6 + 2);
  local_b8[0] = *puVar6;
  local_a8 = puVar6[4];
  uStack_a4 = puVar6[5];
  uStack_a0 = puVar6[6];
  uStack_9c = puVar6[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar10 = 3;
    do {
      local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
      local_98[0] = 2;
      local_90 = 0;
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar12;
      FUN_143590110(local_58,param_5);
      local_d8[0] = 0;
      local_d0 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),puVar8,local_b8,local_d8,local_res10,local_98,0,
                    1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar10 != 0);
        break;
      }
      if (((local_d8[0] & 0x1f) == 1) && (local_c8 != '\0')) {
        FUN_1435161a0(puVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4));
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      else {
        if (9 < (local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      puVar8 = local_res18;
    } while (uVar12 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143628960 FUN_143628960 body=1054 status=ok
// SIG undefined FUN_143628960(void)

void FUN_143628960(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_e8 [2];
  undefined8 local_e0;
  char local_d8;
  undefined8 *local_c8;
  longlong local_c0;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar10 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar4 = (undefined8 *)FUN_1435b5bc0(lVar10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    local_c8 = (undefined8 *)0x0;
  }
  else {
    local_c8 = puVar4;
    UInterpTrackInst::UInterpTrackInst(puVar4,lVar10);
    *puVar4 = &PTR_FUN_145b4efe8;
    lVar10 = *(longlong *)(lVar10 + 0x98);
    uVar2 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[10] = lVar10;
    puVar4[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar2;
  }
  uVar12 = 0;
  puVar3 = (undefined8 *)*param_2;
  if (puVar4 != puVar3) {
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
    *param_2 = (ulonglong)puVar4;
  }
  puVar8 = local_res18;
  uVar7 = *local_res18 & 0x1f;
  if (uVar7 == 0) {
    return;
  }
  if (uVar7 == 0xc) {
    bVar14 = *(longlong *)(local_res18 + 4) == 0;
LAB_143628a54:
    if (bVar14) {
      return;
    }
  }
  else if (uVar7 == 10) {
    bVar14 = *(longlong *)(local_res18 + 4) ==
             *(longlong *)(*(longlong *)(local_res18 + 4) + 8) + 0x80;
    goto LAB_143628a54;
  }
  if ((uVar7 < 5) || (uVar7 - 8 < 4)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(&local_c8,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_c0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar7 = *param_4 & 0x1f;
  if (uVar7 == 0) {
LAB_143628aa7:
    bVar14 = true;
  }
  else {
    if (uVar7 == 0xc) {
      bVar14 = *(longlong *)(param_4 + 4) == 0;
LAB_143628a9b:
      if (bVar14) goto LAB_143628aa7;
    }
    else if (uVar7 == 10) {
      bVar14 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143628a9b;
    }
    bVar14 = false;
  }
  puVar6 = local_res18;
  if (!bVar14) {
    puVar6 = param_4;
  }
  local_b0 = *(undefined8 *)(puVar6 + 2);
  local_b8[0] = *puVar6;
  local_a8 = puVar6[4];
  uStack_a4 = puVar6[5];
  uStack_a0 = puVar6[6];
  uStack_9c = puVar6[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar10 = 3;
    uVar13 = uVar12;
    do {
      puVar6 = (uint *)(*(longlong *)(param_1 + 0x18) + uVar13);
      local_98[0] = *puVar6;
      local_90 = *(undefined8 *)(puVar6 + 2);
      local_88 = puVar6[4];
      uStack_84 = puVar6[5];
      uStack_80 = puVar6[6];
      uStack_7c = puVar6[7];
      if (9 < ((byte)*puVar6 & 0x1f)) {
        if ((*puVar6 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar12;
      FUN_143590110(local_58,param_5);
      local_e8[0] = 0;
      local_e0 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),puVar8,local_b8,local_e8,local_res10,local_98,0,
                    1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_e8[0] & 0x1f)) {
          if ((local_e8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_e8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar10 != 0);
        break;
      }
      if (((local_e8[0] & 0x1f) == 1) && (local_d8 != '\0')) {
        FUN_143635930(local_c8 + 8,*(longlong *)(param_1 + 0x18) + uVar13);
        if (9 < ((byte)local_e8[0] & 0x1f)) {
          if ((local_e8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_e8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      else {
        if (9 < (local_e8[0] & 0x1f)) {
          if ((local_e8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_e8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      uVar13 = uVar13 + 0x20;
      puVar8 = local_res18;
    } while (uVar12 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143628d80 FUN_143628d80 body=1007 status=ok
// SIG undefined FUN_143628d80(void)

void FUN_143628d80(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_d8 [2];
  longlong local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar10 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar4 = (undefined8 *)FUN_1435b5bc0(lVar10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar4,lVar10);
    *puVar4 = &PTR_FUN_145b4e990;
    lVar10 = *(longlong *)(lVar10 + 0x98);
    uVar2 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[10] = lVar10;
    puVar4[8] = &PTR_FUN_145b4e968;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar2;
  }
  uVar12 = 0;
  puVar3 = (undefined8 *)*param_2;
  if (puVar4 != puVar3) {
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
    *param_2 = (ulonglong)puVar4;
  }
  puVar8 = local_res18;
  uVar7 = *local_res18 & 0x1f;
  if (uVar7 == 0) {
    return;
  }
  if (uVar7 == 0xc) {
    bVar13 = *(longlong *)(local_res18 + 4) == 0;
LAB_143628e74:
    if (bVar13) {
      return;
    }
  }
  else if (uVar7 == 10) {
    bVar13 = *(longlong *)(local_res18 + 4) ==
             *(longlong *)(*(longlong *)(local_res18 + 4) + 8) + 0x80;
    goto LAB_143628e74;
  }
  if ((uVar7 < 5) || (uVar7 - 8 < 4)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_d8,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar7 = *param_4 & 0x1f;
  if (uVar7 == 0) {
LAB_143628ecf:
    bVar13 = true;
  }
  else {
    if (uVar7 == 0xc) {
      bVar13 = *(longlong *)(param_4 + 4) == 0;
LAB_143628ec3:
      if (bVar13) goto LAB_143628ecf;
    }
    else if (uVar7 == 10) {
      bVar13 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143628ec3;
    }
    bVar13 = false;
  }
  puVar6 = local_res18;
  if (!bVar13) {
    puVar6 = param_4;
  }
  local_b0 = *(undefined8 *)(puVar6 + 2);
  local_b8[0] = *puVar6;
  local_a8 = puVar6[4];
  uStack_a4 = puVar6[5];
  uStack_a0 = puVar6[6];
  uStack_9c = puVar6[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar10 = 3;
    do {
      local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
      local_98[0] = 3;
      local_90 = 0;
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar12;
      FUN_143590110(local_58,param_5);
      local_d8[0] = 0;
      local_d0 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),puVar8,local_b8,local_d8,local_res10,local_98,0,
                    1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar10 != 0);
        break;
      }
      if (((local_d8[0] & 0x1f) == 1) && (local_c8 != '\0')) {
        FUN_143635af0(puVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4));
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      else {
        if (9 < (local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar11 = 3;
        puVar9 = &stack0xffffffffffffffc8;
        do {
          puVar8 = (uint *)(puVar9 + -0x20);
          puVar9 = puVar9 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar9);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      puVar8 = local_res18;
    } while (uVar12 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143629170 FUN_143629170 body=1169 status=ok
// SIG undefined FUN_143629170(void)

void FUN_143629170(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_108 [2];
  undefined8 local_100;
  longlong *local_e8;
  longlong local_e0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 local_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar11 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar7 = (undefined8 *)FUN_1435b5bc0(lVar11);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar7,lVar11);
    *puVar7 = &PTR_FUN_145b4edd8;
    lVar11 = *(longlong *)(lVar11 + 0x98);
    uVar3 = *(undefined8 *)(lVar11 + 0x48);
    *(undefined1 *)(puVar7 + 9) = 0;
    puVar7[10] = lVar11;
    puVar7[8] = &PTR__scalar_deleting_destructor__145b4e708;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = uVar3;
  }
  uVar13 = 0;
  puVar4 = (undefined8 *)*param_2;
  if (puVar7 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar4 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  uVar9 = *param_3 & 0x1f;
  if (uVar9 == 0) {
    return;
  }
  if (uVar9 == 0xc) {
    bVar14 = *(longlong *)(param_3 + 4) == 0;
LAB_14362926a:
    if (bVar14) {
      return;
    }
  }
  else if (uVar9 == 10) {
    bVar14 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_14362926a;
  }
  if ((uVar9 < 5) || (uVar9 - 8 < 4)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
    FUN_1435cbe70(uVar3,uVar8);
    piVar2 = (int *)(local_e0 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar9 = *param_4 & 0x1f;
  if (uVar9 == 0) {
LAB_1436292bd:
    bVar14 = true;
  }
  else {
    if (uVar9 == 0xc) {
      bVar14 = *(longlong *)(param_4 + 4) == 0;
LAB_1436292b1:
      if (bVar14) goto LAB_1436292bd;
    }
    else if (uVar9 == 10) {
      bVar14 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1436292b1;
    }
    bVar14 = false;
  }
  if (!bVar14) {
    param_3 = param_4;
  }
  local_b0 = *(undefined8 *)(param_3 + 2);
  local_b8[0] = *param_3;
  local_a8 = param_3[4];
  uStack_a4 = param_3[5];
  uStack_a0 = param_3[6];
  uStack_9c = param_3[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  local_e8 = *(longlong **)(*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x98) + 0x240);
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar11 = 3;
    do {
      plVar5 = local_e8;
      FUN_1435900f0(local_98,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 8));
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar13;
      FUN_143590110(local_58,param_5);
      local_108[0] = 0;
      local_100 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),local_res18,local_b8,local_108,local_res10,
                    local_98,0,1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      local_d8[0] = 0;
      local_d0 = 0;
      cVar6 = (**(code **)(*plVar5 + 0x58))(plVar5,local_108,local_d8);
      if (cVar6 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar8);
        piVar2 = (int *)(local_e0 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      FUN_143578ef0(puVar7,local_c8);
      if (9 < ((byte)local_d8[0] & 0x1f)) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_d8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_108[0] & 0x1f)) {
        if ((local_108[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_108);
        }
        else {
          FUN_143592150();
        }
      }
      lVar12 = 3;
      puVar10 = &stack0xffffffffffffffc8;
      do {
        puVar1 = (uint *)(puVar10 + -0x20);
        puVar10 = puVar10 + -0x20;
        lVar12 = lVar12 + -1;
        if (9 < ((byte)*puVar1 & 0x1f)) {
          if ((*puVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar10);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar12 != 0);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143629610 FUN_143629610 body=1185 status=ok
// SIG undefined FUN_143629610(void)

void FUN_143629610(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_108 [2];
  undefined8 local_100;
  longlong *local_e8;
  longlong local_e0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar11 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar7 = (undefined8 *)FUN_1435b5bc0(lVar11);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar7,lVar11);
    *puVar7 = &PTR_FUN_145b4ebc8;
    lVar11 = *(longlong *)(lVar11 + 0x98);
    uVar3 = *(undefined8 *)(lVar11 + 0x48);
    *(undefined1 *)(puVar7 + 9) = 0;
    puVar7[10] = lVar11;
    puVar7[8] = &PTR_FUN_145b4eba0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = uVar3;
  }
  uVar13 = 0;
  puVar4 = (undefined8 *)*param_2;
  if (puVar7 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar4 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  uVar9 = *param_3 & 0x1f;
  if (uVar9 == 0) {
    return;
  }
  if (uVar9 == 0xc) {
    bVar14 = *(longlong *)(param_3 + 4) == 0;
LAB_14362970a:
    if (bVar14) {
      return;
    }
  }
  else if (uVar9 == 10) {
    bVar14 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_14362970a;
  }
  if ((uVar9 < 5) || (uVar9 - 8 < 4)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
    FUN_1435cbe70(uVar3,uVar8);
    piVar2 = (int *)(local_e0 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar9 = *param_4 & 0x1f;
  if (uVar9 == 0) {
LAB_14362975d:
    bVar14 = true;
  }
  else {
    if (uVar9 == 0xc) {
      bVar14 = *(longlong *)(param_4 + 4) == 0;
LAB_143629751:
      if (bVar14) goto LAB_14362975d;
    }
    else if (uVar9 == 10) {
      bVar14 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143629751;
    }
    bVar14 = false;
  }
  if (!bVar14) {
    param_3 = param_4;
  }
  local_b0 = *(undefined8 *)(param_3 + 2);
  local_b8[0] = *param_3;
  local_a8 = param_3[4];
  uStack_a4 = param_3[5];
  uStack_a0 = param_3[6];
  uStack_9c = param_3[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  local_e8 = *(longlong **)(*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x98) + 0x228);
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar11 = 3;
    do {
      plVar5 = local_e8;
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 8);
      local_98[0] = 4;
      local_90 = 0;
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar13;
      FUN_143590110(local_58,param_5);
      local_108[0] = 0;
      local_100 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),local_res18,local_b8,local_108,local_res10,
                    local_98,0,1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      local_d8[0] = 0;
      local_d0 = 0;
      cVar6 = (**(code **)(*plVar5 + 0x58))(plVar5,local_108,local_d8);
      if (cVar6 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar8);
        piVar2 = (int *)(local_e0 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      FUN_143516110(puVar7,local_c8);
      if (9 < ((byte)local_d8[0] & 0x1f)) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_d8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_108[0] & 0x1f)) {
        if ((local_108[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_108);
        }
        else {
          FUN_143592150();
        }
      }
      lVar12 = 3;
      puVar10 = &stack0xffffffffffffffc8;
      do {
        puVar1 = (uint *)(puVar10 + -0x20);
        puVar10 = puVar10 + -0x20;
        lVar12 = lVar12 + -1;
        if (9 < ((byte)*puVar1 & 0x1f)) {
          if ((*puVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar10);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar12 != 0);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143629ac0 FUN_143629ac0 body=1169 status=ok
// SIG undefined FUN_143629ac0(void)

void FUN_143629ac0(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_108 [2];
  undefined8 local_100;
  longlong *local_e8;
  longlong local_e0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar11 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar7 = (undefined8 *)FUN_1435b5bc0(lVar11);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar7,lVar11);
    *puVar7 = &PTR_FUN_145b4e758;
    lVar11 = *(longlong *)(lVar11 + 0x98);
    uVar3 = *(undefined8 *)(lVar11 + 0x48);
    *(undefined1 *)(puVar7 + 9) = 0;
    puVar7[10] = lVar11;
    puVar7[8] = &PTR_FUN_145b4e730;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = uVar3;
  }
  uVar13 = 0;
  puVar4 = (undefined8 *)*param_2;
  if (puVar7 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar4 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  uVar9 = *param_3 & 0x1f;
  if (uVar9 == 0) {
    return;
  }
  if (uVar9 == 0xc) {
    bVar14 = *(longlong *)(param_3 + 4) == 0;
LAB_143629bba:
    if (bVar14) {
      return;
    }
  }
  else if (uVar9 == 10) {
    bVar14 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_143629bba;
  }
  if ((uVar9 < 5) || (uVar9 - 8 < 4)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
    FUN_1435cbe70(uVar3,uVar8);
    piVar2 = (int *)(local_e0 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar9 = *param_4 & 0x1f;
  if (uVar9 == 0) {
LAB_143629c0d:
    bVar14 = true;
  }
  else {
    if (uVar9 == 0xc) {
      bVar14 = *(longlong *)(param_4 + 4) == 0;
LAB_143629c01:
      if (bVar14) goto LAB_143629c0d;
    }
    else if (uVar9 == 10) {
      bVar14 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143629c01;
    }
    bVar14 = false;
  }
  if (!bVar14) {
    param_3 = param_4;
  }
  local_b0 = *(undefined8 *)(param_3 + 2);
  local_b8[0] = *param_3;
  local_a8 = param_3[4];
  uStack_a4 = param_3[5];
  uStack_a0 = param_3[6];
  uStack_9c = param_3[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  local_e8 = *(longlong **)(*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x98) + 0x230);
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar11 = 3;
    do {
      plVar5 = local_e8;
      local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 4);
      local_98[0] = 2;
      local_90 = 0;
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar13;
      FUN_143590110(local_58,param_5);
      local_108[0] = 0;
      local_100 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),local_res18,local_b8,local_108,local_res10,
                    local_98,0,1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      local_d8[0] = 0;
      local_d0 = 0;
      cVar6 = (**(code **)(*plVar5 + 0x58))(plVar5,local_108,local_d8);
      if (cVar6 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar8);
        piVar2 = (int *)(local_e0 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      FUN_1435161a0(puVar7,local_c8);
      if (9 < ((byte)local_d8[0] & 0x1f)) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_d8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_108[0] & 0x1f)) {
        if ((local_108[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_108);
        }
        else {
          FUN_143592150();
        }
      }
      lVar12 = 3;
      puVar10 = &stack0xffffffffffffffc8;
      do {
        puVar1 = (uint *)(puVar10 + -0x20);
        puVar10 = puVar10 + -0x20;
        lVar12 = lVar12 + -1;
        if (9 < ((byte)*puVar1 & 0x1f)) {
          if ((*puVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar10);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar12 != 0);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143629f60 FUN_143629f60 body=1391 status=ok
// SIG undefined FUN_143629f60(void)

void FUN_143629f60(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_118 [2];
  undefined8 local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8 [2];
  undefined8 local_f0;
  longlong local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  longlong *local_c0;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar7 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar6 = (undefined8 *)FUN_1435b5bc0(lVar7);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar6,lVar7);
    *puVar6 = &PTR_FUN_145b4efe8;
    lVar7 = *(longlong *)(lVar7 + 0x98);
    uVar2 = *(undefined8 *)(lVar7 + 0x48);
    *(undefined1 *)(puVar6 + 9) = 0;
    puVar6[10] = lVar7;
    puVar6[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = uVar2;
  }
  uVar13 = 0;
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
  uVar10 = *param_3 & 0x1f;
  if (uVar10 == 0) {
    return;
  }
  if (uVar10 == 0xc) {
    bVar14 = *(longlong *)(param_3 + 4) == 0;
LAB_14362a058:
    if (bVar14) {
      return;
    }
  }
  else if (uVar10 == 10) {
    bVar14 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_14362a058;
  }
  if ((uVar10 < 5) || (uVar10 - 8 < 4)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = FUN_1435c8e40(local_d0,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar8);
    piVar1 = (int *)(local_c8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar10 = *param_4 & 0x1f;
  if (uVar10 == 0) {
LAB_14362a0ab:
    bVar14 = true;
  }
  else {
    if (uVar10 == 0xc) {
      bVar14 = *(longlong *)(param_4 + 4) == 0;
LAB_14362a09f:
      if (bVar14) goto LAB_14362a0ab;
    }
    else if (uVar10 == 10) {
      bVar14 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_14362a09f;
    }
    bVar14 = false;
  }
  if (!bVar14) {
    param_3 = param_4;
  }
  local_b0 = *(undefined8 *)(param_3 + 2);
  local_b8[0] = *param_3;
  local_a8 = param_3[4];
  uStack_a4 = param_3[5];
  uStack_a0 = param_3[6];
  uStack_9c = param_3[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  lVar7 = FUN_1435b4fe0(*(undefined8 *)(param_5 + 0x28));
  local_c0 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + 0xe0);
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar7 = 3;
    local_d8 = 0;
    do {
      plVar4 = local_c0;
      puVar9 = (uint *)(local_d8 + *(longlong *)(param_1 + 0x18));
      local_98[0] = *puVar9;
      local_90 = *(undefined8 *)(puVar9 + 2);
      local_88 = puVar9[4];
      uStack_84 = puVar9[5];
      uStack_80 = puVar9[6];
      uStack_7c = puVar9[7];
      if (9 < ((byte)*puVar9 & 0x1f)) {
        if ((*puVar9 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar13;
      FUN_143590110(local_58,param_5);
      local_f8[0] = 0;
      local_f0 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),local_res18,local_b8,local_f8,local_res10,
                    local_98,0,1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_f8[0] & 0x1f)) {
          if ((local_f8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_f8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar11 = &stack0xffffffffffffffc8;
        do {
          puVar9 = (uint *)(puVar11 + -0x20);
          puVar11 = puVar11 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar9 & 0x1f)) {
            if ((*puVar9 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar11);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      local_118[0] = 0;
      local_110 = 0;
      cVar5 = (**(code **)(*plVar4 + 0x58))(plVar4,local_f8,local_118);
      if (cVar5 == '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = FUN_1435c8e40(local_d0,0x40a,uVar2);
        FUN_1435cbe70(uVar2,uVar8);
        piVar1 = (int *)(local_c8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)local_118[0] & 0x1f)) {
          if ((local_118[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_118);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_f8[0] & 0x1f)) {
          if ((local_f8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_f8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar11 = &stack0xffffffffffffffc8;
        do {
          puVar9 = (uint *)(puVar11 + -0x20);
          puVar11 = puVar11 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar9 & 0x1f)) {
            if ((*puVar9 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar11);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      if (*(char *)(puVar6 + 9) == '\0') {
LAB_14362a231:
        FUN_1434f0300(puVar6 + 0xb,puVar6[0xe],puVar6[0xc] + 1);
        puVar9 = (uint *)(puVar6[0xb] + -0x20 + puVar6[0xc] * 0x20);
        if (puVar9 != (uint *)0x0) {
          *puVar9 = local_118[0];
          *(undefined8 *)(puVar9 + 2) = local_110;
          puVar9[4] = local_108;
          puVar9[5] = uStack_104;
          puVar9[6] = uStack_100;
          puVar9[7] = uStack_fc;
          if (9 < ((byte)local_118[0] & 0x1f)) {
            if ((local_118[0] >> 9 & 1) == 0) {
              FUN_143592070(local_118);
            }
            else {
              FUN_143592140();
            }
          }
        }
      }
      else {
        uVar2 = puVar6[10];
        uVar8 = FUN_1435c8e40(local_d0,0x466,uVar2);
        FUN_1435cbdf0(uVar2,uVar8);
        piVar1 = (int *)(local_c8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (*(char *)(puVar6 + 9) == '\0') goto LAB_14362a231;
      }
      if (9 < ((byte)local_118[0] & 0x1f)) {
        if ((local_118[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_118);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_f8[0] & 0x1f)) {
        if ((local_f8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_f8);
        }
        else {
          FUN_143592150();
        }
      }
      lVar12 = 3;
      puVar11 = &stack0xffffffffffffffc8;
      do {
        puVar9 = (uint *)(puVar11 + -0x20);
        puVar11 = puVar11 + -0x20;
        lVar12 = lVar12 + -1;
        if (9 < ((byte)*puVar9 & 0x1f)) {
          if ((*puVar9 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar11);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar12 != 0);
      uVar13 = uVar13 + 1;
      local_d8 = local_d8 + 0x20;
    } while (uVar13 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362a4d0 FUN_14362a4d0 body=1169 status=ok
// SIG undefined FUN_14362a4d0(void)

void FUN_14362a4d0(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,longlong param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint *local_res18;
  uint local_108 [2];
  undefined8 local_100;
  longlong *local_e8;
  longlong local_e0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  lVar11 = *(longlong *)(param_5 + 0x28);
  local_res18 = param_3;
  puVar7 = (undefined8 *)FUN_1435b5bc0(lVar11);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar7,lVar11);
    *puVar7 = &PTR_FUN_145b4e990;
    lVar11 = *(longlong *)(lVar11 + 0x98);
    uVar3 = *(undefined8 *)(lVar11 + 0x48);
    *(undefined1 *)(puVar7 + 9) = 0;
    puVar7[10] = lVar11;
    puVar7[8] = &PTR_FUN_145b4e968;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = uVar3;
  }
  uVar13 = 0;
  puVar4 = (undefined8 *)*param_2;
  if (puVar7 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar4 - 1;
      }
    }
    *param_2 = (ulonglong)puVar7;
  }
  uVar9 = *param_3 & 0x1f;
  if (uVar9 == 0) {
    return;
  }
  if (uVar9 == 0xc) {
    bVar14 = *(longlong *)(param_3 + 4) == 0;
LAB_14362a5ca:
    if (bVar14) {
      return;
    }
  }
  else if (uVar9 == 10) {
    bVar14 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_14362a5ca;
  }
  if ((uVar9 < 5) || (uVar9 - 8 < 4)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
    FUN_1435cbe70(uVar3,uVar8);
    piVar2 = (int *)(local_e0 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar9 = *param_4 & 0x1f;
  if (uVar9 == 0) {
LAB_14362a61d:
    bVar14 = true;
  }
  else {
    if (uVar9 == 0xc) {
      bVar14 = *(longlong *)(param_4 + 4) == 0;
LAB_14362a611:
      if (bVar14) goto LAB_14362a61d;
    }
    else if (uVar9 == 10) {
      bVar14 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_14362a611;
    }
    bVar14 = false;
  }
  if (!bVar14) {
    param_3 = param_4;
  }
  local_b0 = *(undefined8 *)(param_3 + 2);
  local_b8[0] = *param_3;
  local_a8 = param_3[4];
  uStack_a4 = param_3[5];
  uStack_a0 = param_3[6];
  uStack_9c = param_3[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  local_e8 = *(longlong **)(*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x98) + 0x238);
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar11 = 3;
    do {
      plVar5 = local_e8;
      local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 4);
      local_98[0] = 3;
      local_90 = 0;
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar13;
      FUN_143590110(local_58,param_5);
      local_108[0] = 0;
      local_100 = 0;
      local_res10[0] = 3;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x10),local_res18,local_b8,local_108,local_res10,
                    local_98,0,1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) != '\0') {
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      local_d8[0] = 0;
      local_d0 = 0;
      cVar6 = (**(code **)(*plVar5 + 0x58))(plVar5,local_108,local_d8);
      if (cVar6 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = FUN_1435c8e40(&local_e8,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar8);
        piVar2 = (int *)(local_e0 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_108[0] & 0x1f)) {
          if ((local_108[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_108);
          }
          else {
            FUN_143592150();
          }
        }
        puVar10 = &stack0xffffffffffffffc8;
        do {
          puVar1 = (uint *)(puVar10 + -0x20);
          puVar10 = puVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar10);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar11 != 0);
        break;
      }
      FUN_143635af0(puVar7,local_c8);
      if (9 < ((byte)local_d8[0] & 0x1f)) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_d8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_108[0] & 0x1f)) {
        if ((local_108[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_108);
        }
        else {
          FUN_143592150();
        }
      }
      lVar12 = 3;
      puVar10 = &stack0xffffffffffffffc8;
      do {
        puVar1 = (uint *)(puVar10 + -0x20);
        puVar10 = puVar10 + -0x20;
        lVar12 = lVar12 + -1;
        if (9 < ((byte)*puVar1 & 0x1f)) {
          if ((*puVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar10);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar12 != 0);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x20));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362a970 FUN_14362a970 body=129 status=ok
// SIG undefined FUN_14362a970(void)

void FUN_14362a970(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(int *)(param_1 + 0x20) != 0)) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + *(longlong *)(param_1 + 0x20) * 4);
    FUN_1434f0030((longlong *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20) + -1);
    *param_2 = uVar2;
  }
  return;
}



// FUNCTION 14362aa00 FUN_14362aa00 body=143 status=ok
// SIG undefined FUN_14362aa00(void)

void FUN_14362aa00(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_28,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(int *)(param_1 + 0x20) != 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + *(longlong *)(param_1 + 0x20) * 8);
    FUN_1433ab800((longlong *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20) + -1);
    *param_2 = uVar2;
  }
  return;
}



// FUNCTION 14362aa90 FUN_14362aa90 body=313 status=ok
// SIG undefined FUN_14362aa90(void)

void FUN_14362aa90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = FUN_1435c8e40(local_18,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar7);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar5 = *(longlong *)(lVar4 + -8 + lVar9 * 8);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    lVar4 = *(longlong *)(lVar4 + lVar9 * 8 + -8);
    uVar2 = uVar6 - 1;
    FUN_143578f70((longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),uVar2);
    if (uVar6 < uVar2) {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar6 * 8);
      for (lVar9 = uVar2 - uVar6; lVar9 != 0; lVar9 = lVar9 + -1) {
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
        }
        puVar8 = puVar8 + 1;
      }
    }
    if (lVar4 == 0) {
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
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
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
  }
  return;
}



// FUNCTION 14362abd0 FUN_14362abd0 body=176 status=ok
// SIG undefined FUN_14362abd0(void)

void FUN_14362abd0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_28 [2];
  longlong local_20;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_1435c8e40(local_28,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar2);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(int *)(param_1 + 0x20) != 0)) {
    uVar3 = FUN_143635330(param_1 + 0x18,local_28);
    FUN_143590140(param_2,uVar3);
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(local_28);
    }
  }
  return;
}



// FUNCTION 14362ac80 FUN_14362ac80 body=664 status=ok
// SIG undefined FUN_14362ac80(void)

ulonglong FUN_14362ac80(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar12 = local_2a8;
LAB_14362ace0:
  do {
    lVar9 = param_2;
    if (9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar9 = param_2 + 1;
      lVar10 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar5 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar5 * 8);
      *(undefined8 *)(lVar1 + lVar5 * 8) = uVar2;
      cVar4 = FUN_143630a00(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar10 * 8);
        *(undefined8 *)(lVar1 + lVar10 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      cVar4 = FUN_143630a00(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      uVar6 = FUN_143630a00(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if ((char)uVar6 == '\0') goto LAB_14362adb0;
      puVar11 = (ulonglong *)(*param_1 + param_2 * 8);
      puVar7 = (ulonglong *)(*param_1 + lVar10 * 8);
      do {
        uVar6 = *puVar11;
        uVar3 = *puVar7;
        *puVar7 = uVar6;
        *puVar11 = uVar3;
LAB_14362adb0:
        do {
          lVar9 = lVar9 + 1;
          if (param_3 <= lVar9) goto LAB_14362aee4;
          uVar6 = FUN_143630a00(param_4,*(undefined8 *)(*param_1 + lVar9 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while ((char)uVar6 != '\0');
        do {
          lVar10 = lVar10 + -1;
          if (lVar10 < 0) {
LAB_14362aee4:
            return uVar6 & 0xffffffffffffff00;
          }
          uVar6 = FUN_143630a00(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar10 * 8));
        } while ((char)uVar6 != '\0');
        lVar1 = *param_1;
        puVar11 = (ulonglong *)(lVar1 + lVar10 * 8);
        if (lVar10 < lVar9) goto LAB_14362ae06;
        puVar7 = (ulonglong *)(lVar1 + lVar9 * 8);
      } while( true );
    }
joined_r0x00014362ae5c:
    lVar10 = lVar9 + 1;
    if (lVar10 < param_3) {
      lVar1 = lVar9 * 8;
      cVar4 = FUN_143630a00(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar5 = lVar9;
      while (lVar9 = lVar10, cVar4 != '\0') {
        puVar8 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar8[1];
        puVar8[1] = *puVar8;
        *puVar8 = uVar2;
        if (lVar5 == param_2) break;
        lVar5 = lVar5 + -1;
        lVar1 = lVar5 * 8;
        cVar4 = FUN_143630a00(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x00014362ae5c;
    }
    if (plVar12 <= local_2a8) {
      return CONCAT71((int7)((ulonglong)local_2a8 >> 8),1);
    }
    param_2 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  } while( true );
LAB_14362ae06:
  uVar6 = *(ulonglong *)(lVar1 + param_2 * 8);
  *(ulonglong *)(lVar1 + param_2 * 8) = *puVar11;
  *puVar11 = uVar6;
  if (param_3 - lVar9 < lVar10 - param_2) {
    *plVar12 = param_2;
    plVar12[1] = lVar10;
    plVar12 = plVar12 + 2;
    param_2 = lVar9;
  }
  else {
    plVar12[1] = param_3;
    *plVar12 = lVar9;
    plVar12 = plVar12 + 2;
    param_3 = lVar10;
  }
  goto LAB_14362ace0;
}



// FUNCTION 14362af20 FUN_14362af20 body=664 status=ok
// SIG undefined FUN_14362af20(void)

ulonglong FUN_14362af20(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar12 = local_2a8;
LAB_14362af80:
  do {
    lVar9 = param_2;
    if (9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar9 = param_2 + 1;
      lVar10 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar5 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar5 * 8);
      *(undefined8 *)(lVar1 + lVar5 * 8) = uVar2;
      cVar4 = FUN_143630ab0(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar10 * 8);
        *(undefined8 *)(lVar1 + lVar10 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      cVar4 = FUN_143630ab0(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      uVar6 = FUN_143630ab0(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if ((char)uVar6 == '\0') goto LAB_14362b050;
      puVar11 = (ulonglong *)(*param_1 + param_2 * 8);
      puVar7 = (ulonglong *)(*param_1 + lVar10 * 8);
      do {
        uVar6 = *puVar11;
        uVar3 = *puVar7;
        *puVar7 = uVar6;
        *puVar11 = uVar3;
LAB_14362b050:
        do {
          lVar9 = lVar9 + 1;
          if (param_3 <= lVar9) goto LAB_14362b184;
          uVar6 = FUN_143630ab0(param_4,*(undefined8 *)(*param_1 + lVar9 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while ((char)uVar6 != '\0');
        do {
          lVar10 = lVar10 + -1;
          if (lVar10 < 0) {
LAB_14362b184:
            return uVar6 & 0xffffffffffffff00;
          }
          uVar6 = FUN_143630ab0(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar10 * 8));
        } while ((char)uVar6 != '\0');
        lVar1 = *param_1;
        puVar11 = (ulonglong *)(lVar1 + lVar10 * 8);
        if (lVar10 < lVar9) goto LAB_14362b0a6;
        puVar7 = (ulonglong *)(lVar1 + lVar9 * 8);
      } while( true );
    }
joined_r0x00014362b0fc:
    lVar10 = lVar9 + 1;
    if (lVar10 < param_3) {
      lVar1 = lVar9 * 8;
      cVar4 = FUN_143630ab0(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar5 = lVar9;
      while (lVar9 = lVar10, cVar4 != '\0') {
        puVar8 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar8[1];
        puVar8[1] = *puVar8;
        *puVar8 = uVar2;
        if (lVar5 == param_2) break;
        lVar5 = lVar5 + -1;
        lVar1 = lVar5 * 8;
        cVar4 = FUN_143630ab0(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x00014362b0fc;
    }
    if (plVar12 <= local_2a8) {
      return CONCAT71((int7)((ulonglong)local_2a8 >> 8),1);
    }
    param_2 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  } while( true );
LAB_14362b0a6:
  uVar6 = *(ulonglong *)(lVar1 + param_2 * 8);
  *(ulonglong *)(lVar1 + param_2 * 8) = *puVar11;
  *puVar11 = uVar6;
  if (param_3 - lVar9 < lVar10 - param_2) {
    *plVar12 = param_2;
    plVar12[1] = lVar10;
    plVar12 = plVar12 + 2;
    param_2 = lVar9;
  }
  else {
    plVar12[1] = param_3;
    *plVar12 = lVar9;
    plVar12 = plVar12 + 2;
    param_3 = lVar10;
  }
  goto LAB_14362af80;
}



// FUNCTION 14362b1c0 FUN_14362b1c0 body=664 status=ok
// SIG undefined FUN_14362b1c0(void)

ulonglong FUN_14362b1c0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar12 = local_2a8;
LAB_14362b220:
  do {
    lVar9 = param_2;
    if (9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar9 = param_2 + 1;
      lVar10 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar5 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar5 * 8);
      *(undefined8 *)(lVar1 + lVar5 * 8) = uVar2;
      cVar4 = FUN_143630b60(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar10 * 8);
        *(undefined8 *)(lVar1 + lVar10 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      cVar4 = FUN_143630b60(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      uVar6 = FUN_143630b60(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if ((char)uVar6 == '\0') goto LAB_14362b2f0;
      puVar11 = (ulonglong *)(*param_1 + param_2 * 8);
      puVar7 = (ulonglong *)(*param_1 + lVar10 * 8);
      do {
        uVar6 = *puVar11;
        uVar3 = *puVar7;
        *puVar7 = uVar6;
        *puVar11 = uVar3;
LAB_14362b2f0:
        do {
          lVar9 = lVar9 + 1;
          if (param_3 <= lVar9) goto LAB_14362b424;
          uVar6 = FUN_143630b60(param_4,*(undefined8 *)(*param_1 + lVar9 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while ((char)uVar6 != '\0');
        do {
          lVar10 = lVar10 + -1;
          if (lVar10 < 0) {
LAB_14362b424:
            return uVar6 & 0xffffffffffffff00;
          }
          uVar6 = FUN_143630b60(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar10 * 8));
        } while ((char)uVar6 != '\0');
        lVar1 = *param_1;
        puVar11 = (ulonglong *)(lVar1 + lVar10 * 8);
        if (lVar10 < lVar9) goto LAB_14362b346;
        puVar7 = (ulonglong *)(lVar1 + lVar9 * 8);
      } while( true );
    }
joined_r0x00014362b39c:
    lVar10 = lVar9 + 1;
    if (lVar10 < param_3) {
      lVar1 = lVar9 * 8;
      cVar4 = FUN_143630b60(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar5 = lVar9;
      while (lVar9 = lVar10, cVar4 != '\0') {
        puVar8 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar8[1];
        puVar8[1] = *puVar8;
        *puVar8 = uVar2;
        if (lVar5 == param_2) break;
        lVar5 = lVar5 + -1;
        lVar1 = lVar5 * 8;
        cVar4 = FUN_143630b60(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x00014362b39c;
    }
    if (plVar12 <= local_2a8) {
      return CONCAT71((int7)((ulonglong)local_2a8 >> 8),1);
    }
    param_2 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  } while( true );
LAB_14362b346:
  uVar6 = *(ulonglong *)(lVar1 + param_2 * 8);
  *(ulonglong *)(lVar1 + param_2 * 8) = *puVar11;
  *puVar11 = uVar6;
  if (param_3 - lVar9 < lVar10 - param_2) {
    *plVar12 = param_2;
    plVar12[1] = lVar10;
    plVar12 = plVar12 + 2;
    param_2 = lVar9;
  }
  else {
    plVar12[1] = param_3;
    *plVar12 = lVar9;
    plVar12 = plVar12 + 2;
    param_3 = lVar10;
  }
  goto LAB_14362b220;
}



// FUNCTION 14362b460 FUN_14362b460 body=664 status=ok
// SIG undefined FUN_14362b460(void)

ulonglong FUN_14362b460(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar12 = local_2a8;
LAB_14362b4c0:
  do {
    lVar9 = param_2;
    if (9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar9 = param_2 + 1;
      lVar10 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar5 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar5 * 8);
      *(undefined8 *)(lVar1 + lVar5 * 8) = uVar2;
      cVar4 = FUN_143630c10(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar10 * 8);
        *(undefined8 *)(lVar1 + lVar10 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      cVar4 = FUN_143630c10(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (cVar4 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      uVar6 = FUN_143630c10(param_4,*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if ((char)uVar6 == '\0') goto LAB_14362b590;
      puVar11 = (ulonglong *)(*param_1 + param_2 * 8);
      puVar7 = (ulonglong *)(*param_1 + lVar10 * 8);
      do {
        uVar6 = *puVar11;
        uVar3 = *puVar7;
        *puVar7 = uVar6;
        *puVar11 = uVar3;
LAB_14362b590:
        do {
          lVar9 = lVar9 + 1;
          if (param_3 <= lVar9) goto LAB_14362b6c4;
          uVar6 = FUN_143630c10(param_4,*(undefined8 *)(*param_1 + lVar9 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while ((char)uVar6 != '\0');
        do {
          lVar10 = lVar10 + -1;
          if (lVar10 < 0) {
LAB_14362b6c4:
            return uVar6 & 0xffffffffffffff00;
          }
          uVar6 = FUN_143630c10(param_4,*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar10 * 8));
        } while ((char)uVar6 != '\0');
        lVar1 = *param_1;
        puVar11 = (ulonglong *)(lVar1 + lVar10 * 8);
        if (lVar10 < lVar9) goto LAB_14362b5e6;
        puVar7 = (ulonglong *)(lVar1 + lVar9 * 8);
      } while( true );
    }
joined_r0x00014362b63c:
    lVar10 = lVar9 + 1;
    if (lVar10 < param_3) {
      lVar1 = lVar9 * 8;
      cVar4 = FUN_143630c10(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar5 = lVar9;
      while (lVar9 = lVar10, cVar4 != '\0') {
        puVar8 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar8[1];
        puVar8[1] = *puVar8;
        *puVar8 = uVar2;
        if (lVar5 == param_2) break;
        lVar5 = lVar5 + -1;
        lVar1 = lVar5 * 8;
        cVar4 = FUN_143630c10(param_4,*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x00014362b63c;
    }
    if (plVar12 <= local_2a8) {
      return CONCAT71((int7)((ulonglong)local_2a8 >> 8),1);
    }
    param_2 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  } while( true );
LAB_14362b5e6:
  uVar6 = *(ulonglong *)(lVar1 + param_2 * 8);
  *(ulonglong *)(lVar1 + param_2 * 8) = *puVar11;
  *puVar11 = uVar6;
  if (param_3 - lVar9 < lVar10 - param_2) {
    *plVar12 = param_2;
    plVar12[1] = lVar10;
    plVar12 = plVar12 + 2;
    param_2 = lVar9;
  }
  else {
    plVar12[1] = param_3;
    *plVar12 = lVar9;
    plVar12 = plVar12 + 2;
    param_3 = lVar10;
  }
  goto LAB_14362b4c0;
}



// FUNCTION 14362b700 FUN_14362b700 body=700 status=ok
// SIG undefined FUN_14362b700(void)

ulonglong FUN_14362b700(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong local_2a8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar12 = local_2a8;
LAB_14362b760:
  do {
    lVar9 = param_2;
    if (9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar9 = param_2 + 1;
      lVar10 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar5 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar5 * 8);
      *(undefined8 *)(lVar1 + lVar5 * 8) = uVar2;
      iVar4 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (iVar4 < 0) {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar10 * 8);
        *(undefined8 *)(lVar1 + lVar10 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      iVar4 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(*param_1 + param_2 * 8),
                            *(undefined8 *)(*param_1 + lVar9 * 8));
      if (iVar4 < 0) {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar9 * 8);
        *(undefined8 *)(lVar1 + lVar9 * 8) = uVar2;
      }
      uVar6 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(*param_1 + lVar10 * 8),
                            *(undefined8 *)(*param_1 + param_2 * 8));
      if (-1 < (int)uVar6) goto LAB_14362b833;
      puVar11 = (ulonglong *)(*param_1 + param_2 * 8);
      puVar7 = (ulonglong *)(*param_1 + lVar10 * 8);
      do {
        uVar6 = *puVar11;
        uVar3 = *puVar7;
        *puVar7 = uVar6;
        *puVar11 = uVar3;
LAB_14362b833:
        do {
          lVar9 = lVar9 + 1;
          if (param_3 <= lVar9) goto LAB_14362b988;
          uVar6 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(*param_1 + lVar9 * 8),
                                *(undefined8 *)(*param_1 + param_2 * 8));
        } while ((int)uVar6 < 0);
        do {
          lVar10 = lVar10 + -1;
          if (lVar10 < 0) {
LAB_14362b988:
            return uVar6 & 0xffffffffffffff00;
          }
          uVar6 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(*param_1 + param_2 * 8),
                                *(undefined8 *)(*param_1 + lVar10 * 8));
        } while ((int)uVar6 < 0);
        lVar1 = *param_1;
        puVar11 = (ulonglong *)(lVar1 + lVar10 * 8);
        if (lVar10 < lVar9) goto LAB_14362b897;
        puVar7 = (ulonglong *)(lVar1 + lVar9 * 8);
      } while( true );
    }
joined_r0x00014362b8ed:
    lVar10 = lVar9 + 1;
    if (lVar10 < param_3) {
      lVar1 = lVar9 * 8;
      iVar4 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(lVar1 + 8 + *param_1),
                            *(undefined8 *)(lVar1 + *param_1));
      lVar5 = lVar9;
      while (lVar9 = lVar10, iVar4 < 0) {
        puVar8 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar8[1];
        puVar8[1] = *puVar8;
        *puVar8 = uVar2;
        if (lVar5 == param_2) break;
        lVar5 = lVar5 + -1;
        lVar1 = lVar5 * 8;
        iVar4 = FUN_14361f5f0(*param_4,param_4[1],*(undefined8 *)(lVar1 + 8 + *param_1),
                              *(undefined8 *)(lVar1 + *param_1));
      }
      goto joined_r0x00014362b8ed;
    }
    if (plVar12 <= local_2a8) {
      return CONCAT71((int7)((ulonglong)local_2a8 >> 8),1);
    }
    param_2 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  } while( true );
LAB_14362b897:
  uVar6 = *(ulonglong *)(lVar1 + param_2 * 8);
  *(ulonglong *)(lVar1 + param_2 * 8) = *puVar11;
  *puVar11 = uVar6;
  if (param_3 - lVar9 < lVar10 - param_2) {
    *plVar12 = param_2;
    plVar12[1] = lVar10;
    plVar12 = plVar12 + 2;
    param_2 = lVar9;
  }
  else {
    plVar12[1] = param_3;
    *plVar12 = lVar9;
    param_3 = lVar10;
    plVar12 = plVar12 + 2;
  }
  goto LAB_14362b760;
}



// FUNCTION 14362b9c0 FUN_14362b9c0 body=949 status=ok
// SIG undefined FUN_14362b9c0(void)

undefined8 FUN_14362b9c0(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  longlong local_298 [80];
  
  plVar12 = local_298;
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  do {
    while (9 < param_3 - param_2) {
      lVar8 = *param_1;
      lVar10 = param_2 + 1;
      lVar11 = param_3 + -1;
      lVar9 = lVar11 * 0x10;
      uVar2 = *(undefined8 *)(lVar8 + param_2 * 0x10);
      puVar6 = (undefined8 *)(((param_3 - param_2) / 2 + param_2) * 0x10 + lVar8);
      *(undefined8 *)(lVar8 + param_2 * 0x10) = *puVar6;
      *puVar6 = uVar2;
      uVar4 = *(undefined4 *)(lVar8 + 8 + param_2 * 0x10);
      *(undefined4 *)(lVar8 + 8 + param_2 * 0x10) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)(puVar6 + 1) = uVar4;
      lVar8 = *param_1;
      lVar7 = lVar10 * 0x10;
      if (param_4 == '\0') {
        bVar14 = *(double *)(lVar7 + lVar8) == *(double *)(lVar9 + lVar8);
        bVar13 = *(double *)(lVar7 + lVar8) < *(double *)(lVar9 + lVar8);
      }
      else {
        bVar14 = *(double *)(lVar9 + lVar8) == *(double *)(lVar7 + lVar8);
        bVar13 = *(double *)(lVar9 + lVar8) < *(double *)(lVar7 + lVar8);
      }
      if (!bVar13 && !bVar14) {
        uVar2 = *(undefined8 *)(lVar9 + lVar8);
        *(undefined8 *)(lVar9 + lVar8) = *(undefined8 *)(lVar7 + lVar8);
        *(undefined8 *)(lVar7 + lVar8) = uVar2;
        uVar4 = *(undefined4 *)(lVar9 + 8 + lVar8);
        *(undefined4 *)(lVar9 + 8 + lVar8) = *(undefined4 *)(lVar7 + 8 + lVar8);
        *(undefined4 *)(lVar7 + 8 + lVar8) = uVar4;
      }
      lVar8 = *param_1;
      if (param_4 == '\0') {
        pdVar5 = (double *)(lVar8 + param_2 * 0x10);
        bVar14 = *(double *)(lVar7 + lVar8) == *pdVar5;
        bVar13 = *(double *)(lVar7 + lVar8) < *pdVar5;
      }
      else {
        dVar3 = *(double *)(lVar8 + param_2 * 0x10);
        bVar14 = dVar3 == *(double *)(lVar7 + lVar8);
        bVar13 = dVar3 < *(double *)(lVar7 + lVar8);
      }
      if (!bVar13 && !bVar14) {
        uVar2 = *(undefined8 *)(lVar8 + param_2 * 0x10);
        *(undefined8 *)(lVar8 + param_2 * 0x10) = *(undefined8 *)(lVar7 + lVar8);
        *(undefined8 *)(lVar7 + lVar8) = uVar2;
        uVar4 = *(undefined4 *)(lVar8 + 8 + param_2 * 0x10);
        *(undefined4 *)(lVar8 + 8 + param_2 * 0x10) = *(undefined4 *)(lVar7 + 8 + lVar8);
        *(undefined4 *)(lVar7 + 8 + lVar8) = uVar4;
      }
      lVar8 = *param_1;
      if (param_4 == '\0') {
        dVar3 = *(double *)(lVar8 + param_2 * 0x10);
        bVar14 = dVar3 == *(double *)(lVar9 + lVar8);
        bVar13 = dVar3 < *(double *)(lVar9 + lVar8);
      }
      else {
        pdVar5 = (double *)(lVar8 + param_2 * 0x10);
        bVar14 = *(double *)(lVar9 + lVar8) == *pdVar5;
        bVar13 = *(double *)(lVar9 + lVar8) < *pdVar5;
      }
      if (!bVar13 && !bVar14) {
        uVar2 = *(undefined8 *)(lVar9 + lVar8);
        *(undefined8 *)(lVar9 + lVar8) = *(undefined8 *)(lVar8 + param_2 * 0x10);
        *(undefined8 *)(lVar8 + param_2 * 0x10) = uVar2;
        uVar4 = *(undefined4 *)(lVar9 + 8 + lVar8);
        *(undefined4 *)(lVar9 + 8 + lVar8) = *(undefined4 *)(lVar8 + 8 + param_2 * 0x10);
        *(undefined4 *)(lVar8 + 8 + param_2 * 0x10) = uVar4;
      }
      while( true ) {
        do {
          lVar10 = lVar10 + 1;
          lVar7 = lVar7 + 0x10;
          if (param_3 <= lVar10) {
            return 0;
          }
          lVar8 = *param_1;
          if (param_4 == '\0') {
            dVar3 = *(double *)(lVar8 + param_2 * 0x10);
            bVar14 = dVar3 == *(double *)(lVar8 + lVar7);
            bVar13 = dVar3 < *(double *)(lVar8 + lVar7);
          }
          else {
            pdVar5 = (double *)(lVar8 + param_2 * 0x10);
            bVar14 = *(double *)(lVar8 + lVar7) == *pdVar5;
            bVar13 = *(double *)(lVar8 + lVar7) < *pdVar5;
          }
        } while (!bVar13 && !bVar14);
        lVar8 = *param_1;
        pdVar5 = (double *)(lVar9 + lVar8);
        do {
          lVar11 = lVar11 + -1;
          pdVar5 = pdVar5 + -2;
          if (lVar11 < 0) {
            return 0;
          }
          if (param_4 == '\0') {
            pdVar1 = (double *)(lVar8 + param_2 * 0x10);
            bVar14 = *pdVar5 == *pdVar1;
            bVar13 = *pdVar5 < *pdVar1;
          }
          else {
            dVar3 = *(double *)(lVar8 + param_2 * 0x10);
            bVar14 = dVar3 == *pdVar5;
            bVar13 = dVar3 < *pdVar5;
          }
        } while (!bVar13 && !bVar14);
        if (lVar11 < lVar10) break;
        lVar9 = lVar11 * 0x10;
        lVar7 = lVar10 * 0x10;
        uVar2 = *(undefined8 *)(lVar7 + lVar8);
        *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)(lVar9 + lVar8);
        *(undefined8 *)(lVar9 + lVar8) = uVar2;
        uVar4 = *(undefined4 *)(lVar7 + 8 + lVar8);
        *(undefined4 *)(lVar7 + 8 + lVar8) = *(undefined4 *)(lVar9 + 8 + lVar8);
        *(undefined4 *)(lVar9 + 8 + lVar8) = uVar4;
      }
      puVar6 = (undefined8 *)(lVar11 * 0x10 + lVar8);
      uVar2 = *(undefined8 *)(lVar8 + param_2 * 0x10);
      *(undefined8 *)(lVar8 + param_2 * 0x10) = *puVar6;
      *puVar6 = uVar2;
      uVar4 = *(undefined4 *)(lVar8 + 8 + param_2 * 0x10);
      *(undefined4 *)(lVar8 + 8 + param_2 * 0x10) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)(puVar6 + 1) = uVar4;
      if (param_3 - lVar10 < lVar11 - param_2) {
        *plVar12 = param_2;
        plVar12[1] = lVar11;
        param_2 = lVar10;
        plVar12 = plVar12 + 2;
      }
      else {
        plVar12[1] = param_3;
        *plVar12 = lVar10;
        param_3 = lVar11;
        plVar12 = plVar12 + 2;
      }
    }
    if (param_2 + 1 < param_3) {
      lVar8 = param_2 << 4;
      lVar10 = param_2 + 1;
      lVar11 = param_2;
LAB_14362bcc0:
      do {
        lVar7 = lVar10;
        lVar10 = *param_1;
        if (param_4 == '\0') {
          pdVar5 = (double *)(lVar10 + 0x10 + lVar8);
          bVar14 = *(double *)(lVar10 + lVar8) == *pdVar5;
          bVar13 = *(double *)(lVar10 + lVar8) < *pdVar5;
        }
        else {
          dVar3 = *(double *)(lVar10 + 0x10 + lVar8);
          bVar14 = dVar3 == *(double *)(lVar10 + lVar8);
          bVar13 = dVar3 < *(double *)(lVar10 + lVar8);
        }
        if (!bVar13 && !bVar14) {
          uVar2 = *(undefined8 *)(lVar10 + 0x10 + lVar8);
          *(undefined8 *)(lVar10 + 0x10 + lVar8) = *(undefined8 *)(lVar10 + lVar8);
          *(undefined8 *)(lVar10 + lVar8) = uVar2;
          uVar4 = *(undefined4 *)(lVar10 + 0x18 + lVar8);
          *(undefined4 *)(lVar10 + 0x18 + lVar8) = *(undefined4 *)(lVar10 + 8 + lVar8);
          *(undefined4 *)(lVar10 + 8 + lVar8) = uVar4;
          if (lVar11 != param_2) {
            lVar8 = lVar8 + -0x10;
            lVar10 = lVar7;
            lVar11 = lVar11 + -1;
            goto LAB_14362bcc0;
          }
        }
        lVar8 = lVar7 << 4;
        lVar10 = lVar7 + 1;
        lVar11 = lVar7;
      } while (lVar7 + 1 < param_3);
    }
    if (plVar12 <= local_298) {
      return CONCAT71((int7)((ulonglong)local_298 >> 8),1);
    }
    param_2 = plVar12[-2];
    param_3 = plVar12[-1];
    plVar12 = plVar12 + -2;
  } while( true );
}



// FUNCTION 14362bd80 FUN_14362bd80 body=1519 status=ok
// SIG undefined FUN_14362bd80(void)

ulonglong FUN_14362bd80(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_res18;
  longlong local_2c0;
  longlong local_2b8 [80];
  
  if ((ulonglong)(param_3 - param_2) < 2) {
    return CONCAT71((int7)((ulonglong)(param_3 - param_2) >> 8),1);
  }
  plVar8 = local_2b8;
  local_res18 = param_2;
  local_2c0 = param_3;
  do {
    while (lVar12 = local_res18, local_2c0 - local_res18 < 10) {
joined_r0x00014362c21d:
      lVar9 = lVar12 + 1;
      if (lVar9 < local_2c0) {
        lVar13 = lVar12 * 0x10;
        iVar6 = FUN_14361f4c0(param_4,*param_1 + lVar13 + 0x10);
        lVar14 = lVar12;
        while (lVar12 = lVar9, iVar6 < 0) {
          lVar10 = *param_1;
          lVar4 = *(longlong *)(lVar13 + 0x10 + lVar10);
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          lVar5 = *(longlong *)(lVar13 + lVar10);
          piVar1 = (int *)(lVar5 + 0x18);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(longlong *)(lVar13 + 0x10 + lVar10) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          *(longlong *)(lVar13 + 0x10 + lVar10) = lVar5;
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          piVar1 = (int *)(*(longlong *)(lVar13 + lVar10) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          *(longlong *)(lVar13 + lVar10) = lVar4;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar4);
          }
          uVar3 = *(undefined4 *)(lVar13 + 0x18 + lVar10);
          *(undefined4 *)(lVar13 + 0x18 + lVar10) = *(undefined4 *)(lVar13 + 8 + lVar10);
          *(undefined4 *)(lVar13 + 8 + lVar10) = uVar3;
          if (lVar14 == local_res18) break;
          lVar14 = lVar14 + -1;
          lVar13 = lVar14 * 0x10;
          iVar6 = FUN_14361f4c0(param_4,*param_1 + lVar13 + 0x10);
        }
        goto joined_r0x00014362c21d;
      }
      if (plVar8 <= local_2b8) {
        return CONCAT71((int7)((ulonglong)local_2b8 >> 8),1);
      }
      local_res18 = plVar8[-2];
      local_2c0 = plVar8[-1];
      plVar8 = plVar8 + -2;
    }
    lVar12 = *param_1;
    lVar13 = local_res18 * 0x10;
    lVar9 = *(longlong *)(lVar13 + lVar12);
    plVar2 = (longlong *)(lVar13 + lVar12);
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    plVar11 = (longlong *)((local_res18 + (local_2c0 - local_res18) / 2) * 0x10 + lVar12);
    lVar12 = *plVar11;
    piVar1 = (int *)(lVar12 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *plVar2 = lVar12;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    piVar1 = (int *)(*plVar11 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *plVar11 = lVar9;
    piVar1 = (int *)(lVar9 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar9);
    }
    lVar12 = plVar2[1];
    *(int *)(plVar2 + 1) = (int)plVar11[1];
    *(int *)(plVar11 + 1) = (int)lVar12;
    lVar10 = local_res18 + 1;
    lVar12 = local_2c0 + -1;
    lVar9 = lVar10 * 0x10;
    lVar14 = lVar12 * 0x10;
    iVar6 = FUN_14361f4c0(param_4,lVar14 + *param_1,*param_1 + lVar9);
    if (iVar6 < 0) {
      plVar2 = (longlong *)(*param_1 + lVar9);
      plVar11 = (longlong *)(*param_1 + lVar14);
      lVar4 = *plVar11;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      lVar5 = *plVar2;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*plVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar11 = lVar5;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar2 = lVar4;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
      lVar4 = plVar11[1];
      *(int *)(plVar11 + 1) = (int)plVar2[1];
      *(int *)(plVar2 + 1) = (int)lVar4;
    }
    iVar6 = FUN_14361f4c0(param_4,*param_1 + lVar13,*param_1 + lVar9);
    if (iVar6 < 0) {
      plVar2 = (longlong *)(*param_1 + lVar9);
      plVar11 = (longlong *)(*param_1 + lVar13);
      lVar4 = *plVar11;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      lVar5 = *plVar2;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*plVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar11 = lVar5;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar2 = lVar4;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
      lVar4 = plVar11[1];
      *(int *)(plVar11 + 1) = (int)plVar2[1];
      *(int *)(plVar2 + 1) = (int)lVar4;
    }
    uVar7 = FUN_14361f4c0(param_4,*param_1 + lVar14,*param_1 + lVar13);
    if ((int)uVar7 < 0) {
      plVar2 = (longlong *)(*param_1 + lVar13);
      plVar11 = (longlong *)(*param_1 + lVar14);
      lVar4 = *plVar11;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      lVar5 = *plVar2;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*plVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar11 = lVar5;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar2 = lVar4;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
      uVar7 = (ulonglong)*(uint *)(plVar2 + 1);
      lVar4 = plVar11[1];
      *(uint *)(plVar11 + 1) = *(uint *)(plVar2 + 1);
      *(int *)(plVar2 + 1) = (int)lVar4;
    }
LAB_14362c073:
    do {
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
      if (local_2c0 <= lVar10) {
LAB_14362c333:
        return uVar7 & 0xffffffffffffff00;
      }
      uVar7 = FUN_14361f4c0(param_4,*param_1 + lVar9,*param_1 + lVar13);
    } while ((int)uVar7 < 0);
    do {
      lVar12 = lVar12 + -1;
      lVar14 = lVar14 + -0x10;
      if (lVar12 < 0) goto LAB_14362c333;
      uVar7 = FUN_14361f4c0(param_4,*param_1 + lVar13,*param_1 + lVar14);
    } while ((int)uVar7 < 0);
    lVar4 = *param_1;
    lVar14 = lVar12 * 0x10;
    if (lVar10 <= lVar12) {
      plVar2 = (longlong *)(lVar4 + lVar14);
      lVar9 = lVar10 * 0x10;
      plVar11 = (longlong *)(lVar4 + lVar9);
      lVar4 = *plVar11;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      lVar5 = *plVar2;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*plVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar11 = lVar5;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *plVar2 = lVar4;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
      uVar7 = (ulonglong)*(uint *)(plVar2 + 1);
      lVar4 = plVar11[1];
      *(uint *)(plVar11 + 1) = *(uint *)(plVar2 + 1);
      *(int *)(plVar2 + 1) = (int)lVar4;
      goto LAB_14362c073;
    }
    lVar9 = *(longlong *)(lVar4 + lVar13);
    plVar2 = (longlong *)(lVar4 + lVar13);
    plVar11 = (longlong *)(lVar14 + lVar4);
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    lVar13 = *plVar11;
    piVar1 = (int *)(lVar13 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *plVar2 = lVar13;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    piVar1 = (int *)(*plVar11 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *plVar11 = lVar9;
    piVar1 = (int *)(lVar9 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar9);
    }
    lVar9 = plVar2[1];
    *(int *)(plVar2 + 1) = (int)plVar11[1];
    *(int *)(plVar11 + 1) = (int)lVar9;
    if (local_2c0 - lVar10 < lVar12 - local_res18) {
      *plVar8 = local_res18;
      plVar8[1] = lVar12;
      plVar8 = plVar8 + 2;
      local_res18 = lVar10;
    }
    else {
      plVar8[1] = local_2c0;
      *plVar8 = lVar10;
      plVar8 = plVar8 + 2;
      local_2c0 = lVar12;
    }
  } while( true );
}



// FUNCTION 14362c370 FUN_14362c370 body=193 status=ok
// SIG undefined FUN_14362c370(void)

void FUN_14362c370(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  lVar6 = param_1[1] + -1;
  if (0 < lVar6) {
    do {
      plVar2 = (longlong *)(*param_1 + lVar5 * 8);
      plVar3 = (longlong *)(*param_1 + lVar6 * 8);
      if (*plVar2 != 0) {
        piVar1 = (int *)(*plVar2 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      lVar4 = *plVar2;
      if (*plVar3 != 0) {
        piVar1 = (int *)(*plVar3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (*plVar2 != 0) {
        piVar1 = (int *)(*plVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *plVar2 = *plVar3;
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      }
      if (*plVar3 != 0) {
        piVar1 = (int *)(*plVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *plVar3 = lVar4;
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar4);
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar5 < lVar6);
  }
  return;
}



// FUNCTION 14362c440 FUN_14362c440 body=173 status=ok
// SIG undefined FUN_14362c440(void)

void FUN_14362c440(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
    *param_2 = **(undefined4 **)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) == 1) {
      Scaleform::
      ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
      ::Clear(param_1 + 0x18);
      return;
    }
    memmove(*(void **)(param_1 + 0x18),(void *)((longlong)*(void **)(param_1 + 0x18) + 4),
            *(longlong *)(param_1 + 0x20) * 4 - 4);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  }
  return;
}



// FUNCTION 14362c4f0 FUN_14362c4f0 body=175 status=ok
// SIG undefined FUN_14362c4f0(void)

void FUN_14362c4f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
    *param_2 = **(undefined8 **)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) == 1) {
      Scaleform::
      ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
      ::Clear(param_1 + 0x18);
      return;
    }
    memmove(*(void **)(param_1 + 0x18),(void *)((longlong)*(void **)(param_1 + 0x18) + 8),
            *(longlong *)(param_1 + 0x20) * 8 - 8);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  }
  return;
}



// FUNCTION 14362c5a0 FUN_14362c5a0 body=159 status=ok
// SIG undefined FUN_14362c5a0(void)

void FUN_14362c5a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar4 = **(longlong **)(param_1 + 0x18);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(*param_2 + 8) + 0x80;
    }
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar4;
    FUN_143635e30(param_1 + 0x18,0);
  }
  return;
}



// FUNCTION 14362c640 FUN_14362c640 body=128 status=ok
// SIG undefined FUN_14362c640(void)

void FUN_14362c640(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(char *)(param_1 + 8) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_143590140(param_2,*(undefined8 *)(param_1 + 0x18));
    FUN_1434ef9b0(param_1 + 0x18,0);
  }
  return;
}



// FUNCTION 14362c6c0 FUN_14362c6c0 body=440 status=ok
// SIG undefined FUN_14362c6c0(void)

void FUN_14362c6c0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  int local_58 [2];
  uint local_50 [2];
  undefined8 local_48;
  
  lVar5 = *(longlong *)(param_5 + 0x28);
  puVar2 = (undefined8 *)FUN_1435b5bc0(lVar5);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar2,lVar5);
    *puVar2 = &PTR_FUN_145b4edd8;
    lVar5 = *(longlong *)(lVar5 + 0x98);
    uVar1 = *(undefined8 *)(lVar5 + 0x48);
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[10] = lVar5;
    puVar2[8] = &PTR__scalar_deleting_destructor__145b4e708;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,puVar2);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = 0;
  param_5._0_4_ = 0xffffff;
  if (((param_3 == 0) ||
      (pcVar3 = (char *)FUN_143590b70(param_4,local_res18,local_58), *pcVar3 != '\0')) &&
     ((param_3 < 2 ||
      (pcVar3 = (char *)FUN_143590b70(param_4 + 0x20,local_res18,&param_5), *pcVar3 != '\0')))) {
    bVar6 = false;
    if (local_58[0] < 0) {
      local_58[0] = local_58[0] + *(int *)(param_1 + 0x20);
      bVar6 = local_58[0] < 0;
    }
    if (bVar6) {
      local_58[0] = 0;
    }
    if ((int)param_5 < 0) {
      param_5._0_4_ = (int)param_5 + *(int *)(param_1 + 0x20);
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < (int)param_5) {
      param_5._0_4_ = iVar4;
    }
    if (local_58[0] < (int)param_5) {
      lVar5 = (longlong)local_58[0] * 8;
      iVar4 = local_58[0];
      do {
        FUN_143578ef0(puVar2,*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x18)));
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar4 < (int)param_5);
    }
  }
  return;
}



// FUNCTION 14362c880 FUN_14362c880 body=441 status=ok
// SIG undefined FUN_14362c880(void)

void FUN_14362c880(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  int local_58 [2];
  uint local_50 [2];
  undefined8 local_48;
  
  lVar5 = *(longlong *)(param_5 + 0x28);
  puVar2 = (undefined8 *)FUN_1435b5bc0(lVar5);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar2,lVar5);
    *puVar2 = &PTR_FUN_145b4ebc8;
    lVar5 = *(longlong *)(lVar5 + 0x98);
    uVar1 = *(undefined8 *)(lVar5 + 0x48);
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[10] = lVar5;
    puVar2[8] = &PTR_FUN_145b4eba0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,puVar2);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = 0;
  param_5._0_4_ = 0xffffff;
  if (((param_3 == 0) ||
      (pcVar3 = (char *)FUN_143590b70(param_4,local_res18,local_58), *pcVar3 != '\0')) &&
     ((param_3 < 2 ||
      (pcVar3 = (char *)FUN_143590b70(param_4 + 0x20,local_res18,&param_5), *pcVar3 != '\0')))) {
    bVar6 = false;
    if (local_58[0] < 0) {
      local_58[0] = local_58[0] + *(int *)(param_1 + 0x20);
      bVar6 = local_58[0] < 0;
    }
    if (bVar6) {
      local_58[0] = 0;
    }
    if ((int)param_5 < 0) {
      param_5._0_4_ = (int)param_5 + *(int *)(param_1 + 0x20);
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < (int)param_5) {
      param_5._0_4_ = iVar4;
    }
    if (local_58[0] < (int)param_5) {
      lVar5 = (longlong)local_58[0] * 8;
      iVar4 = local_58[0];
      do {
        FUN_143516110(puVar2,*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x18)));
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar4 < (int)param_5);
    }
  }
  return;
}



// FUNCTION 14362ca40 FUN_14362ca40 body=439 status=ok
// SIG undefined FUN_14362ca40(void)

void FUN_14362ca40(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  int local_58 [2];
  uint local_50 [2];
  undefined8 local_48;
  
  lVar5 = *(longlong *)(param_5 + 0x28);
  puVar2 = (undefined8 *)FUN_1435b5bc0(lVar5);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar2,lVar5);
    *puVar2 = &PTR_FUN_145b4e758;
    lVar5 = *(longlong *)(lVar5 + 0x98);
    uVar1 = *(undefined8 *)(lVar5 + 0x48);
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[10] = lVar5;
    puVar2[8] = &PTR_FUN_145b4e730;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,puVar2);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = 0;
  param_5._0_4_ = 0xffffff;
  if (((param_3 == 0) ||
      (pcVar3 = (char *)FUN_143590b70(param_4,local_res18,local_58), *pcVar3 != '\0')) &&
     ((param_3 < 2 ||
      (pcVar3 = (char *)FUN_143590b70(param_4 + 0x20,local_res18,&param_5), *pcVar3 != '\0')))) {
    bVar6 = false;
    if (local_58[0] < 0) {
      local_58[0] = local_58[0] + *(int *)(param_1 + 0x20);
      bVar6 = local_58[0] < 0;
    }
    if (bVar6) {
      local_58[0] = 0;
    }
    if ((int)param_5 < 0) {
      param_5._0_4_ = (int)param_5 + *(int *)(param_1 + 0x20);
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < (int)param_5) {
      param_5._0_4_ = iVar4;
    }
    if (local_58[0] < (int)param_5) {
      lVar5 = (longlong)local_58[0] * 4;
      iVar4 = local_58[0];
      do {
        FUN_1435161a0(puVar2,*(undefined4 *)(lVar5 + *(longlong *)(param_1 + 0x18)));
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 4;
      } while (iVar4 < (int)param_5);
    }
  }
  return;
}



// FUNCTION 14362cc00 FUN_14362cc00 body=490 status=ok
// SIG undefined FUN_14362cc00(void)

void FUN_14362cc00(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_res18 [16];
  int local_58 [2];
  uint local_50 [2];
  longlong local_48;
  
  lVar2 = *(longlong *)(param_5 + 0x28);
  puVar4 = (undefined8 *)FUN_1435b5bc0(lVar2);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar4,lVar2);
    *puVar4 = &PTR_FUN_145b4efe8;
    lVar2 = *(longlong *)(lVar2 + 0x98);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[10] = lVar2;
    puVar4[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar3;
  }
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,puVar4);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = 0;
  param_5._0_4_ = 0xffffff;
  if (((param_3 == 0) ||
      (pcVar5 = (char *)FUN_143590b70(param_4,local_res18,local_58), *pcVar5 != '\0')) &&
     ((param_3 < 2 ||
      (pcVar5 = (char *)FUN_143590b70(param_4 + 0x20,local_res18,&param_5), *pcVar5 != '\0')))) {
    bVar8 = false;
    if (local_58[0] < 0) {
      local_58[0] = local_58[0] + *(int *)(param_1 + 0x20);
      bVar8 = local_58[0] < 0;
    }
    if (bVar8) {
      local_58[0] = 0;
    }
    if ((int)param_5 < 0) {
      param_5._0_4_ = (int)param_5 + *(int *)(param_1 + 0x20);
    }
    iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar7 < (int)param_5) {
      param_5._0_4_ = iVar7;
    }
    iVar7 = local_58[0];
    if (local_58[0] < (int)param_5) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x18);
        if (*(char *)(puVar4 + 9) == '\0') {
LAB_14362cdba:
          FUN_1434ef7a0(puVar4 + 0xb,(longlong)iVar7 * 0x20 + lVar2);
        }
        else {
          uVar3 = puVar4[10];
          uVar6 = FUN_1435c8e40(local_50,0x466,uVar3);
          FUN_1435cbdf0(uVar3,uVar6);
          piVar1 = (int *)(local_48 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (*(char *)(puVar4 + 9) == '\0') goto LAB_14362cdba;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_5);
    }
  }
  return;
}



// FUNCTION 14362cdf0 FUN_14362cdf0 body=439 status=ok
// SIG undefined FUN_14362cdf0(void)

void FUN_14362cdf0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  int local_58 [2];
  uint local_50 [2];
  undefined8 local_48;
  
  lVar5 = *(longlong *)(param_5 + 0x28);
  puVar2 = (undefined8 *)FUN_1435b5bc0(lVar5);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar2,lVar5);
    *puVar2 = &PTR_FUN_145b4e990;
    lVar5 = *(longlong *)(lVar5 + 0x98);
    uVar1 = *(undefined8 *)(lVar5 + 0x48);
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[10] = lVar5;
    puVar2[8] = &PTR_FUN_145b4e968;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar1;
  }
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,puVar2);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = 0;
  param_5._0_4_ = 0xffffff;
  if (((param_3 == 0) ||
      (pcVar3 = (char *)FUN_143590b70(param_4,local_res18,local_58), *pcVar3 != '\0')) &&
     ((param_3 < 2 ||
      (pcVar3 = (char *)FUN_143590b70(param_4 + 0x20,local_res18,&param_5), *pcVar3 != '\0')))) {
    bVar6 = false;
    if (local_58[0] < 0) {
      local_58[0] = local_58[0] + *(int *)(param_1 + 0x20);
      bVar6 = local_58[0] < 0;
    }
    if (bVar6) {
      local_58[0] = 0;
    }
    if ((int)param_5 < 0) {
      param_5._0_4_ = (int)param_5 + *(int *)(param_1 + 0x20);
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < (int)param_5) {
      param_5._0_4_ = iVar4;
    }
    if (local_58[0] < (int)param_5) {
      lVar5 = (longlong)local_58[0] * 4;
      iVar4 = local_58[0];
      do {
        FUN_143635af0(puVar2,*(undefined4 *)(lVar5 + *(longlong *)(param_1 + 0x18)));
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 4;
      } while (iVar4 < (int)param_5);
    }
  }
  return;
}



// FUNCTION 14362cfb0 FUN_14362cfb0 body=2482 status=ok
// SIG undefined FUN_14362cfb0(void)

void FUN_14362cfb0(longlong param_1,ulonglong *param_2,uint *param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  uint *puVar16;
  uint *puVar17;
  undefined **ppuVar18;
  uint *puVar19;
  longlong *plVar20;
  uint *puVar21;
  uint *puVar22;
  bool bVar23;
  ushort local_res18;
  byte local_res1a;
  ulonglong local_res20;
  uint local_118 [4];
  ushort local_108;
  byte local_106;
  undefined **local_f8;
  uint *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined **local_d8;
  undefined ***local_d0;
  undefined **local_c8;
  uint *puStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  uint *local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 local_80;
  longlong local_78;
  undefined **local_68;
  uint *puStack_60;
  undefined ***local_58;
  
  puVar19 = (uint *)0x0;
  local_88[0] = 0;
  local_80 = 0;
  local_118[0] = 0;
  local_res20 = param_4;
  if (((*param_3 & 0x1f) < 0xc) && (2 < (*param_3 & 0x1f) - 5)) {
    pcVar10 = (char *)FUN_143590b70(param_3,&local_res18,local_118);
    if (*pcVar10 == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = FUN_1435c8e40(&local_c8,0x40a,uVar2);
      FUN_1435cbe70(uVar2,uVar11);
      puStack_c0 = puStack_c0 + 6;
      *puStack_c0 = *puStack_c0 - 1;
      if (*puStack_c0 == 0) {
        FUN_14335f920();
      }
      if (((byte)local_88[0] & 0x1f) < 10) {
        return;
      }
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_88);
        return;
      }
      FUN_143592150();
      return;
    }
  }
  else {
    FUN_143590140(local_88,param_3);
  }
  puVar16 = *(uint **)(param_1 + 0x10);
  lVar13 = *(longlong *)(puVar16 + 0x12);
  local_a8 = (uint *)0x0;
  local_a0 = (uint *)0x0;
  local_98 = 0;
  uVar8 = local_88[0] & 0x1f;
  puVar22 = puVar19;
  puVar21 = puVar19;
  local_90 = lVar13;
  if (uVar8 == 0) {
LAB_14362d2e3:
    puVar12 = *(uint **)(param_1 + 0x20);
    if ((local_118[0] & 0x10) == 0) {
      local_c8 = (undefined **)0x0;
      local_68 = &PTR_FUN_145b4f2b8;
      local_58 = &local_c8;
      puStack_c0 = (uint *)0x0;
      local_b8 = 0;
      puVar17 = puVar19;
      local_b0 = lVar13;
      puStack_60 = puVar16;
      if (puVar12 != (uint *)0x0) {
        do {
          (*(code *)local_68[1])
                    (&local_68,puVar17,*(longlong *)(param_1 + 0x18) + (longlong)puVar17 * 8);
          puVar17 = (uint *)(ulonglong)((int)puVar17 + 1);
        } while (puVar17 < puVar12);
      }
      local_res1a = (byte)(local_118[0] >> 10) & 1;
      local_res18 = CONCAT11((char)local_118[0],(char)(local_118[0] >> 1)) & 0x101;
      local_108 = local_res18;
      local_106 = local_res1a;
      FUN_14362bd80(&local_c8,0,puStack_c0,&local_108);
      if (((local_118[0] & 4) != 0) && (uVar8 = 1, (uint *)0x1 < puStack_c0)) {
        puVar16 = (uint *)0x1;
        do {
          iVar9 = FUN_14361f4c0(&local_res18,local_c8 + (ulonglong)(uVar8 - 1) * 2,
                                local_c8 + (longlong)puVar16 * 2);
          if (iVar9 == 0) {
            uVar5 = *param_2;
            if (uVar5 != 0) {
              if ((uVar5 & 1) == 0) {
                if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar5 - 1;
              }
              *param_2 = 0;
            }
            local_68 = &PTR_FUN_145af1858;
            FUN_143630890(&local_c8);
            FUN_143630900(&local_a8);
            goto LAB_14362d911;
          }
          uVar8 = uVar8 + 1;
          puVar16 = (uint *)(ulonglong)uVar8;
        } while (puVar16 < puStack_c0);
      }
      puVar16 = puVar19;
      if (puStack_c0 != (uint *)0x0) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x18);
          uVar8 = *(uint *)((longlong)puVar16 + (longlong)(local_c8 + 1));
          FUN_143578f70(&local_a8,lVar13,(longlong)puVar22 + 1);
          if (local_a8 + ((longlong)local_a0 + -1) * 2 != (uint *)0x0) {
            lVar13 = *(longlong *)(lVar4 + (ulonglong)uVar8 * 8);
            if (lVar13 != 0) {
              piVar1 = (int *)(lVar13 + 0x18);
              *piVar1 = *piVar1 + 1;
            }
            *(undefined8 *)(local_a8 + ((longlong)local_a0 + -1) * 2) =
                 *(undefined8 *)(lVar4 + (ulonglong)uVar8 * 8);
          }
          puVar19 = (uint *)((longlong)puVar19 + 1);
          puVar16 = puVar16 + 4;
          puVar21 = local_a8;
          puVar22 = local_a0;
          lVar13 = local_90;
        } while (puVar19 < puStack_c0);
      }
      local_68 = &PTR_FUN_145af1858;
      ppuVar18 = local_c8 + (longlong)puStack_c0 * 2 + -2;
      ppuVar15 = local_c8;
      for (puVar19 = puStack_c0; local_c8 = ppuVar15, puVar19 != (uint *)0x0;
          puVar19 = (uint *)((longlong)puVar19 + -1)) {
        piVar1 = (int *)(*ppuVar18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        ppuVar18 = ppuVar18 + -2;
        ppuVar15 = local_c8;
      }
    }
    else {
      local_f8 = (undefined **)0x0;
      local_d8 = &PTR_FUN_145b4f268;
      local_d0 = &local_f8;
      local_f0 = (uint *)0x0;
      local_e8 = 0;
      puVar16 = puVar19;
      local_e0 = lVar13;
      if (puVar12 != (uint *)0x0) {
        do {
          (*(code *)local_d8[1])
                    (&local_d8,puVar16,*(longlong *)(param_1 + 0x18) + (longlong)puVar16 * 8);
          puVar16 = (uint *)(ulonglong)((int)puVar16 + 1);
        } while (puVar16 < puVar12);
      }
      FUN_14362b9c0(&local_f8,0,local_f0,(byte)(local_118[0] >> 1) & 1);
      if (((local_118[0] & 4) != 0) && (puVar16 = (uint *)0x1, (uint *)0x1 < local_f0)) {
        do {
          if ((double)local_f8[(ulonglong)((int)puVar16 - 1) * 2] ==
              (double)local_f8[(longlong)puVar16 * 2]) {
            uVar5 = *param_2;
            if (uVar5 != 0) {
              if ((uVar5 & 1) == 0) {
                if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar5 - 1;
              }
              *param_2 = 0;
            }
            local_d8 = &PTR_FUN_145af1858;
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_f8);
            FUN_143630900(&local_a8);
            goto LAB_14362d911;
          }
          puVar16 = (uint *)(ulonglong)((int)puVar16 + 1);
        } while (puVar16 < local_f0);
      }
      puVar16 = puVar19;
      if (local_f0 != (uint *)0x0) {
        do {
          uVar8 = *(uint *)((longlong)(local_f8 + 1) + (longlong)puVar16);
          lVar4 = *(longlong *)(param_1 + 0x18);
          FUN_143578f70(&local_a8,lVar13,(longlong)puVar22 + 1);
          if (local_a8 + ((longlong)local_a0 + -1) * 2 != (uint *)0x0) {
            lVar13 = *(longlong *)(lVar4 + (ulonglong)uVar8 * 8);
            if (lVar13 != 0) {
              piVar1 = (int *)(lVar13 + 0x18);
              *piVar1 = *piVar1 + 1;
            }
            *(undefined8 *)(local_a8 + ((longlong)local_a0 + -1) * 2) =
                 *(undefined8 *)(lVar4 + (ulonglong)uVar8 * 8);
          }
          puVar19 = (uint *)((longlong)puVar19 + 1);
          puVar16 = puVar16 + 4;
          puVar21 = local_a8;
          puVar22 = local_a0;
          lVar13 = local_90;
        } while (puVar19 < local_f0);
      }
      local_d8 = &PTR_FUN_145af1858;
      ppuVar15 = local_f8;
    }
  }
  else {
    if (uVar8 == 0xc) {
      bVar23 = local_78 == 0;
LAB_14362d0fc:
      if (bVar23) goto LAB_14362d2e3;
    }
    else if (uVar8 == 10) {
      bVar23 = local_78 == *(longlong *)(local_78 + 8) + 0x80;
      goto LAB_14362d0fc;
    }
    puVar16 = *(uint **)(param_1 + 0x20);
    local_f8 = (undefined **)0x0;
    local_d0 = &local_f8;
    local_f0 = (uint *)0x0;
    local_e8 = 0;
    local_d8 = &PTR_FUN_145b4f2f8;
    puVar12 = puVar19;
    local_e0 = lVar13;
    if (puVar16 != (uint *)0x0) {
      do {
        (*(code *)local_d8[1])
                  (&local_d8,puVar12,*(longlong *)(param_1 + 0x18) + (longlong)puVar12 * 8);
        puVar12 = (uint *)(ulonglong)((int)puVar12 + 1);
      } while (puVar12 < puVar16);
    }
    local_c8 = *(undefined ***)(param_1 + 0x10);
    puStack_c0 = local_88;
    local_68 = local_c8;
    puStack_60 = puStack_c0;
    FUN_14362b460(&local_f8,0,local_f0,&local_68);
    if (((local_118[0] & 4) != 0) && (uVar8 = 1, (uint *)0x1 < local_f0)) {
      puVar16 = (uint *)0x1;
      do {
        cVar7 = FUN_143631780(&local_c8,local_f8[uVar8 - 1],local_f8[(longlong)puVar16]);
        if (cVar7 != '\0') {
          uVar5 = *param_2;
          if (uVar5 != 0) {
            if ((uVar5 & 1) == 0) {
              if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *param_2 = uVar5 - 1;
            }
            *param_2 = 0;
          }
          local_d8 = &PTR_FUN_145af1858;
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_f8);
          FUN_143630900(&local_a8);
          goto LAB_14362d911;
        }
        uVar8 = uVar8 + 1;
        puVar16 = (uint *)(ulonglong)uVar8;
      } while (puVar16 < local_f0);
    }
    if (local_f0 != (uint *)0x0) {
      do {
        plVar3 = (longlong *)local_f8[(longlong)puVar19];
        lVar4 = *plVar3;
        if (lVar4 != 0) {
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + 1;
        }
        lVar4 = *plVar3;
        FUN_143578f70(&local_a8,lVar13,(longlong)puVar22 + 1);
        puVar22 = local_a0;
        if (local_a8 + ((longlong)local_a0 + -1) * 2 != (uint *)0x0) {
          if (lVar4 != 0) {
            *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          }
          *(longlong *)(local_a8 + ((longlong)local_a0 + -1) * 2) = lVar4;
        }
        if (lVar4 != 0) {
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar4);
          }
        }
        puVar19 = (uint *)((longlong)puVar19 + 1);
        puVar21 = local_a8;
        lVar13 = local_90;
      } while (puVar19 < local_f0);
    }
    local_d8 = &PTR_FUN_145af1858;
    ppuVar15 = local_f8;
  }
  puVar19 = (uint *)0x0;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,ppuVar15);
  if ((local_118[0] & 8) == 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    puVar16 = *(uint **)(param_1 + 0x20);
    FUN_143578f70(plVar3,*(undefined8 *)(param_1 + 0x30),puVar22);
    if (puVar16 < puVar22) {
      puVar14 = (undefined8 *)(*plVar3 + (longlong)puVar16 * 8);
      for (lVar13 = (longlong)puVar22 - (longlong)puVar16; lVar13 != 0; lVar13 = lVar13 + -1) {
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = 0;
        }
        puVar14 = puVar14 + 1;
      }
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      puVar16 = puVar21;
      do {
        plVar20 = (longlong *)((longlong)puVar16 + (*plVar3 - (longlong)puVar21));
        if (*(longlong *)puVar16 != 0) {
          piVar1 = (int *)(*(longlong *)puVar16 + 0x18);
          *piVar1 = *piVar1 + 1;
        }
        lVar13 = *plVar20;
        if (lVar13 != 0) {
          piVar1 = (int *)(lVar13 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        lVar13 = *(longlong *)puVar16;
        puVar19 = (uint *)((longlong)puVar19 + 1);
        puVar16 = puVar16 + 2;
        *plVar20 = lVar13;
      } while (puVar19 < *(uint **)(param_1 + 0x20));
    }
    uVar5 = local_res20;
    if (local_res20 != *param_2) {
      if (local_res20 != 0) {
        *(uint *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1U & 0x8fffffff;
      }
      uVar6 = *param_2;
      if (uVar6 != 0) {
        if ((uVar6 & 1) == 0) {
          if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar6 - 1;
        }
      }
      *param_2 = uVar5;
    }
  }
  else {
    lVar13 = *(longlong *)(local_res20 + 0x28);
    puVar12 = (uint *)FUN_1435b5bc0(lVar13);
    puVar16 = puVar19;
    if (puVar12 != (uint *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar12,lVar13);
      *(undefined ***)puVar12 = &PTR_FUN_145b4edd8;
      lVar13 = *(longlong *)(lVar13 + 0x98);
      lVar4 = *(longlong *)(lVar13 + 0x48);
      *(undefined1 *)(puVar12 + 0x12) = 0;
      *(longlong *)(puVar12 + 0x14) = lVar13;
      *(undefined ***)(puVar12 + 0x10) = &PTR__scalar_deleting_destructor__145b4e708;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
      puVar12[0x18] = 0;
      puVar12[0x19] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      *(longlong *)(puVar12 + 0x1c) = lVar4;
      puVar16 = puVar12;
    }
    puVar12 = (uint *)*param_2;
    if (puVar16 != puVar12) {
      if (puVar12 != (uint *)0x0) {
        if (((ulonglong)puVar12 & 1) == 0) {
          if ((puVar12[2] & 0x3fffff) != 0) {
            puVar12[2] = puVar12[2] - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar12 - 1;
        }
      }
      *param_2 = (ulonglong)puVar16;
    }
    uVar5 = *param_2;
    if (*(char *)(uVar5 + 0x48) != '\0') {
      uVar2 = *(undefined8 *)(uVar5 + 0x50);
      uVar11 = FUN_1435c8e40(&local_68,0x466,uVar2);
      FUN_1435cbdf0(uVar2,uVar11);
      puVar16 = puStack_60 + 6;
      *puVar16 = *puVar16 - 1;
      if (*puVar16 == 0) {
        FUN_14335f920();
      }
      if (*(char *)(uVar5 + 0x48) != '\0') goto LAB_14362d8d4;
    }
    if (puVar22 != (uint *)0x0) {
      do {
        FUN_143578f70(uVar5 + 0x58,*(undefined8 *)(uVar5 + 0x70),*(longlong *)(uVar5 + 0x60) + 1);
        puVar14 = (undefined8 *)
                  (*(longlong *)(uVar5 + 0x58) + (*(longlong *)(uVar5 + 0x60) + -1) * 8);
        if (puVar14 != (undefined8 *)0x0) {
          if (*(longlong *)(puVar21 + (longlong)puVar19 * 2) != 0) {
            piVar1 = (int *)(*(longlong *)(puVar21 + (longlong)puVar19 * 2) + 0x18);
            *piVar1 = *piVar1 + 1;
          }
          *puVar14 = *(undefined8 *)(puVar21 + (longlong)puVar19 * 2);
        }
        puVar19 = (uint *)((longlong)puVar19 + 1);
      } while (puVar19 < puVar22);
    }
  }
LAB_14362d8d4:
  puVar19 = puVar21 + ((longlong)puVar22 + -1) * 2;
  for (; puVar22 != (uint *)0x0; puVar22 = (uint *)((longlong)puVar22 + -1)) {
    if (*(longlong *)puVar19 != 0) {
      piVar1 = (int *)(*(longlong *)puVar19 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar19 = puVar19 + -2;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar21);
LAB_14362d911:
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362d970 FUN_14362d970 body=2331 status=ok
// SIG undefined FUN_14362d970(void)

void FUN_14362d970(longlong param_1,ulonglong *param_2,uint *param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined **ppuVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  ulonglong uVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  bool bVar21;
  ulonglong local_res18;
  ulonglong local_res20;
  uint local_118 [4];
  undefined2 local_108;
  byte local_106;
  longlong local_f8;
  undefined ***local_f0;
  undefined ***local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined ***pppuStack_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined ***pppuStack_b0;
  undefined ***local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined ***local_90;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined **local_68;
  undefined ***local_60;
  undefined8 local_58;
  undefined **local_50;
  
  pppuVar16 = (undefined ***)0x0;
  local_88._0_4_ = 0;
  local_80 = 0;
  local_118[0] = 0;
  local_res20 = param_4;
  if (((*param_3 & 0x1f) < 0xc) && (2 < (*param_3 & 0x1f) - 5)) {
    pcVar8 = (char *)FUN_143590b70(param_3,&local_res18,local_118);
    if (*pcVar8 == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar9 = FUN_1435c8e40(&local_d8,0x40a,uVar3);
      FUN_1435cbe70(uVar3,uVar9);
      piVar1 = (int *)((longlong)pppuStack_d0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (((byte)(uint)local_88 & 0x1f) < 10) {
        return;
      }
      if (((uint)local_88 >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(&local_88);
      return;
    }
  }
  else {
    FUN_143590140(&local_88,param_3);
  }
  pppuStack_b0 = *(undefined ****)(param_1 + 0x10);
  ppuVar18 = pppuStack_b0[9];
  local_f8 = 0;
  local_f0 = (undefined ***)0x0;
  local_e8 = (undefined ***)0x0;
  uVar6 = (uint)local_88 & 0x1f;
  local_e0 = ppuVar18;
  if (uVar6 == 0) {
LAB_14362dca0:
    pppuVar15 = *(undefined ****)(param_1 + 0x20);
    if ((local_118[0] & 0x10) == 0) {
      local_d8 = (undefined **)0x0;
      local_b8 = &PTR_FUN_145b4f2c8;
      local_a8 = &local_d8;
      pppuStack_d0 = (undefined ***)0x0;
      local_c8 = 0;
      pppuVar14 = pppuVar16;
      local_c0 = ppuVar18;
      if (pppuVar15 != (undefined ***)0x0) {
        do {
          (*(code *)local_b8[1])
                    (&local_b8,pppuVar14,*(longlong *)(param_1 + 0x18) + (longlong)pppuVar14 * 8);
          pppuVar14 = (undefined ***)(ulonglong)((int)pppuVar14 + 1);
        } while (pppuVar14 < pppuVar15);
      }
      local_res18 = CONCAT71(local_res18._1_7_,(char)(local_118[0] >> 1)) & 0xffffffffffffff01;
      bVar11 = (byte)(local_118[0] >> 10);
      local_106 = bVar11 & 1;
      local_res18 = CONCAT62(local_res18._2_6_,CONCAT11((char)local_118[0],(undefined1)local_res18))
                    & 0xffffffffffff01ff;
      local_108 = (undefined2)local_res18;
      local_res18 = CONCAT53(local_res18._3_5_,CONCAT12(bVar11,(undefined2)local_res18)) &
                    0xffffffffff01ffff;
      FUN_14362bd80(&local_d8,0,pppuStack_d0,&local_108);
      if (((local_118[0] & 4) != 0) && (uVar6 = 1, (undefined ***)0x1 < pppuStack_d0)) {
        pppuVar15 = (undefined ***)0x1;
        do {
          iVar7 = FUN_14361f4c0(&local_res18,local_d8 + (ulonglong)(uVar6 - 1) * 2,
                                local_d8 + (longlong)pppuVar15 * 2);
          if (iVar7 == 0) {
            uVar17 = *param_2;
            if (uVar17 != 0) {
              if ((uVar17 & 1) == 0) {
                if ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar17 - 1;
              }
              *param_2 = 0;
            }
            local_b8 = &PTR_FUN_145af1858;
            FUN_143630890(&local_d8);
            lVar13 = 0;
            goto LAB_14362e22d;
          }
          uVar6 = uVar6 + 1;
          pppuVar15 = (undefined ***)(ulonglong)uVar6;
        } while (pppuVar15 < pppuStack_d0);
      }
      pppuVar15 = pppuVar16;
      pppuVar14 = pppuVar16;
      pppuVar19 = pppuVar16;
      pppuVar20 = pppuVar16;
      if (pppuStack_d0 != (undefined ***)0x0) {
        do {
          pppuVar16 = (undefined ***)((longlong)pppuVar15 + 1);
          local_98 = *(undefined ***)(param_1 + 0x18);
          local_res18 = (ulonglong)*(uint *)((longlong)(local_d8 + 1) + (longlong)pppuVar14);
          if (pppuVar16 < pppuVar15) {
            pppuVar15 = pppuVar16;
            if (pppuVar16 < (undefined ***)((ulonglong)pppuVar19 >> 1)) {
LAB_14362e01d:
              FUN_1432f2240(&local_f8,ppuVar18,pppuVar15);
              ppuVar18 = local_e0;
              pppuVar19 = local_e8;
            }
          }
          else if (pppuVar19 < pppuVar16) {
            pppuVar15 = (undefined ***)(((ulonglong)pppuVar16 >> 2) + (longlong)pppuVar16);
            goto LAB_14362e01d;
          }
          puVar10 = (undefined8 *)(local_f8 + -8 + (longlong)pppuVar16 * 8);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = local_98[local_res18];
          }
          pppuVar20 = (undefined ***)((longlong)pppuVar20 + 1);
          pppuVar15 = pppuVar16;
          pppuVar14 = pppuVar14 + 2;
          local_f0 = pppuVar16;
        } while (pppuVar20 < pppuStack_d0);
      }
      ppuVar18 = local_d8 + (longlong)pppuStack_d0 * 2 + -2;
      local_b8 = &PTR_FUN_145af1858;
      ppuVar12 = local_d8;
      for (pppuVar15 = pppuStack_d0; local_d8 = ppuVar12, pppuVar15 != (undefined ***)0x0;
          pppuVar15 = (undefined ***)((longlong)pppuVar15 + -1)) {
        piVar1 = (int *)(*ppuVar18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        ppuVar18 = ppuVar18 + -2;
        ppuVar12 = local_d8;
      }
    }
    else {
      local_b8 = (undefined **)0x0;
      local_d8 = &PTR_FUN_145b4f278;
      pppuStack_d0 = &local_b8;
      pppuStack_b0 = (undefined ***)0x0;
      local_a8 = (undefined ***)0x0;
      pppuVar14 = pppuVar16;
      local_a0 = ppuVar18;
      if (pppuVar15 != (undefined ***)0x0) {
        do {
          (*(code *)local_d8[1])
                    (&local_d8,pppuVar14,*(longlong *)(param_1 + 0x18) + (longlong)pppuVar14 * 8);
          pppuVar14 = (undefined ***)(ulonglong)((int)pppuVar14 + 1);
        } while (pppuVar14 < pppuVar15);
      }
      FUN_14362b9c0(&local_b8,0,pppuStack_b0,(byte)(local_118[0] >> 1) & 1);
      if (((local_118[0] & 4) != 0) &&
         (pppuVar15 = (undefined ***)0x1, (undefined ***)0x1 < pppuStack_b0)) {
        do {
          if ((double)local_b8[(ulonglong)((int)pppuVar15 - 1) * 2] ==
              (double)local_b8[(longlong)pppuVar15 * 2]) {
            uVar17 = *param_2;
            if (uVar17 != 0) {
              if ((uVar17 & 1) == 0) {
                if ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar17 - 1;
              }
              *param_2 = 0;
            }
            local_d8 = &PTR_FUN_145af1858;
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_b8);
            lVar13 = 0;
            goto LAB_14362e22d;
          }
          pppuVar15 = (undefined ***)(ulonglong)((int)pppuVar15 + 1);
        } while (pppuVar15 < pppuStack_b0);
      }
      pppuVar15 = pppuVar16;
      ppuVar12 = local_b8;
      pppuVar14 = pppuVar16;
      pppuVar19 = pppuVar16;
      pppuVar20 = pppuVar16;
      if (pppuStack_b0 != (undefined ***)0x0) {
        do {
          local_res18 = (ulonglong)*(uint *)((longlong)(ppuVar12 + 1) + (longlong)pppuVar14);
          pppuVar16 = (undefined ***)((longlong)pppuVar15 + 1);
          local_98 = *(undefined ***)(param_1 + 0x18);
          if (pppuVar16 < pppuVar15) {
            pppuVar15 = pppuVar16;
            if (pppuVar16 < (undefined ***)((ulonglong)pppuVar19 >> 1)) {
LAB_14362de24:
              FUN_1432f2240(&local_f8,ppuVar18,pppuVar15);
              ppuVar12 = local_b8;
              ppuVar18 = local_e0;
              pppuVar19 = local_e8;
            }
          }
          else if (pppuVar19 < pppuVar16) {
            pppuVar15 = (undefined ***)(((ulonglong)pppuVar16 >> 2) + (longlong)pppuVar16);
            goto LAB_14362de24;
          }
          puVar10 = (undefined8 *)(local_f8 + -8 + (longlong)pppuVar16 * 8);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = local_98[local_res18];
            ppuVar12 = local_b8;
          }
          pppuVar20 = (undefined ***)((longlong)pppuVar20 + 1);
          pppuVar15 = pppuVar16;
          pppuVar14 = pppuVar14 + 2;
          local_f0 = pppuVar16;
        } while (pppuVar20 < pppuStack_b0);
      }
      local_d8 = &PTR_FUN_145af1858;
    }
  }
  else {
    if (uVar6 == 0xc) {
      bVar21 = local_78 == 0;
LAB_14362dac1:
      if (bVar21) goto LAB_14362dca0;
    }
    else if (uVar6 == 10) {
      bVar21 = local_78 == *(longlong *)(local_78 + 8) + 0x80;
      goto LAB_14362dac1;
    }
    pppuVar15 = *(undefined ****)(param_1 + 0x20);
    local_68 = (undefined **)0x0;
    local_90 = &local_68;
    local_60 = (undefined ***)0x0;
    local_58 = 0;
    local_98 = &PTR_FUN_145b4f2f8;
    pppuVar14 = pppuVar16;
    local_50 = ppuVar18;
    if (pppuVar15 != (undefined ***)0x0) {
      do {
        (*(code *)local_98[1])
                  (&local_98,pppuVar14,*(longlong *)(param_1 + 0x18) + (longlong)pppuVar14 * 8);
        pppuVar14 = (undefined ***)(ulonglong)((int)pppuVar14 + 1);
      } while (pppuVar14 < pppuVar15);
    }
    local_d8 = *(undefined ***)(param_1 + 0x10);
    pppuStack_d0 = &local_88;
    local_b8 = local_d8;
    pppuStack_b0 = pppuStack_d0;
    FUN_14362b1c0(&local_68,0,local_60,&local_b8);
    if (((local_118[0] & 4) != 0) && (uVar6 = 1, (undefined ***)0x1 < local_60)) {
      pppuVar15 = (undefined ***)0x1;
      do {
        cVar5 = FUN_1436316d0(&local_d8,local_68[uVar6 - 1],local_68[(longlong)pppuVar15]);
        if (cVar5 != '\0') {
          uVar17 = *param_2;
          if (uVar17 != 0) {
            if ((uVar17 & 1) == 0) {
              if ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *param_2 = uVar17 - 1;
            }
            *param_2 = 0;
          }
          local_98 = &PTR_FUN_145af1858;
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68);
          lVar13 = 0;
          goto LAB_14362e22d;
        }
        uVar6 = uVar6 + 1;
        pppuVar15 = (undefined ***)(ulonglong)uVar6;
      } while (pppuVar15 < local_60);
    }
    pppuVar15 = pppuVar16;
    pppuVar14 = pppuVar16;
    pppuVar19 = pppuVar16;
    if (local_60 != (undefined ***)0x0) {
      do {
        pppuVar16 = (undefined ***)((longlong)pppuVar15 + 1);
        puVar10 = (undefined8 *)local_68[(longlong)pppuVar19];
        if (pppuVar16 < pppuVar15) {
          pppuVar15 = pppuVar16;
          if (pppuVar16 < (undefined ***)((ulonglong)pppuVar14 >> 1)) {
LAB_14362dc43:
            FUN_1432f2240(&local_f8,ppuVar18,pppuVar15);
            ppuVar18 = local_e0;
            pppuVar14 = local_e8;
          }
        }
        else if (pppuVar14 < pppuVar16) {
          pppuVar15 = (undefined ***)(((ulonglong)pppuVar16 >> 2) + (longlong)pppuVar16);
          goto LAB_14362dc43;
        }
        puVar2 = (undefined8 *)(local_f8 + -8 + (longlong)pppuVar16 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *puVar10;
        }
        pppuVar19 = (undefined ***)((longlong)pppuVar19 + 1);
        pppuVar15 = pppuVar16;
        local_f0 = pppuVar16;
      } while (pppuVar19 < local_60);
    }
    local_98 = &PTR_FUN_145af1858;
    ppuVar12 = local_68;
  }
  uVar17 = 0;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,ppuVar12);
  if ((local_118[0] & 8) != 0) {
    lVar13 = *(longlong *)(local_res20 + 0x28);
    puVar10 = (undefined8 *)FUN_1435b5bc0(lVar13);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      UInterpTrackInst::UInterpTrackInst(puVar10,lVar13);
      *puVar10 = &PTR_FUN_145b4ebc8;
      lVar13 = *(longlong *)(lVar13 + 0x98);
      uVar3 = *(undefined8 *)(lVar13 + 0x48);
      *(undefined1 *)(puVar10 + 9) = 0;
      puVar10[10] = lVar13;
      puVar10[8] = &PTR_FUN_145b4eba0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = uVar3;
    }
    puVar2 = (undefined8 *)*param_2;
    if (puVar10 != puVar2) {
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
      *param_2 = (ulonglong)puVar10;
    }
    FUN_143631310(*param_2 + 0x40,&local_f8);
    lVar13 = local_f8;
    goto LAB_14362e22d;
  }
  if (pppuVar16 < *(undefined ****)(param_1 + 0x20)) {
    pppuVar15 = pppuVar16;
    if (pppuVar16 < (undefined ***)(*(ulonglong *)(param_1 + 0x28) >> 1)) {
LAB_14362e1b0:
      FUN_1432f2240(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),pppuVar15);
    }
  }
  else if (*(undefined ****)(param_1 + 0x28) < pppuVar16) {
    pppuVar15 = (undefined ***)(((ulonglong)pppuVar16 >> 2) + (longlong)pppuVar16);
    goto LAB_14362e1b0;
  }
  uVar4 = local_res20;
  *(undefined ****)(param_1 + 0x20) = pppuVar16;
  if (pppuVar16 != (undefined ***)0x0) {
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar17 * 8) =
           *(undefined8 *)(local_f8 + uVar17 * 8);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(ulonglong *)(param_1 + 0x20));
  }
  lVar13 = local_f8;
  if (local_res20 != *param_2) {
    if (local_res20 != 0) {
      *(uint *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1U & 0x8fffffff;
    }
    uVar17 = *param_2;
    if (uVar17 != 0) {
      if ((uVar17 & 1) == 0) {
        if ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar17 - 1;
      }
    }
    *param_2 = uVar4;
    lVar13 = local_f8;
  }
LAB_14362e22d:
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar13);
  if (9 < ((byte)(uint)local_88 & 0x1f)) {
    if (((uint)local_88 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_88);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362e290 FUN_14362e290 body=2407 status=ok
// SIG undefined FUN_14362e290(void)

void FUN_14362e290(longlong param_1,ulonglong *param_2,uint *param_3,ulonglong param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  bool bVar21;
  undefined **local_res18;
  ulonglong local_res20;
  uint local_118 [2];
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_e8;
  byte local_e6;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  uint *puStack_b0;
  uint *local_a8;
  undefined **local_98;
  longlong *local_90;
  uint local_88 [2];
  undefined8 local_80;
  longlong local_78;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  
  uVar14 = 0;
  local_88[0] = 0;
  local_80 = 0;
  local_118[0] = 0;
  local_res20 = param_4;
  if (((*param_3 & 0x1f) < 0xc) && (2 < (*param_3 & 0x1f) - 5)) {
    pcVar7 = (char *)FUN_143590b70(param_3,&local_res18,local_118);
    if (*pcVar7 == '\0') {
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      uVar8 = FUN_1435c8e40(&local_b8,0x40a,uVar20);
      FUN_1435cbe70(uVar20,uVar8);
      piVar1 = (int *)((longlong)puStack_b0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (((byte)local_88[0] & 0x1f) < 10) {
        return;
      }
      if ((local_88[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(local_88);
      return;
    }
  }
  else {
    FUN_143590140(local_88,param_3);
  }
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar20 = *(undefined8 *)(puVar3 + 0x12);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uVar5 = local_88[0] & 0x1f;
  local_f8 = uVar20;
  local_c0 = uVar20;
  if (uVar5 == 0) {
LAB_14362e633:
    puStack_b0 = (uint *)&local_110;
    uVar12 = *(ulonglong *)(param_1 + 0x20);
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    if ((local_118[0] & 0x10) == 0) {
      local_b8 = &PTR_FUN_145b4f2e8;
      uVar17 = uVar14;
      local_a8 = puStack_b0;
      if (uVar12 != 0) {
        do {
          puStack_b0 = puVar3;
          (*(code *)local_b8[1])(&local_b8,uVar17,*(longlong *)(param_1 + 0x18) + uVar17 * 4);
          uVar17 = (ulonglong)((int)uVar17 + 1);
          puVar3 = puStack_b0;
        } while (uVar17 < uVar12);
      }
      puStack_b0 = puVar3;
      local_res18 = (undefined **)
                    (CONCAT71(local_res18._1_7_,(char)(local_118[0] >> 1)) & 0xffffffffffffff01);
      bVar10 = (byte)(local_118[0] >> 10);
      local_e6 = bVar10 & 1;
      local_res18 = (undefined **)
                    (CONCAT62(local_res18._2_6_,CONCAT11((char)local_118[0],local_res18._0_1_)) &
                    0xffffffffffff01ff);
      local_e8 = local_res18._0_2_;
      local_res18 = (undefined **)
                    (CONCAT53(local_res18._3_5_,CONCAT12(bVar10,local_res18._0_2_)) &
                    0xffffffffff01ffff);
      FUN_14362bd80(&local_110,0,local_108,&local_e8);
      if (((local_118[0] & 4) != 0) && (uVar5 = 1, 1 < local_108)) {
        uVar12 = 1;
        do {
          iVar6 = FUN_14361f4c0(&local_res18,(ulonglong)(uVar5 - 1) * 0x10 + local_110,
                                uVar12 * 0x10 + local_110);
          if (iVar6 == 0) {
            uVar14 = *param_2;
            if (uVar14 != 0) {
              if ((uVar14 & 1) == 0) {
                if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar14 - 1;
              }
              *param_2 = 0;
            }
            local_b8 = &PTR_FUN_145af1858;
            FUN_143630890(&local_110);
            lVar11 = 0;
            goto LAB_14362eb99;
          }
          uVar5 = uVar5 + 1;
          uVar12 = (ulonglong)uVar5;
        } while (uVar12 < local_108);
      }
      uVar12 = uVar14;
      uVar17 = uVar14;
      uVar18 = uVar14;
      uVar19 = uVar14;
      if (local_108 != 0) {
        do {
          uVar14 = uVar12 + 1;
          local_98 = *(undefined ***)(param_1 + 0x18);
          local_res18 = (undefined **)(ulonglong)*(uint *)(local_110 + 8 + uVar18);
          if (uVar14 < uVar12) {
            uVar12 = uVar14;
            if (uVar14 < uVar19 >> 1) {
LAB_14362e992:
              FUN_1434efc20(&local_d8,uVar20,uVar12);
              uVar19 = local_c8;
              uVar20 = local_c0;
            }
          }
          else if (uVar19 < uVar14) {
            uVar12 = (uVar14 >> 2) + uVar14;
            goto LAB_14362e992;
          }
          puVar4 = (undefined4 *)(local_d8 + -4 + uVar14 * 4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)((longlong)local_98 + (longlong)local_res18 * 4);
          }
          uVar17 = uVar17 + 1;
          uVar12 = uVar14;
          uVar18 = uVar18 + 0x10;
          local_d0 = uVar14;
        } while (uVar17 < local_108);
      }
      plVar13 = (longlong *)(local_110 + -0x10 + local_108 * 0x10);
      local_b8 = &PTR_FUN_145af1858;
      lVar11 = local_110;
      for (uVar12 = local_108; local_110 = lVar11, uVar12 != 0; uVar12 = uVar12 - 1) {
        piVar1 = (int *)(*plVar13 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        plVar13 = plVar13 + -2;
        lVar11 = local_110;
      }
    }
    else {
      local_b8 = &PTR_FUN_145b4f298;
      uVar17 = uVar14;
      if (uVar12 != 0) {
        do {
          (*(code *)local_b8[1])(&local_b8,uVar17,*(longlong *)(param_1 + 0x18) + uVar17 * 4);
          uVar17 = (ulonglong)((int)uVar17 + 1);
        } while (uVar17 < uVar12);
      }
      FUN_14362b9c0(&local_110,0,local_108,(byte)(local_118[0] >> 1) & 1);
      if (((local_118[0] & 4) != 0) && (uVar5 = 1, 1 < local_108)) {
        uVar12 = 1;
        do {
          if (*(double *)(local_110 + (ulonglong)(uVar5 - 1) * 0x10) ==
              *(double *)(local_110 + uVar12 * 0x10)) {
            uVar14 = *param_2;
            if (uVar14 != 0) {
              if ((uVar14 & 1) == 0) {
                if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar14 - 1;
              }
              *param_2 = 0;
            }
            local_b8 = &PTR_FUN_145af1858;
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_110);
            lVar11 = 0;
            goto LAB_14362eb99;
          }
          uVar5 = uVar5 + 1;
          uVar12 = (ulonglong)uVar5;
        } while (uVar12 < local_108);
      }
      lVar11 = local_110;
      uVar12 = uVar14;
      uVar17 = uVar14;
      uVar18 = uVar14;
      uVar19 = uVar14;
      if (local_108 != 0) {
        do {
          local_res18 = (undefined **)(ulonglong)*(uint *)(lVar11 + 8 + uVar18);
          uVar14 = uVar12 + 1;
          local_98 = *(undefined ***)(param_1 + 0x18);
          if (uVar14 < uVar12) {
            uVar12 = uVar14;
            if (uVar14 < uVar19 >> 1) {
LAB_14362e7b2:
              FUN_1434efc20(&local_d8,uVar20,uVar12);
              lVar11 = local_110;
              uVar19 = local_c8;
              uVar20 = local_c0;
            }
          }
          else if (uVar19 < uVar14) {
            uVar12 = (uVar14 >> 2) + uVar14;
            goto LAB_14362e7b2;
          }
          puVar4 = (undefined4 *)(local_d8 + -4 + uVar14 * 4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)((longlong)local_98 + (longlong)local_res18 * 4);
            lVar11 = local_110;
          }
          uVar17 = uVar17 + 1;
          uVar12 = uVar14;
          uVar18 = uVar18 + 0x10;
          local_d0 = uVar14;
        } while (uVar17 < local_108);
      }
      local_b8 = &PTR_FUN_145af1858;
    }
  }
  else {
    if (uVar5 == 0xc) {
      bVar21 = local_78 == 0;
LAB_14362e3dc:
      if (bVar21) goto LAB_14362e633;
    }
    else if (uVar5 == 10) {
      bVar21 = local_78 == *(longlong *)(local_78 + 8) + 0x80;
      goto LAB_14362e3dc;
    }
    uVar12 = *(ulonglong *)(param_1 + 0x20);
    local_110 = 0;
    local_90 = &local_110;
    local_108 = 0;
    local_100 = 0;
    local_98 = &PTR_FUN_145b4f2f8;
    uVar17 = uVar14;
    if (uVar12 != 0) {
      do {
        (*(code *)local_98[1])(&local_98,uVar17,*(longlong *)(param_1 + 0x18) + uVar17 * 4);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      } while (uVar17 < uVar12);
    }
    ppuVar16 = *(undefined ***)(param_1 + 0x10);
    puStack_b0 = local_88;
    local_res18 = ppuVar16;
    local_b8 = ppuVar16;
    FUN_14362ac80(&local_110,0,local_108,&local_b8);
    if (((local_118[0] & 4) != 0) && (uVar12 = 1, 1 < local_108)) {
      do {
        local_68[0] = 2;
        local_60 = 0;
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,2);
        puStack_b0 = (uint *)0x0;
        local_58 = **(undefined4 **)(local_110 + uVar12 * 8);
        local_a8 = (uint *)CONCAT44(local_a8._4_4_,
                                    **(undefined4 **)(local_110 + (ulonglong)((int)uVar12 - 1) * 8))
        ;
        iVar6 = FUN_14361f5f0(ppuVar16,local_88,&local_b8,local_68);
        if (9 < ((byte)local_b8 & 0x1f)) {
          if (((uint)local_b8 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_b8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_68[0] & 0x1f)) {
          if ((local_68[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_68);
          }
          else {
            FUN_143592150();
          }
        }
        if (iVar6 == 0) {
          uVar14 = *param_2;
          if (uVar14 != 0) {
            if ((uVar14 & 1) == 0) {
              if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *param_2 = uVar14 - 1;
            }
            *param_2 = 0;
          }
          local_98 = &PTR_FUN_145af1858;
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_110);
          lVar11 = 0;
          goto LAB_14362eb99;
        }
        uVar12 = (ulonglong)((int)uVar12 + 1);
        ppuVar16 = local_res18;
      } while (uVar12 < local_108);
    }
    uVar12 = uVar14;
    uVar17 = uVar14;
    uVar18 = uVar14;
    if (local_108 != 0) {
      do {
        uVar14 = uVar12 + 1;
        puVar4 = *(undefined4 **)(local_110 + uVar17 * 8);
        if (uVar14 < uVar12) {
          uVar12 = uVar14;
          if (uVar14 < uVar18 >> 1) {
LAB_14362e5da:
            FUN_1434efc20(&local_d8,uVar20,uVar12);
            uVar18 = local_c8;
            uVar20 = local_c0;
          }
        }
        else if (uVar18 < uVar14) {
          uVar12 = (uVar14 >> 2) + uVar14;
          goto LAB_14362e5da;
        }
        puVar2 = (undefined4 *)(local_d8 + -4 + uVar14 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        uVar17 = uVar17 + 1;
        uVar12 = uVar14;
        local_d0 = uVar14;
      } while (uVar17 < local_108);
    }
    local_98 = &PTR_FUN_145af1858;
    lVar11 = local_110;
  }
  puVar15 = (undefined8 *)0x0;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar11);
  if ((local_118[0] & 8) != 0) {
    lVar11 = *(longlong *)(local_res20 + 0x28);
    puVar9 = (undefined8 *)FUN_1435b5bc0(lVar11);
    if (puVar9 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar9,lVar11);
      *puVar9 = &PTR_FUN_145b4e758;
      lVar11 = *(longlong *)(lVar11 + 0x98);
      uVar20 = *(undefined8 *)(lVar11 + 0x48);
      *(undefined1 *)(puVar9 + 9) = 0;
      puVar9[10] = lVar11;
      puVar9[8] = &PTR_FUN_145b4e730;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = uVar20;
      puVar15 = puVar9;
    }
    puVar9 = (undefined8 *)*param_2;
    if (puVar15 != puVar9) {
      if (puVar9 != (undefined8 *)0x0) {
        if (((ulonglong)puVar9 & 1) == 0) {
          if ((*(uint *)(puVar9 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar9 + 1) = *(uint *)(puVar9 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar9 - 1;
        }
      }
      *param_2 = (ulonglong)puVar15;
    }
    FUN_143631130(*param_2 + 0x40,&local_d8);
    lVar11 = local_d8;
    goto LAB_14362eb99;
  }
  if (uVar14 < *(ulonglong *)(param_1 + 0x20)) {
    uVar12 = uVar14;
    if (uVar14 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_14362eb1d:
      FUN_1434efc20(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar12);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x28) < uVar14) {
    uVar12 = (uVar14 >> 2) + uVar14;
    goto LAB_14362eb1d;
  }
  uVar12 = local_res20;
  *(ulonglong *)(param_1 + 0x20) = uVar14;
  if (uVar14 != 0) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)puVar15 * 4) =
           *(undefined4 *)(local_d8 + (longlong)puVar15 * 4);
      puVar15 = (undefined8 *)((longlong)puVar15 + 1);
    } while (puVar15 < *(undefined8 **)(param_1 + 0x20));
  }
  lVar11 = local_d8;
  if (local_res20 != *param_2) {
    if (local_res20 != 0) {
      *(uint *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1U & 0x8fffffff;
    }
    uVar14 = *param_2;
    if (uVar14 != 0) {
      if ((uVar14 & 1) == 0) {
        if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar14 - 1;
      }
    }
    *param_2 = uVar12;
    lVar11 = local_d8;
  }
LAB_14362eb99:
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar11);
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362ec00 FUN_14362ec00 body=2573 status=ok
// SIG undefined FUN_14362ec00(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14362ec00(longlong param_1,ulonglong *param_2,uint *param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined ***pppuVar22;
  bool bVar23;
  ushort local_res18;
  byte local_res1a;
  ulonglong local_res20;
  uint local_108 [4];
  ushort local_f8;
  byte local_f6;
  undefined **local_e8;
  undefined ***local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined **ppuStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined **local_a8;
  undefined ***local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined ***local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  longlong local_58;
  
  pppuVar16 = (undefined ***)0x0;
  local_68._0_4_ = 0;
  local_60 = 0;
  local_108[0] = 0;
  local_res20 = param_4;
  if (((*param_3 & 0x1f) < 0xc) && (2 < (*param_3 & 0x1f) - 5)) {
    pcVar9 = (char *)FUN_143590b70(param_3,&local_res18,local_108);
    if (*pcVar9 == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = FUN_1435c8e40(&local_c8,0x40a,uVar2);
      FUN_1435cbe70(uVar2,uVar10);
      ppuStack_c0 = ppuStack_c0 + 3;
      *(int *)ppuStack_c0 = *(int *)ppuStack_c0 + -1;
      if (*(int *)ppuStack_c0 == 0) {
        FUN_14335f920();
      }
      if (((byte)(uint)local_68 & 0x1f) < 10) {
        return;
      }
      if (((uint)local_68 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_68);
        return;
      }
      FUN_143592150();
      return;
    }
  }
  else {
    FUN_143590140(&local_68,param_3);
  }
  ppuVar14 = *(undefined ***)(param_1 + 0x10);
  puVar21 = ppuVar14[9];
  local_88 = (undefined ***)0x0;
  local_80 = (undefined ***)0x0;
  local_78 = 0;
  uVar7 = (uint)local_68 & 0x1f;
  pppuVar22 = pppuVar16;
  local_70 = puVar21;
  if (uVar7 == 0) {
LAB_14362efb1:
    pppuVar15 = *(undefined ****)(param_1 + 0x20);
    if ((local_108[0] & 0x10) == 0) {
      local_e8 = (undefined **)0x0;
      local_c8 = &PTR_FUN_145b4f2a8;
      local_b8 = &local_e8;
      local_e0 = (undefined ***)0x0;
      local_d8 = 0;
      pppuVar17 = pppuVar16;
      local_d0 = puVar21;
      ppuStack_c0 = ppuVar14;
      if (pppuVar15 != (undefined ***)0x0) {
        do {
          (*(code *)local_c8[1])
                    (&local_c8,pppuVar17,(longlong)pppuVar17 * 0x20 + *(longlong *)(param_1 + 0x18))
          ;
          pppuVar17 = (undefined ***)(ulonglong)((int)pppuVar17 + 1);
        } while (pppuVar17 < pppuVar15);
      }
      pppuVar15 = local_88;
      local_res1a = (byte)(local_108[0] >> 10) & 1;
      local_res18 = CONCAT11((char)local_108[0],(char)(local_108[0] >> 1)) & 0x101;
      local_f8 = local_res18;
      local_f6 = local_res1a;
      FUN_14362bd80(&local_e8,0,local_e0,&local_f8);
      if (((local_108[0] & 4) != 0) && (uVar7 = 1, (undefined ***)0x1 < local_e0)) {
        pppuVar17 = (undefined ***)0x1;
        do {
          iVar8 = FUN_14361f4c0(&local_res18,local_e8 + (ulonglong)(uVar7 - 1) * 2,
                                local_e8 + (longlong)pppuVar17 * 2);
          if (iVar8 == 0) {
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
              *param_2 = 0;
            }
            local_c8 = &PTR_FUN_145af1858;
            FUN_143630890(&local_e8);
            FUN_1434e5f70(&local_88);
            goto LAB_14362f5bc;
          }
          uVar7 = uVar7 + 1;
          pppuVar17 = (undefined ***)(ulonglong)uVar7;
        } while (pppuVar17 < local_e0);
      }
      pppuVar17 = pppuVar16;
      if (local_e0 != (undefined ***)0x0) {
        do {
          puVar18 = (uint *)((ulonglong)*(uint *)((longlong)(local_e8 + 1) + (longlong)pppuVar17) *
                             0x20 + *(longlong *)(param_1 + 0x18));
          FUN_1434f0300(&local_88,puVar21,(longlong)pppuVar22 + 1);
          pppuVar22 = local_80;
          pppuVar15 = local_88 + (longlong)local_80 * 4 + -4;
          if (pppuVar15 != (undefined ***)0x0) {
            *(uint *)pppuVar15 = *puVar18;
            pppuVar15[1] = *(undefined ***)(puVar18 + 2);
            uVar7 = puVar18[5];
            uVar5 = puVar18[6];
            uVar6 = puVar18[7];
            *(uint *)(pppuVar15 + 2) = puVar18[4];
            *(uint *)((longlong)pppuVar15 + 0x14) = uVar7;
            *(uint *)(pppuVar15 + 3) = uVar5;
            *(uint *)((longlong)pppuVar15 + 0x1c) = uVar6;
            if (9 < ((byte)*puVar18 & 0x1f)) {
              if ((*puVar18 >> 9 & 1) == 0) {
                FUN_143592070(puVar18);
              }
              else {
                FUN_143592140();
              }
            }
          }
          pppuVar16 = (undefined ***)((longlong)pppuVar16 + 1);
          pppuVar17 = pppuVar17 + 2;
          pppuVar15 = local_88;
          puVar21 = local_70;
        } while (pppuVar16 < local_e0);
      }
      local_c8 = &PTR_FUN_145af1858;
      ppuVar19 = local_e8 + (longlong)local_e0 * 2 + -2;
      ppuVar14 = local_e8;
      for (pppuVar16 = local_e0; local_e8 = ppuVar14, pppuVar16 != (undefined ***)0x0;
          pppuVar16 = (undefined ***)((longlong)pppuVar16 + -1)) {
        piVar1 = (int *)(*ppuVar19 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        ppuVar19 = ppuVar19 + -2;
        ppuVar14 = local_e8;
      }
    }
    else {
      local_a8 = (undefined **)0x0;
      local_e8 = &PTR_FUN_145b4f258;
      local_e0 = &local_a8;
      local_a0 = (undefined ***)0x0;
      local_98 = 0;
      pppuVar17 = pppuVar16;
      local_90 = puVar21;
      if (pppuVar15 != (undefined ***)0x0) {
        do {
          (*(code *)local_e8[1])
                    (&local_e8,pppuVar17,(longlong)pppuVar17 * 0x20 + *(longlong *)(param_1 + 0x18))
          ;
          pppuVar17 = (undefined ***)(ulonglong)((int)pppuVar17 + 1);
        } while (pppuVar17 < pppuVar15);
      }
      pppuVar15 = local_88;
      FUN_14362b9c0(&local_a8,0,local_a0,(byte)(local_108[0] >> 1) & 1);
      if (((local_108[0] & 4) != 0) &&
         (pppuVar17 = (undefined ***)0x1, (undefined ***)0x1 < local_a0)) {
        do {
          if ((double)local_a8[(ulonglong)((int)pppuVar17 - 1) * 2] ==
              (double)local_a8[(longlong)pppuVar17 * 2]) {
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
              *param_2 = 0;
            }
            local_e8 = &PTR_FUN_145af1858;
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a8);
            FUN_1434e5f70(&local_88);
            goto LAB_14362f5bc;
          }
          pppuVar17 = (undefined ***)(ulonglong)((int)pppuVar17 + 1);
        } while (pppuVar17 < local_a0);
      }
      pppuVar17 = pppuVar16;
      if (local_a0 != (undefined ***)0x0) {
        do {
          puVar18 = (uint *)((ulonglong)*(uint *)((longlong)(local_a8 + 1) + (longlong)pppuVar17) *
                             0x20 + *(longlong *)(param_1 + 0x18));
          FUN_1434f0300(&local_88,puVar21,(longlong)pppuVar22 + 1);
          pppuVar22 = local_80;
          pppuVar15 = local_88 + (longlong)local_80 * 4 + -4;
          if (pppuVar15 != (undefined ***)0x0) {
            *(uint *)pppuVar15 = *puVar18;
            pppuVar15[1] = *(undefined ***)(puVar18 + 2);
            uVar7 = puVar18[5];
            uVar5 = puVar18[6];
            uVar6 = puVar18[7];
            *(uint *)(pppuVar15 + 2) = puVar18[4];
            *(uint *)((longlong)pppuVar15 + 0x14) = uVar7;
            *(uint *)(pppuVar15 + 3) = uVar5;
            *(uint *)((longlong)pppuVar15 + 0x1c) = uVar6;
            if (9 < ((byte)*puVar18 & 0x1f)) {
              if ((*puVar18 >> 9 & 1) == 0) {
                FUN_143592070(puVar18);
              }
              else {
                FUN_143592140();
              }
            }
          }
          pppuVar16 = (undefined ***)((longlong)pppuVar16 + 1);
          pppuVar17 = pppuVar17 + 2;
          pppuVar15 = local_88;
          puVar21 = local_70;
        } while (pppuVar16 < local_a0);
      }
      local_e8 = &PTR_FUN_145af1858;
      ppuVar14 = local_a8;
    }
  }
  else {
    if (uVar7 == 0xc) {
      bVar23 = local_58 == 0;
LAB_14362ed4d:
      if (bVar23) goto LAB_14362efb1;
    }
    else if (uVar7 == 10) {
      bVar23 = local_58 == *(longlong *)(local_58 + 8) + 0x80;
      goto LAB_14362ed4d;
    }
    pppuVar15 = *(undefined ****)(param_1 + 0x20);
    local_a8 = (undefined **)0x0;
    local_e0 = &local_a8;
    local_a0 = (undefined ***)0x0;
    local_98 = 0;
    local_e8 = &PTR_FUN_145b4f2f8;
    pppuVar17 = pppuVar16;
    local_90 = puVar21;
    if (pppuVar15 != (undefined ***)0x0) {
      do {
        (*(code *)local_e8[1])
                  (&local_e8,pppuVar17,(longlong)pppuVar17 * 0x20 + *(longlong *)(param_1 + 0x18));
        pppuVar17 = (undefined ***)(ulonglong)((int)pppuVar17 + 1);
      } while (pppuVar17 < pppuVar15);
    }
    ppuStack_c0 = &local_68;
    ppuVar14 = *(undefined ***)(param_1 + 0x10);
    local_c8 = ppuVar14;
    FUN_14362b700(&local_a8,0,local_a0,&local_c8);
    if (((local_108[0] & 4) != 0) && (pppuVar15 = (undefined ***)0x1, (undefined ***)0x1 < local_a0)
       ) {
      do {
        iVar8 = FUN_14361f5f0(ppuVar14,&local_68,local_a8[(int)pppuVar15 - 1],
                              local_a8[(longlong)pppuVar15]);
        if (iVar8 == 0) {
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
            *param_2 = 0;
          }
          local_e8 = &PTR_FUN_145af1858;
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a8);
          FUN_1434e5f70(&local_88);
          goto LAB_14362f5bc;
        }
        pppuVar15 = (undefined ***)(ulonglong)((int)pppuVar15 + 1);
      } while (pppuVar15 < local_a0);
    }
    pppuVar15 = pppuVar16;
    if (local_a0 != (undefined ***)0x0) {
      do {
        puVar18 = (uint *)local_a8[(longlong)pppuVar16];
        local_c8 = (undefined **)CONCAT44(local_c8._4_4_,*puVar18);
        ppuStack_c0 = *(undefined ***)(puVar18 + 2);
        local_b8 = *(undefined ****)(puVar18 + 4);
        uStack_b0 = puVar18[6];
        uStack_ac = puVar18[7];
        if (9 < ((byte)*puVar18 & 0x1f)) {
          if ((*puVar18 >> 9 & 1) == 0) {
            FUN_143592070();
          }
          else {
            FUN_143592140();
          }
        }
        FUN_1434f0300(&local_88,puVar21,(longlong)pppuVar22 + 1);
        pppuVar22 = local_80;
        pppuVar15 = local_88 + (longlong)local_80 * 4 + -4;
        if (pppuVar15 == (undefined ***)0x0) {
LAB_14362ef60:
        }
        else {
          *(uint *)pppuVar15 = (uint)local_c8;
          pppuVar15[1] = ppuStack_c0;
          *(undefined4 *)(pppuVar15 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)pppuVar15 + 0x14) = local_b8._4_4_;
          *(uint *)(pppuVar15 + 3) = uStack_b0;
          *(uint *)((longlong)pppuVar15 + 0x1c) = uStack_ac;
          if (9 < ((byte)local_c8 & 0x1f)) {
            if (((uint)local_c8 >> 9 & 1) == 0) {
              FUN_143592070(&local_c8);
            }
            else {
              FUN_143592140();
            }
            goto LAB_14362ef60;
          }
        }
        if (9 < ((byte)(uint)local_c8 & 0x1f)) {
          if (((uint)local_c8 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_c8);
          }
          else {
            FUN_143592150();
          }
        }
        pppuVar16 = (undefined ***)((longlong)pppuVar16 + 1);
        pppuVar15 = local_88;
        puVar21 = local_70;
      } while (pppuVar16 < local_a0);
    }
    local_e8 = &PTR_FUN_145af1858;
    ppuVar14 = local_a8;
  }
  puVar20 = (undefined8 *)0x0;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,ppuVar14);
  if ((local_108[0] & 8) == 0) {
    pppuVar16 = *(undefined ****)(param_1 + 0x20);
    FUN_1434f0300(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),pppuVar22);
    if (pppuVar16 < pppuVar22) {
      puVar12 = (undefined4 *)((longlong)pppuVar16 * 0x20 + *(longlong *)(param_1 + 0x18));
      for (lVar13 = (longlong)pppuVar22 - (longlong)pppuVar16; lVar13 != 0; lVar13 = lVar13 + -1) {
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
        }
        puVar12 = puVar12 + 8;
      }
    }
    puVar11 = puVar20;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      do {
        FUN_143590140(*(longlong *)(param_1 + 0x18) + (longlong)puVar20,
                      (longlong)puVar20 + (longlong)pppuVar15);
        puVar11 = (undefined8 *)((longlong)puVar11 + 1);
        puVar20 = puVar20 + 4;
      } while (puVar11 < *(undefined8 **)(param_1 + 0x20));
    }
    uVar3 = local_res20;
    if (local_res20 != *param_2) {
      if (local_res20 != 0) {
        *(uint *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1U & 0x8fffffff;
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
      }
      *param_2 = uVar3;
    }
  }
  else {
    lVar13 = *(longlong *)(local_res20 + 0x28);
    puVar11 = (undefined8 *)FUN_1435b5bc0(lVar13);
    if (puVar11 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar11,lVar13);
      *puVar11 = &PTR_FUN_145b4efe8;
      lVar13 = *(longlong *)(lVar13 + 0x98);
      uVar2 = *(undefined8 *)(lVar13 + 0x48);
      *(undefined1 *)(puVar11 + 9) = 0;
      puVar11[10] = lVar13;
      puVar11[8] = &PTR__scalar_deleting_destructor__145b4e6e0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = uVar2;
      puVar20 = puVar11;
    }
    puVar11 = (undefined8 *)*param_2;
    if (puVar20 != puVar11) {
      if (puVar11 != (undefined8 *)0x0) {
        if (((ulonglong)puVar11 & 1) == 0) {
          if ((*(uint *)(puVar11 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar11 + 1) = *(uint *)(puVar11 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar11 - 1;
        }
      }
      *param_2 = (ulonglong)puVar20;
    }
    FUN_1436315d0(*param_2 + 0x40,&local_88);
  }
  pppuVar16 = pppuVar15 + (longlong)pppuVar22 * 4 + -4;
  for (; pppuVar22 != (undefined ***)0x0; pppuVar22 = (undefined ***)((longlong)pppuVar22 + -1)) {
    if (9 < ((byte)*(uint *)pppuVar16 & 0x1f)) {
      if ((*(uint *)pppuVar16 >> 9 & 1) == 0) {
        FUN_1435920c0(pppuVar16);
      }
      else {
        FUN_143592150();
      }
    }
    pppuVar16 = pppuVar16 + -4;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pppuVar15);
LAB_14362f5bc:
  if (9 < ((byte)(uint)local_68 & 0x1f)) {
    if (((uint)local_68 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_68);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362f610 FUN_14362f610 body=2407 status=ok
// SIG undefined FUN_14362f610(void)

void FUN_14362f610(longlong param_1,ulonglong *param_2,uint *param_3,ulonglong param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  bool bVar21;
  undefined **local_res18;
  ulonglong local_res20;
  uint local_118 [2];
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_e8;
  byte local_e6;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  uint *puStack_b0;
  uint *local_a8;
  undefined **local_98;
  longlong *local_90;
  uint local_88 [2];
  undefined8 local_80;
  longlong local_78;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  
  uVar14 = 0;
  local_88[0] = 0;
  local_80 = 0;
  local_118[0] = 0;
  local_res20 = param_4;
  if (((*param_3 & 0x1f) < 0xc) && (2 < (*param_3 & 0x1f) - 5)) {
    pcVar7 = (char *)FUN_143590b70(param_3,&local_res18,local_118);
    if (*pcVar7 == '\0') {
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      uVar8 = FUN_1435c8e40(&local_b8,0x40a,uVar20);
      FUN_1435cbe70(uVar20,uVar8);
      piVar1 = (int *)((longlong)puStack_b0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (((byte)local_88[0] & 0x1f) < 10) {
        return;
      }
      if ((local_88[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(local_88);
      return;
    }
  }
  else {
    FUN_143590140(local_88,param_3);
  }
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar20 = *(undefined8 *)(puVar3 + 0x12);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uVar5 = local_88[0] & 0x1f;
  local_f8 = uVar20;
  local_c0 = uVar20;
  if (uVar5 == 0) {
LAB_14362f9b3:
    puStack_b0 = (uint *)&local_110;
    uVar12 = *(ulonglong *)(param_1 + 0x20);
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    if ((local_118[0] & 0x10) == 0) {
      local_b8 = &PTR_FUN_145b4f2d8;
      uVar17 = uVar14;
      local_a8 = puStack_b0;
      if (uVar12 != 0) {
        do {
          puStack_b0 = puVar3;
          (*(code *)local_b8[1])(&local_b8,uVar17,*(longlong *)(param_1 + 0x18) + uVar17 * 4);
          uVar17 = (ulonglong)((int)uVar17 + 1);
          puVar3 = puStack_b0;
        } while (uVar17 < uVar12);
      }
      puStack_b0 = puVar3;
      local_res18 = (undefined **)
                    (CONCAT71(local_res18._1_7_,(char)(local_118[0] >> 1)) & 0xffffffffffffff01);
      bVar10 = (byte)(local_118[0] >> 10);
      local_e6 = bVar10 & 1;
      local_res18 = (undefined **)
                    (CONCAT62(local_res18._2_6_,CONCAT11((char)local_118[0],local_res18._0_1_)) &
                    0xffffffffffff01ff);
      local_e8 = local_res18._0_2_;
      local_res18 = (undefined **)
                    (CONCAT53(local_res18._3_5_,CONCAT12(bVar10,local_res18._0_2_)) &
                    0xffffffffff01ffff);
      FUN_14362bd80(&local_110,0,local_108,&local_e8);
      if (((local_118[0] & 4) != 0) && (uVar5 = 1, 1 < local_108)) {
        uVar12 = 1;
        do {
          iVar6 = FUN_14361f4c0(&local_res18,(ulonglong)(uVar5 - 1) * 0x10 + local_110,
                                uVar12 * 0x10 + local_110);
          if (iVar6 == 0) {
            uVar14 = *param_2;
            if (uVar14 != 0) {
              if ((uVar14 & 1) == 0) {
                if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar14 - 1;
              }
              *param_2 = 0;
            }
            local_b8 = &PTR_FUN_145af1858;
            FUN_143630890(&local_110);
            lVar11 = 0;
            goto LAB_14362ff19;
          }
          uVar5 = uVar5 + 1;
          uVar12 = (ulonglong)uVar5;
        } while (uVar12 < local_108);
      }
      uVar12 = uVar14;
      uVar17 = uVar14;
      uVar18 = uVar14;
      uVar19 = uVar14;
      if (local_108 != 0) {
        do {
          uVar14 = uVar12 + 1;
          local_98 = *(undefined ***)(param_1 + 0x18);
          local_res18 = (undefined **)(ulonglong)*(uint *)(local_110 + 8 + uVar18);
          if (uVar14 < uVar12) {
            uVar12 = uVar14;
            if (uVar14 < uVar19 >> 1) {
LAB_14362fd12:
              FUN_1434efc20(&local_d8,uVar20,uVar12);
              uVar19 = local_c8;
              uVar20 = local_c0;
            }
          }
          else if (uVar19 < uVar14) {
            uVar12 = (uVar14 >> 2) + uVar14;
            goto LAB_14362fd12;
          }
          puVar4 = (undefined4 *)(local_d8 + -4 + uVar14 * 4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)((longlong)local_98 + (longlong)local_res18 * 4);
          }
          uVar17 = uVar17 + 1;
          uVar12 = uVar14;
          uVar18 = uVar18 + 0x10;
          local_d0 = uVar14;
        } while (uVar17 < local_108);
      }
      plVar13 = (longlong *)(local_110 + -0x10 + local_108 * 0x10);
      local_b8 = &PTR_FUN_145af1858;
      lVar11 = local_110;
      for (uVar12 = local_108; local_110 = lVar11, uVar12 != 0; uVar12 = uVar12 - 1) {
        piVar1 = (int *)(*plVar13 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        plVar13 = plVar13 + -2;
        lVar11 = local_110;
      }
    }
    else {
      local_b8 = &PTR_FUN_145b4f288;
      uVar17 = uVar14;
      if (uVar12 != 0) {
        do {
          (*(code *)local_b8[1])(&local_b8,uVar17,*(longlong *)(param_1 + 0x18) + uVar17 * 4);
          uVar17 = (ulonglong)((int)uVar17 + 1);
        } while (uVar17 < uVar12);
      }
      FUN_14362b9c0(&local_110,0,local_108,(byte)(local_118[0] >> 1) & 1);
      if (((local_118[0] & 4) != 0) && (uVar5 = 1, 1 < local_108)) {
        uVar12 = 1;
        do {
          if (*(double *)(local_110 + (ulonglong)(uVar5 - 1) * 0x10) ==
              *(double *)(local_110 + uVar12 * 0x10)) {
            uVar14 = *param_2;
            if (uVar14 != 0) {
              if ((uVar14 & 1) == 0) {
                if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *param_2 = uVar14 - 1;
              }
              *param_2 = 0;
            }
            local_b8 = &PTR_FUN_145af1858;
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_110);
            lVar11 = 0;
            goto LAB_14362ff19;
          }
          uVar5 = uVar5 + 1;
          uVar12 = (ulonglong)uVar5;
        } while (uVar12 < local_108);
      }
      lVar11 = local_110;
      uVar12 = uVar14;
      uVar17 = uVar14;
      uVar18 = uVar14;
      uVar19 = uVar14;
      if (local_108 != 0) {
        do {
          local_res18 = (undefined **)(ulonglong)*(uint *)(lVar11 + 8 + uVar18);
          uVar14 = uVar12 + 1;
          local_98 = *(undefined ***)(param_1 + 0x18);
          if (uVar14 < uVar12) {
            uVar12 = uVar14;
            if (uVar14 < uVar19 >> 1) {
LAB_14362fb32:
              FUN_1434efc20(&local_d8,uVar20,uVar12);
              lVar11 = local_110;
              uVar19 = local_c8;
              uVar20 = local_c0;
            }
          }
          else if (uVar19 < uVar14) {
            uVar12 = (uVar14 >> 2) + uVar14;
            goto LAB_14362fb32;
          }
          puVar4 = (undefined4 *)(local_d8 + -4 + uVar14 * 4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)((longlong)local_98 + (longlong)local_res18 * 4);
            lVar11 = local_110;
          }
          uVar17 = uVar17 + 1;
          uVar12 = uVar14;
          uVar18 = uVar18 + 0x10;
          local_d0 = uVar14;
        } while (uVar17 < local_108);
      }
      local_b8 = &PTR_FUN_145af1858;
    }
  }
  else {
    if (uVar5 == 0xc) {
      bVar21 = local_78 == 0;
LAB_14362f75c:
      if (bVar21) goto LAB_14362f9b3;
    }
    else if (uVar5 == 10) {
      bVar21 = local_78 == *(longlong *)(local_78 + 8) + 0x80;
      goto LAB_14362f75c;
    }
    uVar12 = *(ulonglong *)(param_1 + 0x20);
    local_110 = 0;
    local_90 = &local_110;
    local_108 = 0;
    local_100 = 0;
    local_98 = &PTR_FUN_145b4f2f8;
    uVar17 = uVar14;
    if (uVar12 != 0) {
      do {
        (*(code *)local_98[1])(&local_98,uVar17,*(longlong *)(param_1 + 0x18) + uVar17 * 4);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      } while (uVar17 < uVar12);
    }
    ppuVar16 = *(undefined ***)(param_1 + 0x10);
    puStack_b0 = local_88;
    local_res18 = ppuVar16;
    local_b8 = ppuVar16;
    FUN_14362af20(&local_110,0,local_108,&local_b8);
    if (((local_118[0] & 4) != 0) && (uVar12 = 1, 1 < local_108)) {
      do {
        local_68[0] = 3;
        local_60 = 0;
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,3);
        puStack_b0 = (uint *)0x0;
        local_58 = **(undefined4 **)(local_110 + uVar12 * 8);
        local_a8 = (uint *)CONCAT44(local_a8._4_4_,
                                    **(undefined4 **)(local_110 + (ulonglong)((int)uVar12 - 1) * 8))
        ;
        iVar6 = FUN_14361f5f0(ppuVar16,local_88,&local_b8,local_68);
        if (9 < ((byte)local_b8 & 0x1f)) {
          if (((uint)local_b8 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_b8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_68[0] & 0x1f)) {
          if ((local_68[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_68);
          }
          else {
            FUN_143592150();
          }
        }
        if (iVar6 == 0) {
          uVar14 = *param_2;
          if (uVar14 != 0) {
            if ((uVar14 & 1) == 0) {
              if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *param_2 = uVar14 - 1;
            }
            *param_2 = 0;
          }
          local_98 = &PTR_FUN_145af1858;
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_110);
          lVar11 = 0;
          goto LAB_14362ff19;
        }
        uVar12 = (ulonglong)((int)uVar12 + 1);
        ppuVar16 = local_res18;
      } while (uVar12 < local_108);
    }
    uVar12 = uVar14;
    uVar17 = uVar14;
    uVar18 = uVar14;
    if (local_108 != 0) {
      do {
        uVar14 = uVar12 + 1;
        puVar4 = *(undefined4 **)(local_110 + uVar17 * 8);
        if (uVar14 < uVar12) {
          uVar12 = uVar14;
          if (uVar14 < uVar18 >> 1) {
LAB_14362f95a:
            FUN_1434efc20(&local_d8,uVar20,uVar12);
            uVar18 = local_c8;
            uVar20 = local_c0;
          }
        }
        else if (uVar18 < uVar14) {
          uVar12 = (uVar14 >> 2) + uVar14;
          goto LAB_14362f95a;
        }
        puVar2 = (undefined4 *)(local_d8 + -4 + uVar14 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        uVar17 = uVar17 + 1;
        uVar12 = uVar14;
        local_d0 = uVar14;
      } while (uVar17 < local_108);
    }
    local_98 = &PTR_FUN_145af1858;
    lVar11 = local_110;
  }
  puVar15 = (undefined8 *)0x0;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar11);
  if ((local_118[0] & 8) != 0) {
    lVar11 = *(longlong *)(local_res20 + 0x28);
    puVar9 = (undefined8 *)FUN_1435b5bc0(lVar11);
    if (puVar9 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar9,lVar11);
      *puVar9 = &PTR_FUN_145b4e990;
      lVar11 = *(longlong *)(lVar11 + 0x98);
      uVar20 = *(undefined8 *)(lVar11 + 0x48);
      *(undefined1 *)(puVar9 + 9) = 0;
      puVar9[10] = lVar11;
      puVar9[8] = &PTR_FUN_145b4e968;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = uVar20;
      puVar15 = puVar9;
    }
    puVar9 = (undefined8 *)*param_2;
    if (puVar15 != puVar9) {
      if (puVar9 != (undefined8 *)0x0) {
        if (((ulonglong)puVar9 & 1) == 0) {
          if ((*(uint *)(puVar9 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar9 + 1) = *(uint *)(puVar9 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar9 - 1;
        }
      }
      *param_2 = (ulonglong)puVar15;
    }
    FUN_143631130(*param_2 + 0x40,&local_d8);
    lVar11 = local_d8;
    goto LAB_14362ff19;
  }
  if (uVar14 < *(ulonglong *)(param_1 + 0x20)) {
    uVar12 = uVar14;
    if (uVar14 < *(ulonglong *)(param_1 + 0x28) >> 1) {
LAB_14362fe9d:
      FUN_1434efc20(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),uVar12);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x28) < uVar14) {
    uVar12 = (uVar14 >> 2) + uVar14;
    goto LAB_14362fe9d;
  }
  uVar12 = local_res20;
  *(ulonglong *)(param_1 + 0x20) = uVar14;
  if (uVar14 != 0) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)puVar15 * 4) =
           *(undefined4 *)(local_d8 + (longlong)puVar15 * 4);
      puVar15 = (undefined8 *)((longlong)puVar15 + 1);
    } while (puVar15 < *(undefined8 **)(param_1 + 0x20));
  }
  lVar11 = local_d8;
  if (local_res20 != *param_2) {
    if (local_res20 != 0) {
      *(uint *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1U & 0x8fffffff;
    }
    uVar14 = *param_2;
    if (uVar14 != 0) {
      if ((uVar14 & 1) == 0) {
        if ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar14 - 1;
      }
    }
    *param_2 = uVar12;
    lVar11 = local_d8;
  }
LAB_14362ff19:
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar11);
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14362ff80 FUN_14362ff80 body=450 status=ok
// SIG undefined FUN_14362ff80(void)

void FUN_14362ff80(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_res8;
  int local_58;
  int local_54;
  uint local_50 [2];
  longlong local_48;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_50,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  local_58 = 0;
  if ((param_3 != 0) &&
     (pcVar6 = (char *)FUN_143590b70(param_4,&local_res8,&local_58), *pcVar6 == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  local_54 = 0;
  if (local_58 < 0) {
    local_58 = local_58 + uVar2;
  }
  if (param_3 < 2) {
    local_54 = uVar2 - local_58;
  }
  else {
    pcVar6 = (char *)FUN_143590eb0(param_4 + 0x20,&local_res8,&local_54);
    if (*pcVar6 == '\0') {
      return;
    }
    if ((local_54 + local_58 < 0) || (uVar2 < (uint)(local_54 + local_58))) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_1435c8e40(local_50,0x465,uVar3);
      FUN_1435cbdf0(uVar3,uVar5);
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143635010(&local_res8,*(undefined8 *)(param_5 + 0x28));
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,local_res8);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_58 <= (int)uVar2) && (-1 < local_58)) &&
     (Scaleform::GFx::AS3::VectorBase<Scaleform::Ptr<Scaleform::GFx::ASStringNode>_>::
      DeleteMultipleAt<Scaleform::GFx::AS3::Instances::fl_vec::Vector_String>
                (param_1,(longlong)local_58,local_54,local_res8), 2 < param_3)) {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < local_58) {
      local_58 = iVar4;
    }
    FUN_143634a90(param_1,(longlong)local_58,param_3 - 2,param_4 + 0x40);
  }
  return;
}



// FUNCTION 143630150 FUN_143630150 body=450 status=ok
// SIG undefined FUN_143630150(void)

void FUN_143630150(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_res8;
  int local_58;
  int local_54;
  uint local_50 [2];
  longlong local_48;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_50,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  local_58 = 0;
  if ((param_3 != 0) &&
     (pcVar6 = (char *)FUN_143590b70(param_4,&local_res8,&local_58), *pcVar6 == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  local_54 = 0;
  if (local_58 < 0) {
    local_58 = local_58 + uVar2;
  }
  if (param_3 < 2) {
    local_54 = uVar2 - local_58;
  }
  else {
    pcVar6 = (char *)FUN_143590eb0(param_4 + 0x20,&local_res8,&local_54);
    if (*pcVar6 == '\0') {
      return;
    }
    if ((local_54 + local_58 < 0) || (uVar2 < (uint)(local_54 + local_58))) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_1435c8e40(local_50,0x465,uVar3);
      FUN_1435cbdf0(uVar3,uVar5);
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_1436350b0(&local_res8,*(undefined8 *)(param_5 + 0x28));
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,local_res8);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_58 <= (int)uVar2) && (-1 < local_58)) &&
     (FUN_143627a00(param_1,(longlong)local_58,local_54,local_res8), 2 < param_3)) {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < local_58) {
      local_58 = iVar4;
    }
    FUN_1436349a0(param_1,(longlong)local_58,param_3 - 2,param_4 + 0x40);
  }
  return;
}



// FUNCTION 143630320 FUN_143630320 body=450 status=ok
// SIG undefined FUN_143630320(void)

void FUN_143630320(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_res8;
  int local_58;
  int local_54;
  uint local_50 [2];
  longlong local_48;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_50,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  local_58 = 0;
  if ((param_3 != 0) &&
     (pcVar6 = (char *)FUN_143590b70(param_4,&local_res8,&local_58), *pcVar6 == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  local_54 = 0;
  if (local_58 < 0) {
    local_58 = local_58 + uVar2;
  }
  if (param_3 < 2) {
    local_54 = uVar2 - local_58;
  }
  else {
    pcVar6 = (char *)FUN_143590eb0(param_4 + 0x20,&local_res8,&local_54);
    if (*pcVar6 == '\0') {
      return;
    }
    if ((local_54 + local_58 < 0) || (uVar2 < (uint)(local_54 + local_58))) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_1435c8e40(local_50,0x465,uVar3);
      FUN_1435cbdf0(uVar3,uVar5);
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143635150(&local_res8,*(undefined8 *)(param_5 + 0x28));
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,local_res8);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_58 <= (int)uVar2) && (-1 < local_58)) &&
     (FUN_143627af0(param_1,(longlong)local_58,local_54,local_res8), 2 < param_3)) {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < local_58) {
      local_58 = iVar4;
    }
    FUN_1436348c0(param_1,(longlong)local_58,param_3 - 2,param_4 + 0x40);
  }
  return;
}



// FUNCTION 1436304f0 FUN_1436304f0 body=450 status=ok
// SIG undefined FUN_1436304f0(void)

void FUN_1436304f0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_res8;
  int local_58;
  int local_54;
  uint local_50 [2];
  longlong local_48;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_50,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  local_58 = 0;
  if ((param_3 != 0) &&
     (pcVar6 = (char *)FUN_143590b70(param_4,&local_res8,&local_58), *pcVar6 == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  local_54 = 0;
  if (local_58 < 0) {
    local_58 = local_58 + uVar2;
  }
  if (param_3 < 2) {
    local_54 = uVar2 - local_58;
  }
  else {
    pcVar6 = (char *)FUN_143590eb0(param_4 + 0x20,&local_res8,&local_54);
    if (*pcVar6 == '\0') {
      return;
    }
    if ((local_54 + local_58 < 0) || (uVar2 < (uint)(local_54 + local_58))) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_1435c8e40(local_50,0x465,uVar3);
      FUN_1435cbdf0(uVar3,uVar5);
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_1436351f0(&local_res8,*(undefined8 *)(param_5 + 0x28));
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,local_res8);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_58 <= (int)uVar2) && (-1 < local_58)) &&
     (FUN_143627be0(param_1,(longlong)local_58,local_54,local_res8), 2 < param_3)) {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < local_58) {
      local_58 = iVar4;
    }
    FUN_143634ba0(param_1,(longlong)local_58,param_3 - 2,param_4 + 0x40);
  }
  return;
}



// FUNCTION 1436306c0 FUN_1436306c0 body=450 status=ok
// SIG undefined FUN_1436306c0(void)

void FUN_1436306c0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_res8;
  int local_58;
  int local_54;
  uint local_50 [2];
  longlong local_48;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_1435c8e40(local_50,0x466,uVar3);
    FUN_1435cbdf0(uVar3,uVar5);
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  local_58 = 0;
  if ((param_3 != 0) &&
     (pcVar6 = (char *)FUN_143590b70(param_4,&local_res8,&local_58), *pcVar6 == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  local_54 = 0;
  if (local_58 < 0) {
    local_58 = local_58 + uVar2;
  }
  if (param_3 < 2) {
    local_54 = uVar2 - local_58;
  }
  else {
    pcVar6 = (char *)FUN_143590eb0(param_4 + 0x20,&local_res8,&local_54);
    if (*pcVar6 == '\0') {
      return;
    }
    if ((local_54 + local_58 < 0) || (uVar2 < (uint)(local_54 + local_58))) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_1435c8e40(local_50,0x465,uVar3);
      FUN_1435cbdf0(uVar3,uVar5);
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143635290(&local_res8,*(undefined8 *)(param_5 + 0x28));
  local_50[0] = 0;
  local_48 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_50,local_res8);
  FUN_143590140(param_2,local_50);
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_58 <= (int)uVar2) && (-1 < local_58)) &&
     (FUN_143627cb0(param_1,(longlong)local_58,local_54,local_res8), 2 < param_3)) {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    if (iVar4 < local_58) {
      local_58 = iVar4;
    }
    FUN_1436348c0(param_1,(longlong)local_58,param_3 - 2,param_4 + 0x40);
  }
  return;
}



// FUNCTION 143630890 FUN_143630890 body=104 status=ok
// SIG undefined FUN_143630890(void)

void FUN_143630890(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + -0x10 + lVar3 * 0x10);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar2 = plVar2 + -2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001436308f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143630900 FUN_143630900 body=99 status=ok
// SIG undefined FUN_143630900(void)

void FUN_143630900(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if (*plVar2 != 0) {
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    plVar2 = plVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014363095f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143630970 FUN_143630970 body=133 status=ok
// SIG undefined FUN_143630970(void)

void FUN_143630970(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xe0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0xd8) = uVar1 - 1;
      FUN_1435b4dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b4dc0(param_1);
  return;
}



// FUNCTION 143630a00 FUN_143630a00 body=168 status=ok
// SIG undefined FUN_143630a00(void)

bool FUN_143630a00(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = *param_3;
  local_38 = *param_2;
  local_20 = 0;
  local_40 = 0;
  local_28[0] = 2;
  local_48[0] = 2;
  iVar1 = FUN_14361f5f0(*param_1,param_1[1],local_48,local_28);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return iVar1 < 0;
    }
    FUN_1435920c0(local_28);
  }
  return iVar1 < 0;
}



// FUNCTION 143630ab0 FUN_143630ab0 body=168 status=ok
// SIG undefined FUN_143630ab0(void)

bool FUN_143630ab0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = *param_3;
  local_38 = *param_2;
  local_20 = 0;
  local_40 = 0;
  local_28[0] = 3;
  local_48[0] = 3;
  iVar1 = FUN_14361f5f0(*param_1,param_1[1],local_48,local_28);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return iVar1 < 0;
    }
    FUN_1435920c0(local_28);
  }
  return iVar1 < 0;
}



// FUNCTION 143630b60 FUN_143630b60 body=175 status=ok
// SIG undefined FUN_143630b60(void)

bool FUN_143630b60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = *param_3;
  local_38 = *param_2;
  local_28[0] = 4;
  local_20 = 0;
  local_48[0] = 4;
  local_40 = 0;
  iVar1 = FUN_14361f5f0(*param_1,param_1[1],local_48,local_28);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return iVar1 < 0;
    }
    FUN_1435920c0(local_28);
  }
  return iVar1 < 0;
}



// FUNCTION 143630c10 FUN_143630c10 body=187 status=ok
// SIG undefined FUN_143630c10(void)

bool FUN_143630c10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_48 [8];
  uint local_28 [8];
  
  uVar4 = *param_2;
  uVar1 = *param_1;
  uVar3 = FUN_1435900f0(local_28,*param_3);
  uVar4 = FUN_1435900f0(local_48,uVar4);
  iVar2 = FUN_14361f5f0(uVar1,param_1[1],uVar4,uVar3);
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  return iVar2 < 0;
}



// FUNCTION 143630cd0 FUN_143630cd0 body=119 status=ok
// SIG undefined FUN_143630cd0(void)

void FUN_143630cd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_1 + 8);
  uVar3 = plVar2[1] + 1;
  if (uVar3 < (ulonglong)plVar2[1]) {
    uVar4 = uVar3;
    if ((ulonglong)plVar2[2] >> 1 <= uVar3) goto LAB_143630d20;
  }
  else {
    if (uVar3 <= (ulonglong)plVar2[2]) goto LAB_143630d20;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432f2240(plVar2,plVar2[3],uVar4);
LAB_143630d20:
  plVar2[1] = uVar3;
  puVar1 = (undefined8 *)(*plVar2 + -8 + uVar3 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_3;
  }
  return;
}



// FUNCTION 143630d50 FUN_143630d50 body=74 status=ok
// SIG undefined FUN_143630d50(void)

undefined8 * FUN_143630d50(undefined8 *param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[3]);
  *param_1 = &PTR_FUN_145b4e6b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}


