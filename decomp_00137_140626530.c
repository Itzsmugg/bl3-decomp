// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140626530 FUN_140626530 body=330 status=ok
// SIG undefined FUN_140626530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140626530(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  
  uVar3 = DAT_1468b5d98;
  lVar1 = *(longlong *)(param_1 + 0x718);
  *(undefined8 *)((longlong)param_2 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *param_2 = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined1 *)(param_2 + 3) = 0;
  if (lVar1 != 0) {
    lVar5 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong **)(lVar1 + 0x440) != (longlong *)0x0)) && (-1 < param_3)) {
      iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x440) + 0xc0))();
      if (param_3 < iVar4) {
        (**(code **)(**(longlong **)(lVar1 + 0x440) + 0x158))
                  (*(longlong **)(lVar1 + 0x440),&local_40,param_3);
        local_10 = CONCAT31(local_10._1_3_,1);
        *(undefined4 *)param_2 = local_40;
        *(undefined4 *)((longlong)param_2 + 4) = local_3c;
        *(undefined4 *)(param_2 + 1) = local_38;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
        param_2[2] = CONCAT44(local_2c,local_30);
        *(undefined4 *)(param_2 + 3) = local_10;
      }
    }
  }
  return param_2;
}



// FUNCTION 140626680 FUN_140626680 body=50 status=ok
// SIG undefined FUN_140626680(void)

longlong FUN_140626680(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
    return lVar2 + 0x3b0;
  }
  return 0;
}



// FUNCTION 1406266c0 FUN_1406266c0 body=109 status=ok
// SIG undefined FUN_1406266c0(void)

longlong FUN_1406266c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    iVar1 = FUN_1423ac950();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      iVar3 = iVar1 + -1;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                      (*(longlong **)(param_1 + 0xa78),iVar3);
    FUN_14062c660(param_1,uVar2,iVar1,0);
    return param_1 + 0x3b0;
  }
  return param_1 + 0x3b0;
}



// FUNCTION 140626730 FUN_140626730 body=43 status=ok
// SIG undefined FUN_140626730(void)

undefined8 FUN_140626730(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    lVar1 = FUN_140626d60();
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0xf8);
    }
  }
  return 0;
}



// FUNCTION 140626760 GetBoneName body=79 status=ok
// SIG undefined GetBoneName(void)

undefined8 * FApexDestructionCustomPayload::GetBoneName(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
  if (lVar1 != 0) {
    FUN_1423acf90(lVar1,param_2,*(int *)(param_1 + 0x10) + 1);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1406267b0 FUN_1406267b0 body=155 status=ok
// SIG undefined FUN_1406267b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406267b0(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  uVar8 = uRam00000001468b5b8c;
  uVar7 = uRam00000001468b5b88;
  uVar6 = uRam00000001468b5b84;
  uVar5 = _DAT_1468b5b80;
  uVar2 = uRam00000001468b5b78;
  cVar1 = *(char *)(param_1 + 0xb18);
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar2;
  uVar11 = uRam00000001468b5b9c;
  uVar10 = uRam00000001468b5b98;
  uVar9 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar9;
  *(undefined4 *)(param_2 + 5) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar11;
  *(undefined4 *)(param_2 + 2) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
  *(undefined4 *)(param_2 + 3) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
  if ((cVar1 != '\0') && (0 < param_3)) {
    lVar12 = FUN_140626d60();
    if ((lVar12 != 0) &&
       (((*(longlong *)(lVar12 + 0x440) != 0 && (-1 < param_3 + 1)) &&
        (param_3 + 1 < *(int *)(lVar12 + 0x160))))) {
      puVar13 = (undefined8 *)(((longlong)param_3 + 1) * 0x30 + *(longlong *)(lVar12 + 0x148));
      uVar2 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *param_2 = *puVar13;
      param_2[1] = uVar2;
      uVar2 = puVar13[5];
      param_2[4] = puVar13[4];
      param_2[5] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
    }
  }
  return param_2;
}



// FUNCTION 140626880 FUN_140626880 body=8 status=ok
// SIG undefined FUN_140626880(void)

undefined ** FUN_140626880(void)

{
  return &PTR_PTR_14621a208;
}



// FUNCTION 140626890 FUN_140626890 body=1226 status=ok
// SIG undefined FUN_140626890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140626890(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_8c8 [32];
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined4 local_898;
  undefined4 local_894;
  ushort local_888 [2];
  undefined4 local_884;
  undefined8 local_840;
  undefined8 local_838;
  longlong *local_830;
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_8c8;
  plVar5 = (longlong *)0x0;
  plVar2 = plVar5;
  if ((*(longlong **)(param_1 + 0x440) != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x440) + 0x48))(),
     plVar2 != (longlong *)0x0)) {
    if (param_2 != 0) {
      NvParameterized::setParamF32
                (plVar2,"defaultBehaviorGroup.damageThreshold",
                 *(float *)(param_2 + 0x40) * *(float *)(param_1 + 0x368));
    }
    NvParameterized::setParamF32
              (plVar2,"defaultBehaviorGroup.damageToRadius",*(undefined4 *)(param_1 + 0x36c));
    NvParameterized::setParamF32
              (plVar2,"defaultBehaviorGroup.damageSpread.falloffExponent",
               *(undefined4 *)(param_1 + 0x370));
    NvParameterized::setParamF32
              (plVar2,"defaultBehaviorGroup.damageSpread.minimumRadius",
               *(undefined4 *)(param_1 + 0x374));
    NvParameterized::setParamF32
              (plVar2,"defaultBehaviorGroup.damageSpread.radiusMultiplier",
               *(undefined4 *)(param_1 + 0x378));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.forceToDamage",*(undefined4 *)(param_1 + 0x380));
    if (*(char *)(param_1 + 0x388) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x38c);
    }
    NvParameterized::setParamF32(plVar2,"defaultBehaviorGroup.materialStrength",uVar9);
    if (*(char *)(param_1 + 0x37c) == '\0') {
      fVar8 = -1.0;
    }
    else {
      fVar8 = (float)*(int *)(param_1 + 900);
    }
    NvParameterized::setParamI32
              (plVar2,"destructibleParameters.impactDamageDefaultDepth",(int)fVar8);
    NvParameterized::setParamU32(plVar2,"supportDepth",*(undefined4 *)(param_1 + 0x3cc));
    NvParameterized::setParamU32
              (plVar2,"destructibleParameters.minimumFractureDepth",*(undefined4 *)(param_1 + 0x3d0)
              );
    uVar9 = 0xffffffff;
    if (*(char *)(param_1 + 0x3d4) != '\0') {
      uVar9 = *(undefined4 *)(param_1 + 0x3d8);
    }
    NvParameterized::setParamI32(plVar2,"destructibleParameters.debrisDepth",uVar9);
    NvParameterized::setParamU32
              (plVar2,"destructibleParameters.essentialDepth",*(undefined4 *)(param_1 + 0x3dc));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.damageCap",*(undefined4 *)(param_1 + 0x3bc));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.impactVelocityThreshold",
               *(undefined4 *)(param_1 + 0x3c0));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.maxChunkSpeed",*(undefined4 *)(param_1 + 0x3c4));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.fractureImpulseScale",*(undefined4 *)(param_1 + 0x3c8)
              );
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.debrisLifetimeMin",*(undefined4 *)(param_1 + 0x390));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.debrisLifetimeMax",*(undefined4 *)(param_1 + 0x394));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.debrisMaxSeparationMin",
               *(undefined4 *)(param_1 + 0x398));
    NvParameterized::setParamF32
              (plVar2,"destructibleParameters.debrisMaxSeparationMax",
               *(undefined4 *)(param_1 + 0x39c));
    local_8a8 = *(undefined8 *)(param_1 + 0x3a0);
    uStack_8a0 = *(undefined8 *)(param_1 + 0x3a8);
    local_884 = 0;
    local_894 = *(undefined4 *)(param_1 + 0x3b4);
    local_840 = 0;
    local_898 = *(undefined4 *)(param_1 + 0x3b0);
    local_838 = 0;
    local_888[0] = 0;
    local_830 = plVar2;
    local_840 = (**(code **)(*plVar2 + 0x78))(plVar2);
    local_830 = (longlong *)
                NvParameterized::findParam(plVar2,"destructibleParameters.validBounds",local_888);
    local_888[0] = local_888[0] & 0xff;
    if (local_830 != (longlong *)0x0) {
      (**(code **)(*local_830 + 0x370))(local_830,local_888,&local_8a8);
    }
    NvParameterized::setParamBool
              (plVar2,"destructibleParameters.flags.ACCUMULATE_DAMAGE",
               *(byte *)(param_1 + 0x3f0) & 1);
    NvParameterized::setParamBool
              (plVar2,"useAssetDefinedSupport",
               CONCAT31((uint3)(*(uint *)(param_1 + 0x3f0) >> 9),
                        (char)(*(uint *)(param_1 + 0x3f0) >> 1)) & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"useWorldSupport",*(uint *)(param_1 + 0x3f0) >> 2 & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"destructibleParameters.flags.DEBRIS_TIMEOUT",
               *(uint *)(param_1 + 0x3f0) >> 3 & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"destructibleParameters.flags.DEBRIS_MAX_SEPARATION",
               *(uint *)(param_1 + 0x3f0) >> 4 & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"destructibleParameters.flags.CRUMBLE_SMALLEST_CHUNKS",
               *(uint *)(param_1 + 0x3f0) >> 5 & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"destructibleParameters.flags.ACCURATE_RAYCASTS",
               *(uint *)(param_1 + 0x3f0) >> 6 & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"destructibleParameters.flags.USE_VALID_BOUNDS",
               *(uint *)(param_1 + 0x3f0) >> 7 & 0xffffff01);
    NvParameterized::setParamBool
              (plVar2,"formExtendedStructures",*(uint *)(param_1 + 0x3f0) >> 8 & 0xffffff01);
    plVar7 = plVar5;
    if (0 < *(int *)(param_1 + 1000)) {
      do {
        TCString<wchar_t>::SprintfImpl
                  (local_828,"depthParameters[%d].OVERRIDE_IMPACT_DAMAGE",plVar5);
        TCString<wchar_t>::SprintfImpl
                  (local_428,"depthParameters[%d].OVERRIDE_IMPACT_DAMAGE_VALUE",plVar5);
        cVar1 = *(char *)((longlong)plVar7 + *(longlong *)(param_1 + 0x3e0));
        if (cVar1 == '\0') {
          puVar3 = local_828;
LAB_140626d0b:
          uVar6 = 0;
LAB_140626d0e:
          NvParameterized::setParamBool(plVar2,puVar3,uVar6);
        }
        else {
          if (cVar1 == '\x01') {
            NvParameterized::setParamBool(plVar2,local_828,1);
            uVar6 = 1;
            puVar3 = local_428;
            goto LAB_140626d0e;
          }
          if (cVar1 == '\x02') {
            NvParameterized::setParamBool(plVar2,local_828,1);
            puVar3 = local_428;
            goto LAB_140626d0b;
          }
        }
        uVar4 = (int)plVar5 + 1;
        plVar5 = (longlong *)(ulonglong)uVar4;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      } while ((int)uVar4 < *(int *)(param_1 + 1000));
    }
  }
  return plVar2;
}



// FUNCTION 140626d60 FUN_140626d60 body=89 status=ok
// SIG undefined FUN_140626d60(void)

longlong FUN_140626d60(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 != 0) {
    lVar3 = FUN_14062e990();
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



// FUNCTION 140626dc0 GetDistancefieldAtlasData body=137 status=ok
// SIG undefined GetDistancefieldAtlasData(void)

void FPrimitiveSceneProxy::GetDistancefieldAtlasData
               (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined1 *param_6,undefined1 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  uVar3 = DAT_1468b5d98;
  uVar2 = DAT_1468b5d94;
  uVar1 = DAT_1468b5d90;
  local_10 = local_10 & 0xffffff00;
  *param_2 = DAT_1468b5d90;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar1;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uVar3,uVar2);
  param_2[6] = local_10;
  *param_3 = 0;
  *param_4 = 0xffffffffffffffff;
  *(undefined4 *)(param_4 + 1) = 0xffffffff;
  *param_5 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  return;
}



// FUNCTION 140626e50 FUN_140626e50 body=8 status=ok
// SIG undefined FUN_140626e50(void)

longlong FUN_140626e50(longlong param_1)

{
  return param_1 + 0xb20;
}



// FUNCTION 140626e80 FUN_140626e80 body=20 status=ok
// SIG undefined FUN_140626e80(void)

bool FUN_140626e80(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  return cVar1 != '\0';
}



// FUNCTION 140626f40 GetSocketTransform body=107 status=ok
// SIG undefined GetSocketTransform(void)

longlong UDestructibleComponent::GetSocketTransform
                   (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_1423b0b00();
  iVar2 = FUN_1423ac950(param_1,param_3);
  if (0 < iVar2) {
    cVar1 = FUN_1423b47e0(param_1,iVar2);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_2 + 0x20) = 0x3f8000003f800000;
      *(undefined8 *)(param_2 + 0x28) = 0x3f800000;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140626fe0 FUN_140626fe0 body=111 status=ok
// SIG undefined FUN_140626fe0(void)

undefined8 * FUN_140626fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144019758;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140627060 FUN_140627060 body=107 status=ok
// SIG undefined FUN_140627060(void)

bool FUN_140627060(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_28 [32];
  
  pfVar1 = (float *)(**(code **)(*param_2 + 0x48))(param_2,local_28,0x3f8147ae);
  fVar4 = (pfVar1[5] - pfVar1[2]) * 0.5;
  fVar2 = (pfVar1[4] - pfVar1[1]) * 0.5;
  fVar3 = (pfVar1[3] - *pfVar1) * 0.5;
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  return *(float *)(param_1 + 0xa54) <= fVar4 && fVar4 != *(float *)(param_1 + 0xa54);
}



// FUNCTION 1406270d0 FUN_1406270d0 body=127 status=ok
// SIG undefined FUN_1406270d0(void)

undefined8 FUN_1406270d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  
  if (*(longlong **)(param_1 + 0xa78) == (longlong *)0x0) {
    return 0;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x90))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa0))();
    if (iVar2 != 1) {
      return 1;
    }
    psVar3 = (short *)(**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa8))();
    if (*psVar3 != 0) {
      return 1;
    }
  }
  if (cVar1 == '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 140627160 FUN_140627160 body=413 status=ok
// SIG undefined FUN_140627160(void)

BADSPACEBASE *
FUN_140627160(longlong param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 param_5)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float local_res8 [2];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  plVar1 = *(longlong **)(param_1 + 0xa78);
  if (plVar1 != (longlong *)0x0) {
    local_58 = *(undefined8 *)param_3;
    local_res8[0] = 0.0;
    local_50 = param_3[2];
    local_68 = CONCAT44(param_4[1] - param_3[1],*param_4 - *param_3);
    local_60 = param_4[2] - local_50;
    uVar3 = (**(code **)(*plVar1 + 0x1a0))
                      (plVar1,local_res8,local_48,&local_58,&local_68,3,0xffffffff);
    uVar5 = uVar3;
    if (((int)uVar3 != -1) && (local_res8[0] <= 1.0)) {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                        (*(longlong **)(param_1 + 0xa78),uVar3 & 0xffffffff);
      uVar5 = 0;
      if (lVar4 != 0) {
        FUN_14062c660(param_1,lVar4,uVar3 & 0xffffffff,&local_38);
        local_50 = param_4[2];
        local_58 = *(undefined8 *)param_4;
        local_60 = param_3[2];
        local_68 = *(undefined8 *)param_3;
        bVar2 = FUN_142391900(param_1,param_2,&local_68,&local_58,param_5);
        *(undefined8 *)(param_1 + 0x4c0) = local_38;
        *(undefined8 *)(param_1 + 0x4c8) = local_30;
        *(undefined4 *)(param_1 + 0x3b0) = local_28;
        return (BADSPACEBASE *)(undefined1 *)(ulonglong)bVar2;
      }
    }
    register0x00000020 = (BADSPACEBASE *)(uVar5 & 0xffffffffffffff00);
  }
  return register0x00000020;
}



// FUNCTION 140627310 FUN_140627310 body=61 status=ok
// SIG undefined FUN_140627310(void)

void FUN_140627310(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  uVar1 = FUN_142696340(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000140627346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1,uVar1);
  return;
}



// FUNCTION 140627350 FUN_140627350 body=2738 status=ok
// SIG undefined FUN_140627350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140627350(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  undefined2 uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  byte bVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined1 *local_138;
  undefined8 *puStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ushort local_a8 [2];
  undefined4 local_a4;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_1423437b0();
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 4;
  uVar13 = (**(code **)(*param_1 + 0x6b8))(param_1);
  FWeakObjectPtr::operator=(param_1 + 0x9d,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x9e,uVar13);
  iVar20 = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0xe3] == 0) {
    return;
  }
  lVar14 = param_1[0x24];
  if (lVar14 == 0) {
    local_148 = lVar14;
    lVar14 = FUN_1423407b0(param_1);
  }
  local_138 = *(undefined1 **)(lVar14 + 0x218);
  if (DAT_146855f80 == 0) {
    return;
  }
  if (param_1[0x14f] != 0) {
    return;
  }
  local_148 = lVar14;
  local_160 = FUN_140626d60(param_1);
  if (local_160 == 0) {
    return;
  }
  if (*(longlong *)(local_160 + 0x440) == 0) {
    return;
  }
  *(bool *)(param_1 + 0x163) = 0 < *(int *)(local_160 + 0x450);
  iVar11 = (**(code **)(**(longlong **)(local_160 + 0x440) + 0xc0))();
  if (0 < iVar11) {
    do {
      FUN_14062a3b0(param_1,iVar20,0);
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar11);
  }
  if (((char)param_1[0x163] != '\0') &&
     (iVar20 = *(int *)(local_160 + 0x450), (int)param_1[0x165] != iVar20)) {
    *(undefined4 *)(param_1 + 0x165) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb2c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x164,0);
    }
    TArray<FTransform,FDefaultAllocator>::AddDefaulted(param_1 + 0x164,iVar20);
    iVar20 = *(int *)((longlong)param_1 + 0x76c);
    iVar22 = *(int *)(local_160 + 0x160);
    if (iVar22 == (int)param_1[(longlong)iVar20 * 2 + 0xe6]) {
      if (1 < (longlong)iVar22) {
        iVar25 = 0;
        lVar21 = 0x30;
        lVar24 = (longlong)iVar22 + -1;
        do {
          lVar14 = param_1[(longlong)iVar20 * 2 + 0xe5];
          iVar22 = 0;
          if (-1 < iVar25) {
            iVar22 = iVar25;
          }
          puVar15 = (undefined8 *)FUN_1406267b0(param_1,local_a8,iVar22);
          iVar25 = iVar25 + 1;
          lVar21 = lVar21 + 0x30;
          uVar13 = puVar15[1];
          puVar1 = (undefined8 *)(lVar14 + -0x30 + lVar21);
          *puVar1 = *puVar15;
          puVar1[1] = uVar13;
          uVar13 = puVar15[3];
          puVar1 = (undefined8 *)(lVar14 + -0x20 + lVar21);
          *puVar1 = puVar15[2];
          puVar1[1] = uVar13;
          uVar2 = *(undefined4 *)((longlong)puVar15 + 0x24);
          uVar3 = *(undefined4 *)(puVar15 + 5);
          uVar4 = *(undefined4 *)((longlong)puVar15 + 0x2c);
          puVar17 = (undefined4 *)(lVar14 + -0x10 + lVar21);
          *puVar17 = *(undefined4 *)(puVar15 + 4);
          puVar17[1] = uVar2;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          lVar24 = lVar24 + -1;
          lVar14 = local_148;
        } while (lVar24 != 0);
      }
      UActorComponent::MarkRenderDynamicDataDirty(param_1);
      FUN_1423424c0(param_1);
    }
  }
  cVar9 = UWorld::IsGameWorld(lVar14);
  if (cVar9 == '\0') {
    return;
  }
  local_d0 = FUN_142698570(param_1 + 0x76);
  plVar16 = (longlong *)FUN_140626890(local_160,local_d0);
  local_f0 = (undefined4)param_1[0x42];
  local_ec = *(undefined4 *)((longlong)param_1 + 0x214);
  local_e8 = (undefined4)param_1[0x43];
  local_e4 = *(undefined4 *)((longlong)param_1 + 0x21c);
  local_e0 = (undefined4)param_1[0x44];
  local_dc = *(undefined4 *)((longlong)param_1 + 0x224);
  local_d8 = (undefined4)param_1[0x45];
  local_100 = (undefined4)param_1[0x46];
  local_fc = *(undefined4 *)((longlong)param_1 + 0x234);
  local_f8 = (undefined4)param_1[0x47];
  local_a4 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a8[0] = 0;
  local_50 = plVar16;
  local_60 = (**(code **)(*plVar16 + 0x78))(plVar16);
  local_50 = (longlong *)NvParameterized::findParam(plVar16,"globalPose",local_a8);
  if (local_50 != (longlong *)0x0) {
    local_a8[0] = local_a8[0] & 0xff;
    (**(code **)(*local_50 + 0x388))(local_50,local_a8,&local_f0);
  }
  local_a4 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a8[0] = 0;
  local_50 = plVar16;
  local_60 = (**(code **)(*plVar16 + 0x78))(plVar16);
  local_50 = (longlong *)NvParameterized::findParam(plVar16,"scale",local_a8);
  local_a8[0] = local_a8[0] & 0xff;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x2b0))(local_50,local_a8,&local_100);
  }
  NvParameterized::setParamBool(plVar16,"dynamic",*(byte *)(param_1 + 0x78) >> 3 & 1);
  NvParameterized::setParamF32(plVar16,"sleepVelocityFrameDecayConstant",0x41a00000);
  uVar10 = (**(code **)(*param_1 + 0x4f8))(param_1);
  FUN_1426d3dd0(&local_c8);
  plVar18 = param_1 + 0x156;
  iVar20 = (**(code **)(*param_1 + 0x4e8))(param_1);
  if (iVar20 == 0) {
    uVar10 = 0;
    FUN_1426ea8d0(&local_c8,0,0);
    FUN_1426a85d0(param_1 + 0x150,0);
    FUN_1426a85d0(plVar18,0);
  }
  else {
    puVar17 = (undefined4 *)(**(code **)(*param_1 + 0x4d0))(param_1);
    local_c8 = *puVar17;
    uStack_c4 = puVar17[1];
    uStack_c0 = puVar17[2];
    uStack_bc = puVar17[3];
    local_b8 = puVar17[4];
    uStack_b4 = puVar17[5];
    uStack_b0 = puVar17[6];
    uStack_ac = puVar17[7];
    FUN_1426a8d80(param_1 + 0x150,&local_c8,0);
    FUN_1426a8d80(plVar18,&local_c8,0);
    FCollisionResponse::SetResponse(plVar18,2,1);
  }
  if (*(float *)(local_160 + 0x380) == 0.0) {
LAB_1406277c5:
    cVar9 = '\0';
  }
  else if (**(char **)(local_160 + 0x3e0) == '\x01') {
    cVar9 = '\x01';
  }
  else {
    if ((**(char **)(local_160 + 0x3e0) == '\x02') || (*(int *)(local_160 + 900) < 0))
    goto LAB_1406277c5;
    cVar9 = *(char *)(local_160 + 0x37c);
  }
  if ((*(char *)(local_160 + 0x388) == '\0') || (*(float *)(local_160 + 0x38c) <= 0.0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar23 = *(byte *)(param_1 + 0x78);
  if (((bVar23 & 2) == 0) && (cVar9 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
  local_108 = *(undefined4 *)(param_1[0x23] + 0xc);
  local_168[0] = uVar10;
  FUN_1422ffde0(&local_158,local_168,0,&local_c8);
  if ((bVar23 & 1) != 0) {
    uStack_150._0_4_ = (uint)uStack_150 | 4;
  }
  if (bVar5) {
    uStack_150._0_4_ = (uint)uStack_150 | 8;
  }
  if (bVar6) {
    uStack_150._0_4_ = (uint)uStack_150 | 0x20;
  }
  local_11c = (uint)uStack_150 | 0x43;
  local_118 = local_108;
  local_110 = local_158._4_4_;
  local_120 = (undefined4)local_148;
  local_114 = (undefined4)local_158;
  local_124 = (undefined4)local_158;
  local_128 = 0;
  local_10c = local_11c;
  (**(code **)(*param_1 + 0xa40))(param_1,&local_118,&local_128);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.simulationFilterData.word0",local_128);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.simulationFilterData.word1",local_124);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.simulationFilterData.word2",local_120);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.simulationFilterData.word3",local_11c);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.queryFilterData.word0",local_118);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.queryFilterData.word1",local_114);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.queryFilterData.word2",local_110);
  NvParameterized::setParamU32(plVar16,"p3ShapeDescTemplate.queryFilterData.word3",local_10c);
  lVar14 = local_d0;
  lVar21 = FUN_1426c86a0(local_d0);
  if (lVar21 != 0) {
    NvParameterized::setParamU64(plVar16,"p3ShapeDescTemplate.material",lVar21);
  }
  NvParameterized::setParamF32(plVar16,"p3ShapeDescTemplate.restOffset",0);
  NvParameterized::setParamBool(plVar16,"p3ActorDescTemplate.flags.eDISABLE_GRAVITY",0);
  NvParameterized::setParamBool(plVar16,"p3ActorDescTemplate.flags.eVISUALIZATION",1);
  NvParameterized::setParamU64(plVar16,"p3ActorDescTemplate.userData",0);
  NvParameterized::setParamU64(plVar16,"p3ShapeDescTemplate.userData",param_1 + 0x15c);
  NvParameterized::setParamF32
            (plVar16,"p3BodyDescTemplate.angularDamping",*(undefined4 *)((longlong)param_1 + 0x41c))
  ;
  NvParameterized::setParamF32(plVar16,"p3BodyDescTemplate.linearDamping",(int)param_1[0x83]);
  lVar21 = (**(code **)(*DAT_146b08400 + 0x20))();
  fVar27 = *(float *)(lVar21 + 8);
  fVar26 = (float)FUN_1426987a0(param_1 + 0x76);
  NvParameterized::setParamF32
            (plVar16,"p3BodyDescTemplate.sleepThreshold",fVar26 * fVar27 * 5e-05 * fVar27);
  fVar27 = 1.0;
  if (lVar14 != 0) {
    fVar27 = *(float *)(lVar14 + 0x38);
  }
  NvParameterized::setParamF32(plVar16,"p3BodyDescTemplate.density",fVar27 * 0.001);
  NvParameterized::setParamBool
            (plVar16,"p3BodyDescTemplate.flags.eENABLE_CCD",*(byte *)(param_1 + 0x78) & 1);
  NvParameterized::setParamBool(plVar16,"createChunkEvents",1);
  NvParameterized::setParamBool(plVar16,"useHardSleeping",(char)param_1[0x14a]);
  puVar8 = local_138;
  cVar9 = FBodyInstance::UseAsyncScene(param_1 + 0x76,local_138);
  bVar23 = -(cVar9 != '\0') & 2;
  local_138 = (undefined1 *)FUN_1426e19d0(puVar8,bVar23);
  plVar18 = (longlong *)FUN_1426e2530(puVar8,bVar23);
  if (cVar9 == '\0') {
    uVar19 = *(undefined2 *)(puVar8 + 0x60);
  }
  else {
    uVar19 = 0;
  }
  *(undefined2 *)((longlong)param_1 + 0x3b6) = uVar19;
  if (bVar23 == 2) {
    uVar19 = *(undefined2 *)(puVar8 + 100);
  }
  else {
    uVar19 = 0;
  }
  *(undefined2 *)(param_1 + 0x77) = uVar19;
  FUN_1406296d0(param_1 + 0x14b,iVar11);
  TArray<FApexDestructionCustomPayload,TSizedDefaultAllocator<32>_>::AddDefaulted
            (param_1 + 0x14b,iVar11);
  *(undefined4 *)(param_1 + 0x15f) = 0;
  if (*(int *)((longlong)param_1 + 0xafc) < iVar11) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x15e,iVar11);
  }
  TArray<FString,FDefaultAllocator>::AddZeroed(param_1 + 0x15e,iVar11);
  lVar14 = DAT_146856030;
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  lVar21 = 4;
  if (((cVar9 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
    lVar24 = 4;
  }
  else {
    lVar24 = 0;
  }
  lVar7 = DAT_146856100;
  if (*(int *)(lVar24 + lVar14) != 1) {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar9 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)) {
      lVar21 = 0;
    }
    if (*(int *)(lVar21 + lVar7) != 0) {
      uVar13 = 0;
      goto LAB_140627c02;
    }
  }
  uVar13 = 1;
LAB_140627c02:
  NvParameterized::setParamBool(plVar16,"doNotCreateRenderable",uVar13);
  (**(code **)(*param_1 + 0xa48))(param_1,plVar16);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x358))
              (plVar18,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ApexDestruction\\Source\\ApexDestruction\\Private\\DestructibleComponent.cpp"
               ,0x2be);
  }
  FPhysCommandHandler::Flush(DAT_146b08410);
  lVar14 = (**(code **)(**(longlong **)(local_160 + 0x440) + 0x60))
                     (*(longlong **)(local_160 + 0x440),plVar16,local_138);
  param_1[0x14f] = lVar14;
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x360))(plVar18);
  }
  local_158 = (longlong *)CONCAT44(local_158._4_4_,5);
  uStack_150._0_4_ = (uint)param_1;
  uStack_150._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  *(undefined4 *)(param_1 + 0x15c) = 5;
  *(undefined4 *)((longlong)param_1 + 0xae4) = local_158._4_4_;
  *(uint *)(param_1 + 0x15d) = (uint)uStack_150;
  *(undefined4 *)((longlong)param_1 + 0xaec) = uStack_150._4_4_;
  *(longlong **)(param_1[0x14f] + 8) = param_1 + 0x15c;
  uStack_150 = param_1;
  (**(code **)(*(longlong *)param_1[0x14f] + 0x48))();
  plVar16 = (longlong *)
            (**(code **)(*(longlong *)param_1[0x14f] + 0xd0))((longlong *)param_1[0x14f],0);
  if ((plVar16 != (longlong *)0x0) && (bVar23 = *(byte *)(param_1 + 0x78), (bVar23 & 8) != 0)) {
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x358))
                (plVar18,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ApexDestruction\\Source\\ApexDestruction\\Private\\DestructibleComponent.cpp"
                 ,0x2d8);
      bVar23 = *(byte *)(param_1 + 0x78);
    }
    (**(code **)(*plVar16 + 0x50))(plVar16,2,~(bVar23 >> 5) & 1);
    if (-1 < (char)param_1[0x78]) {
      (**(code **)(*(longlong *)param_1[0x14f] + 0x160))((longlong *)param_1[0x14f],0,0);
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x360))(plVar18);
    }
  }
  if ((char)param_1[0x163] != '\0') {
    FUN_14062cd50(param_1,0);
    local_158 = &local_160;
    puStack_130 = &local_158;
    local_138 = &LAB_140624dc0;
    uStack_150 = param_1;
    FUN_1406256c0(param_1,&local_138);
    FUN_140629400(param_1);
  }
  (**(code **)(*param_1 + 0x4b8))(param_1);
  if (((char)param_1[0x163] == '\0') || (*(char *)((longlong)param_1 + 0xb19) == '\0')) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  (**(code **)(*param_1 + 0x358))(param_1,uVar13);
  return;
}



// FUNCTION 140627e10 FUN_140627e10 body=320 status=ok
// SIG undefined FUN_140627e10(void)

void FUN_140627e10(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  local_48 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 8);
  local_3c = *(undefined8 *)(param_2 + 8);
  local_40 = uVar1;
  local_34 = uVar2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x14d,&local_48);
  lVar3 = param_1[0x23];
  if (lVar3 != 0) {
    lVar7 = FUN_14062e7a0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_48 = uVar5;
      local_40 = uVar1;
      local_3c = uVar6;
      local_34 = uVar2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar3 + 0x468,&local_48);
    }
  }
  (**(code **)(*param_1 + 0xa30))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x5e) & 8) != 0) {
    *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) & 0xf7;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 140627f50 FUN_140627f50 body=69 status=ok
// SIG undefined FUN_140627f50(void)

void FUN_140627f50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    FUN_1426bd8f0(DAT_146b08410);
    *(undefined8 *)(param_1 + 0xa78) = 0;
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  FUN_1423935c0(param_1);
  return;
}



// FUNCTION 140627fa0 FUN_140627fa0 body=313 status=ok
// SIG undefined FUN_140627fa0(void)

void FUN_140627fa0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_1423b5450();
  if ((*(char *)(param_1 + 0xb0c) != '\0') && (lVar1 = *(longlong *)(param_1 + 400), lVar1 != 0)) {
    lVar4 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar4 = 0;
    if (bVar2) {
      lVar4 = lVar1;
    }
    FWeakObjectPtr::operator=(param_1 + 0xb10,lVar4);
  }
  lVar1 = param_1 + 0xb10;
  cVar3 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar3 != '\0') {
    uVar5 = FWeakObjectPtr::Get(lVar1);
    lVar4 = FWeakObjectPtr::Get(lVar1);
    FWeakObjectPtr::operator=(lVar1,uVar5);
    cVar3 = FWeakObjectPtr::IsValid(lVar1);
    if (cVar3 != '\0') {
      lVar6 = FWeakObjectPtr::Get(lVar1);
      uVar5 = FWeakObjectPtr::Get(lVar1);
      FTickFunction::AddPrerequisite(param_1 + 0x30,uVar5,lVar6 + 0x30);
    }
    if (lVar4 != 0) {
      FTickFunction::RemovePrerequisite(param_1 + 0x30,lVar4,lVar4 + 0x30);
    }
    cVar3 = FWeakObjectPtr::IsValid(lVar1);
    if (cVar3 != '\0') {
      FUN_1406292a0(param_1,0);
      if ((*(byte *)(param_1 + 0xb8) & 4) != 0) {
        FUN_140629400(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1406280e0 FUN_1406280e0 body=859 status=ok
// SIG undefined FUN_1406280e0(void)

void FUN_1406280e0(longlong param_1,byte param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [128];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((((*(longlong *)(param_1 + 0x718) != 0) && ((*(byte *)(param_1 + 0xb8) & 4) != 0)) &&
      ((~param_2 & 1) != 0)) &&
     ((plVar5 = *(longlong **)(param_1 + 0xa78), plVar5 != (longlong *)0x0 &&
      ((*(char *)(param_1 + 0xb18) == '\0' || (*(int *)(param_1 + 0xb1c) < 1)))))) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0xd0))(plVar5,0);
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar4 = *(float *)(param_1 + 0x21c);
    local_98 = *(undefined4 *)(param_1 + 0x220);
    local_94 = *(undefined4 *)(param_1 + 0x224);
    local_90 = *(undefined4 *)(param_1 + 0x228);
    fVar9 = fVar1 + fVar1;
    local_bc = 0;
    fVar8 = fVar2 + fVar2;
    local_ac = 0;
    local_9c = 0;
    local_8c = 0x3f800000;
    local_b4 = fVar3 * (fVar3 + fVar3);
    local_b8 = fVar4 * (fVar3 + fVar3);
    local_c0 = fVar3 * fVar9 - fVar4 * fVar8;
    local_a0 = 1.0 - fVar1 * fVar9;
    local_a8 = fVar4 * fVar8 + fVar3 * fVar9;
    local_c8 = (1.0 - fVar2 * fVar8) - local_b4;
    local_a4 = fVar3 * fVar8 - fVar4 * fVar9;
    local_b0 = fVar3 * fVar8 + fVar4 * fVar9;
    local_c4 = local_b8 + fVar2 * fVar9;
    local_b8 = fVar2 * fVar9 - local_b8;
    local_b4 = local_a0 - local_b4;
    local_a0 = local_a0 - fVar2 * fVar8;
    if ((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x30))(plVar5), lVar6 == 0))
    {
      local_f8 = local_c8;
      local_f0 = local_c0;
      local_f4 = local_c4;
      local_e8 = local_b4;
      local_ec = local_b8;
      local_e0 = local_a8;
      local_e4 = local_b0;
      local_d8 = local_a0;
      local_dc = local_a4;
      pfVar7 = (float *)physx::PxQuat::PxQuat(local_88,&local_f8);
      local_f8 = *pfVar7;
      local_f4 = pfVar7[1];
      local_f0 = pfVar7[2];
      local_ec = pfVar7[3];
      local_e8 = (float)local_98;
      local_e4 = (float)local_94;
      local_e0 = (float)local_90;
      (**(code **)(*plVar5 + 0xa8))(plVar5,&local_f8,1);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x118))
              (*(longlong **)(param_1 + 0xa78),&local_c8);
  }
  return;
}



// FUNCTION 140628450 FUN_140628450 body=714 status=ok
// SIG undefined FUN_140628450(void)

void FUN_140628450(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  uint local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 local_78 [80];
  
  uVar12 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    do {
      uVar5 = *(ushort *)(*(longlong *)(param_2 + 8) + uVar12 * 4);
      bVar13 = *(byte *)(*(longlong *)(param_2 + 8) + 2 + uVar12 * 4) >> 1 & 1;
      local_res10[0] = (uint)uVar5;
      local_res18[0] = uVar5 + 1;
      uVar14 = (ulonglong)bVar13;
      if ((((char)param_1[0x163] != '\0') && (local_res10[0] == 0)) &&
         (uVar14 = (ulonglong)bVar13, param_1[0x14f] != 0)) {
        uVar14 = 0;
      }
      if ((char)uVar14 == '\0') {
        (**(code **)(*param_1 + 0x9d0))(param_1,local_res18[0],0);
      }
      else {
        (**(code **)(*param_1 + 0x9d8))();
        if (param_1[0x14f] != 0) {
          if (((char)param_1[0x163] != '\0') && (0 < (int)local_res10[0])) {
            lVar8 = FUN_140626d60(param_1);
            if ((int)local_res10[0] <= *(int *)(lVar8 + 0x450)) {
              lVar8 = FUN_140626d60(param_1);
              if (*(int *)((longlong)param_1 + 0xb1c) < *(int *)(lVar8 + 0x450)) {
                local_98 = &LAB_140624d60;
                *(int *)((longlong)param_1 + 0xb1c) = *(int *)((longlong)param_1 + 0xb1c) + 1;
                local_120 = local_res10;
                local_118 = local_res18;
                puStack_90 = &local_128;
                local_88 = 0x40624d60;
                uStack_84 = 1;
                local_128 = param_1;
                uStack_80 = puStack_90;
                FUN_1406256c0(param_1,&local_88);
                goto LAB_1406286c7;
              }
            }
          }
          iVar7 = (**(code **)(*(longlong *)param_1[0x14f] + 0xd8))
                            ((longlong *)param_1[0x14f],local_res20,local_res10[0]);
          if (iVar7 != 0) {
            uVar9 = (**(code **)(*(longlong *)param_1[0x14f] + 0xe0))
                              ((longlong *)param_1[0x14f],&local_128,local_res10[0]);
            physx::PxMat44::PxMat44(&local_d8,uVar9);
            local_128 = (longlong *)CONCAT44(local_d4,local_d8);
            local_120 = (uint *)CONCAT44(local_c8,local_d0);
            local_110 = local_b8;
            local_118 = (int *)CONCAT44(local_c0,local_c4);
            local_108 = local_b0;
            local_10c = local_b4;
            puVar10 = (undefined4 *)physx::PxQuat::PxQuat(local_78,&local_128);
            uVar1 = *puVar10;
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            cVar6 = FUN_1406270d0(param_1);
            if (cVar6 == '\0') {
              FUN_142719970(param_1,1);
            }
            else {
              local_100 = local_a8;
              local_f8 = local_a0;
              local_fc = local_a4;
              local_e8 = uVar1;
              local_e4 = uVar2;
              local_e0 = uVar3;
              local_dc = uVar4;
              FUN_14062a670(param_1,local_res10[0],&local_e8,&local_100,0);
            }
          }
        }
      }
LAB_1406286c7:
      UActorComponent::MarkRenderDynamicDataDirty(param_1);
      FUN_1423424c0(param_1);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 140628720 FUN_140628720 body=285 status=ok
// SIG undefined FUN_140628720(void)

void FUN_140628720(longlong param_1,int param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar5 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0xa58);
  *(int *)(lVar5 + 0x10) = param_2;
  FWeakObjectPtr::operator=(lVar5 + 0x14,param_1);
  puVar6 = (undefined4 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0xaf0));
  *puVar6 = 7;
  *(longlong *)(puVar6 + 2) = lVar5;
  param_3[2] = (longlong)puVar6;
  lVar5 = (**(code **)(*param_3 + 0x80))(param_3);
  *(undefined4 **)(lVar5 + 0x10) = puVar6;
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
  (**(code **)(*plVar3 + 0x50))(plVar3,2,~(*(byte *)(param_1 + 0x3c0) >> 5) & 1);
  lVar5 = *(longlong *)(param_1 + 0x718);
  if (lVar5 != 0) {
    lVar4 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1406287fe;
  }
  lVar5 = 0;
LAB_1406287fe:
  iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x440) + 0x150))
                    (*(longlong **)(lVar5 + 0x440),param_2);
  if (-1 < iVar2) {
    FUN_14062bb10(param_1,param_3,param_2);
  }
  return;
}



// FUNCTION 140628850 FUN_140628850 body=52 status=ok
// SIG undefined FUN_140628850(void)

void FUN_140628850(longlong param_1)

{
  FUN_1422384a0();
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_14234fe40(*(longlong *)(param_1 + 0x458),*(byte *)(param_1 + 0x460) & 1);
    return;
  }
  return;
}



// FUNCTION 140628890 FUN_140628890 body=756 status=ok
// SIG undefined FUN_140628890(void)

void FUN_140628890(longlong param_1)

{
  short *psVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  short *psVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_res18;
  
  FUN_14277fa10();
  FUN_14276f2b0(param_1);
  plVar14 = *(longlong **)(param_1 + 0x40);
  local_res18 = plVar14;
  iVar6 = FUN_1424c8c60();
  uVar16 = 0;
  uVar13 = uVar16;
  uVar15 = uVar16;
  if (0 < *(int *)(param_1 + 0xd0)) {
    do {
      plVar2 = *(longlong **)(uVar13 + *plVar14);
      plVar14 = plVar2 + 0x81;
      psVar9 = (short *)*plVar14;
      local_res10 = (longlong)(int)plVar2[0x82];
      psVar1 = psVar9 + local_res10;
      for (; psVar9 != psVar1; psVar9 = psVar9 + 1) {
        if (*psVar9 == 0) goto LAB_140628957;
      }
      iVar7 = (int)plVar2[0x82] + 1;
      *(int *)(plVar2 + 0x82) = iVar7;
      if (*(int *)((longlong)plVar2 + 0x414) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar14);
      }
      *(undefined2 *)(*plVar14 + local_res10 * 2) = 0;
      AlgoImpl::
      IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>
                (*plVar14,(longlong)(int)plVar2[0x82],local_res8[0],local_res8);
LAB_140628957:
      if (0 < (int)plVar2[1]) {
        piVar10 = (int *)(*plVar2 + 0x30);
        uVar12 = uVar16;
        do {
          if (iVar6 < *piVar10) break;
          uVar12 = uVar12 + 1;
          piVar10 = piVar10 + 0x42;
        } while ((longlong)uVar12 < (longlong)(int)plVar2[1]);
      }
      uVar17 = (int)uVar15 + 1;
      plVar14 = local_res18;
      uVar13 = uVar13 + 8;
      uVar15 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(param_1 + 0xd0));
  }
  plVar14 = (longlong *)(param_1 + 0x460);
  *(undefined4 *)(param_1 + 0x468) = 0;
  if (*(int *)(param_1 + 0x46c) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar14);
  }
  if ((0 < *(int *)(param_1 + 0x450)) && (*(longlong **)(param_1 + 0x440) != (longlong *)0x0)) {
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0xc0))();
    iVar6 = *(int *)(param_1 + 0x468);
    iVar11 = iVar6 + iVar7;
    *(int *)(param_1 + 0x468) = iVar11;
    if (*(int *)(param_1 + 0x46c) < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar14);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar14 + (longlong)iVar6 * 2),0,(longlong)iVar7 * 2);
    uVar13 = uVar16;
    uVar15 = uVar16;
    if (0 < iVar7) {
      do {
        iVar6 = (int)uVar13;
        if (*(int *)(param_1 + 0x450) < iVar6) {
          do {
            uVar17 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x150))();
            uVar13 = (ulonglong)uVar17;
          } while (*(int *)(param_1 + 0x450) < (int)uVar17);
        }
        *(short *)(*plVar14 + uVar15 * 2) = (short)uVar13;
        uVar15 = uVar15 + 1;
        uVar13 = (ulonglong)(iVar6 + 1);
      } while ((longlong)uVar15 < (longlong)iVar7);
    }
  }
  plVar14 = (longlong *)(param_1 + 0x3f8);
  if ((*(int *)(param_1 + 0x400) == 0) &&
     (((((*(char *)(param_1 + 0x410) != '\n' || (*(float *)(param_1 + 0x414) != 4.0)) ||
        (*(float *)(param_1 + 0x418) != 4.0)) ||
       ((*(int *)(param_1 + 0x41c) != 0 || (*(int *)(param_1 + 0x420) != 0)))) ||
      ((*(int *)(param_1 + 0x424) != 0 || (*(int *)(param_1 + 0x428) != 0)))))) {
    *(undefined4 *)(param_1 + 0x400) = 1;
    if (*(int *)(param_1 + 0x404) < 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (plVar14,0);
    }
    puVar3 = (undefined1 *)*plVar14;
    *puVar3 = 10;
    *(undefined4 *)(puVar3 + 4) = 0x40800000;
    *(undefined8 *)(puVar3 + 8) = 0x40800000;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined1 *)*plVar14 = *(undefined1 *)(param_1 + 0x410);
    *(undefined4 *)(*plVar14 + 4) = *(undefined4 *)(param_1 + 0x414);
    *(undefined4 *)(*plVar14 + 8) = *(undefined4 *)(param_1 + 0x418);
    *(undefined4 *)(*plVar14 + 0xc) = *(undefined4 *)(param_1 + 0x41c);
    *(undefined4 *)(*plVar14 + 0x10) = *(undefined4 *)(param_1 + 0x420);
    *(undefined4 *)(*plVar14 + 0x14) = *(undefined4 *)(param_1 + 0x424);
    *(undefined4 *)(*plVar14 + 0x18) = *(undefined4 *)(param_1 + 0x428);
  }
  lVar4 = DAT_146856100;
  if (*(longlong *)(param_1 + 0x440) != 0) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
      uVar16 = 4;
    }
    if (*(int *)(lVar4 + uVar16) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x440) + 0xd8))(*(longlong **)(param_1 + 0x440),0);
    }
  }
  return;
}



// FUNCTION 140628b90 FUN_140628b90 body=269 status=ok
// SIG undefined FUN_140628b90(void)

void FUN_140628b90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 local_res8 [2];
  undefined8 local_28;
  undefined4 *puStack_20;
  undefined8 local_18;
  undefined8 *puStack_10;
  
  FUN_1423b6c70();
  if ((((*(byte *)(param_1 + 0xb8) & 4) != 0) && (param_2 != *(longlong *)(param_1 + 0x20))) &&
     (*(longlong *)(param_1 + 0xa78) != 0)) {
    local_res8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0xc);
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x18) + 0x10))();
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0xa78) + 0x18);
    cVar1 = (**(code **)(*plVar3 + 8))(plVar3,plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x160))(plVar2,&local_28);
      local_28 = CONCAT44(local_28._4_4_,local_res8[0]);
      local_18 = (undefined1 *)CONCAT44(local_28._4_4_,local_res8[0]);
      (**(code **)(*plVar2 + 0x168))(plVar2,&local_18);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xa78) + 0x18);
      (**(code **)*puVar4)(puVar4,plVar2);
    }
    (**(code **)(*plVar2 + 0x1a0))(plVar2);
    puStack_20 = local_res8;
    puStack_10 = &local_28;
    local_18 = &LAB_140624d00;
    local_28 = param_1;
    FUN_1406256c0(param_1,&local_18);
  }
  return;
}



// FUNCTION 140628ca0 FUN_140628ca0 body=497 status=ok
// SIG undefined FUN_140628ca0(void)

undefined8
FUN_140628ca0(longlong *param_1,longlong *param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  float local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar2 = false;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 1.0;
  cVar3 = (**(code **)(*param_1 + 0x8a0))(param_1,local_a8,param_4,param_5,param_6,param_7,0);
  if ((cVar3 != '\0') && (local_9c < *param_3)) {
    if ((local_a8[0] & 1) != 0) {
      *param_3 = local_9c;
    }
    iVar1 = (int)param_2[1];
    bVar2 = true;
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    pbVar4 = (byte *)((longlong)iVar1 * 0x90 + *param_2);
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 1;
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 2;
    *(undefined4 *)(pbVar4 + 4) = local_a4;
    *(uint *)(pbVar4 + 8) = *(uint *)(pbVar4 + 8) ^ (*(uint *)(pbVar4 + 8) ^ local_a0) & 1;
    *(float *)(pbVar4 + 0xc) = local_9c;
    *(undefined4 *)(pbVar4 + 0x10) = local_98;
    *(undefined8 *)(pbVar4 + 0x14) = local_94;
    *(undefined4 *)(pbVar4 + 0x1c) = local_8c;
    *(undefined8 *)(pbVar4 + 0x20) = local_88;
    *(undefined4 *)(pbVar4 + 0x28) = local_80;
    *(undefined8 *)(pbVar4 + 0x2c) = local_7c;
    *(undefined4 *)(pbVar4 + 0x34) = local_74;
    *(undefined8 *)(pbVar4 + 0x38) = local_70;
    *(undefined4 *)(pbVar4 + 0x40) = local_68;
    *(undefined8 *)(pbVar4 + 0x44) = local_64;
    *(undefined4 *)(pbVar4 + 0x4c) = local_5c;
    *(undefined8 *)(pbVar4 + 0x50) = local_58;
    *(undefined4 *)(pbVar4 + 0x58) = local_50;
    *(undefined4 *)(pbVar4 + 0x5c) = local_4c;
    *(undefined4 *)(pbVar4 + 0x60) = local_48;
    *(undefined4 *)(pbVar4 + 100) = local_44;
    *(undefined4 *)(pbVar4 + 0x68) = local_40;
    *(undefined4 *)(pbVar4 + 0x6c) = local_3c;
    *(undefined4 *)(pbVar4 + 0x70) = local_38;
    *(undefined4 *)(pbVar4 + 0x74) = local_34;
    *(undefined4 *)(pbVar4 + 0x78) = local_30;
    *(undefined8 *)(pbVar4 + 0x80) = local_28;
    *(undefined8 *)(pbVar4 + 0x88) = local_20;
  }
  if (param_8 != '\0') {
    if (!bVar2) {
      return 0;
    }
    FUN_1423560b0(param_2);
  }
  if ((bVar2) && ((local_a8[0] & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140628ea0 FUN_140628ea0 body=564 status=ok
// SIG undefined FUN_140628ea0(void)

ulonglong FUN_140628ea0(longlong param_1,undefined8 param_2,float *param_3,float *param_4,
                       undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  float local_res8 [2];
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  undefined1 local_1f0 [24];
  int local_1d8 [68];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a0 [120];
  
  plVar1 = *(longlong **)(param_1 + 0xa78);
  if (plVar1 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_1fc = *param_3;
  local_1f8 = param_3[1];
  local_208 = *param_4 - local_1fc;
  local_res8[0] = 0.0;
  local_204 = param_4[1] - local_1f8;
  local_1f4 = param_3[2];
  local_200 = param_4[2] - local_1f4;
  uVar4 = (**(code **)(*plVar1 + 0x1a0))
                    (plVar1,local_res8,local_1f0,&local_1fc,&local_208,3,0xffffffff);
  if (((int)uVar4 == -1) || (1.0 < local_res8[0])) {
    uVar7 = uVar4 & 0xffffffffffffff00;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                      (*(longlong **)(param_1 + 0xa78),uVar4 & 0xffffffff);
    uVar7 = 0;
    if (lVar5 != 0) {
      FUN_1426852e0();
      lVar6 = *(longlong *)(param_1 + 0x120);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0();
      }
      uVar8 = 0;
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x218);
      }
      cVar2 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar8);
      local_c8 = lVar5;
      if (cVar2 != '\0') {
        local_c8 = 0;
      }
      cVar2 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0);
      local_b8 = 0;
      local_c0 = 0;
      if (cVar2 != '\0') {
        local_c0 = lVar5;
      }
      local_1d8[0] = (int)uVar4;
      FWeakObjectPtr::operator=(local_a0,param_1);
      bVar3 = FUN_1426a4ff0(local_1d8,param_2,param_3,param_4,param_5,param_6,param_7);
      FUN_14061f570(local_1d8);
      uVar7 = (ulonglong)bVar3;
    }
  }
  return uVar7;
}



// FUNCTION 1406290e0 FUN_1406290e0 body=90 status=ok
// SIG undefined FUN_1406290e0(void)

void FUN_1406290e0(longlong param_1)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    if (*(char *)(param_1 + 0xb18) != '\0') {
      FUN_140624de0();
    }
    plStack_10 = local_res8;
    local_18 = &LAB_140624ca0;
    local_res8[0] = param_1;
    FUN_1406256c0(param_1,&local_18);
  }
  return;
}



// FUNCTION 140629140 FUN_140629140 body=333 status=ok
// SIG undefined FUN_140629140(void)

void FUN_140629140(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_3[1] != 0) {
    lVar4 = UDamageType::GetPrivateStaticClass();
    lVar7 = param_3[1];
    for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar4) {
        if (lVar7 != 0) {
          if (lVar7 == 0) goto LAB_14062921e;
          plVar6 = (longlong *)UDamageType::GetPrivateStaticClass();
          plVar5 = (longlong *)param_3[1];
          plVar2 = plVar5;
          goto joined_r0x00014062920e;
        }
        break;
      }
    }
  }
  plVar5 = (longlong *)UDamageType::GetPrivateStaticClass();
  lVar7 = plVar5[0x1f];
  if (lVar7 != 0) goto LAB_1406291b5;
  (**(code **)(*plVar5 + 0x368))(plVar5);
  goto LAB_1406291ae;
joined_r0x00014062920e:
  if (plVar2 == (longlong *)0x0) goto LAB_14062921e;
  if (plVar2 == plVar6) goto LAB_140629220;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x00014062920e;
LAB_14062921e:
  plVar5 = (longlong *)0x0;
LAB_140629220:
  lVar7 = plVar5[0x1f];
  if (lVar7 != 0) goto LAB_1406291b5;
  (**(code **)(*plVar5 + 0x368))(plVar5);
LAB_1406291ae:
  lVar7 = plVar5[0x1f];
LAB_1406291b5:
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,2);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)(param_1 + 0xa30) + 0x18))
                ((longlong *)(param_1 + 0xa30),param_2,(longlong)param_3 + 0x24,
                 *(undefined4 *)((longlong)param_3 + 0x1c),*(undefined4 *)(lVar7 + 0x30),0);
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0xa30) + 0x10))
              ((longlong *)(param_1 + 0xa30),param_2,param_3 + 8,(longlong)param_3 + 0x14,
               *(undefined4 *)(lVar7 + 0x30));
  }
  return;
}



// FUNCTION 1406292a0 FUN_1406292a0 body=219 status=ok
// SIG undefined FUN_1406292a0(void)

void FUN_1406292a0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 *local_38;
  longlong **pplStack_30;
  longlong *local_28;
  undefined1 *local_20;
  longlong *local_18;
  undefined1 *local_10;
  
  if (*(char *)((longlong)param_1 + 0xb19) != '\0') {
    FUN_14062cd50();
    (**(code **)(*param_1 + 0x990))(param_1);
    lVar1 = param_1[0xee];
    local_res18[0] = 0;
    local_res8[0] = param_2;
    if (param_1[0x14f] != 0) {
      lVar3 = FUN_140626d60(param_1);
      if (lVar3 != 0) {
        cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
        if (cVar2 == '\0') {
          local_20 = local_res8;
          local_10 = local_res18;
          pplStack_30 = &local_28;
          local_38 = &LAB_140624d20;
          local_28 = param_1;
          local_18 = param_1 + (longlong)(int)lVar1 * 2 + 0xe5;
          FUN_1406256c0(param_1,&local_38);
        }
      }
    }
    UActorComponent::MarkRenderDynamicDataDirty(param_1);
    FUN_1423424c0(param_1);
  }
  return;
}



// FUNCTION 140629380 RemoveAtImpl body=113 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<unsigned___int64,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 8),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 8),(longlong)iVar2 << 3);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140629400 FUN_140629400 body=574 status=ok
// SIG undefined FUN_140629400(void)

void FUN_140629400(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong local_res10 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong *local_48;
  int *local_40;
  longlong local_38;
  
  lVar5 = *(longlong *)(param_1 + 0x718);
  if (lVar5 != 0) {
    lVar4 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (local_res10[0] = lVar5, lVar5 = FWeakObjectPtr::Get(param_1 + 0xb10), lVar5 != 0)) {
      lVar4 = FUN_142a0cc80();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((bVar3) && (*(longlong *)(lVar5 + 0x8f8) != 0)) &&
          (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x8f8) + 0x348), lVar4 != 0)) &&
         (0 < *(int *)(lVar5 + 0x908))) {
        plVar6 = (longlong *)FUN_1424a1d10(lVar4,0);
        local_res8[0] = 0;
        if (0 < *(int *)(local_res10[0] + 0x450)) {
          plVar2 = *(longlong **)(lVar5 + 0x900);
          local_res10[1] = 0;
          lVar5 = local_res10[0];
LAB_140629530:
          lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x448) + 8 + (longlong)local_res8[0] * 0x18);
          if (lVar4 != 0) {
            plVar7 = (longlong *)*plVar6;
            plVar1 = plVar7 + (longlong)(int)plVar6[1] * 5;
            for (; plVar7 != plVar1; plVar7 = plVar7 + 5) {
              if (*plVar7 == lVar4) {
                if (plVar7 != (longlong *)0x0) {
                  lVar8 = *plVar2;
                  lVar4 = lVar8 + (longlong)(int)plVar2[1] * 0xc;
                  if (lVar8 != lVar4) {
                    goto LAB_140629590;
                  }
                }
                break;
              }
            }
            goto LAB_14062959f;
          }
          goto LAB_14062960d;
        }
      }
    }
  }
  return;
  while (lVar8 = lVar8 + 0xc, lVar8 != lVar4) {
LAB_140629590:
    if (*(int *)(lVar8 + 4) == *(int *)((longlong)plVar7 + 0xc)) goto LAB_14062960d;
  }
LAB_14062959f:
  if (*(longlong *)(param_1 + 0xa78) == 0) {
    FUN_14062a3b0(param_1,local_res8[0] + 1,0);
    lVar5 = local_res10[0];
  }
  else {
    local_48 = local_res10;
    local_40 = local_res8;
    uStack_50 = &local_48;
    local_58 = 0x40624cf0;
    uStack_54 = 1;
    local_38 = param_1;
    FUN_1406256c0(param_1,&local_58);
    lVar5 = local_res10[0];
  }
LAB_14062960d:
  local_res8[0] = local_res8[0] + 1;
  if (*(int *)(lVar5 + 0x450) <= local_res8[0]) {
    return;
  }
  goto LAB_140629530;
}



// FUNCTION 140629640 FUN_140629640 body=129 status=ok
// SIG undefined FUN_140629640(void)

void FUN_140629640(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar5;
  int local_res18 [4];
  ulonglong uVar4;
  
  lVar1 = DAT_146855f98;
  if (param_3 != 0) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(DAT_146855f98 + 0x20,local_res18,param_2);
    uVar4 = 0;
    uVar2 = uVar4;
    if (local_res18[0] != -1) {
      uVar2 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x20);
    }
    uVar5 = uVar4;
    if (0 < *(int *)(uVar2 + 0x10)) {
      do {
        if (*(longlong *)(uVar5 + 0x50 + *(longlong *)(uVar2 + 8)) == param_3) {
          *(undefined8 *)(uVar5 + 0x50 + *(longlong *)(uVar2 + 8)) = 0;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 0x80;
      } while ((int)uVar3 < *(int *)(uVar2 + 0x10));
    }
  }
  return;
}



// FUNCTION 1406296d0 FUN_1406296d0 body=104 status=ok
// SIG undefined FUN_1406296d0(void)

void FUN_1406296d0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar1 = (undefined8 *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (param_2 <= iVar2) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = &PTR_FUN_144019aa0;
      puVar1 = puVar1 + 4;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  if (iVar3 != 0) {
    do {
      *puVar1 = &PTR_FUN_144019aa0;
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar2 == param_2) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
            (param_1);
  return;
}



// FUNCTION 140629740 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x20 + *local_38 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140629850 FUN_140629850 body=1982 status=ok
// SIG undefined FUN_140629850(void)

void FUN_140629850(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  int local_res10 [2];
  int local_res18 [2];
  longlong *local_res20;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98 [8];
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  
  FUN_142780730();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  plVar7 = (longlong *)0x0;
  iVar13 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      if (((*(longlong **)(param_1 + 0x440) == (longlong *)0x0) ||
          (puVar9 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 0x440) + 0x28))(),
          puVar9 == (undefined1 *)0x0)) || (param_2[0xe] != 0)) {
        puVar9 = &DAT_144017496;
      }
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (puVar9[lVar10] != '\0');
      plVar7 = (longlong *)param_2[1];
      local_res18[0] = (int)lVar10 + 1;
      if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar7;
        *plVar7 = *plVar7 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,puVar9,local_res18[0]);
      plVar11 = (longlong *)(**(code **)(*DAT_146b08418 + 0xa8))(DAT_146b08418,0);
      plVar12 = (longlong *)(**(code **)(*DAT_146b08418 + 0x180))(DAT_146b08418,1);
      plVar7 = (longlong *)0x0;
      local_res10[0] = 0;
      local_b8 = (longlong *)0x0;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0;
      iVar13 = 0;
      if (*(longlong **)(param_1 + 0x440) != (longlong *)0x0) {
        lVar10 = **(longlong **)(param_1 + 0x440);
        uVar5 = (**(code **)(lVar10 + 200))();
        (**(code **)(lVar10 + 0x100))(*(undefined8 *)(param_1 + 0x440),uVar5);
        local_res20 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x440) + 0x58))();
        iVar13 = 0;
        if (local_res20 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,&local_res20,1,0);
          local_res10[0] = (**(code **)(*plVar11 + 0x18))(plVar11);
          iVar13 = 0;
          local_b0._0_4_ = local_res10[0];
          if (0 < local_res10[0]) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8,0,local_res10[0]);
            plVar7 = local_b8;
            iVar13 = local_b0._4_4_;
          }
          (**(code **)(*plVar11 + 0x30))(plVar11,plVar7,local_res10[0]);
        }
      }
      plVar2 = (longlong *)param_2[1];
      if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if (local_res10[0] != 0) {
        (**(code **)(*param_2 + 0x50))(param_2,plVar7,local_res10[0]);
      }
      (**(code **)(*plVar12 + 0x68))(plVar12);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)*plVar11)(plVar11,1);
      }
      local_res10[0] = 0;
      plVar11 = (longlong *)(**(code **)(*DAT_146b08418 + 0xa8))(DAT_146b08418,0);
      if (*(longlong *)(param_1 + 0x440) != 0) {
        puVar8 = (undefined8 *)(**(code **)(*DAT_146b08418 + 0x170))();
        puVar1 = (undefined8 *)*puVar8;
        uVar5 = (**(code **)(*DAT_146855f80 + 0x38))();
        plVar12 = (longlong *)(*(code *)*puVar1)(puVar8,uVar5);
        puVar1 = (undefined8 *)*plVar12;
        uVar6 = (**(code **)(*DAT_146855f80 + 0x160))(DAT_146855f80,local_a8);
        (*(code *)*puVar1)(plVar12,*(undefined8 *)(param_1 + 0x440),uVar6);
        (**(code **)(*plVar12 + 8))(plVar12,*(undefined8 *)(param_1 + 0x440),plVar11);
        local_res10[0] = (**(code **)(*plVar11 + 0x18))(plVar11);
        iVar3 = 0;
        if ((iVar13 < local_res10[0]) && (local_b0._0_4_ = 0, iVar3 = 0, iVar13 != local_res10[0]))
        {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_b8);
          plVar7 = local_b8;
          iVar3 = (uint)local_b0;
          iVar13 = local_b0._4_4_;
        }
        iVar4 = local_res10[0];
        local_b0._0_4_ = iVar3 + local_res10[0];
        if (iVar13 < (int)(uint)local_b0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8);
          plVar7 = local_b8;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 + (longlong)plVar7),0,(longlong)iVar4);
        (**(code **)(*plVar11 + 0x30))(plVar11,plVar7,local_res10[0]);
      }
      plVar12 = (longlong *)param_2[1];
      if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar12;
        *plVar12 = *plVar12 + 4;
      }
      if (local_res10[0] != 0) {
        (**(code **)(*param_2 + 0x50))(param_2,plVar7,local_res10[0]);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)*plVar11)(plVar11,1);
      }
      if (plVar7 != (longlong *)0x0) {
        FMemory::Free(plVar7);
      }
    }
  }
  else {
    plVar11 = (longlong *)param_2[1];
    local_b8 = (longlong *)0x0;
    local_b0 = (ulonglong)(uint)local_b0;
    if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    local_b0 = CONCAT44(local_b0._4_4_,local_res18[0]);
    plVar11 = plVar7;
    if (0 < local_res18[0]) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      plVar11 = local_b8;
    }
    (**(code **)(*param_2 + 0x50))(param_2,plVar11,local_res18[0]);
    plVar12 = (longlong *)param_2[1];
    local_b8 = (longlong *)0x0;
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    plVar12 = plVar7;
    if (local_res10[0] != 0) {
      local_b0._0_4_ = local_res10[0];
      iVar13 = 0;
      if (0 < local_res10[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        plVar12 = local_b8;
        iVar13 = local_b0._4_4_;
      }
      (**(code **)(*param_2 + 0x50))(param_2,plVar12,local_res10[0]);
      uVar6 = (**(code **)(*DAT_146b08418 + 0xa0))(DAT_146b08418,plVar12,local_res10[0]);
      local_a8[0] = uVar6;
      local_res20 = (longlong *)(**(code **)(*DAT_146b08418 + 0x180))(DAT_146b08418,1);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      local_48 = (longlong *)0x0;
      (**(code **)(*local_res20 + 0x48))(local_res20,uVar6,local_98);
      if ((local_50 != 0) &&
         (plVar7 = (longlong *)(**(code **)(*DAT_146b08418 + 0x138))(DAT_146b08418,*local_58,0),
         plVar7 != (longlong *)0x0)) {
        iVar3 = (**(code **)(*DAT_146855f80 + 0x38))();
        iVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
        if (iVar4 != iVar3) {
          FUN_1426bd8f0(DAT_146b08410,plVar7);
          plVar7 = (longlong *)0x0;
        }
      }
      *(longlong **)(param_1 + 0x440) = plVar7;
      (**(code **)(*local_res20 + 0x68))();
      (**(code **)(*DAT_146b08418 + 0xb8))(DAT_146b08418,local_a8[0]);
      if ((local_58 != (undefined8 *)0x0) && (local_58 != local_98)) {
        (**(code **)(*local_48 + 0xb8))();
      }
    }
    iVar3 = FArchive::CustomVer(param_2,&DAT_1464b0088);
    if (0xf < iVar3) {
      plVar7 = (longlong *)param_2[1];
      if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar7;
        *plVar7 = *plVar7 + 4;
      }
      if (local_res10[0] != 0) {
        iVar3 = 0;
        if ((iVar13 < local_res10[0]) && (local_b0._0_4_ = 0, iVar3 = 0, iVar13 != local_res10[0]))
        {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_b8);
          plVar12 = local_b8;
          iVar3 = (uint)local_b0;
          iVar13 = local_b0._4_4_;
        }
        iVar4 = local_res10[0];
        local_b0._0_4_ = iVar3 + local_res10[0];
        if (iVar13 < (int)(uint)local_b0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8);
          plVar12 = local_b8;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 + (longlong)plVar12),0,(longlong)iVar4);
        (**(code **)(*param_2 + 0x50))(param_2,plVar12,local_res10[0]);
        if (*(longlong *)(param_1 + 0x440) != 0) {
          uVar6 = (**(code **)(*DAT_146b08418 + 0xa0))(DAT_146b08418,plVar12,local_res10[0]);
          puVar8 = (undefined8 *)(**(code **)(*DAT_146b08418 + 0x170))();
          puVar1 = (undefined8 *)*puVar8;
          uVar5 = (**(code **)(*DAT_146855f80 + 0x38))();
          plVar7 = (longlong *)(*(code *)*puVar1)(puVar8,uVar5);
          (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_1 + 0x440),uVar6);
          (**(code **)(*DAT_146b08418 + 0xb8))(DAT_146b08418,uVar6);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  if ((int)param_2[8] < 0x194) {
    *(bool *)(param_1 + 0x388) = *(float *)(param_1 + 0x38c) != 0.0;
    if (*(float *)(param_1 + 0x38c) == 0.0) {
      *(undefined4 *)(param_1 + 0x38c) = 0x3f800000;
    }
    *(bool *)(param_1 + 0x37c) = *(int *)(param_1 + 900) != -1;
    *(undefined4 *)(param_1 + 900) = 1;
    bVar14 = *(int *)(param_1 + 0x3d8) != -1;
    *(bool *)(param_1 + 0x3d4) = bVar14;
    if (!bVar14) {
      *(undefined4 *)(param_1 + 0x3d8) = 0;
    }
  }
  return;
}



// FUNCTION 14062a010 SetAllPhysicsAngularVelocityInDegrees body=75 status=ok
// SIG undefined SetAllPhysicsAngularVelocityInDegrees(void)

void UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(longlong *param_1,float *param_2)

{
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = *param_2 * 0.017453292;
  local_10 = param_2[2] * 0.017453292;
  local_14 = param_2[1] * 0.017453292;
  (**(code **)(*param_1 + 0x778))(local_14,&local_18);
  return;
}



// FUNCTION 14062a060 FUN_14062a060 body=72 status=ok
// SIG undefined FUN_14062a060(void)

void FUN_14062a060(longlong param_1,undefined8 param_2)

{
  longlong local_28;
  undefined8 local_20;
  code *local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    plStack_10 = &local_28;
    local_18 = FUN_140624d70;
    local_28 = param_1;
    local_20 = param_2;
    FUN_1406256c0(0x40624d70,&local_18);
  }
  return;
}



// FUNCTION 14062a0b0 FUN_14062a0b0 body=761 status=ok
// SIG undefined FUN_14062a0b0(void)

void FUN_14062a0b0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 local_res20 [2];
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (**(code **)(*param_1 + 0x840))(param_1,param_2,0);
  if (param_1[0x14f] == 0) {
    return;
  }
  lVar8 = FUN_140626d60(param_1);
  if (lVar8 == 0) {
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x4f8))(param_1);
  FUN_1426d3dd0(&local_58);
  iVar7 = (**(code **)(*param_1 + 0x4e8))(param_1);
  if (iVar7 == 0) {
    uVar5 = 0;
    FUN_1426ea8d0(&local_58,0,0);
    FUN_1426a85d0(param_1 + 0x150,0);
    FUN_1426a85d0(param_1 + 0x156,0);
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x4d0))(param_1);
    local_58 = *puVar9;
    uStack_54 = puVar9[1];
    uStack_50 = puVar9[2];
    uStack_4c = puVar9[3];
    local_48 = puVar9[4];
    uStack_44 = puVar9[5];
    uStack_40 = puVar9[6];
    uStack_3c = puVar9[7];
    FUN_1426a8d80(param_1 + 0x150,&local_58,0);
    FUN_1426a8d80(param_1 + 0x156,&local_58,0);
    FCollisionResponse::SetResponse(param_1 + 0x156,2,1);
  }
  if (*(float *)(lVar8 + 0x380) != 0.0) {
    if (**(char **)(lVar8 + 0x3e0) == '\x01') {
      cVar6 = '\x01';
      goto LAB_14062a207;
    }
    if ((**(char **)(lVar8 + 0x3e0) != '\x02') && (-1 < *(int *)(lVar8 + 900))) {
      cVar6 = *(char *)(lVar8 + 0x37c);
      goto LAB_14062a207;
    }
  }
  cVar6 = '\0';
LAB_14062a207:
  if ((*(char *)(lVar8 + 0x388) == '\0') || (*(float *)(lVar8 + 0x38c) <= 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  bVar1 = *(byte *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1[0x23] + 0xc);
  local_res8[0] = uVar5;
  FUN_1422ffde0(&local_98,local_res8,0,&local_58);
  if ((bVar1 & 1) != 0) {
    local_90._0_4_ = (uint)local_90 | 4;
  }
  if (cVar6 != '\0') {
    local_90._0_4_ = (uint)local_90 | 8;
  }
  if (bVar4) {
    local_90._0_4_ = (uint)local_90 | 0x20;
  }
  uStack_7c = (uint)local_90 | 0x43;
  uStack_80 = local_98._4_4_;
  uStack_84 = (undefined4)local_98;
  uStack_74 = (undefined4)local_98;
  local_78 = 0;
  local_88 = uVar3;
  uStack_70 = uVar2;
  uStack_6c = uStack_7c;
  (**(code **)(*param_1 + 0xa40))(param_1,&local_88,&local_78);
  plVar10 = (longlong *)(**(code **)(*(longlong *)(param_1[0x14f] + 0x18) + 0x10))();
  cVar6 = (**(code **)(*(longlong *)(param_1[0x14f] + 0x18) + 8))
                    ((longlong *)(param_1[0x14f] + 0x18),plVar10);
  if (cVar6 != '\0') {
    local_68 = (undefined1 *)CONCAT44(uStack_84,local_88);
    uStack_60 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
    (**(code **)(*plVar10 + 0x168))(plVar10,&local_68);
    local_68 = (undefined1 *)CONCAT44(uStack_74,local_78);
    uStack_60 = (undefined8 *)CONCAT44(uStack_6c,uStack_70);
    (**(code **)(*plVar10 + 0x158))(plVar10,&local_68);
    (*(code *)**(undefined8 **)(param_1[0x14f] + 0x18))
              ((undefined8 *)(param_1[0x14f] + 0x18),plVar10);
  }
  (**(code **)(*plVar10 + 0x1a0))(plVar10);
  local_res20[0] = (**(code **)(**(longlong **)(lVar8 + 0x440) + 0xc0))();
  local_98 = local_res20;
  uStack_60 = &local_98;
  local_68 = &LAB_140624d10;
  local_90 = param_1;
  FUN_1406256c0(param_1,&local_68);
  return;
}



// FUNCTION 14062a3b0 FUN_14062a3b0 body=694 status=ok
// SIG undefined FUN_14062a3b0(void)

void FUN_14062a3b0(longlong *param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 *local_b8;
  undefined8 *puStack_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  
  local_res10[0] = (int)param_2;
  local_res18[0] = local_res10[0] + 1;
  if ((((char)param_1[0x163] != '\0') && (local_res10[0] == 0)) && (param_1[0x14f] != param_2)) {
    param_3 = (char)param_2;
  }
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x9d0))(param_1,local_res18[0],0);
  }
  else {
    (**(code **)(*param_1 + 0x9d8))();
    if (param_1[0x14f] != 0) {
      if ((((char)param_1[0x163] != '\0') && (0 < local_res10[0])) &&
         (lVar4 = FUN_140626d60(param_1), local_res10[0] <= *(int *)(lVar4 + 0x450))) {
        lVar4 = FUN_140626d60(param_1);
        if (*(int *)((longlong)param_1 + 0xb1c) < *(int *)(lVar4 + 0x450)) {
          *(int *)((longlong)param_1 + 0xb1c) = *(int *)((longlong)param_1 + 0xb1c) + 1;
          local_e0 = local_res10;
          local_d8 = local_res18;
          puStack_b0 = &local_e8;
          local_b8 = &LAB_140624d60;
          local_e8 = param_1;
          FUN_1406256c0(param_1,&local_b8);
          goto LAB_14062a61a;
        }
      }
      iVar3 = (**(code **)(*(longlong *)param_1[0x14f] + 0xd8))
                        ((longlong *)param_1[0x14f],local_res8,local_res10[0]);
      if (iVar3 != 0) {
        uVar5 = (**(code **)(*(longlong *)param_1[0x14f] + 0xe0))
                          ((longlong *)param_1[0x14f],&local_b8,local_res10[0]);
        physx::PxMat44::PxMat44(&local_98,uVar5);
        local_e8 = (longlong *)CONCAT44(local_94,local_98);
        local_e0 = (int *)CONCAT44(local_88,local_90);
        local_d0 = local_78;
        local_d8 = (int *)CONCAT44(local_80,local_84);
        local_c8 = local_70;
        local_cc = local_74;
        puVar6 = (undefined8 *)physx::PxQuat::PxQuat(&local_b8,&local_e8);
        puVar1 = (undefined1 *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
        cVar2 = FUN_1406270d0(param_1);
        if (cVar2 == '\0') {
          FUN_142719970(param_1,1);
        }
        else {
          local_e8 = (longlong *)CONCAT44(local_64,local_68);
          local_e0 = (int *)CONCAT44(local_e0._4_4_,local_60);
          local_b8 = puVar1;
          puStack_b0 = puVar6;
          FUN_14062a670(param_1,local_res10[0],&local_b8,&local_e8,0);
        }
      }
    }
  }
LAB_14062a61a:
  UActorComponent::MarkRenderDynamicDataDirty(param_1);
  FUN_1423424c0(param_1);
  return;
}



// FUNCTION 14062a670 FUN_14062a670 body=2122 status=ok
// SIG undefined FUN_14062a670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14062a670(longlong param_1,int param_2,float *param_3,float *param_4,char param_5)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  float fVar46;
  float fVar47;
  float fVar48;
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  UActorComponent::MarkRenderDynamicDataDirty();
  FUN_1423424c0(param_1);
  fVar28 = DAT_1464aa790;
  fVar27 = DAT_1464aa788._4_4_;
  fVar25 = (float)DAT_1464aa788;
  fVar44 = *(float *)(param_1 + 0x21c);
  fVar17 = *param_3;
  fVar21 = param_3[1];
  fVar48 = param_3[2];
  fVar47 = param_3[3];
  fVar20 = -*(float *)(param_1 + 0x210);
  fVar15 = -*(float *)(param_1 + 0x214);
  fVar16 = -*(float *)(param_1 + 0x218);
  fVar34 = -*(float *)(param_1 + 0x210);
  fVar33 = -*(float *)(param_1 + 0x214);
  fVar14 = -*(float *)(param_1 + 0x218);
  fVar29 = *param_4 - *(float *)(param_1 + 0x220);
  fVar38 = param_4[1] - *(float *)(param_1 + 0x224);
  fVar39 = param_4[2] - *(float *)(param_1 + 0x228);
  fVar43 = fVar47 * fVar20 * _DAT_146856090 + fVar44 * fVar17 + fVar48 * fVar15 * _DAT_146856080 +
           fVar21 * fVar16 * _DAT_146856070;
  fVar45 = fVar48 * fVar20 * fRam0000000146856094 + fVar44 * fVar21 +
           fVar47 * fVar15 * fRam0000000146856084 + fVar17 * fVar16 * fRam0000000146856074;
  fVar46 = fVar21 * fVar20 * fRam0000000146856098 + fVar44 * fVar48 +
           fVar17 * fVar15 * fRam0000000146856088 + fVar47 * fVar16 * fRam0000000146856078;
  fVar47 = fVar17 * fVar20 * fRam000000014685609c + fVar44 * fVar47 +
           fVar21 * fVar15 * fRam000000014685608c + fVar48 * fVar16 * fRam000000014685607c;
  iVar7 = *(int *)(param_1 + 0x76c);
  lVar1 = (longlong)param_2 + 1;
  fVar21 = fVar39 * fVar33 - fVar38 * fVar14;
  fVar48 = fVar29 * fVar14 - fVar39 * fVar34;
  fVar21 = fVar21 + fVar21;
  fVar17 = fVar38 * fVar34 - fVar29 * fVar33;
  fVar48 = fVar48 + fVar48;
  fVar17 = fVar17 + fVar17;
  local_c8 = ((fVar17 * fVar33 - fVar48 * fVar14) + fVar21 * fVar44 + fVar29) /
             *(float *)(param_1 + 0x230);
  fStack_c0 = ((fVar48 * fVar34 - fVar21 * fVar33) + fVar17 * fVar44 + fVar39) /
              *(float *)(param_1 + 0x238);
  fStack_c4 = ((fVar21 * fVar14 - fVar17 * fVar34) + fVar48 * fVar44 + fVar38) /
              *(float *)(param_1 + 0x234);
  auVar6 = *(undefined1 (*) [12])
            (*(longlong *)(param_1 + 0x728 + (longlong)iVar7 * 0x10) + 0x20 + lVar1 * 0x30);
  fVar44 = fVar43;
  fVar17 = fVar45;
  fVar21 = fVar46;
  fVar48 = fVar47;
  if ((*(char *)(param_1 + 0xb18) != '\0') && (param_5 == '\0')) {
    lVar8 = FUN_140626d60(param_1);
    fVar29 = fRam00000001468560d8;
    fVar20 = fRam00000001468560d4;
    fVar14 = _DAT_1468560d0;
    fVar16 = fRam0000000146856008;
    fVar15 = fRam0000000146856004;
    fVar48 = _DAT_146856000;
    lVar3 = *(longlong *)(lVar8 + 0x168);
    auVar12 = *(undefined1 (*) [16])(lVar3 + 0x20 + lVar1 * 0x30);
    fVar44 = auVar12._0_4_;
    fVar17 = auVar12._4_4_;
    fVar21 = auVar12._8_4_;
    auVar9._4_4_ = fVar27;
    auVar9._0_4_ = fVar25;
    auVar9._8_4_ = fVar28;
    auVar9._12_4_ = 0;
    auVar9 = minps(auVar12,auVar9);
    auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam00000001468560d4);
    auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_1468560d0);
    auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam00000001468560d8);
    auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam00000001468560dc);
    iVar7 = movmskps((int)lVar8,auVar10);
    if (iVar7 == 0) {
      pfVar2 = (float *)(lVar3 + lVar1 * 0x30);
      fVar48 = *pfVar2;
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar2 = (float *)(lVar3 + 0x10 + lVar1 * 0x30);
      fVar25 = *pfVar2 * fVar25;
      fVar27 = pfVar2[1] * fVar27;
      fVar28 = pfVar2[2] * fVar28;
      fVar44 = fVar14 * fVar43 * _DAT_146856090 + fVar48 * fVar47 + fVar16 * fVar45 * _DAT_146856080
               + fVar15 * fVar46 * _DAT_146856070;
      fVar17 = fVar16 * fVar43 * fRam0000000146856094 + fVar15 * fVar47 +
               fVar14 * fVar45 * fRam0000000146856084 + fVar48 * fVar46 * fRam0000000146856074;
      fVar21 = fVar15 * fVar43 * fRam0000000146856098 + fVar16 * fVar47 +
               fVar48 * fVar45 * fRam0000000146856088 + fVar14 * fVar46 * fRam0000000146856078;
      fVar48 = fVar48 * fVar43 * fRam000000014685609c + fVar14 * fVar47 +
               fVar15 * fVar45 * fRam000000014685608c + fVar16 * fVar46 * fRam000000014685607c;
      fVar15 = fVar28 * fVar45 - fVar27 * fVar46;
      fVar16 = fVar25 * fVar46 - fVar28 * fVar43;
      fVar14 = fVar27 * fVar43 - fVar25 * fVar45;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar14 = fVar14 + fVar14;
      local_c8 = (fVar14 * fVar45 - fVar16 * fVar46) + fVar15 * fVar47 + fVar25 + local_c8;
      fStack_c4 = (fVar15 * fVar46 - fVar14 * fVar43) + fVar16 * fVar47 + fVar27 + fStack_c4;
      fStack_c0 = (fVar16 * fVar43 - fVar15 * fVar45) + fVar14 * fVar47 + fVar28 + fStack_c0;
    }
    else {
      fVar33 = fVar45 + fVar45;
      fVar34 = fVar46 + fVar46;
      fVar38 = (fVar43 + fVar43) * fVar43;
      fVar39 = fVar47 * (fVar43 + fVar43);
      fVar40 = (fVar47 * fVar34 + fVar43 * fVar33) * fVar25;
      fVar41 = (fVar39 + fVar45 * fVar34) * fVar27;
      fVar42 = (fVar47 * fVar33 + fVar43 * fVar34) * fVar28;
      fVar22 = fVar27 * (fVar43 * fVar33 - fVar47 * fVar34);
      fVar24 = fVar28 * (fVar45 * fVar34 - fVar39);
      fVar26 = fVar25 * (fVar43 * fVar34 - fVar47 * fVar33);
      fVar39 = (float)((uint)((_DAT_146856000 - (fVar34 * fVar46 + fVar33 * fVar45)) * fVar25) &
                      _DAT_146856010);
      fVar43 = (float)((uint)((fRam0000000146856004 - (fVar34 * fVar46 + fVar38)) * fVar27) &
                      uRam0000000146856014);
      fVar46 = (float)((uint)((fRam0000000146856008 - (fVar33 * fVar45 + fVar38)) * fVar28) &
                      uRam0000000146856018);
      fVar13 = (float)((uint)((fRam000000014685600c - (fVar38 + fVar38)) * 0.0) &
                      uRam000000014685601c);
      pfVar2 = (float *)(lVar3 + lVar1 * 0x30);
      fVar47 = *pfVar2;
      fVar33 = pfVar2[1];
      fVar34 = pfVar2[2];
      fVar38 = pfVar2[3];
      fVar18 = fVar33 + fVar33;
      fVar19 = fVar34 + fVar34;
      fVar23 = (fVar47 + fVar47) * fVar47;
      fVar45 = (fVar47 + fVar47) * fVar38;
      fVar35 = (fVar19 * fVar38 + fVar18 * fVar47) * fVar44;
      fVar36 = (fVar45 + fVar19 * fVar33) * fVar17;
      fVar37 = (fVar18 * fVar38 + fVar19 * fVar47) * fVar21;
      fVar30 = fVar17 * (fVar18 * fVar47 - fVar19 * fVar38);
      fVar31 = fVar21 * (fVar19 * fVar33 - fVar45);
      fVar32 = fVar44 * (fVar19 * fVar47 - fVar18 * fVar38);
      fVar38 = (float)((uint)((_DAT_146856000 - (fVar19 * fVar34 + fVar18 * fVar33)) * fVar44) &
                      _DAT_146856010);
      fVar45 = (float)((uint)((fRam0000000146856004 - (fVar19 * fVar34 + fVar23)) * fVar17) &
                      uRam0000000146856014);
      fVar18 = (float)((uint)((fRam0000000146856008 - (fVar18 * fVar33 + fVar23)) * fVar21) &
                      uRam0000000146856018);
      fVar19 = (float)((uint)((fRam000000014685600c - (fVar23 + fVar23)) * auVar12._12_4_) &
                      uRam000000014685601c);
      pfVar2 = (float *)(lVar3 + 0x10 + lVar1 * 0x30);
      fVar47 = *pfVar2;
      fVar33 = pfVar2[1];
      fVar34 = pfVar2[2];
      local_f8 = fVar35 * fVar22 + fVar38 * fVar39 + fVar32 * fVar42 + fVar19 * local_c8;
      fStack_f4 = fVar35 * fVar43 + fVar38 * fVar40 + fVar32 * fVar24 + fVar19 * fStack_c4;
      fStack_f0 = fVar35 * fVar41 + fVar38 * fVar26 + fVar32 * fVar46 + fVar19 * fStack_c0;
      fStack_ec = fVar35 * fVar13 + fVar38 * fVar13 + fVar32 * fVar13 +
                  fVar19 * fRam000000014685600c;
      local_e8 = fVar45 * fVar22 + fVar30 * fVar39 + fVar36 * fVar42 + fVar19 * local_c8;
      fStack_e4 = fVar45 * fVar43 + fVar30 * fVar40 + fVar36 * fVar24 + fVar19 * fStack_c4;
      fStack_e0 = fVar45 * fVar41 + fVar30 * fVar26 + fVar36 * fVar46 + fVar19 * fStack_c0;
      fStack_dc = fVar45 * fVar13 + fVar30 * fVar13 + fVar36 * fVar13 +
                  fVar19 * fRam000000014685600c;
      local_d8 = fVar31 * fVar22 + fVar37 * fVar39 + fVar18 * fVar42 + fVar19 * local_c8;
      fStack_d4 = fVar31 * fVar43 + fVar37 * fVar40 + fVar18 * fVar24 + fVar19 * fStack_c4;
      fStack_d0 = fVar31 * fVar41 + fVar37 * fVar26 + fVar18 * fVar46 + fVar19 * fStack_c0;
      fStack_cc = fVar31 * fVar13 + fVar37 * fVar13 + fVar18 * fVar13 +
                  fVar19 * fRam000000014685600c;
      local_c8 = fVar33 * fVar22 + fVar47 * fVar39 + fVar34 * fVar42 +
                 fRam000000014685600c * local_c8;
      fStack_c4 = fVar33 * fVar43 + fVar47 * fVar40 + fVar34 * fVar24 +
                  fRam000000014685600c * fStack_c4;
      fStack_c0 = fVar33 * fVar41 + fVar47 * fVar26 + fVar34 * fVar46 +
                  fRam000000014685600c * fStack_c0;
      fStack_bc = fVar33 * fVar13 + fVar47 * fVar13 + fVar34 * fVar13 +
                  fRam000000014685600c * fRam000000014685600c;
      FMatrix::RemoveScaling(&local_f8);
      fVar44 = (float)(-(uint)(fVar14 <= fVar44 * fVar25) & (_DAT_1468560c0 ^ (uint)fVar48) ^
                      _DAT_1468560c0);
      fVar17 = (float)(-(uint)(fVar20 <= fVar17 * fVar27) & (uRam00000001468560c4 ^ (uint)fVar15) ^
                      uRam00000001468560c4);
      fVar21 = (float)(-(uint)(fVar29 <= fVar21 * fVar28) & (uRam00000001468560c8 ^ (uint)fVar16) ^
                      uRam00000001468560c8);
      local_f8 = local_f8 * fVar44;
      fStack_f4 = fStack_f4 * fVar44;
      fStack_f0 = fStack_f0 * fVar44;
      fStack_e4 = fStack_e4 * fVar17;
      fStack_e0 = fStack_e0 * fVar17;
      local_e8 = local_e8 * fVar17;
      fStack_d4 = fStack_d4 * fVar21;
      fStack_d0 = fStack_d0 * fVar21;
      local_d8 = local_d8 * fVar21;
      FQuat::FQuat(&local_108,&local_f8);
      auVar11._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
      auVar11._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
      auVar11._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
      auVar11._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
      fVar47 = auVar11._4_4_ + auVar11._0_4_;
      fVar25 = auVar11._8_4_ + auVar11._4_4_;
      fVar27 = auVar11._12_4_ + auVar11._8_4_;
      fVar28 = auVar11._0_4_ + auVar11._12_4_;
      auVar12._4_4_ = fVar25;
      auVar12._0_4_ = fVar47;
      auVar12._8_4_ = fVar27;
      auVar12._12_4_ = fVar28;
      auVar12 = rsqrtps(auVar11,auVar12);
      fVar44 = auVar12._0_4_;
      fVar17 = auVar12._4_4_;
      fVar21 = auVar12._8_4_;
      fVar48 = auVar12._12_4_;
      fVar44 = (_DAT_1468560b0 - fVar44 * fVar44 * fVar47 * _DAT_1468560b0) * fVar44 + fVar44;
      fVar17 = (fRam00000001468560b4 - fVar17 * fVar17 * fVar25 * fRam00000001468560b4) * fVar17 +
               fVar17;
      fVar21 = (fRam00000001468560b8 - fVar21 * fVar21 * fVar27 * fRam00000001468560b8) * fVar21 +
               fVar21;
      fVar48 = (fRam00000001468560bc - fVar48 * fVar48 * fVar28 * fRam00000001468560bc) * fVar48 +
               fVar48;
      fVar44 = (float)(((uint)(((_DAT_1468560b0 - fVar44 * fVar44 * fVar47 * _DAT_1468560b0) *
                                fVar44 + fVar44) * local_108) ^ _DAT_1468560a0) &
                       -(uint)(1e-08 <= fVar47) ^ _DAT_1468560a0);
      fVar17 = (float)(((uint)(((fRam00000001468560b4 -
                                fVar17 * fVar17 * fVar25 * fRam00000001468560b4) * fVar17 + fVar17)
                              * fStack_104) ^ uRam00000001468560a4) & -(uint)(1e-08 <= fVar25) ^
                      uRam00000001468560a4);
      fVar21 = (float)(((uint)(((fRam00000001468560b8 -
                                fVar21 * fVar21 * fVar27 * fRam00000001468560b8) * fVar21 + fVar21)
                              * fStack_100) ^ uRam00000001468560a8) & -(uint)(1e-08 <= fVar27) ^
                      uRam00000001468560a8);
      fVar48 = (float)(((uint)(((fRam00000001468560bc -
                                fVar48 * fVar48 * fVar28 * fRam00000001468560bc) * fVar48 + fVar48)
                              * fStack_fc) ^ uRam00000001468560ac) & -(uint)(1e-08 <= fVar28) ^
                      uRam00000001468560ac);
    }
    iVar7 = *(int *)(param_1 + 0x76c);
  }
  lVar3 = *(longlong *)(param_1 + 0x728 + (longlong)iVar7 * 0x10);
  pfVar2 = (float *)(lVar3 + lVar1 * 0x30);
  *pfVar2 = fVar44;
  pfVar2[1] = fVar17;
  pfVar2[2] = fVar21;
  pfVar2[3] = fVar48;
  auVar5._4_4_ = fStack_c4;
  auVar5._0_4_ = local_c8;
  auVar5._8_4_ = fStack_c0;
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(lVar3 + 0x10 + lVar1 * 0x30) = auVar5;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar6;
  *(undefined1 (*) [16])(lVar3 + 0x20 + lVar1 * 0x30) = auVar4;
  return;
}



// FUNCTION 14062aec0 FUN_14062aec0 body=2279 status=ok
// SIG undefined FUN_14062aec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14062aec0(longlong *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  float fVar26;
  float fVar27;
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
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  piVar16 = (int *)*param_2;
  fStack_104 = *(float *)((longlong)param_1 + 0x214);
  fVar6 = *(float *)((longlong)param_1 + 0x21c);
  fVar55 = -fStack_104;
  piVar18 = piVar16 + (longlong)*(int *)(param_2 + 1) * 0x10;
  fVar56 = -*(float *)(param_1 + 0x43);
  local_158 = -*(float *)(param_1 + 0x42);
  local_108 = -fStack_104;
  fStack_154 = fVar55;
  fVar22 = fVar55;
  fVar24 = fVar55;
  fVar28 = fVar55;
  fVar33 = fVar55;
  fStack_150 = fVar56;
  fVar41 = fVar56;
  fVar34 = fVar56;
  fVar35 = fVar56;
  fVar37 = fVar56;
  fVar38 = local_158;
  fVar42 = local_158;
  fVar43 = local_158;
  fVar44 = local_158;
  fStack_100 = fStack_104;
  fStack_fc = fStack_104;
  fStack_14c = fVar6;
  fVar51 = fVar6;
  fVar52 = fVar6;
  fVar53 = fVar6;
  fVar10 = fVar6;
  fVar26 = fStack_bc;
  fVar27 = fStack_c0;
  fVar32 = fStack_c4;
  fVar36 = local_c8;
  fVar40 = fStack_cc;
  fVar50 = fStack_d0;
  fVar54 = fStack_d4;
  fVar45 = local_d8;
  fVar46 = fStack_dc;
  fVar47 = fStack_e0;
  fVar48 = fStack_e4;
  fVar49 = local_e8;
  fVar23 = fStack_ec;
  fVar25 = fStack_f0;
  fVar7 = fStack_f4;
  fVar39 = local_f8;
  fVar31 = DAT_1464aa790;
  fVar30 = DAT_1464aa788._4_4_;
  fVar29 = (float)DAT_1464aa788;
  do {
    fStack_dc = fVar10;
    fStack_e0 = fVar53;
    fStack_e4 = fVar52;
    local_e8 = fVar51;
    fStack_cc = fVar44;
    fStack_d0 = fVar43;
    fStack_d4 = fVar42;
    local_d8 = fVar38;
    fStack_ec = fVar37;
    fStack_f0 = fVar35;
    fStack_f4 = fVar34;
    local_f8 = fVar41;
    fStack_bc = fVar33;
    fStack_c0 = fVar28;
    fStack_c4 = fVar24;
    local_c8 = fVar22;
    DAT_1464aa788._0_4_ = fVar29;
    DAT_1464aa788._4_4_ = fVar30;
    DAT_1464aa790 = fVar31;
    if (piVar16 == piVar18) {
      local_f8 = fVar39;
      fStack_f4 = fVar7;
      fStack_f0 = fVar25;
      fStack_ec = fVar23;
      local_e8 = fVar49;
      fStack_e4 = fVar48;
      fStack_e0 = fVar47;
      fStack_dc = fVar46;
      local_d8 = fVar45;
      fStack_d4 = fVar54;
      fStack_d0 = fVar50;
      fStack_cc = fVar40;
      local_c8 = fVar36;
      fStack_c4 = fVar32;
      fStack_c0 = fVar27;
      fStack_bc = fVar26;
      UActorComponent::MarkRenderDynamicDataDirty(param_1);
      FUN_1423424c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014062b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x990))(param_1);
      return;
    }
    fVar26 = (float)piVar16[4];
    fVar27 = (float)piVar16[5];
    fVar32 = (float)piVar16[6];
    fVar36 = (float)piVar16[7];
    fVar45 = (float)piVar16[8] - *(float *)(param_1 + 0x44);
    fVar46 = local_f8 * fVar27 * _DAT_146856070 +
             local_e8 * fVar26 + local_d8 * fVar36 * _DAT_146856090 +
             local_c8 * fVar32 * _DAT_146856080;
    fVar47 = fStack_f4 * fVar26 * fRam0000000146856074 +
             fStack_e4 * fVar27 + fStack_d4 * fVar32 * fRam0000000146856094 +
             fStack_c4 * fVar36 * fRam0000000146856084;
    fVar48 = fStack_f0 * fVar36 * fRam0000000146856078 +
             fStack_e0 * fVar32 + fStack_d0 * fVar27 * fRam0000000146856098 +
             fStack_c0 * fVar26 * fRam0000000146856088;
    fVar49 = fStack_ec * fVar32 * fRam000000014685607c +
             fStack_dc * fVar36 + fStack_cc * fVar26 * fRam000000014685609c +
             fStack_bc * fVar27 * fRam000000014685608c;
    fVar40 = (float)piVar16[10] - *(float *)(param_1 + 0x45);
    fVar36 = (float)piVar16[9] - *(float *)((longlong)param_1 + 0x224);
    fVar27 = fVar36 * local_158 - fVar45 * fVar55;
    fVar26 = fVar45 * fVar56 - fVar40 * local_158;
    fVar27 = fVar27 + fVar27;
    fVar32 = fVar40 * fVar55 - fVar36 * fVar56;
    fVar26 = fVar26 + fVar26;
    fVar32 = fVar32 + fVar32;
    fVar54 = ((fVar26 * local_158 - fVar32 * fVar55) + fVar6 * fVar27 + fVar40) /
             *(float *)(param_1 + 0x47);
    fVar50 = ((fVar32 * fVar56 - fVar27 * local_158) + fVar6 * fVar26 + fVar36) /
             *(float *)((longlong)param_1 + 0x234);
    uVar13 = (longlong)*piVar16 + 1;
    puVar2 = (undefined8 *)
             (param_1[(longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5] + 0x20 +
             uVar13 * 0x30);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    local_138 = (undefined4)uVar8;
    uStack_134 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_130 = (undefined4)uVar9;
    uStack_12c = (undefined4)((ulonglong)uVar9 >> 0x20);
    fVar26 = ((fVar27 * fVar55 - fVar26 * fVar56) + fVar32 * fVar6 + fVar45) /
             *(float *)(param_1 + 0x46);
    fVar27 = fVar46;
    fVar32 = fVar47;
    fVar36 = fVar48;
    fVar40 = fVar49;
    if ((char)param_1[0x163] != '\0') {
      lVar17 = param_1[0xe3];
      uVar15 = uVar13;
      if (lVar17 == 0) {
LAB_14062b1df:
        uVar11 = (undefined4)uVar15;
        lVar17 = 0;
      }
      else {
        lVar14 = FUN_14062e990();
        iVar12 = *(int *)(lVar14 + 0x90);
        uVar15 = (longlong)iVar12;
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < iVar12) ||
           (uVar15 = *(ulonglong *)(*(longlong *)(lVar17 + 0x10) + 0x88),
           *(longlong *)(uVar15 + (longlong)iVar12 * 8) != lVar14 + 0x88)) {
          uVar15 = uVar15 & 0xffffffffffffff00;
        }
        else {
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
        }
        uVar11 = (undefined4)uVar15;
        if ((char)uVar15 == '\0') goto LAB_14062b1df;
      }
      fVar45 = fRam0000000146856008;
      fVar40 = fRam0000000146856004;
      fVar36 = _DAT_146856000;
      lVar17 = *(longlong *)(lVar17 + 0x168);
      local_118 = _DAT_1468560d0;
      fStack_114 = fRam00000001468560d4;
      fStack_110 = fRam00000001468560d8;
      fStack_10c = fRam00000001468560dc;
      _local_148 = *(undefined1 (*) [16])(lVar17 + 0x20 + uVar13 * 0x30);
      fVar55 = local_148._0_4_;
      fVar27 = local_148._4_4_;
      fVar32 = local_148._8_4_;
      auVar19._4_4_ = fVar30;
      auVar19._0_4_ = fVar29;
      auVar19._8_4_ = fVar31;
      auVar19._12_4_ = 0;
      auVar19 = minps(_local_148,auVar19);
      auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam00000001468560d4);
      auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_1468560d0);
      auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam00000001468560d8);
      auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam00000001468560dc);
      iVar12 = movmskps(uVar11,auVar20);
      if (iVar12 == 0) {
        pfVar1 = (float *)(lVar17 + uVar13 * 0x30);
        fVar55 = *pfVar1;
        fVar40 = pfVar1[1];
        fVar45 = pfVar1[2];
        fVar23 = pfVar1[3];
        pfVar1 = (float *)(lVar17 + 0x10 + uVar13 * 0x30);
        fVar29 = *pfVar1 * fVar29;
        fVar30 = pfVar1[1] * fVar30;
        fVar31 = pfVar1[2] * fVar31;
        fVar27 = fVar23 * fVar46 * _DAT_146856090 + fVar49 * fVar55 +
                 fVar45 * fVar47 * _DAT_146856080 + fVar40 * fVar48 * _DAT_146856070;
        fVar32 = fVar45 * fVar46 * fRam0000000146856094 + fVar49 * fVar40 +
                 fVar23 * fVar47 * fRam0000000146856084 + fVar55 * fVar48 * fRam0000000146856074;
        fVar36 = fVar40 * fVar46 * fRam0000000146856098 + fVar49 * fVar45 +
                 fVar55 * fVar47 * fRam0000000146856088 + fVar23 * fVar48 * fRam0000000146856078;
        fVar40 = fVar55 * fVar46 * fRam000000014685609c + fVar49 * fVar23 +
                 fVar40 * fVar47 * fRam000000014685608c + fVar45 * fVar48 * fRam000000014685607c;
        fVar55 = fVar31 * fVar47 - fVar30 * fVar48;
        fVar45 = fVar29 * fVar48 - fVar31 * fVar46;
        fVar23 = fVar30 * fVar46 - fVar29 * fVar47;
        fVar55 = fVar55 + fVar55;
        fVar45 = fVar45 + fVar45;
        fVar23 = fVar23 + fVar23;
        fVar26 = (fVar23 * fVar47 - fVar45 * fVar48) + fVar55 * fVar49 + fVar29 + fVar26;
        fVar50 = (fVar55 * fVar48 - fVar23 * fVar46) + fVar45 * fVar49 + fVar30 + fVar50;
        fVar54 = (fVar45 * fVar46 - fVar55 * fVar47) + fVar23 * fVar49 + fVar31 + fVar54;
        fVar55 = local_108;
      }
      else {
        fVar22 = fVar47 + fVar47;
        fVar24 = fVar48 + fVar48;
        fVar28 = (fVar46 + fVar46) * fVar46;
        fVar41 = fVar49 * (fVar46 + fVar46);
        pfVar1 = (float *)(lVar17 + uVar13 * 0x30);
        fVar23 = *pfVar1;
        fVar25 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar39 = pfVar1[3];
        fVar51 = (fVar49 * fVar24 + fVar46 * fVar22) * fVar29;
        fVar52 = (fVar41 + fVar47 * fVar24) * fVar30;
        fVar53 = (fVar49 * fVar22 + fVar46 * fVar24) * fVar31;
        fVar33 = fVar30 * (fVar46 * fVar22 - fVar49 * fVar24);
        fVar34 = fVar31 * (fVar47 * fVar24 - fVar41);
        fVar35 = fVar29 * (fVar46 * fVar24 - fVar49 * fVar22);
        fVar46 = (float)((uint)((_DAT_146856000 - (fVar24 * fVar48 + fVar22 * fVar47)) * fVar29) &
                        _DAT_146856010);
        fVar48 = (float)((uint)((fRam0000000146856004 - (fVar24 * fVar48 + fVar28)) * fVar30) &
                        uRam0000000146856014);
        fVar22 = (float)((uint)((fRam0000000146856008 - (fVar22 * fVar47 + fVar28)) * fVar31) &
                        uRam0000000146856018);
        fVar28 = (float)((uint)((fRam000000014685600c - (fVar28 + fVar28)) * 0.0) &
                        uRam000000014685601c);
        fVar49 = fVar25 + fVar25;
        fVar24 = fVar7 + fVar7;
        fVar41 = fVar23 * (fVar23 + fVar23);
        fVar47 = fVar39 * (fVar23 + fVar23);
        fVar42 = (fVar39 * fVar24 + fVar23 * fVar49) * fVar55;
        fVar43 = (fVar47 + fVar25 * fVar24) * fVar27;
        fVar44 = (fVar39 * fVar49 + fVar23 * fVar24) * fVar32;
        fVar37 = fVar27 * (fVar23 * fVar49 - fVar39 * fVar24);
        fVar38 = fVar32 * (fVar25 * fVar24 - fVar47);
        fVar39 = fVar55 * (fVar23 * fVar24 - fVar39 * fVar49);
        fVar47 = (float)((uint)((_DAT_146856000 - (fVar7 * fVar24 + fVar25 * fVar49)) * fVar55) &
                        _DAT_146856010);
        fVar23 = (float)((uint)((fRam0000000146856004 - (fVar7 * fVar24 + fVar41)) * fVar27) &
                        uRam0000000146856014);
        fVar49 = (float)((uint)((fRam0000000146856008 - (fVar25 * fVar49 + fVar41)) * fVar32) &
                        uRam0000000146856018);
        fVar25 = (float)((uint)((fRam000000014685600c - (fVar41 + fVar41)) * fStack_13c) &
                        uRam000000014685601c);
        pfVar1 = (float *)(lVar17 + 0x10 + uVar13 * 0x30);
        fVar55 = *pfVar1;
        fVar27 = pfVar1[1];
        fVar32 = pfVar1[2];
        local_198 = fVar42 * fVar33 + fVar47 * fVar46 + fVar39 * fVar53 + fVar25 * fVar26;
        fStack_194 = fVar42 * fVar48 + fVar47 * fVar51 + fVar39 * fVar34 + fVar25 * fVar50;
        fStack_190 = fVar42 * fVar52 + fVar47 * fVar35 + fVar39 * fVar22 + fVar25 * fVar54;
        fStack_18c = fVar42 * fVar28 + fVar47 * fVar28 + fVar39 * fVar28 +
                     fVar25 * fRam000000014685600c;
        local_188 = fVar23 * fVar33 + fVar37 * fVar46 + fVar43 * fVar53 + fVar25 * fVar26;
        fStack_184 = fVar23 * fVar48 + fVar37 * fVar51 + fVar43 * fVar34 + fVar25 * fVar50;
        fStack_180 = fVar23 * fVar52 + fVar37 * fVar35 + fVar43 * fVar22 + fVar25 * fVar54;
        fStack_17c = fVar23 * fVar28 + fVar37 * fVar28 + fVar43 * fVar28 +
                     fVar25 * fRam000000014685600c;
        local_178 = fVar38 * fVar33 + fVar44 * fVar46 + fVar49 * fVar53 + fVar25 * fVar26;
        fStack_174 = fVar38 * fVar48 + fVar44 * fVar51 + fVar49 * fVar34 + fVar25 * fVar50;
        fStack_170 = fVar38 * fVar52 + fVar44 * fVar35 + fVar49 * fVar22 + fVar25 * fVar54;
        fStack_16c = fVar38 * fVar28 + fVar44 * fVar28 + fVar49 * fVar28 +
                     fVar25 * fRam000000014685600c;
        local_168 = fVar27 * fVar33 + fVar55 * fVar46 + fVar32 * fVar53 +
                    fRam000000014685600c * fVar26;
        fStack_164 = fVar27 * fVar48 + fVar55 * fVar51 + fVar32 * fVar34 +
                     fRam000000014685600c * fVar50;
        fStack_160 = fVar27 * fVar52 + fVar55 * fVar35 + fVar32 * fVar22 +
                     fRam000000014685600c * fVar54;
        fStack_15c = fVar27 * fVar28 + fVar55 * fVar28 + fVar32 * fVar28 +
                     fRam000000014685600c * fRam000000014685600c;
        FMatrix::RemoveScaling(&local_198);
        fVar55 = (float)(-(uint)(local_118 <= (float)local_148._0_4_ * fVar29) &
                         (_DAT_1468560c0 ^ (uint)fVar36) ^ _DAT_1468560c0);
        fVar26 = (float)(-(uint)(fStack_114 <= (float)local_148._4_4_ * fVar30) &
                         (uRam00000001468560c4 ^ (uint)fVar40) ^ uRam00000001468560c4);
        fVar27 = (float)(-(uint)(fStack_110 <= fStack_140 * fVar31) &
                         (uRam00000001468560c8 ^ (uint)fVar45) ^ uRam00000001468560c8);
        local_198 = local_198 * fVar55;
        fStack_194 = fStack_194 * fVar55;
        fStack_190 = fStack_190 * fVar55;
        fStack_180 = fStack_180 * fVar26;
        fStack_184 = fStack_184 * fVar26;
        local_188 = local_188 * fVar26;
        fStack_170 = fStack_170 * fVar27;
        local_178 = local_178 * fVar27;
        fStack_174 = fStack_174 * fVar27;
        FQuat::FQuat(&local_128,&local_198);
        auVar21._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
        auVar21._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
        auVar21._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
        auVar21._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
        fVar27 = auVar21._4_4_ + auVar21._0_4_;
        fVar32 = auVar21._8_4_ + auVar21._4_4_;
        fVar50 = auVar21._12_4_ + auVar21._8_4_;
        fVar54 = auVar21._0_4_ + auVar21._12_4_;
        auVar4._4_4_ = fVar32;
        auVar4._0_4_ = fVar27;
        auVar4._8_4_ = fVar50;
        auVar4._12_4_ = fVar54;
        auVar19 = rsqrtps(auVar21,auVar4);
        fVar55 = auVar19._0_4_;
        fVar26 = auVar19._4_4_;
        fVar36 = auVar19._8_4_;
        fVar40 = auVar19._12_4_;
        fVar55 = (_DAT_1468560b0 - fVar55 * fVar55 * fVar27 * _DAT_1468560b0) * fVar55 + fVar55;
        fVar26 = (fRam00000001468560b4 - fVar26 * fVar26 * fVar32 * fRam00000001468560b4) * fVar26 +
                 fVar26;
        fVar36 = (fRam00000001468560b8 - fVar36 * fVar36 * fVar50 * fRam00000001468560b8) * fVar36 +
                 fVar36;
        fVar40 = (fRam00000001468560bc - fVar40 * fVar40 * fVar54 * fRam00000001468560bc) * fVar40 +
                 fVar40;
        fVar27 = (float)(((uint)(((_DAT_1468560b0 - fVar55 * fVar55 * fVar27 * _DAT_1468560b0) *
                                  fVar55 + fVar55) * local_128) ^ _DAT_1468560a0) &
                         -(uint)(1e-08 <= fVar27) ^ _DAT_1468560a0);
        fVar32 = (float)(((uint)(((fRam00000001468560b4 -
                                  fVar26 * fVar26 * fVar32 * fRam00000001468560b4) * fVar26 + fVar26
                                 ) * fStack_124) ^ uRam00000001468560a4) & -(uint)(1e-08 <= fVar32)
                        ^ uRam00000001468560a4);
        fVar36 = (float)(((uint)(((fRam00000001468560b8 -
                                  fVar36 * fVar36 * fVar50 * fRam00000001468560b8) * fVar36 + fVar36
                                 ) * fStack_120) ^ uRam00000001468560a8) & -(uint)(1e-08 <= fVar50)
                        ^ uRam00000001468560a8);
        fVar40 = (float)(((uint)(((fRam00000001468560bc -
                                  fVar40 * fVar40 * fVar54 * fRam00000001468560bc) * fVar40 + fVar40
                                 ) * fStack_11c) ^ uRam00000001468560ac) & -(uint)(1e-08 <= fVar54)
                        ^ uRam00000001468560ac);
        fVar26 = local_168;
        fVar50 = fStack_164;
        fVar54 = fStack_160;
        fVar55 = local_108;
        local_128 = fVar27;
        fStack_124 = fVar32;
        fStack_120 = fVar36;
        fStack_11c = fVar40;
      }
    }
    piVar16 = piVar16 + 0x10;
    lVar17 = param_1[(longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5];
    auVar3._4_4_ = uStack_134;
    auVar3._0_4_ = local_138;
    auVar3._8_4_ = uStack_130;
    auVar5._4_4_ = fVar50;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = fVar54;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(lVar17 + 0x10 + uVar13 * 0x30) = auVar5;
    pfVar1 = (float *)(lVar17 + uVar13 * 0x30);
    *pfVar1 = fVar27;
    pfVar1[1] = fVar32;
    pfVar1[2] = fVar36;
    pfVar1[3] = fVar40;
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(lVar17 + 0x20 + uVar13 * 0x30) = auVar3;
    fVar22 = local_c8;
    fVar24 = fStack_c4;
    fVar28 = fStack_c0;
    fVar33 = fStack_bc;
    fVar41 = local_f8;
    fVar34 = fStack_f4;
    fVar35 = fStack_f0;
    fVar37 = fStack_ec;
    fVar38 = local_d8;
    fVar42 = fStack_d4;
    fVar43 = fStack_d0;
    fVar44 = fStack_cc;
    fVar51 = local_e8;
    fVar52 = fStack_e4;
    fVar53 = fStack_e0;
    fVar10 = fStack_dc;
    fVar26 = fStack_bc;
    fVar27 = fStack_c0;
    fVar32 = fStack_c4;
    fVar36 = local_c8;
    fVar40 = fStack_cc;
    fVar50 = fStack_d0;
    fVar54 = fStack_d4;
    fVar45 = local_d8;
    fVar46 = fStack_dc;
    fVar47 = fStack_e0;
    fVar48 = fStack_e4;
    fVar49 = local_e8;
    fVar23 = fStack_ec;
    fVar25 = fStack_f0;
    fVar7 = fStack_f4;
    fVar39 = local_f8;
    fVar31 = DAT_1464aa790;
    fVar30 = DAT_1464aa788._4_4_;
    fVar29 = (float)DAT_1464aa788;
  } while( true );
}



// FUNCTION 14062b7b0 FUN_14062b7b0 body=92 status=ok
// SIG undefined FUN_14062b7b0(void)

void FUN_14062b7b0(longlong *param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  longlong *local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  longlong **pplStack_10;
  
  local_20 = local_res10;
  pplStack_10 = &local_28;
  local_18 = &LAB_140624cc0;
  local_res10[0] = param_2;
  local_28 = param_1;
  FUN_1406256c0(0x40624cc0,&local_18);
  FUN_14238a420(param_1);
  (**(code **)(*param_1 + 0x848))(param_1);
  return;
}



// FUNCTION 14062b810 FUN_14062b810 body=67 status=ok
// SIG undefined FUN_14062b810(void)

void FUN_14062b810(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    FUN_142717130(param_1,param_2);
  }
  return;
}



// FUNCTION 14062b860 FUN_14062b860 body=682 status=ok
// SIG undefined FUN_14062b860(void)

void FUN_14062b860(longlong *param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  if (param_1[0x14f] == 0) {
    return;
  }
  local_res8[0] = (**(code **)(*param_1 + 0x4f8))();
  iVar7 = (**(code **)(*param_1 + 0x4e8))(param_1);
  if (iVar7 == 0) {
    return;
  }
  lVar8 = FUN_140626d60(param_1);
  lVar11 = param_1[0x23];
  cVar6 = FUN_140627060(param_1,param_2);
  if (param_4 == 0) {
    param_4 = 0xab0;
    if (cVar6 != '\0') {
      param_4 = 0xa80;
    }
    param_4 = param_4 + (longlong)param_1;
  }
  uVar9 = (**(code **)(**(longlong **)(lVar8 + 0x440) + 0x148))
                    (*(longlong **)(lVar8 + 0x440),param_3);
  if (*(float *)(lVar8 + 0x380) != 0.0) {
    cVar6 = *(char *)(*(longlong *)(lVar8 + 0x3e0) + (uVar9 & 0xffff));
    if (cVar6 == '\x01') {
      cVar6 = '\x01';
      goto LAB_14062b94c;
    }
    if ((cVar6 != '\x02') && ((int)(uVar9 & 0xffff) <= *(int *)(lVar8 + 900))) {
      cVar6 = *(char *)(lVar8 + 0x37c);
      goto LAB_14062b94c;
    }
  }
  cVar6 = '\0';
LAB_14062b94c:
  bVar1 = *(byte *)(param_1 + 0x78);
  if (((bVar1 & 2) == 0) && (cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar3 = *(undefined4 *)(lVar11 + 0xc);
  FUN_1422ffde0(&local_58,local_res8,0,param_4);
  if ((bVar1 & 1) != 0) {
    local_50 = local_50 | 4;
  }
  if (bVar5) {
    local_50 = local_50 | 8;
  }
  local_3c = local_50 | 0x43;
  local_40 = local_58._4_4_;
  local_38 = (uint)(ushort)((short)param_3 + 1);
  local_44 = (undefined4)local_58;
  local_34 = (undefined4)local_58;
  local_48 = uVar3;
  local_30 = uVar2;
  local_2c = local_3c;
  plVar10 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x358))
              (plVar10,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ApexDestruction\\Source\\ApexDestruction\\Private\\DestructibleComponent.cpp"
               ,0x7c6);
  }
  lVar8 = 0;
  local_58 = 0;
  local_4c = 0;
  local_50 = (**(code **)(*param_2 + 200))(param_2);
  lVar11 = lVar8;
  if (0 < (int)local_50) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,0,local_50);
    lVar11 = local_58;
  }
  iVar7 = (**(code **)(*param_2 + 0xd0))(param_2,lVar11,local_50,0);
  if (0 < iVar7) {
    do {
      plVar4 = *(longlong **)(lVar11 + lVar8 * 8);
      (**(code **)(*plVar4 + 0xa8))(plVar4,&local_48);
      (**(code **)(*plVar4 + 0x98))(plVar4,&local_38);
      (**(code **)(*plVar4 + 0xf8))(plVar4,2,1);
      (**(code **)(*plVar4 + 0xf8))(plVar4,1,1);
      (**(code **)(*plVar4 + 0xf8))(plVar4,8,1);
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x360))(plVar10);
  }
  return;
}



// FUNCTION 14062bb10 FUN_14062bb10 body=608 status=ok
// SIG undefined FUN_14062bb10(void)

void FUN_14062bb10(longlong *param_1,longlong *param_2,short param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined4 uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  if (param_1[0x14f] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x4f8))();
    iVar6 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if (iVar6 != 0) {
      lVar3 = param_1[0x23];
      uVar7 = (**(code **)(*param_2 + 0x80))(param_2);
      cVar5 = FUN_140627060(param_1,uVar7);
      lVar12 = 0xab0;
      if (cVar5 != '\0') {
        lVar12 = 0xa80;
      }
      if (lVar3 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(lVar3 + 0xc);
      }
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      bVar1 = *(byte *)(param_1 + 0x78);
      local_res8[0] = uVar4;
      FUN_1422ffde0(&local_68,local_res8,0,lVar12 + (longlong)param_1);
      if ((bVar1 & 1) != 0) {
        local_60 = local_60 | 4;
      }
      if ((bVar1 & 2) != 0) {
        local_60 = local_60 | 8;
      }
      local_44 = local_60 | 0x43;
      local_48 = local_64;
      local_40 = (uint)(ushort)(param_3 + 1);
      local_4c = local_68;
      local_3c = local_68;
      local_50 = uVar11;
      local_38 = uVar2;
      local_34 = local_44;
      plVar8 = (longlong *)(**(code **)(*param_2 + 0x80))(param_2);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x30))(plVar8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x358))
                  (plVar8,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ApexDestruction\\Source\\ApexDestruction\\Private\\DestructibleComponent.cpp"
                   ,0x7f2);
      }
      plVar9 = (longlong *)(**(code **)(*param_2 + 0x80))(param_2);
      pfVar10 = (float *)(**(code **)(*plVar9 + 0x48))(plVar9,&local_68,0x3f8147ae);
      fVar15 = (pfVar10[5] - pfVar10[2]) * 0.5;
      fVar13 = (pfVar10[4] - pfVar10[1]) * 0.5;
      fVar14 = (pfVar10[3] - *pfVar10) * 0.5;
      if (fVar13 <= fVar15) {
        fVar15 = fVar13;
      }
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      fVar15 = fVar15 * *(float *)(param_1 + 0x160);
      fVar13 = *(float *)((longlong)param_1 + 0xb04);
      if ((*(float *)((longlong)param_1 + 0xb04) <= fVar15) &&
         (fVar13 = *(float *)(param_1 + 0x161), fVar15 <= *(float *)(param_1 + 0x161))) {
        fVar13 = fVar15;
      }
      (**(code **)(*param_2 + 0xd8))(param_2,fVar13);
      (**(code **)(*param_2 + 0xa8))(param_2,&local_50);
      (**(code **)(*param_2 + 0x98))(param_2,&local_40);
      (**(code **)(*param_2 + 0xf8))(param_2,2,1);
      (**(code **)(*param_2 + 0xf8))(param_2,1,1);
      (**(code **)(*param_2 + 0xf8))(param_2,8,1);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))(plVar8);
      }
    }
  }
  return;
}



// FUNCTION 14062bd70 FUN_14062bd70 body=200 status=ok
// SIG undefined FUN_14062bd70(void)

void FUN_14062bd70(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1[0x14f] == 0) {
    FUN_1426a9dc0(param_1 + 0x76);
    return;
  }
  lVar2 = FUN_140626d60();
  if (*(longlong **)(lVar2 + 0x440) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x440) + 0xc0))();
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        uVar3 = (**(code **)(*(longlong *)param_1[0x14f] + 0xd0))((longlong *)param_1[0x14f],uVar4);
        uVar4 = uVar4 + 1;
        FUN_14062c660(param_1,uVar3,uVar4,0);
        FUN_1426a9dc0(param_1 + 0x76,param_2);
      } while (uVar4 < uVar1);
      if (uVar1 != 0) {
        (**(code **)(*param_1 + 0x848))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 14062be40 FUN_14062be40 body=183 status=ok
// SIG undefined FUN_14062be40(void)

void FUN_14062be40(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1[0x14f] != 0) {
    lVar2 = FUN_140626d60();
    if (*(longlong **)(lVar2 + 0x440) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x440) + 0xc0))();
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[0x14f] + 0xd0))
                            ((longlong *)param_1[0x14f],uVar4);
          uVar4 = uVar4 + 1;
          FUN_14062c660(param_1,uVar3,uVar4,0);
          FUN_1426a9e30(param_1 + 0x76,param_2,param_3);
        } while (uVar4 < uVar1);
        if (uVar1 != 0) {
          (**(code **)(*param_1 + 0x848))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14062bf00 FUN_14062bf00 body=185 status=ok
// SIG undefined FUN_14062bf00(void)

void FUN_14062bf00(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1[0x14f] != 0) {
    lVar2 = FUN_140626d60();
    if (*(longlong **)(lVar2 + 0x440) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x440) + 0xc0))();
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[0x14f] + 0xd0))
                            ((longlong *)param_1[0x14f],uVar4);
          uVar4 = uVar4 + 1;
          FUN_14062c660(param_1,uVar3,uVar4,0);
          FUN_1426a9ea0(param_1 + 0x76,param_2,param_3);
        } while (uVar4 < uVar1);
        if (uVar1 != 0) {
          (**(code **)(*param_1 + 0x848))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14062bfc0 FUN_14062bfc0 body=215 status=ok
// SIG undefined FUN_14062bfc0(void)

void FUN_14062bfc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x440) + 0xc0))();
  }
  FUN_1406296d0(param_1 + 0xa58,iVar3);
  TArray<FApexDestructionCustomPayload,TSizedDefaultAllocator<32>_>::AddDefaulted(param_1 + 0xa58);
  plVar1 = (longlong *)(param_1 + 0xaf0);
  *(undefined4 *)(param_1 + 0xaf8) = 0;
  if (*(int *)(param_1 + 0xafc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0xaf8);
  iVar4 = iVar2 + iVar3;
  *(int *)(param_1 + 0xaf8) = iVar4;
  if (*(int *)(param_1 + 0xafc) < iVar4) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + *plVar1),0,(longlong)iVar3 << 4);
  FUN_1423bba90(param_1,param_2,1);
  FUN_14234b040(param_1);
  return;
}



// FUNCTION 14062c0a0 FUN_14062c0a0 body=195 status=ok
// SIG undefined FUN_14062c0a0(void)

void FUN_14062c0a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = param_1 + 0xb10;
  lVar2 = FWeakObjectPtr::Get(lVar1);
  FWeakObjectPtr::operator=(lVar1,param_2);
  cVar5 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar5 != '\0') {
    lVar3 = FWeakObjectPtr::Get(lVar1);
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FTickFunction::AddPrerequisite(param_1 + 0x30,uVar4,lVar3 + 0x30);
  }
  if (lVar2 != 0) {
    FTickFunction::RemovePrerequisite(param_1 + 0x30,lVar2,lVar2 + 0x30);
  }
  cVar5 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar5 != '\0') {
    FUN_1406292a0(param_1,0);
    if ((*(byte *)(param_1 + 0xb8) & 4) != 0) {
      FUN_140629400(param_1);
    }
  }
  return;
}



// FUNCTION 14062c170 SetEnableGravity body=84 status=ok
// SIG undefined SetEnableGravity(void)

void UDestructibleComponent::SetEnableGravity(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined8 *puStack_10;
  
  local_res10[0] = param_2;
  FUN_142717420();
  local_20 = local_res10;
  puStack_10 = &local_28;
  local_18 = &LAB_140624c20;
  local_28 = param_1;
  FUN_1406256c0(param_1,&local_18);
  return;
}



// FUNCTION 14062c1d0 FUN_14062c1d0 body=44 status=ok
// SIG undefined FUN_14062c1d0(void)

void FUN_14062c1d0(longlong param_1,char param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  *(char *)(param_1 + 0xa50) = param_2;
  plVar1 = *(longlong **)(param_1 + 0xa78);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014062c1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x148))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014062c1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x150))(plVar1,param_3);
  return;
}



// FUNCTION 14062c200 FUN_14062c200 body=69 status=ok
// SIG undefined FUN_14062c200(void)

void FUN_14062c200(longlong *param_1)

{
  int iVar1;
  wchar_t *_Str;
  
  if ((int)param_1[1] == 1) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
                    /* WARNING: Could not recover jumptable at 0x00014062c239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146855f80 + 0x138))(DAT_146855f80,iVar1 == 1);
    return;
  }
  return;
}



// FUNCTION 14062c260 FUN_14062c260 body=332 status=ok
// SIG undefined FUN_14062c260(void)

void FUN_14062c260(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  FUN_142377a00();
  lVar6 = 0;
  local_res8 = 0;
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar2 != 0) {
    FBodyInstance::UpdatePhysicalMaterials(lVar2);
  }
  if ((param_1[0xe3] != 0) && (lVar2 = (longlong)*(int *)(param_1[0xe3] + 0x140), 0 < lVar2)) {
    do {
      lVar3 = (**(code **)(*param_1 + 0x6d0))
                        (param_1,*(undefined8 *)(lVar6 + *(longlong *)(param_1[0xe3] + 0x158)),1);
      if (lVar3 != 0) {
        FBodyInstance::UpdatePhysicalMaterials(lVar3);
      }
      lVar6 = lVar6 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = param_1[0x14f];
  if (lVar2 != 0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x18) + 0x10))(lVar2 + 0x18);
    cVar1 = (**(code **)(*(longlong *)(param_1[0x14f] + 0x18) + 8))
                      ((longlong *)(param_1[0x14f] + 0x18),plVar4);
    if (cVar1 != '\0') {
      local_res8 = 0;
      uVar5 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
      lVar2 = FUN_142698570(uVar5);
      if (lVar2 != 0) {
        local_res8 = FUN_1426c86a0(lVar2);
        (**(code **)(*plVar4 + 0x198))(plVar4,&local_res8,1);
        (*(code *)**(undefined8 **)(param_1[0x14f] + 0x18))
                  ((undefined8 *)(param_1[0x14f] + 0x18),plVar4);
      }
    }
    (**(code **)(*plVar4 + 0x1a0))(plVar4);
  }
  return;
}



// FUNCTION 14062c3b0 SetNum body=108 status=ok
// SIG undefined SetNum(void)

void TArray<unsigned___int64,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar1 * 8),0,(longlong)(iVar2 - iVar1) << 3);
    return;
  }
  if (iVar2 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar2,param_3);
  }
  return;
}



// FUNCTION 14062c420 SetSimulatePhysics body=67 status=ok
// SIG undefined SetSimulatePhysics(void)

void UDestructibleComponent::SetSimulatePhysics(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  undefined1 *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined1 **ppuStack_10;
  
  local_28 = local_res10;
  ppuStack_10 = &local_28;
  local_18 = &LAB_140624c90;
  local_res10[0] = param_2;
  local_20 = param_1;
  FUN_1406256c0(0x40624c90,&local_18);
  return;
}



// FUNCTION 14062c470 FUN_14062c470 body=416 status=ok
// SIG undefined FUN_14062c470(void)

void FUN_14062c470(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    lVar5 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(longlong **)(param_2 + 0x440) == (longlong *)0x0) {
      return;
    }
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x440) + 0xc0))();
  }
  FUN_1406296d0(param_1 + 0xa58,iVar3);
  TArray<FApexDestructionCustomPayload,TSizedDefaultAllocator<32>_>::AddDefaulted(param_1 + 0xa58);
  plVar1 = (longlong *)(param_1 + 0xaf0);
  iVar4 = 0;
  if ((*(int *)(param_1 + 0xafc) < iVar3) &&
     (*(undefined4 *)(param_1 + 0xaf8) = 0, iVar4 = 0, *(int *)(param_1 + 0xafc) != iVar3)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    iVar4 = *(int *)(param_1 + 0xaf8);
  }
  *(int *)(param_1 + 0xaf8) = iVar4 + iVar3;
  if (*(int *)(param_1 + 0xafc) < iVar4 + iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x10 + *plVar1),0,(longlong)iVar3 << 4);
  FUN_1423bba90(param_1,param_2,1);
  FUN_14234b040(param_1);
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa40);
    *(undefined4 *)(param_1 + 0xa48) = 0;
    if (*(int *)(param_1 + 0xa4c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    }
    iVar4 = (**(code **)(**(longlong **)(param_2 + 0x440) + 200))();
    iVar3 = *(int *)(param_1 + 0xa48);
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0xa48) = iVar4;
      if (*(int *)(param_1 + 0xa4c) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar3 * 0x10 + *plVar1),0,(longlong)(iVar4 - iVar3) << 4);
    }
    else if ((iVar4 < iVar3) && (iVar3 - iVar4 != 0)) {
      *(int *)(param_1 + 0xa48) = iVar3 - (iVar3 - iVar4);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 14062c610 FUN_14062c610 body=71 status=ok
// SIG undefined FUN_14062c610(void)

void FUN_14062c610(longlong *param_1,char param_2)

{
  if (((char)param_1[0x163] != '\0') && (param_2 != *(char *)((longlong)param_1 + 0xb19))) {
    *(char *)((longlong)param_1 + 0xb19) = param_2;
    (**(code **)(*param_1 + 0x358))();
    if (*(char *)((longlong)param_1 + 0xb19) != '\0') {
      FUN_1406292a0(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14062c660 FUN_14062c660 body=207 status=ok
// SIG undefined FUN_14062c660(void)

void FUN_14062c660(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x4c0);
    param_4[1] = *(undefined8 *)(param_1 + 0x4c8);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_1 + 0x3b0);
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  uVar4 = 0;
  uVar5 = uVar4;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x218);
  }
  cVar1 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar5);
  uVar3 = param_2;
  if (cVar1 != '\0') {
    uVar3 = uVar4;
  }
  *(undefined8 *)(param_1 + 0x4c0) = uVar3;
  cVar1 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar5);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (cVar1 != '\0') {
    uVar4 = param_2;
  }
  *(undefined4 *)(param_1 + 0x3b0) = param_3;
  *(undefined8 *)(param_1 + 0x4c8) = uVar4;
  return;
}



// FUNCTION 14062c730 FUN_14062c730 body=8 status=ok
// SIG undefined FUN_14062c730(void)

undefined1 FUN_14062c730(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xb18);
}



// FUNCTION 14062c740 FUN_14062c740 body=837 status=ok
// SIG undefined FUN_14062c740(void)

void FUN_14062c740(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint in_stack_fffffffffffffee8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_90;
  int *local_88;
  int local_80;
  int local_7c;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (((*(byte *)(param_1 + 0xa38) & 1) != 0) || (plVar7 = (longlong *)(lVar1 + 0x430), lVar1 == 0))
  {
    plVar7 = (longlong *)(param_1 + 0xa40);
  }
  if (lVar1 != 0) {
    lVar4 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar9 = 0;
      piVar10 = (int *)0x0;
      uVar12 = 0;
      local_88 = (int *)0x0;
      local_7c = 0;
      if (*(int *)(param_2 + 0x40) != 0) {
        do {
          lVar4 = *(longlong *)(param_2 + 0x38);
          if (*(uint *)(lVar4 + 4 + uVar12 * 0x28) < *(uint *)(plVar7 + 1)) {
            iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x440) + 0x150))
                              (*(longlong **)(lVar1 + 0x440),*(undefined4 *)(lVar4 + uVar12 * 0x28))
            ;
            iVar6 = 0;
            if (-1 < iVar3) {
              iVar6 = iVar3;
            }
            if ((*(byte *)(lVar4 + 0x24 + uVar12 * 0x28) & 8) != 0) {
              for (piVar5 = piVar10; piVar5 != piVar10 + iVar9; piVar5 = piVar5 + 1) {
                if (*piVar5 == iVar6) goto LAB_14062ca17;
              }
              fVar14 = (*(float *)(lVar4 + 8 + uVar12 * 0x28) +
                       *(float *)(lVar4 + 0x14 + uVar12 * 0x28)) * 0.5;
              fVar13 = (*(float *)(lVar4 + 0x1c + uVar12 * 0x28) +
                       *(float *)(lVar4 + 0x10 + uVar12 * 0x28)) * 0.5;
              plVar8 = (longlong *)((longlong)*(int *)(lVar4 + 4 + uVar12 * 0x28) * 0x10 + *plVar7);
              fVar15 = (*(float *)(lVar4 + 0x18 + uVar12 * 0x28) +
                       *(float *)(lVar4 + 0xc + uVar12 * 0x28)) * 0.5;
              lVar4 = plVar8[1];
              if (lVar4 != 0) {
                in_stack_fffffffffffffee8 = 0;
                local_e8 = DAT_1468b5da0;
                local_e0 = DAT_1468b5da8;
                local_d8 = CONCAT44(fVar15,fVar14);
                local_d0 = fVar13;
                FUN_142458510(param_1,lVar4,&local_d8,&local_e8,0x3f800000,0x3f800000,0,0,0,0,
                              CONCAT44(fVar15,fVar14));
              }
              lVar4 = *plVar8;
              if (lVar4 != 0) {
                local_c8 = 0x3f8000003f800000;
                in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffff00;
                local_90 = 0x3f800000;
                local_c0 = 0x3f800000;
                local_b0 = DAT_1468b5da8;
                local_b8 = DAT_1468b5da0;
                local_a8 = CONCAT44(fVar15,fVar14);
                local_a0 = fVar13;
                lVar4 = FUN_14245fa90(param_1,lVar4,&local_a8,&local_b8,&local_c8,1,
                                      in_stack_fffffffffffffee8,0);
                if (lVar4 != 0) {
                  *(byte *)(lVar4 + 0x2f1) = *(byte *)(lVar4 + 0x2f1) & 0xef;
                }
              }
              local_80 = iVar9 + 1;
              if (local_7c < local_80) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
                piVar10 = local_88;
              }
              piVar10[iVar9] = iVar6;
              iVar9 = local_80;
            }
          }
LAB_14062ca17:
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_2 + 0x40));
        if (piVar10 != (int *)0x0) {
          FMemory::Free(piVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 14062ca90 SprintfImpl body=103 status=ok
// SIG undefined SprintfImpl(void)

int TCString<wchar_t>::SprintfImpl
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0x3ff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (0x3ff < iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 14062cb00 FUN_14062cb00 body=568 status=ok
// SIG undefined FUN_14062cb00(void)

undefined1 *
FUN_14062cb00(longlong param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 param_5,
             int *param_6,undefined1 param_7)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  float local_res8 [2];
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  
  plVar2 = *(longlong **)(param_1 + 0xa78);
  if (plVar2 == (longlong *)0x0) {
    return &stack0x00000000;
  }
  local_88 = *(undefined8 *)param_3;
  local_80 = param_3[2];
  local_78 = *param_4 - *param_3;
  local_res8[0] = 0.0;
  fStack_74 = param_4[1] - param_3[1];
  iVar1 = *param_6;
  local_40 = 0x3f800000;
  local_70 = param_4[2] - local_80;
  local_60 = 0x3f800000;
  uStack_58 = 0;
  local_50 = 0x3f800000;
  uStack_48 = 0;
  if (iVar1 == 1) {
    iVar8 = param_6[2];
    local_90 = (float)param_6[3];
    iVar7 = param_6[1];
  }
  else if (iVar1 == 2) {
    iVar8 = param_6[1];
    local_90 = (float)iVar8;
    iVar7 = iVar8;
  }
  else {
    iVar8 = DAT_1468b5d94;
    local_90 = (float)DAT_1468b5d98;
    iVar7 = DAT_1468b5d90;
    if (iVar1 == 3) {
      iVar8 = param_6[1];
      local_90 = (float)param_6[2];
      iVar7 = param_6[1];
    }
  }
  local_98 = CONCAT44(iVar8,iVar7);
  uVar4 = (**(code **)(*plVar2 + 0x1a8))
                    (plVar2,local_res8,local_38,&local_88,&local_98,&local_60,&local_78,3);
  uVar6 = uVar4;
  if (((int)uVar4 != -1) && (local_res8[0] <= 1.0)) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                      (*(longlong **)(param_1 + 0xa78),uVar4 & 0xffffffff);
    uVar6 = 0;
    if (lVar5 != 0) {
      FUN_14062c660(param_1,lVar5,uVar4 & 0xffffffff,&local_78);
      local_80 = param_4[2];
      local_88 = *(undefined8 *)param_4;
      local_90 = param_3[2];
      local_98 = *(undefined8 *)param_3;
      bVar3 = FUN_14239a6f0(param_1,param_2,&local_98,&local_88,param_5,param_6,param_7);
      *(ulonglong *)(param_1 + 0x4c0) = CONCAT44(fStack_74,local_78);
      *(ulonglong *)(param_1 + 0x4c8) = CONCAT44(uStack_6c,local_70);
      *(undefined4 *)(param_1 + 0x3b0) = local_68;
      return (undefined1 *)(ulonglong)bVar3;
    }
  }
  return (undefined1 *)(uVar6 & 0xffffffffffffff00);
}



// FUNCTION 14062cd50 FUN_14062cd50 body=3182 status=ok
// SIG undefined FUN_14062cd50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14062cd50(longlong param_1,char param_2)

{
  ushort uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
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
  longlong local_res20;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
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
  
  if (((*(char *)(param_1 + 0xb18) != '\0') && (lVar8 = FUN_140626d60(), lVar8 != 0)) &&
     (*(int *)(param_1 + ((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10) != 0)) {
    lVar15 = (longlong)*(int *)(param_1 + 0x76c) * 0x10;
    lVar9 = FWeakObjectPtr::Get(param_1 + 0xb10);
    if (lVar9 == 0) {
      iVar14 = 0;
      if (0 < *(int *)(lVar8 + 0x450)) {
        lVar9 = 0x60;
        fVar57 = _DAT_1468560b0;
        fVar59 = fRam00000001468560b4;
        fVar61 = fRam00000001468560b8;
        fVar62 = fRam00000001468560bc;
        do {
          if ((param_2 == '\0') ||
             (cVar6 = FUN_1423b47e0(param_1,iVar14 + 2), fVar57 = _DAT_1468560b0,
             fVar59 = fRam00000001468560b4, fVar61 = fRam00000001468560b8,
             fVar62 = fRam00000001468560bc, cVar6 == '\0')) {
            fVar23 = fRam00000001468560d8;
            fVar27 = fRam00000001468560d4;
            fVar30 = _DAT_1468560d0;
            fVar28 = fRam0000000146856008;
            fVar33 = fRam0000000146856004;
            fVar32 = _DAT_146856000;
            lVar10 = *(longlong *)(lVar8 + 0x148);
            lVar13 = *(longlong *)(param_1 + 0xb20);
            auVar18 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar10);
            fVar3 = auVar18._0_4_;
            fVar5 = auVar18._4_4_;
            fVar58 = auVar18._8_4_;
            fVar25 = auVar18._12_4_;
            pfVar11 = (float *)(lVar9 + lVar10);
            fVar26 = *pfVar11;
            fVar36 = pfVar11[1];
            fVar37 = pfVar11[2];
            fVar38 = pfVar11[3];
            pfVar11 = (float *)(lVar9 + 0x10 + lVar10);
            fVar39 = *pfVar11;
            fVar20 = pfVar11[1];
            fVar29 = pfVar11[2];
            auVar16 = *(undefined1 (*) [16])(lVar13 + -0x40 + lVar9);
            fVar4 = auVar16._0_4_;
            fVar56 = auVar16._4_4_;
            fVar60 = auVar16._8_4_;
            auVar18 = minps(auVar16,auVar18);
            auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam00000001468560d4);
            auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_1468560d0);
            auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam00000001468560d8);
            auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam00000001468560dc);
            iVar7 = movmskps((int)lVar10,auVar19);
            if (iVar7 == 0) {
              pfVar12 = (float *)(lVar13 + -0x60 + lVar9);
              fVar32 = *pfVar12;
              fVar33 = pfVar12[1];
              fVar28 = pfVar12[2];
              fVar30 = pfVar12[3];
              pfVar12 = (float *)(lVar13 + -0x50 + lVar9);
              fVar27 = *pfVar12 * fVar3;
              fVar23 = pfVar12[1] * fVar5;
              fVar34 = pfVar12[2] * fVar58;
              fVar24 = pfVar12[3] * fVar25;
              fVar31 = fVar30 * fVar26 * _DAT_146856090 + fVar32 * fVar38 +
                       fVar28 * fVar36 * _DAT_146856080 + fVar33 * fVar37 * _DAT_146856070;
              fVar35 = fVar28 * fVar26 * fRam0000000146856094 + fVar33 * fVar38 +
                       fVar30 * fVar36 * fRam0000000146856084 +
                       fVar32 * fVar37 * fRam0000000146856074;
              fVar40 = fVar33 * fVar26 * fRam0000000146856098 + fVar28 * fVar38 +
                       fVar32 * fVar36 * fRam0000000146856088 +
                       fVar30 * fVar37 * fRam0000000146856078;
              fVar41 = fVar32 * fVar26 * fRam000000014685609c + fVar30 * fVar38 +
                       fVar33 * fVar36 * fRam000000014685608c +
                       fVar28 * fVar37 * fRam000000014685607c;
              fVar32 = fVar34 * fVar36 - fVar23 * fVar37;
              fVar33 = fVar27 * fVar37 - fVar34 * fVar26;
              fVar28 = fVar23 * fVar26 - fVar27 * fVar36;
              fVar30 = fVar24 * fVar38 - fVar24 * fVar38;
              fVar32 = fVar32 + fVar32;
              fVar33 = fVar33 + fVar33;
              fVar28 = fVar28 + fVar28;
              fVar30 = fVar30 + fVar30;
              fVar39 = (fVar28 * fVar36 - fVar33 * fVar37) + fVar32 * fVar38 + fVar27 + fVar39;
              fVar20 = (fVar32 * fVar37 - fVar28 * fVar26) + fVar33 * fVar38 + fVar23 + fVar20;
              fVar29 = (fVar33 * fVar26 - fVar32 * fVar36) + fVar28 * fVar38 + fVar34 + fVar29;
              fVar26 = (fVar30 * fVar38 - fVar30 * fVar38) + fVar30 * fVar38 + fVar24 + pfVar11[3];
            }
            else {
              fVar40 = fVar36 + fVar36;
              fVar41 = fVar37 + fVar37;
              fVar42 = (fVar26 + fVar26) * fVar26;
              fVar44 = fVar38 * (fVar26 + fVar26);
              pfVar11 = (float *)(lVar13 + -0x60 + lVar9);
              fVar34 = *pfVar11;
              fVar24 = pfVar11[1];
              fVar31 = pfVar11[2];
              fVar35 = pfVar11[3];
              fVar50 = (fVar38 * fVar41 + fVar40 * fVar26) * fVar3;
              fVar51 = (fVar44 + fVar41 * fVar36) * fVar5;
              fVar52 = (fVar38 * fVar40 + fVar41 * fVar26) * fVar58;
              fVar43 = fVar5 * (fVar40 * fVar26 - fVar38 * fVar41);
              fVar45 = fVar58 * (fVar41 * fVar36 - fVar44);
              fVar46 = fVar3 * (fVar41 * fVar26 - fVar38 * fVar40);
              fVar38 = (float)((uint)((_DAT_146856000 - (fVar41 * fVar37 + fVar40 * fVar36)) * fVar3
                                     ) & _DAT_146856010);
              fVar41 = (float)((uint)((fRam0000000146856004 - (fVar41 * fVar37 + fVar42)) * fVar5) &
                              uRam0000000146856014);
              fVar40 = (float)((uint)((fRam0000000146856008 - (fVar40 * fVar36 + fVar42)) * fVar58)
                              & uRam0000000146856018);
              fVar42 = (float)((uint)((fRam000000014685600c - (fVar42 + fVar42)) * fVar25) &
                              uRam000000014685601c);
              fVar26 = fVar24 + fVar24;
              fVar36 = fVar31 + fVar31;
              fVar44 = fVar34 * (fVar34 + fVar34);
              fVar37 = fVar35 * (fVar34 + fVar34);
              fVar54 = (fVar35 * fVar36 + fVar34 * fVar26) * fVar4;
              fVar55 = (fVar37 + fVar24 * fVar36) * fVar56;
              fVar49 = (fVar35 * fVar26 + fVar34 * fVar36) * fVar60;
              fVar47 = fVar56 * (fVar34 * fVar26 - fVar35 * fVar36);
              fVar48 = fVar60 * (fVar24 * fVar36 - fVar37);
              fVar53 = fVar4 * (fVar34 * fVar36 - fVar35 * fVar26);
              fVar34 = (float)((uint)((_DAT_146856000 - (fVar31 * fVar36 + fVar24 * fVar26)) * fVar4
                                     ) & _DAT_146856010);
              fVar31 = (float)((uint)((fRam0000000146856004 - (fVar31 * fVar36 + fVar44)) * fVar56)
                              & uRam0000000146856014);
              fVar24 = (float)((uint)((fRam0000000146856008 - (fVar24 * fVar26 + fVar44)) * fVar60)
                              & uRam0000000146856018);
              fVar35 = (float)((uint)((fRam000000014685600c - (fVar44 + fVar44)) * auVar16._12_4_) &
                              uRam000000014685601c);
              pfVar11 = (float *)(lVar13 + -0x50 + lVar9);
              fVar26 = *pfVar11;
              fVar36 = pfVar11[1];
              fVar37 = pfVar11[2];
              local_128 = fVar54 * fVar43 + fVar34 * fVar38 + fVar53 * fVar52 + fVar35 * fVar39;
              fStack_124 = fVar54 * fVar41 + fVar34 * fVar50 + fVar53 * fVar45 + fVar35 * fVar20;
              fStack_120 = fVar54 * fVar51 + fVar34 * fVar46 + fVar53 * fVar40 + fVar35 * fVar29;
              fStack_11c = fVar54 * fVar42 + fVar34 * fVar42 + fVar53 * fVar42 +
                           fVar35 * fRam000000014685600c;
              local_118 = fVar31 * fVar43 + fVar47 * fVar38 + fVar55 * fVar52 + fVar35 * fVar39;
              fStack_114 = fVar31 * fVar41 + fVar47 * fVar50 + fVar55 * fVar45 + fVar35 * fVar20;
              fStack_110 = fVar31 * fVar51 + fVar47 * fVar46 + fVar55 * fVar40 + fVar35 * fVar29;
              fStack_10c = fVar31 * fVar42 + fVar47 * fVar42 + fVar55 * fVar42 +
                           fVar35 * fRam000000014685600c;
              local_108 = fVar48 * fVar43 + fVar49 * fVar38 + fVar24 * fVar52 + fVar35 * fVar39;
              fStack_104 = fVar48 * fVar41 + fVar49 * fVar50 + fVar24 * fVar45 + fVar35 * fVar20;
              fStack_100 = fVar48 * fVar51 + fVar49 * fVar46 + fVar24 * fVar40 + fVar35 * fVar29;
              fStack_fc = fVar48 * fVar42 + fVar49 * fVar42 + fVar24 * fVar42 +
                          fVar35 * fRam000000014685600c;
              local_f8 = fVar36 * fVar43 + fVar26 * fVar38 + fVar37 * fVar52 +
                         fRam000000014685600c * fVar39;
              fStack_f4 = fVar36 * fVar41 + fVar26 * fVar50 + fVar37 * fVar45 +
                          fRam000000014685600c * fVar20;
              fStack_f0 = fVar36 * fVar51 + fVar26 * fVar46 + fVar37 * fVar40 +
                          fRam000000014685600c * fVar29;
              fStack_ec = fVar36 * fVar42 + fVar26 * fVar42 + fVar37 * fVar42 +
                          fRam000000014685600c * fRam000000014685600c;
              FMatrix::RemoveScaling(&local_128);
              fVar26 = (float)(-(uint)(fVar30 <= fVar4 * fVar3) & (_DAT_1468560c0 ^ (uint)fVar32) ^
                              _DAT_1468560c0);
              fVar36 = (float)(-(uint)(fVar27 <= fVar56 * fVar5) &
                               (uRam00000001468560c4 ^ (uint)fVar33) ^ uRam00000001468560c4);
              fVar37 = (float)(-(uint)(fVar23 <= fVar60 * fVar58) &
                               (uRam00000001468560c8 ^ (uint)fVar28) ^ uRam00000001468560c8);
              local_128 = local_128 * fVar26;
              fStack_124 = fStack_124 * fVar26;
              fStack_120 = fStack_120 * fVar26;
              fStack_110 = fStack_110 * fVar36;
              fStack_114 = fStack_114 * fVar36;
              local_118 = local_118 * fVar36;
              fStack_100 = fStack_100 * fVar37;
              local_108 = local_108 * fVar37;
              fStack_104 = fStack_104 * fVar37;
              FQuat::FQuat(&local_138,&local_128);
              auVar22._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
              auVar22._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
              auVar22._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
              auVar22._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
              fVar20 = auVar22._4_4_ + auVar22._0_4_;
              fVar29 = auVar22._8_4_ + auVar22._4_4_;
              fVar32 = auVar22._12_4_ + auVar22._8_4_;
              fVar33 = auVar22._0_4_ + auVar22._12_4_;
              auVar18._4_4_ = fVar29;
              auVar18._0_4_ = fVar20;
              auVar18._8_4_ = fVar32;
              auVar18._12_4_ = fVar33;
              auVar18 = rsqrtps(auVar22,auVar18);
              fVar36 = auVar18._0_4_;
              fVar37 = auVar18._4_4_;
              fVar38 = auVar18._8_4_;
              fVar39 = auVar18._12_4_;
              fVar36 = (fVar57 - fVar36 * fVar36 * fVar20 * fVar57) * fVar36 + fVar36;
              fVar37 = (fVar59 - fVar37 * fVar37 * fVar29 * fVar59) * fVar37 + fVar37;
              fVar38 = (fVar61 - fVar38 * fVar38 * fVar32 * fVar61) * fVar38 + fVar38;
              fVar39 = (fVar62 - fVar39 * fVar39 * fVar33 * fVar62) * fVar39 + fVar39;
              fVar26 = 0.0;
              fVar31 = (float)(((uint)(((fVar57 - fVar36 * fVar36 * fVar20 * fVar57) * fVar36 +
                                       fVar36) * local_138) ^ _DAT_1468560a0) &
                               -(uint)(1e-08 <= fVar20) ^ _DAT_1468560a0);
              fVar35 = (float)(((uint)(((fVar59 - fVar37 * fVar37 * fVar29 * fVar59) * fVar37 +
                                       fVar37) * fStack_134) ^ uRam00000001468560a4) &
                               -(uint)(1e-08 <= fVar29) ^ uRam00000001468560a4);
              fVar40 = (float)(((uint)(((fVar61 - fVar38 * fVar38 * fVar32 * fVar61) * fVar38 +
                                       fVar38) * fStack_130) ^ uRam00000001468560a8) &
                               -(uint)(1e-08 <= fVar32) ^ uRam00000001468560a8);
              fVar41 = (float)(((uint)(((fVar62 - fVar39 * fVar39 * fVar33 * fVar62) * fVar39 +
                                       fVar39) * fStack_12c) ^ uRam00000001468560ac) &
                               -(uint)(1e-08 <= fVar33) ^ uRam00000001468560ac);
              fVar39 = local_f8;
              fVar20 = fStack_f4;
              fVar29 = fStack_f0;
              local_138 = fVar31;
              fStack_134 = fVar35;
              fStack_130 = fVar40;
              fStack_12c = fVar41;
            }
            lVar10 = *(longlong *)(lVar15 + 0x728 + param_1);
            pfVar11 = (float *)(lVar9 + lVar10);
            *pfVar11 = fVar31;
            pfVar11[1] = fVar35;
            pfVar11[2] = fVar40;
            pfVar11[3] = fVar41;
            pfVar11 = (float *)(lVar9 + 0x10 + lVar10);
            *pfVar11 = fVar39;
            pfVar11[1] = fVar20;
            pfVar11[2] = fVar29;
            pfVar11[3] = fVar26;
            pfVar11 = (float *)(lVar9 + 0x20 + lVar10);
            *pfVar11 = fVar4 * fVar3;
            pfVar11[1] = fVar56 * fVar5;
            pfVar11[2] = fVar60 * fVar58;
            pfVar11[3] = auVar16._12_4_ * fVar25;
          }
          iVar14 = iVar14 + 1;
          lVar9 = lVar9 + 0x30;
        } while (iVar14 < *(int *)(lVar8 + 0x450));
      }
    }
    else {
      lVar10 = (longlong)*(int *)(lVar9 + 0x770) * 0x10;
      if (2 < (longlong)*(int *)(lVar8 + 0x160)) {
        local_res20 = (longlong)*(int *)(lVar8 + 0x160) + -2;
        lVar13 = 0x60;
        iVar14 = 1;
        do {
          iVar7 = 0;
          if (-1 < iVar14) {
            iVar7 = iVar14;
          }
          uVar1 = *(ushort *)(*(longlong *)(lVar8 + 0x460) + (longlong)iVar7 * 2);
          if (((uVar1 != 0) &&
              (iVar7 = FUN_1423ac950(lVar9,*(undefined8 *)
                                            (*(longlong *)(lVar8 + 0x448) + -0x18 +
                                            (ulonglong)uVar1 * 0x18)), iVar7 != -1)) &&
             ((param_2 == '\0' || (cVar6 = FUN_1423b47e0(param_1,uVar1 + 1), cVar6 == '\0')))) {
            fVar36 = fRam00000001468560d8;
            fVar26 = fRam00000001468560d4;
            fVar25 = _DAT_1468560d0;
            fVar60 = fRam0000000146856008;
            fVar58 = fRam0000000146856004;
            fVar56 = _DAT_146856000;
            pfVar12 = (float *)(((ulonglong)uVar1 - 1) * 0x30 + *(longlong *)(param_1 + 0xb20));
            auVar18 = *(undefined1 (*) [16])(pfVar12 + 8);
            fVar57 = auVar18._0_4_;
            fVar61 = auVar18._4_4_;
            fVar3 = auVar18._8_4_;
            pfVar11 = (float *)((longlong)iVar7 * 0x30 + *(longlong *)(lVar10 + 0x728 + lVar9));
            auVar16 = *(undefined1 (*) [16])(pfVar11 + 8);
            fVar59 = auVar16._0_4_;
            fVar62 = auVar16._4_4_;
            fVar4 = auVar16._8_4_;
            fVar5 = auVar16._12_4_;
            auVar16 = minps(auVar18,auVar16);
            auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam00000001468560d4);
            auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_1468560d0);
            auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam00000001468560d8);
            auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam00000001468560dc);
            iVar7 = movmskps((int)lVar10,auVar17);
            if (iVar7 == 0) {
              fVar56 = *pfVar11;
              fVar58 = pfVar11[1];
              fVar60 = pfVar11[2];
              fVar25 = pfVar11[3];
              fVar26 = *pfVar12;
              fVar36 = pfVar12[1];
              fVar37 = pfVar12[2];
              fVar38 = pfVar12[3];
              fVar20 = pfVar12[4] * fVar59;
              fVar29 = pfVar12[5] * fVar62;
              fVar32 = pfVar12[6] * fVar4;
              fVar33 = pfVar12[7] * fVar5;
              fVar28 = fVar38 * fVar56 * _DAT_146856090 + fVar25 * fVar26 +
                       fVar58 * fVar37 * _DAT_146856080 + fVar60 * fVar36 * _DAT_146856070;
              fVar30 = fVar37 * fVar56 * fRam0000000146856094 + fVar25 * fVar36 +
                       fVar58 * fVar38 * fRam0000000146856084 +
                       fVar60 * fVar26 * fRam0000000146856074;
              fVar27 = fVar36 * fVar56 * fRam0000000146856098 + fVar25 * fVar37 +
                       fVar58 * fVar26 * fRam0000000146856088 +
                       fVar60 * fVar38 * fRam0000000146856078;
              fVar23 = fVar26 * fVar56 * fRam000000014685609c + fVar25 * fVar38 +
                       fVar58 * fVar36 * fRam000000014685608c +
                       fVar60 * fVar37 * fRam000000014685607c;
              fVar36 = fVar32 * fVar58 - fVar29 * fVar60;
              fVar37 = fVar20 * fVar60 - fVar32 * fVar56;
              fVar38 = fVar29 * fVar56 - fVar20 * fVar58;
              fVar39 = fVar33 * fVar25 - fVar33 * fVar25;
              fVar36 = fVar36 + fVar36;
              fVar37 = fVar37 + fVar37;
              fVar38 = fVar38 + fVar38;
              fVar39 = fVar39 + fVar39;
              fVar26 = (fVar38 * fVar58 - fVar37 * fVar60) + fVar36 * fVar25 + fVar20 + pfVar11[4];
              fVar60 = (fVar36 * fVar60 - fVar38 * fVar56) + fVar37 * fVar25 + fVar29 + pfVar11[5];
              fVar56 = (fVar37 * fVar56 - fVar36 * fVar58) + fVar38 * fVar25 + fVar32 + pfVar11[6];
              fVar58 = (fVar39 * fVar25 - fVar39 * fVar25) + fVar39 * fVar25 + fVar33 + pfVar11[7];
            }
            else {
              fVar37 = *pfVar11;
              fVar38 = pfVar11[1];
              fVar39 = pfVar11[2];
              fVar20 = pfVar11[3];
              fVar29 = pfVar11[4];
              fVar32 = pfVar11[5];
              fVar33 = pfVar11[6];
              fVar27 = fVar38 + fVar38;
              fVar30 = fVar39 + fVar39;
              fVar34 = fVar37 * (fVar37 + fVar37);
              fVar28 = (fVar37 + fVar37) * fVar20;
              fVar53 = (fVar30 * fVar20 + fVar27 * fVar37) * fVar59;
              fVar54 = (fVar28 + fVar30 * fVar38) * fVar62;
              fVar55 = (fVar27 * fVar20 + fVar30 * fVar37) * fVar4;
              fVar40 = fVar62 * (fVar27 * fVar37 - fVar30 * fVar20);
              fVar42 = fVar4 * (fVar30 * fVar38 - fVar28);
              fVar44 = fVar59 * (fVar30 * fVar37 - fVar27 * fVar20);
              fVar28 = (float)((uint)((_DAT_146856000 - (fVar39 * fVar30 + fVar38 * fVar27)) *
                                     fVar59) & _DAT_146856010);
              fVar30 = (float)((uint)((fRam0000000146856004 - (fVar39 * fVar30 + fVar34)) * fVar62)
                              & uRam0000000146856014);
              fVar23 = (float)((uint)((fRam0000000146856008 - (fVar38 * fVar27 + fVar34)) * fVar4) &
                              uRam0000000146856018);
              fVar24 = (float)((uint)((fRam000000014685600c - (fVar34 + fVar34)) * fVar5) &
                              uRam000000014685601c);
              fVar37 = *pfVar12;
              fVar38 = pfVar12[1];
              fVar39 = pfVar12[2];
              fVar20 = pfVar12[3];
              fVar34 = fVar38 + fVar38;
              fVar31 = fVar39 + fVar39;
              fVar35 = fVar37 * (fVar37 + fVar37);
              fVar27 = (fVar37 + fVar37) * fVar20;
              fVar46 = (fVar31 * fVar20 + fVar34 * fVar37) * fVar57;
              fVar47 = (fVar27 + fVar31 * fVar38) * fVar61;
              fVar48 = (fVar34 * fVar20 + fVar31 * fVar37) * fVar3;
              fVar41 = fVar61 * (fVar34 * fVar37 - fVar31 * fVar20);
              fVar43 = fVar3 * (fVar31 * fVar38 - fVar27);
              fVar45 = fVar57 * (fVar31 * fVar37 - fVar34 * fVar20);
              fVar20 = (float)((uint)((_DAT_146856000 - (fVar39 * fVar31 + fVar38 * fVar34)) *
                                     fVar57) & _DAT_146856010);
              fVar27 = (float)((uint)((fRam0000000146856004 - (fVar39 * fVar31 + fVar35)) * fVar61)
                              & uRam0000000146856014);
              fVar34 = (float)((uint)((fRam0000000146856008 - (fVar38 * fVar34 + fVar35)) * fVar3) &
                              uRam0000000146856018);
              fVar31 = (float)((uint)((fRam000000014685600c - (fVar35 + fVar35)) * auVar18._12_4_) &
                              uRam000000014685601c);
              fVar37 = pfVar12[4];
              fVar38 = pfVar12[5];
              fVar39 = pfVar12[6];
              local_128 = fVar46 * fVar40 + fVar20 * fVar28 + fVar45 * fVar55 + fVar31 * fVar29;
              fStack_124 = fVar46 * fVar30 + fVar20 * fVar53 + fVar45 * fVar42 + fVar31 * fVar32;
              fStack_120 = fVar46 * fVar54 + fVar20 * fVar44 + fVar45 * fVar23 + fVar31 * fVar33;
              fStack_11c = fVar46 * fVar24 + fVar20 * fVar24 + fVar45 * fVar24 +
                           fVar31 * fRam000000014685600c;
              local_118 = fVar27 * fVar40 + fVar41 * fVar28 + fVar47 * fVar55 + fVar31 * fVar29;
              fStack_114 = fVar27 * fVar30 + fVar41 * fVar53 + fVar47 * fVar42 + fVar31 * fVar32;
              fStack_110 = fVar27 * fVar54 + fVar41 * fVar44 + fVar47 * fVar23 + fVar31 * fVar33;
              fStack_10c = fVar27 * fVar24 + fVar41 * fVar24 + fVar47 * fVar24 +
                           fVar31 * fRam000000014685600c;
              local_108 = fVar43 * fVar40 + fVar48 * fVar28 + fVar34 * fVar55 + fVar31 * fVar29;
              fStack_104 = fVar43 * fVar30 + fVar48 * fVar53 + fVar34 * fVar42 + fVar31 * fVar32;
              fStack_100 = fVar43 * fVar54 + fVar48 * fVar44 + fVar34 * fVar23 + fVar31 * fVar33;
              fStack_fc = fVar43 * fVar24 + fVar48 * fVar24 + fVar34 * fVar24 +
                          fVar31 * fRam000000014685600c;
              local_f8 = fVar38 * fVar40 + fVar37 * fVar28 + fVar39 * fVar55 +
                         fRam000000014685600c * fVar29;
              fStack_f4 = fVar38 * fVar30 + fVar37 * fVar53 + fVar39 * fVar42 +
                          fRam000000014685600c * fVar32;
              fStack_f0 = fVar38 * fVar54 + fVar37 * fVar44 + fVar39 * fVar23 +
                          fRam000000014685600c * fVar33;
              fStack_ec = fVar38 * fVar24 + fVar37 * fVar24 + fVar39 * fVar24 +
                          fRam000000014685600c * fRam000000014685600c;
              FMatrix::RemoveScaling(&local_128);
              fVar56 = (float)(-(uint)(fVar25 <= fVar57 * fVar59) & (_DAT_1468560c0 ^ (uint)fVar56)
                              ^ _DAT_1468560c0);
              fVar58 = (float)(-(uint)(fVar26 <= fVar61 * fVar62) &
                               (uRam00000001468560c4 ^ (uint)fVar58) ^ uRam00000001468560c4);
              fVar60 = (float)(-(uint)(fVar36 <= fVar3 * fVar4) &
                               (uRam00000001468560c8 ^ (uint)fVar60) ^ uRam00000001468560c8);
              local_128 = local_128 * fVar56;
              fStack_120 = fStack_120 * fVar56;
              fStack_124 = fStack_124 * fVar56;
              fStack_110 = fStack_110 * fVar58;
              fStack_114 = fStack_114 * fVar58;
              local_118 = local_118 * fVar58;
              fStack_100 = fStack_100 * fVar60;
              local_108 = local_108 * fVar60;
              fStack_104 = fStack_104 * fVar60;
              FQuat::FQuat(&local_138,&local_128);
              auVar21._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
              auVar21._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
              auVar21._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
              auVar21._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
              fVar36 = auVar21._4_4_ + auVar21._0_4_;
              fVar37 = auVar21._8_4_ + auVar21._4_4_;
              fVar38 = auVar21._12_4_ + auVar21._8_4_;
              fVar39 = auVar21._0_4_ + auVar21._12_4_;
              auVar16._4_4_ = fVar37;
              auVar16._0_4_ = fVar36;
              auVar16._8_4_ = fVar38;
              auVar16._12_4_ = fVar39;
              auVar16 = rsqrtps(auVar21,auVar16);
              fVar56 = auVar16._0_4_;
              fVar60 = auVar16._4_4_;
              fVar25 = auVar16._8_4_;
              fVar26 = auVar16._12_4_;
              fVar56 = (_DAT_1468560b0 - fVar56 * fVar56 * fVar36 * _DAT_1468560b0) * fVar56 +
                       fVar56;
              fVar60 = (fRam00000001468560b4 - fVar60 * fVar60 * fVar37 * fRam00000001468560b4) *
                       fVar60 + fVar60;
              fVar25 = (fRam00000001468560b8 - fVar25 * fVar25 * fVar38 * fRam00000001468560b8) *
                       fVar25 + fVar25;
              fVar26 = (fRam00000001468560bc - fVar26 * fVar26 * fVar39 * fRam00000001468560bc) *
                       fVar26 + fVar26;
              fVar58 = 0.0;
              fVar28 = (float)(((uint)(((_DAT_1468560b0 - fVar56 * fVar56 * fVar36 * _DAT_1468560b0)
                                        * fVar56 + fVar56) * local_138) ^ _DAT_1468560a0) &
                               -(uint)(1e-08 <= fVar36) ^ _DAT_1468560a0);
              fVar30 = (float)(((uint)(((fRam00000001468560b4 -
                                        fVar60 * fVar60 * fVar37 * fRam00000001468560b4) * fVar60 +
                                       fVar60) * fStack_134) ^ uRam00000001468560a4) &
                               -(uint)(1e-08 <= fVar37) ^ uRam00000001468560a4);
              fVar27 = (float)(((uint)(((fRam00000001468560b8 -
                                        fVar25 * fVar25 * fVar38 * fRam00000001468560b8) * fVar25 +
                                       fVar25) * fStack_130) ^ uRam00000001468560a8) &
                               -(uint)(1e-08 <= fVar38) ^ uRam00000001468560a8);
              fVar23 = (float)(((uint)(((fRam00000001468560bc -
                                        fVar26 * fVar26 * fVar39 * fRam00000001468560bc) * fVar26 +
                                       fVar26) * fStack_12c) ^ uRam00000001468560ac) &
                               -(uint)(1e-08 <= fVar39) ^ uRam00000001468560ac);
              fVar26 = local_f8;
              fVar60 = fStack_f4;
              fVar56 = fStack_f0;
              local_138 = fVar28;
              fStack_134 = fVar30;
              fStack_130 = fVar27;
              fStack_12c = fVar23;
            }
            lVar2 = *(longlong *)(lVar15 + 0x728 + param_1);
            pfVar11 = (float *)(lVar13 + lVar2);
            *pfVar11 = fVar28;
            pfVar11[1] = fVar30;
            pfVar11[2] = fVar27;
            pfVar11[3] = fVar23;
            pfVar11 = (float *)(lVar13 + 0x10 + lVar2);
            *pfVar11 = fVar26;
            pfVar11[1] = fVar60;
            pfVar11[2] = fVar56;
            pfVar11[3] = fVar58;
            pfVar11 = (float *)(lVar13 + 0x20 + lVar2);
            *pfVar11 = fVar57 * fVar59;
            pfVar11[1] = fVar61 * fVar62;
            pfVar11[2] = fVar3 * fVar4;
            pfVar11[3] = auVar18._12_4_ * fVar5;
          }
          iVar14 = iVar14 + 1;
          lVar13 = lVar13 + 0x30;
          local_res20 = local_res20 + -1;
        } while (local_res20 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14062d9d0 WakeRigidBody body=67 status=ok
// SIG undefined WakeRigidBody(void)

void UDestructibleComponent::WakeRigidBody(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 *puStack_10;
  
  local_20 = local_res10;
  puStack_10 = &local_28;
  local_18 = FUN_140624c50;
  local_res10[0] = param_2;
  local_28 = param_1;
  FUN_1406256c0(0x40624c50,&local_18);
  return;
}



// FUNCTION 14062da40 done body=19 status=ok
// SIG undefined done(void)

undefined1 NvParameterized::ParameterFind::done(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x68) == 0) && (*(char *)(param_1 + 0x70) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14062da60 findParam body=578 status=ok
// SIG undefined findParam(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong NvParameterized::findParam(longlong *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_6a8 [32];
  undefined8 local_688;
  undefined2 local_680;
  undefined2 uStack_67e;
  undefined4 uStack_67c;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  longlong *local_628;
  ulonglong local_620;
  undefined1 local_618;
  char local_617 [1031];
  undefined8 auStack_210 [32];
  int local_110 [34];
  undefined2 local_88 [2];
  undefined4 local_84;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  uVar6 = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  param_3[0xb] = 0;
  local_688 = 0;
  uStack_67c = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_680 = 0x100;
  local_628 = param_1;
  local_638 = (**(code **)(*param_1 + 0x78))();
  pcVar10 = local_617;
  bVar2 = true;
  local_688 = 0;
  local_620 = 0;
  local_618 = 0;
  local_110[0] = -1;
  uVar5 = uVar6;
  pcVar9 = local_617;
  pcVar8 = local_617;
  if (*param_2 != '\0') {
    while (pcVar9 = pcVar8, pcVar8 < local_617 + 0x3ff) {
      cVar7 = *param_2;
      if (cVar7 == '[') {
        cVar7 = param_2[1];
        *pcVar8 = '\0';
        pcVar9 = pcVar8 + 1;
        uVar5 = uVar6;
        pcVar8 = param_2;
        if (9 < (byte)(cVar7 - 0x30U)) {
LAB_14062dbbc:
          bVar2 = false;
          break;
        }
        while( true ) {
          param_2 = pcVar8 + 1;
          if (9 < (byte)(cVar7 - 0x30U)) break;
          iVar3 = (int)cVar7;
          cVar7 = pcVar8[2];
          uVar5 = (ulonglong)(uint)(iVar3 + ((int)uVar5 * 5 + -0x18) * 2);
          pcVar8 = param_2;
        }
        if (cVar7 != ']') goto LAB_14062dbbc;
        local_110[local_688._4_4_] = (int)uVar5;
        uVar5 = (ulonglong)local_688._4_4_;
        pcVar8 = pcVar9;
      }
      else {
        if (cVar7 == '.') {
          if (0x1f < (uint)uVar5) goto LAB_14062dbbc;
          auStack_210[uVar5] = pcVar10;
          uVar4 = local_688._4_4_ + 1;
          local_688 = (ulonglong)uVar4 << 0x20;
          if (uVar4 < 0x20) {
            local_110[uVar4] = -1;
          }
          pcVar10 = pcVar8 + 1;
          cVar7 = '\0';
        }
        pcVar9 = pcVar8 + 1;
        param_2 = param_2 + 1;
        cVar1 = *param_2;
        *pcVar8 = cVar7;
        if (cVar1 == '\0') break;
        uVar5 = local_688 >> 0x20;
        pcVar8 = pcVar9;
      }
    }
  }
  *pcVar9 = '\0';
  if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
    if (0x1f < local_688._4_4_) {
      return 0;
    }
    auStack_210[local_688._4_4_] = pcVar10;
    local_688 = (ulonglong)(local_688._4_4_ + 1) << 0x20;
    *pcVar9 = '\0';
  }
  if (bVar2) {
    local_84 = 0;
    local_40 = 0;
    local_38 = 0;
    local_88[0] = 0x100;
    local_30 = param_1;
    local_40 = (**(code **)(*param_1 + 0x78))(param_1);
    findParameter(param_1,local_88,&local_688,0);
    *param_3 = CONCAT44(uStack_67c,CONCAT22(uStack_67e,local_680));
    param_3[1] = uStack_678;
    param_3[2] = local_670;
    param_3[3] = uStack_668;
    param_3[4] = local_660;
    param_3[5] = uStack_658;
    param_3[6] = local_650;
    param_3[7] = uStack_648;
    param_3[8] = uStack_640;
    param_3[9] = local_638;
    param_3[10] = uStack_630;
    param_3[0xb] = local_628;
    uVar6 = local_620;
  }
  return uVar6;
}



// FUNCTION 14062dcb0 findParameter body=876 status=ok
// SIG undefined findParameter(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void NvParameterized::findParameter
               (longlong *param_1,undefined8 *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char *_Str1;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  longlong *local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_3 + 0x1a) != 0) {
    return;
  }
  if ((char)param_3[0x1c] != '\0') {
    return;
  }
  if (*(int *)((longlong)param_2 + 4) < 1) {
    (**(code **)(*param_1 + 0x88))(param_1,&DAT_143f3f584,param_2);
  }
  plVar2 = (longlong *)param_2[9];
  _Str1 = (char *)(**(code **)(*plVar2 + 0x48))(plVar2);
  iVar7 = (**(code **)(*plVar2 + 0x60))(plVar2);
  lVar11 = -1;
  if ((param_4 == '\0') && (_Str1 != (char *)0x0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (_Str1[lVar10] != '\0');
    if ((lVar10 != 0) &&
       (iVar8 = _stricmp(_Str1,*(char **)(param_3 + (ulonglong)*param_3 * 2 + 0x11e)), iVar8 != 0))
    {
      return;
    }
  }
  iVar8 = 0;
  local_b0 = (longlong *)0x0;
  if (iVar7 == 6) {
    (**(code **)(*(longlong *)param_2[0xb] + 0x130))((longlong *)param_2[0xb],param_2,&local_b0);
    if ((local_b0 != (longlong *)0x0) && (*param_3 + 1 < param_3[1])) {
      *param_3 = *param_3 + 1;
      local_50 = local_b0;
      local_a7 = 0;
      (**(code **)(*local_b0 + 0x80))(local_b0,&DAT_143f3f584,&local_a8);
      findParameter(local_b0,&local_a8,param_3,0);
      if (*param_3 != 0) {
        *param_3 = *param_3 - 1;
      }
    }
    if (*param_3 + 1 == param_3[1]) {
      *(longlong **)(param_3 + 0x1a) = param_1;
      uVar9 = param_2[1];
      *(undefined8 *)(param_3 + 2) = *param_2;
      *(undefined8 *)(param_3 + 4) = uVar9;
      uVar9 = param_2[3];
      *(undefined8 *)(param_3 + 6) = param_2[2];
      *(undefined8 *)(param_3 + 8) = uVar9;
      uVar9 = param_2[5];
      *(undefined8 *)(param_3 + 10) = param_2[4];
      *(undefined8 *)(param_3 + 0xc) = uVar9;
      uVar9 = param_2[7];
      *(undefined8 *)(param_3 + 0xe) = param_2[6];
      *(undefined8 *)(param_3 + 0x10) = uVar9;
      uVar9 = param_2[9];
      *(undefined8 *)(param_3 + 0x12) = param_2[8];
      *(undefined8 *)(param_3 + 0x14) = uVar9;
      uVar9 = param_2[0xb];
      *(undefined8 *)(param_3 + 0x16) = param_2[10];
      *(undefined8 *)(param_3 + 0x18) = uVar9;
    }
  }
  else {
    if (iVar7 == 2) {
      bVar5 = false;
      do {
        lVar11 = lVar11 + 1;
      } while (_Str1[lVar11] != '\0');
      if (lVar11 != 0) {
        if (*param_3 + 1 < param_3[1]) {
          *param_3 = *param_3 + 1;
        }
        bVar5 = true;
      }
      iVar7 = (**(code **)(*plVar2 + 0xf0))(plVar2);
      if (0 < iVar7) {
        do {
          Handle::set(param_2,iVar8);
          findParameter(param_1,param_2,param_3,0);
          if (0 < *(int *)((longlong)param_2 + 4)) {
            *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 4) + -1;
            uVar9 = (**(code **)(*(longlong *)param_2[9] + 0x38))();
            param_2[9] = uVar9;
          }
          cVar6 = ParameterFind::done(param_3);
        } while ((cVar6 == '\0') && (iVar8 = iVar8 + 1, iVar8 < iVar7));
      }
      if (bVar5) {
        if (*param_3 != 0) {
          *param_3 = *param_3 - 1;
          return;
        }
        return;
      }
      return;
    }
    if (iVar7 == 1) {
      (**(code **)(*(longlong *)param_2[0xb] + 0x3c8))((longlong *)param_2[0xb],param_2,local_b8,0);
      uVar1 = param_3[(ulonglong)*param_3 + 0x15e];
      if (uVar1 != 0xffffffff) {
        if ((-1 < (int)uVar1) && ((int)uVar1 < local_b8[0])) {
          Handle::set(param_2);
          if (*param_3 + 1 == param_3[1]) {
            *(longlong **)(param_3 + 0x1a) = param_1;
            uVar9 = param_2[1];
            *(undefined8 *)(param_3 + 2) = *param_2;
            *(undefined8 *)(param_3 + 4) = uVar9;
            uVar9 = param_2[3];
            *(undefined8 *)(param_3 + 6) = param_2[2];
            *(undefined8 *)(param_3 + 8) = uVar9;
            uVar9 = param_2[5];
            *(undefined8 *)(param_3 + 10) = param_2[4];
            *(undefined8 *)(param_3 + 0xc) = uVar9;
            uVar9 = param_2[7];
            *(undefined8 *)(param_3 + 0xe) = param_2[6];
            *(undefined8 *)(param_3 + 0x10) = uVar9;
            uVar1 = *(uint *)((longlong)param_2 + 0x44);
            uVar3 = *(uint *)(param_2 + 9);
            uVar4 = *(uint *)((longlong)param_2 + 0x4c);
            param_3[0x12] = *(uint *)(param_2 + 8);
            param_3[0x13] = uVar1;
            param_3[0x14] = uVar3;
            param_3[0x15] = uVar4;
            uVar9 = param_2[0xb];
            *(undefined8 *)(param_3 + 0x16) = param_2[10];
            *(undefined8 *)(param_3 + 0x18) = uVar9;
          }
          else {
            findParameter(param_1,param_2,param_3,1);
          }
          if (0 < *(int *)((longlong)param_2 + 4)) {
            *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 4) + -1;
            uVar9 = (**(code **)(*(longlong *)param_2[9] + 0x38))();
            param_2[9] = uVar9;
            return;
          }
          return;
        }
LAB_14062df8e:
        *(undefined1 *)(param_3 + 0x1c) = 1;
        return;
      }
      if (*param_3 + 1 != param_3[1]) goto LAB_14062df8e;
      goto LAB_14062de3b;
    }
  }
  if (*param_3 + 1 != param_3[1]) {
    return;
  }
LAB_14062de3b:
  *(longlong **)(param_3 + 0x1a) = param_1;
  uVar9 = param_2[1];
  *(undefined8 *)(param_3 + 2) = *param_2;
  *(undefined8 *)(param_3 + 4) = uVar9;
  uVar9 = param_2[3];
  *(undefined8 *)(param_3 + 6) = param_2[2];
  *(undefined8 *)(param_3 + 8) = uVar9;
  uVar9 = param_2[5];
  *(undefined8 *)(param_3 + 10) = param_2[4];
  *(undefined8 *)(param_3 + 0xc) = uVar9;
  uVar9 = param_2[7];
  *(undefined8 *)(param_3 + 0xe) = param_2[6];
  *(undefined8 *)(param_3 + 0x10) = uVar9;
  uVar9 = param_2[9];
  *(undefined8 *)(param_3 + 0x12) = param_2[8];
  *(undefined8 *)(param_3 + 0x14) = uVar9;
  uVar9 = param_2[0xb];
  *(undefined8 *)(param_3 + 0x16) = param_2[10];
  *(undefined8 *)(param_3 + 0x18) = uVar9;
  return;
}



// FUNCTION 14062e020 isFinite body=108 status=ok
// SIG undefined isFinite(void)

undefined4 physx::PxQuat::isFinite(float *param_1)

{
  uint uVar1;
  
  uVar1 = _fpclass((double)*param_1);
  if ((uVar1 & 0x207) == 0) {
    uVar1 = _fpclass((double)param_1[1]);
    if ((uVar1 & 0x207) == 0) {
      uVar1 = _fpclass((double)param_1[2]);
      if ((uVar1 & 0x207) == 0) {
        uVar1 = _fpclass((double)param_1[3]);
        if ((uVar1 & 0x207) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14062e090 FUN_14062e090 body=198 status=ok
// SIG undefined FUN_14062e090(void)

undefined4 FUN_14062e090(float *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = _fpclass((double)param_1[4]);
  if ((uVar2 & 0x207) == 0) {
    uVar2 = _fpclass((double)param_1[5]);
    if ((uVar2 & 0x207) == 0) {
      uVar2 = _fpclass((double)param_1[6]);
      if ((uVar2 & 0x207) == 0) {
        cVar1 = physx::PxQuat::isFinite(param_1);
        if (cVar1 != '\0') {
          cVar1 = physx::PxQuat::isFinite(param_1);
          if ((cVar1 != '\0') &&
             (ABS(SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2] +
                       param_1[3] * param_1[3]) - 1.0) < 0.0001)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14062e160 set body=183 status=ok
// SIG undefined set(void)

undefined8 NvParameterized::Handle::set(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))();
  if (iVar2 == 1) {
    if ((-1 < param_2) &&
       ((cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xd0))(), cVar1 == '\0' ||
        (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 200))
                           (*(longlong **)(param_1 + 0x48),0), param_2 < iVar2)))) {
      iVar2 = 0;
      goto LAB_14062e1d6;
    }
  }
  else {
    if (iVar2 != 2) {
      return 8;
    }
    if ((-1 < param_2) &&
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xf0))(), iVar2 = param_2,
       param_2 < iVar3)) {
LAB_14062e1d6:
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x100))
                        (*(longlong **)(param_1 + 0x48),iVar2);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      if (*(int *)(param_1 + 4) < 0x10) {
        *(int *)(param_1 + (longlong)*(int *)(param_1 + 4) * 4 + 8) = param_2;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      *param_1 = 1;
      return 0;
    }
  }
  return 2;
}



// FUNCTION 14062e220 setParamBool body=179 status=ok
// SIG undefined setParamBool(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool NvParameterized::setParamBool(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  ushort local_88 [2];
  undefined4 local_84;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_84 = 0;
  local_40 = 0;
  local_38 = 0;
  local_88[0] = 0;
  iVar1 = 3;
  local_30 = param_1;
  local_40 = (**(code **)(*param_1 + 0x78))();
  local_30 = (longlong *)findParam(param_1,param_2,local_88);
  local_88[0] = local_88[0] & 0xff;
  if (local_30 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_30 + 0xd8))(local_30,local_88,param_3);
  }
  return iVar1 == 0;
}



// FUNCTION 14062e2e0 setParamF32 body=181 status=ok
// SIG undefined setParamF32(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool NvParameterized::setParamF32(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  ushort local_98 [2];
  undefined4 local_94;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_94 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98[0] = 0;
  iVar1 = 3;
  local_40 = param_1;
  local_50 = (**(code **)(*param_1 + 0x78))();
  local_40 = (longlong *)findParam(param_1,param_2,local_98);
  local_98[0] = local_98[0] & 0xff;
  if (local_40 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_40 + 600))(local_40,local_98,param_3);
  }
  return iVar1 == 0;
}



// FUNCTION 14062e3a0 setParamI32 body=177 status=ok
// SIG undefined setParamI32(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool NvParameterized::setParamI32(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  ushort local_88 [2];
  undefined4 local_84;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_84 = 0;
  local_40 = 0;
  local_38 = 0;
  local_88[0] = 0;
  iVar1 = 3;
  local_30 = param_1;
  local_40 = (**(code **)(*param_1 + 0x78))();
  local_30 = (longlong *)findParam(param_1,param_2,local_88);
  local_88[0] = local_88[0] & 0xff;
  if (local_30 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_30 + 0x198))(local_30,local_88,param_3);
  }
  return iVar1 == 0;
}



// FUNCTION 14062e460 setParamU32 body=177 status=ok
// SIG undefined setParamU32(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool NvParameterized::setParamU32(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  ushort local_88 [2];
  undefined4 local_84;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_84 = 0;
  local_40 = 0;
  local_38 = 0;
  local_88[0] = 0;
  iVar1 = 3;
  local_30 = param_1;
  local_40 = (**(code **)(*param_1 + 0x78))();
  local_30 = (longlong *)findParam(param_1,param_2,local_88);
  local_88[0] = local_88[0] & 0xff;
  if (local_30 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_30 + 0x218))(local_30,local_88,param_3);
  }
  return iVar1 == 0;
}



// FUNCTION 14062e520 setParamU64 body=177 status=ok
// SIG undefined setParamU64(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool NvParameterized::setParamU64(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  ushort local_88 [2];
  undefined4 local_84;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_84 = 0;
  local_40 = 0;
  local_38 = 0;
  local_88[0] = 0;
  iVar1 = 3;
  local_30 = param_1;
  local_40 = (**(code **)(*param_1 + 0x78))();
  local_30 = (longlong *)findParam(param_1,param_2,local_88);
  local_88[0] = local_88[0] & 0xff;
  if (local_30 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_30 + 0x238))(local_30,local_88,param_3);
  }
  return iVar1 == 0;
}



// FUNCTION 14062e5e0 FUN_14062e5e0 body=53 status=ok
// SIG undefined FUN_14062e5e0(void)

void FUN_14062e5e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_14401e248;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062e640 FUN_14062e640 body=47 status=ok
// SIG undefined FUN_14062e640(void)

longlong FUN_14062e640(void)

{
  if (DAT_146856200 == 0) {
    FUN_141786440(&DAT_146856200,&PTR_GetPrivateStaticClass_14401b9c0);
  }
  return DAT_146856200;
}



// FUNCTION 14062e670 FUN_14062e670 body=47 status=ok
// SIG undefined FUN_14062e670(void)

longlong FUN_14062e670(void)

{
  if (DAT_1468561d8 == 0) {
    FUN_141786a30(&DAT_1468561d8,&PTR_FUN_14621a580);
  }
  return DAT_1468561d8;
}



// FUNCTION 14062e6a0 FUN_14062e6a0 body=47 status=ok
// SIG undefined FUN_14062e6a0(void)

longlong FUN_14062e6a0(void)

{
  if (DAT_1468561e0 == 0) {
    FUN_141786a30(&DAT_1468561e0,&PTR_FUN_14621a6f0);
  }
  return DAT_1468561e0;
}



// FUNCTION 14062e6d0 FUN_14062e6d0 body=47 status=ok
// SIG undefined FUN_14062e6d0(void)

longlong FUN_14062e6d0(void)

{
  if (DAT_1468561e8 == 0) {
    FUN_141786a30(&DAT_1468561e8,&PTR_FUN_14621a770);
  }
  return DAT_1468561e8;
}



// FUNCTION 14062e700 FUN_14062e700 body=47 status=ok
// SIG undefined FUN_14062e700(void)

longlong FUN_14062e700(void)

{
  if (DAT_1468561f0 == 0) {
    FUN_141786a30(&DAT_1468561f0,&PTR_FUN_14621a7f0);
  }
  return DAT_1468561f0;
}



// FUNCTION 14062e730 FUN_14062e730 body=47 status=ok
// SIG undefined FUN_14062e730(void)

longlong FUN_14062e730(void)

{
  if (DAT_1468561f8 == 0) {
    FUN_141786a30(&DAT_1468561f8,&PTR_FUN_14621a870);
  }
  return DAT_1468561f8;
}



// FUNCTION 14062e770 FUN_14062e770 body=47 status=ok
// SIG undefined FUN_14062e770(void)

longlong FUN_14062e770(void)

{
  if (DAT_1468561b0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8);
  }
  return DAT_1468561b0;
}



// FUNCTION 14062e7a0 FUN_14062e7a0 body=162 status=ok
// SIG undefined FUN_14062e7a0(void)

longlong FUN_14062e7a0(void)

{
  if (DAT_1468561c8 == 0) {
    FUN_14171ccd0(L"/Script/ApexDestruction",L"DestructibleActor",&DAT_1468561c8,FUN_140447710,0x478
                  ,0x10000004,0,L"Engine",&LAB_14062ecf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468561c8;
}



// FUNCTION 14062e850 FUN_14062e850 body=151 status=ok
// SIG undefined FUN_14062e850(void)

longlong FUN_14062e850(void)

{
  if (DAT_146856240 == 0) {
    FUN_14171ccd0(L"/Script/ApexDestruction",L"DestructibleFractureSettings",&DAT_146856240,
                  FUN_140447710,0xc0,0x10000000,0,L"Engine",&LAB_14062ed30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146856240;
}



// FUNCTION 14062e900 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = &PTR_FUN_14401d830;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 14062e940 FUN_14062e940 body=53 status=ok
// SIG undefined FUN_14062e940(void)

void FUN_14062e940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_14401d948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062e990 FUN_14062e990 body=162 status=ok
// SIG undefined FUN_14062e990(void)

longlong FUN_14062e990(void)

{
  if (DAT_146856308 == 0) {
    FUN_14171ccd0(L"/Script/ApexDestruction",L"DestructibleMesh",&DAT_146856308,FUN_140447710,0x470,
                  0x10000000,0,L"Engine",&LAB_14062ed50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USkeleton::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146856308;
}



// FUNCTION 14062ea40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGGameModeButtonListItemContent::GetPrivateStaticClass(void)

{
  if (DAT_146856208 == 0) {
    FUN_14171ccd0(L"/Script/ApexDestruction",L"DestructibleComponent",&DAT_146856208,FUN_14062f850,
                  0xb40,0x10000000,0,L"Engine",&LAB_14062ed10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14062f840,&LAB_140447700,0);
  }
  return DAT_146856208;
}



// FUNCTION 14062eaf0 FUN_14062eaf0 body=53 status=ok
// SIG undefined FUN_14062eaf0(void)

void FUN_14062eaf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14401daa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14062eb30 FUN_14062eb30 body=53 status=ok
// SIG undefined FUN_14062eb30(void)

void FUN_14062eb30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &PTR_FUN_14401dbb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14062eb70 FUN_14062eb70 body=53 status=ok
// SIG undefined FUN_14062eb70(void)

void FUN_14062eb70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_14401dcd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062ebb0 FUN_14062ebb0 body=53 status=ok
// SIG undefined FUN_14062ebb0(void)

void FUN_14062ebb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143f61bc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062ebf0 FUN_14062ebf0 body=53 status=ok
// SIG undefined FUN_14062ebf0(void)

void FUN_14062ebf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &PTR_FUN_14401dde8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062ec30 FUN_14062ec30 body=53 status=ok
// SIG undefined FUN_14062ec30(void)

void FUN_14062ec30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14401df00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062ec70 FUN_14062ec70 body=53 status=ok
// SIG undefined FUN_14062ec70(void)

void FUN_14062ec70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_14401e018;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14062ecb0 FUN_14062ecb0 body=53 status=ok
// SIG undefined FUN_14062ecb0(void)

void FUN_14062ecb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14401e130;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14062ed70 FUN_14062ed70 body=281 status=ok
// SIG undefined FUN_14062ed70(void)

undefined4 * FUN_14062ed70(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3dcccccd;
  *(undefined8 *)(param_1 + 2) = 0x3f800000;
  param_1[4] = 0x3f800000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 6) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x41200000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x41200000;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined8 *)(param_1 + 0xe) = 0xc8f42400c8f42400;
  param_1[0x10] = 0xc8f42400;
  *(undefined8 *)(param_1 + 0x11) = 0x48f4240048f42400;
  param_1[0x13] = 0x48f42400;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = param_1[0x22] & 0xfffffe00;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  param_1[0x29] = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x2a) = 10;
  param_1[0x2b] = 0x40800000;
  *(undefined8 *)(param_1 + 0x2c) = 0x40800000;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  return param_1;
}



// FUNCTION 14062ee90 ~TBaseDelegate<FText> body=100 status=ok
// SIG undefined ~TBaseDelegate<FText>(void)

void TBaseDelegate<FText>::~TBaseDelegate<FText>(longlong *param_1)

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



// FUNCTION 14062ef00 FUN_14062ef00 body=161 status=ok
// SIG undefined FUN_14062ef00(void)

undefined8 * FUN_14062ef00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14062f050 Construct body=108 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FDestructibleDebrisParameters>::Construct
               (undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  param_2[1] = 0x41200000;
  param_2[2] = 0x3f800000;
  param_2[3] = 0x41200000;
  *(undefined8 *)(param_2 + 4) = 0xc8f42400c8f42400;
  param_2[6] = 0xc8f42400;
  *(undefined8 *)(param_2 + 7) = 0x48f4240048f42400;
  param_2[9] = 0x48f42400;
  *(undefined1 *)(param_2 + 10) = 1;
  return;
}



// FUNCTION 14062f0c0 FUN_14062f0c0 body=38 status=ok
// SIG undefined FUN_14062f0c0(void)

void FUN_14062f0c0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,200);
  FUN_14062ed70(param_2);
  return;
}



// FUNCTION 14062f170 FUN_14062f170 body=238 status=ok
// SIG undefined FUN_14062f170(void)

undefined8 FUN_14062f170(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 0x10);
    do {
      if (param_2 != (undefined8 *)(puVar3 + -0x10)) {
        iVar2 = *(int *)(puVar3 + -8);
        _Src = *(void **)(puVar3 + -0x10);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 0x1c);
        }
      }
      *(undefined1 *)(param_2 + 2) = *puVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(puVar3 + 4);
      *(undefined1 *)(param_2 + 3) = puVar3[8];
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(puVar3 + 0xc);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar3 + 0x10);
      *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(puVar3 + 0x14);
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar3 + 0x18);
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(puVar3 + 0x1c);
      puVar1 = (undefined4 *)(puVar3 + 0x20);
      puVar3 = puVar3 + 0x38;
      *(undefined4 *)(param_2 + 6) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14062f320 FUN_14062f320 body=325 status=ok
// SIG undefined FUN_14062f320(void)

undefined8 FUN_14062f320(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_3 + 0x28);
    do {
      uVar8 = puVar9[-4];
      *param_2 = puVar9[-5];
      param_2[1] = uVar8;
      puVar1 = param_2 + 0xf;
      uVar8 = puVar9[-2];
      param_2[2] = puVar9[-3];
      param_2[3] = uVar8;
      param_2[4] = puVar9[-1];
      uVar8 = puVar9[1];
      param_2[5] = *puVar9;
      param_2[6] = uVar8;
      uVar5 = *(undefined4 *)((longlong)puVar9 + 0x14);
      uVar6 = *(undefined4 *)(puVar9 + 3);
      uVar7 = *(undefined4 *)((longlong)puVar9 + 0x1c);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar9 + 2);
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
      *(undefined4 *)(param_2 + 8) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0x44) = uVar7;
      param_2[9] = puVar9[4];
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar9 + 5);
      uVar8 = *(undefined8 *)((longlong)puVar9 + 0x34);
      *(undefined8 *)((longlong)param_2 + 0x54) = *(undefined8 *)((longlong)puVar9 + 0x2c);
      *(undefined8 *)((longlong)param_2 + 0x5c) = uVar8;
      uVar5 = *(undefined4 *)(puVar9 + 8);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0x44);
      uVar7 = *(undefined4 *)(puVar9 + 9);
      *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)((longlong)puVar9 + 0x3c);
      *(undefined4 *)(param_2 + 0xd) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0x6c) = uVar6;
      *(undefined4 *)(param_2 + 0xe) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0x74) = *(undefined4 *)((longlong)puVar9 + 0x4c);
      if (puVar1 != puVar9 + 10) {
        iVar10 = *(int *)(puVar9 + 0xb);
        puVar3 = (undefined1 *)puVar9[10];
        *(int *)(param_2 + 0x10) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0x84) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x84) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar10);
          puVar4 = (undefined1 *)*puVar1;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar4 = uVar2;
            puVar4 = puVar4 + 1;
          }
        }
      }
      *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(puVar9 + 0xc);
      FUN_14062ef00(param_2 + 0x12,puVar9 + 0xd);
      puVar9 = puVar9 + 0x19;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x19;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14062f4e0 FUN_14062f4e0 body=51 status=ok
// SIG undefined FUN_14062f4e0(void)

void FUN_14062f4e0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14062f520 FUN_14062f520 body=85 status=ok
// SIG undefined FUN_14062f520(void)

void FUN_14062f520(void)

{
  if (DAT_146856150 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    DAT_146856150 = GetStaticEnum(FUN_14062fff0,DAT_1468561b0,L"EApexConvexHullMethod");
  }
  return;
}



// FUNCTION 14062f580 EImpactDamageOverride_StaticEnum body=85 status=ok
// SIG undefined EImpactDamageOverride_StaticEnum(void)

void EImpactDamageOverride_StaticEnum(void)

{
  if (DAT_146856158 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    DAT_146856158 = GetStaticEnum(FUN_140630020,DAT_1468561b0,L"EImpactDamageOverride");
  }
  return;
}



// FUNCTION 14062f5e0 Get_Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_CRC(void)

{
  return 0xaf744bf2;
}



// FUNCTION 14062f5f0 FUN_14062f5f0 body=6 status=ok
// SIG undefined FUN_14062f5f0(void)

undefined8 FUN_14062f5f0(void)

{
  return 0xe579ee15;
}



// FUNCTION 14062f600 FUN_14062f600 body=6 status=ok
// SIG undefined FUN_14062f600(void)

undefined8 FUN_14062f600(void)

{
  return 0x21c24efa;
}



// FUNCTION 14062f610 FUN_14062f610 body=6 status=ok
// SIG undefined FUN_14062f610(void)

undefined8 FUN_14062f610(void)

{
  return 0x6f5b2326;
}



// FUNCTION 14062f620 FUN_14062f620 body=6 status=ok
// SIG undefined FUN_14062f620(void)

undefined8 FUN_14062f620(void)

{
  return 0xa2d35387;
}



// FUNCTION 14062f630 Get_Z_Construct_UScriptStruct_FDestructibleDebrisParameters_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDestructibleDebrisParameters_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDestructibleDebrisParameters_CRC(void)

{
  return 0x1c0defbc;
}



// FUNCTION 14062f640 Get_Z_Construct_UScriptStruct_FDestructibleDepthParameters_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDestructibleDepthParameters_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDestructibleDepthParameters_CRC(void)

{
  return 0xd88a1913;
}



// FUNCTION 14062f650 Get_Z_Construct_UScriptStruct_FDestructibleParametersFlag_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDestructibleParametersFlag_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDestructibleParametersFlag_CRC(void)

{
  return 0x366206d2;
}



// FUNCTION 14062f660 FUN_14062f660 body=6 status=ok
// SIG undefined FUN_14062f660(void)

undefined8 FUN_14062f660(void)

{
  return 0x71ef2f58;
}



// FUNCTION 14062f670 Get_Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_CRC(void)

{
  return 0x57e77761;
}



// FUNCTION 14062f680 Get_Z_Construct_UScriptStruct_FFractureMaterial_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFractureMaterial_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFractureMaterial_CRC(void)

{
  return 0xb7a257bf;
}



// FUNCTION 14062f690 FUN_14062f690 body=6 status=ok
// SIG undefined FUN_14062f690(void)

undefined8 FUN_14062f690(void)

{
  return 0xcd337cbd;
}



// FUNCTION 14062f6a0 FUN_14062f6a0 body=6 status=ok
// SIG undefined FUN_14062f6a0(void)

undefined8 FUN_14062f6a0(void)

{
  return 0xa7790125;
}



// FUNCTION 14062f7c0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_140629850(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14062f830 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void USkeleton::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14062f850 FUN_14062f850 body=34 status=ok
// SIG undefined FUN_14062f850(void)

void FUN_14062f850(void)

{
  undefined8 uVar1;
  
  uVar1 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyDamage_14401d730,5);
  return;
}



// FUNCTION 14062f880 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDestructibleAdvancedParameters::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856280 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_CRC();
    DAT_146856280 =
         GetStaticStruct(FUN_140630050,lVar1,L"DestructibleAdvancedParameters",0x10,uVar2);
  }
  return;
}



// FUNCTION 14062f900 FUN_14062f900 body=113 status=ok
// SIG undefined FUN_14062f900(void)

void FUN_14062f900(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468562d0 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f5f0();
    DAT_1468562d0 =
         GetStaticStruct(FUN_140630080,lVar1,L"DestructibleApexCollisionVolumeParameters",0x38,uVar2
                        );
  }
  return;
}



// FUNCTION 14062f980 FUN_14062f980 body=113 status=ok
// SIG undefined FUN_14062f980(void)

void FUN_14062f980(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468562e0 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f600();
    DAT_1468562e0 =
         GetStaticStruct(FUN_1406300b0,lVar1,L"DestructibleApexDepthCollisionVolumeParameters",0x1c,
                         uVar2);
  }
  return;
}



// FUNCTION 14062fa00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAssetRegistryDependencyOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856218 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f610();
    DAT_146856218 = GetStaticStruct(FUN_1406300e0,lVar1,L"DestructibleChunkParameters",5,uVar2);
  }
  return;
}



// FUNCTION 14062fa80 FUN_14062fa80 body=113 status=ok
// SIG undefined FUN_14062fa80(void)

void FUN_14062fa80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468562a0 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f620();
    DAT_1468562a0 = GetStaticStruct(FUN_140630110,lVar1,L"DestructibleDamageParameters",0x28,uVar2);
  }
  return;
}



// FUNCTION 14062fb00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDestructibleDebrisParameters::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856290 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FDestructibleDebrisParameters_CRC();
    DAT_146856290 = GetStaticStruct(FUN_140630140,lVar1,L"DestructibleDebrisParameters",0x2c,uVar2);
  }
  return;
}



// FUNCTION 14062fb80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDestructibleDepthParameters::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468562c0 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FDestructibleDepthParameters_CRC();
    DAT_1468562c0 = GetStaticStruct(FUN_140630170,lVar1,L"DestructibleDepthParameters",1,uVar2);
  }
  return;
}



// FUNCTION 14062fc00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListBase::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856260 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f660();
    DAT_146856260 = GetStaticStruct(FUN_1406301a0,lVar1,L"DestructibleParameters",200,uVar2);
  }
  return;
}



// FUNCTION 14062fc80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDestructibleParametersFlag::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468562b0 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FDestructibleParametersFlag_CRC();
    DAT_1468562b0 = GetStaticStruct(FUN_1406301d0,lVar1,L"DestructibleParametersFlag",4,uVar2);
  }
  return;
}



// FUNCTION 14062fd00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDestructibleSpecialHierarchyDepths::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856270 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_CRC();
    DAT_146856270 =
         GetStaticStruct(FUN_140630200,lVar1,L"DestructibleSpecialHierarchyDepths",0x14,uVar2);
  }
  return;
}



// FUNCTION 14062fd80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFractureMaterial::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856228 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FFractureMaterial_CRC();
    DAT_146856228 = GetStaticStruct(FUN_140630230,lVar1,L"FractureMaterial",0x24,uVar2);
  }
  return;
}



// FUNCTION 14062fe00 FUN_14062fe00 body=113 status=ok
// SIG undefined FUN_14062fe00(void)

void FUN_14062fe00(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468562f0 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f690();
    DAT_1468562f0 = GetStaticStruct(FUN_140630260,lVar1,L"MeshParentIndex",0x10,uVar2);
  }
  return;
}



// FUNCTION 14062fe80 FUN_14062fe80 body=113 status=ok
// SIG undefined FUN_14062fe80(void)

void FUN_14062fe80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146856250 == 0) {
    if (DAT_1468561b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468561b0,&PTR_s__Script_ApexDestruction_14401d6d8)
      ;
    }
    lVar1 = DAT_1468561b0;
    uVar2 = FUN_14062f6a0();
    DAT_146856250 = GetStaticStruct(FUN_140630290,lVar1,L"PosableDestructibleChunkInfo",0x18,uVar2);
  }
  return;
}



// FUNCTION 14062ff00 FUN_14062ff00 body=47 status=ok
// SIG undefined FUN_14062ff00(void)

longlong FUN_14062ff00(void)

{
  if (DAT_1468561c0 == 0) {
    FUN_141786440(&DAT_1468561c0,&PTR_FUN_14401bcc0);
  }
  return DAT_1468561c0;
}



// FUNCTION 14062ff30 FUN_14062ff30 body=47 status=ok
// SIG undefined FUN_14062ff30(void)

longlong FUN_14062ff30(void)

{
  if (DAT_146856238 == 0) {
    FUN_141786440(&DAT_146856238,&PTR_FUN_14401c330);
  }
  return DAT_146856238;
}



// FUNCTION 14062ff60 FUN_14062ff60 body=47 status=ok
// SIG undefined FUN_14062ff60(void)

longlong FUN_14062ff60(void)

{
  if (DAT_146856300 == 0) {
    FUN_141786440(&DAT_146856300,&PTR_FUN_14401b4e0);
  }
  return DAT_146856300;
}



// FUNCTION 14062ff90 FUN_14062ff90 body=47 status=ok
// SIG undefined FUN_14062ff90(void)

longlong FUN_14062ff90(void)

{
  if (DAT_1468561b8 == 0) {
    FUN_141786a30(&DAT_1468561b8,&PTR_FUN_14621a2a0);
  }
  return DAT_1468561b8;
}



// FUNCTION 14062ffc0 FUN_14062ffc0 body=47 status=ok
// SIG undefined FUN_14062ffc0(void)

longlong FUN_14062ffc0(void)

{
  if (DAT_1468561d0 == 0) {
    FUN_141786a30(&DAT_1468561d0,&PTR_FUN_14621a450);
  }
  return DAT_1468561d0;
}



// FUNCTION 14062fff0 FUN_14062fff0 body=47 status=ok
// SIG undefined FUN_14062fff0(void)

longlong FUN_14062fff0(void)

{
  if (DAT_146856210 == 0) {
    FUN_1417866a0(&DAT_146856210,&PTR_FUN_14621c5b0);
  }
  return DAT_146856210;
}



// FUNCTION 140630020 FUN_140630020 body=47 status=ok
// SIG undefined FUN_140630020(void)

longlong FUN_140630020(void)

{
  if (DAT_146856248 == 0) {
    FUN_1417866a0(&DAT_146856248,&PTR_FUN_14621c600);
  }
  return DAT_146856248;
}



// FUNCTION 140630050 FUN_140630050 body=47 status=ok
// SIG undefined FUN_140630050(void)

longlong FUN_140630050(void)

{
  if (DAT_146856288 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856288,&PTR_FUN_14621b6d0);
  }
  return DAT_146856288;
}



// FUNCTION 140630080 FUN_140630080 body=47 status=ok
// SIG undefined FUN_140630080(void)

longlong FUN_140630080(void)

{
  if (DAT_1468562d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468562d8,&PTR_FUN_14621c250);
  }
  return DAT_1468562d8;
}



// FUNCTION 1406300b0 FUN_1406300b0 body=47 status=ok
// SIG undefined FUN_1406300b0(void)

longlong FUN_1406300b0(void)

{
  if (DAT_1468562e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468562e8,&PTR_FUN_14621c350);
  }
  return DAT_1468562e8;
}



// FUNCTION 1406300e0 FUN_1406300e0 body=47 status=ok
// SIG undefined FUN_1406300e0(void)

longlong FUN_1406300e0(void)

{
  if (DAT_146856220 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856220,&PTR_FUN_14621ade0);
  }
  return DAT_146856220;
}



// FUNCTION 140630110 FUN_140630110 body=47 status=ok
// SIG undefined FUN_140630110(void)

longlong FUN_140630110(void)

{
  if (DAT_1468562a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468562a8,&PTR_FUN_14621bad0);
  }
  return DAT_1468562a8;
}



// FUNCTION 140630140 FUN_140630140 body=47 status=ok
// SIG undefined FUN_140630140(void)

longlong FUN_140630140(void)

{
  if (DAT_146856298 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856298,&PTR_FUN_14621b800);
  }
  return DAT_146856298;
}



// FUNCTION 140630170 FUN_140630170 body=47 status=ok
// SIG undefined FUN_140630170(void)

longlong FUN_140630170(void)

{
  if (DAT_1468562c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468562c8,&PTR_FUN_14621c090);
  }
  return DAT_1468562c8;
}



// FUNCTION 1406301a0 FUN_1406301a0 body=47 status=ok
// SIG undefined FUN_1406301a0(void)

longlong FUN_1406301a0(void)

{
  if (DAT_146856268 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856268,&PTR_FUN_14621b400);
  }
  return DAT_146856268;
}



// FUNCTION 1406301d0 FUN_1406301d0 body=47 status=ok
// SIG undefined FUN_1406301d0(void)

longlong FUN_1406301d0(void)

{
  if (DAT_1468562b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468562b8,&PTR_FUN_14621bfd0);
  }
  return DAT_1468562b8;
}



// FUNCTION 140630200 FUN_140630200 body=47 status=ok
// SIG undefined FUN_140630200(void)

longlong FUN_140630200(void)

{
  if (DAT_146856278 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856278,&PTR_FUN_14621b570);
  }
  return DAT_146856278;
}



// FUNCTION 140630230 FUN_140630230 body=47 status=ok
// SIG undefined FUN_140630230(void)

longlong FUN_140630230(void)

{
  if (DAT_146856230 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856230,&PTR_FUN_14621af20);
  }
  return DAT_146856230;
}



// FUNCTION 140630260 FUN_140630260 body=47 status=ok
// SIG undefined FUN_140630260(void)

longlong FUN_140630260(void)

{
  if (DAT_1468562f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468562f8,&PTR_FUN_14621c410);
  }
  return DAT_1468562f8;
}



// FUNCTION 140630290 FUN_140630290 body=47 status=ok
// SIG undefined FUN_140630290(void)

longlong FUN_140630290(void)

{
  if (DAT_146856258 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146856258,&PTR_FUN_14621b1c0);
  }
  return DAT_146856258;
}



// FUNCTION 1406302c0 FUN_1406302c0 body=367 status=ok
// SIG undefined FUN_1406302c0(void)

void FUN_1406302c0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_38;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res8[0] = 0;
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*(longlong *)(param_1 + 0xa30) + 0x10))
            ((longlong *)(param_1 + 0xa30),local_res10[0],puVar1,puVar2,local_res8[0]);
  return;
}



// FUNCTION 140630430 FUN_140630430 body=424 status=ok
// SIG undefined FUN_140630430(void)

void FUN_140630430(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [24];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res20[0] = 0;
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*(longlong *)(param_1 + 0xa30) + 0x18))
            ((longlong *)(param_1 + 0xa30),local_38[0],puVar1,local_res20[0],local_res10[0],
             local_res8[0] != 0);
  return;
}



// FUNCTION 1406305e0 FUN_1406305e0 body=44 status=ok
// SIG undefined FUN_1406305e0(void)

void FUN_1406305e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140626d60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140630610 FUN_140630610 body=128 status=ok
// SIG undefined FUN_140630610(void)

void FUN_140630610(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14062bfc0(param_1,local_res10);
  return;
}



// FUNCTION 140630690 FUN_140630690 body=128 status=ok
// SIG undefined FUN_140630690(void)

void FUN_140630690(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14062c0a0(param_1,local_res10);
  return;
}



// FUNCTION 140630710 FUN_140630710 body=110 status=ok
// SIG undefined FUN_140630710(void)

void FUN_140630710(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  longlong lVar5;
  
  lVar1 = DAT_146856338;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_140630758;
    }
  }
  lVar5 = 0;
LAB_140630758:
  if ((*(int *)(lVar5 + lVar1) != 0) && (*(char *)(param_1 + 0x10) == '\0')) {
    uVar3 = FUN_1432b3f38("Borderlands 3");
    *(undefined1 *)(param_1 + 0x10) = uVar3;
  }
  return;
}



// FUNCTION 140630780 FUN_140630780 body=117 status=ok
// SIG undefined FUN_140630780(void)

undefined8 * FUN_140630780(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR_FUN_14401e430;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_1432b3fd4();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140630800 _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*> body=631 status=ok
// SIG undefined _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
::
_Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
          (longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 param_5
          ,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
    FUN_140632020(param_1,param_6);
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_14063087f;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_14063087f;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_14063087f:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar9 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar9[1];
    plVar7 = plVar9 + 1;
    plVar8 = plVar2 + 1;
    lVar5 = *(longlong *)plVar2[1];
    if (plVar2 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar2[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar3 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar9 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(longlong **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar8;
          plVar6 = plVar3;
          plVar7 = plVar8;
          if (plVar2 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar3;
            *plVar3 = (longlong)plVar2;
            *plVar8 = (longlong)plVar3;
            plVar9 = plVar2;
          }
          else {
            plVar9 = (longlong *)*plVar8;
            if (plVar2 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar8 = (longlong)plVar3;
              plVar9 = plVar2;
            }
            else {
              plVar9[2] = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar8 = (longlong)plVar3;
              plVar9 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar2 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
        goto LAB_140630a25;
      }
LAB_140630996:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_140630996;
      if (plVar9 == (longlong *)*plVar2) {
        _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
        ::_Rrotate(param_1,plVar2);
        plVar9 = plVar2;
      }
      *(undefined1 *)(plVar9[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar9[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar9[1] + 8);
      plVar8 = (longlong *)plVar7[2];
      plVar7[2] = *plVar8;
      if (*(char *)(*plVar8 + 0x19) == '\0') {
        *(longlong **)(*plVar8 + 8) = plVar7;
      }
      plVar8[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar8;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar8;
        }
        else {
          puVar4[2] = plVar8;
        }
      }
      *plVar8 = (longlong)plVar7;
LAB_140630a25:
      plVar7[1] = (longlong)plVar8;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 140630a80 FUN_140630a80 body=900 status=ok
// SIG undefined FUN_140630a80(void)

undefined8 *
FUN_140630a80(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong *local_res8;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  local_res8 = (longlong *)0x0;
  plVar6 = (longlong *)*param_1;
  if (param_1[1] == 0) {
    std::
    _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
    ::
    _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
              (param_1,param_2,1,plVar6,param_4,param_5);
    return param_2;
  }
  if (param_3 == (longlong *)*plVar6) {
    iVar5 = FName::Compare(param_4,param_3 + 4);
    if (iVar5 < 0) {
LAB_140630afd:
      std::
      _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
      ::
      _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                (param_1,param_2,1,param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar6) {
    iVar5 = FName::Compare(plVar6[2] + 0x20,param_4);
    if (iVar5 < 0) {
      std::
      _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
      ::
      _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                (param_1,param_2,0,*(undefined8 *)(*param_1 + 0x10),param_4,param_5);
      return param_2;
    }
  }
  else {
    iVar5 = FName::Compare(param_4,param_3 + 4);
    if (iVar5 < 0) {
      local_res8 = param_3;
      plVar6 = (longlong *)FUN_140630f10(&local_res8);
      iVar5 = FName::Compare(*plVar6 + 0x20,param_4);
      if (iVar5 < 0) {
        if (*(char *)(local_res8[2] + 0x19) != '\0') {
          std::
          _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
          ::
          _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                    (param_1,param_2,0,local_res8,param_4,param_5);
          return param_2;
        }
        goto LAB_140630afd;
      }
    }
    iVar5 = FName::Compare(param_3 + 4,param_4);
    if (iVar5 < 0) {
      local_res8 = (longlong *)param_3[2];
      if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
        cVar1 = *(char *)(*local_res8 + 0x19);
        plVar6 = (longlong *)*local_res8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          local_res8 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar4 = (longlong *)param_3[1];
        plVar6 = param_3;
        while ((local_res8 = plVar4, cVar1 == '\0' && (plVar6 == (longlong *)local_res8[2]))) {
          cVar1 = *(char *)(local_res8[1] + 0x19);
          plVar4 = (longlong *)local_res8[1];
          plVar6 = local_res8;
        }
      }
      if ((local_res8 == (longlong *)*param_1) ||
         (iVar5 = FName::Compare(param_4,local_res8 + 4), iVar5 < 0)) {
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          std::
          _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
          ::
          _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                    (param_1,param_2,0,param_3,param_4,param_5);
          return param_2;
        }
        std::
        _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
        ::
        _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                  (param_1,param_2,1,local_res8,param_4,param_5);
        return param_2;
      }
    }
  }
  bVar9 = true;
  puVar7 = (undefined8 *)((undefined8 *)*param_1)[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x19);
  puVar2 = (undefined8 *)*param_1;
  while (cVar1 == '\0') {
    iVar5 = FName::Compare(param_4,puVar7 + 4);
    bVar9 = iVar5 < 0;
    if (iVar5 < 0) {
      puVar8 = (undefined8 *)*puVar7;
    }
    else {
      puVar8 = (undefined8 *)puVar7[2];
    }
    puVar2 = puVar7;
    puVar7 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  puVar7 = puVar2;
  if (bVar9 != false) {
    if (puVar2 == *(undefined8 **)*param_1) {
      puVar7 = (undefined8 *)
               std::
               _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
               ::
               _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                         (param_1,local_28,1,puVar2,param_4,param_5);
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_140630de5;
    }
    if (*(char *)((longlong)puVar2 + 0x19) == '\0') {
      puVar7 = (undefined8 *)*puVar2;
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar7[2] + 0x19);
        puVar8 = (undefined8 *)puVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar8[2] + 0x19);
          puVar7 = puVar8;
          puVar8 = (undefined8 *)puVar8[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
        puVar3 = (undefined8 *)puVar2[1];
        puVar8 = puVar2;
        while ((puVar7 = puVar3, cVar1 == '\0' && (puVar8 == (undefined8 *)*puVar7))) {
          cVar1 = *(char *)((longlong)puVar7[1] + 0x19);
          puVar3 = (undefined8 *)puVar7[1];
          puVar8 = puVar7;
        }
        if (*(char *)((longlong)puVar8 + 0x19) != '\0') {
          puVar7 = puVar8;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)puVar2[2];
    }
  }
  iVar5 = FName::Compare(puVar7 + 4,param_4);
  if (iVar5 < 0) {
    puVar7 = (undefined8 *)
             std::
             _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
             ::
             _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                       (param_1,local_20,bVar9,puVar2,param_4,param_5);
    puVar7 = (undefined8 *)*puVar7;
  }
  else {
    FUN_140632020(param_1,param_5);
  }
LAB_140630de5:
  *param_2 = puVar7;
  return param_2;
}



// FUNCTION 140630e10 FUN_140630e10 body=246 status=ok
// SIG undefined FUN_140630e10(void)

undefined8 * FUN_140630e10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  
  puVar3 = (undefined8 *)*param_1;
  puVar5 = puVar3;
  puVar6 = (undefined8 *)puVar3[1];
  if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
    do {
      puVar5 = puVar6;
      iVar2 = FName::Compare(puVar5 + 4,param_2);
      if (iVar2 < 0) {
        puVar6 = (undefined8 *)puVar5[2];
        puVar5 = puVar3;
      }
      else {
        puVar6 = (undefined8 *)*puVar5;
      }
      puVar3 = puVar5;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    puVar3 = (undefined8 *)*param_1;
  }
  if ((puVar5 == puVar3) || (iVar2 = FName::Compare(param_2,puVar5 + 4), iVar2 < 0)) {
    plVar4 = (longlong *)operator_new(0x40);
    *plVar4 = *param_1;
    plVar4[1] = *param_1;
    plVar4[2] = *param_1;
    *(undefined2 *)(plVar4 + 3) = 0;
    plVar4[4] = *param_2;
    plVar4[5] = param_2[1];
    lVar1 = param_2[2];
    plVar4[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar4 + 7) = 0;
    FUN_140630a80(param_1,&local_res8,puVar5,plVar4 + 4,plVar4);
    puVar5 = local_res8;
  }
  return puVar5 + 7;
}



// FUNCTION 140630f10 FUN_140630f10 body=132 status=ok
// SIG undefined FUN_140630f10(void)

longlong * FUN_140630f10(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
    *param_1 = plVar2[2];
    return param_1;
  }
  lVar3 = *plVar2;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar3 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *param_1 = lVar3;
  }
  else {
    cVar1 = *(char *)(plVar2[1] + 0x19);
    plVar5 = (longlong *)plVar2[1];
    while ((cVar1 == '\0' && (plVar2 == (longlong *)*plVar5))) {
      *param_1 = (longlong)plVar5;
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar2 = plVar5;
      plVar5 = (longlong *)plVar5[1];
    }
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      *param_1 = (longlong)plVar5;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 140630fa0 FUN_140630fa0 body=95 status=ok
// SIG undefined FUN_140630fa0(void)

undefined8 * FUN_140630fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14401e430;
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_1432b3fd4();
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140631000 FUN_140631000 body=175 status=ok
// SIG undefined FUN_140631000(void)

void FUN_140631000(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x40);
  uVar5 = (ulonglong)iVar2;
  if (0 < iVar2) {
    plVar1 = (longlong *)(param_1 + 0x38);
    lVar7 = uVar5 * 0x30;
    lVar8 = (longlong)(iVar2 + -1) * 0x30;
    lVar6 = lVar7;
    do {
      lVar6 = lVar6 + -0x30;
      FUN_1432b3f74(*(undefined4 *)(*plVar1 + 0x28 + lVar6));
      iVar2 = *(int *)(param_1 + 0x40);
      iVar3 = iVar2 - (int)uVar5;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar8),(void *)(lVar7 + *plVar1),(longlong)iVar3 * 0x30);
        iVar2 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x40) = iVar2 + -1;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
      lVar7 = lVar7 + -0x30;
      lVar8 = lVar8 + -0x30;
    } while (0 < (int)uVar4);
  }
  return;
}



// FUNCTION 1406310b0 FUN_1406310b0 body=2176 status=ok
// SIG undefined FUN_1406310b0(void)

longlong * FUN_1406310b0(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = operator_new(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b68);
  *puVar2 = 0x1e;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b80);
  *puVar2 = 0x30;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b98);
  *puVar2 = 0x2e;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9bb0);
  *puVar2 = 0x20;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9bc8);
  *puVar2 = 0x12;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9be0);
  *puVar2 = 0x21;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9bf8);
  *puVar2 = 0x22;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9c10);
  *puVar2 = 0x23;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9c28);
  *puVar2 = 0x17;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9c40);
  *puVar2 = 0x24;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9c58);
  *puVar2 = 0x25;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9c70);
  *puVar2 = 0x26;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9c88);
  *puVar2 = 0x32;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ca0);
  *puVar2 = 0x31;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9cb8);
  *puVar2 = 0x18;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9cd0);
  *puVar2 = 0x19;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ce8);
  *puVar2 = 0x10;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d00);
  *puVar2 = 0x13;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d18);
  *puVar2 = 0x1f;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d30);
  *puVar2 = 0x14;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d48);
  *puVar2 = 0x16;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d60);
  *puVar2 = 0x2f;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d78);
  *puVar2 = 0x11;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9d90);
  *puVar2 = 0x2d;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9da8);
  *puVar2 = 0x15;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9dc0);
  *puVar2 = 0x2c;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9958);
  *puVar2 = 1;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9f40);
  *puVar2 = 0x3b;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9f58);
  *puVar2 = 0x3c;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9f70);
  *puVar2 = 0x3d;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9f88);
  *puVar2 = 0x3e;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9fa0);
  *puVar2 = 0x3f;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9fb8);
  *puVar2 = 0x40;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9fd0);
  *puVar2 = 0x41;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9fe8);
  *puVar2 = 0x42;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea000);
  *puVar2 = 0x43;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea018);
  *puVar2 = 0x44;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea030);
  *puVar2 = 0x57;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea048);
  *puVar2 = 0x58;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea078);
  *puVar2 = 0x46;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9928);
  *puVar2 = 0x145;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea1f8);
  *puVar2 = 0x29;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a90);
  *puVar2 = 2;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9aa8);
  *puVar2 = 3;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ac0);
  *puVar2 = 4;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ad8);
  *puVar2 = 5;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9af0);
  *puVar2 = 6;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b08);
  *puVar2 = 7;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b20);
  *puVar2 = 8;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b38);
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9b50);
  *puVar2 = 10;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a78);
  *puVar2 = 0xb;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea198);
  *puVar2 = 0xc;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea168);
  *puVar2 = 0xd;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e98e0);
  *puVar2 = 0xe;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a48);
  *puVar2 = 0x152;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e99d0);
  *puVar2 = 0x147;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9988);
  *puVar2 = 0x149;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea060);
  *puVar2 = 0x45;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9f28);
  *puVar2 = 0x135;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ec8);
  *puVar2 = 0x37;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ef8);
  *puVar2 = 0x4a;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e98f8);
  *puVar2 = 0xf;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea210);
  *puVar2 = 0x1a;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea258);
  *puVar2 = 0x1b;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea240);
  *puVar2 = 0x2b;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a60);
  *puVar2 = 0x153;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e99b8);
  *puVar2 = 0x14f;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e99a0);
  *puVar2 = 0x151;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9ee0);
  *puVar2 = 0x4e;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9df0);
  *puVar2 = 0x4f;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e08);
  *puVar2 = 0x50;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e20);
  *puVar2 = 0x51;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e38);
  *puVar2 = 0x4b;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e50);
  *puVar2 = 0x4c;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e68);
  *puVar2 = 0x4d;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e80);
  *puVar2 = 0x47;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9e98);
  *puVar2 = 0x48;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9eb0);
  *puVar2 = 0x49;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9dd8);
  *puVar2 = 0x52;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9f10);
  *puVar2 = 0x53;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9940);
  *puVar2 = 0x3a;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea150);
  *puVar2 = 0x27;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea2a0);
  *puVar2 = 0x28;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9910);
  *puVar2 = 0x1c;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea090);
  *puVar2 = 0x2a;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea180);
  *puVar2 = 0x33;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea1c8);
  *puVar2 = 0x34;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea1e0);
  *puVar2 = 0x35;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea0a8);
  *puVar2 = 0x36;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a00);
  *puVar2 = 0x148;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e99e8);
  *puVar2 = 0x14b;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a30);
  *puVar2 = 0x150;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9a18);
  *puVar2 = 0x14d;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea120);
  *puVar2 = 0x15b;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea0c0);
  *puVar2 = 0x1d;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea0f0);
  *puVar2 = 0x38;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469e9970);
  *puVar2 = 0x39;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea108);
  *puVar2 = 0x138;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea138);
  *puVar2 = 0x15c;
  puVar2 = (undefined4 *)FUN_140630e10(param_1,&DAT_1469ea0d8);
  *puVar2 = 0x11d;
  return param_1;
}



// FUNCTION 140631930 FUN_140631930 body=244 status=ok
// SIG undefined FUN_140631930(void)

undefined8 * FUN_140631930(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)operator_new(0x48);
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = puVar4 + 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *puVar4 = &PTR_FUN_14401e3f0;
    *puVar1 = &PTR__purecall_143f740d8;
    plVar5 = (longlong *)FUN_1404cfca0();
    iVar2 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
    }
    *(undefined8 **)(*plVar5 + (longlong)iVar2 * 8) = puVar1;
    *(undefined1 *)(puVar4 + 2) = 0;
    *puVar1 = &PTR_FUN_14401e430;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    if (*(char *)(puVar4 + 2) == '\0') {
      uVar3 = FUN_1432b3f38("Borderlands 3");
      *(undefined1 *)(puVar4 + 2) = uVar3;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140631a30 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x30) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x30,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x30);
      }
      goto LAB_140631aa6;
    }
    if (iVar4 == 0) goto LAB_140631aa6;
  }
  iVar4 = iVar5;
LAB_140631aa6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x30,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140631ae0 FUN_140631ae0 body=32 status=ok
// SIG undefined FUN_140631ae0(void)

void FUN_140631ae0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = FUN_1432b3fb4(param_2);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 140631b00 FUN_140631b00 body=43 status=ok
// SIG undefined FUN_140631b00(void)

void FUN_140631b00(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = FUN_1432b3f84(param_2,param_3,param_4);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 140631b30 FUN_140631b30 body=52 status=ok
// SIG undefined FUN_140631b30(void)

void FUN_140631b30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = FUN_1432b3f94(param_2,param_3,param_4,param_5);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 140631b70 FUN_140631b70 body=52 status=ok
// SIG undefined FUN_140631b70(void)

void FUN_140631b70(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = FUN_1432b3fa4(param_2,param_3,param_4,param_5);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 140631bb0 FUN_140631bb0 body=31 status=ok
// SIG undefined FUN_140631bb0(void)

void FUN_140631bb0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = FUN_1432b3fc4(param_2);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 140631bd0 FUN_140631bd0 body=335 status=ok
// SIG undefined FUN_140631bd0(void)

void FUN_140631bd0(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != piVar1 + (longlong)*(int *)(param_1 + 0x38) * 0xc) {
    piVar4 = piVar1 + 5;
    piVar7 = piVar1;
    while ((((((*piVar7 != *param_2 || (piVar4[-4] != param_2[1])) || (piVar4[-3] != param_2[2])) ||
             (((piVar4[-2] != param_2[3] || (piVar4[-1] != param_2[4])) ||
              ((*piVar4 != param_2[5] || ((piVar4[1] != param_2[6] || (piVar4[2] != param_2[7]))))))
             )) || ((float)param_2[8] != (float)piVar4[3])) ||
           ((((piVar4[4] != param_2[9] || (piVar4[5] != param_2[10])) ||
             ((char)piVar4[6] != (char)param_2[0xb])) ||
            (*(char *)((longlong)piVar4 + 0x19) != *(char *)((longlong)param_2 + 0x2d)))))) {
      piVar7 = piVar7 + 0xc;
      piVar4 = piVar4 + 0xc;
      if (piVar7 == piVar1 + (longlong)*(int *)(param_1 + 0x38) * 0xc) {
        return;
      }
    }
    lVar5 = ((longlong)piVar7 - (longlong)piVar1) / 6 +
            ((longlong)piVar7 - (longlong)piVar1 >> 0x3f);
    iVar6 = (int)(lVar5 >> 3) - (int)(lVar5 >> 0x3f);
    if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x38))) {
      FUN_1432b3f74(param_2[10]);
      iVar3 = *(int *)(param_1 + 0x38);
      iVar2 = (iVar3 - iVar6) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar6 * 0x30 + *(longlong *)(param_1 + 0x30)),
                   (void *)((longlong)(iVar6 + 1) * 0x30 + *(longlong *)(param_1 + 0x30)),
                   (longlong)iVar2 * 0x30);
        iVar3 = *(int *)(param_1 + 0x38);
      }
      *(int *)(param_1 + 0x38) = iVar3 + -1;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1 + 0x30);
    }
  }
  return;
}



// FUNCTION 140631d20 FUN_140631d20 body=167 status=ok
// SIG undefined FUN_140631d20(void)

void FUN_140631d20(longlong param_1,float param_2)

{
  float fVar1;
  
  FUN_140631dd0();
  if (0.0 < *(float *)(param_1 + 0x2c)) {
    fVar1 = *(float *)(param_1 + 0x2c) - param_2 * 1000.0;
    *(float *)(param_1 + 0x2c) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_1432b3f64();
      return;
    }
    fVar1 = ((float)*(int *)(param_1 + 0x24) - fVar1) / (float)*(int *)(param_1 + 0x28);
    if (((int)ROUND((fVar1 + fVar1) - 0.5) & 2U) == 0) {
      FUN_1432b3f84(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                    *(undefined4 *)(param_1 + 0x14));
      return;
    }
    FUN_1432b3f84(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                  *(undefined4 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 140631dd0 FUN_140631dd0 body=577 status=ok
// SIG undefined FUN_140631dd0(void)

void FUN_140631dd0(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar5) {
    lVar4 = lVar5 * 0x30;
    do {
      fVar7 = *(float *)(lVar4 + -0x10 + *(longlong *)(param_1 + 0x30));
      piVar1 = (int *)(lVar4 + -0x30 + *(longlong *)(param_1 + 0x30));
      if ((0.0 < fVar7) || ((char)piVar1[0xb] != '\0')) {
        if ((char)piVar1[0xb] == '\0') {
          fVar7 = fVar7 - param_2 * 1000.0;
        }
        else {
          fVar7 = param_2 * 1000.0 + fVar7;
        }
        piVar1[8] = (int)fVar7;
        if (fVar7 <= 0.0) {
          if (*(char *)((longlong)piVar1 + 0x2d) != '\0') {
            fVar7 = (float)piVar1[6];
            *(undefined1 *)((longlong)piVar1 + 0x2d) = 0;
            piVar1[8] = (int)fVar7;
          }
          if (fVar7 <= 0.0) {
            FUN_140631bd0(param_1,piVar1);
            goto LAB_140631fbe;
          }
        }
        if ((char)piVar1[0xb] == '\0') {
          fVar7 = (float)piVar1[6] - fVar7;
        }
        fVar7 = fVar7 / (float)piVar1[7];
        fVar6 = (float)(int)fVar7;
        if (ABS(fVar7) < ABS((float)(int)fVar7)) {
          fVar6 = fVar7;
        }
        iVar2 = piVar1[9];
        fVar6 = fVar7 - fVar6;
        bVar3 = ~(byte)((int)ROUND((fVar7 + fVar7) - 0.5) >> 1) & 1;
        if (iVar2 == 0) {
          if (bVar3 == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = 1.0;
          }
        }
        else if (iVar2 == 1) {
          if (bVar3 != 0) {
            fVar6 = 1.0 - fVar6;
          }
        }
        else if (iVar2 == 2) {
          if (bVar3 != 0) {
            fVar6 = 1.0 - fVar6;
          }
          fVar7 = _guard_xfg_dispatch_icall_nop(fVar6);
          fVar6 = 1.0 - fVar7 * fVar7;
        }
        FUN_1432b3fa4(piVar1[10],(int)((float)(*piVar1 - piVar1[3]) * fVar6) + piVar1[3],
                      (int)((float)(piVar1[1] - piVar1[4]) * fVar6) + piVar1[4],
                      (int)((float)(piVar1[2] - piVar1[5]) * fVar6) + piVar1[5]);
      }
LAB_140631fbe:
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + -0x30;
    } while (0 < lVar5);
  }
  return;
}



// FUNCTION 140632020 FUN_140632020 body=101 status=ok
// SIG undefined FUN_140632020(void)

void FUN_140632020(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x30);
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
  FMemory::operator_delete(param_2,0x40);
  return;
}



// FUNCTION 140632090 FUN_140632090 body=154 status=ok
// SIG undefined FUN_140632090(void)

void FUN_140632090(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  cVar4 = *(char *)((longlong)param_2 + 0x19);
  while (cVar4 == '\0') {
    FUN_140632090(param_1,param_2[2]);
    plVar5 = (longlong *)param_2[6];
    plVar6 = (longlong *)*param_2;
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FMemory::operator_delete(param_2,0x40);
    param_2 = plVar6;
    cVar4 = *(char *)((longlong)plVar6 + 0x19);
  }
  return;
}



// FUNCTION 140632130 FUN_140632130 body=853 status=ok
// SIG undefined FUN_140632130(void)

longlong * FUN_140632130(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar5 = *(char *)(*plVar4 + 0x19);
    plVar7 = (longlong *)*plVar4;
    while (cVar5 == '\0') {
      cVar5 = *(char *)(*plVar7 + 0x19);
      plVar4 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar5 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar4 = plVar8, cVar5 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
      cVar5 = *(char *)(plVar4[1] + 0x19);
      plVar8 = (longlong *)plVar4[1];
      plVar7 = plVar4;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar7[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar7 = plVar4;
    if (plVar4 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar4[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      puVar2 = (undefined8 *)param_2[1];
      if ((longlong *)*puVar2 == param_2) {
        *puVar2 = plVar4;
      }
      else {
        puVar2[2] = plVar4;
      }
    }
    plVar4[1] = param_2[1];
    cVar5 = (char)plVar4[3];
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = cVar5;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar5 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar3 = plVar4, cVar5 == '\0') {
          plVar4 = (longlong *)*plVar3;
          cVar5 = *(char *)((longlong)plVar4 + 0x19);
          plVar6 = plVar3;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar1 = *param_1;
    if (*(longlong **)(lVar1 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) != '\0') {
        *(longlong **)(lVar1 + 0x10) = plVar7;
        cVar5 = (char)param_2[3];
        goto LAB_1406322d4;
      }
      cVar5 = *(char *)(plVar8[2] + 0x19);
      plVar6 = (longlong *)plVar8[2];
      plVar4 = plVar8;
      while (plVar3 = plVar6, cVar5 == '\0') {
        plVar6 = (longlong *)plVar3[2];
        cVar5 = *(char *)((longlong)plVar6 + 0x19);
        plVar4 = plVar3;
      }
      *(longlong **)(lVar1 + 0x10) = plVar4;
    }
    cVar5 = (char)param_2[3];
  }
LAB_1406322d4:
  if (cVar5 == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar4 = (longlong *)*plVar6;
        if (plVar8 == plVar4) {
          plVar4 = (longlong *)plVar6[2];
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            plVar4 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar4;
            if (*(char *)(*plVar4 + 0x19) == '\0') {
              *(longlong **)(*plVar4 + 8) = plVar6;
            }
            plVar4[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar4;
            }
            else {
              puVar2 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar2) {
                *puVar2 = plVar4;
              }
              else {
                puVar2[2] = plVar4;
              }
            }
            *plVar4 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar4;
            plVar4 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                *(undefined1 *)(plVar4 + 3) = 0;
                std::
                _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
                ::_Rrotate(param_1,plVar4);
                plVar4 = (longlong *)plVar6[2];
              }
              *(char *)(plVar4 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              std::
              _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
              ::_Lrotate(param_1,plVar6);
              break;
            }
LAB_1406323fd:
            *(undefined1 *)(plVar4 + 3) = 0;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            *(undefined1 *)(plVar6 + 3) = 0;
            std::
            _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            ::_Rrotate(param_1,plVar6);
            plVar4 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(plVar4[2] + 0x18) == '\x01') && (*(char *)(*plVar4 + 0x18) == '\x01'))
            goto LAB_1406323fd;
            if (*(char *)(*plVar4 + 0x18) == '\x01') {
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              *(undefined1 *)(plVar4 + 3) = 0;
              std::
              _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
              ::_Lrotate(param_1,plVar4);
              plVar4 = (longlong *)*plVar6;
            }
            *(char *)(plVar4 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar4 + 0x18) = 1;
            std::
            _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            ::_Rrotate(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



// FUNCTION 140632490 _Lrotate body=85 status=ok
// SIG undefined _Lrotate(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::_Lrotate(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 1406324f0 _Rrotate body=89 status=ok
// SIG undefined _Rrotate(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::_Rrotate(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 140632550 FUN_140632550 body=393 status=ok
// SIG undefined FUN_140632550(void)

undefined8 *
FUN_140632550(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  plVar5 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar5) && (param_4 == plVar5)) {
    FUN_140632090(param_1,plVar5[1]);
    *(longlong **)(*param_1 + 8) = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    while (param_3 != param_4) {
      plVar5 = (longlong *)param_3[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar4 = *(char *)(*plVar5 + 0x19);
        plVar9 = plVar5;
        plVar1 = (longlong *)*plVar5;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar1 + 0x19);
          plVar9 = plVar1;
          plVar1 = (longlong *)*plVar1;
        }
      }
      else {
        cVar4 = *(char *)(param_3[1] + 0x19);
        plVar7 = (longlong *)param_3[1];
        plVar1 = param_3;
        while ((plVar9 = plVar7, cVar4 == '\0' && (plVar1 == (longlong *)plVar9[2]))) {
          cVar4 = *(char *)(plVar9[1] + 0x19);
          plVar7 = (longlong *)plVar9[1];
          plVar1 = plVar9;
        }
      }
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar4 = *(char *)((longlong)plVar5 + 0x19);
        while (cVar4 == '\0') {
          plVar5 = (longlong *)*plVar5;
          cVar4 = *(char *)((longlong)plVar5 + 0x19);
        }
      }
      else {
        cVar4 = *(char *)(param_3[1] + 0x19);
        plVar5 = (longlong *)param_3[1];
        while ((plVar1 = plVar5, cVar4 == '\0' && (param_3 == (longlong *)plVar1[2]))) {
          cVar4 = *(char *)(plVar1[1] + 0x19);
          plVar5 = (longlong *)plVar1[1];
          param_3 = plVar1;
        }
      }
      lVar8 = FUN_140632130(param_1);
      plVar5 = *(longlong **)(lVar8 + 0x30);
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
      FMemory::operator_delete(lVar8,0x40);
      param_3 = plVar9;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 1406326e0 FUN_1406326e0 body=115 status=ok
// SIG undefined FUN_1406326e0(void)

undefined8 * FUN_1406326e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14401e4f8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],L"index.html",0x16);
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  return param_1;
}



// FUNCTION 140632760 FUN_140632760 body=212 status=ok
// SIG undefined FUN_140632760(void)

longlong FUN_140632760(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140632840 FUN_140632840 body=45 status=ok
// SIG undefined FUN_140632840(void)

void FUN_140632840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_14401e4b8;
    return;
  }
  return;
}



// FUNCTION 140632870 FUN_140632870 body=47 status=ok
// SIG undefined FUN_140632870(void)

longlong FUN_140632870(void)

{
  if (DAT_146856348 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146856348,&PTR_s__Script_LogitechARX_14401e930);
  }
  return DAT_146856348;
}



// FUNCTION 1406328a0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavCollisionBase::GetPrivateStaticClass(void)

{
  if (DAT_146856358 == 0) {
    FUN_14171ccd0(L"/Script/LogitechARX",L"LogitechARXConfig",&DAT_146856358,FUN_140447710,0x78,
                  0x10000004,0,L"Engine",&LAB_140632960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146856358;
}



// FUNCTION 140632980 FUN_140632980 body=47 status=ok
// SIG undefined FUN_140632980(void)

longlong FUN_140632980(void)

{
  if (DAT_146856350 == 0) {
    FUN_141786440(&DAT_146856350,&PTR_GetPrivateStaticClass_14401e7d0);
  }
  return DAT_146856350;
}



// FUNCTION 1406329b0 FUN_1406329b0 body=461 status=ok
// SIG undefined FUN_1406329b0(void)

ulonglong FUN_1406329b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong local_res10;
  int local_res18 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [128];
  
  if (param_3 != 0) {
    local_res10 = param_2;
    in_RAX = FUN_14066fd50();
    uVar7 = param_3;
    do {
      if (uVar7 == in_RAX) {
        if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)) goto LAB_140632a78;
        lVar3 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar3 = param_1 + 0x50;
        }
        uVar1 = *(uint *)(lVar3 + ((longlong)
                                   ((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                                  (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
        if (uVar1 == 0xffffffff) goto LAB_140632a78;
        goto LAB_140632a50;
      }
      uVar7 = *(ulonglong *)(uVar7 + 0x30);
    } while (uVar7 != 0);
  }
LAB_1406329ee:
  return in_RAX & 0xffffffffffffff00;
  while (uVar1 = *(uint *)((longlong)(int)uVar1 * 0x88 + 0x80 + *(longlong *)(param_1 + 0x18)),
        uVar1 != 0xffffffff) {
LAB_140632a50:
    in_RAX = (ulonglong)uVar1;
    if (*(longlong *)((longlong)(int)uVar1 * 0x88 + *(longlong *)(param_1 + 0x18)) == local_res10) {
      if (uVar1 != 0xffffffff) goto LAB_1406329ee;
      break;
    }
  }
LAB_140632a78:
  local_98 = &local_res10;
  uStack_90 = FUN_14063e400(local_88,local_res10,param_3);
  FUN_140635160(param_1 + 0x18,local_res18,&local_98,0);
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_140640250(local_88);
  uStack_90 = uStack_90 & 0xffffffff00000000;
  local_98 = (longlong *)&LAB_140657b50;
  lVar3 = *(longlong *)((longlong)local_res18[0] * 0x88 + 0x10 + lVar3);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  puVar6 = (undefined8 *)0x0;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
    *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_90._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc2098;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x70,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res18);
    iVar2 = *(int *)(lVar3 + 0x78);
    *(int *)(lVar3 + 0x78) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x7c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x70,iVar2);
    }
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x70));
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
}



// FUNCTION 140632b80 FUN_140632b80 body=586 status=ok
// SIG undefined FUN_140632b80(void)

undefined8 FUN_140632b80(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88 [88];
  undefined8 *local_30;
  undefined8 *local_28;
  
  cVar2 = FUN_140655ea0();
  if (cVar2 == '\0') {
LAB_140632db5:
    uVar5 = 0;
  }
  else {
    local_98[0] = *(longlong *)(param_2 + 0x18);
    puVar6 = (undefined8 *)0x0;
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar3 = param_1 + 0x50;
      }
      iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_98[0] >> 0x20) + (int)local_98[0])
                               & (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          if (*(longlong *)((longlong)iVar1 * 0x88 + *(longlong *)(param_1 + 0x18)) == local_98[0])
          {
            if (iVar1 != -1) goto LAB_140632db5;
            break;
          }
          iVar1 = *(int *)((longlong)iVar1 * 0x88 + 0x80 + *(longlong *)(param_1 + 0x18));
        } while (iVar1 != -1);
      }
    }
    local_98[1] = 0;
    FUN_14063dd00(local_88,param_2);
    puVar4 = (undefined8 *)operator_new(0x188);
    local_30 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      local_res20 = local_98[0];
      uVar5 = FName::ToString(&local_res20,local_a8);
      FUN_14063df00(puVar4,uVar5,1);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      puVar4[0x14] = 0;
      *puVar4 = &PTR_FUN_144025a80;
      FWeakObjectPtr::operator=(puVar4 + 0x15,0);
      FWeakObjectPtr::operator=(puVar4 + 0x16,0);
      FUN_14063dd00(puVar4 + 0x17,local_88);
      puVar4[0x22] = 0;
      puVar4[0x23] = 0;
      puVar4[0x24] = 0;
      puVar4[0x25] = 0;
      *(undefined1 *)(puVar4 + 0x26) = 0;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      puVar4[0x28] = 0;
      puVar4[0x29] = 0;
      puVar4[0x2a] = 0;
      puVar4[0x2b] = 0;
      puVar4[0x2c] = 0;
      puVar4[0x2d] = 0;
      puVar4[0x2e] = 0;
      puVar4[0x2f] = 0;
      *(undefined2 *)(puVar4 + 0x30) = 0;
      local_30 = puVar4;
    }
    puVar4 = (undefined8 *)operator_new(0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_LAB_144027978;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
      puVar4[2] = local_30;
      puVar6 = puVar4;
    }
    local_28 = puVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_30,local_30,local_30);
    local_b0 = local_98;
    local_b8 = (longlong *)(param_2 + 0x18);
    FUN_140635160(param_1 + 0x18,local_res18,&local_b8,0);
    FUN_140640250(local_98);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 140632dd0 FUN_140632dd0 body=569 status=ok
// SIG undefined FUN_140632dd0(void)

void FUN_140632dd0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uStack_84;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  uStack_84 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    puVar7 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x20);
    }
    uVar3 = *puVar7;
    iVar4 = 0;
    while (uVar3 == 0) {
      iVar6 = iVar6 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140632eae;
      uVar3 = puVar7[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar3 = -uVar3 & uVar3;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar3 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iVar6 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_84) {
LAB_140632eae:
      uStack_84 = uVar1;
    }
  }
  uVar2 = uStack_84;
  uStack_84 = *(uint *)(param_1 + 0x38);
  uVar3 = uStack_84 & 0xffffffe0;
  if (uStack_84 != uVar1) {
    puVar7 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x20);
    }
    uVar5 = puVar7[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar6 = (int)uStack_84 >> 5;
    while (uVar5 == 0) {
      uVar3 = uVar3 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140632f71;
      uVar5 = puVar7[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar3 - iVar6) + 0x1f;
    if ((int)uVar1 < (int)uStack_84) {
LAB_140632f71:
      uStack_84 = uVar1;
    }
  }
  while( true ) {
    if (uVar2 == uStack_84) break;
    (**(code **)(*param_2 + 0x38))
              (param_2,*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar2 * 0x88 + 0x10,0);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  }
                    /* WARNING: Could not recover jumptable at 0x000140633006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x1c0,0,0);
  return;
}



// FUNCTION 140633010 FUN_140633010 body=268 status=ok
// SIG undefined FUN_140633010(void)

void FUN_140633010(longlong param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint local_res10 [6];
  undefined1 local_48 [8];
  uint *local_40;
  longlong **local_38;
  longlong *local_30;
  int local_28;
  undefined4 local_24;
  longlong *local_20;
  int local_18;
  undefined4 local_14;
  
  if ((param_2 < 9) && (((param_2 & 0xf6) != 0 || ((char)param_2 == '\t')))) {
    local_30 = (longlong *)*param_3;
    *param_3 = 0;
    local_28 = *(int *)(param_3 + 1);
    local_24 = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_20 = (longlong *)*param_4;
    *param_4 = 0;
    local_18 = *(int *)(param_4 + 1);
    local_14 = *(undefined4 *)((longlong)param_4 + 0xc);
    local_40 = local_res10;
    param_4[1] = 0;
    local_38 = &local_30;
    local_res10[0] = param_2;
    FUN_140634e30(param_1 + 0x68,local_48,&local_40,0);
    plVar1 = local_20;
    for (iVar2 = local_18; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    plVar1 = local_30;
    iVar2 = local_28;
    if (local_20 != (longlong *)0x0) {
      FMemory::Free(local_20);
      plVar1 = local_30;
      iVar2 = local_28;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    if (local_30 != (longlong *)0x0) {
      FMemory::Free(local_30);
    }
  }
  return;
}



// FUNCTION 140633120 FUN_140633120 body=490 status=ok
// SIG undefined FUN_140633120(void)

undefined8 FUN_140633120(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 *local_28;
  undefined4 uStack_20;
  
  cVar2 = FUN_140655ea0(param_1,param_3);
  if ((cVar2 != '\0') &&
     (lVar5 = *(longlong *)(param_3 + 0x18), *(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)))
  {
    lVar4 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar4 = param_1 + 0x50;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                             (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        lVar7 = (longlong)iVar3 * 0x88;
        if (*(longlong *)(lVar7 + lVar4) == lVar5) {
          if (((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x88 + lVar4, lVar4 != 0)) &&
             (lVar4 != -8)) {
            lVar5 = *(longlong *)(lVar4 + 0x10);
            if (lVar5 != 0) goto LAB_1406331af;
            lVar5 = FUN_14064fc70(param_3);
            if (lVar5 != 0) {
              lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                uVar6 = GetTransientPackage();
                lVar5 = NewObject<USaveGame>(uVar6,lVar5,*(undefined8 *)(param_3 + 0x18),0,0,0,0);
                if (lVar5 != 0) {
                  local_28 = &LAB_140657b50;
                  uStack_20 = 0;
                  FUN_140634a90(lVar5 + 0x70,&local_res20,param_1,&local_28);
                  *(longlong *)(lVar4 + 0x10) = lVar5;
                  FWeakObjectPtr::operator=(&local_res20,lVar5);
                  lVar4 = *(longlong *)(lVar4 + 0x70);
                  cVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                                    (lVar4 + 0xa8,&local_res20);
                  if (cVar2 != '\0') {
                    FUN_14065e450(lVar4);
                    *(undefined4 *)(lVar4 + 0xa8) = local_res20;
                    *(undefined4 *)(lVar4 + 0xac) = local_res24;
                    FUN_140658e30(lVar4);
                  }
                  goto LAB_1406331af;
                }
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar7 + 0x80 + lVar4);
      } while (iVar3 != -1);
    }
  }
  lVar5 = 0;
LAB_1406331af:
  FWeakObjectPtr::operator=(param_2,lVar5);
  return param_2;
}



// FUNCTION 140633310 FUN_140633310 body=176 status=ok
// SIG undefined FUN_140633310(void)

undefined8 FUN_140633310(longlong param_1,int param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar3 = param_1 + 0xa0;
    }
    uVar1 = *(uint *)(lVar3 + ((longlong)*(int *)(param_1 + 0xb0) - 1U & (longlong)param_2) * 4);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 != 0xffffffff) {
      do {
        piVar4 = (int *)((longlong)(int)uVar2 * 0x30 + *(longlong *)(param_1 + 0x68));
        if (*piVar4 == param_2) {
          if ((int)uVar2 != -1) goto LAB_140633394;
          break;
        }
        uVar2 = (ulonglong)(uint)piVar4[10];
      } while (piVar4[10] != 0xffffffff);
    }
  }
  piVar4 = (int *)0x0;
LAB_140633394:
  piVar5 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 != (int *)0x0) {
    *param_3 = piVar5;
    *param_4 = (longlong)(piVar5 + 4);
  }
  return CONCAT71((int7)(uVar2 >> 8),piVar5 != (int *)0x0);
}



// FUNCTION 1406333c0 FUN_1406333c0 body=88 status=ok
// SIG undefined FUN_1406333c0(void)

undefined8 FUN_1406333c0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    puVar1 = (undefined8 *)FName::FName(local_res8,puVar3,1);
    uVar2 = UEnum::GetValueByName(*(undefined8 *)(param_1 + 0x1c8),*puVar1,0);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 140633420 FUN_140633420 body=674 status=ok
// SIG undefined FUN_140633420(void)

void FUN_140633420(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  char local_res20 [8];
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uStack_a4 = 1;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_a8 = 0;
  uVar3 = *(uint *)(param_1 + 0x40);
  puVar2 = (uint *)(param_1 + 0x28);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar10 = local_a8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar10;
      if (bVar5) goto LAB_1406334ef;
      uVar4 = puVar12[lVar8 + 1];
    }
    uStack_a4 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar10 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_94 = (iStack_90 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1406334ef:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x40);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar2;
  local_60 = plVar1;
  puStack_50 = puVar2;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1406335c5;
      uVar9 = puVar12[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar10 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_94 = (uVar11 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1406335c5:
      uStack_94 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_6c == uStack_94) && (local_78 == puVar2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    lVar8 = *(longlong *)((longlong)(int)uStack_6c * 0x88 + *plVar1 + 0x10);
    if (lVar8 != 0) {
      lVar6 = UCurveFloat::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_res20[0] = '\0';
        FUN_1406707c0(lVar8,param_2,local_res20);
        if (local_res20[0] != '\0') {
          uVar7 = FUN_140643220(param_1,lVar8);
          iVar10 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar10);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar10 * 8) = uVar7;
        }
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  return;
}



// FUNCTION 140633770 FUN_140633770 body=28 status=ok
// SIG undefined FUN_140633770(void)

undefined8 FUN_140633770(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140651590();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 140633790 FUN_140633790 body=1358 status=ok
// SIG undefined FUN_140633790(void)

undefined4 FUN_140633790(longlong param_1,byte *param_2,longlong *param_3)

{
  longlong lVar1;
  wchar_t _C;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  wint_t wVar6;
  wint_t wVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  int iStackX_24;
  longlong *local_f8;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  uint uStack_e4;
  uint *puStack_e0;
  undefined4 local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  lVar5 = param_3[1];
  iVar12 = (int)lVar5;
  if (*param_2 != 0) {
    local_c8 = (longlong *)(param_1 + 0x18);
    puStack_e0 = (uint *)(param_1 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x40);
    local_e8 = 0;
    uStack_e4 = 1;
    uStack_d4 = 0;
    iStack_d0 = 0;
    if (uVar8 != 0) {
      puVar21 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar21 = puStack_e0;
      }
      uVar20 = *puVar21;
      iStack_d0 = 0;
      local_e8 = 0;
      while (uVar20 == 0) {
        lVar15 = (longlong)local_e8;
        iStack_d0 = iStack_d0 + 0x20;
        iVar12 = local_e8 + 1;
        bVar3 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e8;
        local_e8 = iVar12;
        if (bVar3) goto LAB_14063387e;
        uVar20 = puVar21[lVar15 + 1];
      }
      uStack_e4 = -uVar20 & uVar20;
      iVar12 = 0x1f;
      if (uStack_e4 != 0) {
        for (; uStack_e4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_e4 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_d4 = (iStack_d0 - iVar12) + 0x1f;
      if ((int)uVar8 < (int)uStack_d4) {
LAB_14063387e:
        uStack_d4 = uVar8;
      }
    }
    local_d8 = 0xffffffff;
    uStack_b4 = *(uint *)(param_1 + 0x40);
    uStack_c0 = CONCAT44(uStack_e4,local_e8);
    uStack_68 = 0xffffffff;
    uStack_64 = uStack_d4;
    uStack_a8 = CONCAT44(uStack_cc,iStack_d0);
    uStack_b8 = -1 << ((byte)uStack_b4 & 0x1f);
    uVar20 = uStack_b4 & 0xffffffe0;
    iStack_78 = local_e8;
    uStack_74 = uStack_e4;
    local_88 = local_c8;
    local_70 = puStack_e0;
    local_60 = uStack_a8;
    local_80 = local_c8;
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    uVar14 = uStack_b4;
    if (uStack_b4 != uVar8) {
      puVar21 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar21 = puStack_e0;
      }
      uVar14 = puVar21[(int)uStack_b4 >> 5] & uStack_b8;
      iVar12 = (int)uStack_b4 >> 5;
      while (uVar14 == 0) {
        uVar20 = uVar20 + 0x20;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_140633941;
        uVar14 = puVar21[(longlong)iVar12 + 1];
        uStack_b8 = 0xffffffff;
        iVar12 = iVar12 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar12 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_b4 = (uVar20 - iVar12) + 0x1f;
      uVar14 = uStack_b4;
      if ((int)uVar8 < (int)uStack_b4) {
LAB_140633941:
        uStack_b4 = uVar8;
        uVar14 = uVar8;
      }
    }
LAB_140633950:
    if (((uStack_64 != uVar14) || (local_70 != puStack_e0)) || (local_80 != local_88)) {
      lVar15 = (longlong)(int)uStack_64 * 0x88 + *local_80;
      puVar9 = (undefined8 *)FName::FName(local_58,L"DiscoveryMethod");
      plVar2 = *(longlong **)(lVar15 + 0x40);
      if (plVar2 != (longlong *)0x0) {
        lVar11 = *plVar2;
        iStackX_24 = (int)((ulonglong)*puVar9 >> 0x20);
        iVar12 = (int)*puVar9;
        uVar16 = (longlong)(int)plVar2[1];
        lVar4 = 0;
        while (uVar16 != 0) {
          uVar22 = uVar16 >> 1;
          uVar8 = (uint)uVar16;
          lVar1 = uVar22 + lVar4;
          iVar13 = *(int *)(lVar11 + lVar1 * 0x18) - iVar12;
          if (iVar13 == 0) {
            iVar13 = *(int *)(lVar11 + lVar1 * 0x18 + 4) - iStackX_24;
          }
          uVar16 = uVar22;
          if (iVar13 < 0) {
            lVar4 = (ulonglong)(uVar8 & 1) + lVar1;
          }
        }
        uVar16 = (ulonglong)(int)lVar4;
        if (uVar16 < (ulonglong)(longlong)(int)plVar2[1]) {
          iVar12 = iVar12 - *(int *)(lVar11 + uVar16 * 0x18);
          if (iVar12 == 0) {
            iVar12 = iStackX_24 - *(int *)(lVar11 + 4 + uVar16 * 0x18);
          }
          if (((-1 < iVar12) && ((int)lVar4 != -1)) &&
             (puVar9 = (undefined8 *)(lVar11 + (uVar16 * 3 + 1) * 8), puVar9 != (undefined8 *)0x0))
          {
            if (*(int *)(puVar9 + 1) == 0) {
              puVar18 = &DAT_143f3eda8;
            }
            else {
              puVar18 = (undefined2 *)*puVar9;
            }
            pwVar17 = L"Ignore";
            do {
              _C = *(wchar_t *)((longlong)(puVar18 + -0xa2011fdc) + (longlong)pwVar17);
              if ((_C == L'\0') && (*pwVar17 == L'\0')) break;
              if (_C != *pwVar17) {
                wVar6 = towlower(_C);
                wVar7 = towlower(*pwVar17);
                if (wVar6 != wVar7) goto LAB_140633a94;
              }
              pwVar17 = pwVar17 + 1;
            } while( true );
          }
        }
      }
      goto LAB_140633c80;
    }
    iVar12 = (int)param_3[1];
  }
  return CONCAT31((int3)((uint)iVar12 >> 8),(int)lVar5 != iVar12);
LAB_140633a94:
  if (wVar6 != wVar7) {
    puVar9 = (undefined8 *)FName::FName(local_50,L"TestPlan",1);
    FAssetDataTagMapSharedView::FindTag(lVar15 + 0x40,&local_90,*puVar9);
    if (local_90 == (undefined8 *)0x0) {
      puVar18 = (undefined2 *)0x0;
    }
    else if (*(int *)(local_90 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*local_90;
    }
    uVar10 = UEnum::GetPrivateStaticClass();
    lVar11 = FUN_141799410(uVar10,0xffffffffffffffff,L"EGbxTestPlan",1);
    if (lVar11 != 0) {
      puVar9 = (undefined8 *)FName::FName(local_48,puVar18,1);
      uVar8 = UEnum::GetValueByName(lVar11,*puVar9,0);
      if (((uVar8 != 0xffffffff) && (uVar8 == *param_2)) && (*(longlong *)(lVar15 + 0x70) != 0)) {
        FUN_1406505a0(*(longlong *)(lVar15 + 0x70),&local_f8);
        plVar2 = local_f8;
        if (param_2[1] == 1) {
          plVar19 = (longlong *)&DAT_143f3eda8;
          if (local_f0 != 0) {
            plVar19 = local_f8;
          }
          FString::PrintfImpl(&local_c8,L"automation runtests %s",plVar19);
          if (plVar2 != (longlong *)0x0) {
            FMemory::Free(plVar2);
          }
          local_f8 = local_c8;
          local_f0 = (int)uStack_c0;
          local_ec = uStack_c0._4_4_;
          local_c8 = (longlong *)0x0;
          uStack_c0 = 0;
        }
        else if (param_2[1] == 2) {
          plVar19 = (longlong *)&DAT_143f3eda8;
          if (local_f0 != 0) {
            plVar19 = local_f8;
          }
          FString::PrintfImpl(&local_a0,
                              L"%s -stdout -unattended -nullrhi -nosplash -nosteam -execcmds=\"automation runtests %s\" -testexit=\"Automation Test Queue Empty\""
                              ,&DAT_146299580,plVar19);
          if (plVar2 != (longlong *)0x0) {
            FMemory::Free(plVar2);
          }
          local_f8 = local_a0;
          local_f0 = (int)local_98;
          local_ec = local_98._4_4_;
          local_a0 = (longlong *)0x0;
          local_98 = 0;
        }
        iVar13 = local_f0;
        plVar2 = local_f8;
        iVar12 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar12 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
        }
        puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
        *puVar9 = 0;
        *(int *)(puVar9 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar13,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar9,plVar2,(longlong)iVar13 * 2);
        }
        if (plVar2 != (longlong *)0x0) {
          FMemory::Free(plVar2);
        }
      }
    }
  }
LAB_140633c80:
  uStack_68 = uStack_68 & ~uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
  goto LAB_140633950;
}



// FUNCTION 140633ce0 GetDisplayNameVisibility_Implementation body=20 status=ok
// SIG undefined GetDisplayNameVisibility_Implementation(void)

bool UKeyLabel::GetDisplayNameVisibility_Implementation(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140651590();
  return lVar1 != 0;
}



// FUNCTION 140633d10 FUN_140633d10 body=8 status=ok
// SIG undefined FUN_140633d10(void)

longlong FUN_140633d10(longlong param_1)

{
  return param_1 + 0x170;
}



// FUNCTION 140633d20 FUN_140633d20 body=190 status=ok
// SIG undefined FUN_140633d20(void)

void FUN_140633d20(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar2 = param_1 + 0x50;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x88 + *(longlong *)(param_1 + 0x18));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_140633da7;
          break;
        }
        iVar1 = (int)plVar4[0x10];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140633da7:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((plVar3 != (longlong *)0x0) && ((longlong *)plVar3[1] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)plVar3[1] + 0x2c8))();
  }
  FUN_140659740((longlong *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 140633df0 FUN_140633df0 body=358 status=ok
// SIG undefined FUN_140633df0(void)

void FUN_140633df0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  
  puVar3 = (undefined8 *)FName::FName(local_res10,L"AssetRegistry",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
    uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
    TBaseMulticastDelegate<void>::Remove(uVar5,*(undefined8 *)(param_1 + 0x188));
    uVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    TBaseMulticastDelegate<void>::Remove(uVar5,*(undefined8 *)(param_1 + 400));
    lVar1 = *(longlong *)(param_1 + 0x198);
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x150))(plVar4);
    iVar8 = 0;
    if (0 < (int)plVar6[1]) {
      lVar9 = 0;
      do {
        lVar2 = *plVar6;
        if (((*(int *)(lVar9 + 8 + lVar2) != 0) &&
            (plVar7 = *(longlong **)(lVar9 + lVar2), plVar7 != (longlong *)0x0)) &&
           (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10), *plVar7 == lVar1
           )) {
          if ((*(int *)(lVar9 + 8 + lVar2) != 0) &&
             (plVar7 = *(longlong **)(lVar9 + lVar2), plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x28))(plVar7,0);
            if (*(longlong *)(lVar9 + lVar2) != 0) {
              uVar5 = FMemory::Realloc(*(longlong *)(lVar9 + lVar2),0,0);
              *(undefined8 *)(lVar9 + lVar2) = uVar5;
            }
            *(undefined4 *)(lVar9 + 8 + lVar2) = 0;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (iVar8 < (int)plVar6[1]);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,0);
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4);
    TBaseMulticastDelegate<void>::Remove(uVar5,*(undefined8 *)(param_1 + 0x1a0));
  }
  return;
}



// FUNCTION 140633f60 FUN_140633f60 body=54 status=ok
// SIG undefined FUN_140633f60(void)

void FUN_140633f60(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1406552c0();
  uVar1 = UEnum::GetPrivateStaticClass();
  uVar1 = StaticFindObjectChecked(uVar1,0xffffffffffffffff,L"EDiscovery");
  *(undefined8 *)(param_1 + 0x1c8) = uVar1;
  return;
}



// FUNCTION 140633fa0 FUN_140633fa0 body=269 status=ok
// SIG undefined FUN_140633fa0(void)

undefined8 * FUN_140633fa0(undefined8 *param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  FUN_14063fc30(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  param_1[1] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 2) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1406340c0 FViewMatrices body=46 status=ok
// SIG undefined FViewMatrices(void)

undefined8 FViewMatrices::FViewMatrices(undefined8 param_1,undefined8 param_2)

{
  FUN_14217e740();
  FUN_140643170(param_1,param_2);
  return param_1;
}



// FUNCTION 1406340f0 operator==<wchar_t> body=226 status=ok
// SIG undefined operator==<wchar_t>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FName::operator==<wchar_t>(longlong *param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  undefined1 auStack_858 [32];
  undefined8 local_838;
  short local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    bVar4 = *param_1 == 0;
  }
  else {
    bVar4 = false;
    pbVar3 = (byte *)GetComparisonNameEntry();
    if (pbVar3 != (byte *)0x0) {
      iVar2 = 0;
      local_838 = (ulonglong)local_838._4_4_ << 0x20;
      cVar1 = SplitNameWithCheck(param_2,local_828,0x400,&local_838);
      if (cVar1 != '\0') {
        param_2 = local_828;
        iVar2 = (int)local_838 + 1;
      }
      if (iVar2 == *(int *)((longlong)param_1 + 4)) {
        if ((*pbVar3 & 1) == 0) {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(param_2,pbVar3 + 0x10);
        }
        else {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
        }
        bVar4 = iVar2 == 0;
      }
    }
  }
  return bVar4;
}



// FUNCTION 1406341e0 FUN_1406341e0 body=171 status=ok
// SIG undefined FUN_1406341e0(void)

undefined8 * FUN_1406341e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = *puVar1;
  param_2[2] = puVar1[1];
  param_2[3] = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[5] = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[7] = puVar1[6];
  param_2[8] = puVar1[7];
  param_2[9] = puVar1[8];
  puVar1[8] = 0;
  puVar1[7] = 0;
  param_2[10] = 0;
  param_2[10] = puVar1[9];
  puVar1[9] = 0;
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(puVar1 + 10);
  *(undefined4 *)((longlong)param_2 + 0x5c) = *(undefined4 *)((longlong)puVar1 + 0x54);
  puVar1[10] = 0;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar1 + 0xb);
  param_2[0xd] = puVar1[0xc];
  param_2[0xe] = puVar1[0xd];
  param_2[0xf] = puVar1[0xe];
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  return param_2;
}



// FUNCTION 140634290 FUN_140634290 body=728 status=ok
// SIG undefined FUN_140634290(void)

void FUN_140634290(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_98;
  int local_90;
  int local_8c;
  void *local_88;
  longlong lStack_80;
  void *local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong local_50;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_78 = (void *)0x0;
  lStack_70 = 0;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  cVar3 = FUN_1406364e0(0,&local_78,&local_88);
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 0x28) < 1) {
      FUN_140634850(param_1,param_2);
      return;
    }
    local_68 = *param_2;
    local_60 = param_2[1];
    FUN_14063eb30(&local_98,&local_68);
    iVar6 = local_90 + -1;
    if (local_90 < 1) {
      iVar6 = 0;
    }
    local_90 = (local_90 < 1) + 1 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    }
    _Src = local_78;
    iVar5 = local_90;
    lVar7 = lStack_70 - (longlong)local_78 >> 1;
    *(undefined4 *)(local_98 + (longlong)iVar6 * 2) = 0x26;
    lVar10 = local_98;
    iVar6 = local_90;
    if (lVar7 != 0) {
      iVar4 = local_90 + -1;
      iVar1 = (int)lVar7;
      iVar6 = iVar1;
      if (local_90 == 0) {
        iVar4 = 0;
        iVar6 = iVar1 + 1;
      }
      local_90 = iVar6 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar5);
      }
      iVar6 = local_90;
      lVar10 = local_98;
      _guard_xfg_dispatch_icall_nop
                ((void *)(local_98 + (longlong)iVar4 * 2),_Src,(longlong)iVar1 * 2);
      *(undefined2 *)(lVar10 + -2 + (longlong)iVar6 * 2) = 0;
    }
    local_68 = param_2[2];
    local_60 = param_2[3];
    FUN_14063eb30(&local_98,&local_68);
    iVar5 = local_90 + -1;
    if (local_90 < 1) {
      iVar5 = 0;
    }
    local_90 = (local_90 < 1) + 1 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    iVar4 = local_90;
    lVar9 = lStack_80 - (longlong)local_88 >> 1;
    *(undefined4 *)(local_98 + (longlong)iVar5 * 2) = 0x2e;
    lVar7 = local_98;
    iVar5 = local_90;
    if (lVar9 != 0) {
      iVar1 = local_90 + -1;
      iVar2 = (int)lVar9;
      iVar5 = iVar2;
      if (local_90 == 0) {
        iVar1 = 0;
        iVar5 = iVar2 + 1;
      }
      local_90 = iVar5 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar4);
        lVar7 = local_98;
      }
      iVar5 = local_90;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar7 + (longlong)iVar1 * 2),local_88,(longlong)iVar2 * 2);
      *(undefined2 *)(lVar7 + -2 + (longlong)iVar5 * 2) = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0x30 + lVar9;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x30) {
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      local_40 = lVar7 + (longlong)iVar4 * 2;
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      local_50 = lVar10 + (longlong)iVar4 * 2;
      local_38 = param_2[4];
      local_30 = param_2[5];
      FUN_140634570(lVar9,local_58);
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return;
}



// FUNCTION 140634570 FUN_140634570 body=724 status=ok
// SIG undefined FUN_140634570(void)

void FUN_140634570(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_98;
  int local_90;
  int local_8c;
  void *local_88;
  longlong lStack_80;
  void *local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong local_50;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_78 = (void *)0x0;
  lStack_70 = 0;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  cVar3 = FUN_1406364e0(0,&local_78,&local_88);
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 0x28) < 1) {
      FUN_140634850(param_1,param_2);
      return;
    }
    local_68 = *param_2;
    local_60 = param_2[1];
    FUN_14063eb30(&local_98,&local_68);
    iVar6 = local_90 + -1;
    if (local_90 < 1) {
      iVar6 = 0;
    }
    local_90 = (local_90 < 1) + 1 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    }
    _Src = local_78;
    iVar5 = local_90;
    lVar7 = lStack_70 - (longlong)local_78 >> 1;
    *(undefined4 *)(local_98 + (longlong)iVar6 * 2) = 0x26;
    lVar10 = local_98;
    iVar6 = local_90;
    if (lVar7 != 0) {
      iVar4 = local_90 + -1;
      iVar1 = (int)lVar7;
      iVar6 = iVar1;
      if (local_90 == 0) {
        iVar4 = 0;
        iVar6 = iVar1 + 1;
      }
      local_90 = iVar6 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar5);
      }
      iVar6 = local_90;
      lVar10 = local_98;
      _guard_xfg_dispatch_icall_nop
                ((void *)(local_98 + (longlong)iVar4 * 2),_Src,(longlong)iVar1 * 2);
      *(undefined2 *)(lVar10 + -2 + (longlong)iVar6 * 2) = 0;
    }
    local_68 = param_2[2];
    local_60 = param_2[3];
    FUN_14063eb30(&local_98,&local_68);
    iVar5 = local_90 + -1;
    if (local_90 < 1) {
      iVar5 = 0;
    }
    local_90 = (local_90 < 1) + 1 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    iVar4 = local_90;
    lVar9 = lStack_80 - (longlong)local_88 >> 1;
    *(undefined4 *)(local_98 + (longlong)iVar5 * 2) = 0x2e;
    lVar7 = local_98;
    iVar5 = local_90;
    if (lVar9 != 0) {
      iVar1 = local_90 + -1;
      iVar2 = (int)lVar9;
      iVar5 = iVar2;
      if (local_90 == 0) {
        iVar1 = 0;
        iVar5 = iVar2 + 1;
      }
      local_90 = iVar5 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar4);
        lVar7 = local_98;
      }
      iVar5 = local_90;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar7 + (longlong)iVar1 * 2),local_88,(longlong)iVar2 * 2);
      *(undefined2 *)(lVar7 + -2 + (longlong)iVar5 * 2) = 0;
    }
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0x20 + lVar9;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x20) {
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      local_40 = lVar7 + (longlong)iVar4 * 2;
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      local_50 = lVar10 + (longlong)iVar4 * 2;
      local_38 = param_2[4];
      local_30 = param_2[5];
      FUN_140634850(lVar9,local_58);
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return;
}



// FUNCTION 140634850 FUN_140634850 body=561 status=ok
// SIG undefined FUN_140634850(void)

void FUN_140634850(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  cVar2 = FUN_1406364e0(0,&local_28,&local_18);
  if (cVar2 != '\0') {
    psVar4 = (short *)*param_2;
    if (psVar4 != (short *)0x0) {
      for (; (psVar4 < (short *)param_2[1] && (*psVar4 == 0x26)); psVar4 = psVar4 + 1) {
        *param_2 = *param_2 + 2;
      }
    }
    psVar4 = (short *)param_2[2];
    if (psVar4 != (short *)0x0) {
      for (; (psVar4 < (short *)param_2[3] && (*psVar4 == 0x2e)); psVar4 = psVar4 + 1) {
        param_2[2] = param_2[2] + 2;
      }
    }
    plVar1 = (longlong *)param_2[4];
    iVar6 = 0;
    iVar3 = (int)plVar1[1];
    iVar7 = iVar3 + -1;
    if (iVar3 < 1) {
      iVar7 = iVar6;
    }
    iVar3 = (iVar3 < 1) + 1 + iVar3;
    *(int *)(plVar1 + 1) = iVar3;
    if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(undefined2 *)(*plVar1 + (longlong)iVar7 * 2) = 0x7c;
    *(undefined2 *)(*plVar1 + 2 + (longlong)iVar7 * 2) = 0;
    lVar5 = param_2[4];
    if (param_2[1] - *param_2 >> 1 != 0) {
      local_38 = *param_2;
      local_30 = param_2[1];
      FUN_140640bc0(lVar5,&local_38);
      plVar1 = (longlong *)param_2[4];
      iVar3 = (int)plVar1[1];
      iVar7 = iVar3 + -1;
      if (iVar3 < 1) {
        iVar7 = iVar6;
      }
      iVar3 = (iVar3 < 1) + 1 + iVar3;
      *(int *)(plVar1 + 1) = iVar3;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(undefined2 *)(*plVar1 + (longlong)iVar7 * 2) = 0x26;
      *(undefined2 *)(*plVar1 + 2 + (longlong)iVar7 * 2) = 0;
      lVar5 = param_2[4];
    }
    FUN_140640bc0(lVar5,&local_28);
    plVar1 = (longlong *)param_2[5];
    iVar3 = (int)plVar1[1];
    iVar7 = iVar3 + -1;
    if (iVar3 < 1) {
      iVar7 = iVar6;
    }
    iVar3 = (iVar3 < 1) + 1 + iVar3;
    *(int *)(plVar1 + 1) = iVar3;
    if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(undefined2 *)(*plVar1 + (longlong)iVar7 * 2) = 0x7c;
    *(undefined2 *)(*plVar1 + 2 + (longlong)iVar7 * 2) = 0;
    lVar5 = param_2[5];
    if (param_2[3] - param_2[2] >> 1 != 0) {
      local_28 = param_2[2];
      lStack_20 = param_2[3];
      FUN_140640bc0(lVar5,&local_28);
      plVar1 = (longlong *)param_2[5];
      iVar3 = (int)plVar1[1];
      iVar7 = iVar3 + -1;
      if (iVar3 < 1) {
        iVar7 = iVar6;
      }
      iVar3 = (iVar3 < 1) + 1 + iVar3;
      *(int *)(plVar1 + 1) = iVar3;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(undefined2 *)(*plVar1 + (longlong)iVar7 * 2) = 0x2e;
      *(undefined2 *)(*plVar1 + 2 + (longlong)iVar7 * 2) = 0;
      lVar5 = param_2[5];
    }
    FUN_140640bc0(lVar5,&local_18);
  }
  return;
}



// FUNCTION 140634a90 FUN_140634a90 body=216 status=ok
// SIG undefined FUN_140634a90(void)

undefined8 FUN_140634a90(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar1 + 2) = local_18;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_14;
    *(undefined4 *)(plVar1 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
    plVar1[1] = param_3;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_28);
  plVar1 = local_28;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140634b70 FUN_140634b70 body=201 status=ok
// SIG undefined FUN_140634b70(void)

undefined8 * FUN_140634b70(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_3;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140634c40 Append<FString,FDefaultAllocator> body=201 status=ok
// SIG undefined Append<FString,FDefaultAllocator>(void)

void TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar4 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
      iVar4 = (int)param_1[1];
    }
    param_2 = (undefined8 *)*param_2;
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_1);
    iVar4 = iVar1;
    do {
      *puVar3 = 0;
      iVar2 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(puVar3 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar2 * 2);
      }
      puVar3 = puVar3 + 2;
      param_2 = param_2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 140634d10 FUN_140634d10 body=133 status=ok
// SIG undefined FUN_140634d10(void)

bool FUN_140634d10(int param_1,int param_2,undefined1 param_3)

{
  switch(param_3) {
  case 0:
    return ABS((double)param_1 - (double)param_2) <= 0.0;
  case 1:
    return 0.0 < ABS((double)param_1 - (double)param_2);
  case 2:
    return param_2 < param_1;
  case 3:
    return param_2 <= param_1;
  case 4:
    return param_1 < param_2;
  case 5:
    return param_1 <= param_2;
  default:
    return false;
  }
}



// FUNCTION 140634db0 FUN_140634db0 body=95 status=ok
// SIG undefined FUN_140634db0(void)

bool FUN_140634db0(float param_1,float param_2,undefined1 param_3,float param_4)

{
  switch(param_3) {
  case 0:
    return ABS(param_1 - param_2) <= param_4;
  case 1:
    return param_4 < ABS(param_1 - param_2);
  case 2:
    return param_2 < param_1;
  case 3:
    return param_2 <= param_1;
  case 4:
    return param_1 < param_2;
  case 5:
    return param_1 <= param_2;
  default:
    return false;
  }
}



// FUNCTION 140634e30 FUN_140634e30 body=807 status=ok
// SIG undefined FUN_140634e30(void)

int * FUN_140634e30(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  bool local_res8;
  
  iVar7 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar12 = *puVar12 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  puVar12 = (uint *)((longlong)iVar9 * 0x30 + *param_1);
  *puVar12 = *(uint *)*param_3;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined8 *)(puVar12 + 2) = *puVar1;
  *puVar1 = 0;
  puVar12[4] = *(uint *)(puVar1 + 1);
  puVar12[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  *(undefined8 *)(puVar12 + 6) = puVar1[2];
  puVar1[2] = 0;
  puVar12[8] = *(uint *)(puVar1 + 3);
  puVar12[9] = *(uint *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0;
  puVar12[10] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    iVar8 = iVar13;
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar3 != -1) {
        do {
          iVar8 = iVar3;
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x30) == *puVar12) break;
          iVar3 = *(int *)(*param_1 + 0x28 + (longlong)iVar3 * 0x30);
          iVar8 = iVar13;
        } while (iVar3 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      FUN_14063ff40((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x28);
      iVar7 = *param_2;
      bVar2 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar7;
      }
      puVar5 = (undefined4 *)((longlong)iVar7 * 0x30 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar5[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar6 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14063512e;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar13;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar12;
    puVar12[0xb] = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar12[10] = *(uint *)((longlong)plVar6 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14063512e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140635160 FUN_140635160 body=673 status=ok
// SIG undefined FUN_140635160(void)

int * FUN_140635160(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0x88 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x88 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar7 * 0x88 + *param_1);
  FUN_1406341e0(param_3,plVar11);
  *(undefined4 *)(plVar11 + 0x10) = 0xffffffff;
  bVar12 = false;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    lVar3 = *plVar11;
    if (uVar10 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)((longlong)iVar7 * 0x88 + *param_1) == lVar3) goto LAB_1406352c2;
          iVar7 = *(int *)((longlong)iVar7 * 0x88 + 0x80 + *param_1);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_1406352c2:
    bVar12 = iVar7 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar7 * 0x88 + *param_1);
      FUN_140640250((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x80);
      TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1406353d8;
    }
  }
  if (3 < uVar10) {
    uVar5 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar9 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar8;
    }
    uVar5 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x84) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_140659300(param_1);
  }
LAB_1406353d8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140635410 Emplace<FName> body=397 status=ok
// SIG undefined Emplace<FName>(void)

int * TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  lVar1 = *param_3;
  *param_2 = local_38[0];
  *local_30 = lVar1;
  *(undefined4 *)(local_30 + 1) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == lVar1) goto LAB_1406354ca;
          iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1406354ca:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140635575;
    }
  }
  cVar2 = ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0xc) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 1) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140635575:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1406355a0 FindExistingAction<FDelayAction> body=325 status=ok
// SIG undefined FindExistingAction<FDelayAction>(void)

undefined8
FLatentActionManager::FindExistingAction<FDelayAction>
          (longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  undefined8 local_res20;
  undefined8 local_48 [2];
  int local_38;
  int iStack_34;
  
  FWeakObjectPtr::operator=(&local_res20);
  local_48[0] = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,local_48);
  plVar4 = (longlong *)0x0;
  plVar3 = plVar4;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
  }
  plVar5 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = plVar4;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar5;
  }
  if ((plVar4 != (longlong *)0x0) &&
     (iVar2 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
              ::Num(plVar4,param_3), 0 < iVar2)) {
    iStack_34 = -1;
    local_38 = param_3;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar4,(int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34),0);
    iVar2 = -1;
    if ((int)plVar4[9] != 0) {
      plVar3 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar3 = plVar4 + 7;
      }
      iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)plVar4[9] - 1U & (longlong)param_3) * 4);
      iStack_34 = iVar2;
      if (iVar2 != -1) {
        do {
          iVar1 = *(int *)(*plVar4 + 0x10 + (longlong)iVar2 * 0x18);
          iStack_34 = iVar2;
          if (*(int *)(*plVar4 + (longlong)iVar2 * 0x18) == param_3) break;
          iVar2 = iVar1;
          iStack_34 = iVar1;
        } while (iVar1 != -1);
      }
    }
    if (iStack_34 != -1) {
      return *(undefined8 *)(*plVar4 + 8 + (longlong)iVar2 * 0x18);
    }
  }
  return 0;
}



// FUNCTION 1406356f0 FUN_1406356f0 body=478 status=ok
// SIG undefined FUN_1406356f0(void)

/* WARNING: Removing unreachable block (ram,0x0001406358c5) */
/* WARNING: Removing unreachable block (ram,0x00014063584e) */

longlong FUN_1406356f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = USoUIInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = USoUIInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 1406358d0 FUN_1406358d0 body=521 status=ok
// SIG undefined FUN_1406358d0(void)

void FUN_1406358d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_98 [2];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  if (param_1 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x40);
    plVar9 = plVar10 + *(int *)(param_1 + 0x48);
    if (plVar10 != plVar9) {
      do {
        lVar1 = *plVar10;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140635973:
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_2[6];
          if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
            puVar6 = param_2 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_140635973;
          plVar3 = (longlong *)(**(code **)*puVar6)(puVar6,local_78);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_88 = (code *)*param_2;
        }
        if (lVar1 != 0) {
          plVar8 = *(longlong **)(lVar1 + 0x38);
          plVar3 = plVar8 + *(int *)(lVar1 + 0x40);
          for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
              lVar4 = FUN_1429c82e0();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                uVar5 = 0;
                local_98[0] = lVar1;
                if (local_48 != 0) {
                  plVar7 = local_78;
                  if (local_58 != (longlong *)0x0) {
                    plVar7 = local_58;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*plVar7 + 8))();
                  }
                }
                (*local_88)(uVar5,local_98);
              }
            }
          }
        }
        if (local_48 != 0) {
          plVar3 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar9 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140635ae0 FUN_140635ae0 body=521 status=ok
// SIG undefined FUN_140635ae0(void)

void FUN_140635ae0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_98 [2];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  if (param_1 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x40);
    plVar9 = plVar10 + *(int *)(param_1 + 0x48);
    if (plVar10 != plVar9) {
      do {
        lVar1 = *plVar10;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140635b83:
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_2[6];
          if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
            puVar6 = param_2 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_140635b83;
          plVar3 = (longlong *)(**(code **)*puVar6)(puVar6,local_78);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_88 = (code *)*param_2;
        }
        if (lVar1 != 0) {
          plVar8 = *(longlong **)(lVar1 + 0x38);
          plVar3 = plVar8 + *(int *)(lVar1 + 0x40);
          for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
              lVar4 = FUN_1429c8410();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                uVar5 = 0;
                local_98[0] = lVar1;
                if (local_48 != 0) {
                  plVar7 = local_78;
                  if (local_58 != (longlong *)0x0) {
                    plVar7 = local_58;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*plVar7 + 8))();
                  }
                }
                (*local_88)(uVar5,local_98);
              }
            }
          }
        }
        if (local_48 != 0) {
          plVar3 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar9 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140635cf0 FUN_140635cf0 body=521 status=ok
// SIG undefined FUN_140635cf0(void)

void FUN_140635cf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_98 [2];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  if (param_1 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x40);
    plVar9 = plVar10 + *(int *)(param_1 + 0x48);
    if (plVar10 != plVar9) {
      do {
        lVar1 = *plVar10;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140635d93:
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_2[6];
          if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
            puVar6 = param_2 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_140635d93;
          plVar3 = (longlong *)(**(code **)*puVar6)(puVar6,local_78);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_88 = (code *)*param_2;
        }
        if (lVar1 != 0) {
          plVar8 = *(longlong **)(lVar1 + 0x38);
          plVar3 = plVar8 + *(int *)(lVar1 + 0x40);
          for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
              lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                uVar5 = 0;
                local_98[0] = lVar1;
                if (local_48 != 0) {
                  plVar7 = local_78;
                  if (local_58 != (longlong *)0x0) {
                    plVar7 = local_58;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*plVar7 + 8))();
                  }
                }
                (*local_88)(uVar5,local_98);
              }
            }
          }
        }
        if (local_48 != 0) {
          plVar3 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar9 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140635f00 FUN_140635f00 body=521 status=ok
// SIG undefined FUN_140635f00(void)

void FUN_140635f00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_98 [2];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  if (param_1 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x40);
    plVar9 = plVar10 + *(int *)(param_1 + 0x48);
    if (plVar10 != plVar9) {
      do {
        lVar1 = *plVar10;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140635fa3:
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_2[6];
          if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
            puVar6 = param_2 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_140635fa3;
          plVar3 = (longlong *)(**(code **)*puVar6)(puVar6,local_78);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_88 = (code *)*param_2;
        }
        if (lVar1 != 0) {
          plVar8 = *(longlong **)(lVar1 + 0x38);
          plVar3 = plVar8 + *(int *)(lVar1 + 0x40);
          for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
              lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                uVar5 = 0;
                local_98[0] = lVar1;
                if (local_48 != 0) {
                  plVar7 = local_78;
                  if (local_58 != (longlong *)0x0) {
                    plVar7 = local_58;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*plVar7 + 8))();
                  }
                }
                (*local_88)(uVar5,local_98);
              }
            }
          }
        }
        if (local_48 != 0) {
          plVar3 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar9 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140636110 FUN_140636110 body=442 status=ok
// SIG undefined FUN_140636110(void)

void FUN_140636110(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_88 [2];
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  plVar4 = (longlong *)0x0;
  if (param_1 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x40);
    plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff);
    if (plVar7 + *(int *)(param_1 + 0x48) < plVar7) {
      plVar8 = plVar4;
    }
    if (plVar8 != (longlong *)0x0) {
      plVar5 = plVar4;
      do {
        lVar1 = *plVar7;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_1406361bf:
          local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_2[6];
          if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
            puVar6 = param_2 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_1406361bf;
          plVar2 = (longlong *)(**(code **)*puVar6)(puVar6,local_68);
          (**(code **)(*plVar2 + 8))(plVar2);
          local_78 = (code *)*param_2;
        }
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
          plVar2 = plVar4;
          local_88[0] = lVar1;
          if (local_38 != 0) {
            plVar3 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar3 = plVar4;
            }
            plVar3 = (longlong *)((ulonglong)plVar3 | (ulonglong)local_48);
            if (plVar3 != (longlong *)0x0) {
              plVar2 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3);
            }
          }
          (*local_78)(plVar2,local_88);
        }
        if (local_38 != 0) {
          plVar2 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar2 = local_48;
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 1;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
      } while (plVar5 != plVar8);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406362d0 FUN_1406362d0 body=521 status=ok
// SIG undefined FUN_1406362d0(void)

void FUN_1406362d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_98 [2];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  if (param_1 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x40);
    plVar9 = plVar10 + *(int *)(param_1 + 0x48);
    if (plVar10 != plVar9) {
      do {
        lVar1 = *plVar10;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140636373:
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          puVar6 = (undefined8 *)param_2[6];
          if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
            puVar6 = param_2 + 2;
          }
          if (puVar6 == (undefined8 *)0x0) goto LAB_140636373;
          plVar3 = (longlong *)(**(code **)*puVar6)(puVar6,local_78);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_88 = (code *)*param_2;
        }
        if (lVar1 != 0) {
          plVar8 = *(longlong **)(lVar1 + 0x38);
          plVar3 = plVar8 + *(int *)(lVar1 + 0x40);
          for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
              lVar4 = FUN_1429ce530();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                uVar5 = 0;
                local_98[0] = lVar1;
                if (local_48 != 0) {
                  plVar7 = local_78;
                  if (local_58 != (longlong *)0x0) {
                    plVar7 = local_58;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*plVar7 + 8))();
                  }
                }
                (*local_88)(uVar5,local_98);
              }
            }
          }
        }
        if (local_48 != 0) {
          plVar3 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar9 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406364e0 FUN_1406364e0 body=437 status=ok
// SIG undefined FUN_1406364e0(void)

ulonglong FUN_1406364e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  
  lVar2 = param_1[3];
  lVar4 = param_1[2];
  *param_2 = lVar4;
  iVar7 = (int)lVar2 + -1;
  if ((int)lVar2 == 0) {
    iVar7 = 0;
  }
  param_2[1] = lVar4 + (longlong)iVar7 * 2;
  lVar2 = param_1[1];
  lVar4 = *param_1;
  *param_3 = lVar4;
  iVar7 = (int)lVar2 + -1;
  if ((int)lVar2 == 0) {
    iVar7 = 0;
  }
  param_3[1] = lVar4 + (longlong)iVar7 * 2;
  psVar5 = (short *)*param_2;
  psVar6 = (short *)param_2[1];
  psVar8 = psVar5;
  if (psVar5 != (short *)0x0) {
    for (; (psVar8 < psVar6 && (*psVar8 == 0x20)); psVar8 = psVar8 + 1) {
      psVar5 = (short *)(*param_2 + 2);
      *param_2 = (longlong)psVar5;
    }
  }
  if (psVar6 != (short *)0x0) {
    while ((psVar6 = psVar6 + -1, psVar5 < psVar6 && (*psVar6 == 0x20))) {
      param_2[1] = param_2[1] + -2;
    }
  }
  psVar5 = (short *)*param_3;
  psVar6 = (short *)param_3[1];
  psVar8 = psVar5;
  if (psVar5 != (short *)0x0) {
    for (; (psVar8 < psVar6 && (*psVar8 == 0x20)); psVar8 = psVar8 + 1) {
      psVar5 = (short *)(*param_3 + 2);
      *param_3 = (longlong)psVar5;
    }
  }
  psVar8 = psVar6;
  if (psVar6 != (short *)0x0) {
    while ((psVar8 = psVar8 + -1, psVar5 < psVar8 && (*psVar8 == 0x20))) {
      psVar6 = (short *)(param_3[1] + -2);
      param_3[1] = (longlong)psVar6;
    }
  }
  psVar8 = (short *)param_2[1];
  psVar5 = (short *)*param_2;
  if ((((longlong)psVar8 - (longlong)psVar5 & 0xfffffffffffffffeU) == 0) &&
     (psVar1 = (short *)*param_3, (longlong)psVar6 - (longlong)psVar1 >> 1 != 0)) {
    *param_2 = (longlong)psVar1;
    psVar8 = (short *)param_3[1];
    param_2[1] = (longlong)psVar8;
    psVar5 = psVar1;
  }
  if (((longlong)psVar8 - (longlong)psVar5 >> 1 != 0) &&
     ((param_3[1] - *param_3 & 0xfffffffffffffffeU) == 0)) {
    *param_3 = (longlong)psVar5;
    param_3[1] = param_2[1];
    psVar5 = (short *)*param_2;
    psVar8 = (short *)param_2[1];
  }
  uVar3 = (longlong)psVar8 - (longlong)psVar5 >> 1;
  if (uVar3 != 0) {
    for (; psVar5 != psVar8; psVar5 = psVar5 + 1) {
      if (*psVar5 == 0x26) goto LAB_14063668d;
    }
    psVar5 = (short *)*param_3;
    lVar4 = param_3[1] - (longlong)psVar5;
    uVar3 = lVar4 >> 1;
    if (uVar3 != 0) {
      while( true ) {
        if (psVar5 == (short *)param_3[1]) {
          return CONCAT71((int7)(lVar4 >> 9),1);
        }
        if (*psVar5 == 0x2e) break;
        psVar5 = psVar5 + 1;
      }
    }
  }
LAB_14063668d:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1406366a0 FUN_1406366a0 body=172 status=ok
// SIG undefined FUN_1406366a0(void)

undefined8 FUN_1406366a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  IMAGE_DOS_HEADER *pIVar3;
  
  switch(param_4) {
  case 0:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000001;
    break;
  case 1:
    pIVar3 = &IMAGE_DOS_HEADER_140000000;
    break;
  case 2:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000005;
    break;
  case 3:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000004;
    break;
  case 4:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000003;
    break;
  case 5:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000002;
    break;
  default:
    pIVar3 = (IMAGE_DOS_HEADER *)(ulonglong)param_4;
  }
  uVar1 = FUN_14065e340(pIVar3);
  uVar2 = FUN_14065e2d0(param_4);
  FString::PrintfImpl(param_1,L"expected a value %s another, but %d %s %d",uVar2,param_2,uVar1,
                      param_3);
  return param_1;
}



// FUNCTION 140636770 FUN_140636770 body=183 status=ok
// SIG undefined FUN_140636770(void)

undefined8 FUN_140636770(undefined8 param_1,float param_2,float param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  IMAGE_DOS_HEADER *pIVar3;
  
  switch(param_4) {
  case 0:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000001;
    break;
  case 1:
    pIVar3 = &IMAGE_DOS_HEADER_140000000;
    break;
  case 2:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000005;
    break;
  case 3:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000004;
    break;
  case 4:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000003;
    break;
  case 5:
    pIVar3 = (IMAGE_DOS_HEADER *)0x140000002;
    break;
  default:
    pIVar3 = (IMAGE_DOS_HEADER *)(ulonglong)param_4;
  }
  uVar1 = FUN_14065e340(pIVar3);
  uVar2 = FUN_14065e2d0(param_4);
  FString::PrintfImpl(param_1,L"expected a value %s another, but %f %s %f",uVar2,(double)param_2,
                      uVar1,(double)param_3);
  return param_1;
}



// FUNCTION 140636840 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 1406368e0 NewObject<UTextureRenderTarget2D> body=89 status=ok
// SIG undefined NewObject<UTextureRenderTarget2D>(void)

void NewObject<UTextureRenderTarget2D>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UTexture2D::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140636940 FUN_140636940 body=30 status=ok
// SIG undefined FUN_140636940(void)

void FUN_140636940(undefined8 param_1)

{
  FUN_142194380(param_1,0x18,1,0,0);
  return;
}



// FUNCTION 140636960 _Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*> body=342 status=ok
// SIG undefined _Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>(void)

void std::
     vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
     ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
               (longlong *param_1,void *param_2,longlong param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pvVar1 = (void *)*param_1;
  sVar3 = param_3 - (longlong)param_2;
  uVar5 = param_1[1] - (longlong)pvVar1 >> 4;
  uVar2 = (longlong)sVar3 >> 4;
  uVar4 = param_1[2] - (longlong)pvVar1 >> 4;
  if (uVar4 < uVar2) {
    if (0xfffffffffffffff < uVar2) {
LAB_140636ab1:
                    /* WARNING: Subroutine does not return */
      vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    uVar5 = uVar2;
    if ((uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) && (uVar5 = (uVar4 >> 1) + uVar4, uVar5 < uVar2)
       ) {
      uVar5 = uVar2;
    }
    if (pvVar1 != (void *)0x0) {
      allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::deallocate(param_1,pvVar1);
    }
    pvVar1 = (void *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar5 != 0) {
      if (0xfffffffffffffff < uVar5) goto LAB_140636ab1;
      pvVar1 = (void *)allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate(param_1,uVar5);
      *param_1 = (longlong)pvVar1;
      param_1[2] = (longlong)(uVar5 * 0x10 + (longlong)pvVar1);
      param_1[1] = (longlong)pvVar1;
    }
    ::_guard_xfg_dispatch_icall_nop(pvVar1,param_2,sVar3);
    param_1[1] = (longlong)pvVar1 + sVar3;
  }
  else if (uVar5 < uVar2) {
    sVar3 = uVar5 * 0x10;
    ::_guard_xfg_dispatch_icall_nop(pvVar1,param_2,sVar3);
    pvVar1 = (void *)param_1[1];
    param_2 = (void *)(sVar3 + (longlong)param_2);
    sVar3 = param_3 - (longlong)param_2;
    ::_guard_xfg_dispatch_icall_nop(pvVar1,param_2,sVar3);
    param_1[1] = sVar3 + (longlong)pvVar1;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(pvVar1,param_2,sVar3);
    param_1[1] = (longlong)(uVar2 * 0x10 + (longlong)pvVar1);
  }
  return;
}



// FUNCTION 140636ac0 FUN_140636ac0 body=451 status=ok
// SIG undefined FUN_140636ac0(void)

void FUN_140636ac0(undefined8 param_1,void *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,void *param_6,longlong param_7,undefined1 param_8,void *param_9
                  ,void *param_10,longlong param_11,longlong param_12)

{
  size_t _Size;
  void *_Dst;
  
  param_4 = param_4 - param_11;
  _Dst = param_10;
  if ((param_4 != 0) && (_Dst = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        _Dst = param_10;
        if ((param_9 != param_2) && (_Dst = param_9, param_2 != param_10)) {
          __std_reverse_trivially_swappable_4(param_9);
          __std_reverse_trivially_swappable_4(param_2,param_10);
          __std_reverse_trivially_swappable_4(param_9,param_10);
          _Dst = (void *)((longlong)param_9 + ((longlong)param_10 - (longlong)param_2 >> 2) * 4);
        }
      }
      else {
        _Size = (longlong)param_10 - (longlong)param_2;
        _guard_xfg_dispatch_icall_nop(param_6,param_2,_Size);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_10 - ((longlong)param_2 - (longlong)param_9)),param_9,
                   (longlong)param_2 - (longlong)param_9);
        _guard_xfg_dispatch_icall_nop(param_9,param_6,_Size);
        _Dst = (void *)(_Size + (longlong)param_9);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_6,param_9,(longlong)param_2 - (longlong)param_9);
      _guard_xfg_dispatch_icall_nop(param_9,param_2,(longlong)param_10 - (longlong)param_2);
      _Dst = (void *)(((longlong)param_10 - (longlong)param_2) + (longlong)param_9);
      _guard_xfg_dispatch_icall_nop(_Dst,param_6,(longlong)param_2 - (longlong)param_9);
    }
  }
  FUN_1406374c0(param_1,param_9,_Dst,param_11,param_12,param_6,param_7,param_8);
  FUN_1406374c0(_Dst,param_10,param_3,param_4);
  return;
}



// FUNCTION 140636c90 FUN_140636c90 body=451 status=ok
// SIG undefined FUN_140636c90(void)

void FUN_140636c90(undefined8 param_1,void *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,void *param_6,longlong param_7,undefined1 param_8,void *param_9
                  ,void *param_10,longlong param_11,longlong param_12)

{
  size_t _Size;
  void *_Dst;
  
  param_4 = param_4 - param_11;
  _Dst = param_10;
  if ((param_4 != 0) && (_Dst = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        _Dst = param_10;
        if ((param_9 != param_2) && (_Dst = param_9, param_2 != param_10)) {
          __std_reverse_trivially_swappable_8(param_9);
          __std_reverse_trivially_swappable_8(param_2,param_10);
          __std_reverse_trivially_swappable_8(param_9,param_10);
          _Dst = (void *)((longlong)param_9 + ((longlong)param_10 - (longlong)param_2 >> 3) * 8);
        }
      }
      else {
        _Size = (longlong)param_10 - (longlong)param_2;
        _guard_xfg_dispatch_icall_nop(param_6,param_2,_Size);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_10 - ((longlong)param_2 - (longlong)param_9)),param_9,
                   (longlong)param_2 - (longlong)param_9);
        _guard_xfg_dispatch_icall_nop(param_9,param_6,_Size);
        _Dst = (void *)(_Size + (longlong)param_9);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_6,param_9,(longlong)param_2 - (longlong)param_9);
      _guard_xfg_dispatch_icall_nop(param_9,param_2,(longlong)param_10 - (longlong)param_2);
      _Dst = (void *)(((longlong)param_10 - (longlong)param_2) + (longlong)param_9);
      _guard_xfg_dispatch_icall_nop(_Dst,param_6,(longlong)param_2 - (longlong)param_9);
    }
  }
  FUN_1406375f0(param_1,param_9,_Dst,param_11,param_12,param_6,param_7,param_8);
  FUN_1406375f0(_Dst,param_10,param_3,param_4);
  return;
}



// FUNCTION 140636e60 FUN_140636e60 body=500 status=ok
// SIG undefined FUN_140636e60(void)

void FUN_140636e60(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7,undefined1 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_4 = param_4 - param_11;
  lVar2 = param_10;
  if ((param_4 != 0) && (lVar2 = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        lVar2 = param_10;
        if ((param_9 != param_2) && (lVar2 = param_9, param_2 != param_10)) {
          FUN_14063c3a0(param_9);
          FUN_14063c3a0(param_2,param_10);
          FUN_14063c3a0(param_9,param_10);
          lVar2 = (param_10 - param_2 & 0xfffffffffffffff0U) + param_9;
        }
      }
      else {
        plVar1 = (longlong *)FUN_14063cdf0(param_2,param_10,param_6);
        FUN_14063aef0(param_9,param_2,param_10);
        lVar2 = FUN_14063af70(param_6,plVar1,param_9);
        for (plVar3 = param_6; plVar3 != plVar1; plVar3 = plVar3 + 2) {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    else {
      plVar1 = (longlong *)FUN_14063cdf0(param_9,param_2,param_6);
      lVar2 = FUN_14063af70(param_2,param_10,param_9);
      FUN_14063af70(param_6,plVar1,lVar2);
      for (plVar3 = param_6; plVar3 != plVar1; plVar3 = plVar3 + 2) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FUN_140637a80(param_1,param_9,lVar2,param_11,param_12,param_6,param_7,param_8);
  FUN_140637a80(lVar2,param_10,param_3,param_4);
  return;
}



// FUNCTION 140637060 FUN_140637060 body=461 status=ok
// SIG undefined FUN_140637060(void)

void FUN_140637060(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_5 < param_4) {
    pfVar1 = (float *)(param_2 + (param_5 >> 1) * 4);
    lVar5 = param_2 - param_1 >> 2;
    lVar6 = param_1;
    if (0 < lVar5) {
      fVar2 = *pfVar1;
      do {
        lVar4 = lVar5 >> 1;
        fVar3 = *(float *)(lVar6 + lVar4 * 4);
        if (param_8 == '\0') {
          bVar7 = fVar3 < fVar2;
        }
        else {
          bVar7 = fVar2 < fVar3;
        }
        if (bVar7 || fVar3 == fVar2) {
          lVar6 = lVar6 + lVar4 * 4 + 4;
          lVar4 = lVar5 + (-1 - lVar4);
        }
        lVar5 = lVar4;
      } while (0 < lVar4);
    }
    FUN_140636ac0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6,pfVar1,
                  lVar6 - param_1 >> 2,param_5 >> 1);
  }
  else {
    lVar5 = param_3 - param_2 >> 2;
    pfVar1 = (float *)(param_1 + (param_4 >> 1) * 4);
    lVar6 = param_2;
    if (0 < lVar5) {
      fVar2 = *pfVar1;
      do {
        lVar4 = lVar5 >> 1;
        fVar3 = *(float *)(lVar6 + lVar4 * 4);
        if (param_8 == '\0') {
          bVar7 = fVar2 < fVar3;
        }
        else {
          bVar7 = fVar3 < fVar2;
        }
        if (!bVar7 && fVar2 != fVar3) {
          lVar6 = lVar6 + lVar4 * 4 + 4;
          lVar4 = lVar5 + (-1 - lVar4);
        }
        lVar5 = lVar4;
      } while (0 < lVar4);
    }
    FUN_140636ac0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pfVar1,lVar6,
                  param_4 >> 1,lVar6 - param_2 >> 2);
  }
  return;
}



// FUNCTION 140637230 FUN_140637230 body=641 status=ok
// SIG undefined FUN_140637230(void)

void FUN_140637230(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_5 < param_4) {
    lVar5 = param_5 >> 1;
    puVar10 = param_2 + lVar5 * 2;
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 4;
    puVar9 = param_1;
    while (lVar1 = lVar7, 0 < lVar1) {
      lVar7 = lVar1 >> 1;
      puVar6 = puVar9 + lVar7 * 2;
      if (param_8 == '\0') {
        if (*(int *)(puVar6 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar6;
        }
        if (*(int *)(puVar10 + 1) == 0) {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar4);
          bVar8 = iVar2 < 0;
        }
        else {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*puVar10,puVar4);
          bVar8 = iVar2 < 0;
        }
      }
      else {
        if (*(int *)(puVar6 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar6;
        }
        if (*(int *)(puVar10 + 1) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = (undefined2 *)*puVar10;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
        bVar8 = 0 < iVar2;
      }
      if (!bVar8) {
        puVar9 = puVar6 + 2;
        lVar7 = lVar1 + (-1 - lVar7);
      }
    }
    lVar7 = (longlong)puVar9 - (longlong)param_1 >> 4;
  }
  else {
    lVar7 = param_4 >> 1;
    puVar9 = param_1 + lVar7 * 2;
    lVar5 = param_3 - (longlong)param_2 >> 4;
    puVar10 = param_2;
    while (lVar1 = lVar5, 0 < lVar1) {
      lVar5 = lVar1 >> 1;
      puVar6 = puVar10 + lVar5 * 2;
      if (param_8 == '\0') {
        if (*(int *)(puVar9 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar9;
        }
        if (*(int *)(puVar6 + 1) == 0) {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar4);
          bVar8 = iVar2 < 0;
        }
        else {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*puVar6,puVar4);
          bVar8 = iVar2 < 0;
        }
      }
      else {
        if (*(int *)(puVar9 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar9;
        }
        if (*(int *)(puVar6 + 1) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = (undefined2 *)*puVar6;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
        bVar8 = 0 < iVar2;
      }
      if (bVar8) {
        puVar10 = puVar6 + 2;
        lVar5 = lVar1 + (-1 - lVar5);
      }
    }
    lVar5 = (longlong)puVar10 - (longlong)param_2 >> 4;
  }
  FUN_140636e60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar9,puVar10,lVar7
                ,lVar5);
  return;
}



// FUNCTION 1406374c0 FUN_1406374c0 body=295 status=ok
// SIG undefined FUN_1406374c0(void)

void FUN_1406374c0(float *param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  bool bVar7;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    fVar1 = *param_2;
    while( true ) {
      fVar2 = *param_1;
      if (param_8 == '\0') {
        bVar7 = fVar2 < fVar1;
      }
      else {
        bVar7 = fVar1 < fVar2;
      }
      if (!bVar7 && fVar2 != fVar1) break;
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      pfVar6 = param_3;
      lVar5 = param_5;
      param_3 = pfVar6 + -1;
      if (param_2 == param_3) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_3 + (4 - ((longlong)param_2 - (longlong)param_1))),
                   param_1,(longlong)param_2 - (longlong)param_1);
        *param_1 = fVar1;
        return;
      }
      fVar3 = param_2[-1];
      fVar4 = *param_3;
      if (param_8 == '\0') {
        bVar7 = fVar3 < fVar4;
      }
      else {
        bVar7 = fVar4 < fVar3;
      }
      param_5 = lVar5 + -1;
    } while (bVar7 || fVar3 == fVar4);
    if (param_4 == 1) {
      _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)pfVar6 - (longlong)param_2);
      *(float *)(((longlong)pfVar6 - (longlong)param_2) + (longlong)param_1) = fVar2;
    }
    else {
      FUN_140637d30(param_1,fVar4,pfVar6,param_4,lVar5,param_6,param_7,param_8);
    }
  }
  return;
}



// FUNCTION 1406375f0 FUN_1406375f0 body=1155 status=ok
// SIG undefined FUN_1406375f0(void)

/* WARNING: Removing unreachable block (ram,0x00014063788f) */
/* WARNING: Removing unreachable block (ram,0x00014063789c) */

void FUN_1406375f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,char param_8)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong lVar15;
  char cVar16;
  longlong *local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  if (param_2 == param_3) {
    return;
  }
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res20 = param_4;
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_2;
    lVar13 = *param_1;
    if (lVar1 == 0) {
      if (lVar13 != 0) {
        cVar16 = param_8 == '\0';
        goto LAB_140637775;
      }
    }
    else {
      cVar16 = param_8;
      if (lVar13 != 0) {
        if (param_8 == '\0') {
          local_res10 = *(longlong **)(lVar13 + 0x18);
          bVar5 = true;
          bVar2 = true;
          FName::ToString(&local_res10,&local_88);
          local_res18 = *(longlong *)(lVar1 + 0x18);
          FName::ToString(&local_res18,&local_98);
          puVar12 = &DAT_143f3eda8;
          puVar14 = &DAT_143f3eda8;
          if (local_80 != 0) {
            puVar14 = local_88;
          }
          if (local_90 != 0) {
            puVar12 = local_98;
          }
        }
        else {
          local_a8 = *(undefined8 *)(lVar1 + 0x18);
          bVar4 = true;
          bVar3 = true;
          FName::ToString(&local_a8,&local_78);
          local_a0 = *(undefined8 *)(lVar13 + 0x18);
          FName::ToString(&local_a0,&local_68);
          puVar14 = &DAT_143f3eda8;
          if (local_70 != 0) {
            puVar14 = local_78;
          }
          puVar12 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar12 = local_68;
          }
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
        cVar16 = iVar9 < 0;
        if ((bVar3) && (bVar3 = false, local_68 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar4) && (bVar4 = false, local_78 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (bVar5 = false, local_98 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar2) && (bVar2 = false, local_88 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
      }
LAB_140637775:
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      if (cVar16 != '\0') break;
    }
    local_res20 = local_res20 + -1;
    param_1 = param_1 + 1;
  } while( true );
LAB_1406377a0:
  local_res10 = param_3;
  local_res18 = param_5;
  param_5 = local_res18 + -1;
  param_3 = local_res10 + -1;
  if (param_2 == param_3) {
    lVar1 = *param_2;
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_3 + (8 - ((longlong)param_2 - (longlong)param_1))),param_1,
               (longlong)param_2 - (longlong)param_1);
    *param_1 = lVar1;
    return;
  }
  lVar1 = *param_3;
  lVar13 = param_2[-1];
  if (lVar1 == 0) {
    if (lVar13 == 0) goto LAB_1406377a0;
    cVar16 = param_8 == '\0';
  }
  else {
    cVar16 = param_8;
    if (lVar13 != 0) {
      if (param_8 == '\0') {
        local_a0 = *(undefined8 *)(lVar13 + 0x18);
        bVar8 = true;
        bVar7 = true;
        FName::ToString(&local_a0,&local_48);
        local_a8 = *(undefined8 *)(lVar1 + 0x18);
        FName::ToString(&local_a8,&local_58);
        puVar12 = &DAT_143f3eda8;
        puVar14 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar14 = local_48;
        }
        if (local_50 != 0) {
          puVar12 = local_58;
        }
      }
      else {
        local_78 = *(undefined2 **)(lVar1 + 0x18);
        bVar6 = true;
        FName::ToString(&local_78,&local_98);
        local_68 = *(undefined2 **)(lVar13 + 0x18);
        FName::ToString(&local_68,&local_88);
        puVar14 = &DAT_143f3eda8;
        if (local_90 != 0) {
          puVar14 = local_98;
        }
        puVar12 = &DAT_143f3eda8;
        if (local_80 != 0) {
          puVar12 = local_88;
        }
      }
      iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
      cVar16 = iVar9 < 0;
      if ((bVar6) && (bVar6 = false, local_98 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar7) && (bVar7 = false, local_58 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar8) && (bVar8 = false, local_48 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
    }
  }
  lVar1 = local_res20;
  if (cVar16 != '\0') {
    if (local_res20 == 1) {
      lVar1 = *param_1;
      local_res10 = (longlong *)((longlong)local_res10 - (longlong)param_2);
      _guard_xfg_dispatch_icall_nop(param_1,param_2,(size_t)local_res10);
      *(longlong *)((longlong)local_res10 + (longlong)param_1) = lVar1;
    }
    else if ((local_res18 < local_res20) || (param_7 < local_res20)) {
      if (param_7 < local_res18) {
        if (local_res18 < local_res20) {
          lVar13 = local_res18 >> 1;
          plVar10 = param_2 + lVar13;
          plVar11 = (longlong *)FUN_14063d700(param_1,param_2,plVar10,param_8);
          lVar15 = (longlong)plVar11 - (longlong)param_1 >> 3;
        }
        else {
          lVar15 = local_res20 >> 1;
          plVar11 = param_1 + lVar15;
          plVar10 = (longlong *)FUN_14063d020(param_2,local_res10,plVar11);
          lVar13 = (longlong)plVar10 - (longlong)param_2 >> 3;
        }
        FUN_140636c90(param_1,param_2,local_res10,lVar1,local_res18,param_6,param_7,param_8,plVar11,
                      plVar10,lVar15,lVar13);
      }
      else {
        FUN_1406392d0(param_1,param_2,local_res10,param_6,param_8);
      }
    }
    else {
      FUN_140638e60(param_1,param_2,local_res10,param_6,param_8);
    }
    return;
  }
  goto LAB_1406377a0;
}



// FUNCTION 140637a80 FUN_140637a80 body=688 status=ok
// SIG undefined FUN_140637a80(void)

void FUN_140637a80(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,char param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_38 [2];
  
  if (param_2 == param_3) {
    return;
  }
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (param_8 == '\0') {
      if ((int)param_1[1] == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_1;
      }
      if ((int)param_2[1] == 0) {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar6);
        bVar8 = iVar3 < 0;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*param_2,puVar6);
        bVar8 = iVar3 < 0;
      }
    }
    else {
      if ((int)param_1[1] == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_1;
      }
      if ((int)param_2[1] == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      bVar8 = 0 < iVar3;
    }
    if (bVar8) break;
    param_1 = param_1 + 2;
    param_4 = param_4 + -1;
  }
  do {
    plVar4 = param_3;
    lVar7 = param_5;
    param_3 = plVar4 + -2;
    if (param_2 == param_3) {
      lVar7 = *param_2;
      *param_2 = 0;
      lVar2 = param_2[1];
      uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
      FUN_14063aef0(param_1,param_2,plVar4);
      if (param_1 != local_38) {
        if (*param_1 != 0) {
          FMemory::Free();
        }
        *param_1 = lVar7;
        *(int *)(param_1 + 1) = (int)lVar2;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
        return;
      }
      goto joined_r0x000140637cfe;
    }
    if (param_8 == '\0') {
      if ((int)param_2[-1] == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)param_2[-2];
      }
      if ((int)plVar4[-1] == 0) {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar6);
        bVar8 = iVar3 < 0;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*param_3,puVar6);
        bVar8 = iVar3 < 0;
      }
    }
    else {
      if ((int)param_2[-1] == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)param_2[-2];
      }
      if ((int)plVar4[-1] == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_3;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      bVar8 = 0 < iVar3;
    }
    param_5 = lVar7 + -1;
  } while (!bVar8);
  if (param_4 == 1) {
    lVar7 = *param_1;
    *param_1 = 0;
    lVar2 = param_1[1];
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    plVar4 = (longlong *)FUN_14063af70(param_2,plVar4,param_1);
    if (plVar4 == local_38) {
joined_r0x000140637cfe:
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    else {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      *plVar4 = lVar7;
      *(int *)(plVar4 + 1) = (int)lVar2;
      *(undefined4 *)((longlong)plVar4 + 0xc) = uVar1;
    }
  }
  else if ((lVar7 < param_4) || (param_7 < param_4)) {
    if (param_7 < lVar7) {
      FUN_140637230(param_1,param_2,plVar4,param_4,lVar7,param_6,param_7,param_8);
    }
    else {
      FUN_140639500();
    }
  }
  else {
    FUN_140639080(param_1,param_2,plVar4,param_6,param_8);
  }
  return;
}


