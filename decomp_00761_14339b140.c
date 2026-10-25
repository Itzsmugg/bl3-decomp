// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14339b140 FUN_14339b140 body=80 status=ok
// SIG undefined FUN_14339b140(void)

float FUN_14339b140(longlong *param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  
  if (((short)param_2 != -1) && (param_2 < *(uint *)(param_1 + 0xf))) {
    uVar1 = *(uint *)((longlong)param_1 + 0xa4);
    fVar2 = (float)FUN_14339f610(param_1 + 0xc);
    return (fVar2 * 1024.0) / (float)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014339b189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(*param_1 + 0xa8))();
  return fVar2;
}



// FUNCTION 14339b1a0 FUN_14339b1a0 body=80 status=ok
// SIG undefined FUN_14339b1a0(void)

float FUN_14339b1a0(longlong *param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  
  if (((short)param_2 != -1) && (param_2 < *(uint *)(param_1 + 0xf))) {
    uVar1 = *(uint *)((longlong)param_1 + 0xa4);
    fVar2 = (float)FUN_14339f280(param_1 + 0xc);
    return (fVar2 * 1024.0) / (float)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014339b1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(*param_1 + 0xb0))();
  return fVar2;
}



// FUNCTION 14339b290 FUN_14339b290 body=29 status=ok
// SIG undefined FUN_14339b290(void)

undefined8 FUN_14339b290(undefined8 param_1,undefined8 param_2)

{
  FUN_14339c330(param_2,param_1);
  return param_2;
}



// FUNCTION 14339b2e0 FUN_14339b2e0 body=131 status=ok
// SIG undefined FUN_14339b2e0(void)

undefined8 * FUN_14339b2e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa1a8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145b04150;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = &PTR_FUN_145b04080;
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[0xc] = param_1 + 7;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 14339b370 ~FontDataCompactedGfx body=108 status=ok
// SIG undefined ~FontDataCompactedGfx(void)

void Scaleform::GFx::FontDataCompactedGfx::~FontDataCompactedGfx(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b04150;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)(param_1 + 0x50));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x38));
  *(undefined ***)param_1 = &PTR_FUN_145afa1a8;
  Render::FontCacheHandleRef::releaseFont(param_1 + 0x28);
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14339b3f0 FUN_14339b3f0 body=458 status=ok
// SIG undefined FUN_14339b3f0(void)

void FUN_14339b3f0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  undefined4 local_res8 [2];
  
  lVar10 = *(longlong *)(param_2 + 0x418);
  if (lVar10 == 0) {
    lVar10 = param_2 + 0x50;
  }
  FUN_143300df0(lVar10,"reading DefineCompactedFont:\n");
  local_res8[0] = 2;
  iVar9 = *(int *)(param_3 + 8) + -2;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1000,local_res8);
  FUN_1433a0fc0(param_1 + 7,(longlong)iVar9,0);
  iVar6 = 0;
  while( true ) {
    iVar7 = iVar9 - iVar6;
    if (0x1000 < iVar7) {
      iVar7 = 0x1000;
    }
    iVar3 = FUN_143396b20(lVar10,lVar4);
    iVar6 = iVar6 + iVar3;
    if ((0 < iVar3) && (lVar8 = 0, 0 < iVar3)) {
      do {
        lVar2 = param_1[8];
        param_1[8] = lVar2 + 1;
        puVar1 = (undefined1 *)(lVar8 + lVar4);
        lVar8 = lVar8 + 1;
        *(undefined1 *)(lVar2 + param_1[7]) = *puVar1;
      } while (lVar8 < iVar3);
    }
    if (iVar3 != iVar7) break;
    if (iVar9 <= iVar6) {
LAB_14339b4db:
      FUN_14339e8e0(param_1 + 10,0);
      if (*(uint *)((longlong)param_1 + 0x94) == 0) {
        uVar5 = (**(code **)(*param_1 + 8))();
        FUN_14339fb50(lVar10,
                      "Invalid nominal size for DefineCompactedFont, font %s. Broken gfx file.",
                      uVar5);
        *(undefined8 *)((longlong)param_1 + 0x14) = 0x42800000;
        *(undefined4 *)(param_1 + 2) = 0x44700000;
      }
      else {
        fVar11 = 1024.0 / (float)*(uint *)((longlong)param_1 + 0x94);
        *(float *)(param_1 + 3) = fVar11 * *(float *)(param_1 + 0x14);
        *(float *)(param_1 + 2) = fVar11 * *(float *)(param_1 + 0x13);
        *(float *)((longlong)param_1 + 0x14) = fVar11 * *(float *)((longlong)param_1 + 0x9c);
        uVar5 = (**(code **)(*param_1 + 8))(param_1);
        FUN_143300df0(lVar10,"read font \"%s\"\n",uVar5);
        *(int *)((longlong)param_1 + 0x1c) = (int)param_1[0x12];
      }
      if (lVar4 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
      return;
    }
  }
  FUN_14339fb50(lVar10,"Could not read tag DefineCompactedFont. Broken gfx file.");
  goto LAB_14339b4db;
}



// FUNCTION 14339b650 GetKerningAdjustment body=50 status=ok
// SIG undefined GetKerningAdjustment(void)

float Scaleform::GFx::FontDataCompactedGfx::GetKerningAdjustment(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_14339f980(param_1 + 0x50);
  return (fVar1 * 1024.0) / (float)*(uint *)(param_1 + 0x94);
}



// FUNCTION 14339b690 FUN_14339b690 body=75 status=ok
// SIG undefined FUN_14339b690(void)

float FUN_14339b690(longlong *param_1,short param_2)

{
  uint uVar1;
  float fVar2;
  
  if (param_2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x00014339b6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*param_1 + 0xa8))();
    return fVar2;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x94);
  fVar2 = (float)FUN_14339f740(param_1 + 10);
  return (fVar2 * 1024.0) / (float)uVar1;
}



// FUNCTION 14339b6f0 FUN_14339b6f0 body=75 status=ok
// SIG undefined FUN_14339b6f0(void)

float FUN_14339b6f0(longlong *param_1,short param_2)

{
  uint uVar1;
  float fVar2;
  
  if (param_2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x00014339b702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*param_1 + 0xb0))();
    return fVar2;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x94);
  fVar2 = (float)FUN_14339f360(param_1 + 10);
  return (fVar2 * 1024.0) / (float)uVar1;
}



// FUNCTION 14339b7b0 FUN_14339b7b0 body=29 status=ok
// SIG undefined FUN_14339b7b0(void)

undefined8 FUN_14339b7b0(undefined8 param_1,undefined8 param_2)

{
  FUN_14339c110(param_2,param_1);
  return param_2;
}



// FUNCTION 14339b7f0 FUN_14339b7f0 body=315 status=ok
// SIG undefined FUN_14339b7f0(void)

undefined8 * FUN_14339b7f0(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  undefined **local_28;
  undefined8 local_20;
  
  uVar5 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afa1a8;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((longlong)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145b04208;
  Scaleform::RefCountImpl::AddRef(param_2);
  param_1[7] = param_2;
  param_1[8] = 0;
  uVar2 = (**(code **)(*(longlong *)param_2 + 0x58))(param_2);
  local_res8[0] = 0x105;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
  uVar4 = uVar5;
  if (lVar3 != 0) {
    uVar4 = FUN_143397b70(lVar3,uVar2);
  }
  if ((RefCountNTSImpl *)param_1[8] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[8]);
  }
  local_28 = &PTR_FUN_145b04638;
  param_1[8] = uVar4;
  uVar1 = *(ulonglong *)(uVar4 + 0x28);
  uVar6 = uVar5;
  local_20 = param_3;
  if (uVar1 != 0) {
    do {
      (*(code *)local_28[1])(&local_28,uVar6 & 0xffffffff,*(longlong *)(uVar4 + 0x20) + uVar5);
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + 0x40;
    } while (uVar6 < uVar1);
  }
  return param_1;
}



// FUNCTION 14339b960 FUN_14339b960 body=124 status=ok
// SIG undefined FUN_14339b960(void)

undefined8 * FUN_14339b960(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b042c0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  FUN_1432de310(param_1 + 5);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 14339b9f0 FUN_14339b9f0 body=163 status=ok
// SIG undefined FUN_14339b9f0(void)

undefined8 * FUN_14339b9f0(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b042c0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1432de310(param_1 + 5);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = param_2;
  FUN_1432de3d0(param_1 + 5,param_3);
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 14339baa0 FUN_14339baa0 body=68 status=ok
// SIG undefined FUN_14339baa0(void)

void FUN_14339baa0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_145b042c0;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[6]);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 14339baf0 FUN_14339baf0 body=369 status=ok
// SIG undefined FUN_14339baf0(void)

RefCountImpl *
FUN_14339baf0(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  RefCountImpl *pRVar3;
  RefCountImpl *pRVar4;
  int local_38 [2];
  RefCountImpl *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  pRVar4 = (RefCountImpl *)0x0;
  pRVar3 = pRVar4;
  if (lVar2 != 0) {
    pRVar3 = (RefCountImpl *)FUN_14339e040(lVar2,param_1,param_2,param_3);
  }
  FUN_1432de330(&local_28,&PTR_PTR_1467ce5f0,pRVar3);
  if (pRVar3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar3);
  }
  local_38[0] = 0;
  local_30 = (RefCountImpl *)0x0;
  iVar1 = FUN_1432dee30(param_4,local_38,&local_28);
  if (iVar1 == 3) {
    pRVar3 = (RefCountImpl *)(**(code **)(*param_3 + 8))(param_3,param_1,param_2);
    if (((pRVar3 == (RefCountImpl *)0x0) ||
        (lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40), lVar2 == 0)) ||
       (pRVar4 = (RefCountImpl *)FUN_14339b9f0(lVar2,pRVar3,&local_28),
       pRVar4 == (RefCountImpl *)0x0)) {
      FUN_1432de9d0(local_30,&DAT_145af3922);
    }
    else {
      FUN_1432de8f0(local_30,pRVar4);
    }
    if (pRVar3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar3);
    }
  }
  else {
    pRVar4 = (RefCountImpl *)FUN_1432dea40(local_38);
  }
  if (local_38[0] == 1) {
    FUN_1432de450(local_30);
  }
  else if (1 < local_38[0]) {
    Scaleform::RefCountImpl::Release(local_30);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))(local_28,local_20);
  }
  return pRVar4;
}



// FUNCTION 14339bc70 FUN_14339bc70 body=136 status=ok
// SIG undefined FUN_14339bc70(void)

undefined8
FUN_14339bc70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  if (lVar1 == 0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    this = (RefCountImpl *)FUN_14339e040(lVar1,param_2,param_3,param_4);
  }
  FUN_1432de330(param_1,&PTR_PTR_1467ce5f0,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return param_1;
}



// FUNCTION 14339bd00 FUN_14339bd00 body=121 status=ok
// SIG undefined FUN_14339bd00(void)

void FUN_14339bd00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
  if (lVar1 != 0) {
    local_res8[0] = 0x4b;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14339b7f0(lVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
    if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  return;
}



// FUNCTION 14339bd80 FUN_14339bd80 body=82 status=ok
// SIG undefined FUN_14339bd80(void)

longlong FUN_14339bd80(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  if (iVar1 != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),iVar1,&local_18);
    return (longlong)-local_18._4_4_;
  }
  return 0;
}



// FUNCTION 14339bde0 FUN_14339bde0 body=456 status=ok
// SIG undefined FUN_14339bde0(void)

void FUN_14339bde0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float fVar10;
  undefined4 local_res8;
  undefined2 local_resc;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(short *)(param_1 + 0x38) == 0)) &&
     (*(short *)(param_1 + 0x3a) == 0)) {
    puVar6 = &local_38;
    local_30 = 0x5a;
    local_38 = 0x5857565554464548;
    local_38._0_1_ = 'H';
    local_res8 = 0x7776787a;
    local_resc = 0x79;
    cVar5 = (char)local_38;
    do {
      local_28 = 0;
      uStack_20 = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                        (*(longlong **)(param_1 + 0x18),cVar5);
      if (iVar3 != -1) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                  (*(longlong **)(param_1 + 0x18),iVar3,&local_28);
        fVar10 = -local_28._4_4_;
        if ((short)(longlong)fVar10 != 0) {
          puVar8 = &local_res8;
          cVar5 = (char)local_res8;
          goto joined_r0x00014339bf47;
        }
      }
      cVar5 = *(char *)((longlong)puVar6 + 1);
      puVar6 = (undefined8 *)((longlong)puVar6 + 1);
    } while (cVar5 != '\0');
  }
LAB_14339bebe:
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x18);
    pcVar9 = "";
    pcVar7 = "";
    if ((*(byte *)((longlong)plVar1 + 0x1c) & 1) != 0) {
      pcVar7 = " Italic";
    }
    if ((*(uint *)((longlong)plVar1 + 0x1c) >> 1 & 1) != 0) {
      pcVar9 = " Bold";
    }
    uVar4 = (**(code **)(*plVar1 + 8))();
    FUN_14337ae30(param_2,
                  "Font \'%s%s%s\' has no hinting chars (any of \'HEFTUVWXZ\' and \'zxvwy\'). Auto-Hinting disabled."
                  ,uVar4,pcVar9,pcVar7);
  }
  sVar2 = -1;
  *(undefined2 *)(param_1 + 0x3a) = 0xffff;
LAB_14339bf1c:
  *(short *)(param_1 + 0x38) = sVar2;
  return;
joined_r0x00014339bf47:
  if (cVar5 == '\0') goto LAB_14339bebe;
  local_28 = 0;
  uStack_20 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                    (*(longlong **)(param_1 + 0x18),cVar5);
  if (iVar3 != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),iVar3,&local_28);
    sVar2 = (short)(longlong)-local_28._4_4_;
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x3a) = (short)(longlong)fVar10;
      goto LAB_14339bf1c;
    }
  }
  cVar5 = *(char *)((longlong)puVar8 + 1);
  puVar8 = (undefined4 *)((longlong)puVar8 + 1);
  goto joined_r0x00014339bf47;
}



// FUNCTION 14339c020 FUN_14339c020 body=233 status=ok
// SIG undefined FUN_14339c020(void)

void FUN_14339c020(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x60) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x60,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x5fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143354cd0(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 14339c110 FUN_14339c110 body=543 status=ok
// SIG undefined FUN_14339c110(void)

ulonglong FUN_14339c110(ulonglong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined4 local_res10;
  undefined4 local_res18;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  bVar4 = false;
  uVar7 = 0;
  uVar11 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res10 = 0;
  iVar5 = (**(code **)(*param_2 + 0x90))(param_2);
  uVar8 = uVar7;
  uVar10 = uVar7;
  uVar12 = uVar11;
  if (iVar5 == 0) goto LAB_14339c2d0;
  do {
    iVar5 = (int)uVar10;
    uVar9 = *(int *)((longlong)param_2 + 0x6c) + iVar5;
    lVar3 = *(longlong *)param_2[0xc];
    uVar6 = (ulonglong)(uVar9 + 1);
    uVar2 = *(undefined1 *)((ulonglong)uVar9 + lVar3);
    if (bVar4) {
      if ((uint)uVar12 == CONCAT11(*(undefined1 *)(uVar6 + lVar3),uVar2) - 1) goto LAB_14339c19f;
      uVar6 = uVar8 + 1;
      local_res18 = CONCAT22(uVar12,uVar11);
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
        if (uVar6 < uVar7 >> 1) {
LAB_14339c262:
          FUN_143300ed0(&local_58,&local_58,uVar8);
          uVar7 = local_48;
        }
      }
      else if (uVar7 < uVar6) {
        uVar8 = (uVar6 >> 2) + uVar6;
        goto LAB_14339c262;
      }
      puVar1 = (undefined4 *)(local_58 + -4 + uVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = local_res18;
      }
      bVar4 = false;
      local_50 = uVar6;
    }
    else {
      bVar4 = true;
      uVar11 = CONCAT11(*(undefined1 *)(uVar6 + lVar3),uVar2);
LAB_14339c19f:
      local_res10 = local_res10 + 1;
      uVar9 = *(int *)((longlong)param_2 + 0x6c) + iVar5;
      uVar12 = CONCAT11(*(undefined1 *)((ulonglong)(uVar9 + 1) + *(longlong *)param_2[0xc]),
                        *(undefined1 *)((ulonglong)uVar9 + *(longlong *)param_2[0xc]));
      uVar10 = (ulonglong)(iVar5 + 8);
      uVar6 = uVar8;
    }
    uVar9 = (**(code **)(*param_2 + 0x90))(param_2);
    uVar8 = uVar6;
  } while (local_res10 < uVar9);
  if (!bVar4) goto LAB_14339c2d0;
  uVar8 = uVar6 + 1;
  local_res10 = CONCAT22(uVar12,uVar11);
  if (uVar8 < uVar6) {
    uVar10 = uVar8;
    if (uVar8 < uVar7 >> 1) {
LAB_14339c2a6:
      FUN_143300ed0(&local_58,&local_58,uVar10);
    }
  }
  else if (uVar7 < uVar8) {
    uVar10 = (uVar8 >> 2) + uVar8;
    goto LAB_14339c2a6;
  }
  puVar1 = (undefined4 *)(local_58 + -4 + uVar8 * 4);
  local_50 = uVar8;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = local_res10;
  }
LAB_14339c2d0:
  FUN_14339d360(&local_58,0,uVar8,param_1 & 0xff);
  FUN_14339ebc0(param_1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return param_1;
}



// FUNCTION 14339c330 FUN_14339c330 body=672 status=ok
// SIG undefined FUN_14339c330(void)

ulonglong FUN_14339c330(ulonglong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined4 local_res10;
  undefined4 local_res18;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  bVar2 = false;
  uVar6 = 0;
  uVar10 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res10 = 0;
  iVar3 = (**(code **)(*param_2 + 0x90))(param_2);
  uVar8 = uVar6;
  uVar9 = uVar6;
  uVar11 = uVar10;
  if (iVar3 == 0) goto LAB_14339c571;
  do {
    iVar3 = (int)uVar9;
    uVar4 = *(int *)((longlong)param_2 + 0x7c) + iVar3;
    uVar5 = uVar4 + 1;
    if (bVar2) {
      if ((uint)uVar11 ==
          CONCAT11(*(undefined1 *)
                    (*(longlong *)
                      (*(longlong *)(param_2[0xe] + 0x20) + (ulonglong)(uVar5 >> 0xc) * 8) +
                    (ulonglong)(uVar5 & 0xfff)),
                   *(undefined1 *)
                    (*(longlong *)
                      (*(longlong *)(param_2[0xe] + 0x20) + (ulonglong)(uVar4 >> 0xc) * 8) +
                    (ulonglong)(uVar4 & 0xfff))) - 1) goto LAB_14339c3e4;
      uVar7 = uVar8 + 1;
      local_res18 = CONCAT22(uVar11,uVar10);
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
        if (uVar7 < uVar6 >> 1) {
LAB_14339c503:
          FUN_143300ed0(&local_58,&local_58,uVar8);
          uVar6 = local_48;
        }
      }
      else if (uVar6 < uVar7) {
        uVar8 = (uVar7 >> 2) + uVar7;
        goto LAB_14339c503;
      }
      puVar1 = (undefined4 *)(local_58 + -4 + uVar7 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = local_res18;
      }
      bVar2 = false;
      local_50 = uVar7;
    }
    else {
      bVar2 = true;
      uVar10 = CONCAT11(*(undefined1 *)
                         (*(longlong *)
                           (*(longlong *)(param_2[0xe] + 0x20) + (ulonglong)(uVar5 >> 0xc) * 8) +
                         (ulonglong)(uVar5 & 0xfff)),
                        *(undefined1 *)
                         (*(longlong *)
                           (*(longlong *)(param_2[0xe] + 0x20) + (ulonglong)(uVar4 >> 0xc) * 8) +
                         (ulonglong)(uVar4 & 0xfff)));
LAB_14339c3e4:
      local_res10 = local_res10 + 1;
      uVar5 = *(int *)((longlong)param_2 + 0x7c) + iVar3;
      uVar11 = CONCAT11(*(undefined1 *)
                         (*(longlong *)
                           (*(longlong *)(param_2[0xe] + 0x20) + (ulonglong)(uVar5 + 1 >> 0xc) * 8)
                         + (ulonglong)(uVar5 + 1 & 0xfff)),
                        *(undefined1 *)
                         (*(longlong *)
                           (*(longlong *)(param_2[0xe] + 0x20) + (ulonglong)(uVar5 >> 0xc) * 8) +
                         (ulonglong)(uVar5 & 0xfff)));
      uVar9 = (ulonglong)(iVar3 + 8);
      uVar7 = uVar8;
    }
    uVar5 = (**(code **)(*param_2 + 0x90))(param_2);
    uVar8 = uVar7;
  } while (local_res10 < uVar5);
  if (!bVar2) goto LAB_14339c571;
  uVar8 = uVar7 + 1;
  local_res10 = CONCAT22(uVar11,uVar10);
  if (uVar8 < uVar7) {
    uVar9 = uVar8;
    if (uVar8 < uVar6 >> 1) {
LAB_14339c547:
      FUN_143300ed0(&local_58,&local_58,uVar9);
    }
  }
  else if (uVar6 < uVar8) {
    uVar9 = (uVar8 >> 2) + uVar8;
    goto LAB_14339c547;
  }
  puVar1 = (undefined4 *)(local_58 + -4 + uVar8 * 4);
  local_50 = uVar8;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = local_res10;
  }
LAB_14339c571:
  FUN_14339d360(&local_58,0,uVar8,param_1 & 0xff);
  FUN_14339ebc0(param_1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return param_1;
}



// FUNCTION 14339c5d0 FUN_14339c5d0 body=149 status=ok
// SIG undefined FUN_14339c5d0(void)

undefined1 (*) [16] FUN_14339c5d0(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  
  if (((short)param_2 == -1) || (*(uint *)(param_1 + 0xd) <= param_2)) {
    *(undefined8 *)*param_3 = 0;
    uVar1 = (**(code **)(*param_1 + 0xb0))();
    uVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
    *(undefined4 *)(*param_3 + 0xc) = uVar1;
    *(undefined4 *)(*param_3 + 8) = uVar2;
    *(undefined8 *)*param_3 = 0;
  }
  else {
    FUN_14339f150(param_1 + 10);
  }
  auVar3._0_4_ = *(float *)*param_3 * 1024.0;
  auVar3._4_4_ = *(float *)(*param_3 + 4) * 1024.0;
  auVar3._8_4_ = *(float *)(*param_3 + 8) * 1024.0;
  auVar3._12_4_ = *(float *)(*param_3 + 0xc) * 1024.0;
  fVar5 = (float)*(uint *)((longlong)param_1 + 0x94);
  auVar4._4_4_ = fVar5;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar5;
  auVar4._12_4_ = fVar5;
  auVar4 = divps(auVar3,auVar4);
  *param_3 = auVar4;
  return param_3;
}



// FUNCTION 14339c670 FUN_14339c670 body=149 status=ok
// SIG undefined FUN_14339c670(void)

undefined1 (*) [16] FUN_14339c670(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  
  if (((short)param_2 == -1) || (*(uint *)(param_1 + 0xf) <= param_2)) {
    *(undefined8 *)*param_3 = 0;
    uVar1 = (**(code **)(*param_1 + 0xb0))();
    uVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
    *(undefined4 *)(*param_3 + 0xc) = uVar1;
    *(undefined4 *)(*param_3 + 8) = uVar2;
    *(undefined8 *)*param_3 = 0;
  }
  else {
    FUN_14339efe0(param_1 + 0xc);
  }
  auVar3._0_4_ = *(float *)*param_3 * 1024.0;
  auVar3._4_4_ = *(float *)(*param_3 + 4) * 1024.0;
  auVar3._8_4_ = *(float *)(*param_3 + 8) * 1024.0;
  auVar3._12_4_ = *(float *)(*param_3 + 0xc) * 1024.0;
  fVar5 = (float)*(uint *)((longlong)param_1 + 0xa4);
  auVar4._4_4_ = fVar5;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar5;
  auVar4._12_4_ = fVar5;
  auVar4 = divps(auVar3,auVar4);
  *param_3 = auVar4;
  return param_3;
}



// FUNCTION 14339c710 FUN_14339c710 body=1463 status=ok
// SIG undefined FUN_14339c710(void)

undefined8 FUN_14339c710(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int local_res8;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_110;
  uint local_10c;
  longlong local_108;
  int local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  char local_e0;
  longlong *local_d8;
  float local_d0;
  longlong local_c8;
  float local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  float local_a0;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x68)) {
    local_108 = param_1 + 0x38;
    FUN_14339f550(param_1 + 0x50,param_2,&local_108);
    uVar8 = *(uint *)(param_1 + 0x94);
    local_10c = uVar8;
    if ((param_3[0xd] != 0) && ((param_3[0xe] & 0xfffffffffffffffeU) != 0)) {
      FUN_143333390(param_3 + 0xc,param_3 + 0xc,0);
    }
    param_3[0xd] = 0;
    if (local_ec != 0) {
      fVar19 = (float)uVar8;
      do {
        iVar16 = local_f0;
        iVar17 = local_f4;
        plVar2 = (longlong *)param_3[2];
        fVar1 = *(float *)((longlong)param_3 + 0x2c);
        iVar5 = local_f0 << 10;
        fVar18 = (float)local_f4;
        local_d8 = plVar2;
        local_d0 = fVar1;
        FUN_1433354a0(&local_d8,1);
        uVar12 = plVar2[1] + 1;
        if (uVar12 < (ulonglong)plVar2[1]) {
          uVar14 = uVar12;
          if (uVar12 < (ulonglong)plVar2[2] >> 1) {
LAB_14339c86d:
            FUN_143333390(plVar2,plVar2,uVar14);
          }
        }
        else if ((ulonglong)plVar2[2] < uVar12) {
          uVar14 = (uVar12 >> 2) + uVar12;
          goto LAB_14339c86d;
        }
        plVar2[1] = uVar12;
        *(undefined1 *)(*plVar2 + -1 + uVar12) = 4;
        uVar12 = plVar2[1] + 1;
        if (uVar12 < (ulonglong)plVar2[1]) {
          uVar14 = uVar12;
          if (uVar12 < (ulonglong)plVar2[2] >> 1) {
LAB_14339c8b2:
            FUN_143333390(plVar2,plVar2,uVar14);
          }
        }
        else if ((ulonglong)plVar2[2] < uVar12) {
          uVar14 = (uVar12 >> 2) + uVar12;
          goto LAB_14339c8b2;
        }
        plVar2[1] = uVar12;
        *(undefined1 *)(*plVar2 + -1 + uVar12) = 0;
        uVar14 = plVar2[1];
        uVar12 = uVar14 + 1;
        if (uVar12 < uVar14) {
          uVar13 = uVar12;
          if (uVar12 < (ulonglong)plVar2[2] >> 1) {
LAB_14339c8f7:
            FUN_143333390(plVar2,plVar2,uVar13);
          }
        }
        else if ((ulonglong)plVar2[2] < uVar12) {
          uVar13 = (uVar12 >> 2) + uVar12;
          goto LAB_14339c8f7;
        }
        plVar2[1] = uVar12;
        *(undefined1 *)(uVar14 + *plVar2) = 0;
        iVar10 = (int)(fVar1 * ((fVar18 * 1024.0) / fVar19));
        local_110 = iVar10;
        FUN_143335130(&local_d8,iVar10);
        iVar6 = (int)(fVar1 * (float)(iVar5 / (int)uVar8));
        FUN_143335130(&local_d8,iVar6);
        iVar5 = local_e8;
        iVar15 = local_100;
        iVar9 = local_e4;
        local_res8 = iVar6;
        if (local_e8 != 0) {
          do {
            iVar7 = FUN_1433a0590(&local_108,iVar9,&local_128);
            iVar9 = iVar9 + iVar7;
            if (local_128 == 0) {
              local_128 = 2;
LAB_14339ca09:
              local_f4 = iVar17 + local_124;
              local_120 = iVar16;
LAB_14339ca0f:
              local_124 = iVar17 + local_124;
              iVar17 = local_f4;
            }
            else {
              if (local_128 != 1) {
                if (local_128 == 2) {
                  iVar16 = iVar16 + local_120;
                  local_f0 = iVar16;
                  goto LAB_14339ca09;
                }
                if (local_128 != 3) goto LAB_14339ca1c;
                local_120 = iVar16 + local_120;
                local_f4 = iVar17 + local_124 + local_11c;
                iVar16 = local_120 + local_118;
                local_11c = local_f4;
                local_118 = iVar16;
                local_f0 = iVar16;
                goto LAB_14339ca0f;
              }
              iVar16 = iVar16 + local_124;
              local_128 = 2;
              local_124 = iVar17;
              local_120 = iVar16;
              local_f0 = iVar16;
            }
LAB_14339ca1c:
            if (((iVar5 == 0) || (iVar5 = iVar5 + -1, local_e8 = iVar5, iVar5 == 0)) &&
               (local_100 = iVar15, local_e0 != '\0')) {
              iVar15 = iVar9;
              local_100 = iVar9;
            }
            lVar3 = param_3[2];
            local_e4 = iVar9;
            if (local_128 == 2) {
              local_c0 = *(float *)((longlong)param_3 + 0x2c);
              iVar11 = (int)((((float)local_124 * 1024.0) / fVar19) * local_c0) - iVar10;
              iVar7 = (int)((((float)local_120 * 1024.0) / fVar19) * local_c0) - local_res8;
              local_c8 = lVar3;
              if (iVar7 == 0) {
                FUN_1433337c0(&local_c8,iVar11);
                iVar10 = iVar10 + iVar11;
              }
              else if (iVar11 == 0) {
                FUN_143335930(&local_c8,iVar7);
                local_res8 = local_res8 + iVar7;
              }
              else {
                FUN_1433339f0(&local_c8,iVar11,iVar7);
                iVar10 = iVar10 + iVar11;
                local_res8 = local_res8 + iVar7;
              }
            }
            else {
              local_a0 = *(float *)((longlong)param_3 + 0x2c);
              iVar7 = (int)((((float)local_11c * 1024.0) / fVar19) * local_a0) - iVar10;
              iVar11 = (int)((((float)local_118 * 1024.0) / fVar19) * local_a0) - local_res8;
              local_a8 = lVar3;
              FUN_143334010(&local_a8,
                            (int)((((float)local_124 * 1024.0) / fVar19) * local_a0) - iVar10,
                            (int)((((float)local_120 * 1024.0) / fVar19) * local_a0) - local_res8,
                            iVar7,iVar11);
              iVar10 = iVar10 + iVar7;
              local_res8 = local_res8 + iVar11;
            }
            uVar8 = local_10c;
          } while (iVar5 != 0);
          local_b8 = param_3[2];
          local_b0 = *(undefined4 *)((longlong)param_3 + 0x2c);
          if ((iVar10 != local_110) || (local_res8 != iVar6)) {
            iVar10 = local_110 - iVar10;
            if (iVar6 - local_res8 == 0) {
              FUN_1433337c0(&local_b8,iVar10);
            }
            else if (iVar10 == 0) {
              FUN_143335930();
            }
            else {
              FUN_1433339f0(&local_b8,iVar10,iVar6 - local_res8);
            }
          }
          plVar2 = (longlong *)param_3[2];
          lVar3 = plVar2[1];
          uVar12 = lVar3 + 1;
          if (uVar12 < (ulonglong)plVar2[1]) {
            uVar14 = uVar12;
            if (uVar12 < (ulonglong)plVar2[2] >> 1) {
LAB_14339cc14:
              FUN_143333390(plVar2,plVar2,uVar14);
            }
          }
          else if ((ulonglong)plVar2[2] < uVar12) {
            uVar14 = (uVar12 >> 2) + uVar12;
            goto LAB_14339cc14;
          }
          plVar2[1] = uVar12;
          *(undefined1 *)(lVar3 + *plVar2) = 0xf;
        }
        local_ec = local_ec + -1;
        FUN_1433a1400(&local_108);
      } while (local_ec != 0);
    }
    cVar4 = (**(code **)(*param_3 + 8))(param_3);
    if (cVar4 == '\0') {
      FUN_1433325e0(param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14339ccd0 FUN_14339ccd0 body=1666 status=ok
// SIG undefined FUN_14339ccd0(void)

undefined8 FUN_14339ccd0(longlong param_1,uint param_2,longlong *param_3)

{
  ulonglong uVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int local_res8;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  longlong local_110;
  uint local_108;
  int local_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  int local_ec;
  char local_e8;
  int local_e0;
  uint local_dc;
  longlong *local_d8;
  float local_d0;
  longlong local_c8;
  float local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  float local_a0;
  
  if (param_2 < *(uint *)(param_1 + 0x78)) {
    local_110 = param_1 + 0x38;
    uVar10 = param_2 * 8 + 4 + *(int *)(param_1 + 0x7c);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x20);
    FUN_14339fba0(&local_110,
                  CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                              (*(longlong *)
                                                (lVar4 + (ulonglong)(uVar10 + 3 >> 0xc) * 8) +
                                              (ulonglong)(uVar10 + 3 & 0xfff)),
                                             *(undefined1 *)
                                              (*(longlong *)
                                                (lVar4 + (ulonglong)(uVar10 + 2 >> 0xc) * 8) +
                                              (ulonglong)(uVar10 + 2 & 0xfff))),
                                    *(undefined1 *)
                                     (*(longlong *)(lVar4 + (ulonglong)(uVar10 + 1 >> 0xc) * 8) +
                                     (ulonglong)(uVar10 + 1 & 0xfff))),
                           *(undefined1 *)
                            (*(longlong *)(lVar4 + (ulonglong)(uVar10 >> 0xc) * 8) +
                            (ulonglong)(uVar10 & 0xfff))));
    bVar3 = *(byte *)(*(longlong *)
                       (*(longlong *)(local_110 + 0x20) + (ulonglong)(local_108 >> 0xc) * 8) +
                     (ulonglong)(local_108 & 0xfff));
    if ((bVar3 & 1) == 0) {
      iVar7 = 1;
      local_f4 = (uint)(bVar3 >> 1);
    }
    else {
      iVar7 = 2;
      local_f4 = (uint)*(byte *)(*(longlong *)
                                  (*(longlong *)(local_110 + 0x20) +
                                  (ulonglong)(local_108 + 1 >> 0xc) * 8) +
                                (ulonglong)(local_108 + 1 & 0xfff)) << 7 | (uint)(bVar3 >> 1);
    }
    local_108 = local_108 + iVar7;
    FUN_1433a12d0(&local_110);
    uVar10 = *(uint *)(param_1 + 0xa4);
    local_dc = uVar10;
    if ((param_3[0xd] != 0) && ((param_3[0xe] & 0xfffffffffffffffeU) != 0)) {
      FUN_143333390(param_3 + 0xc,param_3 + 0xc,0);
    }
    param_3[0xd] = 0;
    if (local_f4 != 0) {
      fVar19 = (float)uVar10;
      do {
        iVar17 = local_f8;
        iVar7 = local_fc;
        plVar5 = (longlong *)param_3[2];
        fVar2 = *(float *)((longlong)param_3 + 0x2c);
        iVar8 = local_f8 << 10;
        fVar18 = (float)local_fc;
        local_d8 = plVar5;
        local_d0 = fVar2;
        FUN_1433354a0(&local_d8,1);
        uVar1 = plVar5[1] + 1;
        if (uVar1 < (ulonglong)plVar5[1]) {
          uVar13 = uVar1;
          if (uVar1 < (ulonglong)plVar5[2] >> 1) {
LAB_14339cf2c:
            FUN_143333390(plVar5,plVar5,uVar13);
          }
        }
        else if ((ulonglong)plVar5[2] < uVar1) {
          uVar13 = (uVar1 >> 2) + uVar1;
          goto LAB_14339cf2c;
        }
        plVar5[1] = uVar1;
        *(undefined1 *)(*plVar5 + -1 + uVar1) = 4;
        uVar13 = plVar5[1];
        uVar1 = uVar13 + 1;
        if (uVar1 < uVar13) {
          uVar14 = uVar1;
          if (uVar1 < (ulonglong)plVar5[2] >> 1) {
LAB_14339cf71:
            FUN_143333390(plVar5,plVar5,uVar14);
          }
        }
        else if ((ulonglong)plVar5[2] < uVar1) {
          uVar14 = (uVar1 >> 2) + uVar1;
          goto LAB_14339cf71;
        }
        plVar5[1] = uVar1;
        *(undefined1 *)(uVar13 + *plVar5) = 0;
        uVar13 = plVar5[1];
        uVar1 = uVar13 + 1;
        if (uVar1 < uVar13) {
          uVar14 = uVar1;
          if (uVar1 < (ulonglong)plVar5[2] >> 1) {
LAB_14339cfb6:
            FUN_143333390(plVar5,plVar5,uVar14);
          }
        }
        else if ((ulonglong)plVar5[2] < uVar1) {
          uVar14 = (uVar1 >> 2) + uVar1;
          goto LAB_14339cfb6;
        }
        plVar5[1] = uVar1;
        *(undefined1 *)(uVar13 + *plVar5) = 0;
        iVar9 = (int)(fVar2 * ((fVar18 * 1024.0) / fVar19));
        local_e0 = iVar9;
        FUN_143335130(&local_d8,iVar9);
        iVar8 = (int)(fVar2 * (float)(iVar8 / (int)uVar10));
        FUN_143335130(&local_d8,iVar8);
        if (local_f0 != 0) {
          local_res8 = local_108;
          iVar16 = iVar8;
          iVar15 = local_f0;
          do {
            iVar11 = local_ec;
            local_ec = FUN_14339fea0(&local_110,local_ec,&local_128);
            local_ec = iVar11 + local_ec;
            if (local_128 == 0) {
              local_128 = 2;
LAB_14339d0ca:
              local_fc = iVar7 + local_124;
              local_120 = iVar17;
LAB_14339d0d0:
              local_124 = iVar7 + local_124;
              iVar7 = local_fc;
            }
            else {
              if (local_128 != 1) {
                if (local_128 == 2) {
                  iVar17 = iVar17 + local_120;
                  local_f8 = iVar17;
                  goto LAB_14339d0ca;
                }
                if (local_128 != 3) goto LAB_14339d0dd;
                local_120 = iVar17 + local_120;
                local_fc = iVar7 + local_124 + local_11c;
                iVar17 = local_120 + local_118;
                local_11c = local_fc;
                local_118 = iVar17;
                local_f8 = iVar17;
                goto LAB_14339d0d0;
              }
              iVar17 = iVar17 + local_124;
              local_128 = 2;
              local_124 = iVar7;
              local_120 = iVar17;
              local_f8 = iVar17;
            }
LAB_14339d0dd:
            if (((iVar15 == 0) || (iVar15 = iVar15 + -1, local_f0 = iVar15, iVar15 == 0)) &&
               (local_108 = local_res8, local_e8 != '\0')) {
              local_res8 = local_ec;
              local_108 = local_ec;
            }
            lVar4 = param_3[2];
            if (local_128 == 2) {
              local_c0 = *(float *)((longlong)param_3 + 0x2c);
              iVar12 = (int)((((float)local_124 * 1024.0) / fVar19) * local_c0) - iVar9;
              iVar11 = (int)((((float)local_120 * 1024.0) / fVar19) * local_c0) - iVar16;
              local_c8 = lVar4;
              if (iVar11 == 0) {
                FUN_1433337c0(&local_c8,iVar12);
                iVar9 = iVar9 + iVar12;
              }
              else if (iVar12 == 0) {
                FUN_143335930(&local_c8,iVar11);
                iVar16 = iVar16 + iVar11;
              }
              else {
                FUN_1433339f0(&local_c8,iVar12,iVar11);
                iVar9 = iVar9 + iVar12;
                iVar16 = iVar16 + iVar11;
              }
            }
            else {
              local_a0 = *(float *)((longlong)param_3 + 0x2c);
              iVar11 = (int)((((float)local_11c * 1024.0) / fVar19) * local_a0) - iVar9;
              iVar12 = (int)((((float)local_118 * 1024.0) / fVar19) * local_a0) - iVar16;
              local_a8 = lVar4;
              FUN_143334010(&local_a8,
                            (int)((((float)local_124 * 1024.0) / fVar19) * local_a0) - iVar9,
                            (int)((((float)local_120 * 1024.0) / fVar19) * local_a0) - iVar16,iVar11
                            ,iVar12);
              iVar9 = iVar9 + iVar11;
              iVar16 = iVar16 + iVar12;
            }
            uVar10 = local_dc;
          } while (iVar15 != 0);
          local_b8 = param_3[2];
          local_b0 = *(undefined4 *)((longlong)param_3 + 0x2c);
          if ((iVar9 == local_e0) && (iVar16 == iVar8)) {
LAB_14339d2a9:
            FUN_143332580(param_3);
          }
          else {
            iVar9 = local_e0 - iVar9;
            iVar8 = iVar8 - iVar16;
            if (iVar8 == 0) {
              FUN_1433337c0(&local_b8,iVar9);
              FUN_143332580(param_3);
            }
            else {
              if (iVar9 != 0) {
                FUN_1433339f0(&local_b8,iVar9,iVar8);
                goto LAB_14339d2a9;
              }
              FUN_143335930(&local_b8,iVar8);
              FUN_143332580(param_3);
            }
          }
        }
        local_f4 = local_f4 - 1;
        FUN_1433a12d0(&local_110);
      } while (local_f4 != 0);
    }
    cVar6 = (**(code **)(*param_3 + 8))(param_3);
    if (cVar6 == '\0') {
      FUN_1433325e0(param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14339d360 FUN_14339d360 body=564 status=ok
// SIG undefined FUN_14339d360(void)

void FUN_14339d360(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_288 [80];
  
  plVar7 = local_288;
  if (1 < (ulonglong)(param_3 - param_2)) {
LAB_14339d3b0:
    while (lVar11 = param_2, 9 < param_3 - param_2) {
      lVar3 = *param_1;
      lVar11 = param_2 + 1;
      lVar10 = param_3 + -1;
      lVar8 = lVar10 * 4;
      lVar4 = (param_3 - param_2) / 2 + param_2;
      uVar2 = *(undefined4 *)(lVar3 + param_2 * 4);
      *(undefined4 *)(lVar3 + param_2 * 4) = *(undefined4 *)(lVar3 + lVar4 * 4);
      lVar9 = lVar11 * 4;
      *(undefined4 *)(lVar3 + lVar4 * 4) = uVar2;
      lVar3 = *param_1;
      puVar5 = (ushort *)(lVar8 + lVar3);
      if (*puVar5 < *(ushort *)(lVar9 + lVar3)) {
        uVar2 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = *(undefined4 *)(lVar9 + lVar3);
        *(undefined4 *)(lVar9 + lVar3) = uVar2;
      }
      lVar3 = *param_1;
      puVar5 = (ushort *)(lVar3 + param_2 * 4);
      if (*puVar5 < *(ushort *)(lVar9 + lVar3)) {
        uVar2 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = *(undefined4 *)(lVar9 + lVar3);
        *(undefined4 *)(lVar9 + lVar3) = uVar2;
      }
      lVar3 = *param_1;
      puVar5 = (ushort *)(lVar8 + lVar3);
      puVar6 = (undefined4 *)(lVar3 + param_2 * 4);
      if (*puVar5 < *(ushort *)(lVar3 + param_2 * 4)) {
        uVar2 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = *puVar6;
        *puVar6 = uVar2;
      }
      while( true ) {
        lVar3 = *param_1;
        uVar1 = *(ushort *)(lVar3 + param_2 * 4);
        puVar5 = (ushort *)(lVar9 + lVar3);
        do {
          lVar11 = lVar11 + 1;
          puVar5 = puVar5 + 2;
        } while (*puVar5 < uVar1);
        puVar5 = (ushort *)(lVar8 + lVar3);
        do {
          lVar10 = lVar10 + -1;
          puVar5 = puVar5 + -2;
        } while (uVar1 < *puVar5);
        if (lVar10 < lVar11) break;
        lVar8 = lVar10 * 4;
        lVar9 = lVar11 * 4;
        uVar2 = *(undefined4 *)(lVar9 + lVar3);
        *(undefined4 *)(lVar9 + lVar3) = *(undefined4 *)(lVar8 + lVar3);
        *(undefined4 *)(lVar8 + lVar3) = uVar2;
      }
      uVar2 = *(undefined4 *)(lVar3 + param_2 * 4);
      puVar6 = (undefined4 *)(lVar3 + lVar10 * 4);
      *(undefined4 *)(lVar3 + param_2 * 4) = *puVar6;
      *puVar6 = uVar2;
      if (param_3 - lVar11 < lVar10 - param_2) {
        *plVar7 = param_2;
        plVar7[1] = lVar10;
        param_2 = lVar11;
        plVar7 = plVar7 + 2;
      }
      else {
        plVar7[1] = param_3;
        *plVar7 = lVar11;
        param_3 = lVar10;
        plVar7 = plVar7 + 2;
      }
    }
joined_r0x00014339d505:
    lVar10 = lVar11;
    lVar11 = lVar10 + 1;
    if (lVar11 < param_3) {
      puVar6 = (undefined4 *)(*param_1 + lVar10 * 4);
      if (*(ushort *)(puVar6 + 1) < *(ushort *)(*param_1 + lVar10 * 4)) {
        do {
          uVar2 = puVar6[1];
          puVar6[1] = *puVar6;
          *puVar6 = uVar2;
          if (lVar10 == param_2) break;
          lVar10 = lVar10 + -1;
          puVar6 = (undefined4 *)(*param_1 + lVar10 * 4);
        } while (*(ushort *)(puVar6 + 1) < *(ushort *)(*param_1 + lVar10 * 4));
      }
      goto joined_r0x00014339d505;
    }
    if (local_288 < plVar7) {
      param_2 = plVar7[-2];
      param_3 = plVar7[-1];
      plVar7 = plVar7 + -2;
      goto LAB_14339d3b0;
    }
  }
  return;
}



// FUNCTION 14339d5a0 FUN_14339d5a0 body=287 status=ok
// SIG undefined FUN_14339d5a0(void)

longlong FUN_14339d5a0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  piVar2 = (int *)*param_3;
  lVar7 = 4;
  uVar5 = 0x1505;
  do {
    lVar1 = lVar7 + -1;
    lVar7 = lVar7 + -1;
    uVar5 = uVar5 * 0x1003f + (ulonglong)*(byte *)((longlong)piVar2 + lVar1);
  } while (lVar7 != 0);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    uVar6 = *(ulonglong *)(lVar7 + 8) & uVar5;
    lVar1 = uVar6 * 5 + 2;
    puVar3 = (ulonglong *)(lVar7 + lVar1 * 8);
    if ((*(longlong *)(lVar7 + lVar1 * 8) != -2) && (uVar4 = uVar6, puVar3[1] == uVar6)) {
      while ((puVar3[1] != uVar6 || ((int)puVar3[2] != *piVar2))) {
        uVar4 = *puVar3;
        if (uVar4 == 0xffffffffffffffff) goto LAB_14339d699;
        puVar3 = (ulonglong *)(lVar7 + uVar4 * 0x28 + 0x10);
      }
      if (-1 < (longlong)uVar4) {
        lVar7 = lVar7 + uVar4 * 0x28;
        *(int *)(lVar7 + 0x20) = *piVar2;
        piVar2 = (int *)param_3[1];
        if ((*piVar2 == 0) && (*(longlong *)(piVar2 + 2) != 0)) {
          Scaleform::GFx::Resource::AddRef();
        }
        if ((*(int *)(lVar7 + 0x28) == 0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
          FUN_1432de450();
        }
        *(int *)(lVar7 + 0x28) = *piVar2;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(piVar2 + 2);
        return lVar7 + 0x20;
      }
    }
  }
LAB_14339d699:
  lVar7 = FUN_14339de30(param_1,param_2,param_3,uVar5);
  return lVar7;
}



// FUNCTION 14339d6c0 FUN_14339d6c0 body=347 status=ok
// SIG undefined FUN_14339d6c0(void)

ulonglong *
FUN_14339d6c0(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_14339d714;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_1433a14e0(param_1,param_2,lVar6);
LAB_14339d714:
  plVar1 = (longlong *)*param_1;
  uVar5 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar6 = *param_1;
  param_4 = uVar5 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar6);
  uVar2 = *puVar8;
  uVar7 = param_4;
  if (uVar2 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    *(undefined2 *)(puVar8 + 1) = *(undefined2 *)param_3;
    *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)((longlong)param_3 + 2);
    return puVar8 + 1;
  }
  do {
    uVar7 = uVar7 + 1 & uVar5;
    puVar4 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar6);
  } while (*puVar4 != 0xfffffffffffffffe);
  uVar5 = (ushort)puVar8[1] & uVar5;
  if (uVar5 == param_4) {
    *puVar4 = uVar2;
    *(short *)(puVar4 + 1) = (short)puVar8[1];
    *(undefined2 *)((longlong)puVar4 + 10) = *(undefined2 *)((longlong)puVar8 + 10);
    *(undefined4 *)(puVar8 + 1) = *param_3;
    *puVar8 = uVar7;
  }
  else {
    puVar3 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar6);
    uVar5 = *puVar3;
    while (uVar5 != param_4) {
      puVar3 = (ulonglong *)((*puVar3 + 1) * 0x10 + lVar6);
      uVar5 = *puVar3;
    }
    *puVar4 = uVar2;
    *(short *)(puVar4 + 1) = (short)puVar8[1];
    *(undefined2 *)((longlong)puVar4 + 10) = *(undefined2 *)((longlong)puVar8 + 10);
    *puVar3 = uVar7;
    *(undefined4 *)(puVar8 + 1) = *param_3;
    *puVar8 = 0xffffffffffffffff;
  }
  return puVar8 + 1;
}



// FUNCTION 14339d820 FUN_14339d820 body=308 status=ok
// SIG undefined FUN_14339d820(void)

void FUN_14339d820(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  FUN_14339ef00();
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  uVar10 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar4 + 0x10 + param_4 * 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x18 + param_4 * 0x18) = 0;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + param_4 * 0x18);
    *puVar2 = *(undefined4 *)param_3;
    puVar2[1] = *(undefined4 *)((longlong)param_3 + 4);
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar3[1];
    } while (*(longlong *)(lVar4 + 0x10 + uVar10 * 0x18) != -2);
    uVar6 = *(ulonglong *)(lVar4 + 0x18 + param_4 * 0x18);
    if (uVar6 == param_4) {
      *(longlong *)(lVar4 + 0x10 + uVar10 * 0x18) = lVar5;
      *(undefined8 *)(lVar4 + 0x18 + uVar10 * 0x18) = *(undefined8 *)(lVar4 + 0x18 + param_4 * 0x18)
      ;
      puVar8 = (undefined8 *)(lVar4 + 0x20 + param_4 * 0x18);
      *(undefined4 *)(lVar4 + 0x20 + uVar10 * 0x18) = *(undefined4 *)(lVar4 + 0x20 + param_4 * 0x18)
      ;
      *(undefined4 *)(lVar4 + 0x24 + uVar10 * 0x18) = *(undefined4 *)((longlong)puVar8 + 4);
      uVar9 = *param_3;
      *(ulonglong *)(lVar4 + 0x10 + param_4 * 0x18) = uVar10;
    }
    else {
      lVar1 = uVar6 * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar4 + 0x10 + uVar10 * 0x18) = lVar5;
      *(undefined8 *)(lVar4 + 0x18 + uVar10 * 0x18) = *(undefined8 *)(lVar4 + 0x18 + param_4 * 0x18)
      ;
      puVar8 = (undefined8 *)(lVar4 + 0x20 + param_4 * 0x18);
      *(undefined4 *)(lVar4 + 0x20 + uVar10 * 0x18) = *(undefined4 *)(lVar4 + 0x20 + param_4 * 0x18)
      ;
      *(undefined4 *)(lVar4 + 0x24 + uVar10 * 0x18) = *(undefined4 *)((longlong)puVar8 + 4);
      *puVar7 = uVar10;
      uVar9 = *param_3;
      *(undefined8 *)(lVar4 + 0x10 + param_4 * 0x18) = 0xffffffffffffffff;
    }
    *puVar8 = uVar9;
  }
  *(ulonglong *)(lVar4 + 0x18 + param_4 * 0x18) = param_4;
  return;
}



// FUNCTION 14339d960 FUN_14339d960 body=447 status=ok
// SIG undefined FUN_14339d960(void)

longlong FUN_14339d960(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_14339ef50();
  plVar5 = (longlong *)*param_1;
  *plVar5 = *plVar5 + 1;
  param_4 = param_4 & plVar5[1];
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x28);
  lVar1 = lVar6 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x20) = *param_3;
    iVar4 = param_3[2];
    *(int *)(lVar1 + 0x28) = iVar4;
    lVar6 = *(longlong *)(param_3 + 4);
    *(longlong *)(lVar1 + 0x30) = lVar6;
    if ((iVar4 == 0) && (lVar6 != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar5[1];
      lVar2 = lVar6 + uVar10 * 0x28;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar1 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar7;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      iVar4 = *(int *)(lVar1 + 0x28);
      *(int *)(lVar2 + 0x28) = iVar4;
      lVar6 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar6;
      if ((iVar4 == 0) && (lVar6 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      FUN_143316100((undefined4 *)(lVar1 + 0x20),param_3);
      *(ulonglong *)(lVar1 + 0x10) = uVar10;
    }
    else {
      lVar3 = *(ulonglong *)(lVar1 + 0x18) * 5 + 2;
      uVar8 = *(ulonglong *)(lVar6 + lVar3 * 8);
      while (puVar9 = (ulonglong *)(lVar6 + lVar3 * 8), uVar8 != param_4) {
        lVar3 = *puVar9 * 5 + 2;
        uVar8 = *(ulonglong *)(lVar6 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar7;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      iVar4 = *(int *)(lVar1 + 0x28);
      *(int *)(lVar2 + 0x28) = iVar4;
      lVar6 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar6;
      if ((iVar4 == 0) && (lVar6 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      *puVar9 = uVar10;
      *(undefined4 *)(lVar1 + 0x20) = *param_3;
      if ((param_3[2] == 0) && (*(longlong *)(param_3 + 4) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*(int *)(lVar1 + 0x28) == 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
        FUN_1432de450();
      }
      *(undefined4 *)(lVar1 + 0x28) = param_3[2];
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar1 + 0x18) = param_4;
  return lVar1 + 0x20;
}



// FUNCTION 14339db20 FUN_14339db20 body=380 status=ok
// SIG undefined FUN_14339db20(void)

ulonglong *
FUN_14339db20(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_14339db74;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_1433a14e0(param_1,param_2,lVar6);
LAB_14339db74:
  plVar1 = (longlong *)*param_1;
  uVar3 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar6 = *param_1;
  param_4 = uVar3 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar6);
  uVar2 = *puVar8;
  uVar7 = param_4;
  if (uVar2 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    *(undefined2 *)(puVar8 + 1) = *(undefined2 *)*param_3;
    *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)param_3[1];
    return puVar8 + 1;
  }
  do {
    uVar7 = uVar7 + 1 & uVar3;
    puVar5 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar6);
  } while (*puVar5 != 0xfffffffffffffffe);
  uVar3 = (ushort)puVar8[1] & uVar3;
  if (uVar3 == param_4) {
    *puVar5 = uVar2;
    *(short *)(puVar5 + 1) = (short)puVar8[1];
    *(undefined2 *)((longlong)puVar5 + 10) = *(undefined2 *)((longlong)puVar8 + 10);
    *(undefined2 *)(puVar8 + 1) = *(undefined2 *)*param_3;
    *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)param_3[1];
    *puVar8 = uVar7;
  }
  else {
    puVar4 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar6);
    uVar3 = *puVar4;
    while (uVar3 != param_4) {
      puVar4 = (ulonglong *)((*puVar4 + 1) * 0x10 + lVar6);
      uVar3 = *puVar4;
    }
    *puVar5 = uVar2;
    *(short *)(puVar5 + 1) = (short)puVar8[1];
    *(undefined2 *)((longlong)puVar5 + 10) = *(undefined2 *)((longlong)puVar8 + 10);
    *puVar4 = uVar7;
    *(undefined2 *)(puVar8 + 1) = *(undefined2 *)*param_3;
    *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)param_3[1];
    *puVar8 = 0xffffffffffffffff;
  }
  return puVar8 + 1;
}



// FUNCTION 14339dca0 FUN_14339dca0 body=398 status=ok
// SIG undefined FUN_14339dca0(void)

void FUN_14339dca0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_14339dcf4;
    lVar7 = plVar3[1] * 2 + 2;
  }
  FUN_1433a1610(param_1,param_2,lVar7);
LAB_14339dcf4:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar7 = *param_1;
  lVar4 = *(longlong *)(lVar7 + 0x10 + param_4 * 0x18);
  uVar8 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar7 + 0x10 + param_4 * 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18 + param_4 * 0x18) = 0;
    puVar2 = (undefined4 *)(lVar7 + 0x20 + param_4 * 0x18);
    *puVar2 = *(undefined4 *)*param_3;
    puVar2[1] = *(undefined4 *)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar3[1];
    } while (*(longlong *)(lVar7 + 0x10 + uVar8 * 0x18) != -2);
    uVar5 = *(ulonglong *)(lVar7 + 0x18 + param_4 * 0x18);
    if (uVar5 == param_4) {
      *(longlong *)(lVar7 + 0x10 + uVar8 * 0x18) = lVar4;
      *(undefined8 *)(lVar7 + 0x18 + uVar8 * 0x18) = *(undefined8 *)(lVar7 + 0x18 + param_4 * 0x18);
      puVar2 = (undefined4 *)(lVar7 + 0x20 + param_4 * 0x18);
      *(undefined4 *)(lVar7 + 0x20 + uVar8 * 0x18) = *(undefined4 *)(lVar7 + 0x20 + param_4 * 0x18);
      *(undefined4 *)(lVar7 + 0x24 + uVar8 * 0x18) = puVar2[1];
      *puVar2 = *(undefined4 *)*param_3;
      puVar2[1] = *(undefined4 *)param_3[1];
      *(ulonglong *)(lVar7 + 0x10 + param_4 * 0x18) = uVar8;
    }
    else {
      lVar1 = uVar5 * 3 + 2;
      uVar5 = *(ulonglong *)(lVar7 + lVar1 * 8);
      while (puVar6 = (ulonglong *)(lVar7 + lVar1 * 8), uVar5 != param_4) {
        lVar1 = *puVar6 * 3 + 2;
        uVar5 = *(ulonglong *)(lVar7 + lVar1 * 8);
      }
      *(longlong *)(lVar7 + 0x10 + uVar8 * 0x18) = lVar4;
      *(undefined8 *)(lVar7 + 0x18 + uVar8 * 0x18) = *(undefined8 *)(lVar7 + 0x18 + param_4 * 0x18);
      puVar2 = (undefined4 *)(lVar7 + 0x20 + param_4 * 0x18);
      *(undefined4 *)(lVar7 + 0x20 + uVar8 * 0x18) = *(undefined4 *)(lVar7 + 0x20 + param_4 * 0x18);
      *(undefined4 *)(lVar7 + 0x24 + uVar8 * 0x18) = puVar2[1];
      *puVar6 = uVar8;
      *puVar2 = *(undefined4 *)*param_3;
      puVar2[1] = *(undefined4 *)param_3[1];
      *(undefined8 *)(lVar7 + 0x10 + param_4 * 0x18) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18 + param_4 * 0x18) = param_4;
  return;
}



// FUNCTION 14339de30 FUN_14339de30 body=516 status=ok
// SIG undefined FUN_14339de30(void)

longlong FUN_14339de30(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar11 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_14339de88;
    lVar11 = plVar4[1] * 2 + 2;
  }
  FUN_1433a1760(param_1,param_2,lVar11);
LAB_14339de88:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar11 = lVar5 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)*param_3;
    piVar7 = (int *)param_3[1];
    iVar3 = *piVar7;
    *(int *)(lVar11 + 0x28) = iVar3;
    lVar5 = *(longlong *)(piVar7 + 2);
    *(longlong *)(lVar11 + 0x30) = lVar5;
    if ((iVar3 == 0) && (lVar5 != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar4[1];
      lVar1 = lVar5 + uVar10 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar11 + 0x18) == param_4) {
      *(longlong *)(lVar1 + 0x10) = lVar6;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
      iVar3 = *(int *)(lVar11 + 0x28);
      *(int *)(lVar1 + 0x28) = iVar3;
      lVar5 = *(longlong *)(lVar11 + 0x30);
      *(longlong *)(lVar1 + 0x30) = lVar5;
      if ((iVar3 == 0) && (lVar5 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      Scaleform::
      HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>_>
      ::operator=((undefined4 *)(lVar11 + 0x20),param_3);
      *(ulonglong *)(lVar11 + 0x10) = uVar10;
    }
    else {
      lVar2 = *(ulonglong *)(lVar11 + 0x18) * 5 + 2;
      uVar8 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar9 = (ulonglong *)(lVar5 + lVar2 * 8), uVar8 != param_4) {
        lVar2 = *puVar9 * 5 + 2;
        uVar8 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar1 + 0x10) = lVar6;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
      iVar3 = *(int *)(lVar11 + 0x28);
      *(int *)(lVar1 + 0x28) = iVar3;
      lVar5 = *(longlong *)(lVar11 + 0x30);
      *(longlong *)(lVar1 + 0x30) = lVar5;
      if ((iVar3 == 0) && (lVar5 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      *puVar9 = uVar10;
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)*param_3;
      piVar7 = (int *)param_3[1];
      if ((*piVar7 == 0) && (*(longlong *)(piVar7 + 2) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*(int *)(lVar11 + 0x28) == 0) && (*(longlong *)(lVar11 + 0x30) != 0)) {
        FUN_1432de450();
      }
      *(int *)(lVar11 + 0x28) = *piVar7;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(piVar7 + 2);
      *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar11 + 0x18) = param_4;
  return lVar11 + 0x20;
}



// FUNCTION 14339e040 FUN_14339e040 body=263 status=ok
// SIG undefined FUN_14339e040(void)

undefined8 *
FUN_14339e040(undefined8 *param_1,undefined8 param_2,uint param_3,RefCountImpl *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res20;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b046d0;
  param_1[2] = 0;
  FUN_1432c2f70(param_1 + 3);
  uVar2 = FUN_1432c2fb0(&local_res20,param_2);
  uVar2 = FUN_1432c4000(uVar2,&local_res8);
  FUN_1432c4d80(param_1 + 3,uVar2);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  *(uint *)(param_1 + 4) = param_3 & 3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 14339e150 FUN_14339e150 body=126 status=ok
// SIG undefined FUN_14339e150(void)

longlong FUN_14339e150(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 14339e1d0 FUN_14339e1d0 body=114 status=ok
// SIG undefined FUN_14339e1d0(void)

RefCountNTSImplCore * FUN_14339e1d0(RefCountNTSImplCore *param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14339e250 FUN_14339e250 body=89 status=ok
// SIG undefined FUN_14339e250(void)

undefined8 FUN_14339e250(undefined8 param_1,ulonglong param_2)

{
  FUN_1433983d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14339e2b0 FUN_14339e2b0 body=139 status=ok
// SIG undefined FUN_14339e2b0(void)

RefCountImplCore * FUN_14339e2b0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  *(undefined ***)param_1 = &PTR_FUN_145afa1a8;
  Scaleform::Render::FontCacheHandleRef::releaseFont(param_1 + 0x28);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14339e340 FUN_14339e340 body=89 status=ok
// SIG undefined FUN_14339e340(void)

undefined8 FUN_14339e340(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::FontDataCompactedGfx::~FontDataCompactedGfx();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14339e3a0 FUN_14339e3a0 body=89 status=ok
// SIG undefined FUN_14339e3a0(void)

undefined8 FUN_14339e3a0(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::FontDataCompactedSwf::~FontDataCompactedSwf();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14339e400 FUN_14339e400 body=137 status=ok
// SIG undefined FUN_14339e400(void)

undefined8 * FUN_14339e400(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_145b042c0;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[6]);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  *param_1 = &PTR_FUN_144f8bf30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14339e490 FUN_14339e490 body=162 status=ok
// SIG undefined FUN_14339e490(void)

RefCountImplCore * FUN_14339e490(RefCountImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14339e540 FUN_14339e540 body=913 status=ok
// SIG undefined FUN_14339e540(void)

int FUN_14339e540(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*(uint *)(*(longlong *)(param_1 + 0x10) + 8) < param_2 + 0xf) {
    return 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  uVar6 = 0;
  uVar7 = 0;
  cVar1 = *(char *)((ulonglong)(param_2 & 0xfff) +
                   *(longlong *)(lVar2 + (ulonglong)(param_2 >> 0xc) * 8));
  uVar8 = uVar6;
  uVar4 = param_2;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    cVar1 = *(char *)((ulonglong)(uVar4 & 0xfff) +
                     *(longlong *)(lVar2 + (ulonglong)(uVar4 >> 0xc) * 8));
  }
  uVar7 = uVar7 + 1;
  FUN_1433a0f10(param_1 + 0x28,uVar7,0);
  *(ulonglong *)(param_1 + 0x30) = (ulonglong)uVar7;
  if ((ulonglong)uVar7 != 0) {
    do {
      uVar4 = (int)uVar6 + param_2;
      *(undefined1 *)(uVar6 + *(longlong *)(param_1 + 0x28)) =
           *(undefined1 *)
            ((ulonglong)(uVar4 & 0xfff) +
            *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar4 >> 0xc) * 8));
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(param_1 + 0x30));
  }
  uVar4 = *(int *)(param_1 + 0x30) + param_2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(uint *)(param_1 + 0x40) =
       (uint)CONCAT11(*(undefined1 *)
                       (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 1 >> 0xc) * 8) +
                       (ulonglong)(uVar4 + 1 & 0xfff)),
                      *(undefined1 *)
                       (*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 0xc) * 8) +
                       (ulonglong)(uVar4 & 0xfff)));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(uint *)(param_1 + 0x44) =
       (uint)CONCAT11(*(undefined1 *)
                       (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 3 >> 0xc) * 8) +
                       (ulonglong)(uVar4 + 3 & 0xfff)),
                      *(undefined1 *)
                       (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 2 >> 0xc) * 8) +
                       (ulonglong)(uVar4 + 2 & 0xfff)));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(float *)(param_1 + 0x48) =
       (float)(int)CONCAT11(*(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 5 >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 5 & 0xfff)),
                            *(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 4 >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 4 & 0xfff)));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(float *)(param_1 + 0x4c) =
       (float)(int)CONCAT11(*(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 7 >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 7 & 0xfff)),
                            *(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 6 >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 6 & 0xfff)));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(float *)(param_1 + 0x50) =
       (float)(int)CONCAT11(*(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 9 >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 9 & 0xfff)),
                            *(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 8 >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 8 & 0xfff)));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                      (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0xd >> 0xc) * 8) +
                                      (ulonglong)(uVar4 + 0xd & 0xfff)),
                                     *(undefined1 *)
                                      (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0xc >> 0xc) * 8) +
                                      (ulonglong)(uVar4 + 0xc & 0xfff))),
                            *(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0xb >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 0xb & 0xfff))),
                   *(undefined1 *)
                    (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 10 >> 0xc) * 8) +
                    (ulonglong)(uVar4 + 10 & 0xfff)));
  *(int *)(param_1 + 0x18) = iVar5;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                      (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0x11 >> 0xc) * 8) +
                                      (ulonglong)(uVar4 + 0x11 & 0xfff)),
                                     *(undefined1 *)
                                      (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0x10 >> 0xc) * 8) +
                                      (ulonglong)(uVar4 + 0x10 & 0xfff))),
                            *(undefined1 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0xf >> 0xc) * 8) +
                             (ulonglong)(uVar4 + 0xf & 0xfff))),
                   *(undefined1 *)
                    (*(longlong *)(lVar2 + (ulonglong)(uVar4 + 0xe >> 0xc) * 8) +
                    (ulonglong)(uVar4 + 0xe & 0xfff))) + uVar4 + 0x12;
  *(int *)(param_1 + 0x1c) = iVar3;
  iVar3 = iVar3 + iVar5 * 8;
  iVar5 = FUN_1433a0c50(param_1 + 0x10,iVar3,param_1 + 0x20);
  iVar3 = iVar3 + iVar5;
  *(int *)(param_1 + 0x24) = iVar3;
  return (*(int *)(param_1 + 0x20) * 6 - param_2) + iVar3;
}



// FUNCTION 14339e8e0 FUN_14339e8e0 body=736 status=ok
// SIG undefined FUN_14339e8e0(void)

int FUN_14339e8e0(longlong param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar7;
  
  uVar5 = (ulonglong)param_2;
  if (*(uint *)(*(longlong **)(param_1 + 0x10) + 1) < param_2 + 0xf) {
    return 0;
  }
  lVar3 = **(longlong **)(param_1 + 0x10);
  uVar8 = 0;
  uVar6 = 0;
  cVar1 = *(char *)(uVar5 + lVar3);
  uVar7 = uVar8;
  while (cVar1 != '\0') {
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    uVar5 = (ulonglong)((int)uVar5 + 1);
    cVar1 = *(char *)(uVar5 + lVar3);
  }
  FUN_1433a0f10(param_1 + 0x28,uVar6 + 1,0);
  *(ulonglong *)(param_1 + 0x30) = (ulonglong)(uVar6 + 1);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      *(undefined1 *)(uVar8 + *(longlong *)(param_1 + 0x28)) =
           *(undefined1 *)((ulonglong)((int)uVar8 + param_2) + **(longlong **)(param_1 + 0x10));
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar8 < *(ulonglong *)(param_1 + 0x30));
  }
  uVar6 = *(int *)(param_1 + 0x30) + param_2;
  *(uint *)(param_1 + 0x40) =
       (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 1) + **(longlong **)(param_1 + 0x10)),
                      *(undefined1 *)((ulonglong)uVar6 + **(longlong **)(param_1 + 0x10)));
  *(uint *)(param_1 + 0x44) =
       (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 3) + **(longlong **)(param_1 + 0x10)),
                      *(undefined1 *)((ulonglong)(uVar6 + 2) + **(longlong **)(param_1 + 0x10)));
  *(float *)(param_1 + 0x48) =
       (float)(int)CONCAT11(*(undefined1 *)
                             ((ulonglong)(uVar6 + 5) + **(longlong **)(param_1 + 0x10)),
                            *(undefined1 *)
                             ((ulonglong)(uVar6 + 4) + **(longlong **)(param_1 + 0x10)));
  *(float *)(param_1 + 0x4c) =
       (float)(int)CONCAT11(*(undefined1 *)
                             ((ulonglong)(uVar6 + 7) + **(longlong **)(param_1 + 0x10)),
                            *(undefined1 *)
                             ((ulonglong)(uVar6 + 6) + **(longlong **)(param_1 + 0x10)));
  *(float *)(param_1 + 0x50) =
       (float)(int)CONCAT11(*(undefined1 *)
                             ((ulonglong)(uVar6 + 9) + **(longlong **)(param_1 + 0x10)),
                            *(undefined1 *)
                             ((ulonglong)(uVar6 + 8) + **(longlong **)(param_1 + 0x10)));
  lVar3 = **(longlong **)(param_1 + 0x10);
  iVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 0xd) + lVar3),
                                     *(undefined1 *)((ulonglong)(uVar6 + 0xc) + lVar3)),
                            *(undefined1 *)((ulonglong)(uVar6 + 0xb) + lVar3)),
                   *(undefined1 *)((ulonglong)(uVar6 + 10) + lVar3));
  *(int *)(param_1 + 0x18) = iVar9;
  lVar3 = **(longlong **)(param_1 + 0x10);
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 0x11) + lVar3),
                                     *(undefined1 *)((ulonglong)(uVar6 + 0x10) + lVar3)),
                            *(undefined1 *)((ulonglong)(uVar6 + 0xf) + lVar3)),
                   *(undefined1 *)((ulonglong)(uVar6 + 0xe) + lVar3)) + uVar6 + 0x12;
  *(int *)(param_1 + 0x1c) = iVar4;
  uVar6 = iVar4 + iVar9 * 8;
  lVar3 = **(longlong **)(param_1 + 0x10);
  bVar2 = *(byte *)((ulonglong)uVar6 + lVar3);
  if ((bVar2 & 3) == 0) {
    iVar4 = 1;
    *(uint *)(param_1 + 0x20) = (uint)(bVar2 >> 2);
  }
  else if ((bVar2 & 3) == 1) {
    *(uint *)(param_1 + 0x20) =
         (uint)*(byte *)((ulonglong)(uVar6 + 1) + lVar3) << 6 | (uint)(bVar2 >> 2);
    iVar4 = 2;
  }
  else if ((bVar2 & 3) == 2) {
    iVar4 = 3;
    *(uint *)(param_1 + 0x20) =
         (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 2) + lVar3),
                        *(undefined1 *)((ulonglong)(uVar6 + 1) + lVar3)) << 6 | (uint)(bVar2 >> 2);
  }
  else {
    iVar4 = 4;
    *(uint *)(param_1 + 0x20) =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 3) + lVar3),
                                 *(undefined1 *)((ulonglong)(uVar6 + 2) + lVar3)),
                        *(undefined1 *)((ulonglong)(uVar6 + 1) + lVar3)) << 6 | (uint)(bVar2 >> 2);
  }
  *(uint *)(param_1 + 0x24) = uVar6 + iVar4;
  return (*(int *)(param_1 + 0x20) * 6 - param_2) + uVar6 + iVar4;
}



// FUNCTION 14339ebc0 FUN_14339ebc0 body=817 status=ok
// SIG undefined FUN_14339ebc0(void)

undefined8 FUN_14339ebc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ushort *puVar7;
  ulonglong uVar8;
  bool bVar9;
  ushort uVar10;
  ulonglong uVar11;
  uint uVar12;
  ushort local_res8 [4];
  undefined4 local_648 [2];
  undefined1 *local_640;
  undefined8 local_638;
  undefined1 local_628 [9];
  char local_61f;
  longlong *local_448 [65];
  longlong local_240;
  ulonglong local_238;
  undefined1 local_228 [512];
  ulonglong uVar13;
  
  FUN_1432c2f70();
  uVar11 = 0;
  bVar9 = true;
  uVar10 = 0;
  local_res8[0] = 0;
  uVar8 = uVar11;
  uVar13 = uVar11;
  if (param_2[1] != 0) {
    do {
      puVar7 = (ushort *)*param_2;
      if (uVar8 == 0) {
        uVar10 = *puVar7;
LAB_14339ed1c:
        bVar9 = false;
        local_res8[0] = uVar10;
      }
      else if (puVar7[uVar8 * 2 + -1] + 1 < (uint)puVar7[uVar8 * 2]) {
        local_640 = local_228;
        local_648[0] = 2;
        local_638 = 0x200;
        if (uVar10 == puVar7[uVar8 * 2 + -1]) {
          FUN_1433561d0(local_628,local_648);
          FUN_1433563e0(local_628,"0x{0:x}");
          puVar7 = local_res8;
        }
        else {
          FUN_1433561d0(local_628,local_648);
          FUN_1433563e0(local_628,"0x{0:x}-0x{1:x}");
          FUN_14339c020(local_628,local_res8);
          puVar7 = puVar7 + uVar8 * 2 + -1;
        }
        FUN_14339c020(local_628,puVar7);
        Scaleform::MsgFormat::FinishFormatD(local_628);
        FUN_1433562f0(local_628);
        if ((int)uVar13 != 0) {
          FUN_1432c3950(param_1,&DAT_145b036e8);
        }
        FUN_1432c3950(param_1,local_228);
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        if ((int)uVar12 < 5) {
          uVar10 = *(ushort *)(*param_2 + uVar8 * 4);
          goto LAB_14339ed1c;
        }
        goto LAB_14339eea2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)param_2[1]);
    if (!bVar9) {
      lVar1 = param_2[1];
      local_640 = local_228;
      lVar2 = *param_2;
      local_648[0] = 2;
      local_638 = 0x200;
      FUN_1433561d0(local_628,local_648);
      FUN_1433563e0(local_628,"0x{0:x}-0x{1:x}");
      cVar3 = FUN_143356fb0(local_628);
      lVar4 = local_240;
      while (local_240 = lVar4, cVar3 != '\0') {
        if (local_238 < 0x60) {
          plVar6 = local_448[0];
          if (local_448[0] == (longlong *)0x0) {
            plVar6 = DAT_146b62f28;
          }
          lVar4 = (**(code **)(*plVar6 + 0x48))(plVar6,0x60,8);
        }
        else {
          local_240 = (lVar4 + 0x5fU & 0xfffffffffffffff8) + 8;
          uVar5 = (local_240 - (longlong)local_448) - 8;
          local_238 = 0x200 - uVar5;
          if (0x1ff < uVar5) {
            local_238 = uVar11;
          }
        }
        uVar5 = uVar11;
        if (lVar4 != 0) {
          uVar5 = FUN_143354cd0(lVar4,local_628,uVar10);
        }
        FUN_143357040(local_628,uVar5,1);
        cVar3 = FUN_143356fb0(local_628);
        lVar4 = local_240;
      }
      local_61f = local_61f + '\x01';
      FUN_14339c020(local_628,lVar2 + lVar1 * 4 + -2);
      Scaleform::MsgFormat::FinishFormatD(local_628);
      FUN_1433562f0(local_628);
      if ((int)uVar13 != 0) {
        FUN_1432c3950(param_1,&DAT_145b036e8,0xffffffffffffffff);
      }
      FUN_1432c3950(param_1,local_228,0xffffffffffffffff);
    }
  }
LAB_14339eea2:
  if (uVar8 < (ulonglong)param_2[1]) {
    FUN_1432c3950(param_1," (truncated)",0xffffffffffffffff);
  }
  return param_1;
}



// FUNCTION 14339ef00 FUN_14339ef00 body=67 status=ok
// SIG undefined FUN_14339ef00(void)

void FUN_14339ef00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433a1610(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433a1610(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14339ef50 FUN_14339ef50 body=67 status=ok
// SIG undefined FUN_14339ef50(void)

void FUN_14339ef50(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433a1760(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433a1760(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14339efb0 GetCharRanges body=31 status=ok
// SIG undefined GetCharRanges(void)

undefined8 Scaleform::GFx::FontDataBound::GetCharRanges(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xa0))();
  return param_2;
}



// FUNCTION 14339efe0 FUN_14339efe0 body=367 status=ok
// SIG undefined FUN_14339efe0(void)

float * FUN_14339efe0(longlong param_1,int param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_38;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  
  local_38 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  FUN_14339fba0(&local_38,
                CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                            (*(longlong *)
                                              (lVar2 + (ulonglong)(iVar1 + 7U >> 0xc) * 8) +
                                            (ulonglong)(iVar1 + 7U & 0xfff)),
                                           *(undefined1 *)
                                            (*(longlong *)
                                              (lVar2 + (ulonglong)(iVar1 + 6U >> 0xc) * 8) +
                                            (ulonglong)(iVar1 + 6U & 0xfff))),
                                  *(undefined1 *)
                                   (*(longlong *)(lVar2 + (ulonglong)(iVar1 + 5U >> 0xc) * 8) +
                                   (ulonglong)(iVar1 + 5U & 0xfff))),
                         *(undefined1 *)
                          (*(longlong *)(lVar2 + (ulonglong)(iVar1 + 4U >> 0xc) * 8) +
                          (ulonglong)(iVar1 + 4U & 0xfff))));
  if (local_2c < local_28) {
    if (local_2a < local_26) goto LAB_14339f0fe;
  }
  local_26 = 0;
  local_2a = 0;
  local_2c = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  local_28 = CONCAT11(*(undefined1 *)
                       (*(longlong *)(lVar2 + (ulonglong)(iVar1 + 3U >> 0xc) * 8) +
                       (ulonglong)(iVar1 + 3U & 0xfff)),
                      *(undefined1 *)
                       (*(longlong *)(lVar2 + (ulonglong)(iVar1 + 2U >> 0xc) * 8) +
                       (ulonglong)(iVar1 + 2U & 0xfff)));
LAB_14339f0fe:
  *param_3 = (float)(int)local_2c;
  param_3[2] = (float)(int)local_28;
  param_3[1] = (float)(int)local_2a;
  param_3[3] = (float)(int)local_26;
  return param_3;
}



// FUNCTION 14339f150 FUN_14339f150 body=273 status=ok
// SIG undefined FUN_14339f150(void)

float * FUN_14339f150(longlong param_1,int param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_38;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  
  local_38 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 8;
  lVar2 = **(longlong **)(param_1 + 0x10);
  FUN_14339fd70(&local_38,
                CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(iVar1 + 7) + lVar2),
                                           *(undefined1 *)((ulonglong)(iVar1 + 6) + lVar2)),
                                  *(undefined1 *)((ulonglong)(iVar1 + 5) + lVar2)),
                         *(undefined1 *)((ulonglong)(iVar1 + 4) + lVar2)));
  if (local_2c < local_28) {
    if (local_2a < local_26) goto LAB_14339f20b;
  }
  local_26 = 0;
  local_2a = 0;
  local_2c = 0;
  local_28 = CONCAT11(*(undefined1 *)((ulonglong)(iVar1 + 3) + **(longlong **)(param_1 + 0x10)),
                      *(undefined1 *)((ulonglong)(iVar1 + 2) + **(longlong **)(param_1 + 0x10)));
LAB_14339f20b:
  *param_3 = (float)(int)local_2c;
  param_3[2] = (float)(int)local_28;
  param_3[1] = (float)(int)local_2a;
  param_3[3] = (float)(int)local_26;
  return param_3;
}



// FUNCTION 14339f280 FUN_14339f280 body=209 status=ok
// SIG undefined FUN_14339f280(void)

void FUN_14339f280(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong local_38 [7];
  
  local_38[0] = *(longlong *)(param_1 + 0x10);
  uVar2 = param_2 * 8 + 4 + *(int *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(local_38[0] + 0x20);
  FUN_14339fba0(local_38,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     (*(longlong *)
                                                       (lVar1 + (ulonglong)(uVar2 + 3 >> 0xc) * 8) +
                                                     (ulonglong)(uVar2 + 3 & 0xfff)),
                                                    *(undefined1 *)
                                                     (*(longlong *)
                                                       (lVar1 + (ulonglong)(uVar2 + 2 >> 0xc) * 8) +
                                                     (ulonglong)(uVar2 + 2 & 0xfff))),
                                           *(undefined1 *)
                                            (*(longlong *)
                                              (lVar1 + (ulonglong)(uVar2 + 1 >> 0xc) * 8) +
                                            (ulonglong)(uVar2 + 1 & 0xfff))),
                                  *(undefined1 *)
                                   (*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 0xc) * 8) +
                                   (ulonglong)(uVar2 & 0xfff))));
  return;
}



// FUNCTION 14339f360 FUN_14339f360 body=139 status=ok
// SIG undefined FUN_14339f360(void)

void FUN_14339f360(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *local_38 [7];
  
  local_38[0] = *(longlong **)(param_1 + 0x10);
  uVar2 = param_2 * 8 + 4 + *(int *)(param_1 + 0x1c);
  lVar1 = *local_38[0];
  FUN_14339fd70(local_38,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar2 + 3) + lVar1),
                                                    *(undefined1 *)((ulonglong)(uVar2 + 2) + lVar1))
                                           ,*(undefined1 *)((ulonglong)(uVar2 + 1) + lVar1)),
                                  *(undefined1 *)((ulonglong)uVar2 + lVar1)));
  return;
}



// FUNCTION 14339f400 FUN_14339f400 body=177 status=ok
// SIG undefined FUN_14339f400(void)

int FUN_14339f400(longlong param_1,ushort param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x18) + -1;
  if (-1 < iVar5) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    do {
      iVar4 = (iVar6 + iVar5) / 2;
      uVar1 = *(int *)(param_1 + 0x1c) + iVar4 * 8;
      uVar3 = CONCAT11(*(undefined1 *)
                        (*(longlong *)(lVar2 + (ulonglong)(uVar1 + 1 >> 0xc) * 8) +
                        (ulonglong)(uVar1 + 1 & 0xfff)),
                       *(undefined1 *)
                        (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 0xc) * 8) +
                        (ulonglong)(uVar1 & 0xfff)));
      if (uVar3 == param_2) {
        return iVar4;
      }
      if (param_2 < uVar3) {
        iVar5 = iVar4 + -1;
      }
      else {
        iVar6 = iVar4 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return -1;
}



// FUNCTION 14339f4c0 FUN_14339f4c0 body=126 status=ok
// SIG undefined FUN_14339f4c0(void)

int FUN_14339f4c0(longlong param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x18) + -1;
  if (-1 < iVar3) {
    do {
      iVar2 = (iVar5 + iVar3) / 2;
      uVar4 = *(int *)(param_1 + 0x1c) + iVar2 * 8;
      uVar1 = CONCAT11(*(undefined1 *)((ulonglong)(uVar4 + 1) + **(longlong **)(param_1 + 0x10)),
                       *(undefined1 *)((ulonglong)uVar4 + **(longlong **)(param_1 + 0x10)));
      if (uVar1 == param_2) {
        return iVar2;
      }
      if (param_2 < uVar1) {
        iVar3 = iVar2 + -1;
      }
      else {
        iVar5 = iVar2 + 1;
      }
    } while (iVar5 <= iVar3);
  }
  return -1;
}



// FUNCTION 14339f550 FUN_14339f550 body=167 status=ok
// SIG undefined FUN_14339f550(void)

void FUN_14339f550(longlong param_1,int param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = param_2 * 8 + 4 + *(int *)(param_1 + 0x1c);
  lVar2 = **(longlong **)(param_1 + 0x10);
  FUN_14339fd70(param_3,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 3) + lVar2),
                                                   *(undefined1 *)((ulonglong)(uVar3 + 2) + lVar2)),
                                          *(undefined1 *)((ulonglong)(uVar3 + 1) + lVar2)),
                                 *(undefined1 *)((ulonglong)uVar3 + lVar2)));
  bVar1 = *(byte *)((ulonglong)*(uint *)(param_3 + 1) + *(longlong *)*param_3);
  if ((bVar1 & 1) == 0) {
    *(uint *)((longlong)param_3 + 0x1c) = (uint)(bVar1 >> 1);
    *(int *)(param_3 + 1) = *(int *)(param_3 + 1) + 1;
    FUN_1433a1400(param_3);
    return;
  }
  *(uint *)((longlong)param_3 + 0x1c) =
       (uint)*(byte *)((ulonglong)(*(uint *)(param_3 + 1) + 1) + *(longlong *)*param_3) << 7 |
       (uint)(bVar1 >> 1);
  *(int *)(param_3 + 1) = *(int *)(param_3 + 1) + 2;
  FUN_1433a1400(param_3);
  return;
}



// FUNCTION 14339f610 FUN_14339f610 body=298 status=ok
// SIG undefined FUN_14339f610(void)

void FUN_14339f610(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_38 [6];
  
  local_38[0] = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  FUN_14339fba0(local_38,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     (*(longlong *)
                                                       (lVar2 + (ulonglong)(iVar1 + 7U >> 0xc) * 8)
                                                     + (ulonglong)(iVar1 + 7U & 0xfff)),
                                                    *(undefined1 *)
                                                     (*(longlong *)
                                                       (lVar2 + (ulonglong)(iVar1 + 6U >> 0xc) * 8)
                                                     + (ulonglong)(iVar1 + 6U & 0xfff))),
                                           *(undefined1 *)
                                            (*(longlong *)
                                              (lVar2 + (ulonglong)(iVar1 + 5U >> 0xc) * 8) +
                                            (ulonglong)(iVar1 + 5U & 0xfff))),
                                  *(undefined1 *)
                                   (*(longlong *)(lVar2 + (ulonglong)(iVar1 + 4U >> 0xc) * 8) +
                                   (ulonglong)(iVar1 + 4U & 0xfff))));
  return;
}



// FUNCTION 14339f740 FUN_14339f740 body=191 status=ok
// SIG undefined FUN_14339f740(void)

void FUN_14339f740(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_38 [6];
  
  local_38[0] = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 8;
  lVar2 = **(longlong **)(param_1 + 0x10);
  FUN_14339fd70(local_38,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(iVar1 + 7) + lVar2),
                                                    *(undefined1 *)((ulonglong)(iVar1 + 6) + lVar2))
                                           ,*(undefined1 *)((ulonglong)(iVar1 + 5) + lVar2)),
                                  *(undefined1 *)((ulonglong)(iVar1 + 4) + lVar2)));
  return;
}



// FUNCTION 14339f810 FUN_14339f810 body=360 status=ok
// SIG undefined FUN_14339f810(void)

void FUN_14339f810(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar5 = *(int *)(param_1 + 0x20) + -1;
  iVar6 = 0;
  if (-1 < iVar5) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    do {
      iVar3 = (iVar6 + iVar5) / 2;
      uVar7 = iVar3 * 6 + *(int *)(param_1 + 0x24);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      uVar4 = (uint)CONCAT11(*(undefined1 *)
                              (*(longlong *)(lVar2 + (ulonglong)(uVar7 + 1 >> 0xc) * 8) +
                              (ulonglong)(uVar7 + 1 & 0xfff)),
                             *(undefined1 *)
                              (*(longlong *)(lVar2 + (ulonglong)(uVar7 >> 0xc) * 8) +
                              (ulonglong)(uVar7 & 0xfff)));
      uVar7 = (uint)CONCAT11(*(undefined1 *)
                              (*(longlong *)(lVar1 + (ulonglong)(uVar7 + 3 >> 0xc) * 8) +
                              (ulonglong)(uVar7 + 3 & 0xfff)),
                             *(undefined1 *)
                              (*(longlong *)(lVar1 + (ulonglong)(uVar7 + 2 >> 0xc) * 8) +
                              (ulonglong)(uVar7 + 2 & 0xfff)));
      bVar8 = param_2 < uVar4;
      if (param_2 == uVar4) {
        if (uVar7 == param_3) {
          return;
        }
        bVar8 = param_3 < uVar7;
      }
      if (bVar8) {
        iVar5 = iVar3 + -1;
      }
      else {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return;
}



// FUNCTION 14339f980 FUN_14339f980 body=243 status=ok
// SIG undefined FUN_14339f980(void)

void FUN_14339f980(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  iVar5 = 0;
  if (-1 < iVar4) {
    do {
      iVar1 = (iVar5 + iVar4) / 2;
      uVar3 = *(int *)(param_1 + 0x24) + iVar1 * 6;
      uVar2 = (uint)CONCAT11(*(undefined1 *)
                              ((ulonglong)(uVar3 + 1) + **(longlong **)(param_1 + 0x10)),
                             *(undefined1 *)((ulonglong)uVar3 + **(longlong **)(param_1 + 0x10)));
      uVar3 = (uint)CONCAT11(*(undefined1 *)
                              ((ulonglong)(uVar3 + 3) + **(longlong **)(param_1 + 0x10)),
                             *(undefined1 *)
                              ((ulonglong)(uVar3 + 2) + **(longlong **)(param_1 + 0x10)));
      bVar6 = param_2 < uVar2;
      if (param_2 == uVar2) {
        if (uVar3 == param_3) {
          return;
        }
        bVar6 = param_3 < uVar3;
      }
      if (bVar6) {
        iVar4 = iVar1 + -1;
      }
      else {
        iVar5 = iVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return;
}



// FUNCTION 14339fb50 FUN_14339fb50 body=72 status=ok
// SIG undefined FUN_14339fb50(void)

void FUN_14339fb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)FUN_143396bf0();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x31000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 14339fba0 FUN_14339fba0 body=453 status=ok
// SIG undefined FUN_14339fba0(void)

void FUN_14339fba0(longlong *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 >> 0xc) * 8)
                   + (ulonglong)(param_2 & 0xfff));
  iVar5 = 1;
  uVar4 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar3 = 1;
  }
  else {
    uVar4 = (short)*(char *)(*(longlong *)
                              (*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 + 1 >> 0xc) * 8)
                            + (ulonglong)(param_2 + 1 & 0xfff)) << 7 | uVar4 & 0x7f;
    iVar3 = 2;
  }
  param_2 = param_2 + iVar3;
  *(ushort *)((longlong)param_1 + 0xc) = uVar4;
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 >> 0xc) * 8)
                   + (ulonglong)(param_2 & 0xfff));
  uVar4 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = (short)*(char *)(*(longlong *)
                              (*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 + 1 >> 0xc) * 8)
                            + (ulonglong)(param_2 + 1 & 0xfff)) << 7 | uVar4 & 0x7f;
    iVar5 = 2;
  }
  param_2 = param_2 + iVar5;
  *(ushort *)((longlong)param_1 + 0xe) = uVar4;
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 >> 0xc) * 8)
                   + (ulonglong)(param_2 & 0xfff));
  uVar4 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar5 = 1;
  }
  else {
    uVar4 = (short)*(char *)(*(longlong *)
                              (*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 + 1 >> 0xc) * 8)
                            + (ulonglong)(param_2 + 1 & 0xfff)) << 7 | uVar4 & 0x7f;
    iVar5 = 2;
  }
  param_2 = param_2 + iVar5;
  *(ushort *)(param_1 + 2) = uVar4;
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 >> 0xc) * 8)
                   + (ulonglong)(param_2 & 0xfff));
  uVar4 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    cVar2 = *(char *)(*(longlong *)
                       (*(longlong *)(*param_1 + 0x20) + (ulonglong)(param_2 + 1 >> 0xc) * 8) +
                     (ulonglong)(param_2 + 1 & 0xfff));
    *(uint *)(param_1 + 1) = param_2 + 2;
    *(ushort *)((longlong)param_1 + 0x12) = (short)cVar2 << 7 | uVar4 & 0x7f;
    return;
  }
  *(uint *)(param_1 + 1) = param_2 + 1;
  *(ushort *)((longlong)param_1 + 0x12) = uVar4;
  return;
}



// FUNCTION 14339fd70 FUN_14339fd70 body=291 status=ok
// SIG undefined FUN_14339fd70(void)

void FUN_14339fd70(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)((ulonglong)param_2 + *(longlong *)*param_1);
  uVar3 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar2 = 1;
  }
  else {
    uVar3 = (short)*(char *)((ulonglong)(param_2 + 1) + *(longlong *)*param_1) << 7 | uVar3 & 0x7f;
    iVar2 = 2;
  }
  param_2 = param_2 + iVar2;
  *(ushort *)((longlong)param_1 + 0xc) = uVar3;
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)((ulonglong)param_2 + *(longlong *)*param_1);
  uVar3 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar2 = 1;
  }
  else {
    uVar3 = (short)*(char *)((ulonglong)(param_2 + 1) + *(longlong *)*param_1) << 7 | uVar3 & 0x7f;
    iVar2 = 2;
  }
  param_2 = param_2 + iVar2;
  *(ushort *)((longlong)param_1 + 0xe) = uVar3;
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)((ulonglong)param_2 + *(longlong *)*param_1);
  uVar3 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar2 = 1;
  }
  else {
    uVar3 = (short)*(char *)((ulonglong)(param_2 + 1) + *(longlong *)*param_1) << 7 | uVar3 & 0x7f;
    iVar2 = 2;
  }
  param_2 = param_2 + iVar2;
  *(ushort *)(param_1 + 2) = uVar3;
  *(uint *)(param_1 + 1) = param_2;
  bVar1 = *(byte *)((ulonglong)param_2 + *(longlong *)*param_1);
  uVar3 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    *(uint *)(param_1 + 1) = param_2 + 1;
    *(ushort *)((longlong)param_1 + 0x12) = uVar3;
    return;
  }
  *(ushort *)((longlong)param_1 + 0x12) =
       (short)*(char *)((ulonglong)(param_2 + 1) + *(longlong *)*param_1) << 7 | uVar3 & 0x7f;
  *(uint *)(param_1 + 1) = param_2 + 2;
  return;
}



// FUNCTION 14339fea0 FUN_14339fea0 body=1697 status=ok
// SIG undefined FUN_14339fea0(void)

int FUN_14339fea0(longlong *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 local_17;
  undefined2 local_15;
  byte local_13;
  byte local_12;
  byte local_11;
  undefined1 local_10;
  undefined1 local_f;
  
  lVar3 = *(longlong *)(*param_1 + 0x20);
  bVar1 = *(byte *)((ulonglong)(param_2 & 0xfff) +
                   *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8));
  bVar2 = (&DAT_145b03fb8)[bVar1 & 0xf];
  if (bVar2 != 0) {
    uVar5 = (ulonglong)bVar2;
    puVar4 = &local_17;
    do {
      param_2 = param_2 + 1;
      *(undefined1 *)puVar4 =
           *(undefined1 *)
            ((ulonglong)(param_2 & 0xfff) + *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8));
      uVar5 = uVar5 - 1;
      puVar4 = (undefined2 *)((longlong)puVar4 + 1);
    } while (uVar5 != 0);
  }
  switch(bVar1 & 0xf) {
  case 0:
    *param_3 = 0;
    break;
  case 1:
    *param_3 = 0;
    goto LAB_14339ff72;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 1;
LAB_14339ff72:
    param_3[1] = (int)local_17 << 4 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 4:
    *param_3 = 2;
    param_3[1] = (int)((uint)(bVar1 >> 2) | (int)(char)((byte)local_17 << 6)) >> 2;
    param_3[2] = (int)(char)(byte)local_17 >> 2;
    return bVar2 + 1;
  case 5:
    *param_3 = 2;
    param_3[2] = (uint)((byte)local_17 >> 6) | (int)(char)local_17._1_1_ << 2;
    param_3[1] = (int)(char)((byte)local_17 << 2) << 2 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 6:
    *param_3 = 2;
    param_3[1] = ((int)(char)(local_17._1_1_ << 6) << 2 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = (uint)(local_17._1_1_ >> 2) | (int)(char)(byte)local_15 << 6;
    return bVar2 + 1;
  case 7:
    *param_3 = 2;
    param_3[1] = ((int)(char)(local_17._1_1_ << 2) << 6 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = (int)local_15 << 2 | (uint)(local_17._1_1_ >> 6);
    return bVar2 + 1;
  case 8:
    *param_3 = 3;
    param_3[1] = (int)((uint)(bVar1 >> 1) | (int)(char)((byte)local_17 << 7)) >> 3;
    param_3[2] = (int)(char)((byte)local_17 << 2) >> 3;
    param_3[4] = (int)(char)local_17._1_1_ >> 3;
    param_3[3] = (int)((uint)((byte)local_17 >> 3) | (int)(char)(local_17._1_1_ << 5)) >> 3;
    return bVar2 + 1;
  case 9:
    param_3[1] = (int)((uint)(bVar1 >> 3) | (int)(char)((byte)local_17 << 5)) >> 1;
    param_3[4] = (int)(char)(byte)local_15 >> 1;
    *param_3 = 3;
    param_3[2] = (int)((uint)((byte)local_17 >> 2) | (int)(char)(local_17._1_1_ << 6)) >> 1;
    param_3[3] = (int)((uint)(local_17._1_1_ >> 1) | (int)(char)((byte)local_15 << 7)) >> 1;
    return bVar2 + 1;
  case 10:
    *param_3 = 3;
    param_3[1] = (char)((byte)local_17 << 3) * 2 | (uint)(bVar1 >> 4);
    param_3[2] = (char)(local_17._1_1_ << 2) * 2 | (uint)((byte)local_17 >> 5);
    param_3[3] = (char)((byte)local_15 * '\x02') * 2 | (uint)(local_17._1_1_ >> 6);
    param_3[4] = (uint)((byte)local_15 >> 7) | (char)local_15._1_1_ * 2;
    return bVar2 + 1;
  case 0xb:
    *param_3 = 3;
    param_3[1] = (int)(char)((byte)local_17 * '\x02') << 3 | (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)((byte)local_15 << 6) << 2 | (uint)local_17._1_1_) * 2 |
                 (uint)((byte)local_17 >> 7);
    param_3[3] = (int)(char)(local_15._1_1_ << 3) << 3 | (uint)((byte)local_15 >> 2);
    param_3[4] = (uint)(local_15._1_1_ >> 5) | (int)(char)local_13 << 3;
    return bVar2 + 1;
  case 0xc:
    *param_3 = 3;
    param_3[1] = ((char)(local_17._1_1_ << 7) * 2 | (uint)(byte)local_17) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (int)(char)((byte)local_15 << 2) << 5 | (uint)(local_17._1_1_ >> 1);
    param_3[3] = ((int)(char)(local_13 << 5) << 3 | (uint)local_15._1_1_) << 2 |
                 (uint)((byte)local_15 >> 6);
    param_3[4] = (uint)(local_13 >> 3) | (int)(char)local_12 << 5;
    return bVar2 + 1;
  case 0xd:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17._1_1_ << 5) << 3 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_15._1_1_ << 6) << 2 | (uint)(byte)local_15) << 5 |
                 (uint)(local_17._1_1_ >> 3);
    param_3[3] = ((char)(local_12 << 7) * 2 | (uint)local_13) << 6 | (uint)(local_15._1_1_ >> 2);
    param_3[4] = (uint)(local_12 >> 1) | (int)(char)local_11 << 7;
    return bVar2 + 1;
  case 0xe:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17._1_1_ << 3) << 5 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_15._1_1_ << 2) << 6 | (uint)(byte)local_15) << 3 |
                 (uint)(local_17._1_1_ >> 5);
    param_3[3] = ((int)(char)(local_12 * '\x02') << 7 | (uint)local_13) << 2 |
                 (uint)(local_15._1_1_ >> 6);
    param_3[4] = CONCAT11(local_10,local_11) * 2 | (uint)(local_12 >> 7);
    return bVar2 + 1;
  case 0xf:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17._1_1_ * '\x02') << 7 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = (((int)(char)(local_13 << 6) << 2 | (uint)local_15._1_1_) << 8 |
                 (uint)(byte)local_15) * 2 | (uint)(local_17._1_1_ >> 7);
    param_3[3] = ((int)(char)(local_11 << 3) << 5 | (uint)local_12) << 6 | (uint)(local_13 >> 2);
    param_3[4] = (int)CONCAT11(local_f,local_10) << 3 | (uint)(local_11 >> 5);
    return bVar2 + 1;
  }
  param_3[1] = (uint)(bVar1 >> 4) | (int)(char)(byte)local_17 << 4;
  return bVar2 + 1;
}



// FUNCTION 1433a0590 FUN_1433a0590 body=1664 status=ok
// SIG undefined FUN_1433a0590(void)

int FUN_1433a0590(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 local_17;
  undefined2 local_15;
  byte local_13;
  byte local_12;
  byte local_11;
  undefined1 local_10;
  undefined1 local_f;
  
  puVar4 = &local_17;
  lVar3 = *(longlong *)*param_1;
  bVar1 = *(byte *)((ulonglong)param_2 + lVar3);
  bVar2 = (&DAT_145b04140)[bVar1 & 0xf];
  if (bVar2 != 0) {
    uVar5 = (ulonglong)bVar2;
    do {
      param_2 = param_2 + 1;
      *(undefined1 *)puVar4 = *(undefined1 *)(lVar3 + (ulonglong)param_2);
      puVar4 = (undefined2 *)((longlong)puVar4 + 1);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  switch(bVar1 & 0xf) {
  case 0:
    *param_3 = 0;
    break;
  case 1:
    *param_3 = 0;
    goto LAB_1433a0641;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 1;
LAB_1433a0641:
    param_3[1] = (int)local_17 << 4 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 4:
    *param_3 = 2;
    param_3[1] = (int)((uint)(bVar1 >> 2) | (int)(char)((byte)local_17 << 6)) >> 2;
    param_3[2] = (int)(char)(byte)local_17 >> 2;
    return bVar2 + 1;
  case 5:
    *param_3 = 2;
    param_3[2] = (uint)((byte)local_17 >> 6) | (int)(char)local_17._1_1_ << 2;
    param_3[1] = (int)(char)((byte)local_17 << 2) << 2 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 6:
    *param_3 = 2;
    param_3[1] = ((int)(char)(local_17._1_1_ << 6) << 2 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = (uint)(local_17._1_1_ >> 2) | (int)(char)(byte)local_15 << 6;
    return bVar2 + 1;
  case 7:
    *param_3 = 2;
    param_3[1] = ((int)(char)(local_17._1_1_ << 2) << 6 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = (int)local_15 << 2 | (uint)(local_17._1_1_ >> 6);
    return bVar2 + 1;
  case 8:
    *param_3 = 3;
    param_3[1] = (int)((uint)(bVar1 >> 1) | (int)(char)((byte)local_17 << 7)) >> 3;
    param_3[2] = (int)(char)((byte)local_17 << 2) >> 3;
    param_3[4] = (int)(char)local_17._1_1_ >> 3;
    param_3[3] = (int)((uint)((byte)local_17 >> 3) | (int)(char)(local_17._1_1_ << 5)) >> 3;
    return bVar2 + 1;
  case 9:
    param_3[1] = (int)((uint)(bVar1 >> 3) | (int)(char)((byte)local_17 << 5)) >> 1;
    param_3[4] = (int)(char)(byte)local_15 >> 1;
    *param_3 = 3;
    param_3[2] = (int)((uint)((byte)local_17 >> 2) | (int)(char)(local_17._1_1_ << 6)) >> 1;
    param_3[3] = (int)((uint)(local_17._1_1_ >> 1) | (int)(char)((byte)local_15 << 7)) >> 1;
    return bVar2 + 1;
  case 10:
    *param_3 = 3;
    param_3[1] = (char)((byte)local_17 << 3) * 2 | (uint)(bVar1 >> 4);
    param_3[2] = (char)(local_17._1_1_ << 2) * 2 | (uint)((byte)local_17 >> 5);
    param_3[3] = (char)((byte)local_15 * '\x02') * 2 | (uint)(local_17._1_1_ >> 6);
    param_3[4] = (uint)((byte)local_15 >> 7) | (char)local_15._1_1_ * 2;
    return bVar2 + 1;
  case 0xb:
    *param_3 = 3;
    param_3[1] = (int)(char)((byte)local_17 * '\x02') << 3 | (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)((byte)local_15 << 6) << 2 | (uint)local_17._1_1_) * 2 |
                 (uint)((byte)local_17 >> 7);
    param_3[3] = (int)(char)(local_15._1_1_ << 3) << 3 | (uint)((byte)local_15 >> 2);
    param_3[4] = (uint)(local_15._1_1_ >> 5) | (int)(char)local_13 << 3;
    return bVar2 + 1;
  case 0xc:
    *param_3 = 3;
    param_3[1] = ((char)(local_17._1_1_ << 7) * 2 | (uint)(byte)local_17) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (int)(char)((byte)local_15 << 2) << 5 | (uint)(local_17._1_1_ >> 1);
    param_3[3] = ((int)(char)(local_13 << 5) << 3 | (uint)local_15._1_1_) << 2 |
                 (uint)((byte)local_15 >> 6);
    param_3[4] = (uint)(local_13 >> 3) | (int)(char)local_12 << 5;
    return bVar2 + 1;
  case 0xd:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17._1_1_ << 5) << 3 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_15._1_1_ << 6) << 2 | (uint)(byte)local_15) << 5 |
                 (uint)(local_17._1_1_ >> 3);
    param_3[3] = ((char)(local_12 << 7) * 2 | (uint)local_13) << 6 | (uint)(local_15._1_1_ >> 2);
    param_3[4] = (uint)(local_12 >> 1) | (int)(char)local_11 << 7;
    return bVar2 + 1;
  case 0xe:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17._1_1_ << 3) << 5 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_15._1_1_ << 2) << 6 | (uint)(byte)local_15) << 3 |
                 (uint)(local_17._1_1_ >> 5);
    param_3[3] = ((int)(char)(local_12 * '\x02') << 7 | (uint)local_13) << 2 |
                 (uint)(local_15._1_1_ >> 6);
    param_3[4] = CONCAT11(local_10,local_11) * 2 | (uint)(local_12 >> 7);
    return bVar2 + 1;
  case 0xf:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17._1_1_ * '\x02') << 7 | (uint)(byte)local_17) << 4 |
                 (uint)(bVar1 >> 4);
    param_3[2] = (((int)(char)(local_13 << 6) << 2 | (uint)local_15._1_1_) << 8 |
                 (uint)(byte)local_15) * 2 | (uint)(local_17._1_1_ >> 7);
    param_3[3] = ((int)(char)(local_11 << 3) << 5 | (uint)local_12) << 6 | (uint)(local_13 >> 2);
    param_3[4] = (int)CONCAT11(local_f,local_10) << 3 | (uint)(local_11 >> 5);
    return bVar2 + 1;
  }
  param_3[1] = (uint)(bVar1 >> 4) | (int)(char)(byte)local_17 << 4;
  return bVar2 + 1;
}



// FUNCTION 1433a0c50 FUN_1433a0c50 body=352 status=ok
// SIG undefined FUN_1433a0c50(void)

undefined8 FUN_1433a0c50(longlong *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x20);
  bVar1 = *(byte *)(*(longlong *)(lVar2 + (ulonglong)(param_2 >> 0xc) * 8) +
                   (ulonglong)(param_2 & 0xfff));
  if ((bVar1 & 3) == 0) {
    *param_3 = (uint)(bVar1 >> 2);
    return 1;
  }
  if ((bVar1 & 3) != 1) {
    if ((bVar1 & 3) != 2) {
      *param_3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)
                                          (*(longlong *)
                                            (lVar2 + (ulonglong)(param_2 + 3 >> 0xc) * 8) +
                                          (ulonglong)(param_2 + 3 & 0xfff)),
                                         *(undefined1 *)
                                          (*(longlong *)
                                            (lVar2 + (ulonglong)(param_2 + 2 >> 0xc) * 8) +
                                          (ulonglong)(param_2 + 2 & 0xfff))),
                                *(undefined1 *)
                                 (*(longlong *)(lVar2 + (ulonglong)(param_2 + 1 >> 0xc) * 8) +
                                 (ulonglong)(param_2 + 1 & 0xfff))) << 6 | (uint)(bVar1 >> 2);
      return 4;
    }
    *param_3 = (uint)CONCAT11(*(undefined1 *)
                               (*(longlong *)(lVar2 + (ulonglong)(param_2 + 2 >> 0xc) * 8) +
                               (ulonglong)(param_2 + 2 & 0xfff)),
                              *(undefined1 *)
                               (*(longlong *)(lVar2 + (ulonglong)(param_2 + 1 >> 0xc) * 8) +
                               (ulonglong)(param_2 + 1 & 0xfff))) << 6 | (uint)(bVar1 >> 2);
    return 3;
  }
  *param_3 = (uint)*(byte *)(*(longlong *)(lVar2 + (ulonglong)(param_2 + 1 >> 0xc) * 8) +
                            (ulonglong)(param_2 + 1 & 0xfff)) << 6 | (uint)(bVar1 >> 2);
  return 2;
}



// FUNCTION 1433a0db0 FUN_1433a0db0 body=165 status=ok
// SIG undefined FUN_1433a0db0(void)

void FUN_1433a0db0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x105;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0xc,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433a0e60 FUN_1433a0e60 body=165 status=ok
// SIG undefined FUN_1433a0e60(void)

void FUN_1433a0e60(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x105;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433a0f10 FUN_1433a0f10 body=166 status=ok
// SIG undefined FUN_1433a0f10(void)

void FUN_1433a0f10(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  if (param_2 <= (ulonglong)param_1[2]) {
    param_1[1] = 0;
    return;
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  param_3 = param_2 + param_3;
  param_1[2] = param_3;
  if (param_3 != 0) {
    local_res8[0] = 2;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_3,local_res8);
    *param_1 = lVar1;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1433a0fc0 FUN_1433a0fc0 body=164 status=ok
// SIG undefined FUN_1433a0fc0(void)

void FUN_1433a0fc0(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (param_2 <= (ulonglong)param_1[2]) {
    param_1[1] = 0;
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  param_3 = param_2 + param_3;
  param_1[2] = param_3;
  if (param_3 != 0) {
    local_res8[0] = 0x105;
    uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_3,local_res8);
    *param_1 = uVar1;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1433a1070 FUN_1433a1070 body=114 status=ok
// SIG undefined FUN_1433a1070(void)

void FUN_1433a1070(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1433a0db0(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1433a0db0(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1433a10f0 FUN_1433a10f0 body=174 status=ok
// SIG undefined FUN_1433a10f0(void)

void FUN_1433a10f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433a0e60(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433a0e60(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433a11a0 FUN_1433a11a0 body=53 status=ok
// SIG undefined FUN_1433a11a0(void)

void FUN_1433a11a0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 1433a11e0 FUN_1433a11e0 body=227 status=ok
// SIG undefined FUN_1433a11e0(void)

void FUN_1433a11e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_18;
  longlong lStack_10;
  
  if (*(longlong *)(param_3 + 0x10) == 0) {
    uVar2 = *(uint *)(param_3 + 0x38);
    if (uVar2 != 0xffffffff) {
      lVar1 = *(longlong *)(param_1 + 8);
      local_18 = (longlong *)0x0;
      lStack_10 = 0;
      if ((*(char *)(lVar1 + 0x48) == '\0') || (*(uint *)(lVar1 + 8) <= uVar2)) {
        FUN_14330cc40(lVar1,&local_18);
      }
      else {
        plVar3 = (longlong *)((ulonglong)uVar2 * 0x10 + *(longlong *)(lVar1 + 0x10));
        if (*plVar3 != 0) {
          Scaleform::GFx::Resource::AddRef();
          if (local_18 != (longlong *)0x0) {
            FUN_1432de450();
          }
        }
        local_18 = (longlong *)*plVar3;
        lStack_10 = plVar3[1];
      }
      if (local_18 != (longlong *)0x0) {
        uVar2 = (**(code **)(*local_18 + 0x10))();
        if ((uVar2 & 0xff00) == 0x100) {
          FUN_143320580(param_3 + 0x10,local_18[3]);
          *(undefined4 *)(param_3 + 0x38) = 0xffffffff;
        }
        if (local_18 != (longlong *)0x0) {
          FUN_1432de450();
        }
      }
    }
  }
  return;
}



// FUNCTION 1433a12d0 FUN_1433a12d0 body=297 status=ok
// SIG undefined FUN_1433a12d0(void)

void FUN_1433a12d0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    iVar3 = 1;
    uVar4 = *(uint *)(param_1 + 1);
    bVar1 = *(byte *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar4 >> 0xc) * 8)
                     + (ulonglong)(uVar4 & 0xfff));
    uVar5 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      iVar2 = 1;
      *(uint *)((longlong)param_1 + 0x14) = uVar5;
    }
    else {
      iVar2 = 2;
      *(uint *)((longlong)param_1 + 0x14) =
           (int)*(char *)(*(longlong *)
                           (*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar4 + 1 >> 0xc) * 8) +
                         (ulonglong)(uVar4 + 1 & 0xfff)) << 7 | uVar5 & 0x7f;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar2;
    uVar4 = *(uint *)(param_1 + 1);
    bVar1 = *(byte *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar4 >> 0xc) * 8)
                     + (ulonglong)(uVar4 & 0xfff));
    uVar5 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      *(uint *)(param_1 + 3) = uVar5;
    }
    else {
      iVar3 = 2;
      *(uint *)(param_1 + 3) =
           (int)*(char *)(*(longlong *)
                           (*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar4 + 1 >> 0xc) * 8) +
                         (ulonglong)(uVar4 + 1 & 0xfff)) << 7 | uVar5 & 0x7f;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
    iVar3 = FUN_1433a0c50(param_1,(int)param_1[1],param_1 + 4);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
    *(int *)((longlong)param_1 + 0x24) = (int)param_1[1];
    *(undefined1 *)(param_1 + 5) = 1;
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 4) >> 1;
      *(uint *)((longlong)param_1 + 0x24) = uVar4;
      iVar3 = FUN_1433a0c50(param_1,uVar4,param_1 + 4);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + iVar3;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> 1;
  }
  return;
}



// FUNCTION 1433a1400 FUN_1433a1400 body=219 status=ok
// SIG undefined FUN_1433a1400(void)

void FUN_1433a1400(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    iVar3 = 1;
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 1) + *(longlong *)*param_1);
    uVar4 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      iVar2 = 1;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) =
           (int)*(char *)((ulonglong)(*(uint *)(param_1 + 1) + 1) + *(longlong *)*param_1) << 7 |
           uVar4 & 0x7f;
      iVar2 = 2;
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + iVar2;
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 1) + *(longlong *)*param_1);
    uVar4 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      *(uint *)(param_1 + 3) = uVar4;
    }
    else {
      iVar3 = 2;
      *(uint *)(param_1 + 3) =
           (int)*(char *)((ulonglong)(*(uint *)(param_1 + 1) + 1) + *(longlong *)*param_1) << 7 |
           uVar4 & 0x7f;
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + iVar3;
    iVar3 = FUN_1433332e0(param_1,*(undefined4 *)(param_1 + 1),param_1 + 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + iVar3;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_1 + 1);
    *(undefined1 *)(param_1 + 5) = 1;
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 4) >> 1;
      *(uint *)((longlong)param_1 + 0x24) = uVar4;
      iVar3 = FUN_1433332e0(param_1,uVar4,param_1 + 4);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + iVar3;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> 1;
  }
  return;
}



// FUNCTION 1433a14e0 FUN_1433a14e0 body=293 status=ok
// SIG undefined FUN_1433a14e0(void)

void FUN_1433a14e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1433616b0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x105;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,(lVar4 + 1) * 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = lVar1 + 0x10;
    *(undefined8 *)(lVar1 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        puVar5 = (undefined2 *)(lVar1 + 0x18 + lVar3);
        FUN_14339d6c0(&local_res20,param_2,puVar5,*puVar5);
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433a1610 FUN_1433a1610 body=327 status=ok
// SIG undefined FUN_1433a1610(void)

void FUN_1433a1610(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x105;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar2 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar2 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar2 = lVar2 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar6) != -2) {
        lVar4 = 4;
        lVar7 = lVar2 + 0x20 + lVar6;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + -1;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_14339d820(&local_res20,param_2,lVar7,lVar8);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433a1760 FUN_1433a1760 body=387 status=ok
// SIG undefined FUN_1433a1760(void)

void FUN_1433a1760(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143302990();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x105;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x28 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x28;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar5;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        lVar3 = 4;
        lVar7 = 0x1505;
        do {
          lVar1 = lVar3 + 0x1f;
          lVar3 = lVar3 + -1;
          lVar7 = lVar7 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar6);
        } while (lVar3 != 0);
        FUN_14339d960(&local_res20,param_2,lVar6 + 0x20,lVar7);
        if ((*(int *)(lVar6 + 0x28) == 0) && (*(longlong *)(lVar6 + 0x30) != 0)) {
          FUN_1432de450();
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433a18f0 FUN_1433a18f0 body=23 status=ok
// SIG undefined FUN_1433a18f0(void)

undefined8 FUN_1433a18f0(undefined8 param_1)

{
  FUN_1433ef5b0();
  return param_1;
}



// FUNCTION 1433a1910 FUN_1433a1910 body=678 status=ok
// SIG undefined FUN_1433a1910(void)

void FUN_1433a1910(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *local_58;
  undefined2 *local_50;
  undefined8 *local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  undefined8 *local_30;
  
  FUN_143302fa0(*(undefined8 *)(param_2 + 0x18),&local_58);
  puVar3 = (ulonglong *)0x0;
  *local_48 = 0x5555555555555555;
  local_48[1] = 0x5555555555555555;
  local_48[2] = 0x5555555555555555;
  local_48[3] = 0x5555555555555555;
  local_48[4] = 0x5555555555555555;
  local_48[5] = 0x5555555555555555;
  local_48[6] = 0x5555555555555555;
  local_48[7] = 0x5555555555555555;
  if (local_58 != (ulonglong *)0x0) {
    *(undefined2 *)local_58 = 0x5fc0;
    *(undefined2 *)((longlong)local_58 + 2) = 0;
    *(undefined4 *)((longlong)local_58 + 4) = param_3;
    local_58[1] = 0;
  }
  if (local_50 != (undefined2 *)0x0) {
    *local_50 = 0x5fc0;
    local_50[1] = 0;
    *(undefined4 *)(local_50 + 2) = param_3;
    *(undefined8 *)(local_50 + 4) = 0;
  }
  puVar4 = puVar3;
  puVar7 = puVar3;
  if (local_58 != (ulonglong *)0x0) {
    puVar4 = local_40;
    puVar7 = local_58;
  }
  puVar6 = puVar3;
  if (local_50 != (undefined2 *)0x0) {
    puVar3 = (ulonglong *)(local_50 + 8);
    puVar6 = local_38;
  }
  if (local_48 < local_30) {
    puVar7 = puVar7 + -8;
  }
  else {
    puVar3 = puVar3 + 8;
  }
  if (puVar4 != (ulonglong *)0x0) {
    uVar8 = (longlong)puVar7 - (longlong)puVar4;
    *puVar4 = *puVar4 ^ (ulonglong)(((uint)*puVar4 ^ (uint)(uVar8 >> 4)) & 0xf);
    *(ulonglong *)((longlong)puVar4 + ((uVar8 & 0xfffffffffffffff8) - 0x10)) = *puVar4;
    uVar2 = puVar4[1] & 0xfffffffffffffff0 | uVar8 >> 8;
    puVar4[1] = uVar2;
    *(ulonglong *)((longlong)puVar4 + ((uVar8 & 0xfffffffffffffff8) - 8)) = uVar2;
    if (2 < (((uint)puVar4[1] & 0xf) << 4 | (uint)*puVar4 & 0xf)) {
      puVar4[2] = param_2;
    }
    FUN_1433ef600(param_1,puVar4);
    uVar5 = (longlong)puVar4 - (longlong)local_40 >> 4;
    puVar1 = (uint *)((longlong)local_48 + (uVar5 >> 4) * 4);
    uVar2 = (uVar5 - 1) + ((longlong)uVar8 >> 4);
    *puVar1 = *puVar1 & ~(3 << ((char)uVar5 * '\x02' & 0x1eU));
    puVar1 = (uint *)((longlong)local_48 + (uVar2 >> 4) * 4);
    *puVar1 = *puVar1 & ~(3 << ((char)uVar2 * '\x02' & 0x1eU));
  }
  if (puVar3 != (ulonglong *)0x0) {
    uVar8 = (longlong)puVar6 - (longlong)puVar3;
    *puVar3 = *puVar3 ^ (ulonglong)(((uint)*puVar3 ^ (uint)(uVar8 >> 4)) & 0xf);
    *(ulonglong *)((longlong)puVar3 + ((uVar8 & 0xfffffffffffffff8) - 0x10)) = *puVar3;
    uVar2 = puVar3[1] & 0xfffffffffffffff0 | uVar8 >> 8;
    puVar3[1] = uVar2;
    *(ulonglong *)((longlong)puVar3 + ((uVar8 & 0xfffffffffffffff8) - 8)) = uVar2;
    if (2 < (((uint)puVar3[1] & 0xf) << 4 | (uint)*puVar3 & 0xf)) {
      puVar3[2] = param_2;
    }
    FUN_1433ef600(param_1,puVar3);
    uVar5 = (longlong)puVar3 - (longlong)local_40 >> 4;
    puVar1 = (uint *)((longlong)local_48 + (uVar5 >> 4) * 4);
    uVar2 = ((longlong)uVar8 >> 4) + -1 + uVar5;
    *puVar1 = *puVar1 & ~(3 << ((char)uVar5 * '\x02' & 0x1eU));
    puVar1 = (uint *)((longlong)local_48 + (uVar2 >> 4) * 4);
    *puVar1 = *puVar1 & ~(3 << ((char)uVar2 * '\x02' & 0x1eU));
  }
  return;
}



// FUNCTION 1433a1bc0 FUN_1433a1bc0 body=90 status=ok
// SIG undefined FUN_1433a1bc0(void)

void FUN_1433a1bc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  FUN_143302fa0(param_2,&local_48);
  if (local_48 != 0) {
    FUN_1433ef6a0(param_1,local_30);
  }
  if (local_40 != 0) {
    lVar1 = local_40 + 0x10;
    if (local_20 < local_38) {
      lVar1 = local_40 + 0x50;
    }
    FUN_1433ef6a0(param_1,lVar1);
  }
  return;
}



// FUNCTION 1433a1c20 FUN_1433a1c20 body=352 status=ok
// SIG undefined FUN_1433a1c20(void)

uint * FUN_1433a1c20(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (uint *)FUN_1433ef6e0(param_1,param_2 >> 4);
  if (puVar2 != (uint *)0x0) {
    if ((((puVar2[2] & 0xf) << 4 | *puVar2 & 0xf) < 3) ||
       (lVar3 = *(longlong *)(puVar2 + 4), lVar3 == 0)) {
      lVar3 = FUN_143303520(DAT_146b63a70,puVar2);
    }
    FUN_143302fa0(*(undefined8 *)(lVar3 + 0x18),param_3);
    *(longlong *)(param_3 + 0x30) = lVar3;
    uVar4 = ((ulonglong)(puVar2[2] & 0xf) << 4 | (ulonglong)(*puVar2 & 0xf)) * 0x10 - param_2;
    if (uVar4 != 0) {
      FUN_1433a2500((longlong)puVar2 + param_2,uVar4,lVar3);
      FUN_1433ef600(param_1,(longlong)puVar2 + param_2);
      lVar3 = *(longlong *)(param_3 + 0x10);
      uVar5 = (longlong)((longlong)puVar2 + (param_2 - *(longlong *)(param_3 + 0x18))) >> 4;
      puVar1 = (uint *)(lVar3 + (uVar5 >> 4) * 4);
      uVar4 = (uVar5 - 1) + (uVar4 >> 4);
      *puVar1 = *puVar1 & ~(3 << ((char)uVar5 * '\x02' & 0x1eU));
      puVar1 = (uint *)(lVar3 + (uVar4 >> 4) * 4);
      *puVar1 = *puVar1 & ~(3 << ((char)uVar4 * '\x02' & 0x1eU));
    }
    FUN_1433a2560(*(undefined8 *)(param_3 + 0x10),
                  (longlong)puVar2 - *(longlong *)(param_3 + 0x18) >> 4,param_2 >> 4);
    return puVar2;
  }
  return (uint *)0x0;
}



// FUNCTION 1433a1d90 FUN_1433a1d90 body=499 status=ok
// SIG undefined FUN_1433a1d90(void)

longlong FUN_1433a1d90(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar2 = (uint *)FUN_1433ef750(param_1,param_2 >> 4,param_3 + -1);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  if ((((puVar2[2] & 0xf) << 4 | *puVar2 & 0xf) < 3) ||
     (lVar3 = *(longlong *)(puVar2 + 4), lVar3 == 0)) {
    lVar3 = FUN_143303520(DAT_146b63a70,puVar2);
  }
  lVar4 = Scaleform::HeapMH::ListBinMH::GetAlignedPtr(puVar2,param_3 + -1);
  FUN_143302fa0(*(undefined8 *)(lVar3 + 0x18),param_4);
  *(longlong *)(param_4 + 0x30) = lVar3;
  uVar6 = ((((ulonglong)(puVar2[2] & 0xf) << 4 | (ulonglong)(*puVar2 & 0xf)) * 0x10 - lVar4) -
          param_2) + (longlong)puVar2;
  uVar7 = lVar4 - (longlong)puVar2;
  if (uVar7 != 0) {
    FUN_1433a2500(puVar2,uVar7,lVar3);
    FUN_1433ef600(param_1,puVar2);
    lVar1 = *(longlong *)(param_4 + 0x10);
    uVar5 = (longlong)puVar2 - *(longlong *)(param_4 + 0x18) >> 4;
    puVar2 = (uint *)(lVar1 + (uVar5 >> 4) * 4);
    uVar7 = (uVar5 - 1) + (uVar7 >> 4);
    *puVar2 = *puVar2 & ~(3 << ((char)uVar5 * '\x02' & 0x1eU));
    puVar2 = (uint *)(lVar1 + (uVar7 >> 4) * 4);
    *puVar2 = *puVar2 & ~(3 << ((char)uVar7 * '\x02' & 0x1eU));
  }
  if (uVar6 != 0) {
    FUN_1433a2500(lVar4 + param_2,uVar6,lVar3);
    FUN_1433ef600(param_1,lVar4 + param_2);
    lVar3 = *(longlong *)(param_4 + 0x10);
    uVar7 = (longlong)((lVar4 - *(longlong *)(param_4 + 0x18)) + param_2) >> 4;
    puVar2 = (uint *)(lVar3 + (uVar7 >> 4) * 4);
    uVar6 = (uVar7 - 1) + (uVar6 >> 4);
    *puVar2 = *puVar2 & ~(3 << ((char)uVar7 * '\x02' & 0x1eU));
    puVar2 = (uint *)(lVar3 + (uVar6 >> 4) * 4);
    *puVar2 = *puVar2 & ~(3 << ((char)uVar6 * '\x02' & 0x1eU));
  }
  FUN_1433a2560(*(undefined8 *)(param_4 + 0x10),lVar4 - *(longlong *)(param_4 + 0x18) >> 4,
                param_2 >> 4);
  return lVar4;
}



// FUNCTION 1433a1f90 FUN_1433a1f90 body=655 status=ok
// SIG undefined FUN_1433a1f90(void)

ulonglong FUN_1433a1f90(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong *param_5,longlong param_6)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  
  FUN_143302fa0(*(undefined8 *)(param_2 + 0x18),param_6);
  uVar5 = *(ulonglong *)(param_6 + 0x28);
  lVar2 = *(longlong *)(param_6 + 0x18);
  puVar8 = *(uint **)(param_6 + 0x20);
  *(longlong *)(param_6 + 0x30) = param_2;
  if ((param_3 < uVar5) && (puVar8 = (uint *)(uVar5 - 0x10), *(ulonglong *)(param_6 + 0x10) < uVar5)
     ) {
    puVar8 = (uint *)(uVar5 - 0x50);
  }
  lVar3 = *(longlong *)(param_6 + 0x10);
  lVar7 = (longlong)(param_3 - lVar2) >> 4;
  lVar4 = FUN_1433a2410(lVar3,lVar7);
  uVar5 = lVar4 * 0x10;
  *param_5 = uVar5;
  if (uVar5 < param_4) {
    puVar1 = (uint *)(uVar5 + param_3);
    if (((puVar1 < puVar8) &&
        ((*(uint *)(lVar3 + ((ulonglong)(lVar4 + lVar7) >> 4) * 4) >>
          ((char)(lVar4 + lVar7) * '\x02' & 0x1eU) & 3) == 0)) &&
       (lVar4 = ((ulonglong)(puVar1[2] & 0xf) << 4 | (ulonglong)(*puVar1 & 0xf)) * 0x10,
       param_4 <= lVar4 + uVar5)) {
      FUN_1433ef6a0(param_1,puVar1);
      uVar5 = (lVar4 - param_4) + uVar5;
      if (uVar5 != 0) {
        lVar4 = param_3 + param_4;
        FUN_1433a2500(lVar4,uVar5,param_2);
        FUN_1433ef600(param_1,lVar4);
        uVar6 = lVar4 - lVar2 >> 4;
        puVar8 = (uint *)(lVar3 + (uVar6 >> 4) * 4);
        uVar5 = (uVar6 - 1) + (uVar5 >> 4);
        *puVar8 = *puVar8 & ~(3 << ((char)uVar6 * '\x02' & 0x1eU));
        puVar8 = (uint *)(lVar3 + (uVar5 >> 4) * 4);
        *puVar8 = *puVar8 & ~(3 << ((char)uVar5 * '\x02' & 0x1eU));
      }
      FUN_1433a2560(lVar3,lVar7,param_4 >> 4);
    }
    else {
      param_3 = 0;
    }
  }
  else if (param_4 < uVar5) {
    puVar1 = (uint *)(uVar5 + param_3);
    lVar9 = 0;
    if ((puVar1 < puVar8) &&
       ((*(uint *)(lVar3 + ((ulonglong)(lVar4 + lVar7) >> 4) * 4) >>
         ((char)(lVar4 + lVar7) * '\x02' & 0x1eU) & 3) == 0)) {
      lVar9 = ((ulonglong)(puVar1[2] & 0xf) << 4 | (ulonglong)(*puVar1 & 0xf)) << 4;
    }
    uVar5 = lVar9 + (uVar5 - param_4);
    if (uVar5 != 0) {
      if (lVar9 != 0) {
        FUN_1433ef6a0(param_1,puVar1);
      }
      lVar4 = param_3 + param_4;
      FUN_1433a2500(lVar4,uVar5,param_2);
      FUN_1433ef600(param_1,lVar4);
      FUN_1433a2560(lVar3,lVar7,param_4 >> 4);
      uVar6 = lVar4 - lVar2 >> 4;
      puVar8 = (uint *)(lVar3 + (uVar6 >> 4) * 4);
      uVar5 = (uVar6 - 1) + (uVar5 >> 4);
      *puVar8 = *puVar8 & ~(3 << ((char)uVar6 * '\x02' & 0x1eU));
      puVar8 = (uint *)(lVar3 + (uVar5 >> 4) * 4);
      *puVar8 = *puVar8 & ~(3 << ((char)uVar5 * '\x02' & 0x1eU));
    }
  }
  return param_3;
}



// FUNCTION 1433a2230 FUN_1433a2230 body=409 status=ok
// SIG undefined FUN_1433a2230(void)

void FUN_1433a2230(undefined8 param_1,ulonglong param_2,ulonglong *param_3,longlong param_4,
                  longlong *param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  uint7 uVar6;
  longlong lVar5;
  ulonglong uVar7;
  
  FUN_143302fa0(*(undefined8 *)(param_2 + 0x18),param_4);
  uVar7 = (longlong)param_3 - *(longlong *)(param_4 + 0x18) >> 4;
  *(ulonglong *)(param_4 + 0x30) = param_2;
  uVar2 = FUN_1433a2410(*(undefined8 *)(param_4 + 0x10),uVar7);
  *param_5 = uVar2 * 0x10;
  lVar5 = *(longlong *)(param_4 + 0x10);
  puVar1 = (uint *)(lVar5 + (uVar7 >> 4) * 4);
  *puVar1 = *puVar1 & ~(3 << ((char)uVar7 * '\x02' & 0x1eU));
  uVar4 = uVar2 + uVar7;
  puVar1 = (uint *)(lVar5 + (uVar4 - 1 >> 4) * 4);
  *puVar1 = *puVar1 & ~(3 << ((char)(uVar4 - 1) * '\x02' & 0x1eU));
  uVar6 = (uint7)((ulonglong)lVar5 >> 8);
  if ((uVar7 == 0) ||
     ((*(uint *)(*(longlong *)(param_4 + 0x10) + (uVar7 - 1 >> 4) * 4) >>
       ((char)(uVar7 - 1) * '\x02' & 0x1eU) & 3) != 0)) {
    lVar5 = (ulonglong)uVar6 << 8;
  }
  else {
    lVar5 = CONCAT71(uVar6,1);
  }
  if ((param_3 + uVar2 * 2 < *(ulonglong **)(param_4 + 0x20)) &&
     ((*(uint *)(*(longlong *)(param_4 + 0x10) + (uVar4 >> 4) * 4) >> ((char)uVar4 * '\x02' & 0x1eU)
      & 3) == 0)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  if (cVar3 == '\0' && (char)lVar5 == '\0') {
    *param_3 = *param_3 ^ (ulonglong)(((uint)*param_3 ^ (uint)uVar2) & 0xf);
    param_3[uVar2 * 2 + -2] = *param_3;
    uVar4 = (uVar2 & 0xfffffffffffffff) >> 4 | param_3[1] & 0xfffffffffffffff0;
    param_3[1] = uVar4;
    param_3[uVar2 * 2 + -1] = uVar4;
    if (2 < (((uint)param_3[1] & 0xf) << 4 | (uint)*param_3 & 0xf)) {
      param_3[2] = param_2;
    }
    FUN_1433ef600(param_1,param_3);
  }
  else {
    FUN_1433ef8c0(param_1,param_3,uVar2 * 0x10,lVar5,cVar3,param_2);
  }
  return;
}



// FUNCTION 1433a23d0 FUN_1433a23d0 body=55 status=ok
// SIG undefined FUN_1433a23d0(void)

longlong FUN_1433a23d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30;
  
  FUN_143302fa0(*(undefined8 *)(param_2 + 0x18),local_48);
  lVar1 = FUN_1433a2410(local_38,param_3 - local_30 >> 4);
  return lVar1 << 4;
}



// FUNCTION 1433a2410 FUN_1433a2410 body=233 status=ok
// SIG undefined FUN_1433a2410(void)

uint FUN_1433a2410(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + (param_2 >> 4) * 4) >> ((byte)(param_2 * 2) & 0x1e) & 3;
  if (uVar1 < 3) {
    return uVar1;
  }
  uVar1 = *(uint *)(param_1 + (param_2 + 1 >> 4) * 4) >> ((char)(param_2 + 1) * '\x02' & 0x1eU) & 3;
  if (uVar1 < 3) {
    return uVar1 + 3;
  }
  uVar1 = *(uint *)(param_1 + (param_2 + 2 >> 4) * 4) >> ((char)(param_2 + 2) * '\x02' & 0x1eU) & 3;
  if (uVar1 < 3) {
    return ((*(uint *)(param_1 + (param_2 + 3 >> 4) * 4) >> ((char)(param_2 + 3) * '\x02' & 0x1eU) &
             3 | uVar1 * 4) << 2 |
           *(uint *)(param_1 + (param_2 + 4 >> 4) * 4) >> ((char)(param_2 + 4) * '\x02' & 0x1eU) & 3
           ) + 6;
  }
  return *(uint *)(param_1 + (param_2 * 2 + 0x25 >> 5) * 4);
}



// FUNCTION 1433a2500 FUN_1433a2500 body=91 status=ok
// SIG undefined FUN_1433a2500(void)

ulonglong * FUN_1433a2500(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  *param_1 = *param_1 ^ (ulonglong)(((uint)*param_1 ^ (uint)(param_2 >> 4)) & 0xf);
  param_1[(param_2 >> 3) - 2] = *param_1;
  uVar1 = param_1[1] & 0xfffffffffffffff0 | param_2 >> 8;
  param_1[1] = uVar1;
  param_1[(param_2 >> 3) - 1] = uVar1;
  if (2 < (((uint)param_1[1] & 0xf) << 4 | (uint)*param_1 & 0xf)) {
    param_1[2] = param_3;
  }
  return param_1;
}



// FUNCTION 1433a2560 FUN_1433a2560 body=600 status=ok
// SIG undefined FUN_1433a2560(void)

void FUN_1433a2560(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  
  cVar1 = (char)param_2;
  if (param_3 < 2) {
    uVar4 = (int)param_2 * 2 & 0x1e;
    *(uint *)(param_1 + (param_2 >> 4) * 4) =
         ~(3 << (sbyte)uVar4) & *(uint *)(param_1 + (param_2 >> 4) * 4) | 1 << uVar4;
    return;
  }
  if (param_3 == 2) {
    iVar2 = 2;
    uVar5 = param_2;
  }
  else {
    iVar2 = (int)param_3;
    if (2 < param_3 - 3) {
      if (param_3 < 0x26) {
        uVar7 = iVar2 - 6;
        puVar6 = (uint *)(param_1 + (param_2 >> 4) * 4);
        uVar4 = 3 << (cVar1 * '\x02' & 0x1eU);
        *puVar6 = ~uVar4 & *puVar6 | uVar4;
        puVar6 = (uint *)(param_1 + (param_2 + 1 >> 4) * 4);
        uVar4 = 3 << ((char)(param_2 + 1) * '\x02' & 0x1eU);
        *puVar6 = ~uVar4 & *puVar6 | uVar4;
        bVar3 = (char)(param_2 + 2) * '\x02' & 0x1e;
        puVar6 = (uint *)(param_1 + (param_2 + 2 >> 4) * 4);
        *puVar6 = ~(3 << bVar3) & *puVar6 | (uVar7 >> 4) << bVar3;
        bVar3 = (char)(param_2 + 3) * '\x02' & 0x1e;
        puVar6 = (uint *)(param_1 + (param_2 + 3 >> 4) * 4);
        *puVar6 = (uVar7 >> 2 & 3) << bVar3 | ~(3 << bVar3) & *puVar6;
        bVar3 = (char)(param_2 + 4) * '\x02' & 0x1e;
        uVar5 = param_2 + 4 >> 4;
        *(uint *)(param_1 + uVar5 * 4) =
             ~(3 << bVar3) & *(uint *)(param_1 + uVar5 * 4) | (uVar7 & 3) << bVar3;
      }
      else {
        puVar6 = (uint *)(param_1 + (param_2 >> 4) * 4);
        uVar4 = 3 << ((byte)(param_2 * 2) & 0x1e);
        *puVar6 = ~uVar4 & *puVar6 | uVar4;
        puVar6 = (uint *)(param_1 + (param_2 + 1 >> 4) * 4);
        uVar4 = 3 << ((char)(param_2 + 1) * '\x02' & 0x1eU);
        *puVar6 = ~uVar4 & *puVar6 | uVar4;
        puVar6 = (uint *)(param_1 + (param_2 + 2 >> 4) * 4);
        uVar4 = 3 << ((char)(param_2 + 2) * '\x02' & 0x1eU);
        *puVar6 = ~uVar4 & *puVar6 | uVar4;
        *(int *)(param_1 + (param_2 * 2 + 0x25 >> 5) * 4) = iVar2;
      }
      goto LAB_1433a2757;
    }
    puVar6 = (uint *)(param_1 + (param_2 >> 4) * 4);
    uVar4 = 3 << (cVar1 * '\x02' & 0x1eU);
    *puVar6 = ~uVar4 & *puVar6 | uVar4;
    cVar1 = (char)(param_2 + 1);
    iVar2 = iVar2 + -3;
    uVar5 = param_2 + 1;
  }
  puVar6 = (uint *)(param_1 + (uVar5 >> 4) * 4);
  bVar3 = cVar1 * '\x02' & 0x1e;
  *puVar6 = ~(3 << bVar3) & *puVar6 | iVar2 << bVar3;
LAB_1433a2757:
  param_2 = (param_3 - 1) + param_2;
  puVar6 = (uint *)(param_1 + (param_2 >> 4) * 4);
  uVar4 = (int)param_2 * 2 & 0x1e;
  *puVar6 = ~(3 << (sbyte)uVar4) & *puVar6 | 1 << uVar4;
  return;
}



// FUNCTION 1433a27c0 FUN_1433a27c0 body=503 status=ok
// SIG undefined FUN_1433a27c0(void)

undefined8 *
FUN_1433a27c0(undefined8 *param_1,RefCountImpl *param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,char param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_28 [5];
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  ushort local_1d;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b046f0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  plVar4 = DAT_146b62f28;
  if (param_3 != (longlong *)0x0) {
    plVar4 = param_3;
  }
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,param_4,0);
  param_1[0x19] = uVar3;
  plVar4 = DAT_146b62f28;
  if (param_3 != (longlong *)0x0) {
    plVar4 = param_3;
  }
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,param_5,0);
  param_1[0x1a] = uVar3;
  param_1[0x1c] = &LAB_1433a2e50;
  param_1[0x1d] = &LAB_1433a2e70;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if (((longlong *)param_1[3] != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x10))(), cVar1 != '\0')) {
    if (param_7 == '\0') {
      iVar2 = (**(code **)(*(longlong *)param_2 + 0x50))(param_2,local_28,5);
      if (iVar2 != 5) {
        return param_1;
      }
    }
    else {
      iVar2 = (**(code **)(*(longlong *)param_2 + 0x50))(param_2,local_28,0xd);
      if (iVar2 != 0xd) {
        return param_1;
      }
      lVar5 = ((((((ulonglong)local_1d * 0x100 + (ulonglong)local_1e) * 0x100 + (ulonglong)local_1f)
                 * 0x100 + (ulonglong)local_20) * 0x100 + (ulonglong)local_21) * 0x100 +
              (ulonglong)local_22) * 0x100 + (ulonglong)local_23;
      *(bool *)((longlong)param_1 + 0xd9) = lVar5 != -1;
      if (lVar5 != -1) {
        param_1[4] = lVar5;
      }
    }
    iVar2 = FUN_1436e16f0(param_1 + 5,local_28,5,param_1 + 0x1c);
    if (iVar2 == 0) {
      FUN_1436e1570(param_1 + 5);
      *(undefined1 *)(param_1 + 0x1b) = 1;
    }
  }
  return param_1;
}



// FUNCTION 1433a29c0 FUN_1433a29c0 body=102 status=ok
// SIG undefined FUN_1433a29c0(void)

void FUN_1433a29c0(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b046f0;
  FUN_1436e1880(param_1 + 0x28,param_1 + 0xe0);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xd0));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 200));
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433a2ad0 FUN_1433a2ad0 body=94 status=ok
// SIG undefined FUN_1433a2ad0(void)

undefined8 FUN_1433a2ad0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    FUN_1433a2c60(param_1,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001433a2b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    return uVar1;
  }
  if (-param_2 <= *(int *)((longlong)param_1 + 0xbc)) {
    *(int *)((longlong)param_1 + 0xbc) = *(int *)((longlong)param_1 + 0xbc) + param_2;
    param_1[0x18] = param_1[0x18] + (longlong)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001433a2b09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1433a2b70 FUN_1433a2b70 body=138 status=ok
// SIG undefined FUN_1433a2b70(void)

void FUN_1433a2b70(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    lVar3 = *param_1;
    iVar2 = (**(code **)(lVar3 + 0x20))();
    iVar2 = param_2 - iVar2;
  }
  else {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001433a2bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))();
      return;
    }
    if (param_3 != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001433a2ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
    lVar3 = *param_1;
    iVar1 = (**(code **)(lVar3 + 0x20))();
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    iVar2 = (param_2 - iVar1) + iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433a2bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x58))(param_1,iVar2);
  return;
}



// FUNCTION 1433a2c00 LSeek body=17 status=ok
// SIG undefined LSeek(void)

longlong FGFxFile::LSeek(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  return (longlong)iVar1;
}



// FUNCTION 1433a2c60 FUN_1433a2c60 body=476 status=ok
// SIG undefined FUN_1433a2c60(void)

uint FUN_1433a2c60(longlong param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_res18 [2];
  ulonglong local_res20;
  longlong local_48 [2];
  
  uVar5 = 0;
  uVar3 = param_3;
  while( true ) {
    while( true ) {
      if ((int)uVar3 < 1) {
        return param_3;
      }
      uVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xbc);
      if ((int)uVar3 < (int)uVar4) {
        uVar4 = uVar3;
      }
      if (uVar4 == 0) break;
      if (param_2 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop
                  (param_2,(void *)((longlong)*(int *)(param_1 + 0xbc) +
                                   *(longlong *)(param_1 + 0xd0)),(ulonglong)uVar4);
        param_2 = (void *)((longlong)param_2 + (ulonglong)uVar4);
      }
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + uVar4;
      *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + (ulonglong)uVar4;
      uVar3 = uVar3 - uVar4;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x10);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
                        (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 200));
      *(int *)(param_1 + 0xb4) = iVar1;
      if (iVar1 < 0) {
        return 0xffffffff;
      }
      if (iVar1 == 0) {
        return param_3 - uVar3;
      }
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    local_48[0] = (longlong)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0));
    local_res20 = (ulonglong)(uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xb8));
    uVar2 = 0;
    if ((*(char *)(param_1 + 0xd9) != '\0') &&
       (uVar5 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0xc0), uVar5 < local_res20))
    {
      uVar2 = 1;
      local_res20 = uVar5;
    }
    iVar1 = FUN_1436e1bf0(param_1 + 0x28,
                          (longlong)*(int *)(param_1 + 0xb8) + *(longlong *)(param_1 + 0xd0),
                          &local_res20,
                          (longlong)*(int *)(param_1 + 0xb0) + *(longlong *)(param_1 + 200),local_48
                          ,uVar2,local_res18);
    if ((iVar1 != 0) || ((*(char *)(param_1 + 0xd9) != '\0' && (uVar5 == 0)))) {
      return 0xffffffff;
    }
    if ((local_48[0] == 0) && (local_res20 == 0)) break;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (int)local_48[0];
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (int)local_res20;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(char *)(param_1 + 0xd9) != '\0') {
    return 0xffffffff;
  }
  if (local_res18[0] != 1) {
    return 0xffffffff;
  }
  return 0;
}



// FUNCTION 1433a2e90 FUN_1433a2e90 body=89 status=ok
// SIG undefined FUN_1433a2e90(void)

undefined8 FUN_1433a2e90(undefined8 param_1,ulonglong param_2)

{
  FUN_1433a29c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1433a2f20 FUN_1433a2f20 body=146 status=ok
// SIG undefined FUN_1433a2f20(void)

void FUN_1433a2f20(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_3;
  FUN_1433a6510(param_1,lVar4);
  lVar5 = 0;
  if (0 < lVar4) {
    do {
      lVar1 = *param_1;
      uVar2 = FUN_1433958f0(param_2,param_4);
      *(undefined4 *)(lVar1 + lVar5 * 8) = uVar2;
      lVar1 = *param_1;
      iVar3 = Scaleform::GFx::Stream::ReadSInt(param_2,param_5);
      *(float *)(lVar1 + 4 + lVar5 * 8) = (float)iVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar4);
  }
  return;
}



// FUNCTION 1433a2fc0 FUN_1433a2fc0 body=111 status=ok
// SIG undefined FUN_1433a2fc0(void)

float FUN_1433a2fc0(longlong *param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = param_1[1];
  uVar4 = 0;
  fVar5 = 0.0;
  if (3 < uVar1) {
    pfVar2 = (float *)(*param_1 + 0xc);
    lVar3 = (uVar1 - 4 >> 2) + 1;
    uVar4 = lVar3 * 4;
    do {
      fVar5 = fVar5 + pfVar2[-2] + *pfVar2 + pfVar2[2] + pfVar2[4];
      pfVar2 = pfVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (uVar4 < uVar1) {
    lVar3 = uVar1 - uVar4;
    pfVar2 = (float *)(*param_1 + 4 + uVar4 * 8);
    do {
      fVar5 = fVar5 + *pfVar2;
      pfVar2 = pfVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return fVar5;
}



// FUNCTION 1433a3040 FUN_1433a3040 body=202 status=ok
// SIG undefined FUN_1433a3040(void)

void FUN_1433a3040(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + uVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if ((*(int *)(puVar2 + 3) == 0) && (puVar2[4] != 0)) {
          FUN_1432de450();
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar2);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (((param_1[1] != 0) && ((param_1[2] & 0xfffffffffffffffeU) != 0)) && (param_1[2] != 0)) {
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1433a3110 FUN_1433a3110 body=209 status=ok
// SIG undefined FUN_1433a3110(void)

undefined8 * FUN_1433a3110(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0x102;
  puVar4 = (undefined8 *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x40,local_res10);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0x3f800000;
  *(undefined2 *)(puVar4 + 7) = 0;
  uVar3 = param_1[1];
  uVar1 = uVar3 + 1;
  if (uVar1 < uVar3) {
    uVar5 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1433a31ad;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1433a31ad;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1433a6460(param_1,param_1,uVar5);
LAB_1433a31ad:
  param_1[1] = uVar1;
  puVar2 = (undefined8 *)(*param_1 + uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = puVar4;
  }
  return puVar4;
}



// FUNCTION 1433a3260 FUN_1433a3260 body=1405 status=ok
// SIG undefined FUN_1433a3260(void)

void FUN_1433a3260(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  ushort local_c8;
  uint local_c4;
  undefined4 local_bc;
  uint local_b8 [2];
  uint local_b0 [2];
  ulonglong local_a8;
  
  lVar11 = *(longlong *)(param_2 + 0x418);
  if (lVar11 == 0) {
    lVar11 = param_2 + 0x50;
  }
  FUN_143396900(lVar11,(float *)(param_1 + 0x20));
  dVar15 = (double)*(float *)(param_1 + 0x28);
  FUN_143300df0(lVar11,"  TextRect = { l: %f, t: %f, r: %f, b: %f }\n",
                (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),dVar15,
                (double)*(float *)(param_1 + 0x2c));
  FUN_143396390(lVar11,param_1 + 0x30);
  FUN_143300df0(lVar11,"  mat:\n");
  *(undefined1 *)(lVar11 + 0x29) = 0;
  if (*(int *)(lVar11 + 0x50) - *(int *)(lVar11 + 0x4c) < 1) {
    FUN_143396d60(lVar11);
  }
  iVar12 = *(uint *)(lVar11 + 0x4c) + 1;
  uVar1 = *(undefined1 *)((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60));
  *(int *)(lVar11 + 0x4c) = iVar12;
  *(undefined1 *)(lVar11 + 0x29) = 0;
  if (*(int *)(lVar11 + 0x50) - iVar12 < 1) {
    FUN_143396d60(lVar11);
  }
  uVar8 = (uint)*(byte *)((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60));
  *(uint *)(lVar11 + 0x4c) = *(uint *)(lVar11 + 0x4c) + 1;
  FUN_143300df0(lVar11,"begin text records\n");
  uVar13 = 0;
  fVar18 = 0.0;
  local_c8 = 0;
  local_c4 = 0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar19 = 0.0;
  uVar14 = uVar13;
  bVar6 = false;
  while( true ) {
    *(undefined1 *)(lVar11 + 0x29) = 0;
    if (*(int *)(lVar11 + 0x50) - *(int *)(lVar11 + 0x4c) < 1) {
      FUN_143396d60(lVar11);
    }
    bVar2 = *(byte *)((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60));
    *(uint *)(lVar11 + 0x4c) = *(uint *)(lVar11 + 0x4c) + 1;
    uVar9 = (uint)bVar2;
    uVar10 = (ulonglong)uVar9;
    iVar12 = (int)uVar14;
    if (bVar2 == 0) break;
    if (bVar6) {
      if ((0.0 <= fVar16) || (fVar19 <= 0.0)) {
        lVar7 = FUN_1433a3110(param_1 + 0x50);
        uVar20 = (undefined4)((ulonglong)dVar15 >> 0x20);
        if (lVar7 != 0) {
          *(float *)(lVar7 + 0x2c) = fVar17;
          *(float *)(lVar7 + 0x30) = fVar16;
          if ((iVar12 == 0) && (uVar13 != 0)) {
            Scaleform::GFx::Resource::AddRef(uVar13);
          }
          if ((*(int *)(lVar7 + 0x18) == 0) && (*(longlong *)(lVar7 + 0x20) != 0)) {
            FUN_1432de450();
          }
          *(int *)(lVar7 + 0x18) = iVar12;
          *(ulonglong *)(lVar7 + 0x20) = uVar13;
          *(float *)(lVar7 + 0x34) = fVar18;
          *(undefined4 *)(lVar7 + 0x28) = local_bc;
          *(ushort *)(lVar7 + 0x38) = local_c8;
          dVar15 = (double)CONCAT44(uVar20,uVar8);
          FUN_1433a2f20(lVar7,lVar11,uVar10,uVar1,dVar15);
          fVar19 = (float)FUN_1433a2fc0(lVar7);
          fVar17 = fVar17 + fVar19;
          fVar19 = fVar16;
        }
        FUN_143300df0(lVar11,"  GlyphRecords: count = %d\n",uVar10);
        bVar6 = false;
      }
      else {
        FUN_143300df0(lVar11,"  Negative Y-offset, 16-bit value rollover, skipping the line...\n");
        bVar6 = false;
        if (uVar9 != 0) {
          do {
            FUN_1433958f0(lVar11,uVar1);
            Scaleform::GFx::Stream::ReadSInt(lVar11,uVar8);
            uVar10 = uVar10 - 1;
            bVar6 = false;
          } while (uVar10 != 0);
        }
      }
    }
    else {
      FUN_143300df0(lVar11,"  text style change\n");
      if (((int)uVar9 >> 3 & 1U) != 0) {
        *(undefined1 *)(lVar11 + 0x29) = 0;
        if (*(int *)(lVar11 + 0x50) - *(int *)(lVar11 + 0x4c) < 2) {
          FUN_143396c40(lVar11,2);
        }
        local_c8 = CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(lVar11 + 0x4c) + 1) +
                             *(longlong *)(lVar11 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60)));
        *(uint *)(lVar11 + 0x4c) = *(uint *)(lVar11 + 0x4c) + 2;
        FUN_143300df0(lVar11,"  HasFont: font id = %d\n",(uint)local_c8);
        local_b0[0] = 0;
        local_a8 = 0;
        local_b8[0] = (uint)local_c8;
        FUN_14330e8c0(*(undefined8 *)(param_2 + 0x38),local_b0,local_b8);
        if ((local_b0[0] == 0) && (local_a8 != 0)) {
          Scaleform::GFx::Resource::AddRef();
        }
        if ((local_c4 == 0) && (uVar13 != 0)) {
          FUN_1432de450(uVar13);
        }
        uVar13 = local_a8;
        local_c4 = local_b0[0];
        if ((local_b0[0] == 0) && (local_a8 != 0)) {
          FUN_1432de450();
        }
      }
      if (((int)uVar9 >> 2 & 1U) != 0) {
        if (param_3 == 0xb) {
          FUN_143396a00();
        }
        else {
          FUN_143396ac0(lVar11,&local_bc);
        }
        FUN_143300df0(lVar11,"  HasColor\n");
      }
      if ((bVar2 & 1) != 0) {
        *(undefined1 *)(lVar11 + 0x29) = 0;
        if (*(int *)(lVar11 + 0x50) - *(int *)(lVar11 + 0x4c) < 2) {
          FUN_143396c40(lVar11,2);
        }
        uVar3 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar11 + 0x4c) + 1) + *(longlong *)(lVar11 + 0x60));
        uVar4 = *(undefined1 *)((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60));
        *(uint *)(lVar11 + 0x4c) = *(uint *)(lVar11 + 0x4c) + 2;
        iVar12 = (int)CONCAT11(uVar3,uVar4);
        fVar17 = (float)iVar12;
        FUN_143300df0(lVar11,"  XOffset = %g\n",(double)iVar12);
      }
      if (((int)uVar9 >> 1 & 1U) != 0) {
        *(undefined1 *)(lVar11 + 0x29) = 0;
        if (*(int *)(lVar11 + 0x50) - *(int *)(lVar11 + 0x4c) < 2) {
          FUN_143396c40(lVar11,2);
        }
        uVar3 = *(undefined1 *)
                 ((ulonglong)(*(int *)(lVar11 + 0x4c) + 1) + *(longlong *)(lVar11 + 0x60));
        uVar4 = *(undefined1 *)((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60));
        *(uint *)(lVar11 + 0x4c) = *(uint *)(lVar11 + 0x4c) + 2;
        iVar12 = (int)CONCAT11(uVar3,uVar4);
        fVar16 = (float)iVar12;
        FUN_143300df0(lVar11,"  YOffset = %g\n",(double)iVar12);
      }
      uVar14 = (ulonglong)local_c4;
      bVar6 = true;
      if (((int)uVar9 >> 3 & 1U) != 0) {
        *(undefined1 *)(lVar11 + 0x29) = 0;
        if (*(int *)(lVar11 + 0x50) - *(int *)(lVar11 + 0x4c) < 2) {
          FUN_143396c40(lVar11,2);
        }
        uVar5 = CONCAT11(*(undefined1 *)
                          ((ulonglong)(*(int *)(lVar11 + 0x4c) + 1) + *(longlong *)(lVar11 + 0x60)),
                         *(undefined1 *)
                          ((ulonglong)*(uint *)(lVar11 + 0x4c) + *(longlong *)(lVar11 + 0x60)));
        *(uint *)(lVar11 + 0x4c) = *(uint *)(lVar11 + 0x4c) + 2;
        fVar18 = (float)uVar5;
        FUN_143300df0(lVar11,"  TextHeight = %g\n",(double)uVar5);
      }
    }
  }
  FUN_143300df0(lVar11,"end text records\n");
  if ((iVar12 == 0) && (uVar13 != 0)) {
    FUN_1432de450(uVar13);
  }
  return;
}



// FUNCTION 1433a3830 FUN_1433a3830 body=2435 status=ok
// SIG undefined FUN_1433a3830(void)

undefined8 *
FUN_1433a3830(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  ushort *puVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  RefCountImpl *pRVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  RefCountImpl *pRVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  uint local_168;
  uint local_164;
  longlong local_160;
  longlong local_158;
  longlong lStack_150;
  RefCountImpl *local_148;
  undefined4 local_140;
  uint local_13c;
  uint local_138;
  undefined8 *local_130;
  int *local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  RefCountImpl *local_d0;
  longlong local_c8;
  RefCountImpl *local_c0 [17];
  
  local_140 = *param_6;
  FUN_14336c360(param_1,param_4,param_5,&local_140);
  *param_1 = &PTR_FUN_145b047e8;
  param_1[3] = &PTR_LAB_145b04aa0;
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  local_130 = param_1 + 0x18;
  param_1[0x12] = param_2;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  FUN_1433f24d0(local_130);
  FUN_1433a5d80(param_1 + 0x24);
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  local_118 = *(undefined4 *)(param_2 + 0x30);
  local_114 = *(undefined4 *)(param_2 + 0x34);
  local_108 = *(undefined4 *)(param_2 + 0x40);
  local_104 = *(undefined4 *)(param_2 + 0x44);
  local_100 = *(undefined4 *)(param_2 + 0x48);
  local_fc = *(undefined4 *)(param_2 + 0x4c);
  local_110 = *(undefined4 *)(param_2 + 0x38);
  local_10c = *(undefined4 *)(param_2 + 0x3c);
  local_f8 = local_118;
  local_f4 = local_114;
  local_f0 = local_110;
  local_ec = local_10c;
  local_e8 = local_108;
  local_e4 = local_104;
  local_e0 = local_100;
  local_dc = local_fc;
  Scaleform::Render::Matrix2x4<float>::SetInverse
            ((Matrix2x4<float> *)&local_118,(Matrix2x4<float> *)&local_f8);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform
            ((Matrix2x4<float> *)&local_118,(Rect<float> *)&local_178,
             (Rect<float> *)(param_2 + 0x20));
  param_6._0_4_ = 0;
  if (0.0 <= local_178) {
    local_178 = 0.0;
  }
  if (0.0 <= fStack_174) {
    fStack_174 = 0.0;
  }
  if (fStack_170 <= 0.0) {
    fStack_170 = 0.0;
  }
  if (fStack_16c <= 0.0) {
    fStack_16c = 0.0;
  }
  local_138 = *(uint *)(param_2 + 0x58);
  local_164 = 0;
  if (local_138 != 0) {
    local_120 = 0;
    do {
      uVar10 = local_164;
      pRVar13 = (RefCountImpl *)0x0;
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x50) + local_120 * 8);
      lVar14 = *(longlong *)(param_3 + 0x70);
      lVar9 = lVar14 + 0x30;
      local_158 = 0;
      lStack_150 = 0;
      if ((int)plVar2[3] == 1) {
        if ((*(char *)(lVar14 + 0x78) == '\0') ||
           (*(uint *)(lVar14 + 0x38) <= *(uint *)(plVar2 + 4))) {
          FUN_14330cc40(lVar9,&local_158);
          local_160 = local_158;
          lVar14 = local_158;
        }
        else {
          plVar12 = (longlong *)
                    ((ulonglong)*(uint *)(plVar2 + 4) * 0x10 + *(longlong *)(lVar14 + 0x40));
          if ((*plVar12 != 0) && (Scaleform::GFx::Resource::AddRef(), local_158 != 0)) {
            FUN_1432de450();
          }
          local_160 = *plVar12;
          lVar14 = *plVar12;
          lStack_150 = plVar12[1];
        }
      }
      else {
        lStack_150 = lVar9;
        if ((int)plVar2[3] == 0) {
          lVar14 = plVar2[4];
          local_160 = lVar14;
          if ((lVar14 != 0) && (Scaleform::GFx::Resource::AddRef(lVar14), local_158 != 0)) {
            FUN_1432de450();
          }
        }
        else {
          local_160 = 0;
          lVar14 = 0;
        }
      }
      local_158 = lVar14;
      if (local_158 == 0) {
        plVar12 = (longlong *)Scaleform::GFx::StateBag::GetLog(param_3 + 0x18,local_c0);
        lVar14 = *plVar12;
        if (local_c0[0] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_c0[0]);
        }
        if (lVar14 != 0) {
          FUN_1432bbf90(lVar14,"Text style with undefined font; FontId = %d",(short)plVar2[7]);
        }
        if (local_158 == 0) {
          return param_1;
        }
        FUN_1432de450();
        return param_1;
      }
      lVar14 = local_158;
      if ((*(byte *)(param_2 + 0x68) & 2) == 0) {
        for (plVar12 = *(longlong **)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + 0x18) + 0x40) +
                        0x110); plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[5]) {
          pRVar6 = pRVar13;
          if (plVar12[1] != 0) {
            do {
              if (*(int *)(*plVar12 + 0xc + (longlong)pRVar6 * 0x10) == (int)plVar2[4]) {
                plVar5 = (longlong *)Scaleform::GFx::StateBag::GetLog(param_3 + 0x18,&local_d0);
                lVar14 = *plVar5;
                if (local_d0 != (RefCountImpl *)0x0) {
                  Scaleform::RefCountImpl::Release(local_d0);
                }
                if (lVar14 != 0) {
                  FUN_14337ae30(lVar14,
                                "Static text uses imported font! FontId = %d, import name = %s",
                                (short)plVar2[7],
                                (*(ulonglong *)(*plVar12 + (longlong)pRVar6 * 0x10) &
                                0xfffffffffffffffc) + 0xc);
                }
              }
              pRVar6 = (RefCountImpl *)(ulonglong)((int)pRVar6 + 1);
            } while (pRVar6 < (RefCountImpl *)plVar12[1]);
          }
          lVar14 = local_160;
        }
      }
      pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
      if (pRVar6 == (RefCountImpl *)0x0) {
        local_148 = (RefCountImpl *)0x0;
      }
      else {
        pRVar13 = *(RefCountImpl **)(lVar14 + 0x18);
        *(undefined8 *)(pRVar6 + 8) = 0;
        *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
        *(undefined ***)pRVar6 = &PTR_FUN_145b034c0;
        *(undefined4 *)(pRVar6 + 8) = 1;
        *(undefined8 *)(pRVar6 + 0x10) = 0;
        *(undefined4 *)(pRVar6 + 0x18) = 0;
        local_148 = pRVar6;
        FUN_1432c5250(pRVar6 + 0x20);
        *(undefined8 *)(pRVar6 + 0x28) = 0x3f800000;
        if (pRVar13 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar13);
        }
        *(RefCountImpl **)(pRVar6 + 0x30) = pRVar13;
        *(undefined ***)pRVar6 = &PTR_FUN_145b034e8;
        *(undefined8 *)(pRVar6 + 0x38) = 0;
        pRVar13 = pRVar6;
      }
      uVar8 = *(uint *)(plVar2 + 1);
      if ((uVar8 < 0x100) && ((*(uint *)(*(longlong *)(lVar14 + 0x18) + 0x1c) >> 0xd & 1) == 0)) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
      piVar7 = (int *)FUN_1433f3650(local_130,uVar10,uVar8,2,uVar22);
      if (*piVar7 < 0) {
        piVar7[2] = piVar7[2] & 0xff000000;
        piVar7[2] = piVar7[2] | (uint)param_6 & 0xffffff;
      }
      else {
        piVar7[2] = (uint)param_6;
      }
      fVar20 = *(float *)((longlong)plVar2 + 0x2c);
      param_6._0_4_ = (uint)param_6 + uVar8;
      if ((*(uint *)(*(longlong *)(lVar14 + 0x18) + 0x1c) >> 0xd & 1) == 0) {
        fVar21 = 0.0;
        fVar19 = *(float *)(plVar2 + 6) + -fStack_174;
      }
      else {
        fVar21 = *(float *)((longlong)plVar2 + 0x34);
        fVar19 = (*(float *)(plVar2 + 6) - fVar21) + -fStack_174;
        if (*piVar7 < 0) {
          *(short *)((longlong)piVar7 + 0x1a) = (short)(longlong)fVar21;
        }
        else {
          *(short *)((longlong)piVar7 + 0x26) = (short)(longlong)fVar21;
        }
        fVar21 = *(float *)(*(longlong *)(lVar14 + 0x18) + 0x14) * fVar21 * 0.0009765625 +
                 *(float *)((longlong)plVar2 + 0x34);
      }
      fVar20 = fVar20 + -local_178;
      if (fVar19 <= 0.0) {
        fVar19 = fVar19 - 0.5;
      }
      else {
        fVar19 = fVar19 + 0.5;
      }
      if (fVar20 <= 0.0) {
        fVar20 = fVar20 - 0.5;
      }
      else {
        fVar20 = fVar20 + 0.5;
      }
      piVar7[4] = (int)fVar19;
      piVar7[3] = (int)fVar20;
      if (*piVar7 < 0) {
        piVar7[5] = 0;
      }
      else {
        piVar7[5] = 0;
        piVar7[6] = 0;
      }
      lVar14 = 0x2a;
      if (*piVar7 < 0) {
        lVar14 = 0x1e;
      }
      lVar14 = lVar14 + (longlong)piVar7;
      local_128 = piVar7;
      lVar9 = FUN_1433f23a0(piVar7);
      pRVar6 = local_148;
      uVar11 = 0;
      local_168 = 0;
      uVar15 = uVar11;
      uVar16 = uVar11;
      uVar18 = uVar11;
      uVar10 = 0;
      local_c8 = lVar9;
      if (uVar8 != 0) {
        do {
          *(undefined4 *)(lVar14 + uVar16 * 8) = 0;
          *(undefined4 *)(lVar14 + 4 + uVar16 * 8) = 0x1000;
          *(undefined2 *)(lVar14 + uVar16 * 8) = *(undefined2 *)(*plVar2 + uVar18 * 8);
          iVar4 = (int)*(float *)(*plVar2 + 4 + uVar18 * 8);
          if (iVar4 < 0) {
            uVar3 = (ushort)(iVar4 >> 0x1f);
            uVar11 = (ulonglong)local_168;
            *(ushort *)(lVar14 + 2 + uVar16 * 8) = ((ushort)iVar4 ^ uVar3) - uVar3;
            *(undefined2 *)(lVar14 + 6 + uVar16 * 8) = 0x40;
          }
          else {
            *(ushort *)(lVar14 + 2 + uVar16 * 8) = (ushort)iVar4;
            *(undefined2 *)(lVar14 + 6 + uVar16 * 8) = 0;
          }
          fVar20 = *(float *)((longlong)plVar2 + 0x34) * 0.05;
          local_13c = (int)uVar15 + (int)*(float *)(*plVar2 + 4 + uVar18 * 8);
          if ((256.0 <= fVar20) ||
             (uVar3 = (ushort)(longlong)(fVar20 * 16.0), ((longlong)(fVar20 * 16.0) & 0xfU) == 0)) {
            puVar1 = (ushort *)(lVar14 + 6 + uVar16 * 8);
            *puVar1 = *puVar1 & 0xffef;
            uVar3 = (ushort)(longlong)fVar20;
          }
          else {
            puVar1 = (ushort *)(lVar14 + 6 + uVar16 * 8);
            *puVar1 = *puVar1 | 0x10;
          }
          *(ushort *)(lVar14 + 4 + uVar16 * 8) = uVar3 & 0xfff | 0x1000;
          if ((int)uVar18 == 0) {
            puVar1 = (ushort *)(lVar14 + 6 + uVar16 * 8);
            *puVar1 = *puVar1 | 0x4000;
            puVar1 = (ushort *)(lVar14 + 6 + uVar16 * 8);
            *puVar1 = *puVar1 | 0x2000;
            local_168 = (int)uVar11 + 1;
            *(RefCountImpl **)(lVar9 + uVar11 * 8) = pRVar6;
            Scaleform::RefCountImpl::AddRef(pRVar6);
            local_d8 = (undefined4)plVar2[5];
            puVar1 = (ushort *)(lVar14 + 6 + uVar16 * 8);
            *puVar1 = *puVar1 | 0x4000;
            puVar1 = (ushort *)(lVar14 + 6 + uVar16 * 8);
            *puVar1 = *puVar1 | 0x1000;
            *(undefined4 *)(local_c8 + (ulonglong)local_168 * 8) = local_d8;
            local_168 = local_168 + 1;
            uVar11 = (ulonglong)local_168;
            lVar9 = local_c8;
          }
          uVar17 = (int)uVar18 + 1;
          if ((lVar14 != 0) && ((uint)uVar16 < uVar8)) {
            uVar16 = (ulonglong)((uint)uVar16 + 1);
          }
          pRVar13 = local_148;
          piVar7 = local_128;
          uVar15 = (ulonglong)local_13c;
          uVar18 = (ulonglong)uVar17;
          uVar10 = local_13c;
        } while (uVar17 < uVar8);
      }
      if ((*(uint *)(*(longlong *)(local_160 + 0x18) + 0x1c) >> 0xd & 1) != 0) {
        if (fVar21 <= 0.0) {
          fVar21 = fVar21 - 0.5;
        }
        else {
          fVar21 = fVar21 + 0.5;
        }
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        if (*piVar7 < 0) {
          *(short *)(piVar7 + 5) = (short)uVar10;
          *(short *)((longlong)piVar7 + 0x16) = (short)(int)fVar21;
        }
        else {
          piVar7[5] = uVar10;
          piVar7[6] = (int)fVar21;
        }
        if (*piVar7 < 0) {
          *(char *)((longlong)piVar7 + 0xb) = (char)uVar8;
        }
        else {
          piVar7[8] = uVar8;
        }
        if (*piVar7 < 0) {
          uVar10 = (uint)*(ushort *)((longlong)piVar7 + 0x16);
        }
        else {
          uVar10 = piVar7[6];
        }
        if (*piVar7 < 0) {
          uVar8 = (uint)*(ushort *)(piVar7 + 5);
        }
        else {
          uVar8 = piVar7[5];
        }
        fVar19 = (float)(int)(uVar8 + piVar7[3]);
        fVar20 = (float)(int)(uVar10 + piVar7[4]);
        if (fVar19 <= local_178) {
          local_178 = fVar19;
        }
        if (fVar20 <= fStack_174) {
          fStack_174 = fVar20;
        }
        if (fStack_170 <= fVar19) {
          fStack_170 = fVar19;
        }
        if (fStack_16c <= fVar20) {
          fStack_16c = fVar20;
        }
      }
      if (pRVar13 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar13);
      }
      if (local_158 != 0) {
        FUN_1432de450();
      }
      local_164 = local_164 + 1;
      local_120 = local_120 + 1;
    } while (local_164 < local_138);
  }
  *(float *)(param_1 + 0x1e) = local_178;
  *(float *)((longlong)param_1 + 0xf4) = fStack_174;
  *(float *)(param_1 + 0x1f) = fStack_170;
  *(float *)((longlong)param_1 + 0xfc) = fStack_16c;
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) | 4;
  FUN_1433f1e80(param_1 + 0x24);
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 2;
  FUN_1433a4630(param_1);
  return param_1;
}



// FUNCTION 1433a41c0 FUN_1433a41c0 body=154 status=ok
// SIG undefined FUN_1433a41c0(void)

void FUN_1433a41c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x30];
  *param_1 = &PTR_FUN_145b047e8;
  param_1[3] = &PTR_LAB_145b04aa0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
  }
  if ((RefCountImpl *)param_1[0x2d] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x2d]);
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)(param_1 + 0x24));
  FUN_1433f2510(param_1 + 0x18);
  if (param_1[0x12] != 0) {
    FUN_1432de450();
  }
  FUN_14336c3d0(param_1);
  return;
}



// FUNCTION 1433a4280 FUN_1433a4280 body=391 status=ok
// SIG undefined FUN_1433a4280(void)

void FUN_1433a4280(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  
  *(float *)(param_1 + 0xa0) = *param_2;
  *(float *)(param_1 + 0xa4) = param_2[1];
  *(float *)(param_1 + 0xa8) = param_2[2];
  *(float *)(param_1 + 0xac) = param_2[3];
  *(float *)(param_1 + 0xb0) = param_2[4];
  *(float *)(param_1 + 0xb4) = param_2[5];
  *(float *)(param_1 + 0xb8) = param_2[6];
  *(float *)(param_1 + 0xbc) = param_2[7];
  lVar5 = *(longlong *)(param_1 + 0x90);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[4];
  fVar4 = param_2[5];
  local_58 = fVar1 * *(float *)(lVar5 + 0x40) + fVar2 * *(float *)(lVar5 + 0x30);
  local_48 = fVar4 * *(float *)(lVar5 + 0x40) + fVar3 * *(float *)(lVar5 + 0x30);
  local_54 = fVar1 * *(float *)(lVar5 + 0x44) + fVar2 * *(float *)(lVar5 + 0x34);
  fVar6 = fVar3 * *(float *)(lVar5 + 0x34);
  local_40 = 0;
  local_50 = 0;
  local_44 = fVar4 * *(float *)(lVar5 + 0x44) + fVar6;
  local_4c = param_2[3] + fVar2 * *(float *)(lVar5 + 0x3c) + fVar1 * *(float *)(lVar5 + 0x4c);
  local_3c = param_2[7] + fVar3 * *(float *)(lVar5 + 0x3c) + fVar4 * *(float *)(lVar5 + 0x4c);
  FUN_14336c550(fVar6,&local_58);
  return;
}



// FUNCTION 1433a4410 FUN_1433a4410 body=264 status=ok
// SIG undefined FUN_1433a4410(void)

void FUN_1433a4410(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined2 local_27;
  undefined1 local_25;
  RefCountImpl *local_20;
  
  if (param_2 != 0) {
    uVar4 = 0;
    local_68 = &PTR_FUN_145b047e0;
    local_30 = 0x3f800000;
    local_60 = 1;
    local_48 = 0;
    local_44 = 1;
    local_40 = 0x42c80000;
    local_3c = 0x42c80000;
    local_34 = 0;
    local_20 = (RefCountImpl *)0x0;
    local_2b = 0xff0000;
    local_2c = 0;
    local_27 = 0;
    local_25 = 0;
    FUN_1433f1e80(&local_68);
    iVar1 = FVorbisAudioInfo::GetSourceBufferSize(param_2);
    if (iVar1 != 0) {
      do {
        uVar3 = Scaleform::Render::FilterSet::GetFilter(param_2,uVar4);
        FUN_1433f1f10(&local_68,uVar3);
        uVar4 = uVar4 + 1;
        uVar2 = FVorbisAudioInfo::GetSourceBufferSize(param_2);
      } while (uVar4 < uVar2);
    }
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_68);
    if (local_20 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_20);
    }
    Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)&local_68);
  }
  return;
}



// FUNCTION 1433a4520 FUN_1433a4520 body=130 status=ok
// SIG undefined FUN_1433a4520(void)

longlong FUN_1433a4520(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    return *(longlong *)(param_1 + 0x180);
  }
  plVar1 = (longlong *)Scaleform::GFx::DisplayObjectBase::FindMovieImpl();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x180))(plVar1);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x38);
  if (lVar2 != 0) {
    Scaleform::Render::Text::Highlighter::Highlighter(lVar2);
    *(longlong *)(param_1 + 0x180) = lVar2;
    return lVar2;
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  return 0;
}



// FUNCTION 1433a45b0 FUN_1433a45b0 body=116 status=ok
// SIG undefined FUN_1433a45b0(void)

longlong * FUN_1433a45b0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,0xb0,0);
  if (lVar2 != 0) {
    Scaleform::Render::TreeText::NodeData::NodeData(lVar2);
  }
  lVar2 = FUN_1432ceba0(param_3,lVar2);
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return param_2;
}



// FUNCTION 1433a4630 FUN_1433a4630 body=263 status=ok
// SIG undefined FUN_1433a4630(void)

void FUN_1433a4630(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_838;
  ulonglong local_830;
  undefined4 local_828;
  undefined8 local_820;
  ulonglong local_818;
  undefined4 local_810;
  undefined8 local_808;
  undefined4 local_800;
  undefined1 local_7f8 [64];
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  
  uVar2 = FUN_14336b350();
  FUN_1433efc00(local_7f8,DAT_146b62f28);
  lVar1 = *(longlong *)(param_1 + 0x180);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x30) == '\0')) {
    FUN_1433f1740(lVar1,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x30) = 1;
  }
  local_828 = 0x100000;
  local_838 = 0;
  local_830 = 0;
  local_820 = 0;
  local_818 = 0;
  local_808 = 0;
  local_800 = 0;
  local_810 = 0x100000;
  Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(&local_838,param_1 + 0x120);
  if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x68) & 1) != 0) {
    local_830 = local_830 | 0x300000000;
    local_818 = local_818 | 0x300000000;
  }
  FUN_1433f2550(param_1 + 0xc0,local_7f8,*(undefined8 *)(param_1 + 0x180),&local_838);
  local_7b8 = *(undefined4 *)(param_1 + 0xf0);
  uStack_7b4 = *(undefined4 *)(param_1 + 0xf4);
  uStack_7b0 = *(undefined4 *)(param_1 + 0xf8);
  uStack_7ac = *(undefined4 *)(param_1 + 0xfc);
  FUN_1433f4b30(uVar2,local_7f8);
  FUN_1433a5df0(local_7f8);
  return;
}



// FUNCTION 1433a4740 FUN_1433a4740 body=64 status=ok
// SIG undefined FUN_1433a4740(void)

undefined8 * FUN_1433a4740(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1432c5250(param_1 + 3);
  *(undefined4 *)(param_1 + 4) = 0xffffff00;
  return param_1;
}



// FUNCTION 1433a4790 FUN_1433a4790 body=664 status=ok
// SIG undefined FUN_1433a4790(void)

void FUN_1433a4790(longlong *param_1,RefCountNTSImpl *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  ushort *local_e8;
  ushort *local_e0;
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
  
  if (param_2 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  lVar11 = 0;
  bVar4 = true;
  uVar10 = 0;
  fVar13 = 0.0;
  while( true ) {
    if (((param_2 + 0xc0 == (RefCountNTSImpl *)0x0) ||
        (*(ulonglong *)(param_2 + 200) <= (ulonglong)uVar10)) || ((int)uVar10 < 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) break;
    piVar1 = *(int **)(*(longlong *)(param_2 + 0xc0) + (ulonglong)uVar10 * 8);
    fVar12 = (float)piVar1[3];
    if ((!bVar4) && (bVar3 = fVar12 == fVar13, fVar12 = fVar13, bVar3)) {
      FUN_1432c3700(param_1 + 3,10);
    }
    if (*piVar1 < 0) {
      uVar9 = (uint)*(byte *)(piVar1 + 7);
    }
    else {
      uVar9 = piVar1[1];
    }
    lVar8 = 0x2a;
    if (*piVar1 < 0) {
      lVar8 = 0x1e;
    }
    local_d8 = FUN_1433f23a0(piVar1);
    local_b8 = 0xffffffffffffffff;
    local_a8 = 0xffffffffffffffff;
    local_d0 = 0;
    local_e8 = (ushort *)(lVar8 + (longlong)piVar1);
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
    local_e0 = local_e8 + (ulonglong)uVar9 * 4;
    FUN_1433f2020(&local_e8);
    if ((local_68 != (RefCountImpl *)0x0) &&
       (plVar2 = *(longlong **)(local_68 + 0x30), plVar2 != (longlong *)0x0)) {
      while ((local_e8 != (ushort *)0x0 && (local_e8 < local_e0))) {
        if (*local_e8 < 0xffff) {
          uVar6 = (ulonglong)*local_e8;
        }
        else {
          uVar6 = 0xffffffff;
        }
        iVar5 = (**(code **)(*plVar2 + 0x88))(plVar2,uVar6);
        if (iVar5 != -1) {
          lVar11 = lVar11 + 1;
          FUN_1432c3700(param_1 + 3);
        }
        Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_e8);
      }
      bVar4 = false;
    }
    if (pRStack_60 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRStack_60);
    }
    if (local_68 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_68);
    }
    fVar13 = fVar12;
    if ((ulonglong)uVar10 < *(ulonglong *)(param_2 + 200)) {
      uVar10 = uVar10 + 1;
    }
  }
  FUN_1433a65a0(param_1,param_1,param_1[1] + 1);
  puVar7 = (undefined8 *)(*param_1 + -0x10 + param_1[1] * 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    if (param_2 != (RefCountNTSImpl *)0x0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    *puVar7 = param_2;
    puVar7[1] = lVar11;
  }
  if (param_2 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(param_2);
  }
  return;
}



// FUNCTION 1433a4a30 FUN_1433a4a30 body=247 status=ok
// SIG undefined FUN_1433a4a30(void)

ulonglong FUN_1433a4a30(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  uVar4 = uVar3;
  uVar10 = uVar3;
  if (3 < uVar1) {
    lVar2 = *param_1;
    lVar6 = 0;
    lVar8 = 0;
    lVar7 = lVar6;
    lVar9 = lVar8;
    do {
      uVar4 = uVar4 + 4;
      lVar6 = *(longlong *)(uVar10 + 8 + lVar2) + lVar6;
      lVar8 = *(longlong *)(uVar10 + 0x18 + lVar2) + lVar8;
      lVar7 = *(longlong *)(uVar10 + 0x28 + lVar2) + lVar7;
      lVar9 = *(longlong *)(uVar10 + 0x38 + lVar2) + lVar9;
      uVar10 = uVar10 + 0x40;
    } while (uVar4 < (uVar1 & 0xfffffffffffffffc));
    uVar10 = lVar7 + lVar6 + lVar9 + lVar8;
  }
  if (uVar1 <= uVar4) {
    return uVar10;
  }
  uVar5 = uVar3;
  if (1 < uVar1 - uVar4) {
    lVar2 = uVar4 << 4;
    lVar7 = ((uVar1 - uVar4) - 2 >> 1) + 1;
    uVar4 = uVar4 + lVar7 * 2;
    do {
      uVar3 = uVar3 + *(longlong *)(lVar2 + 8 + *param_1);
      uVar5 = uVar5 + *(longlong *)(lVar2 + 0x18 + *param_1);
      lVar2 = lVar2 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (uVar4 < uVar1) {
    uVar10 = uVar10 + *(longlong *)(*param_1 + 8 + uVar4 * 0x10);
  }
  return uVar5 + uVar3 + uVar10;
}



// FUNCTION 1433a4b30 FUN_1433a4b30 body=147 status=ok
// SIG undefined FUN_1433a4b30(void)

undefined8
FUN_1433a4b30(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,char param_5)

{
  int iVar1;
  longlong local_res8;
  
  FUN_1432c2f70(param_2);
  local_res8 = (*(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffc) + 0xc;
  while ((param_3 < param_4 && (iVar1 = FUN_143307250(&local_res8), iVar1 != 0))) {
    if (iVar1 == 10) {
      if (param_5 != '\0') {
        FUN_1432c3700(param_2,10);
      }
    }
    else {
      FUN_1432c3700(param_2,iVar1);
      param_3 = param_3 + 1;
    }
  }
  return param_2;
}



// FUNCTION 1433a4bd0 FUN_1433a4bd0 body=461 status=ok
// SIG undefined FUN_1433a4bd0(void)

undefined8 FUN_1433a4bd0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_res8;
  ulonglong local_c8;
  longlong local_c0;
  undefined1 local_88 [96];
  
  FUN_1432c2f70(param_2);
  uVar5 = 0;
  local_res8 = (param_1[3] & 0xfffffffffffffffcU) + 0xc;
  uVar7 = uVar5;
  uVar8 = uVar5;
  uVar9 = uVar5;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(uVar9 + *param_1) + 0x180);
      if (lVar1 != 0) {
        FUN_1433f16e0(lVar1,local_88,0,0xffffffff);
        cVar3 = Scaleform::Render::Text::HighlighterRangeIterator::IsFinished(local_88);
        while (cVar3 == '\0') {
          Scaleform::Render::Text::HighlighterRangeIterator::operator*(local_88,&local_c8);
          local_c8 = local_c8 + uVar8;
          uVar6 = local_c0 + local_c8;
          if (uVar5 < uVar6) {
            uVar2 = uVar5;
            if (uVar5 < local_c8) {
              do {
                iVar4 = FUN_143307250(&local_res8);
                if (iVar4 == 0) {
                  local_res8 = local_res8 + -1;
                }
                else if (iVar4 == 10) {
                  uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
                uVar2 = uVar5;
              } while (uVar5 < local_c8);
            }
            for (; uVar5 = uVar6, uVar2 < uVar6; uVar2 = uVar2 + 1) {
              do {
                while( true ) {
                  iVar4 = FUN_143307250(&local_res8);
                  if (iVar4 == 0) {
                    local_res8 = local_res8 + -1;
                  }
                  if (param_3 == '\0') break;
                  if (iVar4 != 10) goto LAB_1433a4d24;
                  FUN_1432c3700(param_2,10);
                }
              } while (iVar4 == 10);
LAB_1433a4d24:
              FUN_1432c3700(param_2,iVar4);
            }
          }
          FUN_1433f1180(local_88,0);
          cVar3 = Scaleform::Render::Text::HighlighterRangeIterator::IsFinished(local_88);
        }
        uVar8 = uVar8 + *(longlong *)(uVar9 + 8 + *param_1);
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar7 < (ulonglong)param_1[1]);
  }
  return param_2;
}



// FUNCTION 1433a4db0 FUN_1433a4db0 body=337 status=ok
// SIG undefined FUN_1433a4db0(void)

int FUN_1433a4db0(longlong param_1,int param_2,longlong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_38 [2];
  
  local_res18 = param_3;
  iVar1 = FUN_143307250(&local_res18);
  if (iVar1 == 0) {
    local_res18 = local_res18 + -1;
  }
  local_38[0] = (*(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffc) + 0xc;
  iVar7 = 0;
  do {
    while( true ) {
      iVar2 = FUN_143307250(local_38);
      if (iVar2 == 0) {
        return -1;
      }
      if (param_2 <= iVar7) break;
LAB_1433a4e23:
      if (iVar2 == 10) {
        iVar7 = iVar7 + -1;
      }
      iVar7 = iVar7 + 1;
    }
    if (param_4 == '\0') {
      iVar3 = iVar2 + -0x20;
      if (0x19 < iVar2 - 0x61U) {
        iVar3 = iVar2;
      }
      iVar4 = Scaleform::SFtoupper(iVar1);
      if (iVar3 != iVar4) goto LAB_1433a4e23;
    }
    else if (iVar2 != iVar1) goto LAB_1433a4e23;
    local_res10 = local_38[0];
    local_res8 = local_res18;
    do {
      iVar3 = FUN_143307250(&local_res8);
      iVar2 = -1;
      if (iVar3 == 0) {
        local_res8 = local_res8 + -1;
        iVar2 = -1;
      }
      do {
        iVar4 = FUN_143307250(&local_res10);
        if (iVar4 == 0) {
          local_res10 = local_res10 + -1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar4 == 10);
      if (iVar4 == 0) break;
      if (iVar3 == 0) {
        return iVar7;
      }
      if (param_4 == '\0') {
        iVar6 = iVar4 + -0x20;
        if (0x19 < iVar4 - 0x61U) {
          iVar6 = iVar4;
        }
        iVar5 = iVar3 + -0x20;
        if (0x19 < iVar3 - 0x61U) {
          iVar5 = iVar3;
        }
        bVar8 = iVar6 == iVar5;
      }
      else {
        bVar8 = iVar4 == iVar3;
      }
    } while (bVar8);
    if (iVar3 == 0) {
      return iVar7;
    }
    if (iVar4 == 0) {
      return -1;
    }
    iVar7 = (iVar7 - iVar2) + 1;
  } while( true );
}



// FUNCTION 1433a4f10 FUN_1433a4f10 body=238 status=ok
// SIG undefined FUN_1433a4f10(void)

undefined8 FUN_1433a4f10(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong local_res8;
  
  FUN_1432c2f70(&local_res8);
  uVar4 = 0;
  uVar5 = uVar4;
  uVar6 = uVar4;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + uVar6) + 0x180);
      if (lVar1 != 0) {
        if (param_2 < uVar4) {
LAB_1433a4f7a:
          if (uVar4 < param_3) {
LAB_1433a4f7f:
            cVar2 = Scaleform::Render::Text::Highlighter::IsAnyCharSelected
                              (lVar1,param_2 - uVar4,param_3 - uVar4);
            if (cVar2 != '\0') {
              uVar7 = 1;
              goto LAB_1433a4faf;
            }
          }
        }
        else {
          if (param_2 < *(longlong *)(*param_1 + 8 + uVar6) + uVar4) goto LAB_1433a4f7f;
          if (param_2 <= uVar4) goto LAB_1433a4f7a;
        }
        uVar4 = uVar4 + *(longlong *)(uVar6 + 8 + *param_1);
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 + 0x10;
    } while (uVar5 < (ulonglong)param_1[1]);
  }
  uVar7 = 0;
LAB_1433a4faf:
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return uVar7;
}



// FUNCTION 1433a5010 FUN_1433a5010 body=363 status=ok
// SIG undefined FUN_1433a5010(void)

void FUN_1433a5010(longlong *param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = 0;
  uVar5 = param_3 - param_2;
  uVar6 = uVar3;
  uVar8 = uVar3;
  if (param_1[1] != 0) {
    do {
      uVar7 = *(longlong *)(*param_1 + 8 + uVar8) + uVar3;
      if (uVar3 < param_2) {
LAB_1433a507e:
        if (param_2 < uVar7) {
LAB_1433a5087:
          lVar1 = *(longlong *)(*param_1 + uVar8);
          lVar2 = *(longlong *)(lVar1 + 0x180);
          if (lVar2 == 0) {
            lVar2 = FUN_1433a4520(lVar1);
          }
          lVar4 = 0;
          if (uVar3 <= param_2) {
            lVar4 = param_2 - uVar3;
          }
          uVar3 = *(longlong *)(uVar8 + 8 + *param_1) - lVar4;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          if (param_4 == '\0') {
            FUN_1433f1930(lVar2);
          }
          else {
            FUN_1433f1830();
          }
          uVar5 = uVar5 - uVar3;
          FUN_1433a4630(lVar1);
        }
      }
      else {
        if (uVar3 < param_3) goto LAB_1433a5087;
        if (uVar3 <= param_2) goto LAB_1433a507e;
      }
      uVar6 = uVar6 + 1;
      uVar3 = uVar7;
      uVar8 = uVar8 + 0x10;
    } while (uVar6 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 1433a5190 FUN_1433a5190 body=111 status=ok
// SIG undefined FUN_1433a5190(void)

void FUN_1433a5190(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 4) = *param_2;
  uVar3 = uVar2;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(uVar3 + *param_1) + 0x180);
      if (lVar1 != 0) {
        FUN_1433f1b10(lVar1,param_1 + 4);
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x10;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 1433a5210 FUN_1433a5210 body=1174 status=ok
// SIG undefined FUN_1433a5210(void)

int FUN_1433a5210(longlong *param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_1a8;
  float local_1a4;
  longlong *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  RefCountImpl *local_118;
  RefCountNTSImpl *pRStack_110;
  undefined8 local_108;
  longlong *local_f8 [2];
  uint local_e8;
  
  plVar9 = (longlong *)0x0;
  fVar23 = 3.4028235e+38;
  local_1a0 = (longlong *)0x0;
  plVar7 = plVar9;
  plVar10 = plVar9;
  plVar11 = plVar9;
  plVar13 = plVar9;
  fVar15 = 0.0;
  fVar22 = 0.0;
  local_res10 = param_2;
  if (param_1[1] != 0) {
    do {
      fVar3 = local_res10;
      plVar12 = *(longlong **)((longlong)plVar7 + *param_1);
      pfVar5 = (float *)(**(code **)(*plVar12 + 0x10))(plVar12);
      fVar17 = pfVar5[3];
      fVar20 = pfVar5[7];
      fVar18 = pfVar5[5] * *pfVar5 - pfVar5[4] * pfVar5[1];
      if (fVar18 == 0.0) {
        fVar17 = -fVar17;
        fVar21 = 1.0;
        fVar14 = 0.0;
        fVar18 = 0.0;
        fVar16 = 1.0;
      }
      else {
        fVar18 = 1.0 / fVar18;
        fVar16 = *pfVar5 * fVar18;
        fVar14 = -(pfVar5[1] * fVar18);
        fVar21 = pfVar5[5] * fVar18;
        fVar19 = fVar20 * fVar14;
        fVar18 = -(pfVar5[4] * fVar18);
        fVar20 = fVar20 * fVar16 + fVar17 * fVar18;
        fVar17 = -(fVar19 + fVar17 * fVar21);
      }
      fVar17 = fVar21 * fVar3 + fVar14 * param_3 + fVar17;
      fVar20 = fVar18 * fVar3 + fVar16 * param_3 + -fVar20;
      if ((((fVar17 <= *(float *)(plVar12 + 0x1f)) && (*(float *)(plVar12 + 0x1e) <= fVar17)) &&
          (fVar20 <= *(float *)((longlong)plVar12 + 0xfc))) &&
         (*(float *)((longlong)plVar12 + 0xf4) <= fVar20)) {
        iVar6 = (int)plVar10;
        goto LAB_1433a5474;
      }
      local_res8 = fVar17;
      local_resc = fVar20;
      FUN_1433a60e0(&local_1a8,plVar12 + 0x1e,&local_res8);
      fVar18 = local_1a4;
      fVar3 = local_1a8;
      fVar14 = _guard_xfg_dispatch_icall_nop
                         ((local_1a4 - fVar20) * (local_1a4 - fVar20) +
                          (local_1a8 - fVar17) * (local_1a8 - fVar17));
      fVar17 = fVar15;
      fVar20 = fVar22;
      if ((fVar14 < param_4) && (fVar14 < fVar23)) {
        plVar11 = plVar12;
        fVar17 = fVar3;
        fVar20 = fVar18;
        fVar23 = fVar14;
        local_1a0 = plVar10;
      }
      plVar12 = plVar11;
      plVar13 = (longlong *)((longlong)plVar13 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + *(longlong *)((longlong)plVar7 + *param_1 + 8));
      plVar7 = plVar7 + 2;
      plVar11 = plVar12;
      fVar15 = fVar17;
      fVar22 = fVar20;
    } while (plVar13 < (longlong *)param_1[1]);
    iVar6 = (int)local_1a0;
LAB_1433a5474:
    if (plVar12 != (longlong *)0x0) {
      fVar17 = fVar17 - *(float *)(plVar12 + 0x1e);
      local_resc = fVar20 - *(float *)((longlong)plVar12 + 0xf4);
      local_res8 = fVar17;
      FUN_1433f3440(plVar12 + 0x18,local_f8,&local_res8);
      if (((local_f8[0] != (longlong *)0x0) && ((ulonglong)local_e8 < (ulonglong)local_f8[0][1])) &&
         (-1 < (int)local_e8)) {
        piVar2 = *(int **)(*local_f8[0] + (ulonglong)local_e8 * 8);
        fVar15 = (float)piVar2[3];
        if (fVar15 <= fVar17) {
          iVar1 = *piVar2;
          if (iVar1 < 0) {
            uVar4 = (uint)*(ushort *)(piVar2 + 5);
          }
          else {
            uVar4 = piVar2[5];
          }
          if (fVar17 <= (float)(int)uVar4 + fVar15) {
            if (iVar1 < 0) {
              uVar4 = (uint)*(byte *)(piVar2 + 7);
            }
            else {
              uVar4 = piVar2[1];
            }
            lVar8 = 0x2a;
            if (iVar1 < 0) {
              lVar8 = 0x1e;
            }
            local_188 = FUN_1433f23a0(piVar2);
            local_180 = 0;
            local_198 = lVar8 + (longlong)piVar2;
            local_178 = 0;
            local_170 = 0;
            local_190 = local_198 + (ulonglong)uVar4 * 8;
            local_168 = 0xffffffffffffffff;
            local_160 = 0;
            local_158 = 0xffffffffffffffff;
            local_150 = 0;
            local_148 = 0;
            local_140 = 0;
            local_138 = 0;
            local_130 = 0;
            local_128 = 0;
            local_120 = 0;
            local_118 = (RefCountImpl *)0x0;
            pRStack_110 = (RefCountNTSImpl *)0x0;
            local_108 = 0;
            FUN_1433f2020(&local_198);
            plVar7 = plVar9;
            while ((local_198 != 0 && (local_198 < local_190))) {
              uVar4 = (uint)*(ushort *)(local_198 + 2);
              if ((*(byte *)(local_198 + 6) >> 6 & 1) != 0) {
                uVar4 = -(uint)*(ushort *)(local_198 + 2);
              }
              uVar4 = (int)plVar7 + uVar4;
              plVar7 = (longlong *)(ulonglong)uVar4;
              if (fVar17 - fVar15 < (float)(int)uVar4) break;
              plVar9 = (longlong *)
                       (ulonglong)((int)plVar9 + (uint)(*(ushort *)(local_198 + 4) >> 0xc));
              Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_198);
            }
            uVar4 = piVar2[2];
            if ((*piVar2 < 0) && (uVar4 = uVar4 & 0xffffff, uVar4 == 0xffffff)) {
              uVar4 = 0xffffffff;
            }
            iVar6 = (int)plVar9 + uVar4 + iVar6;
            if (pRStack_110 != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release(pRStack_110);
            }
            if (local_118 == (RefCountImpl *)0x0) {
              return iVar6;
            }
            Scaleform::RefCountImpl::Release(local_118);
            return iVar6;
          }
        }
      }
    }
  }
  return -1;
}



// FUNCTION 1433a56b0 FUN_1433a56b0 body=1301 status=ok
// SIG undefined FUN_1433a56b0(void)

void FUN_1433a56b0(longlong *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  ushort *puVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  float local_1b8;
  float local_1b4;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  undefined8 local_1a0;
  float *local_198;
  longlong *local_190;
  ushort *local_188;
  ushort *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  RefCountImpl *local_108;
  RefCountNTSImpl *pRStack_100;
  undefined8 local_f8;
  Rect<float> local_e8 [168];
  
  if (param_2 != (longlong *)0x0) {
    local_1d0 = param_1[1];
    uVar17 = 0;
    if (local_1d0 != 0) {
      local_1d8 = 0;
LAB_1433a5770:
      fVar23 = 0.0;
      plVar18 = *(longlong **)(local_1d8 + *param_1);
      local_198 = (float *)(**(code **)(*plVar18 + 0x10))(plVar18);
      local_190 = plVar18 + 0x18;
      uVar19 = 0;
      fVar1 = *local_198;
      fVar2 = local_198[1];
      fVar3 = local_198[5];
      fVar4 = local_198[4];
      fVar5 = local_198[3];
      fVar6 = local_198[7];
      do {
        do {
          if (((local_190 == (longlong *)0x0) || ((ulonglong)local_190[1] <= uVar19)) ||
             ((int)uVar19 < 0)) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            local_1d8 = local_1d8 + 0x10;
            local_1d0 = local_1d0 + -1;
            if (local_1d0 == 0) {
              return;
            }
            goto LAB_1433a5770;
          }
          piVar9 = *(int **)(*local_190 + uVar19 * 8);
          plVar18 = (longlong *)0x0;
          iVar7 = *piVar9;
          iVar8 = piVar9[4];
          fVar21 = (float)piVar9[3];
          if (fVar23 <= (float)piVar9[3]) {
            fVar21 = fVar23;
          }
          fVar23 = fVar21;
          if (iVar7 < 0) {
            iVar13 = (int)*(char *)((longlong)piVar9 + 0x1d);
          }
          else {
            iVar13 = (int)(short)piVar9[10];
          }
          if (iVar7 < 0) {
            uVar14 = (uint)*(byte *)(piVar9 + 7);
          }
          else {
            uVar14 = piVar9[1];
          }
          lVar16 = 0x2a;
          if (iVar7 < 0) {
            lVar16 = 0x1e;
          }
          local_178 = FUN_1433f23a0(piVar9);
          local_170 = 0;
          local_188 = (ushort *)(lVar16 + (longlong)piVar9);
          local_168 = 0;
          local_160 = 0;
          local_180 = local_188 + (ulonglong)uVar14 * 4;
          local_158 = 0xffffffffffffffff;
          local_150 = 0;
          local_148 = 0xffffffffffffffff;
          local_140 = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          local_110 = 0;
          local_108 = (RefCountImpl *)0x0;
          pRStack_100 = (RefCountNTSImpl *)0x0;
          local_f8 = 0;
          FUN_1433f2020(&local_188);
          plVar20 = plVar18;
          if (local_108 != (RefCountImpl *)0x0) {
            plVar20 = *(longlong **)(local_108 + 0x30);
          }
          param_2[8] = (longlong)plVar20;
          *(undefined4 *)((longlong)param_2 + 0x54) = (undefined4)local_118;
          while ((puVar11 = local_188, local_188 != (ushort *)0x0 && (local_188 < local_180))) {
            if ((param_3 <= uVar17) && (uVar17 < param_4)) {
              param_2[9] = (longlong)plVar18;
              fVar21 = (float)(local_188[2] & 0xfff);
              if ((local_188[3] & 0x10) != 0) {
                fVar21 = fVar21 * 0.0625;
              }
              *(float *)(param_2 + 10) = fVar21;
              local_1f8 = 0x3f800000;
              uStack_1f0 = 0;
              local_1e8 = 0x3f80000000000000;
              uStack_1e0 = 0;
              fVar21 = _guard_xfg_dispatch_icall_nop(local_198[4],*local_198);
              fVar22 = _guard_xfg_dispatch_icall_nop(fVar21);
              local_1a8 = _guard_xfg_dispatch_icall_nop(fVar21);
              local_1b4 = -local_1a8;
              local_1b0 = 0;
              local_1a0 = 0;
              local_1b8 = fVar22;
              local_1a4 = fVar22;
              Scaleform::Render::Matrix2x4<float>::Append
                        ((Matrix2x4<float> *)&local_1f8,(Matrix2x4<float> *)&local_1b8);
              fVar21 = uStack_1f0._4_4_ + fVar2 * 0.0 + fVar1 * 0.0 + fVar5 + fVar23;
              *(undefined4 *)(param_2 + 2) = (undefined4)local_1f8;
              fVar22 = uStack_1e0._4_4_ +
                       fVar3 * 0.0 + fVar4 * 0.0 + fVar6 + (float)(iVar13 + iVar8);
              *(undefined4 *)((longlong)param_2 + 0x14) = local_1f8._4_4_;
              *(undefined4 *)(param_2 + 3) = (undefined4)uStack_1f0;
              *(float *)((longlong)param_2 + 0x1c) = fVar21;
              *(undefined4 *)(param_2 + 4) = (undefined4)local_1e8;
              *(undefined4 *)((longlong)param_2 + 0x24) = local_1e8._4_4_;
              local_e8._0_16_ = ZEXT416(0);
              *(undefined4 *)(param_2 + 5) = (undefined4)uStack_1e0;
              *(float *)((longlong)param_2 + 0x2c) = fVar22;
              uStack_1f0 = CONCAT44(fVar21,(undefined4)uStack_1f0);
              uStack_1e0 = CONCAT44(fVar22,(undefined4)uStack_1e0);
              if (*puVar11 < 0xffff) {
                uVar15 = (ulonglong)*puVar11;
              }
              else {
                uVar15 = 0xffffffff;
              }
              (**(code **)(*plVar20 + 0x38))(plVar20,uVar15,local_e8);
              Scaleform::Render::Matrix2x4<float>::EncloseTransform
                        ((Matrix2x4<float> *)&local_1f8,(Rect<float> *)&local_1c8,local_e8);
              param_2[6] = local_1c8;
              param_2[7] = lStack_1c0;
              uVar12 = FUN_1433a4f10(param_1,uVar17,uVar17 + 1);
              *(undefined1 *)(param_2 + 0xb) = uVar12;
              (**(code **)(*param_2 + 8))(param_2);
              plVar18 = (longlong *)((longlong)plVar18 + 1);
            }
            uVar14 = (uint)puVar11[1];
            if (((byte)puVar11[3] >> 6 & 1) != 0) {
              uVar14 = -(uint)puVar11[1];
            }
            uVar17 = uVar17 + 1;
            fVar23 = fVar23 + (float)(int)uVar14;
            Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_188);
          }
          if (pRStack_100 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRStack_100);
          }
          if (local_108 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_108);
          }
        } while ((ulonglong)local_190[1] <= uVar19);
        uVar19 = (ulonglong)((int)uVar19 + 1);
      } while( true );
    }
  }
  return;
}



// FUNCTION 1433a5bd0 FUN_1433a5bd0 body=330 status=ok
// SIG undefined FUN_1433a5bd0(void)

void FUN_1433a5bd0(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar6 = *(uint *)(lVar5 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar6 + 1) + *(longlong *)(lVar5 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar6 + *(longlong *)(lVar5 + 0x60));
  *(uint *)(lVar5 + 0x4c) = uVar6 + 2;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144f8bf30;
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 0x40000;
    *puVar4 = &PTR_FUN_145b04790;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0x3f800000;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x44) = 0x3f800000;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *(undefined1 *)(puVar4 + 0xd) = 0;
  }
  uVar6 = (uint)CONCAT11(uVar1,uVar2);
  FUN_143300df0(param_1 + 0x20,"TextCharacter, id = %d\n",uVar6);
  FUN_1433a3260(puVar4,param_1,*param_2);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    local_res8[0] = uVar6;
    FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res8,puVar4);
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1432de450(puVar4);
  }
  return;
}



// FUNCTION 1433a5d20 FUN_1433a5d20 body=91 status=ok
// SIG undefined FUN_1433a5d20(void)

float FUN_1433a5d20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 0.0;
  fVar3 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  if ((fVar3 != 0.0) || (fVar2 != 0.0)) {
    fVar1 = ((param_3[1] - param_1[1]) * fVar2 + (*param_3 - *param_1) * fVar3) /
            (fVar2 * fVar2 + fVar3 * fVar3);
  }
  return fVar1;
}



// FUNCTION 1433a5d80 FUN_1433a5d80 body=104 status=ok
// SIG undefined FUN_1433a5d80(void)

undefined8 * FUN_1433a5d80(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b047e0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d) = 0xff0000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43) = 0;
  FUN_1433f1e80();
  return param_1;
}



// FUNCTION 1433a5df0 FUN_1433a5df0 body=214 status=ok
// SIG undefined FUN_1433a5df0(void)

void FUN_1433a5df0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x7d8) != param_1 + 0x6d8) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(longlong *)(param_1 + 0x7d8) = param_1 + 0x6d8;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  if (*(longlong *)(param_1 + 0x6b8) != param_1 + 0x5b8) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(longlong *)(param_1 + 0x6b8) = param_1 + 0x5b8;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  if (*(longlong *)(param_1 + 0x598) != param_1 + 0x498) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(longlong *)(param_1 + 0x598) = param_1 + 0x498;
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (*(longlong *)(param_1 + 0x478) != param_1 + 0x78) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(longlong *)(param_1 + 0x478) = param_1 + 0x78;
  return;
}



// FUNCTION 1433a5ed0 FUN_1433a5ed0 body=122 status=ok
// SIG undefined FUN_1433a5ed0(void)

undefined4 * FUN_1433a5ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  if (*(RefCountImpl **)(param_2 + 10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 10));
  }
  if (*(RefCountImpl **)(param_1 + 10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 10));
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1433a5f60 FUN_1433a5f60 body=89 status=ok
// SIG undefined FUN_1433a5f60(void)

undefined8 FUN_1433a5f60(undefined8 param_1,ulonglong param_2)

{
  FUN_1433a41c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,400);
  }
  return param_1;
}



// FUNCTION 1433a5fc0 FUN_1433a5fc0 body=135 status=ok
// SIG undefined FUN_1433a5fc0(void)

undefined8 * FUN_1433a5fc0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1433a3040(param_1 + 10);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[10]);
  *param_1 = &PTR_FUN_144f8bf30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1433a6050 FUN_1433a6050 body=106 status=ok
// SIG undefined FUN_1433a6050(void)

RefCountNTSImplCore * FUN_1433a6050(RefCountNTSImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1433a60e0 FUN_1433a60e0 body=493 status=ok
// SIG undefined FUN_1433a60e0(void)

float * FUN_1433a60e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  
  fVar3 = param_2[3];
  fVar6 = param_2[2];
  fVar4 = param_2[1];
  fVar1 = *param_2;
  bVar2 = 0;
  if (fVar1 < *param_3) {
    bVar2 = (fVar6 <= *param_3) + 1;
  }
  if (fVar4 < param_3[1]) {
    if (param_3[1] < fVar3) {
      bVar2 = bVar2 | 0x10;
    }
    else {
      bVar2 = bVar2 | 0x20;
    }
  }
  local_88 = fVar1;
  local_84 = fVar4;
  local_78 = fVar1;
  local_74 = fVar3;
  local_68 = fVar6;
  local_64 = fVar3;
  local_58 = fVar6;
  local_54 = fVar4;
  switch(bVar2) {
  case 0:
    *param_1 = fVar1;
    param_1[1] = fVar4;
    break;
  case 1:
    fVar3 = (float)FUN_1433a5d20(&local_88,&local_58);
    *param_1 = (fVar6 - fVar1) * fVar3 + fVar1;
    param_1[1] = (fVar4 - fVar4) * fVar3 + fVar4;
    break;
  case 2:
    *param_1 = fVar6;
    param_1[1] = fVar4;
    break;
  default:
    *param_1 = 3.4028235e+38;
    param_1[1] = 3.4028235e+38;
    break;
  case 0x10:
    fVar5 = (float)FUN_1433a5d20(&local_88,&local_78);
    fVar6 = (fVar1 - fVar1) * fVar5 + fVar1;
    goto LAB_1433a61c6;
  case 0x11:
  case 0x21:
    fVar4 = (float)FUN_1433a5d20(&local_78,&local_68);
    *param_1 = (fVar6 - fVar1) * fVar4 + fVar1;
    param_1[1] = (fVar3 - fVar3) * fVar4 + fVar3;
    break;
  case 0x12:
    fVar5 = (float)FUN_1433a5d20(&local_58,&local_68);
    fVar6 = (fVar6 - fVar6) * fVar5 + fVar6;
LAB_1433a61c6:
    *param_1 = fVar6;
    param_1[1] = (fVar3 - fVar4) * fVar5 + fVar4;
    break;
  case 0x20:
    *param_1 = fVar1;
    param_1[1] = fVar3;
    break;
  case 0x22:
    *param_1 = fVar6;
    param_1[1] = fVar3;
  }
  return param_1;
}



// FUNCTION 1433a6320 FUN_1433a6320 body=65 status=ok
// SIG undefined FUN_1433a6320(void)

Rect<float> * FUN_1433a6320(longlong param_1,Rect<float> *param_2,Matrix2x4<float> *param_3)

{
  Rect<float> *pRVar1;
  undefined1 local_18 [16];
  
  pRVar1 = (Rect<float> *)
           (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))
                     (*(longlong **)(param_1 + 0x90),local_18,0);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,param_2,pRVar1);
  return param_2;
}



// FUNCTION 1433a6390 FUN_1433a6390 body=65 status=ok
// SIG undefined FUN_1433a6390(void)

Rect<float> * FUN_1433a6390(longlong param_1,Rect<float> *param_2,Matrix2x4<float> *param_3)

{
  Rect<float> *pRVar1;
  undefined1 local_18 [16];
  
  pRVar1 = (Rect<float> *)
           (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))
                     (*(longlong **)(param_1 + 0x90),local_18,0);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,param_2,pRVar1);
  return param_2;
}



// FUNCTION 1433a63f0 GetRotation body=14 status=ok
// SIG float GetRotation(Matrix2x4<float> * this)

/* public: float __cdecl Scaleform::Render::Matrix2x4<float>::GetRotation(void)const __ptr64 */

float __thiscall Scaleform::Render::Matrix2x4<float>::GetRotation(Matrix2x4<float> *this)

{
  float fVar1;
  
                    /* 0x33a63f0  201  ?GetRotation@?$Matrix2x4@M@Render@Scaleform@@QEBAMXZ */
  fVar1 = ::_guard_xfg_dispatch_icall_nop(*(float *)(this + 0x10),*(float *)this);
  return fVar1;
}



// FUNCTION 1433a6400 FUN_1433a6400 body=55 status=ok
// SIG undefined FUN_1433a6400(void)

int FUN_1433a6400(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14336b9a0(param_1,*(undefined8 *)(param_1 + 0x90),param_2,
                        *(undefined1 *)((longlong)param_3 + 0x24),param_3[2]);
  *param_3 = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1433a6460 FUN_1433a6460 body=165 status=ok
// SIG undefined FUN_1433a6460(void)

void FUN_1433a6460(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x102;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433a6510 FUN_1433a6510 body=136 status=ok
// SIG undefined FUN_1433a6510(void)

void FUN_1433a6510(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1433a6557;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1433a6557;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1433a6460(param_1,param_1,uVar4);
LAB_1433a6557:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined4 *)(*param_1 + uVar1 * 8);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 2;
    }
  }
  return;
}



// FUNCTION 1433a65a0 FUN_1433a65a0 body=180 status=ok
// SIG undefined FUN_1433a65a0(void)

void FUN_1433a65a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x10);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -2;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5ad0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5ad0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433a6660 SFtoupper body=14 status=ok
// SIG undefined SFtoupper(void)

int Scaleform::SFtoupper(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < param_1 - 0x61U) {
    iVar1 = param_1;
  }
  return iVar1;
}



// FUNCTION 1433a6670 FUN_1433a6670 body=114 status=ok
// SIG undefined FUN_1433a6670(void)

void FUN_1433a6670(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x18);
  FUN_1433a5ed0(param_1 + 0x140,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x17c) = *(undefined1 *)(param_2 + 0x5c);
  FUN_1433a4630(param_1);
  return;
}



// FUNCTION 1433a66f0 FUN_1433a66f0 body=282 status=ok
// SIG undefined FUN_1433a66f0(void)

undefined8 *
FUN_1433a66f0(undefined8 *param_1,RefCountImpl *param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f70a80;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_145b04c30;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[6] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_5;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  local_38[0] = param_7;
  local_20 = param_8;
  local_30 = 0;
  uStack_28 = 0;
  local_18 = 3;
  local_30 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  uVar1 = (**(code **)(*param_3 + 0x40))(param_3,param_9,local_38,param_6,param_10);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 1433a6810 FUN_1433a6810 body=195 status=ok
// SIG undefined FUN_1433a6810(void)

longlong FUN_1433a6810(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if (param_1[2] != 0) {
    plVar3 = (longlong *)0x0;
    if (*(longlong *)(param_1[2] + 0x28) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1[2] + 0x28) + 0x10);
    }
    if (plVar3 == param_2) {
      return param_1[2];
    }
  }
  param_1[2] = 0;
  lVar5 = *param_2;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar5 = (**(code **)(lVar5 + 0x10))(param_2,uVar2,1,uVar4,uVar1,param_1,0);
  FStringTable::SetOwnerAsset(param_1,lVar5);
  return lVar5;
}



// FUNCTION 1433a68e0 FUN_1433a68e0 body=163 status=ok
// SIG undefined FUN_1433a68e0(void)

void FUN_1433a68e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40);
  plVar3 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))
                     (*(longlong **)(param_1 + 0x38),lVar1,lVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_1433a7230(*(undefined4 *)(param_1 + 0x44),plVar3,*(undefined8 *)(param_1 + 0x30),
                  (ulonglong)*(uint *)(param_1 + 0x40) + lVar1,
                  lVar2 - (ulonglong)*(uint *)(param_1 + 0x40),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1433a6990 FUN_1433a6990 body=118 status=ok
// SIG undefined FUN_1433a6990(void)

undefined8 *
FUN_1433a6990(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  
  FUN_1433cef20(param_1,param_3,param_6,param_8);
  *param_1 = &PTR_FUN_145b04d00;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[7] = param_2;
  *(undefined2 *)(param_1 + 8) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_5;
  uVar1 = param_4[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = *param_4;
  *(undefined4 *)(param_1 + 3) = uVar1;
  return param_1;
}



// FUNCTION 1433a6a10 FUN_1433a6a10 body=269 status=ok
// SIG undefined FUN_1433a6a10(void)

undefined1 FUN_1433a6a10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 uVar2;
  RefCountImpl *this;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  RefCountImpl *local_28;
  uint local_20;
  
  local_38 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x44);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *(undefined4 *)(param_1 + 0x18);
  local_34 = iVar1;
  this = (RefCountImpl *)
         (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                   (*(longlong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  local_20 = (uint)*(ushort *)(param_1 + 0x40);
  local_28 = this;
  if (iVar1 == 0) {
    uVar2 = FUN_1433a78d0(&local_38,param_2,param_3,param_4);
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_1433a7e00(&local_38,param_2,param_3,param_4);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_1433a7fd0(&local_38,param_2,param_3,param_4);
  }
  else if (iVar1 == 3) {
    uVar2 = FUN_1433a7af0(&local_38,param_2,param_3,param_4);
  }
  else if (iVar1 == 4) {
    uVar2 = FUN_1433a8120(&local_38,param_2,param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar2;
}



// FUNCTION 1433a6b30 FUN_1433a6b30 body=310 status=ok
// SIG undefined FUN_1433a6b30(void)

undefined8 FUN_1433a6b30(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  cVar3 = (**(code **)(*param_1 + 0x58))();
  if (cVar3 == '\0') {
    uVar6 = FUN_1432cb240(param_1,param_2);
    return uVar6;
  }
  plVar7 = DAT_146b62f28;
  if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 2);
  }
  lVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,0x68);
  if (lVar5 != 0) {
    lVar8 = *(longlong *)(param_2 + 6);
    lVar1 = param_1[4];
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(param_2 + 4) + 0x10, *(longlong *)(param_2 + 4) == 0)
       ) {
      lVar8 = 0;
    }
    lVar2 = param_1[7];
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar6 = FUN_1433a6e20(lVar5,lVar2,uVar4,uVar6,*(undefined4 *)((longlong)param_1 + 0x44),
                          (short)param_1[8],*param_2,lVar8,lVar1,param_1[5],param_1[6]);
    return uVar6;
  }
  return 0;
}



// FUNCTION 1433a6c70 FUN_1433a6c70 body=423 status=ok
// SIG undefined FUN_1433a6c70(void)

undefined1 FUN_1433a6c70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  RefCountImpl *this;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  RefCountImpl *local_68;
  uint local_60;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  local_78 = *(undefined4 *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 100);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_70 = *(undefined4 *)(param_1 + 0x2c);
  local_6c = *(undefined4 *)(param_1 + 0x30);
  local_68 = (RefCountImpl *)0x0;
  local_58 = &PTR_FUN_145af8dd8;
  local_50 = 1;
  local_74 = iVar4;
  FUN_1432c2fb0(&local_48,&DAT_145af3922);
  local_38 = (int)uVar1;
  local_34 = 0;
  if ((lVar2 == 0) || (local_30 = 1, local_38 < 1)) {
    local_30 = 0;
  }
  local_40 = lVar2;
  this = (RefCountImpl *)
         (**(code **)(**(longlong **)(param_1 + 0x58) + 8))
                   (*(longlong **)(param_1 + 0x58),&local_58);
  local_60 = (uint)*(ushort *)(param_1 + 0x60);
  local_68 = this;
  if (iVar4 == 0) {
    uVar3 = FUN_1433a78d0(&local_78,param_2,param_3,param_4);
  }
  else if (iVar4 == 1) {
    uVar3 = FUN_1433a7e00(&local_78,param_2,param_3,param_4);
  }
  else if (iVar4 == 2) {
    uVar3 = FUN_1433a7fd0(&local_78,param_2,param_3,param_4);
  }
  else if (iVar4 == 3) {
    uVar3 = FUN_1433a7af0(&local_78,param_2,param_3,param_4);
  }
  else if (iVar4 == 4) {
    uVar3 = FUN_1433a8120(&local_78,param_2,param_3,param_4);
  }
  else {
    uVar3 = 0;
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_48 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_58);
  return uVar3;
}



// FUNCTION 1433a6e20 FUN_1433a6e20 body=150 status=ok
// SIG undefined FUN_1433a6e20(void)

undefined8 *
FUN_1433a6e20(undefined8 *param_1,RefCountImpl *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined2 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  FUN_1433cf020(param_1,param_3,param_4,param_7,param_8,param_9,param_10,param_11);
  *param_1 = &PTR_FUN_145b04d70;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[0xb] = param_2;
  *(undefined2 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_5;
  return param_1;
}



// FUNCTION 1433a6ec0 FUN_1433a6ec0 body=413 status=ok
// SIG undefined FUN_1433a6ec0(void)

longlong FUN_1433a6ec0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  FUN_1433cf360();
  FUN_1433cf360(param_1 + 0x840,9,param_3,9,param_1 + 0x880,0x400);
  FUN_1433cf360(param_1 + 0xc80,1,param_3 + 2,1,param_1 + 0xcc0,0x800);
  FUN_1433cf360(param_1 + 0x14c0,1,param_3 + 2,1,param_1 + 0x1500,0x800);
  FUN_1433cf360(param_1 + 0x1d00,1,param_3 + 2,1,param_1 + 0x1d40,0x800);
  FUN_1433cf360(param_1 + 0x2558,1,param_3,param_4,param_1 + 0x2598,0x1000);
  *(undefined8 *)(param_1 + 0x3598) = 0;
  *(undefined8 *)(param_1 + 0x35a0) = param_2;
  *(int *)(param_1 + 0x35a8) = param_3;
  *(undefined1 *)(param_1 + 0x35ac) = 1;
  *(longlong *)(param_1 + 0x2540) = param_1 + 0xc80;
  *(longlong *)(param_1 + 0x2548) = param_1 + 0x14c0;
  *(longlong *)(param_1 + 0x2550) = param_1 + 0x1d00;
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xc90),0,*(size_t *)(param_1 + 0xca0));
  return param_1;
}



// FUNCTION 1433a7060 FUN_1433a7060 body=103 status=ok
// SIG undefined FUN_1433a7060(void)

void FUN_1433a7060(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  uVar2 = *(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x38));
  FUN_1432caa70(param_1);
  return;
}



// FUNCTION 1433a70d0 FUN_1433a70d0 body=121 status=ok
// SIG undefined FUN_1433a70d0(void)

longlong FUN_1433a70d0(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  FUN_1432caa70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433a7150 FUN_1433a7150 body=89 status=ok
// SIG undefined FUN_1433a7150(void)

undefined8 FUN_1433a7150(undefined8 param_1,ulonglong param_2)

{
  FUN_1433a7060();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1433a71b0 FUN_1433a71b0 body=116 status=ok
// SIG undefined FUN_1433a71b0(void)

undefined8 * FUN_1433a71b0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b04d00;
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  FUN_1433cefa0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433a7230 FUN_1433a7230 body=930 status=ok
// SIG undefined FUN_1433a7230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_1433a7230(undefined4 param_1,longlong *param_2,longlong *param_3,longlong param_4,int param_5,
             longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined4 *_Dst;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  RefCountImpl *pRVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int local_res10;
  uint local_res14;
  undefined **local_3608;
  undefined8 local_3600;
  ulonglong local_35f8;
  longlong local_35f0;
  int local_35e8;
  undefined4 local_35e4;
  undefined1 local_35e0;
  undefined1 local_35d8 [16];
  longlong local_35c8;
  undefined1 local_2d98 [16];
  longlong local_2d88;
  undefined4 local_2d78;
  undefined1 local_2958 [2112];
  undefined1 local_2118 [2112];
  undefined1 local_18d8 [2112];
  longlong local_1098 [3];
  undefined1 local_1080 [4160];
  RefCountImpl *local_40;
  longlong *local_38;
  uint local_30;
  undefined1 local_2c;
  
  (**(code **)(*param_2 + 0x30))(param_2,&local_res10);
  local_3608 = &PTR_FUN_145af8dd8;
  local_3600 = 1;
  FUN_1432c2fb0(&local_35f8,&DAT_145af3922);
  local_35e8 = param_5;
  local_35e4 = 0;
  if ((param_4 == 0) || (local_35e0 = 1, param_5 < 1)) {
    local_35e0 = 0;
  }
  local_35f0 = param_4;
  FUN_1433a6ec0(local_35d8,param_2,local_res10,param_1);
  pRVar7 = (RefCountImpl *)(**(code **)(*param_3 + 8))(param_3);
  if (local_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_40);
  }
  local_40 = pRVar7;
  cVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  if (cVar5 == '\0') {
    uVar14 = 1;
    uVar15 = 0;
    uVar9 = 0;
    if (local_res14 != 0xffffffff) {
      do {
        lVar3 = local_2d88;
        lVar2 = local_35c8;
        _Dst = *(undefined4 **)(local_1098[uVar14] + 0x10);
        *_Dst = 0;
        _Dst[local_res10 + 1] = 0;
        if (uVar9 < local_res14) {
          cVar5 = (**(code **)(*local_38 + 0x38))(local_38,local_35c8);
          if ((cVar5 == '\0') ||
             (iVar6 = (**(code **)(*(longlong *)local_40 + 0x50))(local_40,lVar3,local_2d78),
             iVar6 < 1)) goto LAB_1433a74f3;
          uVar13 = 0;
          if (local_30 != 0) {
            uVar10 = 2;
            uVar11 = 2;
            do {
              iVar6 = (int)uVar10;
              *(undefined1 *)((longlong)_Dst + (ulonglong)(iVar6 - 2) + 4) =
                   *(undefined1 *)((ulonglong)(uVar11 - 2) + lVar2);
              *(undefined1 *)((longlong)_Dst + (ulonglong)(iVar6 - 1) + 4) =
                   *(undefined1 *)((ulonglong)(uVar11 - 1) + lVar2);
              uVar8 = (ulonglong)uVar11;
              uVar11 = uVar11 + 3;
              *(undefined1 *)((longlong)_Dst + uVar10 + 4) = *(undefined1 *)(uVar8 + lVar2);
              puVar1 = (undefined1 *)(uVar13 + lVar3);
              uVar10 = (ulonglong)(iVar6 + 4);
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
              *(undefined1 *)((longlong)_Dst + (ulonglong)(iVar6 + 1) + 4) = *puVar1;
            } while (uVar12 < local_30);
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,0,*(size_t *)(local_1098[uVar14] + 0x20));
        }
        uVar15 = uVar15 + 1;
        if (1 < uVar15) {
          FUN_1433a75e0(local_35d8);
          FUN_1433cf480(local_1080,
                        (ulonglong)(uVar9 - 1) * *(longlong *)(*(longlong *)(param_6 + 0x10) + 8) +
                        *(longlong *)(*(longlong *)(param_6 + 0x10) + 0x18),0,param_7,param_8);
        }
        lVar2 = local_1098[2];
        if ((int)uVar14 == 2) {
          local_1098[2] = local_1098[0];
          local_1098[0] = local_1098[1];
          local_1098[1] = lVar2;
        }
        else {
          uVar14 = (ulonglong)((int)uVar14 + 1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_res14 + 1);
    }
  }
  else {
LAB_1433a74f3:
    local_2c = 0;
  }
  (**(code **)*param_2)(param_2,1);
  uVar4 = local_2c;
  if (local_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_40);
  }
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1080);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_18d8);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2118);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2958);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2d98);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_35d8);
  iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_35f8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar6 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_35f8 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_3608);
  return uVar4;
}



// FUNCTION 1433a75e0 FUN_1433a75e0 body=737 status=ok
// SIG undefined FUN_1433a75e0(void)

void FUN_1433a75e0(longlong param_1)

{
  ushort uVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  _Dst = *(void **)(param_1 + 0x2568);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2540) + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2548) + 0x10);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2550) + 0x10);
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)(lVar3 + 4),*(size_t *)(param_1 + 0x2578));
  uVar12 = 0;
  if (*(int *)(param_1 + 0x35a8) != 0) {
    uVar13 = 0;
    do {
      bVar9 = *(byte *)(uVar13 + 3 + (longlong)_Dst);
      if (bVar9 < 0x10) {
        uVar10 = (uint)*(byte *)(uVar13 + 0xb + lVar4) + (uint)*(byte *)(uVar13 + 3 + lVar4) +
                 (uint)*(byte *)(lVar3 + 0xb + uVar13) + (uint)*(byte *)(lVar3 + 3 + uVar13) +
                 (uint)*(byte *)(uVar13 + 0xb + lVar2) + (uint)*(byte *)(uVar13 + 3 + lVar2) +
                 (uint)*(byte *)(uVar13 + 7 + lVar4) + (uint)*(byte *)(uVar13 + 7 + lVar2) +
                 (uint)*(byte *)(lVar3 + 7 + uVar13);
        if (uVar10 != 0) {
          uVar5 = ((uint)*(byte *)(uVar13 + 8 + lVar4) * 0x100 +
                   (uint)*(byte *)(lVar3 + uVar13) * 0x100 +
                   (uint)*(byte *)(lVar3 + 4 + uVar13) * 0x100 +
                   (uint)*(byte *)(uVar13 + 8 + lVar2) * 0x100 +
                   (uint)*(byte *)(uVar13 + lVar2) * 0x100 +
                   (uint)*(byte *)(uVar13 + 4 + lVar4) * 0x100 +
                   (uint)*(byte *)(uVar13 + 4 + lVar2) * 0x100 +
                   (uint)*(byte *)(uVar13 + lVar4) * 0x100 +
                  (uint)*(byte *)(lVar3 + 8 + uVar13) * 0x100) / uVar10;
          uVar6 = ((uint)*(byte *)(uVar13 + 9 + lVar2) * 0x100 +
                   (uint)*(byte *)(uVar13 + 9 + lVar4) * 0x100 +
                   (uint)*(byte *)(uVar13 + 1 + lVar4) * 0x100 +
                   (uint)*(byte *)(lVar3 + 9 + uVar13) * 0x100 +
                   (uint)*(byte *)(lVar3 + 1 + uVar13) * 0x100 +
                   (uint)*(byte *)(uVar13 + 1 + lVar2) * 0x100 +
                   (uint)*(byte *)(uVar13 + 5 + lVar4) * 0x100 +
                   (uint)*(byte *)(uVar13 + 5 + lVar2) * 0x100 +
                  (uint)*(byte *)(lVar3 + 5 + uVar13) * 0x100) / uVar10;
          uVar10 = ((uint)*(byte *)(uVar13 + 10 + lVar4) * 0x100 +
                    (uint)*(byte *)(uVar13 + 2 + lVar4) * 0x100 +
                    (uint)*(byte *)(lVar3 + 10 + uVar13) * 0x100 +
                    (uint)*(byte *)(lVar3 + 2 + uVar13) * 0x100 +
                    (uint)*(byte *)(uVar13 + 10 + lVar2) * 0x100 +
                    (uint)*(byte *)(uVar13 + 2 + lVar2) * 0x100 +
                    (uint)*(byte *)(uVar13 + 6 + lVar4) * 0x100 +
                    (uint)*(byte *)(uVar13 + 6 + lVar2) * 0x100 +
                   (uint)*(byte *)(lVar3 + 6 + uVar13) * 0x100) / uVar10;
          uVar11 = 0xff;
          if (uVar5 < 0x100) {
            uVar11 = (char)uVar5;
          }
          *(undefined1 *)(uVar13 + (longlong)_Dst) = uVar11;
          uVar11 = 0xff;
          if (uVar6 < 0x100) {
            uVar11 = (char)uVar6;
          }
          *(undefined1 *)(uVar13 + 1 + (longlong)_Dst) = uVar11;
          uVar11 = 0xff;
          if (uVar10 < 0x100) {
            uVar11 = (char)uVar10;
          }
          *(undefined1 *)(uVar13 + 2 + (longlong)_Dst) = uVar11;
        }
      }
      else {
        uVar1 = *(ushort *)(&DAT_145b04e40 + (ulonglong)bVar9 * 2);
        bVar7 = bVar9;
        if (*(byte *)(uVar13 + (longlong)_Dst) <= bVar9) {
          bVar7 = *(byte *)(uVar13 + (longlong)_Dst);
        }
        *(char *)(uVar13 + (longlong)_Dst) = (char)((uint)bVar7 * (uint)uVar1 >> 8);
        bVar7 = *(byte *)(uVar13 + 1 + (longlong)_Dst);
        bVar8 = bVar9;
        if (bVar7 <= bVar9) {
          bVar8 = bVar7;
        }
        *(char *)(uVar13 + 1 + (longlong)_Dst) = (char)((uint)bVar8 * (uint)uVar1 >> 8);
        bVar7 = *(byte *)(uVar13 + 2 + (longlong)_Dst);
        if (bVar7 <= bVar9) {
          bVar9 = bVar7;
        }
        *(char *)(uVar13 + 2 + (longlong)_Dst) = (char)((uint)bVar9 * (uint)uVar1 >> 8);
      }
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)((int)uVar13 + 4);
    } while (uVar12 < *(uint *)(param_1 + 0x35a8));
  }
  return;
}



// FUNCTION 1433a78d0 FUN_1433a78d0 body=530 status=ok
// SIG undefined FUN_1433a78d0(void)

undefined8 FUN_1433a78d0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_fe8 [16];
  longlong local_fd8;
  undefined1 local_fa8 [768];
  undefined1 local_ca8 [16];
  longlong local_c98;
  undefined1 local_c68 [1024];
  undefined1 local_868 [16];
  longlong local_858;
  undefined1 local_828 [2048];
  
  FUN_1433cf360(local_fe8,3,param_1[6],3,local_fa8,0x300);
  FUN_1433cf360(local_ca8,9,param_1[2],9,local_c68,0x400);
  FUN_1433cf360(local_868,3,param_1[2],*param_1,local_828,0x800);
  iVar3 = param_1[6];
  uVar11 = param_1[2] + 3 & 0xfffffffc;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                    (*(longlong **)(param_1 + 4),local_fd8,iVar3 * 3);
  if (iVar4 == iVar3 * 3) {
    uVar7 = 0;
    if (param_1[3] != 0) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                          (*(longlong **)(param_1 + 4),local_c98,uVar11);
        if (uVar5 != uVar11) goto LAB_1433a7a98;
        uVar10 = 0;
        if (param_1[2] != 0) {
          uVar5 = 2;
          do {
            bVar2 = *(byte *)(uVar10 + local_c98);
            uVar8 = (ulonglong)uVar5;
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            *(undefined1 *)((ulonglong)(uVar5 - 2) + local_858) =
                 *(undefined1 *)((ulonglong)((uint)bVar2 + (uint)bVar2 * 2) + local_fd8);
            uVar1 = uVar5 - 1;
            uVar5 = uVar5 + 3;
            *(undefined1 *)((ulonglong)uVar1 + local_858) =
                 *(undefined1 *)((ulonglong)((uint)bVar2 * 2 + 1 + (uint)bVar2) + local_fd8);
            *(undefined1 *)(uVar8 + local_858) =
                 *(undefined1 *)((ulonglong)((uint)bVar2 * 3 + 2) + local_fd8);
          } while (uVar9 < (uint)param_1[2]);
        }
        FUN_1433cf480(local_868,
                      *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) * (ulonglong)uVar7 +
                      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18),0,param_3,param_4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_1[3]);
    }
    uVar6 = 1;
  }
  else {
LAB_1433a7a98:
    uVar6 = 0;
  }
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_868);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_ca8);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_fe8);
  return uVar6;
}



// FUNCTION 1433a7af0 FUN_1433a7af0 body=775 status=ok
// SIG undefined FUN_1433a7af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1433a7af0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *_Dst;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_3a28 [16];
  longlong local_3a18;
  undefined1 local_39e8 [1024];
  undefined1 local_35e8 [2112];
  undefined1 local_2da8 [16];
  longlong local_2d98;
  undefined1 local_2968 [2112];
  undefined1 local_2128 [2112];
  undefined1 local_18e8 [2112];
  longlong local_10a8 [3];
  undefined1 local_1090 [4160];
  RefCountImpl *local_50;
  
  uVar9 = 1;
  FUN_1433cf360(local_3a28,1,param_1[6],1,local_39e8,0x400);
  FUN_1433a6ec0(local_35e8,0,param_1[2],*param_1);
  uVar15 = 0;
  iVar3 = param_1[6];
  uVar14 = param_1[2] + 3 & 0xfffffffc;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                    (*(longlong **)(param_1 + 4),local_3a18,iVar3 << 2);
  if (iVar5 == iVar3 << 2) {
    uVar10 = 0;
    if (param_1[3] != -1) {
      do {
        lVar4 = local_2d98;
        _Dst = *(undefined4 **)(local_10a8[uVar9] + 0x10);
        *_Dst = 0;
        _Dst[param_1[2] + 1] = 0;
        if (uVar10 < (uint)param_1[3]) {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                            (*(longlong **)(param_1 + 4),local_2d98,uVar14);
          if (uVar6 != uVar14) goto LAB_1433a7d47;
          uVar13 = 0;
          if (param_1[2] != 0) {
            uVar6 = 2;
            do {
              bVar2 = *(byte *)(uVar13 + lVar4);
              uVar7 = (ulonglong)uVar6;
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
              uVar11 = (uint)bVar2 * 4;
              *(undefined1 *)((ulonglong)(uVar6 - 2) + 4 + (longlong)_Dst) =
                   *(undefined1 *)((ulonglong)uVar11 + local_3a18);
              *(undefined1 *)((ulonglong)(uVar6 - 1) + 4 + (longlong)_Dst) =
                   *(undefined1 *)((ulonglong)((uint)bVar2 * 4 + 1) + local_3a18);
              uVar1 = uVar6 + 1;
              uVar6 = uVar6 + 4;
              *(undefined1 *)(uVar7 + 4 + (longlong)_Dst) =
                   *(undefined1 *)((ulonglong)(uVar11 + 2) + local_3a18);
              *(undefined1 *)((ulonglong)uVar1 + 4 + (longlong)_Dst) =
                   *(undefined1 *)((ulonglong)(uVar11 + 3) + local_3a18);
            } while (uVar12 < (uint)param_1[2]);
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,0,*(size_t *)(local_10a8[uVar9] + 0x20));
        }
        uVar15 = uVar15 + 1;
        if (1 < uVar15) {
          FUN_1433a75e0(local_35e8);
          FUN_1433cf480(local_1090,
                        (ulonglong)(uVar10 - 1) * *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) +
                        *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18),0,param_3,param_4);
        }
        lVar4 = local_10a8[2];
        if ((int)uVar9 == 2) {
          local_10a8[2] = local_10a8[0];
          local_10a8[0] = local_10a8[1];
          local_10a8[1] = lVar4;
        }
        else {
          uVar9 = (ulonglong)((int)uVar9 + 1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_1[3] + 1);
    }
    uVar8 = 1;
  }
  else {
LAB_1433a7d47:
    uVar8 = 0;
  }
  if (local_50 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_50);
  }
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1090);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_18e8);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2128);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2968);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2da8);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_35e8);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_3a28);
  return uVar8;
}



// FUNCTION 1433a7e00 FUN_1433a7e00 body=454 status=ok
// SIG undefined FUN_1433a7e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1433a7e00(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_18a8 [16];
  longlong local_1898;
  undefined1 local_1868 [2048];
  undefined1 local_1068 [16];
  longlong local_1058;
  undefined1 local_1028 [4088];
  undefined8 uStack_30;
  
  uStack_30 = 0x1433a7e22;
  FUN_1433cf360(local_18a8,9,param_1[2] * 2,9,local_1868,0x800);
  FUN_1433cf360(local_1068,1,param_1[2],*param_1,local_1028,0x1000);
  uVar7 = 0;
  uVar10 = param_1[2] * 2 + 3U & 0xfffffffc;
  if (param_1[3] != 0) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                        (*(longlong **)(param_1 + 4),local_1898,uVar10);
      if (uVar4 != uVar10) {
        uVar6 = 0;
        goto LAB_1433a7f87;
      }
      uVar4 = 0;
      if (param_1[2] != 0) {
        uVar9 = 0;
        uVar5 = 2;
        do {
          cVar2 = *(char *)(uVar9 + local_1898);
          iVar3 = (int)uVar9;
          uVar9 = (ulonglong)(iVar3 + 2);
          uVar8 = CONCAT11(*(undefined1 *)((ulonglong)(iVar3 + 1) + local_1898),cVar2);
          uVar4 = uVar4 + 1;
          *(byte *)((ulonglong)(uVar5 - 2) + local_1058) = (byte)(uVar8 >> 7) & 0xf8;
          *(byte *)((ulonglong)(uVar5 - 1) + local_1058) = (byte)(uVar8 >> 2) & 0xf8;
          *(char *)((ulonglong)uVar5 + local_1058) = cVar2 << 3;
          uVar1 = uVar5 + 1;
          uVar5 = uVar5 + 4;
          *(undefined1 *)((ulonglong)uVar1 + local_1058) = 0xff;
        } while (uVar4 < (uint)param_1[2]);
      }
      FUN_1433cf480(local_1068,
                    *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) * (ulonglong)uVar7 +
                    *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18),0,param_3,param_4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[3]);
  }
  uVar6 = 1;
LAB_1433a7f87:
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1068);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_18a8);
  return uVar6;
}



// FUNCTION 1433a7fd0 FUN_1433a7fd0 body=336 status=ok
// SIG undefined FUN_1433a7fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1433a7fd0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_1058 [16];
  longlong local_1048;
  undefined1 local_1018 [4088];
  undefined8 uStack_20;
  
  uStack_20 = 0x1433a7ff4;
  FUN_1433cf360(local_1058,1,param_1[2],*param_1,local_1018,0x1000);
  iVar2 = param_1[2];
  uVar6 = 0;
  if (param_1[3] != 0) {
    do {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                        (*(longlong **)(param_1 + 4),local_1048,iVar2 * 4);
      if (iVar3 != iVar2 * 4) {
        uVar5 = 0;
        goto LAB_1433a80ed;
      }
      uVar8 = 0;
      if (param_1[2] != 0) {
        uVar4 = 2;
        do {
          uVar7 = (ulonglong)uVar4;
          uVar8 = uVar8 + 1;
          *(undefined1 *)((ulonglong)(uVar4 - 2) + local_1048) =
               *(undefined1 *)((ulonglong)(uVar4 - 1) + local_1048);
          *(undefined1 *)((ulonglong)(uVar4 - 1) + local_1048) = *(undefined1 *)(uVar7 + local_1048)
          ;
          uVar1 = uVar4 + 1;
          uVar4 = uVar4 + 4;
          *(undefined1 *)(uVar7 + local_1048) = *(undefined1 *)((ulonglong)uVar1 + local_1048);
          *(undefined1 *)((ulonglong)uVar1 + local_1048) = 0xff;
        } while (uVar8 < (uint)param_1[2]);
      }
      FUN_1433cf480(local_1058,
                    *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) * (ulonglong)uVar6 +
                    *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18),0,param_3,param_4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[3]);
  }
  uVar5 = 1;
LAB_1433a80ed:
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1058);
  return uVar5;
}



// FUNCTION 1433a8120 FUN_1433a8120 body=616 status=ok
// SIG undefined FUN_1433a8120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1433a8120(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 local_35d8 [2112];
  undefined1 local_2d98 [1088];
  undefined1 local_2958 [2112];
  undefined1 local_2118 [2112];
  undefined1 local_18d8 [2112];
  longlong local_1098 [3];
  undefined1 local_1080 [4160];
  RefCountImpl *local_40;
  
  FUN_1433a6ec0(local_35d8,0,param_1[2],*param_1);
  uVar12 = 1;
  uVar13 = 0;
  uVar9 = 0;
  if (param_1[3] != -1) {
    do {
      puVar4 = *(undefined4 **)(local_1098[uVar12] + 0x10);
      *puVar4 = 0;
      puVar4[param_1[2] + 1] = 0;
      if (uVar9 < (uint)param_1[3]) {
        iVar3 = param_1[2];
        puVar4 = puVar4 + 1;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))
                          (*(longlong **)(param_1 + 4),puVar4,iVar3 << 2);
        if (iVar6 != iVar3 << 2) {
          uVar8 = 0;
          goto LAB_1433a82e0;
        }
        uVar11 = 0;
        if (param_1[2] != 0) {
          uVar7 = 2;
          do {
            uVar11 = uVar11 + 1;
            uVar2 = *(undefined1 *)((ulonglong)(uVar7 - 2) + (longlong)puVar4);
            *(undefined1 *)((ulonglong)(uVar7 - 2) + (longlong)puVar4) =
                 *(undefined1 *)((ulonglong)(uVar7 - 1) + (longlong)puVar4);
            uVar10 = (ulonglong)uVar7;
            *(undefined1 *)((ulonglong)(uVar7 - 1) + (longlong)puVar4) =
                 *(undefined1 *)(uVar10 + (longlong)puVar4);
            uVar1 = uVar7 + 1;
            uVar7 = uVar7 + 4;
            *(undefined1 *)(uVar10 + (longlong)puVar4) =
                 *(undefined1 *)((ulonglong)uVar1 + (longlong)puVar4);
            *(undefined1 *)((ulonglong)uVar1 + (longlong)puVar4) = uVar2;
          } while (uVar11 < (uint)param_1[2]);
        }
      }
      else {
        _guard_xfg_dispatch_icall_nop(puVar4,0,*(size_t *)(local_1098[uVar12] + 0x20));
      }
      uVar13 = uVar13 + 1;
      if (1 < uVar13) {
        FUN_1433a75e0(local_35d8);
        FUN_1433cf480(local_1080,
                      (ulonglong)(uVar9 - 1) * *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) +
                      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18),0,param_3,param_4);
      }
      lVar5 = local_1098[2];
      if ((int)uVar12 == 2) {
        local_1098[2] = local_1098[0];
        local_1098[0] = local_1098[1];
        local_1098[1] = lVar5;
      }
      else {
        uVar12 = (ulonglong)((int)uVar12 + 1);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_1[3] + 1);
  }
  uVar8 = 1;
LAB_1433a82e0:
  if (local_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_40);
  }
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_1080);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_18d8);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2118);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2958);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_2d98);
  Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(local_35d8);
  return uVar8;
}



// FUNCTION 1433a8390 FUN_1433a8390 body=120 status=ok
// SIG undefined FUN_1433a8390(void)

void FUN_1433a8390(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = Scaleform::GFx::InteractiveObject::GetStringManager();
  local_res8 = lVar2 + 0x48;
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
  (**(code **)(*param_2 + 0x3b8))(param_2,param_1 + 0x10,&local_res8,0,0,0xffffffff,4,0,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1433a8410 FUN_1433a8410 body=263 status=ok
// SIG undefined FUN_1433a8410(void)

void FUN_1433a8410(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_145af0af0);
  lVar2 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x5c);
  if (0 < *(longlong *)(param_2 + 0x30)) {
    lVar3 = *(longlong *)(param_2 + 0x30);
    do {
      lVar4 = lVar3 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + (lVar4 + lVar2) * 8) + 0x14) <=
          iVar1) {
        lVar2 = lVar4 + lVar2 + 1;
        lVar4 = lVar3 + (-1 - lVar4);
      }
      lVar3 = lVar4;
    } while (0 < lVar4);
    if ((((lVar2 != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar2 * 8),
         *(int *)(lVar2 + 0x14) == iVar1)) && (lVar2 != 0)) && ((*(byte *)(lVar2 + 0x71) & 2) == 0))
    {
      *(longlong **)(lVar2 + 0x68) = param_1;
      *(longlong **)(lVar2 + 0x60) = param_1;
      *(longlong **)(lVar2 + 0x58) = param_1;
      *(longlong **)(lVar2 + 0x50) = param_1;
      *(longlong **)(lVar2 + 0x48) = param_1;
      *(longlong **)(lVar2 + 0x40) = param_1;
      *(longlong **)(lVar2 + 0x38) = param_1;
      *(longlong **)(lVar2 + 0x30) = param_1;
      *(longlong **)(lVar2 + 0x28) = param_1;
      *(longlong **)(lVar2 + 0x20) = param_1;
      *(longlong **)(lVar2 + 0x18) = param_1;
      goto LAB_1433a8500;
    }
  }
  lVar2 = FUN_1433aad70(param_2,iVar1);
  *(longlong **)(lVar2 + 0x68) = param_1;
  *(longlong **)(lVar2 + 0x60) = param_1;
  *(longlong **)(lVar2 + 0x58) = param_1;
  *(longlong **)(lVar2 + 0x50) = param_1;
  *(longlong **)(lVar2 + 0x48) = param_1;
  *(longlong **)(lVar2 + 0x40) = param_1;
  *(longlong **)(lVar2 + 0x38) = param_1;
  *(longlong **)(lVar2 + 0x30) = param_1;
  *(longlong **)(lVar2 + 0x28) = param_1;
  *(longlong **)(lVar2 + 0x20) = param_1;
  *(longlong **)(lVar2 + 0x18) = param_1;
  *(undefined1 *)(lVar2 + 0x70) = 0;
LAB_1433a8500:
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  *(byte *)(lVar2 + 0x71) = *(byte *)(lVar2 + 0x71) | 1;
  return;
}



// FUNCTION 1433a8530 CAkSinkBase body=18 status=ok
// SIG undefined CAkSinkBase(void)

undefined8 * CAkSinkBase::CAkSinkBase(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_145b05040;
  return param_1;
}



// FUNCTION 1433a8570 ComputeDataSize body=30 status=ok
// SIG undefined ComputeDataSize(void)

longlong Scaleform::GFx::PlaceObject2Tag::ComputeDataSize(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = Stream::GetTagEndPosition();
  return (longlong)(iVar4 - ((iVar1 - iVar2) + iVar3));
}



// FUNCTION 1433a85a0 FUN_1433a85a0 body=116 status=ok
// SIG undefined FUN_1433a85a0(void)

void FUN_1433a85a0(longlong param_1,longlong param_2)

{
  longlong local_48 [3];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48[0] = param_1 + 9;
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  local_48[1] = 0xffffffffffffffff;
  local_30 = 0;
  local_48[2] = 4;
  FUN_143396f80(local_48,&local_28);
  *(bool *)(param_1 + 8) = (ulonglong)local_48[2] < param_2 - 1U;
  return;
}



// FUNCTION 1433a8620 FUN_1433a8620 body=178 status=ok
// SIG undefined FUN_1433a8620(void)

void FUN_1433a8620(longlong param_1,longlong param_2)

{
  ushort *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = 0xffffffffffffffff;
  local_28 = (ushort *)(param_1 + 9);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 2;
  *(uint *)(param_2 + 0x50) = (uint)*local_28;
  *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 1;
  local_10 = 0;
  local_18 = 4;
  *(uint *)(param_2 + 0x4c) = (uint)*(ushort *)(param_1 + 0xb);
  *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 4;
  FUN_143396f80(&local_28,param_2 + 0x20);
  if (*(char *)(param_1 + 8) != '\0') {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 8;
    FUN_1433971b0(&local_28,param_2);
  }
  return;
}



// FUNCTION 1433a8710 FUN_1433a8710 body=280 status=ok
// SIG undefined FUN_1433a8710(void)

void FUN_1433a8710(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  RefCountImpl *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  FUN_1432bfaf0(local_98);
  local_78 = 0x3f800000;
  uStack_70 = 0;
  local_50 = 0;
  local_68 = 0;
  uStack_64 = 0x3f800000;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = (RefCountImpl *)0x0;
  local_48 = 0x40000;
  local_38 = 0;
  local_4c = 0;
  local_34 = 0x100;
  local_40 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,local_98);
  lVar2 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
  local_res8 = lVar2 + 0x48;
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
  (**(code **)(*param_2 + 0x3b8))(param_2,local_98,&local_res8,0,0,0xffffffff,4,0,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (local_58 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_58);
  }
  return;
}



// FUNCTION 1433a8830 FUN_1433a8830 body=300 status=ok
// SIG undefined FUN_1433a8830(void)

void FUN_1433a8830(longlong *param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_145af0af0);
  lVar2 = 0;
  uVar1 = *(ushort *)((longlong)param_1 + 0xb);
  if (0 < *(longlong *)(param_2 + 0x30)) {
    lVar4 = *(longlong *)(param_2 + 0x30);
    do {
      lVar3 = lVar4 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + (lVar3 + lVar2) * 8) + 0x14) <=
          (int)(uint)uVar1) {
        lVar2 = lVar3 + lVar2 + 1;
        lVar3 = lVar4 + (-1 - lVar3);
      }
      lVar4 = lVar3;
    } while (0 < lVar3);
    if ((((lVar2 != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar2 * 8),
         *(uint *)(lVar2 + 0x14) == (uint)uVar1)) && (lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 0x71) & 2) == 0)) {
      *(longlong **)(lVar2 + 0x68) = param_1;
      *(longlong **)(lVar2 + 0x60) = param_1;
      *(longlong **)(lVar2 + 0x58) = param_1;
      *(longlong **)(lVar2 + 0x50) = param_1;
      *(longlong **)(lVar2 + 0x48) = param_1;
      *(longlong **)(lVar2 + 0x40) = param_1;
      *(longlong **)(lVar2 + 0x38) = param_1;
      *(longlong **)(lVar2 + 0x30) = param_1;
      *(longlong **)(lVar2 + 0x28) = param_1;
      *(longlong **)(lVar2 + 0x20) = param_1;
      *(longlong **)(lVar2 + 0x18) = param_1;
      *(undefined4 *)(lVar2 + 0x10) = param_3;
      *(byte *)(lVar2 + 0x71) = *(byte *)(lVar2 + 0x71) | 1;
      return;
    }
  }
  lVar2 = FUN_1433aad70(param_2,uVar1);
  *(undefined1 *)(lVar2 + 0x70) = 0;
  *(longlong **)(lVar2 + 0x68) = param_1;
  *(longlong **)(lVar2 + 0x60) = param_1;
  *(longlong **)(lVar2 + 0x58) = param_1;
  *(longlong **)(lVar2 + 0x50) = param_1;
  *(longlong **)(lVar2 + 0x48) = param_1;
  *(longlong **)(lVar2 + 0x40) = param_1;
  *(longlong **)(lVar2 + 0x38) = param_1;
  *(longlong **)(lVar2 + 0x30) = param_1;
  *(longlong **)(lVar2 + 0x28) = param_1;
  *(longlong **)(lVar2 + 0x20) = param_1;
  *(longlong **)(lVar2 + 0x18) = param_1;
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  *(byte *)(lVar2 + 0x71) = *(byte *)(lVar2 + 0x71) | 1;
  return;
}



// FUNCTION 1433a89a0 ~FPhysXPlatformModule body=11 status=ok
// SIG undefined ~FPhysXPlatformModule(void)

void FPhysXPlatformModule::~FPhysXPlatformModule(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145afa360;
  return;
}



// FUNCTION 1433a89c0 FUN_1433a89c0 body=84 status=ok
// SIG undefined FUN_1433a89c0(void)

byte FUN_1433a89c0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396d60();
  }
  iVar2 = *(uint *)(param_1 + 0x4c) + 1;
  bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(int *)(param_1 + 0x4c) = iVar2;
  FUN_143395c80(param_1,iVar2 + (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + -1);
  return bVar1 >> 7;
}



// FUNCTION 1433a8a20 FUN_1433a8a20 body=15 status=ok
// SIG undefined FUN_1433a8a20(void)

void FUN_1433a8a20(undefined1 *param_1)

{
  *param_1 = param_1[8];
  *(undefined8 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1433a8a40 FUN_1433a8a40 body=5 status=ok
// SIG undefined FUN_1433a8a40(void)

undefined8 FUN_1433a8a40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 1);
}



// FUNCTION 1433a8a50 FUN_1433a8a50 body=5 status=ok
// SIG undefined FUN_1433a8a50(void)

void FUN_1433a8a50(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 1433a8a60 ComputeDataSize body=30 status=ok
// SIG undefined ComputeDataSize(void)

longlong Scaleform::GFx::PlaceObject2Tag::ComputeDataSize(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = Stream::GetTagEndPosition();
  return (longlong)(iVar4 - ((iVar1 - iVar2) + iVar3));
}



// FUNCTION 1433a8a90 FUN_1433a8a90 body=200 status=ok
// SIG undefined FUN_1433a8a90(void)

longlong FUN_1433a8a90(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  RefCountImpl *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  longlong local_28;
  
  lVar1 = 0;
  if (((char)param_1[1] < '\0') && (lVar1 = *(longlong *)((longlong)param_1 + 9), lVar1 == 0)) {
    FUN_1432bfaf0(local_98);
    local_78 = 0x3f800000;
    uStack_70 = 0;
    local_50 = 0;
    local_68 = 0;
    uStack_64 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0;
    local_58 = (RefCountImpl *)0x0;
    local_48 = 0x40000;
    local_38 = 0;
    local_4c = 0;
    local_34 = 0x100;
    local_40 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,local_98);
    if (local_58 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_58);
    }
    return local_28;
  }
  return lVar1;
}



// FUNCTION 1433a8b80 FUN_1433a8b80 body=415 status=ok
// SIG undefined FUN_1433a8b80(void)

void FUN_1433a8b80(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_145af0af0);
  cVar5 = '\x01';
  lVar1 = 1;
  if ((char)param_1[1] < '\0') {
    lVar1 = 9;
  }
  lVar6 = 0;
  uVar4 = CONCAT11(*(undefined1 *)(lVar1 + 9 + (longlong)param_1),
                   *(undefined1 *)(lVar1 + 8 + (longlong)param_1));
  bVar2 = *(byte *)(param_1 + 1) & 1;
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    if (bVar2 != 0) goto LAB_1433a8bf6;
  }
  else if (bVar2 != 0) {
    cVar5 = '\x02';
    goto LAB_1433a8bf6;
  }
  cVar5 = '\0';
LAB_1433a8bf6:
  if (0 < *(longlong *)(param_2 + 0x30)) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    do {
      lVar3 = lVar1 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + (lVar3 + lVar6) * 8) + 0x14) <=
          (int)(uint)uVar4) {
        lVar6 = lVar3 + lVar6 + 1;
        lVar3 = lVar1 + (-1 - lVar3);
      }
      lVar1 = lVar3;
    } while (0 < lVar3);
    if ((((lVar6 != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar6 * 8),
         *(uint *)(lVar1 + 0x14) == (uint)uVar4)) && (lVar1 != 0)) &&
       ((*(byte *)(lVar1 + 0x71) & 2) == 0)) {
      if (cVar5 == '\x01') {
        FUN_1433ab910(lVar1 + 0x18,param_1);
        return;
      }
      if (cVar5 != '\x02') {
        *(longlong **)(lVar1 + 0x68) = param_1;
        *(longlong **)(lVar1 + 0x60) = param_1;
        *(longlong **)(lVar1 + 0x58) = param_1;
        *(longlong **)(lVar1 + 0x50) = param_1;
        *(longlong **)(lVar1 + 0x48) = param_1;
        *(longlong **)(lVar1 + 0x40) = param_1;
        *(longlong **)(lVar1 + 0x38) = param_1;
        *(longlong **)(lVar1 + 0x30) = param_1;
        *(longlong **)(lVar1 + 0x28) = param_1;
        *(longlong **)(lVar1 + 0x20) = param_1;
        *(longlong **)(lVar1 + 0x18) = param_1;
        *(undefined4 *)(lVar1 + 0x10) = param_3;
        return;
      }
      if (*(char *)(lVar1 + 0x70) != '\0') {
        *(undefined1 *)(lVar1 + 0x70) = 2;
      }
      FUN_1433ab910(lVar1 + 0x18,param_1);
      *(undefined4 *)(lVar1 + 0x10) = param_3;
      return;
    }
  }
  lVar1 = FUN_1433aad70(param_2,uVar4);
  *(char *)(lVar1 + 0x70) = cVar5;
  *(longlong **)(lVar1 + 0x68) = param_1;
  *(longlong **)(lVar1 + 0x60) = param_1;
  *(longlong **)(lVar1 + 0x58) = param_1;
  *(longlong **)(lVar1 + 0x50) = param_1;
  *(longlong **)(lVar1 + 0x48) = param_1;
  *(longlong **)(lVar1 + 0x40) = param_1;
  *(longlong **)(lVar1 + 0x38) = param_1;
  *(longlong **)(lVar1 + 0x30) = param_1;
  *(longlong **)(lVar1 + 0x28) = param_1;
  *(longlong **)(lVar1 + 0x20) = param_1;
  *(longlong **)(lVar1 + 0x18) = param_1;
  *(undefined4 *)(lVar1 + 0x10) = param_3;
  return;
}



// FUNCTION 1433a8d90 FUN_1433a8d90 body=529 status=ok
// SIG undefined FUN_1433a8d90(void)

void FUN_1433a8d90(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong local_res20;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  RefCountImpl *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  undefined1 local_28 [16];
  
  local_res20 = local_res20 & 0xffffffff00000000;
  FUN_1432bfaf0(local_b8);
  local_98 = 0x3f800000;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3f800000;
  uStack_80 = 0;
  uStack_7c = 0;
  local_70 = 0;
  local_78 = (RefCountImpl *)0x0;
  local_68 = 0x40000;
  local_58 = 0;
  local_6c = 0;
  local_54 = 0x100;
  local_60 = 0;
  FUN_1433a8fc0(param_1,local_b8,param_3);
  if (local_38 == 0) {
    lVar2 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
    bVar6 = local_40 != 0;
    if (bVar6) {
      uVar3 = FUN_143360a60(lVar2);
      *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
      uVar4 = uVar3;
      uVar5 = local_res20;
    }
    else {
      *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
      uVar3 = local_res20;
      uVar4 = lVar2 + 0x48U;
      uVar5 = lVar2 + 0x48U;
    }
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    local_res20 = uVar4;
    if (bVar6) {
      piVar1 = (int *)(uVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar3);
      }
    }
    if (!bVar6) {
      piVar1 = (int *)(uVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar5);
      }
    }
    (**(code **)(*param_2 + 0x3b8))(param_2,local_b8,&local_res20,local_48,0,0xffffffff,4,0,0);
  }
  else {
    if (local_38 == 1) {
      FUN_14336fb10(param_2,local_b8);
      goto LAB_1433a8f7b;
    }
    if (local_38 != 2) goto LAB_1433a8f7b;
    lVar2 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
    bVar6 = local_40 != 0;
    if (bVar6) {
      uVar3 = FUN_143360a60(lVar2);
      *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
      uVar4 = uVar3;
      uVar5 = local_res20;
    }
    else {
      *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
      uVar3 = local_res20;
      uVar4 = lVar2 + 0x48U;
      uVar5 = lVar2 + 0x48U;
    }
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    local_res20 = uVar4;
    if (bVar6) {
      piVar1 = (int *)(uVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar3);
      }
    }
    if (!bVar6) {
      piVar1 = (int *)(uVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar5);
      }
    }
    (**(code **)(*param_2 + 0x3e0))(param_2,local_b8,&local_res20,local_28);
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1433a8f7b:
  if (local_78 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_78);
  }
  return;
}



// FUNCTION 1433a8fc0 FUN_1433a8fc0 body=557 status=ok
// SIG undefined FUN_1433a8fc0(void)

void FUN_1433a8fc0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  byte *local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  
  pbVar1 = (byte *)(param_1 + 1);
  local_40 = 0xffffffffffffffff;
  bVar3 = *pbVar1;
  lVar4 = 1;
  if ((char)bVar3 < '\0') {
    lVar4 = 9;
  }
  local_38 = lVar4 + 2;
  *(uint *)(param_2 + 0x4c) =
       (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + lVar4 + 9),pbVar1[lVar4]);
  if ((bVar3 & 2) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 2;
    pbVar2 = pbVar1 + local_38;
    local_38 = lVar4 + 4;
    *(uint *)(param_2 + 0x50) =
         (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + lVar4 + 0xb),*pbVar2);
  }
  local_30 = 0;
  local_48 = pbVar1;
  if ((bVar3 & 4) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 4;
    FUN_143396f80(&local_48,param_2 + 0x20);
  }
  if ((bVar3 & 8) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 8;
    FUN_143397380(&local_48,param_2);
  }
  if ((bVar3 & 0x10) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x10;
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    lVar4 = local_38 + 1;
    pbVar2 = local_48 + local_38;
    local_38 = local_38 + 2;
    *(float *)(param_2 + 0x48) = (float)CONCAT11(local_48[lVar4],*pbVar2) / 65535.0;
  }
  if ((bVar3 & 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  else {
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    *(longlong *)(param_2 + 0x78) = (longlong)param_1 + local_38 + 8;
    do {
      local_30 = 0;
      pbVar2 = local_48 + local_38;
      local_38 = local_38 + 1;
    } while (*pbVar2 != 0);
  }
  if ((bVar3 & 0x40) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x40;
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    lVar4 = local_38 + 1;
    pbVar2 = local_48 + local_38;
    local_38 = local_38 + 2;
    *(ushort *)(param_2 + 0x60) = CONCAT11(local_48[lVar4],*pbVar2);
  }
  if ((char)bVar3 < '\0') {
    (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_48,pbVar1,param_3);
  }
  else {
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if ((bVar3 >> 1 & 1) == 0) {
    *(uint *)(param_2 + 0x80) = (uint)((bVar3 & 1) != 0);
  }
  else if ((bVar3 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x80) = 2;
  }
  return;
}



// FUNCTION 1433a9200 ~FPhysXPlatformModule body=11 status=ok
// SIG undefined ~FPhysXPlatformModule(void)

void FPhysXPlatformModule::~FPhysXPlatformModule(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145afa360;
  return;
}



// FUNCTION 1433a9220 ComputeDataSize body=30 status=ok
// SIG undefined ComputeDataSize(void)

longlong Scaleform::GFx::PlaceObject2Tag::ComputeDataSize(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = Stream::GetTagEndPosition();
  return (longlong)(iVar4 - ((iVar1 - iVar2) + iVar3));
}



// FUNCTION 1433a9250 FUN_1433a9250 body=1042 status=ok
// SIG undefined FUN_1433a9250(void)

void FUN_1433a9250(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  RefCountImpl *pRVar8;
  byte bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  byte *local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  
  pbVar1 = (byte *)(param_1 + 1);
  local_40 = 0xffffffffffffffff;
  pRVar8 = (RefCountImpl *)0x0;
  bVar3 = *pbVar1;
  uVar5 = 1;
  if ((char)bVar3 < '\0') {
    uVar5 = 9;
  }
  uVar11 = (ulonglong)uVar5;
  bVar4 = pbVar1[uVar11];
  local_38 = uVar11 + 3;
  *(uint *)(param_2 + 0x4c) =
       (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + uVar11 + 10),pbVar1[uVar11 + 1]);
  if ((bVar4 & 8) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x100;
    *(ulonglong *)(param_2 + 0x58) = (longlong)param_1 + uVar11 + 0xb;
    do {
      pbVar2 = pbVar1 + local_38;
      local_38 = local_38 + 1;
    } while (*pbVar2 != 0);
  }
  if ((bVar3 & 2) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 2;
    lVar7 = local_38 + 9;
    pbVar2 = pbVar1 + local_38;
    local_38 = local_38 + 2;
    *(uint *)(param_2 + 0x50) = (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + lVar7),*pbVar2);
  }
  local_30 = 0;
  local_48 = pbVar1;
  if ((bVar3 & 4) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 4;
    FUN_143396f80(&local_48,param_2 + 0x20);
  }
  if ((bVar3 & 8) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 8;
    FUN_143397380(&local_48,param_2);
  }
  if ((bVar3 & 0x10) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x10;
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    lVar7 = local_38 + 1;
    pbVar2 = local_48 + local_38;
    local_38 = local_38 + 2;
    *(float *)(param_2 + 0x48) = (float)CONCAT11(local_48[lVar7],*pbVar2) / 65535.0;
  }
  if ((bVar3 & 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  else {
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    *(longlong *)(param_2 + 0x78) = (longlong)param_1 + local_38 + 8;
    do {
      local_30 = 0;
      pbVar2 = local_48 + local_38;
      local_38 = local_38 + 1;
    } while (*pbVar2 != 0);
  }
  if ((bVar3 & 0x40) != 0) {
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    lVar7 = local_38 + 1;
    pbVar2 = local_48 + local_38;
    local_38 = local_38 + 2;
    *(ushort *)(param_2 + 0x60) = CONCAT11(local_48[lVar7],*pbVar2);
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x40;
  }
  if ((bVar4 & 1) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x20;
    lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    if (lVar7 != 0) {
      pRVar8 = (RefCountImpl *)FUN_1432d0ca0(lVar7,0);
    }
    iVar6 = FUN_1433f6b40(&local_48,pRVar8);
    if (iVar6 != 0) {
      if (pRVar8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar8);
      }
      if (*(RefCountImpl **)(param_2 + 0x40) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 0x40));
      }
      *(RefCountImpl **)(param_2 + 0x40) = pRVar8;
    }
    if (pRVar8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar8);
    }
  }
  if ((bVar4 & 2) != 0) {
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x80;
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    bVar9 = local_48[local_38];
    local_38 = local_38 + 1;
    if (0xd < (byte)(bVar9 - 1)) {
      bVar9 = 1;
    }
    *(byte *)(param_2 + 100) = bVar9;
  }
  if ((bVar4 & 4) != 0) {
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    bVar9 = local_48[local_38];
    local_38 = local_38 + 1;
    if (*(RefCountImpl **)(param_2 + 0x40) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x40));
    }
    pRVar8 = *(RefCountImpl **)(param_2 + 0x40);
    if (bVar9 == 1) {
      if (pRVar8 == (RefCountImpl *)0x0) {
        lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38,0);
        if (lVar7 == 0) {
          pRVar8 = (RefCountImpl *)0x0;
        }
        else {
          pRVar8 = (RefCountImpl *)FUN_1432d0ca0(lVar7,0);
        }
        if (pRVar8 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar8);
        }
        if (*(RefCountImpl **)(param_2 + 0x40) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 0x40));
        }
        *(RefCountImpl **)(param_2 + 0x40) = pRVar8;
      }
      uVar10 = 1;
    }
    else {
      if (pRVar8 == (RefCountImpl *)0x0) goto LAB_1433a95ba;
      uVar10 = 0;
    }
    FUN_1432d1270(pRVar8,uVar10);
    if (pRVar8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar8);
    }
  }
LAB_1433a95ba:
  if ((bVar4 & 0x20) != 0) {
    if (local_30 != 0) {
      local_38 = local_38 + 1;
    }
    local_30 = 0;
    pbVar2 = local_48 + local_38;
    local_38 = local_38 + 1;
    *(byte *)(param_2 + 0x65) = *pbVar2;
    *(ushort *)(param_2 + 0x62) = *(ushort *)(param_2 + 0x62) | 0x200;
  }
  if ((char)bVar3 < '\0') {
    (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_48,pbVar1);
  }
  else {
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if ((bVar3 >> 1 & 1) == 0) {
    *(uint *)(param_2 + 0x80) = (uint)((bVar3 & 1) != 0);
  }
  else if ((bVar3 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x80) = 2;
  }
  return;
}



// FUNCTION 1433a9670 FUN_1433a9670 body=200 status=ok
// SIG undefined FUN_1433a9670(void)

longlong FUN_1433a9670(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  RefCountImpl *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  longlong local_28;
  
  lVar1 = 0;
  if (((char)param_1[1] < '\0') && (lVar1 = *(longlong *)((longlong)param_1 + 9), lVar1 == 0)) {
    FUN_1432bfaf0(local_98);
    local_78 = 0x3f800000;
    uStack_70 = 0;
    local_50 = 0;
    local_68 = 0;
    uStack_64 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0;
    local_58 = (RefCountImpl *)0x0;
    local_48 = 0x40000;
    local_38 = 0;
    local_4c = 0;
    local_34 = 0x100;
    local_40 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,local_98);
    if (local_58 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_58);
    }
    return local_28;
  }
  return lVar1;
}



// FUNCTION 1433a97b0 FUN_1433a97b0 body=544 status=ok
// SIG undefined FUN_1433a97b0(void)

void FUN_1433a97b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  RefCountImpl *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_38;
  longlong local_30;
  int local_28;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_1432bfaf0(local_a8);
  local_88 = 0x3f800000;
  uStack_80 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_74 = 0x3f800000;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = (RefCountImpl *)0x0;
  local_58 = 0x40000;
  local_48 = 0;
  local_5c = 0;
  local_44 = 0x100;
  local_50 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,local_a8);
  if (local_28 == 0) {
    lVar2 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
    bVar6 = local_30 != 0;
    if (bVar6) {
      uVar3 = FUN_143360a60(lVar2);
      *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
      uVar4 = uVar3;
      uVar5 = local_res8;
    }
    else {
      *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
      uVar3 = local_res8;
      uVar4 = lVar2 + 0x48U;
      uVar5 = lVar2 + 0x48U;
    }
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    local_res8 = uVar4;
    if (bVar6) {
      piVar1 = (int *)(uVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar3);
      }
    }
    if (!bVar6) {
      piVar1 = (int *)(uVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar5);
      }
    }
    (**(code **)(*param_2 + 0x3b8))(param_2,local_a8,&local_res8,local_38,0,0xffffffff,4,0,0);
  }
  else {
    if (local_28 == 1) {
      FUN_14336fb10(param_2,local_a8);
      goto LAB_1433a9999;
    }
    if (local_28 != 2) goto LAB_1433a9999;
    lVar2 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
    bVar6 = local_30 != 0;
    if (bVar6) {
      uVar3 = FUN_143360a60(lVar2);
      *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
      uVar4 = uVar3;
      uVar5 = local_res8;
    }
    else {
      *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
      uVar3 = local_res8;
      uVar4 = lVar2 + 0x48U;
      uVar5 = lVar2 + 0x48U;
    }
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    local_res8 = uVar4;
    if (bVar6) {
      piVar1 = (int *)(uVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar3);
      }
    }
    if (!bVar6) {
      piVar1 = (int *)(uVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar5);
      }
    }
    (**(code **)(*param_2 + 0x3e0))(param_2,local_a8,&local_res8,local_res18);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1433a9999:
  if (local_68 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_68);
  }
  return;
}



// FUNCTION 1433a99e0 FUN_1433a99e0 body=415 status=ok
// SIG undefined FUN_1433a99e0(void)

void FUN_1433a99e0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_145af0af0);
  cVar5 = '\x01';
  lVar1 = 1;
  if ((char)param_1[1] < '\0') {
    lVar1 = 9;
  }
  lVar6 = 0;
  uVar4 = CONCAT11(*(undefined1 *)(lVar1 + 10 + (longlong)param_1),
                   *(undefined1 *)(lVar1 + 9 + (longlong)param_1));
  bVar2 = *(byte *)(param_1 + 1) & 1;
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    if (bVar2 != 0) goto LAB_1433a9a56;
  }
  else if (bVar2 != 0) {
    cVar5 = '\x02';
    goto LAB_1433a9a56;
  }
  cVar5 = '\0';
LAB_1433a9a56:
  if (0 < *(longlong *)(param_2 + 0x30)) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    do {
      lVar3 = lVar1 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + (lVar3 + lVar6) * 8) + 0x14) <=
          (int)(uint)uVar4) {
        lVar6 = lVar3 + lVar6 + 1;
        lVar3 = lVar1 + (-1 - lVar3);
      }
      lVar1 = lVar3;
    } while (0 < lVar3);
    if ((((lVar6 != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar6 * 8),
         *(uint *)(lVar1 + 0x14) == (uint)uVar4)) && (lVar1 != 0)) &&
       ((*(byte *)(lVar1 + 0x71) & 2) == 0)) {
      if (cVar5 == '\x01') {
        FUN_1433ab910(lVar1 + 0x18,param_1);
        return;
      }
      if (cVar5 != '\x02') {
        *(longlong **)(lVar1 + 0x68) = param_1;
        *(longlong **)(lVar1 + 0x60) = param_1;
        *(longlong **)(lVar1 + 0x58) = param_1;
        *(longlong **)(lVar1 + 0x50) = param_1;
        *(longlong **)(lVar1 + 0x48) = param_1;
        *(longlong **)(lVar1 + 0x40) = param_1;
        *(longlong **)(lVar1 + 0x38) = param_1;
        *(longlong **)(lVar1 + 0x30) = param_1;
        *(longlong **)(lVar1 + 0x28) = param_1;
        *(longlong **)(lVar1 + 0x20) = param_1;
        *(longlong **)(lVar1 + 0x18) = param_1;
        *(undefined4 *)(lVar1 + 0x10) = param_3;
        return;
      }
      if (*(char *)(lVar1 + 0x70) != '\0') {
        *(undefined1 *)(lVar1 + 0x70) = 2;
      }
      FUN_1433ab910(lVar1 + 0x18,param_1);
      *(undefined4 *)(lVar1 + 0x10) = param_3;
      return;
    }
  }
  lVar1 = FUN_1433aad70(param_2,uVar4);
  *(char *)(lVar1 + 0x70) = cVar5;
  *(longlong **)(lVar1 + 0x68) = param_1;
  *(longlong **)(lVar1 + 0x60) = param_1;
  *(longlong **)(lVar1 + 0x58) = param_1;
  *(longlong **)(lVar1 + 0x50) = param_1;
  *(longlong **)(lVar1 + 0x48) = param_1;
  *(longlong **)(lVar1 + 0x40) = param_1;
  *(longlong **)(lVar1 + 0x38) = param_1;
  *(longlong **)(lVar1 + 0x30) = param_1;
  *(longlong **)(lVar1 + 0x28) = param_1;
  *(longlong **)(lVar1 + 0x20) = param_1;
  *(longlong **)(lVar1 + 0x18) = param_1;
  *(undefined4 *)(lVar1 + 0x10) = param_3;
  return;
}



// FUNCTION 1433a9c00 FUN_1433a9c00 body=111 status=ok
// SIG undefined FUN_1433a9c00(void)

void FUN_1433a9c00(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar3 = *(uint *)(lVar4 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar4 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x60));
  *(uint *)(lVar4 + 0x4c) = uVar3 + 2;
  *(ushort *)(param_1 + 8) = CONCAT11(uVar1,uVar2);
  return;
}



// FUNCTION 1433a9c80 FUN_1433a9c80 body=37 status=ok
// SIG undefined FUN_1433a9c80(void)

void FUN_1433a9c80(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0x40000;
  FUN_143370350(param_2,*(undefined2 *)(param_1 + 8),local_res8);
  return;
}



// FUNCTION 1433a9cb0 FUN_1433a9cb0 body=425 status=ok
// SIG undefined FUN_1433a9cb0(void)

void FUN_1433a9cb0(longlong *param_1,longlong param_2)

{
  void *_Dst;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_145af0af0);
  lVar3 = 0;
  if (0 < *(longlong *)(param_2 + 0x30)) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    do {
      lVar4 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + (lVar4 + lVar3) * 8) + 0x14) <=
          (int)(uint)*(ushort *)(param_1 + 1)) {
        lVar3 = lVar4 + lVar3 + 1;
        lVar4 = lVar2 + (-1 - lVar4);
      }
      lVar2 = lVar4;
    } while (0 < lVar4);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar3 * 8);
      lVar3 = lVar3 + -1;
      if (*(uint *)(lVar2 + 0x14) == (uint)*(ushort *)(param_1 + 1)) goto LAB_1433a9d37;
    }
  }
  lVar2 = 0;
  lVar3 = local_res8;
LAB_1433a9d37:
  local_res8 = lVar2;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x70) == '\0') {
      if (((*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) && (*(int *)(param_2 + 0x60) == 0)) &&
         (lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x48))(), lVar2 != 0)) {
        (**(code **)(*param_1 + 0x48))(param_1,&local_res8,lVar2);
      }
      if ((local_res8 != 0) && (FUN_1433ab630(param_2,lVar3), local_res8 != 0)) {
        return;
      }
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + lVar3 * 8);
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      *(longlong *)plVar1[1] = *plVar1;
      *plVar1 = -1;
      plVar1[1] = -1;
      if (*(longlong *)(param_2 + 0x30) == 1) {
        Scaleform::
        ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
        ::Clear(param_2 + 0x28);
      }
      else {
        _Dst = (void *)(*(longlong *)(param_2 + 0x28) + lVar3 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_2 + 0x30) - lVar3) * 8 - 8);
        *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + -1;
      }
      *plVar1 = *(longlong *)(param_2 + 0x18);
      *(longlong **)(param_2 + 0x18) = plVar1;
      local_res8 = 0;
    }
  }
  if (*(int *)(param_2 + 0x60) == 0) {
    lVar3 = FUN_1433aad70(param_2,(short)param_1[1]);
    *(uint *)(lVar3 + 0x14) = (uint)*(ushort *)(param_1 + 1);
    *(undefined1 *)(lVar3 + 0x70) = 3;
    *(byte *)(lVar3 + 0x71) = *(byte *)(lVar3 + 0x71) | 2;
  }
  return;
}



// FUNCTION 1433a9e70 FUN_1433a9e70 body=211 status=ok
// SIG undefined FUN_1433a9e70(void)

void FUN_1433a9e70(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar3 = *(uint *)(lVar4 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar4 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x60));
  *(uint *)(lVar4 + 0x4c) = uVar3 + 2;
  *(ushort *)(param_1 + 0x10) = CONCAT11(uVar1,uVar2);
  lVar4 = *(longlong *)(param_2 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar3 = *(uint *)(lVar4 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar4 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x60));
  *(uint *)(lVar4 + 0x4c) = uVar3 + 2;
  *(ushort *)(param_1 + 8) = CONCAT11(uVar1,uVar2);
  return;
}



// FUNCTION 1433a9f50 FUN_1433a9f50 body=37 status=ok
// SIG undefined FUN_1433a9f50(void)

void FUN_1433a9f50(longlong param_1,undefined8 param_2)

{
  uint local_res8 [8];
  
  local_res8[0] = (uint)*(ushort *)(param_1 + 0x10);
  FUN_143370350(param_2,*(undefined2 *)(param_1 + 8),local_res8);
  return;
}



// FUNCTION 1433a9f90 FUN_1433a9f90 body=136 status=ok
// SIG undefined FUN_1433a9f90(void)

void FUN_1433a9f90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  undefined4 local_res10 [6];
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10);
  if ((*(uint *)(plVar1 + 0xa5e) >> 0x11 & 1) == 0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x110))(plVar1);
    fVar2 = fVar2 * 255.0;
    if (fVar2 <= 0.0) {
      fVar2 = fVar2 - 0.5;
    }
    else {
      fVar2 = fVar2 + 0.5;
    }
    *(char *)(param_1 + 0xb) = (char)(int)fVar2;
    local_res10[0] = *(undefined4 *)(param_1 + 8);
    (**(code **)(*plVar1 + 0x100))(plVar1,local_res10);
    *(uint *)(plVar1 + 0xa5e) = *(uint *)(plVar1 + 0xa5e) | 0x20000;
  }
  return;
}



// FUNCTION 1433aa020 FUN_1433aa020 body=96 status=ok
// SIG undefined FUN_1433aa020(void)

void FUN_1433aa020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x418);
  if (lVar1 == 0) {
    lVar1 = param_2 + 0x50;
  }
  FUN_143396a00(lVar1,param_1 + 8);
  FUN_143300df0(param_2 + 0x20,"  SetBackgroundColor: (%d %d %d)\n",*(undefined1 *)(param_1 + 10),
                *(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 8));
  return;
}



// FUNCTION 1433aa090 FUN_1433aa090 body=77 status=ok
// SIG undefined FUN_1433aa090(void)

undefined8 * FUN_1433aa090(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  *param_1 = &PTR_FUN_145b05098;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1433aa0f0 FUN_1433aa0f0 body=138 status=ok
// SIG undefined FUN_1433aa0f0(void)

void FUN_1433aa0f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  *param_1 = &PTR_FUN_145b05098;
  if (param_1[8] != 0) {
    do {
      FUN_1433b2cb0(uVar1 * 0x10 + param_1[7]);
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (ulonglong)param_1[8]);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[10]);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[7]);
  FUN_143315ea0(param_1 + 5);
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 1433aa190 FUN_1433aa190 body=21 status=ok
// SIG undefined FUN_1433aa190(void)

void FUN_1433aa190(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  FUN_1433ab770(param_1 + 0x38,1);
  return;
}



// FUNCTION 1433aa1b0 FUN_1433aa1b0 body=843 status=ok
// SIG undefined FUN_1433aa1b0(void)

void FUN_1433aa1b0(longlong param_1,longlong param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  code *pcVar11;
  ulonglong local_res10;
  undefined2 *local_res18;
  longlong *local_res20;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar10 = *(longlong *)(param_2 + 0x418);
  if (lVar10 == 0) {
    lVar10 = param_2 + 0x50;
  }
  local_res18 = param_3;
  uVar5 = Scaleform::GFx::Stream::GetTagEndPosition(lVar10);
  *(longlong *)(param_2 + 0x3c0) = param_1;
  *(undefined4 *)(param_2 + 0x3b8) = 1;
  *(undefined1 *)(lVar10 + 0x29) = 0;
  if (*(int *)(lVar10 + 0x50) - *(int *)(lVar10 + 0x4c) < 2) {
    FUN_143396c40(lVar10,2);
  }
  uVar6 = *(uint *)(lVar10 + 0x4c);
  uVar8 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 1) + *(longlong *)(lVar10 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar6 + *(longlong *)(lVar10 + 0x60)));
  *(uint *)(lVar10 + 0x4c) = uVar6 + 2;
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  *(uint *)(param_1 + 0x30) = uVar8;
  FUN_1433ab770(param_1 + 0x38,uVar8);
  FUN_143300df0(lVar10,"  frames = %d\n",*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar6 = (*(int *)(lVar10 + 0x54) - *(int *)(lVar10 + 0x50)) + *(int *)(lVar10 + 0x4c);
  do {
    if (uVar5 <= uVar6) {
      if ((*(longlong *)(param_2 + 0x3d0 + (longlong)*(int *)(param_2 + 0x3b8) * 0x18) != 0) ||
         ((*(int *)(param_2 + 0x3b8) == 0 && (*(longlong *)(param_2 + 0x400) != 0)))) {
        if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x40)) {
          FUN_1433ab770(param_1 + 0x38,*(longlong *)(param_1 + 0x40) + 1);
          FUN_14339fb50(lVar10,
                        "An extra frame is found for sprite id = %d, framecnt = %d, actual frames = %d"
                        ,*param_3,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x34) + 1);
        }
        FUN_143319d60(param_2);
      }
      *(undefined4 *)(param_2 + 0x3b8) = 0;
      *(undefined8 *)(param_2 + 0x3c0) = 0;
      FUN_143300df0(lVar10,"  -- sprite END, char id = %d --\n",*param_3);
      return;
    }
    uVar6 = FUN_143395db0(lVar10,&local_78);
    FUN_1432c2fb0(&local_res10,
                  (*(ulonglong *)(*(longlong *)(param_2 + 0x38) + 0x48) & 0xfffffffffffffffc) + 0xc)
    ;
    uVar4 = local_6c;
    uVar3 = local_70;
    uVar2 = local_74;
    uVar1 = local_78;
    local_res20 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x28);
    if (local_res20 != (longlong *)0x0) {
      FUN_1432c31e0(&local_68,&local_res10);
      local_60 = uVar1;
      local_5c = uVar2;
      local_58 = uVar3;
      local_54 = uVar4;
      (**(code **)(*local_res20 + 0x10))(local_res20,&local_68,1);
      uVar9 = local_68 & 0xfffffffffffffffc;
      iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
      param_3 = local_res18;
      if (iVar7 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
        param_3 = local_res18;
      }
    }
    uVar9 = local_res10 & 0xfffffffffffffffc;
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
    }
    if (uVar6 == 1) {
      if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x40)) {
        FUN_1433ab770(param_1 + 0x38,*(longlong *)(param_1 + 0x40) + 1);
        FUN_14339fb50(lVar10,
                      "An extra frame is found for sprite id = %d, framecnt = %d, actual frames = %d"
                      ,*param_3,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x34) + 1);
      }
      FUN_143319d60(param_2);
      FUN_143300df0(lVar10,"  ShowFrame (sprite, char id = %d)\n",*param_3);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    else {
      if (uVar6 < 0x5c) {
        pcVar11 = (code *)(&PTR_LAB_1467cdf50)[uVar6];
LAB_1433aa41e:
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(param_2,&local_78);
          goto LAB_1433aa442;
        }
      }
      else if (uVar6 - 1000 < 10) {
        pcVar11 = (code *)(&PTR_LAB_1467ce230)[uVar6 - 1000];
        goto LAB_1433aa41e;
      }
      FUN_143300df0(lVar10,"*** no tag loader for type %d\n",(ulonglong)uVar6);
    }
LAB_1433aa442:
    FUN_143395ea0(lVar10);
    uVar6 = (*(int *)(lVar10 + 0x54) - *(int *)(lVar10 + 0x50)) + *(int *)(lVar10 + 0x4c);
  } while( true );
}



// FUNCTION 1433aa520 FUN_1433aa520 body=310 status=ok
// SIG undefined FUN_1433aa520(void)

longlong * FUN_1433aa520(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar7 = (longlong *)(param_1 + 0x28);
  plVar8 = (longlong *)0x0;
  plVar6 = plVar8;
  if (lVar2 == 0) {
    plVar5 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x10);
    plVar5 = plVar8;
    do {
      if (*plVar3 != -2) break;
      plVar5 = (longlong *)((longlong)plVar5 + 1);
      plVar3 = plVar3 + 4;
    } while (plVar5 <= *(longlong **)(lVar2 + 8));
  }
  do {
    do {
      if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)plVar5)) {
        if ((int)plVar6 != 0) {
          plVar8 = param_3;
        }
        return plVar8;
      }
      if (param_2 == *(int *)((longlong)plVar5 * 0x20 + 0x28 + lVar2)) {
        FUN_1432bc120(param_3,param_3,param_3[1] + 1);
        lVar1 = *param_3 + (param_3[1] + -1) * 8;
        if (lVar1 != 0) {
          FUN_1432c31e0(lVar1,(longlong)plVar5 * 0x20 + lVar2 + 0x20);
        }
        plVar6 = (longlong *)(ulonglong)((int)plVar6 + 1);
      }
      plVar3 = *(longlong **)(*plVar7 + 8);
    } while (((longlong)plVar3 < (longlong)plVar5) ||
            (plVar5 = (longlong *)((longlong)plVar5 + 1), plVar3 < plVar5));
    plVar4 = (longlong *)((longlong)plVar5 * 0x20 + 0x10 + *plVar7);
    do {
      if (*plVar4 != -2) break;
      plVar5 = (longlong *)((longlong)plVar5 + 1);
      plVar4 = plVar4 + 4;
    } while (plVar5 <= plVar3);
  } while( true );
}



// FUNCTION 1433aa660 FUN_1433aa660 body=397 status=ok
// SIG undefined FUN_1433aa660(void)

void FUN_1433aa660(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  ulonglong *local_18;
  undefined4 *local_10;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x30) <= iVar1)) {
    if (param_3 != 0) {
      FUN_143300d50(param_3 + 0x18,
                    "AddFrameName(%d, \'%s\') -- frame is out of range (frameCount = %d; skipping",
                    iVar1,(*param_2 & 0xfffffffffffffffc) + 0xc,*(undefined4 *)(param_1 + 0x30));
    }
    return;
  }
  lVar2 = FUN_1432ffa70(param_1 + 0x28);
  if ((lVar2 != 0) && (param_3 != 0)) {
    FUN_143300d50(param_3 + 0x18,
                  "AddFrameName(%d, \'%s\') -- frame name already assigned to frame %d; overriding",
                  *(undefined4 *)(param_1 + 0x34),(*param_2 & 0xfffffffffffffffc) + 0xc,
                  *(undefined4 *)(lVar2 + 8));
  }
  lVar2 = FUN_1432c3580();
  if ((lVar2 != 0) && (uVar6 = *param_2 & 0xfffffffffffffffc, *(char *)(uVar6 + 0xc) == '_')) {
    lVar2 = 0;
    lVar5 = lVar2;
    do {
      lVar3 = lVar5 + 1;
      lVar4 = lVar2;
      if (*(char *)(uVar6 + 0xc + lVar5) != (&DAT_145b05270)[lVar5]) goto LAB_1433aa730;
      lVar5 = lVar3;
    } while (lVar3 != 4);
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  }
  goto LAB_1433aa779;
  while (lVar4 = lVar5, lVar5 != 6) {
LAB_1433aa730:
    lVar5 = lVar4 + 1;
    if (*(char *)(uVar6 + 0xc + lVar4) != (&DAT_145b05274)[lVar4]) goto LAB_1433aa760;
  }
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 2;
  goto LAB_1433aa779;
  while (lVar2 = lVar5, lVar5 != 6) {
LAB_1433aa760:
    lVar5 = lVar2 + 1;
    if (*(char *)(uVar6 + 0xc + lVar2) != "_over"[lVar2]) goto LAB_1433aa779;
  }
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 4;
LAB_1433aa779:
  local_res8[0] = *(undefined4 *)(param_1 + 0x34);
  local_10 = local_res8;
  local_18 = param_2;
  FUN_1433ab390(param_1 + 0x28,param_1 + 0x28,&local_18);
  return;
}



// FUNCTION 1433aa800 FUN_1433aa800 body=1385 status=ok
// SIG undefined FUN_1433aa800(void)

void FUN_1433aa800(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_5b8 [4];
  undefined8 auStack_5a8 [2];
  undefined4 local_598 [2];
  undefined8 local_590;
  undefined4 local_588 [4];
  undefined8 local_578;
  undefined8 local_570;
  undefined4 local_568 [2];
  undefined8 local_560;
  undefined8 local_558;
  undefined1 local_528 [144];
  undefined1 local_498 [144];
  undefined1 local_408 [144];
  undefined1 local_378 [144];
  undefined1 local_2e8 [144];
  undefined1 local_258 [144];
  undefined1 local_1c8 [144];
  undefined1 local_138 [144];
  undefined1 local_a8 [144];
  
  (**(code **)(*(longlong *)*param_1 + 0x40))();
  lVar11 = 10;
  puVar8 = &local_590;
  lVar9 = 10;
  lVar10 = 0;
  do {
    FUN_1432bfaf0(puVar8 + -5);
    puVar8[-1] = 0x3f800000;
    *puVar8 = 0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 5) = 0x40000;
    *(undefined4 *)(puVar8 + 7) = 0;
    puVar8[4] = 0;
    *(undefined2 *)((longlong)puVar8 + 0x3c) = 0x100;
    puVar8[6] = 0;
    puVar8 = puVar8 + 0x12;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)*param_1) {
    (**(code **)(*plVar1 + 0x40))(plVar1,local_5b8);
    param_2[0x13] = local_570._4_4_;
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 1;
  }
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)*param_1) {
    plVar2 = (longlong *)param_1[5];
    if (plVar2 != plVar1) {
      (**(code **)(*plVar1 + 0x40))(plVar1,local_528);
    }
    param_2[0x14] = local_568[(ulonglong)(plVar2 != plVar1) * 0x24];
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 2;
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_498);
        lVar9 = 2;
      }
    }
    param_2[8] = local_598[lVar9 * 0x24];
    param_2[9] = local_598[lVar9 * 0x24 + 1];
    param_2[10] = *(undefined4 *)(&local_590 + lVar9 * 0x12);
    param_2[0xb] = local_588[lVar9 * 0x24 + -1];
    param_2[0xc] = local_588[lVar9 * 0x24];
    param_2[0xd] = local_588[lVar9 * 0x24 + 1];
    param_2[0xe] = local_588[lVar9 * 0x24 + 2];
    param_2[0xf] = local_588[lVar9 * 0x24 + 3];
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 4;
  }
  plVar1 = (longlong *)param_1[9];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar9 = 2;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_408);
        lVar9 = 3;
      }
    }
    *(undefined8 *)(param_2 + 0x16) = (&local_558)[lVar9 * 0x12 + -1];
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 0x100;
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar9 = 2;
      }
      else if ((longlong *)param_1[9] == plVar1) {
        lVar9 = 3;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_378);
        lVar9 = 4;
      }
    }
    uVar3 = local_5b8[lVar9 * 0x24 + 1];
    uVar4 = local_5b8[lVar9 * 0x24 + 2];
    uVar5 = local_5b8[lVar9 * 0x24 + 3];
    uVar6 = auStack_5a8[lVar9 * 0x12];
    uVar7 = auStack_5a8[lVar9 * 0x12 + 1];
    *param_2 = local_5b8[lVar9 * 0x24];
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *(undefined8 *)(param_2 + 4) = uVar6;
    *(undefined8 *)(param_2 + 6) = uVar7;
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 8;
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar9 = 2;
      }
      else if ((longlong *)param_1[9] == plVar1) {
        lVar9 = 3;
      }
      else if ((longlong *)param_1[2] == plVar1) {
        lVar9 = 4;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_2e8);
        lVar9 = 5;
      }
    }
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)&local_558 + lVar9 * 0x90 + 4);
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 0x80;
  }
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar9 = 2;
      }
      else if ((longlong *)param_1[9] == plVar1) {
        lVar9 = 3;
      }
      else if ((longlong *)param_1[2] == plVar1) {
        lVar9 = 4;
      }
      else if ((longlong *)param_1[4] == plVar1) {
        lVar9 = 5;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_258);
        lVar9 = 6;
      }
    }
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(&local_558 + lVar9 * 0x12);
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 0x40;
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar9 = 2;
      }
      else if ((longlong *)param_1[9] == plVar1) {
        lVar9 = 3;
      }
      else if ((longlong *)param_1[2] == plVar1) {
        lVar9 = 4;
      }
      else if ((longlong *)param_1[4] == plVar1) {
        lVar9 = 5;
      }
      else if ((longlong *)param_1[6] == plVar1) {
        lVar9 = 6;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_1c8);
        lVar9 = 7;
      }
    }
    param_2[0x12] = *(undefined4 *)(&local_570 + lVar9 * 0x12);
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 0x10;
  }
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)*param_1) {
    lVar9 = lVar10;
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar9 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar9 = 2;
      }
      else if ((longlong *)param_1[9] == plVar1) {
        lVar9 = 3;
      }
      else if ((longlong *)param_1[2] == plVar1) {
        lVar9 = 4;
      }
      else if ((longlong *)param_1[4] == plVar1) {
        lVar9 = 5;
      }
      else if ((longlong *)param_1[6] == plVar1) {
        lVar9 = 6;
      }
      else if ((longlong *)param_1[7] == plVar1) {
        lVar9 = 7;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_138);
        lVar9 = 8;
      }
    }
    if ((RefCountImpl *)(&local_570)[lVar9 * 0x12 + -1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)(&local_570)[lVar9 * 0x12 + -1]);
    }
    if (*(RefCountImpl **)(param_2 + 0x10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 0x10));
    }
    *(undefined8 *)(param_2 + 0x10) = (&local_570)[lVar9 * 0x12 + -1];
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 0x20;
  }
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)*param_1) {
    if ((longlong *)param_1[5] != plVar1) {
      if ((longlong *)param_1[8] == plVar1) {
        lVar10 = 1;
      }
      else if ((longlong *)param_1[1] == plVar1) {
        lVar10 = 2;
      }
      else if ((longlong *)param_1[9] == plVar1) {
        lVar10 = 3;
      }
      else if ((longlong *)param_1[2] == plVar1) {
        lVar10 = 4;
      }
      else if ((longlong *)param_1[4] == plVar1) {
        lVar10 = 5;
      }
      else if ((longlong *)param_1[6] == plVar1) {
        lVar10 = 6;
      }
      else if ((longlong *)param_1[7] == plVar1) {
        lVar10 = 7;
      }
      else if ((longlong *)param_1[3] == plVar1) {
        lVar10 = 8;
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1,local_a8);
        lVar10 = 9;
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x65) =
         *(undefined1 *)((longlong)&local_558 + lVar10 * 0x90 + 5);
    *(ushort *)((longlong)param_2 + 0x62) = *(ushort *)((longlong)param_2 + 0x62) | 0x200;
  }
  puVar8 = (undefined8 *)&stack0x00000028;
  do {
    puVar8 = puVar8 + -0x12;
    lVar11 = lVar11 + -1;
    if ((RefCountImpl *)*puVar8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar8);
    }
  } while (lVar11 != 0);
  return;
}



// FUNCTION 1433aad70 FUN_1433aad70 body=309 status=ok
// SIG undefined FUN_1433aad70(void)

longlong * FUN_1433aad70(longlong param_1,int param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)FUN_1433ab9d0();
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *plVar2 = -1;
  plVar1 = (longlong *)(param_1 + 0x48);
  plVar2[1] = -1;
  *(undefined4 *)(plVar2 + 2) = 0xffffffff;
  uVar5 = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  *(undefined2 *)(plVar2 + 0xe) = 0xff;
  *plVar2 = *plVar1;
  plVar2[1] = (longlong)plVar1;
  *(longlong **)(*plVar1 + 8) = plVar2;
  *plVar1 = (longlong)plVar2;
  *(int *)((longlong)plVar2 + 0x14) = param_2;
  if (0 < *(longlong *)(param_1 + 0x30)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    do {
      lVar3 = lVar4 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (lVar3 + uVar5) * 8) + 0x14) <=
          param_2) {
        uVar5 = lVar3 + uVar5 + 1;
        lVar3 = lVar4 + (-1 - lVar3);
      }
      lVar4 = lVar3;
    } while (0 < lVar3);
  }
  FUN_1433ab800(param_1 + 0x28,*(longlong *)(param_1 + 0x30) + 1);
  if (uVar5 < *(longlong *)(param_1 + 0x30) - 1U) {
    _Src = (void *)(*(longlong *)(param_1 + 0x28) + uVar5 * 8);
    memmove((void *)((longlong)_Src + 8),_Src,(*(longlong *)(param_1 + 0x30) - uVar5) * 8 - 8);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar5 * 8) = plVar2;
  return plVar2;
}



// FUNCTION 1433aaeb0 FUN_1433aaeb0 body=241 status=ok
// SIG undefined FUN_1433aaeb0(void)

void FUN_1433aaeb0(longlong param_1,int param_2)

{
  void *_Dst;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (0 < *(longlong *)(param_1 + 0x30)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    do {
      lVar3 = lVar2 >> 1;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (lVar3 + lVar4) * 8) + 0x14) <=
          param_2) {
        lVar4 = lVar3 + lVar4 + 1;
        lVar3 = lVar2 + (-1 - lVar3);
      }
      lVar2 = lVar3;
    } while (0 < lVar3);
    if (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
      if ((*(int *)((longlong)plVar1 + 0x14) == param_2) && (plVar1 != (longlong *)0x0)) {
        *(longlong *)(*plVar1 + 8) = plVar1[1];
        *(longlong *)plVar1[1] = *plVar1;
        *plVar1 = -1;
        plVar1[1] = -1;
        if (*(longlong *)(param_1 + 0x30) == 1) {
          Scaleform::
          ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
          ::Clear(param_1 + 0x28);
        }
        else {
          _Dst = (void *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x30) - lVar4) * 8 - 8)
          ;
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
        }
        *plVar1 = *(longlong *)(param_1 + 0x18);
        *(longlong **)(param_1 + 0x18) = plVar1;
      }
    }
  }
  return;
}



// FUNCTION 1433aafb0 FUN_1433aafb0 body=142 status=ok
// SIG undefined FUN_1433aafb0(void)

void FUN_1433aafb0(undefined8 param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong local_18;
  uint local_10;
  
  for (; param_3 <= param_4; param_3 = param_3 + 1) {
    (**(code **)(*param_2 + 0x58))(param_2,&local_18,param_3);
    uVar3 = 0;
    if (local_10 != 0) {
      do {
        plVar1 = *(longlong **)(local_18 + uVar3 * 8);
        (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_3);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < local_10);
    }
  }
  return;
}



// FUNCTION 1433ab050 FUN_1433ab050 body=820 status=ok
// SIG undefined FUN_1433ab050(void)

void FUN_1433ab050(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_res8;
  uint uStackX_c;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  RefCountImpl *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_68;
  longlong local_60;
  longlong *local_48;
  undefined1 local_40 [8];
  
  local_48 = (longlong *)(param_1 + 0x48);
  local_res8 = 0;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  if (*(longlong **)(param_1 + 0x50) == local_48) {
    return;
  }
  lVar8 = (ulonglong)uStackX_c << 0x20;
  lVar9 = (ulonglong)uStackX_c << 0x20;
  lVar10 = (ulonglong)uStackX_c << 0x20;
  lVar11 = *(longlong *)(param_1 + 0x50);
  lVar12 = (ulonglong)uStackX_c << 0x20;
  do {
    cVar2 = *(char *)(lVar11 + 0x70);
    if (cVar2 == '\0') {
      FUN_1432bfaf0(local_d8);
      local_b8 = 0x3f800000;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_a8 = 0;
      uStack_a4 = 0x3f800000;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_98 = (RefCountImpl *)0x0;
      local_78 = 0;
      local_90 = 0;
      local_80 = 0;
      local_88 = 0x40000;
      local_74 = 0x100;
      FUN_1433aa800(lVar11 + 0x18,local_d8);
      lVar7 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
      if (local_60 == 0) {
        local_res20 = lVar7 + 0x48;
        bVar6 = true;
        *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
        lVar10 = local_res20;
      }
      else {
        bVar5 = true;
        local_res20 = FUN_143360a60(lVar7);
        *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
        lVar8 = local_res20;
      }
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      if (bVar5) {
        bVar5 = false;
        piVar1 = (int *)(lVar8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar8);
        }
      }
      if (bVar6) {
        bVar6 = false;
        piVar1 = (int *)(lVar10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar10);
        }
      }
      (**(code **)(*param_2 + 0x3b8))
                (param_2,local_d8,&local_res20,local_68,0,*(undefined4 *)(lVar11 + 0x10),
                 *(byte *)(lVar11 + 0x71) & 2 | 4,0,0);
      lVar7 = local_res20;
LAB_1433ab325:
      piVar1 = (int *)(lVar7 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
LAB_1433ab330:
      if (local_98 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_98);
      }
    }
    else {
      if (cVar2 == '\x01') {
        FUN_1432bfaf0(local_d8);
        local_b8 = 0x3f800000;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = 0;
        uStack_a4 = 0x3f800000;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_98 = (RefCountImpl *)0x0;
        local_78 = 0;
        local_90 = 0;
        local_80 = 0;
        local_88 = 0x40000;
        local_74 = 0x100;
        FUN_1433aa800(lVar11 + 0x18,local_d8);
        FUN_14336fb10(param_2,local_d8);
        goto LAB_1433ab330;
      }
      if (cVar2 == '\x02') {
        FUN_1432bfaf0(local_d8);
        local_b8 = 0x3f800000;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = 0;
        uStack_a4 = 0x3f800000;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_98 = (RefCountImpl *)0x0;
        local_78 = 0;
        local_90 = 0;
        local_80 = 0;
        local_88 = 0x40000;
        local_74 = 0x100;
        FUN_1433aa800(lVar11 + 0x18,local_d8);
        lVar7 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
        if (local_60 == 0) {
          local_res18 = lVar7 + 0x48;
          bVar4 = true;
          *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
          lVar12 = local_res18;
        }
        else {
          bVar3 = true;
          local_res18 = FUN_143360a60(lVar7);
          *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
          lVar9 = local_res18;
        }
        *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
        if (bVar3) {
          bVar3 = false;
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
        }
        if (bVar4) {
          bVar4 = false;
          piVar1 = (int *)(lVar12 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar12);
          }
        }
        (**(code **)(*param_2 + 0x3e0))(param_2,local_d8,&local_res18,local_40);
        lVar7 = local_res18;
        goto LAB_1433ab325;
      }
      if (cVar2 == '\x03') {
        local_res8 = 0x40000;
        FUN_143370350(param_2,*(undefined4 *)(lVar11 + 0x14),&local_res8);
      }
    }
    if (lVar11 == *local_48) {
      return;
    }
    lVar11 = *(longlong *)(lVar11 + 8);
  } while( true );
}



// FUNCTION 1433ab390 FUN_1433ab390 body=190 status=ok
// SIG undefined FUN_1433ab390(void)

longlong FUN_1433ab390(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1432c4390((longlong)(*(ulonglong *)*param_3 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*(ulonglong *)*param_3 & 0xfffffffffffffffc) &
                        0x7fffffffffffffff,0x1505);
  lVar3 = *param_1;
  if ((lVar3 != 0) &&
     (lVar2 = FUN_1433ab450(param_1,param_3,*(ulonglong *)(lVar3 + 8) & uVar1), -1 < lVar2)) {
    lVar3 = (lVar2 + 1) * 0x20 + lVar3;
    FUN_1432c4d80(lVar3,*param_3);
    *(undefined4 *)(lVar3 + 8) = *(undefined4 *)param_3[1];
    return lVar3;
  }
  lVar3 = FUN_143314df0(param_1,param_2,param_3,uVar1);
  return lVar3;
}



// FUNCTION 1433ab450 FUN_1433ab450 body=160 status=ok
// SIG undefined FUN_1433ab450(void)

longlong FUN_1433ab450(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar5 == -2) || (lVar6 = param_3, plVar5[1] != param_3)) {
    return -1;
  }
  do {
    if (plVar5[1] == param_3) {
      pcVar3 = (char *)((plVar5[2] & 0xfffffffffffffffcU) + 0xc);
      lVar4 = ((*(ulonglong *)*param_2 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return lVar6;
      }
    }
    lVar6 = *plVar5;
    if (lVar6 == -1) {
      return -1;
    }
    plVar5 = (longlong *)(*param_1 + 0x10 + lVar6 * 0x20);
  } while( true );
}



// FUNCTION 1433ab4f0 FUN_1433ab4f0 body=89 status=ok
// SIG undefined FUN_1433ab4f0(void)

undefined8 FUN_1433ab4f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433aa0f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1433ab600 FUN_1433ab600 body=31 status=ok
// SIG undefined FUN_1433ab600(void)

undefined8 FUN_1433ab600(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x88))();
  return param_2;
}



// FUNCTION 1433ab630 FUN_1433ab630 body=143 status=ok
// SIG undefined FUN_1433ab630(void)

void FUN_1433ab630(longlong param_1,longlong param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + param_2 * 8);
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  *(longlong *)plVar1[1] = *plVar1;
  *plVar1 = -1;
  plVar1[1] = -1;
  if (*(longlong *)(param_1 + 0x30) == 1) {
    Scaleform::
    ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
    ::Clear(param_1 + 0x28);
  }
  else {
    _Dst = (void *)(*(longlong *)(param_1 + 0x28) + param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x30) - param_2) * 8 - 8);
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
  }
  *plVar1 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar1;
  return;
}



// FUNCTION 1433ab6c0 FUN_1433ab6c0 body=164 status=ok
// SIG undefined FUN_1433ab6c0(void)

void FUN_1433ab6c0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x108;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433ab770 FUN_1433ab770 body=134 status=ok
// SIG undefined FUN_1433ab770(void)

void FUN_1433ab770(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1433ab7b7;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1433ab7b7;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1433ab6c0(param_1,param_1,uVar4);
LAB_1433ab7b7:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x10 + *param_1);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
      }
      puVar2 = puVar2 + 2;
    }
  }
  return;
}



// FUNCTION 1433ab800 FUN_1433ab800 body=112 status=ok
// SIG undefined FUN_1433ab800(void)

void FUN_1433ab800(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1432f2240(param_1,*(undefined8 *)(param_1 + 0x18),param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1432f2240(param_1,*(undefined8 *)(param_1 + 0x18),(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1433ab870 FUN_1433ab870 body=146 status=ok
// SIG undefined FUN_1433ab870(void)

void FUN_1433ab870(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x40)) {
    puVar3 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x38));
    *puVar3 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  }
  else if (param_3 != 0) {
    if ((*(longlong *)(param_3 + 0x20) == 0) && (lVar2 = Scaleform::Log::GetGlobalLog(), lVar2 == 0)
       ) {
      return;
    }
    lVar2 = *(longlong *)(param_3 + 0x20);
    uVar1 = *(ulonglong *)(param_1 + 0x40);
    if (lVar2 == 0) {
      lVar2 = Scaleform::Log::GetGlobalLog();
    }
    FUN_1432bbf90(lVar2,
                  "Invalid SWF file: failed to load sprite\'s frame #%d since total frames counter is %d"
                  ,*(int *)(param_1 + 0x34) + 1,uVar1 & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 1433ab910 FUN_1433ab910 body=189 status=ok
// SIG undefined FUN_1433ab910(void)

void FUN_1433ab910(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ushort local_res10 [12];
  
  (**(code **)(*param_2 + 0x50))(param_2,local_res10);
  bVar1 = (byte)local_res10[0];
  if ((bVar1 >> 2 & 1) != 0) {
    *(longlong **)(param_1 + 8) = param_2;
  }
  if ((bVar1 >> 3 & 1) != 0) {
    *(longlong **)(param_1 + 0x10) = param_2;
  }
  if ((bVar1 >> 5 & 1) != 0) {
    *(longlong **)(param_1 + 0x18) = param_2;
  }
  if ((char)bVar1 < '\0') {
    *(longlong **)(param_1 + 0x20) = param_2;
  }
  if ((local_res10[0] & 1) != 0) {
    *(longlong **)(param_1 + 0x28) = param_2;
  }
  if ((bVar1 >> 6 & 1) != 0) {
    *(longlong **)(param_1 + 0x30) = param_2;
  }
  if ((bVar1 >> 4 & 1) != 0) {
    *(longlong **)(param_1 + 0x38) = param_2;
  }
  if ((bVar1 >> 1 & 1) != 0) {
    *(longlong **)(param_1 + 0x40) = param_2;
  }
  if ((local_res10[0] >> 8 & 1) != 0) {
    *(longlong **)(param_1 + 0x48) = param_2;
  }
  if ((local_res10[0] >> 9 & 1) != 0) {
    *(longlong **)(param_1 + 0x50) = param_2;
  }
  return;
}



// FUNCTION 1433ab9d0 FUN_1433ab9d0 body=170 status=ok
// SIG undefined FUN_1433ab9d0(void)

longlong * FUN_1433ab9d0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x32) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x78 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 2;
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)param_1[4] + 0x50))((longlong *)param_1[4],0x1778,local_res8);
  plVar2[0x2ee] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 6000) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1433aba80 FUN_1433aba80 body=157 status=ok
// SIG undefined FUN_1433aba80(void)

uint FUN_1433aba80(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 1 | 2;
  if ((param_1 & 2) == 0) {
    uVar1 = param_1 & 1;
  }
  uVar2 = uVar1 | 4;
  if ((param_1 & 4) == 0) {
    uVar2 = uVar1;
  }
  if (((byte)param_1 & 6) == 6) {
    uVar2 = 6;
  }
  uVar1 = uVar2 | 0x10;
  if ((param_1 & 0x10) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x20;
  if ((param_1 & 0x20) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x40;
  if ((param_1 & 0x40) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x80;
  if ((param_1 & 0x80) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x100;
  if ((param_1 & 0x100) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x200;
  if ((param_1 & 0x200) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 8;
  if ((param_1 & 8) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 1433abb30 FUN_1433abb30 body=52 status=ok
// SIG undefined FUN_1433abb30(void)

undefined8 * FUN_1433abb30(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa5e0;
  param_1[2] = &DAT_145b057e4;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1433abb70 FUN_1433abb70 body=262 status=ok
// SIG undefined FUN_1433abb70(void)

void FUN_1433abb70(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0x3f800000;
  uStack_20 = 0;
  local_98 = 0x7149f2ca;
  uStack_94 = 0x7149f2ca;
  uStack_90 = 0xf149f2ca;
  uStack_8c = 0xf149f2ca;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  local_78 = (**(code **)(*param_1 + 0x30))();
  local_48 = 0x3f800000;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_78,local_40,&local_88);
  while (iVar1 != 0) {
    if ((local_88 == 0) == (local_84 == 0)) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_78);
    }
    else {
      FUN_14332fd60(param_1,&local_28,&local_78,local_40,&local_98);
    }
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_78,local_40,&local_88);
  }
  *param_2 = CONCAT44(uStack_94,local_98);
  param_2[1] = CONCAT44(uStack_8c,uStack_90);
  return;
}



// FUNCTION 1433abc80 FUN_1433abc80 body=358 status=ok
// SIG undefined FUN_1433abc80(void)

undefined1
FUN_1433abc80(undefined8 param_1,longlong param_2,float *param_3,char param_4,longlong param_5)

{
  RefCountImpl *pRVar1;
  undefined1 uVar2;
  RefCountImpl *this;
  float *pfVar3;
  undefined ***pppuVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined **local_28;
  undefined4 *local_20;
  undefined **local_18;
  RefCountImpl *local_10;
  
  this = (RefCountImpl *)0x0;
  if ((param_5 != 0) && ((*(byte *)(param_5 + 0x6a) & 1) != 0)) {
    this = (RefCountImpl *)FUN_143367e10();
  }
  (**(code **)(*(longlong *)(param_2 + 0x10) + 0x28))(param_2 + 0x10,&local_38);
  if (this != (RefCountImpl *)0x0) {
    pfVar3 = (float *)FUN_1433d0060(this,&local_18,&local_38);
    local_2c = pfVar3[3];
    local_30 = pfVar3[2];
    local_34 = pfVar3[1];
    local_38 = *pfVar3;
  }
  if ((((local_30 < *param_3) || (*param_3 < local_38)) || (local_2c < param_3[1])) ||
     (param_3[1] < local_34)) {
    uVar2 = 0;
  }
  else if (param_4 == '\0') {
    uVar2 = 1;
  }
  else {
    local_20 = (undefined4 *)0x0;
    local_28 = &PTR_FUN_145b02eb8;
    local_18 = &PTR_FUN_145b02ee0;
    local_10 = (RefCountImpl *)0x0;
    pppuVar4 = &local_18;
    pRVar1 = this;
    if (this == (RefCountImpl *)0x0) {
      local_20 = &DAT_14621c810;
      pppuVar4 = &local_28;
      pRVar1 = local_10;
    }
    local_10 = pRVar1;
    uVar2 = FUN_143379690(param_1,pppuVar4);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar2;
}



// FUNCTION 1433abe00 FUN_1433abe00 body=38 status=ok
// SIG undefined FUN_1433abe00(void)

undefined1 FUN_1433abe00(void)

{
  return 0;
}



// FUNCTION 1433abe30 FUN_1433abe30 body=267 status=ok
// SIG undefined FUN_1433abe30(void)

int FUN_1433abe30(longlong param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_38 [2];
  longlong local_28;
  uint local_20;
  uint *local_18;
  
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = 0x3d4ccccd;
  }
  FUN_1433ae240(local_38,param_2,*(undefined8 *)(param_1 + 0x10),uVar2);
  iVar1 = 1;
  do {
    if ((*(byte *)(local_28 + local_38[0]) & (byte)(1 << (7U - (char)local_20 & 0x1f))) != 0) {
      if (iVar1 != 0) {
        *param_4 = *(undefined4 *)(param_2 + 0x24);
        param_4[1] = *(undefined4 *)(param_2 + 0x28);
        param_4[2] = *(undefined4 *)(param_2 + 0x2c);
        *param_3 = (float)*(int *)(param_2 + 0xc) * *(float *)(param_2 + 0x30);
        param_3[1] = (float)*(int *)(param_2 + 0x10) * *(float *)(param_2 + 0x30);
      }
      break;
    }
    iVar1 = FUN_1433af3b0(local_38,iVar1);
  } while (iVar1 != 0);
  *local_18 = ((local_18[7] & 0xf | (int)local_28 << 4) << 4 | local_18[8] & 0xf) << 3 |
              local_20 & 7;
  return iVar1;
}



// FUNCTION 1433abf50 FUN_1433abf50 body=291 status=ok
// SIG undefined FUN_1433abf50(void)

int FUN_1433abf50(longlong param_1,longlong param_2,float *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_30 [2];
  int local_20;
  undefined4 uStack_1c;
  uint local_18;
  uint *local_10;
  
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = 0x3d4ccccd;
  }
  FUN_1433ae240(local_30,param_2,*(undefined8 *)(param_1 + 0x10),uVar2);
  iVar1 = 0;
  if ((*(byte *)(CONCAT44(uStack_1c,local_20) + local_30[0]) &
      (byte)(1 << (7U - (char)local_18 & 0x1f))) != 0) {
    iVar1 = FUN_1433af120(local_30,&local_48);
    if (iVar1 == 2) {
      *param_3 = (float)local_48 * *(float *)(param_2 + 0x30);
      param_3[1] = (float)local_44 * *(float *)(param_2 + 0x30);
      param_3[2] = (float)local_40 * *(float *)(param_2 + 0x30);
      param_3[3] = (float)local_3c * *(float *)(param_2 + 0x30);
    }
    else {
      *param_3 = (float)local_40 * *(float *)(param_2 + 0x30);
      param_3[1] = (float)local_3c * *(float *)(param_2 + 0x30);
    }
  }
  *local_10 = ((local_10[7] & 0xf | local_20 << 4) << 4 | local_10[8] & 0xf) << 3 | local_18 & 7;
  return iVar1;
}



// FUNCTION 1433ac080 Read body=103 status=ok
// SIG undefined Read(void)

undefined1 Scaleform::GFx::ConstShapeNoStyles::Read(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x30);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_48 = param_1;
  uVar1 = FUN_1433ad750(&local_48);
  FUN_1433ae3b0(&local_20);
  FUN_1433ae330(&local_38);
  return uVar1;
}



// FUNCTION 1433ac0f0 FUN_1433ac0f0 body=113 status=ok
// SIG undefined FUN_1433ac0f0(void)

void FUN_1433ac0f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0x47;
  puVar1 = (undefined8 *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145afa5e0;
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    *puVar1 = &PTR_FUN_145afb530;
    return;
  }
  return;
}



// FUNCTION 1433ac170 FUN_1433ac170 body=152 status=ok
// SIG undefined FUN_1433ac170(void)

undefined8 * FUN_1433ac170(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afa5e0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_145afa670;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1433ac5c0(param_1,*(uint *)(param_2 + 0x28),*(longlong *)(param_2 + 0x20),
                *(undefined4 *)(param_2 + 0x2c),
                (ulonglong)*(uint *)(param_2 + 0x28) * 0x10 + *(longlong *)(param_2 + 0x20));
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1433ac210 FUN_1433ac210 body=169 status=ok
// SIG undefined FUN_1433ac210(void)

void FUN_1433ac210(RefCountImplCore *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar3 = 0;
  *(undefined ***)param_1 = &PTR_FUN_145afa670;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      if (*(RefCountImpl **)(lVar1 + 8) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 8));
      }
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x18);
    do {
      if ((RefCountImpl *)puVar2[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[1]);
      }
      if ((RefCountImpl *)*puVar2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 5;
    } while (uVar3 < *(uint *)(param_1 + 0x2c));
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433ac2c0 GetFillStyle body=76 status=ok
// SIG undefined GetFillStyle(void)

void Scaleform::GFx::ConstShapeWithStyles::GetFillStyle
               (longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((ulonglong)(param_2 - 1) * 0x10 + *(longlong *)(param_1 + 0x20));
  *param_3 = *puVar1;
  if (*(RefCountImpl **)(puVar1 + 2) != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(*(RefCountImpl **)(puVar1 + 2));
  }
  if (*(RefCountImpl **)(param_3 + 2) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_3 + 2));
  }
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar1 + 2);
  return;
}



// FUNCTION 1433ac350 FUN_1433ac350 body=609 status=ok
// SIG undefined FUN_1433ac350(void)

undefined8
FUN_1433ac350(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  RefCountImpl *pRVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  uVar9 = 0;
  local_60 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x30);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_68 = param_1;
  cVar4 = FUN_1433ad750(&local_68);
  uVar13 = local_38;
  lVar3 = local_40;
  uVar14 = local_50;
  if (cVar4 == '\0') {
    uVar11 = 0;
  }
  else {
    *(int *)(param_1 + 0x28) = (int)local_50;
    *(int *)(param_1 + 0x2c) = (int)local_38;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x38);
    if (((int)local_50 == 0) && ((int)local_38 == 0)) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0x50))
                         (plVar1,(local_50 & 0xffffffff) * 0x10 + (local_38 & 0xffffffff) * 0x28,0,
                          param_4,param_5);
      *(undefined4 **)(param_1 + 0x20) = puVar5;
      lVar6 = local_58;
      uVar12 = uVar9;
      if (*(int *)(param_1 + 0x28) != 0) {
        do {
          puVar7 = (undefined4 *)(uVar12 * 0x10 + lVar6);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar7;
            if (*(RefCountImpl **)(puVar7 + 2) != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(puVar7 + 2));
            }
            *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar7 + 2);
            lVar6 = local_58;
          }
          puVar5 = puVar5 + 4;
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0x28));
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        do {
          puVar7 = puVar5 + uVar9 * 10;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *(undefined4 *)(lVar3 + uVar9 * 0x28);
            puVar7[1] = *(undefined4 *)(lVar3 + 4 + uVar9 * 0x28);
            puVar7[2] = *(undefined4 *)(lVar3 + 8 + uVar9 * 0x28);
            puVar7[3] = *(undefined4 *)(lVar3 + 0xc + uVar9 * 0x28);
            puVar7[4] = *(undefined4 *)(lVar3 + 0x10 + uVar9 * 0x28);
            pRVar2 = *(RefCountImpl **)(lVar3 + 0x18 + uVar9 * 0x28);
            if (pRVar2 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::AddRef(pRVar2);
            }
            *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(lVar3 + 0x18 + uVar9 * 0x28);
            pRVar2 = *(RefCountImpl **)(lVar3 + 0x20 + uVar9 * 0x28);
            if (pRVar2 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::AddRef(pRVar2);
            }
            *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar3 + 0x20 + uVar9 * 0x28);
          }
          uVar10 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0x2c));
      }
    }
    uVar11 = 1;
  }
  if (uVar13 != 0) {
    puVar8 = (undefined8 *)(lVar3 + -0x10 + uVar13 * 0x28);
    do {
      if ((RefCountImpl *)puVar8[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar8[1]);
      }
      if ((RefCountImpl *)*puVar8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar8);
      }
      puVar8 = puVar8 + -5;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (lVar3 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
  }
  if (uVar14 != 0) {
    puVar8 = (undefined8 *)(local_58 + -8 + uVar14 * 0x10);
    do {
      if ((RefCountImpl *)*puVar8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar8);
      }
      puVar8 = puVar8 + -2;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (local_58 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_58);
  }
  return uVar11;
}



// FUNCTION 1433ac5c0 FUN_1433ac5c0 body=525 status=ok
// SIG undefined FUN_1433ac5c0(void)

void FUN_1433ac5c0(longlong param_1,uint param_2,longlong param_3,uint param_4,longlong param_5)

{
  RefCountImpl *pRVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 local_res10 [2];
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(uint *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x2c) = param_4;
  if ((param_2 == 0) && (param_4 == 0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  puVar2 = (undefined4 *)
           (**(code **)(*DAT_146b62f28 + 0x70))
                     (DAT_146b62f28,param_1,(ulonglong)param_2 * 0x10 + (ulonglong)param_4 * 0x28,0)
  ;
  uVar5 = 0;
  *(undefined4 **)(param_1 + 0x20) = puVar2;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      uVar7 = (ulonglong)uVar5;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(param_3 + uVar7 * 0x10);
        pRVar1 = *(RefCountImpl **)(param_3 + 8 + uVar7 * 0x10);
        if (pRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar1);
        }
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_3 + 8 + uVar7 * 0x10);
      }
      if (*(longlong *)(puVar2 + 2) != 0) {
        local_res10[0] = 0x47;
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res10);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1433ae190(lVar3,*(undefined8 *)(puVar2 + 2));
        }
        if (*(RefCountImpl **)(puVar2 + 2) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar2 + 2));
        }
        *(undefined8 *)(puVar2 + 2) = uVar4;
      }
      puVar2 = puVar2 + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x28));
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar6 = puVar2 + 1;
    param_5 = param_5 - (longlong)puVar2;
    do {
      if (puVar6 + -1 != (undefined4 *)0x0) {
        puVar6[-1] = *(undefined4 *)(param_5 + -4 + (longlong)puVar6);
        *puVar6 = *(undefined4 *)(param_5 + (longlong)puVar6);
        puVar6[1] = *(undefined4 *)(param_5 + 4 + (longlong)puVar6);
        puVar6[2] = *(undefined4 *)(param_5 + 8 + (longlong)puVar6);
        puVar6[3] = *(undefined4 *)(param_5 + 0xc + (longlong)puVar6);
        pRVar1 = *(RefCountImpl **)(param_5 + 0x14 + (longlong)puVar6);
        if (pRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar1);
        }
        *(undefined8 *)(puVar6 + 5) = *(undefined8 *)(param_5 + 0x14 + (longlong)puVar6);
        pRVar1 = *(RefCountImpl **)(param_5 + 0x1c + (longlong)puVar6);
        if (pRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(pRVar1);
        }
        *(undefined8 *)(puVar6 + 7) = *(undefined8 *)(param_5 + 0x1c + (longlong)puVar6);
      }
      if (*(longlong *)(puVar2 + 6) != 0) {
        local_res10[0] = 0x47;
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res10);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1433ae190(lVar3,*(undefined8 *)(puVar2 + 6));
        }
        if (*(RefCountImpl **)(puVar2 + 6) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar2 + 6));
        }
        *(undefined8 *)(puVar2 + 6) = uVar4;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 10;
    } while (uVar7 < *(uint *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 1433ac7e0 FUN_1433ac7e0 body=72 status=ok
// SIG undefined FUN_1433ac7e0(void)

void FUN_1433ac7e0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0x47;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res10);
  if (lVar1 != 0) {
    FUN_1433ac170(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1433ac830 FUN_1433ac830 body=669 status=ok
// SIG undefined FUN_1433ac830(void)

void FUN_1433ac830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *local_38;
  longlong lStack_30;
  
  uVar7 = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar8 = (undefined4 *)(uVar6 * 0x10 + lVar1);
      if (*(longlong *)(puVar8 + 2) != 0) {
        uVar4 = *(uint *)(*(longlong *)(puVar8 + 2) + 0x44);
        if (uVar4 != 0xffffffff) {
          if ((*(char *)(param_2 + 0x48) == '\0') || (*(uint *)(param_2 + 8) <= uVar4)) {
            FUN_14330cc40(param_2,&local_38);
          }
          else {
            plVar5 = (longlong *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_2 + 0x10));
            if (*plVar5 != 0) {
              Scaleform::GFx::Resource::AddRef();
            }
            if (local_38 != (longlong *)0x0) {
              FUN_1432de450();
            }
            local_38 = (longlong *)*plVar5;
            lStack_30 = plVar5[1];
          }
          if (local_38 != (longlong *)0x0) {
            uVar4 = (**(code **)(*local_38 + 0x10))();
            if ((uVar4 & 0xff00) == 0x100) {
              lVar2 = *(longlong *)(puVar8 + 2);
              plVar5 = (longlong *)local_38[3];
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
              plVar9 = *(longlong **)(lVar2 + 0x10);
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x10))();
              }
              *(longlong **)(lVar2 + 0x10) = plVar5;
              *(undefined4 *)(*(longlong *)(puVar8 + 2) + 0x44) = 0xffffffff;
              goto LAB_1433ac96f;
            }
          }
          if (*(RefCountImpl **)(puVar8 + 2) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar8 + 2));
          }
          *(undefined8 *)(puVar8 + 2) = 0;
          *puVar8 = 0xffa7dd39;
        }
      }
LAB_1433ac96f:
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    plVar5 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x10 + lVar1 + 0x18);
    do {
      if (*plVar5 != 0) {
        uVar4 = *(uint *)(*plVar5 + 0x44);
        if (uVar4 != 0xffffffff) {
          if ((*(char *)(param_2 + 0x48) == '\0') || (*(uint *)(param_2 + 8) <= uVar4)) {
            FUN_14330cc40(param_2,&local_38);
          }
          else {
            plVar9 = (longlong *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_2 + 0x10));
            if (*plVar9 != 0) {
              Scaleform::GFx::Resource::AddRef();
            }
            if (local_38 != (longlong *)0x0) {
              FUN_1432de450();
            }
            local_38 = (longlong *)*plVar9;
            lStack_30 = plVar9[1];
          }
          if (local_38 != (longlong *)0x0) {
            uVar4 = (**(code **)(*local_38 + 0x10))();
            if ((uVar4 & 0xff00) == 0x100) {
              lVar1 = *plVar5;
              plVar9 = (longlong *)local_38[3];
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              plVar3 = *(longlong **)(lVar1 + 0x10);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x10))();
              }
              *(longlong **)(lVar1 + 0x10) = plVar9;
              *(undefined4 *)(*plVar5 + 0x44) = 0xffffffff;
              goto LAB_1433aca82;
            }
          }
          if ((RefCountImpl *)*plVar5 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar5);
          }
          *plVar5 = 0;
          *(undefined4 *)(plVar5 + -1) = 0xffa7dd39;
        }
      }
LAB_1433aca82:
      uVar7 = uVar7 + 1;
      plVar5 = plVar5 + 5;
    } while (uVar7 < *(uint *)(param_1 + 0x2c));
  }
  if (local_38 != (longlong *)0x0) {
    FUN_1432de450();
  }
  return;
}



// FUNCTION 1433acae0 FUN_1433acae0 body=177 status=ok
// SIG undefined FUN_1433acae0(void)

undefined8 * FUN_1433acae0(undefined8 *param_1,RefCountImpl *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  uVar2 = 0;
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_145b053e0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[5] = param_2;
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_res8);
  if (lVar1 != 0) {
    uVar2 = FUN_143371000(lVar1,param_1[5],0);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = uVar2;
  return param_1;
}



// FUNCTION 1433acba0 FUN_1433acba0 body=151 status=ok
// SIG undefined FUN_1433acba0(void)

float * FUN_1433acba0(longlong param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  longlong *plVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))(*(longlong **)(param_1 + 0x28),&local_28);
  if (local_28 < local_20) {
    if (local_24 < local_1c) {
      local_18 = local_28;
      pfVar2 = &local_18;
      local_14 = local_24;
      local_10 = local_20;
      local_c = local_1c;
      goto LAB_1433acc13;
    }
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  pfVar2 = (float *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_18);
LAB_1433acc13:
  *param_2 = *pfVar2;
  param_2[1] = pfVar2[1];
  fVar1 = pfVar2[2];
  param_2[3] = pfVar2[3];
  param_2[2] = fVar1;
  return param_2;
}



// FUNCTION 1433acc40 FUN_1433acc40 body=162 status=ok
// SIG undefined FUN_1433acc40(void)

float * FUN_1433acc40(longlong *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float *pfVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  (**(code **)(*(longlong *)param_1[5] + 0x68))((longlong *)param_1[5],&local_38);
  if (local_38 < local_30) {
    if (local_34 < local_2c) {
      local_28 = local_38;
      pfVar2 = &local_28;
      local_24 = local_34;
      local_20 = local_30;
      local_1c = local_2c;
      goto LAB_1433accb9;
    }
  }
  pfVar2 = (float *)(**(code **)(*param_1 + 0x38))(param_1,&local_28,param_3);
LAB_1433accb9:
  *param_2 = *pfVar2;
  param_2[1] = pfVar2[1];
  fVar1 = pfVar2[2];
  param_2[3] = pfVar2[3];
  param_2[2] = fVar1;
  return param_2;
}



// FUNCTION 1433accf0 FUN_1433accf0 body=151 status=ok
// SIG undefined FUN_1433accf0(void)

undefined8 * FUN_1433accf0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  RefCountImpl *this;
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  this = (RefCountImpl *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))();
  (**(code **)(*(longlong *)this + 0x88))(this,param_3);
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_res8);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143371000(lVar1,this,0);
  }
  *param_2 = uVar2;
  Scaleform::RefCountImpl::Release(this);
  return param_2;
}



// FUNCTION 1433acd90 FUN_1433acd90 body=1441 status=ok
// SIG undefined FUN_1433acd90(void)

undefined8 * FUN_1433acd90(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  RefCountImpl *pRVar2;
  RefCountImpl *pRVar3;
  longlong lVar4;
  RefCountImpl *this;
  RefCountImpl *pRVar5;
  float *pfVar6;
  char *pcVar7;
  RefCountImpl *this_00;
  undefined4 *puVar8;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  float local_108 [10];
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pRVar5 = (RefCountImpl *)0x0;
  local_res8[0] = 0x47;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_145b05460;
  param_1[5] = 0;
  pRVar2 = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x80,local_res8);
  this_00 = pRVar5;
  if (pRVar2 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar2 + 8) = 0;
    *(undefined ***)pRVar2 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar2 + 8) = 1;
    *(undefined4 *)(pRVar2 + 0x10) = 0;
    *(undefined8 *)(pRVar2 + 0x18) = 0;
    *(undefined8 *)(pRVar2 + 0x20) = 0;
    *(undefined8 *)(pRVar2 + 0x28) = 0;
    *(undefined8 *)(pRVar2 + 0x30) = 0;
    *(undefined8 *)(pRVar2 + 0x38) = 0;
    *(undefined8 *)(pRVar2 + 0x40) = 0;
    *(RefCountImpl **)(pRVar2 + 0x48) = pRVar2 + 0x68;
    *(undefined8 *)(pRVar2 + 0x50) = 0;
    *(undefined8 *)(pRVar2 + 0x58) = 0;
    *(undefined4 *)(pRVar2 + 0x60) = 0;
    *(undefined ***)pRVar2 = &PTR_FUN_145af9280;
    *(undefined8 *)(pRVar2 + 0x68) = 0;
    *(undefined8 *)(pRVar2 + 0x70) = 0;
    *(undefined8 *)(pRVar2 + 0x78) = 0;
    this_00 = pRVar2;
  }
  local_res10[0] = 0x47;
  local_b8 = 0;
  local_b0 = 0;
  pRVar3 = (RefCountImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res10);
  pRVar2 = pRVar5;
  if (pRVar3 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar3 + 8) = 0;
    *(undefined ***)pRVar3 = &PTR_FUN_144f70a50;
    *(undefined ***)pRVar3 = &PTR_FUN_145affbc0;
    *(undefined4 *)(pRVar3 + 8) = 1;
    *(undefined8 *)(pRVar3 + 0x10) = 0;
    *(undefined8 *)(pRVar3 + 0x18) = 0;
    *(undefined8 *)(pRVar3 + 0x20) = 0x3f800000;
    *(undefined8 *)(pRVar3 + 0x28) = 0;
    *(undefined4 *)(pRVar3 + 0x30) = 0;
    *(undefined8 *)(pRVar3 + 0x34) = 0x3f800000;
    *(undefined4 *)(pRVar3 + 0x3c) = 0;
    *(undefined2 *)(pRVar3 + 0x40) = 0;
    *(undefined4 *)(pRVar3 + 0x44) = 0xffffffff;
    pRVar2 = pRVar3;
  }
  if (param_2 == 0) {
    local_108[8] = 1.89411e-40;
    pcVar7 = "Image is null in ImageShapeCharacterDef ctor.";
    pfVar6 = local_108 + 8;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))();
    if (iVar1 == 0) {
      if (param_3 != (longlong *)0x0) {
        local_80 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
        local_88[0] = 3;
        local_78 = 1;
        local_74 = 1;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        pRVar3 = (RefCountImpl *)
                 (**(code **)(*param_3 + 0x20))(param_3,local_88,*(undefined8 *)(param_2 + 0x18));
        goto LAB_1433acf97;
      }
      local_108[4] = 1.89411e-40;
      FUN_1433db230(local_108 + 4,"ImageCreator is null in ImageShapeCharacterDef ctor");
      pRVar3 = pRVar5;
    }
    else {
      pRVar3 = *(RefCountImpl **)(param_2 + 0x18);
      if (pRVar3 != (RefCountImpl *)0x0) {
        (**(code **)(*(longlong *)pRVar3 + 8))(pRVar3);
LAB_1433acf97:
        if (pRVar3 != (RefCountImpl *)0x0) {
          (**(code **)(*(longlong *)pRVar3 + 8))(pRVar3);
        }
      }
    }
    if (*(longlong **)(pRVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pRVar2 + 0x10) + 0x10))();
    }
    *(RefCountImpl **)(pRVar2 + 0x10) = pRVar3;
    if (pRVar3 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar2 + 0x20) = 0x3f800000;
      *(undefined8 *)(pRVar2 + 0x28) = 0;
      *(undefined4 *)(pRVar2 + 0x30) = 0;
      *(undefined8 *)(pRVar2 + 0x34) = 0x3f800000;
      *(undefined4 *)(pRVar2 + 0x3c) = 0;
      *(float *)(pRVar2 + 0x20) = *(float *)(pRVar2 + 0x20) * 0.05;
      *(float *)(pRVar2 + 0x24) = *(float *)(pRVar2 + 0x24) * 0.05;
      *(float *)(pRVar2 + 0x28) = *(float *)(pRVar2 + 0x28) * 0.05;
      *(float *)(pRVar2 + 0x2c) = *(float *)(pRVar2 + 0x2c) * 0.05;
      *(float *)(pRVar2 + 0x30) = *(float *)(pRVar2 + 0x30) * 0.05;
      *(float *)(pRVar2 + 0x34) = *(float *)(pRVar2 + 0x34) * 0.05;
      *(float *)(pRVar2 + 0x38) = *(float *)(pRVar2 + 0x38) * 0.05;
      *(float *)(pRVar2 + 0x3c) = *(float *)(pRVar2 + 0x3c) * 0.05;
      pRVar2[0x40] = (RefCountImpl)0x1;
      pRVar2[0x41] = (RefCountImpl)(param_4 != '\0');
      (**(code **)(*(longlong *)pRVar3 + 0x30))(pRVar3,&local_e0);
      local_a8 = 0x3f800000;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_98 = 0;
      uStack_94 = 0x3f800000;
      uStack_90 = 0;
      uStack_8c = 0;
      (**(code **)(*(longlong *)pRVar3 + 0x70))(pRVar3,&local_a8);
      local_108[0] = 0.0;
      local_108[1] = 0.0;
      local_108[2] = 0.0;
      local_108[3] = 0.0;
      local_c8 = (float)local_e0;
      local_c4 = (float)local_dc;
      local_c0 = (float)local_d8;
      local_bc = (float)local_d4;
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_a8,(Rect<float> *)local_108,(Rect<float> *)&local_c8);
      FUN_1432f2630(this_00 + 0x18,this_00 + 0x18,*(longlong *)(this_00 + 0x20) + 1);
      puVar8 = (undefined4 *)
               (*(longlong *)(this_00 + 0x18) + -0x10 + *(longlong *)(this_00 + 0x20) * 0x10);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        Scaleform::RefCountImpl::AddRef(pRVar2);
        *(RefCountImpl **)(puVar8 + 2) = pRVar2;
      }
      FUN_1432f3130(this_00,1,0);
      FUN_1432f15c0(this_00,0,0);
      FUN_1432f1450(this_00,(local_108[2] - local_108[0]) * 20.0,0);
      FUN_1432f1450(this_00,(local_108[2] - local_108[0]) * 20.0,
                    (local_108[3] - local_108[1]) * 20.0);
      FUN_1432f1450(this_00,0,(local_108[3] - local_108[1]) * 20.0);
      if ((*(float *)(this_00 + 0x5c) != *(float *)(this_00 + 0x54)) ||
         (*(float *)(this_00 + 0x60) != *(float *)(this_00 + 0x58))) {
        FUN_1432f1450(this_00,*(float *)(this_00 + 0x54),*(undefined4 *)(this_00 + 0x58));
      }
      FUN_1432f0880(this_00);
      FUN_1432f0900(this_00);
      local_108[6] = 2.8026e-45;
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_108 + 6);
      this = pRVar5;
      if (lVar4 != 0) {
        this = (RefCountImpl *)FUN_143371000(lVar4,this_00,0);
      }
      Scaleform::RefCountImpl::AddRef(this_00);
      if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
      }
      param_1[5] = this_00;
      local_108[7] = 2.8026e-45;
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_108 + 7);
      if (lVar4 != 0) {
        pRVar5 = (RefCountImpl *)FUN_143371000(lVar4,param_1[5],0);
      }
      if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
      }
      param_1[4] = pRVar5;
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      (**(code **)(*(longlong *)pRVar3 + 0x10))(pRVar3);
      goto LAB_1433ad2f9;
    }
    local_108[5] = 1.89411e-40;
    pcVar7 = "Image is not created.";
    pfVar6 = local_108 + 5;
  }
  FUN_1433db230(pfVar6,pcVar7);
LAB_1433ad2f9:
  if (pRVar2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar2);
  }
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  return param_1;
}



// FUNCTION 1433ad340 FUN_1433ad340 body=162 status=ok
// SIG undefined FUN_1433ad340(void)

undefined8 FUN_1433ad340(longlong param_1,float *param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_18);
  if ((*param_2 <= local_10) && (local_18 <= *param_2)) {
    if ((param_2[1] <= local_c) && (local_14 <= param_2[1])) {
      if (param_3 != '\0') {
        uVar1 = FUN_143379190(*(undefined8 *)(param_1 + 0x28),&DAT_14621c810);
        return uVar1;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1433ad3f0 FUN_1433ad3f0 body=336 status=ok
// SIG undefined FUN_1433ad3f0(void)

int FUN_1433ad3f0(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong local_res8;
  
  lVar6 = *(longlong *)(param_2 + 0x418);
  if (lVar6 == 0) {
    lVar6 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar6 + 0x29) = 0;
  if (*(int *)(lVar6 + 0x50) - *(int *)(lVar6 + 0x4c) < 1) {
    FUN_143396d60(lVar6);
  }
  bVar1 = *(byte *)((ulonglong)*(uint *)(lVar6 + 0x4c) + *(longlong *)(lVar6 + 0x60));
  *(uint *)(lVar6 + 0x4c) = *(uint *)(lVar6 + 0x4c) + 1;
  uVar9 = (uint)bVar1;
  if ((2 < param_3) && (uVar9 == 0xff)) {
    uVar5 = FUN_1433af650(param_2);
    uVar9 = (uint)uVar5;
  }
  lVar6 = *(longlong *)(param_2 + 0x418);
  if (lVar6 == 0) {
    lVar6 = param_2 + 0x50;
  }
  iVar2 = *(int *)(lVar6 + 0x54);
  iVar3 = *(int *)(lVar6 + 0x50);
  iVar4 = *(int *)(lVar6 + 0x4c);
  FUN_143300df0(param_2 + 0x20,"  GFx_ReadFillStyles: count = %d\n",uVar9);
  lVar6 = param_1[3];
  if (uVar9 != 0) {
    FUN_1433afb30(param_1 + 2,(int)lVar6 + uVar9);
  }
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      lVar7 = *(longlong *)(param_2 + 0x418);
      if (lVar7 == 0) {
        lVar7 = param_2 + 0x50;
      }
      *(undefined1 *)(lVar7 + 0x29) = 0;
      lVar8 = (ulonglong)(uVar10 + (int)lVar6) * 0x10 + param_1[2];
      local_res8 = lVar8;
      FUN_1433ae630(&local_res8,param_2,param_3);
      lVar7 = *(longlong *)(lVar8 + 8);
      if ((lVar7 != 0) && ((*(longlong *)(lVar7 + 0x10) != 0 || (*(int *)(lVar7 + 0x44) != -1)))) {
        *(byte *)(*param_1 + 0x18) = *(byte *)(*param_1 + 0x18) | 1;
      }
      if ((*(longlong *)(lVar8 + 8) != 0) && (*(int *)(*(longlong *)(lVar8 + 8) + 0x44) != -1)) {
        *(byte *)(*param_1 + 0x18) = *(byte *)(*param_1 + 0x18) | 4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  return (iVar2 - iVar3) + iVar4;
}



// FUNCTION 1433ad550 FUN_1433ad550 body=496 status=ok
// SIG undefined FUN_1433ad550(void)

int FUN_1433ad550(longlong *param_1,longlong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong local_res8;
  int local_res10;
  undefined4 local_res18;
  
  lVar5 = *(longlong *)(param_2 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  local_res18 = param_3;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 1) {
    FUN_143396d60(lVar5);
  }
  uVar7 = (uint)*(byte *)((ulonglong)*(uint *)(lVar5 + 0x4c) + *(longlong *)(lVar5 + 0x60));
  *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) + 1;
  FUN_143300df0(param_2 + 0x20,"  GFx_ReadStrokeStyles: count = %d\n",uVar7);
  if (uVar7 == 0xff) {
    lVar5 = *(longlong *)(param_2 + 0x418);
    if (lVar5 == 0) {
      lVar5 = param_2 + 0x50;
    }
    *(undefined1 *)(lVar5 + 0x29) = 0;
    if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
      FUN_143396c40(lVar5,2);
    }
    uVar4 = *(uint *)(lVar5 + 0x4c);
    uVar7 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(lVar5 + 0x60)),
                           *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar5 + 0x60)));
    *(uint *)(lVar5 + 0x4c) = uVar4 + 2;
    FUN_143300df0(param_2 + 0x20,"  GFx_ReadStrokeStyles: count2 = %d\n",uVar7);
  }
  lVar5 = *(longlong *)(param_2 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_2 + 0x50;
  }
  iVar9 = (*(int *)(lVar5 + 0x54) - *(int *)(lVar5 + 0x50)) + *(int *)(lVar5 + 0x4c);
  uVar1 = param_1[6];
  local_res8 = CONCAT44(local_res8._4_4_,(int)param_1[6]);
  uVar4 = (int)param_1[6] + uVar7;
  local_res10 = iVar9;
  FUN_1433afc60(param_1 + 5,param_1 + 5,uVar4);
  uVar3 = local_res18;
  uVar8 = 0;
  if (uVar1 < uVar4) {
    lVar5 = param_1[5] + uVar1 * 0x28;
    for (lVar6 = uVar4 - uVar1; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
      }
      lVar5 = lVar5 + 0x28;
    }
  }
  if (uVar7 != 0) {
    iVar2 = (int)local_res8;
    do {
      lVar5 = *(longlong *)(param_2 + 0x418);
      if (lVar5 == 0) {
        lVar5 = param_2 + 0x50;
      }
      *(undefined1 *)(lVar5 + 0x29) = 0;
      lVar5 = param_1[5] + (ulonglong)(uVar8 + iVar2) * 0x28;
      local_res8 = lVar5;
      FUN_1433aee40(&local_res8,param_2,uVar3);
      lVar6 = *(longlong *)(lVar5 + 0x18);
      if ((lVar6 != 0) && ((*(longlong *)(lVar6 + 0x10) != 0 || (*(int *)(lVar6 + 0x44) != -1)))) {
        *(byte *)(*param_1 + 0x18) = *(byte *)(*param_1 + 0x18) | 1;
      }
      if ((*(longlong *)(lVar5 + 0x18) != 0) && (*(int *)(*(longlong *)(lVar5 + 0x18) + 0x44) != -1)
         ) {
        *(byte *)(*param_1 + 0x18) = *(byte *)(*param_1 + 0x18) | 4;
      }
      uVar8 = uVar8 + 1;
      iVar9 = local_res10;
    } while (uVar8 < uVar7);
  }
  return iVar9;
}



// FUNCTION 1433ad750 FUN_1433ad750 body=2239 status=ok
// SIG undefined FUN_1433ad750(void)

ulonglong FUN_1433ad750(longlong *param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  float fVar24;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  uint local_324;
  int local_320;
  longlong local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [41];
  undefined1 local_2bf;
  int local_29c;
  int local_298;
  int local_294;
  
  local_318 = param_1[1];
  if (local_318 == 0) {
    local_318 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x30);
  }
  lVar22 = *(longlong *)(param_2 + 0x418);
  if (lVar22 == 0) {
    lVar22 = param_2 + 0x50;
  }
  *(undefined1 *)(*param_1 + 0x18) = 0;
  if (param_5 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar22 + 0x4c);
    iVar21 = *(int *)(lVar22 + 0x50);
    iVar23 = *(int *)(lVar22 + 0x54);
    *(byte *)(*param_1 + 0x18) = *(byte *)(*param_1 + 0x18) | 0x10;
    local_308 = 0;
    uStack_300 = 0;
    FUN_143396900(lVar22,&local_308);
    (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,&local_308);
    if ((param_3 - 0x4bU & 0xfffffff7) == 0) {
      local_2f8 = 0;
      uStack_2f0 = 0;
      FUN_143396900(lVar22,&local_2f8);
      (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,&local_2f8);
      *(undefined1 *)(lVar22 + 0x29) = 0;
      if (*(int *)(lVar22 + 0x50) - *(int *)(lVar22 + 0x4c) < 1) {
        FUN_143396d60(lVar22);
      }
      *(int *)(lVar22 + 0x4c) = *(int *)(lVar22 + 0x4c) + 1;
    }
    else {
      (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,&local_308);
    }
    FUN_1433ad3f0(param_1,param_2,param_3);
    FUN_1433ad550(param_1,param_2,param_3);
    iVar4 = ((*(int *)(lVar22 + 0x4c) - *(int *)(lVar22 + 0x50)) - ((iVar4 - iVar21) + iVar23)) +
            *(int *)(lVar22 + 0x54);
  }
  uVar20 = param_4 - iVar4;
  puVar12 = (undefined2 *)FUN_1433b2ee0(local_318,uVar20);
  if (puVar12 == (undefined2 *)0x0) {
    uVar13 = FUN_1433173f0(lVar22,"Corrupted shape detected in file %s",
                           (*(ulonglong *)(lVar22 + 0x30) & 0xfffffffffffffffc) + 0xc);
    return uVar13 & 0xffffffffffffff00;
  }
  *(undefined1 *)(lVar22 + 0x29) = 0;
  FUN_143396b20(lVar22,puVar12,uVar20);
  fVar24 = 1.0;
  if (param_3 == 0x4b) {
    fVar24 = 0.05;
    *(byte *)(*param_1 + 0x18) = *(byte *)(*param_1 + 0x18) | 2;
  }
  uVar1 = *(undefined8 *)(lVar22 + 0x10);
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x38);
  uVar14 = FUN_143396bf0(lVar22);
  FUN_143395690(local_2e8,puVar12,uVar20,uVar2,uVar14,uVar1);
  local_2bf = 0;
  *(undefined1 **)(param_2 + 0x418) = local_2e8;
  local_330 = FUN_1433958f0(local_2e8,4);
  local_320 = FUN_1433958f0(local_2e8,4);
  if (param_5 != '\0') {
    FUN_143300df0(local_2e8,"  ShapeCharacter read: nfillbits = %d, nlinebits = %d\n",local_330,
                  local_320);
  }
  iVar23 = 0;
  local_334 = 0;
  iVar21 = 0;
  local_32c = 0;
  _param_5 = 0;
  bVar15 = false;
  local_338 = 0;
  local_324 = uVar20;
  iVar4 = local_330;
  do {
    iVar5 = FUN_1433959e0(local_2e8);
    if (iVar5 == 0) {
      uVar6 = FUN_1433958f0(local_2e8,5);
      if (uVar6 == 0) break;
      if ((uVar6 & 1) != 0) {
        if (0 < iVar23) {
          iVar23 = 0;
          iVar21 = iVar21 + 1;
        }
        uVar7 = FUN_1433958f0(local_2e8,5);
        _param_5 = Scaleform::GFx::Stream::ReadSInt(local_2e8,uVar7);
        local_338 = Scaleform::GFx::Stream::ReadSInt(local_2e8,uVar7);
        cVar3 = Scaleform::GFx::Stream::IsVerboseParseShape(local_2e8);
        if (cVar3 != '\0') {
          FUN_143300df0(local_2e8,"  ShapeCharacter read: moveto %4g %4g\n",
                        (double)((float)_param_5 * fVar24),(double)((float)local_338 * fVar24));
        }
      }
      if (((uVar6 & 2) != 0) && (0 < iVar4)) {
        if (0 < iVar23) {
          iVar23 = 0;
          iVar21 = iVar21 + 1;
        }
        iVar5 = FUN_1433958f0(local_2e8,iVar4);
        cVar3 = Scaleform::GFx::Stream::IsVerboseParseShape(local_2e8);
        if (cVar3 != '\0') {
          if (0 < iVar5) {
            iVar5 = iVar5 + local_334;
          }
          FUN_143300df0(local_2e8,"  ShapeCharacter read: fill0 = %d\n",iVar5);
        }
      }
      if (((uVar6 & 4) != 0) && (0 < iVar4)) {
        if (0 < iVar23) {
          iVar23 = 0;
          iVar21 = iVar21 + 1;
        }
        iVar5 = FUN_1433958f0(local_2e8,iVar4);
        cVar3 = Scaleform::GFx::Stream::IsVerboseParseShape(local_2e8);
        if (cVar3 != '\0') {
          if (0 < iVar5) {
            iVar5 = iVar5 + local_334;
          }
          FUN_143300df0(local_2e8,"  ShapeCharacter read: fill1 = %d\n",iVar5);
        }
      }
      if (((uVar6 & 8) != 0) && (0 < local_320)) {
        if (0 < iVar23) {
          iVar23 = 0;
          iVar21 = iVar21 + 1;
        }
        iVar5 = FUN_1433958f0(local_2e8,local_320);
        if (0 < iVar5) {
          iVar5 = iVar5 + local_32c;
        }
        cVar3 = Scaleform::GFx::Stream::IsVerboseParseShape(local_2e8);
        if (cVar3 != '\0') {
          FUN_143300df0(local_2e8,"  ShapeCharacter read: line = %d\n",iVar5);
        }
      }
      if ((uVar6 & 0x10) != 0) {
        FUN_143300df0(local_2e8,"  ShapeCharacter read: more fill styles\n");
        iVar4 = 0;
        if (iVar21 < 1) {
          iVar4 = iVar21;
        }
        iVar21 = iVar4;
        if (0 < iVar23) {
          iVar23 = 0;
          iVar21 = iVar21 + 1;
        }
        local_334 = (int)param_1[3];
        local_32c = (int)param_1[6];
        iVar4 = (local_29c - local_298) + local_294;
        uVar8 = FUN_1433ad3f0(param_1,param_2,param_3);
        uVar18 = (local_29c - local_298) + local_294;
        uVar6 = FUN_1433ad550(param_1,param_2,param_3);
        uVar17 = (local_29c - local_298) + local_294;
        if (uVar18 != uVar8) {
          if (((int)uVar18 < (int)uVar8) || (uVar20 < uVar18)) goto LAB_1433adf63;
          if (local_334 < (int)param_1[3]) {
            lVar19 = (longlong)iVar4;
            *(char *)(lVar19 + 1 + (longlong)puVar12) = (char)((uint)local_334 >> 0x10);
            *(char *)(lVar19 + 2 + (longlong)puVar12) = (char)((uint)local_334 >> 8);
            *(undefined1 *)(lVar19 + (longlong)puVar12) = 0xff;
            *(char *)(lVar19 + 3 + (longlong)puVar12) = (char)local_334;
            uVar8 = iVar4 + 4;
          }
          memmove((void *)((longlong)(int)uVar8 + (longlong)puVar12),
                  (void *)((longlong)(int)uVar18 + (longlong)puVar12),
                  (longlong)(int)(uVar6 - uVar18));
          uVar6 = (uVar6 - uVar18) + uVar8;
          uVar18 = uVar8;
        }
        if (uVar6 != uVar17) {
          if (((int)uVar17 <= (int)uVar6) || (uVar20 < uVar17)) goto LAB_1433adf63;
          if (local_32c < (int)param_1[6]) {
            lVar19 = (longlong)(int)uVar18;
            uVar6 = uVar18 + 4;
            *(char *)(lVar19 + 1 + (longlong)puVar12) = (char)((uint)local_32c >> 0x10);
            *(char *)(lVar19 + 2 + (longlong)puVar12) = (char)((uint)local_32c >> 8);
            *(undefined1 *)(lVar19 + (longlong)puVar12) = 0xff;
            *(char *)(lVar19 + 3 + (longlong)puVar12) = (char)local_32c;
          }
          memmove((void *)((longlong)(int)uVar6 + (longlong)puVar12),
                  (void *)((longlong)(int)uVar17 + (longlong)puVar12),
                  (ulonglong)(local_324 - uVar17));
          local_324 = local_324 + (uVar6 - uVar17);
        }
        FUN_143395c80(local_2e8,uVar6);
        local_330 = FUN_1433958f0(local_2e8,4);
        local_320 = FUN_1433958f0(local_2e8,4);
        iVar4 = local_330;
      }
    }
    else {
      iVar23 = iVar23 + 1;
      iVar5 = FUN_1433959e0(local_2e8);
      if (iVar5 == 0) {
        iVar4 = FUN_1433958f0(local_2e8,4);
        iVar4 = iVar4 + 2;
        iVar5 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar4);
        iVar9 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar4);
        iVar10 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar4);
        iVar4 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar4);
        cVar3 = Scaleform::GFx::Stream::IsVerboseParseShape(local_2e8);
        if (cVar3 != '\0') {
          FUN_143300df0(local_2e8,
                        "  ShapeCharacter read: curved edge   = %4g %4g - %4g %4g - %4g %4g\n",
                        (double)((float)_param_5 * fVar24),(double)((float)local_338 * fVar24),
                        (double)((float)(iVar5 + _param_5) * fVar24),
                        (double)((float)(iVar9 + local_338) * fVar24),
                        (double)((float)(iVar10 + iVar5 + _param_5) * fVar24),
                        (double)((float)(iVar4 + iVar9 + local_338) * fVar24));
        }
        _param_5 = _param_5 + iVar10 + iVar5;
        local_338 = local_338 + iVar4 + iVar9;
        iVar4 = local_330;
      }
      else {
        iVar5 = FUN_1433958f0(local_2e8,4);
        iVar11 = 0;
        iVar10 = 0;
        iVar5 = iVar5 + 2;
        iVar9 = FUN_1433959e0(local_2e8);
        if (iVar9 == 0) {
          iVar9 = FUN_1433959e0(local_2e8);
          if (iVar9 != 0) goto LAB_1433ade6c;
          iVar11 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar5);
        }
        else {
          iVar11 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar5);
LAB_1433ade6c:
          iVar10 = Scaleform::GFx::Stream::ReadSInt(local_2e8,iVar5);
        }
        cVar3 = Scaleform::GFx::Stream::IsVerboseParseShape(local_2e8);
        if (cVar3 != '\0') {
          FUN_143300df0(local_2e8,"  ShapeCharacter read: straight edge = %4g %4g - %4g %4g\n",
                        (double)((float)_param_5 * fVar24),(double)((float)local_338 * fVar24),
                        (double)((float)(iVar11 + _param_5) * fVar24),
                        (double)((float)(iVar10 + local_338) * fVar24));
        }
        _param_5 = _param_5 + iVar11;
        local_338 = local_338 + iVar10;
      }
    }
    uVar6 = (local_29c - local_298) + local_294;
    bVar15 = uVar20 < uVar6;
  } while (uVar6 <= uVar20);
  if ((bVar15) || (0x1fffff < local_324)) {
LAB_1433adf63:
    bVar16 = 1;
    FUN_1433173f0(local_2e8,"Corrupted shape detected in file %s",
                  (*(ulonglong *)(lVar22 + 0x30) & 0xfffffffffffffffc) + 0xc);
    *puVar12 = 0;
    if (uVar20 < 3) goto LAB_1433adfac;
    local_324 = 2;
  }
  else {
    bVar16 = 0;
    if (uVar20 <= local_324) goto LAB_1433adfac;
  }
  FUN_1433b2fc0(local_318,puVar12,uVar20,local_324);
LAB_1433adfac:
  *(undefined2 **)(*param_1 + 0x10) = puVar12;
  *(undefined8 *)(param_2 + 0x418) = 0;
  FUN_143395770(local_2e8);
  return (ulonglong)(bVar16 ^ 1);
}



// FUNCTION 1433ae010 FUN_1433ae010 body=54 status=ok
// SIG undefined FUN_1433ae010(void)

void FUN_1433ae010(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 4;
  lVar3 = 0x1505;
  do {
    lVar1 = lVar2 + -1;
    lVar2 = lVar2 + -1;
    lVar3 = (ulonglong)*(byte *)(lVar1 + param_2) + lVar3 * 0x1003f;
  } while (lVar2 != 0);
  FUN_1433ae050(param_1,param_1,param_2,lVar3);
  return;
}



// FUNCTION 1433ae050 FUN_1433ae050 body=318 status=ok
// SIG undefined FUN_1433ae050(void)

void FUN_1433ae050(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433ae0a4;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1433afd20(param_1,param_2,lVar10);
LAB_1433ae0a4:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined4 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 1433ae190 FUN_1433ae190 body=170 status=ok
// SIG undefined FUN_1433ae190(void)

undefined8 * FUN_1433ae190(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145affbc0;
  *(undefined4 *)(param_1 + 1) = 1;
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  if (*(RefCountImpl **)(param_2 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x18));
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  return param_1;
}



// FUNCTION 1433ae240 FUN_1433ae240 body=239 status=ok
// SIG undefined FUN_1433ae240(void)

undefined8 * FUN_1433ae240(undefined8 *param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  
  *param_1 = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[4] = param_2;
  if ((char)param_2[0xd] == '\0') {
    param_2[0xc] = param_4;
    *(undefined4 *)(param_1[4] + 0x18) = 0;
    *(undefined4 *)(param_1[4] + 0x14) = 0;
    if (*param_2 == 0) {
      uVar1 = FUN_1433af6b0(param_1);
      *(undefined4 *)(param_1[4] + 0x1c) = uVar1;
      uVar1 = FUN_1433af6b0(param_1);
      *(undefined4 *)(param_1[4] + 0x20) = uVar1;
    }
    else {
      *(uint *)(param_1[4] + 0x1c) = *param_2 >> 7 & 0xf;
      *(uint *)(param_1[4] + 0x20) = *param_2 >> 3 & 0xf;
      param_1[2] = (ulonglong)(*param_2 >> 0xb);
      *(uint *)(param_1 + 3) = *param_2 & 7;
    }
    *(undefined4 *)(param_1[4] + 0x10) = 0;
    *(undefined4 *)(param_1[4] + 0xc) = 0;
    *(undefined4 *)(param_1[4] + 0x2c) = 0;
    *(undefined4 *)(param_1[4] + 0x28) = 0;
    *(undefined4 *)(param_1[4] + 0x24) = 0;
    *(undefined1 *)(param_1[4] + 0x34) = 1;
    return param_1;
  }
  param_1[2] = (ulonglong)(*param_2 >> 0xb);
  *(uint *)(param_1 + 3) = *param_2 & 7;
  return param_1;
}



// FUNCTION 1433ae330 FUN_1433ae330 body=117 status=ok
// SIG undefined FUN_1433ae330(void)

void FUN_1433ae330(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -8 + lVar2 * 0x10);
    do {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433ae39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))();
  return;
}



// FUNCTION 1433ae3b0 FUN_1433ae3b0 body=131 status=ok
// SIG undefined FUN_1433ae3b0(void)

void FUN_1433ae3b0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x28);
    do {
      if ((RefCountImpl *)puVar1[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar1[1]);
      }
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433ae42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))();
  return;
}



// FUNCTION 1433ae440 operator() body=41 status=ok
// SIG undefined operator()(void)

longlong Scaleform::FixedSizeHash<unsigned_int>::operator()(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 4;
  lVar2 = 0x1505;
  do {
    lVar1 = lVar3 + -1;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 * 0x1003f + (ulonglong)*(byte *)(lVar1 + param_2);
  } while (lVar3 != 0);
  return lVar2;
}



// FUNCTION 1433ae470 FUN_1433ae470 body=132 status=ok
// SIG undefined FUN_1433ae470(void)

undefined8 * FUN_1433ae470(undefined8 *param_1,uint param_2)

{
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  *param_1 = &PTR_FUN_145b05368;
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  *param_1 = &PTR_FUN_144f8bf30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1433ae500 FUN_1433ae500 body=118 status=ok
// SIG undefined FUN_1433ae500(void)

undefined8 * FUN_1433ae500(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b05368;
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  *param_1 = &PTR_FUN_144f8bf30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1433ae580 DefPointTestLocal body=34 status=ok
// SIG undefined DefPointTestLocal(void)

void Scaleform::GFx::SwfShapeCharacterDef::DefPointTestLocal
               (longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  FUN_1433abc80(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2,param_3,
                param_4);
  return;
}



// FUNCTION 1433ae5b0 FUN_1433ae5b0 body=32 status=ok
// SIG undefined FUN_1433ae5b0(void)

undefined8 FUN_1433ae5b0(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x28))();
  return param_2;
}



// FUNCTION 1433ae5d0 GetRectBoundsLocal body=27 status=ok
// SIG undefined GetRectBoundsLocal(void)

undefined8
Scaleform::GFx::ImageShapeCharacterDef::GetRectBoundsLocal(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x38))(param_1,param_2,0);
  return param_2;
}



// FUNCTION 1433ae5f0 FUN_1433ae5f0 body=38 status=ok
// SIG undefined FUN_1433ae5f0(void)

undefined1 FUN_1433ae5f0(void)

{
  return 0;
}



// FUNCTION 1433ae630 FUN_1433ae630 body=2057 status=ok
// SIG undefined FUN_1433ae630(void)

void FUN_1433ae630(longlong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  RefCountImpl *pRVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_1a0 [2];
  longlong *local_198;
  undefined4 local_190;
  uint local_18c;
  uint local_188;
  undefined4 local_184;
  uint local_180 [2];
  undefined8 *local_178 [2];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148 [9];
  float local_124;
  undefined4 local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  lVar15 = *(longlong *)(param_2 + 0x418);
  if (lVar15 == 0) {
    lVar15 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar15 + 0x29) = 0;
  if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 1) {
    FUN_143396d60(lVar15);
  }
  bVar1 = *(byte *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
  *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 1;
  FUN_143300df0(param_2 + 0x20,"  FillStyle read type = 0x%X\n",bVar1);
  if (bVar1 == 0) {
    Scaleform::GFx::LoadProcess::ReadRgbaTag(param_2,&local_190,param_3);
    FUN_143300df0(param_2 + 0x20,"  color: ");
    *(undefined4 *)*param_1 = local_190;
    lVar15 = *param_1;
    pRVar5 = *(RefCountImpl **)(lVar15 + 8);
    if (pRVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar5);
    }
    *(undefined8 *)(lVar15 + 8) = 0;
  }
  else if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0x40) != 0) {
      uVar7 = FUN_1433af650(param_2);
      FUN_143300df0(param_2 + 0x20,"  BitmapChar = %d\n",(uint)uVar7);
      lVar15 = *(longlong *)(param_2 + 0x418);
      local_c8 = 0x3f800000;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b4 = 0x3f800000;
      uStack_b0 = 0;
      uStack_ac = 0;
      if (lVar15 == 0) {
        lVar15 = param_2 + 0x50;
      }
      FUN_143396390(lVar15,&local_c8);
      local_168 = 0x3f800000;
      uStack_160 = 0;
      local_158 = 0x3f80000000000000;
      uStack_150 = 0;
      local_1a0[0] = 0;
      local_198 = (longlong *)0x0;
      Scaleform::Render::Matrix2x4<float>::SetInverse
                ((Matrix2x4<float> *)&local_168,(Matrix2x4<float> *)&local_c8);
      plVar12 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
      plVar13 = (longlong *)0x0;
      if (plVar12 != (longlong *)0x0) {
        plVar12[1] = 0;
        *plVar12 = (longlong)&PTR_FUN_144f70a50;
        *(undefined4 *)(plVar12 + 1) = 1;
        *plVar12 = (longlong)&PTR_FUN_145affbc0;
        plVar12[2] = 0;
        plVar12[3] = 0;
        plVar12[4] = 0x3f800000;
        plVar12[5] = 0;
        *(undefined4 *)(plVar12 + 6) = 0;
        *(undefined8 *)((longlong)plVar12 + 0x34) = 0x3f800000;
        *(undefined4 *)((longlong)plVar12 + 0x3c) = 0;
        *(undefined2 *)(plVar12 + 8) = 0;
        *(undefined4 *)((longlong)plVar12 + 0x44) = 0xffffffff;
        plVar13 = plVar12;
      }
      lVar15 = *param_1;
      pRVar5 = *(RefCountImpl **)(lVar15 + 8);
      if (pRVar5 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar5);
      }
      *(longlong **)(lVar15 + 8) = plVar13;
      lVar15 = *(longlong *)(*param_1 + 8);
      *(undefined8 *)(lVar15 + 0x20) = local_168;
      *(undefined8 *)(lVar15 + 0x28) = uStack_160;
      *(undefined8 *)(lVar15 + 0x30) = local_158;
      *(undefined8 *)(lVar15 + 0x38) = uStack_150;
      if (bVar1 == 0x40) {
        *(undefined2 *)(lVar15 + 0x40) = 0x100;
      }
      else if (bVar1 == 0x41) {
        *(undefined2 *)(lVar15 + 0x40) = 0x101;
      }
      else if (bVar1 == 0x42) {
        *(undefined2 *)(lVar15 + 0x40) = 0;
      }
      else if (bVar1 == 0x43) {
        *(undefined2 *)(lVar15 + 0x40) = 1;
      }
      local_180[0] = (uint)uVar7;
      cVar6 = FUN_14330e8c0(*(undefined8 *)(param_2 + 0x38),local_1a0,local_180);
      if (((cVar6 == '\0') || (local_1a0[0] != 0)) || (local_198 == (longlong *)0x0)) {
        *(undefined4 *)*param_1 = 0xffa7dd39;
        if (local_1a0[0] == 1) {
          *(undefined4 *)(*(longlong *)(*param_1 + 8) + 0x44) = local_198._0_4_;
          if ((*(longlong *)(param_2 + 0x370) != 0) && ((bVar1 - 0x40 & 0xfd) == 0)) {
            FUN_1433ae010(*(longlong *)(param_2 + 0x370),*(longlong *)(*param_1 + 8) + 0x44);
          }
        }
        else {
          lVar15 = *param_1;
          pRVar5 = *(RefCountImpl **)(lVar15 + 8);
          if (pRVar5 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar5);
          }
          *(undefined8 *)(lVar15 + 8) = 0;
          if (uVar7 != 0xffff) {
            local_178[0] = (undefined8 *)CONCAT44(local_178[0]._4_4_,0x21000);
            FUN_1433db230(local_178,"An image with resource id %d is not found in resource table.",
                          uVar7);
          }
        }
      }
      else {
        uVar8 = (**(code **)(*local_198 + 0x10))();
        if ((uVar8 & 0xff00) == 0x100) {
          plVar13 = (longlong *)0x0;
          if (local_1a0[0] == 0) {
            plVar13 = local_198;
          }
          FUN_143320580(*(longlong *)(*param_1 + 8) + 0x10,plVar13[3]);
        }
      }
      if ((local_1a0[0] == 0) && (local_198 != (longlong *)0x0)) {
        FUN_1432de450();
      }
    }
  }
  else {
    lVar15 = *(longlong *)(param_2 + 0x418);
    local_e8 = 0x3f800000;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d4 = 0x3f800000;
    uStack_d0 = 0;
    uStack_cc = 0;
    if (lVar15 == 0) {
      lVar15 = param_2 + 0x50;
    }
    FUN_143396390(lVar15,&local_e8);
    if (bVar1 == 0x10) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = 0.5;
    }
    local_148[0] = 1.0;
    local_148[1] = 0.0;
    local_148[2] = 0.0;
    local_148[3] = 0.0;
    local_148[4] = 0.0;
    local_148[5] = 1.0;
    local_148[6] = 0.0;
    local_148[7] = 0.0;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)local_148,(Matrix2x4<float> *)&local_e8);
    lVar15 = *(longlong *)(param_2 + 0x418);
    local_108 = 0x38000000;
    uStack_100 = 0x3f00000000000000;
    local_f8 = 0;
    local_f4 = 0x38000000;
    local_110 = 0;
    local_120 = 0;
    fVar21 = local_148[4] * 0.0 + local_148[0] * 3.0517578e-05;
    fVar19 = local_148[4] * 3.0517578e-05 + local_148[0] * 0.0;
    fVar20 = local_148[5] * 3.0517578e-05 + local_148[1] * 0.0;
    fVar22 = local_148[5] * 0.0 + local_148[1] * 3.0517578e-05;
    fVar17 = fVar16 + local_148[7] * 3.0517578e-05 + local_148[3] * 0.0;
    fVar18 = local_148[7] * 0.0 + local_148[3] * 3.0517578e-05 + 0.5;
    if (lVar15 == 0) {
      lVar15 = param_2 + 0x50;
    }
    *(undefined1 *)(lVar15 + 0x29) = 0;
    local_148[8] = fVar21;
    local_124 = fVar22;
    local_11c = fVar18;
    local_118 = fVar19;
    local_114 = fVar20;
    local_10c = fVar17;
    local_ec = fVar16;
    if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 1) {
      FUN_143396d60(lVar15);
    }
    bVar2 = *(byte *)((ulonglong)*(uint *)(lVar15 + 0x4c) + *(longlong *)(lVar15 + 0x60));
    *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) + 1;
    local_18c = (uint)(bVar2 >> 6);
    local_188 = bVar2 >> 4 & 3;
    uVar8 = (uint)(bVar2 & 0xf);
    FUN_143300df0(param_2 + 0x20,"  gradients: numGradients = %d. spread = %d, interpolation = %d\n"
                  ,uVar8,local_18c,local_188);
    puVar9 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9[1] = 0;
      *puVar9 = &PTR_FUN_144f70a50;
      *puVar9 = &PTR_FUN_145affbc0;
      *(undefined4 *)(puVar9 + 1) = 1;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0x3f800000;
      puVar9[5] = 0;
      *(undefined4 *)(puVar9 + 6) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x34) = 0x3f800000;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
      *(undefined2 *)(puVar9 + 8) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x44) = 0xffffffff;
    }
    lVar15 = 0;
    local_178[0] = (undefined8 *)(*param_1 + 8);
    if ((RefCountImpl *)*local_178[0] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*local_178[0]);
    }
    *local_178[0] = puVar9;
    if ((bVar1 == 0x10) || ((lVar14 = 1, bVar1 != 0x12 && (lVar14 = 2, bVar1 != 0x13)))) {
      lVar14 = lVar15;
    }
    lVar10 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    lVar11 = lVar15;
    if (lVar10 != 0) {
      lVar11 = FUN_1433218e0(lVar10,lVar14,bVar2 & 0xf,local_188,local_18c);
    }
    lVar14 = *(longlong *)(*param_1 + 8);
    pRVar5 = *(RefCountImpl **)(lVar14 + 0x18);
    if (pRVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar5);
    }
    *(longlong *)(lVar14 + 0x18) = lVar11;
    if (uVar8 != 0) {
      do {
        lVar14 = *(longlong *)(param_2 + 0x418);
        if (lVar14 == 0) {
          lVar14 = param_2 + 0x50;
        }
        *(undefined1 *)(lVar14 + 0x29) = 0;
        if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 1) {
          FUN_143396d60(lVar14);
        }
        uVar3 = *(undefined1 *)((ulonglong)*(uint *)(lVar14 + 0x4c) + *(longlong *)(lVar14 + 0x60));
        *(uint *)(lVar14 + 0x4c) = *(uint *)(lVar14 + 0x4c) + 1;
        Scaleform::GFx::LoadProcess::ReadRgbaTag(param_2,&local_184,param_3);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x18) + 0x20) + 4 + lVar15 * 8)
             = local_184;
        *(undefined1 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x18) + 0x20) + lVar15 * 8) =
             uVar3;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (longlong)(ulonglong)uVar8);
    }
    if (bVar1 == 0x13) {
      lVar15 = *(longlong *)(param_2 + 0x418);
      if (lVar15 == 0) {
        lVar15 = param_2 + 0x50;
      }
      *(undefined1 *)(lVar15 + 0x29) = 0;
      if (*(int *)(lVar15 + 0x50) - *(int *)(lVar15 + 0x4c) < 2) {
        FUN_143396c40(lVar15,2);
      }
      uVar8 = *(uint *)(lVar15 + 0x4c);
      uVar3 = *(undefined1 *)((ulonglong)(uVar8 + 1) + *(longlong *)(lVar15 + 0x60));
      uVar4 = *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar15 + 0x60));
      *(uint *)(lVar15 + 0x4c) = uVar8 + 2;
      *(float *)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x18) + 0x28) =
           (float)(int)CONCAT11(uVar3,uVar4) * 0.00390625;
    }
    lVar15 = *(longlong *)(*param_1 + 8);
    *(float *)(lVar15 + 0x20) = fVar21;
    *(float *)(lVar15 + 0x24) = fVar22;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    *(float *)(lVar15 + 0x2c) = fVar18;
    *(float *)(lVar15 + 0x30) = fVar19;
    *(float *)(lVar15 + 0x34) = fVar20;
    *(undefined4 *)(lVar15 + 0x38) = 0;
    *(float *)(lVar15 + 0x3c) = fVar17;
  }
  return;
}


